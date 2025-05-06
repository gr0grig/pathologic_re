task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x36d PushI
	var_11_bool = var_9_int == var_10_int; // 0x36e Eq
	if(var_11_bool == 0) goto Label_885; // 0x36f JumpB
	var_12_object = Obj(); // 0x370 PushV
	var_12_object = var_1_int; // 0x371 MovT
	func_1866(var_12_object); // 0x372 NEW_2
	goto Label_889; // 0x374 Jump
	
Label_889:
	return 0; // 0x379 Return
	
Label_885:
	var_17_int = 0; // 0x375 PushV
	var_17_int = var_9_int; // 0x376 Mov
	func_1034(var_8_bool, var_9_int, var_17_int); // 0x377 NEW_2
}


task_1_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x388 PushV
	var_10_bool = 0; // 0x389 MovB
	var_11_bool = var_1_int == var_9_object; // 0x38a Eq
	if(var_11_bool == 0) goto Label_911; // 0x38b JumpB
	var_12_bool = var_2_int == 0; // 0x38c Not
	if(var_12_bool == 0) goto Label_911; // 0x38d JumpB
	var_10_bool = 1; // 0x38e MovB
	
Label_911:
	if(var_10_bool == 0) goto Label_917; // 0x38f JumpB
	var_2_int = 1; // 0x390 TMovB
	var_13_object = Obj(); // 0x391 PushV
	var_13_object = var_9_object; // 0x392 Mov
	func_1710(var_13_object); // 0x393 NEW_2
	
Label_917:
	return 0; // 0x395 Return
}


task_1_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x397 PushV
	var_10_bool = 0; // 0x398 MovB
	var_11_bool = var_1_int == var_9_object; // 0x399 Eq
	if(var_11_bool == 0) goto Label_926; // 0x39a JumpB
	var_12_int = var_2_int; // 0x39b PushT
	if(var_12_int == 0) goto Label_926; // 0x39c JumpB
	var_10_bool = 1; // 0x39d MovB
	
Label_926:
	if(var_10_bool == 0) goto Label_931; // 0x39e JumpB
	var_2_int = 0; // 0x39f TMovB
	var_13_string = "head"; // 0x3a0 PushS
	UnlookAsync(var_13_string); // 0x3a1 Func
	
Label_931:
	return 0; // 0x3a3 Return
}


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x41d Func
	return 0; // 0x41f Return
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_890(var_9_object); // 0x429 NEW_2
	var_14_object = Obj(); // 0x42b PushV
	var_14_object = var_9_object; // 0x42c Mov
	func_1925(); // 0x42d NEW_2
	return 0; // 0x42f Return
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0; // 0x51c Return
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0; // 0x51e Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0; // 0x520 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x767 PushV
	var_13_object = var_9_object; // 0x768 Mov
	var_14_int = var_10_int; // 0x769 Mov
	var_15_float = var_11_float; // 0x76a Mov
	func_1540(var_13_object, var_14_int, var_15_float); // 0x76b NEW_2
	return 0; // 0x76d Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x76f PushV
	var_15_object = var_9_object; // 0x770 Mov
	var_16_int = var_10_int; // 0x771 Mov
	var_17_float = var_11_float; // 0x772 Mov
	var_18_cvector = var_13_cvector; // 0x773 Mov
	var_19_cvector = var_14_cvector; // 0x774 Mov
	func_1608(var_17_float, var_18_cvector, var_19_cvector); // 0x775 NEW_2
	return 0; // 0x777 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x778 PushV
	var_13_string = "health"; // 0x779 PushS
	var_14_bool = var_10_string == var_13_string; // 0x77a Eq
	if(var_14_bool == 0) goto Label_1924; // 0x77b JumpB
	var_15_string = "health"; // 0x77c PushS
	GetProperty(var_15_string, var_12_float); // 0x77d Func
	var_16_int = 0; // 0x77f PushI
	var_17_bool = var_12_float <= var_16_int; // 0x780 LE
	if(var_17_bool == 0) goto Label_1924; // 0x781 JumpB
	SignalDeath(var_9_object); // 0x782 Func
	
Label_1924:
	return 2; // 0x784 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x786 PushV
	var_10_object = var_9_object; // 0x787 Mov
	func_1886(var_10_object); // 0x788 NEW_2
	return 0; // 0x78a Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_int = 0; // 0x0 PushV
	var_13_object = Obj(); // 0x1 PushV
	func_1334(var_13_object); // 0x2 NEW_2
	var_11_object = var_13_object; // 0x3 Mov
	var_17_object = GlobalVars[1]; // 0x5 PushGE
	var_18_object = Obj(); // 0x6 PushV
	func_1796(var_18_object); // 0x7 NEW_2
	var_17_object = var_18_object; // 0x8 Mov
	GlobalVars[1] = var_17_object; // 0xa PopGE
	var_21_object = GlobalVars[3]; // 0xb PushGE
	var_22_object = Obj(); // 0xc PushV
	func_1796(var_22_object); // 0xd NEW_2
	var_21_object = var_22_object; // 0xe Mov
	GlobalVars[3] = var_21_object; // 0x10 PopGE
	var_23_object = GlobalVars[5]; // 0x11 PushGE
	var_24_object = Obj(); // 0x12 PushV
	func_1796(var_24_object); // 0x13 NEW_2
	var_23_object = var_24_object; // 0x14 Mov
	GlobalVars[5] = var_23_object; // 0x16 PopGE
	var_25_object = GlobalVars[7]; // 0x17 PushGE
	var_26_object = Obj(); // 0x18 PushV
	func_1796(var_26_object); // 0x19 NEW_2
	var_25_object = var_26_object; // 0x1a Mov
	GlobalVars[7] = var_25_object; // 0x1c PopGE
	var_27_object = GlobalVars[9]; // 0x1d PushGE
	var_28_object = Obj(); // 0x1e PushV
	func_1796(var_28_object); // 0x1f NEW_2
	var_27_object = var_28_object; // 0x20 Mov
	GlobalVars[9] = var_27_object; // 0x22 PopGE
	var_29_object = GlobalVars[0]; // 0x23 PushGE
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); // 0x24 PushV
	var_31_object = var_11_object; // 0x25 Mov
	var_32_int = 0; // 0x26 MovI
	var_34_object = GlobalVars[1]; // 0x27 PushGE
	var_33_object = var_34_object; // 0x28 Mov
	func_1633(var_32_int, var_33_object); // 0x2a NEW_2
	var_29_object = var_30_object; // 0x2b Mov
	GlobalVars[0] = var_29_object; // 0x2d PopGE
	var_50_object = GlobalVars[2]; // 0x2e PushGE
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); // 0x2f PushV
	var_52_object = var_11_object; // 0x30 Mov
	var_53_int = 1; // 0x31 MovI
	var_55_object = GlobalVars[3]; // 0x32 PushGE
	var_54_object = var_55_object; // 0x33 Mov
	func_1633(var_53_int, var_54_object); // 0x35 NEW_2
	var_50_object = var_51_object; // 0x36 Mov
	GlobalVars[2] = var_50_object; // 0x38 PopGE
	var_56_object = GlobalVars[4]; // 0x39 PushGE
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj(); // 0x3a PushV
	var_58_object = var_11_object; // 0x3b Mov
	var_59_int = 2; // 0x3c MovI
	var_61_object = GlobalVars[5]; // 0x3d PushGE
	var_60_object = var_61_object; // 0x3e Mov
	func_1633(var_59_int, var_60_object); // 0x40 NEW_2
	var_56_object = var_57_object; // 0x41 Mov
	GlobalVars[4] = var_56_object; // 0x43 PopGE
	var_62_object = GlobalVars[6]; // 0x44 PushGE
	var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; var_66_object = Obj(); // 0x45 PushV
	var_64_object = var_11_object; // 0x46 Mov
	var_65_int = 3; // 0x47 MovI
	var_67_object = GlobalVars[7]; // 0x48 PushGE
	var_66_object = var_67_object; // 0x49 Mov
	func_1633(var_65_int, var_66_object); // 0x4b NEW_2
	var_62_object = var_63_object; // 0x4c Mov
	GlobalVars[6] = var_62_object; // 0x4e PopGE
	var_68_object = GlobalVars[8]; // 0x4f PushGE
	var_69_object = Obj(); var_70_object = Obj(); var_71_int = 0; var_72_object = Obj(); // 0x50 PushV
	var_70_object = var_11_object; // 0x51 Mov
	var_71_int = 4; // 0x52 MovI
	var_73_object = GlobalVars[9]; // 0x53 PushGE
	var_72_object = var_73_object; // 0x54 Mov
	func_1633(var_71_int, var_72_object); // 0x56 NEW_2
	var_68_object = var_69_object; // 0x57 Mov
	GlobalVars[8] = var_68_object; // 0x59 PopGE
	var_74_object = GlobalVars[10]; // 0x5a PushGE
	var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0; // 0x5b PushV
	var_76_object = var_11_object; // 0x5c Mov
	var_77_int = 0; // 0x5d MovI
	func_1658(var_76_object, var_77_int); // 0x5e NEW_2
	var_74_object = var_75_object; // 0x5f Mov
	GlobalVars[10] = var_74_object; // 0x61 PopGE
	var_89_object = GlobalVars[11]; // 0x62 PushGE
	var_90_object = Obj(); var_91_object = Obj(); var_92_int = 0; // 0x63 PushV
	var_91_object = var_11_object; // 0x64 Mov
	var_92_int = 1; // 0x65 MovI
	func_1658(var_91_object, var_92_int); // 0x66 NEW_2
	var_89_object = var_90_object; // 0x67 Mov
	GlobalVars[11] = var_89_object; // 0x69 PopGE
	var_93_object = GlobalVars[12]; // 0x6a PushGE
	var_94_object = Obj(); var_95_object = Obj(); var_96_int = 0; // 0x6b PushV
	var_95_object = var_11_object; // 0x6c Mov
	var_96_int = 2; // 0x6d MovI
	func_1658(var_95_object, var_96_int); // 0x6e NEW_2
	var_93_object = var_94_object; // 0x6f Mov
	GlobalVars[12] = var_93_object; // 0x71 PopGE
	var_97_object = GlobalVars[13]; // 0x72 PushGE
	var_98_object = Obj(); var_99_object = Obj(); var_100_int = 0; // 0x73 PushV
	var_99_object = var_11_object; // 0x74 Mov
	var_100_int = 3; // 0x75 MovI
	func_1658(var_99_object, var_100_int); // 0x76 NEW_2
	var_97_object = var_98_object; // 0x77 Mov
	GlobalVars[13] = var_97_object; // 0x79 PopGE
	var_101_object = GlobalVars[14]; // 0x7a PushGE
	var_102_object = Obj(); var_103_object = Obj(); var_104_int = 0; // 0x7b PushV
	var_103_object = var_11_object; // 0x7c Mov
	var_104_int = 4; // 0x7d MovI
	func_1658(var_103_object, var_104_int); // 0x7e NEW_2
	var_101_object = var_102_object; // 0x7f Mov
	GlobalVars[14] = var_101_object; // 0x81 PopGE
	var_12_int = 0; // 0x82 MovI
	
Label_131:
	var_105_int = 5; // 0x83 PushI
	var_106_bool = var_12_int < var_105_int; // 0x84 LT
	if(var_106_bool == 0) goto Label_139; // 0x85 JumpB
	RemoveAllItems(var_12_int); // 0x86 ObjFunc
	var_107_int = 1; // 0x88 PushI
	var_12_int = var_12_int + var_107_int; // 0x89 Add2
	goto Label_131; // 0x8a Jump
	
Label_139:
	SelectWeapon(); // 0x8b ObjFunc
	var_108_bool = 1; // 0x8d PushB
	SensePlayerOnly(var_108_bool); // 0x8e Func
	var_109_float = 1.5; // 0x90 PushF
	Sleep(var_109_float); // 0x91 Func
	
Label_147:
	var_110_object = Obj(); var_111_bool = 0; var_112_float = 0; // 0x93 PushV
	var_110_object = var_11_object; // 0x94 Mov
	var_111_bool = 1; // 0x95 MovB
	var_112_float = 180.0; // 0x96 MovF
	func_165(var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_110_object, var_111_bool, var_112_float); // 0x97 NEW_2
	var_601_int = 1; // 0x99 PushI
	Sleep(var_601_int); // 0x9a Func
	goto Label_147; // 0x9c Jump
}


func_1281(var_38_string)
{
	RemoveRTEnvelope(); // 0x502 Func
	SetDeathState(); // 0x504 Func
	Stop(); // 0x506 Func
	StopAsync(); // 0x508 Func
	StopSecondaryAnimation(); // 0x50a Func
	var_39_string = ""; // 0x50c PushV
	var_39_string = var_38_string; // 0x50d Mov
	func_1721(var_39_string); // 0x50e NEW_2
	var_68_string = "all"; // 0x510 PushS
	PlayAnimation(var_68_string, var_38_string); // 0x511 Func
	WaitForAnimEnd(); // 0x513 Func
	var_69_string = "all"; // 0x515 PushS
	LockAnimationEnd(var_69_string, var_38_string); // 0x516 Func
	RemoveEnvelope(); // 0x518 Func
	return 0; // 0x51a Return
}


func_1540(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x604 PushV
	var_34_bool = 0; // 0x605 PushV
	var_34_bool = 0; // 0x606 MovB
	var_35_bool = 0; // 0x607 PushV
	var_35_bool = 0; // 0x608 MovB
	var_36_object = var_13_object; // 0x609 Push
	if(var_36_object == 0) goto Label_1551; // 0x60a JumpB
	var_37_int = 4; // 0x60b PushI
	var_38_bool = var_14_int != var_37_int; // 0x60c Neq
	if(var_38_bool == 0) goto Label_1551; // 0x60d JumpB
	var_35_bool = 1; // 0x60e MovB
	
Label_1551:
	if(var_35_bool == 0) goto Label_1556; // 0x60f JumpB
	var_39_int = 5; // 0x610 PushI
	var_40_bool = var_14_int != var_39_int; // 0x611 Neq
	if(var_40_bool == 0) goto Label_1556; // 0x612 JumpB
	var_34_bool = 1; // 0x613 MovB
	
Label_1556:
	if(var_34_bool == 0) goto Label_1603; // 0x614 JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x615 PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x616 PushV
	var_44_object = var_13_object; // 0x617 Mov
	func_1327(var_44_object); // 0x618 NEW_2
	var_42_cvector = var_43_cvector; // 0x619 Mov
	func_1768(var_41_cvector, var_42_cvector); // 0x61b NEW_2
	var_25_cvector = var_41_cvector; // 0x61c Mov
	CreateVectorVector(var_26_object); // 0x61e Func
	var_27_int = 1; // 0x620 MovI
	
Label_1569:
	var_54_string = "hit"; // 0x621 PushS
	var_55_int = var_54_string + var_27_int; // 0x622 Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x623 Func
	var_56_bool = var_28_bool == 0; // 0x625 Not
	if(var_56_bool == 0) goto Label_1576; // 0x626 JumpB
	goto Label_1585; // 0x627 Jump
	
Label_1585:
	size(var_31_int); // 0x631 ObjFunc
	var_57_int = var_31_int; // 0x633 Push
	if(var_57_int == 0) goto Label_1602; // 0x634 JumpB
	irand(var_32_int, var_31_int); // 0x635 Func
	get(var_33_cvector, var_32_int); // 0x637 ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x639 PushV
	var_58_object = var_13_object; // 0x63a Mov
	var_59_int = var_14_int; // 0x63b Mov
	var_60_float = var_15_float; // 0x63c Mov
	var_61_cvector = var_33_cvector; // 0x63d Mov
	var_62_cvector = -var_25_cvector; // 0x63e Neg2
	func_1608(var_60_float, var_61_cvector, var_62_cvector); // 0x63f NEW_2
	return 18; // 0x641 Return
	
Label_1602:
	var_26_object = 0; // 0x642 SetNull
	
Label_1603:
	var_103_object = Obj(); // 0x643 PushV
	var_103_object = var_13_object; // 0x644 Mov
	func_1496(var_103_object); // 0x645 NEW_2
	return 18; // 0x647 Return
	
Label_1576:
	var_104_int = var_30_cvector | var_25_cvector; // 0x628 Or
	var_105_float = 0.70711; // 0x629 PushF
	var_106_bool = var_104_int >= var_105_float; // 0x62a GE
	if(var_106_bool == 0) goto Label_1582; // 0x62b JumpB
	add(var_29_cvector); // 0x62c ObjFunc
	
Label_1582:
	var_107_int = 1; // 0x62e PushI
	var_27_int = var_27_int + var_107_int; // 0x62f Add2
	goto Label_1569; // 0x630 Jump
}


func_1796(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x704 PushV
	CreateIntVector(var_20_object); // 0x705 Func
	var_18_object = var_20_object; // 0x707 Mov
	return 2; // 0x708 Return
}


func_775(var_2_int, var_5_int)
{
	var_450_float = 0; var_451_int = 0; var_452_float = 0; var_453_int = 0; // 0x307 PushV
	var_454_bool = var_2_int == 0; // 0x308 Not
	if(var_454_bool == 0) goto Label_779; // 0x309 JumpB
	return 4; // 0x30a Return
	
Label_779:
	var_455_int = var_5_int; // 0x30b PushT
	if(var_455_int == 0) goto Label_787; // 0x30c JumpB
	var_456_int = -1; // 0x30d PushI
	var_5_int = var_5_int + var_456_int; // 0x30e Add2
	var_457_int = 0; // 0x30f PushI
	var_458_bool = var_5_int > var_457_int; // 0x310 GT
	if(var_458_bool == 0) goto Label_787; // 0x311 JumpB
	return 4; // 0x312 Return
	
Label_787:
	rand(var_452_float); // 0x313 Func
	var_459_float = 0; // 0x315 PushV
	func_825(var_459_float); // 0x316 NEW_2
	var_460_bool = var_452_float < var_459_float; // 0x318 LT
	if(var_460_bool == 0) goto Label_806; // 0x319 JumpB
	irand(var_453_int, var_452_float); // 0x31a Func
	var_461_int = 1; // 0x31c PushI
	var_453_int = var_453_int + var_461_int; // 0x31d Add2
	var_462_string = "attack"; // 0x31e PushS
	var_463_int = var_462_string + var_453_int; // 0x31f Add
	Speak(var_463_int); // 0x320 Func
	var_464_int = 0; // 0x322 PushV
	func_823(var_464_int); // 0x323 NEW_2
	var_5_int = var_464_int; // 0x324 TMov
	
Label_806:
	return 4; // 0x326 Return
}


func_394(var_1_int, var_2_int, var_4_float)
{
	var_135_bool = 0; var_136_bool = 0; var_137_cvector = CVector(0,0,0); var_138_bool = 0; var_139_bool = 0; var_140_cvector = CVector(0,0,0); // 0x18a PushV
	var_1_int = 0; // 0x18b TMovI
	
Label_396:
	var_141_string = "all"; // 0x18c PushS
	var_142_string = "attack_begin"; // 0x18d PushS
	var_143_int = 1; // 0x18e PushI
	var_144_int = var_1_int + var_143_int; // 0x18f Add
	var_145_int = var_142_string + var_144_int; // 0x190 Add
	HasAnimation(var_138_bool, var_141_string, var_145_int); // 0x191 Func
	var_146_bool = var_138_bool == 0; // 0x193 Not
	if(var_146_bool == 0) goto Label_406; // 0x194 JumpB
	goto Label_409; // 0x195 Jump
	
Label_409:
	var_2_int = 0; // 0x199 TMovI
	
Label_410:
	var_147_string = "attack"; // 0x19a PushS
	var_148_int = 1; // 0x19b PushI
	var_149_int = var_2_int + var_148_int; // 0x19c Add
	var_150_int = var_147_string + var_149_int; // 0x19d Add
	IsExisting3DSound(var_139_bool, var_150_int); // 0x19e Func
	var_151_bool = var_139_bool == 0; // 0x1a0 Not
	if(var_151_bool == 0) goto Label_419; // 0x1a1 JumpB
	goto Label_422; // 0x1a2 Jump
	
Label_422:
	var_152_string = "all"; // 0x1a6 PushS
	var_153_string = "bjump"; // 0x1a7 PushS
	GetAnimationOffset(var_140_cvector, var_152_string, var_153_string); // 0x1a8 Func
	var_154_float = GetByIndex(var_140_cvector, 2); // 0x1aa PushE
	var_4_float = -var_154_float; // 0x1ab Neg2
	return 6; // 0x1ac Return
	
Label_419:
	var_155_int = 1; // 0x1a3 PushI
	var_2_int = var_2_int + var_155_int; // 0x1a4 Add2
	goto Label_410; // 0x1a5 Jump
	
Label_406:
	var_156_int = 1; // 0x196 PushI
	var_1_int = var_1_int + var_156_int; // 0x197 Add2
	goto Label_396; // 0x198 Jump
}


func_1034(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x40b PushI
	var_19_bool = var_17_int != var_18_int; // 0x40c Neq
	if(var_19_bool == 0) goto Label_1039; // 0x40d JumpB
	return 0; // 0x40e Return
	
Label_1039:
	var_20_bool = 0; var_21_object = Obj(); // 0x40f PushV
	var_21_object = var_1_int; // 0x410 MovT
	func_1072(var_20_bool, var_21_object); // 0x411 NEW_2
	var_56_bool = var_20_bool == 0; // 0x413 Not
	if(var_56_bool == 0) goto Label_1046; // 0x414 JumpB
	var_0_object = 1; // 0x415 TMovB
	
Label_1046:
	var_57_int = 0; // 0x416 PushI
	KillTimer(var_57_int); // 0x417 Func
	Stop(); // 0x419 Func
	return 0; // 0x41b Return
}


func_1802(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x70a PushV
	CreateObjectVector(var_47_object); // 0x70b Func
	var_45_object = var_47_object; // 0x70d Mov
	return 2; // 0x70e Return
}


func_1678(var_107_int)
{
	var_114_int = 0; var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_int = 0; // 0x68e PushV
	RemoveAllItems(var_107_int); // 0x68f ObjFunc
	size(var_121_int); // 0x691 ObjFunc
	var_122_int = 0; // 0x693 MovI
	
Label_1684:
	var_128_bool = var_122_int < var_121_int; // 0x694 LT
	if(var_128_bool == 0) goto Label_1696; // 0x695 JumpB
	get(var_123_object, var_122_int); // 0x696 ObjFunc
	get(var_124_int, var_122_int); // 0x698 ObjFunc
	AddItem(var_125_bool, var_123_object, var_107_int, var_124_int); // 0x69a ObjFunc
	var_123_object = 0; // 0x69c SetNull
	var_129_int = 1; // 0x69d PushI
	var_122_int = var_122_int + var_129_int; // 0x69e Add2
	goto Label_1684; // 0x69f Jump
	
Label_1696:
	size(var_121_int); // 0x6a0 ObjFunc
	var_126_int = 0; // 0x6a2 MovI
	
Label_1699:
	var_130_bool = var_126_int < var_121_int; // 0x6a3 LT
	if(var_130_bool == 0) goto Label_1709; // 0x6a4 JumpB
	get(var_127_int, var_126_int); // 0x6a5 ObjFunc
	var_131_bool = 1; // 0x6a7 PushB
	SelectItem(var_127_int, var_131_bool, var_107_int); // 0x6a8 ObjFunc
	var_132_int = 1; // 0x6aa PushI
	var_126_int = var_126_int + var_132_int; // 0x6ab Add2
	goto Label_1699; // 0x6ac Jump
	
Label_1709:
	return 14; // 0x6ad Return
}


func_1808(var_538_float)
{
	var_539_object = Obj(); var_540_object = Obj(); // 0x710 PushV
	CreateFloatVector(var_540_object); // 0x711 Func
	add(var_538_float); // 0x713 ObjFunc
	var_541_int = 15; // 0x715 PushI
	SendWorldWndMessage(var_541_int, var_540_object); // 0x716 Func
	return 2; // 0x718 Return
}


func_1431(var_186_bool)
{
	var_188_bool = 0; var_189_bool = 0; // 0x597 PushV
	IsDead(var_189_bool); // 0x598 ObjFunc
	var_186_bool = var_189_bool; // 0x59a Mov
	return 2; // 0x59b Return
}


func_1818(var_185_bool, var_186_string, var_187_string)
{
	var_188_object = Obj(); var_189_object = Obj(); // 0x71a PushV
	FindActor(var_189_object, var_186_string); // 0x71b Func
	var_190_bool = var_189_object == 0; // 0x71d NullEq
	if(var_190_bool == 0) goto Label_1825; // 0x71e JumpB
	var_185_bool = 0; // 0x71f MovB
	return 2; // 0x720 Return
	
Label_1825:
	Trigger(var_189_object, var_187_string); // 0x721 Func
	var_185_bool = 1; // 0x723 MovB
	return 2; // 0x724 Return
}


func_1436(var_175_bool, var_176_object)
{
	var_177_object = Obj(); var_178_object = Obj(); var_179_object = Obj(); var_180_object = Obj(); // 0x59c PushV
	var_181_bool = var_176_object == 0; // 0x59d NullEq
	if(var_181_bool == 0) goto Label_1441; // 0x59e JumpB
	var_175_bool = 0; // 0x59f MovB
	return 4; // 0x5a0 Return
	
Label_1441:
	var_182_bool = 0; // 0x5a1 PushV
	var_182_bool = 0; // 0x5a2 MovB
	var_183_string = "IsDead"; // 0x5a3 PushS
	var_184_int = 1; // 0x5a4 PushI
	var_185_bool = IsFuncExist(var_176_object, var_183_string, var_184_int); // 0x5a5 FuncExist
	if(var_185_bool == 0) goto Label_1453; // 0x5a6 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x5a7 PushV
	var_187_object = var_176_object; // 0x5a8 Mov
	func_1431(var_187_object); // 0x5a9 NEW_2
	if(var_186_bool == 0) goto Label_1453; // 0x5ab JumpB
	var_182_bool = 1; // 0x5ac MovB
	
Label_1453:
	if(var_182_bool == 0) goto Label_1456; // 0x5ad JumpB
	var_175_bool = 0; // 0x5ae MovB
	return 4; // 0x5af Return
	
Label_1456:
	GetScene(var_179_object); // 0x5b0 Func
	var_190_bool = var_179_object == 0; // 0x5b2 NullEq
	if(var_190_bool == 0) goto Label_1462; // 0x5b3 JumpB
	var_175_bool = 0; // 0x5b4 MovB
	return 4; // 0x5b5 Return
	
Label_1462:
	GetScene(var_180_object); // 0x5b6 ObjFunc
	var_191_bool = var_179_object != var_180_object; // 0x5b8 Neq
	if(var_191_bool == 0) goto Label_1468; // 0x5b9 JumpB
	var_175_bool = 0; // 0x5ba MovB
	return 4; // 0x5bb Return
	
Label_1468:
	var_175_bool = 1; // 0x5bc MovB
	return 4; // 0x5bd Return
}


func_159(var_479_float)
{
	var_479_float = 0.25; // 0xa0 MovF
	return 0; // 0xa1 Return
}


func_1056(var_0_object)
{
	var_0_object = 1; // 0x420 TMovB
	var_13_int = 0; // 0x421 PushI
	KillTimer(var_13_int); // 0x422 Func
	Stop(); // 0x424 Func
	return 0; // 0x426 Return
}


func_1313(var_510_string, var_511_int)
{
	var_512_int = 2; // 0x522 PushI
	var_513_bool = var_511_int == var_512_int; // 0x523 Eq
	if(var_513_bool == 0) goto Label_1320; // 0x524 JumpB
	var_510_string = "fire"; // 0x525 MovS
	return 0; // 0x526 Return
	
Label_1320:
	var_514_int = 1; // 0x528 PushI
	var_515_bool = var_511_int == var_514_int; // 0x529 Eq
	if(var_515_bool == 0) goto Label_1325; // 0x52a JumpB
	var_510_string = "bullet"; // 0x52b MovS
	return 0; // 0x52c Return
	
Label_1325:
	var_510_string = "phys"; // 0x52d MovS
	return 0; // 0x52e Return
}


func_162(var_486_int)
{
	var_486_int = 0; // 0xa3 MovI
	return 0; // 0xa4 Return
}


func_675(var_0_object, var_385_bool)
{
	var_386_cvector = CVector(0,0,0); var_387_cvector = CVector(0,0,0); var_388_cvector = CVector(0,0,0); var_389_float = 0; var_390_float = 0; var_391_cvector = CVector(0,0,0); var_392_cvector = CVector(0,0,0); var_393_cvector = CVector(0,0,0); var_394_float = 0; var_395_float = 0; // 0x2a3 PushV
	var_396_bool = 0; var_397_object = Obj(); // 0x2a4 PushV
	var_397_object = var_0_object; // 0x2a5 MovT
	func_1472(var_396_bool, var_397_object); // 0x2a6 NEW_2
	var_398_bool = var_396_bool == 0; // 0x2a8 Not
	if(var_398_bool == 0) goto Label_684; // 0x2a9 JumpB
	var_385_bool = 0; // 0x2aa MovB
	return 10; // 0x2ab Return
	
Label_684:
	var_399_bool = 0; // 0x2ac PushV
	func_764(var_395_float, var_399_bool); // 0x2ad NEW_2
	if(var_399_bool == 0) goto Label_701; // 0x2af JumpB
	GetPFPosition(var_391_cvector); // 0x2b0 TObjFunc
	GetPFPosition(var_392_cvector); // 0x2b2 Func
	var_393_cvector = var_391_cvector - var_392_cvector; // 0x2b4 Sub2
	var_394_float = var_393_cvector | var_393_cvector; // 0x2b5 Or2
	GetAttackDistance(var_395_float); // 0x2b6 TObjFunc
	var_400_int = 50; // 0x2b8 PushI
	var_395_float = var_395_float + var_400_int; // 0x2b9 Add2
	var_401_float = var_395_float * var_395_float; // 0x2ba Mult
	var_385_bool = var_394_float <= var_401_float; // 0x2bb LE2
	return 10; // 0x2bc Return
	
Label_701:
	var_385_bool = 0; // 0x2bd MovB
	return 10; // 0x2be Return
}


func_932(var_0_object, var_1_int, var_242_bool, var_243_object, var_244_float, var_245_float, var_246_bool, var_247_bool)
{
	var_248_bool = 0; var_249_bool = 0; var_250_object = Obj(); var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0); var_253_cvector = CVector(0,0,0); var_254_float = 0; var_255_object = Obj(); var_256_bool = 0; var_257_bool = 0; var_258_object = Obj(); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_float = 0; var_263_object = Obj(); // 0x3a4 PushV
	var_0_object = 0; // 0x3a5 TMovB
	var_1_int = var_243_object; // 0x3a6 TMov
	var_257_bool = var_247_bool; // 0x3a7 Mov
	
Label_936:
	var_264_bool = 0; var_265_object = Obj(); // 0x3a8 PushV
	var_265_object = var_243_object; // 0x3a9 Mov
	func_1072(var_264_bool, var_265_object); // 0x3aa NEW_2
	var_268_bool = var_264_bool == 0; // 0x3ac Not
	if(var_268_bool == 0) goto Label_944; // 0x3ad JumpB
	var_242_bool = 0; // 0x3ae MovB
	return 16; // 0x3af Return
	
Label_944:
	GetPosition(var_259_cvector); // 0x3b0 ObjFunc
	GetPosition(var_260_cvector); // 0x3b2 Func
	var_261_cvector = var_259_cvector - var_260_cvector; // 0x3b4 Sub2
	var_262_float = var_261_cvector | var_261_cvector; // 0x3b5 Or2
	var_269_bool = 0; // 0x3b6 PushV
	var_269_bool = 0; // 0x3b7 MovB
	var_270_int = 0; // 0x3b8 PushI
	var_271_bool = var_245_float > var_270_int; // 0x3b9 GT
	if(var_271_bool == 0) goto Label_959; // 0x3ba JumpB
	var_272_float = var_245_float * var_245_float; // 0x3bb Mult
	var_273_bool = var_262_float > var_272_float; // 0x3bc GT
	if(var_273_bool == 0) goto Label_959; // 0x3bd JumpB
	var_269_bool = 1; // 0x3be MovB
	
Label_959:
	if(var_269_bool == 0) goto Label_964; // 0x3bf JumpB
	Stop(); // 0x3c0 Func
	var_242_bool = 0; // 0x3c2 MovB
	return 16; // 0x3c3 Return
	
Label_964:
	var_274_float = var_244_float * var_244_float; // 0x3c4 Mult
	var_275_bool = var_262_float > var_274_float; // 0x3c5 GT
	if(var_275_bool == 0) goto Label_1026; // 0x3c6 JumpB
	GetPFPosition(var_259_cvector); // 0x3c7 ObjFunc
	FindPathTo(var_263_object, var_259_cvector); // 0x3c9 Func
	var_276_bool = var_263_object != 0; // 0x3cb NullNeq
	if(var_276_bool == 0) goto Label_975; // 0x3cc JumpB
	var_258_object = var_263_object; // 0x3cd Mov
	var_263_object = 0; // 0x3ce SetNull
	
Label_975:
	var_277_bool = var_258_object != 0; // 0x3cf NullNeq
	if(var_277_bool == 0) goto Label_1008; // 0x3d0 JumpB
	var_278_bool = var_257_bool; // 0x3d1 Push
	if(var_278_bool == 0) goto Label_985; // 0x3d2 JumpB
	var_257_bool = 0; // 0x3d3 MovB
	RotatePath(var_258_object, var_256_bool); // 0x3d4 Func
	var_279_bool = var_256_bool == 0; // 0x3d6 Not
	if(var_279_bool == 0) goto Label_985; // 0x3d7 JumpB
	goto Label_1032; // 0x3d8 Jump
	
Label_1032:
	var_242_bool = !var_0_object; // 0x408 Not2
	return 16; // 0x409 Return
	
Label_985:
	var_280_int = 0; // 0x3d9 PushI
	var_281_float = 0.3; // 0x3da PushF
	SetTimer(var_280_int, var_281_float); // 0x3db Func
	var_282_string = ""; // 0x3dd PushV
	func_1079(var_282_string); // 0x3de NEW_2
	var_283_string = ""; // 0x3e0 PushV
	func_1081(var_283_string); // 0x3e1 NEW_2
	FollowPath(var_258_object, var_246_bool, var_256_bool, var_282_string, var_283_string); // 0x3e3 Func
	var_284_bool = var_256_bool == 0; // 0x3e5 Not
	if(var_284_bool == 0) goto Label_1006; // 0x3e6 JumpB
	var_285_object = var_0_object; // 0x3e7 PushT
	if(var_285_object == 0) goto Label_1004; // 0x3e8 JumpB
	var_258_object = 0; // 0x3e9 SetNull
	goto Label_1032; // 0x3ea Jump
	
Label_1004:
	goto Label_1031; // 0x3ec Jump
	
Label_1031:
	goto Label_936; // 0x407 Jump
	
Label_1006:
	var_258_object = 0; // 0x3ee SetNull
	goto Label_1024; // 0x3ef Jump
	
Label_1024:
	var_263_object = 0; // 0x400 SetNull
	goto Label_1030; // 0x401 Jump
	
Label_1030:
	var_258_object = 0; // 0x406 SetNull
	
Label_1008:
	var_286_int = 0; // 0x3f0 PushI
	KillTimer(var_286_int); // 0x3f1 Func
	var_287_float = 0.5; // 0x3f3 PushF
	Sleep(var_287_float, var_256_bool); // 0x3f4 Func
	var_288_bool = var_256_bool == 0; // 0x3f6 Not
	if(var_288_bool == 0) goto Label_1020; // 0x3f7 JumpB
	var_289_object = var_0_object; // 0x3f8 PushT
	if(var_289_object == 0) goto Label_1020; // 0x3f9 JumpB
	var_258_object = 0; // 0x3fa SetNull
	goto Label_1032; // 0x3fb Jump
	
Label_1020:
	var_290_int = 0; // 0x3fc PushI
	var_291_float = 0.3; // 0x3fd PushF
	SetTimer(var_290_int, var_291_float); // 0x3fe Func
	
Label_1026:
	var_292_int = 0; // 0x402 PushI
	KillTimer(var_292_int); // 0x403 Func
	goto Label_1032; // 0x405 Jump
}


func_165(var_0_object, var_3_bool, var_5_int, var_110_object, var_111_bool, var_112_float, var_219_bool, var_311_bool)
{
	var_113_float = 0; var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_bool = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_bool = 0; var_128_bool = 0; var_129_float = 0; var_130_cvector = CVector(0,0,0); var_131_float = 0; var_132_cvector = CVector(0,0,0); var_133_bool = 0; var_134_float = 0; // 0xa5 PushV
	func_394(var_132_cvector, var_133_bool, var_134_float); // 0xa7 NEW_2
	var_5_int = 0; // 0xa9 TMovI
	var_157_string = "@GetAttackDistance"; // 0xaa PushS
	var_158_int = 1; // 0xab PushI
	var_159_bool = IsFuncExist(var_110_object, var_157_string, var_158_int); // 0xac FuncExist
	if(var_159_bool == 0) goto Label_179; // 0xad JumpB
	GetAttackDistance(var_124_float); // 0xae ObjFunc
	var_160_int = 50; // 0xb0 PushI
	var_124_float = var_124_float + var_160_int; // 0xb1 Add2
	goto Label_180; // 0xb2 Jump
	
Label_180:
	var_161_int = 150; // 0xb4 PushI
	var_162_bool = var_124_float >= var_161_int; // 0xb5 GE
	if(var_162_bool == 0) goto Label_184; // 0xb6 JumpB
	var_124_float = 150; // 0xb7 MovI
	
Label_184:
	var_3_bool = 0; // 0xb8 TMovB
	var_0_object = var_110_object; // 0xb9 TMov
	IsPlayerActor(var_0_object, var_127_bool); // 0xba Func
	var_163_bool = var_127_bool; // 0xbc Push
	if(var_163_bool == 0) goto Label_198; // 0xbd JumpB
	var_164_string = "attack"; // 0xbe PushS
	PlayGlobalMusic(var_164_string); // 0xbf Func
	var_165_object = Obj(); // 0xc1 PushV
	func_1762(var_165_object); // 0xc2 NEW_2
	SendPlayerEnemy(var_110_object, var_165_object); // 0xc4 Func
	
Label_198:
	var_168_bool = var_111_bool; // 0xc6 Push
	if(var_168_bool == 0) goto Label_202; // 0xc7 JumpB
	var_128_bool = 0; // 0xc8 MovB
	goto Label_203; // 0xc9 Jump
	
Label_203:
	var_169_float = 400.0; // 0xcb PushF
	var_129_float = var_169_float + var_124_float; // 0xcc Add2
	
Label_205:
	var_170_bool = 0; // 0xcd PushV
	var_170_bool = 0; // 0xce MovB
	var_171_bool = 0; var_172_object = Obj(); // 0xcf PushV
	var_172_object = var_0_object; // 0xd0 MovT
	func_1472(var_171_bool, var_172_object); // 0xd1 NEW_2
	if(var_171_bool == 0) goto Label_215; // 0xd3 JumpB
	var_205_bool = var_3_bool == 0; // 0xd4 Not
	if(var_205_bool == 0) goto Label_215; // 0xd5 JumpB
	var_170_bool = 1; // 0xd6 MovB
	
Label_215:
	if(var_170_bool == 0) goto Label_377; // 0xd7 JumpB
	func_807(var_134_float); // 0xd9 NEW_2
	GetPFPosition(var_125_cvector); // 0xdb TObjFunc
	GetPFPosition(var_126_cvector); // 0xdd Func
	var_130_cvector = var_125_cvector - var_126_cvector; // 0xdf Sub2
	var_131_float = var_130_cvector | var_130_cvector; // 0xe0 Or2
	var_211_float = var_129_float * var_129_float; // 0xe1 Mult
	var_212_bool = var_131_float >= var_211_float; // 0xe2 GE
	if(var_212_bool == 0) goto Label_243; // 0xe3 JumpB
	var_213_bool = 0; var_214_object = Obj(); var_215_float = 0; var_216_float = 0; var_217_bool = 0; var_218_bool = 0; // 0xe4 PushV
	var_214_object = var_0_object; // 0xe5 MovT
	var_215_float = var_124_float; // 0xe6 Mov
	var_216_float = 10000.0; // 0xe7 MovF
	var_217_bool = 1; // 0xe8 MovB
	var_218_bool = 0; // 0xe9 MovB
	TaskCall(1); // 0xea TaskCall
	func_827(var_221_bool, var_213_bool, var_214_object, var_215_float, var_216_float, var_217_bool, var_218_bool); // 0xeb NEW_2
	TaskReturn(); // 0xec TaskReturn
	var_296_bool = var_219_bool == 0; // 0xee Not
	if(var_296_bool == 0) goto Label_241; // 0xef JumpB
	goto Label_377; // 0xf0 Jump
	
Label_377:
	WaitForAnimEnd(); // 0x179 Func
	var_297_bool = var_3_bool; // 0x17b PushT
	if(var_297_bool == 0) goto Label_382; // 0x17c JumpB
	return 22; // 0x17d Return
	
Label_382:
	var_298_string = "all"; // 0x17e PushS
	var_299_string = "attack_off"; // 0x17f PushS
	PlayAnimation(var_298_string, var_299_string); // 0x180 Func
	WaitForAnimEnd(); // 0x182 Func
	var_300_bool = var_127_bool; // 0x184 Push
	if(var_300_bool == 0) goto Label_393; // 0x185 JumpB
	var_301_float = 2.0; // 0x186 PushF
	Sleep(var_301_float); // 0x187 Func
	
Label_393:
	return 22; // 0x189 Return
	
Label_241:
	var_128_bool = 0; // 0xf1 MovB
	goto Label_376; // 0xf2 Jump
	
Label_376:
	goto Label_205; // 0x178 Jump
	
Label_243:
	var_302_float = var_112_float * var_112_float; // 0xf3 Mult
	var_303_bool = var_131_float >= var_302_float; // 0xf4 GE
	if(var_303_bool == 0) goto Label_368; // 0xf5 JumpB
	GetPFPosition(var_132_cvector); // 0xf6 TObjFunc
	CanReachByPF(var_133_bool, var_132_cvector); // 0xf8 Func
	var_304_bool = var_133_bool == 0; // 0xfa Not
	if(var_304_bool == 0) goto Label_267; // 0xfb JumpB
	var_305_bool = 0; var_306_object = Obj(); var_307_float = 0; var_308_float = 0; var_309_bool = 0; var_310_bool = 0; // 0xfc PushV
	var_306_object = var_0_object; // 0xfd MovT
	var_307_float = var_124_float; // 0xfe Mov
	var_308_float = 10000.0; // 0xff MovF
	var_309_bool = 1; // 0x100 MovB
	var_310_bool = 0; // 0x101 MovB
	TaskCall(1); // 0x102 TaskCall
	func_827(var_313_bool, var_305_bool, var_306_object, var_307_float, var_308_float, var_309_bool, var_310_bool); // 0x103 NEW_2
	TaskReturn(); // 0x104 TaskReturn
	var_314_bool = var_311_bool == 0; // 0x106 Not
	if(var_314_bool == 0) goto Label_265; // 0x107 JumpB
	goto Label_377; // 0x108 Jump
	
Label_265:
	var_128_bool = 0; // 0x109 MovB
	goto Label_205; // 0x10a Jump
	
Label_267:
	var_315_bool = var_128_bool == 0; // 0x10b Not
	if(var_315_bool == 0) goto Label_292; // 0x10c JumpB
	var_316_object = Obj(); // 0x10d PushV
	var_316_object = var_0_object; // 0x10e MovT
	func_1622(); // 0x10f NEW_2
	var_325_string = "all"; // 0x111 PushS
	var_326_string = "attack_on"; // 0x112 PushS
	PlayAnimation(var_325_string, var_326_string); // 0x113 Func
	WaitForAnimEnd(); // 0x115 Func
	func_807(var_134_float); // 0x118 NEW_2
	StopAsync(); // 0x11a Func
	var_128_bool = 1; // 0x11c MovB
	var_327_bool = 0; var_328_object = Obj(); // 0x11d PushV
	var_328_object = var_0_object; // 0x11e MovT
	func_1472(var_327_bool, var_328_object); // 0x11f NEW_2
	var_329_bool = var_327_bool == 0; // 0x121 Not
	if(var_329_bool == 0) goto Label_292; // 0x122 JumpB
	goto Label_377; // 0x123 Jump
	
Label_292:
	rand(var_134_float); // 0x124 Func
	var_330_bool = 0; // 0x126 PushV
	var_330_bool = 1; // 0x127 MovB
	var_331_float = 0.25; // 0x128 PushF
	var_332_bool = var_134_float < var_331_float; // 0x129 LT
	if(var_332_bool == 0) goto Label_304; // 0x12a JumpB
	var_333_bool = 0; // 0x12b PushV
	func_764(var_330_bool, var_333_bool); // 0x12c NEW_2
	if(var_333_bool == 0) goto Label_304; // 0x12e JumpB
	var_330_bool = 0; // 0x12f MovB
	
Label_304:
	if(var_330_bool == 0) goto Label_321; // 0x130 JumpB
	Face(var_0_object); // 0x131 Func
	func_814(); // 0x134 NEW_2
	var_368_string = "all"; // 0x136 PushS
	var_369_string = "attack_stay"; // 0x137 PushS
	PlayAnimation(var_368_string, var_369_string); // 0x138 Func
	var_370_bool = 0; var_371_float = 0; // 0x13a PushV
	var_371_float = var_112_float; // 0x13b Mov
	func_632(var_134_float, var_370_bool, var_371_float); // 0x13c NEW_2
	StopAsync(); // 0x13e Func
	goto Label_367; // 0x140 Jump
	
Label_367:
	goto Label_376; // 0x16f Jump
	
Label_321:
	Face(var_0_object); // 0x141 Func
	var_585_string = "all"; // 0x143 PushS
	var_586_string = "fjump"; // 0x144 PushS
	PlayAnimation(var_585_string, var_586_string); // 0x145 Func
	WaitForAnimEnd(); // 0x147 Func
	func_807(var_134_float); // 0x14a NEW_2
	var_587_cvector = CVector(0.0, 0.0, 0.0); // 0x14c PushVec
	SetSpeed(var_587_cvector); // 0x14d Func
	Stop(); // 0x14f Func
	StopAsync(); // 0x151 Func
	var_588_bool = 0; // 0x153 PushV
	func_764(var_134_float, var_588_bool); // 0x154 NEW_2
	var_589_bool = var_588_bool == 0; // 0x156 Not
	if(var_589_bool == 0) goto Label_367; // 0x157 JumpB
	var_590_bool = 0; var_591_object = Obj(); // 0x158 PushV
	var_591_object = var_0_object; // 0x159 MovT
	func_1472(var_590_bool, var_591_object); // 0x15a NEW_2
	var_592_bool = var_590_bool == 0; // 0x15c Not
	if(var_592_bool == 0) goto Label_351; // 0x15d JumpB
	goto Label_377; // 0x15e Jump
	
Label_351:
	GetPFPosition(var_125_cvector); // 0x15f TObjFunc
	GetPFPosition(var_126_cvector); // 0x161 Func
	var_130_cvector = var_125_cvector - var_126_cvector; // 0x163 Sub2
	var_131_float = var_130_cvector | var_130_cvector; // 0x164 Or2
	var_593_float = var_112_float * var_112_float; // 0x165 Mult
	var_594_bool = var_131_float < var_593_float; // 0x166 LT
	if(var_594_bool == 0) goto Label_367; // 0x167 JumpB
	var_595_bool = 0; var_596_float = 0; // 0x168 PushV
	var_596_float = var_112_float; // 0x169 Mov
	func_468(var_134_float, var_595_bool, var_596_float); // 0x16a NEW_2
	var_597_bool = var_595_bool == 0; // 0x16c Not
	if(var_597_bool == 0) goto Label_367; // 0x16d JumpB
	goto Label_377; // 0x16e Jump
	
Label_368:
	var_598_bool = 0; var_599_float = 0; // 0x170 PushV
	var_599_float = var_112_float; // 0x171 Mov
	func_468(var_134_float, var_598_bool, var_599_float); // 0x172 NEW_2
	var_600_bool = var_598_bool == 0; // 0x174 Not
	if(var_600_bool == 0) goto Label_375; // 0x175 JumpB
	goto Label_377; // 0x176 Jump
	
Label_375:
	var_128_bool = 1; // 0x177 MovB
	
Label_202:
	var_128_bool = 1; // 0xca MovB
	
Label_179:
	var_124_float = var_112_float; // 0xb3 Mov
}


func_1190(var_16_object)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); // 0x4a6 PushV
	var_37_bool = var_16_object == 0; // 0x4a7 NullEq
	if(var_37_bool == 0) goto Label_1198; // 0x4a8 JumpB
	var_38_string = ""; // 0x4a9 PushV
	var_38_string = "fdie"; // 0x4aa MovS
	func_1281(var_38_string); // 0x4ab NEW_2
	goto Label_1280; // 0x4ad Jump
	
Label_1280:
	return 20; // 0x500 Return
	
Label_1198:
	GetPosition(var_27_cvector); // 0x4ae ObjFunc
	GetPosition(var_28_cvector); // 0x4b0 Func
	GetDirection(var_29_cvector); // 0x4b2 Func
	var_30_cvector = var_28_cvector - var_27_cvector; // 0x4b4 Sub2
	var_70_float = GetByIndex(var_30_cvector, 0); // 0x4b5 PushE
	var_71_float = GetByIndex(var_29_cvector, 0); // 0x4b6 PushE
	var_72_float = var_70_float * var_71_float; // 0x4b7 Mult
	var_73_float = GetByIndex(var_30_cvector, 2); // 0x4b8 PushE
	var_74_float = GetByIndex(var_29_cvector, 2); // 0x4b9 PushE
	var_75_float = var_73_float * var_74_float; // 0x4ba Mult
	var_76_int = var_72_float + var_75_float; // 0x4bb Add
	var_77_int = 0; // 0x4bc PushI
	var_78_bool = var_76_int >= var_77_int; // 0x4bd GE
	if(var_78_bool == 0) goto Label_1217; // 0x4be JumpB
	var_31_string = "fdie"; // 0x4bf MovS
	goto Label_1218; // 0x4c0 Jump
	
Label_1218:
	RemoveRTEnvelope(); // 0x4c2 Func
	SetDeathState(); // 0x4c4 Func
	Stop(); // 0x4c6 Func
	StopAsync(); // 0x4c8 Func
	var_32_object = var_16_object; // 0x4ca Mov
	var_79_string = "GetScriptProperty"; // 0x4cb PushS
	var_80_int = 2; // 0x4cc PushI
	var_81_bool = IsFuncExist(var_16_object, var_79_string, var_80_int); // 0x4cd FuncExist
	if(var_81_bool == 0) goto Label_1242; // 0x4ce JumpB
	var_82_string = "Owner"; // 0x4cf PushS
	HasScriptProperty(var_33_bool, var_82_string); // 0x4d0 ObjFunc
	var_83_bool = var_33_bool; // 0x4d2 Push
	if(var_83_bool == 0) goto Label_1242; // 0x4d3 JumpB
	var_84_string = "Owner"; // 0x4d4 PushS
	GetScriptProperty(var_32_object, var_84_string); // 0x4d5 ObjFunc
	var_85_bool = var_32_object == 0; // 0x4d7 NullEq
	if(var_85_bool == 0) goto Label_1242; // 0x4d8 JumpB
	var_32_object = var_16_object; // 0x4d9 Mov
	
Label_1242:
	var_86_string = "@GetEyesHeight"; // 0x4da PushS
	var_87_int = 1; // 0x4db PushI
	var_88_bool = IsFuncExist(var_32_object, var_86_string, var_87_int); // 0x4dc FuncExist
	if(var_88_bool == 0) goto Label_1257; // 0x4dd JumpB
	GetEyesHeight(var_35_float); // 0x4de ObjFunc
	var_36_cvector = CVector(0.0, 0.0, 0.0); // 0x4e0 MovV
	var_89_float = GetByIndex(var_36_cvector, 1); // 0x4e1 PushE
	var_89_float = var_35_float; // 0x4e2 Mov
	SetByIndex(var_36_cvector, 1) = var_89_float; // 0x4e3 PopE
	var_90_string = "head"; // 0x4e4 PushS
	LookAsync(var_16_object, var_90_string, var_36_cvector); // 0x4e5 Func
	var_34_bool = 1; // 0x4e7 MovB
	goto Label_1258; // 0x4e8 Jump
	
Label_1258:
	var_91_string = ""; // 0x4ea PushV
	var_91_string = var_31_string; // 0x4eb Mov
	func_1721(var_91_string); // 0x4ec NEW_2
	var_92_string = "all"; // 0x4ee PushS
	PlayAnimation(var_92_string, var_31_string); // 0x4ef Func
	WaitForAnimEnd(); // 0x4f1 Func
	var_93_bool = var_34_bool; // 0x4f3 Push
	if(var_93_bool == 0) goto Label_1274; // 0x4f4 JumpB
	StopAsync(); // 0x4f5 Func
	var_94_string = "head"; // 0x4f7 PushS
	UnlookAsync(var_94_string); // 0x4f8 Func
	
Label_1274:
	var_95_string = "all"; // 0x4fa PushS
	LockAnimationEnd(var_95_string, var_31_string); // 0x4fb Func
	RemoveEnvelope(); // 0x4fd Func
	var_32_object = 0; // 0x4ff SetNull
	
Label_1257:
	var_34_bool = 0; // 0x4e9 MovB
	
Label_1217:
	var_31_string = "bdie"; // 0x4c1 MovS
}


func_807(var_0_object)
{
	var_206_object = Obj(); // 0x327 PushV
	var_206_object = var_0_object; // 0x328 MovT
	func_1866(var_206_object); // 0x329 NEW_2
	return 0; // 0x32b Return
}


func_1830(var_165_object, var_166_string, var_167_string)
{
	var_168_object = Obj(); var_169_bool = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_object = Obj(); var_173_bool = 0; var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); // 0x726 PushV
	var_176_bool = var_165_object == 0; // 0x727 Not
	if(var_176_bool == 0) goto Label_1834; // 0x728 JumpB
	return 8; // 0x729 Return
	
Label_1834:
	GetSceneByName(var_172_object, var_166_string); // 0x72a Func
	GetLocator(var_167_string, var_173_bool, var_174_cvector, var_175_cvector); // 0x72c ObjFunc
	var_177_bool = var_173_bool == 0; // 0x72e Not
	if(var_177_bool == 0) goto Label_1850; // 0x72f JumpB
	var_178_string = "Teleport location '"; // 0x730 PushS
	var_179_int = var_178_string + var_167_string; // 0x731 Add
	var_180_string = "' not found in scene '"; // 0x732 PushS
	var_181_int = var_179_int + var_180_string; // 0x733 Add
	var_182_int = var_181_int + var_166_string; // 0x734 Add
	var_183_string = "'"; // 0x735 PushS
	var_184_int = var_182_int + var_183_string; // 0x736 Add
	Trace(var_184_int); // 0x737 Func
	goto Label_1852; // 0x739 Jump
	
Label_1852:
	return 8; // 0x73c Return
	
Label_1850:
	Teleport(var_165_object, var_172_object, var_174_cvector, var_175_cvector); // 0x73a Func
}


func_812(var_543_int)
{
	var_543_int = 0; // 0x32c MovI
	return 0; // 0x32d Return
}


func_429(var_0_object, var_468_float, var_469_int)
{
	var_470_object = Obj(); var_471_float = 0; var_472_float = 0; var_473_object = Obj(); var_474_float = 0; var_475_float = 0; // 0x1ad PushV
	var_476_float = 0.9; // 0x1ae PushF
	var_477_float = var_468_float * var_476_float; // 0x1af Mult
	GetVictim(var_477_float, var_473_object); // 0x1b0 Func
	ReportAttack(var_0_object); // 0x1b2 Func
	var_478_bool = var_473_object == var_0_object; // 0x1b4 Eq
	if(var_478_bool == 0) goto Label_466; // 0x1b5 JumpB
	var_479_float = 0; var_480_object = Obj(); var_481_int = 0; // 0x1b6 PushV
	var_480_object = var_473_object; // 0x1b7 Mov
	var_481_int = var_469_int; // 0x1b8 Mov
	func_159(var_481_int); // 0x1b9 NEW_2
	var_474_float = var_479_float; // 0x1ba Mov
	var_482_float = 0; var_483_object = Obj(); var_484_float = 0; var_485_int = 0; // 0x1bc PushV
	var_483_object = var_473_object; // 0x1bd Mov
	var_484_float = var_474_float; // 0x1be Mov
	var_486_int = 0; var_487_object = Obj(); var_488_int = 0; // 0x1bf PushV
	var_487_object = var_473_object; // 0x1c0 Mov
	var_488_int = var_469_int; // 0x1c1 Mov
	func_162(var_488_int); // 0x1c2 NEW_2
	var_485_int = var_486_int; // 0x1c3 Mov
	func_1358(var_482_float, var_483_object, var_484_float, var_485_int); // 0x1c5 NEW_2
	var_475_float = var_482_float; // 0x1c6 Mov
	var_543_int = 0; // 0x1c8 PushV
	func_812(var_543_int); // 0x1c9 NEW_2
	ReportHit(var_0_object, var_543_int, var_475_float, var_474_float); // 0x1cb Func
	var_544_object = Obj(); var_545_float = 0; // 0x1cd PushV
	var_544_object = var_473_object; // 0x1ce Mov
	var_545_float = var_475_float; // 0x1cf Mov
	func_819(); // 0x1d0 NEW_2
	
Label_466:
	return 6; // 0x1d2 Return
}


func_814()
{
	var_339_string = ""; // 0x32e PushV
	var_339_string = "attack_stay"; // 0x32f MovS
	func_1721(var_339_string); // 0x330 NEW_2
	return 0; // 0x332 Return
}


func_1327(var_413_cvector)
{
	var_415_cvector = CVector(0,0,0); var_416_cvector = CVector(0,0,0); var_417_cvector = CVector(0,0,0); var_418_cvector = CVector(0,0,0); // 0x52f PushV
	GetPosition(var_417_cvector); // 0x530 Func
	GetPosition(var_418_cvector); // 0x532 ObjFunc
	var_413_cvector = var_418_cvector - var_417_cvector; // 0x534 Sub2
	return 4; // 0x535 Return
}


func_1710(var_230_object)
{
	var_231_float = 0; var_232_cvector = CVector(0,0,0); var_233_float = 0; var_234_cvector = CVector(0,0,0); // 0x6ae PushV
	GetEyesHeight(var_233_float); // 0x6af ObjFunc
	var_234_cvector = CVector(0.0, 0.0, 0.0); // 0x6b1 MovV
	var_235_float = GetByIndex(var_234_cvector, 1); // 0x6b2 PushE
	var_235_float = var_233_float; // 0x6b3 Mov
	SetByIndex(var_234_cvector, 1) = var_235_float; // 0x6b4 PopE
	var_236_string = "head"; // 0x6b5 PushS
	LookAsync(var_230_object, var_236_string, var_234_cvector); // 0x6b6 Func
	return 4; // 0x6b8 Return
}


func_1072(var_264_bool, var_265_object)
{
	var_266_bool = 0; var_267_object = Obj(); // 0x431 PushV
	var_267_object = var_265_object; // 0x432 Mov
	func_1472(var_266_bool, var_267_object); // 0x433 NEW_2
	var_264_bool = var_266_bool; // 0x434 Mov
	return 0; // 0x436 Return
}


func_819()
{
	return 0; // 0x334 Return
}


func_821(var_568_bool)
{
	var_568_bool = 1; // 0x335 MovB
	return 0; // 0x336 Return
}


func_1334(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x536 PushV
	var_16_string = "player"; // 0x537 PushS
	FindActor(var_15_object, var_16_string); // 0x538 Func
	var_13_object = var_15_object; // 0x53a Mov
	return 2; // 0x53b Return
}


func_823(var_464_int)
{
	var_464_int = 1; // 0x337 MovI
	return 0; // 0x338 Return
}


func_1079(var_282_string)
{
	var_282_string = "walk"; // 0x437 MovS
	return 0; // 0x438 Return
}


func_825(var_459_float)
{
	var_459_float = 0.5; // 0x339 MovF
	return 0; // 0x33a Return
}


func_1721(var_339_string)
{
	var_340_bool = 0; var_341_int = 0; var_342_bool = 0; var_343_int = 0; var_344_bool = 0; var_345_float = 0; var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0); var_348_bool = 0; var_349_int = 0; var_350_bool = 0; var_351_int = 0; var_352_bool = 0; var_353_float = 0; var_354_cvector = CVector(0,0,0); var_355_cvector = CVector(0,0,0); // 0x6b9 PushV
	IsExisting3DSound(var_348_bool, var_339_string); // 0x6ba Func
	var_356_bool = var_348_bool == 0; // 0x6bc Not
	if(var_356_bool == 0) goto Label_1746; // 0x6bd JumpB
	var_349_int = 0; // 0x6be MovI
	
Label_1727:
	var_357_int = 1; // 0x6bf PushI
	var_358_int = var_349_int + var_357_int; // 0x6c0 Add
	var_359_int = var_339_string + var_358_int; // 0x6c1 Add
	IsExisting3DSound(var_350_bool, var_359_int); // 0x6c2 Func
	var_360_bool = var_350_bool == 0; // 0x6c4 Not
	if(var_360_bool == 0) goto Label_1735; // 0x6c5 JumpB
	goto Label_1738; // 0x6c6 Jump
	
Label_1738:
	var_361_bool = var_349_int == 0; // 0x6ca Not
	if(var_361_bool == 0) goto Label_1741; // 0x6cb JumpB
	return 16; // 0x6cc Return
	
Label_1741:
	irand(var_351_int, var_349_int); // 0x6cd Func
	var_362_int = 1; // 0x6cf PushI
	var_363_int = var_351_int + var_362_int; // 0x6d0 Add
	var_339_string = var_339_string + var_363_int; // 0x6d1 Add2
	
Label_1746:
	Is3DSoundLoaded(var_352_bool, var_339_string); // 0x6d2 Func
	var_364_bool = var_352_bool; // 0x6d4 Push
	if(var_364_bool == 0) goto Label_1761; // 0x6d5 JumpB
	GetEyesHeight(var_353_float); // 0x6d6 Func
	GetDirection(var_354_cvector); // 0x6d8 Func
	var_365_int = 50; // 0x6da PushI
	var_355_cvector = var_354_cvector * var_365_int; // 0x6db Mult2
	var_366_float = GetByIndex(var_355_cvector, 1); // 0x6dc PushE
	var_366_float = var_366_float + var_353_float; // 0x6dd Add2
	SetByIndex(var_355_cvector, 1) = var_366_float; // 0x6de PopE
	PlayGlobalSound(var_339_string, var_355_cvector); // 0x6df Func
	
Label_1761:
	return 16; // 0x6e1 Return
	
Label_1735:
	var_367_int = 1; // 0x6c7 PushI
	var_349_int = var_349_int + var_367_int; // 0x6c8 Add2
	goto Label_1727; // 0x6c9 Jump
}


func_827(var_2_int, var_213_bool, var_214_object, var_215_float, var_216_float, var_217_bool, var_218_bool)
{
	var_222_bool = 0; var_223_bool = 0; var_224_bool = 0; var_225_bool = 0; // 0x33b PushV
	var_226_object = Obj(); // 0x33c PushV
	var_226_object = var_214_object; // 0x33d Mov
	func_1866(var_226_object); // 0x33e NEW_2
	var_227_int = 1; // 0x340 PushI
	var_228_int = 5; // 0x341 PushI
	SetTimer(var_227_int, var_228_int); // 0x342 Func
	CanSee(var_224_bool, var_214_object); // 0x344 Func
	var_229_bool = var_224_bool; // 0x346 Push
	if(var_229_bool == 0) goto Label_846; // 0x347 JumpB
	var_2_int = 1; // 0x348 TMovB
	var_230_object = Obj(); // 0x349 PushV
	var_230_object = var_214_object; // 0x34a Mov
	func_1710(var_230_object); // 0x34b NEW_2
	goto Label_847; // 0x34d Jump
	
Label_847:
	var_237_bool = 0; var_238_object = Obj(); // 0x34f PushV
	var_238_object = var_214_object; // 0x350 Mov
	func_1341(var_237_bool, var_238_object); // 0x351 NEW_2
	if(var_237_bool == 0) goto Label_857; // 0x353 JumpB
	var_241_object = Obj(); // 0x354 PushV
	func_1762(var_241_object); // 0x355 NEW_2
	SendPlayerEnemy(var_214_object, var_241_object); // 0x357 Func
	
Label_857:
	var_242_bool = 0; var_243_object = Obj(); var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_bool = 0; // 0x359 PushV
	var_243_object = var_214_object; // 0x35a Mov
	var_244_float = var_215_float; // 0x35b Mov
	var_245_float = var_216_float; // 0x35c Mov
	var_246_bool = var_217_bool; // 0x35d Mov
	var_247_bool = var_218_bool; // 0x35e Mov
	func_932(var_224_bool, var_225_bool, var_242_bool, var_243_object, var_244_float, var_245_float, var_246_bool, var_247_bool); // 0x35f NEW_2
	var_225_bool = var_242_bool; // 0x360 Mov
	var_293_int = var_2_int; // 0x362 PushT
	if(var_293_int == 0) goto Label_871; // 0x363 JumpB
	var_294_string = "head"; // 0x364 PushS
	UnlookAsync(var_294_string); // 0x365 Func
	
Label_871:
	var_295_int = 1; // 0x367 PushI
	KillTimer(var_295_int); // 0x368 Func
	var_213_bool = var_225_bool; // 0x36a Mov
	return 4; // 0x36b Return
	
Label_846:
	var_2_int = 0; // 0x34e TMovB
}


func_1081(var_283_string)
{
	var_283_string = "run"; // 0x439 MovS
	return 0; // 0x43a Return
}


func_1341(var_237_bool, var_238_object)
{
	var_239_bool = 0; var_240_bool = 0; // 0x53d PushV
	IsPlayerActor(var_238_object, var_240_bool); // 0x53e Func
	var_237_bool = var_240_bool; // 0x540 Mov
	return 2; // 0x541 Return
}


func_1854(var_97_bool, var_98_string)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x73e PushV
	FindActor(var_100_object, var_98_string); // 0x73f Func
	var_101_bool = var_100_object == 0; // 0x741 Not
	if(var_101_bool == 0) goto Label_1861; // 0x742 JumpB
	var_97_bool = 0; // 0x743 MovB
	return 2; // 0x744 Return
	
Label_1861:
	RemoveActor(var_100_object); // 0x745 Func
	var_97_bool = 1; // 0x747 MovB
	return 2; // 0x748 Return
}


func_703(var_383_bool)
{
	var_384_bool = 0; // 0x2bf PushV
	var_384_bool = 0; // 0x2c0 MovB
	var_385_bool = 0; // 0x2c1 PushV
	func_675(var_384_bool, var_385_bool); // 0x2c2 NEW_2
	if(var_385_bool == 0) goto Label_714; // 0x2c4 JumpB
	var_402_bool = 0; // 0x2c5 PushV
	func_719(var_383_bool, var_384_bool, var_402_bool); // 0x2c6 NEW_2
	if(var_402_bool == 0) goto Label_714; // 0x2c8 JumpB
	var_384_bool = 1; // 0x2c9 MovB
	
Label_714:
	if(var_384_bool == 0) goto Label_717; // 0x2ca JumpB
	var_383_bool = 1; // 0x2cb MovB
	return 0; // 0x2cc Return
	
Label_717:
	var_383_bool = 0; // 0x2cd MovB
	return 0; // 0x2ce Return
}


func_1472(var_171_bool, var_172_object)
{
	var_173_int = 0; var_174_int = 0; // 0x5c0 PushV
	var_175_bool = 0; var_176_object = Obj(); // 0x5c1 PushV
	var_176_object = var_172_object; // 0x5c2 Mov
	func_1436(var_175_bool, var_176_object); // 0x5c3 NEW_2
	var_192_bool = var_175_bool == 0; // 0x5c5 Not
	if(var_192_bool == 0) goto Label_1481; // 0x5c6 JumpB
	var_171_bool = 0; // 0x5c7 MovB
	return 2; // 0x5c8 Return
	
Label_1481:
	var_193_bool = 0; var_194_object = Obj(); var_195_string = ""; // 0x5c9 PushV
	var_194_object = var_172_object; // 0x5ca Mov
	var_195_string = "noaccess"; // 0x5cb MovS
	func_1346(var_193_bool, var_194_object, var_195_string); // 0x5cc NEW_2
	var_202_bool = var_193_bool == 0; // 0x5ce Not
	if(var_202_bool == 0) goto Label_1490; // 0x5cf JumpB
	var_171_bool = 1; // 0x5d0 MovB
	return 2; // 0x5d1 Return
	
Label_1490:
	var_203_string = "noaccess"; // 0x5d2 PushS
	GetProperty(var_203_string, var_174_int); // 0x5d3 ObjFunc
	var_204_int = 0; // 0x5d5 PushI
	var_171_bool = var_174_int == var_204_int; // 0x5d6 Eq2
	return 2; // 0x5d7 Return
}


func_1083(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0x43b PushV
	var_16_object = Obj(); // 0x43c PushV
	var_16_object = var_11_object; // 0x43d Mov
	func_1190(var_16_object); // 0x43e NEW_2
	var_96_string = "boiny_arena"; // 0x440 PushS
	GetSceneByName(var_14_object, var_96_string); // 0x441 Func
	RemoveScene(var_14_object); // 0x443 Func
	var_97_bool = 0; var_98_string = ""; // 0x445 PushV
	var_98_string = "NPC_Starshina"; // 0x446 MovS
	func_1854(var_97_bool, var_98_string); // 0x447 NEW_2
	var_102_object = Obj(); // 0x449 PushV
	func_1334(var_102_object); // 0x44a NEW_2
	var_15_object = var_102_object; // 0x44b Mov
	var_106_object = Obj(); var_107_int = 0; var_108_object = Obj(); var_109_object = Obj(); var_110_object = Obj(); // 0x44d PushV
	var_106_object = var_15_object; // 0x44e Mov
	var_107_int = 0; // 0x44f MovI
	var_111_object = GlobalVars[0]; // 0x450 PushGE
	var_108_object = var_111_object; // 0x451 Mov
	var_112_object = GlobalVars[1]; // 0x453 PushGE
	var_109_object = var_112_object; // 0x454 Mov
	var_113_object = GlobalVars[10]; // 0x456 PushGE
	var_110_object = var_113_object; // 0x457 Mov
	func_1678(var_110_object); // 0x459 NEW_2
	var_133_object = Obj(); var_134_int = 0; var_135_object = Obj(); var_136_object = Obj(); var_137_object = Obj(); // 0x45b PushV
	var_133_object = var_15_object; // 0x45c Mov
	var_134_int = 1; // 0x45d MovI
	var_138_object = GlobalVars[2]; // 0x45e PushGE
	var_135_object = var_138_object; // 0x45f Mov
	var_139_object = GlobalVars[3]; // 0x461 PushGE
	var_136_object = var_139_object; // 0x462 Mov
	var_140_object = GlobalVars[11]; // 0x464 PushGE
	var_137_object = var_140_object; // 0x465 Mov
	func_1678(var_137_object); // 0x467 NEW_2
	var_141_object = Obj(); var_142_int = 0; var_143_object = Obj(); var_144_object = Obj(); var_145_object = Obj(); // 0x469 PushV
	var_141_object = var_15_object; // 0x46a Mov
	var_142_int = 2; // 0x46b MovI
	var_146_object = GlobalVars[4]; // 0x46c PushGE
	var_143_object = var_146_object; // 0x46d Mov
	var_147_object = GlobalVars[5]; // 0x46f PushGE
	var_144_object = var_147_object; // 0x470 Mov
	var_148_object = GlobalVars[12]; // 0x472 PushGE
	var_145_object = var_148_object; // 0x473 Mov
	func_1678(var_145_object); // 0x475 NEW_2
	var_149_object = Obj(); var_150_int = 0; var_151_object = Obj(); var_152_object = Obj(); var_153_object = Obj(); // 0x477 PushV
	var_149_object = var_15_object; // 0x478 Mov
	var_150_int = 3; // 0x479 MovI
	var_154_object = GlobalVars[6]; // 0x47a PushGE
	var_151_object = var_154_object; // 0x47b Mov
	var_155_object = GlobalVars[7]; // 0x47d PushGE
	var_152_object = var_155_object; // 0x47e Mov
	var_156_object = GlobalVars[13]; // 0x480 PushGE
	var_153_object = var_156_object; // 0x481 Mov
	func_1678(var_153_object); // 0x483 NEW_2
	var_157_object = Obj(); var_158_int = 0; var_159_object = Obj(); var_160_object = Obj(); var_161_object = Obj(); // 0x485 PushV
	var_157_object = var_15_object; // 0x486 Mov
	var_158_int = 4; // 0x487 MovI
	var_162_object = GlobalVars[8]; // 0x488 PushGE
	var_159_object = var_162_object; // 0x489 Mov
	var_163_object = GlobalVars[9]; // 0x48b PushGE
	var_160_object = var_163_object; // 0x48c Mov
	var_164_object = GlobalVars[14]; // 0x48e PushGE
	var_161_object = var_164_object; // 0x48f Mov
	func_1678(var_161_object); // 0x491 NEW_2
	SelectWeapon(); // 0x493 ObjFunc
	var_165_object = Obj(); var_166_string = ""; var_167_string = ""; // 0x495 PushV
	var_165_object = var_15_object; // 0x496 Mov
	var_166_string = "boiny"; // 0x497 MovS
	var_167_string = "pt_Starshina"; // 0x498 MovS
	func_1830(var_165_object, var_166_string, var_167_string); // 0x499 NEW_2
	var_185_bool = 0; var_186_string = ""; var_187_string = ""; // 0x49b PushV
	var_186_string = "quest_b11_01"; // 0x49c MovS
	var_187_string = "fight_win"; // 0x49d MovS
	func_1818(var_185_bool, var_186_string, var_187_string); // 0x49e NEW_2
	
Label_1184:
	Hold(); // 0x4a0 Func
	goto Label_1184; // 0x4a2 Jump
}


func_1346(var_193_bool, var_194_object, var_195_string)
{
	var_196_bool = 0; var_197_bool = 0; // 0x542 PushV
	var_198_string = "HasProperty"; // 0x543 PushS
	var_199_int = 2; // 0x544 PushI
	var_200_bool = IsFuncExist(var_194_object, var_198_string, var_199_int); // 0x545 FuncExist
	var_201_bool = var_200_bool == 0; // 0x546 Not
	if(var_201_bool == 0) goto Label_1354; // 0x547 JumpB
	var_193_bool = 0; // 0x548 MovB
	return 2; // 0x549 Return
	
Label_1354:
	HasProperty(var_195_string, var_197_bool); // 0x54a ObjFunc
	var_193_bool = var_197_bool; // 0x54c Mov
	return 2; // 0x54d Return
}


func_1608(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x648 PushV
	GetScene(var_22_object); // 0x649 Func
	var_24_string = "scripted"; // 0x64b PushS
	var_25_string = "blood_dir.xml"; // 0x64c PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x64d Func
	var_26_object = Obj(); // 0x64f PushV
	var_26_object = var_15_object; // 0x650 Mov
	func_1496(var_26_object); // 0x651 NEW_2
	return 4; // 0x653 Return
}


func_1866(var_206_object)
{
	var_207_bool = 0; var_208_bool = 0; // 0x74a PushV
	IsPlayerActor(var_206_object, var_208_bool); // 0x74b Func
	var_209_bool = var_208_bool; // 0x74d Push
	if(var_209_bool == 0) goto Label_1874; // 0x74e JumpB
	var_210_string = "attack"; // 0x74f PushS
	PlayGlobalMusic(var_210_string); // 0x750 Func
	
Label_1874:
	return 2; // 0x752 Return
}


func_1358(var_482_float, var_483_object, var_484_float, var_485_int)
{
	var_489_int = 0; var_490_string = ""; var_491_int = 0; var_492_float = 0; var_493_float = 0; var_494_float = 0; var_495_int = 0; var_496_string = ""; var_497_int = 0; var_498_float = 0; var_499_float = 0; var_500_float = 0; // 0x54e PushV
	var_501_bool = 0; var_502_object = Obj(); var_503_string = ""; // 0x54f PushV
	var_502_object = var_483_object; // 0x550 Mov
	var_503_string = "health"; // 0x551 MovS
	func_1346(var_501_bool, var_502_object, var_503_string); // 0x552 NEW_2
	var_504_bool = var_501_bool == 0; // 0x554 Not
	if(var_504_bool == 0) goto Label_1368; // 0x555 JumpB
	var_482_float = 0.0; // 0x556 MovF
	return 12; // 0x557 Return
	
Label_1368:
	var_505_bool = 0; var_506_object = Obj(); var_507_string = ""; // 0x558 PushV
	var_506_object = var_483_object; // 0x559 Mov
	var_507_string = "armor"; // 0x55a MovS
	func_1346(var_505_bool, var_506_object, var_507_string); // 0x55b NEW_2
	var_508_bool = var_505_bool == 0; // 0x55d Not
	if(var_508_bool == 0) goto Label_1377; // 0x55e JumpB
	var_495_int = 0; // 0x55f MovI
	goto Label_1380; // 0x560 Jump
	
Label_1380:
	var_509_string = "armor_"; // 0x564 PushS
	var_510_string = ""; var_511_int = 0; // 0x565 PushV
	var_511_int = var_485_int; // 0x566 Mov
	func_1313(var_510_string, var_511_int); // 0x567 NEW_2
	var_496_string = var_509_string + var_510_string; // 0x569 Add2
	var_516_bool = 0; var_517_object = Obj(); var_518_string = ""; // 0x56a PushV
	var_517_object = var_483_object; // 0x56b Mov
	var_518_string = var_496_string; // 0x56c Mov
	func_1346(var_516_bool, var_517_object, var_518_string); // 0x56d NEW_2
	var_519_bool = var_516_bool == 0; // 0x56f Not
	if(var_519_bool == 0) goto Label_1395; // 0x570 JumpB
	var_497_int = 0; // 0x571 MovI
	goto Label_1397; // 0x572 Jump
	
Label_1397:
	var_520_float = 0; var_521_float = 0; var_522_float = 0; // 0x575 PushV
	var_523_int = var_495_int + var_497_int; // 0x576 Add
	var_524_float = 100.0; // 0x577 PushF
	var_521_float = var_523_int / var_523_int; // 0x578 Div2
	var_522_float = 1; // 0x579 MovI
	func_1778(var_520_float, var_521_float, var_522_float); // 0x57a NEW_2
	var_498_float = var_520_float; // 0x57b Mov
	var_526_string = "health"; // 0x57d PushS
	GetProperty(var_526_string, var_499_float); // 0x57e ObjFunc
	var_527_int = 1; // 0x580 PushI
	var_528_int = var_527_int - var_498_float; // 0x581 Sub
	var_500_float = var_484_float * var_528_int; // 0x582 Mult2
	var_529_string = "health"; // 0x583 PushS
	var_530_float = 0; var_531_float = 0; var_532_float = 0; var_533_float = 0; // 0x584 PushV
	var_531_float = var_499_float - var_500_float; // 0x585 Sub2
	var_532_float = 0; // 0x586 MovI
	var_533_float = 1; // 0x587 MovI
	func_1785(var_530_float, var_531_float, var_532_float, var_533_float); // 0x588 NEW_2
	SetProperty(var_529_string, var_530_float); // 0x58a ObjFunc
	var_536_bool = 0; var_537_object = Obj(); // 0x58c PushV
	var_537_object = var_483_object; // 0x58d Mov
	func_1341(var_536_bool, var_537_object); // 0x58e NEW_2
	if(var_536_bool == 0) goto Label_1429; // 0x590 JumpB
	var_538_float = 0; // 0x591 PushV
	var_538_float = -var_500_float; // 0x592 Neg2
	func_1808(var_538_float); // 0x593 NEW_2
	
Label_1429:
	var_482_float = var_500_float; // 0x595 Mov
	return 12; // 0x596 Return
	
Label_1395:
	GetProperty(var_496_string, var_497_int); // 0x573 ObjFunc
	
Label_1377:
	var_542_string = "armor"; // 0x561 PushS
	GetProperty(var_542_string, var_495_int); // 0x562 ObjFunc
}


func_719(var_0_object, var_4_float, var_402_bool)
{
	var_403_object = Obj(); var_404_bool = 0; var_405_float = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_object = Obj(); var_409_bool = 0; var_410_float = 0; var_411_cvector = CVector(0,0,0); var_412_cvector = CVector(0,0,0); // 0x2cf PushV
	GetScene(var_408_object); // 0x2d0 Func
	var_409_bool = 0; // 0x2d2 MovB
	
Label_723:
	var_413_cvector = CVector(0,0,0); var_414_object = Obj(); // 0x2d3 PushV
	var_414_object = var_0_object; // 0x2d4 MovT
	func_1327(var_414_object); // 0x2d5 NEW_2
	var_419_int = -var_413_cvector; // 0x2d7 Neg
	FindDirLength(var_410_float, var_419_int, var_410_float); // 0x2d8 Func
	var_420_bool = var_410_float < var_4_float; // 0x2da LT
	if(var_420_bool == 0) goto Label_733; // 0x2db JumpB
	goto Label_761; // 0x2dc Jump
	
Label_761:
	var_402_bool = var_409_bool; // 0x2f9 Mov
	return 10; // 0x2fa Return
	
Label_733:
	Face(var_0_object); // 0x2dd Func
	var_421_string = "all"; // 0x2df PushS
	var_422_string = "bjump"; // 0x2e0 PushS
	PlayAnimation(var_421_string, var_422_string); // 0x2e1 Func
	GetPFPosition(var_411_cvector); // 0x2e3 TObjFunc
	GetPFPosition(var_412_cvector); // 0x2e5 Func
	WaitForAnimEnd(); // 0x2e7 Func
	func_807(var_412_cvector); // 0x2ea NEW_2
	StopAsync(); // 0x2ec Func
	var_423_cvector = CVector(0.0, 0.0, 0.0); // 0x2ee PushVec
	SetSpeed(var_423_cvector); // 0x2ef Func
	var_409_bool = 1; // 0x2f1 MovB
	var_424_bool = 0; // 0x2f2 PushV
	func_675(var_412_cvector, var_424_bool); // 0x2f3 NEW_2
	var_425_bool = var_424_bool == 0; // 0x2f5 Not
	if(var_425_bool == 0) goto Label_760; // 0x2f6 JumpB
	goto Label_761; // 0x2f7 Jump
	
Label_760:
	goto Label_723; // 0x2f8 Jump
}


func_1875()
{
	var_443_object = Obj(); var_444_object = Obj(); // 0x753 PushV
	GetScene(var_444_object); // 0x754 Func
	var_445_string = "battle"; // 0x756 PushS
	var_446_object = Obj(); // 0x757 PushV
	func_1762(var_446_object); // 0x758 NEW_2
	BroadcastMessage(var_445_string, var_446_object, var_444_object); // 0x75a Func
	return 2; // 0x75c Return
}


func_468(var_0_object, var_431_bool, var_432_float)
{
	var_433_int = 0; var_434_bool = 0; var_435_int = 0; var_436_string = ""; var_437_int = 0; var_438_bool = 0; var_439_int = 0; var_440_string = ""; // 0x1d4 PushV
	func_807(var_440_string); // 0x1d6 NEW_2
	irand(var_437_int, var_440_string); // 0x1d8 Func
	var_441_int = 1; // 0x1da PushI
	var_437_int = var_437_int + var_441_int; // 0x1db Add2
	Face(var_0_object); // 0x1dc Func
	var_442_bool = 1; // 0x1de PushB
	SetAttackState(var_442_bool); // 0x1df Func
	func_1875(); // 0x1e2 NEW_2
	var_447_string = "all"; // 0x1e4 PushS
	var_448_string = "attack_begin"; // 0x1e5 PushS
	var_449_int = var_448_string + var_437_int; // 0x1e6 Add
	PlayAnimation(var_447_string, var_449_int); // 0x1e7 Func
	WaitForAnimEnd(); // 0x1e9 Func
	func_775(var_439_int, var_440_string); // 0x1ec NEW_2
	var_465_bool = 0; var_466_object = Obj(); // 0x1ee PushV
	var_466_object = var_0_object; // 0x1ef MovT
	func_1472(var_465_bool, var_466_object); // 0x1f0 NEW_2
	var_467_bool = var_465_bool == 0; // 0x1f2 Not
	if(var_467_bool == 0) goto Label_504; // 0x1f3 JumpB
	StopAsync(); // 0x1f4 Func
	var_431_bool = 0; // 0x1f6 MovB
	return 8; // 0x1f7 Return
	
Label_504:
	var_468_float = 0; var_469_int = 0; // 0x1f8 PushV
	var_468_float = var_432_float; // 0x1f9 Mov
	var_469_int = var_437_int; // 0x1fa Mov
	func_429(var_440_string, var_468_float, var_469_int); // 0x1fb NEW_2
	var_546_string = "all"; // 0x1fd PushS
	var_547_string = "attack_middle"; // 0x1fe PushS
	var_548_int = var_547_string + var_437_int; // 0x1ff Add
	HasAnimation(var_438_bool, var_546_string, var_548_int); // 0x200 Func
	var_549_bool = var_438_bool; // 0x202 Push
	if(var_549_bool == 0) goto Label_585; // 0x203 JumpB
	func_1875(); // 0x205 NEW_2
	var_550_string = "all"; // 0x207 PushS
	var_551_string = "attack_middle"; // 0x208 PushS
	var_552_int = var_551_string + var_437_int; // 0x209 Add
	PlayAnimation(var_550_string, var_552_int); // 0x20a Func
	WaitForAnimEnd(); // 0x20c Func
	func_807(var_440_string); // 0x20f NEW_2
	var_553_bool = 0; var_554_object = Obj(); // 0x211 PushV
	var_554_object = var_0_object; // 0x212 MovT
	func_1472(var_553_bool, var_554_object); // 0x213 NEW_2
	var_555_bool = var_553_bool == 0; // 0x215 Not
	if(var_555_bool == 0) goto Label_539; // 0x216 JumpB
	StopAsync(); // 0x217 Func
	var_431_bool = 0; // 0x219 MovB
	return 8; // 0x21a Return
	
Label_539:
	var_556_float = 0; var_557_int = 0; // 0x21b PushV
	var_556_float = var_432_float; // 0x21c Mov
	var_557_int = var_437_int; // 0x21d Mov
	func_429(var_440_string, var_556_float, var_557_int); // 0x21e NEW_2
	var_439_int = 1; // 0x220 MovI
	
Label_545:
	var_558_string = "attack_middle"; // 0x221 PushS
	var_559_int = var_558_string + var_437_int; // 0x222 Add
	var_560_string = "_"; // 0x223 PushS
	var_561_int = var_559_int + var_560_string; // 0x224 Add
	var_440_string = var_561_int + var_439_int; // 0x225 Add2
	var_562_string = "all"; // 0x226 PushS
	HasAnimation(var_438_bool, var_562_string, var_440_string); // 0x227 Func
	var_563_bool = var_438_bool == 0; // 0x229 Not
	if(var_563_bool == 0) goto Label_556; // 0x22a JumpB
	goto Label_585; // 0x22b Jump
	
Label_585:
	var_564_bool = 0; // 0x249 PushB
	SetAttackState(var_564_bool); // 0x24a Func
	var_565_string = "all"; // 0x24c PushS
	var_566_string = "attack_end"; // 0x24d PushS
	var_567_int = var_566_string + var_437_int; // 0x24e Add
	PlayAnimation(var_565_string, var_567_int); // 0x24f Func
	var_568_bool = 0; // 0x251 PushV
	func_821(var_568_bool); // 0x252 NEW_2
	if(var_568_bool == 0) goto Label_603; // 0x254 JumpB
	var_569_bool = 0; var_570_float = 0; // 0x255 PushV
	var_570_float = 0.75; // 0x256 MovF
	func_605(var_569_bool, var_570_float); // 0x257 NEW_2
	StopAsync(); // 0x259 Func
	
Label_603:
	var_431_bool = 1; // 0x25b MovB
	return 8; // 0x25c Return
	
Label_556:
	func_1875(); // 0x22d NEW_2
	var_578_string = "all"; // 0x22f PushS
	PlayAnimation(var_578_string, var_440_string); // 0x230 Func
	WaitForAnimEnd(); // 0x232 Func
	func_807(var_440_string); // 0x235 NEW_2
	var_579_bool = 0; var_580_object = Obj(); // 0x237 PushV
	var_580_object = var_0_object; // 0x238 MovT
	func_1472(var_579_bool, var_580_object); // 0x239 NEW_2
	var_581_bool = var_579_bool == 0; // 0x23b Not
	if(var_581_bool == 0) goto Label_577; // 0x23c JumpB
	StopAsync(); // 0x23d Func
	var_431_bool = 0; // 0x23f MovB
	return 8; // 0x240 Return
	
Label_577:
	var_582_float = 0; var_583_int = 0; // 0x241 PushV
	var_582_float = var_432_float; // 0x242 Mov
	var_583_int = var_437_int; // 0x243 Mov
	func_429(var_440_string, var_582_float, var_583_int); // 0x244 NEW_2
	var_584_int = 1; // 0x246 PushI
	var_439_int = var_439_int + var_584_int; // 0x247 Add2
	goto Label_545; // 0x248 Jump
}


func_1622()
{
	var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); // 0x656 PushV
	GetPosition(var_320_cvector); // 0x657 ObjFunc
	GetPosition(var_321_cvector); // 0x659 Func
	var_322_cvector = var_320_cvector - var_321_cvector; // 0x65b Sub2
	var_323_float = GetByIndex(var_322_cvector, 0); // 0x65c PushE
	var_324_float = GetByIndex(var_322_cvector, 2); // 0x65d PushE
	RotateAsync(var_323_float, var_324_float); // 0x65e Func
	return 6; // 0x660 Return
}


func_1496(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x5d8 PushV
	var_41_bool = var_26_object == 0; // 0x5d9 NullEq
	if(var_41_bool == 0) goto Label_1500; // 0x5da JumpB
	return 14; // 0x5db Return
	
Label_1500:
	IsDead(var_34_bool); // 0x5dc Func
	var_42_bool = var_34_bool; // 0x5de Push
	if(var_42_bool == 0) goto Label_1505; // 0x5df JumpB
	return 14; // 0x5e0 Return
	
Label_1505:
	GetSecondaryAnimationType(var_35_int); // 0x5e1 Func
	var_43_int = 0; // 0x5e3 PushI
	var_44_bool = var_35_int < var_43_int; // 0x5e4 LT
	if(var_44_bool == 0) goto Label_1511; // 0x5e5 JumpB
	return 14; // 0x5e6 Return
	
Label_1511:
	GetPosition(var_36_cvector); // 0x5e7 ObjFunc
	GetPosition(var_37_cvector); // 0x5e9 Func
	GetDirection(var_38_cvector); // 0x5eb Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x5ed Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x5ee PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x5ef PushE
	var_47_float = var_45_float * var_46_float; // 0x5f0 Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x5f1 PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x5f2 PushE
	var_50_float = var_48_float * var_49_float; // 0x5f3 Mult
	var_51_int = var_47_float + var_50_float; // 0x5f4 Add
	var_52_int = 0; // 0x5f5 PushI
	var_53_bool = var_51_int >= var_52_int; // 0x5f6 GE
	if(var_53_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_40_string = "fhit"; // 0x5f8 MovS
	goto Label_1531; // 0x5f9 Jump
	
Label_1531:
	var_54_string = "hit_react"; // 0x5fb PushS
	var_55_string = "1"; // 0x5fc PushS
	var_56_int = var_40_string + var_55_string; // 0x5fd Add
	var_57_string = "2"; // 0x5fe PushS
	var_58_int = var_40_string + var_57_string; // 0x5ff Add
	var_59_int = -10; // 0x600 PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x601 Func
	return 14; // 0x603 Return
	
Label_1530:
	var_40_string = "bhit"; // 0x5fa MovS
}


func_605(var_569_bool, var_570_float)
{
	var_571_float = 0; var_572_bool = 0; var_573_float = 0; var_574_bool = 0; // 0x25d PushV
	rand(var_573_float); // 0x25e Func
	var_575_bool = var_573_float < var_570_float; // 0x260 LT
	if(var_575_bool == 0) goto Label_625; // 0x261 JumpB
	
Label_610:
	IsAnimationPlaying(var_574_bool); // 0x262 Func
	var_576_bool = var_574_bool == 0; // 0x264 Not
	if(var_576_bool == 0) goto Label_615; // 0x265 JumpB
	goto Label_624; // 0x266 Jump
	
Label_624:
	goto Label_630; // 0x270 Jump
	
Label_630:
	var_569_bool = 0; // 0x276 MovB
	return 4; // 0x277 Return
	
Label_615:
	var_577_bool = 0; // 0x267 PushV
	func_703(var_577_bool); // 0x268 NEW_2
	if(var_577_bool == 0) goto Label_621; // 0x26a JumpB
	var_569_bool = 1; // 0x26b MovB
	return 4; // 0x26c Return
	
Label_621:
	sync(); // 0x26d Func
	goto Label_610; // 0x26f Jump
	
Label_625:
	WaitForAnimEnd(); // 0x271 Func
	func_807(var_574_bool); // 0x274 NEW_2
}


func_1886(var_10_object)
{
	var_11_object = Obj(); // 0x75f PushV
	var_11_object = var_10_object; // 0x760 Mov
	TaskCall(2); // 0x761 TaskCall
	func_1083(var_11_object); // 0x762 NEW_2
	TaskReturn(); // 0x763 TaskReturn
	return 0; // 0x765 Return
}


func_1633(var_30_object, var_32_int)
{
	var_35_object = Obj(); var_36_int = 0; var_37_int = 0; var_38_object = Obj(); var_39_int = 0; var_40_object = Obj(); var_41_int = 0; var_42_int = 0; var_43_object = Obj(); var_44_int = 0; // 0x661 PushV
	var_45_object = Obj(); // 0x662 PushV
	func_1802(var_45_object); // 0x663 NEW_2
	var_40_object = var_45_object; // 0x664 Mov
	GetItemCount(var_41_int, var_32_int); // 0x666 ObjFunc
	var_42_int = 0; // 0x668 MovI
	
Label_1641:
	var_48_bool = var_42_int < var_41_int; // 0x669 LT
	if(var_48_bool == 0) goto Label_1655; // 0x66a JumpB
	GetItem(var_43_object, var_42_int, var_32_int); // 0x66b ObjFunc
	add(var_43_object); // 0x66d ObjFunc
	GetItemAmount(var_44_int, var_42_int, var_32_int); // 0x66f ObjFunc
	add(var_44_int); // 0x671 ObjFunc
	var_43_object = 0; // 0x673 SetNull
	var_49_int = 1; // 0x674 PushI
	var_42_int = var_42_int + var_49_int; // 0x675 Add2
	goto Label_1641; // 0x676 Jump
	
Label_1655:
	var_30_object = var_40_object; // 0x677 Mov
	return 10; // 0x678 Return
}


func_1762(var_165_object)
{
	var_166_object = Obj(); var_167_object = Obj(); // 0x6e2 PushV
	self(var_167_object); // 0x6e3 Func
	var_165_object = var_167_object; // 0x6e5 Mov
	return 2; // 0x6e6 Return
}


func_1768(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x6e8 PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x6e9 Or
	var_50_float = sqrt(var_51_int); // 0x6ea Sqrt2
	var_52_float = 0.0; // 0x6eb PushF
	var_53_bool = var_50_float < var_52_float; // 0x6ec LT
	if(var_53_bool == 0) goto Label_1776; // 0x6ed JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x6ee MovV
	return 2; // 0x6ef Return
	
Label_1776:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x6f0 Div2
	return 2; // 0x6f1 Return
}


func_1778(var_520_float, var_521_float, var_522_float)
{
	var_525_bool = var_521_float < var_522_float; // 0x6f3 LT
	if(var_525_bool == 0) goto Label_1783; // 0x6f4 JumpB
	var_520_float = var_521_float; // 0x6f5 Mov
	goto Label_1784; // 0x6f6 Jump
	
Label_1784:
	return 0; // 0x6f8 Return
	
Label_1783:
	var_520_float = var_522_float; // 0x6f7 Mov
}


func_632(var_0_object, var_370_bool, var_371_float)
{
	var_372_bool = 0; var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_float = 0; var_377_bool = 0; var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_float = 0; // 0x278 PushV
	
Label_633:
	IsAnimationPlaying(var_377_bool); // 0x279 Func
	var_382_bool = var_377_bool == 0; // 0x27b Not
	if(var_382_bool == 0) goto Label_638; // 0x27c JumpB
	goto Label_670; // 0x27d Jump
	
Label_670:
	func_807(var_381_float); // 0x29f NEW_2
	var_370_bool = 0; // 0x2a1 MovB
	return 10; // 0x2a2 Return
	
Label_638:
	var_383_bool = 0; // 0x27e PushV
	func_703(var_383_bool); // 0x27f NEW_2
	if(var_383_bool == 0) goto Label_644; // 0x281 JumpB
	var_370_bool = 1; // 0x282 MovB
	return 10; // 0x283 Return
	
Label_644:
	var_426_bool = 0; var_427_object = Obj(); // 0x284 PushV
	var_427_object = var_0_object; // 0x285 MovT
	func_1472(var_426_bool, var_427_object); // 0x286 NEW_2
	var_428_bool = var_426_bool == 0; // 0x288 Not
	if(var_428_bool == 0) goto Label_652; // 0x289 JumpB
	var_370_bool = 0; // 0x28a MovB
	return 10; // 0x28b Return
	
Label_652:
	GetPFPosition(var_378_cvector); // 0x28c TObjFunc
	GetPFPosition(var_379_cvector); // 0x28e Func
	var_380_cvector = var_378_cvector - var_379_cvector; // 0x290 Sub2
	var_381_float = var_380_cvector | var_380_cvector; // 0x291 Or2
	var_429_float = var_371_float * var_371_float; // 0x292 Mult
	var_430_bool = var_381_float < var_429_float; // 0x293 LT
	if(var_430_bool == 0) goto Label_667; // 0x294 JumpB
	var_431_bool = 0; var_432_float = 0; // 0x295 PushV
	var_432_float = var_371_float; // 0x296 Mov
	func_468(var_381_float, var_431_bool, var_432_float); // 0x297 NEW_2
	var_370_bool = 1; // 0x299 MovB
	return 10; // 0x29a Return
	
Label_667:
	sync(); // 0x29b Func
	goto Label_633; // 0x29d Jump
}


func_1785(var_530_float, var_531_float, var_532_float, var_533_float)
{
	var_534_bool = var_531_float < var_532_float; // 0x6fa LT
	if(var_534_bool == 0) goto Label_1790; // 0x6fb JumpB
	var_530_float = var_532_float; // 0x6fc Mov
	return 0; // 0x6fd Return
	
Label_1790:
	var_535_bool = var_531_float > var_533_float; // 0x6fe GT
	if(var_535_bool == 0) goto Label_1794; // 0x6ff JumpB
	var_530_float = var_533_float; // 0x700 Mov
	return 0; // 0x701 Return
	
Label_1794:
	var_530_float = var_531_float; // 0x702 Mov
	return 0; // 0x703 Return
}


func_1658(var_75_object, var_77_int)
{
	var_78_object = Obj(); var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; var_84_int = 0; var_85_bool = 0; // 0x67a PushV
	CreateIntVector(var_82_object); // 0x67b Func
	GetItemCount(var_83_int, var_77_int); // 0x67d ObjFunc
	var_84_int = 0; // 0x67f MovI
	
Label_1664:
	var_86_bool = var_84_int < var_83_int; // 0x680 LT
	if(var_86_bool == 0) goto Label_1675; // 0x681 JumpB
	IsItemSelected(var_85_bool, var_84_int, var_77_int); // 0x682 ObjFunc
	var_87_bool = var_85_bool; // 0x684 Push
	if(var_87_bool == 0) goto Label_1672; // 0x685 JumpB
	add(var_84_int); // 0x686 ObjFunc
	
Label_1672:
	var_88_int = 1; // 0x688 PushI
	var_84_int = var_84_int + var_88_int; // 0x689 Add2
	goto Label_1664; // 0x68a Jump
	
Label_1675:
	var_75_object = var_82_object; // 0x68b Mov
	return 8; // 0x68c Return
}


func_764(var_0_object, var_333_bool)
{
	var_334_bool = 0; var_335_bool = 0; // 0x2fc PushV
	var_336_string = "IsAttacking"; // 0x2fd PushS
	var_337_int = 1; // 0x2fe PushI
	var_338_bool = IsFuncExist(var_0_object, var_336_string, var_337_int); // 0x2ff FuncExist
	if(var_338_bool == 0) goto Label_773; // 0x300 JumpB
	IsAttacking(var_335_bool); // 0x301 TObjFunc
	var_333_bool = var_335_bool; // 0x303 Mov
	return 2; // 0x304 Return
	
Label_773:
	var_333_bool = 0; // 0x305 MovB
	return 2; // 0x306 Return
}


func_890(var_2_int)
{
	var_10_int = 1; // 0x37a PushI
	KillTimer(var_10_int); // 0x37b Func
	var_11_int = var_2_int; // 0x37d PushT
	if(var_11_int == 0) goto Label_899; // 0x37e JumpB
	var_2_int = 0; // 0x37f TMovB
	var_12_string = "head"; // 0x380 PushS
	UnlookAsync(var_12_string); // 0x381 Func
	
Label_899:
	func_1056(var_9_object); // 0x384 NEW_2
	return 0; // 0x386 Return
}


