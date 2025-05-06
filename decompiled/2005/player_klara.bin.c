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
	func_2091(); // 0x13e NEW_2
}


task_2_event_32(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	var_5_bool = 0; // 0x1a8 PushV
	var_5_bool = 0; // 0x1a9 MovB
	var_6_bool = var_0_bool == 0; // 0x1aa Not
	if(var_6_bool == 0) goto Label_431; // 0x1ab JumpB
	var_7_bool = var_1_bool; // 0x1ac PushT
	if(var_7_bool == 0) goto Label_431; // 0x1ad JumpB
	var_5_bool = 1; // 0x1ae MovB
	
Label_431:
	if(var_5_bool == 0) goto Label_435; // 0x1af JumpB
	var_8_int = -1; // 0x1b0 PushI
	SetHandsItem(var_8_int); // 0x1b1 Func
	
Label_435:
	return 0; // 0x1b3 Return
}


task_3_event_13(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_string, var_7_bool, var_8_bool, var_9_string, var_10_bool)
{
	var_20_bool = 0; var_21_string = ""; var_22_bool = 0; var_23_bool = 0; var_24_string = ""; var_25_bool = 0; // 0x26d PushV
	IsWeaponHolstered(var_23_bool); // 0x26e Func
	var_26_bool = var_23_bool == 0; // 0x270 Not
	if(var_26_bool == 0) goto Label_645; // 0x271 JumpB
	func_746(); // 0x273 NEW_2
	GetCurrentWeapon(var_24_string); // 0x275 Func
	var_27_string = ""; // 0x277 PushV
	var_27_string = var_24_string; // 0x278 Mov
	func_462(var_27_string); // 0x279 NEW_2
	func_742(); // 0x27c NEW_2
	IsAltShooting(var_25_bool); // 0x27e Func
	var_633_bool = var_25_bool; // 0x280 Push
	if(var_633_bool == 0) goto Label_645; // 0x281 JumpB
	func_646(); // 0x283 NEW_2
	
Label_645:
	return 6; // 0x285 Return
}


task_3_event_36(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	var_5_bool = 0; var_6_string = ""; var_7_bool = 0; var_8_bool = 0; var_9_string = ""; var_10_bool = 0; // 0x286 PushV
	IsWeaponHolstered(var_8_bool); // 0x287 Func
	var_11_bool = var_8_bool == 0; // 0x289 Not
	if(var_11_bool == 0) goto Label_670; // 0x28a JumpB
	func_746(); // 0x28c NEW_2
	GetCurrentWeapon(var_9_string); // 0x28e Func
	var_13_string = ""; // 0x290 PushV
	var_13_string = var_9_string; // 0x291 Mov
	func_509(); // 0x292 NEW_2
	func_742(); // 0x295 NEW_2
	IsShooting(var_10_bool); // 0x297 Func
	var_19_bool = var_10_bool; // 0x299 Push
	if(var_19_bool == 0) goto Label_670; // 0x29a JumpB
	func_621(); // 0x29c NEW_2
	
Label_670:
	return 6; // 0x29e Return
}


task_3_event_15(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_746(); // 0x2a0 NEW_2
	TaskCall(0); // 0x2a3 TaskCall
	func_0(); // 0x2a4 NEW_2
	TaskReturn(); // 0x2a5 TaskReturn
	func_742(); // 0x2a8 NEW_2
	return 0; // 0x2aa Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_bool)
{
	var_6_bool = 0; var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_int = 0; // 0x2ab PushV
	var_14_bool = 0; var_15_int = 0; // 0x2ac PushV
	var_15_int = var_5_bool; // 0x2ad Mov
	func_1954(var_14_bool, var_15_int); // 0x2ae NEW_2
	if(var_14_bool == 0) goto Label_690; // 0x2b0 JumpB
	return 8; // 0x2b1 Return
	
Label_690:
	func_746(); // 0x2b3 NEW_2
	IsWeaponHolstered(var_10_bool); // 0x2b5 Func
	var_81_bool = var_10_bool == 0; // 0x2b7 Not
	if(var_81_bool == 0) goto Label_722; // 0x2b8 JumpB
	var_11_int = 0; // 0x2b9 MovI
	
Label_698:
	var_82_string = "idle"; // 0x2ba PushS
	var_83_int = 1; // 0x2bb PushI
	var_84_int = var_11_int + var_83_int; // 0x2bc Add
	var_85_int = var_82_string + var_84_int; // 0x2bd Add
	HasAnimation(var_12_bool, var_85_int); // 0x2be Func
	var_86_bool = var_12_bool == 0; // 0x2c0 Not
	if(var_86_bool == 0) goto Label_707; // 0x2c1 JumpB
	goto Label_710; // 0x2c2 Jump
	
Label_710:
	var_87_int = var_11_int; // 0x2c6 Push
	if(var_87_int == 0) goto Label_722; // 0x2c7 JumpB
	irand(var_13_int, var_11_int); // 0x2c8 Func
	var_88_string = "idle"; // 0x2ca PushS
	var_89_int = 1; // 0x2cb PushI
	var_90_int = var_13_int + var_89_int; // 0x2cc Add
	var_91_int = var_88_string + var_90_int; // 0x2cd Add
	PlayAnimation(var_91_int); // 0x2ce Func
	WaitForAnimEnd(); // 0x2d0 Func
	
Label_722:
	func_742(); // 0x2d3 NEW_2
	return 8; // 0x2d5 Return
	
Label_707:
	var_97_int = 1; // 0x2c3 PushI
	var_11_int = var_11_int + var_97_int; // 0x2c4 Add2
	goto Label_698; // 0x2c5 Jump
}


task_3_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_bool)
{
	var_6_string = ""; var_7_string = ""; // 0x2d6 PushV
	var_8_int = 11; // 0x2d7 PushI
	var_9_bool = var_5_bool == var_8_int; // 0x2d8 Eq
	if(var_9_bool == 0) goto Label_737; // 0x2d9 JumpB
	GetCurrentWeapon(var_7_string); // 0x2da Func
	var_10_string = ""; // 0x2dc PushV
	var_10_string = var_7_string; // 0x2dd Mov
	func_499(var_10_string); // 0x2de NEW_2
	goto Label_741; // 0x2e0 Jump
	
Label_741:
	return 2; // 0x2e5 Return
	
Label_737:
	var_38_int = 0; // 0x2e1 PushV
	var_38_int = var_5_bool; // 0x2e2 Mov
	func_2091(); // 0x2e3 NEW_2
}


task_4_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_bool)
{
	var_6_int = 10; // 0x3ad PushI
	var_7_bool = var_5_bool == var_6_int; // 0x3ae Eq
	if(var_7_bool == 0) goto Label_946; // 0x3af JumpB
	var_0_bool = 1; // 0x3b0 TMovB
	goto Label_950; // 0x3b1 Jump
	
Label_950:
	return 0; // 0x3b6 Return
	
Label_946:
	var_8_int = 0; // 0x3b2 PushV
	var_8_int = var_5_bool; // 0x3b3 Mov
	func_2091(); // 0x3b4 NEW_2
}


task_5_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int)
{
	var_6_int = 11; // 0x41b PushI
	var_7_bool = var_5_int == var_6_int; // 0x41c Eq
	if(var_7_bool == 0) goto Label_1057; // 0x41d JumpB
	func_1031(); // 0x41f NEW_2
	
Label_1057:
	var_33_int = 0; // 0x421 PushV
	var_33_int = var_5_int; // 0x422 Mov
	func_2091(); // 0x423 NEW_2
	return 0; // 0x425 Return
}


event_44(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1829(); // 0x740 NEW_2
	func_1777(); // 0x743 NEW_2
	return 0; // 0x745 Return
}


event_20(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1818(); // 0x747 NEW_2
	func_1777(); // 0x74a NEW_2
	return 0; // 0x74c Return
}


event_21(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1798(); // 0x74e NEW_2
	func_1787(); // 0x751 NEW_2
	return 0; // 0x753 Return
}


event_45(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_1808(); // 0x755 NEW_2
	return 0; // 0x757 Return
}


event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int)
{
	var_6_bool = 0; var_7_int = 0; // 0x7aa PushV
	var_7_int = var_5_int; // 0x7ab Mov
	func_1954(var_6_bool, var_7_int); // 0x7ac NEW_2
	return 0; // 0x7ae Return
}


event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_string)
{
	var_6_string = "die"; // 0x7b0 PushS
	var_7_bool = var_5_string == var_6_string; // 0x7b1 Eq
	if(var_7_bool == 0) goto Label_1974; // 0x7b2 JumpB
	func_1765(); // 0x7b4 NEW_2
	
Label_1974:
	return 0; // 0x7b6 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_float = 0; var_11_object = Obj(); var_12_object = Obj(); // 0x7b7 PushV
	var_13_string = "health"; // 0x7b8 PushS
	var_14_bool = var_6_string == var_13_string; // 0x7b9 Eq
	if(var_14_bool == 0) goto Label_1988; // 0x7ba JumpB
	var_15_string = "health"; // 0x7bb PushS
	GetProperty(var_15_string, var_10_float); // 0x7bc Func
	var_16_float = 0.001; // 0x7be PushF
	var_17_bool = var_10_float < var_16_float; // 0x7bf LT
	if(var_17_bool == 0) goto Label_1987; // 0x7c0 JumpB
	SignalDeath(var_5_object); // 0x7c1 Func
	
Label_1987:
	goto Label_2000; // 0x7c3 Jump
	
Label_2000:
	CreateStringVector(var_12_object); // 0x7d0 Func
	add(var_6_string); // 0x7d2 ObjFunc
	var_18_int = 10; // 0x7d4 PushI
	SendWorldWndMessage(var_18_int, var_12_object); // 0x7d5 Func
	return 6; // 0x7d7 Return
	
Label_1988:
	var_19_string = "reputation"; // 0x7c4 PushS
	var_20_bool = var_6_string == var_19_string; // 0x7c5 Eq
	if(var_20_bool == 0) goto Label_2000; // 0x7c6 JumpB
	GetScene(var_11_object); // 0x7c7 Func
	var_21_string = "prc"; // 0x7c9 PushS
	var_22_object = Obj(); // 0x7ca PushV
	func_1513(var_22_object); // 0x7cb NEW_2
	BroadcastMessage(var_21_string, var_22_object, var_11_object); // 0x7cd Func
	var_11_object = 0; // 0x7cf SetNull
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	var_6_bool = 0; // 0x7da PushV
	func_1659(var_6_bool); // 0x7db NEW_2
	var_10_bool = var_6_bool == 0; // 0x7dd Not
	if(var_10_bool == 0) goto Label_2018; // 0x7de JumpB
	func_1765(); // 0x7e0 NEW_2
	
Label_2018:
	return 0; // 0x7e2 Return
}


event_31(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_float, var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x7e3 PushV
	var_10_bool = var_5_object == 0; // 0x7e4 Not
	if(var_10_bool == 0) goto Label_2023; // 0x7e5 JumpB
	return 2; // 0x7e6 Return
	
Label_2023:
	var_11_object = GlobalVars[2]; // 0x7e7 PushGE
	in(var_9_bool, var_5_object); // 0x7e8 ObjFunc
	var_12_bool = var_9_bool; // 0x7ea Push
	if(var_12_bool == 0) goto Label_2033; // 0x7eb JumpB
	var_13_string = "Reputation is not changed for enemy: "; // 0x7ec PushS
	var_14_int = var_13_string + var_5_object; // 0x7ed Add
	Trace(var_14_int); // 0x7ee Func
	return 2; // 0x7f0 Return
	
Label_2033:
	var_15_bool = var_7_bool == 0; // 0x7f1 Not
	if(var_15_bool == 0) goto Label_2041; // 0x7f2 JumpB
	var_16_object = GlobalVars[1]; // 0x7f3 PushGE
	in(var_9_bool, var_5_object); // 0x7f4 ObjFunc
	var_17_bool = var_9_bool; // 0x7f6 Push
	if(var_17_bool == 0) goto Label_2041; // 0x7f7 JumpB
	return 2; // 0x7f8 Return
	
Label_2041:
	var_18_object = GlobalVars[1]; // 0x7f9 PushGE
	add(var_5_object); // 0x7fa ObjFunc
	var_19_bool = 0; var_20_object = Obj(); var_21_float = 0; // 0x7fc PushV
	var_22_object = Obj(); // 0x7fd PushV
	func_1513(var_22_object); // 0x7fe NEW_2
	var_20_object = var_22_object; // 0x7ff Mov
	var_21_float = var_6_float; // 0x801 Mov
	func_1596(var_19_bool, var_20_object, var_21_float); // 0x802 NEW_2
	return 2; // 0x804 Return
}


event_19(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	func_2269(); // 0x806 NEW_2
	func_1787(); // 0x809 NEW_2
	return 0; // 0x80b Return
}


event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	return 0; // 0x80d Return
}


event_39(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_float)
{
	var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; // 0x80e PushV
	var_10_float = 770.0; // 0x80f PushF
	var_11_bool = var_5_float > var_10_float; // 0x810 GT
	if(var_11_bool == 0) goto Label_2090; // 0x811 JumpB
	Trace(var_5_float); // 0x812 Func
	var_12_float = 770.0; // 0x814 PushF
	var_13_int = var_5_float - var_12_float; // 0x815 Sub
	var_14_float = 0.0035; // 0x816 PushF
	var_8_float = var_13_int * var_14_float; // 0x817 Mult2
	var_15_float = 0; var_16_object = Obj(); var_17_float = 0; var_18_int = 0; // 0x818 PushV
	var_19_object = Obj(); // 0x819 PushV
	func_1513(var_19_object); // 0x81a NEW_2
	var_16_object = var_19_object; // 0x81b Mov
	var_17_float = var_8_float; // 0x81d Mov
	var_18_int = 0; // 0x81e MovI
	func_1382(var_15_float, var_16_object, var_17_float, var_18_int); // 0x81f NEW_2
	var_9_float = var_15_float; // 0x820 Mov
	var_84_object = Obj(); // 0x822 PushV
	func_1513(var_84_object); // 0x823 NEW_2
	var_85_int = 0; // 0x825 PushI
	var_86_cvector = CVector(0.0, 0.0, 0.0); // 0x826 PushVec
	var_87_cvector = CVector(0.0, 0.0, 0.0); // 0x827 PushVec
	ReportHit(var_84_object, var_85_int, var_9_float, var_8_float, var_86_cvector, var_87_cvector); // 0x828 Func
	
Label_2090:
	return 4; // 0x82a Return
}


event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int)
{
	var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_string = ""; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_int = 0; var_14_bool = 0; var_15_bool = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_bool = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; // 0x82b PushV
	var_34_int = 0; // 0x82c PushI
	var_35_bool = var_5_int == var_34_int; // 0x82d Eq
	if(var_35_bool == 0) goto Label_2098; // 0x82e JumpB
	Inventory(); // 0x82f Func
	goto Label_2268; // 0x831 Jump
	
Label_2268:
	return 28; // 0x8dc Return
	
Label_2098:
	var_36_int = 1; // 0x832 PushI
	var_37_bool = var_5_int == var_36_int; // 0x833 Eq
	if(var_37_bool == 0) goto Label_2147; // 0x834 JumpB
	GetMainOutdoorScene(var_20_object); // 0x835 Func
	GetActiveScene(var_21_object); // 0x837 Func
	var_38_bool = var_20_object == 0; // 0x839 NullEq
	if(var_38_bool == 0) goto Label_2111; // 0x83a JumpB
	var_39_string = "Can't find main outdoor oscene"; // 0x83b PushS
	Trace(var_39_string); // 0x83c Func
	return 28; // 0x83e Return
	
Label_2111:
	GetMap(var_22_object); // 0x83f ObjFunc
	var_40_bool = var_22_object == 0; // 0x841 NullEq
	if(var_40_bool == 0) goto Label_2119; // 0x842 JumpB
	var_41_string = "Can't find map"; // 0x843 PushS
	Trace(var_41_string); // 0x844 Func
	return 28; // 0x846 Return
	
Label_2119:
	var_42_bool = var_20_object == var_21_object; // 0x847 Eq
	if(var_42_bool == 0) goto Label_2124; // 0x848 JumpB
	GetPosition(var_23_cvector); // 0x849 Func
	goto Label_2137; // 0x84b Jump
	
Label_2137:
	var_43_float = GetByIndex(var_23_cvector, 0); // 0x859 PushE
	var_44_float = GetByIndex(var_23_cvector, 2); // 0x85a PushE
	SetMapParams(var_43_float, var_44_float); // 0x85b ObjFunc
	ShowMap(var_22_object); // 0x85d Func
	var_22_object = 0; // 0x85f SetNull
	var_21_object = 0; // 0x860 SetNull
	var_20_object = 0; // 0x861 SetNull
	goto Label_2268; // 0x862 Jump
	
Label_2124:
	GetName(var_24_string); // 0x84c ObjFunc
	var_45_string = "pt_gmap_"; // 0x84e PushS
	var_46_int = var_45_string + var_24_string; // 0x84f Add
	GetLocator(var_46_int, var_25_bool, var_23_cvector, var_26_cvector); // 0x850 ObjFunc
	var_47_bool = var_25_bool == 0; // 0x852 Not
	if(var_47_bool == 0) goto Label_2137; // 0x853 JumpB
	var_48_string = "FIXME: No map locator for scene : "; // 0x854 PushS
	var_49_int = var_48_string + var_24_string; // 0x855 Add
	Trace(var_49_int); // 0x856 Func
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x858 MovV
	
Label_2147:
	var_50_int = 2; // 0x863 PushI
	var_51_bool = var_5_int == var_50_int; // 0x864 Eq
	if(var_51_bool == 0) goto Label_2153; // 0x865 JumpB
	Diary(); // 0x866 Func
	goto Label_2268; // 0x868 Jump
	
Label_2153:
	var_52_int = 3; // 0x869 PushI
	var_53_bool = var_5_int == var_52_int; // 0x86a Eq
	if(var_53_bool == 0) goto Label_2159; // 0x86b JumpB
	ShowMessage(); // 0x86c Func
	goto Label_2268; // 0x86e Jump
	
Label_2159:
	var_54_int = 4; // 0x86f PushI
	var_55_bool = var_5_int == var_54_int; // 0x870 Eq
	if(var_55_bool == 0) goto Label_2172; // 0x871 JumpB
	ShowPlayerStats(var_27_int); // 0x872 Func
	var_56_int = 1; // 0x874 PushI
	var_57_bool = var_27_int == var_56_int; // 0x875 Eq
	if(var_57_bool == 0) goto Label_2171; // 0x876 JumpB
	var_58_string = "people.xml"; // 0x877 PushS
	var_59_bool = 1; // 0x878 PushB
	ShowWindow(var_58_string, var_59_bool); // 0x879 Func
	
Label_2171:
	goto Label_2268; // 0x87b Jump
	
Label_2172:
	var_60_int = 5; // 0x87c PushI
	var_61_bool = var_5_int == var_60_int; // 0x87d Eq
	if(var_61_bool == 0) goto Label_2201; // 0x87e JumpB
	IsFlashlightOn(var_28_bool); // 0x87f Func
	var_62_bool = var_28_bool; // 0x881 Push
	if(var_62_bool == 0) goto Label_2186; // 0x882 JumpB
	var_63_bool = 0; // 0x883 PushB
	SwitchFlashlight(var_63_bool); // 0x884 Func
	var_64_string = "flashlight_off"; // 0x886 PushS
	PlaySound(var_64_string); // 0x887 Func
	goto Label_2200; // 0x889 Jump
	
Label_2200:
	goto Label_2268; // 0x898 Jump
	
Label_2186:
	var_65_bool = 0; // 0x88a PushV
	func_1665(var_65_bool); // 0x88b NEW_2
	if(var_65_bool == 0) goto Label_2197; // 0x88d JumpB
	var_69_bool = 1; // 0x88e PushB
	SwitchFlashlight(var_69_bool); // 0x88f Func
	var_70_string = "flashlight_on"; // 0x891 PushS
	PlaySound(var_70_string); // 0x892 Func
	goto Label_2200; // 0x894 Jump
	
Label_2197:
	var_71_string = "flashlight_nofuel"; // 0x895 PushS
	PlaySound(var_71_string); // 0x896 Func
	
Label_2201:
	var_72_int = 6; // 0x899 PushI
	var_73_bool = var_5_int == var_72_int; // 0x89a Eq
	if(var_73_bool == 0) goto Label_2241; // 0x89b JumpB
	var_74_int = 0; // 0x89c PushV
	func_1671(var_74_int); // 0x89d NEW_2
	var_78_int = 0; // 0x89f PushI
	var_79_bool = var_74_int != var_78_int; // 0x8a0 Neq
	if(var_79_bool == 0) goto Label_2211; // 0x8a1 JumpB
	return 28; // 0x8a2 Return
	
Label_2211:
	IsVisirOn(var_29_bool); // 0x8a3 Func
	var_80_bool = var_29_bool; // 0x8a5 Push
	if(var_80_bool == 0) goto Label_2222; // 0x8a6 JumpB
	var_81_bool = 0; // 0x8a7 PushB
	SwitchVisir(var_81_bool); // 0x8a8 Func
	var_82_int = 2; // 0x8aa PushI
	SendWorldWndMessage(var_82_int); // 0x8ab Func
	goto Label_2240; // 0x8ad Jump
	
Label_2240:
	goto Label_2268; // 0x8c0 Jump
	
Label_2222:
	var_83_string = "visir"; // 0x8ae PushS
	GetProperty(var_83_string, var_30_int); // 0x8af Func
	var_84_int = var_30_int; // 0x8b1 Push
	if(var_84_int == 0) goto Label_2240; // 0x8b2 JumpB
	var_85_string = "vcharge"; // 0x8b3 PushS
	GetProperty(var_85_string, var_31_int); // 0x8b4 Func
	var_86_int = 10; // 0x8b6 PushI
	var_87_bool = var_31_int >= var_86_int; // 0x8b7 GE
	if(var_87_bool == 0) goto Label_2240; // 0x8b8 JumpB
	var_88_bool = 1; // 0x8b9 PushB
	SwitchVisir(var_88_bool); // 0x8ba Func
	var_89_int = 1; // 0x8bc PushI
	SendWorldWndMessage(var_89_int); // 0x8bd Func
	goto Label_2240; // 0x8bf Jump
	
Label_2241:
	var_90_int = 7; // 0x8c1 PushI
	var_91_bool = var_5_int == var_90_int; // 0x8c2 Eq
	if(var_91_bool == 0) goto Label_2253; // 0x8c3 JumpB
	IsOverrideActive(var_32_bool); // 0x8c4 Func
	var_92_bool = var_32_bool == 0; // 0x8c6 Not
	if(var_92_bool == 0) goto Label_2252; // 0x8c7 JumpB
	var_93_string = "people.xml"; // 0x8c8 PushS
	var_94_bool = 1; // 0x8c9 PushB
	ShowWindow(var_93_string, var_94_bool); // 0x8ca Func
	
Label_2252:
	goto Label_2268; // 0x8cc Jump
	
Label_2253:
	var_95_int = 21; // 0x8cd PushI
	var_96_bool = var_5_int == var_95_int; // 0x8ce Eq
	if(var_96_bool == 0) goto Label_2268; // 0x8cf JumpB
	GetWeaponItem(var_33_int); // 0x8d0 Func
	var_97_int = -1; // 0x8d2 PushI
	var_98_bool = var_33_int != var_97_int; // 0x8d3 Neq
	if(var_98_bool == 0) goto Label_2268; // 0x8d4 JumpB
	var_99_bool = 0; // 0x8d5 PushB
	var_100_int = 0; // 0x8d6 PushI
	SelectItem(var_33_int, var_99_bool, var_100_int); // 0x8d7 Func
	var_101_int = -1; // 0x8d9 PushI
	SetHandsItem(var_101_int); // 0x8da Func
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool)
{
	var_5_object = Obj(); var_6_int = 0; var_7_object = Obj(); var_8_int = 0; // 0x1b4 PushV
	CreateStringVector(var_7_object); // 0x1b5 Func
	var_9_string = "player_reputation_decrease.bin"; // 0x1b7 PushS
	add(var_9_string); // 0x1b8 ObjFunc
	var_10_string = "player_klara_dream.bin"; // 0x1ba PushS
	add(var_10_string); // 0x1bb ObjFunc
	var_11_string = "player_init"; // 0x1bd PushS
	GetVariable(var_11_string, var_8_int); // 0x1be Func
	var_12_bool = var_8_int == 0; // 0x1c0 Not
	if(var_12_bool == 0) goto Label_456; // 0x1c1 JumpB
	Diary(); // 0x1c2 Func
	var_13_string = "player_init"; // 0x1c4 PushS
	var_14_int = 1; // 0x1c5 PushI
	SetVariable(var_13_string, var_14_int); // 0x1c6 Func
	
Label_456:
	var_15_object = Obj(); // 0x1c8 PushV
	var_15_object = var_7_object; // 0x1c9 Mov
	func_511(var_15_object); // 0x1ca NEW_2
	return 4; // 0x1cc Return
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
	func_1513(var_14_object); // 0xb NEW_2
	BroadcastMessage(var_13_string, var_14_object, var_11_object); // 0xd Func
	var_17_string = ""; // 0xf PushV
	var_18_string = "_unholster"; // 0x10 PushS
	var_17_string = var_9_string + var_18_string; // 0x11 Add2
	func_1651(var_17_string); // 0x12 NEW_2
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
	func_1513(var_25_object); // 0x1f NEW_2
	BroadcastMessage(var_24_string, var_25_object, var_11_object); // 0x21 Func
	var_26_string = ""; // 0x23 PushV
	var_27_string = "_holster"; // 0x24 PushS
	var_26_string = var_9_string + var_27_string; // 0x25 Add2
	func_1651(var_26_string); // 0x26 NEW_2
	var_28_string = "holster"; // 0x28 PushS
	PlayAnimation(var_28_string); // 0x29 Func
	WaitForAnimEnd(); // 0x2b Func
	var_29_bool = 1; // 0x2d PushB
	SetWeaponHolster(var_29_bool); // 0x2e Func
}


func_1537(var_371_int, var_372_int, var_373_int, var_374_int)
{
	var_375_bool = var_372_int < var_373_int; // 0x602 LT
	if(var_375_bool == 0) goto Label_1542; // 0x603 JumpB
	var_371_int = var_373_int; // 0x604 Mov
	return 0; // 0x605 Return
	
Label_1542:
	var_376_bool = var_372_int > var_374_int; // 0x606 GT
	if(var_376_bool == 0) goto Label_1546; // 0x607 JumpB
	var_371_int = var_374_int; // 0x608 Mov
	return 0; // 0x609 Return
	
Label_1546:
	var_371_int = var_372_int; // 0x60a Mov
	return 0; // 0x60b Return
}


func_1031()
{
	var_8_bool = 0; var_9_string = ""; var_10_int = 0; // 0x407 PushV
	var_9_string = "revolver_ammo"; // 0x408 MovS
	var_10_int = 2; // 0x409 MovI
	func_1880(var_8_bool, var_9_string, var_10_int); // 0x40a NEW_2
	if(var_8_bool == 0) goto Label_1049; // 0x40c JumpB
	var_29_string = ""; // 0x40d PushV
	func_1062(var_29_string); // 0x40e NEW_2
	var_30_string = "_reload"; // 0x410 PushS
	var_31_int = var_29_string + var_30_string; // 0x411 Add
	PlaySound(var_31_int); // 0x412 Func
	var_32_string = "reload"; // 0x414 PushS
	PlayAnimation(var_32_string); // 0x415 Func
	WaitForAnimEnd(); // 0x417 Func
	
Label_1049:
	return 0; // 0x419 Return
}


func_1548(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x60c PushV
	CreateObjectSet(var_33_object); // 0x60d Func
	var_31_object = var_33_object; // 0x60f Mov
	return 2; // 0x610 Return
}


func_1554(var_566_object)
{
	var_567_object = Obj(); var_568_object = Obj(); // 0x612 PushV
	CreateObjectVector(var_568_object); // 0x613 Func
	var_566_object = var_568_object; // 0x615 Mov
	return 2; // 0x616 Return
}


func_1560(var_110_float, var_111_cvector, var_112_cvector)
{
	var_113_float = GetByIndex(var_111_cvector, 0); // 0x619 PushE
	var_114_float = GetByIndex(var_112_cvector, 0); // 0x61a PushE
	var_115_float = var_113_float * var_114_float; // 0x61b Mult
	var_116_float = GetByIndex(var_111_cvector, 2); // 0x61c PushE
	var_117_float = GetByIndex(var_112_cvector, 2); // 0x61d PushE
	var_118_float = var_116_float * var_117_float; // 0x61e Mult
	var_110_float = var_115_float + var_118_float; // 0x61f Add2
	return 0; // 0x620 Return
}


func_1569(var_119_float, var_120_cvector)
{
	var_121_float = GetByIndex(var_120_cvector, 0); // 0x622 PushE
	var_122_float = GetByIndex(var_120_cvector, 0); // 0x623 PushE
	var_123_float = var_121_float * var_122_float; // 0x624 Mult
	var_124_float = GetByIndex(var_120_cvector, 2); // 0x625 PushE
	var_125_float = GetByIndex(var_120_cvector, 2); // 0x626 PushE
	var_126_float = var_124_float * var_125_float; // 0x627 Mult
	var_127_int = var_123_float + var_126_float; // 0x628 Add
	var_119_float = sqrt(var_127_int); // 0x629 Sqrt2
	return 0; // 0x62a Return
}


func_1062(var_29_string)
{
	var_29_string = "gun"; // 0x426 MovS
	return 0; // 0x427 Return
}


func_1064(var_555_float)
{
	var_555_float = 1.3; // 0x428 MovF
	return 0; // 0x429 Return
}


func_1066(var_579_int)
{
	var_579_int = 1; // 0x42a MovI
	return 0; // 0x42b Return
}


func_1579(var_107_float, var_108_cvector, var_109_cvector)
{
	var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); // 0x62c PushV
	var_111_cvector = var_108_cvector; // 0x62d Mov
	var_112_cvector = var_109_cvector; // 0x62e Mov
	func_1560(var_110_float, var_111_cvector, var_112_cvector); // 0x62f NEW_2
	var_119_float = 0; var_120_cvector = CVector(0,0,0); // 0x631 PushV
	var_120_cvector = var_108_cvector; // 0x632 Mov
	func_1569(var_119_float, var_120_cvector); // 0x633 NEW_2
	var_128_float = 0; var_129_cvector = CVector(0,0,0); // 0x635 PushV
	var_129_cvector = var_109_cvector; // 0x636 Mov
	func_1569(var_128_float, var_129_cvector); // 0x637 NEW_2
	var_130_float = var_119_float * var_128_float; // 0x639 Mult
	var_107_float = var_110_float / var_110_float; // 0x63a Div2
	return 0; // 0x63b Return
}


func_1068(var_581_int)
{
	var_581_int = 2; // 0x42c MovI
	return 0; // 0x42d Return
}


func_1070(var_552_int)
{
	var_552_int = 2; // 0x42e MovI
	return 0; // 0x42f Return
}


func_1072(var_0_bool)
{
	var_445_string = ""; var_446_string = ""; var_447_int = 0; var_448_bool = 0; var_449_float = 0; var_450_float = 0; var_451_cvector = CVector(0,0,0); var_452_object = Obj(); var_453_int = 0; var_454_cvector = CVector(0,0,0); var_455_object = Obj(); var_456_int = 0; var_457_cvector = CVector(0,0,0); var_458_float = 0; var_459_float = 0; var_460_float = 0; var_461_object = Obj(); var_462_float = 0; var_463_object = Obj(); var_464_object = Obj(); var_465_int = 0; var_466_int = 0; var_467_object = Obj(); var_468_bool = 0; var_469_string = ""; var_470_string = ""; var_471_int = 0; var_472_bool = 0; var_473_float = 0; var_474_float = 0; var_475_cvector = CVector(0,0,0); var_476_object = Obj(); var_477_int = 0; var_478_cvector = CVector(0,0,0); var_479_object = Obj(); var_480_int = 0; var_481_cvector = CVector(0,0,0); var_482_float = 0; var_483_float = 0; var_484_float = 0; var_485_object = Obj(); var_486_float = 0; var_487_object = Obj(); var_488_object = Obj(); var_489_int = 0; var_490_int = 0; var_491_object = Obj(); var_492_bool = 0; // 0x430 PushV
	var_0_bool = 0; // 0x431 TMovB
	
Label_1074:
	var_493_bool = 0; // 0x432 PushV
	func_963(var_493_bool); // 0x433 NEW_2
	var_528_bool = var_493_bool == 0; // 0x435 Not
	if(var_528_bool == 0) goto Label_1080; // 0x436 JumpB
	goto Label_1295; // 0x437 Jump
	
Label_1295:
	return 48; // 0x50f Return
	
Label_1080:
	GetCurrentWeapon(var_469_string); // 0x438 Func
	var_470_string = "attack1"; // 0x43a MovS
	var_529_bool = 1; // 0x43b PushB
	SetAttackState(var_529_bool); // 0x43c Func
	func_1002(); // 0x43f NEW_2
	var_544_string = "_phase1"; // 0x441 PushS
	var_545_int = var_470_string + var_544_string; // 0x442 Add
	PlayAnimation(var_545_int); // 0x443 Func
	WaitForAnimEnd(); // 0x445 Func
	var_546_bool = var_0_bool; // 0x447 PushT
	if(var_546_bool == 0) goto Label_1098; // 0x448 JumpB
	return 48; // 0x449 Return
	
Label_1098:
	var_547_string = "shot"; // 0x44a PushS
	TriggerWeapon(var_547_string); // 0x44b Func
	var_548_string = ""; // 0x44d PushV
	func_1062(var_548_string); // 0x44e NEW_2
	var_549_string = "_shot"; // 0x450 PushS
	var_550_int = var_548_string + var_549_string; // 0x451 Add
	PlaySound(var_550_int); // 0x452 Func
	var_551_int = 0; // 0x454 PushV
	var_552_int = 0; // 0x455 PushV
	func_1070(var_552_int); // 0x456 NEW_2
	var_551_int = var_552_int; // 0x457 Mov
	func_1927(var_551_int); // 0x459 NEW_2
	func_1296(); // 0x45c NEW_2
	var_553_bool = 0; // 0x45e PushB
	SetAttackState(var_553_bool); // 0x45f Func
	var_554_int = 0; // 0x461 PushV
	func_998(var_554_int); // 0x462 NEW_2
	var_471_int = var_554_int; // 0x463 Mov
	var_472_bool = 0; // 0x465 MovB
	var_555_float = 0; // 0x466 PushV
	func_1064(var_555_float); // 0x467 NEW_2
	var_473_float = var_555_float / var_555_float; // 0x469 Div2
	var_556_float = 1.0; // 0x46a PushF
	var_557_float = 1.5; // 0x46b PushF
	var_558_float = 1.0; // 0x46c PushF
	var_559_float = 0; // 0x46d PushV
	func_1000(var_559_float); // 0x46e NEW_2
	var_560_float = var_558_float / var_559_float; // 0x470 Div
	var_561_float = 1.5; // 0x471 PushF
	var_562_int = var_560_float - var_561_float; // 0x472 Sub
	var_563_float = 0; // 0x473 PushV
	func_1916(var_563_float); // 0x474 NEW_2
	var_564_float = var_562_int * var_563_float; // 0x476 Mult
	var_565_int = var_557_float + var_564_float; // 0x477 Add
	var_474_float = var_556_float / var_556_float; // 0x478 Div2
	GetDirection(var_475_cvector); // 0x479 Func
	var_566_object = Obj(); // 0x47b PushV
	func_1554(var_566_object); // 0x47c NEW_2
	var_476_object = var_566_object; // 0x47d Mov
	var_477_int = 0; // 0x47f MovI
	
Label_1152:
	var_569_bool = var_477_int < var_471_int; // 0x480 LT
	if(var_569_bool == 0) goto Label_1250; // 0x481 JumpB
	RandVecCone3D(var_478_cvector, var_475_cvector, var_474_float); // 0x482 Func
	var_570_int = 10000; // 0x484 PushI
	GetVictimMaterialExact(var_479_object, var_480_int, var_481_cvector, var_478_cvector, var_570_int); // 0x485 Func
	var_571_object = var_479_object; // 0x487 Push
	if(var_571_object == 0) goto Label_1246; // 0x488 JumpB
	var_482_float = var_473_float; // 0x489 Mov
	var_572_int = 4; // 0x48a PushI
	var_573_bool = var_480_int == var_572_int; // 0x48b Eq
	if(var_573_bool == 0) goto Label_1167; // 0x48c JumpB
	var_574_float = 3.0; // 0x48d PushF
	var_482_float = var_482_float * var_574_float; // 0x48e Mult2
	
Label_1167:
	var_575_float = 0; var_576_object = Obj(); var_577_float = 0; var_578_int = 0; // 0x48f PushV
	var_576_object = var_479_object; // 0x490 Mov
	var_577_float = var_482_float; // 0x491 Mov
	var_579_int = 0; // 0x492 PushV
	func_1066(var_579_int); // 0x493 NEW_2
	var_578_int = var_579_int; // 0x494 Mov
	func_1382(var_575_float, var_576_object, var_577_float, var_578_int); // 0x496 NEW_2
	var_483_float = var_575_float; // 0x497 Mov
	var_580_float = var_483_float; // 0x499 Push
	if(var_580_float == 0) goto Label_1228; // 0x49a JumpB
	add(var_479_object); // 0x49b ObjFunc
	var_581_int = 0; // 0x49d PushV
	func_1068(var_581_int); // 0x49e NEW_2
	ReportHit(var_479_object, var_581_int, var_483_float, var_482_float, var_481_cvector, var_478_cvector); // 0x4a0 Func
	var_582_bool = 0; // 0x4a2 PushV
	func_1297(var_582_bool); // 0x4a3 NEW_2
	if(var_582_bool == 0) goto Label_1227; // 0x4a5 JumpB
	var_583_string = "health"; // 0x4a6 PushS
	GetProperty(var_583_string, var_484_float); // 0x4a7 ObjFunc
	var_584_bool = var_484_float == 0; // 0x4a9 Not
	if(var_584_bool == 0) goto Label_1227; // 0x4aa JumpB
	var_585_int = 10000; // 0x4ab PushI
	GetVictimMaterialExact(var_485_object, var_480_int, var_481_cvector, var_478_cvector, var_585_int, var_479_object); // 0x4ac Func
	var_586_bool = 0; // 0x4ae PushV
	var_586_bool = 0; // 0x4af MovB
	var_587_object = var_485_object; // 0x4b0 Push
	if(var_587_object == 0) goto Label_1205; // 0x4b1 JumpB
	var_588_bool = var_485_object != var_479_object; // 0x4b2 Neq
	if(var_588_bool == 0) goto Label_1205; // 0x4b3 JumpB
	var_586_bool = 1; // 0x4b4 MovB
	
Label_1205:
	if(var_586_bool == 0) goto Label_1226; // 0x4b5 JumpB
	var_589_float = 0; var_590_object = Obj(); var_591_float = 0; var_592_int = 0; // 0x4b6 PushV
	var_590_object = var_485_object; // 0x4b7 Mov
	var_593_float = 0.75; // 0x4b8 PushF
	var_591_float = var_482_float * var_593_float; // 0x4b9 Mult2
	var_594_int = 0; // 0x4ba PushV
	func_1066(var_594_int); // 0x4bb NEW_2
	var_592_int = var_594_int; // 0x4bc Mov
	func_1382(var_589_float, var_590_object, var_591_float, var_592_int); // 0x4be NEW_2
	var_486_float = var_589_float; // 0x4bf Mov
	var_595_float = var_486_float; // 0x4c1 Push
	if(var_595_float == 0) goto Label_1226; // 0x4c2 JumpB
	add(var_485_object); // 0x4c3 ObjFunc
	var_596_int = 0; // 0x4c5 PushV
	func_1068(var_596_int); // 0x4c6 NEW_2
	ReportHit(var_485_object, var_596_int, var_486_float, var_482_float, var_481_cvector, var_478_cvector); // 0x4c8 Func
	
Label_1226:
	var_485_object = 0; // 0x4ca SetNull
	
Label_1227:
	goto Label_1246; // 0x4cb Jump
	
Label_1246:
	var_479_object = 0; // 0x4de SetNull
	var_597_int = 1; // 0x4df PushI
	var_477_int = var_477_int + var_597_int; // 0x4e0 Add2
	goto Label_1152; // 0x4e1 Jump
	
Label_1228:
	var_598_int = -1; // 0x4cc PushI
	var_599_bool = var_480_int != var_598_int; // 0x4cd Neq
	if(var_599_bool == 0) goto Label_1246; // 0x4ce JumpB
	var_600_bool = var_472_bool == 0; // 0x4cf Not
	if(var_600_bool == 0) goto Label_1246; // 0x4d0 JumpB
	GetScene(var_487_object); // 0x4d1 Func
	var_601_string = "scripted"; // 0x4d3 PushS
	var_602_cvector = CVector(0.0, 0.0, 1.0); // 0x4d4 PushVec
	var_603_string = "richochet.xml"; // 0x4d5 PushS
	AddActorByType(var_488_object, var_601_string, var_487_object, var_481_cvector, var_602_cvector, var_603_string); // 0x4d6 Func
	var_604_string = "Material"; // 0x4d8 PushS
	SetScriptProperty(var_604_string, var_480_int); // 0x4d9 ObjFunc
	var_472_bool = 1; // 0x4db MovB
	var_488_object = 0; // 0x4dc SetNull
	var_487_object = 0; // 0x4dd SetNull
	
Label_1250:
	size(var_489_int); // 0x4e2 ObjFunc
	var_490_int = 0; // 0x4e4 MovI
	
Label_1253:
	var_605_bool = var_490_int < var_489_int; // 0x4e5 LT
	if(var_605_bool == 0) goto Label_1278; // 0x4e6 JumpB
	get(var_491_object, var_490_int); // 0x4e7 ObjFunc
	ReportAttack(var_491_object); // 0x4e9 Func
	var_606_object = GlobalVars[2]; // 0x4eb PushGE
	in(var_492_bool, var_491_object); // 0x4ec ObjFunc
	var_607_bool = var_492_bool == 0; // 0x4ee Not
	if(var_607_bool == 0) goto Label_1271; // 0x4ef JumpB
	var_608_object = GlobalVars[3]; // 0x4f0 PushGE
	add(var_491_object); // 0x4f1 ObjFunc
	var_609_bool = 0; // 0x4f3 PushB
	BroadcastPlayerDamage(var_491_object, var_609_bool); // 0x4f4 Func
	goto Label_1274; // 0x4f6 Jump
	
Label_1274:
	var_491_object = 0; // 0x4fa SetNull
	var_610_int = 1; // 0x4fb PushI
	var_490_int = var_490_int + var_610_int; // 0x4fc Add2
	goto Label_1253; // 0x4fd Jump
	
Label_1271:
	var_611_bool = 1; // 0x4f7 PushB
	BroadcastPlayerDamage(var_491_object, var_611_bool); // 0x4f8 Func
	
Label_1278:
	var_612_string = "_phase2"; // 0x4fe PushS
	var_613_int = var_470_string + var_612_string; // 0x4ff Add
	PlayAnimation(var_613_int); // 0x500 Func
	WaitForAnimEnd(); // 0x502 Func
	var_614_bool = var_0_bool; // 0x504 PushT
	if(var_614_bool == 0) goto Label_1287; // 0x505 JumpB
	return 48; // 0x506 Return
	
Label_1287:
	func_1015(); // 0x508 NEW_2
	var_476_object = 0; // 0x50a SetNull
	var_630_bool = 0; // 0x50b PushV
	func_1299(var_630_bool); // 0x50c NEW_2
	if(var_630_bool == 0) goto Label_1074; // 0x50e JumpB
}


func_50(var_308_string)
{
	var_308_string = "scalpel"; // 0x32 MovS
	return 0; // 0x33 Return
}


func_52(var_326_float)
{
	var_326_float = 0.6; // 0x35 MovF
	return 0; // 0x36 Return
}


func_55(var_330_float)
{
	var_330_float = 0.5; // 0x37 MovF
	return 0; // 0x38 Return
}


func_57(var_364_int)
{
	var_364_int = 2; // 0x39 MovI
	return 0; // 0x3a Return
}


func_59(var_349_int)
{
	var_349_int = 0; // 0x3b MovI
	return 0; // 0x3c Return
}


func_1596(var_19_bool, var_20_object, var_21_float)
{
	var_25_bool = var_20_object == 0; // 0x63d Not
	if(var_25_bool == 0) goto Label_1601; // 0x63e JumpB
	var_19_bool = 0; // 0x63f MovB
	return 0; // 0x640 Return
	
Label_1601:
	var_26_int = 0; // 0x641 PushI
	var_27_bool = var_21_float > var_26_int; // 0x642 GT
	if(var_27_bool == 0) goto Label_1608; // 0x643 JumpB
	var_28_int = 8; // 0x644 PushI
	SendWorldWndMessage(var_28_int); // 0x645 Func
	goto Label_1617; // 0x647 Jump
	
Label_1617:
	var_29_float = 0; // 0x651 PushV
	var_29_float = var_21_float; // 0x652 Mov
	func_1641(var_29_float); // 0x653 NEW_2
	var_33_bool = 0; var_34_object = Obj(); var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0; // 0x655 PushV
	var_34_object = var_20_object; // 0x656 Mov
	var_35_string = "reputation"; // 0x657 MovS
	var_36_float = var_21_float; // 0x658 Mov
	var_37_float = 0; // 0x659 MovI
	var_38_float = 1; // 0x65a MovI
	func_1360(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float); // 0x65b NEW_2
	var_19_bool = 1; // 0x65d MovB
	return 0; // 0x65e Return
	
Label_1608:
	var_57_int = 0; // 0x648 PushI
	var_58_bool = var_21_float < var_57_int; // 0x649 LT
	if(var_58_bool == 0) goto Label_1615; // 0x64a JumpB
	var_59_int = 9; // 0x64b PushI
	SendWorldWndMessage(var_59_int); // 0x64c Func
	goto Label_1617; // 0x64e Jump
	
Label_1615:
	var_19_bool = 0; // 0x64f MovB
	return 0; // 0x650 Return
}


func_61(var_358_int)
{
	var_358_int = 1; // 0x3d MovI
	return 0; // 0x3e Return
}


func_63(var_324_float, var_325_bool)
{
	var_326_float = 0; var_327_bool = 0; // 0x40 PushV
	var_327_bool = var_325_bool; // 0x41 Mov
	func_52(var_327_bool); // 0x42 NEW_2
	var_328_float = 0; var_329_float = 0; // 0x44 PushV
	var_330_float = 0; // 0x45 PushV
	func_55(var_330_float); // 0x46 NEW_2
	var_329_float = var_330_float; // 0x47 Mov
	func_1945(var_328_float, var_329_float); // 0x49 NEW_2
	var_324_float = var_326_float * var_328_float; // 0x4b Mult2
	return 0; // 0x4c Return
}


func_77()
{
	var_363_int = 0; // 0x4d PushV
	var_364_int = 0; // 0x4e PushV
	func_57(var_364_int); // 0x4f NEW_2
	var_363_int = var_364_int; // 0x50 Mov
	func_1927(var_363_int); // 0x52 NEW_2
	return 0; // 0x54 Return
}


func_85(var_0_bool)
{
	var_236_int = 0; var_237_string = ""; var_238_bool = 0; var_239_string = ""; var_240_float = 0; var_241_cvector = CVector(0,0,0); var_242_object = Obj(); var_243_int = 0; var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_string = ""; var_249_int = 0; var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_float = 0; var_253_float = 0; var_254_int = 0; var_255_bool = 0; var_256_int = 0; var_257_string = ""; var_258_bool = 0; var_259_string = ""; var_260_float = 0; var_261_cvector = CVector(0,0,0); var_262_object = Obj(); var_263_int = 0; var_264_cvector = CVector(0,0,0); var_265_bool = 0; var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_string = ""; var_269_int = 0; var_270_cvector = CVector(0,0,0); var_271_cvector = CVector(0,0,0); var_272_float = 0; var_273_float = 0; var_274_int = 0; var_275_bool = 0; // 0x55 PushV
	var_0_bool = 0; // 0x56 TMovB
	var_256_int = 0; // 0x57 MovI
	
Label_88:
	var_276_int = 1; // 0x58 PushI
	var_256_int = var_256_int + var_276_int; // 0x59 Add2
	var_277_string = ""; // 0x5a PushV
	func_323(var_277_string); // 0x5b NEW_2
	var_278_string = "attack"; // 0x5d PushS
	var_279_int = var_277_string + var_278_string; // 0x5e Add
	var_280_int = var_279_int + var_256_int; // 0x5f Add
	var_281_string = "_phase1"; // 0x60 PushS
	var_257_string = var_280_int + var_281_string; // 0x61 Add2
	HasAnimation(var_258_bool, var_257_string); // 0x62 Func
	var_282_bool = var_258_bool == 0; // 0x64 Not
	if(var_282_bool == 0) goto Label_103; // 0x65 JumpB
	goto Label_104; // 0x66 Jump
	
Label_104:
	var_283_int = -1; // 0x68 PushI
	var_256_int = var_256_int + var_283_int; // 0x69 Add2
	var_284_bool = var_256_int == 0; // 0x6a Not
	if(var_284_bool == 0) goto Label_109; // 0x6b JumpB
	return 40; // 0x6c Return
	
Label_109:
	GetCurrentWeapon(var_259_string); // 0x6d Func
	GetAttackDistance(var_260_float); // 0x6f Func
	GetDirection(var_261_cvector); // 0x71 Func
	var_265_bool = 0; // 0x73 MovB
	var_285_bool = 0; // 0x74 PushV
	func_321(var_285_bool); // 0x75 NEW_2
	if(var_285_bool == 0) goto Label_166; // 0x77 JumpB
	GetVictimMaterialExact(var_262_object, var_263_int, var_264_cvector, var_261_cvector, var_260_float); // 0x78 Func
	var_286_bool = 0; // 0x7a PushV
	var_286_bool = 0; // 0x7b MovB
	var_287_bool = 0; // 0x7c PushV
	var_287_bool = 0; // 0x7d MovB
	var_288_bool = 0; // 0x7e PushV
	var_288_bool = 0; // 0x7f MovB
	var_289_bool = var_262_object != 0; // 0x80 NullNeq
	if(var_289_bool == 0) goto Label_137; // 0x81 JumpB
	var_290_bool = 0; var_291_object = Obj(); var_292_string = ""; // 0x82 PushV
	var_291_object = var_262_object; // 0x83 Mov
	var_292_string = "health"; // 0x84 MovS
	func_1348(var_290_bool, var_291_object, var_292_string); // 0x85 NEW_2
	if(var_290_bool == 0) goto Label_137; // 0x87 JumpB
	var_288_bool = 1; // 0x88 MovB
	
Label_137:
	if(var_288_bool == 0) goto Label_145; // 0x89 JumpB
	var_293_bool = 0; var_294_object = Obj(); // 0x8a PushV
	var_294_object = var_262_object; // 0x8b Mov
	func_1455(var_294_object); // 0x8c NEW_2
	var_297_bool = var_293_bool == 0; // 0x8e Not
	if(var_297_bool == 0) goto Label_145; // 0x8f JumpB
	var_287_bool = 1; // 0x90 MovB
	
Label_145:
	if(var_287_bool == 0) goto Label_150; // 0x91 JumpB
	var_298_int = 4; // 0x92 PushI
	var_299_bool = var_263_int == var_298_int; // 0x93 Eq
	if(var_299_bool == 0) goto Label_150; // 0x94 JumpB
	var_286_bool = 1; // 0x95 MovB
	
Label_150:
	if(var_286_bool == 0) goto Label_166; // 0x96 JumpB
	var_300_string = "GetDirection"; // 0x97 PushS
	var_301_int = 1; // 0x98 PushI
	var_302_bool = IsFuncExist(var_262_object, var_300_string, var_301_int); // 0x99 FuncExist
	if(var_302_bool == 0) goto Label_166; // 0x9a JumpB
	GetDirection(var_266_cvector); // 0x9b Func
	GetDirection(var_267_cvector); // 0x9d ObjFunc
	var_303_float = 0; var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); // 0x9f PushV
	var_304_cvector = var_266_cvector; // 0xa0 Mov
	var_305_cvector = var_267_cvector; // 0xa1 Mov
	func_1579(var_303_float, var_304_cvector, var_305_cvector); // 0xa2 NEW_2
	var_306_float = 0.5; // 0xa4 PushF
	var_265_bool = var_303_float >= var_306_float; // 0xa5 GE2
	
Label_166:
	var_307_bool = var_265_bool; // 0xa6 Push
	if(var_307_bool == 0) goto Label_177; // 0xa7 JumpB
	var_268_string = "battack"; // 0xa8 MovS
	var_308_string = ""; // 0xa9 PushV
	func_50(var_308_string); // 0xaa NEW_2
	var_309_string = "_back"; // 0xac PushS
	var_310_int = var_308_string + var_309_string; // 0xad Add
	PlaySound(var_310_int); // 0xae Func
	goto Label_195; // 0xb0 Jump
	
Label_195:
	var_311_bool = 1; // 0xc3 PushB
	SetAttackState(var_311_bool); // 0xc4 Func
	var_312_string = "_phase1"; // 0xc6 PushS
	var_313_int = var_268_string + var_312_string; // 0xc7 Add
	PlayAnimation(var_313_int); // 0xc8 Func
	WaitForAnimEnd(); // 0xca Func
	var_314_bool = var_0_bool; // 0xcc PushT
	if(var_314_bool == 0) goto Label_207; // 0xcd JumpB
	return 40; // 0xce Return
	
Label_207:
	var_315_bool = 0; // 0xcf PushB
	SetAttackState(var_315_bool); // 0xd0 Func
	GetAttackDistance(var_260_float); // 0xd2 Func
	GetDirection(var_261_cvector); // 0xd4 Func
	GetVictimMaterialExact(var_262_object, var_263_int, var_264_cvector, var_261_cvector, var_260_float); // 0xd6 Func
	var_316_bool = var_262_object != 0; // 0xd8 NullNeq
	if(var_316_bool == 0) goto Label_295; // 0xd9 JumpB
	var_317_string = "GetDirection"; // 0xda PushS
	var_318_int = 1; // 0xdb PushI
	var_319_bool = IsFuncExist(var_262_object, var_317_string, var_318_int); // 0xdc FuncExist
	if(var_319_bool == 0) goto Label_234; // 0xdd JumpB
	GetDirection(var_270_cvector); // 0xde Func
	GetDirection(var_271_cvector); // 0xe0 ObjFunc
	var_320_float = 0; var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); // 0xe2 PushV
	var_321_cvector = var_270_cvector; // 0xe3 Mov
	var_322_cvector = var_271_cvector; // 0xe4 Mov
	func_1579(var_320_float, var_321_cvector, var_322_cvector); // 0xe5 NEW_2
	var_323_float = 0.5; // 0xe7 PushF
	var_265_bool = var_320_float >= var_323_float; // 0xe8 GE2
	goto Label_235; // 0xe9 Jump
	
Label_235:
	var_324_float = 0; var_325_bool = 0; // 0xeb PushV
	var_325_bool = var_265_bool; // 0xec Mov
	func_63(var_324_float, var_325_bool); // 0xed NEW_2
	var_272_float = var_324_float; // 0xee Mov
	var_342_int = 4; // 0xf0 PushI
	var_343_bool = var_263_int == var_342_int; // 0xf1 Eq
	if(var_343_bool == 0) goto Label_245; // 0xf2 JumpB
	var_344_float = 3.0; // 0xf3 PushF
	var_272_float = var_272_float * var_344_float; // 0xf4 Mult2
	
Label_245:
	var_345_float = 0; var_346_object = Obj(); var_347_float = 0; var_348_int = 0; // 0xf5 PushV
	var_346_object = var_262_object; // 0xf6 Mov
	var_347_float = var_272_float; // 0xf7 Mov
	var_349_int = 0; // 0xf8 PushV
	func_59(var_349_int); // 0xf9 NEW_2
	var_348_int = var_349_int; // 0xfa Mov
	func_1382(var_345_float, var_346_object, var_347_float, var_348_int); // 0xfc NEW_2
	var_273_float = var_345_float; // 0xfd Mov
	var_350_float = var_273_float; // 0xff Push
	if(var_350_float == 0) goto Label_292; // 0x100 JumpB
	var_351_int = 2; // 0x101 PushI
	irand(var_274_int, var_351_int); // 0x102 Func
	var_352_string = ""; // 0x104 PushV
	func_50(var_352_string); // 0x105 NEW_2
	var_353_string = "_hit"; // 0x107 PushS
	var_354_int = var_352_string + var_353_string; // 0x108 Add
	var_355_int = 1; // 0x109 PushI
	var_356_int = var_274_int + var_355_int; // 0x10a Add
	var_357_int = var_354_int + var_356_int; // 0x10b Add
	PlaySound(var_357_int); // 0x10c Func
	ReportAttack(var_262_object); // 0x10e Func
	var_358_int = 0; // 0x110 PushV
	func_61(var_358_int); // 0x111 NEW_2
	ReportHit(var_262_object, var_358_int, var_273_float, var_272_float, var_264_cvector, var_261_cvector); // 0x113 Func
	var_359_object = GlobalVars[2]; // 0x115 PushGE
	in(var_275_bool, var_262_object); // 0x116 ObjFunc
	var_360_bool = var_275_bool == 0; // 0x118 Not
	if(var_360_bool == 0) goto Label_289; // 0x119 JumpB
	var_361_object = GlobalVars[3]; // 0x11a PushGE
	add(var_262_object); // 0x11b ObjFunc
	var_362_bool = 0; // 0x11d PushB
	BroadcastPlayerDamage(var_262_object, var_362_bool); // 0x11e Func
	goto Label_292; // 0x120 Jump
	
Label_292:
	func_77(); // 0x125 NEW_2
	
Label_295:
	var_378_string = "_phase2"; // 0x127 PushS
	var_379_int = var_268_string + var_378_string; // 0x128 Add
	PlayAnimation(var_379_int); // 0x129 Func
	WaitForAnimEnd(); // 0x12b Func
	var_380_bool = var_0_bool; // 0x12d PushT
	if(var_380_bool == 0) goto Label_304; // 0x12e JumpB
	return 40; // 0x12f Return
	
Label_304:
	var_262_object = 0; // 0x130 SetNull
	var_381_bool = 0; // 0x131 PushV
	func_325(var_381_bool); // 0x132 NEW_2
	if(var_381_bool == 0) goto Label_109; // 0x134 JumpB
	return 40; // 0x135 Return
	
Label_289:
	var_384_bool = 1; // 0x121 PushB
	BroadcastPlayerDamage(var_262_object, var_384_bool); // 0x122 Func
	
Label_234:
	var_265_bool = 0; // 0xea MovB
	
Label_177:
	irand(var_269_int, var_256_int); // 0xb1 Func
	var_385_string = ""; // 0xb3 PushV
	func_323(var_385_string); // 0xb4 NEW_2
	var_386_string = "attack"; // 0xb6 PushS
	var_387_int = var_385_string + var_386_string; // 0xb7 Add
	var_388_int = 1; // 0xb8 PushI
	var_389_int = var_269_int + var_388_int; // 0xb9 Add
	var_268_string = var_387_int + var_389_int; // 0xba Add2
	var_390_string = ""; // 0xbb PushV
	func_50(var_390_string); // 0xbc NEW_2
	var_391_int = 1; // 0xbe PushI
	var_392_int = var_269_int + var_391_int; // 0xbf Add
	var_393_int = var_390_string + var_392_int; // 0xc0 Add
	PlaySound(var_393_int); // 0xc1 Func
	
Label_103:
	goto Label_88; // 0x67 Jump
}


func_1631(var_79_float)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x65f PushV
	CreateFloatVector(var_81_object); // 0x660 Func
	add(var_79_float); // 0x662 ObjFunc
	var_82_int = 15; // 0x664 PushI
	SendWorldWndMessage(var_82_int, var_81_object); // 0x665 Func
	return 2; // 0x667 Return
}


func_1641(var_29_float)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x669 PushV
	CreateFloatVector(var_31_object); // 0x66a Func
	add(var_29_float); // 0x66c ObjFunc
	var_32_int = 16; // 0x66e PushI
	SendWorldWndMessage(var_32_int, var_31_object); // 0x66f Func
	return 2; // 0x671 Return
}


func_1651(var_17_string)
{
	var_19_bool = 0; var_20_bool = 0; // 0x673 PushV
	IsExistingSound(var_20_bool, var_17_string); // 0x674 Func
	var_21_bool = var_20_bool; // 0x676 Push
	if(var_21_bool == 0) goto Label_1658; // 0x677 JumpB
	PlaySound(var_17_string); // 0x678 Func
	
Label_1658:
	return 2; // 0x67a Return
}


func_1659(var_63_bool)
{
	var_64_bool = 0; var_65_bool = 0; // 0x67b PushV
	var_66_string = "god_mode"; // 0x67c PushS
	GetVariable(var_66_string, var_65_bool); // 0x67d Func
	var_63_bool = var_65_bool; // 0x67f Mov
	return 2; // 0x680 Return
}


func_1665(var_65_bool)
{
	var_66_int = 0; var_67_int = 0; // 0x681 PushV
	var_68_string = "kerosene"; // 0x682 PushS
	GetItemCountOfType(var_67_int, var_68_string); // 0x683 Func
	var_65_bool = var_67_int; // 0x685 Mov
	return 2; // 0x686 Return
}


func_1671(var_74_int)
{
	var_75_int = 0; var_76_int = 0; // 0x687 PushV
	var_77_string = "branch"; // 0x688 PushS
	GetVariable(var_77_string, var_76_int); // 0x689 Func
	var_74_int = var_76_int; // 0x68b Mov
	return 2; // 0x68c Return
}


func_1677(var_8_bool, var_9_int)
{
	var_10_int = 10; // 0x68e PushI
	var_11_bool = var_9_int == var_10_int; // 0x68f Eq
	if(var_11_bool == 0) goto Label_1687; // 0x690 JumpB
	func_1840(); // 0x692 NEW_2
	var_8_bool = 1; // 0x694 MovB
	return 0; // 0x695 Return
	
Label_1687:
	var_63_int = 11; // 0x697 PushI
	var_64_bool = var_9_int == var_63_int; // 0x698 Eq
	if(var_64_bool == 0) goto Label_1696; // 0x699 JumpB
	func_1848(); // 0x69b NEW_2
	var_8_bool = 1; // 0x69d MovB
	return 0; // 0x69e Return
	
Label_1696:
	var_70_int = 12; // 0x6a0 PushI
	var_71_bool = var_9_int == var_70_int; // 0x6a1 Eq
	if(var_71_bool == 0) goto Label_1704; // 0x6a2 JumpB
	func_1844(); // 0x6a4 NEW_2
	var_8_bool = 1; // 0x6a6 MovB
	return 0; // 0x6a7 Return
	
Label_1704:
	var_8_bool = 0; // 0x6a8 MovB
	return 0; // 0x6a9 Return
}


func_1706()
{
	var_12_bool = 0; var_13_int = 0; var_14_string = ""; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_string = ""; var_19_string = ""; var_20_bool = 0; var_21_int = 0; var_22_string = ""; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_string = ""; var_27_string = ""; // 0x6aa PushV
	GetGroundMaterial(var_20_bool, var_21_int); // 0x6ab Func
	var_28_bool = var_20_bool == 0; // 0x6ad Not
	if(var_28_bool == 0) goto Label_1712; // 0x6ae JumpB
	var_21_int = -1; // 0x6af MovI
	
Label_1712:
	var_29_string = ""; var_30_int = 0; // 0x6b0 PushV
	var_30_int = var_21_int; // 0x6b1 Mov
	func_1481(var_29_string, var_30_int); // 0x6b2 NEW_2
	var_22_string = var_29_string; // 0x6b3 Mov
	var_23_int = 0; // 0x6b5 MovI
	
Label_1718:
	var_41_string = "step_"; // 0x6b6 PushS
	var_42_int = var_41_string + var_22_string; // 0x6b7 Add
	var_43_int = 1; // 0x6b8 PushI
	var_44_int = var_23_int + var_43_int; // 0x6b9 Add
	var_45_int = var_42_int + var_44_int; // 0x6ba Add
	IsExistingSound(var_24_bool, var_45_int); // 0x6bb Func
	var_46_bool = var_24_bool == 0; // 0x6bd Not
	if(var_46_bool == 0) goto Label_1728; // 0x6be JumpB
	goto Label_1731; // 0x6bf Jump
	
Label_1731:
	var_47_bool = var_23_int == 0; // 0x6c3 Not
	if(var_47_bool == 0) goto Label_1737; // 0x6c4 JumpB
	var_48_string = GlobalVars[0]; // 0x6c5 PushGE
	var_48_string = ""; // 0x6c6 MovS
	GlobalVars[0] = var_48_string; // 0x6c7 PopGE
	return 16; // 0x6c8 Return
	
Label_1737:
	var_49_int = 1; // 0x6c9 PushI
	var_50_bool = var_23_int == var_49_int; // 0x6ca Eq
	if(var_50_bool == 0) goto Label_1742; // 0x6cb JumpB
	var_25_int = 0; // 0x6cc MovI
	goto Label_1754; // 0x6cd Jump
	
Label_1754:
	var_51_string = "step_"; // 0x6da PushS
	var_52_int = var_51_string + var_22_string; // 0x6db Add
	var_53_int = 1; // 0x6dc PushI
	var_54_int = var_25_int + var_53_int; // 0x6dd Add
	var_27_string = var_52_int + var_54_int; // 0x6de Add2
	PlaySound(var_27_string); // 0x6df Func
	var_55_string = GlobalVars[0]; // 0x6e1 PushGE
	var_55_string = var_27_string; // 0x6e2 Mov
	GlobalVars[0] = var_55_string; // 0x6e3 PopGE
	return 16; // 0x6e4 Return
	
Label_1742:
	irand(var_25_int, var_23_int); // 0x6ce Func
	var_56_string = "step_"; // 0x6d0 PushS
	var_57_int = var_56_string + var_22_string; // 0x6d1 Add
	var_58_int = 1; // 0x6d2 PushI
	var_59_int = var_25_int + var_58_int; // 0x6d3 Add
	var_26_string = var_57_int + var_59_int; // 0x6d4 Add2
	var_60_string = GlobalVars[0]; // 0x6d5 PushGE
	var_61_bool = var_26_string != var_60_string; // 0x6d6 Neq
	if(var_61_bool == 0) goto Label_1753; // 0x6d7 JumpB
	goto Label_1754; // 0x6d8 Jump
	
Label_1753:
	goto Label_1742; // 0x6d9 Jump
	
Label_1728:
	var_62_int = 1; // 0x6c0 PushI
	var_23_int = var_23_int + var_62_int; // 0x6c1 Add2
	goto Label_1718; // 0x6c2 Jump
}


func_2269()
{
	var_54_float = 0; var_55_float = 0; // 0x8dd PushV
	var_56_int = 10; // 0x8de PushI
	var_57_int = 30; // 0x8df PushI
	rand(var_55_float, var_56_int, var_57_int); // 0x8e0 Func
	var_58_int = 0; // 0x8e2 PushI
	SetTimer(var_58_int, var_55_float); // 0x8e3 Func
	return 2; // 0x8e5 Return
}


func_1765()
{
	var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj(); // 0x6e5 PushV
	GetMainOutdoorScene(var_70_object); // 0x6e6 Func
	var_72_string = "player_death"; // 0x6e8 PushS
	var_73_string = "play_death_klara.bin"; // 0x6e9 PushS
	AddBlankActor(var_71_object, var_70_object, var_72_string, var_73_string); // 0x6ea Func
	SetDeathState(); // 0x6ec Func
	return 4; // 0x6ee Return
}


func_742()
{
	func_2269(); // 0x2e7 NEW_2
	return 0; // 0x2e9 Return
}


func_2278()
{
	var_538_object = Obj(); var_539_object = Obj(); // 0x8e6 PushV
	GetScene(var_539_object); // 0x8e7 Func
	var_540_string = "player_shot"; // 0x8e9 PushS
	var_541_object = Obj(); // 0x8ea PushV
	func_1513(var_541_object); // 0x8eb NEW_2
	BroadcastMessage(var_540_string, var_541_object, var_539_object); // 0x8ed Func
	return 2; // 0x8ef Return
}


func_746()
{
	var_80_int = 0; // 0x2ea PushI
	KillTimer(var_80_int); // 0x2eb Func
	return 0; // 0x2ed Return
}


func_750(var_0_bool)
{
	var_31_int = 0; var_32_string = ""; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_float = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_string = ""; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_object = Obj(); var_56_int = 0; var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_string = ""; var_62_int = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_float = 0; var_66_float = 0; var_67_int = 0; var_68_bool = 0; // 0x2ee PushV
	var_0_bool = 0; // 0x2ef TMovB
	var_50_int = 0; // 0x2f0 MovI
	
Label_753:
	var_69_int = 1; // 0x2f1 PushI
	var_50_int = var_50_int + var_69_int; // 0x2f2 Add2
	var_70_string = "attack"; // 0x2f3 PushS
	var_71_int = var_70_string + var_50_int; // 0x2f4 Add
	var_72_string = "_phase1"; // 0x2f5 PushS
	var_51_string = var_71_int + var_72_string; // 0x2f6 Add2
	HasAnimation(var_52_bool, var_51_string); // 0x2f7 Func
	var_73_bool = var_52_bool == 0; // 0x2f9 Not
	if(var_73_bool == 0) goto Label_764; // 0x2fa JumpB
	goto Label_765; // 0x2fb Jump
	
Label_765:
	var_74_int = -1; // 0x2fd PushI
	var_50_int = var_50_int + var_74_int; // 0x2fe Add2
	var_75_bool = var_50_int == 0; // 0x2ff Not
	if(var_75_bool == 0) goto Label_770; // 0x300 JumpB
	return 38; // 0x301 Return
	
Label_770:
	GetAttackDistance(var_53_float); // 0x302 Func
	var_76_float = 2.1875; // 0x304 PushF
	var_53_float = var_53_float * var_76_float; // 0x305 Mult2
	GetDirection(var_54_cvector); // 0x306 Func
	GetVictimMaterialExact(var_55_object, var_56_int, var_57_cvector, var_54_cvector, var_53_float); // 0x308 Func
	var_77_bool = var_55_object != 0; // 0x30a NullNeq
	if(var_77_bool == 0) goto Label_811; // 0x30b JumpB
	var_78_bool = 0; var_79_object = Obj(); var_80_string = ""; // 0x30c PushV
	var_79_object = var_55_object; // 0x30d Mov
	var_80_string = "healable"; // 0x30e MovS
	func_1348(var_78_bool, var_79_object, var_80_string); // 0x30f NEW_2
	if(var_78_bool == 0) goto Label_811; // 0x311 JumpB
	var_87_string = "heal_phase1"; // 0x312 PushS
	PlayAnimation(var_87_string); // 0x313 Func
	WaitForAnimEnd(); // 0x315 Func
	var_88_bool = var_0_bool; // 0x317 PushT
	if(var_88_bool == 0) goto Label_794; // 0x318 JumpB
	return 38; // 0x319 Return
	
Label_794:
	var_89_bool = 0; var_90_object = Obj(); // 0x31a PushV
	var_90_object = var_55_object; // 0x31b Mov
	func_1460(var_89_bool, var_90_object); // 0x31c NEW_2
	if(var_89_bool == 0) goto Label_802; // 0x31e JumpB
	var_98_string = "heal"; // 0x31f PushS
	Trigger(var_55_object, var_98_string); // 0x320 Func
	
Label_802:
	var_99_string = "heal_phase2"; // 0x322 PushS
	PlayAnimation(var_99_string); // 0x323 Func
	WaitForAnimEnd(); // 0x325 Func
	var_100_bool = var_0_bool; // 0x327 PushT
	if(var_100_bool == 0) goto Label_810; // 0x328 JumpB
	return 38; // 0x329 Return
	
Label_810:
	goto Label_935; // 0x32a Jump
	
Label_935:
	var_101_bool = 0; // 0x3a7 PushV
	func_958(var_101_bool); // 0x3a8 NEW_2
	if(var_101_bool == 0) goto Label_770; // 0x3aa JumpB
	return 38; // 0x3ab Return
	
Label_811:
	var_104_string = "GetDirection"; // 0x32b PushS
	var_105_int = 1; // 0x32c PushI
	var_106_bool = IsFuncExist(var_55_object, var_104_string, var_105_int); // 0x32d FuncExist
	if(var_106_bool == 0) goto Label_827; // 0x32e JumpB
	GetDirection(var_59_cvector); // 0x32f Func
	GetDirection(var_60_cvector); // 0x331 ObjFunc
	var_107_float = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); // 0x333 PushV
	var_108_cvector = var_59_cvector; // 0x334 Mov
	var_109_cvector = var_60_cvector; // 0x335 Mov
	func_1579(var_107_float, var_108_cvector, var_109_cvector); // 0x336 NEW_2
	var_131_float = 0.5; // 0x338 PushF
	var_58_bool = var_107_float >= var_131_float; // 0x339 GE2
	goto Label_828; // 0x33a Jump
	
Label_828:
	var_132_bool = var_58_bool; // 0x33c Push
	if(var_132_bool == 0) goto Label_835; // 0x33d JumpB
	var_61_string = "battack"; // 0x33e MovS
	var_133_string = "punch_back"; // 0x33f PushS
	PlaySound(var_133_string); // 0x340 Func
	goto Label_847; // 0x342 Jump
	
Label_847:
	var_134_string = "_phase1"; // 0x34f PushS
	var_135_int = var_61_string + var_134_string; // 0x350 Add
	PlayAnimation(var_135_int); // 0x351 Func
	WaitForAnimEnd(); // 0x353 Func
	var_136_bool = var_0_bool; // 0x355 PushT
	if(var_136_bool == 0) goto Label_856; // 0x356 JumpB
	return 38; // 0x357 Return
	
Label_856:
	GetVictimMaterialExact(var_55_object, var_56_int, var_57_cvector, var_54_cvector, var_53_float); // 0x358 Func
	var_137_bool = var_55_object != 0; // 0x35a NullNeq
	if(var_137_bool == 0) goto Label_925; // 0x35b JumpB
	var_138_string = "GetDirection"; // 0x35c PushS
	var_139_int = 1; // 0x35d PushI
	var_140_bool = IsFuncExist(var_55_object, var_138_string, var_139_int); // 0x35e FuncExist
	if(var_140_bool == 0) goto Label_876; // 0x35f JumpB
	GetDirection(var_63_cvector); // 0x360 Func
	GetDirection(var_64_cvector); // 0x362 ObjFunc
	var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); // 0x364 PushV
	var_142_cvector = var_63_cvector; // 0x365 Mov
	var_143_cvector = var_64_cvector; // 0x366 Mov
	func_1579(var_141_float, var_142_cvector, var_143_cvector); // 0x367 NEW_2
	var_144_float = 0.5; // 0x369 PushF
	var_58_bool = var_141_float >= var_144_float; // 0x36a GE2
	goto Label_877; // 0x36b Jump
	
Label_877:
	var_145_float = 0; var_146_bool = 0; // 0x36d PushV
	var_146_bool = var_58_bool; // 0x36e Mov
	func_951(var_145_float, var_146_bool); // 0x36f NEW_2
	var_65_float = var_145_float; // 0x370 Mov
	var_148_int = 4; // 0x372 PushI
	var_149_bool = var_56_int == var_148_int; // 0x373 Eq
	if(var_149_bool == 0) goto Label_887; // 0x374 JumpB
	var_150_float = 3.0; // 0x375 PushF
	var_65_float = var_65_float * var_150_float; // 0x376 Mult2
	
Label_887:
	var_151_float = 0; var_152_object = Obj(); var_153_float = 0; var_154_int = 0; // 0x377 PushV
	var_152_object = var_55_object; // 0x378 Mov
	var_153_float = var_65_float; // 0x379 Mov
	var_154_int = 0; // 0x37a MovI
	func_1382(var_151_float, var_152_object, var_153_float, var_154_int); // 0x37b NEW_2
	var_66_float = var_151_float; // 0x37c Mov
	var_211_float = var_66_float; // 0x37e Push
	if(var_211_float == 0) goto Label_925; // 0x37f JumpB
	var_212_int = 2; // 0x380 PushI
	irand(var_67_int, var_212_int); // 0x381 Func
	var_213_string = "punch_hit"; // 0x383 PushS
	var_214_int = 1; // 0x384 PushI
	var_215_int = var_67_int + var_214_int; // 0x385 Add
	var_216_int = var_213_string + var_215_int; // 0x386 Add
	PlaySound(var_216_int); // 0x387 Func
	ReportAttack(var_55_object); // 0x389 Func
	var_217_int = 0; // 0x38b PushI
	ReportHit(var_55_object, var_217_int, var_66_float, var_65_float, var_57_cvector, var_54_cvector); // 0x38c Func
	var_218_object = GlobalVars[2]; // 0x38e PushGE
	in(var_68_bool, var_55_object); // 0x38f ObjFunc
	var_219_bool = var_68_bool == 0; // 0x391 Not
	if(var_219_bool == 0) goto Label_922; // 0x392 JumpB
	var_220_object = GlobalVars[3]; // 0x393 PushGE
	add(var_55_object); // 0x394 ObjFunc
	var_221_bool = 0; // 0x396 PushB
	BroadcastPlayerDamage(var_55_object, var_221_bool); // 0x397 Func
	goto Label_925; // 0x399 Jump
	
Label_925:
	var_222_string = "_phase2"; // 0x39d PushS
	var_223_int = var_61_string + var_222_string; // 0x39e Add
	PlayAnimation(var_223_int); // 0x39f Func
	WaitForAnimEnd(); // 0x3a1 Func
	var_224_bool = var_0_bool; // 0x3a3 PushT
	if(var_224_bool == 0) goto Label_934; // 0x3a4 JumpB
	return 38; // 0x3a5 Return
	
Label_934:
	var_55_object = 0; // 0x3a6 SetNull
	
Label_922:
	var_225_bool = 1; // 0x39a PushB
	BroadcastPlayerDamage(var_55_object, var_225_bool); // 0x39b Func
	
Label_876:
	var_58_bool = 0; // 0x36c MovB
	
Label_835:
	irand(var_62_int, var_50_int); // 0x343 Func
	var_226_string = "attack"; // 0x345 PushS
	var_227_int = 1; // 0x346 PushI
	var_228_int = var_62_int + var_227_int; // 0x347 Add
	var_61_string = var_226_string + var_228_int; // 0x348 Add2
	var_229_string = "punch"; // 0x349 PushS
	var_230_int = 1; // 0x34a PushI
	var_231_int = var_62_int + var_230_int; // 0x34b Add
	var_232_int = var_229_string + var_231_int; // 0x34c Add
	PlaySound(var_232_int); // 0x34d Func
	
Label_827:
	var_58_bool = 0; // 0x33b MovB
	
Label_764:
	goto Label_753; // 0x2fc Jump
}


func_1777()
{
	var_10_bool = 0; var_11_bool = 0; // 0x6f1 PushV
	var_12_int = 11; // 0x6f2 PushI
	KillTimer(var_12_int, var_11_bool); // 0x6f3 Func
	var_13_bool = var_11_bool; // 0x6f5 Push
	if(var_13_bool == 0) goto Label_1786; // 0x6f6 JumpB
	var_14_int = -3; // 0x6f7 PushI
	ModNoise(var_14_int); // 0x6f8 Func
	
Label_1786:
	return 2; // 0x6fa Return
}


func_1787()
{
	func_1777(); // 0x6fc NEW_2
	var_15_int = 11; // 0x6fe PushI
	var_16_float = 0.15; // 0x6ff PushF
	SetTimer(var_15_int, var_16_float); // 0x700 Func
	var_17_int = 3; // 0x702 PushI
	ModNoise(var_17_int); // 0x703 Func
	return 0; // 0x705 Return
}


func_1798()
{
	var_5_bool = 0; var_6_bool = 0; // 0x706 PushV
	var_7_int = 10; // 0x707 PushI
	KillTimer(var_7_int, var_6_bool); // 0x708 Func
	var_8_bool = var_6_bool; // 0x70a Push
	if(var_8_bool == 0) goto Label_1807; // 0x70b JumpB
	var_9_int = -2; // 0x70c PushI
	ModNoise(var_9_int); // 0x70d Func
	
Label_1807:
	return 2; // 0x70f Return
}


func_1296()
{
	return 0; // 0x510 Return
}


func_1297(var_582_bool)
{
	var_582_bool = 0; // 0x511 MovB
	return 0; // 0x512 Return
}


func_1808()
{
	var_5_bool = 0; var_6_bool = 0; // 0x710 PushV
	var_7_int = 12; // 0x711 PushI
	KillTimer(var_7_int, var_6_bool); // 0x712 Func
	var_8_bool = var_6_bool; // 0x714 Push
	if(var_8_bool == 0) goto Label_1817; // 0x715 JumpB
	var_9_int = -1; // 0x716 PushI
	ModNoise(var_9_int); // 0x717 Func
	
Label_1817:
	return 2; // 0x719 Return
}


func_1299(var_630_bool)
{
	var_631_bool = 0; var_632_bool = 0; // 0x513 PushV
	IsShooting(var_632_bool); // 0x514 Func
	var_630_bool = var_632_bool; // 0x516 Mov
	return 2; // 0x517 Return
}


func_1304()
{
	func_1328(); // 0x519 NEW_2
	var_13_bool = 0; var_14_string = ""; var_15_int = 0; // 0x51b PushV
	var_14_string = "revolver_ammo"; // 0x51c MovS
	var_15_int = 2; // 0x51d MovI
	func_1880(var_13_bool, var_14_string, var_15_int); // 0x51e NEW_2
	if(var_13_bool == 0) goto Label_1325; // 0x520 JumpB
	var_34_string = ""; // 0x521 PushV
	func_1326(var_34_string); // 0x522 NEW_2
	var_35_string = "_reload"; // 0x524 PushS
	var_36_int = var_34_string + var_35_string; // 0x525 Add
	PlaySound(var_36_int); // 0x526 Func
	var_37_string = "reload"; // 0x528 PushS
	PlayAnimation(var_37_string); // 0x529 Func
	WaitForAnimEnd(); // 0x52b Func
	
Label_1325:
	return 0; // 0x52d Return
}


func_1818()
{
	func_1798(); // 0x71b NEW_2
	var_10_int = 10; // 0x71d PushI
	var_11_float = 0.35; // 0x71e PushF
	SetTimer(var_10_int, var_11_float); // 0x71f Func
	var_12_int = 2; // 0x721 PushI
	ModNoise(var_12_int); // 0x722 Func
	return 0; // 0x724 Return
}


func_1829()
{
	func_1808(); // 0x726 NEW_2
	var_10_int = 12; // 0x728 PushI
	var_11_float = 0.6; // 0x729 PushF
	SetTimer(var_10_int, var_11_float); // 0x72a Func
	var_12_int = 1; // 0x72c PushI
	ModNoise(var_12_int); // 0x72d Func
	return 0; // 0x72f Return
}


func_1326(var_34_string)
{
	var_34_string = "gun"; // 0x52e MovS
	return 0; // 0x52f Return
}


func_1328()
{
	return 0; // 0x530 Return
}


func_1329(var_49_string, var_50_int)
{
	var_51_int = 2; // 0x532 PushI
	var_52_bool = var_50_int == var_51_int; // 0x533 Eq
	if(var_52_bool == 0) goto Label_1336; // 0x534 JumpB
	var_49_string = "fire"; // 0x535 MovS
	return 0; // 0x536 Return
	
Label_1336:
	var_53_int = 1; // 0x538 PushI
	var_54_bool = var_50_int == var_53_int; // 0x539 Eq
	if(var_54_bool == 0) goto Label_1341; // 0x53a JumpB
	var_49_string = "bullet"; // 0x53b MovS
	return 0; // 0x53c Return
	
Label_1341:
	var_49_string = "phys"; // 0x53d MovS
	return 0; // 0x53e Return
}


func_1840()
{
	func_1706(); // 0x731 NEW_2
	return 0; // 0x733 Return
}


func_1844()
{
	func_1706(); // 0x735 NEW_2
	return 0; // 0x737 Return
}


func_1848()
{
	func_1706(); // 0x739 NEW_2
	func_1777(); // 0x73c NEW_2
	return 0; // 0x73e Return
}


func_1343(var_75_bool, var_76_object)
{
	var_77_bool = 0; var_78_bool = 0; // 0x53f PushV
	IsPlayerActor(var_76_object, var_78_bool); // 0x540 Func
	var_75_bool = var_78_bool; // 0x542 Mov
	return 2; // 0x543 Return
}


func_321(var_285_bool)
{
	var_285_bool = 0; // 0x141 MovB
	return 0; // 0x142 Return
}


func_323(var_277_string)
{
	var_277_string = ""; // 0x143 MovS
	return 0; // 0x144 Return
}


func_1348(var_34_bool, var_35_object, var_36_string)
{
	var_37_bool = 0; var_38_bool = 0; // 0x544 PushV
	var_39_string = "HasProperty"; // 0x545 PushS
	var_40_int = 2; // 0x546 PushI
	var_41_bool = IsFuncExist(var_35_object, var_39_string, var_40_int); // 0x547 FuncExist
	var_42_bool = var_41_bool == 0; // 0x548 Not
	if(var_42_bool == 0) goto Label_1356; // 0x549 JumpB
	var_34_bool = 0; // 0x54a MovB
	return 2; // 0x54b Return
	
Label_1356:
	HasProperty(var_36_string, var_38_bool); // 0x54c ObjFunc
	var_34_bool = var_38_bool; // 0x54e Mov
	return 2; // 0x54f Return
}


func_325(var_381_bool)
{
	var_382_bool = 0; var_383_bool = 0; // 0x145 PushV
	IsShooting(var_383_bool); // 0x146 Func
	var_381_bool = var_383_bool; // 0x148 Mov
	return 2; // 0x149 Return
}


func_330(var_0_bool, var_1_bool)
{
	var_398_object = Obj(); var_399_bool = 0; var_400_bool = 0; var_401_bool = 0; var_402_bool = 0; var_403_int = 0; var_404_int = 0; var_405_object = Obj(); var_406_bool = 0; var_407_bool = 0; var_408_bool = 0; var_409_bool = 0; var_410_int = 0; var_411_int = 0; // 0x14a PushV
	var_0_bool = 0; // 0x14b TMovB
	var_1_bool = 0; // 0x14c TMovB
	var_412_string = "use_begin"; // 0x14d PushS
	PlayAnimation(var_412_string); // 0x14e Func
	WaitForAnimEnd(); // 0x150 Func
	var_413_bool = var_0_bool; // 0x152 PushT
	if(var_413_bool == 0) goto Label_341; // 0x153 JumpB
	return 14; // 0x154 Return
	
Label_341:
	GetPlayerSelectedObject(var_405_object); // 0x155 Func
	var_406_bool = 0; // 0x157 MovB
	var_414_bool = 0; var_415_object = Obj(); var_416_string = ""; // 0x158 PushV
	var_415_object = var_405_object; // 0x159 Mov
	var_416_string = "lp"; // 0x15a MovS
	func_1348(var_414_bool, var_415_object, var_416_string); // 0x15b NEW_2
	if(var_414_bool == 0) goto Label_389; // 0x15d JumpB
	var_417_string = "lp"; // 0x15e PushS
	GetProperty(var_417_string, var_407_bool); // 0x15f ObjFunc
	var_418_bool = var_407_bool; // 0x161 Push
	if(var_418_bool == 0) goto Label_389; // 0x162 JumpB
	var_419_string = "locked"; // 0x163 PushS
	GetProperty(var_419_string, var_408_bool); // 0x164 ObjFunc
	var_420_bool = var_408_bool; // 0x166 Push
	if(var_420_bool == 0) goto Label_389; // 0x167 JumpB
	var_406_bool = 1; // 0x168 MovB
	var_421_string = "locked"; // 0x169 PushS
	var_422_bool = 0; // 0x16a PushB
	SetProperty(var_421_string, var_422_bool); // 0x16b ObjFunc
	var_410_int = 0; // 0x16d MovI
	var_423_string = "uses"; // 0x16e PushS
	GetWeaponProperty(var_409_bool, var_423_string, var_410_int); // 0x16f Func
	var_424_int = 1; // 0x171 PushI
	var_425_bool = var_410_int <= var_424_int; // 0x172 LE
	if(var_425_bool == 0) goto Label_384; // 0x173 JumpB
	GetWeaponItem(var_411_int); // 0x174 Func
	var_426_bool = 0; // 0x176 PushB
	var_427_int = 0; // 0x177 PushI
	SelectItem(var_411_int, var_426_bool, var_427_int); // 0x178 Func
	var_428_int = 1; // 0x17a PushI
	var_429_int = 0; // 0x17b PushI
	RemoveItem(var_411_int, var_428_int, var_429_int); // 0x17c Func
	var_1_bool = 1; // 0x17e TMovB
	goto Label_389; // 0x17f Jump
	
Label_389:
	var_430_bool = var_406_bool; // 0x185 Push
	if(var_430_bool == 0) goto Label_395; // 0x186 JumpB
	var_431_string = "use_success"; // 0x187 PushS
	PlayAnimation(var_431_string); // 0x188 Func
	goto Label_398; // 0x18a Jump
	
Label_398:
	WaitForAnimEnd(); // 0x18e Func
	var_432_bool = var_0_bool; // 0x190 PushT
	if(var_432_bool == 0) goto Label_403; // 0x191 JumpB
	return 14; // 0x192 Return
	
Label_403:
	var_433_bool = var_1_bool; // 0x193 PushT
	if(var_433_bool == 0) goto Label_422; // 0x194 JumpB
	var_434_string = "holster"; // 0x195 PushS
	PlayAnimation(var_434_string); // 0x196 Func
	WaitForAnimEnd(); // 0x198 Func
	var_435_int = -1; // 0x19a PushI
	SetHandsItem(var_435_int); // 0x19b Func
	var_436_bool = var_0_bool; // 0x19d PushT
	if(var_436_bool == 0) goto Label_416; // 0x19e JumpB
	return 14; // 0x19f Return
	
Label_416:
	var_1_bool = 0; // 0x1a0 TMovB
	var_437_string = "unholster"; // 0x1a1 PushS
	PlayAnimation(var_437_string); // 0x1a2 Func
	WaitForAnimEnd(); // 0x1a4 Func
	
Label_422:
	return 14; // 0x1a6 Return
	
Label_395:
	var_438_string = "use_fail"; // 0x18b PushS
	PlayAnimation(var_438_string); // 0x18c Func
	
Label_384:
	var_439_string = "uses"; // 0x180 PushS
	var_440_int = 1; // 0x181 PushI
	var_441_int = var_410_int - var_440_int; // 0x182 Sub
	SetWeaponProperty(var_409_bool, var_439_string, var_441_int); // 0x183 Func
}


func_1360(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float)
{
	var_39_float = 0; var_40_float = 0; // 0x550 PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0x551 PushV
	var_42_object = var_34_object; // 0x552 Mov
	var_43_string = var_35_string; // 0x553 Mov
	func_1348(var_41_bool, var_42_object, var_43_string); // 0x554 NEW_2
	var_50_bool = var_41_bool == 0; // 0x556 Not
	if(var_50_bool == 0) goto Label_1370; // 0x557 JumpB
	var_33_bool = 0; // 0x558 MovB
	return 2; // 0x559 Return
	
Label_1370:
	GetProperty(var_35_string, var_40_float); // 0x55a ObjFunc
	var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; // 0x55c PushV
	var_52_float = var_40_float + var_36_float; // 0x55d Add2
	var_53_float = var_37_float; // 0x55e Mov
	var_54_float = var_38_float; // 0x55f Mov
	func_1526(var_51_float, var_52_float, var_53_float, var_54_float); // 0x560 NEW_2
	SetProperty(var_35_string, var_51_float); // 0x562 ObjFunc
	var_33_bool = 1; // 0x564 MovB
	return 2; // 0x565 Return
}


func_1880(var_8_bool, var_9_string, var_10_int)
{
	var_11_bool = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_bool = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; // 0x758 PushV
	var_19_string = "ammo"; // 0x759 PushS
	GetWeaponProperty(var_15_bool, var_19_string, var_16_int); // 0x75a Func
	var_20_bool = 0; // 0x75c PushV
	var_20_bool = 0; // 0x75d MovB
	var_21_bool = var_15_bool; // 0x75e Push
	if(var_21_bool == 0) goto Label_1891; // 0x75f JumpB
	var_22_bool = var_16_int >= var_10_int; // 0x760 GE
	if(var_22_bool == 0) goto Label_1891; // 0x761 JumpB
	var_20_bool = 1; // 0x762 MovB
	
Label_1891:
	if(var_20_bool == 0) goto Label_1894; // 0x763 JumpB
	var_8_bool = 0; // 0x764 MovB
	return 8; // 0x765 Return
	
Label_1894:
	GetInvItemByName(var_17_int, var_9_string); // 0x766 Func
	
Label_1896:
	var_23_bool = var_16_int < var_10_int; // 0x768 LT
	if(var_23_bool == 0) goto Label_1907; // 0x769 JumpB
	var_24_int = 1; // 0x76a PushI
	RemoveItemByType(var_18_bool, var_17_int, var_24_int); // 0x76b Func
	var_25_bool = var_18_bool == 0; // 0x76d Not
	if(var_25_bool == 0) goto Label_1904; // 0x76e JumpB
	goto Label_1907; // 0x76f Jump
	
Label_1907:
	var_26_bool = var_16_int == 0; // 0x773 Not
	if(var_26_bool == 0) goto Label_1911; // 0x774 JumpB
	var_8_bool = 0; // 0x775 MovB
	return 8; // 0x776 Return
	
Label_1911:
	var_27_string = "ammo"; // 0x777 PushS
	SetWeaponProperty(var_15_bool, var_27_string, var_16_int); // 0x778 Func
	var_8_bool = 1; // 0x77a MovB
	return 8; // 0x77b Return
	
Label_1904:
	var_28_int = 1; // 0x770 PushI
	var_16_int = var_16_int + var_28_int; // 0x771 Add2
	goto Label_1896; // 0x772 Jump
}


func_1382(var_15_float, var_16_object, var_17_float, var_18_int)
{
	var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_int = 0; var_29_string = ""; var_30_int = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0; // 0x566 PushV
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; // 0x567 PushV
	var_35_object = var_16_object; // 0x568 Mov
	var_36_string = "health"; // 0x569 MovS
	func_1348(var_34_bool, var_35_object, var_36_string); // 0x56a NEW_2
	var_43_bool = var_34_bool == 0; // 0x56c Not
	if(var_43_bool == 0) goto Label_1392; // 0x56d JumpB
	var_15_float = 0.0; // 0x56e MovF
	return 12; // 0x56f Return
	
Label_1392:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x570 PushV
	var_45_object = var_16_object; // 0x571 Mov
	var_46_string = "armor"; // 0x572 MovS
	func_1348(var_44_bool, var_45_object, var_46_string); // 0x573 NEW_2
	var_47_bool = var_44_bool == 0; // 0x575 Not
	if(var_47_bool == 0) goto Label_1401; // 0x576 JumpB
	var_28_int = 0; // 0x577 MovI
	goto Label_1404; // 0x578 Jump
	
Label_1404:
	var_48_string = "armor_"; // 0x57c PushS
	var_49_string = ""; var_50_int = 0; // 0x57d PushV
	var_50_int = var_18_int; // 0x57e Mov
	func_1329(var_49_string, var_50_int); // 0x57f NEW_2
	var_29_string = var_48_string + var_49_string; // 0x581 Add2
	var_55_bool = 0; var_56_object = Obj(); var_57_string = ""; // 0x582 PushV
	var_56_object = var_16_object; // 0x583 Mov
	var_57_string = var_29_string; // 0x584 Mov
	func_1348(var_55_bool, var_56_object, var_57_string); // 0x585 NEW_2
	var_58_bool = var_55_bool == 0; // 0x587 Not
	if(var_58_bool == 0) goto Label_1419; // 0x588 JumpB
	var_30_int = 0; // 0x589 MovI
	goto Label_1421; // 0x58a Jump
	
Label_1421:
	var_59_float = 0; var_60_float = 0; var_61_float = 0; // 0x58d PushV
	var_62_int = var_28_int + var_30_int; // 0x58e Add
	var_63_float = 100.0; // 0x58f PushF
	var_60_float = var_62_int / var_62_int; // 0x590 Div2
	var_61_float = 1; // 0x591 MovI
	func_1519(var_59_float, var_60_float, var_61_float); // 0x592 NEW_2
	var_31_float = var_59_float; // 0x593 Mov
	var_65_string = "health"; // 0x595 PushS
	GetProperty(var_65_string, var_32_float); // 0x596 ObjFunc
	var_66_int = 1; // 0x598 PushI
	var_67_int = var_66_int - var_31_float; // 0x599 Sub
	var_33_float = var_17_float * var_67_int; // 0x59a Mult2
	var_68_string = "health"; // 0x59b PushS
	var_69_float = 0; var_70_float = 0; var_71_float = 0; var_72_float = 0; // 0x59c PushV
	var_70_float = var_32_float - var_33_float; // 0x59d Sub2
	var_71_float = 0; // 0x59e MovI
	var_72_float = 1; // 0x59f MovI
	func_1526(var_69_float, var_70_float, var_71_float, var_72_float); // 0x5a0 NEW_2
	SetProperty(var_68_string, var_69_float); // 0x5a2 ObjFunc
	var_75_bool = 0; var_76_object = Obj(); // 0x5a4 PushV
	var_76_object = var_16_object; // 0x5a5 Mov
	func_1343(var_75_bool, var_76_object); // 0x5a6 NEW_2
	if(var_75_bool == 0) goto Label_1453; // 0x5a8 JumpB
	var_79_float = 0; // 0x5a9 PushV
	var_79_float = -var_33_float; // 0x5aa Neg2
	func_1631(var_79_float); // 0x5ab NEW_2
	
Label_1453:
	var_15_float = var_33_float; // 0x5ad Mov
	return 12; // 0x5ae Return
	
Label_1419:
	GetProperty(var_29_string, var_30_int); // 0x58b ObjFunc
	
Label_1401:
	var_83_string = "armor"; // 0x579 PushS
	GetProperty(var_83_string, var_28_int); // 0x57a ObjFunc
}


func_1916(var_331_float)
{
	var_332_bool = 0; var_333_int = 0; var_334_bool = 0; var_335_int = 0; // 0x77c PushV
	var_336_string = "durability"; // 0x77d PushS
	GetWeaponProperty(var_334_bool, var_336_string, var_335_int); // 0x77e Func
	var_337_bool = var_334_bool; // 0x780 Push
	if(var_337_bool == 0) goto Label_1925; // 0x781 JumpB
	var_338_float = 100.0; // 0x782 PushF
	var_331_float = var_335_int / var_335_int; // 0x783 Div2
	goto Label_1926; // 0x784 Jump
	
Label_1926:
	return 4; // 0x786 Return
	
Label_1925:
	var_331_float = 1.0; // 0x785 MovF
}


func_1927(var_363_int)
{
	var_365_bool = 0; var_366_int = 0; var_367_bool = 0; var_368_int = 0; // 0x787 PushV
	var_369_string = "durability"; // 0x788 PushS
	GetWeaponProperty(var_367_bool, var_369_string, var_368_int); // 0x789 Func
	var_370_bool = var_367_bool == 0; // 0x78b Not
	if(var_370_bool == 0) goto Label_1934; // 0x78c JumpB
	var_368_int = 100; // 0x78d MovI
	
Label_1934:
	var_371_int = 0; var_372_int = 0; var_373_int = 0; var_374_int = 0; // 0x78e PushV
	var_372_int = var_368_int - var_363_int; // 0x78f Sub2
	var_373_int = 0; // 0x790 MovI
	var_374_int = 100; // 0x791 MovI
	func_1537(var_371_int, var_372_int, var_373_int, var_374_int); // 0x792 NEW_2
	var_368_int = var_371_int; // 0x793 Mov
	var_377_string = "durability"; // 0x795 PushS
	SetWeaponProperty(var_367_bool, var_377_string, var_368_int); // 0x796 Func
	return 4; // 0x798 Return
}


func_1945(var_328_float, var_329_float)
{
	var_331_float = 0; // 0x79a PushV
	func_1916(var_331_float); // 0x79b NEW_2
	var_339_int = 1; // 0x79d PushI
	var_340_int = var_339_int - var_329_float; // 0x79e Sub
	var_341_float = var_331_float * var_340_int; // 0x79f Mult
	var_328_float = var_329_float + var_341_float; // 0x7a0 Add2
	return 0; // 0x7a1 Return
}


func_1954(var_6_bool, var_7_int)
{
	var_8_bool = 0; var_9_int = 0; // 0x7a3 PushV
	var_9_int = var_7_int; // 0x7a4 Mov
	func_1677(var_8_bool, var_9_int); // 0x7a5 NEW_2
	var_6_bool = var_8_bool; // 0x7a6 Mov
	return 0; // 0x7a8 Return
}


func_1455(var_293_bool)
{
	var_295_bool = 0; var_296_bool = 0; // 0x5af PushV
	IsDead(var_296_bool); // 0x5b0 ObjFunc
	var_293_bool = var_296_bool; // 0x5b2 Mov
	return 2; // 0x5b3 Return
}


func_1460(var_89_bool, var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); // 0x5b4 PushV
	var_95_bool = var_90_object == 0; // 0x5b5 NullEq
	if(var_95_bool == 0) goto Label_1465; // 0x5b6 JumpB
	var_89_bool = 0; // 0x5b7 MovB
	return 4; // 0x5b8 Return
	
Label_1465:
	GetScene(var_93_object); // 0x5b9 Func
	var_96_bool = var_93_object == 0; // 0x5bb NullEq
	if(var_96_bool == 0) goto Label_1471; // 0x5bc JumpB
	var_89_bool = 0; // 0x5bd MovB
	return 4; // 0x5be Return
	
Label_1471:
	GetScene(var_94_object); // 0x5bf ObjFunc
	var_97_bool = var_93_object != var_94_object; // 0x5c1 Neq
	if(var_97_bool == 0) goto Label_1477; // 0x5c2 JumpB
	var_89_bool = 0; // 0x5c3 MovB
	return 4; // 0x5c4 Return
	
Label_1477:
	var_89_bool = 1; // 0x5c5 MovB
	return 4; // 0x5c6 Return
}


func_951(var_145_float, var_146_bool)
{
	var_147_bool = var_146_bool; // 0x3b8 Push
	if(var_147_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_145_float = 0.4; // 0x3ba MovF
	goto Label_957; // 0x3bb Jump
	
Label_957:
	return 0; // 0x3bd Return
	
Label_956:
	var_145_float = 0.2; // 0x3bc MovF
}


func_958(var_101_bool)
{
	var_102_bool = 0; var_103_bool = 0; // 0x3be PushV
	IsShooting(var_103_bool); // 0x3bf Func
	var_101_bool = var_103_bool; // 0x3c1 Mov
	return 2; // 0x3c2 Return
}


func_963(var_493_bool)
{
	var_494_bool = 0; var_495_bool = 0; var_496_bool = 0; var_497_bool = 0; // 0x3c3 PushV
	var_498_string = "ammo"; // 0x3c4 PushS
	GetWeaponProperty(var_496_bool, var_498_string, var_497_bool); // 0x3c5 Func
	var_499_bool = 0; // 0x3c7 PushV
	var_499_bool = 1; // 0x3c8 MovB
	var_500_bool = var_496_bool == 0; // 0x3c9 Not
	if(var_500_bool == 0) goto Label_974; // 0x3ca JumpB
	var_501_bool = var_497_bool == 0; // 0x3cb Not
	if(var_501_bool == 0) goto Label_974; // 0x3cc JumpB
	var_499_bool = 0; // 0x3cd MovB
	
Label_974:
	if(var_499_bool == 0) goto Label_996; // 0x3ce JumpB
	var_502_bool = 0; var_503_string = ""; var_504_int = 0; // 0x3cf PushV
	var_503_string = "revolver_ammo"; // 0x3d0 MovS
	var_504_int = 2; // 0x3d1 MovI
	func_1880(var_502_bool, var_503_string, var_504_int); // 0x3d2 NEW_2
	var_523_bool = var_502_bool == 0; // 0x3d4 Not
	if(var_523_bool == 0) goto Label_996; // 0x3d5 JumpB
	var_524_string = ""; // 0x3d6 PushV
	func_1062(var_524_string); // 0x3d7 NEW_2
	var_525_string = "_noammo"; // 0x3d9 PushS
	var_526_int = var_524_string + var_525_string; // 0x3da Add
	PlaySound(var_526_int); // 0x3db Func
	var_527_string = "noammo"; // 0x3dd PushS
	PlayAnimation(var_527_string); // 0x3de Func
	WaitForAnimEnd(); // 0x3e0 Func
	var_493_bool = 0; // 0x3e2 MovB
	return 4; // 0x3e3 Return
	
Label_996:
	var_493_bool = 1; // 0x3e4 MovB
	return 4; // 0x3e5 Return
}


func_1481(var_29_string, var_30_int)
{
	var_31_int = 1; // 0x5ca PushI
	var_32_bool = var_30_int == var_31_int; // 0x5cb Eq
	if(var_32_bool == 0) goto Label_1488; // 0x5cc JumpB
	var_29_string = "wood"; // 0x5cd MovS
	return 0; // 0x5ce Return
	
Label_1488:
	var_33_int = 2; // 0x5d0 PushI
	var_34_bool = var_30_int == var_33_int; // 0x5d1 Eq
	if(var_34_bool == 0) goto Label_1494; // 0x5d2 JumpB
	var_29_string = "metal"; // 0x5d3 MovS
	return 0; // 0x5d4 Return
	
Label_1494:
	var_35_int = 3; // 0x5d6 PushI
	var_36_bool = var_30_int == var_35_int; // 0x5d7 Eq
	if(var_36_bool == 0) goto Label_1500; // 0x5d8 JumpB
	var_29_string = "ground"; // 0x5d9 MovS
	return 0; // 0x5da Return
	
Label_1500:
	var_37_int = 4; // 0x5dc PushI
	var_38_bool = var_30_int == var_37_int; // 0x5dd Eq
	if(var_38_bool == 0) goto Label_1506; // 0x5de JumpB
	var_29_string = "water"; // 0x5df MovS
	return 0; // 0x5e0 Return
	
Label_1506:
	var_39_int = 5; // 0x5e2 PushI
	var_40_bool = var_30_int == var_39_int; // 0x5e3 Eq
	if(var_40_bool == 0) goto Label_1511; // 0x5e4 JumpB
	var_29_string = "carpet"; // 0x5e5 MovS
	return 0; // 0x5e6 Return
	
Label_1511:
	var_29_string = "stone"; // 0x5e7 MovS
	return 0; // 0x5e8 Return
}


func_462(var_27_string)
{
	var_28_string = "empty"; // 0x1cf PushS
	var_29_bool = var_27_string == var_28_string; // 0x1d0 Eq
	if(var_29_bool == 0) goto Label_472; // 0x1d1 JumpB
	TaskCall(4); // 0x1d3 TaskCall
	func_750(var_30_bool); // 0x1d4 NEW_2
	TaskReturn(); // 0x1d5 TaskReturn
	goto Label_498; // 0x1d7 Jump
	
Label_498:
	return 0; // 0x1f2 Return
	
Label_472:
	var_233_string = "scalpel"; // 0x1d8 PushS
	var_234_bool = var_27_string == var_233_string; // 0x1d9 Eq
	if(var_234_bool == 0) goto Label_481; // 0x1da JumpB
	TaskCall(1); // 0x1dc TaskCall
	func_85(var_235_bool); // 0x1dd NEW_2
	TaskReturn(); // 0x1de TaskReturn
	goto Label_498; // 0x1e0 Jump
	
Label_481:
	var_394_string = "lockpick"; // 0x1e1 PushS
	var_395_bool = var_27_string == var_394_string; // 0x1e2 Eq
	if(var_395_bool == 0) goto Label_490; // 0x1e3 JumpB
	TaskCall(2); // 0x1e5 TaskCall
	func_330(var_396_bool, var_397_bool); // 0x1e6 NEW_2
	TaskReturn(); // 0x1e7 TaskReturn
	goto Label_498; // 0x1e9 Jump
	
Label_490:
	var_442_string = "gun"; // 0x1ea PushS
	var_443_bool = var_27_string == var_442_string; // 0x1eb Eq
	if(var_443_bool == 0) goto Label_498; // 0x1ec JumpB
	TaskCall(5); // 0x1ee TaskCall
	func_1072(var_444_bool); // 0x1ef NEW_2
	TaskReturn(); // 0x1f0 TaskReturn
}


func_998(var_554_int)
{
	var_554_int = 3; // 0x3e6 MovI
	return 0; // 0x3e7 Return
}


func_1000(var_559_float)
{
	var_559_float = 0.02618; // 0x3e8 MovF
	return 0; // 0x3e9 Return
}


func_1513(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x5e9 PushV
	self(var_21_object); // 0x5ea Func
	var_19_object = var_21_object; // 0x5ec Mov
	return 2; // 0x5ed Return
}


func_1002()
{
	var_530_bool = 0; var_531_int = 0; var_532_bool = 0; var_533_int = 0; // 0x3ea PushV
	var_534_string = "ammo"; // 0x3eb PushS
	GetWeaponProperty(var_532_bool, var_534_string, var_533_int); // 0x3ec Func
	var_535_string = "ammo"; // 0x3ee PushS
	var_536_int = 1; // 0x3ef PushI
	var_537_int = var_533_int - var_536_int; // 0x3f0 Sub
	SetWeaponProperty(var_532_bool, var_535_string, var_537_int); // 0x3f1 Func
	func_2278(); // 0x3f4 NEW_2
	return 4; // 0x3f6 Return
}


func_1519(var_59_float, var_60_float, var_61_float)
{
	var_64_bool = var_60_float < var_61_float; // 0x5f0 LT
	if(var_64_bool == 0) goto Label_1524; // 0x5f1 JumpB
	var_59_float = var_60_float; // 0x5f2 Mov
	goto Label_1525; // 0x5f3 Jump
	
Label_1525:
	return 0; // 0x5f5 Return
	
Label_1524:
	var_59_float = var_61_float; // 0x5f4 Mov
}


func_499(var_10_string)
{
	var_11_string = "gun"; // 0x1f4 PushS
	var_12_bool = var_10_string == var_11_string; // 0x1f5 Eq
	if(var_12_bool == 0) goto Label_508; // 0x1f6 JumpB
	TaskCall(6); // 0x1f8 TaskCall
	func_1304(); // 0x1f9 NEW_2
	TaskReturn(); // 0x1fa TaskReturn
	
Label_508:
	return 0; // 0x1fc Return
}


func_1526(var_69_float, var_70_float, var_71_float, var_72_float)
{
	var_73_bool = var_70_float < var_71_float; // 0x5f7 LT
	if(var_73_bool == 0) goto Label_1531; // 0x5f8 JumpB
	var_69_float = var_71_float; // 0x5f9 Mov
	return 0; // 0x5fa Return
	
Label_1531:
	var_74_bool = var_70_float > var_72_float; // 0x5fb GT
	if(var_74_bool == 0) goto Label_1535; // 0x5fc JumpB
	var_69_float = var_72_float; // 0x5fd Mov
	return 0; // 0x5fe Return
	
Label_1535:
	var_69_float = var_70_float; // 0x5ff Mov
	return 0; // 0x600 Return
}


func_1015()
{
	var_615_bool = 0; var_616_bool = 0; var_617_bool = 0; var_618_bool = 0; // 0x3f7 PushV
	var_619_string = "ammo"; // 0x3f8 PushS
	GetWeaponProperty(var_617_bool, var_619_string, var_618_bool); // 0x3f9 Func
	var_620_bool = 0; // 0x3fb PushV
	var_620_bool = 1; // 0x3fc MovB
	var_621_bool = var_617_bool == 0; // 0x3fd Not
	if(var_621_bool == 0) goto Label_1026; // 0x3fe JumpB
	var_622_bool = var_618_bool == 0; // 0x3ff Not
	if(var_622_bool == 0) goto Label_1026; // 0x400 JumpB
	var_620_bool = 0; // 0x401 MovB
	
Label_1026:
	if(var_620_bool == 0) goto Label_1030; // 0x402 JumpB
	func_1031(); // 0x404 NEW_2
	
Label_1030:
	return 4; // 0x406 Return
}


func_509()
{
	return 0; // 0x1fe Return
}


func_511(var_15_object)
{
	var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_float = 0; var_21_bool = 0; var_22_bool = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_string = ""; var_27_float = 0; var_28_bool = 0; var_29_bool = 0; // 0x1ff PushV
	var_30_object = GlobalVars[1]; // 0x200 PushGE
	var_31_object = Obj(); // 0x201 PushV
	func_1548(var_31_object); // 0x202 NEW_2
	var_30_object = var_31_object; // 0x203 Mov
	GlobalVars[1] = var_30_object; // 0x205 PopGE
	var_34_object = GlobalVars[2]; // 0x206 PushGE
	var_35_object = Obj(); // 0x207 PushV
	func_1548(var_35_object); // 0x208 NEW_2
	var_34_object = var_35_object; // 0x209 Mov
	GlobalVars[2] = var_34_object; // 0x20b PopGE
	var_36_object = GlobalVars[3]; // 0x20c PushGE
	var_37_object = Obj(); // 0x20d PushV
	func_1548(var_37_object); // 0x20e NEW_2
	var_36_object = var_37_object; // 0x20f Mov
	GlobalVars[3] = var_36_object; // 0x211 PopGE
	var_38_string = "effects"; // 0x212 PushS
	HasProperty(var_38_string, var_23_bool); // 0x213 Func
	var_39_bool = var_23_bool == 0; // 0x215 Not
	if(var_39_bool == 0) goto Label_580; // 0x216 JumpB
	var_40_string = "effects"; // 0x217 PushS
	var_41_bool = 1; // 0x218 PushB
	SetProperty(var_40_string, var_41_bool); // 0x219 Func
	var_42_string = "player_disease.bin"; // 0x21b PushS
	ApplyEffect(var_42_string); // 0x21c Func
	var_43_string = "player_stat.bin"; // 0x21e PushS
	ApplyEffect(var_43_string); // 0x21f Func
	var_44_string = "player_hit.bin"; // 0x221 PushS
	ApplyEffect(var_44_string); // 0x222 Func
	var_45_string = "player_head.bin"; // 0x224 PushS
	ApplyEffect(var_45_string); // 0x225 Func
	var_46_string = "player_flashlight.bin"; // 0x227 PushS
	ApplyEffect(var_46_string); // 0x228 Func
	var_47_string = "player_visir.bin"; // 0x22a PushS
	ApplyEffect(var_47_string); // 0x22b Func
	var_48_string = "player_vis.bin"; // 0x22d PushS
	ApplyEffect(var_48_string); // 0x22e Func
	var_49_string = "player_eyes_height.bin"; // 0x230 PushS
	ApplyEffect(var_49_string); // 0x231 Func
	var_50_string = "player_gifts.bin"; // 0x233 PushS
	ApplyEffect(var_50_string); // 0x234 Func
	var_51_object = var_15_object; // 0x236 Push
	if(var_51_object == 0) goto Label_580; // 0x237 JumpB
	size(var_24_int); // 0x238 ObjFunc
	var_25_int = 0; // 0x23a MovI
	
Label_571:
	var_52_bool = var_25_int < var_24_int; // 0x23b LT
	if(var_52_bool == 0) goto Label_580; // 0x23c JumpB
	get(var_26_string, var_25_int); // 0x23d ObjFunc
	ApplyEffect(var_26_string); // 0x23f Func
	var_53_int = 1; // 0x241 PushI
	var_25_int = var_25_int + var_53_int; // 0x242 Add2
	goto Label_571; // 0x243 Jump
	
Label_580:
	func_742(); // 0x245 NEW_2
	var_59_string = "health"; // 0x247 PushS
	GetProperty(var_59_string, var_27_float); // 0x248 Func
	var_60_bool = 0; // 0x24a PushV
	var_60_bool = 0; // 0x24b MovB
	var_61_int = 0; // 0x24c PushI
	var_62_bool = var_27_float <= var_61_int; // 0x24d LE
	if(var_62_bool == 0) goto Label_597; // 0x24e JumpB
	var_63_bool = 0; // 0x24f PushV
	func_1659(var_63_bool); // 0x250 NEW_2
	var_67_bool = var_63_bool == 0; // 0x252 Not
	if(var_67_bool == 0) goto Label_597; // 0x253 JumpB
	var_60_bool = 1; // 0x254 MovB
	
Label_597:
	if(var_60_bool == 0) goto Label_602; // 0x255 JumpB
	func_1765(); // 0x257 NEW_2
	return 14; // 0x259 Return
	
Label_602:
	IsWeaponHolstered(var_28_bool); // 0x25a Func
	var_74_bool = var_28_bool == 0; // 0x25c Not
	if(var_74_bool == 0) goto Label_616; // 0x25d JumpB
	IsWalking(var_29_bool); // 0x25e Func
	var_75_bool = var_29_bool; // 0x260 Push
	if(var_75_bool == 0) goto Label_616; // 0x261 JumpB
	var_76_string = "walk"; // 0x262 PushS
	PlayAnimation(var_76_string); // 0x263 Func
	WaitForAnimEnd(); // 0x265 Func
	goto Label_619; // 0x267 Jump
	
Label_619:
	goto Label_602; // 0x26b Jump
	
Label_616:
	var_77_float = 0.1; // 0x268 PushF
	Sleep(var_77_float); // 0x269 Func
}


