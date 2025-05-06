task_0_event_16(var_0_object, var_1_string)
{
	var_2_string = "disease"; // 0x5 PushS
	var_3_bool = var_1_string == var_2_string; // 0x6 Eq
	if(var_3_bool == 0) goto Label_18; // 0x7 JumpB
	var_4_bool = 0; // 0x8 PushV
	func_248(var_4_bool); // 0x9 Call
	var_9_bool = var_4_bool == 0; // 0xb Not
	if(var_9_bool == 0) goto Label_18; // 0xc JumpB
	TaskCall(1); // 0xe TaskCall
	func_19(); // 0xf Call
	TaskReturn(); // 0x10 TaskReturn
	
Label_18:
	return 0; // 0x12 Return
}


task_2_event_16(var_0_object, var_1_string)
{
	var_2_string = "disease"; // 0xd9 PushS
	var_3_bool = var_1_string == var_2_string; // 0xda Eq
	if(var_3_bool == 0) goto Label_226; // 0xdb JumpB
	var_4_bool = 0; // 0xdc PushV
	func_248(var_4_bool); // 0xdd Call
	if(var_4_bool == 0) goto Label_226; // 0xdf JumpB
	StopGroup0(); // 0xe0 Func
	
Label_226:
	return 0; // 0xe2 Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_227(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0; // 0xe3 PushV
	var_68_int = var_64_cvector | var_64_cvector; // 0xe4 Or
	var_67_float = sqrt(var_68_int); // 0xe5 Sqrt2
	var_69_float = 0.0; // 0xe6 PushF
	var_70_bool = var_67_float < var_69_float; // 0xe7 LT
	if(var_70_bool == 0) goto Label_235; // 0xe8 JumpB
	var_63_cvector = CVector(0.0, 0.0, 0.0); // 0xe9 MovV
	return 2; // 0xea Return
	
Label_235:
	var_63_cvector = var_64_cvector / var_64_cvector; // 0xeb Div2
	return 2; // 0xec Return
}


func_202(var_75_float, var_76_float)
{
	var_77_int = 1; // 0xcb PushI
	var_78_float = 0.75; // 0xcc PushF
	var_79_float = var_75_float * var_78_float; // 0xcd Mult
	var_80_int = var_77_int - var_79_float; // 0xce Sub
	var_81_float = var_76_float * var_80_int; // 0xcf Mult
	SetCameraFOV(var_81_float); // 0xd0 Func
	return 0; // 0xd2 Return
}


func_237(var_16_float, var_17_float, var_18_float, var_19_float)
{
	var_21_bool = var_17_float < var_18_float; // 0xee LT
	if(var_21_bool == 0) goto Label_242; // 0xef JumpB
	var_16_float = var_18_float; // 0xf0 Mov
	return 0; // 0xf1 Return
	
Label_242:
	var_22_bool = var_17_float > var_19_float; // 0xf2 GT
	if(var_22_bool == 0) goto Label_246; // 0xf3 JumpB
	var_16_float = var_19_float; // 0xf4 Mov
	return 0; // 0xf5 Return
	
Label_246:
	var_16_float = var_17_float; // 0xf6 Mov
	return 0; // 0xf7 Return
}


func_19()
{
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; // 0x13 PushV
	var_14_string = "Disease effect started"; // 0x14 PushS
	Trace(var_14_string); // 0x15 Func
	var_15_string = "disease"; // 0x17 PushS
	GetProperty(var_15_string, var_12_float); // 0x18 Func
	var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0; // 0x1a PushV
	var_20_int = 2; // 0x1b PushI
	var_17_float = var_12_float * var_20_int; // 0x1c Mult2
	var_18_float = 0; // 0x1d MovI
	var_19_float = 1; // 0x1e MovI
	func_237(var_16_float, var_17_float, var_18_float, var_19_float); // 0x1f Call
	var_12_float = var_16_float; // 0x20 Mov
	var_23_bool = 0; var_24_float = 0; // 0x22 PushV
	var_24_float = var_12_float; // 0x23 Mov
	func_95(var_23_bool, var_24_float); // 0x24 Call
	if(var_23_bool == 0) goto Label_91; // 0x26 JumpB
	
Label_39:
	var_98_bool = 0; // 0x27 PushV
	func_248(var_98_bool); // 0x28 Call
	var_99_bool = var_98_bool == 0; // 0x2a Not
	if(var_99_bool == 0) goto Label_91; // 0x2b JumpB
	var_100_string = "disease"; // 0x2c PushS
	GetProperty(var_100_string, var_12_float); // 0x2d Func
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0; // 0x2f PushV
	var_102_float = var_12_float; // 0x30 Mov
	var_103_float = 0; // 0x31 MovI
	var_104_float = 1; // 0x32 MovI
	func_237(var_101_float, var_102_float, var_103_float, var_104_float); // 0x33 Call
	var_12_float = var_101_float; // 0x34 Mov
	var_105_int = 30; // 0x36 PushI
	var_106_int = 15; // 0x37 PushI
	var_107_float = var_12_float * var_106_int; // 0x38 Mult
	var_108_int = var_105_int - var_107_float; // 0x39 Sub
	var_109_int = 120; // 0x3a PushI
	var_110_int = 80; // 0x3b PushI
	var_111_float = var_12_float * var_110_int; // 0x3c Mult
	var_112_int = var_109_int - var_111_float; // 0x3d Sub
	rand(var_13_float, var_108_int, var_112_int); // 0x3e Func
	var_113_bool = 0; var_114_float = 0; // 0x40 PushV
	var_114_float = var_13_float; // 0x41 Mov
	TaskCall(2); // 0x42 TaskCall
	func_211(var_113_bool, var_114_float); // 0x43 Call
	TaskReturn(); // 0x44 TaskReturn
	var_117_bool = var_113_bool == 0; // 0x46 Not
	if(var_117_bool == 0) goto Label_73; // 0x47 JumpB
	goto Label_91; // 0x48 Jump
	
Label_91:
	var_118_string = "Disease effect stopped"; // 0x5b PushS
	Trace(var_118_string); // 0x5c Func
	return 4; // 0x5e Return
	
Label_73:
	var_119_string = "disease"; // 0x49 PushS
	GetProperty(var_119_string, var_12_float); // 0x4a Func
	var_120_float = 0; var_121_float = 0; var_122_float = 0; var_123_float = 0; // 0x4c PushV
	var_121_float = var_12_float; // 0x4d Mov
	var_122_float = 0; // 0x4e MovI
	var_123_float = 1; // 0x4f MovI
	func_237(var_120_float, var_121_float, var_122_float, var_123_float); // 0x50 Call
	var_12_float = var_120_float; // 0x51 Mov
	var_124_bool = 0; var_125_float = 0; // 0x53 PushV
	var_125_float = var_12_float; // 0x54 Mov
	func_95(var_124_bool, var_125_float); // 0x55 Call
	var_126_bool = var_124_bool == 0; // 0x57 Not
	if(var_126_bool == 0) goto Label_90; // 0x58 JumpB
	goto Label_91; // 0x59 Jump
	
Label_90:
	goto Label_39; // 0x5a Jump
}


func_211(var_113_bool, var_114_float)
{
	var_115_bool = 0; var_116_bool = 0; // 0xd3 PushV
	Sleep(var_114_float, var_116_bool); // 0xd4 Func
	var_113_bool = var_116_bool; // 0xd6 Mov
	return 2; // 0xd7 Return
}


func_182(var_55_float, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0xb6 PushV
	var_60_float = var_55_float * var_56_float; // 0xb7 Mult2
	SetCameraRoll(var_60_float); // 0xb8 Func
	GetForce(var_61_cvector); // 0xba Func
	GetDirection(var_62_cvector); // 0xbc Func
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0xbe PushV
	var_65_cvector = CVector(0.0, 1.0, 0.0); // 0xbf PushVec
	var_64_cvector = var_62_cvector ^ var_65_cvector; // 0xc0 Xor2
	func_227(var_63_cvector, var_64_cvector); // 0xc1 Call
	var_71_float = var_63_cvector * var_60_float; // 0xc3 Mult
	var_72_int = 1500; // 0xc4 PushI
	var_73_float = var_71_float * var_72_int; // 0xc5 Mult
	var_61_cvector = var_61_cvector + var_73_float; // 0xc6 Add2
	SetForce(var_61_cvector); // 0xc7 Func
	return 6; // 0xc9 Return
}


func_248(var_4_bool)
{
	var_5_float = 0; var_6_float = 0; // 0xf8 PushV
	var_7_string = "disease"; // 0xf9 PushS
	GetProperty(var_7_string, var_6_float); // 0xfa Func
	var_8_float = 0.01; // 0xfc PushF
	var_4_bool = var_6_float <= var_8_float; // 0xfd LE2
	return 2; // 0xfe Return
}


func_95(var_23_bool, var_24_float)
{
	var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0; // 0x5f PushV
	LockCameraRoll(var_34_bool); // 0x60 Func
	LockCameraFOV(var_35_bool); // 0x62 Func
	var_43_int = 2; // 0x64 PushI
	irand(var_36_float, var_43_int); // 0x65 Func
	var_44_float = 0.62832; // 0x67 PushF
	var_45_float = 0.5; // 0x68 PushF
	var_46_int = var_36_float - var_45_float; // 0x69 Sub
	var_36_float = var_44_float * var_46_int; // 0x6a Mult2
	GetCameraCurrentFOV(var_37_float); // 0x6b Func
	var_47_float = 0.5; // 0x6d PushF
	var_48_float = 0.5; // 0x6e PushF
	var_49_float = var_48_float * var_24_float; // 0x6f Mult
	var_38_float = var_47_float + var_49_float; // 0x70 Add2
	var_50_float = 0.5; // 0x71 PushF
	var_51_float = 0.5; // 0x72 PushF
	var_52_float = var_51_float * var_24_float; // 0x73 Mult
	var_39_float = var_50_float + var_52_float; // 0x74 Add2
	var_40_float = 0; // 0x75 MovI
	
Label_118:
	sync(var_41_float); // 0x76 Func
	var_53_float = var_41_float * var_38_float; // 0x78 Mult
	var_40_float = var_40_float + var_53_float; // 0x79 Add2
	var_54_bool = var_34_bool; // 0x7a Push
	if(var_54_bool == 0) goto Label_129; // 0x7b JumpB
	var_55_float = 0; var_56_float = 0; // 0x7c PushV
	var_55_float = var_40_float; // 0x7d Mov
	var_56_float = var_36_float; // 0x7e Mov
	func_182(var_55_float, var_56_float); // 0x7f Call
	
Label_129:
	var_74_bool = var_35_bool; // 0x81 Push
	if(var_74_bool == 0) goto Label_136; // 0x82 JumpB
	var_75_float = 0; var_76_float = 0; // 0x83 PushV
	var_75_float = var_40_float; // 0x84 Mov
	var_76_float = var_37_float; // 0x85 Mov
	func_202(var_75_float, var_76_float); // 0x86 Call
	
Label_136:
	ModDarkenLevel(var_40_float); // 0x88 Func
	var_82_bool = var_40_float < var_39_float; // 0x8a LT
	if(var_82_bool == 0) goto Label_118; // 0x8b JumpB
	var_40_float = var_39_float; // 0x8c Mov
	
Label_141:
	sync(var_42_float); // 0x8d Func
	var_83_float = var_42_float * var_38_float; // 0x8f Mult
	var_84_int = 5; // 0x90 PushI
	var_85_float = var_83_float / var_84_int; // 0x91 Div
	var_40_float = var_40_float - var_85_float; // 0x92 Sub2
	var_86_bool = var_34_bool; // 0x93 Push
	if(var_86_bool == 0) goto Label_154; // 0x94 JumpB
	var_87_float = 0; var_88_float = 0; // 0x95 PushV
	var_87_float = var_40_float; // 0x96 Mov
	var_88_float = var_36_float; // 0x97 Mov
	func_182(var_87_float, var_88_float); // 0x98 Call
	
Label_154:
	var_89_bool = var_35_bool; // 0x9a Push
	if(var_89_bool == 0) goto Label_161; // 0x9b JumpB
	var_90_float = 0; var_91_float = 0; // 0x9c PushV
	var_90_float = var_40_float; // 0x9d Mov
	var_91_float = var_37_float; // 0x9e Mov
	func_202(var_90_float, var_91_float); // 0x9f Call
	
Label_161:
	ModDarkenLevel(var_40_float); // 0xa1 Func
	var_92_int = 0; // 0xa3 PushI
	var_93_bool = var_40_float > var_92_int; // 0xa4 GT
	if(var_93_bool == 0) goto Label_141; // 0xa5 JumpB
	UnlockCameraFOV(var_35_bool); // 0xa6 Func
	UnlockCameraRoll(var_34_bool); // 0xa8 Func
	var_94_int = 2; // 0xaa PushI
	var_95_float = var_24_float / var_94_int; // 0xab Div
	ModBlurLevel(var_95_float); // 0xac Func
	var_96_int = 10; // 0xae PushI
	Sleep(var_96_int); // 0xaf Func
	var_97_int = 0; // 0xb1 PushI
	ModBlurLevel(var_97_int); // 0xb2 Func
	var_23_bool = 1; // 0xb4 MovB
	return 18; // 0xb5 Return
}


