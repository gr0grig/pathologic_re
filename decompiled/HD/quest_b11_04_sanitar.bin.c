event_7(var_0_int)
{
	var_1_object = Obj(); var_2_float = 0; var_3_object = Obj(); var_4_bool = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_object = Obj(); var_9_float = 0; var_10_object = Obj(); var_11_bool = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; // 0xca PushV
	var_15_int = 70; // 0xcb PushI
	var_16_bool = var_0_int != var_15_int; // 0xcc Neq
	if(var_16_bool == 0) goto Label_207; // 0xcd JumpB
	return 14; // 0xce Return
	
Label_207:
	var_17_object = GlobalVars[2]; // 0xcf PushGE
	var_18_bool = var_17_object == 0; // 0xd0 NullEq
	if(var_18_bool == 0) goto Label_211; // 0xd1 JumpB
	return 14; // 0xd2 Return
	
Label_211:
	var_19_object = GlobalVars[2]; // 0xd3 PushGE
	Intersect(var_8_object, var_9_float); // 0xd4 ObjFunc
	var_20_object = GlobalVars[2]; // 0xd6 PushGE
	var_21_bool = GlobalVars[1]; // 0xd7 PushGE
	if(var_21_bool == 0) goto Label_225; // 0xd8 JumpB
	var_22_float = 0; var_23_float = 0; var_24_float = 0; // 0xd9 PushV
	var_23_float = var_9_float; // 0xda Mov
	var_25_float = GlobalVars[0]; // 0xdb PushGE
	var_24_float = var_25_float; // 0xdc Mov
	func_132(var_22_float, var_23_float, var_24_float); // 0xde NEW_2
	goto Label_226; // 0xe0 Jump
	
Label_226:
	SetLength(var_22_float); // 0xe2 ObjFunc
	
Label_228:
	Next(var_11_bool, var_10_object); // 0xe4 ObjFunc
	var_27_bool = var_11_bool; // 0xe6 Push
	if(var_27_bool == 0) goto Label_284; // 0xe7 JumpB
	var_28_bool = 0; // 0xe8 PushV
	var_28_bool = 0; // 0xe9 MovB
	var_29_bool = var_10_object != 0; // 0xea NullNeq
	if(var_29_bool == 0) goto Label_242; // 0xeb JumpB
	var_30_object = Obj(); // 0xec PushV
	func_126(var_30_object); // 0xed NEW_2
	var_33_bool = var_10_object != var_30_object; // 0xef Neq
	if(var_33_bool == 0) goto Label_242; // 0xf0 JumpB
	var_28_bool = 1; // 0xf1 MovB
	
Label_242:
	if(var_28_bool == 0) goto Label_283; // 0xf2 JumpB
	var_34_float = 0; var_35_object = Obj(); var_36_float = 0; var_37_int = 0; // 0xf3 PushV
	var_35_object = var_10_object; // 0xf4 Mov
	var_36_float = 0.1; // 0xf5 MovF
	var_37_int = 2; // 0xf6 MovI
	func_53(var_34_float, var_35_object, var_36_float, var_37_int); // 0xf7 NEW_2
	var_12_float = var_34_float; // 0xf8 Mov
	var_103_bool = 0; var_104_object = Obj(); var_105_string = ""; // 0xfa PushV
	var_104_object = var_10_object; // 0xfb Mov
	var_105_string = "disease"; // 0xfc MovS
	func_41(var_103_bool, var_104_object, var_105_string); // 0xfd NEW_2
	if(var_103_bool == 0) goto Label_269; // 0xff JumpB
	var_106_string = "disease"; // 0x100 PushS
	GetProperty(var_106_string, var_13_float); // 0x101 ObjFunc
	var_107_float = 0.02; // 0x103 PushF
	var_108_bool = var_13_float <= var_107_float; // 0x104 LE
	if(var_108_bool == 0) goto Label_264; // 0x105 JumpB
	var_13_float = 0; // 0x106 MovI
	goto Label_266; // 0x107 Jump
	
Label_266:
	var_109_string = "disease"; // 0x10a PushS
	SetProperty(var_109_string, var_13_float); // 0x10b ObjFunc
	
Label_269:
	var_110_bool = 0; var_111_object = Obj(); var_112_string = ""; // 0x10d PushV
	var_111_object = var_10_object; // 0x10e Mov
	var_112_string = "fire"; // 0x10f MovS
	func_41(var_110_bool, var_111_object, var_112_string); // 0x110 NEW_2
	if(var_110_bool == 0) goto Label_283; // 0x112 JumpB
	var_113_string = "fire"; // 0x113 PushS
	GetProperty(var_113_string, var_14_float); // 0x114 ObjFunc
	var_114_string = "fire"; // 0x116 PushS
	var_115_float = 0.1; // 0x117 PushF
	var_116_int = var_14_float + var_115_float; // 0x118 Add
	SetProperty(var_114_string, var_116_int); // 0x119 ObjFunc
	
Label_283:
	goto Label_228; // 0x11b Jump
	
Label_264:
	var_117_float = 0.02; // 0x108 PushF
	var_13_float = var_13_float - var_117_float; // 0x109 Sub2
	
Label_284:
	return 14; // 0x11c Return
	
Label_225:
	var_118_float = 0.05; // 0xe1 PushF
}


main()
{
	var_0_bool = 0; var_1_bool = 0; // 0x0 PushV
	func_167(); // 0x2 NEW_2
	var_21_string = "all"; // 0x4 PushS
	var_22_string = "attack_on"; // 0x5 PushS
	PlayAnimation(var_21_string, var_22_string); // 0x6 Func
	WaitForAnimEnd(var_1_bool); // 0x8 Func
	var_23_bool = 0; // 0xa PushV
	var_23_bool = 1; // 0xb MovB
	func_287(var_23_bool); // 0xc NEW_2
	
Label_14:
	var_56_string = "all"; // 0xe PushS
	var_57_string = "cattack"; // 0xf PushS
	PlayAnimation(var_56_string, var_57_string); // 0x10 Func
	WaitForAnimEnd(var_1_bool); // 0x12 Func
	goto Label_14; // 0x14 Jump
}


func_132(var_22_float, var_23_float, var_24_float)
{
	var_26_bool = var_23_float < var_24_float; // 0x85 LT
	if(var_26_bool == 0) goto Label_137; // 0x86 JumpB
	var_22_float = var_23_float; // 0x87 Mov
	goto Label_138; // 0x88 Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_137:
	var_22_float = var_24_float; // 0x89 Mov
}


func_36(var_90_bool, var_91_object)
{
	var_92_bool = 0; var_93_bool = 0; // 0x24 PushV
	IsPlayerActor(var_91_object, var_93_bool); // 0x25 Func
	var_90_bool = var_93_bool; // 0x27 Mov
	return 2; // 0x28 Return
}


func_167()
{
	var_2_float = 0; var_3_object = Obj(); var_4_object = Obj(); var_5_float = 0; var_6_object = Obj(); var_7_object = Obj(); // 0xa7 PushV
	GetAttackDistance(var_5_float); // 0xa8 Func
	var_8_float = GlobalVars[0]; // 0xaa PushGE
	var_9_float = 600.0; // 0xab PushF
	var_8_float = var_5_float / var_5_float; // 0xac Div2
	GlobalVars[0] = var_8_float; // 0xad PopGE
	GetScene(var_6_object); // 0xae Func
	var_10_string = "flame"; // 0xb0 PushS
	var_11_cvector = CVector(0.0, 0.0, 0.0); // 0xb1 PushVec
	AddActorByType(var_7_object, var_10_string, var_6_object, var_11_cvector); // 0xb2 Func
	var_12_object = Obj(); // 0xb4 PushV
	func_126(var_12_object); // 0xb5 NEW_2
	var_15_string = "flame"; // 0xb7 PushS
	Attach(var_12_object, var_15_string); // 0xb8 ObjFunc
	var_16_bool = GlobalVars[1]; // 0xba PushGE
	var_16_bool = 0; // 0xbb MovB
	GlobalVars[1] = var_16_bool; // 0xbc PopGE
	var_17_float = 0.05; // 0xbd PushF
	SetLength(var_17_float); // 0xbe ObjFunc
	var_18_object = GlobalVars[2]; // 0xc0 PushGE
	var_18_object = var_7_object; // 0xc1 Mov
	GlobalVars[2] = var_18_object; // 0xc2 PopGE
	var_19_int = 70; // 0xc3 PushI
	var_20_float = 0.1; // 0xc4 PushF
	SetTimer(var_19_int, var_20_float); // 0xc5 Func
	return 6; // 0xc7 Return
}


func_41(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0; // 0x29 PushV
	var_55_string = "HasProperty"; // 0x2a PushS
	var_56_int = 2; // 0x2b PushI
	var_57_bool = IsFuncExist(var_51_object, var_55_string, var_56_int); // 0x2c FuncExist
	var_58_bool = var_57_bool == 0; // 0x2d Not
	if(var_58_bool == 0) goto Label_49; // 0x2e JumpB
	var_50_bool = 0; // 0x2f MovB
	return 2; // 0x30 Return
	
Label_49:
	HasProperty(var_52_string, var_54_bool); // 0x31 ObjFunc
	var_50_bool = var_54_bool; // 0x33 Mov
	return 2; // 0x34 Return
}


func_139(var_84_float, var_85_float, var_86_float, var_87_float)
{
	var_88_bool = var_85_float < var_86_float; // 0x8c LT
	if(var_88_bool == 0) goto Label_144; // 0x8d JumpB
	var_84_float = var_86_float; // 0x8e Mov
	return 0; // 0x8f Return
	
Label_144:
	var_89_bool = var_85_float > var_87_float; // 0x90 GT
	if(var_89_bool == 0) goto Label_148; // 0x91 JumpB
	var_84_float = var_87_float; // 0x92 Mov
	return 0; // 0x93 Return
	
Label_148:
	var_84_float = var_85_float; // 0x94 Mov
	return 0; // 0x95 Return
}


func_53(var_34_float, var_35_object, var_36_float, var_37_int)
{
	var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_int = 0; var_45_string = ""; var_46_int = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0x35 PushV
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0x36 PushV
	var_51_object = var_35_object; // 0x37 Mov
	var_52_string = "health"; // 0x38 MovS
	func_41(var_50_bool, var_51_object, var_52_string); // 0x39 NEW_2
	var_59_bool = var_50_bool == 0; // 0x3b Not
	if(var_59_bool == 0) goto Label_63; // 0x3c JumpB
	var_34_float = 0.0; // 0x3d MovF
	return 12; // 0x3e Return
	
Label_63:
	var_60_bool = 0; var_61_object = Obj(); var_62_string = ""; // 0x3f PushV
	var_61_object = var_35_object; // 0x40 Mov
	var_62_string = "armor"; // 0x41 MovS
	func_41(var_60_bool, var_61_object, var_62_string); // 0x42 NEW_2
	var_63_bool = var_60_bool == 0; // 0x44 Not
	if(var_63_bool == 0) goto Label_72; // 0x45 JumpB
	var_44_int = 0; // 0x46 MovI
	goto Label_75; // 0x47 Jump
	
Label_75:
	var_64_string = "armor_"; // 0x4b PushS
	var_65_string = ""; var_66_int = 0; // 0x4c PushV
	var_66_int = var_37_int; // 0x4d Mov
	func_22(var_65_string, var_66_int); // 0x4e NEW_2
	var_45_string = var_64_string + var_65_string; // 0x50 Add2
	var_71_bool = 0; var_72_object = Obj(); var_73_string = ""; // 0x51 PushV
	var_72_object = var_35_object; // 0x52 Mov
	var_73_string = var_45_string; // 0x53 Mov
	func_41(var_71_bool, var_72_object, var_73_string); // 0x54 NEW_2
	var_74_bool = var_71_bool == 0; // 0x56 Not
	if(var_74_bool == 0) goto Label_90; // 0x57 JumpB
	var_46_int = 0; // 0x58 MovI
	goto Label_92; // 0x59 Jump
	
Label_92:
	var_75_float = 0; var_76_float = 0; var_77_float = 0; // 0x5c PushV
	var_78_int = var_44_int + var_46_int; // 0x5d Add
	var_79_float = 100.0; // 0x5e PushF
	var_76_float = var_78_int / var_78_int; // 0x5f Div2
	var_77_float = 1; // 0x60 MovI
	func_132(var_75_float, var_76_float, var_77_float); // 0x61 NEW_2
	var_47_float = var_75_float; // 0x62 Mov
	var_80_string = "health"; // 0x64 PushS
	GetProperty(var_80_string, var_48_float); // 0x65 ObjFunc
	var_81_int = 1; // 0x67 PushI
	var_82_int = var_81_int - var_47_float; // 0x68 Sub
	var_49_float = var_36_float * var_82_int; // 0x69 Mult2
	var_83_string = "health"; // 0x6a PushS
	var_84_float = 0; var_85_float = 0; var_86_float = 0; var_87_float = 0; // 0x6b PushV
	var_85_float = var_48_float - var_49_float; // 0x6c Sub2
	var_86_float = 0; // 0x6d MovI
	var_87_float = 1; // 0x6e MovI
	func_139(var_84_float, var_85_float, var_86_float, var_87_float); // 0x6f NEW_2
	SetProperty(var_83_string, var_84_float); // 0x71 ObjFunc
	var_90_bool = 0; var_91_object = Obj(); // 0x73 PushV
	var_91_object = var_35_object; // 0x74 Mov
	func_36(var_90_bool, var_91_object); // 0x75 NEW_2
	if(var_90_bool == 0) goto Label_124; // 0x77 JumpB
	var_94_float = 0; // 0x78 PushV
	var_94_float = -var_49_float; // 0x79 Neg2
	func_150(var_94_float); // 0x7a NEW_2
	
Label_124:
	var_34_float = var_49_float; // 0x7c Mov
	return 12; // 0x7d Return
	
Label_90:
	GetProperty(var_45_string, var_46_int); // 0x5a ObjFunc
	
Label_72:
	var_102_string = "armor"; // 0x48 PushS
	GetProperty(var_102_string, var_44_int); // 0x49 ObjFunc
}


func_22(var_65_string, var_66_int)
{
	var_67_int = 2; // 0x17 PushI
	var_68_bool = var_66_int == var_67_int; // 0x18 Eq
	if(var_68_bool == 0) goto Label_29; // 0x19 JumpB
	var_65_string = "fire"; // 0x1a MovS
	return 0; // 0x1b Return
	
Label_29:
	var_69_int = 1; // 0x1d PushI
	var_70_bool = var_66_int == var_69_int; // 0x1e Eq
	if(var_70_bool == 0) goto Label_34; // 0x1f JumpB
	var_65_string = "bullet"; // 0x20 MovS
	return 0; // 0x21 Return
	
Label_34:
	var_65_string = "phys"; // 0x22 MovS
	return 0; // 0x23 Return
}


func_150(var_94_float)
{
	var_95_object = Obj(); var_96_object = Obj(); // 0x96 PushV
	CreateFloatVector(var_96_object); // 0x97 Func
	add(var_94_float); // 0x99 ObjFunc
	var_97_int = 0; // 0x9b PushI
	var_98_bool = var_94_float < var_97_int; // 0x9c LT
	if(var_98_bool == 0) goto Label_162; // 0x9d JumpB
	var_99_float = 0.7; // 0x9e PushF
	var_100_int = 500; // 0x9f PushI
	RumblePlay(var_99_float, var_100_int); // 0xa0 Func
	
Label_162:
	var_101_int = 15; // 0xa2 PushI
	SendWorldWndMessage(var_101_int, var_96_object); // 0xa3 Func
	return 2; // 0xa5 Return
}


func_126(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x7e PushV
	self(var_14_object); // 0x7f Func
	var_12_object = var_14_object; // 0x81 Mov
	return 2; // 0x82 Return
}


func_287(var_23_bool)
{
	var_24_float = 0; var_25_float = 0; var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_object = Obj(); var_32_cvector = CVector(0,0,0); var_33_float = 0; // 0x11f PushV
	var_34_bool = var_23_bool; // 0x120 Push
	if(var_34_bool == 0) goto Label_294; // 0x121 JumpB
	var_35_float = GlobalVars[0]; // 0x122 PushGE
	var_29_float = var_35_float; // 0x123 Mov
	goto Label_295; // 0x125 Jump
	
Label_295:
	var_36_object = GlobalVars[2]; // 0x127 PushGE
	GetLength(var_30_float); // 0x128 ObjFunc
	var_37_bool = var_29_float < var_30_float; // 0x12a LT
	if(var_37_bool == 0) goto Label_301; // 0x12b JumpB
	var_30_float = var_29_float; // 0x12c Mov
	
Label_301:
	var_38_object = GlobalVars[2]; // 0x12d PushGE
	SetLength(var_30_float); // 0x12e ObjFunc
	var_39_bool = GlobalVars[1]; // 0x130 PushGE
	var_40_bool = var_39_bool != var_23_bool; // 0x131 Neq
	if(var_40_bool == 0) goto Label_342; // 0x132 JumpB
	var_41_bool = var_23_bool; // 0x133 Push
	if(var_41_bool == 0) goto Label_332; // 0x134 JumpB
	var_42_object = GlobalVars[3]; // 0x135 PushGE
	var_43_bool = var_42_object == 0; // 0x136 NullEq
	if(var_43_bool == 0) goto Label_327; // 0x137 JumpB
	var_32_cvector = CVector(0.0, 0.0, 0.0); // 0x138 MovV
	GetHeight(var_33_float); // 0x139 Func
	var_44_float = GetByIndex(var_32_cvector, 1); // 0x13b PushE
	var_44_float = var_33_float; // 0x13c Mov
	SetByIndex(var_32_cvector, 1) = var_44_float; // 0x13d PopE
	var_45_string = "flame_loop"; // 0x13e PushS
	var_46_int = 0; // 0x13f PushI
	var_47_int = 200; // 0x140 PushI
	PlayLoopedGlobalSound(var_31_object, var_45_string, var_32_cvector, var_46_int, var_47_int); // 0x141 Func
	var_48_object = GlobalVars[3]; // 0x143 PushGE
	var_48_object = var_31_object; // 0x144 Mov
	GlobalVars[3] = var_48_object; // 0x145 PopGE
	var_31_object = 0; // 0x146 SetNull
	
Label_327:
	var_49_object = GlobalVars[3]; // 0x147 PushGE
	var_50_int = 2; // 0x148 PushI
	FadeIn(var_50_int); // 0x149 ObjFunc
	goto Label_339; // 0x14b Jump
	
Label_339:
	var_51_bool = GlobalVars[1]; // 0x153 PushGE
	var_51_bool = var_23_bool; // 0x154 Mov
	GlobalVars[1] = var_51_bool; // 0x155 PopGE
	
Label_342:
	return 10; // 0x156 Return
	
Label_332:
	var_52_object = GlobalVars[3]; // 0x14c PushGE
	var_53_bool = var_52_object != 0; // 0x14d NullNeq
	if(var_53_bool == 0) goto Label_339; // 0x14e JumpB
	var_54_object = GlobalVars[3]; // 0x14f PushGE
	var_55_int = 2; // 0x150 PushI
	FadeOut(var_55_int); // 0x151 ObjFunc
	
Label_294:
	var_29_float = 0.05; // 0x126 MovF
}


