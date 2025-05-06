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
	func_3683(); // 0x9f NEW_2
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
	func_2868(var_13_string, var_14_float); // 0xae NEW_2
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
	func_3683(); // 0x1b9 NEW_2
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
	func_3683(); // 0x2c1 NEW_2
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
	func_3683(); // 0x3da NEW_2
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
	func_3683(); // 0x4f8 NEW_2
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
	func_3683(); // 0x63d NEW_2
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
	func_3683(); // 0x6bf NEW_2
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
	func_3683(); // 0x82d NEW_2
	return 0; // 0x82f Return
}


task_12_event_32(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; // 0x99f PushV
	var_12_bool = 0; // 0x9a0 MovB
	var_13_bool = var_0_bool == 0; // 0x9a1 Not
	if(var_13_bool == 0) goto Label_2470; // 0x9a2 JumpB
	var_14_bool = var_1_bool; // 0x9a3 PushT
	if(var_14_bool == 0) goto Label_2470; // 0x9a4 JumpB
	var_12_bool = 1; // 0x9a5 MovB
	
Label_2470:
	if(var_12_bool == 0) goto Label_2474; // 0x9a6 JumpB
	var_15_int = -1; // 0x9a7 PushI
	SetHandsItem(var_15_int); // 0x9a8 Func
	
Label_2474:
	return 0; // 0x9aa Return
}


task_13_event_13(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_string, var_14_bool, var_15_bool, var_16_string, var_17_bool)
{
	var_56_bool = 0; var_57_string = ""; var_58_bool = 0; var_59_bool = 0; var_60_string = ""; var_61_bool = 0; // 0xa94 PushV
	IsWeaponHolstered(var_59_bool); // 0xa95 Func
	var_62_bool = var_59_bool == 0; // 0xa97 Not
	if(var_62_bool == 0) goto Label_2732; // 0xa98 JumpB
	func_2833(); // 0xa9a NEW_2
	GetCurrentWeapon(var_60_string); // 0xa9c Func
	var_63_string = ""; // 0xa9e PushV
	var_63_string = var_60_string; // 0xa9f Mov
	func_2495(var_63_string); // 0xaa0 NEW_2
	func_2829(); // 0xaa3 NEW_2
	IsAltShooting(var_61_bool); // 0xaa5 Func
	var_1141_bool = var_61_bool; // 0xaa7 Push
	if(var_1141_bool == 0) goto Label_2732; // 0xaa8 JumpB
	func_2733(); // 0xaaa NEW_2
	
Label_2732:
	return 6; // 0xaac Return
}


task_13_event_36(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_string = ""; var_14_bool = 0; var_15_bool = 0; var_16_string = ""; var_17_bool = 0; // 0xaad PushV
	IsWeaponHolstered(var_15_bool); // 0xaae Func
	var_18_bool = var_15_bool == 0; // 0xab0 Not
	if(var_18_bool == 0) goto Label_2757; // 0xab1 JumpB
	func_2833(); // 0xab3 NEW_2
	GetCurrentWeapon(var_16_string); // 0xab5 Func
	var_20_string = ""; // 0xab7 PushV
	var_20_string = var_16_string; // 0xab8 Mov
	func_2587(var_20_string); // 0xab9 NEW_2
	func_2829(); // 0xabc NEW_2
	IsShooting(var_17_bool); // 0xabe Func
	var_55_bool = var_17_bool; // 0xac0 Push
	if(var_55_bool == 0) goto Label_2757; // 0xac1 JumpB
	func_2708(); // 0xac3 NEW_2
	
Label_2757:
	return 6; // 0xac5 Return
}


task_13_event_15(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_2833(); // 0xac7 NEW_2
	TaskCall(0); // 0xaca TaskCall
	func_0(); // 0xacb NEW_2
	TaskReturn(); // 0xacc TaskReturn
	func_2829(); // 0xacf NEW_2
	return 0; // 0xad1 Return
}


task_13_event_7(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; // 0xad2 PushV
	var_21_bool = 0; var_22_int = 0; // 0xad3 PushV
	var_22_int = var_12_int; // 0xad4 Mov
	func_3478(var_21_bool, var_22_int); // 0xad5 NEW_2
	if(var_21_bool == 0) goto Label_2777; // 0xad7 JumpB
	return 8; // 0xad8 Return
	
Label_2777:
	func_2833(); // 0xada NEW_2
	IsWeaponHolstered(var_17_bool); // 0xadc Func
	var_137_bool = var_17_bool == 0; // 0xade Not
	if(var_137_bool == 0) goto Label_2809; // 0xadf JumpB
	var_18_int = 0; // 0xae0 MovI
	
Label_2785:
	var_138_string = "idle"; // 0xae1 PushS
	var_139_int = 1; // 0xae2 PushI
	var_140_int = var_18_int + var_139_int; // 0xae3 Add
	var_141_int = var_138_string + var_140_int; // 0xae4 Add
	HasAnimation(var_19_bool, var_141_int); // 0xae5 Func
	var_142_bool = var_19_bool == 0; // 0xae7 Not
	if(var_142_bool == 0) goto Label_2794; // 0xae8 JumpB
	goto Label_2797; // 0xae9 Jump
	
Label_2797:
	var_143_int = var_18_int; // 0xaed Push
	if(var_143_int == 0) goto Label_2809; // 0xaee JumpB
	irand(var_20_int, var_18_int); // 0xaef Func
	var_144_string = "idle"; // 0xaf1 PushS
	var_145_int = 1; // 0xaf2 PushI
	var_146_int = var_20_int + var_145_int; // 0xaf3 Add
	var_147_int = var_144_string + var_146_int; // 0xaf4 Add
	PlayAnimation(var_147_int); // 0xaf5 Func
	WaitForAnimEnd(); // 0xaf7 Func
	
Label_2809:
	func_2829(); // 0xafa NEW_2
	return 8; // 0xafc Return
	
Label_2794:
	var_153_int = 1; // 0xaea PushI
	var_18_int = var_18_int + var_153_int; // 0xaeb Add2
	goto Label_2785; // 0xaec Jump
}


task_13_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_string = ""; var_14_string = ""; // 0xafd PushV
	var_15_int = 11; // 0xafe PushI
	var_16_bool = var_12_int == var_15_int; // 0xaff Eq
	if(var_16_bool == 0) goto Label_2824; // 0xb00 JumpB
	GetCurrentWeapon(var_14_string); // 0xb01 Func
	var_17_string = ""; // 0xb03 PushV
	var_17_string = var_14_string; // 0xb04 Mov
	func_2559(var_17_string); // 0xb05 NEW_2
	goto Label_2828; // 0xb07 Jump
	
Label_2828:
	return 2; // 0xb0c Return
	
Label_2824:
	var_63_int = 0; // 0xb08 PushV
	var_63_int = var_12_int; // 0xb09 Mov
	func_3683(); // 0xb0a NEW_2
}


event_44(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3353(); // 0xd34 NEW_2
	func_3301(); // 0xd37 NEW_2
	return 0; // 0xd39 Return
}


event_20(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3342(); // 0xd3b NEW_2
	func_3301(); // 0xd3e NEW_2
	return 0; // 0xd40 Return
}


event_21(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3322(); // 0xd42 NEW_2
	func_3311(); // 0xd45 NEW_2
	return 0; // 0xd47 Return
}


event_45(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3332(); // 0xd49 NEW_2
	return 0; // 0xd4b Return
}


event_7(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_int = 0; // 0xde2 PushV
	var_14_int = var_12_int; // 0xde3 Mov
	func_3478(var_13_bool, var_14_int); // 0xde4 NEW_2
	return 0; // 0xde6 Return
}


event_26(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "die"; // 0xde8 PushS
	var_14_bool = var_12_string == var_13_string; // 0xde9 Eq
	if(var_14_bool == 0) goto Label_3566; // 0xdea JumpB
	func_3280(); // 0xdec NEW_2
	
Label_3566:
	return 0; // 0xdee Return
}


event_16(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_float = 0; var_18_object = Obj(); var_19_object = Obj(); // 0xdef PushV
	var_20_string = "health"; // 0xdf0 PushS
	var_21_bool = var_13_string == var_20_string; // 0xdf1 Eq
	if(var_21_bool == 0) goto Label_3580; // 0xdf2 JumpB
	var_22_string = "health"; // 0xdf3 PushS
	GetProperty(var_22_string, var_17_float); // 0xdf4 Func
	var_23_float = 0.001; // 0xdf6 PushF
	var_24_bool = var_17_float < var_23_float; // 0xdf7 LT
	if(var_24_bool == 0) goto Label_3579; // 0xdf8 JumpB
	SignalDeath(var_12_object); // 0xdf9 Func
	
Label_3579:
	goto Label_3592; // 0xdfb Jump
	
Label_3592:
	CreateStringVector(var_19_object); // 0xe08 Func
	add(var_13_string); // 0xe0a ObjFunc
	var_25_int = 10; // 0xe0c PushI
	SendWorldWndMessage(var_25_int, var_19_object); // 0xe0d Func
	return 6; // 0xe0f Return
	
Label_3580:
	var_26_string = "reputation"; // 0xdfc PushS
	var_27_bool = var_13_string == var_26_string; // 0xdfd Eq
	if(var_27_bool == 0) goto Label_3592; // 0xdfe JumpB
	GetScene(var_18_object); // 0xdff Func
	var_28_string = "prc"; // 0xe01 PushS
	var_29_object = Obj(); // 0xe02 PushV
	func_3007(var_29_object); // 0xe03 NEW_2
	BroadcastMessage(var_28_string, var_29_object, var_18_object); // 0xe05 Func
	var_18_object = 0; // 0xe07 SetNull
}


event_41(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; // 0xe12 PushV
	func_3169(var_13_bool); // 0xe13 NEW_2
	var_17_bool = var_13_bool == 0; // 0xe15 Not
	if(var_17_bool == 0) goto Label_3610; // 0xe16 JumpB
	func_3280(); // 0xe18 NEW_2
	
Label_3610:
	return 0; // 0xe1a Return
}


event_31(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_float, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0xe1b PushV
	var_17_bool = var_12_object == 0; // 0xe1c Not
	if(var_17_bool == 0) goto Label_3615; // 0xe1d JumpB
	return 2; // 0xe1e Return
	
Label_3615:
	var_18_object = GlobalVars[2]; // 0xe1f PushGE
	in(var_16_bool, var_12_object); // 0xe20 ObjFunc
	var_19_bool = var_16_bool; // 0xe22 Push
	if(var_19_bool == 0) goto Label_3625; // 0xe23 JumpB
	var_20_string = "Reputation is not changed for enemy: "; // 0xe24 PushS
	var_21_int = var_20_string + var_12_object; // 0xe25 Add
	Trace(var_21_int); // 0xe26 Func
	return 2; // 0xe28 Return
	
Label_3625:
	var_22_bool = var_14_bool == 0; // 0xe29 Not
	if(var_22_bool == 0) goto Label_3633; // 0xe2a JumpB
	var_23_object = GlobalVars[1]; // 0xe2b PushGE
	in(var_16_bool, var_12_object); // 0xe2c ObjFunc
	var_24_bool = var_16_bool; // 0xe2e Push
	if(var_24_bool == 0) goto Label_3633; // 0xe2f JumpB
	return 2; // 0xe30 Return
	
Label_3633:
	var_25_object = GlobalVars[1]; // 0xe31 PushGE
	add(var_12_object); // 0xe32 ObjFunc
	var_26_bool = 0; var_27_object = Obj(); var_28_float = 0; // 0xe34 PushV
	var_29_object = Obj(); // 0xe35 PushV
	func_3007(var_29_object); // 0xe36 NEW_2
	var_27_object = var_29_object; // 0xe37 Mov
	var_28_float = var_13_float; // 0xe39 Mov
	func_3090(var_26_bool, var_27_object, var_28_float); // 0xe3a NEW_2
	return 2; // 0xe3c Return
}


event_19(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3861(); // 0xe3e NEW_2
	func_3311(); // 0xe41 NEW_2
	return 0; // 0xe43 Return
}


event_17(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	return 0; // 0xe45 Return
}


event_39(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_float)
{
	var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; // 0xe46 PushV
	var_17_float = 770.0; // 0xe47 PushF
	var_18_bool = var_12_float > var_17_float; // 0xe48 GT
	if(var_18_bool == 0) goto Label_3682; // 0xe49 JumpB
	Trace(var_12_float); // 0xe4a Func
	var_19_float = 770.0; // 0xe4c PushF
	var_20_int = var_12_float - var_19_float; // 0xe4d Sub
	var_21_float = 0.0035; // 0xe4e PushF
	var_15_float = var_20_int * var_21_float; // 0xe4f Mult2
	var_22_float = 0; var_23_object = Obj(); var_24_float = 0; var_25_int = 0; // 0xe50 PushV
	var_26_object = Obj(); // 0xe51 PushV
	func_3007(var_26_object); // 0xe52 NEW_2
	var_23_object = var_26_object; // 0xe53 Mov
	var_24_float = var_15_float; // 0xe55 Mov
	var_25_int = 0; // 0xe56 MovI
	func_2897(var_22_float, var_23_object, var_24_float, var_25_int); // 0xe57 NEW_2
	var_16_float = var_22_float; // 0xe58 Mov
	var_95_object = Obj(); // 0xe5a PushV
	func_3007(var_95_object); // 0xe5b NEW_2
	var_96_int = 0; // 0xe5d PushI
	var_97_cvector = CVector(0.0, 0.0, 0.0); // 0xe5e PushVec
	var_98_cvector = CVector(0.0, 0.0, 0.0); // 0xe5f PushVec
	ReportHit(var_95_object, var_96_int, var_16_float, var_15_float, var_97_cvector, var_98_cvector); // 0xe60 Func
	
Label_3682:
	return 4; // 0xe62 Return
}


event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_string = ""; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_int = 0; var_21_bool = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_bool = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; // 0xe63 PushV
	var_41_int = 0; // 0xe64 PushI
	var_42_bool = var_12_int == var_41_int; // 0xe65 Eq
	if(var_42_bool == 0) goto Label_3690; // 0xe66 JumpB
	Inventory(); // 0xe67 Func
	goto Label_3860; // 0xe69 Jump
	
Label_3860:
	return 28; // 0xf14 Return
	
Label_3690:
	var_43_int = 1; // 0xe6a PushI
	var_44_bool = var_12_int == var_43_int; // 0xe6b Eq
	if(var_44_bool == 0) goto Label_3739; // 0xe6c JumpB
	GetMainOutdoorScene(var_27_object); // 0xe6d Func
	GetActiveScene(var_28_object); // 0xe6f Func
	var_45_bool = var_27_object == 0; // 0xe71 NullEq
	if(var_45_bool == 0) goto Label_3703; // 0xe72 JumpB
	var_46_string = "Can't find main outdoor oscene"; // 0xe73 PushS
	Trace(var_46_string); // 0xe74 Func
	return 28; // 0xe76 Return
	
Label_3703:
	GetMap(var_29_object); // 0xe77 ObjFunc
	var_47_bool = var_29_object == 0; // 0xe79 NullEq
	if(var_47_bool == 0) goto Label_3711; // 0xe7a JumpB
	var_48_string = "Can't find map"; // 0xe7b PushS
	Trace(var_48_string); // 0xe7c Func
	return 28; // 0xe7e Return
	
Label_3711:
	var_49_bool = var_27_object == var_28_object; // 0xe7f Eq
	if(var_49_bool == 0) goto Label_3716; // 0xe80 JumpB
	GetPosition(var_30_cvector); // 0xe81 Func
	goto Label_3729; // 0xe83 Jump
	
Label_3729:
	var_50_float = GetByIndex(var_30_cvector, 0); // 0xe91 PushE
	var_51_float = GetByIndex(var_30_cvector, 2); // 0xe92 PushE
	SetMapParams(var_50_float, var_51_float); // 0xe93 ObjFunc
	ShowMap(var_29_object); // 0xe95 Func
	var_29_object = 0; // 0xe97 SetNull
	var_28_object = 0; // 0xe98 SetNull
	var_27_object = 0; // 0xe99 SetNull
	goto Label_3860; // 0xe9a Jump
	
Label_3716:
	GetName(var_31_string); // 0xe84 ObjFunc
	var_52_string = "pt_gmap_"; // 0xe86 PushS
	var_53_int = var_52_string + var_31_string; // 0xe87 Add
	GetLocator(var_53_int, var_32_bool, var_30_cvector, var_33_cvector); // 0xe88 ObjFunc
	var_54_bool = var_32_bool == 0; // 0xe8a Not
	if(var_54_bool == 0) goto Label_3729; // 0xe8b JumpB
	var_55_string = "FIXME: No map locator for scene : "; // 0xe8c PushS
	var_56_int = var_55_string + var_31_string; // 0xe8d Add
	Trace(var_56_int); // 0xe8e Func
	var_30_cvector = CVector(0.0, 0.0, 0.0); // 0xe90 MovV
	
Label_3739:
	var_57_int = 2; // 0xe9b PushI
	var_58_bool = var_12_int == var_57_int; // 0xe9c Eq
	if(var_58_bool == 0) goto Label_3745; // 0xe9d JumpB
	Diary(); // 0xe9e Func
	goto Label_3860; // 0xea0 Jump
	
Label_3745:
	var_59_int = 3; // 0xea1 PushI
	var_60_bool = var_12_int == var_59_int; // 0xea2 Eq
	if(var_60_bool == 0) goto Label_3751; // 0xea3 JumpB
	ShowMessage(); // 0xea4 Func
	goto Label_3860; // 0xea6 Jump
	
Label_3751:
	var_61_int = 4; // 0xea7 PushI
	var_62_bool = var_12_int == var_61_int; // 0xea8 Eq
	if(var_62_bool == 0) goto Label_3764; // 0xea9 JumpB
	ShowPlayerStats(var_34_int); // 0xeaa Func
	var_63_int = 1; // 0xeac PushI
	var_64_bool = var_34_int == var_63_int; // 0xead Eq
	if(var_64_bool == 0) goto Label_3763; // 0xeae JumpB
	var_65_string = "people.xml"; // 0xeaf PushS
	var_66_bool = 1; // 0xeb0 PushB
	ShowWindow(var_65_string, var_66_bool); // 0xeb1 Func
	
Label_3763:
	goto Label_3860; // 0xeb3 Jump
	
Label_3764:
	var_67_int = 5; // 0xeb4 PushI
	var_68_bool = var_12_int == var_67_int; // 0xeb5 Eq
	if(var_68_bool == 0) goto Label_3793; // 0xeb6 JumpB
	IsFlashlightOn(var_35_bool); // 0xeb7 Func
	var_69_bool = var_35_bool; // 0xeb9 Push
	if(var_69_bool == 0) goto Label_3778; // 0xeba JumpB
	var_70_bool = 0; // 0xebb PushB
	SwitchFlashlight(var_70_bool); // 0xebc Func
	var_71_string = "flashlight_off"; // 0xebe PushS
	PlaySound(var_71_string); // 0xebf Func
	goto Label_3792; // 0xec1 Jump
	
Label_3792:
	goto Label_3860; // 0xed0 Jump
	
Label_3778:
	var_72_bool = 0; // 0xec2 PushV
	func_3180(var_72_bool); // 0xec3 NEW_2
	if(var_72_bool == 0) goto Label_3789; // 0xec5 JumpB
	var_76_bool = 1; // 0xec6 PushB
	SwitchFlashlight(var_76_bool); // 0xec7 Func
	var_77_string = "flashlight_on"; // 0xec9 PushS
	PlaySound(var_77_string); // 0xeca Func
	goto Label_3792; // 0xecc Jump
	
Label_3789:
	var_78_string = "flashlight_nofuel"; // 0xecd PushS
	PlaySound(var_78_string); // 0xece Func
	
Label_3793:
	var_79_int = 6; // 0xed1 PushI
	var_80_bool = var_12_int == var_79_int; // 0xed2 Eq
	if(var_80_bool == 0) goto Label_3833; // 0xed3 JumpB
	var_81_int = 0; // 0xed4 PushV
	func_3186(var_81_int); // 0xed5 NEW_2
	var_85_int = 0; // 0xed7 PushI
	var_86_bool = var_81_int != var_85_int; // 0xed8 Neq
	if(var_86_bool == 0) goto Label_3803; // 0xed9 JumpB
	return 28; // 0xeda Return
	
Label_3803:
	IsVisirOn(var_36_bool); // 0xedb Func
	var_87_bool = var_36_bool; // 0xedd Push
	if(var_87_bool == 0) goto Label_3814; // 0xede JumpB
	var_88_bool = 0; // 0xedf PushB
	SwitchVisir(var_88_bool); // 0xee0 Func
	var_89_int = 2; // 0xee2 PushI
	SendWorldWndMessage(var_89_int); // 0xee3 Func
	goto Label_3832; // 0xee5 Jump
	
Label_3832:
	goto Label_3860; // 0xef8 Jump
	
Label_3814:
	var_90_string = "visir"; // 0xee6 PushS
	GetProperty(var_90_string, var_37_int); // 0xee7 Func
	var_91_int = var_37_int; // 0xee9 Push
	if(var_91_int == 0) goto Label_3832; // 0xeea JumpB
	var_92_string = "vcharge"; // 0xeeb PushS
	GetProperty(var_92_string, var_38_int); // 0xeec Func
	var_93_int = 10; // 0xeee PushI
	var_94_bool = var_38_int >= var_93_int; // 0xeef GE
	if(var_94_bool == 0) goto Label_3832; // 0xef0 JumpB
	var_95_bool = 1; // 0xef1 PushB
	SwitchVisir(var_95_bool); // 0xef2 Func
	var_96_int = 1; // 0xef4 PushI
	SendWorldWndMessage(var_96_int); // 0xef5 Func
	goto Label_3832; // 0xef7 Jump
	
Label_3833:
	var_97_int = 7; // 0xef9 PushI
	var_98_bool = var_12_int == var_97_int; // 0xefa Eq
	if(var_98_bool == 0) goto Label_3845; // 0xefb JumpB
	IsOverrideActive(var_39_bool); // 0xefc Func
	var_99_bool = var_39_bool == 0; // 0xefe Not
	if(var_99_bool == 0) goto Label_3844; // 0xeff JumpB
	var_100_string = "people.xml"; // 0xf00 PushS
	var_101_bool = 1; // 0xf01 PushB
	ShowWindow(var_100_string, var_101_bool); // 0xf02 Func
	
Label_3844:
	goto Label_3860; // 0xf04 Jump
	
Label_3845:
	var_102_int = 21; // 0xf05 PushI
	var_103_bool = var_12_int == var_102_int; // 0xf06 Eq
	if(var_103_bool == 0) goto Label_3860; // 0xf07 JumpB
	GetWeaponItem(var_40_int); // 0xf08 Func
	var_104_int = -1; // 0xf0a PushI
	var_105_bool = var_40_int != var_104_int; // 0xf0b Neq
	if(var_105_bool == 0) goto Label_3860; // 0xf0c JumpB
	var_106_bool = 0; // 0xf0d PushB
	var_107_int = 0; // 0xf0e PushI
	SelectItem(var_40_int, var_106_bool, var_107_int); // 0xf0f Func
	var_108_int = -1; // 0xf11 PushI
	SetHandsItem(var_108_int); // 0xf12 Func
}


main(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x9ab PushV
	var_14_string = "player_init"; // 0x9ac PushS
	GetVariable(var_14_string, var_13_int); // 0x9ad Func
	var_15_bool = var_13_int == 0; // 0x9af Not
	if(var_15_bool == 0) goto Label_2487; // 0x9b0 JumpB
	Diary(); // 0x9b1 Func
	var_16_string = "player_init"; // 0x9b3 PushS
	var_17_int = 1; // 0x9b4 PushI
	SetVariable(var_16_string, var_17_int); // 0x9b5 Func
	
Label_2487:
	var_18_object = Obj(); // 0x9b7 PushV
	var_19_object = Obj(); // 0x9b8 PushV
	func_3175(var_19_object); // 0x9b9 NEW_2
	var_18_object = var_19_object; // 0x9ba Mov
	func_2598(var_18_object); // 0x9bc NEW_2
	return 2; // 0x9be Return
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
	func_3007(var_21_object); // 0xb NEW_2
	BroadcastMessage(var_20_string, var_21_object, var_18_object); // 0xd Func
	var_24_string = ""; // 0xf PushV
	var_25_string = "_unholster"; // 0x10 PushS
	var_24_string = var_16_string + var_25_string; // 0x11 Add2
	func_3161(var_24_string); // 0x12 NEW_2
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
	func_3007(var_32_object); // 0x1f NEW_2
	BroadcastMessage(var_31_string, var_32_object, var_18_object); // 0x21 Func
	var_33_string = ""; // 0x23 PushV
	var_34_string = "_holster"; // 0x24 PushS
	var_33_string = var_16_string + var_34_string; // 0x25 Add2
	func_3161(var_33_string); // 0x26 NEW_2
	var_35_string = "holster"; // 0x28 PushS
	PlayAnimation(var_35_string); // 0x29 Func
	WaitForAnimEnd(); // 0x2b Func
	var_36_bool = 1; // 0x2d PushB
	SetWeaponHolster(var_36_bool); // 0x2e Func
}


func_3073(var_140_float, var_141_cvector, var_142_cvector)
{
	var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); // 0xc02 PushV
	var_144_cvector = var_141_cvector; // 0xc03 Mov
	var_145_cvector = var_142_cvector; // 0xc04 Mov
	func_3054(var_143_float, var_144_cvector, var_145_cvector); // 0xc05 NEW_2
	var_152_float = 0; var_153_cvector = CVector(0,0,0); // 0xc07 PushV
	var_153_cvector = var_141_cvector; // 0xc08 Mov
	func_3063(var_152_float, var_153_cvector); // 0xc09 NEW_2
	var_161_float = 0; var_162_cvector = CVector(0,0,0); // 0xc0b PushV
	var_162_cvector = var_142_cvector; // 0xc0c Mov
	func_3063(var_161_float, var_162_cvector); // 0xc0d NEW_2
	var_163_float = var_152_float * var_161_float; // 0xc0f Mult
	var_140_float = var_143_float / var_143_float; // 0xc10 Div2
	return 0; // 0xc11 Return
}


func_2049()
{
	var_1070_bool = 0; var_1071_bool = 0; var_1072_bool = 0; var_1073_bool = 0; // 0x801 PushV
	var_1074_string = "ammo"; // 0x802 PushS
	GetWeaponProperty(var_1072_bool, var_1074_string, var_1073_bool); // 0x803 Func
	var_1075_bool = 0; // 0x805 PushV
	var_1075_bool = 1; // 0x806 MovB
	var_1076_bool = var_1072_bool == 0; // 0x807 Not
	if(var_1076_bool == 0) goto Label_2060; // 0x808 JumpB
	var_1077_bool = var_1073_bool == 0; // 0x809 Not
	if(var_1077_bool == 0) goto Label_2060; // 0x80a JumpB
	var_1075_bool = 0; // 0x80b MovB
	
Label_2060:
	if(var_1075_bool == 0) goto Label_2064; // 0x80c JumpB
	func_2065(); // 0x80e NEW_2
	
Label_2064:
	return 4; // 0x810 Return
}


func_1031()
{
	var_561_int = 0; // 0x407 PushV
	var_562_int = 0; // 0x408 PushV
	func_1011(var_562_int); // 0x409 NEW_2
	var_561_int = var_562_int; // 0x40a Mov
	func_3451(var_561_int); // 0x40c NEW_2
	return 0; // 0x40e Return
}


func_1039(var_0_bool)
{
	var_446_int = 0; var_447_string = ""; var_448_bool = 0; var_449_string = ""; var_450_float = 0; var_451_cvector = CVector(0,0,0); var_452_object = Obj(); var_453_int = 0; var_454_cvector = CVector(0,0,0); var_455_bool = 0; var_456_cvector = CVector(0,0,0); var_457_cvector = CVector(0,0,0); var_458_string = ""; var_459_int = 0; var_460_cvector = CVector(0,0,0); var_461_cvector = CVector(0,0,0); var_462_float = 0; var_463_float = 0; var_464_int = 0; var_465_bool = 0; var_466_int = 0; var_467_string = ""; var_468_bool = 0; var_469_string = ""; var_470_float = 0; var_471_cvector = CVector(0,0,0); var_472_object = Obj(); var_473_int = 0; var_474_cvector = CVector(0,0,0); var_475_bool = 0; var_476_cvector = CVector(0,0,0); var_477_cvector = CVector(0,0,0); var_478_string = ""; var_479_int = 0; var_480_cvector = CVector(0,0,0); var_481_cvector = CVector(0,0,0); var_482_float = 0; var_483_float = 0; var_484_int = 0; var_485_bool = 0; // 0x40f PushV
	var_0_bool = 0; // 0x410 TMovB
	var_466_int = 0; // 0x411 MovI
	
Label_1042:
	var_486_int = 1; // 0x412 PushI
	var_466_int = var_466_int + var_486_int; // 0x413 Add2
	var_487_string = ""; // 0x414 PushV
	func_1275(var_487_string); // 0x415 NEW_2
	var_488_string = "attack"; // 0x417 PushS
	var_489_int = var_487_string + var_488_string; // 0x418 Add
	var_490_int = var_489_int + var_466_int; // 0x419 Add
	var_491_string = "_phase1"; // 0x41a PushS
	var_467_string = var_490_int + var_491_string; // 0x41b Add2
	HasAnimation(var_468_bool, var_467_string); // 0x41c Func
	var_492_bool = var_468_bool == 0; // 0x41e Not
	if(var_492_bool == 0) goto Label_1057; // 0x41f JumpB
	goto Label_1058; // 0x420 Jump
	
Label_1058:
	var_493_int = -1; // 0x422 PushI
	var_466_int = var_466_int + var_493_int; // 0x423 Add2
	var_494_bool = var_466_int == 0; // 0x424 Not
	if(var_494_bool == 0) goto Label_1063; // 0x425 JumpB
	return 40; // 0x426 Return
	
Label_1063:
	GetCurrentWeapon(var_469_string); // 0x427 Func
	GetAttackDistance(var_470_float); // 0x429 Func
	GetDirection(var_471_cvector); // 0x42b Func
	var_475_bool = 0; // 0x42d MovB
	var_495_bool = 0; // 0x42e PushV
	func_998(var_495_bool); // 0x42f NEW_2
	if(var_495_bool == 0) goto Label_1120; // 0x431 JumpB
	GetVictimMaterialExact(var_472_object, var_473_int, var_474_cvector, var_471_cvector, var_470_float); // 0x432 Func
	var_496_bool = 0; // 0x434 PushV
	var_496_bool = 0; // 0x435 MovB
	var_497_bool = 0; // 0x436 PushV
	var_497_bool = 0; // 0x437 MovB
	var_498_bool = 0; // 0x438 PushV
	var_498_bool = 0; // 0x439 MovB
	var_499_bool = var_472_object != 0; // 0x43a NullNeq
	if(var_499_bool == 0) goto Label_1091; // 0x43b JumpB
	var_500_bool = 0; var_501_object = Obj(); var_502_string = ""; // 0x43c PushV
	var_501_object = var_472_object; // 0x43d Mov
	var_502_string = "health"; // 0x43e MovS
	func_2856(var_500_bool, var_501_object, var_502_string); // 0x43f NEW_2
	if(var_500_bool == 0) goto Label_1091; // 0x441 JumpB
	var_498_bool = 1; // 0x442 MovB
	
Label_1091:
	if(var_498_bool == 0) goto Label_1099; // 0x443 JumpB
	var_503_bool = 0; var_504_object = Obj(); // 0x444 PushV
	var_504_object = var_472_object; // 0x445 Mov
	func_2970(var_504_object); // 0x446 NEW_2
	var_505_bool = var_503_bool == 0; // 0x448 Not
	if(var_505_bool == 0) goto Label_1099; // 0x449 JumpB
	var_497_bool = 1; // 0x44a MovB
	
Label_1099:
	if(var_497_bool == 0) goto Label_1104; // 0x44b JumpB
	var_506_int = 4; // 0x44c PushI
	var_507_bool = var_473_int == var_506_int; // 0x44d Eq
	if(var_507_bool == 0) goto Label_1104; // 0x44e JumpB
	var_496_bool = 1; // 0x44f MovB
	
Label_1104:
	if(var_496_bool == 0) goto Label_1120; // 0x450 JumpB
	var_508_string = "GetDirection"; // 0x451 PushS
	var_509_int = 1; // 0x452 PushI
	var_510_bool = IsFuncExist(var_472_object, var_508_string, var_509_int); // 0x453 FuncExist
	if(var_510_bool == 0) goto Label_1120; // 0x454 JumpB
	GetDirection(var_476_cvector); // 0x455 Func
	GetDirection(var_477_cvector); // 0x457 ObjFunc
	var_511_float = 0; var_512_cvector = CVector(0,0,0); var_513_cvector = CVector(0,0,0); // 0x459 PushV
	var_512_cvector = var_476_cvector; // 0x45a Mov
	var_513_cvector = var_477_cvector; // 0x45b Mov
	func_3073(var_511_float, var_512_cvector, var_513_cvector); // 0x45c NEW_2
	var_514_float = 0.5; // 0x45e PushF
	var_475_bool = var_511_float >= var_514_float; // 0x45f GE2
	
Label_1120:
	var_515_bool = var_475_bool; // 0x460 Push
	if(var_515_bool == 0) goto Label_1131; // 0x461 JumpB
	var_478_string = "battack"; // 0x462 MovS
	var_516_string = ""; // 0x463 PushV
	func_1000(var_516_string); // 0x464 NEW_2
	var_517_string = "_back"; // 0x466 PushS
	var_518_int = var_516_string + var_517_string; // 0x467 Add
	PlaySound(var_518_int); // 0x468 Func
	goto Label_1149; // 0x46a Jump
	
Label_1149:
	var_519_bool = 1; // 0x47d PushB
	SetAttackState(var_519_bool); // 0x47e Func
	var_520_string = "_phase1"; // 0x480 PushS
	var_521_int = var_478_string + var_520_string; // 0x481 Add
	PlayAnimation(var_521_int); // 0x482 Func
	WaitForAnimEnd(); // 0x484 Func
	var_522_bool = var_0_bool; // 0x486 PushT
	if(var_522_bool == 0) goto Label_1161; // 0x487 JumpB
	return 40; // 0x488 Return
	
Label_1161:
	var_523_bool = 0; // 0x489 PushB
	SetAttackState(var_523_bool); // 0x48a Func
	GetAttackDistance(var_470_float); // 0x48c Func
	GetDirection(var_471_cvector); // 0x48e Func
	GetVictimMaterialExact(var_472_object, var_473_int, var_474_cvector, var_471_cvector, var_470_float); // 0x490 Func
	var_524_bool = var_472_object != 0; // 0x492 NullNeq
	if(var_524_bool == 0) goto Label_1249; // 0x493 JumpB
	var_525_string = "GetDirection"; // 0x494 PushS
	var_526_int = 1; // 0x495 PushI
	var_527_bool = IsFuncExist(var_472_object, var_525_string, var_526_int); // 0x496 FuncExist
	if(var_527_bool == 0) goto Label_1188; // 0x497 JumpB
	GetDirection(var_480_cvector); // 0x498 Func
	GetDirection(var_481_cvector); // 0x49a ObjFunc
	var_528_float = 0; var_529_cvector = CVector(0,0,0); var_530_cvector = CVector(0,0,0); // 0x49c PushV
	var_529_cvector = var_480_cvector; // 0x49d Mov
	var_530_cvector = var_481_cvector; // 0x49e Mov
	func_3073(var_528_float, var_529_cvector, var_530_cvector); // 0x49f NEW_2
	var_531_float = 0.5; // 0x4a1 PushF
	var_475_bool = var_528_float >= var_531_float; // 0x4a2 GE2
	goto Label_1189; // 0x4a3 Jump
	
Label_1189:
	var_532_float = 0; var_533_bool = 0; // 0x4a5 PushV
	var_533_bool = var_475_bool; // 0x4a6 Mov
	func_1017(var_532_float, var_533_bool); // 0x4a7 NEW_2
	var_482_float = var_532_float; // 0x4a8 Mov
	var_540_int = 4; // 0x4aa PushI
	var_541_bool = var_473_int == var_540_int; // 0x4ab Eq
	if(var_541_bool == 0) goto Label_1199; // 0x4ac JumpB
	var_542_float = 3.0; // 0x4ad PushF
	var_482_float = var_482_float * var_542_float; // 0x4ae Mult2
	
Label_1199:
	var_543_float = 0; var_544_object = Obj(); var_545_float = 0; var_546_int = 0; // 0x4af PushV
	var_544_object = var_472_object; // 0x4b0 Mov
	var_545_float = var_482_float; // 0x4b1 Mov
	var_547_int = 0; // 0x4b2 PushV
	func_1013(var_547_int); // 0x4b3 NEW_2
	var_546_int = var_547_int; // 0x4b4 Mov
	func_2897(var_543_float, var_544_object, var_545_float, var_546_int); // 0x4b6 NEW_2
	var_483_float = var_543_float; // 0x4b7 Mov
	var_548_float = var_483_float; // 0x4b9 Push
	if(var_548_float == 0) goto Label_1246; // 0x4ba JumpB
	var_549_int = 2; // 0x4bb PushI
	irand(var_484_int, var_549_int); // 0x4bc Func
	var_550_string = ""; // 0x4be PushV
	func_1000(var_550_string); // 0x4bf NEW_2
	var_551_string = "_hit"; // 0x4c1 PushS
	var_552_int = var_550_string + var_551_string; // 0x4c2 Add
	var_553_int = 1; // 0x4c3 PushI
	var_554_int = var_484_int + var_553_int; // 0x4c4 Add
	var_555_int = var_552_int + var_554_int; // 0x4c5 Add
	PlaySound(var_555_int); // 0x4c6 Func
	ReportAttack(var_472_object); // 0x4c8 Func
	var_556_int = 0; // 0x4ca PushV
	func_1015(var_556_int); // 0x4cb NEW_2
	ReportHit(var_472_object, var_556_int, var_483_float, var_482_float, var_474_cvector, var_471_cvector); // 0x4cd Func
	var_557_object = GlobalVars[2]; // 0x4cf PushGE
	in(var_485_bool, var_472_object); // 0x4d0 ObjFunc
	var_558_bool = var_485_bool == 0; // 0x4d2 Not
	if(var_558_bool == 0) goto Label_1243; // 0x4d3 JumpB
	var_559_object = GlobalVars[3]; // 0x4d4 PushGE
	add(var_472_object); // 0x4d5 ObjFunc
	var_560_bool = 0; // 0x4d7 PushB
	BroadcastPlayerDamage(var_472_object, var_560_bool); // 0x4d8 Func
	goto Label_1246; // 0x4da Jump
	
Label_1246:
	func_1031(); // 0x4df NEW_2
	
Label_1249:
	var_563_string = "_phase2"; // 0x4e1 PushS
	var_564_int = var_478_string + var_563_string; // 0x4e2 Add
	PlayAnimation(var_564_int); // 0x4e3 Func
	WaitForAnimEnd(); // 0x4e5 Func
	var_565_bool = var_0_bool; // 0x4e7 PushT
	if(var_565_bool == 0) goto Label_1258; // 0x4e8 JumpB
	return 40; // 0x4e9 Return
	
Label_1258:
	var_472_object = 0; // 0x4ea SetNull
	var_566_bool = 0; // 0x4eb PushV
	func_1277(var_566_bool); // 0x4ec NEW_2
	if(var_566_bool == 0) goto Label_1063; // 0x4ee JumpB
	return 40; // 0x4ef Return
	
Label_1243:
	var_569_bool = 1; // 0x4db PushB
	BroadcastPlayerDamage(var_472_object, var_569_bool); // 0x4dc Func
	
Label_1188:
	var_475_bool = 0; // 0x4a4 MovB
	
Label_1131:
	irand(var_479_int, var_466_int); // 0x46b Func
	var_570_string = ""; // 0x46d PushV
	func_1275(var_570_string); // 0x46e NEW_2
	var_571_string = "attack"; // 0x470 PushS
	var_572_int = var_570_string + var_571_string; // 0x471 Add
	var_573_int = 1; // 0x472 PushI
	var_574_int = var_479_int + var_573_int; // 0x473 Add
	var_478_string = var_572_int + var_574_int; // 0x474 Add2
	var_575_string = ""; // 0x475 PushV
	func_1000(var_575_string); // 0x476 NEW_2
	var_576_int = 1; // 0x478 PushI
	var_577_int = var_479_int + var_576_int; // 0x479 Add
	var_578_int = var_575_string + var_577_int; // 0x47a Add
	PlaySound(var_578_int); // 0x47b Func
	
Label_1057:
	goto Label_1042; // 0x421 Jump
}


func_2065()
{
	var_1078_bool = 0; var_1079_string = ""; var_1080_int = 0; // 0x811 PushV
	var_1079_string = "samopal_ammo"; // 0x812 MovS
	var_1080_int = 2; // 0x813 MovI
	func_3404(var_1078_bool, var_1079_string, var_1080_int); // 0x814 NEW_2
	if(var_1078_bool == 0) goto Label_2083; // 0x816 JumpB
	var_1081_string = ""; // 0x817 PushV
	func_2096(var_1081_string); // 0x818 NEW_2
	var_1082_string = "_reload"; // 0x81a PushS
	var_1083_int = var_1081_string + var_1082_string; // 0x81b Add
	PlaySound(var_1083_int); // 0x81c Func
	var_1084_string = "reload"; // 0x81e PushS
	PlayAnimation(var_1084_string); // 0x81f Func
	WaitForAnimEnd(); // 0x821 Func
	
Label_2083:
	return 0; // 0x823 Return
}


func_3090(var_26_bool, var_27_object, var_28_float)
{
	var_32_bool = var_27_object == 0; // 0xc13 Not
	if(var_32_bool == 0) goto Label_3095; // 0xc14 JumpB
	var_26_bool = 0; // 0xc15 MovB
	return 0; // 0xc16 Return
	
Label_3095:
	var_33_int = 0; // 0xc17 PushI
	var_34_bool = var_28_float > var_33_int; // 0xc18 GT
	if(var_34_bool == 0) goto Label_3102; // 0xc19 JumpB
	var_35_int = 8; // 0xc1a PushI
	SendWorldWndMessage(var_35_int); // 0xc1b Func
	goto Label_3111; // 0xc1d Jump
	
Label_3111:
	var_36_float = 0; // 0xc27 PushV
	var_36_float = var_28_float; // 0xc28 Mov
	func_3142(var_36_float); // 0xc29 NEW_2
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; var_43_float = 0; var_44_float = 0; var_45_float = 0; // 0xc2b PushV
	var_41_object = var_27_object; // 0xc2c Mov
	var_42_string = "reputation"; // 0xc2d MovS
	var_43_float = var_28_float; // 0xc2e Mov
	var_44_float = 0; // 0xc2f MovI
	var_45_float = 1; // 0xc30 MovI
	func_2875(var_40_bool, var_41_object, var_42_string, var_43_float, var_44_float, var_45_float); // 0xc31 NEW_2
	var_26_bool = 1; // 0xc33 MovB
	return 0; // 0xc34 Return
	
Label_3102:
	var_64_int = 0; // 0xc1e PushI
	var_65_bool = var_28_float < var_64_int; // 0xc1f LT
	if(var_65_bool == 0) goto Label_3109; // 0xc20 JumpB
	var_66_int = 9; // 0xc21 PushI
	SendWorldWndMessage(var_66_int); // 0xc22 Func
	goto Label_3111; // 0xc24 Jump
	
Label_3109:
	var_26_bool = 0; // 0xc25 MovB
	return 0; // 0xc26 Return
}


func_2587(var_20_string)
{
	var_21_string = "empty"; // 0xa1c PushS
	var_22_bool = var_20_string == var_21_string; // 0xa1d Eq
	if(var_22_bool == 0) goto Label_2597; // 0xa1e JumpB
	var_23_float = 0; // 0xa1f PushV
	var_23_float = 0.25; // 0xa20 MovF
	TaskCall(1); // 0xa21 TaskCall
	func_50(var_24_bool, var_25_bool, var_26_float, var_23_float); // 0xa22 NEW_2
	TaskReturn(); // 0xa23 TaskReturn
	
Label_2597:
	return 0; // 0xa25 Return
}


func_2598(var_18_object)
{
	var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_string = ""; var_26_float = 0; var_27_bool = 0; var_28_bool = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_string = ""; var_33_float = 0; var_34_bool = 0; var_35_bool = 0; // 0xa26 PushV
	var_36_object = GlobalVars[1]; // 0xa27 PushGE
	var_37_object = Obj(); // 0xa28 PushV
	func_3042(var_37_object); // 0xa29 NEW_2
	var_36_object = var_37_object; // 0xa2a Mov
	GlobalVars[1] = var_36_object; // 0xa2c PopGE
	var_40_object = GlobalVars[2]; // 0xa2d PushGE
	var_41_object = Obj(); // 0xa2e PushV
	func_3042(var_41_object); // 0xa2f NEW_2
	var_40_object = var_41_object; // 0xa30 Mov
	GlobalVars[2] = var_40_object; // 0xa32 PopGE
	var_42_object = GlobalVars[3]; // 0xa33 PushGE
	var_43_object = Obj(); // 0xa34 PushV
	func_3042(var_43_object); // 0xa35 NEW_2
	var_42_object = var_43_object; // 0xa36 Mov
	GlobalVars[3] = var_42_object; // 0xa38 PopGE
	var_44_string = "effects"; // 0xa39 PushS
	HasProperty(var_44_string, var_29_bool); // 0xa3a Func
	var_45_bool = var_29_bool == 0; // 0xa3c Not
	if(var_45_bool == 0) goto Label_2667; // 0xa3d JumpB
	var_46_string = "effects"; // 0xa3e PushS
	var_47_bool = 1; // 0xa3f PushB
	SetProperty(var_46_string, var_47_bool); // 0xa40 Func
	var_48_string = "player_disease.bin"; // 0xa42 PushS
	ApplyEffect(var_48_string); // 0xa43 Func
	var_49_string = "player_stat.bin"; // 0xa45 PushS
	ApplyEffect(var_49_string); // 0xa46 Func
	var_50_string = "player_hit.bin"; // 0xa48 PushS
	ApplyEffect(var_50_string); // 0xa49 Func
	var_51_string = "player_head.bin"; // 0xa4b PushS
	ApplyEffect(var_51_string); // 0xa4c Func
	var_52_string = "player_flashlight.bin"; // 0xa4e PushS
	ApplyEffect(var_52_string); // 0xa4f Func
	var_53_string = "player_visir.bin"; // 0xa51 PushS
	ApplyEffect(var_53_string); // 0xa52 Func
	var_54_string = "player_vis.bin"; // 0xa54 PushS
	ApplyEffect(var_54_string); // 0xa55 Func
	var_55_string = "player_eyes_height.bin"; // 0xa57 PushS
	ApplyEffect(var_55_string); // 0xa58 Func
	var_56_string = "player_gifts.bin"; // 0xa5a PushS
	ApplyEffect(var_56_string); // 0xa5b Func
	var_57_object = var_18_object; // 0xa5d Push
	if(var_57_object == 0) goto Label_2667; // 0xa5e JumpB
	size(var_30_int); // 0xa5f ObjFunc
	var_31_int = 0; // 0xa61 MovI
	
Label_2658:
	var_58_bool = var_31_int < var_30_int; // 0xa62 LT
	if(var_58_bool == 0) goto Label_2667; // 0xa63 JumpB
	get(var_32_string, var_31_int); // 0xa64 ObjFunc
	ApplyEffect(var_32_string); // 0xa66 Func
	var_59_int = 1; // 0xa68 PushI
	var_31_int = var_31_int + var_59_int; // 0xa69 Add2
	goto Label_2658; // 0xa6a Jump
	
Label_2667:
	func_2829(); // 0xa6c NEW_2
	var_65_string = "health"; // 0xa6e PushS
	GetProperty(var_65_string, var_33_float); // 0xa6f Func
	var_66_bool = 0; // 0xa71 PushV
	var_66_bool = 0; // 0xa72 MovB
	var_67_int = 0; // 0xa73 PushI
	var_68_bool = var_33_float <= var_67_int; // 0xa74 LE
	if(var_68_bool == 0) goto Label_2684; // 0xa75 JumpB
	var_69_bool = 0; // 0xa76 PushV
	func_3169(var_69_bool); // 0xa77 NEW_2
	var_73_bool = var_69_bool == 0; // 0xa79 Not
	if(var_73_bool == 0) goto Label_2684; // 0xa7a JumpB
	var_66_bool = 1; // 0xa7b MovB
	
Label_2684:
	if(var_66_bool == 0) goto Label_2689; // 0xa7c JumpB
	func_3280(); // 0xa7e NEW_2
	return 14; // 0xa80 Return
	
Label_2689:
	IsWeaponHolstered(var_34_bool); // 0xa81 Func
	var_89_bool = var_34_bool == 0; // 0xa83 Not
	if(var_89_bool == 0) goto Label_2703; // 0xa84 JumpB
	IsWalking(var_35_bool); // 0xa85 Func
	var_90_bool = var_35_bool; // 0xa87 Push
	if(var_90_bool == 0) goto Label_2703; // 0xa88 JumpB
	var_91_string = "walk"; // 0xa89 PushS
	PlayAnimation(var_91_string); // 0xa8a Func
	WaitForAnimEnd(); // 0xa8c Func
	goto Label_2706; // 0xa8e Jump
	
Label_2706:
	goto Label_2689; // 0xa92 Jump
	
Label_2703:
	var_92_float = 0.1; // 0xa8f PushF
	Sleep(var_92_float); // 0xa90 Func
}


func_2096(var_987_string)
{
	var_987_string = "samopal"; // 0x830 MovS
	return 0; // 0x831 Return
}


func_2098(var_1012_float)
{
	var_1012_float = 1.8; // 0x832 MovF
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


func_2100(var_1034_int)
{
	var_1034_int = 1; // 0x834 MovI
	return 0; // 0x835 Return
}


func_3125(var_86_float)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0xc35 PushV
	CreateFloatVector(var_88_object); // 0xc36 Func
	add(var_86_float); // 0xc38 ObjFunc
	var_89_int = 0; // 0xc3a PushI
	var_90_bool = var_86_float < var_89_int; // 0xc3b LT
	if(var_90_bool == 0) goto Label_3137; // 0xc3c JumpB
	var_91_float = 0.7; // 0xc3d PushF
	var_92_int = 500; // 0xc3e PushI
	RumblePlay(var_91_float, var_92_int); // 0xc3f Func
	
Label_3137:
	var_93_int = 15; // 0xc41 PushI
	SendWorldWndMessage(var_93_int, var_88_object); // 0xc42 Func
	return 2; // 0xc44 Return
}


func_2102(var_1036_int)
{
	var_1036_int = 2; // 0x836 MovI
	return 0; // 0x837 Return
}


func_2104(var_1009_int)
{
	var_1009_int = 2; // 0x838 MovI
	return 0; // 0x839 Return
}


func_2106(var_0_bool)
{
	var_926_string = ""; var_927_string = ""; var_928_int = 0; var_929_bool = 0; var_930_float = 0; var_931_float = 0; var_932_cvector = CVector(0,0,0); var_933_object = Obj(); var_934_int = 0; var_935_cvector = CVector(0,0,0); var_936_object = Obj(); var_937_int = 0; var_938_cvector = CVector(0,0,0); var_939_float = 0; var_940_float = 0; var_941_float = 0; var_942_object = Obj(); var_943_float = 0; var_944_object = Obj(); var_945_object = Obj(); var_946_int = 0; var_947_int = 0; var_948_object = Obj(); var_949_bool = 0; var_950_string = ""; var_951_string = ""; var_952_int = 0; var_953_bool = 0; var_954_float = 0; var_955_float = 0; var_956_cvector = CVector(0,0,0); var_957_object = Obj(); var_958_int = 0; var_959_cvector = CVector(0,0,0); var_960_object = Obj(); var_961_int = 0; var_962_cvector = CVector(0,0,0); var_963_float = 0; var_964_float = 0; var_965_float = 0; var_966_object = Obj(); var_967_float = 0; var_968_object = Obj(); var_969_object = Obj(); var_970_int = 0; var_971_int = 0; var_972_object = Obj(); var_973_bool = 0; // 0x83a PushV
	var_0_bool = 0; // 0x83b TMovB
	
Label_2108:
	var_974_bool = 0; // 0x83c PushV
	func_1997(var_974_bool); // 0x83d NEW_2
	var_991_bool = var_974_bool == 0; // 0x83f Not
	if(var_991_bool == 0) goto Label_2114; // 0x840 JumpB
	goto Label_2329; // 0x841 Jump
	
Label_2329:
	return 48; // 0x919 Return
	
Label_2114:
	GetCurrentWeapon(var_950_string); // 0x842 Func
	var_951_string = "attack1"; // 0x844 MovS
	var_992_bool = 1; // 0x845 PushB
	SetAttackState(var_992_bool); // 0x846 Func
	func_2036(); // 0x849 NEW_2
	var_1001_string = "_phase1"; // 0x84b PushS
	var_1002_int = var_951_string + var_1001_string; // 0x84c Add
	PlayAnimation(var_1002_int); // 0x84d Func
	WaitForAnimEnd(); // 0x84f Func
	var_1003_bool = var_0_bool; // 0x851 PushT
	if(var_1003_bool == 0) goto Label_2132; // 0x852 JumpB
	return 48; // 0x853 Return
	
Label_2132:
	var_1004_string = "shot"; // 0x854 PushS
	TriggerWeapon(var_1004_string); // 0x855 Func
	var_1005_string = ""; // 0x857 PushV
	func_2096(var_1005_string); // 0x858 NEW_2
	var_1006_string = "_shot"; // 0x85a PushS
	var_1007_int = var_1005_string + var_1006_string; // 0x85b Add
	PlaySound(var_1007_int); // 0x85c Func
	var_1008_int = 0; // 0x85e PushV
	var_1009_int = 0; // 0x85f PushV
	func_2104(var_1009_int); // 0x860 NEW_2
	var_1008_int = var_1009_int; // 0x861 Mov
	func_3451(var_1008_int); // 0x863 NEW_2
	func_2330(); // 0x866 NEW_2
	var_1010_bool = 0; // 0x868 PushB
	SetAttackState(var_1010_bool); // 0x869 Func
	var_1011_int = 0; // 0x86b PushV
	func_2032(var_1011_int); // 0x86c NEW_2
	var_952_int = var_1011_int; // 0x86d Mov
	var_953_bool = 0; // 0x86f MovB
	var_1012_float = 0; // 0x870 PushV
	func_2098(var_1012_float); // 0x871 NEW_2
	var_954_float = var_1012_float / var_1012_float; // 0x873 Div2
	var_1013_float = 1.0; // 0x874 PushF
	var_1014_float = 1.5; // 0x875 PushF
	var_1015_float = 1.0; // 0x876 PushF
	var_1016_float = 0; // 0x877 PushV
	func_2034(var_1016_float); // 0x878 NEW_2
	var_1017_float = var_1015_float / var_1016_float; // 0x87a Div
	var_1018_float = 1.5; // 0x87b PushF
	var_1019_int = var_1017_float - var_1018_float; // 0x87c Sub
	var_1020_float = 0; // 0x87d PushV
	func_3440(var_1020_float); // 0x87e NEW_2
	var_1021_float = var_1019_int * var_1020_float; // 0x880 Mult
	var_1022_int = var_1014_float + var_1021_float; // 0x881 Add
	var_955_float = var_1013_float / var_1013_float; // 0x882 Div2
	GetDirection(var_956_cvector); // 0x883 Func
	var_1023_object = Obj(); // 0x885 PushV
	func_3048(var_1023_object); // 0x886 NEW_2
	var_957_object = var_1023_object; // 0x887 Mov
	var_958_int = 0; // 0x889 MovI
	
Label_2186:
	var_1024_bool = var_958_int < var_952_int; // 0x88a LT
	if(var_1024_bool == 0) goto Label_2284; // 0x88b JumpB
	RandVecCone3D(var_959_cvector, var_956_cvector, var_955_float); // 0x88c Func
	var_1025_int = 10000; // 0x88e PushI
	GetVictimMaterialExact(var_960_object, var_961_int, var_962_cvector, var_959_cvector, var_1025_int); // 0x88f Func
	var_1026_object = var_960_object; // 0x891 Push
	if(var_1026_object == 0) goto Label_2280; // 0x892 JumpB
	var_963_float = var_954_float; // 0x893 Mov
	var_1027_int = 4; // 0x894 PushI
	var_1028_bool = var_961_int == var_1027_int; // 0x895 Eq
	if(var_1028_bool == 0) goto Label_2201; // 0x896 JumpB
	var_1029_float = 3.0; // 0x897 PushF
	var_963_float = var_963_float * var_1029_float; // 0x898 Mult2
	
Label_2201:
	var_1030_float = 0; var_1031_object = Obj(); var_1032_float = 0; var_1033_int = 0; // 0x899 PushV
	var_1031_object = var_960_object; // 0x89a Mov
	var_1032_float = var_963_float; // 0x89b Mov
	var_1034_int = 0; // 0x89c PushV
	func_2100(var_1034_int); // 0x89d NEW_2
	var_1033_int = var_1034_int; // 0x89e Mov
	func_2897(var_1030_float, var_1031_object, var_1032_float, var_1033_int); // 0x8a0 NEW_2
	var_964_float = var_1030_float; // 0x8a1 Mov
	var_1035_float = var_964_float; // 0x8a3 Push
	if(var_1035_float == 0) goto Label_2262; // 0x8a4 JumpB
	add(var_960_object); // 0x8a5 ObjFunc
	var_1036_int = 0; // 0x8a7 PushV
	func_2102(var_1036_int); // 0x8a8 NEW_2
	ReportHit(var_960_object, var_1036_int, var_964_float, var_963_float, var_962_cvector, var_959_cvector); // 0x8aa Func
	var_1037_bool = 0; // 0x8ac PushV
	func_2331(var_1037_bool); // 0x8ad NEW_2
	if(var_1037_bool == 0) goto Label_2261; // 0x8af JumpB
	var_1038_string = "health"; // 0x8b0 PushS
	GetProperty(var_1038_string, var_965_float); // 0x8b1 ObjFunc
	var_1039_bool = var_965_float == 0; // 0x8b3 Not
	if(var_1039_bool == 0) goto Label_2261; // 0x8b4 JumpB
	var_1040_int = 10000; // 0x8b5 PushI
	GetVictimMaterialExact(var_966_object, var_961_int, var_962_cvector, var_959_cvector, var_1040_int, var_960_object); // 0x8b6 Func
	var_1041_bool = 0; // 0x8b8 PushV
	var_1041_bool = 0; // 0x8b9 MovB
	var_1042_object = var_966_object; // 0x8ba Push
	if(var_1042_object == 0) goto Label_2239; // 0x8bb JumpB
	var_1043_bool = var_966_object != var_960_object; // 0x8bc Neq
	if(var_1043_bool == 0) goto Label_2239; // 0x8bd JumpB
	var_1041_bool = 1; // 0x8be MovB
	
Label_2239:
	if(var_1041_bool == 0) goto Label_2260; // 0x8bf JumpB
	var_1044_float = 0; var_1045_object = Obj(); var_1046_float = 0; var_1047_int = 0; // 0x8c0 PushV
	var_1045_object = var_966_object; // 0x8c1 Mov
	var_1048_float = 0.75; // 0x8c2 PushF
	var_1046_float = var_963_float * var_1048_float; // 0x8c3 Mult2
	var_1049_int = 0; // 0x8c4 PushV
	func_2100(var_1049_int); // 0x8c5 NEW_2
	var_1047_int = var_1049_int; // 0x8c6 Mov
	func_2897(var_1044_float, var_1045_object, var_1046_float, var_1047_int); // 0x8c8 NEW_2
	var_967_float = var_1044_float; // 0x8c9 Mov
	var_1050_float = var_967_float; // 0x8cb Push
	if(var_1050_float == 0) goto Label_2260; // 0x8cc JumpB
	add(var_966_object); // 0x8cd ObjFunc
	var_1051_int = 0; // 0x8cf PushV
	func_2102(var_1051_int); // 0x8d0 NEW_2
	ReportHit(var_966_object, var_1051_int, var_967_float, var_963_float, var_962_cvector, var_959_cvector); // 0x8d2 Func
	
Label_2260:
	var_966_object = 0; // 0x8d4 SetNull
	
Label_2261:
	goto Label_2280; // 0x8d5 Jump
	
Label_2280:
	var_960_object = 0; // 0x8e8 SetNull
	var_1052_int = 1; // 0x8e9 PushI
	var_958_int = var_958_int + var_1052_int; // 0x8ea Add2
	goto Label_2186; // 0x8eb Jump
	
Label_2262:
	var_1053_int = -1; // 0x8d6 PushI
	var_1054_bool = var_961_int != var_1053_int; // 0x8d7 Neq
	if(var_1054_bool == 0) goto Label_2280; // 0x8d8 JumpB
	var_1055_bool = var_953_bool == 0; // 0x8d9 Not
	if(var_1055_bool == 0) goto Label_2280; // 0x8da JumpB
	GetScene(var_968_object); // 0x8db Func
	var_1056_string = "scripted"; // 0x8dd PushS
	var_1057_cvector = CVector(0.0, 0.0, 1.0); // 0x8de PushVec
	var_1058_string = "richochet.xml"; // 0x8df PushS
	AddActorByType(var_969_object, var_1056_string, var_968_object, var_962_cvector, var_1057_cvector, var_1058_string); // 0x8e0 Func
	var_1059_string = "Material"; // 0x8e2 PushS
	SetScriptProperty(var_1059_string, var_961_int); // 0x8e3 ObjFunc
	var_953_bool = 1; // 0x8e5 MovB
	var_969_object = 0; // 0x8e6 SetNull
	var_968_object = 0; // 0x8e7 SetNull
	
Label_2284:
	size(var_970_int); // 0x8ec ObjFunc
	var_971_int = 0; // 0x8ee MovI
	
Label_2287:
	var_1060_bool = var_971_int < var_970_int; // 0x8ef LT
	if(var_1060_bool == 0) goto Label_2312; // 0x8f0 JumpB
	get(var_972_object, var_971_int); // 0x8f1 ObjFunc
	ReportAttack(var_972_object); // 0x8f3 Func
	var_1061_object = GlobalVars[2]; // 0x8f5 PushGE
	in(var_973_bool, var_972_object); // 0x8f6 ObjFunc
	var_1062_bool = var_973_bool == 0; // 0x8f8 Not
	if(var_1062_bool == 0) goto Label_2305; // 0x8f9 JumpB
	var_1063_object = GlobalVars[3]; // 0x8fa PushGE
	add(var_972_object); // 0x8fb ObjFunc
	var_1064_bool = 0; // 0x8fd PushB
	BroadcastPlayerDamage(var_972_object, var_1064_bool); // 0x8fe Func
	goto Label_2308; // 0x900 Jump
	
Label_2308:
	var_972_object = 0; // 0x904 SetNull
	var_1065_int = 1; // 0x905 PushI
	var_971_int = var_971_int + var_1065_int; // 0x906 Add2
	goto Label_2287; // 0x907 Jump
	
Label_2305:
	var_1066_bool = 1; // 0x901 PushB
	BroadcastPlayerDamage(var_972_object, var_1066_bool); // 0x902 Func
	
Label_2312:
	var_1067_string = "_phase2"; // 0x908 PushS
	var_1068_int = var_951_string + var_1067_string; // 0x909 Add
	PlayAnimation(var_1068_int); // 0x90a Func
	WaitForAnimEnd(); // 0x90c Func
	var_1069_bool = var_0_bool; // 0x90e PushT
	if(var_1069_bool == 0) goto Label_2321; // 0x90f JumpB
	return 48; // 0x910 Return
	
Label_2321:
	func_2049(); // 0x912 NEW_2
	var_957_object = 0; // 0x914 SetNull
	var_1085_bool = 0; // 0x915 PushV
	func_2333(var_1085_bool); // 0x916 NEW_2
	if(var_1085_bool == 0) goto Label_2108; // 0x918 JumpB
}


func_1600()
{
	return 0; // 0x640 Return
}


func_1601(var_755_bool)
{
	var_756_bool = 0; var_757_bool = 0; // 0x641 PushV
	IsShooting(var_757_bool); // 0x642 Func
	var_755_bool = var_757_bool; // 0x644 Mov
	return 2; // 0x645 Return
}


func_1606()
{
	func_1630(); // 0x647 NEW_2
	var_20_bool = 0; var_21_string = ""; var_22_int = 0; // 0x649 PushV
	var_21_string = "rifle_ammo"; // 0x64a MovS
	var_22_int = 1; // 0x64b MovI
	func_3404(var_20_bool, var_21_string, var_22_int); // 0x64c NEW_2
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


func_3142(var_36_float)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0xc46 PushV
	CreateFloatVector(var_38_object); // 0xc47 Func
	add(var_36_float); // 0xc49 ObjFunc
	var_39_int = 16; // 0xc4b PushI
	SendWorldWndMessage(var_39_int, var_38_object); // 0xc4c Func
	return 2; // 0xc4e Return
}


func_3152(var_78_int)
{
	var_79_float = 0; var_80_float = 0; // 0xc50 PushV
	GetGameTime(var_80_float); // 0xc51 Func
	var_81_int = 1; // 0xc53 PushI
	var_82_int = 0; // 0xc54 PushV
	var_83_int = 24; // 0xc55 PushI
	var_82_int = var_80_float / var_80_float; // 0xc56 Div2
	var_78_int = var_81_int + var_82_int; // 0xc57 Add2
	return 2; // 0xc58 Return
}


func_3161(var_24_string)
{
	var_26_bool = 0; var_27_bool = 0; // 0xc59 PushV
	IsExistingSound(var_27_bool, var_24_string); // 0xc5a Func
	var_28_bool = var_27_bool; // 0xc5c Push
	if(var_28_bool == 0) goto Label_3168; // 0xc5d JumpB
	PlaySound(var_24_string); // 0xc5e Func
	
Label_3168:
	return 2; // 0xc60 Return
}


func_1628(var_41_string)
{
	var_41_string = "rifle"; // 0x65c MovS
	return 0; // 0x65d Return
}


func_1630()
{
	return 0; // 0x65e Return
}


func_1631(var_809_bool)
{
	var_810_bool = 0; var_811_bool = 0; var_812_bool = 0; var_813_bool = 0; // 0x65f PushV
	var_814_string = "ammo"; // 0x660 PushS
	GetWeaponProperty(var_812_bool, var_814_string, var_813_bool); // 0x661 Func
	var_815_bool = 0; // 0x663 PushV
	var_815_bool = 1; // 0x664 MovB
	var_816_bool = var_812_bool == 0; // 0x665 Not
	if(var_816_bool == 0) goto Label_1642; // 0x666 JumpB
	var_817_bool = var_813_bool == 0; // 0x667 Not
	if(var_817_bool == 0) goto Label_1642; // 0x668 JumpB
	var_815_bool = 0; // 0x669 MovB
	
Label_1642:
	if(var_815_bool == 0) goto Label_1664; // 0x66a JumpB
	var_818_bool = 0; var_819_string = ""; var_820_int = 0; // 0x66b PushV
	var_819_string = "revolver_ammo"; // 0x66c MovS
	var_820_int = 6; // 0x66d MovI
	func_3404(var_818_bool, var_819_string, var_820_int); // 0x66e NEW_2
	var_821_bool = var_818_bool == 0; // 0x670 Not
	if(var_821_bool == 0) goto Label_1664; // 0x671 JumpB
	var_822_string = ""; // 0x672 PushV
	func_1730(var_822_string); // 0x673 NEW_2
	var_823_string = "_noammo"; // 0x675 PushS
	var_824_int = var_822_string + var_823_string; // 0x676 Add
	PlaySound(var_824_int); // 0x677 Func
	var_825_string = "noammo"; // 0x679 PushS
	PlayAnimation(var_825_string); // 0x67a Func
	WaitForAnimEnd(); // 0x67c Func
	var_809_bool = 0; // 0x67e MovB
	return 4; // 0x67f Return
	
Label_1664:
	var_809_bool = 1; // 0x680 MovB
	return 4; // 0x681 Return
}


func_3169(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0; // 0xc61 PushV
	var_72_string = "god_mode"; // 0xc62 PushS
	GetVariable(var_72_string, var_71_bool); // 0xc63 Func
	var_69_bool = var_71_bool; // 0xc65 Mov
	return 2; // 0xc66 Return
}


func_102(var_2_float)
{
	var_29_string = ""; var_30_float = 0; // 0x66 PushV
	var_29_string = "armor_phys"; // 0x67 MovS
	var_30_float = var_2_float; // 0x68 MovT
	func_2868(var_29_string, var_30_float); // 0x69 NEW_2
	var_34_string = "blocking"; // 0x6b PushS
	var_35_bool = 1; // 0x6c PushB
	SetProperty(var_34_string, var_35_bool); // 0x6d Func
	return 0; // 0x6f Return
}


func_3175(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0xc67 PushV
	var_21_object = 0; // 0xc68 SetNull
	var_19_object = var_21_object; // 0xc69 Mov
	return 2; // 0xc6a Return
}


func_3180(var_72_bool)
{
	var_73_int = 0; var_74_int = 0; // 0xc6c PushV
	var_75_string = "kerosene"; // 0xc6d PushS
	GetItemCountOfType(var_74_int, var_75_string); // 0xc6e Func
	var_72_bool = var_74_int; // 0xc70 Mov
	return 2; // 0xc71 Return
}


func_112(var_2_float)
{
	var_42_string = "blocking"; // 0x70 PushS
	var_43_bool = 0; // 0x71 PushB
	SetProperty(var_42_string, var_43_bool); // 0x72 Func
	var_44_string = ""; var_45_float = 0; // 0x74 PushV
	var_44_string = "armor_phys"; // 0x75 MovS
	var_45_float = -var_2_float; // 0x76 Neg2
	func_2868(var_44_string, var_45_float); // 0x77 NEW_2
	return 0; // 0x79 Return
}


func_3186(var_81_int)
{
	var_82_int = 0; var_83_int = 0; // 0xc72 PushV
	var_84_string = "branch"; // 0xc73 PushS
	GetVariable(var_84_string, var_83_int); // 0xc74 Func
	var_81_int = var_83_int; // 0xc76 Mov
	return 2; // 0xc77 Return
}


func_3192(var_64_bool, var_65_int)
{
	var_66_int = 10; // 0xc79 PushI
	var_67_bool = var_65_int == var_66_int; // 0xc7a Eq
	if(var_67_bool == 0) goto Label_3202; // 0xc7b JumpB
	func_3364(); // 0xc7d NEW_2
	var_64_bool = 1; // 0xc7f MovB
	return 0; // 0xc80 Return
	
Label_3202:
	var_119_int = 11; // 0xc82 PushI
	var_120_bool = var_65_int == var_119_int; // 0xc83 Eq
	if(var_120_bool == 0) goto Label_3211; // 0xc84 JumpB
	func_3372(); // 0xc86 NEW_2
	var_64_bool = 1; // 0xc88 MovB
	return 0; // 0xc89 Return
	
Label_3211:
	var_126_int = 12; // 0xc8b PushI
	var_127_bool = var_65_int == var_126_int; // 0xc8c Eq
	if(var_127_bool == 0) goto Label_3219; // 0xc8d JumpB
	func_3368(); // 0xc8f NEW_2
	var_64_bool = 1; // 0xc91 MovB
	return 0; // 0xc92 Return
	
Label_3219:
	var_64_bool = 0; // 0xc93 MovB
	return 0; // 0xc94 Return
}


func_122(var_37_bool)
{
	var_38_bool = 0; var_39_bool = 0; // 0x7a PushV
	IsAltShooting(var_39_bool); // 0x7b Func
	var_37_bool = var_39_bool; // 0x7d Mov
	return 2; // 0x7e Return
}


func_1666(var_846_int)
{
	var_846_int = 1; // 0x682 MovI
	return 0; // 0x683 Return
}


func_1668(var_851_float)
{
	var_851_float = 0.02618; // 0x684 MovF
	return 0; // 0x685 Return
}


func_1670()
{
	var_828_bool = 0; var_829_int = 0; var_830_bool = 0; var_831_int = 0; // 0x686 PushV
	var_832_string = "ammo"; // 0x687 PushS
	GetWeaponProperty(var_830_bool, var_832_string, var_831_int); // 0x688 Func
	var_833_string = "ammo"; // 0x68a PushS
	var_834_int = 1; // 0x68b PushI
	var_835_int = var_831_int - var_834_int; // 0x68c Sub
	SetWeaponProperty(var_830_bool, var_833_string, var_835_int); // 0x68d Func
	func_3870(); // 0x690 NEW_2
	return 4; // 0x692 Return
}


func_1683()
{
	var_905_bool = 0; var_906_bool = 0; var_907_bool = 0; var_908_bool = 0; // 0x693 PushV
	var_909_string = "ammo"; // 0x694 PushS
	GetWeaponProperty(var_907_bool, var_909_string, var_908_bool); // 0x695 Func
	var_910_bool = 0; // 0x697 PushV
	var_910_bool = 1; // 0x698 MovB
	var_911_bool = var_907_bool == 0; // 0x699 Not
	if(var_911_bool == 0) goto Label_1694; // 0x69a JumpB
	var_912_bool = var_908_bool == 0; // 0x69b Not
	if(var_912_bool == 0) goto Label_1694; // 0x69c JumpB
	var_910_bool = 0; // 0x69d MovB
	
Label_1694:
	if(var_910_bool == 0) goto Label_1698; // 0x69e JumpB
	func_1699(); // 0x6a0 NEW_2
	
Label_1698:
	return 4; // 0x6a2 Return
}


func_3221()
{
	var_68_bool = 0; var_69_int = 0; var_70_string = ""; var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_string = ""; var_75_string = ""; var_76_bool = 0; var_77_int = 0; var_78_string = ""; var_79_int = 0; var_80_bool = 0; var_81_int = 0; var_82_string = ""; var_83_string = ""; // 0xc95 PushV
	GetGroundMaterial(var_76_bool, var_77_int); // 0xc96 Func
	var_84_bool = var_76_bool == 0; // 0xc98 Not
	if(var_84_bool == 0) goto Label_3227; // 0xc99 JumpB
	var_77_int = -1; // 0xc9a MovI
	
Label_3227:
	var_85_string = ""; var_86_int = 0; // 0xc9b PushV
	var_86_int = var_77_int; // 0xc9c Mov
	func_2975(var_85_string, var_86_int); // 0xc9d NEW_2
	var_78_string = var_85_string; // 0xc9e Mov
	var_79_int = 0; // 0xca0 MovI
	
Label_3233:
	var_97_string = "step_"; // 0xca1 PushS
	var_98_int = var_97_string + var_78_string; // 0xca2 Add
	var_99_int = 1; // 0xca3 PushI
	var_100_int = var_79_int + var_99_int; // 0xca4 Add
	var_101_int = var_98_int + var_100_int; // 0xca5 Add
	IsExistingSound(var_80_bool, var_101_int); // 0xca6 Func
	var_102_bool = var_80_bool == 0; // 0xca8 Not
	if(var_102_bool == 0) goto Label_3243; // 0xca9 JumpB
	goto Label_3246; // 0xcaa Jump
	
Label_3246:
	var_103_bool = var_79_int == 0; // 0xcae Not
	if(var_103_bool == 0) goto Label_3252; // 0xcaf JumpB
	var_104_string = GlobalVars[0]; // 0xcb0 PushGE
	var_104_string = ""; // 0xcb1 MovS
	GlobalVars[0] = var_104_string; // 0xcb2 PopGE
	return 16; // 0xcb3 Return
	
Label_3252:
	var_105_int = 1; // 0xcb4 PushI
	var_106_bool = var_79_int == var_105_int; // 0xcb5 Eq
	if(var_106_bool == 0) goto Label_3257; // 0xcb6 JumpB
	var_81_int = 0; // 0xcb7 MovI
	goto Label_3269; // 0xcb8 Jump
	
Label_3269:
	var_107_string = "step_"; // 0xcc5 PushS
	var_108_int = var_107_string + var_78_string; // 0xcc6 Add
	var_109_int = 1; // 0xcc7 PushI
	var_110_int = var_81_int + var_109_int; // 0xcc8 Add
	var_83_string = var_108_int + var_110_int; // 0xcc9 Add2
	PlaySound(var_83_string); // 0xcca Func
	var_111_string = GlobalVars[0]; // 0xccc PushGE
	var_111_string = var_83_string; // 0xccd Mov
	GlobalVars[0] = var_111_string; // 0xcce PopGE
	return 16; // 0xccf Return
	
Label_3257:
	irand(var_81_int, var_79_int); // 0xcb9 Func
	var_112_string = "step_"; // 0xcbb PushS
	var_113_int = var_112_string + var_78_string; // 0xcbc Add
	var_114_int = 1; // 0xcbd PushI
	var_115_int = var_81_int + var_114_int; // 0xcbe Add
	var_82_string = var_113_int + var_115_int; // 0xcbf Add2
	var_116_string = GlobalVars[0]; // 0xcc0 PushGE
	var_117_bool = var_82_string != var_116_string; // 0xcc1 Neq
	if(var_117_bool == 0) goto Label_3268; // 0xcc2 JumpB
	goto Label_3269; // 0xcc3 Jump
	
Label_3268:
	goto Label_3257; // 0xcc4 Jump
	
Label_3243:
	var_118_int = 1; // 0xcab PushI
	var_79_int = var_79_int + var_118_int; // 0xcac Add2
	goto Label_3233; // 0xcad Jump
}


func_1699()
{
	var_913_bool = 0; var_914_string = ""; var_915_int = 0; // 0x6a3 PushV
	var_914_string = "revolver_ammo"; // 0x6a4 MovS
	var_915_int = 6; // 0x6a5 MovI
	func_3404(var_913_bool, var_914_string, var_915_int); // 0x6a6 NEW_2
	if(var_913_bool == 0) goto Label_1717; // 0x6a8 JumpB
	var_916_string = ""; // 0x6a9 PushV
	func_1730(var_916_string); // 0x6aa NEW_2
	var_917_string = "_reload"; // 0x6ac PushS
	var_918_int = var_916_string + var_917_string; // 0x6ad Add
	PlaySound(var_918_int); // 0x6ae Func
	var_919_string = "reload"; // 0x6b0 PushS
	PlayAnimation(var_919_string); // 0x6b1 Func
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


func_1730(var_822_string)
{
	var_822_string = "revolver"; // 0x6c2 MovS
	return 0; // 0x6c3 Return
}


func_195(var_148_int)
{
	var_148_int = 0; // 0xc3 MovI
	return 0; // 0xc4 Return
}


func_1732(var_847_float)
{
	var_847_float = 0.8; // 0x6c4 MovF
	return 0; // 0x6c5 Return
}


func_708()
{
	return 0; // 0x2c4 Return
}


func_197(var_217_int)
{
	var_217_int = 0; // 0xc5 MovI
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
	func_2856(var_75_bool, var_76_object, var_77_string); // 0xf9 NEW_2
	if(var_75_bool == 0) goto Label_253; // 0xfb JumpB
	var_73_bool = 1; // 0xfc MovB
	
Label_253:
	if(var_73_bool == 0) goto Label_261; // 0xfd JumpB
	var_84_bool = 0; var_85_object = Obj(); // 0xfe PushV
	var_85_object = var_47_object; // 0xff Mov
	func_2970(var_85_object); // 0x100 NEW_2
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
	func_3073(var_94_float, var_95_cvector, var_96_cvector); // 0x116 NEW_2
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
	func_3073(var_132_float, var_133_cvector, var_134_cvector); // 0x159 NEW_2
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
	func_2897(var_144_float, var_145_object, var_146_float, var_147_int); // 0x170 NEW_2
	var_58_float = var_144_float; // 0x171 Mov
	var_209_float = var_58_float; // 0x173 Push
	if(var_209_float == 0) goto Label_408; // 0x174 JumpB
	var_210_int = 2; // 0x175 PushI
	irand(var_59_int, var_210_int); // 0x176 Func
	var_211_string = ""; // 0x178 PushV
	func_186(var_211_string); // 0x179 NEW_2
	var_212_string = "_hit"; // 0x17b PushS
	var_213_int = var_211_string + var_212_string; // 0x17c Add
	var_214_int = 1; // 0x17d PushI
	var_215_int = var_59_int + var_214_int; // 0x17e Add
	var_216_int = var_213_int + var_215_int; // 0x17f Add
	PlaySound(var_216_int); // 0x180 Func
	ReportAttack(var_47_object); // 0x182 Func
	var_217_int = 0; // 0x184 PushV
	func_197(var_217_int); // 0x185 NEW_2
	ReportHit(var_47_object, var_217_int, var_58_float, var_57_float, var_49_cvector, var_46_cvector); // 0x187 Func
	var_218_object = GlobalVars[2]; // 0x189 PushGE
	in(var_60_bool, var_47_object); // 0x18a ObjFunc
	var_219_bool = var_60_bool == 0; // 0x18c Not
	if(var_219_bool == 0) goto Label_405; // 0x18d JumpB
	var_220_object = GlobalVars[3]; // 0x18e PushGE
	add(var_47_object); // 0x18f ObjFunc
	var_221_bool = 0; // 0x191 PushB
	BroadcastPlayerDamage(var_47_object, var_221_bool); // 0x192 Func
	goto Label_408; // 0x194 Jump
	
Label_408:
	func_444(); // 0x199 NEW_2
	
Label_411:
	var_222_string = "_phase2"; // 0x19b PushS
	var_223_int = var_53_string + var_222_string; // 0x19c Add
	PlayAnimation(var_223_int); // 0x19d Func
	WaitForAnimEnd(); // 0x19f Func
	var_224_bool = var_0_bool; // 0x1a1 PushT
	if(var_224_bool == 0) goto Label_420; // 0x1a2 JumpB
	return 40; // 0x1a3 Return
	
Label_420:
	var_47_object = 0; // 0x1a4 SetNull
	var_225_bool = 0; // 0x1a5 PushV
	func_447(var_225_bool); // 0x1a6 NEW_2
	if(var_225_bool == 0) goto Label_225; // 0x1a8 JumpB
	return 40; // 0x1a9 Return
	
Label_405:
	var_228_bool = 1; // 0x195 PushB
	BroadcastPlayerDamage(var_47_object, var_228_bool); // 0x196 Func
	
Label_350:
	var_50_bool = 0; // 0x15e MovB
	
Label_293:
	irand(var_54_int, var_41_int); // 0x125 Func
	var_229_string = ""; // 0x127 PushV
	func_199(var_229_string); // 0x128 NEW_2
	var_230_string = "attack"; // 0x12a PushS
	var_231_int = var_229_string + var_230_string; // 0x12b Add
	var_232_int = 1; // 0x12c PushI
	var_233_int = var_54_int + var_232_int; // 0x12d Add
	var_53_string = var_231_int + var_233_int; // 0x12e Add2
	var_234_string = ""; // 0x12f PushV
	func_186(var_234_string); // 0x130 NEW_2
	var_235_int = 1; // 0x132 PushI
	var_236_int = var_54_int + var_235_int; // 0x133 Add
	var_237_int = var_234_string + var_236_int; // 0x134 Add
	PlaySound(var_237_int); // 0x135 Func
	
Label_219:
	goto Label_204; // 0xdb Jump
}


func_713(var_271_bool)
{
	var_272_bool = 0; var_273_bool = 0; // 0x2c9 PushV
	IsShooting(var_273_bool); // 0x2ca Func
	var_271_bool = var_273_bool; // 0x2cc Mov
	return 2; // 0x2cd Return
}


func_1738(var_844_int)
{
	var_844_int = 2; // 0x6ca MovI
	return 0; // 0x6cb Return
}


func_1734(var_869_int)
{
	var_869_int = 1; // 0x6c6 MovI
	return 0; // 0x6c7 Return
}


func_718(var_357_string)
{
	var_357_string = "scalpel"; // 0x2ce MovS
	return 0; // 0x2cf Return
}


func_1736(var_871_int)
{
	var_871_int = 2; // 0x6c8 MovI
	return 0; // 0x6c9 Return
}


func_720(var_375_float)
{
	var_375_float = 0.6; // 0x2d1 MovF
	return 0; // 0x2d2 Return
}


func_1740(var_0_bool)
{
	var_761_string = ""; var_762_string = ""; var_763_int = 0; var_764_bool = 0; var_765_float = 0; var_766_float = 0; var_767_cvector = CVector(0,0,0); var_768_object = Obj(); var_769_int = 0; var_770_cvector = CVector(0,0,0); var_771_object = Obj(); var_772_int = 0; var_773_cvector = CVector(0,0,0); var_774_float = 0; var_775_float = 0; var_776_float = 0; var_777_object = Obj(); var_778_float = 0; var_779_object = Obj(); var_780_object = Obj(); var_781_int = 0; var_782_int = 0; var_783_object = Obj(); var_784_bool = 0; var_785_string = ""; var_786_string = ""; var_787_int = 0; var_788_bool = 0; var_789_float = 0; var_790_float = 0; var_791_cvector = CVector(0,0,0); var_792_object = Obj(); var_793_int = 0; var_794_cvector = CVector(0,0,0); var_795_object = Obj(); var_796_int = 0; var_797_cvector = CVector(0,0,0); var_798_float = 0; var_799_float = 0; var_800_float = 0; var_801_object = Obj(); var_802_float = 0; var_803_object = Obj(); var_804_object = Obj(); var_805_int = 0; var_806_int = 0; var_807_object = Obj(); var_808_bool = 0; // 0x6cc PushV
	var_0_bool = 0; // 0x6cd TMovB
	
Label_1742:
	var_809_bool = 0; // 0x6ce PushV
	func_1631(var_809_bool); // 0x6cf NEW_2
	var_826_bool = var_809_bool == 0; // 0x6d1 Not
	if(var_826_bool == 0) goto Label_1748; // 0x6d2 JumpB
	goto Label_1963; // 0x6d3 Jump
	
Label_1963:
	return 48; // 0x7ab Return
	
Label_1748:
	GetCurrentWeapon(var_785_string); // 0x6d4 Func
	var_786_string = "attack1"; // 0x6d6 MovS
	var_827_bool = 1; // 0x6d7 PushB
	SetAttackState(var_827_bool); // 0x6d8 Func
	func_1670(); // 0x6db NEW_2
	var_836_string = "_phase1"; // 0x6dd PushS
	var_837_int = var_786_string + var_836_string; // 0x6de Add
	PlayAnimation(var_837_int); // 0x6df Func
	WaitForAnimEnd(); // 0x6e1 Func
	var_838_bool = var_0_bool; // 0x6e3 PushT
	if(var_838_bool == 0) goto Label_1766; // 0x6e4 JumpB
	return 48; // 0x6e5 Return
	
Label_1766:
	var_839_string = "shot"; // 0x6e6 PushS
	TriggerWeapon(var_839_string); // 0x6e7 Func
	var_840_string = ""; // 0x6e9 PushV
	func_1730(var_840_string); // 0x6ea NEW_2
	var_841_string = "_shot"; // 0x6ec PushS
	var_842_int = var_840_string + var_841_string; // 0x6ed Add
	PlaySound(var_842_int); // 0x6ee Func
	var_843_int = 0; // 0x6f0 PushV
	var_844_int = 0; // 0x6f1 PushV
	func_1738(var_844_int); // 0x6f2 NEW_2
	var_843_int = var_844_int; // 0x6f3 Mov
	func_3451(var_843_int); // 0x6f5 NEW_2
	func_1964(); // 0x6f8 NEW_2
	var_845_bool = 0; // 0x6fa PushB
	SetAttackState(var_845_bool); // 0x6fb Func
	var_846_int = 0; // 0x6fd PushV
	func_1666(var_846_int); // 0x6fe NEW_2
	var_787_int = var_846_int; // 0x6ff Mov
	var_788_bool = 0; // 0x701 MovB
	var_847_float = 0; // 0x702 PushV
	func_1732(var_847_float); // 0x703 NEW_2
	var_789_float = var_847_float / var_847_float; // 0x705 Div2
	var_848_float = 1.0; // 0x706 PushF
	var_849_float = 1.5; // 0x707 PushF
	var_850_float = 1.0; // 0x708 PushF
	var_851_float = 0; // 0x709 PushV
	func_1668(var_851_float); // 0x70a NEW_2
	var_852_float = var_850_float / var_851_float; // 0x70c Div
	var_853_float = 1.5; // 0x70d PushF
	var_854_int = var_852_float - var_853_float; // 0x70e Sub
	var_855_float = 0; // 0x70f PushV
	func_3440(var_855_float); // 0x710 NEW_2
	var_856_float = var_854_int * var_855_float; // 0x712 Mult
	var_857_int = var_849_float + var_856_float; // 0x713 Add
	var_790_float = var_848_float / var_848_float; // 0x714 Div2
	GetDirection(var_791_cvector); // 0x715 Func
	var_858_object = Obj(); // 0x717 PushV
	func_3048(var_858_object); // 0x718 NEW_2
	var_792_object = var_858_object; // 0x719 Mov
	var_793_int = 0; // 0x71b MovI
	
Label_1820:
	var_859_bool = var_793_int < var_787_int; // 0x71c LT
	if(var_859_bool == 0) goto Label_1918; // 0x71d JumpB
	RandVecCone3D(var_794_cvector, var_791_cvector, var_790_float); // 0x71e Func
	var_860_int = 10000; // 0x720 PushI
	GetVictimMaterialExact(var_795_object, var_796_int, var_797_cvector, var_794_cvector, var_860_int); // 0x721 Func
	var_861_object = var_795_object; // 0x723 Push
	if(var_861_object == 0) goto Label_1914; // 0x724 JumpB
	var_798_float = var_789_float; // 0x725 Mov
	var_862_int = 4; // 0x726 PushI
	var_863_bool = var_796_int == var_862_int; // 0x727 Eq
	if(var_863_bool == 0) goto Label_1835; // 0x728 JumpB
	var_864_float = 3.0; // 0x729 PushF
	var_798_float = var_798_float * var_864_float; // 0x72a Mult2
	
Label_1835:
	var_865_float = 0; var_866_object = Obj(); var_867_float = 0; var_868_int = 0; // 0x72b PushV
	var_866_object = var_795_object; // 0x72c Mov
	var_867_float = var_798_float; // 0x72d Mov
	var_869_int = 0; // 0x72e PushV
	func_1734(var_869_int); // 0x72f NEW_2
	var_868_int = var_869_int; // 0x730 Mov
	func_2897(var_865_float, var_866_object, var_867_float, var_868_int); // 0x732 NEW_2
	var_799_float = var_865_float; // 0x733 Mov
	var_870_float = var_799_float; // 0x735 Push
	if(var_870_float == 0) goto Label_1896; // 0x736 JumpB
	add(var_795_object); // 0x737 ObjFunc
	var_871_int = 0; // 0x739 PushV
	func_1736(var_871_int); // 0x73a NEW_2
	ReportHit(var_795_object, var_871_int, var_799_float, var_798_float, var_797_cvector, var_794_cvector); // 0x73c Func
	var_872_bool = 0; // 0x73e PushV
	func_1965(var_872_bool); // 0x73f NEW_2
	if(var_872_bool == 0) goto Label_1895; // 0x741 JumpB
	var_873_string = "health"; // 0x742 PushS
	GetProperty(var_873_string, var_800_float); // 0x743 ObjFunc
	var_874_bool = var_800_float == 0; // 0x745 Not
	if(var_874_bool == 0) goto Label_1895; // 0x746 JumpB
	var_875_int = 10000; // 0x747 PushI
	GetVictimMaterialExact(var_801_object, var_796_int, var_797_cvector, var_794_cvector, var_875_int, var_795_object); // 0x748 Func
	var_876_bool = 0; // 0x74a PushV
	var_876_bool = 0; // 0x74b MovB
	var_877_object = var_801_object; // 0x74c Push
	if(var_877_object == 0) goto Label_1873; // 0x74d JumpB
	var_878_bool = var_801_object != var_795_object; // 0x74e Neq
	if(var_878_bool == 0) goto Label_1873; // 0x74f JumpB
	var_876_bool = 1; // 0x750 MovB
	
Label_1873:
	if(var_876_bool == 0) goto Label_1894; // 0x751 JumpB
	var_879_float = 0; var_880_object = Obj(); var_881_float = 0; var_882_int = 0; // 0x752 PushV
	var_880_object = var_801_object; // 0x753 Mov
	var_883_float = 0.75; // 0x754 PushF
	var_881_float = var_798_float * var_883_float; // 0x755 Mult2
	var_884_int = 0; // 0x756 PushV
	func_1734(var_884_int); // 0x757 NEW_2
	var_882_int = var_884_int; // 0x758 Mov
	func_2897(var_879_float, var_880_object, var_881_float, var_882_int); // 0x75a NEW_2
	var_802_float = var_879_float; // 0x75b Mov
	var_885_float = var_802_float; // 0x75d Push
	if(var_885_float == 0) goto Label_1894; // 0x75e JumpB
	add(var_801_object); // 0x75f ObjFunc
	var_886_int = 0; // 0x761 PushV
	func_1736(var_886_int); // 0x762 NEW_2
	ReportHit(var_801_object, var_886_int, var_802_float, var_798_float, var_797_cvector, var_794_cvector); // 0x764 Func
	
Label_1894:
	var_801_object = 0; // 0x766 SetNull
	
Label_1895:
	goto Label_1914; // 0x767 Jump
	
Label_1914:
	var_795_object = 0; // 0x77a SetNull
	var_887_int = 1; // 0x77b PushI
	var_793_int = var_793_int + var_887_int; // 0x77c Add2
	goto Label_1820; // 0x77d Jump
	
Label_1896:
	var_888_int = -1; // 0x768 PushI
	var_889_bool = var_796_int != var_888_int; // 0x769 Neq
	if(var_889_bool == 0) goto Label_1914; // 0x76a JumpB
	var_890_bool = var_788_bool == 0; // 0x76b Not
	if(var_890_bool == 0) goto Label_1914; // 0x76c JumpB
	GetScene(var_803_object); // 0x76d Func
	var_891_string = "scripted"; // 0x76f PushS
	var_892_cvector = CVector(0.0, 0.0, 1.0); // 0x770 PushVec
	var_893_string = "richochet.xml"; // 0x771 PushS
	AddActorByType(var_804_object, var_891_string, var_803_object, var_797_cvector, var_892_cvector, var_893_string); // 0x772 Func
	var_894_string = "Material"; // 0x774 PushS
	SetScriptProperty(var_894_string, var_796_int); // 0x775 ObjFunc
	var_788_bool = 1; // 0x777 MovB
	var_804_object = 0; // 0x778 SetNull
	var_803_object = 0; // 0x779 SetNull
	
Label_1918:
	size(var_805_int); // 0x77e ObjFunc
	var_806_int = 0; // 0x780 MovI
	
Label_1921:
	var_895_bool = var_806_int < var_805_int; // 0x781 LT
	if(var_895_bool == 0) goto Label_1946; // 0x782 JumpB
	get(var_807_object, var_806_int); // 0x783 ObjFunc
	ReportAttack(var_807_object); // 0x785 Func
	var_896_object = GlobalVars[2]; // 0x787 PushGE
	in(var_808_bool, var_807_object); // 0x788 ObjFunc
	var_897_bool = var_808_bool == 0; // 0x78a Not
	if(var_897_bool == 0) goto Label_1939; // 0x78b JumpB
	var_898_object = GlobalVars[3]; // 0x78c PushGE
	add(var_807_object); // 0x78d ObjFunc
	var_899_bool = 0; // 0x78f PushB
	BroadcastPlayerDamage(var_807_object, var_899_bool); // 0x790 Func
	goto Label_1942; // 0x792 Jump
	
Label_1942:
	var_807_object = 0; // 0x796 SetNull
	var_900_int = 1; // 0x797 PushI
	var_806_int = var_806_int + var_900_int; // 0x798 Add2
	goto Label_1921; // 0x799 Jump
	
Label_1939:
	var_901_bool = 1; // 0x793 PushB
	BroadcastPlayerDamage(var_807_object, var_901_bool); // 0x794 Func
	
Label_1946:
	var_902_string = "_phase2"; // 0x79a PushS
	var_903_int = var_786_string + var_902_string; // 0x79b Add
	PlayAnimation(var_903_int); // 0x79c Func
	WaitForAnimEnd(); // 0x79e Func
	var_904_bool = var_0_bool; // 0x7a0 PushT
	if(var_904_bool == 0) goto Label_1955; // 0x7a1 JumpB
	return 48; // 0x7a2 Return
	
Label_1955:
	func_1683(); // 0x7a4 NEW_2
	var_792_object = 0; // 0x7a6 SetNull
	var_920_bool = 0; // 0x7a7 PushV
	func_1967(var_920_bool); // 0x7a8 NEW_2
	if(var_920_bool == 0) goto Label_1742; // 0x7aa JumpB
}


func_3280()
{
	var_74_object = Obj(); var_75_object = Obj(); var_76_object = Obj(); var_77_object = Obj(); // 0xcd0 PushV
	var_78_int = 0; // 0xcd1 PushV
	func_3152(var_78_int); // 0xcd2 NEW_2
	var_84_int = 12; // 0xcd4 PushI
	var_85_bool = var_78_int == var_84_int; // 0xcd5 Eq
	if(var_85_bool == 0) goto Label_3290; // 0xcd6 JumpB
	var_86_string = "ACHIEVEMENT_MIGHT"; // 0xcd7 PushS
	UnlockAchievement(var_86_string); // 0xcd8 Func
	
Label_3290:
	GetMainOutdoorScene(var_76_object); // 0xcda Func
	var_87_string = "player_death"; // 0xcdc PushS
	var_88_string = "play_death_danko.bin"; // 0xcdd PushS
	AddBlankActor(var_77_object, var_76_object, var_87_string, var_88_string); // 0xcde Func
	SetDeathState(); // 0xce0 Func
	return 4; // 0xce2 Return
}


func_723(var_379_float)
{
	var_379_float = 0.5; // 0x2d3 MovF
	return 0; // 0x2d4 Return
}


func_725(var_413_int)
{
	var_413_int = 2; // 0x2d5 MovI
	return 0; // 0x2d6 Return
}


func_727(var_398_int)
{
	var_398_int = 0; // 0x2d7 MovI
	return 0; // 0x2d8 Return
}


func_729(var_407_int)
{
	var_407_int = 1; // 0x2d9 MovI
	return 0; // 0x2da Return
}


func_731(var_373_float, var_374_bool)
{
	var_375_float = 0; var_376_bool = 0; // 0x2dc PushV
	var_376_bool = var_374_bool; // 0x2dd Mov
	func_720(var_376_bool); // 0x2de NEW_2
	var_377_float = 0; var_378_float = 0; // 0x2e0 PushV
	var_379_float = 0; // 0x2e1 PushV
	func_723(var_379_float); // 0x2e2 NEW_2
	var_378_float = var_379_float; // 0x2e3 Mov
	func_3469(var_377_float, var_378_float); // 0x2e5 NEW_2
	var_373_float = var_375_float * var_377_float; // 0x2e7 Mult2
	return 0; // 0x2e8 Return
}


func_3301()
{
	var_17_bool = 0; var_18_bool = 0; // 0xce5 PushV
	var_19_int = 11; // 0xce6 PushI
	KillTimer(var_19_int, var_18_bool); // 0xce7 Func
	var_20_bool = var_18_bool; // 0xce9 Push
	if(var_20_bool == 0) goto Label_3310; // 0xcea JumpB
	var_21_int = -3; // 0xceb PushI
	ModNoise(var_21_int); // 0xcec Func
	
Label_3310:
	return 2; // 0xcee Return
}


func_745()
{
	var_412_int = 0; // 0x2e9 PushV
	var_413_int = 0; // 0x2ea PushV
	func_725(var_413_int); // 0x2eb NEW_2
	var_412_int = var_413_int; // 0x2ec Mov
	func_3451(var_412_int); // 0x2ee NEW_2
	return 0; // 0x2f0 Return
}


func_3311()
{
	func_3301(); // 0xcf0 NEW_2
	var_22_int = 11; // 0xcf2 PushI
	var_23_float = 0.15; // 0xcf3 PushF
	SetTimer(var_22_int, var_23_float); // 0xcf4 Func
	var_24_int = 3; // 0xcf6 PushI
	ModNoise(var_24_int); // 0xcf7 Func
	return 0; // 0xcf9 Return
}


func_753(var_0_bool)
{
	var_287_int = 0; var_288_string = ""; var_289_bool = 0; var_290_string = ""; var_291_float = 0; var_292_cvector = CVector(0,0,0); var_293_object = Obj(); var_294_int = 0; var_295_cvector = CVector(0,0,0); var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_string = ""; var_300_int = 0; var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_float = 0; var_305_int = 0; var_306_bool = 0; var_307_int = 0; var_308_string = ""; var_309_bool = 0; var_310_string = ""; var_311_float = 0; var_312_cvector = CVector(0,0,0); var_313_object = Obj(); var_314_int = 0; var_315_cvector = CVector(0,0,0); var_316_bool = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_string = ""; var_320_int = 0; var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_float = 0; var_324_float = 0; var_325_int = 0; var_326_bool = 0; // 0x2f1 PushV
	var_0_bool = 0; // 0x2f2 TMovB
	var_307_int = 0; // 0x2f3 MovI
	
Label_756:
	var_327_int = 1; // 0x2f4 PushI
	var_307_int = var_307_int + var_327_int; // 0x2f5 Add2
	var_328_string = ""; // 0x2f6 PushV
	func_991(var_328_string); // 0x2f7 NEW_2
	var_329_string = "attack"; // 0x2f9 PushS
	var_330_int = var_328_string + var_329_string; // 0x2fa Add
	var_331_int = var_330_int + var_307_int; // 0x2fb Add
	var_332_string = "_phase1"; // 0x2fc PushS
	var_308_string = var_331_int + var_332_string; // 0x2fd Add2
	HasAnimation(var_309_bool, var_308_string); // 0x2fe Func
	var_333_bool = var_309_bool == 0; // 0x300 Not
	if(var_333_bool == 0) goto Label_771; // 0x301 JumpB
	goto Label_772; // 0x302 Jump
	
Label_772:
	var_334_int = -1; // 0x304 PushI
	var_307_int = var_307_int + var_334_int; // 0x305 Add2
	var_335_bool = var_307_int == 0; // 0x306 Not
	if(var_335_bool == 0) goto Label_777; // 0x307 JumpB
	return 40; // 0x308 Return
	
Label_777:
	GetCurrentWeapon(var_310_string); // 0x309 Func
	GetAttackDistance(var_311_float); // 0x30b Func
	GetDirection(var_312_cvector); // 0x30d Func
	var_316_bool = 0; // 0x30f MovB
	var_336_bool = 0; // 0x310 PushV
	func_989(var_336_bool); // 0x311 NEW_2
	if(var_336_bool == 0) goto Label_834; // 0x313 JumpB
	GetVictimMaterialExact(var_313_object, var_314_int, var_315_cvector, var_312_cvector, var_311_float); // 0x314 Func
	var_337_bool = 0; // 0x316 PushV
	var_337_bool = 0; // 0x317 MovB
	var_338_bool = 0; // 0x318 PushV
	var_338_bool = 0; // 0x319 MovB
	var_339_bool = 0; // 0x31a PushV
	var_339_bool = 0; // 0x31b MovB
	var_340_bool = var_313_object != 0; // 0x31c NullNeq
	if(var_340_bool == 0) goto Label_805; // 0x31d JumpB
	var_341_bool = 0; var_342_object = Obj(); var_343_string = ""; // 0x31e PushV
	var_342_object = var_313_object; // 0x31f Mov
	var_343_string = "health"; // 0x320 MovS
	func_2856(var_341_bool, var_342_object, var_343_string); // 0x321 NEW_2
	if(var_341_bool == 0) goto Label_805; // 0x323 JumpB
	var_339_bool = 1; // 0x324 MovB
	
Label_805:
	if(var_339_bool == 0) goto Label_813; // 0x325 JumpB
	var_344_bool = 0; var_345_object = Obj(); // 0x326 PushV
	var_345_object = var_313_object; // 0x327 Mov
	func_2970(var_345_object); // 0x328 NEW_2
	var_346_bool = var_344_bool == 0; // 0x32a Not
	if(var_346_bool == 0) goto Label_813; // 0x32b JumpB
	var_338_bool = 1; // 0x32c MovB
	
Label_813:
	if(var_338_bool == 0) goto Label_818; // 0x32d JumpB
	var_347_int = 4; // 0x32e PushI
	var_348_bool = var_314_int == var_347_int; // 0x32f Eq
	if(var_348_bool == 0) goto Label_818; // 0x330 JumpB
	var_337_bool = 1; // 0x331 MovB
	
Label_818:
	if(var_337_bool == 0) goto Label_834; // 0x332 JumpB
	var_349_string = "GetDirection"; // 0x333 PushS
	var_350_int = 1; // 0x334 PushI
	var_351_bool = IsFuncExist(var_313_object, var_349_string, var_350_int); // 0x335 FuncExist
	if(var_351_bool == 0) goto Label_834; // 0x336 JumpB
	GetDirection(var_317_cvector); // 0x337 Func
	GetDirection(var_318_cvector); // 0x339 ObjFunc
	var_352_float = 0; var_353_cvector = CVector(0,0,0); var_354_cvector = CVector(0,0,0); // 0x33b PushV
	var_353_cvector = var_317_cvector; // 0x33c Mov
	var_354_cvector = var_318_cvector; // 0x33d Mov
	func_3073(var_352_float, var_353_cvector, var_354_cvector); // 0x33e NEW_2
	var_355_float = 0.5; // 0x340 PushF
	var_316_bool = var_352_float >= var_355_float; // 0x341 GE2
	
Label_834:
	var_356_bool = var_316_bool; // 0x342 Push
	if(var_356_bool == 0) goto Label_845; // 0x343 JumpB
	var_319_string = "battack"; // 0x344 MovS
	var_357_string = ""; // 0x345 PushV
	func_718(var_357_string); // 0x346 NEW_2
	var_358_string = "_back"; // 0x348 PushS
	var_359_int = var_357_string + var_358_string; // 0x349 Add
	PlaySound(var_359_int); // 0x34a Func
	goto Label_863; // 0x34c Jump
	
Label_863:
	var_360_bool = 1; // 0x35f PushB
	SetAttackState(var_360_bool); // 0x360 Func
	var_361_string = "_phase1"; // 0x362 PushS
	var_362_int = var_319_string + var_361_string; // 0x363 Add
	PlayAnimation(var_362_int); // 0x364 Func
	WaitForAnimEnd(); // 0x366 Func
	var_363_bool = var_0_bool; // 0x368 PushT
	if(var_363_bool == 0) goto Label_875; // 0x369 JumpB
	return 40; // 0x36a Return
	
Label_875:
	var_364_bool = 0; // 0x36b PushB
	SetAttackState(var_364_bool); // 0x36c Func
	GetAttackDistance(var_311_float); // 0x36e Func
	GetDirection(var_312_cvector); // 0x370 Func
	GetVictimMaterialExact(var_313_object, var_314_int, var_315_cvector, var_312_cvector, var_311_float); // 0x372 Func
	var_365_bool = var_313_object != 0; // 0x374 NullNeq
	if(var_365_bool == 0) goto Label_963; // 0x375 JumpB
	var_366_string = "GetDirection"; // 0x376 PushS
	var_367_int = 1; // 0x377 PushI
	var_368_bool = IsFuncExist(var_313_object, var_366_string, var_367_int); // 0x378 FuncExist
	if(var_368_bool == 0) goto Label_902; // 0x379 JumpB
	GetDirection(var_321_cvector); // 0x37a Func
	GetDirection(var_322_cvector); // 0x37c ObjFunc
	var_369_float = 0; var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); // 0x37e PushV
	var_370_cvector = var_321_cvector; // 0x37f Mov
	var_371_cvector = var_322_cvector; // 0x380 Mov
	func_3073(var_369_float, var_370_cvector, var_371_cvector); // 0x381 NEW_2
	var_372_float = 0.5; // 0x383 PushF
	var_316_bool = var_369_float >= var_372_float; // 0x384 GE2
	goto Label_903; // 0x385 Jump
	
Label_903:
	var_373_float = 0; var_374_bool = 0; // 0x387 PushV
	var_374_bool = var_316_bool; // 0x388 Mov
	func_731(var_373_float, var_374_bool); // 0x389 NEW_2
	var_323_float = var_373_float; // 0x38a Mov
	var_391_int = 4; // 0x38c PushI
	var_392_bool = var_314_int == var_391_int; // 0x38d Eq
	if(var_392_bool == 0) goto Label_913; // 0x38e JumpB
	var_393_float = 3.0; // 0x38f PushF
	var_323_float = var_323_float * var_393_float; // 0x390 Mult2
	
Label_913:
	var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_int = 0; // 0x391 PushV
	var_395_object = var_313_object; // 0x392 Mov
	var_396_float = var_323_float; // 0x393 Mov
	var_398_int = 0; // 0x394 PushV
	func_727(var_398_int); // 0x395 NEW_2
	var_397_int = var_398_int; // 0x396 Mov
	func_2897(var_394_float, var_395_object, var_396_float, var_397_int); // 0x398 NEW_2
	var_324_float = var_394_float; // 0x399 Mov
	var_399_float = var_324_float; // 0x39b Push
	if(var_399_float == 0) goto Label_960; // 0x39c JumpB
	var_400_int = 2; // 0x39d PushI
	irand(var_325_int, var_400_int); // 0x39e Func
	var_401_string = ""; // 0x3a0 PushV
	func_718(var_401_string); // 0x3a1 NEW_2
	var_402_string = "_hit"; // 0x3a3 PushS
	var_403_int = var_401_string + var_402_string; // 0x3a4 Add
	var_404_int = 1; // 0x3a5 PushI
	var_405_int = var_325_int + var_404_int; // 0x3a6 Add
	var_406_int = var_403_int + var_405_int; // 0x3a7 Add
	PlaySound(var_406_int); // 0x3a8 Func
	ReportAttack(var_313_object); // 0x3aa Func
	var_407_int = 0; // 0x3ac PushV
	func_729(var_407_int); // 0x3ad NEW_2
	ReportHit(var_313_object, var_407_int, var_324_float, var_323_float, var_315_cvector, var_312_cvector); // 0x3af Func
	var_408_object = GlobalVars[2]; // 0x3b1 PushGE
	in(var_326_bool, var_313_object); // 0x3b2 ObjFunc
	var_409_bool = var_326_bool == 0; // 0x3b4 Not
	if(var_409_bool == 0) goto Label_957; // 0x3b5 JumpB
	var_410_object = GlobalVars[3]; // 0x3b6 PushGE
	add(var_313_object); // 0x3b7 ObjFunc
	var_411_bool = 0; // 0x3b9 PushB
	BroadcastPlayerDamage(var_313_object, var_411_bool); // 0x3ba Func
	goto Label_960; // 0x3bc Jump
	
Label_960:
	func_745(); // 0x3c1 NEW_2
	
Label_963:
	var_427_string = "_phase2"; // 0x3c3 PushS
	var_428_int = var_319_string + var_427_string; // 0x3c4 Add
	PlayAnimation(var_428_int); // 0x3c5 Func
	WaitForAnimEnd(); // 0x3c7 Func
	var_429_bool = var_0_bool; // 0x3c9 PushT
	if(var_429_bool == 0) goto Label_972; // 0x3ca JumpB
	return 40; // 0x3cb Return
	
Label_972:
	var_313_object = 0; // 0x3cc SetNull
	var_430_bool = 0; // 0x3cd PushV
	func_993(var_430_bool); // 0x3ce NEW_2
	if(var_430_bool == 0) goto Label_777; // 0x3d0 JumpB
	return 40; // 0x3d1 Return
	
Label_957:
	var_433_bool = 1; // 0x3bd PushB
	BroadcastPlayerDamage(var_313_object, var_433_bool); // 0x3be Func
	
Label_902:
	var_316_bool = 0; // 0x386 MovB
	
Label_845:
	irand(var_320_int, var_307_int); // 0x34d Func
	var_434_string = ""; // 0x34f PushV
	func_991(var_434_string); // 0x350 NEW_2
	var_435_string = "attack"; // 0x352 PushS
	var_436_int = var_434_string + var_435_string; // 0x353 Add
	var_437_int = 1; // 0x354 PushI
	var_438_int = var_320_int + var_437_int; // 0x355 Add
	var_319_string = var_436_int + var_438_int; // 0x356 Add2
	var_439_string = ""; // 0x357 PushV
	func_718(var_439_string); // 0x358 NEW_2
	var_440_int = 1; // 0x35a PushI
	var_441_int = var_320_int + var_440_int; // 0x35b Add
	var_442_int = var_439_string + var_441_int; // 0x35c Add
	PlaySound(var_442_int); // 0x35d Func
	
Label_771:
	goto Label_756; // 0x303 Jump
}


func_3322()
{
	var_12_bool = 0; var_13_bool = 0; // 0xcfa PushV
	var_14_int = 10; // 0xcfb PushI
	KillTimer(var_14_int, var_13_bool); // 0xcfc Func
	var_15_bool = var_13_bool; // 0xcfe Push
	if(var_15_bool == 0) goto Label_3331; // 0xcff JumpB
	var_16_int = -2; // 0xd00 PushI
	ModNoise(var_16_int); // 0xd01 Func
	
Label_3331:
	return 2; // 0xd03 Return
}


func_1275(var_487_string)
{
	var_487_string = ""; // 0x4fb MovS
	return 0; // 0x4fc Return
}


func_1277(var_566_bool)
{
	var_567_bool = 0; var_568_bool = 0; // 0x4fd PushV
	IsShooting(var_568_bool); // 0x4fe Func
	var_566_bool = var_568_bool; // 0x500 Mov
	return 2; // 0x501 Return
}


func_1282(var_630_bool)
{
	var_631_bool = 0; var_632_bool = 0; var_633_bool = 0; var_634_bool = 0; // 0x502 PushV
	var_635_string = "ammo"; // 0x503 PushS
	GetWeaponProperty(var_633_bool, var_635_string, var_634_bool); // 0x504 Func
	var_636_bool = 0; // 0x506 PushV
	var_636_bool = 1; // 0x507 MovB
	var_637_bool = var_633_bool == 0; // 0x508 Not
	if(var_637_bool == 0) goto Label_1293; // 0x509 JumpB
	var_638_bool = var_634_bool == 0; // 0x50a Not
	if(var_638_bool == 0) goto Label_1293; // 0x50b JumpB
	var_636_bool = 0; // 0x50c MovB
	
Label_1293:
	if(var_636_bool == 0) goto Label_1315; // 0x50d JumpB
	var_639_bool = 0; var_640_string = ""; var_641_int = 0; // 0x50e PushV
	var_640_string = "rifle_ammo"; // 0x50f MovS
	var_641_int = 1; // 0x510 MovI
	func_3404(var_639_bool, var_640_string, var_641_int); // 0x511 NEW_2
	var_660_bool = var_639_bool == 0; // 0x513 Not
	if(var_660_bool == 0) goto Label_1315; // 0x514 JumpB
	var_661_string = ""; // 0x515 PushV
	func_1355(var_661_string); // 0x516 NEW_2
	var_662_string = "_noammo"; // 0x518 PushS
	var_663_int = var_661_string + var_662_string; // 0x519 Add
	PlaySound(var_663_int); // 0x51a Func
	var_664_string = "noammo"; // 0x51c PushS
	PlayAnimation(var_664_string); // 0x51d Func
	WaitForAnimEnd(); // 0x51f Func
	var_630_bool = 0; // 0x521 MovB
	return 4; // 0x522 Return
	
Label_1315:
	var_630_bool = 1; // 0x523 MovB
	return 4; // 0x524 Return
}


func_3332()
{
	var_12_bool = 0; var_13_bool = 0; // 0xd04 PushV
	var_14_int = 12; // 0xd05 PushI
	KillTimer(var_14_int, var_13_bool); // 0xd06 Func
	var_15_bool = var_13_bool; // 0xd08 Push
	if(var_15_bool == 0) goto Label_3341; // 0xd09 JumpB
	var_16_int = -1; // 0xd0a PushI
	ModNoise(var_16_int); // 0xd0b Func
	
Label_3341:
	return 2; // 0xd0d Return
}


func_2829()
{
	func_3861(); // 0xb0e NEW_2
	return 0; // 0xb10 Return
}


func_3342()
{
	func_3322(); // 0xd0f NEW_2
	var_17_int = 10; // 0xd11 PushI
	var_18_float = 0.35; // 0xd12 PushF
	SetTimer(var_17_int, var_18_float); // 0xd13 Func
	var_19_int = 2; // 0xd15 PushI
	ModNoise(var_19_int); // 0xd16 Func
	return 0; // 0xd18 Return
}


func_2833()
{
	var_136_int = 0; // 0xb11 PushI
	KillTimer(var_136_int); // 0xb12 Func
	return 0; // 0xb14 Return
}


func_3861()
{
	var_60_float = 0; var_61_float = 0; // 0xf15 PushV
	var_62_int = 10; // 0xf16 PushI
	var_63_int = 30; // 0xf17 PushI
	rand(var_61_float, var_62_int, var_63_int); // 0xf18 Func
	var_64_int = 0; // 0xf1a PushI
	SetTimer(var_64_int, var_61_float); // 0xf1b Func
	return 2; // 0xf1d Return
}


func_2837(var_56_string, var_57_int)
{
	var_58_int = 2; // 0xb16 PushI
	var_59_bool = var_57_int == var_58_int; // 0xb17 Eq
	if(var_59_bool == 0) goto Label_2844; // 0xb18 JumpB
	var_56_string = "fire"; // 0xb19 MovS
	return 0; // 0xb1a Return
	
Label_2844:
	var_60_int = 1; // 0xb1c PushI
	var_61_bool = var_57_int == var_60_int; // 0xb1d Eq
	if(var_61_bool == 0) goto Label_2849; // 0xb1e JumpB
	var_56_string = "bullet"; // 0xb1f MovS
	return 0; // 0xb20 Return
	
Label_2849:
	var_56_string = "phys"; // 0xb21 MovS
	return 0; // 0xb22 Return
}


func_3353()
{
	func_3332(); // 0xd1a NEW_2
	var_17_int = 12; // 0xd1c PushI
	var_18_float = 0.6; // 0xd1d PushF
	SetTimer(var_17_int, var_18_float); // 0xd1e Func
	var_19_int = 1; // 0xd20 PushI
	ModNoise(var_19_int); // 0xd21 Func
	return 0; // 0xd23 Return
}


func_2330()
{
	return 0; // 0x91a Return
}


func_2331(var_1037_bool)
{
	var_1037_bool = 0; // 0x91b MovB
	return 0; // 0x91c Return
}


func_2333(var_1085_bool)
{
	var_1086_bool = 0; var_1087_bool = 0; // 0x91d PushV
	IsShooting(var_1087_bool); // 0x91e Func
	var_1085_bool = var_1087_bool; // 0x920 Mov
	return 2; // 0x921 Return
}


func_3870()
{
	var_671_object = Obj(); var_672_object = Obj(); // 0xf1e PushV
	GetScene(var_672_object); // 0xf1f Func
	var_673_string = "player_shot"; // 0xf21 PushS
	var_674_object = Obj(); // 0xf22 PushV
	func_3007(var_674_object); // 0xf23 NEW_2
	BroadcastMessage(var_673_string, var_674_object, var_672_object); // 0xf25 Func
	return 2; // 0xf27 Return
}


func_2338()
{
	func_2362(); // 0x923 NEW_2
	var_56_bool = 0; var_57_string = ""; var_58_int = 0; // 0x925 PushV
	var_57_string = "samopal_ammo"; // 0x926 MovS
	var_58_int = 2; // 0x927 MovI
	func_3404(var_56_bool, var_57_string, var_58_int); // 0x928 NEW_2
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


func_2851(var_82_bool, var_83_object)
{
	var_84_bool = 0; var_85_bool = 0; // 0xb23 PushV
	IsPlayerActor(var_83_object, var_85_bool); // 0xb24 Func
	var_82_bool = var_85_bool; // 0xb26 Mov
	return 2; // 0xb27 Return
}


func_3364()
{
	func_3221(); // 0xd25 NEW_2
	return 0; // 0xd27 Return
}


func_1317(var_687_int)
{
	var_687_int = 1; // 0x525 MovI
	return 0; // 0x526 Return
}


func_1319(var_692_float)
{
	var_692_float = 0.01745; // 0x527 MovF
	return 0; // 0x528 Return
}


func_2856(var_41_bool, var_42_object, var_43_string)
{
	var_44_bool = 0; var_45_bool = 0; // 0xb28 PushV
	var_46_string = "HasProperty"; // 0xb29 PushS
	var_47_int = 2; // 0xb2a PushI
	var_48_bool = IsFuncExist(var_42_object, var_46_string, var_47_int); // 0xb2b FuncExist
	var_49_bool = var_48_bool == 0; // 0xb2c Not
	if(var_49_bool == 0) goto Label_2864; // 0xb2d JumpB
	var_41_bool = 0; // 0xb2e MovB
	return 2; // 0xb2f Return
	
Label_2864:
	HasProperty(var_43_string, var_45_bool); // 0xb30 ObjFunc
	var_41_bool = var_45_bool; // 0xb32 Mov
	return 2; // 0xb33 Return
}


func_1321(var_715_bool)
{
	var_715_bool = 1; // 0x529 MovB
	return 0; // 0x52a Return
}


func_3368()
{
	func_3221(); // 0xd29 NEW_2
	return 0; // 0xd2b Return
}


func_1323()
{
	var_667_bool = 0; var_668_bool = 0; // 0x52b PushV
	var_669_string = "ammo"; // 0x52c PushS
	var_670_bool = 0; // 0x52d PushB
	SetWeaponProperty(var_668_bool, var_669_string, var_670_bool); // 0x52e Func
	func_3870(); // 0x531 NEW_2
	return 2; // 0x533 Return
}


func_3372()
{
	func_3221(); // 0xd2d NEW_2
	func_3301(); // 0xd30 NEW_2
	return 0; // 0xd32 Return
}


func_2868(var_29_string, var_30_float)
{
	var_31_float = 0; var_32_float = 0; // 0xb34 PushV
	GetProperty(var_29_string, var_32_float); // 0xb35 Func
	var_33_int = var_32_float + var_30_float; // 0xb37 Add
	SetProperty(var_29_string, var_33_int); // 0xb38 Func
	return 2; // 0xb3a Return
}


func_1332()
{
	func_1336(); // 0x535 NEW_2
	return 0; // 0x537 Return
}


func_1336()
{
	var_748_bool = 0; var_749_string = ""; var_750_int = 0; // 0x538 PushV
	var_749_string = "rifle_ammo"; // 0x539 MovS
	var_750_int = 1; // 0x53a MovI
	func_3404(var_748_bool, var_749_string, var_750_int); // 0x53b NEW_2
	if(var_748_bool == 0) goto Label_1354; // 0x53d JumpB
	var_751_string = ""; // 0x53e PushV
	func_1355(var_751_string); // 0x53f NEW_2
	var_752_string = "_reload"; // 0x541 PushS
	var_753_int = var_751_string + var_752_string; // 0x542 Add
	PlaySound(var_753_int); // 0x543 Func
	var_754_string = "reload"; // 0x545 PushS
	PlayAnimation(var_754_string); // 0x546 Func
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
	var_1092_int = 0; var_1093_int = 0; var_1094_object = Obj(); var_1095_bool = 0; var_1096_bool = 0; var_1097_bool = 0; var_1098_bool = 0; var_1099_int = 0; var_1100_int = 0; var_1101_int = 0; var_1102_int = 0; var_1103_object = Obj(); var_1104_bool = 0; var_1105_bool = 0; var_1106_bool = 0; var_1107_bool = 0; var_1108_int = 0; var_1109_int = 0; // 0x93b PushV
	var_0_bool = 0; // 0x93c TMovB
	var_1_bool = 0; // 0x93d TMovB
	GetWeaponItem(var_1101_int); // 0x93e Func
	var_1110_string = "use_begin"; // 0x940 PushS
	PlayAnimation(var_1110_string); // 0x941 Func
	WaitForAnimEnd(); // 0x943 Func
	var_1111_bool = var_0_bool; // 0x945 PushT
	if(var_1111_bool == 0) goto Label_2376; // 0x946 JumpB
	return 18; // 0x947 Return
	
Label_2376:
	GetWeaponItem(var_1102_int); // 0x948 Func
	GetPlayerSelectedObject(var_1103_object); // 0x94a Func
	var_1104_bool = 0; // 0x94c MovB
	var_1112_bool = var_1102_int == var_1101_int; // 0x94d Eq
	if(var_1112_bool == 0) goto Label_2428; // 0x94e JumpB
	var_1113_bool = 0; var_1114_object = Obj(); var_1115_string = ""; // 0x94f PushV
	var_1114_object = var_1103_object; // 0x950 Mov
	var_1115_string = "lp"; // 0x951 MovS
	func_2856(var_1113_bool, var_1114_object, var_1115_string); // 0x952 NEW_2
	if(var_1113_bool == 0) goto Label_2428; // 0x954 JumpB
	var_1116_string = "lp"; // 0x955 PushS
	GetProperty(var_1116_string, var_1105_bool); // 0x956 ObjFunc
	var_1117_bool = var_1105_bool; // 0x958 Push
	if(var_1117_bool == 0) goto Label_2428; // 0x959 JumpB
	var_1118_string = "locked"; // 0x95a PushS
	GetProperty(var_1118_string, var_1106_bool); // 0x95b ObjFunc
	var_1119_bool = var_1106_bool; // 0x95d Push
	if(var_1119_bool == 0) goto Label_2428; // 0x95e JumpB
	var_1104_bool = 1; // 0x95f MovB
	var_1120_string = "locked"; // 0x960 PushS
	var_1121_bool = 0; // 0x961 PushB
	SetProperty(var_1120_string, var_1121_bool); // 0x962 ObjFunc
	var_1108_int = 0; // 0x964 MovI
	var_1122_string = "uses"; // 0x965 PushS
	GetWeaponProperty(var_1107_bool, var_1122_string, var_1108_int); // 0x966 Func
	var_1123_int = 1; // 0x968 PushI
	var_1124_bool = var_1108_int <= var_1123_int; // 0x969 LE
	if(var_1124_bool == 0) goto Label_2423; // 0x96a JumpB
	GetWeaponItem(var_1109_int); // 0x96b Func
	var_1125_bool = 0; // 0x96d PushB
	var_1126_int = 0; // 0x96e PushI
	SelectItem(var_1109_int, var_1125_bool, var_1126_int); // 0x96f Func
	var_1127_int = 1; // 0x971 PushI
	var_1128_int = 0; // 0x972 PushI
	RemoveItem(var_1109_int, var_1127_int, var_1128_int); // 0x973 Func
	var_1_bool = 1; // 0x975 TMovB
	goto Label_2428; // 0x976 Jump
	
Label_2428:
	var_1129_bool = var_1104_bool; // 0x97c Push
	if(var_1129_bool == 0) goto Label_2434; // 0x97d JumpB
	var_1130_string = "use_success"; // 0x97e PushS
	PlayAnimation(var_1130_string); // 0x97f Func
	goto Label_2437; // 0x981 Jump
	
Label_2437:
	WaitForAnimEnd(); // 0x985 Func
	var_1131_bool = var_0_bool; // 0x987 PushT
	if(var_1131_bool == 0) goto Label_2442; // 0x988 JumpB
	return 18; // 0x989 Return
	
Label_2442:
	var_1132_bool = var_1_bool; // 0x98a PushT
	if(var_1132_bool == 0) goto Label_2461; // 0x98b JumpB
	var_1133_string = "holster"; // 0x98c PushS
	PlayAnimation(var_1133_string); // 0x98d Func
	WaitForAnimEnd(); // 0x98f Func
	var_1134_int = -1; // 0x991 PushI
	SetHandsItem(var_1134_int); // 0x992 Func
	var_1135_bool = var_0_bool; // 0x994 PushT
	if(var_1135_bool == 0) goto Label_2455; // 0x995 JumpB
	return 18; // 0x996 Return
	
Label_2455:
	var_1_bool = 0; // 0x997 TMovB
	var_1136_string = "unholster"; // 0x998 PushS
	PlayAnimation(var_1136_string); // 0x999 Func
	WaitForAnimEnd(); // 0x99b Func
	
Label_2461:
	return 18; // 0x99d Return
	
Label_2434:
	var_1137_string = "use_fail"; // 0x982 PushS
	PlayAnimation(var_1137_string); // 0x983 Func
	
Label_2423:
	var_1138_string = "uses"; // 0x977 PushS
	var_1139_int = 1; // 0x978 PushI
	var_1140_int = var_1108_int - var_1139_int; // 0x979 Sub
	SetWeaponProperty(var_1107_bool, var_1138_string, var_1140_int); // 0x97a Func
}


func_2875(var_40_bool, var_41_object, var_42_string, var_43_float, var_44_float, var_45_float)
{
	var_46_float = 0; var_47_float = 0; // 0xb3b PushV
	var_48_bool = 0; var_49_object = Obj(); var_50_string = ""; // 0xb3c PushV
	var_49_object = var_41_object; // 0xb3d Mov
	var_50_string = var_42_string; // 0xb3e Mov
	func_2856(var_48_bool, var_49_object, var_50_string); // 0xb3f NEW_2
	var_57_bool = var_48_bool == 0; // 0xb41 Not
	if(var_57_bool == 0) goto Label_2885; // 0xb42 JumpB
	var_40_bool = 0; // 0xb43 MovB
	return 2; // 0xb44 Return
	
Label_2885:
	GetProperty(var_42_string, var_47_float); // 0xb45 ObjFunc
	var_58_float = 0; var_59_float = 0; var_60_float = 0; var_61_float = 0; // 0xb47 PushV
	var_59_float = var_47_float + var_43_float; // 0xb48 Add2
	var_60_float = var_44_float; // 0xb49 Mov
	var_61_float = var_45_float; // 0xb4a Mov
	func_3020(var_58_float, var_59_float, var_60_float, var_61_float); // 0xb4b NEW_2
	SetProperty(var_42_string, var_58_float); // 0xb4d ObjFunc
	var_40_bool = 1; // 0xb4f MovB
	return 2; // 0xb50 Return
}


func_1355(var_661_string)
{
	var_661_string = "rifle"; // 0x54b MovS
	return 0; // 0x54c Return
}


func_3404(var_20_bool, var_21_string, var_22_int)
{
	var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; // 0xd4c PushV
	var_31_string = "ammo"; // 0xd4d PushS
	GetWeaponProperty(var_27_bool, var_31_string, var_28_int); // 0xd4e Func
	var_32_bool = 0; // 0xd50 PushV
	var_32_bool = 0; // 0xd51 MovB
	var_33_bool = var_27_bool; // 0xd52 Push
	if(var_33_bool == 0) goto Label_3415; // 0xd53 JumpB
	var_34_bool = var_28_int >= var_22_int; // 0xd54 GE
	if(var_34_bool == 0) goto Label_3415; // 0xd55 JumpB
	var_32_bool = 1; // 0xd56 MovB
	
Label_3415:
	if(var_32_bool == 0) goto Label_3418; // 0xd57 JumpB
	var_20_bool = 0; // 0xd58 MovB
	return 8; // 0xd59 Return
	
Label_3418:
	GetInvItemByName(var_29_int, var_21_string); // 0xd5a Func
	
Label_3420:
	var_35_bool = var_28_int < var_22_int; // 0xd5c LT
	if(var_35_bool == 0) goto Label_3431; // 0xd5d JumpB
	var_36_int = 1; // 0xd5e PushI
	RemoveItemByType(var_30_bool, var_29_int, var_36_int); // 0xd5f Func
	var_37_bool = var_30_bool == 0; // 0xd61 Not
	if(var_37_bool == 0) goto Label_3428; // 0xd62 JumpB
	goto Label_3431; // 0xd63 Jump
	
Label_3431:
	var_38_bool = var_28_int == 0; // 0xd67 Not
	if(var_38_bool == 0) goto Label_3435; // 0xd68 JumpB
	var_20_bool = 0; // 0xd69 MovB
	return 8; // 0xd6a Return
	
Label_3435:
	var_39_string = "ammo"; // 0xd6b PushS
	SetWeaponProperty(var_27_bool, var_39_string, var_28_int); // 0xd6c Func
	var_20_bool = 1; // 0xd6e MovB
	return 8; // 0xd6f Return
	
Label_3428:
	var_40_int = 1; // 0xd64 PushI
	var_28_int = var_28_int + var_40_int; // 0xd65 Add2
	goto Label_3420; // 0xd66 Jump
}


func_1357(var_688_float)
{
	var_688_float = 1.5; // 0x54d MovF
	return 0; // 0x54e Return
}


func_1359(var_712_int)
{
	var_712_int = 1; // 0x54f MovI
	return 0; // 0x550 Return
}


func_1361(var_714_int)
{
	var_714_int = 2; // 0x551 MovI
	return 0; // 0x552 Return
}


func_2897(var_22_float, var_23_object, var_24_float, var_25_int)
{
	var_29_int = 0; var_30_string = ""; var_31_int = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0; var_35_int = 0; var_36_string = ""; var_37_int = 0; var_38_float = 0; var_39_float = 0; var_40_float = 0; // 0xb51 PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0xb52 PushV
	var_42_object = var_23_object; // 0xb53 Mov
	var_43_string = "health"; // 0xb54 MovS
	func_2856(var_41_bool, var_42_object, var_43_string); // 0xb55 NEW_2
	var_50_bool = var_41_bool == 0; // 0xb57 Not
	if(var_50_bool == 0) goto Label_2907; // 0xb58 JumpB
	var_22_float = 0.0; // 0xb59 MovF
	return 12; // 0xb5a Return
	
Label_2907:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0xb5b PushV
	var_52_object = var_23_object; // 0xb5c Mov
	var_53_string = "armor"; // 0xb5d MovS
	func_2856(var_51_bool, var_52_object, var_53_string); // 0xb5e NEW_2
	var_54_bool = var_51_bool == 0; // 0xb60 Not
	if(var_54_bool == 0) goto Label_2916; // 0xb61 JumpB
	var_35_int = 0; // 0xb62 MovI
	goto Label_2919; // 0xb63 Jump
	
Label_2919:
	var_55_string = "armor_"; // 0xb67 PushS
	var_56_string = ""; var_57_int = 0; // 0xb68 PushV
	var_57_int = var_25_int; // 0xb69 Mov
	func_2837(var_56_string, var_57_int); // 0xb6a NEW_2
	var_36_string = var_55_string + var_56_string; // 0xb6c Add2
	var_62_bool = 0; var_63_object = Obj(); var_64_string = ""; // 0xb6d PushV
	var_63_object = var_23_object; // 0xb6e Mov
	var_64_string = var_36_string; // 0xb6f Mov
	func_2856(var_62_bool, var_63_object, var_64_string); // 0xb70 NEW_2
	var_65_bool = var_62_bool == 0; // 0xb72 Not
	if(var_65_bool == 0) goto Label_2934; // 0xb73 JumpB
	var_37_int = 0; // 0xb74 MovI
	goto Label_2936; // 0xb75 Jump
	
Label_2936:
	var_66_float = 0; var_67_float = 0; var_68_float = 0; // 0xb78 PushV
	var_69_int = var_35_int + var_37_int; // 0xb79 Add
	var_70_float = 100.0; // 0xb7a PushF
	var_67_float = var_69_int / var_69_int; // 0xb7b Div2
	var_68_float = 1; // 0xb7c MovI
	func_3013(var_66_float, var_67_float, var_68_float); // 0xb7d NEW_2
	var_38_float = var_66_float; // 0xb7e Mov
	var_72_string = "health"; // 0xb80 PushS
	GetProperty(var_72_string, var_39_float); // 0xb81 ObjFunc
	var_73_int = 1; // 0xb83 PushI
	var_74_int = var_73_int - var_38_float; // 0xb84 Sub
	var_40_float = var_24_float * var_74_int; // 0xb85 Mult2
	var_75_string = "health"; // 0xb86 PushS
	var_76_float = 0; var_77_float = 0; var_78_float = 0; var_79_float = 0; // 0xb87 PushV
	var_77_float = var_39_float - var_40_float; // 0xb88 Sub2
	var_78_float = 0; // 0xb89 MovI
	var_79_float = 1; // 0xb8a MovI
	func_3020(var_76_float, var_77_float, var_78_float, var_79_float); // 0xb8b NEW_2
	SetProperty(var_75_string, var_76_float); // 0xb8d ObjFunc
	var_82_bool = 0; var_83_object = Obj(); // 0xb8f PushV
	var_83_object = var_23_object; // 0xb90 Mov
	func_2851(var_82_bool, var_83_object); // 0xb91 NEW_2
	if(var_82_bool == 0) goto Label_2968; // 0xb93 JumpB
	var_86_float = 0; // 0xb94 PushV
	var_86_float = -var_40_float; // 0xb95 Neg2
	func_3125(var_86_float); // 0xb96 NEW_2
	
Label_2968:
	var_22_float = var_40_float; // 0xb98 Mov
	return 12; // 0xb99 Return
	
Label_2934:
	GetProperty(var_36_string, var_37_int); // 0xb76 ObjFunc
	
Label_2916:
	var_94_string = "armor"; // 0xb64 PushS
	GetProperty(var_94_string, var_35_int); // 0xb65 ObjFunc
}


func_1363(var_685_int)
{
	var_685_int = 2; // 0x553 MovI
	return 0; // 0x554 Return
}


func_1365(var_0_bool)
{
	var_582_string = ""; var_583_string = ""; var_584_int = 0; var_585_bool = 0; var_586_float = 0; var_587_float = 0; var_588_cvector = CVector(0,0,0); var_589_object = Obj(); var_590_int = 0; var_591_cvector = CVector(0,0,0); var_592_object = Obj(); var_593_int = 0; var_594_cvector = CVector(0,0,0); var_595_float = 0; var_596_float = 0; var_597_float = 0; var_598_object = Obj(); var_599_float = 0; var_600_object = Obj(); var_601_object = Obj(); var_602_int = 0; var_603_int = 0; var_604_object = Obj(); var_605_bool = 0; var_606_string = ""; var_607_string = ""; var_608_int = 0; var_609_bool = 0; var_610_float = 0; var_611_float = 0; var_612_cvector = CVector(0,0,0); var_613_object = Obj(); var_614_int = 0; var_615_cvector = CVector(0,0,0); var_616_object = Obj(); var_617_int = 0; var_618_cvector = CVector(0,0,0); var_619_float = 0; var_620_float = 0; var_621_float = 0; var_622_object = Obj(); var_623_float = 0; var_624_object = Obj(); var_625_object = Obj(); var_626_int = 0; var_627_int = 0; var_628_object = Obj(); var_629_bool = 0; // 0x555 PushV
	var_0_bool = 0; // 0x556 TMovB
	
Label_1367:
	var_630_bool = 0; // 0x557 PushV
	func_1282(var_630_bool); // 0x558 NEW_2
	var_665_bool = var_630_bool == 0; // 0x55a Not
	if(var_665_bool == 0) goto Label_1373; // 0x55b JumpB
	goto Label_1588; // 0x55c Jump
	
Label_1588:
	return 48; // 0x634 Return
	
Label_1373:
	GetCurrentWeapon(var_606_string); // 0x55d Func
	var_607_string = "attack1"; // 0x55f MovS
	var_666_bool = 1; // 0x560 PushB
	SetAttackState(var_666_bool); // 0x561 Func
	func_1323(); // 0x564 NEW_2
	var_677_string = "_phase1"; // 0x566 PushS
	var_678_int = var_607_string + var_677_string; // 0x567 Add
	PlayAnimation(var_678_int); // 0x568 Func
	WaitForAnimEnd(); // 0x56a Func
	var_679_bool = var_0_bool; // 0x56c PushT
	if(var_679_bool == 0) goto Label_1391; // 0x56d JumpB
	return 48; // 0x56e Return
	
Label_1391:
	var_680_string = "shot"; // 0x56f PushS
	TriggerWeapon(var_680_string); // 0x570 Func
	var_681_string = ""; // 0x572 PushV
	func_1355(var_681_string); // 0x573 NEW_2
	var_682_string = "_shot"; // 0x575 PushS
	var_683_int = var_681_string + var_682_string; // 0x576 Add
	PlaySound(var_683_int); // 0x577 Func
	var_684_int = 0; // 0x579 PushV
	var_685_int = 0; // 0x57a PushV
	func_1363(var_685_int); // 0x57b NEW_2
	var_684_int = var_685_int; // 0x57c Mov
	func_3451(var_684_int); // 0x57e NEW_2
	func_1600(); // 0x581 NEW_2
	var_686_bool = 0; // 0x583 PushB
	SetAttackState(var_686_bool); // 0x584 Func
	var_687_int = 0; // 0x586 PushV
	func_1317(var_687_int); // 0x587 NEW_2
	var_608_int = var_687_int; // 0x588 Mov
	var_609_bool = 0; // 0x58a MovB
	var_688_float = 0; // 0x58b PushV
	func_1357(var_688_float); // 0x58c NEW_2
	var_610_float = var_688_float / var_688_float; // 0x58e Div2
	var_689_float = 1.0; // 0x58f PushF
	var_690_float = 1.5; // 0x590 PushF
	var_691_float = 1.0; // 0x591 PushF
	var_692_float = 0; // 0x592 PushV
	func_1319(var_692_float); // 0x593 NEW_2
	var_693_float = var_691_float / var_692_float; // 0x595 Div
	var_694_float = 1.5; // 0x596 PushF
	var_695_int = var_693_float - var_694_float; // 0x597 Sub
	var_696_float = 0; // 0x598 PushV
	func_3440(var_696_float); // 0x599 NEW_2
	var_697_float = var_695_int * var_696_float; // 0x59b Mult
	var_698_int = var_690_float + var_697_float; // 0x59c Add
	var_611_float = var_689_float / var_689_float; // 0x59d Div2
	GetDirection(var_612_cvector); // 0x59e Func
	var_699_object = Obj(); // 0x5a0 PushV
	func_3048(var_699_object); // 0x5a1 NEW_2
	var_613_object = var_699_object; // 0x5a2 Mov
	var_614_int = 0; // 0x5a4 MovI
	
Label_1445:
	var_702_bool = var_614_int < var_608_int; // 0x5a5 LT
	if(var_702_bool == 0) goto Label_1543; // 0x5a6 JumpB
	RandVecCone3D(var_615_cvector, var_612_cvector, var_611_float); // 0x5a7 Func
	var_703_int = 10000; // 0x5a9 PushI
	GetVictimMaterialExact(var_616_object, var_617_int, var_618_cvector, var_615_cvector, var_703_int); // 0x5aa Func
	var_704_object = var_616_object; // 0x5ac Push
	if(var_704_object == 0) goto Label_1539; // 0x5ad JumpB
	var_619_float = var_610_float; // 0x5ae Mov
	var_705_int = 4; // 0x5af PushI
	var_706_bool = var_617_int == var_705_int; // 0x5b0 Eq
	if(var_706_bool == 0) goto Label_1460; // 0x5b1 JumpB
	var_707_float = 3.0; // 0x5b2 PushF
	var_619_float = var_619_float * var_707_float; // 0x5b3 Mult2
	
Label_1460:
	var_708_float = 0; var_709_object = Obj(); var_710_float = 0; var_711_int = 0; // 0x5b4 PushV
	var_709_object = var_616_object; // 0x5b5 Mov
	var_710_float = var_619_float; // 0x5b6 Mov
	var_712_int = 0; // 0x5b7 PushV
	func_1359(var_712_int); // 0x5b8 NEW_2
	var_711_int = var_712_int; // 0x5b9 Mov
	func_2897(var_708_float, var_709_object, var_710_float, var_711_int); // 0x5bb NEW_2
	var_620_float = var_708_float; // 0x5bc Mov
	var_713_float = var_620_float; // 0x5be Push
	if(var_713_float == 0) goto Label_1521; // 0x5bf JumpB
	add(var_616_object); // 0x5c0 ObjFunc
	var_714_int = 0; // 0x5c2 PushV
	func_1361(var_714_int); // 0x5c3 NEW_2
	ReportHit(var_616_object, var_714_int, var_620_float, var_619_float, var_618_cvector, var_615_cvector); // 0x5c5 Func
	var_715_bool = 0; // 0x5c7 PushV
	func_1321(var_715_bool); // 0x5c8 NEW_2
	if(var_715_bool == 0) goto Label_1520; // 0x5ca JumpB
	var_716_string = "health"; // 0x5cb PushS
	GetProperty(var_716_string, var_621_float); // 0x5cc ObjFunc
	var_717_bool = var_621_float == 0; // 0x5ce Not
	if(var_717_bool == 0) goto Label_1520; // 0x5cf JumpB
	var_718_int = 10000; // 0x5d0 PushI
	GetVictimMaterialExact(var_622_object, var_617_int, var_618_cvector, var_615_cvector, var_718_int, var_616_object); // 0x5d1 Func
	var_719_bool = 0; // 0x5d3 PushV
	var_719_bool = 0; // 0x5d4 MovB
	var_720_object = var_622_object; // 0x5d5 Push
	if(var_720_object == 0) goto Label_1498; // 0x5d6 JumpB
	var_721_bool = var_622_object != var_616_object; // 0x5d7 Neq
	if(var_721_bool == 0) goto Label_1498; // 0x5d8 JumpB
	var_719_bool = 1; // 0x5d9 MovB
	
Label_1498:
	if(var_719_bool == 0) goto Label_1519; // 0x5da JumpB
	var_722_float = 0; var_723_object = Obj(); var_724_float = 0; var_725_int = 0; // 0x5db PushV
	var_723_object = var_622_object; // 0x5dc Mov
	var_726_float = 0.75; // 0x5dd PushF
	var_724_float = var_619_float * var_726_float; // 0x5de Mult2
	var_727_int = 0; // 0x5df PushV
	func_1359(var_727_int); // 0x5e0 NEW_2
	var_725_int = var_727_int; // 0x5e1 Mov
	func_2897(var_722_float, var_723_object, var_724_float, var_725_int); // 0x5e3 NEW_2
	var_623_float = var_722_float; // 0x5e4 Mov
	var_728_float = var_623_float; // 0x5e6 Push
	if(var_728_float == 0) goto Label_1519; // 0x5e7 JumpB
	add(var_622_object); // 0x5e8 ObjFunc
	var_729_int = 0; // 0x5ea PushV
	func_1361(var_729_int); // 0x5eb NEW_2
	ReportHit(var_622_object, var_729_int, var_623_float, var_619_float, var_618_cvector, var_615_cvector); // 0x5ed Func
	
Label_1519:
	var_622_object = 0; // 0x5ef SetNull
	
Label_1520:
	goto Label_1539; // 0x5f0 Jump
	
Label_1539:
	var_616_object = 0; // 0x603 SetNull
	var_730_int = 1; // 0x604 PushI
	var_614_int = var_614_int + var_730_int; // 0x605 Add2
	goto Label_1445; // 0x606 Jump
	
Label_1521:
	var_731_int = -1; // 0x5f1 PushI
	var_732_bool = var_617_int != var_731_int; // 0x5f2 Neq
	if(var_732_bool == 0) goto Label_1539; // 0x5f3 JumpB
	var_733_bool = var_609_bool == 0; // 0x5f4 Not
	if(var_733_bool == 0) goto Label_1539; // 0x5f5 JumpB
	GetScene(var_624_object); // 0x5f6 Func
	var_734_string = "scripted"; // 0x5f8 PushS
	var_735_cvector = CVector(0.0, 0.0, 1.0); // 0x5f9 PushVec
	var_736_string = "richochet.xml"; // 0x5fa PushS
	AddActorByType(var_625_object, var_734_string, var_624_object, var_618_cvector, var_735_cvector, var_736_string); // 0x5fb Func
	var_737_string = "Material"; // 0x5fd PushS
	SetScriptProperty(var_737_string, var_617_int); // 0x5fe ObjFunc
	var_609_bool = 1; // 0x600 MovB
	var_625_object = 0; // 0x601 SetNull
	var_624_object = 0; // 0x602 SetNull
	
Label_1543:
	size(var_626_int); // 0x607 ObjFunc
	var_627_int = 0; // 0x609 MovI
	
Label_1546:
	var_738_bool = var_627_int < var_626_int; // 0x60a LT
	if(var_738_bool == 0) goto Label_1571; // 0x60b JumpB
	get(var_628_object, var_627_int); // 0x60c ObjFunc
	ReportAttack(var_628_object); // 0x60e Func
	var_739_object = GlobalVars[2]; // 0x610 PushGE
	in(var_629_bool, var_628_object); // 0x611 ObjFunc
	var_740_bool = var_629_bool == 0; // 0x613 Not
	if(var_740_bool == 0) goto Label_1564; // 0x614 JumpB
	var_741_object = GlobalVars[3]; // 0x615 PushGE
	add(var_628_object); // 0x616 ObjFunc
	var_742_bool = 0; // 0x618 PushB
	BroadcastPlayerDamage(var_628_object, var_742_bool); // 0x619 Func
	goto Label_1567; // 0x61b Jump
	
Label_1567:
	var_628_object = 0; // 0x61f SetNull
	var_743_int = 1; // 0x620 PushI
	var_627_int = var_627_int + var_743_int; // 0x621 Add2
	goto Label_1546; // 0x622 Jump
	
Label_1564:
	var_744_bool = 1; // 0x61c PushB
	BroadcastPlayerDamage(var_628_object, var_744_bool); // 0x61d Func
	
Label_1571:
	var_745_string = "_phase2"; // 0x623 PushS
	var_746_int = var_607_string + var_745_string; // 0x624 Add
	PlayAnimation(var_746_int); // 0x625 Func
	WaitForAnimEnd(); // 0x627 Func
	var_747_bool = var_0_bool; // 0x629 PushT
	if(var_747_bool == 0) goto Label_1580; // 0x62a JumpB
	return 48; // 0x62b Return
	
Label_1580:
	func_1332(); // 0x62d NEW_2
	var_613_object = 0; // 0x62f SetNull
	var_755_bool = 0; // 0x630 PushV
	func_1601(var_755_bool); // 0x631 NEW_2
	if(var_755_bool == 0) goto Label_1367; // 0x633 JumpB
}


func_3440(var_380_float)
{
	var_381_bool = 0; var_382_int = 0; var_383_bool = 0; var_384_int = 0; // 0xd70 PushV
	var_385_string = "durability"; // 0xd71 PushS
	GetWeaponProperty(var_383_bool, var_385_string, var_384_int); // 0xd72 Func
	var_386_bool = var_383_bool; // 0xd74 Push
	if(var_386_bool == 0) goto Label_3449; // 0xd75 JumpB
	var_387_float = 100.0; // 0xd76 PushF
	var_380_float = var_384_int / var_384_int; // 0xd77 Div2
	goto Label_3450; // 0xd78 Jump
	
Label_3450:
	return 4; // 0xd7a Return
	
Label_3449:
	var_380_float = 1.0; // 0xd79 MovF
}


func_3451(var_412_int)
{
	var_414_bool = 0; var_415_int = 0; var_416_bool = 0; var_417_int = 0; // 0xd7b PushV
	var_418_string = "durability"; // 0xd7c PushS
	GetWeaponProperty(var_416_bool, var_418_string, var_417_int); // 0xd7d Func
	var_419_bool = var_416_bool == 0; // 0xd7f Not
	if(var_419_bool == 0) goto Label_3458; // 0xd80 JumpB
	var_417_int = 100; // 0xd81 MovI
	
Label_3458:
	var_420_int = 0; var_421_int = 0; var_422_int = 0; var_423_int = 0; // 0xd82 PushV
	var_421_int = var_417_int - var_412_int; // 0xd83 Sub2
	var_422_int = 0; // 0xd84 MovI
	var_423_int = 100; // 0xd85 MovI
	func_3031(var_420_int, var_421_int, var_422_int, var_423_int); // 0xd86 NEW_2
	var_417_int = var_420_int; // 0xd87 Mov
	var_426_string = "durability"; // 0xd89 PushS
	SetWeaponProperty(var_416_bool, var_426_string, var_417_int); // 0xd8a Func
	return 4; // 0xd8c Return
}


func_3469(var_377_float, var_378_float)
{
	var_380_float = 0; // 0xd8e PushV
	func_3440(var_380_float); // 0xd8f NEW_2
	var_388_int = 1; // 0xd91 PushI
	var_389_int = var_388_int - var_378_float; // 0xd92 Sub
	var_390_float = var_380_float * var_389_int; // 0xd93 Mult
	var_377_float = var_378_float + var_390_float; // 0xd94 Add2
	return 0; // 0xd95 Return
}


func_3478(var_13_bool, var_14_int)
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_bool = 0; var_21_int = 0; var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_bool = 0; var_32_int = 0; var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_bool = 0; // 0xd96 PushV
	var_37_int = 0; // 0xd97 PushV
	func_3186(var_37_int); // 0xd98 NEW_2
	var_41_int = 0; // 0xd9a PushI
	var_42_bool = var_37_int == var_41_int; // 0xd9b Eq
	if(var_42_bool == 0) goto Label_3547; // 0xd9c JumpB
	var_26_int = 0; // 0xd9d MovI
	var_43_string = "birdMaskAchievement"; // 0xd9e PushS
	GetVariable(var_43_string, var_26_int); // 0xd9f Func
	var_44_int = 0; // 0xda1 PushI
	var_45_bool = var_26_int == var_44_int; // 0xda2 Eq
	if(var_45_bool == 0) goto Label_3547; // 0xda3 JumpB
	var_46_int = 1; // 0xda4 PushI
	GetItemCount(var_27_int, var_46_int); // 0xda5 Func
	var_47_string = "bird_mask"; // 0xda7 PushS
	GetInvItemByName(var_28_int, var_47_string); // 0xda8 Func
	var_48_string = "bird_balahon"; // 0xdaa PushS
	GetInvItemByName(var_29_int, var_48_string); // 0xdab Func
	var_30_bool = 0; // 0xdad MovB
	var_31_bool = 0; // 0xdae MovB
	var_32_int = 0; // 0xdaf MovI
	
Label_3504:
	var_49_bool = var_32_int < var_27_int; // 0xdb0 LT
	if(var_49_bool == 0) goto Label_3532; // 0xdb1 JumpB
	var_50_int = 1; // 0xdb2 PushI
	GetItem(var_33_object, var_32_int, var_50_int); // 0xdb3 Func
	GetItemID(var_34_int); // 0xdb5 ObjFunc
	var_51_bool = var_34_int == var_28_int; // 0xdb7 Eq
	if(var_51_bool == 0) goto Label_3520; // 0xdb8 JumpB
	var_52_int = 1; // 0xdb9 PushI
	IsItemSelected(var_35_bool, var_32_int, var_52_int); // 0xdba Func
	var_53_bool = var_35_bool; // 0xdbc Push
	if(var_53_bool == 0) goto Label_3519; // 0xdbd JumpB
	var_30_bool = 1; // 0xdbe MovB
	
Label_3519:
	goto Label_3528; // 0xdbf Jump
	
Label_3528:
	var_33_object = 0; // 0xdc8 SetNull
	var_54_int = 1; // 0xdc9 PushI
	var_32_int = var_32_int + var_54_int; // 0xdca Add2
	goto Label_3504; // 0xdcb Jump
	
Label_3520:
	var_55_bool = var_34_int == var_29_int; // 0xdc0 Eq
	if(var_55_bool == 0) goto Label_3528; // 0xdc1 JumpB
	var_56_int = 1; // 0xdc2 PushI
	IsItemSelected(var_36_bool, var_32_int, var_56_int); // 0xdc3 Func
	var_57_bool = var_36_bool; // 0xdc5 Push
	if(var_57_bool == 0) goto Label_3528; // 0xdc6 JumpB
	var_31_bool = 1; // 0xdc7 MovB
	
Label_3532:
	var_58_bool = 0; // 0xdcc PushV
	var_58_bool = 0; // 0xdcd MovB
	var_59_bool = var_30_bool; // 0xdce Push
	if(var_59_bool == 0) goto Label_3539; // 0xdcf JumpB
	var_60_bool = var_31_bool; // 0xdd0 Push
	if(var_60_bool == 0) goto Label_3539; // 0xdd1 JumpB
	var_58_bool = 1; // 0xdd2 MovB
	
Label_3539:
	if(var_58_bool == 0) goto Label_3547; // 0xdd3 JumpB
	var_61_string = "birdMaskAchievement"; // 0xdd4 PushS
	var_62_int = 1; // 0xdd5 PushI
	SetVariable(var_61_string, var_62_int); // 0xdd6 Func
	var_63_string = "ACHIEVEMENT_THEY"; // 0xdd8 PushS
	UnlockAchievement(var_63_string); // 0xdd9 Func
	
Label_3547:
	var_64_bool = 0; var_65_int = 0; // 0xddb PushV
	var_65_int = var_14_int; // 0xddc Mov
	func_3192(var_64_bool, var_65_int); // 0xddd NEW_2
	var_13_bool = var_64_bool; // 0xdde Mov
	return 22; // 0xde0 Return
}


func_2970(var_130_bool)
{
	var_132_bool = 0; var_133_bool = 0; // 0xb9a PushV
	IsDead(var_133_bool); // 0xb9b ObjFunc
	var_130_bool = var_133_bool; // 0xb9d Mov
	return 2; // 0xb9e Return
}


func_2975(var_85_string, var_86_int)
{
	var_87_int = 1; // 0xba0 PushI
	var_88_bool = var_86_int == var_87_int; // 0xba1 Eq
	if(var_88_bool == 0) goto Label_2982; // 0xba2 JumpB
	var_85_string = "wood"; // 0xba3 MovS
	return 0; // 0xba4 Return
	
Label_2982:
	var_89_int = 2; // 0xba6 PushI
	var_90_bool = var_86_int == var_89_int; // 0xba7 Eq
	if(var_90_bool == 0) goto Label_2988; // 0xba8 JumpB
	var_85_string = "metal"; // 0xba9 MovS
	return 0; // 0xbaa Return
	
Label_2988:
	var_91_int = 3; // 0xbac PushI
	var_92_bool = var_86_int == var_91_int; // 0xbad Eq
	if(var_92_bool == 0) goto Label_2994; // 0xbae JumpB
	var_85_string = "ground"; // 0xbaf MovS
	return 0; // 0xbb0 Return
	
Label_2994:
	var_93_int = 4; // 0xbb2 PushI
	var_94_bool = var_86_int == var_93_int; // 0xbb3 Eq
	if(var_94_bool == 0) goto Label_3000; // 0xbb4 JumpB
	var_85_string = "water"; // 0xbb5 MovS
	return 0; // 0xbb6 Return
	
Label_3000:
	var_95_int = 5; // 0xbb8 PushI
	var_96_bool = var_86_int == var_95_int; // 0xbb9 Eq
	if(var_96_bool == 0) goto Label_3005; // 0xbba JumpB
	var_85_string = "carpet"; // 0xbbb MovS
	return 0; // 0xbbc Return
	
Label_3005:
	var_85_string = "stone"; // 0xbbd MovS
	return 0; // 0xbbe Return
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


func_1965(var_872_bool)
{
	var_872_bool = 0; // 0x7ad MovB
	return 0; // 0x7ae Return
}


func_1967(var_920_bool)
{
	var_921_bool = 0; var_922_bool = 0; // 0x7af PushV
	IsShooting(var_922_bool); // 0x7b0 Func
	var_920_bool = var_922_bool; // 0x7b2 Mov
	return 2; // 0x7b3 Return
}


func_1972()
{
	func_1996(); // 0x7b5 NEW_2
	var_47_bool = 0; var_48_string = ""; var_49_int = 0; // 0x7b7 PushV
	var_48_string = "revolver_ammo"; // 0x7b8 MovS
	var_49_int = 6; // 0x7b9 MovI
	func_3404(var_47_bool, var_48_string, var_49_int); // 0x7ba NEW_2
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


func_444()
{
	return 0; // 0x1bc Return
}


func_445(var_70_bool)
{
	var_70_bool = 0; // 0x1bd MovB
	return 0; // 0x1be Return
}


func_3007(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0xbbf PushV
	self(var_28_object); // 0xbc0 Func
	var_26_object = var_28_object; // 0xbc2 Mov
	return 2; // 0xbc3 Return
}


func_447(var_225_bool)
{
	var_226_bool = 0; var_227_bool = 0; // 0x1bf PushV
	IsShooting(var_227_bool); // 0x1c0 Func
	var_225_bool = var_227_bool; // 0x1c2 Mov
	return 2; // 0x1c3 Return
}


func_2495(var_63_string)
{
	var_64_string = "empty"; // 0x9c0 PushS
	var_65_bool = var_63_string == var_64_string; // 0x9c1 Eq
	if(var_65_bool == 0) goto Label_2505; // 0x9c2 JumpB
	TaskCall(3); // 0x9c4 TaskCall
	func_465(var_66_bool); // 0x9c5 NEW_2
	TaskReturn(); // 0x9c6 TaskReturn
	goto Label_2558; // 0x9c8 Jump
	
Label_2558:
	return 0; // 0x9fe Return
	
Label_2505:
	var_284_string = "scalpel"; // 0x9c9 PushS
	var_285_bool = var_63_string == var_284_string; // 0x9ca Eq
	if(var_285_bool == 0) goto Label_2514; // 0x9cb JumpB
	TaskCall(4); // 0x9cd TaskCall
	func_753(var_286_bool); // 0x9ce NEW_2
	TaskReturn(); // 0x9cf TaskReturn
	goto Label_2558; // 0x9d1 Jump
	
Label_2514:
	var_443_string = "knife"; // 0x9d2 PushS
	var_444_bool = var_63_string == var_443_string; // 0x9d3 Eq
	if(var_444_bool == 0) goto Label_2523; // 0x9d4 JumpB
	TaskCall(5); // 0x9d6 TaskCall
	func_1039(var_445_bool); // 0x9d7 NEW_2
	TaskReturn(); // 0x9d8 TaskReturn
	goto Label_2558; // 0x9da Jump
	
Label_2523:
	var_579_string = "rifle"; // 0x9db PushS
	var_580_bool = var_63_string == var_579_string; // 0x9dc Eq
	if(var_580_bool == 0) goto Label_2532; // 0x9dd JumpB
	TaskCall(6); // 0x9df TaskCall
	func_1365(var_581_bool); // 0x9e0 NEW_2
	TaskReturn(); // 0x9e1 TaskReturn
	goto Label_2558; // 0x9e3 Jump
	
Label_2532:
	var_758_string = "revolver"; // 0x9e4 PushS
	var_759_bool = var_63_string == var_758_string; // 0x9e5 Eq
	if(var_759_bool == 0) goto Label_2541; // 0x9e6 JumpB
	TaskCall(8); // 0x9e8 TaskCall
	func_1740(var_760_bool); // 0x9e9 NEW_2
	TaskReturn(); // 0x9ea TaskReturn
	goto Label_2558; // 0x9ec Jump
	
Label_2541:
	var_923_string = "samopal"; // 0x9ed PushS
	var_924_bool = var_63_string == var_923_string; // 0x9ee Eq
	if(var_924_bool == 0) goto Label_2550; // 0x9ef JumpB
	TaskCall(10); // 0x9f1 TaskCall
	func_2106(var_925_bool); // 0x9f2 NEW_2
	TaskReturn(); // 0x9f3 TaskReturn
	goto Label_2558; // 0x9f5 Jump
	
Label_2550:
	var_1088_string = "lockpick"; // 0x9f6 PushS
	var_1089_bool = var_63_string == var_1088_string; // 0x9f7 Eq
	if(var_1089_bool == 0) goto Label_2558; // 0x9f8 JumpB
	TaskCall(12); // 0x9fa TaskCall
	func_2363(var_1090_bool, var_1091_bool); // 0x9fb NEW_2
	TaskReturn(); // 0x9fc TaskReturn
}


func_452(var_166_string)
{
	var_166_string = "punch"; // 0x1c4 MovS
	return 0; // 0x1c5 Return
}


func_3013(var_66_float, var_67_float, var_68_float)
{
	var_71_bool = var_67_float < var_68_float; // 0xbc6 LT
	if(var_71_bool == 0) goto Label_3018; // 0xbc7 JumpB
	var_66_float = var_67_float; // 0xbc8 Mov
	goto Label_3019; // 0xbc9 Jump
	
Label_3019:
	return 0; // 0xbcb Return
	
Label_3018:
	var_66_float = var_68_float; // 0xbca Mov
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


func_1997(var_974_bool)
{
	var_975_bool = 0; var_976_bool = 0; var_977_bool = 0; var_978_bool = 0; // 0x7cd PushV
	var_979_string = "ammo"; // 0x7ce PushS
	GetWeaponProperty(var_977_bool, var_979_string, var_978_bool); // 0x7cf Func
	var_980_bool = 0; // 0x7d1 PushV
	var_980_bool = 1; // 0x7d2 MovB
	var_981_bool = var_977_bool == 0; // 0x7d3 Not
	if(var_981_bool == 0) goto Label_2008; // 0x7d4 JumpB
	var_982_bool = var_978_bool == 0; // 0x7d5 Not
	if(var_982_bool == 0) goto Label_2008; // 0x7d6 JumpB
	var_980_bool = 0; // 0x7d7 MovB
	
Label_2008:
	if(var_980_bool == 0) goto Label_2030; // 0x7d8 JumpB
	var_983_bool = 0; var_984_string = ""; var_985_int = 0; // 0x7d9 PushV
	var_984_string = "samopal_ammo"; // 0x7da MovS
	var_985_int = 2; // 0x7db MovI
	func_3404(var_983_bool, var_984_string, var_985_int); // 0x7dc NEW_2
	var_986_bool = var_983_bool == 0; // 0x7de Not
	if(var_986_bool == 0) goto Label_2030; // 0x7df JumpB
	var_987_string = ""; // 0x7e0 PushV
	func_2096(var_987_string); // 0x7e1 NEW_2
	var_988_string = "_noammo"; // 0x7e3 PushS
	var_989_int = var_987_string + var_988_string; // 0x7e4 Add
	PlaySound(var_989_int); // 0x7e5 Func
	var_990_string = "noammo"; // 0x7e7 PushS
	PlayAnimation(var_990_string); // 0x7e8 Func
	WaitForAnimEnd(); // 0x7ea Func
	var_974_bool = 0; // 0x7ec MovB
	return 4; // 0x7ed Return
	
Label_2030:
	var_974_bool = 1; // 0x7ee MovB
	return 4; // 0x7ef Return
}


func_463(var_263_int)
{
	var_263_int = 0; // 0x1cf MovI
	return 0; // 0x1d0 Return
}


func_3020(var_76_float, var_77_float, var_78_float, var_79_float)
{
	var_80_bool = var_77_float < var_78_float; // 0xbcd LT
	if(var_80_bool == 0) goto Label_3025; // 0xbce JumpB
	var_76_float = var_78_float; // 0xbcf Mov
	return 0; // 0xbd0 Return
	
Label_3025:
	var_81_bool = var_77_float > var_79_float; // 0xbd1 GT
	if(var_81_bool == 0) goto Label_3029; // 0xbd2 JumpB
	var_76_float = var_79_float; // 0xbd3 Mov
	return 0; // 0xbd4 Return
	
Label_3029:
	var_76_float = var_77_float; // 0xbd5 Mov
	return 0; // 0xbd6 Return
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
	func_2856(var_121_bool, var_122_object, var_123_string); // 0x201 NEW_2
	if(var_121_bool == 0) goto Label_517; // 0x203 JumpB
	var_119_bool = 1; // 0x204 MovB
	
Label_517:
	if(var_119_bool == 0) goto Label_525; // 0x205 JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x206 PushV
	var_131_object = var_93_object; // 0x207 Mov
	func_2970(var_131_object); // 0x208 NEW_2
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
	func_3073(var_140_float, var_141_cvector, var_142_cvector); // 0x21e NEW_2
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
	func_3073(var_178_float, var_179_cvector, var_180_cvector); // 0x261 NEW_2
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
	func_2897(var_190_float, var_191_object, var_192_float, var_193_int); // 0x278 NEW_2
	var_104_float = var_190_float; // 0x279 Mov
	var_255_float = var_104_float; // 0x27b Push
	if(var_255_float == 0) goto Label_672; // 0x27c JumpB
	var_256_int = 2; // 0x27d PushI
	irand(var_105_int, var_256_int); // 0x27e Func
	var_257_string = ""; // 0x280 PushV
	func_452(var_257_string); // 0x281 NEW_2
	var_258_string = "_hit"; // 0x283 PushS
	var_259_int = var_257_string + var_258_string; // 0x284 Add
	var_260_int = 1; // 0x285 PushI
	var_261_int = var_105_int + var_260_int; // 0x286 Add
	var_262_int = var_259_int + var_261_int; // 0x287 Add
	PlaySound(var_262_int); // 0x288 Func
	ReportAttack(var_93_object); // 0x28a Func
	var_263_int = 0; // 0x28c PushV
	func_463(var_263_int); // 0x28d NEW_2
	ReportHit(var_93_object, var_263_int, var_104_float, var_103_float, var_95_cvector, var_92_cvector); // 0x28f Func
	var_264_object = GlobalVars[2]; // 0x291 PushGE
	in(var_106_bool, var_93_object); // 0x292 ObjFunc
	var_265_bool = var_106_bool == 0; // 0x294 Not
	if(var_265_bool == 0) goto Label_669; // 0x295 JumpB
	var_266_object = GlobalVars[3]; // 0x296 PushGE
	add(var_93_object); // 0x297 ObjFunc
	var_267_bool = 0; // 0x299 PushB
	BroadcastPlayerDamage(var_93_object, var_267_bool); // 0x29a Func
	goto Label_672; // 0x29c Jump
	
Label_672:
	func_708(); // 0x2a1 NEW_2
	
Label_675:
	var_268_string = "_phase2"; // 0x2a3 PushS
	var_269_int = var_99_string + var_268_string; // 0x2a4 Add
	PlayAnimation(var_269_int); // 0x2a5 Func
	WaitForAnimEnd(); // 0x2a7 Func
	var_270_bool = var_0_bool; // 0x2a9 PushT
	if(var_270_bool == 0) goto Label_684; // 0x2aa JumpB
	return 40; // 0x2ab Return
	
Label_684:
	var_93_object = 0; // 0x2ac SetNull
	var_271_bool = 0; // 0x2ad PushV
	func_713(var_271_bool); // 0x2ae NEW_2
	if(var_271_bool == 0) goto Label_489; // 0x2b0 JumpB
	return 40; // 0x2b1 Return
	
Label_669:
	var_274_bool = 1; // 0x29d PushB
	BroadcastPlayerDamage(var_93_object, var_274_bool); // 0x29e Func
	
Label_614:
	var_96_bool = 0; // 0x266 MovB
	
Label_557:
	irand(var_100_int, var_87_int); // 0x22d Func
	var_275_string = ""; // 0x22f PushV
	func_711(var_275_string); // 0x230 NEW_2
	var_276_string = "attack"; // 0x232 PushS
	var_277_int = var_275_string + var_276_string; // 0x233 Add
	var_278_int = 1; // 0x234 PushI
	var_279_int = var_100_int + var_278_int; // 0x235 Add
	var_99_string = var_277_int + var_279_int; // 0x236 Add2
	var_280_string = ""; // 0x237 PushV
	func_452(var_280_string); // 0x238 NEW_2
	var_281_int = 1; // 0x23a PushI
	var_282_int = var_100_int + var_281_int; // 0x23b Add
	var_283_int = var_280_string + var_282_int; // 0x23c Add
	PlaySound(var_283_int); // 0x23d Func
	
Label_483:
	goto Label_468; // 0x1e3 Jump
}


func_3031(var_420_int, var_421_int, var_422_int, var_423_int)
{
	var_424_bool = var_421_int < var_422_int; // 0xbd8 LT
	if(var_424_bool == 0) goto Label_3036; // 0xbd9 JumpB
	var_420_int = var_422_int; // 0xbda Mov
	return 0; // 0xbdb Return
	
Label_3036:
	var_425_bool = var_421_int > var_423_int; // 0xbdc GT
	if(var_425_bool == 0) goto Label_3040; // 0xbdd JumpB
	var_420_int = var_423_int; // 0xbde Mov
	return 0; // 0xbdf Return
	
Label_3040:
	var_420_int = var_421_int; // 0xbe0 Mov
	return 0; // 0xbe1 Return
}


func_989(var_336_bool)
{
	var_336_bool = 0; // 0x3dd MovB
	return 0; // 0x3de Return
}


func_991(var_328_string)
{
	var_328_string = ""; // 0x3df MovS
	return 0; // 0x3e0 Return
}


func_993(var_430_bool)
{
	var_431_bool = 0; var_432_bool = 0; // 0x3e1 PushV
	IsShooting(var_432_bool); // 0x3e2 Func
	var_430_bool = var_432_bool; // 0x3e4 Mov
	return 2; // 0x3e5 Return
}


func_3042(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0xbe2 PushV
	CreateObjectSet(var_39_object); // 0xbe3 Func
	var_37_object = var_39_object; // 0xbe5 Mov
	return 2; // 0xbe6 Return
}


func_998(var_495_bool)
{
	var_495_bool = 1; // 0x3e6 MovB
	return 0; // 0x3e7 Return
}


func_1000(var_516_string)
{
	var_516_string = "knife"; // 0x3e8 MovS
	return 0; // 0x3e9 Return
}


func_3048(var_699_object)
{
	var_700_object = Obj(); var_701_object = Obj(); // 0xbe8 PushV
	CreateObjectVector(var_701_object); // 0xbe9 Func
	var_699_object = var_701_object; // 0xbeb Mov
	return 2; // 0xbec Return
}


func_1002(var_534_float, var_535_bool)
{
	var_536_bool = var_535_bool; // 0x3eb Push
	if(var_536_bool == 0) goto Label_1007; // 0x3ec JumpB
	var_534_float = 0.7; // 0x3ed MovF
	goto Label_1008; // 0x3ee Jump
	
Label_1008:
	return 0; // 0x3f0 Return
	
Label_1007:
	var_534_float = 0.4; // 0x3ef MovF
}


func_3054(var_143_float, var_144_cvector, var_145_cvector)
{
	var_146_float = GetByIndex(var_144_cvector, 0); // 0xbef PushE
	var_147_float = GetByIndex(var_145_cvector, 0); // 0xbf0 PushE
	var_148_float = var_146_float * var_147_float; // 0xbf1 Mult
	var_149_float = GetByIndex(var_144_cvector, 2); // 0xbf2 PushE
	var_150_float = GetByIndex(var_145_cvector, 2); // 0xbf3 PushE
	var_151_float = var_149_float * var_150_float; // 0xbf4 Mult
	var_143_float = var_148_float + var_151_float; // 0xbf5 Add2
	return 0; // 0xbf6 Return
}


func_2032(var_1011_int)
{
	var_1011_int = 5; // 0x7f0 MovI
	return 0; // 0x7f1 Return
}


func_1009(var_539_float)
{
	var_539_float = 0.5; // 0x3f1 MovF
	return 0; // 0x3f2 Return
}


func_2034(var_1016_float)
{
	var_1016_float = 0.03927; // 0x7f2 MovF
	return 0; // 0x7f3 Return
}


func_1011(var_562_int)
{
	var_562_int = 4; // 0x3f3 MovI
	return 0; // 0x3f4 Return
}


func_2036()
{
	var_993_bool = 0; var_994_int = 0; var_995_bool = 0; var_996_int = 0; // 0x7f4 PushV
	var_997_string = "ammo"; // 0x7f5 PushS
	GetWeaponProperty(var_995_bool, var_997_string, var_996_int); // 0x7f6 Func
	var_998_string = "ammo"; // 0x7f8 PushS
	var_999_int = 1; // 0x7f9 PushI
	var_1000_int = var_996_int - var_999_int; // 0x7fa Sub
	SetWeaponProperty(var_995_bool, var_998_string, var_1000_int); // 0x7fb Func
	func_3870(); // 0x7fe NEW_2
	return 4; // 0x800 Return
}


func_1013(var_547_int)
{
	var_547_int = 0; // 0x3f5 MovI
	return 0; // 0x3f6 Return
}


func_1015(var_556_int)
{
	var_556_int = 1; // 0x3f7 MovI
	return 0; // 0x3f8 Return
}


func_3063(var_152_float, var_153_cvector)
{
	var_154_float = GetByIndex(var_153_cvector, 0); // 0xbf8 PushE
	var_155_float = GetByIndex(var_153_cvector, 0); // 0xbf9 PushE
	var_156_float = var_154_float * var_155_float; // 0xbfa Mult
	var_157_float = GetByIndex(var_153_cvector, 2); // 0xbfb PushE
	var_158_float = GetByIndex(var_153_cvector, 2); // 0xbfc PushE
	var_159_float = var_157_float * var_158_float; // 0xbfd Mult
	var_160_int = var_156_float + var_159_float; // 0xbfe Add
	var_152_float = sqrt(var_160_int); // 0xbff Sqrt2
	return 0; // 0xc00 Return
}


func_1017(var_532_float, var_533_bool)
{
	var_534_float = 0; var_535_bool = 0; // 0x3fa PushV
	var_535_bool = var_533_bool; // 0x3fb Mov
	func_1002(var_534_float, var_535_bool); // 0x3fc NEW_2
	var_537_float = 0; var_538_float = 0; // 0x3fe PushV
	var_539_float = 0; // 0x3ff PushV
	func_1009(var_539_float); // 0x400 NEW_2
	var_538_float = var_539_float; // 0x401 Mov
	func_3469(var_537_float, var_538_float); // 0x403 NEW_2
	var_532_float = var_534_float * var_537_float; // 0x405 Mult2
	return 0; // 0x406 Return
}


func_2559(var_17_string)
{
	var_18_string = "rifle"; // 0xa00 PushS
	var_19_bool = var_17_string == var_18_string; // 0xa01 Eq
	if(var_19_bool == 0) goto Label_2569; // 0xa02 JumpB
	TaskCall(7); // 0xa04 TaskCall
	func_1606(); // 0xa05 NEW_2
	TaskReturn(); // 0xa06 TaskReturn
	goto Label_2586; // 0xa08 Jump
	
Label_2586:
	return 0; // 0xa1a Return
	
Label_2569:
	var_45_string = "revolver"; // 0xa09 PushS
	var_46_bool = var_17_string == var_45_string; // 0xa0a Eq
	if(var_46_bool == 0) goto Label_2578; // 0xa0b JumpB
	TaskCall(9); // 0xa0d TaskCall
	func_1972(); // 0xa0e NEW_2
	TaskReturn(); // 0xa0f TaskReturn
	goto Label_2586; // 0xa11 Jump
	
Label_2578:
	var_54_string = "samopal"; // 0xa12 PushS
	var_55_bool = var_17_string == var_54_string; // 0xa13 Eq
	if(var_55_bool == 0) goto Label_2586; // 0xa14 JumpB
	TaskCall(11); // 0xa16 TaskCall
	func_2338(); // 0xa17 NEW_2
	TaskReturn(); // 0xa18 TaskReturn
}


