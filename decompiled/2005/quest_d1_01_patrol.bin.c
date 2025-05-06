task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb4 PushI
	if(var_14_int == 0) goto Label_363; // 0xb5 JumpB
	func_755(); // 0xb7 NEW_2
	var_16_int = 33064; // 0xb9 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xba Eq
	if(var_17_bool == 0) goto Label_198; // 0xbb JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xbc PushV
	var_18_object = var_1_object; // 0xbd MovT
	var_19_object = var_0_object; // 0xbe MovT
	func_822(); // 0xbf NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0xc1 PushV
	var_61_object = var_1_object; // 0xc2 MovT
	var_62_object = var_0_object; // 0xc3 MovT
	func_845(); // 0xc4 NEW_2
	
Label_198:
	var_87_int = 33063; // 0xc6 PushI
	var_88_bool = var_12_bool == var_87_int; // 0xc7 Eq
	if(var_88_bool == 0) goto Label_246; // 0xc8 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0xc9 PushV
	var_90_object = var_1_object; // 0xca MovT
	func_861(var_90_object); // 0xcb NEW_2
	if(var_89_bool == 0) goto Label_226; // 0xcd JumpB
	var_97_string = ""; // 0xce PushV
	var_97_string = "Neutral"; // 0xcf MovS
	func_157(var_13_bool, var_97_string); // 0xd0 NEW_2
	var_114_int = 531679; // 0xd2 PushI
	SetMessage(var_114_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_115_int = 533040; // 0xd7 PushI
	var_116_int = 34551; // 0xd8 PushI
	var_117_int = 34550; // 0xd9 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xda TObjFunc
	var_118_int = 533055; // 0xdc PushI
	var_119_int = 34553; // 0xdd PushI
	var_120_int = 34561; // 0xde PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_121_string = ""; // 0xe2 PushV
	var_121_string = "Neutral"; // 0xe3 MovS
	func_157(var_13_bool, var_121_string); // 0xe4 NEW_2
	var_122_int = 531681; // 0xe6 PushI
	SetMessage(var_122_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_123_int = 531682; // 0xeb PushI
	var_124_int = -1; // 0xec PushI
	var_125_int = 33066; // 0xed PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xee TObjFunc
	var_126_int = 533033; // 0xf0 PushI
	var_127_int = -1; // 0xf1 PushI
	var_128_int = 34543; // 0xf2 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_129_int = 34551; // 0xf6 PushI
	var_130_bool = var_12_bool == var_129_int; // 0xf7 Eq
	if(var_130_bool == 0) goto Label_269; // 0xf8 JumpB
	var_131_string = ""; // 0xf9 PushV
	var_131_string = "Neutral"; // 0xfa MovS
	func_157(var_13_bool, var_131_string); // 0xfb NEW_2
	var_132_int = 533041; // 0xfd PushI
	SetMessage(var_132_int); // 0xfe TObjFunc
	ClearReplies(); // 0x100 TObjFunc
	var_133_int = 533042; // 0x102 PushI
	var_134_int = 34553; // 0x103 PushI
	var_135_int = 34552; // 0x104 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x105 TObjFunc
	var_136_int = 533056; // 0x107 PushI
	var_137_int = 34545; // 0x108 PushI
	var_138_int = 34562; // 0x109 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x10a TObjFunc
	return 0; // 0x10c Return
	
Label_269:
	var_139_int = 34553; // 0x10d PushI
	var_140_bool = var_12_bool == var_139_int; // 0x10e Eq
	if(var_140_bool == 0) goto Label_292; // 0x10f JumpB
	var_141_string = ""; // 0x110 PushV
	var_141_string = "Neutral"; // 0x111 MovS
	func_157(var_13_bool, var_141_string); // 0x112 NEW_2
	var_142_int = 533043; // 0x114 PushI
	SetMessage(var_142_int); // 0x115 TObjFunc
	ClearReplies(); // 0x117 TObjFunc
	var_143_int = 533034; // 0x119 PushI
	var_144_int = 34545; // 0x11a PushI
	var_145_int = 34544; // 0x11b PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x11c TObjFunc
	var_146_int = 533058; // 0x11e PushI
	var_147_int = 34547; // 0x11f PushI
	var_148_int = 34567; // 0x120 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_149_int = 34545; // 0x124 PushI
	var_150_bool = var_12_bool == var_149_int; // 0x125 Eq
	if(var_150_bool == 0) goto Label_310; // 0x126 JumpB
	var_151_string = ""; // 0x127 PushV
	var_151_string = "Neutral"; // 0x128 MovS
	func_157(var_13_bool, var_151_string); // 0x129 NEW_2
	var_152_int = 533035; // 0x12b PushI
	SetMessage(var_152_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_153_int = 533036; // 0x130 PushI
	var_154_int = 34547; // 0x131 PushI
	var_155_int = 34546; // 0x132 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_156_int = 34547; // 0x136 PushI
	var_157_bool = var_12_bool == var_156_int; // 0x137 Eq
	if(var_157_bool == 0) goto Label_333; // 0x138 JumpB
	var_158_string = ""; // 0x139 PushV
	var_158_string = "Neutral"; // 0x13a MovS
	func_157(var_13_bool, var_158_string); // 0x13b NEW_2
	var_159_int = 533037; // 0x13d PushI
	SetMessage(var_159_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_160_int = 533038; // 0x142 PushI
	var_161_int = 34549; // 0x143 PushI
	var_162_int = 34548; // 0x144 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x145 TObjFunc
	var_163_int = 533059; // 0x147 PushI
	var_164_int = 34549; // 0x148 PushI
	var_165_int = 34569; // 0x149 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_166_int = 34549; // 0x14d PushI
	var_167_bool = var_12_bool == var_166_int; // 0x14e Eq
	if(var_167_bool == 0) goto Label_351; // 0x14f JumpB
	var_168_string = ""; // 0x150 PushV
	var_168_string = "Neutral"; // 0x151 MovS
	func_157(var_13_bool, var_168_string); // 0x152 NEW_2
	var_169_int = 533039; // 0x154 PushI
	SetMessage(var_169_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_170_int = 531680; // 0x159 PushI
	var_171_int = -1; // 0x15a PushI
	var_172_int = 33064; // 0x15b PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_3_string = 1; // 0x15f TMovB
	var_173_bool = 0; // 0x160 PushV
	func_820(var_173_bool); // 0x161 NEW_2
	if(var_173_bool == 0) goto Label_359; // 0x163 JumpB
	lshStopAnimation(); // 0x164 Func
	goto Label_361; // 0x166 Jump
	
Label_361:
	return 0; // 0x169 Return
	
Label_359:
	StopAnimation(); // 0x167 Func
	
Label_363:
	return 0; // 0x16b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_515(var_11_bool, var_12_object); // 0x174 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x176 PushV
	var_17_object = var_12_object; // 0x177 Mov
	TaskCall(0); // 0x178 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x179 NEW_2
	TaskReturn(); // 0x17a TaskReturn
	return 0; // 0x17c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1a4 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1a5 Eq
	if(var_14_bool == 0) goto Label_426; // 0x1a6 JumpB
	func_399(var_12_string); // 0x1a8 NEW_2
	
Label_426:
	return 0; // 0x1aa Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1ab PushT
	if(var_12_int == 0) goto Label_432; // 0x1ac JumpB
	func_515(var_10_bool, var_11_bool); // 0x1ae NEW_2
	
Label_432:
	var_16_bool = 0; // 0x1b0 PushV
	var_16_bool = 0; // 0x1b1 MovB
	var_17_int = var_5_int; // 0x1b2 PushT
	if(var_17_int == 0) goto Label_441; // 0x1b3 JumpB
	var_18_bool = 0; // 0x1b4 PushV
	func_448(var_18_bool); // 0x1b5 NEW_2
	if(var_18_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_16_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_16_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_19_object = Obj(); // 0x1ba PushV
	func_762(var_19_object); // 0x1bb NEW_2
	RemoveActor(var_19_object); // 0x1bd Func
	
Label_447:
	return 0; // 0x1bf Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1ed PushI
	var_14_bool = var_12_int == var_13_int; // 0x1ee Eq
	if(var_14_bool == 0) goto Label_514; // 0x1ef JumpB
	var_15_bool = 0; // 0x1f0 PushV
	func_477(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1f1 NEW_2
	if(var_15_bool == 0) goto Label_508; // 0x1f3 JumpB
	var_28_bool = var_2_object == 0; // 0x1f4 Not
	if(var_28_bool == 0) goto Label_507; // 0x1f5 JumpB
	var_29_object = Obj(); // 0x1f6 PushV
	var_29_object = var_4_bool; // 0x1f7 MovT
	func_744(var_29_object); // 0x1f8 NEW_2
	var_2_object = 1; // 0x1fa TMovB
	
Label_507:
	goto Label_514; // 0x1fb Jump
	
Label_514:
	return 0; // 0x202 Return
	
Label_508:
	var_36_object = var_2_object; // 0x1fc PushT
	if(var_36_object == 0) goto Label_514; // 0x1fd JumpB
	var_37_string = "head"; // 0x1fe PushS
	UnlookAsync(var_37_string); // 0x1ff Func
	var_2_object = 0; // 0x201 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x16c PushV
	var_12_float = 300; // 0x16d MovI
	var_13_float = 100; // 0x16e MovI
	func_381(var_11_bool, var_12_float, var_13_float); // 0x16f NEW_2
	return 0; // 0x171 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_628(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_814(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_812(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_816(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_818(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_977(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_152_bool = var_26_bool == 0; // 0x38 Not
	if(var_152_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_153_object = Obj(); // 0x3f PushV
	var_153_object = var_17_object; // 0x40 Mov
	func_696(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_768(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x300 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x301 Or
	var_58_float = sqrt(var_59_int); // 0x302 Sqrt2
	var_60_float = 0.0; // 0x303 PushF
	var_61_bool = var_58_float < var_60_float; // 0x304 LT
	if(var_61_bool == 0) goto Label_776; // 0x305 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x306 MovV
	return 2; // 0x307 Return
	
Label_776:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x308 Div2
	return 2; // 0x309 Return
}


func_515(var_2_object, var_3_string)
{
	func_610(); // 0x204 NEW_2
	var_13_int = 10; // 0x206 PushI
	KillTimer(var_13_int); // 0x207 Func
	var_14_object = var_2_object; // 0x209 PushT
	if(var_14_object == 0) goto Label_527; // 0x20a JumpB
	var_15_string = "head"; // 0x20b PushS
	UnlookAsync(var_15_string); // 0x20c Func
	var_2_object = 0; // 0x20e TMovB
	
Label_527:
	var_3_string = 1; // 0x20f TMovB
	return 0; // 0x210 Return
}


func_899(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x383 PushV
	var_52_object = Obj(); // 0x384 PushV
	func_886(var_52_object); // 0x385 NEW_2
	var_49_object = var_52_object; // 0x386 Mov
	Find(var_45_int, var_50_object); // 0x388 ObjFunc
	var_57_bool = var_50_object == 0; // 0x38a Not
	if(var_57_bool == 0) goto Label_914; // 0x38b JumpB
	var_58_string = "Can't find diary parent with id: "; // 0x38c PushS
	var_59_int = var_58_string + var_45_int; // 0x38d Add
	Trace(var_59_int); // 0x38e Func
	var_43_bool = 0; // 0x390 MovB
	return 6; // 0x391 Return
	
Label_914:
	AddChild(var_44_object); // 0x392 ObjFunc
	var_60_int = 7; // 0x394 PushI
	SendWorldWndMessage(var_60_int); // 0x395 Func
	GetCategory(var_51_int); // 0x397 ObjFunc
	SetDiarySection(var_51_int); // 0x399 Func
	var_43_bool = 0; // 0x39b MovB
	return 6; // 0x39c Return
}


func_778(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x30a PushV
	GetVariable(var_97_string, var_99_int); // 0x30b Func
	var_96_int = var_99_int; // 0x30d Mov
	return 2; // 0x30e Return
}


func_399(var_5_int)
{
	var_5_int = 1; // 0x18f TMovB
	var_15_bool = 0; // 0x190 PushV
	var_15_bool = 0; // 0x191 MovB
	var_16_bool = 0; // 0x192 PushV
	func_623(var_16_bool); // 0x193 NEW_2
	var_19_bool = var_16_bool == 0; // 0x195 Not
	if(var_19_bool == 0) goto Label_412; // 0x196 JumpB
	var_20_bool = 0; // 0x197 PushV
	func_448(var_20_bool); // 0x198 NEW_2
	if(var_20_bool == 0) goto Label_412; // 0x19a JumpB
	var_15_bool = 1; // 0x19b MovB
	
Label_412:
	if(var_15_bool == 0) goto Label_418; // 0x19c JumpB
	var_21_object = Obj(); // 0x19d PushV
	func_762(var_21_object); // 0x19e NEW_2
	RemoveActor(var_21_object); // 0x1a0 Func
	
Label_418:
	return 0; // 0x1a2 Return
}


func_783(var_35_float)
{
	var_36_float = 0; var_37_float = 0; // 0x30f PushV
	GetGameTime(var_37_float); // 0x310 Func
	var_35_float = var_37_float; // 0x312 Mov
	return 2; // 0x313 Return
}


func_529()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x211 PushV
	WaitForAnimEnd(); // 0x212 Func
	var_44_bool = 0; // 0x214 PushV
	func_623(var_44_bool); // 0x215 NEW_2
	var_45_bool = var_44_bool == 0; // 0x217 Not
	if(var_45_bool == 0) goto Label_538; // 0x218 JumpB
	return 14; // 0x219 Return
	
Label_538:
	var_46_int = 0; // 0x21a PushV
	func_795(var_46_int); // 0x21b NEW_2
	var_37_int = var_46_int; // 0x21c Mov
	var_38_int = 0; // 0x21e MovI
	
Label_543:
	var_59_bool = 0; // 0x21f PushV
	var_59_bool = 0; // 0x220 MovB
	var_60_int = 5; // 0x221 PushI
	var_61_bool = var_38_int < var_60_int; // 0x222 LT
	if(var_61_bool == 0) goto Label_553; // 0x223 JumpB
	var_62_bool = 0; // 0x224 PushV
	func_623(var_62_bool); // 0x225 NEW_2
	if(var_62_bool == 0) goto Label_553; // 0x227 JumpB
	var_59_bool = 1; // 0x228 MovB
	
Label_553:
	if(var_59_bool == 0) goto Label_605; // 0x229 JumpB
	var_63_int = 3; // 0x22a PushI
	irand(var_39_int, var_63_int); // 0x22b Func
	var_64_int = 0; // 0x22d PushI
	var_65_bool = var_39_int == var_64_int; // 0x22e Eq
	if(var_65_bool == 0) goto Label_577; // 0x22f JumpB
	var_66_int = var_37_int; // 0x230 Push
	if(var_66_int == 0) goto Label_576; // 0x231 JumpB
	irand(var_40_int, var_37_int); // 0x232 Func
	var_67_string = "all"; // 0x234 PushS
	var_68_string = ""; var_69_int = 0; // 0x235 PushV
	var_69_int = var_40_int; // 0x236 Mov
	func_788(var_68_string, var_69_int); // 0x237 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x239 Func
	WaitForAnimEnd(var_41_bool); // 0x23b Func
	var_70_bool = var_41_bool == 0; // 0x23d Not
	if(var_70_bool == 0) goto Label_576; // 0x23e JumpB
	goto Label_605; // 0x23f Jump
	
Label_605:
	ResetAAS(); // 0x25d Func
	return 14; // 0x25f Return
	
Label_576:
	goto Label_594; // 0x240 Jump
	
Label_594:
	var_71_bool = 0; // 0x252 PushV
	func_608(var_71_bool); // 0x253 NEW_2
	var_72_bool = var_71_bool == 0; // 0x255 Not
	if(var_72_bool == 0) goto Label_600; // 0x256 JumpB
	goto Label_605; // 0x257 Jump
	
Label_600:
	ResetAAS(); // 0x258 Func
	var_73_int = 1; // 0x25a PushI
	var_38_int = var_38_int + var_73_int; // 0x25b Add2
	goto Label_543; // 0x25c Jump
	
Label_577:
	var_74_int = 1; // 0x241 PushI
	var_75_bool = var_39_int == var_74_int; // 0x242 Eq
	if(var_75_bool == 0) goto Label_591; // 0x243 JumpB
	var_76_int = 4; // 0x244 PushI
	rand(var_42_float, var_76_int); // 0x245 Func
	var_77_int = 1; // 0x247 PushI
	var_78_int = var_42_float + var_77_int; // 0x248 Add
	Sleep(var_78_int, var_43_bool); // 0x249 Func
	var_79_bool = var_43_bool == 0; // 0x24b Not
	if(var_79_bool == 0) goto Label_590; // 0x24c JumpB
	goto Label_605; // 0x24d Jump
	
Label_590:
	goto Label_594; // 0x24e Jump
	
Label_591:
	var_80_int = var_38_int; // 0x24f Push
	if(var_80_int == 0) goto Label_594; // 0x250 JumpB
	goto Label_605; // 0x251 Jump
}


func_788(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x314 PushV
	var_55_string = "idle"; // 0x315 MovS
	var_56_int = var_53_int; // 0x316 Push
	if(var_56_int == 0) goto Label_793; // 0x317 JumpB
	var_55_string = var_55_string + var_53_int; // 0x318 Add2
	
Label_793:
	var_52_string = var_55_string; // 0x319 Mov
	return 2; // 0x31a Return
}


func_795(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x31b PushV
	var_49_int = 0; // 0x31c MovI
	
Label_797:
	var_51_string = "all"; // 0x31d PushS
	var_52_string = ""; var_53_int = 0; // 0x31e PushV
	var_53_int = var_49_int; // 0x31f Mov
	func_788(var_52_string, var_53_int); // 0x320 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x322 Func
	var_57_bool = var_50_bool == 0; // 0x324 Not
	if(var_57_bool == 0) goto Label_807; // 0x325 JumpB
	goto Label_810; // 0x326 Jump
	
Label_810:
	var_46_int = var_49_int; // 0x32a Mov
	return 4; // 0x32b Return
	
Label_807:
	var_58_int = 1; // 0x327 PushI
	var_49_int = var_49_int + var_58_int; // 0x328 Add2
	goto Label_797; // 0x329 Jump
}


func_157(var_2_object, var_102_string)
{
	var_103_bool = 0; // 0x9e PushV
	func_820(var_103_bool); // 0x9f NEW_2
	var_104_bool = var_103_bool == 0; // 0xa1 Not
	if(var_104_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_105_bool = var_102_string == var_2_object; // 0xa4 Eq
	if(var_105_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_106_string = ""; var_107_bool = 0; // 0xa7 PushV
	var_106_string = var_102_string; // 0xa8 Mov
	var_108_string = ""; // 0xa9 PushS
	var_109_bool = var_102_string == var_108_string; // 0xaa Eq
	if(var_109_bool == 0) goto Label_174; // 0xab JumpB
	var_107_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_729(var_106_string, var_107_bool); // 0xaf NEW_2
	var_2_object = var_102_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_107_bool = 1; // 0xae MovB
}


func_927(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x39f PushV
	GetMainOutdoorScene(var_27_object); // 0x3a0 Func
	var_29_bool = var_27_object == 0; // 0x3a2 NullEq
	if(var_29_bool == 0) goto Label_938; // 0x3a3 JumpB
	var_30_string = "Can't find main outdoor scene"; // 0x3a4 PushS
	Trace(var_30_string); // 0x3a5 Func
	var_28_object = 0; // 0x3a7 SetNull
	var_24_object = var_28_object; // 0x3a8 Mov
	return 4; // 0x3a9 Return
	
Label_938:
	GetMap(var_28_object); // 0x3aa ObjFunc
	var_24_object = var_28_object; // 0x3ac Mov
	return 4; // 0x3ad Return
}


func_812(var_75_int)
{
	var_75_int = 515572; // 0x32c MovI
	return 0; // 0x32d Return
}


func_814(var_74_int)
{
	var_74_int = 504031; // 0x32e MovI
	return 0; // 0x32f Return
}


func_816(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2.png"; // 0x330 MovS
	return 0; // 0x331 Return
}


func_944(var_63_object, var_64_string, var_65_float)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_bool = 0; // 0x3b0 PushV
	GetMainOutdoorScene(var_73_object); // 0x3b1 Func
	var_75_bool = var_73_object == 0; // 0x3b3 NullEq
	if(var_75_bool == 0) goto Label_953; // 0x3b4 JumpB
	var_76_string = "Can't find main outdoor scene"; // 0x3b5 PushS
	Trace(var_76_string); // 0x3b6 Func
	return 8; // 0x3b8 Return
	
Label_953:
	GetLocator(var_64_string, var_74_bool, var_71_cvector, var_72_cvector); // 0x3b9 ObjFunc
	var_77_bool = var_74_bool == 0; // 0x3bb Not
	if(var_77_bool == 0) goto Label_963; // 0x3bc JumpB
	var_78_string = "Warning: outdoor scene locator "; // 0x3bd PushS
	var_79_int = var_78_string + var_64_string; // 0x3be Add
	var_80_string = " doesnt exist"; // 0x3bf PushS
	var_81_int = var_79_int + var_80_string; // 0x3c0 Add
	Trace(var_81_int); // 0x3c1 Func
	
Label_963:
	GetMap(var_63_object); // 0x3c3 ObjFunc
	var_82_bool = var_63_object == 0; // 0x3c5 NullEq
	if(var_82_bool == 0) goto Label_971; // 0x3c6 JumpB
	var_83_string = "Can't find map"; // 0x3c7 PushS
	Trace(var_83_string); // 0x3c8 Func
	return 8; // 0x3ca Return
	
Label_971:
	var_84_float = GetByIndex(var_71_cvector, 0); // 0x3cb PushE
	var_85_float = GetByIndex(var_71_cvector, 2); // 0x3cc PushE
	SetMapParams(var_84_float, var_85_float, var_65_float); // 0x3cd ObjFunc
	return 8; // 0x3cf Return
}


func_818(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2_b.png"; // 0x332 MovS
	return 0; // 0x333 Return
}


func_820(var_69_bool)
{
	var_69_bool = 0; // 0x334 MovB
	return 0; // 0x335 Return
}


func_822()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x336 PushV
	var_22_string = "d1q01"; // 0x337 PushS
	var_23_int = 3; // 0x338 PushI
	SetVariable(var_22_string, var_23_int); // 0x339 Func
	var_24_object = Obj(); // 0x33b PushV
	func_927(var_24_object); // 0x33c NEW_2
	var_21_object = var_24_object; // 0x33d Mov
	var_31_string = "d1q01PatrolGotoAlexandr"; // 0x33f PushS
	var_32_string = "pt_map_alexandr"; // 0x340 PushS
	var_33_int = 1; // 0x341 PushI
	var_34_int = 508632; // 0x342 PushI
	var_35_float = 0; // 0x343 PushV
	func_783(var_35_float); // 0x344 NEW_2
	AddMark(var_31_string, var_32_string, var_33_int, var_34_int, var_35_float); // 0x346 ObjFunc
	func_873(); // 0x349 NEW_2
	return 2; // 0x34b Return
}


func_696()
{
	var_154_bool = 0; var_155_bool = 0; // 0x2b8 PushV
	CameraSwitchToNormal(); // 0x2b9 Func
	var_156_bool = 0; // 0x2bb PushV
	func_820(var_156_bool); // 0x2bc NEW_2
	if(var_156_bool == 0) goto Label_704; // 0x2be JumpB
	goto Label_712; // 0x2bf Jump
	
Label_712:
	return 2; // 0x2c8 Return
	
Label_704:
	var_157_string = "head"; // 0x2c0 PushS
	HasAnimationTrack(var_155_bool, var_157_string); // 0x2c1 Func
	var_158_bool = var_155_bool; // 0x2c3 Push
	if(var_158_bool == 0) goto Label_712; // 0x2c4 JumpB
	var_159_string = "head"; // 0x2c5 PushS
	UnlookAsync(var_159_string); // 0x2c6 Func
}


func_448(var_18_bool)
{
	var_18_bool = 1; // 0x1c0 MovB
	return 0; // 0x1c1 Return
}


func_450(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1c3 PushV
	func_623(var_23_bool); // 0x1c4 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1c6 Not
	if(var_26_bool == 0) goto Label_457; // 0x1c7 JumpB
	return 0; // 0x1c8 Return
	
Label_457:
	var_27_string = "player"; // 0x1c9 PushS
	FindActor(var_17_bool, var_27_string); // 0x1ca Func
	var_2_object = 0; // 0x1cc TMovB
	var_3_string = 0; // 0x1cd TMovB
	var_0_object = var_21_float; // 0x1ce TMov
	var_1_object = var_22_float; // 0x1cf TMov
	var_28_int = 10; // 0x1d0 PushI
	var_29_float = 1.0; // 0x1d1 PushF
	SetTimer(var_28_int, var_29_float); // 0x1d2 Func
	func_529(); // 0x1d5 NEW_2
	var_81_bool = var_3_string == 0; // 0x1d7 Not
	if(var_81_bool == 0) goto Label_476; // 0x1d8 JumpB
	var_82_int = 10; // 0x1d9 PushI
	KillTimer(var_82_int); // 0x1da Func
	
Label_476:
	return 0; // 0x1dc Return
}


func_713(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x2c9 PushV
	lshHasAnimation(var_132_bool, var_128_string); // 0x2ca Func
	var_135_bool = var_132_bool; // 0x2cc Push
	if(var_135_bool == 0) goto Label_724; // 0x2cd JumpB
	lshGetAnimTimes(var_128_string, var_133_float, var_134_float); // 0x2ce Func
	var_136_bool = 0; // 0x2d0 PushB
	lshPlayAnimation(var_133_float, var_134_float, var_136_bool); // 0x2d1 Func
	goto Label_728; // 0x2d3 Jump
	
Label_728:
	return 6; // 0x2d8 Return
	
Label_724:
	var_137_string = "Can't find lsh animation : "; // 0x2d4 PushS
	var_138_int = var_137_string + var_128_string; // 0x2d5 Add
	Trace(var_138_int); // 0x2d6 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_127; // 0x4f JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	func_861(var_95_object); // 0x52 NEW_2
	if(var_94_bool == 0) goto Label_105; // 0x54 JumpB
	var_102_string = ""; // 0x55 PushV
	var_102_string = "Neutral"; // 0x56 MovS
	func_157(var_88_object, var_102_string); // 0x57 NEW_2
	var_119_int = 531679; // 0x59 PushI
	SetMessage(var_119_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_120_int = 533040; // 0x5e PushI
	var_121_int = 34551; // 0x5f PushI
	var_122_int = 34550; // 0x60 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x61 TObjFunc
	var_123_int = 533055; // 0x63 PushI
	var_124_int = 34553; // 0x64 PushI
	var_125_int = 34561; // 0x65 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x66 TObjFunc
	goto Label_127; // 0x68 Jump
	
Label_127:
	var_126_bool = 0; // 0x7f PushV
	func_820(var_126_bool); // 0x80 NEW_2
	if(var_126_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_127_string = var_3_string; // 0x85 PushT
	if(var_127_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_128_string = ""; // 0x88 PushV
	var_128_string = var_2_object; // 0x89 MovT
	func_713(var_128_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_139_string = "all"; // 0x8e PushS
	var_140_string = "idle"; // 0x8f PushS
	PlayAnimation(var_139_string, var_140_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_141_string = var_3_string; // 0x94 PushT
	if(var_141_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_142_string = "all"; // 0x97 PushS
	var_143_string = "idle"; // 0x98 PushS
	PlayAnimation(var_142_string, var_143_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_105:
	var_144_string = ""; // 0x69 PushV
	var_144_string = "Neutral"; // 0x6a MovS
	func_157(var_88_object, var_144_string); // 0x6b NEW_2
	var_145_int = 531681; // 0x6d PushI
	SetMessage(var_145_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_146_int = 531682; // 0x72 PushI
	var_147_int = -1; // 0x73 PushI
	var_148_int = 33066; // 0x74 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x75 TObjFunc
	var_149_int = 533033; // 0x77 PushI
	var_150_int = -1; // 0x78 PushI
	var_151_int = 34543; // 0x79 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_845()
{
	var_63_object = Obj(); var_64_string = ""; var_65_float = 0; // 0x34e PushV
	var_66_object = Obj(); // 0x34f PushV
	func_927(var_66_object); // 0x350 NEW_2
	var_63_object = var_66_object; // 0x351 Mov
	var_64_string = "pt_map_alexandr"; // 0x353 MovS
	var_65_float = 2; // 0x354 MovI
	func_944(var_63_object, var_64_string, var_65_float); // 0x355 NEW_2
	var_86_object = Obj(); // 0x357 PushV
	func_927(var_86_object); // 0x358 NEW_2
	ShowMap(var_86_object); // 0x35a ObjFunc
	return 0; // 0x35c Return
}


func_977(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x3d1 PushV
	var_81_string = "branch"; // 0x3d2 PushS
	GetVariable(var_81_string, var_80_int); // 0x3d3 Func
	var_82_int = 0; // 0x3d5 PushI
	var_83_bool = var_80_int == var_82_int; // 0x3d6 Eq
	if(var_83_bool == 0) goto Label_987; // 0x3d7 JumpB
	var_78_int = 1; // 0x3d8 MovI
	return 2; // 0x3d9 Return
	
Label_987:
	var_84_int = 1; // 0x3db PushI
	var_85_bool = var_80_int == var_84_int; // 0x3dc Eq
	if(var_85_bool == 0) goto Label_992; // 0x3dd JumpB
	var_78_int = 2; // 0x3de MovI
	return 2; // 0x3df Return
	
Label_992:
	var_78_int = 3; // 0x3e0 MovI
	return 2; // 0x3e1 Return
}


func_729(var_106_string, var_107_bool)
{
	var_110_bool = 0; var_111_float = 0; var_112_float = 0; var_113_bool = 0; var_114_float = 0; var_115_float = 0; // 0x2d9 PushV
	lshHasAnimation(var_113_bool, var_106_string); // 0x2da Func
	var_116_bool = var_113_bool; // 0x2dc Push
	if(var_116_bool == 0) goto Label_739; // 0x2dd JumpB
	lshGetAnimTimes(var_106_string, var_114_float, var_115_float); // 0x2de Func
	lshPlayAnimation(var_114_float, var_115_float, var_107_bool); // 0x2e0 Func
	goto Label_743; // 0x2e2 Jump
	
Label_743:
	return 6; // 0x2e7 Return
	
Label_739:
	var_117_string = "Can't find lsh animation : "; // 0x2e3 PushS
	var_118_int = var_117_string + var_106_string; // 0x2e4 Add
	Trace(var_118_int); // 0x2e5 Func
}


func_861(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x35e PushV
	var_97_string = "d1q01"; // 0x35f MovS
	func_778(var_96_int, var_97_string); // 0x360 NEW_2
	var_100_int = 2; // 0x362 PushI
	var_101_bool = var_96_int == var_100_int; // 0x363 Eq
	if(var_101_bool == 0) goto Label_871; // 0x364 JumpB
	var_94_bool = 1; // 0x365 MovB
	return 0; // 0x366 Return
	
Label_871:
	var_94_bool = 0; // 0x367 MovB
	return 0; // 0x368 Return
}


func_477(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1dd PushV
	var_18_bool = var_4_bool == 0; // 0x1de NullEq
	if(var_18_bool == 0) goto Label_482; // 0x1df JumpB
	var_15_bool = 0; // 0x1e0 MovB
	return 2; // 0x1e1 Return
	
Label_482:
	var_19_float = 0; var_20_object = Obj(); // 0x1e2 PushV
	var_20_object = var_4_bool; // 0x1e3 MovT
	func_615(var_20_object); // 0x1e4 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1e6 Sqrt2
	var_27_object = var_2_object; // 0x1e7 PushT
	if(var_27_object == 0) goto Label_490; // 0x1e8 JumpB
	var_17_float = var_17_float - var_1_object; // 0x1e9 Sub2
	
Label_490:
	var_15_bool = var_17_float < var_0_object; // 0x1ea LT2
	return 2; // 0x1eb Return
}


func_608(var_71_bool)
{
	var_71_bool = 1; // 0x260 MovB
	return 0; // 0x261 Return
}


func_610()
{
	StopAnimation(); // 0x262 Func
	StopGroup0(); // 0x264 Func
	return 0; // 0x266 Return
}


func_615(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x267 PushV
	GetPosition(var_24_cvector); // 0x268 Func
	GetPosition(var_25_cvector); // 0x26a ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x26c Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x26d Or2
	return 6; // 0x26e Return
}


func_744(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2e8 PushV
	GetEyesHeight(var_32_float); // 0x2e9 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2eb MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2ec PushE
	var_34_float = var_32_float; // 0x2ed Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2ee PopE
	var_35_string = "head"; // 0x2ef PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2f0 Func
	return 4; // 0x2f2 Return
}


func_873()
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x369 PushV
	var_40_int = 33; // 0x36a PushI
	var_41_int = 1; // 0x36b PushI
	var_42_int = 512115; // 0x36c PushI
	CreateDiaryEntry(var_39_object, var_40_int, var_41_int, var_42_int); // 0x36d Func
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; // 0x36f PushV
	var_44_object = var_39_object; // 0x370 Mov
	var_45_int = 2; // 0x371 MovI
	func_899(var_43_bool, var_44_object, var_45_int); // 0x372 NEW_2
	return 2; // 0x374 Return
}


func_623(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x26f PushV
	IsLoaded(var_25_bool); // 0x270 Func
	var_23_bool = var_25_bool; // 0x272 Mov
	return 2; // 0x273 Return
}


func_755()
{
	var_15_bool = 0; // 0x2f3 PushV
	func_820(var_15_bool); // 0x2f4 NEW_2
	if(var_15_bool == 0) goto Label_761; // 0x2f6 JumpB
	lshStopSpeech(); // 0x2f7 Func
	
Label_761:
	return 0; // 0x2f9 Return
}


func_628(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x274 PushV
	GetPosition(var_40_cvector); // 0x275 ObjFunc
	GetEyesHeight(var_39_float); // 0x277 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x279 PushE
	var_48_float = var_48_float + var_39_float; // 0x27a Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x27b PopE
	GetPosition(var_41_cvector); // 0x27c Func
	GetEyesHeight(var_39_float); // 0x27e Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x280 PushE
	var_49_float = var_49_float + var_39_float; // 0x281 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x282 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x283 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x284 PushE
	var_50_float = 0; // 0x285 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x286 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x287 Or
	var_52_float = sqrt(var_51_int); // 0x288 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x289 Div2
	var_43_cvector = -var_42_cvector; // 0x28a Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x28b Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x28c PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x28d PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x28e Xor2
	func_768(var_54_cvector, var_55_cvector); // 0x28f NEW_2
	var_62_int = 25; // 0x291 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x292 Mult
	var_64_int = var_53_float + var_63_float; // 0x293 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x294 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x295 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x296 Add2
	IsOverrideActive(var_46_bool); // 0x297 Func
	var_66_bool = var_46_bool; // 0x299 Push
	if(var_66_bool == 0) goto Label_669; // 0x29a JumpB
	var_27_bool = 0; // 0x29b MovB
	return 18; // 0x29c Return
	
Label_669:
	StopWorld(); // 0x29d Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x29f Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x2a1 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x2a2 PushE
	Rotate(var_67_float, var_68_float); // 0x2a3 Func
	var_69_bool = 0; // 0x2a5 PushV
	func_820(var_69_bool); // 0x2a6 NEW_2
	if(var_69_bool == 0) goto Label_682; // 0x2a8 JumpB
	goto Label_690; // 0x2a9 Jump
	
Label_690:
	CameraWaitForPlayFinish(); // 0x2b2 Func
	ResumeWorld(); // 0x2b4 Func
	var_27_bool = 1; // 0x2b6 MovB
	return 18; // 0x2b7 Return
	
Label_682:
	var_70_string = "head"; // 0x2aa PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x2ab Func
	var_71_bool = var_47_bool; // 0x2ad Push
	if(var_71_bool == 0) goto Label_690; // 0x2ae JumpB
	var_72_string = "head"; // 0x2af PushS
	LookAsyncCamera(var_72_string); // 0x2b0 Func
}


func_886(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x376 PushV
	GetDiaryRoot(var_54_object); // 0x377 Func
	var_55_bool = var_54_object == 0; // 0x379 Not
	if(var_55_bool == 0) goto Label_896; // 0x37a JumpB
	var_56_string = "Can't retrieve diary root"; // 0x37b PushS
	Trace(var_56_string); // 0x37c Func
	var_52_object = 0; // 0x37e MovB
	return 2; // 0x37f Return
	
Label_896:
	var_52_object = var_54_object; // 0x380 Mov
	return 2; // 0x381 Return
}


func_762(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2fa PushV
	self(var_21_object); // 0x2fb Func
	var_19_object = var_21_object; // 0x2fd Mov
	return 2; // 0x2fe Return
}


func_381(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x17d PushV
	var_6_int = 0; // 0x17e TMovB
	
Label_383:
	var_18_int = 3; // 0x17f PushI
	rand(var_16_float, var_18_int); // 0x180 Func
	var_19_int = 3; // 0x182 PushI
	var_20_int = var_16_float + var_19_int; // 0x183 Add
	Sleep(var_20_int, var_17_bool); // 0x184 Func
	var_6_int = 1; // 0x186 TMovB
	var_21_float = 0; var_22_float = 0; // 0x187 PushV
	var_21_float = var_12_float; // 0x188 Mov
	var_22_float = var_13_float; // 0x189 Mov
	func_450(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x18a NEW_2
	var_6_int = 0; // 0x18c TMovB
	goto Label_383; // 0x18d Jump
}


