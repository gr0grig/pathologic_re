task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc1 PushI
	if(var_9_int == 0) goto Label_364; // 0xc2 JumpB
	func_969(); // 0xc4 NEW_2
	var_11_int = 31740; // 0xc6 PushI
	var_12_bool = var_7_cvector == var_11_int; // 0xc7 Eq
	if(var_12_bool == 0) goto Label_252; // 0xc8 JumpB
	var_13_bool = 0; var_14_object = Obj(); // 0xc9 PushV
	var_14_object = var_1_object; // 0xca MovT
	func_1036(var_14_object); // 0xcb NEW_2
	var_21_bool = var_13_bool == 0; // 0xcd Not
	if(var_21_bool == 0) goto Label_232; // 0xce JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xcf PushV
	var_22_object = var_1_object; // 0xd0 MovT
	var_23_object = var_0_object; // 0xd1 MovT
	func_1030(); // 0xd2 NEW_2
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
	func_1073(var_99_bool); // 0x162 NEW_2
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
	func_976(var_13_object); // 0x183 NEW_2
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
	func_976(var_8_object); // 0x190 NEW_2
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
	func_976(var_53_object); // 0x1fc NEW_2
	var_52_object = var_53_object; // 0x1fd Mov
	func_843(var_52_object); // 0x1ff NEW_2
	
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
	func_923(var_14_string); // 0x22e NEW_2
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
	var_272_string = ""; // 0x243 PushV
	var_272_string = "Neutral"; // 0x244 MovS
	func_923(var_272_string); // 0x245 NEW_2
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
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1067(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1065(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1069(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1071(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1048(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_976(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_785(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_263_bool = var_36_bool == 0; // 0x3f Not
	if(var_263_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_264_object = Obj(); // 0x46 PushV
	var_264_object = var_27_object; // 0x47 Mov
	func_767(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1030()
{
	var_211_string = "b10q04PlennikTalk"; // 0x407 PushS
	var_212_int = 1; // 0x408 PushI
	SetVariable(var_211_string, var_212_int); // 0x409 Func
	return 0; // 0x40b Return
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


func_1036(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x40d PushV
	var_203_string = "b10q04PlennikTalk"; // 0x40e MovS
	func_992(var_202_int, var_203_string); // 0x40f NEW_2
	var_206_int = 0; // 0x411 PushI
	var_207_bool = var_202_int != var_206_int; // 0x412 Neq
	if(var_207_bool == 0) goto Label_1046; // 0x413 JumpB
	var_200_bool = 1; // 0x414 MovB
	return 0; // 0x415 Return
	
Label_1046:
	var_200_bool = 0; // 0x416 MovB
	return 0; // 0x417 Return
}


func_785(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x311 PushV
	var_107_string = "voice_common"; // 0x312 PushS
	GetVariable(var_107_string, var_105_int); // 0x313 Func
	var_108_int = var_105_int; // 0x315 Push
	if(var_108_int == 0) goto Label_823; // 0x316 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x317 PushV
	var_110_object = var_99_object; // 0x318 Mov
	func_843(var_110_object); // 0x319 NEW_2
	var_139_bool = var_109_bool == 0; // 0x31b Not
	if(var_139_bool == 0) goto Label_805; // 0x31c JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x31d PushV
	var_141_object = var_99_object; // 0x31e Mov
	func_880(var_141_object); // 0x31f NEW_2
	var_175_bool = var_140_bool == 0; // 0x321 Not
	if(var_175_bool == 0) goto Label_805; // 0x322 JumpB
	var_98_bool = 0; // 0x323 MovB
	return 4; // 0x324 Return
	
Label_805:
	var_176_int = 2; // 0x325 PushI
	irand(var_106_int, var_176_int); // 0x326 Func
	var_177_int = var_106_int; // 0x328 Push
	if(var_177_int == 0) goto Label_818; // 0x329 JumpB
	var_178_string = "voice_common"; // 0x32a PushS
	var_179_int = 1; // 0x32b PushI
	var_180_int = var_105_int + var_179_int; // 0x32c Add
	var_181_int = 3; // 0x32d PushI
	var_182_int = var_180_int / var_181_int; // 0x32e Mod
	SetVariable(var_178_string, var_182_int); // 0x32f Func
	goto Label_822; // 0x331 Jump
	
Label_822:
	goto Label_841; // 0x336 Jump
	
Label_841:
	var_98_bool = 1; // 0x349 MovB
	return 4; // 0x34a Return
	
Label_818:
	var_183_string = "voice_common"; // 0x332 PushS
	var_184_int = 0; // 0x333 PushI
	SetVariable(var_183_string, var_184_int); // 0x334 Func
	
Label_823:
	var_185_bool = 0; var_186_object = Obj(); // 0x337 PushV
	var_186_object = var_99_object; // 0x338 Mov
	func_880(var_186_object); // 0x339 NEW_2
	var_187_bool = var_185_bool == 0; // 0x33b Not
	if(var_187_bool == 0) goto Label_837; // 0x33c JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x33d PushV
	var_189_object = var_99_object; // 0x33e Mov
	func_843(var_189_object); // 0x33f NEW_2
	var_190_bool = var_188_bool == 0; // 0x341 Not
	if(var_190_bool == 0) goto Label_837; // 0x342 JumpB
	var_98_bool = 0; // 0x343 MovB
	return 4; // 0x344 Return
	
Label_837:
	var_191_string = "voice_common"; // 0x345 PushS
	var_192_int = 1; // 0x346 PushI
	SetVariable(var_191_string, var_192_int); // 0x347 Func
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


func_536()
{
	StopGroup0(); // 0x218 Func
	func_479(); // 0x21b NEW_2
	var_8_string = ""; // 0x21d PushV
	var_8_string = "Neutral"; // 0x21e MovS
	func_923(var_8_string); // 0x21f NEW_2
	func_470(); // 0x222 NEW_2
	return 0; // 0x224 Return
}


func_1048(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x418 PushV
	var_92_string = "branch"; // 0x419 PushS
	GetVariable(var_92_string, var_91_int); // 0x41a Func
	var_93_int = 0; // 0x41c PushI
	var_94_bool = var_91_int == var_93_int; // 0x41d Eq
	if(var_94_bool == 0) goto Label_1058; // 0x41e JumpB
	var_89_int = 1; // 0x41f MovI
	return 2; // 0x420 Return
	
Label_1058:
	var_95_int = 1; // 0x422 PushI
	var_96_bool = var_91_int == var_95_int; // 0x423 Eq
	if(var_96_bool == 0) goto Label_1063; // 0x424 JumpB
	var_89_int = 2; // 0x425 MovI
	return 2; // 0x426 Return
	
Label_1063:
	var_89_int = 3; // 0x427 MovI
	return 2; // 0x428 Return
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


func_923(var_239_string)
{
	var_240_bool = 0; var_241_float = 0; var_242_float = 0; var_243_bool = 0; var_244_float = 0; var_245_float = 0; // 0x39b PushV
	lshHasAnimation(var_243_bool, var_239_string); // 0x39c Func
	var_246_bool = var_243_bool; // 0x39e Push
	if(var_246_bool == 0) goto Label_934; // 0x39f JumpB
	lshGetAnimTimes(var_239_string, var_244_float, var_245_float); // 0x3a0 Func
	var_247_bool = 0; // 0x3a2 PushB
	lshPlayAnimation(var_244_float, var_245_float, var_247_bool); // 0x3a3 Func
	goto Label_938; // 0x3a5 Jump
	
Label_938:
	return 6; // 0x3aa Return
	
Label_934:
	var_248_string = "Can't find lsh animation : "; // 0x3a6 PushS
	var_249_int = var_248_string + var_239_string; // 0x3a7 Add
	Trace(var_249_int); // 0x3a8 Func
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


func_1065(var_86_int)
{
	var_86_int = 515547; // 0x429 MovI
	return 0; // 0x42a Return
}


func_170(var_2_object, var_213_string)
{
	var_214_bool = 0; // 0xab PushV
	func_1073(var_214_bool); // 0xac NEW_2
	var_215_bool = var_214_bool == 0; // 0xae Not
	if(var_215_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_216_bool = var_213_string == var_2_object; // 0xb1 Eq
	if(var_216_bool == 0) goto Label_180; // 0xb2 JumpB
	return 0; // 0xb3 Return
	
Label_180:
	var_217_string = ""; var_218_bool = 0; // 0xb4 PushV
	var_217_string = var_213_string; // 0xb5 Mov
	var_219_string = ""; // 0xb6 PushS
	var_220_bool = var_213_string == var_219_string; // 0xb7 Eq
	if(var_220_bool == 0) goto Label_187; // 0xb8 JumpB
	var_218_bool = 0; // 0xb9 MovB
	goto Label_188; // 0xba Jump
	
Label_188:
	func_939(var_217_string, var_218_bool); // 0xbc NEW_2
	var_2_object = var_213_string; // 0xbe TMov
	return 0; // 0xbf Return
	
Label_187:
	var_218_bool = 1; // 0xbb MovB
}


func_1067(var_85_int)
{
	var_85_int = 502872; // 0x42b MovI
	return 0; // 0x42c Return
}


func_939(var_217_string, var_218_bool)
{
	var_221_bool = 0; var_222_float = 0; var_223_float = 0; var_224_bool = 0; var_225_float = 0; var_226_float = 0; // 0x3ab PushV
	lshHasAnimation(var_224_bool, var_217_string); // 0x3ac Func
	var_227_bool = var_224_bool; // 0x3ae Push
	if(var_227_bool == 0) goto Label_949; // 0x3af JumpB
	lshGetAnimTimes(var_217_string, var_225_float, var_226_float); // 0x3b0 Func
	lshPlayAnimation(var_225_float, var_226_float, var_218_bool); // 0x3b2 Func
	goto Label_953; // 0x3b4 Jump
	
Label_953:
	return 6; // 0x3b9 Return
	
Label_949:
	var_228_string = "Can't find lsh animation : "; // 0x3b5 PushS
	var_229_int = var_228_string + var_217_string; // 0x3b6 Add
	Trace(var_229_int); // 0x3b7 Func
}


func_1069(var_87_string)
{
	var_87_string = "ui/NPC_MladVlad.png"; // 0x42d MovS
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


func_1071(var_88_string)
{
	var_88_string = "ui/NPC_MladVlad_b.png"; // 0x42f MovS
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


func_1073(var_80_bool)
{
	var_80_bool = 1; // 0x431 MovB
	return 0; // 0x432 Return
}


func_693(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2b5 PushV
	IsLoaded(var_9_bool); // 0x2b6 Func
	var_7_bool = var_9_bool; // 0x2b8 Mov
	return 2; // 0x2b9 Return
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
	func_982(var_64_cvector, var_65_cvector); // 0x2d5 NEW_2
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
	var_77_bool = 1; // 0x2e5 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x2e6 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x2e8 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x2e9 PushE
	Rotate(var_78_float, var_79_float); // 0x2ea Func
	var_80_bool = 0; // 0x2ec PushV
	func_1073(var_80_bool); // 0x2ed NEW_2
	if(var_80_bool == 0) goto Label_753; // 0x2ef JumpB
	goto Label_761; // 0x2f0 Jump
	
Label_761:
	CameraWaitForPlayFinish(); // 0x2f9 Func
	ResumeWorld(); // 0x2fb Func
	var_37_bool = 1; // 0x2fd MovB
	return 18; // 0x2fe Return
	
Label_753:
	var_81_string = "head"; // 0x2f1 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x2f2 Func
	var_82_bool = var_57_bool; // 0x2f4 Push
	if(var_82_bool == 0) goto Label_761; // 0x2f5 JumpB
	var_83_string = "head"; // 0x2f6 PushS
	LookAsyncCamera(var_83_string); // 0x2f7 Func
}


func_443(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1bb PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1bc PushE
	RotateAsync(var_84_float, var_85_float); // 0x1bd Func
	return 0; // 0x1bf Return
}


func_954(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x3ba PushV
	var_136_bool = 0; // 0x3bb PushV
	func_1073(var_136_bool); // 0x3bc NEW_2
	if(var_136_bool == 0) goto Label_967; // 0x3be JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x3bf Func
	var_137_bool = var_135_bool; // 0x3c1 Push
	if(var_137_bool == 0) goto Label_967; // 0x3c2 JumpB
	lshPlaySpeech(var_133_string); // 0x3c3 Func
	var_132_bool = 1; // 0x3c5 MovB
	return 2; // 0x3c6 Return
	
Label_967:
	var_132_bool = 0; // 0x3c7 MovB
	return 2; // 0x3c8 Return
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


func_969()
{
	var_10_bool = 0; // 0x3c9 PushV
	func_1073(var_10_bool); // 0x3ca NEW_2
	if(var_10_bool == 0) goto Label_975; // 0x3cc JumpB
	lshStopSpeech(); // 0x3cd Func
	
Label_975:
	return 0; // 0x3cf Return
}


func_843(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x34b PushV
	var_116_string = "c"; // 0x34c MovS
	var_117_int = 0; // 0x34d MovI
	
Label_846:
	var_121_int = 1; // 0x34e PushI
	if(var_121_int == 0) goto Label_859; // 0x34f JumpB
	var_122_int = 1; // 0x350 PushI
	var_123_int = var_117_int + var_122_int; // 0x351 Add
	var_124_int = var_116_string + var_123_int; // 0x352 Add
	HasProperty(var_124_int, var_118_bool); // 0x353 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x355 Not
	if(var_125_bool == 0) goto Label_856; // 0x356 JumpB
	goto Label_859; // 0x357 Jump
	
Label_859:
	var_126_bool = var_117_int == 0; // 0x35b Not
	if(var_126_bool == 0) goto Label_863; // 0x35c JumpB
	var_109_bool = 0; // 0x35d MovB
	return 10; // 0x35e Return
	
Label_863:
	var_119_int = 0; // 0x35f MovI
	var_127_int = 1; // 0x360 PushI
	var_128_bool = var_117_int > var_127_int; // 0x361 GT
	if(var_128_bool == 0) goto Label_869; // 0x362 JumpB
	irand(var_119_int, var_117_int); // 0x363 Func
	
Label_869:
	var_129_int = 1; // 0x365 PushI
	var_130_int = var_119_int + var_129_int; // 0x366 Add
	var_131_int = var_116_string + var_130_int; // 0x367 Add
	GetProperty(var_131_int, var_120_string); // 0x368 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x36a PushV
	var_133_string = var_120_string; // 0x36b Mov
	func_954(var_132_bool, var_133_string); // 0x36c NEW_2
	var_109_bool = var_132_bool; // 0x36d Mov
	return 10; // 0x36f Return
	
Label_856:
	var_138_int = 1; // 0x358 PushI
	var_117_int = var_117_int + var_138_int; // 0x359 Add2
	goto Label_846; // 0x35a Jump
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
	func_1013(var_25_int); // 0x258 NEW_2
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
	func_1006(var_52_string, var_53_int); // 0x27c NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x27e Func
	WaitForAnimEnd(var_22_bool); // 0x280 Func
	var_54_bool = var_22_bool == 0; // 0x282 Not
	if(var_54_bool == 0) goto Label_645; // 0x283 JumpB
	goto Label_656; // 0x284 Jump
}


func_976(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x3d0 PushV
	self(var_102_object); // 0x3d1 Func
	var_100_object = var_102_object; // 0x3d3 Mov
	return 2; // 0x3d4 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_140; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_1036(var_201_object); // 0x59 NEW_2
	var_208_bool = var_200_bool == 0; // 0x5b Not
	if(var_208_bool == 0) goto Label_118; // 0x5c JumpB
	var_209_object = Obj(); var_210_object = Obj(); // 0x5d PushV
	var_209_object = var_1_object; // 0x5e MovT
	var_210_object = var_0_object; // 0x5f MovT
	func_1030(); // 0x60 NEW_2
	var_213_string = ""; // 0x62 PushV
	var_213_string = "Untrust"; // 0x63 MovS
	func_170(var_194_object, var_213_string); // 0x64 NEW_2
	var_230_int = 530368; // 0x66 PushI
	SetMessage(var_230_int); // 0x67 TObjFunc
	ClearReplies(); // 0x69 TObjFunc
	var_231_int = 530370; // 0x6b PushI
	var_232_int = 32796; // 0x6c PushI
	var_233_int = 31742; // 0x6d PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x6e TObjFunc
	var_234_int = 530369; // 0x70 PushI
	var_235_int = 32796; // 0x71 PushI
	var_236_int = 31741; // 0x72 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x73 TObjFunc
	goto Label_140; // 0x75 Jump
	
Label_140:
	var_237_bool = 0; // 0x8c PushV
	func_1073(var_237_bool); // 0x8d NEW_2
	if(var_237_bool == 0) goto Label_155; // 0x8f JumpB
	
Label_144:
	lshWaitForAnimEnd(); // 0x90 Func
	var_238_string = var_3_string; // 0x92 PushT
	if(var_238_string == 0) goto Label_149; // 0x93 JumpB
	goto Label_154; // 0x94 Jump
	
Label_154:
	goto Label_169; // 0x9a Jump
	
Label_169:
	return 0; // 0xa9 Return
	
Label_149:
	var_239_string = ""; // 0x95 PushV
	var_239_string = var_2_object; // 0x96 MovT
	func_923(var_239_string); // 0x97 NEW_2
	goto Label_144; // 0x99 Jump
	
Label_155:
	var_250_string = "all"; // 0x9b PushS
	var_251_string = "idle"; // 0x9c PushS
	PlayAnimation(var_250_string, var_251_string); // 0x9d Func
	
Label_159:
	WaitForAnimEnd(); // 0x9f Func
	var_252_string = var_3_string; // 0xa1 PushT
	if(var_252_string == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_164:
	var_253_string = "all"; // 0xa4 PushS
	var_254_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_253_string, var_254_string); // 0xa6 Func
	goto Label_159; // 0xa8 Jump
	
Label_118:
	var_255_string = ""; // 0x76 PushV
	var_255_string = "Neutral"; // 0x77 MovS
	func_170(var_194_object, var_255_string); // 0x78 NEW_2
	var_256_int = 530371; // 0x7a PushI
	SetMessage(var_256_int); // 0x7b TObjFunc
	ClearReplies(); // 0x7d TObjFunc
	var_257_int = 530372; // 0x7f PushI
	var_258_int = -1; // 0x80 PushI
	var_259_int = 31744; // 0x81 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x82 TObjFunc
	var_260_int = 531447; // 0x84 PushI
	var_261_int = -1; // 0x85 PushI
	var_262_int = 32795; // 0x86 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x87 TObjFunc
	goto Label_140; // 0x89 Jump
}


func_470()
{
	var_274_float = 0; var_275_float = 0; // 0x1d6 PushV
	var_276_int = 8; // 0x1d7 PushI
	var_277_int = 16; // 0x1d8 PushI
	rand(var_275_float, var_276_int, var_277_int); // 0x1d9 Func
	var_278_int = 10; // 0x1db PushI
	SetTimer(var_278_int, var_275_float); // 0x1dc Func
	return 2; // 0x1de Return
}


func_982(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3d6 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3d7 Or
	var_68_float = sqrt(var_69_int); // 0x3d8 Sqrt2
	var_70_float = 0.0; // 0x3d9 PushF
	var_71_bool = var_68_float < var_70_float; // 0x3da LT
	if(var_71_bool == 0) goto Label_990; // 0x3db JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3dc MovV
	return 2; // 0x3dd Return
	
Label_990:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3de Div2
	return 2; // 0x3df Return
}


func_479()
{
	var_273_int = 10; // 0x1df PushI
	KillTimer(var_273_int); // 0x1e0 Func
	return 0; // 0x1e2 Return
}


func_992(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x3e0 PushV
	GetVariable(var_203_string, var_205_int); // 0x3e1 Func
	var_202_int = var_205_int; // 0x3e3 Mov
	return 2; // 0x3e4 Return
}


func_997(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x3e5 PushV
	GetGameTime(var_155_float); // 0x3e6 Func
	var_156_int = 1; // 0x3e8 PushI
	var_157_int = 0; // 0x3e9 PushV
	var_158_int = 24; // 0x3ea PushI
	var_157_int = var_155_float / var_155_float; // 0x3eb Div2
	var_153_int = var_156_int + var_157_int; // 0x3ec Add2
	return 2; // 0x3ed Return
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


func_1006(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x3ee PushV
	var_34_string = "idle"; // 0x3ef MovS
	var_35_int = var_32_int; // 0x3f0 Push
	if(var_35_int == 0) goto Label_1011; // 0x3f1 JumpB
	var_34_string = var_34_string + var_32_int; // 0x3f2 Add2
	
Label_1011:
	var_31_string = var_34_string; // 0x3f3 Mov
	return 2; // 0x3f4 Return
}


func_880(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x370 PushV
	var_152_string = "d"; // 0x371 PushS
	var_153_int = 0; // 0x372 PushV
	func_997(var_153_int); // 0x373 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x375 Add
	var_160_string = "m"; // 0x376 PushS
	var_147_string = var_159_int + var_160_string; // 0x377 Add2
	var_148_int = 0; // 0x378 MovI
	
Label_889:
	var_161_int = 1; // 0x379 PushI
	if(var_161_int == 0) goto Label_902; // 0x37a JumpB
	var_162_int = 1; // 0x37b PushI
	var_163_int = var_148_int + var_162_int; // 0x37c Add
	var_164_int = var_147_string + var_163_int; // 0x37d Add
	HasProperty(var_164_int, var_149_bool); // 0x37e ObjFunc
	var_165_bool = var_149_bool == 0; // 0x380 Not
	if(var_165_bool == 0) goto Label_899; // 0x381 JumpB
	goto Label_902; // 0x382 Jump
	
Label_902:
	var_166_bool = var_148_int == 0; // 0x386 Not
	if(var_166_bool == 0) goto Label_906; // 0x387 JumpB
	var_140_bool = 0; // 0x388 MovB
	return 10; // 0x389 Return
	
Label_906:
	var_150_int = 0; // 0x38a MovI
	var_167_int = 1; // 0x38b PushI
	var_168_bool = var_148_int > var_167_int; // 0x38c GT
	if(var_168_bool == 0) goto Label_912; // 0x38d JumpB
	irand(var_150_int, var_148_int); // 0x38e Func
	
Label_912:
	var_169_int = 1; // 0x390 PushI
	var_170_int = var_150_int + var_169_int; // 0x391 Add
	var_171_int = var_147_string + var_170_int; // 0x392 Add
	GetProperty(var_171_int, var_151_string); // 0x393 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x395 PushV
	var_173_string = var_151_string; // 0x396 Mov
	func_954(var_172_bool, var_173_string); // 0x397 NEW_2
	var_140_bool = var_172_bool; // 0x398 Mov
	return 10; // 0x39a Return
	
Label_899:
	var_174_int = 1; // 0x383 PushI
	var_148_int = var_148_int + var_174_int; // 0x384 Add2
	goto Label_889; // 0x385 Jump
}


func_1013(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x3f5 PushV
	var_28_int = 0; // 0x3f6 MovI
	
Label_1015:
	var_30_string = "all"; // 0x3f7 PushS
	var_31_string = ""; var_32_int = 0; // 0x3f8 PushV
	var_32_int = var_28_int; // 0x3f9 Mov
	func_1006(var_31_string, var_32_int); // 0x3fa NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x3fc Func
	var_36_bool = var_29_bool == 0; // 0x3fe Not
	if(var_36_bool == 0) goto Label_1025; // 0x3ff JumpB
	goto Label_1028; // 0x400 Jump
	
Label_1028:
	var_25_int = var_28_int; // 0x404 Mov
	return 4; // 0x405 Return
	
Label_1025:
	var_37_int = 1; // 0x401 PushI
	var_28_int = var_28_int + var_37_int; // 0x402 Add2
	goto Label_1015; // 0x403 Jump
}


func_767()
{
	var_265_bool = 0; var_266_bool = 0; // 0x2ff PushV
	var_267_bool = 1; // 0x300 PushB
	CameraSwitchToNormal(var_267_bool); // 0x301 Func
	var_268_bool = 0; // 0x303 PushV
	func_1073(var_268_bool); // 0x304 NEW_2
	if(var_268_bool == 0) goto Label_776; // 0x306 JumpB
	goto Label_784; // 0x307 Jump
	
Label_784:
	return 2; // 0x310 Return
	
Label_776:
	var_269_string = "head"; // 0x308 PushS
	HasAnimationTrack(var_266_bool, var_269_string); // 0x309 Func
	var_270_bool = var_266_bool; // 0x30b Push
	if(var_270_bool == 0) goto Label_784; // 0x30c JumpB
	var_271_string = "head"; // 0x30d PushS
	UnlookAsync(var_271_string); // 0x30e Func
}


