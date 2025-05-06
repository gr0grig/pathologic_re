task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_241; // 0xa1 JumpB
	func_568(); // 0xa3 NEW_2
	var_14_int = 28251; // 0xa5 PushI
	var_15_bool = var_10_bool == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_193; // 0xa7 JumpB
	var_16_string = ""; // 0xa8 PushV
	var_16_string = "Neutral"; // 0xa9 MovS
	func_137(var_11_object, var_16_string); // 0xaa NEW_2
	var_33_int = 526959; // 0xac PushI
	SetMessage(var_33_int); // 0xad TObjFunc
	ClearReplies(); // 0xaf TObjFunc
	var_34_bool = 0; var_35_object = Obj(); // 0xb1 PushV
	var_35_object = var_1_object; // 0xb2 MovT
	func_624(var_35_object); // 0xb3 NEW_2
	if(var_34_bool == 0) goto Label_187; // 0xb5 JumpB
	var_42_int = 526960; // 0xb6 PushI
	var_43_int = 29409; // 0xb7 PushI
	var_44_int = 28252; // 0xb8 PushI
	AddReply(var_42_int, var_43_int, var_44_int); // 0xb9 TObjFunc
	
Label_187:
	var_45_int = 526963; // 0xbb PushI
	var_46_int = -1; // 0xbc PushI
	var_47_int = 28255; // 0xbd PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xbe TObjFunc
	return 0; // 0xc0 Return
	
Label_193:
	var_48_int = 29409; // 0xc1 PushI
	var_49_bool = var_10_bool == var_48_int; // 0xc2 Eq
	if(var_49_bool == 0) goto Label_211; // 0xc3 JumpB
	var_50_string = ""; // 0xc4 PushV
	var_50_string = "Neutral"; // 0xc5 MovS
	func_137(var_11_object, var_50_string); // 0xc6 NEW_2
	var_51_int = 528067; // 0xc8 PushI
	SetMessage(var_51_int); // 0xc9 TObjFunc
	ClearReplies(); // 0xcb TObjFunc
	var_52_int = 528068; // 0xcd PushI
	var_53_int = 28253; // 0xce PushI
	var_54_int = 29410; // 0xcf PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xd0 TObjFunc
	return 0; // 0xd2 Return
	
Label_211:
	var_55_int = 28253; // 0xd3 PushI
	var_56_bool = var_10_bool == var_55_int; // 0xd4 Eq
	if(var_56_bool == 0) goto Label_229; // 0xd5 JumpB
	var_57_string = ""; // 0xd6 PushV
	var_57_string = "Neutral"; // 0xd7 MovS
	func_137(var_11_object, var_57_string); // 0xd8 NEW_2
	var_58_int = 526961; // 0xda PushI
	SetMessage(var_58_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_59_int = 526962; // 0xdf PushI
	var_60_int = -1; // 0xe0 PushI
	var_61_int = 28254; // 0xe1 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_3_string = 1; // 0xe5 TMovB
	var_62_bool = 0; // 0xe6 PushV
	func_598(var_62_bool); // 0xe7 NEW_2
	if(var_62_bool == 0) goto Label_237; // 0xe9 JumpB
	lshStopAnimation(); // 0xea Func
	goto Label_239; // 0xec Jump
	
Label_239:
	return 0; // 0xef Return
	
Label_237:
	StopAnimation(); // 0xed Func
	
Label_241:
	return 0; // 0xf1 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_328(var_9_object, var_10_object); // 0xfe NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x100 PushV
	var_15_object = var_10_object; // 0x101 Mov
	TaskCall(0); // 0x102 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x103 NEW_2
	TaskReturn(); // 0x104 TaskReturn
	return 0; // 0x106 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x132 PushI
	var_12_bool = var_10_int == var_11_int; // 0x133 Eq
	if(var_12_bool == 0) goto Label_327; // 0x134 JumpB
	var_13_bool = 0; // 0x135 PushV
	func_290(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x136 NEW_2
	if(var_13_bool == 0) goto Label_321; // 0x138 JumpB
	var_26_bool = var_2_object == 0; // 0x139 Not
	if(var_26_bool == 0) goto Label_320; // 0x13a JumpB
	var_27_object = Obj(); // 0x13b PushV
	var_27_object = var_4_bool; // 0x13c MovT
	func_557(var_27_object); // 0x13d NEW_2
	var_2_object = 1; // 0x13f TMovB
	
Label_320:
	goto Label_327; // 0x140 Jump
	
Label_327:
	return 0; // 0x147 Return
	
Label_321:
	var_34_object = var_2_object; // 0x141 PushT
	if(var_34_object == 0) goto Label_327; // 0x142 JumpB
	var_35_string = "head"; // 0x143 PushS
	UnlookAsync(var_35_string); // 0x144 Func
	var_2_object = 0; // 0x146 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_242:
	var_10_float = 0; var_11_float = 0; // 0xf2 PushV
	var_10_float = 300; // 0xf3 MovI
	var_11_float = 100; // 0xf4 MovI
	func_263(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0xf5 NEW_2
	var_72_int = 3; // 0xf7 PushI
	Sleep(var_72_int); // 0xf8 Func
	goto Label_242; // 0xfa Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_441(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_592(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_590(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_594(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_596(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_636(var_76_int); // 0x22 NEW_2
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
	func_509(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_263(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x108 PushV
	func_436(var_12_bool); // 0x109 NEW_2
	var_15_bool = var_12_bool == 0; // 0x10b Not
	if(var_15_bool == 0) goto Label_270; // 0x10c JumpB
	return 0; // 0x10d Return
	
Label_270:
	var_16_string = "player"; // 0x10e PushS
	FindActor(var_9_object, var_16_string); // 0x10f Func
	var_2_object = 0; // 0x111 TMovB
	var_3_string = 0; // 0x112 TMovB
	var_0_object = var_10_float; // 0x113 TMov
	var_1_object = var_11_float; // 0x114 TMov
	var_17_int = 10; // 0x115 PushI
	var_18_float = 1.0; // 0x116 PushF
	SetTimer(var_17_int, var_18_float); // 0x117 Func
	func_342(); // 0x11a NEW_2
	var_70_bool = var_3_string == 0; // 0x11c Not
	if(var_70_bool == 0) goto Label_289; // 0x11d JumpB
	var_71_int = 10; // 0x11e PushI
	KillTimer(var_71_int); // 0x11f Func
	
Label_289:
	return 0; // 0x121 Return
}


func_328(var_2_object, var_3_string)
{
	func_423(); // 0x149 NEW_2
	var_11_int = 10; // 0x14b PushI
	KillTimer(var_11_int); // 0x14c Func
	var_12_object = var_2_object; // 0x14e PushT
	if(var_12_object == 0) goto Label_340; // 0x14f JumpB
	var_13_string = "head"; // 0x150 PushS
	UnlookAsync(var_13_string); // 0x151 Func
	var_2_object = 0; // 0x153 TMovB
	
Label_340:
	var_3_string = 1; // 0x154 TMovB
	return 0; // 0x155 Return
}


func_137(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x8a PushV
	func_598(var_93_bool); // 0x8b NEW_2
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
	func_542(var_96_string, var_97_bool); // 0x9b NEW_2
	var_2_object = var_92_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_97_bool = 1; // 0x9a MovB
}


func_585(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x249 PushV
	GetVariable(var_113_string, var_115_int); // 0x24a Func
	var_112_int = var_115_int; // 0x24c Mov
	return 2; // 0x24d Return
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
	var_109_int = 526959; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x59 PushV
	var_111_object = var_1_object; // 0x5a MovT
	func_624(var_111_object); // 0x5b NEW_2
	if(var_110_bool == 0) goto Label_99; // 0x5d JumpB
	var_118_int = 526960; // 0x5e PushI
	var_119_int = 29409; // 0x5f PushI
	var_120_int = 28252; // 0x60 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x61 TObjFunc
	
Label_99:
	var_121_int = 526963; // 0x63 PushI
	var_122_int = -1; // 0x64 PushI
	var_123_int = 28255; // 0x65 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_124_bool = 0; // 0x6b PushV
	func_598(var_124_bool); // 0x6c NEW_2
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
	func_526(var_126_string); // 0x76 NEW_2
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


func_526(var_126_string)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0; // 0x20e PushV
	lshHasAnimation(var_130_bool, var_126_string); // 0x20f Func
	var_133_bool = var_130_bool; // 0x211 Push
	if(var_133_bool == 0) goto Label_537; // 0x212 JumpB
	lshGetAnimTimes(var_126_string, var_131_float, var_132_float); // 0x213 Func
	var_134_bool = 0; // 0x215 PushB
	lshPlayAnimation(var_131_float, var_132_float, var_134_bool); // 0x216 Func
	goto Label_541; // 0x218 Jump
	
Label_541:
	return 6; // 0x21d Return
	
Label_537:
	var_135_string = "Can't find lsh animation : "; // 0x219 PushS
	var_136_int = var_135_string + var_126_string; // 0x21a Add
	Trace(var_136_int); // 0x21b Func
}


func_590(var_73_int)
{
	var_73_int = 527721; // 0x24e MovI
	return 0; // 0x24f Return
}


func_592(var_72_int)
{
	var_72_int = 527720; // 0x250 MovI
	return 0; // 0x251 Return
}


func_594(var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png"; // 0x252 MovS
	return 0; // 0x253 Return
}


func_596(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png"; // 0x254 MovS
	return 0; // 0x255 Return
}


func_598(var_67_bool)
{
	var_67_bool = 0; // 0x256 MovB
	return 0; // 0x257 Return
}


func_342()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x156 PushV
	WaitForAnimEnd(); // 0x157 Func
	var_33_bool = 0; // 0x159 PushV
	func_436(var_33_bool); // 0x15a NEW_2
	var_34_bool = var_33_bool == 0; // 0x15c Not
	if(var_34_bool == 0) goto Label_351; // 0x15d JumpB
	return 14; // 0x15e Return
	
Label_351:
	var_35_int = 0; // 0x15f PushV
	func_607(var_35_int); // 0x160 NEW_2
	var_26_int = var_35_int; // 0x161 Mov
	var_27_int = 0; // 0x163 MovI
	
Label_356:
	var_48_bool = 0; // 0x164 PushV
	var_48_bool = 0; // 0x165 MovB
	var_49_int = 5; // 0x166 PushI
	var_50_bool = var_27_int < var_49_int; // 0x167 LT
	if(var_50_bool == 0) goto Label_366; // 0x168 JumpB
	var_51_bool = 0; // 0x169 PushV
	func_436(var_51_bool); // 0x16a NEW_2
	if(var_51_bool == 0) goto Label_366; // 0x16c JumpB
	var_48_bool = 1; // 0x16d MovB
	
Label_366:
	if(var_48_bool == 0) goto Label_418; // 0x16e JumpB
	var_52_int = 3; // 0x16f PushI
	irand(var_28_int, var_52_int); // 0x170 Func
	var_53_int = 0; // 0x172 PushI
	var_54_bool = var_28_int == var_53_int; // 0x173 Eq
	if(var_54_bool == 0) goto Label_390; // 0x174 JumpB
	var_55_int = var_26_int; // 0x175 Push
	if(var_55_int == 0) goto Label_389; // 0x176 JumpB
	irand(var_29_int, var_26_int); // 0x177 Func
	var_56_string = "all"; // 0x179 PushS
	var_57_string = ""; var_58_int = 0; // 0x17a PushV
	var_58_int = var_29_int; // 0x17b Mov
	func_600(var_57_string, var_58_int); // 0x17c NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x17e Func
	WaitForAnimEnd(var_30_bool); // 0x180 Func
	var_59_bool = var_30_bool == 0; // 0x182 Not
	if(var_59_bool == 0) goto Label_389; // 0x183 JumpB
	goto Label_418; // 0x184 Jump
	
Label_418:
	ResetAAS(); // 0x1a2 Func
	return 14; // 0x1a4 Return
	
Label_389:
	goto Label_407; // 0x185 Jump
	
Label_407:
	var_60_bool = 0; // 0x197 PushV
	func_421(var_60_bool); // 0x198 NEW_2
	var_61_bool = var_60_bool == 0; // 0x19a Not
	if(var_61_bool == 0) goto Label_413; // 0x19b JumpB
	goto Label_418; // 0x19c Jump
	
Label_413:
	ResetAAS(); // 0x19d Func
	var_62_int = 1; // 0x19f PushI
	var_27_int = var_27_int + var_62_int; // 0x1a0 Add2
	goto Label_356; // 0x1a1 Jump
	
Label_390:
	var_63_int = 1; // 0x186 PushI
	var_64_bool = var_28_int == var_63_int; // 0x187 Eq
	if(var_64_bool == 0) goto Label_404; // 0x188 JumpB
	var_65_int = 4; // 0x189 PushI
	rand(var_31_float, var_65_int); // 0x18a Func
	var_66_int = 1; // 0x18c PushI
	var_67_int = var_31_float + var_66_int; // 0x18d Add
	Sleep(var_67_int, var_32_bool); // 0x18e Func
	var_68_bool = var_32_bool == 0; // 0x190 Not
	if(var_68_bool == 0) goto Label_403; // 0x191 JumpB
	goto Label_418; // 0x192 Jump
	
Label_403:
	goto Label_407; // 0x193 Jump
	
Label_404:
	var_69_int = var_27_int; // 0x194 Push
	if(var_69_int == 0) goto Label_407; // 0x195 JumpB
	goto Label_418; // 0x196 Jump
}


func_600(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x258 PushV
	var_44_string = "idle"; // 0x259 MovS
	var_45_int = var_42_int; // 0x25a Push
	if(var_45_int == 0) goto Label_605; // 0x25b JumpB
	var_44_string = var_44_string + var_42_int; // 0x25c Add2
	
Label_605:
	var_41_string = var_44_string; // 0x25d Mov
	return 2; // 0x25e Return
}


func_542(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x21e PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x21f Func
	var_106_bool = var_103_bool; // 0x221 Push
	if(var_106_bool == 0) goto Label_552; // 0x222 JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x223 Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x225 Func
	goto Label_556; // 0x227 Jump
	
Label_556:
	return 6; // 0x22c Return
	
Label_552:
	var_107_string = "Can't find lsh animation : "; // 0x228 PushS
	var_108_int = var_107_string + var_96_string; // 0x229 Add
	Trace(var_108_int); // 0x22a Func
}


func_607(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x25f PushV
	var_38_int = 0; // 0x260 MovI
	
Label_609:
	var_40_string = "all"; // 0x261 PushS
	var_41_string = ""; var_42_int = 0; // 0x262 PushV
	var_42_int = var_38_int; // 0x263 Mov
	func_600(var_41_string, var_42_int); // 0x264 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x266 Func
	var_46_bool = var_39_bool == 0; // 0x268 Not
	if(var_46_bool == 0) goto Label_619; // 0x269 JumpB
	goto Label_622; // 0x26a Jump
	
Label_622:
	var_35_int = var_38_int; // 0x26e Mov
	return 4; // 0x26f Return
	
Label_619:
	var_47_int = 1; // 0x26b PushI
	var_38_int = var_38_int + var_47_int; // 0x26c Add2
	goto Label_609; // 0x26d Jump
}


func_290(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x122 PushV
	var_16_bool = var_4_bool == 0; // 0x123 NullEq
	if(var_16_bool == 0) goto Label_295; // 0x124 JumpB
	var_13_bool = 0; // 0x125 MovB
	return 2; // 0x126 Return
	
Label_295:
	var_17_float = 0; var_18_object = Obj(); // 0x127 PushV
	var_18_object = var_4_bool; // 0x128 MovT
	func_428(var_18_object); // 0x129 NEW_2
	var_15_float = sqrt(var_17_float); // 0x12b Sqrt2
	var_25_object = var_2_object; // 0x12c PushT
	if(var_25_object == 0) goto Label_303; // 0x12d JumpB
	var_15_float = var_15_float - var_1_object; // 0x12e Sub2
	
Label_303:
	var_13_bool = var_15_float < var_0_object; // 0x12f LT2
	return 2; // 0x130 Return
}


func_421(var_60_bool)
{
	var_60_bool = 1; // 0x1a5 MovB
	return 0; // 0x1a6 Return
}


func_423()
{
	StopAnimation(); // 0x1a7 Func
	StopGroup0(); // 0x1a9 Func
	return 0; // 0x1ab Return
}


func_428(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1ac PushV
	GetPosition(var_22_cvector); // 0x1ad Func
	GetPosition(var_23_cvector); // 0x1af ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1b1 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1b2 Or2
	return 6; // 0x1b3 Return
}


func_557(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x22d PushV
	GetEyesHeight(var_30_float); // 0x22e ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x230 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x231 PushE
	var_32_float = var_30_float; // 0x232 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x233 PopE
	var_33_string = "head"; // 0x234 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x235 Func
	return 4; // 0x237 Return
}


func_624(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x271 PushV
	var_113_string = "k10q01"; // 0x272 MovS
	func_585(var_112_int, var_113_string); // 0x273 NEW_2
	var_116_int = 2; // 0x275 PushI
	var_117_bool = var_112_int == var_116_int; // 0x276 Eq
	if(var_117_bool == 0) goto Label_634; // 0x277 JumpB
	var_110_bool = 1; // 0x278 MovB
	return 0; // 0x279 Return
	
Label_634:
	var_110_bool = 0; // 0x27a MovB
	return 0; // 0x27b Return
}


func_436(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x1b4 PushV
	IsLoaded(var_14_bool); // 0x1b5 Func
	var_12_bool = var_14_bool; // 0x1b7 Mov
	return 2; // 0x1b8 Return
}


func_568()
{
	var_13_bool = 0; // 0x238 PushV
	func_598(var_13_bool); // 0x239 NEW_2
	if(var_13_bool == 0) goto Label_574; // 0x23b JumpB
	lshStopSpeech(); // 0x23c Func
	
Label_574:
	return 0; // 0x23e Return
}


func_441(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1b9 PushV
	GetPosition(var_38_cvector); // 0x1ba ObjFunc
	GetEyesHeight(var_37_float); // 0x1bc ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1be PushE
	var_46_float = var_46_float + var_37_float; // 0x1bf Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1c0 PopE
	GetPosition(var_39_cvector); // 0x1c1 Func
	GetEyesHeight(var_37_float); // 0x1c3 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1c5 PushE
	var_47_float = var_47_float + var_37_float; // 0x1c6 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1c7 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1c8 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1c9 PushE
	var_48_float = 0; // 0x1ca MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1cb PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1cc Or
	var_50_float = sqrt(var_49_int); // 0x1cd Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1ce Div2
	var_41_cvector = -var_40_cvector; // 0x1cf Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1d0 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1d1 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1d2 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1d3 Xor2
	func_575(var_52_cvector, var_53_cvector); // 0x1d4 NEW_2
	var_60_int = 25; // 0x1d6 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1d7 Mult
	var_62_int = var_51_float + var_61_float; // 0x1d8 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1d9 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1da Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1db Add2
	IsOverrideActive(var_44_bool); // 0x1dc Func
	var_64_bool = var_44_bool; // 0x1de Push
	if(var_64_bool == 0) goto Label_482; // 0x1df JumpB
	var_25_bool = 0; // 0x1e0 MovB
	return 18; // 0x1e1 Return
	
Label_482:
	StopWorld(); // 0x1e2 Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x1e4 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x1e6 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x1e7 PushE
	Rotate(var_65_float, var_66_float); // 0x1e8 Func
	var_67_bool = 0; // 0x1ea PushV
	func_598(var_67_bool); // 0x1eb NEW_2
	if(var_67_bool == 0) goto Label_495; // 0x1ed JumpB
	goto Label_503; // 0x1ee Jump
	
Label_503:
	CameraWaitForPlayFinish(); // 0x1f7 Func
	ResumeWorld(); // 0x1f9 Func
	var_25_bool = 1; // 0x1fb MovB
	return 18; // 0x1fc Return
	
Label_495:
	var_68_string = "head"; // 0x1ef PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x1f0 Func
	var_69_bool = var_45_bool; // 0x1f2 Push
	if(var_69_bool == 0) goto Label_503; // 0x1f3 JumpB
	var_70_string = "head"; // 0x1f4 PushS
	LookAsyncCamera(var_70_string); // 0x1f5 Func
}


func_636(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x27c PushV
	var_79_string = "branch"; // 0x27d PushS
	GetVariable(var_79_string, var_78_int); // 0x27e Func
	var_80_int = 0; // 0x280 PushI
	var_81_bool = var_78_int == var_80_int; // 0x281 Eq
	if(var_81_bool == 0) goto Label_646; // 0x282 JumpB
	var_76_int = 1; // 0x283 MovI
	return 2; // 0x284 Return
	
Label_646:
	var_82_int = 1; // 0x286 PushI
	var_83_bool = var_78_int == var_82_int; // 0x287 Eq
	if(var_83_bool == 0) goto Label_651; // 0x288 JumpB
	var_76_int = 2; // 0x289 MovI
	return 2; // 0x28a Return
	
Label_651:
	var_76_int = 3; // 0x28b MovI
	return 2; // 0x28c Return
}


func_509()
{
	var_144_bool = 0; var_145_bool = 0; // 0x1fd PushV
	CameraSwitchToNormal(); // 0x1fe Func
	var_146_bool = 0; // 0x200 PushV
	func_598(var_146_bool); // 0x201 NEW_2
	if(var_146_bool == 0) goto Label_517; // 0x203 JumpB
	goto Label_525; // 0x204 Jump
	
Label_525:
	return 2; // 0x20d Return
	
Label_517:
	var_147_string = "head"; // 0x205 PushS
	HasAnimationTrack(var_145_bool, var_147_string); // 0x206 Func
	var_148_bool = var_145_bool; // 0x208 Push
	if(var_148_bool == 0) goto Label_525; // 0x209 JumpB
	var_149_string = "head"; // 0x20a PushS
	UnlookAsync(var_149_string); // 0x20b Func
}


func_575(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x23f PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x240 Or
	var_56_float = sqrt(var_57_int); // 0x241 Sqrt2
	var_58_float = 0.0; // 0x242 PushF
	var_59_bool = var_56_float < var_58_float; // 0x243 LT
	if(var_59_bool == 0) goto Label_583; // 0x244 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x245 MovV
	return 2; // 0x246 Return
	
Label_583:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x247 Div2
	return 2; // 0x248 Return
}


