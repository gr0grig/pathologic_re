task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_300; // 0xa1 JumpB
	func_629(); // 0xa3 NEW_2
	var_14_int = 4316; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_685(); // 0xab NEW_2
	
Label_173:
	var_20_int = 4315; // 0xad PushI
	var_21_bool = var_10_bool == var_20_int; // 0xae Eq
	if(var_21_bool == 0) goto Label_201; // 0xaf JumpB
	var_22_string = ""; // 0xb0 PushV
	var_22_string = "Neutral"; // 0xb1 MovS
	func_137(var_11_object, var_22_string); // 0xb2 NEW_2
	var_39_int = 503963; // 0xb4 PushI
	SetMessage(var_39_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_40_bool = 0; var_41_object = Obj(); // 0xb9 PushV
	var_41_object = var_1_object; // 0xba MovT
	func_691(var_41_object); // 0xbb NEW_2
	if(var_40_bool == 0) goto Label_195; // 0xbd JumpB
	var_48_int = 503964; // 0xbe PushI
	var_49_int = 4318; // 0xbf PushI
	var_50_int = 4316; // 0xc0 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc1 TObjFunc
	
Label_195:
	var_51_int = 503965; // 0xc3 PushI
	var_52_int = -1; // 0xc4 PushI
	var_53_int = 4317; // 0xc5 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_54_int = 4318; // 0xc9 PushI
	var_55_bool = var_10_bool == var_54_int; // 0xca Eq
	if(var_55_bool == 0) goto Label_224; // 0xcb JumpB
	var_56_string = ""; // 0xcc PushV
	var_56_string = "Neutral"; // 0xcd MovS
	func_137(var_11_object, var_56_string); // 0xce NEW_2
	var_57_int = 503966; // 0xd0 PushI
	SetMessage(var_57_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_58_int = 503967; // 0xd5 PushI
	var_59_int = 4322; // 0xd6 PushI
	var_60_int = 4319; // 0xd7 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd8 TObjFunc
	var_61_int = 503968; // 0xda PushI
	var_62_int = 4321; // 0xdb PushI
	var_63_int = 4320; // 0xdc PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_64_int = 4321; // 0xe0 PushI
	var_65_bool = var_10_bool == var_64_int; // 0xe1 Eq
	if(var_65_bool == 0) goto Label_242; // 0xe2 JumpB
	var_66_string = ""; // 0xe3 PushV
	var_66_string = "Neutral"; // 0xe4 MovS
	func_137(var_11_object, var_66_string); // 0xe5 NEW_2
	var_67_int = 503969; // 0xe7 PushI
	SetMessage(var_67_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_68_int = 503971; // 0xec PushI
	var_69_int = -1; // 0xed PushI
	var_70_int = 4323; // 0xee PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xef TObjFunc
	return 0; // 0xf1 Return
	
Label_242:
	var_71_int = 4322; // 0xf2 PushI
	var_72_bool = var_10_bool == var_71_int; // 0xf3 Eq
	if(var_72_bool == 0) goto Label_265; // 0xf4 JumpB
	var_73_string = ""; // 0xf5 PushV
	var_73_string = "Neutral"; // 0xf6 MovS
	func_137(var_11_object, var_73_string); // 0xf7 NEW_2
	var_74_int = 503970; // 0xf9 PushI
	SetMessage(var_74_int); // 0xfa TObjFunc
	ClearReplies(); // 0xfc TObjFunc
	var_75_int = 503972; // 0xfe PushI
	var_76_int = 4326; // 0xff PushI
	var_77_int = 4324; // 0x100 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x101 TObjFunc
	var_78_int = 503976; // 0x103 PushI
	var_79_int = -1; // 0x104 PushI
	var_80_int = 4329; // 0x105 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x106 TObjFunc
	return 0; // 0x108 Return
	
Label_265:
	var_81_int = 4326; // 0x109 PushI
	var_82_bool = var_10_bool == var_81_int; // 0x10a Eq
	if(var_82_bool == 0) goto Label_288; // 0x10b JumpB
	var_83_string = ""; // 0x10c PushV
	var_83_string = "Neutral"; // 0x10d MovS
	func_137(var_11_object, var_83_string); // 0x10e NEW_2
	var_84_int = 503973; // 0x110 PushI
	SetMessage(var_84_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_85_int = 503974; // 0x115 PushI
	var_86_int = -1; // 0x116 PushI
	var_87_int = 4327; // 0x117 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x118 TObjFunc
	var_88_int = 503975; // 0x11a PushI
	var_89_int = -1; // 0x11b PushI
	var_90_int = 4328; // 0x11c PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_3_string = 1; // 0x120 TMovB
	var_91_bool = 0; // 0x121 PushV
	func_683(var_91_bool); // 0x122 NEW_2
	if(var_91_bool == 0) goto Label_296; // 0x124 JumpB
	lshStopAnimation(); // 0x125 Func
	goto Label_298; // 0x127 Jump
	
Label_298:
	return 0; // 0x12a Return
	
Label_296:
	StopAnimation(); // 0x128 Func
	
Label_300:
	return 0; // 0x12c Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_389(var_9_object, var_10_object); // 0x13b NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x13d PushV
	var_15_object = var_10_object; // 0x13e Mov
	TaskCall(0); // 0x13f TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x140 NEW_2
	TaskReturn(); // 0x141 TaskReturn
	return 0; // 0x143 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x16f PushI
	var_12_bool = var_10_int == var_11_int; // 0x170 Eq
	if(var_12_bool == 0) goto Label_388; // 0x171 JumpB
	var_13_bool = 0; // 0x172 PushV
	func_351(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x173 NEW_2
	if(var_13_bool == 0) goto Label_382; // 0x175 JumpB
	var_26_bool = var_2_object == 0; // 0x176 Not
	if(var_26_bool == 0) goto Label_381; // 0x177 JumpB
	var_27_object = Obj(); // 0x178 PushV
	var_27_object = var_4_bool; // 0x179 MovT
	func_618(var_27_object); // 0x17a NEW_2
	var_2_object = 1; // 0x17c TMovB
	
Label_381:
	goto Label_388; // 0x17d Jump
	
Label_388:
	return 0; // 0x184 Return
	
Label_382:
	var_34_object = var_2_object; // 0x17e PushT
	if(var_34_object == 0) goto Label_388; // 0x17f JumpB
	var_35_string = "head"; // 0x180 PushS
	UnlookAsync(var_35_string); // 0x181 Func
	var_2_object = 0; // 0x183 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_301:
	var_10_bool = 1; // 0x12d PushB
	if(var_10_bool == 0) goto Label_312; // 0x12e JumpB
	var_11_int = 1; // 0x12f PushI
	Sleep(var_11_int); // 0x130 Func
	var_12_float = 0; var_13_float = 0; // 0x132 PushV
	var_12_float = 300; // 0x133 MovI
	var_13_float = 100; // 0x134 MovI
	func_324(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_12_float, var_13_float); // 0x135 NEW_2
	goto Label_301; // 0x137 Jump
	
Label_312:
	return 0; // 0x138 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_502(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_677(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_675(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_679(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_681(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_703(var_76_int); // 0x22 NEW_2
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
	var_142_bool = var_24_bool == 0; // 0x38 Not
	if(var_142_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_143_object = Obj(); // 0x3f PushV
	var_143_object = var_15_object; // 0x40 Mov
	func_570(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_324(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_12_float, var_13_float)
{
	var_14_bool = 0; // 0x145 PushV
	func_497(var_14_bool); // 0x146 NEW_2
	var_17_bool = var_14_bool == 0; // 0x148 Not
	if(var_17_bool == 0) goto Label_331; // 0x149 JumpB
	return 0; // 0x14a Return
	
Label_331:
	var_18_string = "player"; // 0x14b PushS
	FindActor(var_9_object, var_18_string); // 0x14c Func
	var_2_object = 0; // 0x14e TMovB
	var_3_string = 0; // 0x14f TMovB
	var_0_object = var_12_float; // 0x150 TMov
	var_1_object = var_13_float; // 0x151 TMov
	var_19_int = 10; // 0x152 PushI
	var_20_float = 1.0; // 0x153 PushF
	SetTimer(var_19_int, var_20_float); // 0x154 Func
	func_403(); // 0x157 NEW_2
	var_72_bool = var_3_string == 0; // 0x159 Not
	if(var_72_bool == 0) goto Label_350; // 0x15a JumpB
	var_73_int = 10; // 0x15b PushI
	KillTimer(var_73_int); // 0x15c Func
	
Label_350:
	return 0; // 0x15e Return
}


func_389(var_2_object, var_3_string)
{
	func_484(); // 0x186 NEW_2
	var_11_int = 10; // 0x188 PushI
	KillTimer(var_11_int); // 0x189 Func
	var_12_object = var_2_object; // 0x18b PushT
	if(var_12_object == 0) goto Label_401; // 0x18c JumpB
	var_13_string = "head"; // 0x18d PushS
	UnlookAsync(var_13_string); // 0x18e Func
	var_2_object = 0; // 0x190 TMovB
	
Label_401:
	var_3_string = 1; // 0x191 TMovB
	return 0; // 0x192 Return
}


func_646(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x286 PushV
	GetVariable(var_113_string, var_115_int); // 0x287 Func
	var_112_int = var_115_int; // 0x289 Mov
	return 2; // 0x28a Return
}


func_137(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x8a PushV
	func_683(var_93_bool); // 0x8b NEW_2
	var_94_bool = var_93_bool == 0; // 0x8d Not
	if(var_94_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_95_bool = var_92_string == var_2_object; // 0x90 Eq
	if(var_95_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_96_string = ""; var_97_bool = 0; // 0x93 PushV
	var_96_string = var_92_string; // 0x94 Mov
	var_98_string = ""; // 0x95 PushS
	var_99_bool = var_92_string == var_98_string; // 0x96 Eq
	if(var_99_bool == 0) goto Label_154; // 0x97 JumpB
	var_97_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_603(var_96_string, var_97_bool); // 0x9b NEW_2
	var_2_object = var_92_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_97_bool = 1; // 0x9a MovB
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_107; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_137(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 503963; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x59 PushV
	var_111_object = var_1_object; // 0x5a MovT
	func_691(var_111_object); // 0x5b NEW_2
	if(var_110_bool == 0) goto Label_99; // 0x5d JumpB
	var_118_int = 503964; // 0x5e PushI
	var_119_int = 4318; // 0x5f PushI
	var_120_int = 4316; // 0x60 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x61 TObjFunc
	
Label_99:
	var_121_int = 503965; // 0x63 PushI
	var_122_int = -1; // 0x64 PushI
	var_123_int = 4317; // 0x65 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_124_bool = 0; // 0x6b PushV
	func_683(var_124_bool); // 0x6c NEW_2
	if(var_124_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_125_string = var_3_string; // 0x71 PushT
	if(var_125_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_126_string = ""; // 0x74 PushV
	var_126_string = var_2_object; // 0x75 MovT
	func_587(var_126_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_137_string = "all"; // 0x7a PushS
	var_138_string = "idle"; // 0x7b PushS
	PlayAnimation(var_137_string, var_138_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_139_string = var_3_string; // 0x80 PushT
	if(var_139_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_140_string = "all"; // 0x83 PushS
	var_141_string = "idle"; // 0x84 PushS
	PlayAnimation(var_140_string, var_141_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_651(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x28b PushV
	var_46_string = "idle"; // 0x28c MovS
	var_47_int = var_44_int; // 0x28d Push
	if(var_47_int == 0) goto Label_656; // 0x28e JumpB
	var_46_string = var_46_string + var_44_int; // 0x28f Add2
	
Label_656:
	var_43_string = var_46_string; // 0x290 Mov
	return 2; // 0x291 Return
}


func_587(var_126_string)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0; // 0x24b PushV
	lshHasAnimation(var_130_bool, var_126_string); // 0x24c Func
	var_133_bool = var_130_bool; // 0x24e Push
	if(var_133_bool == 0) goto Label_598; // 0x24f JumpB
	lshGetAnimTimes(var_126_string, var_131_float, var_132_float); // 0x250 Func
	var_134_bool = 0; // 0x252 PushB
	lshPlayAnimation(var_131_float, var_132_float, var_134_bool); // 0x253 Func
	goto Label_602; // 0x255 Jump
	
Label_602:
	return 6; // 0x25a Return
	
Label_598:
	var_135_string = "Can't find lsh animation : "; // 0x256 PushS
	var_136_int = var_135_string + var_126_string; // 0x257 Add
	Trace(var_136_int); // 0x258 Func
}


func_658(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x292 PushV
	var_40_int = 0; // 0x293 MovI
	
Label_660:
	var_42_string = "all"; // 0x294 PushS
	var_43_string = ""; var_44_int = 0; // 0x295 PushV
	var_44_int = var_40_int; // 0x296 Mov
	func_651(var_43_string, var_44_int); // 0x297 NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x299 Func
	var_48_bool = var_41_bool == 0; // 0x29b Not
	if(var_48_bool == 0) goto Label_670; // 0x29c JumpB
	goto Label_673; // 0x29d Jump
	
Label_673:
	var_37_int = var_40_int; // 0x2a1 Mov
	return 4; // 0x2a2 Return
	
Label_670:
	var_49_int = 1; // 0x29e PushI
	var_40_int = var_40_int + var_49_int; // 0x29f Add2
	goto Label_660; // 0x2a0 Jump
}


func_403()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x193 PushV
	WaitForAnimEnd(); // 0x194 Func
	var_35_bool = 0; // 0x196 PushV
	func_497(var_35_bool); // 0x197 NEW_2
	var_36_bool = var_35_bool == 0; // 0x199 Not
	if(var_36_bool == 0) goto Label_412; // 0x19a JumpB
	return 14; // 0x19b Return
	
Label_412:
	var_37_int = 0; // 0x19c PushV
	func_658(var_37_int); // 0x19d NEW_2
	var_28_int = var_37_int; // 0x19e Mov
	var_29_int = 0; // 0x1a0 MovI
	
Label_417:
	var_50_bool = 0; // 0x1a1 PushV
	var_50_bool = 0; // 0x1a2 MovB
	var_51_int = 5; // 0x1a3 PushI
	var_52_bool = var_29_int < var_51_int; // 0x1a4 LT
	if(var_52_bool == 0) goto Label_427; // 0x1a5 JumpB
	var_53_bool = 0; // 0x1a6 PushV
	func_497(var_53_bool); // 0x1a7 NEW_2
	if(var_53_bool == 0) goto Label_427; // 0x1a9 JumpB
	var_50_bool = 1; // 0x1aa MovB
	
Label_427:
	if(var_50_bool == 0) goto Label_479; // 0x1ab JumpB
	var_54_int = 3; // 0x1ac PushI
	irand(var_30_int, var_54_int); // 0x1ad Func
	var_55_int = 0; // 0x1af PushI
	var_56_bool = var_30_int == var_55_int; // 0x1b0 Eq
	if(var_56_bool == 0) goto Label_451; // 0x1b1 JumpB
	var_57_int = var_28_int; // 0x1b2 Push
	if(var_57_int == 0) goto Label_450; // 0x1b3 JumpB
	irand(var_31_int, var_28_int); // 0x1b4 Func
	var_58_string = "all"; // 0x1b6 PushS
	var_59_string = ""; var_60_int = 0; // 0x1b7 PushV
	var_60_int = var_31_int; // 0x1b8 Mov
	func_651(var_59_string, var_60_int); // 0x1b9 NEW_2
	PlayAnimation(var_58_string, var_59_string); // 0x1bb Func
	WaitForAnimEnd(var_32_bool); // 0x1bd Func
	var_61_bool = var_32_bool == 0; // 0x1bf Not
	if(var_61_bool == 0) goto Label_450; // 0x1c0 JumpB
	goto Label_479; // 0x1c1 Jump
	
Label_479:
	ResetAAS(); // 0x1df Func
	return 14; // 0x1e1 Return
	
Label_450:
	goto Label_468; // 0x1c2 Jump
	
Label_468:
	var_62_bool = 0; // 0x1d4 PushV
	func_482(var_62_bool); // 0x1d5 NEW_2
	var_63_bool = var_62_bool == 0; // 0x1d7 Not
	if(var_63_bool == 0) goto Label_474; // 0x1d8 JumpB
	goto Label_479; // 0x1d9 Jump
	
Label_474:
	ResetAAS(); // 0x1da Func
	var_64_int = 1; // 0x1dc PushI
	var_29_int = var_29_int + var_64_int; // 0x1dd Add2
	goto Label_417; // 0x1de Jump
	
Label_451:
	var_65_int = 1; // 0x1c3 PushI
	var_66_bool = var_30_int == var_65_int; // 0x1c4 Eq
	if(var_66_bool == 0) goto Label_465; // 0x1c5 JumpB
	var_67_int = 4; // 0x1c6 PushI
	rand(var_33_float, var_67_int); // 0x1c7 Func
	var_68_int = 1; // 0x1c9 PushI
	var_69_int = var_33_float + var_68_int; // 0x1ca Add
	Sleep(var_69_int, var_34_bool); // 0x1cb Func
	var_70_bool = var_34_bool == 0; // 0x1cd Not
	if(var_70_bool == 0) goto Label_464; // 0x1ce JumpB
	goto Label_479; // 0x1cf Jump
	
Label_464:
	goto Label_468; // 0x1d0 Jump
	
Label_465:
	var_71_int = var_29_int; // 0x1d1 Push
	if(var_71_int == 0) goto Label_468; // 0x1d2 JumpB
	goto Label_479; // 0x1d3 Jump
}


func_603(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x25b PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x25c Func
	var_106_bool = var_103_bool; // 0x25e Push
	if(var_106_bool == 0) goto Label_613; // 0x25f JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x260 Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x262 Func
	goto Label_617; // 0x264 Jump
	
Label_617:
	return 6; // 0x269 Return
	
Label_613:
	var_107_string = "Can't find lsh animation : "; // 0x265 PushS
	var_108_int = var_107_string + var_96_string; // 0x266 Add
	Trace(var_108_int); // 0x267 Func
}


func_351(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x15f PushV
	var_16_bool = var_4_bool == 0; // 0x160 NullEq
	if(var_16_bool == 0) goto Label_356; // 0x161 JumpB
	var_13_bool = 0; // 0x162 MovB
	return 2; // 0x163 Return
	
Label_356:
	var_17_float = 0; var_18_object = Obj(); // 0x164 PushV
	var_18_object = var_4_bool; // 0x165 MovT
	func_489(var_18_object); // 0x166 NEW_2
	var_15_float = sqrt(var_17_float); // 0x168 Sqrt2
	var_25_object = var_2_object; // 0x169 PushT
	if(var_25_object == 0) goto Label_364; // 0x16a JumpB
	var_15_float = var_15_float - var_1_object; // 0x16b Sub2
	
Label_364:
	var_13_bool = var_15_float < var_0_object; // 0x16c LT2
	return 2; // 0x16d Return
}


func_482(var_62_bool)
{
	var_62_bool = 1; // 0x1e2 MovB
	return 0; // 0x1e3 Return
}


func_675(var_73_int)
{
	var_73_int = 515559; // 0x2a3 MovI
	return 0; // 0x2a4 Return
}


func_484()
{
	StopAnimation(); // 0x1e4 Func
	StopGroup0(); // 0x1e6 Func
	return 0; // 0x1e8 Return
}


func_677(var_72_int)
{
	var_72_int = 503344; // 0x2a5 MovI
	return 0; // 0x2a6 Return
}


func_679(var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png"; // 0x2a7 MovS
	return 0; // 0x2a8 Return
}


func_681(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png"; // 0x2a9 MovS
	return 0; // 0x2aa Return
}


func_489(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1e9 PushV
	GetPosition(var_22_cvector); // 0x1ea Func
	GetPosition(var_23_cvector); // 0x1ec ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1ee Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1ef Or2
	return 6; // 0x1f0 Return
}


func_683(var_67_bool)
{
	var_67_bool = 0; // 0x2ab MovB
	return 0; // 0x2ac Return
}


func_618(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x26a PushV
	GetEyesHeight(var_30_float); // 0x26b ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x26d MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x26e PushE
	var_32_float = var_30_float; // 0x26f Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x270 PopE
	var_33_string = "head"; // 0x271 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x272 Func
	return 4; // 0x274 Return
}


func_685()
{
	var_18_string = "ood6Girl1"; // 0x2ae PushS
	var_19_int = 1; // 0x2af PushI
	SetVariable(var_18_string, var_19_int); // 0x2b0 Func
	return 0; // 0x2b2 Return
}


func_497(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1f1 PushV
	IsLoaded(var_16_bool); // 0x1f2 Func
	var_14_bool = var_16_bool; // 0x1f4 Mov
	return 2; // 0x1f5 Return
}


func_691(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x2b4 PushV
	var_113_string = "ood6Girl1"; // 0x2b5 MovS
	func_646(var_112_int, var_113_string); // 0x2b6 NEW_2
	var_116_int = 0; // 0x2b8 PushI
	var_117_bool = var_112_int == var_116_int; // 0x2b9 Eq
	if(var_117_bool == 0) goto Label_701; // 0x2ba JumpB
	var_110_bool = 1; // 0x2bb MovB
	return 0; // 0x2bc Return
	
Label_701:
	var_110_bool = 0; // 0x2bd MovB
	return 0; // 0x2be Return
}


func_629()
{
	var_13_bool = 0; // 0x275 PushV
	func_683(var_13_bool); // 0x276 NEW_2
	if(var_13_bool == 0) goto Label_635; // 0x278 JumpB
	lshStopSpeech(); // 0x279 Func
	
Label_635:
	return 0; // 0x27b Return
}


func_502(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1f6 PushV
	GetPosition(var_38_cvector); // 0x1f7 ObjFunc
	GetEyesHeight(var_37_float); // 0x1f9 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1fb PushE
	var_46_float = var_46_float + var_37_float; // 0x1fc Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1fd PopE
	GetPosition(var_39_cvector); // 0x1fe Func
	GetEyesHeight(var_37_float); // 0x200 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x202 PushE
	var_47_float = var_47_float + var_37_float; // 0x203 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x204 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x205 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x206 PushE
	var_48_float = 0; // 0x207 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x208 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x209 Or
	var_50_float = sqrt(var_49_int); // 0x20a Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x20b Div2
	var_41_cvector = -var_40_cvector; // 0x20c Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x20d Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x20e PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x20f PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x210 Xor2
	func_636(var_52_cvector, var_53_cvector); // 0x211 NEW_2
	var_60_int = 25; // 0x213 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x214 Mult
	var_62_int = var_51_float + var_61_float; // 0x215 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x216 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x217 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x218 Add2
	IsOverrideActive(var_44_bool); // 0x219 Func
	var_64_bool = var_44_bool; // 0x21b Push
	if(var_64_bool == 0) goto Label_543; // 0x21c JumpB
	var_25_bool = 0; // 0x21d MovB
	return 18; // 0x21e Return
	
Label_543:
	StopWorld(); // 0x21f Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x221 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x223 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x224 PushE
	Rotate(var_65_float, var_66_float); // 0x225 Func
	var_67_bool = 0; // 0x227 PushV
	func_683(var_67_bool); // 0x228 NEW_2
	if(var_67_bool == 0) goto Label_556; // 0x22a JumpB
	goto Label_564; // 0x22b Jump
	
Label_564:
	CameraWaitForPlayFinish(); // 0x234 Func
	ResumeWorld(); // 0x236 Func
	var_25_bool = 1; // 0x238 MovB
	return 18; // 0x239 Return
	
Label_556:
	var_68_string = "head"; // 0x22c PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x22d Func
	var_69_bool = var_45_bool; // 0x22f Push
	if(var_69_bool == 0) goto Label_564; // 0x230 JumpB
	var_70_string = "head"; // 0x231 PushS
	LookAsyncCamera(var_70_string); // 0x232 Func
}


func_570()
{
	var_144_bool = 0; var_145_bool = 0; // 0x23a PushV
	CameraSwitchToNormal(); // 0x23b Func
	var_146_bool = 0; // 0x23d PushV
	func_683(var_146_bool); // 0x23e NEW_2
	if(var_146_bool == 0) goto Label_578; // 0x240 JumpB
	goto Label_586; // 0x241 Jump
	
Label_586:
	return 2; // 0x24a Return
	
Label_578:
	var_147_string = "head"; // 0x242 PushS
	HasAnimationTrack(var_145_bool, var_147_string); // 0x243 Func
	var_148_bool = var_145_bool; // 0x245 Push
	if(var_148_bool == 0) goto Label_586; // 0x246 JumpB
	var_149_string = "head"; // 0x247 PushS
	UnlookAsync(var_149_string); // 0x248 Func
}


func_636(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x27c PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x27d Or
	var_56_float = sqrt(var_57_int); // 0x27e Sqrt2
	var_58_float = 0.0; // 0x27f PushF
	var_59_bool = var_56_float < var_58_float; // 0x280 LT
	if(var_59_bool == 0) goto Label_644; // 0x281 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x282 MovV
	return 2; // 0x283 Return
	
Label_644:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x284 Div2
	return 2; // 0x285 Return
}


func_703(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x2bf PushV
	var_79_string = "branch"; // 0x2c0 PushS
	GetVariable(var_79_string, var_78_int); // 0x2c1 Func
	var_80_int = 0; // 0x2c3 PushI
	var_81_bool = var_78_int == var_80_int; // 0x2c4 Eq
	if(var_81_bool == 0) goto Label_713; // 0x2c5 JumpB
	var_76_int = 1; // 0x2c6 MovI
	return 2; // 0x2c7 Return
	
Label_713:
	var_82_int = 1; // 0x2c9 PushI
	var_83_bool = var_78_int == var_82_int; // 0x2ca Eq
	if(var_83_bool == 0) goto Label_718; // 0x2cb JumpB
	var_76_int = 2; // 0x2cc MovI
	return 2; // 0x2cd Return
	
Label_718:
	var_76_int = 3; // 0x2ce MovI
	return 2; // 0x2cf Return
}


