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
	var_11_bool = 0; var_12_bool = 0; // 0xa6 PushV
	IsOverrideActive(var_12_bool); // 0xa7 Func
	var_13_bool = var_12_bool == 0; // 0xa9 Not
	if(var_13_bool == 0) goto Label_175; // 0xaa JumpB
	var_14_object = Obj(); // 0xab PushV
	var_14_object = var_10_bool; // 0xac Mov
	func_2176(var_14_object); // 0xad NEW_2
	
Label_175:
	return 2; // 0xaf Return
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	return 0; // 0x126 Return
}


task_1_event_16(var_0_object, var_1_string, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	return 0; // 0x128 Return
}


task_1_event_41(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	return 0; // 0x12a Return
}


task_3_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x1bc PushV
	var_11_object = var_10_bool; // 0x1bd Mov
	func_2285(); // 0x1be NEW_2
	return 0; // 0x1c0 Return
}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x1c2 PushV
	var_14_object = var_10_bool; // 0x1c3 Mov
	var_15_object = var_11_object; // 0x1c4 Mov
	func_2287(var_15_object); // 0x1c5 NEW_2
	return 0; // 0x1c7 Return
}


task_3_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0x1c9 PushS
	var_12_bool = var_10_bool == var_11_string; // 0x1ca Eq
	if(var_12_bool == 0) goto Label_461; // 0x1cb JumpB
	var_0_bool = 1; // 0x1cc TMovB
	
Label_461:
	return 0; // 0x1cd Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x207 PushV
	var_11_object = var_10_bool; // 0x208 Mov
	func_2285(); // 0x209 NEW_2
	return 0; // 0x20b Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x20d PushV
	var_14_object = var_10_bool; // 0x20e Mov
	var_15_object = var_11_object; // 0x20f Mov
	func_2287(var_15_object); // 0x210 NEW_2
	return 0; // 0x212 Return
}


task_4_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0x214 PushS
	var_12_bool = var_10_bool == var_11_string; // 0x215 Eq
	if(var_12_bool == 0) goto Label_538; // 0x216 JumpB
	var_13_bool = GlobalVars[0]; // 0x217 PushGE
	var_13_bool = 1; // 0x218 MovB
	GlobalVars[0] = var_13_bool; // 0x219 PopGE
	
Label_538:
	return 0; // 0x21a Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x4b0 PushV
	var_11_object = var_10_object; // 0x4b1 Mov
	func_2285(); // 0x4b2 NEW_2
	return 0; // 0x4b4 Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x4b6 PushV
	var_14_object = var_10_object; // 0x4b7 Mov
	var_15_object = var_11_object; // 0x4b8 Mov
	func_2287(var_15_object); // 0x4b9 NEW_2
	return 0; // 0x4bb Return
}


task_5_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_11_string = "kill"; // 0x4bd PushS
	var_12_bool = var_10_string == var_11_string; // 0x4be Eq
	if(var_12_bool == 0) goto Label_1222; // 0x4bf JumpB
	var_13_bool = GlobalVars[0]; // 0x4c0 PushGE
	var_13_bool = 1; // 0x4c1 MovB
	GlobalVars[0] = var_13_bool; // 0x4c2 PopGE
	func_1286(var_10_string); // 0x4c4 NEW_2
	
Label_1222:
	return 0; // 0x4c6 Return
}


task_5_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_11_int = 1; // 0x4f9 PushI
	var_12_bool = var_10_int == var_11_int; // 0x4fa Eq
	if(var_12_bool == 0) goto Label_1281; // 0x4fb JumpB
	var_13_object = Obj(); // 0x4fc PushV
	var_13_object = var_1_object; // 0x4fd MovT
	func_2062(var_13_object); // 0x4fe NEW_2
	goto Label_1285; // 0x500 Jump
	
Label_1285:
	return 0; // 0x505 Return
	
Label_1281:
	var_18_int = 0; // 0x501 PushV
	var_18_int = var_10_int; // 0x502 Mov
	func_1430(var_9_bool, var_10_int, var_18_int); // 0x503 NEW_2
}


task_5_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x514 PushV
	var_11_bool = 0; // 0x515 MovB
	var_12_bool = var_1_object == var_10_object; // 0x516 Eq
	if(var_12_bool == 0) goto Label_1307; // 0x517 JumpB
	var_13_bool = var_2_int == 0; // 0x518 Not
	if(var_13_bool == 0) goto Label_1307; // 0x519 JumpB
	var_11_bool = 1; // 0x51a MovB
	
Label_1307:
	if(var_11_bool == 0) goto Label_1313; // 0x51b JumpB
	var_2_int = 1; // 0x51c TMovB
	var_14_object = Obj(); // 0x51d PushV
	var_14_object = var_10_object; // 0x51e Mov
	func_1889(var_14_object); // 0x51f NEW_2
	
Label_1313:
	return 0; // 0x521 Return
}


task_5_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x523 PushV
	var_11_bool = 0; // 0x524 MovB
	var_12_bool = var_1_object == var_10_object; // 0x525 Eq
	if(var_12_bool == 0) goto Label_1322; // 0x526 JumpB
	var_13_int = var_2_int; // 0x527 PushT
	if(var_13_int == 0) goto Label_1322; // 0x528 JumpB
	var_11_bool = 1; // 0x529 MovB
	
Label_1322:
	if(var_11_bool == 0) goto Label_1327; // 0x52a JumpB
	var_2_int = 0; // 0x52b TMovB
	var_14_string = "head"; // 0x52c PushS
	UnlookAsync(var_14_string); // 0x52d Func
	
Label_1327:
	return 0; // 0x52f Return
}


task_5_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object); // 0x5a9 Func
	return 0; // 0x5ab Return
}


task_5_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_1286(var_10_object); // 0x5b5 NEW_2
	var_15_object = Obj(); // 0x5b7 PushV
	var_15_object = var_10_object; // 0x5b8 Mov
	func_2151(); // 0x5b9 NEW_2
	return 0; // 0x5bb Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x849 PushV
	var_14_object = var_10_object; // 0x84a Mov
	var_15_int = var_11_int; // 0x84b Mov
	var_16_float = var_12_float; // 0x84c Mov
	func_1791(var_14_object, var_15_int, var_16_float); // 0x84d NEW_2
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
	func_1859(var_18_float, var_19_cvector, var_20_cvector); // 0x857 NEW_2
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


func_1537(var_28_bool, var_29_object, var_30_string, var_31_float, var_32_float, var_33_float)
{
	var_34_float = 0; var_35_float = 0; // 0x601 PushV
	var_36_bool = 0; var_37_object = Obj(); var_38_string = ""; // 0x602 PushV
	var_37_object = var_29_object; // 0x603 Mov
	var_38_string = var_30_string; // 0x604 Mov
	func_1525(var_36_bool, var_37_object, var_38_string); // 0x605 NEW_2
	var_45_bool = var_36_bool == 0; // 0x607 Not
	if(var_45_bool == 0) goto Label_1547; // 0x608 JumpB
	var_28_bool = 0; // 0x609 MovB
	return 2; // 0x60a Return
	
Label_1547:
	GetProperty(var_30_string, var_35_float); // 0x60b ObjFunc
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0x60d PushV
	var_47_float = var_35_float + var_31_float; // 0x60e Add2
	var_48_float = var_32_float; // 0x60f Mov
	var_49_float = var_33_float; // 0x610 Mov
	func_1988(var_46_float, var_47_float, var_48_float, var_49_float); // 0x611 NEW_2
	SetProperty(var_30_string, var_46_float); // 0x613 ObjFunc
	var_28_bool = 1; // 0x615 MovB
	return 2; // 0x616 Return
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


func_1559(var_537_float, var_538_object, var_539_float, var_540_int)
{
	var_544_int = 0; var_545_string = ""; var_546_int = 0; var_547_float = 0; var_548_float = 0; var_549_float = 0; var_550_int = 0; var_551_string = ""; var_552_int = 0; var_553_float = 0; var_554_float = 0; var_555_float = 0; // 0x617 PushV
	var_556_bool = 0; var_557_object = Obj(); var_558_string = ""; // 0x618 PushV
	var_557_object = var_538_object; // 0x619 Mov
	var_558_string = "health"; // 0x61a MovS
	func_1525(var_556_bool, var_557_object, var_558_string); // 0x61b NEW_2
	var_559_bool = var_556_bool == 0; // 0x61d Not
	if(var_559_bool == 0) goto Label_1569; // 0x61e JumpB
	var_537_float = 0.0; // 0x61f MovF
	return 12; // 0x620 Return
	
Label_1569:
	var_560_bool = 0; var_561_object = Obj(); var_562_string = ""; // 0x621 PushV
	var_561_object = var_538_object; // 0x622 Mov
	var_562_string = "armor"; // 0x623 MovS
	func_1525(var_560_bool, var_561_object, var_562_string); // 0x624 NEW_2
	var_563_bool = var_560_bool == 0; // 0x626 Not
	if(var_563_bool == 0) goto Label_1578; // 0x627 JumpB
	var_550_int = 0; // 0x628 MovI
	goto Label_1581; // 0x629 Jump
	
Label_1581:
	var_564_string = "armor_"; // 0x62d PushS
	var_565_string = ""; var_566_int = 0; // 0x62e PushV
	var_566_int = var_540_int; // 0x62f Mov
	func_1491(var_565_string, var_566_int); // 0x630 NEW_2
	var_551_string = var_564_string + var_565_string; // 0x632 Add2
	var_571_bool = 0; var_572_object = Obj(); var_573_string = ""; // 0x633 PushV
	var_572_object = var_538_object; // 0x634 Mov
	var_573_string = var_551_string; // 0x635 Mov
	func_1525(var_571_bool, var_572_object, var_573_string); // 0x636 NEW_2
	var_574_bool = var_571_bool == 0; // 0x638 Not
	if(var_574_bool == 0) goto Label_1596; // 0x639 JumpB
	var_552_int = 0; // 0x63a MovI
	goto Label_1598; // 0x63b Jump
	
Label_1598:
	var_575_float = 0; var_576_float = 0; var_577_float = 0; // 0x63e PushV
	var_578_int = var_550_int + var_552_int; // 0x63f Add
	var_579_float = 100.0; // 0x640 PushF
	var_576_float = var_578_int / var_578_int; // 0x641 Div2
	var_577_float = 1; // 0x642 MovI
	func_1957(var_575_float, var_576_float, var_577_float); // 0x643 NEW_2
	var_553_float = var_575_float; // 0x644 Mov
	var_581_string = "health"; // 0x646 PushS
	GetProperty(var_581_string, var_554_float); // 0x647 ObjFunc
	var_582_int = 1; // 0x649 PushI
	var_583_int = var_582_int - var_553_float; // 0x64a Sub
	var_555_float = var_539_float * var_583_int; // 0x64b Mult2
	var_584_string = "health"; // 0x64c PushS
	var_585_float = 0; var_586_float = 0; var_587_float = 0; var_588_float = 0; // 0x64d PushV
	var_586_float = var_554_float - var_555_float; // 0x64e Sub2
	var_587_float = 0; // 0x64f MovI
	var_588_float = 1; // 0x650 MovI
	func_1988(var_585_float, var_586_float, var_587_float, var_588_float); // 0x651 NEW_2
	SetProperty(var_584_string, var_585_float); // 0x653 ObjFunc
	var_591_bool = 0; var_592_object = Obj(); // 0x655 PushV
	var_592_object = var_538_object; // 0x656 Mov
	func_1520(var_591_bool, var_592_object); // 0x657 NEW_2
	if(var_591_bool == 0) goto Label_1630; // 0x659 JumpB
	var_593_float = 0; // 0x65a PushV
	var_593_float = -var_555_float; // 0x65b Neg2
	func_2042(var_593_float); // 0x65c NEW_2
	
Label_1630:
	var_537_float = var_555_float; // 0x65e Mov
	return 12; // 0x65f Return
	
Label_1596:
	GetProperty(var_551_string, var_552_int); // 0x63c ObjFunc
	
Label_1578:
	var_597_string = "armor"; // 0x62a PushS
	GetProperty(var_597_string, var_550_int); // 0x62b ObjFunc
}


func_2071()
{
	var_121_object = Obj(); var_122_object = Obj(); // 0x817 PushV
	GetScene(var_122_object); // 0x818 Func
	var_123_string = "battle"; // 0x81a PushS
	var_124_object = Obj(); // 0x81b PushV
	func_1941(var_124_object); // 0x81c NEW_2
	BroadcastMessage(var_123_string, var_124_object, var_122_object); // 0x81e Func
	return 2; // 0x820 Return
}


func_539(var_0_object, var_3_int, var_5_bool, var_207_object, var_208_bool, var_209_float, var_278_bool, var_370_bool)
{
	var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_bool = 0; var_214_bool = 0; var_215_float = 0; var_216_cvector = CVector(0,0,0); var_217_float = 0; var_218_cvector = CVector(0,0,0); var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_bool = 0; var_225_bool = 0; var_226_float = 0; var_227_cvector = CVector(0,0,0); var_228_float = 0; var_229_cvector = CVector(0,0,0); var_230_bool = 0; var_231_float = 0; // 0x21b PushV
	func_768(var_229_cvector, var_230_bool, var_231_float); // 0x21d NEW_2
	var_5_bool = 0; // 0x21f TMovI
	var_254_string = "@GetAttackDistance"; // 0x220 PushS
	var_255_int = 1; // 0x221 PushI
	var_256_bool = IsFuncExist(var_207_object, var_254_string, var_255_int); // 0x222 FuncExist
	if(var_256_bool == 0) goto Label_553; // 0x223 JumpB
	GetAttackDistance(var_221_float); // 0x224 ObjFunc
	var_257_int = 50; // 0x226 PushI
	var_221_float = var_221_float + var_257_int; // 0x227 Add2
	goto Label_554; // 0x228 Jump
	
Label_554:
	var_258_int = 150; // 0x22a PushI
	var_259_bool = var_221_float >= var_258_int; // 0x22b GE
	if(var_259_bool == 0) goto Label_558; // 0x22c JumpB
	var_221_float = 150; // 0x22d MovI
	
Label_558:
	var_3_int = 0; // 0x22e TMovB
	var_0_object = var_207_object; // 0x22f TMov
	IsPlayerActor(var_0_object, var_224_bool); // 0x230 Func
	var_260_bool = var_224_bool; // 0x232 Push
	if(var_260_bool == 0) goto Label_572; // 0x233 JumpB
	var_261_string = "attack"; // 0x234 PushS
	PlayGlobalMusic(var_261_string); // 0x235 Func
	var_262_object = Obj(); // 0x237 PushV
	func_1941(var_262_object); // 0x238 NEW_2
	SendPlayerEnemy(var_207_object, var_262_object); // 0x23a Func
	
Label_572:
	var_263_bool = var_208_bool; // 0x23c Push
	if(var_263_bool == 0) goto Label_576; // 0x23d JumpB
	var_225_bool = 0; // 0x23e MovB
	goto Label_577; // 0x23f Jump
	
Label_577:
	var_264_float = 300.0; // 0x241 PushF
	var_226_float = var_264_float + var_221_float; // 0x242 Add2
	
Label_579:
	var_265_bool = 0; // 0x243 PushV
	var_265_bool = 0; // 0x244 MovB
	var_266_bool = 0; var_267_object = Obj(); // 0x245 PushV
	var_267_object = var_0_object; // 0x246 MovT
	func_1704(var_266_bool, var_267_object); // 0x247 NEW_2
	if(var_266_bool == 0) goto Label_589; // 0x249 JumpB
	var_268_bool = var_3_int == 0; // 0x24a Not
	if(var_268_bool == 0) goto Label_589; // 0x24b JumpB
	var_265_bool = 1; // 0x24c MovB
	
Label_589:
	if(var_265_bool == 0) goto Label_751; // 0x24d JumpB
	func_1183(var_231_float); // 0x24f NEW_2
	GetPFPosition(var_222_cvector); // 0x251 TObjFunc
	GetPFPosition(var_223_cvector); // 0x253 Func
	var_227_cvector = var_222_cvector - var_223_cvector; // 0x255 Sub2
	var_228_float = var_227_cvector | var_227_cvector; // 0x256 Or2
	var_270_float = var_226_float * var_226_float; // 0x257 Mult
	var_271_bool = var_228_float >= var_270_float; // 0x258 GE
	if(var_271_bool == 0) goto Label_617; // 0x259 JumpB
	var_272_bool = 0; var_273_object = Obj(); var_274_float = 0; var_275_float = 0; var_276_bool = 0; var_277_bool = 0; // 0x25a PushV
	var_273_object = var_0_object; // 0x25b MovT
	var_274_float = var_221_float; // 0x25c Mov
	var_275_float = 3000.0; // 0x25d MovF
	var_276_bool = 1; // 0x25e MovB
	var_277_bool = 0; // 0x25f MovB
	TaskCall(5); // 0x260 TaskCall
	func_1223(var_280_bool, var_272_bool, var_273_object, var_274_float, var_275_float, var_276_bool, var_277_bool); // 0x261 NEW_2
	TaskReturn(); // 0x262 TaskReturn
	var_355_bool = var_278_bool == 0; // 0x264 Not
	if(var_355_bool == 0) goto Label_615; // 0x265 JumpB
	goto Label_751; // 0x266 Jump
	
Label_751:
	WaitForAnimEnd(); // 0x2ef Func
	var_356_int = var_3_int; // 0x2f1 PushT
	if(var_356_int == 0) goto Label_756; // 0x2f2 JumpB
	return 22; // 0x2f3 Return
	
Label_756:
	var_357_string = "all"; // 0x2f4 PushS
	var_358_string = "attack_off"; // 0x2f5 PushS
	PlayAnimation(var_357_string, var_358_string); // 0x2f6 Func
	WaitForAnimEnd(); // 0x2f8 Func
	var_359_bool = var_224_bool; // 0x2fa Push
	if(var_359_bool == 0) goto Label_767; // 0x2fb JumpB
	var_360_float = 2.0; // 0x2fc PushF
	Sleep(var_360_float); // 0x2fd Func
	
Label_767:
	return 22; // 0x2ff Return
	
Label_615:
	var_225_bool = 0; // 0x267 MovB
	goto Label_750; // 0x268 Jump
	
Label_750:
	goto Label_579; // 0x2ee Jump
	
Label_617:
	var_361_float = var_209_float * var_209_float; // 0x269 Mult
	var_362_bool = var_228_float >= var_361_float; // 0x26a GE
	if(var_362_bool == 0) goto Label_742; // 0x26b JumpB
	GetPFPosition(var_229_cvector); // 0x26c TObjFunc
	CanReachByPF(var_230_bool, var_229_cvector); // 0x26e Func
	var_363_bool = var_230_bool == 0; // 0x270 Not
	if(var_363_bool == 0) goto Label_641; // 0x271 JumpB
	var_364_bool = 0; var_365_object = Obj(); var_366_float = 0; var_367_float = 0; var_368_bool = 0; var_369_bool = 0; // 0x272 PushV
	var_365_object = var_0_object; // 0x273 MovT
	var_366_float = var_221_float; // 0x274 Mov
	var_367_float = 3000.0; // 0x275 MovF
	var_368_bool = 1; // 0x276 MovB
	var_369_bool = 0; // 0x277 MovB
	TaskCall(5); // 0x278 TaskCall
	func_1223(var_372_bool, var_364_bool, var_365_object, var_366_float, var_367_float, var_368_bool, var_369_bool); // 0x279 NEW_2
	TaskReturn(); // 0x27a TaskReturn
	var_373_bool = var_370_bool == 0; // 0x27c Not
	if(var_373_bool == 0) goto Label_639; // 0x27d JumpB
	goto Label_751; // 0x27e Jump
	
Label_639:
	var_225_bool = 0; // 0x27f MovB
	goto Label_579; // 0x280 Jump
	
Label_641:
	var_374_bool = var_225_bool == 0; // 0x281 Not
	if(var_374_bool == 0) goto Label_666; // 0x282 JumpB
	var_375_object = Obj(); // 0x283 PushV
	var_375_object = var_0_object; // 0x284 MovT
	func_1873(); // 0x285 NEW_2
	var_384_string = "all"; // 0x287 PushS
	var_385_string = "attack_on"; // 0x288 PushS
	PlayAnimation(var_384_string, var_385_string); // 0x289 Func
	WaitForAnimEnd(); // 0x28b Func
	func_1183(var_231_float); // 0x28e NEW_2
	StopAsync(); // 0x290 Func
	var_225_bool = 1; // 0x292 MovB
	var_386_bool = 0; var_387_object = Obj(); // 0x293 PushV
	var_387_object = var_0_object; // 0x294 MovT
	func_1704(var_386_bool, var_387_object); // 0x295 NEW_2
	var_388_bool = var_386_bool == 0; // 0x297 Not
	if(var_388_bool == 0) goto Label_666; // 0x298 JumpB
	goto Label_751; // 0x299 Jump
	
Label_666:
	rand(var_231_float); // 0x29a Func
	var_389_bool = 0; // 0x29c PushV
	var_389_bool = 1; // 0x29d MovB
	var_390_float = 0.2; // 0x29e PushF
	var_391_bool = var_231_float < var_390_float; // 0x29f LT
	if(var_391_bool == 0) goto Label_678; // 0x2a0 JumpB
	var_392_bool = 0; // 0x2a1 PushV
	func_1140(var_389_bool, var_392_bool); // 0x2a2 NEW_2
	if(var_392_bool == 0) goto Label_678; // 0x2a4 JumpB
	var_389_bool = 0; // 0x2a5 MovB
	
Label_678:
	if(var_389_bool == 0) goto Label_695; // 0x2a6 JumpB
	Face(var_0_object); // 0x2a7 Func
	func_1188(); // 0x2aa NEW_2
	var_427_string = "all"; // 0x2ac PushS
	var_428_string = "attack_stay"; // 0x2ad PushS
	PlayAnimation(var_427_string, var_428_string); // 0x2ae Func
	var_429_bool = 0; var_430_float = 0; // 0x2b0 PushV
	var_430_float = var_209_float; // 0x2b1 Mov
	func_1008(var_231_float, var_429_bool, var_430_float); // 0x2b2 NEW_2
	StopAsync(); // 0x2b4 Func
	goto Label_741; // 0x2b6 Jump
	
Label_741:
	goto Label_750; // 0x2e5 Jump
	
Label_695:
	Face(var_0_object); // 0x2b7 Func
	var_661_string = "all"; // 0x2b9 PushS
	var_662_string = "fjump"; // 0x2ba PushS
	PlayAnimation(var_661_string, var_662_string); // 0x2bb Func
	WaitForAnimEnd(); // 0x2bd Func
	func_1183(var_231_float); // 0x2c0 NEW_2
	var_663_cvector = CVector(0.0, 0.0, 0.0); // 0x2c2 PushVec
	SetSpeed(var_663_cvector); // 0x2c3 Func
	Stop(); // 0x2c5 Func
	StopAsync(); // 0x2c7 Func
	var_664_bool = 0; // 0x2c9 PushV
	func_1140(var_231_float, var_664_bool); // 0x2ca NEW_2
	var_665_bool = var_664_bool == 0; // 0x2cc Not
	if(var_665_bool == 0) goto Label_741; // 0x2cd JumpB
	var_666_bool = 0; var_667_object = Obj(); // 0x2ce PushV
	var_667_object = var_0_object; // 0x2cf MovT
	func_1704(var_666_bool, var_667_object); // 0x2d0 NEW_2
	var_668_bool = var_666_bool == 0; // 0x2d2 Not
	if(var_668_bool == 0) goto Label_725; // 0x2d3 JumpB
	goto Label_751; // 0x2d4 Jump
	
Label_725:
	GetPFPosition(var_222_cvector); // 0x2d5 TObjFunc
	GetPFPosition(var_223_cvector); // 0x2d7 Func
	var_227_cvector = var_222_cvector - var_223_cvector; // 0x2d9 Sub2
	var_228_float = var_227_cvector | var_227_cvector; // 0x2da Or2
	var_669_float = var_209_float * var_209_float; // 0x2db Mult
	var_670_bool = var_228_float < var_669_float; // 0x2dc LT
	if(var_670_bool == 0) goto Label_741; // 0x2dd JumpB
	var_671_bool = 0; var_672_float = 0; // 0x2de PushV
	var_672_float = var_209_float; // 0x2df Mov
	func_842(var_231_float, var_671_bool, var_672_float); // 0x2e0 NEW_2
	var_673_bool = var_671_bool == 0; // 0x2e2 Not
	if(var_673_bool == 0) goto Label_741; // 0x2e3 JumpB
	goto Label_751; // 0x2e4 Jump
	
Label_742:
	var_674_bool = 0; var_675_float = 0; // 0x2e6 PushV
	var_675_float = var_209_float; // 0x2e7 Mov
	func_842(var_231_float, var_674_bool, var_675_float); // 0x2e8 NEW_2
	var_676_bool = var_674_bool == 0; // 0x2ea Not
	if(var_676_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_751; // 0x2ec Jump
	
Label_749:
	var_225_bool = 1; // 0x2ed MovB
	
Label_576:
	var_225_bool = 1; // 0x240 MovB
	
Label_553:
	var_221_float = var_209_float; // 0x229 Mov
}


func_1051(var_0_object, var_444_bool)
{
	var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_float = 0; var_449_float = 0; var_450_cvector = CVector(0,0,0); var_451_cvector = CVector(0,0,0); var_452_cvector = CVector(0,0,0); var_453_float = 0; var_454_float = 0; // 0x41b PushV
	var_455_bool = 0; var_456_object = Obj(); // 0x41c PushV
	var_456_object = var_0_object; // 0x41d MovT
	func_1704(var_455_bool, var_456_object); // 0x41e NEW_2
	var_457_bool = var_455_bool == 0; // 0x420 Not
	if(var_457_bool == 0) goto Label_1060; // 0x421 JumpB
	var_444_bool = 0; // 0x422 MovB
	return 10; // 0x423 Return
	
Label_1060:
	var_458_bool = 0; // 0x424 PushV
	func_1140(var_454_float, var_458_bool); // 0x425 NEW_2
	if(var_458_bool == 0) goto Label_1077; // 0x427 JumpB
	GetPFPosition(var_450_cvector); // 0x428 TObjFunc
	GetPFPosition(var_451_cvector); // 0x42a Func
	var_452_cvector = var_450_cvector - var_451_cvector; // 0x42c Sub2
	var_453_float = var_452_cvector | var_452_cvector; // 0x42d Or2
	GetAttackDistance(var_454_float); // 0x42e TObjFunc
	var_459_int = 50; // 0x430 PushI
	var_454_float = var_454_float + var_459_int; // 0x431 Add2
	var_460_float = var_454_float * var_454_float; // 0x432 Mult
	var_444_bool = var_453_float <= var_460_float; // 0x433 LE2
	return 10; // 0x434 Return
	
Label_1077:
	var_444_bool = 0; // 0x435 MovB
	return 10; // 0x436 Return
}


func_2082(var_615_bool)
{
	var_616_bool = 0; var_617_bool = 0; // 0x822 PushV
	var_618_string = "god_mode"; // 0x823 PushS
	GetVariable(var_618_string, var_617_bool); // 0x824 Func
	var_615_bool = var_617_bool; // 0x826 Mov
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
	func_1884(var_25_bool); // 0x2e NEW_2
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
	func_1884(var_45_bool); // 0x3e NEW_2
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


func_1079(var_442_bool)
{
	var_443_bool = 0; // 0x437 PushV
	var_443_bool = 0; // 0x438 MovB
	var_444_bool = 0; // 0x439 PushV
	func_1051(var_443_bool, var_444_bool); // 0x43a NEW_2
	if(var_444_bool == 0) goto Label_1090; // 0x43c JumpB
	var_461_bool = 0; // 0x43d PushV
	func_1095(var_442_bool, var_443_bool, var_461_bool); // 0x43e NEW_2
	if(var_461_bool == 0) goto Label_1090; // 0x440 JumpB
	var_443_bool = 1; // 0x441 MovB
	
Label_1090:
	if(var_443_bool == 0) goto Label_1093; // 0x442 JumpB
	var_442_bool = 1; // 0x443 MovB
	return 0; // 0x444 Return
	
Label_1093:
	var_442_bool = 0; // 0x445 MovB
	return 0; // 0x446 Return
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


func_1095(var_0_object, var_4_int, var_461_bool)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_float = 0; var_465_cvector = CVector(0,0,0); var_466_cvector = CVector(0,0,0); var_467_object = Obj(); var_468_bool = 0; var_469_float = 0; var_470_cvector = CVector(0,0,0); var_471_cvector = CVector(0,0,0); // 0x447 PushV
	GetScene(var_467_object); // 0x448 Func
	var_468_bool = 0; // 0x44a MovB
	
Label_1099:
	var_472_cvector = CVector(0,0,0); var_473_object = Obj(); // 0x44b PushV
	var_473_object = var_0_object; // 0x44c MovT
	func_1505(var_473_object); // 0x44d NEW_2
	var_478_int = -var_472_cvector; // 0x44f Neg
	FindDirLength(var_469_float, var_478_int, var_469_float); // 0x450 Func
	var_479_bool = var_469_float < var_4_int; // 0x452 LT
	if(var_479_bool == 0) goto Label_1109; // 0x453 JumpB
	goto Label_1137; // 0x454 Jump
	
Label_1137:
	var_461_bool = var_468_bool; // 0x471 Mov
	return 10; // 0x472 Return
	
Label_1109:
	Face(var_0_object); // 0x455 Func
	var_480_string = "all"; // 0x457 PushS
	var_481_string = "bjump"; // 0x458 PushS
	PlayAnimation(var_480_string, var_481_string); // 0x459 Func
	GetPFPosition(var_470_cvector); // 0x45b TObjFunc
	GetPFPosition(var_471_cvector); // 0x45d Func
	WaitForAnimEnd(); // 0x45f Func
	func_1183(var_471_cvector); // 0x462 NEW_2
	StopAsync(); // 0x464 Func
	var_482_cvector = CVector(0.0, 0.0, 0.0); // 0x466 PushVec
	SetSpeed(var_482_cvector); // 0x467 Func
	var_468_bool = 1; // 0x469 MovB
	var_483_bool = 0; // 0x46a PushV
	func_1051(var_471_cvector, var_483_bool); // 0x46b NEW_2
	var_484_bool = var_483_bool == 0; // 0x46d Not
	if(var_484_bool == 0) goto Label_1136; // 0x46e JumpB
	goto Label_1137; // 0x46f Jump
	
Label_1136:
	goto Label_1099; // 0x470 Jump
}


func_1632(var_604_bool, var_605_object)
{
	var_606_float = 0; var_607_float = 0; // 0x660 PushV
	var_608_bool = 0; var_609_object = Obj(); var_610_string = ""; // 0x661 PushV
	var_609_object = var_605_object; // 0x662 Mov
	var_610_string = "health"; // 0x663 MovS
	func_1525(var_608_bool, var_609_object, var_610_string); // 0x664 NEW_2
	var_611_bool = var_608_bool == 0; // 0x666 Not
	if(var_611_bool == 0) goto Label_1642; // 0x667 JumpB
	var_604_bool = 0; // 0x668 MovB
	return 2; // 0x669 Return
	
Label_1642:
	var_612_bool = 0; // 0x66a PushV
	var_612_bool = 0; // 0x66b MovB
	var_613_bool = 0; var_614_object = Obj(); // 0x66c PushV
	var_614_object = var_605_object; // 0x66d Mov
	func_1520(var_613_bool, var_614_object); // 0x66e NEW_2
	if(var_613_bool == 0) goto Label_1654; // 0x670 JumpB
	var_615_bool = 0; // 0x671 PushV
	func_2082(var_615_bool); // 0x672 NEW_2
	if(var_615_bool == 0) goto Label_1654; // 0x674 JumpB
	var_612_bool = 1; // 0x675 MovB
	
Label_1654:
	if(var_612_bool == 0) goto Label_1657; // 0x676 JumpB
	var_604_bool = 0; // 0x677 MovB
	return 2; // 0x678 Return
	
Label_1657:
	var_619_string = "health"; // 0x679 PushS
	GetProperty(var_619_string, var_607_float); // 0x67a ObjFunc
	var_620_float = 0.0; // 0x67c PushF
	var_604_bool = var_607_float <= var_620_float; // 0x67d LE2
	return 2; // 0x67e Return
}


func_2157(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x86e PushV
	var_18_object = var_16_object; // 0x86f Mov
	func_1704(var_17_bool, var_18_object); // 0x870 NEW_2
	var_15_bool = var_17_bool; // 0x871 Mov
	return 0; // 0x873 Return
}


func_2164(var_51_object)
{
	var_52_object = Obj(); // 0x875 PushV
	var_52_object = var_51_object; // 0x876 Mov
	func_2230(var_52_object); // 0x877 NEW_2
	return 0; // 0x879 Return
}


func_1140(var_0_object, var_392_bool)
{
	var_393_bool = 0; var_394_bool = 0; // 0x474 PushV
	var_395_string = "IsAttacking"; // 0x475 PushS
	var_396_int = 1; // 0x476 PushI
	var_397_bool = IsFuncExist(var_0_object, var_395_string, var_396_int); // 0x477 FuncExist
	if(var_397_bool == 0) goto Label_1149; // 0x478 JumpB
	IsAttacking(var_394_bool); // 0x479 TObjFunc
	var_392_bool = var_394_bool; // 0x47b Mov
	return 2; // 0x47c Return
	
Label_1149:
	var_392_bool = 0; // 0x47d MovB
	return 2; // 0x47e Return
}


func_121(var_54_bool)
{
	var_54_bool = 1; // 0x79 MovB
	return 0; // 0x7a Return
}


func_2170(var_55_int)
{
	var_56_int = 0; var_57_int = 0; // 0x87a PushV
	var_58_string = "branch"; // 0x87b PushS
	GetVariable(var_58_string, var_57_int); // 0x87c Func
	var_55_int = var_57_int; // 0x87e Mov
	return 2; // 0x87f Return
}


func_123()
{
	StopAnimation(); // 0x7b Func
	StopGroup0(); // 0x7d Func
	return 0; // 0x7f Return
}


func_1663(var_38_bool)
{
	var_40_bool = 0; var_41_bool = 0; // 0x67f PushV
	IsDead(var_41_bool); // 0x680 ObjFunc
	var_38_bool = var_41_bool; // 0x682 Mov
	return 2; // 0x683 Return
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
	func_1520(var_13_bool, var_14_object); // 0x83 NEW_2
	if(var_13_bool == 0) goto Label_139; // 0x85 JumpB
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0; // 0x86 PushV
	var_18_object = var_12_object; // 0x87 Mov
	var_19_float = 0.03; // 0x88 MovF
	func_2007(var_17_bool, var_18_object, var_19_float); // 0x89 NEW_2
	
Label_139:
	func_2206(); // 0x8c NEW_2
	var_75_string = "b1q04_dead"; // 0x8e PushS
	var_76_int = 1; // 0x8f PushI
	SetVariable(var_75_string, var_76_int); // 0x90 Func
	var_77_object = Obj(); // 0x92 PushV
	var_77_object = var_12_object; // 0x93 Mov
	func_151(var_77_object); // 0x94 NEW_2
	return 0; // 0x96 Return
}


func_1151(var_2_object, var_5_bool)
{
	var_505_float = 0; var_506_int = 0; var_507_float = 0; var_508_int = 0; // 0x47f PushV
	var_509_bool = var_2_object == 0; // 0x480 Not
	if(var_509_bool == 0) goto Label_1155; // 0x481 JumpB
	return 4; // 0x482 Return
	
Label_1155:
	var_510_bool = var_5_bool; // 0x483 PushT
	if(var_510_bool == 0) goto Label_1163; // 0x484 JumpB
	var_511_int = -1; // 0x485 PushI
	var_5_bool = var_5_bool + var_511_int; // 0x486 Add2
	var_512_int = 0; // 0x487 PushI
	var_513_bool = var_5_bool > var_512_int; // 0x488 GT
	if(var_513_bool == 0) goto Label_1163; // 0x489 JumpB
	return 4; // 0x48a Return
	
Label_1163:
	rand(var_507_float); // 0x48b Func
	var_514_float = 0; // 0x48d PushV
	func_1197(var_514_float); // 0x48e NEW_2
	var_515_bool = var_507_float < var_514_float; // 0x490 LT
	if(var_515_bool == 0) goto Label_1182; // 0x491 JumpB
	irand(var_508_int, var_507_float); // 0x492 Func
	var_516_int = 1; // 0x494 PushI
	var_508_int = var_508_int + var_516_int; // 0x495 Add2
	var_517_string = "attack"; // 0x496 PushS
	var_518_int = var_517_string + var_508_int; // 0x497 Add
	Speak(var_518_int); // 0x498 Func
	var_519_int = 0; // 0x49a PushV
	func_1195(var_519_int); // 0x49b NEW_2
	var_5_bool = var_519_int; // 0x49c TMov
	
Label_1182:
	return 4; // 0x49e Return
}


func_1668(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x684 PushV
	var_33_bool = var_28_object == 0; // 0x685 NullEq
	if(var_33_bool == 0) goto Label_1673; // 0x686 JumpB
	var_27_bool = 0; // 0x687 MovB
	return 4; // 0x688 Return
	
Label_1673:
	var_34_bool = 0; // 0x689 PushV
	var_34_bool = 0; // 0x68a MovB
	var_35_string = "IsDead"; // 0x68b PushS
	var_36_int = 1; // 0x68c PushI
	var_37_bool = IsFuncExist(var_28_object, var_35_string, var_36_int); // 0x68d FuncExist
	if(var_37_bool == 0) goto Label_1685; // 0x68e JumpB
	var_38_bool = 0; var_39_object = Obj(); // 0x68f PushV
	var_39_object = var_28_object; // 0x690 Mov
	func_1663(var_39_object); // 0x691 NEW_2
	if(var_38_bool == 0) goto Label_1685; // 0x693 JumpB
	var_34_bool = 1; // 0x694 MovB
	
Label_1685:
	if(var_34_bool == 0) goto Label_1688; // 0x695 JumpB
	var_27_bool = 0; // 0x696 MovB
	return 4; // 0x697 Return
	
Label_1688:
	GetScene(var_31_object); // 0x698 Func
	var_42_bool = var_31_object == 0; // 0x69a NullEq
	if(var_42_bool == 0) goto Label_1694; // 0x69b JumpB
	var_27_bool = 0; // 0x69c MovB
	return 4; // 0x69d Return
	
Label_1694:
	GetScene(var_32_object); // 0x69e ObjFunc
	var_43_bool = var_31_object != var_32_object; // 0x6a0 Neq
	if(var_43_bool == 0) goto Label_1700; // 0x6a1 JumpB
	var_27_bool = 0; // 0x6a2 MovB
	return 4; // 0x6a3 Return
	
Label_1700:
	var_27_bool = 1; // 0x6a4 MovB
	return 4; // 0x6a5 Return
}


func_2189(var_61_string)
{
	var_62_object = Obj(); var_63_int = 0; var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; var_67_bool = 0; // 0x88d PushV
	CreateInvItem(var_65_object); // 0x88e Func
	SetItemName(var_61_string); // 0x890 ObjFunc
	var_68_string = "Organ"; // 0x892 PushS
	var_69_int = 1; // 0x893 PushI
	SetProperty(var_68_string, var_69_int); // 0x894 ObjFunc
	GetItemID(var_66_int); // 0x896 ObjFunc
	var_70_int = 0; // 0x898 PushI
	var_71_int = 1; // 0x899 PushI
	AddItem(var_67_bool, var_65_object, var_70_int, var_71_int); // 0x89a Func
	return 6; // 0x89c Return
}


func_151(var_77_object)
{
	EventDisable(0); // 0x98 EventDisable
	var_78_object = Obj(); // 0x99 PushV
	var_78_object = var_77_object; // 0x9a Mov
	func_176(var_78_object); // 0x9b NEW_2
	var_158_int = 50; // 0x9d PushI
	var_159_int = 40; // 0x9e PushI
	SetRTEnvelope(var_158_int, var_159_int); // 0x9f Func
	EventEnable(0); // 0xa1 EventEnable
	
Label_162:
	Hold(); // 0xa2 Func
	goto Label_162; // 0xa4 Jump
}


func_2206()
{
	var_55_int = 0; // 0x89e PushV
	func_2170(var_55_int); // 0x89f NEW_2
	var_59_int = 1; // 0x8a1 PushI
	var_60_bool = var_55_int != var_59_int; // 0x8a2 Neq
	if(var_60_bool == 0) goto Label_2213; // 0x8a3 JumpB
	return 0; // 0x8a4 Return
	
Label_2213:
	var_61_string = ""; // 0x8a5 PushV
	var_61_string = "liver"; // 0x8a6 MovS
	func_2189(var_61_string); // 0x8a7 NEW_2
	var_72_string = ""; // 0x8a9 PushV
	var_72_string = "kidney"; // 0x8aa MovS
	func_2189(var_72_string); // 0x8ab NEW_2
	var_73_string = ""; // 0x8ad PushV
	var_73_string = "heart"; // 0x8ae MovS
	func_2189(var_73_string); // 0x8af NEW_2
	var_74_string = ""; // 0x8b1 PushV
	var_74_string = "blood"; // 0x8b2 MovS
	func_2189(var_74_string); // 0x8b3 NEW_2
	return 0; // 0x8b5 Return
}


func_1183(var_0_object)
{
	var_269_object = Obj(); // 0x49f PushV
	var_269_object = var_0_object; // 0x4a0 MovT
	func_2062(var_269_object); // 0x4a1 NEW_2
	return 0; // 0x4a3 Return
}


func_1188()
{
	var_398_string = ""; // 0x4a4 PushV
	var_398_string = "attack_stay"; // 0x4a5 MovS
	func_1900(var_398_string); // 0x4a6 NEW_2
	return 0; // 0x4a8 Return
}


func_1704(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0; // 0x6a8 PushV
	var_27_bool = 0; var_28_object = Obj(); // 0x6a9 PushV
	var_28_object = var_24_object; // 0x6aa Mov
	func_1668(var_27_bool, var_28_object); // 0x6ab NEW_2
	var_44_bool = var_27_bool == 0; // 0x6ad Not
	if(var_44_bool == 0) goto Label_1713; // 0x6ae JumpB
	var_23_bool = 0; // 0x6af MovB
	return 2; // 0x6b0 Return
	
Label_1713:
	var_45_bool = 0; var_46_object = Obj(); var_47_string = ""; // 0x6b1 PushV
	var_46_object = var_24_object; // 0x6b2 Mov
	var_47_string = "noaccess"; // 0x6b3 MovS
	func_1525(var_45_bool, var_46_object, var_47_string); // 0x6b4 NEW_2
	var_54_bool = var_45_bool == 0; // 0x6b6 Not
	if(var_54_bool == 0) goto Label_1722; // 0x6b7 JumpB
	var_23_bool = 1; // 0x6b8 MovB
	return 2; // 0x6b9 Return
	
Label_1722:
	var_55_string = "noaccess"; // 0x6ba PushS
	GetProperty(var_55_string, var_26_int); // 0x6bb ObjFunc
	var_56_int = 0; // 0x6bd PushI
	var_23_bool = var_26_int == var_56_int; // 0x6be Eq2
	return 2; // 0x6bf Return
}


func_1193(var_644_bool)
{
	var_644_bool = 1; // 0x4a9 MovB
	return 0; // 0x4aa Return
}


func_1195(var_519_int)
{
	var_519_int = 1; // 0x4ab MovI
	return 0; // 0x4ac Return
}


func_1197(var_514_float)
{
	var_514_float = 0.5; // 0x4ad MovF
	return 0; // 0x4ae Return
}


func_176(var_78_object)
{
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_string = ""; var_84_object = Obj(); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_string = ""; var_94_object = Obj(); var_95_bool = 0; var_96_bool = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); // 0xb0 PushV
	var_99_bool = var_78_object == 0; // 0xb1 NullEq
	if(var_99_bool == 0) goto Label_184; // 0xb2 JumpB
	var_100_string = ""; // 0xb3 PushV
	var_100_string = "fdie"; // 0xb4 MovS
	func_267(var_100_string); // 0xb5 NEW_2
	goto Label_266; // 0xb7 Jump
	
Label_266:
	return 20; // 0x10a Return
	
Label_184:
	GetPosition(var_89_cvector); // 0xb8 ObjFunc
	GetPosition(var_90_cvector); // 0xba Func
	GetDirection(var_91_cvector); // 0xbc Func
	var_92_cvector = var_90_cvector - var_89_cvector; // 0xbe Sub2
	var_132_float = GetByIndex(var_92_cvector, 0); // 0xbf PushE
	var_133_float = GetByIndex(var_91_cvector, 0); // 0xc0 PushE
	var_134_float = var_132_float * var_133_float; // 0xc1 Mult
	var_135_float = GetByIndex(var_92_cvector, 2); // 0xc2 PushE
	var_136_float = GetByIndex(var_91_cvector, 2); // 0xc3 PushE
	var_137_float = var_135_float * var_136_float; // 0xc4 Mult
	var_138_int = var_134_float + var_137_float; // 0xc5 Add
	var_139_int = 0; // 0xc6 PushI
	var_140_bool = var_138_int >= var_139_int; // 0xc7 GE
	if(var_140_bool == 0) goto Label_203; // 0xc8 JumpB
	var_93_string = "fdie"; // 0xc9 MovS
	goto Label_204; // 0xca Jump
	
Label_204:
	RemoveRTEnvelope(); // 0xcc Func
	SetDeathState(); // 0xce Func
	Stop(); // 0xd0 Func
	StopAsync(); // 0xd2 Func
	var_94_object = var_78_object; // 0xd4 Mov
	var_141_string = "GetScriptProperty"; // 0xd5 PushS
	var_142_int = 2; // 0xd6 PushI
	var_143_bool = IsFuncExist(var_78_object, var_141_string, var_142_int); // 0xd7 FuncExist
	if(var_143_bool == 0) goto Label_228; // 0xd8 JumpB
	var_144_string = "Owner"; // 0xd9 PushS
	HasScriptProperty(var_95_bool, var_144_string); // 0xda ObjFunc
	var_145_bool = var_95_bool; // 0xdc Push
	if(var_145_bool == 0) goto Label_228; // 0xdd JumpB
	var_146_string = "Owner"; // 0xde PushS
	GetScriptProperty(var_94_object, var_146_string); // 0xdf ObjFunc
	var_147_bool = var_94_object == 0; // 0xe1 NullEq
	if(var_147_bool == 0) goto Label_228; // 0xe2 JumpB
	var_94_object = var_78_object; // 0xe3 Mov
	
Label_228:
	var_148_string = "@GetEyesHeight"; // 0xe4 PushS
	var_149_int = 1; // 0xe5 PushI
	var_150_bool = IsFuncExist(var_94_object, var_148_string, var_149_int); // 0xe6 FuncExist
	if(var_150_bool == 0) goto Label_243; // 0xe7 JumpB
	GetEyesHeight(var_97_float); // 0xe8 ObjFunc
	var_98_cvector = CVector(0.0, 0.0, 0.0); // 0xea MovV
	var_151_float = GetByIndex(var_98_cvector, 1); // 0xeb PushE
	var_151_float = var_97_float; // 0xec Mov
	SetByIndex(var_98_cvector, 1) = var_151_float; // 0xed PopE
	var_152_string = "head"; // 0xee PushS
	LookAsync(var_78_object, var_152_string, var_98_cvector); // 0xef Func
	var_96_bool = 1; // 0xf1 MovB
	goto Label_244; // 0xf2 Jump
	
Label_244:
	var_153_string = ""; // 0xf4 PushV
	var_153_string = var_93_string; // 0xf5 Mov
	func_1900(var_153_string); // 0xf6 NEW_2
	var_154_string = "all"; // 0xf8 PushS
	PlayAnimation(var_154_string, var_93_string); // 0xf9 Func
	WaitForAnimEnd(); // 0xfb Func
	var_155_bool = var_96_bool; // 0xfd Push
	if(var_155_bool == 0) goto Label_260; // 0xfe JumpB
	StopAsync(); // 0xff Func
	var_156_string = "head"; // 0x101 PushS
	UnlookAsync(var_156_string); // 0x102 Func
	
Label_260:
	var_157_string = "all"; // 0x104 PushS
	LockAnimationEnd(var_157_string, var_93_string); // 0x105 Func
	RemoveEnvelope(); // 0x107 Func
	var_94_object = 0; // 0x109 SetNull
	
Label_243:
	var_96_bool = 0; // 0xf3 MovB
	
Label_203:
	var_93_string = "bdie"; // 0xcb MovS
}


func_2230(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x8b6 PushV
	var_55_string = "b1q04_attack"; // 0x8b7 PushS
	var_56_int = 1; // 0x8b8 PushI
	SetVariable(var_55_string, var_56_int); // 0x8b9 Func
	GetScene(var_54_object); // 0x8bb Func
	var_57_object = Obj(); // 0x8bd PushV
	func_1941(var_57_object); // 0x8be NEW_2
	RemoveStationaryActor(var_57_object); // 0x8c0 ObjFunc
	var_60_object = Obj(); // 0x8c2 PushV
	var_60_object = var_52_object; // 0x8c3 Mov
	TaskCall(6); // 0x8c4 TaskCall
	func_1479(var_60_object); // 0x8c5 NEW_2
	TaskReturn(); // 0x8c6 TaskReturn
	return 2; // 0x8c8 Return
}


func_1728(var_108_bool, var_109_cvector)
{
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_bool = 0; // 0x6c0 PushV
	GetPosition(var_113_cvector); // 0x6c1 Func
	var_114_cvector = var_109_cvector - var_113_cvector; // 0x6c3 Sub2
	var_116_float = GetByIndex(var_114_cvector, 0); // 0x6c4 PushE
	var_117_float = GetByIndex(var_114_cvector, 2); // 0x6c5 PushE
	Rotate(var_116_float, var_117_float, var_115_bool); // 0x6c6 Func
	var_108_bool = var_115_bool; // 0x6c8 Mov
	return 6; // 0x6c9 Return
}


func_1223(var_2_object, var_272_bool, var_273_object, var_274_float, var_275_float, var_276_bool, var_277_bool)
{
	var_281_bool = 0; var_282_bool = 0; var_283_bool = 0; var_284_bool = 0; // 0x4c7 PushV
	var_285_object = Obj(); // 0x4c8 PushV
	var_285_object = var_273_object; // 0x4c9 Mov
	func_2062(var_285_object); // 0x4ca NEW_2
	var_286_int = 1; // 0x4cc PushI
	var_287_int = 5; // 0x4cd PushI
	SetTimer(var_286_int, var_287_int); // 0x4ce Func
	CanSee(var_283_bool, var_273_object); // 0x4d0 Func
	var_288_bool = var_283_bool; // 0x4d2 Push
	if(var_288_bool == 0) goto Label_1242; // 0x4d3 JumpB
	var_2_object = 1; // 0x4d4 TMovB
	var_289_object = Obj(); // 0x4d5 PushV
	var_289_object = var_273_object; // 0x4d6 Mov
	func_1889(var_289_object); // 0x4d7 NEW_2
	goto Label_1243; // 0x4d9 Jump
	
Label_1243:
	var_296_bool = 0; var_297_object = Obj(); // 0x4db PushV
	var_297_object = var_273_object; // 0x4dc Mov
	func_1520(var_296_bool, var_297_object); // 0x4dd NEW_2
	if(var_296_bool == 0) goto Label_1253; // 0x4df JumpB
	var_300_object = Obj(); // 0x4e0 PushV
	func_1941(var_300_object); // 0x4e1 NEW_2
	SendPlayerEnemy(var_273_object, var_300_object); // 0x4e3 Func
	
Label_1253:
	var_301_bool = 0; var_302_object = Obj(); var_303_float = 0; var_304_float = 0; var_305_bool = 0; var_306_bool = 0; // 0x4e5 PushV
	var_302_object = var_273_object; // 0x4e6 Mov
	var_303_float = var_274_float; // 0x4e7 Mov
	var_304_float = var_275_float; // 0x4e8 Mov
	var_305_bool = var_276_bool; // 0x4e9 Mov
	var_306_bool = var_277_bool; // 0x4ea Mov
	func_1328(var_283_bool, var_284_bool, var_301_bool, var_302_object, var_303_float, var_304_float, var_305_bool, var_306_bool); // 0x4eb NEW_2
	var_284_bool = var_301_bool; // 0x4ec Mov
	var_352_object = var_2_object; // 0x4ee PushT
	if(var_352_object == 0) goto Label_1267; // 0x4ef JumpB
	var_353_string = "head"; // 0x4f0 PushS
	UnlookAsync(var_353_string); // 0x4f1 Func
	
Label_1267:
	var_354_int = 1; // 0x4f3 PushI
	KillTimer(var_354_int); // 0x4f4 Func
	var_272_bool = var_284_bool; // 0x4f6 Mov
	return 4; // 0x4f7 Return
	
Label_1242:
	var_2_object = 0; // 0x4da TMovB
}


func_1738(var_104_bool)
{
	var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); // 0x6ca PushV
	GetPosition(var_107_cvector); // 0x6cb ObjFunc
	var_108_bool = 0; var_109_cvector = CVector(0,0,0); // 0x6cd PushV
	var_109_cvector = var_107_cvector; // 0x6ce Mov
	func_1728(var_108_bool, var_109_cvector); // 0x6cf NEW_2
	var_104_bool = var_108_bool; // 0x6d0 Mov
	return 2; // 0x6d2 Return
}


func_2250(var_142_cvector, var_143_cvector, var_144_cvector, var_145_float)
{
	var_146_cvector = CVector(0,0,0); var_147_float = 0; var_148_float = 0; var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_cvector = CVector(0,0,0); var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0; // 0x8ca PushV
	var_152_cvector = var_144_cvector - var_143_cvector; // 0x8cb Sub2
	var_153_float = 250000; // 0x8cc MovI
	var_158_float = GetByIndex(var_152_cvector, 1); // 0x8cd PushE
	var_159_int = 1000; // 0x8ce PushI
	var_160_float = var_158_float * var_159_int; // 0x8cf Mult
	var_161_float = var_145_float * var_145_float; // 0x8d0 Mult
	var_154_float = var_160_float - var_161_float; // 0x8d1 Sub2
	var_155_float = var_152_cvector | var_152_cvector; // 0x8d2 Or2
	var_162_float = 0; var_163_float = 0; var_164_float = 0; var_165_float = 0; // 0x8d3 PushV
	var_163_float = var_153_float; // 0x8d4 Mov
	var_164_float = var_154_float; // 0x8d5 Mov
	var_165_float = var_155_float; // 0x8d6 Mov
	func_1964(var_162_float, var_163_float, var_164_float, var_165_float); // 0x8d7 NEW_2
	var_156_float = var_162_float; // 0x8d8 Mov
	var_170_int = 0; // 0x8da PushI
	var_171_bool = var_156_float < var_170_int; // 0x8db LT
	if(var_171_bool == 0) goto Label_2271; // 0x8dc JumpB
	var_157_float = 1; // 0x8dd MovI
	goto Label_2279; // 0x8de Jump
	
Label_2279:
	var_172_cvector = CVector(0.0, 500.0, 0.0); // 0x8e7 PushVec
	var_173_float = var_172_cvector * var_157_float; // 0x8e8 Mult
	var_174_float = var_173_float * var_157_float; // 0x8e9 Mult
	var_175_int = var_152_cvector + var_174_float; // 0x8ea Add
	var_142_cvector = var_175_int / var_175_int; // 0x8eb Div2
	return 12; // 0x8ec Return
	
Label_2271:
	var_176_float = 0; var_177_float = 0; var_178_float = 0; var_179_float = 0; var_180_float = 0; // 0x8df PushV
	var_177_float = var_153_float; // 0x8e0 Mov
	var_178_float = var_154_float; // 0x8e1 Mov
	var_179_float = var_155_float; // 0x8e2 Mov
	var_180_float = sqrt(var_156_float); // 0x8e3 Sqrt2
	func_1971(var_177_float, var_178_float, var_179_float, var_180_float); // 0x8e4 NEW_2
	var_157_float = sqrt(var_176_float); // 0x8e6 Sqrt2
}


func_1747(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x6d3 PushV
	var_42_bool = var_27_object == 0; // 0x6d4 NullEq
	if(var_42_bool == 0) goto Label_1751; // 0x6d5 JumpB
	return 14; // 0x6d6 Return
	
Label_1751:
	IsDead(var_35_bool); // 0x6d7 Func
	var_43_bool = var_35_bool; // 0x6d9 Push
	if(var_43_bool == 0) goto Label_1756; // 0x6da JumpB
	return 14; // 0x6db Return
	
Label_1756:
	GetSecondaryAnimationType(var_36_int); // 0x6dc Func
	var_44_int = 0; // 0x6de PushI
	var_45_bool = var_36_int < var_44_int; // 0x6df LT
	if(var_45_bool == 0) goto Label_1762; // 0x6e0 JumpB
	return 14; // 0x6e1 Return
	
Label_1762:
	GetPosition(var_37_cvector); // 0x6e2 ObjFunc
	GetPosition(var_38_cvector); // 0x6e4 Func
	GetDirection(var_39_cvector); // 0x6e6 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x6e8 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x6e9 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x6ea PushE
	var_48_float = var_46_float * var_47_float; // 0x6eb Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x6ec PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x6ed PushE
	var_51_float = var_49_float * var_50_float; // 0x6ee Mult
	var_52_int = var_48_float + var_51_float; // 0x6ef Add
	var_53_int = 0; // 0x6f0 PushI
	var_54_bool = var_52_int >= var_53_int; // 0x6f1 GE
	if(var_54_bool == 0) goto Label_1781; // 0x6f2 JumpB
	var_41_string = "fhit"; // 0x6f3 MovS
	goto Label_1782; // 0x6f4 Jump
	
Label_1782:
	var_55_string = "hit_react"; // 0x6f6 PushS
	var_56_string = "1"; // 0x6f7 PushS
	var_57_int = var_41_string + var_56_string; // 0x6f8 Add
	var_58_string = "2"; // 0x6f9 PushS
	var_59_int = var_41_string + var_58_string; // 0x6fa Add
	var_60_int = -10; // 0x6fb PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x6fc Func
	return 14; // 0x6fe Return
	
Label_1781:
	var_41_string = "bhit"; // 0x6f5 MovS
}


func_2285()
{
	return 0; // 0x8ee Return
}


func_2287(var_13_bool)
{
	var_13_bool = 0; // 0x8f0 MovB
	return 0; // 0x8f1 Return
}


func_1791(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x6ff PushV
	var_35_bool = 0; // 0x700 PushV
	var_35_bool = 0; // 0x701 MovB
	var_36_bool = 0; // 0x702 PushV
	var_36_bool = 0; // 0x703 MovB
	var_37_object = var_14_object; // 0x704 Push
	if(var_37_object == 0) goto Label_1802; // 0x705 JumpB
	var_38_int = 4; // 0x706 PushI
	var_39_bool = var_15_int != var_38_int; // 0x707 Neq
	if(var_39_bool == 0) goto Label_1802; // 0x708 JumpB
	var_36_bool = 1; // 0x709 MovB
	
Label_1802:
	if(var_36_bool == 0) goto Label_1807; // 0x70a JumpB
	var_40_int = 5; // 0x70b PushI
	var_41_bool = var_15_int != var_40_int; // 0x70c Neq
	if(var_41_bool == 0) goto Label_1807; // 0x70d JumpB
	var_35_bool = 1; // 0x70e MovB
	
Label_1807:
	if(var_35_bool == 0) goto Label_1854; // 0x70f JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x710 PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x711 PushV
	var_45_object = var_14_object; // 0x712 Mov
	func_1505(var_45_object); // 0x713 NEW_2
	var_43_cvector = var_44_cvector; // 0x714 Mov
	func_1947(var_42_cvector, var_43_cvector); // 0x716 NEW_2
	var_26_cvector = var_42_cvector; // 0x717 Mov
	CreateVectorVector(var_27_object); // 0x719 Func
	var_28_int = 1; // 0x71b MovI
	
Label_1820:
	var_55_string = "hit"; // 0x71c PushS
	var_56_int = var_55_string + var_28_int; // 0x71d Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x71e Func
	var_57_bool = var_29_bool == 0; // 0x720 Not
	if(var_57_bool == 0) goto Label_1827; // 0x721 JumpB
	goto Label_1836; // 0x722 Jump
	
Label_1836:
	size(var_32_int); // 0x72c ObjFunc
	var_58_int = var_32_int; // 0x72e Push
	if(var_58_int == 0) goto Label_1853; // 0x72f JumpB
	irand(var_33_int, var_32_int); // 0x730 Func
	get(var_34_cvector, var_33_int); // 0x732 ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x734 PushV
	var_59_object = var_14_object; // 0x735 Mov
	var_60_int = var_15_int; // 0x736 Mov
	var_61_float = var_16_float; // 0x737 Mov
	var_62_cvector = var_34_cvector; // 0x738 Mov
	var_63_cvector = -var_26_cvector; // 0x739 Neg2
	func_1859(var_61_float, var_62_cvector, var_63_cvector); // 0x73a NEW_2
	return 18; // 0x73c Return
	
Label_1853:
	var_27_object = 0; // 0x73d SetNull
	
Label_1854:
	var_104_object = Obj(); // 0x73e PushV
	var_104_object = var_14_object; // 0x73f Mov
	func_1747(var_104_object); // 0x740 NEW_2
	return 18; // 0x742 Return
	
Label_1827:
	var_105_int = var_31_cvector | var_26_cvector; // 0x723 Or
	var_106_float = 0.70711; // 0x724 PushF
	var_107_bool = var_105_int >= var_106_float; // 0x725 GE
	if(var_107_bool == 0) goto Label_1833; // 0x726 JumpB
	add(var_30_cvector); // 0x727 ObjFunc
	
Label_1833:
	var_108_int = 1; // 0x729 PushI
	var_28_int = var_28_int + var_108_int; // 0x72a Add2
	goto Label_1820; // 0x72b Jump
}


func_768(var_1_bool, var_2_object, var_4_int)
{
	var_232_bool = 0; var_233_bool = 0; var_234_cvector = CVector(0,0,0); var_235_bool = 0; var_236_bool = 0; var_237_cvector = CVector(0,0,0); // 0x300 PushV
	var_1_bool = 0; // 0x301 TMovI
	
Label_770:
	var_238_string = "all"; // 0x302 PushS
	var_239_string = "attack_begin"; // 0x303 PushS
	var_240_int = 1; // 0x304 PushI
	var_241_int = var_1_bool + var_240_int; // 0x305 Add
	var_242_int = var_239_string + var_241_int; // 0x306 Add
	HasAnimation(var_235_bool, var_238_string, var_242_int); // 0x307 Func
	var_243_bool = var_235_bool == 0; // 0x309 Not
	if(var_243_bool == 0) goto Label_780; // 0x30a JumpB
	goto Label_783; // 0x30b Jump
	
Label_783:
	var_2_object = 0; // 0x30f TMovI
	
Label_784:
	var_244_string = "attack"; // 0x310 PushS
	var_245_int = 1; // 0x311 PushI
	var_246_int = var_2_object + var_245_int; // 0x312 Add
	var_247_int = var_244_string + var_246_int; // 0x313 Add
	IsExisting3DSound(var_236_bool, var_247_int); // 0x314 Func
	var_248_bool = var_236_bool == 0; // 0x316 Not
	if(var_248_bool == 0) goto Label_793; // 0x317 JumpB
	goto Label_796; // 0x318 Jump
	
Label_796:
	var_249_string = "all"; // 0x31c PushS
	var_250_string = "bjump"; // 0x31d PushS
	GetAnimationOffset(var_237_cvector, var_249_string, var_250_string); // 0x31e Func
	var_251_float = GetByIndex(var_237_cvector, 2); // 0x320 PushE
	var_4_int = -var_251_float; // 0x321 Neg2
	return 6; // 0x322 Return
	
Label_793:
	var_252_int = 1; // 0x319 PushI
	var_2_object = var_2_object + var_252_int; // 0x31a Add2
	goto Label_784; // 0x31b Jump
	
Label_780:
	var_253_int = 1; // 0x30c PushI
	var_1_bool = var_1_bool + var_253_int; // 0x30d Add2
	goto Label_770; // 0x30e Jump
}


func_1286(var_2_int)
{
	var_11_int = 1; // 0x506 PushI
	KillTimer(var_11_int); // 0x507 Func
	var_12_int = var_2_int; // 0x509 PushT
	if(var_12_int == 0) goto Label_1295; // 0x50a JumpB
	var_2_int = 0; // 0x50b TMovB
	var_13_string = "head"; // 0x50c PushS
	UnlookAsync(var_13_string); // 0x50d Func
	
Label_1295:
	func_1452(var_10_object); // 0x510 NEW_2
	return 0; // 0x512 Return
}


func_267(var_100_string)
{
	RemoveRTEnvelope(); // 0x10c Func
	SetDeathState(); // 0x10e Func
	Stop(); // 0x110 Func
	StopAsync(); // 0x112 Func
	StopSecondaryAnimation(); // 0x114 Func
	var_101_string = ""; // 0x116 PushV
	var_101_string = var_100_string; // 0x117 Mov
	func_1900(var_101_string); // 0x118 NEW_2
	var_130_string = "all"; // 0x11a PushS
	PlayAnimation(var_130_string, var_100_string); // 0x11b Func
	WaitForAnimEnd(); // 0x11d Func
	var_131_string = "all"; // 0x11f PushS
	LockAnimationEnd(var_131_string, var_100_string); // 0x120 Func
	RemoveEnvelope(); // 0x122 Func
	return 0; // 0x124 Return
}


func_803(var_0_object, var_523_float, var_524_int)
{
	var_525_object = Obj(); var_526_float = 0; var_527_float = 0; var_528_object = Obj(); var_529_float = 0; var_530_float = 0; // 0x323 PushV
	var_531_float = 0.9; // 0x324 PushF
	var_532_float = var_523_float * var_531_float; // 0x325 Mult
	GetVictim(var_532_float, var_528_object); // 0x326 Func
	ReportAttack(var_0_object); // 0x328 Func
	var_533_bool = var_528_object == var_0_object; // 0x32a Eq
	if(var_533_bool == 0) goto Label_840; // 0x32b JumpB
	var_534_float = 0; var_535_object = Obj(); var_536_int = 0; // 0x32c PushV
	var_535_object = var_528_object; // 0x32d Mov
	var_536_int = var_524_int; // 0x32e Mov
	func_490(var_536_int); // 0x32f NEW_2
	var_529_float = var_534_float; // 0x330 Mov
	var_537_float = 0; var_538_object = Obj(); var_539_float = 0; var_540_int = 0; // 0x332 PushV
	var_538_object = var_528_object; // 0x333 Mov
	var_539_float = var_529_float; // 0x334 Mov
	var_541_int = 0; var_542_object = Obj(); var_543_int = 0; // 0x335 PushV
	var_542_object = var_528_object; // 0x336 Mov
	var_543_int = var_524_int; // 0x337 Mov
	func_493(var_543_int); // 0x338 NEW_2
	var_540_int = var_541_int; // 0x339 Mov
	func_1559(var_537_float, var_538_object, var_539_float, var_540_int); // 0x33b NEW_2
	var_530_float = var_537_float; // 0x33c Mov
	var_598_int = 0; // 0x33e PushV
	func_496(var_598_int); // 0x33f NEW_2
	ReportHit(var_0_object, var_598_int, var_530_float, var_529_float); // 0x341 Func
	var_599_object = Obj(); var_600_float = 0; // 0x343 PushV
	var_599_object = var_528_object; // 0x344 Mov
	var_600_float = var_530_float; // 0x345 Mov
	func_498(var_599_object, var_600_float); // 0x346 NEW_2
	
Label_840:
	return 6; // 0x348 Return
}


func_299(var_61_bool, var_62_object, var_84_bool, var_685_object)
{
	var_63_float = 0; var_64_float = 0; // 0x12b PushV
	var_65_bool = 0; var_66_object = Obj(); // 0x12c PushV
	var_66_object = var_62_object; // 0x12d Mov
	func_1704(var_65_bool, var_66_object); // 0x12e NEW_2
	var_67_bool = var_65_bool == 0; // 0x130 Not
	if(var_67_bool == 0) goto Label_308; // 0x131 JumpB
	var_61_bool = 0; // 0x132 MovB
	return 2; // 0x133 Return
	
Label_308:
	var_68_float = 0; var_69_object = Obj(); // 0x134 PushV
	var_69_object = var_62_object; // 0x135 Mov
	func_1512(var_69_object); // 0x136 NEW_2
	var_64_float = var_68_float; // 0x137 Mov
	var_76_bool = 0; var_77_float = 0; var_78_float = 0; var_79_float = 0; // 0x139 PushV
	var_77_float = var_64_float; // 0x13a Mov
	var_78_float = 250000.0; // 0x13b MovF
	var_79_float = 3240000.0; // 0x13c MovF
	func_1999(var_76_bool, var_77_float, var_78_float, var_79_float); // 0x13d NEW_2
	if(var_76_bool == 0) goto Label_328; // 0x13f JumpB
	var_82_bool = 0; var_83_object = Obj(); // 0x140 PushV
	var_83_object = var_62_object; // 0x141 Mov
	TaskCall(3); // 0x142 TaskCall
	func_336(var_64_float, var_84_bool, var_82_bool, var_83_object); // 0x143 NEW_2
	TaskReturn(); // 0x144 TaskReturn
	var_61_bool = var_84_bool; // 0x145 Mov
	return 2; // 0x147 Return
	
Label_328:
	var_683_bool = 0; var_684_object = Obj(); // 0x148 PushV
	var_684_object = var_62_object; // 0x149 Mov
	TaskCall(4); // 0x14a TaskCall
	func_462(var_683_bool, var_684_object); // 0x14b NEW_2
	TaskReturn(); // 0x14c TaskReturn
	var_61_bool = var_685_object; // 0x14d Mov
	return 2; // 0x14f Return
}


func_1328(var_0_object, var_1_bool, var_301_bool, var_302_object, var_303_float, var_304_float, var_305_bool, var_306_bool)
{
	var_307_bool = 0; var_308_bool = 0; var_309_object = Obj(); var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_object = Obj(); var_315_bool = 0; var_316_bool = 0; var_317_object = Obj(); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_float = 0; var_322_object = Obj(); // 0x530 PushV
	var_0_object = 0; // 0x531 TMovB
	var_1_bool = var_302_object; // 0x532 TMov
	var_316_bool = var_306_bool; // 0x533 Mov
	
Label_1332:
	var_323_bool = 0; var_324_object = Obj(); // 0x534 PushV
	var_324_object = var_302_object; // 0x535 Mov
	func_1468(var_323_bool, var_324_object); // 0x536 NEW_2
	var_327_bool = var_323_bool == 0; // 0x538 Not
	if(var_327_bool == 0) goto Label_1340; // 0x539 JumpB
	var_301_bool = 0; // 0x53a MovB
	return 16; // 0x53b Return
	
Label_1340:
	GetPosition(var_318_cvector); // 0x53c ObjFunc
	GetPosition(var_319_cvector); // 0x53e Func
	var_320_cvector = var_318_cvector - var_319_cvector; // 0x540 Sub2
	var_321_float = var_320_cvector | var_320_cvector; // 0x541 Or2
	var_328_bool = 0; // 0x542 PushV
	var_328_bool = 0; // 0x543 MovB
	var_329_int = 0; // 0x544 PushI
	var_330_bool = var_304_float > var_329_int; // 0x545 GT
	if(var_330_bool == 0) goto Label_1355; // 0x546 JumpB
	var_331_float = var_304_float * var_304_float; // 0x547 Mult
	var_332_bool = var_321_float > var_331_float; // 0x548 GT
	if(var_332_bool == 0) goto Label_1355; // 0x549 JumpB
	var_328_bool = 1; // 0x54a MovB
	
Label_1355:
	if(var_328_bool == 0) goto Label_1360; // 0x54b JumpB
	Stop(); // 0x54c Func
	var_301_bool = 0; // 0x54e MovB
	return 16; // 0x54f Return
	
Label_1360:
	var_333_float = var_303_float * var_303_float; // 0x550 Mult
	var_334_bool = var_321_float > var_333_float; // 0x551 GT
	if(var_334_bool == 0) goto Label_1422; // 0x552 JumpB
	GetPFPosition(var_318_cvector); // 0x553 ObjFunc
	FindPathTo(var_322_object, var_318_cvector); // 0x555 Func
	var_335_bool = var_322_object != 0; // 0x557 NullNeq
	if(var_335_bool == 0) goto Label_1371; // 0x558 JumpB
	var_317_object = var_322_object; // 0x559 Mov
	var_322_object = 0; // 0x55a SetNull
	
Label_1371:
	var_336_bool = var_317_object != 0; // 0x55b NullNeq
	if(var_336_bool == 0) goto Label_1404; // 0x55c JumpB
	var_337_bool = var_316_bool; // 0x55d Push
	if(var_337_bool == 0) goto Label_1381; // 0x55e JumpB
	var_316_bool = 0; // 0x55f MovB
	RotatePath(var_317_object, var_315_bool); // 0x560 Func
	var_338_bool = var_315_bool == 0; // 0x562 Not
	if(var_338_bool == 0) goto Label_1381; // 0x563 JumpB
	goto Label_1428; // 0x564 Jump
	
Label_1428:
	var_301_bool = !var_0_object; // 0x594 Not2
	return 16; // 0x595 Return
	
Label_1381:
	var_339_int = 0; // 0x565 PushI
	var_340_float = 0.3; // 0x566 PushF
	SetTimer(var_339_int, var_340_float); // 0x567 Func
	var_341_string = ""; // 0x569 PushV
	func_1475(var_341_string); // 0x56a NEW_2
	var_342_string = ""; // 0x56c PushV
	func_1477(var_342_string); // 0x56d NEW_2
	FollowPath(var_317_object, var_305_bool, var_315_bool, var_341_string, var_342_string); // 0x56f Func
	var_343_bool = var_315_bool == 0; // 0x571 Not
	if(var_343_bool == 0) goto Label_1402; // 0x572 JumpB
	var_344_object = var_0_object; // 0x573 PushT
	if(var_344_object == 0) goto Label_1400; // 0x574 JumpB
	var_317_object = 0; // 0x575 SetNull
	goto Label_1428; // 0x576 Jump
	
Label_1400:
	goto Label_1427; // 0x578 Jump
	
Label_1427:
	goto Label_1332; // 0x593 Jump
	
Label_1402:
	var_317_object = 0; // 0x57a SetNull
	goto Label_1420; // 0x57b Jump
	
Label_1420:
	var_322_object = 0; // 0x58c SetNull
	goto Label_1426; // 0x58d Jump
	
Label_1426:
	var_317_object = 0; // 0x592 SetNull
	
Label_1404:
	var_345_int = 0; // 0x57c PushI
	KillTimer(var_345_int); // 0x57d Func
	var_346_float = 0.5; // 0x57f PushF
	Sleep(var_346_float, var_315_bool); // 0x580 Func
	var_347_bool = var_315_bool == 0; // 0x582 Not
	if(var_347_bool == 0) goto Label_1416; // 0x583 JumpB
	var_348_object = var_0_object; // 0x584 PushT
	if(var_348_object == 0) goto Label_1416; // 0x585 JumpB
	var_317_object = 0; // 0x586 SetNull
	goto Label_1428; // 0x587 Jump
	
Label_1416:
	var_349_int = 0; // 0x588 PushI
	var_350_float = 0.3; // 0x589 PushF
	SetTimer(var_349_int, var_350_float); // 0x58a Func
	
Label_1422:
	var_351_int = 0; // 0x58e PushI
	KillTimer(var_351_int); // 0x58f Func
	goto Label_1428; // 0x591 Jump
}


func_1859(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x743 PushV
	GetScene(var_23_object); // 0x744 Func
	var_25_string = "scripted"; // 0x746 PushS
	var_26_string = "blood_dir.xml"; // 0x747 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x748 Func
	var_27_object = Obj(); // 0x74a PushV
	var_27_object = var_16_object; // 0x74b Mov
	func_1747(var_27_object); // 0x74c NEW_2
	return 4; // 0x74e Return
}


func_842(var_0_object, var_490_bool, var_491_float)
{
	var_492_int = 0; var_493_bool = 0; var_494_int = 0; var_495_string = ""; var_496_int = 0; var_497_bool = 0; var_498_int = 0; var_499_string = ""; // 0x34a PushV
	func_1183(var_499_string); // 0x34c NEW_2
	irand(var_496_int, var_499_string); // 0x34e Func
	var_500_int = 1; // 0x350 PushI
	var_496_int = var_496_int + var_500_int; // 0x351 Add2
	Face(var_0_object); // 0x352 Func
	var_501_bool = 1; // 0x354 PushB
	SetAttackState(var_501_bool); // 0x355 Func
	func_2071(); // 0x358 NEW_2
	var_502_string = "all"; // 0x35a PushS
	var_503_string = "attack_begin"; // 0x35b PushS
	var_504_int = var_503_string + var_496_int; // 0x35c Add
	PlayAnimation(var_502_string, var_504_int); // 0x35d Func
	WaitForAnimEnd(); // 0x35f Func
	func_1151(var_498_int, var_499_string); // 0x362 NEW_2
	var_520_bool = 0; var_521_object = Obj(); // 0x364 PushV
	var_521_object = var_0_object; // 0x365 MovT
	func_1704(var_520_bool, var_521_object); // 0x366 NEW_2
	var_522_bool = var_520_bool == 0; // 0x368 Not
	if(var_522_bool == 0) goto Label_878; // 0x369 JumpB
	StopAsync(); // 0x36a Func
	var_490_bool = 0; // 0x36c MovB
	return 8; // 0x36d Return
	
Label_878:
	var_523_float = 0; var_524_int = 0; // 0x36e PushV
	var_523_float = var_491_float; // 0x36f Mov
	var_524_int = var_496_int; // 0x370 Mov
	func_803(var_499_string, var_523_float, var_524_int); // 0x371 NEW_2
	var_622_string = "all"; // 0x373 PushS
	var_623_string = "attack_middle"; // 0x374 PushS
	var_624_int = var_623_string + var_496_int; // 0x375 Add
	HasAnimation(var_497_bool, var_622_string, var_624_int); // 0x376 Func
	var_625_bool = var_497_bool; // 0x378 Push
	if(var_625_bool == 0) goto Label_959; // 0x379 JumpB
	func_2071(); // 0x37b NEW_2
	var_626_string = "all"; // 0x37d PushS
	var_627_string = "attack_middle"; // 0x37e PushS
	var_628_int = var_627_string + var_496_int; // 0x37f Add
	PlayAnimation(var_626_string, var_628_int); // 0x380 Func
	WaitForAnimEnd(); // 0x382 Func
	func_1183(var_499_string); // 0x385 NEW_2
	var_629_bool = 0; var_630_object = Obj(); // 0x387 PushV
	var_630_object = var_0_object; // 0x388 MovT
	func_1704(var_629_bool, var_630_object); // 0x389 NEW_2
	var_631_bool = var_629_bool == 0; // 0x38b Not
	if(var_631_bool == 0) goto Label_913; // 0x38c JumpB
	StopAsync(); // 0x38d Func
	var_490_bool = 0; // 0x38f MovB
	return 8; // 0x390 Return
	
Label_913:
	var_632_float = 0; var_633_int = 0; // 0x391 PushV
	var_632_float = var_491_float; // 0x392 Mov
	var_633_int = var_496_int; // 0x393 Mov
	func_803(var_499_string, var_632_float, var_633_int); // 0x394 NEW_2
	var_498_int = 1; // 0x396 MovI
	
Label_919:
	var_634_string = "attack_middle"; // 0x397 PushS
	var_635_int = var_634_string + var_496_int; // 0x398 Add
	var_636_string = "_"; // 0x399 PushS
	var_637_int = var_635_int + var_636_string; // 0x39a Add
	var_499_string = var_637_int + var_498_int; // 0x39b Add2
	var_638_string = "all"; // 0x39c PushS
	HasAnimation(var_497_bool, var_638_string, var_499_string); // 0x39d Func
	var_639_bool = var_497_bool == 0; // 0x39f Not
	if(var_639_bool == 0) goto Label_930; // 0x3a0 JumpB
	goto Label_959; // 0x3a1 Jump
	
Label_959:
	var_640_bool = 0; // 0x3bf PushB
	SetAttackState(var_640_bool); // 0x3c0 Func
	var_641_string = "all"; // 0x3c2 PushS
	var_642_string = "attack_end"; // 0x3c3 PushS
	var_643_int = var_642_string + var_496_int; // 0x3c4 Add
	PlayAnimation(var_641_string, var_643_int); // 0x3c5 Func
	var_644_bool = 0; // 0x3c7 PushV
	func_1193(var_644_bool); // 0x3c8 NEW_2
	if(var_644_bool == 0) goto Label_977; // 0x3ca JumpB
	var_645_bool = 0; var_646_float = 0; // 0x3cb PushV
	var_646_float = 0.45; // 0x3cc MovF
	func_981(var_645_bool, var_646_float); // 0x3cd NEW_2
	StopAsync(); // 0x3cf Func
	
Label_977:
	var_490_bool = 1; // 0x3d1 MovB
	return 8; // 0x3d2 Return
	
Label_930:
	func_2071(); // 0x3a3 NEW_2
	var_654_string = "all"; // 0x3a5 PushS
	PlayAnimation(var_654_string, var_499_string); // 0x3a6 Func
	WaitForAnimEnd(); // 0x3a8 Func
	func_1183(var_499_string); // 0x3ab NEW_2
	var_655_bool = 0; var_656_object = Obj(); // 0x3ad PushV
	var_656_object = var_0_object; // 0x3ae MovT
	func_1704(var_655_bool, var_656_object); // 0x3af NEW_2
	var_657_bool = var_655_bool == 0; // 0x3b1 Not
	if(var_657_bool == 0) goto Label_951; // 0x3b2 JumpB
	StopAsync(); // 0x3b3 Func
	var_490_bool = 0; // 0x3b5 MovB
	return 8; // 0x3b6 Return
	
Label_951:
	var_658_float = 0; var_659_int = 0; // 0x3b7 PushV
	var_658_float = var_491_float; // 0x3b8 Mov
	var_659_int = var_496_int; // 0x3b9 Mov
	func_803(var_499_string, var_658_float, var_659_int); // 0x3ba NEW_2
	var_660_int = 1; // 0x3bc PushI
	var_498_int = var_498_int + var_660_int; // 0x3bd Add2
	goto Label_919; // 0x3be Jump
}


func_336(var_0_object, var_82_bool, var_83_object, var_200_object)
{
	var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_object = Obj(); var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_object = Obj(); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_object = Obj(); var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_cvector = CVector(0,0,0); // 0x150 PushV
	var_99_object = Obj(); // 0x151 PushV
	var_99_object = var_83_object; // 0x152 Mov
	func_2062(var_99_object); // 0x153 NEW_2
	var_0_object = 0; // 0x155 TMovB
	var_104_bool = 0; var_105_object = Obj(); // 0x156 PushV
	var_105_object = var_83_object; // 0x157 Mov
	func_1738(var_105_object); // 0x158 NEW_2
	var_118_bool = 0; var_119_object = Obj(); // 0x15a PushV
	var_119_object = var_83_object; // 0x15b Mov
	func_1704(var_118_bool, var_119_object); // 0x15c NEW_2
	var_120_bool = var_118_bool == 0; // 0x15e Not
	if(var_120_bool == 0) goto Label_354; // 0x15f JumpB
	var_82_bool = 0; // 0x160 MovB
	return 14; // 0x161 Return
	
Label_354:
	func_2071(); // 0x163 NEW_2
	Face(var_83_object); // 0x165 Func
	var_125_string = "all"; // 0x167 PushS
	var_126_string = "aattack_begin1"; // 0x168 PushS
	PlayAnimation(var_125_string, var_126_string); // 0x169 Func
	WaitForAnimEnd(); // 0x16b Func
	var_127_bool = 0; var_128_object = Obj(); // 0x16d PushV
	var_128_object = var_83_object; // 0x16e Mov
	func_1704(var_127_bool, var_128_object); // 0x16f NEW_2
	var_129_bool = var_127_bool == 0; // 0x171 Not
	if(var_129_bool == 0) goto Label_375; // 0x172 JumpB
	StopAsync(); // 0x173 Func
	var_82_bool = 0; // 0x175 MovB
	return 14; // 0x176 Return
	
Label_375:
	var_130_string = "all"; // 0x177 PushS
	var_131_string = "aattack_end1"; // 0x178 PushS
	PlayAnimation(var_130_string, var_131_string); // 0x179 Func
	GetScene(var_92_object); // 0x17b Func
	var_132_string = "knife"; // 0x17d PushS
	GetGeometryLocator(var_132_string, var_94_bool, var_93_cvector); // 0x17e Func
	var_133_string = "scripted"; // 0x180 PushS
	var_134_cvector = CVector(0.0, 0.0, 1.0); // 0x181 PushVec
	var_135_string = "grabitel_knife.xml"; // 0x182 PushS
	AddActorByType(var_95_object, var_133_string, var_92_object, var_93_cvector, var_134_cvector, var_135_string); // 0x183 Func
	var_136_string = "Owner"; // 0x185 PushS
	var_137_object = Obj(); // 0x186 PushV
	func_1941(var_137_object); // 0x187 NEW_2
	SetScriptProperty(var_136_string, var_137_object); // 0x189 ObjFunc
	var_138_string = "Target"; // 0x18b PushS
	SetScriptProperty(var_138_string, var_83_object); // 0x18c ObjFunc
	GetPosition(var_96_cvector); // 0x18e ObjFunc
	GetEyesHeight(var_97_float); // 0x190 ObjFunc
	var_139_float = GetByIndex(var_96_cvector, 1); // 0x192 PushE
	var_140_int = 10; // 0x193 PushI
	var_141_int = var_97_float - var_140_int; // 0x194 Sub
	var_139_float = var_139_float + var_141_int; // 0x195 Add2
	SetByIndex(var_96_cvector, 1) = var_139_float; // 0x196 PopE
	var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_float = 0; // 0x197 PushV
	var_143_cvector = var_93_cvector; // 0x198 Mov
	var_144_cvector = var_96_cvector; // 0x199 Mov
	var_145_float = 2000.0; // 0x19a MovF
	func_2250(var_142_cvector, var_143_cvector, var_144_cvector, var_145_float); // 0x19b NEW_2
	var_98_cvector = var_142_cvector; // 0x19c Mov
	var_193_string = "StartDirection"; // 0x19e PushS
	SetScriptProperty(var_193_string, var_98_cvector); // 0x19f ObjFunc
	WaitForAnimEnd(); // 0x1a1 Func
	StopAsync(); // 0x1a3 Func
	var_194_object = var_0_object; // 0x1a5 PushT
	if(var_194_object == 0) goto Label_425; // 0x1a6 JumpB
	var_82_bool = 1; // 0x1a7 MovB
	return 14; // 0x1a8 Return
	
Label_425:
	var_195_bool = 0; var_196_object = Obj(); // 0x1a9 PushV
	var_196_object = var_83_object; // 0x1aa Mov
	func_1704(var_195_bool, var_196_object); // 0x1ab NEW_2
	var_197_bool = var_195_bool == 0; // 0x1ad Not
	if(var_197_bool == 0) goto Label_433; // 0x1ae JumpB
	var_82_bool = 0; // 0x1af MovB
	return 14; // 0x1b0 Return
	
Label_433:
	var_198_bool = 0; var_199_object = Obj(); // 0x1b1 PushV
	var_199_object = var_83_object; // 0x1b2 Mov
	TaskCall(4); // 0x1b3 TaskCall
	func_462(var_198_bool, var_199_object); // 0x1b4 NEW_2
	TaskReturn(); // 0x1b5 TaskReturn
	var_82_bool = var_200_object; // 0x1b6 Mov
	return 14; // 0x1b8 Return
}


func_1873()
{
	var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); // 0x751 PushV
	GetPosition(var_379_cvector); // 0x752 ObjFunc
	GetPosition(var_380_cvector); // 0x754 Func
	var_381_cvector = var_379_cvector - var_380_cvector; // 0x756 Sub2
	var_382_float = GetByIndex(var_381_cvector, 0); // 0x757 PushE
	var_383_float = GetByIndex(var_381_cvector, 2); // 0x758 PushE
	RotateAsync(var_382_float, var_383_float); // 0x759 Func
	return 6; // 0x75b Return
}


func_1884(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0x75c PushV
	IsLoaded(var_27_bool); // 0x75d Func
	var_25_bool = var_27_bool; // 0x75f Mov
	return 2; // 0x760 Return
}


func_1889(var_14_object)
{
	var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); // 0x761 PushV
	GetEyesHeight(var_17_float); // 0x762 ObjFunc
	var_18_cvector = CVector(0.0, 0.0, 0.0); // 0x764 MovV
	var_19_float = GetByIndex(var_18_cvector, 1); // 0x765 PushE
	var_19_float = var_17_float; // 0x766 Mov
	SetByIndex(var_18_cvector, 1) = var_19_float; // 0x767 PopE
	var_20_string = "head"; // 0x768 PushS
	LookAsync(var_14_object, var_20_string, var_18_cvector); // 0x769 Func
	return 4; // 0x76b Return
}


func_1900(var_101_string)
{
	var_102_bool = 0; var_103_int = 0; var_104_bool = 0; var_105_int = 0; var_106_bool = 0; var_107_float = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_bool = 0; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_bool = 0; var_115_float = 0; var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); // 0x76c PushV
	IsExisting3DSound(var_110_bool, var_101_string); // 0x76d Func
	var_118_bool = var_110_bool == 0; // 0x76f Not
	if(var_118_bool == 0) goto Label_1925; // 0x770 JumpB
	var_111_int = 0; // 0x771 MovI
	
Label_1906:
	var_119_int = 1; // 0x772 PushI
	var_120_int = var_111_int + var_119_int; // 0x773 Add
	var_121_int = var_101_string + var_120_int; // 0x774 Add
	IsExisting3DSound(var_112_bool, var_121_int); // 0x775 Func
	var_122_bool = var_112_bool == 0; // 0x777 Not
	if(var_122_bool == 0) goto Label_1914; // 0x778 JumpB
	goto Label_1917; // 0x779 Jump
	
Label_1917:
	var_123_bool = var_111_int == 0; // 0x77d Not
	if(var_123_bool == 0) goto Label_1920; // 0x77e JumpB
	return 16; // 0x77f Return
	
Label_1920:
	irand(var_113_int, var_111_int); // 0x780 Func
	var_124_int = 1; // 0x782 PushI
	var_125_int = var_113_int + var_124_int; // 0x783 Add
	var_101_string = var_101_string + var_125_int; // 0x784 Add2
	
Label_1925:
	Is3DSoundLoaded(var_114_bool, var_101_string); // 0x785 Func
	var_126_bool = var_114_bool; // 0x787 Push
	if(var_126_bool == 0) goto Label_1940; // 0x788 JumpB
	GetEyesHeight(var_115_float); // 0x789 Func
	GetDirection(var_116_cvector); // 0x78b Func
	var_127_int = 50; // 0x78d PushI
	var_117_cvector = var_116_cvector * var_127_int; // 0x78e Mult2
	var_128_float = GetByIndex(var_117_cvector, 1); // 0x78f PushE
	var_128_float = var_128_float + var_115_float; // 0x790 Add2
	SetByIndex(var_117_cvector, 1) = var_128_float; // 0x791 PopE
	PlayGlobalSound(var_101_string, var_117_cvector); // 0x792 Func
	
Label_1940:
	return 16; // 0x794 Return
	
Label_1914:
	var_129_int = 1; // 0x77a PushI
	var_111_int = var_111_int + var_129_int; // 0x77b Add2
	goto Label_1906; // 0x77c Jump
}


func_1941(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x795 PushV
	self(var_59_object); // 0x796 Func
	var_57_object = var_59_object; // 0x798 Mov
	return 2; // 0x799 Return
}


func_1430(var_0_bool, var_1_object, var_18_int)
{
	var_19_int = 0; // 0x597 PushI
	var_20_bool = var_18_int != var_19_int; // 0x598 Neq
	if(var_20_bool == 0) goto Label_1435; // 0x599 JumpB
	return 0; // 0x59a Return
	
Label_1435:
	var_21_bool = 0; var_22_object = Obj(); // 0x59b PushV
	var_22_object = var_1_object; // 0x59c MovT
	func_1468(var_21_bool, var_22_object); // 0x59d NEW_2
	var_57_bool = var_21_bool == 0; // 0x59f Not
	if(var_57_bool == 0) goto Label_1442; // 0x5a0 JumpB
	var_0_bool = 1; // 0x5a1 TMovB
	
Label_1442:
	var_58_int = 0; // 0x5a2 PushI
	KillTimer(var_58_int); // 0x5a3 Func
	Stop(); // 0x5a5 Func
	return 0; // 0x5a7 Return
}


func_1947(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x79b PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x79c Or
	var_51_float = sqrt(var_52_int); // 0x79d Sqrt2
	var_53_float = 0.0; // 0x79e PushF
	var_54_bool = var_51_float < var_53_float; // 0x79f LT
	if(var_54_bool == 0) goto Label_1955; // 0x7a0 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x7a1 MovV
	return 2; // 0x7a2 Return
	
Label_1955:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x7a3 Div2
	return 2; // 0x7a4 Return
}


func_1957(var_575_float, var_576_float, var_577_float)
{
	var_580_bool = var_576_float < var_577_float; // 0x7a6 LT
	if(var_580_bool == 0) goto Label_1962; // 0x7a7 JumpB
	var_575_float = var_576_float; // 0x7a8 Mov
	goto Label_1963; // 0x7a9 Jump
	
Label_1963:
	return 0; // 0x7ab Return
	
Label_1962:
	var_575_float = var_577_float; // 0x7aa Mov
}


func_1452(var_0_bool)
{
	var_0_bool = 1; // 0x5ac TMovB
	var_14_int = 0; // 0x5ad PushI
	KillTimer(var_14_int); // 0x5ae Func
	Stop(); // 0x5b0 Func
	return 0; // 0x5b2 Return
}


func_1964(var_162_float, var_163_float, var_164_float, var_165_float)
{
	var_166_float = var_164_float * var_164_float; // 0x7ad Mult
	var_167_int = 4; // 0x7ae PushI
	var_168_float = var_167_int * var_163_float; // 0x7af Mult
	var_169_float = var_168_float * var_165_float; // 0x7b0 Mult
	var_162_float = var_166_float - var_169_float; // 0x7b1 Sub2
	return 0; // 0x7b2 Return
}


func_1971(var_176_float, var_177_float, var_178_float, var_180_float)
{
	var_181_float = 0; var_182_float = 0; // 0x7b3 PushV
	var_183_int = -var_178_float; // 0x7b4 Neg
	var_184_int = var_183_int - var_180_float; // 0x7b5 Sub
	var_185_int = 2; // 0x7b6 PushI
	var_186_float = var_185_int * var_177_float; // 0x7b7 Mult
	var_182_float = var_184_int / var_184_int; // 0x7b8 Div2
	var_187_int = 0; // 0x7b9 PushI
	var_188_bool = var_182_float > var_187_int; // 0x7ba GT
	if(var_188_bool == 0) goto Label_1982; // 0x7bb JumpB
	var_176_float = var_182_float; // 0x7bc Mov
	return 2; // 0x7bd Return
	
Label_1982:
	var_189_int = -var_178_float; // 0x7be Neg
	var_190_int = var_189_int + var_180_float; // 0x7bf Add
	var_191_int = 2; // 0x7c0 PushI
	var_192_float = var_191_int * var_177_float; // 0x7c1 Mult
	var_176_float = var_190_int / var_190_int; // 0x7c2 Div2
	return 2; // 0x7c3 Return
}


func_1468(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x5bd PushV
	var_24_object = var_22_object; // 0x5be Mov
	func_1704(var_23_bool, var_24_object); // 0x5bf NEW_2
	var_21_bool = var_23_bool; // 0x5c0 Mov
	return 0; // 0x5c2 Return
}


func_1475(var_341_string)
{
	var_341_string = "walk"; // 0x5c3 MovS
	return 0; // 0x5c4 Return
}


func_1988(var_46_float, var_47_float, var_48_float, var_49_float)
{
	var_50_bool = var_47_float < var_48_float; // 0x7c5 LT
	if(var_50_bool == 0) goto Label_1993; // 0x7c6 JumpB
	var_46_float = var_48_float; // 0x7c7 Mov
	return 0; // 0x7c8 Return
	
Label_1993:
	var_51_bool = var_47_float > var_49_float; // 0x7c9 GT
	if(var_51_bool == 0) goto Label_1997; // 0x7ca JumpB
	var_46_float = var_49_float; // 0x7cb Mov
	return 0; // 0x7cc Return
	
Label_1997:
	var_46_float = var_47_float; // 0x7cd Mov
	return 0; // 0x7ce Return
}


func_1477(var_342_string)
{
	var_342_string = "run"; // 0x5c5 MovS
	return 0; // 0x5c6 Return
}


func_1479(var_60_object)
{
	
Label_1480:
	var_61_bool = 0; var_62_object = Obj(); // 0x5c8 PushV
	var_62_object = var_60_object; // 0x5c9 Mov
	TaskCall(2); // 0x5ca TaskCall
	func_299(var_54_object, var_60_object, var_61_bool, var_62_object); // 0x5cb NEW_2
	TaskReturn(); // 0x5cc TaskReturn
	var_691_int = 1; // 0x5ce PushI
	Sleep(var_691_int); // 0x5cf Func
	goto Label_1480; // 0x5d1 Jump
}


func_462(var_198_bool, var_199_object)
{
	var_206_bool = GlobalVars[0]; // 0x1cf PushGE
	var_206_bool = 0; // 0x1d0 MovB
	GlobalVars[0] = var_206_bool; // 0x1d1 PopGE
	var_207_object = Obj(); var_208_bool = 0; var_209_float = 0; // 0x1d2 PushV
	var_207_object = var_199_object; // 0x1d3 Mov
	var_208_bool = 1; // 0x1d4 MovB
	var_209_float = 200.0; // 0x1d5 MovF
	func_539(var_203_bool, var_204_float, var_205_int, var_198_bool, var_199_object, var_207_object, var_208_bool, var_209_float); // 0x1d6 NEW_2
	var_677_bool = 0; // 0x1d8 PushV
	var_677_bool = 0; // 0x1d9 MovB
	var_678_bool = GlobalVars[0]; // 0x1da PushGE
	if(var_678_bool == 0) goto Label_479; // 0x1db JumpB
	var_679_int = var_3_int; // 0x1dc PushT
	if(var_679_int == 0) goto Label_479; // 0x1dd JumpB
	var_677_bool = 1; // 0x1de MovB
	
Label_479:
	if(var_677_bool == 0) goto Label_486; // 0x1df JumpB
	var_680_string = "all"; // 0x1e0 PushS
	var_681_string = "attack_off"; // 0x1e1 PushS
	PlayAnimation(var_680_string, var_681_string); // 0x1e2 Func
	WaitForAnimEnd(); // 0x1e4 Func
	
Label_486:
	var_682_bool = GlobalVars[0]; // 0x1e6 PushGE
	var_198_bool = var_682_bool; // 0x1e7 Mov
	return 0; // 0x1e9 Return
}


func_1999(var_76_bool, var_77_float, var_78_float, var_79_float)
{
	var_76_bool = 0; // 0x7d0 MovB
	var_80_bool = var_77_float >= var_78_float; // 0x7d1 GE
	if(var_80_bool == 0) goto Label_2006; // 0x7d2 JumpB
	var_81_bool = var_77_float <= var_79_float; // 0x7d3 LE
	if(var_81_bool == 0) goto Label_2006; // 0x7d4 JumpB
	var_76_bool = 1; // 0x7d5 MovB
	
Label_2006:
	return 0; // 0x7d6 Return
}


func_979(var_3_int)
{
	var_3_int = 1; // 0x3d3 TMovB
	return 0; // 0x3d4 Return
}


func_1491(var_565_string, var_566_int)
{
	var_567_int = 2; // 0x5d4 PushI
	var_568_bool = var_566_int == var_567_int; // 0x5d5 Eq
	if(var_568_bool == 0) goto Label_1498; // 0x5d6 JumpB
	var_565_string = "fire"; // 0x5d7 MovS
	return 0; // 0x5d8 Return
	
Label_1498:
	var_569_int = 1; // 0x5da PushI
	var_570_bool = var_566_int == var_569_int; // 0x5db Eq
	if(var_570_bool == 0) goto Label_1503; // 0x5dc JumpB
	var_565_string = "bullet"; // 0x5dd MovS
	return 0; // 0x5de Return
	
Label_1503:
	var_565_string = "phys"; // 0x5df MovS
	return 0; // 0x5e0 Return
}


func_981(var_645_bool, var_646_float)
{
	var_647_float = 0; var_648_bool = 0; var_649_float = 0; var_650_bool = 0; // 0x3d5 PushV
	rand(var_649_float); // 0x3d6 Func
	var_651_bool = var_649_float < var_646_float; // 0x3d8 LT
	if(var_651_bool == 0) goto Label_1001; // 0x3d9 JumpB
	
Label_986:
	IsAnimationPlaying(var_650_bool); // 0x3da Func
	var_652_bool = var_650_bool == 0; // 0x3dc Not
	if(var_652_bool == 0) goto Label_991; // 0x3dd JumpB
	goto Label_1000; // 0x3de Jump
	
Label_1000:
	goto Label_1006; // 0x3e8 Jump
	
Label_1006:
	var_645_bool = 0; // 0x3ee MovB
	return 4; // 0x3ef Return
	
Label_991:
	var_653_bool = 0; // 0x3df PushV
	func_1079(var_653_bool); // 0x3e0 NEW_2
	if(var_653_bool == 0) goto Label_997; // 0x3e2 JumpB
	var_645_bool = 1; // 0x3e3 MovB
	return 4; // 0x3e4 Return
	
Label_997:
	sync(); // 0x3e5 Func
	goto Label_986; // 0x3e7 Jump
	
Label_1001:
	WaitForAnimEnd(); // 0x3e9 Func
	func_1183(var_650_bool); // 0x3ec NEW_2
}


func_2007(var_17_bool, var_18_object, var_19_float)
{
	var_20_bool = var_18_object == 0; // 0x7d8 Not
	if(var_20_bool == 0) goto Label_2012; // 0x7d9 JumpB
	var_17_bool = 0; // 0x7da MovB
	return 0; // 0x7db Return
	
Label_2012:
	var_21_int = 0; // 0x7dc PushI
	var_22_bool = var_19_float > var_21_int; // 0x7dd GT
	if(var_22_bool == 0) goto Label_2019; // 0x7de JumpB
	var_23_int = 8; // 0x7df PushI
	SendWorldWndMessage(var_23_int); // 0x7e0 Func
	goto Label_2028; // 0x7e2 Jump
	
Label_2028:
	var_24_float = 0; // 0x7ec PushV
	var_24_float = var_19_float; // 0x7ed Mov
	func_2052(var_24_float); // 0x7ee NEW_2
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; var_31_float = 0; var_32_float = 0; var_33_float = 0; // 0x7f0 PushV
	var_29_object = var_18_object; // 0x7f1 Mov
	var_30_string = "reputation"; // 0x7f2 MovS
	var_31_float = var_19_float; // 0x7f3 Mov
	var_32_float = 0; // 0x7f4 MovI
	var_33_float = 1; // 0x7f5 MovI
	func_1537(var_28_bool, var_29_object, var_30_string, var_31_float, var_32_float, var_33_float); // 0x7f6 NEW_2
	var_17_bool = 1; // 0x7f8 MovB
	return 0; // 0x7f9 Return
	
Label_2019:
	var_52_int = 0; // 0x7e3 PushI
	var_53_bool = var_19_float < var_52_int; // 0x7e4 LT
	if(var_53_bool == 0) goto Label_2026; // 0x7e5 JumpB
	var_54_int = 9; // 0x7e6 PushI
	SendWorldWndMessage(var_54_int); // 0x7e7 Func
	goto Label_2028; // 0x7e9 Jump
	
Label_2026:
	var_17_bool = 0; // 0x7ea MovB
	return 0; // 0x7eb Return
}


func_1505(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x5e1 PushV
	GetPosition(var_48_cvector); // 0x5e2 Func
	GetPosition(var_49_cvector); // 0x5e4 ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x5e6 Sub2
	return 4; // 0x5e7 Return
}


func_1512(var_68_float)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0x5e8 PushV
	GetPosition(var_73_cvector); // 0x5e9 Func
	GetPosition(var_74_cvector); // 0x5eb ObjFunc
	var_75_cvector = var_74_cvector - var_73_cvector; // 0x5ed Sub2
	var_68_float = var_75_cvector | var_75_cvector; // 0x5ee Or2
	return 6; // 0x5ef Return
}


func_490(var_534_float)
{
	var_534_float = 0.15; // 0x1eb MovF
	return 0; // 0x1ec Return
}


func_493(var_541_int)
{
	var_541_int = 0; // 0x1ee MovI
	return 0; // 0x1ef Return
}


func_1520(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x5f0 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x5f1 Func
	var_13_bool = var_16_bool; // 0x5f3 Mov
	return 2; // 0x5f4 Return
}


func_1008(var_0_object, var_429_bool, var_430_float)
{
	var_431_bool = 0; var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_float = 0; var_436_bool = 0; var_437_cvector = CVector(0,0,0); var_438_cvector = CVector(0,0,0); var_439_cvector = CVector(0,0,0); var_440_float = 0; // 0x3f0 PushV
	
Label_1009:
	IsAnimationPlaying(var_436_bool); // 0x3f1 Func
	var_441_bool = var_436_bool == 0; // 0x3f3 Not
	if(var_441_bool == 0) goto Label_1014; // 0x3f4 JumpB
	goto Label_1046; // 0x3f5 Jump
	
Label_1046:
	func_1183(var_440_float); // 0x417 NEW_2
	var_429_bool = 0; // 0x419 MovB
	return 10; // 0x41a Return
	
Label_1014:
	var_442_bool = 0; // 0x3f6 PushV
	func_1079(var_442_bool); // 0x3f7 NEW_2
	if(var_442_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_429_bool = 1; // 0x3fa MovB
	return 10; // 0x3fb Return
	
Label_1020:
	var_485_bool = 0; var_486_object = Obj(); // 0x3fc PushV
	var_486_object = var_0_object; // 0x3fd MovT
	func_1704(var_485_bool, var_486_object); // 0x3fe NEW_2
	var_487_bool = var_485_bool == 0; // 0x400 Not
	if(var_487_bool == 0) goto Label_1028; // 0x401 JumpB
	var_429_bool = 0; // 0x402 MovB
	return 10; // 0x403 Return
	
Label_1028:
	GetPFPosition(var_437_cvector); // 0x404 TObjFunc
	GetPFPosition(var_438_cvector); // 0x406 Func
	var_439_cvector = var_437_cvector - var_438_cvector; // 0x408 Sub2
	var_440_float = var_439_cvector | var_439_cvector; // 0x409 Or2
	var_488_float = var_430_float * var_430_float; // 0x40a Mult
	var_489_bool = var_440_float < var_488_float; // 0x40b LT
	if(var_489_bool == 0) goto Label_1043; // 0x40c JumpB
	var_490_bool = 0; var_491_float = 0; // 0x40d PushV
	var_491_float = var_430_float; // 0x40e Mov
	func_842(var_440_float, var_490_bool, var_491_float); // 0x40f NEW_2
	var_429_bool = 1; // 0x411 MovB
	return 10; // 0x412 Return
	
Label_1043:
	sync(); // 0x413 Func
	goto Label_1009; // 0x415 Jump
}


func_496(var_598_int)
{
	var_598_int = 1; // 0x1f0 MovI
	return 0; // 0x1f1 Return
}


func_498(var_599_object, var_600_float)
{
	var_601_bool = 0; // 0x1f3 PushV
	var_601_bool = 0; // 0x1f4 MovB
	var_602_int = 0; // 0x1f5 PushI
	var_603_bool = var_600_float > var_602_int; // 0x1f6 GT
	if(var_603_bool == 0) goto Label_510; // 0x1f7 JumpB
	var_604_bool = 0; var_605_object = Obj(); // 0x1f8 PushV
	var_605_object = var_599_object; // 0x1f9 Mov
	func_1632(var_604_bool, var_605_object); // 0x1fa NEW_2
	if(var_604_bool == 0) goto Label_510; // 0x1fc JumpB
	var_601_bool = 1; // 0x1fd MovB
	
Label_510:
	if(var_601_bool == 0) goto Label_517; // 0x1fe JumpB
	var_621_bool = GlobalVars[0]; // 0x1ff PushGE
	var_621_bool = 1; // 0x200 MovB
	GlobalVars[0] = var_621_bool; // 0x201 PopGE
	func_979(var_600_float); // 0x203 NEW_2
	
Label_517:
	return 0; // 0x205 Return
}


func_1525(var_36_bool, var_37_object, var_38_string)
{
	var_39_bool = 0; var_40_bool = 0; // 0x5f5 PushV
	var_41_string = "HasProperty"; // 0x5f6 PushS
	var_42_int = 2; // 0x5f7 PushI
	var_43_bool = IsFuncExist(var_37_object, var_41_string, var_42_int); // 0x5f8 FuncExist
	var_44_bool = var_43_bool == 0; // 0x5f9 Not
	if(var_44_bool == 0) goto Label_1533; // 0x5fa JumpB
	var_36_bool = 0; // 0x5fb MovB
	return 2; // 0x5fc Return
	
Label_1533:
	HasProperty(var_38_string, var_40_bool); // 0x5fd ObjFunc
	var_36_bool = var_40_bool; // 0x5ff Mov
	return 2; // 0x600 Return
}


func_2042(var_593_float)
{
	var_594_object = Obj(); var_595_object = Obj(); // 0x7fa PushV
	CreateFloatVector(var_595_object); // 0x7fb Func
	add(var_593_float); // 0x7fd ObjFunc
	var_596_int = 15; // 0x7ff PushI
	SendWorldWndMessage(var_596_int, var_595_object); // 0x800 Func
	return 2; // 0x802 Return
}


