task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xc3 PushI
	if(var_14_int == 0) goto Label_367; // 0xc4 JumpB
	func_759(); // 0xc6 NEW_2
	var_16_int = 24150; // 0xc8 PushI
	var_17_bool = var_12_bool == var_16_int; // 0xc9 Eq
	if(var_17_bool == 0) goto Label_263; // 0xca JumpB
	var_18_bool = 0; var_19_object = Obj(); // 0xcb PushV
	var_19_object = var_1_object; // 0xcc MovT
	func_847(var_19_object); // 0xcd NEW_2
	if(var_18_bool == 0) goto Label_243; // 0xcf JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xd0 PushV
	var_26_object = var_1_object; // 0xd1 MovT
	var_27_object = var_0_object; // 0xd2 MovT
	func_828(); // 0xd3 NEW_2
	var_30_object = Obj(); var_31_object = Obj(); // 0xd5 PushV
	var_30_object = var_1_object; // 0xd6 MovT
	var_31_object = var_0_object; // 0xd7 MovT
	func_834(); // 0xd8 NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0xda PushV
	var_42_object = var_1_object; // 0xdb MovT
	var_43_object = var_0_object; // 0xdc MovT
	func_841(); // 0xdd NEW_2
	var_46_string = ""; // 0xdf PushV
	var_46_string = "Neutral"; // 0xe0 MovS
	func_172(var_13_bool, var_46_string); // 0xe1 NEW_2
	var_63_int = 522959; // 0xe3 PushI
	SetMessage(var_63_int); // 0xe4 TObjFunc
	ClearReplies(); // 0xe6 TObjFunc
	var_64_int = 522960; // 0xe8 PushI
	var_65_int = 24152; // 0xe9 PushI
	var_66_int = 24151; // 0xea PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xeb TObjFunc
	var_67_int = 522973; // 0xed PushI
	var_68_int = -1; // 0xee PushI
	var_69_int = 24164; // 0xef PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_70_string = ""; // 0xf3 PushV
	var_70_string = "Neutral"; // 0xf4 MovS
	func_172(var_13_bool, var_70_string); // 0xf5 NEW_2
	var_71_int = 523196; // 0xf7 PushI
	SetMessage(var_71_int); // 0xf8 TObjFunc
	ClearReplies(); // 0xfa TObjFunc
	var_72_int = 523197; // 0xfc PushI
	var_73_int = -1; // 0xfd PushI
	var_74_int = 24400; // 0xfe PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xff TObjFunc
	var_75_int = 523198; // 0x101 PushI
	var_76_int = -1; // 0x102 PushI
	var_77_int = 24401; // 0x103 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x104 TObjFunc
	return 0; // 0x106 Return
	
Label_263:
	var_78_int = 24152; // 0x107 PushI
	var_79_bool = var_12_bool == var_78_int; // 0x108 Eq
	if(var_79_bool == 0) goto Label_286; // 0x109 JumpB
	var_80_string = ""; // 0x10a PushV
	var_80_string = "Neutral"; // 0x10b MovS
	func_172(var_13_bool, var_80_string); // 0x10c NEW_2
	var_81_int = 522961; // 0x10e PushI
	SetMessage(var_81_int); // 0x10f TObjFunc
	ClearReplies(); // 0x111 TObjFunc
	var_82_int = 522962; // 0x113 PushI
	var_83_int = 24154; // 0x114 PushI
	var_84_int = 24153; // 0x115 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x116 TObjFunc
	var_85_int = 522972; // 0x118 PushI
	var_86_int = -1; // 0x119 PushI
	var_87_int = 24163; // 0x11a PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x11b TObjFunc
	return 0; // 0x11d Return
	
Label_286:
	var_88_int = 24154; // 0x11e PushI
	var_89_bool = var_12_bool == var_88_int; // 0x11f Eq
	if(var_89_bool == 0) goto Label_309; // 0x120 JumpB
	var_90_string = ""; // 0x121 PushV
	var_90_string = "Neutral"; // 0x122 MovS
	func_172(var_13_bool, var_90_string); // 0x123 NEW_2
	var_91_int = 522963; // 0x125 PushI
	SetMessage(var_91_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_92_int = 522964; // 0x12a PushI
	var_93_int = 24156; // 0x12b PushI
	var_94_int = 24155; // 0x12c PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x12d TObjFunc
	var_95_int = 522968; // 0x12f PushI
	var_96_int = 24160; // 0x130 PushI
	var_97_int = 24159; // 0x131 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_98_int = 24160; // 0x135 PushI
	var_99_bool = var_12_bool == var_98_int; // 0x136 Eq
	if(var_99_bool == 0) goto Label_332; // 0x137 JumpB
	var_100_string = ""; // 0x138 PushV
	var_100_string = "Neutral"; // 0x139 MovS
	func_172(var_13_bool, var_100_string); // 0x13a NEW_2
	var_101_int = 522969; // 0x13c PushI
	SetMessage(var_101_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_102_int = 522970; // 0x141 PushI
	var_103_int = -1; // 0x142 PushI
	var_104_int = 24161; // 0x143 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x144 TObjFunc
	var_105_int = 522971; // 0x146 PushI
	var_106_int = -1; // 0x147 PushI
	var_107_int = 24162; // 0x148 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_108_int = 24156; // 0x14c PushI
	var_109_bool = var_12_bool == var_108_int; // 0x14d Eq
	if(var_109_bool == 0) goto Label_355; // 0x14e JumpB
	var_110_string = ""; // 0x14f PushV
	var_110_string = "Neutral"; // 0x150 MovS
	func_172(var_13_bool, var_110_string); // 0x151 NEW_2
	var_111_int = 522965; // 0x153 PushI
	SetMessage(var_111_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_112_int = 522966; // 0x158 PushI
	var_113_int = -1; // 0x159 PushI
	var_114_int = 24157; // 0x15a PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x15b TObjFunc
	var_115_int = 522967; // 0x15d PushI
	var_116_int = -1; // 0x15e PushI
	var_117_int = 24158; // 0x15f PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_3_string = 1; // 0x163 TMovB
	var_118_bool = 0; // 0x164 PushV
	func_884(var_118_bool); // 0x165 NEW_2
	if(var_118_bool == 0) goto Label_363; // 0x167 JumpB
	lshStopAnimation(); // 0x168 Func
	goto Label_365; // 0x16a Jump
	
Label_365:
	return 0; // 0x16d Return
	
Label_363:
	StopAnimation(); // 0x16b Func
	
Label_367:
	return 0; // 0x16f Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_519(var_11_bool, var_12_object); // 0x178 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x17a PushV
	var_17_object = var_12_object; // 0x17b Mov
	TaskCall(0); // 0x17c TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x17d NEW_2
	TaskReturn(); // 0x17e TaskReturn
	return 0; // 0x180 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1a8 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1a9 Eq
	if(var_14_bool == 0) goto Label_430; // 0x1aa JumpB
	func_403(var_12_string); // 0x1ac NEW_2
	
Label_430:
	return 0; // 0x1ae Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1af PushT
	if(var_12_int == 0) goto Label_436; // 0x1b0 JumpB
	func_519(var_10_bool, var_11_bool); // 0x1b2 NEW_2
	
Label_436:
	var_16_bool = 0; // 0x1b4 PushV
	var_16_bool = 0; // 0x1b5 MovB
	var_17_int = var_5_int; // 0x1b6 PushT
	if(var_17_int == 0) goto Label_445; // 0x1b7 JumpB
	var_18_bool = 0; // 0x1b8 PushV
	func_452(var_18_bool); // 0x1b9 NEW_2
	if(var_18_bool == 0) goto Label_445; // 0x1bb JumpB
	var_16_bool = 1; // 0x1bc MovB
	
Label_445:
	if(var_16_bool == 0) goto Label_451; // 0x1bd JumpB
	var_19_object = Obj(); // 0x1be PushV
	func_766(var_19_object); // 0x1bf NEW_2
	RemoveActor(var_19_object); // 0x1c1 Func
	
Label_451:
	return 0; // 0x1c3 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1f1 PushI
	var_14_bool = var_12_int == var_13_int; // 0x1f2 Eq
	if(var_14_bool == 0) goto Label_518; // 0x1f3 JumpB
	var_15_bool = 0; // 0x1f4 PushV
	func_481(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1f5 NEW_2
	if(var_15_bool == 0) goto Label_512; // 0x1f7 JumpB
	var_28_bool = var_2_object == 0; // 0x1f8 Not
	if(var_28_bool == 0) goto Label_511; // 0x1f9 JumpB
	var_29_object = Obj(); // 0x1fa PushV
	var_29_object = var_4_bool; // 0x1fb MovT
	func_748(var_29_object); // 0x1fc NEW_2
	var_2_object = 1; // 0x1fe TMovB
	
Label_511:
	goto Label_518; // 0x1ff Jump
	
Label_518:
	return 0; // 0x206 Return
	
Label_512:
	var_36_object = var_2_object; // 0x200 PushT
	if(var_36_object == 0) goto Label_518; // 0x201 JumpB
	var_37_string = "head"; // 0x202 PushS
	UnlookAsync(var_37_string); // 0x203 Func
	var_2_object = 0; // 0x205 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x170 PushV
	var_12_float = 300; // 0x171 MovI
	var_13_float = 100; // 0x172 MovI
	func_385(var_11_bool, var_12_float, var_13_float); // 0x173 NEW_2
	return 0; // 0x175 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_632(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_878(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_876(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_880(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_882(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_859(var_78_int); // 0x22 NEW_2
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
	var_172_bool = var_26_bool == 0; // 0x38 Not
	if(var_172_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_173_object = Obj(); // 0x3f PushV
	var_173_object = var_17_object; // 0x40 Mov
	func_700(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_385(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x181 PushV
	var_6_int = 0; // 0x182 TMovB
	
Label_387:
	var_18_int = 3; // 0x183 PushI
	rand(var_16_float, var_18_int); // 0x184 Func
	var_19_int = 3; // 0x186 PushI
	var_20_int = var_16_float + var_19_int; // 0x187 Add
	Sleep(var_20_int, var_17_bool); // 0x188 Func
	var_6_int = 1; // 0x18a TMovB
	var_21_float = 0; var_22_float = 0; // 0x18b PushV
	var_21_float = var_12_float; // 0x18c Mov
	var_22_float = var_13_float; // 0x18d Mov
	func_454(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x18e NEW_2
	var_6_int = 0; // 0x190 TMovB
	goto Label_387; // 0x191 Jump
}


func_772(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x304 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x305 Or
	var_58_float = sqrt(var_59_int); // 0x306 Sqrt2
	var_60_float = 0.0; // 0x307 PushF
	var_61_bool = var_58_float < var_60_float; // 0x308 LT
	if(var_61_bool == 0) goto Label_780; // 0x309 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x30a MovV
	return 2; // 0x30b Return
	
Label_780:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x30c Div2
	return 2; // 0x30d Return
}


func_519(var_2_object, var_3_string)
{
	func_614(); // 0x208 NEW_2
	var_13_int = 10; // 0x20a PushI
	KillTimer(var_13_int); // 0x20b Func
	var_14_object = var_2_object; // 0x20d PushT
	if(var_14_object == 0) goto Label_531; // 0x20e JumpB
	var_15_string = "head"; // 0x20f PushS
	UnlookAsync(var_15_string); // 0x210 Func
	var_2_object = 0; // 0x212 TMovB
	
Label_531:
	var_3_string = 1; // 0x213 TMovB
	return 0; // 0x214 Return
}


func_782(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x30e PushV
	GetVariable(var_97_string, var_99_int); // 0x30f Func
	var_96_int = var_99_int; // 0x311 Mov
	return 2; // 0x312 Return
}


func_403(var_5_int)
{
	var_5_int = 1; // 0x193 TMovB
	var_15_bool = 0; // 0x194 PushV
	var_15_bool = 0; // 0x195 MovB
	var_16_bool = 0; // 0x196 PushV
	func_627(var_16_bool); // 0x197 NEW_2
	var_19_bool = var_16_bool == 0; // 0x199 Not
	if(var_19_bool == 0) goto Label_416; // 0x19a JumpB
	var_20_bool = 0; // 0x19b PushV
	func_452(var_20_bool); // 0x19c NEW_2
	if(var_20_bool == 0) goto Label_416; // 0x19e JumpB
	var_15_bool = 1; // 0x19f MovB
	
Label_416:
	if(var_15_bool == 0) goto Label_422; // 0x1a0 JumpB
	var_21_object = Obj(); // 0x1a1 PushV
	func_766(var_21_object); // 0x1a2 NEW_2
	RemoveActor(var_21_object); // 0x1a4 Func
	
Label_422:
	return 0; // 0x1a6 Return
}


func_787(var_108_string, var_109_bool)
{
	var_110_object = Obj(); var_111_object = Obj(); // 0x313 PushV
	FindActor(var_111_object, var_108_string); // 0x314 Func
	var_112_bool = var_111_object == 0; // 0x316 Not
	if(var_112_bool == 0) goto Label_799; // 0x317 JumpB
	var_113_string = "Door "; // 0x318 PushS
	var_114_int = var_113_string + var_108_string; // 0x319 Add
	var_115_string = " not found"; // 0x31a PushS
	var_116_int = var_114_int + var_115_string; // 0x31b Add
	Trace(var_116_int); // 0x31c Func
	goto Label_802; // 0x31e Jump
	
Label_802:
	return 2; // 0x322 Return
	
Label_799:
	var_117_string = "locked"; // 0x31f PushS
	SetProperty(var_117_string, var_109_bool); // 0x320 ObjFunc
}


func_533()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x215 PushV
	WaitForAnimEnd(); // 0x216 Func
	var_44_bool = 0; // 0x218 PushV
	func_627(var_44_bool); // 0x219 NEW_2
	var_45_bool = var_44_bool == 0; // 0x21b Not
	if(var_45_bool == 0) goto Label_542; // 0x21c JumpB
	return 14; // 0x21d Return
	
Label_542:
	var_46_int = 0; // 0x21e PushV
	func_811(var_46_int); // 0x21f NEW_2
	var_37_int = var_46_int; // 0x220 Mov
	var_38_int = 0; // 0x222 MovI
	
Label_547:
	var_59_bool = 0; // 0x223 PushV
	var_59_bool = 0; // 0x224 MovB
	var_60_int = 5; // 0x225 PushI
	var_61_bool = var_38_int < var_60_int; // 0x226 LT
	if(var_61_bool == 0) goto Label_557; // 0x227 JumpB
	var_62_bool = 0; // 0x228 PushV
	func_627(var_62_bool); // 0x229 NEW_2
	if(var_62_bool == 0) goto Label_557; // 0x22b JumpB
	var_59_bool = 1; // 0x22c MovB
	
Label_557:
	if(var_59_bool == 0) goto Label_609; // 0x22d JumpB
	var_63_int = 3; // 0x22e PushI
	irand(var_39_int, var_63_int); // 0x22f Func
	var_64_int = 0; // 0x231 PushI
	var_65_bool = var_39_int == var_64_int; // 0x232 Eq
	if(var_65_bool == 0) goto Label_581; // 0x233 JumpB
	var_66_int = var_37_int; // 0x234 Push
	if(var_66_int == 0) goto Label_580; // 0x235 JumpB
	irand(var_40_int, var_37_int); // 0x236 Func
	var_67_string = "all"; // 0x238 PushS
	var_68_string = ""; var_69_int = 0; // 0x239 PushV
	var_69_int = var_40_int; // 0x23a Mov
	func_804(var_68_string, var_69_int); // 0x23b NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x23d Func
	WaitForAnimEnd(var_41_bool); // 0x23f Func
	var_70_bool = var_41_bool == 0; // 0x241 Not
	if(var_70_bool == 0) goto Label_580; // 0x242 JumpB
	goto Label_609; // 0x243 Jump
	
Label_609:
	ResetAAS(); // 0x261 Func
	return 14; // 0x263 Return
	
Label_580:
	goto Label_598; // 0x244 Jump
	
Label_598:
	var_71_bool = 0; // 0x256 PushV
	func_612(var_71_bool); // 0x257 NEW_2
	var_72_bool = var_71_bool == 0; // 0x259 Not
	if(var_72_bool == 0) goto Label_604; // 0x25a JumpB
	goto Label_609; // 0x25b Jump
	
Label_604:
	ResetAAS(); // 0x25c Func
	var_73_int = 1; // 0x25e PushI
	var_38_int = var_38_int + var_73_int; // 0x25f Add2
	goto Label_547; // 0x260 Jump
	
Label_581:
	var_74_int = 1; // 0x245 PushI
	var_75_bool = var_39_int == var_74_int; // 0x246 Eq
	if(var_75_bool == 0) goto Label_595; // 0x247 JumpB
	var_76_int = 4; // 0x248 PushI
	rand(var_42_float, var_76_int); // 0x249 Func
	var_77_int = 1; // 0x24b PushI
	var_78_int = var_42_float + var_77_int; // 0x24c Add
	Sleep(var_78_int, var_43_bool); // 0x24d Func
	var_79_bool = var_43_bool == 0; // 0x24f Not
	if(var_79_bool == 0) goto Label_594; // 0x250 JumpB
	goto Label_609; // 0x251 Jump
	
Label_594:
	goto Label_598; // 0x252 Jump
	
Label_595:
	var_80_int = var_38_int; // 0x253 Push
	if(var_80_int == 0) goto Label_598; // 0x254 JumpB
	goto Label_609; // 0x255 Jump
}


func_804(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x324 PushV
	var_55_string = "idle"; // 0x325 MovS
	var_56_int = var_53_int; // 0x326 Push
	if(var_56_int == 0) goto Label_809; // 0x327 JumpB
	var_55_string = var_55_string + var_53_int; // 0x328 Add2
	
Label_809:
	var_52_string = var_55_string; // 0x329 Mov
	return 2; // 0x32a Return
}


func_811(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x32b PushV
	var_49_int = 0; // 0x32c MovI
	
Label_813:
	var_51_string = "all"; // 0x32d PushS
	var_52_string = ""; var_53_int = 0; // 0x32e PushV
	var_53_int = var_49_int; // 0x32f Mov
	func_804(var_52_string, var_53_int); // 0x330 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x332 Func
	var_57_bool = var_50_bool == 0; // 0x334 Not
	if(var_57_bool == 0) goto Label_823; // 0x335 JumpB
	goto Label_826; // 0x336 Jump
	
Label_826:
	var_46_int = var_49_int; // 0x33a Mov
	return 4; // 0x33b Return
	
Label_823:
	var_58_int = 1; // 0x337 PushI
	var_49_int = var_49_int + var_58_int; // 0x338 Add2
	goto Label_813; // 0x339 Jump
}


func_172(var_2_object, var_122_string)
{
	var_123_bool = 0; // 0xad PushV
	func_884(var_123_bool); // 0xae NEW_2
	var_124_bool = var_123_bool == 0; // 0xb0 Not
	if(var_124_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_125_bool = var_122_string == var_2_object; // 0xb3 Eq
	if(var_125_bool == 0) goto Label_182; // 0xb4 JumpB
	return 0; // 0xb5 Return
	
Label_182:
	var_126_string = ""; var_127_bool = 0; // 0xb6 PushV
	var_126_string = var_122_string; // 0xb7 Mov
	var_128_string = ""; // 0xb8 PushS
	var_129_bool = var_122_string == var_128_string; // 0xb9 Eq
	if(var_129_bool == 0) goto Label_189; // 0xba JumpB
	var_127_bool = 0; // 0xbb MovB
	goto Label_190; // 0xbc Jump
	
Label_190:
	func_733(var_126_string, var_127_bool); // 0xbe NEW_2
	var_2_object = var_122_string; // 0xc0 TMov
	return 0; // 0xc1 Return
	
Label_189:
	var_127_bool = 1; // 0xbd MovB
}


func_700()
{
	var_174_bool = 0; var_175_bool = 0; // 0x2bc PushV
	CameraSwitchToNormal(); // 0x2bd Func
	var_176_bool = 0; // 0x2bf PushV
	func_884(var_176_bool); // 0x2c0 NEW_2
	if(var_176_bool == 0) goto Label_708; // 0x2c2 JumpB
	goto Label_716; // 0x2c3 Jump
	
Label_716:
	return 2; // 0x2cc Return
	
Label_708:
	var_177_string = "head"; // 0x2c4 PushS
	HasAnimationTrack(var_175_bool, var_177_string); // 0x2c5 Func
	var_178_bool = var_175_bool; // 0x2c7 Push
	if(var_178_bool == 0) goto Label_716; // 0x2c8 JumpB
	var_179_string = "head"; // 0x2c9 PushS
	UnlookAsync(var_179_string); // 0x2ca Func
}


func_828()
{
	var_104_string = "oob12TWhitemask1"; // 0x33d PushS
	var_105_int = 1; // 0x33e PushI
	SetVariable(var_104_string, var_105_int); // 0x33f Func
	return 0; // 0x341 Return
}


func_834()
{
	var_108_string = ""; var_109_bool = 0; // 0x343 PushV
	var_108_string = "itheater@door1"; // 0x344 MovS
	var_109_bool = 0; // 0x345 MovB
	func_787(var_108_string, var_109_bool); // 0x346 NEW_2
	return 0; // 0x348 Return
}


func_452(var_18_bool)
{
	var_18_bool = 1; // 0x1c4 MovB
	return 0; // 0x1c5 Return
}


func_454(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1c7 PushV
	func_627(var_23_bool); // 0x1c8 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1ca Not
	if(var_26_bool == 0) goto Label_461; // 0x1cb JumpB
	return 0; // 0x1cc Return
	
Label_461:
	var_27_string = "player"; // 0x1cd PushS
	FindActor(var_17_bool, var_27_string); // 0x1ce Func
	var_2_object = 0; // 0x1d0 TMovB
	var_3_string = 0; // 0x1d1 TMovB
	var_0_object = var_21_float; // 0x1d2 TMov
	var_1_object = var_22_float; // 0x1d3 TMov
	var_28_int = 10; // 0x1d4 PushI
	var_29_float = 1.0; // 0x1d5 PushF
	SetTimer(var_28_int, var_29_float); // 0x1d6 Func
	func_533(); // 0x1d9 NEW_2
	var_81_bool = var_3_string == 0; // 0x1db Not
	if(var_81_bool == 0) goto Label_480; // 0x1dc JumpB
	var_82_int = 10; // 0x1dd PushI
	KillTimer(var_82_int); // 0x1de Func
	
Label_480:
	return 0; // 0x1e0 Return
}


func_841()
{
	var_120_string = "b12q01TheaterIsVisited"; // 0x34a PushS
	var_121_int = 1; // 0x34b PushI
	SetVariable(var_120_string, var_121_int); // 0x34c Func
	return 0; // 0x34e Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_142; // 0x4f JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	func_847(var_95_object); // 0x52 NEW_2
	if(var_94_bool == 0) goto Label_120; // 0x54 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_1_object; // 0x56 MovT
	var_103_object = var_0_object; // 0x57 MovT
	func_828(); // 0x58 NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x5a PushV
	var_106_object = var_1_object; // 0x5b MovT
	var_107_object = var_0_object; // 0x5c MovT
	func_834(); // 0x5d NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0x5f PushV
	var_118_object = var_1_object; // 0x60 MovT
	var_119_object = var_0_object; // 0x61 MovT
	func_841(); // 0x62 NEW_2
	var_122_string = ""; // 0x64 PushV
	var_122_string = "Neutral"; // 0x65 MovS
	func_172(var_88_object, var_122_string); // 0x66 NEW_2
	var_139_int = 522959; // 0x68 PushI
	SetMessage(var_139_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_140_int = 522960; // 0x6d PushI
	var_141_int = 24152; // 0x6e PushI
	var_142_int = 24151; // 0x6f PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x70 TObjFunc
	var_143_int = 522973; // 0x72 PushI
	var_144_int = -1; // 0x73 PushI
	var_145_int = 24164; // 0x74 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x75 TObjFunc
	goto Label_142; // 0x77 Jump
	
Label_142:
	var_146_bool = 0; // 0x8e PushV
	func_884(var_146_bool); // 0x8f NEW_2
	if(var_146_bool == 0) goto Label_157; // 0x91 JumpB
	
Label_146:
	lshWaitForAnimEnd(); // 0x92 Func
	var_147_string = var_3_string; // 0x94 PushT
	if(var_147_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_156:
	goto Label_171; // 0x9c Jump
	
Label_171:
	return 0; // 0xab Return
	
Label_151:
	var_148_string = ""; // 0x97 PushV
	var_148_string = var_2_object; // 0x98 MovT
	func_717(var_148_string); // 0x99 NEW_2
	goto Label_146; // 0x9b Jump
	
Label_157:
	var_159_string = "all"; // 0x9d PushS
	var_160_string = "idle"; // 0x9e PushS
	PlayAnimation(var_159_string, var_160_string); // 0x9f Func
	
Label_161:
	WaitForAnimEnd(); // 0xa1 Func
	var_161_string = var_3_string; // 0xa3 PushT
	if(var_161_string == 0) goto Label_166; // 0xa4 JumpB
	goto Label_171; // 0xa5 Jump
	
Label_166:
	var_162_string = "all"; // 0xa6 PushS
	var_163_string = "idle"; // 0xa7 PushS
	PlayAnimation(var_162_string, var_163_string); // 0xa8 Func
	goto Label_161; // 0xaa Jump
	
Label_120:
	var_164_string = ""; // 0x78 PushV
	var_164_string = "Neutral"; // 0x79 MovS
	func_172(var_88_object, var_164_string); // 0x7a NEW_2
	var_165_int = 523196; // 0x7c PushI
	SetMessage(var_165_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_166_int = 523197; // 0x81 PushI
	var_167_int = -1; // 0x82 PushI
	var_168_int = 24400; // 0x83 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x84 TObjFunc
	var_169_int = 523198; // 0x86 PushI
	var_170_int = -1; // 0x87 PushI
	var_171_int = 24401; // 0x88 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x89 TObjFunc
	goto Label_142; // 0x8b Jump
}


func_717(var_148_string)
{
	var_149_bool = 0; var_150_float = 0; var_151_float = 0; var_152_bool = 0; var_153_float = 0; var_154_float = 0; // 0x2cd PushV
	lshHasAnimation(var_152_bool, var_148_string); // 0x2ce Func
	var_155_bool = var_152_bool; // 0x2d0 Push
	if(var_155_bool == 0) goto Label_728; // 0x2d1 JumpB
	lshGetAnimTimes(var_148_string, var_153_float, var_154_float); // 0x2d2 Func
	var_156_bool = 0; // 0x2d4 PushB
	lshPlayAnimation(var_153_float, var_154_float, var_156_bool); // 0x2d5 Func
	goto Label_732; // 0x2d7 Jump
	
Label_732:
	return 6; // 0x2dc Return
	
Label_728:
	var_157_string = "Can't find lsh animation : "; // 0x2d8 PushS
	var_158_int = var_157_string + var_148_string; // 0x2d9 Add
	Trace(var_158_int); // 0x2da Func
}


func_847(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x350 PushV
	var_97_string = "oob12TWhitemask1"; // 0x351 MovS
	func_782(var_96_int, var_97_string); // 0x352 NEW_2
	var_100_int = 0; // 0x354 PushI
	var_101_bool = var_96_int == var_100_int; // 0x355 Eq
	if(var_101_bool == 0) goto Label_857; // 0x356 JumpB
	var_94_bool = 1; // 0x357 MovB
	return 0; // 0x358 Return
	
Label_857:
	var_94_bool = 0; // 0x359 MovB
	return 0; // 0x35a Return
}


func_859(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x35b PushV
	var_81_string = "branch"; // 0x35c PushS
	GetVariable(var_81_string, var_80_int); // 0x35d Func
	var_82_int = 0; // 0x35f PushI
	var_83_bool = var_80_int == var_82_int; // 0x360 Eq
	if(var_83_bool == 0) goto Label_869; // 0x361 JumpB
	var_78_int = 1; // 0x362 MovI
	return 2; // 0x363 Return
	
Label_869:
	var_84_int = 1; // 0x365 PushI
	var_85_bool = var_80_int == var_84_int; // 0x366 Eq
	if(var_85_bool == 0) goto Label_874; // 0x367 JumpB
	var_78_int = 2; // 0x368 MovI
	return 2; // 0x369 Return
	
Label_874:
	var_78_int = 3; // 0x36a MovI
	return 2; // 0x36b Return
}


func_733(var_126_string, var_127_bool)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x2dd PushV
	lshHasAnimation(var_133_bool, var_126_string); // 0x2de Func
	var_136_bool = var_133_bool; // 0x2e0 Push
	if(var_136_bool == 0) goto Label_743; // 0x2e1 JumpB
	lshGetAnimTimes(var_126_string, var_134_float, var_135_float); // 0x2e2 Func
	lshPlayAnimation(var_134_float, var_135_float, var_127_bool); // 0x2e4 Func
	goto Label_747; // 0x2e6 Jump
	
Label_747:
	return 6; // 0x2eb Return
	
Label_743:
	var_137_string = "Can't find lsh animation : "; // 0x2e7 PushS
	var_138_int = var_137_string + var_126_string; // 0x2e8 Add
	Trace(var_138_int); // 0x2e9 Func
}


func_481(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1e1 PushV
	var_18_bool = var_4_bool == 0; // 0x1e2 NullEq
	if(var_18_bool == 0) goto Label_486; // 0x1e3 JumpB
	var_15_bool = 0; // 0x1e4 MovB
	return 2; // 0x1e5 Return
	
Label_486:
	var_19_float = 0; var_20_object = Obj(); // 0x1e6 PushV
	var_20_object = var_4_bool; // 0x1e7 MovT
	func_619(var_20_object); // 0x1e8 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1ea Sqrt2
	var_27_object = var_2_object; // 0x1eb PushT
	if(var_27_object == 0) goto Label_494; // 0x1ec JumpB
	var_17_float = var_17_float - var_1_object; // 0x1ed Sub2
	
Label_494:
	var_15_bool = var_17_float < var_0_object; // 0x1ee LT2
	return 2; // 0x1ef Return
}


func_612(var_71_bool)
{
	var_71_bool = 1; // 0x264 MovB
	return 0; // 0x265 Return
}


func_614()
{
	StopAnimation(); // 0x266 Func
	StopGroup0(); // 0x268 Func
	return 0; // 0x26a Return
}


func_619(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x26b PushV
	GetPosition(var_24_cvector); // 0x26c Func
	GetPosition(var_25_cvector); // 0x26e ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x270 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x271 Or2
	return 6; // 0x272 Return
}


func_876(var_75_int)
{
	var_75_int = 515569; // 0x36c MovI
	return 0; // 0x36d Return
}


func_748(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2ec PushV
	GetEyesHeight(var_32_float); // 0x2ed ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2ef MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2f0 PushE
	var_34_float = var_32_float; // 0x2f1 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2f2 PopE
	var_35_string = "head"; // 0x2f3 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2f4 Func
	return 4; // 0x2f6 Return
}


func_878(var_74_int)
{
	var_74_int = 503354; // 0x36e MovI
	return 0; // 0x36f Return
}


func_880(var_76_string)
{
	var_76_string = "ui/NPC_wmask.png"; // 0x370 MovS
	return 0; // 0x371 Return
}


func_882(var_77_string)
{
	var_77_string = "ui/NPC_wmask_b.png"; // 0x372 MovS
	return 0; // 0x373 Return
}


func_627(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x273 PushV
	IsLoaded(var_25_bool); // 0x274 Func
	var_23_bool = var_25_bool; // 0x276 Mov
	return 2; // 0x277 Return
}


func_884(var_69_bool)
{
	var_69_bool = 0; // 0x374 MovB
	return 0; // 0x375 Return
}


func_759()
{
	var_15_bool = 0; // 0x2f7 PushV
	func_884(var_15_bool); // 0x2f8 NEW_2
	if(var_15_bool == 0) goto Label_765; // 0x2fa JumpB
	lshStopSpeech(); // 0x2fb Func
	
Label_765:
	return 0; // 0x2fd Return
}


func_632(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x278 PushV
	GetPosition(var_40_cvector); // 0x279 ObjFunc
	GetEyesHeight(var_39_float); // 0x27b ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x27d PushE
	var_48_float = var_48_float + var_39_float; // 0x27e Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x27f PopE
	GetPosition(var_41_cvector); // 0x280 Func
	GetEyesHeight(var_39_float); // 0x282 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x284 PushE
	var_49_float = var_49_float + var_39_float; // 0x285 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x286 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x287 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x288 PushE
	var_50_float = 0; // 0x289 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x28a PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x28b Or
	var_52_float = sqrt(var_51_int); // 0x28c Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x28d Div2
	var_43_cvector = -var_42_cvector; // 0x28e Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x28f Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x290 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x291 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x292 Xor2
	func_772(var_54_cvector, var_55_cvector); // 0x293 NEW_2
	var_62_int = 25; // 0x295 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x296 Mult
	var_64_int = var_53_float + var_63_float; // 0x297 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x298 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x299 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x29a Add2
	IsOverrideActive(var_46_bool); // 0x29b Func
	var_66_bool = var_46_bool; // 0x29d Push
	if(var_66_bool == 0) goto Label_673; // 0x29e JumpB
	var_27_bool = 0; // 0x29f MovB
	return 18; // 0x2a0 Return
	
Label_673:
	StopWorld(); // 0x2a1 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x2a3 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x2a5 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x2a6 PushE
	Rotate(var_67_float, var_68_float); // 0x2a7 Func
	var_69_bool = 0; // 0x2a9 PushV
	func_884(var_69_bool); // 0x2aa NEW_2
	if(var_69_bool == 0) goto Label_686; // 0x2ac JumpB
	goto Label_694; // 0x2ad Jump
	
Label_694:
	CameraWaitForPlayFinish(); // 0x2b6 Func
	ResumeWorld(); // 0x2b8 Func
	var_27_bool = 1; // 0x2ba MovB
	return 18; // 0x2bb Return
	
Label_686:
	var_70_string = "head"; // 0x2ae PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x2af Func
	var_71_bool = var_47_bool; // 0x2b1 Push
	if(var_71_bool == 0) goto Label_694; // 0x2b2 JumpB
	var_72_string = "head"; // 0x2b3 PushS
	LookAsyncCamera(var_72_string); // 0x2b4 Func
}


func_766(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2fe PushV
	self(var_21_object); // 0x2ff Func
	var_19_object = var_21_object; // 0x301 Mov
	return 2; // 0x302 Return
}


