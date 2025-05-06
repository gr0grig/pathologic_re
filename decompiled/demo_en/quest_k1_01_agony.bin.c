task_0_event_5(var_0_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_26(var_0_int, var_1_string)
{
	var_2_string = "heal"; // 0xe PushS
	var_3_bool = var_1_string == var_2_string; // 0xf Eq
	if(var_3_bool == 0) goto Label_22; // 0x10 JumpB
	var_4_bool = 0; var_5_string = ""; var_6_string = ""; // 0x11 PushV
	var_5_string = "quest_k1_01"; // 0x12 MovS
	var_6_string = "cure_worker"; // 0x13 MovS
	func_341(var_4_bool, var_5_string, var_6_string); // 0x14 NEW_2
	
Label_22:
	return 0; // 0x16 Return
}


task_1_event_0(var_0_int, var_1_object)
{
	return 0; // 0x19 Return
}


task_1_event_41(var_0_int, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x67 PushV
	var_6_int = var_0_int; // 0x68 PushT
	if(var_6_int == 0) goto Label_107; // 0x69 JumpB
	return 4; // 0x6a Return
	
Label_107:
	IsPlayerActor(var_1_object, var_4_bool); // 0x6b Func
	var_7_bool = var_4_bool; // 0x6d Push
	if(var_7_bool == 0) goto Label_137; // 0x6e JumpB
	IsDead(var_5_bool); // 0x6f Func
	var_8_bool = var_5_bool == 0; // 0x71 Not
	if(var_8_bool == 0) goto Label_137; // 0x72 JumpB
	SetDeathState(); // 0x73 Func
	var_0_int = -1; // 0x75 TMovI
	var_9_bool = 0; var_10_object = Obj(); var_11_float = 0; // 0x76 PushV
	var_10_object = var_1_object; // 0x77 Mov
	var_11_float = -0.3; // 0x78 MovF
	func_296(var_9_bool, var_10_object, var_11_float); // 0x79 NEW_2
	var_47_string = "death"; // 0x7b PushS
	var_48_cvector = CVector(0.0, 40.0, 0.0); // 0x7c PushVec
	PlayGlobalSound(var_47_string, var_48_cvector); // 0x7d Func
	var_49_string = "all"; // 0x7f PushS
	var_50_string = "agony_die"; // 0x80 PushS
	PlayAnimation(var_49_string, var_50_string); // 0x81 Func
	WaitForAnimEnd(); // 0x83 Func
	var_51_string = "all"; // 0x85 PushS
	var_52_string = "agony_die"; // 0x86 PushS
	LockAnimationEnd(var_51_string, var_52_string); // 0x87 Func
	
Label_137:
	return 4; // 0x89 Return
}


task_1_event_6(var_0_int)
{
	func_393(); // 0x8b NEW_2
	func_174(); // 0x8e NEW_2
	var_5_int = var_0_int; // 0x90 PushT
	if(var_5_int == 0) goto Label_151; // 0x91 JumpB
	var_6_object = Obj(); // 0x92 PushV
	func_274(var_6_object); // 0x93 NEW_2
	RemoveActor(var_6_object); // 0x95 Func
	
Label_151:
	TaskCall(0); // 0x98 TaskCall
	func_0(); // 0x99 NEW_2
	TaskReturn(); // 0x9a TaskReturn
	return 0; // 0x9c Return
}


task_1_event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x9d PushV
	var_5_string = "agony"; // 0x9e PushS
	var_6_bool = var_2_string == var_5_string; // 0x9f Eq
	if(var_6_bool == 0) goto Label_168; // 0xa0 JumpB
	var_7_string = "agony"; // 0xa1 PushS
	GetProperty(var_7_string, var_4_float); // 0xa2 Func
	var_8_float = 0.001; // 0xa4 PushF
	var_9_bool = var_4_float < var_8_float; // 0xa5 LT
	if(var_9_bool == 0) goto Label_168; // 0xa6 JumpB
	var_0_int = 1; // 0xa7 TMovI
	
Label_168:
	var_10_object = Obj(); var_11_string = ""; // 0xa8 PushV
	var_10_object = var_1_object; // 0xa9 Mov
	var_11_string = var_2_string; // 0xaa Mov
	func_353(); // 0xab NEW_2
	return 2; // 0xad Return
}


event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x161 PushV
	var_5_string = "health"; // 0x162 PushS
	var_6_bool = var_2_string == var_5_string; // 0x163 Eq
	if(var_6_bool == 0) goto Label_365; // 0x164 JumpB
	var_7_string = "health"; // 0x165 PushS
	GetProperty(var_7_string, var_4_float); // 0x166 Func
	var_8_int = 0; // 0x168 PushI
	var_9_bool = var_4_float <= var_8_int; // 0x169 LE
	if(var_9_bool == 0) goto Label_365; // 0x16a JumpB
	SignalDeath(var_1_object); // 0x16b Func
	
Label_365:
	return 2; // 0x16d Return
}


event_43(var_0_int, var_1_object, var_2_int, var_3_float, var_4_float, var_5_cvector, var_6_cvector)
{
	var_7_object = Obj(); var_8_int = 0; var_9_float = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); // 0x16f PushV
	var_7_object = var_1_object; // 0x170 Mov
	var_8_int = var_2_int; // 0x171 Mov
	var_9_float = var_3_float; // 0x172 Mov
	var_10_cvector = var_5_cvector; // 0x173 Mov
	var_11_cvector = var_6_cvector; // 0x174 Mov
	func_255(var_9_float, var_10_cvector, var_11_cvector); // 0x175 NEW_2
	return 0; // 0x177 Return
}


event_26(var_0_int, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x178 PushV
	var_4_string = "cleanup"; // 0x179 PushS
	var_5_bool = var_1_string == var_4_string; // 0x17a Eq
	if(var_5_bool == 0) goto Label_392; // 0x17b JumpB
	var_6_bool = GlobalVars[0]; // 0x17c PushGE
	var_6_bool = 1; // 0x17d MovB
	GlobalVars[0] = var_6_bool; // 0x17e PopGE
	IsLoaded(var_3_bool); // 0x17f Func
	var_7_bool = var_3_bool == 0; // 0x181 Not
	if(var_7_bool == 0) goto Label_392; // 0x182 JumpB
	var_8_object = Obj(); // 0x183 PushV
	func_274(var_8_object); // 0x184 NEW_2
	RemoveActor(var_8_object); // 0x186 Func
	
Label_392:
	return 2; // 0x188 Return
}


event_6(var_0_int)
{
	var_1_bool = GlobalVars[0]; // 0x189 PushGE
	if(var_1_bool == 0) goto Label_400; // 0x18a JumpB
	var_2_object = Obj(); // 0x18b PushV
	func_274(var_2_object); // 0x18c NEW_2
	RemoveActor(var_2_object); // 0x18e Func
	
Label_400:
	return 0; // 0x190 Return
}


main(var_0_int)
{
	var_1_bool = 0; var_2_bool = 0; // 0x1a PushV
	var_0_int = 0; // 0x1b TMovI
	RemoveEnvelope(); // 0x1c Func
	var_3_int = 50; // 0x1e PushI
	var_4_int = 40; // 0x1f PushI
	SetRTEnvelope(var_3_int, var_4_int); // 0x20 Func
	var_5_bool = 0; // 0x22 PushV
	func_269(var_5_bool); // 0x23 NEW_2
	var_8_bool = var_5_bool == 0; // 0x25 Not
	if(var_8_bool == 0) goto Label_44; // 0x26 JumpB
	TaskCall(0); // 0x28 TaskCall
	func_0(); // 0x29 NEW_2
	TaskReturn(); // 0x2a TaskReturn
	
Label_44:
	var_11_string = "agony"; // 0x2c PushS
	Is3DSoundLoaded(var_2_bool, var_11_string); // 0x2d Func
	var_12_bool = 0; // 0x2f PushV
	var_12_bool = 0; // 0x30 MovB
	var_13_bool = var_2_bool; // 0x31 Push
	if(var_13_bool == 0) goto Label_57; // 0x32 JumpB
	var_14_bool = 0; var_15_float = 0; // 0x33 PushV
	var_15_float = 0.33333; // 0x34 MovF
	func_291(var_14_bool, var_15_float); // 0x35 NEW_2
	if(var_14_bool == 0) goto Label_57; // 0x37 JumpB
	var_12_bool = 1; // 0x38 MovB
	
Label_57:
	if(var_12_bool == 0) goto Label_62; // 0x39 JumpB
	var_18_string = "agony"; // 0x3a PushS
	var_19_cvector = CVector(0.0, 40.0, 0.0); // 0x3b PushVec
	PlayGlobalSound(var_18_string, var_19_cvector); // 0x3c Func
	
Label_62:
	var_20_string = "all"; // 0x3e PushS
	var_21_string = "agony"; // 0x3f PushS
	PlayAnimation(var_20_string, var_21_string); // 0x40 Func
	WaitForAnimEnd(var_2_bool); // 0x42 Func
	var_22_int = 0; // 0x44 PushI
	var_23_bool = var_0_int > var_22_int; // 0x45 GT
	if(var_23_bool == 0) goto Label_94; // 0x46 JumpB
	var_24_bool = var_2_bool; // 0x47 Push
	if(var_24_bool == 0) goto Label_87; // 0x48 JumpB
	var_25_string = "sleep"; // 0x49 PushS
	var_26_cvector = CVector(0.0, 40.0, 0.0); // 0x4a PushVec
	PlayGlobalSound(var_25_string, var_26_cvector); // 0x4b Func
	var_27_string = "all"; // 0x4d PushS
	var_28_string = "agony_sleep"; // 0x4e PushS
	PlayAnimation(var_27_string, var_28_string); // 0x4f Func
	WaitForAnimEnd(); // 0x51 Func
	var_29_string = "all"; // 0x53 PushS
	var_30_string = "agony_sleep"; // 0x54 PushS
	LockAnimationEnd(var_29_string, var_30_string); // 0x55 Func
	
Label_87:
	SetDeathState(); // 0x57 Func
	func_23(); // 0x5a NEW_2
	goto Label_99; // 0x5c Jump
	
Label_99:
	Hold(); // 0x63 Func
	goto Label_99; // 0x65 Jump
	
Label_94:
	var_31_int = 0; // 0x5e PushI
	var_32_bool = var_0_int < var_31_int; // 0x5f LT
	if(var_32_bool == 0) goto Label_98; // 0x60 JumpB
	goto Label_99; // 0x61 Jump
	
Label_98:
	goto Label_44; // 0x62 Jump
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_9_bool = 0; // 0x2 PushV
	func_269(var_9_bool); // 0x3 NEW_2
	var_10_bool = var_9_bool == 0; // 0x5 Not
	if(var_10_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_291(var_14_bool, var_15_float)
{
	var_16_float = 0; var_17_float = 0; // 0x123 PushV
	rand(var_17_float); // 0x124 Func
	var_14_bool = var_17_float < var_15_float; // 0x126 LT2
	return 2; // 0x127 Return
}


func_296(var_9_bool, var_10_object, var_11_float)
{
	var_12_bool = var_10_object == 0; // 0x129 Not
	if(var_12_bool == 0) goto Label_301; // 0x12a JumpB
	var_9_bool = 0; // 0x12b MovB
	return 0; // 0x12c Return
	
Label_301:
	var_13_int = 0; // 0x12d PushI
	var_14_bool = var_11_float > var_13_int; // 0x12e GT
	if(var_14_bool == 0) goto Label_308; // 0x12f JumpB
	var_15_int = 8; // 0x130 PushI
	SendWorldWndMessage(var_15_int); // 0x131 Func
	goto Label_317; // 0x133 Jump
	
Label_317:
	var_16_float = 0; // 0x13d PushV
	var_16_float = var_11_float; // 0x13e Mov
	func_331(var_16_float); // 0x13f NEW_2
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0; // 0x141 PushV
	var_21_object = var_10_object; // 0x142 Mov
	var_22_string = "reputation"; // 0x143 MovS
	var_23_float = var_11_float; // 0x144 Mov
	var_24_float = 0; // 0x145 MovI
	var_25_float = 1; // 0x146 MovI
	func_189(var_20_bool, var_21_object, var_22_string, var_23_float, var_24_float, var_25_float); // 0x147 NEW_2
	var_9_bool = 1; // 0x149 MovB
	return 0; // 0x14a Return
	
Label_308:
	var_44_int = 0; // 0x134 PushI
	var_45_bool = var_11_float < var_44_int; // 0x135 LT
	if(var_45_bool == 0) goto Label_315; // 0x136 JumpB
	var_46_int = 9; // 0x137 PushI
	SendWorldWndMessage(var_46_int); // 0x138 Func
	goto Label_317; // 0x13a Jump
	
Label_315:
	var_9_bool = 0; // 0x13b MovB
	return 0; // 0x13c Return
}


func_331(var_16_float)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x14b PushV
	CreateFloatVector(var_18_object); // 0x14c Func
	add(var_16_float); // 0x14e ObjFunc
	var_19_int = 16; // 0x150 PushI
	SendWorldWndMessage(var_19_int, var_18_object); // 0x151 Func
	return 2; // 0x153 Return
}


func_269(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x10d PushV
	IsLoaded(var_7_bool); // 0x10e Func
	var_5_bool = var_7_bool; // 0x110 Mov
	return 2; // 0x111 Return
}


func_174()
{
	StopAnimation(); // 0xae Func
	return 0; // 0xb0 Return
}


func_177(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0xb1 PushV
	var_33_string = "HasProperty"; // 0xb2 PushS
	var_34_int = 2; // 0xb3 PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0xb4 FuncExist
	var_36_bool = var_35_bool == 0; // 0xb5 Not
	if(var_36_bool == 0) goto Label_185; // 0xb6 JumpB
	var_28_bool = 0; // 0xb7 MovB
	return 2; // 0xb8 Return
	
Label_185:
	HasProperty(var_30_string, var_32_bool); // 0xb9 ObjFunc
	var_28_bool = var_32_bool; // 0xbb Mov
	return 2; // 0xbc Return
}


func_274(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x112 PushV
	self(var_4_object); // 0x113 Func
	var_2_object = var_4_object; // 0x115 Mov
	return 2; // 0x116 Return
}


func_211(var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; // 0xd3 PushV
	var_33_bool = var_18_object == 0; // 0xd4 NullEq
	if(var_33_bool == 0) goto Label_215; // 0xd5 JumpB
	return 14; // 0xd6 Return
	
Label_215:
	IsDead(var_26_bool); // 0xd7 Func
	var_34_bool = var_26_bool; // 0xd9 Push
	if(var_34_bool == 0) goto Label_220; // 0xda JumpB
	return 14; // 0xdb Return
	
Label_220:
	GetSecondaryAnimationType(var_27_int); // 0xdc Func
	var_35_int = 0; // 0xde PushI
	var_36_bool = var_27_int < var_35_int; // 0xdf LT
	if(var_36_bool == 0) goto Label_226; // 0xe0 JumpB
	return 14; // 0xe1 Return
	
Label_226:
	GetPosition(var_28_cvector); // 0xe2 ObjFunc
	GetPosition(var_29_cvector); // 0xe4 Func
	GetDirection(var_30_cvector); // 0xe6 Func
	var_31_cvector = var_29_cvector - var_28_cvector; // 0xe8 Sub2
	var_37_float = GetByIndex(var_31_cvector, 0); // 0xe9 PushE
	var_38_float = GetByIndex(var_30_cvector, 0); // 0xea PushE
	var_39_float = var_37_float * var_38_float; // 0xeb Mult
	var_40_float = GetByIndex(var_31_cvector, 2); // 0xec PushE
	var_41_float = GetByIndex(var_30_cvector, 2); // 0xed PushE
	var_42_float = var_40_float * var_41_float; // 0xee Mult
	var_43_int = var_39_float + var_42_float; // 0xef Add
	var_44_int = 0; // 0xf0 PushI
	var_45_bool = var_43_int >= var_44_int; // 0xf1 GE
	if(var_45_bool == 0) goto Label_245; // 0xf2 JumpB
	var_32_string = "fhit"; // 0xf3 MovS
	goto Label_246; // 0xf4 Jump
	
Label_246:
	var_46_string = "hit_react"; // 0xf6 PushS
	var_47_string = "1"; // 0xf7 PushS
	var_48_int = var_32_string + var_47_string; // 0xf8 Add
	var_49_string = "2"; // 0xf9 PushS
	var_50_int = var_32_string + var_49_string; // 0xfa Add
	var_51_int = -10; // 0xfb PushI
	FadeSecondaryAnimation(var_46_string, var_48_int, var_50_int, var_51_int); // 0xfc Func
	return 14; // 0xfe Return
	
Label_245:
	var_32_string = "bhit"; // 0xf5 MovS
}


func_341(var_4_bool, var_5_string, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x155 PushV
	FindActor(var_8_object, var_5_string); // 0x156 Func
	var_9_bool = var_8_object == 0; // 0x158 NullEq
	if(var_9_bool == 0) goto Label_348; // 0x159 JumpB
	var_4_bool = 0; // 0x15a MovB
	return 2; // 0x15b Return
	
Label_348:
	Trigger(var_8_object, var_6_string); // 0x15c Func
	var_4_bool = 1; // 0x15e MovB
	return 2; // 0x15f Return
}


func_23()
{
	return 0; // 0x17 Return
}


func_280(var_38_float, var_39_float, var_40_float, var_41_float)
{
	var_42_bool = var_39_float < var_40_float; // 0x119 LT
	if(var_42_bool == 0) goto Label_285; // 0x11a JumpB
	var_38_float = var_40_float; // 0x11b Mov
	return 0; // 0x11c Return
	
Label_285:
	var_43_bool = var_39_float > var_41_float; // 0x11d GT
	if(var_43_bool == 0) goto Label_289; // 0x11e JumpB
	var_38_float = var_41_float; // 0x11f Mov
	return 0; // 0x120 Return
	
Label_289:
	var_38_float = var_39_float; // 0x121 Mov
	return 0; // 0x122 Return
}


func_189(var_20_bool, var_21_object, var_22_string, var_23_float, var_24_float, var_25_float)
{
	var_26_float = 0; var_27_float = 0; // 0xbd PushV
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0xbe PushV
	var_29_object = var_21_object; // 0xbf Mov
	var_30_string = var_22_string; // 0xc0 Mov
	func_177(var_28_bool, var_29_object, var_30_string); // 0xc1 NEW_2
	var_37_bool = var_28_bool == 0; // 0xc3 Not
	if(var_37_bool == 0) goto Label_199; // 0xc4 JumpB
	var_20_bool = 0; // 0xc5 MovB
	return 2; // 0xc6 Return
	
Label_199:
	GetProperty(var_22_string, var_27_float); // 0xc7 ObjFunc
	var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; // 0xc9 PushV
	var_39_float = var_27_float + var_23_float; // 0xca Add2
	var_40_float = var_24_float; // 0xcb Mov
	var_41_float = var_25_float; // 0xcc Mov
	func_280(var_38_float, var_39_float, var_40_float, var_41_float); // 0xcd NEW_2
	SetProperty(var_22_string, var_38_float); // 0xcf ObjFunc
	var_20_bool = 1; // 0xd1 MovB
	return 2; // 0xd2 Return
}


func_255(var_7_object, var_10_cvector, var_11_cvector)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0xff PushV
	GetScene(var_14_object); // 0x100 Func
	var_16_string = "scripted"; // 0x102 PushS
	var_17_string = "blood_dir.xml"; // 0x103 PushS
	AddActorByType(var_15_object, var_16_string, var_14_object, var_10_cvector, var_11_cvector, var_17_string); // 0x104 Func
	var_18_object = Obj(); // 0x106 PushV
	var_18_object = var_7_object; // 0x107 Mov
	func_211(var_18_object); // 0x108 NEW_2
	return 4; // 0x10a Return
}


