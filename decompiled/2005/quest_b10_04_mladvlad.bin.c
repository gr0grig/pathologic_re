task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc1 PushI
	if(var_9_int == 0) goto Label_364; // 0xc2 JumpB
	func_967(); // 0xc4 NEW_2
	var_11_int = 31740; // 0xc6 PushI
	var_12_bool = var_7_cvector == var_11_int; // 0xc7 Eq
	if(var_12_bool == 0) goto Label_252; // 0xc8 JumpB
	var_13_bool = 0; var_14_object = Obj(); // 0xc9 PushV
	var_14_object = var_1_object; // 0xca MovT
	func_1034(var_14_object); // 0xcb NEW_2
	var_21_bool = var_13_bool == 0; // 0xcd Not
	if(var_21_bool == 0) goto Label_232; // 0xce JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xcf PushV
	var_22_object = var_1_object; // 0xd0 MovT
	var_23_object = var_0_object; // 0xd1 MovT
	func_1028(); // 0xd2 NEW_2
	var_26_string = ""; // 0xd4 PushV
	var_26_string = "Untrust"; // 0xd5 MovS
	func_170(var_8_bool, var_26_string); // 0xd6 NEW_2
	var_43_int = 530368; // 0xd8 PushI
	SetMessage(var_43_int); // 0xd9 TObjFunc
	ClearReplies(); // 0xdb TObjFunc
	var_44_int = 530370; // 0xdd PushI
	var_45_int = 32796; // 0xde PushI
	var_46_int = 31742; // 0xdf PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xe0 TObjFunc
	var_47_int = 530369; // 0xe2 PushI
	var_48_int = 32796; // 0xe3 PushI
	var_49_int = 31741; // 0xe4 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xe5 TObjFunc
	return 0; // 0xe7 Return
	
Label_232:
	var_50_string = ""; // 0xe8 PushV
	var_50_string = "Neutral"; // 0xe9 MovS
	func_170(var_8_bool, var_50_string); // 0xea NEW_2
	var_51_int = 530371; // 0xec PushI
	SetMessage(var_51_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_52_int = 530372; // 0xf1 PushI
	var_53_int = -1; // 0xf2 PushI
	var_54_int = 31744; // 0xf3 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xf4 TObjFunc
	var_55_int = 531447; // 0xf6 PushI
	var_56_int = -1; // 0xf7 PushI
	var_57_int = 32795; // 0xf8 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_58_int = 32796; // 0xfc PushI
	var_59_bool = var_7_cvector == var_58_int; // 0xfd Eq
	if(var_59_bool == 0) goto Label_275; // 0xfe JumpB
	var_60_string = ""; // 0xff PushV
	var_60_string = "Untrust"; // 0x100 MovS
	func_170(var_8_bool, var_60_string); // 0x101 NEW_2
	var_61_int = 531448; // 0x103 PushI
	SetMessage(var_61_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_62_int = 531449; // 0x108 PushI
	var_63_int = 32799; // 0x109 PushI
	var_64_int = 32798; // 0x10a PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x10b TObjFunc
	var_65_int = 531451; // 0x10d PushI
	var_66_int = 32799; // 0x10e PushI
	var_67_int = 32800; // 0x10f PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_68_int = 32799; // 0x113 PushI
	var_69_bool = var_7_cvector == var_68_int; // 0x114 Eq
	if(var_69_bool == 0) goto Label_293; // 0x115 JumpB
	var_70_string = ""; // 0x116 PushV
	var_70_string = "Fear"; // 0x117 MovS
	func_170(var_8_bool, var_70_string); // 0x118 NEW_2
	var_71_int = 531450; // 0x11a PushI
	SetMessage(var_71_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_72_int = 531452; // 0x11f PushI
	var_73_int = 32803; // 0x120 PushI
	var_74_int = 32802; // 0x121 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_75_int = 32803; // 0x125 PushI
	var_76_bool = var_7_cvector == var_75_int; // 0x126 Eq
	if(var_76_bool == 0) goto Label_316; // 0x127 JumpB
	var_77_string = ""; // 0x128 PushV
	var_77_string = "Rage"; // 0x129 MovS
	func_170(var_8_bool, var_77_string); // 0x12a NEW_2
	var_78_int = 531453; // 0x12c PushI
	SetMessage(var_78_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_79_int = 531454; // 0x131 PushI
	var_80_int = 32806; // 0x132 PushI
	var_81_int = 32804; // 0x133 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x134 TObjFunc
	var_82_int = 531455; // 0x136 PushI
	var_83_int = 32807; // 0x137 PushI
	var_84_int = 32805; // 0x138 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_85_int = 32807; // 0x13c PushI
	var_86_bool = var_7_cvector == var_85_int; // 0x13d Eq
	if(var_86_bool == 0) goto Label_334; // 0x13e JumpB
	var_87_string = ""; // 0x13f PushV
	var_87_string = "Rage"; // 0x140 MovS
	func_170(var_8_bool, var_87_string); // 0x141 NEW_2
	var_88_int = 531457; // 0x143 PushI
	SetMessage(var_88_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_89_int = 531458; // 0x148 PushI
	var_90_int = -1; // 0x149 PushI
	var_91_int = 32808; // 0x14a PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_92_int = 32806; // 0x14e PushI
	var_93_bool = var_7_cvector == var_92_int; // 0x14f Eq
	if(var_93_bool == 0) goto Label_352; // 0x150 JumpB
	var_94_string = ""; // 0x151 PushV
	var_94_string = "Fear"; // 0x152 MovS
	func_170(var_8_bool, var_94_string); // 0x153 NEW_2
	var_95_int = 531456; // 0x155 PushI
	SetMessage(var_95_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_96_int = 531459; // 0x15a PushI
	var_97_int = -1; // 0x15b PushI
	var_98_int = 32809; // 0x15c PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x15d TObjFunc
	return 0; // 0x15f Return
	
Label_352:
	var_3_string = 1; // 0x160 TMovB
	var_99_bool = 0; // 0x161 PushV
	func_1071(var_99_bool); // 0x162 NEW_2
	if(var_99_bool == 0) goto Label_360; // 0x164 JumpB
	lshStopAnimation(); // 0x165 Func
	goto Label_362; // 0x167 Jump
	
Label_362:
	return 0; // 0x16a Return
	
Label_360:
	StopAnimation(); // 0x168 Func
	
Label_364:
	return 0; // 0x16c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x179 PushV
	var_10_string = "cleanup"; // 0x17a PushS
	var_11_bool = var_7_string == var_10_string; // 0x17b Eq
	if(var_11_bool == 0) goto Label_392; // 0x17c JumpB
	var_1_object = 1; // 0x17d TMovB
	IsLoaded(var_9_bool); // 0x17e Func
	var_12_bool = var_9_bool == 0; // 0x180 Not
	if(var_12_bool == 0) goto Label_391; // 0x181 JumpB
	var_13_object = Obj(); // 0x182 PushV
	func_974(var_13_object); // 0x183 NEW_2
	RemoveActor(var_13_object); // 0x185 Func
	
Label_391:
	goto Label_396; // 0x187 Jump
	
Label_396:
	return 2; // 0x18c Return
	
Label_392:
	var_16_string = "restore"; // 0x188 PushS
	var_17_bool = var_7_string == var_16_string; // 0x189 Eq
	if(var_17_bool == 0) goto Label_396; // 0x18a JumpB
	var_1_object = 0; // 0x18b TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x18d PushT
	if(var_7_object == 0) goto Label_406; // 0x18e JumpB
	var_8_object = Obj(); // 0x18f PushV
	func_974(var_8_object); // 0x190 NEW_2
	RemoveActor(var_8_object); // 0x192 Func
	Hold(); // 0x194 Func
	
Label_406:
	func_521(); // 0x197 NEW_2
	return 0; // 0x199 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_536(); // 0x19b NEW_2
	return 0; // 0x19d Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x1e4 PushI
	var_9_bool = var_7_int == var_8_int; // 0x1e5 Eq
	if(var_9_bool == 0) goto Label_520; // 0x1e6 JumpB
	func_479(); // 0x1e8 NEW_2
	var_11_bool = 0; // 0x1ea PushV
	var_11_bool = 0; // 0x1eb MovB
	var_12_bool = 0; // 0x1ec PushV
	func_693(var_12_bool); // 0x1ed NEW_2
	if(var_12_bool == 0) goto Label_501; // 0x1ef JumpB
	var_15_bool = 0; // 0x1f0 PushV
	func_448(var_15_bool); // 0x1f1 NEW_2
	if(var_15_bool == 0) goto Label_501; // 0x1f3 JumpB
	var_11_bool = 1; // 0x1f4 MovB
	
Label_501:
	if(var_11_bool == 0) goto Label_514; // 0x1f5 JumpB
	var_32_bool = 0; // 0x1f6 PushV
	func_428(var_32_bool); // 0x1f7 NEW_2
	if(var_32_bool == 0) goto Label_513; // 0x1f9 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x1fa PushV
	var_53_object = Obj(); // 0x1fb PushV
	func_974(var_53_object); // 0x1fc NEW_2
	var_52_object = var_53_object; // 0x1fd Mov
	func_841(var_52_object); // 0x1ff NEW_2
	
Label_513:
	goto Label_520; // 0x201 Jump
	
Label_520:
	return 0; // 0x208 Return
	
Label_514:
	func_443(var_7_int); // 0x203 NEW_2
	func_470(); // 0x206 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x226 Push
	if(var_8_bool == 0) goto Label_556; // 0x227 JumpB
	func_470(); // 0x229 NEW_2
	goto Label_560; // 0x22b Jump
	
Label_560:
	return 0; // 0x230 Return
	
Label_556:
	var_14_string = ""; // 0x22c PushV
	var_14_string = "Neutral"; // 0x22d MovS
	func_921(var_14_string); // 0x22e NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x231 PushV
	IsOverrideActive(var_9_bool); // 0x232 Func
	var_10_bool = var_9_bool == 0; // 0x234 Not
	if(var_10_bool == 0) goto Label_589; // 0x235 JumpB
	EventDisable(0); // 0x236 EventDisable
	func_661(); // 0x238 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x23a PushV
	var_12_object = var_7_object; // 0x23b Mov
	func_684(var_12_object); // 0x23c NEW_2
	EventEnable(0); // 0x23e EventEnable
	var_25_object = Obj(); // 0x23f PushV
	var_25_object = var_7_object; // 0x240 Mov
	func_365(var_25_object); // 0x241 NEW_2
	var_270_string = ""; // 0x243 PushV
	var_270_string = "Neutral"; // 0x244 MovS
	func_921(var_270_string); // 0x245 NEW_2
	func_479(); // 0x248 NEW_2
	func_470(); // 0x24b NEW_2
	
Label_589:
	return 2; // 0x24d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_414(var_6_bool); // 0x176 NEW_2
	return 0; // 0x178 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_698(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1065(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1063(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1067(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1069(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1046(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_974(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_783(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_262_bool = var_36_bool == 0; // 0x3f Not
	if(var_262_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_263_object = Obj(); // 0x46 PushV
	var_263_object = var_27_object; // 0x47 Mov
	func_766(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1028()
{
	var_210_string = "b10q04PlennikTalk"; // 0x405 PushS
	var_211_int = 1; // 0x406 PushI
	SetVariable(var_210_string, var_211_int); // 0x407 Func
	return 0; // 0x409 Return
}


func_521()
{
	func_661(); // 0x20a NEW_2
	func_479(); // 0x20d NEW_2
	lshStopSpeech(); // 0x20f Func
	lshStopAnimation(); // 0x211 Func
	StopAsync(); // 0x213 Func
	Hold(); // 0x215 Func
	return 0; // 0x217 Return
}


func_1034(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x40b PushV
	var_202_string = "b10q04PlennikTalk"; // 0x40c MovS
	func_990(var_201_int, var_202_string); // 0x40d NEW_2
	var_205_int = 0; // 0x40f PushI
	var_206_bool = var_201_int != var_205_int; // 0x410 Neq
	if(var_206_bool == 0) goto Label_1044; // 0x411 JumpB
	var_199_bool = 1; // 0x412 MovB
	return 0; // 0x413 Return
	
Label_1044:
	var_199_bool = 0; // 0x414 MovB
	return 0; // 0x415 Return
}


func_783(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x30f PushV
	var_106_string = "voice_common"; // 0x310 PushS
	GetVariable(var_106_string, var_104_int); // 0x311 Func
	var_107_int = var_104_int; // 0x313 Push
	if(var_107_int == 0) goto Label_821; // 0x314 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x315 PushV
	var_109_object = var_98_object; // 0x316 Mov
	func_841(var_109_object); // 0x317 NEW_2
	var_138_bool = var_108_bool == 0; // 0x319 Not
	if(var_138_bool == 0) goto Label_803; // 0x31a JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x31b PushV
	var_140_object = var_98_object; // 0x31c Mov
	func_878(var_140_object); // 0x31d NEW_2
	var_174_bool = var_139_bool == 0; // 0x31f Not
	if(var_174_bool == 0) goto Label_803; // 0x320 JumpB
	var_97_bool = 0; // 0x321 MovB
	return 4; // 0x322 Return
	
Label_803:
	var_175_int = 2; // 0x323 PushI
	irand(var_105_int, var_175_int); // 0x324 Func
	var_176_int = var_105_int; // 0x326 Push
	if(var_176_int == 0) goto Label_816; // 0x327 JumpB
	var_177_string = "voice_common"; // 0x328 PushS
	var_178_int = 1; // 0x329 PushI
	var_179_int = var_104_int + var_178_int; // 0x32a Add
	var_180_int = 3; // 0x32b PushI
	var_181_int = var_179_int / var_180_int; // 0x32c Mod
	SetVariable(var_177_string, var_181_int); // 0x32d Func
	goto Label_820; // 0x32f Jump
	
Label_820:
	goto Label_839; // 0x334 Jump
	
Label_839:
	var_97_bool = 1; // 0x347 MovB
	return 4; // 0x348 Return
	
Label_816:
	var_182_string = "voice_common"; // 0x330 PushS
	var_183_int = 0; // 0x331 PushI
	SetVariable(var_182_string, var_183_int); // 0x332 Func
	
Label_821:
	var_184_bool = 0; var_185_object = Obj(); // 0x335 PushV
	var_185_object = var_98_object; // 0x336 Mov
	func_878(var_185_object); // 0x337 NEW_2
	var_186_bool = var_184_bool == 0; // 0x339 Not
	if(var_186_bool == 0) goto Label_835; // 0x33a JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x33b PushV
	var_188_object = var_98_object; // 0x33c Mov
	func_841(var_188_object); // 0x33d NEW_2
	var_189_bool = var_187_bool == 0; // 0x33f Not
	if(var_189_bool == 0) goto Label_835; // 0x340 JumpB
	var_97_bool = 0; // 0x341 MovB
	return 4; // 0x342 Return
	
Label_835:
	var_190_string = "voice_common"; // 0x343 PushS
	var_191_int = 1; // 0x344 PushI
	SetVariable(var_190_string, var_191_int); // 0x345 Func
}


func_659(var_45_bool)
{
	var_45_bool = 1; // 0x293 MovB
	return 0; // 0x294 Return
}


func_661()
{
	StopAnimation(); // 0x295 Func
	StopGroup0(); // 0x297 Func
	return 0; // 0x299 Return
}


func_1046(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x416 PushV
	var_91_string = "branch"; // 0x417 PushS
	GetVariable(var_91_string, var_90_int); // 0x418 Func
	var_92_int = 0; // 0x41a PushI
	var_93_bool = var_90_int == var_92_int; // 0x41b Eq
	if(var_93_bool == 0) goto Label_1056; // 0x41c JumpB
	var_88_int = 1; // 0x41d MovI
	return 2; // 0x41e Return
	
Label_1056:
	var_94_int = 1; // 0x420 PushI
	var_95_bool = var_90_int == var_94_int; // 0x421 Eq
	if(var_95_bool == 0) goto Label_1061; // 0x422 JumpB
	var_88_int = 2; // 0x423 MovI
	return 2; // 0x424 Return
	
Label_1061:
	var_88_int = 3; // 0x425 MovI
	return 2; // 0x426 Return
}


func_536()
{
	StopGroup0(); // 0x218 Func
	func_479(); // 0x21b NEW_2
	var_8_string = ""; // 0x21d PushV
	var_8_string = "Neutral"; // 0x21e MovS
	func_921(var_8_string); // 0x21f NEW_2
	func_470(); // 0x222 NEW_2
	return 0; // 0x224 Return
}


func_921(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0; // 0x399 PushV
	lshHasAnimation(var_242_bool, var_238_string); // 0x39a Func
	var_245_bool = var_242_bool; // 0x39c Push
	if(var_245_bool == 0) goto Label_932; // 0x39d JumpB
	lshGetAnimTimes(var_238_string, var_243_float, var_244_float); // 0x39e Func
	var_246_bool = 0; // 0x3a0 PushB
	lshPlayAnimation(var_243_float, var_244_float, var_246_bool); // 0x3a1 Func
	goto Label_936; // 0x3a3 Jump
	
Label_936:
	return 6; // 0x3a8 Return
	
Label_932:
	var_247_string = "Can't find lsh animation : "; // 0x3a4 PushS
	var_248_int = var_247_string + var_238_string; // 0x3a5 Add
	Trace(var_248_int); // 0x3a6 Func
}


func_666(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x29a PushV
	GetPosition(var_27_cvector); // 0x29b Func
	GetPosition(var_28_cvector); // 0x29d ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x29f Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2a0 Or2
	return 6; // 0x2a1 Return
}


func_414(var_0_object)
{
	var_7_bool = 0; // 0x19e PushV
	func_693(var_7_bool); // 0x19f NEW_2
	var_10_bool = var_7_bool == 0; // 0x1a1 Not
	if(var_10_bool == 0) goto Label_421; // 0x1a2 JumpB
	Hold(); // 0x1a3 Func
	
Label_421:
	GetDirection(var_0_object); // 0x1a5 Func
	
Label_423:
	func_590(); // 0x1a8 NEW_2
	goto Label_423; // 0x1aa Jump
}


func_674(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2a2 PushV
	GetPosition(var_20_cvector); // 0x2a3 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2a5 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2a6 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2a7 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2a8 Func
	var_15_bool = var_22_bool; // 0x2aa Mov
	return 6; // 0x2ab Return
}


func_1063(var_85_int)
{
	var_85_int = 515547; // 0x427 MovI
	return 0; // 0x428 Return
}


func_1065(var_84_int)
{
	var_84_int = 502872; // 0x429 MovI
	return 0; // 0x42a Return
}


func_170(var_2_object, var_212_string)
{
	var_213_bool = 0; // 0xab PushV
	func_1071(var_213_bool); // 0xac NEW_2
	var_214_bool = var_213_bool == 0; // 0xae Not
	if(var_214_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_215_bool = var_212_string == var_2_object; // 0xb1 Eq
	if(var_215_bool == 0) goto Label_180; // 0xb2 JumpB
	return 0; // 0xb3 Return
	
Label_180:
	var_216_string = ""; var_217_bool = 0; // 0xb4 PushV
	var_216_string = var_212_string; // 0xb5 Mov
	var_218_string = ""; // 0xb6 PushS
	var_219_bool = var_212_string == var_218_string; // 0xb7 Eq
	if(var_219_bool == 0) goto Label_187; // 0xb8 JumpB
	var_217_bool = 0; // 0xb9 MovB
	goto Label_188; // 0xba Jump
	
Label_188:
	func_937(var_216_string, var_217_bool); // 0xbc NEW_2
	var_2_object = var_212_string; // 0xbe TMov
	return 0; // 0xbf Return
	
Label_187:
	var_217_bool = 1; // 0xbb MovB
}


func_1067(var_86_string)
{
	var_86_string = "ui/NPC_MladVlad.png"; // 0x42b MovS
	return 0; // 0x42c Return
}


func_937(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x3a9 PushV
	lshHasAnimation(var_223_bool, var_216_string); // 0x3aa Func
	var_226_bool = var_223_bool; // 0x3ac Push
	if(var_226_bool == 0) goto Label_947; // 0x3ad JumpB
	lshGetAnimTimes(var_216_string, var_224_float, var_225_float); // 0x3ae Func
	lshPlayAnimation(var_224_float, var_225_float, var_217_bool); // 0x3b0 Func
	goto Label_951; // 0x3b2 Jump
	
Label_951:
	return 6; // 0x3b7 Return
	
Label_947:
	var_227_string = "Can't find lsh animation : "; // 0x3b3 PushS
	var_228_int = var_227_string + var_216_string; // 0x3b4 Add
	Trace(var_228_int); // 0x3b5 Func
}


func_1069(var_87_string)
{
	var_87_string = "ui/NPC_MladVlad_b.png"; // 0x42d MovS
	return 0; // 0x42e Return
}


func_684(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2ac PushV
	GetPosition(var_14_cvector); // 0x2ad ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2af PushV
	var_16_cvector = var_14_cvector; // 0x2b0 Mov
	func_674(var_15_bool, var_16_cvector); // 0x2b1 NEW_2
	var_11_bool = var_15_bool; // 0x2b2 Mov
	return 2; // 0x2b4 Return
}


func_1071(var_79_bool)
{
	var_79_bool = 1; // 0x42f MovB
	return 0; // 0x430 Return
}


func_428(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1ac PushV
	var_35_string = "player"; // 0x1ad PushS
	FindActor(var_34_object, var_35_string); // 0x1ae Func
	var_36_bool = var_34_object == 0; // 0x1b0 Not
	if(var_36_bool == 0) goto Label_436; // 0x1b1 JumpB
	var_32_bool = 0; // 0x1b2 MovB
	return 2; // 0x1b3 Return
	
Label_436:
	var_37_bool = 0; var_38_object = Obj(); // 0x1b4 PushV
	var_38_object = var_34_object; // 0x1b5 Mov
	func_684(var_38_object); // 0x1b6 NEW_2
	var_32_bool = var_37_bool; // 0x1b7 Mov
	return 2; // 0x1b9 Return
}


func_693(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2b5 PushV
	IsLoaded(var_9_bool); // 0x2b6 Func
	var_7_bool = var_9_bool; // 0x2b8 Mov
	return 2; // 0x2b9 Return
}


func_952(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x3b8 PushV
	var_135_bool = 0; // 0x3b9 PushV
	func_1071(var_135_bool); // 0x3ba NEW_2
	if(var_135_bool == 0) goto Label_965; // 0x3bc JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x3bd Func
	var_136_bool = var_134_bool; // 0x3bf Push
	if(var_136_bool == 0) goto Label_965; // 0x3c0 JumpB
	lshPlaySpeech(var_132_string); // 0x3c1 Func
	var_131_bool = 1; // 0x3c3 MovB
	return 2; // 0x3c4 Return
	
Label_965:
	var_131_bool = 0; // 0x3c5 MovB
	return 2; // 0x3c6 Return
}


func_698(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2ba PushV
	GetPosition(var_50_cvector); // 0x2bb ObjFunc
	GetEyesHeight(var_49_float); // 0x2bd ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2bf PushE
	var_58_float = var_58_float + var_49_float; // 0x2c0 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2c1 PopE
	GetPosition(var_51_cvector); // 0x2c2 Func
	GetEyesHeight(var_49_float); // 0x2c4 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2c6 PushE
	var_59_float = var_59_float + var_49_float; // 0x2c7 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2c8 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2c9 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2ca PushE
	var_60_float = 0; // 0x2cb MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2cc PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2cd Or
	var_62_float = sqrt(var_61_int); // 0x2ce Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x2cf Div2
	var_53_cvector = -var_52_cvector; // 0x2d0 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x2d1 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x2d2 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x2d3 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x2d4 Xor2
	func_980(var_64_cvector, var_65_cvector); // 0x2d5 NEW_2
	var_72_int = 25; // 0x2d7 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x2d8 Mult
	var_74_int = var_63_float + var_73_float; // 0x2d9 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x2da PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x2db Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x2dc Add2
	IsOverrideActive(var_56_bool); // 0x2dd Func
	var_76_bool = var_56_bool; // 0x2df Push
	if(var_76_bool == 0) goto Label_739; // 0x2e0 JumpB
	var_37_bool = 0; // 0x2e1 MovB
	return 18; // 0x2e2 Return
	
Label_739:
	StopWorld(); // 0x2e3 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x2e5 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x2e7 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x2e8 PushE
	Rotate(var_77_float, var_78_float); // 0x2e9 Func
	var_79_bool = 0; // 0x2eb PushV
	func_1071(var_79_bool); // 0x2ec NEW_2
	if(var_79_bool == 0) goto Label_752; // 0x2ee JumpB
	goto Label_760; // 0x2ef Jump
	
Label_760:
	CameraWaitForPlayFinish(); // 0x2f8 Func
	ResumeWorld(); // 0x2fa Func
	var_37_bool = 1; // 0x2fc MovB
	return 18; // 0x2fd Return
	
Label_752:
	var_80_string = "head"; // 0x2f0 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x2f1 Func
	var_81_bool = var_57_bool; // 0x2f3 Push
	if(var_81_bool == 0) goto Label_760; // 0x2f4 JumpB
	var_82_string = "head"; // 0x2f5 PushS
	LookAsyncCamera(var_82_string); // 0x2f6 Func
}


func_443(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1bb PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1bc PushE
	RotateAsync(var_84_float, var_85_float); // 0x1bd Func
	return 0; // 0x1bf Return
}


func_448(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1c0 PushV
	var_20_string = "player"; // 0x1c1 PushS
	FindActor(var_18_object, var_20_string); // 0x1c2 Func
	var_21_bool = var_18_object == 0; // 0x1c4 Not
	if(var_21_bool == 0) goto Label_456; // 0x1c5 JumpB
	var_15_bool = 0; // 0x1c6 MovB
	return 4; // 0x1c7 Return
	
Label_456:
	var_22_float = 0; var_23_object = Obj(); // 0x1c8 PushV
	var_23_object = var_18_object; // 0x1c9 Mov
	func_666(var_23_object); // 0x1ca NEW_2
	var_30_float = 90000.0; // 0x1cc PushF
	var_31_bool = var_22_float > var_30_float; // 0x1cd GT
	if(var_31_bool == 0) goto Label_465; // 0x1ce JumpB
	var_15_bool = 0; // 0x1cf MovB
	return 4; // 0x1d0 Return
	
Label_465:
	CanSee(var_19_bool, var_18_object); // 0x1d1 Func
	var_15_bool = var_19_bool; // 0x1d3 Mov
	return 4; // 0x1d4 Return
}


func_967()
{
	var_10_bool = 0; // 0x3c7 PushV
	func_1071(var_10_bool); // 0x3c8 NEW_2
	if(var_10_bool == 0) goto Label_973; // 0x3ca JumpB
	lshStopSpeech(); // 0x3cb Func
	
Label_973:
	return 0; // 0x3cd Return
}


func_841(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x349 PushV
	var_115_string = "c"; // 0x34a MovS
	var_116_int = 0; // 0x34b MovI
	
Label_844:
	var_120_int = 1; // 0x34c PushI
	if(var_120_int == 0) goto Label_857; // 0x34d JumpB
	var_121_int = 1; // 0x34e PushI
	var_122_int = var_116_int + var_121_int; // 0x34f Add
	var_123_int = var_115_string + var_122_int; // 0x350 Add
	HasProperty(var_123_int, var_117_bool); // 0x351 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x353 Not
	if(var_124_bool == 0) goto Label_854; // 0x354 JumpB
	goto Label_857; // 0x355 Jump
	
Label_857:
	var_125_bool = var_116_int == 0; // 0x359 Not
	if(var_125_bool == 0) goto Label_861; // 0x35a JumpB
	var_108_bool = 0; // 0x35b MovB
	return 10; // 0x35c Return
	
Label_861:
	var_118_int = 0; // 0x35d MovI
	var_126_int = 1; // 0x35e PushI
	var_127_bool = var_116_int > var_126_int; // 0x35f GT
	if(var_127_bool == 0) goto Label_867; // 0x360 JumpB
	irand(var_118_int, var_116_int); // 0x361 Func
	
Label_867:
	var_128_int = 1; // 0x363 PushI
	var_129_int = var_118_int + var_128_int; // 0x364 Add
	var_130_int = var_115_string + var_129_int; // 0x365 Add
	GetProperty(var_130_int, var_119_string); // 0x366 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x368 PushV
	var_132_string = var_119_string; // 0x369 Mov
	func_952(var_131_bool, var_132_string); // 0x36a NEW_2
	var_108_bool = var_131_bool; // 0x36b Mov
	return 10; // 0x36d Return
	
Label_854:
	var_137_int = 1; // 0x356 PushI
	var_116_int = var_116_int + var_137_int; // 0x357 Add2
	goto Label_844; // 0x358 Jump
}


func_974(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x3ce PushV
	self(var_101_object); // 0x3cf Func
	var_99_object = var_101_object; // 0x3d1 Mov
	return 2; // 0x3d2 Return
}


func_590()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x24e PushV
	WaitForAnimEnd(); // 0x24f Func
	var_23_bool = 0; // 0x251 PushV
	func_693(var_23_bool); // 0x252 NEW_2
	var_24_bool = var_23_bool == 0; // 0x254 Not
	if(var_24_bool == 0) goto Label_599; // 0x255 JumpB
	return 12; // 0x256 Return
	
Label_599:
	var_25_int = 0; // 0x257 PushV
	func_1011(var_25_int); // 0x258 NEW_2
	var_17_int = var_25_int; // 0x259 Mov
	var_18_int = 0; // 0x25b MovI
	
Label_604:
	var_38_bool = 0; // 0x25c PushV
	var_38_bool = 0; // 0x25d MovB
	var_39_int = 5; // 0x25e PushI
	var_40_bool = var_18_int < var_39_int; // 0x25f LT
	if(var_40_bool == 0) goto Label_614; // 0x260 JumpB
	var_41_bool = 0; // 0x261 PushV
	func_693(var_41_bool); // 0x262 NEW_2
	if(var_41_bool == 0) goto Label_614; // 0x264 JumpB
	var_38_bool = 1; // 0x265 MovB
	
Label_614:
	if(var_38_bool == 0) goto Label_656; // 0x266 JumpB
	var_42_bool = var_17_int == 0; // 0x267 Not
	if(var_42_bool == 0) goto Label_624; // 0x268 JumpB
	var_43_int = 3; // 0x269 PushI
	Sleep(var_43_int, var_19_bool); // 0x26a Func
	var_44_bool = var_19_bool == 0; // 0x26c Not
	if(var_44_bool == 0) goto Label_623; // 0x26d JumpB
	goto Label_656; // 0x26e Jump
	
Label_656:
	ResetAAS(); // 0x290 Func
	return 12; // 0x292 Return
	
Label_623:
	goto Label_645; // 0x26f Jump
	
Label_645:
	var_45_bool = 0; // 0x285 PushV
	func_659(var_45_bool); // 0x286 NEW_2
	var_46_bool = var_45_bool == 0; // 0x288 Not
	if(var_46_bool == 0) goto Label_651; // 0x289 JumpB
	goto Label_656; // 0x28a Jump
	
Label_651:
	ResetAAS(); // 0x28b Func
	var_47_int = 1; // 0x28d PushI
	var_18_int = var_18_int + var_47_int; // 0x28e Add2
	goto Label_604; // 0x28f Jump
	
Label_624:
	irand(var_20_int, var_17_int); // 0x270 Func
	var_48_int = 5; // 0x272 PushI
	irand(var_21_int, var_48_int); // 0x273 Func
	var_49_int = 0; // 0x275 PushI
	var_50_bool = var_21_int != var_49_int; // 0x276 Neq
	if(var_50_bool == 0) goto Label_633; // 0x277 JumpB
	var_20_int = 0; // 0x278 MovI
	
Label_633:
	var_51_string = "all"; // 0x279 PushS
	var_52_string = ""; var_53_int = 0; // 0x27a PushV
	var_53_int = var_20_int; // 0x27b Mov
	func_1004(var_52_string, var_53_int); // 0x27c NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x27e Func
	WaitForAnimEnd(var_22_bool); // 0x280 Func
	var_54_bool = var_22_bool == 0; // 0x282 Not
	if(var_54_bool == 0) goto Label_645; // 0x283 JumpB
	goto Label_656; // 0x284 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_140; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1034(var_200_object); // 0x59 NEW_2
	var_207_bool = var_199_bool == 0; // 0x5b Not
	if(var_207_bool == 0) goto Label_118; // 0x5c JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x5d PushV
	var_208_object = var_1_object; // 0x5e MovT
	var_209_object = var_0_object; // 0x5f MovT
	func_1028(); // 0x60 NEW_2
	var_212_string = ""; // 0x62 PushV
	var_212_string = "Untrust"; // 0x63 MovS
	func_170(var_193_object, var_212_string); // 0x64 NEW_2
	var_229_int = 530368; // 0x66 PushI
	SetMessage(var_229_int); // 0x67 TObjFunc
	ClearReplies(); // 0x69 TObjFunc
	var_230_int = 530370; // 0x6b PushI
	var_231_int = 32796; // 0x6c PushI
	var_232_int = 31742; // 0x6d PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x6e TObjFunc
	var_233_int = 530369; // 0x70 PushI
	var_234_int = 32796; // 0x71 PushI
	var_235_int = 31741; // 0x72 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x73 TObjFunc
	goto Label_140; // 0x75 Jump
	
Label_140:
	var_236_bool = 0; // 0x8c PushV
	func_1071(var_236_bool); // 0x8d NEW_2
	if(var_236_bool == 0) goto Label_155; // 0x8f JumpB
	
Label_144:
	lshWaitForAnimEnd(); // 0x90 Func
	var_237_string = var_3_string; // 0x92 PushT
	if(var_237_string == 0) goto Label_149; // 0x93 JumpB
	goto Label_154; // 0x94 Jump
	
Label_154:
	goto Label_169; // 0x9a Jump
	
Label_169:
	return 0; // 0xa9 Return
	
Label_149:
	var_238_string = ""; // 0x95 PushV
	var_238_string = var_2_object; // 0x96 MovT
	func_921(var_238_string); // 0x97 NEW_2
	goto Label_144; // 0x99 Jump
	
Label_155:
	var_249_string = "all"; // 0x9b PushS
	var_250_string = "idle"; // 0x9c PushS
	PlayAnimation(var_249_string, var_250_string); // 0x9d Func
	
Label_159:
	WaitForAnimEnd(); // 0x9f Func
	var_251_string = var_3_string; // 0xa1 PushT
	if(var_251_string == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_164:
	var_252_string = "all"; // 0xa4 PushS
	var_253_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_252_string, var_253_string); // 0xa6 Func
	goto Label_159; // 0xa8 Jump
	
Label_118:
	var_254_string = ""; // 0x76 PushV
	var_254_string = "Neutral"; // 0x77 MovS
	func_170(var_193_object, var_254_string); // 0x78 NEW_2
	var_255_int = 530371; // 0x7a PushI
	SetMessage(var_255_int); // 0x7b TObjFunc
	ClearReplies(); // 0x7d TObjFunc
	var_256_int = 530372; // 0x7f PushI
	var_257_int = -1; // 0x80 PushI
	var_258_int = 31744; // 0x81 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x82 TObjFunc
	var_259_int = 531447; // 0x84 PushI
	var_260_int = -1; // 0x85 PushI
	var_261_int = 32795; // 0x86 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x87 TObjFunc
	goto Label_140; // 0x89 Jump
}


func_980(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3d4 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3d5 Or
	var_68_float = sqrt(var_69_int); // 0x3d6 Sqrt2
	var_70_float = 0.0; // 0x3d7 PushF
	var_71_bool = var_68_float < var_70_float; // 0x3d8 LT
	if(var_71_bool == 0) goto Label_988; // 0x3d9 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3da MovV
	return 2; // 0x3db Return
	
Label_988:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3dc Div2
	return 2; // 0x3dd Return
}


func_470()
{
	var_272_float = 0; var_273_float = 0; // 0x1d6 PushV
	var_274_int = 8; // 0x1d7 PushI
	var_275_int = 16; // 0x1d8 PushI
	rand(var_273_float, var_274_int, var_275_int); // 0x1d9 Func
	var_276_int = 10; // 0x1db PushI
	SetTimer(var_276_int, var_273_float); // 0x1dc Func
	return 2; // 0x1de Return
}


func_990(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x3de PushV
	GetVariable(var_202_string, var_204_int); // 0x3df Func
	var_201_int = var_204_int; // 0x3e1 Mov
	return 2; // 0x3e2 Return
}


func_479()
{
	var_271_int = 10; // 0x1df PushI
	KillTimer(var_271_int); // 0x1e0 Func
	return 0; // 0x1e2 Return
}


func_995(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x3e3 PushV
	GetGameTime(var_154_float); // 0x3e4 Func
	var_155_int = 1; // 0x3e6 PushI
	var_156_int = 0; // 0x3e7 PushV
	var_157_int = 24; // 0x3e8 PushI
	var_156_int = var_154_float / var_154_float; // 0x3e9 Div2
	var_152_int = var_155_int + var_156_int; // 0x3ea Add2
	return 2; // 0x3eb Return
}


func_1004(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x3ec PushV
	var_34_string = "idle"; // 0x3ed MovS
	var_35_int = var_32_int; // 0x3ee Push
	if(var_35_int == 0) goto Label_1009; // 0x3ef JumpB
	var_34_string = var_34_string + var_32_int; // 0x3f0 Add2
	
Label_1009:
	var_31_string = var_34_string; // 0x3f1 Mov
	return 2; // 0x3f2 Return
}


func_365(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x16e PushV
	var_27_object = var_25_object; // 0x16f Mov
	TaskCall(0); // 0x170 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x171 NEW_2
	TaskReturn(); // 0x172 TaskReturn
	return 0; // 0x174 Return
}


func_878(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x36e PushV
	var_151_string = "d"; // 0x36f PushS
	var_152_int = 0; // 0x370 PushV
	func_995(var_152_int); // 0x371 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x373 Add
	var_159_string = "m"; // 0x374 PushS
	var_146_string = var_158_int + var_159_string; // 0x375 Add2
	var_147_int = 0; // 0x376 MovI
	
Label_887:
	var_160_int = 1; // 0x377 PushI
	if(var_160_int == 0) goto Label_900; // 0x378 JumpB
	var_161_int = 1; // 0x379 PushI
	var_162_int = var_147_int + var_161_int; // 0x37a Add
	var_163_int = var_146_string + var_162_int; // 0x37b Add
	HasProperty(var_163_int, var_148_bool); // 0x37c ObjFunc
	var_164_bool = var_148_bool == 0; // 0x37e Not
	if(var_164_bool == 0) goto Label_897; // 0x37f JumpB
	goto Label_900; // 0x380 Jump
	
Label_900:
	var_165_bool = var_147_int == 0; // 0x384 Not
	if(var_165_bool == 0) goto Label_904; // 0x385 JumpB
	var_139_bool = 0; // 0x386 MovB
	return 10; // 0x387 Return
	
Label_904:
	var_149_int = 0; // 0x388 MovI
	var_166_int = 1; // 0x389 PushI
	var_167_bool = var_147_int > var_166_int; // 0x38a GT
	if(var_167_bool == 0) goto Label_910; // 0x38b JumpB
	irand(var_149_int, var_147_int); // 0x38c Func
	
Label_910:
	var_168_int = 1; // 0x38e PushI
	var_169_int = var_149_int + var_168_int; // 0x38f Add
	var_170_int = var_146_string + var_169_int; // 0x390 Add
	GetProperty(var_170_int, var_150_string); // 0x391 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x393 PushV
	var_172_string = var_150_string; // 0x394 Mov
	func_952(var_171_bool, var_172_string); // 0x395 NEW_2
	var_139_bool = var_171_bool; // 0x396 Mov
	return 10; // 0x398 Return
	
Label_897:
	var_173_int = 1; // 0x381 PushI
	var_147_int = var_147_int + var_173_int; // 0x382 Add2
	goto Label_887; // 0x383 Jump
}


func_1011(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x3f3 PushV
	var_28_int = 0; // 0x3f4 MovI
	
Label_1013:
	var_30_string = "all"; // 0x3f5 PushS
	var_31_string = ""; var_32_int = 0; // 0x3f6 PushV
	var_32_int = var_28_int; // 0x3f7 Mov
	func_1004(var_31_string, var_32_int); // 0x3f8 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x3fa Func
	var_36_bool = var_29_bool == 0; // 0x3fc Not
	if(var_36_bool == 0) goto Label_1023; // 0x3fd JumpB
	goto Label_1026; // 0x3fe Jump
	
Label_1026:
	var_25_int = var_28_int; // 0x402 Mov
	return 4; // 0x403 Return
	
Label_1023:
	var_37_int = 1; // 0x3ff PushI
	var_28_int = var_28_int + var_37_int; // 0x400 Add2
	goto Label_1013; // 0x401 Jump
}


func_766()
{
	var_264_bool = 0; var_265_bool = 0; // 0x2fe PushV
	CameraSwitchToNormal(); // 0x2ff Func
	var_266_bool = 0; // 0x301 PushV
	func_1071(var_266_bool); // 0x302 NEW_2
	if(var_266_bool == 0) goto Label_774; // 0x304 JumpB
	goto Label_782; // 0x305 Jump
	
Label_782:
	return 2; // 0x30e Return
	
Label_774:
	var_267_string = "head"; // 0x306 PushS
	HasAnimationTrack(var_265_bool, var_267_string); // 0x307 Func
	var_268_bool = var_265_bool; // 0x309 Push
	if(var_268_bool == 0) goto Label_782; // 0x30a JumpB
	var_269_string = "head"; // 0x30b PushS
	UnlookAsync(var_269_string); // 0x30c Func
}


