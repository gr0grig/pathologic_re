task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x20 PushV
	IsOverrideActive(var_7_bool); // 0x21 Func
	var_8_bool = var_7_bool == 0; // 0x23 Not
	if(var_8_bool == 0) goto Label_41; // 0x24 JumpB
	var_9_object = Obj(); // 0x25 PushV
	var_9_object = var_5_bool; // 0x26 Mov
	func_853(var_9_object); // 0x27 NEW_2
	
Label_41:
	return 2; // 0x29 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	return 0; // 0xa0 Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_cvector, var_6_bool)
{
	return 0; // 0xa2 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool)
{
	return 0; // 0xa4 Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0xb4 PushV
	var_8_int = 110; // 0xb5 PushI
	var_9_bool = var_5_bool != var_8_int; // 0xb6 Neq
	if(var_9_bool == 0) goto Label_185; // 0xb7 JumpB
	return 2; // 0xb8 Return
	
Label_185:
	IsInWalkMode(var_7_bool); // 0xb9 Func
	var_10_bool = var_7_bool; // 0xbb Push
	if(var_10_bool == 0) goto Label_198; // 0xbc JumpB
	var_11_bool = 0; // 0xbd PushV
	func_174(var_11_bool); // 0xbe NEW_2
	if(var_11_bool == 0) goto Label_196; // 0xc0 JumpB
	SwitchToRun(); // 0xc1 Func
	goto Label_198; // 0xc3 Jump
	
Label_198:
	return 2; // 0xc6 Return
	
Label_196:
	SwitchToWalk(); // 0xc4 Func
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	func_199(); // 0xd0 NEW_2
	var_7_object = Obj(); // 0xd2 PushV
	var_7_object = var_5_bool; // 0xd3 Mov
	func_1018(); // 0xd4 NEW_2
	return 0; // 0xd6 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj(); // 0xd8 PushV
	var_7_object = var_5_bool; // 0xd9 Mov
	func_601(var_6_bool, var_7_object); // 0xda NEW_2
	var_40_bool = var_6_bool == 0; // 0xdc Not
	if(var_40_bool == 0) goto Label_223; // 0xdd JumpB
	return 0; // 0xde Return
	
Label_223:
	func_199(); // 0xe0 NEW_2
	var_42_object = Obj(); // 0xe2 PushV
	var_42_object = var_5_bool; // 0xe3 Mov
	func_1036(var_42_object); // 0xe4 NEW_2
	return 0; // 0xe6 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj(); // 0xe8 PushV
	var_7_object = var_5_bool; // 0xe9 Mov
	func_1050(var_6_bool, var_7_object); // 0xea NEW_2
	if(var_6_bool == 0) goto Label_244; // 0xec JumpB
	func_199(); // 0xee NEW_2
	var_46_object = Obj(); // 0xf0 PushV
	var_46_object = var_5_bool; // 0xf1 Mov
	func_1063(var_46_object); // 0xf2 NEW_2
	
Label_244:
	return 0; // 0xf4 Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj(); // 0xf6 PushV
	var_7_object = var_5_bool; // 0xf7 Mov
	func_1071(var_6_bool, var_7_object); // 0xf8 NEW_2
	if(var_6_bool == 0) goto Label_258; // 0xfa JumpB
	func_199(); // 0xfc NEW_2
	var_46_object = Obj(); // 0xfe PushV
	var_46_object = var_5_bool; // 0xff Mov
	func_1084(var_46_object); // 0x100 NEW_2
	
Label_258:
	return 0; // 0x102 Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	RequestClearPath(var_5_bool); // 0x144 Func
	return 0; // 0x146 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool)
{
	Stop(); // 0x147 Func
	return 0; // 0x149 Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_int)
{
	var_6_cvector = CVector(0,0,0); var_7_float = 0; var_8_cvector = CVector(0,0,0); var_9_float = 0; var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_cvector = CVector(0,0,0); var_13_float = 0; // 0x1bf PushV
	var_14_int = 120; // 0x1c0 PushI
	var_15_bool = var_5_int != var_14_int; // 0x1c1 Neq
	if(var_15_bool == 0) goto Label_452; // 0x1c2 JumpB
	return 8; // 0x1c3 Return
	
Label_452:
	var_16_bool = var_0_bool == 0; // 0x1c4 NullEq
	if(var_16_bool == 0) goto Label_461; // 0x1c5 JumpB
	Stop(); // 0x1c6 Func
	var_17_int = 1; // 0x1c8 PushI
	KillTimer(var_17_int); // 0x1c9 Func
	var_2_object = 1; // 0x1cb TMovB
	goto Label_498; // 0x1cc Jump
	
Label_498:
	return 8; // 0x1f2 Return
	
Label_461:
	GetDirection(var_10_cvector); // 0x1cd Func
	var_18_float = 7000.0; // 0x1cf PushF
	FindDirLength(var_11_float, var_10_cvector, var_18_float); // 0x1d0 Func
	var_19_cvector = CVector(0,0,0); var_20_float = 0; // 0x1d2 PushV
	var_20_float = 1.74533; // 0x1d3 MovF
	func_344(var_19_cvector, var_20_float); // 0x1d4 NEW_2
	var_12_cvector = var_19_cvector; // 0x1d5 Mov
	var_13_float = var_12_cvector | var_12_cvector; // 0x1d7 Or2
	var_49_bool = 0; // 0x1d8 PushV
	var_49_bool = 0; // 0x1d9 MovB
	var_50_float = 2500.0; // 0x1da PushF
	var_51_bool = var_13_float >= var_50_float; // 0x1db GE
	if(var_51_bool == 0) goto Label_491; // 0x1dc JumpB
	var_52_bool = 0; // 0x1dd PushV
	var_52_bool = 1; // 0x1de MovB
	var_53_float = var_11_float * var_11_float; // 0x1df Mult
	var_54_float = 2.25; // 0x1e0 PushF
	var_55_float = var_53_float * var_54_float; // 0x1e1 Mult
	var_56_bool = var_13_float >= var_55_float; // 0x1e2 GE
	if(var_56_bool == 0) goto Label_489; // 0x1e3 JumpB
	var_57_bool = 0; // 0x1e4 PushV
	func_515(var_52_bool, var_57_bool); // 0x1e5 NEW_2
	if(var_57_bool == 0) goto Label_489; // 0x1e7 JumpB
	var_52_bool = 0; // 0x1e8 MovB
	
Label_489:
	if(var_52_bool == 0) goto Label_491; // 0x1e9 JumpB
	var_49_bool = 1; // 0x1ea MovB
	
Label_491:
	if(var_49_bool == 0) goto Label_498; // 0x1eb JumpB
	Stop(); // 0x1ec Func
	var_77_cvector = CVector(0,0,0); // 0x1ee PushV
	func_531(var_77_cvector); // 0x1ef NEW_2
	var_1_bool = var_77_cvector + var_12_cvector; // 0x1f1 Add2
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object)
{
	func_499(var_5_object); // 0x1fc NEW_2
	var_7_object = Obj(); // 0x1fe PushV
	var_7_object = var_5_object; // 0x1ff Mov
	func_1018(); // 0x200 NEW_2
	return 0; // 0x202 Return
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float)
{
	var_9_object = Obj(); var_10_int = 0; var_11_float = 0; // 0x3dc PushV
	var_9_object = var_5_object; // 0x3dd Mov
	var_10_int = var_6_int; // 0x3de Mov
	var_11_float = var_7_float; // 0x3df Mov
	func_669(var_9_object, var_10_int, var_11_float); // 0x3e0 NEW_2
	return 0; // 0x3e2 Return
}


event_43(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_cvector, var_10_cvector)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); // 0x3e4 PushV
	var_11_object = var_5_object; // 0x3e5 Mov
	var_12_int = var_6_int; // 0x3e6 Mov
	var_13_float = var_7_float; // 0x3e7 Mov
	var_14_cvector = var_9_cvector; // 0x3e8 Mov
	var_15_cvector = var_10_cvector; // 0x3e9 Mov
	func_737(var_13_float, var_14_cvector, var_15_cvector); // 0x3ea NEW_2
	return 0; // 0x3ec Return
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_float = 0; // 0x3ed PushV
	var_9_string = "health"; // 0x3ee PushS
	var_10_bool = var_6_string == var_9_string; // 0x3ef Eq
	if(var_10_bool == 0) goto Label_1017; // 0x3f0 JumpB
	var_11_string = "health"; // 0x3f1 PushS
	GetProperty(var_11_string, var_8_float); // 0x3f2 Func
	var_12_int = 0; // 0x3f4 PushI
	var_13_bool = var_8_float <= var_12_int; // 0x3f5 LE
	if(var_13_bool == 0) goto Label_1017; // 0x3f6 JumpB
	SignalDeath(var_5_object); // 0x3f7 Func
	
Label_1017:
	return 2; // 0x3f9 Return
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_object = Obj(); // 0x3fb PushV
	var_7_object = var_5_object; // 0x3fc Mov
	func_543(var_6_bool, var_7_object); // 0x3fd NEW_2
	if(var_6_bool == 0) goto Label_1031; // 0x3ff JumpB
	var_10_object = Obj(); // 0x400 PushV
	func_818(var_10_object); // 0x401 NEW_2
	var_13_float = 0.05; // 0x403 PushF
	var_14_bool = 1; // 0x404 PushB
	ReportReputationChange(var_5_object, var_10_object, var_13_float, var_14_bool); // 0x405 Func
	
Label_1031:
	var_15_object = Obj(); // 0x407 PushV
	var_15_object = var_5_object; // 0x408 Mov
	func_1044(var_15_object); // 0x409 NEW_2
	return 0; // 0x40b Return
}


main(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool)
{
	
Label_165:
	var_5_int = 110; // 0xa5 PushI
	var_6_float = 0.3; // 0xa6 PushF
	SetTimer(var_5_int, var_6_float); // 0xa7 Func
	func_259(var_3_cvector, var_4_bool); // 0xaa NEW_2
	goto Label_165; // 0xac Jump
}


func_0(var_17_object)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x1 PushV
	var_19_object = var_17_object; // 0x2 Mov
	func_543(var_18_bool, var_19_object); // 0x3 NEW_2
	if(var_18_bool == 0) goto Label_9; // 0x5 JumpB
	func_938(); // 0x7 NEW_2
	
Label_9:
	func_914(); // 0xa NEW_2
	var_96_object = Obj(); // 0xc PushV
	var_96_object = var_17_object; // 0xd Mov
	func_17(var_96_object); // 0xe NEW_2
	return 0; // 0x10 Return
}


func_897(var_82_string)
{
	var_83_object = Obj(); var_84_int = 0; var_85_bool = 0; var_86_object = Obj(); var_87_int = 0; var_88_bool = 0; // 0x381 PushV
	CreateInvItem(var_86_object); // 0x382 Func
	SetItemName(var_82_string); // 0x384 ObjFunc
	var_89_string = "Organ"; // 0x386 PushS
	var_90_int = 1; // 0x387 PushI
	SetProperty(var_89_string, var_90_int); // 0x388 ObjFunc
	GetItemID(var_87_int); // 0x38a ObjFunc
	var_91_int = 0; // 0x38c PushI
	var_92_int = 1; // 0x38d PushI
	AddItem(var_88_bool, var_86_object, var_91_int, var_92_int); // 0x38e Func
	return 6; // 0x390 Return
}


func_259(var_0_bool, var_1_bool)
{
	var_7_float = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_bool = 0; var_11_object = Obj(); var_12_bool = 0; var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0; // 0x103 PushV
	var_0_bool = 0; // 0x104 TMovB
	var_1_bool = 0; // 0x105 TMovB
	var_19_float = 0.5; // 0x106 PushF
	rand(var_13_float, var_19_float); // 0x107 Func
	Sleep(var_13_float); // 0x109 Func
	
Label_267:
	var_20_bool = var_0_bool == 0; // 0x10b Not
	if(var_20_bool == 0) goto Label_317; // 0x10c JumpB
	var_21_bool = var_1_bool == 0; // 0x10d Not
	if(var_21_bool == 0) goto Label_286; // 0x10e JumpB
	
Label_271:
	GetPosition(var_15_cvector); // 0x10f Func
	var_22_float = 0; // 0x111 PushV
	func_318(var_22_float); // 0x112 NEW_2
	GetRandomPFPointInCircle(var_14_cvector, var_15_cvector, var_22_float, var_16_bool); // 0x114 Func
	var_25_bool = var_16_bool; // 0x116 Push
	if(var_25_bool == 0) goto Label_281; // 0x117 JumpB
	goto Label_285; // 0x118 Jump
	
Label_285:
	goto Label_287; // 0x11d Jump
	
Label_287:
	var_26_object = Obj(); var_27_cvector = CVector(0,0,0); // 0x11f PushV
	var_27_cvector = var_14_cvector; // 0x120 Mov
	func_337(var_26_object, var_27_cvector); // 0x121 NEW_2
	var_17_object = var_26_object; // 0x122 Mov
	var_30_bool = var_17_object != 0; // 0x124 NullNeq
	if(var_30_bool == 0) goto Label_312; // 0x125 JumpB
	RotatePath(var_17_object, var_18_bool); // 0x126 Func
	var_31_bool = var_18_bool; // 0x128 Push
	if(var_31_bool == 0) goto Label_311; // 0x129 JumpB
	var_32_bool = 0; // 0x12a PushV
	func_174(var_32_bool); // 0x12b NEW_2
	FollowPath(var_17_object, var_32_bool, var_18_bool); // 0x12d Func
	var_17_object = 0; // 0x12f SetNull
	var_36_bool = var_18_bool; // 0x130 Push
	if(var_36_bool == 0) goto Label_311; // 0x131 JumpB
	TaskCall(2); // 0x133 TaskCall
	func_343(); // 0x134 NEW_2
	TaskReturn(); // 0x135 TaskReturn
	
Label_311:
	goto Label_315; // 0x137 Jump
	
Label_315:
	var_17_object = 0; // 0x13b SetNull
	goto Label_267; // 0x13c Jump
	
Label_312:
	var_37_int = 1; // 0x138 PushI
	Sleep(var_37_int); // 0x139 Func
	
Label_281:
	var_38_int = 1; // 0x119 PushI
	Sleep(var_38_int); // 0x11a Func
	goto Label_271; // 0x11c Jump
	
Label_286:
	var_1_bool = 0; // 0x11e TMovB
	
Label_317:
	return 12; // 0x13d Return
}


func_515(var_0_bool, var_57_bool)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x203 PushV
	GetDirection(var_60_cvector); // 0x204 Func
	var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0x206 PushV
	var_63_object = var_0_bool; // 0x207 MovT
	func_536(var_63_object); // 0x208 NEW_2
	var_61_cvector = var_62_cvector; // 0x209 Mov
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x20b PushV
	var_69_cvector = var_60_cvector; // 0x20c Mov
	var_70_cvector = var_61_cvector; // 0x20d Mov
	func_839(var_68_float, var_69_cvector, var_70_cvector); // 0x20e NEW_2
	var_76_float = -0.34202; // 0x210 PushF
	var_57_bool = var_68_float >= var_76_float; // 0x211 GE2
	return 4; // 0x212 Return
}


func_133(var_119_string)
{
	RemoveRTEnvelope(); // 0x86 Func
	SetDeathState(); // 0x88 Func
	Stop(); // 0x8a Func
	StopAsync(); // 0x8c Func
	StopSecondaryAnimation(); // 0x8e Func
	var_120_string = ""; // 0x90 PushV
	var_120_string = var_119_string; // 0x91 Mov
	func_777(var_120_string); // 0x92 NEW_2
	var_149_string = "all"; // 0x94 PushS
	PlayAnimation(var_149_string, var_119_string); // 0x95 Func
	WaitForAnimEnd(); // 0x97 Func
	var_150_string = "all"; // 0x99 PushS
	LockAnimationEnd(var_150_string, var_119_string); // 0x9a Func
	RemoveEnvelope(); // 0x9c Func
	return 0; // 0x9e Return
}


func_777(var_120_string)
{
	var_121_bool = 0; var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_bool = 0; var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_bool = 0; var_130_int = 0; var_131_bool = 0; var_132_int = 0; var_133_bool = 0; var_134_float = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); // 0x309 PushV
	IsExisting3DSound(var_129_bool, var_120_string); // 0x30a Func
	var_137_bool = var_129_bool == 0; // 0x30c Not
	if(var_137_bool == 0) goto Label_802; // 0x30d JumpB
	var_130_int = 0; // 0x30e MovI
	
Label_783:
	var_138_int = 1; // 0x30f PushI
	var_139_int = var_130_int + var_138_int; // 0x310 Add
	var_140_int = var_120_string + var_139_int; // 0x311 Add
	IsExisting3DSound(var_131_bool, var_140_int); // 0x312 Func
	var_141_bool = var_131_bool == 0; // 0x314 Not
	if(var_141_bool == 0) goto Label_791; // 0x315 JumpB
	goto Label_794; // 0x316 Jump
	
Label_794:
	var_142_bool = var_130_int == 0; // 0x31a Not
	if(var_142_bool == 0) goto Label_797; // 0x31b JumpB
	return 16; // 0x31c Return
	
Label_797:
	irand(var_132_int, var_130_int); // 0x31d Func
	var_143_int = 1; // 0x31f PushI
	var_144_int = var_132_int + var_143_int; // 0x320 Add
	var_120_string = var_120_string + var_144_int; // 0x321 Add2
	
Label_802:
	Is3DSoundLoaded(var_133_bool, var_120_string); // 0x322 Func
	var_145_bool = var_133_bool; // 0x324 Push
	if(var_145_bool == 0) goto Label_817; // 0x325 JumpB
	GetEyesHeight(var_134_float); // 0x326 Func
	GetDirection(var_135_cvector); // 0x328 Func
	var_146_int = 50; // 0x32a PushI
	var_136_cvector = var_135_cvector * var_146_int; // 0x32b Mult2
	var_147_float = GetByIndex(var_136_cvector, 1); // 0x32c PushE
	var_147_float = var_147_float + var_134_float; // 0x32d Add2
	SetByIndex(var_136_cvector, 1) = var_147_float; // 0x32e PopE
	PlayGlobalSound(var_120_string, var_136_cvector); // 0x32f Func
	
Label_817:
	return 16; // 0x331 Return
	
Label_791:
	var_148_int = 1; // 0x317 PushI
	var_130_int = var_130_int + var_148_int; // 0x318 Add2
	goto Label_783; // 0x319 Jump
}


func_1036(var_42_object)
{
	var_43_object = Obj(); // 0x40d PushV
	var_43_object = var_42_object; // 0x40e Mov
	TaskCall(3); // 0x40f TaskCall
	func_374(var_44_object, var_45_cvector, var_46_bool, var_43_object); // 0x410 NEW_2
	TaskReturn(); // 0x411 TaskReturn
	return 0; // 0x413 Return
}


func_17(var_96_object)
{
	EventDisable(0); // 0x12 EventDisable
	var_97_object = Obj(); // 0x13 PushV
	var_97_object = var_96_object; // 0x14 Mov
	func_42(var_97_object); // 0x15 NEW_2
	var_177_int = 50; // 0x17 PushI
	var_178_int = 40; // 0x18 PushI
	SetRTEnvelope(var_177_int, var_178_int); // 0x19 Func
	EventEnable(0); // 0x1b EventEnable
	
Label_28:
	Hold(); // 0x1c Func
	goto Label_28; // 0x1e Jump
}


func_914()
{
	var_76_int = 0; // 0x392 PushV
	func_847(var_76_int); // 0x393 NEW_2
	var_80_int = 1; // 0x395 PushI
	var_81_bool = var_76_int != var_80_int; // 0x396 Neq
	if(var_81_bool == 0) goto Label_921; // 0x397 JumpB
	return 0; // 0x398 Return
	
Label_921:
	var_82_string = ""; // 0x399 PushV
	var_82_string = "liver"; // 0x39a MovS
	func_897(var_82_string); // 0x39b NEW_2
	var_93_string = ""; // 0x39d PushV
	var_93_string = "kidney"; // 0x39e MovS
	func_897(var_93_string); // 0x39f NEW_2
	var_94_string = ""; // 0x3a1 PushV
	var_94_string = "heart"; // 0x3a2 MovS
	func_897(var_94_string); // 0x3a3 NEW_2
	var_95_string = ""; // 0x3a5 PushV
	var_95_string = "blood"; // 0x3a6 MovS
	func_897(var_95_string); // 0x3a7 NEW_2
	return 0; // 0x3a9 Return
}


func_531(var_77_cvector)
{
	var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); // 0x213 PushV
	GetPosition(var_79_cvector); // 0x214 Func
	var_77_cvector = var_79_cvector; // 0x216 Mov
	return 2; // 0x217 Return
}


func_1044(var_15_object)
{
	var_16_object = Obj(); // 0x415 PushV
	var_16_object = var_15_object; // 0x416 Mov
	func_979(var_16_object); // 0x417 NEW_2
	return 0; // 0x419 Return
}


func_536(var_39_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x218 PushV
	GetPosition(var_43_cvector); // 0x219 Func
	GetPosition(var_44_cvector); // 0x21b ObjFunc
	var_39_cvector = var_44_cvector - var_43_cvector; // 0x21d Sub2
	return 4; // 0x21e Return
}


func_1050(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x41a PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x41b PushV
	var_11_object = var_7_object; // 0x41c Mov
	func_601(var_10_bool, var_11_object); // 0x41d NEW_2
	var_44_bool = var_10_bool == 0; // 0x41f Not
	if(var_44_bool == 0) goto Label_1059; // 0x420 JumpB
	var_6_bool = 0; // 0x421 MovB
	return 2; // 0x422 Return
	
Label_1059:
	IsPlayerActor(var_7_object, var_9_bool); // 0x423 Func
	var_6_bool = var_9_bool; // 0x425 Mov
	return 2; // 0x426 Return
}


func_669(var_9_object, var_10_int, var_11_float)
{
	var_12_cvector = CVector(0,0,0); var_13_object = Obj(); var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_int = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); // 0x29d PushV
	var_30_bool = 0; // 0x29e PushV
	var_30_bool = 0; // 0x29f MovB
	var_31_bool = 0; // 0x2a0 PushV
	var_31_bool = 0; // 0x2a1 MovB
	var_32_object = var_9_object; // 0x2a2 Push
	if(var_32_object == 0) goto Label_680; // 0x2a3 JumpB
	var_33_int = 4; // 0x2a4 PushI
	var_34_bool = var_10_int != var_33_int; // 0x2a5 Neq
	if(var_34_bool == 0) goto Label_680; // 0x2a6 JumpB
	var_31_bool = 1; // 0x2a7 MovB
	
Label_680:
	if(var_31_bool == 0) goto Label_685; // 0x2a8 JumpB
	var_35_int = 5; // 0x2a9 PushI
	var_36_bool = var_10_int != var_35_int; // 0x2aa Neq
	if(var_36_bool == 0) goto Label_685; // 0x2ab JumpB
	var_30_bool = 1; // 0x2ac MovB
	
Label_685:
	if(var_30_bool == 0) goto Label_732; // 0x2ad JumpB
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x2ae PushV
	var_39_cvector = CVector(0,0,0); var_40_object = Obj(); // 0x2af PushV
	var_40_object = var_9_object; // 0x2b0 Mov
	func_536(var_40_object); // 0x2b1 NEW_2
	var_38_cvector = var_39_cvector; // 0x2b2 Mov
	func_824(var_37_cvector, var_38_cvector); // 0x2b4 NEW_2
	var_21_cvector = var_37_cvector; // 0x2b5 Mov
	CreateVectorVector(var_22_object); // 0x2b7 Func
	var_23_int = 1; // 0x2b9 MovI
	
Label_698:
	var_50_string = "hit"; // 0x2ba PushS
	var_51_int = var_50_string + var_23_int; // 0x2bb Add
	GetGeometryLocator(var_51_int, var_24_bool, var_25_cvector, var_26_cvector); // 0x2bc Func
	var_52_bool = var_24_bool == 0; // 0x2be Not
	if(var_52_bool == 0) goto Label_705; // 0x2bf JumpB
	goto Label_714; // 0x2c0 Jump
	
Label_714:
	size(var_27_int); // 0x2ca ObjFunc
	var_53_int = var_27_int; // 0x2cc Push
	if(var_53_int == 0) goto Label_731; // 0x2cd JumpB
	irand(var_28_int, var_27_int); // 0x2ce Func
	get(var_29_cvector, var_28_int); // 0x2d0 ObjFunc
	var_54_object = Obj(); var_55_int = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x2d2 PushV
	var_54_object = var_9_object; // 0x2d3 Mov
	var_55_int = var_10_int; // 0x2d4 Mov
	var_56_float = var_11_float; // 0x2d5 Mov
	var_57_cvector = var_29_cvector; // 0x2d6 Mov
	var_58_cvector = -var_21_cvector; // 0x2d7 Neg2
	func_737(var_56_float, var_57_cvector, var_58_cvector); // 0x2d8 NEW_2
	return 18; // 0x2da Return
	
Label_731:
	var_22_object = 0; // 0x2db SetNull
	
Label_732:
	var_99_object = Obj(); // 0x2dc PushV
	var_99_object = var_9_object; // 0x2dd Mov
	func_625(var_99_object); // 0x2de NEW_2
	return 18; // 0x2e0 Return
	
Label_705:
	var_100_int = var_26_cvector | var_21_cvector; // 0x2c1 Or
	var_101_float = 0.70711; // 0x2c2 PushF
	var_102_bool = var_100_int >= var_101_float; // 0x2c3 GE
	if(var_102_bool == 0) goto Label_711; // 0x2c4 JumpB
	add(var_25_cvector); // 0x2c5 ObjFunc
	
Label_711:
	var_103_int = 1; // 0x2c7 PushI
	var_23_int = var_23_int + var_103_int; // 0x2c8 Add2
	goto Label_698; // 0x2c9 Jump
}


func_543(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x21f PushV
	IsPlayerActor(var_7_object, var_9_bool); // 0x220 Func
	var_6_bool = var_9_bool; // 0x222 Mov
	return 2; // 0x223 Return
}


func_548(var_32_bool, var_33_object, var_34_string)
{
	var_35_bool = 0; var_36_bool = 0; // 0x224 PushV
	var_37_string = "HasProperty"; // 0x225 PushS
	var_38_int = 2; // 0x226 PushI
	var_39_bool = IsFuncExist(var_33_object, var_37_string, var_38_int); // 0x227 FuncExist
	var_40_bool = var_39_bool == 0; // 0x228 Not
	if(var_40_bool == 0) goto Label_556; // 0x229 JumpB
	var_32_bool = 0; // 0x22a MovB
	return 2; // 0x22b Return
	
Label_556:
	HasProperty(var_34_string, var_36_bool); // 0x22c ObjFunc
	var_32_bool = var_36_bool; // 0x22e Mov
	return 2; // 0x22f Return
}


func_1063(var_46_object)
{
	var_47_object = Obj(); // 0x428 PushV
	var_47_object = var_46_object; // 0x429 Mov
	TaskCall(3); // 0x42a TaskCall
	func_374(var_48_object, var_49_cvector, var_50_bool, var_47_object); // 0x42b NEW_2
	TaskReturn(); // 0x42c TaskReturn
	return 0; // 0x42e Return
}


func_938()
{
	var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_bool = 0; // 0x3aa PushV
	var_24_int = 0; // 0x3ab PushI
	ClearSubContainer(var_24_int); // 0x3ac Func
	var_25_int = 0; var_26_int = 0; // 0x3ae PushV
	var_25_int = 500; // 0x3af MovI
	var_26_int = 1000; // 0x3b0 MovI
	func_866(var_25_int, var_26_int); // 0x3b1 NEW_2
	var_44_string = ""; var_45_int = 0; var_46_int = 0; var_47_int = 0; // 0x3b3 PushV
	var_44_string = "rifle_ammo"; // 0x3b4 MovS
	var_45_int = 1; // 0x3b5 MovI
	var_46_int = 3; // 0x3b6 MovI
	var_47_int = 3; // 0x3b7 MovI
	func_762(var_44_string, var_45_int, var_46_int, var_47_int); // 0x3b8 NEW_2
	var_60_string = ""; var_61_int = 0; var_62_int = 0; var_63_int = 0; // 0x3ba PushV
	var_60_string = "rusk"; // 0x3bb MovS
	var_61_int = 1; // 0x3bc MovI
	var_62_int = 3; // 0x3bd MovI
	var_63_int = 2; // 0x3be MovI
	func_762(var_60_string, var_61_int, var_62_int, var_63_int); // 0x3bf NEW_2
	var_64_string = ""; var_65_int = 0; var_66_int = 0; // 0x3c1 PushV
	var_64_string = "bandage"; // 0x3c2 MovS
	var_65_int = 1; // 0x3c3 MovI
	var_66_int = 6; // 0x3c4 MovI
	func_751(var_64_string, var_65_int, var_66_int); // 0x3c5 NEW_2
	var_73_string = ""; var_74_int = 0; var_75_int = 0; // 0x3c7 PushV
	var_73_string = "tourniquet"; // 0x3c8 MovS
	var_74_int = 1; // 0x3c9 MovI
	var_75_int = 6; // 0x3ca MovI
	func_751(var_73_string, var_74_int, var_75_int); // 0x3cb NEW_2
	return 4; // 0x3cd Return
}


func_42(var_97_object)
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_string = ""; var_103_object = Obj(); var_104_bool = 0; var_105_bool = 0; var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_string = ""; var_113_object = Obj(); var_114_bool = 0; var_115_bool = 0; var_116_float = 0; var_117_cvector = CVector(0,0,0); // 0x2a PushV
	var_118_bool = var_97_object == 0; // 0x2b NullEq
	if(var_118_bool == 0) goto Label_50; // 0x2c JumpB
	var_119_string = ""; // 0x2d PushV
	var_119_string = "fdie"; // 0x2e MovS
	func_133(var_119_string); // 0x2f NEW_2
	goto Label_132; // 0x31 Jump
	
Label_132:
	return 20; // 0x84 Return
	
Label_50:
	GetPosition(var_108_cvector); // 0x32 ObjFunc
	GetPosition(var_109_cvector); // 0x34 Func
	GetDirection(var_110_cvector); // 0x36 Func
	var_111_cvector = var_109_cvector - var_108_cvector; // 0x38 Sub2
	var_151_float = GetByIndex(var_111_cvector, 0); // 0x39 PushE
	var_152_float = GetByIndex(var_110_cvector, 0); // 0x3a PushE
	var_153_float = var_151_float * var_152_float; // 0x3b Mult
	var_154_float = GetByIndex(var_111_cvector, 2); // 0x3c PushE
	var_155_float = GetByIndex(var_110_cvector, 2); // 0x3d PushE
	var_156_float = var_154_float * var_155_float; // 0x3e Mult
	var_157_int = var_153_float + var_156_float; // 0x3f Add
	var_158_int = 0; // 0x40 PushI
	var_159_bool = var_157_int >= var_158_int; // 0x41 GE
	if(var_159_bool == 0) goto Label_69; // 0x42 JumpB
	var_112_string = "fdie"; // 0x43 MovS
	goto Label_70; // 0x44 Jump
	
Label_70:
	RemoveRTEnvelope(); // 0x46 Func
	SetDeathState(); // 0x48 Func
	Stop(); // 0x4a Func
	StopAsync(); // 0x4c Func
	var_113_object = var_97_object; // 0x4e Mov
	var_160_string = "GetScriptProperty"; // 0x4f PushS
	var_161_int = 2; // 0x50 PushI
	var_162_bool = IsFuncExist(var_97_object, var_160_string, var_161_int); // 0x51 FuncExist
	if(var_162_bool == 0) goto Label_94; // 0x52 JumpB
	var_163_string = "Owner"; // 0x53 PushS
	HasScriptProperty(var_114_bool, var_163_string); // 0x54 ObjFunc
	var_164_bool = var_114_bool; // 0x56 Push
	if(var_164_bool == 0) goto Label_94; // 0x57 JumpB
	var_165_string = "Owner"; // 0x58 PushS
	GetScriptProperty(var_113_object, var_165_string); // 0x59 ObjFunc
	var_166_bool = var_113_object == 0; // 0x5b NullEq
	if(var_166_bool == 0) goto Label_94; // 0x5c JumpB
	var_113_object = var_97_object; // 0x5d Mov
	
Label_94:
	var_167_string = "@GetEyesHeight"; // 0x5e PushS
	var_168_int = 1; // 0x5f PushI
	var_169_bool = IsFuncExist(var_113_object, var_167_string, var_168_int); // 0x60 FuncExist
	if(var_169_bool == 0) goto Label_109; // 0x61 JumpB
	GetEyesHeight(var_116_float); // 0x62 ObjFunc
	var_117_cvector = CVector(0.0, 0.0, 0.0); // 0x64 MovV
	var_170_float = GetByIndex(var_117_cvector, 1); // 0x65 PushE
	var_170_float = var_116_float; // 0x66 Mov
	SetByIndex(var_117_cvector, 1) = var_170_float; // 0x67 PopE
	var_171_string = "head"; // 0x68 PushS
	LookAsync(var_97_object, var_171_string, var_117_cvector); // 0x69 Func
	var_115_bool = 1; // 0x6b MovB
	goto Label_110; // 0x6c Jump
	
Label_110:
	var_172_string = ""; // 0x6e PushV
	var_172_string = var_112_string; // 0x6f Mov
	func_777(var_172_string); // 0x70 NEW_2
	var_173_string = "all"; // 0x72 PushS
	PlayAnimation(var_173_string, var_112_string); // 0x73 Func
	WaitForAnimEnd(); // 0x75 Func
	var_174_bool = var_115_bool; // 0x77 Push
	if(var_174_bool == 0) goto Label_126; // 0x78 JumpB
	StopAsync(); // 0x79 Func
	var_175_string = "head"; // 0x7b PushS
	UnlookAsync(var_175_string); // 0x7c Func
	
Label_126:
	var_176_string = "all"; // 0x7e PushS
	LockAnimationEnd(var_176_string, var_112_string); // 0x7f Func
	RemoveEnvelope(); // 0x81 Func
	var_113_object = 0; // 0x83 SetNull
	
Label_109:
	var_115_bool = 0; // 0x6d MovB
	
Label_69:
	var_112_string = "bdie"; // 0x45 MovS
}


func_174(var_32_bool)
{
	var_33_float = 0; var_34_float = 0; // 0xae PushV
	GetBrightness(var_34_float); // 0xaf Func
	var_35_float = 0.5; // 0xb1 PushF
	var_32_bool = var_34_float >= var_35_float; // 0xb2 GE2
	return 2; // 0xb3 Return
}


func_1071(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x42f PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x430 PushV
	var_11_object = var_7_object; // 0x431 Mov
	func_601(var_10_bool, var_11_object); // 0x432 NEW_2
	var_44_bool = var_10_bool == 0; // 0x434 Not
	if(var_44_bool == 0) goto Label_1080; // 0x435 JumpB
	var_6_bool = 0; // 0x436 MovB
	return 2; // 0x437 Return
	
Label_1080:
	IsPlayerActor(var_7_object, var_9_bool); // 0x438 Func
	var_6_bool = var_9_bool; // 0x43a Mov
	return 2; // 0x43b Return
}


func_560(var_25_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x230 PushV
	IsDead(var_28_bool); // 0x231 ObjFunc
	var_25_bool = var_28_bool; // 0x233 Mov
	return 2; // 0x234 Return
}


func_818(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x332 PushV
	self(var_12_object); // 0x333 Func
	var_10_object = var_12_object; // 0x335 Mov
	return 2; // 0x336 Return
}


func_565(var_14_bool, var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); // 0x235 PushV
	var_20_bool = var_15_object == 0; // 0x236 NullEq
	if(var_20_bool == 0) goto Label_570; // 0x237 JumpB
	var_14_bool = 0; // 0x238 MovB
	return 4; // 0x239 Return
	
Label_570:
	var_21_bool = 0; // 0x23a PushV
	var_21_bool = 0; // 0x23b MovB
	var_22_string = "IsDead"; // 0x23c PushS
	var_23_int = 1; // 0x23d PushI
	var_24_bool = IsFuncExist(var_15_object, var_22_string, var_23_int); // 0x23e FuncExist
	if(var_24_bool == 0) goto Label_582; // 0x23f JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x240 PushV
	var_26_object = var_15_object; // 0x241 Mov
	func_560(var_26_object); // 0x242 NEW_2
	if(var_25_bool == 0) goto Label_582; // 0x244 JumpB
	var_21_bool = 1; // 0x245 MovB
	
Label_582:
	if(var_21_bool == 0) goto Label_585; // 0x246 JumpB
	var_14_bool = 0; // 0x247 MovB
	return 4; // 0x248 Return
	
Label_585:
	GetScene(var_18_object); // 0x249 Func
	var_29_bool = var_18_object == 0; // 0x24b NullEq
	if(var_29_bool == 0) goto Label_591; // 0x24c JumpB
	var_14_bool = 0; // 0x24d MovB
	return 4; // 0x24e Return
	
Label_591:
	GetScene(var_19_object); // 0x24f ObjFunc
	var_30_bool = var_18_object != var_19_object; // 0x251 Neq
	if(var_30_bool == 0) goto Label_597; // 0x252 JumpB
	var_14_bool = 0; // 0x253 MovB
	return 4; // 0x254 Return
	
Label_597:
	var_14_bool = 1; // 0x255 MovB
	return 4; // 0x256 Return
}


func_824(var_37_cvector, var_38_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x338 PushV
	var_47_int = var_38_cvector | var_38_cvector; // 0x339 Or
	var_46_float = sqrt(var_47_int); // 0x33a Sqrt2
	var_48_float = 0.0; // 0x33b PushF
	var_49_bool = var_46_float < var_48_float; // 0x33c LT
	if(var_49_bool == 0) goto Label_832; // 0x33d JumpB
	var_37_cvector = CVector(0.0, 0.0, 0.0); // 0x33e MovV
	return 2; // 0x33f Return
	
Label_832:
	var_37_cvector = var_38_cvector / var_38_cvector; // 0x340 Div2
	return 2; // 0x341 Return
}


func_1084(var_46_object)
{
	var_47_object = Obj(); // 0x43d PushV
	var_47_object = var_46_object; // 0x43e Mov
	TaskCall(3); // 0x43f TaskCall
	func_374(var_48_object, var_49_cvector, var_50_bool, var_47_object); // 0x440 NEW_2
	TaskReturn(); // 0x441 TaskReturn
	return 0; // 0x443 Return
}


func_318(var_22_float)
{
	var_23_float = 0; var_24_float = 0; // 0x13e PushV
	GetCameraFarDistance(var_24_float); // 0x13f Func
	var_22_float = var_24_float; // 0x141 Mov
	return 2; // 0x142 Return
}


func_834(var_52_bool, var_53_int, var_54_int)
{
	var_55_int = 0; var_56_int = 0; // 0x342 PushV
	irand(var_56_int, var_54_int); // 0x343 Func
	var_52_bool = var_56_int < var_53_int; // 0x345 LT2
	return 2; // 0x346 Return
}


func_199()
{
	func_330(var_4_cvector, var_5_bool); // 0xc8 NEW_2
	var_45_int = 110; // 0xca PushI
	KillTimer(var_45_int); // 0xcb Func
	return 0; // 0xcd Return
}


func_839(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_int = var_69_cvector | var_70_cvector; // 0x348 Or
	var_72_int = var_69_cvector | var_69_cvector; // 0x349 Or
	var_73_int = var_70_cvector | var_70_cvector; // 0x34a Or
	var_74_float = var_72_int * var_73_int; // 0x34b Mult
	var_75_float = sqrt(var_74_float); // 0x34c Sqrt
	var_68_float = var_71_int / var_71_int; // 0x34d Div2
	return 0; // 0x34e Return
}


func_330(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x14a TMovB
	var_1_bool = 0; // 0x14b TMovB
	Stop(); // 0x14c Func
	StopGroup0(); // 0x14e Func
	return 0; // 0x150 Return
}


func_974(var_37_int, var_38_string)
{
	var_39_int = 0; var_40_int = 0; // 0x3ce PushV
	GetInvItemByName(var_40_int, var_38_string); // 0x3cf Func
	var_37_int = var_40_int; // 0x3d1 Mov
	return 2; // 0x3d2 Return
}


func_847(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x34f PushV
	var_79_string = "branch"; // 0x350 PushS
	GetVariable(var_79_string, var_78_int); // 0x351 Func
	var_76_int = var_78_int; // 0x353 Mov
	return 2; // 0x354 Return
}


func_337(var_26_object, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x151 PushV
	FindShiftedPathTo(var_29_object, var_27_cvector); // 0x152 Func
	var_26_object = var_29_object; // 0x154 Mov
	return 2; // 0x155 Return
}


func_979(var_16_object)
{
	var_17_object = Obj(); // 0x3d4 PushV
	var_17_object = var_16_object; // 0x3d5 Mov
	TaskCall(0); // 0x3d6 TaskCall
	func_0(var_17_object); // 0x3d7 NEW_2
	TaskReturn(); // 0x3d8 TaskReturn
	return 0; // 0x3da Return
}


func_853(var_9_object)
{
	var_10_int = 0; // 0x356 PushV
	func_847(var_10_int); // 0x357 NEW_2
	var_14_int = 1; // 0x359 PushI
	var_15_bool = var_10_int == var_14_int; // 0x35a Eq
	if(var_15_bool == 0) goto Label_863; // 0x35b JumpB
	WorkWithCorpse(var_9_object); // 0x35c Func
	goto Label_865; // 0x35e Jump
	
Label_865:
	return 0; // 0x361 Return
	
Label_863:
	Barter(var_9_object); // 0x35f Func
}


func_343()
{
	return 0; // 0x157 Return
}


func_344(var_19_cvector, var_20_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; // 0x158 PushV
	GetPosition(var_27_cvector); // 0x159 Func
	GetPosition(var_28_cvector); // 0x15b TObjFunc
	GetDirection(var_29_cvector); // 0x15d Func
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); // 0x15f PushV
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); // 0x160 PushV
	var_36_cvector = var_27_cvector - var_28_cvector; // 0x161 Sub2
	func_824(var_35_cvector, var_36_cvector); // 0x162 NEW_2
	var_42_float = 0.75; // 0x164 PushF
	var_43_float = var_29_cvector * var_42_float; // 0x165 Mult
	var_34_cvector = var_35_cvector + var_43_float; // 0x166 Add2
	func_824(var_33_cvector, var_34_cvector); // 0x167 NEW_2
	var_30_cvector = var_33_cvector; // 0x168 Mov
	var_44_int = 32; // 0x16a PushI
	var_45_float = 7000.0; // 0x16b PushF
	FindLongestDir(var_31_cvector, var_32_float, var_30_cvector, var_20_float, var_44_int, var_45_float); // 0x16c Func
	var_46_int = 100; // 0x16e PushI
	var_32_float = var_32_float - var_46_int; // 0x16f Sub2
	var_47_int = 0; // 0x170 PushI
	var_48_bool = var_32_float < var_47_int; // 0x171 LT
	if(var_48_bool == 0) goto Label_372; // 0x172 JumpB
	var_32_float = 0; // 0x173 MovI
	
Label_372:
	var_19_cvector = var_31_cvector * var_32_float; // 0x174 Mult2
	return 12; // 0x175 Return
}


func_601(var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x259 PushV
	var_14_bool = 0; var_15_object = Obj(); // 0x25a PushV
	var_15_object = var_11_object; // 0x25b Mov
	func_565(var_14_bool, var_15_object); // 0x25c NEW_2
	var_31_bool = var_14_bool == 0; // 0x25e Not
	if(var_31_bool == 0) goto Label_610; // 0x25f JumpB
	var_10_bool = 0; // 0x260 MovB
	return 2; // 0x261 Return
	
Label_610:
	var_32_bool = 0; var_33_object = Obj(); var_34_string = ""; // 0x262 PushV
	var_33_object = var_11_object; // 0x263 Mov
	var_34_string = "noaccess"; // 0x264 MovS
	func_548(var_32_bool, var_33_object, var_34_string); // 0x265 NEW_2
	var_41_bool = var_32_bool == 0; // 0x267 Not
	if(var_41_bool == 0) goto Label_619; // 0x268 JumpB
	var_10_bool = 1; // 0x269 MovB
	return 2; // 0x26a Return
	
Label_619:
	var_42_string = "noaccess"; // 0x26b PushS
	GetProperty(var_42_string, var_13_int); // 0x26c ObjFunc
	var_43_int = 0; // 0x26e PushI
	var_10_bool = var_13_int == var_43_int; // 0x26f Eq2
	return 2; // 0x270 Return
}


func_737(var_11_object, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); // 0x2e1 PushV
	GetScene(var_18_object); // 0x2e2 Func
	var_20_string = "scripted"; // 0x2e4 PushS
	var_21_string = "blood_dir.xml"; // 0x2e5 PushS
	AddActorByType(var_19_object, var_20_string, var_18_object, var_14_cvector, var_15_cvector, var_21_string); // 0x2e6 Func
	var_22_object = Obj(); // 0x2e8 PushV
	var_22_object = var_11_object; // 0x2e9 Mov
	func_625(var_22_object); // 0x2ea NEW_2
	return 4; // 0x2ec Return
}


func_866(var_25_int, var_26_int)
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x362 PushV
	var_31_bool = var_25_int > var_26_int; // 0x363 GT
	if(var_31_bool == 0) goto Label_873; // 0x364 JumpB
	var_32_string = "GenerateMoney: iMin > iMax"; // 0x365 PushS
	Trace(var_32_string); // 0x366 Func
	return 4; // 0x368 Return
	
Label_873:
	var_29_int = 0; // 0x369 MovI
	var_33_bool = var_25_int != var_26_int; // 0x36a Neq
	if(var_33_bool == 0) goto Label_880; // 0x36b JumpB
	var_34_int = var_26_int - var_25_int; // 0x36c Sub
	irand(var_29_int, var_34_int); // 0x36d Func
	goto Label_884; // 0x36f Jump
	
Label_884:
	var_29_int = var_29_int + var_25_int; // 0x374 Add2
	var_35_int = 0; // 0x375 PushI
	var_36_bool = var_29_int == var_35_int; // 0x376 Eq
	if(var_36_bool == 0) goto Label_889; // 0x377 JumpB
	return 4; // 0x378 Return
	
Label_889:
	var_37_int = 0; var_38_string = ""; // 0x379 PushV
	var_38_string = "Money"; // 0x37a MovS
	func_974(var_37_int, var_38_string); // 0x37b NEW_2
	var_41_int = 0; // 0x37d PushI
	AddItem(var_30_bool, var_37_int, var_41_int, var_29_int); // 0x37e Func
	return 4; // 0x380 Return
	
Label_880:
	var_42_int = 0; // 0x370 PushI
	var_43_bool = var_25_int == var_42_int; // 0x371 Eq
	if(var_43_bool == 0) goto Label_884; // 0x372 JumpB
	return 4; // 0x373 Return
}


func_751(var_64_string, var_65_int, var_66_int)
{
	var_67_bool = 0; var_68_bool = 0; // 0x2ef PushV
	var_69_bool = 0; var_70_int = 0; var_71_int = 0; // 0x2f0 PushV
	var_70_int = var_65_int; // 0x2f1 Mov
	var_71_int = var_66_int; // 0x2f2 Mov
	func_834(var_69_bool, var_70_int, var_71_int); // 0x2f3 NEW_2
	if(var_69_bool == 0) goto Label_761; // 0x2f5 JumpB
	var_72_int = 0; // 0x2f6 PushI
	AddItem(var_68_bool, var_64_string, var_72_int); // 0x2f7 Func
	
Label_761:
	return 2; // 0x2f9 Return
}


func_625(var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; // 0x271 PushV
	var_37_bool = var_22_object == 0; // 0x272 NullEq
	if(var_37_bool == 0) goto Label_629; // 0x273 JumpB
	return 14; // 0x274 Return
	
Label_629:
	IsDead(var_30_bool); // 0x275 Func
	var_38_bool = var_30_bool; // 0x277 Push
	if(var_38_bool == 0) goto Label_634; // 0x278 JumpB
	return 14; // 0x279 Return
	
Label_634:
	GetSecondaryAnimationType(var_31_int); // 0x27a Func
	var_39_int = 0; // 0x27c PushI
	var_40_bool = var_31_int < var_39_int; // 0x27d LT
	if(var_40_bool == 0) goto Label_640; // 0x27e JumpB
	return 14; // 0x27f Return
	
Label_640:
	GetPosition(var_32_cvector); // 0x280 ObjFunc
	GetPosition(var_33_cvector); // 0x282 Func
	GetDirection(var_34_cvector); // 0x284 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x286 Sub2
	var_41_float = GetByIndex(var_35_cvector, 0); // 0x287 PushE
	var_42_float = GetByIndex(var_34_cvector, 0); // 0x288 PushE
	var_43_float = var_41_float * var_42_float; // 0x289 Mult
	var_44_float = GetByIndex(var_35_cvector, 2); // 0x28a PushE
	var_45_float = GetByIndex(var_34_cvector, 2); // 0x28b PushE
	var_46_float = var_44_float * var_45_float; // 0x28c Mult
	var_47_int = var_43_float + var_46_float; // 0x28d Add
	var_48_int = 0; // 0x28e PushI
	var_49_bool = var_47_int >= var_48_int; // 0x28f GE
	if(var_49_bool == 0) goto Label_659; // 0x290 JumpB
	var_36_string = "fhit"; // 0x291 MovS
	goto Label_660; // 0x292 Jump
	
Label_660:
	var_50_string = "hit_react"; // 0x294 PushS
	var_51_string = "1"; // 0x295 PushS
	var_52_int = var_36_string + var_51_string; // 0x296 Add
	var_53_string = "2"; // 0x297 PushS
	var_54_int = var_36_string + var_53_string; // 0x298 Add
	var_55_int = -10; // 0x299 PushI
	FadeSecondaryAnimation(var_50_string, var_52_int, var_54_int, var_55_int); // 0x29a Func
	return 14; // 0x29c Return
	
Label_659:
	var_36_string = "bhit"; // 0x293 MovS
}


func_499(var_2_object)
{
	Stop(); // 0x1f3 Func
	var_6_int = 120; // 0x1f5 PushI
	KillTimer(var_6_int); // 0x1f6 Func
	var_2_object = 1; // 0x1f8 TMovB
	return 0; // 0x1f9 Return
}


func_374(var_0_bool, var_1_bool, var_2_object, var_47_object)
{
	var_51_cvector = CVector(0,0,0); var_52_float = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0; // 0x176 PushV
	var_0_bool = var_47_object; // 0x177 TMov
	var_61_cvector = CVector(0,0,0); var_62_float = 0; // 0x178 PushV
	var_62_float = 1.74533; // 0x179 MovF
	func_344(var_61_cvector, var_62_float); // 0x17a NEW_2
	var_56_cvector = var_61_cvector; // 0x17b Mov
	var_57_float = var_56_cvector | var_56_cvector; // 0x17d Or2
	var_91_float = 2500.0; // 0x17e PushF
	var_92_bool = var_57_float < var_91_float; // 0x17f LT
	if(var_92_bool == 0) goto Label_403; // 0x180 JumpB
	var_93_cvector = CVector(0,0,0); var_94_float = 0; // 0x181 PushV
	var_94_float = 2.61799; // 0x182 MovF
	func_344(var_93_cvector, var_94_float); // 0x183 NEW_2
	var_56_cvector = var_93_cvector; // 0x184 Mov
	var_57_float = var_56_cvector | var_56_cvector; // 0x186 Or2
	var_95_float = 2500.0; // 0x187 PushF
	var_96_bool = var_57_float < var_95_float; // 0x188 LT
	if(var_96_bool == 0) goto Label_403; // 0x189 JumpB
	var_97_string = "Can't retreat, distance: "; // 0x18a PushS
	var_98_float = sqrt(var_57_float); // 0x18b Sqrt
	var_99_int = var_97_string + var_98_float; // 0x18c Add
	Trace(var_99_int); // 0x18d Func
	var_100_float = 0.5; // 0x18f PushF
	Sleep(var_100_float); // 0x190 Func
	return 10; // 0x192 Return
	
Label_403:
	var_101_float = GetByIndex(var_56_cvector, 0); // 0x193 PushE
	var_102_float = GetByIndex(var_56_cvector, 2); // 0x194 PushE
	Rotate(var_101_float, var_102_float); // 0x195 Func
	var_103_cvector = CVector(0,0,0); // 0x197 PushV
	func_531(var_103_cvector); // 0x198 NEW_2
	var_1_bool = var_103_cvector + var_56_cvector; // 0x19a Add2
	var_106_int = 120; // 0x19b PushI
	var_107_float = 0.5; // 0x19c PushF
	SetTimer(var_106_int, var_107_float); // 0x19d Func
	var_2_object = 0; // 0x19f TMovB
	
Label_416:
	var_108_int = 1; // 0x1a0 PushI
	MovePoint(var_108_int, var_108_int, var_58_bool); // 0x1a1 Func
	var_109_bool = var_58_bool; // 0x1a3 Push
	if(var_109_bool == 0) goto Label_444; // 0x1a4 JumpB
	var_110_bool = var_0_bool == 0; // 0x1a5 NullEq
	if(var_110_bool == 0) goto Label_425; // 0x1a6 JumpB
	goto Label_446; // 0x1a7 Jump
	
Label_446:
	return 10; // 0x1be Return
	
Label_425:
	var_111_cvector = CVector(0,0,0); var_112_float = 0; // 0x1a9 PushV
	var_112_float = 2.61799; // 0x1aa MovF
	func_344(var_111_cvector, var_112_float); // 0x1ab NEW_2
	var_59_cvector = var_111_cvector; // 0x1ac Mov
	var_60_float = var_59_cvector | var_59_cvector; // 0x1ae Or2
	var_113_float = 2500.0; // 0x1af PushF
	var_114_bool = var_60_float >= var_113_float; // 0x1b0 GE
	if(var_114_bool == 0) goto Label_443; // 0x1b1 JumpB
	var_115_cvector = CVector(0,0,0); // 0x1b2 PushV
	func_531(var_115_cvector); // 0x1b3 NEW_2
	var_1_bool = var_115_cvector + var_59_cvector; // 0x1b5 Add2
	var_116_int = 120; // 0x1b6 PushI
	var_117_float = 0.5; // 0x1b7 PushF
	SetTimer(var_116_int, var_117_float); // 0x1b8 Func
	goto Label_444; // 0x1ba Jump
	
Label_444:
	var_118_bool = var_2_object == 0; // 0x1bc Not
	if(var_118_bool == 0) goto Label_416; // 0x1bd JumpB
	
Label_443:
	goto Label_446; // 0x1bb Jump
}


func_762(var_44_string, var_45_int, var_46_int, var_47_int)
{
	var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; // 0x2fa PushV
	var_52_bool = 0; var_53_int = 0; var_54_int = 0; // 0x2fb PushV
	var_53_int = var_45_int; // 0x2fc Mov
	var_54_int = var_46_int; // 0x2fd Mov
	func_834(var_52_bool, var_53_int, var_54_int); // 0x2fe NEW_2
	if(var_52_bool == 0) goto Label_776; // 0x300 JumpB
	irand(var_50_int, var_47_int); // 0x301 Func
	var_57_int = 0; // 0x303 PushI
	var_58_int = 1; // 0x304 PushI
	var_59_int = var_50_int + var_58_int; // 0x305 Add
	AddItem(var_51_bool, var_44_string, var_57_int, var_59_int); // 0x306 Func
	
Label_776:
	return 4; // 0x308 Return
}


