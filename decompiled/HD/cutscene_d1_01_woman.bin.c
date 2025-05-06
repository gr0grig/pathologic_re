task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 1; // 0x9b PushI
	if(var_15_int == 0) goto Label_195; // 0x9c JumpB
	func_1636(); // 0x9e NEW_2
	var_17_int = 19229; // 0xa0 PushI
	var_18_bool = var_13_cvector == var_17_int; // 0xa1 Eq
	if(var_18_bool == 0) goto Label_183; // 0xa2 JumpB
	var_19_string = ""; // 0xa3 PushV
	var_19_string = "Neutral"; // 0xa4 MovS
	func_132(var_14_bool, var_19_string); // 0xa5 NEW_2
	var_36_int = 518110; // 0xa7 PushI
	SetMessage(var_36_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_37_int = 518111; // 0xac PushI
	var_38_int = -1; // 0xad PushI
	var_39_int = 19230; // 0xae PushI
	AddReply(var_37_int, var_38_int, var_39_int); // 0xaf TObjFunc
	var_40_int = 534585; // 0xb1 PushI
	var_41_int = -1; // 0xb2 PushI
	var_42_int = 36223; // 0xb3 PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_43_bool = 0; // 0xb8 PushV
	func_2225(var_43_bool); // 0xb9 NEW_2
	if(var_43_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0xd3 PushV
	var_16_int = 0; var_17_object = Obj(); // 0xd4 PushV
	var_17_object = var_13_bool; // 0xd5 Mov
	func_2188(var_17_object); // 0xd6 NEW_2
	var_15_int = var_16_int; // 0xd7 Mov
	var_18_int = 0; // 0xd9 PushI
	var_19_bool = var_15_int > var_18_int; // 0xda GT
	if(var_19_bool == 0) goto Label_224; // 0xdb JumpB
	var_20_object = Obj(); // 0xdc PushV
	var_20_object = var_13_bool; // 0xdd Mov
	func_2191(var_20_object); // 0xde NEW_2
	
Label_224:
	return 2; // 0xe0 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_2243(); // 0xe2 NEW_2
	return 0; // 0xe4 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	return 0; // 0x15b Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	return 0; // 0x15d Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	return 0; // 0x15f Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0x160 PushV
	var_16_int = 0; var_17_object = Obj(); // 0x161 PushV
	var_17_object = var_13_bool; // 0x162 Mov
	func_2188(var_17_object); // 0x163 NEW_2
	var_15_int = var_16_int; // 0x164 Mov
	var_18_int = 0; // 0x166 PushI
	var_19_bool = var_15_int > var_18_int; // 0x167 GT
	if(var_19_bool == 0) goto Label_371; // 0x168 JumpB
	var_20_int = 1; // 0x169 PushI
	var_21_bool = var_15_int > var_20_int; // 0x16a GT
	if(var_21_bool == 0) goto Label_367; // 0x16b JumpB
	func_597(); // 0x16d NEW_2
	
Label_367:
	var_22_object = Obj(); // 0x16f PushV
	var_22_object = var_13_bool; // 0x170 Mov
	func_2191(var_22_object); // 0x171 NEW_2
	
Label_371:
	return 2; // 0x173 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0x174 PushV
	var_16_object = Obj(); // 0x175 PushV
	var_16_object = var_13_bool; // 0x176 Mov
	func_2076(var_16_object); // 0x177 NEW_2
	var_25_int = 0; var_26_object = Obj(); // 0x179 PushV
	var_26_object = var_13_bool; // 0x17a Mov
	func_2142(var_25_int, var_26_object); // 0x17b NEW_2
	var_15_int = var_25_int; // 0x17c Mov
	var_61_int = 0; // 0x17e PushI
	var_62_bool = var_15_int > var_61_int; // 0x17f GT
	if(var_62_bool == 0) goto Label_395; // 0x180 JumpB
	var_63_int = 1; // 0x181 PushI
	var_64_bool = var_15_int > var_63_int; // 0x182 GT
	if(var_64_bool == 0) goto Label_391; // 0x183 JumpB
	func_597(); // 0x185 NEW_2
	
Label_391:
	var_65_object = Obj(); // 0x187 PushV
	var_65_object = var_13_bool; // 0x188 Mov
	func_2152(var_65_object); // 0x189 NEW_2
	
Label_395:
	return 2; // 0x18b Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0; // 0x18c PushV
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0; // 0x18d PushV
	var_19_object = var_13_object; // 0x18e Mov
	var_20_object = var_14_cvector; // 0x18f Mov
	var_21_bool = var_15_bool; // 0x190 Mov
	func_2240(var_21_bool); // 0x191 NEW_2
	if(var_18_bool == 0) goto Label_423; // 0x193 JumpB
	var_22_int = 0; var_23_object = Obj(); var_24_bool = 0; // 0x194 PushV
	var_23_object = var_13_object; // 0x195 Mov
	var_24_bool = var_15_bool; // 0x196 Mov
	func_2160(var_23_object, var_24_bool); // 0x197 NEW_2
	var_17_int = var_22_int; // 0x198 Mov
	var_59_int = 0; // 0x19a PushI
	var_60_bool = var_17_int > var_59_int; // 0x19b GT
	if(var_60_bool == 0) goto Label_423; // 0x19c JumpB
	var_61_int = 1; // 0x19d PushI
	var_62_bool = var_17_int > var_61_int; // 0x19e GT
	if(var_62_bool == 0) goto Label_419; // 0x19f JumpB
	func_597(); // 0x1a1 NEW_2
	
Label_419:
	var_63_object = Obj(); // 0x1a3 PushV
	var_63_object = var_13_object; // 0x1a4 Mov
	func_2170(var_63_object); // 0x1a5 NEW_2
	
Label_423:
	return 2; // 0x1a7 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0x1a8 PushV
	var_16_int = 0; var_17_object = Obj(); // 0x1a9 PushV
	var_17_object = var_13_bool; // 0x1aa Mov
	func_2178(var_17_object); // 0x1ab NEW_2
	var_15_int = var_16_int; // 0x1ac Mov
	var_18_int = 0; // 0x1ae PushI
	var_19_bool = var_15_int > var_18_int; // 0x1af GT
	if(var_19_bool == 0) goto Label_443; // 0x1b0 JumpB
	var_20_int = 1; // 0x1b1 PushI
	var_21_bool = var_15_int > var_20_int; // 0x1b2 GT
	if(var_21_bool == 0) goto Label_439; // 0x1b3 JumpB
	func_597(); // 0x1b5 NEW_2
	
Label_439:
	var_22_object = Obj(); // 0x1b7 PushV
	var_22_object = var_13_bool; // 0x1b8 Mov
	func_2181(); // 0x1b9 NEW_2
	
Label_443:
	return 2; // 0x1bb Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0x1bc PushV
	var_17_bool = 0; var_18_object = Obj(); var_19_string = ""; // 0x1bd PushV
	var_18_object = var_13_cvector; // 0x1be Mov
	var_19_string = var_14_bool; // 0x1bf Mov
	func_1990(var_17_bool, var_18_object, var_19_string); // 0x1c0 NEW_2
	if(var_17_bool == 0) goto Label_460; // 0x1c2 JumpB
	func_597(); // 0x1c4 NEW_2
	var_32_object = Obj(); var_33_string = ""; // 0x1c6 PushV
	var_32_object = var_13_cvector; // 0x1c7 Mov
	var_33_string = var_14_bool; // 0x1c8 Mov
	func_2022(var_32_object, var_33_string); // 0x1c9 NEW_2
	goto Label_480; // 0x1cb Jump
	
Label_480:
	return 2; // 0x1e0 Return
	
Label_460:
	var_43_int = 0; var_44_string = ""; var_45_object = Obj(); // 0x1cc PushV
	var_44_string = var_14_bool; // 0x1cd Mov
	var_45_object = var_13_cvector; // 0x1ce Mov
	func_2183(var_45_object); // 0x1cf NEW_2
	var_16_int = var_43_int; // 0x1d0 Mov
	var_46_int = 0; // 0x1d2 PushI
	var_47_bool = var_16_int > var_46_int; // 0x1d3 GT
	if(var_47_bool == 0) goto Label_480; // 0x1d4 JumpB
	var_48_int = 1; // 0x1d5 PushI
	var_49_bool = var_16_int > var_48_int; // 0x1d6 GT
	if(var_49_bool == 0) goto Label_475; // 0x1d7 JumpB
	func_597(); // 0x1d9 NEW_2
	
Label_475:
	var_50_string = ""; var_51_object = Obj(); // 0x1db PushV
	var_50_string = var_14_bool; // 0x1dc Mov
	var_51_object = var_13_cvector; // 0x1dd Mov
	func_2186(); // 0x1de NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_string, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_string = ""; // 0x1e2 PushV
	var_15_string = var_13_bool; // 0x1e3 Mov
	func_2089(var_14_bool, var_15_string); // 0x1e4 NEW_2
	if(var_14_bool == 0) goto Label_494; // 0x1e6 JumpB
	func_597(); // 0x1e8 NEW_2
	var_23_string = ""; // 0x1ea PushV
	var_23_string = var_13_bool; // 0x1eb Mov
	func_2105(var_23_string); // 0x1ec NEW_2
	
Label_494:
	return 0; // 0x1ee Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_597(); // 0x1f0 NEW_2
	func_2243(); // 0x1f3 NEW_2
	return 0; // 0x1f5 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x1f7 PushV
	var_15_object = var_13_bool; // 0x1f8 Mov
	func_2047(var_14_bool, var_15_object); // 0x1f9 NEW_2
	if(var_14_bool == 0) goto Label_515; // 0x1fb JumpB
	func_597(); // 0x1fd NEW_2
	var_26_object = Obj(); // 0x1ff PushV
	var_26_object = var_13_bool; // 0x200 Mov
	func_2070(var_26_object); // 0x201 NEW_2
	
Label_515:
	return 0; // 0x203 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0x271 PushV
	var_16_int = 0; var_17_object = Obj(); // 0x272 PushV
	var_17_object = var_13_bool; // 0x273 Mov
	func_2188(var_17_object); // 0x274 NEW_2
	var_15_int = var_16_int; // 0x275 Mov
	var_18_int = 0; // 0x277 PushI
	var_19_bool = var_15_int > var_18_int; // 0x278 GT
	if(var_19_bool == 0) goto Label_644; // 0x279 JumpB
	var_20_int = 1; // 0x27a PushI
	var_21_bool = var_15_int > var_20_int; // 0x27b GT
	if(var_21_bool == 0) goto Label_640; // 0x27c JumpB
	func_860(var_14_int, var_15_int); // 0x27e NEW_2
	
Label_640:
	var_22_object = Obj(); // 0x280 PushV
	var_22_object = var_13_bool; // 0x281 Mov
	func_2191(var_22_object); // 0x282 NEW_2
	
Label_644:
	return 2; // 0x284 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0x285 PushV
	var_16_object = Obj(); // 0x286 PushV
	var_16_object = var_13_bool; // 0x287 Mov
	func_2076(var_16_object); // 0x288 NEW_2
	var_25_int = 0; var_26_object = Obj(); // 0x28a PushV
	var_26_object = var_13_bool; // 0x28b Mov
	func_2142(var_25_int, var_26_object); // 0x28c NEW_2
	var_15_int = var_25_int; // 0x28d Mov
	var_61_int = 0; // 0x28f PushI
	var_62_bool = var_15_int > var_61_int; // 0x290 GT
	if(var_62_bool == 0) goto Label_668; // 0x291 JumpB
	var_63_int = 1; // 0x292 PushI
	var_64_bool = var_15_int > var_63_int; // 0x293 GT
	if(var_64_bool == 0) goto Label_664; // 0x294 JumpB
	func_860(var_14_int, var_15_int); // 0x296 NEW_2
	
Label_664:
	var_65_object = Obj(); // 0x298 PushV
	var_65_object = var_13_bool; // 0x299 Mov
	func_2152(var_65_object); // 0x29a NEW_2
	
Label_668:
	return 2; // 0x29c Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0; // 0x29d PushV
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0; // 0x29e PushV
	var_19_object = var_13_object; // 0x29f Mov
	var_20_object = var_14_cvector; // 0x2a0 Mov
	var_21_bool = var_15_bool; // 0x2a1 Mov
	func_2240(var_21_bool); // 0x2a2 NEW_2
	if(var_18_bool == 0) goto Label_696; // 0x2a4 JumpB
	var_22_int = 0; var_23_object = Obj(); var_24_bool = 0; // 0x2a5 PushV
	var_23_object = var_13_object; // 0x2a6 Mov
	var_24_bool = var_15_bool; // 0x2a7 Mov
	func_2160(var_23_object, var_24_bool); // 0x2a8 NEW_2
	var_17_int = var_22_int; // 0x2a9 Mov
	var_59_int = 0; // 0x2ab PushI
	var_60_bool = var_17_int > var_59_int; // 0x2ac GT
	if(var_60_bool == 0) goto Label_696; // 0x2ad JumpB
	var_61_int = 1; // 0x2ae PushI
	var_62_bool = var_17_int > var_61_int; // 0x2af GT
	if(var_62_bool == 0) goto Label_692; // 0x2b0 JumpB
	func_860(var_16_int, var_17_int); // 0x2b2 NEW_2
	
Label_692:
	var_63_object = Obj(); // 0x2b4 PushV
	var_63_object = var_13_object; // 0x2b5 Mov
	func_2170(var_63_object); // 0x2b6 NEW_2
	
Label_696:
	return 2; // 0x2b8 Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0x2b9 PushV
	var_16_int = 0; var_17_object = Obj(); // 0x2ba PushV
	var_17_object = var_13_bool; // 0x2bb Mov
	func_2178(var_17_object); // 0x2bc NEW_2
	var_15_int = var_16_int; // 0x2bd Mov
	var_18_int = 0; // 0x2bf PushI
	var_19_bool = var_15_int > var_18_int; // 0x2c0 GT
	if(var_19_bool == 0) goto Label_716; // 0x2c1 JumpB
	var_20_int = 1; // 0x2c2 PushI
	var_21_bool = var_15_int > var_20_int; // 0x2c3 GT
	if(var_21_bool == 0) goto Label_712; // 0x2c4 JumpB
	func_860(var_14_int, var_15_int); // 0x2c6 NEW_2
	
Label_712:
	var_22_object = Obj(); // 0x2c8 PushV
	var_22_object = var_13_bool; // 0x2c9 Mov
	func_2181(); // 0x2ca NEW_2
	
Label_716:
	return 2; // 0x2cc Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0x2cd PushV
	var_17_bool = 0; var_18_object = Obj(); var_19_string = ""; // 0x2ce PushV
	var_18_object = var_13_cvector; // 0x2cf Mov
	var_19_string = var_14_bool; // 0x2d0 Mov
	func_1990(var_17_bool, var_18_object, var_19_string); // 0x2d1 NEW_2
	if(var_17_bool == 0) goto Label_733; // 0x2d3 JumpB
	func_860(var_15_int, var_16_int); // 0x2d5 NEW_2
	var_32_object = Obj(); var_33_string = ""; // 0x2d7 PushV
	var_32_object = var_13_cvector; // 0x2d8 Mov
	var_33_string = var_14_bool; // 0x2d9 Mov
	func_2022(var_32_object, var_33_string); // 0x2da NEW_2
	goto Label_753; // 0x2dc Jump
	
Label_753:
	return 2; // 0x2f1 Return
	
Label_733:
	var_43_int = 0; var_44_string = ""; var_45_object = Obj(); // 0x2dd PushV
	var_44_string = var_14_bool; // 0x2de Mov
	var_45_object = var_13_cvector; // 0x2df Mov
	func_2183(var_45_object); // 0x2e0 NEW_2
	var_16_int = var_43_int; // 0x2e1 Mov
	var_46_int = 0; // 0x2e3 PushI
	var_47_bool = var_16_int > var_46_int; // 0x2e4 GT
	if(var_47_bool == 0) goto Label_753; // 0x2e5 JumpB
	var_48_int = 1; // 0x2e6 PushI
	var_49_bool = var_16_int > var_48_int; // 0x2e7 GT
	if(var_49_bool == 0) goto Label_748; // 0x2e8 JumpB
	func_860(var_15_int, var_16_int); // 0x2ea NEW_2
	
Label_748:
	var_50_string = ""; var_51_object = Obj(); // 0x2ec PushV
	var_50_string = var_14_bool; // 0x2ed Mov
	var_51_object = var_13_cvector; // 0x2ee Mov
	func_2186(); // 0x2ef NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_string = ""; // 0x2f3 PushV
	var_15_string = var_13_bool; // 0x2f4 Mov
	func_2089(var_14_bool, var_15_string); // 0x2f5 NEW_2
	if(var_14_bool == 0) goto Label_767; // 0x2f7 JumpB
	func_860(var_12_cvector, var_13_bool); // 0x2f9 NEW_2
	var_23_string = ""; // 0x2fb PushV
	var_23_string = var_13_bool; // 0x2fc Mov
	func_2105(var_23_string); // 0x2fd NEW_2
	
Label_767:
	return 0; // 0x2ff Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x301 PushV
	var_15_object = var_13_bool; // 0x302 Mov
	func_2047(var_14_bool, var_15_object); // 0x303 NEW_2
	if(var_14_bool == 0) goto Label_781; // 0x305 JumpB
	func_860(var_12_cvector, var_13_bool); // 0x307 NEW_2
	var_26_object = Obj(); // 0x309 PushV
	var_26_object = var_13_bool; // 0x30a Mov
	func_2070(var_26_object); // 0x30b NEW_2
	
Label_781:
	return 0; // 0x30d Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_860(var_11_cvector, var_12_bool); // 0x30f NEW_2
	func_2243(); // 0x312 NEW_2
	return 0; // 0x314 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	RequestClearPath(var_13_bool); // 0x356 Func
	return 0; // 0x358 Return
}


task_4_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	Stop(); // 0x359 Func
	return 0; // 0x35b Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_860(var_12_cvector, var_13_bool); // 0x365 NEW_2
	var_14_object = Obj(); // 0x367 PushV
	var_14_object = var_13_bool; // 0x368 Mov
	func_1966(); // 0x369 NEW_2
	return 0; // 0x36b Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_1074(var_12_bool); // 0x391 NEW_2
	func_2243(); // 0x394 NEW_2
	return 0; // 0x396 Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; // 0x3fe PushV
	var_22_int = 120; // 0x3ff PushI
	var_23_bool = var_13_bool != var_22_int; // 0x400 Neq
	if(var_23_bool == 0) goto Label_1027; // 0x401 JumpB
	return 8; // 0x402 Return
	
Label_1027:
	var_24_bool = var_0_object == 0; // 0x403 NullEq
	if(var_24_bool == 0) goto Label_1036; // 0x404 JumpB
	Stop(); // 0x405 Func
	var_25_int = 1; // 0x407 PushI
	KillTimer(var_25_int); // 0x408 Func
	var_2_object = 1; // 0x40a TMovB
	goto Label_1073; // 0x40b Jump
	
Label_1073:
	return 8; // 0x431 Return
	
Label_1036:
	GetDirection(var_18_cvector); // 0x40c Func
	var_26_float = 7000.0; // 0x40e PushF
	FindDirLength(var_19_float, var_18_cvector, var_26_float); // 0x40f Func
	var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x411 PushV
	var_28_float = 1.74533; // 0x412 MovF
	func_919(var_27_cvector, var_28_float); // 0x413 NEW_2
	var_20_cvector = var_27_cvector; // 0x414 Mov
	var_21_float = var_20_cvector | var_20_cvector; // 0x416 Or2
	var_57_bool = 0; // 0x417 PushV
	var_57_bool = 0; // 0x418 MovB
	var_58_float = 2500.0; // 0x419 PushF
	var_59_bool = var_21_float >= var_58_float; // 0x41a GE
	if(var_59_bool == 0) goto Label_1066; // 0x41b JumpB
	var_60_bool = 0; // 0x41c PushV
	var_60_bool = 1; // 0x41d MovB
	var_61_float = var_19_float * var_19_float; // 0x41e Mult
	var_62_float = 2.25; // 0x41f PushF
	var_63_float = var_61_float * var_62_float; // 0x420 Mult
	var_64_bool = var_21_float >= var_63_float; // 0x421 GE
	if(var_64_bool == 0) goto Label_1064; // 0x422 JumpB
	var_65_bool = 0; // 0x423 PushV
	func_1090(var_60_bool, var_65_bool); // 0x424 NEW_2
	if(var_65_bool == 0) goto Label_1064; // 0x426 JumpB
	var_60_bool = 0; // 0x427 MovB
	
Label_1064:
	if(var_60_bool == 0) goto Label_1066; // 0x428 JumpB
	var_57_bool = 1; // 0x429 MovB
	
Label_1066:
	if(var_57_bool == 0) goto Label_1073; // 0x42a JumpB
	Stop(); // 0x42b Func
	var_85_cvector = CVector(0,0,0); // 0x42d PushV
	func_1293(var_85_cvector); // 0x42e NEW_2
	var_1_object = var_85_cvector + var_20_cvector; // 0x430 Add2
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_1074(var_13_bool); // 0x43b NEW_2
	var_15_object = Obj(); // 0x43d PushV
	var_15_object = var_13_bool; // 0x43e Mov
	func_1966(); // 0x43f NEW_2
	return 0; // 0x441 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_int)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; // 0x4b9 PushV
	var_22_int = 120; // 0x4ba PushI
	var_23_bool = var_13_int != var_22_int; // 0x4bb Neq
	if(var_23_bool == 0) goto Label_1214; // 0x4bc JumpB
	return 8; // 0x4bd Return
	
Label_1214:
	var_24_bool = var_0_object == 0; // 0x4be NullEq
	if(var_24_bool == 0) goto Label_1223; // 0x4bf JumpB
	Stop(); // 0x4c0 Func
	var_25_int = 1; // 0x4c2 PushI
	KillTimer(var_25_int); // 0x4c3 Func
	var_2_object = 1; // 0x4c5 TMovB
	goto Label_1260; // 0x4c6 Jump
	
Label_1260:
	return 8; // 0x4ec Return
	
Label_1223:
	GetDirection(var_18_cvector); // 0x4c7 Func
	var_26_float = 7000.0; // 0x4c9 PushF
	FindDirLength(var_19_float, var_18_cvector, var_26_float); // 0x4ca Func
	var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x4cc PushV
	var_28_float = 1.74533; // 0x4cd MovF
	func_1106(var_27_cvector, var_28_float); // 0x4ce NEW_2
	var_20_cvector = var_27_cvector; // 0x4cf Mov
	var_21_float = var_20_cvector | var_20_cvector; // 0x4d1 Or2
	var_57_bool = 0; // 0x4d2 PushV
	var_57_bool = 0; // 0x4d3 MovB
	var_58_float = 2500.0; // 0x4d4 PushF
	var_59_bool = var_21_float >= var_58_float; // 0x4d5 GE
	if(var_59_bool == 0) goto Label_1253; // 0x4d6 JumpB
	var_60_bool = 0; // 0x4d7 PushV
	var_60_bool = 1; // 0x4d8 MovB
	var_61_float = var_19_float * var_19_float; // 0x4d9 Mult
	var_62_float = 2.25; // 0x4da PushF
	var_63_float = var_61_float * var_62_float; // 0x4db Mult
	var_64_bool = var_21_float >= var_63_float; // 0x4dc GE
	if(var_64_bool == 0) goto Label_1251; // 0x4dd JumpB
	var_65_bool = 0; // 0x4de PushV
	func_1277(var_60_bool, var_65_bool); // 0x4df NEW_2
	if(var_65_bool == 0) goto Label_1251; // 0x4e1 JumpB
	var_60_bool = 0; // 0x4e2 MovB
	
Label_1251:
	if(var_60_bool == 0) goto Label_1253; // 0x4e3 JumpB
	var_57_bool = 1; // 0x4e4 MovB
	
Label_1253:
	if(var_57_bool == 0) goto Label_1260; // 0x4e5 JumpB
	Stop(); // 0x4e6 Func
	var_85_cvector = CVector(0,0,0); // 0x4e8 PushV
	func_1293(var_85_cvector); // 0x4e9 NEW_2
	var_1_object = var_85_cvector + var_20_cvector; // 0x4eb Add2
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_1261(var_13_object); // 0x4f6 NEW_2
	var_15_object = Obj(); // 0x4f8 PushV
	var_15_object = var_13_object; // 0x4f9 Mov
	func_1966(); // 0x4fa NEW_2
	return 0; // 0x4fc Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
{
	var_15_float = 0; var_16_float = 0; // 0x7a1 PushV
	var_17_string = "health"; // 0x7a2 PushS
	var_18_bool = var_14_string == var_17_string; // 0x7a3 Eq
	if(var_18_bool == 0) goto Label_1965; // 0x7a4 JumpB
	var_19_string = "health"; // 0x7a5 PushS
	GetProperty(var_19_string, var_16_float); // 0x7a6 Func
	var_20_int = 0; // 0x7a8 PushI
	var_21_bool = var_16_float <= var_20_int; // 0x7a9 LE
	if(var_21_bool == 0) goto Label_1965; // 0x7aa JumpB
	SignalDeath(var_13_object); // 0x7ab Func
	
Label_1965:
	return 2; // 0x7ad Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_object = Obj(); // 0x7af PushV
	var_14_object = var_13_object; // 0x7b0 Mov
	func_1945(var_14_object); // 0x7b1 NEW_2
	return 0; // 0x7b3 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; // 0x7b5 PushV
	var_17_object = var_13_object; // 0x7b6 Mov
	var_18_int = var_14_int; // 0x7b7 Mov
	var_19_float = var_15_float; // 0x7b8 Mov
	func_1431(var_17_object, var_18_int, var_19_float); // 0x7b9 NEW_2
	return 0; // 0x7bb Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x7bd PushV
	var_19_object = var_13_object; // 0x7be Mov
	var_20_int = var_14_int; // 0x7bf Mov
	var_21_float = var_15_float; // 0x7c0 Mov
	var_22_cvector = var_17_cvector; // 0x7c1 Mov
	var_23_cvector = var_18_cvector; // 0x7c2 Mov
	func_1499(var_21_float, var_22_cvector, var_23_cvector); // 0x7c3 NEW_2
	return 0; // 0x7c5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_bool = 1; // 0x25a PushB
	SensePlayerOnly(var_13_bool); // 0x25b Func
	func_2227(); // 0x25e NEW_2
	func_616(); // 0x261 NEW_2
	
Label_611:
	func_789(var_11_cvector, var_12_bool); // 0x264 NEW_2
	goto Label_611; // 0x266 Jump
}


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x0 PushV
	var_0_object = var_25_object; // 0x1 TMov
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x2 PushV
	var_36_object = var_25_object; // 0x3 Mov
	var_37_float = 70.0; // 0x4 MovF
	func_1518(var_36_object, var_37_float); // 0x5 NEW_2
	var_82_bool = var_35_bool == 0; // 0x7 Not
	if(var_82_bool == 0) goto Label_11; // 0x8 JumpB
	var_24_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_31_object); // 0xb Func
	var_83_int = 0; // 0xd PushV
	func_2219(var_83_int); // 0xe NEW_2
	SetNPCName(var_83_int); // 0x10 ObjFunc
	var_84_int = 0; // 0x12 PushV
	func_2217(var_84_int); // 0x13 NEW_2
	SetNPCDescription(var_84_int); // 0x15 ObjFunc
	var_85_string = ""; // 0x17 PushV
	func_2221(var_85_string); // 0x18 NEW_2
	SetPhoto(var_85_string); // 0x1a ObjFunc
	var_86_string = ""; // 0x1c PushV
	func_2223(var_86_string); // 0x1d NEW_2
	SetPhoto2(var_86_string); // 0x1f ObjFunc
	var_87_int = 0; // 0x21 PushV
	func_1717(var_87_int); // 0x22 NEW_2
	SetPlayerName(var_87_int); // 0x24 ObjFunc
	var_33_int = -1; // 0x26 MovI
	IsOverrideActive(var_32_bool); // 0x27 Func
	var_95_bool = var_32_bool; // 0x29 Push
	if(var_95_bool == 0) goto Label_45; // 0x2a JumpB
	var_24_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_31_object); // 0x2d Func
	var_96_object = Obj(); var_97_object = Obj(); // 0x2f PushV
	var_96_object = var_25_object; // 0x30 Mov
	var_97_object = var_31_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_34_bool); // 0x36 ObjFunc
	
Label_56:
	var_145_bool = var_34_bool == 0; // 0x38 Not
	if(var_145_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_34_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_146_object = Obj(); // 0x3f PushV
	var_146_object = var_25_object; // 0x40 Mov
	func_1587(); // 0x41 NEW_2
	StopDialog(var_31_object); // 0x43 Func
	GetReturnValue(var_33_int); // 0x45 ObjFunc
	var_24_int = var_33_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_516()
{
	var_162_int = 0; var_163_int = 0; var_164_int = 0; var_165_int = 0; var_166_bool = 0; var_167_float = 0; var_168_bool = 0; var_169_int = 0; var_170_int = 0; var_171_int = 0; var_172_int = 0; var_173_bool = 0; var_174_float = 0; var_175_bool = 0; // 0x204 PushV
	WaitForAnimEnd(); // 0x205 Func
	var_176_bool = 0; // 0x207 PushV
	func_1513(var_176_bool); // 0x208 NEW_2
	var_177_bool = var_176_bool == 0; // 0x20a Not
	if(var_177_bool == 0) goto Label_525; // 0x20b JumpB
	return 14; // 0x20c Return
	
Label_525:
	var_178_int = 0; // 0x20d PushV
	func_2125(var_178_int); // 0x20e NEW_2
	var_169_int = var_178_int; // 0x20f Mov
	var_170_int = 0; // 0x211 MovI
	
Label_530:
	var_191_bool = 0; // 0x212 PushV
	var_191_bool = 0; // 0x213 MovB
	var_192_int = 5; // 0x214 PushI
	var_193_bool = var_170_int < var_192_int; // 0x215 LT
	if(var_193_bool == 0) goto Label_540; // 0x216 JumpB
	var_194_bool = 0; // 0x217 PushV
	func_1513(var_194_bool); // 0x218 NEW_2
	if(var_194_bool == 0) goto Label_540; // 0x21a JumpB
	var_191_bool = 1; // 0x21b MovB
	
Label_540:
	if(var_191_bool == 0) goto Label_592; // 0x21c JumpB
	var_195_int = 3; // 0x21d PushI
	irand(var_171_int, var_195_int); // 0x21e Func
	var_196_int = 0; // 0x220 PushI
	var_197_bool = var_171_int == var_196_int; // 0x221 Eq
	if(var_197_bool == 0) goto Label_564; // 0x222 JumpB
	var_198_int = var_169_int; // 0x223 Push
	if(var_198_int == 0) goto Label_563; // 0x224 JumpB
	irand(var_172_int, var_169_int); // 0x225 Func
	var_199_string = "all"; // 0x227 PushS
	var_200_string = ""; var_201_int = 0; // 0x228 PushV
	var_201_int = var_172_int; // 0x229 Mov
	func_2118(var_200_string, var_201_int); // 0x22a NEW_2
	PlayAnimation(var_199_string, var_200_string); // 0x22c Func
	WaitForAnimEnd(var_173_bool); // 0x22e Func
	var_202_bool = var_173_bool == 0; // 0x230 Not
	if(var_202_bool == 0) goto Label_563; // 0x231 JumpB
	goto Label_592; // 0x232 Jump
	
Label_592:
	ResetAAS(); // 0x250 Func
	return 14; // 0x252 Return
	
Label_563:
	goto Label_581; // 0x233 Jump
	
Label_581:
	var_203_bool = 0; // 0x245 PushV
	func_595(var_203_bool); // 0x246 NEW_2
	var_204_bool = var_203_bool == 0; // 0x248 Not
	if(var_204_bool == 0) goto Label_587; // 0x249 JumpB
	goto Label_592; // 0x24a Jump
	
Label_587:
	ResetAAS(); // 0x24b Func
	var_205_int = 1; // 0x24d PushI
	var_170_int = var_170_int + var_205_int; // 0x24e Add2
	goto Label_530; // 0x24f Jump
	
Label_564:
	var_206_int = 1; // 0x234 PushI
	var_207_bool = var_171_int == var_206_int; // 0x235 Eq
	if(var_207_bool == 0) goto Label_578; // 0x236 JumpB
	var_208_int = 4; // 0x237 PushI
	rand(var_174_float, var_208_int); // 0x238 Func
	var_209_int = 1; // 0x23a PushI
	var_210_int = var_174_float + var_209_int; // 0x23b Add
	Sleep(var_210_int, var_175_bool); // 0x23c Func
	var_211_bool = var_175_bool == 0; // 0x23e Not
	if(var_211_bool == 0) goto Label_577; // 0x23f JumpB
	goto Label_592; // 0x240 Jump
	
Label_577:
	goto Label_581; // 0x241 Jump
	
Label_578:
	var_212_int = var_170_int; // 0x242 Push
	if(var_212_int == 0) goto Label_581; // 0x243 JumpB
	goto Label_592; // 0x244 Jump
}


func_2070(var_26_object)
{
	var_27_object = Obj(); // 0x817 PushV
	var_27_object = var_26_object; // 0x818 Mov
	func_2200(); // 0x819 NEW_2
	return 0; // 0x81b Return
}


func_2076(var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x81d PushV
	var_18_object = var_16_object; // 0x81e Mov
	func_1305(var_17_bool, var_18_object); // 0x81f NEW_2
	if(var_17_bool == 0) goto Label_2088; // 0x821 JumpB
	var_21_object = Obj(); // 0x822 PushV
	func_1684(var_21_object); // 0x823 NEW_2
	var_24_float = -0.05; // 0x825 PushF
	ReportReputationChange(var_16_object, var_21_object, var_24_float); // 0x826 Func
	
Label_2088:
	return 0; // 0x828 Return
}


func_2089(var_14_bool, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x829 PushV
	var_18_string = "heal"; // 0x82a PushS
	var_19_bool = var_15_string == var_18_string; // 0x82b Eq
	if(var_19_bool == 0) goto Label_2103; // 0x82c JumpB
	var_20_string = "player"; // 0x82d PushS
	FindActor(var_17_object, var_20_string); // 0x82e Func
	var_21_bool = 0; var_22_object = Obj(); // 0x830 PushV
	var_22_object = var_17_object; // 0x831 Mov
	func_2212(var_22_object); // 0x832 NEW_2
	var_14_bool = var_21_bool; // 0x833 Mov
	return 2; // 0x835 Return
	
Label_2103:
	var_14_bool = 0; // 0x837 MovB
	return 2; // 0x838 Return
}


func_1074(var_2_object)
{
	Stop(); // 0x432 Func
	var_14_int = 120; // 0x434 PushI
	KillTimer(var_14_int); // 0x435 Func
	var_2_object = 1; // 0x437 TMovB
	return 0; // 0x438 Return
}


func_1587()
{
	var_147_bool = 0; var_148_bool = 0; // 0x633 PushV
	var_149_bool = 1; // 0x634 PushB
	CameraSwitchToNormal(var_149_bool); // 0x635 Func
	var_150_bool = 0; // 0x637 PushV
	func_2225(var_150_bool); // 0x638 NEW_2
	if(var_150_bool == 0) goto Label_1596; // 0x63a JumpB
	goto Label_1604; // 0x63b Jump
	
Label_1604:
	return 2; // 0x644 Return
	
Label_1596:
	var_151_string = "head"; // 0x63c PushS
	HasAnimationTrack(var_148_bool, var_151_string); // 0x63d Func
	var_152_bool = var_148_bool; // 0x63f Push
	if(var_152_bool == 0) goto Label_1604; // 0x640 JumpB
	var_153_string = "head"; // 0x641 PushS
	UnlookAsync(var_153_string); // 0x642 Func
}


func_2105(var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x839 PushV
	var_26_string = "heal"; // 0x83a PushS
	var_27_bool = var_23_string == var_26_string; // 0x83b Eq
	if(var_27_bool == 0) goto Label_2117; // 0x83c JumpB
	var_28_string = "player"; // 0x83d PushS
	FindActor(var_25_object, var_28_string); // 0x83e Func
	var_29_object = Obj(); // 0x840 PushV
	var_29_object = var_25_object; // 0x841 Mov
	func_2215(); // 0x842 NEW_2
	var_25_object = 0; // 0x844 SetNull
	
Label_2117:
	return 2; // 0x845 Return
}


func_1090(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x442 PushV
	GetDirection(var_68_cvector); // 0x443 Func
	var_70_cvector = CVector(0,0,0); var_71_object = Obj(); // 0x445 PushV
	var_71_object = var_0_object; // 0x446 MovT
	func_1298(var_71_object); // 0x447 NEW_2
	var_69_cvector = var_70_cvector; // 0x448 Mov
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x44a PushV
	var_77_cvector = var_68_cvector; // 0x44b Mov
	var_78_cvector = var_69_cvector; // 0x44c Mov
	func_1700(var_76_float, var_77_cvector, var_78_cvector); // 0x44d NEW_2
	var_84_float = -0.34202; // 0x44f PushF
	var_65_bool = var_76_float >= var_84_float; // 0x450 GE2
	return 4; // 0x451 Return
}


func_1605(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x645 PushV
	lshHasAnimation(var_133_bool, var_129_string); // 0x646 Func
	var_136_bool = var_133_bool; // 0x648 Push
	if(var_136_bool == 0) goto Label_1616; // 0x649 JumpB
	lshGetAnimTimes(var_129_string, var_134_float, var_135_float); // 0x64a Func
	var_137_bool = 0; // 0x64c PushB
	lshPlayAnimation(var_134_float, var_135_float, var_137_bool); // 0x64d Func
	goto Label_1620; // 0x64f Jump
	
Label_1620:
	return 6; // 0x654 Return
	
Label_1616:
	var_138_string = "Can't find lsh animation : "; // 0x650 PushS
	var_139_int = var_138_string + var_129_string; // 0x651 Add
	Trace(var_139_int); // 0x652 Func
}


func_2118(var_184_string, var_185_int)
{
	var_186_string = ""; var_187_string = ""; // 0x846 PushV
	var_187_string = "idle"; // 0x847 MovS
	var_188_int = var_185_int; // 0x848 Push
	if(var_188_int == 0) goto Label_2123; // 0x849 JumpB
	var_187_string = var_187_string + var_185_int; // 0x84a Add2
	
Label_2123:
	var_184_string = var_187_string; // 0x84b Mov
	return 2; // 0x84c Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_96_object, var_97_object)
{
	var_0_object = var_97_object; // 0x4b TMov
	var_1_object = var_96_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_102_int = 1; // 0x4e PushI
	if(var_102_int == 0) goto Label_102; // 0x4f JumpB
	var_103_string = ""; // 0x50 PushV
	var_103_string = "Neutral"; // 0x51 MovS
	func_132(var_97_object, var_103_string); // 0x52 NEW_2
	var_120_int = 518110; // 0x54 PushI
	SetMessage(var_120_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_121_int = 518111; // 0x59 PushI
	var_122_int = -1; // 0x5a PushI
	var_123_int = 19230; // 0x5b PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x5c TObjFunc
	var_124_int = 534585; // 0x5e PushI
	var_125_int = -1; // 0x5f PushI
	var_126_int = 36223; // 0x60 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_127_bool = 0; // 0x66 PushV
	func_2225(var_127_bool); // 0x67 NEW_2
	if(var_127_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_128_string = var_3_string; // 0x6c PushT
	if(var_128_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_129_string = ""; // 0x6f PushV
	var_129_string = var_2_object; // 0x70 MovT
	func_1605(var_129_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_140_string = "all"; // 0x75 PushS
	var_141_string = "idle"; // 0x76 PushS
	PlayAnimation(var_140_string, var_141_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_142_string = var_3_string; // 0x7b PushT
	if(var_142_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_143_string = "all"; // 0x7e PushS
	var_144_string = "idle"; // 0x7f PushS
	PlayAnimation(var_143_string, var_144_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_2125(var_178_int)
{
	var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_bool = 0; // 0x84d PushV
	var_181_int = 0; // 0x84e MovI
	
Label_2127:
	var_183_string = "all"; // 0x84f PushS
	var_184_string = ""; var_185_int = 0; // 0x850 PushV
	var_185_int = var_181_int; // 0x851 Mov
	func_2118(var_184_string, var_185_int); // 0x852 NEW_2
	HasAnimation(var_182_bool, var_183_string, var_184_string); // 0x854 Func
	var_189_bool = var_182_bool == 0; // 0x856 Not
	if(var_189_bool == 0) goto Label_2137; // 0x857 JumpB
	goto Label_2140; // 0x858 Jump
	
Label_2140:
	var_178_int = var_181_int; // 0x85c Mov
	return 4; // 0x85d Return
	
Label_2137:
	var_190_int = 1; // 0x859 PushI
	var_181_int = var_181_int + var_190_int; // 0x85a Add2
	goto Label_2127; // 0x85b Jump
}


func_1106(var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; // 0x452 PushV
	GetPosition(var_35_cvector); // 0x453 Func
	GetPosition(var_36_cvector); // 0x455 TObjFunc
	GetDirection(var_37_cvector); // 0x457 Func
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x459 PushV
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x45a PushV
	var_44_cvector = var_35_cvector - var_36_cvector; // 0x45b Sub2
	func_1690(var_43_cvector, var_44_cvector); // 0x45c NEW_2
	var_50_float = 0.75; // 0x45e PushF
	var_51_float = var_37_cvector * var_50_float; // 0x45f Mult
	var_42_cvector = var_43_cvector + var_51_float; // 0x460 Add2
	func_1690(var_41_cvector, var_42_cvector); // 0x461 NEW_2
	var_38_cvector = var_41_cvector; // 0x462 Mov
	var_52_int = 32; // 0x464 PushI
	var_53_float = 7000.0; // 0x465 PushF
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, var_52_int, var_53_float); // 0x466 Func
	var_54_int = 100; // 0x468 PushI
	var_40_float = var_40_float - var_54_int; // 0x469 Sub2
	var_55_int = 0; // 0x46a PushI
	var_56_bool = var_40_float < var_55_int; // 0x46b LT
	if(var_56_bool == 0) goto Label_1134; // 0x46c JumpB
	var_40_float = 0; // 0x46d MovI
	
Label_1134:
	var_27_cvector = var_39_cvector * var_40_float; // 0x46e Mult2
	return 12; // 0x46f Return
}


func_595(var_203_bool)
{
	var_203_bool = 1; // 0x253 MovB
	return 0; // 0x254 Return
}


func_1621(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0; // 0x655 PushV
	lshHasAnimation(var_114_bool, var_107_string); // 0x656 Func
	var_117_bool = var_114_bool; // 0x658 Push
	if(var_117_bool == 0) goto Label_1631; // 0x659 JumpB
	lshGetAnimTimes(var_107_string, var_115_float, var_116_float); // 0x65a Func
	lshPlayAnimation(var_115_float, var_116_float, var_108_bool); // 0x65c Func
	goto Label_1635; // 0x65e Jump
	
Label_1635:
	return 6; // 0x663 Return
	
Label_1631:
	var_118_string = "Can't find lsh animation : "; // 0x65f PushS
	var_119_int = var_118_string + var_107_string; // 0x660 Add
	Trace(var_119_int); // 0x661 Func
}


func_597()
{
	StopAnimation(); // 0x255 Func
	StopGroup0(); // 0x257 Func
	return 0; // 0x259 Return
}


func_2142(var_25_int, var_26_object)
{
	var_27_bool = 0; var_28_object = Obj(); // 0x85f PushV
	var_28_object = var_26_object; // 0x860 Mov
	func_1363(var_27_bool, var_28_object); // 0x861 NEW_2
	if(var_27_bool == 0) goto Label_2150; // 0x863 JumpB
	var_25_int = 2; // 0x864 MovI
	goto Label_2151; // 0x865 Jump
	
Label_2151:
	return 0; // 0x867 Return
	
Label_2150:
	var_25_int = 0; // 0x866 MovI
}


func_1636()
{
	var_16_bool = 0; // 0x664 PushV
	func_2225(var_16_bool); // 0x665 NEW_2
	if(var_16_bool == 0) goto Label_1642; // 0x667 JumpB
	lshStopSpeech(); // 0x668 Func
	
Label_1642:
	return 0; // 0x66a Return
}


func_2152(var_65_object)
{
	var_66_object = Obj(); // 0x869 PushV
	var_66_object = var_65_object; // 0x86a Mov
	TaskCall(5); // 0x86b TaskCall
	func_884(var_66_object); // 0x86c NEW_2
	TaskReturn(); // 0x86d TaskReturn
	return 0; // 0x86f Return
}


func_616()
{
	var_128_bool = 0; // 0x268 PushV
	func_1513(var_128_bool); // 0x269 NEW_2
	var_131_bool = var_128_bool == 0; // 0x26b Not
	if(var_131_bool == 0) goto Label_624; // 0x26c JumpB
	func_2243(); // 0x26e NEW_2
	
Label_624:
	return 0; // 0x270 Return
}


func_1643(var_39_string)
{
	var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x66b PushV
	IsExisting3DSound(var_48_bool, var_39_string); // 0x66c Func
	var_56_bool = var_48_bool == 0; // 0x66e Not
	if(var_56_bool == 0) goto Label_1668; // 0x66f JumpB
	var_49_int = 0; // 0x670 MovI
	
Label_1649:
	var_57_int = 1; // 0x671 PushI
	var_58_int = var_49_int + var_57_int; // 0x672 Add
	var_59_int = var_39_string + var_58_int; // 0x673 Add
	IsExisting3DSound(var_50_bool, var_59_int); // 0x674 Func
	var_60_bool = var_50_bool == 0; // 0x676 Not
	if(var_60_bool == 0) goto Label_1657; // 0x677 JumpB
	goto Label_1660; // 0x678 Jump
	
Label_1660:
	var_61_bool = var_49_int == 0; // 0x67c Not
	if(var_61_bool == 0) goto Label_1663; // 0x67d JumpB
	return 16; // 0x67e Return
	
Label_1663:
	irand(var_51_int, var_49_int); // 0x67f Func
	var_62_int = 1; // 0x681 PushI
	var_63_int = var_51_int + var_62_int; // 0x682 Add
	var_39_string = var_39_string + var_63_int; // 0x683 Add2
	
Label_1668:
	Is3DSoundLoaded(var_52_bool, var_39_string); // 0x684 Func
	var_64_bool = var_52_bool; // 0x686 Push
	if(var_64_bool == 0) goto Label_1683; // 0x687 JumpB
	GetEyesHeight(var_53_float); // 0x688 Func
	GetDirection(var_54_cvector); // 0x68a Func
	var_65_int = 50; // 0x68c PushI
	var_55_cvector = var_54_cvector * var_65_int; // 0x68d Mult2
	var_66_float = GetByIndex(var_55_cvector, 1); // 0x68e PushE
	var_66_float = var_66_float + var_53_float; // 0x68f Add2
	SetByIndex(var_55_cvector, 1) = var_66_float; // 0x690 PopE
	PlayGlobalSound(var_39_string, var_55_cvector); // 0x691 Func
	
Label_1683:
	return 16; // 0x693 Return
	
Label_1657:
	var_67_int = 1; // 0x679 PushI
	var_49_int = var_49_int + var_67_int; // 0x67a Add2
	goto Label_1649; // 0x67b Jump
}


func_2160(var_22_int, var_23_object)
{
	var_25_bool = 0; var_26_object = Obj(); // 0x871 PushV
	var_26_object = var_23_object; // 0x872 Mov
	func_1363(var_25_bool, var_26_object); // 0x873 NEW_2
	if(var_25_bool == 0) goto Label_2168; // 0x875 JumpB
	var_22_int = 2; // 0x876 MovI
	goto Label_2169; // 0x877 Jump
	
Label_2169:
	return 0; // 0x879 Return
	
Label_2168:
	var_22_int = 0; // 0x878 MovI
}


func_1136(var_0_object, var_1_object, var_2_object, var_64_object)
{
	var_68_cvector = CVector(0,0,0); var_69_float = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_float = 0; var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_float = 0; // 0x470 PushV
	var_0_object = var_64_object; // 0x471 TMov
	var_78_cvector = CVector(0,0,0); var_79_float = 0; // 0x472 PushV
	var_79_float = 1.74533; // 0x473 MovF
	func_1106(var_78_cvector, var_79_float); // 0x474 NEW_2
	var_73_cvector = var_78_cvector; // 0x475 Mov
	var_74_float = var_73_cvector | var_73_cvector; // 0x477 Or2
	var_108_float = 2500.0; // 0x478 PushF
	var_109_bool = var_74_float < var_108_float; // 0x479 LT
	if(var_109_bool == 0) goto Label_1165; // 0x47a JumpB
	var_110_cvector = CVector(0,0,0); var_111_float = 0; // 0x47b PushV
	var_111_float = 2.61799; // 0x47c MovF
	func_1106(var_110_cvector, var_111_float); // 0x47d NEW_2
	var_73_cvector = var_110_cvector; // 0x47e Mov
	var_74_float = var_73_cvector | var_73_cvector; // 0x480 Or2
	var_112_float = 2500.0; // 0x481 PushF
	var_113_bool = var_74_float < var_112_float; // 0x482 LT
	if(var_113_bool == 0) goto Label_1165; // 0x483 JumpB
	var_114_string = "Can't retreat, distance: "; // 0x484 PushS
	var_115_float = sqrt(var_74_float); // 0x485 Sqrt
	var_116_int = var_114_string + var_115_float; // 0x486 Add
	Trace(var_116_int); // 0x487 Func
	var_117_float = 0.5; // 0x489 PushF
	Sleep(var_117_float); // 0x48a Func
	return 10; // 0x48c Return
	
Label_1165:
	var_118_float = GetByIndex(var_73_cvector, 0); // 0x48d PushE
	var_119_float = GetByIndex(var_73_cvector, 2); // 0x48e PushE
	Rotate(var_118_float, var_119_float); // 0x48f Func
	var_120_cvector = CVector(0,0,0); // 0x491 PushV
	func_1293(var_120_cvector); // 0x492 NEW_2
	var_1_object = var_120_cvector + var_73_cvector; // 0x494 Add2
	var_123_int = 120; // 0x495 PushI
	var_124_float = 0.5; // 0x496 PushF
	SetTimer(var_123_int, var_124_float); // 0x497 Func
	var_2_object = 0; // 0x499 TMovB
	
Label_1178:
	var_125_int = 1; // 0x49a PushI
	MovePoint(var_125_int, var_125_int, var_75_bool); // 0x49b Func
	var_126_bool = var_75_bool; // 0x49d Push
	if(var_126_bool == 0) goto Label_1206; // 0x49e JumpB
	var_127_bool = var_0_object == 0; // 0x49f NullEq
	if(var_127_bool == 0) goto Label_1187; // 0x4a0 JumpB
	goto Label_1208; // 0x4a1 Jump
	
Label_1208:
	return 10; // 0x4b8 Return
	
Label_1187:
	var_128_cvector = CVector(0,0,0); var_129_float = 0; // 0x4a3 PushV
	var_129_float = 2.61799; // 0x4a4 MovF
	func_1106(var_128_cvector, var_129_float); // 0x4a5 NEW_2
	var_76_cvector = var_128_cvector; // 0x4a6 Mov
	var_77_float = var_76_cvector | var_76_cvector; // 0x4a8 Or2
	var_130_float = 2500.0; // 0x4a9 PushF
	var_131_bool = var_77_float >= var_130_float; // 0x4aa GE
	if(var_131_bool == 0) goto Label_1205; // 0x4ab JumpB
	var_132_cvector = CVector(0,0,0); // 0x4ac PushV
	func_1293(var_132_cvector); // 0x4ad NEW_2
	var_1_object = var_132_cvector + var_76_cvector; // 0x4af Add2
	var_133_int = 120; // 0x4b0 PushI
	var_134_float = 0.5; // 0x4b1 PushF
	SetTimer(var_133_int, var_134_float); // 0x4b2 Func
	goto Label_1206; // 0x4b4 Jump
	
Label_1206:
	var_135_bool = var_2_object == 0; // 0x4b6 Not
	if(var_135_bool == 0) goto Label_1178; // 0x4b7 JumpB
	
Label_1205:
	goto Label_1208; // 0x4b5 Jump
}


func_2170(var_63_object)
{
	var_64_object = Obj(); // 0x87b PushV
	var_64_object = var_63_object; // 0x87c Mov
	TaskCall(6); // 0x87d TaskCall
	func_1136(var_65_object, var_66_cvector, var_67_bool, var_64_object); // 0x87e NEW_2
	TaskReturn(); // 0x87f TaskReturn
	return 0; // 0x881 Return
}


func_2178(var_16_int)
{
	var_16_int = 0; // 0x883 MovI
	return 0; // 0x884 Return
}


func_132(var_2_object, var_103_string)
{
	var_104_bool = 0; // 0x85 PushV
	func_2225(var_104_bool); // 0x86 NEW_2
	var_105_bool = var_104_bool == 0; // 0x88 Not
	if(var_105_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_106_bool = var_103_string == var_2_object; // 0x8b Eq
	if(var_106_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_107_string = ""; var_108_bool = 0; // 0x8e PushV
	var_107_string = var_103_string; // 0x8f Mov
	var_109_string = ""; // 0x90 PushS
	var_110_bool = var_103_string == var_109_string; // 0x91 Eq
	if(var_110_bool == 0) goto Label_149; // 0x92 JumpB
	var_108_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1621(var_107_string, var_108_bool); // 0x96 NEW_2
	var_2_object = var_103_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_108_bool = 1; // 0x95 MovB
}


func_2181()
{
	return 0; // 0x886 Return
}


func_2183(var_43_int)
{
	var_43_int = 0; // 0x888 MovI
	return 0; // 0x889 Return
}


func_2186()
{
	return 0; // 0x88b Return
}


func_2188(var_16_int)
{
	var_16_int = 2; // 0x88d MovI
	return 0; // 0x88e Return
}


func_2191(var_22_object)
{
	var_23_object = Obj(); // 0x890 PushV
	var_23_object = var_22_object; // 0x891 Mov
	func_2232(var_23_object); // 0x892 NEW_2
	return 0; // 0x894 Return
}


func_1684(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0x694 PushV
	self(var_134_object); // 0x695 Func
	var_132_object = var_134_object; // 0x697 Mov
	return 2; // 0x698 Return
}


func_2197(var_19_bool)
{
	var_19_bool = 0; // 0x896 MovB
	return 0; // 0x897 Return
}


func_2200()
{
	return 0; // 0x899 Return
}


func_1690(var_45_cvector, var_46_cvector)
{
	var_53_float = 0; var_54_float = 0; // 0x69a PushV
	var_55_int = var_46_cvector | var_46_cvector; // 0x69b Or
	var_54_float = sqrt(var_55_int); // 0x69c Sqrt2
	var_56_float = 0.0; // 0x69d PushF
	var_57_bool = var_54_float < var_56_float; // 0x69e LT
	if(var_57_bool == 0) goto Label_1698; // 0x69f JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x6a0 MovV
	return 2; // 0x6a1 Return
	
Label_1698:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x6a2 Div2
	return 2; // 0x6a3 Return
}


func_2202(var_26_bool)
{
	var_26_bool = 0; // 0x89b MovB
	return 0; // 0x89c Return
}


func_2205()
{
	return 0; // 0x89e Return
}


func_2207(var_30_bool)
{
	var_30_bool = 0; // 0x8a0 MovB
	return 0; // 0x8a1 Return
}


func_2210()
{
	return 0; // 0x8a3 Return
}


func_1700(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector; // 0x6a5 Or
	var_80_int = var_77_cvector | var_77_cvector; // 0x6a6 Or
	var_81_int = var_78_cvector | var_78_cvector; // 0x6a7 Or
	var_82_float = var_80_int * var_81_int; // 0x6a8 Mult
	var_83_float = sqrt(var_82_float); // 0x6a9 Sqrt
	var_76_float = var_79_int / var_79_int; // 0x6aa Div2
	return 0; // 0x6ab Return
}


func_2212(var_21_bool)
{
	var_21_bool = 0; // 0x8a5 MovB
	return 0; // 0x8a6 Return
}


func_2215()
{
	return 0; // 0x8a8 Return
}


func_2217(var_84_int)
{
	var_84_int = 515567; // 0x8a9 MovI
	return 0; // 0x8aa Return
}


func_2219(var_83_int)
{
	var_83_int = 503352; // 0x8ab MovI
	return 0; // 0x8ac Return
}


func_1708(var_23_int)
{
	var_24_float = 0; var_25_float = 0; // 0x6ac PushV
	GetGameTime(var_25_float); // 0x6ad Func
	var_26_int = 1; // 0x6af PushI
	var_27_int = 0; // 0x6b0 PushV
	var_28_int = 24; // 0x6b1 PushI
	var_27_int = var_25_float / var_25_float; // 0x6b2 Div2
	var_23_int = var_26_int + var_27_int; // 0x6b3 Add2
	return 2; // 0x6b4 Return
}


func_2221(var_85_string)
{
	var_85_string = "ui/NPC_Citizen3.png"; // 0x8ad MovS
	return 0; // 0x8ae Return
}


func_2223(var_86_string)
{
	var_86_string = "ui/NPC_Citizen3_b.png"; // 0x8af MovS
	return 0; // 0x8b0 Return
}


func_2225(var_78_bool)
{
	var_78_bool = 0; // 0x8b1 MovB
	return 0; // 0x8b2 Return
}


func_2227()
{
	var_14_bool = 0; // 0x8b3 PushV
	var_14_bool = 1; // 0x8b4 MovB
	func_1765(var_14_bool); // 0x8b5 NEW_2
	return 0; // 0x8b7 Return
}


func_1717(var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x6b5 PushV
	var_90_string = "branch"; // 0x6b6 PushS
	GetVariable(var_90_string, var_89_int); // 0x6b7 Func
	var_91_int = 0; // 0x6b9 PushI
	var_92_bool = var_89_int == var_91_int; // 0x6ba Eq
	if(var_92_bool == 0) goto Label_1727; // 0x6bb JumpB
	var_87_int = 1; // 0x6bc MovI
	return 2; // 0x6bd Return
	
Label_1727:
	var_93_int = 1; // 0x6bf PushI
	var_94_bool = var_89_int == var_93_int; // 0x6c0 Eq
	if(var_94_bool == 0) goto Label_1732; // 0x6c1 JumpB
	var_87_int = 2; // 0x6c2 MovI
	return 2; // 0x6c3 Return
	
Label_1732:
	var_87_int = 3; // 0x6c4 MovI
	return 2; // 0x6c5 Return
}


func_2232(var_23_object)
{
	var_24_int = 0; var_25_object = Obj(); // 0x8b9 PushV
	var_25_object = var_23_object; // 0x8ba Mov
	TaskCall(0); // 0x8bb TaskCall
	func_0(var_26_object, var_24_int, var_25_object); // 0x8bc NEW_2
	TaskReturn(); // 0x8bd TaskReturn
	return 0; // 0x8bf Return
}


func_2240(var_18_bool)
{
	var_18_bool = 1; // 0x8c1 MovB
	return 0; // 0x8c2 Return
}


func_2243()
{
	var_132_object = Obj(); // 0x8c3 PushV
	func_1684(var_132_object); // 0x8c4 NEW_2
	RemoveActor(var_132_object); // 0x8c6 Func
	Hold(); // 0x8c8 Func
	return 0; // 0x8ca Return
}


func_196(var_15_object)
{
	EventDisable(0); // 0xc5 EventDisable
	var_16_object = Obj(); // 0xc6 PushV
	var_16_object = var_15_object; // 0xc7 Mov
	func_229(var_16_object); // 0xc8 NEW_2
	var_96_object = Obj(); // 0xca PushV
	var_96_object = var_15_object; // 0xcb Mov
	func_2251(); // 0xcc NEW_2
	EventEnable(0); // 0xce EventEnable
	
Label_207:
	Hold(); // 0xcf Func
	goto Label_207; // 0xd1 Jump
}


func_1734(var_20_int, var_21_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x6c6 PushV
	var_35_bool = var_20_int > var_21_int; // 0x6c7 GT
	if(var_35_bool == 0) goto Label_1741; // 0x6c8 JumpB
	var_36_string = "GenerateMoney: iMin > iMax"; // 0x6c9 PushS
	Trace(var_36_string); // 0x6ca Func
	return 4; // 0x6cc Return
	
Label_1741:
	var_33_int = 0; // 0x6cd MovI
	var_37_bool = var_20_int != var_21_int; // 0x6ce Neq
	if(var_37_bool == 0) goto Label_1748; // 0x6cf JumpB
	var_38_int = var_21_int - var_20_int; // 0x6d0 Sub
	irand(var_33_int, var_38_int); // 0x6d1 Func
	goto Label_1752; // 0x6d3 Jump
	
Label_1752:
	var_33_int = var_33_int + var_20_int; // 0x6d8 Add2
	var_39_int = 0; // 0x6d9 PushI
	var_40_bool = var_33_int == var_39_int; // 0x6da Eq
	if(var_40_bool == 0) goto Label_1757; // 0x6db JumpB
	return 4; // 0x6dc Return
	
Label_1757:
	var_41_int = 0; var_42_string = ""; // 0x6dd PushV
	var_42_string = "Money"; // 0x6de MovS
	func_1940(var_41_int, var_42_string); // 0x6df NEW_2
	var_45_int = 0; // 0x6e1 PushI
	AddItem(var_34_bool, var_41_int, var_45_int, var_33_int); // 0x6e2 Func
	return 4; // 0x6e4 Return
	
Label_1748:
	var_46_int = 0; // 0x6d4 PushI
	var_47_bool = var_20_int == var_46_int; // 0x6d5 Eq
	if(var_47_bool == 0) goto Label_1752; // 0x6d6 JumpB
	return 4; // 0x6d7 Return
}


func_2251()
{
	return 0; // 0x8cc Return
}


func_229(var_16_object)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); // 0xe5 PushV
	var_37_bool = var_16_object == 0; // 0xe6 NullEq
	if(var_37_bool == 0) goto Label_237; // 0xe7 JumpB
	var_38_string = ""; // 0xe8 PushV
	var_38_string = "fdie"; // 0xe9 MovS
	func_320(var_38_string); // 0xea NEW_2
	goto Label_319; // 0xec Jump
	
Label_319:
	return 20; // 0x13f Return
	
Label_237:
	GetPosition(var_27_cvector); // 0xed ObjFunc
	GetPosition(var_28_cvector); // 0xef Func
	GetDirection(var_29_cvector); // 0xf1 Func
	var_30_cvector = var_28_cvector - var_27_cvector; // 0xf3 Sub2
	var_70_float = GetByIndex(var_30_cvector, 0); // 0xf4 PushE
	var_71_float = GetByIndex(var_29_cvector, 0); // 0xf5 PushE
	var_72_float = var_70_float * var_71_float; // 0xf6 Mult
	var_73_float = GetByIndex(var_30_cvector, 2); // 0xf7 PushE
	var_74_float = GetByIndex(var_29_cvector, 2); // 0xf8 PushE
	var_75_float = var_73_float * var_74_float; // 0xf9 Mult
	var_76_int = var_72_float + var_75_float; // 0xfa Add
	var_77_int = 0; // 0xfb PushI
	var_78_bool = var_76_int >= var_77_int; // 0xfc GE
	if(var_78_bool == 0) goto Label_256; // 0xfd JumpB
	var_31_string = "fdie"; // 0xfe MovS
	goto Label_257; // 0xff Jump
	
Label_257:
	RemoveRTEnvelope(); // 0x101 Func
	SetDeathState(); // 0x103 Func
	Stop(); // 0x105 Func
	StopAsync(); // 0x107 Func
	var_32_object = var_16_object; // 0x109 Mov
	var_79_string = "GetScriptProperty"; // 0x10a PushS
	var_80_int = 2; // 0x10b PushI
	var_81_bool = IsFuncExist(var_16_object, var_79_string, var_80_int); // 0x10c FuncExist
	if(var_81_bool == 0) goto Label_281; // 0x10d JumpB
	var_82_string = "Owner"; // 0x10e PushS
	HasScriptProperty(var_33_bool, var_82_string); // 0x10f ObjFunc
	var_83_bool = var_33_bool; // 0x111 Push
	if(var_83_bool == 0) goto Label_281; // 0x112 JumpB
	var_84_string = "Owner"; // 0x113 PushS
	GetScriptProperty(var_32_object, var_84_string); // 0x114 ObjFunc
	var_85_bool = var_32_object == 0; // 0x116 NullEq
	if(var_85_bool == 0) goto Label_281; // 0x117 JumpB
	var_32_object = var_16_object; // 0x118 Mov
	
Label_281:
	var_86_string = "@GetEyesHeight"; // 0x119 PushS
	var_87_int = 1; // 0x11a PushI
	var_88_bool = IsFuncExist(var_32_object, var_86_string, var_87_int); // 0x11b FuncExist
	if(var_88_bool == 0) goto Label_296; // 0x11c JumpB
	GetEyesHeight(var_35_float); // 0x11d ObjFunc
	var_36_cvector = CVector(0.0, 0.0, 0.0); // 0x11f MovV
	var_89_float = GetByIndex(var_36_cvector, 1); // 0x120 PushE
	var_89_float = var_35_float; // 0x121 Mov
	SetByIndex(var_36_cvector, 1) = var_89_float; // 0x122 PopE
	var_90_string = "head"; // 0x123 PushS
	LookAsync(var_16_object, var_90_string, var_36_cvector); // 0x124 Func
	var_34_bool = 1; // 0x126 MovB
	goto Label_297; // 0x127 Jump
	
Label_297:
	var_91_string = ""; // 0x129 PushV
	var_91_string = var_31_string; // 0x12a Mov
	func_1643(var_91_string); // 0x12b NEW_2
	var_92_string = "all"; // 0x12d PushS
	PlayAnimation(var_92_string, var_31_string); // 0x12e Func
	WaitForAnimEnd(); // 0x130 Func
	var_93_bool = var_34_bool; // 0x132 Push
	if(var_93_bool == 0) goto Label_313; // 0x133 JumpB
	StopAsync(); // 0x134 Func
	var_94_string = "head"; // 0x136 PushS
	UnlookAsync(var_94_string); // 0x137 Func
	
Label_313:
	var_95_string = "all"; // 0x139 PushS
	LockAnimationEnd(var_95_string, var_31_string); // 0x13a Func
	RemoveEnvelope(); // 0x13c Func
	var_32_object = 0; // 0x13e SetNull
	
Label_296:
	var_34_bool = 0; // 0x128 MovB
	
Label_256:
	var_31_string = "bdie"; // 0x100 MovS
}


func_1765(var_14_bool)
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x6e5 PushV
	var_19_bool = var_14_bool; // 0x6e6 Push
	if(var_19_bool == 0) goto Label_1854; // 0x6e7 JumpB
	var_20_int = 0; var_21_int = 0; // 0x6e8 PushV
	var_20_int = 0; // 0x6e9 MovI
	var_22_int = 100; // 0x6ea PushI
	var_23_int = 0; // 0x6eb PushV
	func_1708(var_23_int); // 0x6ec NEW_2
	var_29_int = 100; // 0x6ee PushI
	var_30_float = var_23_int * var_29_int; // 0x6ef Mult
	var_21_int = var_22_int + var_30_float; // 0x6f0 Add2
	func_1734(var_20_int, var_21_int); // 0x6f1 NEW_2
	var_48_int = 8; // 0x6f3 PushI
	irand(var_17_int, var_48_int); // 0x6f4 Func
	var_49_int = 0; // 0x6f6 PushI
	var_50_bool = var_17_int == var_49_int; // 0x6f7 Eq
	if(var_50_bool == 0) goto Label_1794; // 0x6f8 JumpB
	var_51_int = 0; var_52_string = ""; // 0x6f9 PushV
	var_52_string = "lemon"; // 0x6fa MovS
	func_1940(var_51_int, var_52_string); // 0x6fb NEW_2
	var_53_int = 0; // 0x6fd PushI
	var_54_int = 1; // 0x6fe PushI
	AddItem(var_18_bool, var_51_int, var_53_int, var_54_int); // 0x6ff Func
	goto Label_1853; // 0x701 Jump
	
Label_1853:
	goto Label_1939; // 0x73d Jump
	
Label_1939:
	return 4; // 0x793 Return
	
Label_1794:
	var_55_int = 1; // 0x702 PushI
	var_56_bool = var_17_int == var_55_int; // 0x703 Eq
	if(var_56_bool == 0) goto Label_1806; // 0x704 JumpB
	var_57_int = 0; var_58_string = ""; // 0x705 PushV
	var_58_string = "rusk"; // 0x706 MovS
	func_1940(var_57_int, var_58_string); // 0x707 NEW_2
	var_59_int = 0; // 0x709 PushI
	var_60_int = 1; // 0x70a PushI
	AddItem(var_18_bool, var_57_int, var_59_int, var_60_int); // 0x70b Func
	goto Label_1853; // 0x70d Jump
	
Label_1806:
	var_61_int = 2; // 0x70e PushI
	var_62_bool = var_17_int == var_61_int; // 0x70f Eq
	if(var_62_bool == 0) goto Label_1818; // 0x710 JumpB
	var_63_int = 0; var_64_string = ""; // 0x711 PushV
	var_64_string = "hook"; // 0x712 MovS
	func_1940(var_63_int, var_64_string); // 0x713 NEW_2
	var_65_int = 0; // 0x715 PushI
	var_66_int = 1; // 0x716 PushI
	AddItem(var_18_bool, var_63_int, var_65_int, var_66_int); // 0x717 Func
	goto Label_1853; // 0x719 Jump
	
Label_1818:
	var_67_int = 4; // 0x71a PushI
	var_68_bool = var_17_int == var_67_int; // 0x71b Eq
	if(var_68_bool == 0) goto Label_1830; // 0x71c JumpB
	var_69_int = 0; var_70_string = ""; // 0x71d PushV
	var_70_string = "syringe"; // 0x71e MovS
	func_1940(var_69_int, var_70_string); // 0x71f NEW_2
	var_71_int = 0; // 0x721 PushI
	var_72_int = 1; // 0x722 PushI
	AddItem(var_18_bool, var_69_int, var_71_int, var_72_int); // 0x723 Func
	goto Label_1853; // 0x725 Jump
	
Label_1830:
	var_73_int = 5; // 0x726 PushI
	var_74_bool = var_17_int == var_73_int; // 0x727 Eq
	if(var_74_bool == 0) goto Label_1842; // 0x728 JumpB
	var_75_int = 0; var_76_string = ""; // 0x729 PushV
	var_76_string = "watch"; // 0x72a MovS
	func_1940(var_75_int, var_76_string); // 0x72b NEW_2
	var_77_int = 0; // 0x72d PushI
	var_78_int = 1; // 0x72e PushI
	AddItem(var_18_bool, var_75_int, var_77_int, var_78_int); // 0x72f Func
	goto Label_1853; // 0x731 Jump
	
Label_1842:
	var_79_int = 6; // 0x732 PushI
	var_80_bool = var_17_int == var_79_int; // 0x733 Eq
	if(var_80_bool == 0) goto Label_1853; // 0x734 JumpB
	var_81_int = 0; var_82_string = ""; // 0x735 PushV
	var_82_string = "razor"; // 0x736 MovS
	func_1940(var_81_int, var_82_string); // 0x737 NEW_2
	var_83_int = 0; // 0x739 PushI
	var_84_int = 1; // 0x73a PushI
	AddItem(var_18_bool, var_81_int, var_83_int, var_84_int); // 0x73b Func
	
Label_1854:
	var_85_int = 0; var_86_int = 0; // 0x73e PushV
	var_85_int = 0; // 0x73f MovI
	var_87_int = 50; // 0x740 PushI
	var_88_int = 0; // 0x741 PushV
	func_1708(var_88_int); // 0x742 NEW_2
	var_89_int = 50; // 0x744 PushI
	var_90_float = var_88_int * var_89_int; // 0x745 Mult
	var_86_int = var_87_int + var_90_float; // 0x746 Add2
	func_1734(var_85_int, var_86_int); // 0x747 NEW_2
	var_91_int = 7; // 0x749 PushI
	irand(var_17_int, var_91_int); // 0x74a Func
	var_92_int = 0; // 0x74c PushI
	var_93_bool = var_17_int == var_92_int; // 0x74d Eq
	if(var_93_bool == 0) goto Label_1880; // 0x74e JumpB
	var_94_int = 0; var_95_string = ""; // 0x74f PushV
	var_95_string = "beads"; // 0x750 MovS
	func_1940(var_94_int, var_95_string); // 0x751 NEW_2
	var_96_int = 0; // 0x753 PushI
	var_97_int = 1; // 0x754 PushI
	AddItem(var_18_bool, var_94_int, var_96_int, var_97_int); // 0x755 Func
	goto Label_1939; // 0x757 Jump
	
Label_1880:
	var_98_int = 1; // 0x758 PushI
	var_99_bool = var_17_int == var_98_int; // 0x759 Eq
	if(var_99_bool == 0) goto Label_1892; // 0x75a JumpB
	var_100_int = 0; var_101_string = ""; // 0x75b PushV
	var_101_string = "bracelet"; // 0x75c MovS
	func_1940(var_100_int, var_101_string); // 0x75d NEW_2
	var_102_int = 0; // 0x75f PushI
	var_103_int = 1; // 0x760 PushI
	AddItem(var_18_bool, var_100_int, var_102_int, var_103_int); // 0x761 Func
	goto Label_1939; // 0x763 Jump
	
Label_1892:
	var_104_int = 2; // 0x764 PushI
	var_105_bool = var_17_int == var_104_int; // 0x765 Eq
	if(var_105_bool == 0) goto Label_1904; // 0x766 JumpB
	var_106_int = 0; var_107_string = ""; // 0x767 PushV
	var_107_string = "ear_ring"; // 0x768 MovS
	func_1940(var_106_int, var_107_string); // 0x769 NEW_2
	var_108_int = 0; // 0x76b PushI
	var_109_int = 1; // 0x76c PushI
	AddItem(var_18_bool, var_106_int, var_108_int, var_109_int); // 0x76d Func
	goto Label_1939; // 0x76f Jump
	
Label_1904:
	var_110_int = 3; // 0x770 PushI
	var_111_bool = var_17_int == var_110_int; // 0x771 Eq
	if(var_111_bool == 0) goto Label_1916; // 0x772 JumpB
	var_112_int = 0; var_113_string = ""; // 0x773 PushV
	var_113_string = "gold_ring"; // 0x774 MovS
	func_1940(var_112_int, var_113_string); // 0x775 NEW_2
	var_114_int = 0; // 0x777 PushI
	var_115_int = 1; // 0x778 PushI
	AddItem(var_18_bool, var_112_int, var_114_int, var_115_int); // 0x779 Func
	goto Label_1939; // 0x77b Jump
	
Label_1916:
	var_116_int = 4; // 0x77c PushI
	var_117_bool = var_17_int == var_116_int; // 0x77d Eq
	if(var_117_bool == 0) goto Label_1928; // 0x77e JumpB
	var_118_int = 0; var_119_string = ""; // 0x77f PushV
	var_119_string = "silver_ring"; // 0x780 MovS
	func_1940(var_118_int, var_119_string); // 0x781 NEW_2
	var_120_int = 0; // 0x783 PushI
	var_121_int = 1; // 0x784 PushI
	AddItem(var_18_bool, var_118_int, var_120_int, var_121_int); // 0x785 Func
	goto Label_1939; // 0x787 Jump
	
Label_1928:
	var_122_int = 5; // 0x788 PushI
	var_123_bool = var_17_int == var_122_int; // 0x789 Eq
	if(var_123_bool == 0) goto Label_1939; // 0x78a JumpB
	var_124_int = 0; var_125_string = ""; // 0x78b PushV
	var_125_string = "flower"; // 0x78c MovS
	func_1940(var_124_int, var_125_string); // 0x78d NEW_2
	var_126_int = 0; // 0x78f PushI
	var_127_int = 1; // 0x790 PushI
	AddItem(var_18_bool, var_124_int, var_126_int, var_127_int); // 0x791 Func
}


func_1261(var_2_object)
{
	Stop(); // 0x4ed Func
	var_14_int = 120; // 0x4ef PushI
	KillTimer(var_14_int); // 0x4f0 Func
	var_2_object = 1; // 0x4f2 TMovB
	return 0; // 0x4f3 Return
}


func_1277(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x4fd PushV
	GetDirection(var_68_cvector); // 0x4fe Func
	var_70_cvector = CVector(0,0,0); var_71_object = Obj(); // 0x500 PushV
	var_71_object = var_0_object; // 0x501 MovT
	func_1298(var_71_object); // 0x502 NEW_2
	var_69_cvector = var_70_cvector; // 0x503 Mov
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x505 PushV
	var_77_cvector = var_68_cvector; // 0x506 Mov
	var_78_cvector = var_69_cvector; // 0x507 Mov
	func_1700(var_76_float, var_77_cvector, var_78_cvector); // 0x508 NEW_2
	var_84_float = -0.34202; // 0x50a PushF
	var_65_bool = var_76_float >= var_84_float; // 0x50b GE2
	return 4; // 0x50c Return
}


func_1293(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x50d PushV
	GetPosition(var_87_cvector); // 0x50e Func
	var_85_cvector = var_87_cvector; // 0x510 Mov
	return 2; // 0x511 Return
}


func_1298(var_47_cvector)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x512 PushV
	GetPosition(var_51_cvector); // 0x513 Func
	GetPosition(var_52_cvector); // 0x515 ObjFunc
	var_47_cvector = var_52_cvector - var_51_cvector; // 0x517 Sub2
	return 4; // 0x518 Return
}


func_789(var_0_object, var_1_object)
{
	var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_bool = 0; var_139_object = Obj(); var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_bool = 0; var_145_object = Obj(); var_146_bool = 0; // 0x315 PushV
	var_0_object = 0; // 0x316 TMovB
	var_1_object = 0; // 0x317 TMovB
	var_147_float = 0.5; // 0x318 PushF
	rand(var_141_float, var_147_float); // 0x319 Func
	Sleep(var_141_float); // 0x31b Func
	
Label_797:
	var_148_bool = var_0_object == 0; // 0x31d Not
	if(var_148_bool == 0) goto Label_847; // 0x31e JumpB
	var_149_bool = var_1_object == 0; // 0x31f Not
	if(var_149_bool == 0) goto Label_816; // 0x320 JumpB
	
Label_801:
	GetPosition(var_143_cvector); // 0x321 Func
	var_150_float = 0; // 0x323 PushV
	func_848(var_150_float); // 0x324 NEW_2
	GetRandomPFPointInCircle(var_142_cvector, var_143_cvector, var_150_float, var_144_bool); // 0x326 Func
	var_153_bool = var_144_bool; // 0x328 Push
	if(var_153_bool == 0) goto Label_811; // 0x329 JumpB
	goto Label_815; // 0x32a Jump
	
Label_815:
	goto Label_817; // 0x32f Jump
	
Label_817:
	var_154_object = Obj(); var_155_cvector = CVector(0,0,0); // 0x331 PushV
	var_155_cvector = var_142_cvector; // 0x332 Mov
	func_878(var_154_object, var_155_cvector); // 0x333 NEW_2
	var_145_object = var_154_object; // 0x334 Mov
	var_158_bool = var_145_object != 0; // 0x336 NullNeq
	if(var_158_bool == 0) goto Label_842; // 0x337 JumpB
	RotatePath(var_145_object, var_146_bool); // 0x338 Func
	var_159_bool = var_146_bool; // 0x33a Push
	if(var_159_bool == 0) goto Label_841; // 0x33b JumpB
	var_160_bool = 0; // 0x33c PushV
	func_876(var_160_bool); // 0x33d NEW_2
	FollowPath(var_145_object, var_160_bool, var_146_bool); // 0x33f Func
	var_145_object = 0; // 0x341 SetNull
	var_161_bool = var_146_bool; // 0x342 Push
	if(var_161_bool == 0) goto Label_841; // 0x343 JumpB
	TaskCall(3); // 0x345 TaskCall
	func_516(); // 0x346 NEW_2
	TaskReturn(); // 0x347 TaskReturn
	
Label_841:
	goto Label_845; // 0x349 Jump
	
Label_845:
	var_145_object = 0; // 0x34d SetNull
	goto Label_797; // 0x34e Jump
	
Label_842:
	var_213_int = 1; // 0x34a PushI
	Sleep(var_213_int); // 0x34b Func
	
Label_811:
	var_214_int = 1; // 0x32b PushI
	Sleep(var_214_int); // 0x32c Func
	goto Label_801; // 0x32e Jump
	
Label_816:
	var_1_object = 0; // 0x330 TMovB
	
Label_847:
	return 12; // 0x34f Return
}


func_1305(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x519 PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x51a Func
	var_21_bool = var_24_bool; // 0x51c Mov
	return 2; // 0x51d Return
}


func_1310(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0; // 0x51e PushV
	var_52_string = "HasProperty"; // 0x51f PushS
	var_53_int = 2; // 0x520 PushI
	var_54_bool = IsFuncExist(var_48_object, var_52_string, var_53_int); // 0x521 FuncExist
	var_55_bool = var_54_bool == 0; // 0x522 Not
	if(var_55_bool == 0) goto Label_1318; // 0x523 JumpB
	var_47_bool = 0; // 0x524 MovB
	return 2; // 0x525 Return
	
Label_1318:
	HasProperty(var_49_string, var_51_bool); // 0x526 ObjFunc
	var_47_bool = var_51_bool; // 0x528 Mov
	return 2; // 0x529 Return
}


func_1322(var_40_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0x52a PushV
	IsDead(var_43_bool); // 0x52b ObjFunc
	var_40_bool = var_43_bool; // 0x52d Mov
	return 2; // 0x52e Return
}


func_1327(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x52f PushV
	var_35_bool = var_30_object == 0; // 0x530 NullEq
	if(var_35_bool == 0) goto Label_1332; // 0x531 JumpB
	var_29_bool = 0; // 0x532 MovB
	return 4; // 0x533 Return
	
Label_1332:
	var_36_bool = 0; // 0x534 PushV
	var_36_bool = 0; // 0x535 MovB
	var_37_string = "IsDead"; // 0x536 PushS
	var_38_int = 1; // 0x537 PushI
	var_39_bool = IsFuncExist(var_30_object, var_37_string, var_38_int); // 0x538 FuncExist
	if(var_39_bool == 0) goto Label_1344; // 0x539 JumpB
	var_40_bool = 0; var_41_object = Obj(); // 0x53a PushV
	var_41_object = var_30_object; // 0x53b Mov
	func_1322(var_41_object); // 0x53c NEW_2
	if(var_40_bool == 0) goto Label_1344; // 0x53e JumpB
	var_36_bool = 1; // 0x53f MovB
	
Label_1344:
	if(var_36_bool == 0) goto Label_1347; // 0x540 JumpB
	var_29_bool = 0; // 0x541 MovB
	return 4; // 0x542 Return
	
Label_1347:
	GetScene(var_33_object); // 0x543 Func
	var_44_bool = var_33_object == 0; // 0x545 NullEq
	if(var_44_bool == 0) goto Label_1353; // 0x546 JumpB
	var_29_bool = 0; // 0x547 MovB
	return 4; // 0x548 Return
	
Label_1353:
	GetScene(var_34_object); // 0x549 ObjFunc
	var_45_bool = var_33_object != var_34_object; // 0x54b Neq
	if(var_45_bool == 0) goto Label_1359; // 0x54c JumpB
	var_29_bool = 0; // 0x54d MovB
	return 4; // 0x54e Return
	
Label_1359:
	var_29_bool = 1; // 0x54f MovB
	return 4; // 0x550 Return
}


func_320(var_38_string)
{
	RemoveRTEnvelope(); // 0x141 Func
	SetDeathState(); // 0x143 Func
	Stop(); // 0x145 Func
	StopAsync(); // 0x147 Func
	StopSecondaryAnimation(); // 0x149 Func
	var_39_string = ""; // 0x14b PushV
	var_39_string = var_38_string; // 0x14c Mov
	func_1643(var_39_string); // 0x14d NEW_2
	var_68_string = "all"; // 0x14f PushS
	PlayAnimation(var_68_string, var_38_string); // 0x150 Func
	WaitForAnimEnd(); // 0x152 Func
	var_69_string = "all"; // 0x154 PushS
	LockAnimationEnd(var_69_string, var_38_string); // 0x155 Func
	RemoveEnvelope(); // 0x157 Func
	return 0; // 0x159 Return
}


func_848(var_150_float)
{
	var_151_float = 0; var_152_float = 0; // 0x350 PushV
	GetCameraFarDistance(var_152_float); // 0x351 Func
	var_150_float = var_152_float; // 0x353 Mov
	return 2; // 0x354 Return
}


func_1363(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0; // 0x553 PushV
	var_29_bool = 0; var_30_object = Obj(); // 0x554 PushV
	var_30_object = var_26_object; // 0x555 Mov
	func_1327(var_29_bool, var_30_object); // 0x556 NEW_2
	var_46_bool = var_29_bool == 0; // 0x558 Not
	if(var_46_bool == 0) goto Label_1372; // 0x559 JumpB
	var_25_bool = 0; // 0x55a MovB
	return 2; // 0x55b Return
	
Label_1372:
	var_47_bool = 0; var_48_object = Obj(); var_49_string = ""; // 0x55c PushV
	var_48_object = var_26_object; // 0x55d Mov
	var_49_string = "noaccess"; // 0x55e MovS
	func_1310(var_47_bool, var_48_object, var_49_string); // 0x55f NEW_2
	var_56_bool = var_47_bool == 0; // 0x561 Not
	if(var_56_bool == 0) goto Label_1381; // 0x562 JumpB
	var_25_bool = 1; // 0x563 MovB
	return 2; // 0x564 Return
	
Label_1381:
	var_57_string = "noaccess"; // 0x565 PushS
	GetProperty(var_57_string, var_28_int); // 0x566 ObjFunc
	var_58_int = 0; // 0x568 PushI
	var_25_bool = var_28_int == var_58_int; // 0x569 Eq2
	return 2; // 0x56a Return
}


func_860(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x35c TMovB
	var_1_object = 0; // 0x35d TMovB
	Stop(); // 0x35e Func
	StopGroup0(); // 0x360 Func
	return 0; // 0x362 Return
}


func_1387(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; // 0x56b PushV
	var_45_bool = var_30_object == 0; // 0x56c NullEq
	if(var_45_bool == 0) goto Label_1391; // 0x56d JumpB
	return 14; // 0x56e Return
	
Label_1391:
	IsDead(var_38_bool); // 0x56f Func
	var_46_bool = var_38_bool; // 0x571 Push
	if(var_46_bool == 0) goto Label_1396; // 0x572 JumpB
	return 14; // 0x573 Return
	
Label_1396:
	GetSecondaryAnimationType(var_39_int); // 0x574 Func
	var_47_int = 0; // 0x576 PushI
	var_48_bool = var_39_int < var_47_int; // 0x577 LT
	if(var_48_bool == 0) goto Label_1402; // 0x578 JumpB
	return 14; // 0x579 Return
	
Label_1402:
	GetPosition(var_40_cvector); // 0x57a ObjFunc
	GetPosition(var_41_cvector); // 0x57c Func
	GetDirection(var_42_cvector); // 0x57e Func
	var_43_cvector = var_41_cvector - var_40_cvector; // 0x580 Sub2
	var_49_float = GetByIndex(var_43_cvector, 0); // 0x581 PushE
	var_50_float = GetByIndex(var_42_cvector, 0); // 0x582 PushE
	var_51_float = var_49_float * var_50_float; // 0x583 Mult
	var_52_float = GetByIndex(var_43_cvector, 2); // 0x584 PushE
	var_53_float = GetByIndex(var_42_cvector, 2); // 0x585 PushE
	var_54_float = var_52_float * var_53_float; // 0x586 Mult
	var_55_int = var_51_float + var_54_float; // 0x587 Add
	var_56_int = 0; // 0x588 PushI
	var_57_bool = var_55_int >= var_56_int; // 0x589 GE
	if(var_57_bool == 0) goto Label_1421; // 0x58a JumpB
	var_44_string = "fhit"; // 0x58b MovS
	goto Label_1422; // 0x58c Jump
	
Label_1422:
	var_58_string = "hit_react"; // 0x58e PushS
	var_59_string = "1"; // 0x58f PushS
	var_60_int = var_44_string + var_59_string; // 0x590 Add
	var_61_string = "2"; // 0x591 PushS
	var_62_int = var_44_string + var_61_string; // 0x592 Add
	var_63_int = -10; // 0x593 PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x594 Func
	return 14; // 0x596 Return
	
Label_1421:
	var_44_string = "bhit"; // 0x58d MovS
}


func_876(var_160_bool)
{
	var_160_bool = 0; // 0x36c MovB
	return 0; // 0x36d Return
}


func_878(var_154_object, var_155_cvector)
{
	var_156_object = Obj(); var_157_object = Obj(); // 0x36e PushV
	FindShiftedPathTo(var_157_object, var_155_cvector); // 0x36f Func
	var_154_object = var_157_object; // 0x371 Mov
	return 2; // 0x372 Return
}


func_884(var_66_object)
{
	Face(var_66_object); // 0x375 Func
	var_70_string = "all"; // 0x377 PushS
	var_71_string = "attack_on"; // 0x378 PushS
	PlayAnimation(var_70_string, var_71_string); // 0x379 Func
	WaitForAnimEnd(); // 0x37b Func
	var_72_string = "all"; // 0x37d PushS
	var_73_string = "attack_stay"; // 0x37e PushS
	PlayAnimation(var_72_string, var_73_string); // 0x37f Func
	WaitForAnimEnd(); // 0x381 Func
	var_74_string = "all"; // 0x383 PushS
	var_75_string = "attack_off"; // 0x384 PushS
	PlayAnimation(var_74_string, var_75_string); // 0x385 Func
	WaitForAnimEnd(); // 0x387 Func
	StopAsync(); // 0x389 Func
	var_76_object = Obj(); // 0x38b PushV
	var_76_object = var_66_object; // 0x38c Mov
	func_949(var_68_cvector, var_69_bool, var_66_object, var_76_object); // 0x38d NEW_2
	return 0; // 0x38f Return
}


func_1940(var_41_int, var_42_string)
{
	var_43_int = 0; var_44_int = 0; // 0x794 PushV
	GetInvItemByName(var_44_int, var_42_string); // 0x795 Func
	var_41_int = var_44_int; // 0x797 Mov
	return 2; // 0x798 Return
}


func_919(var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; // 0x397 PushV
	GetPosition(var_35_cvector); // 0x398 Func
	GetPosition(var_36_cvector); // 0x39a TObjFunc
	GetDirection(var_37_cvector); // 0x39c Func
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x39e PushV
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x39f PushV
	var_44_cvector = var_35_cvector - var_36_cvector; // 0x3a0 Sub2
	func_1690(var_43_cvector, var_44_cvector); // 0x3a1 NEW_2
	var_50_float = 0.75; // 0x3a3 PushF
	var_51_float = var_37_cvector * var_50_float; // 0x3a4 Mult
	var_42_cvector = var_43_cvector + var_51_float; // 0x3a5 Add2
	func_1690(var_41_cvector, var_42_cvector); // 0x3a6 NEW_2
	var_38_cvector = var_41_cvector; // 0x3a7 Mov
	var_52_int = 32; // 0x3a9 PushI
	var_53_float = 7000.0; // 0x3aa PushF
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, var_52_int, var_53_float); // 0x3ab Func
	var_54_int = 100; // 0x3ad PushI
	var_40_float = var_40_float - var_54_int; // 0x3ae Sub2
	var_55_int = 0; // 0x3af PushI
	var_56_bool = var_40_float < var_55_int; // 0x3b0 LT
	if(var_56_bool == 0) goto Label_947; // 0x3b1 JumpB
	var_40_float = 0; // 0x3b2 MovI
	
Label_947:
	var_27_cvector = var_39_cvector * var_40_float; // 0x3b3 Mult2
	return 12; // 0x3b4 Return
}


func_1431(var_17_object, var_18_int, var_19_float)
{
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_int = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); // 0x597 PushV
	var_38_bool = 0; // 0x598 PushV
	var_38_bool = 0; // 0x599 MovB
	var_39_bool = 0; // 0x59a PushV
	var_39_bool = 0; // 0x59b MovB
	var_40_object = var_17_object; // 0x59c Push
	if(var_40_object == 0) goto Label_1442; // 0x59d JumpB
	var_41_int = 4; // 0x59e PushI
	var_42_bool = var_18_int != var_41_int; // 0x59f Neq
	if(var_42_bool == 0) goto Label_1442; // 0x5a0 JumpB
	var_39_bool = 1; // 0x5a1 MovB
	
Label_1442:
	if(var_39_bool == 0) goto Label_1447; // 0x5a2 JumpB
	var_43_int = 5; // 0x5a3 PushI
	var_44_bool = var_18_int != var_43_int; // 0x5a4 Neq
	if(var_44_bool == 0) goto Label_1447; // 0x5a5 JumpB
	var_38_bool = 1; // 0x5a6 MovB
	
Label_1447:
	if(var_38_bool == 0) goto Label_1494; // 0x5a7 JumpB
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x5a8 PushV
	var_47_cvector = CVector(0,0,0); var_48_object = Obj(); // 0x5a9 PushV
	var_48_object = var_17_object; // 0x5aa Mov
	func_1298(var_48_object); // 0x5ab NEW_2
	var_46_cvector = var_47_cvector; // 0x5ac Mov
	func_1690(var_45_cvector, var_46_cvector); // 0x5ae NEW_2
	var_29_cvector = var_45_cvector; // 0x5af Mov
	CreateVectorVector(var_30_object); // 0x5b1 Func
	var_31_int = 1; // 0x5b3 MovI
	
Label_1460:
	var_58_string = "hit"; // 0x5b4 PushS
	var_59_int = var_58_string + var_31_int; // 0x5b5 Add
	GetGeometryLocator(var_59_int, var_32_bool, var_33_cvector, var_34_cvector); // 0x5b6 Func
	var_60_bool = var_32_bool == 0; // 0x5b8 Not
	if(var_60_bool == 0) goto Label_1467; // 0x5b9 JumpB
	goto Label_1476; // 0x5ba Jump
	
Label_1476:
	size(var_35_int); // 0x5c4 ObjFunc
	var_61_int = var_35_int; // 0x5c6 Push
	if(var_61_int == 0) goto Label_1493; // 0x5c7 JumpB
	irand(var_36_int, var_35_int); // 0x5c8 Func
	get(var_37_cvector, var_36_int); // 0x5ca ObjFunc
	var_62_object = Obj(); var_63_int = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x5cc PushV
	var_62_object = var_17_object; // 0x5cd Mov
	var_63_int = var_18_int; // 0x5ce Mov
	var_64_float = var_19_float; // 0x5cf Mov
	var_65_cvector = var_37_cvector; // 0x5d0 Mov
	var_66_cvector = -var_29_cvector; // 0x5d1 Neg2
	func_1499(var_64_float, var_65_cvector, var_66_cvector); // 0x5d2 NEW_2
	return 18; // 0x5d4 Return
	
Label_1493:
	var_30_object = 0; // 0x5d5 SetNull
	
Label_1494:
	var_107_object = Obj(); // 0x5d6 PushV
	var_107_object = var_17_object; // 0x5d7 Mov
	func_1387(var_107_object); // 0x5d8 NEW_2
	return 18; // 0x5da Return
	
Label_1467:
	var_108_int = var_34_cvector | var_29_cvector; // 0x5bb Or
	var_109_float = 0.70711; // 0x5bc PushF
	var_110_bool = var_108_int >= var_109_float; // 0x5bd GE
	if(var_110_bool == 0) goto Label_1473; // 0x5be JumpB
	add(var_33_cvector); // 0x5bf ObjFunc
	
Label_1473:
	var_111_int = 1; // 0x5c1 PushI
	var_31_int = var_31_int + var_111_int; // 0x5c2 Add2
	goto Label_1460; // 0x5c3 Jump
}


func_1945(var_14_object)
{
	var_15_object = Obj(); // 0x79a PushV
	var_15_object = var_14_object; // 0x79b Mov
	TaskCall(2); // 0x79c TaskCall
	func_196(var_15_object); // 0x79d NEW_2
	TaskReturn(); // 0x79e TaskReturn
	return 0; // 0x7a0 Return
}


func_949(var_0_object, var_1_object, var_2_object, var_76_object)
{
	var_77_cvector = CVector(0,0,0); var_78_float = 0; var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_float = 0; // 0x3b5 PushV
	var_0_object = var_76_object; // 0x3b6 TMov
	var_87_cvector = CVector(0,0,0); var_88_float = 0; // 0x3b7 PushV
	var_88_float = 1.74533; // 0x3b8 MovF
	func_919(var_87_cvector, var_88_float); // 0x3b9 NEW_2
	var_82_cvector = var_87_cvector; // 0x3ba Mov
	var_83_float = var_82_cvector | var_82_cvector; // 0x3bc Or2
	var_117_float = 2500.0; // 0x3bd PushF
	var_118_bool = var_83_float < var_117_float; // 0x3be LT
	if(var_118_bool == 0) goto Label_978; // 0x3bf JumpB
	var_119_cvector = CVector(0,0,0); var_120_float = 0; // 0x3c0 PushV
	var_120_float = 2.61799; // 0x3c1 MovF
	func_919(var_119_cvector, var_120_float); // 0x3c2 NEW_2
	var_82_cvector = var_119_cvector; // 0x3c3 Mov
	var_83_float = var_82_cvector | var_82_cvector; // 0x3c5 Or2
	var_121_float = 2500.0; // 0x3c6 PushF
	var_122_bool = var_83_float < var_121_float; // 0x3c7 LT
	if(var_122_bool == 0) goto Label_978; // 0x3c8 JumpB
	var_123_string = "Can't retreat, distance: "; // 0x3c9 PushS
	var_124_float = sqrt(var_83_float); // 0x3ca Sqrt
	var_125_int = var_123_string + var_124_float; // 0x3cb Add
	Trace(var_125_int); // 0x3cc Func
	var_126_float = 0.5; // 0x3ce PushF
	Sleep(var_126_float); // 0x3cf Func
	return 10; // 0x3d1 Return
	
Label_978:
	var_127_float = GetByIndex(var_82_cvector, 0); // 0x3d2 PushE
	var_128_float = GetByIndex(var_82_cvector, 2); // 0x3d3 PushE
	Rotate(var_127_float, var_128_float); // 0x3d4 Func
	var_129_cvector = CVector(0,0,0); // 0x3d6 PushV
	func_1293(var_129_cvector); // 0x3d7 NEW_2
	var_1_object = var_129_cvector + var_82_cvector; // 0x3d9 Add2
	var_132_int = 120; // 0x3da PushI
	var_133_float = 0.5; // 0x3db PushF
	SetTimer(var_132_int, var_133_float); // 0x3dc Func
	var_2_object = 0; // 0x3de TMovB
	
Label_991:
	var_134_int = 1; // 0x3df PushI
	MovePoint(var_134_int, var_134_int, var_84_bool); // 0x3e0 Func
	var_135_bool = var_84_bool; // 0x3e2 Push
	if(var_135_bool == 0) goto Label_1019; // 0x3e3 JumpB
	var_136_bool = var_0_object == 0; // 0x3e4 NullEq
	if(var_136_bool == 0) goto Label_1000; // 0x3e5 JumpB
	goto Label_1021; // 0x3e6 Jump
	
Label_1021:
	return 10; // 0x3fd Return
	
Label_1000:
	var_137_cvector = CVector(0,0,0); var_138_float = 0; // 0x3e8 PushV
	var_138_float = 2.61799; // 0x3e9 MovF
	func_919(var_137_cvector, var_138_float); // 0x3ea NEW_2
	var_85_cvector = var_137_cvector; // 0x3eb Mov
	var_86_float = var_85_cvector | var_85_cvector; // 0x3ed Or2
	var_139_float = 2500.0; // 0x3ee PushF
	var_140_bool = var_86_float >= var_139_float; // 0x3ef GE
	if(var_140_bool == 0) goto Label_1018; // 0x3f0 JumpB
	var_141_cvector = CVector(0,0,0); // 0x3f1 PushV
	func_1293(var_141_cvector); // 0x3f2 NEW_2
	var_1_object = var_141_cvector + var_85_cvector; // 0x3f4 Add2
	var_142_int = 120; // 0x3f5 PushI
	var_143_float = 0.5; // 0x3f6 PushF
	SetTimer(var_142_int, var_143_float); // 0x3f7 Func
	goto Label_1019; // 0x3f9 Jump
	
Label_1019:
	var_144_bool = var_2_object == 0; // 0x3fb Not
	if(var_144_bool == 0) goto Label_991; // 0x3fc JumpB
	
Label_1018:
	goto Label_1021; // 0x3fa Jump
}


func_1990(var_17_bool, var_18_object, var_19_string)
{
	var_20_string = "unholster"; // 0x7c7 PushS
	var_21_bool = var_19_string == var_20_string; // 0x7c8 Eq
	if(var_21_bool == 0) goto Label_2001; // 0x7c9 JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0x7ca PushV
	var_23_object = var_18_object; // 0x7cb Mov
	func_2197(var_23_object); // 0x7cc NEW_2
	var_17_bool = var_22_bool; // 0x7cd Mov
	return 0; // 0x7cf Return
	
Label_2001:
	var_24_string = "player_shot"; // 0x7d1 PushS
	var_25_bool = var_19_string == var_24_string; // 0x7d2 Eq
	if(var_25_bool == 0) goto Label_2011; // 0x7d3 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x7d4 PushV
	var_27_object = var_18_object; // 0x7d5 Mov
	func_2202(var_27_object); // 0x7d6 NEW_2
	var_17_bool = var_26_bool; // 0x7d7 Mov
	return 0; // 0x7d9 Return
	
Label_2011:
	var_28_string = "battle"; // 0x7db PushS
	var_29_bool = var_19_string == var_28_string; // 0x7dc Eq
	if(var_29_bool == 0) goto Label_2020; // 0x7dd JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x7de PushV
	var_31_object = var_18_object; // 0x7df Mov
	func_2207(var_31_object); // 0x7e0 NEW_2
	var_17_bool = var_30_bool; // 0x7e1 Mov
	return 0; // 0x7e3 Return
	
Label_2020:
	var_17_bool = 0; // 0x7e4 MovB
	return 0; // 0x7e5 Return
}


func_1499(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x5db PushV
	GetScene(var_26_object); // 0x5dc Func
	var_28_string = "scripted"; // 0x5de PushS
	var_29_string = "blood_dir.xml"; // 0x5df PushS
	AddActorByType(var_27_object, var_28_string, var_26_object, var_22_cvector, var_23_cvector, var_29_string); // 0x5e0 Func
	var_30_object = Obj(); // 0x5e2 PushV
	var_30_object = var_19_object; // 0x5e3 Mov
	func_1387(var_30_object); // 0x5e4 NEW_2
	return 4; // 0x5e6 Return
}


func_2022(var_32_object, var_33_string)
{
	var_34_string = "unholster"; // 0x7e7 PushS
	var_35_bool = var_33_string == var_34_string; // 0x7e8 Eq
	if(var_35_bool == 0) goto Label_2031; // 0x7e9 JumpB
	var_36_object = Obj(); // 0x7ea PushV
	var_36_object = var_32_object; // 0x7eb Mov
	func_2200(); // 0x7ec NEW_2
	goto Label_2046; // 0x7ee Jump
	
Label_2046:
	return 0; // 0x7fe Return
	
Label_2031:
	var_37_string = "player_shot"; // 0x7ef PushS
	var_38_bool = var_33_string == var_37_string; // 0x7f0 Eq
	if(var_38_bool == 0) goto Label_2039; // 0x7f1 JumpB
	var_39_object = Obj(); // 0x7f2 PushV
	var_39_object = var_32_object; // 0x7f3 Mov
	func_2205(); // 0x7f4 NEW_2
	goto Label_2046; // 0x7f6 Jump
	
Label_2039:
	var_40_string = "battle"; // 0x7f7 PushS
	var_41_bool = var_33_string == var_40_string; // 0x7f8 Eq
	if(var_41_bool == 0) goto Label_2046; // 0x7f9 JumpB
	var_42_object = Obj(); // 0x7fa PushV
	var_42_object = var_32_object; // 0x7fb Mov
	func_2210(); // 0x7fc NEW_2
}


func_1513(var_128_bool)
{
	var_129_bool = 0; var_130_bool = 0; // 0x5e9 PushV
	IsLoaded(var_130_bool); // 0x5ea Func
	var_128_bool = var_130_bool; // 0x5ec Mov
	return 2; // 0x5ed Return
}


func_1518(var_35_bool, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; // 0x5ee PushV
	GetPosition(var_48_cvector); // 0x5ef ObjFunc
	GetEyesHeight(var_47_float); // 0x5f1 ObjFunc
	var_56_float = GetByIndex(var_48_cvector, 1); // 0x5f3 PushE
	var_56_float = var_56_float + var_47_float; // 0x5f4 Add2
	SetByIndex(var_48_cvector, 1) = var_56_float; // 0x5f5 PopE
	GetPosition(var_49_cvector); // 0x5f6 Func
	GetEyesHeight(var_47_float); // 0x5f8 Func
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x5fa PushE
	var_57_float = var_57_float + var_47_float; // 0x5fb Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x5fc PopE
	var_50_cvector = var_48_cvector - var_49_cvector; // 0x5fd Sub2
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x5fe PushE
	var_58_float = 0; // 0x5ff MovI
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x600 PopE
	var_59_int = var_50_cvector | var_50_cvector; // 0x601 Or
	var_60_float = sqrt(var_59_int); // 0x602 Sqrt
	var_50_cvector = var_50_cvector / var_50_cvector; // 0x603 Div2
	var_51_cvector = -var_50_cvector; // 0x604 Neg2
	var_61_float = var_50_cvector * var_37_float; // 0x605 Mult
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x606 PushV
	var_64_cvector = CVector(0.0, 1.0, 0.0); // 0x607 PushVec
	var_63_cvector = var_51_cvector ^ var_64_cvector; // 0x608 Xor2
	func_1690(var_62_cvector, var_63_cvector); // 0x609 NEW_2
	var_70_int = 25; // 0x60b PushI
	var_71_float = var_62_cvector * var_70_int; // 0x60c Mult
	var_72_int = var_61_float + var_71_float; // 0x60d Add
	var_73_cvector = CVector(0.0, 10.0, 0.0); // 0x60e PushVec
	var_52_cvector = var_72_int - var_73_cvector; // 0x60f Sub2
	var_53_cvector = var_49_cvector + var_52_cvector; // 0x610 Add2
	IsOverrideActive(var_54_bool); // 0x611 Func
	var_74_bool = var_54_bool; // 0x613 Push
	if(var_74_bool == 0) goto Label_1559; // 0x614 JumpB
	var_35_bool = 0; // 0x615 MovB
	return 18; // 0x616 Return
	
Label_1559:
	StopWorld(); // 0x617 Func
	var_75_bool = 1; // 0x619 PushB
	CameraTransit(var_53_cvector, var_51_cvector, var_75_bool); // 0x61a Func
	var_76_float = GetByIndex(var_52_cvector, 0); // 0x61c PushE
	var_77_float = GetByIndex(var_52_cvector, 2); // 0x61d PushE
	Rotate(var_76_float, var_77_float); // 0x61e Func
	var_78_bool = 0; // 0x620 PushV
	func_2225(var_78_bool); // 0x621 NEW_2
	if(var_78_bool == 0) goto Label_1573; // 0x623 JumpB
	goto Label_1581; // 0x624 Jump
	
Label_1581:
	CameraWaitForPlayFinish(); // 0x62d Func
	ResumeWorld(); // 0x62f Func
	var_35_bool = 1; // 0x631 MovB
	return 18; // 0x632 Return
	
Label_1573:
	var_79_string = "head"; // 0x625 PushS
	HasAnimationTrack(var_55_bool, var_79_string); // 0x626 Func
	var_80_bool = var_55_bool; // 0x628 Push
	if(var_80_bool == 0) goto Label_1581; // 0x629 JumpB
	var_81_string = "head"; // 0x62a PushS
	LookAsyncCamera(var_81_string); // 0x62b Func
}


func_2047(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x7ff PushV
	var_18_bool = 0; // 0x800 PushV
	var_18_bool = 0; // 0x801 MovB
	var_19_bool = 0; var_20_object = Obj(); // 0x802 PushV
	var_20_object = var_15_object; // 0x803 Mov
	func_2197(var_20_object); // 0x804 NEW_2
	if(var_19_bool == 0) goto Label_2061; // 0x806 JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x807 PushV
	var_22_object = var_15_object; // 0x808 Mov
	func_1305(var_21_bool, var_22_object); // 0x809 NEW_2
	if(var_21_bool == 0) goto Label_2061; // 0x80b JumpB
	var_18_bool = 1; // 0x80c MovB
	
Label_2061:
	if(var_18_bool == 0) goto Label_2068; // 0x80d JumpB
	IsWeaponHolstered(var_17_bool); // 0x80e ObjFunc
	var_25_bool = var_17_bool == 0; // 0x810 Not
	if(var_25_bool == 0) goto Label_2068; // 0x811 JumpB
	var_14_bool = 1; // 0x812 MovB
	return 2; // 0x813 Return
	
Label_2068:
	var_14_bool = 0; // 0x814 MovB
	return 2; // 0x815 Return
}


