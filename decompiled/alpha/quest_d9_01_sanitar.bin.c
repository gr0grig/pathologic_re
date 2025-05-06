task_0_event_1(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj(); // 0x16 PushV
	var_4_object = var_2_bool; // 0x17 Mov
	func_1136(var_3_bool, var_4_object); // 0x18 Call
	if(var_3_bool == 0) goto Label_32; // 0x1a JumpB
	var_72_object = Obj(); var_73_bool = 0; // 0x1b PushV
	var_72_object = var_2_bool; // 0x1c Mov
	var_73_bool = 0; // 0x1d MovB
	func_95(var_72_object, var_73_bool); // 0x1e Call
	
Label_32:
	return 0; // 0x20 Return
}


task_0_event_3(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj(); // 0x22 PushV
	var_4_object = var_2_bool; // 0x23 Mov
	func_1150(var_3_bool, var_4_object); // 0x24 Call
	if(var_3_bool == 0) goto Label_44; // 0x26 JumpB
	var_72_object = Obj(); var_73_bool = 0; // 0x27 PushV
	var_72_object = var_2_bool; // 0x28 Mov
	var_73_bool = 0; // 0x29 MovB
	func_95(var_72_object, var_73_bool); // 0x2a Call
	
Label_44:
	return 0; // 0x2c Return
}


task_0_event_17(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj(); // 0x2e PushV
	var_4_object = var_2_bool; // 0x2f Mov
	func_575(var_3_bool, var_4_object); // 0x30 Call
	if(var_3_bool == 0) goto Label_60; // 0x32 JumpB
	var_37_object = Obj(); // 0x33 PushV
	var_37_object = var_2_bool; // 0x34 Mov
	func_946(var_37_object); // 0x35 Call
	var_47_object = Obj(); var_48_bool = 0; // 0x37 PushV
	var_47_object = var_2_bool; // 0x38 Mov
	var_48_bool = 1; // 0x39 MovB
	func_95(var_47_object, var_48_bool); // 0x3a Call
	
Label_60:
	return 0; // 0x3c Return
}


task_0_event_30(var_0_object, var_1_object, var_2_object, var_3_bool)
{
	var_4_bool = 0; var_5_object = Obj(); var_6_object = Obj(); // 0x3e PushV
	var_5_object = var_2_object; // 0x3f Mov
	var_6_object = var_3_bool; // 0x40 Mov
	func_998(var_4_bool, var_5_object, var_6_object); // 0x41 Call
	if(var_4_bool == 0) goto Label_82; // 0x43 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x44 PushV
	var_38_object = var_2_object; // 0x45 Mov
	func_575(var_37_bool, var_38_object); // 0x46 Call
	if(var_37_bool == 0) goto Label_82; // 0x48 JumpB
	var_65_object = Obj(); // 0x49 PushV
	var_65_object = var_2_object; // 0x4a Mov
	func_946(var_65_object); // 0x4b Call
	var_75_object = Obj(); var_76_bool = 0; // 0x4d PushV
	var_75_object = var_2_object; // 0x4e Mov
	var_76_bool = 0; // 0x4f MovB
	func_95(var_75_object, var_76_bool); // 0x50 Call
	
Label_82:
	return 0; // 0x52 Return
}


task_0_event_7(var_0_int, var_1_object, var_2_bool)
{
	var_3_int = 75; // 0x54 PushI
	var_4_bool = var_2_bool == var_3_int; // 0x55 Eq
	if(var_4_bool == 0) goto Label_90; // 0x56 JumpB
	ResetAAS(); // 0x57 Func
	goto Label_94; // 0x59 Jump
	
Label_94:
	return 0; // 0x5e Return
	
Label_90:
	var_5_int = 0; // 0x5a PushV
	var_5_int = var_2_bool; // 0x5b Mov
	func_1038(var_5_int); // 0x5c Call
}


task_1_event_1(var_0_object, var_1_bool, var_2_object)
{
	var_3_bool = var_1_bool; // 0xb4 PushT
	if(var_3_bool == 0) goto Label_183; // 0xb5 JumpB
	return 0; // 0xb6 Return
	
Label_183:
	var_4_bool = 0; // 0xb7 PushV
	var_4_bool = 0; // 0xb8 MovB
	var_5_bool = 0; var_6_object = Obj(); // 0xb9 PushV
	var_6_object = var_2_object; // 0xba Mov
	func_1136(var_5_bool, var_6_object); // 0xbb Call
	if(var_5_bool == 0) goto Label_197; // 0xbd JumpB
	var_74_bool = 0; var_75_object = Obj(); var_76_object = Obj(); // 0xbe PushV
	var_75_object = var_0_object; // 0xbf MovT
	var_76_object = var_2_object; // 0xc0 Mov
	func_1164(var_74_bool, var_75_object, var_76_object); // 0xc1 Call
	if(var_74_bool == 0) goto Label_197; // 0xc3 JumpB
	var_4_bool = 1; // 0xc4 MovB
	
Label_197:
	if(var_4_bool == 0) goto Label_201; // 0xc5 JumpB
	var_0_object = var_2_object; // 0xc6 TMov
	Face(var_2_object); // 0xc7 Func
	
Label_201:
	return 0; // 0xc9 Return
}


task_1_event_3(var_0_object, var_1_bool, var_2_object)
{
	var_3_bool = var_1_bool; // 0xcb PushT
	if(var_3_bool == 0) goto Label_206; // 0xcc JumpB
	return 0; // 0xcd Return
	
Label_206:
	var_4_bool = 0; // 0xce PushV
	var_4_bool = 0; // 0xcf MovB
	var_5_bool = 0; var_6_object = Obj(); // 0xd0 PushV
	var_6_object = var_2_object; // 0xd1 Mov
	func_1150(var_5_bool, var_6_object); // 0xd2 Call
	if(var_5_bool == 0) goto Label_220; // 0xd4 JumpB
	var_74_bool = 0; var_75_object = Obj(); var_76_object = Obj(); // 0xd5 PushV
	var_75_object = var_0_object; // 0xd6 MovT
	var_76_object = var_2_object; // 0xd7 Mov
	func_1164(var_74_bool, var_75_object, var_76_object); // 0xd8 Call
	if(var_74_bool == 0) goto Label_220; // 0xda JumpB
	var_4_bool = 1; // 0xdb MovB
	
Label_220:
	if(var_4_bool == 0) goto Label_224; // 0xdc JumpB
	var_0_object = var_2_object; // 0xdd TMov
	Face(var_2_object); // 0xde Func
	
Label_224:
	return 0; // 0xe0 Return
}


	task_1_event_17(var_0_object, var_1_bool, var_2_object, var_3_object, var_37_object)
	{
	var_38_object = Obj(); // 0xe2 PushV
	var_38_object = var_37_object; // 0xe3 Mov
	func_946(var_38_object); // 0xe4 Call
	var_48_bool = 0; // 0xe6 PushV
	var_48_bool = 1; // 0xe7 MovB
	var_49_bool = 0; var_50_object = Obj(); // 0xe8 PushV
	var_50_object = var_37_object; // 0xe9 Mov
	func_575(var_49_bool, var_50_object); // 0xea Call
	var_77_bool = var_49_bool == 0; // 0xec Not
	if(var_77_bool == 0) goto Label_245; // 0xed JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0xee PushV
	var_79_object = var_37_object; // 0xef Mov
	func_1123(var_78_bool, var_79_object); // 0xf0 Call
	var_85_bool = var_78_bool == 0; // 0xf2 Not
	if(var_85_bool == 0) goto Label_245; // 0xf3 JumpB
	var_48_bool = 0; // 0xf4 MovB
	
Label_245:
	if(var_48_bool == 0) goto Label_247; // 0xf5 JumpB
	return 0; // 0xf6 Return
	
Label_247:
	var_0_object = var_37_object; // 0xf7 TMov
	var_1_bool = 1; // 0xf8 TMovB
	Face(var_37_object); // 0xf9 Func
	return 0; // 0xfb Return
	}


task_1_event_30(var_0_object, var_1_bool, var_2_object, var_3_object)
{
	var_4_bool = 0; var_5_object = Obj(); var_6_object = Obj(); // 0xfd PushV
	var_5_object = var_2_object; // 0xfe Mov
	var_6_object = var_3_object; // 0xff Mov
	func_998(var_4_bool, var_5_object, var_6_object); // 0x100 Call
	if(var_4_bool == 0) goto Label_263; // 0x102 JumpB
	var_37_object = Obj(); // 0x103 PushV
	var_37_object = var_2_object; // 0x104 Mov
	func_225(); // 0x105 Call
	
Label_263:
	return 0; // 0x107 Return
}


task_1_event_7(var_0_object, var_1_bool, var_2_int)
{
	var_3_int = 75; // 0x109 PushI
	var_4_bool = var_2_int == var_3_int; // 0x10a Eq
	if(var_4_bool == 0) goto Label_271; // 0x10b JumpB
	ResetAAS(); // 0x10c Func
	goto Label_275; // 0x10e Jump
	
Label_275:
	return 0; // 0x113 Return
	
Label_271:
	var_5_int = 0; // 0x10f PushV
	var_5_int = var_2_int; // 0x110 Mov
	func_1038(var_5_int); // 0x111 Call
}


task_2_event_0(var_0_object, var_1_bool, var_2_object)
{
	var_3_bool = 0; var_4_bool = 0; // 0x13f PushV
	IsOverrideActive(var_4_bool); // 0x140 Func
	var_5_bool = var_4_bool == 0; // 0x142 Not
	if(var_5_bool == 0) goto Label_326; // 0x143 JumpB
	WorkWithCorpse(var_2_object); // 0x144 Func
	
Label_326:
	return 2; // 0x146 Return
}


task_2_event_22(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float)
{
	return 0; // 0x1b5 Return
}


task_2_event_16(var_0_object, var_1_bool, var_2_object, var_3_string)
{
	return 0; // 0x1b7 Return
}


task_2_event_41(var_0_object, var_1_bool, var_2_object)
{
	return 0; // 0x1b9 Return
}


event_22(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float)
{
	var_6_object = Obj(); var_7_int = 0; var_8_float = 0; // 0x3cc PushV
	var_6_object = var_2_object; // 0x3cd Mov
	var_7_int = var_3_int; // 0x3ce Mov
	var_8_float = var_4_float; // 0x3cf Mov
	func_599(var_7_int, var_8_float); // 0x3d0 Call
	return 0; // 0x3d2 Return
}


event_16(var_0_object, var_1_bool, var_2_object, var_3_string)
{
	var_4_float = 0; var_5_float = 0; // 0x3d3 PushV
	var_6_string = "health"; // 0x3d4 PushS
	var_7_bool = var_3_string == var_6_string; // 0x3d5 Eq
	if(var_7_bool == 0) goto Label_991; // 0x3d6 JumpB
	var_8_string = "health"; // 0x3d7 PushS
	GetProperty(var_8_string, var_5_float); // 0x3d8 Func
	var_9_int = 0; // 0x3da PushI
	var_10_bool = var_5_float <= var_9_int; // 0x3db LE
	if(var_10_bool == 0) goto Label_991; // 0x3dc JumpB
	SignalDeath(var_2_object); // 0x3dd Func
	
Label_991:
	return 2; // 0x3df Return
}


event_41(var_0_object, var_1_bool, var_2_object)
{
	var_3_object = Obj(); // 0x3e1 PushV
	var_3_object = var_2_object; // 0x3e2 Mov
	func_963(var_3_object); // 0x3e3 Call
	return 0; // 0x3e5 Return
}


main(var_0_object, var_1_bool)
{
	var_2_cvector = CVector(0,0,0); var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_bool = 0; // 0x0 PushV
	func_768(); // 0x2 Call
	var_29_int = 75; // 0x4 PushI
	var_30_float = 0.5; // 0x5 PushF
	SetTimer(var_29_int, var_30_float); // 0x6 Func
	GetDirection(var_4_cvector); // 0x8 Func
	
Label_10:
	Hold(); // 0xa Func
	
Label_12:
	var_31_float = GetByIndex(var_4_cvector, 0); // 0xc PushE
	var_32_float = GetByIndex(var_4_cvector, 2); // 0xd PushE
	Rotate(var_31_float, var_32_float, var_5_bool); // 0xe Func
	var_33_bool = var_5_bool == 0; // 0x10 Not
	if(var_33_bool == 0) goto Label_19; // 0x11 JumpB
	goto Label_12; // 0x12 Jump
	
Label_19:
	goto Label_10; // 0x13 Jump
}


func_768()
{
	var_6_float = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_float = 0; var_10_object = Obj(); var_11_object = Obj(); // 0x300 PushV
	var_12_object = GlobalVars[4]; // 0x301 PushGE
	var_13_object = Obj(); // 0x302 PushV
	func_690(var_13_object); // 0x303 Call
	var_12_object = var_13_object; // 0x304 Mov
	GlobalVars[4] = var_12_object; // 0x306 PopGE
	GetAttackDistance(var_9_float); // 0x307 Func
	var_16_float = GlobalVars[2]; // 0x309 PushGE
	var_17_float = 600.0; // 0x30a PushF
	var_16_float = var_9_float / var_9_float; // 0x30b Div2
	GlobalVars[2] = var_16_float; // 0x30c PopGE
	GetScene(var_10_object); // 0x30d Func
	var_18_string = "flame"; // 0x30f PushS
	var_19_cvector = CVector(0.0, 0.0, 0.0); // 0x310 PushVec
	AddActorByType(var_11_object, var_18_string, var_10_object, var_19_cvector); // 0x311 Func
	var_20_object = Obj(); // 0x313 PushV
	func_666(var_20_object); // 0x314 Call
	var_23_string = "flame"; // 0x316 PushS
	Attach(var_20_object, var_23_string); // 0x317 ObjFunc
	var_24_bool = GlobalVars[3]; // 0x319 PushGE
	var_24_bool = 0; // 0x31a MovB
	GlobalVars[3] = var_24_bool; // 0x31b PopGE
	var_25_float = 0.05; // 0x31c PushF
	SetLength(var_25_float); // 0x31d ObjFunc
	var_26_object = GlobalVars[0]; // 0x31f PushGE
	var_26_object = var_11_object; // 0x320 Mov
	GlobalVars[0] = var_26_object; // 0x321 PopGE
	var_27_int = 70; // 0x322 PushI
	var_28_float = 0.1; // 0x323 PushF
	SetTimer(var_27_int, var_28_float); // 0x324 Func
	return 6; // 0x326 Return
}


func_896(var_158_object)
{
	var_159_cvector = CVector(0,0,0); var_160_float = 0; var_161_cvector = CVector(0,0,0); var_162_float = 0; // 0x380 PushV
	GetPosition(var_161_cvector); // 0x381 ObjFunc
	var_163_string = "@GetHeight"; // 0x383 PushS
	var_164_int = 1; // 0x384 PushI
	var_165_bool = IsFuncExist(var_158_object, var_163_string, var_164_int); // 0x385 FuncExist
	if(var_165_bool == 0) goto Label_910; // 0x386 JumpB
	GetHeight(var_162_float); // 0x387 ObjFunc
	var_166_float = GetByIndex(var_161_cvector, 1); // 0x389 PushE
	var_167_int = 2; // 0x38a PushI
	var_168_float = var_162_float / var_167_int; // 0x38b Div
	var_166_float = var_166_float + var_168_float; // 0x38c Add2
	SetByIndex(var_161_cvector, 1) = var_166_float; // 0x38d PopE
	
Label_910:
	var_169_cvector = CVector(0,0,0); // 0x38e PushV
	var_169_cvector = var_161_cvector; // 0x38f Mov
	func_865(var_169_cvector); // 0x390 Call
	return 4; // 0x392 Return
}


func_1164(var_74_bool, var_75_object, var_76_object)
{
	var_77_bool = var_76_object == 0; // 0x48d NullEq
	if(var_77_bool == 0) goto Label_1169; // 0x48e JumpB
	var_74_bool = 0; // 0x48f MovB
	return 0; // 0x490 Return
	
Label_1169:
	var_74_bool = 1; // 0x491 MovB
	var_78_bool = 0; var_79_object = Obj(); // 0x492 PushV
	var_79_object = var_75_object; // 0x493 Mov
	func_1190(var_78_bool, var_79_object); // 0x494 Call
	var_80_bool = var_78_bool == 0; // 0x496 Not
	if(var_80_bool == 0) goto Label_1189; // 0x497 JumpB
	var_81_float = 0; var_82_object = Obj(); // 0x498 PushV
	var_82_object = var_76_object; // 0x499 Mov
	func_450(var_82_object); // 0x49a Call
	var_83_float = 0; var_84_object = Obj(); // 0x49c PushV
	var_84_object = var_75_object; // 0x49d Mov
	func_450(var_84_object); // 0x49e Call
	var_85_int = 25; // 0x4a0 PushI
	var_86_int = var_83_float - var_85_int; // 0x4a1 Sub
	var_87_bool = var_81_float < var_86_int; // 0x4a2 LT
	if(var_87_bool == 0) goto Label_1189; // 0x4a3 JumpB
	var_74_bool = 0; // 0x4a4 MovB
	
Label_1189:
	return 0; // 0x4a5 Return
}


func_1038(var_5_int)
{
	var_6_object = Obj(); var_7_float = 0; var_8_object = Obj(); var_9_bool = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_object = Obj(); var_14_float = 0; var_15_object = Obj(); var_16_bool = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0; // 0x40e PushV
	var_20_int = 70; // 0x40f PushI
	var_21_bool = var_5_int != var_20_int; // 0x410 Neq
	if(var_21_bool == 0) goto Label_1043; // 0x411 JumpB
	return 14; // 0x412 Return
	
Label_1043:
	var_22_object = GlobalVars[0]; // 0x413 PushGE
	var_23_bool = var_22_object == 0; // 0x414 NullEq
	if(var_23_bool == 0) goto Label_1047; // 0x415 JumpB
	return 14; // 0x416 Return
	
Label_1047:
	var_24_object = GlobalVars[0]; // 0x417 PushGE
	Intersect(var_13_object, var_14_float); // 0x418 ObjFunc
	var_25_object = GlobalVars[0]; // 0x41a PushGE
	var_26_bool = GlobalVars[3]; // 0x41b PushGE
	if(var_26_bool == 0) goto Label_1061; // 0x41c JumpB
	var_27_float = 0; var_28_float = 0; var_29_float = 0; // 0x41d PushV
	var_28_float = var_14_float; // 0x41e Mov
	var_30_float = GlobalVars[2]; // 0x41f PushGE
	var_29_float = var_30_float; // 0x420 Mov
	func_672(var_27_float, var_28_float, var_29_float); // 0x422 Call
	goto Label_1062; // 0x424 Jump
	
Label_1062:
	SetLength(var_27_float); // 0x426 ObjFunc
	
Label_1064:
	Next(var_16_bool, var_15_object); // 0x428 ObjFunc
	var_32_bool = var_16_bool; // 0x42a Push
	if(var_32_bool == 0) goto Label_1120; // 0x42b JumpB
	var_33_bool = 0; // 0x42c PushV
	var_33_bool = 0; // 0x42d MovB
	var_34_bool = var_15_object != 0; // 0x42e NullNeq
	if(var_34_bool == 0) goto Label_1078; // 0x42f JumpB
	var_35_object = Obj(); // 0x430 PushV
	func_666(var_35_object); // 0x431 Call
	var_38_bool = var_15_object != var_35_object; // 0x433 Neq
	if(var_38_bool == 0) goto Label_1078; // 0x434 JumpB
	var_33_bool = 1; // 0x435 MovB
	
Label_1078:
	if(var_33_bool == 0) goto Label_1119; // 0x436 JumpB
	var_39_float = 0; var_40_object = Obj(); var_41_float = 0; var_42_int = 0; // 0x437 PushV
	var_40_object = var_15_object; // 0x438 Mov
	var_41_float = 0.1; // 0x439 MovF
	var_42_int = 1; // 0x43a MovI
	func_470(var_39_float, var_40_object, var_41_float, var_42_int); // 0x43b Call
	var_17_float = var_39_float; // 0x43c Mov
	var_94_bool = 0; var_95_object = Obj(); var_96_string = ""; // 0x43e PushV
	var_95_object = var_15_object; // 0x43f Mov
	var_96_string = "disease"; // 0x440 MovS
	func_458(var_94_bool, var_95_object, var_96_string); // 0x441 Call
	if(var_94_bool == 0) goto Label_1105; // 0x443 JumpB
	var_97_string = "disease"; // 0x444 PushS
	GetProperty(var_97_string, var_18_float); // 0x445 ObjFunc
	var_98_float = 0.02; // 0x447 PushF
	var_99_bool = var_18_float <= var_98_float; // 0x448 LE
	if(var_99_bool == 0) goto Label_1100; // 0x449 JumpB
	var_18_float = 0; // 0x44a MovI
	goto Label_1102; // 0x44b Jump
	
Label_1102:
	var_100_string = "disease"; // 0x44e PushS
	SetProperty(var_100_string, var_18_float); // 0x44f ObjFunc
	
Label_1105:
	var_101_bool = 0; var_102_object = Obj(); var_103_string = ""; // 0x451 PushV
	var_102_object = var_15_object; // 0x452 Mov
	var_103_string = "fire"; // 0x453 MovS
	func_458(var_101_bool, var_102_object, var_103_string); // 0x454 Call
	if(var_101_bool == 0) goto Label_1119; // 0x456 JumpB
	var_104_string = "fire"; // 0x457 PushS
	GetProperty(var_104_string, var_19_float); // 0x458 ObjFunc
	var_105_string = "fire"; // 0x45a PushS
	var_106_float = 0.1; // 0x45b PushF
	var_107_int = var_19_float + var_106_float; // 0x45c Add
	SetProperty(var_105_string, var_107_int); // 0x45d ObjFunc
	
Label_1119:
	goto Label_1064; // 0x45f Jump
	
Label_1100:
	var_108_float = 0.02; // 0x44c PushF
	var_18_float = var_18_float - var_108_float; // 0x44d Sub2
	
Label_1120:
	return 14; // 0x460 Return
	
Label_1061:
	var_109_float = 0.05; // 0x425 PushF
}


func_915(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_float = 0; var_16_bool = 0; var_17_float = 0; // 0x393 PushV
	var_18_bool = 0; var_19_object = Obj(); // 0x394 PushV
	var_19_object = var_13_object; // 0x395 Mov
	func_575(var_18_bool, var_19_object); // 0x396 Call
	var_52_bool = var_18_bool == 0; // 0x398 Not
	if(var_52_bool == 0) goto Label_924; // 0x399 JumpB
	var_12_bool = 0; // 0x39a MovB
	return 4; // 0x39b Return
	
Label_924:
	var_53_object = GlobalVars[4]; // 0x39c PushGE
	in(var_16_bool, var_13_object); // 0x39d ObjFunc
	var_54_bool = var_16_bool; // 0x39f Push
	if(var_54_bool == 0) goto Label_931; // 0x3a0 JumpB
	var_12_bool = 1; // 0x3a1 MovB
	return 4; // 0x3a2 Return
	
Label_931:
	var_55_bool = 0; var_56_object = Obj(); var_57_string = ""; // 0x3a3 PushV
	var_56_object = var_13_object; // 0x3a4 Mov
	var_57_string = "disease"; // 0x3a5 MovS
	func_458(var_55_bool, var_56_object, var_57_string); // 0x3a6 Call
	var_58_bool = var_55_bool == 0; // 0x3a8 Not
	if(var_58_bool == 0) goto Label_940; // 0x3a9 JumpB
	var_12_bool = 0; // 0x3aa MovB
	return 4; // 0x3ab Return
	
Label_940:
	var_59_string = "disease"; // 0x3ac PushS
	GetProperty(var_59_string, var_17_float); // 0x3ad ObjFunc
	var_60_int = 0; // 0x3af PushI
	var_12_bool = var_17_float > var_60_int; // 0x3b0 GT2
	return 4; // 0x3b1 Return
}


func_276(var_4_object)
{
	var_5_int = 75; // 0x115 PushI
	KillTimer(var_5_int); // 0x116 Func
	var_6_object = Obj(); // 0x118 PushV
	var_6_object = var_4_object; // 0x119 Mov
	func_285(var_6_object); // 0x11a Call
	return 0; // 0x11c Return
}


func_534(var_64_bool)
{
	var_66_bool = 0; var_67_bool = 0; // 0x216 PushV
	IsDead(var_67_bool); // 0x217 ObjFunc
	var_64_bool = var_67_bool; // 0x219 Mov
	return 2; // 0x21a Return
}


func_666(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x29a PushV
	self(var_22_object); // 0x29b Func
	var_20_object = var_22_object; // 0x29d Mov
	return 2; // 0x29e Return
}


func_539(var_53_bool, var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); // 0x21b PushV
	var_59_bool = var_54_object == 0; // 0x21c NullEq
	if(var_59_bool == 0) goto Label_544; // 0x21d JumpB
	var_53_bool = 0; // 0x21e MovB
	return 4; // 0x21f Return
	
Label_544:
	var_60_bool = 0; // 0x220 PushV
	var_60_bool = 0; // 0x221 MovB
	var_61_string = "IsDead"; // 0x222 PushS
	var_62_int = 1; // 0x223 PushI
	var_63_bool = IsFuncExist(var_54_object, var_61_string, var_62_int); // 0x224 FuncExist
	if(var_63_bool == 0) goto Label_556; // 0x225 JumpB
	var_64_bool = 0; var_65_object = Obj(); // 0x226 PushV
	var_65_object = var_54_object; // 0x227 Mov
	func_534(var_65_object); // 0x228 Call
	if(var_64_bool == 0) goto Label_556; // 0x22a JumpB
	var_60_bool = 1; // 0x22b MovB
	
Label_556:
	if(var_60_bool == 0) goto Label_559; // 0x22c JumpB
	var_53_bool = 0; // 0x22d MovB
	return 4; // 0x22e Return
	
Label_559:
	GetScene(var_57_object); // 0x22f Func
	var_68_bool = var_57_object == 0; // 0x231 NullEq
	if(var_68_bool == 0) goto Label_565; // 0x232 JumpB
	var_53_bool = 0; // 0x233 MovB
	return 4; // 0x234 Return
	
Label_565:
	GetScene(var_58_object); // 0x235 ObjFunc
	var_69_bool = var_57_object != var_58_object; // 0x237 Neq
	if(var_69_bool == 0) goto Label_571; // 0x238 JumpB
	var_53_bool = 0; // 0x239 MovB
	return 4; // 0x23a Return
	
Label_571:
	var_53_bool = 1; // 0x23b MovB
	return 4; // 0x23c Return
}


func_285(var_6_object)
{
	var_7_int = 70; // 0x11e PushI
	KillTimer(var_7_int); // 0x11f Func
	var_8_bool = 0; // 0x121 PushV
	var_8_bool = 0; // 0x122 MovB
	func_809(var_8_bool); // 0x123 Call
	var_41_object = GlobalVars[0]; // 0x125 PushGE
	RemoveActor(var_41_object); // 0x126 Func
	func_726(); // 0x129 Call
	var_82_object = Obj(); // 0x12b PushV
	var_82_object = var_6_object; // 0x12c Mov
	func_304(var_82_object); // 0x12d Call
	return 0; // 0x12f Return
}


func_414(var_105_string)
{
	RemoveRTEnvelope(); // 0x19f Func
	SetDeathState(); // 0x1a1 Func
	Stop(); // 0x1a3 Func
	StopAsync(); // 0x1a5 Func
	StopSecondaryAnimation(); // 0x1a7 Func
	var_106_string = "all"; // 0x1a9 PushS
	PlayAnimation(var_106_string, var_105_string); // 0x1aa Func
	WaitForAnimEnd(); // 0x1ac Func
	var_107_string = "all"; // 0x1ae PushS
	LockAnimationEnd(var_107_string, var_105_string); // 0x1af Func
	RemoveEnvelope(); // 0x1b1 Func
	return 0; // 0x1b3 Return
}


func_672(var_27_float, var_28_float, var_29_float)
{
	var_31_bool = var_28_float < var_29_float; // 0x2a1 LT
	if(var_31_bool == 0) goto Label_677; // 0x2a2 JumpB
	var_27_float = var_28_float; // 0x2a3 Mov
	goto Label_678; // 0x2a4 Jump
	
Label_678:
	return 0; // 0x2a6 Return
	
Label_677:
	var_27_float = var_29_float; // 0x2a5 Mov
}


func_1190(var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x4a6 PushV
	IsPlayerActor(var_8_object, var_10_bool); // 0x4a7 Func
	var_7_bool = 1; // 0x4a9 MovB
	var_11_bool = var_10_bool; // 0x4aa Push
	if(var_11_bool == 0) goto Label_1202; // 0x4ab JumpB
	var_12_bool = 0; var_13_object = Obj(); // 0x4ac PushV
	var_13_object = var_8_object; // 0x4ad Mov
	func_915(var_12_bool, var_13_object); // 0x4ae Call
	if(var_12_bool == 0) goto Label_1202; // 0x4b0 JumpB
	var_7_bool = 0; // 0x4b1 MovB
	
Label_1202:
	return 2; // 0x4b2 Return
}


func_679(var_87_float, var_88_float, var_89_float, var_90_float)
{
	var_91_bool = var_88_float < var_89_float; // 0x2a8 LT
	if(var_91_bool == 0) goto Label_684; // 0x2a9 JumpB
	var_87_float = var_89_float; // 0x2aa Mov
	return 0; // 0x2ab Return
	
Label_684:
	var_92_bool = var_88_float > var_90_float; // 0x2ac GT
	if(var_92_bool == 0) goto Label_688; // 0x2ad JumpB
	var_87_float = var_90_float; // 0x2ae Mov
	return 0; // 0x2af Return
	
Label_688:
	var_87_float = var_88_float; // 0x2b0 Mov
	return 0; // 0x2b1 Return
}


func_809(var_8_bool)
{
	var_9_float = 0; var_10_float = 0; var_11_object = Obj(); var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_float = 0; // 0x329 PushV
	var_19_bool = var_8_bool; // 0x32a Push
	if(var_19_bool == 0) goto Label_816; // 0x32b JumpB
	var_20_float = GlobalVars[2]; // 0x32c PushGE
	var_14_float = var_20_float; // 0x32d Mov
	goto Label_817; // 0x32f Jump
	
Label_817:
	var_21_object = GlobalVars[0]; // 0x331 PushGE
	GetLength(var_15_float); // 0x332 ObjFunc
	var_22_bool = var_14_float < var_15_float; // 0x334 LT
	if(var_22_bool == 0) goto Label_823; // 0x335 JumpB
	var_15_float = var_14_float; // 0x336 Mov
	
Label_823:
	var_23_object = GlobalVars[0]; // 0x337 PushGE
	SetLength(var_15_float); // 0x338 ObjFunc
	var_24_bool = GlobalVars[3]; // 0x33a PushGE
	var_25_bool = var_24_bool != var_8_bool; // 0x33b Neq
	if(var_25_bool == 0) goto Label_864; // 0x33c JumpB
	var_26_bool = var_8_bool; // 0x33d Push
	if(var_26_bool == 0) goto Label_854; // 0x33e JumpB
	var_27_object = GlobalVars[1]; // 0x33f PushGE
	var_28_bool = var_27_object == 0; // 0x340 NullEq
	if(var_28_bool == 0) goto Label_849; // 0x341 JumpB
	var_17_cvector = CVector(0.0, 0.0, 0.0); // 0x342 MovV
	GetHeight(var_18_float); // 0x343 Func
	var_29_float = GetByIndex(var_17_cvector, 1); // 0x345 PushE
	var_29_float = var_18_float; // 0x346 Mov
	SetByIndex(var_17_cvector, 1) = var_29_float; // 0x347 PopE
	var_30_string = "flame_loop"; // 0x348 PushS
	var_31_int = 0; // 0x349 PushI
	var_32_int = 200; // 0x34a PushI
	PlayLoopedGlobalSound(var_16_object, var_30_string, var_17_cvector, var_31_int, var_32_int); // 0x34b Func
	var_33_object = GlobalVars[1]; // 0x34d PushGE
	var_33_object = var_16_object; // 0x34e Mov
	GlobalVars[1] = var_33_object; // 0x34f PopGE
	var_16_object = 0; // 0x350 SetNull
	
Label_849:
	var_34_object = GlobalVars[1]; // 0x351 PushGE
	var_35_int = 2; // 0x352 PushI
	FadeIn(var_35_int); // 0x353 ObjFunc
	goto Label_861; // 0x355 Jump
	
Label_861:
	var_36_bool = GlobalVars[3]; // 0x35d PushGE
	var_36_bool = var_8_bool; // 0x35e Mov
	GlobalVars[3] = var_36_bool; // 0x35f PopGE
	
Label_864:
	return 10; // 0x360 Return
	
Label_854:
	var_37_object = GlobalVars[1]; // 0x356 PushGE
	var_38_bool = var_37_object != 0; // 0x357 NullNeq
	if(var_38_bool == 0) goto Label_861; // 0x358 JumpB
	var_39_object = GlobalVars[1]; // 0x359 PushGE
	var_40_int = 2; // 0x35a PushI
	FadeOut(var_40_int); // 0x35b ObjFunc
	
Label_816:
	var_14_float = 0.05; // 0x330 MovF
}


func_304(var_82_object)
{
	EventDisable(0); // 0x131 EventDisable
	var_83_object = Obj(); // 0x132 PushV
	var_83_object = var_82_object; // 0x133 Mov
	func_327(var_83_object); // 0x134 Call
	var_133_int = 50; // 0x136 PushI
	var_134_int = 40; // 0x137 PushI
	SetRTEnvelope(var_133_int, var_134_int); // 0x138 Func
	EventEnable(0); // 0x13a EventEnable
	
Label_315:
	Hold(); // 0x13b Func
	goto Label_315; // 0x13d Jump
}


func_946(var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; var_41_bool = 0; var_42_bool = 0; // 0x3b2 PushV
	var_43_bool = var_38_object == 0; // 0x3b3 NullEq
	if(var_43_bool == 0) goto Label_950; // 0x3b4 JumpB
	return 4; // 0x3b5 Return
	
Label_950:
	var_44_object = GlobalVars[4]; // 0x3b6 PushGE
	in(var_41_bool, var_38_object); // 0x3b7 ObjFunc
	var_45_bool = var_41_bool == 0; // 0x3b9 Not
	if(var_45_bool == 0) goto Label_958; // 0x3ba JumpB
	var_46_object = GlobalVars[4]; // 0x3bb PushGE
	add(var_38_object); // 0x3bc ObjFunc
	
Label_958:
	IsPlayerActor(var_38_object, var_42_bool); // 0x3be Func
	var_47_bool = var_42_bool; // 0x3c0 Push
	if(var_47_bool == 0) goto Label_962; // 0x3c1 JumpB
	
Label_962:
	return 4; // 0x3c2 Return
}


func_690(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x2b2 PushV
	CreateObjectSet(var_15_object); // 0x2b3 Func
	var_13_object = var_15_object; // 0x2b5 Mov
	return 2; // 0x2b6 Return
}


func_696(var_47_int, var_48_int)
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; // 0x2b8 PushV
	var_57_bool = var_47_int > var_48_int; // 0x2b9 GT
	if(var_57_bool == 0) goto Label_703; // 0x2ba JumpB
	var_58_string = "GenerateMoney: iMin > iMax"; // 0x2bb PushS
	Trace(var_58_string); // 0x2bc Func
	return 8; // 0x2be Return
	
Label_703:
	var_53_int = 0; // 0x2bf MovI
	var_59_bool = var_47_int != var_48_int; // 0x2c0 Neq
	if(var_59_bool == 0) goto Label_710; // 0x2c1 JumpB
	var_60_int = var_48_int - var_47_int; // 0x2c2 Sub
	irand(var_54_int, var_60_int); // 0x2c3 Func
	goto Label_714; // 0x2c5 Jump
	
Label_714:
	var_53_int = var_53_int + var_47_int; // 0x2ca Add2
	var_61_int = 0; // 0x2cb PushI
	var_62_bool = var_53_int == var_61_int; // 0x2cc Eq
	if(var_62_bool == 0) goto Label_719; // 0x2cd JumpB
	return 8; // 0x2ce Return
	
Label_719:
	var_63_string = "Money"; // 0x2cf PushS
	GetInvItemByName(var_55_int, var_63_string); // 0x2d0 Func
	var_64_int = 0; // 0x2d2 PushI
	AddItem(var_56_bool, var_55_int, var_64_int, var_53_int); // 0x2d3 Func
	return 8; // 0x2d5 Return
	
Label_710:
	var_65_int = 0; // 0x2c6 PushI
	var_66_bool = var_47_int == var_65_int; // 0x2c7 Eq
	if(var_66_bool == 0) goto Label_714; // 0x2c8 JumpB
	return 8; // 0x2c9 Return
}


func_442(var_70_string, var_71_int)
{
	var_72_int = 1; // 0x1bb PushI
	var_73_bool = var_71_int == var_72_int; // 0x1bc Eq
	if(var_73_bool == 0) goto Label_448; // 0x1bd JumpB
	var_70_string = "fire"; // 0x1be MovS
	return 0; // 0x1bf Return
	
Label_448:
	var_70_string = "phys"; // 0x1c0 MovS
	return 0; // 0x1c1 Return
}


func_575(var_49_bool, var_50_object)
{
	var_51_int = 0; var_52_int = 0; // 0x23f PushV
	var_53_bool = 0; var_54_object = Obj(); // 0x240 PushV
	var_54_object = var_50_object; // 0x241 Mov
	func_539(var_53_bool, var_54_object); // 0x242 Call
	var_70_bool = var_53_bool == 0; // 0x244 Not
	if(var_70_bool == 0) goto Label_584; // 0x245 JumpB
	var_49_bool = 0; // 0x246 MovB
	return 2; // 0x247 Return
	
Label_584:
	var_71_bool = 0; var_72_object = Obj(); var_73_string = ""; // 0x248 PushV
	var_72_object = var_50_object; // 0x249 Mov
	var_73_string = "noaccess"; // 0x24a MovS
	func_458(var_71_bool, var_72_object, var_73_string); // 0x24b Call
	var_74_bool = var_71_bool == 0; // 0x24d Not
	if(var_74_bool == 0) goto Label_593; // 0x24e JumpB
	var_49_bool = 1; // 0x24f MovB
	return 2; // 0x250 Return
	
Label_593:
	var_75_string = "noaccess"; // 0x251 PushS
	GetProperty(var_75_string, var_52_int); // 0x252 ObjFunc
	var_76_int = 0; // 0x254 PushI
	var_49_bool = var_52_int == var_76_int; // 0x255 Eq2
	return 2; // 0x256 Return
}


func_450(var_26_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x1c2 PushV
	GetPosition(var_31_cvector); // 0x1c3 Func
	GetPosition(var_32_cvector); // 0x1c5 ObjFunc
	var_33_cvector = var_32_cvector - var_31_cvector; // 0x1c7 Sub2
	var_26_float = var_33_cvector | var_33_cvector; // 0x1c8 Or2
	return 6; // 0x1c9 Return
}


func_963(var_3_object)
{
	var_4_object = Obj(); // 0x3c4 PushV
	var_4_object = var_3_object; // 0x3c5 Mov
	TaskCall(2); // 0x3c6 TaskCall
	func_276(var_4_object); // 0x3c7 Call
	TaskReturn(); // 0x3c8 TaskReturn
	return 0; // 0x3ca Return
}


func_327(var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_string = ""; var_89_object = Obj(); var_90_bool = 0; var_91_bool = 0; var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_string = ""; var_99_object = Obj(); var_100_bool = 0; var_101_bool = 0; var_102_float = 0; var_103_cvector = CVector(0,0,0); // 0x147 PushV
	var_104_bool = var_83_object == 0; // 0x148 NullEq
	if(var_104_bool == 0) goto Label_335; // 0x149 JumpB
	var_105_string = ""; // 0x14a PushV
	var_105_string = "fdie"; // 0x14b MovS
	func_414(var_105_string); // 0x14c Call
	goto Label_413; // 0x14e Jump
	
Label_413:
	return 20; // 0x19d Return
	
Label_335:
	GetPosition(var_94_cvector); // 0x14f ObjFunc
	GetPosition(var_95_cvector); // 0x151 Func
	GetDirection(var_96_cvector); // 0x153 Func
	var_97_cvector = var_95_cvector - var_94_cvector; // 0x155 Sub2
	var_108_float = GetByIndex(var_97_cvector, 0); // 0x156 PushE
	var_109_float = GetByIndex(var_96_cvector, 0); // 0x157 PushE
	var_110_float = var_108_float * var_109_float; // 0x158 Mult
	var_111_float = GetByIndex(var_97_cvector, 2); // 0x159 PushE
	var_112_float = GetByIndex(var_96_cvector, 2); // 0x15a PushE
	var_113_float = var_111_float * var_112_float; // 0x15b Mult
	var_114_int = var_110_float + var_113_float; // 0x15c Add
	var_115_int = 0; // 0x15d PushI
	var_116_bool = var_114_int >= var_115_int; // 0x15e GE
	if(var_116_bool == 0) goto Label_354; // 0x15f JumpB
	var_98_string = "fdie"; // 0x160 MovS
	goto Label_355; // 0x161 Jump
	
Label_355:
	RemoveRTEnvelope(); // 0x163 Func
	SetDeathState(); // 0x165 Func
	Stop(); // 0x167 Func
	StopAsync(); // 0x169 Func
	var_99_object = var_83_object; // 0x16b Mov
	var_117_string = "GetScriptProperty"; // 0x16c PushS
	var_118_int = 2; // 0x16d PushI
	var_119_bool = IsFuncExist(var_83_object, var_117_string, var_118_int); // 0x16e FuncExist
	if(var_119_bool == 0) goto Label_379; // 0x16f JumpB
	var_120_string = "Owner"; // 0x170 PushS
	HasScriptProperty(var_100_bool, var_120_string); // 0x171 ObjFunc
	var_121_bool = var_100_bool; // 0x173 Push
	if(var_121_bool == 0) goto Label_379; // 0x174 JumpB
	var_122_string = "Owner"; // 0x175 PushS
	GetScriptProperty(var_99_object, var_122_string); // 0x176 ObjFunc
	var_123_bool = var_99_object == 0; // 0x178 NullEq
	if(var_123_bool == 0) goto Label_379; // 0x179 JumpB
	var_99_object = var_83_object; // 0x17a Mov
	
Label_379:
	var_124_string = "@GetEyesHeight"; // 0x17b PushS
	var_125_int = 1; // 0x17c PushI
	var_126_bool = IsFuncExist(var_99_object, var_124_string, var_125_int); // 0x17d FuncExist
	if(var_126_bool == 0) goto Label_394; // 0x17e JumpB
	GetEyesHeight(var_102_float); // 0x17f ObjFunc
	var_103_cvector = CVector(0.0, 0.0, 0.0); // 0x181 MovV
	var_127_float = GetByIndex(var_103_cvector, 1); // 0x182 PushE
	var_127_float = var_102_float; // 0x183 Mov
	SetByIndex(var_103_cvector, 1) = var_127_float; // 0x184 PopE
	var_128_string = "head"; // 0x185 PushS
	LookAsync(var_83_object, var_128_string, var_103_cvector); // 0x186 Func
	var_101_bool = 1; // 0x188 MovB
	goto Label_395; // 0x189 Jump
	
Label_395:
	var_129_string = "all"; // 0x18b PushS
	PlayAnimation(var_129_string, var_98_string); // 0x18c Func
	WaitForAnimEnd(); // 0x18e Func
	var_130_bool = var_101_bool; // 0x190 Push
	if(var_130_bool == 0) goto Label_407; // 0x191 JumpB
	StopAsync(); // 0x192 Func
	var_131_string = "head"; // 0x194 PushS
	UnlookAsync(var_131_string); // 0x195 Func
	
Label_407:
	var_132_string = "all"; // 0x197 PushS
	LockAnimationEnd(var_132_string, var_98_string); // 0x198 Func
	RemoveEnvelope(); // 0x19a Func
	var_99_object = 0; // 0x19c SetNull
	
Label_394:
	var_101_bool = 0; // 0x18a MovB
	
Label_354:
	var_98_string = "bdie"; // 0x162 MovS
}


func_458(var_55_bool, var_56_object, var_57_string)
{
	var_58_bool = 0; var_59_bool = 0; // 0x1ca PushV
	var_60_string = "HasProperty"; // 0x1cb PushS
	var_61_int = 2; // 0x1cc PushI
	var_62_bool = IsFuncExist(var_56_object, var_60_string, var_61_int); // 0x1cd FuncExist
	var_63_bool = var_62_bool == 0; // 0x1ce Not
	if(var_63_bool == 0) goto Label_466; // 0x1cf JumpB
	var_55_bool = 0; // 0x1d0 MovB
	return 2; // 0x1d1 Return
	
Label_466:
	HasProperty(var_57_string, var_59_bool); // 0x1d2 ObjFunc
	var_55_bool = var_59_bool; // 0x1d4 Mov
	return 2; // 0x1d5 Return
}


func_726()
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0; // 0x2d6 PushV
	var_46_int = 0; // 0x2d7 PushI
	ClearSubContainer(var_46_int); // 0x2d8 Func
	var_47_int = 0; var_48_int = 0; // 0x2da PushV
	var_47_int = 600; // 0x2db MovI
	var_48_int = 1500; // 0x2dc MovI
	func_696(var_47_int, var_48_int); // 0x2dd Call
	var_67_int = 200; // 0x2df PushI
	irand(var_44_int, var_67_int); // 0x2e0 Func
	var_68_int = 0; // 0x2e2 PushI
	var_69_bool = var_44_int != var_68_int; // 0x2e3 Neq
	if(var_69_bool == 0) goto Label_748; // 0x2e4 JumpB
	var_70_int = 0; var_71_string = ""; // 0x2e5 PushV
	var_71_string = "ognemet_ammo"; // 0x2e6 MovS
	func_763(var_70_int, var_71_string); // 0x2e7 Call
	var_74_int = 0; // 0x2e9 PushI
	AddItem(var_45_bool, var_70_int, var_74_int, var_44_int); // 0x2ea Func
	
Label_748:
	var_75_int = 3; // 0x2ec PushI
	irand(var_44_int, var_75_int); // 0x2ed Func
	var_76_int = 0; // 0x2ef PushI
	var_77_bool = var_44_int == var_76_int; // 0x2f0 Eq
	if(var_77_bool == 0) goto Label_762; // 0x2f1 JumpB
	var_78_int = 0; var_79_string = ""; // 0x2f2 PushV
	var_79_string = "rusk"; // 0x2f3 MovS
	func_763(var_78_int, var_79_string); // 0x2f4 Call
	var_80_int = 0; // 0x2f6 PushI
	var_81_int = 1; // 0x2f7 PushI
	AddItem(var_45_bool, var_78_int, var_80_int, var_81_int); // 0x2f8 Func
	
Label_762:
	return 4; // 0x2fa Return
}


func_599(var_6_object, var_7_int)
{
	var_9_object = Obj(); var_10_object = Obj(); var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_int = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_object = Obj(); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; // 0x257 PushV
	var_29_bool = 0; // 0x258 PushV
	var_29_bool = 0; // 0x259 MovB
	var_30_int = 4; // 0x25a PushI
	var_31_bool = var_7_int != var_30_int; // 0x25b Neq
	if(var_31_bool == 0) goto Label_609; // 0x25c JumpB
	var_32_int = 5; // 0x25d PushI
	var_33_bool = var_7_int != var_32_int; // 0x25e Neq
	if(var_33_bool == 0) goto Label_609; // 0x25f JumpB
	var_29_bool = 1; // 0x260 MovB
	
Label_609:
	if(var_29_bool == 0) goto Label_628; // 0x261 JumpB
	GetScene(var_19_object); // 0x262 Func
	GetPosition(var_21_cvector); // 0x264 Func
	GetEyesHeight(var_22_float); // 0x266 Func
	var_34_float = GetByIndex(var_21_cvector, 1); // 0x268 PushE
	var_35_int = 2; // 0x269 PushI
	var_36_float = var_22_float / var_35_int; // 0x26a Div
	var_34_float = var_34_float + var_36_float; // 0x26b Add2
	SetByIndex(var_21_cvector, 1) = var_34_float; // 0x26c PopE
	var_37_string = "scripted"; // 0x26d PushS
	var_38_cvector = CVector(0.0, 0.0, 1.0); // 0x26e PushVec
	var_39_string = "blood.xml"; // 0x26f PushS
	AddActorByType(var_20_object, var_37_string, var_19_object, var_21_cvector, var_38_cvector, var_39_string); // 0x270 Func
	var_20_object = 0; // 0x272 SetNull
	var_19_object = 0; // 0x273 SetNull
	
Label_628:
	var_40_bool = var_6_object == 0; // 0x274 NullEq
	if(var_40_bool == 0) goto Label_631; // 0x275 JumpB
	return 20; // 0x276 Return
	
Label_631:
	GetSecondaryAnimationType(var_23_int); // 0x277 Func
	var_41_int = 0; // 0x279 PushI
	var_42_bool = var_23_int < var_41_int; // 0x27a LT
	if(var_42_bool == 0) goto Label_637; // 0x27b JumpB
	return 20; // 0x27c Return
	
Label_637:
	GetPosition(var_24_cvector); // 0x27d ObjFunc
	GetPosition(var_25_cvector); // 0x27f Func
	GetDirection(var_26_cvector); // 0x281 Func
	var_27_cvector = var_25_cvector - var_24_cvector; // 0x283 Sub2
	var_43_float = GetByIndex(var_27_cvector, 0); // 0x284 PushE
	var_44_float = GetByIndex(var_26_cvector, 0); // 0x285 PushE
	var_45_float = var_43_float * var_44_float; // 0x286 Mult
	var_46_float = GetByIndex(var_27_cvector, 2); // 0x287 PushE
	var_47_float = GetByIndex(var_26_cvector, 2); // 0x288 PushE
	var_48_float = var_46_float * var_47_float; // 0x289 Mult
	var_49_int = var_45_float + var_48_float; // 0x28a Add
	var_50_int = 0; // 0x28b PushI
	var_51_bool = var_49_int >= var_50_int; // 0x28c GE
	if(var_51_bool == 0) goto Label_656; // 0x28d JumpB
	var_28_string = "fhit"; // 0x28e MovS
	goto Label_657; // 0x28f Jump
	
Label_657:
	var_52_string = "hit_react"; // 0x291 PushS
	var_53_string = "1"; // 0x292 PushS
	var_54_int = var_28_string + var_53_string; // 0x293 Add
	var_55_string = "2"; // 0x294 PushS
	var_56_int = var_28_string + var_55_string; // 0x295 Add
	var_57_int = -10; // 0x296 PushI
	FadeSecondaryAnimation(var_52_string, var_54_int, var_56_int, var_57_int); // 0x297 Func
	return 20; // 0x299 Return
	
Label_656:
	var_28_string = "bhit"; // 0x290 MovS
}


func_470(var_39_float, var_40_object, var_41_float, var_42_int)
{
	var_43_int = 0; var_44_string = ""; var_45_int = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_int = 0; var_50_string = ""; var_51_int = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; // 0x1d6 PushV
	var_55_bool = 0; var_56_object = Obj(); var_57_string = ""; // 0x1d7 PushV
	var_56_object = var_40_object; // 0x1d8 Mov
	var_57_string = "health"; // 0x1d9 MovS
	func_458(var_55_bool, var_56_object, var_57_string); // 0x1da Call
	var_64_bool = var_55_bool == 0; // 0x1dc Not
	if(var_64_bool == 0) goto Label_480; // 0x1dd JumpB
	var_39_float = 0.0; // 0x1de MovF
	return 12; // 0x1df Return
	
Label_480:
	var_65_bool = 0; var_66_object = Obj(); var_67_string = ""; // 0x1e0 PushV
	var_66_object = var_40_object; // 0x1e1 Mov
	var_67_string = "armor"; // 0x1e2 MovS
	func_458(var_65_bool, var_66_object, var_67_string); // 0x1e3 Call
	var_68_bool = var_65_bool == 0; // 0x1e5 Not
	if(var_68_bool == 0) goto Label_489; // 0x1e6 JumpB
	var_49_int = 0; // 0x1e7 MovI
	goto Label_492; // 0x1e8 Jump
	
Label_492:
	var_69_string = "armor_"; // 0x1ec PushS
	var_70_string = ""; var_71_int = 0; // 0x1ed PushV
	var_71_int = var_42_int; // 0x1ee Mov
	func_442(var_70_string, var_71_int); // 0x1ef Call
	var_50_string = var_69_string + var_70_string; // 0x1f1 Add2
	var_74_bool = 0; var_75_object = Obj(); var_76_string = ""; // 0x1f2 PushV
	var_75_object = var_40_object; // 0x1f3 Mov
	var_76_string = var_50_string; // 0x1f4 Mov
	func_458(var_74_bool, var_75_object, var_76_string); // 0x1f5 Call
	var_77_bool = var_74_bool == 0; // 0x1f7 Not
	if(var_77_bool == 0) goto Label_507; // 0x1f8 JumpB
	var_51_int = 0; // 0x1f9 MovI
	goto Label_509; // 0x1fa Jump
	
Label_509:
	var_78_float = 0; var_79_float = 0; var_80_float = 0; // 0x1fd PushV
	var_81_int = var_49_int + var_51_int; // 0x1fe Add
	var_82_float = 100.0; // 0x1ff PushF
	var_79_float = var_81_int / var_81_int; // 0x200 Div2
	var_80_float = 1; // 0x201 MovI
	func_672(var_78_float, var_79_float, var_80_float); // 0x202 Call
	var_52_float = var_78_float; // 0x203 Mov
	var_83_string = "health"; // 0x205 PushS
	GetProperty(var_83_string, var_53_float); // 0x206 ObjFunc
	var_84_int = 1; // 0x208 PushI
	var_85_int = var_84_int - var_52_float; // 0x209 Sub
	var_54_float = var_41_float * var_85_int; // 0x20a Mult2
	var_86_string = "health"; // 0x20b PushS
	var_87_float = 0; var_88_float = 0; var_89_float = 0; var_90_float = 0; // 0x20c PushV
	var_88_float = var_53_float - var_54_float; // 0x20d Sub2
	var_89_float = 0; // 0x20e MovI
	var_90_float = 1; // 0x20f MovI
	func_679(var_87_float, var_88_float, var_89_float, var_90_float); // 0x210 Call
	SetProperty(var_86_string, var_87_float); // 0x212 ObjFunc
	var_39_float = var_54_float; // 0x214 Mov
	return 12; // 0x215 Return
	
Label_507:
	GetProperty(var_50_string, var_51_int); // 0x1fb ObjFunc
	
Label_489:
	var_93_string = "armor"; // 0x1e9 PushS
	GetProperty(var_93_string, var_49_int); // 0x1ea ObjFunc
}


func_95(var_75_object, var_76_bool)
{
	StopGroup0(); // 0x60 Func
	var_77_object = Obj(); var_78_bool = 0; // 0x62 PushV
	var_77_object = var_75_object; // 0x63 Mov
	var_78_bool = var_76_bool; // 0x64 Mov
	TaskCall(1); // 0x65 TaskCall
	func_106(var_79_object, var_80_bool, var_77_object, var_78_bool); // 0x66 Call
	TaskReturn(); // 0x67 TaskReturn
	return 0; // 0x69 Return
}


func_865(var_169_cvector)
{
	var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_bool = 0; var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_cvector = CVector(0,0,0); var_178_float = 0; var_179_bool = 0; // 0x361 PushV
	GetPosition(var_175_cvector); // 0x362 Func
	GetHeight(var_176_float); // 0x364 Func
	var_180_float = GetByIndex(var_175_cvector, 1); // 0x366 PushE
	var_181_int = 2; // 0x367 PushI
	var_182_float = var_176_float / var_181_int; // 0x368 Div
	var_180_float = var_180_float + var_182_float; // 0x369 Add2
	SetByIndex(var_175_cvector, 1) = var_180_float; // 0x36a PopE
	var_177_cvector = var_169_cvector - var_175_cvector; // 0x36b Sub2
	var_183_int = var_177_cvector | var_177_cvector; // 0x36c Or
	var_178_float = sqrt(var_183_int); // 0x36d Sqrt2
	var_184_int = 50; // 0x36e PushI
	var_185_bool = var_178_float < var_184_int; // 0x36f LT
	if(var_185_bool == 0) goto Label_883; // 0x370 JumpB
	var_179_bool = 0; // 0x371 MovB
	goto Label_887; // 0x372 Jump
	
Label_887:
	var_186_string = "all"; // 0x377 PushS
	var_187_bool = var_179_bool; // 0x378 Push
	if(var_187_bool == 0) goto Label_892; // 0x379 JumpB
	var_188_string = "cattack"; // 0x37a PushS
	goto Label_893; // 0x37b Jump
	
Label_893:
	PlayAnimation(var_186_string, var_188_string); // 0x37d Func
	return 10; // 0x37f Return
	
Label_892:
	var_189_string = "attack"; // 0x37c PushS
	
Label_883:
	var_190_float = GetByIndex(var_177_cvector, 1); // 0x373 PushE
	var_191_float = var_190_float / var_178_float; // 0x374 Div
	var_192_float = -0.14286; // 0x375 PushF
	var_179_bool = var_191_float < var_192_float; // 0x376 LT2
}


func_1123(var_78_bool, var_79_object)
{
	var_78_bool = 0; // 0x464 MovB
	var_80_bool = var_79_object != 0; // 0x465 NullNeq
	if(var_80_bool == 0) goto Label_1135; // 0x466 JumpB
	var_81_float = 0; var_82_object = Obj(); // 0x467 PushV
	var_82_object = var_79_object; // 0x468 Mov
	func_450(var_82_object); // 0x469 Call
	var_83_float = 302500.0; // 0x46b PushF
	var_84_bool = var_81_float <= var_83_float; // 0x46c LE
	if(var_84_bool == 0) goto Label_1135; // 0x46d JumpB
	var_78_bool = 1; // 0x46e MovB
	
Label_1135:
	return 0; // 0x46f Return
}


func_998(var_4_bool, var_5_object, var_6_object)
{
	var_7_float = 0; var_8_bool = 0; var_9_float = 0; var_10_bool = 0; // 0x3e6 PushV
	var_11_bool = 0; var_12_object = Obj(); var_13_string = ""; // 0x3e7 PushV
	var_12_object = var_6_object; // 0x3e8 Mov
	var_13_string = "reputation"; // 0x3e9 MovS
	func_458(var_11_bool, var_12_object, var_13_string); // 0x3ea Call
	var_20_bool = var_11_bool == 0; // 0x3ec Not
	if(var_20_bool == 0) goto Label_1008; // 0x3ed JumpB
	var_4_bool = 0; // 0x3ee MovB
	return 4; // 0x3ef Return
	
Label_1008:
	var_21_string = "reputation"; // 0x3f0 PushS
	GetProperty(var_21_string, var_9_float); // 0x3f1 ObjFunc
	var_22_float = 0.5; // 0x3f3 PushF
	var_23_bool = var_9_float < var_22_float; // 0x3f4 LT
	if(var_23_bool == 0) goto Label_1016; // 0x3f5 JumpB
	var_4_bool = 0; // 0x3f6 MovB
	return 4; // 0x3f7 Return
	
Label_1016:
	CanSee(var_10_bool, var_5_object); // 0x3f8 Func
	var_24_bool = 0; // 0x3fa PushV
	var_24_bool = 1; // 0x3fb MovB
	var_25_bool = var_10_bool; // 0x3fc Push
	if(var_25_bool == 0) goto Label_1030; // 0x3fd JumpB
	var_26_float = 0; var_27_object = Obj(); // 0x3fe PushV
	var_27_object = var_5_object; // 0x3ff Mov
	func_450(var_27_object); // 0x400 Call
	var_34_float = 160000.0; // 0x402 PushF
	var_35_bool = var_26_float <= var_34_float; // 0x403 LE
	if(var_35_bool == 0) goto Label_1030; // 0x404 JumpB
	var_24_bool = 0; // 0x405 MovB
	
Label_1030:
	if(var_24_bool == 0) goto Label_1036; // 0x406 JumpB
	var_36_float = -0.2; // 0x407 PushF
	ReportReputationChange(var_5_object, var_6_object, var_36_float); // 0x408 Func
	var_4_bool = 1; // 0x40a MovB
	return 4; // 0x40b Return
	
Label_1036:
	var_4_bool = 0; // 0x40c MovB
	return 4; // 0x40d Return
}


func_106(var_0_object, var_1_object, var_77_object, var_78_bool)
{
	var_0_object = var_77_object; // 0x6b TMov
	var_1_object = var_78_bool; // 0x6c TMov
	Face(var_0_object); // 0x6d Func
	
Label_111:
	var_81_bool = 0; // 0x6f PushV
	var_81_bool = 1; // 0x70 MovB
	func_809(var_81_bool); // 0x71 Call
	var_114_bool = 1; // 0x73 PushB
	SetAttackState(var_114_bool); // 0x74 Func
	var_115_string = "all"; // 0x76 PushS
	var_116_string = "attack_on"; // 0x77 PushS
	PlayAnimation(var_115_string, var_116_string); // 0x78 Func
	WaitForAnimEnd(); // 0x7a Func
	
Label_124:
	var_117_bool = 0; // 0x7c PushV
	var_117_bool = 0; // 0x7d MovB
	var_118_bool = 0; // 0x7e PushV
	var_118_bool = 1; // 0x7f MovB
	var_119_bool = var_0_object == 0; // 0x80 NullEq
	if(var_119_bool == 0) goto Label_133; // 0x81 JumpB
	var_120_bool = var_1_object == 0; // 0x82 Not
	if(var_120_bool == 0) goto Label_133; // 0x83 JumpB
	var_118_bool = 0; // 0x84 MovB
	
Label_133:
	if(var_118_bool == 0) goto Label_151; // 0x85 JumpB
	var_121_bool = 0; // 0x86 PushV
	var_121_bool = 1; // 0x87 MovB
	var_122_bool = 0; var_123_object = Obj(); // 0x88 PushV
	var_123_object = var_0_object; // 0x89 MovT
	func_1190(var_122_bool, var_123_object); // 0x8a Call
	var_144_bool = var_122_bool == 0; // 0x8c Not
	if(var_144_bool == 0) goto Label_149; // 0x8d JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0x8e PushV
	var_146_object = var_0_object; // 0x8f MovT
	func_1123(var_145_bool, var_146_object); // 0x90 Call
	var_152_bool = var_145_bool == 0; // 0x92 Not
	if(var_152_bool == 0) goto Label_149; // 0x93 JumpB
	var_121_bool = 0; // 0x94 MovB
	
Label_149:
	if(var_121_bool == 0) goto Label_151; // 0x95 JumpB
	var_117_bool = 1; // 0x96 MovB
	
Label_151:
	if(var_117_bool == 0) goto Label_153; // 0x97 JumpB
	goto Label_160; // 0x98 Jump
	
Label_160:
	var_0_object = 0; // 0xa0 SetNullT
	var_153_bool = 0; // 0xa1 PushB
	SetAttackState(var_153_bool); // 0xa2 Func
	var_154_bool = 0; // 0xa4 PushV
	var_154_bool = 0; // 0xa5 MovB
	func_809(var_154_bool); // 0xa6 Call
	StopAsync(); // 0xa8 Func
	var_155_string = "all"; // 0xaa PushS
	var_156_string = "attack_off"; // 0xab PushS
	PlayAnimation(var_155_string, var_156_string); // 0xac Func
	WaitForAnimEnd(); // 0xae Func
	var_157_bool = var_0_object != 0; // 0xb0 NullNeq
	if(var_157_bool == 0) goto Label_111; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_153:
	var_158_object = Obj(); // 0x99 PushV
	var_158_object = var_0_object; // 0x9a MovT
	func_896(var_158_object); // 0x9b Call
	WaitForAnimEnd(); // 0x9d Func
	goto Label_124; // 0x9f Jump
}


func_1136(var_5_bool, var_6_object)
{
	var_5_bool = 0; // 0x471 MovB
	var_7_bool = 0; var_8_object = Obj(); // 0x472 PushV
	var_8_object = var_6_object; // 0x473 Mov
	func_1190(var_7_bool, var_8_object); // 0x474 Call
	if(var_7_bool == 0) goto Label_1149; // 0x476 JumpB
	var_61_bool = 0; var_62_object = Obj(); // 0x477 PushV
	var_62_object = var_6_object; // 0x478 Mov
	func_1123(var_61_bool, var_62_object); // 0x479 Call
	if(var_61_bool == 0) goto Label_1149; // 0x47b JumpB
	var_5_bool = 1; // 0x47c MovB
	
Label_1149:
	return 0; // 0x47d Return
}


func_763(var_70_int, var_71_string)
{
	var_72_int = 0; var_73_int = 0; // 0x2fb PushV
	GetInvItemByName(var_73_int, var_71_string); // 0x2fc Func
	var_70_int = var_73_int; // 0x2fe Mov
	return 2; // 0x2ff Return
}


func_1150(var_5_bool, var_6_object)
{
	var_5_bool = 0; // 0x47f MovB
	var_7_bool = 0; var_8_object = Obj(); // 0x480 PushV
	var_8_object = var_6_object; // 0x481 Mov
	func_1190(var_7_bool, var_8_object); // 0x482 Call
	if(var_7_bool == 0) goto Label_1163; // 0x484 JumpB
	var_61_bool = 0; var_62_object = Obj(); // 0x485 PushV
	var_62_object = var_6_object; // 0x486 Mov
	func_1123(var_61_bool, var_62_object); // 0x487 Call
	if(var_61_bool == 0) goto Label_1163; // 0x489 JumpB
	var_5_bool = 1; // 0x48a MovB
	
Label_1163:
	return 0; // 0x48b Return
}


