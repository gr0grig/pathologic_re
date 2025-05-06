	task_0_event_17(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_14_object)
	{
	var_15_bool = 0; var_16_object = Obj(); // 0x9 PushV
	var_16_object = var_14_object; // 0xa Mov
	func_2157(var_15_bool, var_16_object); // 0xb NEW_2
	if(var_15_bool == 0) goto Label_21; // 0xd JumpB
	func_123(); // 0xf NEW_2
	var_51_object = Obj(); // 0x11 PushV
	var_51_object = var_14_object; // 0x12 Mov
	func_2164(var_51_object); // 0x13 NEW_2
	
Label_21:
	return 0; // 0x15 Return
	}


task_0_event_1(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x16 PushV
	IsPlayerActor(var_10_bool, var_12_bool); // 0x17 Func
	var_13_bool = var_12_bool; // 0x19 Push
	if(var_13_bool == 0) goto Label_31; // 0x1a JumpB
	var_14_object = Obj(); // 0x1b PushV
	var_14_object = var_10_bool; // 0x1c Mov
	func_8(); // 0x1d NEW_2
	
Label_31:
	return 2; // 0x1f Return
}


task_0_event_3(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x20 PushV
	IsPlayerActor(var_10_bool, var_12_bool); // 0x21 Func
	var_13_bool = var_12_bool; // 0x23 Push
	if(var_13_bool == 0) goto Label_41; // 0x24 JumpB
	var_14_object = Obj(); // 0x25 PushV
	var_14_object = var_10_bool; // 0x26 Mov
	func_8(); // 0x27 NEW_2
	
Label_41:
	return 2; // 0x29 Return
}


task_1_event_0(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x9f PushV
	IsOverrideActive(var_12_bool); // 0xa0 Func
	var_13_bool = var_12_bool == 0; // 0xa2 Not
	if(var_13_bool == 0) goto Label_168; // 0xa3 JumpB
	var_14_object = Obj(); // 0xa4 PushV
	var_14_object = var_10_bool; // 0xa5 Mov
	func_2176(var_14_object); // 0xa6 NEW_2
	
Label_168:
	return 2; // 0xa8 Return
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	return 0; // 0x11f Return
}


task_1_event_16(var_0_object, var_1_string, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	return 0; // 0x121 Return
}


task_1_event_41(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	return 0; // 0x123 Return
}


task_3_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x1b5 PushV
	var_11_object = var_10_bool; // 0x1b6 Mov
	func_2240(); // 0x1b7 NEW_2
	return 0; // 0x1b9 Return
}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x1bb PushV
	var_14_object = var_10_bool; // 0x1bc Mov
	var_15_object = var_11_object; // 0x1bd Mov
	func_2242(var_15_object); // 0x1be NEW_2
	return 0; // 0x1c0 Return
}


task_3_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0x1c2 PushS
	var_12_bool = var_10_bool == var_11_string; // 0x1c3 Eq
	if(var_12_bool == 0) goto Label_454; // 0x1c4 JumpB
	var_0_bool = 1; // 0x1c5 TMovB
	
Label_454:
	return 0; // 0x1c6 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x200 PushV
	var_11_object = var_10_bool; // 0x201 Mov
	func_2240(); // 0x202 NEW_2
	return 0; // 0x204 Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x206 PushV
	var_14_object = var_10_bool; // 0x207 Mov
	var_15_object = var_11_object; // 0x208 Mov
	func_2242(var_15_object); // 0x209 NEW_2
	return 0; // 0x20b Return
}


task_4_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0x20d PushS
	var_12_bool = var_10_bool == var_11_string; // 0x20e Eq
	if(var_12_bool == 0) goto Label_531; // 0x20f JumpB
	var_13_bool = GlobalVars[0]; // 0x210 PushGE
	var_13_bool = 1; // 0x211 MovB
	GlobalVars[0] = var_13_bool; // 0x212 PopGE
	
Label_531:
	return 0; // 0x213 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x4a9 PushV
	var_11_object = var_10_object; // 0x4aa Mov
	func_2240(); // 0x4ab NEW_2
	return 0; // 0x4ad Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x4af PushV
	var_14_object = var_10_object; // 0x4b0 Mov
	var_15_object = var_11_object; // 0x4b1 Mov
	func_2242(var_15_object); // 0x4b2 NEW_2
	return 0; // 0x4b4 Return
}


task_5_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_11_string = "kill"; // 0x4b6 PushS
	var_12_bool = var_10_string == var_11_string; // 0x4b7 Eq
	if(var_12_bool == 0) goto Label_1215; // 0x4b8 JumpB
	var_13_bool = GlobalVars[0]; // 0x4b9 PushGE
	var_13_bool = 1; // 0x4ba MovB
	GlobalVars[0] = var_13_bool; // 0x4bb PopGE
	func_1279(var_10_string); // 0x4bd NEW_2
	
Label_1215:
	return 0; // 0x4bf Return
}


task_5_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_11_int = 1; // 0x4f2 PushI
	var_12_bool = var_10_int == var_11_int; // 0x4f3 Eq
	if(var_12_bool == 0) goto Label_1274; // 0x4f4 JumpB
	var_13_object = Obj(); // 0x4f5 PushV
	var_13_object = var_1_object; // 0x4f6 MovT
	func_2062(var_13_object); // 0x4f7 NEW_2
	goto Label_1278; // 0x4f9 Jump
	
Label_1278:
	return 0; // 0x4fe Return
	
Label_1274:
	var_18_int = 0; // 0x4fa PushV
	var_18_int = var_10_int; // 0x4fb Mov
	func_1423(var_9_bool, var_10_int, var_18_int); // 0x4fc NEW_2
}


task_5_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x50d PushV
	var_11_bool = 0; // 0x50e MovB
	var_12_bool = var_1_object == var_10_object; // 0x50f Eq
	if(var_12_bool == 0) goto Label_1300; // 0x510 JumpB
	var_13_bool = var_2_int == 0; // 0x511 Not
	if(var_13_bool == 0) goto Label_1300; // 0x512 JumpB
	var_11_bool = 1; // 0x513 MovB
	
Label_1300:
	if(var_11_bool == 0) goto Label_1306; // 0x514 JumpB
	var_2_int = 1; // 0x515 TMovB
	var_14_object = Obj(); // 0x516 PushV
	var_14_object = var_10_object; // 0x517 Mov
	func_1882(var_14_object); // 0x518 NEW_2
	
Label_1306:
	return 0; // 0x51a Return
}


task_5_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x51c PushV
	var_11_bool = 0; // 0x51d MovB
	var_12_bool = var_1_object == var_10_object; // 0x51e Eq
	if(var_12_bool == 0) goto Label_1315; // 0x51f JumpB
	var_13_int = var_2_int; // 0x520 PushT
	if(var_13_int == 0) goto Label_1315; // 0x521 JumpB
	var_11_bool = 1; // 0x522 MovB
	
Label_1315:
	if(var_11_bool == 0) goto Label_1320; // 0x523 JumpB
	var_2_int = 0; // 0x524 TMovB
	var_14_string = "head"; // 0x525 PushS
	UnlookAsync(var_14_string); // 0x526 Func
	
Label_1320:
	return 0; // 0x528 Return
}


task_5_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object); // 0x5a2 Func
	return 0; // 0x5a4 Return
}


task_5_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_1279(var_10_object); // 0x5ae NEW_2
	var_15_object = Obj(); // 0x5b0 PushV
	var_15_object = var_10_object; // 0x5b1 Mov
	func_2151(); // 0x5b2 NEW_2
	return 0; // 0x5b4 Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x849 PushV
	var_14_object = var_10_object; // 0x84a Mov
	var_15_int = var_11_int; // 0x84b Mov
	var_16_float = var_12_float; // 0x84c Mov
	func_1784(var_14_object, var_15_int, var_16_float); // 0x84d NEW_2
	return 0; // 0x84f Return
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x851 PushV
	var_16_object = var_10_object; // 0x852 Mov
	var_17_int = var_11_int; // 0x853 Mov
	var_18_float = var_12_float; // 0x854 Mov
	var_19_cvector = var_14_cvector; // 0x855 Mov
	var_20_cvector = var_15_cvector; // 0x856 Mov
	func_1852(var_18_float, var_19_cvector, var_20_cvector); // 0x857 NEW_2
	return 0; // 0x859 Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x85a PushV
	var_14_string = "health"; // 0x85b PushS
	var_15_bool = var_11_string == var_14_string; // 0x85c Eq
	if(var_15_bool == 0) goto Label_2150; // 0x85d JumpB
	var_16_string = "health"; // 0x85e PushS
	GetProperty(var_16_string, var_13_float); // 0x85f Func
	var_17_int = 0; // 0x861 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x862 LE
	if(var_18_bool == 0) goto Label_2150; // 0x863 JumpB
	SignalDeath(var_10_object); // 0x864 Func
	
Label_2150:
	return 2; // 0x866 Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x868 PushV
	var_11_object = var_10_object; // 0x869 Mov
	func_2112(var_11_object); // 0x86a NEW_2
	return 0; // 0x86c Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	
Label_0:
	var_10_int = 3; // 0x0 PushI
	Sleep(var_10_int); // 0x1 Func
	func_42(); // 0x4 NEW_2
	goto Label_0; // 0x6 Jump
}


func_2052(var_24_float)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x804 PushV
	CreateFloatVector(var_26_object); // 0x805 Func
	add(var_24_float); // 0x807 ObjFunc
	var_27_int = 16; // 0x809 PushI
	SendWorldWndMessage(var_27_int, var_26_object); // 0x80a Func
	return 2; // 0x80c Return
}


func_2062(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x80e PushV
	IsPlayerActor(var_13_object, var_15_bool); // 0x80f Func
	var_16_bool = var_15_bool; // 0x811 Push
	if(var_16_bool == 0) goto Label_2070; // 0x812 JumpB
	var_17_string = "attack"; // 0x813 PushS
	PlayGlobalMusic(var_17_string); // 0x814 Func
	
Label_2070:
	return 2; // 0x816 Return
}


func_1552(var_535_float, var_536_object, var_537_float, var_538_int)
{
	var_542_int = 0; var_543_string = ""; var_544_int = 0; var_545_float = 0; var_546_float = 0; var_547_float = 0; var_548_int = 0; var_549_string = ""; var_550_int = 0; var_551_float = 0; var_552_float = 0; var_553_float = 0; // 0x610 PushV
	var_554_bool = 0; var_555_object = Obj(); var_556_string = ""; // 0x611 PushV
	var_555_object = var_536_object; // 0x612 Mov
	var_556_string = "health"; // 0x613 MovS
	func_1518(var_554_bool, var_555_object, var_556_string); // 0x614 NEW_2
	var_557_bool = var_554_bool == 0; // 0x616 Not
	if(var_557_bool == 0) goto Label_1562; // 0x617 JumpB
	var_535_float = 0.0; // 0x618 MovF
	return 12; // 0x619 Return
	
Label_1562:
	var_558_bool = 0; var_559_object = Obj(); var_560_string = ""; // 0x61a PushV
	var_559_object = var_536_object; // 0x61b Mov
	var_560_string = "armor"; // 0x61c MovS
	func_1518(var_558_bool, var_559_object, var_560_string); // 0x61d NEW_2
	var_561_bool = var_558_bool == 0; // 0x61f Not
	if(var_561_bool == 0) goto Label_1571; // 0x620 JumpB
	var_548_int = 0; // 0x621 MovI
	goto Label_1574; // 0x622 Jump
	
Label_1574:
	var_562_string = "armor_"; // 0x626 PushS
	var_563_string = ""; var_564_int = 0; // 0x627 PushV
	var_564_int = var_538_int; // 0x628 Mov
	func_1484(var_563_string, var_564_int); // 0x629 NEW_2
	var_549_string = var_562_string + var_563_string; // 0x62b Add2
	var_569_bool = 0; var_570_object = Obj(); var_571_string = ""; // 0x62c PushV
	var_570_object = var_536_object; // 0x62d Mov
	var_571_string = var_549_string; // 0x62e Mov
	func_1518(var_569_bool, var_570_object, var_571_string); // 0x62f NEW_2
	var_572_bool = var_569_bool == 0; // 0x631 Not
	if(var_572_bool == 0) goto Label_1589; // 0x632 JumpB
	var_550_int = 0; // 0x633 MovI
	goto Label_1591; // 0x634 Jump
	
Label_1591:
	var_573_float = 0; var_574_float = 0; var_575_float = 0; // 0x637 PushV
	var_576_int = var_548_int + var_550_int; // 0x638 Add
	var_577_float = 100.0; // 0x639 PushF
	var_574_float = var_576_int / var_576_int; // 0x63a Div2
	var_575_float = 1; // 0x63b MovI
	func_1950(var_573_float, var_574_float, var_575_float); // 0x63c NEW_2
	var_551_float = var_573_float; // 0x63d Mov
	var_579_string = "health"; // 0x63f PushS
	GetProperty(var_579_string, var_552_float); // 0x640 ObjFunc
	var_580_int = 1; // 0x642 PushI
	var_581_int = var_580_int - var_551_float; // 0x643 Sub
	var_553_float = var_537_float * var_581_int; // 0x644 Mult2
	var_582_string = "health"; // 0x645 PushS
	var_583_float = 0; var_584_float = 0; var_585_float = 0; var_586_float = 0; // 0x646 PushV
	var_584_float = var_552_float - var_553_float; // 0x647 Sub2
	var_585_float = 0; // 0x648 MovI
	var_586_float = 1; // 0x649 MovI
	func_1981(var_583_float, var_584_float, var_585_float, var_586_float); // 0x64a NEW_2
	SetProperty(var_582_string, var_583_float); // 0x64c ObjFunc
	var_589_bool = 0; var_590_object = Obj(); // 0x64e PushV
	var_590_object = var_536_object; // 0x64f Mov
	func_1513(var_589_bool, var_590_object); // 0x650 NEW_2
	if(var_589_bool == 0) goto Label_1623; // 0x652 JumpB
	var_591_float = 0; // 0x653 PushV
	var_591_float = -var_553_float; // 0x654 Neg2
	func_2035(var_591_float); // 0x655 NEW_2
	
Label_1623:
	var_535_float = var_553_float; // 0x657 Mov
	return 12; // 0x658 Return
	
Label_1589:
	GetProperty(var_549_string, var_550_int); // 0x635 ObjFunc
	
Label_1571:
	var_599_string = "armor"; // 0x623 PushS
	GetProperty(var_599_string, var_548_int); // 0x624 ObjFunc
}


func_1044(var_0_object, var_442_bool)
{
	var_443_cvector = CVector(0,0,0); var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0); var_446_float = 0; var_447_float = 0; var_448_cvector = CVector(0,0,0); var_449_cvector = CVector(0,0,0); var_450_cvector = CVector(0,0,0); var_451_float = 0; var_452_float = 0; // 0x414 PushV
	var_453_bool = 0; var_454_object = Obj(); // 0x415 PushV
	var_454_object = var_0_object; // 0x416 MovT
	func_1697(var_453_bool, var_454_object); // 0x417 NEW_2
	var_455_bool = var_453_bool == 0; // 0x419 Not
	if(var_455_bool == 0) goto Label_1053; // 0x41a JumpB
	var_442_bool = 0; // 0x41b MovB
	return 10; // 0x41c Return
	
Label_1053:
	var_456_bool = 0; // 0x41d PushV
	func_1133(var_452_float, var_456_bool); // 0x41e NEW_2
	if(var_456_bool == 0) goto Label_1070; // 0x420 JumpB
	GetPFPosition(var_448_cvector); // 0x421 TObjFunc
	GetPFPosition(var_449_cvector); // 0x423 Func
	var_450_cvector = var_448_cvector - var_449_cvector; // 0x425 Sub2
	var_451_float = var_450_cvector | var_450_cvector; // 0x426 Or2
	GetAttackDistance(var_452_float); // 0x427 TObjFunc
	var_457_int = 50; // 0x429 PushI
	var_452_float = var_452_float + var_457_int; // 0x42a Add2
	var_458_float = var_452_float * var_452_float; // 0x42b Mult
	var_442_bool = var_451_float <= var_458_float; // 0x42c LE2
	return 10; // 0x42d Return
	
Label_1070:
	var_442_bool = 0; // 0x42e MovB
	return 10; // 0x42f Return
}


func_532(var_0_object, var_3_int, var_5_bool, var_205_object, var_206_bool, var_207_float, var_276_bool, var_368_bool)
{
	var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_bool = 0; var_212_bool = 0; var_213_float = 0; var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_float = 0; var_219_float = 0; var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_bool = 0; var_223_bool = 0; var_224_float = 0; var_225_cvector = CVector(0,0,0); var_226_float = 0; var_227_cvector = CVector(0,0,0); var_228_bool = 0; var_229_float = 0; // 0x214 PushV
	func_761(var_227_cvector, var_228_bool, var_229_float); // 0x216 NEW_2
	var_5_bool = 0; // 0x218 TMovI
	var_252_string = "@GetAttackDistance"; // 0x219 PushS
	var_253_int = 1; // 0x21a PushI
	var_254_bool = IsFuncExist(var_205_object, var_252_string, var_253_int); // 0x21b FuncExist
	if(var_254_bool == 0) goto Label_546; // 0x21c JumpB
	GetAttackDistance(var_219_float); // 0x21d ObjFunc
	var_255_int = 50; // 0x21f PushI
	var_219_float = var_219_float + var_255_int; // 0x220 Add2
	goto Label_547; // 0x221 Jump
	
Label_547:
	var_256_int = 150; // 0x223 PushI
	var_257_bool = var_219_float >= var_256_int; // 0x224 GE
	if(var_257_bool == 0) goto Label_551; // 0x225 JumpB
	var_219_float = 150; // 0x226 MovI
	
Label_551:
	var_3_int = 0; // 0x227 TMovB
	var_0_object = var_205_object; // 0x228 TMov
	IsPlayerActor(var_0_object, var_222_bool); // 0x229 Func
	var_258_bool = var_222_bool; // 0x22b Push
	if(var_258_bool == 0) goto Label_565; // 0x22c JumpB
	var_259_string = "attack"; // 0x22d PushS
	PlayGlobalMusic(var_259_string); // 0x22e Func
	var_260_object = Obj(); // 0x230 PushV
	func_1934(var_260_object); // 0x231 NEW_2
	SendPlayerEnemy(var_205_object, var_260_object); // 0x233 Func
	
Label_565:
	var_261_bool = var_206_bool; // 0x235 Push
	if(var_261_bool == 0) goto Label_569; // 0x236 JumpB
	var_223_bool = 0; // 0x237 MovB
	goto Label_570; // 0x238 Jump
	
Label_570:
	var_262_float = 300.0; // 0x23a PushF
	var_224_float = var_262_float + var_219_float; // 0x23b Add2
	
Label_572:
	var_263_bool = 0; // 0x23c PushV
	var_263_bool = 0; // 0x23d MovB
	var_264_bool = 0; var_265_object = Obj(); // 0x23e PushV
	var_265_object = var_0_object; // 0x23f MovT
	func_1697(var_264_bool, var_265_object); // 0x240 NEW_2
	if(var_264_bool == 0) goto Label_582; // 0x242 JumpB
	var_266_bool = var_3_int == 0; // 0x243 Not
	if(var_266_bool == 0) goto Label_582; // 0x244 JumpB
	var_263_bool = 1; // 0x245 MovB
	
Label_582:
	if(var_263_bool == 0) goto Label_744; // 0x246 JumpB
	func_1176(var_229_float); // 0x248 NEW_2
	GetPFPosition(var_220_cvector); // 0x24a TObjFunc
	GetPFPosition(var_221_cvector); // 0x24c Func
	var_225_cvector = var_220_cvector - var_221_cvector; // 0x24e Sub2
	var_226_float = var_225_cvector | var_225_cvector; // 0x24f Or2
	var_268_float = var_224_float * var_224_float; // 0x250 Mult
	var_269_bool = var_226_float >= var_268_float; // 0x251 GE
	if(var_269_bool == 0) goto Label_610; // 0x252 JumpB
	var_270_bool = 0; var_271_object = Obj(); var_272_float = 0; var_273_float = 0; var_274_bool = 0; var_275_bool = 0; // 0x253 PushV
	var_271_object = var_0_object; // 0x254 MovT
	var_272_float = var_219_float; // 0x255 Mov
	var_273_float = 3000.0; // 0x256 MovF
	var_274_bool = 1; // 0x257 MovB
	var_275_bool = 0; // 0x258 MovB
	TaskCall(5); // 0x259 TaskCall
	func_1216(var_278_bool, var_270_bool, var_271_object, var_272_float, var_273_float, var_274_bool, var_275_bool); // 0x25a NEW_2
	TaskReturn(); // 0x25b TaskReturn
	var_353_bool = var_276_bool == 0; // 0x25d Not
	if(var_353_bool == 0) goto Label_608; // 0x25e JumpB
	goto Label_744; // 0x25f Jump
	
Label_744:
	WaitForAnimEnd(); // 0x2e8 Func
	var_354_int = var_3_int; // 0x2ea PushT
	if(var_354_int == 0) goto Label_749; // 0x2eb JumpB
	return 22; // 0x2ec Return
	
Label_749:
	var_355_string = "all"; // 0x2ed PushS
	var_356_string = "attack_off"; // 0x2ee PushS
	PlayAnimation(var_355_string, var_356_string); // 0x2ef Func
	WaitForAnimEnd(); // 0x2f1 Func
	var_357_bool = var_222_bool; // 0x2f3 Push
	if(var_357_bool == 0) goto Label_760; // 0x2f4 JumpB
	var_358_float = 2.0; // 0x2f5 PushF
	Sleep(var_358_float); // 0x2f6 Func
	
Label_760:
	return 22; // 0x2f8 Return
	
Label_608:
	var_223_bool = 0; // 0x260 MovB
	goto Label_743; // 0x261 Jump
	
Label_743:
	goto Label_572; // 0x2e7 Jump
	
Label_610:
	var_359_float = var_207_float * var_207_float; // 0x262 Mult
	var_360_bool = var_226_float >= var_359_float; // 0x263 GE
	if(var_360_bool == 0) goto Label_735; // 0x264 JumpB
	GetPFPosition(var_227_cvector); // 0x265 TObjFunc
	CanReachByPF(var_228_bool, var_227_cvector); // 0x267 Func
	var_361_bool = var_228_bool == 0; // 0x269 Not
	if(var_361_bool == 0) goto Label_634; // 0x26a JumpB
	var_362_bool = 0; var_363_object = Obj(); var_364_float = 0; var_365_float = 0; var_366_bool = 0; var_367_bool = 0; // 0x26b PushV
	var_363_object = var_0_object; // 0x26c MovT
	var_364_float = var_219_float; // 0x26d Mov
	var_365_float = 3000.0; // 0x26e MovF
	var_366_bool = 1; // 0x26f MovB
	var_367_bool = 0; // 0x270 MovB
	TaskCall(5); // 0x271 TaskCall
	func_1216(var_370_bool, var_362_bool, var_363_object, var_364_float, var_365_float, var_366_bool, var_367_bool); // 0x272 NEW_2
	TaskReturn(); // 0x273 TaskReturn
	var_371_bool = var_368_bool == 0; // 0x275 Not
	if(var_371_bool == 0) goto Label_632; // 0x276 JumpB
	goto Label_744; // 0x277 Jump
	
Label_632:
	var_223_bool = 0; // 0x278 MovB
	goto Label_572; // 0x279 Jump
	
Label_634:
	var_372_bool = var_223_bool == 0; // 0x27a Not
	if(var_372_bool == 0) goto Label_659; // 0x27b JumpB
	var_373_object = Obj(); // 0x27c PushV
	var_373_object = var_0_object; // 0x27d MovT
	func_1866(); // 0x27e NEW_2
	var_382_string = "all"; // 0x280 PushS
	var_383_string = "attack_on"; // 0x281 PushS
	PlayAnimation(var_382_string, var_383_string); // 0x282 Func
	WaitForAnimEnd(); // 0x284 Func
	func_1176(var_229_float); // 0x287 NEW_2
	StopAsync(); // 0x289 Func
	var_223_bool = 1; // 0x28b MovB
	var_384_bool = 0; var_385_object = Obj(); // 0x28c PushV
	var_385_object = var_0_object; // 0x28d MovT
	func_1697(var_384_bool, var_385_object); // 0x28e NEW_2
	var_386_bool = var_384_bool == 0; // 0x290 Not
	if(var_386_bool == 0) goto Label_659; // 0x291 JumpB
	goto Label_744; // 0x292 Jump
	
Label_659:
	rand(var_229_float); // 0x293 Func
	var_387_bool = 0; // 0x295 PushV
	var_387_bool = 1; // 0x296 MovB
	var_388_float = 0.2; // 0x297 PushF
	var_389_bool = var_229_float < var_388_float; // 0x298 LT
	if(var_389_bool == 0) goto Label_671; // 0x299 JumpB
	var_390_bool = 0; // 0x29a PushV
	func_1133(var_387_bool, var_390_bool); // 0x29b NEW_2
	if(var_390_bool == 0) goto Label_671; // 0x29d JumpB
	var_387_bool = 0; // 0x29e MovB
	
Label_671:
	if(var_387_bool == 0) goto Label_688; // 0x29f JumpB
	Face(var_0_object); // 0x2a0 Func
	func_1181(); // 0x2a3 NEW_2
	var_425_string = "all"; // 0x2a5 PushS
	var_426_string = "attack_stay"; // 0x2a6 PushS
	PlayAnimation(var_425_string, var_426_string); // 0x2a7 Func
	var_427_bool = 0; var_428_float = 0; // 0x2a9 PushV
	var_428_float = var_207_float; // 0x2aa Mov
	func_1001(var_229_float, var_427_bool, var_428_float); // 0x2ab NEW_2
	StopAsync(); // 0x2ad Func
	goto Label_734; // 0x2af Jump
	
Label_734:
	goto Label_743; // 0x2de Jump
	
Label_688:
	Face(var_0_object); // 0x2b0 Func
	var_663_string = "all"; // 0x2b2 PushS
	var_664_string = "fjump"; // 0x2b3 PushS
	PlayAnimation(var_663_string, var_664_string); // 0x2b4 Func
	WaitForAnimEnd(); // 0x2b6 Func
	func_1176(var_229_float); // 0x2b9 NEW_2
	var_665_cvector = CVector(0.0, 0.0, 0.0); // 0x2bb PushVec
	SetSpeed(var_665_cvector); // 0x2bc Func
	Stop(); // 0x2be Func
	StopAsync(); // 0x2c0 Func
	var_666_bool = 0; // 0x2c2 PushV
	func_1133(var_229_float, var_666_bool); // 0x2c3 NEW_2
	var_667_bool = var_666_bool == 0; // 0x2c5 Not
	if(var_667_bool == 0) goto Label_734; // 0x2c6 JumpB
	var_668_bool = 0; var_669_object = Obj(); // 0x2c7 PushV
	var_669_object = var_0_object; // 0x2c8 MovT
	func_1697(var_668_bool, var_669_object); // 0x2c9 NEW_2
	var_670_bool = var_668_bool == 0; // 0x2cb Not
	if(var_670_bool == 0) goto Label_718; // 0x2cc JumpB
	goto Label_744; // 0x2cd Jump
	
Label_718:
	GetPFPosition(var_220_cvector); // 0x2ce TObjFunc
	GetPFPosition(var_221_cvector); // 0x2d0 Func
	var_225_cvector = var_220_cvector - var_221_cvector; // 0x2d2 Sub2
	var_226_float = var_225_cvector | var_225_cvector; // 0x2d3 Or2
	var_671_float = var_207_float * var_207_float; // 0x2d4 Mult
	var_672_bool = var_226_float < var_671_float; // 0x2d5 LT
	if(var_672_bool == 0) goto Label_734; // 0x2d6 JumpB
	var_673_bool = 0; var_674_float = 0; // 0x2d7 PushV
	var_674_float = var_207_float; // 0x2d8 Mov
	func_835(var_229_float, var_673_bool, var_674_float); // 0x2d9 NEW_2
	var_675_bool = var_673_bool == 0; // 0x2db Not
	if(var_675_bool == 0) goto Label_734; // 0x2dc JumpB
	goto Label_744; // 0x2dd Jump
	
Label_735:
	var_676_bool = 0; var_677_float = 0; // 0x2df PushV
	var_677_float = var_207_float; // 0x2e0 Mov
	func_835(var_229_float, var_676_bool, var_677_float); // 0x2e1 NEW_2
	var_678_bool = var_676_bool == 0; // 0x2e3 Not
	if(var_678_bool == 0) goto Label_742; // 0x2e4 JumpB
	goto Label_744; // 0x2e5 Jump
	
Label_742:
	var_223_bool = 1; // 0x2e6 MovB
	
Label_569:
	var_223_bool = 1; // 0x239 MovB
	
Label_546:
	var_219_float = var_207_float; // 0x222 Mov
}


func_2071()
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x817 PushV
	GetScene(var_120_object); // 0x818 Func
	var_121_string = "battle"; // 0x81a PushS
	var_122_object = Obj(); // 0x81b PushV
	func_1934(var_122_object); // 0x81c NEW_2
	BroadcastMessage(var_121_string, var_122_object, var_120_object); // 0x81e Func
	return 2; // 0x820 Return
}


func_2082(var_617_bool)
{
	var_618_bool = 0; var_619_bool = 0; // 0x822 PushV
	var_620_string = "god_mode"; // 0x823 PushS
	GetVariable(var_620_string, var_619_bool); // 0x824 Func
	var_617_bool = var_619_bool; // 0x826 Mov
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


func_42()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x2a PushV
	WaitForAnimEnd(); // 0x2b Func
	var_25_bool = 0; // 0x2d PushV
	func_1877(var_25_bool); // 0x2e NEW_2
	var_28_bool = var_25_bool == 0; // 0x30 Not
	if(var_28_bool == 0) goto Label_51; // 0x31 JumpB
	return 14; // 0x32 Return
	
Label_51:
	var_29_int = 0; // 0x33 PushV
	func_2095(var_29_int); // 0x34 NEW_2
	var_18_int = var_29_int; // 0x35 Mov
	var_19_int = 0; // 0x37 MovI
	
Label_56:
	var_42_bool = 0; // 0x38 PushV
	var_42_bool = 0; // 0x39 MovB
	var_43_int = 5; // 0x3a PushI
	var_44_bool = var_19_int < var_43_int; // 0x3b LT
	if(var_44_bool == 0) goto Label_66; // 0x3c JumpB
	var_45_bool = 0; // 0x3d PushV
	func_1877(var_45_bool); // 0x3e NEW_2
	if(var_45_bool == 0) goto Label_66; // 0x40 JumpB
	var_42_bool = 1; // 0x41 MovB
	
Label_66:
	if(var_42_bool == 0) goto Label_118; // 0x42 JumpB
	var_46_int = 3; // 0x43 PushI
	irand(var_20_int, var_46_int); // 0x44 Func
	var_47_int = 0; // 0x46 PushI
	var_48_bool = var_20_int == var_47_int; // 0x47 Eq
	if(var_48_bool == 0) goto Label_90; // 0x48 JumpB
	var_49_int = var_18_int; // 0x49 Push
	if(var_49_int == 0) goto Label_89; // 0x4a JumpB
	irand(var_21_int, var_18_int); // 0x4b Func
	var_50_string = "all"; // 0x4d PushS
	var_51_string = ""; var_52_int = 0; // 0x4e PushV
	var_52_int = var_21_int; // 0x4f Mov
	func_2088(var_51_string, var_52_int); // 0x50 NEW_2
	PlayAnimation(var_50_string, var_51_string); // 0x52 Func
	WaitForAnimEnd(var_22_bool); // 0x54 Func
	var_53_bool = var_22_bool == 0; // 0x56 Not
	if(var_53_bool == 0) goto Label_89; // 0x57 JumpB
	goto Label_118; // 0x58 Jump
	
Label_118:
	ResetAAS(); // 0x76 Func
	return 14; // 0x78 Return
	
Label_89:
	goto Label_107; // 0x59 Jump
	
Label_107:
	var_54_bool = 0; // 0x6b PushV
	func_121(var_54_bool); // 0x6c NEW_2
	var_55_bool = var_54_bool == 0; // 0x6e Not
	if(var_55_bool == 0) goto Label_113; // 0x6f JumpB
	goto Label_118; // 0x70 Jump
	
Label_113:
	ResetAAS(); // 0x71 Func
	var_56_int = 1; // 0x73 PushI
	var_19_int = var_19_int + var_56_int; // 0x74 Add2
	goto Label_56; // 0x75 Jump
	
Label_90:
	var_57_int = 1; // 0x5a PushI
	var_58_bool = var_20_int == var_57_int; // 0x5b Eq
	if(var_58_bool == 0) goto Label_104; // 0x5c JumpB
	var_59_int = 4; // 0x5d PushI
	rand(var_23_float, var_59_int); // 0x5e Func
	var_60_int = 1; // 0x60 PushI
	var_61_int = var_23_float + var_60_int; // 0x61 Add
	Sleep(var_61_int, var_24_bool); // 0x62 Func
	var_62_bool = var_24_bool == 0; // 0x64 Not
	if(var_62_bool == 0) goto Label_103; // 0x65 JumpB
	goto Label_118; // 0x66 Jump
	
Label_103:
	goto Label_107; // 0x67 Jump
	
Label_104:
	var_63_int = var_19_int; // 0x68 Push
	if(var_63_int == 0) goto Label_107; // 0x69 JumpB
	goto Label_118; // 0x6a Jump
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


func_1072(var_440_bool)
{
	var_441_bool = 0; // 0x430 PushV
	var_441_bool = 0; // 0x431 MovB
	var_442_bool = 0; // 0x432 PushV
	func_1044(var_441_bool, var_442_bool); // 0x433 NEW_2
	if(var_442_bool == 0) goto Label_1083; // 0x435 JumpB
	var_459_bool = 0; // 0x436 PushV
	func_1088(var_440_bool, var_441_bool, var_459_bool); // 0x437 NEW_2
	if(var_459_bool == 0) goto Label_1083; // 0x439 JumpB
	var_441_bool = 1; // 0x43a MovB
	
Label_1083:
	if(var_441_bool == 0) goto Label_1086; // 0x43b JumpB
	var_440_bool = 1; // 0x43c MovB
	return 0; // 0x43d Return
	
Label_1086:
	var_440_bool = 0; // 0x43e MovB
	return 0; // 0x43f Return
}


func_1088(var_0_object, var_4_int, var_459_bool)
{
	var_460_object = Obj(); var_461_bool = 0; var_462_float = 0; var_463_cvector = CVector(0,0,0); var_464_cvector = CVector(0,0,0); var_465_object = Obj(); var_466_bool = 0; var_467_float = 0; var_468_cvector = CVector(0,0,0); var_469_cvector = CVector(0,0,0); // 0x440 PushV
	GetScene(var_465_object); // 0x441 Func
	var_466_bool = 0; // 0x443 MovB
	
Label_1092:
	var_470_cvector = CVector(0,0,0); var_471_object = Obj(); // 0x444 PushV
	var_471_object = var_0_object; // 0x445 MovT
	func_1498(var_471_object); // 0x446 NEW_2
	var_476_int = -var_470_cvector; // 0x448 Neg
	FindDirLength(var_467_float, var_476_int, var_467_float); // 0x449 Func
	var_477_bool = var_467_float < var_4_int; // 0x44b LT
	if(var_477_bool == 0) goto Label_1102; // 0x44c JumpB
	goto Label_1130; // 0x44d Jump
	
Label_1130:
	var_459_bool = var_466_bool; // 0x46a Mov
	return 10; // 0x46b Return
	
Label_1102:
	Face(var_0_object); // 0x44e Func
	var_478_string = "all"; // 0x450 PushS
	var_479_string = "bjump"; // 0x451 PushS
	PlayAnimation(var_478_string, var_479_string); // 0x452 Func
	GetPFPosition(var_468_cvector); // 0x454 TObjFunc
	GetPFPosition(var_469_cvector); // 0x456 Func
	WaitForAnimEnd(); // 0x458 Func
	func_1176(var_469_cvector); // 0x45b NEW_2
	StopAsync(); // 0x45d Func
	var_480_cvector = CVector(0.0, 0.0, 0.0); // 0x45f PushVec
	SetSpeed(var_480_cvector); // 0x460 Func
	var_466_bool = 1; // 0x462 MovB
	var_481_bool = 0; // 0x463 PushV
	func_1044(var_469_cvector, var_481_bool); // 0x464 NEW_2
	var_482_bool = var_481_bool == 0; // 0x466 Not
	if(var_482_bool == 0) goto Label_1129; // 0x467 JumpB
	goto Label_1130; // 0x468 Jump
	
Label_1129:
	goto Label_1092; // 0x469 Jump
}


func_2112(var_11_object)
{
	var_12_object = Obj(); // 0x841 PushV
	var_12_object = var_11_object; // 0x842 Mov
	TaskCall(1); // 0x843 TaskCall
	func_128(var_12_object); // 0x844 NEW_2
	TaskReturn(); // 0x845 TaskReturn
	return 0; // 0x847 Return
}


func_1625(var_606_bool, var_607_object)
{
	var_608_float = 0; var_609_float = 0; // 0x659 PushV
	var_610_bool = 0; var_611_object = Obj(); var_612_string = ""; // 0x65a PushV
	var_611_object = var_607_object; // 0x65b Mov
	var_612_string = "health"; // 0x65c MovS
	func_1518(var_610_bool, var_611_object, var_612_string); // 0x65d NEW_2
	var_613_bool = var_610_bool == 0; // 0x65f Not
	if(var_613_bool == 0) goto Label_1635; // 0x660 JumpB
	var_606_bool = 0; // 0x661 MovB
	return 2; // 0x662 Return
	
Label_1635:
	var_614_bool = 0; // 0x663 PushV
	var_614_bool = 0; // 0x664 MovB
	var_615_bool = 0; var_616_object = Obj(); // 0x665 PushV
	var_616_object = var_607_object; // 0x666 Mov
	func_1513(var_615_bool, var_616_object); // 0x667 NEW_2
	if(var_615_bool == 0) goto Label_1647; // 0x669 JumpB
	var_617_bool = 0; // 0x66a PushV
	func_2082(var_617_bool); // 0x66b NEW_2
	if(var_617_bool == 0) goto Label_1647; // 0x66d JumpB
	var_614_bool = 1; // 0x66e MovB
	
Label_1647:
	if(var_614_bool == 0) goto Label_1650; // 0x66f JumpB
	var_606_bool = 0; // 0x670 MovB
	return 2; // 0x671 Return
	
Label_1650:
	var_621_string = "health"; // 0x672 PushS
	GetProperty(var_621_string, var_609_float); // 0x673 ObjFunc
	var_622_float = 0.0; // 0x675 PushF
	var_606_bool = var_609_float <= var_622_float; // 0x676 LE2
	return 2; // 0x677 Return
}


func_2157(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x86e PushV
	var_18_object = var_16_object; // 0x86f Mov
	func_1697(var_17_bool, var_18_object); // 0x870 NEW_2
	var_15_bool = var_17_bool; // 0x871 Mov
	return 0; // 0x873 Return
}


func_1133(var_0_object, var_390_bool)
{
	var_391_bool = 0; var_392_bool = 0; // 0x46d PushV
	var_393_string = "IsAttacking"; // 0x46e PushS
	var_394_int = 1; // 0x46f PushI
	var_395_bool = IsFuncExist(var_0_object, var_393_string, var_394_int); // 0x470 FuncExist
	if(var_395_bool == 0) goto Label_1142; // 0x471 JumpB
	IsAttacking(var_392_bool); // 0x472 TObjFunc
	var_390_bool = var_392_bool; // 0x474 Mov
	return 2; // 0x475 Return
	
Label_1142:
	var_390_bool = 0; // 0x476 MovB
	return 2; // 0x477 Return
}


func_2164(var_51_object)
{
	var_52_object = Obj(); // 0x875 PushV
	var_52_object = var_51_object; // 0x876 Mov
	func_2189(var_52_object); // 0x877 NEW_2
	return 0; // 0x879 Return
}


func_1656(var_38_bool)
{
	var_40_bool = 0; var_41_bool = 0; // 0x678 PushV
	IsDead(var_41_bool); // 0x679 ObjFunc
	var_38_bool = var_41_bool; // 0x67b Mov
	return 2; // 0x67c Return
}


func_121(var_54_bool)
{
	var_54_bool = 1; // 0x79 MovB
	return 0; // 0x7a Return
}


func_2170(var_15_int)
{
	var_16_int = 0; var_17_int = 0; // 0x87a PushV
	var_18_string = "branch"; // 0x87b PushS
	GetVariable(var_18_string, var_17_int); // 0x87c Func
	var_15_int = var_17_int; // 0x87e Mov
	return 2; // 0x87f Return
}


func_123()
{
	StopAnimation(); // 0x7b Func
	StopGroup0(); // 0x7d Func
	return 0; // 0x7f Return
}


func_1144(var_2_object, var_5_bool)
{
	var_503_float = 0; var_504_int = 0; var_505_float = 0; var_506_int = 0; // 0x478 PushV
	var_507_bool = var_2_object == 0; // 0x479 Not
	if(var_507_bool == 0) goto Label_1148; // 0x47a JumpB
	return 4; // 0x47b Return
	
Label_1148:
	var_508_bool = var_5_bool; // 0x47c PushT
	if(var_508_bool == 0) goto Label_1156; // 0x47d JumpB
	var_509_int = -1; // 0x47e PushI
	var_5_bool = var_5_bool + var_509_int; // 0x47f Add2
	var_510_int = 0; // 0x480 PushI
	var_511_bool = var_5_bool > var_510_int; // 0x481 GT
	if(var_511_bool == 0) goto Label_1156; // 0x482 JumpB
	return 4; // 0x483 Return
	
Label_1156:
	rand(var_505_float); // 0x484 Func
	var_512_float = 0; // 0x486 PushV
	func_1190(var_512_float); // 0x487 NEW_2
	var_513_bool = var_505_float < var_512_float; // 0x489 LT
	if(var_513_bool == 0) goto Label_1175; // 0x48a JumpB
	irand(var_506_int, var_505_float); // 0x48b Func
	var_514_int = 1; // 0x48d PushI
	var_506_int = var_506_int + var_514_int; // 0x48e Add2
	var_515_string = "attack"; // 0x48f PushS
	var_516_int = var_515_string + var_506_int; // 0x490 Add
	Speak(var_516_int); // 0x491 Func
	var_517_int = 0; // 0x493 PushV
	func_1188(var_517_int); // 0x494 NEW_2
	var_5_bool = var_517_int; // 0x495 TMov
	
Label_1175:
	return 4; // 0x497 Return
}


func_1661(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x67d PushV
	var_33_bool = var_28_object == 0; // 0x67e NullEq
	if(var_33_bool == 0) goto Label_1666; // 0x67f JumpB
	var_27_bool = 0; // 0x680 MovB
	return 4; // 0x681 Return
	
Label_1666:
	var_34_bool = 0; // 0x682 PushV
	var_34_bool = 0; // 0x683 MovB
	var_35_string = "IsDead"; // 0x684 PushS
	var_36_int = 1; // 0x685 PushI
	var_37_bool = IsFuncExist(var_28_object, var_35_string, var_36_int); // 0x686 FuncExist
	if(var_37_bool == 0) goto Label_1678; // 0x687 JumpB
	var_38_bool = 0; var_39_object = Obj(); // 0x688 PushV
	var_39_object = var_28_object; // 0x689 Mov
	func_1656(var_39_object); // 0x68a NEW_2
	if(var_38_bool == 0) goto Label_1678; // 0x68c JumpB
	var_34_bool = 1; // 0x68d MovB
	
Label_1678:
	if(var_34_bool == 0) goto Label_1681; // 0x68e JumpB
	var_27_bool = 0; // 0x68f MovB
	return 4; // 0x690 Return
	
Label_1681:
	GetScene(var_31_object); // 0x691 Func
	var_42_bool = var_31_object == 0; // 0x693 NullEq
	if(var_42_bool == 0) goto Label_1687; // 0x694 JumpB
	var_27_bool = 0; // 0x695 MovB
	return 4; // 0x696 Return
	
Label_1687:
	GetScene(var_32_object); // 0x697 ObjFunc
	var_43_bool = var_31_object != var_32_object; // 0x699 Neq
	if(var_43_bool == 0) goto Label_1693; // 0x69a JumpB
	var_27_bool = 0; // 0x69b MovB
	return 4; // 0x69c Return
	
Label_1693:
	var_27_bool = 1; // 0x69d MovB
	return 4; // 0x69e Return
}


func_2176(var_14_object)
{
	var_15_int = 0; // 0x881 PushV
	func_2170(var_15_int); // 0x882 NEW_2
	var_19_int = 1; // 0x884 PushI
	var_20_bool = var_15_int == var_19_int; // 0x885 Eq
	if(var_20_bool == 0) goto Label_2186; // 0x886 JumpB
	WorkWithCorpse(var_14_object); // 0x887 Func
	goto Label_2188; // 0x889 Jump
	
Label_2188:
	return 0; // 0x88c Return
	
Label_2186:
	Barter(var_14_object); // 0x88a Func
}


func_128(var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x81 PushV
	var_14_object = var_12_object; // 0x82 Mov
	func_1513(var_13_bool, var_14_object); // 0x83 NEW_2
	if(var_13_bool == 0) goto Label_139; // 0x85 JumpB
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0; // 0x86 PushV
	var_18_object = var_12_object; // 0x87 Mov
	var_19_float = 0.03; // 0x88 MovF
	func_2000(var_17_bool, var_18_object, var_19_float); // 0x89 NEW_2
	
Label_139:
	var_55_object = Obj(); // 0x8b PushV
	var_55_object = var_12_object; // 0x8c Mov
	func_144(var_55_object); // 0x8d NEW_2
	return 0; // 0x8f Return
}


func_2189(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x88d PushV
	GetScene(var_54_object); // 0x88e Func
	var_55_object = Obj(); // 0x890 PushV
	func_1934(var_55_object); // 0x891 NEW_2
	RemoveStationaryActor(var_55_object); // 0x893 ObjFunc
	var_58_object = Obj(); // 0x895 PushV
	var_58_object = var_52_object; // 0x896 Mov
	TaskCall(6); // 0x897 TaskCall
	func_1472(var_58_object); // 0x898 NEW_2
	TaskReturn(); // 0x899 TaskReturn
	return 2; // 0x89b Return
}


func_144(var_55_object)
{
	EventDisable(0); // 0x91 EventDisable
	var_56_object = Obj(); // 0x92 PushV
	var_56_object = var_55_object; // 0x93 Mov
	func_169(var_56_object); // 0x94 NEW_2
	var_136_int = 50; // 0x96 PushI
	var_137_int = 40; // 0x97 PushI
	SetRTEnvelope(var_136_int, var_137_int); // 0x98 Func
	EventEnable(0); // 0x9a EventEnable
	
Label_155:
	Hold(); // 0x9b Func
	goto Label_155; // 0x9d Jump
}


func_1176(var_0_object)
{
	var_267_object = Obj(); // 0x498 PushV
	var_267_object = var_0_object; // 0x499 MovT
	func_2062(var_267_object); // 0x49a NEW_2
	return 0; // 0x49c Return
}


func_2205(var_140_cvector, var_141_cvector, var_142_cvector, var_143_float)
{
	var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_float = 0; var_149_float = 0; var_150_cvector = CVector(0,0,0); var_151_float = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0; var_155_float = 0; // 0x89d PushV
	var_150_cvector = var_142_cvector - var_141_cvector; // 0x89e Sub2
	var_151_float = 250000; // 0x89f MovI
	var_156_float = GetByIndex(var_150_cvector, 1); // 0x8a0 PushE
	var_157_int = 1000; // 0x8a1 PushI
	var_158_float = var_156_float * var_157_int; // 0x8a2 Mult
	var_159_float = var_143_float * var_143_float; // 0x8a3 Mult
	var_152_float = var_158_float - var_159_float; // 0x8a4 Sub2
	var_153_float = var_150_cvector | var_150_cvector; // 0x8a5 Or2
	var_160_float = 0; var_161_float = 0; var_162_float = 0; var_163_float = 0; // 0x8a6 PushV
	var_161_float = var_151_float; // 0x8a7 Mov
	var_162_float = var_152_float; // 0x8a8 Mov
	var_163_float = var_153_float; // 0x8a9 Mov
	func_1957(var_160_float, var_161_float, var_162_float, var_163_float); // 0x8aa NEW_2
	var_154_float = var_160_float; // 0x8ab Mov
	var_168_int = 0; // 0x8ad PushI
	var_169_bool = var_154_float < var_168_int; // 0x8ae LT
	if(var_169_bool == 0) goto Label_2226; // 0x8af JumpB
	var_155_float = 1; // 0x8b0 MovI
	goto Label_2234; // 0x8b1 Jump
	
Label_2234:
	var_170_cvector = CVector(0.0, 500.0, 0.0); // 0x8ba PushVec
	var_171_float = var_170_cvector * var_155_float; // 0x8bb Mult
	var_172_float = var_171_float * var_155_float; // 0x8bc Mult
	var_173_int = var_150_cvector + var_172_float; // 0x8bd Add
	var_140_cvector = var_173_int / var_173_int; // 0x8be Div2
	return 12; // 0x8bf Return
	
Label_2226:
	var_174_float = 0; var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0; // 0x8b2 PushV
	var_175_float = var_151_float; // 0x8b3 Mov
	var_176_float = var_152_float; // 0x8b4 Mov
	var_177_float = var_153_float; // 0x8b5 Mov
	var_178_float = sqrt(var_154_float); // 0x8b6 Sqrt2
	func_1964(var_175_float, var_176_float, var_177_float, var_178_float); // 0x8b7 NEW_2
	var_155_float = sqrt(var_174_float); // 0x8b9 Sqrt2
}


func_1181()
{
	var_396_string = ""; // 0x49d PushV
	var_396_string = "attack_stay"; // 0x49e MovS
	func_1893(var_396_string); // 0x49f NEW_2
	return 0; // 0x4a1 Return
}


func_1697(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0; // 0x6a1 PushV
	var_27_bool = 0; var_28_object = Obj(); // 0x6a2 PushV
	var_28_object = var_24_object; // 0x6a3 Mov
	func_1661(var_27_bool, var_28_object); // 0x6a4 NEW_2
	var_44_bool = var_27_bool == 0; // 0x6a6 Not
	if(var_44_bool == 0) goto Label_1706; // 0x6a7 JumpB
	var_23_bool = 0; // 0x6a8 MovB
	return 2; // 0x6a9 Return
	
Label_1706:
	var_45_bool = 0; var_46_object = Obj(); var_47_string = ""; // 0x6aa PushV
	var_46_object = var_24_object; // 0x6ab Mov
	var_47_string = "noaccess"; // 0x6ac MovS
	func_1518(var_45_bool, var_46_object, var_47_string); // 0x6ad NEW_2
	var_54_bool = var_45_bool == 0; // 0x6af Not
	if(var_54_bool == 0) goto Label_1715; // 0x6b0 JumpB
	var_23_bool = 1; // 0x6b1 MovB
	return 2; // 0x6b2 Return
	
Label_1715:
	var_55_string = "noaccess"; // 0x6b3 PushS
	GetProperty(var_55_string, var_26_int); // 0x6b4 ObjFunc
	var_56_int = 0; // 0x6b6 PushI
	var_23_bool = var_26_int == var_56_int; // 0x6b7 Eq2
	return 2; // 0x6b8 Return
}


func_1186(var_646_bool)
{
	var_646_bool = 1; // 0x4a2 MovB
	return 0; // 0x4a3 Return
}


func_1188(var_517_int)
{
	var_517_int = 1; // 0x4a4 MovI
	return 0; // 0x4a5 Return
}


func_1190(var_512_float)
{
	var_512_float = 0.5; // 0x4a6 MovF
	return 0; // 0x4a7 Return
}


func_169(var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_string = ""; var_62_object = Obj(); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_string = ""; var_72_object = Obj(); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); // 0xa9 PushV
	var_77_bool = var_56_object == 0; // 0xaa NullEq
	if(var_77_bool == 0) goto Label_177; // 0xab JumpB
	var_78_string = ""; // 0xac PushV
	var_78_string = "fdie"; // 0xad MovS
	func_260(var_78_string); // 0xae NEW_2
	goto Label_259; // 0xb0 Jump
	
Label_259:
	return 20; // 0x103 Return
	
Label_177:
	GetPosition(var_67_cvector); // 0xb1 ObjFunc
	GetPosition(var_68_cvector); // 0xb3 Func
	GetDirection(var_69_cvector); // 0xb5 Func
	var_70_cvector = var_68_cvector - var_67_cvector; // 0xb7 Sub2
	var_110_float = GetByIndex(var_70_cvector, 0); // 0xb8 PushE
	var_111_float = GetByIndex(var_69_cvector, 0); // 0xb9 PushE
	var_112_float = var_110_float * var_111_float; // 0xba Mult
	var_113_float = GetByIndex(var_70_cvector, 2); // 0xbb PushE
	var_114_float = GetByIndex(var_69_cvector, 2); // 0xbc PushE
	var_115_float = var_113_float * var_114_float; // 0xbd Mult
	var_116_int = var_112_float + var_115_float; // 0xbe Add
	var_117_int = 0; // 0xbf PushI
	var_118_bool = var_116_int >= var_117_int; // 0xc0 GE
	if(var_118_bool == 0) goto Label_196; // 0xc1 JumpB
	var_71_string = "fdie"; // 0xc2 MovS
	goto Label_197; // 0xc3 Jump
	
Label_197:
	RemoveRTEnvelope(); // 0xc5 Func
	SetDeathState(); // 0xc7 Func
	Stop(); // 0xc9 Func
	StopAsync(); // 0xcb Func
	var_72_object = var_56_object; // 0xcd Mov
	var_119_string = "GetScriptProperty"; // 0xce PushS
	var_120_int = 2; // 0xcf PushI
	var_121_bool = IsFuncExist(var_56_object, var_119_string, var_120_int); // 0xd0 FuncExist
	if(var_121_bool == 0) goto Label_221; // 0xd1 JumpB
	var_122_string = "Owner"; // 0xd2 PushS
	HasScriptProperty(var_73_bool, var_122_string); // 0xd3 ObjFunc
	var_123_bool = var_73_bool; // 0xd5 Push
	if(var_123_bool == 0) goto Label_221; // 0xd6 JumpB
	var_124_string = "Owner"; // 0xd7 PushS
	GetScriptProperty(var_72_object, var_124_string); // 0xd8 ObjFunc
	var_125_bool = var_72_object == 0; // 0xda NullEq
	if(var_125_bool == 0) goto Label_221; // 0xdb JumpB
	var_72_object = var_56_object; // 0xdc Mov
	
Label_221:
	var_126_string = "@GetEyesHeight"; // 0xdd PushS
	var_127_int = 1; // 0xde PushI
	var_128_bool = IsFuncExist(var_72_object, var_126_string, var_127_int); // 0xdf FuncExist
	if(var_128_bool == 0) goto Label_236; // 0xe0 JumpB
	GetEyesHeight(var_75_float); // 0xe1 ObjFunc
	var_76_cvector = CVector(0.0, 0.0, 0.0); // 0xe3 MovV
	var_129_float = GetByIndex(var_76_cvector, 1); // 0xe4 PushE
	var_129_float = var_75_float; // 0xe5 Mov
	SetByIndex(var_76_cvector, 1) = var_129_float; // 0xe6 PopE
	var_130_string = "head"; // 0xe7 PushS
	LookAsync(var_56_object, var_130_string, var_76_cvector); // 0xe8 Func
	var_74_bool = 1; // 0xea MovB
	goto Label_237; // 0xeb Jump
	
Label_237:
	var_131_string = ""; // 0xed PushV
	var_131_string = var_71_string; // 0xee Mov
	func_1893(var_131_string); // 0xef NEW_2
	var_132_string = "all"; // 0xf1 PushS
	PlayAnimation(var_132_string, var_71_string); // 0xf2 Func
	WaitForAnimEnd(); // 0xf4 Func
	var_133_bool = var_74_bool; // 0xf6 Push
	if(var_133_bool == 0) goto Label_253; // 0xf7 JumpB
	StopAsync(); // 0xf8 Func
	var_134_string = "head"; // 0xfa PushS
	UnlookAsync(var_134_string); // 0xfb Func
	
Label_253:
	var_135_string = "all"; // 0xfd PushS
	LockAnimationEnd(var_135_string, var_71_string); // 0xfe Func
	RemoveEnvelope(); // 0x100 Func
	var_72_object = 0; // 0x102 SetNull
	
Label_236:
	var_74_bool = 0; // 0xec MovB
	
Label_196:
	var_71_string = "bdie"; // 0xc4 MovS
}


func_1721(var_106_bool, var_107_cvector)
{
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_bool = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_bool = 0; // 0x6b9 PushV
	GetPosition(var_111_cvector); // 0x6ba Func
	var_112_cvector = var_107_cvector - var_111_cvector; // 0x6bc Sub2
	var_114_float = GetByIndex(var_112_cvector, 0); // 0x6bd PushE
	var_115_float = GetByIndex(var_112_cvector, 2); // 0x6be PushE
	Rotate(var_114_float, var_115_float, var_113_bool); // 0x6bf Func
	var_106_bool = var_113_bool; // 0x6c1 Mov
	return 6; // 0x6c2 Return
}


func_2240()
{
	return 0; // 0x8c1 Return
}


func_1216(var_2_object, var_270_bool, var_271_object, var_272_float, var_273_float, var_274_bool, var_275_bool)
{
	var_279_bool = 0; var_280_bool = 0; var_281_bool = 0; var_282_bool = 0; // 0x4c0 PushV
	var_283_object = Obj(); // 0x4c1 PushV
	var_283_object = var_271_object; // 0x4c2 Mov
	func_2062(var_283_object); // 0x4c3 NEW_2
	var_284_int = 1; // 0x4c5 PushI
	var_285_int = 5; // 0x4c6 PushI
	SetTimer(var_284_int, var_285_int); // 0x4c7 Func
	CanSee(var_281_bool, var_271_object); // 0x4c9 Func
	var_286_bool = var_281_bool; // 0x4cb Push
	if(var_286_bool == 0) goto Label_1235; // 0x4cc JumpB
	var_2_object = 1; // 0x4cd TMovB
	var_287_object = Obj(); // 0x4ce PushV
	var_287_object = var_271_object; // 0x4cf Mov
	func_1882(var_287_object); // 0x4d0 NEW_2
	goto Label_1236; // 0x4d2 Jump
	
Label_1236:
	var_294_bool = 0; var_295_object = Obj(); // 0x4d4 PushV
	var_295_object = var_271_object; // 0x4d5 Mov
	func_1513(var_294_bool, var_295_object); // 0x4d6 NEW_2
	if(var_294_bool == 0) goto Label_1246; // 0x4d8 JumpB
	var_298_object = Obj(); // 0x4d9 PushV
	func_1934(var_298_object); // 0x4da NEW_2
	SendPlayerEnemy(var_271_object, var_298_object); // 0x4dc Func
	
Label_1246:
	var_299_bool = 0; var_300_object = Obj(); var_301_float = 0; var_302_float = 0; var_303_bool = 0; var_304_bool = 0; // 0x4de PushV
	var_300_object = var_271_object; // 0x4df Mov
	var_301_float = var_272_float; // 0x4e0 Mov
	var_302_float = var_273_float; // 0x4e1 Mov
	var_303_bool = var_274_bool; // 0x4e2 Mov
	var_304_bool = var_275_bool; // 0x4e3 Mov
	func_1321(var_281_bool, var_282_bool, var_299_bool, var_300_object, var_301_float, var_302_float, var_303_bool, var_304_bool); // 0x4e4 NEW_2
	var_282_bool = var_299_bool; // 0x4e5 Mov
	var_350_object = var_2_object; // 0x4e7 PushT
	if(var_350_object == 0) goto Label_1260; // 0x4e8 JumpB
	var_351_string = "head"; // 0x4e9 PushS
	UnlookAsync(var_351_string); // 0x4ea Func
	
Label_1260:
	var_352_int = 1; // 0x4ec PushI
	KillTimer(var_352_int); // 0x4ed Func
	var_270_bool = var_282_bool; // 0x4ef Mov
	return 4; // 0x4f0 Return
	
Label_1235:
	var_2_object = 0; // 0x4d3 TMovB
}


func_2242(var_13_bool)
{
	var_13_bool = 0; // 0x8c3 MovB
	return 0; // 0x8c4 Return
}


func_1731(var_102_bool)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); // 0x6c3 PushV
	GetPosition(var_105_cvector); // 0x6c4 ObjFunc
	var_106_bool = 0; var_107_cvector = CVector(0,0,0); // 0x6c6 PushV
	var_107_cvector = var_105_cvector; // 0x6c7 Mov
	func_1721(var_106_bool, var_107_cvector); // 0x6c8 NEW_2
	var_102_bool = var_106_bool; // 0x6c9 Mov
	return 2; // 0x6cb Return
}


func_1740(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x6cc PushV
	var_42_bool = var_27_object == 0; // 0x6cd NullEq
	if(var_42_bool == 0) goto Label_1744; // 0x6ce JumpB
	return 14; // 0x6cf Return
	
Label_1744:
	IsDead(var_35_bool); // 0x6d0 Func
	var_43_bool = var_35_bool; // 0x6d2 Push
	if(var_43_bool == 0) goto Label_1749; // 0x6d3 JumpB
	return 14; // 0x6d4 Return
	
Label_1749:
	GetSecondaryAnimationType(var_36_int); // 0x6d5 Func
	var_44_int = 0; // 0x6d7 PushI
	var_45_bool = var_36_int < var_44_int; // 0x6d8 LT
	if(var_45_bool == 0) goto Label_1755; // 0x6d9 JumpB
	return 14; // 0x6da Return
	
Label_1755:
	GetPosition(var_37_cvector); // 0x6db ObjFunc
	GetPosition(var_38_cvector); // 0x6dd Func
	GetDirection(var_39_cvector); // 0x6df Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x6e1 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x6e2 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x6e3 PushE
	var_48_float = var_46_float * var_47_float; // 0x6e4 Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x6e5 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x6e6 PushE
	var_51_float = var_49_float * var_50_float; // 0x6e7 Mult
	var_52_int = var_48_float + var_51_float; // 0x6e8 Add
	var_53_int = 0; // 0x6e9 PushI
	var_54_bool = var_52_int >= var_53_int; // 0x6ea GE
	if(var_54_bool == 0) goto Label_1774; // 0x6eb JumpB
	var_41_string = "fhit"; // 0x6ec MovS
	goto Label_1775; // 0x6ed Jump
	
Label_1775:
	var_55_string = "hit_react"; // 0x6ef PushS
	var_56_string = "1"; // 0x6f0 PushS
	var_57_int = var_41_string + var_56_string; // 0x6f1 Add
	var_58_string = "2"; // 0x6f2 PushS
	var_59_int = var_41_string + var_58_string; // 0x6f3 Add
	var_60_int = -10; // 0x6f4 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x6f5 Func
	return 14; // 0x6f7 Return
	
Label_1774:
	var_41_string = "bhit"; // 0x6ee MovS
}


func_1784(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x6f8 PushV
	var_35_bool = 0; // 0x6f9 PushV
	var_35_bool = 0; // 0x6fa MovB
	var_36_bool = 0; // 0x6fb PushV
	var_36_bool = 0; // 0x6fc MovB
	var_37_object = var_14_object; // 0x6fd Push
	if(var_37_object == 0) goto Label_1795; // 0x6fe JumpB
	var_38_int = 4; // 0x6ff PushI
	var_39_bool = var_15_int != var_38_int; // 0x700 Neq
	if(var_39_bool == 0) goto Label_1795; // 0x701 JumpB
	var_36_bool = 1; // 0x702 MovB
	
Label_1795:
	if(var_36_bool == 0) goto Label_1800; // 0x703 JumpB
	var_40_int = 5; // 0x704 PushI
	var_41_bool = var_15_int != var_40_int; // 0x705 Neq
	if(var_41_bool == 0) goto Label_1800; // 0x706 JumpB
	var_35_bool = 1; // 0x707 MovB
	
Label_1800:
	if(var_35_bool == 0) goto Label_1847; // 0x708 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x709 PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x70a PushV
	var_45_object = var_14_object; // 0x70b Mov
	func_1498(var_45_object); // 0x70c NEW_2
	var_43_cvector = var_44_cvector; // 0x70d Mov
	func_1940(var_42_cvector, var_43_cvector); // 0x70f NEW_2
	var_26_cvector = var_42_cvector; // 0x710 Mov
	CreateVectorVector(var_27_object); // 0x712 Func
	var_28_int = 1; // 0x714 MovI
	
Label_1813:
	var_55_string = "hit"; // 0x715 PushS
	var_56_int = var_55_string + var_28_int; // 0x716 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x717 Func
	var_57_bool = var_29_bool == 0; // 0x719 Not
	if(var_57_bool == 0) goto Label_1820; // 0x71a JumpB
	goto Label_1829; // 0x71b Jump
	
Label_1829:
	size(var_32_int); // 0x725 ObjFunc
	var_58_int = var_32_int; // 0x727 Push
	if(var_58_int == 0) goto Label_1846; // 0x728 JumpB
	irand(var_33_int, var_32_int); // 0x729 Func
	get(var_34_cvector, var_33_int); // 0x72b ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x72d PushV
	var_59_object = var_14_object; // 0x72e Mov
	var_60_int = var_15_int; // 0x72f Mov
	var_61_float = var_16_float; // 0x730 Mov
	var_62_cvector = var_34_cvector; // 0x731 Mov
	var_63_cvector = -var_26_cvector; // 0x732 Neg2
	func_1852(var_61_float, var_62_cvector, var_63_cvector); // 0x733 NEW_2
	return 18; // 0x735 Return
	
Label_1846:
	var_27_object = 0; // 0x736 SetNull
	
Label_1847:
	var_104_object = Obj(); // 0x737 PushV
	var_104_object = var_14_object; // 0x738 Mov
	func_1740(var_104_object); // 0x739 NEW_2
	return 18; // 0x73b Return
	
Label_1820:
	var_105_int = var_31_cvector | var_26_cvector; // 0x71c Or
	var_106_float = 0.70711; // 0x71d PushF
	var_107_bool = var_105_int >= var_106_float; // 0x71e GE
	if(var_107_bool == 0) goto Label_1826; // 0x71f JumpB
	add(var_30_cvector); // 0x720 ObjFunc
	
Label_1826:
	var_108_int = 1; // 0x722 PushI
	var_28_int = var_28_int + var_108_int; // 0x723 Add2
	goto Label_1813; // 0x724 Jump
}


func_761(var_1_bool, var_2_object, var_4_int)
{
	var_230_bool = 0; var_231_bool = 0; var_232_cvector = CVector(0,0,0); var_233_bool = 0; var_234_bool = 0; var_235_cvector = CVector(0,0,0); // 0x2f9 PushV
	var_1_bool = 0; // 0x2fa TMovI
	
Label_763:
	var_236_string = "all"; // 0x2fb PushS
	var_237_string = "attack_begin"; // 0x2fc PushS
	var_238_int = 1; // 0x2fd PushI
	var_239_int = var_1_bool + var_238_int; // 0x2fe Add
	var_240_int = var_237_string + var_239_int; // 0x2ff Add
	HasAnimation(var_233_bool, var_236_string, var_240_int); // 0x300 Func
	var_241_bool = var_233_bool == 0; // 0x302 Not
	if(var_241_bool == 0) goto Label_773; // 0x303 JumpB
	goto Label_776; // 0x304 Jump
	
Label_776:
	var_2_object = 0; // 0x308 TMovI
	
Label_777:
	var_242_string = "attack"; // 0x309 PushS
	var_243_int = 1; // 0x30a PushI
	var_244_int = var_2_object + var_243_int; // 0x30b Add
	var_245_int = var_242_string + var_244_int; // 0x30c Add
	IsExisting3DSound(var_234_bool, var_245_int); // 0x30d Func
	var_246_bool = var_234_bool == 0; // 0x30f Not
	if(var_246_bool == 0) goto Label_786; // 0x310 JumpB
	goto Label_789; // 0x311 Jump
	
Label_789:
	var_247_string = "all"; // 0x315 PushS
	var_248_string = "bjump"; // 0x316 PushS
	GetAnimationOffset(var_235_cvector, var_247_string, var_248_string); // 0x317 Func
	var_249_float = GetByIndex(var_235_cvector, 2); // 0x319 PushE
	var_4_int = -var_249_float; // 0x31a Neg2
	return 6; // 0x31b Return
	
Label_786:
	var_250_int = 1; // 0x312 PushI
	var_2_object = var_2_object + var_250_int; // 0x313 Add2
	goto Label_777; // 0x314 Jump
	
Label_773:
	var_251_int = 1; // 0x305 PushI
	var_1_bool = var_1_bool + var_251_int; // 0x306 Add2
	goto Label_763; // 0x307 Jump
}


func_1279(var_2_int)
{
	var_11_int = 1; // 0x4ff PushI
	KillTimer(var_11_int); // 0x500 Func
	var_12_int = var_2_int; // 0x502 PushT
	if(var_12_int == 0) goto Label_1288; // 0x503 JumpB
	var_2_int = 0; // 0x504 TMovB
	var_13_string = "head"; // 0x505 PushS
	UnlookAsync(var_13_string); // 0x506 Func
	
Label_1288:
	func_1445(var_10_object); // 0x509 NEW_2
	return 0; // 0x50b Return
}


func_260(var_78_string)
{
	RemoveRTEnvelope(); // 0x105 Func
	SetDeathState(); // 0x107 Func
	Stop(); // 0x109 Func
	StopAsync(); // 0x10b Func
	StopSecondaryAnimation(); // 0x10d Func
	var_79_string = ""; // 0x10f PushV
	var_79_string = var_78_string; // 0x110 Mov
	func_1893(var_79_string); // 0x111 NEW_2
	var_108_string = "all"; // 0x113 PushS
	PlayAnimation(var_108_string, var_78_string); // 0x114 Func
	WaitForAnimEnd(); // 0x116 Func
	var_109_string = "all"; // 0x118 PushS
	LockAnimationEnd(var_109_string, var_78_string); // 0x119 Func
	RemoveEnvelope(); // 0x11b Func
	return 0; // 0x11d Return
}


func_796(var_0_object, var_521_float, var_522_int)
{
	var_523_object = Obj(); var_524_float = 0; var_525_float = 0; var_526_object = Obj(); var_527_float = 0; var_528_float = 0; // 0x31c PushV
	var_529_float = 0.9; // 0x31d PushF
	var_530_float = var_521_float * var_529_float; // 0x31e Mult
	GetVictim(var_530_float, var_526_object); // 0x31f Func
	ReportAttack(var_0_object); // 0x321 Func
	var_531_bool = var_526_object == var_0_object; // 0x323 Eq
	if(var_531_bool == 0) goto Label_833; // 0x324 JumpB
	var_532_float = 0; var_533_object = Obj(); var_534_int = 0; // 0x325 PushV
	var_533_object = var_526_object; // 0x326 Mov
	var_534_int = var_522_int; // 0x327 Mov
	func_483(var_534_int); // 0x328 NEW_2
	var_527_float = var_532_float; // 0x329 Mov
	var_535_float = 0; var_536_object = Obj(); var_537_float = 0; var_538_int = 0; // 0x32b PushV
	var_536_object = var_526_object; // 0x32c Mov
	var_537_float = var_527_float; // 0x32d Mov
	var_539_int = 0; var_540_object = Obj(); var_541_int = 0; // 0x32e PushV
	var_540_object = var_526_object; // 0x32f Mov
	var_541_int = var_522_int; // 0x330 Mov
	func_486(var_541_int); // 0x331 NEW_2
	var_538_int = var_539_int; // 0x332 Mov
	func_1552(var_535_float, var_536_object, var_537_float, var_538_int); // 0x334 NEW_2
	var_528_float = var_535_float; // 0x335 Mov
	var_600_int = 0; // 0x337 PushV
	func_489(var_600_int); // 0x338 NEW_2
	ReportHit(var_0_object, var_600_int, var_528_float, var_527_float); // 0x33a Func
	var_601_object = Obj(); var_602_float = 0; // 0x33c PushV
	var_601_object = var_526_object; // 0x33d Mov
	var_602_float = var_528_float; // 0x33e Mov
	func_491(var_601_object, var_602_float); // 0x33f NEW_2
	
Label_833:
	return 6; // 0x341 Return
}


func_292(var_59_bool, var_60_object, var_82_bool, var_687_object)
{
	var_61_float = 0; var_62_float = 0; // 0x124 PushV
	var_63_bool = 0; var_64_object = Obj(); // 0x125 PushV
	var_64_object = var_60_object; // 0x126 Mov
	func_1697(var_63_bool, var_64_object); // 0x127 NEW_2
	var_65_bool = var_63_bool == 0; // 0x129 Not
	if(var_65_bool == 0) goto Label_301; // 0x12a JumpB
	var_59_bool = 0; // 0x12b MovB
	return 2; // 0x12c Return
	
Label_301:
	var_66_float = 0; var_67_object = Obj(); // 0x12d PushV
	var_67_object = var_60_object; // 0x12e Mov
	func_1505(var_67_object); // 0x12f NEW_2
	var_62_float = var_66_float; // 0x130 Mov
	var_74_bool = 0; var_75_float = 0; var_76_float = 0; var_77_float = 0; // 0x132 PushV
	var_75_float = var_62_float; // 0x133 Mov
	var_76_float = 250000.0; // 0x134 MovF
	var_77_float = 3240000.0; // 0x135 MovF
	func_1992(var_74_bool, var_75_float, var_76_float, var_77_float); // 0x136 NEW_2
	if(var_74_bool == 0) goto Label_321; // 0x138 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0x139 PushV
	var_81_object = var_60_object; // 0x13a Mov
	TaskCall(3); // 0x13b TaskCall
	func_329(var_62_float, var_82_bool, var_80_bool, var_81_object); // 0x13c NEW_2
	TaskReturn(); // 0x13d TaskReturn
	var_59_bool = var_82_bool; // 0x13e Mov
	return 2; // 0x140 Return
	
Label_321:
	var_685_bool = 0; var_686_object = Obj(); // 0x141 PushV
	var_686_object = var_60_object; // 0x142 Mov
	TaskCall(4); // 0x143 TaskCall
	func_455(var_685_bool, var_686_object); // 0x144 NEW_2
	TaskReturn(); // 0x145 TaskReturn
	var_59_bool = var_687_object; // 0x146 Mov
	return 2; // 0x148 Return
}


func_1321(var_0_object, var_1_bool, var_299_bool, var_300_object, var_301_float, var_302_float, var_303_bool, var_304_bool)
{
	var_305_bool = 0; var_306_bool = 0; var_307_object = Obj(); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_object = Obj(); var_313_bool = 0; var_314_bool = 0; var_315_object = Obj(); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_object = Obj(); // 0x529 PushV
	var_0_object = 0; // 0x52a TMovB
	var_1_bool = var_300_object; // 0x52b TMov
	var_314_bool = var_304_bool; // 0x52c Mov
	
Label_1325:
	var_321_bool = 0; var_322_object = Obj(); // 0x52d PushV
	var_322_object = var_300_object; // 0x52e Mov
	func_1461(var_321_bool, var_322_object); // 0x52f NEW_2
	var_325_bool = var_321_bool == 0; // 0x531 Not
	if(var_325_bool == 0) goto Label_1333; // 0x532 JumpB
	var_299_bool = 0; // 0x533 MovB
	return 16; // 0x534 Return
	
Label_1333:
	GetPosition(var_316_cvector); // 0x535 ObjFunc
	GetPosition(var_317_cvector); // 0x537 Func
	var_318_cvector = var_316_cvector - var_317_cvector; // 0x539 Sub2
	var_319_float = var_318_cvector | var_318_cvector; // 0x53a Or2
	var_326_bool = 0; // 0x53b PushV
	var_326_bool = 0; // 0x53c MovB
	var_327_int = 0; // 0x53d PushI
	var_328_bool = var_302_float > var_327_int; // 0x53e GT
	if(var_328_bool == 0) goto Label_1348; // 0x53f JumpB
	var_329_float = var_302_float * var_302_float; // 0x540 Mult
	var_330_bool = var_319_float > var_329_float; // 0x541 GT
	if(var_330_bool == 0) goto Label_1348; // 0x542 JumpB
	var_326_bool = 1; // 0x543 MovB
	
Label_1348:
	if(var_326_bool == 0) goto Label_1353; // 0x544 JumpB
	Stop(); // 0x545 Func
	var_299_bool = 0; // 0x547 MovB
	return 16; // 0x548 Return
	
Label_1353:
	var_331_float = var_301_float * var_301_float; // 0x549 Mult
	var_332_bool = var_319_float > var_331_float; // 0x54a GT
	if(var_332_bool == 0) goto Label_1415; // 0x54b JumpB
	GetPFPosition(var_316_cvector); // 0x54c ObjFunc
	FindPathTo(var_320_object, var_316_cvector); // 0x54e Func
	var_333_bool = var_320_object != 0; // 0x550 NullNeq
	if(var_333_bool == 0) goto Label_1364; // 0x551 JumpB
	var_315_object = var_320_object; // 0x552 Mov
	var_320_object = 0; // 0x553 SetNull
	
Label_1364:
	var_334_bool = var_315_object != 0; // 0x554 NullNeq
	if(var_334_bool == 0) goto Label_1397; // 0x555 JumpB
	var_335_bool = var_314_bool; // 0x556 Push
	if(var_335_bool == 0) goto Label_1374; // 0x557 JumpB
	var_314_bool = 0; // 0x558 MovB
	RotatePath(var_315_object, var_313_bool); // 0x559 Func
	var_336_bool = var_313_bool == 0; // 0x55b Not
	if(var_336_bool == 0) goto Label_1374; // 0x55c JumpB
	goto Label_1421; // 0x55d Jump
	
Label_1421:
	var_299_bool = !var_0_object; // 0x58d Not2
	return 16; // 0x58e Return
	
Label_1374:
	var_337_int = 0; // 0x55e PushI
	var_338_float = 0.3; // 0x55f PushF
	SetTimer(var_337_int, var_338_float); // 0x560 Func
	var_339_string = ""; // 0x562 PushV
	func_1468(var_339_string); // 0x563 NEW_2
	var_340_string = ""; // 0x565 PushV
	func_1470(var_340_string); // 0x566 NEW_2
	FollowPath(var_315_object, var_303_bool, var_313_bool, var_339_string, var_340_string); // 0x568 Func
	var_341_bool = var_313_bool == 0; // 0x56a Not
	if(var_341_bool == 0) goto Label_1395; // 0x56b JumpB
	var_342_object = var_0_object; // 0x56c PushT
	if(var_342_object == 0) goto Label_1393; // 0x56d JumpB
	var_315_object = 0; // 0x56e SetNull
	goto Label_1421; // 0x56f Jump
	
Label_1393:
	goto Label_1420; // 0x571 Jump
	
Label_1420:
	goto Label_1325; // 0x58c Jump
	
Label_1395:
	var_315_object = 0; // 0x573 SetNull
	goto Label_1413; // 0x574 Jump
	
Label_1413:
	var_320_object = 0; // 0x585 SetNull
	goto Label_1419; // 0x586 Jump
	
Label_1419:
	var_315_object = 0; // 0x58b SetNull
	
Label_1397:
	var_343_int = 0; // 0x575 PushI
	KillTimer(var_343_int); // 0x576 Func
	var_344_float = 0.5; // 0x578 PushF
	Sleep(var_344_float, var_313_bool); // 0x579 Func
	var_345_bool = var_313_bool == 0; // 0x57b Not
	if(var_345_bool == 0) goto Label_1409; // 0x57c JumpB
	var_346_object = var_0_object; // 0x57d PushT
	if(var_346_object == 0) goto Label_1409; // 0x57e JumpB
	var_315_object = 0; // 0x57f SetNull
	goto Label_1421; // 0x580 Jump
	
Label_1409:
	var_347_int = 0; // 0x581 PushI
	var_348_float = 0.3; // 0x582 PushF
	SetTimer(var_347_int, var_348_float); // 0x583 Func
	
Label_1415:
	var_349_int = 0; // 0x587 PushI
	KillTimer(var_349_int); // 0x588 Func
	goto Label_1421; // 0x58a Jump
}


func_1852(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x73c PushV
	GetScene(var_23_object); // 0x73d Func
	var_25_string = "scripted"; // 0x73f PushS
	var_26_string = "blood_dir.xml"; // 0x740 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x741 Func
	var_27_object = Obj(); // 0x743 PushV
	var_27_object = var_16_object; // 0x744 Mov
	func_1740(var_27_object); // 0x745 NEW_2
	return 4; // 0x747 Return
}


func_835(var_0_object, var_488_bool, var_489_float)
{
	var_490_int = 0; var_491_bool = 0; var_492_int = 0; var_493_string = ""; var_494_int = 0; var_495_bool = 0; var_496_int = 0; var_497_string = ""; // 0x343 PushV
	func_1176(var_497_string); // 0x345 NEW_2
	irand(var_494_int, var_497_string); // 0x347 Func
	var_498_int = 1; // 0x349 PushI
	var_494_int = var_494_int + var_498_int; // 0x34a Add2
	Face(var_0_object); // 0x34b Func
	var_499_bool = 1; // 0x34d PushB
	SetAttackState(var_499_bool); // 0x34e Func
	func_2071(); // 0x351 NEW_2
	var_500_string = "all"; // 0x353 PushS
	var_501_string = "attack_begin"; // 0x354 PushS
	var_502_int = var_501_string + var_494_int; // 0x355 Add
	PlayAnimation(var_500_string, var_502_int); // 0x356 Func
	WaitForAnimEnd(); // 0x358 Func
	func_1144(var_496_int, var_497_string); // 0x35b NEW_2
	var_518_bool = 0; var_519_object = Obj(); // 0x35d PushV
	var_519_object = var_0_object; // 0x35e MovT
	func_1697(var_518_bool, var_519_object); // 0x35f NEW_2
	var_520_bool = var_518_bool == 0; // 0x361 Not
	if(var_520_bool == 0) goto Label_871; // 0x362 JumpB
	StopAsync(); // 0x363 Func
	var_488_bool = 0; // 0x365 MovB
	return 8; // 0x366 Return
	
Label_871:
	var_521_float = 0; var_522_int = 0; // 0x367 PushV
	var_521_float = var_489_float; // 0x368 Mov
	var_522_int = var_494_int; // 0x369 Mov
	func_796(var_497_string, var_521_float, var_522_int); // 0x36a NEW_2
	var_624_string = "all"; // 0x36c PushS
	var_625_string = "attack_middle"; // 0x36d PushS
	var_626_int = var_625_string + var_494_int; // 0x36e Add
	HasAnimation(var_495_bool, var_624_string, var_626_int); // 0x36f Func
	var_627_bool = var_495_bool; // 0x371 Push
	if(var_627_bool == 0) goto Label_952; // 0x372 JumpB
	func_2071(); // 0x374 NEW_2
	var_628_string = "all"; // 0x376 PushS
	var_629_string = "attack_middle"; // 0x377 PushS
	var_630_int = var_629_string + var_494_int; // 0x378 Add
	PlayAnimation(var_628_string, var_630_int); // 0x379 Func
	WaitForAnimEnd(); // 0x37b Func
	func_1176(var_497_string); // 0x37e NEW_2
	var_631_bool = 0; var_632_object = Obj(); // 0x380 PushV
	var_632_object = var_0_object; // 0x381 MovT
	func_1697(var_631_bool, var_632_object); // 0x382 NEW_2
	var_633_bool = var_631_bool == 0; // 0x384 Not
	if(var_633_bool == 0) goto Label_906; // 0x385 JumpB
	StopAsync(); // 0x386 Func
	var_488_bool = 0; // 0x388 MovB
	return 8; // 0x389 Return
	
Label_906:
	var_634_float = 0; var_635_int = 0; // 0x38a PushV
	var_634_float = var_489_float; // 0x38b Mov
	var_635_int = var_494_int; // 0x38c Mov
	func_796(var_497_string, var_634_float, var_635_int); // 0x38d NEW_2
	var_496_int = 1; // 0x38f MovI
	
Label_912:
	var_636_string = "attack_middle"; // 0x390 PushS
	var_637_int = var_636_string + var_494_int; // 0x391 Add
	var_638_string = "_"; // 0x392 PushS
	var_639_int = var_637_int + var_638_string; // 0x393 Add
	var_497_string = var_639_int + var_496_int; // 0x394 Add2
	var_640_string = "all"; // 0x395 PushS
	HasAnimation(var_495_bool, var_640_string, var_497_string); // 0x396 Func
	var_641_bool = var_495_bool == 0; // 0x398 Not
	if(var_641_bool == 0) goto Label_923; // 0x399 JumpB
	goto Label_952; // 0x39a Jump
	
Label_952:
	var_642_bool = 0; // 0x3b8 PushB
	SetAttackState(var_642_bool); // 0x3b9 Func
	var_643_string = "all"; // 0x3bb PushS
	var_644_string = "attack_end"; // 0x3bc PushS
	var_645_int = var_644_string + var_494_int; // 0x3bd Add
	PlayAnimation(var_643_string, var_645_int); // 0x3be Func
	var_646_bool = 0; // 0x3c0 PushV
	func_1186(var_646_bool); // 0x3c1 NEW_2
	if(var_646_bool == 0) goto Label_970; // 0x3c3 JumpB
	var_647_bool = 0; var_648_float = 0; // 0x3c4 PushV
	var_648_float = 0.45; // 0x3c5 MovF
	func_974(var_647_bool, var_648_float); // 0x3c6 NEW_2
	StopAsync(); // 0x3c8 Func
	
Label_970:
	var_488_bool = 1; // 0x3ca MovB
	return 8; // 0x3cb Return
	
Label_923:
	func_2071(); // 0x39c NEW_2
	var_656_string = "all"; // 0x39e PushS
	PlayAnimation(var_656_string, var_497_string); // 0x39f Func
	WaitForAnimEnd(); // 0x3a1 Func
	func_1176(var_497_string); // 0x3a4 NEW_2
	var_657_bool = 0; var_658_object = Obj(); // 0x3a6 PushV
	var_658_object = var_0_object; // 0x3a7 MovT
	func_1697(var_657_bool, var_658_object); // 0x3a8 NEW_2
	var_659_bool = var_657_bool == 0; // 0x3aa Not
	if(var_659_bool == 0) goto Label_944; // 0x3ab JumpB
	StopAsync(); // 0x3ac Func
	var_488_bool = 0; // 0x3ae MovB
	return 8; // 0x3af Return
	
Label_944:
	var_660_float = 0; var_661_int = 0; // 0x3b0 PushV
	var_660_float = var_489_float; // 0x3b1 Mov
	var_661_int = var_494_int; // 0x3b2 Mov
	func_796(var_497_string, var_660_float, var_661_int); // 0x3b3 NEW_2
	var_662_int = 1; // 0x3b5 PushI
	var_496_int = var_496_int + var_662_int; // 0x3b6 Add2
	goto Label_912; // 0x3b7 Jump
}


func_329(var_0_object, var_80_bool, var_81_object, var_198_object)
{
	var_83_object = Obj(); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_object = Obj(); var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_object = Obj(); var_94_cvector = CVector(0,0,0); var_95_float = 0; var_96_cvector = CVector(0,0,0); // 0x149 PushV
	var_97_object = Obj(); // 0x14a PushV
	var_97_object = var_81_object; // 0x14b Mov
	func_2062(var_97_object); // 0x14c NEW_2
	var_0_object = 0; // 0x14e TMovB
	var_102_bool = 0; var_103_object = Obj(); // 0x14f PushV
	var_103_object = var_81_object; // 0x150 Mov
	func_1731(var_103_object); // 0x151 NEW_2
	var_116_bool = 0; var_117_object = Obj(); // 0x153 PushV
	var_117_object = var_81_object; // 0x154 Mov
	func_1697(var_116_bool, var_117_object); // 0x155 NEW_2
	var_118_bool = var_116_bool == 0; // 0x157 Not
	if(var_118_bool == 0) goto Label_347; // 0x158 JumpB
	var_80_bool = 0; // 0x159 MovB
	return 14; // 0x15a Return
	
Label_347:
	func_2071(); // 0x15c NEW_2
	Face(var_81_object); // 0x15e Func
	var_123_string = "all"; // 0x160 PushS
	var_124_string = "aattack_begin1"; // 0x161 PushS
	PlayAnimation(var_123_string, var_124_string); // 0x162 Func
	WaitForAnimEnd(); // 0x164 Func
	var_125_bool = 0; var_126_object = Obj(); // 0x166 PushV
	var_126_object = var_81_object; // 0x167 Mov
	func_1697(var_125_bool, var_126_object); // 0x168 NEW_2
	var_127_bool = var_125_bool == 0; // 0x16a Not
	if(var_127_bool == 0) goto Label_368; // 0x16b JumpB
	StopAsync(); // 0x16c Func
	var_80_bool = 0; // 0x16e MovB
	return 14; // 0x16f Return
	
Label_368:
	var_128_string = "all"; // 0x170 PushS
	var_129_string = "aattack_end1"; // 0x171 PushS
	PlayAnimation(var_128_string, var_129_string); // 0x172 Func
	GetScene(var_90_object); // 0x174 Func
	var_130_string = "knife"; // 0x176 PushS
	GetGeometryLocator(var_130_string, var_92_bool, var_91_cvector); // 0x177 Func
	var_131_string = "scripted"; // 0x179 PushS
	var_132_cvector = CVector(0.0, 0.0, 1.0); // 0x17a PushVec
	var_133_string = "grabitel_knife.xml"; // 0x17b PushS
	AddActorByType(var_93_object, var_131_string, var_90_object, var_91_cvector, var_132_cvector, var_133_string); // 0x17c Func
	var_134_string = "Owner"; // 0x17e PushS
	var_135_object = Obj(); // 0x17f PushV
	func_1934(var_135_object); // 0x180 NEW_2
	SetScriptProperty(var_134_string, var_135_object); // 0x182 ObjFunc
	var_136_string = "Target"; // 0x184 PushS
	SetScriptProperty(var_136_string, var_81_object); // 0x185 ObjFunc
	GetPosition(var_94_cvector); // 0x187 ObjFunc
	GetEyesHeight(var_95_float); // 0x189 ObjFunc
	var_137_float = GetByIndex(var_94_cvector, 1); // 0x18b PushE
	var_138_int = 10; // 0x18c PushI
	var_139_int = var_95_float - var_138_int; // 0x18d Sub
	var_137_float = var_137_float + var_139_int; // 0x18e Add2
	SetByIndex(var_94_cvector, 1) = var_137_float; // 0x18f PopE
	var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_float = 0; // 0x190 PushV
	var_141_cvector = var_91_cvector; // 0x191 Mov
	var_142_cvector = var_94_cvector; // 0x192 Mov
	var_143_float = 2000.0; // 0x193 MovF
	func_2205(var_140_cvector, var_141_cvector, var_142_cvector, var_143_float); // 0x194 NEW_2
	var_96_cvector = var_140_cvector; // 0x195 Mov
	var_191_string = "StartDirection"; // 0x197 PushS
	SetScriptProperty(var_191_string, var_96_cvector); // 0x198 ObjFunc
	WaitForAnimEnd(); // 0x19a Func
	StopAsync(); // 0x19c Func
	var_192_object = var_0_object; // 0x19e PushT
	if(var_192_object == 0) goto Label_418; // 0x19f JumpB
	var_80_bool = 1; // 0x1a0 MovB
	return 14; // 0x1a1 Return
	
Label_418:
	var_193_bool = 0; var_194_object = Obj(); // 0x1a2 PushV
	var_194_object = var_81_object; // 0x1a3 Mov
	func_1697(var_193_bool, var_194_object); // 0x1a4 NEW_2
	var_195_bool = var_193_bool == 0; // 0x1a6 Not
	if(var_195_bool == 0) goto Label_426; // 0x1a7 JumpB
	var_80_bool = 0; // 0x1a8 MovB
	return 14; // 0x1a9 Return
	
Label_426:
	var_196_bool = 0; var_197_object = Obj(); // 0x1aa PushV
	var_197_object = var_81_object; // 0x1ab Mov
	TaskCall(4); // 0x1ac TaskCall
	func_455(var_196_bool, var_197_object); // 0x1ad NEW_2
	TaskReturn(); // 0x1ae TaskReturn
	var_80_bool = var_198_object; // 0x1af Mov
	return 14; // 0x1b1 Return
}


func_1866()
{
	var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); // 0x74a PushV
	GetPosition(var_377_cvector); // 0x74b ObjFunc
	GetPosition(var_378_cvector); // 0x74d Func
	var_379_cvector = var_377_cvector - var_378_cvector; // 0x74f Sub2
	var_380_float = GetByIndex(var_379_cvector, 0); // 0x750 PushE
	var_381_float = GetByIndex(var_379_cvector, 2); // 0x751 PushE
	RotateAsync(var_380_float, var_381_float); // 0x752 Func
	return 6; // 0x754 Return
}


func_1877(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0x755 PushV
	IsLoaded(var_27_bool); // 0x756 Func
	var_25_bool = var_27_bool; // 0x758 Mov
	return 2; // 0x759 Return
}


func_1882(var_14_object)
{
	var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); // 0x75a PushV
	GetEyesHeight(var_17_float); // 0x75b ObjFunc
	var_18_cvector = CVector(0.0, 0.0, 0.0); // 0x75d MovV
	var_19_float = GetByIndex(var_18_cvector, 1); // 0x75e PushE
	var_19_float = var_17_float; // 0x75f Mov
	SetByIndex(var_18_cvector, 1) = var_19_float; // 0x760 PopE
	var_20_string = "head"; // 0x761 PushS
	LookAsync(var_14_object, var_20_string, var_18_cvector); // 0x762 Func
	return 4; // 0x764 Return
}


func_1893(var_79_string)
{
	var_80_bool = 0; var_81_int = 0; var_82_bool = 0; var_83_int = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_int = 0; var_90_bool = 0; var_91_int = 0; var_92_bool = 0; var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); // 0x765 PushV
	IsExisting3DSound(var_88_bool, var_79_string); // 0x766 Func
	var_96_bool = var_88_bool == 0; // 0x768 Not
	if(var_96_bool == 0) goto Label_1918; // 0x769 JumpB
	var_89_int = 0; // 0x76a MovI
	
Label_1899:
	var_97_int = 1; // 0x76b PushI
	var_98_int = var_89_int + var_97_int; // 0x76c Add
	var_99_int = var_79_string + var_98_int; // 0x76d Add
	IsExisting3DSound(var_90_bool, var_99_int); // 0x76e Func
	var_100_bool = var_90_bool == 0; // 0x770 Not
	if(var_100_bool == 0) goto Label_1907; // 0x771 JumpB
	goto Label_1910; // 0x772 Jump
	
Label_1910:
	var_101_bool = var_89_int == 0; // 0x776 Not
	if(var_101_bool == 0) goto Label_1913; // 0x777 JumpB
	return 16; // 0x778 Return
	
Label_1913:
	irand(var_91_int, var_89_int); // 0x779 Func
	var_102_int = 1; // 0x77b PushI
	var_103_int = var_91_int + var_102_int; // 0x77c Add
	var_79_string = var_79_string + var_103_int; // 0x77d Add2
	
Label_1918:
	Is3DSoundLoaded(var_92_bool, var_79_string); // 0x77e Func
	var_104_bool = var_92_bool; // 0x780 Push
	if(var_104_bool == 0) goto Label_1933; // 0x781 JumpB
	GetEyesHeight(var_93_float); // 0x782 Func
	GetDirection(var_94_cvector); // 0x784 Func
	var_105_int = 50; // 0x786 PushI
	var_95_cvector = var_94_cvector * var_105_int; // 0x787 Mult2
	var_106_float = GetByIndex(var_95_cvector, 1); // 0x788 PushE
	var_106_float = var_106_float + var_93_float; // 0x789 Add2
	SetByIndex(var_95_cvector, 1) = var_106_float; // 0x78a PopE
	PlayGlobalSound(var_79_string, var_95_cvector); // 0x78b Func
	
Label_1933:
	return 16; // 0x78d Return
	
Label_1907:
	var_107_int = 1; // 0x773 PushI
	var_89_int = var_89_int + var_107_int; // 0x774 Add2
	goto Label_1899; // 0x775 Jump
}


func_1934(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x78e PushV
	self(var_57_object); // 0x78f Func
	var_55_object = var_57_object; // 0x791 Mov
	return 2; // 0x792 Return
}


func_1423(var_0_bool, var_1_object, var_18_int)
{
	var_19_int = 0; // 0x590 PushI
	var_20_bool = var_18_int != var_19_int; // 0x591 Neq
	if(var_20_bool == 0) goto Label_1428; // 0x592 JumpB
	return 0; // 0x593 Return
	
Label_1428:
	var_21_bool = 0; var_22_object = Obj(); // 0x594 PushV
	var_22_object = var_1_object; // 0x595 MovT
	func_1461(var_21_bool, var_22_object); // 0x596 NEW_2
	var_57_bool = var_21_bool == 0; // 0x598 Not
	if(var_57_bool == 0) goto Label_1435; // 0x599 JumpB
	var_0_bool = 1; // 0x59a TMovB
	
Label_1435:
	var_58_int = 0; // 0x59b PushI
	KillTimer(var_58_int); // 0x59c Func
	Stop(); // 0x59e Func
	return 0; // 0x5a0 Return
}


func_1940(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x794 PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x795 Or
	var_51_float = sqrt(var_52_int); // 0x796 Sqrt2
	var_53_float = 0.0; // 0x797 PushF
	var_54_bool = var_51_float < var_53_float; // 0x798 LT
	if(var_54_bool == 0) goto Label_1948; // 0x799 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x79a MovV
	return 2; // 0x79b Return
	
Label_1948:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x79c Div2
	return 2; // 0x79d Return
}


func_1950(var_573_float, var_574_float, var_575_float)
{
	var_578_bool = var_574_float < var_575_float; // 0x79f LT
	if(var_578_bool == 0) goto Label_1955; // 0x7a0 JumpB
	var_573_float = var_574_float; // 0x7a1 Mov
	goto Label_1956; // 0x7a2 Jump
	
Label_1956:
	return 0; // 0x7a4 Return
	
Label_1955:
	var_573_float = var_575_float; // 0x7a3 Mov
}


func_1445(var_0_bool)
{
	var_0_bool = 1; // 0x5a5 TMovB
	var_14_int = 0; // 0x5a6 PushI
	KillTimer(var_14_int); // 0x5a7 Func
	Stop(); // 0x5a9 Func
	return 0; // 0x5ab Return
}


func_1957(var_160_float, var_161_float, var_162_float, var_163_float)
{
	var_164_float = var_162_float * var_162_float; // 0x7a6 Mult
	var_165_int = 4; // 0x7a7 PushI
	var_166_float = var_165_int * var_161_float; // 0x7a8 Mult
	var_167_float = var_166_float * var_163_float; // 0x7a9 Mult
	var_160_float = var_164_float - var_167_float; // 0x7aa Sub2
	return 0; // 0x7ab Return
}


func_1964(var_174_float, var_175_float, var_176_float, var_178_float)
{
	var_179_float = 0; var_180_float = 0; // 0x7ac PushV
	var_181_int = -var_176_float; // 0x7ad Neg
	var_182_int = var_181_int - var_178_float; // 0x7ae Sub
	var_183_int = 2; // 0x7af PushI
	var_184_float = var_183_int * var_175_float; // 0x7b0 Mult
	var_180_float = var_182_int / var_182_int; // 0x7b1 Div2
	var_185_int = 0; // 0x7b2 PushI
	var_186_bool = var_180_float > var_185_int; // 0x7b3 GT
	if(var_186_bool == 0) goto Label_1975; // 0x7b4 JumpB
	var_174_float = var_180_float; // 0x7b5 Mov
	return 2; // 0x7b6 Return
	
Label_1975:
	var_187_int = -var_176_float; // 0x7b7 Neg
	var_188_int = var_187_int + var_178_float; // 0x7b8 Add
	var_189_int = 2; // 0x7b9 PushI
	var_190_float = var_189_int * var_175_float; // 0x7ba Mult
	var_174_float = var_188_int / var_188_int; // 0x7bb Div2
	return 2; // 0x7bc Return
}


func_1461(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x5b6 PushV
	var_24_object = var_22_object; // 0x5b7 Mov
	func_1697(var_23_bool, var_24_object); // 0x5b8 NEW_2
	var_21_bool = var_23_bool; // 0x5b9 Mov
	return 0; // 0x5bb Return
}


func_1468(var_339_string)
{
	var_339_string = "walk"; // 0x5bc MovS
	return 0; // 0x5bd Return
}


func_1981(var_46_float, var_47_float, var_48_float, var_49_float)
{
	var_50_bool = var_47_float < var_48_float; // 0x7be LT
	if(var_50_bool == 0) goto Label_1986; // 0x7bf JumpB
	var_46_float = var_48_float; // 0x7c0 Mov
	return 0; // 0x7c1 Return
	
Label_1986:
	var_51_bool = var_47_float > var_49_float; // 0x7c2 GT
	if(var_51_bool == 0) goto Label_1990; // 0x7c3 JumpB
	var_46_float = var_49_float; // 0x7c4 Mov
	return 0; // 0x7c5 Return
	
Label_1990:
	var_46_float = var_47_float; // 0x7c6 Mov
	return 0; // 0x7c7 Return
}


func_1470(var_340_string)
{
	var_340_string = "run"; // 0x5be MovS
	return 0; // 0x5bf Return
}


func_1472(var_58_object)
{
	
Label_1473:
	var_59_bool = 0; var_60_object = Obj(); // 0x5c1 PushV
	var_60_object = var_58_object; // 0x5c2 Mov
	TaskCall(2); // 0x5c3 TaskCall
	func_292(var_54_object, var_58_object, var_59_bool, var_60_object); // 0x5c4 NEW_2
	TaskReturn(); // 0x5c5 TaskReturn
	var_693_int = 1; // 0x5c7 PushI
	Sleep(var_693_int); // 0x5c8 Func
	goto Label_1473; // 0x5ca Jump
}


func_455(var_196_bool, var_197_object)
{
	var_204_bool = GlobalVars[0]; // 0x1c8 PushGE
	var_204_bool = 0; // 0x1c9 MovB
	GlobalVars[0] = var_204_bool; // 0x1ca PopGE
	var_205_object = Obj(); var_206_bool = 0; var_207_float = 0; // 0x1cb PushV
	var_205_object = var_197_object; // 0x1cc Mov
	var_206_bool = 1; // 0x1cd MovB
	var_207_float = 200.0; // 0x1ce MovF
	func_532(var_201_bool, var_202_float, var_203_int, var_196_bool, var_197_object, var_205_object, var_206_bool, var_207_float); // 0x1cf NEW_2
	var_679_bool = 0; // 0x1d1 PushV
	var_679_bool = 0; // 0x1d2 MovB
	var_680_bool = GlobalVars[0]; // 0x1d3 PushGE
	if(var_680_bool == 0) goto Label_472; // 0x1d4 JumpB
	var_681_int = var_3_int; // 0x1d5 PushT
	if(var_681_int == 0) goto Label_472; // 0x1d6 JumpB
	var_679_bool = 1; // 0x1d7 MovB
	
Label_472:
	if(var_679_bool == 0) goto Label_479; // 0x1d8 JumpB
	var_682_string = "all"; // 0x1d9 PushS
	var_683_string = "attack_off"; // 0x1da PushS
	PlayAnimation(var_682_string, var_683_string); // 0x1db Func
	WaitForAnimEnd(); // 0x1dd Func
	
Label_479:
	var_684_bool = GlobalVars[0]; // 0x1df PushGE
	var_196_bool = var_684_bool; // 0x1e0 Mov
	return 0; // 0x1e2 Return
}


func_1992(var_74_bool, var_75_float, var_76_float, var_77_float)
{
	var_74_bool = 0; // 0x7c9 MovB
	var_78_bool = var_75_float >= var_76_float; // 0x7ca GE
	if(var_78_bool == 0) goto Label_1999; // 0x7cb JumpB
	var_79_bool = var_75_float <= var_77_float; // 0x7cc LE
	if(var_79_bool == 0) goto Label_1999; // 0x7cd JumpB
	var_74_bool = 1; // 0x7ce MovB
	
Label_1999:
	return 0; // 0x7cf Return
}


func_972(var_3_int)
{
	var_3_int = 1; // 0x3cc TMovB
	return 0; // 0x3cd Return
}


func_1484(var_563_string, var_564_int)
{
	var_565_int = 2; // 0x5cd PushI
	var_566_bool = var_564_int == var_565_int; // 0x5ce Eq
	if(var_566_bool == 0) goto Label_1491; // 0x5cf JumpB
	var_563_string = "fire"; // 0x5d0 MovS
	return 0; // 0x5d1 Return
	
Label_1491:
	var_567_int = 1; // 0x5d3 PushI
	var_568_bool = var_564_int == var_567_int; // 0x5d4 Eq
	if(var_568_bool == 0) goto Label_1496; // 0x5d5 JumpB
	var_563_string = "bullet"; // 0x5d6 MovS
	return 0; // 0x5d7 Return
	
Label_1496:
	var_563_string = "phys"; // 0x5d8 MovS
	return 0; // 0x5d9 Return
}


func_974(var_647_bool, var_648_float)
{
	var_649_float = 0; var_650_bool = 0; var_651_float = 0; var_652_bool = 0; // 0x3ce PushV
	rand(var_651_float); // 0x3cf Func
	var_653_bool = var_651_float < var_648_float; // 0x3d1 LT
	if(var_653_bool == 0) goto Label_994; // 0x3d2 JumpB
	
Label_979:
	IsAnimationPlaying(var_652_bool); // 0x3d3 Func
	var_654_bool = var_652_bool == 0; // 0x3d5 Not
	if(var_654_bool == 0) goto Label_984; // 0x3d6 JumpB
	goto Label_993; // 0x3d7 Jump
	
Label_993:
	goto Label_999; // 0x3e1 Jump
	
Label_999:
	var_647_bool = 0; // 0x3e7 MovB
	return 4; // 0x3e8 Return
	
Label_984:
	var_655_bool = 0; // 0x3d8 PushV
	func_1072(var_655_bool); // 0x3d9 NEW_2
	if(var_655_bool == 0) goto Label_990; // 0x3db JumpB
	var_647_bool = 1; // 0x3dc MovB
	return 4; // 0x3dd Return
	
Label_990:
	sync(); // 0x3de Func
	goto Label_979; // 0x3e0 Jump
	
Label_994:
	WaitForAnimEnd(); // 0x3e2 Func
	func_1176(var_652_bool); // 0x3e5 NEW_2
}


func_2000(var_17_bool, var_18_object, var_19_float)
{
	var_20_bool = var_18_object == 0; // 0x7d1 Not
	if(var_20_bool == 0) goto Label_2005; // 0x7d2 JumpB
	var_17_bool = 0; // 0x7d3 MovB
	return 0; // 0x7d4 Return
	
Label_2005:
	var_21_int = 0; // 0x7d5 PushI
	var_22_bool = var_19_float > var_21_int; // 0x7d6 GT
	if(var_22_bool == 0) goto Label_2012; // 0x7d7 JumpB
	var_23_int = 8; // 0x7d8 PushI
	SendWorldWndMessage(var_23_int); // 0x7d9 Func
	goto Label_2021; // 0x7db Jump
	
Label_2021:
	var_24_float = 0; // 0x7e5 PushV
	var_24_float = var_19_float; // 0x7e6 Mov
	func_2052(var_24_float); // 0x7e7 NEW_2
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; var_31_float = 0; var_32_float = 0; var_33_float = 0; // 0x7e9 PushV
	var_29_object = var_18_object; // 0x7ea Mov
	var_30_string = "reputation"; // 0x7eb MovS
	var_31_float = var_19_float; // 0x7ec Mov
	var_32_float = 0; // 0x7ed MovI
	var_33_float = 1; // 0x7ee MovI
	func_1530(var_28_bool, var_29_object, var_30_string, var_31_float, var_32_float, var_33_float); // 0x7ef NEW_2
	var_17_bool = 1; // 0x7f1 MovB
	return 0; // 0x7f2 Return
	
Label_2012:
	var_52_int = 0; // 0x7dc PushI
	var_53_bool = var_19_float < var_52_int; // 0x7dd LT
	if(var_53_bool == 0) goto Label_2019; // 0x7de JumpB
	var_54_int = 9; // 0x7df PushI
	SendWorldWndMessage(var_54_int); // 0x7e0 Func
	goto Label_2021; // 0x7e2 Jump
	
Label_2019:
	var_17_bool = 0; // 0x7e3 MovB
	return 0; // 0x7e4 Return
}


func_1498(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x5da PushV
	GetPosition(var_48_cvector); // 0x5db Func
	GetPosition(var_49_cvector); // 0x5dd ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x5df Sub2
	return 4; // 0x5e0 Return
}


func_1505(var_66_float)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x5e1 PushV
	GetPosition(var_71_cvector); // 0x5e2 Func
	GetPosition(var_72_cvector); // 0x5e4 ObjFunc
	var_73_cvector = var_72_cvector - var_71_cvector; // 0x5e6 Sub2
	var_66_float = var_73_cvector | var_73_cvector; // 0x5e7 Or2
	return 6; // 0x5e8 Return
}


func_483(var_532_float)
{
	var_532_float = 0.15; // 0x1e4 MovF
	return 0; // 0x1e5 Return
}


func_486(var_539_int)
{
	var_539_int = 0; // 0x1e7 MovI
	return 0; // 0x1e8 Return
}


func_1513(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x5e9 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x5ea Func
	var_13_bool = var_16_bool; // 0x5ec Mov
	return 2; // 0x5ed Return
}


func_1001(var_0_object, var_427_bool, var_428_float)
{
	var_429_bool = 0; var_430_cvector = CVector(0,0,0); var_431_cvector = CVector(0,0,0); var_432_cvector = CVector(0,0,0); var_433_float = 0; var_434_bool = 0; var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_cvector = CVector(0,0,0); var_438_float = 0; // 0x3e9 PushV
	
Label_1002:
	IsAnimationPlaying(var_434_bool); // 0x3ea Func
	var_439_bool = var_434_bool == 0; // 0x3ec Not
	if(var_439_bool == 0) goto Label_1007; // 0x3ed JumpB
	goto Label_1039; // 0x3ee Jump
	
Label_1039:
	func_1176(var_438_float); // 0x410 NEW_2
	var_427_bool = 0; // 0x412 MovB
	return 10; // 0x413 Return
	
Label_1007:
	var_440_bool = 0; // 0x3ef PushV
	func_1072(var_440_bool); // 0x3f0 NEW_2
	if(var_440_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_427_bool = 1; // 0x3f3 MovB
	return 10; // 0x3f4 Return
	
Label_1013:
	var_483_bool = 0; var_484_object = Obj(); // 0x3f5 PushV
	var_484_object = var_0_object; // 0x3f6 MovT
	func_1697(var_483_bool, var_484_object); // 0x3f7 NEW_2
	var_485_bool = var_483_bool == 0; // 0x3f9 Not
	if(var_485_bool == 0) goto Label_1021; // 0x3fa JumpB
	var_427_bool = 0; // 0x3fb MovB
	return 10; // 0x3fc Return
	
Label_1021:
	GetPFPosition(var_435_cvector); // 0x3fd TObjFunc
	GetPFPosition(var_436_cvector); // 0x3ff Func
	var_437_cvector = var_435_cvector - var_436_cvector; // 0x401 Sub2
	var_438_float = var_437_cvector | var_437_cvector; // 0x402 Or2
	var_486_float = var_428_float * var_428_float; // 0x403 Mult
	var_487_bool = var_438_float < var_486_float; // 0x404 LT
	if(var_487_bool == 0) goto Label_1036; // 0x405 JumpB
	var_488_bool = 0; var_489_float = 0; // 0x406 PushV
	var_489_float = var_428_float; // 0x407 Mov
	func_835(var_438_float, var_488_bool, var_489_float); // 0x408 NEW_2
	var_427_bool = 1; // 0x40a MovB
	return 10; // 0x40b Return
	
Label_1036:
	sync(); // 0x40c Func
	goto Label_1002; // 0x40e Jump
}


func_489(var_600_int)
{
	var_600_int = 1; // 0x1e9 MovI
	return 0; // 0x1ea Return
}


func_491(var_601_object, var_602_float)
{
	var_603_bool = 0; // 0x1ec PushV
	var_603_bool = 0; // 0x1ed MovB
	var_604_int = 0; // 0x1ee PushI
	var_605_bool = var_602_float > var_604_int; // 0x1ef GT
	if(var_605_bool == 0) goto Label_503; // 0x1f0 JumpB
	var_606_bool = 0; var_607_object = Obj(); // 0x1f1 PushV
	var_607_object = var_601_object; // 0x1f2 Mov
	func_1625(var_606_bool, var_607_object); // 0x1f3 NEW_2
	if(var_606_bool == 0) goto Label_503; // 0x1f5 JumpB
	var_603_bool = 1; // 0x1f6 MovB
	
Label_503:
	if(var_603_bool == 0) goto Label_510; // 0x1f7 JumpB
	var_623_bool = GlobalVars[0]; // 0x1f8 PushGE
	var_623_bool = 1; // 0x1f9 MovB
	GlobalVars[0] = var_623_bool; // 0x1fa PopGE
	func_972(var_602_float); // 0x1fc NEW_2
	
Label_510:
	return 0; // 0x1fe Return
}


func_1518(var_36_bool, var_37_object, var_38_string)
{
	var_39_bool = 0; var_40_bool = 0; // 0x5ee PushV
	var_41_string = "HasProperty"; // 0x5ef PushS
	var_42_int = 2; // 0x5f0 PushI
	var_43_bool = IsFuncExist(var_37_object, var_41_string, var_42_int); // 0x5f1 FuncExist
	var_44_bool = var_43_bool == 0; // 0x5f2 Not
	if(var_44_bool == 0) goto Label_1526; // 0x5f3 JumpB
	var_36_bool = 0; // 0x5f4 MovB
	return 2; // 0x5f5 Return
	
Label_1526:
	HasProperty(var_38_string, var_40_bool); // 0x5f6 ObjFunc
	var_36_bool = var_40_bool; // 0x5f8 Mov
	return 2; // 0x5f9 Return
}


func_2035(var_591_float)
{
	var_592_object = Obj(); var_593_object = Obj(); // 0x7f3 PushV
	CreateFloatVector(var_593_object); // 0x7f4 Func
	add(var_591_float); // 0x7f6 ObjFunc
	var_594_int = 0; // 0x7f8 PushI
	var_595_bool = var_591_float < var_594_int; // 0x7f9 LT
	if(var_595_bool == 0) goto Label_2047; // 0x7fa JumpB
	var_596_float = 0.7; // 0x7fb PushF
	var_597_int = 500; // 0x7fc PushI
	RumblePlay(var_596_float, var_597_int); // 0x7fd Func
	
Label_2047:
	var_598_int = 15; // 0x7ff PushI
	SendWorldWndMessage(var_598_int, var_593_object); // 0x800 Func
	return 2; // 0x802 Return
}


func_1530(var_28_bool, var_29_object, var_30_string, var_31_float, var_32_float, var_33_float)
{
	var_34_float = 0; var_35_float = 0; // 0x5fa PushV
	var_36_bool = 0; var_37_object = Obj(); var_38_string = ""; // 0x5fb PushV
	var_37_object = var_29_object; // 0x5fc Mov
	var_38_string = var_30_string; // 0x5fd Mov
	func_1518(var_36_bool, var_37_object, var_38_string); // 0x5fe NEW_2
	var_45_bool = var_36_bool == 0; // 0x600 Not
	if(var_45_bool == 0) goto Label_1540; // 0x601 JumpB
	var_28_bool = 0; // 0x602 MovB
	return 2; // 0x603 Return
	
Label_1540:
	GetProperty(var_30_string, var_35_float); // 0x604 ObjFunc
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0x606 PushV
	var_47_float = var_35_float + var_31_float; // 0x607 Add2
	var_48_float = var_32_float; // 0x608 Mov
	var_49_float = var_33_float; // 0x609 Mov
	func_1981(var_46_float, var_47_float, var_48_float, var_49_float); // 0x60a NEW_2
	SetProperty(var_30_string, var_46_float); // 0x60c ObjFunc
	var_28_bool = 1; // 0x60e MovB
	return 2; // 0x60f Return
}


