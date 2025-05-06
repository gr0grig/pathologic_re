	task_0_event_17(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_14_object)
	{
	var_15_bool = 0; var_16_object = Obj(); // 0x9 PushV
	var_16_object = var_14_object; // 0xa Mov
	func_2177(var_15_bool, var_16_object); // 0xb NEW_2
	if(var_15_bool == 0) goto Label_21; // 0xd JumpB
	func_123(); // 0xf NEW_2
	var_51_object = Obj(); // 0x11 PushV
	var_51_object = var_14_object; // 0x12 Mov
	func_2184(var_51_object); // 0x13 NEW_2
	
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
	var_11_bool = 0; var_12_bool = 0; // 0xaa PushV
	IsOverrideActive(var_12_bool); // 0xab Func
	var_13_bool = var_12_bool == 0; // 0xad Not
	if(var_13_bool == 0) goto Label_179; // 0xae JumpB
	var_14_object = Obj(); // 0xaf PushV
	var_14_object = var_10_bool; // 0xb0 Mov
	func_2196(var_14_object); // 0xb1 NEW_2
	
Label_179:
	return 2; // 0xb3 Return
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	return 0; // 0x12a Return
}


task_1_event_16(var_0_object, var_1_string, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	return 0; // 0x12c Return
}


task_1_event_41(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	return 0; // 0x12e Return
}


task_3_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x1c0 PushV
	var_11_object = var_10_bool; // 0x1c1 Mov
	func_2318(); // 0x1c2 NEW_2
	return 0; // 0x1c4 Return
}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x1c6 PushV
	var_14_object = var_10_bool; // 0x1c7 Mov
	var_15_object = var_11_object; // 0x1c8 Mov
	func_2320(var_15_object); // 0x1c9 NEW_2
	return 0; // 0x1cb Return
}


task_3_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0x1cd PushS
	var_12_bool = var_10_bool == var_11_string; // 0x1ce Eq
	if(var_12_bool == 0) goto Label_465; // 0x1cf JumpB
	var_0_bool = 1; // 0x1d0 TMovB
	
Label_465:
	return 0; // 0x1d1 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x20b PushV
	var_11_object = var_10_bool; // 0x20c Mov
	func_2318(); // 0x20d NEW_2
	return 0; // 0x20f Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x211 PushV
	var_14_object = var_10_bool; // 0x212 Mov
	var_15_object = var_11_object; // 0x213 Mov
	func_2320(var_15_object); // 0x214 NEW_2
	return 0; // 0x216 Return
}


task_4_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0x218 PushS
	var_12_bool = var_10_bool == var_11_string; // 0x219 Eq
	if(var_12_bool == 0) goto Label_542; // 0x21a JumpB
	var_13_bool = GlobalVars[0]; // 0x21b PushGE
	var_13_bool = 1; // 0x21c MovB
	GlobalVars[0] = var_13_bool; // 0x21d PopGE
	
Label_542:
	return 0; // 0x21e Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x4b4 PushV
	var_11_object = var_10_object; // 0x4b5 Mov
	func_2318(); // 0x4b6 NEW_2
	return 0; // 0x4b8 Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x4ba PushV
	var_14_object = var_10_object; // 0x4bb Mov
	var_15_object = var_11_object; // 0x4bc Mov
	func_2320(var_15_object); // 0x4bd NEW_2
	return 0; // 0x4bf Return
}


task_5_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_11_string = "kill"; // 0x4c1 PushS
	var_12_bool = var_10_string == var_11_string; // 0x4c2 Eq
	if(var_12_bool == 0) goto Label_1226; // 0x4c3 JumpB
	var_13_bool = GlobalVars[0]; // 0x4c4 PushGE
	var_13_bool = 1; // 0x4c5 MovB
	GlobalVars[0] = var_13_bool; // 0x4c6 PopGE
	func_1290(var_10_string); // 0x4c8 NEW_2
	
Label_1226:
	return 0; // 0x4ca Return
}


task_5_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_11_int = 1; // 0x4fd PushI
	var_12_bool = var_10_int == var_11_int; // 0x4fe Eq
	if(var_12_bool == 0) goto Label_1285; // 0x4ff JumpB
	var_13_object = Obj(); // 0x500 PushV
	var_13_object = var_1_object; // 0x501 MovT
	func_2082(var_13_object); // 0x502 NEW_2
	goto Label_1289; // 0x504 Jump
	
Label_1289:
	return 0; // 0x509 Return
	
Label_1285:
	var_18_int = 0; // 0x505 PushV
	var_18_int = var_10_int; // 0x506 Mov
	func_1434(var_9_bool, var_10_int, var_18_int); // 0x507 NEW_2
}


task_5_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x518 PushV
	var_11_bool = 0; // 0x519 MovB
	var_12_bool = var_1_object == var_10_object; // 0x51a Eq
	if(var_12_bool == 0) goto Label_1311; // 0x51b JumpB
	var_13_bool = var_2_int == 0; // 0x51c Not
	if(var_13_bool == 0) goto Label_1311; // 0x51d JumpB
	var_11_bool = 1; // 0x51e MovB
	
Label_1311:
	if(var_11_bool == 0) goto Label_1317; // 0x51f JumpB
	var_2_int = 1; // 0x520 TMovB
	var_14_object = Obj(); // 0x521 PushV
	var_14_object = var_10_object; // 0x522 Mov
	func_1893(var_14_object); // 0x523 NEW_2
	
Label_1317:
	return 0; // 0x525 Return
}


task_5_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x527 PushV
	var_11_bool = 0; // 0x528 MovB
	var_12_bool = var_1_object == var_10_object; // 0x529 Eq
	if(var_12_bool == 0) goto Label_1326; // 0x52a JumpB
	var_13_int = var_2_int; // 0x52b PushT
	if(var_13_int == 0) goto Label_1326; // 0x52c JumpB
	var_11_bool = 1; // 0x52d MovB
	
Label_1326:
	if(var_11_bool == 0) goto Label_1331; // 0x52e JumpB
	var_2_int = 0; // 0x52f TMovB
	var_14_string = "head"; // 0x530 PushS
	UnlookAsync(var_14_string); // 0x531 Func
	
Label_1331:
	return 0; // 0x533 Return
}


task_5_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object); // 0x5ad Func
	return 0; // 0x5af Return
}


task_5_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_1290(var_10_object); // 0x5b9 NEW_2
	var_15_object = Obj(); // 0x5bb PushV
	var_15_object = var_10_object; // 0x5bc Mov
	func_2171(); // 0x5bd NEW_2
	return 0; // 0x5bf Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x85d PushV
	var_14_object = var_10_object; // 0x85e Mov
	var_15_int = var_11_int; // 0x85f Mov
	var_16_float = var_12_float; // 0x860 Mov
	func_1795(var_14_object, var_15_int, var_16_float); // 0x861 NEW_2
	return 0; // 0x863 Return
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x865 PushV
	var_16_object = var_10_object; // 0x866 Mov
	var_17_int = var_11_int; // 0x867 Mov
	var_18_float = var_12_float; // 0x868 Mov
	var_19_cvector = var_14_cvector; // 0x869 Mov
	var_20_cvector = var_15_cvector; // 0x86a Mov
	func_1863(var_18_float, var_19_cvector, var_20_cvector); // 0x86b NEW_2
	return 0; // 0x86d Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x86e PushV
	var_14_string = "health"; // 0x86f PushS
	var_15_bool = var_11_string == var_14_string; // 0x870 Eq
	if(var_15_bool == 0) goto Label_2170; // 0x871 JumpB
	var_16_string = "health"; // 0x872 PushS
	GetProperty(var_16_string, var_13_float); // 0x873 Func
	var_17_int = 0; // 0x875 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x876 LE
	if(var_18_bool == 0) goto Label_2170; // 0x877 JumpB
	SignalDeath(var_10_object); // 0x878 Func
	
Label_2170:
	return 2; // 0x87a Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x87c PushV
	var_11_object = var_10_object; // 0x87d Mov
	func_2132(var_11_object); // 0x87e NEW_2
	return 0; // 0x880 Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	
Label_0:
	var_10_int = 3; // 0x0 PushI
	Sleep(var_10_int); // 0x1 Func
	func_42(); // 0x4 NEW_2
	goto Label_0; // 0x6 Jump
}


func_1541(var_72_bool, var_73_object, var_74_string, var_75_float, var_76_float, var_77_float)
{
	var_78_float = 0; var_79_float = 0; // 0x605 PushV
	var_80_bool = 0; var_81_object = Obj(); var_82_string = ""; // 0x606 PushV
	var_81_object = var_73_object; // 0x607 Mov
	var_82_string = var_74_string; // 0x608 Mov
	func_1529(var_80_bool, var_81_object, var_82_string); // 0x609 NEW_2
	var_89_bool = var_80_bool == 0; // 0x60b Not
	if(var_89_bool == 0) goto Label_1551; // 0x60c JumpB
	var_72_bool = 0; // 0x60d MovB
	return 2; // 0x60e Return
	
Label_1551:
	GetProperty(var_74_string, var_79_float); // 0x60f ObjFunc
	var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_float = 0; // 0x611 PushV
	var_91_float = var_79_float + var_75_float; // 0x612 Add2
	var_92_float = var_76_float; // 0x613 Mov
	var_93_float = var_77_float; // 0x614 Mov
	func_2003(var_90_float, var_91_float, var_92_float, var_93_float); // 0x615 NEW_2
	SetProperty(var_74_string, var_90_float); // 0x617 ObjFunc
	var_72_bool = 1; // 0x619 MovB
	return 2; // 0x61a Return
}


func_2062(var_588_float)
{
	var_589_object = Obj(); var_590_object = Obj(); // 0x80e PushV
	CreateFloatVector(var_590_object); // 0x80f Func
	add(var_588_float); // 0x811 ObjFunc
	var_591_int = 15; // 0x813 PushI
	SendWorldWndMessage(var_591_int, var_590_object); // 0x814 Func
	return 2; // 0x816 Return
}


func_2072(var_68_float)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x818 PushV
	CreateFloatVector(var_70_object); // 0x819 Func
	add(var_68_float); // 0x81b ObjFunc
	var_71_int = 16; // 0x81d PushI
	SendWorldWndMessage(var_71_int, var_70_object); // 0x81e Func
	return 2; // 0x820 Return
}


func_1563(var_532_float, var_533_object, var_534_float, var_535_int)
{
	var_539_int = 0; var_540_string = ""; var_541_int = 0; var_542_float = 0; var_543_float = 0; var_544_float = 0; var_545_int = 0; var_546_string = ""; var_547_int = 0; var_548_float = 0; var_549_float = 0; var_550_float = 0; // 0x61b PushV
	var_551_bool = 0; var_552_object = Obj(); var_553_string = ""; // 0x61c PushV
	var_552_object = var_533_object; // 0x61d Mov
	var_553_string = "health"; // 0x61e MovS
	func_1529(var_551_bool, var_552_object, var_553_string); // 0x61f NEW_2
	var_554_bool = var_551_bool == 0; // 0x621 Not
	if(var_554_bool == 0) goto Label_1573; // 0x622 JumpB
	var_532_float = 0.0; // 0x623 MovF
	return 12; // 0x624 Return
	
Label_1573:
	var_555_bool = 0; var_556_object = Obj(); var_557_string = ""; // 0x625 PushV
	var_556_object = var_533_object; // 0x626 Mov
	var_557_string = "armor"; // 0x627 MovS
	func_1529(var_555_bool, var_556_object, var_557_string); // 0x628 NEW_2
	var_558_bool = var_555_bool == 0; // 0x62a Not
	if(var_558_bool == 0) goto Label_1582; // 0x62b JumpB
	var_545_int = 0; // 0x62c MovI
	goto Label_1585; // 0x62d Jump
	
Label_1585:
	var_559_string = "armor_"; // 0x631 PushS
	var_560_string = ""; var_561_int = 0; // 0x632 PushV
	var_561_int = var_535_int; // 0x633 Mov
	func_1495(var_560_string, var_561_int); // 0x634 NEW_2
	var_546_string = var_559_string + var_560_string; // 0x636 Add2
	var_566_bool = 0; var_567_object = Obj(); var_568_string = ""; // 0x637 PushV
	var_567_object = var_533_object; // 0x638 Mov
	var_568_string = var_546_string; // 0x639 Mov
	func_1529(var_566_bool, var_567_object, var_568_string); // 0x63a NEW_2
	var_569_bool = var_566_bool == 0; // 0x63c Not
	if(var_569_bool == 0) goto Label_1600; // 0x63d JumpB
	var_547_int = 0; // 0x63e MovI
	goto Label_1602; // 0x63f Jump
	
Label_1602:
	var_570_float = 0; var_571_float = 0; var_572_float = 0; // 0x642 PushV
	var_573_int = var_545_int + var_547_int; // 0x643 Add
	var_574_float = 100.0; // 0x644 PushF
	var_571_float = var_573_int / var_573_int; // 0x645 Div2
	var_572_float = 1; // 0x646 MovI
	func_1972(var_570_float, var_571_float, var_572_float); // 0x647 NEW_2
	var_548_float = var_570_float; // 0x648 Mov
	var_576_string = "health"; // 0x64a PushS
	GetProperty(var_576_string, var_549_float); // 0x64b ObjFunc
	var_577_int = 1; // 0x64d PushI
	var_578_int = var_577_int - var_548_float; // 0x64e Sub
	var_550_float = var_534_float * var_578_int; // 0x64f Mult2
	var_579_string = "health"; // 0x650 PushS
	var_580_float = 0; var_581_float = 0; var_582_float = 0; var_583_float = 0; // 0x651 PushV
	var_581_float = var_549_float - var_550_float; // 0x652 Sub2
	var_582_float = 0; // 0x653 MovI
	var_583_float = 1; // 0x654 MovI
	func_2003(var_580_float, var_581_float, var_582_float, var_583_float); // 0x655 NEW_2
	SetProperty(var_579_string, var_580_float); // 0x657 ObjFunc
	var_586_bool = 0; var_587_object = Obj(); // 0x659 PushV
	var_587_object = var_533_object; // 0x65a Mov
	func_1524(var_586_bool, var_587_object); // 0x65b NEW_2
	if(var_586_bool == 0) goto Label_1634; // 0x65d JumpB
	var_588_float = 0; // 0x65e PushV
	var_588_float = -var_550_float; // 0x65f Neg2
	func_2062(var_588_float); // 0x660 NEW_2
	
Label_1634:
	var_532_float = var_550_float; // 0x662 Mov
	return 12; // 0x663 Return
	
Label_1600:
	GetProperty(var_546_string, var_547_int); // 0x640 ObjFunc
	
Label_1582:
	var_592_string = "armor"; // 0x62e PushS
	GetProperty(var_592_string, var_545_int); // 0x62f ObjFunc
}


func_543(var_0_object, var_3_int, var_5_bool, var_202_object, var_203_bool, var_204_float, var_273_bool, var_365_bool)
{
	var_205_float = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_bool = 0; var_209_bool = 0; var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_float = 0; var_213_cvector = CVector(0,0,0); var_214_bool = 0; var_215_float = 0; var_216_float = 0; var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_bool = 0; var_220_bool = 0; var_221_float = 0; var_222_cvector = CVector(0,0,0); var_223_float = 0; var_224_cvector = CVector(0,0,0); var_225_bool = 0; var_226_float = 0; // 0x21f PushV
	func_772(var_224_cvector, var_225_bool, var_226_float); // 0x221 NEW_2
	var_5_bool = 0; // 0x223 TMovI
	var_249_string = "@GetAttackDistance"; // 0x224 PushS
	var_250_int = 1; // 0x225 PushI
	var_251_bool = IsFuncExist(var_202_object, var_249_string, var_250_int); // 0x226 FuncExist
	if(var_251_bool == 0) goto Label_557; // 0x227 JumpB
	GetAttackDistance(var_216_float); // 0x228 ObjFunc
	var_252_int = 50; // 0x22a PushI
	var_216_float = var_216_float + var_252_int; // 0x22b Add2
	goto Label_558; // 0x22c Jump
	
Label_558:
	var_253_int = 150; // 0x22e PushI
	var_254_bool = var_216_float >= var_253_int; // 0x22f GE
	if(var_254_bool == 0) goto Label_562; // 0x230 JumpB
	var_216_float = 150; // 0x231 MovI
	
Label_562:
	var_3_int = 0; // 0x232 TMovB
	var_0_object = var_202_object; // 0x233 TMov
	IsPlayerActor(var_0_object, var_219_bool); // 0x234 Func
	var_255_bool = var_219_bool; // 0x236 Push
	if(var_255_bool == 0) goto Label_576; // 0x237 JumpB
	var_256_string = "attack"; // 0x238 PushS
	PlayGlobalMusic(var_256_string); // 0x239 Func
	var_257_object = Obj(); // 0x23b PushV
	func_1956(var_257_object); // 0x23c NEW_2
	SendPlayerEnemy(var_202_object, var_257_object); // 0x23e Func
	
Label_576:
	var_258_bool = var_203_bool; // 0x240 Push
	if(var_258_bool == 0) goto Label_580; // 0x241 JumpB
	var_220_bool = 0; // 0x242 MovB
	goto Label_581; // 0x243 Jump
	
Label_581:
	var_259_float = 300.0; // 0x245 PushF
	var_221_float = var_259_float + var_216_float; // 0x246 Add2
	
Label_583:
	var_260_bool = 0; // 0x247 PushV
	var_260_bool = 0; // 0x248 MovB
	var_261_bool = 0; var_262_object = Obj(); // 0x249 PushV
	var_262_object = var_0_object; // 0x24a MovT
	func_1708(var_261_bool, var_262_object); // 0x24b NEW_2
	if(var_261_bool == 0) goto Label_593; // 0x24d JumpB
	var_263_bool = var_3_int == 0; // 0x24e Not
	if(var_263_bool == 0) goto Label_593; // 0x24f JumpB
	var_260_bool = 1; // 0x250 MovB
	
Label_593:
	if(var_260_bool == 0) goto Label_755; // 0x251 JumpB
	func_1187(var_226_float); // 0x253 NEW_2
	GetPFPosition(var_217_cvector); // 0x255 TObjFunc
	GetPFPosition(var_218_cvector); // 0x257 Func
	var_222_cvector = var_217_cvector - var_218_cvector; // 0x259 Sub2
	var_223_float = var_222_cvector | var_222_cvector; // 0x25a Or2
	var_265_float = var_221_float * var_221_float; // 0x25b Mult
	var_266_bool = var_223_float >= var_265_float; // 0x25c GE
	if(var_266_bool == 0) goto Label_621; // 0x25d JumpB
	var_267_bool = 0; var_268_object = Obj(); var_269_float = 0; var_270_float = 0; var_271_bool = 0; var_272_bool = 0; // 0x25e PushV
	var_268_object = var_0_object; // 0x25f MovT
	var_269_float = var_216_float; // 0x260 Mov
	var_270_float = 3000.0; // 0x261 MovF
	var_271_bool = 1; // 0x262 MovB
	var_272_bool = 0; // 0x263 MovB
	TaskCall(5); // 0x264 TaskCall
	func_1227(var_275_bool, var_267_bool, var_268_object, var_269_float, var_270_float, var_271_bool, var_272_bool); // 0x265 NEW_2
	TaskReturn(); // 0x266 TaskReturn
	var_350_bool = var_273_bool == 0; // 0x268 Not
	if(var_350_bool == 0) goto Label_619; // 0x269 JumpB
	goto Label_755; // 0x26a Jump
	
Label_755:
	WaitForAnimEnd(); // 0x2f3 Func
	var_351_int = var_3_int; // 0x2f5 PushT
	if(var_351_int == 0) goto Label_760; // 0x2f6 JumpB
	return 22; // 0x2f7 Return
	
Label_760:
	var_352_string = "all"; // 0x2f8 PushS
	var_353_string = "attack_off"; // 0x2f9 PushS
	PlayAnimation(var_352_string, var_353_string); // 0x2fa Func
	WaitForAnimEnd(); // 0x2fc Func
	var_354_bool = var_219_bool; // 0x2fe Push
	if(var_354_bool == 0) goto Label_771; // 0x2ff JumpB
	var_355_float = 2.0; // 0x300 PushF
	Sleep(var_355_float); // 0x301 Func
	
Label_771:
	return 22; // 0x303 Return
	
Label_619:
	var_220_bool = 0; // 0x26b MovB
	goto Label_754; // 0x26c Jump
	
Label_754:
	goto Label_583; // 0x2f2 Jump
	
Label_621:
	var_356_float = var_204_float * var_204_float; // 0x26d Mult
	var_357_bool = var_223_float >= var_356_float; // 0x26e GE
	if(var_357_bool == 0) goto Label_746; // 0x26f JumpB
	GetPFPosition(var_224_cvector); // 0x270 TObjFunc
	CanReachByPF(var_225_bool, var_224_cvector); // 0x272 Func
	var_358_bool = var_225_bool == 0; // 0x274 Not
	if(var_358_bool == 0) goto Label_645; // 0x275 JumpB
	var_359_bool = 0; var_360_object = Obj(); var_361_float = 0; var_362_float = 0; var_363_bool = 0; var_364_bool = 0; // 0x276 PushV
	var_360_object = var_0_object; // 0x277 MovT
	var_361_float = var_216_float; // 0x278 Mov
	var_362_float = 3000.0; // 0x279 MovF
	var_363_bool = 1; // 0x27a MovB
	var_364_bool = 0; // 0x27b MovB
	TaskCall(5); // 0x27c TaskCall
	func_1227(var_367_bool, var_359_bool, var_360_object, var_361_float, var_362_float, var_363_bool, var_364_bool); // 0x27d NEW_2
	TaskReturn(); // 0x27e TaskReturn
	var_368_bool = var_365_bool == 0; // 0x280 Not
	if(var_368_bool == 0) goto Label_643; // 0x281 JumpB
	goto Label_755; // 0x282 Jump
	
Label_643:
	var_220_bool = 0; // 0x283 MovB
	goto Label_583; // 0x284 Jump
	
Label_645:
	var_369_bool = var_220_bool == 0; // 0x285 Not
	if(var_369_bool == 0) goto Label_670; // 0x286 JumpB
	var_370_object = Obj(); // 0x287 PushV
	var_370_object = var_0_object; // 0x288 MovT
	func_1877(); // 0x289 NEW_2
	var_379_string = "all"; // 0x28b PushS
	var_380_string = "attack_on"; // 0x28c PushS
	PlayAnimation(var_379_string, var_380_string); // 0x28d Func
	WaitForAnimEnd(); // 0x28f Func
	func_1187(var_226_float); // 0x292 NEW_2
	StopAsync(); // 0x294 Func
	var_220_bool = 1; // 0x296 MovB
	var_381_bool = 0; var_382_object = Obj(); // 0x297 PushV
	var_382_object = var_0_object; // 0x298 MovT
	func_1708(var_381_bool, var_382_object); // 0x299 NEW_2
	var_383_bool = var_381_bool == 0; // 0x29b Not
	if(var_383_bool == 0) goto Label_670; // 0x29c JumpB
	goto Label_755; // 0x29d Jump
	
Label_670:
	rand(var_226_float); // 0x29e Func
	var_384_bool = 0; // 0x2a0 PushV
	var_384_bool = 1; // 0x2a1 MovB
	var_385_float = 0.2; // 0x2a2 PushF
	var_386_bool = var_226_float < var_385_float; // 0x2a3 LT
	if(var_386_bool == 0) goto Label_682; // 0x2a4 JumpB
	var_387_bool = 0; // 0x2a5 PushV
	func_1144(var_384_bool, var_387_bool); // 0x2a6 NEW_2
	if(var_387_bool == 0) goto Label_682; // 0x2a8 JumpB
	var_384_bool = 0; // 0x2a9 MovB
	
Label_682:
	if(var_384_bool == 0) goto Label_699; // 0x2aa JumpB
	Face(var_0_object); // 0x2ab Func
	func_1192(); // 0x2ae NEW_2
	var_422_string = "all"; // 0x2b0 PushS
	var_423_string = "attack_stay"; // 0x2b1 PushS
	PlayAnimation(var_422_string, var_423_string); // 0x2b2 Func
	var_424_bool = 0; var_425_float = 0; // 0x2b4 PushV
	var_425_float = var_204_float; // 0x2b5 Mov
	func_1012(var_226_float, var_424_bool, var_425_float); // 0x2b6 NEW_2
	StopAsync(); // 0x2b8 Func
	goto Label_745; // 0x2ba Jump
	
Label_745:
	goto Label_754; // 0x2e9 Jump
	
Label_699:
	Face(var_0_object); // 0x2bb Func
	var_656_string = "all"; // 0x2bd PushS
	var_657_string = "fjump"; // 0x2be PushS
	PlayAnimation(var_656_string, var_657_string); // 0x2bf Func
	WaitForAnimEnd(); // 0x2c1 Func
	func_1187(var_226_float); // 0x2c4 NEW_2
	var_658_cvector = CVector(0.0, 0.0, 0.0); // 0x2c6 PushVec
	SetSpeed(var_658_cvector); // 0x2c7 Func
	Stop(); // 0x2c9 Func
	StopAsync(); // 0x2cb Func
	var_659_bool = 0; // 0x2cd PushV
	func_1144(var_226_float, var_659_bool); // 0x2ce NEW_2
	var_660_bool = var_659_bool == 0; // 0x2d0 Not
	if(var_660_bool == 0) goto Label_745; // 0x2d1 JumpB
	var_661_bool = 0; var_662_object = Obj(); // 0x2d2 PushV
	var_662_object = var_0_object; // 0x2d3 MovT
	func_1708(var_661_bool, var_662_object); // 0x2d4 NEW_2
	var_663_bool = var_661_bool == 0; // 0x2d6 Not
	if(var_663_bool == 0) goto Label_729; // 0x2d7 JumpB
	goto Label_755; // 0x2d8 Jump
	
Label_729:
	GetPFPosition(var_217_cvector); // 0x2d9 TObjFunc
	GetPFPosition(var_218_cvector); // 0x2db Func
	var_222_cvector = var_217_cvector - var_218_cvector; // 0x2dd Sub2
	var_223_float = var_222_cvector | var_222_cvector; // 0x2de Or2
	var_664_float = var_204_float * var_204_float; // 0x2df Mult
	var_665_bool = var_223_float < var_664_float; // 0x2e0 LT
	if(var_665_bool == 0) goto Label_745; // 0x2e1 JumpB
	var_666_bool = 0; var_667_float = 0; // 0x2e2 PushV
	var_667_float = var_204_float; // 0x2e3 Mov
	func_846(var_226_float, var_666_bool, var_667_float); // 0x2e4 NEW_2
	var_668_bool = var_666_bool == 0; // 0x2e6 Not
	if(var_668_bool == 0) goto Label_745; // 0x2e7 JumpB
	goto Label_755; // 0x2e8 Jump
	
Label_746:
	var_669_bool = 0; var_670_float = 0; // 0x2ea PushV
	var_670_float = var_204_float; // 0x2eb Mov
	func_846(var_226_float, var_669_bool, var_670_float); // 0x2ec NEW_2
	var_671_bool = var_669_bool == 0; // 0x2ee Not
	if(var_671_bool == 0) goto Label_753; // 0x2ef JumpB
	goto Label_755; // 0x2f0 Jump
	
Label_753:
	var_220_bool = 1; // 0x2f1 MovB
	
Label_580:
	var_220_bool = 1; // 0x244 MovB
	
Label_557:
	var_216_float = var_204_float; // 0x22d Mov
}


func_1055(var_0_object, var_439_bool)
{
	var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); var_442_cvector = CVector(0,0,0); var_443_float = 0; var_444_float = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_float = 0; var_449_float = 0; // 0x41f PushV
	var_450_bool = 0; var_451_object = Obj(); // 0x420 PushV
	var_451_object = var_0_object; // 0x421 MovT
	func_1708(var_450_bool, var_451_object); // 0x422 NEW_2
	var_452_bool = var_450_bool == 0; // 0x424 Not
	if(var_452_bool == 0) goto Label_1064; // 0x425 JumpB
	var_439_bool = 0; // 0x426 MovB
	return 10; // 0x427 Return
	
Label_1064:
	var_453_bool = 0; // 0x428 PushV
	func_1144(var_449_float, var_453_bool); // 0x429 NEW_2
	if(var_453_bool == 0) goto Label_1081; // 0x42b JumpB
	GetPFPosition(var_445_cvector); // 0x42c TObjFunc
	GetPFPosition(var_446_cvector); // 0x42e Func
	var_447_cvector = var_445_cvector - var_446_cvector; // 0x430 Sub2
	var_448_float = var_447_cvector | var_447_cvector; // 0x431 Or2
	GetAttackDistance(var_449_float); // 0x432 TObjFunc
	var_454_int = 50; // 0x434 PushI
	var_449_float = var_449_float + var_454_int; // 0x435 Add2
	var_455_float = var_449_float * var_449_float; // 0x436 Mult
	var_439_bool = var_448_float <= var_455_float; // 0x437 LE2
	return 10; // 0x438 Return
	
Label_1081:
	var_439_bool = 0; // 0x439 MovB
	return 10; // 0x43a Return
}


func_2082(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x822 PushV
	IsPlayerActor(var_13_object, var_15_bool); // 0x823 Func
	var_16_bool = var_15_bool; // 0x825 Push
	if(var_16_bool == 0) goto Label_2090; // 0x826 JumpB
	var_17_string = "attack"; // 0x827 PushS
	PlayGlobalMusic(var_17_string); // 0x828 Func
	
Label_2090:
	return 2; // 0x82a Return
}


func_42()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x2a PushV
	WaitForAnimEnd(); // 0x2b Func
	var_25_bool = 0; // 0x2d PushV
	func_1888(var_25_bool); // 0x2e NEW_2
	var_28_bool = var_25_bool == 0; // 0x30 Not
	if(var_28_bool == 0) goto Label_51; // 0x31 JumpB
	return 14; // 0x32 Return
	
Label_51:
	var_29_int = 0; // 0x33 PushV
	func_2115(var_29_int); // 0x34 NEW_2
	var_18_int = var_29_int; // 0x35 Mov
	var_19_int = 0; // 0x37 MovI
	
Label_56:
	var_42_bool = 0; // 0x38 PushV
	var_42_bool = 0; // 0x39 MovB
	var_43_int = 5; // 0x3a PushI
	var_44_bool = var_19_int < var_43_int; // 0x3b LT
	if(var_44_bool == 0) goto Label_66; // 0x3c JumpB
	var_45_bool = 0; // 0x3d PushV
	func_1888(var_45_bool); // 0x3e NEW_2
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
	func_2108(var_51_string, var_52_int); // 0x50 NEW_2
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


func_2091()
{
	var_114_object = Obj(); var_115_object = Obj(); // 0x82b PushV
	GetScene(var_115_object); // 0x82c Func
	var_116_string = "battle"; // 0x82e PushS
	var_117_object = Obj(); // 0x82f PushV
	func_1956(var_117_object); // 0x830 NEW_2
	BroadcastMessage(var_116_string, var_117_object, var_115_object); // 0x832 Func
	return 2; // 0x834 Return
}


func_2102(var_610_bool)
{
	var_611_bool = 0; var_612_bool = 0; // 0x836 PushV
	var_613_string = "god_mode"; // 0x837 PushS
	GetVariable(var_613_string, var_612_bool); // 0x838 Func
	var_610_bool = var_612_bool; // 0x83a Mov
	return 2; // 0x83b Return
}


func_1083(var_437_bool)
{
	var_438_bool = 0; // 0x43b PushV
	var_438_bool = 0; // 0x43c MovB
	var_439_bool = 0; // 0x43d PushV
	func_1055(var_438_bool, var_439_bool); // 0x43e NEW_2
	if(var_439_bool == 0) goto Label_1094; // 0x440 JumpB
	var_456_bool = 0; // 0x441 PushV
	func_1099(var_437_bool, var_438_bool, var_456_bool); // 0x442 NEW_2
	if(var_456_bool == 0) goto Label_1094; // 0x444 JumpB
	var_438_bool = 1; // 0x445 MovB
	
Label_1094:
	if(var_438_bool == 0) goto Label_1097; // 0x446 JumpB
	var_437_bool = 1; // 0x447 MovB
	return 0; // 0x448 Return
	
Label_1097:
	var_437_bool = 0; // 0x449 MovB
	return 0; // 0x44a Return
}


func_2108(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = ""; // 0x83c PushV
	var_38_string = "idle"; // 0x83d MovS
	var_39_int = var_36_int; // 0x83e Push
	if(var_39_int == 0) goto Label_2113; // 0x83f JumpB
	var_38_string = var_38_string + var_36_int; // 0x840 Add2
	
Label_2113:
	var_35_string = var_38_string; // 0x841 Mov
	return 2; // 0x842 Return
}


func_2115(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0x843 PushV
	var_32_int = 0; // 0x844 MovI
	
Label_2117:
	var_34_string = "all"; // 0x845 PushS
	var_35_string = ""; var_36_int = 0; // 0x846 PushV
	var_36_int = var_32_int; // 0x847 Mov
	func_2108(var_35_string, var_36_int); // 0x848 NEW_2
	HasAnimation(var_33_bool, var_34_string, var_35_string); // 0x84a Func
	var_40_bool = var_33_bool == 0; // 0x84c Not
	if(var_40_bool == 0) goto Label_2127; // 0x84d JumpB
	goto Label_2130; // 0x84e Jump
	
Label_2130:
	var_29_int = var_32_int; // 0x852 Mov
	return 4; // 0x853 Return
	
Label_2127:
	var_41_int = 1; // 0x84f PushI
	var_32_int = var_32_int + var_41_int; // 0x850 Add2
	goto Label_2117; // 0x851 Jump
}


func_1099(var_0_object, var_4_int, var_456_bool)
{
	var_457_object = Obj(); var_458_bool = 0; var_459_float = 0; var_460_cvector = CVector(0,0,0); var_461_cvector = CVector(0,0,0); var_462_object = Obj(); var_463_bool = 0; var_464_float = 0; var_465_cvector = CVector(0,0,0); var_466_cvector = CVector(0,0,0); // 0x44b PushV
	GetScene(var_462_object); // 0x44c Func
	var_463_bool = 0; // 0x44e MovB
	
Label_1103:
	var_467_cvector = CVector(0,0,0); var_468_object = Obj(); // 0x44f PushV
	var_468_object = var_0_object; // 0x450 MovT
	func_1509(var_468_object); // 0x451 NEW_2
	var_473_int = -var_467_cvector; // 0x453 Neg
	FindDirLength(var_464_float, var_473_int, var_464_float); // 0x454 Func
	var_474_bool = var_464_float < var_4_int; // 0x456 LT
	if(var_474_bool == 0) goto Label_1113; // 0x457 JumpB
	goto Label_1141; // 0x458 Jump
	
Label_1141:
	var_456_bool = var_463_bool; // 0x475 Mov
	return 10; // 0x476 Return
	
Label_1113:
	Face(var_0_object); // 0x459 Func
	var_475_string = "all"; // 0x45b PushS
	var_476_string = "bjump"; // 0x45c PushS
	PlayAnimation(var_475_string, var_476_string); // 0x45d Func
	GetPFPosition(var_465_cvector); // 0x45f TObjFunc
	GetPFPosition(var_466_cvector); // 0x461 Func
	WaitForAnimEnd(); // 0x463 Func
	func_1187(var_466_cvector); // 0x466 NEW_2
	StopAsync(); // 0x468 Func
	var_477_cvector = CVector(0.0, 0.0, 0.0); // 0x46a PushVec
	SetSpeed(var_477_cvector); // 0x46b Func
	var_463_bool = 1; // 0x46d MovB
	var_478_bool = 0; // 0x46e PushV
	func_1055(var_466_cvector, var_478_bool); // 0x46f NEW_2
	var_479_bool = var_478_bool == 0; // 0x471 Not
	if(var_479_bool == 0) goto Label_1140; // 0x472 JumpB
	goto Label_1141; // 0x473 Jump
	
Label_1140:
	goto Label_1103; // 0x474 Jump
}


func_2132(var_11_object)
{
	var_12_object = Obj(); // 0x855 PushV
	var_12_object = var_11_object; // 0x856 Mov
	TaskCall(1); // 0x857 TaskCall
	func_128(var_12_object); // 0x858 NEW_2
	TaskReturn(); // 0x859 TaskReturn
	return 0; // 0x85b Return
}


func_1636(var_599_bool, var_600_object)
{
	var_601_float = 0; var_602_float = 0; // 0x664 PushV
	var_603_bool = 0; var_604_object = Obj(); var_605_string = ""; // 0x665 PushV
	var_604_object = var_600_object; // 0x666 Mov
	var_605_string = "health"; // 0x667 MovS
	func_1529(var_603_bool, var_604_object, var_605_string); // 0x668 NEW_2
	var_606_bool = var_603_bool == 0; // 0x66a Not
	if(var_606_bool == 0) goto Label_1646; // 0x66b JumpB
	var_599_bool = 0; // 0x66c MovB
	return 2; // 0x66d Return
	
Label_1646:
	var_607_bool = 0; // 0x66e PushV
	var_607_bool = 0; // 0x66f MovB
	var_608_bool = 0; var_609_object = Obj(); // 0x670 PushV
	var_609_object = var_600_object; // 0x671 Mov
	func_1524(var_608_bool, var_609_object); // 0x672 NEW_2
	if(var_608_bool == 0) goto Label_1658; // 0x674 JumpB
	var_610_bool = 0; // 0x675 PushV
	func_2102(var_610_bool); // 0x676 NEW_2
	if(var_610_bool == 0) goto Label_1658; // 0x678 JumpB
	var_607_bool = 1; // 0x679 MovB
	
Label_1658:
	if(var_607_bool == 0) goto Label_1661; // 0x67a JumpB
	var_599_bool = 0; // 0x67b MovB
	return 2; // 0x67c Return
	
Label_1661:
	var_614_string = "health"; // 0x67d PushS
	GetProperty(var_614_string, var_602_float); // 0x67e ObjFunc
	var_615_float = 0.0; // 0x680 PushF
	var_599_bool = var_602_float <= var_615_float; // 0x681 LE2
	return 2; // 0x682 Return
}


func_1144(var_0_object, var_387_bool)
{
	var_388_bool = 0; var_389_bool = 0; // 0x478 PushV
	var_390_string = "IsAttacking"; // 0x479 PushS
	var_391_int = 1; // 0x47a PushI
	var_392_bool = IsFuncExist(var_0_object, var_390_string, var_391_int); // 0x47b FuncExist
	if(var_392_bool == 0) goto Label_1153; // 0x47c JumpB
	IsAttacking(var_389_bool); // 0x47d TObjFunc
	var_387_bool = var_389_bool; // 0x47f Mov
	return 2; // 0x480 Return
	
Label_1153:
	var_387_bool = 0; // 0x481 MovB
	return 2; // 0x482 Return
}


func_121(var_54_bool)
{
	var_54_bool = 1; // 0x79 MovB
	return 0; // 0x7a Return
}


func_123()
{
	StopAnimation(); // 0x7b Func
	StopGroup0(); // 0x7d Func
	return 0; // 0x7f Return
}


func_128(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x80 PushV
	func_2240(); // 0x82 NEW_2
	var_57_bool = 0; var_58_object = Obj(); // 0x84 PushV
	var_58_object = var_12_object; // 0x85 Mov
	func_1524(var_57_bool, var_58_object); // 0x86 NEW_2
	if(var_57_bool == 0) goto Label_142; // 0x88 JumpB
	var_61_bool = 0; var_62_object = Obj(); var_63_float = 0; // 0x89 PushV
	var_62_object = var_12_object; // 0x8a Mov
	var_63_float = 0.03; // 0x8b MovF
	func_2027(var_61_bool, var_62_object, var_63_float); // 0x8c NEW_2
	
Label_142:
	GetScene(var_14_object); // 0x8e Func
	var_99_object = Obj(); // 0x90 PushV
	func_1956(var_99_object); // 0x91 NEW_2
	RemoveStationaryActor(var_99_object); // 0x93 ObjFunc
	var_102_object = Obj(); // 0x95 PushV
	var_102_object = var_12_object; // 0x96 Mov
	func_155(var_102_object); // 0x97 NEW_2
	return 2; // 0x99 Return
}


func_2177(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x882 PushV
	var_18_object = var_16_object; // 0x883 Mov
	func_1708(var_17_bool, var_18_object); // 0x884 NEW_2
	var_15_bool = var_17_bool; // 0x885 Mov
	return 0; // 0x887 Return
}


func_1155(var_2_object, var_5_bool)
{
	var_500_float = 0; var_501_int = 0; var_502_float = 0; var_503_int = 0; // 0x483 PushV
	var_504_bool = var_2_object == 0; // 0x484 Not
	if(var_504_bool == 0) goto Label_1159; // 0x485 JumpB
	return 4; // 0x486 Return
	
Label_1159:
	var_505_bool = var_5_bool; // 0x487 PushT
	if(var_505_bool == 0) goto Label_1167; // 0x488 JumpB
	var_506_int = -1; // 0x489 PushI
	var_5_bool = var_5_bool + var_506_int; // 0x48a Add2
	var_507_int = 0; // 0x48b PushI
	var_508_bool = var_5_bool > var_507_int; // 0x48c GT
	if(var_508_bool == 0) goto Label_1167; // 0x48d JumpB
	return 4; // 0x48e Return
	
Label_1167:
	rand(var_502_float); // 0x48f Func
	var_509_float = 0; // 0x491 PushV
	func_1201(var_509_float); // 0x492 NEW_2
	var_510_bool = var_502_float < var_509_float; // 0x494 LT
	if(var_510_bool == 0) goto Label_1186; // 0x495 JumpB
	irand(var_503_int, var_502_float); // 0x496 Func
	var_511_int = 1; // 0x498 PushI
	var_503_int = var_503_int + var_511_int; // 0x499 Add2
	var_512_string = "attack"; // 0x49a PushS
	var_513_int = var_512_string + var_503_int; // 0x49b Add
	Speak(var_513_int); // 0x49c Func
	var_514_int = 0; // 0x49e PushV
	func_1199(var_514_int); // 0x49f NEW_2
	var_5_bool = var_514_int; // 0x4a0 TMov
	
Label_1186:
	return 4; // 0x4a2 Return
}


func_1667(var_38_bool)
{
	var_40_bool = 0; var_41_bool = 0; // 0x683 PushV
	IsDead(var_41_bool); // 0x684 ObjFunc
	var_38_bool = var_41_bool; // 0x686 Mov
	return 2; // 0x687 Return
}


func_2184(var_51_object)
{
	var_52_object = Obj(); // 0x889 PushV
	var_52_object = var_51_object; // 0x88a Mov
	func_2275(var_52_object); // 0x88b NEW_2
	return 0; // 0x88d Return
}


func_1672(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x688 PushV
	var_33_bool = var_28_object == 0; // 0x689 NullEq
	if(var_33_bool == 0) goto Label_1677; // 0x68a JumpB
	var_27_bool = 0; // 0x68b MovB
	return 4; // 0x68c Return
	
Label_1677:
	var_34_bool = 0; // 0x68d PushV
	var_34_bool = 0; // 0x68e MovB
	var_35_string = "IsDead"; // 0x68f PushS
	var_36_int = 1; // 0x690 PushI
	var_37_bool = IsFuncExist(var_28_object, var_35_string, var_36_int); // 0x691 FuncExist
	if(var_37_bool == 0) goto Label_1689; // 0x692 JumpB
	var_38_bool = 0; var_39_object = Obj(); // 0x693 PushV
	var_39_object = var_28_object; // 0x694 Mov
	func_1667(var_39_object); // 0x695 NEW_2
	if(var_38_bool == 0) goto Label_1689; // 0x697 JumpB
	var_34_bool = 1; // 0x698 MovB
	
Label_1689:
	if(var_34_bool == 0) goto Label_1692; // 0x699 JumpB
	var_27_bool = 0; // 0x69a MovB
	return 4; // 0x69b Return
	
Label_1692:
	GetScene(var_31_object); // 0x69c Func
	var_42_bool = var_31_object == 0; // 0x69e NullEq
	if(var_42_bool == 0) goto Label_1698; // 0x69f JumpB
	var_27_bool = 0; // 0x6a0 MovB
	return 4; // 0x6a1 Return
	
Label_1698:
	GetScene(var_32_object); // 0x6a2 ObjFunc
	var_43_bool = var_31_object != var_32_object; // 0x6a4 Neq
	if(var_43_bool == 0) goto Label_1704; // 0x6a5 JumpB
	var_27_bool = 0; // 0x6a6 MovB
	return 4; // 0x6a7 Return
	
Label_1704:
	var_27_bool = 1; // 0x6a8 MovB
	return 4; // 0x6a9 Return
}


func_2190(var_15_int)
{
	var_16_int = 0; var_17_int = 0; // 0x88e PushV
	var_18_string = "branch"; // 0x88f PushS
	GetVariable(var_18_string, var_17_int); // 0x890 Func
	var_15_int = var_17_int; // 0x892 Mov
	return 2; // 0x893 Return
}


func_2196(var_14_object)
{
	var_15_int = 0; // 0x895 PushV
	func_2190(var_15_int); // 0x896 NEW_2
	var_19_int = 1; // 0x898 PushI
	var_20_bool = var_15_int == var_19_int; // 0x899 Eq
	if(var_20_bool == 0) goto Label_2206; // 0x89a JumpB
	WorkWithCorpse(var_14_object); // 0x89b Func
	goto Label_2208; // 0x89d Jump
	
Label_2208:
	return 0; // 0x8a0 Return
	
Label_2206:
	Barter(var_14_object); // 0x89e Func
}


func_155(var_102_object)
{
	EventDisable(0); // 0x9c EventDisable
	var_103_object = Obj(); // 0x9d PushV
	var_103_object = var_102_object; // 0x9e Mov
	func_180(var_103_object); // 0x9f NEW_2
	var_183_int = 50; // 0xa1 PushI
	var_184_int = 40; // 0xa2 PushI
	SetRTEnvelope(var_183_int, var_184_int); // 0xa3 Func
	EventEnable(0); // 0xa5 EventEnable
	
Label_166:
	Hold(); // 0xa6 Func
	goto Label_166; // 0xa8 Jump
}


func_2209(var_20_int, var_21_int)
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; // 0x8a1 PushV
	var_26_bool = var_20_int > var_21_int; // 0x8a2 GT
	if(var_26_bool == 0) goto Label_2216; // 0x8a3 JumpB
	var_27_string = "GenerateMoney: iMin > iMax"; // 0x8a4 PushS
	Trace(var_27_string); // 0x8a5 Func
	return 4; // 0x8a7 Return
	
Label_2216:
	var_24_int = 0; // 0x8a8 MovI
	var_28_bool = var_20_int != var_21_int; // 0x8a9 Neq
	if(var_28_bool == 0) goto Label_2223; // 0x8aa JumpB
	var_29_int = var_21_int - var_20_int; // 0x8ab Sub
	irand(var_24_int, var_29_int); // 0x8ac Func
	goto Label_2227; // 0x8ae Jump
	
Label_2227:
	var_24_int = var_24_int + var_20_int; // 0x8b3 Add2
	var_30_int = 0; // 0x8b4 PushI
	var_31_bool = var_24_int == var_30_int; // 0x8b5 Eq
	if(var_31_bool == 0) goto Label_2232; // 0x8b6 JumpB
	return 4; // 0x8b7 Return
	
Label_2232:
	var_32_int = 0; var_33_string = ""; // 0x8b8 PushV
	var_33_string = "Money"; // 0x8b9 MovS
	func_2270(var_32_int, var_33_string); // 0x8ba NEW_2
	var_36_int = 0; // 0x8bc PushI
	AddItem(var_25_bool, var_32_int, var_36_int, var_24_int); // 0x8bd Func
	return 4; // 0x8bf Return
	
Label_2223:
	var_37_int = 0; // 0x8af PushI
	var_38_bool = var_20_int == var_37_int; // 0x8b0 Eq
	if(var_38_bool == 0) goto Label_2227; // 0x8b1 JumpB
	return 4; // 0x8b2 Return
}


func_1187(var_0_object)
{
	var_264_object = Obj(); // 0x4a3 PushV
	var_264_object = var_0_object; // 0x4a4 MovT
	func_2082(var_264_object); // 0x4a5 NEW_2
	return 0; // 0x4a7 Return
}


func_1192()
{
	var_393_string = ""; // 0x4a8 PushV
	var_393_string = "attack_stay"; // 0x4a9 MovS
	func_1915(var_393_string); // 0x4aa NEW_2
	return 0; // 0x4ac Return
}


func_1708(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0; // 0x6ac PushV
	var_27_bool = 0; var_28_object = Obj(); // 0x6ad PushV
	var_28_object = var_24_object; // 0x6ae Mov
	func_1672(var_27_bool, var_28_object); // 0x6af NEW_2
	var_44_bool = var_27_bool == 0; // 0x6b1 Not
	if(var_44_bool == 0) goto Label_1717; // 0x6b2 JumpB
	var_23_bool = 0; // 0x6b3 MovB
	return 2; // 0x6b4 Return
	
Label_1717:
	var_45_bool = 0; var_46_object = Obj(); var_47_string = ""; // 0x6b5 PushV
	var_46_object = var_24_object; // 0x6b6 Mov
	var_47_string = "noaccess"; // 0x6b7 MovS
	func_1529(var_45_bool, var_46_object, var_47_string); // 0x6b8 NEW_2
	var_54_bool = var_45_bool == 0; // 0x6ba Not
	if(var_54_bool == 0) goto Label_1726; // 0x6bb JumpB
	var_23_bool = 1; // 0x6bc MovB
	return 2; // 0x6bd Return
	
Label_1726:
	var_55_string = "noaccess"; // 0x6be PushS
	GetProperty(var_55_string, var_26_int); // 0x6bf ObjFunc
	var_56_int = 0; // 0x6c1 PushI
	var_23_bool = var_26_int == var_56_int; // 0x6c2 Eq2
	return 2; // 0x6c3 Return
}


func_1197(var_639_bool)
{
	var_639_bool = 1; // 0x4ad MovB
	return 0; // 0x4ae Return
}


func_1199(var_514_int)
{
	var_514_int = 1; // 0x4af MovI
	return 0; // 0x4b0 Return
}


func_1201(var_509_float)
{
	var_509_float = 0.5; // 0x4b1 MovF
	return 0; // 0x4b2 Return
}


func_180(var_103_object)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_string = ""; var_109_object = Obj(); var_110_bool = 0; var_111_bool = 0; var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_string = ""; var_119_object = Obj(); var_120_bool = 0; var_121_bool = 0; var_122_float = 0; var_123_cvector = CVector(0,0,0); // 0xb4 PushV
	var_124_bool = var_103_object == 0; // 0xb5 NullEq
	if(var_124_bool == 0) goto Label_188; // 0xb6 JumpB
	var_125_string = ""; // 0xb7 PushV
	var_125_string = "fdie"; // 0xb8 MovS
	func_271(var_125_string); // 0xb9 NEW_2
	goto Label_270; // 0xbb Jump
	
Label_270:
	return 20; // 0x10e Return
	
Label_188:
	GetPosition(var_114_cvector); // 0xbc ObjFunc
	GetPosition(var_115_cvector); // 0xbe Func
	GetDirection(var_116_cvector); // 0xc0 Func
	var_117_cvector = var_115_cvector - var_114_cvector; // 0xc2 Sub2
	var_157_float = GetByIndex(var_117_cvector, 0); // 0xc3 PushE
	var_158_float = GetByIndex(var_116_cvector, 0); // 0xc4 PushE
	var_159_float = var_157_float * var_158_float; // 0xc5 Mult
	var_160_float = GetByIndex(var_117_cvector, 2); // 0xc6 PushE
	var_161_float = GetByIndex(var_116_cvector, 2); // 0xc7 PushE
	var_162_float = var_160_float * var_161_float; // 0xc8 Mult
	var_163_int = var_159_float + var_162_float; // 0xc9 Add
	var_164_int = 0; // 0xca PushI
	var_165_bool = var_163_int >= var_164_int; // 0xcb GE
	if(var_165_bool == 0) goto Label_207; // 0xcc JumpB
	var_118_string = "fdie"; // 0xcd MovS
	goto Label_208; // 0xce Jump
	
Label_208:
	RemoveRTEnvelope(); // 0xd0 Func
	SetDeathState(); // 0xd2 Func
	Stop(); // 0xd4 Func
	StopAsync(); // 0xd6 Func
	var_119_object = var_103_object; // 0xd8 Mov
	var_166_string = "GetScriptProperty"; // 0xd9 PushS
	var_167_int = 2; // 0xda PushI
	var_168_bool = IsFuncExist(var_103_object, var_166_string, var_167_int); // 0xdb FuncExist
	if(var_168_bool == 0) goto Label_232; // 0xdc JumpB
	var_169_string = "Owner"; // 0xdd PushS
	HasScriptProperty(var_120_bool, var_169_string); // 0xde ObjFunc
	var_170_bool = var_120_bool; // 0xe0 Push
	if(var_170_bool == 0) goto Label_232; // 0xe1 JumpB
	var_171_string = "Owner"; // 0xe2 PushS
	GetScriptProperty(var_119_object, var_171_string); // 0xe3 ObjFunc
	var_172_bool = var_119_object == 0; // 0xe5 NullEq
	if(var_172_bool == 0) goto Label_232; // 0xe6 JumpB
	var_119_object = var_103_object; // 0xe7 Mov
	
Label_232:
	var_173_string = "@GetEyesHeight"; // 0xe8 PushS
	var_174_int = 1; // 0xe9 PushI
	var_175_bool = IsFuncExist(var_119_object, var_173_string, var_174_int); // 0xea FuncExist
	if(var_175_bool == 0) goto Label_247; // 0xeb JumpB
	GetEyesHeight(var_122_float); // 0xec ObjFunc
	var_123_cvector = CVector(0.0, 0.0, 0.0); // 0xee MovV
	var_176_float = GetByIndex(var_123_cvector, 1); // 0xef PushE
	var_176_float = var_122_float; // 0xf0 Mov
	SetByIndex(var_123_cvector, 1) = var_176_float; // 0xf1 PopE
	var_177_string = "head"; // 0xf2 PushS
	LookAsync(var_103_object, var_177_string, var_123_cvector); // 0xf3 Func
	var_121_bool = 1; // 0xf5 MovB
	goto Label_248; // 0xf6 Jump
	
Label_248:
	var_178_string = ""; // 0xf8 PushV
	var_178_string = var_118_string; // 0xf9 Mov
	func_1915(var_178_string); // 0xfa NEW_2
	var_179_string = "all"; // 0xfc PushS
	PlayAnimation(var_179_string, var_118_string); // 0xfd Func
	WaitForAnimEnd(); // 0xff Func
	var_180_bool = var_121_bool; // 0x101 Push
	if(var_180_bool == 0) goto Label_264; // 0x102 JumpB
	StopAsync(); // 0x103 Func
	var_181_string = "head"; // 0x105 PushS
	UnlookAsync(var_181_string); // 0x106 Func
	
Label_264:
	var_182_string = "all"; // 0x108 PushS
	LockAnimationEnd(var_182_string, var_118_string); // 0x109 Func
	RemoveEnvelope(); // 0x10b Func
	var_119_object = 0; // 0x10d SetNull
	
Label_247:
	var_121_bool = 0; // 0xf7 MovB
	
Label_207:
	var_118_string = "bdie"; // 0xcf MovS
}


func_2240()
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x8c0 PushV
	var_19_int = 0; // 0x8c1 PushI
	ClearSubContainer(var_19_int); // 0x8c2 Func
	var_20_int = 0; var_21_int = 0; // 0x8c4 PushV
	var_20_int = 300; // 0x8c5 MovI
	var_21_int = 750; // 0x8c6 MovI
	func_2209(var_20_int, var_21_int); // 0x8c7 NEW_2
	var_39_string = ""; var_40_int = 0; var_41_int = 0; // 0x8c9 PushV
	var_39_string = "Knife"; // 0x8ca MovS
	var_40_int = 1; // 0x8cb MovI
	var_41_int = 8; // 0x8cc MovI
	func_1904(var_39_string, var_40_int, var_41_int); // 0x8cd NEW_2
	var_50_string = ""; var_51_int = 0; var_52_int = 0; // 0x8cf PushV
	var_50_string = "lockpick"; // 0x8d0 MovS
	var_51_int = 1; // 0x8d1 MovI
	var_52_int = 6; // 0x8d2 MovI
	func_1904(var_50_string, var_51_int, var_52_int); // 0x8d3 NEW_2
	var_53_int = 0; var_54_string = ""; // 0x8d5 PushV
	var_54_string = "grabitel_mark"; // 0x8d6 MovS
	func_2270(var_53_int, var_54_string); // 0x8d7 NEW_2
	var_55_int = 0; // 0x8d9 PushI
	var_56_int = 1; // 0x8da PushI
	AddItem(var_18_bool, var_53_int, var_55_int, var_56_int); // 0x8db Func
	return 4; // 0x8dd Return
}


func_1732(var_101_bool, var_102_cvector)
{
	var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_bool = 0; // 0x6c4 PushV
	GetPosition(var_106_cvector); // 0x6c5 Func
	var_107_cvector = var_102_cvector - var_106_cvector; // 0x6c7 Sub2
	var_109_float = GetByIndex(var_107_cvector, 0); // 0x6c8 PushE
	var_110_float = GetByIndex(var_107_cvector, 2); // 0x6c9 PushE
	Rotate(var_109_float, var_110_float, var_108_bool); // 0x6ca Func
	var_101_bool = var_108_bool; // 0x6cc Mov
	return 6; // 0x6cd Return
}


func_1227(var_2_object, var_267_bool, var_268_object, var_269_float, var_270_float, var_271_bool, var_272_bool)
{
	var_276_bool = 0; var_277_bool = 0; var_278_bool = 0; var_279_bool = 0; // 0x4cb PushV
	var_280_object = Obj(); // 0x4cc PushV
	var_280_object = var_268_object; // 0x4cd Mov
	func_2082(var_280_object); // 0x4ce NEW_2
	var_281_int = 1; // 0x4d0 PushI
	var_282_int = 5; // 0x4d1 PushI
	SetTimer(var_281_int, var_282_int); // 0x4d2 Func
	CanSee(var_278_bool, var_268_object); // 0x4d4 Func
	var_283_bool = var_278_bool; // 0x4d6 Push
	if(var_283_bool == 0) goto Label_1246; // 0x4d7 JumpB
	var_2_object = 1; // 0x4d8 TMovB
	var_284_object = Obj(); // 0x4d9 PushV
	var_284_object = var_268_object; // 0x4da Mov
	func_1893(var_284_object); // 0x4db NEW_2
	goto Label_1247; // 0x4dd Jump
	
Label_1247:
	var_291_bool = 0; var_292_object = Obj(); // 0x4df PushV
	var_292_object = var_268_object; // 0x4e0 Mov
	func_1524(var_291_bool, var_292_object); // 0x4e1 NEW_2
	if(var_291_bool == 0) goto Label_1257; // 0x4e3 JumpB
	var_295_object = Obj(); // 0x4e4 PushV
	func_1956(var_295_object); // 0x4e5 NEW_2
	SendPlayerEnemy(var_268_object, var_295_object); // 0x4e7 Func
	
Label_1257:
	var_296_bool = 0; var_297_object = Obj(); var_298_float = 0; var_299_float = 0; var_300_bool = 0; var_301_bool = 0; // 0x4e9 PushV
	var_297_object = var_268_object; // 0x4ea Mov
	var_298_float = var_269_float; // 0x4eb Mov
	var_299_float = var_270_float; // 0x4ec Mov
	var_300_bool = var_271_bool; // 0x4ed Mov
	var_301_bool = var_272_bool; // 0x4ee Mov
	func_1332(var_278_bool, var_279_bool, var_296_bool, var_297_object, var_298_float, var_299_float, var_300_bool, var_301_bool); // 0x4ef NEW_2
	var_279_bool = var_296_bool; // 0x4f0 Mov
	var_347_object = var_2_object; // 0x4f2 PushT
	if(var_347_object == 0) goto Label_1271; // 0x4f3 JumpB
	var_348_string = "head"; // 0x4f4 PushS
	UnlookAsync(var_348_string); // 0x4f5 Func
	
Label_1271:
	var_349_int = 1; // 0x4f7 PushI
	KillTimer(var_349_int); // 0x4f8 Func
	var_267_bool = var_279_bool; // 0x4fa Mov
	return 4; // 0x4fb Return
	
Label_1246:
	var_2_object = 0; // 0x4de TMovB
}


func_1742(var_97_bool)
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0x6ce PushV
	GetPosition(var_100_cvector); // 0x6cf ObjFunc
	var_101_bool = 0; var_102_cvector = CVector(0,0,0); // 0x6d1 PushV
	var_102_cvector = var_100_cvector; // 0x6d2 Mov
	func_1732(var_101_bool, var_102_cvector); // 0x6d3 NEW_2
	var_97_bool = var_101_bool; // 0x6d4 Mov
	return 2; // 0x6d6 Return
}


func_1751(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x6d7 PushV
	var_42_bool = var_27_object == 0; // 0x6d8 NullEq
	if(var_42_bool == 0) goto Label_1755; // 0x6d9 JumpB
	return 14; // 0x6da Return
	
Label_1755:
	IsDead(var_35_bool); // 0x6db Func
	var_43_bool = var_35_bool; // 0x6dd Push
	if(var_43_bool == 0) goto Label_1760; // 0x6de JumpB
	return 14; // 0x6df Return
	
Label_1760:
	GetSecondaryAnimationType(var_36_int); // 0x6e0 Func
	var_44_int = 0; // 0x6e2 PushI
	var_45_bool = var_36_int < var_44_int; // 0x6e3 LT
	if(var_45_bool == 0) goto Label_1766; // 0x6e4 JumpB
	return 14; // 0x6e5 Return
	
Label_1766:
	GetPosition(var_37_cvector); // 0x6e6 ObjFunc
	GetPosition(var_38_cvector); // 0x6e8 Func
	GetDirection(var_39_cvector); // 0x6ea Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x6ec Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x6ed PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x6ee PushE
	var_48_float = var_46_float * var_47_float; // 0x6ef Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x6f0 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x6f1 PushE
	var_51_float = var_49_float * var_50_float; // 0x6f2 Mult
	var_52_int = var_48_float + var_51_float; // 0x6f3 Add
	var_53_int = 0; // 0x6f4 PushI
	var_54_bool = var_52_int >= var_53_int; // 0x6f5 GE
	if(var_54_bool == 0) goto Label_1785; // 0x6f6 JumpB
	var_41_string = "fhit"; // 0x6f7 MovS
	goto Label_1786; // 0x6f8 Jump
	
Label_1786:
	var_55_string = "hit_react"; // 0x6fa PushS
	var_56_string = "1"; // 0x6fb PushS
	var_57_int = var_41_string + var_56_string; // 0x6fc Add
	var_58_string = "2"; // 0x6fd PushS
	var_59_int = var_41_string + var_58_string; // 0x6fe Add
	var_60_int = -10; // 0x6ff PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x700 Func
	return 14; // 0x702 Return
	
Label_1785:
	var_41_string = "bhit"; // 0x6f9 MovS
}


func_2270(var_32_int, var_33_string)
{
	var_34_int = 0; var_35_int = 0; // 0x8de PushV
	GetInvItemByName(var_35_int, var_33_string); // 0x8df Func
	var_32_int = var_35_int; // 0x8e1 Mov
	return 2; // 0x8e2 Return
}


func_2275(var_52_object)
{
	var_53_object = Obj(); // 0x8e4 PushV
	var_53_object = var_52_object; // 0x8e5 Mov
	TaskCall(6); // 0x8e6 TaskCall
	func_1483(var_53_object); // 0x8e7 NEW_2
	TaskReturn(); // 0x8e8 TaskReturn
	return 0; // 0x8ea Return
}


func_2283(var_137_cvector, var_138_cvector, var_139_cvector, var_140_float)
{
	var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_float = 0; var_144_float = 0; var_145_float = 0; var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_float = 0; // 0x8eb PushV
	var_147_cvector = var_139_cvector - var_138_cvector; // 0x8ec Sub2
	var_148_float = 250000; // 0x8ed MovI
	var_153_float = GetByIndex(var_147_cvector, 1); // 0x8ee PushE
	var_154_int = 1000; // 0x8ef PushI
	var_155_float = var_153_float * var_154_int; // 0x8f0 Mult
	var_156_float = var_140_float * var_140_float; // 0x8f1 Mult
	var_149_float = var_155_float - var_156_float; // 0x8f2 Sub2
	var_150_float = var_147_cvector | var_147_cvector; // 0x8f3 Or2
	var_157_float = 0; var_158_float = 0; var_159_float = 0; var_160_float = 0; // 0x8f4 PushV
	var_158_float = var_148_float; // 0x8f5 Mov
	var_159_float = var_149_float; // 0x8f6 Mov
	var_160_float = var_150_float; // 0x8f7 Mov
	func_1979(var_157_float, var_158_float, var_159_float, var_160_float); // 0x8f8 NEW_2
	var_151_float = var_157_float; // 0x8f9 Mov
	var_165_int = 0; // 0x8fb PushI
	var_166_bool = var_151_float < var_165_int; // 0x8fc LT
	if(var_166_bool == 0) goto Label_2304; // 0x8fd JumpB
	var_152_float = 1; // 0x8fe MovI
	goto Label_2312; // 0x8ff Jump
	
Label_2312:
	var_167_cvector = CVector(0.0, 500.0, 0.0); // 0x908 PushVec
	var_168_float = var_167_cvector * var_152_float; // 0x909 Mult
	var_169_float = var_168_float * var_152_float; // 0x90a Mult
	var_170_int = var_147_cvector + var_169_float; // 0x90b Add
	var_137_cvector = var_170_int / var_170_int; // 0x90c Div2
	return 12; // 0x90d Return
	
Label_2304:
	var_171_float = 0; var_172_float = 0; var_173_float = 0; var_174_float = 0; var_175_float = 0; // 0x900 PushV
	var_172_float = var_148_float; // 0x901 Mov
	var_173_float = var_149_float; // 0x902 Mov
	var_174_float = var_150_float; // 0x903 Mov
	var_175_float = sqrt(var_151_float); // 0x904 Sqrt2
	func_1986(var_172_float, var_173_float, var_174_float, var_175_float); // 0x905 NEW_2
	var_152_float = sqrt(var_171_float); // 0x907 Sqrt2
}


func_1795(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x703 PushV
	var_35_bool = 0; // 0x704 PushV
	var_35_bool = 0; // 0x705 MovB
	var_36_bool = 0; // 0x706 PushV
	var_36_bool = 0; // 0x707 MovB
	var_37_object = var_14_object; // 0x708 Push
	if(var_37_object == 0) goto Label_1806; // 0x709 JumpB
	var_38_int = 4; // 0x70a PushI
	var_39_bool = var_15_int != var_38_int; // 0x70b Neq
	if(var_39_bool == 0) goto Label_1806; // 0x70c JumpB
	var_36_bool = 1; // 0x70d MovB
	
Label_1806:
	if(var_36_bool == 0) goto Label_1811; // 0x70e JumpB
	var_40_int = 5; // 0x70f PushI
	var_41_bool = var_15_int != var_40_int; // 0x710 Neq
	if(var_41_bool == 0) goto Label_1811; // 0x711 JumpB
	var_35_bool = 1; // 0x712 MovB
	
Label_1811:
	if(var_35_bool == 0) goto Label_1858; // 0x713 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x714 PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x715 PushV
	var_45_object = var_14_object; // 0x716 Mov
	func_1509(var_45_object); // 0x717 NEW_2
	var_43_cvector = var_44_cvector; // 0x718 Mov
	func_1962(var_42_cvector, var_43_cvector); // 0x71a NEW_2
	var_26_cvector = var_42_cvector; // 0x71b Mov
	CreateVectorVector(var_27_object); // 0x71d Func
	var_28_int = 1; // 0x71f MovI
	
Label_1824:
	var_55_string = "hit"; // 0x720 PushS
	var_56_int = var_55_string + var_28_int; // 0x721 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x722 Func
	var_57_bool = var_29_bool == 0; // 0x724 Not
	if(var_57_bool == 0) goto Label_1831; // 0x725 JumpB
	goto Label_1840; // 0x726 Jump
	
Label_1840:
	size(var_32_int); // 0x730 ObjFunc
	var_58_int = var_32_int; // 0x732 Push
	if(var_58_int == 0) goto Label_1857; // 0x733 JumpB
	irand(var_33_int, var_32_int); // 0x734 Func
	get(var_34_cvector, var_33_int); // 0x736 ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x738 PushV
	var_59_object = var_14_object; // 0x739 Mov
	var_60_int = var_15_int; // 0x73a Mov
	var_61_float = var_16_float; // 0x73b Mov
	var_62_cvector = var_34_cvector; // 0x73c Mov
	var_63_cvector = -var_26_cvector; // 0x73d Neg2
	func_1863(var_61_float, var_62_cvector, var_63_cvector); // 0x73e NEW_2
	return 18; // 0x740 Return
	
Label_1857:
	var_27_object = 0; // 0x741 SetNull
	
Label_1858:
	var_104_object = Obj(); // 0x742 PushV
	var_104_object = var_14_object; // 0x743 Mov
	func_1751(var_104_object); // 0x744 NEW_2
	return 18; // 0x746 Return
	
Label_1831:
	var_105_int = var_31_cvector | var_26_cvector; // 0x727 Or
	var_106_float = 0.70711; // 0x728 PushF
	var_107_bool = var_105_int >= var_106_float; // 0x729 GE
	if(var_107_bool == 0) goto Label_1837; // 0x72a JumpB
	add(var_30_cvector); // 0x72b ObjFunc
	
Label_1837:
	var_108_int = 1; // 0x72d PushI
	var_28_int = var_28_int + var_108_int; // 0x72e Add2
	goto Label_1824; // 0x72f Jump
}


func_772(var_1_bool, var_2_object, var_4_int)
{
	var_227_bool = 0; var_228_bool = 0; var_229_cvector = CVector(0,0,0); var_230_bool = 0; var_231_bool = 0; var_232_cvector = CVector(0,0,0); // 0x304 PushV
	var_1_bool = 0; // 0x305 TMovI
	
Label_774:
	var_233_string = "all"; // 0x306 PushS
	var_234_string = "attack_begin"; // 0x307 PushS
	var_235_int = 1; // 0x308 PushI
	var_236_int = var_1_bool + var_235_int; // 0x309 Add
	var_237_int = var_234_string + var_236_int; // 0x30a Add
	HasAnimation(var_230_bool, var_233_string, var_237_int); // 0x30b Func
	var_238_bool = var_230_bool == 0; // 0x30d Not
	if(var_238_bool == 0) goto Label_784; // 0x30e JumpB
	goto Label_787; // 0x30f Jump
	
Label_787:
	var_2_object = 0; // 0x313 TMovI
	
Label_788:
	var_239_string = "attack"; // 0x314 PushS
	var_240_int = 1; // 0x315 PushI
	var_241_int = var_2_object + var_240_int; // 0x316 Add
	var_242_int = var_239_string + var_241_int; // 0x317 Add
	IsExisting3DSound(var_231_bool, var_242_int); // 0x318 Func
	var_243_bool = var_231_bool == 0; // 0x31a Not
	if(var_243_bool == 0) goto Label_797; // 0x31b JumpB
	goto Label_800; // 0x31c Jump
	
Label_800:
	var_244_string = "all"; // 0x320 PushS
	var_245_string = "bjump"; // 0x321 PushS
	GetAnimationOffset(var_232_cvector, var_244_string, var_245_string); // 0x322 Func
	var_246_float = GetByIndex(var_232_cvector, 2); // 0x324 PushE
	var_4_int = -var_246_float; // 0x325 Neg2
	return 6; // 0x326 Return
	
Label_797:
	var_247_int = 1; // 0x31d PushI
	var_2_object = var_2_object + var_247_int; // 0x31e Add2
	goto Label_788; // 0x31f Jump
	
Label_784:
	var_248_int = 1; // 0x310 PushI
	var_1_bool = var_1_bool + var_248_int; // 0x311 Add2
	goto Label_774; // 0x312 Jump
}


func_1290(var_2_int)
{
	var_11_int = 1; // 0x50a PushI
	KillTimer(var_11_int); // 0x50b Func
	var_12_int = var_2_int; // 0x50d PushT
	if(var_12_int == 0) goto Label_1299; // 0x50e JumpB
	var_2_int = 0; // 0x50f TMovB
	var_13_string = "head"; // 0x510 PushS
	UnlookAsync(var_13_string); // 0x511 Func
	
Label_1299:
	func_1456(var_10_object); // 0x514 NEW_2
	return 0; // 0x516 Return
}


func_2318()
{
	return 0; // 0x90f Return
}


func_271(var_125_string)
{
	RemoveRTEnvelope(); // 0x110 Func
	SetDeathState(); // 0x112 Func
	Stop(); // 0x114 Func
	StopAsync(); // 0x116 Func
	StopSecondaryAnimation(); // 0x118 Func
	var_126_string = ""; // 0x11a PushV
	var_126_string = var_125_string; // 0x11b Mov
	func_1915(var_126_string); // 0x11c NEW_2
	var_155_string = "all"; // 0x11e PushS
	PlayAnimation(var_155_string, var_125_string); // 0x11f Func
	WaitForAnimEnd(); // 0x121 Func
	var_156_string = "all"; // 0x123 PushS
	LockAnimationEnd(var_156_string, var_125_string); // 0x124 Func
	RemoveEnvelope(); // 0x126 Func
	return 0; // 0x128 Return
}


func_2320(var_13_bool)
{
	var_13_bool = 0; // 0x911 MovB
	return 0; // 0x912 Return
}


func_807(var_0_object, var_518_float, var_519_int)
{
	var_520_object = Obj(); var_521_float = 0; var_522_float = 0; var_523_object = Obj(); var_524_float = 0; var_525_float = 0; // 0x327 PushV
	var_526_float = 0.9; // 0x328 PushF
	var_527_float = var_518_float * var_526_float; // 0x329 Mult
	GetVictim(var_527_float, var_523_object); // 0x32a Func
	ReportAttack(var_0_object); // 0x32c Func
	var_528_bool = var_523_object == var_0_object; // 0x32e Eq
	if(var_528_bool == 0) goto Label_844; // 0x32f JumpB
	var_529_float = 0; var_530_object = Obj(); var_531_int = 0; // 0x330 PushV
	var_530_object = var_523_object; // 0x331 Mov
	var_531_int = var_519_int; // 0x332 Mov
	func_494(var_531_int); // 0x333 NEW_2
	var_524_float = var_529_float; // 0x334 Mov
	var_532_float = 0; var_533_object = Obj(); var_534_float = 0; var_535_int = 0; // 0x336 PushV
	var_533_object = var_523_object; // 0x337 Mov
	var_534_float = var_524_float; // 0x338 Mov
	var_536_int = 0; var_537_object = Obj(); var_538_int = 0; // 0x339 PushV
	var_537_object = var_523_object; // 0x33a Mov
	var_538_int = var_519_int; // 0x33b Mov
	func_497(var_538_int); // 0x33c NEW_2
	var_535_int = var_536_int; // 0x33d Mov
	func_1563(var_532_float, var_533_object, var_534_float, var_535_int); // 0x33f NEW_2
	var_525_float = var_532_float; // 0x340 Mov
	var_593_int = 0; // 0x342 PushV
	func_500(var_593_int); // 0x343 NEW_2
	ReportHit(var_0_object, var_593_int, var_525_float, var_524_float); // 0x345 Func
	var_594_object = Obj(); var_595_float = 0; // 0x347 PushV
	var_594_object = var_523_object; // 0x348 Mov
	var_595_float = var_525_float; // 0x349 Mov
	func_502(var_594_object, var_595_float); // 0x34a NEW_2
	
Label_844:
	return 6; // 0x34c Return
}


func_303(var_54_bool, var_55_object, var_77_bool, var_680_object)
{
	var_56_float = 0; var_57_float = 0; // 0x12f PushV
	var_58_bool = 0; var_59_object = Obj(); // 0x130 PushV
	var_59_object = var_55_object; // 0x131 Mov
	func_1708(var_58_bool, var_59_object); // 0x132 NEW_2
	var_60_bool = var_58_bool == 0; // 0x134 Not
	if(var_60_bool == 0) goto Label_312; // 0x135 JumpB
	var_54_bool = 0; // 0x136 MovB
	return 2; // 0x137 Return
	
Label_312:
	var_61_float = 0; var_62_object = Obj(); // 0x138 PushV
	var_62_object = var_55_object; // 0x139 Mov
	func_1516(var_62_object); // 0x13a NEW_2
	var_57_float = var_61_float; // 0x13b Mov
	var_69_bool = 0; var_70_float = 0; var_71_float = 0; var_72_float = 0; // 0x13d PushV
	var_70_float = var_57_float; // 0x13e Mov
	var_71_float = 250000.0; // 0x13f MovF
	var_72_float = 3240000.0; // 0x140 MovF
	func_2014(var_69_bool, var_70_float, var_71_float, var_72_float); // 0x141 NEW_2
	if(var_69_bool == 0) goto Label_332; // 0x143 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x144 PushV
	var_76_object = var_55_object; // 0x145 Mov
	TaskCall(3); // 0x146 TaskCall
	func_340(var_57_float, var_77_bool, var_75_bool, var_76_object); // 0x147 NEW_2
	TaskReturn(); // 0x148 TaskReturn
	var_54_bool = var_77_bool; // 0x149 Mov
	return 2; // 0x14b Return
	
Label_332:
	var_678_bool = 0; var_679_object = Obj(); // 0x14c PushV
	var_679_object = var_55_object; // 0x14d Mov
	TaskCall(4); // 0x14e TaskCall
	func_466(var_678_bool, var_679_object); // 0x14f NEW_2
	TaskReturn(); // 0x150 TaskReturn
	var_54_bool = var_680_object; // 0x151 Mov
	return 2; // 0x153 Return
}


func_1332(var_0_object, var_1_bool, var_296_bool, var_297_object, var_298_float, var_299_float, var_300_bool, var_301_bool)
{
	var_302_bool = 0; var_303_bool = 0; var_304_object = Obj(); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_object = Obj(); var_310_bool = 0; var_311_bool = 0; var_312_object = Obj(); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_object = Obj(); // 0x534 PushV
	var_0_object = 0; // 0x535 TMovB
	var_1_bool = var_297_object; // 0x536 TMov
	var_311_bool = var_301_bool; // 0x537 Mov
	
Label_1336:
	var_318_bool = 0; var_319_object = Obj(); // 0x538 PushV
	var_319_object = var_297_object; // 0x539 Mov
	func_1472(var_318_bool, var_319_object); // 0x53a NEW_2
	var_322_bool = var_318_bool == 0; // 0x53c Not
	if(var_322_bool == 0) goto Label_1344; // 0x53d JumpB
	var_296_bool = 0; // 0x53e MovB
	return 16; // 0x53f Return
	
Label_1344:
	GetPosition(var_313_cvector); // 0x540 ObjFunc
	GetPosition(var_314_cvector); // 0x542 Func
	var_315_cvector = var_313_cvector - var_314_cvector; // 0x544 Sub2
	var_316_float = var_315_cvector | var_315_cvector; // 0x545 Or2
	var_323_bool = 0; // 0x546 PushV
	var_323_bool = 0; // 0x547 MovB
	var_324_int = 0; // 0x548 PushI
	var_325_bool = var_299_float > var_324_int; // 0x549 GT
	if(var_325_bool == 0) goto Label_1359; // 0x54a JumpB
	var_326_float = var_299_float * var_299_float; // 0x54b Mult
	var_327_bool = var_316_float > var_326_float; // 0x54c GT
	if(var_327_bool == 0) goto Label_1359; // 0x54d JumpB
	var_323_bool = 1; // 0x54e MovB
	
Label_1359:
	if(var_323_bool == 0) goto Label_1364; // 0x54f JumpB
	Stop(); // 0x550 Func
	var_296_bool = 0; // 0x552 MovB
	return 16; // 0x553 Return
	
Label_1364:
	var_328_float = var_298_float * var_298_float; // 0x554 Mult
	var_329_bool = var_316_float > var_328_float; // 0x555 GT
	if(var_329_bool == 0) goto Label_1426; // 0x556 JumpB
	GetPFPosition(var_313_cvector); // 0x557 ObjFunc
	FindPathTo(var_317_object, var_313_cvector); // 0x559 Func
	var_330_bool = var_317_object != 0; // 0x55b NullNeq
	if(var_330_bool == 0) goto Label_1375; // 0x55c JumpB
	var_312_object = var_317_object; // 0x55d Mov
	var_317_object = 0; // 0x55e SetNull
	
Label_1375:
	var_331_bool = var_312_object != 0; // 0x55f NullNeq
	if(var_331_bool == 0) goto Label_1408; // 0x560 JumpB
	var_332_bool = var_311_bool; // 0x561 Push
	if(var_332_bool == 0) goto Label_1385; // 0x562 JumpB
	var_311_bool = 0; // 0x563 MovB
	RotatePath(var_312_object, var_310_bool); // 0x564 Func
	var_333_bool = var_310_bool == 0; // 0x566 Not
	if(var_333_bool == 0) goto Label_1385; // 0x567 JumpB
	goto Label_1432; // 0x568 Jump
	
Label_1432:
	var_296_bool = !var_0_object; // 0x598 Not2
	return 16; // 0x599 Return
	
Label_1385:
	var_334_int = 0; // 0x569 PushI
	var_335_float = 0.3; // 0x56a PushF
	SetTimer(var_334_int, var_335_float); // 0x56b Func
	var_336_string = ""; // 0x56d PushV
	func_1479(var_336_string); // 0x56e NEW_2
	var_337_string = ""; // 0x570 PushV
	func_1481(var_337_string); // 0x571 NEW_2
	FollowPath(var_312_object, var_300_bool, var_310_bool, var_336_string, var_337_string); // 0x573 Func
	var_338_bool = var_310_bool == 0; // 0x575 Not
	if(var_338_bool == 0) goto Label_1406; // 0x576 JumpB
	var_339_object = var_0_object; // 0x577 PushT
	if(var_339_object == 0) goto Label_1404; // 0x578 JumpB
	var_312_object = 0; // 0x579 SetNull
	goto Label_1432; // 0x57a Jump
	
Label_1404:
	goto Label_1431; // 0x57c Jump
	
Label_1431:
	goto Label_1336; // 0x597 Jump
	
Label_1406:
	var_312_object = 0; // 0x57e SetNull
	goto Label_1424; // 0x57f Jump
	
Label_1424:
	var_317_object = 0; // 0x590 SetNull
	goto Label_1430; // 0x591 Jump
	
Label_1430:
	var_312_object = 0; // 0x596 SetNull
	
Label_1408:
	var_340_int = 0; // 0x580 PushI
	KillTimer(var_340_int); // 0x581 Func
	var_341_float = 0.5; // 0x583 PushF
	Sleep(var_341_float, var_310_bool); // 0x584 Func
	var_342_bool = var_310_bool == 0; // 0x586 Not
	if(var_342_bool == 0) goto Label_1420; // 0x587 JumpB
	var_343_object = var_0_object; // 0x588 PushT
	if(var_343_object == 0) goto Label_1420; // 0x589 JumpB
	var_312_object = 0; // 0x58a SetNull
	goto Label_1432; // 0x58b Jump
	
Label_1420:
	var_344_int = 0; // 0x58c PushI
	var_345_float = 0.3; // 0x58d PushF
	SetTimer(var_344_int, var_345_float); // 0x58e Func
	
Label_1426:
	var_346_int = 0; // 0x592 PushI
	KillTimer(var_346_int); // 0x593 Func
	goto Label_1432; // 0x595 Jump
}


func_1863(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x747 PushV
	GetScene(var_23_object); // 0x748 Func
	var_25_string = "scripted"; // 0x74a PushS
	var_26_string = "blood_dir.xml"; // 0x74b PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x74c Func
	var_27_object = Obj(); // 0x74e PushV
	var_27_object = var_16_object; // 0x74f Mov
	func_1751(var_27_object); // 0x750 NEW_2
	return 4; // 0x752 Return
}


func_846(var_0_object, var_485_bool, var_486_float)
{
	var_487_int = 0; var_488_bool = 0; var_489_int = 0; var_490_string = ""; var_491_int = 0; var_492_bool = 0; var_493_int = 0; var_494_string = ""; // 0x34e PushV
	func_1187(var_494_string); // 0x350 NEW_2
	irand(var_491_int, var_494_string); // 0x352 Func
	var_495_int = 1; // 0x354 PushI
	var_491_int = var_491_int + var_495_int; // 0x355 Add2
	Face(var_0_object); // 0x356 Func
	var_496_bool = 1; // 0x358 PushB
	SetAttackState(var_496_bool); // 0x359 Func
	func_2091(); // 0x35c NEW_2
	var_497_string = "all"; // 0x35e PushS
	var_498_string = "attack_begin"; // 0x35f PushS
	var_499_int = var_498_string + var_491_int; // 0x360 Add
	PlayAnimation(var_497_string, var_499_int); // 0x361 Func
	WaitForAnimEnd(); // 0x363 Func
	func_1155(var_493_int, var_494_string); // 0x366 NEW_2
	var_515_bool = 0; var_516_object = Obj(); // 0x368 PushV
	var_516_object = var_0_object; // 0x369 MovT
	func_1708(var_515_bool, var_516_object); // 0x36a NEW_2
	var_517_bool = var_515_bool == 0; // 0x36c Not
	if(var_517_bool == 0) goto Label_882; // 0x36d JumpB
	StopAsync(); // 0x36e Func
	var_485_bool = 0; // 0x370 MovB
	return 8; // 0x371 Return
	
Label_882:
	var_518_float = 0; var_519_int = 0; // 0x372 PushV
	var_518_float = var_486_float; // 0x373 Mov
	var_519_int = var_491_int; // 0x374 Mov
	func_807(var_494_string, var_518_float, var_519_int); // 0x375 NEW_2
	var_617_string = "all"; // 0x377 PushS
	var_618_string = "attack_middle"; // 0x378 PushS
	var_619_int = var_618_string + var_491_int; // 0x379 Add
	HasAnimation(var_492_bool, var_617_string, var_619_int); // 0x37a Func
	var_620_bool = var_492_bool; // 0x37c Push
	if(var_620_bool == 0) goto Label_963; // 0x37d JumpB
	func_2091(); // 0x37f NEW_2
	var_621_string = "all"; // 0x381 PushS
	var_622_string = "attack_middle"; // 0x382 PushS
	var_623_int = var_622_string + var_491_int; // 0x383 Add
	PlayAnimation(var_621_string, var_623_int); // 0x384 Func
	WaitForAnimEnd(); // 0x386 Func
	func_1187(var_494_string); // 0x389 NEW_2
	var_624_bool = 0; var_625_object = Obj(); // 0x38b PushV
	var_625_object = var_0_object; // 0x38c MovT
	func_1708(var_624_bool, var_625_object); // 0x38d NEW_2
	var_626_bool = var_624_bool == 0; // 0x38f Not
	if(var_626_bool == 0) goto Label_917; // 0x390 JumpB
	StopAsync(); // 0x391 Func
	var_485_bool = 0; // 0x393 MovB
	return 8; // 0x394 Return
	
Label_917:
	var_627_float = 0; var_628_int = 0; // 0x395 PushV
	var_627_float = var_486_float; // 0x396 Mov
	var_628_int = var_491_int; // 0x397 Mov
	func_807(var_494_string, var_627_float, var_628_int); // 0x398 NEW_2
	var_493_int = 1; // 0x39a MovI
	
Label_923:
	var_629_string = "attack_middle"; // 0x39b PushS
	var_630_int = var_629_string + var_491_int; // 0x39c Add
	var_631_string = "_"; // 0x39d PushS
	var_632_int = var_630_int + var_631_string; // 0x39e Add
	var_494_string = var_632_int + var_493_int; // 0x39f Add2
	var_633_string = "all"; // 0x3a0 PushS
	HasAnimation(var_492_bool, var_633_string, var_494_string); // 0x3a1 Func
	var_634_bool = var_492_bool == 0; // 0x3a3 Not
	if(var_634_bool == 0) goto Label_934; // 0x3a4 JumpB
	goto Label_963; // 0x3a5 Jump
	
Label_963:
	var_635_bool = 0; // 0x3c3 PushB
	SetAttackState(var_635_bool); // 0x3c4 Func
	var_636_string = "all"; // 0x3c6 PushS
	var_637_string = "attack_end"; // 0x3c7 PushS
	var_638_int = var_637_string + var_491_int; // 0x3c8 Add
	PlayAnimation(var_636_string, var_638_int); // 0x3c9 Func
	var_639_bool = 0; // 0x3cb PushV
	func_1197(var_639_bool); // 0x3cc NEW_2
	if(var_639_bool == 0) goto Label_981; // 0x3ce JumpB
	var_640_bool = 0; var_641_float = 0; // 0x3cf PushV
	var_641_float = 0.45; // 0x3d0 MovF
	func_985(var_640_bool, var_641_float); // 0x3d1 NEW_2
	StopAsync(); // 0x3d3 Func
	
Label_981:
	var_485_bool = 1; // 0x3d5 MovB
	return 8; // 0x3d6 Return
	
Label_934:
	func_2091(); // 0x3a7 NEW_2
	var_649_string = "all"; // 0x3a9 PushS
	PlayAnimation(var_649_string, var_494_string); // 0x3aa Func
	WaitForAnimEnd(); // 0x3ac Func
	func_1187(var_494_string); // 0x3af NEW_2
	var_650_bool = 0; var_651_object = Obj(); // 0x3b1 PushV
	var_651_object = var_0_object; // 0x3b2 MovT
	func_1708(var_650_bool, var_651_object); // 0x3b3 NEW_2
	var_652_bool = var_650_bool == 0; // 0x3b5 Not
	if(var_652_bool == 0) goto Label_955; // 0x3b6 JumpB
	StopAsync(); // 0x3b7 Func
	var_485_bool = 0; // 0x3b9 MovB
	return 8; // 0x3ba Return
	
Label_955:
	var_653_float = 0; var_654_int = 0; // 0x3bb PushV
	var_653_float = var_486_float; // 0x3bc Mov
	var_654_int = var_491_int; // 0x3bd Mov
	func_807(var_494_string, var_653_float, var_654_int); // 0x3be NEW_2
	var_655_int = 1; // 0x3c0 PushI
	var_493_int = var_493_int + var_655_int; // 0x3c1 Add2
	goto Label_923; // 0x3c2 Jump
}


func_340(var_0_object, var_75_bool, var_76_object, var_195_object)
{
	var_78_object = Obj(); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_object = Obj(); var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_object = Obj(); var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_cvector = CVector(0,0,0); // 0x154 PushV
	var_92_object = Obj(); // 0x155 PushV
	var_92_object = var_76_object; // 0x156 Mov
	func_2082(var_92_object); // 0x157 NEW_2
	var_0_object = 0; // 0x159 TMovB
	var_97_bool = 0; var_98_object = Obj(); // 0x15a PushV
	var_98_object = var_76_object; // 0x15b Mov
	func_1742(var_98_object); // 0x15c NEW_2
	var_111_bool = 0; var_112_object = Obj(); // 0x15e PushV
	var_112_object = var_76_object; // 0x15f Mov
	func_1708(var_111_bool, var_112_object); // 0x160 NEW_2
	var_113_bool = var_111_bool == 0; // 0x162 Not
	if(var_113_bool == 0) goto Label_358; // 0x163 JumpB
	var_75_bool = 0; // 0x164 MovB
	return 14; // 0x165 Return
	
Label_358:
	func_2091(); // 0x167 NEW_2
	Face(var_76_object); // 0x169 Func
	var_120_string = "all"; // 0x16b PushS
	var_121_string = "aattack_begin1"; // 0x16c PushS
	PlayAnimation(var_120_string, var_121_string); // 0x16d Func
	WaitForAnimEnd(); // 0x16f Func
	var_122_bool = 0; var_123_object = Obj(); // 0x171 PushV
	var_123_object = var_76_object; // 0x172 Mov
	func_1708(var_122_bool, var_123_object); // 0x173 NEW_2
	var_124_bool = var_122_bool == 0; // 0x175 Not
	if(var_124_bool == 0) goto Label_379; // 0x176 JumpB
	StopAsync(); // 0x177 Func
	var_75_bool = 0; // 0x179 MovB
	return 14; // 0x17a Return
	
Label_379:
	var_125_string = "all"; // 0x17b PushS
	var_126_string = "aattack_end1"; // 0x17c PushS
	PlayAnimation(var_125_string, var_126_string); // 0x17d Func
	GetScene(var_85_object); // 0x17f Func
	var_127_string = "knife"; // 0x181 PushS
	GetGeometryLocator(var_127_string, var_87_bool, var_86_cvector); // 0x182 Func
	var_128_string = "scripted"; // 0x184 PushS
	var_129_cvector = CVector(0.0, 0.0, 1.0); // 0x185 PushVec
	var_130_string = "grabitel_knife.xml"; // 0x186 PushS
	AddActorByType(var_88_object, var_128_string, var_85_object, var_86_cvector, var_129_cvector, var_130_string); // 0x187 Func
	var_131_string = "Owner"; // 0x189 PushS
	var_132_object = Obj(); // 0x18a PushV
	func_1956(var_132_object); // 0x18b NEW_2
	SetScriptProperty(var_131_string, var_132_object); // 0x18d ObjFunc
	var_133_string = "Target"; // 0x18f PushS
	SetScriptProperty(var_133_string, var_76_object); // 0x190 ObjFunc
	GetPosition(var_89_cvector); // 0x192 ObjFunc
	GetEyesHeight(var_90_float); // 0x194 ObjFunc
	var_134_float = GetByIndex(var_89_cvector, 1); // 0x196 PushE
	var_135_int = 10; // 0x197 PushI
	var_136_int = var_90_float - var_135_int; // 0x198 Sub
	var_134_float = var_134_float + var_136_int; // 0x199 Add2
	SetByIndex(var_89_cvector, 1) = var_134_float; // 0x19a PopE
	var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_float = 0; // 0x19b PushV
	var_138_cvector = var_86_cvector; // 0x19c Mov
	var_139_cvector = var_89_cvector; // 0x19d Mov
	var_140_float = 2000.0; // 0x19e MovF
	func_2283(var_137_cvector, var_138_cvector, var_139_cvector, var_140_float); // 0x19f NEW_2
	var_91_cvector = var_137_cvector; // 0x1a0 Mov
	var_188_string = "StartDirection"; // 0x1a2 PushS
	SetScriptProperty(var_188_string, var_91_cvector); // 0x1a3 ObjFunc
	WaitForAnimEnd(); // 0x1a5 Func
	StopAsync(); // 0x1a7 Func
	var_189_object = var_0_object; // 0x1a9 PushT
	if(var_189_object == 0) goto Label_429; // 0x1aa JumpB
	var_75_bool = 1; // 0x1ab MovB
	return 14; // 0x1ac Return
	
Label_429:
	var_190_bool = 0; var_191_object = Obj(); // 0x1ad PushV
	var_191_object = var_76_object; // 0x1ae Mov
	func_1708(var_190_bool, var_191_object); // 0x1af NEW_2
	var_192_bool = var_190_bool == 0; // 0x1b1 Not
	if(var_192_bool == 0) goto Label_437; // 0x1b2 JumpB
	var_75_bool = 0; // 0x1b3 MovB
	return 14; // 0x1b4 Return
	
Label_437:
	var_193_bool = 0; var_194_object = Obj(); // 0x1b5 PushV
	var_194_object = var_76_object; // 0x1b6 Mov
	TaskCall(4); // 0x1b7 TaskCall
	func_466(var_193_bool, var_194_object); // 0x1b8 NEW_2
	TaskReturn(); // 0x1b9 TaskReturn
	var_75_bool = var_195_object; // 0x1ba Mov
	return 14; // 0x1bc Return
}


func_1877()
{
	var_371_cvector = CVector(0,0,0); var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); // 0x755 PushV
	GetPosition(var_374_cvector); // 0x756 ObjFunc
	GetPosition(var_375_cvector); // 0x758 Func
	var_376_cvector = var_374_cvector - var_375_cvector; // 0x75a Sub2
	var_377_float = GetByIndex(var_376_cvector, 0); // 0x75b PushE
	var_378_float = GetByIndex(var_376_cvector, 2); // 0x75c PushE
	RotateAsync(var_377_float, var_378_float); // 0x75d Func
	return 6; // 0x75f Return
}


func_1888(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0x760 PushV
	IsLoaded(var_27_bool); // 0x761 Func
	var_25_bool = var_27_bool; // 0x763 Mov
	return 2; // 0x764 Return
}


func_1893(var_14_object)
{
	var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); // 0x765 PushV
	GetEyesHeight(var_17_float); // 0x766 ObjFunc
	var_18_cvector = CVector(0.0, 0.0, 0.0); // 0x768 MovV
	var_19_float = GetByIndex(var_18_cvector, 1); // 0x769 PushE
	var_19_float = var_17_float; // 0x76a Mov
	SetByIndex(var_18_cvector, 1) = var_19_float; // 0x76b PopE
	var_20_string = "head"; // 0x76c PushS
	LookAsync(var_14_object, var_20_string, var_18_cvector); // 0x76d Func
	return 4; // 0x76f Return
}


func_1904(var_39_string, var_40_int, var_41_int)
{
	var_42_bool = 0; var_43_bool = 0; // 0x770 PushV
	var_44_bool = 0; var_45_int = 0; var_46_int = 0; // 0x771 PushV
	var_45_int = var_40_int; // 0x772 Mov
	var_46_int = var_41_int; // 0x773 Mov
	func_2022(var_44_bool, var_45_int, var_46_int); // 0x774 NEW_2
	if(var_44_bool == 0) goto Label_1914; // 0x776 JumpB
	var_49_int = 0; // 0x777 PushI
	AddItem(var_43_bool, var_39_string, var_49_int); // 0x778 Func
	
Label_1914:
	return 2; // 0x77a Return
}


func_1915(var_126_string)
{
	var_127_bool = 0; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_bool = 0; var_132_float = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_bool = 0; var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_bool = 0; var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); // 0x77b PushV
	IsExisting3DSound(var_135_bool, var_126_string); // 0x77c Func
	var_143_bool = var_135_bool == 0; // 0x77e Not
	if(var_143_bool == 0) goto Label_1940; // 0x77f JumpB
	var_136_int = 0; // 0x780 MovI
	
Label_1921:
	var_144_int = 1; // 0x781 PushI
	var_145_int = var_136_int + var_144_int; // 0x782 Add
	var_146_int = var_126_string + var_145_int; // 0x783 Add
	IsExisting3DSound(var_137_bool, var_146_int); // 0x784 Func
	var_147_bool = var_137_bool == 0; // 0x786 Not
	if(var_147_bool == 0) goto Label_1929; // 0x787 JumpB
	goto Label_1932; // 0x788 Jump
	
Label_1932:
	var_148_bool = var_136_int == 0; // 0x78c Not
	if(var_148_bool == 0) goto Label_1935; // 0x78d JumpB
	return 16; // 0x78e Return
	
Label_1935:
	irand(var_138_int, var_136_int); // 0x78f Func
	var_149_int = 1; // 0x791 PushI
	var_150_int = var_138_int + var_149_int; // 0x792 Add
	var_126_string = var_126_string + var_150_int; // 0x793 Add2
	
Label_1940:
	Is3DSoundLoaded(var_139_bool, var_126_string); // 0x794 Func
	var_151_bool = var_139_bool; // 0x796 Push
	if(var_151_bool == 0) goto Label_1955; // 0x797 JumpB
	GetEyesHeight(var_140_float); // 0x798 Func
	GetDirection(var_141_cvector); // 0x79a Func
	var_152_int = 50; // 0x79c PushI
	var_142_cvector = var_141_cvector * var_152_int; // 0x79d Mult2
	var_153_float = GetByIndex(var_142_cvector, 1); // 0x79e PushE
	var_153_float = var_153_float + var_140_float; // 0x79f Add2
	SetByIndex(var_142_cvector, 1) = var_153_float; // 0x7a0 PopE
	PlayGlobalSound(var_126_string, var_142_cvector); // 0x7a1 Func
	
Label_1955:
	return 16; // 0x7a3 Return
	
Label_1929:
	var_154_int = 1; // 0x789 PushI
	var_136_int = var_136_int + var_154_int; // 0x78a Add2
	goto Label_1921; // 0x78b Jump
}


func_1434(var_0_bool, var_1_object, var_18_int)
{
	var_19_int = 0; // 0x59b PushI
	var_20_bool = var_18_int != var_19_int; // 0x59c Neq
	if(var_20_bool == 0) goto Label_1439; // 0x59d JumpB
	return 0; // 0x59e Return
	
Label_1439:
	var_21_bool = 0; var_22_object = Obj(); // 0x59f PushV
	var_22_object = var_1_object; // 0x5a0 MovT
	func_1472(var_21_bool, var_22_object); // 0x5a1 NEW_2
	var_57_bool = var_21_bool == 0; // 0x5a3 Not
	if(var_57_bool == 0) goto Label_1446; // 0x5a4 JumpB
	var_0_bool = 1; // 0x5a5 TMovB
	
Label_1446:
	var_58_int = 0; // 0x5a6 PushI
	KillTimer(var_58_int); // 0x5a7 Func
	Stop(); // 0x5a9 Func
	return 0; // 0x5ab Return
}


func_1956(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x7a4 PushV
	self(var_101_object); // 0x7a5 Func
	var_99_object = var_101_object; // 0x7a7 Mov
	return 2; // 0x7a8 Return
}


func_1962(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x7aa PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x7ab Or
	var_51_float = sqrt(var_52_int); // 0x7ac Sqrt2
	var_53_float = 0.0; // 0x7ad PushF
	var_54_bool = var_51_float < var_53_float; // 0x7ae LT
	if(var_54_bool == 0) goto Label_1970; // 0x7af JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x7b0 MovV
	return 2; // 0x7b1 Return
	
Label_1970:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x7b2 Div2
	return 2; // 0x7b3 Return
}


func_1456(var_0_bool)
{
	var_0_bool = 1; // 0x5b0 TMovB
	var_14_int = 0; // 0x5b1 PushI
	KillTimer(var_14_int); // 0x5b2 Func
	Stop(); // 0x5b4 Func
	return 0; // 0x5b6 Return
}


func_1972(var_570_float, var_571_float, var_572_float)
{
	var_575_bool = var_571_float < var_572_float; // 0x7b5 LT
	if(var_575_bool == 0) goto Label_1977; // 0x7b6 JumpB
	var_570_float = var_571_float; // 0x7b7 Mov
	goto Label_1978; // 0x7b8 Jump
	
Label_1978:
	return 0; // 0x7ba Return
	
Label_1977:
	var_570_float = var_572_float; // 0x7b9 Mov
}


func_1979(var_157_float, var_158_float, var_159_float, var_160_float)
{
	var_161_float = var_159_float * var_159_float; // 0x7bc Mult
	var_162_int = 4; // 0x7bd PushI
	var_163_float = var_162_int * var_158_float; // 0x7be Mult
	var_164_float = var_163_float * var_160_float; // 0x7bf Mult
	var_157_float = var_161_float - var_164_float; // 0x7c0 Sub2
	return 0; // 0x7c1 Return
}


func_1472(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x5c1 PushV
	var_24_object = var_22_object; // 0x5c2 Mov
	func_1708(var_23_bool, var_24_object); // 0x5c3 NEW_2
	var_21_bool = var_23_bool; // 0x5c4 Mov
	return 0; // 0x5c6 Return
}


func_1986(var_171_float, var_172_float, var_173_float, var_175_float)
{
	var_176_float = 0; var_177_float = 0; // 0x7c2 PushV
	var_178_int = -var_173_float; // 0x7c3 Neg
	var_179_int = var_178_int - var_175_float; // 0x7c4 Sub
	var_180_int = 2; // 0x7c5 PushI
	var_181_float = var_180_int * var_172_float; // 0x7c6 Mult
	var_177_float = var_179_int / var_179_int; // 0x7c7 Div2
	var_182_int = 0; // 0x7c8 PushI
	var_183_bool = var_177_float > var_182_int; // 0x7c9 GT
	if(var_183_bool == 0) goto Label_1997; // 0x7ca JumpB
	var_171_float = var_177_float; // 0x7cb Mov
	return 2; // 0x7cc Return
	
Label_1997:
	var_184_int = -var_173_float; // 0x7cd Neg
	var_185_int = var_184_int + var_175_float; // 0x7ce Add
	var_186_int = 2; // 0x7cf PushI
	var_187_float = var_186_int * var_172_float; // 0x7d0 Mult
	var_171_float = var_185_int / var_185_int; // 0x7d1 Div2
	return 2; // 0x7d2 Return
}


func_1479(var_336_string)
{
	var_336_string = "walk"; // 0x5c7 MovS
	return 0; // 0x5c8 Return
}


func_1481(var_337_string)
{
	var_337_string = "run"; // 0x5c9 MovS
	return 0; // 0x5ca Return
}


func_1483(var_53_object)
{
	
Label_1484:
	var_54_bool = 0; var_55_object = Obj(); // 0x5cc PushV
	var_55_object = var_53_object; // 0x5cd Mov
	TaskCall(2); // 0x5ce TaskCall
	func_303(var_52_object, var_53_object, var_54_bool, var_55_object); // 0x5cf NEW_2
	TaskReturn(); // 0x5d0 TaskReturn
	var_686_int = 1; // 0x5d2 PushI
	Sleep(var_686_int); // 0x5d3 Func
	goto Label_1484; // 0x5d5 Jump
}


func_466(var_193_bool, var_194_object)
{
	var_201_bool = GlobalVars[0]; // 0x1d3 PushGE
	var_201_bool = 0; // 0x1d4 MovB
	GlobalVars[0] = var_201_bool; // 0x1d5 PopGE
	var_202_object = Obj(); var_203_bool = 0; var_204_float = 0; // 0x1d6 PushV
	var_202_object = var_194_object; // 0x1d7 Mov
	var_203_bool = 1; // 0x1d8 MovB
	var_204_float = 200.0; // 0x1d9 MovF
	func_543(var_198_bool, var_199_float, var_200_int, var_193_bool, var_194_object, var_202_object, var_203_bool, var_204_float); // 0x1da NEW_2
	var_672_bool = 0; // 0x1dc PushV
	var_672_bool = 0; // 0x1dd MovB
	var_673_bool = GlobalVars[0]; // 0x1de PushGE
	if(var_673_bool == 0) goto Label_483; // 0x1df JumpB
	var_674_int = var_3_int; // 0x1e0 PushT
	if(var_674_int == 0) goto Label_483; // 0x1e1 JumpB
	var_672_bool = 1; // 0x1e2 MovB
	
Label_483:
	if(var_672_bool == 0) goto Label_490; // 0x1e3 JumpB
	var_675_string = "all"; // 0x1e4 PushS
	var_676_string = "attack_off"; // 0x1e5 PushS
	PlayAnimation(var_675_string, var_676_string); // 0x1e6 Func
	WaitForAnimEnd(); // 0x1e8 Func
	
Label_490:
	var_677_bool = GlobalVars[0]; // 0x1ea PushGE
	var_193_bool = var_677_bool; // 0x1eb Mov
	return 0; // 0x1ed Return
}


func_2003(var_90_float, var_91_float, var_92_float, var_93_float)
{
	var_94_bool = var_91_float < var_92_float; // 0x7d4 LT
	if(var_94_bool == 0) goto Label_2008; // 0x7d5 JumpB
	var_90_float = var_92_float; // 0x7d6 Mov
	return 0; // 0x7d7 Return
	
Label_2008:
	var_95_bool = var_91_float > var_93_float; // 0x7d8 GT
	if(var_95_bool == 0) goto Label_2012; // 0x7d9 JumpB
	var_90_float = var_93_float; // 0x7da Mov
	return 0; // 0x7db Return
	
Label_2012:
	var_90_float = var_91_float; // 0x7dc Mov
	return 0; // 0x7dd Return
}


func_983(var_3_int)
{
	var_3_int = 1; // 0x3d7 TMovB
	return 0; // 0x3d8 Return
}


func_1495(var_560_string, var_561_int)
{
	var_562_int = 2; // 0x5d8 PushI
	var_563_bool = var_561_int == var_562_int; // 0x5d9 Eq
	if(var_563_bool == 0) goto Label_1502; // 0x5da JumpB
	var_560_string = "fire"; // 0x5db MovS
	return 0; // 0x5dc Return
	
Label_1502:
	var_564_int = 1; // 0x5de PushI
	var_565_bool = var_561_int == var_564_int; // 0x5df Eq
	if(var_565_bool == 0) goto Label_1507; // 0x5e0 JumpB
	var_560_string = "bullet"; // 0x5e1 MovS
	return 0; // 0x5e2 Return
	
Label_1507:
	var_560_string = "phys"; // 0x5e3 MovS
	return 0; // 0x5e4 Return
}


func_985(var_640_bool, var_641_float)
{
	var_642_float = 0; var_643_bool = 0; var_644_float = 0; var_645_bool = 0; // 0x3d9 PushV
	rand(var_644_float); // 0x3da Func
	var_646_bool = var_644_float < var_641_float; // 0x3dc LT
	if(var_646_bool == 0) goto Label_1005; // 0x3dd JumpB
	
Label_990:
	IsAnimationPlaying(var_645_bool); // 0x3de Func
	var_647_bool = var_645_bool == 0; // 0x3e0 Not
	if(var_647_bool == 0) goto Label_995; // 0x3e1 JumpB
	goto Label_1004; // 0x3e2 Jump
	
Label_1004:
	goto Label_1010; // 0x3ec Jump
	
Label_1010:
	var_640_bool = 0; // 0x3f2 MovB
	return 4; // 0x3f3 Return
	
Label_995:
	var_648_bool = 0; // 0x3e3 PushV
	func_1083(var_648_bool); // 0x3e4 NEW_2
	if(var_648_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_640_bool = 1; // 0x3e7 MovB
	return 4; // 0x3e8 Return
	
Label_1001:
	sync(); // 0x3e9 Func
	goto Label_990; // 0x3eb Jump
	
Label_1005:
	WaitForAnimEnd(); // 0x3ed Func
	func_1187(var_645_bool); // 0x3f0 NEW_2
}


func_2014(var_69_bool, var_70_float, var_71_float, var_72_float)
{
	var_69_bool = 0; // 0x7df MovB
	var_73_bool = var_70_float >= var_71_float; // 0x7e0 GE
	if(var_73_bool == 0) goto Label_2021; // 0x7e1 JumpB
	var_74_bool = var_70_float <= var_72_float; // 0x7e2 LE
	if(var_74_bool == 0) goto Label_2021; // 0x7e3 JumpB
	var_69_bool = 1; // 0x7e4 MovB
	
Label_2021:
	return 0; // 0x7e5 Return
}


func_1509(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x5e5 PushV
	GetPosition(var_48_cvector); // 0x5e6 Func
	GetPosition(var_49_cvector); // 0x5e8 ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x5ea Sub2
	return 4; // 0x5eb Return
}


func_2022(var_44_bool, var_45_int, var_46_int)
{
	var_47_int = 0; var_48_int = 0; // 0x7e6 PushV
	irand(var_48_int, var_46_int); // 0x7e7 Func
	var_44_bool = var_48_int < var_45_int; // 0x7e9 LT2
	return 2; // 0x7ea Return
}


func_2027(var_61_bool, var_62_object, var_63_float)
{
	var_64_bool = var_62_object == 0; // 0x7ec Not
	if(var_64_bool == 0) goto Label_2032; // 0x7ed JumpB
	var_61_bool = 0; // 0x7ee MovB
	return 0; // 0x7ef Return
	
Label_2032:
	var_65_int = 0; // 0x7f0 PushI
	var_66_bool = var_63_float > var_65_int; // 0x7f1 GT
	if(var_66_bool == 0) goto Label_2039; // 0x7f2 JumpB
	var_67_int = 8; // 0x7f3 PushI
	SendWorldWndMessage(var_67_int); // 0x7f4 Func
	goto Label_2048; // 0x7f6 Jump
	
Label_2048:
	var_68_float = 0; // 0x800 PushV
	var_68_float = var_63_float; // 0x801 Mov
	func_2072(var_68_float); // 0x802 NEW_2
	var_72_bool = 0; var_73_object = Obj(); var_74_string = ""; var_75_float = 0; var_76_float = 0; var_77_float = 0; // 0x804 PushV
	var_73_object = var_62_object; // 0x805 Mov
	var_74_string = "reputation"; // 0x806 MovS
	var_75_float = var_63_float; // 0x807 Mov
	var_76_float = 0; // 0x808 MovI
	var_77_float = 1; // 0x809 MovI
	func_1541(var_72_bool, var_73_object, var_74_string, var_75_float, var_76_float, var_77_float); // 0x80a NEW_2
	var_61_bool = 1; // 0x80c MovB
	return 0; // 0x80d Return
	
Label_2039:
	var_96_int = 0; // 0x7f7 PushI
	var_97_bool = var_63_float < var_96_int; // 0x7f8 LT
	if(var_97_bool == 0) goto Label_2046; // 0x7f9 JumpB
	var_98_int = 9; // 0x7fa PushI
	SendWorldWndMessage(var_98_int); // 0x7fb Func
	goto Label_2048; // 0x7fd Jump
	
Label_2046:
	var_61_bool = 0; // 0x7fe MovB
	return 0; // 0x7ff Return
}


func_1516(var_61_float)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x5ec PushV
	GetPosition(var_66_cvector); // 0x5ed Func
	GetPosition(var_67_cvector); // 0x5ef ObjFunc
	var_68_cvector = var_67_cvector - var_66_cvector; // 0x5f1 Sub2
	var_61_float = var_68_cvector | var_68_cvector; // 0x5f2 Or2
	return 6; // 0x5f3 Return
}


func_494(var_529_float)
{
	var_529_float = 0.15; // 0x1ef MovF
	return 0; // 0x1f0 Return
}


func_497(var_536_int)
{
	var_536_int = 0; // 0x1f2 MovI
	return 0; // 0x1f3 Return
}


func_1524(var_57_bool, var_58_object)
{
	var_59_bool = 0; var_60_bool = 0; // 0x5f4 PushV
	IsPlayerActor(var_58_object, var_60_bool); // 0x5f5 Func
	var_57_bool = var_60_bool; // 0x5f7 Mov
	return 2; // 0x5f8 Return
}


func_1012(var_0_object, var_424_bool, var_425_float)
{
	var_426_bool = 0; var_427_cvector = CVector(0,0,0); var_428_cvector = CVector(0,0,0); var_429_cvector = CVector(0,0,0); var_430_float = 0; var_431_bool = 0; var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_float = 0; // 0x3f4 PushV
	
Label_1013:
	IsAnimationPlaying(var_431_bool); // 0x3f5 Func
	var_436_bool = var_431_bool == 0; // 0x3f7 Not
	if(var_436_bool == 0) goto Label_1018; // 0x3f8 JumpB
	goto Label_1050; // 0x3f9 Jump
	
Label_1050:
	func_1187(var_435_float); // 0x41b NEW_2
	var_424_bool = 0; // 0x41d MovB
	return 10; // 0x41e Return
	
Label_1018:
	var_437_bool = 0; // 0x3fa PushV
	func_1083(var_437_bool); // 0x3fb NEW_2
	if(var_437_bool == 0) goto Label_1024; // 0x3fd JumpB
	var_424_bool = 1; // 0x3fe MovB
	return 10; // 0x3ff Return
	
Label_1024:
	var_480_bool = 0; var_481_object = Obj(); // 0x400 PushV
	var_481_object = var_0_object; // 0x401 MovT
	func_1708(var_480_bool, var_481_object); // 0x402 NEW_2
	var_482_bool = var_480_bool == 0; // 0x404 Not
	if(var_482_bool == 0) goto Label_1032; // 0x405 JumpB
	var_424_bool = 0; // 0x406 MovB
	return 10; // 0x407 Return
	
Label_1032:
	GetPFPosition(var_432_cvector); // 0x408 TObjFunc
	GetPFPosition(var_433_cvector); // 0x40a Func
	var_434_cvector = var_432_cvector - var_433_cvector; // 0x40c Sub2
	var_435_float = var_434_cvector | var_434_cvector; // 0x40d Or2
	var_483_float = var_425_float * var_425_float; // 0x40e Mult
	var_484_bool = var_435_float < var_483_float; // 0x40f LT
	if(var_484_bool == 0) goto Label_1047; // 0x410 JumpB
	var_485_bool = 0; var_486_float = 0; // 0x411 PushV
	var_486_float = var_425_float; // 0x412 Mov
	func_846(var_435_float, var_485_bool, var_486_float); // 0x413 NEW_2
	var_424_bool = 1; // 0x415 MovB
	return 10; // 0x416 Return
	
Label_1047:
	sync(); // 0x417 Func
	goto Label_1013; // 0x419 Jump
}


func_500(var_593_int)
{
	var_593_int = 1; // 0x1f4 MovI
	return 0; // 0x1f5 Return
}


func_502(var_594_object, var_595_float)
{
	var_596_bool = 0; // 0x1f7 PushV
	var_596_bool = 0; // 0x1f8 MovB
	var_597_int = 0; // 0x1f9 PushI
	var_598_bool = var_595_float > var_597_int; // 0x1fa GT
	if(var_598_bool == 0) goto Label_514; // 0x1fb JumpB
	var_599_bool = 0; var_600_object = Obj(); // 0x1fc PushV
	var_600_object = var_594_object; // 0x1fd Mov
	func_1636(var_599_bool, var_600_object); // 0x1fe NEW_2
	if(var_599_bool == 0) goto Label_514; // 0x200 JumpB
	var_596_bool = 1; // 0x201 MovB
	
Label_514:
	if(var_596_bool == 0) goto Label_521; // 0x202 JumpB
	var_616_bool = GlobalVars[0]; // 0x203 PushGE
	var_616_bool = 1; // 0x204 MovB
	GlobalVars[0] = var_616_bool; // 0x205 PopGE
	func_983(var_595_float); // 0x207 NEW_2
	
Label_521:
	return 0; // 0x209 Return
}


func_1529(var_80_bool, var_81_object, var_82_string)
{
	var_83_bool = 0; var_84_bool = 0; // 0x5f9 PushV
	var_85_string = "HasProperty"; // 0x5fa PushS
	var_86_int = 2; // 0x5fb PushI
	var_87_bool = IsFuncExist(var_81_object, var_85_string, var_86_int); // 0x5fc FuncExist
	var_88_bool = var_87_bool == 0; // 0x5fd Not
	if(var_88_bool == 0) goto Label_1537; // 0x5fe JumpB
	var_80_bool = 0; // 0x5ff MovB
	return 2; // 0x600 Return
	
Label_1537:
	HasProperty(var_82_string, var_84_bool); // 0x601 ObjFunc
	var_80_bool = var_84_bool; // 0x603 Mov
	return 2; // 0x604 Return
}


