task_0_event_5(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_0(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x1e PushV
	var_13_int = 0; var_14_object = Obj(); // 0x1f PushV
	var_14_object = var_10_object; // 0x20 Mov
	func_1451(var_14_object); // 0x21 Call
	var_12_int = var_13_int; // 0x22 Mov
	var_15_int = 0; // 0x24 PushI
	var_16_bool = var_12_int > var_15_int; // 0x25 GT
	if(var_16_bool == 0) goto Label_49; // 0x26 JumpB
	var_17_int = 1; // 0x27 PushI
	var_18_bool = var_12_int > var_17_int; // 0x28 GT
	if(var_18_bool == 0) goto Label_45; // 0x29 JumpB
	func_145(); // 0x2b Call
	
Label_45:
	var_20_object = Obj(); // 0x2d PushV
	var_20_object = var_10_object; // 0x2e Mov
	func_1454(var_20_object); // 0x2f Call
	
Label_49:
	return 2; // 0x31 Return
}


task_1_event_17(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x32 PushV
	var_13_int = 0; var_14_object = Obj(); // 0x33 PushV
	var_14_object = var_10_object; // 0x34 Mov
	func_1414(var_13_int, var_14_object); // 0x35 Call
	var_12_int = var_13_int; // 0x36 Mov
	var_49_int = 0; // 0x38 PushI
	var_50_bool = var_12_int > var_49_int; // 0x39 GT
	if(var_50_bool == 0) goto Label_69; // 0x3a JumpB
	var_51_int = 1; // 0x3b PushI
	var_52_bool = var_12_int > var_51_int; // 0x3c GT
	if(var_52_bool == 0) goto Label_65; // 0x3d JumpB
	func_145(); // 0x3f Call
	
Label_65:
	var_54_object = Obj(); // 0x41 PushV
	var_54_object = var_10_object; // 0x42 Mov
	func_1424(var_54_object); // 0x43 Call
	
Label_69:
	return 2; // 0x45 Return
}


task_1_event_30(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x46 PushV
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x47 PushV
	var_15_object = var_10_bool; // 0x48 Mov
	var_16_object = var_11_object; // 0x49 Mov
	func_1499(var_14_bool, var_15_object, var_16_object); // 0x4a Call
	if(var_14_bool == 0) goto Label_95; // 0x4c JumpB
	var_46_int = 0; var_47_object = Obj(); // 0x4d PushV
	var_47_object = var_10_bool; // 0x4e Mov
	func_1432(var_46_int, var_47_object); // 0x4f Call
	var_13_int = var_46_int; // 0x50 Mov
	var_78_int = 0; // 0x52 PushI
	var_79_bool = var_13_int > var_78_int; // 0x53 GT
	if(var_79_bool == 0) goto Label_95; // 0x54 JumpB
	var_80_int = 1; // 0x55 PushI
	var_81_bool = var_13_int > var_80_int; // 0x56 GT
	if(var_81_bool == 0) goto Label_91; // 0x57 JumpB
	func_145(); // 0x59 Call
	
Label_91:
	var_83_object = Obj(); // 0x5b PushV
	var_83_object = var_10_bool; // 0x5c Mov
	func_1439(var_83_object); // 0x5d Call
	
Label_95:
	return 2; // 0x5f Return
}


task_1_event_40(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x60 PushV
	var_13_int = 0; var_14_object = Obj(); // 0x61 PushV
	var_14_object = var_10_object; // 0x62 Mov
	func_1460(var_14_object); // 0x63 Call
	var_12_int = var_13_int; // 0x64 Mov
	var_15_int = 0; // 0x66 PushI
	var_16_bool = var_12_int > var_15_int; // 0x67 GT
	if(var_16_bool == 0) goto Label_115; // 0x68 JumpB
	var_17_int = 1; // 0x69 PushI
	var_18_bool = var_12_int > var_17_int; // 0x6a GT
	if(var_18_bool == 0) goto Label_111; // 0x6b JumpB
	func_145(); // 0x6d Call
	
Label_111:
	var_20_object = Obj(); // 0x6f PushV
	var_20_object = var_10_object; // 0x70 Mov
	func_1463(); // 0x71 Call
	
Label_115:
	return 2; // 0x73 Return
}


task_1_event_42(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x74 PushV
	var_14_int = 0; var_15_string = ""; var_16_object = Obj(); // 0x75 PushV
	var_15_string = var_11_object; // 0x76 Mov
	var_16_object = var_10_bool; // 0x77 Mov
	func_1465(var_16_object); // 0x78 Call
	var_13_int = var_14_int; // 0x79 Mov
	var_17_int = 0; // 0x7b PushI
	var_18_bool = var_13_int > var_17_int; // 0x7c GT
	if(var_18_bool == 0) goto Label_137; // 0x7d JumpB
	var_19_int = 1; // 0x7e PushI
	var_20_bool = var_13_int > var_19_int; // 0x7f GT
	if(var_20_bool == 0) goto Label_132; // 0x80 JumpB
	func_145(); // 0x82 Call
	
Label_132:
	var_22_string = ""; var_23_object = Obj(); // 0x84 PushV
	var_22_string = var_11_object; // 0x85 Mov
	var_23_object = var_10_bool; // 0x86 Mov
	func_1468(); // 0x87 Call
	
Label_137:
	return 2; // 0x89 Return
}


task_1_event_6(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_145(); // 0x8b Call
	func_1445(); // 0x8e Call
	return 0; // 0x90 Return
}


task_1_event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_145(); // 0x9d Call
	var_12_object = Obj(); // 0x9f PushV
	var_12_object = var_10_object; // 0xa0 Mov
	func_1353(); // 0xa1 Call
	return 0; // 0xa3 Return
}


task_2_event_0(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x10c PushV
	var_13_int = 0; var_14_object = Obj(); // 0x10d PushV
	var_14_object = var_10_object; // 0x10e Mov
	func_1451(var_14_object); // 0x10f Call
	var_12_int = var_13_int; // 0x110 Mov
	var_15_int = 0; // 0x112 PushI
	var_16_bool = var_12_int > var_15_int; // 0x113 GT
	if(var_16_bool == 0) goto Label_281; // 0x114 JumpB
	var_17_object = Obj(); // 0x115 PushV
	var_17_object = var_10_object; // 0x116 Mov
	func_1454(var_17_object); // 0x117 Call
	
Label_281:
	return 2; // 0x119 Return
}


task_2_event_6(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_1445(); // 0x11b Call
	return 0; // 0x11d Return
}


task_2_event_22(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_float, var_6_float, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	return 0; // 0x18c Return
}


task_2_event_16(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	return 0; // 0x18e Return
}


task_2_event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	return 0; // 0x190 Return
}


task_4_event_6(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_1037(var_9_object); // 0x38b Call
	func_1445(); // 0x38e Call
	return 0; // 0x390 Return
}


task_4_event_7(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 0; // 0x3f8 PushI
	var_12_bool = var_10_int != var_11_int; // 0x3f9 Neq
	if(var_12_bool == 0) goto Label_1020; // 0x3fa JumpB
	return 0; // 0x3fb Return
	
Label_1020:
	var_13_bool = 0; var_14_object = Obj(); // 0x3fc PushV
	var_14_object = var_1_cvector; // 0x3fd MovT
	func_1053(var_13_bool, var_14_object); // 0x3fe Call
	var_49_bool = var_13_bool == 0; // 0x400 Not
	if(var_49_bool == 0) goto Label_1027; // 0x401 JumpB
	var_0_cvector = 1; // 0x402 TMovB
	
Label_1027:
	var_50_int = 0; // 0x403 PushI
	KillTimer(var_50_int); // 0x404 Func
	Stop(); // 0x406 Func
	return 0; // 0x408 Return
}


task_4_event_10(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	RequestClearPath(var_10_object); // 0x40a Func
	return 0; // 0x40c Return
}


task_4_event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	func_1037(var_10_object); // 0x416 Call
	var_12_object = Obj(); // 0x418 PushV
	var_12_object = var_10_object; // 0x419 Mov
	func_1353(); // 0x41a Call
	return 0; // 0x41c Return
}


event_16(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x53c PushV
	var_14_string = "health"; // 0x53d PushS
	var_15_bool = var_11_string == var_14_string; // 0x53e Eq
	if(var_15_bool == 0) goto Label_1352; // 0x53f JumpB
	var_16_string = "health"; // 0x540 PushS
	GetProperty(var_16_string, var_13_float); // 0x541 Func
	var_17_int = 0; // 0x543 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x544 LE
	if(var_18_bool == 0) goto Label_1352; // 0x545 JumpB
	SignalDeath(var_10_object); // 0x546 Func
	
Label_1352:
	return 2; // 0x548 Return
}


event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	var_11_object = Obj(); // 0x54a PushV
	var_11_object = var_10_object; // 0x54b Mov
	func_1332(var_11_object); // 0x54c Call
	return 0; // 0x54e Return
}


event_22(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x550 PushV
	var_14_object = var_10_object; // 0x551 Mov
	var_15_int = var_11_int; // 0x552 Mov
	var_16_float = var_12_float; // 0x553 Mov
	func_1221(var_15_int, var_16_float); // 0x554 Call
	return 0; // 0x556 Return
}


main(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	var_2_bool = 0; // 0x6 TMovB
	var_10_bool = 1; // 0x7 PushB
	SensePlayerOnly(var_10_bool); // 0x8 Func
	func_1470(); // 0xb Call
	func_21(); // 0xe Call
	
Label_16:
	func_170(var_8_bool, var_9_object); // 0x11 Call
	goto Label_16; // 0x13 Jump
}


func_1536()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x600 PushV
	var_66_bool = GlobalVars[0]; // 0x601 PushGE
	var_66_bool = 1; // 0x602 MovB
	GlobalVars[0] = var_66_bool; // 0x603 PopGE
	var_67_int = 50; // 0x604 PushI
	var_68_int = 40; // 0x605 PushI
	SetRTEnvelope(var_67_int, var_68_int); // 0x606 Func
	GetScene(var_65_object); // 0x608 Func
	var_69_object = Obj(); // 0x60a PushV
	func_1304(var_69_object); // 0x60b Call
	RemoveStationaryActor(var_69_object); // 0x60d ObjFunc
	return 2; // 0x60f Return
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_898(var_365_int)
{
	var_365_int = 0; // 0x382 MovI
	return 0; // 0x383 Return
}


func_900()
{
	return 0; // 0x385 Return
}


func_1156(var_30_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x484 PushV
	IsDead(var_33_bool); // 0x485 ObjFunc
	var_30_bool = var_33_bool; // 0x487 Mov
	return 2; // 0x488 Return
}


func_1414(var_48_int, var_49_object)
{
	var_50_bool = 0; var_51_object = Obj(); // 0x587 PushV
	var_51_object = var_49_object; // 0x588 Mov
	func_1197(var_50_bool, var_51_object); // 0x589 Call
	if(var_50_bool == 0) goto Label_1422; // 0x58b JumpB
	var_48_int = 2; // 0x58c MovI
	goto Label_1423; // 0x58d Jump
	
Label_1423:
	return 0; // 0x58f Return
	
Label_1422:
	var_48_int = 0; // 0x58e MovI
}


func_902(var_294_int)
{
	var_294_int = 1; // 0x386 MovI
	return 0; // 0x387 Return
}


func_1288()
{
	var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); // 0x508 PushV
	GetPosition(var_208_cvector); // 0x509 ObjFunc
	GetPosition(var_209_cvector); // 0x50b Func
	var_210_cvector = var_208_cvector - var_209_cvector; // 0x50d Sub2
	var_211_float = GetByIndex(var_210_cvector, 0); // 0x50e PushE
	var_212_float = GetByIndex(var_210_cvector, 2); // 0x50f PushE
	RotateAsync(var_211_float, var_212_float); // 0x510 Func
	return 6; // 0x512 Return
}


func_904(var_289_float)
{
	var_289_float = 0.5; // 0x388 MovF
	return 0; // 0x389 Return
}


func_1161(var_19_bool, var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x489 PushV
	var_25_bool = var_20_object == 0; // 0x48a NullEq
	if(var_25_bool == 0) goto Label_1166; // 0x48b JumpB
	var_19_bool = 0; // 0x48c MovB
	return 4; // 0x48d Return
	
Label_1166:
	var_26_bool = 0; // 0x48e PushV
	var_26_bool = 0; // 0x48f MovB
	var_27_string = "IsDead"; // 0x490 PushS
	var_28_int = 1; // 0x491 PushI
	var_29_bool = IsFuncExist(var_20_object, var_27_string, var_28_int); // 0x492 FuncExist
	if(var_29_bool == 0) goto Label_1178; // 0x493 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x494 PushV
	var_31_object = var_20_object; // 0x495 Mov
	func_1156(var_31_object); // 0x496 Call
	if(var_30_bool == 0) goto Label_1178; // 0x498 JumpB
	var_26_bool = 1; // 0x499 MovB
	
Label_1178:
	if(var_26_bool == 0) goto Label_1181; // 0x49a JumpB
	var_19_bool = 0; // 0x49b MovB
	return 4; // 0x49c Return
	
Label_1181:
	GetScene(var_23_object); // 0x49d Func
	var_34_bool = var_23_object == 0; // 0x49f NullEq
	if(var_34_bool == 0) goto Label_1187; // 0x4a0 JumpB
	var_19_bool = 0; // 0x4a1 MovB
	return 4; // 0x4a2 Return
	
Label_1187:
	GetScene(var_24_object); // 0x4a3 ObjFunc
	var_35_bool = var_23_object != var_24_object; // 0x4a5 Neq
	if(var_35_bool == 0) goto Label_1193; // 0x4a6 JumpB
	var_19_bool = 0; // 0x4a7 MovB
	return 4; // 0x4a8 Return
	
Label_1193:
	var_19_bool = 1; // 0x4a9 MovB
	return 4; // 0x4aa Return
}


func_1037(var_0_cvector)
{
	var_0_cvector = 1; // 0x40d TMovB
	var_11_int = 0; // 0x40e PushI
	KillTimer(var_11_int); // 0x40f Func
	Stop(); // 0x411 Func
	return 0; // 0x413 Return
}


func_1424(var_84_object)
{
	var_85_object = Obj(); // 0x591 PushV
	var_85_object = var_84_object; // 0x592 Mov
	TaskCall(3); // 0x593 TaskCall
	func_401(var_85_object); // 0x594 Call
	TaskReturn(); // 0x595 TaskReturn
	return 0; // 0x597 Return
}


func_145()
{
	var_11_bool = var_2_bool; // 0x91 PushT
	if(var_11_bool == 0) goto Label_151; // 0x92 JumpB
	func_1391(); // 0x94 Call
	goto Label_154; // 0x96 Jump
	
Label_154:
	return 0; // 0x9a Return
	
Label_151:
	func_248(); // 0x98 Call
}


func_913(var_0_cvector, var_1_cvector, var_142_bool, var_143_object, var_144_float, var_145_float, var_146_bool, var_147_bool)
{
	var_150_bool = 0; var_151_bool = 0; var_152_object = Obj(); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_cvector = CVector(0,0,0); var_156_float = 0; var_157_object = Obj(); var_158_bool = 0; var_159_bool = 0; var_160_object = Obj(); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_float = 0; var_165_object = Obj(); // 0x391 PushV
	var_0_cvector = 0; // 0x392 TMovB
	var_1_cvector = var_143_object; // 0x393 TMov
	var_159_bool = var_147_bool; // 0x394 Mov
	
Label_917:
	var_166_bool = 0; var_167_object = Obj(); // 0x395 PushV
	var_167_object = var_143_object; // 0x396 Mov
	func_1053(var_166_bool, var_167_object); // 0x397 Call
	var_170_bool = var_166_bool == 0; // 0x399 Not
	if(var_170_bool == 0) goto Label_925; // 0x39a JumpB
	var_142_bool = 0; // 0x39b MovB
	return 16; // 0x39c Return
	
Label_925:
	GetPosition(var_161_cvector); // 0x39d ObjFunc
	GetPosition(var_162_cvector); // 0x39f Func
	var_163_cvector = var_161_cvector - var_162_cvector; // 0x3a1 Sub2
	var_164_float = var_163_cvector | var_163_cvector; // 0x3a2 Or2
	var_171_bool = 0; // 0x3a3 PushV
	var_171_bool = 0; // 0x3a4 MovB
	var_172_int = 0; // 0x3a5 PushI
	var_173_bool = var_145_float > var_172_int; // 0x3a6 GT
	if(var_173_bool == 0) goto Label_940; // 0x3a7 JumpB
	var_174_float = var_145_float * var_145_float; // 0x3a8 Mult
	var_175_bool = var_164_float > var_174_float; // 0x3a9 GT
	if(var_175_bool == 0) goto Label_940; // 0x3aa JumpB
	var_171_bool = 1; // 0x3ab MovB
	
Label_940:
	if(var_171_bool == 0) goto Label_945; // 0x3ac JumpB
	Stop(); // 0x3ad Func
	var_142_bool = 0; // 0x3af MovB
	return 16; // 0x3b0 Return
	
Label_945:
	var_176_float = var_144_float * var_144_float; // 0x3b1 Mult
	var_177_bool = var_164_float > var_176_float; // 0x3b2 GT
	if(var_177_bool == 0) goto Label_1007; // 0x3b3 JumpB
	GetPFPosition(var_161_cvector); // 0x3b4 ObjFunc
	FindPathTo(var_165_object, var_161_cvector); // 0x3b6 Func
	var_178_bool = var_165_object != 0; // 0x3b8 NullNeq
	if(var_178_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_160_object = var_165_object; // 0x3ba Mov
	var_165_object = 0; // 0x3bb SetNull
	
Label_956:
	var_179_bool = var_160_object != 0; // 0x3bc NullNeq
	if(var_179_bool == 0) goto Label_989; // 0x3bd JumpB
	var_180_bool = var_159_bool; // 0x3be Push
	if(var_180_bool == 0) goto Label_966; // 0x3bf JumpB
	var_159_bool = 0; // 0x3c0 MovB
	RotatePath(var_160_object, var_158_bool); // 0x3c1 Func
	var_181_bool = var_158_bool == 0; // 0x3c3 Not
	if(var_181_bool == 0) goto Label_966; // 0x3c4 JumpB
	goto Label_1013; // 0x3c5 Jump
	
Label_1013:
	var_142_bool = !var_0_cvector; // 0x3f5 Not2
	return 16; // 0x3f6 Return
	
Label_966:
	var_182_int = 0; // 0x3c6 PushI
	var_183_float = 0.3; // 0x3c7 PushF
	SetTimer(var_182_int, var_183_float); // 0x3c8 Func
	var_184_string = ""; // 0x3ca PushV
	func_1060(var_184_string); // 0x3cb Call
	var_185_string = ""; // 0x3cd PushV
	func_1062(var_185_string); // 0x3ce Call
	FollowPath(var_160_object, var_146_bool, var_158_bool, var_184_string, var_185_string); // 0x3d0 Func
	var_186_bool = var_158_bool == 0; // 0x3d2 Not
	if(var_186_bool == 0) goto Label_987; // 0x3d3 JumpB
	var_187_cvector = var_0_cvector; // 0x3d4 PushT
	if(var_187_cvector == 0) goto Label_985; // 0x3d5 JumpB
	var_160_object = 0; // 0x3d6 SetNull
	goto Label_1013; // 0x3d7 Jump
	
Label_985:
	goto Label_1012; // 0x3d9 Jump
	
Label_1012:
	goto Label_917; // 0x3f4 Jump
	
Label_987:
	var_160_object = 0; // 0x3db SetNull
	goto Label_1005; // 0x3dc Jump
	
Label_1005:
	var_165_object = 0; // 0x3ed SetNull
	goto Label_1011; // 0x3ee Jump
	
Label_1011:
	var_160_object = 0; // 0x3f3 SetNull
	
Label_989:
	var_188_int = 0; // 0x3dd PushI
	KillTimer(var_188_int); // 0x3de Func
	var_189_float = 0.5; // 0x3e0 PushF
	Sleep(var_189_float, var_158_bool); // 0x3e1 Func
	var_190_bool = var_158_bool == 0; // 0x3e3 Not
	if(var_190_bool == 0) goto Label_1001; // 0x3e4 JumpB
	var_191_cvector = var_0_cvector; // 0x3e5 PushT
	if(var_191_cvector == 0) goto Label_1001; // 0x3e6 JumpB
	var_160_object = 0; // 0x3e7 SetNull
	goto Label_1013; // 0x3e8 Jump
	
Label_1001:
	var_192_int = 0; // 0x3e9 PushI
	var_193_float = 0.3; // 0x3ea PushF
	SetTimer(var_192_int, var_193_float); // 0x3eb Func
	
Label_1007:
	var_194_int = 0; // 0x3ef PushI
	KillTimer(var_194_int); // 0x3f0 Func
	goto Label_1013; // 0x3f2 Jump
}


func_1299(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0; // 0x513 PushV
	IsLoaded(var_26_bool); // 0x514 Func
	var_24_bool = var_26_bool; // 0x516 Mov
	return 2; // 0x517 Return
}


func_659(var_0_cvector, var_269_bool, var_270_float)
{
	var_271_int = 0; var_272_bool = 0; var_273_int = 0; var_274_bool = 0; // 0x293 PushV
	irand(var_273_int, var_274_bool); // 0x294 Func
	var_275_int = 1; // 0x296 PushI
	var_273_int = var_273_int + var_275_int; // 0x297 Add2
	Face(var_0_cvector); // 0x298 Func
	var_276_bool = 1; // 0x29a PushB
	SetAttackState(var_276_bool); // 0x29b Func
	var_277_string = "all"; // 0x29d PushS
	var_278_string = "attack_begin"; // 0x29e PushS
	var_279_int = var_278_string + var_273_int; // 0x29f Add
	PlayAnimation(var_277_string, var_279_int); // 0x2a0 Func
	WaitForAnimEnd(); // 0x2a2 Func
	func_866(var_273_int, var_274_bool); // 0x2a5 Call
	var_295_bool = 0; var_296_object = Obj(); // 0x2a7 PushV
	var_296_object = var_0_cvector; // 0x2a8 MovT
	func_1197(var_295_bool, var_296_object); // 0x2a9 Call
	var_297_bool = var_295_bool == 0; // 0x2ab Not
	if(var_297_bool == 0) goto Label_689; // 0x2ac JumpB
	StopAsync(); // 0x2ad Func
	var_269_bool = 0; // 0x2af MovB
	return 4; // 0x2b0 Return
	
Label_689:
	var_298_float = 0; var_299_int = 0; // 0x2b1 PushV
	var_298_float = var_270_float; // 0x2b2 Mov
	var_299_int = var_273_int; // 0x2b3 Mov
	func_620(var_274_bool, var_298_float, var_299_int); // 0x2b4 Call
	var_368_string = "all"; // 0x2b6 PushS
	var_369_string = "attack_middle"; // 0x2b7 PushS
	var_370_int = var_369_string + var_273_int; // 0x2b8 Add
	HasAnimation(var_274_bool, var_368_string, var_370_int); // 0x2b9 Func
	var_371_bool = var_274_bool; // 0x2bb Push
	if(var_371_bool == 0) goto Label_723; // 0x2bc JumpB
	var_372_string = "all"; // 0x2bd PushS
	var_373_string = "attack_middle"; // 0x2be PushS
	var_374_int = var_373_string + var_273_int; // 0x2bf Add
	PlayAnimation(var_372_string, var_374_int); // 0x2c0 Func
	WaitForAnimEnd(); // 0x2c2 Func
	var_375_bool = 0; var_376_object = Obj(); // 0x2c4 PushV
	var_376_object = var_0_cvector; // 0x2c5 MovT
	func_1197(var_375_bool, var_376_object); // 0x2c6 Call
	var_377_bool = var_375_bool == 0; // 0x2c8 Not
	if(var_377_bool == 0) goto Label_718; // 0x2c9 JumpB
	StopAsync(); // 0x2ca Func
	var_269_bool = 0; // 0x2cc MovB
	return 4; // 0x2cd Return
	
Label_718:
	var_378_float = 0; var_379_int = 0; // 0x2ce PushV
	var_378_float = var_270_float; // 0x2cf Mov
	var_379_int = var_273_int; // 0x2d0 Mov
	func_620(var_274_bool, var_378_float, var_379_int); // 0x2d1 Call
	
Label_723:
	var_380_bool = 0; // 0x2d3 PushB
	SetAttackState(var_380_bool); // 0x2d4 Func
	var_381_string = "all"; // 0x2d6 PushS
	var_382_string = "attack_end"; // 0x2d7 PushS
	var_383_int = var_382_string + var_273_int; // 0x2d8 Add
	PlayAnimation(var_381_string, var_383_int); // 0x2d9 Func
	var_384_bool = 0; var_385_float = 0; // 0x2db PushV
	var_385_float = 0.75; // 0x2dc MovF
	func_739(var_384_bool, var_385_float); // 0x2dd Call
	StopAsync(); // 0x2df Func
	var_269_bool = 1; // 0x2e1 MovB
	return 4; // 0x2e2 Return
}


func_21()
{
	var_24_bool = 0; // 0x15 PushV
	func_1299(var_24_bool); // 0x16 Call
	var_27_bool = var_24_bool == 0; // 0x18 Not
	if(var_27_bool == 0) goto Label_29; // 0x19 JumpB
	func_1445(); // 0x1b Call
	
Label_29:
	return 0; // 0x1d Return
}


func_401(var_85_object)
{
	var_91_object = Obj(); var_92_bool = 0; var_93_float = 0; // 0x192 PushV
	var_91_object = var_85_object; // 0x193 Mov
	var_92_bool = 1; // 0x194 MovB
	var_93_float = 180.0; // 0x195 MovF
	func_415(var_86_object, var_87_int, var_88_int, var_89_bool, var_90_int, var_85_object, var_91_object, var_92_bool, var_93_float); // 0x196 Call
	return 0; // 0x198 Return
}


func_1432(var_46_int, var_47_object)
{
	var_48_int = 0; var_49_object = Obj(); // 0x599 PushV
	var_49_object = var_47_object; // 0x59a Mov
	func_1414(var_48_int, var_49_object); // 0x59b Call
	var_46_int = var_48_int; // 0x59c Mov
	return 0; // 0x59e Return
}


func_409(var_309_float)
{
	var_309_float = 0.07; // 0x19a MovF
	return 0; // 0x19b Return
}


func_1304(var_69_object)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x518 PushV
	self(var_71_object); // 0x519 Func
	var_69_object = var_71_object; // 0x51b Mov
	return 2; // 0x51c Return
}


func_412(var_316_int)
{
	var_316_int = 0; // 0x19d MovI
	return 0; // 0x19e Return
}


func_1053(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x41e PushV
	var_16_object = var_14_object; // 0x41f Mov
	func_1197(var_15_bool, var_16_object); // 0x420 Call
	var_13_bool = var_15_bool; // 0x421 Mov
	return 0; // 0x423 Return
}


func_1310(var_61_float, var_62_cvector, var_63_cvector)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x51e PushV
	var_65_cvector = var_63_cvector - var_62_cvector; // 0x51f Sub2
	var_61_float = var_65_cvector | var_65_cvector; // 0x520 Or2
	return 2; // 0x521 Return
}


func_1439(var_83_object)
{
	var_84_object = Obj(); // 0x5a0 PushV
	var_84_object = var_83_object; // 0x5a1 Mov
	func_1424(var_84_object); // 0x5a2 Call
	return 0; // 0x5a4 Return
}


func_286(var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x11e PushV
	var_34_bool = var_13_object == 0; // 0x11f NullEq
	if(var_34_bool == 0) goto Label_294; // 0x120 JumpB
	var_35_string = ""; // 0x121 PushV
	var_35_string = "fdie"; // 0x122 MovS
	func_373(var_35_string); // 0x123 Call
	goto Label_372; // 0x125 Jump
	
Label_372:
	return 20; // 0x174 Return
	
Label_294:
	GetPosition(var_24_cvector); // 0x126 ObjFunc
	GetPosition(var_25_cvector); // 0x128 Func
	GetDirection(var_26_cvector); // 0x12a Func
	var_27_cvector = var_25_cvector - var_24_cvector; // 0x12c Sub2
	var_38_float = GetByIndex(var_27_cvector, 0); // 0x12d PushE
	var_39_float = GetByIndex(var_26_cvector, 0); // 0x12e PushE
	var_40_float = var_38_float * var_39_float; // 0x12f Mult
	var_41_float = GetByIndex(var_27_cvector, 2); // 0x130 PushE
	var_42_float = GetByIndex(var_26_cvector, 2); // 0x131 PushE
	var_43_float = var_41_float * var_42_float; // 0x132 Mult
	var_44_int = var_40_float + var_43_float; // 0x133 Add
	var_45_int = 0; // 0x134 PushI
	var_46_bool = var_44_int >= var_45_int; // 0x135 GE
	if(var_46_bool == 0) goto Label_313; // 0x136 JumpB
	var_28_string = "fdie"; // 0x137 MovS
	goto Label_314; // 0x138 Jump
	
Label_314:
	RemoveRTEnvelope(); // 0x13a Func
	SetDeathState(); // 0x13c Func
	Stop(); // 0x13e Func
	StopAsync(); // 0x140 Func
	var_29_object = var_13_object; // 0x142 Mov
	var_47_string = "GetScriptProperty"; // 0x143 PushS
	var_48_int = 2; // 0x144 PushI
	var_49_bool = IsFuncExist(var_13_object, var_47_string, var_48_int); // 0x145 FuncExist
	if(var_49_bool == 0) goto Label_338; // 0x146 JumpB
	var_50_string = "Owner"; // 0x147 PushS
	HasScriptProperty(var_30_bool, var_50_string); // 0x148 ObjFunc
	var_51_bool = var_30_bool; // 0x14a Push
	if(var_51_bool == 0) goto Label_338; // 0x14b JumpB
	var_52_string = "Owner"; // 0x14c PushS
	GetScriptProperty(var_29_object, var_52_string); // 0x14d ObjFunc
	var_53_bool = var_29_object == 0; // 0x14f NullEq
	if(var_53_bool == 0) goto Label_338; // 0x150 JumpB
	var_29_object = var_13_object; // 0x151 Mov
	
Label_338:
	var_54_string = "@GetEyesHeight"; // 0x152 PushS
	var_55_int = 1; // 0x153 PushI
	var_56_bool = IsFuncExist(var_29_object, var_54_string, var_55_int); // 0x154 FuncExist
	if(var_56_bool == 0) goto Label_353; // 0x155 JumpB
	GetEyesHeight(var_32_float); // 0x156 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x158 MovV
	var_57_float = GetByIndex(var_33_cvector, 1); // 0x159 PushE
	var_57_float = var_32_float; // 0x15a Mov
	SetByIndex(var_33_cvector, 1) = var_57_float; // 0x15b PopE
	var_58_string = "head"; // 0x15c PushS
	LookAsync(var_13_object, var_58_string, var_33_cvector); // 0x15d Func
	var_31_bool = 1; // 0x15f MovB
	goto Label_354; // 0x160 Jump
	
Label_354:
	var_59_string = "all"; // 0x162 PushS
	PlayAnimation(var_59_string, var_28_string); // 0x163 Func
	WaitForAnimEnd(); // 0x165 Func
	var_60_bool = var_31_bool; // 0x167 Push
	if(var_60_bool == 0) goto Label_366; // 0x168 JumpB
	StopAsync(); // 0x169 Func
	var_61_string = "head"; // 0x16b PushS
	UnlookAsync(var_61_string); // 0x16c Func
	
Label_366:
	var_62_string = "all"; // 0x16e PushS
	LockAnimationEnd(var_62_string, var_28_string); // 0x16f Func
	RemoveEnvelope(); // 0x171 Func
	var_29_object = 0; // 0x173 SetNull
	
Label_353:
	var_31_bool = 0; // 0x161 MovB
	
Label_313:
	var_28_string = "bdie"; // 0x139 MovS
}


func_415(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_91_object, var_92_bool, var_93_float, var_148_bool)
{
	var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_bool = 0; var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_bool = 0; var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_bool = 0; var_111_cvector = CVector(0,0,0); var_112_float = 0; var_113_float = 0; // 0x19f PushV
	var_1_cvector = 0; // 0x1a0 TMovI
	
Label_417:
	var_114_string = "all"; // 0x1a1 PushS
	var_115_string = "attack_begin"; // 0x1a2 PushS
	var_116_int = 1; // 0x1a3 PushI
	var_117_int = var_1_cvector + var_116_int; // 0x1a4 Add
	var_118_int = var_115_string + var_117_int; // 0x1a5 Add
	HasAnimation(var_104_bool, var_114_string, var_118_int); // 0x1a6 Func
	var_119_bool = var_104_bool == 0; // 0x1a8 Not
	if(var_119_bool == 0) goto Label_427; // 0x1a9 JumpB
	goto Label_430; // 0x1aa Jump
	
Label_430:
	var_2_bool = 0; // 0x1ae TMovI
	
Label_431:
	var_120_string = "attack"; // 0x1af PushS
	var_121_int = 1; // 0x1b0 PushI
	var_122_int = var_2_bool + var_121_int; // 0x1b1 Add
	var_123_int = var_120_string + var_122_int; // 0x1b2 Add
	IsExisting3DSound(var_105_bool, var_123_int); // 0x1b3 Func
	var_124_bool = var_105_bool == 0; // 0x1b5 Not
	if(var_124_bool == 0) goto Label_440; // 0x1b6 JumpB
	goto Label_443; // 0x1b7 Jump
	
Label_443:
	var_4_object = 0; // 0x1bb TMovI
	var_125_string = "@GetAttackDistance"; // 0x1bc PushS
	var_126_int = 1; // 0x1bd PushI
	var_127_bool = IsFuncExist(var_91_object, var_125_string, var_126_int); // 0x1be FuncExist
	if(var_127_bool == 0) goto Label_453; // 0x1bf JumpB
	GetAttackDistance(var_106_float); // 0x1c0 ObjFunc
	var_128_int = 50; // 0x1c2 PushI
	var_106_float = var_106_float + var_128_int; // 0x1c3 Add2
	goto Label_454; // 0x1c4 Jump
	
Label_454:
	var_129_int = 150; // 0x1c6 PushI
	var_130_bool = var_106_float >= var_129_int; // 0x1c7 GE
	if(var_130_bool == 0) goto Label_458; // 0x1c8 JumpB
	var_106_float = 150; // 0x1c9 MovI
	
Label_458:
	var_3_object = 0; // 0x1ca TMovB
	var_0_cvector = var_91_object; // 0x1cb TMov
	IsPlayerActor(var_0_cvector, var_109_bool); // 0x1cc Func
	var_131_bool = var_92_bool; // 0x1ce Push
	if(var_131_bool == 0) goto Label_466; // 0x1cf JumpB
	var_110_bool = 0; // 0x1d0 MovB
	goto Label_467; // 0x1d1 Jump
	
Label_467:
	var_132_bool = 0; // 0x1d3 PushV
	var_132_bool = 0; // 0x1d4 MovB
	var_133_bool = 0; var_134_object = Obj(); // 0x1d5 PushV
	var_134_object = var_0_cvector; // 0x1d6 MovT
	func_1197(var_133_bool, var_134_object); // 0x1d7 Call
	if(var_133_bool == 0) goto Label_477; // 0x1d9 JumpB
	var_135_bool = var_3_object == 0; // 0x1da Not
	if(var_135_bool == 0) goto Label_477; // 0x1db JumpB
	var_132_bool = 1; // 0x1dc MovB
	
Label_477:
	if(var_132_bool == 0) goto Label_603; // 0x1dd JumpB
	GetPFPosition(var_107_cvector); // 0x1de TObjFunc
	GetPFPosition(var_108_cvector); // 0x1e0 Func
	var_111_cvector = var_107_cvector - var_108_cvector; // 0x1e2 Sub2
	var_112_float = var_111_cvector | var_111_cvector; // 0x1e3 Or2
	var_136_float = 400.0; // 0x1e4 PushF
	var_137_int = var_136_float + var_106_float; // 0x1e5 Add
	var_138_float = 400.0; // 0x1e6 PushF
	var_139_int = var_138_float + var_106_float; // 0x1e7 Add
	var_140_float = var_137_int * var_139_int; // 0x1e8 Mult
	var_141_bool = var_112_float >= var_140_float; // 0x1e9 GE
	if(var_141_bool == 0) goto Label_506; // 0x1ea JumpB
	var_142_bool = 0; var_143_object = Obj(); var_144_float = 0; var_145_float = 0; var_146_bool = 0; var_147_bool = 0; // 0x1eb PushV
	var_143_object = var_0_cvector; // 0x1ec MovT
	var_144_float = var_106_float; // 0x1ed Mov
	var_145_float = 3000.0; // 0x1ee MovF
	var_146_bool = 1; // 0x1ef MovB
	var_147_bool = 0; // 0x1f0 MovB
	TaskCall(4); // 0x1f1 TaskCall
	func_913(var_148_bool, var_149_object, var_142_bool, var_143_object, var_144_float, var_145_float, var_146_bool, var_147_bool); // 0x1f2 Call
	TaskReturn(); // 0x1f3 TaskReturn
	var_195_bool = var_148_bool == 0; // 0x1f5 Not
	if(var_195_bool == 0) goto Label_504; // 0x1f6 JumpB
	goto Label_603; // 0x1f7 Jump
	
Label_603:
	WaitForAnimEnd(); // 0x25b Func
	var_196_object = var_3_object; // 0x25d PushT
	if(var_196_object == 0) goto Label_608; // 0x25e JumpB
	return 20; // 0x25f Return
	
Label_608:
	var_197_string = "all"; // 0x260 PushS
	var_198_string = "attack_off"; // 0x261 PushS
	PlayAnimation(var_197_string, var_198_string); // 0x262 Func
	WaitForAnimEnd(); // 0x264 Func
	var_199_bool = var_109_bool; // 0x266 Push
	if(var_199_bool == 0) goto Label_619; // 0x267 JumpB
	var_200_float = 2.0; // 0x268 PushF
	Sleep(var_200_float); // 0x269 Func
	
Label_619:
	return 20; // 0x26b Return
	
Label_504:
	var_110_bool = 0; // 0x1f8 MovB
	goto Label_602; // 0x1f9 Jump
	
Label_602:
	goto Label_467; // 0x25a Jump
	
Label_506:
	var_201_float = var_93_float * var_93_float; // 0x1fa Mult
	var_202_bool = var_112_float >= var_201_float; // 0x1fb GE
	if(var_202_bool == 0) goto Label_594; // 0x1fc JumpB
	var_203_bool = var_110_bool == 0; // 0x1fd Not
	if(var_203_bool == 0) goto Label_524; // 0x1fe JumpB
	var_204_object = Obj(); // 0x1ff PushV
	var_204_object = var_0_cvector; // 0x200 MovT
	func_1288(); // 0x201 Call
	var_213_string = "all"; // 0x203 PushS
	var_214_string = "attack_on"; // 0x204 PushS
	PlayAnimation(var_213_string, var_214_string); // 0x205 Func
	WaitForAnimEnd(); // 0x207 Func
	StopAsync(); // 0x209 Func
	var_110_bool = 1; // 0x20b MovB
	
Label_524:
	rand(var_113_float); // 0x20c Func
	var_215_bool = 0; // 0x20e PushV
	var_215_bool = 1; // 0x20f MovB
	var_216_float = 0.6; // 0x210 PushF
	var_217_bool = var_113_float < var_216_float; // 0x211 LT
	if(var_217_bool == 0) goto Label_536; // 0x212 JumpB
	var_218_bool = 0; // 0x213 PushV
	func_855(var_215_bool, var_218_bool); // 0x214 Call
	if(var_218_bool == 0) goto Label_536; // 0x216 JumpB
	var_215_bool = 0; // 0x217 MovB
	
Label_536:
	if(var_215_bool == 0) goto Label_550; // 0x218 JumpB
	Face(var_0_cvector); // 0x219 Func
	var_224_string = "all"; // 0x21b PushS
	var_225_string = "attack_stay"; // 0x21c PushS
	PlayAnimation(var_224_string, var_225_string); // 0x21d Func
	var_226_bool = 0; var_227_float = 0; // 0x21f PushV
	var_227_float = var_93_float; // 0x220 Mov
	func_763(var_113_float, var_226_bool, var_227_float); // 0x221 Call
	StopAsync(); // 0x223 Func
	goto Label_593; // 0x225 Jump
	
Label_593:
	goto Label_602; // 0x251 Jump
	
Label_550:
	Face(var_0_cvector); // 0x226 Func
	var_393_string = "all"; // 0x228 PushS
	var_394_string = "fjump"; // 0x229 PushS
	PlayAnimation(var_393_string, var_394_string); // 0x22a Func
	WaitForAnimEnd(); // 0x22c Func
	var_395_cvector = CVector(0.0, 0.0, 0.0); // 0x22e PushVec
	SetSpeed(var_395_cvector); // 0x22f Func
	Stop(); // 0x231 Func
	StopAsync(); // 0x233 Func
	var_396_bool = 0; // 0x235 PushV
	func_855(var_113_float, var_396_bool); // 0x236 Call
	var_397_bool = var_396_bool == 0; // 0x238 Not
	if(var_397_bool == 0) goto Label_593; // 0x239 JumpB
	var_398_bool = 0; var_399_object = Obj(); // 0x23a PushV
	var_399_object = var_0_cvector; // 0x23b MovT
	func_1197(var_398_bool, var_399_object); // 0x23c Call
	var_400_bool = var_398_bool == 0; // 0x23e Not
	if(var_400_bool == 0) goto Label_577; // 0x23f JumpB
	goto Label_603; // 0x240 Jump
	
Label_577:
	GetPFPosition(var_107_cvector); // 0x241 TObjFunc
	GetPFPosition(var_108_cvector); // 0x243 Func
	var_111_cvector = var_107_cvector - var_108_cvector; // 0x245 Sub2
	var_112_float = var_111_cvector | var_111_cvector; // 0x246 Or2
	var_401_float = var_93_float * var_93_float; // 0x247 Mult
	var_402_bool = var_112_float < var_401_float; // 0x248 LT
	if(var_402_bool == 0) goto Label_593; // 0x249 JumpB
	var_403_bool = 0; var_404_float = 0; // 0x24a PushV
	var_404_float = var_93_float; // 0x24b Mov
	func_659(var_113_float, var_403_bool, var_404_float); // 0x24c Call
	var_405_bool = var_403_bool == 0; // 0x24e Not
	if(var_405_bool == 0) goto Label_593; // 0x24f JumpB
	goto Label_603; // 0x250 Jump
	
Label_594:
	var_406_bool = 0; var_407_float = 0; // 0x252 PushV
	var_407_float = var_93_float; // 0x253 Mov
	func_659(var_113_float, var_406_bool, var_407_float); // 0x254 Call
	var_408_bool = var_406_bool == 0; // 0x256 Not
	if(var_408_bool == 0) goto Label_601; // 0x257 JumpB
	goto Label_603; // 0x258 Jump
	
Label_601:
	var_110_bool = 1; // 0x259 MovB
	
Label_466:
	var_110_bool = 1; // 0x1d2 MovB
	
Label_453:
	var_106_float = var_93_float; // 0x1c5 Mov
	
Label_440:
	var_409_int = 1; // 0x1b8 PushI
	var_2_bool = var_2_bool + var_409_int; // 0x1b9 Add2
	goto Label_431; // 0x1ba Jump
	
Label_427:
	var_410_int = 1; // 0x1ab PushI
	var_1_cvector = var_1_cvector + var_410_int; // 0x1ac Add2
	goto Label_417; // 0x1ad Jump
}


func_1314(var_348_float, var_349_float, var_350_float)
{
	var_353_bool = var_349_float < var_350_float; // 0x523 LT
	if(var_353_bool == 0) goto Label_1319; // 0x524 JumpB
	var_348_float = var_349_float; // 0x525 Mov
	goto Label_1320; // 0x526 Jump
	
Label_1320:
	return 0; // 0x528 Return
	
Label_1319:
	var_348_float = var_350_float; // 0x527 Mov
}


func_803(var_0_cvector, var_239_bool)
{
	var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_float = 0; var_244_float = 0; var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_float = 0; var_249_float = 0; // 0x323 PushV
	var_250_bool = 0; var_251_object = Obj(); // 0x324 PushV
	var_251_object = var_0_cvector; // 0x325 MovT
	func_1197(var_250_bool, var_251_object); // 0x326 Call
	var_252_bool = var_250_bool == 0; // 0x328 Not
	if(var_252_bool == 0) goto Label_812; // 0x329 JumpB
	var_239_bool = 0; // 0x32a MovB
	return 10; // 0x32b Return
	
Label_812:
	var_253_bool = 0; // 0x32c PushV
	func_855(var_249_float, var_253_bool); // 0x32d Call
	if(var_253_bool == 0) goto Label_834; // 0x32f JumpB
	GetPFPosition(var_245_cvector); // 0x330 TObjFunc
	GetPFPosition(var_246_cvector); // 0x332 Func
	var_247_cvector = var_245_cvector - var_246_cvector; // 0x334 Sub2
	var_248_float = var_247_cvector | var_247_cvector; // 0x335 Or2
	GetAttackDistance(var_249_float); // 0x336 TObjFunc
	var_254_int = 50; // 0x338 PushI
	var_249_float = var_249_float + var_254_int; // 0x339 Add2
	var_255_float = var_249_float * var_249_float; // 0x33a Mult
	var_256_bool = var_248_float <= var_255_float; // 0x33b LE
	if(var_256_bool == 0) goto Label_834; // 0x33c JumpB
	func_836(var_249_float); // 0x33e Call
	var_239_bool = 1; // 0x340 MovB
	return 10; // 0x341 Return
	
Label_834:
	var_239_bool = 0; // 0x342 MovB
	return 10; // 0x343 Return
}


func_164(var_2_bool)
{
	var_2_bool = 1; // 0xa4 TMovB
	func_1394(); // 0xa6 Call
	var_2_bool = 0; // 0xa8 TMovB
	return 0; // 0xa9 Return
}


func_1445()
{
	TaskCall(0); // 0x5a6 TaskCall
	func_0(); // 0x5a7 Call
	TaskReturn(); // 0x5a8 TaskReturn
	return 0; // 0x5aa Return
}


func_1060(var_184_string)
{
	var_184_string = "walk"; // 0x424 MovS
	return 0; // 0x425 Return
}


func_1062(var_185_string)
{
	var_185_string = "run"; // 0x426 MovS
	return 0; // 0x427 Return
}


func_1064(var_340_string, var_341_int)
{
	var_342_int = 1; // 0x429 PushI
	var_343_bool = var_341_int == var_342_int; // 0x42a Eq
	if(var_343_bool == 0) goto Label_1070; // 0x42b JumpB
	var_340_string = "fire"; // 0x42c MovS
	return 0; // 0x42d Return
	
Label_1070:
	var_340_string = "phys"; // 0x42e MovS
	return 0; // 0x42f Return
}


func_1321(var_358_float, var_359_float, var_360_float, var_361_float)
{
	var_362_bool = var_359_float < var_360_float; // 0x52a LT
	if(var_362_bool == 0) goto Label_1326; // 0x52b JumpB
	var_358_float = var_360_float; // 0x52c Mov
	return 0; // 0x52d Return
	
Label_1326:
	var_363_bool = var_359_float > var_361_float; // 0x52e GT
	if(var_363_bool == 0) goto Label_1330; // 0x52f JumpB
	var_358_float = var_361_float; // 0x530 Mov
	return 0; // 0x531 Return
	
Label_1330:
	var_358_float = var_359_float; // 0x532 Mov
	return 0; // 0x533 Return
}


func_170(var_0_cvector, var_1_cvector)
{
	var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_object = Obj(); // 0xaa PushV
	GetPFPosition(var_35_object); // 0xab Func
	GetDirection(var_0_cvector); // 0xad Func
	
Label_175:
	var_36_int = 60; // 0xaf PushI
	irand(var_32_int, var_36_int); // 0xb0 Func
	var_37_int = 30; // 0xb2 PushI
	var_38_int = var_32_int + var_37_int; // 0xb3 Add
	Sleep(var_38_int, var_33_bool); // 0xb4 Func
	var_39_bool = var_33_bool; // 0xb6 Push
	if(var_39_bool == 0) goto Label_188; // 0xb7 JumpB
	func_164(var_35_object); // 0xb9 Call
	goto Label_246; // 0xbb Jump
	
Label_246:
	goto Label_175; // 0xf6 Jump
	
Label_188:
	GetPFPosition(var_34_cvector); // 0xbc Func
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0xbe PushV
	var_62_cvector = var_1_cvector; // 0xbf MovT
	var_63_cvector = var_34_cvector; // 0xc0 Mov
	func_1310(var_61_float, var_62_cvector, var_63_cvector); // 0xc1 Call
	var_66_int = 40000; // 0xc3 PushI
	var_67_bool = var_61_float > var_66_int; // 0xc4 GT
	if(var_67_bool == 0) goto Label_232; // 0xc5 JumpB
	FindPathTo(var_35_object, var_35_object); // 0xc6 Func
	var_68_bool = var_35_object != 0; // 0xc8 NullNeq
	if(var_68_bool == 0) goto Label_227; // 0xc9 JumpB
	RotatePath(var_35_object, var_33_bool); // 0xca Func
	var_69_bool = var_33_bool == 0; // 0xcc Not
	if(var_69_bool == 0) goto Label_207; // 0xcd JumpB
	goto Label_245; // 0xce Jump
	
Label_245:
	goto Label_188; // 0xf5 Jump
	
Label_207:
	var_70_bool = 0; // 0xcf PushB
	FollowPath(var_35_object, var_70_bool, var_33_bool); // 0xd0 Func
	var_71_bool = var_33_bool == 0; // 0xd2 Not
	if(var_71_bool == 0) goto Label_213; // 0xd3 JumpB
	goto Label_245; // 0xd4 Jump
	
Label_213:
	var_72_float = GetByIndex(var_0_cvector, 0); // 0xd5 PushE
	var_73_float = GetByIndex(var_0_cvector, 2); // 0xd6 PushE
	Rotate(var_72_float, var_73_float, var_33_bool); // 0xd7 Func
	var_74_bool = var_33_bool == 0; // 0xd9 Not
	if(var_74_bool == 0) goto Label_220; // 0xda JumpB
	goto Label_245; // 0xdb Jump
	
Label_220:
	WaitForAnimEnd(var_33_bool); // 0xdc Func
	var_75_bool = var_33_bool == 0; // 0xde Not
	if(var_75_bool == 0) goto Label_225; // 0xdf JumpB
	goto Label_245; // 0xe0 Jump
	
Label_225:
	goto Label_246; // 0xe1 Jump
	
Label_227:
	var_76_int = 1; // 0xe3 PushI
	Sleep(var_76_int); // 0xe4 Func
	var_35_object = 0; // 0xe6 SetNull
	goto Label_245; // 0xe7 Jump
	
Label_232:
	var_77_float = GetByIndex(var_0_cvector, 0); // 0xe8 PushE
	var_78_float = GetByIndex(var_0_cvector, 2); // 0xe9 PushE
	Rotate(var_77_float, var_78_float, var_33_bool); // 0xea Func
	var_79_bool = var_33_bool == 0; // 0xec Not
	if(var_79_bool == 0) goto Label_239; // 0xed JumpB
	goto Label_245; // 0xee Jump
	
Label_239:
	WaitForAnimEnd(var_33_bool); // 0xef Func
	var_80_bool = var_33_bool == 0; // 0xf1 Not
	if(var_80_bool == 0) goto Label_244; // 0xf2 JumpB
	goto Label_245; // 0xf3 Jump
	
Label_244:
	goto Label_246; // 0xf4 Jump
}


func_1451(var_13_int)
{
	var_13_int = 2; // 0x5ac MovI
	return 0; // 0x5ad Return
}


func_1197(var_15_bool, var_16_object)
{
	var_17_int = 0; var_18_int = 0; // 0x4ad PushV
	var_19_bool = 0; var_20_object = Obj(); // 0x4ae PushV
	var_20_object = var_16_object; // 0x4af Mov
	func_1161(var_19_bool, var_20_object); // 0x4b0 Call
	var_36_bool = var_19_bool == 0; // 0x4b2 Not
	if(var_36_bool == 0) goto Label_1206; // 0x4b3 JumpB
	var_15_bool = 0; // 0x4b4 MovB
	return 2; // 0x4b5 Return
	
Label_1206:
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0x4b6 PushV
	var_38_object = var_16_object; // 0x4b7 Mov
	var_39_string = "noaccess"; // 0x4b8 MovS
	func_1080(var_37_bool, var_38_object, var_39_string); // 0x4b9 Call
	var_46_bool = var_37_bool == 0; // 0x4bb Not
	if(var_46_bool == 0) goto Label_1215; // 0x4bc JumpB
	var_15_bool = 1; // 0x4bd MovB
	return 2; // 0x4be Return
	
Label_1215:
	var_47_string = "noaccess"; // 0x4bf PushS
	GetProperty(var_47_string, var_18_int); // 0x4c0 ObjFunc
	var_48_int = 0; // 0x4c2 PushI
	var_15_bool = var_18_int == var_48_int; // 0x4c3 Eq2
	return 2; // 0x4c4 Return
}


func_1454(var_17_object)
{
	var_18_object = Obj(); // 0x5af PushV
	var_18_object = var_17_object; // 0x5b0 Mov
	func_1492(var_18_object); // 0x5b1 Call
	return 0; // 0x5b3 Return
}


func_1072(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x430 PushV
	GetPosition(var_41_cvector); // 0x431 Func
	GetPosition(var_42_cvector); // 0x433 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x435 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x436 Or2
	return 6; // 0x437 Return
}


func_1460(var_13_int)
{
	var_13_int = 0; // 0x5b5 MovI
	return 0; // 0x5b6 Return
}


func_1332(var_11_object)
{
	var_12_object = Obj(); // 0x535 PushV
	var_12_object = var_11_object; // 0x536 Mov
	TaskCall(2); // 0x537 TaskCall
	func_253(var_12_object); // 0x538 Call
	TaskReturn(); // 0x539 TaskReturn
	return 0; // 0x53b Return
}


func_1463()
{
	return 0; // 0x5b8 Return
}


func_1080(var_37_bool, var_38_object, var_39_string)
{
	var_40_bool = 0; var_41_bool = 0; // 0x438 PushV
	var_42_string = "HasProperty"; // 0x439 PushS
	var_43_int = 2; // 0x43a PushI
	var_44_bool = IsFuncExist(var_38_object, var_42_string, var_43_int); // 0x43b FuncExist
	var_45_bool = var_44_bool == 0; // 0x43c Not
	if(var_45_bool == 0) goto Label_1088; // 0x43d JumpB
	var_37_bool = 0; // 0x43e MovB
	return 2; // 0x43f Return
	
Label_1088:
	HasProperty(var_39_string, var_41_bool); // 0x440 ObjFunc
	var_37_bool = var_41_bool; // 0x442 Mov
	return 2; // 0x443 Return
}


func_1465(var_14_int)
{
	var_14_int = 0; // 0x5ba MovI
	return 0; // 0x5bb Return
}


func_1468()
{
	return 0; // 0x5bd Return
}


func_1470()
{
	var_11_string = ""; var_12_object = Obj(); var_13_int = 0; var_14_bool = 0; var_15_string = ""; var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; // 0x5be PushV
	var_19_bool = GlobalVars[0]; // 0x5bf PushGE
	var_19_bool = 0; // 0x5c0 MovB
	GlobalVars[0] = var_19_bool; // 0x5c1 PopGE
	var_20_string = "guard_scene"; // 0x5c2 PushS
	GetProperty(var_20_string, var_15_string); // 0x5c3 Func
	CreateInvItem(var_16_object); // 0x5c5 Func
	var_21_string = "uni_key"; // 0x5c7 PushS
	GetInvItemByName(var_17_int, var_21_string); // 0x5c8 Func
	SetItemID(var_17_int); // 0x5ca ObjFunc
	var_22_string = "key_scene_name"; // 0x5cc PushS
	SetProperty(var_22_string, var_15_string); // 0x5cd ObjFunc
	var_23_int = 0; // 0x5cf PushI
	AddItem(var_18_bool, var_16_object, var_23_int); // 0x5d0 Func
	return 8; // 0x5d2 Return
}


func_1092(var_312_float, var_313_object, var_314_float, var_315_int)
{
	var_319_int = 0; var_320_string = ""; var_321_int = 0; var_322_float = 0; var_323_float = 0; var_324_float = 0; var_325_int = 0; var_326_string = ""; var_327_int = 0; var_328_float = 0; var_329_float = 0; var_330_float = 0; // 0x444 PushV
	var_331_bool = 0; var_332_object = Obj(); var_333_string = ""; // 0x445 PushV
	var_332_object = var_313_object; // 0x446 Mov
	var_333_string = "health"; // 0x447 MovS
	func_1080(var_331_bool, var_332_object, var_333_string); // 0x448 Call
	var_334_bool = var_331_bool == 0; // 0x44a Not
	if(var_334_bool == 0) goto Label_1102; // 0x44b JumpB
	var_312_float = 0.0; // 0x44c MovF
	return 12; // 0x44d Return
	
Label_1102:
	var_335_bool = 0; var_336_object = Obj(); var_337_string = ""; // 0x44e PushV
	var_336_object = var_313_object; // 0x44f Mov
	var_337_string = "armor"; // 0x450 MovS
	func_1080(var_335_bool, var_336_object, var_337_string); // 0x451 Call
	var_338_bool = var_335_bool == 0; // 0x453 Not
	if(var_338_bool == 0) goto Label_1111; // 0x454 JumpB
	var_325_int = 0; // 0x455 MovI
	goto Label_1114; // 0x456 Jump
	
Label_1114:
	var_339_string = "armor_"; // 0x45a PushS
	var_340_string = ""; var_341_int = 0; // 0x45b PushV
	var_341_int = var_315_int; // 0x45c Mov
	func_1064(var_340_string, var_341_int); // 0x45d Call
	var_326_string = var_339_string + var_340_string; // 0x45f Add2
	var_344_bool = 0; var_345_object = Obj(); var_346_string = ""; // 0x460 PushV
	var_345_object = var_313_object; // 0x461 Mov
	var_346_string = var_326_string; // 0x462 Mov
	func_1080(var_344_bool, var_345_object, var_346_string); // 0x463 Call
	var_347_bool = var_344_bool == 0; // 0x465 Not
	if(var_347_bool == 0) goto Label_1129; // 0x466 JumpB
	var_327_int = 0; // 0x467 MovI
	goto Label_1131; // 0x468 Jump
	
Label_1131:
	var_348_float = 0; var_349_float = 0; var_350_float = 0; // 0x46b PushV
	var_351_int = var_325_int + var_327_int; // 0x46c Add
	var_352_float = 100.0; // 0x46d PushF
	var_349_float = var_351_int / var_351_int; // 0x46e Div2
	var_350_float = 1; // 0x46f MovI
	func_1314(var_348_float, var_349_float, var_350_float); // 0x470 Call
	var_328_float = var_348_float; // 0x471 Mov
	var_354_string = "health"; // 0x473 PushS
	GetProperty(var_354_string, var_329_float); // 0x474 ObjFunc
	var_355_int = 1; // 0x476 PushI
	var_356_int = var_355_int - var_328_float; // 0x477 Sub
	var_330_float = var_314_float * var_356_int; // 0x478 Mult2
	var_357_string = "health"; // 0x479 PushS
	var_358_float = 0; var_359_float = 0; var_360_float = 0; var_361_float = 0; // 0x47a PushV
	var_359_float = var_329_float - var_330_float; // 0x47b Sub2
	var_360_float = 0; // 0x47c MovI
	var_361_float = 1; // 0x47d MovI
	func_1321(var_358_float, var_359_float, var_360_float, var_361_float); // 0x47e Call
	SetProperty(var_357_string, var_358_float); // 0x480 ObjFunc
	var_312_float = var_330_float; // 0x482 Mov
	return 12; // 0x483 Return
	
Label_1129:
	GetProperty(var_326_string, var_327_int); // 0x469 ObjFunc
	
Label_1111:
	var_364_string = "armor"; // 0x457 PushS
	GetProperty(var_364_string, var_325_int); // 0x458 ObjFunc
}


func_836(var_0_cvector)
{
	var_257_cvector = CVector(0,0,0); var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); // 0x344 PushV
	Face(var_0_cvector); // 0x345 Func
	var_261_string = "all"; // 0x347 PushS
	var_262_string = "bjump"; // 0x348 PushS
	PlayAnimation(var_261_string, var_262_string); // 0x349 Func
	GetPFPosition(var_259_cvector); // 0x34b TObjFunc
	GetPFPosition(var_260_cvector); // 0x34d Func
	WaitForAnimEnd(); // 0x34f Func
	StopAsync(); // 0x351 Func
	var_263_cvector = CVector(0.0, 0.0, 0.0); // 0x353 PushVec
	SetSpeed(var_263_cvector); // 0x354 Func
	return 4; // 0x356 Return
}


func_1221(var_14_object, var_15_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; // 0x4c5 PushV
	var_37_bool = 0; // 0x4c6 PushV
	var_37_bool = 0; // 0x4c7 MovB
	var_38_int = 4; // 0x4c8 PushI
	var_39_bool = var_15_int != var_38_int; // 0x4c9 Neq
	if(var_39_bool == 0) goto Label_1231; // 0x4ca JumpB
	var_40_int = 5; // 0x4cb PushI
	var_41_bool = var_15_int != var_40_int; // 0x4cc Neq
	if(var_41_bool == 0) goto Label_1231; // 0x4cd JumpB
	var_37_bool = 1; // 0x4ce MovB
	
Label_1231:
	if(var_37_bool == 0) goto Label_1250; // 0x4cf JumpB
	GetScene(var_27_object); // 0x4d0 Func
	GetPosition(var_29_cvector); // 0x4d2 Func
	GetEyesHeight(var_30_float); // 0x4d4 Func
	var_42_float = GetByIndex(var_29_cvector, 1); // 0x4d6 PushE
	var_43_int = 2; // 0x4d7 PushI
	var_44_float = var_30_float / var_43_int; // 0x4d8 Div
	var_42_float = var_42_float + var_44_float; // 0x4d9 Add2
	SetByIndex(var_29_cvector, 1) = var_42_float; // 0x4da PopE
	var_45_string = "scripted"; // 0x4db PushS
	var_46_cvector = CVector(0.0, 0.0, 1.0); // 0x4dc PushVec
	var_47_string = "blood.xml"; // 0x4dd PushS
	AddActorByType(var_28_object, var_45_string, var_27_object, var_29_cvector, var_46_cvector, var_47_string); // 0x4de Func
	var_28_object = 0; // 0x4e0 SetNull
	var_27_object = 0; // 0x4e1 SetNull
	
Label_1250:
	var_48_bool = var_14_object == 0; // 0x4e2 NullEq
	if(var_48_bool == 0) goto Label_1253; // 0x4e3 JumpB
	return 20; // 0x4e4 Return
	
Label_1253:
	GetSecondaryAnimationType(var_31_int); // 0x4e5 Func
	var_49_int = 0; // 0x4e7 PushI
	var_50_bool = var_31_int < var_49_int; // 0x4e8 LT
	if(var_50_bool == 0) goto Label_1259; // 0x4e9 JumpB
	return 20; // 0x4ea Return
	
Label_1259:
	GetPosition(var_32_cvector); // 0x4eb ObjFunc
	GetPosition(var_33_cvector); // 0x4ed Func
	GetDirection(var_34_cvector); // 0x4ef Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x4f1 Sub2
	var_51_float = GetByIndex(var_35_cvector, 0); // 0x4f2 PushE
	var_52_float = GetByIndex(var_34_cvector, 0); // 0x4f3 PushE
	var_53_float = var_51_float * var_52_float; // 0x4f4 Mult
	var_54_float = GetByIndex(var_35_cvector, 2); // 0x4f5 PushE
	var_55_float = GetByIndex(var_34_cvector, 2); // 0x4f6 PushE
	var_56_float = var_54_float * var_55_float; // 0x4f7 Mult
	var_57_int = var_53_float + var_56_float; // 0x4f8 Add
	var_58_int = 0; // 0x4f9 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x4fa GE
	if(var_59_bool == 0) goto Label_1278; // 0x4fb JumpB
	var_36_string = "fhit"; // 0x4fc MovS
	goto Label_1279; // 0x4fd Jump
	
Label_1279:
	var_60_string = "hit_react"; // 0x4ff PushS
	var_61_string = "1"; // 0x500 PushS
	var_62_int = var_36_string + var_61_string; // 0x501 Add
	var_63_string = "2"; // 0x502 PushS
	var_64_int = var_36_string + var_63_string; // 0x503 Add
	var_65_int = -10; // 0x504 PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x505 Func
	return 20; // 0x507 Return
	
Label_1278:
	var_36_string = "bhit"; // 0x4fe MovS
}


func_1492(var_18_object)
{
	var_19_bool = GlobalVars[0]; // 0x5d5 PushGE
	if(var_19_bool == 0) goto Label_1498; // 0x5d6 JumpB
	WorkWithCorpse(var_18_object); // 0x5d7 Func
	return 0; // 0x5d9 Return
	
Label_1498:
	return 0; // 0x5da Return
}


func_855(var_0_cvector, var_218_bool)
{
	var_219_bool = 0; var_220_bool = 0; // 0x357 PushV
	var_221_string = "IsAttacking"; // 0x358 PushS
	var_222_int = 1; // 0x359 PushI
	var_223_bool = IsFuncExist(var_0_cvector, var_221_string, var_222_int); // 0x35a FuncExist
	if(var_223_bool == 0) goto Label_864; // 0x35b JumpB
	IsAttacking(var_220_bool); // 0x35c TObjFunc
	var_218_bool = var_220_bool; // 0x35e Mov
	return 2; // 0x35f Return
	
Label_864:
	var_218_bool = 0; // 0x360 MovB
	return 2; // 0x361 Return
}


func_1367(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0x557 PushV
	var_53_string = "idle"; // 0x558 MovS
	var_54_int = var_51_int; // 0x559 Push
	if(var_54_int == 0) goto Label_1372; // 0x55a JumpB
	var_53_string = var_53_string + var_51_int; // 0x55b Add2
	
Label_1372:
	var_50_string = var_53_string; // 0x55c Mov
	return 2; // 0x55d Return
}


func_1499(var_14_bool, var_15_object, var_16_object)
{
	var_17_string = ""; var_18_bool = 0; var_19_string = ""; var_20_bool = 0; // 0x5db PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x5dc PushV
	var_22_object = var_16_object; // 0x5dd Mov
	var_23_string = "class"; // 0x5de MovS
	func_1080(var_21_bool, var_22_object, var_23_string); // 0x5df Call
	var_30_bool = var_21_bool == 0; // 0x5e1 Not
	if(var_30_bool == 0) goto Label_1509; // 0x5e2 JumpB
	var_14_bool = 0; // 0x5e3 MovB
	return 4; // 0x5e4 Return
	
Label_1509:
	var_31_string = "class"; // 0x5e5 PushS
	GetProperty(var_31_string, var_19_string); // 0x5e6 ObjFunc
	var_32_string = "guard"; // 0x5e8 PushS
	var_33_bool = var_19_string != var_32_string; // 0x5e9 Neq
	if(var_33_bool == 0) goto Label_1517; // 0x5ea JumpB
	var_14_bool = 0; // 0x5eb MovB
	return 4; // 0x5ec Return
	
Label_1517:
	CanSee(var_20_bool, var_15_object); // 0x5ed Func
	var_34_bool = 0; // 0x5ef PushV
	var_34_bool = 1; // 0x5f0 MovB
	var_35_bool = var_20_bool; // 0x5f1 Push
	if(var_35_bool == 0) goto Label_1531; // 0x5f2 JumpB
	var_36_float = 0; var_37_object = Obj(); // 0x5f3 PushV
	var_37_object = var_15_object; // 0x5f4 Mov
	func_1072(var_37_object); // 0x5f5 Call
	var_44_float = 1000000.0; // 0x5f7 PushF
	var_45_bool = var_36_float <= var_44_float; // 0x5f8 LE
	if(var_45_bool == 0) goto Label_1531; // 0x5f9 JumpB
	var_34_bool = 0; // 0x5fa MovB
	
Label_1531:
	if(var_34_bool == 0) goto Label_1534; // 0x5fb JumpB
	var_14_bool = 1; // 0x5fc MovB
	return 4; // 0x5fd Return
	
Label_1534:
	var_14_bool = 0; // 0x5fe MovB
	return 4; // 0x5ff Return
}


func_1374(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0x55e PushV
	var_47_int = 0; // 0x55f MovI
	
Label_1376:
	var_49_string = "all"; // 0x560 PushS
	var_50_string = ""; var_51_int = 0; // 0x561 PushV
	var_51_int = var_47_int; // 0x562 Mov
	func_1367(var_50_string, var_51_int); // 0x563 Call
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0x565 Func
	var_55_bool = var_48_bool == 0; // 0x567 Not
	if(var_55_bool == 0) goto Label_1386; // 0x568 JumpB
	goto Label_1389; // 0x569 Jump
	
Label_1389:
	var_44_int = var_47_int; // 0x56d Mov
	return 4; // 0x56e Return
	
Label_1386:
	var_56_int = 1; // 0x56a PushI
	var_47_int = var_47_int + var_56_int; // 0x56b Add2
	goto Label_1376; // 0x56c Jump
}


func_866(var_2_bool, var_4_object)
{
	var_280_float = 0; var_281_int = 0; var_282_float = 0; var_283_int = 0; // 0x362 PushV
	var_284_bool = var_2_bool == 0; // 0x363 Not
	if(var_284_bool == 0) goto Label_870; // 0x364 JumpB
	return 4; // 0x365 Return
	
Label_870:
	var_285_object = var_4_object; // 0x366 PushT
	if(var_285_object == 0) goto Label_878; // 0x367 JumpB
	var_286_int = -1; // 0x368 PushI
	var_4_object = var_4_object + var_286_int; // 0x369 Add2
	var_287_int = 0; // 0x36a PushI
	var_288_bool = var_4_object > var_287_int; // 0x36b GT
	if(var_288_bool == 0) goto Label_878; // 0x36c JumpB
	return 4; // 0x36d Return
	
Label_878:
	rand(var_282_float); // 0x36e Func
	var_289_float = 0; // 0x370 PushV
	func_904(var_289_float); // 0x371 Call
	var_290_bool = var_282_float < var_289_float; // 0x373 LT
	if(var_290_bool == 0) goto Label_897; // 0x374 JumpB
	irand(var_283_int, var_282_float); // 0x375 Func
	var_291_int = 1; // 0x377 PushI
	var_283_int = var_283_int + var_291_int; // 0x378 Add2
	var_292_string = "attack"; // 0x379 PushS
	var_293_int = var_292_string + var_283_int; // 0x37a Add
	Speak(var_293_int); // 0x37b Func
	var_294_int = 0; // 0x37d PushV
	func_902(var_294_int); // 0x37e Call
	var_4_object = var_294_int; // 0x37f TMov
	
Label_897:
	return 4; // 0x381 Return
}


func_739(var_384_bool, var_385_float)
{
	var_386_float = 0; var_387_bool = 0; var_388_float = 0; var_389_bool = 0; // 0x2e3 PushV
	rand(var_388_float); // 0x2e4 Func
	var_390_bool = var_388_float < var_385_float; // 0x2e6 LT
	if(var_390_bool == 0) goto Label_759; // 0x2e7 JumpB
	
Label_744:
	IsAnimationPlaying(var_389_bool); // 0x2e8 Func
	var_391_bool = var_389_bool == 0; // 0x2ea Not
	if(var_391_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_758; // 0x2ec Jump
	
Label_758:
	goto Label_761; // 0x2f6 Jump
	
Label_761:
	var_384_bool = 0; // 0x2f9 MovB
	return 4; // 0x2fa Return
	
Label_749:
	var_392_bool = 0; // 0x2ed PushV
	func_803(var_389_bool, var_392_bool); // 0x2ee Call
	if(var_392_bool == 0) goto Label_755; // 0x2f0 JumpB
	var_384_bool = 1; // 0x2f1 MovB
	return 4; // 0x2f2 Return
	
Label_755:
	sync(); // 0x2f3 Func
	goto Label_744; // 0x2f5 Jump
	
Label_759:
	WaitForAnimEnd(); // 0x2f7 Func
}


func_620(var_0_cvector, var_298_float, var_299_int)
{
	var_300_object = Obj(); var_301_float = 0; var_302_float = 0; var_303_object = Obj(); var_304_float = 0; var_305_float = 0; // 0x26c PushV
	var_306_float = 0.9; // 0x26d PushF
	var_307_float = var_298_float * var_306_float; // 0x26e Mult
	GetVictim(var_307_float, var_303_object); // 0x26f Func
	ReportAttack(var_0_cvector); // 0x271 Func
	var_308_bool = var_303_object == var_0_cvector; // 0x273 Eq
	if(var_308_bool == 0) goto Label_657; // 0x274 JumpB
	var_309_float = 0; var_310_object = Obj(); var_311_int = 0; // 0x275 PushV
	var_310_object = var_303_object; // 0x276 Mov
	var_311_int = var_299_int; // 0x277 Mov
	func_409(var_311_int); // 0x278 Call
	var_304_float = var_309_float; // 0x279 Mov
	var_312_float = 0; var_313_object = Obj(); var_314_float = 0; var_315_int = 0; // 0x27b PushV
	var_313_object = var_303_object; // 0x27c Mov
	var_314_float = var_304_float; // 0x27d Mov
	var_316_int = 0; var_317_object = Obj(); var_318_int = 0; // 0x27e PushV
	var_317_object = var_303_object; // 0x27f Mov
	var_318_int = var_299_int; // 0x280 Mov
	func_412(var_318_int); // 0x281 Call
	var_315_int = var_316_int; // 0x282 Mov
	func_1092(var_312_float, var_313_object, var_314_float, var_315_int); // 0x284 Call
	var_305_float = var_312_float; // 0x285 Mov
	var_365_int = 0; // 0x287 PushV
	func_898(var_365_int); // 0x288 Call
	ReportHit(var_0_cvector, var_365_int, var_305_float, var_304_float); // 0x28a Func
	var_366_object = Obj(); var_367_float = 0; // 0x28c PushV
	var_366_object = var_303_object; // 0x28d Mov
	var_367_float = var_305_float; // 0x28e Mov
	func_900(); // 0x28f Call
	
Label_657:
	return 6; // 0x291 Return
}


func_1391()
{
	StopAnimation(); // 0x56f Func
	return 0; // 0x571 Return
}


func_1394()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; // 0x572 PushV
	var_44_int = 0; // 0x573 PushV
	func_1374(var_44_int); // 0x574 Call
	var_42_int = var_44_int; // 0x575 Mov
	var_57_bool = var_42_int == 0; // 0x577 Not
	if(var_57_bool == 0) goto Label_1402; // 0x578 JumpB
	return 4; // 0x579 Return
	
Label_1402:
	irand(var_43_int, var_42_int); // 0x57a Func
	var_58_string = "all"; // 0x57c PushS
	var_59_string = ""; var_60_int = 0; // 0x57d PushV
	var_60_int = var_43_int; // 0x57e Mov
	func_1367(var_59_string, var_60_int); // 0x57f Call
	PlayAnimation(var_58_string, var_59_string); // 0x581 Func
	WaitForAnimEnd(); // 0x583 Func
	return 4; // 0x585 Return
}


func_373(var_35_string)
{
	RemoveRTEnvelope(); // 0x176 Func
	SetDeathState(); // 0x178 Func
	Stop(); // 0x17a Func
	StopAsync(); // 0x17c Func
	StopSecondaryAnimation(); // 0x17e Func
	var_36_string = "all"; // 0x180 PushS
	PlayAnimation(var_36_string, var_35_string); // 0x181 Func
	WaitForAnimEnd(); // 0x183 Func
	var_37_string = "all"; // 0x185 PushS
	LockAnimationEnd(var_37_string, var_35_string); // 0x186 Func
	RemoveEnvelope(); // 0x188 Func
	return 0; // 0x18a Return
}


func_248()
{
	StopGroup0(); // 0xf8 Func
	Stop(); // 0xfa Func
	return 0; // 0xfc Return
}


func_763(var_0_cvector, var_226_bool, var_227_float)
{
	var_228_bool = 0; var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_float = 0; var_233_bool = 0; var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_float = 0; // 0x2fb PushV
	
Label_764:
	IsAnimationPlaying(var_233_bool); // 0x2fc Func
	var_238_bool = var_233_bool == 0; // 0x2fe Not
	if(var_238_bool == 0) goto Label_769; // 0x2ff JumpB
	goto Label_801; // 0x300 Jump
	
Label_801:
	var_226_bool = 0; // 0x321 MovB
	return 10; // 0x322 Return
	
Label_769:
	var_239_bool = 0; // 0x301 PushV
	func_803(var_237_float, var_239_bool); // 0x302 Call
	if(var_239_bool == 0) goto Label_775; // 0x304 JumpB
	var_226_bool = 1; // 0x305 MovB
	return 10; // 0x306 Return
	
Label_775:
	var_264_bool = 0; var_265_object = Obj(); // 0x307 PushV
	var_265_object = var_0_cvector; // 0x308 MovT
	func_1197(var_264_bool, var_265_object); // 0x309 Call
	var_266_bool = var_264_bool == 0; // 0x30b Not
	if(var_266_bool == 0) goto Label_783; // 0x30c JumpB
	var_226_bool = 0; // 0x30d MovB
	return 10; // 0x30e Return
	
Label_783:
	GetPFPosition(var_234_cvector); // 0x30f TObjFunc
	GetPFPosition(var_235_cvector); // 0x311 Func
	var_236_cvector = var_234_cvector - var_235_cvector; // 0x313 Sub2
	var_237_float = var_236_cvector | var_236_cvector; // 0x314 Or2
	var_267_float = var_227_float * var_227_float; // 0x315 Mult
	var_268_bool = var_237_float < var_267_float; // 0x316 LT
	if(var_268_bool == 0) goto Label_798; // 0x317 JumpB
	var_269_bool = 0; var_270_float = 0; // 0x318 PushV
	var_270_float = var_227_float; // 0x319 Mov
	func_659(var_237_float, var_269_bool, var_270_float); // 0x31a Call
	var_226_bool = 1; // 0x31c MovB
	return 10; // 0x31d Return
	
Label_798:
	sync(); // 0x31e Func
	goto Label_764; // 0x320 Jump
}


func_253(var_12_object)
{
	EventDisable(0); // 0xfe EventDisable
	var_13_object = Obj(); // 0xff PushV
	var_13_object = var_12_object; // 0x100 Mov
	func_286(var_13_object); // 0x101 Call
	var_63_object = Obj(); // 0x103 PushV
	var_63_object = var_12_object; // 0x104 Mov
	func_1536(); // 0x105 Call
	EventEnable(0); // 0x107 EventEnable
	
Label_264:
	Hold(); // 0x108 Func
	goto Label_264; // 0x10a Jump
}


