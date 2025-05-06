task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xfc PushI
	if(var_12_int == 0) goto Label_435; // 0xfd JumpB
	func_762(); // 0xff NEW_2
	var_14_int = 29382; // 0x101 PushI
	var_15_bool = var_10_bool == var_14_int; // 0x102 Eq
	if(var_15_bool == 0) goto Label_377; // 0x103 JumpB
	var_16_bool = 0; // 0x104 PushV
	var_16_bool = 0; // 0x105 MovB
	var_17_bool = 0; // 0x106 PushV
	var_17_bool = 0; // 0x107 MovB
	var_18_bool = 0; var_19_object = Obj(); // 0x108 PushV
	var_19_object = var_1_object; // 0x109 MovT
	func_842(var_19_object); // 0x10a NEW_2
	if(var_18_bool == 0) goto Label_275; // 0x10c JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x10d PushV
	var_27_object = var_1_object; // 0x10e MovT
	func_830(var_27_object); // 0x10f NEW_2
	if(var_26_bool == 0) goto Label_275; // 0x111 JumpB
	var_17_bool = 1; // 0x112 MovB
	
Label_275:
	if(var_17_bool == 0) goto Label_283; // 0x113 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x114 PushV
	var_33_object = var_1_object; // 0x115 MovT
	func_854(var_33_object); // 0x116 NEW_2
	var_38_bool = var_32_bool == 0; // 0x118 Not
	if(var_38_bool == 0) goto Label_283; // 0x119 JumpB
	var_16_bool = 1; // 0x11a MovB
	
Label_283:
	if(var_16_bool == 0) goto Label_309; // 0x11b JumpB
	var_39_object = Obj(); var_40_object = Obj(); // 0x11c PushV
	var_39_object = var_1_object; // 0x11d MovT
	var_40_object = var_0_object; // 0x11e MovT
	func_818(); // 0x11f NEW_2
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
	func_866(var_70_object); // 0x13b NEW_2
	if(var_69_bool == 0) goto Label_324; // 0x13d JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x13e PushV
	var_76_object = var_1_object; // 0x13f MovT
	func_830(var_76_object); // 0x140 NEW_2
	if(var_75_bool == 0) goto Label_324; // 0x142 JumpB
	var_68_bool = 1; // 0x143 MovB
	
Label_324:
	if(var_68_bool == 0) goto Label_331; // 0x144 JumpB
	var_77_bool = 0; var_78_object = Obj(); // 0x145 PushV
	var_78_object = var_1_object; // 0x146 MovT
	func_854(var_78_object); // 0x147 NEW_2
	if(var_77_bool == 0) goto Label_331; // 0x149 JumpB
	var_67_bool = 1; // 0x14a MovB
	
Label_331:
	if(var_67_bool == 0) goto Label_357; // 0x14b JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x14c PushV
	var_79_object = var_1_object; // 0x14d MovT
	var_80_object = var_0_object; // 0x14e MovT
	func_824(); // 0x14f NEW_2
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
	func_792(var_119_bool); // 0x1a9 NEW_2
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
	func_751(var_27_object); // 0x1ff NEW_2
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
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_786(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_784(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_788(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_790(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_878(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_193_bool = var_24_bool == 0; // 0x38 Not
	if(var_193_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_194_object = Obj(); // 0x3f PushV
	var_194_object = var_15_object; // 0x40 Mov
	func_703(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_769(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x301 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x302 Or
	var_56_float = sqrt(var_57_int); // 0x303 Sqrt2
	var_58_float = 0.0; // 0x304 PushF
	var_59_bool = var_56_float < var_58_float; // 0x305 LT
	if(var_59_bool == 0) goto Label_777; // 0x306 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x307 MovV
	return 2; // 0x308 Return
	
Label_777:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x309 Div2
	return 2; // 0x30a Return
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


func_779(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x30b PushV
	GetVariable(var_97_string, var_99_int); // 0x30c Func
	var_96_int = var_99_int; // 0x30e Mov
	return 2; // 0x30f Return
}


func_784(var_73_int)
{
	var_73_int = 527721; // 0x310 MovI
	return 0; // 0x311 Return
}


func_786(var_72_int)
{
	var_72_int = 527720; // 0x312 MovI
	return 0; // 0x313 Return
}


func_788(var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png"; // 0x314 MovS
	return 0; // 0x315 Return
}


func_790(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png"; // 0x316 MovS
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
	func_801(var_35_int); // 0x222 NEW_2
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
	func_794(var_57_string, var_58_int); // 0x23e NEW_2
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


func_792(var_67_bool)
{
	var_67_bool = 0; // 0x318 MovB
	return 0; // 0x319 Return
}


func_794(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x31a PushV
	var_44_string = "idle"; // 0x31b MovS
	var_45_int = var_42_int; // 0x31c Push
	if(var_45_int == 0) goto Label_799; // 0x31d JumpB
	var_44_string = var_44_string + var_42_int; // 0x31e Add2
	
Label_799:
	var_41_string = var_44_string; // 0x31f Mov
	return 2; // 0x320 Return
}


func_801(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x321 PushV
	var_38_int = 0; // 0x322 MovI
	
Label_803:
	var_40_string = "all"; // 0x323 PushS
	var_41_string = ""; var_42_int = 0; // 0x324 PushV
	var_42_int = var_38_int; // 0x325 Mov
	func_794(var_41_string, var_42_int); // 0x326 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x328 Func
	var_46_bool = var_39_bool == 0; // 0x32a Not
	if(var_46_bool == 0) goto Label_813; // 0x32b JumpB
	goto Label_816; // 0x32c Jump
	
Label_816:
	var_35_int = var_38_int; // 0x330 Mov
	return 4; // 0x331 Return
	
Label_813:
	var_47_int = 1; // 0x32d PushI
	var_38_int = var_38_int + var_47_int; // 0x32e Add2
	goto Label_803; // 0x32f Jump
}


func_818()
{
	var_117_string = "ook11Soldier1"; // 0x333 PushS
	var_118_int = 1; // 0x334 PushI
	SetVariable(var_117_string, var_118_int); // 0x335 Func
	return 0; // 0x337 Return
}


func_824()
{
	var_175_string = "ook11Soldier2"; // 0x339 PushS
	var_176_int = 1; // 0x33a PushI
	SetVariable(var_175_string, var_176_int); // 0x33b Func
	return 0; // 0x33d Return
}


func_830(var_102_bool)
{
	var_104_int = 0; var_105_string = ""; // 0x33f PushV
	var_105_string = "k11q01"; // 0x340 MovS
	func_779(var_104_int, var_105_string); // 0x341 NEW_2
	var_106_int = 2; // 0x343 PushI
	var_107_bool = var_104_int == var_106_int; // 0x344 Eq
	if(var_107_bool == 0) goto Label_840; // 0x345 JumpB
	var_102_bool = 1; // 0x346 MovB
	return 0; // 0x347 Return
	
Label_840:
	var_102_bool = 0; // 0x348 MovB
	return 0; // 0x349 Return
}


func_703()
{
	var_195_bool = 0; var_196_bool = 0; // 0x2bf PushV
	CameraSwitchToNormal(); // 0x2c0 Func
	var_197_bool = 0; // 0x2c2 PushV
	func_792(var_197_bool); // 0x2c3 NEW_2
	if(var_197_bool == 0) goto Label_711; // 0x2c5 JumpB
	goto Label_719; // 0x2c6 Jump
	
Label_719:
	return 2; // 0x2cf Return
	
Label_711:
	var_198_string = "head"; // 0x2c7 PushS
	HasAnimationTrack(var_196_bool, var_198_string); // 0x2c8 Func
	var_199_bool = var_196_bool; // 0x2ca Push
	if(var_199_bool == 0) goto Label_719; // 0x2cb JumpB
	var_200_string = "head"; // 0x2cc PushS
	UnlookAsync(var_200_string); // 0x2cd Func
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_199; // 0x4f JumpB
	var_92_bool = 0; // 0x50 PushV
	var_92_bool = 0; // 0x51 MovB
	var_93_bool = 0; // 0x52 PushV
	var_93_bool = 0; // 0x53 MovB
	var_94_bool = 0; var_95_object = Obj(); // 0x54 PushV
	var_95_object = var_1_object; // 0x55 MovT
	func_842(var_95_object); // 0x56 NEW_2
	if(var_94_bool == 0) goto Label_95; // 0x58 JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x59 PushV
	var_103_object = var_1_object; // 0x5a MovT
	func_830(var_103_object); // 0x5b NEW_2
	if(var_102_bool == 0) goto Label_95; // 0x5d JumpB
	var_93_bool = 1; // 0x5e MovB
	
Label_95:
	if(var_93_bool == 0) goto Label_103; // 0x5f JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x60 PushV
	var_109_object = var_1_object; // 0x61 MovT
	func_854(var_109_object); // 0x62 NEW_2
	var_114_bool = var_108_bool == 0; // 0x64 Not
	if(var_114_bool == 0) goto Label_103; // 0x65 JumpB
	var_92_bool = 1; // 0x66 MovB
	
Label_103:
	if(var_92_bool == 0) goto Label_129; // 0x67 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x68 PushV
	var_115_object = var_1_object; // 0x69 MovT
	var_116_object = var_0_object; // 0x6a MovT
	func_818(); // 0x6b NEW_2
	var_119_string = ""; // 0x6d PushV
	var_119_string = "Neutral"; // 0x6e MovS
	func_229(var_86_object, var_119_string); // 0x6f NEW_2
	var_136_int = 528020; // 0x71 PushI
	SetMessage(var_136_int); // 0x72 TObjFunc
	ClearReplies(); // 0x74 TObjFunc
	var_137_int = 528021; // 0x76 PushI
	var_138_int = 31634; // 0x77 PushI
	var_139_int = 29383; // 0x78 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x79 TObjFunc
	var_140_int = 530245; // 0x7b PushI
	var_141_int = 31634; // 0x7c PushI
	var_142_int = 31633; // 0x7d PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x7e TObjFunc
	goto Label_199; // 0x80 Jump
	
Label_199:
	var_143_bool = 0; // 0xc7 PushV
	func_792(var_143_bool); // 0xc8 NEW_2
	if(var_143_bool == 0) goto Label_214; // 0xca JumpB
	
Label_203:
	lshWaitForAnimEnd(); // 0xcb Func
	var_144_string = var_3_string; // 0xcd PushT
	if(var_144_string == 0) goto Label_208; // 0xce JumpB
	goto Label_213; // 0xcf Jump
	
Label_213:
	goto Label_228; // 0xd5 Jump
	
Label_228:
	return 0; // 0xe4 Return
	
Label_208:
	var_145_string = ""; // 0xd0 PushV
	var_145_string = var_2_object; // 0xd1 MovT
	func_720(var_145_string); // 0xd2 NEW_2
	goto Label_203; // 0xd4 Jump
	
Label_214:
	var_156_string = "all"; // 0xd6 PushS
	var_157_string = "idle"; // 0xd7 PushS
	PlayAnimation(var_156_string, var_157_string); // 0xd8 Func
	
Label_218:
	WaitForAnimEnd(); // 0xda Func
	var_158_string = var_3_string; // 0xdc PushT
	if(var_158_string == 0) goto Label_223; // 0xdd JumpB
	goto Label_228; // 0xde Jump
	
Label_223:
	var_159_string = "all"; // 0xdf PushS
	var_160_string = "idle"; // 0xe0 PushS
	PlayAnimation(var_159_string, var_160_string); // 0xe1 Func
	goto Label_218; // 0xe3 Jump
	
Label_129:
	var_161_bool = 0; // 0x81 PushV
	var_161_bool = 0; // 0x82 MovB
	var_162_bool = 0; // 0x83 PushV
	var_162_bool = 0; // 0x84 MovB
	var_163_bool = 0; var_164_object = Obj(); // 0x85 PushV
	var_164_object = var_1_object; // 0x86 MovT
	func_866(var_164_object); // 0x87 NEW_2
	if(var_163_bool == 0) goto Label_144; // 0x89 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x8a PushV
	var_170_object = var_1_object; // 0x8b MovT
	func_830(var_170_object); // 0x8c NEW_2
	if(var_169_bool == 0) goto Label_144; // 0x8e JumpB
	var_162_bool = 1; // 0x8f MovB
	
Label_144:
	if(var_162_bool == 0) goto Label_151; // 0x90 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x91 PushV
	var_172_object = var_1_object; // 0x92 MovT
	func_854(var_172_object); // 0x93 NEW_2
	if(var_171_bool == 0) goto Label_151; // 0x95 JumpB
	var_161_bool = 1; // 0x96 MovB
	
Label_151:
	if(var_161_bool == 0) goto Label_177; // 0x97 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x98 PushV
	var_173_object = var_1_object; // 0x99 MovT
	var_174_object = var_0_object; // 0x9a MovT
	func_824(); // 0x9b NEW_2
	var_177_string = ""; // 0x9d PushV
	var_177_string = "Neutral"; // 0x9e MovS
	func_229(var_86_object, var_177_string); // 0x9f NEW_2
	var_178_int = 528028; // 0xa1 PushI
	SetMessage(var_178_int); // 0xa2 TObjFunc
	ClearReplies(); // 0xa4 TObjFunc
	var_179_int = 530244; // 0xa6 PushI
	var_180_int = -1; // 0xa7 PushI
	var_181_int = 31632; // 0xa8 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xa9 TObjFunc
	var_182_int = 528029; // 0xab PushI
	var_183_int = -1; // 0xac PushI
	var_184_int = 29391; // 0xad PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xae TObjFunc
	goto Label_199; // 0xb0 Jump
	
Label_177:
	var_185_string = ""; // 0xb1 PushV
	var_185_string = "Neutral"; // 0xb2 MovS
	func_229(var_86_object, var_185_string); // 0xb3 NEW_2
	var_186_int = 528022; // 0xb5 PushI
	SetMessage(var_186_int); // 0xb6 TObjFunc
	ClearReplies(); // 0xb8 TObjFunc
	var_187_int = 528023; // 0xba PushI
	var_188_int = -1; // 0xbb PushI
	var_189_int = 29385; // 0xbc PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0xbd TObjFunc
	var_190_int = 530243; // 0xbf PushI
	var_191_int = -1; // 0xc0 PushI
	var_192_int = 31631; // 0xc1 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0xc2 TObjFunc
	goto Label_199; // 0xc4 Jump
}


func_842(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x34b PushV
	var_97_string = "ook11Soldier1"; // 0x34c MovS
	func_779(var_96_int, var_97_string); // 0x34d NEW_2
	var_100_int = 0; // 0x34f PushI
	var_101_bool = var_96_int == var_100_int; // 0x350 Eq
	if(var_101_bool == 0) goto Label_852; // 0x351 JumpB
	var_94_bool = 1; // 0x352 MovB
	return 0; // 0x353 Return
	
Label_852:
	var_94_bool = 0; // 0x354 MovB
	return 0; // 0x355 Return
}


func_720(var_145_string)
{
	var_146_bool = 0; var_147_float = 0; var_148_float = 0; var_149_bool = 0; var_150_float = 0; var_151_float = 0; // 0x2d0 PushV
	lshHasAnimation(var_149_bool, var_145_string); // 0x2d1 Func
	var_152_bool = var_149_bool; // 0x2d3 Push
	if(var_152_bool == 0) goto Label_731; // 0x2d4 JumpB
	lshGetAnimTimes(var_145_string, var_150_float, var_151_float); // 0x2d5 Func
	var_153_bool = 0; // 0x2d7 PushB
	lshPlayAnimation(var_150_float, var_151_float, var_153_bool); // 0x2d8 Func
	goto Label_735; // 0x2da Jump
	
Label_735:
	return 6; // 0x2df Return
	
Label_731:
	var_154_string = "Can't find lsh animation : "; // 0x2db PushS
	var_155_int = var_154_string + var_145_string; // 0x2dc Add
	Trace(var_155_int); // 0x2dd Func
}


func_854(var_108_bool)
{
	var_110_int = 0; var_111_string = ""; // 0x357 PushV
	var_111_string = "k11q01Cured"; // 0x358 MovS
	func_779(var_110_int, var_111_string); // 0x359 NEW_2
	var_112_int = 0; // 0x35b PushI
	var_113_bool = var_110_int != var_112_int; // 0x35c Neq
	if(var_113_bool == 0) goto Label_864; // 0x35d JumpB
	var_108_bool = 1; // 0x35e MovB
	return 0; // 0x35f Return
	
Label_864:
	var_108_bool = 0; // 0x360 MovB
	return 0; // 0x361 Return
}


func_736(var_123_string, var_124_bool)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0; // 0x2e0 PushV
	lshHasAnimation(var_130_bool, var_123_string); // 0x2e1 Func
	var_133_bool = var_130_bool; // 0x2e3 Push
	if(var_133_bool == 0) goto Label_746; // 0x2e4 JumpB
	lshGetAnimTimes(var_123_string, var_131_float, var_132_float); // 0x2e5 Func
	lshPlayAnimation(var_131_float, var_132_float, var_124_bool); // 0x2e7 Func
	goto Label_750; // 0x2e9 Jump
	
Label_750:
	return 6; // 0x2ee Return
	
Label_746:
	var_134_string = "Can't find lsh animation : "; // 0x2ea PushS
	var_135_int = var_134_string + var_123_string; // 0x2eb Add
	Trace(var_135_int); // 0x2ec Func
}


func_866(var_163_bool)
{
	var_165_int = 0; var_166_string = ""; // 0x363 PushV
	var_166_string = "ook11Soldier2"; // 0x364 MovS
	func_779(var_165_int, var_166_string); // 0x365 NEW_2
	var_167_int = 0; // 0x367 PushI
	var_168_bool = var_165_int == var_167_int; // 0x368 Eq
	if(var_168_bool == 0) goto Label_876; // 0x369 JumpB
	var_163_bool = 1; // 0x36a MovB
	return 0; // 0x36b Return
	
Label_876:
	var_163_bool = 0; // 0x36c MovB
	return 0; // 0x36d Return
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


func_229(var_2_object, var_119_string)
{
	var_120_bool = 0; // 0xe6 PushV
	func_792(var_120_bool); // 0xe7 NEW_2
	var_121_bool = var_120_bool == 0; // 0xe9 Not
	if(var_121_bool == 0) goto Label_236; // 0xea JumpB
	return 0; // 0xeb Return
	
Label_236:
	var_122_bool = var_119_string == var_2_object; // 0xec Eq
	if(var_122_bool == 0) goto Label_239; // 0xed JumpB
	return 0; // 0xee Return
	
Label_239:
	var_123_string = ""; var_124_bool = 0; // 0xef PushV
	var_123_string = var_119_string; // 0xf0 Mov
	var_125_string = ""; // 0xf1 PushS
	var_126_bool = var_119_string == var_125_string; // 0xf2 Eq
	if(var_126_bool == 0) goto Label_246; // 0xf3 JumpB
	var_124_bool = 0; // 0xf4 MovB
	goto Label_247; // 0xf5 Jump
	
Label_247:
	func_736(var_123_string, var_124_bool); // 0xf7 NEW_2
	var_2_object = var_119_string; // 0xf9 TMov
	return 0; // 0xfa Return
	
Label_246:
	var_124_bool = 1; // 0xf6 MovB
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


func_878(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x36e PushV
	var_79_string = "branch"; // 0x36f PushS
	GetVariable(var_79_string, var_78_int); // 0x370 Func
	var_80_int = 0; // 0x372 PushI
	var_81_bool = var_78_int == var_80_int; // 0x373 Eq
	if(var_81_bool == 0) goto Label_888; // 0x374 JumpB
	var_76_int = 1; // 0x375 MovI
	return 2; // 0x376 Return
	
Label_888:
	var_82_int = 1; // 0x378 PushI
	var_83_bool = var_78_int == var_82_int; // 0x379 Eq
	if(var_83_bool == 0) goto Label_893; // 0x37a JumpB
	var_76_int = 2; // 0x37b MovI
	return 2; // 0x37c Return
	
Label_893:
	var_76_int = 3; // 0x37d MovI
	return 2; // 0x37e Return
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


func_751(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2ef PushV
	GetEyesHeight(var_30_float); // 0x2f0 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x2f2 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x2f3 PushE
	var_32_float = var_30_float; // 0x2f4 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x2f5 PopE
	var_33_string = "head"; // 0x2f6 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x2f7 Func
	return 4; // 0x2f9 Return
}


func_630(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x276 PushV
	IsLoaded(var_14_bool); // 0x277 Func
	var_12_bool = var_14_bool; // 0x279 Mov
	return 2; // 0x27a Return
}


func_762()
{
	var_13_bool = 0; // 0x2fa PushV
	func_792(var_13_bool); // 0x2fb NEW_2
	if(var_13_bool == 0) goto Label_768; // 0x2fd JumpB
	lshStopSpeech(); // 0x2fe Func
	
Label_768:
	return 0; // 0x300 Return
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
	func_769(var_52_cvector, var_53_cvector); // 0x296 NEW_2
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
	CameraTransit(var_43_cvector, var_41_cvector); // 0x2a6 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x2a8 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x2a9 PushE
	Rotate(var_65_float, var_66_float); // 0x2aa Func
	var_67_bool = 0; // 0x2ac PushV
	func_792(var_67_bool); // 0x2ad NEW_2
	if(var_67_bool == 0) goto Label_689; // 0x2af JumpB
	goto Label_697; // 0x2b0 Jump
	
Label_697:
	CameraWaitForPlayFinish(); // 0x2b9 Func
	ResumeWorld(); // 0x2bb Func
	var_25_bool = 1; // 0x2bd MovB
	return 18; // 0x2be Return
	
Label_689:
	var_68_string = "head"; // 0x2b1 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x2b2 Func
	var_69_bool = var_45_bool; // 0x2b4 Push
	if(var_69_bool == 0) goto Label_697; // 0x2b5 JumpB
	var_70_string = "head"; // 0x2b6 PushS
	LookAsyncCamera(var_70_string); // 0x2b7 Func
}


