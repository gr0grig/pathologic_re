task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); // 0x12 PushV
	var_11_object = var_9_object; // 0x13 Mov
	func_1229(var_10_bool, var_11_object); // 0x14 NEW_2
	if(var_10_bool == 0) goto Label_30; // 0x16 JumpB
	func_154(var_8_bool, var_9_object); // 0x18 NEW_2
	var_53_object = Obj(); // 0x1a PushV
	var_53_object = var_9_object; // 0x1b Mov
	func_1236(var_53_object); // 0x1c NEW_2
	
Label_30:
	return 0; // 0x1e Return
}


task_0_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = ""; // 0x20 PushV
	var_12_object = var_9_bool; // 0x21 Mov
	var_13_string = var_10_object; // 0x22 Mov
	func_1263(var_11_bool, var_12_object, var_13_string); // 0x23 NEW_2
	if(var_11_bool == 0) goto Label_41; // 0x25 JumpB
	func_154(var_9_bool, var_10_object); // 0x27 NEW_2
	
Label_41:
	var_59_object = Obj(); var_60_string = ""; // 0x29 PushV
	var_59_object = var_9_bool; // 0x2a Mov
	var_60_string = var_10_object; // 0x2b Mov
	func_1290(var_59_object, var_60_string); // 0x2c NEW_2
	return 0; // 0x2e Return
}


task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); // 0x30 PushV
	var_11_object = var_9_object; // 0x31 Mov
	func_1032(var_10_bool, var_11_object); // 0x32 NEW_2
	var_44_bool = var_10_bool == 0; // 0x34 Not
	if(var_44_bool == 0) goto Label_55; // 0x35 JumpB
	return 0; // 0x36 Return
	
Label_55:
	func_154(var_8_bool, var_9_object); // 0x38 NEW_2
	var_45_object = Obj(); // 0x3a PushV
	var_45_object = var_9_object; // 0x3b Mov
	func_1246(var_45_object); // 0x3c NEW_2
	return 0; // 0x3e Return
}


task_0_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x40 PushV
	var_10_object = var_9_object; // 0x41 Mov
	func_1340(var_10_object); // 0x42 NEW_2
	return 0; // 0x44 Return
}


task_0_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_string = "player_shot"; // 0x46 PushS
	var_12_bool = var_10_object == var_11_string; // 0x47 Eq
	if(var_12_bool == 0) goto Label_82; // 0x48 JumpB
	func_154(var_9_bool, var_10_object); // 0x4a NEW_2
	var_13_object = Obj(); // 0x4c PushV
	var_13_object = var_9_bool; // 0x4d Mov
	TaskCall(5); // 0x4e TaskCall
	func_607(var_17_object, var_13_object); // 0x4f NEW_2
	TaskReturn(); // 0x50 TaskReturn
	
Label_82:
	return 0; // 0x52 Return
}


task_0_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x94 Func
	return 0; // 0x96 Return
}


task_0_event_28(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	Stop(); // 0x97 Func
	return 0; // 0x99 Return
}


task_0_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_154(var_8_bool, var_9_object); // 0xa3 NEW_2
	var_10_object = Obj(); // 0xa5 PushV
	var_10_object = var_9_object; // 0xa6 Mov
	func_1321(); // 0xa7 NEW_2
	return 0; // 0xa9 Return
}


task_2_event_22(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object)
{
	return 0; // 0xdf Return
}


task_2_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	return 0; // 0xe1 Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	return 0; // 0xe3 Return
}


task_3_event_16(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = ""; // 0x145 PushV
	var_12_object = var_9_bool; // 0x146 Mov
	var_13_string = var_10_object; // 0x147 Mov
	func_1263(var_11_bool, var_12_object, var_13_string); // 0x148 NEW_2
	if(var_11_bool == 0) goto Label_334; // 0x14a JumpB
	func_340(); // 0x14c NEW_2
	
Label_334:
	var_59_object = Obj(); var_60_string = ""; // 0x14e PushV
	var_59_object = var_9_bool; // 0x14f Mov
	var_60_string = var_10_object; // 0x150 Mov
	func_1290(var_59_object, var_60_string); // 0x151 NEW_2
	return 0; // 0x153 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_340(); // 0x15d NEW_2
	var_10_object = Obj(); // 0x15f PushV
	var_10_object = var_9_object; // 0x160 Mov
	func_1321(); // 0x161 NEW_2
	return 0; // 0x163 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_string = "player_shot"; // 0x165 PushS
	var_12_bool = var_10_object == var_11_string; // 0x166 Eq
	if(var_12_bool == 0) goto Label_369; // 0x167 JumpB
	func_340(); // 0x169 NEW_2
	var_13_object = Obj(); // 0x16b PushV
	var_13_object = var_9_bool; // 0x16c Mov
	TaskCall(5); // 0x16d TaskCall
	func_607(var_17_object, var_13_object); // 0x16e NEW_2
	TaskReturn(); // 0x16f TaskReturn
	
Label_369:
	return 0; // 0x171 Return
}


task_4_event_16(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = ""; // 0x194 PushV
	var_12_object = var_9_bool; // 0x195 Mov
	var_13_string = var_10_object; // 0x196 Mov
	func_1263(var_11_bool, var_12_object, var_13_string); // 0x197 NEW_2
	if(var_11_bool == 0) goto Label_413; // 0x199 JumpB
	func_419(); // 0x19b NEW_2
	
Label_413:
	var_61_object = Obj(); var_62_string = ""; // 0x19d PushV
	var_61_object = var_9_bool; // 0x19e Mov
	var_62_string = var_10_object; // 0x19f Mov
	func_1290(var_61_object, var_62_string); // 0x1a0 NEW_2
	return 0; // 0x1a2 Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_419(); // 0x1ac NEW_2
	var_12_object = Obj(); // 0x1ae PushV
	var_12_object = var_9_object; // 0x1af Mov
	func_1321(); // 0x1b0 NEW_2
	return 0; // 0x1b2 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_int = 111; // 0x1b4 PushI
	var_11_bool = var_9_object == var_10_int; // 0x1b5 Eq
	if(var_11_bool == 0) goto Label_446; // 0x1b6 JumpB
	var_12_string = "run"; // 0x1b7 PushS
	Speak(var_12_string); // 0x1b8 Func
	func_389(); // 0x1bb NEW_2
	goto Label_450; // 0x1bd Jump
	
Label_450:
	return 0; // 0x1c2 Return
	
Label_446:
	var_19_int = 0; // 0x1be PushV
	var_19_int = var_9_object; // 0x1bf Mov
	func_567(var_8_bool, var_9_object, var_19_int); // 0x1c0 NEW_2
}


task_4_event_42(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_string = "player_shot"; // 0x1c4 PushS
	var_12_bool = var_10_object == var_11_string; // 0x1c5 Eq
	if(var_12_bool == 0) goto Label_464; // 0x1c6 JumpB
	func_419(); // 0x1c8 NEW_2
	var_15_object = Obj(); // 0x1ca PushV
	var_15_object = var_9_bool; // 0x1cb Mov
	TaskCall(5); // 0x1cc TaskCall
	func_607(var_19_object, var_15_object); // 0x1cd NEW_2
	TaskReturn(); // 0x1ce TaskReturn
	
Label_464:
	return 0; // 0x1d0 Return
}


task_4_event_10(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x24a Func
	return 0; // 0x24c Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int)
{
	var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x270 PushV
	var_14_int = 110; // 0x271 PushI
	var_15_bool = var_9_int == var_14_int; // 0x272 Eq
	if(var_15_bool == 0) goto Label_654; // 0x273 JumpB
	var_16_bool = 0; var_17_object = Obj(); // 0x274 PushV
	var_17_object = var_3_bool; // 0x275 MovT
	func_1032(var_16_bool, var_17_object); // 0x276 NEW_2
	var_50_bool = var_16_bool == 0; // 0x278 Not
	if(var_50_bool == 0) goto Label_638; // 0x279 JumpB
	func_675(); // 0x27b NEW_2
	goto Label_653; // 0x27d Jump
	
Label_653:
	goto Label_658; // 0x28d Jump
	
Label_658:
	return 4; // 0x292 Return
	
Label_638:
	GetPosition(var_12_cvector); // 0x27e Func
	GetPosition(var_13_cvector); // 0x280 TObjFunc
	var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x282 PushV
	var_54_cvector = var_12_cvector; // 0x283 Mov
	var_55_cvector = var_13_cvector; // 0x284 Mov
	func_1113(var_53_float, var_54_cvector, var_55_cvector); // 0x285 NEW_2
	var_58_float = 2250000.0; // 0x287 PushF
	var_59_bool = var_53_float >= var_58_float; // 0x288 GE
	if(var_59_bool == 0) goto Label_653; // 0x289 JumpB
	func_675(); // 0x28b NEW_2
	
Label_654:
	var_60_int = 0; // 0x28e PushV
	var_60_int = var_9_int; // 0x28f Mov
	func_800(var_11_cvector, var_12_cvector, var_13_cvector, var_60_int); // 0x290 NEW_2
}


task_5_event_16(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_string)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = ""; // 0x294 PushV
	var_12_object = var_9_object; // 0x295 Mov
	var_13_string = var_10_string; // 0x296 Mov
	func_1263(var_11_bool, var_12_object, var_13_string); // 0x297 NEW_2
	if(var_11_bool == 0) goto Label_669; // 0x299 JumpB
	func_675(); // 0x29b NEW_2
	
Label_669:
	var_61_object = Obj(); var_62_string = ""; // 0x29d PushV
	var_61_object = var_9_object; // 0x29e Mov
	var_62_string = var_10_string; // 0x29f Mov
	func_1290(var_61_object, var_62_string); // 0x2a0 NEW_2
	return 0; // 0x2a2 Return
}


task_5_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object)
{
	func_675(); // 0x2ac NEW_2
	var_12_object = Obj(); // 0x2ae PushV
	var_12_object = var_9_object; // 0x2af Mov
	func_1321(); // 0x2b0 NEW_2
	return 0; // 0x2b2 Return
}


task_5_event_0(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object)
{
	var_10_object = Obj(); // 0x2b4 PushV
	var_10_object = var_9_object; // 0x2b5 Mov
	func_1340(var_10_object); // 0x2b6 NEW_2
	return 0; // 0x2b8 Return
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object)
{
	var_10_object = Obj(); // 0x52a PushV
	var_10_object = var_9_object; // 0x52b Mov
	func_1256(); // 0x52c NEW_2
	return 0; // 0x52e Return
}


event_6(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x556 PushV
	var_11_object = Obj(); // 0x557 PushV
	func_1097(var_11_object); // 0x558 NEW_2
	var_10_object = var_11_object; // 0x559 Mov
	func_991(var_10_object); // 0x55b NEW_2
	if(var_9_bool == 0) goto Label_1379; // 0x55d JumpB
	var_16_bool = 0; var_17_string = ""; var_18_string = ""; // 0x55e PushV
	var_17_string = "quest_b1_05"; // 0x55f MovS
	var_18_string = "rat_dead"; // 0x560 MovS
	func_1191(var_16_bool, var_17_string, var_18_string); // 0x561 NEW_2
	
Label_1379:
	var_22_object = Obj(); // 0x563 PushV
	func_1097(var_22_object); // 0x564 NEW_2
	RemoveActor(var_22_object); // 0x566 Func
	Hold(); // 0x568 Func
	return 0; // 0x56a Return
}


main(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_float = 0; var_11_bool = 0; var_12_float = 0; // 0x0 PushV
	var_13_string = "health"; // 0x1 PushS
	HasProperty(var_13_string, var_11_bool); // 0x2 Func
	var_14_bool = var_11_bool; // 0x4 Push
	if(var_14_bool == 0) goto Label_12; // 0x5 JumpB
	var_15_string = "health"; // 0x6 PushS
	GetProperty(var_15_string, var_12_float); // 0x7 Func
	var_16_float = GlobalVars[0]; // 0x9 PushGE
	var_16_float = var_12_float; // 0xa Mov
	GlobalVars[0] = var_16_float; // 0xb PopGE
	
Label_12:
	func_83(var_11_bool, var_12_float); // 0xd NEW_2
	goto Label_12; // 0xf Jump
}


func_1155(var_20_object, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; // 0x483 PushV
	GetItemID(var_25_int); // 0x484 ObjFunc
	var_28_string = "Category"; // 0x486 PushS
	GetInvItemProperty(var_26_int, var_25_int, var_28_string); // 0x487 Func
	AddItem(var_27_bool, var_20_object, var_26_int, var_21_int); // 0x489 ObjFunc
	var_29_bool = var_27_bool == 0; // 0x48b Not
	if(var_29_bool == 0) goto Label_1168; // 0x48c JumpB
	DropItems(var_20_object, var_21_int); // 0x48d ObjFunc
	goto Label_1173; // 0x48f Jump
	
Label_1173:
	return 6; // 0x495 Return
	
Label_1168:
	var_30_int = 0; var_31_int = 0; // 0x490 PushV
	var_30_int = var_25_int; // 0x491 Mov
	var_31_int = var_21_int; // 0x492 Mov
	func_1143(var_30_int, var_31_int); // 0x493 NEW_2
}


func_389()
{
	var_13_float = 0; var_14_float = 0; // 0x185 PushV
	var_15_int = 10; // 0x186 PushI
	rand(var_14_float, var_15_int); // 0x187 Func
	var_16_int = 111; // 0x189 PushI
	var_17_int = 10; // 0x18a PushI
	var_18_int = var_14_float + var_17_int; // 0x18b Add
	SetTimer(var_16_int, var_18_int); // 0x18c Func
	return 2; // 0x18e Return
}


func_901(var_72_bool, var_73_object)
{
	var_74_bool = 0; var_75_bool = 0; // 0x385 PushV
	IsPlayerActor(var_73_object, var_75_bool); // 0x386 Func
	var_72_bool = var_75_bool; // 0x388 Mov
	return 2; // 0x389 Return
}


func_1032(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0; // 0x408 PushV
	var_29_bool = 0; var_30_object = Obj(); // 0x409 PushV
	var_30_object = var_26_object; // 0x40a Mov
	func_996(var_29_bool, var_30_object); // 0x40b NEW_2
	var_46_bool = var_29_bool == 0; // 0x40d Not
	if(var_46_bool == 0) goto Label_1041; // 0x40e JumpB
	var_25_bool = 0; // 0x40f MovB
	return 2; // 0x410 Return
	
Label_1041:
	var_47_bool = 0; var_48_object = Obj(); var_49_string = ""; // 0x411 PushV
	var_48_object = var_26_object; // 0x412 Mov
	var_49_string = "noaccess"; // 0x413 MovS
	func_906(var_47_bool, var_48_object, var_49_string); // 0x414 NEW_2
	var_56_bool = var_47_bool == 0; // 0x416 Not
	if(var_56_bool == 0) goto Label_1050; // 0x417 JumpB
	var_25_bool = 1; // 0x418 MovB
	return 2; // 0x419 Return
	
Label_1050:
	var_57_string = "noaccess"; // 0x41a PushS
	GetProperty(var_57_string, var_28_int); // 0x41b ObjFunc
	var_58_int = 0; // 0x41d PushI
	var_25_bool = var_28_int == var_58_int; // 0x41e Eq2
	return 2; // 0x41f Return
}


func_1290(var_61_object, var_62_string)
{
	var_63_float = 0; var_64_float = 0; // 0x50a PushV
	var_65_string = "health"; // 0x50b PushS
	var_66_bool = var_62_string == var_65_string; // 0x50c Eq
	if(var_66_bool == 0) goto Label_1320; // 0x50d JumpB
	var_67_string = "health"; // 0x50e PushS
	GetProperty(var_67_string, var_64_float); // 0x50f Func
	var_68_int = 0; // 0x511 PushI
	var_69_bool = var_64_float <= var_68_int; // 0x512 LE
	if(var_69_bool == 0) goto Label_1302; // 0x513 JumpB
	SignalDeath(var_61_object); // 0x514 Func
	
Label_1302:
	var_70_bool = 0; // 0x516 PushV
	var_70_bool = 0; // 0x517 MovB
	var_71_float = GlobalVars[0]; // 0x518 PushGE
	var_72_bool = var_64_float < var_71_float; // 0x519 LT
	if(var_72_bool == 0) goto Label_1313; // 0x51a JumpB
	var_73_bool = 0; var_74_object = Obj(); // 0x51b PushV
	var_74_object = var_61_object; // 0x51c Mov
	func_1032(var_73_bool, var_74_object); // 0x51d NEW_2
	if(var_73_bool == 0) goto Label_1313; // 0x51f JumpB
	var_70_bool = 1; // 0x520 MovB
	
Label_1313:
	if(var_70_bool == 0) goto Label_1320; // 0x521 JumpB
	var_75_object = Obj(); // 0x522 PushV
	var_75_object = var_61_object; // 0x523 Mov
	TaskCall(5); // 0x524 TaskCall
	func_607(var_79_object, var_75_object); // 0x525 NEW_2
	TaskReturn(); // 0x526 TaskReturn
	
Label_1320:
	return 2; // 0x528 Return
}


func_906(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0; // 0x38a PushV
	var_52_string = "HasProperty"; // 0x38b PushS
	var_53_int = 2; // 0x38c PushI
	var_54_bool = IsFuncExist(var_48_object, var_52_string, var_53_int); // 0x38d FuncExist
	var_55_bool = var_54_bool == 0; // 0x38e Not
	if(var_55_bool == 0) goto Label_914; // 0x38f JumpB
	var_47_bool = 0; // 0x390 MovB
	return 2; // 0x391 Return
	
Label_914:
	HasProperty(var_49_string, var_51_bool); // 0x392 ObjFunc
	var_47_bool = var_51_bool; // 0x394 Mov
	return 2; // 0x395 Return
}


func_142(var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0x8e PushV
	GetCameraFarDistance(var_34_float); // 0x8f Func
	var_32_float = var_34_float; // 0x91 Mov
	return 2; // 0x92 Return
}


func_399()
{
	var_13_int = 111; // 0x18f PushI
	KillTimer(var_13_int); // 0x190 Func
	return 0; // 0x192 Return
}


func_1174(var_153_float)
{
	var_154_object = Obj(); var_155_object = Obj(); // 0x496 PushV
	CreateFloatVector(var_155_object); // 0x497 Func
	add(var_153_float); // 0x499 ObjFunc
	var_156_int = 0; // 0x49b PushI
	var_157_bool = var_153_float < var_156_int; // 0x49c LT
	if(var_157_bool == 0) goto Label_1186; // 0x49d JumpB
	var_158_float = 0.7; // 0x49e PushF
	var_159_int = 500; // 0x49f PushI
	RumblePlay(var_158_float, var_159_int); // 0x4a0 Func
	
Label_1186:
	var_160_int = 15; // 0x4a2 PushI
	SendWorldWndMessage(var_160_int, var_155_object); // 0x4a3 Func
	return 2; // 0x4a5 Return
}


func_918(var_100_float, var_101_object, var_102_float, var_103_int)
{
	var_104_int = 0; var_105_string = ""; var_106_int = 0; var_107_float = 0; var_108_float = 0; var_109_float = 0; var_110_int = 0; var_111_string = ""; var_112_int = 0; var_113_float = 0; var_114_float = 0; var_115_float = 0; // 0x396 PushV
	var_116_bool = 0; var_117_object = Obj(); var_118_string = ""; // 0x397 PushV
	var_117_object = var_101_object; // 0x398 Mov
	var_118_string = "health"; // 0x399 MovS
	func_906(var_116_bool, var_117_object, var_118_string); // 0x39a NEW_2
	var_119_bool = var_116_bool == 0; // 0x39c Not
	if(var_119_bool == 0) goto Label_928; // 0x39d JumpB
	var_100_float = 0.0; // 0x39e MovF
	return 12; // 0x39f Return
	
Label_928:
	var_120_bool = 0; var_121_object = Obj(); var_122_string = ""; // 0x3a0 PushV
	var_121_object = var_101_object; // 0x3a1 Mov
	var_122_string = "armor"; // 0x3a2 MovS
	func_906(var_120_bool, var_121_object, var_122_string); // 0x3a3 NEW_2
	var_123_bool = var_120_bool == 0; // 0x3a5 Not
	if(var_123_bool == 0) goto Label_937; // 0x3a6 JumpB
	var_110_int = 0; // 0x3a7 MovI
	goto Label_940; // 0x3a8 Jump
	
Label_940:
	var_124_string = "armor_"; // 0x3ac PushS
	var_125_string = ""; var_126_int = 0; // 0x3ad PushV
	var_126_int = var_103_int; // 0x3ae Mov
	func_875(var_125_string, var_126_int); // 0x3af NEW_2
	var_111_string = var_124_string + var_125_string; // 0x3b1 Add2
	var_131_bool = 0; var_132_object = Obj(); var_133_string = ""; // 0x3b2 PushV
	var_132_object = var_101_object; // 0x3b3 Mov
	var_133_string = var_111_string; // 0x3b4 Mov
	func_906(var_131_bool, var_132_object, var_133_string); // 0x3b5 NEW_2
	var_134_bool = var_131_bool == 0; // 0x3b7 Not
	if(var_134_bool == 0) goto Label_955; // 0x3b8 JumpB
	var_112_int = 0; // 0x3b9 MovI
	goto Label_957; // 0x3ba Jump
	
Label_957:
	var_135_float = 0; var_136_float = 0; var_137_float = 0; // 0x3bd PushV
	var_138_int = var_110_int + var_112_int; // 0x3be Add
	var_139_float = 100.0; // 0x3bf PushF
	var_136_float = var_138_int / var_138_int; // 0x3c0 Div2
	var_137_float = 1; // 0x3c1 MovI
	func_1117(var_135_float, var_136_float, var_137_float); // 0x3c2 NEW_2
	var_113_float = var_135_float; // 0x3c3 Mov
	var_141_string = "health"; // 0x3c5 PushS
	GetProperty(var_141_string, var_114_float); // 0x3c6 ObjFunc
	var_142_int = 1; // 0x3c8 PushI
	var_143_int = var_142_int - var_113_float; // 0x3c9 Sub
	var_115_float = var_102_float * var_143_int; // 0x3ca Mult2
	var_144_string = "health"; // 0x3cb PushS
	var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_float = 0; // 0x3cc PushV
	var_146_float = var_114_float - var_115_float; // 0x3cd Sub2
	var_147_float = 0; // 0x3ce MovI
	var_148_float = 1; // 0x3cf MovI
	func_1124(var_145_float, var_146_float, var_147_float, var_148_float); // 0x3d0 NEW_2
	SetProperty(var_144_string, var_145_float); // 0x3d2 ObjFunc
	var_151_bool = 0; var_152_object = Obj(); // 0x3d4 PushV
	var_152_object = var_101_object; // 0x3d5 Mov
	func_901(var_151_bool, var_152_object); // 0x3d6 NEW_2
	if(var_151_bool == 0) goto Label_989; // 0x3d8 JumpB
	var_153_float = 0; // 0x3d9 PushV
	var_153_float = -var_115_float; // 0x3da Neg2
	func_1174(var_153_float); // 0x3db NEW_2
	
Label_989:
	var_100_float = var_115_float; // 0x3dd Mov
	return 12; // 0x3de Return
	
Label_955:
	GetProperty(var_111_string, var_112_int); // 0x3bb ObjFunc
	
Label_937:
	var_161_string = "armor"; // 0x3a9 PushS
	GetProperty(var_161_string, var_110_int); // 0x3aa ObjFunc
}


func_154(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x9a TMovB
	var_1_bool = 0; // 0x9b TMovB
	Stop(); // 0x9c Func
	StopGroup0(); // 0x9e Func
	return 0; // 0xa0 Return
}


func_1056(var_14_string)
{
	var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0x420 PushV
	IsExisting3DSound(var_23_bool, var_14_string); // 0x421 Func
	var_31_bool = var_23_bool == 0; // 0x423 Not
	if(var_31_bool == 0) goto Label_1081; // 0x424 JumpB
	var_24_int = 0; // 0x425 MovI
	
Label_1062:
	var_32_int = 1; // 0x426 PushI
	var_33_int = var_24_int + var_32_int; // 0x427 Add
	var_34_int = var_14_string + var_33_int; // 0x428 Add
	IsExisting3DSound(var_25_bool, var_34_int); // 0x429 Func
	var_35_bool = var_25_bool == 0; // 0x42b Not
	if(var_35_bool == 0) goto Label_1070; // 0x42c JumpB
	goto Label_1073; // 0x42d Jump
	
Label_1073:
	var_36_bool = var_24_int == 0; // 0x431 Not
	if(var_36_bool == 0) goto Label_1076; // 0x432 JumpB
	return 16; // 0x433 Return
	
Label_1076:
	irand(var_26_int, var_24_int); // 0x434 Func
	var_37_int = 1; // 0x436 PushI
	var_38_int = var_26_int + var_37_int; // 0x437 Add
	var_14_string = var_14_string + var_38_int; // 0x438 Add2
	
Label_1081:
	Is3DSoundLoaded(var_27_bool, var_14_string); // 0x439 Func
	var_39_bool = var_27_bool; // 0x43b Push
	if(var_39_bool == 0) goto Label_1096; // 0x43c JumpB
	GetEyesHeight(var_28_float); // 0x43d Func
	GetDirection(var_29_cvector); // 0x43f Func
	var_40_int = 50; // 0x441 PushI
	var_30_cvector = var_29_cvector * var_40_int; // 0x442 Mult2
	var_41_float = GetByIndex(var_30_cvector, 1); // 0x443 PushE
	var_41_float = var_41_float + var_28_float; // 0x444 Add2
	SetByIndex(var_30_cvector, 1) = var_41_float; // 0x445 PopE
	PlayGlobalSound(var_14_string, var_30_cvector); // 0x446 Func
	
Label_1096:
	return 16; // 0x448 Return
	
Label_1070:
	var_42_int = 1; // 0x42e PushI
	var_24_int = var_24_int + var_42_int; // 0x42f Add2
	goto Label_1062; // 0x430 Jump
}


func_800(var_0_bool, var_1_bool, var_2_object, var_60_int)
{
	var_61_cvector = CVector(0,0,0); var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_float = 0; // 0x320 PushV
	var_69_int = 120; // 0x321 PushI
	var_70_bool = var_60_int != var_69_int; // 0x322 Neq
	if(var_70_bool == 0) goto Label_805; // 0x323 JumpB
	return 8; // 0x324 Return
	
Label_805:
	var_71_bool = var_0_bool == 0; // 0x325 NullEq
	if(var_71_bool == 0) goto Label_814; // 0x326 JumpB
	Stop(); // 0x327 Func
	var_72_int = 1; // 0x329 PushI
	KillTimer(var_72_int); // 0x32a Func
	var_2_object = 1; // 0x32c TMovB
	goto Label_851; // 0x32d Jump
	
Label_851:
	return 8; // 0x353 Return
	
Label_814:
	GetDirection(var_65_cvector); // 0x32e Func
	var_73_float = 7000.0; // 0x330 PushF
	FindDirLength(var_66_float, var_65_cvector, var_73_float); // 0x331 Func
	var_74_cvector = CVector(0,0,0); var_75_float = 0; // 0x333 PushV
	var_75_float = 1.74533; // 0x334 MovF
	func_697(var_74_cvector, var_75_float); // 0x335 NEW_2
	var_67_cvector = var_74_cvector; // 0x336 Mov
	var_68_float = var_67_cvector | var_67_cvector; // 0x338 Or2
	var_104_bool = 0; // 0x339 PushV
	var_104_bool = 0; // 0x33a MovB
	var_105_float = 2500.0; // 0x33b PushF
	var_106_bool = var_68_float >= var_105_float; // 0x33c GE
	if(var_106_bool == 0) goto Label_844; // 0x33d JumpB
	var_107_bool = 0; // 0x33e PushV
	var_107_bool = 1; // 0x33f MovB
	var_108_float = var_66_float * var_66_float; // 0x340 Mult
	var_109_float = 2.25; // 0x341 PushF
	var_110_float = var_108_float * var_109_float; // 0x342 Mult
	var_111_bool = var_68_float >= var_110_float; // 0x343 GE
	if(var_111_bool == 0) goto Label_842; // 0x344 JumpB
	var_112_bool = 0; // 0x345 PushV
	func_859(var_107_bool, var_112_bool); // 0x346 NEW_2
	if(var_112_bool == 0) goto Label_842; // 0x348 JumpB
	var_107_bool = 0; // 0x349 MovB
	
Label_842:
	if(var_107_bool == 0) goto Label_844; // 0x34a JumpB
	var_104_bool = 1; // 0x34b MovB
	
Label_844:
	if(var_104_bool == 0) goto Label_851; // 0x34c JumpB
	Stop(); // 0x34d Func
	var_132_cvector = CVector(0,0,0); // 0x34f PushV
	func_889(var_132_cvector); // 0x350 NEW_2
	var_1_bool = var_132_cvector + var_67_cvector; // 0x352 Add2
}


func_419()
{
	func_399(); // 0x1a4 NEW_2
	func_589(var_10_object); // 0x1a7 NEW_2
	return 0; // 0x1a9 Return
}


func_675()
{
	var_10_int = 110; // 0x2a3 PushI
	KillTimer(var_10_int); // 0x2a4 Func
	func_852(var_9_object); // 0x2a7 NEW_2
	return 0; // 0x2a9 Return
}


func_1191(var_16_bool, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x4a7 PushV
	FindActor(var_20_object, var_17_string); // 0x4a8 Func
	var_21_bool = var_20_object == 0; // 0x4aa NullEq
	if(var_21_bool == 0) goto Label_1198; // 0x4ab JumpB
	var_16_bool = 0; // 0x4ac MovB
	return 2; // 0x4ad Return
	
Label_1198:
	Trigger(var_20_object, var_18_string); // 0x4ae Func
	var_16_bool = 1; // 0x4b0 MovB
	return 2; // 0x4b1 Return
}


func_170(var_42_bool)
{
	var_42_bool = 0; // 0xaa MovB
	return 0; // 0xab Return
}


func_172(var_36_object, var_37_cvector)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0xac PushV
	FindShiftedPathTo(var_39_object, var_37_cvector); // 0xad Func
	var_36_object = var_39_object; // 0xaf Mov
	return 2; // 0xb0 Return
}


func_1327(var_97_object)
{
	var_98_float = 0; var_99_float = 0; // 0x52f PushV
	var_100_float = 0; var_101_object = Obj(); var_102_float = 0; var_103_int = 0; // 0x530 PushV
	var_101_object = var_97_object; // 0x531 Mov
	var_102_float = 0.025; // 0x532 MovF
	var_103_int = 0; // 0x533 MovI
	func_918(var_100_float, var_101_object, var_102_float, var_103_int); // 0x534 NEW_2
	var_99_float = var_100_float; // 0x535 Mov
	var_162_int = 7; // 0x537 PushI
	var_163_float = 0.025; // 0x538 PushF
	ReportHit(var_97_object, var_162_int, var_99_float, var_163_float); // 0x539 Func
	return 2; // 0x53b Return
}


func_178()
{
	return 0; // 0xb2 Return
}


func_1203()
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x4b3 PushV
	GetScene(var_85_object); // 0x4b4 Func
	var_86_string = "battle"; // 0x4b6 PushS
	var_87_object = Obj(); // 0x4b7 PushV
	func_1097(var_87_object); // 0x4b8 NEW_2
	BroadcastMessage(var_86_string, var_87_object, var_85_object); // 0x4ba Func
	return 2; // 0x4bc Return
}


func_179()
{
	var_11_string = "death"; // 0xb3 PushS
	Speak(var_11_string); // 0xb4 Func
	var_12_string = ""; // 0xb6 PushV
	var_12_string = "die"; // 0xb7 MovS
	func_187(var_12_string); // 0xb8 NEW_2
	return 0; // 0xba Return
}


func_567(var_0_bool, var_1_bool, var_19_int)
{
	var_20_int = 0; // 0x238 PushI
	var_21_bool = var_19_int != var_20_int; // 0x239 Neq
	if(var_21_bool == 0) goto Label_572; // 0x23a JumpB
	return 0; // 0x23b Return
	
Label_572:
	var_22_bool = 0; var_23_object = Obj(); // 0x23c PushV
	var_23_object = var_1_bool; // 0x23d MovT
	func_596(var_22_bool, var_23_object); // 0x23e NEW_2
	var_58_bool = var_22_bool == 0; // 0x240 Not
	if(var_58_bool == 0) goto Label_579; // 0x241 JumpB
	var_0_bool = 1; // 0x242 TMovB
	
Label_579:
	var_59_int = 0; // 0x243 PushI
	KillTimer(var_59_int); // 0x244 Func
	Stop(); // 0x246 Func
	return 0; // 0x248 Return
}


func_697(var_94_cvector, var_95_float)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_float = 0; // 0x2b9 PushV
	GetPosition(var_102_cvector); // 0x2ba Func
	GetPosition(var_103_cvector); // 0x2bc TObjFunc
	GetDirection(var_104_cvector); // 0x2be Func
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); // 0x2c0 PushV
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); // 0x2c1 PushV
	var_111_cvector = var_102_cvector - var_103_cvector; // 0x2c2 Sub2
	func_1103(var_110_cvector, var_111_cvector); // 0x2c3 NEW_2
	var_117_float = 0.75; // 0x2c5 PushF
	var_118_float = var_104_cvector * var_117_float; // 0x2c6 Mult
	var_109_cvector = var_110_cvector + var_118_float; // 0x2c7 Add2
	func_1103(var_108_cvector, var_109_cvector); // 0x2c8 NEW_2
	var_105_cvector = var_108_cvector; // 0x2c9 Mov
	var_119_int = 32; // 0x2cb PushI
	var_120_float = 7000.0; // 0x2cc PushF
	FindLongestDir(var_106_cvector, var_107_float, var_105_cvector, var_95_float, var_119_int, var_120_float); // 0x2cd Func
	var_121_int = 100; // 0x2cf PushI
	var_107_float = var_107_float - var_121_int; // 0x2d0 Sub2
	var_122_int = 0; // 0x2d1 PushI
	var_123_bool = var_107_float < var_122_int; // 0x2d2 LT
	if(var_123_bool == 0) goto Label_725; // 0x2d3 JumpB
	var_107_float = 0; // 0x2d4 MovI
	
Label_725:
	var_94_cvector = var_106_cvector * var_107_float; // 0x2d5 Mult2
	return 12; // 0x2d6 Return
}


func_187(var_12_string)
{
	var_13_string = ""; // 0xbc PushV
	var_13_string = var_12_string; // 0xbd Mov
	func_196(var_13_string); // 0xbe NEW_2
	
Label_192:
	Hold(); // 0xc0 Func
	goto Label_192; // 0xc2 Jump
}


func_1340(var_10_object)
{
	var_11_object = Obj(); var_12_float = 0; var_13_object = Obj(); var_14_float = 0; // 0x53c PushV
	CreateInvItem(var_13_object); // 0x53d Func
	var_15_string = "rat"; // 0x53f PushS
	SetItemName(var_15_string); // 0x540 ObjFunc
	var_16_float = 0.25; // 0x542 PushF
	var_17_float = 0.5; // 0x543 PushF
	rand(var_14_float, var_16_float, var_17_float); // 0x544 Func
	var_18_string = "quality"; // 0x546 PushS
	SetProperty(var_18_string, var_14_float); // 0x547 ObjFunc
	var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; // 0x549 PushV
	var_19_object = var_10_object; // 0x54a Mov
	var_20_object = var_13_object; // 0x54b Mov
	var_21_int = 1; // 0x54c MovI
	func_1155(var_20_object, var_21_int); // 0x54d NEW_2
	var_35_object = Obj(); // 0x54f PushV
	func_1097(var_35_object); // 0x550 NEW_2
	RemoveActor(var_35_object); // 0x552 Func
	return 4; // 0x554 Return
}


func_1214(var_67_bool, var_68_object)
{
	var_69_bool = 0; var_70_object = Obj(); // 0x4bf PushV
	var_70_object = var_68_object; // 0x4c0 Mov
	func_1032(var_69_bool, var_70_object); // 0x4c1 NEW_2
	var_71_bool = var_69_bool == 0; // 0x4c3 Not
	if(var_71_bool == 0) goto Label_1223; // 0x4c4 JumpB
	var_67_bool = 0; // 0x4c5 MovB
	return 0; // 0x4c6 Return
	
Label_1223:
	var_72_bool = 0; var_73_object = Obj(); // 0x4c7 PushV
	var_73_object = var_68_object; // 0x4c8 Mov
	func_901(var_72_bool, var_73_object); // 0x4c9 NEW_2
	var_67_bool = var_72_bool; // 0x4ca Mov
	return 0; // 0x4cc Return
}


func_196(var_13_string)
{
	RemoveRTEnvelope(); // 0xc5 Func
	SetDeathState(); // 0xc7 Func
	Stop(); // 0xc9 Func
	StopAsync(); // 0xcb Func
	StopSecondaryAnimation(); // 0xcd Func
	var_14_string = ""; // 0xcf PushV
	var_14_string = var_13_string; // 0xd0 Mov
	func_1056(var_14_string); // 0xd1 NEW_2
	var_43_string = "all"; // 0xd3 PushS
	PlayAnimation(var_43_string, var_13_string); // 0xd4 Func
	WaitForAnimEnd(); // 0xd6 Func
	var_44_string = "all"; // 0xd8 PushS
	LockAnimationEnd(var_44_string, var_13_string); // 0xd9 Func
	RemoveEnvelope(); // 0xdb Func
	return 0; // 0xdd Return
}


func_1097(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x449 PushV
	self(var_13_object); // 0x44a Func
	var_11_object = var_13_object; // 0x44c Mov
	return 2; // 0x44d Return
}


func_1229(var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x4ce PushV
	var_13_object = var_11_object; // 0x4cf Mov
	func_1214(var_12_bool, var_13_object); // 0x4d0 NEW_2
	var_10_bool = var_12_bool; // 0x4d1 Mov
	return 0; // 0x4d3 Return
}


func_589(var_0_bool)
{
	var_0_bool = 1; // 0x24d TMovB
	var_14_int = 0; // 0x24e PushI
	KillTimer(var_14_int); // 0x24f Func
	Stop(); // 0x251 Func
	return 0; // 0x253 Return
}


func_1103(var_110_cvector, var_111_cvector)
{
	var_112_float = 0; var_113_float = 0; // 0x44f PushV
	var_114_int = var_111_cvector | var_111_cvector; // 0x450 Or
	var_113_float = sqrt(var_114_int); // 0x451 Sqrt2
	var_115_float = 0.0; // 0x452 PushF
	var_116_bool = var_113_float < var_115_float; // 0x453 LT
	if(var_116_bool == 0) goto Label_1111; // 0x454 JumpB
	var_110_cvector = CVector(0.0, 0.0, 0.0); // 0x455 MovV
	return 2; // 0x456 Return
	
Label_1111:
	var_110_cvector = var_111_cvector / var_111_cvector; // 0x457 Div2
	return 2; // 0x458 Return
}


func_465(var_0_bool, var_1_bool, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool)
{
	var_188_bool = 0; var_189_bool = 0; var_190_object = Obj(); var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_cvector = CVector(0,0,0); var_194_float = 0; var_195_object = Obj(); var_196_bool = 0; var_197_bool = 0; var_198_object = Obj(); var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_cvector = CVector(0,0,0); var_202_float = 0; var_203_object = Obj(); // 0x1d1 PushV
	var_0_bool = 0; // 0x1d2 TMovB
	var_1_bool = var_182_object; // 0x1d3 TMov
	var_197_bool = var_186_bool; // 0x1d4 Mov
	
Label_469:
	var_204_bool = 0; var_205_object = Obj(); // 0x1d5 PushV
	var_205_object = var_182_object; // 0x1d6 Mov
	func_596(var_204_bool, var_205_object); // 0x1d7 NEW_2
	var_208_bool = var_204_bool == 0; // 0x1d9 Not
	if(var_208_bool == 0) goto Label_477; // 0x1da JumpB
	var_181_bool = 0; // 0x1db MovB
	return 16; // 0x1dc Return
	
Label_477:
	GetPosition(var_199_cvector); // 0x1dd ObjFunc
	GetPosition(var_200_cvector); // 0x1df Func
	var_201_cvector = var_199_cvector - var_200_cvector; // 0x1e1 Sub2
	var_202_float = var_201_cvector | var_201_cvector; // 0x1e2 Or2
	var_209_bool = 0; // 0x1e3 PushV
	var_209_bool = 0; // 0x1e4 MovB
	var_210_int = 0; // 0x1e5 PushI
	var_211_bool = var_184_float > var_210_int; // 0x1e6 GT
	if(var_211_bool == 0) goto Label_492; // 0x1e7 JumpB
	var_212_float = var_184_float * var_184_float; // 0x1e8 Mult
	var_213_bool = var_202_float > var_212_float; // 0x1e9 GT
	if(var_213_bool == 0) goto Label_492; // 0x1ea JumpB
	var_209_bool = 1; // 0x1eb MovB
	
Label_492:
	if(var_209_bool == 0) goto Label_497; // 0x1ec JumpB
	Stop(); // 0x1ed Func
	var_181_bool = 0; // 0x1ef MovB
	return 16; // 0x1f0 Return
	
Label_497:
	var_214_float = var_183_float * var_183_float; // 0x1f1 Mult
	var_215_bool = var_202_float > var_214_float; // 0x1f2 GT
	if(var_215_bool == 0) goto Label_559; // 0x1f3 JumpB
	GetPFPosition(var_199_cvector); // 0x1f4 ObjFunc
	FindPathTo(var_203_object, var_199_cvector); // 0x1f6 Func
	var_216_bool = var_203_object != 0; // 0x1f8 NullNeq
	if(var_216_bool == 0) goto Label_508; // 0x1f9 JumpB
	var_198_object = var_203_object; // 0x1fa Mov
	var_203_object = 0; // 0x1fb SetNull
	
Label_508:
	var_217_bool = var_198_object != 0; // 0x1fc NullNeq
	if(var_217_bool == 0) goto Label_541; // 0x1fd JumpB
	var_218_bool = var_197_bool; // 0x1fe Push
	if(var_218_bool == 0) goto Label_518; // 0x1ff JumpB
	var_197_bool = 0; // 0x200 MovB
	RotatePath(var_198_object, var_196_bool); // 0x201 Func
	var_219_bool = var_196_bool == 0; // 0x203 Not
	if(var_219_bool == 0) goto Label_518; // 0x204 JumpB
	goto Label_565; // 0x205 Jump
	
Label_565:
	var_181_bool = !var_0_bool; // 0x235 Not2
	return 16; // 0x236 Return
	
Label_518:
	var_220_int = 0; // 0x206 PushI
	var_221_float = 0.3; // 0x207 PushF
	SetTimer(var_220_int, var_221_float); // 0x208 Func
	var_222_string = ""; // 0x20a PushV
	func_603(var_222_string); // 0x20b NEW_2
	var_223_string = ""; // 0x20d PushV
	func_605(var_223_string); // 0x20e NEW_2
	FollowPath(var_198_object, var_185_bool, var_196_bool, var_222_string, var_223_string); // 0x210 Func
	var_224_bool = var_196_bool == 0; // 0x212 Not
	if(var_224_bool == 0) goto Label_539; // 0x213 JumpB
	var_225_bool = var_0_bool; // 0x214 PushT
	if(var_225_bool == 0) goto Label_537; // 0x215 JumpB
	var_198_object = 0; // 0x216 SetNull
	goto Label_565; // 0x217 Jump
	
Label_537:
	goto Label_564; // 0x219 Jump
	
Label_564:
	goto Label_469; // 0x234 Jump
	
Label_539:
	var_198_object = 0; // 0x21b SetNull
	goto Label_557; // 0x21c Jump
	
Label_557:
	var_203_object = 0; // 0x22d SetNull
	goto Label_563; // 0x22e Jump
	
Label_563:
	var_198_object = 0; // 0x233 SetNull
	
Label_541:
	var_226_int = 0; // 0x21d PushI
	KillTimer(var_226_int); // 0x21e Func
	var_227_float = 0.5; // 0x220 PushF
	Sleep(var_227_float, var_196_bool); // 0x221 Func
	var_228_bool = var_196_bool == 0; // 0x223 Not
	if(var_228_bool == 0) goto Label_553; // 0x224 JumpB
	var_229_bool = var_0_bool; // 0x225 PushT
	if(var_229_bool == 0) goto Label_553; // 0x226 JumpB
	var_198_object = 0; // 0x227 SetNull
	goto Label_565; // 0x228 Jump
	
Label_553:
	var_230_int = 0; // 0x229 PushI
	var_231_float = 0.3; // 0x22a PushF
	SetTimer(var_230_int, var_231_float); // 0x22b Func
	
Label_559:
	var_232_int = 0; // 0x22f PushI
	KillTimer(var_232_int); // 0x230 Func
	goto Label_565; // 0x232 Jump
}


func_83(var_0_bool, var_1_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; // 0x53 PushV
	var_0_bool = 0; // 0x54 TMovB
	var_1_bool = 0; // 0x55 TMovB
	var_29_float = 0.5; // 0x56 PushF
	rand(var_23_float, var_29_float); // 0x57 Func
	Sleep(var_23_float); // 0x59 Func
	
Label_91:
	var_30_bool = var_0_bool == 0; // 0x5b Not
	if(var_30_bool == 0) goto Label_141; // 0x5c JumpB
	var_31_bool = var_1_bool == 0; // 0x5d Not
	if(var_31_bool == 0) goto Label_110; // 0x5e JumpB
	
Label_95:
	GetPosition(var_25_cvector); // 0x5f Func
	var_32_float = 0; // 0x61 PushV
	func_142(var_32_float); // 0x62 NEW_2
	GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool); // 0x64 Func
	var_35_bool = var_26_bool; // 0x66 Push
	if(var_35_bool == 0) goto Label_105; // 0x67 JumpB
	goto Label_109; // 0x68 Jump
	
Label_109:
	goto Label_111; // 0x6d Jump
	
Label_111:
	var_36_object = Obj(); var_37_cvector = CVector(0,0,0); // 0x6f PushV
	var_37_cvector = var_24_cvector; // 0x70 Mov
	func_172(var_36_object, var_37_cvector); // 0x71 NEW_2
	var_27_object = var_36_object; // 0x72 Mov
	var_40_bool = var_27_object != 0; // 0x74 NullNeq
	if(var_40_bool == 0) goto Label_136; // 0x75 JumpB
	RotatePath(var_27_object, var_28_bool); // 0x76 Func
	var_41_bool = var_28_bool; // 0x78 Push
	if(var_41_bool == 0) goto Label_135; // 0x79 JumpB
	var_42_bool = 0; // 0x7a PushV
	func_170(var_42_bool); // 0x7b NEW_2
	FollowPath(var_27_object, var_42_bool, var_28_bool); // 0x7d Func
	var_27_object = 0; // 0x7f SetNull
	var_43_bool = var_28_bool; // 0x80 Push
	if(var_43_bool == 0) goto Label_135; // 0x81 JumpB
	TaskCall(1); // 0x83 TaskCall
	func_178(); // 0x84 NEW_2
	TaskReturn(); // 0x85 TaskReturn
	
Label_135:
	goto Label_139; // 0x87 Jump
	
Label_139:
	var_27_object = 0; // 0x8b SetNull
	goto Label_91; // 0x8c Jump
	
Label_136:
	var_44_int = 1; // 0x88 PushI
	Sleep(var_44_int); // 0x89 Func
	
Label_105:
	var_45_int = 1; // 0x69 PushI
	Sleep(var_45_int); // 0x6a Func
	goto Label_95; // 0x6c Jump
	
Label_110:
	var_1_bool = 0; // 0x6e TMovB
	
Label_141:
	return 12; // 0x8d Return
}


func_1236(var_53_object)
{
	var_54_object = Obj(); // 0x4d5 PushV
	var_54_object = var_53_object; // 0x4d6 Mov
	TaskCall(3); // 0x4d7 TaskCall
	func_228(var_53_object, var_55_object, var_54_object); // 0x4d8 NEW_2
	TaskReturn(); // 0x4d9 TaskReturn
	ResetAAS(); // 0x4db Func
	return 0; // 0x4dd Return
}


func_340()
{
	Stop(); // 0x154 Func
	StopAnimation(); // 0x156 Func
	StopAsync(); // 0x158 Func
	return 0; // 0x15a Return
}


func_596(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_object = Obj(); // 0x255 PushV
	var_25_object = var_23_object; // 0x256 Mov
	func_1032(var_24_bool, var_25_object); // 0x257 NEW_2
	var_22_bool = var_24_bool; // 0x258 Mov
	return 0; // 0x25a Return
}


func_727(var_0_bool, var_1_bool, var_2_object, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; // 0x2d7 PushV
	var_0_bool = var_83_object; // 0x2d8 TMov
	var_94_cvector = CVector(0,0,0); var_95_float = 0; // 0x2d9 PushV
	var_95_float = 1.74533; // 0x2da MovF
	func_697(var_94_cvector, var_95_float); // 0x2db NEW_2
	var_89_cvector = var_94_cvector; // 0x2dc Mov
	var_90_float = var_89_cvector | var_89_cvector; // 0x2de Or2
	var_124_float = 2500.0; // 0x2df PushF
	var_125_bool = var_90_float < var_124_float; // 0x2e0 LT
	if(var_125_bool == 0) goto Label_756; // 0x2e1 JumpB
	var_126_cvector = CVector(0,0,0); var_127_float = 0; // 0x2e2 PushV
	var_127_float = 2.61799; // 0x2e3 MovF
	func_697(var_126_cvector, var_127_float); // 0x2e4 NEW_2
	var_89_cvector = var_126_cvector; // 0x2e5 Mov
	var_90_float = var_89_cvector | var_89_cvector; // 0x2e7 Or2
	var_128_float = 2500.0; // 0x2e8 PushF
	var_129_bool = var_90_float < var_128_float; // 0x2e9 LT
	if(var_129_bool == 0) goto Label_756; // 0x2ea JumpB
	var_130_string = "Can't retreat, distance: "; // 0x2eb PushS
	var_131_float = sqrt(var_90_float); // 0x2ec Sqrt
	var_132_int = var_130_string + var_131_float; // 0x2ed Add
	Trace(var_132_int); // 0x2ee Func
	var_133_float = 0.5; // 0x2f0 PushF
	Sleep(var_133_float); // 0x2f1 Func
	return 10; // 0x2f3 Return
	
Label_756:
	var_134_float = GetByIndex(var_89_cvector, 0); // 0x2f4 PushE
	var_135_float = GetByIndex(var_89_cvector, 2); // 0x2f5 PushE
	Rotate(var_134_float, var_135_float); // 0x2f6 Func
	var_136_cvector = CVector(0,0,0); // 0x2f8 PushV
	func_889(var_136_cvector); // 0x2f9 NEW_2
	var_1_bool = var_136_cvector + var_89_cvector; // 0x2fb Add2
	var_139_int = 120; // 0x2fc PushI
	var_140_float = 0.5; // 0x2fd PushF
	SetTimer(var_139_int, var_140_float); // 0x2fe Func
	var_2_object = 0; // 0x300 TMovB
	
Label_769:
	var_141_int = 1; // 0x301 PushI
	MovePoint(var_141_int, var_141_int, var_91_bool); // 0x302 Func
	var_142_bool = var_91_bool; // 0x304 Push
	if(var_142_bool == 0) goto Label_797; // 0x305 JumpB
	var_143_bool = var_0_bool == 0; // 0x306 NullEq
	if(var_143_bool == 0) goto Label_778; // 0x307 JumpB
	goto Label_799; // 0x308 Jump
	
Label_799:
	return 10; // 0x31f Return
	
Label_778:
	var_144_cvector = CVector(0,0,0); var_145_float = 0; // 0x30a PushV
	var_145_float = 2.61799; // 0x30b MovF
	func_697(var_144_cvector, var_145_float); // 0x30c NEW_2
	var_92_cvector = var_144_cvector; // 0x30d Mov
	var_93_float = var_92_cvector | var_92_cvector; // 0x30f Or2
	var_146_float = 2500.0; // 0x310 PushF
	var_147_bool = var_93_float >= var_146_float; // 0x311 GE
	if(var_147_bool == 0) goto Label_796; // 0x312 JumpB
	var_148_cvector = CVector(0,0,0); // 0x313 PushV
	func_889(var_148_cvector); // 0x314 NEW_2
	var_1_bool = var_148_cvector + var_92_cvector; // 0x316 Add2
	var_149_int = 120; // 0x317 PushI
	var_150_float = 0.5; // 0x318 PushF
	SetTimer(var_149_int, var_150_float); // 0x319 Func
	goto Label_797; // 0x31b Jump
	
Label_797:
	var_151_bool = var_2_object == 0; // 0x31d Not
	if(var_151_bool == 0) goto Label_769; // 0x31e JumpB
	
Label_796:
	goto Label_799; // 0x31c Jump
}


func_852(var_2_object)
{
	Stop(); // 0x354 Func
	var_11_int = 120; // 0x356 PushI
	KillTimer(var_11_int); // 0x357 Func
	var_2_object = 1; // 0x359 TMovB
	return 0; // 0x35a Return
}


func_1113(var_53_float, var_54_cvector, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x459 PushV
	var_57_cvector = var_55_cvector - var_54_cvector; // 0x45a Sub2
	var_53_float = var_57_cvector | var_57_cvector; // 0x45b Or2
	return 2; // 0x45c Return
}


func_603(var_222_string)
{
	var_222_string = "walk"; // 0x25b MovS
	return 0; // 0x25c Return
}


func_859(var_0_bool, var_112_bool)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x35b PushV
	GetDirection(var_115_cvector); // 0x35c Func
	var_117_cvector = CVector(0,0,0); var_118_object = Obj(); // 0x35e PushV
	var_118_object = var_0_bool; // 0x35f MovT
	func_894(var_118_object); // 0x360 NEW_2
	var_116_cvector = var_117_cvector; // 0x361 Mov
	var_123_float = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); // 0x363 PushV
	var_124_cvector = var_115_cvector; // 0x364 Mov
	var_125_cvector = var_116_cvector; // 0x365 Mov
	func_1135(var_123_float, var_124_cvector, var_125_cvector); // 0x366 NEW_2
	var_131_float = -0.34202; // 0x368 PushF
	var_112_bool = var_123_float >= var_131_float; // 0x369 GE2
	return 4; // 0x36a Return
}


func_605(var_223_string)
{
	var_223_string = "run"; // 0x25d MovS
	return 0; // 0x25e Return
}


func_1246(var_45_object)
{
	var_46_object = Obj(); // 0x4df PushV
	var_46_object = var_45_object; // 0x4e0 Mov
	TaskCall(3); // 0x4e1 TaskCall
	func_228(var_45_object, var_47_object, var_46_object); // 0x4e2 NEW_2
	TaskReturn(); // 0x4e3 TaskReturn
	ResetAAS(); // 0x4e5 Func
	return 0; // 0x4e7 Return
}


func_607(var_3_bool, var_75_object)
{
	var_3_bool = var_75_object; // 0x260 TMov
	var_80_string = "retreat"; // 0x261 PushS
	Speak(var_80_string); // 0x262 Func
	var_81_int = 110; // 0x264 PushI
	var_82_int = 1; // 0x265 PushI
	SetTimer(var_81_int, var_82_int); // 0x266 Func
	var_83_object = Obj(); // 0x268 PushV
	var_83_object = var_75_object; // 0x269 Mov
	func_727(var_78_bool, var_79_object, var_75_object, var_83_object); // 0x26a NEW_2
	var_152_int = 110; // 0x26c PushI
	KillTimer(var_152_int); // 0x26d Func
	return 0; // 0x26f Return
}


func_1117(var_135_float, var_136_float, var_137_float)
{
	var_140_bool = var_136_float < var_137_float; // 0x45e LT
	if(var_140_bool == 0) goto Label_1122; // 0x45f JumpB
	var_135_float = var_136_float; // 0x460 Mov
	goto Label_1123; // 0x461 Jump
	
Label_1123:
	return 0; // 0x463 Return
	
Label_1122:
	var_135_float = var_137_float; // 0x462 Mov
}


func_991(var_9_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x3df PushV
	IsDead(var_15_bool); // 0x3e0 ObjFunc
	var_9_bool = var_15_bool; // 0x3e2 Mov
	return 2; // 0x3e3 Return
}


func_1124(var_145_float, var_146_float, var_147_float, var_148_float)
{
	var_149_bool = var_146_float < var_147_float; // 0x465 LT
	if(var_149_bool == 0) goto Label_1129; // 0x466 JumpB
	var_145_float = var_147_float; // 0x467 Mov
	return 0; // 0x468 Return
	
Label_1129:
	var_150_bool = var_146_float > var_148_float; // 0x469 GT
	if(var_150_bool == 0) goto Label_1133; // 0x46a JumpB
	var_145_float = var_148_float; // 0x46b Mov
	return 0; // 0x46c Return
	
Label_1133:
	var_145_float = var_146_float; // 0x46d Mov
	return 0; // 0x46e Return
}


func_996(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x3e4 PushV
	var_35_bool = var_30_object == 0; // 0x3e5 NullEq
	if(var_35_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_29_bool = 0; // 0x3e7 MovB
	return 4; // 0x3e8 Return
	
Label_1001:
	var_36_bool = 0; // 0x3e9 PushV
	var_36_bool = 0; // 0x3ea MovB
	var_37_string = "IsDead"; // 0x3eb PushS
	var_38_int = 1; // 0x3ec PushI
	var_39_bool = IsFuncExist(var_30_object, var_37_string, var_38_int); // 0x3ed FuncExist
	if(var_39_bool == 0) goto Label_1013; // 0x3ee JumpB
	var_40_bool = 0; var_41_object = Obj(); // 0x3ef PushV
	var_41_object = var_30_object; // 0x3f0 Mov
	func_991(var_41_object); // 0x3f1 NEW_2
	if(var_40_bool == 0) goto Label_1013; // 0x3f3 JumpB
	var_36_bool = 1; // 0x3f4 MovB
	
Label_1013:
	if(var_36_bool == 0) goto Label_1016; // 0x3f5 JumpB
	var_29_bool = 0; // 0x3f6 MovB
	return 4; // 0x3f7 Return
	
Label_1016:
	GetScene(var_33_object); // 0x3f8 Func
	var_44_bool = var_33_object == 0; // 0x3fa NullEq
	if(var_44_bool == 0) goto Label_1022; // 0x3fb JumpB
	var_29_bool = 0; // 0x3fc MovB
	return 4; // 0x3fd Return
	
Label_1022:
	GetScene(var_34_object); // 0x3fe ObjFunc
	var_45_bool = var_33_object != var_34_object; // 0x400 Neq
	if(var_45_bool == 0) goto Label_1028; // 0x401 JumpB
	var_29_bool = 0; // 0x402 MovB
	return 4; // 0x403 Return
	
Label_1028:
	var_29_bool = 1; // 0x404 MovB
	return 4; // 0x405 Return
}


func_228(var_0_bool, var_46_object, var_171_bool)
{
	var_48_float = 0; var_49_float = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_float = 0; var_55_int = 0; var_56_object = Obj(); var_57_float = 0; var_58_float = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_float = 0; var_64_int = 0; var_65_object = Obj(); // 0xe4 PushV
	var_0_bool = var_46_object; // 0xe5 TMov
	GetAttackDistance(var_57_float); // 0xe6 Func
	var_66_int = 10; // 0xe8 PushI
	var_58_float = var_57_float + var_66_int; // 0xe9 Add2
	Face(var_0_bool); // 0xea Func
	
Label_236:
	var_67_bool = 0; var_68_object = Obj(); // 0xec PushV
	var_68_object = var_0_bool; // 0xed MovT
	func_1214(var_67_bool, var_68_object); // 0xee NEW_2
	if(var_67_bool == 0) goto Label_321; // 0xf0 JumpB
	GetPosition(var_60_cvector); // 0xf1 TObjFunc
	GetPosition(var_61_cvector); // 0xf3 Func
	var_62_cvector = var_60_cvector - var_61_cvector; // 0xf5 Sub2
	var_63_float = var_62_cvector | var_62_cvector; // 0xf6 Or2
	var_76_float = var_58_float * var_58_float; // 0xf7 Mult
	var_77_bool = var_63_float < var_76_float; // 0xf8 LT
	if(var_77_bool == 0) goto Label_306; // 0xf9 JumpB
	var_78_int = 2; // 0xfa PushI
	irand(var_64_int, var_78_int); // 0xfb Func
	var_79_string = "attack"; // 0xfd PushS
	var_80_int = 1; // 0xfe PushI
	var_81_int = var_64_int + var_80_int; // 0xff Add
	var_82_int = var_79_string + var_81_int; // 0x100 Add
	Speak(var_82_int); // 0x101 Func
	var_83_bool = 1; // 0x103 PushB
	SetAttackState(var_83_bool); // 0x104 Func
	func_1203(); // 0x107 NEW_2
	var_90_string = "all"; // 0x109 PushS
	var_91_string = "attack_begin"; // 0x10a PushS
	PlayAnimation(var_90_string, var_91_string); // 0x10b Func
	WaitForAnimEnd(var_59_bool); // 0x10d Func
	var_92_bool = var_59_bool == 0; // 0x10f Not
	if(var_92_bool == 0) goto Label_277; // 0x110 JumpB
	var_93_bool = 0; // 0x111 PushB
	SetAttackState(var_93_bool); // 0x112 Func
	goto Label_321; // 0x114 Jump
	
Label_321:
	StopAsync(); // 0x141 Func
	return 18; // 0x143 Return
	
Label_277:
	var_94_bool = 0; var_95_object = Obj(); // 0x115 PushV
	var_95_object = var_0_bool; // 0x116 MovT
	func_1032(var_94_bool, var_95_object); // 0x117 NEW_2
	if(var_94_bool == 0) goto Label_293; // 0x119 JumpB
	GetVictim(var_57_float, var_65_object); // 0x11a Func
	ReportAttack(var_0_bool); // 0x11c Func
	var_96_bool = var_65_object == var_0_bool; // 0x11e Eq
	if(var_96_bool == 0) goto Label_292; // 0x11f JumpB
	var_97_object = Obj(); // 0x120 PushV
	var_97_object = var_0_bool; // 0x121 MovT
	func_1327(var_97_object); // 0x122 NEW_2
	
Label_292:
	var_65_object = 0; // 0x124 SetNull
	
Label_293:
	var_164_bool = 0; // 0x125 PushB
	SetAttackState(var_164_bool); // 0x126 Func
	var_165_string = "all"; // 0x128 PushS
	var_166_string = "attack_end"; // 0x129 PushS
	PlayAnimation(var_165_string, var_166_string); // 0x12a Func
	WaitForAnimEnd(var_59_bool); // 0x12c Func
	var_167_bool = var_59_bool == 0; // 0x12e Not
	if(var_167_bool == 0) goto Label_305; // 0x12f JumpB
	goto Label_321; // 0x130 Jump
	
Label_305:
	goto Label_320; // 0x131 Jump
	
Label_320:
	goto Label_236; // 0x140 Jump
	
Label_306:
	StopAsync(); // 0x132 Func
	var_168_bool = 0; var_169_object = Obj(); var_170_float = 0; // 0x134 PushV
	var_169_object = var_0_bool; // 0x135 MovT
	var_170_float = var_58_float; // 0x136 Mov
	TaskCall(4); // 0x137 TaskCall
	func_370(var_168_bool, var_169_object, var_170_float); // 0x138 NEW_2
	TaskReturn(); // 0x139 TaskReturn
	var_234_bool = var_171_bool == 0; // 0x13b Not
	if(var_234_bool == 0) goto Label_318; // 0x13c JumpB
	goto Label_321; // 0x13d Jump
	
Label_318:
	Face(var_0_bool); // 0x13e Func
}


func_1256()
{
	TaskCall(2); // 0x4ea TaskCall
	func_179(); // 0x4eb NEW_2
	TaskReturn(); // 0x4ec TaskReturn
	return 0; // 0x4ee Return
}


func_875(var_125_string, var_126_int)
{
	var_127_int = 2; // 0x36c PushI
	var_128_bool = var_126_int == var_127_int; // 0x36d Eq
	if(var_128_bool == 0) goto Label_882; // 0x36e JumpB
	var_125_string = "fire"; // 0x36f MovS
	return 0; // 0x370 Return
	
Label_882:
	var_129_int = 1; // 0x372 PushI
	var_130_bool = var_126_int == var_129_int; // 0x373 Eq
	if(var_130_bool == 0) goto Label_887; // 0x374 JumpB
	var_125_string = "bullet"; // 0x375 MovS
	return 0; // 0x376 Return
	
Label_887:
	var_125_string = "phys"; // 0x377 MovS
	return 0; // 0x378 Return
}


func_1263(var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x4ef PushV
	var_18_string = "health"; // 0x4f0 PushS
	var_19_bool = var_13_string == var_18_string; // 0x4f1 Eq
	if(var_19_bool == 0) goto Label_1288; // 0x4f2 JumpB
	var_20_string = "health"; // 0x4f3 PushS
	GetProperty(var_20_string, var_16_float); // 0x4f4 Func
	var_21_float = GlobalVars[0]; // 0x4f6 PushGE
	var_17_bool = var_16_float < var_21_float; // 0x4f7 LT2
	var_22_float = GlobalVars[0]; // 0x4f8 PushGE
	var_22_float = var_16_float; // 0x4f9 Mov
	GlobalVars[0] = var_22_float; // 0x4fa PopGE
	var_23_bool = 0; // 0x4fb PushV
	var_23_bool = 0; // 0x4fc MovB
	var_24_bool = var_17_bool; // 0x4fd Push
	if(var_24_bool == 0) goto Label_1285; // 0x4fe JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x4ff PushV
	var_26_object = var_12_object; // 0x500 Mov
	func_1032(var_25_bool, var_26_object); // 0x501 NEW_2
	if(var_25_bool == 0) goto Label_1285; // 0x503 JumpB
	var_23_bool = 1; // 0x504 MovB
	
Label_1285:
	if(var_23_bool == 0) goto Label_1288; // 0x505 JumpB
	var_11_bool = 1; // 0x506 MovB
	return 4; // 0x507 Return
	
Label_1288:
	var_11_bool = 0; // 0x508 MovB
	return 4; // 0x509 Return
}


func_1135(var_123_float, var_124_cvector, var_125_cvector)
{
	var_126_int = var_124_cvector | var_125_cvector; // 0x470 Or
	var_127_int = var_124_cvector | var_124_cvector; // 0x471 Or
	var_128_int = var_125_cvector | var_125_cvector; // 0x472 Or
	var_129_float = var_127_int * var_128_int; // 0x473 Mult
	var_130_float = sqrt(var_129_float); // 0x474 Sqrt
	var_123_float = var_126_int / var_126_int; // 0x475 Div2
	return 0; // 0x476 Return
}


func_370(var_168_bool, var_169_object, var_170_float)
{
	var_173_bool = 0; var_174_bool = 0; // 0x172 PushV
	func_389(); // 0x174 NEW_2
	var_181_bool = 0; var_182_object = Obj(); var_183_float = 0; var_184_float = 0; var_185_bool = 0; var_186_bool = 0; // 0x176 PushV
	var_182_object = var_169_object; // 0x177 Mov
	var_187_float = 0.9; // 0x178 PushF
	var_183_float = var_170_float * var_187_float; // 0x179 Mult2
	var_184_float = 5000; // 0x17a MovI
	var_185_bool = 1; // 0x17b MovB
	var_186_bool = 1; // 0x17c MovB
	func_465(var_173_bool, var_174_bool, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool); // 0x17d NEW_2
	var_174_bool = var_181_bool; // 0x17e Mov
	func_399(); // 0x181 NEW_2
	var_168_bool = var_174_bool; // 0x183 Mov
	return 2; // 0x184 Return
}


func_1143(var_30_int, var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x477 PushV
	CreateIntVector(var_33_object); // 0x478 Func
	add(var_30_int); // 0x47a ObjFunc
	add(var_31_int); // 0x47c ObjFunc
	var_34_int = 3; // 0x47e PushI
	SendWorldWndMessage(var_34_int, var_33_object); // 0x47f Func
	return 2; // 0x481 Return
}


func_889(var_136_cvector)
{
	var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); // 0x379 PushV
	GetPosition(var_138_cvector); // 0x37a Func
	var_136_cvector = var_138_cvector; // 0x37c Mov
	return 2; // 0x37d Return
}


func_894(var_117_cvector)
{
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); // 0x37e PushV
	GetPosition(var_121_cvector); // 0x37f Func
	GetPosition(var_122_cvector); // 0x381 ObjFunc
	var_117_cvector = var_122_cvector - var_121_cvector; // 0x383 Sub2
	return 4; // 0x384 Return
}


