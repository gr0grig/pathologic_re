task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 1; // 0x9b PushI
	if(var_18_int == 0) goto Label_195; // 0x9c JumpB
	func_2270(); // 0x9e NEW_2
	var_20_int = 19235; // 0xa0 PushI
	var_21_bool = var_16_object == var_20_int; // 0xa1 Eq
	if(var_21_bool == 0) goto Label_183; // 0xa2 JumpB
	var_22_string = ""; // 0xa3 PushV
	var_22_string = "Neutral"; // 0xa4 MovS
	func_132(var_17_bool, var_22_string); // 0xa5 NEW_2
	var_39_int = 518116; // 0xa7 PushI
	SetMessage(var_39_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_40_int = 518117; // 0xac PushI
	var_41_int = -1; // 0xad PushI
	var_42_int = 19236; // 0xae PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xaf TObjFunc
	var_43_int = 534584; // 0xb1 PushI
	var_44_int = -1; // 0xb2 PushI
	var_45_int = 36222; // 0xb3 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_46_bool = 0; // 0xb8 PushV
	func_2893(var_46_bool); // 0xb9 NEW_2
	if(var_46_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xd3 PushV
	var_19_int = 0; var_20_object = Obj(); // 0xd4 PushV
	var_20_object = var_16_bool; // 0xd5 Mov
	func_2856(var_20_object); // 0xd6 NEW_2
	var_18_int = var_19_int; // 0xd7 Mov
	var_21_int = 0; // 0xd9 PushI
	var_22_bool = var_18_int > var_21_int; // 0xda GT
	if(var_22_bool == 0) goto Label_224; // 0xdb JumpB
	var_23_object = Obj(); // 0xdc PushV
	var_23_object = var_16_bool; // 0xdd Mov
	func_2859(var_23_object); // 0xde NEW_2
	
Label_224:
	return 2; // 0xe0 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_2911(); // 0xe2 NEW_2
	return 0; // 0xe4 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x15b Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	return 0; // 0x15d Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	return 0; // 0x15f Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x160 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x161 PushV
	var_20_object = var_16_bool; // 0x162 Mov
	func_2856(var_20_object); // 0x163 NEW_2
	var_18_int = var_19_int; // 0x164 Mov
	var_21_int = 0; // 0x166 PushI
	var_22_bool = var_18_int > var_21_int; // 0x167 GT
	if(var_22_bool == 0) goto Label_371; // 0x168 JumpB
	var_23_int = 1; // 0x169 PushI
	var_24_bool = var_18_int > var_23_int; // 0x16a GT
	if(var_24_bool == 0) goto Label_367; // 0x16b JumpB
	func_597(); // 0x16d NEW_2
	
Label_367:
	var_25_object = Obj(); // 0x16f PushV
	var_25_object = var_16_bool; // 0x170 Mov
	func_2859(var_25_object); // 0x171 NEW_2
	
Label_371:
	return 2; // 0x173 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x174 PushV
	var_19_object = Obj(); // 0x175 PushV
	var_19_object = var_16_bool; // 0x176 Mov
	func_2757(var_19_object); // 0x177 NEW_2
	var_28_int = 0; var_29_object = Obj(); // 0x179 PushV
	var_29_object = var_16_bool; // 0x17a Mov
	func_2823(var_28_int, var_29_object); // 0x17b NEW_2
	var_18_int = var_28_int; // 0x17c Mov
	var_64_int = 0; // 0x17e PushI
	var_65_bool = var_18_int > var_64_int; // 0x17f GT
	if(var_65_bool == 0) goto Label_395; // 0x180 JumpB
	var_66_int = 1; // 0x181 PushI
	var_67_bool = var_18_int > var_66_int; // 0x182 GT
	if(var_67_bool == 0) goto Label_391; // 0x183 JumpB
	func_597(); // 0x185 NEW_2
	
Label_391:
	var_68_object = Obj(); // 0x187 PushV
	var_68_object = var_16_bool; // 0x188 Mov
	func_2833(var_68_object); // 0x189 NEW_2
	
Label_395:
	return 2; // 0x18b Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x18c PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0; // 0x18d PushV
	var_22_object = var_16_bool; // 0x18e Mov
	var_23_object = var_17_object; // 0x18f Mov
	var_24_bool = var_18_bool; // 0x190 Mov
	func_2908(var_24_bool); // 0x191 NEW_2
	if(var_21_bool == 0) goto Label_423; // 0x193 JumpB
	var_25_int = 0; var_26_object = Obj(); var_27_bool = 0; // 0x194 PushV
	var_26_object = var_16_bool; // 0x195 Mov
	var_27_bool = var_18_bool; // 0x196 Mov
	func_2841(var_27_bool); // 0x197 NEW_2
	var_20_int = var_25_int; // 0x198 Mov
	var_28_int = 0; // 0x19a PushI
	var_29_bool = var_20_int > var_28_int; // 0x19b GT
	if(var_29_bool == 0) goto Label_423; // 0x19c JumpB
	var_30_int = 1; // 0x19d PushI
	var_31_bool = var_20_int > var_30_int; // 0x19e GT
	if(var_31_bool == 0) goto Label_419; // 0x19f JumpB
	func_597(); // 0x1a1 NEW_2
	
Label_419:
	var_32_object = Obj(); // 0x1a3 PushV
	var_32_object = var_16_bool; // 0x1a4 Mov
	func_2844(); // 0x1a5 NEW_2
	
Label_423:
	return 2; // 0x1a7 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x1a8 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x1a9 PushV
	var_20_object = var_16_bool; // 0x1aa Mov
	func_2846(var_20_object); // 0x1ab NEW_2
	var_18_int = var_19_int; // 0x1ac Mov
	var_21_int = 0; // 0x1ae PushI
	var_22_bool = var_18_int > var_21_int; // 0x1af GT
	if(var_22_bool == 0) goto Label_443; // 0x1b0 JumpB
	var_23_int = 1; // 0x1b1 PushI
	var_24_bool = var_18_int > var_23_int; // 0x1b2 GT
	if(var_24_bool == 0) goto Label_439; // 0x1b3 JumpB
	func_597(); // 0x1b5 NEW_2
	
Label_439:
	var_25_object = Obj(); // 0x1b7 PushV
	var_25_object = var_16_bool; // 0x1b8 Mov
	func_2849(); // 0x1b9 NEW_2
	
Label_443:
	return 2; // 0x1bb Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x1bc PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x1bd PushV
	var_21_object = var_16_object; // 0x1be Mov
	var_22_string = var_17_bool; // 0x1bf Mov
	func_2671(var_20_bool, var_21_object, var_22_string); // 0x1c0 NEW_2
	if(var_20_bool == 0) goto Label_460; // 0x1c2 JumpB
	func_597(); // 0x1c4 NEW_2
	var_35_object = Obj(); var_36_string = ""; // 0x1c6 PushV
	var_35_object = var_16_object; // 0x1c7 Mov
	var_36_string = var_17_bool; // 0x1c8 Mov
	func_2703(var_35_object, var_36_string); // 0x1c9 NEW_2
	goto Label_480; // 0x1cb Jump
	
Label_480:
	return 2; // 0x1e0 Return
	
Label_460:
	var_46_int = 0; var_47_string = ""; var_48_object = Obj(); // 0x1cc PushV
	var_47_string = var_17_bool; // 0x1cd Mov
	var_48_object = var_16_object; // 0x1ce Mov
	func_2851(var_48_object); // 0x1cf NEW_2
	var_19_int = var_46_int; // 0x1d0 Mov
	var_49_int = 0; // 0x1d2 PushI
	var_50_bool = var_19_int > var_49_int; // 0x1d3 GT
	if(var_50_bool == 0) goto Label_480; // 0x1d4 JumpB
	var_51_int = 1; // 0x1d5 PushI
	var_52_bool = var_19_int > var_51_int; // 0x1d6 GT
	if(var_52_bool == 0) goto Label_475; // 0x1d7 JumpB
	func_597(); // 0x1d9 NEW_2
	
Label_475:
	var_53_string = ""; var_54_object = Obj(); // 0x1db PushV
	var_53_string = var_17_bool; // 0x1dc Mov
	var_54_object = var_16_object; // 0x1dd Mov
	func_2854(); // 0x1de NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_string, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_string = ""; // 0x1e2 PushV
	var_18_string = var_16_bool; // 0x1e3 Mov
	func_2770(var_17_bool, var_18_string); // 0x1e4 NEW_2
	if(var_17_bool == 0) goto Label_494; // 0x1e6 JumpB
	func_597(); // 0x1e8 NEW_2
	var_26_string = ""; // 0x1ea PushV
	var_26_string = var_16_bool; // 0x1eb Mov
	func_2786(var_26_string); // 0x1ec NEW_2
	
Label_494:
	return 0; // 0x1ee Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_597(); // 0x1f0 NEW_2
	func_2911(); // 0x1f3 NEW_2
	return 0; // 0x1f5 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x1f7 PushV
	var_18_object = var_16_bool; // 0x1f8 Mov
	func_2728(var_17_bool, var_18_object); // 0x1f9 NEW_2
	if(var_17_bool == 0) goto Label_515; // 0x1fb JumpB
	func_597(); // 0x1fd NEW_2
	var_29_object = Obj(); // 0x1ff PushV
	var_29_object = var_16_bool; // 0x200 Mov
	func_2751(var_29_object); // 0x201 NEW_2
	
Label_515:
	return 0; // 0x203 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x271 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x272 PushV
	var_20_object = var_16_bool; // 0x273 Mov
	func_2856(var_20_object); // 0x274 NEW_2
	var_18_int = var_19_int; // 0x275 Mov
	var_21_int = 0; // 0x277 PushI
	var_22_bool = var_18_int > var_21_int; // 0x278 GT
	if(var_22_bool == 0) goto Label_644; // 0x279 JumpB
	var_23_int = 1; // 0x27a PushI
	var_24_bool = var_18_int > var_23_int; // 0x27b GT
	if(var_24_bool == 0) goto Label_640; // 0x27c JumpB
	func_860(var_17_int, var_18_int); // 0x27e NEW_2
	
Label_640:
	var_25_object = Obj(); // 0x280 PushV
	var_25_object = var_16_bool; // 0x281 Mov
	func_2859(var_25_object); // 0x282 NEW_2
	
Label_644:
	return 2; // 0x284 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x285 PushV
	var_19_object = Obj(); // 0x286 PushV
	var_19_object = var_16_bool; // 0x287 Mov
	func_2757(var_19_object); // 0x288 NEW_2
	var_28_int = 0; var_29_object = Obj(); // 0x28a PushV
	var_29_object = var_16_bool; // 0x28b Mov
	func_2823(var_28_int, var_29_object); // 0x28c NEW_2
	var_18_int = var_28_int; // 0x28d Mov
	var_64_int = 0; // 0x28f PushI
	var_65_bool = var_18_int > var_64_int; // 0x290 GT
	if(var_65_bool == 0) goto Label_668; // 0x291 JumpB
	var_66_int = 1; // 0x292 PushI
	var_67_bool = var_18_int > var_66_int; // 0x293 GT
	if(var_67_bool == 0) goto Label_664; // 0x294 JumpB
	func_860(var_17_int, var_18_int); // 0x296 NEW_2
	
Label_664:
	var_68_object = Obj(); // 0x298 PushV
	var_68_object = var_16_bool; // 0x299 Mov
	func_2833(var_68_object); // 0x29a NEW_2
	
Label_668:
	return 2; // 0x29c Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x29d PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0; // 0x29e PushV
	var_22_object = var_16_bool; // 0x29f Mov
	var_23_object = var_17_object; // 0x2a0 Mov
	var_24_bool = var_18_bool; // 0x2a1 Mov
	func_2908(var_24_bool); // 0x2a2 NEW_2
	if(var_21_bool == 0) goto Label_696; // 0x2a4 JumpB
	var_25_int = 0; var_26_object = Obj(); var_27_bool = 0; // 0x2a5 PushV
	var_26_object = var_16_bool; // 0x2a6 Mov
	var_27_bool = var_18_bool; // 0x2a7 Mov
	func_2841(var_27_bool); // 0x2a8 NEW_2
	var_20_int = var_25_int; // 0x2a9 Mov
	var_28_int = 0; // 0x2ab PushI
	var_29_bool = var_20_int > var_28_int; // 0x2ac GT
	if(var_29_bool == 0) goto Label_696; // 0x2ad JumpB
	var_30_int = 1; // 0x2ae PushI
	var_31_bool = var_20_int > var_30_int; // 0x2af GT
	if(var_31_bool == 0) goto Label_692; // 0x2b0 JumpB
	func_860(var_19_int, var_20_int); // 0x2b2 NEW_2
	
Label_692:
	var_32_object = Obj(); // 0x2b4 PushV
	var_32_object = var_16_bool; // 0x2b5 Mov
	func_2844(); // 0x2b6 NEW_2
	
Label_696:
	return 2; // 0x2b8 Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x2b9 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x2ba PushV
	var_20_object = var_16_bool; // 0x2bb Mov
	func_2846(var_20_object); // 0x2bc NEW_2
	var_18_int = var_19_int; // 0x2bd Mov
	var_21_int = 0; // 0x2bf PushI
	var_22_bool = var_18_int > var_21_int; // 0x2c0 GT
	if(var_22_bool == 0) goto Label_716; // 0x2c1 JumpB
	var_23_int = 1; // 0x2c2 PushI
	var_24_bool = var_18_int > var_23_int; // 0x2c3 GT
	if(var_24_bool == 0) goto Label_712; // 0x2c4 JumpB
	func_860(var_17_int, var_18_int); // 0x2c6 NEW_2
	
Label_712:
	var_25_object = Obj(); // 0x2c8 PushV
	var_25_object = var_16_bool; // 0x2c9 Mov
	func_2849(); // 0x2ca NEW_2
	
Label_716:
	return 2; // 0x2cc Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x2cd PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x2ce PushV
	var_21_object = var_16_object; // 0x2cf Mov
	var_22_string = var_17_bool; // 0x2d0 Mov
	func_2671(var_20_bool, var_21_object, var_22_string); // 0x2d1 NEW_2
	if(var_20_bool == 0) goto Label_733; // 0x2d3 JumpB
	func_860(var_18_int, var_19_int); // 0x2d5 NEW_2
	var_35_object = Obj(); var_36_string = ""; // 0x2d7 PushV
	var_35_object = var_16_object; // 0x2d8 Mov
	var_36_string = var_17_bool; // 0x2d9 Mov
	func_2703(var_35_object, var_36_string); // 0x2da NEW_2
	goto Label_753; // 0x2dc Jump
	
Label_753:
	return 2; // 0x2f1 Return
	
Label_733:
	var_46_int = 0; var_47_string = ""; var_48_object = Obj(); // 0x2dd PushV
	var_47_string = var_17_bool; // 0x2de Mov
	var_48_object = var_16_object; // 0x2df Mov
	func_2851(var_48_object); // 0x2e0 NEW_2
	var_19_int = var_46_int; // 0x2e1 Mov
	var_49_int = 0; // 0x2e3 PushI
	var_50_bool = var_19_int > var_49_int; // 0x2e4 GT
	if(var_50_bool == 0) goto Label_753; // 0x2e5 JumpB
	var_51_int = 1; // 0x2e6 PushI
	var_52_bool = var_19_int > var_51_int; // 0x2e7 GT
	if(var_52_bool == 0) goto Label_748; // 0x2e8 JumpB
	func_860(var_18_int, var_19_int); // 0x2ea NEW_2
	
Label_748:
	var_53_string = ""; var_54_object = Obj(); // 0x2ec PushV
	var_53_string = var_17_bool; // 0x2ed Mov
	var_54_object = var_16_object; // 0x2ee Mov
	func_2854(); // 0x2ef NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_string = ""; // 0x2f3 PushV
	var_18_string = var_16_bool; // 0x2f4 Mov
	func_2770(var_17_bool, var_18_string); // 0x2f5 NEW_2
	if(var_17_bool == 0) goto Label_767; // 0x2f7 JumpB
	func_860(var_15_object, var_16_bool); // 0x2f9 NEW_2
	var_26_string = ""; // 0x2fb PushV
	var_26_string = var_16_bool; // 0x2fc Mov
	func_2786(var_26_string); // 0x2fd NEW_2
	
Label_767:
	return 0; // 0x2ff Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x301 PushV
	var_18_object = var_16_bool; // 0x302 Mov
	func_2728(var_17_bool, var_18_object); // 0x303 NEW_2
	if(var_17_bool == 0) goto Label_781; // 0x305 JumpB
	func_860(var_15_object, var_16_bool); // 0x307 NEW_2
	var_29_object = Obj(); // 0x309 PushV
	var_29_object = var_16_bool; // 0x30a Mov
	func_2751(var_29_object); // 0x30b NEW_2
	
Label_781:
	return 0; // 0x30d Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_860(var_14_object, var_15_bool); // 0x30f NEW_2
	func_2911(); // 0x312 NEW_2
	return 0; // 0x314 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	RequestClearPath(var_16_bool); // 0x356 Func
	return 0; // 0x358 Return
}


task_4_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	Stop(); // 0x359 Func
	return 0; // 0x35b Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_860(var_15_object, var_16_bool); // 0x365 NEW_2
	var_17_object = Obj(); // 0x367 PushV
	var_17_object = var_16_bool; // 0x368 Mov
	func_2647(); // 0x369 NEW_2
	return 0; // 0x36b Return
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_1630(var_15_bool); // 0x619 NEW_2
	func_2911(); // 0x61c NEW_2
	return 0; // 0x61e Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_int)
{
	var_17_int = 1; // 0x651 PushI
	var_18_bool = var_16_int == var_17_int; // 0x652 Eq
	if(var_18_bool == 0) goto Label_1625; // 0x653 JumpB
	var_19_object = Obj(); // 0x654 PushV
	var_19_object = var_1_object; // 0x655 MovT
	func_2378(var_19_object); // 0x656 NEW_2
	goto Label_1629; // 0x658 Jump
	
Label_1629:
	return 0; // 0x65d Return
	
Label_1625:
	var_24_int = 0; // 0x659 PushV
	var_24_int = var_16_int; // 0x65a Mov
	func_1774(var_15_bool, var_16_int, var_24_int); // 0x65b NEW_2
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; // 0x66c PushV
	var_17_bool = 0; // 0x66d MovB
	var_18_bool = var_1_object == var_16_object; // 0x66e Eq
	if(var_18_bool == 0) goto Label_1651; // 0x66f JumpB
	var_19_bool = var_2_object == 0; // 0x670 Not
	if(var_19_bool == 0) goto Label_1651; // 0x671 JumpB
	var_17_bool = 1; // 0x672 MovB
	
Label_1651:
	if(var_17_bool == 0) goto Label_1657; // 0x673 JumpB
	var_2_object = 1; // 0x674 TMovB
	var_20_object = Obj(); // 0x675 PushV
	var_20_object = var_16_object; // 0x676 Mov
	func_2259(var_20_object); // 0x677 NEW_2
	
Label_1657:
	return 0; // 0x679 Return
}


task_6_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; // 0x67b PushV
	var_17_bool = 0; // 0x67c MovB
	var_18_bool = var_1_object == var_16_object; // 0x67d Eq
	if(var_18_bool == 0) goto Label_1666; // 0x67e JumpB
	var_19_object = var_2_object; // 0x67f PushT
	if(var_19_object == 0) goto Label_1666; // 0x680 JumpB
	var_17_bool = 1; // 0x681 MovB
	
Label_1666:
	if(var_17_bool == 0) goto Label_1671; // 0x682 JumpB
	var_2_object = 0; // 0x683 TMovB
	var_20_string = "head"; // 0x684 PushS
	UnlookAsync(var_20_string); // 0x685 Func
	
Label_1671:
	return 0; // 0x687 Return
}


task_6_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	RequestClearPath(var_16_object); // 0x701 Func
	return 0; // 0x703 Return
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1630(var_16_object); // 0x70d NEW_2
	var_21_object = Obj(); // 0x70f PushV
	var_21_object = var_16_object; // 0x710 Mov
	func_2647(); // 0x711 NEW_2
	return 0; // 0x713 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0xa4a PushV
	var_20_string = "health"; // 0xa4b PushS
	var_21_bool = var_17_string == var_20_string; // 0xa4c Eq
	if(var_21_bool == 0) goto Label_2646; // 0xa4d JumpB
	var_22_string = "health"; // 0xa4e PushS
	GetProperty(var_22_string, var_19_float); // 0xa4f Func
	var_23_int = 0; // 0xa51 PushI
	var_24_bool = var_19_float <= var_23_int; // 0xa52 LE
	if(var_24_bool == 0) goto Label_2646; // 0xa53 JumpB
	SignalDeath(var_16_object); // 0xa54 Func
	
Label_2646:
	return 2; // 0xa56 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_object = Obj(); // 0xa58 PushV
	var_17_object = var_16_object; // 0xa59 Mov
	func_2626(var_17_object); // 0xa5a NEW_2
	return 0; // 0xa5c Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0xa5e PushV
	var_20_object = var_16_object; // 0xa5f Mov
	var_21_int = var_17_int; // 0xa60 Mov
	var_22_float = var_18_float; // 0xa61 Mov
	func_2043(var_20_object, var_21_int, var_22_float); // 0xa62 NEW_2
	return 0; // 0xa64 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0xa66 PushV
	var_22_object = var_16_object; // 0xa67 Mov
	var_23_int = var_17_int; // 0xa68 Mov
	var_24_float = var_18_float; // 0xa69 Mov
	var_25_cvector = var_20_cvector; // 0xa6a Mov
	var_26_cvector = var_21_cvector; // 0xa6b Mov
	func_2111(var_24_float, var_25_cvector, var_26_cvector); // 0xa6c NEW_2
	return 0; // 0xa6e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 1; // 0x25a PushB
	SensePlayerOnly(var_16_bool); // 0x25b Func
	func_2895(); // 0x25e NEW_2
	func_616(); // 0x261 NEW_2
	
Label_611:
	func_789(var_14_object, var_15_bool); // 0x264 NEW_2
	goto Label_611; // 0x266 Jump
}


func_0(var_0_object, var_27_int, var_28_object)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_int = 0; var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; // 0x0 PushV
	var_0_object = var_28_object; // 0x1 TMov
	var_38_bool = 0; var_39_object = Obj(); var_40_float = 0; // 0x2 PushV
	var_39_object = var_28_object; // 0x3 Mov
	var_40_float = 70.0; // 0x4 MovF
	func_2141(var_39_object, var_40_float); // 0x5 NEW_2
	var_85_bool = var_38_bool == 0; // 0x7 Not
	if(var_85_bool == 0) goto Label_11; // 0x8 JumpB
	var_27_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_34_object); // 0xb Func
	var_86_int = 0; // 0xd PushV
	func_2887(var_86_int); // 0xe NEW_2
	SetNPCName(var_86_int); // 0x10 ObjFunc
	var_87_int = 0; // 0x12 PushV
	func_2885(var_87_int); // 0x13 NEW_2
	SetNPCDescription(var_87_int); // 0x15 ObjFunc
	var_88_string = ""; // 0x17 PushV
	func_2889(var_88_string); // 0x18 NEW_2
	SetPhoto(var_88_string); // 0x1a ObjFunc
	var_89_string = ""; // 0x1c PushV
	func_2891(var_89_string); // 0x1d NEW_2
	SetPhoto2(var_89_string); // 0x1f ObjFunc
	var_90_int = 0; // 0x21 PushV
	func_2398(var_90_int); // 0x22 NEW_2
	SetPlayerName(var_90_int); // 0x24 ObjFunc
	var_36_int = -1; // 0x26 MovI
	IsOverrideActive(var_35_bool); // 0x27 Func
	var_98_bool = var_35_bool; // 0x29 Push
	if(var_98_bool == 0) goto Label_45; // 0x2a JumpB
	var_27_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_34_object); // 0x2d Func
	var_99_object = Obj(); var_100_object = Obj(); // 0x2f PushV
	var_99_object = var_28_object; // 0x30 Mov
	var_100_object = var_34_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_101_object, var_102_object, var_103_string, var_104_bool, var_99_object, var_100_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_37_bool); // 0x36 ObjFunc
	
Label_56:
	var_148_bool = var_37_bool == 0; // 0x38 Not
	if(var_148_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_37_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_149_object = Obj(); // 0x3f PushV
	var_149_object = var_28_object; // 0x40 Mov
	func_2210(); // 0x41 NEW_2
	StopDialog(var_34_object); // 0x43 Func
	GetReturnValue(var_36_int); // 0x45 ObjFunc
	var_27_int = var_36_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_516()
{
	var_165_int = 0; var_166_int = 0; var_167_int = 0; var_168_int = 0; var_169_bool = 0; var_170_float = 0; var_171_bool = 0; var_172_int = 0; var_173_int = 0; var_174_int = 0; var_175_int = 0; var_176_bool = 0; var_177_float = 0; var_178_bool = 0; // 0x204 PushV
	WaitForAnimEnd(); // 0x205 Func
	var_179_bool = 0; // 0x207 PushV
	func_2136(var_179_bool); // 0x208 NEW_2
	var_180_bool = var_179_bool == 0; // 0x20a Not
	if(var_180_bool == 0) goto Label_525; // 0x20b JumpB
	return 14; // 0x20c Return
	
Label_525:
	var_181_int = 0; // 0x20d PushV
	func_2806(var_181_int); // 0x20e NEW_2
	var_172_int = var_181_int; // 0x20f Mov
	var_173_int = 0; // 0x211 MovI
	
Label_530:
	var_194_bool = 0; // 0x212 PushV
	var_194_bool = 0; // 0x213 MovB
	var_195_int = 5; // 0x214 PushI
	var_196_bool = var_173_int < var_195_int; // 0x215 LT
	if(var_196_bool == 0) goto Label_540; // 0x216 JumpB
	var_197_bool = 0; // 0x217 PushV
	func_2136(var_197_bool); // 0x218 NEW_2
	if(var_197_bool == 0) goto Label_540; // 0x21a JumpB
	var_194_bool = 1; // 0x21b MovB
	
Label_540:
	if(var_194_bool == 0) goto Label_592; // 0x21c JumpB
	var_198_int = 3; // 0x21d PushI
	irand(var_174_int, var_198_int); // 0x21e Func
	var_199_int = 0; // 0x220 PushI
	var_200_bool = var_174_int == var_199_int; // 0x221 Eq
	if(var_200_bool == 0) goto Label_564; // 0x222 JumpB
	var_201_int = var_172_int; // 0x223 Push
	if(var_201_int == 0) goto Label_563; // 0x224 JumpB
	irand(var_175_int, var_172_int); // 0x225 Func
	var_202_string = "all"; // 0x227 PushS
	var_203_string = ""; var_204_int = 0; // 0x228 PushV
	var_204_int = var_175_int; // 0x229 Mov
	func_2799(var_203_string, var_204_int); // 0x22a NEW_2
	PlayAnimation(var_202_string, var_203_string); // 0x22c Func
	WaitForAnimEnd(var_176_bool); // 0x22e Func
	var_205_bool = var_176_bool == 0; // 0x230 Not
	if(var_205_bool == 0) goto Label_563; // 0x231 JumpB
	goto Label_592; // 0x232 Jump
	
Label_592:
	ResetAAS(); // 0x250 Func
	return 14; // 0x252 Return
	
Label_563:
	goto Label_581; // 0x233 Jump
	
Label_581:
	var_206_bool = 0; // 0x245 PushV
	func_595(var_206_bool); // 0x246 NEW_2
	var_207_bool = var_206_bool == 0; // 0x248 Not
	if(var_207_bool == 0) goto Label_587; // 0x249 JumpB
	goto Label_592; // 0x24a Jump
	
Label_587:
	ResetAAS(); // 0x24b Func
	var_208_int = 1; // 0x24d PushI
	var_173_int = var_173_int + var_208_int; // 0x24e Add2
	goto Label_530; // 0x24f Jump
	
Label_564:
	var_209_int = 1; // 0x234 PushI
	var_210_bool = var_174_int == var_209_int; // 0x235 Eq
	if(var_210_bool == 0) goto Label_578; // 0x236 JumpB
	var_211_int = 4; // 0x237 PushI
	rand(var_177_float, var_211_int); // 0x238 Func
	var_212_int = 1; // 0x23a PushI
	var_213_int = var_177_float + var_212_int; // 0x23b Add
	Sleep(var_213_int, var_178_bool); // 0x23c Func
	var_214_bool = var_178_bool == 0; // 0x23e Not
	if(var_214_bool == 0) goto Label_577; // 0x23f JumpB
	goto Label_592; // 0x240 Jump
	
Label_577:
	goto Label_581; // 0x241 Jump
	
Label_578:
	var_215_int = var_173_int; // 0x242 Push
	if(var_215_int == 0) goto Label_581; // 0x243 JumpB
	goto Label_592; // 0x244 Jump
}


func_1540(var_0_object)
{
	var_138_object = Obj(); // 0x604 PushV
	var_138_object = var_0_object; // 0x605 MovT
	func_2378(var_138_object); // 0x606 NEW_2
	return 0; // 0x608 Return
}


func_1545(var_477_int)
{
	var_477_int = 0; // 0x609 MovI
	return 0; // 0x60a Return
}


func_1547()
{
	var_269_string = ""; // 0x60b PushV
	var_269_string = "attack_stay"; // 0x60c MovS
	func_2277(var_269_string); // 0x60d NEW_2
	return 0; // 0x60f Return
}


func_1552()
{
	return 0; // 0x611 Return
}


func_1554(var_502_bool)
{
	var_502_bool = 1; // 0x612 MovB
	return 0; // 0x613 Return
}


func_1556(var_394_int)
{
	var_394_int = 1; // 0x614 MovI
	return 0; // 0x615 Return
}


func_1558(var_389_float)
{
	var_389_float = 0.5; // 0x616 MovF
	return 0; // 0x617 Return
}


func_1567(var_2_object, var_145_bool, var_146_object, var_147_float, var_148_float, var_149_bool, var_150_bool)
{
	var_154_bool = 0; var_155_bool = 0; var_156_bool = 0; var_157_bool = 0; // 0x61f PushV
	var_158_object = Obj(); // 0x620 PushV
	var_158_object = var_146_object; // 0x621 Mov
	func_2378(var_158_object); // 0x622 NEW_2
	var_159_int = 1; // 0x624 PushI
	var_160_int = 5; // 0x625 PushI
	SetTimer(var_159_int, var_160_int); // 0x626 Func
	CanSee(var_156_bool, var_146_object); // 0x628 Func
	var_161_bool = var_156_bool; // 0x62a Push
	if(var_161_bool == 0) goto Label_1586; // 0x62b JumpB
	var_2_object = 1; // 0x62c TMovB
	var_162_object = Obj(); // 0x62d PushV
	var_162_object = var_146_object; // 0x62e Mov
	func_2259(var_162_object); // 0x62f NEW_2
	goto Label_1587; // 0x631 Jump
	
Label_1587:
	var_169_bool = 0; var_170_object = Obj(); // 0x633 PushV
	var_170_object = var_146_object; // 0x634 Mov
	func_1844(var_169_bool, var_170_object); // 0x635 NEW_2
	if(var_169_bool == 0) goto Label_1597; // 0x637 JumpB
	var_171_object = Obj(); // 0x638 PushV
	func_2318(var_171_object); // 0x639 NEW_2
	SendPlayerEnemy(var_146_object, var_171_object); // 0x63b Func
	
Label_1597:
	var_172_bool = 0; var_173_object = Obj(); var_174_float = 0; var_175_float = 0; var_176_bool = 0; var_177_bool = 0; // 0x63d PushV
	var_173_object = var_146_object; // 0x63e Mov
	var_174_float = var_147_float; // 0x63f Mov
	var_175_float = var_148_float; // 0x640 Mov
	var_176_bool = var_149_bool; // 0x641 Mov
	var_177_bool = var_150_bool; // 0x642 Mov
	func_1672(var_156_bool, var_157_bool, var_172_bool, var_173_object, var_174_float, var_175_float, var_176_bool, var_177_bool); // 0x643 NEW_2
	var_157_bool = var_172_bool; // 0x644 Mov
	var_223_object = var_2_object; // 0x646 PushT
	if(var_223_object == 0) goto Label_1611; // 0x647 JumpB
	var_224_string = "head"; // 0x648 PushS
	UnlookAsync(var_224_string); // 0x649 Func
	
Label_1611:
	var_225_int = 1; // 0x64b PushI
	KillTimer(var_225_int); // 0x64c Func
	var_145_bool = var_157_bool; // 0x64e Mov
	return 4; // 0x64f Return
	
Label_1586:
	var_2_object = 0; // 0x632 TMovB
}


func_2621(var_44_int, var_45_string)
{
	var_46_int = 0; var_47_int = 0; // 0xa3d PushV
	GetInvItemByName(var_47_int, var_45_string); // 0xa3e Func
	var_44_int = var_47_int; // 0xa40 Mov
	return 2; // 0xa41 Return
}


func_2111(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); // 0x83f PushV
	GetScene(var_29_object); // 0x840 Func
	var_31_string = "scripted"; // 0x842 PushS
	var_32_string = "blood_dir.xml"; // 0x843 PushS
	AddActorByType(var_30_object, var_31_string, var_29_object, var_25_cvector, var_26_cvector, var_32_string); // 0x844 Func
	var_33_object = Obj(); // 0x846 PushV
	var_33_object = var_22_object; // 0x847 Mov
	func_1999(var_33_object); // 0x848 NEW_2
	return 4; // 0x84a Return
}


func_2626(var_17_object)
{
	var_18_object = Obj(); // 0xa43 PushV
	var_18_object = var_17_object; // 0xa44 Mov
	TaskCall(2); // 0xa45 TaskCall
	func_196(var_18_object); // 0xa46 NEW_2
	TaskReturn(); // 0xa47 TaskReturn
	return 0; // 0xa49 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_99_object, var_100_object)
{
	var_0_object = var_100_object; // 0x4b TMov
	var_1_object = var_99_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_105_int = 1; // 0x4e PushI
	if(var_105_int == 0) goto Label_102; // 0x4f JumpB
	var_106_string = ""; // 0x50 PushV
	var_106_string = "Neutral"; // 0x51 MovS
	func_132(var_100_object, var_106_string); // 0x52 NEW_2
	var_123_int = 518116; // 0x54 PushI
	SetMessage(var_123_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_124_int = 518117; // 0x59 PushI
	var_125_int = -1; // 0x5a PushI
	var_126_int = 19236; // 0x5b PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x5c TObjFunc
	var_127_int = 534584; // 0x5e PushI
	var_128_int = -1; // 0x5f PushI
	var_129_int = 36222; // 0x60 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_130_bool = 0; // 0x66 PushV
	func_2893(var_130_bool); // 0x67 NEW_2
	if(var_130_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_131_string = var_3_string; // 0x6c PushT
	if(var_131_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_132_string = ""; // 0x6f PushV
	var_132_string = var_2_object; // 0x70 MovT
	func_2228(var_132_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_143_string = "all"; // 0x75 PushS
	var_144_string = "idle"; // 0x76 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_145_string = var_3_string; // 0x7b PushT
	if(var_145_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_146_string = "all"; // 0x7e PushS
	var_147_string = "idle"; // 0x7f PushS
	PlayAnimation(var_146_string, var_147_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_2125()
{
	var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0); // 0x84d PushV
	GetPosition(var_250_cvector); // 0x84e ObjFunc
	GetPosition(var_251_cvector); // 0x850 Func
	var_252_cvector = var_250_cvector - var_251_cvector; // 0x852 Sub2
	var_253_float = GetByIndex(var_252_cvector, 0); // 0x853 PushE
	var_254_float = GetByIndex(var_252_cvector, 2); // 0x854 PushE
	RotateAsync(var_253_float, var_254_float); // 0x855 Func
	return 6; // 0x857 Return
}


func_595(var_206_bool)
{
	var_206_bool = 1; // 0x253 MovB
	return 0; // 0x254 Return
}


func_597()
{
	StopAnimation(); // 0x255 Func
	StopGroup0(); // 0x257 Func
	return 0; // 0x259 Return
}


func_2136(var_131_bool)
{
	var_132_bool = 0; var_133_bool = 0; // 0x858 PushV
	IsLoaded(var_133_bool); // 0x859 Func
	var_131_bool = var_133_bool; // 0x85b Mov
	return 2; // 0x85c Return
}


func_2141(var_38_bool, var_40_float)
{
	var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0; // 0x85d PushV
	GetPosition(var_51_cvector); // 0x85e ObjFunc
	GetEyesHeight(var_50_float); // 0x860 ObjFunc
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x862 PushE
	var_59_float = var_59_float + var_50_float; // 0x863 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x864 PopE
	GetPosition(var_52_cvector); // 0x865 Func
	GetEyesHeight(var_50_float); // 0x867 Func
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x869 PushE
	var_60_float = var_60_float + var_50_float; // 0x86a Add2
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x86b PopE
	var_53_cvector = var_51_cvector - var_52_cvector; // 0x86c Sub2
	var_61_float = GetByIndex(var_53_cvector, 1); // 0x86d PushE
	var_61_float = 0; // 0x86e MovI
	SetByIndex(var_53_cvector, 1) = var_61_float; // 0x86f PopE
	var_62_int = var_53_cvector | var_53_cvector; // 0x870 Or
	var_63_float = sqrt(var_62_int); // 0x871 Sqrt
	var_53_cvector = var_53_cvector / var_53_cvector; // 0x872 Div2
	var_54_cvector = -var_53_cvector; // 0x873 Neg2
	var_64_float = var_53_cvector * var_40_float; // 0x874 Mult
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x875 PushV
	var_67_cvector = CVector(0.0, 1.0, 0.0); // 0x876 PushVec
	var_66_cvector = var_54_cvector ^ var_67_cvector; // 0x877 Xor2
	func_2324(var_65_cvector, var_66_cvector); // 0x878 NEW_2
	var_73_int = 25; // 0x87a PushI
	var_74_float = var_65_cvector * var_73_int; // 0x87b Mult
	var_75_int = var_64_float + var_74_float; // 0x87c Add
	var_76_cvector = CVector(0.0, 10.0, 0.0); // 0x87d PushVec
	var_55_cvector = var_75_int - var_76_cvector; // 0x87e Sub2
	var_56_cvector = var_52_cvector + var_55_cvector; // 0x87f Add2
	IsOverrideActive(var_57_bool); // 0x880 Func
	var_77_bool = var_57_bool; // 0x882 Push
	if(var_77_bool == 0) goto Label_2182; // 0x883 JumpB
	var_38_bool = 0; // 0x884 MovB
	return 18; // 0x885 Return
	
Label_2182:
	StopWorld(); // 0x886 Func
	var_78_bool = 1; // 0x888 PushB
	CameraTransit(var_56_cvector, var_54_cvector, var_78_bool); // 0x889 Func
	var_79_float = GetByIndex(var_55_cvector, 0); // 0x88b PushE
	var_80_float = GetByIndex(var_55_cvector, 2); // 0x88c PushE
	Rotate(var_79_float, var_80_float); // 0x88d Func
	var_81_bool = 0; // 0x88f PushV
	func_2893(var_81_bool); // 0x890 NEW_2
	if(var_81_bool == 0) goto Label_2196; // 0x892 JumpB
	goto Label_2204; // 0x893 Jump
	
Label_2204:
	CameraWaitForPlayFinish(); // 0x89c Func
	ResumeWorld(); // 0x89e Func
	var_38_bool = 1; // 0x8a0 MovB
	return 18; // 0x8a1 Return
	
Label_2196:
	var_82_string = "head"; // 0x894 PushS
	HasAnimationTrack(var_58_bool, var_82_string); // 0x895 Func
	var_83_bool = var_58_bool; // 0x897 Push
	if(var_83_bool == 0) goto Label_2204; // 0x898 JumpB
	var_84_string = "head"; // 0x899 PushS
	LookAsyncCamera(var_84_string); // 0x89a Func
}


func_1630(var_2_object)
{
	var_17_int = 1; // 0x65e PushI
	KillTimer(var_17_int); // 0x65f Func
	var_18_object = var_2_object; // 0x661 PushT
	if(var_18_object == 0) goto Label_1639; // 0x662 JumpB
	var_2_object = 0; // 0x663 TMovB
	var_19_string = "head"; // 0x664 PushS
	UnlookAsync(var_19_string); // 0x665 Func
	
Label_1639:
	func_1796(var_16_object); // 0x668 NEW_2
	return 0; // 0x66a Return
}


func_1127(var_1_object, var_2_object, var_4_bool)
{
	var_101_bool = 0; var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_bool = 0; var_105_bool = 0; var_106_cvector = CVector(0,0,0); // 0x467 PushV
	var_1_object = 0; // 0x468 TMovI
	
Label_1129:
	var_107_string = "all"; // 0x469 PushS
	var_108_string = "attack_begin"; // 0x46a PushS
	var_109_int = 1; // 0x46b PushI
	var_110_int = var_1_object + var_109_int; // 0x46c Add
	var_111_int = var_108_string + var_110_int; // 0x46d Add
	HasAnimation(var_104_bool, var_107_string, var_111_int); // 0x46e Func
	var_112_bool = var_104_bool == 0; // 0x470 Not
	if(var_112_bool == 0) goto Label_1139; // 0x471 JumpB
	goto Label_1142; // 0x472 Jump
	
Label_1142:
	var_2_object = 0; // 0x476 TMovI
	
Label_1143:
	var_113_string = "attack"; // 0x477 PushS
	var_114_int = 1; // 0x478 PushI
	var_115_int = var_2_object + var_114_int; // 0x479 Add
	var_116_int = var_113_string + var_115_int; // 0x47a Add
	IsExisting3DSound(var_105_bool, var_116_int); // 0x47b Func
	var_117_bool = var_105_bool == 0; // 0x47d Not
	if(var_117_bool == 0) goto Label_1152; // 0x47e JumpB
	goto Label_1155; // 0x47f Jump
	
Label_1155:
	var_118_string = "all"; // 0x483 PushS
	var_119_string = "bjump"; // 0x484 PushS
	GetAnimationOffset(var_106_cvector, var_118_string, var_119_string); // 0x485 Func
	var_120_float = GetByIndex(var_106_cvector, 2); // 0x487 PushE
	var_4_bool = -var_120_float; // 0x488 Neg2
	return 6; // 0x489 Return
	
Label_1152:
	var_121_int = 1; // 0x480 PushI
	var_2_object = var_2_object + var_121_int; // 0x481 Add2
	goto Label_1143; // 0x482 Jump
	
Label_1139:
	var_122_int = 1; // 0x473 PushI
	var_1_object = var_1_object + var_122_int; // 0x474 Add2
	goto Label_1129; // 0x475 Jump
}


func_616()
{
	var_131_bool = 0; // 0x268 PushV
	func_2136(var_131_bool); // 0x269 NEW_2
	var_134_bool = var_131_bool == 0; // 0x26b Not
	if(var_134_bool == 0) goto Label_624; // 0x26c JumpB
	func_2911(); // 0x26e NEW_2
	
Label_624:
	return 0; // 0x270 Return
}


func_2671(var_20_bool, var_21_object, var_22_string)
{
	var_23_string = "unholster"; // 0xa70 PushS
	var_24_bool = var_22_string == var_23_string; // 0xa71 Eq
	if(var_24_bool == 0) goto Label_2682; // 0xa72 JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0xa73 PushV
	var_26_object = var_21_object; // 0xa74 Mov
	func_2865(var_26_object); // 0xa75 NEW_2
	var_20_bool = var_25_bool; // 0xa76 Mov
	return 0; // 0xa78 Return
	
Label_2682:
	var_27_string = "player_shot"; // 0xa7a PushS
	var_28_bool = var_22_string == var_27_string; // 0xa7b Eq
	if(var_28_bool == 0) goto Label_2692; // 0xa7c JumpB
	var_29_bool = 0; var_30_object = Obj(); // 0xa7d PushV
	var_30_object = var_21_object; // 0xa7e Mov
	func_2870(var_30_object); // 0xa7f NEW_2
	var_20_bool = var_29_bool; // 0xa80 Mov
	return 0; // 0xa82 Return
	
Label_2692:
	var_31_string = "battle"; // 0xa84 PushS
	var_32_bool = var_22_string == var_31_string; // 0xa85 Eq
	if(var_32_bool == 0) goto Label_2701; // 0xa86 JumpB
	var_33_bool = 0; var_34_object = Obj(); // 0xa87 PushV
	var_34_object = var_21_object; // 0xa88 Mov
	func_2875(var_34_object); // 0xa89 NEW_2
	var_20_bool = var_33_bool; // 0xa8a Mov
	return 0; // 0xa8c Return
	
Label_2701:
	var_20_bool = 0; // 0xa8d MovB
	return 0; // 0xa8e Return
}


func_132(var_2_object, var_106_string)
{
	var_107_bool = 0; // 0x85 PushV
	func_2893(var_107_bool); // 0x86 NEW_2
	var_108_bool = var_107_bool == 0; // 0x88 Not
	if(var_108_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_109_bool = var_106_string == var_2_object; // 0x8b Eq
	if(var_109_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_110_string = ""; var_111_bool = 0; // 0x8e PushV
	var_110_string = var_106_string; // 0x8f Mov
	var_112_string = ""; // 0x90 PushS
	var_113_bool = var_106_string == var_112_string; // 0x91 Eq
	if(var_113_bool == 0) goto Label_149; // 0x92 JumpB
	var_111_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_2244(var_110_string, var_111_bool); // 0x96 NEW_2
	var_2_object = var_106_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_111_bool = 1; // 0x95 MovB
}


func_1672(var_0_object, var_1_object, var_172_bool, var_173_object, var_174_float, var_175_float, var_176_bool, var_177_bool)
{
	var_178_bool = 0; var_179_bool = 0; var_180_object = Obj(); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_float = 0; var_185_object = Obj(); var_186_bool = 0; var_187_bool = 0; var_188_object = Obj(); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_float = 0; var_193_object = Obj(); // 0x688 PushV
	var_0_object = 0; // 0x689 TMovB
	var_1_object = var_173_object; // 0x68a TMov
	var_187_bool = var_177_bool; // 0x68b Mov
	
Label_1676:
	var_194_bool = 0; var_195_object = Obj(); // 0x68c PushV
	var_195_object = var_173_object; // 0x68d Mov
	func_1812(var_194_bool, var_195_object); // 0x68e NEW_2
	var_198_bool = var_194_bool == 0; // 0x690 Not
	if(var_198_bool == 0) goto Label_1684; // 0x691 JumpB
	var_172_bool = 0; // 0x692 MovB
	return 16; // 0x693 Return
	
Label_1684:
	GetPosition(var_189_cvector); // 0x694 ObjFunc
	GetPosition(var_190_cvector); // 0x696 Func
	var_191_cvector = var_189_cvector - var_190_cvector; // 0x698 Sub2
	var_192_float = var_191_cvector | var_191_cvector; // 0x699 Or2
	var_199_bool = 0; // 0x69a PushV
	var_199_bool = 0; // 0x69b MovB
	var_200_int = 0; // 0x69c PushI
	var_201_bool = var_175_float > var_200_int; // 0x69d GT
	if(var_201_bool == 0) goto Label_1699; // 0x69e JumpB
	var_202_float = var_175_float * var_175_float; // 0x69f Mult
	var_203_bool = var_192_float > var_202_float; // 0x6a0 GT
	if(var_203_bool == 0) goto Label_1699; // 0x6a1 JumpB
	var_199_bool = 1; // 0x6a2 MovB
	
Label_1699:
	if(var_199_bool == 0) goto Label_1704; // 0x6a3 JumpB
	Stop(); // 0x6a4 Func
	var_172_bool = 0; // 0x6a6 MovB
	return 16; // 0x6a7 Return
	
Label_1704:
	var_204_float = var_174_float * var_174_float; // 0x6a8 Mult
	var_205_bool = var_192_float > var_204_float; // 0x6a9 GT
	if(var_205_bool == 0) goto Label_1766; // 0x6aa JumpB
	GetPFPosition(var_189_cvector); // 0x6ab ObjFunc
	FindPathTo(var_193_object, var_189_cvector); // 0x6ad Func
	var_206_bool = var_193_object != 0; // 0x6af NullNeq
	if(var_206_bool == 0) goto Label_1715; // 0x6b0 JumpB
	var_188_object = var_193_object; // 0x6b1 Mov
	var_193_object = 0; // 0x6b2 SetNull
	
Label_1715:
	var_207_bool = var_188_object != 0; // 0x6b3 NullNeq
	if(var_207_bool == 0) goto Label_1748; // 0x6b4 JumpB
	var_208_bool = var_187_bool; // 0x6b5 Push
	if(var_208_bool == 0) goto Label_1725; // 0x6b6 JumpB
	var_187_bool = 0; // 0x6b7 MovB
	RotatePath(var_188_object, var_186_bool); // 0x6b8 Func
	var_209_bool = var_186_bool == 0; // 0x6ba Not
	if(var_209_bool == 0) goto Label_1725; // 0x6bb JumpB
	goto Label_1772; // 0x6bc Jump
	
Label_1772:
	var_172_bool = !var_0_object; // 0x6ec Not2
	return 16; // 0x6ed Return
	
Label_1725:
	var_210_int = 0; // 0x6bd PushI
	var_211_float = 0.3; // 0x6be PushF
	SetTimer(var_210_int, var_211_float); // 0x6bf Func
	var_212_string = ""; // 0x6c1 PushV
	func_1819(var_212_string); // 0x6c2 NEW_2
	var_213_string = ""; // 0x6c4 PushV
	func_1821(var_213_string); // 0x6c5 NEW_2
	FollowPath(var_188_object, var_176_bool, var_186_bool, var_212_string, var_213_string); // 0x6c7 Func
	var_214_bool = var_186_bool == 0; // 0x6c9 Not
	if(var_214_bool == 0) goto Label_1746; // 0x6ca JumpB
	var_215_object = var_0_object; // 0x6cb PushT
	if(var_215_object == 0) goto Label_1744; // 0x6cc JumpB
	var_188_object = 0; // 0x6cd SetNull
	goto Label_1772; // 0x6ce Jump
	
Label_1744:
	goto Label_1771; // 0x6d0 Jump
	
Label_1771:
	goto Label_1676; // 0x6eb Jump
	
Label_1746:
	var_188_object = 0; // 0x6d2 SetNull
	goto Label_1764; // 0x6d3 Jump
	
Label_1764:
	var_193_object = 0; // 0x6e4 SetNull
	goto Label_1770; // 0x6e5 Jump
	
Label_1770:
	var_188_object = 0; // 0x6ea SetNull
	
Label_1748:
	var_216_int = 0; // 0x6d4 PushI
	KillTimer(var_216_int); // 0x6d5 Func
	var_217_float = 0.5; // 0x6d7 PushF
	Sleep(var_217_float, var_186_bool); // 0x6d8 Func
	var_218_bool = var_186_bool == 0; // 0x6da Not
	if(var_218_bool == 0) goto Label_1760; // 0x6db JumpB
	var_219_object = var_0_object; // 0x6dc PushT
	if(var_219_object == 0) goto Label_1760; // 0x6dd JumpB
	var_188_object = 0; // 0x6de SetNull
	goto Label_1772; // 0x6df Jump
	
Label_1760:
	var_220_int = 0; // 0x6e0 PushI
	var_221_float = 0.3; // 0x6e1 PushF
	SetTimer(var_220_int, var_221_float); // 0x6e2 Func
	
Label_1766:
	var_222_int = 0; // 0x6e6 PushI
	KillTimer(var_222_int); // 0x6e7 Func
	goto Label_1772; // 0x6e9 Jump
}


func_1162(var_0_object, var_398_float, var_399_int)
{
	var_400_object = Obj(); var_401_float = 0; var_402_float = 0; var_403_object = Obj(); var_404_float = 0; var_405_float = 0; // 0x48a PushV
	var_406_float = 0.9; // 0x48b PushF
	var_407_float = var_398_float * var_406_float; // 0x48c Mult
	GetVictim(var_407_float, var_403_object); // 0x48d Func
	ReportAttack(var_0_object); // 0x48f Func
	var_408_bool = var_403_object == var_0_object; // 0x491 Eq
	if(var_408_bool == 0) goto Label_1199; // 0x492 JumpB
	var_409_float = 0; var_410_object = Obj(); var_411_int = 0; // 0x493 PushV
	var_410_object = var_403_object; // 0x494 Mov
	var_411_int = var_399_int; // 0x495 Mov
	func_892(var_411_int); // 0x496 NEW_2
	var_404_float = var_409_float; // 0x497 Mov
	var_412_float = 0; var_413_object = Obj(); var_414_float = 0; var_415_int = 0; // 0x499 PushV
	var_413_object = var_403_object; // 0x49a Mov
	var_414_float = var_404_float; // 0x49b Mov
	var_416_int = 0; var_417_object = Obj(); var_418_int = 0; // 0x49c PushV
	var_417_object = var_403_object; // 0x49d Mov
	var_418_int = var_399_int; // 0x49e Mov
	func_895(var_418_int); // 0x49f NEW_2
	var_415_int = var_416_int; // 0x4a0 Mov
	func_1861(var_412_float, var_413_object, var_414_float, var_415_int); // 0x4a2 NEW_2
	var_405_float = var_412_float; // 0x4a3 Mov
	var_477_int = 0; // 0x4a5 PushV
	func_1545(var_477_int); // 0x4a6 NEW_2
	ReportHit(var_0_object, var_477_int, var_405_float, var_404_float); // 0x4a8 Func
	var_478_object = Obj(); var_479_float = 0; // 0x4aa PushV
	var_478_object = var_403_object; // 0x4ab Mov
	var_479_float = var_405_float; // 0x4ac Mov
	func_1552(); // 0x4ad NEW_2
	
Label_1199:
	return 6; // 0x4af Return
}


func_2703(var_35_object, var_36_string)
{
	var_37_string = "unholster"; // 0xa90 PushS
	var_38_bool = var_36_string == var_37_string; // 0xa91 Eq
	if(var_38_bool == 0) goto Label_2712; // 0xa92 JumpB
	var_39_object = Obj(); // 0xa93 PushV
	var_39_object = var_35_object; // 0xa94 Mov
	func_2868(); // 0xa95 NEW_2
	goto Label_2727; // 0xa97 Jump
	
Label_2727:
	return 0; // 0xaa7 Return
	
Label_2712:
	var_40_string = "player_shot"; // 0xa98 PushS
	var_41_bool = var_36_string == var_40_string; // 0xa99 Eq
	if(var_41_bool == 0) goto Label_2720; // 0xa9a JumpB
	var_42_object = Obj(); // 0xa9b PushV
	var_42_object = var_35_object; // 0xa9c Mov
	func_2873(); // 0xa9d NEW_2
	goto Label_2727; // 0xa9f Jump
	
Label_2720:
	var_43_string = "battle"; // 0xaa0 PushS
	var_44_bool = var_36_string == var_43_string; // 0xaa1 Eq
	if(var_44_bool == 0) goto Label_2727; // 0xaa2 JumpB
	var_45_object = Obj(); // 0xaa3 PushV
	var_45_object = var_35_object; // 0xaa4 Mov
	func_2878(); // 0xaa5 NEW_2
}


func_2210()
{
	var_150_bool = 0; var_151_bool = 0; // 0x8a2 PushV
	var_152_bool = 1; // 0x8a3 PushB
	CameraSwitchToNormal(var_152_bool); // 0x8a4 Func
	var_153_bool = 0; // 0x8a6 PushV
	func_2893(var_153_bool); // 0x8a7 NEW_2
	if(var_153_bool == 0) goto Label_2219; // 0x8a9 JumpB
	goto Label_2227; // 0x8aa Jump
	
Label_2227:
	return 2; // 0x8b3 Return
	
Label_2219:
	var_154_string = "head"; // 0x8ab PushS
	HasAnimationTrack(var_151_bool, var_154_string); // 0x8ac Func
	var_155_bool = var_151_bool; // 0x8ae Push
	if(var_155_bool == 0) goto Label_2227; // 0x8af JumpB
	var_156_string = "head"; // 0x8b0 PushS
	UnlookAsync(var_156_string); // 0x8b1 Func
}


func_2728(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0xaa8 PushV
	var_21_bool = 0; // 0xaa9 PushV
	var_21_bool = 0; // 0xaaa MovB
	var_22_bool = 0; var_23_object = Obj(); // 0xaab PushV
	var_23_object = var_18_object; // 0xaac Mov
	func_2865(var_23_object); // 0xaad NEW_2
	if(var_22_bool == 0) goto Label_2742; // 0xaaf JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xab0 PushV
	var_25_object = var_18_object; // 0xab1 Mov
	func_1844(var_24_bool, var_25_object); // 0xab2 NEW_2
	if(var_24_bool == 0) goto Label_2742; // 0xab4 JumpB
	var_21_bool = 1; // 0xab5 MovB
	
Label_2742:
	if(var_21_bool == 0) goto Label_2749; // 0xab6 JumpB
	IsWeaponHolstered(var_20_bool); // 0xab7 ObjFunc
	var_28_bool = var_20_bool == 0; // 0xab9 Not
	if(var_28_bool == 0) goto Label_2749; // 0xaba JumpB
	var_17_bool = 1; // 0xabb MovB
	return 2; // 0xabc Return
	
Label_2749:
	var_17_bool = 0; // 0xabd MovB
	return 2; // 0xabe Return
}


func_1201(var_0_object, var_361_bool, var_362_float)
{
	var_363_int = 0; var_364_bool = 0; var_365_int = 0; var_366_string = ""; var_367_int = 0; var_368_bool = 0; var_369_int = 0; var_370_string = ""; // 0x4b1 PushV
	func_1540(var_370_string); // 0x4b3 NEW_2
	irand(var_367_int, var_370_string); // 0x4b5 Func
	var_371_int = 1; // 0x4b7 PushI
	var_367_int = var_367_int + var_371_int; // 0x4b8 Add2
	Face(var_0_object); // 0x4b9 Func
	var_372_bool = 1; // 0x4bb PushB
	SetAttackState(var_372_bool); // 0x4bc Func
	func_2387(); // 0x4bf NEW_2
	var_377_string = "all"; // 0x4c1 PushS
	var_378_string = "attack_begin"; // 0x4c2 PushS
	var_379_int = var_378_string + var_367_int; // 0x4c3 Add
	PlayAnimation(var_377_string, var_379_int); // 0x4c4 Func
	WaitForAnimEnd(); // 0x4c6 Func
	func_1508(var_369_int, var_370_string); // 0x4c9 NEW_2
	var_395_bool = 0; var_396_object = Obj(); // 0x4cb PushV
	var_396_object = var_0_object; // 0x4cc MovT
	func_1975(var_395_bool, var_396_object); // 0x4cd NEW_2
	var_397_bool = var_395_bool == 0; // 0x4cf Not
	if(var_397_bool == 0) goto Label_1237; // 0x4d0 JumpB
	StopAsync(); // 0x4d1 Func
	var_361_bool = 0; // 0x4d3 MovB
	return 8; // 0x4d4 Return
	
Label_1237:
	var_398_float = 0; var_399_int = 0; // 0x4d5 PushV
	var_398_float = var_362_float; // 0x4d6 Mov
	var_399_int = var_367_int; // 0x4d7 Mov
	func_1162(var_370_string, var_398_float, var_399_int); // 0x4d8 NEW_2
	var_480_string = "all"; // 0x4da PushS
	var_481_string = "attack_middle"; // 0x4db PushS
	var_482_int = var_481_string + var_367_int; // 0x4dc Add
	HasAnimation(var_368_bool, var_480_string, var_482_int); // 0x4dd Func
	var_483_bool = var_368_bool; // 0x4df Push
	if(var_483_bool == 0) goto Label_1318; // 0x4e0 JumpB
	func_2387(); // 0x4e2 NEW_2
	var_484_string = "all"; // 0x4e4 PushS
	var_485_string = "attack_middle"; // 0x4e5 PushS
	var_486_int = var_485_string + var_367_int; // 0x4e6 Add
	PlayAnimation(var_484_string, var_486_int); // 0x4e7 Func
	WaitForAnimEnd(); // 0x4e9 Func
	func_1540(var_370_string); // 0x4ec NEW_2
	var_487_bool = 0; var_488_object = Obj(); // 0x4ee PushV
	var_488_object = var_0_object; // 0x4ef MovT
	func_1975(var_487_bool, var_488_object); // 0x4f0 NEW_2
	var_489_bool = var_487_bool == 0; // 0x4f2 Not
	if(var_489_bool == 0) goto Label_1272; // 0x4f3 JumpB
	StopAsync(); // 0x4f4 Func
	var_361_bool = 0; // 0x4f6 MovB
	return 8; // 0x4f7 Return
	
Label_1272:
	var_490_float = 0; var_491_int = 0; // 0x4f8 PushV
	var_490_float = var_362_float; // 0x4f9 Mov
	var_491_int = var_367_int; // 0x4fa Mov
	func_1162(var_370_string, var_490_float, var_491_int); // 0x4fb NEW_2
	var_369_int = 1; // 0x4fd MovI
	
Label_1278:
	var_492_string = "attack_middle"; // 0x4fe PushS
	var_493_int = var_492_string + var_367_int; // 0x4ff Add
	var_494_string = "_"; // 0x500 PushS
	var_495_int = var_493_int + var_494_string; // 0x501 Add
	var_370_string = var_495_int + var_369_int; // 0x502 Add2
	var_496_string = "all"; // 0x503 PushS
	HasAnimation(var_368_bool, var_496_string, var_370_string); // 0x504 Func
	var_497_bool = var_368_bool == 0; // 0x506 Not
	if(var_497_bool == 0) goto Label_1289; // 0x507 JumpB
	goto Label_1318; // 0x508 Jump
	
Label_1318:
	var_498_bool = 0; // 0x526 PushB
	SetAttackState(var_498_bool); // 0x527 Func
	var_499_string = "all"; // 0x529 PushS
	var_500_string = "attack_end"; // 0x52a PushS
	var_501_int = var_500_string + var_367_int; // 0x52b Add
	PlayAnimation(var_499_string, var_501_int); // 0x52c Func
	var_502_bool = 0; // 0x52e PushV
	func_1554(var_502_bool); // 0x52f NEW_2
	if(var_502_bool == 0) goto Label_1336; // 0x531 JumpB
	var_503_bool = 0; var_504_float = 0; // 0x532 PushV
	var_504_float = 0.75; // 0x533 MovF
	func_1338(var_503_bool, var_504_float); // 0x534 NEW_2
	StopAsync(); // 0x536 Func
	
Label_1336:
	var_361_bool = 1; // 0x538 MovB
	return 8; // 0x539 Return
	
Label_1289:
	func_2387(); // 0x50a NEW_2
	var_512_string = "all"; // 0x50c PushS
	PlayAnimation(var_512_string, var_370_string); // 0x50d Func
	WaitForAnimEnd(); // 0x50f Func
	func_1540(var_370_string); // 0x512 NEW_2
	var_513_bool = 0; var_514_object = Obj(); // 0x514 PushV
	var_514_object = var_0_object; // 0x515 MovT
	func_1975(var_513_bool, var_514_object); // 0x516 NEW_2
	var_515_bool = var_513_bool == 0; // 0x518 Not
	if(var_515_bool == 0) goto Label_1310; // 0x519 JumpB
	StopAsync(); // 0x51a Func
	var_361_bool = 0; // 0x51c MovB
	return 8; // 0x51d Return
	
Label_1310:
	var_516_float = 0; var_517_int = 0; // 0x51e PushV
	var_516_float = var_362_float; // 0x51f Mov
	var_517_int = var_367_int; // 0x520 Mov
	func_1162(var_370_string, var_516_float, var_517_int); // 0x521 NEW_2
	var_518_int = 1; // 0x523 PushI
	var_369_int = var_369_int + var_518_int; // 0x524 Add2
	goto Label_1278; // 0x525 Jump
}


func_2228(var_132_string)
{
	var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_float = 0; var_138_float = 0; // 0x8b4 PushV
	lshHasAnimation(var_136_bool, var_132_string); // 0x8b5 Func
	var_139_bool = var_136_bool; // 0x8b7 Push
	if(var_139_bool == 0) goto Label_2239; // 0x8b8 JumpB
	lshGetAnimTimes(var_132_string, var_137_float, var_138_float); // 0x8b9 Func
	var_140_bool = 0; // 0x8bb PushB
	lshPlayAnimation(var_137_float, var_138_float, var_140_bool); // 0x8bc Func
	goto Label_2243; // 0x8be Jump
	
Label_2243:
	return 6; // 0x8c3 Return
	
Label_2239:
	var_141_string = "Can't find lsh animation : "; // 0x8bf PushS
	var_142_int = var_141_string + var_132_string; // 0x8c0 Add
	Trace(var_142_int); // 0x8c1 Func
}


func_2751(var_29_object)
{
	var_30_object = Obj(); // 0xac0 PushV
	var_30_object = var_29_object; // 0xac1 Mov
	func_2868(); // 0xac2 NEW_2
	return 0; // 0xac4 Return
}


func_2244(var_110_string, var_111_bool)
{
	var_114_bool = 0; var_115_float = 0; var_116_float = 0; var_117_bool = 0; var_118_float = 0; var_119_float = 0; // 0x8c4 PushV
	lshHasAnimation(var_117_bool, var_110_string); // 0x8c5 Func
	var_120_bool = var_117_bool; // 0x8c7 Push
	if(var_120_bool == 0) goto Label_2254; // 0x8c8 JumpB
	lshGetAnimTimes(var_110_string, var_118_float, var_119_float); // 0x8c9 Func
	lshPlayAnimation(var_118_float, var_119_float, var_111_bool); // 0x8cb Func
	goto Label_2258; // 0x8cd Jump
	
Label_2258:
	return 6; // 0x8d2 Return
	
Label_2254:
	var_121_string = "Can't find lsh animation : "; // 0x8ce PushS
	var_122_int = var_121_string + var_110_string; // 0x8cf Add
	Trace(var_122_int); // 0x8d0 Func
}


func_2757(var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xac6 PushV
	var_21_object = var_19_object; // 0xac7 Mov
	func_1844(var_20_bool, var_21_object); // 0xac8 NEW_2
	if(var_20_bool == 0) goto Label_2769; // 0xaca JumpB
	var_24_object = Obj(); // 0xacb PushV
	func_2318(var_24_object); // 0xacc NEW_2
	var_27_float = -0.02; // 0xace PushF
	ReportReputationChange(var_19_object, var_24_object, var_27_float); // 0xacf Func
	
Label_2769:
	return 0; // 0xad1 Return
}


func_196(var_18_object)
{
	EventDisable(0); // 0xc5 EventDisable
	var_19_object = Obj(); // 0xc6 PushV
	var_19_object = var_18_object; // 0xc7 Mov
	func_229(var_19_object); // 0xc8 NEW_2
	var_99_object = Obj(); // 0xca PushV
	var_99_object = var_18_object; // 0xcb Mov
	func_2919(); // 0xcc NEW_2
	EventEnable(0); // 0xce EventEnable
	
Label_207:
	Hold(); // 0xcf Func
	goto Label_207; // 0xd1 Jump
}


func_2770(var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0xad2 PushV
	var_21_string = "heal"; // 0xad3 PushS
	var_22_bool = var_18_string == var_21_string; // 0xad4 Eq
	if(var_22_bool == 0) goto Label_2784; // 0xad5 JumpB
	var_23_string = "player"; // 0xad6 PushS
	FindActor(var_20_object, var_23_string); // 0xad7 Func
	var_24_bool = 0; var_25_object = Obj(); // 0xad9 PushV
	var_25_object = var_20_object; // 0xada Mov
	func_2880(var_25_object); // 0xadb NEW_2
	var_17_bool = var_24_bool; // 0xadc Mov
	return 2; // 0xade Return
	
Label_2784:
	var_17_bool = 0; // 0xae0 MovB
	return 2; // 0xae1 Return
}


func_2259(var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); // 0x8d3 PushV
	GetEyesHeight(var_23_float); // 0x8d4 ObjFunc
	var_24_cvector = CVector(0.0, 0.0, 0.0); // 0x8d6 MovV
	var_25_float = GetByIndex(var_24_cvector, 1); // 0x8d7 PushE
	var_25_float = var_23_float; // 0x8d8 Mov
	SetByIndex(var_24_cvector, 1) = var_25_float; // 0x8d9 PopE
	var_26_string = "head"; // 0x8da PushS
	LookAsync(var_20_object, var_26_string, var_24_cvector); // 0x8db Func
	return 4; // 0x8dd Return
}


func_2270()
{
	var_19_bool = 0; // 0x8de PushV
	func_2893(var_19_bool); // 0x8df NEW_2
	if(var_19_bool == 0) goto Label_2276; // 0x8e1 JumpB
	lshStopSpeech(); // 0x8e2 Func
	
Label_2276:
	return 0; // 0x8e4 Return
}


func_2786(var_26_string)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0xae2 PushV
	var_29_string = "heal"; // 0xae3 PushS
	var_30_bool = var_26_string == var_29_string; // 0xae4 Eq
	if(var_30_bool == 0) goto Label_2798; // 0xae5 JumpB
	var_31_string = "player"; // 0xae6 PushS
	FindActor(var_28_object, var_31_string); // 0xae7 Func
	var_32_object = Obj(); // 0xae9 PushV
	var_32_object = var_28_object; // 0xaea Mov
	func_2883(); // 0xaeb NEW_2
	var_28_object = 0; // 0xaed SetNull
	
Label_2798:
	return 2; // 0xaee Return
}


func_229(var_19_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_bool = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); // 0xe5 PushV
	var_40_bool = var_19_object == 0; // 0xe6 NullEq
	if(var_40_bool == 0) goto Label_237; // 0xe7 JumpB
	var_41_string = ""; // 0xe8 PushV
	var_41_string = "fdie"; // 0xe9 MovS
	func_320(var_41_string); // 0xea NEW_2
	goto Label_319; // 0xec Jump
	
Label_319:
	return 20; // 0x13f Return
	
Label_237:
	GetPosition(var_30_cvector); // 0xed ObjFunc
	GetPosition(var_31_cvector); // 0xef Func
	GetDirection(var_32_cvector); // 0xf1 Func
	var_33_cvector = var_31_cvector - var_30_cvector; // 0xf3 Sub2
	var_73_float = GetByIndex(var_33_cvector, 0); // 0xf4 PushE
	var_74_float = GetByIndex(var_32_cvector, 0); // 0xf5 PushE
	var_75_float = var_73_float * var_74_float; // 0xf6 Mult
	var_76_float = GetByIndex(var_33_cvector, 2); // 0xf7 PushE
	var_77_float = GetByIndex(var_32_cvector, 2); // 0xf8 PushE
	var_78_float = var_76_float * var_77_float; // 0xf9 Mult
	var_79_int = var_75_float + var_78_float; // 0xfa Add
	var_80_int = 0; // 0xfb PushI
	var_81_bool = var_79_int >= var_80_int; // 0xfc GE
	if(var_81_bool == 0) goto Label_256; // 0xfd JumpB
	var_34_string = "fdie"; // 0xfe MovS
	goto Label_257; // 0xff Jump
	
Label_257:
	RemoveRTEnvelope(); // 0x101 Func
	SetDeathState(); // 0x103 Func
	Stop(); // 0x105 Func
	StopAsync(); // 0x107 Func
	var_35_object = var_19_object; // 0x109 Mov
	var_82_string = "GetScriptProperty"; // 0x10a PushS
	var_83_int = 2; // 0x10b PushI
	var_84_bool = IsFuncExist(var_19_object, var_82_string, var_83_int); // 0x10c FuncExist
	if(var_84_bool == 0) goto Label_281; // 0x10d JumpB
	var_85_string = "Owner"; // 0x10e PushS
	HasScriptProperty(var_36_bool, var_85_string); // 0x10f ObjFunc
	var_86_bool = var_36_bool; // 0x111 Push
	if(var_86_bool == 0) goto Label_281; // 0x112 JumpB
	var_87_string = "Owner"; // 0x113 PushS
	GetScriptProperty(var_35_object, var_87_string); // 0x114 ObjFunc
	var_88_bool = var_35_object == 0; // 0x116 NullEq
	if(var_88_bool == 0) goto Label_281; // 0x117 JumpB
	var_35_object = var_19_object; // 0x118 Mov
	
Label_281:
	var_89_string = "@GetEyesHeight"; // 0x119 PushS
	var_90_int = 1; // 0x11a PushI
	var_91_bool = IsFuncExist(var_35_object, var_89_string, var_90_int); // 0x11b FuncExist
	if(var_91_bool == 0) goto Label_296; // 0x11c JumpB
	GetEyesHeight(var_38_float); // 0x11d ObjFunc
	var_39_cvector = CVector(0.0, 0.0, 0.0); // 0x11f MovV
	var_92_float = GetByIndex(var_39_cvector, 1); // 0x120 PushE
	var_92_float = var_38_float; // 0x121 Mov
	SetByIndex(var_39_cvector, 1) = var_92_float; // 0x122 PopE
	var_93_string = "head"; // 0x123 PushS
	LookAsync(var_19_object, var_93_string, var_39_cvector); // 0x124 Func
	var_37_bool = 1; // 0x126 MovB
	goto Label_297; // 0x127 Jump
	
Label_297:
	var_94_string = ""; // 0x129 PushV
	var_94_string = var_34_string; // 0x12a Mov
	func_2277(var_94_string); // 0x12b NEW_2
	var_95_string = "all"; // 0x12d PushS
	PlayAnimation(var_95_string, var_34_string); // 0x12e Func
	WaitForAnimEnd(); // 0x130 Func
	var_96_bool = var_37_bool; // 0x132 Push
	if(var_96_bool == 0) goto Label_313; // 0x133 JumpB
	StopAsync(); // 0x134 Func
	var_97_string = "head"; // 0x136 PushS
	UnlookAsync(var_97_string); // 0x137 Func
	
Label_313:
	var_98_string = "all"; // 0x139 PushS
	LockAnimationEnd(var_98_string, var_34_string); // 0x13a Func
	RemoveEnvelope(); // 0x13c Func
	var_35_object = 0; // 0x13e SetNull
	
Label_296:
	var_37_bool = 0; // 0x128 MovB
	
Label_256:
	var_34_string = "bdie"; // 0x100 MovS
}


func_2277(var_42_string)
{
	var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x8e5 PushV
	IsExisting3DSound(var_51_bool, var_42_string); // 0x8e6 Func
	var_59_bool = var_51_bool == 0; // 0x8e8 Not
	if(var_59_bool == 0) goto Label_2302; // 0x8e9 JumpB
	var_52_int = 0; // 0x8ea MovI
	
Label_2283:
	var_60_int = 1; // 0x8eb PushI
	var_61_int = var_52_int + var_60_int; // 0x8ec Add
	var_62_int = var_42_string + var_61_int; // 0x8ed Add
	IsExisting3DSound(var_53_bool, var_62_int); // 0x8ee Func
	var_63_bool = var_53_bool == 0; // 0x8f0 Not
	if(var_63_bool == 0) goto Label_2291; // 0x8f1 JumpB
	goto Label_2294; // 0x8f2 Jump
	
Label_2294:
	var_64_bool = var_52_int == 0; // 0x8f6 Not
	if(var_64_bool == 0) goto Label_2297; // 0x8f7 JumpB
	return 16; // 0x8f8 Return
	
Label_2297:
	irand(var_54_int, var_52_int); // 0x8f9 Func
	var_65_int = 1; // 0x8fb PushI
	var_66_int = var_54_int + var_65_int; // 0x8fc Add
	var_42_string = var_42_string + var_66_int; // 0x8fd Add2
	
Label_2302:
	Is3DSoundLoaded(var_55_bool, var_42_string); // 0x8fe Func
	var_67_bool = var_55_bool; // 0x900 Push
	if(var_67_bool == 0) goto Label_2317; // 0x901 JumpB
	GetEyesHeight(var_56_float); // 0x902 Func
	GetDirection(var_57_cvector); // 0x904 Func
	var_68_int = 50; // 0x906 PushI
	var_58_cvector = var_57_cvector * var_68_int; // 0x907 Mult2
	var_69_float = GetByIndex(var_58_cvector, 1); // 0x908 PushE
	var_69_float = var_69_float + var_56_float; // 0x909 Add2
	SetByIndex(var_58_cvector, 1) = var_69_float; // 0x90a PopE
	PlayGlobalSound(var_42_string, var_58_cvector); // 0x90b Func
	
Label_2317:
	return 16; // 0x90d Return
	
Label_2291:
	var_70_int = 1; // 0x8f3 PushI
	var_52_int = var_52_int + var_70_int; // 0x8f4 Add2
	goto Label_2283; // 0x8f5 Jump
}


func_1774(var_0_object, var_1_object, var_24_int)
{
	var_25_int = 0; // 0x6ef PushI
	var_26_bool = var_24_int != var_25_int; // 0x6f0 Neq
	if(var_26_bool == 0) goto Label_1779; // 0x6f1 JumpB
	return 0; // 0x6f2 Return
	
Label_1779:
	var_27_bool = 0; var_28_object = Obj(); // 0x6f3 PushV
	var_28_object = var_1_object; // 0x6f4 MovT
	func_1812(var_27_bool, var_28_object); // 0x6f5 NEW_2
	var_63_bool = var_27_bool == 0; // 0x6f7 Not
	if(var_63_bool == 0) goto Label_1786; // 0x6f8 JumpB
	var_0_object = 1; // 0x6f9 TMovB
	
Label_1786:
	var_64_int = 0; // 0x6fa PushI
	KillTimer(var_64_int); // 0x6fb Func
	Stop(); // 0x6fd Func
	return 0; // 0x6ff Return
}


func_2799(var_187_string, var_188_int)
{
	var_189_string = ""; var_190_string = ""; // 0xaef PushV
	var_190_string = "idle"; // 0xaf0 MovS
	var_191_int = var_188_int; // 0xaf1 Push
	if(var_191_int == 0) goto Label_2804; // 0xaf2 JumpB
	var_190_string = var_190_string + var_188_int; // 0xaf3 Add2
	
Label_2804:
	var_187_string = var_190_string; // 0xaf4 Mov
	return 2; // 0xaf5 Return
}


func_2806(var_181_int)
{
	var_182_int = 0; var_183_bool = 0; var_184_int = 0; var_185_bool = 0; // 0xaf6 PushV
	var_184_int = 0; // 0xaf7 MovI
	
Label_2808:
	var_186_string = "all"; // 0xaf8 PushS
	var_187_string = ""; var_188_int = 0; // 0xaf9 PushV
	var_188_int = var_184_int; // 0xafa Mov
	func_2799(var_187_string, var_188_int); // 0xafb NEW_2
	HasAnimation(var_185_bool, var_186_string, var_187_string); // 0xafd Func
	var_192_bool = var_185_bool == 0; // 0xaff Not
	if(var_192_bool == 0) goto Label_2818; // 0xb00 JumpB
	goto Label_2821; // 0xb01 Jump
	
Label_2821:
	var_181_int = var_184_int; // 0xb05 Mov
	return 4; // 0xb06 Return
	
Label_2818:
	var_193_int = 1; // 0xb02 PushI
	var_184_int = var_184_int + var_193_int; // 0xb03 Add2
	goto Label_2808; // 0xb04 Jump
}


func_1796(var_0_object)
{
	var_0_object = 1; // 0x704 TMovB
	var_20_int = 0; // 0x705 PushI
	KillTimer(var_20_int); // 0x706 Func
	Stop(); // 0x708 Func
	return 0; // 0x70a Return
}


func_2823(var_28_int, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj(); // 0xb08 PushV
	var_31_object = var_29_object; // 0xb09 Mov
	func_1975(var_30_bool, var_31_object); // 0xb0a NEW_2
	if(var_30_bool == 0) goto Label_2831; // 0xb0c JumpB
	var_28_int = 2; // 0xb0d MovI
	goto Label_2832; // 0xb0e Jump
	
Label_2832:
	return 0; // 0xb10 Return
	
Label_2831:
	var_28_int = 0; // 0xb0f MovI
}


func_2318(var_135_object)
{
	var_136_object = Obj(); var_137_object = Obj(); // 0x90e PushV
	self(var_137_object); // 0x90f Func
	var_135_object = var_137_object; // 0x911 Mov
	return 2; // 0x912 Return
}


func_2833(var_68_object)
{
	var_69_object = Obj(); // 0xb12 PushV
	var_69_object = var_68_object; // 0xb13 Mov
	TaskCall(5); // 0xb14 TaskCall
	func_884(var_69_object); // 0xb15 NEW_2
	TaskReturn(); // 0xb16 TaskReturn
	return 0; // 0xb18 Return
}


func_1812(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_object = Obj(); // 0x715 PushV
	var_30_object = var_28_object; // 0x716 Mov
	func_1975(var_29_bool, var_30_object); // 0x717 NEW_2
	var_27_bool = var_29_bool; // 0x718 Mov
	return 0; // 0x71a Return
}


func_789(var_0_object, var_1_object)
{
	var_138_float = 0; var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_bool = 0; var_142_object = Obj(); var_143_bool = 0; var_144_float = 0; var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_bool = 0; var_148_object = Obj(); var_149_bool = 0; // 0x315 PushV
	var_0_object = 0; // 0x316 TMovB
	var_1_object = 0; // 0x317 TMovB
	var_150_float = 0.5; // 0x318 PushF
	rand(var_144_float, var_150_float); // 0x319 Func
	Sleep(var_144_float); // 0x31b Func
	
Label_797:
	var_151_bool = var_0_object == 0; // 0x31d Not
	if(var_151_bool == 0) goto Label_847; // 0x31e JumpB
	var_152_bool = var_1_object == 0; // 0x31f Not
	if(var_152_bool == 0) goto Label_816; // 0x320 JumpB
	
Label_801:
	GetPosition(var_146_cvector); // 0x321 Func
	var_153_float = 0; // 0x323 PushV
	func_848(var_153_float); // 0x324 NEW_2
	GetRandomPFPointInCircle(var_145_cvector, var_146_cvector, var_153_float, var_147_bool); // 0x326 Func
	var_156_bool = var_147_bool; // 0x328 Push
	if(var_156_bool == 0) goto Label_811; // 0x329 JumpB
	goto Label_815; // 0x32a Jump
	
Label_815:
	goto Label_817; // 0x32f Jump
	
Label_817:
	var_157_object = Obj(); var_158_cvector = CVector(0,0,0); // 0x331 PushV
	var_158_cvector = var_145_cvector; // 0x332 Mov
	func_878(var_157_object, var_158_cvector); // 0x333 NEW_2
	var_148_object = var_157_object; // 0x334 Mov
	var_161_bool = var_148_object != 0; // 0x336 NullNeq
	if(var_161_bool == 0) goto Label_842; // 0x337 JumpB
	RotatePath(var_148_object, var_149_bool); // 0x338 Func
	var_162_bool = var_149_bool; // 0x33a Push
	if(var_162_bool == 0) goto Label_841; // 0x33b JumpB
	var_163_bool = 0; // 0x33c PushV
	func_876(var_163_bool); // 0x33d NEW_2
	FollowPath(var_148_object, var_163_bool, var_149_bool); // 0x33f Func
	var_148_object = 0; // 0x341 SetNull
	var_164_bool = var_149_bool; // 0x342 Push
	if(var_164_bool == 0) goto Label_841; // 0x343 JumpB
	TaskCall(3); // 0x345 TaskCall
	func_516(); // 0x346 NEW_2
	TaskReturn(); // 0x347 TaskReturn
	
Label_841:
	goto Label_845; // 0x349 Jump
	
Label_845:
	var_148_object = 0; // 0x34d SetNull
	goto Label_797; // 0x34e Jump
	
Label_842:
	var_216_int = 1; // 0x34a PushI
	Sleep(var_216_int); // 0x34b Func
	
Label_811:
	var_217_int = 1; // 0x32b PushI
	Sleep(var_217_int); // 0x32c Func
	goto Label_801; // 0x32e Jump
	
Label_816:
	var_1_object = 0; // 0x330 TMovB
	
Label_847:
	return 12; // 0x34f Return
}


func_2324(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0x914 PushV
	var_58_int = var_49_cvector | var_49_cvector; // 0x915 Or
	var_57_float = sqrt(var_58_int); // 0x916 Sqrt2
	var_59_float = 0.0; // 0x917 PushF
	var_60_bool = var_57_float < var_59_float; // 0x918 LT
	if(var_60_bool == 0) goto Label_2332; // 0x919 JumpB
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0x91a MovV
	return 2; // 0x91b Return
	
Label_2332:
	var_48_cvector = var_49_cvector / var_49_cvector; // 0x91c Div2
	return 2; // 0x91d Return
}


func_2841(var_25_int)
{
	var_25_int = 0; // 0xb1a MovI
	return 0; // 0xb1b Return
}


func_1819(var_212_string)
{
	var_212_string = "walk"; // 0x71b MovS
	return 0; // 0x71c Return
}


func_2844()
{
	return 0; // 0xb1d Return
}


func_1821(var_213_string)
{
	var_213_string = "run"; // 0x71d MovS
	return 0; // 0x71e Return
}


func_2846(var_19_int)
{
	var_19_int = 0; // 0xb1f MovI
	return 0; // 0xb20 Return
}


func_1823(var_440_string, var_441_int)
{
	var_442_int = 2; // 0x720 PushI
	var_443_bool = var_441_int == var_442_int; // 0x721 Eq
	if(var_443_bool == 0) goto Label_1830; // 0x722 JumpB
	var_440_string = "fire"; // 0x723 MovS
	return 0; // 0x724 Return
	
Label_1830:
	var_444_int = 1; // 0x726 PushI
	var_445_bool = var_441_int == var_444_int; // 0x727 Eq
	if(var_445_bool == 0) goto Label_1835; // 0x728 JumpB
	var_440_string = "bullet"; // 0x729 MovS
	return 0; // 0x72a Return
	
Label_1835:
	var_440_string = "phys"; // 0x72b MovS
	return 0; // 0x72c Return
}


func_2334(var_450_float, var_451_float, var_452_float)
{
	var_455_bool = var_451_float < var_452_float; // 0x91f LT
	if(var_455_bool == 0) goto Label_2339; // 0x920 JumpB
	var_450_float = var_451_float; // 0x921 Mov
	goto Label_2340; // 0x922 Jump
	
Label_2340:
	return 0; // 0x924 Return
	
Label_2339:
	var_450_float = var_452_float; // 0x923 Mov
}


func_2849()
{
	return 0; // 0xb22 Return
}


func_2851(var_46_int)
{
	var_46_int = 0; // 0xb24 MovI
	return 0; // 0xb25 Return
}


func_2341(var_460_float, var_461_float, var_462_float, var_463_float)
{
	var_464_bool = var_461_float < var_462_float; // 0x926 LT
	if(var_464_bool == 0) goto Label_2346; // 0x927 JumpB
	var_460_float = var_462_float; // 0x928 Mov
	return 0; // 0x929 Return
	
Label_2346:
	var_465_bool = var_461_float > var_463_float; // 0x92a GT
	if(var_465_bool == 0) goto Label_2350; // 0x92b JumpB
	var_460_float = var_463_float; // 0x92c Mov
	return 0; // 0x92d Return
	
Label_2350:
	var_460_float = var_461_float; // 0x92e Mov
	return 0; // 0x92f Return
}


func_2854()
{
	return 0; // 0xb27 Return
}


func_2856(var_19_int)
{
	var_19_int = 2; // 0xb29 MovI
	return 0; // 0xb2a Return
}


func_2859(var_25_object)
{
	var_26_object = Obj(); // 0xb2c PushV
	var_26_object = var_25_object; // 0xb2d Mov
	func_2900(var_26_object); // 0xb2e NEW_2
	return 0; // 0xb30 Return
}


func_1837(var_50_cvector)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x72d PushV
	GetPosition(var_54_cvector); // 0x72e Func
	GetPosition(var_55_cvector); // 0x730 ObjFunc
	var_50_cvector = var_55_cvector - var_54_cvector; // 0x732 Sub2
	return 4; // 0x733 Return
}


func_2352(var_468_float)
{
	var_469_object = Obj(); var_470_object = Obj(); // 0x930 PushV
	CreateFloatVector(var_470_object); // 0x931 Func
	add(var_468_float); // 0x933 ObjFunc
	var_471_int = 0; // 0x935 PushI
	var_472_bool = var_468_float < var_471_int; // 0x936 LT
	if(var_472_bool == 0) goto Label_2364; // 0x937 JumpB
	var_473_float = 0.7; // 0x938 PushF
	var_474_int = 500; // 0x939 PushI
	RumblePlay(var_473_float, var_474_int); // 0x93a Func
	
Label_2364:
	var_475_int = 15; // 0x93c PushI
	SendWorldWndMessage(var_475_int, var_470_object); // 0x93d Func
	return 2; // 0x93f Return
}


func_2865(var_22_bool)
{
	var_22_bool = 0; // 0xb32 MovB
	return 0; // 0xb33 Return
}


func_1844(var_24_bool, var_25_object)
{
	var_26_bool = 0; var_27_bool = 0; // 0x734 PushV
	IsPlayerActor(var_25_object, var_27_bool); // 0x735 Func
	var_24_bool = var_27_bool; // 0x737 Mov
	return 2; // 0x738 Return
}


func_2868()
{
	return 0; // 0xb35 Return
}


func_2870(var_29_bool)
{
	var_29_bool = 0; // 0xb37 MovB
	return 0; // 0xb38 Return
}


func_1849(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x739 PushV
	var_56_string = "HasProperty"; // 0x73a PushS
	var_57_int = 2; // 0x73b PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x73c FuncExist
	var_59_bool = var_58_bool == 0; // 0x73d Not
	if(var_59_bool == 0) goto Label_1857; // 0x73e JumpB
	var_51_bool = 0; // 0x73f MovB
	return 2; // 0x740 Return
	
Label_1857:
	HasProperty(var_53_string, var_55_bool); // 0x741 ObjFunc
	var_51_bool = var_55_bool; // 0x743 Mov
	return 2; // 0x744 Return
}


func_1338(var_503_bool, var_504_float)
{
	var_505_float = 0; var_506_bool = 0; var_507_float = 0; var_508_bool = 0; // 0x53a PushV
	rand(var_507_float); // 0x53b Func
	var_509_bool = var_507_float < var_504_float; // 0x53d LT
	if(var_509_bool == 0) goto Label_1358; // 0x53e JumpB
	
Label_1343:
	IsAnimationPlaying(var_508_bool); // 0x53f Func
	var_510_bool = var_508_bool == 0; // 0x541 Not
	if(var_510_bool == 0) goto Label_1348; // 0x542 JumpB
	goto Label_1357; // 0x543 Jump
	
Label_1357:
	goto Label_1363; // 0x54d Jump
	
Label_1363:
	var_503_bool = 0; // 0x553 MovB
	return 4; // 0x554 Return
	
Label_1348:
	var_511_bool = 0; // 0x544 PushV
	func_1436(var_511_bool); // 0x545 NEW_2
	if(var_511_bool == 0) goto Label_1354; // 0x547 JumpB
	var_503_bool = 1; // 0x548 MovB
	return 4; // 0x549 Return
	
Label_1354:
	sync(); // 0x54a Func
	goto Label_1343; // 0x54c Jump
	
Label_1358:
	WaitForAnimEnd(); // 0x54e Func
	func_1540(var_508_bool); // 0x551 NEW_2
}


func_2875(var_33_bool)
{
	var_33_bool = 0; // 0xb3c MovB
	return 0; // 0xb3d Return
}


func_2873()
{
	return 0; // 0xb3a Return
}


func_2878()
{
	return 0; // 0xb3f Return
}


func_320(var_41_string)
{
	RemoveRTEnvelope(); // 0x141 Func
	SetDeathState(); // 0x143 Func
	Stop(); // 0x145 Func
	StopAsync(); // 0x147 Func
	StopSecondaryAnimation(); // 0x149 Func
	var_42_string = ""; // 0x14b PushV
	var_42_string = var_41_string; // 0x14c Mov
	func_2277(var_42_string); // 0x14d NEW_2
	var_71_string = "all"; // 0x14f PushS
	PlayAnimation(var_71_string, var_41_string); // 0x150 Func
	WaitForAnimEnd(); // 0x152 Func
	var_72_string = "all"; // 0x154 PushS
	LockAnimationEnd(var_72_string, var_41_string); // 0x155 Func
	RemoveEnvelope(); // 0x157 Func
	return 0; // 0x159 Return
}


func_2369(var_26_int)
{
	var_27_float = 0; var_28_float = 0; // 0x941 PushV
	GetGameTime(var_28_float); // 0x942 Func
	var_29_int = 1; // 0x944 PushI
	var_30_int = 0; // 0x945 PushV
	var_31_int = 24; // 0x946 PushI
	var_30_int = var_28_float / var_28_float; // 0x947 Div2
	var_26_int = var_29_int + var_30_int; // 0x948 Add2
	return 2; // 0x949 Return
}


func_2880(var_24_bool)
{
	var_24_bool = 0; // 0xb41 MovB
	return 0; // 0xb42 Return
}


func_2883()
{
	return 0; // 0xb44 Return
}


func_2885(var_87_int)
{
	var_87_int = 515568; // 0xb45 MovI
	return 0; // 0xb46 Return
}


func_1861(var_412_float, var_413_object, var_414_float, var_415_int)
{
	var_419_int = 0; var_420_string = ""; var_421_int = 0; var_422_float = 0; var_423_float = 0; var_424_float = 0; var_425_int = 0; var_426_string = ""; var_427_int = 0; var_428_float = 0; var_429_float = 0; var_430_float = 0; // 0x745 PushV
	var_431_bool = 0; var_432_object = Obj(); var_433_string = ""; // 0x746 PushV
	var_432_object = var_413_object; // 0x747 Mov
	var_433_string = "health"; // 0x748 MovS
	func_1849(var_431_bool, var_432_object, var_433_string); // 0x749 NEW_2
	var_434_bool = var_431_bool == 0; // 0x74b Not
	if(var_434_bool == 0) goto Label_1871; // 0x74c JumpB
	var_412_float = 0.0; // 0x74d MovF
	return 12; // 0x74e Return
	
Label_1871:
	var_435_bool = 0; var_436_object = Obj(); var_437_string = ""; // 0x74f PushV
	var_436_object = var_413_object; // 0x750 Mov
	var_437_string = "armor"; // 0x751 MovS
	func_1849(var_435_bool, var_436_object, var_437_string); // 0x752 NEW_2
	var_438_bool = var_435_bool == 0; // 0x754 Not
	if(var_438_bool == 0) goto Label_1880; // 0x755 JumpB
	var_425_int = 0; // 0x756 MovI
	goto Label_1883; // 0x757 Jump
	
Label_1883:
	var_439_string = "armor_"; // 0x75b PushS
	var_440_string = ""; var_441_int = 0; // 0x75c PushV
	var_441_int = var_415_int; // 0x75d Mov
	func_1823(var_440_string, var_441_int); // 0x75e NEW_2
	var_426_string = var_439_string + var_440_string; // 0x760 Add2
	var_446_bool = 0; var_447_object = Obj(); var_448_string = ""; // 0x761 PushV
	var_447_object = var_413_object; // 0x762 Mov
	var_448_string = var_426_string; // 0x763 Mov
	func_1849(var_446_bool, var_447_object, var_448_string); // 0x764 NEW_2
	var_449_bool = var_446_bool == 0; // 0x766 Not
	if(var_449_bool == 0) goto Label_1898; // 0x767 JumpB
	var_427_int = 0; // 0x768 MovI
	goto Label_1900; // 0x769 Jump
	
Label_1900:
	var_450_float = 0; var_451_float = 0; var_452_float = 0; // 0x76c PushV
	var_453_int = var_425_int + var_427_int; // 0x76d Add
	var_454_float = 100.0; // 0x76e PushF
	var_451_float = var_453_int / var_453_int; // 0x76f Div2
	var_452_float = 1; // 0x770 MovI
	func_2334(var_450_float, var_451_float, var_452_float); // 0x771 NEW_2
	var_428_float = var_450_float; // 0x772 Mov
	var_456_string = "health"; // 0x774 PushS
	GetProperty(var_456_string, var_429_float); // 0x775 ObjFunc
	var_457_int = 1; // 0x777 PushI
	var_458_int = var_457_int - var_428_float; // 0x778 Sub
	var_430_float = var_414_float * var_458_int; // 0x779 Mult2
	var_459_string = "health"; // 0x77a PushS
	var_460_float = 0; var_461_float = 0; var_462_float = 0; var_463_float = 0; // 0x77b PushV
	var_461_float = var_429_float - var_430_float; // 0x77c Sub2
	var_462_float = 0; // 0x77d MovI
	var_463_float = 1; // 0x77e MovI
	func_2341(var_460_float, var_461_float, var_462_float, var_463_float); // 0x77f NEW_2
	SetProperty(var_459_string, var_460_float); // 0x781 ObjFunc
	var_466_bool = 0; var_467_object = Obj(); // 0x783 PushV
	var_467_object = var_413_object; // 0x784 Mov
	func_1844(var_466_bool, var_467_object); // 0x785 NEW_2
	if(var_466_bool == 0) goto Label_1932; // 0x787 JumpB
	var_468_float = 0; // 0x788 PushV
	var_468_float = -var_430_float; // 0x789 Neg2
	func_2352(var_468_float); // 0x78a NEW_2
	
Label_1932:
	var_412_float = var_430_float; // 0x78c Mov
	return 12; // 0x78d Return
	
Label_1898:
	GetProperty(var_426_string, var_427_int); // 0x76a ObjFunc
	
Label_1880:
	var_476_string = "armor"; // 0x758 PushS
	GetProperty(var_476_string, var_425_int); // 0x759 ObjFunc
}


func_2887(var_86_int)
{
	var_86_int = 503353; // 0xb47 MovI
	return 0; // 0xb48 Return
}


func_2889(var_88_string)
{
	var_88_string = "ui/NPC_Citizen1.png"; // 0xb49 MovS
	return 0; // 0xb4a Return
}


func_2378(var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x94a PushV
	IsPlayerActor(var_19_object, var_21_bool); // 0x94b Func
	var_22_bool = var_21_bool; // 0x94d Push
	if(var_22_bool == 0) goto Label_2386; // 0x94e JumpB
	var_23_string = "attack"; // 0x94f PushS
	PlayGlobalMusic(var_23_string); // 0x950 Func
	
Label_2386:
	return 2; // 0x952 Return
}


func_2891(var_89_string)
{
	var_89_string = "ui/NPC_Citizen1_b.png"; // 0xb4b MovS
	return 0; // 0xb4c Return
}


func_2893(var_81_bool)
{
	var_81_bool = 0; // 0xb4d MovB
	return 0; // 0xb4e Return
}


func_2895()
{
	var_17_bool = 0; // 0xb4f PushV
	var_17_bool = 1; // 0xb50 MovB
	func_2446(var_17_bool); // 0xb51 NEW_2
	return 0; // 0xb53 Return
}


func_848(var_153_float)
{
	var_154_float = 0; var_155_float = 0; // 0x350 PushV
	GetCameraFarDistance(var_155_float); // 0x351 Func
	var_153_float = var_155_float; // 0x353 Mov
	return 2; // 0x354 Return
}


func_2387()
{
	var_373_object = Obj(); var_374_object = Obj(); // 0x953 PushV
	GetScene(var_374_object); // 0x954 Func
	var_375_string = "battle"; // 0x956 PushS
	var_376_object = Obj(); // 0x957 PushV
	func_2318(var_376_object); // 0x958 NEW_2
	BroadcastMessage(var_375_string, var_376_object, var_374_object); // 0x95a Func
	return 2; // 0x95c Return
}


func_2900(var_26_object)
{
	var_27_int = 0; var_28_object = Obj(); // 0xb55 PushV
	var_28_object = var_26_object; // 0xb56 Mov
	TaskCall(0); // 0xb57 TaskCall
	func_0(var_29_object, var_27_int, var_28_object); // 0xb58 NEW_2
	TaskReturn(); // 0xb59 TaskReturn
	return 0; // 0xb5b Return
}


func_1365(var_0_object, var_300_bool, var_301_float)
{
	var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_bool = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; // 0x555 PushV
	
Label_1366:
	IsAnimationPlaying(var_307_bool); // 0x556 Func
	var_312_bool = var_307_bool == 0; // 0x558 Not
	if(var_312_bool == 0) goto Label_1371; // 0x559 JumpB
	goto Label_1403; // 0x55a Jump
	
Label_1403:
	func_1540(var_311_float); // 0x57c NEW_2
	var_300_bool = 0; // 0x57e MovB
	return 10; // 0x57f Return
	
Label_1371:
	var_313_bool = 0; // 0x55b PushV
	func_1436(var_313_bool); // 0x55c NEW_2
	if(var_313_bool == 0) goto Label_1377; // 0x55e JumpB
	var_300_bool = 1; // 0x55f MovB
	return 10; // 0x560 Return
	
Label_1377:
	var_356_bool = 0; var_357_object = Obj(); // 0x561 PushV
	var_357_object = var_0_object; // 0x562 MovT
	func_1975(var_356_bool, var_357_object); // 0x563 NEW_2
	var_358_bool = var_356_bool == 0; // 0x565 Not
	if(var_358_bool == 0) goto Label_1385; // 0x566 JumpB
	var_300_bool = 0; // 0x567 MovB
	return 10; // 0x568 Return
	
Label_1385:
	GetPFPosition(var_308_cvector); // 0x569 TObjFunc
	GetPFPosition(var_309_cvector); // 0x56b Func
	var_310_cvector = var_308_cvector - var_309_cvector; // 0x56d Sub2
	var_311_float = var_310_cvector | var_310_cvector; // 0x56e Or2
	var_359_float = var_301_float * var_301_float; // 0x56f Mult
	var_360_bool = var_311_float < var_359_float; // 0x570 LT
	if(var_360_bool == 0) goto Label_1400; // 0x571 JumpB
	var_361_bool = 0; var_362_float = 0; // 0x572 PushV
	var_362_float = var_301_float; // 0x573 Mov
	func_1201(var_311_float, var_361_bool, var_362_float); // 0x574 NEW_2
	var_300_bool = 1; // 0x576 MovB
	return 10; // 0x577 Return
	
Label_1400:
	sync(); // 0x578 Func
	goto Label_1366; // 0x57a Jump
}


func_2908(var_21_bool)
{
	var_21_bool = 0; // 0xb5d MovB
	return 0; // 0xb5e Return
}


func_860(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x35c TMovB
	var_1_object = 0; // 0x35d TMovB
	Stop(); // 0x35e Func
	StopGroup0(); // 0x360 Func
	return 0; // 0x362 Return
}


func_2398(var_90_int)
{
	var_91_int = 0; var_92_int = 0; // 0x95e PushV
	var_93_string = "branch"; // 0x95f PushS
	GetVariable(var_93_string, var_92_int); // 0x960 Func
	var_94_int = 0; // 0x962 PushI
	var_95_bool = var_92_int == var_94_int; // 0x963 Eq
	if(var_95_bool == 0) goto Label_2408; // 0x964 JumpB
	var_90_int = 1; // 0x965 MovI
	return 2; // 0x966 Return
	
Label_2408:
	var_96_int = 1; // 0x968 PushI
	var_97_bool = var_92_int == var_96_int; // 0x969 Eq
	if(var_97_bool == 0) goto Label_2413; // 0x96a JumpB
	var_90_int = 2; // 0x96b MovI
	return 2; // 0x96c Return
	
Label_2413:
	var_90_int = 3; // 0x96d MovI
	return 2; // 0x96e Return
}


func_2911()
{
	var_135_object = Obj(); // 0xb5f PushV
	func_2318(var_135_object); // 0xb60 NEW_2
	RemoveActor(var_135_object); // 0xb62 Func
	Hold(); // 0xb64 Func
	return 0; // 0xb66 Return
}


func_2919()
{
	return 0; // 0xb68 Return
}


func_876(var_163_bool)
{
	var_163_bool = 0; // 0x36c MovB
	return 0; // 0x36d Return
}


func_878(var_157_object, var_158_cvector)
{
	var_159_object = Obj(); var_160_object = Obj(); // 0x36e PushV
	FindShiftedPathTo(var_160_object, var_158_cvector); // 0x36f Func
	var_157_object = var_160_object; // 0x371 Mov
	return 2; // 0x372 Return
}


func_2415(var_23_int, var_24_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; // 0x96f PushV
	var_38_bool = var_23_int > var_24_int; // 0x970 GT
	if(var_38_bool == 0) goto Label_2422; // 0x971 JumpB
	var_39_string = "GenerateMoney: iMin > iMax"; // 0x972 PushS
	Trace(var_39_string); // 0x973 Func
	return 4; // 0x975 Return
	
Label_2422:
	var_36_int = 0; // 0x976 MovI
	var_40_bool = var_23_int != var_24_int; // 0x977 Neq
	if(var_40_bool == 0) goto Label_2429; // 0x978 JumpB
	var_41_int = var_24_int - var_23_int; // 0x979 Sub
	irand(var_36_int, var_41_int); // 0x97a Func
	goto Label_2433; // 0x97c Jump
	
Label_2433:
	var_36_int = var_36_int + var_23_int; // 0x981 Add2
	var_42_int = 0; // 0x982 PushI
	var_43_bool = var_36_int == var_42_int; // 0x983 Eq
	if(var_43_bool == 0) goto Label_2438; // 0x984 JumpB
	return 4; // 0x985 Return
	
Label_2438:
	var_44_int = 0; var_45_string = ""; // 0x986 PushV
	var_45_string = "Money"; // 0x987 MovS
	func_2621(var_44_int, var_45_string); // 0x988 NEW_2
	var_48_int = 0; // 0x98a PushI
	AddItem(var_37_bool, var_44_int, var_48_int, var_36_int); // 0x98b Func
	return 4; // 0x98d Return
	
Label_2429:
	var_49_int = 0; // 0x97d PushI
	var_50_bool = var_23_int == var_49_int; // 0x97e Eq
	if(var_50_bool == 0) goto Label_2433; // 0x97f JumpB
	return 4; // 0x980 Return
}


func_884(var_69_object)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_float = 0; // 0x375 PushV
	var_76_object = var_69_object; // 0x376 Mov
	var_77_bool = 1; // 0x377 MovB
	var_78_float = 180.0; // 0x378 MovF
	func_898(var_72_int, var_73_bool, var_74_float, var_75_int, var_69_object, var_76_object, var_77_bool, var_78_float); // 0x379 NEW_2
	return 0; // 0x37b Return
}


func_892(var_409_float)
{
	var_409_float = 0.05; // 0x37d MovF
	return 0; // 0x37e Return
}


func_895(var_416_int)
{
	var_416_int = 0; // 0x380 MovI
	return 0; // 0x381 Return
}


func_1408(var_0_object, var_315_bool)
{
	var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0; var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_float = 0; var_325_float = 0; // 0x580 PushV
	var_326_bool = 0; var_327_object = Obj(); // 0x581 PushV
	var_327_object = var_0_object; // 0x582 MovT
	func_1975(var_326_bool, var_327_object); // 0x583 NEW_2
	var_328_bool = var_326_bool == 0; // 0x585 Not
	if(var_328_bool == 0) goto Label_1417; // 0x586 JumpB
	var_315_bool = 0; // 0x587 MovB
	return 10; // 0x588 Return
	
Label_1417:
	var_329_bool = 0; // 0x589 PushV
	func_1497(var_325_float, var_329_bool); // 0x58a NEW_2
	if(var_329_bool == 0) goto Label_1434; // 0x58c JumpB
	GetPFPosition(var_321_cvector); // 0x58d TObjFunc
	GetPFPosition(var_322_cvector); // 0x58f Func
	var_323_cvector = var_321_cvector - var_322_cvector; // 0x591 Sub2
	var_324_float = var_323_cvector | var_323_cvector; // 0x592 Or2
	GetAttackDistance(var_325_float); // 0x593 TObjFunc
	var_330_int = 50; // 0x595 PushI
	var_325_float = var_325_float + var_330_int; // 0x596 Add2
	var_331_float = var_325_float * var_325_float; // 0x597 Mult
	var_315_bool = var_324_float <= var_331_float; // 0x598 LE2
	return 10; // 0x599 Return
	
Label_1434:
	var_315_bool = 0; // 0x59a MovB
	return 10; // 0x59b Return
}


func_898(var_0_object, var_3_string, var_5_bool, var_76_object, var_77_bool, var_78_float, var_151_bool, var_241_bool)
{
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_float = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_bool = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_float = 0; // 0x382 PushV
	func_1127(var_98_cvector, var_99_bool, var_100_float); // 0x384 NEW_2
	var_5_bool = 0; // 0x386 TMovI
	var_123_string = "@GetAttackDistance"; // 0x387 PushS
	var_124_int = 1; // 0x388 PushI
	var_125_bool = IsFuncExist(var_76_object, var_123_string, var_124_int); // 0x389 FuncExist
	if(var_125_bool == 0) goto Label_912; // 0x38a JumpB
	GetAttackDistance(var_90_float); // 0x38b ObjFunc
	var_126_int = 50; // 0x38d PushI
	var_90_float = var_90_float + var_126_int; // 0x38e Add2
	goto Label_913; // 0x38f Jump
	
Label_913:
	var_127_int = 150; // 0x391 PushI
	var_128_bool = var_90_float >= var_127_int; // 0x392 GE
	if(var_128_bool == 0) goto Label_917; // 0x393 JumpB
	var_90_float = 150; // 0x394 MovI
	
Label_917:
	var_3_string = 0; // 0x395 TMovB
	var_0_object = var_76_object; // 0x396 TMov
	IsPlayerActor(var_0_object, var_93_bool); // 0x397 Func
	var_129_bool = var_93_bool; // 0x399 Push
	if(var_129_bool == 0) goto Label_931; // 0x39a JumpB
	var_130_string = "attack"; // 0x39b PushS
	PlayGlobalMusic(var_130_string); // 0x39c Func
	var_131_object = Obj(); // 0x39e PushV
	func_2318(var_131_object); // 0x39f NEW_2
	SendPlayerEnemy(var_76_object, var_131_object); // 0x3a1 Func
	
Label_931:
	var_132_bool = var_77_bool; // 0x3a3 Push
	if(var_132_bool == 0) goto Label_935; // 0x3a4 JumpB
	var_94_bool = 0; // 0x3a5 MovB
	goto Label_936; // 0x3a6 Jump
	
Label_936:
	var_133_float = 400.0; // 0x3a8 PushF
	var_95_float = var_133_float + var_90_float; // 0x3a9 Add2
	
Label_938:
	var_134_bool = 0; // 0x3aa PushV
	var_134_bool = 0; // 0x3ab MovB
	var_135_bool = 0; var_136_object = Obj(); // 0x3ac PushV
	var_136_object = var_0_object; // 0x3ad MovT
	func_1975(var_135_bool, var_136_object); // 0x3ae NEW_2
	if(var_135_bool == 0) goto Label_948; // 0x3b0 JumpB
	var_137_bool = var_3_string == 0; // 0x3b1 Not
	if(var_137_bool == 0) goto Label_948; // 0x3b2 JumpB
	var_134_bool = 1; // 0x3b3 MovB
	
Label_948:
	if(var_134_bool == 0) goto Label_1110; // 0x3b4 JumpB
	func_1540(var_100_float); // 0x3b6 NEW_2
	GetPFPosition(var_91_cvector); // 0x3b8 TObjFunc
	GetPFPosition(var_92_cvector); // 0x3ba Func
	var_96_cvector = var_91_cvector - var_92_cvector; // 0x3bc Sub2
	var_97_float = var_96_cvector | var_96_cvector; // 0x3bd Or2
	var_143_float = var_95_float * var_95_float; // 0x3be Mult
	var_144_bool = var_97_float >= var_143_float; // 0x3bf GE
	if(var_144_bool == 0) goto Label_976; // 0x3c0 JumpB
	var_145_bool = 0; var_146_object = Obj(); var_147_float = 0; var_148_float = 0; var_149_bool = 0; var_150_bool = 0; // 0x3c1 PushV
	var_146_object = var_0_object; // 0x3c2 MovT
	var_147_float = var_90_float; // 0x3c3 Mov
	var_148_float = 3000.0; // 0x3c4 MovF
	var_149_bool = 1; // 0x3c5 MovB
	var_150_bool = 0; // 0x3c6 MovB
	TaskCall(6); // 0x3c7 TaskCall
	func_1567(var_153_bool, var_145_bool, var_146_object, var_147_float, var_148_float, var_149_bool, var_150_bool); // 0x3c8 NEW_2
	TaskReturn(); // 0x3c9 TaskReturn
	var_226_bool = var_151_bool == 0; // 0x3cb Not
	if(var_226_bool == 0) goto Label_974; // 0x3cc JumpB
	goto Label_1110; // 0x3cd Jump
	
Label_1110:
	WaitForAnimEnd(); // 0x456 Func
	var_227_string = var_3_string; // 0x458 PushT
	if(var_227_string == 0) goto Label_1115; // 0x459 JumpB
	return 22; // 0x45a Return
	
Label_1115:
	var_228_string = "all"; // 0x45b PushS
	var_229_string = "attack_off"; // 0x45c PushS
	PlayAnimation(var_228_string, var_229_string); // 0x45d Func
	WaitForAnimEnd(); // 0x45f Func
	var_230_bool = var_93_bool; // 0x461 Push
	if(var_230_bool == 0) goto Label_1126; // 0x462 JumpB
	var_231_float = 2.0; // 0x463 PushF
	Sleep(var_231_float); // 0x464 Func
	
Label_1126:
	return 22; // 0x466 Return
	
Label_974:
	var_94_bool = 0; // 0x3ce MovB
	goto Label_1109; // 0x3cf Jump
	
Label_1109:
	goto Label_938; // 0x455 Jump
	
Label_976:
	var_232_float = var_78_float * var_78_float; // 0x3d0 Mult
	var_233_bool = var_97_float >= var_232_float; // 0x3d1 GE
	if(var_233_bool == 0) goto Label_1101; // 0x3d2 JumpB
	GetPFPosition(var_98_cvector); // 0x3d3 TObjFunc
	CanReachByPF(var_99_bool, var_98_cvector); // 0x3d5 Func
	var_234_bool = var_99_bool == 0; // 0x3d7 Not
	if(var_234_bool == 0) goto Label_1000; // 0x3d8 JumpB
	var_235_bool = 0; var_236_object = Obj(); var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_bool = 0; // 0x3d9 PushV
	var_236_object = var_0_object; // 0x3da MovT
	var_237_float = var_90_float; // 0x3db Mov
	var_238_float = 3000.0; // 0x3dc MovF
	var_239_bool = 1; // 0x3dd MovB
	var_240_bool = 0; // 0x3de MovB
	TaskCall(6); // 0x3df TaskCall
	func_1567(var_243_bool, var_235_bool, var_236_object, var_237_float, var_238_float, var_239_bool, var_240_bool); // 0x3e0 NEW_2
	TaskReturn(); // 0x3e1 TaskReturn
	var_244_bool = var_241_bool == 0; // 0x3e3 Not
	if(var_244_bool == 0) goto Label_998; // 0x3e4 JumpB
	goto Label_1110; // 0x3e5 Jump
	
Label_998:
	var_94_bool = 0; // 0x3e6 MovB
	goto Label_938; // 0x3e7 Jump
	
Label_1000:
	var_245_bool = var_94_bool == 0; // 0x3e8 Not
	if(var_245_bool == 0) goto Label_1025; // 0x3e9 JumpB
	var_246_object = Obj(); // 0x3ea PushV
	var_246_object = var_0_object; // 0x3eb MovT
	func_2125(); // 0x3ec NEW_2
	var_255_string = "all"; // 0x3ee PushS
	var_256_string = "attack_on"; // 0x3ef PushS
	PlayAnimation(var_255_string, var_256_string); // 0x3f0 Func
	WaitForAnimEnd(); // 0x3f2 Func
	func_1540(var_100_float); // 0x3f5 NEW_2
	StopAsync(); // 0x3f7 Func
	var_94_bool = 1; // 0x3f9 MovB
	var_257_bool = 0; var_258_object = Obj(); // 0x3fa PushV
	var_258_object = var_0_object; // 0x3fb MovT
	func_1975(var_257_bool, var_258_object); // 0x3fc NEW_2
	var_259_bool = var_257_bool == 0; // 0x3fe Not
	if(var_259_bool == 0) goto Label_1025; // 0x3ff JumpB
	goto Label_1110; // 0x400 Jump
	
Label_1025:
	rand(var_100_float); // 0x401 Func
	var_260_bool = 0; // 0x403 PushV
	var_260_bool = 1; // 0x404 MovB
	var_261_float = 0.25; // 0x405 PushF
	var_262_bool = var_100_float < var_261_float; // 0x406 LT
	if(var_262_bool == 0) goto Label_1037; // 0x407 JumpB
	var_263_bool = 0; // 0x408 PushV
	func_1497(var_260_bool, var_263_bool); // 0x409 NEW_2
	if(var_263_bool == 0) goto Label_1037; // 0x40b JumpB
	var_260_bool = 0; // 0x40c MovB
	
Label_1037:
	if(var_260_bool == 0) goto Label_1054; // 0x40d JumpB
	Face(var_0_object); // 0x40e Func
	func_1547(); // 0x411 NEW_2
	var_298_string = "all"; // 0x413 PushS
	var_299_string = "attack_stay"; // 0x414 PushS
	PlayAnimation(var_298_string, var_299_string); // 0x415 Func
	var_300_bool = 0; var_301_float = 0; // 0x417 PushV
	var_301_float = var_78_float; // 0x418 Mov
	func_1365(var_100_float, var_300_bool, var_301_float); // 0x419 NEW_2
	StopAsync(); // 0x41b Func
	goto Label_1100; // 0x41d Jump
	
Label_1100:
	goto Label_1109; // 0x44c Jump
	
Label_1054:
	Face(var_0_object); // 0x41e Func
	var_519_string = "all"; // 0x420 PushS
	var_520_string = "fjump"; // 0x421 PushS
	PlayAnimation(var_519_string, var_520_string); // 0x422 Func
	WaitForAnimEnd(); // 0x424 Func
	func_1540(var_100_float); // 0x427 NEW_2
	var_521_cvector = CVector(0.0, 0.0, 0.0); // 0x429 PushVec
	SetSpeed(var_521_cvector); // 0x42a Func
	Stop(); // 0x42c Func
	StopAsync(); // 0x42e Func
	var_522_bool = 0; // 0x430 PushV
	func_1497(var_100_float, var_522_bool); // 0x431 NEW_2
	var_523_bool = var_522_bool == 0; // 0x433 Not
	if(var_523_bool == 0) goto Label_1100; // 0x434 JumpB
	var_524_bool = 0; var_525_object = Obj(); // 0x435 PushV
	var_525_object = var_0_object; // 0x436 MovT
	func_1975(var_524_bool, var_525_object); // 0x437 NEW_2
	var_526_bool = var_524_bool == 0; // 0x439 Not
	if(var_526_bool == 0) goto Label_1084; // 0x43a JumpB
	goto Label_1110; // 0x43b Jump
	
Label_1084:
	GetPFPosition(var_91_cvector); // 0x43c TObjFunc
	GetPFPosition(var_92_cvector); // 0x43e Func
	var_96_cvector = var_91_cvector - var_92_cvector; // 0x440 Sub2
	var_97_float = var_96_cvector | var_96_cvector; // 0x441 Or2
	var_527_float = var_78_float * var_78_float; // 0x442 Mult
	var_528_bool = var_97_float < var_527_float; // 0x443 LT
	if(var_528_bool == 0) goto Label_1100; // 0x444 JumpB
	var_529_bool = 0; var_530_float = 0; // 0x445 PushV
	var_530_float = var_78_float; // 0x446 Mov
	func_1201(var_100_float, var_529_bool, var_530_float); // 0x447 NEW_2
	var_531_bool = var_529_bool == 0; // 0x449 Not
	if(var_531_bool == 0) goto Label_1100; // 0x44a JumpB
	goto Label_1110; // 0x44b Jump
	
Label_1101:
	var_532_bool = 0; var_533_float = 0; // 0x44d PushV
	var_533_float = var_78_float; // 0x44e Mov
	func_1201(var_100_float, var_532_bool, var_533_float); // 0x44f NEW_2
	var_534_bool = var_532_bool == 0; // 0x451 Not
	if(var_534_bool == 0) goto Label_1108; // 0x452 JumpB
	goto Label_1110; // 0x453 Jump
	
Label_1108:
	var_94_bool = 1; // 0x454 MovB
	
Label_935:
	var_94_bool = 1; // 0x3a7 MovB
	
Label_912:
	var_90_float = var_78_float; // 0x390 Mov
}


func_1934(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x78e PushV
	IsDead(var_47_bool); // 0x78f ObjFunc
	var_44_bool = var_47_bool; // 0x791 Mov
	return 2; // 0x792 Return
}


func_2446(var_17_bool)
{
	var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_bool = 0; // 0x98e PushV
	var_22_bool = var_17_bool; // 0x98f Push
	if(var_22_bool == 0) goto Label_2535; // 0x990 JumpB
	var_23_int = 0; var_24_int = 0; // 0x991 PushV
	var_23_int = 0; // 0x992 MovI
	var_25_int = 100; // 0x993 PushI
	var_26_int = 0; // 0x994 PushV
	func_2369(var_26_int); // 0x995 NEW_2
	var_32_int = 100; // 0x997 PushI
	var_33_float = var_26_int * var_32_int; // 0x998 Mult
	var_24_int = var_25_int + var_33_float; // 0x999 Add2
	func_2415(var_23_int, var_24_int); // 0x99a NEW_2
	var_51_int = 8; // 0x99c PushI
	irand(var_20_int, var_51_int); // 0x99d Func
	var_52_int = 0; // 0x99f PushI
	var_53_bool = var_20_int == var_52_int; // 0x9a0 Eq
	if(var_53_bool == 0) goto Label_2475; // 0x9a1 JumpB
	var_54_int = 0; var_55_string = ""; // 0x9a2 PushV
	var_55_string = "lemon"; // 0x9a3 MovS
	func_2621(var_54_int, var_55_string); // 0x9a4 NEW_2
	var_56_int = 0; // 0x9a6 PushI
	var_57_int = 1; // 0x9a7 PushI
	AddItem(var_21_bool, var_54_int, var_56_int, var_57_int); // 0x9a8 Func
	goto Label_2534; // 0x9aa Jump
	
Label_2534:
	goto Label_2620; // 0x9e6 Jump
	
Label_2620:
	return 4; // 0xa3c Return
	
Label_2475:
	var_58_int = 1; // 0x9ab PushI
	var_59_bool = var_20_int == var_58_int; // 0x9ac Eq
	if(var_59_bool == 0) goto Label_2487; // 0x9ad JumpB
	var_60_int = 0; var_61_string = ""; // 0x9ae PushV
	var_61_string = "rusk"; // 0x9af MovS
	func_2621(var_60_int, var_61_string); // 0x9b0 NEW_2
	var_62_int = 0; // 0x9b2 PushI
	var_63_int = 1; // 0x9b3 PushI
	AddItem(var_21_bool, var_60_int, var_62_int, var_63_int); // 0x9b4 Func
	goto Label_2534; // 0x9b6 Jump
	
Label_2487:
	var_64_int = 2; // 0x9b7 PushI
	var_65_bool = var_20_int == var_64_int; // 0x9b8 Eq
	if(var_65_bool == 0) goto Label_2499; // 0x9b9 JumpB
	var_66_int = 0; var_67_string = ""; // 0x9ba PushV
	var_67_string = "hook"; // 0x9bb MovS
	func_2621(var_66_int, var_67_string); // 0x9bc NEW_2
	var_68_int = 0; // 0x9be PushI
	var_69_int = 1; // 0x9bf PushI
	AddItem(var_21_bool, var_66_int, var_68_int, var_69_int); // 0x9c0 Func
	goto Label_2534; // 0x9c2 Jump
	
Label_2499:
	var_70_int = 4; // 0x9c3 PushI
	var_71_bool = var_20_int == var_70_int; // 0x9c4 Eq
	if(var_71_bool == 0) goto Label_2511; // 0x9c5 JumpB
	var_72_int = 0; var_73_string = ""; // 0x9c6 PushV
	var_73_string = "syringe"; // 0x9c7 MovS
	func_2621(var_72_int, var_73_string); // 0x9c8 NEW_2
	var_74_int = 0; // 0x9ca PushI
	var_75_int = 1; // 0x9cb PushI
	AddItem(var_21_bool, var_72_int, var_74_int, var_75_int); // 0x9cc Func
	goto Label_2534; // 0x9ce Jump
	
Label_2511:
	var_76_int = 5; // 0x9cf PushI
	var_77_bool = var_20_int == var_76_int; // 0x9d0 Eq
	if(var_77_bool == 0) goto Label_2523; // 0x9d1 JumpB
	var_78_int = 0; var_79_string = ""; // 0x9d2 PushV
	var_79_string = "watch"; // 0x9d3 MovS
	func_2621(var_78_int, var_79_string); // 0x9d4 NEW_2
	var_80_int = 0; // 0x9d6 PushI
	var_81_int = 1; // 0x9d7 PushI
	AddItem(var_21_bool, var_78_int, var_80_int, var_81_int); // 0x9d8 Func
	goto Label_2534; // 0x9da Jump
	
Label_2523:
	var_82_int = 6; // 0x9db PushI
	var_83_bool = var_20_int == var_82_int; // 0x9dc Eq
	if(var_83_bool == 0) goto Label_2534; // 0x9dd JumpB
	var_84_int = 0; var_85_string = ""; // 0x9de PushV
	var_85_string = "razor"; // 0x9df MovS
	func_2621(var_84_int, var_85_string); // 0x9e0 NEW_2
	var_86_int = 0; // 0x9e2 PushI
	var_87_int = 1; // 0x9e3 PushI
	AddItem(var_21_bool, var_84_int, var_86_int, var_87_int); // 0x9e4 Func
	
Label_2535:
	var_88_int = 0; var_89_int = 0; // 0x9e7 PushV
	var_88_int = 0; // 0x9e8 MovI
	var_90_int = 50; // 0x9e9 PushI
	var_91_int = 0; // 0x9ea PushV
	func_2369(var_91_int); // 0x9eb NEW_2
	var_92_int = 50; // 0x9ed PushI
	var_93_float = var_91_int * var_92_int; // 0x9ee Mult
	var_89_int = var_90_int + var_93_float; // 0x9ef Add2
	func_2415(var_88_int, var_89_int); // 0x9f0 NEW_2
	var_94_int = 7; // 0x9f2 PushI
	irand(var_20_int, var_94_int); // 0x9f3 Func
	var_95_int = 0; // 0x9f5 PushI
	var_96_bool = var_20_int == var_95_int; // 0x9f6 Eq
	if(var_96_bool == 0) goto Label_2561; // 0x9f7 JumpB
	var_97_int = 0; var_98_string = ""; // 0x9f8 PushV
	var_98_string = "beads"; // 0x9f9 MovS
	func_2621(var_97_int, var_98_string); // 0x9fa NEW_2
	var_99_int = 0; // 0x9fc PushI
	var_100_int = 1; // 0x9fd PushI
	AddItem(var_21_bool, var_97_int, var_99_int, var_100_int); // 0x9fe Func
	goto Label_2620; // 0xa00 Jump
	
Label_2561:
	var_101_int = 1; // 0xa01 PushI
	var_102_bool = var_20_int == var_101_int; // 0xa02 Eq
	if(var_102_bool == 0) goto Label_2573; // 0xa03 JumpB
	var_103_int = 0; var_104_string = ""; // 0xa04 PushV
	var_104_string = "bracelet"; // 0xa05 MovS
	func_2621(var_103_int, var_104_string); // 0xa06 NEW_2
	var_105_int = 0; // 0xa08 PushI
	var_106_int = 1; // 0xa09 PushI
	AddItem(var_21_bool, var_103_int, var_105_int, var_106_int); // 0xa0a Func
	goto Label_2620; // 0xa0c Jump
	
Label_2573:
	var_107_int = 2; // 0xa0d PushI
	var_108_bool = var_20_int == var_107_int; // 0xa0e Eq
	if(var_108_bool == 0) goto Label_2585; // 0xa0f JumpB
	var_109_int = 0; var_110_string = ""; // 0xa10 PushV
	var_110_string = "ear_ring"; // 0xa11 MovS
	func_2621(var_109_int, var_110_string); // 0xa12 NEW_2
	var_111_int = 0; // 0xa14 PushI
	var_112_int = 1; // 0xa15 PushI
	AddItem(var_21_bool, var_109_int, var_111_int, var_112_int); // 0xa16 Func
	goto Label_2620; // 0xa18 Jump
	
Label_2585:
	var_113_int = 3; // 0xa19 PushI
	var_114_bool = var_20_int == var_113_int; // 0xa1a Eq
	if(var_114_bool == 0) goto Label_2597; // 0xa1b JumpB
	var_115_int = 0; var_116_string = ""; // 0xa1c PushV
	var_116_string = "gold_ring"; // 0xa1d MovS
	func_2621(var_115_int, var_116_string); // 0xa1e NEW_2
	var_117_int = 0; // 0xa20 PushI
	var_118_int = 1; // 0xa21 PushI
	AddItem(var_21_bool, var_115_int, var_117_int, var_118_int); // 0xa22 Func
	goto Label_2620; // 0xa24 Jump
	
Label_2597:
	var_119_int = 4; // 0xa25 PushI
	var_120_bool = var_20_int == var_119_int; // 0xa26 Eq
	if(var_120_bool == 0) goto Label_2609; // 0xa27 JumpB
	var_121_int = 0; var_122_string = ""; // 0xa28 PushV
	var_122_string = "silver_ring"; // 0xa29 MovS
	func_2621(var_121_int, var_122_string); // 0xa2a NEW_2
	var_123_int = 0; // 0xa2c PushI
	var_124_int = 1; // 0xa2d PushI
	AddItem(var_21_bool, var_121_int, var_123_int, var_124_int); // 0xa2e Func
	goto Label_2620; // 0xa30 Jump
	
Label_2609:
	var_125_int = 5; // 0xa31 PushI
	var_126_bool = var_20_int == var_125_int; // 0xa32 Eq
	if(var_126_bool == 0) goto Label_2620; // 0xa33 JumpB
	var_127_int = 0; var_128_string = ""; // 0xa34 PushV
	var_128_string = "flower"; // 0xa35 MovS
	func_2621(var_127_int, var_128_string); // 0xa36 NEW_2
	var_129_int = 0; // 0xa38 PushI
	var_130_int = 1; // 0xa39 PushI
	AddItem(var_21_bool, var_127_int, var_129_int, var_130_int); // 0xa3a Func
}


func_1939(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x793 PushV
	var_39_bool = var_34_object == 0; // 0x794 NullEq
	if(var_39_bool == 0) goto Label_1944; // 0x795 JumpB
	var_33_bool = 0; // 0x796 MovB
	return 4; // 0x797 Return
	
Label_1944:
	var_40_bool = 0; // 0x798 PushV
	var_40_bool = 0; // 0x799 MovB
	var_41_string = "IsDead"; // 0x79a PushS
	var_42_int = 1; // 0x79b PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0x79c FuncExist
	if(var_43_bool == 0) goto Label_1956; // 0x79d JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x79e PushV
	var_45_object = var_34_object; // 0x79f Mov
	func_1934(var_45_object); // 0x7a0 NEW_2
	if(var_44_bool == 0) goto Label_1956; // 0x7a2 JumpB
	var_40_bool = 1; // 0x7a3 MovB
	
Label_1956:
	if(var_40_bool == 0) goto Label_1959; // 0x7a4 JumpB
	var_33_bool = 0; // 0x7a5 MovB
	return 4; // 0x7a6 Return
	
Label_1959:
	GetScene(var_37_object); // 0x7a7 Func
	var_48_bool = var_37_object == 0; // 0x7a9 NullEq
	if(var_48_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_33_bool = 0; // 0x7ab MovB
	return 4; // 0x7ac Return
	
Label_1965:
	GetScene(var_38_object); // 0x7ad ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0x7af Neq
	if(var_49_bool == 0) goto Label_1971; // 0x7b0 JumpB
	var_33_bool = 0; // 0x7b1 MovB
	return 4; // 0x7b2 Return
	
Label_1971:
	var_33_bool = 1; // 0x7b3 MovB
	return 4; // 0x7b4 Return
}


func_1436(var_313_bool)
{
	var_314_bool = 0; // 0x59c PushV
	var_314_bool = 0; // 0x59d MovB
	var_315_bool = 0; // 0x59e PushV
	func_1408(var_314_bool, var_315_bool); // 0x59f NEW_2
	if(var_315_bool == 0) goto Label_1447; // 0x5a1 JumpB
	var_332_bool = 0; // 0x5a2 PushV
	func_1452(var_313_bool, var_314_bool, var_332_bool); // 0x5a3 NEW_2
	if(var_332_bool == 0) goto Label_1447; // 0x5a5 JumpB
	var_314_bool = 1; // 0x5a6 MovB
	
Label_1447:
	if(var_314_bool == 0) goto Label_1450; // 0x5a7 JumpB
	var_313_bool = 1; // 0x5a8 MovB
	return 0; // 0x5a9 Return
	
Label_1450:
	var_313_bool = 0; // 0x5aa MovB
	return 0; // 0x5ab Return
}


func_1452(var_0_object, var_4_bool, var_332_bool)
{
	var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_object = Obj(); var_339_bool = 0; var_340_float = 0; var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); // 0x5ac PushV
	GetScene(var_338_object); // 0x5ad Func
	var_339_bool = 0; // 0x5af MovB
	
Label_1456:
	var_343_cvector = CVector(0,0,0); var_344_object = Obj(); // 0x5b0 PushV
	var_344_object = var_0_object; // 0x5b1 MovT
	func_1837(var_344_object); // 0x5b2 NEW_2
	var_349_int = -var_343_cvector; // 0x5b4 Neg
	FindDirLength(var_340_float, var_349_int, var_340_float); // 0x5b5 Func
	var_350_bool = var_340_float < var_4_bool; // 0x5b7 LT
	if(var_350_bool == 0) goto Label_1466; // 0x5b8 JumpB
	goto Label_1494; // 0x5b9 Jump
	
Label_1494:
	var_332_bool = var_339_bool; // 0x5d6 Mov
	return 10; // 0x5d7 Return
	
Label_1466:
	Face(var_0_object); // 0x5ba Func
	var_351_string = "all"; // 0x5bc PushS
	var_352_string = "bjump"; // 0x5bd PushS
	PlayAnimation(var_351_string, var_352_string); // 0x5be Func
	GetPFPosition(var_341_cvector); // 0x5c0 TObjFunc
	GetPFPosition(var_342_cvector); // 0x5c2 Func
	WaitForAnimEnd(); // 0x5c4 Func
	func_1540(var_342_cvector); // 0x5c7 NEW_2
	StopAsync(); // 0x5c9 Func
	var_353_cvector = CVector(0.0, 0.0, 0.0); // 0x5cb PushVec
	SetSpeed(var_353_cvector); // 0x5cc Func
	var_339_bool = 1; // 0x5ce MovB
	var_354_bool = 0; // 0x5cf PushV
	func_1408(var_342_cvector, var_354_bool); // 0x5d0 NEW_2
	var_355_bool = var_354_bool == 0; // 0x5d2 Not
	if(var_355_bool == 0) goto Label_1493; // 0x5d3 JumpB
	goto Label_1494; // 0x5d4 Jump
	
Label_1493:
	goto Label_1456; // 0x5d5 Jump
}


func_1975(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x7b7 PushV
	var_33_bool = 0; var_34_object = Obj(); // 0x7b8 PushV
	var_34_object = var_30_object; // 0x7b9 Mov
	func_1939(var_33_bool, var_34_object); // 0x7ba NEW_2
	var_50_bool = var_33_bool == 0; // 0x7bc Not
	if(var_50_bool == 0) goto Label_1984; // 0x7bd JumpB
	var_29_bool = 0; // 0x7be MovB
	return 2; // 0x7bf Return
	
Label_1984:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x7c0 PushV
	var_52_object = var_30_object; // 0x7c1 Mov
	var_53_string = "noaccess"; // 0x7c2 MovS
	func_1849(var_51_bool, var_52_object, var_53_string); // 0x7c3 NEW_2
	var_60_bool = var_51_bool == 0; // 0x7c5 Not
	if(var_60_bool == 0) goto Label_1993; // 0x7c6 JumpB
	var_29_bool = 1; // 0x7c7 MovB
	return 2; // 0x7c8 Return
	
Label_1993:
	var_61_string = "noaccess"; // 0x7c9 PushS
	GetProperty(var_61_string, var_32_int); // 0x7ca ObjFunc
	var_62_int = 0; // 0x7cc PushI
	var_29_bool = var_32_int == var_62_int; // 0x7cd Eq2
	return 2; // 0x7ce Return
}


func_1999(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = ""; // 0x7cf PushV
	var_48_bool = var_33_object == 0; // 0x7d0 NullEq
	if(var_48_bool == 0) goto Label_2003; // 0x7d1 JumpB
	return 14; // 0x7d2 Return
	
Label_2003:
	IsDead(var_41_bool); // 0x7d3 Func
	var_49_bool = var_41_bool; // 0x7d5 Push
	if(var_49_bool == 0) goto Label_2008; // 0x7d6 JumpB
	return 14; // 0x7d7 Return
	
Label_2008:
	GetSecondaryAnimationType(var_42_int); // 0x7d8 Func
	var_50_int = 0; // 0x7da PushI
	var_51_bool = var_42_int < var_50_int; // 0x7db LT
	if(var_51_bool == 0) goto Label_2014; // 0x7dc JumpB
	return 14; // 0x7dd Return
	
Label_2014:
	GetPosition(var_43_cvector); // 0x7de ObjFunc
	GetPosition(var_44_cvector); // 0x7e0 Func
	GetDirection(var_45_cvector); // 0x7e2 Func
	var_46_cvector = var_44_cvector - var_43_cvector; // 0x7e4 Sub2
	var_52_float = GetByIndex(var_46_cvector, 0); // 0x7e5 PushE
	var_53_float = GetByIndex(var_45_cvector, 0); // 0x7e6 PushE
	var_54_float = var_52_float * var_53_float; // 0x7e7 Mult
	var_55_float = GetByIndex(var_46_cvector, 2); // 0x7e8 PushE
	var_56_float = GetByIndex(var_45_cvector, 2); // 0x7e9 PushE
	var_57_float = var_55_float * var_56_float; // 0x7ea Mult
	var_58_int = var_54_float + var_57_float; // 0x7eb Add
	var_59_int = 0; // 0x7ec PushI
	var_60_bool = var_58_int >= var_59_int; // 0x7ed GE
	if(var_60_bool == 0) goto Label_2033; // 0x7ee JumpB
	var_47_string = "fhit"; // 0x7ef MovS
	goto Label_2034; // 0x7f0 Jump
	
Label_2034:
	var_61_string = "hit_react"; // 0x7f2 PushS
	var_62_string = "1"; // 0x7f3 PushS
	var_63_int = var_47_string + var_62_string; // 0x7f4 Add
	var_64_string = "2"; // 0x7f5 PushS
	var_65_int = var_47_string + var_64_string; // 0x7f6 Add
	var_66_int = -10; // 0x7f7 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x7f8 Func
	return 14; // 0x7fa Return
	
Label_2033:
	var_47_string = "bhit"; // 0x7f1 MovS
}


func_1497(var_0_object, var_263_bool)
{
	var_264_bool = 0; var_265_bool = 0; // 0x5d9 PushV
	var_266_string = "IsAttacking"; // 0x5da PushS
	var_267_int = 1; // 0x5db PushI
	var_268_bool = IsFuncExist(var_0_object, var_266_string, var_267_int); // 0x5dc FuncExist
	if(var_268_bool == 0) goto Label_1506; // 0x5dd JumpB
	IsAttacking(var_265_bool); // 0x5de TObjFunc
	var_263_bool = var_265_bool; // 0x5e0 Mov
	return 2; // 0x5e1 Return
	
Label_1506:
	var_263_bool = 0; // 0x5e2 MovB
	return 2; // 0x5e3 Return
}


func_1508(var_2_object, var_5_bool)
{
	var_380_float = 0; var_381_int = 0; var_382_float = 0; var_383_int = 0; // 0x5e4 PushV
	var_384_bool = var_2_object == 0; // 0x5e5 Not
	if(var_384_bool == 0) goto Label_1512; // 0x5e6 JumpB
	return 4; // 0x5e7 Return
	
Label_1512:
	var_385_bool = var_5_bool; // 0x5e8 PushT
	if(var_385_bool == 0) goto Label_1520; // 0x5e9 JumpB
	var_386_int = -1; // 0x5ea PushI
	var_5_bool = var_5_bool + var_386_int; // 0x5eb Add2
	var_387_int = 0; // 0x5ec PushI
	var_388_bool = var_5_bool > var_387_int; // 0x5ed GT
	if(var_388_bool == 0) goto Label_1520; // 0x5ee JumpB
	return 4; // 0x5ef Return
	
Label_1520:
	rand(var_382_float); // 0x5f0 Func
	var_389_float = 0; // 0x5f2 PushV
	func_1558(var_389_float); // 0x5f3 NEW_2
	var_390_bool = var_382_float < var_389_float; // 0x5f5 LT
	if(var_390_bool == 0) goto Label_1539; // 0x5f6 JumpB
	irand(var_383_int, var_382_float); // 0x5f7 Func
	var_391_int = 1; // 0x5f9 PushI
	var_383_int = var_383_int + var_391_int; // 0x5fa Add2
	var_392_string = "attack"; // 0x5fb PushS
	var_393_int = var_392_string + var_383_int; // 0x5fc Add
	Speak(var_393_int); // 0x5fd Func
	var_394_int = 0; // 0x5ff PushV
	func_1556(var_394_int); // 0x600 NEW_2
	var_5_bool = var_394_int; // 0x601 TMov
	
Label_1539:
	return 4; // 0x603 Return
}


func_2043(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); // 0x7fb PushV
	var_41_bool = 0; // 0x7fc PushV
	var_41_bool = 0; // 0x7fd MovB
	var_42_bool = 0; // 0x7fe PushV
	var_42_bool = 0; // 0x7ff MovB
	var_43_object = var_20_object; // 0x800 Push
	if(var_43_object == 0) goto Label_2054; // 0x801 JumpB
	var_44_int = 4; // 0x802 PushI
	var_45_bool = var_21_int != var_44_int; // 0x803 Neq
	if(var_45_bool == 0) goto Label_2054; // 0x804 JumpB
	var_42_bool = 1; // 0x805 MovB
	
Label_2054:
	if(var_42_bool == 0) goto Label_2059; // 0x806 JumpB
	var_46_int = 5; // 0x807 PushI
	var_47_bool = var_21_int != var_46_int; // 0x808 Neq
	if(var_47_bool == 0) goto Label_2059; // 0x809 JumpB
	var_41_bool = 1; // 0x80a MovB
	
Label_2059:
	if(var_41_bool == 0) goto Label_2106; // 0x80b JumpB
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x80c PushV
	var_50_cvector = CVector(0,0,0); var_51_object = Obj(); // 0x80d PushV
	var_51_object = var_20_object; // 0x80e Mov
	func_1837(var_51_object); // 0x80f NEW_2
	var_49_cvector = var_50_cvector; // 0x810 Mov
	func_2324(var_48_cvector, var_49_cvector); // 0x812 NEW_2
	var_32_cvector = var_48_cvector; // 0x813 Mov
	CreateVectorVector(var_33_object); // 0x815 Func
	var_34_int = 1; // 0x817 MovI
	
Label_2072:
	var_61_string = "hit"; // 0x818 PushS
	var_62_int = var_61_string + var_34_int; // 0x819 Add
	GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x81a Func
	var_63_bool = var_35_bool == 0; // 0x81c Not
	if(var_63_bool == 0) goto Label_2079; // 0x81d JumpB
	goto Label_2088; // 0x81e Jump
	
Label_2088:
	size(var_38_int); // 0x828 ObjFunc
	var_64_int = var_38_int; // 0x82a Push
	if(var_64_int == 0) goto Label_2105; // 0x82b JumpB
	irand(var_39_int, var_38_int); // 0x82c Func
	get(var_40_cvector, var_39_int); // 0x82e ObjFunc
	var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x830 PushV
	var_65_object = var_20_object; // 0x831 Mov
	var_66_int = var_21_int; // 0x832 Mov
	var_67_float = var_22_float; // 0x833 Mov
	var_68_cvector = var_40_cvector; // 0x834 Mov
	var_69_cvector = -var_32_cvector; // 0x835 Neg2
	func_2111(var_67_float, var_68_cvector, var_69_cvector); // 0x836 NEW_2
	return 18; // 0x838 Return
	
Label_2105:
	var_33_object = 0; // 0x839 SetNull
	
Label_2106:
	var_110_object = Obj(); // 0x83a PushV
	var_110_object = var_20_object; // 0x83b Mov
	func_1999(var_110_object); // 0x83c NEW_2
	return 18; // 0x83e Return
	
Label_2079:
	var_111_int = var_37_cvector | var_32_cvector; // 0x81f Or
	var_112_float = 0.70711; // 0x820 PushF
	var_113_bool = var_111_int >= var_112_float; // 0x821 GE
	if(var_113_bool == 0) goto Label_2085; // 0x822 JumpB
	add(var_36_cvector); // 0x823 ObjFunc
	
Label_2085:
	var_114_int = 1; // 0x825 PushI
	var_34_int = var_34_int + var_114_int; // 0x826 Add2
	goto Label_2072; // 0x827 Jump
}


