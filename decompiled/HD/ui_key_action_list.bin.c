task_0_event_1(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_int = 0; // 0x1f PushV
	var_22_bool = 0; // 0x20 PushV
	func_20(var_21_int, var_22_bool); // 0x21 NEW_2
	var_23_bool = var_22_bool == 0; // 0x23 Not
	if(var_23_bool == 0) goto Label_38; // 0x24 JumpB
	return 8; // 0x25 Return
	
Label_38:
	GetKeyboardState(var_18_object); // 0x26 Func
	var_24_bool = var_18_object == 0; // 0x28 Not
	if(var_24_bool == 0) goto Label_46; // 0x29 JumpB
	var_25_string = "GetKeyboardState fail"; // 0x2a PushS
	Trace(var_25_string); // 0x2b Func
	return 8; // 0x2d Return
	
Label_46:
	var_19_int = 0; // 0x2e MovI
	
Label_47:
	var_26_int = 512; // 0x2f PushI
	var_27_bool = var_19_int < var_26_int; // 0x30 LT
	if(var_27_bool == 0) goto Label_70; // 0x31 JumpB
	IsValidVirtualKey(var_20_bool, var_19_int); // 0x32 Func
	var_28_bool = var_20_bool; // 0x34 Push
	if(var_28_bool == 0) goto Label_67; // 0x35 JumpB
	GetKeyState(var_21_int, var_19_int); // 0x36 ObjFunc
	var_29_int = 128; // 0x38 PushI
	var_30_int = var_21_int & var_29_int; // 0x39 And
	if(var_30_int == 0) goto Label_66; // 0x3a JumpB
	var_31_bool = var_12_bool; // 0x3b PushT
	if(var_31_bool == 0) goto Label_65; // 0x3c JumpB
	var_32_int = 0; // 0x3d PushV
	var_32_int = var_19_int; // 0x3e Mov
	func_73(var_19_int, var_20_bool, var_21_int, var_32_int); // 0x3f NEW_2
	
Label_65:
	return 8; // 0x41 Return
	
Label_66:
	goto Label_67; // 0x42 Jump
	
Label_67:
	var_174_int = 1; // 0x43 PushI
	var_19_int = var_19_int + var_174_int; // 0x44 Add2
	goto Label_47; // 0x45 Jump
	
Label_70:
	var_12_bool = 1; // 0x46 TMovB
	return 8; // 0x47 Return
}


task_0_event_2(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0; // 0x9e PushV
	func_20(var_14_int, var_15_bool); // 0x9f NEW_2
	var_16_bool = var_15_bool == 0; // 0xa1 Not
	if(var_16_bool == 0) goto Label_168; // 0xa2 JumpB
	var_17_int = 0; var_18_int = 0; // 0xa3 PushV
	var_17_int = var_13_int; // 0xa4 Mov
	var_18_int = var_14_int; // 0xa5 Mov
	func_617(var_17_int, var_18_int); // 0xa6 NEW_2
	
Label_168:
	return 0; // 0xa8 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0; // 0xaa PushV
	func_20(var_14_int, var_15_bool); // 0xab NEW_2
	var_16_bool = var_15_bool == 0; // 0xad Not
	if(var_16_bool == 0) goto Label_180; // 0xae JumpB
	var_17_int = 0; var_18_int = 0; // 0xaf PushV
	var_17_int = var_13_int; // 0xb0 Mov
	var_18_int = var_14_int; // 0xb1 Mov
	func_651(var_17_int, var_18_int); // 0xb2 NEW_2
	
Label_180:
	return 0; // 0xb4 Return
}


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0; // 0xb6 PushV
	func_20(var_14_int, var_15_bool); // 0xb7 NEW_2
	var_16_bool = var_15_bool == 0; // 0xb9 Not
	if(var_16_bool == 0) goto Label_192; // 0xba JumpB
	var_17_int = 0; var_18_int = 0; // 0xbb PushV
	var_17_int = var_13_int; // 0xbc Mov
	var_18_int = var_14_int; // 0xbd Mov
	func_634(var_17_int, var_18_int); // 0xbe NEW_2
	
Label_192:
	return 0; // 0xc0 Return
}


task_0_event_7(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0; // 0xc2 PushV
	func_20(var_14_int, var_15_bool); // 0xc3 NEW_2
	var_16_bool = var_15_bool == 0; // 0xc5 Not
	if(var_16_bool == 0) goto Label_204; // 0xc6 JumpB
	var_17_int = 0; var_18_int = 0; // 0xc7 PushV
	var_17_int = var_13_int; // 0xc8 Mov
	var_18_int = var_14_int; // 0xc9 Mov
	func_668(var_17_int, var_18_int); // 0xca NEW_2
	
Label_204:
	return 0; // 0xcc Return
}


task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int, var_15_float)
{
	var_16_bool = 0; // 0xce PushV
	func_20(var_15_float, var_16_bool); // 0xcf NEW_2
	var_17_bool = var_16_bool == 0; // 0xd1 Not
	if(var_17_bool == 0) goto Label_217; // 0xd2 JumpB
	var_18_int = 0; var_19_int = 0; var_20_float = 0; // 0xd3 PushV
	var_18_int = var_13_int; // 0xd4 Mov
	var_19_int = var_14_int; // 0xd5 Mov
	var_20_float = var_15_float; // 0xd6 Mov
	func_605(var_19_int, var_20_float); // 0xd7 NEW_2
	
Label_217:
	return 0; // 0xd9 Return
}


task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; // 0x236 PushV
	var_21_int = 0; // 0x237 PushV
	func_13(var_21_int); // 0x238 NEW_2
	var_17_int = var_21_int; // 0x239 Mov
	var_24_int = 0; // 0x23b PushV
	func_18(var_24_int); // 0x23c NEW_2
	var_18_int = var_24_int; // 0x23d Mov
	var_19_int = 0; // 0x23f MovI
	
Label_576:
	var_25_bool = var_19_int < var_17_int; // 0x240 LT
	if(var_25_bool == 0) goto Label_589; // 0x241 JumpB
	var_26_float = var_19_int * var_18_int; // 0x242 Mult
	var_20_int = var_26_float + var_0_int; // 0x243 Add2
	var_27_int = 0; var_28_int = 0; var_29_int = 0; // 0x244 PushV
	var_27_int = var_19_int; // 0x245 Mov
	var_28_int = 0; // 0x246 MovI
	var_29_int = var_20_int; // 0x247 Mov
	func_226(var_19_int, var_20_int, var_27_int, var_28_int, var_29_int); // 0x248 NEW_2
	var_86_int = 1; // 0x24a PushI
	var_19_int = var_19_int + var_86_int; // 0x24b Add2
	goto Label_576; // 0x24c Jump
	
Label_589:
	return 8; // 0x24d Return
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_string, var_15_object)
{
	var_16_string = ""; // 0x24f PushV
	func_224(var_16_string); // 0x250 NEW_2
	var_17_bool = var_14_string == var_16_string; // 0x252 Eq
	if(var_17_bool == 0) goto Label_604; // 0x253 JumpB
	var_18_int = -var_13_int; // 0x254 Neg
	var_19_int = 0; // 0x255 PushV
	func_701(var_19_int); // 0x256 NEW_2
	var_24_int = var_19_int - var_2_int; // 0x258 Sub
	var_25_float = var_18_int * var_24_int; // 0x259 Mult
	var_26_int = 100; // 0x25a PushI
	var_0_int = var_25_float / var_25_float; // 0x25b Div2
	
Label_604:
	return 0; // 0x25c Return
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool)
{
	var_13_bool = 1; // 0x0 PushB
	SetNeedUpdate(var_13_bool); // 0x1 Func
	var_11_bool = 0; // 0x3 TMovB
	var_12_bool = 0; // 0x4 TMovB
	var_10_int = -1; // 0x5 TMovI
	func_312(var_12_bool); // 0x7 NEW_2
	func_547(var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool); // 0xa NEW_2
	return 0; // 0xc Return
}


func_651(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x28b PushV
	var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x28c PushV
	var_22_int = var_17_int; // 0x28d Mov
	var_23_int = var_18_int; // 0x28e Mov
	func_685(var_21_int, var_22_int, var_23_int); // 0x28f NEW_2
	var_20_int = var_21_int; // 0x290 Mov
	var_35_int = -1; // 0x292 PushI
	var_36_bool = var_20_int != var_35_int; // 0x293 Neq
	if(var_36_bool == 0) goto Label_667; // 0x294 JumpB
	var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x295 PushV
	var_37_int = var_20_int; // 0x296 Mov
	var_38_int = var_17_int; // 0x297 Mov
	var_39_int = var_18_int; // 0x298 Mov
	func_220(); // 0x299 NEW_2
	
Label_667:
	return 2; // 0x29b Return
}


func_524(var_96_int, var_97_int)
{
	var_98_int = 0; var_99_int = 0; var_100_int = 0; var_101_object = Obj(); var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_object = Obj(); // 0x20c PushV
	size(var_102_int); // 0x20d TObjFunc
	var_103_int = 0; // 0x20f MovI
	
Label_528:
	var_106_bool = var_103_int < var_102_int; // 0x210 LT
	if(var_106_bool == 0) goto Label_543; // 0x211 JumpB
	get(var_104_int, var_103_int); // 0x212 TObjFunc
	var_107_bool = var_96_int == var_104_int; // 0x214 Eq
	if(var_107_bool == 0) goto Label_540; // 0x215 JumpB
	get(var_105_object, var_103_int); // 0x216 TObjFunc
	add(var_97_int); // 0x218 ObjFunc
	return 8; // 0x21a Return
	
Label_540:
	var_108_int = 1; // 0x21c PushI
	var_103_int = var_103_int + var_108_int; // 0x21d Add2
	goto Label_528; // 0x21e Jump
	
Label_543:
	var_109_string = "AddKeyToAction fail"; // 0x21f PushS
	Trace(var_109_string); // 0x220 Func
	return 8; // 0x222 Return
}


func_13(var_125_int)
{
	var_126_int = 0; var_127_int = 0; // 0xd PushV
	size(var_127_int); // 0xe TObjFunc
	var_125_int = var_127_int; // 0x10 Mov
	return 2; // 0x11 Return
}


func_18(var_128_int)
{
	var_128_int = 17; // 0x12 MovI
	return 0; // 0x13 Return
}


func_147(var_10_int, var_37_int)
{
	var_40_int = -1; // 0x94 PushI
	var_41_bool = var_10_int == var_40_int; // 0x95 Eq
	if(var_41_bool == 0) goto Label_156; // 0x96 JumpB
	var_42_int = 0; // 0x97 PushV
	var_42_int = var_37_int; // 0x98 Mov
	func_22(var_37_int, var_38_int, var_39_int, var_42_int); // 0x99 NEW_2
	goto Label_156; // 0x9b Jump
	
Label_156:
	return 0; // 0x9c Return
}


func_20(var_11_bool, var_16_bool)
{
	var_16_bool = var_11_bool; // 0x14 MovT
	return 0; // 0x15 Return
}


func_22(var_10_int, var_11_bool, var_12_bool, var_42_int)
{
	var_10_int = var_42_int; // 0x17 TMov
	var_11_bool = 1; // 0x18 TMovB
	var_12_bool = 0; // 0x19 TMovB
	CaptureKeyboard(); // 0x1a Func
	CaptureMouse(); // 0x1c Func
	return 0; // 0x1e Return
}


func_668(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x29c PushV
	var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x29d PushV
	var_22_int = var_17_int; // 0x29e Mov
	var_23_int = var_18_int; // 0x29f Mov
	func_685(var_21_int, var_22_int, var_23_int); // 0x2a0 NEW_2
	var_20_int = var_21_int; // 0x2a1 Mov
	var_35_int = -1; // 0x2a3 PushI
	var_36_bool = var_20_int != var_35_int; // 0x2a4 Neq
	if(var_36_bool == 0) goto Label_684; // 0x2a5 JumpB
	var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x2a6 PushV
	var_37_int = var_20_int; // 0x2a7 Mov
	var_38_int = var_17_int; // 0x2a8 Mov
	var_39_int = var_18_int; // 0x2a9 Mov
	func_222(); // 0x2aa NEW_2
	
Label_684:
	return 2; // 0x2ac Return
}


func_547(var_0_int, var_3_int, var_4_int, var_9_object, var_10_int, var_11_bool, var_12_bool)
{
	GetWindowSize(var_12_bool, var_11_bool); // 0x223 Func
	var_3_int = 0; // 0x225 TMovI
	var_4_int = 0; // 0x226 TMovI
	ClientToScreen(var_10_int, var_9_object); // 0x227 Func
	var_0_int = 0; // 0x229 TMovI
	var_120_bool = 1; // 0x22a PushB
	EnableClipping(var_120_bool); // 0x22b Func
	var_121_bool = 1; // 0x22d PushB
	SetOwnerDraw(var_121_bool); // 0x22e Func
	func_709(var_11_bool, var_12_bool); // 0x231 NEW_2
	ProcessEvents(); // 0x233 Func
	return 0; // 0x235 Return
}


func_301(var_24_int, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x12d PushV
	add(var_24_int); // 0x12e TObjFunc
	add(var_25_int); // 0x130 TObjFunc
	CreateIntVector(var_27_object); // 0x132 Func
	add(var_27_object); // 0x134 TObjFunc
	return 2; // 0x136 Return
}


func_685(var_0_int, var_21_int, var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; // 0x2ad PushV
	var_27_int = var_23_int - var_0_int; // 0x2ae Sub2
	var_30_int = 0; // 0x2af PushV
	func_18(var_30_int); // 0x2b0 NEW_2
	var_28_int = var_30_int; // 0x2b1 Mov
	var_29_int = var_27_int / var_27_int; // 0x2b3 Div2
	var_31_int = 0; // 0x2b4 PushV
	func_13(var_31_int); // 0x2b5 NEW_2
	var_34_bool = var_29_int >= var_31_int; // 0x2b7 GE
	if(var_34_bool == 0) goto Label_699; // 0x2b8 JumpB
	var_21_int = -1; // 0x2b9 MovI
	return 6; // 0x2ba Return
	
Label_699:
	var_21_int = var_29_int; // 0x2bb Mov
	return 6; // 0x2bc Return
}


func_312(var_12_bool)
{
	var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_string = ""; var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_string = ""; // 0x138 PushV
	CreateIntVector(var_14_object); // 0x139 Func
	CreateStringVector(var_12_bool); // 0x13b Func
	CreateKeyEnumerator(var_18_object); // 0x13d Func
	
Label_319:
	var_22_bool = 1; // 0x13f PushB
	if(var_22_bool == 0) goto Label_333; // 0x140 JumpB
	Next(var_19_bool, var_20_int); // 0x141 ObjFunc
	var_23_bool = var_19_bool == 0; // 0x143 Not
	if(var_23_bool == 0) goto Label_326; // 0x144 JumpB
	goto Label_333; // 0x145 Jump
	
Label_333:
	CreateIntVector(var_17_string); // 0x14d Func
	CreateIntVector(var_16_int); // 0x14f Func
	CreateObjectVector(var_15_bool); // 0x151 Func
	var_24_int = 0; var_25_int = 0; // 0x153 PushV
	var_24_int = 0; // 0x154 MovI
	var_25_int = 33; // 0x155 MovI
	func_301(var_24_int, var_25_int); // 0x156 NEW_2
	var_28_int = 0; var_29_int = 0; // 0x158 PushV
	var_28_int = 1; // 0x159 MovI
	var_29_int = 34; // 0x15a MovI
	func_301(var_28_int, var_29_int); // 0x15b NEW_2
	var_30_int = 0; var_31_int = 0; // 0x15d PushV
	var_30_int = 2; // 0x15e MovI
	var_31_int = 35; // 0x15f MovI
	func_301(var_30_int, var_31_int); // 0x160 NEW_2
	var_32_int = 0; var_33_int = 0; // 0x162 PushV
	var_32_int = 3; // 0x163 MovI
	var_33_int = 36; // 0x164 MovI
	func_301(var_32_int, var_33_int); // 0x165 NEW_2
	var_34_int = 0; var_35_int = 0; // 0x167 PushV
	var_34_int = 4; // 0x168 MovI
	var_35_int = 37; // 0x169 MovI
	func_301(var_34_int, var_35_int); // 0x16a NEW_2
	var_36_int = 0; var_37_int = 0; // 0x16c PushV
	var_36_int = 5; // 0x16d MovI
	var_37_int = 38; // 0x16e MovI
	func_301(var_36_int, var_37_int); // 0x16f NEW_2
	var_38_int = 0; var_39_int = 0; // 0x171 PushV
	var_38_int = 7; // 0x172 MovI
	var_39_int = 40; // 0x173 MovI
	func_301(var_38_int, var_39_int); // 0x174 NEW_2
	var_40_int = 0; var_41_int = 0; // 0x176 PushV
	var_40_int = 8; // 0x177 MovI
	var_41_int = 41; // 0x178 MovI
	func_301(var_40_int, var_41_int); // 0x179 NEW_2
	var_42_int = 0; var_43_int = 0; // 0x17b PushV
	var_42_int = 9; // 0x17c MovI
	var_43_int = 42; // 0x17d MovI
	func_301(var_42_int, var_43_int); // 0x17e NEW_2
	var_44_int = 0; var_45_int = 0; // 0x180 PushV
	var_44_int = 10; // 0x181 MovI
	var_45_int = 43; // 0x182 MovI
	func_301(var_44_int, var_45_int); // 0x183 NEW_2
	var_46_int = 0; var_47_int = 0; // 0x185 PushV
	var_46_int = 11; // 0x186 MovI
	var_47_int = 44; // 0x187 MovI
	func_301(var_46_int, var_47_int); // 0x188 NEW_2
	var_48_int = 0; var_49_int = 0; // 0x18a PushV
	var_48_int = 20; // 0x18b MovI
	var_49_int = 54; // 0x18c MovI
	func_301(var_48_int, var_49_int); // 0x18d NEW_2
	var_50_int = 0; var_51_int = 0; // 0x18f PushV
	var_50_int = 18; // 0x190 MovI
	var_51_int = 55; // 0x191 MovI
	func_301(var_50_int, var_51_int); // 0x192 NEW_2
	var_52_int = 0; var_53_int = 0; // 0x194 PushV
	var_52_int = 12; // 0x195 MovI
	var_53_int = 45; // 0x196 MovI
	func_301(var_52_int, var_53_int); // 0x197 NEW_2
	var_54_int = 0; var_55_int = 0; // 0x199 PushV
	var_54_int = 13; // 0x19a MovI
	var_55_int = 46; // 0x19b MovI
	func_301(var_54_int, var_55_int); // 0x19c NEW_2
	var_56_int = 0; var_57_int = 0; // 0x19e PushV
	var_56_int = 14; // 0x19f MovI
	var_57_int = 47; // 0x1a0 MovI
	func_301(var_56_int, var_57_int); // 0x1a1 NEW_2
	var_58_int = 0; var_59_int = 0; // 0x1a3 PushV
	var_58_int = 15; // 0x1a4 MovI
	var_59_int = 48; // 0x1a5 MovI
	func_301(var_58_int, var_59_int); // 0x1a6 NEW_2
	var_60_int = 0; var_61_int = 0; // 0x1a8 PushV
	var_60_int = 16; // 0x1a9 MovI
	var_61_int = 49; // 0x1aa MovI
	func_301(var_60_int, var_61_int); // 0x1ab NEW_2
	var_62_int = 0; var_63_int = 0; // 0x1ad PushV
	var_62_int = 17; // 0x1ae MovI
	var_63_int = 50; // 0x1af MovI
	func_301(var_62_int, var_63_int); // 0x1b0 NEW_2
	var_64_int = 0; var_65_int = 0; // 0x1b2 PushV
	var_64_int = 21; // 0x1b3 MovI
	var_65_int = 56; // 0x1b4 MovI
	func_301(var_64_int, var_65_int); // 0x1b5 NEW_2
	var_66_int = 0; var_67_int = 0; // 0x1b7 PushV
	var_66_int = 100; // 0x1b8 MovI
	var_67_int = 52; // 0x1b9 MovI
	func_301(var_66_int, var_67_int); // 0x1ba NEW_2
	var_68_int = 0; var_69_int = 0; // 0x1bc PushV
	var_68_int = 101; // 0x1bd MovI
	var_69_int = 53; // 0x1be MovI
	func_301(var_68_int, var_69_int); // 0x1bf NEW_2
	func_454(); // 0x1c2 NEW_2
	return 8; // 0x1c4 Return
	
Label_326:
	add(var_20_int); // 0x146 TObjFunc
	GetKeyName(var_21_string, var_20_int); // 0x148 Func
	add(var_21_string); // 0x14a TObjFunc
	goto Label_319; // 0x14c Jump
}


func_701(var_124_int)
{
	var_125_int = 0; // 0x2bd PushV
	func_13(var_125_int); // 0x2be NEW_2
	var_128_int = 0; // 0x2c0 PushV
	func_18(var_128_int); // 0x2c1 NEW_2
	var_124_int = var_125_int * var_128_int; // 0x2c3 Mult2
	return 0; // 0x2c4 Return
}


func_709(var_0_int, var_2_int)
{
	var_122_int = 0; var_123_int = 0; // 0x2c5 PushV
	var_124_int = 0; // 0x2c6 PushV
	func_701(var_124_int); // 0x2c7 NEW_2
	var_123_int = var_124_int - var_2_int; // 0x2c9 Sub2
	var_129_int = 0; // 0x2ca PushI
	var_130_bool = var_123_int < var_129_int; // 0x2cb LT
	if(var_130_bool == 0) goto Label_718; // 0x2cc JumpB
	var_123_int = 0; // 0x2cd MovI
	
Label_718:
	var_131_int = -var_0_int; // 0x2ce Neg
	var_132_bool = var_131_int > var_123_int; // 0x2cf GT
	if(var_132_bool == 0) goto Label_723; // 0x2d0 JumpB
	var_0_int = -var_123_int; // 0x2d1 Neg2
	goto Label_727; // 0x2d2 Jump
	
Label_727:
	var_133_int = 0; // 0x2d7 PushI
	var_134_bool = var_123_int == var_133_int; // 0x2d8 Eq
	if(var_134_bool == 0) goto Label_737; // 0x2d9 JumpB
	var_135_int = 16384; // 0x2da PushI
	var_136_string = ""; // 0x2db PushV
	func_224(var_136_string); // 0x2dc NEW_2
	SendMessage(var_135_int, var_136_string); // 0x2de Func
	goto Label_746; // 0x2e0 Jump
	
Label_746:
	return 2; // 0x2ea Return
	
Label_737:
	var_137_int = -var_0_int; // 0x2e1 Neg
	var_138_int = 100; // 0x2e2 PushI
	var_139_float = var_137_int * var_138_int; // 0x2e3 Mult
	var_140_float = var_139_float / var_123_int; // 0x2e4 Div
	var_141_string = ""; // 0x2e5 PushV
	func_224(var_141_string); // 0x2e6 NEW_2
	SendMessage(var_140_float, var_141_string); // 0x2e8 Func
	
Label_723:
	var_142_int = 0; // 0x2d3 PushI
	var_143_bool = var_0_int > var_142_int; // 0x2d4 GT
	if(var_143_bool == 0) goto Label_727; // 0x2d5 JumpB
	var_0_int = 0; // 0x2d6 TMovI
}


func_454()
{
	var_70_int = 0; var_71_int = 0; var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_string = ""; var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; var_81_string = ""; // 0x1c6 PushV
	func_509(); // 0x1c8 NEW_2
	size(var_76_int); // 0x1ca TObjFunc
	var_77_int = 0; // 0x1cc MovI
	
Label_461:
	var_90_bool = var_77_int < var_76_int; // 0x1cd LT
	if(var_90_bool == 0) goto Label_508; // 0x1ce JumpB
	get(var_78_int, var_77_int); // 0x1cf TObjFunc
	GetBindType(var_79_int, var_78_int); // 0x1d1 Func
	var_91_int = 0; // 0x1d3 PushI
	var_92_bool = var_79_int == var_91_int; // 0x1d4 Eq
	if(var_92_bool == 0) goto Label_472; // 0x1d5 JumpB
	goto Label_505; // 0x1d6 Jump
	
Label_505:
	var_93_int = 1; // 0x1f9 PushI
	var_77_int = var_77_int + var_93_int; // 0x1fa Add2
	goto Label_461; // 0x1fb Jump
	
Label_472:
	var_94_int = 1; // 0x1d8 PushI
	var_95_bool = var_79_int == var_94_int; // 0x1d9 Eq
	if(var_95_bool == 0) goto Label_483; // 0x1da JumpB
	GetBindAction(var_80_int, var_78_int); // 0x1db Func
	var_96_int = 0; var_97_int = 0; // 0x1dd PushV
	var_96_int = var_80_int; // 0x1de Mov
	var_97_int = var_77_int; // 0x1df Mov
	func_524(var_96_int, var_97_int); // 0x1e0 NEW_2
	goto Label_505; // 0x1e2 Jump
	
Label_483:
	var_110_int = 2; // 0x1e3 PushI
	var_111_bool = var_79_int == var_110_int; // 0x1e4 Eq
	if(var_111_bool == 0) goto Label_505; // 0x1e5 JumpB
	GetBindCommand(var_81_string, var_78_int); // 0x1e6 Func
	var_112_string = "qsave"; // 0x1e8 PushS
	var_113_bool = var_81_string == var_112_string; // 0x1e9 Eq
	if(var_113_bool == 0) goto Label_497; // 0x1ea JumpB
	var_114_int = 0; var_115_int = 0; // 0x1eb PushV
	var_114_int = 100; // 0x1ec MovI
	var_115_int = var_77_int; // 0x1ed Mov
	func_524(var_114_int, var_115_int); // 0x1ee NEW_2
	goto Label_505; // 0x1f0 Jump
	
Label_497:
	var_116_string = "qload"; // 0x1f1 PushS
	var_117_bool = var_81_string == var_116_string; // 0x1f2 Eq
	if(var_117_bool == 0) goto Label_505; // 0x1f3 JumpB
	var_118_int = 0; var_119_int = 0; // 0x1f4 PushV
	var_118_int = 101; // 0x1f5 MovI
	var_119_int = var_77_int; // 0x1f6 Mov
	func_524(var_118_int, var_119_int); // 0x1f7 NEW_2
	
Label_508:
	return 12; // 0x1fc Return
}


func_73(var_10_int, var_11_bool, var_12_bool, var_32_int)
{
	var_33_bool = 0; var_34_int = 0; var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_object = Obj(); var_45_int = 0; var_46_bool = 0; var_47_bool = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; // 0x49 PushV
	var_51_bool = 0; // 0x4a PushV
	var_51_bool = 0; // 0x4b MovB
	var_52_int = -1; // 0x4c PushI
	var_53_bool = var_32_int != var_52_int; // 0x4d Neq
	if(var_53_bool == 0) goto Label_83; // 0x4e JumpB
	var_54_int = 27; // 0x4f PushI
	var_55_bool = var_32_int != var_54_int; // 0x50 Neq
	if(var_55_bool == 0) goto Label_83; // 0x51 JumpB
	var_51_bool = 1; // 0x52 MovB
	
Label_83:
	if(var_51_bool == 0) goto Label_136; // 0x53 JumpB
	IsValidVirtualKey(var_42_bool, var_32_int); // 0x54 Func
	var_56_bool = var_42_bool; // 0x56 Push
	if(var_56_bool == 0) goto Label_133; // 0x57 JumpB
	get(var_43_int, var_41_int); // 0x58 TObjFunc
	Unbind(var_32_int); // 0x5a Func
	get(var_44_object, var_41_int); // 0x5c TObjFunc
	size(var_45_int); // 0x5e ObjFunc
	var_57_int = 256; // 0x60 PushI
	var_58_bool = var_32_int >= var_57_int; // 0x61 GE
	if(var_58_bool == 0) goto Label_101; // 0x62 JumpB
	var_46_bool = 1; // 0x63 MovB
	goto Label_102; // 0x64 Jump
	
Label_102:
	var_48_int = 0; // 0x66 MovI
	
Label_103:
	var_59_bool = var_48_int < var_45_int; // 0x67 LT
	if(var_59_bool == 0) goto Label_126; // 0x68 JumpB
	get(var_49_int, var_48_int); // 0x69 ObjFunc
	get(var_50_int, var_49_int); // 0x6b TObjFunc
	var_60_bool = var_46_bool; // 0x6d Push
	if(var_60_bool == 0) goto Label_118; // 0x6e JumpB
	var_61_int = 256; // 0x6f PushI
	var_62_bool = var_50_int >= var_61_int; // 0x70 GE
	if(var_62_bool == 0) goto Label_117; // 0x71 JumpB
	Unbind(var_50_int); // 0x72 Func
	goto Label_126; // 0x74 Jump
	
Label_126:
	Bind(var_32_int, var_43_int); // 0x7e Func
	func_312(var_50_int); // 0x81 NEW_2
	var_44_object = 0; // 0x83 SetNull
	goto Label_136; // 0x84 Jump
	
Label_136:
	var_10_int = -1; // 0x88 TMovI
	var_11_bool = 0; // 0x89 TMovB
	var_12_bool = 0; // 0x8a TMovB
	ReleaseKeyboard(); // 0x8b Func
	ReleaseMouse(); // 0x8d Func
	var_169_int = 1; // 0x8f PushI
	SendMessageToParent(var_169_int); // 0x90 Func
	return 18; // 0x92 Return
	
Label_117:
	goto Label_123; // 0x75 Jump
	
Label_123:
	var_170_int = 1; // 0x7b PushI
	var_48_int = var_48_int + var_170_int; // 0x7c Add2
	goto Label_103; // 0x7d Jump
	
Label_118:
	var_171_int = 256; // 0x76 PushI
	var_172_bool = var_50_int < var_171_int; // 0x77 LT
	if(var_172_bool == 0) goto Label_123; // 0x78 JumpB
	Unbind(var_50_int); // 0x79 Func
	
Label_101:
	var_46_bool = 0; // 0x65 MovB
	
Label_133:
	var_173_string = "wrong key code"; // 0x85 PushS
	Trace(var_173_string); // 0x86 Func
}


func_218()
{
	return 0; // 0xdb Return
}


func_220()
{
	return 0; // 0xdd Return
}


func_605(var_0_int, var_20_float)
{
	var_21_int = 0; var_22_int = 0; // 0x25d PushV
	var_23_int = 0; // 0x25e PushV
	func_18(var_23_int); // 0x25f NEW_2
	var_24_float = var_20_float * var_23_int; // 0x261 Mult
	var_25_int = 2; // 0x262 PushI
	var_22_int = var_24_float / var_24_float; // 0x263 Div2
	var_0_int = var_0_int + var_22_int; // 0x264 Add2
	func_709(var_21_int, var_22_int); // 0x266 NEW_2
	return 2; // 0x268 Return
}


func_222()
{
	return 0; // 0xdf Return
}


func_224(var_136_string)
{
	var_136_string = "scrollbar"; // 0xe0 MovS
	return 0; // 0xe1 Return
}


func_226(var_1_int, var_10_int, var_27_int, var_28_int, var_29_int)
{
	var_30_string = ""; var_31_int = 0; var_32_int = 0; var_33_string = ""; var_34_string = ""; var_35_object = Obj(); var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_string = ""; var_42_int = 0; var_43_int = 0; var_44_string = ""; var_45_string = ""; var_46_object = Obj(); var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_string = ""; var_51_int = 0; // 0xe2 PushV
	var_52_bool = var_27_int == var_10_int; // 0xe3 Eq
	if(var_52_bool == 0) goto Label_254; // 0xe4 JumpB
	var_53_string = "whitepixel"; // 0xe5 PushS
	var_54_int = 0; // 0xe6 PushV
	func_18(var_54_int); // 0xe7 NEW_2
	StretchBlit(var_53_string, var_28_int, var_29_int, var_54_int, var_54_int); // 0xe9 Func
	var_55_string = ""; var_56_int = 0; // 0xeb PushV
	var_56_int = 108; // 0xec MovI
	func_747(var_55_string, var_56_int); // 0xed NEW_2
	var_41_string = var_55_string; // 0xee Mov
	var_59_string = "default"; // 0xf0 PushS
	GetTextWidth(var_42_int, var_59_string, var_41_string); // 0xf1 Func
	var_60_string = "default"; // 0xf3 PushS
	var_61_int = var_1_int - var_42_int; // 0xf4 Sub
	var_62_int = 2; // 0xf5 PushI
	var_63_float = var_61_int / var_62_int; // 0xf6 Div
	var_64_int = var_28_int + var_63_float; // 0xf7 Add
	var_65_float = 0.25098; // 0xf8 PushF
	var_66_float = 0.25098; // 0xf9 PushF
	var_67_float = 0.25098; // 0xfa PushF
	Print(var_60_string, var_64_int, var_29_int, var_41_string, var_65_float, var_66_float, var_67_float); // 0xfb Func
	return 22; // 0xfd Return
	
Label_254:
	get(var_43_int, var_27_int); // 0xfe TObjFunc
	var_68_string = ""; var_69_int = 0; // 0x100 PushV
	var_69_int = var_43_int; // 0x101 Mov
	func_747(var_68_string, var_69_int); // 0x102 NEW_2
	var_44_string = var_68_string; // 0x103 Mov
	get(var_46_object, var_27_int); // 0x105 TObjFunc
	size(var_47_int); // 0x107 ObjFunc
	var_48_int = 0; // 0x109 MovI
	
Label_266:
	var_70_bool = var_48_int < var_47_int; // 0x10a LT
	if(var_70_bool == 0) goto Label_280; // 0x10b JumpB
	var_71_int = var_48_int; // 0x10c Push
	if(var_71_int == 0) goto Label_272; // 0x10d JumpB
	var_72_string = " , "; // 0x10e PushS
	var_45_string = var_45_string + var_72_string; // 0x10f Add2
	
Label_272:
	get(var_49_int, var_48_int); // 0x110 ObjFunc
	get(var_50_string, var_49_int); // 0x112 TObjFunc
	var_45_string = var_45_string + var_50_string; // 0x114 Add2
	var_73_int = 1; // 0x115 PushI
	var_48_int = var_48_int + var_73_int; // 0x116 Add2
	goto Label_266; // 0x117 Jump
	
Label_280:
	var_74_string = "default"; // 0x118 PushS
	var_75_float = 0.55686; // 0x119 PushF
	var_76_float = 0.55686; // 0x11a PushF
	var_77_float = 0.55686; // 0x11b PushF
	Print(var_74_string, var_28_int, var_29_int, var_44_string, var_75_float, var_76_float, var_77_float); // 0x11c Func
	var_78_int = var_47_int; // 0x11e Push
	if(var_78_int == 0) goto Label_299; // 0x11f JumpB
	var_79_string = "default"; // 0x120 PushS
	GetTextWidth(var_51_int, var_79_string, var_45_string); // 0x121 Func
	var_80_string = "default"; // 0x123 PushS
	var_81_int = var_28_int + var_1_int; // 0x124 Add
	var_82_int = var_81_int - var_51_int; // 0x125 Sub
	var_83_float = 0.55686; // 0x126 PushF
	var_84_float = 0.55686; // 0x127 PushF
	var_85_float = 0.55686; // 0x128 PushF
	Print(var_80_string, var_82_int, var_29_int, var_45_string, var_83_float, var_84_float, var_85_float); // 0x129 Func
	
Label_299:
	return 22; // 0x12b Return
}


func_617(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x269 PushV
	var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x26a PushV
	var_22_int = var_17_int; // 0x26b Mov
	var_23_int = var_18_int; // 0x26c Mov
	func_685(var_21_int, var_22_int, var_23_int); // 0x26d NEW_2
	var_20_int = var_21_int; // 0x26e Mov
	var_35_int = -1; // 0x270 PushI
	var_36_bool = var_20_int != var_35_int; // 0x271 Neq
	if(var_36_bool == 0) goto Label_633; // 0x272 JumpB
	var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x273 PushV
	var_37_int = var_20_int; // 0x274 Mov
	var_38_int = var_17_int; // 0x275 Mov
	var_39_int = var_18_int; // 0x276 Mov
	func_147(var_38_int, var_39_int); // 0x277 NEW_2
	
Label_633:
	return 2; // 0x279 Return
}


func_747(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0x2eb PushV
	GetStringByID(var_58_string, var_56_int); // 0x2ec Func
	var_55_string = var_58_string; // 0x2ee Mov
	return 2; // 0x2ef Return
}


func_634(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x27a PushV
	var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x27b PushV
	var_22_int = var_17_int; // 0x27c Mov
	var_23_int = var_18_int; // 0x27d Mov
	func_685(var_21_int, var_22_int, var_23_int); // 0x27e NEW_2
	var_20_int = var_21_int; // 0x27f Mov
	var_35_int = -1; // 0x281 PushI
	var_36_bool = var_20_int != var_35_int; // 0x282 Neq
	if(var_36_bool == 0) goto Label_650; // 0x283 JumpB
	var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x284 PushV
	var_37_int = var_20_int; // 0x285 Mov
	var_38_int = var_17_int; // 0x286 Mov
	var_39_int = var_18_int; // 0x287 Mov
	func_218(); // 0x288 NEW_2
	
Label_650:
	return 2; // 0x28a Return
}


func_509()
{
	var_82_int = 0; var_83_int = 0; var_84_object = Obj(); var_85_int = 0; var_86_int = 0; var_87_object = Obj(); // 0x1fd PushV
	size(var_85_int); // 0x1fe TObjFunc
	var_86_int = 0; // 0x200 MovI
	
Label_513:
	var_88_bool = var_86_int < var_85_int; // 0x201 LT
	if(var_88_bool == 0) goto Label_523; // 0x202 JumpB
	get(var_87_object, var_86_int); // 0x203 TObjFunc
	clear(); // 0x205 ObjFunc
	var_87_object = 0; // 0x207 SetNull
	var_89_int = 1; // 0x208 PushI
	var_86_int = var_86_int + var_89_int; // 0x209 Add2
	goto Label_513; // 0x20a Jump
	
Label_523:
	return 6; // 0x20b Return
}


