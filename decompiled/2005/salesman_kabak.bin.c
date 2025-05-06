task_0_event_11(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_float)
{
	var_13_bool = 0; // 0x1b PushV
	func_538(var_13_bool); // 0x1c NEW_2
	if(var_13_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_1_event_6(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float)
{
	func_187(var_10_bool, var_11_float); // 0x39 NEW_2
	Hold(); // 0x3b Func
	return 0; // 0x3d Return
}


task_1_event_5(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float)
{
	StopGroup0(); // 0x3e Func
	return 0; // 0x40 Return
}


task_1_event_0(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x41 PushV
	var_15_string = "tr_salesman_kabak"; // 0x42 PushS
	GetVariable(var_15_string, var_14_int); // 0x43 Func
	var_16_int = 0; // 0x45 PushV
	func_423(var_16_int); // 0x46 NEW_2
	var_22_bool = var_14_int != var_16_int; // 0x48 Neq
	if(var_22_bool == 0) goto Label_86; // 0x49 JumpB
	var_23_string = "Updating salesman"; // 0x4a PushS
	Trace(var_23_string); // 0x4b Func
	var_24_string = "tr_salesman_kabak"; // 0x4d PushS
	var_25_int = 0; // 0x4e PushV
	func_423(var_25_int); // 0x4f NEW_2
	SetVariable(var_24_string, var_25_int); // 0x51 Func
	func_102(); // 0x54 NEW_2
	
Label_86:
	var_101_bool = 0; var_102_object = Obj(); // 0x56 PushV
	var_102_object = var_12_object; // 0x57 Mov
	func_300(var_101_bool, var_102_object); // 0x58 NEW_2
	if(var_101_bool == 0) goto Label_101; // 0x5a JumpB
	var_132_object = Obj(); // 0x5b PushV
	var_132_object = var_12_object; // 0x5c Mov
	TaskCall(0); // 0x5d TaskCall
	func_0(var_132_object); // 0x5e NEW_2
	TaskReturn(); // 0x5f TaskReturn
	var_149_object = Obj(); // 0x61 PushV
	var_149_object = var_12_object; // 0x62 Mov
	func_355(); // 0x63 NEW_2
	
Label_101:
	return 2; // 0x65 Return
}


task_1_event_7(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float, var_12_int)
{
	var_13_int = 10; // 0xa5 PushI
	var_14_bool = var_12_int == var_13_int; // 0xa6 Eq
	if(var_14_bool == 0) goto Label_186; // 0xa7 JumpB
	var_15_bool = 0; // 0xa8 PushV
	func_149(var_10_bool, var_11_float, var_12_int, var_15_bool); // 0xa9 NEW_2
	if(var_15_bool == 0) goto Label_180; // 0xab JumpB
	var_28_bool = var_2_int == 0; // 0xac Not
	if(var_28_bool == 0) goto Label_179; // 0xad JumpB
	var_29_object = Obj(); // 0xae PushV
	var_29_object = var_4_bool; // 0xaf MovT
	func_375(var_29_object); // 0xb0 NEW_2
	var_2_int = 1; // 0xb2 TMovB
	
Label_179:
	goto Label_186; // 0xb3 Jump
	
Label_186:
	return 0; // 0xba Return
	
Label_180:
	var_36_int = var_2_int; // 0xb4 PushT
	if(var_36_int == 0) goto Label_186; // 0xb5 JumpB
	var_37_string = "head"; // 0xb6 PushS
	UnlookAsync(var_37_string); // 0xb7 Func
	var_2_int = 0; // 0xb9 TMovB
}


main(var_0_bool, var_1_int, var_2_int, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float)
{
	var_12_bool = 0; // 0x28 PushV
	func_295(var_12_bool); // 0x29 NEW_2
	var_15_bool = var_12_bool == 0; // 0x2b Not
	if(var_15_bool == 0) goto Label_47; // 0x2c JumpB
	Hold(); // 0x2d Func
	
Label_47:
	var_16_bool = 1; // 0x2f PushB
	if(var_16_bool == 0) goto Label_55; // 0x30 JumpB
	var_17_float = 0; var_18_float = 0; // 0x31 PushV
	var_17_float = 300; // 0x32 MovI
	var_18_float = 100; // 0x33 MovI
	func_122(var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_float, var_17_float, var_18_float); // 0x34 NEW_2
	goto Label_47; // 0x36 Jump
	
Label_55:
	return 0; // 0x37 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_134_bool = 0; // 0x4 PushV
	func_538(var_134_bool); // 0x5 NEW_2
	if(var_134_bool == 0) goto Label_15; // 0x7 JumpB
	var_135_string = ""; // 0x8 PushV
	var_135_string = "Neutral"; // 0x9 MovS
	func_359(var_135_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_146_bool = var_0_bool; // 0x15 PushT
	if(var_146_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_147_string = "all"; // 0x11 PushS
	var_148_string = "idle"; // 0x12 PushS
	PlayAnimation(var_147_string, var_148_string); // 0x13 Func
}


func_514(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x202 PushV
	var_49_string = "idle"; // 0x203 MovS
	var_50_int = var_47_int; // 0x204 Push
	if(var_50_int == 0) goto Label_519; // 0x205 JumpB
	var_49_string = var_49_string + var_47_int; // 0x206 Add2
	
Label_519:
	var_46_string = var_49_string; // 0x207 Mov
	return 2; // 0x208 Return
}


func_386(var_60_string, var_61_int, var_62_int)
{
	var_63_bool = 0; var_64_bool = 0; // 0x182 PushV
	var_65_bool = 0; var_66_int = 0; var_67_int = 0; // 0x183 PushV
	var_66_int = var_61_int; // 0x184 Mov
	var_67_int = var_62_int; // 0x185 Mov
	func_418(var_65_bool, var_66_int, var_67_int); // 0x186 NEW_2
	if(var_65_bool == 0) goto Label_396; // 0x188 JumpB
	var_68_int = 0; // 0x189 PushI
	AddItem(var_64_bool, var_60_string, var_68_int); // 0x18a ObjFunc
	
Label_396:
	return 2; // 0x18c Return
}


func_521(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x209 PushV
	var_43_int = 0; // 0x20a MovI
	
Label_523:
	var_45_string = "all"; // 0x20b PushS
	var_46_string = ""; var_47_int = 0; // 0x20c PushV
	var_47_int = var_43_int; // 0x20d Mov
	func_514(var_46_string, var_47_int); // 0x20e NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x210 Func
	var_51_bool = var_44_bool == 0; // 0x212 Not
	if(var_51_bool == 0) goto Label_533; // 0x213 JumpB
	goto Label_536; // 0x214 Jump
	
Label_536:
	var_40_int = var_43_int; // 0x218 Mov
	return 4; // 0x219 Return
	
Label_533:
	var_52_int = 1; // 0x215 PushI
	var_43_int = var_43_int + var_52_int; // 0x216 Add2
	goto Label_523; // 0x217 Jump
}


func_397(var_38_string, var_39_int, var_40_int, var_41_int)
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0; // 0x18d PushV
	var_46_bool = 0; var_47_int = 0; var_48_int = 0; // 0x18e PushV
	var_47_int = var_39_int; // 0x18f Mov
	var_48_int = var_40_int; // 0x190 Mov
	func_418(var_46_bool, var_47_int, var_48_int); // 0x191 NEW_2
	if(var_46_bool == 0) goto Label_411; // 0x193 JumpB
	irand(var_44_int, var_41_int); // 0x194 Func
	var_51_int = 0; // 0x196 PushI
	var_52_int = 1; // 0x197 PushI
	var_53_int = var_41_int + var_52_int; // 0x198 Add
	AddItem(var_45_bool, var_38_string, var_51_int, var_53_int); // 0x199 ObjFunc
	
Label_411:
	return 4; // 0x19b Return
}


func_149(var_0_bool, var_1_int, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x95 PushV
	var_18_bool = var_4_bool == 0; // 0x96 NullEq
	if(var_18_bool == 0) goto Label_154; // 0x97 JumpB
	var_15_bool = 0; // 0x98 MovB
	return 2; // 0x99 Return
	
Label_154:
	var_19_float = 0; var_20_object = Obj(); // 0x9a PushV
	var_20_object = var_4_bool; // 0x9b MovT
	func_287(var_20_object); // 0x9c NEW_2
	var_17_float = sqrt(var_19_float); // 0x9e Sqrt2
	var_27_int = var_2_int; // 0x9f PushT
	if(var_27_int == 0) goto Label_162; // 0xa0 JumpB
	var_17_float = var_17_float - var_1_int; // 0xa1 Sub2
	
Label_162:
	var_15_bool = var_17_float < var_0_bool; // 0xa2 LT2
	return 2; // 0xa3 Return
}


func_280(var_65_bool)
{
	var_65_bool = 1; // 0x118 MovB
	return 0; // 0x119 Return
}


func_282()
{
	StopAnimation(); // 0x11a Func
	StopGroup0(); // 0x11c Func
	return 0; // 0x11e Return
}


func_538(var_134_bool)
{
	var_134_bool = 0; // 0x21a MovB
	return 0; // 0x21b Return
}


func_412(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x19c PushV
	self(var_35_object); // 0x19d Func
	var_33_object = var_35_object; // 0x19f Mov
	return 2; // 0x1a0 Return
}


func_287(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x11f PushV
	GetPosition(var_24_cvector); // 0x120 Func
	GetPosition(var_25_cvector); // 0x122 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x124 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x125 Or2
	return 6; // 0x126 Return
}


func_418(var_46_bool, var_47_int, var_48_int)
{
	var_49_int = 0; var_50_int = 0; // 0x1a2 PushV
	irand(var_50_int, var_48_int); // 0x1a3 Func
	var_46_bool = var_50_int < var_47_int; // 0x1a5 LT2
	return 2; // 0x1a6 Return
}


func_295(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x127 PushV
	IsLoaded(var_14_bool); // 0x128 Func
	var_12_bool = var_14_bool; // 0x12a Mov
	return 2; // 0x12b Return
}


func_423(var_16_int)
{
	var_17_float = 0; var_18_float = 0; // 0x1a7 PushV
	GetGameTime(var_18_float); // 0x1a8 Func
	var_19_int = 1; // 0x1aa PushI
	var_20_int = 0; // 0x1ab PushV
	var_21_int = 24; // 0x1ac PushI
	var_20_int = var_18_float / var_18_float; // 0x1ad Div2
	var_16_int = var_19_int + var_20_int; // 0x1ae Add2
	return 2; // 0x1af Return
}


func_300(var_101_bool, var_102_object)
{
	var_103_bool = 0; var_104_object = Obj(); var_105_float = 0; // 0x12d PushV
	var_104_object = var_102_object; // 0x12e Mov
	var_105_float = 70; // 0x12f MovI
	func_308(var_104_object, var_105_float); // 0x130 NEW_2
	var_101_bool = var_103_bool; // 0x131 Mov
	return 0; // 0x133 Return
}


func_432(var_30_bool, var_31_object)
{
	var_37_object = Obj(); var_38_string = ""; var_39_int = 0; var_40_int = 0; var_41_int = 0; // 0x1b1 PushV
	var_37_object = var_31_object; // 0x1b2 Mov
	var_38_string = "coffee"; // 0x1b3 MovS
	var_39_int = 1; // 0x1b4 MovI
	var_40_int = 1; // 0x1b5 MovI
	var_41_int = 2; // 0x1b6 MovI
	func_397(var_38_string, var_39_int, var_40_int, var_41_int); // 0x1b7 NEW_2
	var_54_object = Obj(); var_55_string = ""; var_56_int = 0; var_57_int = 0; var_58_int = 0; // 0x1b9 PushV
	var_54_object = var_31_object; // 0x1ba Mov
	var_55_string = "tvirin"; // 0x1bb MovS
	var_56_int = 1; // 0x1bc MovI
	var_57_int = 1; // 0x1bd MovI
	var_58_int = 2; // 0x1be MovI
	func_397(var_55_string, var_56_int, var_57_int, var_58_int); // 0x1bf NEW_2
	var_59_object = Obj(); var_60_string = ""; var_61_int = 0; var_62_int = 0; // 0x1c1 PushV
	var_59_object = var_31_object; // 0x1c2 Mov
	var_60_string = "silver_ring"; // 0x1c3 MovS
	var_61_int = 1; // 0x1c4 MovI
	var_62_int = 2; // 0x1c5 MovI
	func_386(var_60_string, var_61_int, var_62_int); // 0x1c6 NEW_2
	var_69_object = Obj(); var_70_string = ""; var_71_int = 0; var_72_int = 0; // 0x1c8 PushV
	var_69_object = var_31_object; // 0x1c9 Mov
	var_70_string = "gold_ring"; // 0x1ca MovS
	var_71_int = 1; // 0x1cb MovI
	var_72_int = 2; // 0x1cc MovI
	func_386(var_70_string, var_71_int, var_72_int); // 0x1cd NEW_2
	var_73_object = Obj(); var_74_string = ""; var_75_int = 0; var_76_int = 0; // 0x1cf PushV
	var_73_object = var_31_object; // 0x1d0 Mov
	var_74_string = "bracelet"; // 0x1d1 MovS
	var_75_int = 1; // 0x1d2 MovI
	var_76_int = 2; // 0x1d3 MovI
	func_386(var_74_string, var_75_int, var_76_int); // 0x1d4 NEW_2
	var_77_object = Obj(); var_78_string = ""; var_79_int = 0; var_80_int = 0; // 0x1d6 PushV
	var_77_object = var_31_object; // 0x1d7 Mov
	var_78_string = "watch"; // 0x1d8 MovS
	var_79_int = 1; // 0x1d9 MovI
	var_80_int = 2; // 0x1da MovI
	func_386(var_78_string, var_79_int, var_80_int); // 0x1db NEW_2
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; var_84_int = 0; // 0x1dd PushV
	var_81_object = var_31_object; // 0x1de Mov
	var_82_string = "beads"; // 0x1df MovS
	var_83_int = 1; // 0x1e0 MovI
	var_84_int = 2; // 0x1e1 MovI
	func_386(var_82_string, var_83_int, var_84_int); // 0x1e2 NEW_2
	var_85_object = Obj(); var_86_string = ""; var_87_int = 0; var_88_int = 0; // 0x1e4 PushV
	var_85_object = var_31_object; // 0x1e5 Mov
	var_86_string = "ear_ring"; // 0x1e6 MovS
	var_87_int = 1; // 0x1e7 MovI
	var_88_int = 2; // 0x1e8 MovI
	func_386(var_86_string, var_87_int, var_88_int); // 0x1e9 NEW_2
	var_89_object = Obj(); var_90_string = ""; var_91_int = 0; var_92_int = 0; // 0x1eb PushV
	var_89_object = var_31_object; // 0x1ec Mov
	var_90_string = "flower"; // 0x1ed MovS
	var_91_int = 1; // 0x1ee MovI
	var_92_int = 2; // 0x1ef MovI
	func_386(var_90_string, var_91_int, var_92_int); // 0x1f0 NEW_2
	var_93_object = Obj(); var_94_string = ""; var_95_int = 0; var_96_int = 0; // 0x1f2 PushV
	var_93_object = var_31_object; // 0x1f3 Mov
	var_94_string = "hook"; // 0x1f4 MovS
	var_95_int = 1; // 0x1f5 MovI
	var_96_int = 4; // 0x1f6 MovI
	func_386(var_94_string, var_95_int, var_96_int); // 0x1f7 NEW_2
	var_97_object = Obj(); var_98_string = ""; var_99_int = 0; var_100_int = 0; // 0x1f9 PushV
	var_97_object = var_31_object; // 0x1fa Mov
	var_98_string = "morfin"; // 0x1fb MovS
	var_99_int = 1; // 0x1fc MovI
	var_100_int = 4; // 0x1fd MovI
	func_386(var_98_string, var_99_int, var_100_int); // 0x1fe NEW_2
	var_30_bool = 1; // 0x200 MovB
	return 0; // 0x201 Return
}


func_308(var_103_bool, var_105_float)
{
	var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_bool = 0; var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_bool = 0; // 0x134 PushV
	GetPosition(var_115_cvector); // 0x135 ObjFunc
	GetEyesHeight(var_114_float); // 0x137 ObjFunc
	var_122_float = GetByIndex(var_115_cvector, 1); // 0x139 PushE
	var_122_float = var_122_float + var_114_float; // 0x13a Add2
	SetByIndex(var_115_cvector, 1) = var_122_float; // 0x13b PopE
	GetPosition(var_116_cvector); // 0x13c Func
	GetEyesHeight(var_114_float); // 0x13e Func
	var_123_float = GetByIndex(var_116_cvector, 1); // 0x140 PushE
	var_123_float = var_123_float + var_114_float; // 0x141 Add2
	SetByIndex(var_116_cvector, 1) = var_123_float; // 0x142 PopE
	var_117_cvector = var_115_cvector - var_116_cvector; // 0x143 Sub2
	var_124_float = GetByIndex(var_117_cvector, 1); // 0x144 PushE
	var_124_float = 0; // 0x145 MovI
	SetByIndex(var_117_cvector, 1) = var_124_float; // 0x146 PopE
	var_125_int = var_117_cvector | var_117_cvector; // 0x147 Or
	var_126_float = sqrt(var_125_int); // 0x148 Sqrt
	var_117_cvector = var_117_cvector / var_117_cvector; // 0x149 Div2
	var_118_cvector = -var_117_cvector; // 0x14a Neg2
	var_127_float = var_117_cvector * var_105_float; // 0x14b Mult
	var_128_cvector = CVector(0.0, 10.0, 0.0); // 0x14c PushVec
	var_119_cvector = var_127_float - var_128_cvector; // 0x14d Sub2
	var_120_cvector = var_116_cvector + var_119_cvector; // 0x14e Add2
	IsOverrideActive(var_121_bool); // 0x14f Func
	var_129_bool = var_121_bool; // 0x151 Push
	if(var_129_bool == 0) goto Label_341; // 0x152 JumpB
	var_103_bool = 0; // 0x153 MovB
	return 16; // 0x154 Return
	
Label_341:
	StopWorld(); // 0x155 Func
	CameraTransit(var_120_cvector, var_118_cvector); // 0x157 Func
	var_130_float = GetByIndex(var_119_cvector, 0); // 0x159 PushE
	var_131_float = GetByIndex(var_119_cvector, 2); // 0x15a PushE
	Rotate(var_130_float, var_131_float); // 0x15b Func
	CameraWaitForPlayFinish(); // 0x15d Func
	ResumeWorld(); // 0x15f Func
	var_103_bool = 1; // 0x161 MovB
	return 16; // 0x162 Return
}


func_187(var_2_int, var_3_bool)
{
	func_282(); // 0xbc NEW_2
	var_12_int = 10; // 0xbe PushI
	KillTimer(var_12_int); // 0xbf Func
	var_13_int = var_2_int; // 0xc1 PushT
	if(var_13_int == 0) goto Label_199; // 0xc2 JumpB
	var_14_string = "head"; // 0xc3 PushS
	UnlookAsync(var_14_string); // 0xc4 Func
	var_2_int = 0; // 0xc6 TMovB
	
Label_199:
	var_3_bool = 1; // 0xc7 TMovB
	return 0; // 0xc8 Return
}


func_201()
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_float = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_float = 0; var_37_bool = 0; // 0xc9 PushV
	WaitForAnimEnd(); // 0xca Func
	var_38_bool = 0; // 0xcc PushV
	func_295(var_38_bool); // 0xcd NEW_2
	var_39_bool = var_38_bool == 0; // 0xcf Not
	if(var_39_bool == 0) goto Label_210; // 0xd0 JumpB
	return 14; // 0xd1 Return
	
Label_210:
	var_40_int = 0; // 0xd2 PushV
	func_521(var_40_int); // 0xd3 NEW_2
	var_31_int = var_40_int; // 0xd4 Mov
	var_32_int = 0; // 0xd6 MovI
	
Label_215:
	var_53_bool = 0; // 0xd7 PushV
	var_53_bool = 0; // 0xd8 MovB
	var_54_int = 5; // 0xd9 PushI
	var_55_bool = var_32_int < var_54_int; // 0xda LT
	if(var_55_bool == 0) goto Label_225; // 0xdb JumpB
	var_56_bool = 0; // 0xdc PushV
	func_295(var_56_bool); // 0xdd NEW_2
	if(var_56_bool == 0) goto Label_225; // 0xdf JumpB
	var_53_bool = 1; // 0xe0 MovB
	
Label_225:
	if(var_53_bool == 0) goto Label_277; // 0xe1 JumpB
	var_57_int = 3; // 0xe2 PushI
	irand(var_33_int, var_57_int); // 0xe3 Func
	var_58_int = 0; // 0xe5 PushI
	var_59_bool = var_33_int == var_58_int; // 0xe6 Eq
	if(var_59_bool == 0) goto Label_249; // 0xe7 JumpB
	var_60_int = var_31_int; // 0xe8 Push
	if(var_60_int == 0) goto Label_248; // 0xe9 JumpB
	irand(var_34_int, var_31_int); // 0xea Func
	var_61_string = "all"; // 0xec PushS
	var_62_string = ""; var_63_int = 0; // 0xed PushV
	var_63_int = var_34_int; // 0xee Mov
	func_514(var_62_string, var_63_int); // 0xef NEW_2
	PlayAnimation(var_61_string, var_62_string); // 0xf1 Func
	WaitForAnimEnd(var_35_bool); // 0xf3 Func
	var_64_bool = var_35_bool == 0; // 0xf5 Not
	if(var_64_bool == 0) goto Label_248; // 0xf6 JumpB
	goto Label_277; // 0xf7 Jump
	
Label_277:
	ResetAAS(); // 0x115 Func
	return 14; // 0x117 Return
	
Label_248:
	goto Label_266; // 0xf8 Jump
	
Label_266:
	var_65_bool = 0; // 0x10a PushV
	func_280(var_65_bool); // 0x10b NEW_2
	var_66_bool = var_65_bool == 0; // 0x10d Not
	if(var_66_bool == 0) goto Label_272; // 0x10e JumpB
	goto Label_277; // 0x10f Jump
	
Label_272:
	ResetAAS(); // 0x110 Func
	var_67_int = 1; // 0x112 PushI
	var_32_int = var_32_int + var_67_int; // 0x113 Add2
	goto Label_215; // 0x114 Jump
	
Label_249:
	var_68_int = 1; // 0xf9 PushI
	var_69_bool = var_33_int == var_68_int; // 0xfa Eq
	if(var_69_bool == 0) goto Label_263; // 0xfb JumpB
	var_70_int = 4; // 0xfc PushI
	rand(var_36_float, var_70_int); // 0xfd Func
	var_71_int = 1; // 0xff PushI
	var_72_int = var_36_float + var_71_int; // 0x100 Add
	Sleep(var_72_int, var_37_bool); // 0x101 Func
	var_73_bool = var_37_bool == 0; // 0x103 Not
	if(var_73_bool == 0) goto Label_262; // 0x104 JumpB
	goto Label_277; // 0x105 Jump
	
Label_262:
	goto Label_266; // 0x106 Jump
	
Label_263:
	var_74_int = var_32_int; // 0x107 Push
	if(var_74_int == 0) goto Label_266; // 0x108 JumpB
	goto Label_277; // 0x109 Jump
}


func_355()
{
	CameraSwitchToNormal(); // 0x164 Func
	return 0; // 0x166 Return
}


func_102()
{
	var_26_int = 0; var_27_int = 0; // 0x66 PushV
	var_28_int = 0; // 0x67 PushV
	func_423(var_28_int); // 0x68 NEW_2
	var_27_int = var_28_int; // 0x69 Mov
	var_29_int = 0; // 0x6b PushI
	ClearSubContainer(var_29_int); // 0x6c Func
	var_30_bool = 0; var_31_object = Obj(); var_32_int = 0; // 0x6e PushV
	var_33_object = Obj(); // 0x6f PushV
	func_412(var_33_object); // 0x70 NEW_2
	var_31_object = var_33_object; // 0x71 Mov
	var_36_int = 0; // 0x73 PushV
	func_423(var_36_int); // 0x74 NEW_2
	var_32_int = var_36_int; // 0x75 Mov
	func_432(var_31_object, var_32_int); // 0x77 NEW_2
	return 2; // 0x79 Return
}


func_359(var_135_string)
{
	var_136_bool = 0; var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_float = 0; var_141_float = 0; // 0x167 PushV
	lshHasAnimation(var_139_bool, var_135_string); // 0x168 Func
	var_142_bool = var_139_bool; // 0x16a Push
	if(var_142_bool == 0) goto Label_370; // 0x16b JumpB
	lshGetAnimTimes(var_135_string, var_140_float, var_141_float); // 0x16c Func
	var_143_bool = 0; // 0x16e PushB
	lshPlayAnimation(var_140_float, var_141_float, var_143_bool); // 0x16f Func
	goto Label_374; // 0x171 Jump
	
Label_374:
	return 6; // 0x176 Return
	
Label_370:
	var_144_string = "Can't find lsh animation : "; // 0x172 PushS
	var_145_int = var_144_string + var_135_string; // 0x173 Add
	Trace(var_145_int); // 0x174 Func
}


func_375(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x177 PushV
	GetEyesHeight(var_32_float); // 0x178 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x17a MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x17b PushE
	var_34_float = var_32_float; // 0x17c Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x17d PopE
	var_35_string = "head"; // 0x17e PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x17f Func
	return 4; // 0x181 Return
}


func_122(var_0_bool, var_1_int, var_2_int, var_3_bool, var_11_float, var_17_float, var_18_float)
{
	var_19_bool = 0; // 0x7b PushV
	func_295(var_19_bool); // 0x7c NEW_2
	var_20_bool = var_19_bool == 0; // 0x7e Not
	if(var_20_bool == 0) goto Label_129; // 0x7f JumpB
	return 0; // 0x80 Return
	
Label_129:
	var_21_string = "player"; // 0x81 PushS
	FindActor(var_11_float, var_21_string); // 0x82 Func
	var_2_int = 0; // 0x84 TMovB
	var_3_bool = 0; // 0x85 TMovB
	var_0_bool = var_17_float; // 0x86 TMov
	var_1_int = var_18_float; // 0x87 TMov
	var_22_int = 10; // 0x88 PushI
	var_23_float = 1.0; // 0x89 PushF
	SetTimer(var_22_int, var_23_float); // 0x8a Func
	func_201(); // 0x8d NEW_2
	var_75_bool = var_3_bool == 0; // 0x8f Not
	if(var_75_bool == 0) goto Label_148; // 0x90 JumpB
	var_76_int = 10; // 0x91 PushI
	KillTimer(var_76_int); // 0x92 Func
	
Label_148:
	return 0; // 0x94 Return
}


