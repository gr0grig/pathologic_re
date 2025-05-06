task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xa2 PushI
	if(var_8_int == 0) goto Label_323; // 0xa3 JumpB
	func_554(); // 0xa5 Call
	var_10_int = 16263; // 0xa7 PushI
	var_11_bool = var_6_int == var_10_int; // 0xa8 Eq
	if(var_11_bool == 0) goto Label_214; // 0xa9 JumpB
	var_12_bool = 0; // 0xaa PushV
	var_12_bool = 0; // 0xab MovB
	var_13_bool = 0; var_14_object = Obj(); // 0xac PushV
	var_14_object = var_1_object; // 0xad MovT
	func_588(var_14_object); // 0xae Call
	if(var_13_bool == 0) goto Label_183; // 0xb0 JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0xb1 PushV
	var_22_object = var_1_object; // 0xb2 MovT
	func_600(var_22_object); // 0xb3 Call
	if(var_21_bool == 0) goto Label_183; // 0xb5 JumpB
	var_12_bool = 1; // 0xb6 MovB
	
Label_183:
	if(var_12_bool == 0) goto Label_214; // 0xb7 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0xb8 PushV
	var_27_object = var_1_object; // 0xb9 MovT
	var_28_object = var_0_object; // 0xba MovT
	func_582(); // 0xbb Call
	var_31_string = ""; // 0xbd PushV
	var_31_string = "Neutral"; // 0xbe MovS
	func_145(var_7_bool, var_31_string); // 0xbf Call
	var_46_int = 15005; // 0xc1 PushI
	SetMessage(var_46_int); // 0xc2 TObjFunc
	ClearReplies(); // 0xc4 TObjFunc
	var_47_int = 15006; // 0xc6 PushI
	var_48_int = 16265; // 0xc7 PushI
	var_49_int = 16264; // 0xc8 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xc9 TObjFunc
	var_50_int = 15017; // 0xcb PushI
	var_51_int = -1; // 0xcc PushI
	var_52_int = 16276; // 0xcd PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xce TObjFunc
	var_53_int = 15018; // 0xd0 PushI
	var_54_int = 16278; // 0xd1 PushI
	var_55_int = 16277; // 0xd2 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xd3 TObjFunc
	return 0; // 0xd5 Return
	
Label_214:
	var_56_int = 16278; // 0xd6 PushI
	var_57_bool = var_6_int == var_56_int; // 0xd7 Eq
	if(var_57_bool == 0) goto Label_237; // 0xd8 JumpB
	var_58_string = ""; // 0xd9 PushV
	var_58_string = "Neutral"; // 0xda MovS
	func_145(var_7_bool, var_58_string); // 0xdb Call
	var_59_int = 15019; // 0xdd PushI
	SetMessage(var_59_int); // 0xde TObjFunc
	ClearReplies(); // 0xe0 TObjFunc
	var_60_int = 15020; // 0xe2 PushI
	var_61_int = -1; // 0xe3 PushI
	var_62_int = 16279; // 0xe4 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xe5 TObjFunc
	var_63_int = 15021; // 0xe7 PushI
	var_64_int = -1; // 0xe8 PushI
	var_65_int = 16280; // 0xe9 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xea TObjFunc
	return 0; // 0xec Return
	
Label_237:
	var_66_int = 16265; // 0xed PushI
	var_67_bool = var_6_int == var_66_int; // 0xee Eq
	if(var_67_bool == 0) goto Label_255; // 0xef JumpB
	var_68_string = ""; // 0xf0 PushV
	var_68_string = "Neutral"; // 0xf1 MovS
	func_145(var_7_bool, var_68_string); // 0xf2 Call
	var_69_int = 15007; // 0xf4 PushI
	SetMessage(var_69_int); // 0xf5 TObjFunc
	ClearReplies(); // 0xf7 TObjFunc
	var_70_int = 15008; // 0xf9 PushI
	var_71_int = 16267; // 0xfa PushI
	var_72_int = 16266; // 0xfb PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xfc TObjFunc
	return 0; // 0xfe Return
	
Label_255:
	var_73_int = 16267; // 0xff PushI
	var_74_bool = var_6_int == var_73_int; // 0x100 Eq
	if(var_74_bool == 0) goto Label_288; // 0x101 JumpB
	var_75_string = ""; // 0x102 PushV
	var_75_string = "Neutral"; // 0x103 MovS
	func_145(var_7_bool, var_75_string); // 0x104 Call
	var_76_int = 15009; // 0x106 PushI
	SetMessage(var_76_int); // 0x107 TObjFunc
	ClearReplies(); // 0x109 TObjFunc
	var_77_int = 15010; // 0x10b PushI
	var_78_int = -1; // 0x10c PushI
	var_79_int = 16268; // 0x10d PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x10e TObjFunc
	var_80_int = 15011; // 0x110 PushI
	var_81_int = -1; // 0x111 PushI
	var_82_int = 16269; // 0x112 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x113 TObjFunc
	var_83_int = 15012; // 0x115 PushI
	var_84_int = 16271; // 0x116 PushI
	var_85_int = 16270; // 0x117 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x118 TObjFunc
	var_86_int = 15016; // 0x11a PushI
	var_87_int = 16271; // 0x11b PushI
	var_88_int = 16274; // 0x11c PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_89_int = 16271; // 0x120 PushI
	var_90_bool = var_6_int == var_89_int; // 0x121 Eq
	if(var_90_bool == 0) goto Label_311; // 0x122 JumpB
	var_91_string = ""; // 0x123 PushV
	var_91_string = "Neutral"; // 0x124 MovS
	func_145(var_7_bool, var_91_string); // 0x125 Call
	var_92_int = 15013; // 0x127 PushI
	SetMessage(var_92_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_93_int = 15014; // 0x12c PushI
	var_94_int = -1; // 0x12d PushI
	var_95_int = 16272; // 0x12e PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x12f TObjFunc
	var_96_int = 15015; // 0x131 PushI
	var_97_int = -1; // 0x132 PushI
	var_98_int = 16273; // 0x133 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_3_string = 1; // 0x137 TMovB
	var_99_bool = 0; // 0x138 PushV
	func_633(var_99_bool); // 0x139 Call
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


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_466(); // 0x146 Call
	var_7_int = 0; var_8_object = Obj(); // 0x148 PushV
	var_8_object = var_6_object; // 0x149 Mov
	TaskCall(0); // 0x14a TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x14b Call
	TaskReturn(); // 0x14c TaskReturn
	return 0; // 0x14e Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x15f PushV
	var_9_string = "cleanup"; // 0x160 PushS
	var_10_bool = var_6_string == var_9_string; // 0x161 Eq
	if(var_10_bool == 0) goto Label_373; // 0x162 JumpB
	var_0_object = 1; // 0x163 TMovB
	IsLoaded(var_8_bool); // 0x164 Func
	var_11_bool = 0; // 0x166 PushV
	var_11_bool = 0; // 0x167 MovB
	var_12_bool = var_8_bool == 0; // 0x168 Not
	if(var_12_bool == 0) goto Label_367; // 0x169 JumpB
	var_13_bool = 0; // 0x16a PushV
	func_395(var_13_bool); // 0x16b Call
	if(var_13_bool == 0) goto Label_367; // 0x16d JumpB
	var_11_bool = 1; // 0x16e MovB
	
Label_367:
	if(var_11_bool == 0) goto Label_373; // 0x16f JumpB
	var_14_object = Obj(); // 0x170 PushV
	func_561(var_14_object); // 0x171 Call
	RemoveActor(var_14_object); // 0x173 Func
	
Label_373:
	return 2; // 0x175 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x176 Func
	sync(); // 0x178 Func
	return 0; // 0x17a Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x17b PushV
	var_6_bool = 0; // 0x17c MovB
	var_7_object = var_0_object; // 0x17d PushT
	if(var_7_object == 0) goto Label_388; // 0x17e JumpB
	var_8_bool = 0; // 0x17f PushV
	func_395(var_8_bool); // 0x180 Call
	if(var_8_bool == 0) goto Label_388; // 0x182 JumpB
	var_6_bool = 1; // 0x183 MovB
	
Label_388:
	if(var_6_bool == 0) goto Label_394; // 0x184 JumpB
	var_9_object = Obj(); // 0x185 PushV
	func_561(var_9_object); // 0x186 Call
	RemoveActor(var_9_object); // 0x188 Func
	
Label_394:
	return 0; // 0x18a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_335:
	var_6_bool = 0; // 0x14f PushV
	func_471(var_6_bool); // 0x150 Call
	var_9_bool = var_6_bool == 0; // 0x152 Not
	if(var_9_bool == 0) goto Label_343; // 0x153 JumpB
	Hold(); // 0x154 Func
	goto Label_335; // 0x156 Jump
	
Label_343:
	var_10_int = 3; // 0x157 PushI
	Sleep(var_10_int); // 0x158 Func
	func_397(); // 0x15b Call
	goto Label_335; // 0x15d Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_476(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_629(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_631(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_612(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_129_bool = var_17_bool == 0; // 0x2d Not
	if(var_129_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_130_object = Obj(); // 0x34 PushV
	var_130_object = var_8_object; // 0x35 Mov
	func_532(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_642(var_27_int)
{
	var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_bool = 0; // 0x282 PushV
	var_30_int = 0; // 0x283 MovI
	
Label_644:
	var_32_string = "all"; // 0x284 PushS
	var_33_string = ""; var_34_int = 0; // 0x285 PushV
	var_34_int = var_30_int; // 0x286 Mov
	func_635(var_33_string, var_34_int); // 0x287 Call
	HasAnimation(var_31_bool, var_32_string, var_33_string); // 0x289 Func
	var_38_bool = var_31_bool == 0; // 0x28b Not
	if(var_38_bool == 0) goto Label_654; // 0x28c JumpB
	goto Label_657; // 0x28d Jump
	
Label_657:
	var_27_int = var_30_int; // 0x291 Mov
	return 4; // 0x292 Return
	
Label_654:
	var_39_int = 1; // 0x28e PushI
	var_30_int = var_30_int + var_39_int; // 0x28f Add2
	goto Label_644; // 0x290 Jump
}


func_395(var_8_bool)
{
	var_8_bool = 1; // 0x18b MovB
	return 0; // 0x18c Return
}


func_397()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x18d PushV
	WaitForAnimEnd(); // 0x18e Func
	var_25_bool = 0; // 0x190 PushV
	func_471(var_25_bool); // 0x191 Call
	var_26_bool = var_25_bool == 0; // 0x193 Not
	if(var_26_bool == 0) goto Label_406; // 0x194 JumpB
	return 14; // 0x195 Return
	
Label_406:
	var_27_int = 0; // 0x196 PushV
	func_642(var_27_int); // 0x197 Call
	var_18_int = var_27_int; // 0x198 Mov
	var_19_int = 0; // 0x19a MovI
	
Label_411:
	var_40_bool = 0; // 0x19b PushV
	var_40_bool = 0; // 0x19c MovB
	var_41_int = 5; // 0x19d PushI
	var_42_bool = var_19_int < var_41_int; // 0x19e LT
	if(var_42_bool == 0) goto Label_421; // 0x19f JumpB
	var_43_bool = 0; // 0x1a0 PushV
	func_471(var_43_bool); // 0x1a1 Call
	if(var_43_bool == 0) goto Label_421; // 0x1a3 JumpB
	var_40_bool = 1; // 0x1a4 MovB
	
Label_421:
	if(var_40_bool == 0) goto Label_465; // 0x1a5 JumpB
	var_44_int = 3; // 0x1a6 PushI
	irand(var_20_int, var_44_int); // 0x1a7 Func
	var_45_int = 0; // 0x1a9 PushI
	var_46_bool = var_20_int == var_45_int; // 0x1aa Eq
	if(var_46_bool == 0) goto Label_445; // 0x1ab JumpB
	var_47_int = var_18_int; // 0x1ac Push
	if(var_47_int == 0) goto Label_444; // 0x1ad JumpB
	irand(var_21_int, var_18_int); // 0x1ae Func
	var_48_string = "all"; // 0x1b0 PushS
	var_49_string = ""; var_50_int = 0; // 0x1b1 PushV
	var_50_int = var_21_int; // 0x1b2 Mov
	func_635(var_49_string, var_50_int); // 0x1b3 Call
	PlayAnimation(var_48_string, var_49_string); // 0x1b5 Func
	WaitForAnimEnd(var_22_bool); // 0x1b7 Func
	var_51_bool = var_22_bool == 0; // 0x1b9 Not
	if(var_51_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_465; // 0x1bb Jump
	
Label_465:
	return 14; // 0x1d1 Return
	
Label_444:
	goto Label_462; // 0x1bc Jump
	
Label_462:
	var_52_int = 1; // 0x1ce PushI
	var_19_int = var_19_int + var_52_int; // 0x1cf Add2
	goto Label_411; // 0x1d0 Jump
	
Label_445:
	var_53_int = 1; // 0x1bd PushI
	var_54_bool = var_20_int == var_53_int; // 0x1be Eq
	if(var_54_bool == 0) goto Label_459; // 0x1bf JumpB
	var_55_int = 4; // 0x1c0 PushI
	rand(var_23_float, var_55_int); // 0x1c1 Func
	var_56_int = 1; // 0x1c3 PushI
	var_57_int = var_23_float + var_56_int; // 0x1c4 Add
	Sleep(var_57_int, var_24_bool); // 0x1c5 Func
	var_58_bool = var_24_bool == 0; // 0x1c7 Not
	if(var_58_bool == 0) goto Label_458; // 0x1c8 JumpB
	goto Label_465; // 0x1c9 Jump
	
Label_458:
	goto Label_462; // 0x1ca Jump
	
Label_459:
	var_59_int = var_19_int; // 0x1cb Push
	if(var_59_int == 0) goto Label_462; // 0x1cc JumpB
	goto Label_465; // 0x1cd Jump
}


func_145(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0x92 PushV
	func_633(var_97_bool); // 0x93 Call
	var_98_bool = var_97_bool == 0; // 0x95 Not
	if(var_98_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_99_bool = var_96_string == var_2_object; // 0x98 Eq
	if(var_99_bool == 0) goto Label_155; // 0x99 JumpB
	return 0; // 0x9a Return
	
Label_155:
	var_100_string = ""; // 0x9b PushV
	var_100_string = var_96_string; // 0x9c Mov
	func_536(var_100_string); // 0x9d Call
	var_2_object = var_96_string; // 0x9f TMov
	return 0; // 0xa0 Return
}


func_532()
{
	CameraSwitchToNormal(); // 0x215 Func
	return 0; // 0x217 Return
}


func_536(var_100_string)
{
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0; // 0x218 PushV
	var_105_string = "playing "; // 0x219 PushS
	var_106_int = var_105_string + var_100_string; // 0x21a Add
	Trace(var_106_int); // 0x21b Func
	lshGetAnimTimes(var_100_string, var_103_float, var_104_float); // 0x21d Func
	lshPlayAnimation(var_103_float, var_104_float); // 0x21f Func
	var_107_string = "start: "; // 0x221 PushS
	var_108_int = var_107_string + var_103_float; // 0x222 Add
	Trace(var_108_int); // 0x223 Func
	var_109_string = "end: "; // 0x225 PushS
	var_110_int = var_109_string + var_104_float; // 0x226 Add
	Trace(var_110_int); // 0x227 Func
	return 4; // 0x229 Return
}


func_554()
{
	var_9_bool = 0; // 0x22a PushV
	func_633(var_9_bool); // 0x22b Call
	if(var_9_bool == 0) goto Label_560; // 0x22d JumpB
	lshStopSpeech(); // 0x22e Func
	
Label_560:
	return 0; // 0x230 Return
}


func_561(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x231 PushV
	self(var_11_object); // 0x232 Func
	var_9_object = var_11_object; // 0x234 Mov
	return 2; // 0x235 Return
}


func_567(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x237 PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x238 Or
	var_47_float = sqrt(var_48_int); // 0x239 Sqrt2
	var_49_float = 0.0; // 0x23a PushF
	var_50_bool = var_47_float < var_49_float; // 0x23b LT
	if(var_50_bool == 0) goto Label_575; // 0x23c JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x23d MovV
	return 2; // 0x23e Return
	
Label_575:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x23f Div2
	return 2; // 0x240 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_115; // 0x44 JumpB
	var_77_bool = 0; // 0x45 PushV
	var_77_bool = 0; // 0x46 MovB
	var_78_bool = 0; var_79_object = Obj(); // 0x47 PushV
	var_79_object = var_1_object; // 0x48 MovT
	func_588(var_79_object); // 0x49 Call
	if(var_78_bool == 0) goto Label_82; // 0x4b JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x4c PushV
	var_87_object = var_1_object; // 0x4d MovT
	func_600(var_87_object); // 0x4e Call
	if(var_86_bool == 0) goto Label_82; // 0x50 JumpB
	var_77_bool = 1; // 0x51 MovB
	
Label_82:
	if(var_77_bool == 0) goto Label_113; // 0x52 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x53 PushV
	var_92_object = var_1_object; // 0x54 MovT
	var_93_object = var_0_object; // 0x55 MovT
	func_582(); // 0x56 Call
	var_96_string = ""; // 0x58 PushV
	var_96_string = "Neutral"; // 0x59 MovS
	func_145(var_71_object, var_96_string); // 0x5a Call
	var_111_int = 15005; // 0x5c PushI
	SetMessage(var_111_int); // 0x5d TObjFunc
	ClearReplies(); // 0x5f TObjFunc
	var_112_int = 15006; // 0x61 PushI
	var_113_int = 16265; // 0x62 PushI
	var_114_int = 16264; // 0x63 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x64 TObjFunc
	var_115_int = 15017; // 0x66 PushI
	var_116_int = -1; // 0x67 PushI
	var_117_int = 16276; // 0x68 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x69 TObjFunc
	var_118_int = 15018; // 0x6b PushI
	var_119_int = 16278; // 0x6c PushI
	var_120_int = 16277; // 0x6d PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x6e TObjFunc
	goto Label_115; // 0x70 Jump
	
Label_115:
	var_121_bool = 0; // 0x73 PushV
	func_633(var_121_bool); // 0x74 Call
	if(var_121_bool == 0) goto Label_130; // 0x76 JumpB
	
Label_119:
	lshWaitForAnimEnd(); // 0x77 Func
	var_122_string = var_3_string; // 0x79 PushT
	if(var_122_string == 0) goto Label_124; // 0x7a JumpB
	goto Label_129; // 0x7b Jump
	
Label_129:
	goto Label_144; // 0x81 Jump
	
Label_144:
	return 0; // 0x90 Return
	
Label_124:
	var_123_string = ""; // 0x7c PushV
	var_123_string = var_2_object; // 0x7d MovT
	func_536(var_123_string); // 0x7e Call
	goto Label_119; // 0x80 Jump
	
Label_130:
	var_124_string = "all"; // 0x82 PushS
	var_125_string = "idle"; // 0x83 PushS
	PlayAnimation(var_124_string, var_125_string); // 0x84 Func
	
Label_134:
	WaitForAnimEnd(); // 0x86 Func
	var_126_string = var_3_string; // 0x88 PushT
	if(var_126_string == 0) goto Label_139; // 0x89 JumpB
	goto Label_144; // 0x8a Jump
	
Label_139:
	var_127_string = "all"; // 0x8b PushS
	var_128_string = "idle"; // 0x8c PushS
	PlayAnimation(var_127_string, var_128_string); // 0x8d Func
	goto Label_134; // 0x8f Jump
	
Label_113:
	return 0; // 0x71 Return
}


func_577(var_80_int, var_81_string)
{
	var_82_int = 0; var_83_int = 0; // 0x241 PushV
	GetVariable(var_81_string, var_83_int); // 0x242 Func
	var_80_int = var_83_int; // 0x244 Mov
	return 2; // 0x245 Return
}


func_582()
{
	var_94_string = "ood12Littlegirl1"; // 0x247 PushS
	var_95_int = 1; // 0x248 PushI
	SetVariable(var_94_string, var_95_int); // 0x249 Func
	return 0; // 0x24b Return
}


func_588(var_78_bool)
{
	var_80_int = 0; var_81_string = ""; // 0x24d PushV
	var_81_string = "d12q01DankoKnowHeIsToy"; // 0x24e MovS
	func_577(var_80_int, var_81_string); // 0x24f Call
	var_84_int = 0; // 0x251 PushI
	var_85_bool = var_80_int != var_84_int; // 0x252 Neq
	if(var_85_bool == 0) goto Label_598; // 0x253 JumpB
	var_78_bool = 1; // 0x254 MovB
	return 0; // 0x255 Return
	
Label_598:
	var_78_bool = 0; // 0x256 MovB
	return 0; // 0x257 Return
}


func_466()
{
	StopAnimation(); // 0x1d2 Func
	StopGroup0(); // 0x1d4 Func
	return 0; // 0x1d6 Return
}


func_471(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1d7 PushV
	IsLoaded(var_8_bool); // 0x1d8 Func
	var_6_bool = var_8_bool; // 0x1da Mov
	return 2; // 0x1db Return
}


func_600(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x259 PushV
	var_89_string = "ood12Littlegirl1"; // 0x25a MovS
	func_577(var_88_int, var_89_string); // 0x25b Call
	var_90_int = 0; // 0x25d PushI
	var_91_bool = var_88_int == var_90_int; // 0x25e Eq
	if(var_91_bool == 0) goto Label_610; // 0x25f JumpB
	var_86_bool = 1; // 0x260 MovB
	return 0; // 0x261 Return
	
Label_610:
	var_86_bool = 0; // 0x262 MovB
	return 0; // 0x263 Return
}


func_476(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x1dc PushV
	GetPosition(var_29_cvector); // 0x1dd ObjFunc
	GetEyesHeight(var_28_float); // 0x1df ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x1e1 PushE
	var_36_float = var_36_float + var_28_float; // 0x1e2 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x1e3 PopE
	GetPosition(var_30_cvector); // 0x1e4 Func
	GetEyesHeight(var_28_float); // 0x1e6 Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x1e8 PushE
	var_37_float = var_37_float + var_28_float; // 0x1e9 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x1ea PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x1eb Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x1ec PushE
	var_38_float = 0; // 0x1ed MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x1ee PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x1ef Or
	var_40_float = sqrt(var_39_int); // 0x1f0 Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x1f1 Div2
	var_32_cvector = -var_31_cvector; // 0x1f2 Neg2
	var_41_int = 70; // 0x1f3 PushI
	var_42_float = var_31_cvector * var_41_int; // 0x1f4 Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x1f5 PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x1f6 PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x1f7 Xor2
	func_567(var_43_cvector, var_44_cvector); // 0x1f8 Call
	var_51_int = 25; // 0x1fa PushI
	var_52_float = var_43_cvector * var_51_int; // 0x1fb Mult
	var_53_int = var_42_float + var_52_float; // 0x1fc Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x1fd PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x1fe Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x1ff Add2
	IsOverrideActive(var_35_bool); // 0x200 Func
	var_55_bool = var_35_bool; // 0x202 Push
	if(var_55_bool == 0) goto Label_518; // 0x203 JumpB
	var_18_bool = 0; // 0x204 MovB
	return 16; // 0x205 Return
	
Label_518:
	StopWorld(); // 0x206 Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x208 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x20a PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x20b PushE
	Rotate(var_56_float, var_57_float); // 0x20c Func
	CameraWaitForPlayFinish(); // 0x20e Func
	ResumeWorld(); // 0x210 Func
	var_18_bool = 1; // 0x212 MovB
	return 16; // 0x213 Return
}


func_612(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x264 PushV
	var_64_string = "player"; // 0x265 PushS
	GetVariable(var_64_string, var_63_int); // 0x266 Func
	var_65_int = 0; // 0x268 PushI
	var_66_bool = var_63_int == var_65_int; // 0x269 Eq
	if(var_66_bool == 0) goto Label_622; // 0x26a JumpB
	var_61_int = 200001; // 0x26b MovI
	return 2; // 0x26c Return
	
Label_622:
	var_67_int = 1; // 0x26e PushI
	var_68_bool = var_63_int == var_67_int; // 0x26f Eq
	if(var_68_bool == 0) goto Label_627; // 0x270 JumpB
	var_61_int = 200002; // 0x271 MovI
	return 2; // 0x272 Return
	
Label_627:
	var_61_int = 200003; // 0x273 MovI
	return 2; // 0x274 Return
}


func_629(var_59_int)
{
	var_59_int = 3346; // 0x275 MovI
	return 0; // 0x276 Return
}


func_631(var_60_string)
{
	var_60_string = "ui/NPC_None.png"; // 0x277 MovS
	return 0; // 0x278 Return
}


func_633(var_97_bool)
{
	var_97_bool = 0; // 0x279 MovB
	return 0; // 0x27a Return
}


func_635(var_33_string, var_34_int)
{
	var_35_string = ""; var_36_string = ""; // 0x27b PushV
	var_36_string = "idle"; // 0x27c MovS
	var_37_int = var_34_int; // 0x27d Push
	if(var_37_int == 0) goto Label_640; // 0x27e JumpB
	var_36_string = var_36_string + var_34_int; // 0x27f Add2
	
Label_640:
	var_33_string = var_36_string; // 0x280 Mov
	return 2; // 0x281 Return
}


