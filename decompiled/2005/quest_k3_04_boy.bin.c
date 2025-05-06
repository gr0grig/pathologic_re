task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 1; // 0x9b PushI
	if(var_12_int == 0) goto Label_236; // 0x9c JumpB
	func_1135(); // 0x9e NEW_2
	var_14_int = 26991; // 0xa0 PushI
	var_15_bool = var_11_bool == var_14_int; // 0xa1 Eq
	if(var_15_bool == 0) goto Label_178; // 0xa2 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa3 PushV
	var_16_object = var_1_object; // 0xa4 MovT
	var_17_object = var_0_object; // 0xa5 MovT
	func_1299(var_17_object); // 0xa6 NEW_2
	var_40_object = Obj(); var_41_object = Obj(); // 0xa8 PushV
	var_40_object = var_1_object; // 0xa9 MovT
	var_41_object = var_0_object; // 0xaa MovT
	func_1293(); // 0xab NEW_2
	var_44_object = Obj(); var_45_object = Obj(); // 0xad PushV
	var_44_object = var_1_object; // 0xae MovT
	var_45_object = var_0_object; // 0xaf MovT
	func_1287(); // 0xb0 NEW_2
	
Label_178:
	var_48_int = 26988; // 0xb2 PushI
	var_49_bool = var_10_cvector == var_48_int; // 0xb3 Eq
	if(var_49_bool == 0) goto Label_201; // 0xb4 JumpB
	var_50_string = ""; // 0xb5 PushV
	var_50_string = "Neutral"; // 0xb6 MovS
	func_132(var_11_bool, var_50_string); // 0xb7 NEW_2
	var_67_int = 525646; // 0xb9 PushI
	SetMessage(var_67_int); // 0xba TObjFunc
	ClearReplies(); // 0xbc TObjFunc
	var_68_int = 525647; // 0xbe PushI
	var_69_int = 26990; // 0xbf PushI
	var_70_int = 26989; // 0xc0 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xc1 TObjFunc
	var_71_int = 539057; // 0xc3 PushI
	var_72_int = 26990; // 0xc4 PushI
	var_73_int = 41004; // 0xc5 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_74_int = 26990; // 0xc9 PushI
	var_75_bool = var_10_cvector == var_74_int; // 0xca Eq
	if(var_75_bool == 0) goto Label_224; // 0xcb JumpB
	var_76_string = ""; // 0xcc PushV
	var_76_string = "Neutral"; // 0xcd MovS
	func_132(var_11_bool, var_76_string); // 0xce NEW_2
	var_77_int = 525648; // 0xd0 PushI
	SetMessage(var_77_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_78_int = 525649; // 0xd5 PushI
	var_79_int = -1; // 0xd6 PushI
	var_80_int = 26991; // 0xd7 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xd8 TObjFunc
	var_81_int = 539058; // 0xda PushI
	var_82_int = -1; // 0xdb PushI
	var_83_int = 41005; // 0xdc PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_3_string = 1; // 0xe0 TMovB
	var_84_bool = 0; // 0xe1 PushV
	func_1335(var_84_bool); // 0xe2 NEW_2
	if(var_84_bool == 0) goto Label_232; // 0xe4 JumpB
	lshStopAnimation(); // 0xe5 Func
	goto Label_234; // 0xe7 Jump
	
Label_234:
	return 0; // 0xea Return
	
Label_232:
	StopAnimation(); // 0xe8 Func
	
Label_236:
	return 0; // 0xec Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_object = Obj(); // 0xf2 PushV
	var_12_object = var_10_bool; // 0xf3 Mov
	TaskCall(0); // 0xf4 TaskCall
	func_0(var_13_object, var_11_int, var_12_object); // 0xf5 NEW_2
	TaskReturn(); // 0xf6 TaskReturn
	func_1337(); // 0xf9 NEW_2
	TaskCall(3); // 0xfc TaskCall
	func_257(); // 0xfd NEW_2
	TaskReturn(); // 0xfe TaskReturn
	return 0; // 0x100 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x110 PushV
	var_12_object = var_10_bool; // 0x111 Mov
	func_1395(var_11_bool, var_12_object); // 0x112 NEW_2
	if(var_11_bool == 0) goto Label_284; // 0x114 JumpB
	func_356(var_9_cvector, var_10_bool); // 0x116 NEW_2
	var_47_object = Obj(); // 0x118 PushV
	var_47_object = var_10_bool; // 0x119 Mov
	func_1402(var_47_object); // 0x11a NEW_2
	
Label_284:
	return 0; // 0x11c Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	RequestClearPath(var_10_bool); // 0x15e Func
	return 0; // 0x160 Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	Stop(); // 0x161 Func
	return 0; // 0x163 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	func_356(var_9_cvector, var_10_bool); // 0x16d NEW_2
	var_11_object = Obj(); // 0x16f PushV
	var_11_object = var_10_bool; // 0x170 Mov
	func_1389(); // 0x171 NEW_2
	return 0; // 0x173 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x17d PushV
	var_12_object = var_10_bool; // 0x17e Mov
	func_1395(var_11_bool, var_12_object); // 0x17f NEW_2
	if(var_11_bool == 0) goto Label_393; // 0x181 JumpB
	func_475(); // 0x183 NEW_2
	var_47_object = Obj(); // 0x185 PushV
	var_47_object = var_10_bool; // 0x186 Mov
	func_1402(var_47_object); // 0x187 NEW_2
	
Label_393:
	return 0; // 0x189 Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int)
{
	var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; // 0x247 PushV
	var_19_int = 120; // 0x248 PushI
	var_20_bool = var_10_int != var_19_int; // 0x249 Neq
	if(var_20_bool == 0) goto Label_588; // 0x24a JumpB
	return 8; // 0x24b Return
	
Label_588:
	var_21_bool = var_0_object == 0; // 0x24c NullEq
	if(var_21_bool == 0) goto Label_597; // 0x24d JumpB
	Stop(); // 0x24e Func
	var_22_int = 1; // 0x250 PushI
	KillTimer(var_22_int); // 0x251 Func
	var_2_object = 1; // 0x253 TMovB
	goto Label_634; // 0x254 Jump
	
Label_634:
	return 8; // 0x27a Return
	
Label_597:
	GetDirection(var_15_cvector); // 0x255 Func
	var_23_float = 7000.0; // 0x257 PushF
	FindDirLength(var_16_float, var_15_cvector, var_23_float); // 0x258 Func
	var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x25a PushV
	var_25_float = 1.74533; // 0x25b MovF
	func_480(var_24_cvector, var_25_float); // 0x25c NEW_2
	var_17_cvector = var_24_cvector; // 0x25d Mov
	var_18_float = var_17_cvector | var_17_cvector; // 0x25f Or2
	var_54_bool = 0; // 0x260 PushV
	var_54_bool = 0; // 0x261 MovB
	var_55_float = 2500.0; // 0x262 PushF
	var_56_bool = var_18_float >= var_55_float; // 0x263 GE
	if(var_56_bool == 0) goto Label_627; // 0x264 JumpB
	var_57_bool = 0; // 0x265 PushV
	var_57_bool = 1; // 0x266 MovB
	var_58_float = var_16_float * var_16_float; // 0x267 Mult
	var_59_float = 2.25; // 0x268 PushF
	var_60_float = var_58_float * var_59_float; // 0x269 Mult
	var_61_bool = var_18_float >= var_60_float; // 0x26a GE
	if(var_61_bool == 0) goto Label_625; // 0x26b JumpB
	var_62_bool = 0; // 0x26c PushV
	func_651(var_57_bool, var_62_bool); // 0x26d NEW_2
	if(var_62_bool == 0) goto Label_625; // 0x26f JumpB
	var_57_bool = 0; // 0x270 MovB
	
Label_625:
	if(var_57_bool == 0) goto Label_627; // 0x271 JumpB
	var_54_bool = 1; // 0x272 MovB
	
Label_627:
	if(var_54_bool == 0) goto Label_634; // 0x273 JumpB
	Stop(); // 0x274 Func
	var_82_cvector = CVector(0,0,0); // 0x276 PushV
	func_799(var_82_cvector); // 0x277 NEW_2
	var_1_object = var_82_cvector + var_17_cvector; // 0x279 Add2
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	func_635(var_10_object); // 0x284 NEW_2
	var_12_object = Obj(); // 0x286 PushV
	var_12_object = var_10_object; // 0x287 Mov
	func_1389(); // 0x288 NEW_2
	return 0; // 0x28a Return
}


task_6_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x31a Return
}


task_6_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	return 0; // 0x31c Return
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	return 0; // 0x31e Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x54f PushV
	var_14_object = var_10_object; // 0x550 Mov
	var_15_int = var_11_int; // 0x551 Mov
	var_16_float = var_12_float; // 0x552 Mov
	func_932(var_14_object, var_15_int, var_16_float); // 0x553 NEW_2
	return 0; // 0x555 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x557 PushV
	var_16_object = var_10_object; // 0x558 Mov
	var_17_int = var_11_int; // 0x559 Mov
	var_18_float = var_12_float; // 0x55a Mov
	var_19_cvector = var_14_cvector; // 0x55b Mov
	var_20_cvector = var_15_cvector; // 0x55c Mov
	func_1000(var_18_float, var_19_cvector, var_20_cvector); // 0x55d NEW_2
	return 0; // 0x55f Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x560 PushV
	var_14_string = "health"; // 0x561 PushS
	var_15_bool = var_11_string == var_14_string; // 0x562 Eq
	if(var_15_bool == 0) goto Label_1388; // 0x563 JumpB
	var_16_string = "health"; // 0x564 PushS
	GetProperty(var_16_string, var_13_float); // 0x565 Func
	var_17_int = 0; // 0x567 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x568 LE
	if(var_18_bool == 0) goto Label_1388; // 0x569 JumpB
	SignalDeath(var_10_object); // 0x56a Func
	
Label_1388:
	return 2; // 0x56c Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x56e PushV
	var_11_object = var_10_object; // 0x56f Mov
	func_1347(var_11_object); // 0x570 NEW_2
	return 0; // 0x572 Return
}


event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x582 PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x583 Func
	var_13_bool = var_12_bool; // 0x585 Push
	if(var_13_bool == 0) goto Label_1420; // 0x586 JumpB
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x587 PushV
	var_15_string = "quest_k3_04"; // 0x588 MovS
	var_16_string = "boy_attacked"; // 0x589 MovS
	func_1251(var_14_bool, var_15_string, var_16_string); // 0x58a NEW_2
	
Label_1420:
	return 2; // 0x58c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	
Label_237:
	Hold(); // 0xed Func
	goto Label_237; // 0xef Jump
}


func_0(var_0_object, var_11_int, var_12_object)
{
	var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0; // 0x0 PushV
	var_0_object = var_12_object; // 0x1 TMov
	var_22_bool = 0; var_23_object = Obj(); var_24_float = 0; // 0x2 PushV
	var_23_object = var_12_object; // 0x3 Mov
	var_24_float = 70.0; // 0x4 MovF
	func_1019(var_23_object, var_24_float); // 0x5 NEW_2
	var_68_bool = var_22_bool == 0; // 0x7 Not
	if(var_68_bool == 0) goto Label_11; // 0x8 JumpB
	var_11_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_18_object); // 0xb Func
	var_69_int = 0; // 0xd PushV
	func_1329(var_69_int); // 0xe NEW_2
	SetNPCName(var_69_int); // 0x10 ObjFunc
	var_70_int = 0; // 0x12 PushV
	func_1327(var_70_int); // 0x13 NEW_2
	SetNPCDescription(var_70_int); // 0x15 ObjFunc
	var_71_string = ""; // 0x17 PushV
	func_1331(var_71_string); // 0x18 NEW_2
	SetPhoto(var_71_string); // 0x1a ObjFunc
	var_72_string = ""; // 0x1c PushV
	func_1333(var_72_string); // 0x1d NEW_2
	SetPhoto2(var_72_string); // 0x1f ObjFunc
	var_73_int = 0; // 0x21 PushV
	func_1310(var_73_int); // 0x22 NEW_2
	SetPlayerName(var_73_int); // 0x24 ObjFunc
	var_20_int = -1; // 0x26 MovI
	IsOverrideActive(var_19_bool); // 0x27 Func
	var_81_bool = var_19_bool; // 0x29 Push
	if(var_81_bool == 0) goto Label_45; // 0x2a JumpB
	var_11_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_18_object); // 0x2d Func
	var_82_object = Obj(); var_83_object = Obj(); // 0x2f PushV
	var_82_object = var_12_object; // 0x30 Mov
	var_83_object = var_18_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_84_object, var_85_object, var_86_string, var_87_bool, var_82_object, var_83_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_21_bool); // 0x36 ObjFunc
	
Label_56:
	var_131_bool = var_21_bool == 0; // 0x38 Not
	if(var_131_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_21_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_132_object = Obj(); // 0x3f PushV
	var_132_object = var_12_object; // 0x40 Mov
	func_1087(); // 0x41 NEW_2
	StopDialog(var_18_object); // 0x43 Func
	GetReturnValue(var_20_int); // 0x45 ObjFunc
	var_11_int = var_20_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_257()
{
	var_146_bool = 0; var_147_string = ""; var_148_string = ""; // 0x101 PushV
	var_147_string = "quest_d3_03"; // 0x102 MovS
	var_148_string = "boy_free"; // 0x103 MovS
	func_1251(var_146_bool, var_147_string, var_148_string); // 0x104 NEW_2
	var_152_string = "noaccess"; // 0x106 PushS
	var_153_int = 0; // 0x107 PushI
	SetProperty(var_152_string, var_153_int); // 0x108 Func
	
Label_266:
	func_285(var_144_bool, var_145_bool); // 0x10b NEW_2
	goto Label_266; // 0x10d Jump
}


func_132(var_2_object, var_89_string)
{
	var_90_bool = 0; // 0x85 PushV
	func_1335(var_90_bool); // 0x86 NEW_2
	var_91_bool = var_90_bool == 0; // 0x88 Not
	if(var_91_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_92_bool = var_89_string == var_2_object; // 0x8b Eq
	if(var_92_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_93_string = ""; var_94_bool = 0; // 0x8e PushV
	var_93_string = var_89_string; // 0x8f Mov
	var_95_string = ""; // 0x90 PushS
	var_96_bool = var_89_string == var_95_string; // 0x91 Eq
	if(var_96_bool == 0) goto Label_149; // 0x92 JumpB
	var_94_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1120(var_93_string, var_94_bool); // 0x96 NEW_2
	var_2_object = var_89_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_94_bool = 1; // 0x95 MovB
}


func_1287()
{
	var_46_string = "playsound"; // 0x508 PushS
	var_47_string = "giveitem"; // 0x509 PushS
	TriggerWorld(var_46_string, var_47_string); // 0x50a Func
	return 0; // 0x50c Return
}


func_394()
{
	var_181_int = 0; var_182_int = 0; var_183_int = 0; var_184_int = 0; var_185_bool = 0; var_186_float = 0; var_187_bool = 0; var_188_int = 0; var_189_int = 0; var_190_int = 0; var_191_int = 0; var_192_bool = 0; var_193_float = 0; var_194_bool = 0; // 0x18a PushV
	WaitForAnimEnd(); // 0x18b Func
	var_195_bool = 0; // 0x18d PushV
	func_1014(var_195_bool); // 0x18e NEW_2
	var_198_bool = var_195_bool == 0; // 0x190 Not
	if(var_198_bool == 0) goto Label_403; // 0x191 JumpB
	return 14; // 0x192 Return
	
Label_403:
	var_199_int = 0; // 0x193 PushV
	func_1270(var_199_int); // 0x194 NEW_2
	var_188_int = var_199_int; // 0x195 Mov
	var_189_int = 0; // 0x197 MovI
	
Label_408:
	var_212_bool = 0; // 0x198 PushV
	var_212_bool = 0; // 0x199 MovB
	var_213_int = 5; // 0x19a PushI
	var_214_bool = var_189_int < var_213_int; // 0x19b LT
	if(var_214_bool == 0) goto Label_418; // 0x19c JumpB
	var_215_bool = 0; // 0x19d PushV
	func_1014(var_215_bool); // 0x19e NEW_2
	if(var_215_bool == 0) goto Label_418; // 0x1a0 JumpB
	var_212_bool = 1; // 0x1a1 MovB
	
Label_418:
	if(var_212_bool == 0) goto Label_470; // 0x1a2 JumpB
	var_216_int = 3; // 0x1a3 PushI
	irand(var_190_int, var_216_int); // 0x1a4 Func
	var_217_int = 0; // 0x1a6 PushI
	var_218_bool = var_190_int == var_217_int; // 0x1a7 Eq
	if(var_218_bool == 0) goto Label_442; // 0x1a8 JumpB
	var_219_int = var_188_int; // 0x1a9 Push
	if(var_219_int == 0) goto Label_441; // 0x1aa JumpB
	irand(var_191_int, var_188_int); // 0x1ab Func
	var_220_string = "all"; // 0x1ad PushS
	var_221_string = ""; var_222_int = 0; // 0x1ae PushV
	var_222_int = var_191_int; // 0x1af Mov
	func_1263(var_221_string, var_222_int); // 0x1b0 NEW_2
	PlayAnimation(var_220_string, var_221_string); // 0x1b2 Func
	WaitForAnimEnd(var_192_bool); // 0x1b4 Func
	var_223_bool = var_192_bool == 0; // 0x1b6 Not
	if(var_223_bool == 0) goto Label_441; // 0x1b7 JumpB
	goto Label_470; // 0x1b8 Jump
	
Label_470:
	ResetAAS(); // 0x1d6 Func
	return 14; // 0x1d8 Return
	
Label_441:
	goto Label_459; // 0x1b9 Jump
	
Label_459:
	var_224_bool = 0; // 0x1cb PushV
	func_473(var_224_bool); // 0x1cc NEW_2
	var_225_bool = var_224_bool == 0; // 0x1ce Not
	if(var_225_bool == 0) goto Label_465; // 0x1cf JumpB
	goto Label_470; // 0x1d0 Jump
	
Label_465:
	ResetAAS(); // 0x1d1 Func
	var_226_int = 1; // 0x1d3 PushI
	var_189_int = var_189_int + var_226_int; // 0x1d4 Add2
	goto Label_408; // 0x1d5 Jump
	
Label_442:
	var_227_int = 1; // 0x1ba PushI
	var_228_bool = var_190_int == var_227_int; // 0x1bb Eq
	if(var_228_bool == 0) goto Label_456; // 0x1bc JumpB
	var_229_int = 4; // 0x1bd PushI
	rand(var_193_float, var_229_int); // 0x1be Func
	var_230_int = 1; // 0x1c0 PushI
	var_231_int = var_193_float + var_230_int; // 0x1c1 Add
	Sleep(var_231_int, var_194_bool); // 0x1c2 Func
	var_232_bool = var_194_bool == 0; // 0x1c4 Not
	if(var_232_bool == 0) goto Label_455; // 0x1c5 JumpB
	goto Label_470; // 0x1c6 Jump
	
Label_455:
	goto Label_459; // 0x1c7 Jump
	
Label_456:
	var_233_int = var_189_int; // 0x1c8 Push
	if(var_233_int == 0) goto Label_459; // 0x1c9 JumpB
	goto Label_470; // 0x1ca Jump
}


func_651(var_0_object, var_62_bool)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x28b PushV
	GetDirection(var_65_cvector); // 0x28c Func
	var_67_cvector = CVector(0,0,0); var_68_object = Obj(); // 0x28e PushV
	var_68_object = var_0_object; // 0x28f MovT
	func_804(var_68_object); // 0x290 NEW_2
	var_66_cvector = var_67_cvector; // 0x291 Mov
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0x293 PushV
	var_74_cvector = var_65_cvector; // 0x294 Mov
	var_75_cvector = var_66_cvector; // 0x295 Mov
	func_1199(var_73_float, var_74_cvector, var_75_cvector); // 0x296 NEW_2
	var_81_float = -0.34202; // 0x298 PushF
	var_62_bool = var_73_float >= var_81_float; // 0x299 GE2
	return 4; // 0x29a Return
}


func_1293()
{
	var_42_string = "k3q04LopuhTalk"; // 0x50e PushS
	var_43_int = 1; // 0x50f PushI
	SetVariable(var_42_string, var_43_int); // 0x510 Func
	return 0; // 0x512 Return
}


func_1299(var_16_object)
{
	var_18_string = "powder is given"; // 0x514 PushS
	Trace(var_18_string); // 0x515 Func
	var_19_object = Obj(); var_20_string = ""; var_21_int = 0; // 0x517 PushV
	var_19_object = var_16_object; // 0x518 Mov
	var_20_string = "powder"; // 0x519 MovS
	var_21_int = 1; // 0x51a MovI
	func_1238(var_19_object, var_20_string, var_21_int); // 0x51b NEW_2
	return 0; // 0x51d Return
}


func_667(var_17_object)
{
	var_18_object = Obj(); // 0x29c PushV
	var_18_object = var_17_object; // 0x29d Mov
	func_676(var_18_object); // 0x29e NEW_2
	
Label_672:
	Hold(); // 0x2a0 Func
	goto Label_672; // 0x2a2 Jump
}


func_285(var_0_object, var_1_object)
{
	var_154_float = 0; var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); var_157_bool = 0; var_158_object = Obj(); var_159_bool = 0; var_160_float = 0; var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_bool = 0; var_164_object = Obj(); var_165_bool = 0; // 0x11d PushV
	var_0_object = 0; // 0x11e TMovB
	var_1_object = 0; // 0x11f TMovB
	var_166_float = 0.5; // 0x120 PushF
	rand(var_160_float, var_166_float); // 0x121 Func
	Sleep(var_160_float); // 0x123 Func
	
Label_293:
	var_167_bool = var_0_object == 0; // 0x125 Not
	if(var_167_bool == 0) goto Label_343; // 0x126 JumpB
	var_168_bool = var_1_object == 0; // 0x127 Not
	if(var_168_bool == 0) goto Label_312; // 0x128 JumpB
	
Label_297:
	GetPosition(var_162_cvector); // 0x129 Func
	var_169_float = 0; // 0x12b PushV
	func_344(var_169_float); // 0x12c NEW_2
	GetRandomPFPointInCircle(var_161_cvector, var_162_cvector, var_169_float, var_163_bool); // 0x12e Func
	var_172_bool = var_163_bool; // 0x130 Push
	if(var_172_bool == 0) goto Label_307; // 0x131 JumpB
	goto Label_311; // 0x132 Jump
	
Label_311:
	goto Label_313; // 0x137 Jump
	
Label_313:
	var_173_object = Obj(); var_174_cvector = CVector(0,0,0); // 0x139 PushV
	var_174_cvector = var_161_cvector; // 0x13a Mov
	func_374(var_173_object, var_174_cvector); // 0x13b NEW_2
	var_164_object = var_173_object; // 0x13c Mov
	var_177_bool = var_164_object != 0; // 0x13e NullNeq
	if(var_177_bool == 0) goto Label_338; // 0x13f JumpB
	RotatePath(var_164_object, var_165_bool); // 0x140 Func
	var_178_bool = var_165_bool; // 0x142 Push
	if(var_178_bool == 0) goto Label_337; // 0x143 JumpB
	var_179_bool = 0; // 0x144 PushV
	func_372(var_179_bool); // 0x145 NEW_2
	FollowPath(var_164_object, var_179_bool, var_165_bool); // 0x147 Func
	var_164_object = 0; // 0x149 SetNull
	var_180_bool = var_165_bool; // 0x14a Push
	if(var_180_bool == 0) goto Label_337; // 0x14b JumpB
	TaskCall(4); // 0x14d TaskCall
	func_394(); // 0x14e NEW_2
	TaskReturn(); // 0x14f TaskReturn
	
Label_337:
	goto Label_341; // 0x151 Jump
	
Label_341:
	var_164_object = 0; // 0x155 SetNull
	goto Label_293; // 0x156 Jump
	
Label_338:
	var_234_int = 1; // 0x152 PushI
	Sleep(var_234_int); // 0x153 Func
	
Label_307:
	var_235_int = 1; // 0x133 PushI
	Sleep(var_235_int); // 0x134 Func
	goto Label_297; // 0x136 Jump
	
Label_312:
	var_1_object = 0; // 0x138 TMovB
	
Label_343:
	return 12; // 0x157 Return
}


func_1310(var_73_int)
{
	var_74_int = 0; var_75_int = 0; // 0x51e PushV
	var_76_string = "branch"; // 0x51f PushS
	GetVariable(var_76_string, var_75_int); // 0x520 Func
	var_77_int = 0; // 0x522 PushI
	var_78_bool = var_75_int == var_77_int; // 0x523 Eq
	if(var_78_bool == 0) goto Label_1320; // 0x524 JumpB
	var_73_int = 1; // 0x525 MovI
	return 2; // 0x526 Return
	
Label_1320:
	var_79_int = 1; // 0x528 PushI
	var_80_bool = var_75_int == var_79_int; // 0x529 Eq
	if(var_80_bool == 0) goto Label_1325; // 0x52a JumpB
	var_73_int = 2; // 0x52b MovI
	return 2; // 0x52c Return
	
Label_1325:
	var_73_int = 3; // 0x52d MovI
	return 2; // 0x52e Return
}


func_799(var_82_cvector)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x31f PushV
	GetPosition(var_84_cvector); // 0x320 Func
	var_82_cvector = var_84_cvector; // 0x322 Mov
	return 2; // 0x323 Return
}


func_1183(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x49f PushV
	self(var_16_object); // 0x4a0 Func
	var_14_object = var_16_object; // 0x4a2 Mov
	return 2; // 0x4a3 Return
}


func_804(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x324 PushV
	GetPosition(var_48_cvector); // 0x325 Func
	GetPosition(var_49_cvector); // 0x327 ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x329 Sub2
	return 4; // 0x32a Return
}


func_1189(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x4a5 PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x4a6 Or
	var_51_float = sqrt(var_52_int); // 0x4a7 Sqrt2
	var_53_float = 0.0; // 0x4a8 PushF
	var_54_bool = var_51_float < var_53_float; // 0x4a9 LT
	if(var_54_bool == 0) goto Label_1197; // 0x4aa JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x4ab MovV
	return 2; // 0x4ac Return
	
Label_1197:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x4ad Div2
	return 2; // 0x4ae Return
}


func_676(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); // 0x2a4 PushV
	var_39_bool = var_18_object == 0; // 0x2a5 NullEq
	if(var_39_bool == 0) goto Label_684; // 0x2a6 JumpB
	var_40_string = ""; // 0x2a7 PushV
	var_40_string = "fdie"; // 0x2a8 MovS
	func_767(var_40_string); // 0x2a9 NEW_2
	goto Label_766; // 0x2ab Jump
	
Label_766:
	return 20; // 0x2fe Return
	
Label_684:
	GetPosition(var_29_cvector); // 0x2ac ObjFunc
	GetPosition(var_30_cvector); // 0x2ae Func
	GetDirection(var_31_cvector); // 0x2b0 Func
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x2b2 Sub2
	var_72_float = GetByIndex(var_32_cvector, 0); // 0x2b3 PushE
	var_73_float = GetByIndex(var_31_cvector, 0); // 0x2b4 PushE
	var_74_float = var_72_float * var_73_float; // 0x2b5 Mult
	var_75_float = GetByIndex(var_32_cvector, 2); // 0x2b6 PushE
	var_76_float = GetByIndex(var_31_cvector, 2); // 0x2b7 PushE
	var_77_float = var_75_float * var_76_float; // 0x2b8 Mult
	var_78_int = var_74_float + var_77_float; // 0x2b9 Add
	var_79_int = 0; // 0x2ba PushI
	var_80_bool = var_78_int >= var_79_int; // 0x2bb GE
	if(var_80_bool == 0) goto Label_703; // 0x2bc JumpB
	var_33_string = "fdie"; // 0x2bd MovS
	goto Label_704; // 0x2be Jump
	
Label_704:
	RemoveRTEnvelope(); // 0x2c0 Func
	SetDeathState(); // 0x2c2 Func
	Stop(); // 0x2c4 Func
	StopAsync(); // 0x2c6 Func
	var_34_object = var_18_object; // 0x2c8 Mov
	var_81_string = "GetScriptProperty"; // 0x2c9 PushS
	var_82_int = 2; // 0x2ca PushI
	var_83_bool = IsFuncExist(var_18_object, var_81_string, var_82_int); // 0x2cb FuncExist
	if(var_83_bool == 0) goto Label_728; // 0x2cc JumpB
	var_84_string = "Owner"; // 0x2cd PushS
	HasScriptProperty(var_35_bool, var_84_string); // 0x2ce ObjFunc
	var_85_bool = var_35_bool; // 0x2d0 Push
	if(var_85_bool == 0) goto Label_728; // 0x2d1 JumpB
	var_86_string = "Owner"; // 0x2d2 PushS
	GetScriptProperty(var_34_object, var_86_string); // 0x2d3 ObjFunc
	var_87_bool = var_34_object == 0; // 0x2d5 NullEq
	if(var_87_bool == 0) goto Label_728; // 0x2d6 JumpB
	var_34_object = var_18_object; // 0x2d7 Mov
	
Label_728:
	var_88_string = "@GetEyesHeight"; // 0x2d8 PushS
	var_89_int = 1; // 0x2d9 PushI
	var_90_bool = IsFuncExist(var_34_object, var_88_string, var_89_int); // 0x2da FuncExist
	if(var_90_bool == 0) goto Label_743; // 0x2db JumpB
	GetEyesHeight(var_37_float); // 0x2dc ObjFunc
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x2de MovV
	var_91_float = GetByIndex(var_38_cvector, 1); // 0x2df PushE
	var_91_float = var_37_float; // 0x2e0 Mov
	SetByIndex(var_38_cvector, 1) = var_91_float; // 0x2e1 PopE
	var_92_string = "head"; // 0x2e2 PushS
	LookAsync(var_18_object, var_92_string, var_38_cvector); // 0x2e3 Func
	var_36_bool = 1; // 0x2e5 MovB
	goto Label_744; // 0x2e6 Jump
	
Label_744:
	var_93_string = ""; // 0x2e8 PushV
	var_93_string = var_33_string; // 0x2e9 Mov
	func_1142(var_93_string); // 0x2ea NEW_2
	var_94_string = "all"; // 0x2ec PushS
	PlayAnimation(var_94_string, var_33_string); // 0x2ed Func
	WaitForAnimEnd(); // 0x2ef Func
	var_95_bool = var_36_bool; // 0x2f1 Push
	if(var_95_bool == 0) goto Label_760; // 0x2f2 JumpB
	StopAsync(); // 0x2f3 Func
	var_96_string = "head"; // 0x2f5 PushS
	UnlookAsync(var_96_string); // 0x2f6 Func
	
Label_760:
	var_97_string = "all"; // 0x2f8 PushS
	LockAnimationEnd(var_97_string, var_33_string); // 0x2f9 Func
	RemoveEnvelope(); // 0x2fb Func
	var_34_object = 0; // 0x2fd SetNull
	
Label_743:
	var_36_bool = 0; // 0x2e7 MovB
	
Label_703:
	var_33_string = "bdie"; // 0x2bf MovS
}


func_932(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x3a4 PushV
	var_35_bool = 0; // 0x3a5 PushV
	var_35_bool = 0; // 0x3a6 MovB
	var_36_bool = 0; // 0x3a7 PushV
	var_36_bool = 0; // 0x3a8 MovB
	var_37_object = var_14_object; // 0x3a9 Push
	if(var_37_object == 0) goto Label_943; // 0x3aa JumpB
	var_38_int = 4; // 0x3ab PushI
	var_39_bool = var_15_int != var_38_int; // 0x3ac Neq
	if(var_39_bool == 0) goto Label_943; // 0x3ad JumpB
	var_36_bool = 1; // 0x3ae MovB
	
Label_943:
	if(var_36_bool == 0) goto Label_948; // 0x3af JumpB
	var_40_int = 5; // 0x3b0 PushI
	var_41_bool = var_15_int != var_40_int; // 0x3b1 Neq
	if(var_41_bool == 0) goto Label_948; // 0x3b2 JumpB
	var_35_bool = 1; // 0x3b3 MovB
	
Label_948:
	if(var_35_bool == 0) goto Label_995; // 0x3b4 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x3b5 PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x3b6 PushV
	var_45_object = var_14_object; // 0x3b7 Mov
	func_804(var_45_object); // 0x3b8 NEW_2
	var_43_cvector = var_44_cvector; // 0x3b9 Mov
	func_1189(var_42_cvector, var_43_cvector); // 0x3bb NEW_2
	var_26_cvector = var_42_cvector; // 0x3bc Mov
	CreateVectorVector(var_27_object); // 0x3be Func
	var_28_int = 1; // 0x3c0 MovI
	
Label_961:
	var_55_string = "hit"; // 0x3c1 PushS
	var_56_int = var_55_string + var_28_int; // 0x3c2 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x3c3 Func
	var_57_bool = var_29_bool == 0; // 0x3c5 Not
	if(var_57_bool == 0) goto Label_968; // 0x3c6 JumpB
	goto Label_977; // 0x3c7 Jump
	
Label_977:
	size(var_32_int); // 0x3d1 ObjFunc
	var_58_int = var_32_int; // 0x3d3 Push
	if(var_58_int == 0) goto Label_994; // 0x3d4 JumpB
	irand(var_33_int, var_32_int); // 0x3d5 Func
	get(var_34_cvector, var_33_int); // 0x3d7 ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x3d9 PushV
	var_59_object = var_14_object; // 0x3da Mov
	var_60_int = var_15_int; // 0x3db Mov
	var_61_float = var_16_float; // 0x3dc Mov
	var_62_cvector = var_34_cvector; // 0x3dd Mov
	var_63_cvector = -var_26_cvector; // 0x3de Neg2
	func_1000(var_61_float, var_62_cvector, var_63_cvector); // 0x3df NEW_2
	return 18; // 0x3e1 Return
	
Label_994:
	var_27_object = 0; // 0x3e2 SetNull
	
Label_995:
	var_104_object = Obj(); // 0x3e3 PushV
	var_104_object = var_14_object; // 0x3e4 Mov
	func_888(var_104_object); // 0x3e5 NEW_2
	return 18; // 0x3e7 Return
	
Label_968:
	var_105_int = var_31_cvector | var_26_cvector; // 0x3c8 Or
	var_106_float = 0.70711; // 0x3c9 PushF
	var_107_bool = var_105_int >= var_106_float; // 0x3ca GE
	if(var_107_bool == 0) goto Label_974; // 0x3cb JumpB
	add(var_30_cvector); // 0x3cc ObjFunc
	
Label_974:
	var_108_int = 1; // 0x3ce PushI
	var_28_int = var_28_int + var_108_int; // 0x3cf Add2
	goto Label_961; // 0x3d0 Jump
}


func_811(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x32b PushV
	var_40_string = "HasProperty"; // 0x32c PushS
	var_41_int = 2; // 0x32d PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x32e FuncExist
	var_43_bool = var_42_bool == 0; // 0x32f Not
	if(var_43_bool == 0) goto Label_819; // 0x330 JumpB
	var_35_bool = 0; // 0x331 MovB
	return 2; // 0x332 Return
	
Label_819:
	HasProperty(var_37_string, var_39_bool); // 0x333 ObjFunc
	var_35_bool = var_39_bool; // 0x335 Mov
	return 2; // 0x336 Return
}


func_1327(var_70_int)
{
	var_70_int = 515560; // 0x52f MovI
	return 0; // 0x530 Return
}


func_1199(var_73_float, var_74_cvector, var_75_cvector)
{
	var_76_int = var_74_cvector | var_75_cvector; // 0x4b0 Or
	var_77_int = var_74_cvector | var_74_cvector; // 0x4b1 Or
	var_78_int = var_75_cvector | var_75_cvector; // 0x4b2 Or
	var_79_float = var_77_int * var_78_int; // 0x4b3 Mult
	var_80_float = sqrt(var_79_float); // 0x4b4 Sqrt
	var_73_float = var_76_int / var_76_int; // 0x4b5 Div2
	return 0; // 0x4b6 Return
}


func_1329(var_69_int)
{
	var_69_int = 503345; // 0x531 MovI
	return 0; // 0x532 Return
}


func_1331(var_71_string)
{
	var_71_string = "ui/NPC_Citizen3.png"; // 0x533 MovS
	return 0; // 0x534 Return
}


func_1333(var_72_string)
{
	var_72_string = "ui/NPC_Citizen3_b.png"; // 0x535 MovS
	return 0; // 0x536 Return
}


func_1335(var_64_bool)
{
	var_64_bool = 0; // 0x537 MovB
	return 0; // 0x538 Return
}


func_823(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x337 PushV
	IsDead(var_31_bool); // 0x338 ObjFunc
	var_28_bool = var_31_bool; // 0x33a Mov
	return 2; // 0x33b Return
}


func_1337()
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x539 PushV
	GetScene(var_13_object); // 0x53a Func
	var_14_object = Obj(); // 0x53c PushV
	func_1183(var_14_object); // 0x53d NEW_2
	RemoveStationaryActor(var_14_object); // 0x53f ObjFunc
	return 2; // 0x541 Return
}


func_1207(var_35_int, var_36_int)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x4b7 PushV
	CreateIntVector(var_38_object); // 0x4b8 Func
	add(var_35_int); // 0x4ba ObjFunc
	add(var_36_int); // 0x4bc ObjFunc
	var_39_int = 3; // 0x4be PushI
	SendWorldWndMessage(var_39_int, var_38_object); // 0x4bf Func
	return 2; // 0x4c1 Return
}


func_828(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x33c PushV
	var_23_bool = var_18_object == 0; // 0x33d NullEq
	if(var_23_bool == 0) goto Label_833; // 0x33e JumpB
	var_17_bool = 0; // 0x33f MovB
	return 4; // 0x340 Return
	
Label_833:
	var_24_bool = 0; // 0x341 PushV
	var_24_bool = 0; // 0x342 MovB
	var_25_string = "IsDead"; // 0x343 PushS
	var_26_int = 1; // 0x344 PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x345 FuncExist
	if(var_27_bool == 0) goto Label_845; // 0x346 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x347 PushV
	var_29_object = var_18_object; // 0x348 Mov
	func_823(var_29_object); // 0x349 NEW_2
	if(var_28_bool == 0) goto Label_845; // 0x34b JumpB
	var_24_bool = 1; // 0x34c MovB
	
Label_845:
	if(var_24_bool == 0) goto Label_848; // 0x34d JumpB
	var_17_bool = 0; // 0x34e MovB
	return 4; // 0x34f Return
	
Label_848:
	GetScene(var_21_object); // 0x350 Func
	var_32_bool = var_21_object == 0; // 0x352 NullEq
	if(var_32_bool == 0) goto Label_854; // 0x353 JumpB
	var_17_bool = 0; // 0x354 MovB
	return 4; // 0x355 Return
	
Label_854:
	GetScene(var_22_object); // 0x356 ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x358 Neq
	if(var_33_bool == 0) goto Label_860; // 0x359 JumpB
	var_17_bool = 0; // 0x35a MovB
	return 4; // 0x35b Return
	
Label_860:
	var_17_bool = 1; // 0x35c MovB
	return 4; // 0x35d Return
}


func_1087()
{
	var_133_bool = 0; var_134_bool = 0; // 0x43f PushV
	CameraSwitchToNormal(); // 0x440 Func
	var_135_bool = 0; // 0x442 PushV
	func_1335(var_135_bool); // 0x443 NEW_2
	if(var_135_bool == 0) goto Label_1095; // 0x445 JumpB
	goto Label_1103; // 0x446 Jump
	
Label_1103:
	return 2; // 0x44f Return
	
Label_1095:
	var_136_string = "head"; // 0x447 PushS
	HasAnimationTrack(var_134_bool, var_136_string); // 0x448 Func
	var_137_bool = var_134_bool; // 0x44a Push
	if(var_137_bool == 0) goto Label_1103; // 0x44b JumpB
	var_138_string = "head"; // 0x44c PushS
	UnlookAsync(var_138_string); // 0x44d Func
}


func_1219(var_25_object, var_26_int)
{
	var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; // 0x4c3 PushV
	GetItemID(var_30_int); // 0x4c4 ObjFunc
	var_33_string = "Category"; // 0x4c6 PushS
	GetInvItemProperty(var_31_int, var_30_int, var_33_string); // 0x4c7 Func
	AddItem(var_32_bool, var_25_object, var_31_int, var_26_int); // 0x4c9 ObjFunc
	var_34_bool = var_32_bool == 0; // 0x4cb Not
	if(var_34_bool == 0) goto Label_1232; // 0x4cc JumpB
	DropItems(var_25_object, var_26_int); // 0x4cd ObjFunc
	goto Label_1237; // 0x4cf Jump
	
Label_1237:
	return 6; // 0x4d5 Return
	
Label_1232:
	var_35_int = 0; var_36_int = 0; // 0x4d0 PushV
	var_35_int = var_30_int; // 0x4d1 Mov
	var_36_int = var_26_int; // 0x4d2 Mov
	func_1207(var_35_int, var_36_int); // 0x4d3 NEW_2
}


func_1347(var_11_object)
{
	func_1337(); // 0x545 NEW_2
	var_17_object = Obj(); // 0x547 PushV
	var_17_object = var_11_object; // 0x548 Mov
	TaskCall(6); // 0x549 TaskCall
	func_667(var_17_object); // 0x54a NEW_2
	TaskReturn(); // 0x54b TaskReturn
	return 0; // 0x54d Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_82_object, var_83_object)
{
	var_0_object = var_83_object; // 0x4b TMov
	var_1_object = var_82_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_88_int = 1; // 0x4e PushI
	if(var_88_int == 0) goto Label_102; // 0x4f JumpB
	var_89_string = ""; // 0x50 PushV
	var_89_string = "Neutral"; // 0x51 MovS
	func_132(var_83_object, var_89_string); // 0x52 NEW_2
	var_106_int = 525646; // 0x54 PushI
	SetMessage(var_106_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_107_int = 525647; // 0x59 PushI
	var_108_int = 26990; // 0x5a PushI
	var_109_int = 26989; // 0x5b PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x5c TObjFunc
	var_110_int = 539057; // 0x5e PushI
	var_111_int = 26990; // 0x5f PushI
	var_112_int = 41004; // 0x60 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_113_bool = 0; // 0x66 PushV
	func_1335(var_113_bool); // 0x67 NEW_2
	if(var_113_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_114_string = var_3_string; // 0x6c PushT
	if(var_114_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_115_string = ""; // 0x6f PushV
	var_115_string = var_2_object; // 0x70 MovT
	func_1104(var_115_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_126_string = "all"; // 0x75 PushS
	var_127_string = "idle"; // 0x76 PushS
	PlayAnimation(var_126_string, var_127_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_128_string = var_3_string; // 0x7b PushT
	if(var_128_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_129_string = "all"; // 0x7e PushS
	var_130_string = "idle"; // 0x7f PushS
	PlayAnimation(var_129_string, var_130_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_1104(var_115_string)
{
	var_116_bool = 0; var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_float = 0; var_121_float = 0; // 0x450 PushV
	lshHasAnimation(var_119_bool, var_115_string); // 0x451 Func
	var_122_bool = var_119_bool; // 0x453 Push
	if(var_122_bool == 0) goto Label_1115; // 0x454 JumpB
	lshGetAnimTimes(var_115_string, var_120_float, var_121_float); // 0x455 Func
	var_123_bool = 0; // 0x457 PushB
	lshPlayAnimation(var_120_float, var_121_float, var_123_bool); // 0x458 Func
	goto Label_1119; // 0x45a Jump
	
Label_1119:
	return 6; // 0x45f Return
	
Label_1115:
	var_124_string = "Can't find lsh animation : "; // 0x45b PushS
	var_125_int = var_124_string + var_115_string; // 0x45c Add
	Trace(var_125_int); // 0x45d Func
}


func_1238(var_19_object, var_20_string, var_21_int)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x4d6 PushV
	CreateInvItem(var_23_object); // 0x4d7 Func
	SetItemName(var_20_string); // 0x4d9 ObjFunc
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; // 0x4db PushV
	var_24_object = var_19_object; // 0x4dc Mov
	var_25_object = var_23_object; // 0x4dd Mov
	var_26_int = var_21_int; // 0x4de Mov
	func_1219(var_25_object, var_26_int); // 0x4df NEW_2
	return 2; // 0x4e1 Return
}


func_344(var_169_float)
{
	var_170_float = 0; var_171_float = 0; // 0x158 PushV
	GetCameraFarDistance(var_171_float); // 0x159 Func
	var_169_float = var_171_float; // 0x15b Mov
	return 2; // 0x15c Return
}


func_473(var_224_bool)
{
	var_224_bool = 1; // 0x1d9 MovB
	return 0; // 0x1da Return
}


func_475()
{
	StopAnimation(); // 0x1db Func
	StopGroup0(); // 0x1dd Func
	return 0; // 0x1df Return
}


func_1120(var_93_string, var_94_bool)
{
	var_97_bool = 0; var_98_float = 0; var_99_float = 0; var_100_bool = 0; var_101_float = 0; var_102_float = 0; // 0x460 PushV
	lshHasAnimation(var_100_bool, var_93_string); // 0x461 Func
	var_103_bool = var_100_bool; // 0x463 Push
	if(var_103_bool == 0) goto Label_1130; // 0x464 JumpB
	lshGetAnimTimes(var_93_string, var_101_float, var_102_float); // 0x465 Func
	lshPlayAnimation(var_101_float, var_102_float, var_94_bool); // 0x467 Func
	goto Label_1134; // 0x469 Jump
	
Label_1134:
	return 6; // 0x46e Return
	
Label_1130:
	var_104_string = "Can't find lsh animation : "; // 0x46a PushS
	var_105_int = var_104_string + var_93_string; // 0x46b Add
	Trace(var_105_int); // 0x46c Func
}


func_480(var_24_cvector, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x1e0 PushV
	GetPosition(var_32_cvector); // 0x1e1 Func
	GetPosition(var_33_cvector); // 0x1e3 TObjFunc
	GetDirection(var_34_cvector); // 0x1e5 Func
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x1e7 PushV
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x1e8 PushV
	var_41_cvector = var_32_cvector - var_33_cvector; // 0x1e9 Sub2
	func_1189(var_40_cvector, var_41_cvector); // 0x1ea NEW_2
	var_47_float = 0.75; // 0x1ec PushF
	var_48_float = var_34_cvector * var_47_float; // 0x1ed Mult
	var_39_cvector = var_40_cvector + var_48_float; // 0x1ee Add2
	func_1189(var_38_cvector, var_39_cvector); // 0x1ef NEW_2
	var_35_cvector = var_38_cvector; // 0x1f0 Mov
	var_49_int = 32; // 0x1f2 PushI
	var_50_float = 7000.0; // 0x1f3 PushF
	FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, var_49_int, var_50_float); // 0x1f4 Func
	var_51_int = 100; // 0x1f6 PushI
	var_37_float = var_37_float - var_51_int; // 0x1f7 Sub2
	var_52_int = 0; // 0x1f8 PushI
	var_53_bool = var_37_float < var_52_int; // 0x1f9 LT
	if(var_53_bool == 0) goto Label_508; // 0x1fa JumpB
	var_37_float = 0; // 0x1fb MovI
	
Label_508:
	var_24_cvector = var_36_cvector * var_37_float; // 0x1fc Mult2
	return 12; // 0x1fd Return
}


func_864(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x360 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x361 PushV
	var_18_object = var_14_object; // 0x362 Mov
	func_828(var_17_bool, var_18_object); // 0x363 NEW_2
	var_34_bool = var_17_bool == 0; // 0x365 Not
	if(var_34_bool == 0) goto Label_873; // 0x366 JumpB
	var_13_bool = 0; // 0x367 MovB
	return 2; // 0x368 Return
	
Label_873:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x369 PushV
	var_36_object = var_14_object; // 0x36a Mov
	var_37_string = "noaccess"; // 0x36b MovS
	func_811(var_35_bool, var_36_object, var_37_string); // 0x36c NEW_2
	var_44_bool = var_35_bool == 0; // 0x36e Not
	if(var_44_bool == 0) goto Label_882; // 0x36f JumpB
	var_13_bool = 1; // 0x370 MovB
	return 2; // 0x371 Return
	
Label_882:
	var_45_string = "noaccess"; // 0x372 PushS
	GetProperty(var_45_string, var_16_int); // 0x373 ObjFunc
	var_46_int = 0; // 0x375 PushI
	var_13_bool = var_16_int == var_46_int; // 0x376 Eq2
	return 2; // 0x377 Return
}


func_1251(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x4e3 PushV
	FindActor(var_18_object, var_15_string); // 0x4e4 Func
	var_19_bool = var_18_object == 0; // 0x4e6 NullEq
	if(var_19_bool == 0) goto Label_1258; // 0x4e7 JumpB
	var_14_bool = 0; // 0x4e8 MovB
	return 2; // 0x4e9 Return
	
Label_1258:
	Trigger(var_18_object, var_16_string); // 0x4ea Func
	var_14_bool = 1; // 0x4ec MovB
	return 2; // 0x4ed Return
}


func_356(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x164 TMovB
	var_1_object = 0; // 0x165 TMovB
	Stop(); // 0x166 Func
	StopGroup0(); // 0x168 Func
	return 0; // 0x16a Return
}


func_1000(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x3e8 PushV
	GetScene(var_23_object); // 0x3e9 Func
	var_25_string = "scripted"; // 0x3eb PushS
	var_26_string = "blood_dir.xml"; // 0x3ec PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x3ed Func
	var_27_object = Obj(); // 0x3ef PushV
	var_27_object = var_16_object; // 0x3f0 Mov
	func_888(var_27_object); // 0x3f1 NEW_2
	return 4; // 0x3f3 Return
}


func_635(var_2_object)
{
	Stop(); // 0x27b Func
	var_11_int = 120; // 0x27d PushI
	KillTimer(var_11_int); // 0x27e Func
	var_2_object = 1; // 0x280 TMovB
	return 0; // 0x281 Return
}


func_1135()
{
	var_13_bool = 0; // 0x46f PushV
	func_1335(var_13_bool); // 0x470 NEW_2
	if(var_13_bool == 0) goto Label_1141; // 0x472 JumpB
	lshStopSpeech(); // 0x473 Func
	
Label_1141:
	return 0; // 0x475 Return
}


func_1263(var_205_string, var_206_int)
{
	var_207_string = ""; var_208_string = ""; // 0x4ef PushV
	var_208_string = "idle"; // 0x4f0 MovS
	var_209_int = var_206_int; // 0x4f1 Push
	if(var_209_int == 0) goto Label_1268; // 0x4f2 JumpB
	var_208_string = var_208_string + var_206_int; // 0x4f3 Add2
	
Label_1268:
	var_205_string = var_208_string; // 0x4f4 Mov
	return 2; // 0x4f5 Return
}


func_1395(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x574 PushV
	var_14_object = var_12_object; // 0x575 Mov
	func_864(var_13_bool, var_14_object); // 0x576 NEW_2
	var_11_bool = var_13_bool; // 0x577 Mov
	return 0; // 0x579 Return
}


func_372(var_179_bool)
{
	var_179_bool = 0; // 0x174 MovB
	return 0; // 0x175 Return
}


func_374(var_173_object, var_174_cvector)
{
	var_175_object = Obj(); var_176_object = Obj(); // 0x176 PushV
	FindShiftedPathTo(var_176_object, var_174_cvector); // 0x177 Func
	var_173_object = var_176_object; // 0x179 Mov
	return 2; // 0x17a Return
}


func_1014(var_195_bool)
{
	var_196_bool = 0; var_197_bool = 0; // 0x3f6 PushV
	IsLoaded(var_197_bool); // 0x3f7 Func
	var_195_bool = var_197_bool; // 0x3f9 Mov
	return 2; // 0x3fa Return
}


func_888(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x378 PushV
	var_42_bool = var_27_object == 0; // 0x379 NullEq
	if(var_42_bool == 0) goto Label_892; // 0x37a JumpB
	return 14; // 0x37b Return
	
Label_892:
	IsDead(var_35_bool); // 0x37c Func
	var_43_bool = var_35_bool; // 0x37e Push
	if(var_43_bool == 0) goto Label_897; // 0x37f JumpB
	return 14; // 0x380 Return
	
Label_897:
	GetSecondaryAnimationType(var_36_int); // 0x381 Func
	var_44_int = 0; // 0x383 PushI
	var_45_bool = var_36_int < var_44_int; // 0x384 LT
	if(var_45_bool == 0) goto Label_903; // 0x385 JumpB
	return 14; // 0x386 Return
	
Label_903:
	GetPosition(var_37_cvector); // 0x387 ObjFunc
	GetPosition(var_38_cvector); // 0x389 Func
	GetDirection(var_39_cvector); // 0x38b Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x38d Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x38e PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x38f PushE
	var_48_float = var_46_float * var_47_float; // 0x390 Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x391 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x392 PushE
	var_51_float = var_49_float * var_50_float; // 0x393 Mult
	var_52_int = var_48_float + var_51_float; // 0x394 Add
	var_53_int = 0; // 0x395 PushI
	var_54_bool = var_52_int >= var_53_int; // 0x396 GE
	if(var_54_bool == 0) goto Label_922; // 0x397 JumpB
	var_41_string = "fhit"; // 0x398 MovS
	goto Label_923; // 0x399 Jump
	
Label_923:
	var_55_string = "hit_react"; // 0x39b PushS
	var_56_string = "1"; // 0x39c PushS
	var_57_int = var_41_string + var_56_string; // 0x39d Add
	var_58_string = "2"; // 0x39e PushS
	var_59_int = var_41_string + var_58_string; // 0x39f Add
	var_60_int = -10; // 0x3a0 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x3a1 Func
	return 14; // 0x3a3 Return
	
Label_922:
	var_41_string = "bhit"; // 0x39a MovS
}


func_1270(var_199_int)
{
	var_200_int = 0; var_201_bool = 0; var_202_int = 0; var_203_bool = 0; // 0x4f6 PushV
	var_202_int = 0; // 0x4f7 MovI
	
Label_1272:
	var_204_string = "all"; // 0x4f8 PushS
	var_205_string = ""; var_206_int = 0; // 0x4f9 PushV
	var_206_int = var_202_int; // 0x4fa Mov
	func_1263(var_205_string, var_206_int); // 0x4fb NEW_2
	HasAnimation(var_203_bool, var_204_string, var_205_string); // 0x4fd Func
	var_210_bool = var_203_bool == 0; // 0x4ff Not
	if(var_210_bool == 0) goto Label_1282; // 0x500 JumpB
	goto Label_1285; // 0x501 Jump
	
Label_1285:
	var_199_int = var_202_int; // 0x505 Mov
	return 4; // 0x506 Return
	
Label_1282:
	var_211_int = 1; // 0x502 PushI
	var_202_int = var_202_int + var_211_int; // 0x503 Add2
	goto Label_1272; // 0x504 Jump
}


func_1402(var_47_object)
{
	var_48_object = Obj(); // 0x57b PushV
	var_48_object = var_47_object; // 0x57c Mov
	TaskCall(5); // 0x57d TaskCall
	func_510(var_49_object, var_50_cvector, var_51_bool, var_48_object); // 0x57e NEW_2
	TaskReturn(); // 0x57f TaskReturn
	return 0; // 0x581 Return
}


func_1019(var_22_bool, var_24_float)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; // 0x3fb PushV
	GetPosition(var_35_cvector); // 0x3fc ObjFunc
	GetEyesHeight(var_34_float); // 0x3fe ObjFunc
	var_43_float = GetByIndex(var_35_cvector, 1); // 0x400 PushE
	var_43_float = var_43_float + var_34_float; // 0x401 Add2
	SetByIndex(var_35_cvector, 1) = var_43_float; // 0x402 PopE
	GetPosition(var_36_cvector); // 0x403 Func
	GetEyesHeight(var_34_float); // 0x405 Func
	var_44_float = GetByIndex(var_36_cvector, 1); // 0x407 PushE
	var_44_float = var_44_float + var_34_float; // 0x408 Add2
	SetByIndex(var_36_cvector, 1) = var_44_float; // 0x409 PopE
	var_37_cvector = var_35_cvector - var_36_cvector; // 0x40a Sub2
	var_45_float = GetByIndex(var_37_cvector, 1); // 0x40b PushE
	var_45_float = 0; // 0x40c MovI
	SetByIndex(var_37_cvector, 1) = var_45_float; // 0x40d PopE
	var_46_int = var_37_cvector | var_37_cvector; // 0x40e Or
	var_47_float = sqrt(var_46_int); // 0x40f Sqrt
	var_37_cvector = var_37_cvector / var_37_cvector; // 0x410 Div2
	var_38_cvector = -var_37_cvector; // 0x411 Neg2
	var_48_float = var_37_cvector * var_24_float; // 0x412 Mult
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x413 PushV
	var_51_cvector = CVector(0.0, 1.0, 0.0); // 0x414 PushVec
	var_50_cvector = var_38_cvector ^ var_51_cvector; // 0x415 Xor2
	func_1189(var_49_cvector, var_50_cvector); // 0x416 NEW_2
	var_57_int = 25; // 0x418 PushI
	var_58_float = var_49_cvector * var_57_int; // 0x419 Mult
	var_59_int = var_48_float + var_58_float; // 0x41a Add
	var_60_cvector = CVector(0.0, 10.0, 0.0); // 0x41b PushVec
	var_39_cvector = var_59_int - var_60_cvector; // 0x41c Sub2
	var_40_cvector = var_36_cvector + var_39_cvector; // 0x41d Add2
	IsOverrideActive(var_41_bool); // 0x41e Func
	var_61_bool = var_41_bool; // 0x420 Push
	if(var_61_bool == 0) goto Label_1060; // 0x421 JumpB
	var_22_bool = 0; // 0x422 MovB
	return 18; // 0x423 Return
	
Label_1060:
	StopWorld(); // 0x424 Func
	CameraTransit(var_40_cvector, var_38_cvector); // 0x426 Func
	var_62_float = GetByIndex(var_39_cvector, 0); // 0x428 PushE
	var_63_float = GetByIndex(var_39_cvector, 2); // 0x429 PushE
	Rotate(var_62_float, var_63_float); // 0x42a Func
	var_64_bool = 0; // 0x42c PushV
	func_1335(var_64_bool); // 0x42d NEW_2
	if(var_64_bool == 0) goto Label_1073; // 0x42f JumpB
	goto Label_1081; // 0x430 Jump
	
Label_1081:
	CameraWaitForPlayFinish(); // 0x439 Func
	ResumeWorld(); // 0x43b Func
	var_22_bool = 1; // 0x43d MovB
	return 18; // 0x43e Return
	
Label_1073:
	var_65_string = "head"; // 0x431 PushS
	HasAnimationTrack(var_42_bool, var_65_string); // 0x432 Func
	var_66_bool = var_42_bool; // 0x434 Push
	if(var_66_bool == 0) goto Label_1081; // 0x435 JumpB
	var_67_string = "head"; // 0x436 PushS
	LookAsyncCamera(var_67_string); // 0x437 Func
}


func_1142(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x476 PushV
	IsExisting3DSound(var_50_bool, var_41_string); // 0x477 Func
	var_58_bool = var_50_bool == 0; // 0x479 Not
	if(var_58_bool == 0) goto Label_1167; // 0x47a JumpB
	var_51_int = 0; // 0x47b MovI
	
Label_1148:
	var_59_int = 1; // 0x47c PushI
	var_60_int = var_51_int + var_59_int; // 0x47d Add
	var_61_int = var_41_string + var_60_int; // 0x47e Add
	IsExisting3DSound(var_52_bool, var_61_int); // 0x47f Func
	var_62_bool = var_52_bool == 0; // 0x481 Not
	if(var_62_bool == 0) goto Label_1156; // 0x482 JumpB
	goto Label_1159; // 0x483 Jump
	
Label_1159:
	var_63_bool = var_51_int == 0; // 0x487 Not
	if(var_63_bool == 0) goto Label_1162; // 0x488 JumpB
	return 16; // 0x489 Return
	
Label_1162:
	irand(var_53_int, var_51_int); // 0x48a Func
	var_64_int = 1; // 0x48c PushI
	var_65_int = var_53_int + var_64_int; // 0x48d Add
	var_41_string = var_41_string + var_65_int; // 0x48e Add2
	
Label_1167:
	Is3DSoundLoaded(var_54_bool, var_41_string); // 0x48f Func
	var_66_bool = var_54_bool; // 0x491 Push
	if(var_66_bool == 0) goto Label_1182; // 0x492 JumpB
	GetEyesHeight(var_55_float); // 0x493 Func
	GetDirection(var_56_cvector); // 0x495 Func
	var_67_int = 50; // 0x497 PushI
	var_57_cvector = var_56_cvector * var_67_int; // 0x498 Mult2
	var_68_float = GetByIndex(var_57_cvector, 1); // 0x499 PushE
	var_68_float = var_68_float + var_55_float; // 0x49a Add2
	SetByIndex(var_57_cvector, 1) = var_68_float; // 0x49b PopE
	PlayGlobalSound(var_41_string, var_57_cvector); // 0x49c Func
	
Label_1182:
	return 16; // 0x49e Return
	
Label_1156:
	var_69_int = 1; // 0x484 PushI
	var_51_int = var_51_int + var_69_int; // 0x485 Add2
	goto Label_1148; // 0x486 Jump
}


func_510(var_0_object, var_1_object, var_2_object, var_48_object)
{
	var_52_cvector = CVector(0,0,0); var_53_float = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_float = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_float = 0; // 0x1fe PushV
	var_0_object = var_48_object; // 0x1ff TMov
	var_62_cvector = CVector(0,0,0); var_63_float = 0; // 0x200 PushV
	var_63_float = 1.74533; // 0x201 MovF
	func_480(var_62_cvector, var_63_float); // 0x202 NEW_2
	var_57_cvector = var_62_cvector; // 0x203 Mov
	var_58_float = var_57_cvector | var_57_cvector; // 0x205 Or2
	var_92_float = 2500.0; // 0x206 PushF
	var_93_bool = var_58_float < var_92_float; // 0x207 LT
	if(var_93_bool == 0) goto Label_539; // 0x208 JumpB
	var_94_cvector = CVector(0,0,0); var_95_float = 0; // 0x209 PushV
	var_95_float = 2.61799; // 0x20a MovF
	func_480(var_94_cvector, var_95_float); // 0x20b NEW_2
	var_57_cvector = var_94_cvector; // 0x20c Mov
	var_58_float = var_57_cvector | var_57_cvector; // 0x20e Or2
	var_96_float = 2500.0; // 0x20f PushF
	var_97_bool = var_58_float < var_96_float; // 0x210 LT
	if(var_97_bool == 0) goto Label_539; // 0x211 JumpB
	var_98_string = "Can't retreat, distance: "; // 0x212 PushS
	var_99_float = sqrt(var_58_float); // 0x213 Sqrt
	var_100_int = var_98_string + var_99_float; // 0x214 Add
	Trace(var_100_int); // 0x215 Func
	var_101_float = 0.5; // 0x217 PushF
	Sleep(var_101_float); // 0x218 Func
	return 10; // 0x21a Return
	
Label_539:
	var_102_float = GetByIndex(var_57_cvector, 0); // 0x21b PushE
	var_103_float = GetByIndex(var_57_cvector, 2); // 0x21c PushE
	Rotate(var_102_float, var_103_float); // 0x21d Func
	var_104_cvector = CVector(0,0,0); // 0x21f PushV
	func_799(var_104_cvector); // 0x220 NEW_2
	var_1_object = var_104_cvector + var_57_cvector; // 0x222 Add2
	var_107_int = 120; // 0x223 PushI
	var_108_float = 0.5; // 0x224 PushF
	SetTimer(var_107_int, var_108_float); // 0x225 Func
	var_2_object = 0; // 0x227 TMovB
	
Label_552:
	var_109_int = 1; // 0x228 PushI
	MovePoint(var_109_int, var_109_int, var_59_bool); // 0x229 Func
	var_110_bool = var_59_bool; // 0x22b Push
	if(var_110_bool == 0) goto Label_580; // 0x22c JumpB
	var_111_bool = var_0_object == 0; // 0x22d NullEq
	if(var_111_bool == 0) goto Label_561; // 0x22e JumpB
	goto Label_582; // 0x22f Jump
	
Label_582:
	return 10; // 0x246 Return
	
Label_561:
	var_112_cvector = CVector(0,0,0); var_113_float = 0; // 0x231 PushV
	var_113_float = 2.61799; // 0x232 MovF
	func_480(var_112_cvector, var_113_float); // 0x233 NEW_2
	var_60_cvector = var_112_cvector; // 0x234 Mov
	var_61_float = var_60_cvector | var_60_cvector; // 0x236 Or2
	var_114_float = 2500.0; // 0x237 PushF
	var_115_bool = var_61_float >= var_114_float; // 0x238 GE
	if(var_115_bool == 0) goto Label_579; // 0x239 JumpB
	var_116_cvector = CVector(0,0,0); // 0x23a PushV
	func_799(var_116_cvector); // 0x23b NEW_2
	var_1_object = var_116_cvector + var_60_cvector; // 0x23d Add2
	var_117_int = 120; // 0x23e PushI
	var_118_float = 0.5; // 0x23f PushF
	SetTimer(var_117_int, var_118_float); // 0x240 Func
	goto Label_580; // 0x242 Jump
	
Label_580:
	var_119_bool = var_2_object == 0; // 0x244 Not
	if(var_119_bool == 0) goto Label_552; // 0x245 JumpB
	
Label_579:
	goto Label_582; // 0x243 Jump
}


func_767(var_40_string)
{
	RemoveRTEnvelope(); // 0x300 Func
	SetDeathState(); // 0x302 Func
	Stop(); // 0x304 Func
	StopAsync(); // 0x306 Func
	StopSecondaryAnimation(); // 0x308 Func
	var_41_string = ""; // 0x30a PushV
	var_41_string = var_40_string; // 0x30b Mov
	func_1142(var_41_string); // 0x30c NEW_2
	var_70_string = "all"; // 0x30e PushS
	PlayAnimation(var_70_string, var_40_string); // 0x30f Func
	WaitForAnimEnd(); // 0x311 Func
	var_71_string = "all"; // 0x313 PushS
	LockAnimationEnd(var_71_string, var_40_string); // 0x314 Func
	RemoveEnvelope(); // 0x316 Func
	return 0; // 0x318 Return
}


