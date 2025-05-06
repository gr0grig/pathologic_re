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
	var_26_int = 256; // 0x2f PushI
	var_27_bool = var_19_int < var_26_int; // 0x30 LT
	if(var_27_bool == 0) goto Label_69; // 0x31 JumpB
	IsValidVirtualKey(var_20_bool, var_19_int); // 0x32 Func
	var_28_bool = var_20_bool; // 0x34 Push
	if(var_28_bool == 0) goto Label_66; // 0x35 JumpB
	GetKeyState(var_21_int, var_19_int); // 0x36 ObjFunc
	var_29_int = 128; // 0x38 PushI
	var_30_int = var_21_int & var_29_int; // 0x39 And
	if(var_30_int == 0) goto Label_66; // 0x3a JumpB
	var_31_bool = var_12_bool; // 0x3b PushT
	if(var_31_bool == 0) goto Label_65; // 0x3c JumpB
	var_32_int = 0; // 0x3d PushV
	var_32_int = var_19_int; // 0x3e Mov
	func_72(var_19_int, var_20_bool, var_21_int, var_32_int); // 0x3f NEW_2
	
Label_65:
	return 8; // 0x41 Return
	
Label_66:
	var_163_int = 1; // 0x42 PushI
	var_19_int = var_19_int + var_163_int; // 0x43 Add2
	goto Label_47; // 0x44 Jump
	
Label_69:
	var_12_bool = 1; // 0x45 TMovB
	return 8; // 0x46 Return
}


task_0_event_2(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0; // 0x8b PushV
	func_20(var_14_int, var_15_bool); // 0x8c NEW_2
	var_16_bool = var_15_bool == 0; // 0x8e Not
	if(var_16_bool == 0) goto Label_149; // 0x8f JumpB
	var_17_int = 0; var_18_int = 0; // 0x90 PushV
	var_17_int = var_13_int; // 0x91 Mov
	var_18_int = var_14_int; // 0x92 Mov
	func_598(var_17_int, var_18_int); // 0x93 NEW_2
	
Label_149:
	return 0; // 0x95 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0; // 0x97 PushV
	func_20(var_14_int, var_15_bool); // 0x98 NEW_2
	var_16_bool = var_15_bool == 0; // 0x9a Not
	if(var_16_bool == 0) goto Label_161; // 0x9b JumpB
	var_17_int = 0; var_18_int = 0; // 0x9c PushV
	var_17_int = var_13_int; // 0x9d Mov
	var_18_int = var_14_int; // 0x9e Mov
	func_632(var_17_int, var_18_int); // 0x9f NEW_2
	
Label_161:
	return 0; // 0xa1 Return
}


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0; // 0xa3 PushV
	func_20(var_14_int, var_15_bool); // 0xa4 NEW_2
	var_16_bool = var_15_bool == 0; // 0xa6 Not
	if(var_16_bool == 0) goto Label_173; // 0xa7 JumpB
	var_17_int = 0; var_18_int = 0; // 0xa8 PushV
	var_17_int = var_13_int; // 0xa9 Mov
	var_18_int = var_14_int; // 0xaa Mov
	func_615(var_17_int, var_18_int); // 0xab NEW_2
	
Label_173:
	return 0; // 0xad Return
}


task_0_event_7(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0; // 0xaf PushV
	func_20(var_14_int, var_15_bool); // 0xb0 NEW_2
	var_16_bool = var_15_bool == 0; // 0xb2 Not
	if(var_16_bool == 0) goto Label_185; // 0xb3 JumpB
	var_17_int = 0; var_18_int = 0; // 0xb4 PushV
	var_17_int = var_13_int; // 0xb5 Mov
	var_18_int = var_14_int; // 0xb6 Mov
	func_649(var_17_int, var_18_int); // 0xb7 NEW_2
	
Label_185:
	return 0; // 0xb9 Return
}


task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int, var_15_float)
{
	var_16_bool = 0; // 0xbb PushV
	func_20(var_15_float, var_16_bool); // 0xbc NEW_2
	var_17_bool = var_16_bool == 0; // 0xbe Not
	if(var_17_bool == 0) goto Label_198; // 0xbf JumpB
	var_18_int = 0; var_19_int = 0; var_20_float = 0; // 0xc0 PushV
	var_18_int = var_13_int; // 0xc1 Mov
	var_19_int = var_14_int; // 0xc2 Mov
	var_20_float = var_15_float; // 0xc3 Mov
	func_586(var_19_int, var_20_float); // 0xc4 NEW_2
	
Label_198:
	return 0; // 0xc6 Return
}


task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; // 0x223 PushV
	var_21_int = 0; // 0x224 PushV
	func_13(var_21_int); // 0x225 NEW_2
	var_17_int = var_21_int; // 0x226 Mov
	var_24_int = 0; // 0x228 PushV
	func_18(var_24_int); // 0x229 NEW_2
	var_18_int = var_24_int; // 0x22a Mov
	var_19_int = 0; // 0x22c MovI
	
Label_557:
	var_25_bool = var_19_int < var_17_int; // 0x22d LT
	if(var_25_bool == 0) goto Label_570; // 0x22e JumpB
	var_26_float = var_19_int * var_18_int; // 0x22f Mult
	var_20_int = var_26_float + var_0_int; // 0x230 Add2
	var_27_int = 0; var_28_int = 0; var_29_int = 0; // 0x231 PushV
	var_27_int = var_19_int; // 0x232 Mov
	var_28_int = 0; // 0x233 MovI
	var_29_int = var_20_int; // 0x234 Mov
	func_207(var_19_int, var_20_int, var_27_int, var_28_int, var_29_int); // 0x235 NEW_2
	var_86_int = 1; // 0x237 PushI
	var_19_int = var_19_int + var_86_int; // 0x238 Add2
	goto Label_557; // 0x239 Jump
	
Label_570:
	return 8; // 0x23a Return
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_string, var_15_object)
{
	var_16_string = ""; // 0x23c PushV
	func_205(var_16_string); // 0x23d NEW_2
	var_17_bool = var_14_string == var_16_string; // 0x23f Eq
	if(var_17_bool == 0) goto Label_585; // 0x240 JumpB
	var_18_int = -var_13_int; // 0x241 Neg
	var_19_int = 0; // 0x242 PushV
	func_682(var_19_int); // 0x243 NEW_2
	var_24_int = var_19_int - var_2_int; // 0x245 Sub
	var_25_float = var_18_int * var_24_int; // 0x246 Mult
	var_26_int = 100; // 0x247 PushI
	var_0_int = var_25_float / var_25_float; // 0x248 Div2
	
Label_585:
	return 0; // 0x249 Return
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool)
{
	var_13_bool = 1; // 0x0 PushB
	SetNeedUpdate(var_13_bool); // 0x1 Func
	var_11_bool = 0; // 0x3 TMovB
	var_12_bool = 0; // 0x4 TMovB
	var_10_int = -1; // 0x5 TMovI
	func_293(var_12_bool); // 0x7 NEW_2
	func_528(var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool); // 0xa NEW_2
	return 0; // 0xc Return
}


func_128(var_10_int, var_37_int)
{
	var_40_int = -1; // 0x81 PushI
	var_41_bool = var_10_int == var_40_int; // 0x82 Eq
	if(var_41_bool == 0) goto Label_137; // 0x83 JumpB
	var_42_int = 0; // 0x84 PushV
	var_42_int = var_37_int; // 0x85 Mov
	func_22(var_37_int, var_38_int, var_39_int, var_42_int); // 0x86 NEW_2
	goto Label_137; // 0x88 Jump
	
Label_137:
	return 0; // 0x89 Return
}


func_649(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x289 PushV
	var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x28a PushV
	var_22_int = var_17_int; // 0x28b Mov
	var_23_int = var_18_int; // 0x28c Mov
	func_666(var_21_int, var_22_int, var_23_int); // 0x28d NEW_2
	var_20_int = var_21_int; // 0x28e Mov
	var_35_int = -1; // 0x290 PushI
	var_36_bool = var_20_int != var_35_int; // 0x291 Neq
	if(var_36_bool == 0) goto Label_665; // 0x292 JumpB
	var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x293 PushV
	var_37_int = var_20_int; // 0x294 Mov
	var_38_int = var_17_int; // 0x295 Mov
	var_39_int = var_18_int; // 0x296 Mov
	func_203(); // 0x297 NEW_2
	
Label_665:
	return 2; // 0x299 Return
}


func_13(var_125_int)
{
	var_126_int = 0; var_127_int = 0; // 0xd PushV
	size(var_127_int); // 0xe TObjFunc
	var_125_int = var_127_int; // 0x10 Mov
	return 2; // 0x11 Return
}


func_528(var_0_int, var_3_int, var_4_int, var_9_object, var_10_int, var_11_bool, var_12_bool)
{
	GetWindowSize(var_12_bool, var_11_bool); // 0x210 Func
	var_3_int = 0; // 0x212 TMovI
	var_4_int = 0; // 0x213 TMovI
	ClientToScreen(var_10_int, var_9_object); // 0x214 Func
	var_0_int = 0; // 0x216 TMovI
	var_120_bool = 1; // 0x217 PushB
	EnableClipping(var_120_bool); // 0x218 Func
	var_121_bool = 1; // 0x21a PushB
	SetOwnerDraw(var_121_bool); // 0x21b Func
	func_690(var_11_bool, var_12_bool); // 0x21e NEW_2
	ProcessEvents(); // 0x220 Func
	return 0; // 0x222 Return
}


func_18(var_128_int)
{
	var_128_int = 17; // 0x12 MovI
	return 0; // 0x13 Return
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


func_282(var_24_int, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x11a PushV
	add(var_24_int); // 0x11b TObjFunc
	add(var_25_int); // 0x11d TObjFunc
	CreateIntVector(var_27_object); // 0x11f Func
	add(var_27_object); // 0x121 TObjFunc
	return 2; // 0x123 Return
}


func_666(var_0_int, var_21_int, var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; // 0x29a PushV
	var_27_int = var_23_int - var_0_int; // 0x29b Sub2
	var_30_int = 0; // 0x29c PushV
	func_18(var_30_int); // 0x29d NEW_2
	var_28_int = var_30_int; // 0x29e Mov
	var_29_int = var_27_int / var_27_int; // 0x2a0 Div2
	var_31_int = 0; // 0x2a1 PushV
	func_13(var_31_int); // 0x2a2 NEW_2
	var_34_bool = var_29_int >= var_31_int; // 0x2a4 GE
	if(var_34_bool == 0) goto Label_680; // 0x2a5 JumpB
	var_21_int = -1; // 0x2a6 MovI
	return 6; // 0x2a7 Return
	
Label_680:
	var_21_int = var_29_int; // 0x2a8 Mov
	return 6; // 0x2a9 Return
}


func_293(var_12_bool)
{
	var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_string = ""; var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_string = ""; // 0x125 PushV
	CreateIntVector(var_14_object); // 0x126 Func
	CreateStringVector(var_12_bool); // 0x128 Func
	CreateKeyEnumerator(var_18_object); // 0x12a Func
	
Label_300:
	var_22_bool = 1; // 0x12c PushB
	if(var_22_bool == 0) goto Label_314; // 0x12d JumpB
	Next(var_19_bool, var_20_int); // 0x12e ObjFunc
	var_23_bool = var_19_bool == 0; // 0x130 Not
	if(var_23_bool == 0) goto Label_307; // 0x131 JumpB
	goto Label_314; // 0x132 Jump
	
Label_314:
	CreateIntVector(var_17_string); // 0x13a Func
	CreateIntVector(var_16_int); // 0x13c Func
	CreateObjectVector(var_15_bool); // 0x13e Func
	var_24_int = 0; var_25_int = 0; // 0x140 PushV
	var_24_int = 0; // 0x141 MovI
	var_25_int = 33; // 0x142 MovI
	func_282(var_24_int, var_25_int); // 0x143 NEW_2
	var_28_int = 0; var_29_int = 0; // 0x145 PushV
	var_28_int = 1; // 0x146 MovI
	var_29_int = 34; // 0x147 MovI
	func_282(var_28_int, var_29_int); // 0x148 NEW_2
	var_30_int = 0; var_31_int = 0; // 0x14a PushV
	var_30_int = 2; // 0x14b MovI
	var_31_int = 35; // 0x14c MovI
	func_282(var_30_int, var_31_int); // 0x14d NEW_2
	var_32_int = 0; var_33_int = 0; // 0x14f PushV
	var_32_int = 3; // 0x150 MovI
	var_33_int = 36; // 0x151 MovI
	func_282(var_32_int, var_33_int); // 0x152 NEW_2
	var_34_int = 0; var_35_int = 0; // 0x154 PushV
	var_34_int = 4; // 0x155 MovI
	var_35_int = 37; // 0x156 MovI
	func_282(var_34_int, var_35_int); // 0x157 NEW_2
	var_36_int = 0; var_37_int = 0; // 0x159 PushV
	var_36_int = 5; // 0x15a MovI
	var_37_int = 38; // 0x15b MovI
	func_282(var_36_int, var_37_int); // 0x15c NEW_2
	var_38_int = 0; var_39_int = 0; // 0x15e PushV
	var_38_int = 7; // 0x15f MovI
	var_39_int = 40; // 0x160 MovI
	func_282(var_38_int, var_39_int); // 0x161 NEW_2
	var_40_int = 0; var_41_int = 0; // 0x163 PushV
	var_40_int = 8; // 0x164 MovI
	var_41_int = 41; // 0x165 MovI
	func_282(var_40_int, var_41_int); // 0x166 NEW_2
	var_42_int = 0; var_43_int = 0; // 0x168 PushV
	var_42_int = 9; // 0x169 MovI
	var_43_int = 42; // 0x16a MovI
	func_282(var_42_int, var_43_int); // 0x16b NEW_2
	var_44_int = 0; var_45_int = 0; // 0x16d PushV
	var_44_int = 10; // 0x16e MovI
	var_45_int = 43; // 0x16f MovI
	func_282(var_44_int, var_45_int); // 0x170 NEW_2
	var_46_int = 0; var_47_int = 0; // 0x172 PushV
	var_46_int = 11; // 0x173 MovI
	var_47_int = 44; // 0x174 MovI
	func_282(var_46_int, var_47_int); // 0x175 NEW_2
	var_48_int = 0; var_49_int = 0; // 0x177 PushV
	var_48_int = 20; // 0x178 MovI
	var_49_int = 54; // 0x179 MovI
	func_282(var_48_int, var_49_int); // 0x17a NEW_2
	var_50_int = 0; var_51_int = 0; // 0x17c PushV
	var_50_int = 18; // 0x17d MovI
	var_51_int = 55; // 0x17e MovI
	func_282(var_50_int, var_51_int); // 0x17f NEW_2
	var_52_int = 0; var_53_int = 0; // 0x181 PushV
	var_52_int = 12; // 0x182 MovI
	var_53_int = 45; // 0x183 MovI
	func_282(var_52_int, var_53_int); // 0x184 NEW_2
	var_54_int = 0; var_55_int = 0; // 0x186 PushV
	var_54_int = 13; // 0x187 MovI
	var_55_int = 46; // 0x188 MovI
	func_282(var_54_int, var_55_int); // 0x189 NEW_2
	var_56_int = 0; var_57_int = 0; // 0x18b PushV
	var_56_int = 14; // 0x18c MovI
	var_57_int = 47; // 0x18d MovI
	func_282(var_56_int, var_57_int); // 0x18e NEW_2
	var_58_int = 0; var_59_int = 0; // 0x190 PushV
	var_58_int = 15; // 0x191 MovI
	var_59_int = 48; // 0x192 MovI
	func_282(var_58_int, var_59_int); // 0x193 NEW_2
	var_60_int = 0; var_61_int = 0; // 0x195 PushV
	var_60_int = 16; // 0x196 MovI
	var_61_int = 49; // 0x197 MovI
	func_282(var_60_int, var_61_int); // 0x198 NEW_2
	var_62_int = 0; var_63_int = 0; // 0x19a PushV
	var_62_int = 17; // 0x19b MovI
	var_63_int = 50; // 0x19c MovI
	func_282(var_62_int, var_63_int); // 0x19d NEW_2
	var_64_int = 0; var_65_int = 0; // 0x19f PushV
	var_64_int = 21; // 0x1a0 MovI
	var_65_int = 56; // 0x1a1 MovI
	func_282(var_64_int, var_65_int); // 0x1a2 NEW_2
	var_66_int = 0; var_67_int = 0; // 0x1a4 PushV
	var_66_int = 100; // 0x1a5 MovI
	var_67_int = 52; // 0x1a6 MovI
	func_282(var_66_int, var_67_int); // 0x1a7 NEW_2
	var_68_int = 0; var_69_int = 0; // 0x1a9 PushV
	var_68_int = 101; // 0x1aa MovI
	var_69_int = 53; // 0x1ab MovI
	func_282(var_68_int, var_69_int); // 0x1ac NEW_2
	func_435(); // 0x1af NEW_2
	return 8; // 0x1b1 Return
	
Label_307:
	add(var_20_int); // 0x133 TObjFunc
	GetKeyName(var_21_string, var_20_int); // 0x135 Func
	add(var_21_string); // 0x137 TObjFunc
	goto Label_300; // 0x139 Jump
}


func_682(var_124_int)
{
	var_125_int = 0; // 0x2aa PushV
	func_13(var_125_int); // 0x2ab NEW_2
	var_128_int = 0; // 0x2ad PushV
	func_18(var_128_int); // 0x2ae NEW_2
	var_124_int = var_125_int * var_128_int; // 0x2b0 Mult2
	return 0; // 0x2b1 Return
}


func_690(var_0_int, var_2_int)
{
	var_122_int = 0; var_123_int = 0; // 0x2b2 PushV
	var_124_int = 0; // 0x2b3 PushV
	func_682(var_124_int); // 0x2b4 NEW_2
	var_123_int = var_124_int - var_2_int; // 0x2b6 Sub2
	var_129_int = 0; // 0x2b7 PushI
	var_130_bool = var_123_int < var_129_int; // 0x2b8 LT
	if(var_130_bool == 0) goto Label_699; // 0x2b9 JumpB
	var_123_int = 0; // 0x2ba MovI
	
Label_699:
	var_131_int = -var_0_int; // 0x2bb Neg
	var_132_bool = var_131_int > var_123_int; // 0x2bc GT
	if(var_132_bool == 0) goto Label_704; // 0x2bd JumpB
	var_0_int = -var_123_int; // 0x2be Neg2
	goto Label_708; // 0x2bf Jump
	
Label_708:
	var_133_int = 0; // 0x2c4 PushI
	var_134_bool = var_123_int == var_133_int; // 0x2c5 Eq
	if(var_134_bool == 0) goto Label_718; // 0x2c6 JumpB
	var_135_int = 16384; // 0x2c7 PushI
	var_136_string = ""; // 0x2c8 PushV
	func_205(var_136_string); // 0x2c9 NEW_2
	SendMessage(var_135_int, var_136_string); // 0x2cb Func
	goto Label_727; // 0x2cd Jump
	
Label_727:
	return 2; // 0x2d7 Return
	
Label_718:
	var_137_int = -var_0_int; // 0x2ce Neg
	var_138_int = 100; // 0x2cf PushI
	var_139_float = var_137_int * var_138_int; // 0x2d0 Mult
	var_140_float = var_139_float / var_123_int; // 0x2d1 Div
	var_141_string = ""; // 0x2d2 PushV
	func_205(var_141_string); // 0x2d3 NEW_2
	SendMessage(var_140_float, var_141_string); // 0x2d5 Func
	
Label_704:
	var_142_int = 0; // 0x2c0 PushI
	var_143_bool = var_0_int > var_142_int; // 0x2c1 GT
	if(var_143_bool == 0) goto Label_708; // 0x2c2 JumpB
	var_0_int = 0; // 0x2c3 TMovI
}


func_435()
{
	var_70_int = 0; var_71_int = 0; var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_string = ""; var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; var_81_string = ""; // 0x1b3 PushV
	func_490(); // 0x1b5 NEW_2
	size(var_76_int); // 0x1b7 TObjFunc
	var_77_int = 0; // 0x1b9 MovI
	
Label_442:
	var_90_bool = var_77_int < var_76_int; // 0x1ba LT
	if(var_90_bool == 0) goto Label_489; // 0x1bb JumpB
	get(var_78_int, var_77_int); // 0x1bc TObjFunc
	GetBindType(var_79_int, var_78_int); // 0x1be Func
	var_91_int = 0; // 0x1c0 PushI
	var_92_bool = var_79_int == var_91_int; // 0x1c1 Eq
	if(var_92_bool == 0) goto Label_453; // 0x1c2 JumpB
	goto Label_486; // 0x1c3 Jump
	
Label_486:
	var_93_int = 1; // 0x1e6 PushI
	var_77_int = var_77_int + var_93_int; // 0x1e7 Add2
	goto Label_442; // 0x1e8 Jump
	
Label_453:
	var_94_int = 1; // 0x1c5 PushI
	var_95_bool = var_79_int == var_94_int; // 0x1c6 Eq
	if(var_95_bool == 0) goto Label_464; // 0x1c7 JumpB
	GetBindAction(var_80_int, var_78_int); // 0x1c8 Func
	var_96_int = 0; var_97_int = 0; // 0x1ca PushV
	var_96_int = var_80_int; // 0x1cb Mov
	var_97_int = var_77_int; // 0x1cc Mov
	func_505(var_96_int, var_97_int); // 0x1cd NEW_2
	goto Label_486; // 0x1cf Jump
	
Label_464:
	var_110_int = 2; // 0x1d0 PushI
	var_111_bool = var_79_int == var_110_int; // 0x1d1 Eq
	if(var_111_bool == 0) goto Label_486; // 0x1d2 JumpB
	GetBindCommand(var_81_string, var_78_int); // 0x1d3 Func
	var_112_string = "qsave"; // 0x1d5 PushS
	var_113_bool = var_81_string == var_112_string; // 0x1d6 Eq
	if(var_113_bool == 0) goto Label_478; // 0x1d7 JumpB
	var_114_int = 0; var_115_int = 0; // 0x1d8 PushV
	var_114_int = 100; // 0x1d9 MovI
	var_115_int = var_77_int; // 0x1da Mov
	func_505(var_114_int, var_115_int); // 0x1db NEW_2
	goto Label_486; // 0x1dd Jump
	
Label_478:
	var_116_string = "qload"; // 0x1de PushS
	var_117_bool = var_81_string == var_116_string; // 0x1df Eq
	if(var_117_bool == 0) goto Label_486; // 0x1e0 JumpB
	var_118_int = 0; var_119_int = 0; // 0x1e1 PushV
	var_118_int = 101; // 0x1e2 MovI
	var_119_int = var_77_int; // 0x1e3 Mov
	func_505(var_118_int, var_119_int); // 0x1e4 NEW_2
	
Label_489:
	return 12; // 0x1e9 Return
}


func_199()
{
	return 0; // 0xc8 Return
}


func_72(var_10_int, var_11_bool, var_12_bool, var_32_int)
{
	var_33_bool = 0; var_34_int = 0; var_35_object = Obj(); var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_object = Obj(); var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; // 0x48 PushV
	var_47_bool = 0; // 0x49 PushV
	var_47_bool = 0; // 0x4a MovB
	var_48_int = -1; // 0x4b PushI
	var_49_bool = var_32_int != var_48_int; // 0x4c Neq
	if(var_49_bool == 0) goto Label_82; // 0x4d JumpB
	var_50_int = 27; // 0x4e PushI
	var_51_bool = var_32_int != var_50_int; // 0x4f Neq
	if(var_51_bool == 0) goto Label_82; // 0x50 JumpB
	var_47_bool = 1; // 0x51 MovB
	
Label_82:
	if(var_47_bool == 0) goto Label_117; // 0x52 JumpB
	IsValidVirtualKey(var_40_bool, var_32_int); // 0x53 Func
	var_52_bool = var_40_bool; // 0x55 Push
	if(var_52_bool == 0) goto Label_114; // 0x56 JumpB
	get(var_41_int, var_37_int); // 0x57 TObjFunc
	Unbind(var_32_int); // 0x59 Func
	get(var_42_object, var_37_int); // 0x5b TObjFunc
	size(var_43_int); // 0x5d ObjFunc
	var_44_int = 0; // 0x5f MovI
	
Label_96:
	var_53_bool = var_44_int < var_43_int; // 0x60 LT
	if(var_53_bool == 0) goto Label_107; // 0x61 JumpB
	get(var_45_int, var_44_int); // 0x62 ObjFunc
	get(var_46_int, var_45_int); // 0x64 TObjFunc
	Unbind(var_46_int); // 0x66 Func
	var_54_int = 1; // 0x68 PushI
	var_44_int = var_44_int + var_54_int; // 0x69 Add2
	goto Label_96; // 0x6a Jump
	
Label_107:
	Bind(var_32_int, var_41_int); // 0x6b Func
	func_293(var_46_int); // 0x6e NEW_2
	var_42_object = 0; // 0x70 SetNull
	goto Label_117; // 0x71 Jump
	
Label_117:
	var_10_int = -1; // 0x75 TMovI
	var_11_bool = 0; // 0x76 TMovB
	var_12_bool = 0; // 0x77 TMovB
	ReleaseKeyboard(); // 0x78 Func
	ReleaseMouse(); // 0x7a Func
	var_161_int = 1; // 0x7c PushI
	SendMessageToParent(var_161_int); // 0x7d Func
	return 14; // 0x7f Return
	
Label_114:
	var_162_string = "wrong key code"; // 0x72 PushS
	Trace(var_162_string); // 0x73 Func
}


func_201()
{
	return 0; // 0xca Return
}


func_586(var_0_int, var_20_float)
{
	var_21_int = 0; var_22_int = 0; // 0x24a PushV
	var_23_int = 0; // 0x24b PushV
	func_18(var_23_int); // 0x24c NEW_2
	var_24_float = var_20_float * var_23_int; // 0x24e Mult
	var_25_int = 2; // 0x24f PushI
	var_22_int = var_24_float / var_24_float; // 0x250 Div2
	var_0_int = var_0_int + var_22_int; // 0x251 Add2
	func_690(var_21_int, var_22_int); // 0x253 NEW_2
	return 2; // 0x255 Return
}


func_203()
{
	return 0; // 0xcc Return
}


func_205(var_136_string)
{
	var_136_string = "scrollbar"; // 0xcd MovS
	return 0; // 0xce Return
}


func_207(var_1_int, var_10_int, var_27_int, var_28_int, var_29_int)
{
	var_30_string = ""; var_31_int = 0; var_32_int = 0; var_33_string = ""; var_34_string = ""; var_35_object = Obj(); var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_string = ""; var_42_int = 0; var_43_int = 0; var_44_string = ""; var_45_string = ""; var_46_object = Obj(); var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_string = ""; var_51_int = 0; // 0xcf PushV
	var_52_bool = var_27_int == var_10_int; // 0xd0 Eq
	if(var_52_bool == 0) goto Label_235; // 0xd1 JumpB
	var_53_string = "whitepixel"; // 0xd2 PushS
	var_54_int = 0; // 0xd3 PushV
	func_18(var_54_int); // 0xd4 NEW_2
	StretchBlit(var_53_string, var_28_int, var_29_int, var_54_int, var_54_int); // 0xd6 Func
	var_55_string = ""; var_56_int = 0; // 0xd8 PushV
	var_56_int = 108; // 0xd9 MovI
	func_728(var_55_string, var_56_int); // 0xda NEW_2
	var_41_string = var_55_string; // 0xdb Mov
	var_59_string = "default"; // 0xdd PushS
	GetTextWidth(var_42_int, var_59_string, var_41_string); // 0xde Func
	var_60_string = "default"; // 0xe0 PushS
	var_61_int = var_1_int - var_42_int; // 0xe1 Sub
	var_62_int = 2; // 0xe2 PushI
	var_63_float = var_61_int / var_62_int; // 0xe3 Div
	var_64_int = var_28_int + var_63_float; // 0xe4 Add
	var_65_float = 0.25098; // 0xe5 PushF
	var_66_float = 0.25098; // 0xe6 PushF
	var_67_float = 0.25098; // 0xe7 PushF
	Print(var_60_string, var_64_int, var_29_int, var_41_string, var_65_float, var_66_float, var_67_float); // 0xe8 Func
	return 22; // 0xea Return
	
Label_235:
	get(var_43_int, var_27_int); // 0xeb TObjFunc
	var_68_string = ""; var_69_int = 0; // 0xed PushV
	var_69_int = var_43_int; // 0xee Mov
	func_728(var_68_string, var_69_int); // 0xef NEW_2
	var_44_string = var_68_string; // 0xf0 Mov
	get(var_46_object, var_27_int); // 0xf2 TObjFunc
	size(var_47_int); // 0xf4 ObjFunc
	var_48_int = 0; // 0xf6 MovI
	
Label_247:
	var_70_bool = var_48_int < var_47_int; // 0xf7 LT
	if(var_70_bool == 0) goto Label_261; // 0xf8 JumpB
	var_71_int = var_48_int; // 0xf9 Push
	if(var_71_int == 0) goto Label_253; // 0xfa JumpB
	var_72_string = " , "; // 0xfb PushS
	var_45_string = var_45_string + var_72_string; // 0xfc Add2
	
Label_253:
	get(var_49_int, var_48_int); // 0xfd ObjFunc
	get(var_50_string, var_49_int); // 0xff TObjFunc
	var_45_string = var_45_string + var_50_string; // 0x101 Add2
	var_73_int = 1; // 0x102 PushI
	var_48_int = var_48_int + var_73_int; // 0x103 Add2
	goto Label_247; // 0x104 Jump
	
Label_261:
	var_74_string = "default"; // 0x105 PushS
	var_75_float = 0.55686; // 0x106 PushF
	var_76_float = 0.55686; // 0x107 PushF
	var_77_float = 0.55686; // 0x108 PushF
	Print(var_74_string, var_28_int, var_29_int, var_44_string, var_75_float, var_76_float, var_77_float); // 0x109 Func
	var_78_int = var_47_int; // 0x10b Push
	if(var_78_int == 0) goto Label_280; // 0x10c JumpB
	var_79_string = "default"; // 0x10d PushS
	GetTextWidth(var_51_int, var_79_string, var_45_string); // 0x10e Func
	var_80_string = "default"; // 0x110 PushS
	var_81_int = var_28_int + var_1_int; // 0x111 Add
	var_82_int = var_81_int - var_51_int; // 0x112 Sub
	var_83_float = 0.55686; // 0x113 PushF
	var_84_float = 0.55686; // 0x114 PushF
	var_85_float = 0.55686; // 0x115 PushF
	Print(var_80_string, var_82_int, var_29_int, var_45_string, var_83_float, var_84_float, var_85_float); // 0x116 Func
	
Label_280:
	return 22; // 0x118 Return
}


func_598(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x256 PushV
	var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x257 PushV
	var_22_int = var_17_int; // 0x258 Mov
	var_23_int = var_18_int; // 0x259 Mov
	func_666(var_21_int, var_22_int, var_23_int); // 0x25a NEW_2
	var_20_int = var_21_int; // 0x25b Mov
	var_35_int = -1; // 0x25d PushI
	var_36_bool = var_20_int != var_35_int; // 0x25e Neq
	if(var_36_bool == 0) goto Label_614; // 0x25f JumpB
	var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x260 PushV
	var_37_int = var_20_int; // 0x261 Mov
	var_38_int = var_17_int; // 0x262 Mov
	var_39_int = var_18_int; // 0x263 Mov
	func_128(var_38_int, var_39_int); // 0x264 NEW_2
	
Label_614:
	return 2; // 0x266 Return
}


func_728(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0x2d8 PushV
	GetStringByID(var_58_string, var_56_int); // 0x2d9 Func
	var_55_string = var_58_string; // 0x2db Mov
	return 2; // 0x2dc Return
}


func_615(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x267 PushV
	var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x268 PushV
	var_22_int = var_17_int; // 0x269 Mov
	var_23_int = var_18_int; // 0x26a Mov
	func_666(var_21_int, var_22_int, var_23_int); // 0x26b NEW_2
	var_20_int = var_21_int; // 0x26c Mov
	var_35_int = -1; // 0x26e PushI
	var_36_bool = var_20_int != var_35_int; // 0x26f Neq
	if(var_36_bool == 0) goto Label_631; // 0x270 JumpB
	var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x271 PushV
	var_37_int = var_20_int; // 0x272 Mov
	var_38_int = var_17_int; // 0x273 Mov
	var_39_int = var_18_int; // 0x274 Mov
	func_199(); // 0x275 NEW_2
	
Label_631:
	return 2; // 0x277 Return
}


func_490()
{
	var_82_int = 0; var_83_int = 0; var_84_object = Obj(); var_85_int = 0; var_86_int = 0; var_87_object = Obj(); // 0x1ea PushV
	size(var_85_int); // 0x1eb TObjFunc
	var_86_int = 0; // 0x1ed MovI
	
Label_494:
	var_88_bool = var_86_int < var_85_int; // 0x1ee LT
	if(var_88_bool == 0) goto Label_504; // 0x1ef JumpB
	get(var_87_object, var_86_int); // 0x1f0 TObjFunc
	clear(); // 0x1f2 ObjFunc
	var_87_object = 0; // 0x1f4 SetNull
	var_89_int = 1; // 0x1f5 PushI
	var_86_int = var_86_int + var_89_int; // 0x1f6 Add2
	goto Label_494; // 0x1f7 Jump
	
Label_504:
	return 6; // 0x1f8 Return
}


func_632(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x278 PushV
	var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x279 PushV
	var_22_int = var_17_int; // 0x27a Mov
	var_23_int = var_18_int; // 0x27b Mov
	func_666(var_21_int, var_22_int, var_23_int); // 0x27c NEW_2
	var_20_int = var_21_int; // 0x27d Mov
	var_35_int = -1; // 0x27f PushI
	var_36_bool = var_20_int != var_35_int; // 0x280 Neq
	if(var_36_bool == 0) goto Label_648; // 0x281 JumpB
	var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x282 PushV
	var_37_int = var_20_int; // 0x283 Mov
	var_38_int = var_17_int; // 0x284 Mov
	var_39_int = var_18_int; // 0x285 Mov
	func_201(); // 0x286 NEW_2
	
Label_648:
	return 2; // 0x288 Return
}


func_505(var_96_int, var_97_int)
{
	var_98_int = 0; var_99_int = 0; var_100_int = 0; var_101_object = Obj(); var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_object = Obj(); // 0x1f9 PushV
	size(var_102_int); // 0x1fa TObjFunc
	var_103_int = 0; // 0x1fc MovI
	
Label_509:
	var_106_bool = var_103_int < var_102_int; // 0x1fd LT
	if(var_106_bool == 0) goto Label_524; // 0x1fe JumpB
	get(var_104_int, var_103_int); // 0x1ff TObjFunc
	var_107_bool = var_96_int == var_104_int; // 0x201 Eq
	if(var_107_bool == 0) goto Label_521; // 0x202 JumpB
	get(var_105_object, var_103_int); // 0x203 TObjFunc
	add(var_97_int); // 0x205 ObjFunc
	return 8; // 0x207 Return
	
Label_521:
	var_108_int = 1; // 0x209 PushI
	var_103_int = var_103_int + var_108_int; // 0x20a Add2
	goto Label_509; // 0x20b Jump
	
Label_524:
	var_109_string = "AddKeyToAction fail"; // 0x20c PushS
	Trace(var_109_string); // 0x20d Func
	return 8; // 0x20f Return
}


