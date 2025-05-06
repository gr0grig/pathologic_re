task_0_event_6()
{
	SetDeathStateAndRemove(); // 0x1e Func
	sync(); // 0x20 Func
	return 0; // 0x22 Return
}


task_0_event_10(var_0_object, var_1_object, var_2_cvector, var_3_cvector)
{
	var_4_float = 0; var_5_float = 0; // 0x23 PushV
	var_6_string = "Knife hit: "; // 0x24 PushS
	var_7_int = var_6_string + var_1_object; // 0x25 Add
	Trace(var_7_int); // 0x26 Func
	var_8_object = GlobalVars[2]; // 0x28 PushGE
	var_9_bool = 0; // 0x29 PushB
	Enable(var_9_bool); // 0x2a ObjFunc
	SetDeathStateAndRemove(); // 0x2c Func
	var_10_bool = 0; var_11_object = Obj(); // 0x2e PushV
	var_11_object = var_1_object; // 0x2f Mov
	func_228(var_10_bool, var_11_object); // 0x30 Call
	var_44_bool = var_10_bool == 0; // 0x32 Not
	if(var_44_bool == 0) goto Label_53; // 0x33 JumpB
	return 2; // 0x34 Return
	
Label_53:
	var_45_float = 0; var_46_object = Obj(); var_47_float = 0; var_48_int = 0; // 0x35 PushV
	var_46_object = var_1_object; // 0x36 Mov
	var_47_float = 0.9; // 0x37 MovF
	var_48_int = 0; // 0x38 MovI
	func_107(var_45_float, var_46_object, var_47_float, var_48_int); // 0x39 Call
	var_5_float = var_45_float; // 0x3a Mov
	var_95_bool = 0; var_96_object = Obj(); // 0x3c PushV
	var_97_object = GlobalVars[0]; // 0x3d PushGE
	var_96_object = var_97_object; // 0x3e Mov
	func_228(var_95_bool, var_96_object); // 0x40 Call
	if(var_95_bool == 0) goto Label_86; // 0x42 JumpB
	var_98_object = GlobalVars[0]; // 0x43 PushGE
	ReportAttack(var_1_object, var_98_object); // 0x44 Func
	var_99_float = var_5_float; // 0x46 Push
	if(var_99_float == 0) goto Label_86; // 0x47 JumpB
	var_100_object = GlobalVars[0]; // 0x48 PushGE
	var_101_int = 1; // 0x49 PushI
	var_102_float = 0.9; // 0x4a PushF
	ReportHit(var_1_object, var_100_object, var_101_int, var_5_float, var_102_float); // 0x4b Func
	var_103_bool = 0; var_104_object = Obj(); // 0x4d PushV
	var_104_object = var_1_object; // 0x4e Mov
	func_171(var_103_bool, var_104_object); // 0x4f Call
	if(var_103_bool == 0) goto Label_86; // 0x51 JumpB
	var_113_object = GlobalVars[0]; // 0x52 PushGE
	var_114_string = "kill"; // 0x53 PushS
	Trigger(var_113_object, var_114_string); // 0x54 Func
	
Label_86:
	return 2; // 0x56 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_cvector = CVector(0.0, 0.0, 0.0); // 0x1 PushVec
	var_3_int = 50; // 0x2 PushI
	var_4_cvector = GlobalVars[1]; // 0x3 PushGE
	var_5_cvector = CVector(20.0, 20.0, 20.0); // 0x4 PushVec
	var_6_object = GlobalVars[0]; // 0x5 PushGE
	CreateRigidBody(var_1_object, var_2_cvector, var_3_int, var_4_cvector, var_5_cvector, var_6_object); // 0x6 Func
	var_7_bool = 1; // 0x8 PushB
	Enable(var_7_bool); // 0x9 ObjFunc
	var_8_object = GlobalVars[2]; // 0xb PushGE
	var_8_object = var_1_object; // 0xc Mov
	GlobalVars[2] = var_8_object; // 0xd PopGE
	Attach(var_1_object); // 0xe Func
	var_9_string = "knife"; // 0x10 PushS
	FindGeometry(var_9_string, var_1_object); // 0x11 Func
	var_10_cvector = GlobalVars[1]; // 0x13 PushGE
	SetRotation(var_10_cvector); // 0x14 ObjFunc
	var_11_bool = 1; // 0x16 PushB
	Enable(var_11_bool); // 0x17 ObjFunc
	
Label_25:
	Hold(); // 0x19 Func
	goto Label_25; // 0x1b Jump
}


func_192(var_14_bool, var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); // 0xc0 PushV
	var_20_bool = var_15_object == 0; // 0xc1 NullEq
	if(var_20_bool == 0) goto Label_197; // 0xc2 JumpB
	var_14_bool = 0; // 0xc3 MovB
	return 4; // 0xc4 Return
	
Label_197:
	var_21_bool = 0; // 0xc5 PushV
	var_21_bool = 0; // 0xc6 MovB
	var_22_string = "IsDead"; // 0xc7 PushS
	var_23_int = 1; // 0xc8 PushI
	var_24_bool = IsFuncExist(var_15_object, var_22_string, var_23_int); // 0xc9 FuncExist
	if(var_24_bool == 0) goto Label_209; // 0xca JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0xcb PushV
	var_26_object = var_15_object; // 0xcc Mov
	func_187(var_26_object); // 0xcd Call
	if(var_25_bool == 0) goto Label_209; // 0xcf JumpB
	var_21_bool = 1; // 0xd0 MovB
	
Label_209:
	if(var_21_bool == 0) goto Label_212; // 0xd1 JumpB
	var_14_bool = 0; // 0xd2 MovB
	return 4; // 0xd3 Return
	
Label_212:
	GetScene(var_18_object); // 0xd4 Func
	var_29_bool = var_18_object == 0; // 0xd6 NullEq
	if(var_29_bool == 0) goto Label_218; // 0xd7 JumpB
	var_14_bool = 0; // 0xd8 MovB
	return 4; // 0xd9 Return
	
Label_218:
	GetScene(var_19_object); // 0xda ObjFunc
	var_30_bool = var_18_object != var_19_object; // 0xdc Neq
	if(var_30_bool == 0) goto Label_224; // 0xdd JumpB
	var_14_bool = 0; // 0xde MovB
	return 4; // 0xdf Return
	
Label_224:
	var_14_bool = 1; // 0xe0 MovB
	return 4; // 0xe1 Return
}


func_259(var_88_float, var_89_float, var_90_float, var_91_float)
{
	var_92_bool = var_89_float < var_90_float; // 0x104 LT
	if(var_92_bool == 0) goto Label_264; // 0x105 JumpB
	var_88_float = var_90_float; // 0x106 Mov
	return 0; // 0x107 Return
	
Label_264:
	var_93_bool = var_89_float > var_91_float; // 0x108 GT
	if(var_93_bool == 0) goto Label_268; // 0x109 JumpB
	var_88_float = var_91_float; // 0x10a Mov
	return 0; // 0x10b Return
	
Label_268:
	var_88_float = var_89_float; // 0x10c Mov
	return 0; // 0x10d Return
}


func_228(var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xe4 PushV
	var_14_bool = 0; var_15_object = Obj(); // 0xe5 PushV
	var_15_object = var_11_object; // 0xe6 Mov
	func_192(var_14_bool, var_15_object); // 0xe7 Call
	var_31_bool = var_14_bool == 0; // 0xe9 Not
	if(var_31_bool == 0) goto Label_237; // 0xea JumpB
	var_10_bool = 0; // 0xeb MovB
	return 2; // 0xec Return
	
Label_237:
	var_32_bool = 0; var_33_object = Obj(); var_34_string = ""; // 0xed PushV
	var_33_object = var_11_object; // 0xee Mov
	var_34_string = "noaccess"; // 0xef MovS
	func_95(var_32_bool, var_33_object, var_34_string); // 0xf0 Call
	var_41_bool = var_32_bool == 0; // 0xf2 Not
	if(var_41_bool == 0) goto Label_246; // 0xf3 JumpB
	var_10_bool = 1; // 0xf4 MovB
	return 2; // 0xf5 Return
	
Label_246:
	var_42_string = "noaccess"; // 0xf6 PushS
	GetProperty(var_42_string, var_13_int); // 0xf7 ObjFunc
	var_43_int = 0; // 0xf9 PushI
	var_10_bool = var_13_int == var_43_int; // 0xfa Eq2
	return 2; // 0xfb Return
}


func_107(var_45_float, var_46_object, var_47_float, var_48_int)
{
	var_49_int = 0; var_50_string = ""; var_51_int = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_int = 0; var_56_string = ""; var_57_int = 0; var_58_float = 0; var_59_float = 0; var_60_float = 0; // 0x6b PushV
	var_61_bool = 0; var_62_object = Obj(); var_63_string = ""; // 0x6c PushV
	var_62_object = var_46_object; // 0x6d Mov
	var_63_string = "health"; // 0x6e MovS
	func_95(var_61_bool, var_62_object, var_63_string); // 0x6f Call
	var_64_bool = var_61_bool == 0; // 0x71 Not
	if(var_64_bool == 0) goto Label_117; // 0x72 JumpB
	var_45_float = 0.0; // 0x73 MovF
	return 12; // 0x74 Return
	
Label_117:
	var_65_bool = 0; var_66_object = Obj(); var_67_string = ""; // 0x75 PushV
	var_66_object = var_46_object; // 0x76 Mov
	var_67_string = "armor"; // 0x77 MovS
	func_95(var_65_bool, var_66_object, var_67_string); // 0x78 Call
	var_68_bool = var_65_bool == 0; // 0x7a Not
	if(var_68_bool == 0) goto Label_126; // 0x7b JumpB
	var_55_int = 0; // 0x7c MovI
	goto Label_129; // 0x7d Jump
	
Label_129:
	var_69_string = "armor_"; // 0x81 PushS
	var_70_string = ""; var_71_int = 0; // 0x82 PushV
	var_71_int = var_48_int; // 0x83 Mov
	func_87(var_70_string, var_71_int); // 0x84 Call
	var_56_string = var_69_string + var_70_string; // 0x86 Add2
	var_74_bool = 0; var_75_object = Obj(); var_76_string = ""; // 0x87 PushV
	var_75_object = var_46_object; // 0x88 Mov
	var_76_string = var_56_string; // 0x89 Mov
	func_95(var_74_bool, var_75_object, var_76_string); // 0x8a Call
	var_77_bool = var_74_bool == 0; // 0x8c Not
	if(var_77_bool == 0) goto Label_144; // 0x8d JumpB
	var_57_int = 0; // 0x8e MovI
	goto Label_146; // 0x8f Jump
	
Label_146:
	var_78_float = 0; var_79_float = 0; var_80_float = 0; // 0x92 PushV
	var_81_int = var_55_int + var_57_int; // 0x93 Add
	var_82_float = 100.0; // 0x94 PushF
	var_79_float = var_81_int / var_81_int; // 0x95 Div2
	var_80_float = 1; // 0x96 MovI
	func_252(var_78_float, var_79_float, var_80_float); // 0x97 Call
	var_58_float = var_78_float; // 0x98 Mov
	var_84_string = "health"; // 0x9a PushS
	GetProperty(var_84_string, var_59_float); // 0x9b ObjFunc
	var_85_int = 1; // 0x9d PushI
	var_86_int = var_85_int - var_58_float; // 0x9e Sub
	var_60_float = var_47_float * var_86_int; // 0x9f Mult2
	var_87_string = "health"; // 0xa0 PushS
	var_88_float = 0; var_89_float = 0; var_90_float = 0; var_91_float = 0; // 0xa1 PushV
	var_89_float = var_59_float - var_60_float; // 0xa2 Sub2
	var_90_float = 0; // 0xa3 MovI
	var_91_float = 1; // 0xa4 MovI
	func_259(var_88_float, var_89_float, var_90_float, var_91_float); // 0xa5 Call
	SetProperty(var_87_string, var_88_float); // 0xa7 ObjFunc
	var_45_float = var_60_float; // 0xa9 Mov
	return 12; // 0xaa Return
	
Label_144:
	GetProperty(var_56_string, var_57_int); // 0x90 ObjFunc
	
Label_126:
	var_94_string = "armor"; // 0x7e PushS
	GetProperty(var_94_string, var_55_int); // 0x7f ObjFunc
}


func_171(var_103_bool, var_104_object)
{
	var_105_float = 0; var_106_float = 0; // 0xab PushV
	var_107_bool = 0; var_108_object = Obj(); var_109_string = ""; // 0xac PushV
	var_108_object = var_104_object; // 0xad Mov
	var_109_string = "health"; // 0xae MovS
	func_95(var_107_bool, var_108_object, var_109_string); // 0xaf Call
	var_110_bool = var_107_bool == 0; // 0xb1 Not
	if(var_110_bool == 0) goto Label_181; // 0xb2 JumpB
	var_103_bool = 0; // 0xb3 MovB
	return 2; // 0xb4 Return
	
Label_181:
	var_111_string = "health"; // 0xb5 PushS
	GetProperty(var_111_string, var_106_float); // 0xb6 ObjFunc
	var_112_float = 0.0; // 0xb8 PushF
	var_103_bool = var_106_float <= var_112_float; // 0xb9 LE2
	return 2; // 0xba Return
}


func_87(var_70_string, var_71_int)
{
	var_72_int = 1; // 0x58 PushI
	var_73_bool = var_71_int == var_72_int; // 0x59 Eq
	if(var_73_bool == 0) goto Label_93; // 0x5a JumpB
	var_70_string = "fire"; // 0x5b MovS
	return 0; // 0x5c Return
	
Label_93:
	var_70_string = "phys"; // 0x5d MovS
	return 0; // 0x5e Return
}


func_187(var_25_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0xbb PushV
	IsDead(var_28_bool); // 0xbc ObjFunc
	var_25_bool = var_28_bool; // 0xbe Mov
	return 2; // 0xbf Return
}


func_252(var_78_float, var_79_float, var_80_float)
{
	var_83_bool = var_79_float < var_80_float; // 0xfd LT
	if(var_83_bool == 0) goto Label_257; // 0xfe JumpB
	var_78_float = var_79_float; // 0xff Mov
	goto Label_258; // 0x100 Jump
	
Label_258:
	return 0; // 0x102 Return
	
Label_257:
	var_78_float = var_80_float; // 0x101 Mov
}


func_95(var_32_bool, var_33_object, var_34_string)
{
	var_35_bool = 0; var_36_bool = 0; // 0x5f PushV
	var_37_string = "HasProperty"; // 0x60 PushS
	var_38_int = 2; // 0x61 PushI
	var_39_bool = IsFuncExist(var_33_object, var_37_string, var_38_int); // 0x62 FuncExist
	var_40_bool = var_39_bool == 0; // 0x63 Not
	if(var_40_bool == 0) goto Label_103; // 0x64 JumpB
	var_32_bool = 0; // 0x65 MovB
	return 2; // 0x66 Return
	
Label_103:
	HasProperty(var_34_string, var_36_bool); // 0x67 ObjFunc
	var_32_bool = var_36_bool; // 0x69 Mov
	return 2; // 0x6a Return
}


