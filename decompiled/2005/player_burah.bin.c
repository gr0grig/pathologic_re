task_1_event_37(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = var_1_bool; // 0x7f PushT
	if(var_12_bool == 0) goto Label_131; // 0x80 JumpB
	StopAnimation(); // 0x81 Func
	
Label_131:
	return 0; // 0x83 Return
}


task_1_event_13(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_112(var_11_bool); // 0x85 NEW_2
	var_19_bool = 0; // 0x87 PushV
	TaskCall(2); // 0x88 TaskCall
	func_181(var_20_bool, var_19_bool); // 0x89 NEW_2
	TaskReturn(); // 0x8a TaskReturn
	if(var_20_bool == 0) goto Label_143; // 0x8c JumpB
	var_0_bool = 1; // 0x8d TMovB
	goto Label_146; // 0x8e Jump
	
Label_146:
	return 0; // 0x92 Return
	
Label_143:
	func_102(var_11_bool); // 0x90 NEW_2
}


task_1_event_18(var_0_bool, var_1_bool, var_2_float, var_3_int, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 10; // 0x94 PushI
	var_14_bool = var_12_bool == var_13_int; // 0x95 Eq
	if(var_14_bool == 0) goto Label_157; // 0x96 JumpB
	var_0_bool = 1; // 0x97 TMovB
	var_15_bool = var_1_bool; // 0x98 PushT
	if(var_15_bool == 0) goto Label_156; // 0x99 JumpB
	StopAnimation(); // 0x9a Func
	
Label_156:
	goto Label_161; // 0x9c Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_157:
	var_16_int = 0; // 0x9d PushV
	var_16_int = var_12_bool; // 0x9e Mov
	func_3584(); // 0x9f NEW_2
}


task_1_event_22(var_0_bool, var_1_bool, var_2_float, var_3_object, var_4_int, var_5_float, var_6_float, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = var_1_bool; // 0xa3 PushT
	if(var_16_bool == 0) goto Label_168; // 0xa4 JumpB
	var_17_string = "hitblock"; // 0xa5 PushS
	PlayAnimation(var_17_string); // 0xa6 Func
	
Label_168:
	return 0; // 0xa8 Return
}


task_1_event_32(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = var_1_bool; // 0xa9 PushT
	if(var_12_bool == 0) goto Label_180; // 0xaa JumpB
	var_13_string = ""; var_14_float = 0; // 0xab PushV
	var_13_string = "armor_phys"; // 0xac MovS
	var_14_float = -var_2_float; // 0xad Neg2
	func_2862(var_13_string, var_14_float); // 0xae NEW_2
	var_18_string = "blocking"; // 0xb0 PushS
	var_19_bool = 0; // 0xb1 PushB
	SetProperty(var_18_string, var_19_bool); // 0xb2 Func
	
Label_180:
	return 0; // 0xb4 Return
}


task_2_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_int, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 10; // 0x1b2 PushI
	var_14_bool = var_12_bool == var_13_int; // 0x1b3 Eq
	if(var_14_bool == 0) goto Label_439; // 0x1b4 JumpB
	var_0_bool = 1; // 0x1b5 TMovB
	goto Label_443; // 0x1b6 Jump
	
Label_443:
	return 0; // 0x1bb Return
	
Label_439:
	var_15_int = 0; // 0x1b7 PushV
	var_15_int = var_12_bool; // 0x1b8 Mov
	func_3584(); // 0x1b9 NEW_2
}


task_3_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_int, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 10; // 0x2ba PushI
	var_14_bool = var_12_bool == var_13_int; // 0x2bb Eq
	if(var_14_bool == 0) goto Label_703; // 0x2bc JumpB
	var_0_bool = 1; // 0x2bd TMovB
	goto Label_707; // 0x2be Jump
	
Label_707:
	return 0; // 0x2c3 Return
	
Label_703:
	var_15_int = 0; // 0x2bf PushV
	var_15_int = var_12_bool; // 0x2c0 Mov
	func_3584(); // 0x2c1 NEW_2
}


task_4_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 10; // 0x3d3 PushI
	var_14_bool = var_12_bool == var_13_int; // 0x3d4 Eq
	if(var_14_bool == 0) goto Label_984; // 0x3d5 JumpB
	var_0_bool = 1; // 0x3d6 TMovB
	goto Label_988; // 0x3d7 Jump
	
Label_988:
	return 0; // 0x3dc Return
	
Label_984:
	var_15_int = 0; // 0x3d8 PushV
	var_15_int = var_12_bool; // 0x3d9 Mov
	func_3584(); // 0x3da NEW_2
}


task_5_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 10; // 0x4f1 PushI
	var_14_bool = var_12_bool == var_13_int; // 0x4f2 Eq
	if(var_14_bool == 0) goto Label_1270; // 0x4f3 JumpB
	var_0_bool = 1; // 0x4f4 TMovB
	goto Label_1274; // 0x4f5 Jump
	
Label_1274:
	return 0; // 0x4fa Return
	
Label_1270:
	var_15_int = 0; // 0x4f6 PushV
	var_15_int = var_12_bool; // 0x4f7 Mov
	func_3584(); // 0x4f8 NEW_2
}


task_6_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 10; // 0x636 PushI
	var_14_bool = var_12_bool == var_13_int; // 0x637 Eq
	if(var_14_bool == 0) goto Label_1595; // 0x638 JumpB
	var_0_bool = 1; // 0x639 TMovB
	goto Label_1599; // 0x63a Jump
	
Label_1599:
	return 0; // 0x63f Return
	
Label_1595:
	var_15_int = 0; // 0x63b PushV
	var_15_int = var_12_bool; // 0x63c Mov
	func_3584(); // 0x63d NEW_2
}


task_8_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 11; // 0x6b7 PushI
	var_14_bool = var_12_bool == var_13_int; // 0x6b8 Eq
	if(var_14_bool == 0) goto Label_1725; // 0x6b9 JumpB
	func_1699(); // 0x6bb NEW_2
	
Label_1725:
	var_40_int = 0; // 0x6bd PushV
	var_40_int = var_12_bool; // 0x6be Mov
	func_3584(); // 0x6bf NEW_2
	return 0; // 0x6c1 Return
}


task_10_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_int, var_11_bool, var_12_bool)
{
	var_13_int = 11; // 0x825 PushI
	var_14_bool = var_12_bool == var_13_int; // 0x826 Eq
	if(var_14_bool == 0) goto Label_2091; // 0x827 JumpB
	func_2065(); // 0x829 NEW_2
	
Label_2091:
	var_40_int = 0; // 0x82b PushV
	var_40_int = var_12_bool; // 0x82c Mov
	func_3584(); // 0x82d NEW_2
	return 0; // 0x82f Return
}


task_12_event_32(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; // 0x999 PushV
	var_12_bool = 0; // 0x99a MovB
	var_13_bool = var_0_bool == 0; // 0x99b Not
	if(var_13_bool == 0) goto Label_2464; // 0x99c JumpB
	var_14_bool = var_1_bool; // 0x99d PushT
	if(var_14_bool == 0) goto Label_2464; // 0x99e JumpB
	var_12_bool = 1; // 0x99f MovB
	
Label_2464:
	if(var_12_bool == 0) goto Label_2468; // 0x9a0 JumpB
	var_15_int = -1; // 0x9a1 PushI
	SetHandsItem(var_15_int); // 0x9a2 Func
	
Label_2468:
	return 0; // 0x9a4 Return
}


task_13_event_13(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_string, var_14_bool, var_15_bool, var_16_string, var_17_bool)
{
	var_56_bool = 0; var_57_string = ""; var_58_bool = 0; var_59_bool = 0; var_60_string = ""; var_61_bool = 0; // 0xa8e PushV
	IsWeaponHolstered(var_59_bool); // 0xa8f Func
	var_62_bool = var_59_bool == 0; // 0xa91 Not
	if(var_62_bool == 0) goto Label_2726; // 0xa92 JumpB
	func_2827(); // 0xa94 NEW_2
	GetCurrentWeapon(var_60_string); // 0xa96 Func
	var_63_string = ""; // 0xa98 PushV
	var_63_string = var_60_string; // 0xa99 Mov
	func_2489(var_63_string); // 0xa9a NEW_2
	func_2823(); // 0xa9d NEW_2
	IsAltShooting(var_61_bool); // 0xa9f Func
	var_1132_bool = var_61_bool; // 0xaa1 Push
	if(var_1132_bool == 0) goto Label_2726; // 0xaa2 JumpB
	func_2727(); // 0xaa4 NEW_2
	
Label_2726:
	return 6; // 0xaa6 Return
}


task_13_event_36(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_string = ""; var_14_bool = 0; var_15_bool = 0; var_16_string = ""; var_17_bool = 0; // 0xaa7 PushV
	IsWeaponHolstered(var_15_bool); // 0xaa8 Func
	var_18_bool = var_15_bool == 0; // 0xaaa Not
	if(var_18_bool == 0) goto Label_2751; // 0xaab JumpB
	func_2827(); // 0xaad NEW_2
	GetCurrentWeapon(var_16_string); // 0xaaf Func
	var_20_string = ""; // 0xab1 PushV
	var_20_string = var_16_string; // 0xab2 Mov
	func_2581(var_20_string); // 0xab3 NEW_2
	func_2823(); // 0xab6 NEW_2
	IsShooting(var_17_bool); // 0xab8 Func
	var_55_bool = var_17_bool; // 0xaba Push
	if(var_55_bool == 0) goto Label_2751; // 0xabb JumpB
	func_2702(); // 0xabd NEW_2
	
Label_2751:
	return 6; // 0xabf Return
}


task_13_event_15(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_2827(); // 0xac1 NEW_2
	TaskCall(0); // 0xac4 TaskCall
	func_0(); // 0xac5 NEW_2
	TaskReturn(); // 0xac6 TaskReturn
	func_2823(); // 0xac9 NEW_2
	return 0; // 0xacb Return
}


task_13_event_7(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; // 0xacc PushV
	var_21_bool = 0; var_22_int = 0; // 0xacd PushV
	var_22_int = var_12_int; // 0xace Mov
	func_3447(var_21_bool, var_22_int); // 0xacf NEW_2
	if(var_21_bool == 0) goto Label_2771; // 0xad1 JumpB
	return 8; // 0xad2 Return
	
Label_2771:
	func_2827(); // 0xad4 NEW_2
	IsWeaponHolstered(var_17_bool); // 0xad6 Func
	var_88_bool = var_17_bool == 0; // 0xad8 Not
	if(var_88_bool == 0) goto Label_2803; // 0xad9 JumpB
	var_18_int = 0; // 0xada MovI
	
Label_2779:
	var_89_string = "idle"; // 0xadb PushS
	var_90_int = 1; // 0xadc PushI
	var_91_int = var_18_int + var_90_int; // 0xadd Add
	var_92_int = var_89_string + var_91_int; // 0xade Add
	HasAnimation(var_19_bool, var_92_int); // 0xadf Func
	var_93_bool = var_19_bool == 0; // 0xae1 Not
	if(var_93_bool == 0) goto Label_2788; // 0xae2 JumpB
	goto Label_2791; // 0xae3 Jump
	
Label_2791:
	var_94_int = var_18_int; // 0xae7 Push
	if(var_94_int == 0) goto Label_2803; // 0xae8 JumpB
	irand(var_20_int, var_18_int); // 0xae9 Func
	var_95_string = "idle"; // 0xaeb PushS
	var_96_int = 1; // 0xaec PushI
	var_97_int = var_20_int + var_96_int; // 0xaed Add
	var_98_int = var_95_string + var_97_int; // 0xaee Add
	PlayAnimation(var_98_int); // 0xaef Func
	WaitForAnimEnd(); // 0xaf1 Func
	
Label_2803:
	func_2823(); // 0xaf4 NEW_2
	return 8; // 0xaf6 Return
	
Label_2788:
	var_104_int = 1; // 0xae4 PushI
	var_18_int = var_18_int + var_104_int; // 0xae5 Add2
	goto Label_2779; // 0xae6 Jump
}


task_13_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_string = ""; var_14_string = ""; // 0xaf7 PushV
	var_15_int = 11; // 0xaf8 PushI
	var_16_bool = var_12_int == var_15_int; // 0xaf9 Eq
	if(var_16_bool == 0) goto Label_2818; // 0xafa JumpB
	GetCurrentWeapon(var_14_string); // 0xafb Func
	var_17_string = ""; // 0xafd PushV
	var_17_string = var_14_string; // 0xafe Mov
	func_2553(var_17_string); // 0xaff NEW_2
	goto Label_2822; // 0xb01 Jump
	
Label_2822:
	return 2; // 0xb06 Return
	
Label_2818:
	var_63_int = 0; // 0xb02 PushV
	var_63_int = var_12_int; // 0xb03 Mov
	func_3584(); // 0xb04 NEW_2
}


event_44(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3322(); // 0xd15 NEW_2
	func_3270(); // 0xd18 NEW_2
	return 0; // 0xd1a Return
}


event_20(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3311(); // 0xd1c NEW_2
	func_3270(); // 0xd1f NEW_2
	return 0; // 0xd21 Return
}


event_21(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3291(); // 0xd23 NEW_2
	func_3280(); // 0xd26 NEW_2
	return 0; // 0xd28 Return
}


event_45(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3301(); // 0xd2a NEW_2
	return 0; // 0xd2c Return
}


event_7(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_int = 0; // 0xd7f PushV
	var_14_int = var_12_int; // 0xd80 Mov
	func_3447(var_13_bool, var_14_int); // 0xd81 NEW_2
	return 0; // 0xd83 Return
}


event_26(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "die"; // 0xd85 PushS
	var_14_bool = var_12_string == var_13_string; // 0xd86 Eq
	if(var_14_bool == 0) goto Label_3467; // 0xd87 JumpB
	func_3258(); // 0xd89 NEW_2
	
Label_3467:
	return 0; // 0xd8b Return
}


event_16(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_float = 0; var_18_object = Obj(); var_19_object = Obj(); // 0xd8c PushV
	var_20_string = "health"; // 0xd8d PushS
	var_21_bool = var_13_string == var_20_string; // 0xd8e Eq
	if(var_21_bool == 0) goto Label_3481; // 0xd8f JumpB
	var_22_string = "health"; // 0xd90 PushS
	GetProperty(var_22_string, var_17_float); // 0xd91 Func
	var_23_float = 0.001; // 0xd93 PushF
	var_24_bool = var_17_float < var_23_float; // 0xd94 LT
	if(var_24_bool == 0) goto Label_3480; // 0xd95 JumpB
	SignalDeath(var_12_object); // 0xd96 Func
	
Label_3480:
	goto Label_3493; // 0xd98 Jump
	
Label_3493:
	CreateStringVector(var_19_object); // 0xda5 Func
	add(var_13_string); // 0xda7 ObjFunc
	var_25_int = 10; // 0xda9 PushI
	SendWorldWndMessage(var_25_int, var_19_object); // 0xdaa Func
	return 6; // 0xdac Return
	
Label_3481:
	var_26_string = "reputation"; // 0xd99 PushS
	var_27_bool = var_13_string == var_26_string; // 0xd9a Eq
	if(var_27_bool == 0) goto Label_3493; // 0xd9b JumpB
	GetScene(var_18_object); // 0xd9c Func
	var_28_string = "prc"; // 0xd9e PushS
	var_29_object = Obj(); // 0xd9f PushV
	func_3001(var_29_object); // 0xda0 NEW_2
	BroadcastMessage(var_28_string, var_29_object, var_18_object); // 0xda2 Func
	var_18_object = 0; // 0xda4 SetNull
}


event_41(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; // 0xdaf PushV
	func_3147(var_13_bool); // 0xdb0 NEW_2
	var_17_bool = var_13_bool == 0; // 0xdb2 Not
	if(var_17_bool == 0) goto Label_3511; // 0xdb3 JumpB
	func_3258(); // 0xdb5 NEW_2
	
Label_3511:
	return 0; // 0xdb7 Return
}


event_31(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_float, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0xdb8 PushV
	var_17_bool = var_12_object == 0; // 0xdb9 Not
	if(var_17_bool == 0) goto Label_3516; // 0xdba JumpB
	return 2; // 0xdbb Return
	
Label_3516:
	var_18_object = GlobalVars[2]; // 0xdbc PushGE
	in(var_16_bool, var_12_object); // 0xdbd ObjFunc
	var_19_bool = var_16_bool; // 0xdbf Push
	if(var_19_bool == 0) goto Label_3526; // 0xdc0 JumpB
	var_20_string = "Reputation is not changed for enemy: "; // 0xdc1 PushS
	var_21_int = var_20_string + var_12_object; // 0xdc2 Add
	Trace(var_21_int); // 0xdc3 Func
	return 2; // 0xdc5 Return
	
Label_3526:
	var_22_bool = var_14_bool == 0; // 0xdc6 Not
	if(var_22_bool == 0) goto Label_3534; // 0xdc7 JumpB
	var_23_object = GlobalVars[1]; // 0xdc8 PushGE
	in(var_16_bool, var_12_object); // 0xdc9 ObjFunc
	var_24_bool = var_16_bool; // 0xdcb Push
	if(var_24_bool == 0) goto Label_3534; // 0xdcc JumpB
	return 2; // 0xdcd Return
	
Label_3534:
	var_25_object = GlobalVars[1]; // 0xdce PushGE
	add(var_12_object); // 0xdcf ObjFunc
	var_26_bool = 0; var_27_object = Obj(); var_28_float = 0; // 0xdd1 PushV
	var_29_object = Obj(); // 0xdd2 PushV
	func_3001(var_29_object); // 0xdd3 NEW_2
	var_27_object = var_29_object; // 0xdd4 Mov
	var_28_float = var_13_float; // 0xdd6 Mov
	func_3084(var_26_bool, var_27_object, var_28_float); // 0xdd7 NEW_2
	return 2; // 0xdd9 Return
}


event_19(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3762(); // 0xddb NEW_2
	func_3280(); // 0xdde NEW_2
	return 0; // 0xde0 Return
}


event_17(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	return 0; // 0xde2 Return
}


event_39(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_float)
{
	var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; // 0xde3 PushV
	var_17_float = 770.0; // 0xde4 PushF
	var_18_bool = var_12_float > var_17_float; // 0xde5 GT
	if(var_18_bool == 0) goto Label_3583; // 0xde6 JumpB
	Trace(var_12_float); // 0xde7 Func
	var_19_float = 770.0; // 0xde9 PushF
	var_20_int = var_12_float - var_19_float; // 0xdea Sub
	var_21_float = 0.0035; // 0xdeb PushF
	var_15_float = var_20_int * var_21_float; // 0xdec Mult2
	var_22_float = 0; var_23_object = Obj(); var_24_float = 0; var_25_int = 0; // 0xded PushV
	var_26_object = Obj(); // 0xdee PushV
	func_3001(var_26_object); // 0xdef NEW_2
	var_23_object = var_26_object; // 0xdf0 Mov
	var_24_float = var_15_float; // 0xdf2 Mov
	var_25_int = 0; // 0xdf3 MovI
	func_2891(var_22_float, var_23_object, var_24_float, var_25_int); // 0xdf4 NEW_2
	var_16_float = var_22_float; // 0xdf5 Mov
	var_91_object = Obj(); // 0xdf7 PushV
	func_3001(var_91_object); // 0xdf8 NEW_2
	var_92_int = 0; // 0xdfa PushI
	var_93_cvector = CVector(0.0, 0.0, 0.0); // 0xdfb PushVec
	var_94_cvector = CVector(0.0, 0.0, 0.0); // 0xdfc PushVec
	ReportHit(var_91_object, var_92_int, var_16_float, var_15_float, var_93_cvector, var_94_cvector); // 0xdfd Func
	
Label_3583:
	return 4; // 0xdff Return
}


event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_string = ""; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_int = 0; var_21_bool = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_bool = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; // 0xe00 PushV
	var_41_int = 0; // 0xe01 PushI
	var_42_bool = var_12_int == var_41_int; // 0xe02 Eq
	if(var_42_bool == 0) goto Label_3591; // 0xe03 JumpB
	Inventory(); // 0xe04 Func
	goto Label_3761; // 0xe06 Jump
	
Label_3761:
	return 28; // 0xeb1 Return
	
Label_3591:
	var_43_int = 1; // 0xe07 PushI
	var_44_bool = var_12_int == var_43_int; // 0xe08 Eq
	if(var_44_bool == 0) goto Label_3640; // 0xe09 JumpB
	GetMainOutdoorScene(var_27_object); // 0xe0a Func
	GetActiveScene(var_28_object); // 0xe0c Func
	var_45_bool = var_27_object == 0; // 0xe0e NullEq
	if(var_45_bool == 0) goto Label_3604; // 0xe0f JumpB
	var_46_string = "Can't find main outdoor oscene"; // 0xe10 PushS
	Trace(var_46_string); // 0xe11 Func
	return 28; // 0xe13 Return
	
Label_3604:
	GetMap(var_29_object); // 0xe14 ObjFunc
	var_47_bool = var_29_object == 0; // 0xe16 NullEq
	if(var_47_bool == 0) goto Label_3612; // 0xe17 JumpB
	var_48_string = "Can't find map"; // 0xe18 PushS
	Trace(var_48_string); // 0xe19 Func
	return 28; // 0xe1b Return
	
Label_3612:
	var_49_bool = var_27_object == var_28_object; // 0xe1c Eq
	if(var_49_bool == 0) goto Label_3617; // 0xe1d JumpB
	GetPosition(var_30_cvector); // 0xe1e Func
	goto Label_3630; // 0xe20 Jump
	
Label_3630:
	var_50_float = GetByIndex(var_30_cvector, 0); // 0xe2e PushE
	var_51_float = GetByIndex(var_30_cvector, 2); // 0xe2f PushE
	SetMapParams(var_50_float, var_51_float); // 0xe30 ObjFunc
	ShowMap(var_29_object); // 0xe32 Func
	var_29_object = 0; // 0xe34 SetNull
	var_28_object = 0; // 0xe35 SetNull
	var_27_object = 0; // 0xe36 SetNull
	goto Label_3761; // 0xe37 Jump
	
Label_3617:
	GetName(var_31_string); // 0xe21 ObjFunc
	var_52_string = "pt_gmap_"; // 0xe23 PushS
	var_53_int = var_52_string + var_31_string; // 0xe24 Add
	GetLocator(var_53_int, var_32_bool, var_30_cvector, var_33_cvector); // 0xe25 ObjFunc
	var_54_bool = var_32_bool == 0; // 0xe27 Not
	if(var_54_bool == 0) goto Label_3630; // 0xe28 JumpB
	var_55_string = "FIXME: No map locator for scene : "; // 0xe29 PushS
	var_56_int = var_55_string + var_31_string; // 0xe2a Add
	Trace(var_56_int); // 0xe2b Func
	var_30_cvector = CVector(0.0, 0.0, 0.0); // 0xe2d MovV
	
Label_3640:
	var_57_int = 2; // 0xe38 PushI
	var_58_bool = var_12_int == var_57_int; // 0xe39 Eq
	if(var_58_bool == 0) goto Label_3646; // 0xe3a JumpB
	Diary(); // 0xe3b Func
	goto Label_3761; // 0xe3d Jump
	
Label_3646:
	var_59_int = 3; // 0xe3e PushI
	var_60_bool = var_12_int == var_59_int; // 0xe3f Eq
	if(var_60_bool == 0) goto Label_3652; // 0xe40 JumpB
	ShowMessage(); // 0xe41 Func
	goto Label_3761; // 0xe43 Jump
	
Label_3652:
	var_61_int = 4; // 0xe44 PushI
	var_62_bool = var_12_int == var_61_int; // 0xe45 Eq
	if(var_62_bool == 0) goto Label_3665; // 0xe46 JumpB
	ShowPlayerStats(var_34_int); // 0xe47 Func
	var_63_int = 1; // 0xe49 PushI
	var_64_bool = var_34_int == var_63_int; // 0xe4a Eq
	if(var_64_bool == 0) goto Label_3664; // 0xe4b JumpB
	var_65_string = "people.xml"; // 0xe4c PushS
	var_66_bool = 1; // 0xe4d PushB
	ShowWindow(var_65_string, var_66_bool); // 0xe4e Func
	
Label_3664:
	goto Label_3761; // 0xe50 Jump
	
Label_3665:
	var_67_int = 5; // 0xe51 PushI
	var_68_bool = var_12_int == var_67_int; // 0xe52 Eq
	if(var_68_bool == 0) goto Label_3694; // 0xe53 JumpB
	IsFlashlightOn(var_35_bool); // 0xe54 Func
	var_69_bool = var_35_bool; // 0xe56 Push
	if(var_69_bool == 0) goto Label_3679; // 0xe57 JumpB
	var_70_bool = 0; // 0xe58 PushB
	SwitchFlashlight(var_70_bool); // 0xe59 Func
	var_71_string = "flashlight_off"; // 0xe5b PushS
	PlaySound(var_71_string); // 0xe5c Func
	goto Label_3693; // 0xe5e Jump
	
Label_3693:
	goto Label_3761; // 0xe6d Jump
	
Label_3679:
	var_72_bool = 0; // 0xe5f PushV
	func_3158(var_72_bool); // 0xe60 NEW_2
	if(var_72_bool == 0) goto Label_3690; // 0xe62 JumpB
	var_76_bool = 1; // 0xe63 PushB
	SwitchFlashlight(var_76_bool); // 0xe64 Func
	var_77_string = "flashlight_on"; // 0xe66 PushS
	PlaySound(var_77_string); // 0xe67 Func
	goto Label_3693; // 0xe69 Jump
	
Label_3690:
	var_78_string = "flashlight_nofuel"; // 0xe6a PushS
	PlaySound(var_78_string); // 0xe6b Func
	
Label_3694:
	var_79_int = 6; // 0xe6e PushI
	var_80_bool = var_12_int == var_79_int; // 0xe6f Eq
	if(var_80_bool == 0) goto Label_3734; // 0xe70 JumpB
	var_81_int = 0; // 0xe71 PushV
	func_3164(var_81_int); // 0xe72 NEW_2
	var_85_int = 0; // 0xe74 PushI
	var_86_bool = var_81_int != var_85_int; // 0xe75 Neq
	if(var_86_bool == 0) goto Label_3704; // 0xe76 JumpB
	return 28; // 0xe77 Return
	
Label_3704:
	IsVisirOn(var_36_bool); // 0xe78 Func
	var_87_bool = var_36_bool; // 0xe7a Push
	if(var_87_bool == 0) goto Label_3715; // 0xe7b JumpB
	var_88_bool = 0; // 0xe7c PushB
	SwitchVisir(var_88_bool); // 0xe7d Func
	var_89_int = 2; // 0xe7f PushI
	SendWorldWndMessage(var_89_int); // 0xe80 Func
	goto Label_3733; // 0xe82 Jump
	
Label_3733:
	goto Label_3761; // 0xe95 Jump
	
Label_3715:
	var_90_string = "visir"; // 0xe83 PushS
	GetProperty(var_90_string, var_37_int); // 0xe84 Func
	var_91_int = var_37_int; // 0xe86 Push
	if(var_91_int == 0) goto Label_3733; // 0xe87 JumpB
	var_92_string = "vcharge"; // 0xe88 PushS
	GetProperty(var_92_string, var_38_int); // 0xe89 Func
	var_93_int = 10; // 0xe8b PushI
	var_94_bool = var_38_int >= var_93_int; // 0xe8c GE
	if(var_94_bool == 0) goto Label_3733; // 0xe8d JumpB
	var_95_bool = 1; // 0xe8e PushB
	SwitchVisir(var_95_bool); // 0xe8f Func
	var_96_int = 1; // 0xe91 PushI
	SendWorldWndMessage(var_96_int); // 0xe92 Func
	goto Label_3733; // 0xe94 Jump
	
Label_3734:
	var_97_int = 7; // 0xe96 PushI
	var_98_bool = var_12_int == var_97_int; // 0xe97 Eq
	if(var_98_bool == 0) goto Label_3746; // 0xe98 JumpB
	IsOverrideActive(var_39_bool); // 0xe99 Func
	var_99_bool = var_39_bool == 0; // 0xe9b Not
	if(var_99_bool == 0) goto Label_3745; // 0xe9c JumpB
	var_100_string = "people.xml"; // 0xe9d PushS
	var_101_bool = 1; // 0xe9e PushB
	ShowWindow(var_100_string, var_101_bool); // 0xe9f Func
	
Label_3745:
	goto Label_3761; // 0xea1 Jump
	
Label_3746:
	var_102_int = 21; // 0xea2 PushI
	var_103_bool = var_12_int == var_102_int; // 0xea3 Eq
	if(var_103_bool == 0) goto Label_3761; // 0xea4 JumpB
	GetWeaponItem(var_40_int); // 0xea5 Func
	var_104_int = -1; // 0xea7 PushI
	var_105_bool = var_40_int != var_104_int; // 0xea8 Neq
	if(var_105_bool == 0) goto Label_3761; // 0xea9 JumpB
	var_106_bool = 0; // 0xeaa PushB
	var_107_int = 0; // 0xeab PushI
	SelectItem(var_40_int, var_106_bool, var_107_int); // 0xeac Func
	var_108_int = -1; // 0xeae PushI
	SetHandsItem(var_108_int); // 0xeaf Func
}


main(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x9a5 PushV
	var_14_string = "player_init"; // 0x9a6 PushS
	GetVariable(var_14_string, var_13_int); // 0x9a7 Func
	var_15_bool = var_13_int == 0; // 0x9a9 Not
	if(var_15_bool == 0) goto Label_2481; // 0x9aa JumpB
	Diary(); // 0x9ab Func
	var_16_string = "player_init"; // 0x9ad PushS
	var_17_int = 1; // 0x9ae PushI
	SetVariable(var_16_string, var_17_int); // 0x9af Func
	
Label_2481:
	var_18_object = Obj(); // 0x9b1 PushV
	var_19_object = Obj(); // 0x9b2 PushV
	func_3153(var_19_object); // 0x9b3 NEW_2
	var_18_object = var_19_object; // 0x9b4 Mov
	func_2592(var_18_object); // 0x9b6 NEW_2
	return 2; // 0x9b8 Return
}


func_2049()
{
	var_1066_bool = 0; var_1067_bool = 0; var_1068_bool = 0; var_1069_bool = 0; // 0x801 PushV
	var_1070_string = "ammo"; // 0x802 PushS
	GetWeaponProperty(var_1068_bool, var_1070_string, var_1069_bool); // 0x803 Func
	var_1071_bool = 0; // 0x805 PushV
	var_1071_bool = 1; // 0x806 MovB
	var_1072_bool = var_1068_bool == 0; // 0x807 Not
	if(var_1072_bool == 0) goto Label_2060; // 0x808 JumpB
	var_1073_bool = var_1069_bool == 0; // 0x809 Not
	if(var_1073_bool == 0) goto Label_2060; // 0x80a JumpB
	var_1071_bool = 0; // 0x80b MovB
	
Label_2060:
	if(var_1071_bool == 0) goto Label_2064; // 0x80c JumpB
	func_2065(); // 0x80e NEW_2
	
Label_2064:
	return 4; // 0x810 Return
}


func_0()
{
	var_13_string = ""; var_14_bool = 0; var_15_object = Obj(); var_16_string = ""; var_17_bool = 0; var_18_object = Obj(); // 0x0 PushV
	GetCurrentWeapon(var_16_string); // 0x1 Func
	IsWeaponHolstered(var_17_bool); // 0x3 Func
	GetScene(var_18_object); // 0x5 Func
	var_19_bool = var_17_bool; // 0x7 Push
	if(var_19_bool == 0) goto Label_29; // 0x8 JumpB
	var_20_string = "unholster"; // 0x9 PushS
	var_21_object = Obj(); // 0xa PushV
	func_3001(var_21_object); // 0xb NEW_2
	BroadcastMessage(var_20_string, var_21_object, var_18_object); // 0xd Func
	var_24_string = ""; // 0xf PushV
	var_25_string = "_unholster"; // 0x10 PushS
	var_24_string = var_16_string + var_25_string; // 0x11 Add2
	func_3139(var_24_string); // 0x12 NEW_2
	var_29_bool = 0; // 0x14 PushB
	SetWeaponHolster(var_29_bool); // 0x15 Func
	var_30_string = "unholster"; // 0x17 PushS
	PlayAnimation(var_30_string); // 0x18 Func
	WaitForAnimEnd(); // 0x1a Func
	goto Label_48; // 0x1c Jump
	
Label_48:
	return 6; // 0x30 Return
	
Label_29:
	var_31_string = "holster"; // 0x1d PushS
	var_32_object = Obj(); // 0x1e PushV
	func_3001(var_32_object); // 0x1f NEW_2
	BroadcastMessage(var_31_string, var_32_object, var_18_object); // 0x21 Func
	var_33_string = ""; // 0x23 PushV
	var_34_string = "_holster"; // 0x24 PushS
	var_33_string = var_16_string + var_34_string; // 0x25 Add2
	func_3139(var_33_string); // 0x26 NEW_2
	var_35_string = "holster"; // 0x28 PushS
	PlayAnimation(var_35_string); // 0x29 Func
	WaitForAnimEnd(); // 0x2b Func
	var_36_bool = 1; // 0x2d PushB
	SetWeaponHolster(var_36_bool); // 0x2e Func
}


func_1031()
{
	var_557_int = 0; // 0x407 PushV
	var_558_int = 0; // 0x408 PushV
	func_1011(var_558_int); // 0x409 NEW_2
	var_557_int = var_558_int; // 0x40a Mov
	func_3420(var_557_int); // 0x40c NEW_2
	return 0; // 0x40e Return
}


func_3084(var_26_bool, var_27_object, var_28_float)
{
	var_32_bool = var_27_object == 0; // 0xc0d Not
	if(var_32_bool == 0) goto Label_3089; // 0xc0e JumpB
	var_26_bool = 0; // 0xc0f MovB
	return 0; // 0xc10 Return
	
Label_3089:
	var_33_int = 0; // 0xc11 PushI
	var_34_bool = var_28_float > var_33_int; // 0xc12 GT
	if(var_34_bool == 0) goto Label_3096; // 0xc13 JumpB
	var_35_int = 8; // 0xc14 PushI
	SendWorldWndMessage(var_35_int); // 0xc15 Func
	goto Label_3105; // 0xc17 Jump
	
Label_3105:
	var_36_float = 0; // 0xc21 PushV
	var_36_float = var_28_float; // 0xc22 Mov
	func_3129(var_36_float); // 0xc23 NEW_2
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; var_43_float = 0; var_44_float = 0; var_45_float = 0; // 0xc25 PushV
	var_41_object = var_27_object; // 0xc26 Mov
	var_42_string = "reputation"; // 0xc27 MovS
	var_43_float = var_28_float; // 0xc28 Mov
	var_44_float = 0; // 0xc29 MovI
	var_45_float = 1; // 0xc2a MovI
	func_2869(var_40_bool, var_41_object, var_42_string, var_43_float, var_44_float, var_45_float); // 0xc2b NEW_2
	var_26_bool = 1; // 0xc2d MovB
	return 0; // 0xc2e Return
	
Label_3096:
	var_64_int = 0; // 0xc18 PushI
	var_65_bool = var_28_float < var_64_int; // 0xc19 LT
	if(var_65_bool == 0) goto Label_3103; // 0xc1a JumpB
	var_66_int = 9; // 0xc1b PushI
	SendWorldWndMessage(var_66_int); // 0xc1c Func
	goto Label_3105; // 0xc1e Jump
	
Label_3103:
	var_26_bool = 0; // 0xc1f MovB
	return 0; // 0xc20 Return
}


func_1039(var_0_bool)
{
	var_442_int = 0; var_443_string = ""; var_444_bool = 0; var_445_string = ""; var_446_float = 0; var_447_cvector = CVector(0,0,0); var_448_object = Obj(); var_449_int = 0; var_450_cvector = CVector(0,0,0); var_451_bool = 0; var_452_cvector = CVector(0,0,0); var_453_cvector = CVector(0,0,0); var_454_string = ""; var_455_int = 0; var_456_cvector = CVector(0,0,0); var_457_cvector = CVector(0,0,0); var_458_float = 0; var_459_float = 0; var_460_int = 0; var_461_bool = 0; var_462_int = 0; var_463_string = ""; var_464_bool = 0; var_465_string = ""; var_466_float = 0; var_467_cvector = CVector(0,0,0); var_468_object = Obj(); var_469_int = 0; var_470_cvector = CVector(0,0,0); var_471_bool = 0; var_472_cvector = CVector(0,0,0); var_473_cvector = CVector(0,0,0); var_474_string = ""; var_475_int = 0; var_476_cvector = CVector(0,0,0); var_477_cvector = CVector(0,0,0); var_478_float = 0; var_479_float = 0; var_480_int = 0; var_481_bool = 0; // 0x40f PushV
	var_0_bool = 0; // 0x410 TMovB
	var_462_int = 0; // 0x411 MovI
	
Label_1042:
	var_482_int = 1; // 0x412 PushI
	var_462_int = var_462_int + var_482_int; // 0x413 Add2
	var_483_string = ""; // 0x414 PushV
	func_1275(var_483_string); // 0x415 NEW_2
	var_484_string = "attack"; // 0x417 PushS
	var_485_int = var_483_string + var_484_string; // 0x418 Add
	var_486_int = var_485_int + var_462_int; // 0x419 Add
	var_487_string = "_phase1"; // 0x41a PushS
	var_463_string = var_486_int + var_487_string; // 0x41b Add2
	HasAnimation(var_464_bool, var_463_string); // 0x41c Func
	var_488_bool = var_464_bool == 0; // 0x41e Not
	if(var_488_bool == 0) goto Label_1057; // 0x41f JumpB
	goto Label_1058; // 0x420 Jump
	
Label_1058:
	var_489_int = -1; // 0x422 PushI
	var_462_int = var_462_int + var_489_int; // 0x423 Add2
	var_490_bool = var_462_int == 0; // 0x424 Not
	if(var_490_bool == 0) goto Label_1063; // 0x425 JumpB
	return 40; // 0x426 Return
	
Label_1063:
	GetCurrentWeapon(var_465_string); // 0x427 Func
	GetAttackDistance(var_466_float); // 0x429 Func
	GetDirection(var_467_cvector); // 0x42b Func
	var_471_bool = 0; // 0x42d MovB
	var_491_bool = 0; // 0x42e PushV
	func_998(var_491_bool); // 0x42f NEW_2
	if(var_491_bool == 0) goto Label_1120; // 0x431 JumpB
	GetVictimMaterialExact(var_468_object, var_469_int, var_470_cvector, var_467_cvector, var_466_float); // 0x432 Func
	var_492_bool = 0; // 0x434 PushV
	var_492_bool = 0; // 0x435 MovB
	var_493_bool = 0; // 0x436 PushV
	var_493_bool = 0; // 0x437 MovB
	var_494_bool = 0; // 0x438 PushV
	var_494_bool = 0; // 0x439 MovB
	var_495_bool = var_468_object != 0; // 0x43a NullNeq
	if(var_495_bool == 0) goto Label_1091; // 0x43b JumpB
	var_496_bool = 0; var_497_object = Obj(); var_498_string = ""; // 0x43c PushV
	var_497_object = var_468_object; // 0x43d Mov
	var_498_string = "health"; // 0x43e MovS
	func_2850(var_496_bool, var_497_object, var_498_string); // 0x43f NEW_2
	if(var_496_bool == 0) goto Label_1091; // 0x441 JumpB
	var_494_bool = 1; // 0x442 MovB
	
Label_1091:
	if(var_494_bool == 0) goto Label_1099; // 0x443 JumpB
	var_499_bool = 0; var_500_object = Obj(); // 0x444 PushV
	var_500_object = var_468_object; // 0x445 Mov
	func_2964(var_500_object); // 0x446 NEW_2
	var_501_bool = var_499_bool == 0; // 0x448 Not
	if(var_501_bool == 0) goto Label_1099; // 0x449 JumpB
	var_493_bool = 1; // 0x44a MovB
	
Label_1099:
	if(var_493_bool == 0) goto Label_1104; // 0x44b JumpB
	var_502_int = 4; // 0x44c PushI
	var_503_bool = var_469_int == var_502_int; // 0x44d Eq
	if(var_503_bool == 0) goto Label_1104; // 0x44e JumpB
	var_492_bool = 1; // 0x44f MovB
	
Label_1104:
	if(var_492_bool == 0) goto Label_1120; // 0x450 JumpB
	var_504_string = "GetDirection"; // 0x451 PushS
	var_505_int = 1; // 0x452 PushI
	var_506_bool = IsFuncExist(var_468_object, var_504_string, var_505_int); // 0x453 FuncExist
	if(var_506_bool == 0) goto Label_1120; // 0x454 JumpB
	GetDirection(var_472_cvector); // 0x455 Func
	GetDirection(var_473_cvector); // 0x457 ObjFunc
	var_507_float = 0; var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); // 0x459 PushV
	var_508_cvector = var_472_cvector; // 0x45a Mov
	var_509_cvector = var_473_cvector; // 0x45b Mov
	func_3067(var_507_float, var_508_cvector, var_509_cvector); // 0x45c NEW_2
	var_510_float = 0.5; // 0x45e PushF
	var_471_bool = var_507_float >= var_510_float; // 0x45f GE2
	
Label_1120:
	var_511_bool = var_471_bool; // 0x460 Push
	if(var_511_bool == 0) goto Label_1131; // 0x461 JumpB
	var_474_string = "battack"; // 0x462 MovS
	var_512_string = ""; // 0x463 PushV
	func_1000(var_512_string); // 0x464 NEW_2
	var_513_string = "_back"; // 0x466 PushS
	var_514_int = var_512_string + var_513_string; // 0x467 Add
	PlaySound(var_514_int); // 0x468 Func
	goto Label_1149; // 0x46a Jump
	
Label_1149:
	var_515_bool = 1; // 0x47d PushB
	SetAttackState(var_515_bool); // 0x47e Func
	var_516_string = "_phase1"; // 0x480 PushS
	var_517_int = var_474_string + var_516_string; // 0x481 Add
	PlayAnimation(var_517_int); // 0x482 Func
	WaitForAnimEnd(); // 0x484 Func
	var_518_bool = var_0_bool; // 0x486 PushT
	if(var_518_bool == 0) goto Label_1161; // 0x487 JumpB
	return 40; // 0x488 Return
	
Label_1161:
	var_519_bool = 0; // 0x489 PushB
	SetAttackState(var_519_bool); // 0x48a Func
	GetAttackDistance(var_466_float); // 0x48c Func
	GetDirection(var_467_cvector); // 0x48e Func
	GetVictimMaterialExact(var_468_object, var_469_int, var_470_cvector, var_467_cvector, var_466_float); // 0x490 Func
	var_520_bool = var_468_object != 0; // 0x492 NullNeq
	if(var_520_bool == 0) goto Label_1249; // 0x493 JumpB
	var_521_string = "GetDirection"; // 0x494 PushS
	var_522_int = 1; // 0x495 PushI
	var_523_bool = IsFuncExist(var_468_object, var_521_string, var_522_int); // 0x496 FuncExist
	if(var_523_bool == 0) goto Label_1188; // 0x497 JumpB
	GetDirection(var_476_cvector); // 0x498 Func
	GetDirection(var_477_cvector); // 0x49a ObjFunc
	var_524_float = 0; var_525_cvector = CVector(0,0,0); var_526_cvector = CVector(0,0,0); // 0x49c PushV
	var_525_cvector = var_476_cvector; // 0x49d Mov
	var_526_cvector = var_477_cvector; // 0x49e Mov
	func_3067(var_524_float, var_525_cvector, var_526_cvector); // 0x49f NEW_2
	var_527_float = 0.5; // 0x4a1 PushF
	var_471_bool = var_524_float >= var_527_float; // 0x4a2 GE2
	goto Label_1189; // 0x4a3 Jump
	
Label_1189:
	var_528_float = 0; var_529_bool = 0; // 0x4a5 PushV
	var_529_bool = var_471_bool; // 0x4a6 Mov
	func_1017(var_528_float, var_529_bool); // 0x4a7 NEW_2
	var_478_float = var_528_float; // 0x4a8 Mov
	var_536_int = 4; // 0x4aa PushI
	var_537_bool = var_469_int == var_536_int; // 0x4ab Eq
	if(var_537_bool == 0) goto Label_1199; // 0x4ac JumpB
	var_538_float = 3.0; // 0x4ad PushF
	var_478_float = var_478_float * var_538_float; // 0x4ae Mult2
	
Label_1199:
	var_539_float = 0; var_540_object = Obj(); var_541_float = 0; var_542_int = 0; // 0x4af PushV
	var_540_object = var_468_object; // 0x4b0 Mov
	var_541_float = var_478_float; // 0x4b1 Mov
	var_543_int = 0; // 0x4b2 PushV
	func_1013(var_543_int); // 0x4b3 NEW_2
	var_542_int = var_543_int; // 0x4b4 Mov
	func_2891(var_539_float, var_540_object, var_541_float, var_542_int); // 0x4b6 NEW_2
	var_479_float = var_539_float; // 0x4b7 Mov
	var_544_float = var_479_float; // 0x4b9 Push
	if(var_544_float == 0) goto Label_1246; // 0x4ba JumpB
	var_545_int = 2; // 0x4bb PushI
	irand(var_480_int, var_545_int); // 0x4bc Func
	var_546_string = ""; // 0x4be PushV
	func_1000(var_546_string); // 0x4bf NEW_2
	var_547_string = "_hit"; // 0x4c1 PushS
	var_548_int = var_546_string + var_547_string; // 0x4c2 Add
	var_549_int = 1; // 0x4c3 PushI
	var_550_int = var_480_int + var_549_int; // 0x4c4 Add
	var_551_int = var_548_int + var_550_int; // 0x4c5 Add
	PlaySound(var_551_int); // 0x4c6 Func
	ReportAttack(var_468_object); // 0x4c8 Func
	var_552_int = 0; // 0x4ca PushV
	func_1015(var_552_int); // 0x4cb NEW_2
	ReportHit(var_468_object, var_552_int, var_479_float, var_478_float, var_470_cvector, var_467_cvector); // 0x4cd Func
	var_553_object = GlobalVars[2]; // 0x4cf PushGE
	in(var_481_bool, var_468_object); // 0x4d0 ObjFunc
	var_554_bool = var_481_bool == 0; // 0x4d2 Not
	if(var_554_bool == 0) goto Label_1243; // 0x4d3 JumpB
	var_555_object = GlobalVars[3]; // 0x4d4 PushGE
	add(var_468_object); // 0x4d5 ObjFunc
	var_556_bool = 0; // 0x4d7 PushB
	BroadcastPlayerDamage(var_468_object, var_556_bool); // 0x4d8 Func
	goto Label_1246; // 0x4da Jump
	
Label_1246:
	func_1031(); // 0x4df NEW_2
	
Label_1249:
	var_559_string = "_phase2"; // 0x4e1 PushS
	var_560_int = var_474_string + var_559_string; // 0x4e2 Add
	PlayAnimation(var_560_int); // 0x4e3 Func
	WaitForAnimEnd(); // 0x4e5 Func
	var_561_bool = var_0_bool; // 0x4e7 PushT
	if(var_561_bool == 0) goto Label_1258; // 0x4e8 JumpB
	return 40; // 0x4e9 Return
	
Label_1258:
	var_468_object = 0; // 0x4ea SetNull
	var_562_bool = 0; // 0x4eb PushV
	func_1277(var_562_bool); // 0x4ec NEW_2
	if(var_562_bool == 0) goto Label_1063; // 0x4ee JumpB
	return 40; // 0x4ef Return
	
Label_1243:
	var_565_bool = 1; // 0x4db PushB
	BroadcastPlayerDamage(var_468_object, var_565_bool); // 0x4dc Func
	
Label_1188:
	var_471_bool = 0; // 0x4a4 MovB
	
Label_1131:
	irand(var_475_int, var_462_int); // 0x46b Func
	var_566_string = ""; // 0x46d PushV
	func_1275(var_566_string); // 0x46e NEW_2
	var_567_string = "attack"; // 0x470 PushS
	var_568_int = var_566_string + var_567_string; // 0x471 Add
	var_569_int = 1; // 0x472 PushI
	var_570_int = var_475_int + var_569_int; // 0x473 Add
	var_474_string = var_568_int + var_570_int; // 0x474 Add2
	var_571_string = ""; // 0x475 PushV
	func_1000(var_571_string); // 0x476 NEW_2
	var_572_int = 1; // 0x478 PushI
	var_573_int = var_475_int + var_572_int; // 0x479 Add
	var_574_int = var_571_string + var_573_int; // 0x47a Add
	PlaySound(var_574_int); // 0x47b Func
	
Label_1057:
	goto Label_1042; // 0x421 Jump
}


func_2065()
{
	var_1074_bool = 0; var_1075_string = ""; var_1076_int = 0; // 0x811 PushV
	var_1075_string = "samopal_ammo"; // 0x812 MovS
	var_1076_int = 2; // 0x813 MovI
	func_3373(var_1074_bool, var_1075_string, var_1076_int); // 0x814 NEW_2
	if(var_1074_bool == 0) goto Label_2083; // 0x816 JumpB
	var_1077_string = ""; // 0x817 PushV
	func_2096(var_1077_string); // 0x818 NEW_2
	var_1078_string = "_reload"; // 0x81a PushS
	var_1079_int = var_1077_string + var_1078_string; // 0x81b Add
	PlaySound(var_1079_int); // 0x81c Func
	var_1080_string = "reload"; // 0x81e PushS
	PlayAnimation(var_1080_string); // 0x81f Func
	WaitForAnimEnd(); // 0x821 Func
	
Label_2083:
	return 0; // 0x823 Return
}


func_2581(var_20_string)
{
	var_21_string = "empty"; // 0xa16 PushS
	var_22_bool = var_20_string == var_21_string; // 0xa17 Eq
	if(var_22_bool == 0) goto Label_2591; // 0xa18 JumpB
	var_23_float = 0; // 0xa19 PushV
	var_23_float = 0.25; // 0xa1a MovF
	TaskCall(1); // 0xa1b TaskCall
	func_50(var_24_bool, var_25_bool, var_26_float, var_23_float); // 0xa1c NEW_2
	TaskReturn(); // 0xa1d TaskReturn
	
Label_2591:
	return 0; // 0xa1f Return
}


func_2592(var_18_object)
{
	var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_string = ""; var_26_float = 0; var_27_bool = 0; var_28_bool = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_string = ""; var_33_float = 0; var_34_bool = 0; var_35_bool = 0; // 0xa20 PushV
	var_36_object = GlobalVars[1]; // 0xa21 PushGE
	var_37_object = Obj(); // 0xa22 PushV
	func_3036(var_37_object); // 0xa23 NEW_2
	var_36_object = var_37_object; // 0xa24 Mov
	GlobalVars[1] = var_36_object; // 0xa26 PopGE
	var_40_object = GlobalVars[2]; // 0xa27 PushGE
	var_41_object = Obj(); // 0xa28 PushV
	func_3036(var_41_object); // 0xa29 NEW_2
	var_40_object = var_41_object; // 0xa2a Mov
	GlobalVars[2] = var_40_object; // 0xa2c PopGE
	var_42_object = GlobalVars[3]; // 0xa2d PushGE
	var_43_object = Obj(); // 0xa2e PushV
	func_3036(var_43_object); // 0xa2f NEW_2
	var_42_object = var_43_object; // 0xa30 Mov
	GlobalVars[3] = var_42_object; // 0xa32 PopGE
	var_44_string = "effects"; // 0xa33 PushS
	HasProperty(var_44_string, var_29_bool); // 0xa34 Func
	var_45_bool = var_29_bool == 0; // 0xa36 Not
	if(var_45_bool == 0) goto Label_2661; // 0xa37 JumpB
	var_46_string = "effects"; // 0xa38 PushS
	var_47_bool = 1; // 0xa39 PushB
	SetProperty(var_46_string, var_47_bool); // 0xa3a Func
	var_48_string = "player_disease.bin"; // 0xa3c PushS
	ApplyEffect(var_48_string); // 0xa3d Func
	var_49_string = "player_stat.bin"; // 0xa3f PushS
	ApplyEffect(var_49_string); // 0xa40 Func
	var_50_string = "player_hit.bin"; // 0xa42 PushS
	ApplyEffect(var_50_string); // 0xa43 Func
	var_51_string = "player_head.bin"; // 0xa45 PushS
	ApplyEffect(var_51_string); // 0xa46 Func
	var_52_string = "player_flashlight.bin"; // 0xa48 PushS
	ApplyEffect(var_52_string); // 0xa49 Func
	var_53_string = "player_visir.bin"; // 0xa4b PushS
	ApplyEffect(var_53_string); // 0xa4c Func
	var_54_string = "player_vis.bin"; // 0xa4e PushS
	ApplyEffect(var_54_string); // 0xa4f Func
	var_55_string = "player_eyes_height.bin"; // 0xa51 PushS
	ApplyEffect(var_55_string); // 0xa52 Func
	var_56_string = "player_gifts.bin"; // 0xa54 PushS
	ApplyEffect(var_56_string); // 0xa55 Func
	var_57_object = var_18_object; // 0xa57 Push
	if(var_57_object == 0) goto Label_2661; // 0xa58 JumpB
	size(var_30_int); // 0xa59 ObjFunc
	var_31_int = 0; // 0xa5b MovI
	
Label_2652:
	var_58_bool = var_31_int < var_30_int; // 0xa5c LT
	if(var_58_bool == 0) goto Label_2661; // 0xa5d JumpB
	get(var_32_string, var_31_int); // 0xa5e ObjFunc
	ApplyEffect(var_32_string); // 0xa60 Func
	var_59_int = 1; // 0xa62 PushI
	var_31_int = var_31_int + var_59_int; // 0xa63 Add2
	goto Label_2652; // 0xa64 Jump
	
Label_2661:
	func_2823(); // 0xa66 NEW_2
	var_65_string = "health"; // 0xa68 PushS
	GetProperty(var_65_string, var_33_float); // 0xa69 Func
	var_66_bool = 0; // 0xa6b PushV
	var_66_bool = 0; // 0xa6c MovB
	var_67_int = 0; // 0xa6d PushI
	var_68_bool = var_33_float <= var_67_int; // 0xa6e LE
	if(var_68_bool == 0) goto Label_2678; // 0xa6f JumpB
	var_69_bool = 0; // 0xa70 PushV
	func_3147(var_69_bool); // 0xa71 NEW_2
	var_73_bool = var_69_bool == 0; // 0xa73 Not
	if(var_73_bool == 0) goto Label_2678; // 0xa74 JumpB
	var_66_bool = 1; // 0xa75 MovB
	
Label_2678:
	if(var_66_bool == 0) goto Label_2683; // 0xa76 JumpB
	func_3258(); // 0xa78 NEW_2
	return 14; // 0xa7a Return
	
Label_2683:
	IsWeaponHolstered(var_34_bool); // 0xa7b Func
	var_80_bool = var_34_bool == 0; // 0xa7d Not
	if(var_80_bool == 0) goto Label_2697; // 0xa7e JumpB
	IsWalking(var_35_bool); // 0xa7f Func
	var_81_bool = var_35_bool; // 0xa81 Push
	if(var_81_bool == 0) goto Label_2697; // 0xa82 JumpB
	var_82_string = "walk"; // 0xa83 PushS
	PlayAnimation(var_82_string); // 0xa84 Func
	WaitForAnimEnd(); // 0xa86 Func
	goto Label_2700; // 0xa88 Jump
	
Label_2700:
	goto Label_2683; // 0xa8c Jump
	
Label_2697:
	var_83_float = 0.1; // 0xa89 PushF
	Sleep(var_83_float); // 0xa8a Func
}


func_3119(var_86_float)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0xc2f PushV
	CreateFloatVector(var_88_object); // 0xc30 Func
	add(var_86_float); // 0xc32 ObjFunc
	var_89_int = 15; // 0xc34 PushI
	SendWorldWndMessage(var_89_int, var_88_object); // 0xc35 Func
	return 2; // 0xc37 Return
}


func_2096(var_983_string)
{
	var_983_string = "samopal"; // 0x830 MovS
	return 0; // 0x831 Return
}


func_2098(var_1008_float)
{
	var_1008_float = 1.8; // 0x832 MovF
	return 0; // 0x833 Return
}


func_50(var_0_bool, var_1_bool, var_2_float, var_23_float)
{
	var_0_bool = 0; // 0x33 TMovB
	var_1_bool = 0; // 0x34 TMovB
	var_2_float = var_23_float; // 0x35 TMov
	
Label_54:
	var_27_string = "block"; // 0x36 PushS
	PlayAnimation(var_27_string); // 0x37 Func
	WaitForAnimEnd(); // 0x39 Func
	var_28_bool = var_0_bool; // 0x3b PushT
	if(var_28_bool == 0) goto Label_62; // 0x3c JumpB
	return 0; // 0x3d Return
	
Label_62:
	func_102(var_23_float); // 0x3f NEW_2
	var_1_bool = 1; // 0x41 TMovB
	
Label_66:
	var_36_bool = 0; // 0x42 PushV
	var_36_bool = 0; // 0x43 MovB
	var_37_bool = 0; // 0x44 PushV
	func_122(var_37_bool); // 0x45 NEW_2
	if(var_37_bool == 0) goto Label_75; // 0x47 JumpB
	var_40_bool = var_0_bool == 0; // 0x48 Not
	if(var_40_bool == 0) goto Label_75; // 0x49 JumpB
	var_36_bool = 1; // 0x4a MovB
	
Label_75:
	if(var_36_bool == 0) goto Label_82; // 0x4b JumpB
	var_41_string = "walkblock"; // 0x4c PushS
	PlayAnimation(var_41_string); // 0x4d Func
	WaitForAnimEnd(); // 0x4f Func
	goto Label_66; // 0x51 Jump
	
Label_82:
	var_1_bool = 0; // 0x52 TMovB
	func_112(var_23_float); // 0x54 NEW_2
	var_46_bool = var_0_bool; // 0x56 PushT
	if(var_46_bool == 0) goto Label_89; // 0x57 JumpB
	return 0; // 0x58 Return
	
Label_89:
	var_47_string = "unblock"; // 0x59 PushS
	PlayAnimation(var_47_string); // 0x5a Func
	WaitForAnimEnd(); // 0x5c Func
	var_48_bool = var_0_bool; // 0x5e PushT
	if(var_48_bool == 0) goto Label_97; // 0x5f JumpB
	return 0; // 0x60 Return
	
Label_97:
	var_49_bool = 0; // 0x61 PushV
	func_122(var_49_bool); // 0x62 NEW_2
	if(var_49_bool == 0) goto Label_54; // 0x64 JumpB
	return 0; // 0x65 Return
}


func_2100(var_1030_int)
{
	var_1030_int = 1; // 0x834 MovI
	return 0; // 0x835 Return
}


func_2102(var_1032_int)
{
	var_1032_int = 2; // 0x836 MovI
	return 0; // 0x837 Return
}


func_2104(var_1005_int)
{
	var_1005_int = 2; // 0x838 MovI
	return 0; // 0x839 Return
}


func_3129(var_36_float)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0xc39 PushV
	CreateFloatVector(var_38_object); // 0xc3a Func
	add(var_36_float); // 0xc3c ObjFunc
	var_39_int = 16; // 0xc3e PushI
	SendWorldWndMessage(var_39_int, var_38_object); // 0xc3f Func
	return 2; // 0xc41 Return
}


func_2106(var_0_bool)
{
	var_922_string = ""; var_923_string = ""; var_924_int = 0; var_925_bool = 0; var_926_float = 0; var_927_float = 0; var_928_cvector = CVector(0,0,0); var_929_object = Obj(); var_930_int = 0; var_931_cvector = CVector(0,0,0); var_932_object = Obj(); var_933_int = 0; var_934_cvector = CVector(0,0,0); var_935_float = 0; var_936_float = 0; var_937_float = 0; var_938_object = Obj(); var_939_float = 0; var_940_object = Obj(); var_941_object = Obj(); var_942_int = 0; var_943_int = 0; var_944_object = Obj(); var_945_bool = 0; var_946_string = ""; var_947_string = ""; var_948_int = 0; var_949_bool = 0; var_950_float = 0; var_951_float = 0; var_952_cvector = CVector(0,0,0); var_953_object = Obj(); var_954_int = 0; var_955_cvector = CVector(0,0,0); var_956_object = Obj(); var_957_int = 0; var_958_cvector = CVector(0,0,0); var_959_float = 0; var_960_float = 0; var_961_float = 0; var_962_object = Obj(); var_963_float = 0; var_964_object = Obj(); var_965_object = Obj(); var_966_int = 0; var_967_int = 0; var_968_object = Obj(); var_969_bool = 0; // 0x83a PushV
	var_0_bool = 0; // 0x83b TMovB
	
Label_2108:
	var_970_bool = 0; // 0x83c PushV
	func_1997(var_970_bool); // 0x83d NEW_2
	var_987_bool = var_970_bool == 0; // 0x83f Not
	if(var_987_bool == 0) goto Label_2114; // 0x840 JumpB
	goto Label_2329; // 0x841 Jump
	
Label_2329:
	return 48; // 0x919 Return
	
Label_2114:
	GetCurrentWeapon(var_946_string); // 0x842 Func
	var_947_string = "attack1"; // 0x844 MovS
	var_988_bool = 1; // 0x845 PushB
	SetAttackState(var_988_bool); // 0x846 Func
	func_2036(); // 0x849 NEW_2
	var_997_string = "_phase1"; // 0x84b PushS
	var_998_int = var_947_string + var_997_string; // 0x84c Add
	PlayAnimation(var_998_int); // 0x84d Func
	WaitForAnimEnd(); // 0x84f Func
	var_999_bool = var_0_bool; // 0x851 PushT
	if(var_999_bool == 0) goto Label_2132; // 0x852 JumpB
	return 48; // 0x853 Return
	
Label_2132:
	var_1000_string = "shot"; // 0x854 PushS
	TriggerWeapon(var_1000_string); // 0x855 Func
	var_1001_string = ""; // 0x857 PushV
	func_2096(var_1001_string); // 0x858 NEW_2
	var_1002_string = "_shot"; // 0x85a PushS
	var_1003_int = var_1001_string + var_1002_string; // 0x85b Add
	PlaySound(var_1003_int); // 0x85c Func
	var_1004_int = 0; // 0x85e PushV
	var_1005_int = 0; // 0x85f PushV
	func_2104(var_1005_int); // 0x860 NEW_2
	var_1004_int = var_1005_int; // 0x861 Mov
	func_3420(var_1004_int); // 0x863 NEW_2
	func_2330(); // 0x866 NEW_2
	var_1006_bool = 0; // 0x868 PushB
	SetAttackState(var_1006_bool); // 0x869 Func
	var_1007_int = 0; // 0x86b PushV
	func_2032(var_1007_int); // 0x86c NEW_2
	var_948_int = var_1007_int; // 0x86d Mov
	var_949_bool = 0; // 0x86f MovB
	var_1008_float = 0; // 0x870 PushV
	func_2098(var_1008_float); // 0x871 NEW_2
	var_950_float = var_1008_float / var_1008_float; // 0x873 Div2
	var_1009_float = 1.0; // 0x874 PushF
	var_1010_float = 1.5; // 0x875 PushF
	var_1011_float = 1.0; // 0x876 PushF
	var_1012_float = 0; // 0x877 PushV
	func_2034(var_1012_float); // 0x878 NEW_2
	var_1013_float = var_1011_float / var_1012_float; // 0x87a Div
	var_1014_float = 1.5; // 0x87b PushF
	var_1015_int = var_1013_float - var_1014_float; // 0x87c Sub
	var_1016_float = 0; // 0x87d PushV
	func_3409(var_1016_float); // 0x87e NEW_2
	var_1017_float = var_1015_int * var_1016_float; // 0x880 Mult
	var_1018_int = var_1010_float + var_1017_float; // 0x881 Add
	var_951_float = var_1009_float / var_1009_float; // 0x882 Div2
	GetDirection(var_952_cvector); // 0x883 Func
	var_1019_object = Obj(); // 0x885 PushV
	func_3042(var_1019_object); // 0x886 NEW_2
	var_953_object = var_1019_object; // 0x887 Mov
	var_954_int = 0; // 0x889 MovI
	
Label_2186:
	var_1020_bool = var_954_int < var_948_int; // 0x88a LT
	if(var_1020_bool == 0) goto Label_2284; // 0x88b JumpB
	RandVecCone3D(var_955_cvector, var_952_cvector, var_951_float); // 0x88c Func
	var_1021_int = 10000; // 0x88e PushI
	GetVictimMaterialExact(var_956_object, var_957_int, var_958_cvector, var_955_cvector, var_1021_int); // 0x88f Func
	var_1022_object = var_956_object; // 0x891 Push
	if(var_1022_object == 0) goto Label_2280; // 0x892 JumpB
	var_959_float = var_950_float; // 0x893 Mov
	var_1023_int = 4; // 0x894 PushI
	var_1024_bool = var_957_int == var_1023_int; // 0x895 Eq
	if(var_1024_bool == 0) goto Label_2201; // 0x896 JumpB
	var_1025_float = 3.0; // 0x897 PushF
	var_959_float = var_959_float * var_1025_float; // 0x898 Mult2
	
Label_2201:
	var_1026_float = 0; var_1027_object = Obj(); var_1028_float = 0; var_1029_int = 0; // 0x899 PushV
	var_1027_object = var_956_object; // 0x89a Mov
	var_1028_float = var_959_float; // 0x89b Mov
	var_1030_int = 0; // 0x89c PushV
	func_2100(var_1030_int); // 0x89d NEW_2
	var_1029_int = var_1030_int; // 0x89e Mov
	func_2891(var_1026_float, var_1027_object, var_1028_float, var_1029_int); // 0x8a0 NEW_2
	var_960_float = var_1026_float; // 0x8a1 Mov
	var_1031_float = var_960_float; // 0x8a3 Push
	if(var_1031_float == 0) goto Label_2262; // 0x8a4 JumpB
	add(var_956_object); // 0x8a5 ObjFunc
	var_1032_int = 0; // 0x8a7 PushV
	func_2102(var_1032_int); // 0x8a8 NEW_2
	ReportHit(var_956_object, var_1032_int, var_960_float, var_959_float, var_958_cvector, var_955_cvector); // 0x8aa Func
	var_1033_bool = 0; // 0x8ac PushV
	func_2331(var_1033_bool); // 0x8ad NEW_2
	if(var_1033_bool == 0) goto Label_2261; // 0x8af JumpB
	var_1034_string = "health"; // 0x8b0 PushS
	GetProperty(var_1034_string, var_961_float); // 0x8b1 ObjFunc
	var_1035_bool = var_961_float == 0; // 0x8b3 Not
	if(var_1035_bool == 0) goto Label_2261; // 0x8b4 JumpB
	var_1036_int = 10000; // 0x8b5 PushI
	GetVictimMaterialExact(var_962_object, var_957_int, var_958_cvector, var_955_cvector, var_1036_int, var_956_object); // 0x8b6 Func
	var_1037_bool = 0; // 0x8b8 PushV
	var_1037_bool = 0; // 0x8b9 MovB
	var_1038_object = var_962_object; // 0x8ba Push
	if(var_1038_object == 0) goto Label_2239; // 0x8bb JumpB
	var_1039_bool = var_962_object != var_956_object; // 0x8bc Neq
	if(var_1039_bool == 0) goto Label_2239; // 0x8bd JumpB
	var_1037_bool = 1; // 0x8be MovB
	
Label_2239:
	if(var_1037_bool == 0) goto Label_2260; // 0x8bf JumpB
	var_1040_float = 0; var_1041_object = Obj(); var_1042_float = 0; var_1043_int = 0; // 0x8c0 PushV
	var_1041_object = var_962_object; // 0x8c1 Mov
	var_1044_float = 0.75; // 0x8c2 PushF
	var_1042_float = var_959_float * var_1044_float; // 0x8c3 Mult2
	var_1045_int = 0; // 0x8c4 PushV
	func_2100(var_1045_int); // 0x8c5 NEW_2
	var_1043_int = var_1045_int; // 0x8c6 Mov
	func_2891(var_1040_float, var_1041_object, var_1042_float, var_1043_int); // 0x8c8 NEW_2
	var_963_float = var_1040_float; // 0x8c9 Mov
	var_1046_float = var_963_float; // 0x8cb Push
	if(var_1046_float == 0) goto Label_2260; // 0x8cc JumpB
	add(var_962_object); // 0x8cd ObjFunc
	var_1047_int = 0; // 0x8cf PushV
	func_2102(var_1047_int); // 0x8d0 NEW_2
	ReportHit(var_962_object, var_1047_int, var_963_float, var_959_float, var_958_cvector, var_955_cvector); // 0x8d2 Func
	
Label_2260:
	var_962_object = 0; // 0x8d4 SetNull
	
Label_2261:
	goto Label_2280; // 0x8d5 Jump
	
Label_2280:
	var_956_object = 0; // 0x8e8 SetNull
	var_1048_int = 1; // 0x8e9 PushI
	var_954_int = var_954_int + var_1048_int; // 0x8ea Add2
	goto Label_2186; // 0x8eb Jump
	
Label_2262:
	var_1049_int = -1; // 0x8d6 PushI
	var_1050_bool = var_957_int != var_1049_int; // 0x8d7 Neq
	if(var_1050_bool == 0) goto Label_2280; // 0x8d8 JumpB
	var_1051_bool = var_949_bool == 0; // 0x8d9 Not
	if(var_1051_bool == 0) goto Label_2280; // 0x8da JumpB
	GetScene(var_964_object); // 0x8db Func
	var_1052_string = "scripted"; // 0x8dd PushS
	var_1053_cvector = CVector(0.0, 0.0, 1.0); // 0x8de PushVec
	var_1054_string = "richochet.xml"; // 0x8df PushS
	AddActorByType(var_965_object, var_1052_string, var_964_object, var_958_cvector, var_1053_cvector, var_1054_string); // 0x8e0 Func
	var_1055_string = "Material"; // 0x8e2 PushS
	SetScriptProperty(var_1055_string, var_957_int); // 0x8e3 ObjFunc
	var_949_bool = 1; // 0x8e5 MovB
	var_965_object = 0; // 0x8e6 SetNull
	var_964_object = 0; // 0x8e7 SetNull
	
Label_2284:
	size(var_966_int); // 0x8ec ObjFunc
	var_967_int = 0; // 0x8ee MovI
	
Label_2287:
	var_1056_bool = var_967_int < var_966_int; // 0x8ef LT
	if(var_1056_bool == 0) goto Label_2312; // 0x8f0 JumpB
	get(var_968_object, var_967_int); // 0x8f1 ObjFunc
	ReportAttack(var_968_object); // 0x8f3 Func
	var_1057_object = GlobalVars[2]; // 0x8f5 PushGE
	in(var_969_bool, var_968_object); // 0x8f6 ObjFunc
	var_1058_bool = var_969_bool == 0; // 0x8f8 Not
	if(var_1058_bool == 0) goto Label_2305; // 0x8f9 JumpB
	var_1059_object = GlobalVars[3]; // 0x8fa PushGE
	add(var_968_object); // 0x8fb ObjFunc
	var_1060_bool = 0; // 0x8fd PushB
	BroadcastPlayerDamage(var_968_object, var_1060_bool); // 0x8fe Func
	goto Label_2308; // 0x900 Jump
	
Label_2308:
	var_968_object = 0; // 0x904 SetNull
	var_1061_int = 1; // 0x905 PushI
	var_967_int = var_967_int + var_1061_int; // 0x906 Add2
	goto Label_2287; // 0x907 Jump
	
Label_2305:
	var_1062_bool = 1; // 0x901 PushB
	BroadcastPlayerDamage(var_968_object, var_1062_bool); // 0x902 Func
	
Label_2312:
	var_1063_string = "_phase2"; // 0x908 PushS
	var_1064_int = var_947_string + var_1063_string; // 0x909 Add
	PlayAnimation(var_1064_int); // 0x90a Func
	WaitForAnimEnd(); // 0x90c Func
	var_1065_bool = var_0_bool; // 0x90e PushT
	if(var_1065_bool == 0) goto Label_2321; // 0x90f JumpB
	return 48; // 0x910 Return
	
Label_2321:
	func_2049(); // 0x912 NEW_2
	var_953_object = 0; // 0x914 SetNull
	var_1081_bool = 0; // 0x915 PushV
	func_2333(var_1081_bool); // 0x916 NEW_2
	if(var_1081_bool == 0) goto Label_2108; // 0x918 JumpB
}


func_1600()
{
	return 0; // 0x640 Return
}


func_1601(var_751_bool)
{
	var_752_bool = 0; var_753_bool = 0; // 0x641 PushV
	IsShooting(var_753_bool); // 0x642 Func
	var_751_bool = var_753_bool; // 0x644 Mov
	return 2; // 0x645 Return
}


func_3139(var_24_string)
{
	var_26_bool = 0; var_27_bool = 0; // 0xc43 PushV
	IsExistingSound(var_27_bool, var_24_string); // 0xc44 Func
	var_28_bool = var_27_bool; // 0xc46 Push
	if(var_28_bool == 0) goto Label_3146; // 0xc47 JumpB
	PlaySound(var_24_string); // 0xc48 Func
	
Label_3146:
	return 2; // 0xc4a Return
}


func_1606()
{
	func_1630(); // 0x647 NEW_2
	var_20_bool = 0; var_21_string = ""; var_22_int = 0; // 0x649 PushV
	var_21_string = "rifle_ammo"; // 0x64a MovS
	var_22_int = 1; // 0x64b MovI
	func_3373(var_20_bool, var_21_string, var_22_int); // 0x64c NEW_2
	if(var_20_bool == 0) goto Label_1627; // 0x64e JumpB
	var_41_string = ""; // 0x64f PushV
	func_1628(var_41_string); // 0x650 NEW_2
	var_42_string = "_reload"; // 0x652 PushS
	var_43_int = var_41_string + var_42_string; // 0x653 Add
	PlaySound(var_43_int); // 0x654 Func
	var_44_string = "reload"; // 0x656 PushS
	PlayAnimation(var_44_string); // 0x657 Func
	WaitForAnimEnd(); // 0x659 Func
	
Label_1627:
	return 0; // 0x65b Return
}


func_3147(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0; // 0xc4b PushV
	var_72_string = "god_mode"; // 0xc4c PushS
	GetVariable(var_72_string, var_71_bool); // 0xc4d Func
	var_69_bool = var_71_bool; // 0xc4f Mov
	return 2; // 0xc50 Return
}


func_3153(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0xc51 PushV
	var_21_object = 0; // 0xc52 SetNull
	var_19_object = var_21_object; // 0xc53 Mov
	return 2; // 0xc54 Return
}


func_3158(var_72_bool)
{
	var_73_int = 0; var_74_int = 0; // 0xc56 PushV
	var_75_string = "kerosene"; // 0xc57 PushS
	GetItemCountOfType(var_74_int, var_75_string); // 0xc58 Func
	var_72_bool = var_74_int; // 0xc5a Mov
	return 2; // 0xc5b Return
}


func_1628(var_41_string)
{
	var_41_string = "rifle"; // 0x65c MovS
	return 0; // 0x65d Return
}


func_3164(var_81_int)
{
	var_82_int = 0; var_83_int = 0; // 0xc5c PushV
	var_84_string = "branch"; // 0xc5d PushS
	GetVariable(var_84_string, var_83_int); // 0xc5e Func
	var_81_int = var_83_int; // 0xc60 Mov
	return 2; // 0xc61 Return
}


func_1630()
{
	return 0; // 0x65e Return
}


func_1631(var_805_bool)
{
	var_806_bool = 0; var_807_bool = 0; var_808_bool = 0; var_809_bool = 0; // 0x65f PushV
	var_810_string = "ammo"; // 0x660 PushS
	GetWeaponProperty(var_808_bool, var_810_string, var_809_bool); // 0x661 Func
	var_811_bool = 0; // 0x663 PushV
	var_811_bool = 1; // 0x664 MovB
	var_812_bool = var_808_bool == 0; // 0x665 Not
	if(var_812_bool == 0) goto Label_1642; // 0x666 JumpB
	var_813_bool = var_809_bool == 0; // 0x667 Not
	if(var_813_bool == 0) goto Label_1642; // 0x668 JumpB
	var_811_bool = 0; // 0x669 MovB
	
Label_1642:
	if(var_811_bool == 0) goto Label_1664; // 0x66a JumpB
	var_814_bool = 0; var_815_string = ""; var_816_int = 0; // 0x66b PushV
	var_815_string = "revolver_ammo"; // 0x66c MovS
	var_816_int = 6; // 0x66d MovI
	func_3373(var_814_bool, var_815_string, var_816_int); // 0x66e NEW_2
	var_817_bool = var_814_bool == 0; // 0x670 Not
	if(var_817_bool == 0) goto Label_1664; // 0x671 JumpB
	var_818_string = ""; // 0x672 PushV
	func_1730(var_818_string); // 0x673 NEW_2
	var_819_string = "_noammo"; // 0x675 PushS
	var_820_int = var_818_string + var_819_string; // 0x676 Add
	PlaySound(var_820_int); // 0x677 Func
	var_821_string = "noammo"; // 0x679 PushS
	PlayAnimation(var_821_string); // 0x67a Func
	WaitForAnimEnd(); // 0x67c Func
	var_805_bool = 0; // 0x67e MovB
	return 4; // 0x67f Return
	
Label_1664:
	var_805_bool = 1; // 0x680 MovB
	return 4; // 0x681 Return
}


func_3170(var_15_bool, var_16_int)
{
	var_17_int = 10; // 0xc63 PushI
	var_18_bool = var_16_int == var_17_int; // 0xc64 Eq
	if(var_18_bool == 0) goto Label_3180; // 0xc65 JumpB
	func_3333(); // 0xc67 NEW_2
	var_15_bool = 1; // 0xc69 MovB
	return 0; // 0xc6a Return
	
Label_3180:
	var_70_int = 11; // 0xc6c PushI
	var_71_bool = var_16_int == var_70_int; // 0xc6d Eq
	if(var_71_bool == 0) goto Label_3189; // 0xc6e JumpB
	func_3341(); // 0xc70 NEW_2
	var_15_bool = 1; // 0xc72 MovB
	return 0; // 0xc73 Return
	
Label_3189:
	var_77_int = 12; // 0xc75 PushI
	var_78_bool = var_16_int == var_77_int; // 0xc76 Eq
	if(var_78_bool == 0) goto Label_3197; // 0xc77 JumpB
	func_3337(); // 0xc79 NEW_2
	var_15_bool = 1; // 0xc7b MovB
	return 0; // 0xc7c Return
	
Label_3197:
	var_15_bool = 0; // 0xc7d MovB
	return 0; // 0xc7e Return
}


func_102(var_2_float)
{
	var_29_string = ""; var_30_float = 0; // 0x66 PushV
	var_29_string = "armor_phys"; // 0x67 MovS
	var_30_float = var_2_float; // 0x68 MovT
	func_2862(var_29_string, var_30_float); // 0x69 NEW_2
	var_34_string = "blocking"; // 0x6b PushS
	var_35_bool = 1; // 0x6c PushB
	SetProperty(var_34_string, var_35_bool); // 0x6d Func
	return 0; // 0x6f Return
}


func_112(var_2_float)
{
	var_42_string = "blocking"; // 0x70 PushS
	var_43_bool = 0; // 0x71 PushB
	SetProperty(var_42_string, var_43_bool); // 0x72 Func
	var_44_string = ""; var_45_float = 0; // 0x74 PushV
	var_44_string = "armor_phys"; // 0x75 MovS
	var_45_float = -var_2_float; // 0x76 Neg2
	func_2862(var_44_string, var_45_float); // 0x77 NEW_2
	return 0; // 0x79 Return
}


func_122(var_37_bool)
{
	var_38_bool = 0; var_39_bool = 0; // 0x7a PushV
	IsAltShooting(var_39_bool); // 0x7b Func
	var_37_bool = var_39_bool; // 0x7d Mov
	return 2; // 0x7e Return
}


func_3199()
{
	var_19_bool = 0; var_20_int = 0; var_21_string = ""; var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_string = ""; var_26_string = ""; var_27_bool = 0; var_28_int = 0; var_29_string = ""; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_string = ""; var_34_string = ""; // 0xc7f PushV
	GetGroundMaterial(var_27_bool, var_28_int); // 0xc80 Func
	var_35_bool = var_27_bool == 0; // 0xc82 Not
	if(var_35_bool == 0) goto Label_3205; // 0xc83 JumpB
	var_28_int = -1; // 0xc84 MovI
	
Label_3205:
	var_36_string = ""; var_37_int = 0; // 0xc85 PushV
	var_37_int = var_28_int; // 0xc86 Mov
	func_2969(var_36_string, var_37_int); // 0xc87 NEW_2
	var_29_string = var_36_string; // 0xc88 Mov
	var_30_int = 0; // 0xc8a MovI
	
Label_3211:
	var_48_string = "step_"; // 0xc8b PushS
	var_49_int = var_48_string + var_29_string; // 0xc8c Add
	var_50_int = 1; // 0xc8d PushI
	var_51_int = var_30_int + var_50_int; // 0xc8e Add
	var_52_int = var_49_int + var_51_int; // 0xc8f Add
	IsExistingSound(var_31_bool, var_52_int); // 0xc90 Func
	var_53_bool = var_31_bool == 0; // 0xc92 Not
	if(var_53_bool == 0) goto Label_3221; // 0xc93 JumpB
	goto Label_3224; // 0xc94 Jump
	
Label_3224:
	var_54_bool = var_30_int == 0; // 0xc98 Not
	if(var_54_bool == 0) goto Label_3230; // 0xc99 JumpB
	var_55_string = GlobalVars[0]; // 0xc9a PushGE
	var_55_string = ""; // 0xc9b MovS
	GlobalVars[0] = var_55_string; // 0xc9c PopGE
	return 16; // 0xc9d Return
	
Label_3230:
	var_56_int = 1; // 0xc9e PushI
	var_57_bool = var_30_int == var_56_int; // 0xc9f Eq
	if(var_57_bool == 0) goto Label_3235; // 0xca0 JumpB
	var_32_int = 0; // 0xca1 MovI
	goto Label_3247; // 0xca2 Jump
	
Label_3247:
	var_58_string = "step_"; // 0xcaf PushS
	var_59_int = var_58_string + var_29_string; // 0xcb0 Add
	var_60_int = 1; // 0xcb1 PushI
	var_61_int = var_32_int + var_60_int; // 0xcb2 Add
	var_34_string = var_59_int + var_61_int; // 0xcb3 Add2
	PlaySound(var_34_string); // 0xcb4 Func
	var_62_string = GlobalVars[0]; // 0xcb6 PushGE
	var_62_string = var_34_string; // 0xcb7 Mov
	GlobalVars[0] = var_62_string; // 0xcb8 PopGE
	return 16; // 0xcb9 Return
	
Label_3235:
	irand(var_32_int, var_30_int); // 0xca3 Func
	var_63_string = "step_"; // 0xca5 PushS
	var_64_int = var_63_string + var_29_string; // 0xca6 Add
	var_65_int = 1; // 0xca7 PushI
	var_66_int = var_32_int + var_65_int; // 0xca8 Add
	var_33_string = var_64_int + var_66_int; // 0xca9 Add2
	var_67_string = GlobalVars[0]; // 0xcaa PushGE
	var_68_bool = var_33_string != var_67_string; // 0xcab Neq
	if(var_68_bool == 0) goto Label_3246; // 0xcac JumpB
	goto Label_3247; // 0xcad Jump
	
Label_3246:
	goto Label_3235; // 0xcae Jump
	
Label_3221:
	var_69_int = 1; // 0xc95 PushI
	var_30_int = var_30_int + var_69_int; // 0xc96 Add2
	goto Label_3211; // 0xc97 Jump
}


func_1666(var_842_int)
{
	var_842_int = 1; // 0x682 MovI
	return 0; // 0x683 Return
}


func_1668(var_847_float)
{
	var_847_float = 0.02618; // 0x684 MovF
	return 0; // 0x685 Return
}


func_1670()
{
	var_824_bool = 0; var_825_int = 0; var_826_bool = 0; var_827_int = 0; // 0x686 PushV
	var_828_string = "ammo"; // 0x687 PushS
	GetWeaponProperty(var_826_bool, var_828_string, var_827_int); // 0x688 Func
	var_829_string = "ammo"; // 0x68a PushS
	var_830_int = 1; // 0x68b PushI
	var_831_int = var_827_int - var_830_int; // 0x68c Sub
	SetWeaponProperty(var_826_bool, var_829_string, var_831_int); // 0x68d Func
	func_3771(); // 0x690 NEW_2
	return 4; // 0x692 Return
}


func_1683()
{
	var_901_bool = 0; var_902_bool = 0; var_903_bool = 0; var_904_bool = 0; // 0x693 PushV
	var_905_string = "ammo"; // 0x694 PushS
	GetWeaponProperty(var_903_bool, var_905_string, var_904_bool); // 0x695 Func
	var_906_bool = 0; // 0x697 PushV
	var_906_bool = 1; // 0x698 MovB
	var_907_bool = var_903_bool == 0; // 0x699 Not
	if(var_907_bool == 0) goto Label_1694; // 0x69a JumpB
	var_908_bool = var_904_bool == 0; // 0x69b Not
	if(var_908_bool == 0) goto Label_1694; // 0x69c JumpB
	var_906_bool = 0; // 0x69d MovB
	
Label_1694:
	if(var_906_bool == 0) goto Label_1698; // 0x69e JumpB
	func_1699(); // 0x6a0 NEW_2
	
Label_1698:
	return 4; // 0x6a2 Return
}


func_1699()
{
	var_909_bool = 0; var_910_string = ""; var_911_int = 0; // 0x6a3 PushV
	var_910_string = "revolver_ammo"; // 0x6a4 MovS
	var_911_int = 6; // 0x6a5 MovI
	func_3373(var_909_bool, var_910_string, var_911_int); // 0x6a6 NEW_2
	if(var_909_bool == 0) goto Label_1717; // 0x6a8 JumpB
	var_912_string = ""; // 0x6a9 PushV
	func_1730(var_912_string); // 0x6aa NEW_2
	var_913_string = "_reload"; // 0x6ac PushS
	var_914_int = var_912_string + var_913_string; // 0x6ad Add
	PlaySound(var_914_int); // 0x6ae Func
	var_915_string = "reload"; // 0x6b0 PushS
	PlayAnimation(var_915_string); // 0x6b1 Func
	WaitForAnimEnd(); // 0x6b3 Func
	
Label_1717:
	return 0; // 0x6b5 Return
}


func_690(var_182_float, var_183_bool)
{
	var_184_float = 0; var_185_bool = 0; // 0x2b3 PushV
	var_185_bool = var_183_bool; // 0x2b4 Mov
	func_454(var_184_float, var_185_bool); // 0x2b5 NEW_2
	var_182_float = var_184_float; // 0x2b6 Mov
	return 0; // 0x2b8 Return
}


func_3762()
{
	var_60_float = 0; var_61_float = 0; // 0xeb2 PushV
	var_62_int = 10; // 0xeb3 PushI
	var_63_int = 30; // 0xeb4 PushI
	rand(var_61_float, var_62_int, var_63_int); // 0xeb5 Func
	var_64_int = 0; // 0xeb7 PushI
	SetTimer(var_64_int, var_61_float); // 0xeb8 Func
	return 2; // 0xeba Return
}


func_181(var_0_bool, var_19_bool)
{
	func_201(var_19_bool); // 0xb6 NEW_2
	var_19_bool = var_0_bool; // 0xb8 MovT
	return 0; // 0xb9 Return
}


func_186(var_120_string)
{
	var_120_string = "punch"; // 0xba MovS
	return 0; // 0xbb Return
}


func_3771()
{
	var_667_object = Obj(); var_668_object = Obj(); // 0xebb PushV
	GetScene(var_668_object); // 0xebc Func
	var_669_string = "player_shot"; // 0xebe PushS
	var_670_object = Obj(); // 0xebf PushV
	func_3001(var_670_object); // 0xec0 NEW_2
	BroadcastMessage(var_669_string, var_670_object, var_668_object); // 0xec2 Func
	return 2; // 0xec4 Return
}


func_188(var_138_float, var_139_bool)
{
	var_140_bool = var_139_bool; // 0xbd Push
	if(var_140_bool == 0) goto Label_193; // 0xbe JumpB
	var_138_float = 0.2; // 0xbf MovF
	goto Label_194; // 0xc0 Jump
	
Label_194:
	return 0; // 0xc2 Return
	
Label_193:
	var_138_float = 0.1; // 0xc1 MovF
}


func_3258()
{
	var_74_object = Obj(); var_75_object = Obj(); var_76_object = Obj(); var_77_object = Obj(); // 0xcba PushV
	GetMainOutdoorScene(var_76_object); // 0xcbb Func
	var_78_string = "player_death"; // 0xcbd PushS
	var_79_string = "play_death_burah.bin"; // 0xcbe PushS
	AddBlankActor(var_77_object, var_76_object, var_78_string, var_79_string); // 0xcbf Func
	SetDeathState(); // 0xcc1 Func
	return 4; // 0xcc3 Return
}


func_1730(var_818_string)
{
	var_818_string = "revolver"; // 0x6c2 MovS
	return 0; // 0x6c3 Return
}


func_195(var_148_int)
{
	var_148_int = 0; // 0xc3 MovI
	return 0; // 0xc4 Return
}


func_1732(var_843_float)
{
	var_843_float = 0.8; // 0x6c4 MovF
	return 0; // 0x6c5 Return
}


func_708()
{
	return 0; // 0x2c4 Return
}


func_1734(var_865_int)
{
	var_865_int = 1; // 0x6c6 MovI
	return 0; // 0x6c7 Return
}


func_3270()
{
	var_17_bool = 0; var_18_bool = 0; // 0xcc6 PushV
	var_19_int = 11; // 0xcc7 PushI
	KillTimer(var_19_int, var_18_bool); // 0xcc8 Func
	var_20_bool = var_18_bool; // 0xcca Push
	if(var_20_bool == 0) goto Label_3279; // 0xccb JumpB
	var_21_int = -3; // 0xccc PushI
	ModNoise(var_21_int); // 0xccd Func
	
Label_3279:
	return 2; // 0xccf Return
}


func_1736(var_867_int)
{
	var_867_int = 2; // 0x6c8 MovI
	return 0; // 0x6c9 Return
}


func_197(var_213_int)
{
	var_213_int = 0; // 0xc5 MovI
	return 0; // 0xc6 Return
}


func_709(var_116_bool)
{
	var_116_bool = 0; // 0x2c5 MovB
	return 0; // 0x2c6 Return
}


func_199(var_62_string)
{
	var_62_string = "b"; // 0xc7 MovS
	return 0; // 0xc8 Return
}


func_711(var_108_string)
{
	var_108_string = ""; // 0x2c7 MovS
	return 0; // 0x2c8 Return
}


func_201(var_0_bool)
{
	var_21_int = 0; var_22_string = ""; var_23_bool = 0; var_24_string = ""; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_float = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_string = ""; var_43_bool = 0; var_44_string = ""; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_object = Obj(); var_48_int = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_string = ""; var_54_int = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_float = 0; var_59_int = 0; var_60_bool = 0; // 0xc9 PushV
	var_0_bool = 0; // 0xca TMovB
	var_41_int = 0; // 0xcb MovI
	
Label_204:
	var_61_int = 1; // 0xcc PushI
	var_41_int = var_41_int + var_61_int; // 0xcd Add2
	var_62_string = ""; // 0xce PushV
	func_199(var_62_string); // 0xcf NEW_2
	var_63_string = "attack"; // 0xd1 PushS
	var_64_int = var_62_string + var_63_string; // 0xd2 Add
	var_65_int = var_64_int + var_41_int; // 0xd3 Add
	var_66_string = "_phase1"; // 0xd4 PushS
	var_42_string = var_65_int + var_66_string; // 0xd5 Add2
	HasAnimation(var_43_bool, var_42_string); // 0xd6 Func
	var_67_bool = var_43_bool == 0; // 0xd8 Not
	if(var_67_bool == 0) goto Label_219; // 0xd9 JumpB
	goto Label_220; // 0xda Jump
	
Label_220:
	var_68_int = -1; // 0xdc PushI
	var_41_int = var_41_int + var_68_int; // 0xdd Add2
	var_69_bool = var_41_int == 0; // 0xde Not
	if(var_69_bool == 0) goto Label_225; // 0xdf JumpB
	return 40; // 0xe0 Return
	
Label_225:
	GetCurrentWeapon(var_44_string); // 0xe1 Func
	GetAttackDistance(var_45_float); // 0xe3 Func
	GetDirection(var_46_cvector); // 0xe5 Func
	var_50_bool = 0; // 0xe7 MovB
	var_70_bool = 0; // 0xe8 PushV
	func_445(var_70_bool); // 0xe9 NEW_2
	if(var_70_bool == 0) goto Label_282; // 0xeb JumpB
	GetVictimMaterialExact(var_47_object, var_48_int, var_49_cvector, var_46_cvector, var_45_float); // 0xec Func
	var_71_bool = 0; // 0xee PushV
	var_71_bool = 0; // 0xef MovB
	var_72_bool = 0; // 0xf0 PushV
	var_72_bool = 0; // 0xf1 MovB
	var_73_bool = 0; // 0xf2 PushV
	var_73_bool = 0; // 0xf3 MovB
	var_74_bool = var_47_object != 0; // 0xf4 NullNeq
	if(var_74_bool == 0) goto Label_253; // 0xf5 JumpB
	var_75_bool = 0; var_76_object = Obj(); var_77_string = ""; // 0xf6 PushV
	var_76_object = var_47_object; // 0xf7 Mov
	var_77_string = "health"; // 0xf8 MovS
	func_2850(var_75_bool, var_76_object, var_77_string); // 0xf9 NEW_2
	if(var_75_bool == 0) goto Label_253; // 0xfb JumpB
	var_73_bool = 1; // 0xfc MovB
	
Label_253:
	if(var_73_bool == 0) goto Label_261; // 0xfd JumpB
	var_84_bool = 0; var_85_object = Obj(); // 0xfe PushV
	var_85_object = var_47_object; // 0xff Mov
	func_2964(var_85_object); // 0x100 NEW_2
	var_88_bool = var_84_bool == 0; // 0x102 Not
	if(var_88_bool == 0) goto Label_261; // 0x103 JumpB
	var_72_bool = 1; // 0x104 MovB
	
Label_261:
	if(var_72_bool == 0) goto Label_266; // 0x105 JumpB
	var_89_int = 4; // 0x106 PushI
	var_90_bool = var_48_int == var_89_int; // 0x107 Eq
	if(var_90_bool == 0) goto Label_266; // 0x108 JumpB
	var_71_bool = 1; // 0x109 MovB
	
Label_266:
	if(var_71_bool == 0) goto Label_282; // 0x10a JumpB
	var_91_string = "GetDirection"; // 0x10b PushS
	var_92_int = 1; // 0x10c PushI
	var_93_bool = IsFuncExist(var_47_object, var_91_string, var_92_int); // 0x10d FuncExist
	if(var_93_bool == 0) goto Label_282; // 0x10e JumpB
	GetDirection(var_51_cvector); // 0x10f Func
	GetDirection(var_52_cvector); // 0x111 ObjFunc
	var_94_float = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0x113 PushV
	var_95_cvector = var_51_cvector; // 0x114 Mov
	var_96_cvector = var_52_cvector; // 0x115 Mov
	func_3067(var_94_float, var_95_cvector, var_96_cvector); // 0x116 NEW_2
	var_118_float = 0.5; // 0x118 PushF
	var_50_bool = var_94_float >= var_118_float; // 0x119 GE2
	
Label_282:
	var_119_bool = var_50_bool; // 0x11a Push
	if(var_119_bool == 0) goto Label_293; // 0x11b JumpB
	var_53_string = "battack"; // 0x11c MovS
	var_120_string = ""; // 0x11d PushV
	func_186(var_120_string); // 0x11e NEW_2
	var_121_string = "_back"; // 0x120 PushS
	var_122_int = var_120_string + var_121_string; // 0x121 Add
	PlaySound(var_122_int); // 0x122 Func
	goto Label_311; // 0x124 Jump
	
Label_311:
	var_123_bool = 1; // 0x137 PushB
	SetAttackState(var_123_bool); // 0x138 Func
	var_124_string = "_phase1"; // 0x13a PushS
	var_125_int = var_53_string + var_124_string; // 0x13b Add
	PlayAnimation(var_125_int); // 0x13c Func
	WaitForAnimEnd(); // 0x13e Func
	var_126_bool = var_0_bool; // 0x140 PushT
	if(var_126_bool == 0) goto Label_323; // 0x141 JumpB
	return 40; // 0x142 Return
	
Label_323:
	var_127_bool = 0; // 0x143 PushB
	SetAttackState(var_127_bool); // 0x144 Func
	GetAttackDistance(var_45_float); // 0x146 Func
	GetDirection(var_46_cvector); // 0x148 Func
	GetVictimMaterialExact(var_47_object, var_48_int, var_49_cvector, var_46_cvector, var_45_float); // 0x14a Func
	var_128_bool = var_47_object != 0; // 0x14c NullNeq
	if(var_128_bool == 0) goto Label_411; // 0x14d JumpB
	var_129_string = "GetDirection"; // 0x14e PushS
	var_130_int = 1; // 0x14f PushI
	var_131_bool = IsFuncExist(var_47_object, var_129_string, var_130_int); // 0x150 FuncExist
	if(var_131_bool == 0) goto Label_350; // 0x151 JumpB
	GetDirection(var_55_cvector); // 0x152 Func
	GetDirection(var_56_cvector); // 0x154 ObjFunc
	var_132_float = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); // 0x156 PushV
	var_133_cvector = var_55_cvector; // 0x157 Mov
	var_134_cvector = var_56_cvector; // 0x158 Mov
	func_3067(var_132_float, var_133_cvector, var_134_cvector); // 0x159 NEW_2
	var_135_float = 0.5; // 0x15b PushF
	var_50_bool = var_132_float >= var_135_float; // 0x15c GE2
	goto Label_351; // 0x15d Jump
	
Label_351:
	var_136_float = 0; var_137_bool = 0; // 0x15f PushV
	var_137_bool = var_50_bool; // 0x160 Mov
	func_426(var_136_float, var_137_bool); // 0x161 NEW_2
	var_57_float = var_136_float; // 0x162 Mov
	var_141_int = 4; // 0x164 PushI
	var_142_bool = var_48_int == var_141_int; // 0x165 Eq
	if(var_142_bool == 0) goto Label_361; // 0x166 JumpB
	var_143_float = 3.0; // 0x167 PushF
	var_57_float = var_57_float * var_143_float; // 0x168 Mult2
	
Label_361:
	var_144_float = 0; var_145_object = Obj(); var_146_float = 0; var_147_int = 0; // 0x169 PushV
	var_145_object = var_47_object; // 0x16a Mov
	var_146_float = var_57_float; // 0x16b Mov
	var_148_int = 0; // 0x16c PushV
	func_195(var_148_int); // 0x16d NEW_2
	var_147_int = var_148_int; // 0x16e Mov
	func_2891(var_144_float, var_145_object, var_146_float, var_147_int); // 0x170 NEW_2
	var_58_float = var_144_float; // 0x171 Mov
	var_205_float = var_58_float; // 0x173 Push
	if(var_205_float == 0) goto Label_408; // 0x174 JumpB
	var_206_int = 2; // 0x175 PushI
	irand(var_59_int, var_206_int); // 0x176 Func
	var_207_string = ""; // 0x178 PushV
	func_186(var_207_string); // 0x179 NEW_2
	var_208_string = "_hit"; // 0x17b PushS
	var_209_int = var_207_string + var_208_string; // 0x17c Add
	var_210_int = 1; // 0x17d PushI
	var_211_int = var_59_int + var_210_int; // 0x17e Add
	var_212_int = var_209_int + var_211_int; // 0x17f Add
	PlaySound(var_212_int); // 0x180 Func
	ReportAttack(var_47_object); // 0x182 Func
	var_213_int = 0; // 0x184 PushV
	func_197(var_213_int); // 0x185 NEW_2
	ReportHit(var_47_object, var_213_int, var_58_float, var_57_float, var_49_cvector, var_46_cvector); // 0x187 Func
	var_214_object = GlobalVars[2]; // 0x189 PushGE
	in(var_60_bool, var_47_object); // 0x18a ObjFunc
	var_215_bool = var_60_bool == 0; // 0x18c Not
	if(var_215_bool == 0) goto Label_405; // 0x18d JumpB
	var_216_object = GlobalVars[3]; // 0x18e PushGE
	add(var_47_object); // 0x18f ObjFunc
	var_217_bool = 0; // 0x191 PushB
	BroadcastPlayerDamage(var_47_object, var_217_bool); // 0x192 Func
	goto Label_408; // 0x194 Jump
	
Label_408:
	func_444(); // 0x199 NEW_2
	
Label_411:
	var_218_string = "_phase2"; // 0x19b PushS
	var_219_int = var_53_string + var_218_string; // 0x19c Add
	PlayAnimation(var_219_int); // 0x19d Func
	WaitForAnimEnd(); // 0x19f Func
	var_220_bool = var_0_bool; // 0x1a1 PushT
	if(var_220_bool == 0) goto Label_420; // 0x1a2 JumpB
	return 40; // 0x1a3 Return
	
Label_420:
	var_47_object = 0; // 0x1a4 SetNull
	var_221_bool = 0; // 0x1a5 PushV
	func_447(var_221_bool); // 0x1a6 NEW_2
	if(var_221_bool == 0) goto Label_225; // 0x1a8 JumpB
	return 40; // 0x1a9 Return
	
Label_405:
	var_224_bool = 1; // 0x195 PushB
	BroadcastPlayerDamage(var_47_object, var_224_bool); // 0x196 Func
	
Label_350:
	var_50_bool = 0; // 0x15e MovB
	
Label_293:
	irand(var_54_int, var_41_int); // 0x125 Func
	var_225_string = ""; // 0x127 PushV
	func_199(var_225_string); // 0x128 NEW_2
	var_226_string = "attack"; // 0x12a PushS
	var_227_int = var_225_string + var_226_string; // 0x12b Add
	var_228_int = 1; // 0x12c PushI
	var_229_int = var_54_int + var_228_int; // 0x12d Add
	var_53_string = var_227_int + var_229_int; // 0x12e Add2
	var_230_string = ""; // 0x12f PushV
	func_186(var_230_string); // 0x130 NEW_2
	var_231_int = 1; // 0x132 PushI
	var_232_int = var_54_int + var_231_int; // 0x133 Add
	var_233_int = var_230_string + var_232_int; // 0x134 Add
	PlaySound(var_233_int); // 0x135 Func
	
Label_219:
	goto Label_204; // 0xdb Jump
}


func_713(var_267_bool)
{
	var_268_bool = 0; var_269_bool = 0; // 0x2c9 PushV
	IsShooting(var_269_bool); // 0x2ca Func
	var_267_bool = var_269_bool; // 0x2cc Mov
	return 2; // 0x2cd Return
}


func_1738(var_840_int)
{
	var_840_int = 2; // 0x6ca MovI
	return 0; // 0x6cb Return
}


func_718(var_353_string)
{
	var_353_string = "scalpel"; // 0x2ce MovS
	return 0; // 0x2cf Return
}


func_720(var_371_float)
{
	var_371_float = 0.6; // 0x2d1 MovF
	return 0; // 0x2d2 Return
}


func_1740(var_0_bool)
{
	var_757_string = ""; var_758_string = ""; var_759_int = 0; var_760_bool = 0; var_761_float = 0; var_762_float = 0; var_763_cvector = CVector(0,0,0); var_764_object = Obj(); var_765_int = 0; var_766_cvector = CVector(0,0,0); var_767_object = Obj(); var_768_int = 0; var_769_cvector = CVector(0,0,0); var_770_float = 0; var_771_float = 0; var_772_float = 0; var_773_object = Obj(); var_774_float = 0; var_775_object = Obj(); var_776_object = Obj(); var_777_int = 0; var_778_int = 0; var_779_object = Obj(); var_780_bool = 0; var_781_string = ""; var_782_string = ""; var_783_int = 0; var_784_bool = 0; var_785_float = 0; var_786_float = 0; var_787_cvector = CVector(0,0,0); var_788_object = Obj(); var_789_int = 0; var_790_cvector = CVector(0,0,0); var_791_object = Obj(); var_792_int = 0; var_793_cvector = CVector(0,0,0); var_794_float = 0; var_795_float = 0; var_796_float = 0; var_797_object = Obj(); var_798_float = 0; var_799_object = Obj(); var_800_object = Obj(); var_801_int = 0; var_802_int = 0; var_803_object = Obj(); var_804_bool = 0; // 0x6cc PushV
	var_0_bool = 0; // 0x6cd TMovB
	
Label_1742:
	var_805_bool = 0; // 0x6ce PushV
	func_1631(var_805_bool); // 0x6cf NEW_2
	var_822_bool = var_805_bool == 0; // 0x6d1 Not
	if(var_822_bool == 0) goto Label_1748; // 0x6d2 JumpB
	goto Label_1963; // 0x6d3 Jump
	
Label_1963:
	return 48; // 0x7ab Return
	
Label_1748:
	GetCurrentWeapon(var_781_string); // 0x6d4 Func
	var_782_string = "attack1"; // 0x6d6 MovS
	var_823_bool = 1; // 0x6d7 PushB
	SetAttackState(var_823_bool); // 0x6d8 Func
	func_1670(); // 0x6db NEW_2
	var_832_string = "_phase1"; // 0x6dd PushS
	var_833_int = var_782_string + var_832_string; // 0x6de Add
	PlayAnimation(var_833_int); // 0x6df Func
	WaitForAnimEnd(); // 0x6e1 Func
	var_834_bool = var_0_bool; // 0x6e3 PushT
	if(var_834_bool == 0) goto Label_1766; // 0x6e4 JumpB
	return 48; // 0x6e5 Return
	
Label_1766:
	var_835_string = "shot"; // 0x6e6 PushS
	TriggerWeapon(var_835_string); // 0x6e7 Func
	var_836_string = ""; // 0x6e9 PushV
	func_1730(var_836_string); // 0x6ea NEW_2
	var_837_string = "_shot"; // 0x6ec PushS
	var_838_int = var_836_string + var_837_string; // 0x6ed Add
	PlaySound(var_838_int); // 0x6ee Func
	var_839_int = 0; // 0x6f0 PushV
	var_840_int = 0; // 0x6f1 PushV
	func_1738(var_840_int); // 0x6f2 NEW_2
	var_839_int = var_840_int; // 0x6f3 Mov
	func_3420(var_839_int); // 0x6f5 NEW_2
	func_1964(); // 0x6f8 NEW_2
	var_841_bool = 0; // 0x6fa PushB
	SetAttackState(var_841_bool); // 0x6fb Func
	var_842_int = 0; // 0x6fd PushV
	func_1666(var_842_int); // 0x6fe NEW_2
	var_783_int = var_842_int; // 0x6ff Mov
	var_784_bool = 0; // 0x701 MovB
	var_843_float = 0; // 0x702 PushV
	func_1732(var_843_float); // 0x703 NEW_2
	var_785_float = var_843_float / var_843_float; // 0x705 Div2
	var_844_float = 1.0; // 0x706 PushF
	var_845_float = 1.5; // 0x707 PushF
	var_846_float = 1.0; // 0x708 PushF
	var_847_float = 0; // 0x709 PushV
	func_1668(var_847_float); // 0x70a NEW_2
	var_848_float = var_846_float / var_847_float; // 0x70c Div
	var_849_float = 1.5; // 0x70d PushF
	var_850_int = var_848_float - var_849_float; // 0x70e Sub
	var_851_float = 0; // 0x70f PushV
	func_3409(var_851_float); // 0x710 NEW_2
	var_852_float = var_850_int * var_851_float; // 0x712 Mult
	var_853_int = var_845_float + var_852_float; // 0x713 Add
	var_786_float = var_844_float / var_844_float; // 0x714 Div2
	GetDirection(var_787_cvector); // 0x715 Func
	var_854_object = Obj(); // 0x717 PushV
	func_3042(var_854_object); // 0x718 NEW_2
	var_788_object = var_854_object; // 0x719 Mov
	var_789_int = 0; // 0x71b MovI
	
Label_1820:
	var_855_bool = var_789_int < var_783_int; // 0x71c LT
	if(var_855_bool == 0) goto Label_1918; // 0x71d JumpB
	RandVecCone3D(var_790_cvector, var_787_cvector, var_786_float); // 0x71e Func
	var_856_int = 10000; // 0x720 PushI
	GetVictimMaterialExact(var_791_object, var_792_int, var_793_cvector, var_790_cvector, var_856_int); // 0x721 Func
	var_857_object = var_791_object; // 0x723 Push
	if(var_857_object == 0) goto Label_1914; // 0x724 JumpB
	var_794_float = var_785_float; // 0x725 Mov
	var_858_int = 4; // 0x726 PushI
	var_859_bool = var_792_int == var_858_int; // 0x727 Eq
	if(var_859_bool == 0) goto Label_1835; // 0x728 JumpB
	var_860_float = 3.0; // 0x729 PushF
	var_794_float = var_794_float * var_860_float; // 0x72a Mult2
	
Label_1835:
	var_861_float = 0; var_862_object = Obj(); var_863_float = 0; var_864_int = 0; // 0x72b PushV
	var_862_object = var_791_object; // 0x72c Mov
	var_863_float = var_794_float; // 0x72d Mov
	var_865_int = 0; // 0x72e PushV
	func_1734(var_865_int); // 0x72f NEW_2
	var_864_int = var_865_int; // 0x730 Mov
	func_2891(var_861_float, var_862_object, var_863_float, var_864_int); // 0x732 NEW_2
	var_795_float = var_861_float; // 0x733 Mov
	var_866_float = var_795_float; // 0x735 Push
	if(var_866_float == 0) goto Label_1896; // 0x736 JumpB
	add(var_791_object); // 0x737 ObjFunc
	var_867_int = 0; // 0x739 PushV
	func_1736(var_867_int); // 0x73a NEW_2
	ReportHit(var_791_object, var_867_int, var_795_float, var_794_float, var_793_cvector, var_790_cvector); // 0x73c Func
	var_868_bool = 0; // 0x73e PushV
	func_1965(var_868_bool); // 0x73f NEW_2
	if(var_868_bool == 0) goto Label_1895; // 0x741 JumpB
	var_869_string = "health"; // 0x742 PushS
	GetProperty(var_869_string, var_796_float); // 0x743 ObjFunc
	var_870_bool = var_796_float == 0; // 0x745 Not
	if(var_870_bool == 0) goto Label_1895; // 0x746 JumpB
	var_871_int = 10000; // 0x747 PushI
	GetVictimMaterialExact(var_797_object, var_792_int, var_793_cvector, var_790_cvector, var_871_int, var_791_object); // 0x748 Func
	var_872_bool = 0; // 0x74a PushV
	var_872_bool = 0; // 0x74b MovB
	var_873_object = var_797_object; // 0x74c Push
	if(var_873_object == 0) goto Label_1873; // 0x74d JumpB
	var_874_bool = var_797_object != var_791_object; // 0x74e Neq
	if(var_874_bool == 0) goto Label_1873; // 0x74f JumpB
	var_872_bool = 1; // 0x750 MovB
	
Label_1873:
	if(var_872_bool == 0) goto Label_1894; // 0x751 JumpB
	var_875_float = 0; var_876_object = Obj(); var_877_float = 0; var_878_int = 0; // 0x752 PushV
	var_876_object = var_797_object; // 0x753 Mov
	var_879_float = 0.75; // 0x754 PushF
	var_877_float = var_794_float * var_879_float; // 0x755 Mult2
	var_880_int = 0; // 0x756 PushV
	func_1734(var_880_int); // 0x757 NEW_2
	var_878_int = var_880_int; // 0x758 Mov
	func_2891(var_875_float, var_876_object, var_877_float, var_878_int); // 0x75a NEW_2
	var_798_float = var_875_float; // 0x75b Mov
	var_881_float = var_798_float; // 0x75d Push
	if(var_881_float == 0) goto Label_1894; // 0x75e JumpB
	add(var_797_object); // 0x75f ObjFunc
	var_882_int = 0; // 0x761 PushV
	func_1736(var_882_int); // 0x762 NEW_2
	ReportHit(var_797_object, var_882_int, var_798_float, var_794_float, var_793_cvector, var_790_cvector); // 0x764 Func
	
Label_1894:
	var_797_object = 0; // 0x766 SetNull
	
Label_1895:
	goto Label_1914; // 0x767 Jump
	
Label_1914:
	var_791_object = 0; // 0x77a SetNull
	var_883_int = 1; // 0x77b PushI
	var_789_int = var_789_int + var_883_int; // 0x77c Add2
	goto Label_1820; // 0x77d Jump
	
Label_1896:
	var_884_int = -1; // 0x768 PushI
	var_885_bool = var_792_int != var_884_int; // 0x769 Neq
	if(var_885_bool == 0) goto Label_1914; // 0x76a JumpB
	var_886_bool = var_784_bool == 0; // 0x76b Not
	if(var_886_bool == 0) goto Label_1914; // 0x76c JumpB
	GetScene(var_799_object); // 0x76d Func
	var_887_string = "scripted"; // 0x76f PushS
	var_888_cvector = CVector(0.0, 0.0, 1.0); // 0x770 PushVec
	var_889_string = "richochet.xml"; // 0x771 PushS
	AddActorByType(var_800_object, var_887_string, var_799_object, var_793_cvector, var_888_cvector, var_889_string); // 0x772 Func
	var_890_string = "Material"; // 0x774 PushS
	SetScriptProperty(var_890_string, var_792_int); // 0x775 ObjFunc
	var_784_bool = 1; // 0x777 MovB
	var_800_object = 0; // 0x778 SetNull
	var_799_object = 0; // 0x779 SetNull
	
Label_1918:
	size(var_801_int); // 0x77e ObjFunc
	var_802_int = 0; // 0x780 MovI
	
Label_1921:
	var_891_bool = var_802_int < var_801_int; // 0x781 LT
	if(var_891_bool == 0) goto Label_1946; // 0x782 JumpB
	get(var_803_object, var_802_int); // 0x783 ObjFunc
	ReportAttack(var_803_object); // 0x785 Func
	var_892_object = GlobalVars[2]; // 0x787 PushGE
	in(var_804_bool, var_803_object); // 0x788 ObjFunc
	var_893_bool = var_804_bool == 0; // 0x78a Not
	if(var_893_bool == 0) goto Label_1939; // 0x78b JumpB
	var_894_object = GlobalVars[3]; // 0x78c PushGE
	add(var_803_object); // 0x78d ObjFunc
	var_895_bool = 0; // 0x78f PushB
	BroadcastPlayerDamage(var_803_object, var_895_bool); // 0x790 Func
	goto Label_1942; // 0x792 Jump
	
Label_1942:
	var_803_object = 0; // 0x796 SetNull
	var_896_int = 1; // 0x797 PushI
	var_802_int = var_802_int + var_896_int; // 0x798 Add2
	goto Label_1921; // 0x799 Jump
	
Label_1939:
	var_897_bool = 1; // 0x793 PushB
	BroadcastPlayerDamage(var_803_object, var_897_bool); // 0x794 Func
	
Label_1946:
	var_898_string = "_phase2"; // 0x79a PushS
	var_899_int = var_782_string + var_898_string; // 0x79b Add
	PlayAnimation(var_899_int); // 0x79c Func
	WaitForAnimEnd(); // 0x79e Func
	var_900_bool = var_0_bool; // 0x7a0 PushT
	if(var_900_bool == 0) goto Label_1955; // 0x7a1 JumpB
	return 48; // 0x7a2 Return
	
Label_1955:
	func_1683(); // 0x7a4 NEW_2
	var_788_object = 0; // 0x7a6 SetNull
	var_916_bool = 0; // 0x7a7 PushV
	func_1967(var_916_bool); // 0x7a8 NEW_2
	if(var_916_bool == 0) goto Label_1742; // 0x7aa JumpB
}


func_3280()
{
	func_3270(); // 0xcd1 NEW_2
	var_22_int = 11; // 0xcd3 PushI
	var_23_float = 0.15; // 0xcd4 PushF
	SetTimer(var_22_int, var_23_float); // 0xcd5 Func
	var_24_int = 3; // 0xcd7 PushI
	ModNoise(var_24_int); // 0xcd8 Func
	return 0; // 0xcda Return
}


func_723(var_375_float)
{
	var_375_float = 0.5; // 0x2d3 MovF
	return 0; // 0x2d4 Return
}


func_725(var_409_int)
{
	var_409_int = 2; // 0x2d5 MovI
	return 0; // 0x2d6 Return
}


func_727(var_394_int)
{
	var_394_int = 0; // 0x2d7 MovI
	return 0; // 0x2d8 Return
}


func_729(var_403_int)
{
	var_403_int = 1; // 0x2d9 MovI
	return 0; // 0x2da Return
}


func_731(var_369_float, var_370_bool)
{
	var_371_float = 0; var_372_bool = 0; // 0x2dc PushV
	var_372_bool = var_370_bool; // 0x2dd Mov
	func_720(var_372_bool); // 0x2de NEW_2
	var_373_float = 0; var_374_float = 0; // 0x2e0 PushV
	var_375_float = 0; // 0x2e1 PushV
	func_723(var_375_float); // 0x2e2 NEW_2
	var_374_float = var_375_float; // 0x2e3 Mov
	func_3438(var_373_float, var_374_float); // 0x2e5 NEW_2
	var_369_float = var_371_float * var_373_float; // 0x2e7 Mult2
	return 0; // 0x2e8 Return
}


func_3291()
{
	var_12_bool = 0; var_13_bool = 0; // 0xcdb PushV
	var_14_int = 10; // 0xcdc PushI
	KillTimer(var_14_int, var_13_bool); // 0xcdd Func
	var_15_bool = var_13_bool; // 0xcdf Push
	if(var_15_bool == 0) goto Label_3300; // 0xce0 JumpB
	var_16_int = -2; // 0xce1 PushI
	ModNoise(var_16_int); // 0xce2 Func
	
Label_3300:
	return 2; // 0xce4 Return
}


func_3301()
{
	var_12_bool = 0; var_13_bool = 0; // 0xce5 PushV
	var_14_int = 12; // 0xce6 PushI
	KillTimer(var_14_int, var_13_bool); // 0xce7 Func
	var_15_bool = var_13_bool; // 0xce9 Push
	if(var_15_bool == 0) goto Label_3310; // 0xcea JumpB
	var_16_int = -1; // 0xceb PushI
	ModNoise(var_16_int); // 0xcec Func
	
Label_3310:
	return 2; // 0xcee Return
}


func_745()
{
	var_408_int = 0; // 0x2e9 PushV
	var_409_int = 0; // 0x2ea PushV
	func_725(var_409_int); // 0x2eb NEW_2
	var_408_int = var_409_int; // 0x2ec Mov
	func_3420(var_408_int); // 0x2ee NEW_2
	return 0; // 0x2f0 Return
}


func_3311()
{
	func_3291(); // 0xcf0 NEW_2
	var_17_int = 10; // 0xcf2 PushI
	var_18_float = 0.35; // 0xcf3 PushF
	SetTimer(var_17_int, var_18_float); // 0xcf4 Func
	var_19_int = 2; // 0xcf6 PushI
	ModNoise(var_19_int); // 0xcf7 Func
	return 0; // 0xcf9 Return
}


func_753(var_0_bool)
{
	var_283_int = 0; var_284_string = ""; var_285_bool = 0; var_286_string = ""; var_287_float = 0; var_288_cvector = CVector(0,0,0); var_289_object = Obj(); var_290_int = 0; var_291_cvector = CVector(0,0,0); var_292_bool = 0; var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_string = ""; var_296_int = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_float = 0; var_300_float = 0; var_301_int = 0; var_302_bool = 0; var_303_int = 0; var_304_string = ""; var_305_bool = 0; var_306_string = ""; var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_object = Obj(); var_310_int = 0; var_311_cvector = CVector(0,0,0); var_312_bool = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_string = ""; var_316_int = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0; var_321_int = 0; var_322_bool = 0; // 0x2f1 PushV
	var_0_bool = 0; // 0x2f2 TMovB
	var_303_int = 0; // 0x2f3 MovI
	
Label_756:
	var_323_int = 1; // 0x2f4 PushI
	var_303_int = var_303_int + var_323_int; // 0x2f5 Add2
	var_324_string = ""; // 0x2f6 PushV
	func_991(var_324_string); // 0x2f7 NEW_2
	var_325_string = "attack"; // 0x2f9 PushS
	var_326_int = var_324_string + var_325_string; // 0x2fa Add
	var_327_int = var_326_int + var_303_int; // 0x2fb Add
	var_328_string = "_phase1"; // 0x2fc PushS
	var_304_string = var_327_int + var_328_string; // 0x2fd Add2
	HasAnimation(var_305_bool, var_304_string); // 0x2fe Func
	var_329_bool = var_305_bool == 0; // 0x300 Not
	if(var_329_bool == 0) goto Label_771; // 0x301 JumpB
	goto Label_772; // 0x302 Jump
	
Label_772:
	var_330_int = -1; // 0x304 PushI
	var_303_int = var_303_int + var_330_int; // 0x305 Add2
	var_331_bool = var_303_int == 0; // 0x306 Not
	if(var_331_bool == 0) goto Label_777; // 0x307 JumpB
	return 40; // 0x308 Return
	
Label_777:
	GetCurrentWeapon(var_306_string); // 0x309 Func
	GetAttackDistance(var_307_float); // 0x30b Func
	GetDirection(var_308_cvector); // 0x30d Func
	var_312_bool = 0; // 0x30f MovB
	var_332_bool = 0; // 0x310 PushV
	func_989(var_332_bool); // 0x311 NEW_2
	if(var_332_bool == 0) goto Label_834; // 0x313 JumpB
	GetVictimMaterialExact(var_309_object, var_310_int, var_311_cvector, var_308_cvector, var_307_float); // 0x314 Func
	var_333_bool = 0; // 0x316 PushV
	var_333_bool = 0; // 0x317 MovB
	var_334_bool = 0; // 0x318 PushV
	var_334_bool = 0; // 0x319 MovB
	var_335_bool = 0; // 0x31a PushV
	var_335_bool = 0; // 0x31b MovB
	var_336_bool = var_309_object != 0; // 0x31c NullNeq
	if(var_336_bool == 0) goto Label_805; // 0x31d JumpB
	var_337_bool = 0; var_338_object = Obj(); var_339_string = ""; // 0x31e PushV
	var_338_object = var_309_object; // 0x31f Mov
	var_339_string = "health"; // 0x320 MovS
	func_2850(var_337_bool, var_338_object, var_339_string); // 0x321 NEW_2
	if(var_337_bool == 0) goto Label_805; // 0x323 JumpB
	var_335_bool = 1; // 0x324 MovB
	
Label_805:
	if(var_335_bool == 0) goto Label_813; // 0x325 JumpB
	var_340_bool = 0; var_341_object = Obj(); // 0x326 PushV
	var_341_object = var_309_object; // 0x327 Mov
	func_2964(var_341_object); // 0x328 NEW_2
	var_342_bool = var_340_bool == 0; // 0x32a Not
	if(var_342_bool == 0) goto Label_813; // 0x32b JumpB
	var_334_bool = 1; // 0x32c MovB
	
Label_813:
	if(var_334_bool == 0) goto Label_818; // 0x32d JumpB
	var_343_int = 4; // 0x32e PushI
	var_344_bool = var_310_int == var_343_int; // 0x32f Eq
	if(var_344_bool == 0) goto Label_818; // 0x330 JumpB
	var_333_bool = 1; // 0x331 MovB
	
Label_818:
	if(var_333_bool == 0) goto Label_834; // 0x332 JumpB
	var_345_string = "GetDirection"; // 0x333 PushS
	var_346_int = 1; // 0x334 PushI
	var_347_bool = IsFuncExist(var_309_object, var_345_string, var_346_int); // 0x335 FuncExist
	if(var_347_bool == 0) goto Label_834; // 0x336 JumpB
	GetDirection(var_313_cvector); // 0x337 Func
	GetDirection(var_314_cvector); // 0x339 ObjFunc
	var_348_float = 0; var_349_cvector = CVector(0,0,0); var_350_cvector = CVector(0,0,0); // 0x33b PushV
	var_349_cvector = var_313_cvector; // 0x33c Mov
	var_350_cvector = var_314_cvector; // 0x33d Mov
	func_3067(var_348_float, var_349_cvector, var_350_cvector); // 0x33e NEW_2
	var_351_float = 0.5; // 0x340 PushF
	var_312_bool = var_348_float >= var_351_float; // 0x341 GE2
	
Label_834:
	var_352_bool = var_312_bool; // 0x342 Push
	if(var_352_bool == 0) goto Label_845; // 0x343 JumpB
	var_315_string = "battack"; // 0x344 MovS
	var_353_string = ""; // 0x345 PushV
	func_718(var_353_string); // 0x346 NEW_2
	var_354_string = "_back"; // 0x348 PushS
	var_355_int = var_353_string + var_354_string; // 0x349 Add
	PlaySound(var_355_int); // 0x34a Func
	goto Label_863; // 0x34c Jump
	
Label_863:
	var_356_bool = 1; // 0x35f PushB
	SetAttackState(var_356_bool); // 0x360 Func
	var_357_string = "_phase1"; // 0x362 PushS
	var_358_int = var_315_string + var_357_string; // 0x363 Add
	PlayAnimation(var_358_int); // 0x364 Func
	WaitForAnimEnd(); // 0x366 Func
	var_359_bool = var_0_bool; // 0x368 PushT
	if(var_359_bool == 0) goto Label_875; // 0x369 JumpB
	return 40; // 0x36a Return
	
Label_875:
	var_360_bool = 0; // 0x36b PushB
	SetAttackState(var_360_bool); // 0x36c Func
	GetAttackDistance(var_307_float); // 0x36e Func
	GetDirection(var_308_cvector); // 0x370 Func
	GetVictimMaterialExact(var_309_object, var_310_int, var_311_cvector, var_308_cvector, var_307_float); // 0x372 Func
	var_361_bool = var_309_object != 0; // 0x374 NullNeq
	if(var_361_bool == 0) goto Label_963; // 0x375 JumpB
	var_362_string = "GetDirection"; // 0x376 PushS
	var_363_int = 1; // 0x377 PushI
	var_364_bool = IsFuncExist(var_309_object, var_362_string, var_363_int); // 0x378 FuncExist
	if(var_364_bool == 0) goto Label_902; // 0x379 JumpB
	GetDirection(var_317_cvector); // 0x37a Func
	GetDirection(var_318_cvector); // 0x37c ObjFunc
	var_365_float = 0; var_366_cvector = CVector(0,0,0); var_367_cvector = CVector(0,0,0); // 0x37e PushV
	var_366_cvector = var_317_cvector; // 0x37f Mov
	var_367_cvector = var_318_cvector; // 0x380 Mov
	func_3067(var_365_float, var_366_cvector, var_367_cvector); // 0x381 NEW_2
	var_368_float = 0.5; // 0x383 PushF
	var_312_bool = var_365_float >= var_368_float; // 0x384 GE2
	goto Label_903; // 0x385 Jump
	
Label_903:
	var_369_float = 0; var_370_bool = 0; // 0x387 PushV
	var_370_bool = var_312_bool; // 0x388 Mov
	func_731(var_369_float, var_370_bool); // 0x389 NEW_2
	var_319_float = var_369_float; // 0x38a Mov
	var_387_int = 4; // 0x38c PushI
	var_388_bool = var_310_int == var_387_int; // 0x38d Eq
	if(var_388_bool == 0) goto Label_913; // 0x38e JumpB
	var_389_float = 3.0; // 0x38f PushF
	var_319_float = var_319_float * var_389_float; // 0x390 Mult2
	
Label_913:
	var_390_float = 0; var_391_object = Obj(); var_392_float = 0; var_393_int = 0; // 0x391 PushV
	var_391_object = var_309_object; // 0x392 Mov
	var_392_float = var_319_float; // 0x393 Mov
	var_394_int = 0; // 0x394 PushV
	func_727(var_394_int); // 0x395 NEW_2
	var_393_int = var_394_int; // 0x396 Mov
	func_2891(var_390_float, var_391_object, var_392_float, var_393_int); // 0x398 NEW_2
	var_320_float = var_390_float; // 0x399 Mov
	var_395_float = var_320_float; // 0x39b Push
	if(var_395_float == 0) goto Label_960; // 0x39c JumpB
	var_396_int = 2; // 0x39d PushI
	irand(var_321_int, var_396_int); // 0x39e Func
	var_397_string = ""; // 0x3a0 PushV
	func_718(var_397_string); // 0x3a1 NEW_2
	var_398_string = "_hit"; // 0x3a3 PushS
	var_399_int = var_397_string + var_398_string; // 0x3a4 Add
	var_400_int = 1; // 0x3a5 PushI
	var_401_int = var_321_int + var_400_int; // 0x3a6 Add
	var_402_int = var_399_int + var_401_int; // 0x3a7 Add
	PlaySound(var_402_int); // 0x3a8 Func
	ReportAttack(var_309_object); // 0x3aa Func
	var_403_int = 0; // 0x3ac PushV
	func_729(var_403_int); // 0x3ad NEW_2
	ReportHit(var_309_object, var_403_int, var_320_float, var_319_float, var_311_cvector, var_308_cvector); // 0x3af Func
	var_404_object = GlobalVars[2]; // 0x3b1 PushGE
	in(var_322_bool, var_309_object); // 0x3b2 ObjFunc
	var_405_bool = var_322_bool == 0; // 0x3b4 Not
	if(var_405_bool == 0) goto Label_957; // 0x3b5 JumpB
	var_406_object = GlobalVars[3]; // 0x3b6 PushGE
	add(var_309_object); // 0x3b7 ObjFunc
	var_407_bool = 0; // 0x3b9 PushB
	BroadcastPlayerDamage(var_309_object, var_407_bool); // 0x3ba Func
	goto Label_960; // 0x3bc Jump
	
Label_960:
	func_745(); // 0x3c1 NEW_2
	
Label_963:
	var_423_string = "_phase2"; // 0x3c3 PushS
	var_424_int = var_315_string + var_423_string; // 0x3c4 Add
	PlayAnimation(var_424_int); // 0x3c5 Func
	WaitForAnimEnd(); // 0x3c7 Func
	var_425_bool = var_0_bool; // 0x3c9 PushT
	if(var_425_bool == 0) goto Label_972; // 0x3ca JumpB
	return 40; // 0x3cb Return
	
Label_972:
	var_309_object = 0; // 0x3cc SetNull
	var_426_bool = 0; // 0x3cd PushV
	func_993(var_426_bool); // 0x3ce NEW_2
	if(var_426_bool == 0) goto Label_777; // 0x3d0 JumpB
	return 40; // 0x3d1 Return
	
Label_957:
	var_429_bool = 1; // 0x3bd PushB
	BroadcastPlayerDamage(var_309_object, var_429_bool); // 0x3be Func
	
Label_902:
	var_312_bool = 0; // 0x386 MovB
	
Label_845:
	irand(var_316_int, var_303_int); // 0x34d Func
	var_430_string = ""; // 0x34f PushV
	func_991(var_430_string); // 0x350 NEW_2
	var_431_string = "attack"; // 0x352 PushS
	var_432_int = var_430_string + var_431_string; // 0x353 Add
	var_433_int = 1; // 0x354 PushI
	var_434_int = var_316_int + var_433_int; // 0x355 Add
	var_315_string = var_432_int + var_434_int; // 0x356 Add2
	var_435_string = ""; // 0x357 PushV
	func_718(var_435_string); // 0x358 NEW_2
	var_436_int = 1; // 0x35a PushI
	var_437_int = var_316_int + var_436_int; // 0x35b Add
	var_438_int = var_435_string + var_437_int; // 0x35c Add
	PlaySound(var_438_int); // 0x35d Func
	
Label_771:
	goto Label_756; // 0x303 Jump
}


func_3322()
{
	func_3301(); // 0xcfb NEW_2
	var_17_int = 12; // 0xcfd PushI
	var_18_float = 0.6; // 0xcfe PushF
	SetTimer(var_17_int, var_18_float); // 0xcff Func
	var_19_int = 1; // 0xd01 PushI
	ModNoise(var_19_int); // 0xd02 Func
	return 0; // 0xd04 Return
}


func_1275(var_483_string)
{
	var_483_string = ""; // 0x4fb MovS
	return 0; // 0x4fc Return
}


func_1277(var_562_bool)
{
	var_563_bool = 0; var_564_bool = 0; // 0x4fd PushV
	IsShooting(var_564_bool); // 0x4fe Func
	var_562_bool = var_564_bool; // 0x500 Mov
	return 2; // 0x501 Return
}


func_1282(var_626_bool)
{
	var_627_bool = 0; var_628_bool = 0; var_629_bool = 0; var_630_bool = 0; // 0x502 PushV
	var_631_string = "ammo"; // 0x503 PushS
	GetWeaponProperty(var_629_bool, var_631_string, var_630_bool); // 0x504 Func
	var_632_bool = 0; // 0x506 PushV
	var_632_bool = 1; // 0x507 MovB
	var_633_bool = var_629_bool == 0; // 0x508 Not
	if(var_633_bool == 0) goto Label_1293; // 0x509 JumpB
	var_634_bool = var_630_bool == 0; // 0x50a Not
	if(var_634_bool == 0) goto Label_1293; // 0x50b JumpB
	var_632_bool = 0; // 0x50c MovB
	
Label_1293:
	if(var_632_bool == 0) goto Label_1315; // 0x50d JumpB
	var_635_bool = 0; var_636_string = ""; var_637_int = 0; // 0x50e PushV
	var_636_string = "rifle_ammo"; // 0x50f MovS
	var_637_int = 1; // 0x510 MovI
	func_3373(var_635_bool, var_636_string, var_637_int); // 0x511 NEW_2
	var_656_bool = var_635_bool == 0; // 0x513 Not
	if(var_656_bool == 0) goto Label_1315; // 0x514 JumpB
	var_657_string = ""; // 0x515 PushV
	func_1355(var_657_string); // 0x516 NEW_2
	var_658_string = "_noammo"; // 0x518 PushS
	var_659_int = var_657_string + var_658_string; // 0x519 Add
	PlaySound(var_659_int); // 0x51a Func
	var_660_string = "noammo"; // 0x51c PushS
	PlayAnimation(var_660_string); // 0x51d Func
	WaitForAnimEnd(); // 0x51f Func
	var_626_bool = 0; // 0x521 MovB
	return 4; // 0x522 Return
	
Label_1315:
	var_626_bool = 1; // 0x523 MovB
	return 4; // 0x524 Return
}


func_3333()
{
	func_3199(); // 0xd06 NEW_2
	return 0; // 0xd08 Return
}


func_2823()
{
	func_3762(); // 0xb08 NEW_2
	return 0; // 0xb0a Return
}


func_3337()
{
	func_3199(); // 0xd0a NEW_2
	return 0; // 0xd0c Return
}


func_2827()
{
	var_87_int = 0; // 0xb0b PushI
	KillTimer(var_87_int); // 0xb0c Func
	return 0; // 0xb0e Return
}


func_3341()
{
	func_3199(); // 0xd0e NEW_2
	func_3270(); // 0xd11 NEW_2
	return 0; // 0xd13 Return
}


func_2831(var_56_string, var_57_int)
{
	var_58_int = 2; // 0xb10 PushI
	var_59_bool = var_57_int == var_58_int; // 0xb11 Eq
	if(var_59_bool == 0) goto Label_2838; // 0xb12 JumpB
	var_56_string = "fire"; // 0xb13 MovS
	return 0; // 0xb14 Return
	
Label_2838:
	var_60_int = 1; // 0xb16 PushI
	var_61_bool = var_57_int == var_60_int; // 0xb17 Eq
	if(var_61_bool == 0) goto Label_2843; // 0xb18 JumpB
	var_56_string = "bullet"; // 0xb19 MovS
	return 0; // 0xb1a Return
	
Label_2843:
	var_56_string = "phys"; // 0xb1b MovS
	return 0; // 0xb1c Return
}


func_2330()
{
	return 0; // 0x91a Return
}


func_2331(var_1033_bool)
{
	var_1033_bool = 0; // 0x91b MovB
	return 0; // 0x91c Return
}


func_2333(var_1081_bool)
{
	var_1082_bool = 0; var_1083_bool = 0; // 0x91d PushV
	IsShooting(var_1083_bool); // 0x91e Func
	var_1081_bool = var_1083_bool; // 0x920 Mov
	return 2; // 0x921 Return
}


func_2845(var_82_bool, var_83_object)
{
	var_84_bool = 0; var_85_bool = 0; // 0xb1d PushV
	IsPlayerActor(var_83_object, var_85_bool); // 0xb1e Func
	var_82_bool = var_85_bool; // 0xb20 Mov
	return 2; // 0xb21 Return
}


func_2850(var_41_bool, var_42_object, var_43_string)
{
	var_44_bool = 0; var_45_bool = 0; // 0xb22 PushV
	var_46_string = "HasProperty"; // 0xb23 PushS
	var_47_int = 2; // 0xb24 PushI
	var_48_bool = IsFuncExist(var_42_object, var_46_string, var_47_int); // 0xb25 FuncExist
	var_49_bool = var_48_bool == 0; // 0xb26 Not
	if(var_49_bool == 0) goto Label_2858; // 0xb27 JumpB
	var_41_bool = 0; // 0xb28 MovB
	return 2; // 0xb29 Return
	
Label_2858:
	HasProperty(var_43_string, var_45_bool); // 0xb2a ObjFunc
	var_41_bool = var_45_bool; // 0xb2c Mov
	return 2; // 0xb2d Return
}


func_2338()
{
	func_2362(); // 0x923 NEW_2
	var_56_bool = 0; var_57_string = ""; var_58_int = 0; // 0x925 PushV
	var_57_string = "samopal_ammo"; // 0x926 MovS
	var_58_int = 2; // 0x927 MovI
	func_3373(var_56_bool, var_57_string, var_58_int); // 0x928 NEW_2
	if(var_56_bool == 0) goto Label_2359; // 0x92a JumpB
	var_59_string = ""; // 0x92b PushV
	func_2360(var_59_string); // 0x92c NEW_2
	var_60_string = "_reload"; // 0x92e PushS
	var_61_int = var_59_string + var_60_string; // 0x92f Add
	PlaySound(var_61_int); // 0x930 Func
	var_62_string = "reload"; // 0x932 PushS
	PlayAnimation(var_62_string); // 0x933 Func
	WaitForAnimEnd(); // 0x935 Func
	
Label_2359:
	return 0; // 0x937 Return
}


func_1317(var_683_int)
{
	var_683_int = 1; // 0x525 MovI
	return 0; // 0x526 Return
}


func_1319(var_688_float)
{
	var_688_float = 0.01745; // 0x527 MovF
	return 0; // 0x528 Return
}


func_1321(var_711_bool)
{
	var_711_bool = 1; // 0x529 MovB
	return 0; // 0x52a Return
}


func_1323()
{
	var_663_bool = 0; var_664_bool = 0; // 0x52b PushV
	var_665_string = "ammo"; // 0x52c PushS
	var_666_bool = 0; // 0x52d PushB
	SetWeaponProperty(var_664_bool, var_665_string, var_666_bool); // 0x52e Func
	func_3771(); // 0x531 NEW_2
	return 2; // 0x533 Return
}


func_3373(var_20_bool, var_21_string, var_22_int)
{
	var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; // 0xd2d PushV
	var_31_string = "ammo"; // 0xd2e PushS
	GetWeaponProperty(var_27_bool, var_31_string, var_28_int); // 0xd2f Func
	var_32_bool = 0; // 0xd31 PushV
	var_32_bool = 0; // 0xd32 MovB
	var_33_bool = var_27_bool; // 0xd33 Push
	if(var_33_bool == 0) goto Label_3384; // 0xd34 JumpB
	var_34_bool = var_28_int >= var_22_int; // 0xd35 GE
	if(var_34_bool == 0) goto Label_3384; // 0xd36 JumpB
	var_32_bool = 1; // 0xd37 MovB
	
Label_3384:
	if(var_32_bool == 0) goto Label_3387; // 0xd38 JumpB
	var_20_bool = 0; // 0xd39 MovB
	return 8; // 0xd3a Return
	
Label_3387:
	GetInvItemByName(var_29_int, var_21_string); // 0xd3b Func
	
Label_3389:
	var_35_bool = var_28_int < var_22_int; // 0xd3d LT
	if(var_35_bool == 0) goto Label_3400; // 0xd3e JumpB
	var_36_int = 1; // 0xd3f PushI
	RemoveItemByType(var_30_bool, var_29_int, var_36_int); // 0xd40 Func
	var_37_bool = var_30_bool == 0; // 0xd42 Not
	if(var_37_bool == 0) goto Label_3397; // 0xd43 JumpB
	goto Label_3400; // 0xd44 Jump
	
Label_3400:
	var_38_bool = var_28_int == 0; // 0xd48 Not
	if(var_38_bool == 0) goto Label_3404; // 0xd49 JumpB
	var_20_bool = 0; // 0xd4a MovB
	return 8; // 0xd4b Return
	
Label_3404:
	var_39_string = "ammo"; // 0xd4c PushS
	SetWeaponProperty(var_27_bool, var_39_string, var_28_int); // 0xd4d Func
	var_20_bool = 1; // 0xd4f MovB
	return 8; // 0xd50 Return
	
Label_3397:
	var_40_int = 1; // 0xd45 PushI
	var_28_int = var_28_int + var_40_int; // 0xd46 Add2
	goto Label_3389; // 0xd47 Jump
}


func_2862(var_29_string, var_30_float)
{
	var_31_float = 0; var_32_float = 0; // 0xb2e PushV
	GetProperty(var_29_string, var_32_float); // 0xb2f Func
	var_33_int = var_32_float + var_30_float; // 0xb31 Add
	SetProperty(var_29_string, var_33_int); // 0xb32 Func
	return 2; // 0xb34 Return
}


func_1332()
{
	func_1336(); // 0x535 NEW_2
	return 0; // 0x537 Return
}


func_2869(var_40_bool, var_41_object, var_42_string, var_43_float, var_44_float, var_45_float)
{
	var_46_float = 0; var_47_float = 0; // 0xb35 PushV
	var_48_bool = 0; var_49_object = Obj(); var_50_string = ""; // 0xb36 PushV
	var_49_object = var_41_object; // 0xb37 Mov
	var_50_string = var_42_string; // 0xb38 Mov
	func_2850(var_48_bool, var_49_object, var_50_string); // 0xb39 NEW_2
	var_57_bool = var_48_bool == 0; // 0xb3b Not
	if(var_57_bool == 0) goto Label_2879; // 0xb3c JumpB
	var_40_bool = 0; // 0xb3d MovB
	return 2; // 0xb3e Return
	
Label_2879:
	GetProperty(var_42_string, var_47_float); // 0xb3f ObjFunc
	var_58_float = 0; var_59_float = 0; var_60_float = 0; var_61_float = 0; // 0xb41 PushV
	var_59_float = var_47_float + var_43_float; // 0xb42 Add2
	var_60_float = var_44_float; // 0xb43 Mov
	var_61_float = var_45_float; // 0xb44 Mov
	func_3014(var_58_float, var_59_float, var_60_float, var_61_float); // 0xb45 NEW_2
	SetProperty(var_42_string, var_58_float); // 0xb47 ObjFunc
	var_40_bool = 1; // 0xb49 MovB
	return 2; // 0xb4a Return
}


func_1336()
{
	var_744_bool = 0; var_745_string = ""; var_746_int = 0; // 0x538 PushV
	var_745_string = "rifle_ammo"; // 0x539 MovS
	var_746_int = 1; // 0x53a MovI
	func_3373(var_744_bool, var_745_string, var_746_int); // 0x53b NEW_2
	if(var_744_bool == 0) goto Label_1354; // 0x53d JumpB
	var_747_string = ""; // 0x53e PushV
	func_1355(var_747_string); // 0x53f NEW_2
	var_748_string = "_reload"; // 0x541 PushS
	var_749_int = var_747_string + var_748_string; // 0x542 Add
	PlaySound(var_749_int); // 0x543 Func
	var_750_string = "reload"; // 0x545 PushS
	PlayAnimation(var_750_string); // 0x546 Func
	WaitForAnimEnd(); // 0x548 Func
	
Label_1354:
	return 0; // 0x54a Return
}


func_2360(var_59_string)
{
	var_59_string = "samopal"; // 0x938 MovS
	return 0; // 0x939 Return
}


func_2362()
{
	return 0; // 0x93a Return
}


func_2363(var_0_bool, var_1_bool)
{
	var_1088_object = Obj(); var_1089_bool = 0; var_1090_bool = 0; var_1091_bool = 0; var_1092_bool = 0; var_1093_int = 0; var_1094_int = 0; var_1095_object = Obj(); var_1096_bool = 0; var_1097_bool = 0; var_1098_bool = 0; var_1099_bool = 0; var_1100_int = 0; var_1101_int = 0; // 0x93b PushV
	var_0_bool = 0; // 0x93c TMovB
	var_1_bool = 0; // 0x93d TMovB
	var_1102_string = "use_begin"; // 0x93e PushS
	PlayAnimation(var_1102_string); // 0x93f Func
	WaitForAnimEnd(); // 0x941 Func
	var_1103_bool = var_0_bool; // 0x943 PushT
	if(var_1103_bool == 0) goto Label_2374; // 0x944 JumpB
	return 14; // 0x945 Return
	
Label_2374:
	GetPlayerSelectedObject(var_1095_object); // 0x946 Func
	var_1096_bool = 0; // 0x948 MovB
	var_1104_bool = 0; var_1105_object = Obj(); var_1106_string = ""; // 0x949 PushV
	var_1105_object = var_1095_object; // 0x94a Mov
	var_1106_string = "lp"; // 0x94b MovS
	func_2850(var_1104_bool, var_1105_object, var_1106_string); // 0x94c NEW_2
	if(var_1104_bool == 0) goto Label_2422; // 0x94e JumpB
	var_1107_string = "lp"; // 0x94f PushS
	GetProperty(var_1107_string, var_1097_bool); // 0x950 ObjFunc
	var_1108_bool = var_1097_bool; // 0x952 Push
	if(var_1108_bool == 0) goto Label_2422; // 0x953 JumpB
	var_1109_string = "locked"; // 0x954 PushS
	GetProperty(var_1109_string, var_1098_bool); // 0x955 ObjFunc
	var_1110_bool = var_1098_bool; // 0x957 Push
	if(var_1110_bool == 0) goto Label_2422; // 0x958 JumpB
	var_1096_bool = 1; // 0x959 MovB
	var_1111_string = "locked"; // 0x95a PushS
	var_1112_bool = 0; // 0x95b PushB
	SetProperty(var_1111_string, var_1112_bool); // 0x95c ObjFunc
	var_1100_int = 0; // 0x95e MovI
	var_1113_string = "uses"; // 0x95f PushS
	GetWeaponProperty(var_1099_bool, var_1113_string, var_1100_int); // 0x960 Func
	var_1114_int = 1; // 0x962 PushI
	var_1115_bool = var_1100_int <= var_1114_int; // 0x963 LE
	if(var_1115_bool == 0) goto Label_2417; // 0x964 JumpB
	GetWeaponItem(var_1101_int); // 0x965 Func
	var_1116_bool = 0; // 0x967 PushB
	var_1117_int = 0; // 0x968 PushI
	SelectItem(var_1101_int, var_1116_bool, var_1117_int); // 0x969 Func
	var_1118_int = 1; // 0x96b PushI
	var_1119_int = 0; // 0x96c PushI
	RemoveItem(var_1101_int, var_1118_int, var_1119_int); // 0x96d Func
	var_1_bool = 1; // 0x96f TMovB
	goto Label_2422; // 0x970 Jump
	
Label_2422:
	var_1120_bool = var_1096_bool; // 0x976 Push
	if(var_1120_bool == 0) goto Label_2428; // 0x977 JumpB
	var_1121_string = "use_success"; // 0x978 PushS
	PlayAnimation(var_1121_string); // 0x979 Func
	goto Label_2431; // 0x97b Jump
	
Label_2431:
	WaitForAnimEnd(); // 0x97f Func
	var_1122_bool = var_0_bool; // 0x981 PushT
	if(var_1122_bool == 0) goto Label_2436; // 0x982 JumpB
	return 14; // 0x983 Return
	
Label_2436:
	var_1123_bool = var_1_bool; // 0x984 PushT
	if(var_1123_bool == 0) goto Label_2455; // 0x985 JumpB
	var_1124_string = "holster"; // 0x986 PushS
	PlayAnimation(var_1124_string); // 0x987 Func
	WaitForAnimEnd(); // 0x989 Func
	var_1125_int = -1; // 0x98b PushI
	SetHandsItem(var_1125_int); // 0x98c Func
	var_1126_bool = var_0_bool; // 0x98e PushT
	if(var_1126_bool == 0) goto Label_2449; // 0x98f JumpB
	return 14; // 0x990 Return
	
Label_2449:
	var_1_bool = 0; // 0x991 TMovB
	var_1127_string = "unholster"; // 0x992 PushS
	PlayAnimation(var_1127_string); // 0x993 Func
	WaitForAnimEnd(); // 0x995 Func
	
Label_2455:
	return 14; // 0x997 Return
	
Label_2428:
	var_1128_string = "use_fail"; // 0x97c PushS
	PlayAnimation(var_1128_string); // 0x97d Func
	
Label_2417:
	var_1129_string = "uses"; // 0x971 PushS
	var_1130_int = 1; // 0x972 PushI
	var_1131_int = var_1100_int - var_1130_int; // 0x973 Sub
	SetWeaponProperty(var_1099_bool, var_1129_string, var_1131_int); // 0x974 Func
}


func_2891(var_22_float, var_23_object, var_24_float, var_25_int)
{
	var_29_int = 0; var_30_string = ""; var_31_int = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0; var_35_int = 0; var_36_string = ""; var_37_int = 0; var_38_float = 0; var_39_float = 0; var_40_float = 0; // 0xb4b PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0xb4c PushV
	var_42_object = var_23_object; // 0xb4d Mov
	var_43_string = "health"; // 0xb4e MovS
	func_2850(var_41_bool, var_42_object, var_43_string); // 0xb4f NEW_2
	var_50_bool = var_41_bool == 0; // 0xb51 Not
	if(var_50_bool == 0) goto Label_2901; // 0xb52 JumpB
	var_22_float = 0.0; // 0xb53 MovF
	return 12; // 0xb54 Return
	
Label_2901:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0xb55 PushV
	var_52_object = var_23_object; // 0xb56 Mov
	var_53_string = "armor"; // 0xb57 MovS
	func_2850(var_51_bool, var_52_object, var_53_string); // 0xb58 NEW_2
	var_54_bool = var_51_bool == 0; // 0xb5a Not
	if(var_54_bool == 0) goto Label_2910; // 0xb5b JumpB
	var_35_int = 0; // 0xb5c MovI
	goto Label_2913; // 0xb5d Jump
	
Label_2913:
	var_55_string = "armor_"; // 0xb61 PushS
	var_56_string = ""; var_57_int = 0; // 0xb62 PushV
	var_57_int = var_25_int; // 0xb63 Mov
	func_2831(var_56_string, var_57_int); // 0xb64 NEW_2
	var_36_string = var_55_string + var_56_string; // 0xb66 Add2
	var_62_bool = 0; var_63_object = Obj(); var_64_string = ""; // 0xb67 PushV
	var_63_object = var_23_object; // 0xb68 Mov
	var_64_string = var_36_string; // 0xb69 Mov
	func_2850(var_62_bool, var_63_object, var_64_string); // 0xb6a NEW_2
	var_65_bool = var_62_bool == 0; // 0xb6c Not
	if(var_65_bool == 0) goto Label_2928; // 0xb6d JumpB
	var_37_int = 0; // 0xb6e MovI
	goto Label_2930; // 0xb6f Jump
	
Label_2930:
	var_66_float = 0; var_67_float = 0; var_68_float = 0; // 0xb72 PushV
	var_69_int = var_35_int + var_37_int; // 0xb73 Add
	var_70_float = 100.0; // 0xb74 PushF
	var_67_float = var_69_int / var_69_int; // 0xb75 Div2
	var_68_float = 1; // 0xb76 MovI
	func_3007(var_66_float, var_67_float, var_68_float); // 0xb77 NEW_2
	var_38_float = var_66_float; // 0xb78 Mov
	var_72_string = "health"; // 0xb7a PushS
	GetProperty(var_72_string, var_39_float); // 0xb7b ObjFunc
	var_73_int = 1; // 0xb7d PushI
	var_74_int = var_73_int - var_38_float; // 0xb7e Sub
	var_40_float = var_24_float * var_74_int; // 0xb7f Mult2
	var_75_string = "health"; // 0xb80 PushS
	var_76_float = 0; var_77_float = 0; var_78_float = 0; var_79_float = 0; // 0xb81 PushV
	var_77_float = var_39_float - var_40_float; // 0xb82 Sub2
	var_78_float = 0; // 0xb83 MovI
	var_79_float = 1; // 0xb84 MovI
	func_3014(var_76_float, var_77_float, var_78_float, var_79_float); // 0xb85 NEW_2
	SetProperty(var_75_string, var_76_float); // 0xb87 ObjFunc
	var_82_bool = 0; var_83_object = Obj(); // 0xb89 PushV
	var_83_object = var_23_object; // 0xb8a Mov
	func_2845(var_82_bool, var_83_object); // 0xb8b NEW_2
	if(var_82_bool == 0) goto Label_2962; // 0xb8d JumpB
	var_86_float = 0; // 0xb8e PushV
	var_86_float = -var_40_float; // 0xb8f Neg2
	func_3119(var_86_float); // 0xb90 NEW_2
	
Label_2962:
	var_22_float = var_40_float; // 0xb92 Mov
	return 12; // 0xb93 Return
	
Label_2928:
	GetProperty(var_36_string, var_37_int); // 0xb70 ObjFunc
	
Label_2910:
	var_90_string = "armor"; // 0xb5e PushS
	GetProperty(var_90_string, var_35_int); // 0xb5f ObjFunc
}


func_1355(var_657_string)
{
	var_657_string = "rifle"; // 0x54b MovS
	return 0; // 0x54c Return
}


func_1357(var_684_float)
{
	var_684_float = 1.5; // 0x54d MovF
	return 0; // 0x54e Return
}


func_1359(var_708_int)
{
	var_708_int = 1; // 0x54f MovI
	return 0; // 0x550 Return
}


func_3409(var_376_float)
{
	var_377_bool = 0; var_378_int = 0; var_379_bool = 0; var_380_int = 0; // 0xd51 PushV
	var_381_string = "durability"; // 0xd52 PushS
	GetWeaponProperty(var_379_bool, var_381_string, var_380_int); // 0xd53 Func
	var_382_bool = var_379_bool; // 0xd55 Push
	if(var_382_bool == 0) goto Label_3418; // 0xd56 JumpB
	var_383_float = 100.0; // 0xd57 PushF
	var_376_float = var_380_int / var_380_int; // 0xd58 Div2
	goto Label_3419; // 0xd59 Jump
	
Label_3419:
	return 4; // 0xd5b Return
	
Label_3418:
	var_376_float = 1.0; // 0xd5a MovF
}


func_1361(var_710_int)
{
	var_710_int = 2; // 0x551 MovI
	return 0; // 0x552 Return
}


func_1363(var_681_int)
{
	var_681_int = 2; // 0x553 MovI
	return 0; // 0x554 Return
}


func_1365(var_0_bool)
{
	var_578_string = ""; var_579_string = ""; var_580_int = 0; var_581_bool = 0; var_582_float = 0; var_583_float = 0; var_584_cvector = CVector(0,0,0); var_585_object = Obj(); var_586_int = 0; var_587_cvector = CVector(0,0,0); var_588_object = Obj(); var_589_int = 0; var_590_cvector = CVector(0,0,0); var_591_float = 0; var_592_float = 0; var_593_float = 0; var_594_object = Obj(); var_595_float = 0; var_596_object = Obj(); var_597_object = Obj(); var_598_int = 0; var_599_int = 0; var_600_object = Obj(); var_601_bool = 0; var_602_string = ""; var_603_string = ""; var_604_int = 0; var_605_bool = 0; var_606_float = 0; var_607_float = 0; var_608_cvector = CVector(0,0,0); var_609_object = Obj(); var_610_int = 0; var_611_cvector = CVector(0,0,0); var_612_object = Obj(); var_613_int = 0; var_614_cvector = CVector(0,0,0); var_615_float = 0; var_616_float = 0; var_617_float = 0; var_618_object = Obj(); var_619_float = 0; var_620_object = Obj(); var_621_object = Obj(); var_622_int = 0; var_623_int = 0; var_624_object = Obj(); var_625_bool = 0; // 0x555 PushV
	var_0_bool = 0; // 0x556 TMovB
	
Label_1367:
	var_626_bool = 0; // 0x557 PushV
	func_1282(var_626_bool); // 0x558 NEW_2
	var_661_bool = var_626_bool == 0; // 0x55a Not
	if(var_661_bool == 0) goto Label_1373; // 0x55b JumpB
	goto Label_1588; // 0x55c Jump
	
Label_1588:
	return 48; // 0x634 Return
	
Label_1373:
	GetCurrentWeapon(var_602_string); // 0x55d Func
	var_603_string = "attack1"; // 0x55f MovS
	var_662_bool = 1; // 0x560 PushB
	SetAttackState(var_662_bool); // 0x561 Func
	func_1323(); // 0x564 NEW_2
	var_673_string = "_phase1"; // 0x566 PushS
	var_674_int = var_603_string + var_673_string; // 0x567 Add
	PlayAnimation(var_674_int); // 0x568 Func
	WaitForAnimEnd(); // 0x56a Func
	var_675_bool = var_0_bool; // 0x56c PushT
	if(var_675_bool == 0) goto Label_1391; // 0x56d JumpB
	return 48; // 0x56e Return
	
Label_1391:
	var_676_string = "shot"; // 0x56f PushS
	TriggerWeapon(var_676_string); // 0x570 Func
	var_677_string = ""; // 0x572 PushV
	func_1355(var_677_string); // 0x573 NEW_2
	var_678_string = "_shot"; // 0x575 PushS
	var_679_int = var_677_string + var_678_string; // 0x576 Add
	PlaySound(var_679_int); // 0x577 Func
	var_680_int = 0; // 0x579 PushV
	var_681_int = 0; // 0x57a PushV
	func_1363(var_681_int); // 0x57b NEW_2
	var_680_int = var_681_int; // 0x57c Mov
	func_3420(var_680_int); // 0x57e NEW_2
	func_1600(); // 0x581 NEW_2
	var_682_bool = 0; // 0x583 PushB
	SetAttackState(var_682_bool); // 0x584 Func
	var_683_int = 0; // 0x586 PushV
	func_1317(var_683_int); // 0x587 NEW_2
	var_604_int = var_683_int; // 0x588 Mov
	var_605_bool = 0; // 0x58a MovB
	var_684_float = 0; // 0x58b PushV
	func_1357(var_684_float); // 0x58c NEW_2
	var_606_float = var_684_float / var_684_float; // 0x58e Div2
	var_685_float = 1.0; // 0x58f PushF
	var_686_float = 1.5; // 0x590 PushF
	var_687_float = 1.0; // 0x591 PushF
	var_688_float = 0; // 0x592 PushV
	func_1319(var_688_float); // 0x593 NEW_2
	var_689_float = var_687_float / var_688_float; // 0x595 Div
	var_690_float = 1.5; // 0x596 PushF
	var_691_int = var_689_float - var_690_float; // 0x597 Sub
	var_692_float = 0; // 0x598 PushV
	func_3409(var_692_float); // 0x599 NEW_2
	var_693_float = var_691_int * var_692_float; // 0x59b Mult
	var_694_int = var_686_float + var_693_float; // 0x59c Add
	var_607_float = var_685_float / var_685_float; // 0x59d Div2
	GetDirection(var_608_cvector); // 0x59e Func
	var_695_object = Obj(); // 0x5a0 PushV
	func_3042(var_695_object); // 0x5a1 NEW_2
	var_609_object = var_695_object; // 0x5a2 Mov
	var_610_int = 0; // 0x5a4 MovI
	
Label_1445:
	var_698_bool = var_610_int < var_604_int; // 0x5a5 LT
	if(var_698_bool == 0) goto Label_1543; // 0x5a6 JumpB
	RandVecCone3D(var_611_cvector, var_608_cvector, var_607_float); // 0x5a7 Func
	var_699_int = 10000; // 0x5a9 PushI
	GetVictimMaterialExact(var_612_object, var_613_int, var_614_cvector, var_611_cvector, var_699_int); // 0x5aa Func
	var_700_object = var_612_object; // 0x5ac Push
	if(var_700_object == 0) goto Label_1539; // 0x5ad JumpB
	var_615_float = var_606_float; // 0x5ae Mov
	var_701_int = 4; // 0x5af PushI
	var_702_bool = var_613_int == var_701_int; // 0x5b0 Eq
	if(var_702_bool == 0) goto Label_1460; // 0x5b1 JumpB
	var_703_float = 3.0; // 0x5b2 PushF
	var_615_float = var_615_float * var_703_float; // 0x5b3 Mult2
	
Label_1460:
	var_704_float = 0; var_705_object = Obj(); var_706_float = 0; var_707_int = 0; // 0x5b4 PushV
	var_705_object = var_612_object; // 0x5b5 Mov
	var_706_float = var_615_float; // 0x5b6 Mov
	var_708_int = 0; // 0x5b7 PushV
	func_1359(var_708_int); // 0x5b8 NEW_2
	var_707_int = var_708_int; // 0x5b9 Mov
	func_2891(var_704_float, var_705_object, var_706_float, var_707_int); // 0x5bb NEW_2
	var_616_float = var_704_float; // 0x5bc Mov
	var_709_float = var_616_float; // 0x5be Push
	if(var_709_float == 0) goto Label_1521; // 0x5bf JumpB
	add(var_612_object); // 0x5c0 ObjFunc
	var_710_int = 0; // 0x5c2 PushV
	func_1361(var_710_int); // 0x5c3 NEW_2
	ReportHit(var_612_object, var_710_int, var_616_float, var_615_float, var_614_cvector, var_611_cvector); // 0x5c5 Func
	var_711_bool = 0; // 0x5c7 PushV
	func_1321(var_711_bool); // 0x5c8 NEW_2
	if(var_711_bool == 0) goto Label_1520; // 0x5ca JumpB
	var_712_string = "health"; // 0x5cb PushS
	GetProperty(var_712_string, var_617_float); // 0x5cc ObjFunc
	var_713_bool = var_617_float == 0; // 0x5ce Not
	if(var_713_bool == 0) goto Label_1520; // 0x5cf JumpB
	var_714_int = 10000; // 0x5d0 PushI
	GetVictimMaterialExact(var_618_object, var_613_int, var_614_cvector, var_611_cvector, var_714_int, var_612_object); // 0x5d1 Func
	var_715_bool = 0; // 0x5d3 PushV
	var_715_bool = 0; // 0x5d4 MovB
	var_716_object = var_618_object; // 0x5d5 Push
	if(var_716_object == 0) goto Label_1498; // 0x5d6 JumpB
	var_717_bool = var_618_object != var_612_object; // 0x5d7 Neq
	if(var_717_bool == 0) goto Label_1498; // 0x5d8 JumpB
	var_715_bool = 1; // 0x5d9 MovB
	
Label_1498:
	if(var_715_bool == 0) goto Label_1519; // 0x5da JumpB
	var_718_float = 0; var_719_object = Obj(); var_720_float = 0; var_721_int = 0; // 0x5db PushV
	var_719_object = var_618_object; // 0x5dc Mov
	var_722_float = 0.75; // 0x5dd PushF
	var_720_float = var_615_float * var_722_float; // 0x5de Mult2
	var_723_int = 0; // 0x5df PushV
	func_1359(var_723_int); // 0x5e0 NEW_2
	var_721_int = var_723_int; // 0x5e1 Mov
	func_2891(var_718_float, var_719_object, var_720_float, var_721_int); // 0x5e3 NEW_2
	var_619_float = var_718_float; // 0x5e4 Mov
	var_724_float = var_619_float; // 0x5e6 Push
	if(var_724_float == 0) goto Label_1519; // 0x5e7 JumpB
	add(var_618_object); // 0x5e8 ObjFunc
	var_725_int = 0; // 0x5ea PushV
	func_1361(var_725_int); // 0x5eb NEW_2
	ReportHit(var_618_object, var_725_int, var_619_float, var_615_float, var_614_cvector, var_611_cvector); // 0x5ed Func
	
Label_1519:
	var_618_object = 0; // 0x5ef SetNull
	
Label_1520:
	goto Label_1539; // 0x5f0 Jump
	
Label_1539:
	var_612_object = 0; // 0x603 SetNull
	var_726_int = 1; // 0x604 PushI
	var_610_int = var_610_int + var_726_int; // 0x605 Add2
	goto Label_1445; // 0x606 Jump
	
Label_1521:
	var_727_int = -1; // 0x5f1 PushI
	var_728_bool = var_613_int != var_727_int; // 0x5f2 Neq
	if(var_728_bool == 0) goto Label_1539; // 0x5f3 JumpB
	var_729_bool = var_605_bool == 0; // 0x5f4 Not
	if(var_729_bool == 0) goto Label_1539; // 0x5f5 JumpB
	GetScene(var_620_object); // 0x5f6 Func
	var_730_string = "scripted"; // 0x5f8 PushS
	var_731_cvector = CVector(0.0, 0.0, 1.0); // 0x5f9 PushVec
	var_732_string = "richochet.xml"; // 0x5fa PushS
	AddActorByType(var_621_object, var_730_string, var_620_object, var_614_cvector, var_731_cvector, var_732_string); // 0x5fb Func
	var_733_string = "Material"; // 0x5fd PushS
	SetScriptProperty(var_733_string, var_613_int); // 0x5fe ObjFunc
	var_605_bool = 1; // 0x600 MovB
	var_621_object = 0; // 0x601 SetNull
	var_620_object = 0; // 0x602 SetNull
	
Label_1543:
	size(var_622_int); // 0x607 ObjFunc
	var_623_int = 0; // 0x609 MovI
	
Label_1546:
	var_734_bool = var_623_int < var_622_int; // 0x60a LT
	if(var_734_bool == 0) goto Label_1571; // 0x60b JumpB
	get(var_624_object, var_623_int); // 0x60c ObjFunc
	ReportAttack(var_624_object); // 0x60e Func
	var_735_object = GlobalVars[2]; // 0x610 PushGE
	in(var_625_bool, var_624_object); // 0x611 ObjFunc
	var_736_bool = var_625_bool == 0; // 0x613 Not
	if(var_736_bool == 0) goto Label_1564; // 0x614 JumpB
	var_737_object = GlobalVars[3]; // 0x615 PushGE
	add(var_624_object); // 0x616 ObjFunc
	var_738_bool = 0; // 0x618 PushB
	BroadcastPlayerDamage(var_624_object, var_738_bool); // 0x619 Func
	goto Label_1567; // 0x61b Jump
	
Label_1567:
	var_624_object = 0; // 0x61f SetNull
	var_739_int = 1; // 0x620 PushI
	var_623_int = var_623_int + var_739_int; // 0x621 Add2
	goto Label_1546; // 0x622 Jump
	
Label_1564:
	var_740_bool = 1; // 0x61c PushB
	BroadcastPlayerDamage(var_624_object, var_740_bool); // 0x61d Func
	
Label_1571:
	var_741_string = "_phase2"; // 0x623 PushS
	var_742_int = var_603_string + var_741_string; // 0x624 Add
	PlayAnimation(var_742_int); // 0x625 Func
	WaitForAnimEnd(); // 0x627 Func
	var_743_bool = var_0_bool; // 0x629 PushT
	if(var_743_bool == 0) goto Label_1580; // 0x62a JumpB
	return 48; // 0x62b Return
	
Label_1580:
	func_1332(); // 0x62d NEW_2
	var_609_object = 0; // 0x62f SetNull
	var_751_bool = 0; // 0x630 PushV
	func_1601(var_751_bool); // 0x631 NEW_2
	if(var_751_bool == 0) goto Label_1367; // 0x633 JumpB
}


func_3420(var_408_int)
{
	var_410_bool = 0; var_411_int = 0; var_412_bool = 0; var_413_int = 0; // 0xd5c PushV
	var_414_string = "durability"; // 0xd5d PushS
	GetWeaponProperty(var_412_bool, var_414_string, var_413_int); // 0xd5e Func
	var_415_bool = var_412_bool == 0; // 0xd60 Not
	if(var_415_bool == 0) goto Label_3427; // 0xd61 JumpB
	var_413_int = 100; // 0xd62 MovI
	
Label_3427:
	var_416_int = 0; var_417_int = 0; var_418_int = 0; var_419_int = 0; // 0xd63 PushV
	var_417_int = var_413_int - var_408_int; // 0xd64 Sub2
	var_418_int = 0; // 0xd65 MovI
	var_419_int = 100; // 0xd66 MovI
	func_3025(var_416_int, var_417_int, var_418_int, var_419_int); // 0xd67 NEW_2
	var_413_int = var_416_int; // 0xd68 Mov
	var_422_string = "durability"; // 0xd6a PushS
	SetWeaponProperty(var_412_bool, var_422_string, var_413_int); // 0xd6b Func
	return 4; // 0xd6d Return
}


func_3438(var_373_float, var_374_float)
{
	var_376_float = 0; // 0xd6f PushV
	func_3409(var_376_float); // 0xd70 NEW_2
	var_384_int = 1; // 0xd72 PushI
	var_385_int = var_384_int - var_374_float; // 0xd73 Sub
	var_386_float = var_376_float * var_385_int; // 0xd74 Mult
	var_373_float = var_374_float + var_386_float; // 0xd75 Add2
	return 0; // 0xd76 Return
}


func_3447(var_13_bool, var_14_int)
{
	var_15_bool = 0; var_16_int = 0; // 0xd78 PushV
	var_16_int = var_14_int; // 0xd79 Mov
	func_3170(var_15_bool, var_16_int); // 0xd7a NEW_2
	var_13_bool = var_15_bool; // 0xd7b Mov
	return 0; // 0xd7d Return
}


func_2964(var_130_bool)
{
	var_132_bool = 0; var_133_bool = 0; // 0xb94 PushV
	IsDead(var_133_bool); // 0xb95 ObjFunc
	var_130_bool = var_133_bool; // 0xb97 Mov
	return 2; // 0xb98 Return
}


func_2969(var_36_string, var_37_int)
{
	var_38_int = 1; // 0xb9a PushI
	var_39_bool = var_37_int == var_38_int; // 0xb9b Eq
	if(var_39_bool == 0) goto Label_2976; // 0xb9c JumpB
	var_36_string = "wood"; // 0xb9d MovS
	return 0; // 0xb9e Return
	
Label_2976:
	var_40_int = 2; // 0xba0 PushI
	var_41_bool = var_37_int == var_40_int; // 0xba1 Eq
	if(var_41_bool == 0) goto Label_2982; // 0xba2 JumpB
	var_36_string = "metal"; // 0xba3 MovS
	return 0; // 0xba4 Return
	
Label_2982:
	var_42_int = 3; // 0xba6 PushI
	var_43_bool = var_37_int == var_42_int; // 0xba7 Eq
	if(var_43_bool == 0) goto Label_2988; // 0xba8 JumpB
	var_36_string = "ground"; // 0xba9 MovS
	return 0; // 0xbaa Return
	
Label_2988:
	var_44_int = 4; // 0xbac PushI
	var_45_bool = var_37_int == var_44_int; // 0xbad Eq
	if(var_45_bool == 0) goto Label_2994; // 0xbae JumpB
	var_36_string = "water"; // 0xbaf MovS
	return 0; // 0xbb0 Return
	
Label_2994:
	var_46_int = 5; // 0xbb2 PushI
	var_47_bool = var_37_int == var_46_int; // 0xbb3 Eq
	if(var_47_bool == 0) goto Label_2999; // 0xbb4 JumpB
	var_36_string = "carpet"; // 0xbb5 MovS
	return 0; // 0xbb6 Return
	
Label_2999:
	var_36_string = "stone"; // 0xbb7 MovS
	return 0; // 0xbb8 Return
}


func_426(var_136_float, var_137_bool)
{
	var_138_float = 0; var_139_bool = 0; // 0x1ab PushV
	var_139_bool = var_137_bool; // 0x1ac Mov
	func_188(var_138_float, var_139_bool); // 0x1ad NEW_2
	var_136_float = var_138_float; // 0x1ae Mov
	return 0; // 0x1b0 Return
}


func_1964()
{
	return 0; // 0x7ac Return
}


func_1965(var_868_bool)
{
	var_868_bool = 0; // 0x7ad MovB
	return 0; // 0x7ae Return
}


func_1967(var_916_bool)
{
	var_917_bool = 0; var_918_bool = 0; // 0x7af PushV
	IsShooting(var_918_bool); // 0x7b0 Func
	var_916_bool = var_918_bool; // 0x7b2 Mov
	return 2; // 0x7b3 Return
}


func_1972()
{
	func_1996(); // 0x7b5 NEW_2
	var_47_bool = 0; var_48_string = ""; var_49_int = 0; // 0x7b7 PushV
	var_48_string = "revolver_ammo"; // 0x7b8 MovS
	var_49_int = 6; // 0x7b9 MovI
	func_3373(var_47_bool, var_48_string, var_49_int); // 0x7ba NEW_2
	if(var_47_bool == 0) goto Label_1993; // 0x7bc JumpB
	var_50_string = ""; // 0x7bd PushV
	func_1994(var_50_string); // 0x7be NEW_2
	var_51_string = "_reload"; // 0x7c0 PushS
	var_52_int = var_50_string + var_51_string; // 0x7c1 Add
	PlaySound(var_52_int); // 0x7c2 Func
	var_53_string = "reload"; // 0x7c4 PushS
	PlayAnimation(var_53_string); // 0x7c5 Func
	WaitForAnimEnd(); // 0x7c7 Func
	
Label_1993:
	return 0; // 0x7c9 Return
}


func_3001(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0xbb9 PushV
	self(var_28_object); // 0xbba Func
	var_26_object = var_28_object; // 0xbbc Mov
	return 2; // 0xbbd Return
}


func_2489(var_63_string)
{
	var_64_string = "empty"; // 0x9ba PushS
	var_65_bool = var_63_string == var_64_string; // 0x9bb Eq
	if(var_65_bool == 0) goto Label_2499; // 0x9bc JumpB
	TaskCall(3); // 0x9be TaskCall
	func_465(var_66_bool); // 0x9bf NEW_2
	TaskReturn(); // 0x9c0 TaskReturn
	goto Label_2552; // 0x9c2 Jump
	
Label_2552:
	return 0; // 0x9f8 Return
	
Label_2499:
	var_280_string = "scalpel"; // 0x9c3 PushS
	var_281_bool = var_63_string == var_280_string; // 0x9c4 Eq
	if(var_281_bool == 0) goto Label_2508; // 0x9c5 JumpB
	TaskCall(4); // 0x9c7 TaskCall
	func_753(var_282_bool); // 0x9c8 NEW_2
	TaskReturn(); // 0x9c9 TaskReturn
	goto Label_2552; // 0x9cb Jump
	
Label_2508:
	var_439_string = "knife"; // 0x9cc PushS
	var_440_bool = var_63_string == var_439_string; // 0x9cd Eq
	if(var_440_bool == 0) goto Label_2517; // 0x9ce JumpB
	TaskCall(5); // 0x9d0 TaskCall
	func_1039(var_441_bool); // 0x9d1 NEW_2
	TaskReturn(); // 0x9d2 TaskReturn
	goto Label_2552; // 0x9d4 Jump
	
Label_2517:
	var_575_string = "rifle"; // 0x9d5 PushS
	var_576_bool = var_63_string == var_575_string; // 0x9d6 Eq
	if(var_576_bool == 0) goto Label_2526; // 0x9d7 JumpB
	TaskCall(6); // 0x9d9 TaskCall
	func_1365(var_577_bool); // 0x9da NEW_2
	TaskReturn(); // 0x9db TaskReturn
	goto Label_2552; // 0x9dd Jump
	
Label_2526:
	var_754_string = "revolver"; // 0x9de PushS
	var_755_bool = var_63_string == var_754_string; // 0x9df Eq
	if(var_755_bool == 0) goto Label_2535; // 0x9e0 JumpB
	TaskCall(8); // 0x9e2 TaskCall
	func_1740(var_756_bool); // 0x9e3 NEW_2
	TaskReturn(); // 0x9e4 TaskReturn
	goto Label_2552; // 0x9e6 Jump
	
Label_2535:
	var_919_string = "samopal"; // 0x9e7 PushS
	var_920_bool = var_63_string == var_919_string; // 0x9e8 Eq
	if(var_920_bool == 0) goto Label_2544; // 0x9e9 JumpB
	TaskCall(10); // 0x9eb TaskCall
	func_2106(var_921_bool); // 0x9ec NEW_2
	TaskReturn(); // 0x9ed TaskReturn
	goto Label_2552; // 0x9ef Jump
	
Label_2544:
	var_1084_string = "lockpick"; // 0x9f0 PushS
	var_1085_bool = var_63_string == var_1084_string; // 0x9f1 Eq
	if(var_1085_bool == 0) goto Label_2552; // 0x9f2 JumpB
	TaskCall(12); // 0x9f4 TaskCall
	func_2363(var_1086_bool, var_1087_bool); // 0x9f5 NEW_2
	TaskReturn(); // 0x9f6 TaskReturn
}


func_444()
{
	return 0; // 0x1bc Return
}


func_445(var_70_bool)
{
	var_70_bool = 0; // 0x1bd MovB
	return 0; // 0x1be Return
}


func_447(var_221_bool)
{
	var_222_bool = 0; var_223_bool = 0; // 0x1bf PushV
	IsShooting(var_223_bool); // 0x1c0 Func
	var_221_bool = var_223_bool; // 0x1c2 Mov
	return 2; // 0x1c3 Return
}


func_3007(var_66_float, var_67_float, var_68_float)
{
	var_71_bool = var_67_float < var_68_float; // 0xbc0 LT
	if(var_71_bool == 0) goto Label_3012; // 0xbc1 JumpB
	var_66_float = var_67_float; // 0xbc2 Mov
	goto Label_3013; // 0xbc3 Jump
	
Label_3013:
	return 0; // 0xbc5 Return
	
Label_3012:
	var_66_float = var_68_float; // 0xbc4 Mov
}


func_452(var_166_string)
{
	var_166_string = "punch"; // 0x1c4 MovS
	return 0; // 0x1c5 Return
}


func_454(var_184_float, var_185_bool)
{
	var_186_bool = var_185_bool; // 0x1c7 Push
	if(var_186_bool == 0) goto Label_459; // 0x1c8 JumpB
	var_184_float = 0.3; // 0x1c9 MovF
	goto Label_460; // 0x1ca Jump
	
Label_460:
	return 0; // 0x1cc Return
	
Label_459:
	var_184_float = 0.2; // 0x1cb MovF
}


func_3014(var_76_float, var_77_float, var_78_float, var_79_float)
{
	var_80_bool = var_77_float < var_78_float; // 0xbc7 LT
	if(var_80_bool == 0) goto Label_3019; // 0xbc8 JumpB
	var_76_float = var_78_float; // 0xbc9 Mov
	return 0; // 0xbca Return
	
Label_3019:
	var_81_bool = var_77_float > var_79_float; // 0xbcb GT
	if(var_81_bool == 0) goto Label_3023; // 0xbcc JumpB
	var_76_float = var_79_float; // 0xbcd Mov
	return 0; // 0xbce Return
	
Label_3023:
	var_76_float = var_77_float; // 0xbcf Mov
	return 0; // 0xbd0 Return
}


func_1994(var_50_string)
{
	var_50_string = "revolver"; // 0x7ca MovS
	return 0; // 0x7cb Return
}


func_1996()
{
	return 0; // 0x7cc Return
}


func_461(var_194_int)
{
	var_194_int = 0; // 0x1cd MovI
	return 0; // 0x1ce Return
}


func_1997(var_970_bool)
{
	var_971_bool = 0; var_972_bool = 0; var_973_bool = 0; var_974_bool = 0; // 0x7cd PushV
	var_975_string = "ammo"; // 0x7ce PushS
	GetWeaponProperty(var_973_bool, var_975_string, var_974_bool); // 0x7cf Func
	var_976_bool = 0; // 0x7d1 PushV
	var_976_bool = 1; // 0x7d2 MovB
	var_977_bool = var_973_bool == 0; // 0x7d3 Not
	if(var_977_bool == 0) goto Label_2008; // 0x7d4 JumpB
	var_978_bool = var_974_bool == 0; // 0x7d5 Not
	if(var_978_bool == 0) goto Label_2008; // 0x7d6 JumpB
	var_976_bool = 0; // 0x7d7 MovB
	
Label_2008:
	if(var_976_bool == 0) goto Label_2030; // 0x7d8 JumpB
	var_979_bool = 0; var_980_string = ""; var_981_int = 0; // 0x7d9 PushV
	var_980_string = "samopal_ammo"; // 0x7da MovS
	var_981_int = 2; // 0x7db MovI
	func_3373(var_979_bool, var_980_string, var_981_int); // 0x7dc NEW_2
	var_982_bool = var_979_bool == 0; // 0x7de Not
	if(var_982_bool == 0) goto Label_2030; // 0x7df JumpB
	var_983_string = ""; // 0x7e0 PushV
	func_2096(var_983_string); // 0x7e1 NEW_2
	var_984_string = "_noammo"; // 0x7e3 PushS
	var_985_int = var_983_string + var_984_string; // 0x7e4 Add
	PlaySound(var_985_int); // 0x7e5 Func
	var_986_string = "noammo"; // 0x7e7 PushS
	PlayAnimation(var_986_string); // 0x7e8 Func
	WaitForAnimEnd(); // 0x7ea Func
	var_970_bool = 0; // 0x7ec MovB
	return 4; // 0x7ed Return
	
Label_2030:
	var_970_bool = 1; // 0x7ee MovB
	return 4; // 0x7ef Return
}


func_463(var_259_int)
{
	var_259_int = 0; // 0x1cf MovI
	return 0; // 0x1d0 Return
}


func_465(var_0_bool)
{
	var_67_int = 0; var_68_string = ""; var_69_bool = 0; var_70_string = ""; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_int = 0; var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_string = ""; var_80_int = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_float = 0; var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_string = ""; var_89_bool = 0; var_90_string = ""; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_int = 0; var_95_cvector = CVector(0,0,0); var_96_bool = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_string = ""; var_100_int = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_float = 0; var_104_float = 0; var_105_int = 0; var_106_bool = 0; // 0x1d1 PushV
	var_0_bool = 0; // 0x1d2 TMovB
	var_87_int = 0; // 0x1d3 MovI
	
Label_468:
	var_107_int = 1; // 0x1d4 PushI
	var_87_int = var_87_int + var_107_int; // 0x1d5 Add2
	var_108_string = ""; // 0x1d6 PushV
	func_711(var_108_string); // 0x1d7 NEW_2
	var_109_string = "attack"; // 0x1d9 PushS
	var_110_int = var_108_string + var_109_string; // 0x1da Add
	var_111_int = var_110_int + var_87_int; // 0x1db Add
	var_112_string = "_phase1"; // 0x1dc PushS
	var_88_string = var_111_int + var_112_string; // 0x1dd Add2
	HasAnimation(var_89_bool, var_88_string); // 0x1de Func
	var_113_bool = var_89_bool == 0; // 0x1e0 Not
	if(var_113_bool == 0) goto Label_483; // 0x1e1 JumpB
	goto Label_484; // 0x1e2 Jump
	
Label_484:
	var_114_int = -1; // 0x1e4 PushI
	var_87_int = var_87_int + var_114_int; // 0x1e5 Add2
	var_115_bool = var_87_int == 0; // 0x1e6 Not
	if(var_115_bool == 0) goto Label_489; // 0x1e7 JumpB
	return 40; // 0x1e8 Return
	
Label_489:
	GetCurrentWeapon(var_90_string); // 0x1e9 Func
	GetAttackDistance(var_91_float); // 0x1eb Func
	GetDirection(var_92_cvector); // 0x1ed Func
	var_96_bool = 0; // 0x1ef MovB
	var_116_bool = 0; // 0x1f0 PushV
	func_709(var_116_bool); // 0x1f1 NEW_2
	if(var_116_bool == 0) goto Label_546; // 0x1f3 JumpB
	GetVictimMaterialExact(var_93_object, var_94_int, var_95_cvector, var_92_cvector, var_91_float); // 0x1f4 Func
	var_117_bool = 0; // 0x1f6 PushV
	var_117_bool = 0; // 0x1f7 MovB
	var_118_bool = 0; // 0x1f8 PushV
	var_118_bool = 0; // 0x1f9 MovB
	var_119_bool = 0; // 0x1fa PushV
	var_119_bool = 0; // 0x1fb MovB
	var_120_bool = var_93_object != 0; // 0x1fc NullNeq
	if(var_120_bool == 0) goto Label_517; // 0x1fd JumpB
	var_121_bool = 0; var_122_object = Obj(); var_123_string = ""; // 0x1fe PushV
	var_122_object = var_93_object; // 0x1ff Mov
	var_123_string = "health"; // 0x200 MovS
	func_2850(var_121_bool, var_122_object, var_123_string); // 0x201 NEW_2
	if(var_121_bool == 0) goto Label_517; // 0x203 JumpB
	var_119_bool = 1; // 0x204 MovB
	
Label_517:
	if(var_119_bool == 0) goto Label_525; // 0x205 JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x206 PushV
	var_131_object = var_93_object; // 0x207 Mov
	func_2964(var_131_object); // 0x208 NEW_2
	var_134_bool = var_130_bool == 0; // 0x20a Not
	if(var_134_bool == 0) goto Label_525; // 0x20b JumpB
	var_118_bool = 1; // 0x20c MovB
	
Label_525:
	if(var_118_bool == 0) goto Label_530; // 0x20d JumpB
	var_135_int = 4; // 0x20e PushI
	var_136_bool = var_94_int == var_135_int; // 0x20f Eq
	if(var_136_bool == 0) goto Label_530; // 0x210 JumpB
	var_117_bool = 1; // 0x211 MovB
	
Label_530:
	if(var_117_bool == 0) goto Label_546; // 0x212 JumpB
	var_137_string = "GetDirection"; // 0x213 PushS
	var_138_int = 1; // 0x214 PushI
	var_139_bool = IsFuncExist(var_93_object, var_137_string, var_138_int); // 0x215 FuncExist
	if(var_139_bool == 0) goto Label_546; // 0x216 JumpB
	GetDirection(var_97_cvector); // 0x217 Func
	GetDirection(var_98_cvector); // 0x219 ObjFunc
	var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); // 0x21b PushV
	var_141_cvector = var_97_cvector; // 0x21c Mov
	var_142_cvector = var_98_cvector; // 0x21d Mov
	func_3067(var_140_float, var_141_cvector, var_142_cvector); // 0x21e NEW_2
	var_164_float = 0.5; // 0x220 PushF
	var_96_bool = var_140_float >= var_164_float; // 0x221 GE2
	
Label_546:
	var_165_bool = var_96_bool; // 0x222 Push
	if(var_165_bool == 0) goto Label_557; // 0x223 JumpB
	var_99_string = "battack"; // 0x224 MovS
	var_166_string = ""; // 0x225 PushV
	func_452(var_166_string); // 0x226 NEW_2
	var_167_string = "_back"; // 0x228 PushS
	var_168_int = var_166_string + var_167_string; // 0x229 Add
	PlaySound(var_168_int); // 0x22a Func
	goto Label_575; // 0x22c Jump
	
Label_575:
	var_169_bool = 1; // 0x23f PushB
	SetAttackState(var_169_bool); // 0x240 Func
	var_170_string = "_phase1"; // 0x242 PushS
	var_171_int = var_99_string + var_170_string; // 0x243 Add
	PlayAnimation(var_171_int); // 0x244 Func
	WaitForAnimEnd(); // 0x246 Func
	var_172_bool = var_0_bool; // 0x248 PushT
	if(var_172_bool == 0) goto Label_587; // 0x249 JumpB
	return 40; // 0x24a Return
	
Label_587:
	var_173_bool = 0; // 0x24b PushB
	SetAttackState(var_173_bool); // 0x24c Func
	GetAttackDistance(var_91_float); // 0x24e Func
	GetDirection(var_92_cvector); // 0x250 Func
	GetVictimMaterialExact(var_93_object, var_94_int, var_95_cvector, var_92_cvector, var_91_float); // 0x252 Func
	var_174_bool = var_93_object != 0; // 0x254 NullNeq
	if(var_174_bool == 0) goto Label_675; // 0x255 JumpB
	var_175_string = "GetDirection"; // 0x256 PushS
	var_176_int = 1; // 0x257 PushI
	var_177_bool = IsFuncExist(var_93_object, var_175_string, var_176_int); // 0x258 FuncExist
	if(var_177_bool == 0) goto Label_614; // 0x259 JumpB
	GetDirection(var_101_cvector); // 0x25a Func
	GetDirection(var_102_cvector); // 0x25c ObjFunc
	var_178_float = 0; var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); // 0x25e PushV
	var_179_cvector = var_101_cvector; // 0x25f Mov
	var_180_cvector = var_102_cvector; // 0x260 Mov
	func_3067(var_178_float, var_179_cvector, var_180_cvector); // 0x261 NEW_2
	var_181_float = 0.5; // 0x263 PushF
	var_96_bool = var_178_float >= var_181_float; // 0x264 GE2
	goto Label_615; // 0x265 Jump
	
Label_615:
	var_182_float = 0; var_183_bool = 0; // 0x267 PushV
	var_183_bool = var_96_bool; // 0x268 Mov
	func_690(var_182_float, var_183_bool); // 0x269 NEW_2
	var_103_float = var_182_float; // 0x26a Mov
	var_187_int = 4; // 0x26c PushI
	var_188_bool = var_94_int == var_187_int; // 0x26d Eq
	if(var_188_bool == 0) goto Label_625; // 0x26e JumpB
	var_189_float = 3.0; // 0x26f PushF
	var_103_float = var_103_float * var_189_float; // 0x270 Mult2
	
Label_625:
	var_190_float = 0; var_191_object = Obj(); var_192_float = 0; var_193_int = 0; // 0x271 PushV
	var_191_object = var_93_object; // 0x272 Mov
	var_192_float = var_103_float; // 0x273 Mov
	var_194_int = 0; // 0x274 PushV
	func_461(var_194_int); // 0x275 NEW_2
	var_193_int = var_194_int; // 0x276 Mov
	func_2891(var_190_float, var_191_object, var_192_float, var_193_int); // 0x278 NEW_2
	var_104_float = var_190_float; // 0x279 Mov
	var_251_float = var_104_float; // 0x27b Push
	if(var_251_float == 0) goto Label_672; // 0x27c JumpB
	var_252_int = 2; // 0x27d PushI
	irand(var_105_int, var_252_int); // 0x27e Func
	var_253_string = ""; // 0x280 PushV
	func_452(var_253_string); // 0x281 NEW_2
	var_254_string = "_hit"; // 0x283 PushS
	var_255_int = var_253_string + var_254_string; // 0x284 Add
	var_256_int = 1; // 0x285 PushI
	var_257_int = var_105_int + var_256_int; // 0x286 Add
	var_258_int = var_255_int + var_257_int; // 0x287 Add
	PlaySound(var_258_int); // 0x288 Func
	ReportAttack(var_93_object); // 0x28a Func
	var_259_int = 0; // 0x28c PushV
	func_463(var_259_int); // 0x28d NEW_2
	ReportHit(var_93_object, var_259_int, var_104_float, var_103_float, var_95_cvector, var_92_cvector); // 0x28f Func
	var_260_object = GlobalVars[2]; // 0x291 PushGE
	in(var_106_bool, var_93_object); // 0x292 ObjFunc
	var_261_bool = var_106_bool == 0; // 0x294 Not
	if(var_261_bool == 0) goto Label_669; // 0x295 JumpB
	var_262_object = GlobalVars[3]; // 0x296 PushGE
	add(var_93_object); // 0x297 ObjFunc
	var_263_bool = 0; // 0x299 PushB
	BroadcastPlayerDamage(var_93_object, var_263_bool); // 0x29a Func
	goto Label_672; // 0x29c Jump
	
Label_672:
	func_708(); // 0x2a1 NEW_2
	
Label_675:
	var_264_string = "_phase2"; // 0x2a3 PushS
	var_265_int = var_99_string + var_264_string; // 0x2a4 Add
	PlayAnimation(var_265_int); // 0x2a5 Func
	WaitForAnimEnd(); // 0x2a7 Func
	var_266_bool = var_0_bool; // 0x2a9 PushT
	if(var_266_bool == 0) goto Label_684; // 0x2aa JumpB
	return 40; // 0x2ab Return
	
Label_684:
	var_93_object = 0; // 0x2ac SetNull
	var_267_bool = 0; // 0x2ad PushV
	func_713(var_267_bool); // 0x2ae NEW_2
	if(var_267_bool == 0) goto Label_489; // 0x2b0 JumpB
	return 40; // 0x2b1 Return
	
Label_669:
	var_270_bool = 1; // 0x29d PushB
	BroadcastPlayerDamage(var_93_object, var_270_bool); // 0x29e Func
	
Label_614:
	var_96_bool = 0; // 0x266 MovB
	
Label_557:
	irand(var_100_int, var_87_int); // 0x22d Func
	var_271_string = ""; // 0x22f PushV
	func_711(var_271_string); // 0x230 NEW_2
	var_272_string = "attack"; // 0x232 PushS
	var_273_int = var_271_string + var_272_string; // 0x233 Add
	var_274_int = 1; // 0x234 PushI
	var_275_int = var_100_int + var_274_int; // 0x235 Add
	var_99_string = var_273_int + var_275_int; // 0x236 Add2
	var_276_string = ""; // 0x237 PushV
	func_452(var_276_string); // 0x238 NEW_2
	var_277_int = 1; // 0x23a PushI
	var_278_int = var_100_int + var_277_int; // 0x23b Add
	var_279_int = var_276_string + var_278_int; // 0x23c Add
	PlaySound(var_279_int); // 0x23d Func
	
Label_483:
	goto Label_468; // 0x1e3 Jump
}


func_3025(var_416_int, var_417_int, var_418_int, var_419_int)
{
	var_420_bool = var_417_int < var_418_int; // 0xbd2 LT
	if(var_420_bool == 0) goto Label_3030; // 0xbd3 JumpB
	var_416_int = var_418_int; // 0xbd4 Mov
	return 0; // 0xbd5 Return
	
Label_3030:
	var_421_bool = var_417_int > var_419_int; // 0xbd6 GT
	if(var_421_bool == 0) goto Label_3034; // 0xbd7 JumpB
	var_416_int = var_419_int; // 0xbd8 Mov
	return 0; // 0xbd9 Return
	
Label_3034:
	var_416_int = var_417_int; // 0xbda Mov
	return 0; // 0xbdb Return
}


func_3036(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0xbdc PushV
	CreateObjectSet(var_39_object); // 0xbdd Func
	var_37_object = var_39_object; // 0xbdf Mov
	return 2; // 0xbe0 Return
}


func_989(var_332_bool)
{
	var_332_bool = 0; // 0x3dd MovB
	return 0; // 0x3de Return
}


func_991(var_324_string)
{
	var_324_string = ""; // 0x3df MovS
	return 0; // 0x3e0 Return
}


func_993(var_426_bool)
{
	var_427_bool = 0; var_428_bool = 0; // 0x3e1 PushV
	IsShooting(var_428_bool); // 0x3e2 Func
	var_426_bool = var_428_bool; // 0x3e4 Mov
	return 2; // 0x3e5 Return
}


func_3042(var_695_object)
{
	var_696_object = Obj(); var_697_object = Obj(); // 0xbe2 PushV
	CreateObjectVector(var_697_object); // 0xbe3 Func
	var_695_object = var_697_object; // 0xbe5 Mov
	return 2; // 0xbe6 Return
}


func_998(var_491_bool)
{
	var_491_bool = 1; // 0x3e6 MovB
	return 0; // 0x3e7 Return
}


func_1000(var_512_string)
{
	var_512_string = "knife"; // 0x3e8 MovS
	return 0; // 0x3e9 Return
}


func_3048(var_143_float, var_144_cvector, var_145_cvector)
{
	var_146_float = GetByIndex(var_144_cvector, 0); // 0xbe9 PushE
	var_147_float = GetByIndex(var_145_cvector, 0); // 0xbea PushE
	var_148_float = var_146_float * var_147_float; // 0xbeb Mult
	var_149_float = GetByIndex(var_144_cvector, 2); // 0xbec PushE
	var_150_float = GetByIndex(var_145_cvector, 2); // 0xbed PushE
	var_151_float = var_149_float * var_150_float; // 0xbee Mult
	var_143_float = var_148_float + var_151_float; // 0xbef Add2
	return 0; // 0xbf0 Return
}


func_1002(var_530_float, var_531_bool)
{
	var_532_bool = var_531_bool; // 0x3eb Push
	if(var_532_bool == 0) goto Label_1007; // 0x3ec JumpB
	var_530_float = 0.7; // 0x3ed MovF
	goto Label_1008; // 0x3ee Jump
	
Label_1008:
	return 0; // 0x3f0 Return
	
Label_1007:
	var_530_float = 0.4; // 0x3ef MovF
}


func_2032(var_1007_int)
{
	var_1007_int = 5; // 0x7f0 MovI
	return 0; // 0x7f1 Return
}


func_1009(var_535_float)
{
	var_535_float = 0.5; // 0x3f1 MovF
	return 0; // 0x3f2 Return
}


func_2034(var_1012_float)
{
	var_1012_float = 0.03927; // 0x7f2 MovF
	return 0; // 0x7f3 Return
}


func_1011(var_558_int)
{
	var_558_int = 4; // 0x3f3 MovI
	return 0; // 0x3f4 Return
}


func_2036()
{
	var_989_bool = 0; var_990_int = 0; var_991_bool = 0; var_992_int = 0; // 0x7f4 PushV
	var_993_string = "ammo"; // 0x7f5 PushS
	GetWeaponProperty(var_991_bool, var_993_string, var_992_int); // 0x7f6 Func
	var_994_string = "ammo"; // 0x7f8 PushS
	var_995_int = 1; // 0x7f9 PushI
	var_996_int = var_992_int - var_995_int; // 0x7fa Sub
	SetWeaponProperty(var_991_bool, var_994_string, var_996_int); // 0x7fb Func
	func_3771(); // 0x7fe NEW_2
	return 4; // 0x800 Return
}


func_1013(var_543_int)
{
	var_543_int = 0; // 0x3f5 MovI
	return 0; // 0x3f6 Return
}


func_3057(var_152_float, var_153_cvector)
{
	var_154_float = GetByIndex(var_153_cvector, 0); // 0xbf2 PushE
	var_155_float = GetByIndex(var_153_cvector, 0); // 0xbf3 PushE
	var_156_float = var_154_float * var_155_float; // 0xbf4 Mult
	var_157_float = GetByIndex(var_153_cvector, 2); // 0xbf5 PushE
	var_158_float = GetByIndex(var_153_cvector, 2); // 0xbf6 PushE
	var_159_float = var_157_float * var_158_float; // 0xbf7 Mult
	var_160_int = var_156_float + var_159_float; // 0xbf8 Add
	var_152_float = sqrt(var_160_int); // 0xbf9 Sqrt2
	return 0; // 0xbfa Return
}


func_1015(var_552_int)
{
	var_552_int = 1; // 0x3f7 MovI
	return 0; // 0x3f8 Return
}


func_2553(var_17_string)
{
	var_18_string = "rifle"; // 0x9fa PushS
	var_19_bool = var_17_string == var_18_string; // 0x9fb Eq
	if(var_19_bool == 0) goto Label_2563; // 0x9fc JumpB
	TaskCall(7); // 0x9fe TaskCall
	func_1606(); // 0x9ff NEW_2
	TaskReturn(); // 0xa00 TaskReturn
	goto Label_2580; // 0xa02 Jump
	
Label_2580:
	return 0; // 0xa14 Return
	
Label_2563:
	var_45_string = "revolver"; // 0xa03 PushS
	var_46_bool = var_17_string == var_45_string; // 0xa04 Eq
	if(var_46_bool == 0) goto Label_2572; // 0xa05 JumpB
	TaskCall(9); // 0xa07 TaskCall
	func_1972(); // 0xa08 NEW_2
	TaskReturn(); // 0xa09 TaskReturn
	goto Label_2580; // 0xa0b Jump
	
Label_2572:
	var_54_string = "samopal"; // 0xa0c PushS
	var_55_bool = var_17_string == var_54_string; // 0xa0d Eq
	if(var_55_bool == 0) goto Label_2580; // 0xa0e JumpB
	TaskCall(11); // 0xa10 TaskCall
	func_2338(); // 0xa11 NEW_2
	TaskReturn(); // 0xa12 TaskReturn
}


func_3067(var_140_float, var_141_cvector, var_142_cvector)
{
	var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); // 0xbfc PushV
	var_144_cvector = var_141_cvector; // 0xbfd Mov
	var_145_cvector = var_142_cvector; // 0xbfe Mov
	func_3048(var_143_float, var_144_cvector, var_145_cvector); // 0xbff NEW_2
	var_152_float = 0; var_153_cvector = CVector(0,0,0); // 0xc01 PushV
	var_153_cvector = var_141_cvector; // 0xc02 Mov
	func_3057(var_152_float, var_153_cvector); // 0xc03 NEW_2
	var_161_float = 0; var_162_cvector = CVector(0,0,0); // 0xc05 PushV
	var_162_cvector = var_142_cvector; // 0xc06 Mov
	func_3057(var_161_float, var_162_cvector); // 0xc07 NEW_2
	var_163_float = var_152_float * var_161_float; // 0xc09 Mult
	var_140_float = var_143_float / var_143_float; // 0xc0a Div2
	return 0; // 0xc0b Return
}


func_1017(var_528_float, var_529_bool)
{
	var_530_float = 0; var_531_bool = 0; // 0x3fa PushV
	var_531_bool = var_529_bool; // 0x3fb Mov
	func_1002(var_530_float, var_531_bool); // 0x3fc NEW_2
	var_533_float = 0; var_534_float = 0; // 0x3fe PushV
	var_535_float = 0; // 0x3ff PushV
	func_1009(var_535_float); // 0x400 NEW_2
	var_534_float = var_535_float; // 0x401 Mov
	func_3438(var_533_float, var_534_float); // 0x403 NEW_2
	var_528_float = var_530_float * var_533_float; // 0x405 Mult2
	return 0; // 0x406 Return
}


