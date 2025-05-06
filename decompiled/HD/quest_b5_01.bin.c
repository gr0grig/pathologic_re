task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	var_6_int = 0; var_7_float = 0; // 0xe PushV
	var_7_float = var_5_float; // 0xf Mov
	func_445(var_6_int, var_7_float); // 0x10 NEW_2
	return 0; // 0x12 Return
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_float = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_float = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; // 0x13 PushV
	Trace(var_4_string); // 0x14 Func
	var_29_string = "vera_kabak"; // 0x16 PushS
	var_30_bool = var_4_string == var_29_string; // 0x17 Eq
	if(var_30_bool == 0) goto Label_38; // 0x18 JumpB
	var_31_string = "shouse1_kabak"; // 0x19 PushS
	GetSceneByName(var_17_object, var_31_string); // 0x1a Func
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = ""; // 0x1c PushV
	var_33_object = var_17_object; // 0x1d Mov
	var_34_string = "pt_b5q01_vera"; // 0x1e MovS
	var_35_string = "pers_nudegirl"; // 0x1f MovS
	var_36_string = "b5q01_vera1.xml"; // 0x20 MovS
	func_326(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string); // 0x21 NEW_2
	var_0_object = var_32_object; // 0x22 TMov
	var_17_object = 0; // 0x24 SetNull
	goto Label_217; // 0x25 Jump
	
Label_217:
	return 24; // 0xd9 Return
	
Label_38:
	var_50_string = "vera_stvorki"; // 0x26 PushS
	var_51_bool = var_4_string == var_50_string; // 0x27 Eq
	if(var_51_bool == 0) goto Label_63; // 0x28 JumpB
	var_52_string = "cleanup"; // 0x29 PushS
	Trigger(var_0_object, var_52_string); // 0x2a Func
	GetMainOutdoorScene(var_18_object); // 0x2c Func
	var_53_object = Obj(); var_54_object = Obj(); var_55_string = ""; var_56_string = ""; var_57_string = ""; // 0x2e PushV
	var_54_object = var_18_object; // 0x2f Mov
	var_55_string = "pt_b5q01_vera"; // 0x30 MovS
	var_56_string = "pers_nudegirl"; // 0x31 MovS
	var_57_string = "b5q01_vera2.xml"; // 0x32 MovS
	func_344(var_54_object, var_55_string, var_56_string, var_57_string); // 0x33 NEW_2
	var_1_object = var_53_object; // 0x34 TMov
	GetGameTime(var_19_float); // 0x36 Func
	var_71_int = 1; // 0x38 PushI
	var_19_float = var_19_float + var_71_int; // 0x39 Add2
	var_72_int = 0; // 0x3a PushI
	SetTimeEvent(var_72_int, var_19_float); // 0x3b Func
	var_18_object = 0; // 0x3d SetNull
	goto Label_217; // 0x3e Jump
	
Label_63:
	var_73_string = "vera_retreat"; // 0x3f PushS
	var_74_bool = var_4_string == var_73_string; // 0x40 Eq
	if(var_74_bool == 0) goto Label_73; // 0x41 JumpB
	GetActor(var_20_object); // 0x42 TObjFunc
	var_75_string = "retreat"; // 0x44 PushS
	Trigger(var_20_object, var_75_string); // 0x45 Func
	var_20_object = 0; // 0x47 SetNull
	goto Label_217; // 0x48 Jump
	
Label_73:
	var_76_string = "place_butchers"; // 0x49 PushS
	var_77_bool = var_4_string == var_76_string; // 0x4a Eq
	if(var_77_bool == 0) goto Label_115; // 0x4b JumpB
	GetMainOutdoorScene(var_21_object); // 0x4c Func
	var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = ""; // 0x4e PushV
	var_79_object = var_21_object; // 0x4f Mov
	var_80_string = "pt_b5q01_butcher1"; // 0x50 MovS
	var_81_string = "pers_butcher"; // 0x51 MovS
	var_82_string = "b5q01_butcher.xml"; // 0x52 MovS
	func_344(var_79_object, var_80_string, var_81_string, var_82_string); // 0x53 NEW_2
	add(var_78_object); // 0x55 TObjFunc
	var_83_object = Obj(); var_84_object = Obj(); var_85_string = ""; var_86_string = ""; var_87_string = ""; // 0x57 PushV
	var_84_object = var_21_object; // 0x58 Mov
	var_85_string = "pt_b5q01_butcher2"; // 0x59 MovS
	var_86_string = "pers_butcher"; // 0x5a MovS
	var_87_string = "b5q01_butcher.xml"; // 0x5b MovS
	func_344(var_84_object, var_85_string, var_86_string, var_87_string); // 0x5c NEW_2
	add(var_83_object); // 0x5e TObjFunc
	var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = ""; // 0x60 PushV
	var_89_object = var_21_object; // 0x61 Mov
	var_90_string = "pt_b5q01_butcher3"; // 0x62 MovS
	var_91_string = "pers_butcher"; // 0x63 MovS
	var_92_string = "b5q01_butcher.xml"; // 0x64 MovS
	func_344(var_89_object, var_90_string, var_91_string, var_92_string); // 0x65 NEW_2
	add(var_88_object); // 0x67 TObjFunc
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = ""; // 0x69 PushV
	var_94_object = var_21_object; // 0x6a Mov
	var_95_string = "pt_b5q01_nudegirl"; // 0x6b MovS
	var_96_string = "pers_nudegirl"; // 0x6c MovS
	var_97_string = "b5q01_gwife.xml"; // 0x6d MovS
	func_344(var_94_object, var_95_string, var_96_string, var_97_string); // 0x6e NEW_2
	var_3_object = var_93_object; // 0x6f TMov
	var_21_object = 0; // 0x71 SetNull
	goto Label_217; // 0x72 Jump
	
Label_115:
	var_98_string = "butcher_attack"; // 0x73 PushS
	var_99_bool = var_4_string == var_98_string; // 0x74 Eq
	if(var_99_bool == 0) goto Label_152; // 0x75 JumpB
	size(var_22_int); // 0x76 TObjFunc
	var_23_int = 0; // 0x78 MovI
	
Label_121:
	var_100_bool = var_23_int < var_22_int; // 0x79 LT
	if(var_100_bool == 0) goto Label_139; // 0x7a JumpB
	get(var_24_object, var_23_int); // 0x7b TObjFunc
	var_101_object = var_24_object; // 0x7d Push
	if(var_101_object == 0) goto Label_135; // 0x7e JumpB
	GetActor(var_25_object); // 0x7f ObjFunc
	var_102_object = var_25_object; // 0x81 Push
	if(var_102_object == 0) goto Label_134; // 0x82 JumpB
	var_103_string = "attack"; // 0x83 PushS
	Trigger(var_25_object, var_103_string); // 0x84 Func
	
Label_134:
	var_25_object = 0; // 0x86 SetNull
	
Label_135:
	var_24_object = 0; // 0x87 SetNull
	var_104_int = 1; // 0x88 PushI
	var_23_int = var_23_int + var_104_int; // 0x89 Add2
	goto Label_121; // 0x8a Jump
	
Label_139:
	var_105_object = var_3_object; // 0x8b PushT
	if(var_105_object == 0) goto Label_151; // 0x8c JumpB
	GetActor(var_26_object); // 0x8d TObjFunc
	var_106_object = var_26_object; // 0x8f Push
	if(var_106_object == 0) goto Label_148; // 0x90 JumpB
	var_107_string = "retreat"; // 0x91 PushS
	Trigger(var_26_object, var_107_string); // 0x92 Func
	
Label_148:
	Remove(); // 0x94 TObjFunc
	var_26_object = 0; // 0x96 SetNull
	
Label_151:
	goto Label_217; // 0x97 Jump
	
Label_152:
	var_108_string = "gwife_dead"; // 0x98 PushS
	var_109_bool = var_4_string == var_108_string; // 0x99 Eq
	if(var_109_bool == 0) goto Label_171; // 0x9a JumpB
	var_110_string = "b5q01WifeDead"; // 0x9b PushS
	var_111_int = 1; // 0x9c PushI
	SetVariable(var_110_string, var_111_int); // 0x9d Func
	var_112_string = "player"; // 0x9f PushS
	FindActor(var_27_object, var_112_string); // 0xa0 Func
	var_113_object = var_27_object; // 0xa2 Push
	if(var_113_object == 0) goto Label_169; // 0xa3 JumpB
	var_114_bool = 0; var_115_object = Obj(); var_116_float = 0; // 0xa4 PushV
	var_115_object = var_27_object; // 0xa5 Mov
	var_116_float = 0.5; // 0xa6 MovF
	func_379(var_114_bool, var_115_object, var_116_float); // 0xa7 NEW_2
	
Label_169:
	var_27_object = 0; // 0xa9 SetNull
	goto Label_217; // 0xaa Jump
	
Label_171:
	var_152_string = "cleanup"; // 0xab PushS
	var_153_bool = var_4_string == var_152_string; // 0xac Eq
	if(var_153_bool == 0) goto Label_188; // 0xad JumpB
	var_154_string = "b5q01"; // 0xae PushS
	GetVariable(var_154_string, var_28_int); // 0xaf Func
	var_155_int = 1000; // 0xb1 PushI
	var_156_bool = var_28_int != var_155_int; // 0xb2 Neq
	if(var_156_bool == 0) goto Label_184; // 0xb3 JumpB
	func_218(); // 0xb5 NEW_2
	goto Label_187; // 0xb7 Jump
	
Label_187:
	goto Label_217; // 0xbb Jump
	
Label_184:
	func_234(var_27_object, var_28_int); // 0xb9 NEW_2
	
Label_188:
	var_177_string = "cutscene"; // 0xbc PushS
	var_178_bool = var_4_string == var_177_string; // 0xbd Eq
	if(var_178_bool == 0) goto Label_196; // 0xbe JumpB
	var_179_object = Obj(); var_180_string = ""; // 0xbf PushV
	var_180_string = "cs_burah_danko_microscope"; // 0xc0 MovS
	func_315(var_179_object, var_180_string); // 0xc1 NEW_2
	goto Label_217; // 0xc3 Jump
	
Label_196:
	var_187_string = "cutscene_end"; // 0xc4 PushS
	var_188_bool = var_4_string == var_187_string; // 0xc5 Eq
	if(var_188_bool == 0) goto Label_204; // 0xc6 JumpB
	var_189_string = "b5q01MicroscopeCS"; // 0xc7 PushS
	var_190_int = 1; // 0xc8 PushI
	SetVariable(var_189_string, var_190_int); // 0xc9 Func
	goto Label_217; // 0xcb Jump
	
Label_204:
	var_191_string = "fail"; // 0xcc PushS
	var_192_bool = var_4_string == var_191_string; // 0xcd Eq
	if(var_192_bool == 0) goto Label_211; // 0xce JumpB
	func_218(); // 0xd0 NEW_2
	goto Label_217; // 0xd2 Jump
	
Label_211:
	var_193_string = "completed"; // 0xd3 PushS
	var_194_bool = var_4_string == var_193_string; // 0xd4 Eq
	if(var_194_bool == 0) goto Label_217; // 0xd5 JumpB
	func_226(); // 0xd7 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_string = ""; var_5_bool = 0; // 0x0 PushV
	var_4_string = "cot_alexandr@door1"; // 0x1 MovS
	var_5_bool = 0; // 0x2 MovB
	func_362(var_4_string, var_5_bool); // 0x3 NEW_2
	var_14_object = Obj(); // 0x5 PushV
	func_309(var_14_object); // 0x6 NEW_2
	var_2_object = var_14_object; // 0x7 TMov
	
Label_9:
	Hold(); // 0x9 Func
	goto Label_9; // 0xb Jump
}


func_258(var_133_bool, var_134_object, var_135_string)
{
	var_136_bool = 0; var_137_bool = 0; // 0x102 PushV
	var_138_string = "HasProperty"; // 0x103 PushS
	var_139_int = 2; // 0x104 PushI
	var_140_bool = IsFuncExist(var_134_object, var_138_string, var_139_int); // 0x105 FuncExist
	var_141_bool = var_140_bool == 0; // 0x106 Not
	if(var_141_bool == 0) goto Label_266; // 0x107 JumpB
	var_133_bool = 0; // 0x108 MovB
	return 2; // 0x109 Return
	
Label_266:
	HasProperty(var_135_string, var_137_bool); // 0x10a ObjFunc
	var_133_bool = var_137_bool; // 0x10c Mov
	return 2; // 0x10d Return
}


func_454(var_8_int, var_9_int, var_10_int, var_11_float)
{
	var_12_int = 0; var_13_int = 0; // 0x1c6 PushV
	AddMessage(var_9_int, var_10_int, var_11_float, var_13_int); // 0x1c7 Func
	var_14_int = 6; // 0x1c9 PushI
	SendWorldWndMessage(var_14_int); // 0x1ca Func
	var_8_int = var_13_int; // 0x1cc Mov
	return 2; // 0x1cd Return
}


func_326(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string)
{
	var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_object = Obj(); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x146 PushV
	GetLocator(var_34_string, var_41_bool, var_42_cvector, var_43_cvector); // 0x147 ObjFunc
	var_45_bool = var_41_bool == 0; // 0x149 Not
	if(var_45_bool == 0) goto Label_339; // 0x14a JumpB
	var_46_string = "Locator "; // 0x14b PushS
	var_47_int = var_46_string + var_34_string; // 0x14c Add
	var_48_string = " doesn't exist"; // 0x14d PushS
	var_49_int = var_47_int + var_48_string; // 0x14e Add
	Trace(var_49_int); // 0x14f Func
	var_44_object = 0; // 0x151 SetNull
	goto Label_341; // 0x152 Jump
	
Label_341:
	var_32_object = var_44_object; // 0x155 Mov
	return 8; // 0x156 Return
	
Label_339:
	AddActor(var_44_object, var_35_string, var_33_object, var_42_cvector, var_43_cvector, var_36_string); // 0x153 Func
}


func_270(var_125_bool, var_126_object, var_127_string, var_128_float, var_129_float, var_130_float)
{
	var_131_float = 0; var_132_float = 0; // 0x10e PushV
	var_133_bool = 0; var_134_object = Obj(); var_135_string = ""; // 0x10f PushV
	var_134_object = var_126_object; // 0x110 Mov
	var_135_string = var_127_string; // 0x111 Mov
	func_258(var_133_bool, var_134_object, var_135_string); // 0x112 NEW_2
	var_142_bool = var_133_bool == 0; // 0x114 Not
	if(var_142_bool == 0) goto Label_280; // 0x115 JumpB
	var_125_bool = 0; // 0x116 MovB
	return 2; // 0x117 Return
	
Label_280:
	GetProperty(var_127_string, var_132_float); // 0x118 ObjFunc
	var_143_float = 0; var_144_float = 0; var_145_float = 0; var_146_float = 0; // 0x11a PushV
	var_144_float = var_132_float + var_128_float; // 0x11b Add2
	var_145_float = var_129_float; // 0x11c Mov
	var_146_float = var_130_float; // 0x11d Mov
	func_298(var_143_float, var_144_float, var_145_float, var_146_float); // 0x11e NEW_2
	SetProperty(var_127_string, var_143_float); // 0x120 ObjFunc
	var_125_bool = 1; // 0x122 MovB
	return 2; // 0x123 Return
}


func_344(var_53_object, var_55_string, var_56_string, var_57_string)
{
	var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_object = Obj(); var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_object = Obj(); // 0x158 PushV
	GetLocator(var_55_string, var_62_bool, var_63_cvector, var_64_cvector); // 0x159 ObjFunc
	var_66_bool = var_62_bool == 0; // 0x15b Not
	if(var_66_bool == 0) goto Label_357; // 0x15c JumpB
	var_67_string = "Locator "; // 0x15d PushS
	var_68_int = var_67_string + var_55_string; // 0x15e Add
	var_69_string = " doesn't exist"; // 0x15f PushS
	var_70_int = var_68_int + var_69_string; // 0x160 Add
	Trace(var_70_int); // 0x161 Func
	var_65_object = 0; // 0x163 SetNull
	goto Label_359; // 0x164 Jump
	
Label_359:
	var_53_object = var_65_object; // 0x167 Mov
	return 8; // 0x168 Return
	
Label_357:
	AddStationaryActor(var_65_object, var_63_cvector, var_64_cvector, var_56_string, var_57_string); // 0x165 ObjFunc
}


func_218()
{
	var_157_string = "b5q01"; // 0xda PushS
	var_158_int = -1; // 0xdb PushI
	SetVariable(var_157_string, var_158_int); // 0xdc Func
	func_234(var_27_object, var_28_int); // 0xdf NEW_2
	return 0; // 0xe1 Return
}


func_414(var_121_float)
{
	var_122_object = Obj(); var_123_object = Obj(); // 0x19e PushV
	CreateFloatVector(var_123_object); // 0x19f Func
	add(var_121_float); // 0x1a1 ObjFunc
	var_124_int = 16; // 0x1a3 PushI
	SendWorldWndMessage(var_124_int, var_123_object); // 0x1a4 Func
	return 2; // 0x1a6 Return
}


func_226()
{
	var_195_string = "b5q01"; // 0xe2 PushS
	var_196_int = 1000; // 0xe3 PushI
	SetVariable(var_195_string, var_196_int); // 0xe4 Func
	func_234(var_27_object, var_28_int); // 0xe7 NEW_2
	return 0; // 0xe9 Return
}


func_292(var_174_object)
{
	var_175_object = Obj(); var_176_object = Obj(); // 0x124 PushV
	self(var_176_object); // 0x125 Func
	var_174_object = var_176_object; // 0x127 Mov
	return 2; // 0x128 Return
}


func_424(var_162_object)
{
	var_163_int = 0; var_164_int = 0; var_165_object = Obj(); var_166_int = 0; var_167_int = 0; var_168_object = Obj(); // 0x1a8 PushV
	var_169_object = var_162_object; // 0x1a9 Push
	if(var_169_object == 0) goto Label_444; // 0x1aa JumpB
	size(var_166_int); // 0x1ab ObjFunc
	var_167_int = 0; // 0x1ad MovI
	
Label_430:
	var_170_bool = var_167_int < var_166_int; // 0x1ae LT
	if(var_170_bool == 0) goto Label_442; // 0x1af JumpB
	get(var_168_object, var_167_int); // 0x1b0 ObjFunc
	var_171_object = var_168_object; // 0x1b2 Push
	if(var_171_object == 0) goto Label_438; // 0x1b3 JumpB
	Remove(); // 0x1b4 ObjFunc
	
Label_438:
	var_168_object = 0; // 0x1b6 SetNull
	var_172_int = 1; // 0x1b7 PushI
	var_167_int = var_167_int + var_172_int; // 0x1b8 Add2
	goto Label_430; // 0x1b9 Jump
	
Label_442:
	clear(); // 0x1ba ObjFunc
	
Label_444:
	return 6; // 0x1bc Return
}


func_362(var_4_string, var_5_bool)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x16a PushV
	FindActor(var_7_object, var_4_string); // 0x16b Func
	var_8_bool = var_7_object == 0; // 0x16d Not
	if(var_8_bool == 0) goto Label_374; // 0x16e JumpB
	var_9_string = "Door "; // 0x16f PushS
	var_10_int = var_9_string + var_4_string; // 0x170 Add
	var_11_string = " not found"; // 0x171 PushS
	var_12_int = var_10_int + var_11_string; // 0x172 Add
	Trace(var_12_int); // 0x173 Func
	goto Label_377; // 0x175 Jump
	
Label_377:
	return 2; // 0x179 Return
	
Label_374:
	var_13_string = "locked"; // 0x176 PushS
	SetProperty(var_13_string, var_5_bool); // 0x177 ObjFunc
}


func_234(var_0_object, var_2_object)
{
	EventDisable(9); // 0xea EventDisable
	var_159_object = var_0_object; // 0xeb PushT
	if(var_159_object == 0) goto Label_240; // 0xec JumpB
	var_160_string = "cleanup"; // 0xed PushS
	Trigger(var_0_object, var_160_string); // 0xee Func
	
Label_240:
	var_161_object = var_1_object; // 0xf0 PushT
	if(var_161_object == 0) goto Label_244; // 0xf1 JumpB
	Remove(); // 0xf2 TObjFunc
	
Label_244:
	var_162_object = Obj(); // 0xf4 PushV
	var_162_object = var_2_object; // 0xf5 MovT
	func_424(var_162_object); // 0xf6 NEW_2
	var_173_object = var_3_object; // 0xf8 PushT
	if(var_173_object == 0) goto Label_252; // 0xf9 JumpB
	Remove(); // 0xfa TObjFunc
	
Label_252:
	var_174_object = Obj(); // 0xfc PushV
	func_292(var_174_object); // 0xfd NEW_2
	RemoveActor(var_174_object); // 0xff Func
	return 0; // 0x101 Return
}


func_298(var_143_float, var_144_float, var_145_float, var_146_float)
{
	var_147_bool = var_144_float < var_145_float; // 0x12b LT
	if(var_147_bool == 0) goto Label_303; // 0x12c JumpB
	var_143_float = var_145_float; // 0x12d Mov
	return 0; // 0x12e Return
	
Label_303:
	var_148_bool = var_144_float > var_146_float; // 0x12f GT
	if(var_148_bool == 0) goto Label_307; // 0x130 JumpB
	var_143_float = var_146_float; // 0x131 Mov
	return 0; // 0x132 Return
	
Label_307:
	var_143_float = var_144_float; // 0x133 Mov
	return 0; // 0x134 Return
}


func_315(var_179_object, var_180_string)
{
	var_181_object = Obj(); var_182_object = Obj(); var_183_object = Obj(); var_184_object = Obj(); // 0x13b PushV
	GetMainOutdoorScene(var_183_object); // 0x13c Func
	var_185_string = ".bin"; // 0x13e PushS
	var_186_int = var_180_string + var_185_string; // 0x13f Add
	AddBlankActor(var_184_object, var_183_object, var_180_string, var_186_int); // 0x140 Func
	var_179_object = var_184_object; // 0x142 Mov
	return 4; // 0x143 Return
}


func_309(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x135 PushV
	CreateObjectVector(var_16_object); // 0x136 Func
	var_14_object = var_16_object; // 0x138 Mov
	return 2; // 0x139 Return
}


func_379(var_114_bool, var_115_object, var_116_float)
{
	var_117_bool = var_115_object == 0; // 0x17c Not
	if(var_117_bool == 0) goto Label_384; // 0x17d JumpB
	var_114_bool = 0; // 0x17e MovB
	return 0; // 0x17f Return
	
Label_384:
	var_118_int = 0; // 0x180 PushI
	var_119_bool = var_116_float > var_118_int; // 0x181 GT
	if(var_119_bool == 0) goto Label_391; // 0x182 JumpB
	var_120_int = 8; // 0x183 PushI
	SendWorldWndMessage(var_120_int); // 0x184 Func
	goto Label_400; // 0x186 Jump
	
Label_400:
	var_121_float = 0; // 0x190 PushV
	var_121_float = var_116_float; // 0x191 Mov
	func_414(var_121_float); // 0x192 NEW_2
	var_125_bool = 0; var_126_object = Obj(); var_127_string = ""; var_128_float = 0; var_129_float = 0; var_130_float = 0; // 0x194 PushV
	var_126_object = var_115_object; // 0x195 Mov
	var_127_string = "reputation"; // 0x196 MovS
	var_128_float = var_116_float; // 0x197 Mov
	var_129_float = 0; // 0x198 MovI
	var_130_float = 1; // 0x199 MovI
	func_270(var_125_bool, var_126_object, var_127_string, var_128_float, var_129_float, var_130_float); // 0x19a NEW_2
	var_114_bool = 1; // 0x19c MovB
	return 0; // 0x19d Return
	
Label_391:
	var_149_int = 0; // 0x187 PushI
	var_150_bool = var_116_float < var_149_int; // 0x188 LT
	if(var_150_bool == 0) goto Label_398; // 0x189 JumpB
	var_151_int = 9; // 0x18a PushI
	SendWorldWndMessage(var_151_int); // 0x18b Func
	goto Label_400; // 0x18d Jump
	
Label_398:
	var_114_bool = 0; // 0x18e MovB
	return 0; // 0x18f Return
}


func_445(var_6_int, var_7_float)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_float = 0; // 0x1be PushV
	var_9_int = 530811; // 0x1bf MovI
	var_10_int = 530810; // 0x1c0 MovI
	var_11_float = var_7_float; // 0x1c1 Mov
	func_454(var_8_int, var_9_int, var_10_int, var_11_float); // 0x1c2 NEW_2
	var_6_int = var_8_int; // 0x1c3 Mov
	return 0; // 0x1c5 Return
}


