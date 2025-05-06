task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xaa PushI
	if(var_12_int == 0) goto Label_300; // 0xab JumpB
	func_631(); // 0xad NEW_2
	var_14_int = 4332; // 0xaf PushI
	var_15_bool = var_11_object == var_14_int; // 0xb0 Eq
	if(var_15_bool == 0) goto Label_183; // 0xb1 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xb2 PushV
	var_16_object = var_1_object; // 0xb3 MovT
	var_17_object = var_0_object; // 0xb4 MovT
	func_687(); // 0xb5 NEW_2
	
Label_183:
	var_20_int = 4333; // 0xb7 PushI
	var_21_bool = var_11_object == var_20_int; // 0xb8 Eq
	if(var_21_bool == 0) goto Label_191; // 0xb9 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xba PushV
	var_22_object = var_1_object; // 0xbb MovT
	var_23_object = var_0_object; // 0xbc MovT
	func_693(); // 0xbd NEW_2
	
Label_191:
	var_26_int = 4331; // 0xbf PushI
	var_27_bool = var_10_bool == var_26_int; // 0xc0 Eq
	if(var_27_bool == 0) goto Label_229; // 0xc1 JumpB
	var_28_string = ""; // 0xc2 PushV
	var_28_string = "Neutral"; // 0xc3 MovS
	func_147(var_11_object, var_28_string); // 0xc4 NEW_2
	var_45_int = 503978; // 0xc6 PushI
	SetMessage(var_45_int); // 0xc7 TObjFunc
	ClearReplies(); // 0xc9 TObjFunc
	var_46_bool = 0; var_47_object = Obj(); // 0xcb PushV
	var_47_object = var_1_object; // 0xcc MovT
	func_699(var_47_object); // 0xcd NEW_2
	if(var_46_bool == 0) goto Label_213; // 0xcf JumpB
	var_54_int = 503979; // 0xd0 PushI
	var_55_int = 4336; // 0xd1 PushI
	var_56_int = 4332; // 0xd2 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xd3 TObjFunc
	
Label_213:
	var_57_bool = 0; var_58_object = Obj(); // 0xd5 PushV
	var_58_object = var_1_object; // 0xd6 MovT
	func_711(var_58_object); // 0xd7 NEW_2
	if(var_57_bool == 0) goto Label_223; // 0xd9 JumpB
	var_63_int = 503980; // 0xda PushI
	var_64_int = 4334; // 0xdb PushI
	var_65_int = 4333; // 0xdc PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xdd TObjFunc
	
Label_223:
	var_66_int = 536325; // 0xdf PushI
	var_67_int = -1; // 0xe0 PushI
	var_68_int = 38106; // 0xe1 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_69_int = 4334; // 0xe5 PushI
	var_70_bool = var_10_bool == var_69_int; // 0xe6 Eq
	if(var_70_bool == 0) goto Label_247; // 0xe7 JumpB
	var_71_string = ""; // 0xe8 PushV
	var_71_string = "Neutral"; // 0xe9 MovS
	func_147(var_11_object, var_71_string); // 0xea NEW_2
	var_72_int = 503981; // 0xec PushI
	SetMessage(var_72_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_73_int = 503982; // 0xf1 PushI
	var_74_int = -1; // 0xf2 PushI
	var_75_int = 4335; // 0xf3 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_76_int = 4336; // 0xf7 PushI
	var_77_bool = var_10_bool == var_76_int; // 0xf8 Eq
	if(var_77_bool == 0) goto Label_270; // 0xf9 JumpB
	var_78_string = ""; // 0xfa PushV
	var_78_string = "Neutral"; // 0xfb MovS
	func_147(var_11_object, var_78_string); // 0xfc NEW_2
	var_79_int = 503983; // 0xfe PushI
	SetMessage(var_79_int); // 0xff TObjFunc
	ClearReplies(); // 0x101 TObjFunc
	var_80_int = 503984; // 0x103 PushI
	var_81_int = 4338; // 0x104 PushI
	var_82_int = 4337; // 0x105 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x106 TObjFunc
	var_83_int = 503986; // 0x108 PushI
	var_84_int = -1; // 0x109 PushI
	var_85_int = 4339; // 0x10a PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_86_int = 4338; // 0x10e PushI
	var_87_bool = var_10_bool == var_86_int; // 0x10f Eq
	if(var_87_bool == 0) goto Label_288; // 0x110 JumpB
	var_88_string = ""; // 0x111 PushV
	var_88_string = "Neutral"; // 0x112 MovS
	func_147(var_11_object, var_88_string); // 0x113 NEW_2
	var_89_int = 503985; // 0x115 PushI
	SetMessage(var_89_int); // 0x116 TObjFunc
	ClearReplies(); // 0x118 TObjFunc
	var_90_int = 503987; // 0x11a PushI
	var_91_int = -1; // 0x11b PushI
	var_92_int = 4340; // 0x11c PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_3_string = 1; // 0x120 TMovB
	var_93_bool = 0; // 0x121 PushV
	func_685(var_93_bool); // 0x122 NEW_2
	if(var_93_bool == 0) goto Label_296; // 0x124 JumpB
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
	func_620(var_27_object); // 0x17a NEW_2
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
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_679(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_677(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_681(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_683(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_723(var_77_int); // 0x22 NEW_2
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
	var_152_bool = var_24_bool == 0; // 0x38 Not
	if(var_152_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_153_object = Obj(); // 0x3f PushV
	var_153_object = var_15_object; // 0x40 Mov
	func_571(); // 0x41 NEW_2
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


func_711(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x2c8 PushV
	var_125_string = "ood6Littlegirl2"; // 0x2c9 MovS
	func_648(var_124_int, var_125_string); // 0x2ca NEW_2
	var_126_int = 0; // 0x2cc PushI
	var_127_bool = var_124_int == var_126_int; // 0x2cd Eq
	if(var_127_bool == 0) goto Label_721; // 0x2ce JumpB
	var_122_bool = 1; // 0x2cf MovB
	return 0; // 0x2d0 Return
	
Label_721:
	var_122_bool = 0; // 0x2d1 MovB
	return 0; // 0x2d2 Return
}


func_648(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0; // 0x288 PushV
	GetVariable(var_114_string, var_116_int); // 0x289 Func
	var_113_int = var_116_int; // 0x28b Mov
	return 2; // 0x28c Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_117; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_147(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 503978; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_699(var_112_object); // 0x5b NEW_2
	if(var_111_bool == 0) goto Label_99; // 0x5d JumpB
	var_119_int = 503979; // 0x5e PushI
	var_120_int = 4336; // 0x5f PushI
	var_121_int = 4332; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	
Label_99:
	var_122_bool = 0; var_123_object = Obj(); // 0x63 PushV
	var_123_object = var_1_object; // 0x64 MovT
	func_711(var_123_object); // 0x65 NEW_2
	if(var_122_bool == 0) goto Label_109; // 0x67 JumpB
	var_128_int = 503980; // 0x68 PushI
	var_129_int = 4334; // 0x69 PushI
	var_130_int = 4333; // 0x6a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x6b TObjFunc
	
Label_109:
	var_131_int = 536325; // 0x6d PushI
	var_132_int = -1; // 0x6e PushI
	var_133_int = 38106; // 0x6f PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x70 TObjFunc
	goto Label_117; // 0x72 Jump
	
Label_117:
	var_134_bool = 0; // 0x75 PushV
	func_685(var_134_bool); // 0x76 NEW_2
	if(var_134_bool == 0) goto Label_132; // 0x78 JumpB
	
Label_121:
	lshWaitForAnimEnd(); // 0x79 Func
	var_135_string = var_3_string; // 0x7b PushT
	if(var_135_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_131:
	goto Label_146; // 0x83 Jump
	
Label_146:
	return 0; // 0x92 Return
	
Label_126:
	var_136_string = ""; // 0x7e PushV
	var_136_string = var_2_object; // 0x7f MovT
	func_589(var_136_string); // 0x80 NEW_2
	goto Label_121; // 0x82 Jump
	
Label_132:
	var_147_string = "all"; // 0x84 PushS
	var_148_string = "idle"; // 0x85 PushS
	PlayAnimation(var_147_string, var_148_string); // 0x86 Func
	
Label_136:
	WaitForAnimEnd(); // 0x88 Func
	var_149_string = var_3_string; // 0x8a PushT
	if(var_149_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_141:
	var_150_string = "all"; // 0x8d PushS
	var_151_string = "idle"; // 0x8e PushS
	PlayAnimation(var_150_string, var_151_string); // 0x8f Func
	goto Label_136; // 0x91 Jump
}


func_653(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x28d PushV
	var_46_string = "idle"; // 0x28e MovS
	var_47_int = var_44_int; // 0x28f Push
	if(var_47_int == 0) goto Label_658; // 0x290 JumpB
	var_46_string = var_46_string + var_44_int; // 0x291 Add2
	
Label_658:
	var_43_string = var_46_string; // 0x292 Mov
	return 2; // 0x293 Return
}


func_589(var_136_string)
{
	var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_bool = 0; var_141_float = 0; var_142_float = 0; // 0x24d PushV
	lshHasAnimation(var_140_bool, var_136_string); // 0x24e Func
	var_143_bool = var_140_bool; // 0x250 Push
	if(var_143_bool == 0) goto Label_600; // 0x251 JumpB
	lshGetAnimTimes(var_136_string, var_141_float, var_142_float); // 0x252 Func
	var_144_bool = 0; // 0x254 PushB
	lshPlayAnimation(var_141_float, var_142_float, var_144_bool); // 0x255 Func
	goto Label_604; // 0x257 Jump
	
Label_604:
	return 6; // 0x25c Return
	
Label_600:
	var_145_string = "Can't find lsh animation : "; // 0x258 PushS
	var_146_int = var_145_string + var_136_string; // 0x259 Add
	Trace(var_146_int); // 0x25a Func
}


func_147(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x94 PushV
	func_685(var_94_bool); // 0x95 NEW_2
	var_95_bool = var_94_bool == 0; // 0x97 Not
	if(var_95_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_96_bool = var_93_string == var_2_object; // 0x9a Eq
	if(var_96_bool == 0) goto Label_157; // 0x9b JumpB
	return 0; // 0x9c Return
	
Label_157:
	var_97_string = ""; var_98_bool = 0; // 0x9d PushV
	var_97_string = var_93_string; // 0x9e Mov
	var_99_string = ""; // 0x9f PushS
	var_100_bool = var_93_string == var_99_string; // 0xa0 Eq
	if(var_100_bool == 0) goto Label_164; // 0xa1 JumpB
	var_98_bool = 0; // 0xa2 MovB
	goto Label_165; // 0xa3 Jump
	
Label_165:
	func_605(var_97_string, var_98_bool); // 0xa5 NEW_2
	var_2_object = var_93_string; // 0xa7 TMov
	return 0; // 0xa8 Return
	
Label_164:
	var_98_bool = 1; // 0xa4 MovB
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
	func_660(var_37_int); // 0x19d NEW_2
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
	func_653(var_59_string, var_60_int); // 0x1b9 NEW_2
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


func_660(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x294 PushV
	var_40_int = 0; // 0x295 MovI
	
Label_662:
	var_42_string = "all"; // 0x296 PushS
	var_43_string = ""; var_44_int = 0; // 0x297 PushV
	var_44_int = var_40_int; // 0x298 Mov
	func_653(var_43_string, var_44_int); // 0x299 NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x29b Func
	var_48_bool = var_41_bool == 0; // 0x29d Not
	if(var_48_bool == 0) goto Label_672; // 0x29e JumpB
	goto Label_675; // 0x29f Jump
	
Label_675:
	var_37_int = var_40_int; // 0x2a3 Mov
	return 4; // 0x2a4 Return
	
Label_672:
	var_49_int = 1; // 0x2a0 PushI
	var_40_int = var_40_int + var_49_int; // 0x2a1 Add2
	goto Label_662; // 0x2a2 Jump
}


func_723(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x2d3 PushV
	var_80_string = "branch"; // 0x2d4 PushS
	GetVariable(var_80_string, var_79_int); // 0x2d5 Func
	var_81_int = 0; // 0x2d7 PushI
	var_82_bool = var_79_int == var_81_int; // 0x2d8 Eq
	if(var_82_bool == 0) goto Label_733; // 0x2d9 JumpB
	var_77_int = 1; // 0x2da MovI
	return 2; // 0x2db Return
	
Label_733:
	var_83_int = 1; // 0x2dd PushI
	var_84_bool = var_79_int == var_83_int; // 0x2de Eq
	if(var_84_bool == 0) goto Label_738; // 0x2df JumpB
	var_77_int = 2; // 0x2e0 MovI
	return 2; // 0x2e1 Return
	
Label_738:
	var_77_int = 3; // 0x2e2 MovI
	return 2; // 0x2e3 Return
}


func_605(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x25d PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x25e Func
	var_107_bool = var_104_bool; // 0x260 Push
	if(var_107_bool == 0) goto Label_615; // 0x261 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x262 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x264 Func
	goto Label_619; // 0x266 Jump
	
Label_619:
	return 6; // 0x26b Return
	
Label_615:
	var_108_string = "Can't find lsh animation : "; // 0x267 PushS
	var_109_int = var_108_string + var_97_string; // 0x268 Add
	Trace(var_109_int); // 0x269 Func
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


func_484()
{
	StopAnimation(); // 0x1e4 Func
	StopGroup0(); // 0x1e6 Func
	return 0; // 0x1e8 Return
}


func_677(var_74_int)
{
	var_74_int = 515561; // 0x2a5 MovI
	return 0; // 0x2a6 Return
}


func_679(var_73_int)
{
	var_73_int = 503346; // 0x2a7 MovI
	return 0; // 0x2a8 Return
}


func_681(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png"; // 0x2a9 MovS
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


func_683(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png"; // 0x2ab MovS
	return 0; // 0x2ac Return
}


func_620(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x26c PushV
	GetEyesHeight(var_30_float); // 0x26d ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x26f MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x270 PushE
	var_32_float = var_30_float; // 0x271 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x272 PopE
	var_33_string = "head"; // 0x273 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x274 Func
	return 4; // 0x276 Return
}


func_685(var_68_bool)
{
	var_68_bool = 0; // 0x2ad MovB
	return 0; // 0x2ae Return
}


func_687()
{
	var_18_string = "ood6Littlegirl1"; // 0x2b0 PushS
	var_19_int = 1; // 0x2b1 PushI
	SetVariable(var_18_string, var_19_int); // 0x2b2 Func
	return 0; // 0x2b4 Return
}


func_497(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1f1 PushV
	IsLoaded(var_16_bool); // 0x1f2 Func
	var_14_bool = var_16_bool; // 0x1f4 Mov
	return 2; // 0x1f5 Return
}


func_693()
{
	var_24_string = "ood6Littlegirl2"; // 0x2b6 PushS
	var_25_int = 1; // 0x2b7 PushI
	SetVariable(var_24_string, var_25_int); // 0x2b8 Func
	return 0; // 0x2ba Return
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
	func_638(var_52_cvector, var_53_cvector); // 0x211 NEW_2
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
	var_65_bool = 1; // 0x221 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x222 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x224 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x225 PushE
	Rotate(var_66_float, var_67_float); // 0x226 Func
	var_68_bool = 0; // 0x228 PushV
	func_685(var_68_bool); // 0x229 NEW_2
	if(var_68_bool == 0) goto Label_557; // 0x22b JumpB
	goto Label_565; // 0x22c Jump
	
Label_565:
	CameraWaitForPlayFinish(); // 0x235 Func
	ResumeWorld(); // 0x237 Func
	var_25_bool = 1; // 0x239 MovB
	return 18; // 0x23a Return
	
Label_557:
	var_69_string = "head"; // 0x22d PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x22e Func
	var_70_bool = var_45_bool; // 0x230 Push
	if(var_70_bool == 0) goto Label_565; // 0x231 JumpB
	var_71_string = "head"; // 0x232 PushS
	LookAsyncCamera(var_71_string); // 0x233 Func
}


func_631()
{
	var_13_bool = 0; // 0x277 PushV
	func_685(var_13_bool); // 0x278 NEW_2
	if(var_13_bool == 0) goto Label_637; // 0x27a JumpB
	lshStopSpeech(); // 0x27b Func
	
Label_637:
	return 0; // 0x27d Return
}


func_571()
{
	var_154_bool = 0; var_155_bool = 0; // 0x23b PushV
	var_156_bool = 1; // 0x23c PushB
	CameraSwitchToNormal(var_156_bool); // 0x23d Func
	var_157_bool = 0; // 0x23f PushV
	func_685(var_157_bool); // 0x240 NEW_2
	if(var_157_bool == 0) goto Label_580; // 0x242 JumpB
	goto Label_588; // 0x243 Jump
	
Label_588:
	return 2; // 0x24c Return
	
Label_580:
	var_158_string = "head"; // 0x244 PushS
	HasAnimationTrack(var_155_bool, var_158_string); // 0x245 Func
	var_159_bool = var_155_bool; // 0x247 Push
	if(var_159_bool == 0) goto Label_588; // 0x248 JumpB
	var_160_string = "head"; // 0x249 PushS
	UnlookAsync(var_160_string); // 0x24a Func
}


func_699(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x2bc PushV
	var_114_string = "ood6Littlegirl1"; // 0x2bd MovS
	func_648(var_113_int, var_114_string); // 0x2be NEW_2
	var_117_int = 0; // 0x2c0 PushI
	var_118_bool = var_113_int == var_117_int; // 0x2c1 Eq
	if(var_118_bool == 0) goto Label_709; // 0x2c2 JumpB
	var_111_bool = 1; // 0x2c3 MovB
	return 0; // 0x2c4 Return
	
Label_709:
	var_111_bool = 0; // 0x2c5 MovB
	return 0; // 0x2c6 Return
}


func_638(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x27e PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x27f Or
	var_56_float = sqrt(var_57_int); // 0x280 Sqrt2
	var_58_float = 0.0; // 0x281 PushF
	var_59_bool = var_56_float < var_58_float; // 0x282 LT
	if(var_59_bool == 0) goto Label_646; // 0x283 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x284 MovV
	return 2; // 0x285 Return
	
Label_646:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x286 Div2
	return 2; // 0x287 Return
}


