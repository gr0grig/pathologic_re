event_6()
{
	var_0_object = Obj(); // 0x101 PushV
	func_209(var_0_object); // 0x102 NEW_2
	RemoveActor(var_0_object); // 0x104 Func
	Hold(); // 0x106 Func
	return 0; // 0x108 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	
Label_1:
	var_2_object = Obj(); // 0x1 PushV
	func_89(var_2_object); // 0x2 NEW_2
	var_1_object = var_2_object; // 0x3 Mov
	
Label_5:
	var_6_bool = 0; var_7_object = Obj(); // 0x5 PushV
	var_7_object = var_1_object; // 0x6 Mov
	func_236(var_6_bool, var_7_object); // 0x7 NEW_2
	if(var_6_bool == 0) goto Label_17; // 0x9 JumpB
	var_19_object = Obj(); // 0xa PushV
	var_19_object = var_1_object; // 0xb Mov
	TaskCall(1); // 0xc TaskCall
	func_23(var_19_object); // 0xd NEW_2
	TaskReturn(); // 0xe TaskReturn
	goto Label_5; // 0x10 Jump
	
Label_17:
	var_115_int = 1; // 0x11 PushI
	Sleep(var_115_int); // 0x12 Func
	var_1_object = 0; // 0x14 SetNull
	goto Label_1; // 0x15 Jump
}


func_96(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_bool = 0; // 0x60 PushV
	IsPlayerActor(var_98_object, var_100_bool); // 0x61 Func
	var_97_bool = var_100_bool; // 0x63 Mov
	return 2; // 0x64 Return
}


func_89(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x59 PushV
	var_5_string = "player"; // 0x5a PushS
	FindActor(var_4_object, var_5_string); // 0x5b Func
	var_2_object = var_4_object; // 0x5d Mov
	return 2; // 0x5e Return
}


func_226(var_101_float)
{
	var_102_object = Obj(); var_103_object = Obj(); // 0xe2 PushV
	CreateFloatVector(var_103_object); // 0xe3 Func
	add(var_101_float); // 0xe5 ObjFunc
	var_104_int = 14; // 0xe7 PushI
	SendWorldWndMessage(var_104_int, var_103_object); // 0xe8 Func
	return 2; // 0xea Return
}


func_101(var_48_bool, var_49_object, var_50_string)
{
	var_51_bool = 0; var_52_bool = 0; // 0x65 PushV
	var_53_string = "HasProperty"; // 0x66 PushS
	var_54_int = 2; // 0x67 PushI
	var_55_bool = IsFuncExist(var_49_object, var_53_string, var_54_int); // 0x68 FuncExist
	var_56_bool = var_55_bool == 0; // 0x69 Not
	if(var_56_bool == 0) goto Label_109; // 0x6a JumpB
	var_48_bool = 0; // 0x6b MovB
	return 2; // 0x6c Return
	
Label_109:
	HasProperty(var_50_string, var_52_bool); // 0x6d ObjFunc
	var_48_bool = var_52_bool; // 0x6f Mov
	return 2; // 0x70 Return
}


func_135(var_41_float, var_42_object, var_43_float)
{
	var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0; // 0x87 PushV
	var_48_bool = 0; var_49_object = Obj(); var_50_string = ""; // 0x88 PushV
	var_49_object = var_42_object; // 0x89 Mov
	var_50_string = "disease"; // 0x8a MovS
	func_101(var_48_bool, var_49_object, var_50_string); // 0x8b NEW_2
	var_57_bool = var_48_bool == 0; // 0x8d Not
	if(var_57_bool == 0) goto Label_145; // 0x8e JumpB
	var_41_float = 0; // 0x8f MovI
	return 4; // 0x90 Return
	
Label_145:
	var_46_float = 0; // 0x91 MovI
	var_58_bool = 0; var_59_object = Obj(); var_60_string = ""; // 0x92 PushV
	var_59_object = var_42_object; // 0x93 Mov
	var_60_string = "armor_disease"; // 0x94 MovS
	func_101(var_58_bool, var_59_object, var_60_string); // 0x95 NEW_2
	if(var_58_bool == 0) goto Label_157; // 0x97 JumpB
	var_61_string = "armor_disease"; // 0x98 PushS
	GetProperty(var_61_string, var_46_float); // 0x99 ObjFunc
	var_62_int = 100; // 0x9b PushI
	var_46_float = var_46_float / var_46_float; // 0x9c Div2
	
Label_157:
	var_63_bool = 0; var_64_object = Obj(); var_65_string = ""; // 0x9d PushV
	var_64_object = var_42_object; // 0x9e Mov
	var_65_string = "immunity"; // 0x9f MovS
	func_101(var_63_bool, var_64_object, var_65_string); // 0xa0 NEW_2
	if(var_63_bool == 0) goto Label_175; // 0xa2 JumpB
	var_66_string = "immunity"; // 0xa3 PushS
	GetProperty(var_66_string, var_47_float); // 0xa4 ObjFunc
	var_46_float = var_46_float + var_47_float; // 0xa6 Add2
	var_67_bool = 0; var_68_object = Obj(); var_69_string = ""; var_70_float = 0; var_71_float = 0; var_72_float = 0; // 0xa7 PushV
	var_68_object = var_42_object; // 0xa8 Mov
	var_69_string = "immunity"; // 0xa9 MovS
	var_70_float = -var_43_float; // 0xaa Neg2
	var_71_float = 0; // 0xab MovI
	var_72_float = 1; // 0xac MovI
	func_113(var_67_bool, var_68_object, var_69_string, var_70_float, var_71_float, var_72_float); // 0xad NEW_2
	
Label_175:
	var_85_int = 1; // 0xaf PushI
	var_86_bool = var_46_float >= var_85_int; // 0xb0 GE
	if(var_86_bool == 0) goto Label_180; // 0xb1 JumpB
	var_41_float = 0.0; // 0xb2 MovF
	return 4; // 0xb3 Return
	
Label_180:
	var_87_int = 1; // 0xb4 PushI
	var_88_int = var_87_int - var_46_float; // 0xb5 Sub
	var_89_int = 2; // 0xb6 PushI
	var_90_float = var_88_int / var_89_int; // 0xb7 Div
	var_43_float = var_43_float * var_90_float; // 0xb8 Mult2
	var_91_bool = 0; var_92_object = Obj(); var_93_string = ""; var_94_float = 0; var_95_float = 0; var_96_float = 0; // 0xb9 PushV
	var_92_object = var_42_object; // 0xba Mov
	var_93_string = "disease"; // 0xbb MovS
	var_94_float = var_43_float; // 0xbc Mov
	var_95_float = 0; // 0xbd MovI
	var_96_float = 1; // 0xbe MovI
	func_113(var_91_bool, var_92_object, var_93_string, var_94_float, var_95_float, var_96_float); // 0xbf NEW_2
	var_97_bool = 0; var_98_object = Obj(); // 0xc1 PushV
	var_98_object = var_42_object; // 0xc2 Mov
	func_96(var_97_bool, var_98_object); // 0xc3 NEW_2
	if(var_97_bool == 0) goto Label_202; // 0xc5 JumpB
	var_101_float = 0; // 0xc6 PushV
	var_101_float = var_43_float; // 0xc7 Mov
	func_226(var_101_float); // 0xc8 NEW_2
	
Label_202:
	var_41_float = var_43_float; // 0xca Mov
	return 4; // 0xcb Return
}


func_204(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0xcc PushV
	IsLoaded(var_34_bool); // 0xcd Func
	var_32_bool = var_34_bool; // 0xcf Mov
	return 2; // 0xd0 Return
}


func_236(var_6_bool, var_7_object)
{
	var_6_bool = 0; // 0xed MovB
	var_8_object = var_7_object; // 0xee Push
	if(var_8_object == 0) goto Label_248; // 0xef JumpB
	var_9_float = 0; var_10_object = Obj(); // 0xf0 PushV
	var_10_object = var_7_object; // 0xf1 Mov
	func_81(var_10_object); // 0xf2 NEW_2
	var_17_float = 360000.0; // 0xf4 PushF
	var_18_bool = var_9_float < var_17_float; // 0xf5 LT
	if(var_18_bool == 0) goto Label_248; // 0xf6 JumpB
	var_6_bool = 1; // 0xf7 MovB
	
Label_248:
	return 0; // 0xf8 Return
}


func_113(var_67_bool, var_68_object, var_69_string, var_70_float, var_71_float, var_72_float)
{
	var_73_float = 0; var_74_float = 0; // 0x71 PushV
	var_75_bool = 0; var_76_object = Obj(); var_77_string = ""; // 0x72 PushV
	var_76_object = var_68_object; // 0x73 Mov
	var_77_string = var_69_string; // 0x74 Mov
	func_101(var_75_bool, var_76_object, var_77_string); // 0x75 NEW_2
	var_78_bool = var_75_bool == 0; // 0x77 Not
	if(var_78_bool == 0) goto Label_123; // 0x78 JumpB
	var_67_bool = 0; // 0x79 MovB
	return 2; // 0x7a Return
	
Label_123:
	GetProperty(var_69_string, var_74_float); // 0x7b ObjFunc
	var_79_float = 0; var_80_float = 0; var_81_float = 0; var_82_float = 0; // 0x7d PushV
	var_80_float = var_74_float + var_70_float; // 0x7e Add2
	var_81_float = var_71_float; // 0x7f Mov
	var_82_float = var_72_float; // 0x80 Mov
	func_215(var_79_float, var_80_float, var_81_float, var_82_float); // 0x81 NEW_2
	SetProperty(var_69_string, var_79_float); // 0x83 ObjFunc
	var_67_bool = 1; // 0x85 MovB
	return 2; // 0x86 Return
}


func_81(var_9_float)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); // 0x51 PushV
	GetPosition(var_14_cvector); // 0x52 Func
	GetPosition(var_15_cvector); // 0x54 ObjFunc
	var_16_cvector = var_15_cvector - var_14_cvector; // 0x56 Sub2
	var_9_float = var_16_cvector | var_16_cvector; // 0x57 Or2
	return 6; // 0x58 Return
}


func_209(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0xd1 PushV
	self(var_2_object); // 0xd2 Func
	var_0_object = var_2_object; // 0xd4 Mov
	return 2; // 0xd5 Return
}


func_23(var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_float = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_float = 0; // 0x17 PushV
	GetHeight(var_24_float); // 0x18 Func
	var_25_cvector = CVector(0.0, 0.0, 0.0); // 0x1a MovV
	var_28_float = GetByIndex(var_25_cvector, 1); // 0x1b PushE
	var_28_float = var_24_float; // 0x1c Mov
	SetByIndex(var_25_cvector, 1) = var_28_float; // 0x1d PopE
	var_29_string = "attack"; // 0x1e PushS
	PlayLoopedGlobalSound(var_26_object, var_29_string, var_25_cvector); // 0x1f Func
	var_30_int = 1; // 0x21 PushI
	var_31_int = 1; // 0x22 PushI
	FogLinear(var_30_int, var_31_int); // 0x23 Func
	
Label_37:
	var_32_bool = 0; // 0x25 PushV
	func_204(var_32_bool); // 0x26 NEW_2
	var_35_bool = var_32_bool == 0; // 0x28 Not
	if(var_35_bool == 0) goto Label_43; // 0x29 JumpB
	return 8; // 0x2a Return
	
Label_43:
	var_36_bool = 0; var_37_object = Obj(); // 0x2b PushV
	var_37_object = var_19_object; // 0x2c Mov
	func_249(var_36_bool, var_37_object); // 0x2d NEW_2
	if(var_36_bool == 0) goto Label_58; // 0x2f JumpB
	var_41_float = 0; var_42_object = Obj(); var_43_float = 0; // 0x30 PushV
	var_42_object = var_19_object; // 0x31 Mov
	var_43_float = 0.1; // 0x32 MovF
	func_135(var_41_float, var_42_object, var_43_float); // 0x33 NEW_2
	var_27_float = var_41_float; // 0x34 Mov
	var_105_int = 5; // 0x36 PushI
	var_106_float = 0.1; // 0x37 PushF
	ReportHit(var_19_object, var_105_int, var_27_float, var_106_float); // 0x38 Func
	
Label_58:
	var_107_int = 1; // 0x3a PushI
	Sleep(var_107_int); // 0x3b Func
	var_108_bool = 0; var_109_object = Obj(); // 0x3d PushV
	var_109_object = var_19_object; // 0x3e Mov
	func_236(var_108_bool, var_109_object); // 0x3f NEW_2
	var_110_bool = var_108_bool == 0; // 0x41 Not
	if(var_110_bool == 0) goto Label_68; // 0x42 JumpB
	goto Label_69; // 0x43 Jump
	
Label_69:
	var_111_int = 0; // 0x45 PushI
	var_112_int = 1; // 0x46 PushI
	FogLinear(var_111_int, var_112_int); // 0x47 Func
	var_113_int = 1; // 0x49 PushI
	FadeOut(var_113_int); // 0x4a ObjFunc
	var_114_int = 1; // 0x4c PushI
	Sleep(var_114_int); // 0x4d Func
	return 8; // 0x4f Return
	
Label_68:
	goto Label_37; // 0x44 Jump
}


func_249(var_36_bool, var_37_object)
{
	var_38_float = 0; var_39_object = Obj(); // 0xfa PushV
	var_39_object = var_37_object; // 0xfb Mov
	func_81(var_39_object); // 0xfc NEW_2
	var_40_float = 40000.0; // 0xfe PushF
	var_36_bool = var_38_float < var_40_float; // 0xff LT2
	return 0; // 0x100 Return
}


func_215(var_79_float, var_80_float, var_81_float, var_82_float)
{
	var_83_bool = var_80_float < var_81_float; // 0xd8 LT
	if(var_83_bool == 0) goto Label_220; // 0xd9 JumpB
	var_79_float = var_81_float; // 0xda Mov
	return 0; // 0xdb Return
	
Label_220:
	var_84_bool = var_80_float > var_82_float; // 0xdc GT
	if(var_84_bool == 0) goto Label_224; // 0xdd JumpB
	var_79_float = var_82_float; // 0xde Mov
	return 0; // 0xdf Return
	
Label_224:
	var_79_float = var_80_float; // 0xe0 Mov
	return 0; // 0xe1 Return
}


