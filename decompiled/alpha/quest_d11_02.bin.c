task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_bool, var_9_string)
{
	var_10_object = Obj(); var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_bool = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_bool = 0; // 0x28 PushV
	Trace(var_9_string); // 0x29 Func
	var_22_string = "uprava_load"; // 0x2b PushS
	var_23_bool = var_9_string == var_22_string; // 0x2c Eq
	if(var_23_bool == 0) goto Label_52; // 0x2d JumpB
	var_24_bool = var_5_bool == 0; // 0x2e Not
	if(var_24_bool == 0) goto Label_51; // 0x2f JumpB
	func_17(var_19_int, var_20_object, var_21_bool); // 0x31 Call
	
Label_51:
	goto Label_220; // 0x33 Jump
	
Label_220:
	return 12; // 0xdc Return
	
Label_52:
	var_51_string = "init_graveyard"; // 0x34 PushS
	var_52_bool = var_9_string == var_51_string; // 0x35 Eq
	if(var_52_bool == 0) goto Label_122; // 0x36 JumpB
	var_53_string = "d11q02"; // 0x37 PushS
	var_54_int = 1; // 0x38 PushI
	SetVariable(var_53_string, var_54_int); // 0x39 Func
	GetMainOutdoorScene(var_16_object); // 0x3b Func
	var_55_string = "d11q02_trigger"; // 0x3d PushS
	var_56_cvector = CVector(0.0, 0.0, 0.0); // 0x3e PushVec
	var_57_cvector = CVector(0.0, 0.0, 1.0); // 0x3f PushVec
	var_58_string = "d11q02_trigger.xml"; // 0x40 PushS
	AddActor(var_57_cvector, var_55_string, var_16_object, var_56_cvector, var_57_cvector, var_58_string); // 0x41 Func
	var_17_int = 1; // 0x43 MovI
	
Label_68:
	var_59_int = 4; // 0x44 PushI
	var_60_bool = var_17_int <= var_59_int; // 0x45 LE
	if(var_60_bool == 0) goto Label_84; // 0x46 JumpB
	var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = ""; // 0x47 PushV
	var_62_object = var_16_object; // 0x48 Mov
	var_66_string = "pt_d11q02_soldier"; // 0x49 PushS
	var_63_string = var_66_string + var_17_int; // 0x4a Add2
	var_64_string = "pers_soldat"; // 0x4b MovS
	var_65_string = "d11q02_soldier.xml"; // 0x4c MovS
	func_327(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string); // 0x4d Call
	add(var_61_object); // 0x4f TObjFunc
	var_67_int = 1; // 0x51 PushI
	var_17_int = var_17_int + var_67_int; // 0x52 Add2
	goto Label_68; // 0x53 Jump
	
Label_84:
	var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = ""; // 0x54 PushV
	var_69_object = var_16_object; // 0x55 Mov
	var_70_string = "pt_d11q02_victim1"; // 0x56 MovS
	var_71_string = "pers_worker"; // 0x57 MovS
	var_72_string = "d11q02_victim1.xml"; // 0x58 MovS
	func_327(var_68_object, var_69_object, var_70_string, var_71_string, var_72_string); // 0x59 Call
	add(var_68_object); // 0x5b TObjFunc
	var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = ""; // 0x5d PushV
	var_74_object = var_16_object; // 0x5e Mov
	var_75_string = "pt_d11q02_victim2"; // 0x5f MovS
	var_76_string = "pers_worker"; // 0x60 MovS
	var_77_string = "d11q02_victim2.xml"; // 0x61 MovS
	func_327(var_73_object, var_74_object, var_75_string, var_76_string, var_77_string); // 0x62 Call
	add(var_73_object); // 0x64 TObjFunc
	var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = ""; // 0x66 PushV
	var_79_object = var_16_object; // 0x67 Mov
	var_80_string = "pt_d11q02_victim3"; // 0x68 MovS
	var_81_string = "pers_unosha"; // 0x69 MovS
	var_82_string = "d11q02_victim3.xml"; // 0x6a MovS
	func_327(var_78_object, var_79_object, var_80_string, var_81_string, var_82_string); // 0x6b Call
	add(var_78_object); // 0x6d TObjFunc
	var_83_object = Obj(); var_84_object = Obj(); var_85_string = ""; var_86_string = ""; var_87_string = ""; // 0x6f PushV
	var_84_object = var_16_object; // 0x70 Mov
	var_85_string = "pt_d11q02_victim4"; // 0x71 MovS
	var_86_string = "pers_unosha"; // 0x72 MovS
	var_87_string = "d11q02_victim4.xml"; // 0x73 MovS
	func_327(var_83_object, var_84_object, var_85_string, var_86_string, var_87_string); // 0x74 Call
	add(var_83_object); // 0x76 TObjFunc
	var_16_object = 0; // 0x78 SetNull
	goto Label_220; // 0x79 Jump
	
Label_122:
	var_88_string = "d11q02_trigger"; // 0x7a PushS
	var_89_bool = var_9_string == var_88_string; // 0x7b Eq
	if(var_89_bool == 0) goto Label_132; // 0x7c JumpB
	var_90_object = Obj(); var_91_string = ""; // 0x7d PushV
	var_90_object = var_3_object; // 0x7e MovT
	var_91_string = "execute"; // 0x7f MovS
	func_364(var_91_string); // 0x80 Call
	var_6_bool = 1; // 0x82 TMovB
	goto Label_220; // 0x83 Jump
	
Label_132:
	var_101_string = "execute"; // 0x84 PushS
	var_102_bool = var_9_string == var_101_string; // 0x85 Eq
	if(var_102_bool == 0) goto Label_145; // 0x86 JumpB
	var_103_object = Obj(); var_104_string = ""; // 0x87 PushV
	var_103_object = var_4_object; // 0x88 MovT
	var_104_string = "execute"; // 0x89 MovS
	func_364(var_104_string); // 0x8a Call
	var_6_bool = 0; // 0x8c TMovB
	func_232(); // 0x8e Call
	goto Label_220; // 0x90 Jump
	
Label_145:
	var_117_string = "soldier_attack"; // 0x91 PushS
	var_118_bool = var_9_string == var_117_string; // 0x92 Eq
	if(var_118_bool == 0) goto Label_154; // 0x93 JumpB
	var_119_object = Obj(); var_120_string = ""; // 0x94 PushV
	var_119_object = var_3_object; // 0x95 MovT
	var_120_string = "attack"; // 0x96 MovS
	func_364(var_120_string); // 0x97 Call
	goto Label_220; // 0x99 Jump
	
Label_154:
	var_121_string = "actor_unload"; // 0x9a PushS
	var_122_bool = var_9_string == var_121_string; // 0x9b Eq
	if(var_122_bool == 0) goto Label_176; // 0x9c JumpB
	var_123_int = var_7_int; // 0x9d PushT
	if(var_123_int == 0) goto Label_166; // 0x9e JumpB
	var_124_int = 1; // 0x9f PushI
	var_125_bool = var_7_int == var_124_int; // 0xa0 Eq
	if(var_125_bool == 0) goto Label_165; // 0xa1 JumpB
	func_248(var_19_int, var_20_object, var_21_bool); // 0xa3 Call
	
Label_165:
	goto Label_175; // 0xa5 Jump
	
Label_175:
	goto Label_220; // 0xaf Jump
	
Label_166:
	var_139_bool = var_6_bool; // 0xa6 PushT
	if(var_139_bool == 0) goto Label_175; // 0xa7 JumpB
	var_6_bool = 0; // 0xa8 TMovB
	func_232(); // 0xaa Call
	func_248(var_19_int, var_20_object, var_21_bool); // 0xad Call
	
Label_176:
	var_140_string = "soldier_dead"; // 0xb0 PushS
	var_141_bool = var_9_string == var_140_string; // 0xb1 Eq
	if(var_141_bool == 0) goto Label_207; // 0xb2 JumpB
	size(var_18_int); // 0xb3 TObjFunc
	var_19_int = 0; // 0xb5 MovI
	
Label_182:
	var_142_bool = var_19_int < var_18_int; // 0xb6 LT
	if(var_142_bool == 0) goto Label_197; // 0xb7 JumpB
	get(var_20_object, var_19_int); // 0xb8 TObjFunc
	var_143_object = var_20_object; // 0xba Push
	if(var_143_object == 0) goto Label_193; // 0xbb JumpB
	IsDead(var_21_bool); // 0xbc ObjFunc
	var_144_bool = var_21_bool == 0; // 0xbe Not
	if(var_144_bool == 0) goto Label_193; // 0xbf JumpB
	goto Label_197; // 0xc0 Jump
	
Label_197:
	var_145_bool = var_19_int == var_18_int; // 0xc5 Eq
	if(var_145_bool == 0) goto Label_206; // 0xc6 JumpB
	var_146_string = "d11q02"; // 0xc7 PushS
	var_147_int = 2; // 0xc8 PushI
	SetVariable(var_146_string, var_147_int); // 0xc9 Func
	var_148_bool = var_7_int == 0; // 0xcb Not
	if(var_148_bool == 0) goto Label_206; // 0xcc JumpB
	var_7_int = 1; // 0xcd TMovI
	
Label_206:
	goto Label_220; // 0xce Jump
	
Label_193:
	var_20_object = 0; // 0xc1 SetNull
	var_149_int = 1; // 0xc2 PushI
	var_19_int = var_19_int + var_149_int; // 0xc3 Add2
	goto Label_182; // 0xc4 Jump
	
Label_207:
	var_150_string = "fail"; // 0xcf PushS
	var_151_bool = var_9_string == var_150_string; // 0xd0 Eq
	if(var_151_bool == 0) goto Label_214; // 0xd1 JumpB
	func_232(); // 0xd3 Call
	goto Label_220; // 0xd5 Jump
	
Label_214:
	var_152_string = "completed"; // 0xd6 PushS
	var_153_bool = var_9_string == var_152_string; // 0xd7 Eq
	if(var_153_bool == 0) goto Label_220; // 0xd8 JumpB
	func_240(); // 0xda Call
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_bool, var_9_int, var_10_float)
{
	func_221(); // 0x138 Call
	return 0; // 0x13a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_bool)
{
	var_9_object = Obj(); // 0x0 PushV
	func_321(var_9_object); // 0x1 Call
	var_3_object = var_9_object; // 0x2 TMov
	var_12_object = Obj(); // 0x4 PushV
	func_321(var_12_object); // 0x5 Call
	var_4_object = var_12_object; // 0x6 TMov
	var_5_bool = 0; // 0x8 TMovB
	var_6_bool = 0; // 0x9 TMovB
	var_7_int = 0; // 0xa TMovI
	var_8_bool = 0; // 0xb TMovB
	var_13_int = 0; // 0xc PushV
	var_13_int = 11; // 0xd MovI
	func_291(var_13_int); // 0xe Call
	return 0; // 0x10 Return
}


func_321(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x141 PushV
	CreateObjectVector(var_11_object); // 0x142 Func
	var_9_object = var_11_object; // 0x144 Mov
	return 2; // 0x145 Return
}


func_291(var_13_int)
{
	var_14_float = 0; var_15_float = 0; // 0x123 PushV
	GetGameTime(var_15_float); // 0x124 Func
	var_16_int = 24; // 0x126 PushI
	var_17_float = var_13_int * var_16_int; // 0x127 Mult
	var_18_bool = var_15_float >= var_17_float; // 0x128 GE
	if(var_18_bool == 0) goto Label_302; // 0x129 JumpB
	func_265(var_8_bool, var_13_int, var_14_float, var_15_float); // 0x12b Call
	goto Label_309; // 0x12d Jump
	
Label_309:
	return 2; // 0x135 Return
	
Label_302:
	var_29_int = 0; // 0x12e PushI
	var_30_int = 24; // 0x12f PushI
	var_31_float = var_13_int * var_30_int; // 0x130 Mult
	SetTimeEvent(var_29_int, var_31_float); // 0x131 Func
	Hold(); // 0x133 Func
}


func_327(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string)
{
	var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_object = Obj(); // 0x147 PushV
	GetLocator(var_30_string, var_37_bool, var_38_cvector, var_39_cvector); // 0x148 ObjFunc
	var_41_bool = var_37_bool == 0; // 0x14a Not
	if(var_41_bool == 0) goto Label_340; // 0x14b JumpB
	var_42_string = "Locator "; // 0x14c PushS
	var_43_int = var_42_string + var_30_string; // 0x14d Add
	var_44_string = " doesn't exist"; // 0x14e PushS
	var_45_int = var_43_int + var_44_string; // 0x14f Add
	Trace(var_45_int); // 0x150 Func
	var_40_object = 0; // 0x152 SetNull
	goto Label_342; // 0x153 Jump
	
Label_342:
	var_28_object = var_40_object; // 0x156 Mov
	return 8; // 0x157 Return
	
Label_340:
	AddActor(var_40_object, var_31_string, var_29_object, var_38_cvector, var_39_cvector, var_32_string); // 0x154 Func
}


func_232()
{
	var_16_string = "d11q02"; // 0xe8 PushS
	var_17_int = -1; // 0xe9 PushI
	SetVariable(var_16_string, var_17_int); // 0xea Func
	func_265(var_9_int, var_10_float, var_11_int, var_12_int); // 0xed Call
	return 0; // 0xef Return
}


func_265(var_0_object, var_7_int, var_8_bool, var_14_float)
{
	var_19_object = var_0_object; // 0x109 PushT
	if(var_19_object == 0) goto Label_270; // 0x10a JumpB
	var_20_string = "cleanup"; // 0x10b PushS
	Trigger(var_0_object, var_20_string); // 0x10c Func
	
Label_270:
	var_21_object = var_1_object; // 0x10e PushT
	if(var_21_object == 0) goto Label_275; // 0x10f JumpB
	var_22_string = "cleanup"; // 0x110 PushS
	Trigger(var_22_string, var_22_string); // 0x111 Func
	
Label_275:
	var_23_object = var_2_object; // 0x113 PushT
	if(var_23_object == 0) goto Label_279; // 0x114 JumpB
	RemoveActor(var_14_float); // 0x115 Func
	
Label_279:
	var_24_int = 2; // 0x117 PushI
	var_25_bool = var_7_int == var_24_int; // 0x118 Eq
	if(var_25_bool == 0) goto Label_288; // 0x119 JumpB
	var_26_object = Obj(); // 0x11a PushV
	func_315(var_26_object); // 0x11b Call
	RemoveActor(var_26_object); // 0x11d Func
	goto Label_289; // 0x11f Jump
	
Label_289:
	var_8_bool = 1; // 0x121 TMovB
	return 0; // 0x122 Return
	
Label_288:
	var_7_int = 1; // 0x120 TMovI
}


func_364(var_91_string)
{
	var_92_int = 0; var_93_int = 0; var_94_object = Obj(); var_95_int = 0; var_96_int = 0; var_97_object = Obj(); // 0x16c PushV
	size(var_95_int); // 0x16d ObjFunc
	var_96_int = 0; // 0x16f MovI
	
Label_368:
	var_98_bool = var_96_int < var_95_int; // 0x170 LT
	if(var_98_bool == 0) goto Label_380; // 0x171 JumpB
	get(var_97_object, var_96_int); // 0x172 ObjFunc
	var_99_object = var_97_object; // 0x174 Push
	if(var_99_object == 0) goto Label_376; // 0x175 JumpB
	Trigger(var_97_object, var_91_string); // 0x176 Func
	
Label_376:
	var_97_object = 0; // 0x178 SetNull
	var_100_int = 1; // 0x179 PushI
	var_96_int = var_96_int + var_100_int; // 0x17a Add2
	goto Label_368; // 0x17b Jump
	
Label_380:
	return 6; // 0x17c Return
}


func_240()
{
	var_154_string = "d11q02"; // 0xf0 PushS
	var_155_int = 1000; // 0xf1 PushI
	SetVariable(var_154_string, var_155_int); // 0xf2 Func
	func_265(var_18_int, var_19_int, var_20_object, var_21_bool); // 0xf5 Call
	return 0; // 0xf7 Return
}


func_17(var_0_object, var_1_object, var_5_bool)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x11 PushV
	var_27_string = "uprava_admin"; // 0x12 PushS
	GetSceneByName(var_26_object, var_27_string); // 0x13 Func
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = ""; // 0x15 PushV
	var_29_object = var_26_object; // 0x16 Mov
	var_30_string = "pt_d11q02_girl"; // 0x17 MovS
	var_31_string = "pers_littlegirl"; // 0x18 MovS
	var_32_string = "d11q02_littlegirl.xml"; // 0x19 MovS
	func_327(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string); // 0x1a Call
	var_0_object = var_28_object; // 0x1b TMov
	var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = ""; // 0x1d PushV
	var_47_object = var_26_object; // 0x1e Mov
	var_48_string = "pt_d11q02_boy"; // 0x1f MovS
	var_49_string = "pers_littleboy"; // 0x20 MovS
	var_50_string = "d11q02_littleboy.xml"; // 0x21 MovS
	func_327(var_46_object, var_47_object, var_48_string, var_49_string, var_50_string); // 0x22 Call
	var_1_object = var_46_object; // 0x23 TMov
	var_5_bool = 1; // 0x25 TMovB
	return 2; // 0x26 Return
}


func_248(var_3_object, var_4_object, var_7_int)
{
	var_126_object = Obj(); // 0xf8 PushV
	var_126_object = var_3_object; // 0xf9 MovT
	func_345(); // 0xfa Call
	var_136_object = Obj(); // 0xfc PushV
	var_136_object = var_4_object; // 0xfd MovT
	func_345(); // 0xfe Call
	var_137_bool = var_8_bool; // 0x100 PushT
	if(var_137_bool == 0) goto Label_263; // 0x101 JumpB
	var_138_object = Obj(); // 0x102 PushV
	func_315(var_138_object); // 0x103 Call
	RemoveActor(var_138_object); // 0x105 Func
	
Label_263:
	var_7_int = 2; // 0x107 TMovI
	return 0; // 0x108 Return
}


func_345()
{
	var_127_int = 0; var_128_int = 0; var_129_object = Obj(); var_130_int = 0; var_131_int = 0; var_132_object = Obj(); // 0x159 PushV
	size(var_130_int); // 0x15a ObjFunc
	var_131_int = 0; // 0x15c MovI
	
Label_349:
	var_133_bool = var_131_int < var_130_int; // 0x15d LT
	if(var_133_bool == 0) goto Label_361; // 0x15e JumpB
	get(var_132_object, var_131_int); // 0x15f ObjFunc
	var_134_object = var_132_object; // 0x161 Push
	if(var_134_object == 0) goto Label_357; // 0x162 JumpB
	RemoveActor(var_132_object); // 0x163 Func
	
Label_357:
	var_132_object = 0; // 0x165 SetNull
	var_135_int = 1; // 0x166 PushI
	var_131_int = var_131_int + var_135_int; // 0x167 Add2
	goto Label_349; // 0x168 Jump
	
Label_361:
	clear(); // 0x169 ObjFunc
	return 6; // 0x16b Return
}


func_315(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x13b PushV
	self(var_28_object); // 0x13c Func
	var_26_object = var_28_object; // 0x13e Mov
	return 2; // 0x13f Return
}


func_221()
{
	var_11_int = 0; var_12_int = 0; // 0xdd PushV
	var_13_string = "d11q02"; // 0xde PushS
	GetVariable(var_13_string, var_12_int); // 0xdf Func
	var_14_int = 1000; // 0xe1 PushI
	var_15_bool = var_12_int != var_14_int; // 0xe2 Neq
	if(var_15_bool == 0) goto Label_231; // 0xe3 JumpB
	func_232(); // 0xe5 Call
	
Label_231:
	return 2; // 0xe7 Return
}


