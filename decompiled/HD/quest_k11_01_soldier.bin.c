task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xfc PushI
	if(var_12_int == 0) goto Label_435; // 0xfd JumpB
	func_764(); // 0xff NEW_2
	var_14_int = 29382; // 0x101 PushI
	var_15_bool = var_10_bool == var_14_int; // 0x102 Eq
	if(var_15_bool == 0) goto Label_377; // 0x103 JumpB
	var_16_bool = 0; // 0x104 PushV
	var_16_bool = 0; // 0x105 MovB
	var_17_bool = 0; // 0x106 PushV
	var_17_bool = 0; // 0x107 MovB
	var_18_bool = 0; var_19_object = Obj(); // 0x108 PushV
	var_19_object = var_1_object; // 0x109 MovT
	func_844(var_19_object); // 0x10a NEW_2
	if(var_18_bool == 0) goto Label_275; // 0x10c JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x10d PushV
	var_27_object = var_1_object; // 0x10e MovT
	func_832(var_27_object); // 0x10f NEW_2
	if(var_26_bool == 0) goto Label_275; // 0x111 JumpB
	var_17_bool = 1; // 0x112 MovB
	
Label_275:
	if(var_17_bool == 0) goto Label_283; // 0x113 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x114 PushV
	var_33_object = var_1_object; // 0x115 MovT
	func_856(var_33_object); // 0x116 NEW_2
	var_38_bool = var_32_bool == 0; // 0x118 Not
	if(var_38_bool == 0) goto Label_283; // 0x119 JumpB
	var_16_bool = 1; // 0x11a MovB
	
Label_283:
	if(var_16_bool == 0) goto Label_309; // 0x11b JumpB
	var_39_object = Obj(); var_40_object = Obj(); // 0x11c PushV
	var_39_object = var_1_object; // 0x11d MovT
	var_40_object = var_0_object; // 0x11e MovT
	func_820(); // 0x11f NEW_2
	var_43_string = ""; // 0x121 PushV
	var_43_string = "Neutral"; // 0x122 MovS
	func_229(var_11_object, var_43_string); // 0x123 NEW_2
	var_60_int = 528020; // 0x125 PushI
	SetMessage(var_60_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_61_int = 528021; // 0x12a PushI
	var_62_int = 31634; // 0x12b PushI
	var_63_int = 29383; // 0x12c PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x12d TObjFunc
	var_64_int = 530245; // 0x12f PushI
	var_65_int = 31634; // 0x130 PushI
	var_66_int = 31633; // 0x131 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_67_bool = 0; // 0x135 PushV
	var_67_bool = 0; // 0x136 MovB
	var_68_bool = 0; // 0x137 PushV
	var_68_bool = 0; // 0x138 MovB
	var_69_bool = 0; var_70_object = Obj(); // 0x139 PushV
	var_70_object = var_1_object; // 0x13a MovT
	func_868(var_70_object); // 0x13b NEW_2
	if(var_69_bool == 0) goto Label_324; // 0x13d JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x13e PushV
	var_76_object = var_1_object; // 0x13f MovT
	func_832(var_76_object); // 0x140 NEW_2
	if(var_75_bool == 0) goto Label_324; // 0x142 JumpB
	var_68_bool = 1; // 0x143 MovB
	
Label_324:
	if(var_68_bool == 0) goto Label_331; // 0x144 JumpB
	var_77_bool = 0; var_78_object = Obj(); // 0x145 PushV
	var_78_object = var_1_object; // 0x146 MovT
	func_856(var_78_object); // 0x147 NEW_2
	if(var_77_bool == 0) goto Label_331; // 0x149 JumpB
	var_67_bool = 1; // 0x14a MovB
	
Label_331:
	if(var_67_bool == 0) goto Label_357; // 0x14b JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x14c PushV
	var_79_object = var_1_object; // 0x14d MovT
	var_80_object = var_0_object; // 0x14e MovT
	func_826(); // 0x14f NEW_2
	var_83_string = ""; // 0x151 PushV
	var_83_string = "Neutral"; // 0x152 MovS
	func_229(var_11_object, var_83_string); // 0x153 NEW_2
	var_84_int = 528028; // 0x155 PushI
	SetMessage(var_84_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_85_int = 530244; // 0x15a PushI
	var_86_int = -1; // 0x15b PushI
	var_87_int = 31632; // 0x15c PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x15d TObjFunc
	var_88_int = 528029; // 0x15f PushI
	var_89_int = -1; // 0x160 PushI
	var_90_int = 29391; // 0x161 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_91_string = ""; // 0x165 PushV
	var_91_string = "Neutral"; // 0x166 MovS
	func_229(var_11_object, var_91_string); // 0x167 NEW_2
	var_92_int = 528022; // 0x169 PushI
	SetMessage(var_92_int); // 0x16a TObjFunc
	ClearReplies(); // 0x16c TObjFunc
	var_93_int = 528023; // 0x16e PushI
	var_94_int = -1; // 0x16f PushI
	var_95_int = 29385; // 0x170 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x171 TObjFunc
	var_96_int = 530243; // 0x173 PushI
	var_97_int = -1; // 0x174 PushI
	var_98_int = 31631; // 0x175 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x176 TObjFunc
	return 0; // 0x178 Return
	
Label_377:
	var_99_int = 31634; // 0x179 PushI
	var_100_bool = var_10_bool == var_99_int; // 0x17a Eq
	if(var_100_bool == 0) goto Label_400; // 0x17b JumpB
	var_101_string = ""; // 0x17c PushV
	var_101_string = "Neutral"; // 0x17d MovS
	func_229(var_11_object, var_101_string); // 0x17e NEW_2
	var_102_int = 530246; // 0x180 PushI
	SetMessage(var_102_int); // 0x181 TObjFunc
	ClearReplies(); // 0x183 TObjFunc
	var_103_int = 530247; // 0x185 PushI
	var_104_int = 31636; // 0x186 PushI
	var_105_int = 31635; // 0x187 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x188 TObjFunc
	var_106_int = 530249; // 0x18a PushI
	var_107_int = 31636; // 0x18b PushI
	var_108_int = 31637; // 0x18c PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x18d TObjFunc
	return 0; // 0x18f Return
	
Label_400:
	var_109_int = 31636; // 0x190 PushI
	var_110_bool = var_10_bool == var_109_int; // 0x191 Eq
	if(var_110_bool == 0) goto Label_423; // 0x192 JumpB
	var_111_string = ""; // 0x193 PushV
	var_111_string = "Neutral"; // 0x194 MovS
	func_229(var_11_object, var_111_string); // 0x195 NEW_2
	var_112_int = 530248; // 0x197 PushI
	SetMessage(var_112_int); // 0x198 TObjFunc
	ClearReplies(); // 0x19a TObjFunc
	var_113_int = 530250; // 0x19c PushI
	var_114_int = -1; // 0x19d PushI
	var_115_int = 31639; // 0x19e PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x19f TObjFunc
	var_116_int = 530251; // 0x1a1 PushI
	var_117_int = -1; // 0x1a2 PushI
	var_118_int = 31640; // 0x1a3 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x1a4 TObjFunc
	return 0; // 0x1a6 Return
	
Label_423:
	var_3_string = 1; // 0x1a7 TMovB
	var_119_bool = 0; // 0x1a8 PushV
	func_794(var_119_bool); // 0x1a9 NEW_2
	if(var_119_bool == 0) goto Label_431; // 0x1ab JumpB
	lshStopAnimation(); // 0x1ac Func
	goto Label_433; // 0x1ae Jump
	
Label_433:
	return 0; // 0x1b1 Return
	
Label_431:
	StopAnimation(); // 0x1af Func
	
Label_435:
	return 0; // 0x1b3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_522(var_9_object, var_10_object); // 0x1c0 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x1c2 PushV
	var_15_object = var_10_object; // 0x1c3 Mov
	TaskCall(0); // 0x1c4 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x1c5 NEW_2
	TaskReturn(); // 0x1c6 TaskReturn
	return 0; // 0x1c8 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x1f4 PushI
	var_12_bool = var_10_int == var_11_int; // 0x1f5 Eq
	if(var_12_bool == 0) goto Label_521; // 0x1f6 JumpB
	var_13_bool = 0; // 0x1f7 PushV
	func_484(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x1f8 NEW_2
	if(var_13_bool == 0) goto Label_515; // 0x1fa JumpB
	var_26_bool = var_2_object == 0; // 0x1fb Not
	if(var_26_bool == 0) goto Label_514; // 0x1fc JumpB
	var_27_object = Obj(); // 0x1fd PushV
	var_27_object = var_4_bool; // 0x1fe MovT
	func_753(var_27_object); // 0x1ff NEW_2
	var_2_object = 1; // 0x201 TMovB
	
Label_514:
	goto Label_521; // 0x202 Jump
	
Label_521:
	return 0; // 0x209 Return
	
Label_515:
	var_34_object = var_2_object; // 0x203 PushT
	if(var_34_object == 0) goto Label_521; // 0x204 JumpB
	var_35_string = "head"; // 0x205 PushS
	UnlookAsync(var_35_string); // 0x206 Func
	var_2_object = 0; // 0x208 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_436:
	var_10_float = 0; var_11_float = 0; // 0x1b4 PushV
	var_10_float = 300; // 0x1b5 MovI
	var_11_float = 100; // 0x1b6 MovI
	func_457(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x1b7 NEW_2
	var_72_int = 3; // 0x1b9 PushI
	Sleep(var_72_int); // 0x1ba Func
	goto Label_436; // 0x1bc Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_635(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_788(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_786(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_790(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_792(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_880(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_194_bool = var_24_bool == 0; // 0x38 Not
	if(var_194_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_195_object = Obj(); // 0x3f PushV
	var_195_object = var_15_object; // 0x40 Mov
	func_704(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_771(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x303 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x304 Or
	var_56_float = sqrt(var_57_int); // 0x305 Sqrt2
	var_58_float = 0.0; // 0x306 PushF
	var_59_bool = var_56_float < var_58_float; // 0x307 LT
	if(var_59_bool == 0) goto Label_779; // 0x308 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x309 MovV
	return 2; // 0x30a Return
	
Label_779:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x30b Div2
	return 2; // 0x30c Return
}


func_522(var_2_object, var_3_string)
{
	func_617(); // 0x20b NEW_2
	var_11_int = 10; // 0x20d PushI
	KillTimer(var_11_int); // 0x20e Func
	var_12_object = var_2_object; // 0x210 PushT
	if(var_12_object == 0) goto Label_534; // 0x211 JumpB
	var_13_string = "head"; // 0x212 PushS
	UnlookAsync(var_13_string); // 0x213 Func
	var_2_object = 0; // 0x215 TMovB
	
Label_534:
	var_3_string = 1; // 0x216 TMovB
	return 0; // 0x217 Return
}


func_781(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x30d PushV
	GetVariable(var_98_string, var_100_int); // 0x30e Func
	var_97_int = var_100_int; // 0x310 Mov
	return 2; // 0x311 Return
}


func_786(var_74_int)
{
	var_74_int = 527721; // 0x312 MovI
	return 0; // 0x313 Return
}


func_788(var_73_int)
{
	var_73_int = 527720; // 0x314 MovI
	return 0; // 0x315 Return
}


func_790(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png"; // 0x316 MovS
	return 0; // 0x317 Return
}


func_536()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x218 PushV
	WaitForAnimEnd(); // 0x219 Func
	var_33_bool = 0; // 0x21b PushV
	func_630(var_33_bool); // 0x21c NEW_2
	var_34_bool = var_33_bool == 0; // 0x21e Not
	if(var_34_bool == 0) goto Label_545; // 0x21f JumpB
	return 14; // 0x220 Return
	
Label_545:
	var_35_int = 0; // 0x221 PushV
	func_803(var_35_int); // 0x222 NEW_2
	var_26_int = var_35_int; // 0x223 Mov
	var_27_int = 0; // 0x225 MovI
	
Label_550:
	var_48_bool = 0; // 0x226 PushV
	var_48_bool = 0; // 0x227 MovB
	var_49_int = 5; // 0x228 PushI
	var_50_bool = var_27_int < var_49_int; // 0x229 LT
	if(var_50_bool == 0) goto Label_560; // 0x22a JumpB
	var_51_bool = 0; // 0x22b PushV
	func_630(var_51_bool); // 0x22c NEW_2
	if(var_51_bool == 0) goto Label_560; // 0x22e JumpB
	var_48_bool = 1; // 0x22f MovB
	
Label_560:
	if(var_48_bool == 0) goto Label_612; // 0x230 JumpB
	var_52_int = 3; // 0x231 PushI
	irand(var_28_int, var_52_int); // 0x232 Func
	var_53_int = 0; // 0x234 PushI
	var_54_bool = var_28_int == var_53_int; // 0x235 Eq
	if(var_54_bool == 0) goto Label_584; // 0x236 JumpB
	var_55_int = var_26_int; // 0x237 Push
	if(var_55_int == 0) goto Label_583; // 0x238 JumpB
	irand(var_29_int, var_26_int); // 0x239 Func
	var_56_string = "all"; // 0x23b PushS
	var_57_string = ""; var_58_int = 0; // 0x23c PushV
	var_58_int = var_29_int; // 0x23d Mov
	func_796(var_57_string, var_58_int); // 0x23e NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x240 Func
	WaitForAnimEnd(var_30_bool); // 0x242 Func
	var_59_bool = var_30_bool == 0; // 0x244 Not
	if(var_59_bool == 0) goto Label_583; // 0x245 JumpB
	goto Label_612; // 0x246 Jump
	
Label_612:
	ResetAAS(); // 0x264 Func
	return 14; // 0x266 Return
	
Label_583:
	goto Label_601; // 0x247 Jump
	
Label_601:
	var_60_bool = 0; // 0x259 PushV
	func_615(var_60_bool); // 0x25a NEW_2
	var_61_bool = var_60_bool == 0; // 0x25c Not
	if(var_61_bool == 0) goto Label_607; // 0x25d JumpB
	goto Label_612; // 0x25e Jump
	
Label_607:
	ResetAAS(); // 0x25f Func
	var_62_int = 1; // 0x261 PushI
	var_27_int = var_27_int + var_62_int; // 0x262 Add2
	goto Label_550; // 0x263 Jump
	
Label_584:
	var_63_int = 1; // 0x248 PushI
	var_64_bool = var_28_int == var_63_int; // 0x249 Eq
	if(var_64_bool == 0) goto Label_598; // 0x24a JumpB
	var_65_int = 4; // 0x24b PushI
	rand(var_31_float, var_65_int); // 0x24c Func
	var_66_int = 1; // 0x24e PushI
	var_67_int = var_31_float + var_66_int; // 0x24f Add
	Sleep(var_67_int, var_32_bool); // 0x250 Func
	var_68_bool = var_32_bool == 0; // 0x252 Not
	if(var_68_bool == 0) goto Label_597; // 0x253 JumpB
	goto Label_612; // 0x254 Jump
	
Label_597:
	goto Label_601; // 0x255 Jump
	
Label_598:
	var_69_int = var_27_int; // 0x256 Push
	if(var_69_int == 0) goto Label_601; // 0x257 JumpB
	goto Label_612; // 0x258 Jump
}


func_792(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png"; // 0x318 MovS
	return 0; // 0x319 Return
}


func_794(var_68_bool)
{
	var_68_bool = 0; // 0x31a MovB
	return 0; // 0x31b Return
}


func_796(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x31c PushV
	var_44_string = "idle"; // 0x31d MovS
	var_45_int = var_42_int; // 0x31e Push
	if(var_45_int == 0) goto Label_801; // 0x31f JumpB
	var_44_string = var_44_string + var_42_int; // 0x320 Add2
	
Label_801:
	var_41_string = var_44_string; // 0x321 Mov
	return 2; // 0x322 Return
}


func_803(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x323 PushV
	var_38_int = 0; // 0x324 MovI
	
Label_805:
	var_40_string = "all"; // 0x325 PushS
	var_41_string = ""; var_42_int = 0; // 0x326 PushV
	var_42_int = var_38_int; // 0x327 Mov
	func_796(var_41_string, var_42_int); // 0x328 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x32a Func
	var_46_bool = var_39_bool == 0; // 0x32c Not
	if(var_46_bool == 0) goto Label_815; // 0x32d JumpB
	goto Label_818; // 0x32e Jump
	
Label_818:
	var_35_int = var_38_int; // 0x332 Mov
	return 4; // 0x333 Return
	
Label_815:
	var_47_int = 1; // 0x32f PushI
	var_38_int = var_38_int + var_47_int; // 0x330 Add2
	goto Label_805; // 0x331 Jump
}


func_820()
{
	var_118_string = "ook11Soldier1"; // 0x335 PushS
	var_119_int = 1; // 0x336 PushI
	SetVariable(var_118_string, var_119_int); // 0x337 Func
	return 0; // 0x339 Return
}


func_826()
{
	var_176_string = "ook11Soldier2"; // 0x33b PushS
	var_177_int = 1; // 0x33c PushI
	SetVariable(var_176_string, var_177_int); // 0x33d Func
	return 0; // 0x33f Return
}


func_704()
{
	var_196_bool = 0; var_197_bool = 0; // 0x2c0 PushV
	var_198_bool = 1; // 0x2c1 PushB
	CameraSwitchToNormal(var_198_bool); // 0x2c2 Func
	var_199_bool = 0; // 0x2c4 PushV
	func_794(var_199_bool); // 0x2c5 NEW_2
	if(var_199_bool == 0) goto Label_713; // 0x2c7 JumpB
	goto Label_721; // 0x2c8 Jump
	
Label_721:
	return 2; // 0x2d1 Return
	
Label_713:
	var_200_string = "head"; // 0x2c9 PushS
	HasAnimationTrack(var_197_bool, var_200_string); // 0x2ca Func
	var_201_bool = var_197_bool; // 0x2cc Push
	if(var_201_bool == 0) goto Label_721; // 0x2cd JumpB
	var_202_string = "head"; // 0x2ce PushS
	UnlookAsync(var_202_string); // 0x2cf Func
}


func_832(var_103_bool)
{
	var_105_int = 0; var_106_string = ""; // 0x341 PushV
	var_106_string = "k11q01"; // 0x342 MovS
	func_781(var_105_int, var_106_string); // 0x343 NEW_2
	var_107_int = 2; // 0x345 PushI
	var_108_bool = var_105_int == var_107_int; // 0x346 Eq
	if(var_108_bool == 0) goto Label_842; // 0x347 JumpB
	var_103_bool = 1; // 0x348 MovB
	return 0; // 0x349 Return
	
Label_842:
	var_103_bool = 0; // 0x34a MovB
	return 0; // 0x34b Return
}


func_457(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x1ca PushV
	func_630(var_12_bool); // 0x1cb NEW_2
	var_15_bool = var_12_bool == 0; // 0x1cd Not
	if(var_15_bool == 0) goto Label_464; // 0x1ce JumpB
	return 0; // 0x1cf Return
	
Label_464:
	var_16_string = "player"; // 0x1d0 PushS
	FindActor(var_9_object, var_16_string); // 0x1d1 Func
	var_2_object = 0; // 0x1d3 TMovB
	var_3_string = 0; // 0x1d4 TMovB
	var_0_object = var_10_float; // 0x1d5 TMov
	var_1_object = var_11_float; // 0x1d6 TMov
	var_17_int = 10; // 0x1d7 PushI
	var_18_float = 1.0; // 0x1d8 PushF
	SetTimer(var_17_int, var_18_float); // 0x1d9 Func
	func_536(); // 0x1dc NEW_2
	var_70_bool = var_3_string == 0; // 0x1de Not
	if(var_70_bool == 0) goto Label_483; // 0x1df JumpB
	var_71_int = 10; // 0x1e0 PushI
	KillTimer(var_71_int); // 0x1e1 Func
	
Label_483:
	return 0; // 0x1e3 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_199; // 0x4f JumpB
	var_93_bool = 0; // 0x50 PushV
	var_93_bool = 0; // 0x51 MovB
	var_94_bool = 0; // 0x52 PushV
	var_94_bool = 0; // 0x53 MovB
	var_95_bool = 0; var_96_object = Obj(); // 0x54 PushV
	var_96_object = var_1_object; // 0x55 MovT
	func_844(var_96_object); // 0x56 NEW_2
	if(var_95_bool == 0) goto Label_95; // 0x58 JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x59 PushV
	var_104_object = var_1_object; // 0x5a MovT
	func_832(var_104_object); // 0x5b NEW_2
	if(var_103_bool == 0) goto Label_95; // 0x5d JumpB
	var_94_bool = 1; // 0x5e MovB
	
Label_95:
	if(var_94_bool == 0) goto Label_103; // 0x5f JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x60 PushV
	var_110_object = var_1_object; // 0x61 MovT
	func_856(var_110_object); // 0x62 NEW_2
	var_115_bool = var_109_bool == 0; // 0x64 Not
	if(var_115_bool == 0) goto Label_103; // 0x65 JumpB
	var_93_bool = 1; // 0x66 MovB
	
Label_103:
	if(var_93_bool == 0) goto Label_129; // 0x67 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x68 PushV
	var_116_object = var_1_object; // 0x69 MovT
	var_117_object = var_0_object; // 0x6a MovT
	func_820(); // 0x6b NEW_2
	var_120_string = ""; // 0x6d PushV
	var_120_string = "Neutral"; // 0x6e MovS
	func_229(var_87_object, var_120_string); // 0x6f NEW_2
	var_137_int = 528020; // 0x71 PushI
	SetMessage(var_137_int); // 0x72 TObjFunc
	ClearReplies(); // 0x74 TObjFunc
	var_138_int = 528021; // 0x76 PushI
	var_139_int = 31634; // 0x77 PushI
	var_140_int = 29383; // 0x78 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x79 TObjFunc
	var_141_int = 530245; // 0x7b PushI
	var_142_int = 31634; // 0x7c PushI
	var_143_int = 31633; // 0x7d PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x7e TObjFunc
	goto Label_199; // 0x80 Jump
	
Label_199:
	var_144_bool = 0; // 0xc7 PushV
	func_794(var_144_bool); // 0xc8 NEW_2
	if(var_144_bool == 0) goto Label_214; // 0xca JumpB
	
Label_203:
	lshWaitForAnimEnd(); // 0xcb Func
	var_145_string = var_3_string; // 0xcd PushT
	if(var_145_string == 0) goto Label_208; // 0xce JumpB
	goto Label_213; // 0xcf Jump
	
Label_213:
	goto Label_228; // 0xd5 Jump
	
Label_228:
	return 0; // 0xe4 Return
	
Label_208:
	var_146_string = ""; // 0xd0 PushV
	var_146_string = var_2_object; // 0xd1 MovT
	func_722(var_146_string); // 0xd2 NEW_2
	goto Label_203; // 0xd4 Jump
	
Label_214:
	var_157_string = "all"; // 0xd6 PushS
	var_158_string = "idle"; // 0xd7 PushS
	PlayAnimation(var_157_string, var_158_string); // 0xd8 Func
	
Label_218:
	WaitForAnimEnd(); // 0xda Func
	var_159_string = var_3_string; // 0xdc PushT
	if(var_159_string == 0) goto Label_223; // 0xdd JumpB
	goto Label_228; // 0xde Jump
	
Label_223:
	var_160_string = "all"; // 0xdf PushS
	var_161_string = "idle"; // 0xe0 PushS
	PlayAnimation(var_160_string, var_161_string); // 0xe1 Func
	goto Label_218; // 0xe3 Jump
	
Label_129:
	var_162_bool = 0; // 0x81 PushV
	var_162_bool = 0; // 0x82 MovB
	var_163_bool = 0; // 0x83 PushV
	var_163_bool = 0; // 0x84 MovB
	var_164_bool = 0; var_165_object = Obj(); // 0x85 PushV
	var_165_object = var_1_object; // 0x86 MovT
	func_868(var_165_object); // 0x87 NEW_2
	if(var_164_bool == 0) goto Label_144; // 0x89 JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x8a PushV
	var_171_object = var_1_object; // 0x8b MovT
	func_832(var_171_object); // 0x8c NEW_2
	if(var_170_bool == 0) goto Label_144; // 0x8e JumpB
	var_163_bool = 1; // 0x8f MovB
	
Label_144:
	if(var_163_bool == 0) goto Label_151; // 0x90 JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x91 PushV
	var_173_object = var_1_object; // 0x92 MovT
	func_856(var_173_object); // 0x93 NEW_2
	if(var_172_bool == 0) goto Label_151; // 0x95 JumpB
	var_162_bool = 1; // 0x96 MovB
	
Label_151:
	if(var_162_bool == 0) goto Label_177; // 0x97 JumpB
	var_174_object = Obj(); var_175_object = Obj(); // 0x98 PushV
	var_174_object = var_1_object; // 0x99 MovT
	var_175_object = var_0_object; // 0x9a MovT
	func_826(); // 0x9b NEW_2
	var_178_string = ""; // 0x9d PushV
	var_178_string = "Neutral"; // 0x9e MovS
	func_229(var_87_object, var_178_string); // 0x9f NEW_2
	var_179_int = 528028; // 0xa1 PushI
	SetMessage(var_179_int); // 0xa2 TObjFunc
	ClearReplies(); // 0xa4 TObjFunc
	var_180_int = 530244; // 0xa6 PushI
	var_181_int = -1; // 0xa7 PushI
	var_182_int = 31632; // 0xa8 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xa9 TObjFunc
	var_183_int = 528029; // 0xab PushI
	var_184_int = -1; // 0xac PushI
	var_185_int = 29391; // 0xad PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0xae TObjFunc
	goto Label_199; // 0xb0 Jump
	
Label_177:
	var_186_string = ""; // 0xb1 PushV
	var_186_string = "Neutral"; // 0xb2 MovS
	func_229(var_87_object, var_186_string); // 0xb3 NEW_2
	var_187_int = 528022; // 0xb5 PushI
	SetMessage(var_187_int); // 0xb6 TObjFunc
	ClearReplies(); // 0xb8 TObjFunc
	var_188_int = 528023; // 0xba PushI
	var_189_int = -1; // 0xbb PushI
	var_190_int = 29385; // 0xbc PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xbd TObjFunc
	var_191_int = 530243; // 0xbf PushI
	var_192_int = -1; // 0xc0 PushI
	var_193_int = 31631; // 0xc1 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0xc2 TObjFunc
	goto Label_199; // 0xc4 Jump
}


func_844(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x34d PushV
	var_98_string = "ook11Soldier1"; // 0x34e MovS
	func_781(var_97_int, var_98_string); // 0x34f NEW_2
	var_101_int = 0; // 0x351 PushI
	var_102_bool = var_97_int == var_101_int; // 0x352 Eq
	if(var_102_bool == 0) goto Label_854; // 0x353 JumpB
	var_95_bool = 1; // 0x354 MovB
	return 0; // 0x355 Return
	
Label_854:
	var_95_bool = 0; // 0x356 MovB
	return 0; // 0x357 Return
}


func_722(var_146_string)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0; // 0x2d2 PushV
	lshHasAnimation(var_150_bool, var_146_string); // 0x2d3 Func
	var_153_bool = var_150_bool; // 0x2d5 Push
	if(var_153_bool == 0) goto Label_733; // 0x2d6 JumpB
	lshGetAnimTimes(var_146_string, var_151_float, var_152_float); // 0x2d7 Func
	var_154_bool = 0; // 0x2d9 PushB
	lshPlayAnimation(var_151_float, var_152_float, var_154_bool); // 0x2da Func
	goto Label_737; // 0x2dc Jump
	
Label_737:
	return 6; // 0x2e1 Return
	
Label_733:
	var_155_string = "Can't find lsh animation : "; // 0x2dd PushS
	var_156_int = var_155_string + var_146_string; // 0x2de Add
	Trace(var_156_int); // 0x2df Func
}


func_856(var_109_bool)
{
	var_111_int = 0; var_112_string = ""; // 0x359 PushV
	var_112_string = "k11q01Cured"; // 0x35a MovS
	func_781(var_111_int, var_112_string); // 0x35b NEW_2
	var_113_int = 0; // 0x35d PushI
	var_114_bool = var_111_int != var_113_int; // 0x35e Neq
	if(var_114_bool == 0) goto Label_866; // 0x35f JumpB
	var_109_bool = 1; // 0x360 MovB
	return 0; // 0x361 Return
	
Label_866:
	var_109_bool = 0; // 0x362 MovB
	return 0; // 0x363 Return
}


func_738(var_124_string, var_125_bool)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0; // 0x2e2 PushV
	lshHasAnimation(var_131_bool, var_124_string); // 0x2e3 Func
	var_134_bool = var_131_bool; // 0x2e5 Push
	if(var_134_bool == 0) goto Label_748; // 0x2e6 JumpB
	lshGetAnimTimes(var_124_string, var_132_float, var_133_float); // 0x2e7 Func
	lshPlayAnimation(var_132_float, var_133_float, var_125_bool); // 0x2e9 Func
	goto Label_752; // 0x2eb Jump
	
Label_752:
	return 6; // 0x2f0 Return
	
Label_748:
	var_135_string = "Can't find lsh animation : "; // 0x2ec PushS
	var_136_int = var_135_string + var_124_string; // 0x2ed Add
	Trace(var_136_int); // 0x2ee Func
}


func_868(var_164_bool)
{
	var_166_int = 0; var_167_string = ""; // 0x365 PushV
	var_167_string = "ook11Soldier2"; // 0x366 MovS
	func_781(var_166_int, var_167_string); // 0x367 NEW_2
	var_168_int = 0; // 0x369 PushI
	var_169_bool = var_166_int == var_168_int; // 0x36a Eq
	if(var_169_bool == 0) goto Label_878; // 0x36b JumpB
	var_164_bool = 1; // 0x36c MovB
	return 0; // 0x36d Return
	
Label_878:
	var_164_bool = 0; // 0x36e MovB
	return 0; // 0x36f Return
}


func_229(var_2_object, var_120_string)
{
	var_121_bool = 0; // 0xe6 PushV
	func_794(var_121_bool); // 0xe7 NEW_2
	var_122_bool = var_121_bool == 0; // 0xe9 Not
	if(var_122_bool == 0) goto Label_236; // 0xea JumpB
	return 0; // 0xeb Return
	
Label_236:
	var_123_bool = var_120_string == var_2_object; // 0xec Eq
	if(var_123_bool == 0) goto Label_239; // 0xed JumpB
	return 0; // 0xee Return
	
Label_239:
	var_124_string = ""; var_125_bool = 0; // 0xef PushV
	var_124_string = var_120_string; // 0xf0 Mov
	var_126_string = ""; // 0xf1 PushS
	var_127_bool = var_120_string == var_126_string; // 0xf2 Eq
	if(var_127_bool == 0) goto Label_246; // 0xf3 JumpB
	var_125_bool = 0; // 0xf4 MovB
	goto Label_247; // 0xf5 Jump
	
Label_247:
	func_738(var_124_string, var_125_bool); // 0xf7 NEW_2
	var_2_object = var_120_string; // 0xf9 TMov
	return 0; // 0xfa Return
	
Label_246:
	var_125_bool = 1; // 0xf6 MovB
}


func_484(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x1e4 PushV
	var_16_bool = var_4_bool == 0; // 0x1e5 NullEq
	if(var_16_bool == 0) goto Label_489; // 0x1e6 JumpB
	var_13_bool = 0; // 0x1e7 MovB
	return 2; // 0x1e8 Return
	
Label_489:
	var_17_float = 0; var_18_object = Obj(); // 0x1e9 PushV
	var_18_object = var_4_bool; // 0x1ea MovT
	func_622(var_18_object); // 0x1eb NEW_2
	var_15_float = sqrt(var_17_float); // 0x1ed Sqrt2
	var_25_object = var_2_object; // 0x1ee PushT
	if(var_25_object == 0) goto Label_497; // 0x1ef JumpB
	var_15_float = var_15_float - var_1_object; // 0x1f0 Sub2
	
Label_497:
	var_13_bool = var_15_float < var_0_object; // 0x1f1 LT2
	return 2; // 0x1f2 Return
}


func_615(var_60_bool)
{
	var_60_bool = 1; // 0x267 MovB
	return 0; // 0x268 Return
}


func_617()
{
	StopAnimation(); // 0x269 Func
	StopGroup0(); // 0x26b Func
	return 0; // 0x26d Return
}


func_622(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x26e PushV
	GetPosition(var_22_cvector); // 0x26f Func
	GetPosition(var_23_cvector); // 0x271 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x273 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x274 Or2
	return 6; // 0x275 Return
}


func_880(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x370 PushV
	var_80_string = "branch"; // 0x371 PushS
	GetVariable(var_80_string, var_79_int); // 0x372 Func
	var_81_int = 0; // 0x374 PushI
	var_82_bool = var_79_int == var_81_int; // 0x375 Eq
	if(var_82_bool == 0) goto Label_890; // 0x376 JumpB
	var_77_int = 1; // 0x377 MovI
	return 2; // 0x378 Return
	
Label_890:
	var_83_int = 1; // 0x37a PushI
	var_84_bool = var_79_int == var_83_int; // 0x37b Eq
	if(var_84_bool == 0) goto Label_895; // 0x37c JumpB
	var_77_int = 2; // 0x37d MovI
	return 2; // 0x37e Return
	
Label_895:
	var_77_int = 3; // 0x37f MovI
	return 2; // 0x380 Return
}


func_753(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2f1 PushV
	GetEyesHeight(var_30_float); // 0x2f2 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x2f4 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x2f5 PushE
	var_32_float = var_30_float; // 0x2f6 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x2f7 PopE
	var_33_string = "head"; // 0x2f8 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x2f9 Func
	return 4; // 0x2fb Return
}


func_630(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x276 PushV
	IsLoaded(var_14_bool); // 0x277 Func
	var_12_bool = var_14_bool; // 0x279 Mov
	return 2; // 0x27a Return
}


func_635(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x27b PushV
	GetPosition(var_38_cvector); // 0x27c ObjFunc
	GetEyesHeight(var_37_float); // 0x27e ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x280 PushE
	var_46_float = var_46_float + var_37_float; // 0x281 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x282 PopE
	GetPosition(var_39_cvector); // 0x283 Func
	GetEyesHeight(var_37_float); // 0x285 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x287 PushE
	var_47_float = var_47_float + var_37_float; // 0x288 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x289 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x28a Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x28b PushE
	var_48_float = 0; // 0x28c MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x28d PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x28e Or
	var_50_float = sqrt(var_49_int); // 0x28f Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x290 Div2
	var_41_cvector = -var_40_cvector; // 0x291 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x292 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x293 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x294 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x295 Xor2
	func_771(var_52_cvector, var_53_cvector); // 0x296 NEW_2
	var_60_int = 25; // 0x298 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x299 Mult
	var_62_int = var_51_float + var_61_float; // 0x29a Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x29b PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x29c Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x29d Add2
	IsOverrideActive(var_44_bool); // 0x29e Func
	var_64_bool = var_44_bool; // 0x2a0 Push
	if(var_64_bool == 0) goto Label_676; // 0x2a1 JumpB
	var_25_bool = 0; // 0x2a2 MovB
	return 18; // 0x2a3 Return
	
Label_676:
	StopWorld(); // 0x2a4 Func
	var_65_bool = 1; // 0x2a6 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x2a7 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x2a9 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x2aa PushE
	Rotate(var_66_float, var_67_float); // 0x2ab Func
	var_68_bool = 0; // 0x2ad PushV
	func_794(var_68_bool); // 0x2ae NEW_2
	if(var_68_bool == 0) goto Label_690; // 0x2b0 JumpB
	goto Label_698; // 0x2b1 Jump
	
Label_698:
	CameraWaitForPlayFinish(); // 0x2ba Func
	ResumeWorld(); // 0x2bc Func
	var_25_bool = 1; // 0x2be MovB
	return 18; // 0x2bf Return
	
Label_690:
	var_69_string = "head"; // 0x2b2 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x2b3 Func
	var_70_bool = var_45_bool; // 0x2b5 Push
	if(var_70_bool == 0) goto Label_698; // 0x2b6 JumpB
	var_71_string = "head"; // 0x2b7 PushS
	LookAsyncCamera(var_71_string); // 0x2b8 Func
}


func_764()
{
	var_13_bool = 0; // 0x2fc PushV
	func_794(var_13_bool); // 0x2fd NEW_2
	if(var_13_bool == 0) goto Label_770; // 0x2ff JumpB
	lshStopSpeech(); // 0x300 Func
	
Label_770:
	return 0; // 0x302 Return
}


