task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x6c PushV
	var_11_object = var_10_bool; // 0x6d Mov
	func_2349(); // 0x6e NEW_2
	return 0; // 0x70 Return
}


task_0_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x72 PushV
	var_14_object = var_10_bool; // 0x73 Mov
	var_15_object = var_11_object; // 0x74 Mov
	func_2351(var_15_object); // 0x75 NEW_2
	return 0; // 0x77 Return
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0x79 PushS
	var_12_bool = var_10_bool == var_11_string; // 0x7a Eq
	if(var_12_bool == 0) goto Label_125; // 0x7b JumpB
	var_0_bool = 1; // 0x7c TMovB
	
Label_125:
	return 0; // 0x7d Return
}


task_1_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0xb7 PushV
	var_11_object = var_10_bool; // 0xb8 Mov
	func_2349(); // 0xb9 NEW_2
	return 0; // 0xbb Return
}


task_1_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0xbd PushV
	var_14_object = var_10_bool; // 0xbe Mov
	var_15_object = var_11_object; // 0xbf Mov
	func_2351(var_15_object); // 0xc0 NEW_2
	return 0; // 0xc2 Return
}


task_1_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0xc4 PushS
	var_12_bool = var_10_bool == var_11_string; // 0xc5 Eq
	if(var_12_bool == 0) goto Label_202; // 0xc6 JumpB
	var_13_bool = GlobalVars[0]; // 0xc7 PushGE
	var_13_bool = 1; // 0xc8 MovB
	GlobalVars[0] = var_13_bool; // 0xc9 PopGE
	
Label_202:
	return 0; // 0xca Return
}


task_2_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x360 PushV
	var_11_object = var_10_object; // 0x361 Mov
	func_2349(); // 0x362 NEW_2
	return 0; // 0x364 Return
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x366 PushV
	var_14_object = var_10_object; // 0x367 Mov
	var_15_object = var_11_object; // 0x368 Mov
	func_2351(var_15_object); // 0x369 NEW_2
	return 0; // 0x36b Return
}


task_2_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_11_string = "kill"; // 0x36d PushS
	var_12_bool = var_10_string == var_11_string; // 0x36e Eq
	if(var_12_bool == 0) goto Label_886; // 0x36f JumpB
	var_13_bool = GlobalVars[0]; // 0x370 PushGE
	var_13_bool = 1; // 0x371 MovB
	GlobalVars[0] = var_13_bool; // 0x372 PopGE
	func_950(var_10_string); // 0x374 NEW_2
	
Label_886:
	return 0; // 0x376 Return
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_11_int = 1; // 0x3a9 PushI
	var_12_bool = var_10_int == var_11_int; // 0x3aa Eq
	if(var_12_bool == 0) goto Label_945; // 0x3ab JumpB
	var_13_object = Obj(); // 0x3ac PushV
	var_13_object = var_1_object; // 0x3ad MovT
	func_2062(var_13_object); // 0x3ae NEW_2
	goto Label_949; // 0x3b0 Jump
	
Label_949:
	return 0; // 0x3b5 Return
	
Label_945:
	var_18_int = 0; // 0x3b1 PushV
	var_18_int = var_10_int; // 0x3b2 Mov
	func_1094(var_9_bool, var_10_int, var_18_int); // 0x3b3 NEW_2
}


task_2_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x3c4 PushV
	var_11_bool = 0; // 0x3c5 MovB
	var_12_bool = var_1_object == var_10_object; // 0x3c6 Eq
	if(var_12_bool == 0) goto Label_971; // 0x3c7 JumpB
	var_13_bool = var_2_int == 0; // 0x3c8 Not
	if(var_13_bool == 0) goto Label_971; // 0x3c9 JumpB
	var_11_bool = 1; // 0x3ca MovB
	
Label_971:
	if(var_11_bool == 0) goto Label_977; // 0x3cb JumpB
	var_2_int = 1; // 0x3cc TMovB
	var_14_object = Obj(); // 0x3cd PushV
	var_14_object = var_10_object; // 0x3ce Mov
	func_1866(var_14_object); // 0x3cf NEW_2
	
Label_977:
	return 0; // 0x3d1 Return
}


task_2_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x3d3 PushV
	var_11_bool = 0; // 0x3d4 MovB
	var_12_bool = var_1_object == var_10_object; // 0x3d5 Eq
	if(var_12_bool == 0) goto Label_986; // 0x3d6 JumpB
	var_13_int = var_2_int; // 0x3d7 PushT
	if(var_13_int == 0) goto Label_986; // 0x3d8 JumpB
	var_11_bool = 1; // 0x3d9 MovB
	
Label_986:
	if(var_11_bool == 0) goto Label_991; // 0x3da JumpB
	var_2_int = 0; // 0x3db TMovB
	var_14_string = "head"; // 0x3dc PushS
	UnlookAsync(var_14_string); // 0x3dd Func
	
Label_991:
	return 0; // 0x3df Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object); // 0x459 Func
	return 0; // 0x45b Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_950(var_10_object); // 0x465 NEW_2
	var_15_object = Obj(); // 0x467 PushV
	var_15_object = var_10_object; // 0x468 Mov
	func_2330(); // 0x469 NEW_2
	return 0; // 0x46b Return
}


	task_3_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_14_object)
	{
	var_15_bool = 0; var_16_object = Obj(); // 0x480 PushV
	var_16_object = var_14_object; // 0x481 Mov
	func_2336(var_15_bool, var_16_object); // 0x482 NEW_2
	if(var_15_bool == 0) goto Label_1164; // 0x484 JumpB
	func_1266(); // 0x486 NEW_2
	var_51_object = Obj(); // 0x488 PushV
	var_51_object = var_14_object; // 0x489 Mov
	func_2343(var_51_object); // 0x48a NEW_2
	
Label_1164:
	return 0; // 0x48c Return
	}


task_3_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x48d PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x48e Func
	var_13_bool = var_12_bool; // 0x490 Push
	if(var_13_bool == 0) goto Label_1174; // 0x491 JumpB
	var_14_object = Obj(); // 0x492 PushV
	var_14_object = var_10_object; // 0x493 Mov
	func_1151(); // 0x494 NEW_2
	
Label_1174:
	return 2; // 0x496 Return
}


task_3_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x497 PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x498 Func
	var_13_bool = var_12_bool; // 0x49a Push
	if(var_13_bool == 0) goto Label_1184; // 0x49b JumpB
	var_14_object = Obj(); // 0x49c PushV
	var_14_object = var_10_object; // 0x49d Mov
	func_1151(); // 0x49e NEW_2
	
Label_1184:
	return 2; // 0x4a0 Return
}


task_4_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x512 PushV
	IsOverrideActive(var_12_bool); // 0x513 Func
	var_13_bool = var_12_bool == 0; // 0x515 Not
	if(var_13_bool == 0) goto Label_1307; // 0x516 JumpB
	var_14_object = Obj(); // 0x517 PushV
	var_14_object = var_10_object; // 0x518 Mov
	func_2153(var_14_object); // 0x519 NEW_2
	
Label_1307:
	return 2; // 0x51b Return
}


task_4_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x592 Return
}


task_4_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	return 0; // 0x594 Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	return 0; // 0x596 Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x8fc PushV
	var_14_object = var_10_object; // 0x8fd Mov
	var_15_int = var_11_int; // 0x8fe Mov
	var_16_float = var_12_float; // 0x8ff Mov
	func_1768(var_14_object, var_15_int, var_16_float); // 0x900 NEW_2
	return 0; // 0x902 Return
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x904 PushV
	var_16_object = var_10_object; // 0x905 Mov
	var_17_int = var_11_int; // 0x906 Mov
	var_18_float = var_12_float; // 0x907 Mov
	var_19_cvector = var_14_cvector; // 0x908 Mov
	var_20_cvector = var_15_cvector; // 0x909 Mov
	func_1836(var_18_float, var_19_cvector, var_20_cvector); // 0x90a NEW_2
	return 0; // 0x90c Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x90d PushV
	var_14_string = "health"; // 0x90e PushS
	var_15_bool = var_11_string == var_14_string; // 0x90f Eq
	if(var_15_bool == 0) goto Label_2329; // 0x910 JumpB
	var_16_string = "health"; // 0x911 PushS
	GetProperty(var_16_string, var_13_float); // 0x912 Func
	var_17_int = 0; // 0x914 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x915 LE
	if(var_18_bool == 0) goto Label_2329; // 0x916 JumpB
	SignalDeath(var_10_object); // 0x917 Func
	
Label_2329:
	return 2; // 0x919 Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x91b PushV
	var_11_object = var_10_object; // 0x91c Mov
	func_2273(var_11_object); // 0x91d NEW_2
	return 0; // 0x91f Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	
Label_1143:
	var_10_int = 3; // 0x477 PushI
	Sleep(var_10_int); // 0x478 Func
	func_1185(); // 0x47b NEW_2
	goto Label_1143; // 0x47d Jump
}


func_1536(var_534_float, var_535_object, var_536_float, var_537_int)
{
	var_541_int = 0; var_542_string = ""; var_543_int = 0; var_544_float = 0; var_545_float = 0; var_546_float = 0; var_547_int = 0; var_548_string = ""; var_549_int = 0; var_550_float = 0; var_551_float = 0; var_552_float = 0; // 0x600 PushV
	var_553_bool = 0; var_554_object = Obj(); var_555_string = ""; // 0x601 PushV
	var_554_object = var_535_object; // 0x602 Mov
	var_555_string = "health"; // 0x603 MovS
	func_1502(var_553_bool, var_554_object, var_555_string); // 0x604 NEW_2
	var_556_bool = var_553_bool == 0; // 0x606 Not
	if(var_556_bool == 0) goto Label_1546; // 0x607 JumpB
	var_534_float = 0.0; // 0x608 MovF
	return 12; // 0x609 Return
	
Label_1546:
	var_557_bool = 0; var_558_object = Obj(); var_559_string = ""; // 0x60a PushV
	var_558_object = var_535_object; // 0x60b Mov
	var_559_string = "armor"; // 0x60c MovS
	func_1502(var_557_bool, var_558_object, var_559_string); // 0x60d NEW_2
	var_560_bool = var_557_bool == 0; // 0x60f Not
	if(var_560_bool == 0) goto Label_1555; // 0x610 JumpB
	var_547_int = 0; // 0x611 MovI
	goto Label_1558; // 0x612 Jump
	
Label_1558:
	var_561_string = "armor_"; // 0x616 PushS
	var_562_string = ""; var_563_int = 0; // 0x617 PushV
	var_563_int = var_537_int; // 0x618 Mov
	func_1468(var_562_string, var_563_int); // 0x619 NEW_2
	var_548_string = var_561_string + var_562_string; // 0x61b Add2
	var_568_bool = 0; var_569_object = Obj(); var_570_string = ""; // 0x61c PushV
	var_569_object = var_535_object; // 0x61d Mov
	var_570_string = var_548_string; // 0x61e Mov
	func_1502(var_568_bool, var_569_object, var_570_string); // 0x61f NEW_2
	var_571_bool = var_568_bool == 0; // 0x621 Not
	if(var_571_bool == 0) goto Label_1573; // 0x622 JumpB
	var_549_int = 0; // 0x623 MovI
	goto Label_1575; // 0x624 Jump
	
Label_1575:
	var_572_float = 0; var_573_float = 0; var_574_float = 0; // 0x627 PushV
	var_575_int = var_547_int + var_549_int; // 0x628 Add
	var_576_float = 100.0; // 0x629 PushF
	var_573_float = var_575_int / var_575_int; // 0x62a Div2
	var_574_float = 1; // 0x62b MovI
	func_1945(var_572_float, var_573_float, var_574_float); // 0x62c NEW_2
	var_550_float = var_572_float; // 0x62d Mov
	var_578_string = "health"; // 0x62f PushS
	GetProperty(var_578_string, var_551_float); // 0x630 ObjFunc
	var_579_int = 1; // 0x632 PushI
	var_580_int = var_579_int - var_550_float; // 0x633 Sub
	var_552_float = var_536_float * var_580_int; // 0x634 Mult2
	var_581_string = "health"; // 0x635 PushS
	var_582_float = 0; var_583_float = 0; var_584_float = 0; var_585_float = 0; // 0x636 PushV
	var_583_float = var_551_float - var_552_float; // 0x637 Sub2
	var_584_float = 0; // 0x638 MovI
	var_585_float = 1; // 0x639 MovI
	func_1976(var_582_float, var_583_float, var_584_float, var_585_float); // 0x63a NEW_2
	SetProperty(var_581_string, var_582_float); // 0x63c ObjFunc
	var_588_bool = 0; var_589_object = Obj(); // 0x63e PushV
	var_589_object = var_535_object; // 0x63f Mov
	func_1497(var_588_bool, var_589_object); // 0x640 NEW_2
	if(var_588_bool == 0) goto Label_1607; // 0x642 JumpB
	var_590_float = 0; // 0x643 PushV
	var_590_float = -var_552_float; // 0x644 Neg2
	func_2035(var_590_float); // 0x645 NEW_2
	
Label_1607:
	var_534_float = var_552_float; // 0x647 Mov
	return 12; // 0x648 Return
	
Label_1573:
	GetProperty(var_548_string, var_549_int); // 0x625 ObjFunc
	
Label_1555:
	var_598_string = "armor"; // 0x613 PushS
	GetProperty(var_598_string, var_547_int); // 0x614 ObjFunc
}


func_0(var_0_bool, var_79_bool, var_80_object, var_197_object)
{
	var_82_object = Obj(); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_object = Obj(); var_90_cvector = CVector(0,0,0); var_91_bool = 0; var_92_object = Obj(); var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_cvector = CVector(0,0,0); // 0x0 PushV
	var_96_object = Obj(); // 0x1 PushV
	var_96_object = var_80_object; // 0x2 Mov
	func_2062(var_96_object); // 0x3 NEW_2
	var_0_bool = 0; // 0x5 TMovB
	var_101_bool = 0; var_102_object = Obj(); // 0x6 PushV
	var_102_object = var_80_object; // 0x7 Mov
	func_1715(var_102_object); // 0x8 NEW_2
	var_115_bool = 0; var_116_object = Obj(); // 0xa PushV
	var_116_object = var_80_object; // 0xb Mov
	func_1681(var_115_bool, var_116_object); // 0xc NEW_2
	var_117_bool = var_115_bool == 0; // 0xe Not
	if(var_117_bool == 0) goto Label_18; // 0xf JumpB
	var_79_bool = 0; // 0x10 MovB
	return 14; // 0x11 Return
	
Label_18:
	func_2071(); // 0x13 NEW_2
	Face(var_80_object); // 0x15 Func
	var_122_string = "all"; // 0x17 PushS
	var_123_string = "aattack_begin1"; // 0x18 PushS
	PlayAnimation(var_122_string, var_123_string); // 0x19 Func
	WaitForAnimEnd(); // 0x1b Func
	var_124_bool = 0; var_125_object = Obj(); // 0x1d PushV
	var_125_object = var_80_object; // 0x1e Mov
	func_1681(var_124_bool, var_125_object); // 0x1f NEW_2
	var_126_bool = var_124_bool == 0; // 0x21 Not
	if(var_126_bool == 0) goto Label_39; // 0x22 JumpB
	StopAsync(); // 0x23 Func
	var_79_bool = 0; // 0x25 MovB
	return 14; // 0x26 Return
	
Label_39:
	var_127_string = "all"; // 0x27 PushS
	var_128_string = "aattack_end1"; // 0x28 PushS
	PlayAnimation(var_127_string, var_128_string); // 0x29 Func
	GetScene(var_89_object); // 0x2b Func
	var_129_string = "knife"; // 0x2d PushS
	GetGeometryLocator(var_129_string, var_91_bool, var_90_cvector); // 0x2e Func
	var_130_string = "scripted"; // 0x30 PushS
	var_131_cvector = CVector(0.0, 0.0, 1.0); // 0x31 PushVec
	var_132_string = "grabitel_knife.xml"; // 0x32 PushS
	AddActorByType(var_92_object, var_130_string, var_89_object, var_90_cvector, var_131_cvector, var_132_string); // 0x33 Func
	var_133_string = "Owner"; // 0x35 PushS
	var_134_object = Obj(); // 0x36 PushV
	func_1929(var_134_object); // 0x37 NEW_2
	SetScriptProperty(var_133_string, var_134_object); // 0x39 ObjFunc
	var_135_string = "Target"; // 0x3b PushS
	SetScriptProperty(var_135_string, var_80_object); // 0x3c ObjFunc
	GetPosition(var_93_cvector); // 0x3e ObjFunc
	GetEyesHeight(var_94_float); // 0x40 ObjFunc
	var_136_float = GetByIndex(var_93_cvector, 1); // 0x42 PushE
	var_137_int = 10; // 0x43 PushI
	var_138_int = var_94_float - var_137_int; // 0x44 Sub
	var_136_float = var_136_float + var_138_int; // 0x45 Add2
	SetByIndex(var_93_cvector, 1) = var_136_float; // 0x46 PopE
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_float = 0; // 0x47 PushV
	var_140_cvector = var_90_cvector; // 0x48 Mov
	var_141_cvector = var_93_cvector; // 0x49 Mov
	var_142_float = 2000.0; // 0x4a MovF
	func_2112(var_139_cvector, var_140_cvector, var_141_cvector, var_142_float); // 0x4b NEW_2
	var_95_cvector = var_139_cvector; // 0x4c Mov
	var_190_string = "StartDirection"; // 0x4e PushS
	SetScriptProperty(var_190_string, var_95_cvector); // 0x4f ObjFunc
	WaitForAnimEnd(); // 0x51 Func
	StopAsync(); // 0x53 Func
	var_191_bool = var_0_bool; // 0x55 PushT
	if(var_191_bool == 0) goto Label_89; // 0x56 JumpB
	var_79_bool = 1; // 0x57 MovB
	return 14; // 0x58 Return
	
Label_89:
	var_192_bool = 0; var_193_object = Obj(); // 0x59 PushV
	var_193_object = var_80_object; // 0x5a Mov
	func_1681(var_192_bool, var_193_object); // 0x5b NEW_2
	var_194_bool = var_192_bool == 0; // 0x5d Not
	if(var_194_bool == 0) goto Label_97; // 0x5e JumpB
	var_79_bool = 0; // 0x5f MovB
	return 14; // 0x60 Return
	
Label_97:
	var_195_bool = 0; var_196_object = Obj(); // 0x61 PushV
	var_196_object = var_80_object; // 0x62 Mov
	TaskCall(1); // 0x63 TaskCall
	func_126(var_195_bool, var_196_object); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_79_bool = var_197_object; // 0x66 Mov
	return 14; // 0x68 Return
}


func_2052(var_28_float)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x804 PushV
	CreateFloatVector(var_30_object); // 0x805 Func
	add(var_28_float); // 0x807 ObjFunc
	var_31_int = 16; // 0x809 PushI
	SendWorldWndMessage(var_31_int, var_30_object); // 0x80a Func
	return 2; // 0x80c Return
}


func_2062(var_96_object)
{
	var_97_bool = 0; var_98_bool = 0; // 0x80e PushV
	IsPlayerActor(var_96_object, var_98_bool); // 0x80f Func
	var_99_bool = var_98_bool; // 0x811 Push
	if(var_99_bool == 0) goto Label_2070; // 0x812 JumpB
	var_100_string = "attack"; // 0x813 PushS
	PlayGlobalMusic(var_100_string); // 0x814 Func
	
Label_2070:
	return 2; // 0x816 Return
}


func_2071()
{
	var_118_object = Obj(); var_119_object = Obj(); // 0x817 PushV
	GetScene(var_119_object); // 0x818 Func
	var_120_string = "battle"; // 0x81a PushS
	var_121_object = Obj(); // 0x81b PushV
	func_1929(var_121_object); // 0x81c NEW_2
	BroadcastMessage(var_120_string, var_121_object, var_119_object); // 0x81e Func
	return 2; // 0x820 Return
}


func_2082(var_616_bool)
{
	var_617_bool = 0; var_618_bool = 0; // 0x822 PushV
	var_619_string = "god_mode"; // 0x823 PushS
	GetVariable(var_619_string, var_618_bool); // 0x824 Func
	var_616_bool = var_618_bool; // 0x826 Mov
	return 2; // 0x827 Return
}


func_2088(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = ""; // 0x828 PushV
	var_38_string = "idle"; // 0x829 MovS
	var_39_int = var_36_int; // 0x82a Push
	if(var_39_int == 0) goto Label_2093; // 0x82b JumpB
	var_38_string = var_38_string + var_36_int; // 0x82c Add2
	
Label_2093:
	var_35_string = var_38_string; // 0x82d Mov
	return 2; // 0x82e Return
}


func_2095(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0x82f PushV
	var_32_int = 0; // 0x830 MovI
	
Label_2097:
	var_34_string = "all"; // 0x831 PushS
	var_35_string = ""; var_36_int = 0; // 0x832 PushV
	var_36_int = var_32_int; // 0x833 Mov
	func_2088(var_35_string, var_36_int); // 0x834 NEW_2
	HasAnimation(var_33_bool, var_34_string, var_35_string); // 0x836 Func
	var_40_bool = var_33_bool == 0; // 0x838 Not
	if(var_40_bool == 0) goto Label_2107; // 0x839 JumpB
	goto Label_2110; // 0x83a Jump
	
Label_2110:
	var_29_int = var_32_int; // 0x83e Mov
	return 4; // 0x83f Return
	
Label_2107:
	var_41_int = 1; // 0x83b PushI
	var_32_int = var_32_int + var_41_int; // 0x83c Add2
	goto Label_2097; // 0x83d Jump
}


func_2112(var_139_cvector, var_140_cvector, var_141_cvector, var_142_float)
{
	var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_float = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0; // 0x840 PushV
	var_149_cvector = var_141_cvector - var_140_cvector; // 0x841 Sub2
	var_150_float = 250000; // 0x842 MovI
	var_155_float = GetByIndex(var_149_cvector, 1); // 0x843 PushE
	var_156_int = 1000; // 0x844 PushI
	var_157_float = var_155_float * var_156_int; // 0x845 Mult
	var_158_float = var_142_float * var_142_float; // 0x846 Mult
	var_151_float = var_157_float - var_158_float; // 0x847 Sub2
	var_152_float = var_149_cvector | var_149_cvector; // 0x848 Or2
	var_159_float = 0; var_160_float = 0; var_161_float = 0; var_162_float = 0; // 0x849 PushV
	var_160_float = var_150_float; // 0x84a Mov
	var_161_float = var_151_float; // 0x84b Mov
	var_162_float = var_152_float; // 0x84c Mov
	func_1952(var_159_float, var_160_float, var_161_float, var_162_float); // 0x84d NEW_2
	var_153_float = var_159_float; // 0x84e Mov
	var_167_int = 0; // 0x850 PushI
	var_168_bool = var_153_float < var_167_int; // 0x851 LT
	if(var_168_bool == 0) goto Label_2133; // 0x852 JumpB
	var_154_float = 1; // 0x853 MovI
	goto Label_2141; // 0x854 Jump
	
Label_2141:
	var_169_cvector = CVector(0.0, 500.0, 0.0); // 0x85d PushVec
	var_170_float = var_169_cvector * var_154_float; // 0x85e Mult
	var_171_float = var_170_float * var_154_float; // 0x85f Mult
	var_172_int = var_149_cvector + var_171_float; // 0x860 Add
	var_139_cvector = var_172_int / var_172_int; // 0x861 Div2
	return 12; // 0x862 Return
	
Label_2133:
	var_173_float = 0; var_174_float = 0; var_175_float = 0; var_176_float = 0; var_177_float = 0; // 0x855 PushV
	var_174_float = var_150_float; // 0x856 Mov
	var_175_float = var_151_float; // 0x857 Mov
	var_176_float = var_152_float; // 0x858 Mov
	var_177_float = sqrt(var_153_float); // 0x859 Sqrt2
	func_1959(var_174_float, var_175_float, var_176_float, var_177_float); // 0x85a NEW_2
	var_154_float = sqrt(var_173_float); // 0x85c Sqrt2
}


func_1094(var_0_bool, var_1_object, var_18_int)
{
	var_19_int = 0; // 0x447 PushI
	var_20_bool = var_18_int != var_19_int; // 0x448 Neq
	if(var_20_bool == 0) goto Label_1099; // 0x449 JumpB
	return 0; // 0x44a Return
	
Label_1099:
	var_21_bool = 0; var_22_object = Obj(); // 0x44b PushV
	var_22_object = var_1_object; // 0x44c MovT
	func_1132(var_21_bool, var_22_object); // 0x44d NEW_2
	var_57_bool = var_21_bool == 0; // 0x44f Not
	if(var_57_bool == 0) goto Label_1106; // 0x450 JumpB
	var_0_bool = 1; // 0x451 TMovB
	
Label_1106:
	var_58_int = 0; // 0x452 PushI
	KillTimer(var_58_int); // 0x453 Func
	Stop(); // 0x455 Func
	return 0; // 0x457 Return
}


func_1609(var_605_bool, var_606_object)
{
	var_607_float = 0; var_608_float = 0; // 0x649 PushV
	var_609_bool = 0; var_610_object = Obj(); var_611_string = ""; // 0x64a PushV
	var_610_object = var_606_object; // 0x64b Mov
	var_611_string = "health"; // 0x64c MovS
	func_1502(var_609_bool, var_610_object, var_611_string); // 0x64d NEW_2
	var_612_bool = var_609_bool == 0; // 0x64f Not
	if(var_612_bool == 0) goto Label_1619; // 0x650 JumpB
	var_605_bool = 0; // 0x651 MovB
	return 2; // 0x652 Return
	
Label_1619:
	var_613_bool = 0; // 0x653 PushV
	var_613_bool = 0; // 0x654 MovB
	var_614_bool = 0; var_615_object = Obj(); // 0x655 PushV
	var_615_object = var_606_object; // 0x656 Mov
	func_1497(var_614_bool, var_615_object); // 0x657 NEW_2
	if(var_614_bool == 0) goto Label_1631; // 0x659 JumpB
	var_616_bool = 0; // 0x65a PushV
	func_2082(var_616_bool); // 0x65b NEW_2
	if(var_616_bool == 0) goto Label_1631; // 0x65d JumpB
	var_613_bool = 1; // 0x65e MovB
	
Label_1631:
	if(var_613_bool == 0) goto Label_1634; // 0x65f JumpB
	var_605_bool = 0; // 0x660 MovB
	return 2; // 0x661 Return
	
Label_1634:
	var_620_string = "health"; // 0x662 PushS
	GetProperty(var_620_string, var_608_float); // 0x663 ObjFunc
	var_621_float = 0.0; // 0x665 PushF
	var_605_bool = var_608_float <= var_621_float; // 0x666 LE2
	return 2; // 0x667 Return
}


func_1116(var_0_bool)
{
	var_0_bool = 1; // 0x45c TMovB
	var_14_int = 0; // 0x45d PushI
	KillTimer(var_14_int); // 0x45e Func
	Stop(); // 0x460 Func
	return 0; // 0x462 Return
}


func_2147(var_102_int)
{
	var_103_int = 0; var_104_int = 0; // 0x863 PushV
	var_105_string = "branch"; // 0x864 PushS
	GetVariable(var_105_string, var_104_int); // 0x865 Func
	var_102_int = var_104_int; // 0x867 Mov
	return 2; // 0x868 Return
}


func_1640(var_32_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x668 PushV
	IsDead(var_35_bool); // 0x669 ObjFunc
	var_32_bool = var_35_bool; // 0x66b Mov
	return 2; // 0x66c Return
}


func_2153(var_14_object)
{
	var_15_int = 0; // 0x86a PushV
	func_2147(var_15_int); // 0x86b NEW_2
	var_19_int = 1; // 0x86d PushI
	var_20_bool = var_15_int == var_19_int; // 0x86e Eq
	if(var_20_bool == 0) goto Label_2163; // 0x86f JumpB
	WorkWithCorpse(var_14_object); // 0x870 Func
	goto Label_2165; // 0x872 Jump
	
Label_2165:
	return 0; // 0x875 Return
	
Label_2163:
	Barter(var_14_object); // 0x873 Func
}


func_1132(var_320_bool, var_321_object)
{
	var_322_bool = 0; var_323_object = Obj(); // 0x46d PushV
	var_323_object = var_321_object; // 0x46e Mov
	func_1681(var_322_bool, var_323_object); // 0x46f NEW_2
	var_320_bool = var_322_bool; // 0x470 Mov
	return 0; // 0x472 Return
}


func_1645(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x66d PushV
	var_27_bool = var_22_object == 0; // 0x66e NullEq
	if(var_27_bool == 0) goto Label_1650; // 0x66f JumpB
	var_21_bool = 0; // 0x670 MovB
	return 4; // 0x671 Return
	
Label_1650:
	var_28_bool = 0; // 0x672 PushV
	var_28_bool = 0; // 0x673 MovB
	var_29_string = "IsDead"; // 0x674 PushS
	var_30_int = 1; // 0x675 PushI
	var_31_bool = IsFuncExist(var_22_object, var_29_string, var_30_int); // 0x676 FuncExist
	if(var_31_bool == 0) goto Label_1662; // 0x677 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x678 PushV
	var_33_object = var_22_object; // 0x679 Mov
	func_1640(var_33_object); // 0x67a NEW_2
	if(var_32_bool == 0) goto Label_1662; // 0x67c JumpB
	var_28_bool = 1; // 0x67d MovB
	
Label_1662:
	if(var_28_bool == 0) goto Label_1665; // 0x67e JumpB
	var_21_bool = 0; // 0x67f MovB
	return 4; // 0x680 Return
	
Label_1665:
	GetScene(var_25_object); // 0x681 Func
	var_36_bool = var_25_object == 0; // 0x683 NullEq
	if(var_36_bool == 0) goto Label_1671; // 0x684 JumpB
	var_21_bool = 0; // 0x685 MovB
	return 4; // 0x686 Return
	
Label_1671:
	GetScene(var_26_object); // 0x687 ObjFunc
	var_37_bool = var_25_object != var_26_object; // 0x689 Neq
	if(var_37_bool == 0) goto Label_1677; // 0x68a JumpB
	var_21_bool = 0; // 0x68b MovB
	return 4; // 0x68c Return
	
Label_1677:
	var_21_bool = 1; // 0x68d MovB
	return 4; // 0x68e Return
}


func_1139(var_338_string)
{
	var_338_string = "walk"; // 0x473 MovS
	return 0; // 0x474 Return
}


func_1141(var_339_string)
{
	var_339_string = "run"; // 0x475 MovS
	return 0; // 0x476 Return
}


func_2166(var_65_int, var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0; // 0x876 PushV
	var_71_bool = var_65_int > var_66_int; // 0x877 GT
	if(var_71_bool == 0) goto Label_2173; // 0x878 JumpB
	var_72_string = "GenerateMoney: iMin > iMax"; // 0x879 PushS
	Trace(var_72_string); // 0x87a Func
	return 4; // 0x87c Return
	
Label_2173:
	var_69_int = 0; // 0x87d MovI
	var_73_bool = var_65_int != var_66_int; // 0x87e Neq
	if(var_73_bool == 0) goto Label_2180; // 0x87f JumpB
	var_74_int = var_66_int - var_65_int; // 0x880 Sub
	irand(var_69_int, var_74_int); // 0x881 Func
	goto Label_2184; // 0x883 Jump
	
Label_2184:
	var_69_int = var_69_int + var_65_int; // 0x888 Add2
	var_75_int = 0; // 0x889 PushI
	var_76_bool = var_69_int == var_75_int; // 0x88a Eq
	if(var_76_bool == 0) goto Label_2189; // 0x88b JumpB
	return 4; // 0x88c Return
	
Label_2189:
	var_77_int = 0; var_78_string = ""; // 0x88d PushV
	var_78_string = "Money"; // 0x88e MovS
	func_2268(var_77_int, var_78_string); // 0x88f NEW_2
	var_81_int = 0; // 0x891 PushI
	AddItem(var_70_bool, var_77_int, var_81_int, var_69_int); // 0x892 Func
	return 4; // 0x894 Return
	
Label_2180:
	var_82_int = 0; // 0x884 PushI
	var_83_bool = var_65_int == var_82_int; // 0x885 Eq
	if(var_83_bool == 0) goto Label_2184; // 0x886 JumpB
	return 4; // 0x887 Return
}


func_126(var_195_bool, var_196_object)
{
	var_203_bool = GlobalVars[0]; // 0x7f PushGE
	var_203_bool = 0; // 0x80 MovB
	GlobalVars[0] = var_203_bool; // 0x81 PopGE
	var_204_object = Obj(); var_205_bool = 0; var_206_float = 0; // 0x82 PushV
	var_204_object = var_196_object; // 0x83 Mov
	var_205_bool = 1; // 0x84 MovB
	var_206_float = 200.0; // 0x85 MovF
	func_203(var_200_bool, var_201_float, var_202_int, var_195_bool, var_196_object, var_204_object, var_205_bool, var_206_float); // 0x86 NEW_2
	var_678_bool = 0; // 0x88 PushV
	var_678_bool = 0; // 0x89 MovB
	var_679_bool = GlobalVars[0]; // 0x8a PushGE
	if(var_679_bool == 0) goto Label_143; // 0x8b JumpB
	var_680_int = var_3_int; // 0x8c PushT
	if(var_680_int == 0) goto Label_143; // 0x8d JumpB
	var_678_bool = 1; // 0x8e MovB
	
Label_143:
	if(var_678_bool == 0) goto Label_150; // 0x8f JumpB
	var_681_string = "all"; // 0x90 PushS
	var_682_string = "attack_off"; // 0x91 PushS
	PlayAnimation(var_681_string, var_682_string); // 0x92 Func
	WaitForAnimEnd(); // 0x94 Func
	
Label_150:
	var_683_bool = GlobalVars[0]; // 0x96 PushGE
	var_195_bool = var_683_bool; // 0x97 Mov
	return 0; // 0x99 Return
}


func_643(var_3_int)
{
	var_3_int = 1; // 0x283 TMovB
	return 0; // 0x284 Return
}


func_645(var_646_bool, var_647_float)
{
	var_648_float = 0; var_649_bool = 0; var_650_float = 0; var_651_bool = 0; // 0x285 PushV
	rand(var_650_float); // 0x286 Func
	var_652_bool = var_650_float < var_647_float; // 0x288 LT
	if(var_652_bool == 0) goto Label_665; // 0x289 JumpB
	
Label_650:
	IsAnimationPlaying(var_651_bool); // 0x28a Func
	var_653_bool = var_651_bool == 0; // 0x28c Not
	if(var_653_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_664; // 0x28e Jump
	
Label_664:
	goto Label_670; // 0x298 Jump
	
Label_670:
	var_646_bool = 0; // 0x29e MovB
	return 4; // 0x29f Return
	
Label_655:
	var_654_bool = 0; // 0x28f PushV
	func_743(var_654_bool); // 0x290 NEW_2
	if(var_654_bool == 0) goto Label_661; // 0x292 JumpB
	var_646_bool = 1; // 0x293 MovB
	return 4; // 0x294 Return
	
Label_661:
	sync(); // 0x295 Func
	goto Label_650; // 0x297 Jump
	
Label_665:
	WaitForAnimEnd(); // 0x299 Func
	func_847(var_651_bool); // 0x29c NEW_2
}


func_1681(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0; // 0x691 PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x692 PushV
	var_22_object = var_18_object; // 0x693 Mov
	func_1645(var_21_bool, var_22_object); // 0x694 NEW_2
	var_38_bool = var_21_bool == 0; // 0x696 Not
	if(var_38_bool == 0) goto Label_1690; // 0x697 JumpB
	var_17_bool = 0; // 0x698 MovB
	return 2; // 0x699 Return
	
Label_1690:
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x69a PushV
	var_40_object = var_18_object; // 0x69b Mov
	var_41_string = "noaccess"; // 0x69c MovS
	func_1502(var_39_bool, var_40_object, var_41_string); // 0x69d NEW_2
	var_48_bool = var_39_bool == 0; // 0x69f Not
	if(var_48_bool == 0) goto Label_1699; // 0x6a0 JumpB
	var_17_bool = 1; // 0x6a1 MovB
	return 2; // 0x6a2 Return
	
Label_1699:
	var_49_string = "noaccess"; // 0x6a3 PushS
	GetProperty(var_49_string, var_20_int); // 0x6a4 ObjFunc
	var_50_int = 0; // 0x6a6 PushI
	var_17_bool = var_20_int == var_50_int; // 0x6a7 Eq2
	return 2; // 0x6a8 Return
}


func_2197(var_108_string)
{
	var_109_object = Obj(); var_110_int = 0; var_111_bool = 0; var_112_object = Obj(); var_113_int = 0; var_114_bool = 0; // 0x895 PushV
	CreateInvItem(var_112_object); // 0x896 Func
	SetItemName(var_108_string); // 0x898 ObjFunc
	var_115_string = "Organ"; // 0x89a PushS
	var_116_int = 1; // 0x89b PushI
	SetProperty(var_115_string, var_116_int); // 0x89c ObjFunc
	GetItemID(var_113_int); // 0x89e ObjFunc
	var_117_int = 0; // 0x8a0 PushI
	var_118_int = 1; // 0x8a1 PushI
	AddItem(var_114_bool, var_112_object, var_117_int, var_118_int); // 0x8a2 Func
	return 6; // 0x8a4 Return
}


func_154(var_531_float)
{
	var_531_float = 0.15; // 0x9b MovF
	return 0; // 0x9c Return
}


func_157(var_538_int)
{
	var_538_int = 0; // 0x9e MovI
	return 0; // 0x9f Return
}


func_672(var_0_bool, var_426_bool, var_427_float)
{
	var_428_bool = 0; var_429_cvector = CVector(0,0,0); var_430_cvector = CVector(0,0,0); var_431_cvector = CVector(0,0,0); var_432_float = 0; var_433_bool = 0; var_434_cvector = CVector(0,0,0); var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_float = 0; // 0x2a0 PushV
	
Label_673:
	IsAnimationPlaying(var_433_bool); // 0x2a1 Func
	var_438_bool = var_433_bool == 0; // 0x2a3 Not
	if(var_438_bool == 0) goto Label_678; // 0x2a4 JumpB
	goto Label_710; // 0x2a5 Jump
	
Label_710:
	func_847(var_437_float); // 0x2c7 NEW_2
	var_426_bool = 0; // 0x2c9 MovB
	return 10; // 0x2ca Return
	
Label_678:
	var_439_bool = 0; // 0x2a6 PushV
	func_743(var_439_bool); // 0x2a7 NEW_2
	if(var_439_bool == 0) goto Label_684; // 0x2a9 JumpB
	var_426_bool = 1; // 0x2aa MovB
	return 10; // 0x2ab Return
	
Label_684:
	var_482_bool = 0; var_483_object = Obj(); // 0x2ac PushV
	var_483_object = var_0_bool; // 0x2ad MovT
	func_1681(var_482_bool, var_483_object); // 0x2ae NEW_2
	var_484_bool = var_482_bool == 0; // 0x2b0 Not
	if(var_484_bool == 0) goto Label_692; // 0x2b1 JumpB
	var_426_bool = 0; // 0x2b2 MovB
	return 10; // 0x2b3 Return
	
Label_692:
	GetPFPosition(var_434_cvector); // 0x2b4 TObjFunc
	GetPFPosition(var_435_cvector); // 0x2b6 Func
	var_436_cvector = var_434_cvector - var_435_cvector; // 0x2b8 Sub2
	var_437_float = var_436_cvector | var_436_cvector; // 0x2b9 Or2
	var_485_float = var_427_float * var_427_float; // 0x2ba Mult
	var_486_bool = var_437_float < var_485_float; // 0x2bb LT
	if(var_486_bool == 0) goto Label_707; // 0x2bc JumpB
	var_487_bool = 0; var_488_float = 0; // 0x2bd PushV
	var_488_float = var_427_float; // 0x2be Mov
	func_506(var_437_float, var_487_bool, var_488_float); // 0x2bf NEW_2
	var_426_bool = 1; // 0x2c1 MovB
	return 10; // 0x2c2 Return
	
Label_707:
	sync(); // 0x2c3 Func
	goto Label_673; // 0x2c5 Jump
}


func_160(var_599_int)
{
	var_599_int = 1; // 0xa0 MovI
	return 0; // 0xa1 Return
}


func_162(var_600_object, var_601_float)
{
	var_602_bool = 0; // 0xa3 PushV
	var_602_bool = 0; // 0xa4 MovB
	var_603_int = 0; // 0xa5 PushI
	var_604_bool = var_601_float > var_603_int; // 0xa6 GT
	if(var_604_bool == 0) goto Label_174; // 0xa7 JumpB
	var_605_bool = 0; var_606_object = Obj(); // 0xa8 PushV
	var_606_object = var_600_object; // 0xa9 Mov
	func_1609(var_605_bool, var_606_object); // 0xaa NEW_2
	if(var_605_bool == 0) goto Label_174; // 0xac JumpB
	var_602_bool = 1; // 0xad MovB
	
Label_174:
	if(var_602_bool == 0) goto Label_181; // 0xae JumpB
	var_622_bool = GlobalVars[0]; // 0xaf PushGE
	var_622_bool = 1; // 0xb0 MovB
	GlobalVars[0] = var_622_bool; // 0xb1 PopGE
	func_643(var_601_float); // 0xb3 NEW_2
	
Label_181:
	return 0; // 0xb5 Return
}


func_1185()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x4a1 PushV
	WaitForAnimEnd(); // 0x4a2 Func
	var_25_bool = 0; // 0x4a4 PushV
	func_1861(var_25_bool); // 0x4a5 NEW_2
	var_28_bool = var_25_bool == 0; // 0x4a7 Not
	if(var_28_bool == 0) goto Label_1194; // 0x4a8 JumpB
	return 14; // 0x4a9 Return
	
Label_1194:
	var_29_int = 0; // 0x4aa PushV
	func_2095(var_29_int); // 0x4ab NEW_2
	var_18_int = var_29_int; // 0x4ac Mov
	var_19_int = 0; // 0x4ae MovI
	
Label_1199:
	var_42_bool = 0; // 0x4af PushV
	var_42_bool = 0; // 0x4b0 MovB
	var_43_int = 5; // 0x4b1 PushI
	var_44_bool = var_19_int < var_43_int; // 0x4b2 LT
	if(var_44_bool == 0) goto Label_1209; // 0x4b3 JumpB
	var_45_bool = 0; // 0x4b4 PushV
	func_1861(var_45_bool); // 0x4b5 NEW_2
	if(var_45_bool == 0) goto Label_1209; // 0x4b7 JumpB
	var_42_bool = 1; // 0x4b8 MovB
	
Label_1209:
	if(var_42_bool == 0) goto Label_1261; // 0x4b9 JumpB
	var_46_int = 3; // 0x4ba PushI
	irand(var_20_int, var_46_int); // 0x4bb Func
	var_47_int = 0; // 0x4bd PushI
	var_48_bool = var_20_int == var_47_int; // 0x4be Eq
	if(var_48_bool == 0) goto Label_1233; // 0x4bf JumpB
	var_49_int = var_18_int; // 0x4c0 Push
	if(var_49_int == 0) goto Label_1232; // 0x4c1 JumpB
	irand(var_21_int, var_18_int); // 0x4c2 Func
	var_50_string = "all"; // 0x4c4 PushS
	var_51_string = ""; var_52_int = 0; // 0x4c5 PushV
	var_52_int = var_21_int; // 0x4c6 Mov
	func_2088(var_51_string, var_52_int); // 0x4c7 NEW_2
	PlayAnimation(var_50_string, var_51_string); // 0x4c9 Func
	WaitForAnimEnd(var_22_bool); // 0x4cb Func
	var_53_bool = var_22_bool == 0; // 0x4cd Not
	if(var_53_bool == 0) goto Label_1232; // 0x4ce JumpB
	goto Label_1261; // 0x4cf Jump
	
Label_1261:
	ResetAAS(); // 0x4ed Func
	return 14; // 0x4ef Return
	
Label_1232:
	goto Label_1250; // 0x4d0 Jump
	
Label_1250:
	var_54_bool = 0; // 0x4e2 PushV
	func_1264(var_54_bool); // 0x4e3 NEW_2
	var_55_bool = var_54_bool == 0; // 0x4e5 Not
	if(var_55_bool == 0) goto Label_1256; // 0x4e6 JumpB
	goto Label_1261; // 0x4e7 Jump
	
Label_1256:
	ResetAAS(); // 0x4e8 Func
	var_56_int = 1; // 0x4ea PushI
	var_19_int = var_19_int + var_56_int; // 0x4eb Add2
	goto Label_1199; // 0x4ec Jump
	
Label_1233:
	var_57_int = 1; // 0x4d1 PushI
	var_58_bool = var_20_int == var_57_int; // 0x4d2 Eq
	if(var_58_bool == 0) goto Label_1247; // 0x4d3 JumpB
	var_59_int = 4; // 0x4d4 PushI
	rand(var_23_float, var_59_int); // 0x4d5 Func
	var_60_int = 1; // 0x4d7 PushI
	var_61_int = var_23_float + var_60_int; // 0x4d8 Add
	Sleep(var_61_int, var_24_bool); // 0x4d9 Func
	var_62_bool = var_24_bool == 0; // 0x4db Not
	if(var_62_bool == 0) goto Label_1246; // 0x4dc JumpB
	goto Label_1261; // 0x4dd Jump
	
Label_1246:
	goto Label_1250; // 0x4de Jump
	
Label_1247:
	var_63_int = var_19_int; // 0x4df Push
	if(var_63_int == 0) goto Label_1250; // 0x4e0 JumpB
	goto Label_1261; // 0x4e1 Jump
}


func_2214()
{
	var_102_int = 0; // 0x8a6 PushV
	func_2147(var_102_int); // 0x8a7 NEW_2
	var_106_int = 1; // 0x8a9 PushI
	var_107_bool = var_102_int != var_106_int; // 0x8aa Neq
	if(var_107_bool == 0) goto Label_2221; // 0x8ab JumpB
	return 0; // 0x8ac Return
	
Label_2221:
	var_108_string = ""; // 0x8ad PushV
	var_108_string = "liver"; // 0x8ae MovS
	func_2197(var_108_string); // 0x8af NEW_2
	var_119_string = ""; // 0x8b1 PushV
	var_119_string = "kidney"; // 0x8b2 MovS
	func_2197(var_119_string); // 0x8b3 NEW_2
	var_120_string = ""; // 0x8b5 PushV
	var_120_string = "heart"; // 0x8b6 MovS
	func_2197(var_120_string); // 0x8b7 NEW_2
	var_121_string = ""; // 0x8b9 PushV
	var_121_string = "blood"; // 0x8ba MovS
	func_2197(var_121_string); // 0x8bb NEW_2
	return 0; // 0x8bd Return
}


func_1705(var_105_bool, var_106_cvector)
{
	var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_bool = 0; // 0x6a9 PushV
	GetPosition(var_110_cvector); // 0x6aa Func
	var_111_cvector = var_106_cvector - var_110_cvector; // 0x6ac Sub2
	var_113_float = GetByIndex(var_111_cvector, 0); // 0x6ad PushE
	var_114_float = GetByIndex(var_111_cvector, 2); // 0x6ae PushE
	Rotate(var_113_float, var_114_float, var_112_bool); // 0x6af Func
	var_105_bool = var_112_bool; // 0x6b1 Mov
	return 6; // 0x6b2 Return
}


func_1715(var_101_bool)
{
	var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0x6b3 PushV
	GetPosition(var_104_cvector); // 0x6b4 ObjFunc
	var_105_bool = 0; var_106_cvector = CVector(0,0,0); // 0x6b6 PushV
	var_106_cvector = var_104_cvector; // 0x6b7 Mov
	func_1705(var_105_bool, var_106_cvector); // 0x6b8 NEW_2
	var_101_bool = var_105_bool; // 0x6b9 Mov
	return 2; // 0x6bb Return
}


func_1724(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x6bc PushV
	var_42_bool = var_27_object == 0; // 0x6bd NullEq
	if(var_42_bool == 0) goto Label_1728; // 0x6be JumpB
	return 14; // 0x6bf Return
	
Label_1728:
	IsDead(var_35_bool); // 0x6c0 Func
	var_43_bool = var_35_bool; // 0x6c2 Push
	if(var_43_bool == 0) goto Label_1733; // 0x6c3 JumpB
	return 14; // 0x6c4 Return
	
Label_1733:
	GetSecondaryAnimationType(var_36_int); // 0x6c5 Func
	var_44_int = 0; // 0x6c7 PushI
	var_45_bool = var_36_int < var_44_int; // 0x6c8 LT
	if(var_45_bool == 0) goto Label_1739; // 0x6c9 JumpB
	return 14; // 0x6ca Return
	
Label_1739:
	GetPosition(var_37_cvector); // 0x6cb ObjFunc
	GetPosition(var_38_cvector); // 0x6cd Func
	GetDirection(var_39_cvector); // 0x6cf Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x6d1 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x6d2 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x6d3 PushE
	var_48_float = var_46_float * var_47_float; // 0x6d4 Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x6d5 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x6d6 PushE
	var_51_float = var_49_float * var_50_float; // 0x6d7 Mult
	var_52_int = var_48_float + var_51_float; // 0x6d8 Add
	var_53_int = 0; // 0x6d9 PushI
	var_54_bool = var_52_int >= var_53_int; // 0x6da GE
	if(var_54_bool == 0) goto Label_1758; // 0x6db JumpB
	var_41_string = "fhit"; // 0x6dc MovS
	goto Label_1759; // 0x6dd Jump
	
Label_1759:
	var_55_string = "hit_react"; // 0x6df PushS
	var_56_string = "1"; // 0x6e0 PushS
	var_57_int = var_41_string + var_56_string; // 0x6e1 Add
	var_58_string = "2"; // 0x6e2 PushS
	var_59_int = var_41_string + var_58_string; // 0x6e3 Add
	var_60_int = -10; // 0x6e4 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x6e5 Func
	return 14; // 0x6e7 Return
	
Label_1758:
	var_41_string = "bhit"; // 0x6de MovS
}


func_2238()
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0x8be PushV
	var_64_int = 0; // 0x8bf PushI
	ClearSubContainer(var_64_int); // 0x8c0 Func
	var_65_int = 0; var_66_int = 0; // 0x8c2 PushV
	var_65_int = 300; // 0x8c3 MovI
	var_66_int = 750; // 0x8c4 MovI
	func_2166(var_65_int, var_66_int); // 0x8c5 NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x8c7 PushV
	var_84_string = "Knife"; // 0x8c8 MovS
	var_85_int = 1; // 0x8c9 MovI
	var_86_int = 8; // 0x8ca MovI
	func_1877(var_84_string, var_85_int, var_86_int); // 0x8cb NEW_2
	var_95_string = ""; var_96_int = 0; var_97_int = 0; // 0x8cd PushV
	var_95_string = "lockpick"; // 0x8ce MovS
	var_96_int = 1; // 0x8cf MovI
	var_97_int = 6; // 0x8d0 MovI
	func_1877(var_95_string, var_96_int, var_97_int); // 0x8d1 NEW_2
	var_98_int = 0; var_99_string = ""; // 0x8d3 PushV
	var_99_string = "grabitel_mark"; // 0x8d4 MovS
	func_2268(var_98_int, var_99_string); // 0x8d5 NEW_2
	var_100_int = 0; // 0x8d7 PushI
	var_101_int = 1; // 0x8d8 PushI
	AddItem(var_63_bool, var_98_int, var_100_int, var_101_int); // 0x8d9 Func
	return 4; // 0x8db Return
}


func_203(var_0_bool, var_3_int, var_5_float, var_204_object, var_205_bool, var_206_float, var_275_bool, var_367_bool)
{
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_bool = 0; var_211_bool = 0; var_212_float = 0; var_213_cvector = CVector(0,0,0); var_214_float = 0; var_215_cvector = CVector(0,0,0); var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_bool = 0; var_222_bool = 0; var_223_float = 0; var_224_cvector = CVector(0,0,0); var_225_float = 0; var_226_cvector = CVector(0,0,0); var_227_bool = 0; var_228_float = 0; // 0xcb PushV
	func_432(var_226_cvector, var_227_bool, var_228_float); // 0xcd NEW_2
	var_5_float = 0; // 0xcf TMovI
	var_251_string = "@GetAttackDistance"; // 0xd0 PushS
	var_252_int = 1; // 0xd1 PushI
	var_253_bool = IsFuncExist(var_204_object, var_251_string, var_252_int); // 0xd2 FuncExist
	if(var_253_bool == 0) goto Label_217; // 0xd3 JumpB
	GetAttackDistance(var_218_float); // 0xd4 ObjFunc
	var_254_int = 50; // 0xd6 PushI
	var_218_float = var_218_float + var_254_int; // 0xd7 Add2
	goto Label_218; // 0xd8 Jump
	
Label_218:
	var_255_int = 150; // 0xda PushI
	var_256_bool = var_218_float >= var_255_int; // 0xdb GE
	if(var_256_bool == 0) goto Label_222; // 0xdc JumpB
	var_218_float = 150; // 0xdd MovI
	
Label_222:
	var_3_int = 0; // 0xde TMovB
	var_0_bool = var_204_object; // 0xdf TMov
	IsPlayerActor(var_0_bool, var_221_bool); // 0xe0 Func
	var_257_bool = var_221_bool; // 0xe2 Push
	if(var_257_bool == 0) goto Label_236; // 0xe3 JumpB
	var_258_string = "attack"; // 0xe4 PushS
	PlayGlobalMusic(var_258_string); // 0xe5 Func
	var_259_object = Obj(); // 0xe7 PushV
	func_1929(var_259_object); // 0xe8 NEW_2
	SendPlayerEnemy(var_204_object, var_259_object); // 0xea Func
	
Label_236:
	var_260_bool = var_205_bool; // 0xec Push
	if(var_260_bool == 0) goto Label_240; // 0xed JumpB
	var_222_bool = 0; // 0xee MovB
	goto Label_241; // 0xef Jump
	
Label_241:
	var_261_float = 300.0; // 0xf1 PushF
	var_223_float = var_261_float + var_218_float; // 0xf2 Add2
	
Label_243:
	var_262_bool = 0; // 0xf3 PushV
	var_262_bool = 0; // 0xf4 MovB
	var_263_bool = 0; var_264_object = Obj(); // 0xf5 PushV
	var_264_object = var_0_bool; // 0xf6 MovT
	func_1681(var_263_bool, var_264_object); // 0xf7 NEW_2
	if(var_263_bool == 0) goto Label_253; // 0xf9 JumpB
	var_265_bool = var_3_int == 0; // 0xfa Not
	if(var_265_bool == 0) goto Label_253; // 0xfb JumpB
	var_262_bool = 1; // 0xfc MovB
	
Label_253:
	if(var_262_bool == 0) goto Label_415; // 0xfd JumpB
	func_847(var_228_float); // 0xff NEW_2
	GetPFPosition(var_219_cvector); // 0x101 TObjFunc
	GetPFPosition(var_220_cvector); // 0x103 Func
	var_224_cvector = var_219_cvector - var_220_cvector; // 0x105 Sub2
	var_225_float = var_224_cvector | var_224_cvector; // 0x106 Or2
	var_267_float = var_223_float * var_223_float; // 0x107 Mult
	var_268_bool = var_225_float >= var_267_float; // 0x108 GE
	if(var_268_bool == 0) goto Label_281; // 0x109 JumpB
	var_269_bool = 0; var_270_object = Obj(); var_271_float = 0; var_272_float = 0; var_273_bool = 0; var_274_bool = 0; // 0x10a PushV
	var_270_object = var_0_bool; // 0x10b MovT
	var_271_float = var_218_float; // 0x10c Mov
	var_272_float = 3000.0; // 0x10d MovF
	var_273_bool = 1; // 0x10e MovB
	var_274_bool = 0; // 0x10f MovB
	TaskCall(2); // 0x110 TaskCall
	func_887(var_277_bool, var_269_bool, var_270_object, var_271_float, var_272_float, var_273_bool, var_274_bool); // 0x111 NEW_2
	TaskReturn(); // 0x112 TaskReturn
	var_352_bool = var_275_bool == 0; // 0x114 Not
	if(var_352_bool == 0) goto Label_279; // 0x115 JumpB
	goto Label_415; // 0x116 Jump
	
Label_415:
	WaitForAnimEnd(); // 0x19f Func
	var_353_int = var_3_int; // 0x1a1 PushT
	if(var_353_int == 0) goto Label_420; // 0x1a2 JumpB
	return 22; // 0x1a3 Return
	
Label_420:
	var_354_string = "all"; // 0x1a4 PushS
	var_355_string = "attack_off"; // 0x1a5 PushS
	PlayAnimation(var_354_string, var_355_string); // 0x1a6 Func
	WaitForAnimEnd(); // 0x1a8 Func
	var_356_bool = var_221_bool; // 0x1aa Push
	if(var_356_bool == 0) goto Label_431; // 0x1ab JumpB
	var_357_float = 2.0; // 0x1ac PushF
	Sleep(var_357_float); // 0x1ad Func
	
Label_431:
	return 22; // 0x1af Return
	
Label_279:
	var_222_bool = 0; // 0x117 MovB
	goto Label_414; // 0x118 Jump
	
Label_414:
	goto Label_243; // 0x19e Jump
	
Label_281:
	var_358_float = var_206_float * var_206_float; // 0x119 Mult
	var_359_bool = var_225_float >= var_358_float; // 0x11a GE
	if(var_359_bool == 0) goto Label_406; // 0x11b JumpB
	GetPFPosition(var_226_cvector); // 0x11c TObjFunc
	CanReachByPF(var_227_bool, var_226_cvector); // 0x11e Func
	var_360_bool = var_227_bool == 0; // 0x120 Not
	if(var_360_bool == 0) goto Label_305; // 0x121 JumpB
	var_361_bool = 0; var_362_object = Obj(); var_363_float = 0; var_364_float = 0; var_365_bool = 0; var_366_bool = 0; // 0x122 PushV
	var_362_object = var_0_bool; // 0x123 MovT
	var_363_float = var_218_float; // 0x124 Mov
	var_364_float = 3000.0; // 0x125 MovF
	var_365_bool = 1; // 0x126 MovB
	var_366_bool = 0; // 0x127 MovB
	TaskCall(2); // 0x128 TaskCall
	func_887(var_369_bool, var_361_bool, var_362_object, var_363_float, var_364_float, var_365_bool, var_366_bool); // 0x129 NEW_2
	TaskReturn(); // 0x12a TaskReturn
	var_370_bool = var_367_bool == 0; // 0x12c Not
	if(var_370_bool == 0) goto Label_303; // 0x12d JumpB
	goto Label_415; // 0x12e Jump
	
Label_303:
	var_222_bool = 0; // 0x12f MovB
	goto Label_243; // 0x130 Jump
	
Label_305:
	var_371_bool = var_222_bool == 0; // 0x131 Not
	if(var_371_bool == 0) goto Label_330; // 0x132 JumpB
	var_372_object = Obj(); // 0x133 PushV
	var_372_object = var_0_bool; // 0x134 MovT
	func_1850(); // 0x135 NEW_2
	var_381_string = "all"; // 0x137 PushS
	var_382_string = "attack_on"; // 0x138 PushS
	PlayAnimation(var_381_string, var_382_string); // 0x139 Func
	WaitForAnimEnd(); // 0x13b Func
	func_847(var_228_float); // 0x13e NEW_2
	StopAsync(); // 0x140 Func
	var_222_bool = 1; // 0x142 MovB
	var_383_bool = 0; var_384_object = Obj(); // 0x143 PushV
	var_384_object = var_0_bool; // 0x144 MovT
	func_1681(var_383_bool, var_384_object); // 0x145 NEW_2
	var_385_bool = var_383_bool == 0; // 0x147 Not
	if(var_385_bool == 0) goto Label_330; // 0x148 JumpB
	goto Label_415; // 0x149 Jump
	
Label_330:
	rand(var_228_float); // 0x14a Func
	var_386_bool = 0; // 0x14c PushV
	var_386_bool = 1; // 0x14d MovB
	var_387_float = 0.2; // 0x14e PushF
	var_388_bool = var_228_float < var_387_float; // 0x14f LT
	if(var_388_bool == 0) goto Label_342; // 0x150 JumpB
	var_389_bool = 0; // 0x151 PushV
	func_804(var_386_bool, var_389_bool); // 0x152 NEW_2
	if(var_389_bool == 0) goto Label_342; // 0x154 JumpB
	var_386_bool = 0; // 0x155 MovB
	
Label_342:
	if(var_386_bool == 0) goto Label_359; // 0x156 JumpB
	Face(var_0_bool); // 0x157 Func
	func_852(); // 0x15a NEW_2
	var_424_string = "all"; // 0x15c PushS
	var_425_string = "attack_stay"; // 0x15d PushS
	PlayAnimation(var_424_string, var_425_string); // 0x15e Func
	var_426_bool = 0; var_427_float = 0; // 0x160 PushV
	var_427_float = var_206_float; // 0x161 Mov
	func_672(var_228_float, var_426_bool, var_427_float); // 0x162 NEW_2
	StopAsync(); // 0x164 Func
	goto Label_405; // 0x166 Jump
	
Label_405:
	goto Label_414; // 0x195 Jump
	
Label_359:
	Face(var_0_bool); // 0x167 Func
	var_662_string = "all"; // 0x169 PushS
	var_663_string = "fjump"; // 0x16a PushS
	PlayAnimation(var_662_string, var_663_string); // 0x16b Func
	WaitForAnimEnd(); // 0x16d Func
	func_847(var_228_float); // 0x170 NEW_2
	var_664_cvector = CVector(0.0, 0.0, 0.0); // 0x172 PushVec
	SetSpeed(var_664_cvector); // 0x173 Func
	Stop(); // 0x175 Func
	StopAsync(); // 0x177 Func
	var_665_bool = 0; // 0x179 PushV
	func_804(var_228_float, var_665_bool); // 0x17a NEW_2
	var_666_bool = var_665_bool == 0; // 0x17c Not
	if(var_666_bool == 0) goto Label_405; // 0x17d JumpB
	var_667_bool = 0; var_668_object = Obj(); // 0x17e PushV
	var_668_object = var_0_bool; // 0x17f MovT
	func_1681(var_667_bool, var_668_object); // 0x180 NEW_2
	var_669_bool = var_667_bool == 0; // 0x182 Not
	if(var_669_bool == 0) goto Label_389; // 0x183 JumpB
	goto Label_415; // 0x184 Jump
	
Label_389:
	GetPFPosition(var_219_cvector); // 0x185 TObjFunc
	GetPFPosition(var_220_cvector); // 0x187 Func
	var_224_cvector = var_219_cvector - var_220_cvector; // 0x189 Sub2
	var_225_float = var_224_cvector | var_224_cvector; // 0x18a Or2
	var_670_float = var_206_float * var_206_float; // 0x18b Mult
	var_671_bool = var_225_float < var_670_float; // 0x18c LT
	if(var_671_bool == 0) goto Label_405; // 0x18d JumpB
	var_672_bool = 0; var_673_float = 0; // 0x18e PushV
	var_673_float = var_206_float; // 0x18f Mov
	func_506(var_228_float, var_672_bool, var_673_float); // 0x190 NEW_2
	var_674_bool = var_672_bool == 0; // 0x192 Not
	if(var_674_bool == 0) goto Label_405; // 0x193 JumpB
	goto Label_415; // 0x194 Jump
	
Label_406:
	var_675_bool = 0; var_676_float = 0; // 0x196 PushV
	var_676_float = var_206_float; // 0x197 Mov
	func_506(var_228_float, var_675_bool, var_676_float); // 0x198 NEW_2
	var_677_bool = var_675_bool == 0; // 0x19a Not
	if(var_677_bool == 0) goto Label_413; // 0x19b JumpB
	goto Label_415; // 0x19c Jump
	
Label_413:
	var_222_bool = 1; // 0x19d MovB
	
Label_240:
	var_222_bool = 1; // 0xf0 MovB
	
Label_217:
	var_218_float = var_206_float; // 0xd9 Mov
}


func_715(var_0_bool, var_441_bool)
{
	var_442_cvector = CVector(0,0,0); var_443_cvector = CVector(0,0,0); var_444_cvector = CVector(0,0,0); var_445_float = 0; var_446_float = 0; var_447_cvector = CVector(0,0,0); var_448_cvector = CVector(0,0,0); var_449_cvector = CVector(0,0,0); var_450_float = 0; var_451_float = 0; // 0x2cb PushV
	var_452_bool = 0; var_453_object = Obj(); // 0x2cc PushV
	var_453_object = var_0_bool; // 0x2cd MovT
	func_1681(var_452_bool, var_453_object); // 0x2ce NEW_2
	var_454_bool = var_452_bool == 0; // 0x2d0 Not
	if(var_454_bool == 0) goto Label_724; // 0x2d1 JumpB
	var_441_bool = 0; // 0x2d2 MovB
	return 10; // 0x2d3 Return
	
Label_724:
	var_455_bool = 0; // 0x2d4 PushV
	func_804(var_451_float, var_455_bool); // 0x2d5 NEW_2
	if(var_455_bool == 0) goto Label_741; // 0x2d7 JumpB
	GetPFPosition(var_447_cvector); // 0x2d8 TObjFunc
	GetPFPosition(var_448_cvector); // 0x2da Func
	var_449_cvector = var_447_cvector - var_448_cvector; // 0x2dc Sub2
	var_450_float = var_449_cvector | var_449_cvector; // 0x2dd Or2
	GetAttackDistance(var_451_float); // 0x2de TObjFunc
	var_456_int = 50; // 0x2e0 PushI
	var_451_float = var_451_float + var_456_int; // 0x2e1 Add2
	var_457_float = var_451_float * var_451_float; // 0x2e2 Mult
	var_441_bool = var_450_float <= var_457_float; // 0x2e3 LE2
	return 10; // 0x2e4 Return
	
Label_741:
	var_441_bool = 0; // 0x2e5 MovB
	return 10; // 0x2e6 Return
}


func_2268(var_77_int, var_78_string)
{
	var_79_int = 0; var_80_int = 0; // 0x8dc PushV
	GetInvItemByName(var_80_int, var_78_string); // 0x8dd Func
	var_77_int = var_80_int; // 0x8df Mov
	return 2; // 0x8e0 Return
}


func_2273(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x8e1 PushV
	GetScene(var_13_object); // 0x8e2 Func
	var_14_object = Obj(); // 0x8e4 PushV
	func_1929(var_14_object); // 0x8e5 NEW_2
	RemoveStationaryActor(var_14_object); // 0x8e7 ObjFunc
	var_17_bool = 0; var_18_object = Obj(); // 0x8e9 PushV
	var_18_object = var_11_object; // 0x8ea Mov
	func_1497(var_17_bool, var_18_object); // 0x8eb NEW_2
	if(var_17_bool == 0) goto Label_2291; // 0x8ed JumpB
	var_21_bool = 0; var_22_object = Obj(); var_23_float = 0; // 0x8ee PushV
	var_22_object = var_11_object; // 0x8ef Mov
	var_23_float = 0.02; // 0x8f0 MovF
	func_2000(var_21_bool, var_22_object, var_23_float); // 0x8f1 NEW_2
	
Label_2291:
	var_59_object = Obj(); // 0x8f3 PushV
	var_59_object = var_11_object; // 0x8f4 Mov
	TaskCall(4); // 0x8f5 TaskCall
	func_1271(var_59_object); // 0x8f6 NEW_2
	TaskReturn(); // 0x8f7 TaskReturn
	return 2; // 0x8f9 Return
}


func_743(var_439_bool)
{
	var_440_bool = 0; // 0x2e7 PushV
	var_440_bool = 0; // 0x2e8 MovB
	var_441_bool = 0; // 0x2e9 PushV
	func_715(var_440_bool, var_441_bool); // 0x2ea NEW_2
	if(var_441_bool == 0) goto Label_754; // 0x2ec JumpB
	var_458_bool = 0; // 0x2ed PushV
	func_759(var_439_bool, var_440_bool, var_458_bool); // 0x2ee NEW_2
	if(var_458_bool == 0) goto Label_754; // 0x2f0 JumpB
	var_440_bool = 1; // 0x2f1 MovB
	
Label_754:
	if(var_440_bool == 0) goto Label_757; // 0x2f2 JumpB
	var_439_bool = 1; // 0x2f3 MovB
	return 0; // 0x2f4 Return
	
Label_757:
	var_439_bool = 0; // 0x2f5 MovB
	return 0; // 0x2f6 Return
}


func_1768(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x6e8 PushV
	var_35_bool = 0; // 0x6e9 PushV
	var_35_bool = 0; // 0x6ea MovB
	var_36_bool = 0; // 0x6eb PushV
	var_36_bool = 0; // 0x6ec MovB
	var_37_object = var_14_object; // 0x6ed Push
	if(var_37_object == 0) goto Label_1779; // 0x6ee JumpB
	var_38_int = 4; // 0x6ef PushI
	var_39_bool = var_15_int != var_38_int; // 0x6f0 Neq
	if(var_39_bool == 0) goto Label_1779; // 0x6f1 JumpB
	var_36_bool = 1; // 0x6f2 MovB
	
Label_1779:
	if(var_36_bool == 0) goto Label_1784; // 0x6f3 JumpB
	var_40_int = 5; // 0x6f4 PushI
	var_41_bool = var_15_int != var_40_int; // 0x6f5 Neq
	if(var_41_bool == 0) goto Label_1784; // 0x6f6 JumpB
	var_35_bool = 1; // 0x6f7 MovB
	
Label_1784:
	if(var_35_bool == 0) goto Label_1831; // 0x6f8 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x6f9 PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x6fa PushV
	var_45_object = var_14_object; // 0x6fb Mov
	func_1482(var_45_object); // 0x6fc NEW_2
	var_43_cvector = var_44_cvector; // 0x6fd Mov
	func_1935(var_42_cvector, var_43_cvector); // 0x6ff NEW_2
	var_26_cvector = var_42_cvector; // 0x700 Mov
	CreateVectorVector(var_27_object); // 0x702 Func
	var_28_int = 1; // 0x704 MovI
	
Label_1797:
	var_55_string = "hit"; // 0x705 PushS
	var_56_int = var_55_string + var_28_int; // 0x706 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x707 Func
	var_57_bool = var_29_bool == 0; // 0x709 Not
	if(var_57_bool == 0) goto Label_1804; // 0x70a JumpB
	goto Label_1813; // 0x70b Jump
	
Label_1813:
	size(var_32_int); // 0x715 ObjFunc
	var_58_int = var_32_int; // 0x717 Push
	if(var_58_int == 0) goto Label_1830; // 0x718 JumpB
	irand(var_33_int, var_32_int); // 0x719 Func
	get(var_34_cvector, var_33_int); // 0x71b ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x71d PushV
	var_59_object = var_14_object; // 0x71e Mov
	var_60_int = var_15_int; // 0x71f Mov
	var_61_float = var_16_float; // 0x720 Mov
	var_62_cvector = var_34_cvector; // 0x721 Mov
	var_63_cvector = -var_26_cvector; // 0x722 Neg2
	func_1836(var_61_float, var_62_cvector, var_63_cvector); // 0x723 NEW_2
	return 18; // 0x725 Return
	
Label_1830:
	var_27_object = 0; // 0x726 SetNull
	
Label_1831:
	var_104_object = Obj(); // 0x727 PushV
	var_104_object = var_14_object; // 0x728 Mov
	func_1724(var_104_object); // 0x729 NEW_2
	return 18; // 0x72b Return
	
Label_1804:
	var_105_int = var_31_cvector | var_26_cvector; // 0x70c Or
	var_106_float = 0.70711; // 0x70d PushF
	var_107_bool = var_105_int >= var_106_float; // 0x70e GE
	if(var_107_bool == 0) goto Label_1810; // 0x70f JumpB
	add(var_30_cvector); // 0x710 ObjFunc
	
Label_1810:
	var_108_int = 1; // 0x712 PushI
	var_28_int = var_28_int + var_108_int; // 0x713 Add2
	goto Label_1797; // 0x714 Jump
}


func_1264(var_54_bool)
{
	var_54_bool = 1; // 0x4f0 MovB
	return 0; // 0x4f1 Return
}


func_1266()
{
	StopAnimation(); // 0x4f2 Func
	StopGroup0(); // 0x4f4 Func
	return 0; // 0x4f6 Return
}


func_759(var_0_bool, var_4_bool, var_458_bool)
{
	var_459_object = Obj(); var_460_bool = 0; var_461_float = 0; var_462_cvector = CVector(0,0,0); var_463_cvector = CVector(0,0,0); var_464_object = Obj(); var_465_bool = 0; var_466_float = 0; var_467_cvector = CVector(0,0,0); var_468_cvector = CVector(0,0,0); // 0x2f7 PushV
	GetScene(var_464_object); // 0x2f8 Func
	var_465_bool = 0; // 0x2fa MovB
	
Label_763:
	var_469_cvector = CVector(0,0,0); var_470_object = Obj(); // 0x2fb PushV
	var_470_object = var_0_bool; // 0x2fc MovT
	func_1482(var_470_object); // 0x2fd NEW_2
	var_475_int = -var_469_cvector; // 0x2ff Neg
	FindDirLength(var_466_float, var_475_int, var_466_float); // 0x300 Func
	var_476_bool = var_466_float < var_4_bool; // 0x302 LT
	if(var_476_bool == 0) goto Label_773; // 0x303 JumpB
	goto Label_801; // 0x304 Jump
	
Label_801:
	var_458_bool = var_465_bool; // 0x321 Mov
	return 10; // 0x322 Return
	
Label_773:
	Face(var_0_bool); // 0x305 Func
	var_477_string = "all"; // 0x307 PushS
	var_478_string = "bjump"; // 0x308 PushS
	PlayAnimation(var_477_string, var_478_string); // 0x309 Func
	GetPFPosition(var_467_cvector); // 0x30b TObjFunc
	GetPFPosition(var_468_cvector); // 0x30d Func
	WaitForAnimEnd(); // 0x30f Func
	func_847(var_468_cvector); // 0x312 NEW_2
	StopAsync(); // 0x314 Func
	var_479_cvector = CVector(0.0, 0.0, 0.0); // 0x316 PushVec
	SetSpeed(var_479_cvector); // 0x317 Func
	var_465_bool = 1; // 0x319 MovB
	var_480_bool = 0; // 0x31a PushV
	func_715(var_468_cvector, var_480_bool); // 0x31b NEW_2
	var_481_bool = var_480_bool == 0; // 0x31d Not
	if(var_481_bool == 0) goto Label_800; // 0x31e JumpB
	goto Label_801; // 0x31f Jump
	
Label_800:
	goto Label_763; // 0x320 Jump
}


func_1271(var_59_object)
{
	func_2238(); // 0x4f9 NEW_2
	func_2214(); // 0x4fc NEW_2
	var_122_object = Obj(); // 0x4fe PushV
	var_122_object = var_59_object; // 0x4ff Mov
	func_1283(var_122_object); // 0x500 NEW_2
	return 0; // 0x502 Return
}


func_1283(var_122_object)
{
	EventDisable(0); // 0x504 EventDisable
	var_123_object = Obj(); // 0x505 PushV
	var_123_object = var_122_object; // 0x506 Mov
	func_1308(var_123_object); // 0x507 NEW_2
	var_203_int = 50; // 0x509 PushI
	var_204_int = 40; // 0x50a PushI
	SetRTEnvelope(var_203_int, var_204_int); // 0x50b Func
	EventEnable(0); // 0x50d EventEnable
	
Label_1294:
	Hold(); // 0x50e Func
	goto Label_1294; // 0x510 Jump
}


func_1308(var_123_object)
{
	var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_string = ""; var_129_object = Obj(); var_130_bool = 0; var_131_bool = 0; var_132_float = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_string = ""; var_139_object = Obj(); var_140_bool = 0; var_141_bool = 0; var_142_float = 0; var_143_cvector = CVector(0,0,0); // 0x51c PushV
	var_144_bool = var_123_object == 0; // 0x51d NullEq
	if(var_144_bool == 0) goto Label_1316; // 0x51e JumpB
	var_145_string = ""; // 0x51f PushV
	var_145_string = "fdie"; // 0x520 MovS
	func_1399(var_145_string); // 0x521 NEW_2
	goto Label_1398; // 0x523 Jump
	
Label_1398:
	return 20; // 0x576 Return
	
Label_1316:
	GetPosition(var_134_cvector); // 0x524 ObjFunc
	GetPosition(var_135_cvector); // 0x526 Func
	GetDirection(var_136_cvector); // 0x528 Func
	var_137_cvector = var_135_cvector - var_134_cvector; // 0x52a Sub2
	var_177_float = GetByIndex(var_137_cvector, 0); // 0x52b PushE
	var_178_float = GetByIndex(var_136_cvector, 0); // 0x52c PushE
	var_179_float = var_177_float * var_178_float; // 0x52d Mult
	var_180_float = GetByIndex(var_137_cvector, 2); // 0x52e PushE
	var_181_float = GetByIndex(var_136_cvector, 2); // 0x52f PushE
	var_182_float = var_180_float * var_181_float; // 0x530 Mult
	var_183_int = var_179_float + var_182_float; // 0x531 Add
	var_184_int = 0; // 0x532 PushI
	var_185_bool = var_183_int >= var_184_int; // 0x533 GE
	if(var_185_bool == 0) goto Label_1335; // 0x534 JumpB
	var_138_string = "fdie"; // 0x535 MovS
	goto Label_1336; // 0x536 Jump
	
Label_1336:
	RemoveRTEnvelope(); // 0x538 Func
	SetDeathState(); // 0x53a Func
	Stop(); // 0x53c Func
	StopAsync(); // 0x53e Func
	var_139_object = var_123_object; // 0x540 Mov
	var_186_string = "GetScriptProperty"; // 0x541 PushS
	var_187_int = 2; // 0x542 PushI
	var_188_bool = IsFuncExist(var_123_object, var_186_string, var_187_int); // 0x543 FuncExist
	if(var_188_bool == 0) goto Label_1360; // 0x544 JumpB
	var_189_string = "Owner"; // 0x545 PushS
	HasScriptProperty(var_140_bool, var_189_string); // 0x546 ObjFunc
	var_190_bool = var_140_bool; // 0x548 Push
	if(var_190_bool == 0) goto Label_1360; // 0x549 JumpB
	var_191_string = "Owner"; // 0x54a PushS
	GetScriptProperty(var_139_object, var_191_string); // 0x54b ObjFunc
	var_192_bool = var_139_object == 0; // 0x54d NullEq
	if(var_192_bool == 0) goto Label_1360; // 0x54e JumpB
	var_139_object = var_123_object; // 0x54f Mov
	
Label_1360:
	var_193_string = "@GetEyesHeight"; // 0x550 PushS
	var_194_int = 1; // 0x551 PushI
	var_195_bool = IsFuncExist(var_139_object, var_193_string, var_194_int); // 0x552 FuncExist
	if(var_195_bool == 0) goto Label_1375; // 0x553 JumpB
	GetEyesHeight(var_142_float); // 0x554 ObjFunc
	var_143_cvector = CVector(0.0, 0.0, 0.0); // 0x556 MovV
	var_196_float = GetByIndex(var_143_cvector, 1); // 0x557 PushE
	var_196_float = var_142_float; // 0x558 Mov
	SetByIndex(var_143_cvector, 1) = var_196_float; // 0x559 PopE
	var_197_string = "head"; // 0x55a PushS
	LookAsync(var_123_object, var_197_string, var_143_cvector); // 0x55b Func
	var_141_bool = 1; // 0x55d MovB
	goto Label_1376; // 0x55e Jump
	
Label_1376:
	var_198_string = ""; // 0x560 PushV
	var_198_string = var_138_string; // 0x561 Mov
	func_1888(var_198_string); // 0x562 NEW_2
	var_199_string = "all"; // 0x564 PushS
	PlayAnimation(var_199_string, var_138_string); // 0x565 Func
	WaitForAnimEnd(); // 0x567 Func
	var_200_bool = var_141_bool; // 0x569 Push
	if(var_200_bool == 0) goto Label_1392; // 0x56a JumpB
	StopAsync(); // 0x56b Func
	var_201_string = "head"; // 0x56d PushS
	UnlookAsync(var_201_string); // 0x56e Func
	
Label_1392:
	var_202_string = "all"; // 0x570 PushS
	LockAnimationEnd(var_202_string, var_138_string); // 0x571 Func
	RemoveEnvelope(); // 0x573 Func
	var_139_object = 0; // 0x575 SetNull
	
Label_1375:
	var_141_bool = 0; // 0x55f MovB
	
Label_1335:
	var_138_string = "bdie"; // 0x537 MovS
}


func_2336(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x921 PushV
	var_18_object = var_16_object; // 0x922 Mov
	func_1681(var_17_bool, var_18_object); // 0x923 NEW_2
	var_15_bool = var_17_bool; // 0x924 Mov
	return 0; // 0x926 Return
}


func_804(var_0_bool, var_389_bool)
{
	var_390_bool = 0; var_391_bool = 0; // 0x324 PushV
	var_392_string = "IsAttacking"; // 0x325 PushS
	var_393_int = 1; // 0x326 PushI
	var_394_bool = IsFuncExist(var_0_bool, var_392_string, var_393_int); // 0x327 FuncExist
	if(var_394_bool == 0) goto Label_813; // 0x328 JumpB
	IsAttacking(var_391_bool); // 0x329 TObjFunc
	var_389_bool = var_391_bool; // 0x32b Mov
	return 2; // 0x32c Return
	
Label_813:
	var_389_bool = 0; // 0x32d MovB
	return 2; // 0x32e Return
}


func_2343(var_51_object)
{
	var_52_object = Obj(); // 0x928 PushV
	var_52_object = var_51_object; // 0x929 Mov
	func_2354(var_52_object); // 0x92a NEW_2
	return 0; // 0x92c Return
}


func_1836(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x72c PushV
	GetScene(var_23_object); // 0x72d Func
	var_25_string = "scripted"; // 0x72f PushS
	var_26_string = "blood_dir.xml"; // 0x730 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x731 Func
	var_27_object = Obj(); // 0x733 PushV
	var_27_object = var_16_object; // 0x734 Mov
	func_1724(var_27_object); // 0x735 NEW_2
	return 4; // 0x737 Return
}


func_2349()
{
	return 0; // 0x92e Return
}


func_2351(var_13_bool)
{
	var_13_bool = 0; // 0x930 MovB
	return 0; // 0x931 Return
}


func_815(var_2_int, var_5_float)
{
	var_502_float = 0; var_503_int = 0; var_504_float = 0; var_505_int = 0; // 0x32f PushV
	var_506_bool = var_2_int == 0; // 0x330 Not
	if(var_506_bool == 0) goto Label_819; // 0x331 JumpB
	return 4; // 0x332 Return
	
Label_819:
	var_507_float = var_5_float; // 0x333 PushT
	if(var_507_float == 0) goto Label_827; // 0x334 JumpB
	var_508_int = -1; // 0x335 PushI
	var_5_float = var_5_float + var_508_int; // 0x336 Add2
	var_509_int = 0; // 0x337 PushI
	var_510_bool = var_5_float > var_509_int; // 0x338 GT
	if(var_510_bool == 0) goto Label_827; // 0x339 JumpB
	return 4; // 0x33a Return
	
Label_827:
	rand(var_504_float); // 0x33b Func
	var_511_float = 0; // 0x33d PushV
	func_861(var_511_float); // 0x33e NEW_2
	var_512_bool = var_504_float < var_511_float; // 0x340 LT
	if(var_512_bool == 0) goto Label_846; // 0x341 JumpB
	irand(var_505_int, var_504_float); // 0x342 Func
	var_513_int = 1; // 0x344 PushI
	var_505_int = var_505_int + var_513_int; // 0x345 Add2
	var_514_string = "attack"; // 0x346 PushS
	var_515_int = var_514_string + var_505_int; // 0x347 Add
	Speak(var_515_int); // 0x348 Func
	var_516_int = 0; // 0x34a PushV
	func_859(var_516_int); // 0x34b NEW_2
	var_5_float = var_516_int; // 0x34c TMov
	
Label_846:
	return 4; // 0x34e Return
}


func_2354(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x932 PushV
	GetScene(var_54_object); // 0x933 Func
	var_55_object = Obj(); // 0x935 PushV
	func_1929(var_55_object); // 0x936 NEW_2
	RemoveStationaryActor(var_55_object); // 0x938 ObjFunc
	var_58_bool = 0; var_59_object = Obj(); // 0x93a PushV
	var_59_object = var_52_object; // 0x93b Mov
	TaskCall(5); // 0x93c TaskCall
	func_1431(var_53_object, var_54_object, var_58_bool, var_59_object); // 0x93d NEW_2
	TaskReturn(); // 0x93e TaskReturn
	return 2; // 0x940 Return
}


func_1850()
{
	var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); // 0x73a PushV
	GetPosition(var_376_cvector); // 0x73b ObjFunc
	GetPosition(var_377_cvector); // 0x73d Func
	var_378_cvector = var_376_cvector - var_377_cvector; // 0x73f Sub2
	var_379_float = GetByIndex(var_378_cvector, 0); // 0x740 PushE
	var_380_float = GetByIndex(var_378_cvector, 2); // 0x741 PushE
	RotateAsync(var_379_float, var_380_float); // 0x742 Func
	return 6; // 0x744 Return
}


func_1861(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0x745 PushV
	IsLoaded(var_27_bool); // 0x746 Func
	var_25_bool = var_27_bool; // 0x748 Mov
	return 2; // 0x749 Return
}


func_1866(var_286_object)
{
	var_287_float = 0; var_288_cvector = CVector(0,0,0); var_289_float = 0; var_290_cvector = CVector(0,0,0); // 0x74a PushV
	GetEyesHeight(var_289_float); // 0x74b ObjFunc
	var_290_cvector = CVector(0.0, 0.0, 0.0); // 0x74d MovV
	var_291_float = GetByIndex(var_290_cvector, 1); // 0x74e PushE
	var_291_float = var_289_float; // 0x74f Mov
	SetByIndex(var_290_cvector, 1) = var_291_float; // 0x750 PopE
	var_292_string = "head"; // 0x751 PushS
	LookAsync(var_286_object, var_292_string, var_290_cvector); // 0x752 Func
	return 4; // 0x754 Return
}


func_847(var_0_bool)
{
	var_266_object = Obj(); // 0x34f PushV
	var_266_object = var_0_bool; // 0x350 MovT
	func_2062(var_266_object); // 0x351 NEW_2
	return 0; // 0x353 Return
}


func_852()
{
	var_395_string = ""; // 0x354 PushV
	var_395_string = "attack_stay"; // 0x355 MovS
	func_1888(var_395_string); // 0x356 NEW_2
	return 0; // 0x358 Return
}


func_1877(var_84_string, var_85_int, var_86_int)
{
	var_87_bool = 0; var_88_bool = 0; // 0x755 PushV
	var_89_bool = 0; var_90_int = 0; var_91_int = 0; // 0x756 PushV
	var_90_int = var_85_int; // 0x757 Mov
	var_91_int = var_86_int; // 0x758 Mov
	func_1995(var_89_bool, var_90_int, var_91_int); // 0x759 NEW_2
	if(var_89_bool == 0) goto Label_1887; // 0x75b JumpB
	var_94_int = 0; // 0x75c PushI
	AddItem(var_88_bool, var_84_string, var_94_int); // 0x75d Func
	
Label_1887:
	return 2; // 0x75f Return
}


func_857(var_645_bool)
{
	var_645_bool = 1; // 0x359 MovB
	return 0; // 0x35a Return
}


func_859(var_516_int)
{
	var_516_int = 1; // 0x35b MovI
	return 0; // 0x35c Return
}


func_861(var_511_float)
{
	var_511_float = 0.5; // 0x35d MovF
	return 0; // 0x35e Return
}


func_1888(var_146_string)
{
	var_147_bool = 0; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_bool = 0; var_152_float = 0; var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_bool = 0; var_156_int = 0; var_157_bool = 0; var_158_int = 0; var_159_bool = 0; var_160_float = 0; var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); // 0x760 PushV
	IsExisting3DSound(var_155_bool, var_146_string); // 0x761 Func
	var_163_bool = var_155_bool == 0; // 0x763 Not
	if(var_163_bool == 0) goto Label_1913; // 0x764 JumpB
	var_156_int = 0; // 0x765 MovI
	
Label_1894:
	var_164_int = 1; // 0x766 PushI
	var_165_int = var_156_int + var_164_int; // 0x767 Add
	var_166_int = var_146_string + var_165_int; // 0x768 Add
	IsExisting3DSound(var_157_bool, var_166_int); // 0x769 Func
	var_167_bool = var_157_bool == 0; // 0x76b Not
	if(var_167_bool == 0) goto Label_1902; // 0x76c JumpB
	goto Label_1905; // 0x76d Jump
	
Label_1905:
	var_168_bool = var_156_int == 0; // 0x771 Not
	if(var_168_bool == 0) goto Label_1908; // 0x772 JumpB
	return 16; // 0x773 Return
	
Label_1908:
	irand(var_158_int, var_156_int); // 0x774 Func
	var_169_int = 1; // 0x776 PushI
	var_170_int = var_158_int + var_169_int; // 0x777 Add
	var_146_string = var_146_string + var_170_int; // 0x778 Add2
	
Label_1913:
	Is3DSoundLoaded(var_159_bool, var_146_string); // 0x779 Func
	var_171_bool = var_159_bool; // 0x77b Push
	if(var_171_bool == 0) goto Label_1928; // 0x77c JumpB
	GetEyesHeight(var_160_float); // 0x77d Func
	GetDirection(var_161_cvector); // 0x77f Func
	var_172_int = 50; // 0x781 PushI
	var_162_cvector = var_161_cvector * var_172_int; // 0x782 Mult2
	var_173_float = GetByIndex(var_162_cvector, 1); // 0x783 PushE
	var_173_float = var_173_float + var_160_float; // 0x784 Add2
	SetByIndex(var_162_cvector, 1) = var_173_float; // 0x785 PopE
	PlayGlobalSound(var_146_string, var_162_cvector); // 0x786 Func
	
Label_1928:
	return 16; // 0x788 Return
	
Label_1902:
	var_174_int = 1; // 0x76e PushI
	var_156_int = var_156_int + var_174_int; // 0x76f Add2
	goto Label_1894; // 0x770 Jump
}


func_887(var_2_int, var_269_bool, var_270_object, var_271_float, var_272_float, var_273_bool, var_274_bool)
{
	var_278_bool = 0; var_279_bool = 0; var_280_bool = 0; var_281_bool = 0; // 0x377 PushV
	var_282_object = Obj(); // 0x378 PushV
	var_282_object = var_270_object; // 0x379 Mov
	func_2062(var_282_object); // 0x37a NEW_2
	var_283_int = 1; // 0x37c PushI
	var_284_int = 5; // 0x37d PushI
	SetTimer(var_283_int, var_284_int); // 0x37e Func
	CanSee(var_280_bool, var_270_object); // 0x380 Func
	var_285_bool = var_280_bool; // 0x382 Push
	if(var_285_bool == 0) goto Label_906; // 0x383 JumpB
	var_2_int = 1; // 0x384 TMovB
	var_286_object = Obj(); // 0x385 PushV
	var_286_object = var_270_object; // 0x386 Mov
	func_1866(var_286_object); // 0x387 NEW_2
	goto Label_907; // 0x389 Jump
	
Label_907:
	var_293_bool = 0; var_294_object = Obj(); // 0x38b PushV
	var_294_object = var_270_object; // 0x38c Mov
	func_1497(var_293_bool, var_294_object); // 0x38d NEW_2
	if(var_293_bool == 0) goto Label_917; // 0x38f JumpB
	var_297_object = Obj(); // 0x390 PushV
	func_1929(var_297_object); // 0x391 NEW_2
	SendPlayerEnemy(var_270_object, var_297_object); // 0x393 Func
	
Label_917:
	var_298_bool = 0; var_299_object = Obj(); var_300_float = 0; var_301_float = 0; var_302_bool = 0; var_303_bool = 0; // 0x395 PushV
	var_299_object = var_270_object; // 0x396 Mov
	var_300_float = var_271_float; // 0x397 Mov
	var_301_float = var_272_float; // 0x398 Mov
	var_302_bool = var_273_bool; // 0x399 Mov
	var_303_bool = var_274_bool; // 0x39a Mov
	func_992(var_280_bool, var_281_bool, var_298_bool, var_299_object, var_300_float, var_301_float, var_302_bool, var_303_bool); // 0x39b NEW_2
	var_281_bool = var_298_bool; // 0x39c Mov
	var_349_int = var_2_int; // 0x39e PushT
	if(var_349_int == 0) goto Label_931; // 0x39f JumpB
	var_350_string = "head"; // 0x3a0 PushS
	UnlookAsync(var_350_string); // 0x3a1 Func
	
Label_931:
	var_351_int = 1; // 0x3a3 PushI
	KillTimer(var_351_int); // 0x3a4 Func
	var_269_bool = var_281_bool; // 0x3a6 Mov
	return 4; // 0x3a7 Return
	
Label_906:
	var_2_int = 0; // 0x38a TMovB
}


func_1399(var_145_string)
{
	RemoveRTEnvelope(); // 0x578 Func
	SetDeathState(); // 0x57a Func
	Stop(); // 0x57c Func
	StopAsync(); // 0x57e Func
	StopSecondaryAnimation(); // 0x580 Func
	var_146_string = ""; // 0x582 PushV
	var_146_string = var_145_string; // 0x583 Mov
	func_1888(var_146_string); // 0x584 NEW_2
	var_175_string = "all"; // 0x586 PushS
	PlayAnimation(var_175_string, var_145_string); // 0x587 Func
	WaitForAnimEnd(); // 0x589 Func
	var_176_string = "all"; // 0x58b PushS
	LockAnimationEnd(var_176_string, var_145_string); // 0x58c Func
	RemoveEnvelope(); // 0x58e Func
	return 0; // 0x590 Return
}


func_1929(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x789 PushV
	self(var_16_object); // 0x78a Func
	var_14_object = var_16_object; // 0x78c Mov
	return 2; // 0x78d Return
}


func_1935(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x78f PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x790 Or
	var_51_float = sqrt(var_52_int); // 0x791 Sqrt2
	var_53_float = 0.0; // 0x792 PushF
	var_54_bool = var_51_float < var_53_float; // 0x793 LT
	if(var_54_bool == 0) goto Label_1943; // 0x794 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x795 MovV
	return 2; // 0x796 Return
	
Label_1943:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x797 Div2
	return 2; // 0x798 Return
}


func_1431(var_58_bool, var_59_object, var_81_bool, var_686_object)
{
	var_60_float = 0; var_61_float = 0; // 0x597 PushV
	var_62_bool = 0; var_63_object = Obj(); // 0x598 PushV
	var_63_object = var_59_object; // 0x599 Mov
	func_1681(var_62_bool, var_63_object); // 0x59a NEW_2
	var_64_bool = var_62_bool == 0; // 0x59c Not
	if(var_64_bool == 0) goto Label_1440; // 0x59d JumpB
	var_58_bool = 0; // 0x59e MovB
	return 2; // 0x59f Return
	
Label_1440:
	var_65_float = 0; var_66_object = Obj(); // 0x5a0 PushV
	var_66_object = var_59_object; // 0x5a1 Mov
	func_1489(var_66_object); // 0x5a2 NEW_2
	var_61_float = var_65_float; // 0x5a3 Mov
	var_73_bool = 0; var_74_float = 0; var_75_float = 0; var_76_float = 0; // 0x5a5 PushV
	var_74_float = var_61_float; // 0x5a6 Mov
	var_75_float = 250000.0; // 0x5a7 MovF
	var_76_float = 3240000.0; // 0x5a8 MovF
	func_1987(var_73_bool, var_74_float, var_75_float, var_76_float); // 0x5a9 NEW_2
	if(var_73_bool == 0) goto Label_1460; // 0x5ab JumpB
	var_79_bool = 0; var_80_object = Obj(); // 0x5ac PushV
	var_80_object = var_59_object; // 0x5ad Mov
	TaskCall(0); // 0x5ae TaskCall
	func_0(var_61_float, var_81_bool, var_79_bool, var_80_object); // 0x5af NEW_2
	TaskReturn(); // 0x5b0 TaskReturn
	var_58_bool = var_81_bool; // 0x5b1 Mov
	return 2; // 0x5b3 Return
	
Label_1460:
	var_684_bool = 0; var_685_object = Obj(); // 0x5b4 PushV
	var_685_object = var_59_object; // 0x5b5 Mov
	TaskCall(1); // 0x5b6 TaskCall
	func_126(var_684_bool, var_685_object); // 0x5b7 NEW_2
	TaskReturn(); // 0x5b8 TaskReturn
	var_58_bool = var_686_object; // 0x5b9 Mov
	return 2; // 0x5bb Return
}


func_1945(var_572_float, var_573_float, var_574_float)
{
	var_577_bool = var_573_float < var_574_float; // 0x79a LT
	if(var_577_bool == 0) goto Label_1950; // 0x79b JumpB
	var_572_float = var_573_float; // 0x79c Mov
	goto Label_1951; // 0x79d Jump
	
Label_1951:
	return 0; // 0x79f Return
	
Label_1950:
	var_572_float = var_574_float; // 0x79e Mov
}


func_1952(var_159_float, var_160_float, var_161_float, var_162_float)
{
	var_163_float = var_161_float * var_161_float; // 0x7a1 Mult
	var_164_int = 4; // 0x7a2 PushI
	var_165_float = var_164_int * var_160_float; // 0x7a3 Mult
	var_166_float = var_165_float * var_162_float; // 0x7a4 Mult
	var_159_float = var_163_float - var_166_float; // 0x7a5 Sub2
	return 0; // 0x7a6 Return
}


func_1959(var_173_float, var_174_float, var_175_float, var_177_float)
{
	var_178_float = 0; var_179_float = 0; // 0x7a7 PushV
	var_180_int = -var_175_float; // 0x7a8 Neg
	var_181_int = var_180_int - var_177_float; // 0x7a9 Sub
	var_182_int = 2; // 0x7aa PushI
	var_183_float = var_182_int * var_174_float; // 0x7ab Mult
	var_179_float = var_181_int / var_181_int; // 0x7ac Div2
	var_184_int = 0; // 0x7ad PushI
	var_185_bool = var_179_float > var_184_int; // 0x7ae GT
	if(var_185_bool == 0) goto Label_1970; // 0x7af JumpB
	var_173_float = var_179_float; // 0x7b0 Mov
	return 2; // 0x7b1 Return
	
Label_1970:
	var_186_int = -var_175_float; // 0x7b2 Neg
	var_187_int = var_186_int + var_177_float; // 0x7b3 Add
	var_188_int = 2; // 0x7b4 PushI
	var_189_float = var_188_int * var_174_float; // 0x7b5 Mult
	var_173_float = var_187_int / var_187_int; // 0x7b6 Div2
	return 2; // 0x7b7 Return
}


func_432(var_1_object, var_2_int, var_4_bool)
{
	var_229_bool = 0; var_230_bool = 0; var_231_cvector = CVector(0,0,0); var_232_bool = 0; var_233_bool = 0; var_234_cvector = CVector(0,0,0); // 0x1b0 PushV
	var_1_object = 0; // 0x1b1 TMovI
	
Label_434:
	var_235_string = "all"; // 0x1b2 PushS
	var_236_string = "attack_begin"; // 0x1b3 PushS
	var_237_int = 1; // 0x1b4 PushI
	var_238_int = var_1_object + var_237_int; // 0x1b5 Add
	var_239_int = var_236_string + var_238_int; // 0x1b6 Add
	HasAnimation(var_232_bool, var_235_string, var_239_int); // 0x1b7 Func
	var_240_bool = var_232_bool == 0; // 0x1b9 Not
	if(var_240_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_447; // 0x1bb Jump
	
Label_447:
	var_2_int = 0; // 0x1bf TMovI
	
Label_448:
	var_241_string = "attack"; // 0x1c0 PushS
	var_242_int = 1; // 0x1c1 PushI
	var_243_int = var_2_int + var_242_int; // 0x1c2 Add
	var_244_int = var_241_string + var_243_int; // 0x1c3 Add
	IsExisting3DSound(var_233_bool, var_244_int); // 0x1c4 Func
	var_245_bool = var_233_bool == 0; // 0x1c6 Not
	if(var_245_bool == 0) goto Label_457; // 0x1c7 JumpB
	goto Label_460; // 0x1c8 Jump
	
Label_460:
	var_246_string = "all"; // 0x1cc PushS
	var_247_string = "bjump"; // 0x1cd PushS
	GetAnimationOffset(var_234_cvector, var_246_string, var_247_string); // 0x1ce Func
	var_248_float = GetByIndex(var_234_cvector, 2); // 0x1d0 PushE
	var_4_bool = -var_248_float; // 0x1d1 Neg2
	return 6; // 0x1d2 Return
	
Label_457:
	var_249_int = 1; // 0x1c9 PushI
	var_2_int = var_2_int + var_249_int; // 0x1ca Add2
	goto Label_448; // 0x1cb Jump
	
Label_444:
	var_250_int = 1; // 0x1bc PushI
	var_1_object = var_1_object + var_250_int; // 0x1bd Add2
	goto Label_434; // 0x1be Jump
}


func_950(var_2_int)
{
	var_11_int = 1; // 0x3b6 PushI
	KillTimer(var_11_int); // 0x3b7 Func
	var_12_int = var_2_int; // 0x3b9 PushT
	if(var_12_int == 0) goto Label_959; // 0x3ba JumpB
	var_2_int = 0; // 0x3bb TMovB
	var_13_string = "head"; // 0x3bc PushS
	UnlookAsync(var_13_string); // 0x3bd Func
	
Label_959:
	func_1116(var_10_object); // 0x3c0 NEW_2
	return 0; // 0x3c2 Return
}


func_1976(var_50_float, var_51_float, var_52_float, var_53_float)
{
	var_54_bool = var_51_float < var_52_float; // 0x7b9 LT
	if(var_54_bool == 0) goto Label_1981; // 0x7ba JumpB
	var_50_float = var_52_float; // 0x7bb Mov
	return 0; // 0x7bc Return
	
Label_1981:
	var_55_bool = var_51_float > var_53_float; // 0x7bd GT
	if(var_55_bool == 0) goto Label_1985; // 0x7be JumpB
	var_50_float = var_53_float; // 0x7bf Mov
	return 0; // 0x7c0 Return
	
Label_1985:
	var_50_float = var_51_float; // 0x7c1 Mov
	return 0; // 0x7c2 Return
}


func_1468(var_562_string, var_563_int)
{
	var_564_int = 2; // 0x5bd PushI
	var_565_bool = var_563_int == var_564_int; // 0x5be Eq
	if(var_565_bool == 0) goto Label_1475; // 0x5bf JumpB
	var_562_string = "fire"; // 0x5c0 MovS
	return 0; // 0x5c1 Return
	
Label_1475:
	var_566_int = 1; // 0x5c3 PushI
	var_567_bool = var_563_int == var_566_int; // 0x5c4 Eq
	if(var_567_bool == 0) goto Label_1480; // 0x5c5 JumpB
	var_562_string = "bullet"; // 0x5c6 MovS
	return 0; // 0x5c7 Return
	
Label_1480:
	var_562_string = "phys"; // 0x5c8 MovS
	return 0; // 0x5c9 Return
}


func_1987(var_73_bool, var_74_float, var_75_float, var_76_float)
{
	var_73_bool = 0; // 0x7c4 MovB
	var_77_bool = var_74_float >= var_75_float; // 0x7c5 GE
	if(var_77_bool == 0) goto Label_1994; // 0x7c6 JumpB
	var_78_bool = var_74_float <= var_76_float; // 0x7c7 LE
	if(var_78_bool == 0) goto Label_1994; // 0x7c8 JumpB
	var_73_bool = 1; // 0x7c9 MovB
	
Label_1994:
	return 0; // 0x7ca Return
}


func_1482(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x5ca PushV
	GetPosition(var_48_cvector); // 0x5cb Func
	GetPosition(var_49_cvector); // 0x5cd ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x5cf Sub2
	return 4; // 0x5d0 Return
}


func_1995(var_89_bool, var_90_int, var_91_int)
{
	var_92_int = 0; var_93_int = 0; // 0x7cb PushV
	irand(var_93_int, var_91_int); // 0x7cc Func
	var_89_bool = var_93_int < var_90_int; // 0x7ce LT2
	return 2; // 0x7cf Return
}


func_2000(var_21_bool, var_22_object, var_23_float)
{
	var_24_bool = var_22_object == 0; // 0x7d1 Not
	if(var_24_bool == 0) goto Label_2005; // 0x7d2 JumpB
	var_21_bool = 0; // 0x7d3 MovB
	return 0; // 0x7d4 Return
	
Label_2005:
	var_25_int = 0; // 0x7d5 PushI
	var_26_bool = var_23_float > var_25_int; // 0x7d6 GT
	if(var_26_bool == 0) goto Label_2012; // 0x7d7 JumpB
	var_27_int = 8; // 0x7d8 PushI
	SendWorldWndMessage(var_27_int); // 0x7d9 Func
	goto Label_2021; // 0x7db Jump
	
Label_2021:
	var_28_float = 0; // 0x7e5 PushV
	var_28_float = var_23_float; // 0x7e6 Mov
	func_2052(var_28_float); // 0x7e7 NEW_2
	var_32_bool = 0; var_33_object = Obj(); var_34_string = ""; var_35_float = 0; var_36_float = 0; var_37_float = 0; // 0x7e9 PushV
	var_33_object = var_22_object; // 0x7ea Mov
	var_34_string = "reputation"; // 0x7eb MovS
	var_35_float = var_23_float; // 0x7ec Mov
	var_36_float = 0; // 0x7ed MovI
	var_37_float = 1; // 0x7ee MovI
	func_1514(var_32_bool, var_33_object, var_34_string, var_35_float, var_36_float, var_37_float); // 0x7ef NEW_2
	var_21_bool = 1; // 0x7f1 MovB
	return 0; // 0x7f2 Return
	
Label_2012:
	var_56_int = 0; // 0x7dc PushI
	var_57_bool = var_23_float < var_56_int; // 0x7dd LT
	if(var_57_bool == 0) goto Label_2019; // 0x7de JumpB
	var_58_int = 9; // 0x7df PushI
	SendWorldWndMessage(var_58_int); // 0x7e0 Func
	goto Label_2021; // 0x7e2 Jump
	
Label_2019:
	var_21_bool = 0; // 0x7e3 MovB
	return 0; // 0x7e4 Return
}


func_1489(var_65_float)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x5d1 PushV
	GetPosition(var_70_cvector); // 0x5d2 Func
	GetPosition(var_71_cvector); // 0x5d4 ObjFunc
	var_72_cvector = var_71_cvector - var_70_cvector; // 0x5d6 Sub2
	var_65_float = var_72_cvector | var_72_cvector; // 0x5d7 Or2
	return 6; // 0x5d8 Return
}


func_467(var_0_bool, var_520_float, var_521_int)
{
	var_522_object = Obj(); var_523_float = 0; var_524_float = 0; var_525_object = Obj(); var_526_float = 0; var_527_float = 0; // 0x1d3 PushV
	var_528_float = 0.9; // 0x1d4 PushF
	var_529_float = var_520_float * var_528_float; // 0x1d5 Mult
	GetVictim(var_529_float, var_525_object); // 0x1d6 Func
	ReportAttack(var_0_bool); // 0x1d8 Func
	var_530_bool = var_525_object == var_0_bool; // 0x1da Eq
	if(var_530_bool == 0) goto Label_504; // 0x1db JumpB
	var_531_float = 0; var_532_object = Obj(); var_533_int = 0; // 0x1dc PushV
	var_532_object = var_525_object; // 0x1dd Mov
	var_533_int = var_521_int; // 0x1de Mov
	func_154(var_533_int); // 0x1df NEW_2
	var_526_float = var_531_float; // 0x1e0 Mov
	var_534_float = 0; var_535_object = Obj(); var_536_float = 0; var_537_int = 0; // 0x1e2 PushV
	var_535_object = var_525_object; // 0x1e3 Mov
	var_536_float = var_526_float; // 0x1e4 Mov
	var_538_int = 0; var_539_object = Obj(); var_540_int = 0; // 0x1e5 PushV
	var_539_object = var_525_object; // 0x1e6 Mov
	var_540_int = var_521_int; // 0x1e7 Mov
	func_157(var_540_int); // 0x1e8 NEW_2
	var_537_int = var_538_int; // 0x1e9 Mov
	func_1536(var_534_float, var_535_object, var_536_float, var_537_int); // 0x1eb NEW_2
	var_527_float = var_534_float; // 0x1ec Mov
	var_599_int = 0; // 0x1ee PushV
	func_160(var_599_int); // 0x1ef NEW_2
	ReportHit(var_0_bool, var_599_int, var_527_float, var_526_float); // 0x1f1 Func
	var_600_object = Obj(); var_601_float = 0; // 0x1f3 PushV
	var_600_object = var_525_object; // 0x1f4 Mov
	var_601_float = var_527_float; // 0x1f5 Mov
	func_162(var_600_object, var_601_float); // 0x1f6 NEW_2
	
Label_504:
	return 6; // 0x1f8 Return
}


func_1497(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x5d9 PushV
	IsPlayerActor(var_18_object, var_20_bool); // 0x5da Func
	var_17_bool = var_20_bool; // 0x5dc Mov
	return 2; // 0x5dd Return
}


func_1502(var_40_bool, var_41_object, var_42_string)
{
	var_43_bool = 0; var_44_bool = 0; // 0x5de PushV
	var_45_string = "HasProperty"; // 0x5df PushS
	var_46_int = 2; // 0x5e0 PushI
	var_47_bool = IsFuncExist(var_41_object, var_45_string, var_46_int); // 0x5e1 FuncExist
	var_48_bool = var_47_bool == 0; // 0x5e2 Not
	if(var_48_bool == 0) goto Label_1510; // 0x5e3 JumpB
	var_40_bool = 0; // 0x5e4 MovB
	return 2; // 0x5e5 Return
	
Label_1510:
	HasProperty(var_42_string, var_44_bool); // 0x5e6 ObjFunc
	var_40_bool = var_44_bool; // 0x5e8 Mov
	return 2; // 0x5e9 Return
}


func_992(var_0_bool, var_1_object, var_298_bool, var_299_object, var_300_float, var_301_float, var_302_bool, var_303_bool)
{
	var_304_bool = 0; var_305_bool = 0; var_306_object = Obj(); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_float = 0; var_311_object = Obj(); var_312_bool = 0; var_313_bool = 0; var_314_object = Obj(); var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_object = Obj(); // 0x3e0 PushV
	var_0_bool = 0; // 0x3e1 TMovB
	var_1_object = var_299_object; // 0x3e2 TMov
	var_313_bool = var_303_bool; // 0x3e3 Mov
	
Label_996:
	var_320_bool = 0; var_321_object = Obj(); // 0x3e4 PushV
	var_321_object = var_299_object; // 0x3e5 Mov
	func_1132(var_320_bool, var_321_object); // 0x3e6 NEW_2
	var_324_bool = var_320_bool == 0; // 0x3e8 Not
	if(var_324_bool == 0) goto Label_1004; // 0x3e9 JumpB
	var_298_bool = 0; // 0x3ea MovB
	return 16; // 0x3eb Return
	
Label_1004:
	GetPosition(var_315_cvector); // 0x3ec ObjFunc
	GetPosition(var_316_cvector); // 0x3ee Func
	var_317_cvector = var_315_cvector - var_316_cvector; // 0x3f0 Sub2
	var_318_float = var_317_cvector | var_317_cvector; // 0x3f1 Or2
	var_325_bool = 0; // 0x3f2 PushV
	var_325_bool = 0; // 0x3f3 MovB
	var_326_int = 0; // 0x3f4 PushI
	var_327_bool = var_301_float > var_326_int; // 0x3f5 GT
	if(var_327_bool == 0) goto Label_1019; // 0x3f6 JumpB
	var_328_float = var_301_float * var_301_float; // 0x3f7 Mult
	var_329_bool = var_318_float > var_328_float; // 0x3f8 GT
	if(var_329_bool == 0) goto Label_1019; // 0x3f9 JumpB
	var_325_bool = 1; // 0x3fa MovB
	
Label_1019:
	if(var_325_bool == 0) goto Label_1024; // 0x3fb JumpB
	Stop(); // 0x3fc Func
	var_298_bool = 0; // 0x3fe MovB
	return 16; // 0x3ff Return
	
Label_1024:
	var_330_float = var_300_float * var_300_float; // 0x400 Mult
	var_331_bool = var_318_float > var_330_float; // 0x401 GT
	if(var_331_bool == 0) goto Label_1086; // 0x402 JumpB
	GetPFPosition(var_315_cvector); // 0x403 ObjFunc
	FindPathTo(var_319_object, var_315_cvector); // 0x405 Func
	var_332_bool = var_319_object != 0; // 0x407 NullNeq
	if(var_332_bool == 0) goto Label_1035; // 0x408 JumpB
	var_314_object = var_319_object; // 0x409 Mov
	var_319_object = 0; // 0x40a SetNull
	
Label_1035:
	var_333_bool = var_314_object != 0; // 0x40b NullNeq
	if(var_333_bool == 0) goto Label_1068; // 0x40c JumpB
	var_334_bool = var_313_bool; // 0x40d Push
	if(var_334_bool == 0) goto Label_1045; // 0x40e JumpB
	var_313_bool = 0; // 0x40f MovB
	RotatePath(var_314_object, var_312_bool); // 0x410 Func
	var_335_bool = var_312_bool == 0; // 0x412 Not
	if(var_335_bool == 0) goto Label_1045; // 0x413 JumpB
	goto Label_1092; // 0x414 Jump
	
Label_1092:
	var_298_bool = !var_0_bool; // 0x444 Not2
	return 16; // 0x445 Return
	
Label_1045:
	var_336_int = 0; // 0x415 PushI
	var_337_float = 0.3; // 0x416 PushF
	SetTimer(var_336_int, var_337_float); // 0x417 Func
	var_338_string = ""; // 0x419 PushV
	func_1139(var_338_string); // 0x41a NEW_2
	var_339_string = ""; // 0x41c PushV
	func_1141(var_339_string); // 0x41d NEW_2
	FollowPath(var_314_object, var_302_bool, var_312_bool, var_338_string, var_339_string); // 0x41f Func
	var_340_bool = var_312_bool == 0; // 0x421 Not
	if(var_340_bool == 0) goto Label_1066; // 0x422 JumpB
	var_341_bool = var_0_bool; // 0x423 PushT
	if(var_341_bool == 0) goto Label_1064; // 0x424 JumpB
	var_314_object = 0; // 0x425 SetNull
	goto Label_1092; // 0x426 Jump
	
Label_1064:
	goto Label_1091; // 0x428 Jump
	
Label_1091:
	goto Label_996; // 0x443 Jump
	
Label_1066:
	var_314_object = 0; // 0x42a SetNull
	goto Label_1084; // 0x42b Jump
	
Label_1084:
	var_319_object = 0; // 0x43c SetNull
	goto Label_1090; // 0x43d Jump
	
Label_1090:
	var_314_object = 0; // 0x442 SetNull
	
Label_1068:
	var_342_int = 0; // 0x42c PushI
	KillTimer(var_342_int); // 0x42d Func
	var_343_float = 0.5; // 0x42f PushF
	Sleep(var_343_float, var_312_bool); // 0x430 Func
	var_344_bool = var_312_bool == 0; // 0x432 Not
	if(var_344_bool == 0) goto Label_1080; // 0x433 JumpB
	var_345_bool = var_0_bool; // 0x434 PushT
	if(var_345_bool == 0) goto Label_1080; // 0x435 JumpB
	var_314_object = 0; // 0x436 SetNull
	goto Label_1092; // 0x437 Jump
	
Label_1080:
	var_346_int = 0; // 0x438 PushI
	var_347_float = 0.3; // 0x439 PushF
	SetTimer(var_346_int, var_347_float); // 0x43a Func
	
Label_1086:
	var_348_int = 0; // 0x43e PushI
	KillTimer(var_348_int); // 0x43f Func
	goto Label_1092; // 0x441 Jump
}


func_1514(var_32_bool, var_33_object, var_34_string, var_35_float, var_36_float, var_37_float)
{
	var_38_float = 0; var_39_float = 0; // 0x5ea PushV
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; // 0x5eb PushV
	var_41_object = var_33_object; // 0x5ec Mov
	var_42_string = var_34_string; // 0x5ed Mov
	func_1502(var_40_bool, var_41_object, var_42_string); // 0x5ee NEW_2
	var_49_bool = var_40_bool == 0; // 0x5f0 Not
	if(var_49_bool == 0) goto Label_1524; // 0x5f1 JumpB
	var_32_bool = 0; // 0x5f2 MovB
	return 2; // 0x5f3 Return
	
Label_1524:
	GetProperty(var_34_string, var_39_float); // 0x5f4 ObjFunc
	var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; // 0x5f6 PushV
	var_51_float = var_39_float + var_35_float; // 0x5f7 Add2
	var_52_float = var_36_float; // 0x5f8 Mov
	var_53_float = var_37_float; // 0x5f9 Mov
	func_1976(var_50_float, var_51_float, var_52_float, var_53_float); // 0x5fa NEW_2
	SetProperty(var_34_string, var_50_float); // 0x5fc ObjFunc
	var_32_bool = 1; // 0x5fe MovB
	return 2; // 0x5ff Return
}


func_2035(var_590_float)
{
	var_591_object = Obj(); var_592_object = Obj(); // 0x7f3 PushV
	CreateFloatVector(var_592_object); // 0x7f4 Func
	add(var_590_float); // 0x7f6 ObjFunc
	var_593_int = 0; // 0x7f8 PushI
	var_594_bool = var_590_float < var_593_int; // 0x7f9 LT
	if(var_594_bool == 0) goto Label_2047; // 0x7fa JumpB
	var_595_float = 0.7; // 0x7fb PushF
	var_596_int = 500; // 0x7fc PushI
	RumblePlay(var_595_float, var_596_int); // 0x7fd Func
	
Label_2047:
	var_597_int = 15; // 0x7ff PushI
	SendWorldWndMessage(var_597_int, var_592_object); // 0x800 Func
	return 2; // 0x802 Return
}


func_506(var_0_bool, var_487_bool, var_488_float)
{
	var_489_int = 0; var_490_bool = 0; var_491_int = 0; var_492_string = ""; var_493_int = 0; var_494_bool = 0; var_495_int = 0; var_496_string = ""; // 0x1fa PushV
	func_847(var_496_string); // 0x1fc NEW_2
	irand(var_493_int, var_496_string); // 0x1fe Func
	var_497_int = 1; // 0x200 PushI
	var_493_int = var_493_int + var_497_int; // 0x201 Add2
	Face(var_0_bool); // 0x202 Func
	var_498_bool = 1; // 0x204 PushB
	SetAttackState(var_498_bool); // 0x205 Func
	func_2071(); // 0x208 NEW_2
	var_499_string = "all"; // 0x20a PushS
	var_500_string = "attack_begin"; // 0x20b PushS
	var_501_int = var_500_string + var_493_int; // 0x20c Add
	PlayAnimation(var_499_string, var_501_int); // 0x20d Func
	WaitForAnimEnd(); // 0x20f Func
	func_815(var_495_int, var_496_string); // 0x212 NEW_2
	var_517_bool = 0; var_518_object = Obj(); // 0x214 PushV
	var_518_object = var_0_bool; // 0x215 MovT
	func_1681(var_517_bool, var_518_object); // 0x216 NEW_2
	var_519_bool = var_517_bool == 0; // 0x218 Not
	if(var_519_bool == 0) goto Label_542; // 0x219 JumpB
	StopAsync(); // 0x21a Func
	var_487_bool = 0; // 0x21c MovB
	return 8; // 0x21d Return
	
Label_542:
	var_520_float = 0; var_521_int = 0; // 0x21e PushV
	var_520_float = var_488_float; // 0x21f Mov
	var_521_int = var_493_int; // 0x220 Mov
	func_467(var_496_string, var_520_float, var_521_int); // 0x221 NEW_2
	var_623_string = "all"; // 0x223 PushS
	var_624_string = "attack_middle"; // 0x224 PushS
	var_625_int = var_624_string + var_493_int; // 0x225 Add
	HasAnimation(var_494_bool, var_623_string, var_625_int); // 0x226 Func
	var_626_bool = var_494_bool; // 0x228 Push
	if(var_626_bool == 0) goto Label_623; // 0x229 JumpB
	func_2071(); // 0x22b NEW_2
	var_627_string = "all"; // 0x22d PushS
	var_628_string = "attack_middle"; // 0x22e PushS
	var_629_int = var_628_string + var_493_int; // 0x22f Add
	PlayAnimation(var_627_string, var_629_int); // 0x230 Func
	WaitForAnimEnd(); // 0x232 Func
	func_847(var_496_string); // 0x235 NEW_2
	var_630_bool = 0; var_631_object = Obj(); // 0x237 PushV
	var_631_object = var_0_bool; // 0x238 MovT
	func_1681(var_630_bool, var_631_object); // 0x239 NEW_2
	var_632_bool = var_630_bool == 0; // 0x23b Not
	if(var_632_bool == 0) goto Label_577; // 0x23c JumpB
	StopAsync(); // 0x23d Func
	var_487_bool = 0; // 0x23f MovB
	return 8; // 0x240 Return
	
Label_577:
	var_633_float = 0; var_634_int = 0; // 0x241 PushV
	var_633_float = var_488_float; // 0x242 Mov
	var_634_int = var_493_int; // 0x243 Mov
	func_467(var_496_string, var_633_float, var_634_int); // 0x244 NEW_2
	var_495_int = 1; // 0x246 MovI
	
Label_583:
	var_635_string = "attack_middle"; // 0x247 PushS
	var_636_int = var_635_string + var_493_int; // 0x248 Add
	var_637_string = "_"; // 0x249 PushS
	var_638_int = var_636_int + var_637_string; // 0x24a Add
	var_496_string = var_638_int + var_495_int; // 0x24b Add2
	var_639_string = "all"; // 0x24c PushS
	HasAnimation(var_494_bool, var_639_string, var_496_string); // 0x24d Func
	var_640_bool = var_494_bool == 0; // 0x24f Not
	if(var_640_bool == 0) goto Label_594; // 0x250 JumpB
	goto Label_623; // 0x251 Jump
	
Label_623:
	var_641_bool = 0; // 0x26f PushB
	SetAttackState(var_641_bool); // 0x270 Func
	var_642_string = "all"; // 0x272 PushS
	var_643_string = "attack_end"; // 0x273 PushS
	var_644_int = var_643_string + var_493_int; // 0x274 Add
	PlayAnimation(var_642_string, var_644_int); // 0x275 Func
	var_645_bool = 0; // 0x277 PushV
	func_857(var_645_bool); // 0x278 NEW_2
	if(var_645_bool == 0) goto Label_641; // 0x27a JumpB
	var_646_bool = 0; var_647_float = 0; // 0x27b PushV
	var_647_float = 0.45; // 0x27c MovF
	func_645(var_646_bool, var_647_float); // 0x27d NEW_2
	StopAsync(); // 0x27f Func
	
Label_641:
	var_487_bool = 1; // 0x281 MovB
	return 8; // 0x282 Return
	
Label_594:
	func_2071(); // 0x253 NEW_2
	var_655_string = "all"; // 0x255 PushS
	PlayAnimation(var_655_string, var_496_string); // 0x256 Func
	WaitForAnimEnd(); // 0x258 Func
	func_847(var_496_string); // 0x25b NEW_2
	var_656_bool = 0; var_657_object = Obj(); // 0x25d PushV
	var_657_object = var_0_bool; // 0x25e MovT
	func_1681(var_656_bool, var_657_object); // 0x25f NEW_2
	var_658_bool = var_656_bool == 0; // 0x261 Not
	if(var_658_bool == 0) goto Label_615; // 0x262 JumpB
	StopAsync(); // 0x263 Func
	var_487_bool = 0; // 0x265 MovB
	return 8; // 0x266 Return
	
Label_615:
	var_659_float = 0; var_660_int = 0; // 0x267 PushV
	var_659_float = var_488_float; // 0x268 Mov
	var_660_int = var_493_int; // 0x269 Mov
	func_467(var_496_string, var_659_float, var_660_int); // 0x26a NEW_2
	var_661_int = 1; // 0x26c PushI
	var_495_int = var_495_int + var_661_int; // 0x26d Add2
	goto Label_583; // 0x26e Jump
}


