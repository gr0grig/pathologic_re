task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool)
{
	var_15_int = 1; // 0x9b PushI
	if(var_15_int == 0) goto Label_288; // 0x9c JumpB
	func_685(); // 0x9e NEW_2
	var_17_int = 26698; // 0xa0 PushI
	var_18_bool = var_14_bool == var_17_int; // 0xa1 Eq
	if(var_18_bool == 0) goto Label_168; // 0xa2 JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0xa3 PushV
	var_19_object = var_1_object; // 0xa4 MovT
	var_20_object = var_0_object; // 0xa5 MovT
	func_744(); // 0xa6 NEW_2
	
Label_168:
	var_52_int = 41343; // 0xa8 PushI
	var_53_bool = var_14_bool == var_52_int; // 0xa9 Eq
	if(var_53_bool == 0) goto Label_176; // 0xaa JumpB
	var_54_object = Obj(); var_55_object = Obj(); // 0xab PushV
	var_54_object = var_1_object; // 0xac MovT
	var_55_object = var_0_object; // 0xad MovT
	func_744(); // 0xae NEW_2
	
Label_176:
	var_56_int = 41344; // 0xb0 PushI
	var_57_bool = var_14_bool == var_56_int; // 0xb1 Eq
	if(var_57_bool == 0) goto Label_184; // 0xb2 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xb3 PushV
	var_58_object = var_1_object; // 0xb4 MovT
	var_59_object = var_0_object; // 0xb5 MovT
	func_744(); // 0xb6 NEW_2
	
Label_184:
	var_60_int = 26697; // 0xb8 PushI
	var_61_bool = var_13_bool == var_60_int; // 0xb9 Eq
	if(var_61_bool == 0) goto Label_207; // 0xba JumpB
	var_62_string = ""; // 0xbb PushV
	var_62_string = "Neutral"; // 0xbc MovS
	func_132(var_14_bool, var_62_string); // 0xbd NEW_2
	var_79_int = 525329; // 0xbf PushI
	SetMessage(var_79_int); // 0xc0 TObjFunc
	ClearReplies(); // 0xc2 TObjFunc
	var_80_int = 539404; // 0xc4 PushI
	var_81_int = 41334; // 0xc5 PushI
	var_82_int = 41333; // 0xc6 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xc7 TObjFunc
	var_83_int = 539408; // 0xc9 PushI
	var_84_int = 41334; // 0xca PushI
	var_85_int = 41337; // 0xcb PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xcc TObjFunc
	return 0; // 0xce Return
	
Label_207:
	var_86_int = 41334; // 0xcf PushI
	var_87_bool = var_13_bool == var_86_int; // 0xd0 Eq
	if(var_87_bool == 0) goto Label_230; // 0xd1 JumpB
	var_88_string = ""; // 0xd2 PushV
	var_88_string = "Neutral"; // 0xd3 MovS
	func_132(var_14_bool, var_88_string); // 0xd4 NEW_2
	var_89_int = 539405; // 0xd6 PushI
	SetMessage(var_89_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_90_int = 539406; // 0xdb PushI
	var_91_int = 41336; // 0xdc PushI
	var_92_int = 41335; // 0xdd PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xde TObjFunc
	var_93_int = 539409; // 0xe0 PushI
	var_94_int = 41336; // 0xe1 PushI
	var_95_int = 41339; // 0xe2 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xe3 TObjFunc
	return 0; // 0xe5 Return
	
Label_230:
	var_96_int = 41336; // 0xe6 PushI
	var_97_bool = var_13_bool == var_96_int; // 0xe7 Eq
	if(var_97_bool == 0) goto Label_253; // 0xe8 JumpB
	var_98_string = ""; // 0xe9 PushV
	var_98_string = "Neutral"; // 0xea MovS
	func_132(var_14_bool, var_98_string); // 0xeb NEW_2
	var_99_int = 539407; // 0xed PushI
	SetMessage(var_99_int); // 0xee TObjFunc
	ClearReplies(); // 0xf0 TObjFunc
	var_100_int = 525330; // 0xf2 PushI
	var_101_int = -1; // 0xf3 PushI
	var_102_int = 26698; // 0xf4 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xf5 TObjFunc
	var_103_int = 539410; // 0xf7 PushI
	var_104_int = 41342; // 0xf8 PushI
	var_105_int = 41341; // 0xf9 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0xfa TObjFunc
	return 0; // 0xfc Return
	
Label_253:
	var_106_int = 41342; // 0xfd PushI
	var_107_bool = var_13_bool == var_106_int; // 0xfe Eq
	if(var_107_bool == 0) goto Label_276; // 0xff JumpB
	var_108_string = ""; // 0x100 PushV
	var_108_string = "Neutral"; // 0x101 MovS
	func_132(var_14_bool, var_108_string); // 0x102 NEW_2
	var_109_int = 539411; // 0x104 PushI
	SetMessage(var_109_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_110_int = 539412; // 0x109 PushI
	var_111_int = -1; // 0x10a PushI
	var_112_int = 41343; // 0x10b PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x10c TObjFunc
	var_113_int = 539413; // 0x10e PushI
	var_114_int = -1; // 0x10f PushI
	var_115_int = 41344; // 0x110 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_3_string = 1; // 0x114 TMovB
	var_116_bool = 0; // 0x115 PushV
	func_837(var_116_bool); // 0x116 NEW_2
	if(var_116_bool == 0) goto Label_284; // 0x118 JumpB
	lshStopAnimation(); // 0x119 Func
	goto Label_286; // 0x11b Jump
	
Label_286:
	return 0; // 0x11e Return
	
Label_284:
	StopAnimation(); // 0x11c Func
	
Label_288:
	return 0; // 0x120 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_object)
{
	var_14_bool = var_7_bool; // 0x129 PushT
	if(var_14_bool == 0) goto Label_300; // 0x12a JumpB
	return 0; // 0x12b Return
	
Label_300:
	func_445(var_12_bool, var_13_object); // 0x12d NEW_2
	var_18_int = 0; var_19_object = Obj(); // 0x12f PushV
	var_19_object = var_13_object; // 0x130 Mov
	TaskCall(0); // 0x131 TaskCall
	func_0(var_20_object, var_18_int, var_19_object); // 0x132 NEW_2
	TaskReturn(); // 0x133 TaskReturn
	var_7_bool = 1; // 0x135 TMovB
	return 0; // 0x136 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_string)
{
	var_14_string = "cleanup"; // 0x15e PushS
	var_15_bool = var_13_string == var_14_string; // 0x15f Eq
	if(var_15_bool == 0) goto Label_356; // 0x160 JumpB
	func_329(var_13_string); // 0x162 NEW_2
	
Label_356:
	return 0; // 0x164 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = var_6_int; // 0x165 PushT
	if(var_13_int == 0) goto Label_362; // 0x166 JumpB
	func_445(var_11_bool, var_12_bool); // 0x168 NEW_2
	
Label_362:
	var_17_bool = 0; // 0x16a PushV
	var_17_bool = 0; // 0x16b MovB
	var_18_int = var_5_int; // 0x16c PushT
	if(var_18_int == 0) goto Label_371; // 0x16d JumpB
	var_19_bool = 0; // 0x16e PushV
	func_378(var_19_bool); // 0x16f NEW_2
	if(var_19_bool == 0) goto Label_371; // 0x171 JumpB
	var_17_bool = 1; // 0x172 MovB
	
Label_371:
	if(var_17_bool == 0) goto Label_377; // 0x173 JumpB
	var_20_object = Obj(); // 0x174 PushV
	func_692(var_20_object); // 0x175 NEW_2
	RemoveActor(var_20_object); // 0x177 Func
	
Label_377:
	return 0; // 0x179 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_int)
{
	var_14_int = 10; // 0x1a7 PushI
	var_15_bool = var_13_int == var_14_int; // 0x1a8 Eq
	if(var_15_bool == 0) goto Label_444; // 0x1a9 JumpB
	var_16_bool = 0; // 0x1aa PushV
	func_407(var_11_bool, var_12_bool, var_13_int, var_16_bool); // 0x1ab NEW_2
	if(var_16_bool == 0) goto Label_438; // 0x1ad JumpB
	var_29_bool = var_2_object == 0; // 0x1ae Not
	if(var_29_bool == 0) goto Label_437; // 0x1af JumpB
	var_30_object = Obj(); // 0x1b0 PushV
	var_30_object = var_4_bool; // 0x1b1 MovT
	func_674(var_30_object); // 0x1b2 NEW_2
	var_2_object = 1; // 0x1b4 TMovB
	
Label_437:
	goto Label_444; // 0x1b5 Jump
	
Label_444:
	return 0; // 0x1bc Return
	
Label_438:
	var_37_object = var_2_object; // 0x1b6 PushT
	if(var_37_object == 0) goto Label_444; // 0x1b7 JumpB
	var_38_string = "head"; // 0x1b8 PushS
	UnlookAsync(var_38_string); // 0x1b9 Func
	var_2_object = 0; // 0x1bb TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool)
{
	var_7_bool = 0; // 0x121 TMovB
	var_13_float = 0; var_14_float = 0; // 0x122 PushV
	var_13_float = 300; // 0x123 MovI
	var_14_float = 100; // 0x124 MovI
	func_311(var_12_bool, var_13_float, var_14_float); // 0x125 NEW_2
	return 0; // 0x127 Return
}


func_0(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x0 PushV
	var_0_object = var_19_object; // 0x1 TMov
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0; // 0x2 PushV
	var_30_object = var_19_object; // 0x3 Mov
	var_31_float = 70.0; // 0x4 MovF
	func_558(var_30_object, var_31_float); // 0x5 NEW_2
	var_75_bool = var_29_bool == 0; // 0x7 Not
	if(var_75_bool == 0) goto Label_11; // 0x8 JumpB
	var_18_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_25_object); // 0xb Func
	var_76_int = 0; // 0xd PushV
	func_831(var_76_int); // 0xe NEW_2
	SetNPCName(var_76_int); // 0x10 ObjFunc
	var_77_int = 0; // 0x12 PushV
	func_829(var_77_int); // 0x13 NEW_2
	SetNPCDescription(var_77_int); // 0x15 ObjFunc
	var_78_string = ""; // 0x17 PushV
	func_833(var_78_string); // 0x18 NEW_2
	SetPhoto(var_78_string); // 0x1a ObjFunc
	var_79_string = ""; // 0x1c PushV
	func_835(var_79_string); // 0x1d NEW_2
	SetPhoto2(var_79_string); // 0x1f ObjFunc
	var_80_int = 0; // 0x21 PushV
	func_812(var_80_int); // 0x22 NEW_2
	SetPlayerName(var_80_int); // 0x24 ObjFunc
	var_27_int = -1; // 0x26 MovI
	IsOverrideActive(var_26_bool); // 0x27 Func
	var_88_bool = var_26_bool; // 0x29 Push
	if(var_88_bool == 0) goto Label_45; // 0x2a JumpB
	var_18_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_25_object); // 0x2d Func
	var_89_object = Obj(); var_90_object = Obj(); // 0x2f PushV
	var_89_object = var_19_object; // 0x30 Mov
	var_90_object = var_25_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_28_bool); // 0x36 ObjFunc
	
Label_56:
	var_138_bool = var_28_bool == 0; // 0x38 Not
	if(var_138_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_28_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_139_object = Obj(); // 0x3f PushV
	var_139_object = var_19_object; // 0x40 Mov
	func_626(); // 0x41 NEW_2
	StopDialog(var_25_object); // 0x43 Func
	GetReturnValue(var_27_int); // 0x45 ObjFunc
	var_18_int = var_27_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_771(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x303 PushV
	GetDiaryRoot(var_39_object); // 0x304 Func
	var_40_bool = var_39_object == 0; // 0x306 Not
	if(var_40_bool == 0) goto Label_781; // 0x307 JumpB
	var_41_string = "Can't retrieve diary root"; // 0x308 PushS
	Trace(var_41_string); // 0x309 Func
	var_37_object = 0; // 0x30b MovB
	return 2; // 0x30c Return
	
Label_781:
	var_37_object = var_39_object; // 0x30d Mov
	return 2; // 0x30e Return
}


func_643(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0; // 0x283 PushV
	lshHasAnimation(var_126_bool, var_122_string); // 0x284 Func
	var_129_bool = var_126_bool; // 0x286 Push
	if(var_129_bool == 0) goto Label_654; // 0x287 JumpB
	lshGetAnimTimes(var_122_string, var_127_float, var_128_float); // 0x288 Func
	var_130_bool = 0; // 0x28a PushB
	lshPlayAnimation(var_127_float, var_128_float, var_130_bool); // 0x28b Func
	goto Label_658; // 0x28d Jump
	
Label_658:
	return 6; // 0x292 Return
	
Label_654:
	var_131_string = "Can't find lsh animation : "; // 0x28e PushS
	var_132_int = var_131_string + var_122_string; // 0x28f Add
	Trace(var_132_int); // 0x290 Func
}


func_132(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0x85 PushV
	func_837(var_97_bool); // 0x86 NEW_2
	var_98_bool = var_97_bool == 0; // 0x88 Not
	if(var_98_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_99_bool = var_96_string == var_2_object; // 0x8b Eq
	if(var_99_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_100_string = ""; var_101_bool = 0; // 0x8e PushV
	var_100_string = var_96_string; // 0x8f Mov
	var_102_string = ""; // 0x90 PushS
	var_103_bool = var_96_string == var_102_string; // 0x91 Eq
	if(var_103_bool == 0) goto Label_149; // 0x92 JumpB
	var_101_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_659(var_100_string, var_101_bool); // 0x96 NEW_2
	var_2_object = var_96_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_101_bool = 1; // 0x95 MovB
}


func_784(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x310 PushV
	var_37_object = Obj(); // 0x311 PushV
	func_771(var_37_object); // 0x312 NEW_2
	var_34_object = var_37_object; // 0x313 Mov
	Find(var_30_int, var_35_object); // 0x315 ObjFunc
	var_42_bool = var_35_object == 0; // 0x317 Not
	if(var_42_bool == 0) goto Label_799; // 0x318 JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x319 PushS
	var_44_int = var_43_string + var_30_int; // 0x31a Add
	Trace(var_44_int); // 0x31b Func
	var_28_bool = 0; // 0x31d MovB
	return 6; // 0x31e Return
	
Label_799:
	AddChild(var_29_object); // 0x31f ObjFunc
	var_45_int = 7; // 0x321 PushI
	SendWorldWndMessage(var_45_int); // 0x322 Func
	GetCategory(var_36_int); // 0x324 ObjFunc
	SetDiarySection(var_36_int); // 0x326 Func
	var_28_bool = 0; // 0x328 MovB
	return 6; // 0x329 Return
}


func_659(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0; // 0x293 PushV
	lshHasAnimation(var_107_bool, var_100_string); // 0x294 Func
	var_110_bool = var_107_bool; // 0x296 Push
	if(var_110_bool == 0) goto Label_669; // 0x297 JumpB
	lshGetAnimTimes(var_100_string, var_108_float, var_109_float); // 0x298 Func
	lshPlayAnimation(var_108_float, var_109_float, var_101_bool); // 0x29a Func
	goto Label_673; // 0x29c Jump
	
Label_673:
	return 6; // 0x2a1 Return
	
Label_669:
	var_111_string = "Can't find lsh animation : "; // 0x29d PushS
	var_112_int = var_111_string + var_100_string; // 0x29e Add
	Trace(var_112_int); // 0x29f Func
}


func_407(var_0_object, var_1_object, var_4_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0; // 0x197 PushV
	var_19_bool = var_4_bool == 0; // 0x198 NullEq
	if(var_19_bool == 0) goto Label_412; // 0x199 JumpB
	var_16_bool = 0; // 0x19a MovB
	return 2; // 0x19b Return
	
Label_412:
	var_20_float = 0; var_21_object = Obj(); // 0x19c PushV
	var_21_object = var_4_bool; // 0x19d MovT
	func_545(var_21_object); // 0x19e NEW_2
	var_18_float = sqrt(var_20_float); // 0x1a0 Sqrt2
	var_28_object = var_2_object; // 0x1a1 PushT
	if(var_28_object == 0) goto Label_420; // 0x1a2 JumpB
	var_18_float = var_18_float - var_1_object; // 0x1a3 Sub2
	
Label_420:
	var_16_bool = var_18_float < var_0_object; // 0x1a4 LT2
	return 2; // 0x1a5 Return
}


func_538(var_72_bool)
{
	var_72_bool = 1; // 0x21a MovB
	return 0; // 0x21b Return
}


func_540()
{
	StopAnimation(); // 0x21c Func
	StopGroup0(); // 0x21e Func
	return 0; // 0x220 Return
}


func_545(var_20_float)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x221 PushV
	GetPosition(var_25_cvector); // 0x222 Func
	GetPosition(var_26_cvector); // 0x224 ObjFunc
	var_27_cvector = var_26_cvector - var_25_cvector; // 0x226 Sub2
	var_20_float = var_27_cvector | var_27_cvector; // 0x227 Or2
	return 6; // 0x228 Return
}


func_674(var_30_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); // 0x2a2 PushV
	GetEyesHeight(var_33_float); // 0x2a3 ObjFunc
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x2a5 MovV
	var_35_float = GetByIndex(var_34_cvector, 1); // 0x2a6 PushE
	var_35_float = var_33_float; // 0x2a7 Mov
	SetByIndex(var_34_cvector, 1) = var_35_float; // 0x2a8 PopE
	var_36_string = "head"; // 0x2a9 PushS
	LookAsync(var_30_object, var_36_string, var_34_cvector); // 0x2aa Func
	return 4; // 0x2ac Return
}


func_553(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0; // 0x229 PushV
	IsLoaded(var_26_bool); // 0x22a Func
	var_24_bool = var_26_bool; // 0x22c Mov
	return 2; // 0x22d Return
}


func_812(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x32c PushV
	var_83_string = "branch"; // 0x32d PushS
	GetVariable(var_83_string, var_82_int); // 0x32e Func
	var_84_int = 0; // 0x330 PushI
	var_85_bool = var_82_int == var_84_int; // 0x331 Eq
	if(var_85_bool == 0) goto Label_822; // 0x332 JumpB
	var_80_int = 1; // 0x333 MovI
	return 2; // 0x334 Return
	
Label_822:
	var_86_int = 1; // 0x336 PushI
	var_87_bool = var_82_int == var_86_int; // 0x337 Eq
	if(var_87_bool == 0) goto Label_827; // 0x338 JumpB
	var_80_int = 2; // 0x339 MovI
	return 2; // 0x33a Return
	
Label_827:
	var_80_int = 3; // 0x33b MovI
	return 2; // 0x33c Return
}


func_685()
{
	var_16_bool = 0; // 0x2ad PushV
	func_837(var_16_bool); // 0x2ae NEW_2
	if(var_16_bool == 0) goto Label_691; // 0x2b0 JumpB
	lshStopSpeech(); // 0x2b1 Func
	
Label_691:
	return 0; // 0x2b3 Return
}


func_558(var_29_bool, var_31_float)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; // 0x22e PushV
	GetPosition(var_42_cvector); // 0x22f ObjFunc
	GetEyesHeight(var_41_float); // 0x231 ObjFunc
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x233 PushE
	var_50_float = var_50_float + var_41_float; // 0x234 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x235 PopE
	GetPosition(var_43_cvector); // 0x236 Func
	GetEyesHeight(var_41_float); // 0x238 Func
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x23a PushE
	var_51_float = var_51_float + var_41_float; // 0x23b Add2
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x23c PopE
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x23d Sub2
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x23e PushE
	var_52_float = 0; // 0x23f MovI
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x240 PopE
	var_53_int = var_44_cvector | var_44_cvector; // 0x241 Or
	var_54_float = sqrt(var_53_int); // 0x242 Sqrt
	var_44_cvector = var_44_cvector / var_44_cvector; // 0x243 Div2
	var_45_cvector = -var_44_cvector; // 0x244 Neg2
	var_55_float = var_44_cvector * var_31_float; // 0x245 Mult
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x246 PushV
	var_58_cvector = CVector(0.0, 1.0, 0.0); // 0x247 PushVec
	var_57_cvector = var_45_cvector ^ var_58_cvector; // 0x248 Xor2
	func_698(var_56_cvector, var_57_cvector); // 0x249 NEW_2
	var_64_int = 25; // 0x24b PushI
	var_65_float = var_56_cvector * var_64_int; // 0x24c Mult
	var_66_int = var_55_float + var_65_float; // 0x24d Add
	var_67_cvector = CVector(0.0, 10.0, 0.0); // 0x24e PushVec
	var_46_cvector = var_66_int - var_67_cvector; // 0x24f Sub2
	var_47_cvector = var_43_cvector + var_46_cvector; // 0x250 Add2
	IsOverrideActive(var_48_bool); // 0x251 Func
	var_68_bool = var_48_bool; // 0x253 Push
	if(var_68_bool == 0) goto Label_599; // 0x254 JumpB
	var_29_bool = 0; // 0x255 MovB
	return 18; // 0x256 Return
	
Label_599:
	StopWorld(); // 0x257 Func
	CameraTransit(var_47_cvector, var_45_cvector); // 0x259 Func
	var_69_float = GetByIndex(var_46_cvector, 0); // 0x25b PushE
	var_70_float = GetByIndex(var_46_cvector, 2); // 0x25c PushE
	Rotate(var_69_float, var_70_float); // 0x25d Func
	var_71_bool = 0; // 0x25f PushV
	func_837(var_71_bool); // 0x260 NEW_2
	if(var_71_bool == 0) goto Label_612; // 0x262 JumpB
	goto Label_620; // 0x263 Jump
	
Label_620:
	CameraWaitForPlayFinish(); // 0x26c Func
	ResumeWorld(); // 0x26e Func
	var_29_bool = 1; // 0x270 MovB
	return 18; // 0x271 Return
	
Label_612:
	var_72_string = "head"; // 0x264 PushS
	HasAnimationTrack(var_49_bool, var_72_string); // 0x265 Func
	var_73_bool = var_49_bool; // 0x267 Push
	if(var_73_bool == 0) goto Label_620; // 0x268 JumpB
	var_74_string = "head"; // 0x269 PushS
	LookAsyncCamera(var_74_string); // 0x26a Func
}


func_692(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x2b4 PushV
	self(var_22_object); // 0x2b5 Func
	var_20_object = var_22_object; // 0x2b7 Mov
	return 2; // 0x2b8 Return
}


func_311(var_6_int, var_13_float, var_14_float)
{
	var_15_float = 0; var_16_bool = 0; var_17_float = 0; var_18_bool = 0; // 0x137 PushV
	var_6_int = 0; // 0x138 TMovB
	
Label_313:
	var_19_int = 3; // 0x139 PushI
	rand(var_17_float, var_19_int); // 0x13a Func
	var_20_int = 3; // 0x13c PushI
	var_21_int = var_17_float + var_20_int; // 0x13d Add
	Sleep(var_21_int, var_18_bool); // 0x13e Func
	var_6_int = 1; // 0x140 TMovB
	var_22_float = 0; var_23_float = 0; // 0x141 PushV
	var_22_float = var_13_float; // 0x142 Mov
	var_23_float = var_14_float; // 0x143 Mov
	func_380(var_14_float, var_15_float, var_16_bool, var_17_float, var_18_bool, var_22_float, var_23_float); // 0x144 NEW_2
	var_6_int = 0; // 0x146 TMovB
	goto Label_313; // 0x147 Jump
}


func_698(var_56_cvector, var_57_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x2ba PushV
	var_61_int = var_57_cvector | var_57_cvector; // 0x2bb Or
	var_60_float = sqrt(var_61_int); // 0x2bc Sqrt2
	var_62_float = 0.0; // 0x2bd PushF
	var_63_bool = var_60_float < var_62_float; // 0x2be LT
	if(var_63_bool == 0) goto Label_706; // 0x2bf JumpB
	var_56_cvector = CVector(0.0, 0.0, 0.0); // 0x2c0 MovV
	return 2; // 0x2c1 Return
	
Label_706:
	var_56_cvector = var_57_cvector / var_57_cvector; // 0x2c2 Div2
	return 2; // 0x2c3 Return
}


func_445(var_2_object, var_3_string)
{
	func_540(); // 0x1be NEW_2
	var_14_int = 10; // 0x1c0 PushI
	KillTimer(var_14_int); // 0x1c1 Func
	var_15_object = var_2_object; // 0x1c3 PushT
	if(var_15_object == 0) goto Label_457; // 0x1c4 JumpB
	var_16_string = "head"; // 0x1c5 PushS
	UnlookAsync(var_16_string); // 0x1c6 Func
	var_2_object = 0; // 0x1c8 TMovB
	
Label_457:
	var_3_string = 1; // 0x1c9 TMovB
	return 0; // 0x1ca Return
}


func_829(var_77_int)
{
	var_77_int = 515556; // 0x33d MovI
	return 0; // 0x33e Return
}


func_831(var_76_int)
{
	var_76_int = 503341; // 0x33f MovI
	return 0; // 0x340 Return
}


func_833(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3.png"; // 0x341 MovS
	return 0; // 0x342 Return
}


func_835(var_79_string)
{
	var_79_string = "ui/NPC_Citizen3_b.png"; // 0x343 MovS
	return 0; // 0x344 Return
}


func_708(var_46_bool, var_47_string, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x2c4 PushV
	FindActor(var_50_object, var_47_string); // 0x2c5 Func
	var_51_bool = var_50_object == 0; // 0x2c7 NullEq
	if(var_51_bool == 0) goto Label_715; // 0x2c8 JumpB
	var_46_bool = 0; // 0x2c9 MovB
	return 2; // 0x2ca Return
	
Label_715:
	Trigger(var_50_object, var_48_string); // 0x2cb Func
	var_46_bool = 1; // 0x2cd MovB
	return 2; // 0x2ce Return
}


func_837(var_71_bool)
{
	var_71_bool = 0; // 0x345 MovB
	return 0; // 0x346 Return
}


func_329(var_5_int)
{
	var_5_int = 1; // 0x149 TMovB
	var_16_bool = 0; // 0x14a PushV
	var_16_bool = 0; // 0x14b MovB
	var_17_bool = 0; // 0x14c PushV
	func_553(var_17_bool); // 0x14d NEW_2
	var_20_bool = var_17_bool == 0; // 0x14f Not
	if(var_20_bool == 0) goto Label_342; // 0x150 JumpB
	var_21_bool = 0; // 0x151 PushV
	func_378(var_21_bool); // 0x152 NEW_2
	if(var_21_bool == 0) goto Label_342; // 0x154 JumpB
	var_16_bool = 1; // 0x155 MovB
	
Label_342:
	if(var_16_bool == 0) goto Label_348; // 0x156 JumpB
	var_22_object = Obj(); // 0x157 PushV
	func_692(var_22_object); // 0x158 NEW_2
	RemoveActor(var_22_object); // 0x15a Func
	
Label_348:
	return 0; // 0x15c Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object; // 0x4b TMov
	var_1_object = var_89_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_95_int = 1; // 0x4e PushI
	if(var_95_int == 0) goto Label_102; // 0x4f JumpB
	var_96_string = ""; // 0x50 PushV
	var_96_string = "Neutral"; // 0x51 MovS
	func_132(var_90_object, var_96_string); // 0x52 NEW_2
	var_113_int = 525329; // 0x54 PushI
	SetMessage(var_113_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_114_int = 539404; // 0x59 PushI
	var_115_int = 41334; // 0x5a PushI
	var_116_int = 41333; // 0x5b PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x5c TObjFunc
	var_117_int = 539408; // 0x5e PushI
	var_118_int = 41334; // 0x5f PushI
	var_119_int = 41337; // 0x60 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_120_bool = 0; // 0x66 PushV
	func_837(var_120_bool); // 0x67 NEW_2
	if(var_120_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_121_string = var_3_string; // 0x6c PushT
	if(var_121_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_122_string = ""; // 0x6f PushV
	var_122_string = var_2_object; // 0x70 MovT
	func_643(var_122_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_133_string = "all"; // 0x75 PushS
	var_134_string = "idle"; // 0x76 PushS
	PlayAnimation(var_133_string, var_134_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_135_string = var_3_string; // 0x7b PushT
	if(var_135_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_136_string = "all"; // 0x7e PushS
	var_137_string = "idle"; // 0x7f PushS
	PlayAnimation(var_136_string, var_137_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_459()
{
	var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_float = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_float = 0; var_44_bool = 0; // 0x1cb PushV
	WaitForAnimEnd(); // 0x1cc Func
	var_45_bool = 0; // 0x1ce PushV
	func_553(var_45_bool); // 0x1cf NEW_2
	var_46_bool = var_45_bool == 0; // 0x1d1 Not
	if(var_46_bool == 0) goto Label_468; // 0x1d2 JumpB
	return 14; // 0x1d3 Return
	
Label_468:
	var_47_int = 0; // 0x1d4 PushV
	func_727(var_47_int); // 0x1d5 NEW_2
	var_38_int = var_47_int; // 0x1d6 Mov
	var_39_int = 0; // 0x1d8 MovI
	
Label_473:
	var_60_bool = 0; // 0x1d9 PushV
	var_60_bool = 0; // 0x1da MovB
	var_61_int = 5; // 0x1db PushI
	var_62_bool = var_39_int < var_61_int; // 0x1dc LT
	if(var_62_bool == 0) goto Label_483; // 0x1dd JumpB
	var_63_bool = 0; // 0x1de PushV
	func_553(var_63_bool); // 0x1df NEW_2
	if(var_63_bool == 0) goto Label_483; // 0x1e1 JumpB
	var_60_bool = 1; // 0x1e2 MovB
	
Label_483:
	if(var_60_bool == 0) goto Label_535; // 0x1e3 JumpB
	var_64_int = 3; // 0x1e4 PushI
	irand(var_40_int, var_64_int); // 0x1e5 Func
	var_65_int = 0; // 0x1e7 PushI
	var_66_bool = var_40_int == var_65_int; // 0x1e8 Eq
	if(var_66_bool == 0) goto Label_507; // 0x1e9 JumpB
	var_67_int = var_38_int; // 0x1ea Push
	if(var_67_int == 0) goto Label_506; // 0x1eb JumpB
	irand(var_41_int, var_38_int); // 0x1ec Func
	var_68_string = "all"; // 0x1ee PushS
	var_69_string = ""; var_70_int = 0; // 0x1ef PushV
	var_70_int = var_41_int; // 0x1f0 Mov
	func_720(var_69_string, var_70_int); // 0x1f1 NEW_2
	PlayAnimation(var_68_string, var_69_string); // 0x1f3 Func
	WaitForAnimEnd(var_42_bool); // 0x1f5 Func
	var_71_bool = var_42_bool == 0; // 0x1f7 Not
	if(var_71_bool == 0) goto Label_506; // 0x1f8 JumpB
	goto Label_535; // 0x1f9 Jump
	
Label_535:
	ResetAAS(); // 0x217 Func
	return 14; // 0x219 Return
	
Label_506:
	goto Label_524; // 0x1fa Jump
	
Label_524:
	var_72_bool = 0; // 0x20c PushV
	func_538(var_72_bool); // 0x20d NEW_2
	var_73_bool = var_72_bool == 0; // 0x20f Not
	if(var_73_bool == 0) goto Label_530; // 0x210 JumpB
	goto Label_535; // 0x211 Jump
	
Label_530:
	ResetAAS(); // 0x212 Func
	var_74_int = 1; // 0x214 PushI
	var_39_int = var_39_int + var_74_int; // 0x215 Add2
	goto Label_473; // 0x216 Jump
	
Label_507:
	var_75_int = 1; // 0x1fb PushI
	var_76_bool = var_40_int == var_75_int; // 0x1fc Eq
	if(var_76_bool == 0) goto Label_521; // 0x1fd JumpB
	var_77_int = 4; // 0x1fe PushI
	rand(var_43_float, var_77_int); // 0x1ff Func
	var_78_int = 1; // 0x201 PushI
	var_79_int = var_43_float + var_78_int; // 0x202 Add
	Sleep(var_79_int, var_44_bool); // 0x203 Func
	var_80_bool = var_44_bool == 0; // 0x205 Not
	if(var_80_bool == 0) goto Label_520; // 0x206 JumpB
	goto Label_535; // 0x207 Jump
	
Label_520:
	goto Label_524; // 0x208 Jump
	
Label_521:
	var_81_int = var_39_int; // 0x209 Push
	if(var_81_int == 0) goto Label_524; // 0x20a JumpB
	goto Label_535; // 0x20b Jump
}


func_720(var_53_string, var_54_int)
{
	var_55_string = ""; var_56_string = ""; // 0x2d0 PushV
	var_56_string = "idle"; // 0x2d1 MovS
	var_57_int = var_54_int; // 0x2d2 Push
	if(var_57_int == 0) goto Label_725; // 0x2d3 JumpB
	var_56_string = var_56_string + var_54_int; // 0x2d4 Add2
	
Label_725:
	var_53_string = var_56_string; // 0x2d5 Mov
	return 2; // 0x2d6 Return
}


func_727(var_47_int)
{
	var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; // 0x2d7 PushV
	var_50_int = 0; // 0x2d8 MovI
	
Label_729:
	var_52_string = "all"; // 0x2d9 PushS
	var_53_string = ""; var_54_int = 0; // 0x2da PushV
	var_54_int = var_50_int; // 0x2db Mov
	func_720(var_53_string, var_54_int); // 0x2dc NEW_2
	HasAnimation(var_51_bool, var_52_string, var_53_string); // 0x2de Func
	var_58_bool = var_51_bool == 0; // 0x2e0 Not
	if(var_58_bool == 0) goto Label_739; // 0x2e1 JumpB
	goto Label_742; // 0x2e2 Jump
	
Label_742:
	var_47_int = var_50_int; // 0x2e6 Mov
	return 4; // 0x2e7 Return
	
Label_739:
	var_59_int = 1; // 0x2e3 PushI
	var_50_int = var_50_int + var_59_int; // 0x2e4 Add2
	goto Label_729; // 0x2e5 Jump
}


func_744()
{
	var_21_string = "k2q03"; // 0x2e9 PushS
	var_22_int = 2; // 0x2ea PushI
	SetVariable(var_21_string, var_22_int); // 0x2eb Func
	func_758(); // 0x2ee NEW_2
	var_46_bool = 0; var_47_string = ""; var_48_string = ""; // 0x2f0 PushV
	var_47_string = "quest_k2_03"; // 0x2f1 MovS
	var_48_string = "place_danko"; // 0x2f2 MovS
	func_708(var_46_bool, var_47_string, var_48_string); // 0x2f3 NEW_2
	return 0; // 0x2f5 Return
}


func_626()
{
	var_140_bool = 0; var_141_bool = 0; // 0x272 PushV
	CameraSwitchToNormal(); // 0x273 Func
	var_142_bool = 0; // 0x275 PushV
	func_837(var_142_bool); // 0x276 NEW_2
	if(var_142_bool == 0) goto Label_634; // 0x278 JumpB
	goto Label_642; // 0x279 Jump
	
Label_642:
	return 2; // 0x282 Return
	
Label_634:
	var_143_string = "head"; // 0x27a PushS
	HasAnimationTrack(var_141_bool, var_143_string); // 0x27b Func
	var_144_bool = var_141_bool; // 0x27d Push
	if(var_144_bool == 0) goto Label_642; // 0x27e JumpB
	var_145_string = "head"; // 0x27f PushS
	UnlookAsync(var_145_string); // 0x280 Func
}


func_758()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x2f6 PushV
	var_25_int = 478; // 0x2f7 PushI
	var_26_int = 2; // 0x2f8 PushI
	var_27_int = 527794; // 0x2f9 PushI
	CreateDiaryEntry(var_24_object, var_25_int, var_26_int, var_27_int); // 0x2fa Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x2fc PushV
	var_29_object = var_24_object; // 0x2fd Mov
	var_30_int = 476; // 0x2fe MovI
	func_784(var_28_bool, var_29_object, var_30_int); // 0x2ff NEW_2
	return 2; // 0x301 Return
}


func_378(var_19_bool)
{
	var_19_bool = 1; // 0x17a MovB
	return 0; // 0x17b Return
}


func_380(var_0_object, var_1_object, var_2_object, var_3_string, var_18_bool, var_22_float, var_23_float)
{
	var_24_bool = 0; // 0x17d PushV
	func_553(var_24_bool); // 0x17e NEW_2
	var_27_bool = var_24_bool == 0; // 0x180 Not
	if(var_27_bool == 0) goto Label_387; // 0x181 JumpB
	return 0; // 0x182 Return
	
Label_387:
	var_28_string = "player"; // 0x183 PushS
	FindActor(var_18_bool, var_28_string); // 0x184 Func
	var_2_object = 0; // 0x186 TMovB
	var_3_string = 0; // 0x187 TMovB
	var_0_object = var_22_float; // 0x188 TMov
	var_1_object = var_23_float; // 0x189 TMov
	var_29_int = 10; // 0x18a PushI
	var_30_float = 1.0; // 0x18b PushF
	SetTimer(var_29_int, var_30_float); // 0x18c Func
	func_459(); // 0x18f NEW_2
	var_82_bool = var_3_string == 0; // 0x191 Not
	if(var_82_bool == 0) goto Label_406; // 0x192 JumpB
	var_83_int = 10; // 0x193 PushI
	KillTimer(var_83_int); // 0x194 Func
	
Label_406:
	return 0; // 0x196 Return
}


