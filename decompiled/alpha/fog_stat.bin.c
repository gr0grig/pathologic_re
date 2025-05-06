main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	
Label_1:
	var_2_object = Obj(); // 0x1 PushV
	func_83(var_2_object); // 0x2 Call
	var_1_object = var_2_object; // 0x3 Mov
	
Label_5:
	var_6_bool = 0; var_7_object = Obj(); // 0x5 PushV
	var_7_object = var_1_object; // 0x6 Mov
	func_198(var_6_bool, var_7_object); // 0x7 Call
	if(var_6_bool == 0) goto Label_17; // 0x9 JumpB
	var_19_object = Obj(); // 0xa PushV
	var_19_object = var_1_object; // 0xb Mov
	TaskCall(1); // 0xc TaskCall
	func_23(var_19_object); // 0xd Call
	TaskReturn(); // 0xe TaskReturn
	goto Label_5; // 0x10 Jump
	
Label_17:
	var_103_int = 1; // 0x11 PushI
	Sleep(var_103_int); // 0x12 Func
	var_1_object = 0; // 0x14 SetNull
	goto Label_1; // 0x15 Jump
}


func_102(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float)
{
	var_79_float = 0; var_80_float = 0; // 0x66 PushV
	var_81_bool = 0; var_82_object = Obj(); var_83_string = ""; // 0x67 PushV
	var_82_object = var_74_object; // 0x68 Mov
	var_83_string = var_75_string; // 0x69 Mov
	func_90(var_81_bool, var_82_object, var_83_string); // 0x6a Call
	var_84_bool = var_81_bool == 0; // 0x6c Not
	if(var_84_bool == 0) goto Label_112; // 0x6d JumpB
	var_73_bool = 0; // 0x6e MovB
	return 2; // 0x6f Return
	
Label_112:
	GetProperty(var_75_string, var_80_float); // 0x70 ObjFunc
	var_85_float = 0; var_86_float = 0; var_87_float = 0; var_88_float = 0; // 0x72 PushV
	var_86_float = var_80_float + var_76_float; // 0x73 Add2
	var_87_float = var_77_float; // 0x74 Mov
	var_88_float = var_78_float; // 0x75 Mov
	func_187(var_85_float, var_86_float, var_87_float, var_88_float); // 0x76 Call
	SetProperty(var_75_string, var_85_float); // 0x78 ObjFunc
	var_73_bool = 1; // 0x7a MovB
	return 2; // 0x7b Return
}


func_198(var_6_bool, var_7_object)
{
	var_6_bool = 0; // 0xc7 MovB
	var_8_object = var_7_object; // 0xc8 Push
	if(var_8_object == 0) goto Label_210; // 0xc9 JumpB
	var_9_float = 0; var_10_object = Obj(); // 0xca PushV
	var_10_object = var_7_object; // 0xcb Mov
	func_75(var_10_object); // 0xcc Call
	var_17_float = 160000.0; // 0xce PushF
	var_18_bool = var_9_float < var_17_float; // 0xcf LT
	if(var_18_bool == 0) goto Label_210; // 0xd0 JumpB
	var_6_bool = 1; // 0xd1 MovB
	
Label_210:
	return 0; // 0xd2 Return
}


func_75(var_9_float)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); // 0x4b PushV
	GetPosition(var_14_cvector); // 0x4c Func
	GetPosition(var_15_cvector); // 0x4e ObjFunc
	var_16_cvector = var_15_cvector - var_14_cvector; // 0x50 Sub2
	var_9_float = var_16_cvector | var_16_cvector; // 0x51 Or2
	return 6; // 0x52 Return
}


func_83(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x53 PushV
	var_5_string = "player"; // 0x54 PushS
	FindActor(var_4_object, var_5_string); // 0x55 Func
	var_2_object = var_4_object; // 0x57 Mov
	return 2; // 0x58 Return
}


func_211(var_32_bool, var_33_object)
{
	var_34_float = 0; var_35_object = Obj(); // 0xd4 PushV
	var_35_object = var_33_object; // 0xd5 Mov
	func_75(var_35_object); // 0xd6 Call
	var_36_float = 40000.0; // 0xd8 PushF
	var_32_bool = var_34_float < var_36_float; // 0xd9 LT2
	return 0; // 0xda Return
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
	var_32_bool = 0; var_33_object = Obj(); // 0x25 PushV
	var_33_object = var_19_object; // 0x26 Mov
	func_211(var_32_bool, var_33_object); // 0x27 Call
	if(var_32_bool == 0) goto Label_52; // 0x29 JumpB
	var_37_float = 0; var_38_object = Obj(); var_39_float = 0; // 0x2a PushV
	var_38_object = var_19_object; // 0x2b Mov
	var_39_float = 0.1; // 0x2c MovF
	func_124(var_37_float, var_38_object, var_39_float); // 0x2d Call
	var_27_float = var_37_float; // 0x2e Mov
	var_93_int = 5; // 0x30 PushI
	var_94_float = 0.1; // 0x31 PushF
	ReportHit(var_19_object, var_93_int, var_27_float, var_94_float); // 0x32 Func
	
Label_52:
	var_95_int = 1; // 0x34 PushI
	Sleep(var_95_int); // 0x35 Func
	var_96_bool = 0; var_97_object = Obj(); // 0x37 PushV
	var_97_object = var_19_object; // 0x38 Mov
	func_198(var_96_bool, var_97_object); // 0x39 Call
	var_98_bool = var_96_bool == 0; // 0x3b Not
	if(var_98_bool == 0) goto Label_62; // 0x3c JumpB
	goto Label_63; // 0x3d Jump
	
Label_63:
	var_99_int = 0; // 0x3f PushI
	var_100_int = 1; // 0x40 PushI
	FogLinear(var_99_int, var_100_int); // 0x41 Func
	var_101_int = 1; // 0x43 PushI
	FadeOut(var_101_int); // 0x44 ObjFunc
	var_102_int = 1; // 0x46 PushI
	Sleep(var_102_int); // 0x47 Func
	return 8; // 0x49 Return
	
Label_62:
	goto Label_37; // 0x3e Jump
}


func_90(var_46_bool, var_47_object, var_48_string)
{
	var_49_bool = 0; var_50_bool = 0; // 0x5a PushV
	var_51_string = "HasProperty"; // 0x5b PushS
	var_52_int = 2; // 0x5c PushI
	var_53_bool = IsFuncExist(var_47_object, var_51_string, var_52_int); // 0x5d FuncExist
	var_54_bool = var_53_bool == 0; // 0x5e Not
	if(var_54_bool == 0) goto Label_98; // 0x5f JumpB
	var_46_bool = 0; // 0x60 MovB
	return 2; // 0x61 Return
	
Label_98:
	HasProperty(var_48_string, var_50_bool); // 0x62 ObjFunc
	var_46_bool = var_50_bool; // 0x64 Mov
	return 2; // 0x65 Return
}


func_187(var_85_float, var_86_float, var_87_float, var_88_float)
{
	var_89_bool = var_86_float < var_87_float; // 0xbc LT
	if(var_89_bool == 0) goto Label_192; // 0xbd JumpB
	var_85_float = var_87_float; // 0xbe Mov
	return 0; // 0xbf Return
	
Label_192:
	var_90_bool = var_86_float > var_88_float; // 0xc0 GT
	if(var_90_bool == 0) goto Label_196; // 0xc1 JumpB
	var_85_float = var_88_float; // 0xc2 Mov
	return 0; // 0xc3 Return
	
Label_196:
	var_85_float = var_86_float; // 0xc4 Mov
	return 0; // 0xc5 Return
}


func_124(var_37_float, var_38_object, var_39_float)
{
	var_40_int = 0; var_41_float = 0; var_42_float = 0; var_43_int = 0; var_44_float = 0; var_45_float = 0; // 0x7c PushV
	var_46_bool = 0; var_47_object = Obj(); var_48_string = ""; // 0x7d PushV
	var_47_object = var_38_object; // 0x7e Mov
	var_48_string = "disease"; // 0x7f MovS
	func_90(var_46_bool, var_47_object, var_48_string); // 0x80 Call
	var_55_bool = var_46_bool == 0; // 0x82 Not
	if(var_55_bool == 0) goto Label_134; // 0x83 JumpB
	var_37_float = 0; // 0x84 MovI
	return 6; // 0x85 Return
	
Label_134:
	var_56_bool = 0; var_57_object = Obj(); var_58_string = ""; // 0x86 PushV
	var_57_object = var_38_object; // 0x87 Mov
	var_58_string = "armor_disease"; // 0x88 MovS
	func_90(var_56_bool, var_57_object, var_58_string); // 0x89 Call
	if(var_56_bool == 0) goto Label_154; // 0x8b JumpB
	var_59_string = "armor_disease"; // 0x8c PushS
	GetProperty(var_59_string, var_43_int); // 0x8d ObjFunc
	var_60_int = 100; // 0x8f PushI
	var_61_bool = var_43_int < var_60_int; // 0x90 LT
	if(var_61_bool == 0) goto Label_152; // 0x91 JumpB
	var_62_int = 1; // 0x92 PushI
	var_63_float = 100.0; // 0x93 PushF
	var_64_float = var_43_int / var_63_float; // 0x94 Div
	var_65_int = var_62_int - var_64_float; // 0x95 Sub
	var_39_float = var_39_float * var_65_int; // 0x96 Mult2
	goto Label_154; // 0x97 Jump
	
Label_154:
	var_66_bool = 0; var_67_object = Obj(); var_68_string = ""; // 0x9a PushV
	var_67_object = var_38_object; // 0x9b Mov
	var_68_string = "immunity"; // 0x9c MovS
	func_90(var_66_bool, var_67_object, var_68_string); // 0x9d Call
	if(var_66_bool == 0) goto Label_177; // 0x9f JumpB
	var_69_string = "immunity"; // 0xa0 PushS
	GetProperty(var_69_string, var_45_float); // 0xa1 ObjFunc
	var_70_bool = var_45_float < var_39_float; // 0xa3 LT
	if(var_70_bool == 0) goto Label_171; // 0xa4 JumpB
	var_71_string = "immunity"; // 0xa5 PushS
	var_72_int = 0; // 0xa6 PushI
	SetProperty(var_71_string, var_72_int); // 0xa7 ObjFunc
	var_44_float = var_39_float - var_45_float; // 0xa9 Sub2
	goto Label_177; // 0xaa Jump
	
Label_177:
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; var_76_float = 0; var_77_float = 0; var_78_float = 0; // 0xb1 PushV
	var_74_object = var_38_object; // 0xb2 Mov
	var_75_string = "disease"; // 0xb3 MovS
	var_76_float = var_44_float; // 0xb4 Mov
	var_77_float = 0; // 0xb5 MovI
	var_78_float = 1; // 0xb6 MovI
	func_102(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float); // 0xb7 Call
	var_37_float = var_39_float; // 0xb9 Mov
	return 6; // 0xba Return
	
Label_171:
	var_91_string = "immunity"; // 0xab PushS
	var_92_int = var_45_float - var_39_float; // 0xac Sub
	SetProperty(var_91_string, var_92_int); // 0xad ObjFunc
	var_37_float = var_39_float; // 0xaf Mov
	return 6; // 0xb0 Return
	
Label_152:
	var_37_float = 0; // 0x98 MovI
	return 6; // 0x99 Return
}


