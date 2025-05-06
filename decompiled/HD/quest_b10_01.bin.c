task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_int = 0; var_7_object = Obj(); var_8_int = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_int = 0; // 0x16 PushV
	Trace(var_3_string); // 0x17 Func
	var_14_string = "usable_stone"; // 0x19 PushS
	var_15_bool = var_3_string == var_14_string; // 0x1a Eq
	if(var_15_bool == 0) goto Label_34; // 0x1b JumpB
	var_16_bool = 0; var_17_string = ""; var_18_string = ""; // 0x1c PushV
	var_17_string = "b10q01_stone"; // 0x1d MovS
	var_18_string = "enable_use"; // 0x1e MovS
	func_292(var_16_bool, var_17_string, var_18_string); // 0x1f NEW_2
	goto Label_157; // 0x21 Jump
	
Label_157:
	return 10; // 0x9d Return
	
Label_34:
	var_22_string = "place_butchers"; // 0x22 PushS
	var_23_bool = var_3_string == var_22_string; // 0x23 Eq
	if(var_23_bool == 0) goto Label_100; // 0x24 JumpB
	GetMainOutdoorScene(var_9_object); // 0x25 Func
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = ""; // 0x27 PushV
	var_25_object = var_9_object; // 0x28 Mov
	var_26_string = "pt_b10q01_butcher1"; // 0x29 MovS
	var_27_string = "pers_butcher"; // 0x2a MovS
	var_28_string = "b10q01_butcher.xml"; // 0x2b MovS
	func_236(var_25_object, var_26_string, var_27_string, var_28_string); // 0x2c NEW_2
	var_0_object = var_24_object; // 0x2d TMov
	var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = ""; // 0x2f PushV
	var_43_object = var_9_object; // 0x30 Mov
	var_44_string = "pt_b10q01_butcher2"; // 0x31 MovS
	var_45_string = "pers_butcher"; // 0x32 MovS
	var_46_string = "b10q01_butcher.xml"; // 0x33 MovS
	func_236(var_43_object, var_44_string, var_45_string, var_46_string); // 0x34 NEW_2
	var_1_object = var_42_object; // 0x35 TMov
	var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = ""; // 0x37 PushV
	var_48_object = var_9_object; // 0x38 Mov
	var_49_string = "pt_b10q01_butcher3"; // 0x39 MovS
	var_50_string = "pers_butcher"; // 0x3a MovS
	var_51_string = "b10q01_butcher.xml"; // 0x3b MovS
	func_236(var_48_object, var_49_string, var_50_string, var_51_string); // 0x3c NEW_2
	var_2_object = var_47_object; // 0x3d TMov
	var_52_object = Obj(); // 0x3f PushV
	func_376(var_52_object); // 0x40 NEW_2
	var_10_object = var_52_object; // 0x41 Mov
	var_59_string = "b9q01BurahGotoButcher1"; // 0x43 PushS
	var_60_string = "pt_b10q01_butcher1"; // 0x44 PushS
	var_61_int = 1; // 0x45 PushI
	var_62_int = 101000; // 0x46 PushI
	var_63_float = 0; // 0x47 PushV
	func_304(var_63_float); // 0x48 NEW_2
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0x4a ObjFunc
	var_66_string = "b9q01BurahGotoButcher2"; // 0x4c PushS
	var_67_string = "pt_b10q01_butcher2"; // 0x4d PushS
	var_68_int = 1; // 0x4e PushI
	var_69_int = 101000; // 0x4f PushI
	var_70_float = 0; // 0x50 PushV
	func_304(var_70_float); // 0x51 NEW_2
	AddMark(var_66_string, var_67_string, var_68_int, var_69_int, var_70_float); // 0x53 ObjFunc
	var_71_string = "b9q01BurahGotoButcher3"; // 0x55 PushS
	var_72_string = "pt_b10q01_butcher3"; // 0x56 PushS
	var_73_int = 1; // 0x57 PushI
	var_74_int = 101000; // 0x58 PushI
	var_75_float = 0; // 0x59 PushV
	func_304(var_75_float); // 0x5a NEW_2
	AddMark(var_71_string, var_72_string, var_73_int, var_74_int, var_75_float); // 0x5c ObjFunc
	func_322(); // 0x5f NEW_2
	var_10_object = 0; // 0x61 SetNull
	var_9_object = 0; // 0x62 SetNull
	goto Label_157; // 0x63 Jump
	
Label_100:
	var_99_string = "butcher_dead"; // 0x64 PushS
	var_100_bool = var_3_string == var_99_string; // 0x65 Eq
	if(var_100_bool == 0) goto Label_127; // 0x66 JumpB
	var_101_string = "b10q01Butchers"; // 0x67 PushS
	GetVariable(var_101_string, var_11_int); // 0x68 Func
	var_102_string = "b10q01Butchers"; // 0x6a PushS
	var_103_int = 1; // 0x6b PushI
	var_104_int = var_11_int + var_103_int; // 0x6c Add
	SetVariable(var_102_string, var_104_int); // 0x6d Func
	var_105_int = 1; // 0x6f PushI
	var_106_int = var_11_int + var_105_int; // 0x70 Add
	var_107_int = 3; // 0x71 PushI
	var_108_bool = var_106_int == var_107_int; // 0x72 Eq
	if(var_108_bool == 0) goto Label_126; // 0x73 JumpB
	func_309(); // 0x75 NEW_2
	var_117_string = "player"; // 0x77 PushS
	FindActor(var_12_object, var_117_string); // 0x78 Func
	var_118_string = "b10q01_stop"; // 0x7a PushS
	Trigger(var_12_object, var_118_string); // 0x7b Func
	var_12_object = 0; // 0x7d SetNull
	
Label_126:
	goto Label_157; // 0x7e Jump
	
Label_127:
	var_119_string = "cleanup"; // 0x7f PushS
	var_120_bool = var_3_string == var_119_string; // 0x80 Eq
	if(var_120_bool == 0) goto Label_144; // 0x81 JumpB
	var_121_string = "b10q01"; // 0x82 PushS
	GetVariable(var_121_string, var_13_int); // 0x83 Func
	var_122_int = 1000; // 0x85 PushI
	var_123_bool = var_13_int != var_122_int; // 0x86 Neq
	if(var_123_bool == 0) goto Label_140; // 0x87 JumpB
	func_158(); // 0x89 NEW_2
	goto Label_143; // 0x8b Jump
	
Label_143:
	goto Label_157; // 0x8f Jump
	
Label_140:
	func_174(); // 0x8d NEW_2
	
Label_144:
	var_156_string = "fail"; // 0x90 PushS
	var_157_bool = var_3_string == var_156_string; // 0x91 Eq
	if(var_157_bool == 0) goto Label_151; // 0x92 JumpB
	func_158(); // 0x94 NEW_2
	goto Label_157; // 0x96 Jump
	
Label_151:
	var_158_string = "completed"; // 0x97 PushS
	var_159_bool = var_3_string == var_158_string; // 0x98 Eq
	if(var_159_bool == 0) goto Label_157; // 0x99 JumpB
	func_166(); // 0x9b NEW_2
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x0 PushV
	var_5_string = "cot_eva"; // 0x1 PushS
	GetSceneByName(var_4_object, var_5_string); // 0x2 Func
	var_6_string = ""; var_7_bool = 0; // 0x4 PushV
	var_6_string = "icot_eva_door"; // 0x5 MovS
	var_7_bool = 0; // 0x6 MovB
	func_271(var_6_string, var_7_bool); // 0x7 NEW_2
	var_17_string = "danko"; // 0x9 PushS
	Trigger(var_4_object, var_17_string); // 0xa Func
	var_18_string = ""; var_19_bool = 0; // 0xc PushV
	var_18_string = "boiny@door1"; // 0xd MovS
	var_19_bool = 0; // 0xe MovB
	func_254(var_18_string, var_19_bool); // 0xf NEW_2
	
Label_17:
	Hold(); // 0x11 Func
	goto Label_17; // 0x13 Jump
}


func_322()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x142 PushV
	var_78_int = 312; // 0x143 PushI
	var_79_int = 1; // 0x144 PushI
	var_80_int = 521963; // 0x145 PushI
	CreateDiaryEntry(var_77_object, var_78_int, var_79_int, var_80_int); // 0x146 Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0x148 PushV
	var_82_object = var_77_object; // 0x149 Mov
	var_83_int = 305; // 0x14a MovI
	func_348(var_81_bool, var_82_object, var_83_int); // 0x14b NEW_2
	return 2; // 0x14d Return
}


func_292(var_16_bool, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x124 PushV
	FindActor(var_20_object, var_17_string); // 0x125 Func
	var_21_bool = var_20_object == 0; // 0x127 NullEq
	if(var_21_bool == 0) goto Label_299; // 0x128 JumpB
	var_16_bool = 0; // 0x129 MovB
	return 2; // 0x12a Return
	
Label_299:
	Trigger(var_20_object, var_18_string); // 0x12b Func
	var_16_bool = 1; // 0x12d MovB
	return 2; // 0x12e Return
}


func_166()
{
	var_160_string = "b10q01"; // 0xa6 PushS
	var_161_int = 1000; // 0xa7 PushI
	SetVariable(var_160_string, var_161_int); // 0xa8 Func
	func_174(); // 0xab NEW_2
	return 0; // 0xad Return
}


func_230(var_153_object)
{
	var_154_object = Obj(); var_155_object = Obj(); // 0xe6 PushV
	self(var_155_object); // 0xe7 Func
	var_153_object = var_155_object; // 0xe9 Mov
	return 2; // 0xea Return
}


func_236(var_24_object, var_26_string, var_27_string, var_28_string)
{
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); // 0xec PushV
	GetLocator(var_26_string, var_33_bool, var_34_cvector, var_35_cvector); // 0xed ObjFunc
	var_37_bool = var_33_bool == 0; // 0xef Not
	if(var_37_bool == 0) goto Label_249; // 0xf0 JumpB
	var_38_string = "Locator "; // 0xf1 PushS
	var_39_int = var_38_string + var_26_string; // 0xf2 Add
	var_40_string = " doesn't exist"; // 0xf3 PushS
	var_41_int = var_39_int + var_40_string; // 0xf4 Add
	Trace(var_41_int); // 0xf5 Func
	var_36_object = 0; // 0xf7 SetNull
	goto Label_251; // 0xf8 Jump
	
Label_251:
	var_24_object = var_36_object; // 0xfb Mov
	return 8; // 0xfc Return
	
Label_249:
	AddStationaryActor(var_36_object, var_34_cvector, var_35_cvector, var_27_string, var_28_string); // 0xf9 ObjFunc
}


func_174()
{
	var_126_object = Obj(); var_127_object = Obj(); var_128_object = Obj(); var_129_object = Obj(); // 0xae PushV
	var_130_object = var_0_object; // 0xaf PushT
	if(var_130_object == 0) goto Label_179; // 0xb0 JumpB
	Remove(); // 0xb1 TObjFunc
	
Label_179:
	var_131_object = var_1_object; // 0xb3 PushT
	if(var_131_object == 0) goto Label_183; // 0xb4 JumpB
	Remove(); // 0xb5 TObjFunc
	
Label_183:
	var_132_object = var_2_object; // 0xb7 PushT
	if(var_132_object == 0) goto Label_187; // 0xb8 JumpB
	Remove(); // 0xb9 TObjFunc
	
Label_187:
	var_133_bool = 0; var_134_string = ""; var_135_string = ""; // 0xbb PushV
	var_134_string = "b10q01_stone"; // 0xbc MovS
	var_135_string = "disable_use"; // 0xbd MovS
	func_292(var_133_bool, var_134_string, var_135_string); // 0xbe NEW_2
	var_136_object = Obj(); // 0xc0 PushV
	func_376(var_136_object); // 0xc1 NEW_2
	var_128_object = var_136_object; // 0xc2 Mov
	var_137_string = "b9q01BurahGotoButcher1"; // 0xc4 PushS
	FindMark(var_129_object, var_137_string); // 0xc5 ObjFunc
	var_138_object = var_129_object; // 0xc7 Push
	if(var_138_object == 0) goto Label_203; // 0xc8 JumpB
	Remove(); // 0xc9 ObjFunc
	
Label_203:
	var_139_string = "b9q01BurahGotoButcher2"; // 0xcb PushS
	FindMark(var_129_object, var_139_string); // 0xcc ObjFunc
	var_140_object = var_129_object; // 0xce Push
	if(var_140_object == 0) goto Label_210; // 0xcf JumpB
	Remove(); // 0xd0 ObjFunc
	
Label_210:
	var_141_string = "b9q01BurahGotoButcher3"; // 0xd2 PushS
	FindMark(var_129_object, var_141_string); // 0xd3 ObjFunc
	var_142_object = var_129_object; // 0xd5 Push
	if(var_142_object == 0) goto Label_217; // 0xd6 JumpB
	Remove(); // 0xd7 ObjFunc
	
Label_217:
	var_143_string = ""; var_144_bool = 0; // 0xd9 PushV
	var_143_string = "boiny@door1"; // 0xda MovS
	var_144_bool = 1; // 0xdb MovB
	func_254(var_143_string, var_144_bool); // 0xdc NEW_2
	var_153_object = Obj(); // 0xde PushV
	func_230(var_153_object); // 0xdf NEW_2
	RemoveActor(var_153_object); // 0xe1 Func
	return 4; // 0xe3 Return
}


func_271(var_6_string, var_7_bool)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x10f PushV
	FindActor(var_9_object, var_6_string); // 0x110 Func
	var_10_bool = var_9_object == 0; // 0x112 Not
	if(var_10_bool == 0) goto Label_283; // 0x113 JumpB
	var_11_string = "Door "; // 0x114 PushS
	var_12_int = var_11_string + var_6_string; // 0x115 Add
	var_13_string = " not found"; // 0x116 PushS
	var_14_int = var_12_int + var_13_string; // 0x117 Add
	Trace(var_14_int); // 0x118 Func
	goto Label_290; // 0x11a Jump
	
Label_290:
	return 2; // 0x122 Return
	
Label_283:
	var_15_bool = var_7_bool; // 0x11b Push
	if(var_15_bool == 0) goto Label_287; // 0x11c JumpB
	Close(); // 0x11d ObjFunc
	
Label_287:
	var_16_string = "locked"; // 0x11f PushS
	SetProperty(var_16_string, var_7_bool); // 0x120 ObjFunc
}


func_304(var_63_float)
{
	var_64_float = 0; var_65_float = 0; // 0x130 PushV
	GetGameTime(var_65_float); // 0x131 Func
	var_63_float = var_65_float; // 0x133 Mov
	return 2; // 0x134 Return
}


func_335(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0x14f PushV
	GetDiaryRoot(var_92_object); // 0x150 Func
	var_93_bool = var_92_object == 0; // 0x152 Not
	if(var_93_bool == 0) goto Label_345; // 0x153 JumpB
	var_94_string = "Can't retrieve diary root"; // 0x154 PushS
	Trace(var_94_string); // 0x155 Func
	var_90_object = 0; // 0x157 MovB
	return 2; // 0x158 Return
	
Label_345:
	var_90_object = var_92_object; // 0x159 Mov
	return 2; // 0x15a Return
}


func_309()
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x135 PushV
	var_111_int = 308; // 0x136 PushI
	var_112_int = 1; // 0x137 PushI
	var_113_int = 521959; // 0x138 PushI
	CreateDiaryEntry(var_110_object, var_111_int, var_112_int, var_113_int); // 0x139 Func
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0; // 0x13b PushV
	var_115_object = var_110_object; // 0x13c Mov
	var_116_int = 305; // 0x13d MovI
	func_348(var_114_bool, var_115_object, var_116_int); // 0x13e NEW_2
	return 2; // 0x140 Return
}


func_254(var_18_string, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0xfe PushV
	FindActor(var_21_object, var_18_string); // 0xff Func
	var_22_bool = var_21_object == 0; // 0x101 Not
	if(var_22_bool == 0) goto Label_266; // 0x102 JumpB
	var_23_string = "Door "; // 0x103 PushS
	var_24_int = var_23_string + var_18_string; // 0x104 Add
	var_25_string = " not found"; // 0x105 PushS
	var_26_int = var_24_int + var_25_string; // 0x106 Add
	Trace(var_26_int); // 0x107 Func
	goto Label_269; // 0x109 Jump
	
Label_269:
	return 2; // 0x10d Return
	
Label_266:
	var_27_string = "locked"; // 0x10a PushS
	SetProperty(var_27_string, var_19_bool); // 0x10b ObjFunc
}


func_376(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); // 0x178 PushV
	GetMainOutdoorScene(var_55_object); // 0x179 Func
	var_57_bool = var_55_object == 0; // 0x17b NullEq
	if(var_57_bool == 0) goto Label_387; // 0x17c JumpB
	var_58_string = "Can't find main outdoor scene"; // 0x17d PushS
	Trace(var_58_string); // 0x17e Func
	var_56_object = 0; // 0x180 SetNull
	var_52_object = var_56_object; // 0x181 Mov
	return 4; // 0x182 Return
	
Label_387:
	GetMap(var_56_object); // 0x183 ObjFunc
	var_52_object = var_56_object; // 0x185 Mov
	return 4; // 0x186 Return
}


func_348(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0; // 0x15c PushV
	var_90_object = Obj(); // 0x15d PushV
	func_335(var_90_object); // 0x15e NEW_2
	var_87_object = var_90_object; // 0x15f Mov
	Find(var_83_int, var_88_object); // 0x161 ObjFunc
	var_95_bool = var_88_object == 0; // 0x163 Not
	if(var_95_bool == 0) goto Label_363; // 0x164 JumpB
	var_96_string = "Can't find diary parent with id: "; // 0x165 PushS
	var_97_int = var_96_string + var_83_int; // 0x166 Add
	Trace(var_97_int); // 0x167 Func
	var_81_bool = 0; // 0x169 MovB
	return 6; // 0x16a Return
	
Label_363:
	AddChild(var_82_object); // 0x16b ObjFunc
	var_98_int = 7; // 0x16d PushI
	SendWorldWndMessage(var_98_int); // 0x16e Func
	GetCategory(var_89_int); // 0x170 ObjFunc
	SetDiarySection(var_89_int); // 0x172 Func
	var_81_bool = 0; // 0x174 MovB
	return 6; // 0x175 Return
}


func_158()
{
	var_124_string = "b10q01"; // 0x9e PushS
	var_125_int = -1; // 0x9f PushI
	SetVariable(var_124_string, var_125_int); // 0xa0 Func
	func_174(); // 0xa3 NEW_2
	return 0; // 0xa5 Return
}


