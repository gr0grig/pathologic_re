task_0_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_float, var_7_float, var_8_float, var_9_float)
{
	var_6_float = var_6_float + var_9_float; // 0x12 Add2
	return 0; // 0x13 Return
}


task_0_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_float, var_7_float, var_8_float)
{
	var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0; var_20_float = 0; var_21_float = 0; var_22_float = 0; // 0x14 PushV
	var_23_string = "cross"; // 0x15 PushS
	var_24_int = 399; // 0x16 PushI
	var_25_int = 299; // 0x17 PushI
	Blit(var_23_string, var_24_int, var_25_int); // 0x18 Func
	var_26_bool = var_3_bool; // 0x1a PushT
	if(var_26_bool == 0) goto Label_53; // 0x1b JumpB
	var_27_int = var_6_float - var_7_float; // 0x1c Sub
	var_28_float = 2.0; // 0x1d PushF
	var_16_float = var_27_int / var_27_int; // 0x1e Div2
	var_29_int = 2; // 0x1f PushI
	var_30_bool = var_16_float > var_29_int; // 0x20 GT
	if(var_30_bool == 0) goto Label_40; // 0x21 JumpB
	var_3_bool = 0; // 0x22 TMovB
	var_31_float = 0; // 0x23 PushV
	func_278(var_31_float); // 0x24 Call
	var_8_float = var_31_float; // 0x25 TMov
	return 14; // 0x27 Return
	
Label_40:
	var_39_float = 6.283; // 0x28 PushF
	var_16_float = var_16_float * var_39_float; // 0x29 Mult2
	var_40_string = "rep_down"; // 0x2a PushS
	var_41_int = 20; // 0x2b PushI
	var_42_int = 500; // 0x2c PushI
	var_43_float = 0.5; // 0x2d PushF
	var_44_float = 0.5; // 0x2e PushF
	var_45_float = cos(var_16_float); // 0x2f Cos
	var_46_float = var_44_float * var_45_float; // 0x30 Mult
	var_47_int = var_43_float - var_46_float; // 0x31 Sub
	Blit(var_40_string, var_41_int, var_42_int, var_47_int); // 0x32 Func
	return 14; // 0x34 Return
	
Label_53:
	var_48_bool = var_2_bool; // 0x35 PushT
	if(var_48_bool == 0) goto Label_80; // 0x36 JumpB
	var_49_int = var_6_float - var_7_float; // 0x37 Sub
	var_50_float = 2.0; // 0x38 PushF
	var_17_float = var_49_int / var_49_int; // 0x39 Div2
	var_51_int = 2; // 0x3a PushI
	var_52_bool = var_17_float > var_51_int; // 0x3b GT
	if(var_52_bool == 0) goto Label_67; // 0x3c JumpB
	var_2_bool = 0; // 0x3d TMovB
	var_53_float = 0; // 0x3e PushV
	func_278(var_53_float); // 0x3f Call
	var_8_float = var_53_float; // 0x40 TMov
	return 14; // 0x42 Return
	
Label_67:
	var_54_float = 6.283; // 0x43 PushF
	var_17_float = var_17_float * var_54_float; // 0x44 Mult2
	var_55_string = "rep_up"; // 0x45 PushS
	var_56_int = 20; // 0x46 PushI
	var_57_int = 500; // 0x47 PushI
	var_58_float = 0.5; // 0x48 PushF
	var_59_float = 0.5; // 0x49 PushF
	var_60_float = cos(var_17_float); // 0x4a Cos
	var_61_float = var_59_float * var_60_float; // 0x4b Mult
	var_62_int = var_58_float - var_61_float; // 0x4c Sub
	Blit(var_55_string, var_56_int, var_57_int, var_62_int); // 0x4d Func
	return 14; // 0x4f Return
	
Label_80:
	var_63_bool = var_5_bool; // 0x50 PushT
	if(var_63_bool == 0) goto Label_114; // 0x51 JumpB
	var_64_bool = 0; // 0x52 PushV
	func_271(var_64_bool); // 0x53 Call
	var_69_bool = var_64_bool == 0; // 0x55 Not
	if(var_69_bool == 0) goto Label_89; // 0x56 JumpB
	var_5_bool = 0; // 0x57 TMovB
	return 14; // 0x58 Return
	
Label_89:
	var_70_int = var_6_float - var_7_float; // 0x59 Sub
	var_71_float = 1.0; // 0x5a PushF
	var_18_float = var_70_int / var_70_int; // 0x5b Div2
	var_72_int = 1; // 0x5c PushI
	var_73_bool = var_18_float > var_72_int; // 0x5d GT
	if(var_73_bool == 0) goto Label_101; // 0x5e JumpB
	var_0_bool = 0; // 0x5f TMovB
	var_74_string = "player_exchange"; // 0x60 PushS
	var_75_int = 0; // 0x61 PushI
	SetVariable(var_74_string, var_75_int); // 0x62 Func
	return 14; // 0x64 Return
	
Label_101:
	var_76_float = 6.283; // 0x65 PushF
	var_18_float = var_18_float * var_76_float; // 0x66 Mult2
	var_77_string = "exchange"; // 0x67 PushS
	var_78_int = 20; // 0x68 PushI
	var_79_int = 500; // 0x69 PushI
	var_80_float = 0.5; // 0x6a PushF
	var_81_float = 0.5; // 0x6b PushF
	var_82_float = cos(var_18_float); // 0x6c Cos
	var_83_float = var_81_float * var_82_float; // 0x6d Mult
	var_84_int = var_80_float - var_83_float; // 0x6e Sub
	Blit(var_77_string, var_78_int, var_79_int, var_84_int); // 0x6f Func
	return 14; // 0x71 Return
	
Label_114:
	var_85_bool = var_0_bool; // 0x72 PushT
	if(var_85_bool == 0) goto Label_148; // 0x73 JumpB
	var_86_bool = 0; // 0x74 PushV
	func_257(var_86_bool); // 0x75 Call
	var_91_bool = var_86_bool == 0; // 0x77 Not
	if(var_91_bool == 0) goto Label_123; // 0x78 JumpB
	var_0_bool = 0; // 0x79 TMovB
	return 14; // 0x7a Return
	
Label_123:
	var_92_int = var_6_float - var_7_float; // 0x7b Sub
	var_93_float = 2.0; // 0x7c PushF
	var_19_float = var_92_int / var_92_int; // 0x7d Div2
	var_94_int = 2; // 0x7e PushI
	var_95_bool = var_19_float > var_94_int; // 0x7f GT
	if(var_95_bool == 0) goto Label_135; // 0x80 JumpB
	var_0_bool = 0; // 0x81 TMovB
	var_96_string = "player_mail"; // 0x82 PushS
	var_97_int = 0; // 0x83 PushI
	SetVariable(var_96_string, var_97_int); // 0x84 Func
	return 14; // 0x86 Return
	
Label_135:
	var_98_float = 6.283; // 0x87 PushF
	var_19_float = var_19_float * var_98_float; // 0x88 Mult2
	var_99_string = "mail"; // 0x89 PushS
	var_100_int = 20; // 0x8a PushI
	var_101_int = 500; // 0x8b PushI
	var_102_float = 0.5; // 0x8c PushF
	var_103_float = 0.5; // 0x8d PushF
	var_104_float = cos(var_19_float); // 0x8e Cos
	var_105_float = var_103_float * var_104_float; // 0x8f Mult
	var_106_int = var_102_float - var_105_float; // 0x90 Sub
	Blit(var_99_string, var_100_int, var_101_int, var_106_int); // 0x91 Func
	return 14; // 0x93 Return
	
Label_148:
	var_107_bool = var_1_bool; // 0x94 PushT
	if(var_107_bool == 0) goto Label_182; // 0x95 JumpB
	var_108_bool = 0; // 0x96 PushV
	func_264(var_108_bool); // 0x97 Call
	var_113_bool = var_108_bool == 0; // 0x99 Not
	if(var_113_bool == 0) goto Label_157; // 0x9a JumpB
	var_1_bool = 0; // 0x9b TMovB
	return 14; // 0x9c Return
	
Label_157:
	var_114_int = var_6_float - var_7_float; // 0x9d Sub
	var_115_float = 2.0; // 0x9e PushF
	var_20_float = var_114_int / var_114_int; // 0x9f Div2
	var_116_int = 2; // 0xa0 PushI
	var_117_bool = var_20_float > var_116_int; // 0xa1 GT
	if(var_117_bool == 0) goto Label_169; // 0xa2 JumpB
	var_1_bool = 0; // 0xa3 TMovB
	var_118_string = "player_diary"; // 0xa4 PushS
	var_119_int = 0; // 0xa5 PushI
	SetVariable(var_118_string, var_119_int); // 0xa6 Func
	return 14; // 0xa8 Return
	
Label_169:
	var_120_float = 6.283; // 0xa9 PushF
	var_20_float = var_20_float * var_120_float; // 0xaa Mult2
	var_121_string = "diary"; // 0xab PushS
	var_122_int = 20; // 0xac PushI
	var_123_int = 470; // 0xad PushI
	var_124_float = 0.5; // 0xae PushF
	var_125_float = 0.5; // 0xaf PushF
	var_126_float = cos(var_20_float); // 0xb0 Cos
	var_127_float = var_125_float * var_126_float; // 0xb1 Mult
	var_128_int = var_124_float - var_127_float; // 0xb2 Sub
	Blit(var_121_string, var_122_int, var_123_int, var_128_int); // 0xb3 Func
	return 14; // 0xb5 Return
	
Label_182:
	var_129_float = 0; // 0xb6 PushV
	func_278(var_129_float); // 0xb7 Call
	var_21_float = var_129_float; // 0xb8 Mov
	var_130_bool = var_4_bool == 0; // 0xba Not
	if(var_130_bool == 0) goto Label_194; // 0xbb JumpB
	var_131_int = 0; // 0xbc PushI
	var_132_bool = var_21_float >= var_131_int; // 0xbd GE
	if(var_132_bool == 0) goto Label_193; // 0xbe JumpB
	var_8_float = var_21_float; // 0xbf TMov
	var_4_bool = 1; // 0xc0 TMovB
	
Label_193:
	return 14; // 0xc1 Return
	
Label_194:
	var_133_bool = var_8_float != var_21_float; // 0xc2 Neq
	if(var_133_bool == 0) goto Label_227; // 0xc3 JumpB
	var_134_int = 0; // 0xc4 PushI
	var_135_bool = var_21_float < var_134_int; // 0xc5 LT
	if(var_135_bool == 0) goto Label_200; // 0xc6 JumpB
	return 14; // 0xc7 Return
	
Label_200:
	var_7_float = var_6_float; // 0xc8 TMovT
	var_136_float = 0; // 0xc9 PushV
	func_278(var_136_float); // 0xca Call
	var_137_bool = var_8_float < var_136_float; // 0xcc LT
	if(var_137_bool == 0) goto Label_211; // 0xcd JumpB
	var_138_string = "rep_up"; // 0xce PushS
	PlaySound(var_138_string); // 0xcf Func
	var_2_bool = 1; // 0xd1 TMovB
	goto Label_226; // 0xd2 Jump
	
Label_226:
	return 14; // 0xe2 Return
	
Label_211:
	var_139_float = 0; // 0xd3 PushV
	func_278(var_139_float); // 0xd4 Call
	var_22_float = var_8_float - var_139_float; // 0xd6 Sub2
	var_140_float = 0.3; // 0xd7 PushF
	var_141_bool = var_22_float >= var_140_float; // 0xd8 GE
	if(var_141_bool == 0) goto Label_222; // 0xd9 JumpB
	var_142_string = "rep_down_big"; // 0xda PushS
	PlaySound(var_142_string); // 0xdb Func
	goto Label_225; // 0xdd Jump
	
Label_225:
	var_3_bool = 1; // 0xe1 TMovB
	
Label_222:
	var_143_string = "rep_down_small"; // 0xde PushS
	PlaySound(var_143_string); // 0xdf Func
	
Label_227:
	var_144_bool = 0; // 0xe3 PushV
	func_271(var_144_bool); // 0xe4 Call
	if(var_144_bool == 0) goto Label_237; // 0xe6 JumpB
	var_145_string = "exchange"; // 0xe7 PushS
	PlaySound(var_145_string); // 0xe8 Func
	var_7_float = var_6_float; // 0xea TMovT
	var_5_bool = 1; // 0xeb TMovB
	return 14; // 0xec Return
	
Label_237:
	var_146_bool = 0; // 0xed PushV
	func_257(var_146_bool); // 0xee Call
	if(var_146_bool == 0) goto Label_247; // 0xf0 JumpB
	var_147_string = "mail"; // 0xf1 PushS
	PlaySound(var_147_string); // 0xf2 Func
	var_7_float = var_6_float; // 0xf4 TMovT
	var_0_bool = 1; // 0xf5 TMovB
	return 14; // 0xf6 Return
	
Label_247:
	var_148_bool = 0; // 0xf7 PushV
	func_264(var_148_bool); // 0xf8 Call
	if(var_148_bool == 0) goto Label_256; // 0xfa JumpB
	var_149_string = "diary"; // 0xfb PushS
	PlaySound(var_149_string); // 0xfc Func
	var_7_float = var_6_float; // 0xfe TMovT
	var_1_bool = 1; // 0xff TMovB
	
Label_256:
	return 14; // 0x100 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_float, var_7_float, var_8_float)
{
	var_6_float = 0; // 0x0 TMovI
	var_0_bool = 0; // 0x1 TMovB
	var_1_bool = 0; // 0x2 TMovB
	var_2_bool = 0; // 0x3 TMovB
	var_3_bool = 0; // 0x4 TMovB
	var_5_bool = 0; // 0x5 TMovB
	var_8_float = -1; // 0x6 TMovI
	var_4_bool = 0; // 0x7 TMovB
	var_9_bool = 1; // 0x8 PushB
	SetOwnerDraw(var_9_bool); // 0x9 Func
	var_10_bool = 1; // 0xb PushB
	SetNeedUpdate(var_10_bool); // 0xc Func
	ProcessEvents(); // 0xe Func
	return 0; // 0x10 Return
}


func_264(var_108_bool)
{
	var_109_int = 0; var_110_int = 0; // 0x108 PushV
	var_111_string = "player_diary"; // 0x109 PushS
	GetVariable(var_111_string, var_110_int); // 0x10a Func
	var_112_int = 0; // 0x10c PushI
	var_108_bool = var_110_int != var_112_int; // 0x10d Neq2
	return 2; // 0x10e Return
}


func_257(var_86_bool)
{
	var_87_int = 0; var_88_int = 0; // 0x101 PushV
	var_89_string = "player_mail"; // 0x102 PushS
	GetVariable(var_89_string, var_88_int); // 0x103 Func
	var_90_int = 0; // 0x105 PushI
	var_86_bool = var_88_int != var_90_int; // 0x106 Neq2
	return 2; // 0x107 Return
}


func_278(var_31_float)
{
	var_32_object = Obj(); var_33_float = 0; var_34_object = Obj(); var_35_float = 0; // 0x116 PushV
	var_36_string = "player"; // 0x117 PushS
	FindActor(var_34_object, var_36_string); // 0x118 Func
	var_37_bool = var_34_object == 0; // 0x11a Not
	if(var_37_bool == 0) goto Label_286; // 0x11b JumpB
	var_31_float = -1; // 0x11c MovI
	return 4; // 0x11d Return
	
Label_286:
	var_38_string = "reputation"; // 0x11e PushS
	GetProperty(var_38_string, var_35_float); // 0x11f ObjFunc
	var_31_float = var_35_float; // 0x121 Mov
	return 4; // 0x122 Return
}


func_271(var_64_bool)
{
	var_65_int = 0; var_66_int = 0; // 0x10f PushV
	var_67_string = "player_exchange"; // 0x110 PushS
	GetVariable(var_67_string, var_66_int); // 0x111 Func
	var_68_int = 0; // 0x113 PushI
	var_64_bool = var_66_int != var_68_int; // 0x114 Neq2
	return 2; // 0x115 Return
}


