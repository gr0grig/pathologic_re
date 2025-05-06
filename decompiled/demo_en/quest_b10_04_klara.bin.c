task_0_event_26(var_0_cvector, var_1_bool, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0; // 0x6 PushV
	var_5_string = "cleanup"; // 0x7 PushS
	var_6_bool = var_2_string == var_5_string; // 0x8 Eq
	if(var_6_bool == 0) goto Label_21; // 0x9 JumpB
	var_1_bool = 1; // 0xa TMovB
	IsLoaded(var_4_bool); // 0xb Func
	var_7_bool = var_4_bool == 0; // 0xd Not
	if(var_7_bool == 0) goto Label_20; // 0xe JumpB
	var_8_object = Obj(); // 0xf PushV
	func_395(var_8_object); // 0x10 NEW_2
	RemoveActor(var_8_object); // 0x12 Func
	
Label_20:
	goto Label_25; // 0x14 Jump
	
Label_25:
	return 2; // 0x19 Return
	
Label_21:
	var_11_string = "restore"; // 0x15 PushS
	var_12_bool = var_2_string == var_11_string; // 0x16 Eq
	if(var_12_bool == 0) goto Label_25; // 0x17 JumpB
	var_1_bool = 0; // 0x18 TMovB
}


task_0_event_6(var_0_cvector, var_1_bool)
{
	var_2_bool = var_1_bool; // 0x1a PushT
	if(var_2_bool == 0) goto Label_35; // 0x1b JumpB
	var_3_object = Obj(); // 0x1c PushV
	func_395(var_3_object); // 0x1d NEW_2
	RemoveActor(var_3_object); // 0x1f Func
	Hold(); // 0x21 Func
	
Label_35:
	func_150(); // 0x24 NEW_2
	return 0; // 0x26 Return
}


task_0_event_5(var_0_cvector, var_1_bool)
{
	func_165(); // 0x28 NEW_2
	return 0; // 0x2a Return
}


task_0_event_7(var_0_cvector, var_1_bool, var_2_int)
{
	var_3_int = 10; // 0x71 PushI
	var_4_bool = var_2_int == var_3_int; // 0x72 Eq
	if(var_4_bool == 0) goto Label_149; // 0x73 JumpB
	func_108(); // 0x75 NEW_2
	var_6_bool = 0; // 0x77 PushV
	var_6_bool = 0; // 0x78 MovB
	var_7_bool = 0; // 0x79 PushV
	func_322(var_7_bool); // 0x7a NEW_2
	if(var_7_bool == 0) goto Label_130; // 0x7c JumpB
	var_10_bool = 0; // 0x7d PushV
	func_77(var_10_bool); // 0x7e NEW_2
	if(var_10_bool == 0) goto Label_130; // 0x80 JumpB
	var_6_bool = 1; // 0x81 MovB
	
Label_130:
	if(var_6_bool == 0) goto Label_143; // 0x82 JumpB
	var_27_bool = 0; // 0x83 PushV
	func_57(var_27_bool); // 0x84 NEW_2
	if(var_27_bool == 0) goto Label_142; // 0x86 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0x87 PushV
	var_48_object = Obj(); // 0x88 PushV
	func_395(var_48_object); // 0x89 NEW_2
	var_47_object = var_48_object; // 0x8a Mov
	func_327(var_47_object); // 0x8c NEW_2
	
Label_142:
	goto Label_149; // 0x8e Jump
	
Label_149:
	return 0; // 0x95 Return
	
Label_143:
	func_72(var_2_int); // 0x90 NEW_2
	func_99(); // 0x93 NEW_2
}


task_0_event_45(var_0_cvector, var_1_bool, var_2_bool)
{
	var_3_bool = var_2_bool; // 0xb3 Push
	if(var_3_bool == 0) goto Label_185; // 0xb4 JumpB
	func_99(); // 0xb6 NEW_2
	goto Label_189; // 0xb8 Jump
	
Label_189:
	return 0; // 0xbd Return
	
Label_185:
	var_9_string = ""; // 0xb9 PushV
	var_9_string = "Neutral"; // 0xba MovS
	func_364(var_9_string); // 0xbb NEW_2
}


task_0_event_0(var_0_cvector, var_1_bool, var_2_object)
{
	var_3_bool = 0; var_4_bool = 0; // 0xbe PushV
	IsOverrideActive(var_4_bool); // 0xbf Func
	var_5_bool = var_4_bool == 0; // 0xc1 Not
	if(var_5_bool == 0) goto Label_218; // 0xc2 JumpB
	EventDisable(0); // 0xc3 EventDisable
	func_290(); // 0xc5 NEW_2
	var_6_bool = 0; var_7_object = Obj(); // 0xc7 PushV
	var_7_object = var_2_object; // 0xc8 Mov
	func_313(var_7_object); // 0xc9 NEW_2
	EventEnable(0); // 0xcb EventEnable
	var_20_object = Obj(); // 0xcc PushV
	var_20_object = var_2_object; // 0xcd Mov
	func_0(); // 0xce NEW_2
	var_21_string = ""; // 0xd0 PushV
	var_21_string = "Neutral"; // 0xd1 MovS
	func_364(var_21_string); // 0xd2 NEW_2
	func_108(); // 0xd5 NEW_2
	func_99(); // 0xd8 NEW_2
	
Label_218:
	return 2; // 0xda Return
}


main(var_0_cvector, var_1_bool)
{
	func_43(var_1_bool); // 0x3 NEW_2
	return 0; // 0x5 Return
}


func_0()
{
	return 0; // 0x1 Return
}


func_395(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x18b PushV
	self(var_50_object); // 0x18c Func
	var_48_object = var_50_object; // 0x18e Mov
	return 2; // 0x18f Return
}


func_401(var_26_string, var_27_int)
{
	var_28_string = ""; var_29_string = ""; // 0x191 PushV
	var_29_string = "idle"; // 0x192 MovS
	var_30_int = var_27_int; // 0x193 Push
	if(var_30_int == 0) goto Label_406; // 0x194 JumpB
	var_29_string = var_29_string + var_27_int; // 0x195 Add2
	
Label_406:
	var_26_string = var_29_string; // 0x196 Mov
	return 2; // 0x197 Return
}


func_150()
{
	func_290(); // 0x97 NEW_2
	func_108(); // 0x9a NEW_2
	lshStopSpeech(); // 0x9c Func
	lshStopAnimation(); // 0x9e Func
	StopAsync(); // 0xa0 Func
	Hold(); // 0xa2 Func
	return 0; // 0xa4 Return
}


func_408(var_20_int)
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x198 PushV
	var_23_int = 0; // 0x199 MovI
	
Label_410:
	var_25_string = "all"; // 0x19a PushS
	var_26_string = ""; var_27_int = 0; // 0x19b PushV
	var_27_int = var_23_int; // 0x19c Mov
	func_401(var_26_string, var_27_int); // 0x19d NEW_2
	HasAnimation(var_24_bool, var_25_string, var_26_string); // 0x19f Func
	var_31_bool = var_24_bool == 0; // 0x1a1 Not
	if(var_31_bool == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_423; // 0x1a3 Jump
	
Label_423:
	var_20_int = var_23_int; // 0x1a7 Mov
	return 4; // 0x1a8 Return
	
Label_420:
	var_32_int = 1; // 0x1a4 PushI
	var_23_int = var_23_int + var_32_int; // 0x1a5 Add2
	goto Label_410; // 0x1a6 Jump
}


func_288(var_40_bool)
{
	var_40_bool = 1; // 0x120 MovB
	return 0; // 0x121 Return
}


func_290()
{
	StopAnimation(); // 0x122 Func
	StopGroup0(); // 0x124 Func
	return 0; // 0x126 Return
}


func_165()
{
	StopGroup0(); // 0xa5 Func
	func_108(); // 0xa8 NEW_2
	var_3_string = ""; // 0xaa PushV
	var_3_string = "Neutral"; // 0xab MovS
	func_364(var_3_string); // 0xac NEW_2
	func_99(); // 0xaf NEW_2
	return 0; // 0xb1 Return
}


func_295(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x127 PushV
	GetPosition(var_22_cvector); // 0x128 Func
	GetPosition(var_23_cvector); // 0x12a ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x12c Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x12d Or2
	return 6; // 0x12e Return
}


func_425(var_76_bool)
{
	var_76_bool = 1; // 0x1a9 MovB
	return 0; // 0x1aa Return
}


func_43(var_0_cvector)
{
	var_2_bool = 0; // 0x2b PushV
	func_322(var_2_bool); // 0x2c NEW_2
	var_5_bool = var_2_bool == 0; // 0x2e Not
	if(var_5_bool == 0) goto Label_50; // 0x2f JumpB
	Hold(); // 0x30 Func
	
Label_50:
	GetDirection(var_0_cvector); // 0x32 Func
	
Label_52:
	func_219(); // 0x35 NEW_2
	goto Label_52; // 0x37 Jump
}


func_303(var_10_bool, var_11_cvector)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; // 0x12f PushV
	GetPosition(var_15_cvector); // 0x130 Func
	var_16_cvector = var_11_cvector - var_15_cvector; // 0x132 Sub2
	var_18_float = GetByIndex(var_16_cvector, 0); // 0x133 PushE
	var_19_float = GetByIndex(var_16_cvector, 2); // 0x134 PushE
	Rotate(var_18_float, var_19_float, var_17_bool); // 0x135 Func
	var_10_bool = var_17_bool; // 0x137 Mov
	return 6; // 0x138 Return
}


func_313(var_6_bool)
{
	var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); // 0x139 PushV
	GetPosition(var_9_cvector); // 0x13a ObjFunc
	var_10_bool = 0; var_11_cvector = CVector(0,0,0); // 0x13c PushV
	var_11_cvector = var_9_cvector; // 0x13d Mov
	func_303(var_10_bool, var_11_cvector); // 0x13e NEW_2
	var_6_bool = var_10_bool; // 0x13f Mov
	return 2; // 0x141 Return
}


func_57(var_27_bool)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x39 PushV
	var_30_string = "player"; // 0x3a PushS
	FindActor(var_29_object, var_30_string); // 0x3b Func
	var_31_bool = var_29_object == 0; // 0x3d Not
	if(var_31_bool == 0) goto Label_65; // 0x3e JumpB
	var_27_bool = 0; // 0x3f MovB
	return 2; // 0x40 Return
	
Label_65:
	var_32_bool = 0; var_33_object = Obj(); // 0x41 PushV
	var_33_object = var_29_object; // 0x42 Mov
	func_313(var_33_object); // 0x43 NEW_2
	var_27_bool = var_32_bool; // 0x44 Mov
	return 2; // 0x46 Return
}


func_322(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x142 PushV
	IsLoaded(var_4_bool); // 0x143 Func
	var_2_bool = var_4_bool; // 0x145 Mov
	return 2; // 0x146 Return
}


func_327(var_46_bool)
{
	var_51_string = ""; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_string = ""; var_56_string = ""; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_string = ""; // 0x147 PushV
	var_56_string = "c"; // 0x148 MovS
	var_57_int = 0; // 0x149 MovI
	
Label_330:
	var_61_int = 1; // 0x14a PushI
	if(var_61_int == 0) goto Label_343; // 0x14b JumpB
	var_62_int = 1; // 0x14c PushI
	var_63_int = var_57_int + var_62_int; // 0x14d Add
	var_64_int = var_56_string + var_63_int; // 0x14e Add
	HasProperty(var_64_int, var_58_bool); // 0x14f ObjFunc
	var_65_bool = var_58_bool == 0; // 0x151 Not
	if(var_65_bool == 0) goto Label_340; // 0x152 JumpB
	goto Label_343; // 0x153 Jump
	
Label_343:
	var_66_bool = var_57_int == 0; // 0x157 Not
	if(var_66_bool == 0) goto Label_347; // 0x158 JumpB
	var_46_bool = 0; // 0x159 MovB
	return 10; // 0x15a Return
	
Label_347:
	var_59_int = 0; // 0x15b MovI
	var_67_int = 1; // 0x15c PushI
	var_68_bool = var_57_int > var_67_int; // 0x15d GT
	if(var_68_bool == 0) goto Label_353; // 0x15e JumpB
	irand(var_59_int, var_57_int); // 0x15f Func
	
Label_353:
	var_69_int = 1; // 0x161 PushI
	var_70_int = var_59_int + var_69_int; // 0x162 Add
	var_71_int = var_56_string + var_70_int; // 0x163 Add
	GetProperty(var_71_int, var_60_string); // 0x164 ObjFunc
	var_72_bool = 0; var_73_string = ""; // 0x166 PushV
	var_73_string = var_60_string; // 0x167 Mov
	func_380(var_72_bool, var_73_string); // 0x168 NEW_2
	var_46_bool = var_72_bool; // 0x169 Mov
	return 10; // 0x16b Return
	
Label_340:
	var_78_int = 1; // 0x154 PushI
	var_57_int = var_57_int + var_78_int; // 0x155 Add2
	goto Label_330; // 0x156 Jump
}


func_72(var_0_cvector)
{
	var_79_float = GetByIndex(var_0_cvector, 0); // 0x48 PushE
	var_80_float = GetByIndex(var_0_cvector, 2); // 0x49 PushE
	RotateAsync(var_79_float, var_80_float); // 0x4a Func
	return 0; // 0x4c Return
}


func_77(var_10_bool)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; // 0x4d PushV
	var_15_string = "player"; // 0x4e PushS
	FindActor(var_13_object, var_15_string); // 0x4f Func
	var_16_bool = var_13_object == 0; // 0x51 Not
	if(var_16_bool == 0) goto Label_85; // 0x52 JumpB
	var_10_bool = 0; // 0x53 MovB
	return 4; // 0x54 Return
	
Label_85:
	var_17_float = 0; var_18_object = Obj(); // 0x55 PushV
	var_18_object = var_13_object; // 0x56 Mov
	func_295(var_18_object); // 0x57 NEW_2
	var_25_float = 90000.0; // 0x59 PushF
	var_26_bool = var_17_float > var_25_float; // 0x5a GT
	if(var_26_bool == 0) goto Label_94; // 0x5b JumpB
	var_10_bool = 0; // 0x5c MovB
	return 4; // 0x5d Return
	
Label_94:
	CanSee(var_14_bool, var_13_object); // 0x5e Func
	var_10_bool = var_14_bool; // 0x60 Mov
	return 4; // 0x61 Return
}


func_219()
{
	var_6_int = 0; var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_int = 0; var_16_int = 0; var_17_bool = 0; // 0xdb PushV
	WaitForAnimEnd(); // 0xdc Func
	var_18_bool = 0; // 0xde PushV
	func_322(var_18_bool); // 0xdf NEW_2
	var_19_bool = var_18_bool == 0; // 0xe1 Not
	if(var_19_bool == 0) goto Label_228; // 0xe2 JumpB
	return 12; // 0xe3 Return
	
Label_228:
	var_20_int = 0; // 0xe4 PushV
	func_408(var_20_int); // 0xe5 NEW_2
	var_12_int = var_20_int; // 0xe6 Mov
	var_13_int = 0; // 0xe8 MovI
	
Label_233:
	var_33_bool = 0; // 0xe9 PushV
	var_33_bool = 0; // 0xea MovB
	var_34_int = 5; // 0xeb PushI
	var_35_bool = var_13_int < var_34_int; // 0xec LT
	if(var_35_bool == 0) goto Label_243; // 0xed JumpB
	var_36_bool = 0; // 0xee PushV
	func_322(var_36_bool); // 0xef NEW_2
	if(var_36_bool == 0) goto Label_243; // 0xf1 JumpB
	var_33_bool = 1; // 0xf2 MovB
	
Label_243:
	if(var_33_bool == 0) goto Label_285; // 0xf3 JumpB
	var_37_bool = var_12_int == 0; // 0xf4 Not
	if(var_37_bool == 0) goto Label_253; // 0xf5 JumpB
	var_38_int = 3; // 0xf6 PushI
	Sleep(var_38_int, var_14_bool); // 0xf7 Func
	var_39_bool = var_14_bool == 0; // 0xf9 Not
	if(var_39_bool == 0) goto Label_252; // 0xfa JumpB
	goto Label_285; // 0xfb Jump
	
Label_285:
	ResetAAS(); // 0x11d Func
	return 12; // 0x11f Return
	
Label_252:
	goto Label_274; // 0xfc Jump
	
Label_274:
	var_40_bool = 0; // 0x112 PushV
	func_288(var_40_bool); // 0x113 NEW_2
	var_41_bool = var_40_bool == 0; // 0x115 Not
	if(var_41_bool == 0) goto Label_280; // 0x116 JumpB
	goto Label_285; // 0x117 Jump
	
Label_280:
	ResetAAS(); // 0x118 Func
	var_42_int = 1; // 0x11a PushI
	var_13_int = var_13_int + var_42_int; // 0x11b Add2
	goto Label_233; // 0x11c Jump
	
Label_253:
	irand(var_15_int, var_12_int); // 0xfd Func
	var_43_int = 5; // 0xff PushI
	irand(var_16_int, var_43_int); // 0x100 Func
	var_44_int = 0; // 0x102 PushI
	var_45_bool = var_16_int != var_44_int; // 0x103 Neq
	if(var_45_bool == 0) goto Label_262; // 0x104 JumpB
	var_15_int = 0; // 0x105 MovI
	
Label_262:
	var_46_string = "all"; // 0x106 PushS
	var_47_string = ""; var_48_int = 0; // 0x107 PushV
	var_48_int = var_15_int; // 0x108 Mov
	func_401(var_47_string, var_48_int); // 0x109 NEW_2
	PlayAnimation(var_46_string, var_47_string); // 0x10b Func
	WaitForAnimEnd(var_17_bool); // 0x10d Func
	var_49_bool = var_17_bool == 0; // 0x10f Not
	if(var_49_bool == 0) goto Label_274; // 0x110 JumpB
	goto Label_285; // 0x111 Jump
}


func_99()
{
	var_33_float = 0; var_34_float = 0; // 0x63 PushV
	var_35_int = 8; // 0x64 PushI
	var_36_int = 16; // 0x65 PushI
	rand(var_34_float, var_35_int, var_36_int); // 0x66 Func
	var_37_int = 10; // 0x68 PushI
	SetTimer(var_37_int, var_34_float); // 0x69 Func
	return 2; // 0x6b Return
}


func_108()
{
	var_32_int = 10; // 0x6c PushI
	KillTimer(var_32_int); // 0x6d Func
	return 0; // 0x6f Return
}


func_364(var_21_string)
{
	var_22_bool = 0; var_23_float = 0; var_24_float = 0; var_25_bool = 0; var_26_float = 0; var_27_float = 0; // 0x16c PushV
	lshHasAnimation(var_25_bool, var_21_string); // 0x16d Func
	var_28_bool = var_25_bool; // 0x16f Push
	if(var_28_bool == 0) goto Label_375; // 0x170 JumpB
	lshGetAnimTimes(var_21_string, var_26_float, var_27_float); // 0x171 Func
	var_29_bool = 0; // 0x173 PushB
	lshPlayAnimation(var_26_float, var_27_float, var_29_bool); // 0x174 Func
	goto Label_379; // 0x176 Jump
	
Label_379:
	return 6; // 0x17b Return
	
Label_375:
	var_30_string = "Can't find lsh animation : "; // 0x177 PushS
	var_31_int = var_30_string + var_21_string; // 0x178 Add
	Trace(var_31_int); // 0x179 Func
}


func_380(var_72_bool, var_73_string)
{
	var_74_bool = 0; var_75_bool = 0; // 0x17c PushV
	var_76_bool = 0; // 0x17d PushV
	func_425(var_76_bool); // 0x17e NEW_2
	if(var_76_bool == 0) goto Label_393; // 0x180 JumpB
	lshHasSpeech(var_75_bool, var_73_string); // 0x181 Func
	var_77_bool = var_75_bool; // 0x183 Push
	if(var_77_bool == 0) goto Label_393; // 0x184 JumpB
	lshPlaySpeech(var_73_string); // 0x185 Func
	var_72_bool = 1; // 0x187 MovB
	return 2; // 0x188 Return
	
Label_393:
	var_72_bool = 0; // 0x189 MovB
	return 2; // 0x18a Return
}


