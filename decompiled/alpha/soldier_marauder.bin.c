task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x18 PushV
	IsOverrideActive(var_7_bool); // 0x19 Func
	var_8_bool = var_7_bool == 0; // 0x1b Not
	if(var_8_bool == 0) goto Label_31; // 0x1c JumpB
	WorkWithCorpse(var_5_bool); // 0x1d Func
	
Label_31:
	return 2; // 0x1f Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	return 0; // 0x8e Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_cvector, var_6_bool)
{
	return 0; // 0x90 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool)
{
	return 0; // 0x92 Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0xa2 PushV
	var_8_int = 110; // 0xa3 PushI
	var_9_bool = var_5_bool != var_8_int; // 0xa4 Neq
	if(var_9_bool == 0) goto Label_167; // 0xa5 JumpB
	return 2; // 0xa6 Return
	
Label_167:
	IsInWalkMode(var_7_bool); // 0xa7 Func
	var_10_bool = var_7_bool; // 0xa9 Push
	if(var_10_bool == 0) goto Label_180; // 0xaa JumpB
	var_11_bool = 0; // 0xab PushV
	func_156(var_11_bool); // 0xac Call
	if(var_11_bool == 0) goto Label_178; // 0xae JumpB
	SwitchToRun(); // 0xaf Func
	goto Label_180; // 0xb1 Jump
	
Label_180:
	return 2; // 0xb4 Return
	
Label_178:
	SwitchToWalk(); // 0xb2 Func
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	func_181(); // 0xbe Call
	var_7_object = Obj(); // 0xc0 PushV
	var_7_object = var_5_bool; // 0xc1 Mov
	func_766(); // 0xc2 Call
	return 0; // 0xc4 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj(); // 0xc6 PushV
	var_7_object = var_5_bool; // 0xc7 Mov
	func_556(var_6_bool, var_7_object); // 0xc8 Call
	var_40_bool = var_6_bool == 0; // 0xca Not
	if(var_40_bool == 0) goto Label_205; // 0xcb JumpB
	return 0; // 0xcc Return
	
Label_205:
	func_181(); // 0xce Call
	var_42_object = Obj(); // 0xd0 PushV
	var_42_object = var_5_bool; // 0xd1 Mov
	func_772(var_42_object); // 0xd2 Call
	return 0; // 0xd4 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj(); // 0xd6 PushV
	var_7_object = var_5_bool; // 0xd7 Mov
	func_786(var_6_bool, var_7_object); // 0xd8 Call
	if(var_6_bool == 0) goto Label_226; // 0xda JumpB
	func_181(); // 0xdc Call
	var_46_object = Obj(); // 0xde PushV
	var_46_object = var_5_bool; // 0xdf Mov
	func_799(var_46_object); // 0xe0 Call
	
Label_226:
	return 0; // 0xe2 Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj(); // 0xe4 PushV
	var_7_object = var_5_bool; // 0xe5 Mov
	func_807(var_6_bool, var_7_object); // 0xe6 Call
	if(var_6_bool == 0) goto Label_240; // 0xe8 JumpB
	func_181(); // 0xea Call
	var_46_object = Obj(); // 0xec PushV
	var_46_object = var_5_bool; // 0xed Mov
	func_820(var_46_object); // 0xee Call
	
Label_240:
	return 0; // 0xf0 Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	RequestClearPath(var_5_bool); // 0x12b Func
	return 0; // 0x12d Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool)
{
	Stop(); // 0x12e Func
	return 0; // 0x130 Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_int)
{
	var_6_cvector = CVector(0,0,0); var_7_float = 0; var_8_cvector = CVector(0,0,0); var_9_float = 0; var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_cvector = CVector(0,0,0); var_13_float = 0; // 0x197 PushV
	var_14_int = 120; // 0x198 PushI
	var_15_bool = var_5_int != var_14_int; // 0x199 Neq
	if(var_15_bool == 0) goto Label_412; // 0x19a JumpB
	return 8; // 0x19b Return
	
Label_412:
	var_16_bool = var_0_bool == 0; // 0x19c NullEq
	if(var_16_bool == 0) goto Label_421; // 0x19d JumpB
	Stop(); // 0x19e Func
	var_17_int = 1; // 0x1a0 PushI
	KillTimer(var_17_int); // 0x1a1 Func
	var_2_object = 1; // 0x1a3 TMovB
	goto Label_458; // 0x1a4 Jump
	
Label_458:
	return 8; // 0x1ca Return
	
Label_421:
	GetDirection(var_10_cvector); // 0x1a5 Func
	var_18_float = 7000.0; // 0x1a7 PushF
	FindDirLength(var_11_float, var_10_cvector, var_18_float); // 0x1a8 Func
	var_19_cvector = CVector(0,0,0); var_20_float = 0; // 0x1aa PushV
	var_20_float = 1.74533; // 0x1ab MovF
	func_313(var_19_cvector, var_20_float); // 0x1ac Call
	var_12_cvector = var_19_cvector; // 0x1ad Mov
	var_13_float = var_12_cvector | var_12_cvector; // 0x1af Or2
	var_49_bool = 0; // 0x1b0 PushV
	var_49_bool = 0; // 0x1b1 MovB
	var_50_float = 10000.0; // 0x1b2 PushF
	var_51_bool = var_13_float >= var_50_float; // 0x1b3 GE
	if(var_51_bool == 0) goto Label_451; // 0x1b4 JumpB
	var_52_bool = 0; // 0x1b5 PushV
	var_52_bool = 1; // 0x1b6 MovB
	var_53_float = var_11_float * var_11_float; // 0x1b7 Mult
	var_54_float = 2.25; // 0x1b8 PushF
	var_55_float = var_53_float * var_54_float; // 0x1b9 Mult
	var_56_bool = var_13_float >= var_55_float; // 0x1ba GE
	if(var_56_bool == 0) goto Label_449; // 0x1bb JumpB
	var_57_bool = 0; // 0x1bc PushV
	func_475(var_52_bool, var_57_bool); // 0x1bd Call
	if(var_57_bool == 0) goto Label_449; // 0x1bf JumpB
	var_52_bool = 0; // 0x1c0 MovB
	
Label_449:
	if(var_52_bool == 0) goto Label_451; // 0x1c1 JumpB
	var_49_bool = 1; // 0x1c2 MovB
	
Label_451:
	if(var_49_bool == 0) goto Label_458; // 0x1c3 JumpB
	Stop(); // 0x1c4 Func
	var_77_cvector = CVector(0,0,0); // 0x1c6 PushV
	func_491(var_77_cvector); // 0x1c7 Call
	var_1_bool = var_77_cvector + var_12_cvector; // 0x1c9 Add2
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object)
{
	func_459(var_5_object); // 0x1d4 Call
	var_7_object = Obj(); // 0x1d6 PushV
	var_7_object = var_5_object; // 0x1d7 Mov
	func_766(); // 0x1d8 Call
	return 0; // 0x1da Return
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float)
{
	var_9_object = Obj(); var_10_int = 0; var_11_float = 0; // 0x2ea PushV
	var_9_object = var_5_object; // 0x2eb Mov
	var_10_int = var_6_int; // 0x2ec Mov
	var_11_float = var_7_float; // 0x2ed Mov
	func_580(var_10_int, var_11_float); // 0x2ee Call
	return 0; // 0x2f0 Return
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_float = 0; // 0x2f1 PushV
	var_9_string = "health"; // 0x2f2 PushS
	var_10_bool = var_6_string == var_9_string; // 0x2f3 Eq
	if(var_10_bool == 0) goto Label_765; // 0x2f4 JumpB
	var_11_string = "health"; // 0x2f5 PushS
	GetProperty(var_11_string, var_8_float); // 0x2f6 Func
	var_12_int = 0; // 0x2f8 PushI
	var_13_bool = var_8_float <= var_12_int; // 0x2f9 LE
	if(var_13_bool == 0) goto Label_765; // 0x2fa JumpB
	SignalDeath(var_5_object); // 0x2fb Func
	
Label_765:
	return 2; // 0x2fd Return
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object)
{
	var_6_object = Obj(); // 0x2ff PushV
	var_6_object = var_5_object; // 0x300 Mov
	func_780(var_6_object); // 0x301 Call
	return 0; // 0x303 Return
}


main(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool)
{
	
Label_147:
	var_5_int = 110; // 0x93 PushI
	var_6_float = 0.3; // 0x94 PushF
	SetTimer(var_5_int, var_6_float); // 0x95 Func
	func_241(var_3_cvector, var_4_bool); // 0x98 Call
	goto Label_147; // 0x9a Jump
}


func_0(var_8_object)
{
	func_695(); // 0x2 Call
	var_49_object = Obj(); // 0x4 PushV
	var_49_object = var_8_object; // 0x5 Mov
	func_9(var_49_object); // 0x6 Call
	return 0; // 0x8 Return
}


func_515(var_25_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x203 PushV
	IsDead(var_28_bool); // 0x204 ObjFunc
	var_25_bool = var_28_bool; // 0x206 Mov
	return 2; // 0x207 Return
}


func_772(var_42_object)
{
	var_43_object = Obj(); // 0x305 PushV
	var_43_object = var_42_object; // 0x306 Mov
	TaskCall(3); // 0x307 TaskCall
	func_343(var_44_object, var_45_cvector, var_46_bool, var_43_object); // 0x308 Call
	TaskReturn(); // 0x309 TaskReturn
	return 0; // 0x30b Return
}


func_647(var_35_cvector, var_36_cvector)
{
	var_37_float = 0; var_38_float = 0; // 0x287 PushV
	var_39_int = var_36_cvector | var_36_cvector; // 0x288 Or
	var_38_float = sqrt(var_39_int); // 0x289 Sqrt2
	var_40_float = 0.0; // 0x28a PushF
	var_41_bool = var_38_float < var_40_float; // 0x28b LT
	if(var_41_bool == 0) goto Label_655; // 0x28c JumpB
	var_35_cvector = CVector(0.0, 0.0, 0.0); // 0x28d MovV
	return 2; // 0x28e Return
	
Label_655:
	var_35_cvector = var_36_cvector / var_36_cvector; // 0x28f Div2
	return 2; // 0x290 Return
}


func_520(var_14_bool, var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); // 0x208 PushV
	var_20_bool = var_15_object == 0; // 0x209 NullEq
	if(var_20_bool == 0) goto Label_525; // 0x20a JumpB
	var_14_bool = 0; // 0x20b MovB
	return 4; // 0x20c Return
	
Label_525:
	var_21_bool = 0; // 0x20d PushV
	var_21_bool = 0; // 0x20e MovB
	var_22_string = "IsDead"; // 0x20f PushS
	var_23_int = 1; // 0x210 PushI
	var_24_bool = IsFuncExist(var_15_object, var_22_string, var_23_int); // 0x211 FuncExist
	if(var_24_bool == 0) goto Label_537; // 0x212 JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x213 PushV
	var_26_object = var_15_object; // 0x214 Mov
	func_515(var_26_object); // 0x215 Call
	if(var_25_bool == 0) goto Label_537; // 0x217 JumpB
	var_21_bool = 1; // 0x218 MovB
	
Label_537:
	if(var_21_bool == 0) goto Label_540; // 0x219 JumpB
	var_14_bool = 0; // 0x21a MovB
	return 4; // 0x21b Return
	
Label_540:
	GetScene(var_18_object); // 0x21c Func
	var_29_bool = var_18_object == 0; // 0x21e NullEq
	if(var_29_bool == 0) goto Label_546; // 0x21f JumpB
	var_14_bool = 0; // 0x220 MovB
	return 4; // 0x221 Return
	
Label_546:
	GetScene(var_19_object); // 0x222 ObjFunc
	var_30_bool = var_18_object != var_19_object; // 0x224 Neq
	if(var_30_bool == 0) goto Label_552; // 0x225 JumpB
	var_14_bool = 0; // 0x226 MovB
	return 4; // 0x227 Return
	
Label_552:
	var_14_bool = 1; // 0x228 MovB
	return 4; // 0x229 Return
}


func_9(var_49_object)
{
	EventDisable(0); // 0xa EventDisable
	var_50_object = Obj(); // 0xb PushV
	var_50_object = var_49_object; // 0xc Mov
	func_32(var_50_object); // 0xd Call
	var_100_int = 50; // 0xf PushI
	var_101_int = 40; // 0x10 PushI
	SetRTEnvelope(var_100_int, var_101_int); // 0x11 Func
	EventEnable(0); // 0x13 EventEnable
	
Label_20:
	Hold(); // 0x14 Func
	goto Label_20; // 0x16 Jump
}


func_780(var_6_object)
{
	var_7_object = Obj(); // 0x30d PushV
	var_7_object = var_6_object; // 0x30e Mov
	func_737(var_7_object); // 0x30f Call
	return 0; // 0x311 Return
}


func_657(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_int = var_69_cvector | var_70_cvector; // 0x292 Or
	var_72_int = var_69_cvector | var_69_cvector; // 0x293 Or
	var_73_int = var_70_cvector | var_70_cvector; // 0x294 Or
	var_74_float = var_72_int * var_73_int; // 0x295 Mult
	var_75_float = sqrt(var_74_float); // 0x296 Sqrt
	var_68_float = var_71_int / var_71_int; // 0x297 Div2
	return 0; // 0x298 Return
}


func_786(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x312 PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x313 PushV
	var_11_object = var_7_object; // 0x314 Mov
	func_556(var_10_bool, var_11_object); // 0x315 Call
	var_44_bool = var_10_bool == 0; // 0x317 Not
	if(var_44_bool == 0) goto Label_795; // 0x318 JumpB
	var_6_bool = 0; // 0x319 MovB
	return 2; // 0x31a Return
	
Label_795:
	IsPlayerActor(var_7_object, var_9_bool); // 0x31b Func
	var_6_bool = var_9_bool; // 0x31d Mov
	return 2; // 0x31e Return
}


func_665(var_14_int, var_15_int)
{
	var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; // 0x299 PushV
	var_24_bool = var_14_int > var_15_int; // 0x29a GT
	if(var_24_bool == 0) goto Label_672; // 0x29b JumpB
	var_25_string = "GenerateMoney: iMin > iMax"; // 0x29c PushS
	Trace(var_25_string); // 0x29d Func
	return 8; // 0x29f Return
	
Label_672:
	var_20_int = 0; // 0x2a0 MovI
	var_26_bool = var_14_int != var_15_int; // 0x2a1 Neq
	if(var_26_bool == 0) goto Label_679; // 0x2a2 JumpB
	var_27_int = var_15_int - var_14_int; // 0x2a3 Sub
	irand(var_21_int, var_27_int); // 0x2a4 Func
	goto Label_683; // 0x2a6 Jump
	
Label_683:
	var_20_int = var_20_int + var_14_int; // 0x2ab Add2
	var_28_int = 0; // 0x2ac PushI
	var_29_bool = var_20_int == var_28_int; // 0x2ad Eq
	if(var_29_bool == 0) goto Label_688; // 0x2ae JumpB
	return 8; // 0x2af Return
	
Label_688:
	var_30_string = "Money"; // 0x2b0 PushS
	GetInvItemByName(var_22_int, var_30_string); // 0x2b1 Func
	var_31_int = 0; // 0x2b3 PushI
	AddItem(var_23_bool, var_22_int, var_31_int, var_20_int); // 0x2b4 Func
	return 8; // 0x2b6 Return
	
Label_679:
	var_32_int = 0; // 0x2a7 PushI
	var_33_bool = var_14_int == var_32_int; // 0x2a8 Eq
	if(var_33_bool == 0) goto Label_683; // 0x2a9 JumpB
	return 8; // 0x2aa Return
}


func_156(var_28_bool)
{
	var_29_float = 0; var_30_float = 0; // 0x9c PushV
	GetBrightness(var_30_float); // 0x9d Func
	var_31_float = 0.5; // 0x9f PushF
	var_28_bool = var_30_float >= var_31_float; // 0xa0 GE2
	return 2; // 0xa1 Return
}


func_799(var_46_object)
{
	var_47_object = Obj(); // 0x320 PushV
	var_47_object = var_46_object; // 0x321 Mov
	TaskCall(3); // 0x322 TaskCall
	func_343(var_48_object, var_49_cvector, var_50_bool, var_47_object); // 0x323 Call
	TaskReturn(); // 0x324 TaskReturn
	return 0; // 0x326 Return
}


func_32(var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_string = ""; var_56_object = Obj(); var_57_bool = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); // 0x20 PushV
	var_71_bool = var_50_object == 0; // 0x21 NullEq
	if(var_71_bool == 0) goto Label_40; // 0x22 JumpB
	var_72_string = ""; // 0x23 PushV
	var_72_string = "fdie"; // 0x24 MovS
	func_119(var_72_string); // 0x25 Call
	goto Label_118; // 0x27 Jump
	
Label_118:
	return 20; // 0x76 Return
	
Label_40:
	GetPosition(var_61_cvector); // 0x28 ObjFunc
	GetPosition(var_62_cvector); // 0x2a Func
	GetDirection(var_63_cvector); // 0x2c Func
	var_64_cvector = var_62_cvector - var_61_cvector; // 0x2e Sub2
	var_75_float = GetByIndex(var_64_cvector, 0); // 0x2f PushE
	var_76_float = GetByIndex(var_63_cvector, 0); // 0x30 PushE
	var_77_float = var_75_float * var_76_float; // 0x31 Mult
	var_78_float = GetByIndex(var_64_cvector, 2); // 0x32 PushE
	var_79_float = GetByIndex(var_63_cvector, 2); // 0x33 PushE
	var_80_float = var_78_float * var_79_float; // 0x34 Mult
	var_81_int = var_77_float + var_80_float; // 0x35 Add
	var_82_int = 0; // 0x36 PushI
	var_83_bool = var_81_int >= var_82_int; // 0x37 GE
	if(var_83_bool == 0) goto Label_59; // 0x38 JumpB
	var_65_string = "fdie"; // 0x39 MovS
	goto Label_60; // 0x3a Jump
	
Label_60:
	RemoveRTEnvelope(); // 0x3c Func
	SetDeathState(); // 0x3e Func
	Stop(); // 0x40 Func
	StopAsync(); // 0x42 Func
	var_66_object = var_50_object; // 0x44 Mov
	var_84_string = "GetScriptProperty"; // 0x45 PushS
	var_85_int = 2; // 0x46 PushI
	var_86_bool = IsFuncExist(var_50_object, var_84_string, var_85_int); // 0x47 FuncExist
	if(var_86_bool == 0) goto Label_84; // 0x48 JumpB
	var_87_string = "Owner"; // 0x49 PushS
	HasScriptProperty(var_67_bool, var_87_string); // 0x4a ObjFunc
	var_88_bool = var_67_bool; // 0x4c Push
	if(var_88_bool == 0) goto Label_84; // 0x4d JumpB
	var_89_string = "Owner"; // 0x4e PushS
	GetScriptProperty(var_66_object, var_89_string); // 0x4f ObjFunc
	var_90_bool = var_66_object == 0; // 0x51 NullEq
	if(var_90_bool == 0) goto Label_84; // 0x52 JumpB
	var_66_object = var_50_object; // 0x53 Mov
	
Label_84:
	var_91_string = "@GetEyesHeight"; // 0x54 PushS
	var_92_int = 1; // 0x55 PushI
	var_93_bool = IsFuncExist(var_66_object, var_91_string, var_92_int); // 0x56 FuncExist
	if(var_93_bool == 0) goto Label_99; // 0x57 JumpB
	GetEyesHeight(var_69_float); // 0x58 ObjFunc
	var_70_cvector = CVector(0.0, 0.0, 0.0); // 0x5a MovV
	var_94_float = GetByIndex(var_70_cvector, 1); // 0x5b PushE
	var_94_float = var_69_float; // 0x5c Mov
	SetByIndex(var_70_cvector, 1) = var_94_float; // 0x5d PopE
	var_95_string = "head"; // 0x5e PushS
	LookAsync(var_50_object, var_95_string, var_70_cvector); // 0x5f Func
	var_68_bool = 1; // 0x61 MovB
	goto Label_100; // 0x62 Jump
	
Label_100:
	var_96_string = "all"; // 0x64 PushS
	PlayAnimation(var_96_string, var_65_string); // 0x65 Func
	WaitForAnimEnd(); // 0x67 Func
	var_97_bool = var_68_bool; // 0x69 Push
	if(var_97_bool == 0) goto Label_112; // 0x6a JumpB
	StopAsync(); // 0x6b Func
	var_98_string = "head"; // 0x6d PushS
	UnlookAsync(var_98_string); // 0x6e Func
	
Label_112:
	var_99_string = "all"; // 0x70 PushS
	LockAnimationEnd(var_99_string, var_65_string); // 0x71 Func
	RemoveEnvelope(); // 0x73 Func
	var_66_object = 0; // 0x75 SetNull
	
Label_99:
	var_68_bool = 0; // 0x63 MovB
	
Label_59:
	var_65_string = "bdie"; // 0x3b MovS
}


func_807(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x327 PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x328 PushV
	var_11_object = var_7_object; // 0x329 Mov
	func_556(var_10_bool, var_11_object); // 0x32a Call
	var_44_bool = var_10_bool == 0; // 0x32c Not
	if(var_44_bool == 0) goto Label_816; // 0x32d JumpB
	var_6_bool = 0; // 0x32e MovB
	return 2; // 0x32f Return
	
Label_816:
	IsPlayerActor(var_7_object, var_9_bool); // 0x330 Func
	var_6_bool = var_9_bool; // 0x332 Mov
	return 2; // 0x333 Return
}


func_556(var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x22c PushV
	var_14_bool = 0; var_15_object = Obj(); // 0x22d PushV
	var_15_object = var_11_object; // 0x22e Mov
	func_520(var_14_bool, var_15_object); // 0x22f Call
	var_31_bool = var_14_bool == 0; // 0x231 Not
	if(var_31_bool == 0) goto Label_565; // 0x232 JumpB
	var_10_bool = 0; // 0x233 MovB
	return 2; // 0x234 Return
	
Label_565:
	var_32_bool = 0; var_33_object = Obj(); var_34_string = ""; // 0x235 PushV
	var_33_object = var_11_object; // 0x236 Mov
	var_34_string = "noaccess"; // 0x237 MovS
	func_503(var_32_bool, var_33_object, var_34_string); // 0x238 Call
	var_41_bool = var_32_bool == 0; // 0x23a Not
	if(var_41_bool == 0) goto Label_574; // 0x23b JumpB
	var_10_bool = 1; // 0x23c MovB
	return 2; // 0x23d Return
	
Label_574:
	var_42_string = "noaccess"; // 0x23e PushS
	GetProperty(var_42_string, var_13_int); // 0x23f ObjFunc
	var_43_int = 0; // 0x241 PushI
	var_10_bool = var_13_int == var_43_int; // 0x242 Eq2
	return 2; // 0x243 Return
}


func_305(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x131 TMovB
	var_1_bool = 0; // 0x132 TMovB
	Stop(); // 0x133 Func
	StopGroup0(); // 0x135 Func
	return 0; // 0x137 Return
}


func_820(var_46_object)
{
	var_47_object = Obj(); // 0x335 PushV
	var_47_object = var_46_object; // 0x336 Mov
	TaskCall(3); // 0x337 TaskCall
	func_343(var_48_object, var_49_cvector, var_50_bool, var_47_object); // 0x338 Call
	TaskReturn(); // 0x339 TaskReturn
	return 0; // 0x33b Return
}


func_181()
{
	func_305(var_4_cvector, var_5_bool); // 0xb6 Call
	var_45_int = 110; // 0xb8 PushI
	KillTimer(var_45_int); // 0xb9 Func
	return 0; // 0xbb Return
}


func_695()
{
	var_9_int = 0; var_10_bool = 0; var_11_int = 0; var_12_bool = 0; // 0x2b7 PushV
	var_13_int = 0; // 0x2b8 PushI
	ClearSubContainer(var_13_int); // 0x2b9 Func
	var_14_int = 0; var_15_int = 0; // 0x2bb PushV
	var_14_int = 500; // 0x2bc MovI
	var_15_int = 1000; // 0x2bd MovI
	func_665(var_14_int, var_15_int); // 0x2be Call
	var_34_int = 4; // 0x2c0 PushI
	irand(var_11_int, var_34_int); // 0x2c1 Func
	var_35_int = 0; // 0x2c3 PushI
	var_36_bool = var_11_int != var_35_int; // 0x2c4 Neq
	if(var_36_bool == 0) goto Label_717; // 0x2c5 JumpB
	var_37_int = 0; var_38_string = ""; // 0x2c6 PushV
	var_38_string = "rifle_ammo"; // 0x2c7 MovS
	func_732(var_37_int, var_38_string); // 0x2c8 Call
	var_41_int = 0; // 0x2ca PushI
	AddItem(var_12_bool, var_37_int, var_41_int, var_11_int); // 0x2cb Func
	
Label_717:
	var_42_int = 3; // 0x2cd PushI
	irand(var_11_int, var_42_int); // 0x2ce Func
	var_43_int = 0; // 0x2d0 PushI
	var_44_bool = var_11_int == var_43_int; // 0x2d1 Eq
	if(var_44_bool == 0) goto Label_731; // 0x2d2 JumpB
	var_45_int = 0; var_46_string = ""; // 0x2d3 PushV
	var_46_string = "rusk"; // 0x2d4 MovS
	func_732(var_45_int, var_46_string); // 0x2d5 Call
	var_47_int = 0; // 0x2d7 PushI
	var_48_int = 1; // 0x2d8 PushI
	AddItem(var_12_bool, var_45_int, var_47_int, var_48_int); // 0x2d9 Func
	
Label_731:
	return 4; // 0x2db Return
}


func_312()
{
	return 0; // 0x138 Return
}


func_313(var_19_cvector, var_20_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; // 0x139 PushV
	GetPosition(var_27_cvector); // 0x13a Func
	GetPosition(var_28_cvector); // 0x13c TObjFunc
	GetDirection(var_29_cvector); // 0x13e Func
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); // 0x140 PushV
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); // 0x141 PushV
	var_36_cvector = var_27_cvector - var_28_cvector; // 0x142 Sub2
	func_647(var_35_cvector, var_36_cvector); // 0x143 Call
	var_42_float = 0.75; // 0x145 PushF
	var_43_float = var_29_cvector * var_42_float; // 0x146 Mult
	var_34_cvector = var_35_cvector + var_43_float; // 0x147 Add2
	func_647(var_33_cvector, var_34_cvector); // 0x148 Call
	var_30_cvector = var_33_cvector; // 0x149 Mov
	var_44_int = 32; // 0x14b PushI
	var_45_float = 7000.0; // 0x14c PushF
	FindLongestDir(var_31_cvector, var_32_float, var_30_cvector, var_20_float, var_44_int, var_45_float); // 0x14d Func
	var_46_int = 100; // 0x14f PushI
	var_32_float = var_32_float - var_46_int; // 0x150 Sub2
	var_47_int = 0; // 0x151 PushI
	var_48_bool = var_32_float < var_47_int; // 0x152 LT
	if(var_48_bool == 0) goto Label_341; // 0x153 JumpB
	var_32_float = 0; // 0x154 MovI
	
Label_341:
	var_19_cvector = var_31_cvector * var_32_float; // 0x155 Mult2
	return 12; // 0x156 Return
}


func_580(var_9_object, var_10_int)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_int = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; // 0x244 PushV
	var_32_bool = 0; // 0x245 PushV
	var_32_bool = 0; // 0x246 MovB
	var_33_int = 4; // 0x247 PushI
	var_34_bool = var_10_int != var_33_int; // 0x248 Neq
	if(var_34_bool == 0) goto Label_590; // 0x249 JumpB
	var_35_int = 5; // 0x24a PushI
	var_36_bool = var_10_int != var_35_int; // 0x24b Neq
	if(var_36_bool == 0) goto Label_590; // 0x24c JumpB
	var_32_bool = 1; // 0x24d MovB
	
Label_590:
	if(var_32_bool == 0) goto Label_609; // 0x24e JumpB
	GetScene(var_22_object); // 0x24f Func
	GetPosition(var_24_cvector); // 0x251 Func
	GetEyesHeight(var_25_float); // 0x253 Func
	var_37_float = GetByIndex(var_24_cvector, 1); // 0x255 PushE
	var_38_int = 2; // 0x256 PushI
	var_39_float = var_25_float / var_38_int; // 0x257 Div
	var_37_float = var_37_float + var_39_float; // 0x258 Add2
	SetByIndex(var_24_cvector, 1) = var_37_float; // 0x259 PopE
	var_40_string = "scripted"; // 0x25a PushS
	var_41_cvector = CVector(0.0, 0.0, 1.0); // 0x25b PushVec
	var_42_string = "blood.xml"; // 0x25c PushS
	AddActorByType(var_23_object, var_40_string, var_22_object, var_24_cvector, var_41_cvector, var_42_string); // 0x25d Func
	var_23_object = 0; // 0x25f SetNull
	var_22_object = 0; // 0x260 SetNull
	
Label_609:
	var_43_bool = var_9_object == 0; // 0x261 NullEq
	if(var_43_bool == 0) goto Label_612; // 0x262 JumpB
	return 20; // 0x263 Return
	
Label_612:
	GetSecondaryAnimationType(var_26_int); // 0x264 Func
	var_44_int = 0; // 0x266 PushI
	var_45_bool = var_26_int < var_44_int; // 0x267 LT
	if(var_45_bool == 0) goto Label_618; // 0x268 JumpB
	return 20; // 0x269 Return
	
Label_618:
	GetPosition(var_27_cvector); // 0x26a ObjFunc
	GetPosition(var_28_cvector); // 0x26c Func
	GetDirection(var_29_cvector); // 0x26e Func
	var_30_cvector = var_28_cvector - var_27_cvector; // 0x270 Sub2
	var_46_float = GetByIndex(var_30_cvector, 0); // 0x271 PushE
	var_47_float = GetByIndex(var_29_cvector, 0); // 0x272 PushE
	var_48_float = var_46_float * var_47_float; // 0x273 Mult
	var_49_float = GetByIndex(var_30_cvector, 2); // 0x274 PushE
	var_50_float = GetByIndex(var_29_cvector, 2); // 0x275 PushE
	var_51_float = var_49_float * var_50_float; // 0x276 Mult
	var_52_int = var_48_float + var_51_float; // 0x277 Add
	var_53_int = 0; // 0x278 PushI
	var_54_bool = var_52_int >= var_53_int; // 0x279 GE
	if(var_54_bool == 0) goto Label_637; // 0x27a JumpB
	var_31_string = "fhit"; // 0x27b MovS
	goto Label_638; // 0x27c Jump
	
Label_638:
	var_55_string = "hit_react"; // 0x27e PushS
	var_56_string = "1"; // 0x27f PushS
	var_57_int = var_31_string + var_56_string; // 0x280 Add
	var_58_string = "2"; // 0x281 PushS
	var_59_int = var_31_string + var_58_string; // 0x282 Add
	var_60_int = -10; // 0x283 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x284 Func
	return 20; // 0x286 Return
	
Label_637:
	var_31_string = "bhit"; // 0x27d MovS
}


func_459(var_2_object)
{
	Stop(); // 0x1cb Func
	var_6_int = 120; // 0x1cd PushI
	KillTimer(var_6_int); // 0x1ce Func
	var_2_object = 1; // 0x1d0 TMovB
	return 0; // 0x1d1 Return
}


func_343(var_0_bool, var_1_bool, var_2_object, var_47_object)
{
	var_51_cvector = CVector(0,0,0); var_52_float = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0; // 0x157 PushV
	var_0_bool = var_47_object; // 0x158 TMov
	var_61_cvector = CVector(0,0,0); var_62_float = 0; // 0x159 PushV
	var_62_float = 1.74533; // 0x15a MovF
	func_313(var_61_cvector, var_62_float); // 0x15b Call
	var_56_cvector = var_61_cvector; // 0x15c Mov
	var_57_float = var_56_cvector | var_56_cvector; // 0x15e Or2
	var_91_float = 10000.0; // 0x15f PushF
	var_92_bool = var_57_float < var_91_float; // 0x160 LT
	if(var_92_bool == 0) goto Label_363; // 0x161 JumpB
	var_93_string = "Can't retreat, distance: "; // 0x162 PushS
	var_94_float = sqrt(var_57_float); // 0x163 Sqrt
	var_95_int = var_93_string + var_94_float; // 0x164 Add
	Trace(var_95_int); // 0x165 Func
	var_96_float = 0.5; // 0x167 PushF
	Sleep(var_96_float); // 0x168 Func
	return 10; // 0x16a Return
	
Label_363:
	var_97_float = GetByIndex(var_56_cvector, 0); // 0x16b PushE
	var_98_float = GetByIndex(var_56_cvector, 2); // 0x16c PushE
	Rotate(var_97_float, var_98_float); // 0x16d Func
	var_99_cvector = CVector(0,0,0); // 0x16f PushV
	func_491(var_99_cvector); // 0x170 Call
	var_1_bool = var_99_cvector + var_56_cvector; // 0x172 Add2
	var_102_int = 120; // 0x173 PushI
	var_103_float = 0.5; // 0x174 PushF
	SetTimer(var_102_int, var_103_float); // 0x175 Func
	var_2_object = 0; // 0x177 TMovB
	
Label_376:
	var_104_int = 1; // 0x178 PushI
	MovePoint(var_104_int, var_104_int, var_58_bool); // 0x179 Func
	var_105_bool = var_58_bool; // 0x17b Push
	if(var_105_bool == 0) goto Label_404; // 0x17c JumpB
	var_106_bool = var_0_bool == 0; // 0x17d NullEq
	if(var_106_bool == 0) goto Label_385; // 0x17e JumpB
	goto Label_406; // 0x17f Jump
	
Label_406:
	return 10; // 0x196 Return
	
Label_385:
	var_107_cvector = CVector(0,0,0); var_108_float = 0; // 0x181 PushV
	var_108_float = 2.61799; // 0x182 MovF
	func_313(var_107_cvector, var_108_float); // 0x183 Call
	var_59_cvector = var_107_cvector; // 0x184 Mov
	var_60_float = var_59_cvector | var_59_cvector; // 0x186 Or2
	var_109_float = 10000.0; // 0x187 PushF
	var_110_bool = var_60_float >= var_109_float; // 0x188 GE
	if(var_110_bool == 0) goto Label_403; // 0x189 JumpB
	var_111_cvector = CVector(0,0,0); // 0x18a PushV
	func_491(var_111_cvector); // 0x18b Call
	var_1_bool = var_111_cvector + var_59_cvector; // 0x18d Add2
	var_112_int = 120; // 0x18e PushI
	var_113_float = 0.5; // 0x18f PushF
	SetTimer(var_112_int, var_113_float); // 0x190 Func
	goto Label_404; // 0x192 Jump
	
Label_404:
	var_114_bool = var_2_object == 0; // 0x194 Not
	if(var_114_bool == 0) goto Label_376; // 0x195 JumpB
	
Label_403:
	goto Label_406; // 0x193 Jump
}


func_475(var_0_bool, var_57_bool)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x1db PushV
	GetDirection(var_60_cvector); // 0x1dc Func
	var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0x1de PushV
	var_63_object = var_0_bool; // 0x1df MovT
	func_496(var_63_object); // 0x1e0 Call
	var_61_cvector = var_62_cvector; // 0x1e1 Mov
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x1e3 PushV
	var_69_cvector = var_60_cvector; // 0x1e4 Mov
	var_70_cvector = var_61_cvector; // 0x1e5 Mov
	func_657(var_68_float, var_69_cvector, var_70_cvector); // 0x1e6 Call
	var_76_float = -0.34202; // 0x1e8 PushF
	var_57_bool = var_68_float >= var_76_float; // 0x1e9 GE2
	return 4; // 0x1ea Return
}


func_732(var_37_int, var_38_string)
{
	var_39_int = 0; var_40_int = 0; // 0x2dc PushV
	GetInvItemByName(var_40_int, var_38_string); // 0x2dd Func
	var_37_int = var_40_int; // 0x2df Mov
	return 2; // 0x2e0 Return
}


func_737(var_7_object)
{
	var_8_object = Obj(); // 0x2e2 PushV
	var_8_object = var_7_object; // 0x2e3 Mov
	TaskCall(0); // 0x2e4 TaskCall
	func_0(var_8_object); // 0x2e5 Call
	TaskReturn(); // 0x2e6 TaskReturn
	return 0; // 0x2e8 Return
}


func_503(var_32_bool, var_33_object, var_34_string)
{
	var_35_bool = 0; var_36_bool = 0; // 0x1f7 PushV
	var_37_string = "HasProperty"; // 0x1f8 PushS
	var_38_int = 2; // 0x1f9 PushI
	var_39_bool = IsFuncExist(var_33_object, var_37_string, var_38_int); // 0x1fa FuncExist
	var_40_bool = var_39_bool == 0; // 0x1fb Not
	if(var_40_bool == 0) goto Label_511; // 0x1fc JumpB
	var_32_bool = 0; // 0x1fd MovB
	return 2; // 0x1fe Return
	
Label_511:
	HasProperty(var_34_string, var_36_bool); // 0x1ff ObjFunc
	var_32_bool = var_36_bool; // 0x201 Mov
	return 2; // 0x202 Return
}


func_491(var_77_cvector)
{
	var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); // 0x1eb PushV
	GetPosition(var_79_cvector); // 0x1ec Func
	var_77_cvector = var_79_cvector; // 0x1ee Mov
	return 2; // 0x1ef Return
}


func_496(var_62_cvector)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x1f0 PushV
	GetPosition(var_66_cvector); // 0x1f1 Func
	GetPosition(var_67_cvector); // 0x1f3 ObjFunc
	var_62_cvector = var_67_cvector - var_66_cvector; // 0x1f5 Sub2
	return 4; // 0x1f6 Return
}


func_241(var_0_bool, var_1_bool)
{
	var_7_float = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_bool = 0; var_12_object = Obj(); var_13_bool = 0; var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_bool = 0; var_19_object = Obj(); var_20_bool = 0; // 0xf1 PushV
	var_0_bool = 0; // 0xf2 TMovB
	var_1_bool = 0; // 0xf3 TMovB
	var_21_float = 0.5; // 0xf4 PushF
	rand(var_14_float, var_21_float); // 0xf5 Func
	Sleep(var_14_float); // 0xf7 Func
	
Label_249:
	var_22_bool = var_0_bool == 0; // 0xf9 Not
	if(var_22_bool == 0) goto Label_297; // 0xfa JumpB
	var_23_bool = var_1_bool == 0; // 0xfb Not
	if(var_23_bool == 0) goto Label_269; // 0xfc JumpB
	
Label_253:
	GetPosition(var_16_cvector); // 0xfd Func
	GetCameraFarDistance(var_17_float); // 0xff Func
	var_24_float = 2.5; // 0x101 PushF
	var_17_float = var_17_float * var_24_float; // 0x102 Mult2
	GetRandomPFPointInCircle(var_15_cvector, var_16_cvector, var_17_float, var_18_bool); // 0x103 Func
	var_25_bool = var_18_bool; // 0x105 Push
	if(var_25_bool == 0) goto Label_264; // 0x106 JumpB
	goto Label_268; // 0x107 Jump
	
Label_268:
	goto Label_270; // 0x10c Jump
	
Label_270:
	FindShiftedPathTo(var_19_object, var_15_cvector); // 0x10e Func
	var_26_bool = var_19_object != 0; // 0x110 NullNeq
	if(var_26_bool == 0) goto Label_292; // 0x111 JumpB
	RotatePath(var_19_object, var_20_bool); // 0x112 Func
	var_27_bool = var_20_bool; // 0x114 Push
	if(var_27_bool == 0) goto Label_291; // 0x115 JumpB
	var_28_bool = 0; // 0x116 PushV
	func_156(var_28_bool); // 0x117 Call
	FollowPath(var_19_object, var_28_bool, var_20_bool); // 0x119 Func
	var_19_object = 0; // 0x11b SetNull
	var_32_bool = var_20_bool; // 0x11c Push
	if(var_32_bool == 0) goto Label_291; // 0x11d JumpB
	TaskCall(2); // 0x11f TaskCall
	func_312(); // 0x120 Call
	TaskReturn(); // 0x121 TaskReturn
	
Label_291:
	goto Label_295; // 0x123 Jump
	
Label_295:
	var_19_object = 0; // 0x127 SetNull
	goto Label_249; // 0x128 Jump
	
Label_292:
	var_33_int = 1; // 0x124 PushI
	Sleep(var_33_int); // 0x125 Func
	
Label_264:
	var_34_int = 1; // 0x108 PushI
	Sleep(var_34_int); // 0x109 Func
	goto Label_253; // 0x10b Jump
	
Label_269:
	var_1_bool = 0; // 0x10d TMovB
	
Label_297:
	return 14; // 0x129 Return
}


func_119(var_72_string)
{
	RemoveRTEnvelope(); // 0x78 Func
	SetDeathState(); // 0x7a Func
	Stop(); // 0x7c Func
	StopAsync(); // 0x7e Func
	StopSecondaryAnimation(); // 0x80 Func
	var_73_string = "all"; // 0x82 PushS
	PlayAnimation(var_73_string, var_72_string); // 0x83 Func
	WaitForAnimEnd(); // 0x85 Func
	var_74_string = "all"; // 0x87 PushS
	LockAnimationEnd(var_74_string, var_72_string); // 0x88 Func
	RemoveEnvelope(); // 0x8a Func
	return 0; // 0x8c Return
}


