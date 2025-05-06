task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa5 PushI
	if(var_14_int == 0) goto Label_264; // 0xa6 JumpB
	func_656(); // 0xa8 NEW_2
	var_16_int = 27203; // 0xaa PushI
	var_17_bool = var_13_bool == var_16_int; // 0xab Eq
	if(var_17_bool == 0) goto Label_183; // 0xac JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xad PushV
	var_18_object = var_1_object; // 0xae MovT
	var_19_object = var_0_object; // 0xaf MovT
	func_713(); // 0xb0 NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0xb2 PushV
	var_61_object = var_1_object; // 0xb3 MovT
	var_62_object = var_0_object; // 0xb4 MovT
	func_736(); // 0xb5 NEW_2
	
Label_183:
	var_87_int = 27198; // 0xb7 PushI
	var_88_bool = var_12_bool == var_87_int; // 0xb8 Eq
	if(var_88_bool == 0) goto Label_216; // 0xb9 JumpB
	var_89_string = ""; // 0xba PushV
	var_89_string = "Neutral"; // 0xbb MovS
	func_142(var_13_bool, var_89_string); // 0xbc NEW_2
	var_106_int = 525906; // 0xbe PushI
	SetMessage(var_106_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_107_bool = 0; var_108_object = Obj(); // 0xc3 PushV
	var_108_object = var_1_object; // 0xc4 MovT
	func_752(var_108_object); // 0xc5 NEW_2
	if(var_107_bool == 0) goto Label_205; // 0xc7 JumpB
	var_115_int = 525907; // 0xc8 PushI
	var_116_int = 27200; // 0xc9 PushI
	var_117_int = 27199; // 0xca PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xcb TObjFunc
	
Label_205:
	var_118_int = 525912; // 0xcd PushI
	var_119_int = -1; // 0xce PushI
	var_120_int = 27204; // 0xcf PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0xd0 TObjFunc
	var_121_int = 529037; // 0xd2 PushI
	var_122_int = -1; // 0xd3 PushI
	var_123_int = 30478; // 0xd4 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0xd5 TObjFunc
	return 0; // 0xd7 Return
	
Label_216:
	var_124_int = 27200; // 0xd8 PushI
	var_125_bool = var_12_bool == var_124_int; // 0xd9 Eq
	if(var_125_bool == 0) goto Label_234; // 0xda JumpB
	var_126_string = ""; // 0xdb PushV
	var_126_string = "Neutral"; // 0xdc MovS
	func_142(var_13_bool, var_126_string); // 0xdd NEW_2
	var_127_int = 525908; // 0xdf PushI
	SetMessage(var_127_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_128_int = 525909; // 0xe4 PushI
	var_129_int = 27202; // 0xe5 PushI
	var_130_int = 27201; // 0xe6 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_131_int = 27202; // 0xea PushI
	var_132_bool = var_12_bool == var_131_int; // 0xeb Eq
	if(var_132_bool == 0) goto Label_252; // 0xec JumpB
	var_133_string = ""; // 0xed PushV
	var_133_string = "Neutral"; // 0xee MovS
	func_142(var_13_bool, var_133_string); // 0xef NEW_2
	var_134_int = 525910; // 0xf1 PushI
	SetMessage(var_134_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_135_int = 525911; // 0xf6 PushI
	var_136_int = -1; // 0xf7 PushI
	var_137_int = 27203; // 0xf8 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_3_string = 1; // 0xfc TMovB
	var_138_bool = 0; // 0xfd PushV
	func_893(var_138_bool); // 0xfe NEW_2
	if(var_138_bool == 0) goto Label_260; // 0x100 JumpB
	lshStopAnimation(); // 0x101 Func
	goto Label_262; // 0x103 Jump
	
Label_262:
	return 0; // 0x106 Return
	
Label_260:
	StopAnimation(); // 0x104 Func
	
Label_264:
	return 0; // 0x108 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_416(var_11_bool, var_12_object); // 0x111 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x113 PushV
	var_17_object = var_12_object; // 0x114 Mov
	TaskCall(0); // 0x115 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x116 NEW_2
	TaskReturn(); // 0x117 TaskReturn
	return 0; // 0x119 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x141 PushS
	var_14_bool = var_12_string == var_13_string; // 0x142 Eq
	if(var_14_bool == 0) goto Label_327; // 0x143 JumpB
	func_300(var_12_string); // 0x145 NEW_2
	
Label_327:
	return 0; // 0x147 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x148 PushT
	if(var_12_int == 0) goto Label_333; // 0x149 JumpB
	func_416(var_10_bool, var_11_bool); // 0x14b NEW_2
	
Label_333:
	var_16_bool = 0; // 0x14d PushV
	var_16_bool = 0; // 0x14e MovB
	var_17_int = var_5_int; // 0x14f PushT
	if(var_17_int == 0) goto Label_342; // 0x150 JumpB
	var_18_bool = 0; // 0x151 PushV
	func_349(var_18_bool); // 0x152 NEW_2
	if(var_18_bool == 0) goto Label_342; // 0x154 JumpB
	var_16_bool = 1; // 0x155 MovB
	
Label_342:
	if(var_16_bool == 0) goto Label_348; // 0x156 JumpB
	var_19_object = Obj(); // 0x157 PushV
	func_663(var_19_object); // 0x158 NEW_2
	RemoveActor(var_19_object); // 0x15a Func
	
Label_348:
	return 0; // 0x15c Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x18a PushI
	var_14_bool = var_12_int == var_13_int; // 0x18b Eq
	if(var_14_bool == 0) goto Label_415; // 0x18c JumpB
	var_15_bool = 0; // 0x18d PushV
	func_378(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x18e NEW_2
	if(var_15_bool == 0) goto Label_409; // 0x190 JumpB
	var_28_bool = var_2_object == 0; // 0x191 Not
	if(var_28_bool == 0) goto Label_408; // 0x192 JumpB
	var_29_object = Obj(); // 0x193 PushV
	var_29_object = var_4_bool; // 0x194 MovT
	func_645(var_29_object); // 0x195 NEW_2
	var_2_object = 1; // 0x197 TMovB
	
Label_408:
	goto Label_415; // 0x198 Jump
	
Label_415:
	return 0; // 0x19f Return
	
Label_409:
	var_36_object = var_2_object; // 0x199 PushT
	if(var_36_object == 0) goto Label_415; // 0x19a JumpB
	var_37_string = "head"; // 0x19b PushS
	UnlookAsync(var_37_string); // 0x19c Func
	var_2_object = 0; // 0x19e TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x109 PushV
	var_12_float = 300; // 0x10a MovI
	var_13_float = 100; // 0x10b MovI
	func_282(var_11_bool, var_12_float, var_13_float); // 0x10c NEW_2
	return 0; // 0x10e Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_529(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_887(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_885(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_889(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_891(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_868(var_78_int); // 0x22 NEW_2
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
	var_147_bool = var_26_bool == 0; // 0x38 Not
	if(var_147_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_148_object = Obj(); // 0x3f PushV
	var_148_object = var_17_object; // 0x40 Mov
	func_597(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_516(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x204 PushV
	GetPosition(var_24_cvector); // 0x205 Func
	GetPosition(var_25_cvector); // 0x207 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x209 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x20a Or2
	return 6; // 0x20b Return
}


func_645(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x285 PushV
	GetEyesHeight(var_32_float); // 0x286 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x288 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x289 PushE
	var_34_float = var_32_float; // 0x28a Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x28b PopE
	var_35_string = "head"; // 0x28c PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x28d Func
	return 4; // 0x28f Return
}


func_777(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x309 PushV
	GetDiaryRoot(var_54_object); // 0x30a Func
	var_55_bool = var_54_object == 0; // 0x30c Not
	if(var_55_bool == 0) goto Label_787; // 0x30d JumpB
	var_56_string = "Can't retrieve diary root"; // 0x30e PushS
	Trace(var_56_string); // 0x30f Func
	var_52_object = 0; // 0x311 MovB
	return 2; // 0x312 Return
	
Label_787:
	var_52_object = var_54_object; // 0x313 Mov
	return 2; // 0x314 Return
}


func_524(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x20c PushV
	IsLoaded(var_25_bool); // 0x20d Func
	var_23_bool = var_25_bool; // 0x20f Mov
	return 2; // 0x210 Return
}


func_893(var_69_bool)
{
	var_69_bool = 0; // 0x37d MovB
	return 0; // 0x37e Return
}


func_142(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x8f PushV
	func_893(var_95_bool); // 0x90 NEW_2
	var_96_bool = var_95_bool == 0; // 0x92 Not
	if(var_96_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_97_bool = var_94_string == var_2_object; // 0x95 Eq
	if(var_97_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_98_string = ""; var_99_bool = 0; // 0x98 PushV
	var_98_string = var_94_string; // 0x99 Mov
	var_100_string = ""; // 0x9a PushS
	var_101_bool = var_94_string == var_100_string; // 0x9b Eq
	if(var_101_bool == 0) goto Label_159; // 0x9c JumpB
	var_99_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_630(var_98_string, var_99_bool); // 0xa0 NEW_2
	var_2_object = var_94_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_99_bool = 1; // 0x9f MovB
}


func_656()
{
	var_15_bool = 0; // 0x290 PushV
	func_893(var_15_bool); // 0x291 NEW_2
	if(var_15_bool == 0) goto Label_662; // 0x293 JumpB
	lshStopSpeech(); // 0x294 Func
	
Label_662:
	return 0; // 0x296 Return
}


func_529(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x211 PushV
	GetPosition(var_40_cvector); // 0x212 ObjFunc
	GetEyesHeight(var_39_float); // 0x214 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x216 PushE
	var_48_float = var_48_float + var_39_float; // 0x217 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x218 PopE
	GetPosition(var_41_cvector); // 0x219 Func
	GetEyesHeight(var_39_float); // 0x21b Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x21d PushE
	var_49_float = var_49_float + var_39_float; // 0x21e Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x21f PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x220 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x221 PushE
	var_50_float = 0; // 0x222 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x223 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x224 Or
	var_52_float = sqrt(var_51_int); // 0x225 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x226 Div2
	var_43_cvector = -var_42_cvector; // 0x227 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x228 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x229 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x22a PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x22b Xor2
	func_669(var_54_cvector, var_55_cvector); // 0x22c NEW_2
	var_62_int = 25; // 0x22e PushI
	var_63_float = var_54_cvector * var_62_int; // 0x22f Mult
	var_64_int = var_53_float + var_63_float; // 0x230 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x231 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x232 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x233 Add2
	IsOverrideActive(var_46_bool); // 0x234 Func
	var_66_bool = var_46_bool; // 0x236 Push
	if(var_66_bool == 0) goto Label_570; // 0x237 JumpB
	var_27_bool = 0; // 0x238 MovB
	return 18; // 0x239 Return
	
Label_570:
	StopWorld(); // 0x23a Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x23c Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x23e PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x23f PushE
	Rotate(var_67_float, var_68_float); // 0x240 Func
	var_69_bool = 0; // 0x242 PushV
	func_893(var_69_bool); // 0x243 NEW_2
	if(var_69_bool == 0) goto Label_583; // 0x245 JumpB
	goto Label_591; // 0x246 Jump
	
Label_591:
	CameraWaitForPlayFinish(); // 0x24f Func
	ResumeWorld(); // 0x251 Func
	var_27_bool = 1; // 0x253 MovB
	return 18; // 0x254 Return
	
Label_583:
	var_70_string = "head"; // 0x247 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x248 Func
	var_71_bool = var_47_bool; // 0x24a Push
	if(var_71_bool == 0) goto Label_591; // 0x24b JumpB
	var_72_string = "head"; // 0x24c PushS
	LookAsyncCamera(var_72_string); // 0x24d Func
}


func_790(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x316 PushV
	var_52_object = Obj(); // 0x317 PushV
	func_777(var_52_object); // 0x318 NEW_2
	var_49_object = var_52_object; // 0x319 Mov
	Find(var_45_int, var_50_object); // 0x31b ObjFunc
	var_57_bool = var_50_object == 0; // 0x31d Not
	if(var_57_bool == 0) goto Label_805; // 0x31e JumpB
	var_58_string = "Can't find diary parent with id: "; // 0x31f PushS
	var_59_int = var_58_string + var_45_int; // 0x320 Add
	Trace(var_59_int); // 0x321 Func
	var_43_bool = 0; // 0x323 MovB
	return 6; // 0x324 Return
	
Label_805:
	AddChild(var_44_object); // 0x325 ObjFunc
	var_60_int = 7; // 0x327 PushI
	SendWorldWndMessage(var_60_int); // 0x328 Func
	GetCategory(var_51_int); // 0x32a ObjFunc
	SetDiarySection(var_51_int); // 0x32c Func
	var_43_bool = 0; // 0x32e MovB
	return 6; // 0x32f Return
}


func_663(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x297 PushV
	self(var_21_object); // 0x298 Func
	var_19_object = var_21_object; // 0x29a Mov
	return 2; // 0x29b Return
}


func_282(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x11a PushV
	var_6_int = 0; // 0x11b TMovB
	
Label_284:
	var_18_int = 3; // 0x11c PushI
	rand(var_16_float, var_18_int); // 0x11d Func
	var_19_int = 3; // 0x11f PushI
	var_20_int = var_16_float + var_19_int; // 0x120 Add
	Sleep(var_20_int, var_17_bool); // 0x121 Func
	var_6_int = 1; // 0x123 TMovB
	var_21_float = 0; var_22_float = 0; // 0x124 PushV
	var_21_float = var_12_float; // 0x125 Mov
	var_22_float = var_13_float; // 0x126 Mov
	func_351(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x127 NEW_2
	var_6_int = 0; // 0x129 TMovB
	goto Label_284; // 0x12a Jump
}


func_669(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x29d PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x29e Or
	var_58_float = sqrt(var_59_int); // 0x29f Sqrt2
	var_60_float = 0.0; // 0x2a0 PushF
	var_61_bool = var_58_float < var_60_float; // 0x2a1 LT
	if(var_61_bool == 0) goto Label_677; // 0x2a2 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x2a3 MovV
	return 2; // 0x2a4 Return
	
Label_677:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x2a5 Div2
	return 2; // 0x2a6 Return
}


func_416(var_2_object, var_3_string)
{
	func_511(); // 0x1a1 NEW_2
	var_13_int = 10; // 0x1a3 PushI
	KillTimer(var_13_int); // 0x1a4 Func
	var_14_object = var_2_object; // 0x1a6 PushT
	if(var_14_object == 0) goto Label_428; // 0x1a7 JumpB
	var_15_string = "head"; // 0x1a8 PushS
	UnlookAsync(var_15_string); // 0x1a9 Func
	var_2_object = 0; // 0x1ab TMovB
	
Label_428:
	var_3_string = 1; // 0x1ac TMovB
	return 0; // 0x1ad Return
}


func_679(var_114_int, var_115_string)
{
	var_116_int = 0; var_117_int = 0; // 0x2a7 PushV
	GetVariable(var_115_string, var_117_int); // 0x2a8 Func
	var_114_int = var_117_int; // 0x2aa Mov
	return 2; // 0x2ab Return
}


func_300(var_5_int)
{
	var_5_int = 1; // 0x12c TMovB
	var_15_bool = 0; // 0x12d PushV
	var_15_bool = 0; // 0x12e MovB
	var_16_bool = 0; // 0x12f PushV
	func_524(var_16_bool); // 0x130 NEW_2
	var_19_bool = var_16_bool == 0; // 0x132 Not
	if(var_19_bool == 0) goto Label_313; // 0x133 JumpB
	var_20_bool = 0; // 0x134 PushV
	func_349(var_20_bool); // 0x135 NEW_2
	if(var_20_bool == 0) goto Label_313; // 0x137 JumpB
	var_15_bool = 1; // 0x138 MovB
	
Label_313:
	if(var_15_bool == 0) goto Label_319; // 0x139 JumpB
	var_21_object = Obj(); // 0x13a PushV
	func_663(var_21_object); // 0x13b NEW_2
	RemoveActor(var_21_object); // 0x13d Func
	
Label_319:
	return 0; // 0x13f Return
}


func_684(var_35_float)
{
	var_36_float = 0; var_37_float = 0; // 0x2ac PushV
	GetGameTime(var_37_float); // 0x2ad Func
	var_35_float = var_37_float; // 0x2af Mov
	return 2; // 0x2b0 Return
}


func_430()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x1ae PushV
	WaitForAnimEnd(); // 0x1af Func
	var_44_bool = 0; // 0x1b1 PushV
	func_524(var_44_bool); // 0x1b2 NEW_2
	var_45_bool = var_44_bool == 0; // 0x1b4 Not
	if(var_45_bool == 0) goto Label_439; // 0x1b5 JumpB
	return 14; // 0x1b6 Return
	
Label_439:
	var_46_int = 0; // 0x1b7 PushV
	func_696(var_46_int); // 0x1b8 NEW_2
	var_37_int = var_46_int; // 0x1b9 Mov
	var_38_int = 0; // 0x1bb MovI
	
Label_444:
	var_59_bool = 0; // 0x1bc PushV
	var_59_bool = 0; // 0x1bd MovB
	var_60_int = 5; // 0x1be PushI
	var_61_bool = var_38_int < var_60_int; // 0x1bf LT
	if(var_61_bool == 0) goto Label_454; // 0x1c0 JumpB
	var_62_bool = 0; // 0x1c1 PushV
	func_524(var_62_bool); // 0x1c2 NEW_2
	if(var_62_bool == 0) goto Label_454; // 0x1c4 JumpB
	var_59_bool = 1; // 0x1c5 MovB
	
Label_454:
	if(var_59_bool == 0) goto Label_506; // 0x1c6 JumpB
	var_63_int = 3; // 0x1c7 PushI
	irand(var_39_int, var_63_int); // 0x1c8 Func
	var_64_int = 0; // 0x1ca PushI
	var_65_bool = var_39_int == var_64_int; // 0x1cb Eq
	if(var_65_bool == 0) goto Label_478; // 0x1cc JumpB
	var_66_int = var_37_int; // 0x1cd Push
	if(var_66_int == 0) goto Label_477; // 0x1ce JumpB
	irand(var_40_int, var_37_int); // 0x1cf Func
	var_67_string = "all"; // 0x1d1 PushS
	var_68_string = ""; var_69_int = 0; // 0x1d2 PushV
	var_69_int = var_40_int; // 0x1d3 Mov
	func_689(var_68_string, var_69_int); // 0x1d4 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x1d6 Func
	WaitForAnimEnd(var_41_bool); // 0x1d8 Func
	var_70_bool = var_41_bool == 0; // 0x1da Not
	if(var_70_bool == 0) goto Label_477; // 0x1db JumpB
	goto Label_506; // 0x1dc Jump
	
Label_506:
	ResetAAS(); // 0x1fa Func
	return 14; // 0x1fc Return
	
Label_477:
	goto Label_495; // 0x1dd Jump
	
Label_495:
	var_71_bool = 0; // 0x1ef PushV
	func_509(var_71_bool); // 0x1f0 NEW_2
	var_72_bool = var_71_bool == 0; // 0x1f2 Not
	if(var_72_bool == 0) goto Label_501; // 0x1f3 JumpB
	goto Label_506; // 0x1f4 Jump
	
Label_501:
	ResetAAS(); // 0x1f5 Func
	var_73_int = 1; // 0x1f7 PushI
	var_38_int = var_38_int + var_73_int; // 0x1f8 Add2
	goto Label_444; // 0x1f9 Jump
	
Label_478:
	var_74_int = 1; // 0x1de PushI
	var_75_bool = var_39_int == var_74_int; // 0x1df Eq
	if(var_75_bool == 0) goto Label_492; // 0x1e0 JumpB
	var_76_int = 4; // 0x1e1 PushI
	rand(var_42_float, var_76_int); // 0x1e2 Func
	var_77_int = 1; // 0x1e4 PushI
	var_78_int = var_42_float + var_77_int; // 0x1e5 Add
	Sleep(var_78_int, var_43_bool); // 0x1e6 Func
	var_79_bool = var_43_bool == 0; // 0x1e8 Not
	if(var_79_bool == 0) goto Label_491; // 0x1e9 JumpB
	goto Label_506; // 0x1ea Jump
	
Label_491:
	goto Label_495; // 0x1eb Jump
	
Label_492:
	var_80_int = var_38_int; // 0x1ec Push
	if(var_80_int == 0) goto Label_495; // 0x1ed JumpB
	goto Label_506; // 0x1ee Jump
}


func_689(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x2b1 PushV
	var_55_string = "idle"; // 0x2b2 MovS
	var_56_int = var_53_int; // 0x2b3 Push
	if(var_56_int == 0) goto Label_694; // 0x2b4 JumpB
	var_55_string = var_55_string + var_53_int; // 0x2b5 Add2
	
Label_694:
	var_52_string = var_55_string; // 0x2b6 Mov
	return 2; // 0x2b7 Return
}


func_818(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x332 PushV
	GetMainOutdoorScene(var_27_object); // 0x333 Func
	var_29_bool = var_27_object == 0; // 0x335 NullEq
	if(var_29_bool == 0) goto Label_829; // 0x336 JumpB
	var_30_string = "Can't find main outdoor scene"; // 0x337 PushS
	Trace(var_30_string); // 0x338 Func
	var_28_object = 0; // 0x33a SetNull
	var_24_object = var_28_object; // 0x33b Mov
	return 4; // 0x33c Return
	
Label_829:
	GetMap(var_28_object); // 0x33d ObjFunc
	var_24_object = var_28_object; // 0x33f Mov
	return 4; // 0x340 Return
}


func_696(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x2b8 PushV
	var_49_int = 0; // 0x2b9 MovI
	
Label_698:
	var_51_string = "all"; // 0x2ba PushS
	var_52_string = ""; var_53_int = 0; // 0x2bb PushV
	var_53_int = var_49_int; // 0x2bc Mov
	func_689(var_52_string, var_53_int); // 0x2bd NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x2bf Func
	var_57_bool = var_50_bool == 0; // 0x2c1 Not
	if(var_57_bool == 0) goto Label_708; // 0x2c2 JumpB
	goto Label_711; // 0x2c3 Jump
	
Label_711:
	var_46_int = var_49_int; // 0x2c7 Mov
	return 4; // 0x2c8 Return
	
Label_708:
	var_58_int = 1; // 0x2c4 PushI
	var_49_int = var_49_int + var_58_int; // 0x2c5 Add2
	goto Label_698; // 0x2c6 Jump
}


func_835(var_63_object, var_64_string, var_65_float)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_bool = 0; // 0x343 PushV
	GetMainOutdoorScene(var_73_object); // 0x344 Func
	var_75_bool = var_73_object == 0; // 0x346 NullEq
	if(var_75_bool == 0) goto Label_844; // 0x347 JumpB
	var_76_string = "Can't find main outdoor scene"; // 0x348 PushS
	Trace(var_76_string); // 0x349 Func
	return 8; // 0x34b Return
	
Label_844:
	GetLocator(var_64_string, var_74_bool, var_71_cvector, var_72_cvector); // 0x34c ObjFunc
	var_77_bool = var_74_bool == 0; // 0x34e Not
	if(var_77_bool == 0) goto Label_854; // 0x34f JumpB
	var_78_string = "Warning: outdoor scene locator "; // 0x350 PushS
	var_79_int = var_78_string + var_64_string; // 0x351 Add
	var_80_string = " doesnt exist"; // 0x352 PushS
	var_81_int = var_79_int + var_80_string; // 0x353 Add
	Trace(var_81_int); // 0x354 Func
	
Label_854:
	GetMap(var_63_object); // 0x356 ObjFunc
	var_82_bool = var_63_object == 0; // 0x358 NullEq
	if(var_82_bool == 0) goto Label_862; // 0x359 JumpB
	var_83_string = "Can't find map"; // 0x35a PushS
	Trace(var_83_string); // 0x35b Func
	return 8; // 0x35d Return
	
Label_862:
	var_84_float = GetByIndex(var_71_cvector, 0); // 0x35e PushE
	var_85_float = GetByIndex(var_71_cvector, 2); // 0x35f PushE
	SetMapParams(var_84_float, var_85_float, var_65_float); // 0x360 ObjFunc
	return 8; // 0x362 Return
}


func_713()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2c9 PushV
	var_22_string = "k5q02"; // 0x2ca PushS
	var_23_int = 3; // 0x2cb PushI
	SetVariable(var_22_string, var_23_int); // 0x2cc Func
	var_24_object = Obj(); // 0x2ce PushV
	func_818(var_24_object); // 0x2cf NEW_2
	var_21_object = var_24_object; // 0x2d0 Mov
	var_31_string = "k5q02KabatchikGotoAlexandr"; // 0x2d2 PushS
	var_32_string = "pt_map_alexandr"; // 0x2d3 PushS
	var_33_int = 0; // 0x2d4 PushI
	var_34_int = 511155; // 0x2d5 PushI
	var_35_float = 0; // 0x2d6 PushV
	func_684(var_35_float); // 0x2d7 NEW_2
	AddMark(var_31_string, var_32_string, var_33_int, var_34_int, var_35_float); // 0x2d9 ObjFunc
	func_764(); // 0x2dc NEW_2
	return 2; // 0x2de Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_112; // 0x4f JumpB
	var_94_string = ""; // 0x50 PushV
	var_94_string = "Neutral"; // 0x51 MovS
	func_142(var_88_object, var_94_string); // 0x52 NEW_2
	var_111_int = 525906; // 0x54 PushI
	SetMessage(var_111_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_112_bool = 0; var_113_object = Obj(); // 0x59 PushV
	var_113_object = var_1_object; // 0x5a MovT
	func_752(var_113_object); // 0x5b NEW_2
	if(var_112_bool == 0) goto Label_99; // 0x5d JumpB
	var_120_int = 525907; // 0x5e PushI
	var_121_int = 27200; // 0x5f PushI
	var_122_int = 27199; // 0x60 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x61 TObjFunc
	
Label_99:
	var_123_int = 525912; // 0x63 PushI
	var_124_int = -1; // 0x64 PushI
	var_125_int = 27204; // 0x65 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x66 TObjFunc
	var_126_int = 529037; // 0x68 PushI
	var_127_int = -1; // 0x69 PushI
	var_128_int = 30478; // 0x6a PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_129_bool = 0; // 0x70 PushV
	func_893(var_129_bool); // 0x71 NEW_2
	if(var_129_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_130_string = var_3_string; // 0x76 PushT
	if(var_130_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_131_string = ""; // 0x79 PushV
	var_131_string = var_2_object; // 0x7a MovT
	func_614(var_131_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_142_string = "all"; // 0x7f PushS
	var_143_string = "idle"; // 0x80 PushS
	PlayAnimation(var_142_string, var_143_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_144_string = var_3_string; // 0x85 PushT
	if(var_144_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_145_string = "all"; // 0x88 PushS
	var_146_string = "idle"; // 0x89 PushS
	PlayAnimation(var_145_string, var_146_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_597()
{
	var_149_bool = 0; var_150_bool = 0; // 0x255 PushV
	CameraSwitchToNormal(); // 0x256 Func
	var_151_bool = 0; // 0x258 PushV
	func_893(var_151_bool); // 0x259 NEW_2
	if(var_151_bool == 0) goto Label_605; // 0x25b JumpB
	goto Label_613; // 0x25c Jump
	
Label_613:
	return 2; // 0x265 Return
	
Label_605:
	var_152_string = "head"; // 0x25d PushS
	HasAnimationTrack(var_150_bool, var_152_string); // 0x25e Func
	var_153_bool = var_150_bool; // 0x260 Push
	if(var_153_bool == 0) goto Label_613; // 0x261 JumpB
	var_154_string = "head"; // 0x262 PushS
	UnlookAsync(var_154_string); // 0x263 Func
}


func_349(var_18_bool)
{
	var_18_bool = 1; // 0x15d MovB
	return 0; // 0x15e Return
}


func_351(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x160 PushV
	func_524(var_23_bool); // 0x161 NEW_2
	var_26_bool = var_23_bool == 0; // 0x163 Not
	if(var_26_bool == 0) goto Label_358; // 0x164 JumpB
	return 0; // 0x165 Return
	
Label_358:
	var_27_string = "player"; // 0x166 PushS
	FindActor(var_17_bool, var_27_string); // 0x167 Func
	var_2_object = 0; // 0x169 TMovB
	var_3_string = 0; // 0x16a TMovB
	var_0_object = var_21_float; // 0x16b TMov
	var_1_object = var_22_float; // 0x16c TMov
	var_28_int = 10; // 0x16d PushI
	var_29_float = 1.0; // 0x16e PushF
	SetTimer(var_28_int, var_29_float); // 0x16f Func
	func_430(); // 0x172 NEW_2
	var_81_bool = var_3_string == 0; // 0x174 Not
	if(var_81_bool == 0) goto Label_377; // 0x175 JumpB
	var_82_int = 10; // 0x176 PushI
	KillTimer(var_82_int); // 0x177 Func
	
Label_377:
	return 0; // 0x179 Return
}


func_736()
{
	var_63_object = Obj(); var_64_string = ""; var_65_float = 0; // 0x2e1 PushV
	var_66_object = Obj(); // 0x2e2 PushV
	func_818(var_66_object); // 0x2e3 NEW_2
	var_63_object = var_66_object; // 0x2e4 Mov
	var_64_string = "pt_map_alexandr"; // 0x2e6 MovS
	var_65_float = 2; // 0x2e7 MovI
	func_835(var_63_object, var_64_string, var_65_float); // 0x2e8 NEW_2
	var_86_object = Obj(); // 0x2ea PushV
	func_818(var_86_object); // 0x2eb NEW_2
	ShowMap(var_86_object); // 0x2ed ObjFunc
	return 0; // 0x2ef Return
}


func_868(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x364 PushV
	var_81_string = "branch"; // 0x365 PushS
	GetVariable(var_81_string, var_80_int); // 0x366 Func
	var_82_int = 0; // 0x368 PushI
	var_83_bool = var_80_int == var_82_int; // 0x369 Eq
	if(var_83_bool == 0) goto Label_878; // 0x36a JumpB
	var_78_int = 1; // 0x36b MovI
	return 2; // 0x36c Return
	
Label_878:
	var_84_int = 1; // 0x36e PushI
	var_85_bool = var_80_int == var_84_int; // 0x36f Eq
	if(var_85_bool == 0) goto Label_883; // 0x370 JumpB
	var_78_int = 2; // 0x371 MovI
	return 2; // 0x372 Return
	
Label_883:
	var_78_int = 3; // 0x373 MovI
	return 2; // 0x374 Return
}


func_614(var_131_string)
{
	var_132_bool = 0; var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_float = 0; var_137_float = 0; // 0x266 PushV
	lshHasAnimation(var_135_bool, var_131_string); // 0x267 Func
	var_138_bool = var_135_bool; // 0x269 Push
	if(var_138_bool == 0) goto Label_625; // 0x26a JumpB
	lshGetAnimTimes(var_131_string, var_136_float, var_137_float); // 0x26b Func
	var_139_bool = 0; // 0x26d PushB
	lshPlayAnimation(var_136_float, var_137_float, var_139_bool); // 0x26e Func
	goto Label_629; // 0x270 Jump
	
Label_629:
	return 6; // 0x275 Return
	
Label_625:
	var_140_string = "Can't find lsh animation : "; // 0x271 PushS
	var_141_int = var_140_string + var_131_string; // 0x272 Add
	Trace(var_141_int); // 0x273 Func
}


func_752(var_112_bool)
{
	var_114_int = 0; var_115_string = ""; // 0x2f1 PushV
	var_115_string = "k5q02"; // 0x2f2 MovS
	func_679(var_114_int, var_115_string); // 0x2f3 NEW_2
	var_118_int = 2; // 0x2f5 PushI
	var_119_bool = var_114_int == var_118_int; // 0x2f6 Eq
	if(var_119_bool == 0) goto Label_762; // 0x2f7 JumpB
	var_112_bool = 1; // 0x2f8 MovB
	return 0; // 0x2f9 Return
	
Label_762:
	var_112_bool = 0; // 0x2fa MovB
	return 0; // 0x2fb Return
}


func_885(var_75_int)
{
	var_75_int = 515563; // 0x375 MovI
	return 0; // 0x376 Return
}


func_630(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x276 PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x277 Func
	var_108_bool = var_105_bool; // 0x279 Push
	if(var_108_bool == 0) goto Label_640; // 0x27a JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x27b Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x27d Func
	goto Label_644; // 0x27f Jump
	
Label_644:
	return 6; // 0x284 Return
	
Label_640:
	var_109_string = "Can't find lsh animation : "; // 0x280 PushS
	var_110_int = var_109_string + var_98_string; // 0x281 Add
	Trace(var_110_int); // 0x282 Func
}


func_887(var_74_int)
{
	var_74_int = 503348; // 0x377 MovI
	return 0; // 0x378 Return
}


func_889(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3.png"; // 0x379 MovS
	return 0; // 0x37a Return
}


func_378(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x17a PushV
	var_18_bool = var_4_bool == 0; // 0x17b NullEq
	if(var_18_bool == 0) goto Label_383; // 0x17c JumpB
	var_15_bool = 0; // 0x17d MovB
	return 2; // 0x17e Return
	
Label_383:
	var_19_float = 0; var_20_object = Obj(); // 0x17f PushV
	var_20_object = var_4_bool; // 0x180 MovT
	func_516(var_20_object); // 0x181 NEW_2
	var_17_float = sqrt(var_19_float); // 0x183 Sqrt2
	var_27_object = var_2_object; // 0x184 PushT
	if(var_27_object == 0) goto Label_391; // 0x185 JumpB
	var_17_float = var_17_float - var_1_object; // 0x186 Sub2
	
Label_391:
	var_15_bool = var_17_float < var_0_object; // 0x187 LT2
	return 2; // 0x188 Return
}


func_891(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3_b.png"; // 0x37b MovS
	return 0; // 0x37c Return
}


func_764()
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x2fc PushV
	var_40_int = 400; // 0x2fd PushI
	var_41_int = 2; // 0x2fe PushI
	var_42_int = 525938; // 0x2ff PushI
	CreateDiaryEntry(var_39_object, var_40_int, var_41_int, var_42_int); // 0x300 Func
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; // 0x302 PushV
	var_44_object = var_39_object; // 0x303 Mov
	var_45_int = 397; // 0x304 MovI
	func_790(var_43_bool, var_44_object, var_45_int); // 0x305 NEW_2
	return 2; // 0x307 Return
}


func_509(var_71_bool)
{
	var_71_bool = 1; // 0x1fd MovB
	return 0; // 0x1fe Return
}


func_511()
{
	StopAnimation(); // 0x1ff Func
	StopGroup0(); // 0x201 Func
	return 0; // 0x203 Return
}


