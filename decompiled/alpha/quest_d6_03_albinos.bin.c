task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 1; // 0x9e PushI
	if(var_10_int == 0) goto Label_323; // 0x9f JumpB
	func_1018(); // 0xa1 Call
	var_12_int = 13311; // 0xa3 PushI
	var_13_bool = var_9_bool == var_12_int; // 0xa4 Eq
	if(var_13_bool == 0) goto Label_176; // 0xa5 JumpB
	var_14_object = Obj(); var_15_object = Obj(); // 0xa6 PushV
	var_14_object = var_1_object; // 0xa7 MovT
	var_15_object = var_0_object; // 0xa8 MovT
	func_1102(); // 0xa9 Call
	var_18_object = Obj(); var_19_object = Obj(); // 0xab PushV
	var_18_object = var_1_object; // 0xac MovT
	var_19_object = var_0_object; // 0xad MovT
	func_1108(); // 0xae Call
	
Label_176:
	var_22_int = 13292; // 0xb0 PushI
	var_23_bool = var_8_cvector == var_22_int; // 0xb1 Eq
	if(var_23_bool == 0) goto Label_219; // 0xb2 JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xb3 PushV
	var_25_object = var_1_object; // 0xb4 MovT
	func_1114(var_25_object); // 0xb5 Call
	if(var_24_bool == 0) goto Label_204; // 0xb7 JumpB
	var_32_string = ""; // 0xb8 PushV
	var_32_string = "Neutral"; // 0xb9 MovS
	func_141(var_9_bool, var_32_string); // 0xba Call
	var_47_int = 12071; // 0xbc PushI
	SetMessage(var_47_int); // 0xbd TObjFunc
	ClearReplies(); // 0xbf TObjFunc
	var_48_int = 12072; // 0xc1 PushI
	var_49_int = 13294; // 0xc2 PushI
	var_50_int = 13293; // 0xc3 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc4 TObjFunc
	var_51_int = 12083; // 0xc6 PushI
	var_52_int = 13294; // 0xc7 PushI
	var_53_int = 13306; // 0xc8 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc9 TObjFunc
	return 0; // 0xcb Return
	
Label_204:
	var_54_string = ""; // 0xcc PushV
	var_54_string = "Neutral"; // 0xcd MovS
	func_141(var_9_bool, var_54_string); // 0xce Call
	var_55_int = 13029; // 0xd0 PushI
	SetMessage(var_55_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_56_int = 13030; // 0xd5 PushI
	var_57_int = -1; // 0xd6 PushI
	var_58_int = 14237; // 0xd7 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_59_int = 13294; // 0xdb PushI
	var_60_bool = var_8_cvector == var_59_int; // 0xdc Eq
	if(var_60_bool == 0) goto Label_247; // 0xdd JumpB
	var_61_string = ""; // 0xde PushV
	var_61_string = "Neutral"; // 0xdf MovS
	func_141(var_9_bool, var_61_string); // 0xe0 Call
	var_62_int = 12073; // 0xe2 PushI
	SetMessage(var_62_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_63_int = 12074; // 0xe7 PushI
	var_64_int = 13298; // 0xe8 PushI
	var_65_int = 13295; // 0xe9 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xea TObjFunc
	var_66_int = 12075; // 0xec PushI
	var_67_int = 13298; // 0xed PushI
	var_68_int = 13296; // 0xee PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xef TObjFunc
	var_69_int = 12076; // 0xf1 PushI
	var_70_int = 13298; // 0xf2 PushI
	var_71_int = 13297; // 0xf3 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_72_int = 13298; // 0xf7 PushI
	var_73_bool = var_8_cvector == var_72_int; // 0xf8 Eq
	if(var_73_bool == 0) goto Label_270; // 0xf9 JumpB
	var_74_string = ""; // 0xfa PushV
	var_74_string = "Neutral"; // 0xfb MovS
	func_141(var_9_bool, var_74_string); // 0xfc Call
	var_75_int = 12077; // 0xfe PushI
	SetMessage(var_75_int); // 0xff TObjFunc
	ClearReplies(); // 0x101 TObjFunc
	var_76_int = 12078; // 0x103 PushI
	var_77_int = 13302; // 0x104 PushI
	var_78_int = 13301; // 0x105 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x106 TObjFunc
	var_79_int = 12082; // 0x108 PushI
	var_80_int = 13302; // 0x109 PushI
	var_81_int = 13305; // 0x10a PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_82_int = 13302; // 0x10e PushI
	var_83_bool = var_8_cvector == var_82_int; // 0x10f Eq
	if(var_83_bool == 0) goto Label_293; // 0x110 JumpB
	var_84_string = ""; // 0x111 PushV
	var_84_string = "Neutral"; // 0x112 MovS
	func_141(var_9_bool, var_84_string); // 0x113 Call
	var_85_int = 12079; // 0x115 PushI
	SetMessage(var_85_int); // 0x116 TObjFunc
	ClearReplies(); // 0x118 TObjFunc
	var_86_int = 12080; // 0x11a PushI
	var_87_int = 13304; // 0x11b PushI
	var_88_int = 13303; // 0x11c PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x11d TObjFunc
	var_89_int = 12084; // 0x11f PushI
	var_90_int = 13304; // 0x120 PushI
	var_91_int = 13309; // 0x121 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_92_int = 13304; // 0x125 PushI
	var_93_bool = var_8_cvector == var_92_int; // 0x126 Eq
	if(var_93_bool == 0) goto Label_311; // 0x127 JumpB
	var_94_string = ""; // 0x128 PushV
	var_94_string = "Neutral"; // 0x129 MovS
	func_141(var_9_bool, var_94_string); // 0x12a Call
	var_95_int = 12081; // 0x12c PushI
	SetMessage(var_95_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_96_int = 12085; // 0x131 PushI
	var_97_int = -1; // 0x132 PushI
	var_98_int = 13311; // 0x133 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_3_string = 1; // 0x137 TMovB
	var_99_bool = 0; // 0x138 PushV
	func_1147(var_99_bool); // 0x139 Call
	if(var_99_bool == 0) goto Label_319; // 0x13b JumpB
	lshStopAnimation(); // 0x13c Func
	goto Label_321; // 0x13e Jump
	
Label_321:
	return 0; // 0x141 Return
	
Label_319:
	StopAnimation(); // 0x13f Func
	
Label_323:
	return 0; // 0x143 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x150 PushV
	IsPlayerActor(var_8_bool, var_10_bool); // 0x151 Func
	var_11_bool = var_10_bool; // 0x153 Push
	if(var_11_bool == 0) goto Label_347; // 0x154 JumpB
	var_12_object = Obj(); // 0x155 PushV
	var_12_object = var_8_bool; // 0x156 Mov
	TaskCall(3); // 0x157 TaskCall
	func_492(var_13_object, var_14_cvector, var_15_bool, var_12_object); // 0x158 Call
	TaskReturn(); // 0x159 TaskReturn
	
Label_347:
	return 2; // 0x15b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	func_436(); // 0x15e Call
	var_9_int = 0; var_10_object = Obj(); // 0x160 PushV
	var_10_object = var_8_bool; // 0x161 Mov
	TaskCall(0); // 0x162 TaskCall
	func_0(var_11_object, var_9_int, var_10_object); // 0x163 Call
	TaskReturn(); // 0x164 TaskReturn
	return 0; // 0x166 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 100; // 0x168 PushI
	var_10_bool = var_8_bool == var_9_int; // 0x169 Eq
	if(var_10_bool == 0) goto Label_366; // 0x16a JumpB
	func_1165(); // 0x16c Call
	
Label_366:
	return 0; // 0x16e Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; var_9_string = ""; var_10_string = ""; // 0x1b9 PushV
	var_9_string = "quest_d6_03"; // 0x1ba MovS
	var_10_string = "albinos_retreated"; // 0x1bb MovS
	func_1066(var_8_bool, var_9_string, var_10_string); // 0x1bc Call
	Hold(); // 0x1be Func
	return 0; // 0x1c0 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int)
{
	var_9_int = 100; // 0x1c2 PushI
	var_10_bool = var_8_int == var_9_int; // 0x1c3 Eq
	if(var_10_bool == 0) goto Label_457; // 0x1c4 JumpB
	func_1165(); // 0x1c6 Call
	goto Label_461; // 0x1c8 Jump
	
Label_461:
	return 0; // 0x1cd Return
	
Label_457:
	var_85_int = 0; // 0x1c9 PushV
	var_85_int = var_8_int; // 0x1ca Mov
	func_556(var_6_cvector, var_7_bool, var_8_int, var_85_int); // 0x1cb Call
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	func_608(var_8_object); // 0x269 Call
	var_10_object = Obj(); // 0x26b PushV
	var_10_object = var_8_object; // 0x26c Mov
	func_1212(); // 0x26d Call
	return 0; // 0x26f Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0; // 0x2f7 Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_string)
{
	return 0; // 0x2f9 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	return 0; // 0x2fb Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x4a8 PushV
	var_12_object = var_8_object; // 0x4a9 Mov
	var_13_int = var_9_int; // 0x4aa Mov
	var_14_float = var_10_float; // 0x4ab Mov
	func_868(var_13_int, var_14_float); // 0x4ac Call
	return 0; // 0x4ae Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x4af PushV
	var_12_string = "health"; // 0x4b0 PushS
	var_13_bool = var_9_string == var_12_string; // 0x4b1 Eq
	if(var_13_bool == 0) goto Label_1211; // 0x4b2 JumpB
	var_14_string = "health"; // 0x4b3 PushS
	GetProperty(var_14_string, var_11_float); // 0x4b4 Func
	var_15_int = 0; // 0x4b6 PushI
	var_16_bool = var_11_float <= var_15_int; // 0x4b7 LE
	if(var_16_bool == 0) goto Label_1211; // 0x4b8 JumpB
	SignalDeath(var_8_object); // 0x4b9 Func
	
Label_1211:
	return 2; // 0x4bb Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_object = Obj(); // 0x4bd PushV
	var_9_object = var_8_object; // 0x4be Mov
	func_1149(var_9_object); // 0x4bf Call
	return 0; // 0x4c1 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	var_8_int = 100; // 0x144 PushI
	var_9_float = 1.0; // 0x145 PushF
	SetTimer(var_8_int, var_9_float); // 0x146 Func
	
Label_328:
	var_10_int = 3; // 0x148 PushI
	Sleep(var_10_int); // 0x149 Func
	func_367(); // 0x14c Call
	goto Label_328; // 0x14e Jump
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x0 PushV
	var_0_object = var_10_object; // 0x1 TMov
	var_20_bool = 0; var_21_object = Obj(); // 0x2 PushV
	var_21_object = var_10_object; // 0x3 Mov
	func_940(var_21_object); // 0x4 Call
	var_60_bool = var_20_bool == 0; // 0x6 Not
	if(var_60_bool == 0) goto Label_10; // 0x7 JumpB
	var_9_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_16_object); // 0xa Func
	var_61_int = 0; // 0xc PushV
	func_1143(var_61_int); // 0xd Call
	SetNPCName(var_61_int); // 0xf ObjFunc
	var_62_string = ""; // 0x11 PushV
	func_1145(var_62_string); // 0x12 Call
	SetPhoto(var_62_string); // 0x14 ObjFunc
	var_63_int = 0; // 0x16 PushV
	func_1126(var_63_int); // 0x17 Call
	SetPlayerName(var_63_int); // 0x19 ObjFunc
	var_18_int = -1; // 0x1b MovI
	IsOverrideActive(var_17_bool); // 0x1c Func
	var_71_bool = var_17_bool; // 0x1e Push
	if(var_71_bool == 0) goto Label_34; // 0x1f JumpB
	var_9_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_16_object); // 0x22 Func
	var_72_object = Obj(); var_73_object = Obj(); // 0x24 PushV
	var_72_object = var_10_object; // 0x25 Mov
	var_73_object = var_16_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_74_object, var_75_object, var_76_string, var_77_bool, var_72_object, var_73_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_19_bool); // 0x2b ObjFunc
	
Label_45:
	var_122_bool = var_19_bool == 0; // 0x2d Not
	if(var_122_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_19_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_123_object = Obj(); // 0x34 PushV
	var_123_object = var_10_object; // 0x35 Mov
	func_996(); // 0x36 Call
	StopDialog(var_16_object); // 0x38 Func
	GetReturnValue(var_18_int); // 0x3a ObjFunc
	var_9_int = var_18_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_1025(var_115_cvector, var_116_cvector)
{
	var_117_float = 0; var_118_float = 0; // 0x401 PushV
	var_119_int = var_116_cvector | var_116_cvector; // 0x402 Or
	var_118_float = sqrt(var_119_int); // 0x403 Sqrt2
	var_120_float = 0.0; // 0x404 PushF
	var_121_bool = var_118_float < var_120_float; // 0x405 LT
	if(var_121_bool == 0) goto Label_1033; // 0x406 JumpB
	var_115_cvector = CVector(0.0, 0.0, 0.0); // 0x407 MovV
	return 2; // 0x408 Return
	
Label_1033:
	var_115_cvector = var_116_cvector / var_116_cvector; // 0x409 Div2
	return 2; // 0x40a Return
}


func_640(var_17_object)
{
	var_18_object = Obj(); // 0x281 PushV
	var_18_object = var_17_object; // 0x282 Mov
	func_649(var_18_object); // 0x283 Call
	
Label_645:
	Hold(); // 0x285 Func
	goto Label_645; // 0x287 Jump
}


func_772(var_157_cvector)
{
	var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); // 0x304 PushV
	GetPosition(var_159_cvector); // 0x305 Func
	var_157_cvector = var_159_cvector; // 0x307 Mov
	return 2; // 0x308 Return
}


func_777(var_142_cvector)
{
	var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); // 0x309 PushV
	GetPosition(var_146_cvector); // 0x30a Func
	GetPosition(var_147_cvector); // 0x30c ObjFunc
	var_142_cvector = var_147_cvector - var_146_cvector; // 0x30e Sub2
	return 4; // 0x30f Return
}


func_649(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); // 0x289 PushV
	var_39_bool = var_18_object == 0; // 0x28a NullEq
	if(var_39_bool == 0) goto Label_657; // 0x28b JumpB
	var_40_string = ""; // 0x28c PushV
	var_40_string = "fdie"; // 0x28d MovS
	func_736(var_40_string); // 0x28e Call
	goto Label_735; // 0x290 Jump
	
Label_735:
	return 20; // 0x2df Return
	
Label_657:
	GetPosition(var_29_cvector); // 0x291 ObjFunc
	GetPosition(var_30_cvector); // 0x293 Func
	GetDirection(var_31_cvector); // 0x295 Func
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x297 Sub2
	var_43_float = GetByIndex(var_32_cvector, 0); // 0x298 PushE
	var_44_float = GetByIndex(var_31_cvector, 0); // 0x299 PushE
	var_45_float = var_43_float * var_44_float; // 0x29a Mult
	var_46_float = GetByIndex(var_32_cvector, 2); // 0x29b PushE
	var_47_float = GetByIndex(var_31_cvector, 2); // 0x29c PushE
	var_48_float = var_46_float * var_47_float; // 0x29d Mult
	var_49_int = var_45_float + var_48_float; // 0x29e Add
	var_50_int = 0; // 0x29f PushI
	var_51_bool = var_49_int >= var_50_int; // 0x2a0 GE
	if(var_51_bool == 0) goto Label_676; // 0x2a1 JumpB
	var_33_string = "fdie"; // 0x2a2 MovS
	goto Label_677; // 0x2a3 Jump
	
Label_677:
	RemoveRTEnvelope(); // 0x2a5 Func
	SetDeathState(); // 0x2a7 Func
	Stop(); // 0x2a9 Func
	StopAsync(); // 0x2ab Func
	var_34_object = var_18_object; // 0x2ad Mov
	var_52_string = "GetScriptProperty"; // 0x2ae PushS
	var_53_int = 2; // 0x2af PushI
	var_54_bool = IsFuncExist(var_18_object, var_52_string, var_53_int); // 0x2b0 FuncExist
	if(var_54_bool == 0) goto Label_701; // 0x2b1 JumpB
	var_55_string = "Owner"; // 0x2b2 PushS
	HasScriptProperty(var_35_bool, var_55_string); // 0x2b3 ObjFunc
	var_56_bool = var_35_bool; // 0x2b5 Push
	if(var_56_bool == 0) goto Label_701; // 0x2b6 JumpB
	var_57_string = "Owner"; // 0x2b7 PushS
	GetScriptProperty(var_34_object, var_57_string); // 0x2b8 ObjFunc
	var_58_bool = var_34_object == 0; // 0x2ba NullEq
	if(var_58_bool == 0) goto Label_701; // 0x2bb JumpB
	var_34_object = var_18_object; // 0x2bc Mov
	
Label_701:
	var_59_string = "@GetEyesHeight"; // 0x2bd PushS
	var_60_int = 1; // 0x2be PushI
	var_61_bool = IsFuncExist(var_34_object, var_59_string, var_60_int); // 0x2bf FuncExist
	if(var_61_bool == 0) goto Label_716; // 0x2c0 JumpB
	GetEyesHeight(var_37_float); // 0x2c1 ObjFunc
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x2c3 MovV
	var_62_float = GetByIndex(var_38_cvector, 1); // 0x2c4 PushE
	var_62_float = var_37_float; // 0x2c5 Mov
	SetByIndex(var_38_cvector, 1) = var_62_float; // 0x2c6 PopE
	var_63_string = "head"; // 0x2c7 PushS
	LookAsync(var_18_object, var_63_string, var_38_cvector); // 0x2c8 Func
	var_36_bool = 1; // 0x2ca MovB
	goto Label_717; // 0x2cb Jump
	
Label_717:
	var_64_string = "all"; // 0x2cd PushS
	PlayAnimation(var_64_string, var_33_string); // 0x2ce Func
	WaitForAnimEnd(); // 0x2d0 Func
	var_65_bool = var_36_bool; // 0x2d2 Push
	if(var_65_bool == 0) goto Label_729; // 0x2d3 JumpB
	StopAsync(); // 0x2d4 Func
	var_66_string = "head"; // 0x2d6 PushS
	UnlookAsync(var_66_string); // 0x2d7 Func
	
Label_729:
	var_67_string = "all"; // 0x2d9 PushS
	LockAnimationEnd(var_67_string, var_33_string); // 0x2da Func
	RemoveEnvelope(); // 0x2dc Func
	var_34_object = 0; // 0x2de SetNull
	
Label_716:
	var_36_bool = 0; // 0x2cc MovB
	
Label_676:
	var_33_string = "bdie"; // 0x2a4 MovS
}


func_1035(var_66_float, var_67_float, var_68_float)
{
	var_71_bool = var_67_float < var_68_float; // 0x40c LT
	if(var_71_bool == 0) goto Label_1040; // 0x40d JumpB
	var_66_float = var_67_float; // 0x40e Mov
	goto Label_1041; // 0x40f Jump
	
Label_1041:
	return 0; // 0x411 Return
	
Label_1040:
	var_66_float = var_68_float; // 0x410 Mov
}


func_141(var_2_object, var_87_string)
{
	var_88_bool = 0; // 0x8e PushV
	func_1147(var_88_bool); // 0x8f Call
	var_89_bool = var_88_bool == 0; // 0x91 Not
	if(var_89_bool == 0) goto Label_148; // 0x92 JumpB
	return 0; // 0x93 Return
	
Label_148:
	var_90_bool = var_87_string == var_2_object; // 0x94 Eq
	if(var_90_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_91_string = ""; // 0x97 PushV
	var_91_string = var_87_string; // 0x98 Mov
	func_1000(var_91_string); // 0x99 Call
	var_2_object = var_87_string; // 0x9b TMov
	return 0; // 0x9c Return
}


func_1165()
{
	var_11_object = Obj(); var_12_float = 0; var_13_object = Obj(); var_14_float = 0; // 0x48d PushV
	var_15_string = "player"; // 0x48e PushS
	FindActor(var_13_object, var_15_string); // 0x48f Func
	var_16_object = var_13_object; // 0x491 Push
	if(var_16_object == 0) goto Label_1189; // 0x492 JumpB
	var_17_float = 0; var_18_object = Obj(); // 0x493 PushV
	var_18_object = var_13_object; // 0x494 Mov
	func_784(var_18_object); // 0x495 Call
	var_25_float = 640000.0; // 0x497 PushF
	var_26_bool = var_17_float <= var_25_float; // 0x498 LE
	if(var_26_bool == 0) goto Label_1189; // 0x499 JumpB
	var_27_float = 0; var_28_object = Obj(); var_29_float = 0; var_30_int = 0; // 0x49a PushV
	var_28_object = var_13_object; // 0x49b Mov
	var_29_float = 0.05; // 0x49c MovF
	var_30_int = 0; // 0x49d MovI
	func_804(var_27_float, var_28_object, var_29_float, var_30_int); // 0x49e Call
	var_14_float = var_27_float; // 0x49f Mov
	var_83_int = 6; // 0x4a1 PushI
	var_84_float = 0.05; // 0x4a2 PushF
	ReportHit(var_13_object, var_83_int, var_14_float, var_84_float); // 0x4a3 Func
	
Label_1189:
	return 4; // 0x4a5 Return
}


func_784(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x310 PushV
	GetPosition(var_22_cvector); // 0x311 Func
	GetPosition(var_23_cvector); // 0x313 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x315 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x316 Or2
	return 6; // 0x317 Return
}


func_1042(var_76_float, var_77_float, var_78_float, var_79_float)
{
	var_80_bool = var_77_float < var_78_float; // 0x413 LT
	if(var_80_bool == 0) goto Label_1047; // 0x414 JumpB
	var_76_float = var_78_float; // 0x415 Mov
	return 0; // 0x416 Return
	
Label_1047:
	var_81_bool = var_77_float > var_79_float; // 0x417 GT
	if(var_81_bool == 0) goto Label_1051; // 0x418 JumpB
	var_76_float = var_79_float; // 0x419 Mov
	return 0; // 0x41a Return
	
Label_1051:
	var_76_float = var_77_float; // 0x41b Mov
	return 0; // 0x41c Return
}


func_792(var_43_bool, var_44_object, var_45_string)
{
	var_46_bool = 0; var_47_bool = 0; // 0x318 PushV
	var_48_string = "HasProperty"; // 0x319 PushS
	var_49_int = 2; // 0x31a PushI
	var_50_bool = IsFuncExist(var_44_object, var_48_string, var_49_int); // 0x31b FuncExist
	var_51_bool = var_50_bool == 0; // 0x31c Not
	if(var_51_bool == 0) goto Label_800; // 0x31d JumpB
	var_43_bool = 0; // 0x31e MovB
	return 2; // 0x31f Return
	
Label_800:
	HasProperty(var_45_string, var_47_bool); // 0x320 ObjFunc
	var_43_bool = var_47_bool; // 0x322 Mov
	return 2; // 0x323 Return
}


func_1053(var_148_float, var_149_cvector, var_150_cvector)
{
	var_151_int = var_149_cvector | var_150_cvector; // 0x41e Or
	var_152_int = var_149_cvector | var_149_cvector; // 0x41f Or
	var_153_int = var_150_cvector | var_150_cvector; // 0x420 Or
	var_154_float = var_152_int * var_153_int; // 0x421 Mult
	var_155_float = sqrt(var_154_float); // 0x422 Sqrt
	var_148_float = var_151_int / var_151_int; // 0x423 Div2
	return 0; // 0x424 Return
}


func_804(var_27_float, var_28_object, var_29_float, var_30_int)
{
	var_31_int = 0; var_32_string = ""; var_33_int = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; var_37_int = 0; var_38_string = ""; var_39_int = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0; // 0x324 PushV
	var_43_bool = 0; var_44_object = Obj(); var_45_string = ""; // 0x325 PushV
	var_44_object = var_28_object; // 0x326 Mov
	var_45_string = "health"; // 0x327 MovS
	func_792(var_43_bool, var_44_object, var_45_string); // 0x328 Call
	var_52_bool = var_43_bool == 0; // 0x32a Not
	if(var_52_bool == 0) goto Label_814; // 0x32b JumpB
	var_27_float = 0.0; // 0x32c MovF
	return 12; // 0x32d Return
	
Label_814:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0x32e PushV
	var_54_object = var_28_object; // 0x32f Mov
	var_55_string = "armor"; // 0x330 MovS
	func_792(var_53_bool, var_54_object, var_55_string); // 0x331 Call
	var_56_bool = var_53_bool == 0; // 0x333 Not
	if(var_56_bool == 0) goto Label_823; // 0x334 JumpB
	var_37_int = 0; // 0x335 MovI
	goto Label_826; // 0x336 Jump
	
Label_826:
	var_57_string = "armor_"; // 0x33a PushS
	var_58_string = ""; var_59_int = 0; // 0x33b PushV
	var_59_int = var_30_int; // 0x33c Mov
	func_764(var_58_string, var_59_int); // 0x33d Call
	var_38_string = var_57_string + var_58_string; // 0x33f Add2
	var_62_bool = 0; var_63_object = Obj(); var_64_string = ""; // 0x340 PushV
	var_63_object = var_28_object; // 0x341 Mov
	var_64_string = var_38_string; // 0x342 Mov
	func_792(var_62_bool, var_63_object, var_64_string); // 0x343 Call
	var_65_bool = var_62_bool == 0; // 0x345 Not
	if(var_65_bool == 0) goto Label_841; // 0x346 JumpB
	var_39_int = 0; // 0x347 MovI
	goto Label_843; // 0x348 Jump
	
Label_843:
	var_66_float = 0; var_67_float = 0; var_68_float = 0; // 0x34b PushV
	var_69_int = var_37_int + var_39_int; // 0x34c Add
	var_70_float = 100.0; // 0x34d PushF
	var_67_float = var_69_int / var_69_int; // 0x34e Div2
	var_68_float = 1; // 0x34f MovI
	func_1035(var_66_float, var_67_float, var_68_float); // 0x350 Call
	var_40_float = var_66_float; // 0x351 Mov
	var_72_string = "health"; // 0x353 PushS
	GetProperty(var_72_string, var_41_float); // 0x354 ObjFunc
	var_73_int = 1; // 0x356 PushI
	var_74_int = var_73_int - var_40_float; // 0x357 Sub
	var_42_float = var_29_float * var_74_int; // 0x358 Mult2
	var_75_string = "health"; // 0x359 PushS
	var_76_float = 0; var_77_float = 0; var_78_float = 0; var_79_float = 0; // 0x35a PushV
	var_77_float = var_41_float - var_42_float; // 0x35b Sub2
	var_78_float = 0; // 0x35c MovI
	var_79_float = 1; // 0x35d MovI
	func_1042(var_76_float, var_77_float, var_78_float, var_79_float); // 0x35e Call
	SetProperty(var_75_string, var_76_float); // 0x360 ObjFunc
	var_27_float = var_42_float; // 0x362 Mov
	return 12; // 0x363 Return
	
Label_841:
	GetProperty(var_38_string, var_39_int); // 0x349 ObjFunc
	
Label_823:
	var_82_string = "armor"; // 0x337 PushS
	GetProperty(var_82_string, var_37_int); // 0x338 ObjFunc
}


func_1061(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0; // 0x425 PushV
	GetVariable(var_82_string, var_84_int); // 0x426 Func
	var_81_int = var_84_int; // 0x428 Mov
	return 2; // 0x429 Return
}


func_935(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0x3a7 PushV
	IsLoaded(var_27_bool); // 0x3a8 Func
	var_25_bool = var_27_bool; // 0x3aa Mov
	return 2; // 0x3ab Return
}


func_1066(var_11_bool, var_12_string, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x42a PushV
	FindActor(var_15_object, var_12_string); // 0x42b Func
	var_16_bool = var_15_object == 0; // 0x42d NullEq
	if(var_16_bool == 0) goto Label_1073; // 0x42e JumpB
	var_11_bool = 0; // 0x42f MovB
	return 2; // 0x430 Return
	
Label_1073:
	Trigger(var_15_object, var_13_string); // 0x431 Func
	var_11_bool = 1; // 0x433 MovB
	return 2; // 0x434 Return
}


func_940(var_20_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; // 0x3ac PushV
	GetPosition(var_31_cvector); // 0x3ad ObjFunc
	GetEyesHeight(var_30_float); // 0x3af ObjFunc
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x3b1 PushE
	var_38_float = var_38_float + var_30_float; // 0x3b2 Add2
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x3b3 PopE
	GetPosition(var_32_cvector); // 0x3b4 Func
	GetEyesHeight(var_30_float); // 0x3b6 Func
	var_39_float = GetByIndex(var_32_cvector, 1); // 0x3b8 PushE
	var_39_float = var_39_float + var_30_float; // 0x3b9 Add2
	SetByIndex(var_32_cvector, 1) = var_39_float; // 0x3ba PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x3bb Sub2
	var_40_float = GetByIndex(var_33_cvector, 1); // 0x3bc PushE
	var_40_float = 0; // 0x3bd MovI
	SetByIndex(var_33_cvector, 1) = var_40_float; // 0x3be PopE
	var_41_int = var_33_cvector | var_33_cvector; // 0x3bf Or
	var_42_float = sqrt(var_41_int); // 0x3c0 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x3c1 Div2
	var_34_cvector = -var_33_cvector; // 0x3c2 Neg2
	var_43_int = 70; // 0x3c3 PushI
	var_44_float = var_33_cvector * var_43_int; // 0x3c4 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x3c5 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x3c6 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x3c7 Xor2
	func_1025(var_45_cvector, var_46_cvector); // 0x3c8 Call
	var_53_int = 25; // 0x3ca PushI
	var_54_float = var_45_cvector * var_53_int; // 0x3cb Mult
	var_55_int = var_44_float + var_54_float; // 0x3cc Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x3cd PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x3ce Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x3cf Add2
	IsOverrideActive(var_37_bool); // 0x3d0 Func
	var_57_bool = var_37_bool; // 0x3d2 Push
	if(var_57_bool == 0) goto Label_982; // 0x3d3 JumpB
	var_20_bool = 0; // 0x3d4 MovB
	return 16; // 0x3d5 Return
	
Label_982:
	StopWorld(); // 0x3d6 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x3d8 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x3da PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x3db PushE
	Rotate(var_58_float, var_59_float); // 0x3dc Func
	CameraWaitForPlayFinish(); // 0x3de Func
	ResumeWorld(); // 0x3e0 Func
	var_20_bool = 1; // 0x3e2 MovB
	return 16; // 0x3e3 Return
}


func_556(var_0_object, var_1_object, var_2_object, var_85_int)
{
	var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; // 0x22c PushV
	var_94_int = 120; // 0x22d PushI
	var_95_bool = var_85_int != var_94_int; // 0x22e Neq
	if(var_95_bool == 0) goto Label_561; // 0x22f JumpB
	return 8; // 0x230 Return
	
Label_561:
	var_96_bool = var_0_object == 0; // 0x231 NullEq
	if(var_96_bool == 0) goto Label_570; // 0x232 JumpB
	Stop(); // 0x233 Func
	var_97_int = 1; // 0x235 PushI
	KillTimer(var_97_int); // 0x236 Func
	var_2_object = 1; // 0x238 TMovB
	goto Label_607; // 0x239 Jump
	
Label_607:
	return 8; // 0x25f Return
	
Label_570:
	GetDirection(var_90_cvector); // 0x23a Func
	var_98_float = 7000.0; // 0x23c PushF
	FindDirLength(var_91_float, var_90_cvector, var_98_float); // 0x23d Func
	var_99_cvector = CVector(0,0,0); var_100_float = 0; // 0x23f PushV
	var_100_float = 1.74533; // 0x240 MovF
	func_462(var_99_cvector, var_100_float); // 0x241 Call
	var_92_cvector = var_99_cvector; // 0x242 Mov
	var_93_float = var_92_cvector | var_92_cvector; // 0x244 Or2
	var_129_bool = 0; // 0x245 PushV
	var_129_bool = 0; // 0x246 MovB
	var_130_float = 10000.0; // 0x247 PushF
	var_131_bool = var_93_float >= var_130_float; // 0x248 GE
	if(var_131_bool == 0) goto Label_600; // 0x249 JumpB
	var_132_bool = 0; // 0x24a PushV
	var_132_bool = 1; // 0x24b MovB
	var_133_float = var_91_float * var_91_float; // 0x24c Mult
	var_134_float = 2.25; // 0x24d PushF
	var_135_float = var_133_float * var_134_float; // 0x24e Mult
	var_136_bool = var_93_float >= var_135_float; // 0x24f GE
	if(var_136_bool == 0) goto Label_598; // 0x250 JumpB
	var_137_bool = 0; // 0x251 PushV
	func_624(var_132_bool, var_137_bool); // 0x252 Call
	if(var_137_bool == 0) goto Label_598; // 0x254 JumpB
	var_132_bool = 0; // 0x255 MovB
	
Label_598:
	if(var_132_bool == 0) goto Label_600; // 0x256 JumpB
	var_129_bool = 1; // 0x257 MovB
	
Label_600:
	if(var_129_bool == 0) goto Label_607; // 0x258 JumpB
	Stop(); // 0x259 Func
	var_157_cvector = CVector(0,0,0); // 0x25b PushV
	func_772(var_157_cvector); // 0x25c Call
	var_1_object = var_157_cvector + var_92_cvector; // 0x25e Add2
}


func_436()
{
	StopAnimation(); // 0x1b4 Func
	StopGroup0(); // 0x1b6 Func
	return 0; // 0x1b8 Return
}


func_1078(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = ""; // 0x436 PushV
	var_38_string = "idle"; // 0x437 MovS
	var_39_int = var_36_int; // 0x438 Push
	if(var_39_int == 0) goto Label_1083; // 0x439 JumpB
	var_38_string = var_38_string + var_36_int; // 0x43a Add2
	
Label_1083:
	var_35_string = var_38_string; // 0x43b Mov
	return 2; // 0x43c Return
}


func_1085(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0x43d PushV
	var_32_int = 0; // 0x43e MovI
	
Label_1087:
	var_34_string = "all"; // 0x43f PushS
	var_35_string = ""; var_36_int = 0; // 0x440 PushV
	var_36_int = var_32_int; // 0x441 Mov
	func_1078(var_35_string, var_36_int); // 0x442 Call
	HasAnimation(var_33_bool, var_34_string, var_35_string); // 0x444 Func
	var_40_bool = var_33_bool == 0; // 0x446 Not
	if(var_40_bool == 0) goto Label_1097; // 0x447 JumpB
	goto Label_1100; // 0x448 Jump
	
Label_1100:
	var_29_int = var_32_int; // 0x44c Mov
	return 4; // 0x44d Return
	
Label_1097:
	var_41_int = 1; // 0x449 PushI
	var_32_int = var_32_int + var_41_int; // 0x44a Add2
	goto Label_1087; // 0x44b Jump
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_72_object, var_73_object)
{
	var_0_object = var_73_object; // 0x40 TMov
	var_1_object = var_72_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_78_int = 1; // 0x43 PushI
	if(var_78_int == 0) goto Label_111; // 0x44 JumpB
	var_79_bool = 0; var_80_object = Obj(); // 0x45 PushV
	var_80_object = var_1_object; // 0x46 MovT
	func_1114(var_80_object); // 0x47 Call
	if(var_79_bool == 0) goto Label_94; // 0x49 JumpB
	var_87_string = ""; // 0x4a PushV
	var_87_string = "Neutral"; // 0x4b MovS
	func_141(var_73_object, var_87_string); // 0x4c Call
	var_102_int = 12071; // 0x4e PushI
	SetMessage(var_102_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_103_int = 12072; // 0x53 PushI
	var_104_int = 13294; // 0x54 PushI
	var_105_int = 13293; // 0x55 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x56 TObjFunc
	var_106_int = 12083; // 0x58 PushI
	var_107_int = 13294; // 0x59 PushI
	var_108_int = 13306; // 0x5a PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x5b TObjFunc
	goto Label_111; // 0x5d Jump
	
Label_111:
	var_109_bool = 0; // 0x6f PushV
	func_1147(var_109_bool); // 0x70 Call
	if(var_109_bool == 0) goto Label_126; // 0x72 JumpB
	
Label_115:
	lshWaitForAnimEnd(); // 0x73 Func
	var_110_string = var_3_string; // 0x75 PushT
	if(var_110_string == 0) goto Label_120; // 0x76 JumpB
	goto Label_125; // 0x77 Jump
	
Label_125:
	goto Label_140; // 0x7d Jump
	
Label_140:
	return 0; // 0x8c Return
	
Label_120:
	var_111_string = ""; // 0x78 PushV
	var_111_string = var_2_object; // 0x79 MovT
	func_1000(var_111_string); // 0x7a Call
	goto Label_115; // 0x7c Jump
	
Label_126:
	var_112_string = "all"; // 0x7e PushS
	var_113_string = "idle"; // 0x7f PushS
	PlayAnimation(var_112_string, var_113_string); // 0x80 Func
	
Label_130:
	WaitForAnimEnd(); // 0x82 Func
	var_114_string = var_3_string; // 0x84 PushT
	if(var_114_string == 0) goto Label_135; // 0x85 JumpB
	goto Label_140; // 0x86 Jump
	
Label_135:
	var_115_string = "all"; // 0x87 PushS
	var_116_string = "idle"; // 0x88 PushS
	PlayAnimation(var_115_string, var_116_string); // 0x89 Func
	goto Label_130; // 0x8b Jump
	
Label_94:
	var_117_string = ""; // 0x5e PushV
	var_117_string = "Neutral"; // 0x5f MovS
	func_141(var_73_object, var_117_string); // 0x60 Call
	var_118_int = 13029; // 0x62 PushI
	SetMessage(var_118_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_119_int = 13030; // 0x67 PushI
	var_120_int = -1; // 0x68 PushI
	var_121_int = 14237; // 0x69 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x6a TObjFunc
	goto Label_111; // 0x6c Jump
}


func_1102()
{
	var_16_string = "d6q03"; // 0x44f PushS
	var_17_int = 2; // 0x450 PushI
	SetVariable(var_16_string, var_17_int); // 0x451 Func
	return 0; // 0x453 Return
}


func_462(var_99_cvector, var_100_float)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_float = 0; // 0x1ce PushV
	GetPosition(var_107_cvector); // 0x1cf Func
	GetPosition(var_108_cvector); // 0x1d1 TObjFunc
	GetDirection(var_109_cvector); // 0x1d3 Func
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); // 0x1d5 PushV
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x1d6 PushV
	var_116_cvector = var_107_cvector - var_108_cvector; // 0x1d7 Sub2
	func_1025(var_115_cvector, var_116_cvector); // 0x1d8 Call
	var_122_float = 0.75; // 0x1da PushF
	var_123_float = var_109_cvector * var_122_float; // 0x1db Mult
	var_114_cvector = var_115_cvector + var_123_float; // 0x1dc Add2
	func_1025(var_113_cvector, var_114_cvector); // 0x1dd Call
	var_110_cvector = var_113_cvector; // 0x1de Mov
	var_124_int = 32; // 0x1e0 PushI
	var_125_float = 7000.0; // 0x1e1 PushF
	FindLongestDir(var_111_cvector, var_112_float, var_110_cvector, var_100_float, var_124_int, var_125_float); // 0x1e2 Func
	var_126_int = 100; // 0x1e4 PushI
	var_112_float = var_112_float - var_126_int; // 0x1e5 Sub2
	var_127_int = 0; // 0x1e6 PushI
	var_128_bool = var_112_float < var_127_int; // 0x1e7 LT
	if(var_128_bool == 0) goto Label_490; // 0x1e8 JumpB
	var_112_float = 0; // 0x1e9 MovI
	
Label_490:
	var_99_cvector = var_111_cvector * var_112_float; // 0x1ea Mult2
	return 12; // 0x1eb Return
}


func_1108()
{
	var_20_string = "ood6Albinos1"; // 0x455 PushS
	var_21_int = 1; // 0x456 PushI
	SetVariable(var_20_string, var_21_int); // 0x457 Func
	return 0; // 0x459 Return
}


func_1114(var_79_bool)
{
	var_81_int = 0; var_82_string = ""; // 0x45b PushV
	var_82_string = "ood6Albinos1"; // 0x45c MovS
	func_1061(var_81_int, var_82_string); // 0x45d Call
	var_85_int = 0; // 0x45f PushI
	var_86_bool = var_81_int == var_85_int; // 0x460 Eq
	if(var_86_bool == 0) goto Label_1124; // 0x461 JumpB
	var_79_bool = 1; // 0x462 MovB
	return 0; // 0x463 Return
	
Label_1124:
	var_79_bool = 0; // 0x464 MovB
	return 0; // 0x465 Return
}


func_608(var_2_object)
{
	Stop(); // 0x260 Func
	var_9_int = 120; // 0x262 PushI
	KillTimer(var_9_int); // 0x263 Func
	var_2_object = 1; // 0x265 TMovB
	return 0; // 0x266 Return
}


func_736(var_40_string)
{
	RemoveRTEnvelope(); // 0x2e1 Func
	SetDeathState(); // 0x2e3 Func
	Stop(); // 0x2e5 Func
	StopAsync(); // 0x2e7 Func
	StopSecondaryAnimation(); // 0x2e9 Func
	var_41_string = "all"; // 0x2eb PushS
	PlayAnimation(var_41_string, var_40_string); // 0x2ec Func
	WaitForAnimEnd(); // 0x2ee Func
	var_42_string = "all"; // 0x2f0 PushS
	LockAnimationEnd(var_42_string, var_40_string); // 0x2f1 Func
	RemoveEnvelope(); // 0x2f3 Func
	return 0; // 0x2f5 Return
}


func_996()
{
	CameraSwitchToNormal(); // 0x3e5 Func
	return 0; // 0x3e7 Return
}


func_868(var_12_object, var_13_int)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; // 0x364 PushV
	var_35_bool = 0; // 0x365 PushV
	var_35_bool = 0; // 0x366 MovB
	var_36_int = 4; // 0x367 PushI
	var_37_bool = var_13_int != var_36_int; // 0x368 Neq
	if(var_37_bool == 0) goto Label_878; // 0x369 JumpB
	var_38_int = 5; // 0x36a PushI
	var_39_bool = var_13_int != var_38_int; // 0x36b Neq
	if(var_39_bool == 0) goto Label_878; // 0x36c JumpB
	var_35_bool = 1; // 0x36d MovB
	
Label_878:
	if(var_35_bool == 0) goto Label_897; // 0x36e JumpB
	GetScene(var_25_object); // 0x36f Func
	GetPosition(var_27_cvector); // 0x371 Func
	GetEyesHeight(var_28_float); // 0x373 Func
	var_40_float = GetByIndex(var_27_cvector, 1); // 0x375 PushE
	var_41_int = 2; // 0x376 PushI
	var_42_float = var_28_float / var_41_int; // 0x377 Div
	var_40_float = var_40_float + var_42_float; // 0x378 Add2
	SetByIndex(var_27_cvector, 1) = var_40_float; // 0x379 PopE
	var_43_string = "scripted"; // 0x37a PushS
	var_44_cvector = CVector(0.0, 0.0, 1.0); // 0x37b PushVec
	var_45_string = "blood.xml"; // 0x37c PushS
	AddActorByType(var_26_object, var_43_string, var_25_object, var_27_cvector, var_44_cvector, var_45_string); // 0x37d Func
	var_26_object = 0; // 0x37f SetNull
	var_25_object = 0; // 0x380 SetNull
	
Label_897:
	var_46_bool = var_12_object == 0; // 0x381 NullEq
	if(var_46_bool == 0) goto Label_900; // 0x382 JumpB
	return 20; // 0x383 Return
	
Label_900:
	GetSecondaryAnimationType(var_29_int); // 0x384 Func
	var_47_int = 0; // 0x386 PushI
	var_48_bool = var_29_int < var_47_int; // 0x387 LT
	if(var_48_bool == 0) goto Label_906; // 0x388 JumpB
	return 20; // 0x389 Return
	
Label_906:
	GetPosition(var_30_cvector); // 0x38a ObjFunc
	GetPosition(var_31_cvector); // 0x38c Func
	GetDirection(var_32_cvector); // 0x38e Func
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x390 Sub2
	var_49_float = GetByIndex(var_33_cvector, 0); // 0x391 PushE
	var_50_float = GetByIndex(var_32_cvector, 0); // 0x392 PushE
	var_51_float = var_49_float * var_50_float; // 0x393 Mult
	var_52_float = GetByIndex(var_33_cvector, 2); // 0x394 PushE
	var_53_float = GetByIndex(var_32_cvector, 2); // 0x395 PushE
	var_54_float = var_52_float * var_53_float; // 0x396 Mult
	var_55_int = var_51_float + var_54_float; // 0x397 Add
	var_56_int = 0; // 0x398 PushI
	var_57_bool = var_55_int >= var_56_int; // 0x399 GE
	if(var_57_bool == 0) goto Label_925; // 0x39a JumpB
	var_34_string = "fhit"; // 0x39b MovS
	goto Label_926; // 0x39c Jump
	
Label_926:
	var_58_string = "hit_react"; // 0x39e PushS
	var_59_string = "1"; // 0x39f PushS
	var_60_int = var_34_string + var_59_string; // 0x3a0 Add
	var_61_string = "2"; // 0x3a1 PushS
	var_62_int = var_34_string + var_61_string; // 0x3a2 Add
	var_63_int = -10; // 0x3a3 PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x3a4 Func
	return 20; // 0x3a6 Return
	
Label_925:
	var_34_string = "bhit"; // 0x39d MovS
}


func_1126(var_63_int)
{
	var_64_int = 0; var_65_int = 0; // 0x466 PushV
	var_66_string = "player"; // 0x467 PushS
	GetVariable(var_66_string, var_65_int); // 0x468 Func
	var_67_int = 0; // 0x46a PushI
	var_68_bool = var_65_int == var_67_int; // 0x46b Eq
	if(var_68_bool == 0) goto Label_1136; // 0x46c JumpB
	var_63_int = 200001; // 0x46d MovI
	return 2; // 0x46e Return
	
Label_1136:
	var_69_int = 1; // 0x470 PushI
	var_70_bool = var_65_int == var_69_int; // 0x471 Eq
	if(var_70_bool == 0) goto Label_1141; // 0x472 JumpB
	var_63_int = 200002; // 0x473 MovI
	return 2; // 0x474 Return
	
Label_1141:
	var_63_int = 200003; // 0x475 MovI
	return 2; // 0x476 Return
}


func_1000(var_91_string)
{
	var_92_float = 0; var_93_float = 0; var_94_float = 0; var_95_float = 0; // 0x3e8 PushV
	var_96_string = "playing "; // 0x3e9 PushS
	var_97_int = var_96_string + var_91_string; // 0x3ea Add
	Trace(var_97_int); // 0x3eb Func
	lshGetAnimTimes(var_91_string, var_94_float, var_95_float); // 0x3ed Func
	lshPlayAnimation(var_94_float, var_95_float); // 0x3ef Func
	var_98_string = "start: "; // 0x3f1 PushS
	var_99_int = var_98_string + var_94_float; // 0x3f2 Add
	Trace(var_99_int); // 0x3f3 Func
	var_100_string = "end: "; // 0x3f5 PushS
	var_101_int = var_100_string + var_95_float; // 0x3f6 Add
	Trace(var_101_int); // 0x3f7 Func
	return 4; // 0x3f9 Return
}


func_492(var_0_object, var_1_object, var_2_object, var_12_object)
{
	var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x1ec PushV
	var_0_object = var_12_object; // 0x1ed TMov
	var_26_cvector = CVector(0,0,0); var_27_float = 0; // 0x1ee PushV
	var_27_float = 1.74533; // 0x1ef MovF
	func_462(var_26_cvector, var_27_float); // 0x1f0 Call
	var_21_cvector = var_26_cvector; // 0x1f1 Mov
	var_22_float = var_21_cvector | var_21_cvector; // 0x1f3 Or2
	var_56_float = 10000.0; // 0x1f4 PushF
	var_57_bool = var_22_float < var_56_float; // 0x1f5 LT
	if(var_57_bool == 0) goto Label_512; // 0x1f6 JumpB
	var_58_string = "Can't retreat, distance: "; // 0x1f7 PushS
	var_59_float = sqrt(var_22_float); // 0x1f8 Sqrt
	var_60_int = var_58_string + var_59_float; // 0x1f9 Add
	Trace(var_60_int); // 0x1fa Func
	var_61_float = 0.5; // 0x1fc PushF
	Sleep(var_61_float); // 0x1fd Func
	return 10; // 0x1ff Return
	
Label_512:
	var_62_float = GetByIndex(var_21_cvector, 0); // 0x200 PushE
	var_63_float = GetByIndex(var_21_cvector, 2); // 0x201 PushE
	Rotate(var_62_float, var_63_float); // 0x202 Func
	var_64_cvector = CVector(0,0,0); // 0x204 PushV
	func_772(var_64_cvector); // 0x205 Call
	var_1_object = var_64_cvector + var_21_cvector; // 0x207 Add2
	var_67_int = 120; // 0x208 PushI
	var_68_float = 0.5; // 0x209 PushF
	SetTimer(var_67_int, var_68_float); // 0x20a Func
	var_2_object = 0; // 0x20c TMovB
	
Label_525:
	var_69_int = 1; // 0x20d PushI
	MovePoint(var_69_int, var_69_int, var_23_bool); // 0x20e Func
	var_70_bool = var_23_bool; // 0x210 Push
	if(var_70_bool == 0) goto Label_553; // 0x211 JumpB
	var_71_bool = var_0_object == 0; // 0x212 NullEq
	if(var_71_bool == 0) goto Label_534; // 0x213 JumpB
	goto Label_555; // 0x214 Jump
	
Label_555:
	return 10; // 0x22b Return
	
Label_534:
	var_72_cvector = CVector(0,0,0); var_73_float = 0; // 0x216 PushV
	var_73_float = 2.61799; // 0x217 MovF
	func_462(var_72_cvector, var_73_float); // 0x218 Call
	var_24_cvector = var_72_cvector; // 0x219 Mov
	var_25_float = var_24_cvector | var_24_cvector; // 0x21b Or2
	var_74_float = 10000.0; // 0x21c PushF
	var_75_bool = var_25_float >= var_74_float; // 0x21d GE
	if(var_75_bool == 0) goto Label_552; // 0x21e JumpB
	var_76_cvector = CVector(0,0,0); // 0x21f PushV
	func_772(var_76_cvector); // 0x220 Call
	var_1_object = var_76_cvector + var_24_cvector; // 0x222 Add2
	var_77_int = 120; // 0x223 PushI
	var_78_float = 0.5; // 0x224 PushF
	SetTimer(var_77_int, var_78_float); // 0x225 Func
	goto Label_553; // 0x227 Jump
	
Label_553:
	var_79_bool = var_2_object == 0; // 0x229 Not
	if(var_79_bool == 0) goto Label_525; // 0x22a JumpB
	
Label_552:
	goto Label_555; // 0x228 Jump
}


func_367()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x16f PushV
	WaitForAnimEnd(); // 0x170 Func
	var_25_bool = 0; // 0x172 PushV
	func_935(var_25_bool); // 0x173 Call
	var_28_bool = var_25_bool == 0; // 0x175 Not
	if(var_28_bool == 0) goto Label_376; // 0x176 JumpB
	return 14; // 0x177 Return
	
Label_376:
	var_29_int = 0; // 0x178 PushV
	func_1085(var_29_int); // 0x179 Call
	var_18_int = var_29_int; // 0x17a Mov
	var_19_int = 0; // 0x17c MovI
	
Label_381:
	var_42_bool = 0; // 0x17d PushV
	var_42_bool = 0; // 0x17e MovB
	var_43_int = 5; // 0x17f PushI
	var_44_bool = var_19_int < var_43_int; // 0x180 LT
	if(var_44_bool == 0) goto Label_391; // 0x181 JumpB
	var_45_bool = 0; // 0x182 PushV
	func_935(var_45_bool); // 0x183 Call
	if(var_45_bool == 0) goto Label_391; // 0x185 JumpB
	var_42_bool = 1; // 0x186 MovB
	
Label_391:
	if(var_42_bool == 0) goto Label_435; // 0x187 JumpB
	var_46_int = 3; // 0x188 PushI
	irand(var_20_int, var_46_int); // 0x189 Func
	var_47_int = 0; // 0x18b PushI
	var_48_bool = var_20_int == var_47_int; // 0x18c Eq
	if(var_48_bool == 0) goto Label_415; // 0x18d JumpB
	var_49_int = var_18_int; // 0x18e Push
	if(var_49_int == 0) goto Label_414; // 0x18f JumpB
	irand(var_21_int, var_18_int); // 0x190 Func
	var_50_string = "all"; // 0x192 PushS
	var_51_string = ""; var_52_int = 0; // 0x193 PushV
	var_52_int = var_21_int; // 0x194 Mov
	func_1078(var_51_string, var_52_int); // 0x195 Call
	PlayAnimation(var_50_string, var_51_string); // 0x197 Func
	WaitForAnimEnd(var_22_bool); // 0x199 Func
	var_53_bool = var_22_bool == 0; // 0x19b Not
	if(var_53_bool == 0) goto Label_414; // 0x19c JumpB
	goto Label_435; // 0x19d Jump
	
Label_435:
	return 14; // 0x1b3 Return
	
Label_414:
	goto Label_432; // 0x19e Jump
	
Label_432:
	var_54_int = 1; // 0x1b0 PushI
	var_19_int = var_19_int + var_54_int; // 0x1b1 Add2
	goto Label_381; // 0x1b2 Jump
	
Label_415:
	var_55_int = 1; // 0x19f PushI
	var_56_bool = var_20_int == var_55_int; // 0x1a0 Eq
	if(var_56_bool == 0) goto Label_429; // 0x1a1 JumpB
	var_57_int = 4; // 0x1a2 PushI
	rand(var_23_float, var_57_int); // 0x1a3 Func
	var_58_int = 1; // 0x1a5 PushI
	var_59_int = var_23_float + var_58_int; // 0x1a6 Add
	Sleep(var_59_int, var_24_bool); // 0x1a7 Func
	var_60_bool = var_24_bool == 0; // 0x1a9 Not
	if(var_60_bool == 0) goto Label_428; // 0x1aa JumpB
	goto Label_435; // 0x1ab Jump
	
Label_428:
	goto Label_432; // 0x1ac Jump
	
Label_429:
	var_61_int = var_19_int; // 0x1ad Push
	if(var_61_int == 0) goto Label_432; // 0x1ae JumpB
	goto Label_435; // 0x1af Jump
}


func_624(var_0_object, var_137_bool)
{
	var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); // 0x270 PushV
	GetDirection(var_140_cvector); // 0x271 Func
	var_142_cvector = CVector(0,0,0); var_143_object = Obj(); // 0x273 PushV
	var_143_object = var_0_object; // 0x274 MovT
	func_777(var_143_object); // 0x275 Call
	var_141_cvector = var_142_cvector; // 0x276 Mov
	var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); // 0x278 PushV
	var_149_cvector = var_140_cvector; // 0x279 Mov
	var_150_cvector = var_141_cvector; // 0x27a Mov
	func_1053(var_148_float, var_149_cvector, var_150_cvector); // 0x27b Call
	var_156_float = -0.34202; // 0x27d PushF
	var_137_bool = var_148_float >= var_156_float; // 0x27e GE2
	return 4; // 0x27f Return
}


func_1143(var_61_int)
{
	var_61_int = 12611; // 0x477 MovI
	return 0; // 0x478 Return
}


func_1145(var_62_string)
{
	var_62_string = "ui/NPC_Black.png"; // 0x479 MovS
	return 0; // 0x47a Return
}


func_1018()
{
	var_11_bool = 0; // 0x3fa PushV
	func_1147(var_11_bool); // 0x3fb Call
	if(var_11_bool == 0) goto Label_1024; // 0x3fd JumpB
	lshStopSpeech(); // 0x3fe Func
	
Label_1024:
	return 0; // 0x400 Return
}


func_1147(var_88_bool)
{
	var_88_bool = 0; // 0x47b MovB
	return 0; // 0x47c Return
}


func_764(var_58_string, var_59_int)
{
	var_60_int = 1; // 0x2fd PushI
	var_61_bool = var_59_int == var_60_int; // 0x2fe Eq
	if(var_61_bool == 0) goto Label_770; // 0x2ff JumpB
	var_58_string = "fire"; // 0x300 MovS
	return 0; // 0x301 Return
	
Label_770:
	var_58_string = "phys"; // 0x302 MovS
	return 0; // 0x303 Return
}


func_1149(var_9_object)
{
	var_10_int = 100; // 0x47e PushI
	KillTimer(var_10_int); // 0x47f Func
	var_11_bool = 0; var_12_string = ""; var_13_string = ""; // 0x481 PushV
	var_12_string = "quest_d6_03"; // 0x482 MovS
	var_13_string = "albinos_dead"; // 0x483 MovS
	func_1066(var_11_bool, var_12_string, var_13_string); // 0x484 Call
	var_17_object = Obj(); // 0x486 PushV
	var_17_object = var_9_object; // 0x487 Mov
	TaskCall(4); // 0x488 TaskCall
	func_640(var_17_object); // 0x489 Call
	TaskReturn(); // 0x48a TaskReturn
	return 0; // 0x48c Return
}


