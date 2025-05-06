task_1_event_18(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_bool)
{
	var_6_int = 10; // 0x137 PushI
	var_7_bool = var_5_bool == var_6_int; // 0x138 Eq
	if(var_7_bool == 0) goto Label_316; // 0x139 JumpB
	var_0_bool = 1; // 0x13a TMovB
	goto Label_320; // 0x13b Jump
	
Label_320:
	return 0; // 0x140 Return
	
Label_316:
	var_8_int = 0; // 0x13c PushV
	var_8_int = var_5_bool; // 0x13d Mov
	func_2190(); // 0x13e NEW_2
}


task_2_event_32(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	var_5_bool = 0; // 0x1ae PushV
	var_5_bool = 0; // 0x1af MovB
	var_6_bool = var_0_bool == 0; // 0x1b0 Not
	if(var_6_bool == 0) goto Label_437; // 0x1b1 JumpB
	var_7_bool = var_1_bool; // 0x1b2 PushT
	if(var_7_bool == 0) goto Label_437; // 0x1b3 JumpB
	var_5_bool = 1; // 0x1b4 MovB
	
Label_437:
	if(var_5_bool == 0) goto Label_441; // 0x1b5 JumpB
	var_8_int = -1; // 0x1b6 PushI
	SetHandsItem(var_8_int); // 0x1b7 Func
	
Label_441:
	return 0; // 0x1b9 Return
}


task_3_event_13(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_string, var_7_bool, var_8_bool, var_9_string, var_10_bool)
{
	var_20_bool = 0; var_21_string = ""; var_22_bool = 0; var_23_bool = 0; var_24_string = ""; var_25_bool = 0; // 0x273 PushV
	IsWeaponHolstered(var_23_bool); // 0x274 Func
	var_26_bool = var_23_bool == 0; // 0x276 Not
	if(var_26_bool == 0) goto Label_651; // 0x277 JumpB
	func_752(); // 0x279 NEW_2
	GetCurrentWeapon(var_24_string); // 0x27b Func
	var_27_string = ""; // 0x27d PushV
	var_27_string = var_24_string; // 0x27e Mov
	func_468(var_27_string); // 0x27f NEW_2
	func_748(); // 0x282 NEW_2
	IsAltShooting(var_25_bool); // 0x284 Func
	var_642_bool = var_25_bool; // 0x286 Push
	if(var_642_bool == 0) goto Label_651; // 0x287 JumpB
	func_652(); // 0x289 NEW_2
	
Label_651:
	return 6; // 0x28b Return
}


task_3_event_36(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	var_5_bool = 0; var_6_string = ""; var_7_bool = 0; var_8_bool = 0; var_9_string = ""; var_10_bool = 0; // 0x28c PushV
	IsWeaponHolstered(var_8_bool); // 0x28d Func
	var_11_bool = var_8_bool == 0; // 0x28f Not
	if(var_11_bool == 0) goto Label_676; // 0x290 JumpB
	func_752(); // 0x292 NEW_2
	GetCurrentWeapon(var_9_string); // 0x294 Func
	var_13_string = ""; // 0x296 PushV
	var_13_string = var_9_string; // 0x297 Mov
	func_515(); // 0x298 NEW_2
	func_748(); // 0x29b NEW_2
	IsShooting(var_10_bool); // 0x29d Func
	var_19_bool = var_10_bool; // 0x29f Push
	if(var_19_bool == 0) goto Label_676; // 0x2a0 JumpB
	func_627(); // 0x2a2 NEW_2
	
Label_676:
	return 6; // 0x2a4 Return
}


task_3_event_15(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_752(); // 0x2a6 NEW_2
	TaskCall(0); // 0x2a9 TaskCall
	func_0(); // 0x2aa NEW_2
	TaskReturn(); // 0x2ab TaskReturn
	func_748(); // 0x2ae NEW_2
	return 0; // 0x2b0 Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_bool)
{
	var_6_bool = 0; var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_int = 0; // 0x2b1 PushV
	var_14_bool = 0; var_15_int = 0; // 0x2b2 PushV
	var_15_int = var_5_bool; // 0x2b3 Mov
	func_1985(var_14_bool, var_15_int); // 0x2b4 NEW_2
	if(var_14_bool == 0) goto Label_696; // 0x2b6 JumpB
	return 8; // 0x2b7 Return
	
Label_696:
	func_752(); // 0x2b9 NEW_2
	IsWeaponHolstered(var_10_bool); // 0x2bb Func
	var_130_bool = var_10_bool == 0; // 0x2bd Not
	if(var_130_bool == 0) goto Label_728; // 0x2be JumpB
	var_11_int = 0; // 0x2bf MovI
	
Label_704:
	var_131_string = "idle"; // 0x2c0 PushS
	var_132_int = 1; // 0x2c1 PushI
	var_133_int = var_11_int + var_132_int; // 0x2c2 Add
	var_134_int = var_131_string + var_133_int; // 0x2c3 Add
	HasAnimation(var_12_bool, var_134_int); // 0x2c4 Func
	var_135_bool = var_12_bool == 0; // 0x2c6 Not
	if(var_135_bool == 0) goto Label_713; // 0x2c7 JumpB
	goto Label_716; // 0x2c8 Jump
	
Label_716:
	var_136_int = var_11_int; // 0x2cc Push
	if(var_136_int == 0) goto Label_728; // 0x2cd JumpB
	irand(var_13_int, var_11_int); // 0x2ce Func
	var_137_string = "idle"; // 0x2d0 PushS
	var_138_int = 1; // 0x2d1 PushI
	var_139_int = var_13_int + var_138_int; // 0x2d2 Add
	var_140_int = var_137_string + var_139_int; // 0x2d3 Add
	PlayAnimation(var_140_int); // 0x2d4 Func
	WaitForAnimEnd(); // 0x2d6 Func
	
Label_728:
	func_748(); // 0x2d9 NEW_2
	return 8; // 0x2db Return
	
Label_713:
	var_146_int = 1; // 0x2c9 PushI
	var_11_int = var_11_int + var_146_int; // 0x2ca Add2
	goto Label_704; // 0x2cb Jump
}


task_3_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_bool)
{
	var_6_string = ""; var_7_string = ""; // 0x2dc PushV
	var_8_int = 11; // 0x2dd PushI
	var_9_bool = var_5_bool == var_8_int; // 0x2de Eq
	if(var_9_bool == 0) goto Label_743; // 0x2df JumpB
	GetCurrentWeapon(var_7_string); // 0x2e0 Func
	var_10_string = ""; // 0x2e2 PushV
	var_10_string = var_7_string; // 0x2e3 Mov
	func_505(var_10_string); // 0x2e4 NEW_2
	goto Label_747; // 0x2e6 Jump
	
Label_747:
	return 2; // 0x2eb Return
	
Label_743:
	var_38_int = 0; // 0x2e7 PushV
	var_38_int = var_5_bool; // 0x2e8 Mov
	func_2190(); // 0x2e9 NEW_2
}


task_4_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_bool)
{
	var_6_int = 10; // 0x3b3 PushI
	var_7_bool = var_5_bool == var_6_int; // 0x3b4 Eq
	if(var_7_bool == 0) goto Label_952; // 0x3b5 JumpB
	var_0_bool = 1; // 0x3b6 TMovB
	goto Label_956; // 0x3b7 Jump
	
Label_956:
	return 0; // 0x3bc Return
	
Label_952:
	var_8_int = 0; // 0x3b8 PushV
	var_8_int = var_5_bool; // 0x3b9 Mov
	func_2190(); // 0x3ba NEW_2
}


task_5_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int)
{
	var_6_int = 11; // 0x421 PushI
	var_7_bool = var_5_int == var_6_int; // 0x422 Eq
	if(var_7_bool == 0) goto Label_1063; // 0x423 JumpB
	func_1037(); // 0x425 NEW_2
	
Label_1063:
	var_33_int = 0; // 0x427 PushV
	var_33_int = var_5_int; // 0x428 Mov
	func_2190(); // 0x429 NEW_2
	return 0; // 0x42b Return
}


event_44(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1860(); // 0x75f NEW_2
	func_1808(); // 0x762 NEW_2
	return 0; // 0x764 Return
}


event_20(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1849(); // 0x766 NEW_2
	func_1808(); // 0x769 NEW_2
	return 0; // 0x76b Return
}


event_21(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1829(); // 0x76d NEW_2
	func_1818(); // 0x770 NEW_2
	return 0; // 0x772 Return
}


event_45(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1839(); // 0x774 NEW_2
	return 0; // 0x776 Return
}


event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int)
{
	var_6_bool = 0; var_7_int = 0; // 0x80d PushV
	var_7_int = var_5_int; // 0x80e Mov
	func_1985(var_6_bool, var_7_int); // 0x80f NEW_2
	return 0; // 0x811 Return
}


event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_string)
{
	var_6_string = "die"; // 0x813 PushS
	var_7_bool = var_5_string == var_6_string; // 0x814 Eq
	if(var_7_bool == 0) goto Label_2073; // 0x815 JumpB
	func_1787(); // 0x817 NEW_2
	
Label_2073:
	return 0; // 0x819 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_float = 0; var_11_object = Obj(); var_12_object = Obj(); // 0x81a PushV
	var_13_string = "health"; // 0x81b PushS
	var_14_bool = var_6_string == var_13_string; // 0x81c Eq
	if(var_14_bool == 0) goto Label_2087; // 0x81d JumpB
	var_15_string = "health"; // 0x81e PushS
	GetProperty(var_15_string, var_10_float); // 0x81f Func
	var_16_float = 0.001; // 0x821 PushF
	var_17_bool = var_10_float < var_16_float; // 0x822 LT
	if(var_17_bool == 0) goto Label_2086; // 0x823 JumpB
	SignalDeath(var_5_object); // 0x824 Func
	
Label_2086:
	goto Label_2099; // 0x826 Jump
	
Label_2099:
	CreateStringVector(var_12_object); // 0x833 Func
	add(var_6_string); // 0x835 ObjFunc
	var_18_int = 10; // 0x837 PushI
	SendWorldWndMessage(var_18_int, var_12_object); // 0x838 Func
	return 6; // 0x83a Return
	
Label_2087:
	var_19_string = "reputation"; // 0x827 PushS
	var_20_bool = var_6_string == var_19_string; // 0x828 Eq
	if(var_20_bool == 0) goto Label_2099; // 0x829 JumpB
	GetScene(var_11_object); // 0x82a Func
	var_21_string = "prc"; // 0x82c PushS
	var_22_object = Obj(); // 0x82d PushV
	func_1519(var_22_object); // 0x82e NEW_2
	BroadcastMessage(var_21_string, var_22_object, var_11_object); // 0x830 Func
	var_11_object = 0; // 0x832 SetNull
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	var_6_bool = 0; // 0x83d PushV
	func_1681(var_6_bool); // 0x83e NEW_2
	var_10_bool = var_6_bool == 0; // 0x840 Not
	if(var_10_bool == 0) goto Label_2117; // 0x841 JumpB
	func_1787(); // 0x843 NEW_2
	
Label_2117:
	return 0; // 0x845 Return
}


event_31(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_float, var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x846 PushV
	var_10_bool = var_5_object == 0; // 0x847 Not
	if(var_10_bool == 0) goto Label_2122; // 0x848 JumpB
	return 2; // 0x849 Return
	
Label_2122:
	var_11_object = GlobalVars[2]; // 0x84a PushGE
	in(var_9_bool, var_5_object); // 0x84b ObjFunc
	var_12_bool = var_9_bool; // 0x84d Push
	if(var_12_bool == 0) goto Label_2132; // 0x84e JumpB
	var_13_string = "Reputation is not changed for enemy: "; // 0x84f PushS
	var_14_int = var_13_string + var_5_object; // 0x850 Add
	Trace(var_14_int); // 0x851 Func
	return 2; // 0x853 Return
	
Label_2132:
	var_15_bool = var_7_bool == 0; // 0x854 Not
	if(var_15_bool == 0) goto Label_2140; // 0x855 JumpB
	var_16_object = GlobalVars[1]; // 0x856 PushGE
	in(var_9_bool, var_5_object); // 0x857 ObjFunc
	var_17_bool = var_9_bool; // 0x859 Push
	if(var_17_bool == 0) goto Label_2140; // 0x85a JumpB
	return 2; // 0x85b Return
	
Label_2140:
	var_18_object = GlobalVars[1]; // 0x85c PushGE
	add(var_5_object); // 0x85d ObjFunc
	var_19_bool = 0; var_20_object = Obj(); var_21_float = 0; // 0x85f PushV
	var_22_object = Obj(); // 0x860 PushV
	func_1519(var_22_object); // 0x861 NEW_2
	var_20_object = var_22_object; // 0x862 Mov
	var_21_float = var_6_float; // 0x864 Mov
	func_1602(var_19_bool, var_20_object, var_21_float); // 0x865 NEW_2
	return 2; // 0x867 Return
}


event_19(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_2368(); // 0x869 NEW_2
	func_1818(); // 0x86c NEW_2
	return 0; // 0x86e Return
}


event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	return 0; // 0x870 Return
}


event_39(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_float)
{
	var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; // 0x871 PushV
	var_10_float = 770.0; // 0x872 PushF
	var_11_bool = var_5_float > var_10_float; // 0x873 GT
	if(var_11_bool == 0) goto Label_2189; // 0x874 JumpB
	Trace(var_5_float); // 0x875 Func
	var_12_float = 770.0; // 0x877 PushF
	var_13_int = var_5_float - var_12_float; // 0x878 Sub
	var_14_float = 0.0035; // 0x879 PushF
	var_8_float = var_13_int * var_14_float; // 0x87a Mult2
	var_15_float = 0; var_16_object = Obj(); var_17_float = 0; var_18_int = 0; // 0x87b PushV
	var_19_object = Obj(); // 0x87c PushV
	func_1519(var_19_object); // 0x87d NEW_2
	var_16_object = var_19_object; // 0x87e Mov
	var_17_float = var_8_float; // 0x880 Mov
	var_18_int = 0; // 0x881 MovI
	func_1388(var_15_float, var_16_object, var_17_float, var_18_int); // 0x882 NEW_2
	var_9_float = var_15_float; // 0x883 Mov
	var_88_object = Obj(); // 0x885 PushV
	func_1519(var_88_object); // 0x886 NEW_2
	var_89_int = 0; // 0x888 PushI
	var_90_cvector = CVector(0.0, 0.0, 0.0); // 0x889 PushVec
	var_91_cvector = CVector(0.0, 0.0, 0.0); // 0x88a PushVec
	ReportHit(var_88_object, var_89_int, var_9_float, var_8_float, var_90_cvector, var_91_cvector); // 0x88b Func
	
Label_2189:
	return 4; // 0x88d Return
}


event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int)
{
	var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_string = ""; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_int = 0; var_14_bool = 0; var_15_bool = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_bool = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; // 0x88e PushV
	var_34_int = 0; // 0x88f PushI
	var_35_bool = var_5_int == var_34_int; // 0x890 Eq
	if(var_35_bool == 0) goto Label_2197; // 0x891 JumpB
	Inventory(); // 0x892 Func
	goto Label_2367; // 0x894 Jump
	
Label_2367:
	return 28; // 0x93f Return
	
Label_2197:
	var_36_int = 1; // 0x895 PushI
	var_37_bool = var_5_int == var_36_int; // 0x896 Eq
	if(var_37_bool == 0) goto Label_2246; // 0x897 JumpB
	GetMainOutdoorScene(var_20_object); // 0x898 Func
	GetActiveScene(var_21_object); // 0x89a Func
	var_38_bool = var_20_object == 0; // 0x89c NullEq
	if(var_38_bool == 0) goto Label_2210; // 0x89d JumpB
	var_39_string = "Can't find main outdoor oscene"; // 0x89e PushS
	Trace(var_39_string); // 0x89f Func
	return 28; // 0x8a1 Return
	
Label_2210:
	GetMap(var_22_object); // 0x8a2 ObjFunc
	var_40_bool = var_22_object == 0; // 0x8a4 NullEq
	if(var_40_bool == 0) goto Label_2218; // 0x8a5 JumpB
	var_41_string = "Can't find map"; // 0x8a6 PushS
	Trace(var_41_string); // 0x8a7 Func
	return 28; // 0x8a9 Return
	
Label_2218:
	var_42_bool = var_20_object == var_21_object; // 0x8aa Eq
	if(var_42_bool == 0) goto Label_2223; // 0x8ab JumpB
	GetPosition(var_23_cvector); // 0x8ac Func
	goto Label_2236; // 0x8ae Jump
	
Label_2236:
	var_43_float = GetByIndex(var_23_cvector, 0); // 0x8bc PushE
	var_44_float = GetByIndex(var_23_cvector, 2); // 0x8bd PushE
	SetMapParams(var_43_float, var_44_float); // 0x8be ObjFunc
	ShowMap(var_22_object); // 0x8c0 Func
	var_22_object = 0; // 0x8c2 SetNull
	var_21_object = 0; // 0x8c3 SetNull
	var_20_object = 0; // 0x8c4 SetNull
	goto Label_2367; // 0x8c5 Jump
	
Label_2223:
	GetName(var_24_string); // 0x8af ObjFunc
	var_45_string = "pt_gmap_"; // 0x8b1 PushS
	var_46_int = var_45_string + var_24_string; // 0x8b2 Add
	GetLocator(var_46_int, var_25_bool, var_23_cvector, var_26_cvector); // 0x8b3 ObjFunc
	var_47_bool = var_25_bool == 0; // 0x8b5 Not
	if(var_47_bool == 0) goto Label_2236; // 0x8b6 JumpB
	var_48_string = "FIXME: No map locator for scene : "; // 0x8b7 PushS
	var_49_int = var_48_string + var_24_string; // 0x8b8 Add
	Trace(var_49_int); // 0x8b9 Func
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x8bb MovV
	
Label_2246:
	var_50_int = 2; // 0x8c6 PushI
	var_51_bool = var_5_int == var_50_int; // 0x8c7 Eq
	if(var_51_bool == 0) goto Label_2252; // 0x8c8 JumpB
	Diary(); // 0x8c9 Func
	goto Label_2367; // 0x8cb Jump
	
Label_2252:
	var_52_int = 3; // 0x8cc PushI
	var_53_bool = var_5_int == var_52_int; // 0x8cd Eq
	if(var_53_bool == 0) goto Label_2258; // 0x8ce JumpB
	ShowMessage(); // 0x8cf Func
	goto Label_2367; // 0x8d1 Jump
	
Label_2258:
	var_54_int = 4; // 0x8d2 PushI
	var_55_bool = var_5_int == var_54_int; // 0x8d3 Eq
	if(var_55_bool == 0) goto Label_2271; // 0x8d4 JumpB
	ShowPlayerStats(var_27_int); // 0x8d5 Func
	var_56_int = 1; // 0x8d7 PushI
	var_57_bool = var_27_int == var_56_int; // 0x8d8 Eq
	if(var_57_bool == 0) goto Label_2270; // 0x8d9 JumpB
	var_58_string = "people.xml"; // 0x8da PushS
	var_59_bool = 1; // 0x8db PushB
	ShowWindow(var_58_string, var_59_bool); // 0x8dc Func
	
Label_2270:
	goto Label_2367; // 0x8de Jump
	
Label_2271:
	var_60_int = 5; // 0x8df PushI
	var_61_bool = var_5_int == var_60_int; // 0x8e0 Eq
	if(var_61_bool == 0) goto Label_2300; // 0x8e1 JumpB
	IsFlashlightOn(var_28_bool); // 0x8e2 Func
	var_62_bool = var_28_bool; // 0x8e4 Push
	if(var_62_bool == 0) goto Label_2285; // 0x8e5 JumpB
	var_63_bool = 0; // 0x8e6 PushB
	SwitchFlashlight(var_63_bool); // 0x8e7 Func
	var_64_string = "flashlight_off"; // 0x8e9 PushS
	PlaySound(var_64_string); // 0x8ea Func
	goto Label_2299; // 0x8ec Jump
	
Label_2299:
	goto Label_2367; // 0x8fb Jump
	
Label_2285:
	var_65_bool = 0; // 0x8ed PushV
	func_1687(var_65_bool); // 0x8ee NEW_2
	if(var_65_bool == 0) goto Label_2296; // 0x8f0 JumpB
	var_69_bool = 1; // 0x8f1 PushB
	SwitchFlashlight(var_69_bool); // 0x8f2 Func
	var_70_string = "flashlight_on"; // 0x8f4 PushS
	PlaySound(var_70_string); // 0x8f5 Func
	goto Label_2299; // 0x8f7 Jump
	
Label_2296:
	var_71_string = "flashlight_nofuel"; // 0x8f8 PushS
	PlaySound(var_71_string); // 0x8f9 Func
	
Label_2300:
	var_72_int = 6; // 0x8fc PushI
	var_73_bool = var_5_int == var_72_int; // 0x8fd Eq
	if(var_73_bool == 0) goto Label_2340; // 0x8fe JumpB
	var_74_int = 0; // 0x8ff PushV
	func_1693(var_74_int); // 0x900 NEW_2
	var_78_int = 0; // 0x902 PushI
	var_79_bool = var_74_int != var_78_int; // 0x903 Neq
	if(var_79_bool == 0) goto Label_2310; // 0x904 JumpB
	return 28; // 0x905 Return
	
Label_2310:
	IsVisirOn(var_29_bool); // 0x906 Func
	var_80_bool = var_29_bool; // 0x908 Push
	if(var_80_bool == 0) goto Label_2321; // 0x909 JumpB
	var_81_bool = 0; // 0x90a PushB
	SwitchVisir(var_81_bool); // 0x90b Func
	var_82_int = 2; // 0x90d PushI
	SendWorldWndMessage(var_82_int); // 0x90e Func
	goto Label_2339; // 0x910 Jump
	
Label_2339:
	goto Label_2367; // 0x923 Jump
	
Label_2321:
	var_83_string = "visir"; // 0x911 PushS
	GetProperty(var_83_string, var_30_int); // 0x912 Func
	var_84_int = var_30_int; // 0x914 Push
	if(var_84_int == 0) goto Label_2339; // 0x915 JumpB
	var_85_string = "vcharge"; // 0x916 PushS
	GetProperty(var_85_string, var_31_int); // 0x917 Func
	var_86_int = 10; // 0x919 PushI
	var_87_bool = var_31_int >= var_86_int; // 0x91a GE
	if(var_87_bool == 0) goto Label_2339; // 0x91b JumpB
	var_88_bool = 1; // 0x91c PushB
	SwitchVisir(var_88_bool); // 0x91d Func
	var_89_int = 1; // 0x91f PushI
	SendWorldWndMessage(var_89_int); // 0x920 Func
	goto Label_2339; // 0x922 Jump
	
Label_2340:
	var_90_int = 7; // 0x924 PushI
	var_91_bool = var_5_int == var_90_int; // 0x925 Eq
	if(var_91_bool == 0) goto Label_2352; // 0x926 JumpB
	IsOverrideActive(var_32_bool); // 0x927 Func
	var_92_bool = var_32_bool == 0; // 0x929 Not
	if(var_92_bool == 0) goto Label_2351; // 0x92a JumpB
	var_93_string = "people.xml"; // 0x92b PushS
	var_94_bool = 1; // 0x92c PushB
	ShowWindow(var_93_string, var_94_bool); // 0x92d Func
	
Label_2351:
	goto Label_2367; // 0x92f Jump
	
Label_2352:
	var_95_int = 21; // 0x930 PushI
	var_96_bool = var_5_int == var_95_int; // 0x931 Eq
	if(var_96_bool == 0) goto Label_2367; // 0x932 JumpB
	GetWeaponItem(var_33_int); // 0x933 Func
	var_97_int = -1; // 0x935 PushI
	var_98_bool = var_33_int != var_97_int; // 0x936 Neq
	if(var_98_bool == 0) goto Label_2367; // 0x937 JumpB
	var_99_bool = 0; // 0x938 PushB
	var_100_int = 0; // 0x939 PushI
	SelectItem(var_33_int, var_99_bool, var_100_int); // 0x93a Func
	var_101_int = -1; // 0x93c PushI
	SetHandsItem(var_101_int); // 0x93d Func
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	var_5_object = Obj(); var_6_int = 0; var_7_object = Obj(); var_8_int = 0; // 0x1ba PushV
	CreateStringVector(var_7_object); // 0x1bb Func
	var_9_string = "player_reputation_decrease.bin"; // 0x1bd PushS
	add(var_9_string); // 0x1be ObjFunc
	var_10_string = "player_klara_dream.bin"; // 0x1c0 PushS
	add(var_10_string); // 0x1c1 ObjFunc
	var_11_string = "player_init"; // 0x1c3 PushS
	GetVariable(var_11_string, var_8_int); // 0x1c4 Func
	var_12_bool = var_8_int == 0; // 0x1c6 Not
	if(var_12_bool == 0) goto Label_462; // 0x1c7 JumpB
	Diary(); // 0x1c8 Func
	var_13_string = "player_init"; // 0x1ca PushS
	var_14_int = 1; // 0x1cb PushI
	SetVariable(var_13_string, var_14_int); // 0x1cc Func
	
Label_462:
	var_15_object = Obj(); // 0x1ce PushV
	var_15_object = var_7_object; // 0x1cf Mov
	func_517(var_15_object); // 0x1d0 NEW_2
	return 4; // 0x1d2 Return
}


func_0()
{
	var_6_string = ""; var_7_bool = 0; var_8_object = Obj(); var_9_string = ""; var_10_bool = 0; var_11_object = Obj(); // 0x0 PushV
	GetCurrentWeapon(var_9_string); // 0x1 Func
	IsWeaponHolstered(var_10_bool); // 0x3 Func
	GetScene(var_11_object); // 0x5 Func
	var_12_bool = var_10_bool; // 0x7 Push
	if(var_12_bool == 0) goto Label_29; // 0x8 JumpB
	var_13_string = "unholster"; // 0x9 PushS
	var_14_object = Obj(); // 0xa PushV
	func_1519(var_14_object); // 0xb NEW_2
	BroadcastMessage(var_13_string, var_14_object, var_11_object); // 0xd Func
	var_17_string = ""; // 0xf PushV
	var_18_string = "_unholster"; // 0x10 PushS
	var_17_string = var_9_string + var_18_string; // 0x11 Add2
	func_1673(var_17_string); // 0x12 NEW_2
	var_22_bool = 0; // 0x14 PushB
	SetWeaponHolster(var_22_bool); // 0x15 Func
	var_23_string = "unholster"; // 0x17 PushS
	PlayAnimation(var_23_string); // 0x18 Func
	WaitForAnimEnd(); // 0x1a Func
	goto Label_48; // 0x1c Jump
	
Label_48:
	return 6; // 0x30 Return
	
Label_29:
	var_24_string = "holster"; // 0x1d PushS
	var_25_object = Obj(); // 0x1e PushV
	func_1519(var_25_object); // 0x1f NEW_2
	BroadcastMessage(var_24_string, var_25_object, var_11_object); // 0x21 Func
	var_26_string = ""; // 0x23 PushV
	var_27_string = "_holster"; // 0x24 PushS
	var_26_string = var_9_string + var_27_string; // 0x25 Add2
	func_1673(var_26_string); // 0x26 NEW_2
	var_28_string = "holster"; // 0x28 PushS
	PlayAnimation(var_28_string); // 0x29 Func
	WaitForAnimEnd(); // 0x2b Func
	var_29_bool = 1; // 0x2d PushB
	SetWeaponHolster(var_29_bool); // 0x2e Func
}


func_515()
{
	return 0; // 0x204 Return
}


func_517(var_15_object)
{
	var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_float = 0; var_21_bool = 0; var_22_bool = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_string = ""; var_27_float = 0; var_28_bool = 0; var_29_bool = 0; // 0x205 PushV
	var_30_object = GlobalVars[1]; // 0x206 PushGE
	var_31_object = Obj(); // 0x207 PushV
	func_1554(var_31_object); // 0x208 NEW_2
	var_30_object = var_31_object; // 0x209 Mov
	GlobalVars[1] = var_30_object; // 0x20b PopGE
	var_34_object = GlobalVars[2]; // 0x20c PushGE
	var_35_object = Obj(); // 0x20d PushV
	func_1554(var_35_object); // 0x20e NEW_2
	var_34_object = var_35_object; // 0x20f Mov
	GlobalVars[2] = var_34_object; // 0x211 PopGE
	var_36_object = GlobalVars[3]; // 0x212 PushGE
	var_37_object = Obj(); // 0x213 PushV
	func_1554(var_37_object); // 0x214 NEW_2
	var_36_object = var_37_object; // 0x215 Mov
	GlobalVars[3] = var_36_object; // 0x217 PopGE
	var_38_string = "effects"; // 0x218 PushS
	HasProperty(var_38_string, var_23_bool); // 0x219 Func
	var_39_bool = var_23_bool == 0; // 0x21b Not
	if(var_39_bool == 0) goto Label_586; // 0x21c JumpB
	var_40_string = "effects"; // 0x21d PushS
	var_41_bool = 1; // 0x21e PushB
	SetProperty(var_40_string, var_41_bool); // 0x21f Func
	var_42_string = "player_disease.bin"; // 0x221 PushS
	ApplyEffect(var_42_string); // 0x222 Func
	var_43_string = "player_stat.bin"; // 0x224 PushS
	ApplyEffect(var_43_string); // 0x225 Func
	var_44_string = "player_hit.bin"; // 0x227 PushS
	ApplyEffect(var_44_string); // 0x228 Func
	var_45_string = "player_head.bin"; // 0x22a PushS
	ApplyEffect(var_45_string); // 0x22b Func
	var_46_string = "player_flashlight.bin"; // 0x22d PushS
	ApplyEffect(var_46_string); // 0x22e Func
	var_47_string = "player_visir.bin"; // 0x230 PushS
	ApplyEffect(var_47_string); // 0x231 Func
	var_48_string = "player_vis.bin"; // 0x233 PushS
	ApplyEffect(var_48_string); // 0x234 Func
	var_49_string = "player_eyes_height.bin"; // 0x236 PushS
	ApplyEffect(var_49_string); // 0x237 Func
	var_50_string = "player_gifts.bin"; // 0x239 PushS
	ApplyEffect(var_50_string); // 0x23a Func
	var_51_object = var_15_object; // 0x23c Push
	if(var_51_object == 0) goto Label_586; // 0x23d JumpB
	size(var_24_int); // 0x23e ObjFunc
	var_25_int = 0; // 0x240 MovI
	
Label_577:
	var_52_bool = var_25_int < var_24_int; // 0x241 LT
	if(var_52_bool == 0) goto Label_586; // 0x242 JumpB
	get(var_26_string, var_25_int); // 0x243 ObjFunc
	ApplyEffect(var_26_string); // 0x245 Func
	var_53_int = 1; // 0x247 PushI
	var_25_int = var_25_int + var_53_int; // 0x248 Add2
	goto Label_577; // 0x249 Jump
	
Label_586:
	func_748(); // 0x24b NEW_2
	var_59_string = "health"; // 0x24d PushS
	GetProperty(var_59_string, var_27_float); // 0x24e Func
	var_60_bool = 0; // 0x250 PushV
	var_60_bool = 0; // 0x251 MovB
	var_61_int = 0; // 0x252 PushI
	var_62_bool = var_27_float <= var_61_int; // 0x253 LE
	if(var_62_bool == 0) goto Label_603; // 0x254 JumpB
	var_63_bool = 0; // 0x255 PushV
	func_1681(var_63_bool); // 0x256 NEW_2
	var_67_bool = var_63_bool == 0; // 0x258 Not
	if(var_67_bool == 0) goto Label_603; // 0x259 JumpB
	var_60_bool = 1; // 0x25a MovB
	
Label_603:
	if(var_60_bool == 0) goto Label_608; // 0x25b JumpB
	func_1787(); // 0x25d NEW_2
	return 14; // 0x25f Return
	
Label_608:
	IsWeaponHolstered(var_28_bool); // 0x260 Func
	var_83_bool = var_28_bool == 0; // 0x262 Not
	if(var_83_bool == 0) goto Label_622; // 0x263 JumpB
	IsWalking(var_29_bool); // 0x264 Func
	var_84_bool = var_29_bool; // 0x266 Push
	if(var_84_bool == 0) goto Label_622; // 0x267 JumpB
	var_85_string = "walk"; // 0x268 PushS
	PlayAnimation(var_85_string); // 0x269 Func
	WaitForAnimEnd(); // 0x26b Func
	goto Label_625; // 0x26d Jump
	
Label_625:
	goto Label_608; // 0x271 Jump
	
Label_622:
	var_86_float = 0.1; // 0x26e PushF
	Sleep(var_86_float); // 0x26f Func
}


func_1543(var_375_int, var_376_int, var_377_int, var_378_int)
{
	var_379_bool = var_376_int < var_377_int; // 0x608 LT
	if(var_379_bool == 0) goto Label_1548; // 0x609 JumpB
	var_375_int = var_377_int; // 0x60a Mov
	return 0; // 0x60b Return
	
Label_1548:
	var_380_bool = var_376_int > var_378_int; // 0x60c GT
	if(var_380_bool == 0) goto Label_1552; // 0x60d JumpB
	var_375_int = var_378_int; // 0x60e Mov
	return 0; // 0x60f Return
	
Label_1552:
	var_375_int = var_376_int; // 0x610 Mov
	return 0; // 0x611 Return
}


func_1037()
{
	var_8_bool = 0; var_9_string = ""; var_10_int = 0; // 0x40d PushV
	var_9_string = "revolver_ammo"; // 0x40e MovS
	var_10_int = 2; // 0x40f MovI
	func_1911(var_8_bool, var_9_string, var_10_int); // 0x410 NEW_2
	if(var_8_bool == 0) goto Label_1055; // 0x412 JumpB
	var_29_string = ""; // 0x413 PushV
	func_1068(var_29_string); // 0x414 NEW_2
	var_30_string = "_reload"; // 0x416 PushS
	var_31_int = var_29_string + var_30_string; // 0x417 Add
	PlaySound(var_31_int); // 0x418 Func
	var_32_string = "reload"; // 0x41a PushS
	PlayAnimation(var_32_string); // 0x41b Func
	WaitForAnimEnd(); // 0x41d Func
	
Label_1055:
	return 0; // 0x41f Return
}


func_1554(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x612 PushV
	CreateObjectSet(var_33_object); // 0x613 Func
	var_31_object = var_33_object; // 0x615 Mov
	return 2; // 0x616 Return
}


func_1560(var_575_object)
{
	var_576_object = Obj(); var_577_object = Obj(); // 0x618 PushV
	CreateObjectVector(var_577_object); // 0x619 Func
	var_575_object = var_577_object; // 0x61b Mov
	return 2; // 0x61c Return
}


func_1566(var_110_float, var_111_cvector, var_112_cvector)
{
	var_113_float = GetByIndex(var_111_cvector, 0); // 0x61f PushE
	var_114_float = GetByIndex(var_112_cvector, 0); // 0x620 PushE
	var_115_float = var_113_float * var_114_float; // 0x621 Mult
	var_116_float = GetByIndex(var_111_cvector, 2); // 0x622 PushE
	var_117_float = GetByIndex(var_112_cvector, 2); // 0x623 PushE
	var_118_float = var_116_float * var_117_float; // 0x624 Mult
	var_110_float = var_115_float + var_118_float; // 0x625 Add2
	return 0; // 0x626 Return
}


func_1575(var_119_float, var_120_cvector)
{
	var_121_float = GetByIndex(var_120_cvector, 0); // 0x628 PushE
	var_122_float = GetByIndex(var_120_cvector, 0); // 0x629 PushE
	var_123_float = var_121_float * var_122_float; // 0x62a Mult
	var_124_float = GetByIndex(var_120_cvector, 2); // 0x62b PushE
	var_125_float = GetByIndex(var_120_cvector, 2); // 0x62c PushE
	var_126_float = var_124_float * var_125_float; // 0x62d Mult
	var_127_int = var_123_float + var_126_float; // 0x62e Add
	var_119_float = sqrt(var_127_int); // 0x62f Sqrt2
	return 0; // 0x630 Return
}


func_1068(var_29_string)
{
	var_29_string = "gun"; // 0x42c MovS
	return 0; // 0x42d Return
}


func_1070(var_564_float)
{
	var_564_float = 1.3; // 0x42e MovF
	return 0; // 0x42f Return
}


func_1072(var_588_int)
{
	var_588_int = 1; // 0x430 MovI
	return 0; // 0x431 Return
}


func_1585(var_107_float, var_108_cvector, var_109_cvector)
{
	var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); // 0x632 PushV
	var_111_cvector = var_108_cvector; // 0x633 Mov
	var_112_cvector = var_109_cvector; // 0x634 Mov
	func_1566(var_110_float, var_111_cvector, var_112_cvector); // 0x635 NEW_2
	var_119_float = 0; var_120_cvector = CVector(0,0,0); // 0x637 PushV
	var_120_cvector = var_108_cvector; // 0x638 Mov
	func_1575(var_119_float, var_120_cvector); // 0x639 NEW_2
	var_128_float = 0; var_129_cvector = CVector(0,0,0); // 0x63b PushV
	var_129_cvector = var_109_cvector; // 0x63c Mov
	func_1575(var_128_float, var_129_cvector); // 0x63d NEW_2
	var_130_float = var_119_float * var_128_float; // 0x63f Mult
	var_107_float = var_110_float / var_110_float; // 0x640 Div2
	return 0; // 0x641 Return
}


func_50(var_312_string)
{
	var_312_string = "scalpel"; // 0x32 MovS
	return 0; // 0x33 Return
}


func_1074(var_590_int)
{
	var_590_int = 2; // 0x432 MovI
	return 0; // 0x433 Return
}


func_52(var_330_float)
{
	var_330_float = 0.6; // 0x35 MovF
	return 0; // 0x36 Return
}


func_1076(var_561_int)
{
	var_561_int = 2; // 0x434 MovI
	return 0; // 0x435 Return
}


func_1078(var_0_bool)
{
	var_454_string = ""; var_455_string = ""; var_456_int = 0; var_457_bool = 0; var_458_float = 0; var_459_float = 0; var_460_cvector = CVector(0,0,0); var_461_object = Obj(); var_462_int = 0; var_463_cvector = CVector(0,0,0); var_464_object = Obj(); var_465_int = 0; var_466_cvector = CVector(0,0,0); var_467_float = 0; var_468_float = 0; var_469_float = 0; var_470_object = Obj(); var_471_float = 0; var_472_object = Obj(); var_473_object = Obj(); var_474_int = 0; var_475_int = 0; var_476_object = Obj(); var_477_bool = 0; var_478_string = ""; var_479_string = ""; var_480_int = 0; var_481_bool = 0; var_482_float = 0; var_483_float = 0; var_484_cvector = CVector(0,0,0); var_485_object = Obj(); var_486_int = 0; var_487_cvector = CVector(0,0,0); var_488_object = Obj(); var_489_int = 0; var_490_cvector = CVector(0,0,0); var_491_float = 0; var_492_float = 0; var_493_float = 0; var_494_object = Obj(); var_495_float = 0; var_496_object = Obj(); var_497_object = Obj(); var_498_int = 0; var_499_int = 0; var_500_object = Obj(); var_501_bool = 0; // 0x436 PushV
	var_0_bool = 0; // 0x437 TMovB
	
Label_1080:
	var_502_bool = 0; // 0x438 PushV
	func_969(var_502_bool); // 0x439 NEW_2
	var_537_bool = var_502_bool == 0; // 0x43b Not
	if(var_537_bool == 0) goto Label_1086; // 0x43c JumpB
	goto Label_1301; // 0x43d Jump
	
Label_1301:
	return 48; // 0x515 Return
	
Label_1086:
	GetCurrentWeapon(var_478_string); // 0x43e Func
	var_479_string = "attack1"; // 0x440 MovS
	var_538_bool = 1; // 0x441 PushB
	SetAttackState(var_538_bool); // 0x442 Func
	func_1008(); // 0x445 NEW_2
	var_553_string = "_phase1"; // 0x447 PushS
	var_554_int = var_479_string + var_553_string; // 0x448 Add
	PlayAnimation(var_554_int); // 0x449 Func
	WaitForAnimEnd(); // 0x44b Func
	var_555_bool = var_0_bool; // 0x44d PushT
	if(var_555_bool == 0) goto Label_1104; // 0x44e JumpB
	return 48; // 0x44f Return
	
Label_1104:
	var_556_string = "shot"; // 0x450 PushS
	TriggerWeapon(var_556_string); // 0x451 Func
	var_557_string = ""; // 0x453 PushV
	func_1068(var_557_string); // 0x454 NEW_2
	var_558_string = "_shot"; // 0x456 PushS
	var_559_int = var_557_string + var_558_string; // 0x457 Add
	PlaySound(var_559_int); // 0x458 Func
	var_560_int = 0; // 0x45a PushV
	var_561_int = 0; // 0x45b PushV
	func_1076(var_561_int); // 0x45c NEW_2
	var_560_int = var_561_int; // 0x45d Mov
	func_1958(var_560_int); // 0x45f NEW_2
	func_1302(); // 0x462 NEW_2
	var_562_bool = 0; // 0x464 PushB
	SetAttackState(var_562_bool); // 0x465 Func
	var_563_int = 0; // 0x467 PushV
	func_1004(var_563_int); // 0x468 NEW_2
	var_480_int = var_563_int; // 0x469 Mov
	var_481_bool = 0; // 0x46b MovB
	var_564_float = 0; // 0x46c PushV
	func_1070(var_564_float); // 0x46d NEW_2
	var_482_float = var_564_float / var_564_float; // 0x46f Div2
	var_565_float = 1.0; // 0x470 PushF
	var_566_float = 1.5; // 0x471 PushF
	var_567_float = 1.0; // 0x472 PushF
	var_568_float = 0; // 0x473 PushV
	func_1006(var_568_float); // 0x474 NEW_2
	var_569_float = var_567_float / var_568_float; // 0x476 Div
	var_570_float = 1.5; // 0x477 PushF
	var_571_int = var_569_float - var_570_float; // 0x478 Sub
	var_572_float = 0; // 0x479 PushV
	func_1947(var_572_float); // 0x47a NEW_2
	var_573_float = var_571_int * var_572_float; // 0x47c Mult
	var_574_int = var_566_float + var_573_float; // 0x47d Add
	var_483_float = var_565_float / var_565_float; // 0x47e Div2
	GetDirection(var_484_cvector); // 0x47f Func
	var_575_object = Obj(); // 0x481 PushV
	func_1560(var_575_object); // 0x482 NEW_2
	var_485_object = var_575_object; // 0x483 Mov
	var_486_int = 0; // 0x485 MovI
	
Label_1158:
	var_578_bool = var_486_int < var_480_int; // 0x486 LT
	if(var_578_bool == 0) goto Label_1256; // 0x487 JumpB
	RandVecCone3D(var_487_cvector, var_484_cvector, var_483_float); // 0x488 Func
	var_579_int = 10000; // 0x48a PushI
	GetVictimMaterialExact(var_488_object, var_489_int, var_490_cvector, var_487_cvector, var_579_int); // 0x48b Func
	var_580_object = var_488_object; // 0x48d Push
	if(var_580_object == 0) goto Label_1252; // 0x48e JumpB
	var_491_float = var_482_float; // 0x48f Mov
	var_581_int = 4; // 0x490 PushI
	var_582_bool = var_489_int == var_581_int; // 0x491 Eq
	if(var_582_bool == 0) goto Label_1173; // 0x492 JumpB
	var_583_float = 3.0; // 0x493 PushF
	var_491_float = var_491_float * var_583_float; // 0x494 Mult2
	
Label_1173:
	var_584_float = 0; var_585_object = Obj(); var_586_float = 0; var_587_int = 0; // 0x495 PushV
	var_585_object = var_488_object; // 0x496 Mov
	var_586_float = var_491_float; // 0x497 Mov
	var_588_int = 0; // 0x498 PushV
	func_1072(var_588_int); // 0x499 NEW_2
	var_587_int = var_588_int; // 0x49a Mov
	func_1388(var_584_float, var_585_object, var_586_float, var_587_int); // 0x49c NEW_2
	var_492_float = var_584_float; // 0x49d Mov
	var_589_float = var_492_float; // 0x49f Push
	if(var_589_float == 0) goto Label_1234; // 0x4a0 JumpB
	add(var_488_object); // 0x4a1 ObjFunc
	var_590_int = 0; // 0x4a3 PushV
	func_1074(var_590_int); // 0x4a4 NEW_2
	ReportHit(var_488_object, var_590_int, var_492_float, var_491_float, var_490_cvector, var_487_cvector); // 0x4a6 Func
	var_591_bool = 0; // 0x4a8 PushV
	func_1303(var_591_bool); // 0x4a9 NEW_2
	if(var_591_bool == 0) goto Label_1233; // 0x4ab JumpB
	var_592_string = "health"; // 0x4ac PushS
	GetProperty(var_592_string, var_493_float); // 0x4ad ObjFunc
	var_593_bool = var_493_float == 0; // 0x4af Not
	if(var_593_bool == 0) goto Label_1233; // 0x4b0 JumpB
	var_594_int = 10000; // 0x4b1 PushI
	GetVictimMaterialExact(var_494_object, var_489_int, var_490_cvector, var_487_cvector, var_594_int, var_488_object); // 0x4b2 Func
	var_595_bool = 0; // 0x4b4 PushV
	var_595_bool = 0; // 0x4b5 MovB
	var_596_object = var_494_object; // 0x4b6 Push
	if(var_596_object == 0) goto Label_1211; // 0x4b7 JumpB
	var_597_bool = var_494_object != var_488_object; // 0x4b8 Neq
	if(var_597_bool == 0) goto Label_1211; // 0x4b9 JumpB
	var_595_bool = 1; // 0x4ba MovB
	
Label_1211:
	if(var_595_bool == 0) goto Label_1232; // 0x4bb JumpB
	var_598_float = 0; var_599_object = Obj(); var_600_float = 0; var_601_int = 0; // 0x4bc PushV
	var_599_object = var_494_object; // 0x4bd Mov
	var_602_float = 0.75; // 0x4be PushF
	var_600_float = var_491_float * var_602_float; // 0x4bf Mult2
	var_603_int = 0; // 0x4c0 PushV
	func_1072(var_603_int); // 0x4c1 NEW_2
	var_601_int = var_603_int; // 0x4c2 Mov
	func_1388(var_598_float, var_599_object, var_600_float, var_601_int); // 0x4c4 NEW_2
	var_495_float = var_598_float; // 0x4c5 Mov
	var_604_float = var_495_float; // 0x4c7 Push
	if(var_604_float == 0) goto Label_1232; // 0x4c8 JumpB
	add(var_494_object); // 0x4c9 ObjFunc
	var_605_int = 0; // 0x4cb PushV
	func_1074(var_605_int); // 0x4cc NEW_2
	ReportHit(var_494_object, var_605_int, var_495_float, var_491_float, var_490_cvector, var_487_cvector); // 0x4ce Func
	
Label_1232:
	var_494_object = 0; // 0x4d0 SetNull
	
Label_1233:
	goto Label_1252; // 0x4d1 Jump
	
Label_1252:
	var_488_object = 0; // 0x4e4 SetNull
	var_606_int = 1; // 0x4e5 PushI
	var_486_int = var_486_int + var_606_int; // 0x4e6 Add2
	goto Label_1158; // 0x4e7 Jump
	
Label_1234:
	var_607_int = -1; // 0x4d2 PushI
	var_608_bool = var_489_int != var_607_int; // 0x4d3 Neq
	if(var_608_bool == 0) goto Label_1252; // 0x4d4 JumpB
	var_609_bool = var_481_bool == 0; // 0x4d5 Not
	if(var_609_bool == 0) goto Label_1252; // 0x4d6 JumpB
	GetScene(var_496_object); // 0x4d7 Func
	var_610_string = "scripted"; // 0x4d9 PushS
	var_611_cvector = CVector(0.0, 0.0, 1.0); // 0x4da PushVec
	var_612_string = "richochet.xml"; // 0x4db PushS
	AddActorByType(var_497_object, var_610_string, var_496_object, var_490_cvector, var_611_cvector, var_612_string); // 0x4dc Func
	var_613_string = "Material"; // 0x4de PushS
	SetScriptProperty(var_613_string, var_489_int); // 0x4df ObjFunc
	var_481_bool = 1; // 0x4e1 MovB
	var_497_object = 0; // 0x4e2 SetNull
	var_496_object = 0; // 0x4e3 SetNull
	
Label_1256:
	size(var_498_int); // 0x4e8 ObjFunc
	var_499_int = 0; // 0x4ea MovI
	
Label_1259:
	var_614_bool = var_499_int < var_498_int; // 0x4eb LT
	if(var_614_bool == 0) goto Label_1284; // 0x4ec JumpB
	get(var_500_object, var_499_int); // 0x4ed ObjFunc
	ReportAttack(var_500_object); // 0x4ef Func
	var_615_object = GlobalVars[2]; // 0x4f1 PushGE
	in(var_501_bool, var_500_object); // 0x4f2 ObjFunc
	var_616_bool = var_501_bool == 0; // 0x4f4 Not
	if(var_616_bool == 0) goto Label_1277; // 0x4f5 JumpB
	var_617_object = GlobalVars[3]; // 0x4f6 PushGE
	add(var_500_object); // 0x4f7 ObjFunc
	var_618_bool = 0; // 0x4f9 PushB
	BroadcastPlayerDamage(var_500_object, var_618_bool); // 0x4fa Func
	goto Label_1280; // 0x4fc Jump
	
Label_1280:
	var_500_object = 0; // 0x500 SetNull
	var_619_int = 1; // 0x501 PushI
	var_499_int = var_499_int + var_619_int; // 0x502 Add2
	goto Label_1259; // 0x503 Jump
	
Label_1277:
	var_620_bool = 1; // 0x4fd PushB
	BroadcastPlayerDamage(var_500_object, var_620_bool); // 0x4fe Func
	
Label_1284:
	var_621_string = "_phase2"; // 0x504 PushS
	var_622_int = var_479_string + var_621_string; // 0x505 Add
	PlayAnimation(var_622_int); // 0x506 Func
	WaitForAnimEnd(); // 0x508 Func
	var_623_bool = var_0_bool; // 0x50a PushT
	if(var_623_bool == 0) goto Label_1293; // 0x50b JumpB
	return 48; // 0x50c Return
	
Label_1293:
	func_1021(); // 0x50e NEW_2
	var_485_object = 0; // 0x510 SetNull
	var_639_bool = 0; // 0x511 PushV
	func_1305(var_639_bool); // 0x512 NEW_2
	if(var_639_bool == 0) goto Label_1080; // 0x514 JumpB
}


func_55(var_334_float)
{
	var_334_float = 0.5; // 0x37 MovF
	return 0; // 0x38 Return
}


func_57(var_368_int)
{
	var_368_int = 2; // 0x39 MovI
	return 0; // 0x3a Return
}


func_59(var_353_int)
{
	var_353_int = 0; // 0x3b MovI
	return 0; // 0x3c Return
}


func_61(var_362_int)
{
	var_362_int = 1; // 0x3d MovI
	return 0; // 0x3e Return
}


func_63(var_328_float, var_329_bool)
{
	var_330_float = 0; var_331_bool = 0; // 0x40 PushV
	var_331_bool = var_329_bool; // 0x41 Mov
	func_52(var_331_bool); // 0x42 NEW_2
	var_332_float = 0; var_333_float = 0; // 0x44 PushV
	var_334_float = 0; // 0x45 PushV
	func_55(var_334_float); // 0x46 NEW_2
	var_333_float = var_334_float; // 0x47 Mov
	func_1976(var_332_float, var_333_float); // 0x49 NEW_2
	var_328_float = var_330_float * var_332_float; // 0x4b Mult2
	return 0; // 0x4c Return
}


func_1602(var_19_bool, var_20_object, var_21_float)
{
	var_25_bool = var_20_object == 0; // 0x643 Not
	if(var_25_bool == 0) goto Label_1607; // 0x644 JumpB
	var_19_bool = 0; // 0x645 MovB
	return 0; // 0x646 Return
	
Label_1607:
	var_26_int = 0; // 0x647 PushI
	var_27_bool = var_21_float > var_26_int; // 0x648 GT
	if(var_27_bool == 0) goto Label_1614; // 0x649 JumpB
	var_28_int = 8; // 0x64a PushI
	SendWorldWndMessage(var_28_int); // 0x64b Func
	goto Label_1623; // 0x64d Jump
	
Label_1623:
	var_29_float = 0; // 0x657 PushV
	var_29_float = var_21_float; // 0x658 Mov
	func_1654(var_29_float); // 0x659 NEW_2
	var_33_bool = 0; var_34_object = Obj(); var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0; // 0x65b PushV
	var_34_object = var_20_object; // 0x65c Mov
	var_35_string = "reputation"; // 0x65d MovS
	var_36_float = var_21_float; // 0x65e Mov
	var_37_float = 0; // 0x65f MovI
	var_38_float = 1; // 0x660 MovI
	func_1366(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float); // 0x661 NEW_2
	var_19_bool = 1; // 0x663 MovB
	return 0; // 0x664 Return
	
Label_1614:
	var_57_int = 0; // 0x64e PushI
	var_58_bool = var_21_float < var_57_int; // 0x64f LT
	if(var_58_bool == 0) goto Label_1621; // 0x650 JumpB
	var_59_int = 9; // 0x651 PushI
	SendWorldWndMessage(var_59_int); // 0x652 Func
	goto Label_1623; // 0x654 Jump
	
Label_1621:
	var_19_bool = 0; // 0x655 MovB
	return 0; // 0x656 Return
}


func_77()
{
	var_367_int = 0; // 0x4d PushV
	var_368_int = 0; // 0x4e PushV
	func_57(var_368_int); // 0x4f NEW_2
	var_367_int = var_368_int; // 0x50 Mov
	func_1958(var_367_int); // 0x52 NEW_2
	return 0; // 0x54 Return
}


func_85(var_0_bool)
{
	var_240_int = 0; var_241_string = ""; var_242_bool = 0; var_243_string = ""; var_244_float = 0; var_245_cvector = CVector(0,0,0); var_246_object = Obj(); var_247_int = 0; var_248_cvector = CVector(0,0,0); var_249_bool = 0; var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_string = ""; var_253_int = 0; var_254_cvector = CVector(0,0,0); var_255_cvector = CVector(0,0,0); var_256_float = 0; var_257_float = 0; var_258_int = 0; var_259_bool = 0; var_260_int = 0; var_261_string = ""; var_262_bool = 0; var_263_string = ""; var_264_float = 0; var_265_cvector = CVector(0,0,0); var_266_object = Obj(); var_267_int = 0; var_268_cvector = CVector(0,0,0); var_269_bool = 0; var_270_cvector = CVector(0,0,0); var_271_cvector = CVector(0,0,0); var_272_string = ""; var_273_int = 0; var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0); var_276_float = 0; var_277_float = 0; var_278_int = 0; var_279_bool = 0; // 0x55 PushV
	var_0_bool = 0; // 0x56 TMovB
	var_260_int = 0; // 0x57 MovI
	
Label_88:
	var_280_int = 1; // 0x58 PushI
	var_260_int = var_260_int + var_280_int; // 0x59 Add2
	var_281_string = ""; // 0x5a PushV
	func_323(var_281_string); // 0x5b NEW_2
	var_282_string = "attack"; // 0x5d PushS
	var_283_int = var_281_string + var_282_string; // 0x5e Add
	var_284_int = var_283_int + var_260_int; // 0x5f Add
	var_285_string = "_phase1"; // 0x60 PushS
	var_261_string = var_284_int + var_285_string; // 0x61 Add2
	HasAnimation(var_262_bool, var_261_string); // 0x62 Func
	var_286_bool = var_262_bool == 0; // 0x64 Not
	if(var_286_bool == 0) goto Label_103; // 0x65 JumpB
	goto Label_104; // 0x66 Jump
	
Label_104:
	var_287_int = -1; // 0x68 PushI
	var_260_int = var_260_int + var_287_int; // 0x69 Add2
	var_288_bool = var_260_int == 0; // 0x6a Not
	if(var_288_bool == 0) goto Label_109; // 0x6b JumpB
	return 40; // 0x6c Return
	
Label_109:
	GetCurrentWeapon(var_263_string); // 0x6d Func
	GetAttackDistance(var_264_float); // 0x6f Func
	GetDirection(var_265_cvector); // 0x71 Func
	var_269_bool = 0; // 0x73 MovB
	var_289_bool = 0; // 0x74 PushV
	func_321(var_289_bool); // 0x75 NEW_2
	if(var_289_bool == 0) goto Label_166; // 0x77 JumpB
	GetVictimMaterialExact(var_266_object, var_267_int, var_268_cvector, var_265_cvector, var_264_float); // 0x78 Func
	var_290_bool = 0; // 0x7a PushV
	var_290_bool = 0; // 0x7b MovB
	var_291_bool = 0; // 0x7c PushV
	var_291_bool = 0; // 0x7d MovB
	var_292_bool = 0; // 0x7e PushV
	var_292_bool = 0; // 0x7f MovB
	var_293_bool = var_266_object != 0; // 0x80 NullNeq
	if(var_293_bool == 0) goto Label_137; // 0x81 JumpB
	var_294_bool = 0; var_295_object = Obj(); var_296_string = ""; // 0x82 PushV
	var_295_object = var_266_object; // 0x83 Mov
	var_296_string = "health"; // 0x84 MovS
	func_1354(var_294_bool, var_295_object, var_296_string); // 0x85 NEW_2
	if(var_294_bool == 0) goto Label_137; // 0x87 JumpB
	var_292_bool = 1; // 0x88 MovB
	
Label_137:
	if(var_292_bool == 0) goto Label_145; // 0x89 JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x8a PushV
	var_298_object = var_266_object; // 0x8b Mov
	func_1461(var_298_object); // 0x8c NEW_2
	var_301_bool = var_297_bool == 0; // 0x8e Not
	if(var_301_bool == 0) goto Label_145; // 0x8f JumpB
	var_291_bool = 1; // 0x90 MovB
	
Label_145:
	if(var_291_bool == 0) goto Label_150; // 0x91 JumpB
	var_302_int = 4; // 0x92 PushI
	var_303_bool = var_267_int == var_302_int; // 0x93 Eq
	if(var_303_bool == 0) goto Label_150; // 0x94 JumpB
	var_290_bool = 1; // 0x95 MovB
	
Label_150:
	if(var_290_bool == 0) goto Label_166; // 0x96 JumpB
	var_304_string = "GetDirection"; // 0x97 PushS
	var_305_int = 1; // 0x98 PushI
	var_306_bool = IsFuncExist(var_266_object, var_304_string, var_305_int); // 0x99 FuncExist
	if(var_306_bool == 0) goto Label_166; // 0x9a JumpB
	GetDirection(var_270_cvector); // 0x9b Func
	GetDirection(var_271_cvector); // 0x9d ObjFunc
	var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); // 0x9f PushV
	var_308_cvector = var_270_cvector; // 0xa0 Mov
	var_309_cvector = var_271_cvector; // 0xa1 Mov
	func_1585(var_307_float, var_308_cvector, var_309_cvector); // 0xa2 NEW_2
	var_310_float = 0.5; // 0xa4 PushF
	var_269_bool = var_307_float >= var_310_float; // 0xa5 GE2
	
Label_166:
	var_311_bool = var_269_bool; // 0xa6 Push
	if(var_311_bool == 0) goto Label_177; // 0xa7 JumpB
	var_272_string = "battack"; // 0xa8 MovS
	var_312_string = ""; // 0xa9 PushV
	func_50(var_312_string); // 0xaa NEW_2
	var_313_string = "_back"; // 0xac PushS
	var_314_int = var_312_string + var_313_string; // 0xad Add
	PlaySound(var_314_int); // 0xae Func
	goto Label_195; // 0xb0 Jump
	
Label_195:
	var_315_bool = 1; // 0xc3 PushB
	SetAttackState(var_315_bool); // 0xc4 Func
	var_316_string = "_phase1"; // 0xc6 PushS
	var_317_int = var_272_string + var_316_string; // 0xc7 Add
	PlayAnimation(var_317_int); // 0xc8 Func
	WaitForAnimEnd(); // 0xca Func
	var_318_bool = var_0_bool; // 0xcc PushT
	if(var_318_bool == 0) goto Label_207; // 0xcd JumpB
	return 40; // 0xce Return
	
Label_207:
	var_319_bool = 0; // 0xcf PushB
	SetAttackState(var_319_bool); // 0xd0 Func
	GetAttackDistance(var_264_float); // 0xd2 Func
	GetDirection(var_265_cvector); // 0xd4 Func
	GetVictimMaterialExact(var_266_object, var_267_int, var_268_cvector, var_265_cvector, var_264_float); // 0xd6 Func
	var_320_bool = var_266_object != 0; // 0xd8 NullNeq
	if(var_320_bool == 0) goto Label_295; // 0xd9 JumpB
	var_321_string = "GetDirection"; // 0xda PushS
	var_322_int = 1; // 0xdb PushI
	var_323_bool = IsFuncExist(var_266_object, var_321_string, var_322_int); // 0xdc FuncExist
	if(var_323_bool == 0) goto Label_234; // 0xdd JumpB
	GetDirection(var_274_cvector); // 0xde Func
	GetDirection(var_275_cvector); // 0xe0 ObjFunc
	var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); // 0xe2 PushV
	var_325_cvector = var_274_cvector; // 0xe3 Mov
	var_326_cvector = var_275_cvector; // 0xe4 Mov
	func_1585(var_324_float, var_325_cvector, var_326_cvector); // 0xe5 NEW_2
	var_327_float = 0.5; // 0xe7 PushF
	var_269_bool = var_324_float >= var_327_float; // 0xe8 GE2
	goto Label_235; // 0xe9 Jump
	
Label_235:
	var_328_float = 0; var_329_bool = 0; // 0xeb PushV
	var_329_bool = var_269_bool; // 0xec Mov
	func_63(var_328_float, var_329_bool); // 0xed NEW_2
	var_276_float = var_328_float; // 0xee Mov
	var_346_int = 4; // 0xf0 PushI
	var_347_bool = var_267_int == var_346_int; // 0xf1 Eq
	if(var_347_bool == 0) goto Label_245; // 0xf2 JumpB
	var_348_float = 3.0; // 0xf3 PushF
	var_276_float = var_276_float * var_348_float; // 0xf4 Mult2
	
Label_245:
	var_349_float = 0; var_350_object = Obj(); var_351_float = 0; var_352_int = 0; // 0xf5 PushV
	var_350_object = var_266_object; // 0xf6 Mov
	var_351_float = var_276_float; // 0xf7 Mov
	var_353_int = 0; // 0xf8 PushV
	func_59(var_353_int); // 0xf9 NEW_2
	var_352_int = var_353_int; // 0xfa Mov
	func_1388(var_349_float, var_350_object, var_351_float, var_352_int); // 0xfc NEW_2
	var_277_float = var_349_float; // 0xfd Mov
	var_354_float = var_277_float; // 0xff Push
	if(var_354_float == 0) goto Label_292; // 0x100 JumpB
	var_355_int = 2; // 0x101 PushI
	irand(var_278_int, var_355_int); // 0x102 Func
	var_356_string = ""; // 0x104 PushV
	func_50(var_356_string); // 0x105 NEW_2
	var_357_string = "_hit"; // 0x107 PushS
	var_358_int = var_356_string + var_357_string; // 0x108 Add
	var_359_int = 1; // 0x109 PushI
	var_360_int = var_278_int + var_359_int; // 0x10a Add
	var_361_int = var_358_int + var_360_int; // 0x10b Add
	PlaySound(var_361_int); // 0x10c Func
	ReportAttack(var_266_object); // 0x10e Func
	var_362_int = 0; // 0x110 PushV
	func_61(var_362_int); // 0x111 NEW_2
	ReportHit(var_266_object, var_362_int, var_277_float, var_276_float, var_268_cvector, var_265_cvector); // 0x113 Func
	var_363_object = GlobalVars[2]; // 0x115 PushGE
	in(var_279_bool, var_266_object); // 0x116 ObjFunc
	var_364_bool = var_279_bool == 0; // 0x118 Not
	if(var_364_bool == 0) goto Label_289; // 0x119 JumpB
	var_365_object = GlobalVars[3]; // 0x11a PushGE
	add(var_266_object); // 0x11b ObjFunc
	var_366_bool = 0; // 0x11d PushB
	BroadcastPlayerDamage(var_266_object, var_366_bool); // 0x11e Func
	goto Label_292; // 0x120 Jump
	
Label_292:
	func_77(); // 0x125 NEW_2
	
Label_295:
	var_382_string = "_phase2"; // 0x127 PushS
	var_383_int = var_272_string + var_382_string; // 0x128 Add
	PlayAnimation(var_383_int); // 0x129 Func
	WaitForAnimEnd(); // 0x12b Func
	var_384_bool = var_0_bool; // 0x12d PushT
	if(var_384_bool == 0) goto Label_304; // 0x12e JumpB
	return 40; // 0x12f Return
	
Label_304:
	var_266_object = 0; // 0x130 SetNull
	var_385_bool = 0; // 0x131 PushV
	func_325(var_385_bool); // 0x132 NEW_2
	if(var_385_bool == 0) goto Label_109; // 0x134 JumpB
	return 40; // 0x135 Return
	
Label_289:
	var_388_bool = 1; // 0x121 PushB
	BroadcastPlayerDamage(var_266_object, var_388_bool); // 0x122 Func
	
Label_234:
	var_269_bool = 0; // 0xea MovB
	
Label_177:
	irand(var_273_int, var_260_int); // 0xb1 Func
	var_389_string = ""; // 0xb3 PushV
	func_323(var_389_string); // 0xb4 NEW_2
	var_390_string = "attack"; // 0xb6 PushS
	var_391_int = var_389_string + var_390_string; // 0xb7 Add
	var_392_int = 1; // 0xb8 PushI
	var_393_int = var_273_int + var_392_int; // 0xb9 Add
	var_272_string = var_391_int + var_393_int; // 0xba Add2
	var_394_string = ""; // 0xbb PushV
	func_50(var_394_string); // 0xbc NEW_2
	var_395_int = 1; // 0xbe PushI
	var_396_int = var_273_int + var_395_int; // 0xbf Add
	var_397_int = var_394_string + var_396_int; // 0xc0 Add
	PlaySound(var_397_int); // 0xc1 Func
	
Label_103:
	goto Label_88; // 0x67 Jump
}


func_1637(var_79_float)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x665 PushV
	CreateFloatVector(var_81_object); // 0x666 Func
	add(var_79_float); // 0x668 ObjFunc
	var_82_int = 0; // 0x66a PushI
	var_83_bool = var_79_float < var_82_int; // 0x66b LT
	if(var_83_bool == 0) goto Label_1649; // 0x66c JumpB
	var_84_float = 0.7; // 0x66d PushF
	var_85_int = 500; // 0x66e PushI
	RumblePlay(var_84_float, var_85_int); // 0x66f Func
	
Label_1649:
	var_86_int = 15; // 0x671 PushI
	SendWorldWndMessage(var_86_int, var_81_object); // 0x672 Func
	return 2; // 0x674 Return
}


func_1654(var_29_float)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x676 PushV
	CreateFloatVector(var_31_object); // 0x677 Func
	add(var_29_float); // 0x679 ObjFunc
	var_32_int = 16; // 0x67b PushI
	SendWorldWndMessage(var_32_int, var_31_object); // 0x67c Func
	return 2; // 0x67e Return
}


func_1664(var_72_int)
{
	var_73_float = 0; var_74_float = 0; // 0x680 PushV
	GetGameTime(var_74_float); // 0x681 Func
	var_75_int = 1; // 0x683 PushI
	var_76_int = 0; // 0x684 PushV
	var_77_int = 24; // 0x685 PushI
	var_76_int = var_74_float / var_74_float; // 0x686 Div2
	var_72_int = var_75_int + var_76_int; // 0x687 Add2
	return 2; // 0x688 Return
}


func_1673(var_17_string)
{
	var_19_bool = 0; var_20_bool = 0; // 0x689 PushV
	IsExistingSound(var_20_bool, var_17_string); // 0x68a Func
	var_21_bool = var_20_bool; // 0x68c Push
	if(var_21_bool == 0) goto Label_1680; // 0x68d JumpB
	PlaySound(var_17_string); // 0x68e Func
	
Label_1680:
	return 2; // 0x690 Return
}


func_1681(var_63_bool)
{
	var_64_bool = 0; var_65_bool = 0; // 0x691 PushV
	var_66_string = "god_mode"; // 0x692 PushS
	GetVariable(var_66_string, var_65_bool); // 0x693 Func
	var_63_bool = var_65_bool; // 0x695 Mov
	return 2; // 0x696 Return
}


func_1687(var_65_bool)
{
	var_66_int = 0; var_67_int = 0; // 0x697 PushV
	var_68_string = "kerosene"; // 0x698 PushS
	GetItemCountOfType(var_67_int, var_68_string); // 0x699 Func
	var_65_bool = var_67_int; // 0x69b Mov
	return 2; // 0x69c Return
}


func_1693(var_74_int)
{
	var_75_int = 0; var_76_int = 0; // 0x69d PushV
	var_77_string = "branch"; // 0x69e PushS
	GetVariable(var_77_string, var_76_int); // 0x69f Func
	var_74_int = var_76_int; // 0x6a1 Mov
	return 2; // 0x6a2 Return
}


func_1699(var_57_bool, var_58_int)
{
	var_59_int = 10; // 0x6a4 PushI
	var_60_bool = var_58_int == var_59_int; // 0x6a5 Eq
	if(var_60_bool == 0) goto Label_1709; // 0x6a6 JumpB
	func_1871(); // 0x6a8 NEW_2
	var_57_bool = 1; // 0x6aa MovB
	return 0; // 0x6ab Return
	
Label_1709:
	var_112_int = 11; // 0x6ad PushI
	var_113_bool = var_58_int == var_112_int; // 0x6ae Eq
	if(var_113_bool == 0) goto Label_1718; // 0x6af JumpB
	func_1879(); // 0x6b1 NEW_2
	var_57_bool = 1; // 0x6b3 MovB
	return 0; // 0x6b4 Return
	
Label_1718:
	var_119_int = 12; // 0x6b6 PushI
	var_120_bool = var_58_int == var_119_int; // 0x6b7 Eq
	if(var_120_bool == 0) goto Label_1726; // 0x6b8 JumpB
	func_1875(); // 0x6ba NEW_2
	var_57_bool = 1; // 0x6bc MovB
	return 0; // 0x6bd Return
	
Label_1726:
	var_57_bool = 0; // 0x6be MovB
	return 0; // 0x6bf Return
}


func_1728()
{
	var_61_bool = 0; var_62_int = 0; var_63_string = ""; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_string = ""; var_68_string = ""; var_69_bool = 0; var_70_int = 0; var_71_string = ""; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_string = ""; var_76_string = ""; // 0x6c0 PushV
	GetGroundMaterial(var_69_bool, var_70_int); // 0x6c1 Func
	var_77_bool = var_69_bool == 0; // 0x6c3 Not
	if(var_77_bool == 0) goto Label_1734; // 0x6c4 JumpB
	var_70_int = -1; // 0x6c5 MovI
	
Label_1734:
	var_78_string = ""; var_79_int = 0; // 0x6c6 PushV
	var_79_int = var_70_int; // 0x6c7 Mov
	func_1487(var_78_string, var_79_int); // 0x6c8 NEW_2
	var_71_string = var_78_string; // 0x6c9 Mov
	var_72_int = 0; // 0x6cb MovI
	
Label_1740:
	var_90_string = "step_"; // 0x6cc PushS
	var_91_int = var_90_string + var_71_string; // 0x6cd Add
	var_92_int = 1; // 0x6ce PushI
	var_93_int = var_72_int + var_92_int; // 0x6cf Add
	var_94_int = var_91_int + var_93_int; // 0x6d0 Add
	IsExistingSound(var_73_bool, var_94_int); // 0x6d1 Func
	var_95_bool = var_73_bool == 0; // 0x6d3 Not
	if(var_95_bool == 0) goto Label_1750; // 0x6d4 JumpB
	goto Label_1753; // 0x6d5 Jump
	
Label_1753:
	var_96_bool = var_72_int == 0; // 0x6d9 Not
	if(var_96_bool == 0) goto Label_1759; // 0x6da JumpB
	var_97_string = GlobalVars[0]; // 0x6db PushGE
	var_97_string = ""; // 0x6dc MovS
	GlobalVars[0] = var_97_string; // 0x6dd PopGE
	return 16; // 0x6de Return
	
Label_1759:
	var_98_int = 1; // 0x6df PushI
	var_99_bool = var_72_int == var_98_int; // 0x6e0 Eq
	if(var_99_bool == 0) goto Label_1764; // 0x6e1 JumpB
	var_74_int = 0; // 0x6e2 MovI
	goto Label_1776; // 0x6e3 Jump
	
Label_1776:
	var_100_string = "step_"; // 0x6f0 PushS
	var_101_int = var_100_string + var_71_string; // 0x6f1 Add
	var_102_int = 1; // 0x6f2 PushI
	var_103_int = var_74_int + var_102_int; // 0x6f3 Add
	var_76_string = var_101_int + var_103_int; // 0x6f4 Add2
	PlaySound(var_76_string); // 0x6f5 Func
	var_104_string = GlobalVars[0]; // 0x6f7 PushGE
	var_104_string = var_76_string; // 0x6f8 Mov
	GlobalVars[0] = var_104_string; // 0x6f9 PopGE
	return 16; // 0x6fa Return
	
Label_1764:
	irand(var_74_int, var_72_int); // 0x6e4 Func
	var_105_string = "step_"; // 0x6e6 PushS
	var_106_int = var_105_string + var_71_string; // 0x6e7 Add
	var_107_int = 1; // 0x6e8 PushI
	var_108_int = var_74_int + var_107_int; // 0x6e9 Add
	var_75_string = var_106_int + var_108_int; // 0x6ea Add2
	var_109_string = GlobalVars[0]; // 0x6eb PushGE
	var_110_bool = var_75_string != var_109_string; // 0x6ec Neq
	if(var_110_bool == 0) goto Label_1775; // 0x6ed JumpB
	goto Label_1776; // 0x6ee Jump
	
Label_1775:
	goto Label_1764; // 0x6ef Jump
	
Label_1750:
	var_111_int = 1; // 0x6d6 PushI
	var_72_int = var_72_int + var_111_int; // 0x6d7 Add2
	goto Label_1740; // 0x6d8 Jump
}


func_748()
{
	func_2368(); // 0x2ed NEW_2
	return 0; // 0x2ef Return
}


func_752()
{
	var_129_int = 0; // 0x2f0 PushI
	KillTimer(var_129_int); // 0x2f1 Func
	return 0; // 0x2f3 Return
}


func_756(var_0_bool)
{
	var_31_int = 0; var_32_string = ""; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_float = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_string = ""; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_object = Obj(); var_56_int = 0; var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_string = ""; var_62_int = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_float = 0; var_66_float = 0; var_67_int = 0; var_68_bool = 0; // 0x2f4 PushV
	var_0_bool = 0; // 0x2f5 TMovB
	var_50_int = 0; // 0x2f6 MovI
	
Label_759:
	var_69_int = 1; // 0x2f7 PushI
	var_50_int = var_50_int + var_69_int; // 0x2f8 Add2
	var_70_string = "attack"; // 0x2f9 PushS
	var_71_int = var_70_string + var_50_int; // 0x2fa Add
	var_72_string = "_phase1"; // 0x2fb PushS
	var_51_string = var_71_int + var_72_string; // 0x2fc Add2
	HasAnimation(var_52_bool, var_51_string); // 0x2fd Func
	var_73_bool = var_52_bool == 0; // 0x2ff Not
	if(var_73_bool == 0) goto Label_770; // 0x300 JumpB
	goto Label_771; // 0x301 Jump
	
Label_771:
	var_74_int = -1; // 0x303 PushI
	var_50_int = var_50_int + var_74_int; // 0x304 Add2
	var_75_bool = var_50_int == 0; // 0x305 Not
	if(var_75_bool == 0) goto Label_776; // 0x306 JumpB
	return 38; // 0x307 Return
	
Label_776:
	GetAttackDistance(var_53_float); // 0x308 Func
	var_76_float = 2.1875; // 0x30a PushF
	var_53_float = var_53_float * var_76_float; // 0x30b Mult2
	GetDirection(var_54_cvector); // 0x30c Func
	GetVictimMaterialExact(var_55_object, var_56_int, var_57_cvector, var_54_cvector, var_53_float); // 0x30e Func
	var_77_bool = var_55_object != 0; // 0x310 NullNeq
	if(var_77_bool == 0) goto Label_817; // 0x311 JumpB
	var_78_bool = 0; var_79_object = Obj(); var_80_string = ""; // 0x312 PushV
	var_79_object = var_55_object; // 0x313 Mov
	var_80_string = "healable"; // 0x314 MovS
	func_1354(var_78_bool, var_79_object, var_80_string); // 0x315 NEW_2
	if(var_78_bool == 0) goto Label_817; // 0x317 JumpB
	var_87_string = "heal_phase1"; // 0x318 PushS
	PlayAnimation(var_87_string); // 0x319 Func
	WaitForAnimEnd(); // 0x31b Func
	var_88_bool = var_0_bool; // 0x31d PushT
	if(var_88_bool == 0) goto Label_800; // 0x31e JumpB
	return 38; // 0x31f Return
	
Label_800:
	var_89_bool = 0; var_90_object = Obj(); // 0x320 PushV
	var_90_object = var_55_object; // 0x321 Mov
	func_1466(var_89_bool, var_90_object); // 0x322 NEW_2
	if(var_89_bool == 0) goto Label_808; // 0x324 JumpB
	var_98_string = "heal"; // 0x325 PushS
	Trigger(var_55_object, var_98_string); // 0x326 Func
	
Label_808:
	var_99_string = "heal_phase2"; // 0x328 PushS
	PlayAnimation(var_99_string); // 0x329 Func
	WaitForAnimEnd(); // 0x32b Func
	var_100_bool = var_0_bool; // 0x32d PushT
	if(var_100_bool == 0) goto Label_816; // 0x32e JumpB
	return 38; // 0x32f Return
	
Label_816:
	goto Label_941; // 0x330 Jump
	
Label_941:
	var_101_bool = 0; // 0x3ad PushV
	func_964(var_101_bool); // 0x3ae NEW_2
	if(var_101_bool == 0) goto Label_776; // 0x3b0 JumpB
	return 38; // 0x3b1 Return
	
Label_817:
	var_104_string = "GetDirection"; // 0x331 PushS
	var_105_int = 1; // 0x332 PushI
	var_106_bool = IsFuncExist(var_55_object, var_104_string, var_105_int); // 0x333 FuncExist
	if(var_106_bool == 0) goto Label_833; // 0x334 JumpB
	GetDirection(var_59_cvector); // 0x335 Func
	GetDirection(var_60_cvector); // 0x337 ObjFunc
	var_107_float = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); // 0x339 PushV
	var_108_cvector = var_59_cvector; // 0x33a Mov
	var_109_cvector = var_60_cvector; // 0x33b Mov
	func_1585(var_107_float, var_108_cvector, var_109_cvector); // 0x33c NEW_2
	var_131_float = 0.5; // 0x33e PushF
	var_58_bool = var_107_float >= var_131_float; // 0x33f GE2
	goto Label_834; // 0x340 Jump
	
Label_834:
	var_132_bool = var_58_bool; // 0x342 Push
	if(var_132_bool == 0) goto Label_841; // 0x343 JumpB
	var_61_string = "battack"; // 0x344 MovS
	var_133_string = "punch_back"; // 0x345 PushS
	PlaySound(var_133_string); // 0x346 Func
	goto Label_853; // 0x348 Jump
	
Label_853:
	var_134_string = "_phase1"; // 0x355 PushS
	var_135_int = var_61_string + var_134_string; // 0x356 Add
	PlayAnimation(var_135_int); // 0x357 Func
	WaitForAnimEnd(); // 0x359 Func
	var_136_bool = var_0_bool; // 0x35b PushT
	if(var_136_bool == 0) goto Label_862; // 0x35c JumpB
	return 38; // 0x35d Return
	
Label_862:
	GetVictimMaterialExact(var_55_object, var_56_int, var_57_cvector, var_54_cvector, var_53_float); // 0x35e Func
	var_137_bool = var_55_object != 0; // 0x360 NullNeq
	if(var_137_bool == 0) goto Label_931; // 0x361 JumpB
	var_138_string = "GetDirection"; // 0x362 PushS
	var_139_int = 1; // 0x363 PushI
	var_140_bool = IsFuncExist(var_55_object, var_138_string, var_139_int); // 0x364 FuncExist
	if(var_140_bool == 0) goto Label_882; // 0x365 JumpB
	GetDirection(var_63_cvector); // 0x366 Func
	GetDirection(var_64_cvector); // 0x368 ObjFunc
	var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); // 0x36a PushV
	var_142_cvector = var_63_cvector; // 0x36b Mov
	var_143_cvector = var_64_cvector; // 0x36c Mov
	func_1585(var_141_float, var_142_cvector, var_143_cvector); // 0x36d NEW_2
	var_144_float = 0.5; // 0x36f PushF
	var_58_bool = var_141_float >= var_144_float; // 0x370 GE2
	goto Label_883; // 0x371 Jump
	
Label_883:
	var_145_float = 0; var_146_bool = 0; // 0x373 PushV
	var_146_bool = var_58_bool; // 0x374 Mov
	func_957(var_145_float, var_146_bool); // 0x375 NEW_2
	var_65_float = var_145_float; // 0x376 Mov
	var_148_int = 4; // 0x378 PushI
	var_149_bool = var_56_int == var_148_int; // 0x379 Eq
	if(var_149_bool == 0) goto Label_893; // 0x37a JumpB
	var_150_float = 3.0; // 0x37b PushF
	var_65_float = var_65_float * var_150_float; // 0x37c Mult2
	
Label_893:
	var_151_float = 0; var_152_object = Obj(); var_153_float = 0; var_154_int = 0; // 0x37d PushV
	var_152_object = var_55_object; // 0x37e Mov
	var_153_float = var_65_float; // 0x37f Mov
	var_154_int = 0; // 0x380 MovI
	func_1388(var_151_float, var_152_object, var_153_float, var_154_int); // 0x381 NEW_2
	var_66_float = var_151_float; // 0x382 Mov
	var_215_float = var_66_float; // 0x384 Push
	if(var_215_float == 0) goto Label_931; // 0x385 JumpB
	var_216_int = 2; // 0x386 PushI
	irand(var_67_int, var_216_int); // 0x387 Func
	var_217_string = "punch_hit"; // 0x389 PushS
	var_218_int = 1; // 0x38a PushI
	var_219_int = var_67_int + var_218_int; // 0x38b Add
	var_220_int = var_217_string + var_219_int; // 0x38c Add
	PlaySound(var_220_int); // 0x38d Func
	ReportAttack(var_55_object); // 0x38f Func
	var_221_int = 0; // 0x391 PushI
	ReportHit(var_55_object, var_221_int, var_66_float, var_65_float, var_57_cvector, var_54_cvector); // 0x392 Func
	var_222_object = GlobalVars[2]; // 0x394 PushGE
	in(var_68_bool, var_55_object); // 0x395 ObjFunc
	var_223_bool = var_68_bool == 0; // 0x397 Not
	if(var_223_bool == 0) goto Label_928; // 0x398 JumpB
	var_224_object = GlobalVars[3]; // 0x399 PushGE
	add(var_55_object); // 0x39a ObjFunc
	var_225_bool = 0; // 0x39c PushB
	BroadcastPlayerDamage(var_55_object, var_225_bool); // 0x39d Func
	goto Label_931; // 0x39f Jump
	
Label_931:
	var_226_string = "_phase2"; // 0x3a3 PushS
	var_227_int = var_61_string + var_226_string; // 0x3a4 Add
	PlayAnimation(var_227_int); // 0x3a5 Func
	WaitForAnimEnd(); // 0x3a7 Func
	var_228_bool = var_0_bool; // 0x3a9 PushT
	if(var_228_bool == 0) goto Label_940; // 0x3aa JumpB
	return 38; // 0x3ab Return
	
Label_940:
	var_55_object = 0; // 0x3ac SetNull
	
Label_928:
	var_229_bool = 1; // 0x3a0 PushB
	BroadcastPlayerDamage(var_55_object, var_229_bool); // 0x3a1 Func
	
Label_882:
	var_58_bool = 0; // 0x372 MovB
	
Label_841:
	irand(var_62_int, var_50_int); // 0x349 Func
	var_230_string = "attack"; // 0x34b PushS
	var_231_int = 1; // 0x34c PushI
	var_232_int = var_62_int + var_231_int; // 0x34d Add
	var_61_string = var_230_string + var_232_int; // 0x34e Add2
	var_233_string = "punch"; // 0x34f PushS
	var_234_int = 1; // 0x350 PushI
	var_235_int = var_62_int + var_234_int; // 0x351 Add
	var_236_int = var_233_string + var_235_int; // 0x352 Add
	PlaySound(var_236_int); // 0x353 Func
	
Label_833:
	var_58_bool = 0; // 0x341 MovB
	
Label_770:
	goto Label_759; // 0x302 Jump
}


func_1787()
{
	var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj(); // 0x6fb PushV
	var_72_int = 0; // 0x6fc PushV
	func_1664(var_72_int); // 0x6fd NEW_2
	var_78_int = 12; // 0x6ff PushI
	var_79_bool = var_72_int == var_78_int; // 0x700 Eq
	if(var_79_bool == 0) goto Label_1797; // 0x701 JumpB
	var_80_string = "ACHIEVEMENT_MIGHT"; // 0x702 PushS
	UnlockAchievement(var_80_string); // 0x703 Func
	
Label_1797:
	GetMainOutdoorScene(var_70_object); // 0x705 Func
	var_81_string = "player_death"; // 0x707 PushS
	var_82_string = "play_death_klara.bin"; // 0x708 PushS
	AddBlankActor(var_71_object, var_70_object, var_81_string, var_82_string); // 0x709 Func
	SetDeathState(); // 0x70b Func
	return 4; // 0x70d Return
}


func_1808()
{
	var_10_bool = 0; var_11_bool = 0; // 0x710 PushV
	var_12_int = 11; // 0x711 PushI
	KillTimer(var_12_int, var_11_bool); // 0x712 Func
	var_13_bool = var_11_bool; // 0x714 Push
	if(var_13_bool == 0) goto Label_1817; // 0x715 JumpB
	var_14_int = -3; // 0x716 PushI
	ModNoise(var_14_int); // 0x717 Func
	
Label_1817:
	return 2; // 0x719 Return
}


func_1302()
{
	return 0; // 0x516 Return
}


func_1303(var_591_bool)
{
	var_591_bool = 0; // 0x517 MovB
	return 0; // 0x518 Return
}


func_1305(var_639_bool)
{
	var_640_bool = 0; var_641_bool = 0; // 0x519 PushV
	IsShooting(var_641_bool); // 0x51a Func
	var_639_bool = var_641_bool; // 0x51c Mov
	return 2; // 0x51d Return
}


func_1818()
{
	func_1808(); // 0x71b NEW_2
	var_15_int = 11; // 0x71d PushI
	var_16_float = 0.15; // 0x71e PushF
	SetTimer(var_15_int, var_16_float); // 0x71f Func
	var_17_int = 3; // 0x721 PushI
	ModNoise(var_17_int); // 0x722 Func
	return 0; // 0x724 Return
}


func_1310()
{
	func_1334(); // 0x51f NEW_2
	var_13_bool = 0; var_14_string = ""; var_15_int = 0; // 0x521 PushV
	var_14_string = "revolver_ammo"; // 0x522 MovS
	var_15_int = 2; // 0x523 MovI
	func_1911(var_13_bool, var_14_string, var_15_int); // 0x524 NEW_2
	if(var_13_bool == 0) goto Label_1331; // 0x526 JumpB
	var_34_string = ""; // 0x527 PushV
	func_1332(var_34_string); // 0x528 NEW_2
	var_35_string = "_reload"; // 0x52a PushS
	var_36_int = var_34_string + var_35_string; // 0x52b Add
	PlaySound(var_36_int); // 0x52c Func
	var_37_string = "reload"; // 0x52e PushS
	PlayAnimation(var_37_string); // 0x52f Func
	WaitForAnimEnd(); // 0x531 Func
	
Label_1331:
	return 0; // 0x533 Return
}


func_1829()
{
	var_5_bool = 0; var_6_bool = 0; // 0x725 PushV
	var_7_int = 10; // 0x726 PushI
	KillTimer(var_7_int, var_6_bool); // 0x727 Func
	var_8_bool = var_6_bool; // 0x729 Push
	if(var_8_bool == 0) goto Label_1838; // 0x72a JumpB
	var_9_int = -2; // 0x72b PushI
	ModNoise(var_9_int); // 0x72c Func
	
Label_1838:
	return 2; // 0x72e Return
}


func_1839()
{
	var_5_bool = 0; var_6_bool = 0; // 0x72f PushV
	var_7_int = 12; // 0x730 PushI
	KillTimer(var_7_int, var_6_bool); // 0x731 Func
	var_8_bool = var_6_bool; // 0x733 Push
	if(var_8_bool == 0) goto Label_1848; // 0x734 JumpB
	var_9_int = -1; // 0x735 PushI
	ModNoise(var_9_int); // 0x736 Func
	
Label_1848:
	return 2; // 0x738 Return
}


func_1332(var_34_string)
{
	var_34_string = "gun"; // 0x534 MovS
	return 0; // 0x535 Return
}


func_1334()
{
	return 0; // 0x536 Return
}


func_1335(var_49_string, var_50_int)
{
	var_51_int = 2; // 0x538 PushI
	var_52_bool = var_50_int == var_51_int; // 0x539 Eq
	if(var_52_bool == 0) goto Label_1342; // 0x53a JumpB
	var_49_string = "fire"; // 0x53b MovS
	return 0; // 0x53c Return
	
Label_1342:
	var_53_int = 1; // 0x53e PushI
	var_54_bool = var_50_int == var_53_int; // 0x53f Eq
	if(var_54_bool == 0) goto Label_1347; // 0x540 JumpB
	var_49_string = "bullet"; // 0x541 MovS
	return 0; // 0x542 Return
	
Label_1347:
	var_49_string = "phys"; // 0x543 MovS
	return 0; // 0x544 Return
}


func_1849()
{
	func_1829(); // 0x73a NEW_2
	var_10_int = 10; // 0x73c PushI
	var_11_float = 0.35; // 0x73d PushF
	SetTimer(var_10_int, var_11_float); // 0x73e Func
	var_12_int = 2; // 0x740 PushI
	ModNoise(var_12_int); // 0x741 Func
	return 0; // 0x743 Return
}


func_2368()
{
	var_54_float = 0; var_55_float = 0; // 0x940 PushV
	var_56_int = 10; // 0x941 PushI
	var_57_int = 30; // 0x942 PushI
	rand(var_55_float, var_56_int, var_57_int); // 0x943 Func
	var_58_int = 0; // 0x945 PushI
	SetTimer(var_58_int, var_55_float); // 0x946 Func
	return 2; // 0x948 Return
}


func_321(var_289_bool)
{
	var_289_bool = 0; // 0x141 MovB
	return 0; // 0x142 Return
}


func_323(var_281_string)
{
	var_281_string = ""; // 0x143 MovS
	return 0; // 0x144 Return
}


func_1860()
{
	func_1839(); // 0x745 NEW_2
	var_10_int = 12; // 0x747 PushI
	var_11_float = 0.6; // 0x748 PushF
	SetTimer(var_10_int, var_11_float); // 0x749 Func
	var_12_int = 1; // 0x74b PushI
	ModNoise(var_12_int); // 0x74c Func
	return 0; // 0x74e Return
}


func_325(var_385_bool)
{
	var_386_bool = 0; var_387_bool = 0; // 0x145 PushV
	IsShooting(var_387_bool); // 0x146 Func
	var_385_bool = var_387_bool; // 0x148 Mov
	return 2; // 0x149 Return
}


func_1349(var_75_bool, var_76_object)
{
	var_77_bool = 0; var_78_bool = 0; // 0x545 PushV
	IsPlayerActor(var_76_object, var_78_bool); // 0x546 Func
	var_75_bool = var_78_bool; // 0x548 Mov
	return 2; // 0x549 Return
}


func_2377()
{
	var_547_object = Obj(); var_548_object = Obj(); // 0x949 PushV
	GetScene(var_548_object); // 0x94a Func
	var_549_string = "player_shot"; // 0x94c PushS
	var_550_object = Obj(); // 0x94d PushV
	func_1519(var_550_object); // 0x94e NEW_2
	BroadcastMessage(var_549_string, var_550_object, var_548_object); // 0x950 Func
	return 2; // 0x952 Return
}


func_1354(var_34_bool, var_35_object, var_36_string)
{
	var_37_bool = 0; var_38_bool = 0; // 0x54a PushV
	var_39_string = "HasProperty"; // 0x54b PushS
	var_40_int = 2; // 0x54c PushI
	var_41_bool = IsFuncExist(var_35_object, var_39_string, var_40_int); // 0x54d FuncExist
	var_42_bool = var_41_bool == 0; // 0x54e Not
	if(var_42_bool == 0) goto Label_1362; // 0x54f JumpB
	var_34_bool = 0; // 0x550 MovB
	return 2; // 0x551 Return
	
Label_1362:
	HasProperty(var_36_string, var_38_bool); // 0x552 ObjFunc
	var_34_bool = var_38_bool; // 0x554 Mov
	return 2; // 0x555 Return
}


func_330(var_0_bool, var_1_bool)
{
	var_402_int = 0; var_403_int = 0; var_404_object = Obj(); var_405_bool = 0; var_406_bool = 0; var_407_bool = 0; var_408_bool = 0; var_409_int = 0; var_410_int = 0; var_411_int = 0; var_412_int = 0; var_413_object = Obj(); var_414_bool = 0; var_415_bool = 0; var_416_bool = 0; var_417_bool = 0; var_418_int = 0; var_419_int = 0; // 0x14a PushV
	var_0_bool = 0; // 0x14b TMovB
	var_1_bool = 0; // 0x14c TMovB
	GetWeaponItem(var_411_int); // 0x14d Func
	var_420_string = "use_begin"; // 0x14f PushS
	PlayAnimation(var_420_string); // 0x150 Func
	WaitForAnimEnd(); // 0x152 Func
	var_421_bool = var_0_bool; // 0x154 PushT
	if(var_421_bool == 0) goto Label_343; // 0x155 JumpB
	return 18; // 0x156 Return
	
Label_343:
	GetWeaponItem(var_412_int); // 0x157 Func
	GetPlayerSelectedObject(var_413_object); // 0x159 Func
	var_414_bool = 0; // 0x15b MovB
	var_422_bool = var_412_int == var_411_int; // 0x15c Eq
	if(var_422_bool == 0) goto Label_395; // 0x15d JumpB
	var_423_bool = 0; var_424_object = Obj(); var_425_string = ""; // 0x15e PushV
	var_424_object = var_413_object; // 0x15f Mov
	var_425_string = "lp"; // 0x160 MovS
	func_1354(var_423_bool, var_424_object, var_425_string); // 0x161 NEW_2
	if(var_423_bool == 0) goto Label_395; // 0x163 JumpB
	var_426_string = "lp"; // 0x164 PushS
	GetProperty(var_426_string, var_415_bool); // 0x165 ObjFunc
	var_427_bool = var_415_bool; // 0x167 Push
	if(var_427_bool == 0) goto Label_395; // 0x168 JumpB
	var_428_string = "locked"; // 0x169 PushS
	GetProperty(var_428_string, var_416_bool); // 0x16a ObjFunc
	var_429_bool = var_416_bool; // 0x16c Push
	if(var_429_bool == 0) goto Label_395; // 0x16d JumpB
	var_414_bool = 1; // 0x16e MovB
	var_430_string = "locked"; // 0x16f PushS
	var_431_bool = 0; // 0x170 PushB
	SetProperty(var_430_string, var_431_bool); // 0x171 ObjFunc
	var_418_int = 0; // 0x173 MovI
	var_432_string = "uses"; // 0x174 PushS
	GetWeaponProperty(var_417_bool, var_432_string, var_418_int); // 0x175 Func
	var_433_int = 1; // 0x177 PushI
	var_434_bool = var_418_int <= var_433_int; // 0x178 LE
	if(var_434_bool == 0) goto Label_390; // 0x179 JumpB
	GetWeaponItem(var_419_int); // 0x17a Func
	var_435_bool = 0; // 0x17c PushB
	var_436_int = 0; // 0x17d PushI
	SelectItem(var_419_int, var_435_bool, var_436_int); // 0x17e Func
	var_437_int = 1; // 0x180 PushI
	var_438_int = 0; // 0x181 PushI
	RemoveItem(var_419_int, var_437_int, var_438_int); // 0x182 Func
	var_1_bool = 1; // 0x184 TMovB
	goto Label_395; // 0x185 Jump
	
Label_395:
	var_439_bool = var_414_bool; // 0x18b Push
	if(var_439_bool == 0) goto Label_401; // 0x18c JumpB
	var_440_string = "use_success"; // 0x18d PushS
	PlayAnimation(var_440_string); // 0x18e Func
	goto Label_404; // 0x190 Jump
	
Label_404:
	WaitForAnimEnd(); // 0x194 Func
	var_441_bool = var_0_bool; // 0x196 PushT
	if(var_441_bool == 0) goto Label_409; // 0x197 JumpB
	return 18; // 0x198 Return
	
Label_409:
	var_442_bool = var_1_bool; // 0x199 PushT
	if(var_442_bool == 0) goto Label_428; // 0x19a JumpB
	var_443_string = "holster"; // 0x19b PushS
	PlayAnimation(var_443_string); // 0x19c Func
	WaitForAnimEnd(); // 0x19e Func
	var_444_int = -1; // 0x1a0 PushI
	SetHandsItem(var_444_int); // 0x1a1 Func
	var_445_bool = var_0_bool; // 0x1a3 PushT
	if(var_445_bool == 0) goto Label_422; // 0x1a4 JumpB
	return 18; // 0x1a5 Return
	
Label_422:
	var_1_bool = 0; // 0x1a6 TMovB
	var_446_string = "unholster"; // 0x1a7 PushS
	PlayAnimation(var_446_string); // 0x1a8 Func
	WaitForAnimEnd(); // 0x1aa Func
	
Label_428:
	return 18; // 0x1ac Return
	
Label_401:
	var_447_string = "use_fail"; // 0x191 PushS
	PlayAnimation(var_447_string); // 0x192 Func
	
Label_390:
	var_448_string = "uses"; // 0x186 PushS
	var_449_int = 1; // 0x187 PushI
	var_450_int = var_418_int - var_449_int; // 0x188 Sub
	SetWeaponProperty(var_417_bool, var_448_string, var_450_int); // 0x189 Func
}


func_1871()
{
	func_1728(); // 0x750 NEW_2
	return 0; // 0x752 Return
}


func_1875()
{
	func_1728(); // 0x754 NEW_2
	return 0; // 0x756 Return
}


func_1366(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float)
{
	var_39_float = 0; var_40_float = 0; // 0x556 PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0x557 PushV
	var_42_object = var_34_object; // 0x558 Mov
	var_43_string = var_35_string; // 0x559 Mov
	func_1354(var_41_bool, var_42_object, var_43_string); // 0x55a NEW_2
	var_50_bool = var_41_bool == 0; // 0x55c Not
	if(var_50_bool == 0) goto Label_1376; // 0x55d JumpB
	var_33_bool = 0; // 0x55e MovB
	return 2; // 0x55f Return
	
Label_1376:
	GetProperty(var_35_string, var_40_float); // 0x560 ObjFunc
	var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; // 0x562 PushV
	var_52_float = var_40_float + var_36_float; // 0x563 Add2
	var_53_float = var_37_float; // 0x564 Mov
	var_54_float = var_38_float; // 0x565 Mov
	func_1532(var_51_float, var_52_float, var_53_float, var_54_float); // 0x566 NEW_2
	SetProperty(var_35_string, var_51_float); // 0x568 ObjFunc
	var_33_bool = 1; // 0x56a MovB
	return 2; // 0x56b Return
}


func_1879()
{
	func_1728(); // 0x758 NEW_2
	func_1808(); // 0x75b NEW_2
	return 0; // 0x75d Return
}


func_1388(var_15_float, var_16_object, var_17_float, var_18_int)
{
	var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_int = 0; var_29_string = ""; var_30_int = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0; // 0x56c PushV
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; // 0x56d PushV
	var_35_object = var_16_object; // 0x56e Mov
	var_36_string = "health"; // 0x56f MovS
	func_1354(var_34_bool, var_35_object, var_36_string); // 0x570 NEW_2
	var_43_bool = var_34_bool == 0; // 0x572 Not
	if(var_43_bool == 0) goto Label_1398; // 0x573 JumpB
	var_15_float = 0.0; // 0x574 MovF
	return 12; // 0x575 Return
	
Label_1398:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x576 PushV
	var_45_object = var_16_object; // 0x577 Mov
	var_46_string = "armor"; // 0x578 MovS
	func_1354(var_44_bool, var_45_object, var_46_string); // 0x579 NEW_2
	var_47_bool = var_44_bool == 0; // 0x57b Not
	if(var_47_bool == 0) goto Label_1407; // 0x57c JumpB
	var_28_int = 0; // 0x57d MovI
	goto Label_1410; // 0x57e Jump
	
Label_1410:
	var_48_string = "armor_"; // 0x582 PushS
	var_49_string = ""; var_50_int = 0; // 0x583 PushV
	var_50_int = var_18_int; // 0x584 Mov
	func_1335(var_49_string, var_50_int); // 0x585 NEW_2
	var_29_string = var_48_string + var_49_string; // 0x587 Add2
	var_55_bool = 0; var_56_object = Obj(); var_57_string = ""; // 0x588 PushV
	var_56_object = var_16_object; // 0x589 Mov
	var_57_string = var_29_string; // 0x58a Mov
	func_1354(var_55_bool, var_56_object, var_57_string); // 0x58b NEW_2
	var_58_bool = var_55_bool == 0; // 0x58d Not
	if(var_58_bool == 0) goto Label_1425; // 0x58e JumpB
	var_30_int = 0; // 0x58f MovI
	goto Label_1427; // 0x590 Jump
	
Label_1427:
	var_59_float = 0; var_60_float = 0; var_61_float = 0; // 0x593 PushV
	var_62_int = var_28_int + var_30_int; // 0x594 Add
	var_63_float = 100.0; // 0x595 PushF
	var_60_float = var_62_int / var_62_int; // 0x596 Div2
	var_61_float = 1; // 0x597 MovI
	func_1525(var_59_float, var_60_float, var_61_float); // 0x598 NEW_2
	var_31_float = var_59_float; // 0x599 Mov
	var_65_string = "health"; // 0x59b PushS
	GetProperty(var_65_string, var_32_float); // 0x59c ObjFunc
	var_66_int = 1; // 0x59e PushI
	var_67_int = var_66_int - var_31_float; // 0x59f Sub
	var_33_float = var_17_float * var_67_int; // 0x5a0 Mult2
	var_68_string = "health"; // 0x5a1 PushS
	var_69_float = 0; var_70_float = 0; var_71_float = 0; var_72_float = 0; // 0x5a2 PushV
	var_70_float = var_32_float - var_33_float; // 0x5a3 Sub2
	var_71_float = 0; // 0x5a4 MovI
	var_72_float = 1; // 0x5a5 MovI
	func_1532(var_69_float, var_70_float, var_71_float, var_72_float); // 0x5a6 NEW_2
	SetProperty(var_68_string, var_69_float); // 0x5a8 ObjFunc
	var_75_bool = 0; var_76_object = Obj(); // 0x5aa PushV
	var_76_object = var_16_object; // 0x5ab Mov
	func_1349(var_75_bool, var_76_object); // 0x5ac NEW_2
	if(var_75_bool == 0) goto Label_1459; // 0x5ae JumpB
	var_79_float = 0; // 0x5af PushV
	var_79_float = -var_33_float; // 0x5b0 Neg2
	func_1637(var_79_float); // 0x5b1 NEW_2
	
Label_1459:
	var_15_float = var_33_float; // 0x5b3 Mov
	return 12; // 0x5b4 Return
	
Label_1425:
	GetProperty(var_29_string, var_30_int); // 0x591 ObjFunc
	
Label_1407:
	var_87_string = "armor"; // 0x57f PushS
	GetProperty(var_87_string, var_28_int); // 0x580 ObjFunc
}


func_1911(var_8_bool, var_9_string, var_10_int)
{
	var_11_bool = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_bool = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; // 0x777 PushV
	var_19_string = "ammo"; // 0x778 PushS
	GetWeaponProperty(var_15_bool, var_19_string, var_16_int); // 0x779 Func
	var_20_bool = 0; // 0x77b PushV
	var_20_bool = 0; // 0x77c MovB
	var_21_bool = var_15_bool; // 0x77d Push
	if(var_21_bool == 0) goto Label_1922; // 0x77e JumpB
	var_22_bool = var_16_int >= var_10_int; // 0x77f GE
	if(var_22_bool == 0) goto Label_1922; // 0x780 JumpB
	var_20_bool = 1; // 0x781 MovB
	
Label_1922:
	if(var_20_bool == 0) goto Label_1925; // 0x782 JumpB
	var_8_bool = 0; // 0x783 MovB
	return 8; // 0x784 Return
	
Label_1925:
	GetInvItemByName(var_17_int, var_9_string); // 0x785 Func
	
Label_1927:
	var_23_bool = var_16_int < var_10_int; // 0x787 LT
	if(var_23_bool == 0) goto Label_1938; // 0x788 JumpB
	var_24_int = 1; // 0x789 PushI
	RemoveItemByType(var_18_bool, var_17_int, var_24_int); // 0x78a Func
	var_25_bool = var_18_bool == 0; // 0x78c Not
	if(var_25_bool == 0) goto Label_1935; // 0x78d JumpB
	goto Label_1938; // 0x78e Jump
	
Label_1938:
	var_26_bool = var_16_int == 0; // 0x792 Not
	if(var_26_bool == 0) goto Label_1942; // 0x793 JumpB
	var_8_bool = 0; // 0x794 MovB
	return 8; // 0x795 Return
	
Label_1942:
	var_27_string = "ammo"; // 0x796 PushS
	SetWeaponProperty(var_15_bool, var_27_string, var_16_int); // 0x797 Func
	var_8_bool = 1; // 0x799 MovB
	return 8; // 0x79a Return
	
Label_1935:
	var_28_int = 1; // 0x78f PushI
	var_16_int = var_16_int + var_28_int; // 0x790 Add2
	goto Label_1927; // 0x791 Jump
}


func_1947(var_335_float)
{
	var_336_bool = 0; var_337_int = 0; var_338_bool = 0; var_339_int = 0; // 0x79b PushV
	var_340_string = "durability"; // 0x79c PushS
	GetWeaponProperty(var_338_bool, var_340_string, var_339_int); // 0x79d Func
	var_341_bool = var_338_bool; // 0x79f Push
	if(var_341_bool == 0) goto Label_1956; // 0x7a0 JumpB
	var_342_float = 100.0; // 0x7a1 PushF
	var_335_float = var_339_int / var_339_int; // 0x7a2 Div2
	goto Label_1957; // 0x7a3 Jump
	
Label_1957:
	return 4; // 0x7a5 Return
	
Label_1956:
	var_335_float = 1.0; // 0x7a4 MovF
}


func_1958(var_367_int)
{
	var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_int = 0; // 0x7a6 PushV
	var_373_string = "durability"; // 0x7a7 PushS
	GetWeaponProperty(var_371_bool, var_373_string, var_372_int); // 0x7a8 Func
	var_374_bool = var_371_bool == 0; // 0x7aa Not
	if(var_374_bool == 0) goto Label_1965; // 0x7ab JumpB
	var_372_int = 100; // 0x7ac MovI
	
Label_1965:
	var_375_int = 0; var_376_int = 0; var_377_int = 0; var_378_int = 0; // 0x7ad PushV
	var_376_int = var_372_int - var_367_int; // 0x7ae Sub2
	var_377_int = 0; // 0x7af MovI
	var_378_int = 100; // 0x7b0 MovI
	func_1543(var_375_int, var_376_int, var_377_int, var_378_int); // 0x7b1 NEW_2
	var_372_int = var_375_int; // 0x7b2 Mov
	var_381_string = "durability"; // 0x7b4 PushS
	SetWeaponProperty(var_371_bool, var_381_string, var_372_int); // 0x7b5 Func
	return 4; // 0x7b7 Return
}


func_1461(var_297_bool)
{
	var_299_bool = 0; var_300_bool = 0; // 0x5b5 PushV
	IsDead(var_300_bool); // 0x5b6 ObjFunc
	var_297_bool = var_300_bool; // 0x5b8 Mov
	return 2; // 0x5b9 Return
}


func_1976(var_332_float, var_333_float)
{
	var_335_float = 0; // 0x7b9 PushV
	func_1947(var_335_float); // 0x7ba NEW_2
	var_343_int = 1; // 0x7bc PushI
	var_344_int = var_343_int - var_333_float; // 0x7bd Sub
	var_345_float = var_335_float * var_344_int; // 0x7be Mult
	var_332_float = var_333_float + var_345_float; // 0x7bf Add2
	return 0; // 0x7c0 Return
}


func_1466(var_89_bool, var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); // 0x5ba PushV
	var_95_bool = var_90_object == 0; // 0x5bb NullEq
	if(var_95_bool == 0) goto Label_1471; // 0x5bc JumpB
	var_89_bool = 0; // 0x5bd MovB
	return 4; // 0x5be Return
	
Label_1471:
	GetScene(var_93_object); // 0x5bf Func
	var_96_bool = var_93_object == 0; // 0x5c1 NullEq
	if(var_96_bool == 0) goto Label_1477; // 0x5c2 JumpB
	var_89_bool = 0; // 0x5c3 MovB
	return 4; // 0x5c4 Return
	
Label_1477:
	GetScene(var_94_object); // 0x5c5 ObjFunc
	var_97_bool = var_93_object != var_94_object; // 0x5c7 Neq
	if(var_97_bool == 0) goto Label_1483; // 0x5c8 JumpB
	var_89_bool = 0; // 0x5c9 MovB
	return 4; // 0x5ca Return
	
Label_1483:
	var_89_bool = 1; // 0x5cb MovB
	return 4; // 0x5cc Return
}


func_957(var_145_float, var_146_bool)
{
	var_147_bool = var_146_bool; // 0x3be Push
	if(var_147_bool == 0) goto Label_962; // 0x3bf JumpB
	var_145_float = 0.4; // 0x3c0 MovF
	goto Label_963; // 0x3c1 Jump
	
Label_963:
	return 0; // 0x3c3 Return
	
Label_962:
	var_145_float = 0.2; // 0x3c2 MovF
}


func_1985(var_6_bool, var_7_int)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_bool = 0; var_13_bool = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_bool = 0; var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_bool = 0; var_25_int = 0; var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_bool = 0; // 0x7c1 PushV
	var_30_int = 0; // 0x7c2 PushV
	func_1693(var_30_int); // 0x7c3 NEW_2
	var_34_int = 0; // 0x7c5 PushI
	var_35_bool = var_30_int == var_34_int; // 0x7c6 Eq
	if(var_35_bool == 0) goto Label_2054; // 0x7c7 JumpB
	var_19_int = 0; // 0x7c8 MovI
	var_36_string = "birdMaskAchievement"; // 0x7c9 PushS
	GetVariable(var_36_string, var_19_int); // 0x7ca Func
	var_37_int = 0; // 0x7cc PushI
	var_38_bool = var_19_int == var_37_int; // 0x7cd Eq
	if(var_38_bool == 0) goto Label_2054; // 0x7ce JumpB
	var_39_int = 1; // 0x7cf PushI
	GetItemCount(var_20_int, var_39_int); // 0x7d0 Func
	var_40_string = "bird_mask"; // 0x7d2 PushS
	GetInvItemByName(var_21_int, var_40_string); // 0x7d3 Func
	var_41_string = "bird_balahon"; // 0x7d5 PushS
	GetInvItemByName(var_22_int, var_41_string); // 0x7d6 Func
	var_23_bool = 0; // 0x7d8 MovB
	var_24_bool = 0; // 0x7d9 MovB
	var_25_int = 0; // 0x7da MovI
	
Label_2011:
	var_42_bool = var_25_int < var_20_int; // 0x7db LT
	if(var_42_bool == 0) goto Label_2039; // 0x7dc JumpB
	var_43_int = 1; // 0x7dd PushI
	GetItem(var_26_object, var_25_int, var_43_int); // 0x7de Func
	GetItemID(var_27_int); // 0x7e0 ObjFunc
	var_44_bool = var_27_int == var_21_int; // 0x7e2 Eq
	if(var_44_bool == 0) goto Label_2027; // 0x7e3 JumpB
	var_45_int = 1; // 0x7e4 PushI
	IsItemSelected(var_28_bool, var_25_int, var_45_int); // 0x7e5 Func
	var_46_bool = var_28_bool; // 0x7e7 Push
	if(var_46_bool == 0) goto Label_2026; // 0x7e8 JumpB
	var_23_bool = 1; // 0x7e9 MovB
	
Label_2026:
	goto Label_2035; // 0x7ea Jump
	
Label_2035:
	var_26_object = 0; // 0x7f3 SetNull
	var_47_int = 1; // 0x7f4 PushI
	var_25_int = var_25_int + var_47_int; // 0x7f5 Add2
	goto Label_2011; // 0x7f6 Jump
	
Label_2027:
	var_48_bool = var_27_int == var_22_int; // 0x7eb Eq
	if(var_48_bool == 0) goto Label_2035; // 0x7ec JumpB
	var_49_int = 1; // 0x7ed PushI
	IsItemSelected(var_29_bool, var_25_int, var_49_int); // 0x7ee Func
	var_50_bool = var_29_bool; // 0x7f0 Push
	if(var_50_bool == 0) goto Label_2035; // 0x7f1 JumpB
	var_24_bool = 1; // 0x7f2 MovB
	
Label_2039:
	var_51_bool = 0; // 0x7f7 PushV
	var_51_bool = 0; // 0x7f8 MovB
	var_52_bool = var_23_bool; // 0x7f9 Push
	if(var_52_bool == 0) goto Label_2046; // 0x7fa JumpB
	var_53_bool = var_24_bool; // 0x7fb Push
	if(var_53_bool == 0) goto Label_2046; // 0x7fc JumpB
	var_51_bool = 1; // 0x7fd MovB
	
Label_2046:
	if(var_51_bool == 0) goto Label_2054; // 0x7fe JumpB
	var_54_string = "birdMaskAchievement"; // 0x7ff PushS
	var_55_int = 1; // 0x800 PushI
	SetVariable(var_54_string, var_55_int); // 0x801 Func
	var_56_string = "ACHIEVEMENT_THEY"; // 0x803 PushS
	UnlockAchievement(var_56_string); // 0x804 Func
	
Label_2054:
	var_57_bool = 0; var_58_int = 0; // 0x806 PushV
	var_58_int = var_7_int; // 0x807 Mov
	func_1699(var_57_bool, var_58_int); // 0x808 NEW_2
	var_6_bool = var_57_bool; // 0x809 Mov
	return 22; // 0x80b Return
}


func_964(var_101_bool)
{
	var_102_bool = 0; var_103_bool = 0; // 0x3c4 PushV
	IsShooting(var_103_bool); // 0x3c5 Func
	var_101_bool = var_103_bool; // 0x3c7 Mov
	return 2; // 0x3c8 Return
}


func_969(var_502_bool)
{
	var_503_bool = 0; var_504_bool = 0; var_505_bool = 0; var_506_bool = 0; // 0x3c9 PushV
	var_507_string = "ammo"; // 0x3ca PushS
	GetWeaponProperty(var_505_bool, var_507_string, var_506_bool); // 0x3cb Func
	var_508_bool = 0; // 0x3cd PushV
	var_508_bool = 1; // 0x3ce MovB
	var_509_bool = var_505_bool == 0; // 0x3cf Not
	if(var_509_bool == 0) goto Label_980; // 0x3d0 JumpB
	var_510_bool = var_506_bool == 0; // 0x3d1 Not
	if(var_510_bool == 0) goto Label_980; // 0x3d2 JumpB
	var_508_bool = 0; // 0x3d3 MovB
	
Label_980:
	if(var_508_bool == 0) goto Label_1002; // 0x3d4 JumpB
	var_511_bool = 0; var_512_string = ""; var_513_int = 0; // 0x3d5 PushV
	var_512_string = "revolver_ammo"; // 0x3d6 MovS
	var_513_int = 2; // 0x3d7 MovI
	func_1911(var_511_bool, var_512_string, var_513_int); // 0x3d8 NEW_2
	var_532_bool = var_511_bool == 0; // 0x3da Not
	if(var_532_bool == 0) goto Label_1002; // 0x3db JumpB
	var_533_string = ""; // 0x3dc PushV
	func_1068(var_533_string); // 0x3dd NEW_2
	var_534_string = "_noammo"; // 0x3df PushS
	var_535_int = var_533_string + var_534_string; // 0x3e0 Add
	PlaySound(var_535_int); // 0x3e1 Func
	var_536_string = "noammo"; // 0x3e3 PushS
	PlayAnimation(var_536_string); // 0x3e4 Func
	WaitForAnimEnd(); // 0x3e6 Func
	var_502_bool = 0; // 0x3e8 MovB
	return 4; // 0x3e9 Return
	
Label_1002:
	var_502_bool = 1; // 0x3ea MovB
	return 4; // 0x3eb Return
}


func_1487(var_78_string, var_79_int)
{
	var_80_int = 1; // 0x5d0 PushI
	var_81_bool = var_79_int == var_80_int; // 0x5d1 Eq
	if(var_81_bool == 0) goto Label_1494; // 0x5d2 JumpB
	var_78_string = "wood"; // 0x5d3 MovS
	return 0; // 0x5d4 Return
	
Label_1494:
	var_82_int = 2; // 0x5d6 PushI
	var_83_bool = var_79_int == var_82_int; // 0x5d7 Eq
	if(var_83_bool == 0) goto Label_1500; // 0x5d8 JumpB
	var_78_string = "metal"; // 0x5d9 MovS
	return 0; // 0x5da Return
	
Label_1500:
	var_84_int = 3; // 0x5dc PushI
	var_85_bool = var_79_int == var_84_int; // 0x5dd Eq
	if(var_85_bool == 0) goto Label_1506; // 0x5de JumpB
	var_78_string = "ground"; // 0x5df MovS
	return 0; // 0x5e0 Return
	
Label_1506:
	var_86_int = 4; // 0x5e2 PushI
	var_87_bool = var_79_int == var_86_int; // 0x5e3 Eq
	if(var_87_bool == 0) goto Label_1512; // 0x5e4 JumpB
	var_78_string = "water"; // 0x5e5 MovS
	return 0; // 0x5e6 Return
	
Label_1512:
	var_88_int = 5; // 0x5e8 PushI
	var_89_bool = var_79_int == var_88_int; // 0x5e9 Eq
	if(var_89_bool == 0) goto Label_1517; // 0x5ea JumpB
	var_78_string = "carpet"; // 0x5eb MovS
	return 0; // 0x5ec Return
	
Label_1517:
	var_78_string = "stone"; // 0x5ed MovS
	return 0; // 0x5ee Return
}


func_468(var_27_string)
{
	var_28_string = "empty"; // 0x1d5 PushS
	var_29_bool = var_27_string == var_28_string; // 0x1d6 Eq
	if(var_29_bool == 0) goto Label_478; // 0x1d7 JumpB
	TaskCall(4); // 0x1d9 TaskCall
	func_756(var_30_bool); // 0x1da NEW_2
	TaskReturn(); // 0x1db TaskReturn
	goto Label_504; // 0x1dd Jump
	
Label_504:
	return 0; // 0x1f8 Return
	
Label_478:
	var_237_string = "scalpel"; // 0x1de PushS
	var_238_bool = var_27_string == var_237_string; // 0x1df Eq
	if(var_238_bool == 0) goto Label_487; // 0x1e0 JumpB
	TaskCall(1); // 0x1e2 TaskCall
	func_85(var_239_bool); // 0x1e3 NEW_2
	TaskReturn(); // 0x1e4 TaskReturn
	goto Label_504; // 0x1e6 Jump
	
Label_487:
	var_398_string = "lockpick"; // 0x1e7 PushS
	var_399_bool = var_27_string == var_398_string; // 0x1e8 Eq
	if(var_399_bool == 0) goto Label_496; // 0x1e9 JumpB
	TaskCall(2); // 0x1eb TaskCall
	func_330(var_400_bool, var_401_bool); // 0x1ec NEW_2
	TaskReturn(); // 0x1ed TaskReturn
	goto Label_504; // 0x1ef Jump
	
Label_496:
	var_451_string = "gun"; // 0x1f0 PushS
	var_452_bool = var_27_string == var_451_string; // 0x1f1 Eq
	if(var_452_bool == 0) goto Label_504; // 0x1f2 JumpB
	TaskCall(5); // 0x1f4 TaskCall
	func_1078(var_453_bool); // 0x1f5 NEW_2
	TaskReturn(); // 0x1f6 TaskReturn
}


func_1004(var_563_int)
{
	var_563_int = 3; // 0x3ec MovI
	return 0; // 0x3ed Return
}


func_1006(var_568_float)
{
	var_568_float = 0.02618; // 0x3ee MovF
	return 0; // 0x3ef Return
}


func_1519(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x5ef PushV
	self(var_21_object); // 0x5f0 Func
	var_19_object = var_21_object; // 0x5f2 Mov
	return 2; // 0x5f3 Return
}


func_1008()
{
	var_539_bool = 0; var_540_int = 0; var_541_bool = 0; var_542_int = 0; // 0x3f0 PushV
	var_543_string = "ammo"; // 0x3f1 PushS
	GetWeaponProperty(var_541_bool, var_543_string, var_542_int); // 0x3f2 Func
	var_544_string = "ammo"; // 0x3f4 PushS
	var_545_int = 1; // 0x3f5 PushI
	var_546_int = var_542_int - var_545_int; // 0x3f6 Sub
	SetWeaponProperty(var_541_bool, var_544_string, var_546_int); // 0x3f7 Func
	func_2377(); // 0x3fa NEW_2
	return 4; // 0x3fc Return
}


func_1525(var_59_float, var_60_float, var_61_float)
{
	var_64_bool = var_60_float < var_61_float; // 0x5f6 LT
	if(var_64_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_59_float = var_60_float; // 0x5f8 Mov
	goto Label_1531; // 0x5f9 Jump
	
Label_1531:
	return 0; // 0x5fb Return
	
Label_1530:
	var_59_float = var_61_float; // 0x5fa Mov
}


func_505(var_10_string)
{
	var_11_string = "gun"; // 0x1fa PushS
	var_12_bool = var_10_string == var_11_string; // 0x1fb Eq
	if(var_12_bool == 0) goto Label_514; // 0x1fc JumpB
	TaskCall(6); // 0x1fe TaskCall
	func_1310(); // 0x1ff NEW_2
	TaskReturn(); // 0x200 TaskReturn
	
Label_514:
	return 0; // 0x202 Return
}


func_1532(var_69_float, var_70_float, var_71_float, var_72_float)
{
	var_73_bool = var_70_float < var_71_float; // 0x5fd LT
	if(var_73_bool == 0) goto Label_1537; // 0x5fe JumpB
	var_69_float = var_71_float; // 0x5ff Mov
	return 0; // 0x600 Return
	
Label_1537:
	var_74_bool = var_70_float > var_72_float; // 0x601 GT
	if(var_74_bool == 0) goto Label_1541; // 0x602 JumpB
	var_69_float = var_72_float; // 0x603 Mov
	return 0; // 0x604 Return
	
Label_1541:
	var_69_float = var_70_float; // 0x605 Mov
	return 0; // 0x606 Return
}


func_1021()
{
	var_624_bool = 0; var_625_bool = 0; var_626_bool = 0; var_627_bool = 0; // 0x3fd PushV
	var_628_string = "ammo"; // 0x3fe PushS
	GetWeaponProperty(var_626_bool, var_628_string, var_627_bool); // 0x3ff Func
	var_629_bool = 0; // 0x401 PushV
	var_629_bool = 1; // 0x402 MovB
	var_630_bool = var_626_bool == 0; // 0x403 Not
	if(var_630_bool == 0) goto Label_1032; // 0x404 JumpB
	var_631_bool = var_627_bool == 0; // 0x405 Not
	if(var_631_bool == 0) goto Label_1032; // 0x406 JumpB
	var_629_bool = 0; // 0x407 MovB
	
Label_1032:
	if(var_629_bool == 0) goto Label_1036; // 0x408 JumpB
	func_1037(); // 0x40a NEW_2
	
Label_1036:
	return 4; // 0x40c Return
}


