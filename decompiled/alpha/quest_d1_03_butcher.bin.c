task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object)
{
	var_15_int = 1; // 0x8a PushI
	if(var_15_int == 0) goto Label_178; // 0x8b JumpB
	func_1340(); // 0x8d Call
	var_17_int = 5801; // 0x8f PushI
	var_18_bool = var_13_bool == var_17_int; // 0x90 Eq
	if(var_18_bool == 0) goto Label_166; // 0x91 JumpB
	var_19_string = ""; // 0x92 PushV
	var_19_string = "Neutral"; // 0x93 MovS
	func_121(var_14_object, var_19_string); // 0x94 Call
	var_34_int = 5264; // 0x96 PushI
	SetMessage(var_34_int); // 0x97 TObjFunc
	ClearReplies(); // 0x99 TObjFunc
	var_35_int = 5265; // 0x9b PushI
	var_36_int = -1; // 0x9c PushI
	var_37_int = 5802; // 0x9d PushI
	AddReply(var_35_int, var_36_int, var_37_int); // 0x9e TObjFunc
	var_38_int = 6042; // 0xa0 PushI
	var_39_int = -1; // 0xa1 PushI
	var_40_int = 6665; // 0xa2 PushI
	AddReply(var_38_int, var_39_int, var_40_int); // 0xa3 TObjFunc
	return 0; // 0xa5 Return
	
Label_166:
	var_3_string = 1; // 0xa6 TMovB
	var_41_bool = 0; // 0xa7 PushV
	func_1408(var_41_bool); // 0xa8 Call
	if(var_41_bool == 0) goto Label_174; // 0xaa JumpB
	lshStopAnimation(); // 0xab Func
	goto Label_176; // 0xad Jump
	
Label_176:
	return 0; // 0xb0 Return
	
Label_174:
	StopAnimation(); // 0xae Func
	
Label_178:
	return 0; // 0xb2 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_object = Obj(); // 0xbc PushV
	var_15_object = var_13_object; // 0xbd Mov
	TaskCall(0); // 0xbe TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0xbf Call
	TaskReturn(); // 0xc0 TaskReturn
	TaskCall(3); // 0xc3 TaskCall
	func_228(); // 0xc4 Call
	TaskReturn(); // 0xc5 TaskReturn
	return 0; // 0xc7 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0xc8 PushV
	IsPlayerActor(var_13_object, var_15_bool); // 0xc9 Func
	var_16_bool = var_15_bool; // 0xcb Push
	if(var_16_bool == 0) goto Label_210; // 0xcc JumpB
	TaskCall(3); // 0xce TaskCall
	func_228(); // 0xcf Call
	TaskReturn(); // 0xd0 TaskReturn
	
Label_210:
	return 2; // 0xd2 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0xd3 PushV
	var_16_string = "cleanup"; // 0xd4 PushS
	var_17_bool = var_13_object == var_16_string; // 0xd5 Eq
	if(var_17_bool == 0) goto Label_222; // 0xd6 JumpB
	var_0_object = 1; // 0xd7 TMovB
	IsLoaded(var_15_bool); // 0xd8 Func
	var_18_bool = var_15_bool == 0; // 0xda Not
	if(var_18_bool == 0) goto Label_222; // 0xdb JumpB
	SetDeathStateAndRemove(); // 0xdc Func
	
Label_222:
	return 2; // 0xde Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_object = var_0_object; // 0xdf PushT
	if(var_13_object == 0) goto Label_227; // 0xe0 JumpB
	SetDeathStateAndRemove(); // 0xe1 Func
	
Label_227:
	return 0; // 0xe3 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	func_1410(); // 0xff Call
	Hold(); // 0x101 Func
	return 0; // 0x103 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	func_1410(); // 0x2f0 Call
	Hold(); // 0x2f2 Func
	return 0; // 0x2f4 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_int)
{
	var_14_int = 0; // 0x35c PushI
	var_15_bool = var_13_int != var_14_int; // 0x35d Neq
	if(var_15_bool == 0) goto Label_864; // 0x35e JumpB
	return 0; // 0x35f Return
	
Label_864:
	var_16_bool = 0; var_17_object = Obj(); // 0x360 PushV
	var_17_object = var_1_object; // 0x361 MovT
	func_897(var_16_bool, var_17_object); // 0x362 Call
	var_52_bool = var_16_bool == 0; // 0x364 Not
	if(var_52_bool == 0) goto Label_871; // 0x365 JumpB
	var_0_object = 1; // 0x366 TMovB
	
Label_871:
	var_53_int = 0; // 0x367 PushI
	KillTimer(var_53_int); // 0x368 Func
	Stop(); // 0x36a Func
	return 0; // 0x36c Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object)
{
	RequestClearPath(var_13_object); // 0x36e Func
	return 0; // 0x370 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object)
{
	func_881(var_13_object); // 0x37a Call
	var_15_object = Obj(); // 0x37c PushV
	var_15_object = var_13_object; // 0x37d Mov
	func_1452(); // 0x37e Call
	return 0; // 0x380 Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	SetDeathStateAndRemove(); // 0x38c Func
	return 0; // 0x38e Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_float, var_16_float)
{
	return 0; // 0x406 Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_string)
{
	return 0; // 0x408 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object)
{
	return 0; // 0x40a Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; // 0x598 PushV
	var_17_object = var_13_object; // 0x599 Mov
	var_18_int = var_14_int; // 0x59a Mov
	var_19_float = var_15_float; // 0x59b Mov
	func_1184(var_18_int, var_19_float); // 0x59c Call
	return 0; // 0x59e Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_string)
{
	var_15_float = 0; var_16_float = 0; // 0x59f PushV
	var_17_string = "health"; // 0x5a0 PushS
	var_18_bool = var_14_string == var_17_string; // 0x5a1 Eq
	if(var_18_bool == 0) goto Label_1451; // 0x5a2 JumpB
	var_19_string = "health"; // 0x5a3 PushS
	GetProperty(var_19_string, var_16_float); // 0x5a4 Func
	var_20_int = 0; // 0x5a6 PushI
	var_21_bool = var_16_float <= var_20_int; // 0x5a7 LE
	if(var_21_bool == 0) goto Label_1451; // 0x5a8 JumpB
	SignalDeath(var_13_object); // 0x5a9 Func
	
Label_1451:
	return 2; // 0x5ab Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object)
{
	var_14_object = Obj(); // 0x5ad PushV
	var_14_object = var_13_object; // 0x5ae Mov
	func_1418(var_14_object); // 0x5af Call
	return 0; // 0x5b1 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_0_object = 0; // 0xb3 TMovB
	var_13_bool = 1; // 0xb4 PushB
	SensePlayerOnly(var_13_bool); // 0xb5 Func
	
Label_183:
	Hold(); // 0xb7 Func
	goto Label_183; // 0xb9 Jump
}


func_1408(var_85_bool)
{
	var_85_bool = 0; // 0x580 MovB
	return 0; // 0x581 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	func_1262(var_26_object); // 0x4 Call
	var_65_bool = var_25_bool == 0; // 0x6 Not
	if(var_65_bool == 0) goto Label_10; // 0x7 JumpB
	var_14_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_21_object); // 0xa Func
	var_66_int = 0; // 0xc PushV
	func_1404(var_66_int); // 0xd Call
	SetNPCName(var_66_int); // 0xf ObjFunc
	var_67_string = ""; // 0x11 PushV
	func_1406(var_67_string); // 0x12 Call
	SetPhoto(var_67_string); // 0x14 ObjFunc
	var_68_int = 0; // 0x16 PushV
	func_1387(var_68_int); // 0x17 Call
	SetPlayerName(var_68_int); // 0x19 ObjFunc
	var_23_int = -1; // 0x1b MovI
	IsOverrideActive(var_22_bool); // 0x1c Func
	var_76_bool = var_22_bool; // 0x1e Push
	if(var_76_bool == 0) goto Label_34; // 0x1f JumpB
	var_14_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_21_object); // 0x22 Func
	var_77_object = Obj(); var_78_object = Obj(); // 0x24 PushV
	var_77_object = var_15_object; // 0x25 Mov
	var_78_object = var_21_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_24_bool); // 0x2b ObjFunc
	
Label_45:
	var_114_bool = var_24_bool == 0; // 0x2d Not
	if(var_114_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_24_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_115_object = Obj(); // 0x34 PushV
	var_115_object = var_15_object; // 0x35 Mov
	func_1318(); // 0x36 Call
	StopDialog(var_21_object); // 0x38 Func
	GetReturnValue(var_23_int); // 0x3a ObjFunc
	var_14_int = var_23_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_1410()
{
	SetDeathStateAndRemove(); // 0x582 Func
	var_13_bool = 0; var_14_string = ""; var_15_string = ""; // 0x584 PushV
	var_14_string = "quest_d1_03"; // 0x585 MovS
	var_15_string = "butcher_fail"; // 0x586 MovS
	func_1375(var_13_bool, var_14_string, var_15_string); // 0x587 Call
	return 0; // 0x589 Return
}


func_897(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x382 PushV
	var_19_object = var_17_object; // 0x383 Mov
	func_1160(var_18_bool, var_19_object); // 0x384 Call
	var_16_bool = var_18_bool; // 0x385 Mov
	return 0; // 0x387 Return
}


func_260(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_31_object, var_32_bool, var_33_float, var_120_bool)
{
	var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_float = 0; var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_float = 0; var_53_float = 0; // 0x104 PushV
	var_1_object = 0; // 0x105 TMovI
	
Label_262:
	var_54_string = "all"; // 0x106 PushS
	var_55_string = "attack_begin"; // 0x107 PushS
	var_56_int = 1; // 0x108 PushI
	var_57_int = var_1_object + var_56_int; // 0x109 Add
	var_58_int = var_55_string + var_57_int; // 0x10a Add
	HasAnimation(var_44_bool, var_54_string, var_58_int); // 0x10b Func
	var_59_bool = var_44_bool == 0; // 0x10d Not
	if(var_59_bool == 0) goto Label_272; // 0x10e JumpB
	goto Label_275; // 0x10f Jump
	
Label_275:
	var_2_object = 0; // 0x113 TMovI
	
Label_276:
	var_60_string = "attack"; // 0x114 PushS
	var_61_int = 1; // 0x115 PushI
	var_62_int = var_2_object + var_61_int; // 0x116 Add
	var_63_int = var_60_string + var_62_int; // 0x117 Add
	IsExisting3DSound(var_45_bool, var_63_int); // 0x118 Func
	var_64_bool = var_45_bool == 0; // 0x11a Not
	if(var_64_bool == 0) goto Label_285; // 0x11b JumpB
	goto Label_288; // 0x11c Jump
	
Label_288:
	var_4_bool = 0; // 0x120 TMovI
	var_65_string = "@GetAttackDistance"; // 0x121 PushS
	var_66_int = 1; // 0x122 PushI
	var_67_bool = IsFuncExist(var_31_object, var_65_string, var_66_int); // 0x123 FuncExist
	if(var_67_bool == 0) goto Label_298; // 0x124 JumpB
	GetAttackDistance(var_46_float); // 0x125 ObjFunc
	var_68_int = 50; // 0x127 PushI
	var_46_float = var_46_float + var_68_int; // 0x128 Add2
	goto Label_299; // 0x129 Jump
	
Label_299:
	var_69_int = 150; // 0x12b PushI
	var_70_bool = var_46_float >= var_69_int; // 0x12c GE
	if(var_70_bool == 0) goto Label_303; // 0x12d JumpB
	var_46_float = 150; // 0x12e MovI
	
Label_303:
	var_3_string = 0; // 0x12f TMovB
	var_0_object = var_31_object; // 0x130 TMov
	IsPlayerActor(var_0_object, var_49_bool); // 0x131 Func
	var_71_bool = var_32_bool; // 0x133 Push
	if(var_71_bool == 0) goto Label_311; // 0x134 JumpB
	var_50_bool = 0; // 0x135 MovB
	goto Label_312; // 0x136 Jump
	
Label_312:
	var_72_bool = 0; // 0x138 PushV
	var_72_bool = 0; // 0x139 MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x13a PushV
	var_74_object = var_0_object; // 0x13b MovT
	func_1160(var_73_bool, var_74_object); // 0x13c Call
	if(var_73_bool == 0) goto Label_322; // 0x13e JumpB
	var_107_bool = var_3_string == 0; // 0x13f Not
	if(var_107_bool == 0) goto Label_322; // 0x140 JumpB
	var_72_bool = 1; // 0x141 MovB
	
Label_322:
	if(var_72_bool == 0) goto Label_448; // 0x142 JumpB
	GetPFPosition(var_47_cvector); // 0x143 TObjFunc
	GetPFPosition(var_48_cvector); // 0x145 Func
	var_51_cvector = var_47_cvector - var_48_cvector; // 0x147 Sub2
	var_52_float = var_51_cvector | var_51_cvector; // 0x148 Or2
	var_108_float = 400.0; // 0x149 PushF
	var_109_int = var_108_float + var_46_float; // 0x14a Add
	var_110_float = 400.0; // 0x14b PushF
	var_111_int = var_110_float + var_46_float; // 0x14c Add
	var_112_float = var_109_int * var_111_int; // 0x14d Mult
	var_113_bool = var_52_float >= var_112_float; // 0x14e GE
	if(var_113_bool == 0) goto Label_351; // 0x14f JumpB
	var_114_bool = 0; var_115_object = Obj(); var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_bool = 0; // 0x150 PushV
	var_115_object = var_0_object; // 0x151 MovT
	var_116_float = var_46_float; // 0x152 Mov
	var_117_float = 3000.0; // 0x153 MovF
	var_118_bool = 1; // 0x154 MovB
	var_119_bool = 0; // 0x155 MovB
	TaskCall(4); // 0x156 TaskCall
	func_757(var_120_bool, var_121_object, var_114_bool, var_115_object, var_116_float, var_117_float, var_118_bool, var_119_bool); // 0x157 Call
	TaskReturn(); // 0x158 TaskReturn
	var_167_bool = var_120_bool == 0; // 0x15a Not
	if(var_167_bool == 0) goto Label_349; // 0x15b JumpB
	goto Label_448; // 0x15c Jump
	
Label_448:
	WaitForAnimEnd(); // 0x1c0 Func
	var_168_string = var_3_string; // 0x1c2 PushT
	if(var_168_string == 0) goto Label_453; // 0x1c3 JumpB
	return 20; // 0x1c4 Return
	
Label_453:
	var_169_string = "all"; // 0x1c5 PushS
	var_170_string = "attack_off"; // 0x1c6 PushS
	PlayAnimation(var_169_string, var_170_string); // 0x1c7 Func
	WaitForAnimEnd(); // 0x1c9 Func
	var_171_bool = var_49_bool; // 0x1cb Push
	if(var_171_bool == 0) goto Label_464; // 0x1cc JumpB
	var_172_float = 2.0; // 0x1cd PushF
	Sleep(var_172_float); // 0x1ce Func
	
Label_464:
	return 20; // 0x1d0 Return
	
Label_349:
	var_50_bool = 0; // 0x15d MovB
	goto Label_447; // 0x15e Jump
	
Label_447:
	goto Label_312; // 0x1bf Jump
	
Label_351:
	var_173_float = var_33_float * var_33_float; // 0x15f Mult
	var_174_bool = var_52_float >= var_173_float; // 0x160 GE
	if(var_174_bool == 0) goto Label_439; // 0x161 JumpB
	var_175_bool = var_50_bool == 0; // 0x162 Not
	if(var_175_bool == 0) goto Label_369; // 0x163 JumpB
	var_176_object = Obj(); // 0x164 PushV
	var_176_object = var_0_object; // 0x165 MovT
	func_1251(); // 0x166 Call
	var_185_string = "all"; // 0x168 PushS
	var_186_string = "attack_on"; // 0x169 PushS
	PlayAnimation(var_185_string, var_186_string); // 0x16a Func
	WaitForAnimEnd(); // 0x16c Func
	StopAsync(); // 0x16e Func
	var_50_bool = 1; // 0x170 MovB
	
Label_369:
	rand(var_53_float); // 0x171 Func
	var_187_bool = 0; // 0x173 PushV
	var_187_bool = 1; // 0x174 MovB
	var_188_float = 0.6; // 0x175 PushF
	var_189_bool = var_53_float < var_188_float; // 0x176 LT
	if(var_189_bool == 0) goto Label_381; // 0x177 JumpB
	var_190_bool = 0; // 0x178 PushV
	func_700(var_187_bool, var_190_bool); // 0x179 Call
	if(var_190_bool == 0) goto Label_381; // 0x17b JumpB
	var_187_bool = 0; // 0x17c MovB
	
Label_381:
	if(var_187_bool == 0) goto Label_395; // 0x17d JumpB
	Face(var_0_object); // 0x17e Func
	var_196_string = "all"; // 0x180 PushS
	var_197_string = "attack_stay"; // 0x181 PushS
	PlayAnimation(var_196_string, var_197_string); // 0x182 Func
	var_198_bool = 0; var_199_float = 0; // 0x184 PushV
	var_199_float = var_33_float; // 0x185 Mov
	func_608(var_53_float, var_198_bool, var_199_float); // 0x186 Call
	StopAsync(); // 0x188 Func
	goto Label_438; // 0x18a Jump
	
Label_438:
	goto Label_447; // 0x1b6 Jump
	
Label_395:
	Face(var_0_object); // 0x18b Func
	var_365_string = "all"; // 0x18d PushS
	var_366_string = "fjump"; // 0x18e PushS
	PlayAnimation(var_365_string, var_366_string); // 0x18f Func
	WaitForAnimEnd(); // 0x191 Func
	var_367_cvector = CVector(0.0, 0.0, 0.0); // 0x193 PushVec
	SetSpeed(var_367_cvector); // 0x194 Func
	Stop(); // 0x196 Func
	StopAsync(); // 0x198 Func
	var_368_bool = 0; // 0x19a PushV
	func_700(var_53_float, var_368_bool); // 0x19b Call
	var_369_bool = var_368_bool == 0; // 0x19d Not
	if(var_369_bool == 0) goto Label_438; // 0x19e JumpB
	var_370_bool = 0; var_371_object = Obj(); // 0x19f PushV
	var_371_object = var_0_object; // 0x1a0 MovT
	func_1160(var_370_bool, var_371_object); // 0x1a1 Call
	var_372_bool = var_370_bool == 0; // 0x1a3 Not
	if(var_372_bool == 0) goto Label_422; // 0x1a4 JumpB
	goto Label_448; // 0x1a5 Jump
	
Label_422:
	GetPFPosition(var_47_cvector); // 0x1a6 TObjFunc
	GetPFPosition(var_48_cvector); // 0x1a8 Func
	var_51_cvector = var_47_cvector - var_48_cvector; // 0x1aa Sub2
	var_52_float = var_51_cvector | var_51_cvector; // 0x1ab Or2
	var_373_float = var_33_float * var_33_float; // 0x1ac Mult
	var_374_bool = var_52_float < var_373_float; // 0x1ad LT
	if(var_374_bool == 0) goto Label_438; // 0x1ae JumpB
	var_375_bool = 0; var_376_float = 0; // 0x1af PushV
	var_376_float = var_33_float; // 0x1b0 Mov
	func_504(var_53_float, var_375_bool, var_376_float); // 0x1b1 Call
	var_377_bool = var_375_bool == 0; // 0x1b3 Not
	if(var_377_bool == 0) goto Label_438; // 0x1b4 JumpB
	goto Label_448; // 0x1b5 Jump
	
Label_439:
	var_378_bool = 0; var_379_float = 0; // 0x1b7 PushV
	var_379_float = var_33_float; // 0x1b8 Mov
	func_504(var_53_float, var_378_bool, var_379_float); // 0x1b9 Call
	var_380_bool = var_378_bool == 0; // 0x1bb Not
	if(var_380_bool == 0) goto Label_446; // 0x1bc JumpB
	goto Label_448; // 0x1bd Jump
	
Label_446:
	var_50_bool = 1; // 0x1be MovB
	
Label_311:
	var_50_bool = 1; // 0x137 MovB
	
Label_298:
	var_46_float = var_33_float; // 0x12a Mov
	
Label_285:
	var_381_int = 1; // 0x11d PushI
	var_2_object = var_2_object + var_381_int; // 0x11e Add2
	goto Label_276; // 0x11f Jump
	
Label_272:
	var_382_int = 1; // 0x110 PushI
	var_1_object = var_1_object + var_382_int; // 0x111 Add2
	goto Label_262; // 0x112 Jump
}


func_1160(var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0; // 0x488 PushV
	var_22_bool = 0; var_23_object = Obj(); // 0x489 PushV
	var_23_object = var_19_object; // 0x48a Mov
	func_1124(var_22_bool, var_23_object); // 0x48b Call
	var_39_bool = var_22_bool == 0; // 0x48d Not
	if(var_39_bool == 0) goto Label_1169; // 0x48e JumpB
	var_18_bool = 0; // 0x48f MovB
	return 2; // 0x490 Return
	
Label_1169:
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; // 0x491 PushV
	var_41_object = var_19_object; // 0x492 Mov
	var_42_string = "noaccess"; // 0x493 MovS
	func_1043(var_40_bool, var_41_object, var_42_string); // 0x494 Call
	var_49_bool = var_40_bool == 0; // 0x496 Not
	if(var_49_bool == 0) goto Label_1178; // 0x497 JumpB
	var_18_bool = 1; // 0x498 MovB
	return 2; // 0x499 Return
	
Label_1178:
	var_50_string = "noaccess"; // 0x49a PushS
	GetProperty(var_50_string, var_21_int); // 0x49b ObjFunc
	var_51_int = 0; // 0x49d PushI
	var_18_bool = var_21_int == var_51_int; // 0x49e Eq2
	return 2; // 0x49f Return
}


func_648(var_0_object, var_211_bool)
{
	var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_float = 0; var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_float = 0; var_221_float = 0; // 0x288 PushV
	var_222_bool = 0; var_223_object = Obj(); // 0x289 PushV
	var_223_object = var_0_object; // 0x28a MovT
	func_1160(var_222_bool, var_223_object); // 0x28b Call
	var_224_bool = var_222_bool == 0; // 0x28d Not
	if(var_224_bool == 0) goto Label_657; // 0x28e JumpB
	var_211_bool = 0; // 0x28f MovB
	return 10; // 0x290 Return
	
Label_657:
	var_225_bool = 0; // 0x291 PushV
	func_700(var_221_float, var_225_bool); // 0x292 Call
	if(var_225_bool == 0) goto Label_679; // 0x294 JumpB
	GetPFPosition(var_217_cvector); // 0x295 TObjFunc
	GetPFPosition(var_218_cvector); // 0x297 Func
	var_219_cvector = var_217_cvector - var_218_cvector; // 0x299 Sub2
	var_220_float = var_219_cvector | var_219_cvector; // 0x29a Or2
	GetAttackDistance(var_221_float); // 0x29b TObjFunc
	var_226_int = 50; // 0x29d PushI
	var_221_float = var_221_float + var_226_int; // 0x29e Add2
	var_227_float = var_221_float * var_221_float; // 0x29f Mult
	var_228_bool = var_220_float <= var_227_float; // 0x2a0 LE
	if(var_228_bool == 0) goto Label_679; // 0x2a1 JumpB
	func_681(var_221_float); // 0x2a3 Call
	var_211_bool = 1; // 0x2a5 MovB
	return 10; // 0x2a6 Return
	
Label_679:
	var_211_bool = 0; // 0x2a7 MovB
	return 10; // 0x2a8 Return
}


func_904(var_156_string)
{
	var_156_string = "walk"; // 0x388 MovS
	return 0; // 0x389 Return
}


func_906(var_157_string)
{
	var_157_string = "run"; // 0x38a MovS
	return 0; // 0x38b Return
}


func_1035(var_312_string, var_313_int)
{
	var_314_int = 1; // 0x40c PushI
	var_315_bool = var_313_int == var_314_int; // 0x40d Eq
	if(var_315_bool == 0) goto Label_1041; // 0x40e JumpB
	var_312_string = "fire"; // 0x40f MovS
	return 0; // 0x410 Return
	
Label_1041:
	var_312_string = "phys"; // 0x411 MovS
	return 0; // 0x412 Return
}


func_1418(var_14_object)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x58b PushV
	var_16_string = "quest_d1_03"; // 0x58c MovS
	var_17_string = "butcher_death"; // 0x58d MovS
	func_1375(var_15_bool, var_16_string, var_17_string); // 0x58e Call
	var_21_object = Obj(); // 0x590 PushV
	var_21_object = var_14_object; // 0x591 Mov
	TaskCall(5); // 0x592 TaskCall
	func_911(var_21_object); // 0x593 Call
	TaskReturn(); // 0x594 TaskReturn
	return 0; // 0x596 Return
}


func_911(var_21_object)
{
	var_22_object = Obj(); // 0x390 PushV
	var_22_object = var_21_object; // 0x391 Mov
	func_920(var_22_object); // 0x392 Call
	
Label_916:
	Hold(); // 0x394 Func
	goto Label_916; // 0x396 Jump
}


func_1043(var_40_bool, var_41_object, var_42_string)
{
	var_43_bool = 0; var_44_bool = 0; // 0x413 PushV
	var_45_string = "HasProperty"; // 0x414 PushS
	var_46_int = 2; // 0x415 PushI
	var_47_bool = IsFuncExist(var_41_object, var_45_string, var_46_int); // 0x416 FuncExist
	var_48_bool = var_47_bool == 0; // 0x417 Not
	if(var_48_bool == 0) goto Label_1051; // 0x418 JumpB
	var_40_bool = 0; // 0x419 MovB
	return 2; // 0x41a Return
	
Label_1051:
	HasProperty(var_42_string, var_44_bool); // 0x41b ObjFunc
	var_40_bool = var_44_bool; // 0x41d Mov
	return 2; // 0x41e Return
}


func_920(var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); // 0x398 PushV
	var_43_bool = var_22_object == 0; // 0x399 NullEq
	if(var_43_bool == 0) goto Label_928; // 0x39a JumpB
	var_44_string = ""; // 0x39b PushV
	var_44_string = "fdie"; // 0x39c MovS
	func_1007(var_44_string); // 0x39d Call
	goto Label_1006; // 0x39f Jump
	
Label_1006:
	return 20; // 0x3ee Return
	
Label_928:
	GetPosition(var_33_cvector); // 0x3a0 ObjFunc
	GetPosition(var_34_cvector); // 0x3a2 Func
	GetDirection(var_35_cvector); // 0x3a4 Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x3a6 Sub2
	var_47_float = GetByIndex(var_36_cvector, 0); // 0x3a7 PushE
	var_48_float = GetByIndex(var_35_cvector, 0); // 0x3a8 PushE
	var_49_float = var_47_float * var_48_float; // 0x3a9 Mult
	var_50_float = GetByIndex(var_36_cvector, 2); // 0x3aa PushE
	var_51_float = GetByIndex(var_35_cvector, 2); // 0x3ab PushE
	var_52_float = var_50_float * var_51_float; // 0x3ac Mult
	var_53_int = var_49_float + var_52_float; // 0x3ad Add
	var_54_int = 0; // 0x3ae PushI
	var_55_bool = var_53_int >= var_54_int; // 0x3af GE
	if(var_55_bool == 0) goto Label_947; // 0x3b0 JumpB
	var_37_string = "fdie"; // 0x3b1 MovS
	goto Label_948; // 0x3b2 Jump
	
Label_948:
	RemoveRTEnvelope(); // 0x3b4 Func
	SetDeathState(); // 0x3b6 Func
	Stop(); // 0x3b8 Func
	StopAsync(); // 0x3ba Func
	var_38_object = var_22_object; // 0x3bc Mov
	var_56_string = "GetScriptProperty"; // 0x3bd PushS
	var_57_int = 2; // 0x3be PushI
	var_58_bool = IsFuncExist(var_22_object, var_56_string, var_57_int); // 0x3bf FuncExist
	if(var_58_bool == 0) goto Label_972; // 0x3c0 JumpB
	var_59_string = "Owner"; // 0x3c1 PushS
	HasScriptProperty(var_39_bool, var_59_string); // 0x3c2 ObjFunc
	var_60_bool = var_39_bool; // 0x3c4 Push
	if(var_60_bool == 0) goto Label_972; // 0x3c5 JumpB
	var_61_string = "Owner"; // 0x3c6 PushS
	GetScriptProperty(var_38_object, var_61_string); // 0x3c7 ObjFunc
	var_62_bool = var_38_object == 0; // 0x3c9 NullEq
	if(var_62_bool == 0) goto Label_972; // 0x3ca JumpB
	var_38_object = var_22_object; // 0x3cb Mov
	
Label_972:
	var_63_string = "@GetEyesHeight"; // 0x3cc PushS
	var_64_int = 1; // 0x3cd PushI
	var_65_bool = IsFuncExist(var_38_object, var_63_string, var_64_int); // 0x3ce FuncExist
	if(var_65_bool == 0) goto Label_987; // 0x3cf JumpB
	GetEyesHeight(var_41_float); // 0x3d0 ObjFunc
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x3d2 MovV
	var_66_float = GetByIndex(var_42_cvector, 1); // 0x3d3 PushE
	var_66_float = var_41_float; // 0x3d4 Mov
	SetByIndex(var_42_cvector, 1) = var_66_float; // 0x3d5 PopE
	var_67_string = "head"; // 0x3d6 PushS
	LookAsync(var_22_object, var_67_string, var_42_cvector); // 0x3d7 Func
	var_40_bool = 1; // 0x3d9 MovB
	goto Label_988; // 0x3da Jump
	
Label_988:
	var_68_string = "all"; // 0x3dc PushS
	PlayAnimation(var_68_string, var_37_string); // 0x3dd Func
	WaitForAnimEnd(); // 0x3df Func
	var_69_bool = var_40_bool; // 0x3e1 Push
	if(var_69_bool == 0) goto Label_1000; // 0x3e2 JumpB
	StopAsync(); // 0x3e3 Func
	var_70_string = "head"; // 0x3e5 PushS
	UnlookAsync(var_70_string); // 0x3e6 Func
	
Label_1000:
	var_71_string = "all"; // 0x3e8 PushS
	LockAnimationEnd(var_71_string, var_37_string); // 0x3e9 Func
	RemoveEnvelope(); // 0x3eb Func
	var_38_object = 0; // 0x3ed SetNull
	
Label_987:
	var_40_bool = 0; // 0x3db MovB
	
Label_947:
	var_37_string = "bdie"; // 0x3b3 MovS
}


func_1055(var_284_float, var_285_object, var_286_float, var_287_int)
{
	var_291_int = 0; var_292_string = ""; var_293_int = 0; var_294_float = 0; var_295_float = 0; var_296_float = 0; var_297_int = 0; var_298_string = ""; var_299_int = 0; var_300_float = 0; var_301_float = 0; var_302_float = 0; // 0x41f PushV
	var_303_bool = 0; var_304_object = Obj(); var_305_string = ""; // 0x420 PushV
	var_304_object = var_285_object; // 0x421 Mov
	var_305_string = "health"; // 0x422 MovS
	func_1043(var_303_bool, var_304_object, var_305_string); // 0x423 Call
	var_306_bool = var_303_bool == 0; // 0x425 Not
	if(var_306_bool == 0) goto Label_1065; // 0x426 JumpB
	var_284_float = 0.0; // 0x427 MovF
	return 12; // 0x428 Return
	
Label_1065:
	var_307_bool = 0; var_308_object = Obj(); var_309_string = ""; // 0x429 PushV
	var_308_object = var_285_object; // 0x42a Mov
	var_309_string = "armor"; // 0x42b MovS
	func_1043(var_307_bool, var_308_object, var_309_string); // 0x42c Call
	var_310_bool = var_307_bool == 0; // 0x42e Not
	if(var_310_bool == 0) goto Label_1074; // 0x42f JumpB
	var_297_int = 0; // 0x430 MovI
	goto Label_1077; // 0x431 Jump
	
Label_1077:
	var_311_string = "armor_"; // 0x435 PushS
	var_312_string = ""; var_313_int = 0; // 0x436 PushV
	var_313_int = var_287_int; // 0x437 Mov
	func_1035(var_312_string, var_313_int); // 0x438 Call
	var_298_string = var_311_string + var_312_string; // 0x43a Add2
	var_316_bool = 0; var_317_object = Obj(); var_318_string = ""; // 0x43b PushV
	var_317_object = var_285_object; // 0x43c Mov
	var_318_string = var_298_string; // 0x43d Mov
	func_1043(var_316_bool, var_317_object, var_318_string); // 0x43e Call
	var_319_bool = var_316_bool == 0; // 0x440 Not
	if(var_319_bool == 0) goto Label_1092; // 0x441 JumpB
	var_299_int = 0; // 0x442 MovI
	goto Label_1094; // 0x443 Jump
	
Label_1094:
	var_320_float = 0; var_321_float = 0; var_322_float = 0; // 0x446 PushV
	var_323_int = var_297_int + var_299_int; // 0x447 Add
	var_324_float = 100.0; // 0x448 PushF
	var_321_float = var_323_int / var_323_int; // 0x449 Div2
	var_322_float = 1; // 0x44a MovI
	func_1357(var_320_float, var_321_float, var_322_float); // 0x44b Call
	var_300_float = var_320_float; // 0x44c Mov
	var_326_string = "health"; // 0x44e PushS
	GetProperty(var_326_string, var_301_float); // 0x44f ObjFunc
	var_327_int = 1; // 0x451 PushI
	var_328_int = var_327_int - var_300_float; // 0x452 Sub
	var_302_float = var_286_float * var_328_int; // 0x453 Mult2
	var_329_string = "health"; // 0x454 PushS
	var_330_float = 0; var_331_float = 0; var_332_float = 0; var_333_float = 0; // 0x455 PushV
	var_331_float = var_301_float - var_302_float; // 0x456 Sub2
	var_332_float = 0; // 0x457 MovI
	var_333_float = 1; // 0x458 MovI
	func_1364(var_330_float, var_331_float, var_332_float, var_333_float); // 0x459 Call
	SetProperty(var_329_string, var_330_float); // 0x45b ObjFunc
	var_284_float = var_302_float; // 0x45d Mov
	return 12; // 0x45e Return
	
Label_1092:
	GetProperty(var_298_string, var_299_int); // 0x444 ObjFunc
	
Label_1074:
	var_336_string = "armor"; // 0x432 PushS
	GetProperty(var_336_string, var_297_int); // 0x433 ObjFunc
}


func_1184(var_17_object, var_18_int)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_object = Obj(); var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; // 0x4a0 PushV
	var_40_bool = 0; // 0x4a1 PushV
	var_40_bool = 0; // 0x4a2 MovB
	var_41_int = 4; // 0x4a3 PushI
	var_42_bool = var_18_int != var_41_int; // 0x4a4 Neq
	if(var_42_bool == 0) goto Label_1194; // 0x4a5 JumpB
	var_43_int = 5; // 0x4a6 PushI
	var_44_bool = var_18_int != var_43_int; // 0x4a7 Neq
	if(var_44_bool == 0) goto Label_1194; // 0x4a8 JumpB
	var_40_bool = 1; // 0x4a9 MovB
	
Label_1194:
	if(var_40_bool == 0) goto Label_1213; // 0x4aa JumpB
	GetScene(var_30_object); // 0x4ab Func
	GetPosition(var_32_cvector); // 0x4ad Func
	GetEyesHeight(var_33_float); // 0x4af Func
	var_45_float = GetByIndex(var_32_cvector, 1); // 0x4b1 PushE
	var_46_int = 2; // 0x4b2 PushI
	var_47_float = var_33_float / var_46_int; // 0x4b3 Div
	var_45_float = var_45_float + var_47_float; // 0x4b4 Add2
	SetByIndex(var_32_cvector, 1) = var_45_float; // 0x4b5 PopE
	var_48_string = "scripted"; // 0x4b6 PushS
	var_49_cvector = CVector(0.0, 0.0, 1.0); // 0x4b7 PushVec
	var_50_string = "blood.xml"; // 0x4b8 PushS
	AddActorByType(var_31_object, var_48_string, var_30_object, var_32_cvector, var_49_cvector, var_50_string); // 0x4b9 Func
	var_31_object = 0; // 0x4bb SetNull
	var_30_object = 0; // 0x4bc SetNull
	
Label_1213:
	var_51_bool = var_17_object == 0; // 0x4bd NullEq
	if(var_51_bool == 0) goto Label_1216; // 0x4be JumpB
	return 20; // 0x4bf Return
	
Label_1216:
	GetSecondaryAnimationType(var_34_int); // 0x4c0 Func
	var_52_int = 0; // 0x4c2 PushI
	var_53_bool = var_34_int < var_52_int; // 0x4c3 LT
	if(var_53_bool == 0) goto Label_1222; // 0x4c4 JumpB
	return 20; // 0x4c5 Return
	
Label_1222:
	GetPosition(var_35_cvector); // 0x4c6 ObjFunc
	GetPosition(var_36_cvector); // 0x4c8 Func
	GetDirection(var_37_cvector); // 0x4ca Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x4cc Sub2
	var_54_float = GetByIndex(var_38_cvector, 0); // 0x4cd PushE
	var_55_float = GetByIndex(var_37_cvector, 0); // 0x4ce PushE
	var_56_float = var_54_float * var_55_float; // 0x4cf Mult
	var_57_float = GetByIndex(var_38_cvector, 2); // 0x4d0 PushE
	var_58_float = GetByIndex(var_37_cvector, 2); // 0x4d1 PushE
	var_59_float = var_57_float * var_58_float; // 0x4d2 Mult
	var_60_int = var_56_float + var_59_float; // 0x4d3 Add
	var_61_int = 0; // 0x4d4 PushI
	var_62_bool = var_60_int >= var_61_int; // 0x4d5 GE
	if(var_62_bool == 0) goto Label_1241; // 0x4d6 JumpB
	var_39_string = "fhit"; // 0x4d7 MovS
	goto Label_1242; // 0x4d8 Jump
	
Label_1242:
	var_63_string = "hit_react"; // 0x4da PushS
	var_64_string = "1"; // 0x4db PushS
	var_65_int = var_39_string + var_64_string; // 0x4dc Add
	var_66_string = "2"; // 0x4dd PushS
	var_67_int = var_39_string + var_66_string; // 0x4de Add
	var_68_int = -10; // 0x4df PushI
	FadeSecondaryAnimation(var_63_string, var_65_int, var_67_int, var_68_int); // 0x4e0 Func
	return 20; // 0x4e2 Return
	
Label_1241:
	var_39_string = "bhit"; // 0x4d9 MovS
}


func_1318()
{
	CameraSwitchToNormal(); // 0x527 Func
	return 0; // 0x529 Return
}


func_681(var_0_object)
{
	var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); // 0x2a9 PushV
	Face(var_0_object); // 0x2aa Func
	var_233_string = "all"; // 0x2ac PushS
	var_234_string = "bjump"; // 0x2ad PushS
	PlayAnimation(var_233_string, var_234_string); // 0x2ae Func
	GetPFPosition(var_231_cvector); // 0x2b0 TObjFunc
	GetPFPosition(var_232_cvector); // 0x2b2 Func
	WaitForAnimEnd(); // 0x2b4 Func
	StopAsync(); // 0x2b6 Func
	var_235_cvector = CVector(0.0, 0.0, 0.0); // 0x2b8 PushVec
	SetSpeed(var_235_cvector); // 0x2b9 Func
	return 4; // 0x2bb Return
}


func_1322(var_88_string)
{
	var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0; // 0x52a PushV
	var_93_string = "playing "; // 0x52b PushS
	var_94_int = var_93_string + var_88_string; // 0x52c Add
	Trace(var_94_int); // 0x52d Func
	lshGetAnimTimes(var_88_string, var_91_float, var_92_float); // 0x52f Func
	lshPlayAnimation(var_91_float, var_92_float); // 0x531 Func
	var_95_string = "start: "; // 0x533 PushS
	var_96_int = var_95_string + var_91_float; // 0x534 Add
	Trace(var_96_int); // 0x535 Func
	var_97_string = "end: "; // 0x537 PushS
	var_98_int = var_97_string + var_92_float; // 0x538 Add
	Trace(var_98_int); // 0x539 Func
	return 4; // 0x53b Return
}


func_700(var_0_object, var_190_bool)
{
	var_191_bool = 0; var_192_bool = 0; // 0x2bc PushV
	var_193_string = "IsAttacking"; // 0x2bd PushS
	var_194_int = 1; // 0x2be PushI
	var_195_bool = IsFuncExist(var_0_object, var_193_string, var_194_int); // 0x2bf FuncExist
	if(var_195_bool == 0) goto Label_709; // 0x2c0 JumpB
	IsAttacking(var_192_bool); // 0x2c1 TObjFunc
	var_190_bool = var_192_bool; // 0x2c3 Mov
	return 2; // 0x2c4 Return
	
Label_709:
	var_190_bool = 0; // 0x2c5 MovB
	return 2; // 0x2c6 Return
}


func_1340()
{
	var_16_bool = 0; // 0x53c PushV
	func_1408(var_16_bool); // 0x53d Call
	if(var_16_bool == 0) goto Label_1346; // 0x53f JumpB
	lshStopSpeech(); // 0x540 Func
	
Label_1346:
	return 0; // 0x542 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object; // 0x40 TMov
	var_1_object = var_77_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_83_int = 1; // 0x43 PushI
	if(var_83_int == 0) goto Label_91; // 0x44 JumpB
	var_84_string = ""; // 0x45 PushV
	var_84_string = "Neutral"; // 0x46 MovS
	func_121(var_78_object, var_84_string); // 0x47 Call
	var_99_int = 5264; // 0x49 PushI
	SetMessage(var_99_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_100_int = 5265; // 0x4e PushI
	var_101_int = -1; // 0x4f PushI
	var_102_int = 5802; // 0x50 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x51 TObjFunc
	var_103_int = 6042; // 0x53 PushI
	var_104_int = -1; // 0x54 PushI
	var_105_int = 6665; // 0x55 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x56 TObjFunc
	goto Label_91; // 0x58 Jump
	
Label_91:
	var_106_bool = 0; // 0x5b PushV
	func_1408(var_106_bool); // 0x5c Call
	if(var_106_bool == 0) goto Label_106; // 0x5e JumpB
	
Label_95:
	lshWaitForAnimEnd(); // 0x5f Func
	var_107_string = var_3_string; // 0x61 PushT
	if(var_107_string == 0) goto Label_100; // 0x62 JumpB
	goto Label_105; // 0x63 Jump
	
Label_105:
	goto Label_120; // 0x69 Jump
	
Label_120:
	return 0; // 0x78 Return
	
Label_100:
	var_108_string = ""; // 0x64 PushV
	var_108_string = var_2_object; // 0x65 MovT
	func_1322(var_108_string); // 0x66 Call
	goto Label_95; // 0x68 Jump
	
Label_106:
	var_109_string = "all"; // 0x6a PushS
	var_110_string = "idle"; // 0x6b PushS
	PlayAnimation(var_109_string, var_110_string); // 0x6c Func
	
Label_110:
	WaitForAnimEnd(); // 0x6e Func
	var_111_string = var_3_string; // 0x70 PushT
	if(var_111_string == 0) goto Label_115; // 0x71 JumpB
	goto Label_120; // 0x72 Jump
	
Label_115:
	var_112_string = "all"; // 0x73 PushS
	var_113_string = "idle"; // 0x74 PushS
	PlayAnimation(var_112_string, var_113_string); // 0x75 Func
	goto Label_110; // 0x77 Jump
}


func_1347(var_50_cvector, var_51_cvector)
{
	var_53_float = 0; var_54_float = 0; // 0x543 PushV
	var_55_int = var_51_cvector | var_51_cvector; // 0x544 Or
	var_54_float = sqrt(var_55_int); // 0x545 Sqrt2
	var_56_float = 0.0; // 0x546 PushF
	var_57_bool = var_54_float < var_56_float; // 0x547 LT
	if(var_57_bool == 0) goto Label_1355; // 0x548 JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0x549 MovV
	return 2; // 0x54a Return
	
Label_1355:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0x54b Div2
	return 2; // 0x54c Return
}


func_711(var_2_object, var_4_bool)
{
	var_252_float = 0; var_253_int = 0; var_254_float = 0; var_255_int = 0; // 0x2c7 PushV
	var_256_bool = var_2_object == 0; // 0x2c8 Not
	if(var_256_bool == 0) goto Label_715; // 0x2c9 JumpB
	return 4; // 0x2ca Return
	
Label_715:
	var_257_bool = var_4_bool; // 0x2cb PushT
	if(var_257_bool == 0) goto Label_723; // 0x2cc JumpB
	var_258_int = -1; // 0x2cd PushI
	var_4_bool = var_4_bool + var_258_int; // 0x2ce Add2
	var_259_int = 0; // 0x2cf PushI
	var_260_bool = var_4_bool > var_259_int; // 0x2d0 GT
	if(var_260_bool == 0) goto Label_723; // 0x2d1 JumpB
	return 4; // 0x2d2 Return
	
Label_723:
	rand(var_254_float); // 0x2d3 Func
	var_261_float = 0; // 0x2d5 PushV
	func_749(var_261_float); // 0x2d6 Call
	var_262_bool = var_254_float < var_261_float; // 0x2d8 LT
	if(var_262_bool == 0) goto Label_742; // 0x2d9 JumpB
	irand(var_255_int, var_254_float); // 0x2da Func
	var_263_int = 1; // 0x2dc PushI
	var_255_int = var_255_int + var_263_int; // 0x2dd Add2
	var_264_string = "attack"; // 0x2de PushS
	var_265_int = var_264_string + var_255_int; // 0x2df Add
	Speak(var_265_int); // 0x2e0 Func
	var_266_int = 0; // 0x2e2 PushV
	func_747(var_266_int); // 0x2e3 Call
	var_4_bool = var_266_int; // 0x2e4 TMov
	
Label_742:
	return 4; // 0x2e6 Return
}


func_584(var_356_bool, var_357_float)
{
	var_358_float = 0; var_359_bool = 0; var_360_float = 0; var_361_bool = 0; // 0x248 PushV
	rand(var_360_float); // 0x249 Func
	var_362_bool = var_360_float < var_357_float; // 0x24b LT
	if(var_362_bool == 0) goto Label_604; // 0x24c JumpB
	
Label_589:
	IsAnimationPlaying(var_361_bool); // 0x24d Func
	var_363_bool = var_361_bool == 0; // 0x24f Not
	if(var_363_bool == 0) goto Label_594; // 0x250 JumpB
	goto Label_603; // 0x251 Jump
	
Label_603:
	goto Label_606; // 0x25b Jump
	
Label_606:
	var_356_bool = 0; // 0x25e MovB
	return 4; // 0x25f Return
	
Label_594:
	var_364_bool = 0; // 0x252 PushV
	func_648(var_361_bool, var_364_bool); // 0x253 Call
	if(var_364_bool == 0) goto Label_600; // 0x255 JumpB
	var_356_bool = 1; // 0x256 MovB
	return 4; // 0x257 Return
	
Label_600:
	sync(); // 0x258 Func
	goto Label_589; // 0x25a Jump
	
Label_604:
	WaitForAnimEnd(); // 0x25c Func
}


func_1357(var_320_float, var_321_float, var_322_float)
{
	var_325_bool = var_321_float < var_322_float; // 0x54e LT
	if(var_325_bool == 0) goto Label_1362; // 0x54f JumpB
	var_320_float = var_321_float; // 0x550 Mov
	goto Label_1363; // 0x551 Jump
	
Label_1363:
	return 0; // 0x553 Return
	
Label_1362:
	var_320_float = var_322_float; // 0x552 Mov
}


func_465(var_0_object, var_270_float, var_271_int)
{
	var_272_object = Obj(); var_273_float = 0; var_274_float = 0; var_275_object = Obj(); var_276_float = 0; var_277_float = 0; // 0x1d1 PushV
	var_278_float = 0.9; // 0x1d2 PushF
	var_279_float = var_270_float * var_278_float; // 0x1d3 Mult
	GetVictim(var_279_float, var_275_object); // 0x1d4 Func
	ReportAttack(var_0_object); // 0x1d6 Func
	var_280_bool = var_275_object == var_0_object; // 0x1d8 Eq
	if(var_280_bool == 0) goto Label_502; // 0x1d9 JumpB
	var_281_float = 0; var_282_object = Obj(); var_283_int = 0; // 0x1da PushV
	var_282_object = var_275_object; // 0x1db Mov
	var_283_int = var_271_int; // 0x1dc Mov
	func_248(var_283_int); // 0x1dd Call
	var_276_float = var_281_float; // 0x1de Mov
	var_284_float = 0; var_285_object = Obj(); var_286_float = 0; var_287_int = 0; // 0x1e0 PushV
	var_285_object = var_275_object; // 0x1e1 Mov
	var_286_float = var_276_float; // 0x1e2 Mov
	var_288_int = 0; var_289_object = Obj(); var_290_int = 0; // 0x1e3 PushV
	var_289_object = var_275_object; // 0x1e4 Mov
	var_290_int = var_271_int; // 0x1e5 Mov
	func_251(var_290_int); // 0x1e6 Call
	var_287_int = var_288_int; // 0x1e7 Mov
	func_1055(var_284_float, var_285_object, var_286_float, var_287_int); // 0x1e9 Call
	var_277_float = var_284_float; // 0x1ea Mov
	var_337_int = 0; // 0x1ec PushV
	func_743(var_337_int); // 0x1ed Call
	ReportHit(var_0_object, var_337_int, var_277_float, var_276_float); // 0x1ef Func
	var_338_object = Obj(); var_339_float = 0; // 0x1f1 PushV
	var_338_object = var_275_object; // 0x1f2 Mov
	var_339_float = var_277_float; // 0x1f3 Mov
	func_745(); // 0x1f4 Call
	
Label_502:
	return 6; // 0x1f6 Return
}


func_1364(var_330_float, var_331_float, var_332_float, var_333_float)
{
	var_334_bool = var_331_float < var_332_float; // 0x555 LT
	if(var_334_bool == 0) goto Label_1369; // 0x556 JumpB
	var_330_float = var_332_float; // 0x557 Mov
	return 0; // 0x558 Return
	
Label_1369:
	var_335_bool = var_331_float > var_333_float; // 0x559 GT
	if(var_335_bool == 0) goto Label_1373; // 0x55a JumpB
	var_330_float = var_333_float; // 0x55b Mov
	return 0; // 0x55c Return
	
Label_1373:
	var_330_float = var_331_float; // 0x55d Mov
	return 0; // 0x55e Return
}


func_1375(var_15_bool, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x55f PushV
	FindActor(var_19_object, var_16_string); // 0x560 Func
	var_20_bool = var_19_object == 0; // 0x562 NullEq
	if(var_20_bool == 0) goto Label_1382; // 0x563 JumpB
	var_15_bool = 0; // 0x564 MovB
	return 2; // 0x565 Return
	
Label_1382:
	Trigger(var_19_object, var_17_string); // 0x566 Func
	var_15_bool = 1; // 0x568 MovB
	return 2; // 0x569 Return
}


func_608(var_0_object, var_198_bool, var_199_float)
{
	var_200_bool = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_float = 0; var_205_bool = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_float = 0; // 0x260 PushV
	
Label_609:
	IsAnimationPlaying(var_205_bool); // 0x261 Func
	var_210_bool = var_205_bool == 0; // 0x263 Not
	if(var_210_bool == 0) goto Label_614; // 0x264 JumpB
	goto Label_646; // 0x265 Jump
	
Label_646:
	var_198_bool = 0; // 0x286 MovB
	return 10; // 0x287 Return
	
Label_614:
	var_211_bool = 0; // 0x266 PushV
	func_648(var_209_float, var_211_bool); // 0x267 Call
	if(var_211_bool == 0) goto Label_620; // 0x269 JumpB
	var_198_bool = 1; // 0x26a MovB
	return 10; // 0x26b Return
	
Label_620:
	var_236_bool = 0; var_237_object = Obj(); // 0x26c PushV
	var_237_object = var_0_object; // 0x26d MovT
	func_1160(var_236_bool, var_237_object); // 0x26e Call
	var_238_bool = var_236_bool == 0; // 0x270 Not
	if(var_238_bool == 0) goto Label_628; // 0x271 JumpB
	var_198_bool = 0; // 0x272 MovB
	return 10; // 0x273 Return
	
Label_628:
	GetPFPosition(var_206_cvector); // 0x274 TObjFunc
	GetPFPosition(var_207_cvector); // 0x276 Func
	var_208_cvector = var_206_cvector - var_207_cvector; // 0x278 Sub2
	var_209_float = var_208_cvector | var_208_cvector; // 0x279 Or2
	var_239_float = var_199_float * var_199_float; // 0x27a Mult
	var_240_bool = var_209_float < var_239_float; // 0x27b LT
	if(var_240_bool == 0) goto Label_643; // 0x27c JumpB
	var_241_bool = 0; var_242_float = 0; // 0x27d PushV
	var_242_float = var_199_float; // 0x27e Mov
	func_504(var_209_float, var_241_bool, var_242_float); // 0x27f Call
	var_198_bool = 1; // 0x281 MovB
	return 10; // 0x282 Return
	
Label_643:
	sync(); // 0x283 Func
	goto Label_609; // 0x285 Jump
}


func_1119(var_33_bool)
{
	var_35_bool = 0; var_36_bool = 0; // 0x45f PushV
	IsDead(var_36_bool); // 0x460 ObjFunc
	var_33_bool = var_36_bool; // 0x462 Mov
	return 2; // 0x463 Return
}


func_248(var_281_float)
{
	var_281_float = 0.1; // 0xf9 MovF
	return 0; // 0xfa Return
}


func_1251()
{
	var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); // 0x4e3 PushV
	GetPosition(var_180_cvector); // 0x4e4 ObjFunc
	GetPosition(var_181_cvector); // 0x4e6 Func
	var_182_cvector = var_180_cvector - var_181_cvector; // 0x4e8 Sub2
	var_183_float = GetByIndex(var_182_cvector, 0); // 0x4e9 PushE
	var_184_float = GetByIndex(var_182_cvector, 2); // 0x4ea PushE
	RotateAsync(var_183_float, var_184_float); // 0x4eb Func
	return 6; // 0x4ed Return
}


func_228()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0xe4 PushV
	var_24_bool = 0; var_25_string = ""; var_26_string = ""; // 0xe5 PushV
	var_25_string = "quest_d1_03"; // 0xe6 MovS
	var_26_string = "butcher_battle"; // 0xe7 MovS
	func_1375(var_24_bool, var_25_string, var_26_string); // 0xe8 Call
	var_30_string = "player"; // 0xea PushS
	FindActor(var_23_object, var_30_string); // 0xeb Func
	var_31_object = Obj(); var_32_bool = 0; var_33_float = 0; // 0xed PushV
	var_31_object = var_23_object; // 0xee Mov
	var_32_bool = 1; // 0xef MovB
	var_33_float = 180.0; // 0xf0 MovF
	func_260(var_18_int, var_19_int, var_20_bool, var_21_int, var_22_object, var_23_object, var_31_object, var_32_bool, var_33_float); // 0xf1 Call
	func_1410(); // 0xf4 Call
	return 2; // 0xf6 Return
}


func_1124(var_22_bool, var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x464 PushV
	var_28_bool = var_23_object == 0; // 0x465 NullEq
	if(var_28_bool == 0) goto Label_1129; // 0x466 JumpB
	var_22_bool = 0; // 0x467 MovB
	return 4; // 0x468 Return
	
Label_1129:
	var_29_bool = 0; // 0x469 PushV
	var_29_bool = 0; // 0x46a MovB
	var_30_string = "IsDead"; // 0x46b PushS
	var_31_int = 1; // 0x46c PushI
	var_32_bool = IsFuncExist(var_23_object, var_30_string, var_31_int); // 0x46d FuncExist
	if(var_32_bool == 0) goto Label_1141; // 0x46e JumpB
	var_33_bool = 0; var_34_object = Obj(); // 0x46f PushV
	var_34_object = var_23_object; // 0x470 Mov
	func_1119(var_34_object); // 0x471 Call
	if(var_33_bool == 0) goto Label_1141; // 0x473 JumpB
	var_29_bool = 1; // 0x474 MovB
	
Label_1141:
	if(var_29_bool == 0) goto Label_1144; // 0x475 JumpB
	var_22_bool = 0; // 0x476 MovB
	return 4; // 0x477 Return
	
Label_1144:
	GetScene(var_26_object); // 0x478 Func
	var_37_bool = var_26_object == 0; // 0x47a NullEq
	if(var_37_bool == 0) goto Label_1150; // 0x47b JumpB
	var_22_bool = 0; // 0x47c MovB
	return 4; // 0x47d Return
	
Label_1150:
	GetScene(var_27_object); // 0x47e ObjFunc
	var_38_bool = var_26_object != var_27_object; // 0x480 Neq
	if(var_38_bool == 0) goto Label_1156; // 0x481 JumpB
	var_22_bool = 0; // 0x482 MovB
	return 4; // 0x483 Return
	
Label_1156:
	var_22_bool = 1; // 0x484 MovB
	return 4; // 0x485 Return
}


func_743(var_337_int)
{
	var_337_int = 0; // 0x2e7 MovI
	return 0; // 0x2e8 Return
}


func_745()
{
	return 0; // 0x2ea Return
}


func_1387(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x56b PushV
	var_71_string = "player"; // 0x56c PushS
	GetVariable(var_71_string, var_70_int); // 0x56d Func
	var_72_int = 0; // 0x56f PushI
	var_73_bool = var_70_int == var_72_int; // 0x570 Eq
	if(var_73_bool == 0) goto Label_1397; // 0x571 JumpB
	var_68_int = 200001; // 0x572 MovI
	return 2; // 0x573 Return
	
Label_1397:
	var_74_int = 1; // 0x575 PushI
	var_75_bool = var_70_int == var_74_int; // 0x576 Eq
	if(var_75_bool == 0) goto Label_1402; // 0x577 JumpB
	var_68_int = 200002; // 0x578 MovI
	return 2; // 0x579 Return
	
Label_1402:
	var_68_int = 200003; // 0x57a MovI
	return 2; // 0x57b Return
}


func_747(var_266_int)
{
	var_266_int = 1; // 0x2eb MovI
	return 0; // 0x2ec Return
}


func_749(var_261_float)
{
	var_261_float = 0.5; // 0x2ed MovF
	return 0; // 0x2ee Return
}


func_1262(var_25_bool)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; // 0x4ee PushV
	GetPosition(var_36_cvector); // 0x4ef ObjFunc
	GetEyesHeight(var_35_float); // 0x4f1 ObjFunc
	var_43_float = GetByIndex(var_36_cvector, 1); // 0x4f3 PushE
	var_43_float = var_43_float + var_35_float; // 0x4f4 Add2
	SetByIndex(var_36_cvector, 1) = var_43_float; // 0x4f5 PopE
	GetPosition(var_37_cvector); // 0x4f6 Func
	GetEyesHeight(var_35_float); // 0x4f8 Func
	var_44_float = GetByIndex(var_37_cvector, 1); // 0x4fa PushE
	var_44_float = var_44_float + var_35_float; // 0x4fb Add2
	SetByIndex(var_37_cvector, 1) = var_44_float; // 0x4fc PopE
	var_38_cvector = var_36_cvector - var_37_cvector; // 0x4fd Sub2
	var_45_float = GetByIndex(var_38_cvector, 1); // 0x4fe PushE
	var_45_float = 0; // 0x4ff MovI
	SetByIndex(var_38_cvector, 1) = var_45_float; // 0x500 PopE
	var_46_int = var_38_cvector | var_38_cvector; // 0x501 Or
	var_47_float = sqrt(var_46_int); // 0x502 Sqrt
	var_38_cvector = var_38_cvector / var_38_cvector; // 0x503 Div2
	var_39_cvector = -var_38_cvector; // 0x504 Neg2
	var_48_int = 70; // 0x505 PushI
	var_49_float = var_38_cvector * var_48_int; // 0x506 Mult
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x507 PushV
	var_52_cvector = CVector(0.0, 1.0, 0.0); // 0x508 PushVec
	var_51_cvector = var_39_cvector ^ var_52_cvector; // 0x509 Xor2
	func_1347(var_50_cvector, var_51_cvector); // 0x50a Call
	var_58_int = 25; // 0x50c PushI
	var_59_float = var_50_cvector * var_58_int; // 0x50d Mult
	var_60_int = var_49_float + var_59_float; // 0x50e Add
	var_61_cvector = CVector(0.0, 10.0, 0.0); // 0x50f PushVec
	var_40_cvector = var_60_int - var_61_cvector; // 0x510 Sub2
	var_41_cvector = var_37_cvector + var_40_cvector; // 0x511 Add2
	IsOverrideActive(var_42_bool); // 0x512 Func
	var_62_bool = var_42_bool; // 0x514 Push
	if(var_62_bool == 0) goto Label_1304; // 0x515 JumpB
	var_25_bool = 0; // 0x516 MovB
	return 16; // 0x517 Return
	
Label_1304:
	StopWorld(); // 0x518 Func
	CameraTransit(var_41_cvector, var_39_cvector); // 0x51a Func
	var_63_float = GetByIndex(var_40_cvector, 0); // 0x51c PushE
	var_64_float = GetByIndex(var_40_cvector, 2); // 0x51d PushE
	Rotate(var_63_float, var_64_float); // 0x51e Func
	CameraWaitForPlayFinish(); // 0x520 Func
	ResumeWorld(); // 0x522 Func
	var_25_bool = 1; // 0x524 MovB
	return 16; // 0x525 Return
}


func_1007(var_44_string)
{
	RemoveRTEnvelope(); // 0x3f0 Func
	SetDeathState(); // 0x3f2 Func
	Stop(); // 0x3f4 Func
	StopAsync(); // 0x3f6 Func
	StopSecondaryAnimation(); // 0x3f8 Func
	var_45_string = "all"; // 0x3fa PushS
	PlayAnimation(var_45_string, var_44_string); // 0x3fb Func
	WaitForAnimEnd(); // 0x3fd Func
	var_46_string = "all"; // 0x3ff PushS
	LockAnimationEnd(var_46_string, var_44_string); // 0x400 Func
	RemoveEnvelope(); // 0x402 Func
	return 0; // 0x404 Return
}


func_881(var_0_object)
{
	var_0_object = 1; // 0x371 TMovB
	var_14_int = 0; // 0x372 PushI
	KillTimer(var_14_int); // 0x373 Func
	Stop(); // 0x375 Func
	return 0; // 0x377 Return
}


func_757(var_0_object, var_1_object, var_114_bool, var_115_object, var_116_float, var_117_float, var_118_bool, var_119_bool)
{
	var_122_bool = 0; var_123_bool = 0; var_124_object = Obj(); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_float = 0; var_129_object = Obj(); var_130_bool = 0; var_131_bool = 0; var_132_object = Obj(); var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_float = 0; var_137_object = Obj(); // 0x2f5 PushV
	var_0_object = 0; // 0x2f6 TMovB
	var_1_object = var_115_object; // 0x2f7 TMov
	var_131_bool = var_119_bool; // 0x2f8 Mov
	
Label_761:
	var_138_bool = 0; var_139_object = Obj(); // 0x2f9 PushV
	var_139_object = var_115_object; // 0x2fa Mov
	func_897(var_138_bool, var_139_object); // 0x2fb Call
	var_142_bool = var_138_bool == 0; // 0x2fd Not
	if(var_142_bool == 0) goto Label_769; // 0x2fe JumpB
	var_114_bool = 0; // 0x2ff MovB
	return 16; // 0x300 Return
	
Label_769:
	GetPosition(var_133_cvector); // 0x301 ObjFunc
	GetPosition(var_134_cvector); // 0x303 Func
	var_135_cvector = var_133_cvector - var_134_cvector; // 0x305 Sub2
	var_136_float = var_135_cvector | var_135_cvector; // 0x306 Or2
	var_143_bool = 0; // 0x307 PushV
	var_143_bool = 0; // 0x308 MovB
	var_144_int = 0; // 0x309 PushI
	var_145_bool = var_117_float > var_144_int; // 0x30a GT
	if(var_145_bool == 0) goto Label_784; // 0x30b JumpB
	var_146_float = var_117_float * var_117_float; // 0x30c Mult
	var_147_bool = var_136_float > var_146_float; // 0x30d GT
	if(var_147_bool == 0) goto Label_784; // 0x30e JumpB
	var_143_bool = 1; // 0x30f MovB
	
Label_784:
	if(var_143_bool == 0) goto Label_789; // 0x310 JumpB
	Stop(); // 0x311 Func
	var_114_bool = 0; // 0x313 MovB
	return 16; // 0x314 Return
	
Label_789:
	var_148_float = var_116_float * var_116_float; // 0x315 Mult
	var_149_bool = var_136_float > var_148_float; // 0x316 GT
	if(var_149_bool == 0) goto Label_851; // 0x317 JumpB
	GetPFPosition(var_133_cvector); // 0x318 ObjFunc
	FindPathTo(var_137_object, var_133_cvector); // 0x31a Func
	var_150_bool = var_137_object != 0; // 0x31c NullNeq
	if(var_150_bool == 0) goto Label_800; // 0x31d JumpB
	var_132_object = var_137_object; // 0x31e Mov
	var_137_object = 0; // 0x31f SetNull
	
Label_800:
	var_151_bool = var_132_object != 0; // 0x320 NullNeq
	if(var_151_bool == 0) goto Label_833; // 0x321 JumpB
	var_152_bool = var_131_bool; // 0x322 Push
	if(var_152_bool == 0) goto Label_810; // 0x323 JumpB
	var_131_bool = 0; // 0x324 MovB
	RotatePath(var_132_object, var_130_bool); // 0x325 Func
	var_153_bool = var_130_bool == 0; // 0x327 Not
	if(var_153_bool == 0) goto Label_810; // 0x328 JumpB
	goto Label_857; // 0x329 Jump
	
Label_857:
	var_114_bool = !var_0_object; // 0x359 Not2
	return 16; // 0x35a Return
	
Label_810:
	var_154_int = 0; // 0x32a PushI
	var_155_float = 0.3; // 0x32b PushF
	SetTimer(var_154_int, var_155_float); // 0x32c Func
	var_156_string = ""; // 0x32e PushV
	func_904(var_156_string); // 0x32f Call
	var_157_string = ""; // 0x331 PushV
	func_906(var_157_string); // 0x332 Call
	FollowPath(var_132_object, var_118_bool, var_130_bool, var_156_string, var_157_string); // 0x334 Func
	var_158_bool = var_130_bool == 0; // 0x336 Not
	if(var_158_bool == 0) goto Label_831; // 0x337 JumpB
	var_159_object = var_0_object; // 0x338 PushT
	if(var_159_object == 0) goto Label_829; // 0x339 JumpB
	var_132_object = 0; // 0x33a SetNull
	goto Label_857; // 0x33b Jump
	
Label_829:
	goto Label_856; // 0x33d Jump
	
Label_856:
	goto Label_761; // 0x358 Jump
	
Label_831:
	var_132_object = 0; // 0x33f SetNull
	goto Label_849; // 0x340 Jump
	
Label_849:
	var_137_object = 0; // 0x351 SetNull
	goto Label_855; // 0x352 Jump
	
Label_855:
	var_132_object = 0; // 0x357 SetNull
	
Label_833:
	var_160_int = 0; // 0x341 PushI
	KillTimer(var_160_int); // 0x342 Func
	var_161_float = 0.5; // 0x344 PushF
	Sleep(var_161_float, var_130_bool); // 0x345 Func
	var_162_bool = var_130_bool == 0; // 0x347 Not
	if(var_162_bool == 0) goto Label_845; // 0x348 JumpB
	var_163_object = var_0_object; // 0x349 PushT
	if(var_163_object == 0) goto Label_845; // 0x34a JumpB
	var_132_object = 0; // 0x34b SetNull
	goto Label_857; // 0x34c Jump
	
Label_845:
	var_164_int = 0; // 0x34d PushI
	var_165_float = 0.3; // 0x34e PushF
	SetTimer(var_164_int, var_165_float); // 0x34f Func
	
Label_851:
	var_166_int = 0; // 0x353 PushI
	KillTimer(var_166_int); // 0x354 Func
	goto Label_857; // 0x356 Jump
}


func_504(var_0_object, var_241_bool, var_242_float)
{
	var_243_int = 0; var_244_bool = 0; var_245_int = 0; var_246_bool = 0; // 0x1f8 PushV
	irand(var_245_int, var_246_bool); // 0x1f9 Func
	var_247_int = 1; // 0x1fb PushI
	var_245_int = var_245_int + var_247_int; // 0x1fc Add2
	Face(var_0_object); // 0x1fd Func
	var_248_bool = 1; // 0x1ff PushB
	SetAttackState(var_248_bool); // 0x200 Func
	var_249_string = "all"; // 0x202 PushS
	var_250_string = "attack_begin"; // 0x203 PushS
	var_251_int = var_250_string + var_245_int; // 0x204 Add
	PlayAnimation(var_249_string, var_251_int); // 0x205 Func
	WaitForAnimEnd(); // 0x207 Func
	func_711(var_245_int, var_246_bool); // 0x20a Call
	var_267_bool = 0; var_268_object = Obj(); // 0x20c PushV
	var_268_object = var_0_object; // 0x20d MovT
	func_1160(var_267_bool, var_268_object); // 0x20e Call
	var_269_bool = var_267_bool == 0; // 0x210 Not
	if(var_269_bool == 0) goto Label_534; // 0x211 JumpB
	StopAsync(); // 0x212 Func
	var_241_bool = 0; // 0x214 MovB
	return 4; // 0x215 Return
	
Label_534:
	var_270_float = 0; var_271_int = 0; // 0x216 PushV
	var_270_float = var_242_float; // 0x217 Mov
	var_271_int = var_245_int; // 0x218 Mov
	func_465(var_246_bool, var_270_float, var_271_int); // 0x219 Call
	var_340_string = "all"; // 0x21b PushS
	var_341_string = "attack_middle"; // 0x21c PushS
	var_342_int = var_341_string + var_245_int; // 0x21d Add
	HasAnimation(var_246_bool, var_340_string, var_342_int); // 0x21e Func
	var_343_bool = var_246_bool; // 0x220 Push
	if(var_343_bool == 0) goto Label_568; // 0x221 JumpB
	var_344_string = "all"; // 0x222 PushS
	var_345_string = "attack_middle"; // 0x223 PushS
	var_346_int = var_345_string + var_245_int; // 0x224 Add
	PlayAnimation(var_344_string, var_346_int); // 0x225 Func
	WaitForAnimEnd(); // 0x227 Func
	var_347_bool = 0; var_348_object = Obj(); // 0x229 PushV
	var_348_object = var_0_object; // 0x22a MovT
	func_1160(var_347_bool, var_348_object); // 0x22b Call
	var_349_bool = var_347_bool == 0; // 0x22d Not
	if(var_349_bool == 0) goto Label_563; // 0x22e JumpB
	StopAsync(); // 0x22f Func
	var_241_bool = 0; // 0x231 MovB
	return 4; // 0x232 Return
	
Label_563:
	var_350_float = 0; var_351_int = 0; // 0x233 PushV
	var_350_float = var_242_float; // 0x234 Mov
	var_351_int = var_245_int; // 0x235 Mov
	func_465(var_246_bool, var_350_float, var_351_int); // 0x236 Call
	
Label_568:
	var_352_bool = 0; // 0x238 PushB
	SetAttackState(var_352_bool); // 0x239 Func
	var_353_string = "all"; // 0x23b PushS
	var_354_string = "attack_end"; // 0x23c PushS
	var_355_int = var_354_string + var_245_int; // 0x23d Add
	PlayAnimation(var_353_string, var_355_int); // 0x23e Func
	var_356_bool = 0; var_357_float = 0; // 0x240 PushV
	var_357_float = 0.75; // 0x241 MovF
	func_584(var_356_bool, var_357_float); // 0x242 Call
	StopAsync(); // 0x244 Func
	var_241_bool = 1; // 0x246 MovB
	return 4; // 0x247 Return
}


func_121(var_2_object, var_84_string)
{
	var_85_bool = 0; // 0x7a PushV
	func_1408(var_85_bool); // 0x7b Call
	var_86_bool = var_85_bool == 0; // 0x7d Not
	if(var_86_bool == 0) goto Label_128; // 0x7e JumpB
	return 0; // 0x7f Return
	
Label_128:
	var_87_bool = var_84_string == var_2_object; // 0x80 Eq
	if(var_87_bool == 0) goto Label_131; // 0x81 JumpB
	return 0; // 0x82 Return
	
Label_131:
	var_88_string = ""; // 0x83 PushV
	var_88_string = var_84_string; // 0x84 Mov
	func_1322(var_88_string); // 0x85 Call
	var_2_object = var_84_string; // 0x87 TMov
	return 0; // 0x88 Return
}


func_251(var_288_int)
{
	var_288_int = 0; // 0xfc MovI
	return 0; // 0xfd Return
}


func_1404(var_66_int)
{
	var_66_int = 3347; // 0x57c MovI
	return 0; // 0x57d Return
}


func_1406(var_67_string)
{
	var_67_string = "ui/NPC_None.png"; // 0x57e MovS
	return 0; // 0x57f Return
}


