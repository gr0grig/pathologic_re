task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); // 0xd PushV
	Trace(var_2_string); // 0xe Func
	var_21_string = "completed"; // 0x10 PushS
	var_22_bool = var_2_string == var_21_string; // 0x11 Eq
	if(var_22_bool == 0) goto Label_102; // 0x12 JumpB
	var_23_string = "uprava_prison"; // 0x13 PushS
	GetSceneByName(var_12_object, var_23_string); // 0x14 Func
	var_24_string = "cs_uprava_prisoner1"; // 0x16 PushS
	var_25_string = "cs_play_all.bin"; // 0x17 PushS
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0x18 PushVec
	AddScriptedActor(var_13_object, var_24_string, var_25_string, var_12_object, var_26_cvector); // 0x19 Func
	var_27_string = "cs_uprava_prisoner2"; // 0x1b PushS
	var_28_string = "cs_play_all.bin"; // 0x1c PushS
	var_29_cvector = CVector(0.0, 0.0, 0.0); // 0x1d PushVec
	AddScriptedActor(var_14_object, var_27_string, var_28_string, var_12_object, var_29_cvector); // 0x1e Func
	var_30_string = "cs_uprava_prisoner3"; // 0x20 PushS
	var_31_string = "cs_play_all.bin"; // 0x21 PushS
	var_32_cvector = CVector(0.0, 0.0, 0.0); // 0x22 PushVec
	AddScriptedActor(var_15_object, var_30_string, var_31_string, var_12_object, var_32_cvector); // 0x23 Func
	var_33_string = "cs_uprava_prisoner4"; // 0x25 PushS
	var_34_string = "cs_play_all.bin"; // 0x26 PushS
	var_35_cvector = CVector(0.0, 0.0, 0.0); // 0x27 PushVec
	AddScriptedActor(var_16_object, var_33_string, var_34_string, var_12_object, var_35_cvector); // 0x28 Func
	var_36_string = "cs_uprava_prisoner5"; // 0x2a PushS
	var_37_string = "cs_play_all.bin"; // 0x2b PushS
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x2c PushVec
	AddScriptedActor(var_17_object, var_36_string, var_37_string, var_12_object, var_38_cvector); // 0x2d Func
	ForceGeometryLoad(); // 0x2f ObjFunc
	ForceGeometryLoad(); // 0x31 ObjFunc
	ForceGeometryLoad(); // 0x33 ObjFunc
	ForceGeometryLoad(); // 0x35 ObjFunc
	ForceGeometryLoad(); // 0x37 ObjFunc
	var_39_string = "player"; // 0x39 PushS
	FindActor(var_18_object, var_39_string); // 0x3a Func
	var_40_object = Obj(); // 0x3c PushV
	var_40_object = var_18_object; // 0x3d Mov
	func_286(var_40_object); // 0x3e Call
	var_54_string = "space"; // 0x40 PushS
	RegisterKeyCallback(var_54_string); // 0x41 Func
	var_55_string = "cs_uprava_prison1.mot"; // 0x43 PushS
	CameraPlay(var_55_string); // 0x44 Func
	CameraWaitForPlayFinish(); // 0x46 Func
	var_56_string = "space"; // 0x48 PushS
	UnregisterKeyCallback(var_56_string); // 0x49 Func
	var_57_object = Obj(); // 0x4b PushV
	var_57_object = var_18_object; // 0x4c Mov
	func_309(var_57_object); // 0x4d Call
	RemoveActor(var_13_object); // 0x4f Func
	RemoveActor(var_14_object); // 0x51 Func
	RemoveActor(var_15_object); // 0x53 Func
	RemoveActor(var_16_object); // 0x55 Func
	RemoveActor(var_17_object); // 0x57 Func
	CameraSwitchToNormal(); // 0x59 Func
	func_219(); // 0x5c Call
	var_18_object = 0; // 0x5e SetNull
	var_17_object = 0; // 0x5f SetNull
	var_16_object = 0; // 0x60 SetNull
	var_15_object = 0; // 0x61 SetNull
	var_14_object = 0; // 0x62 SetNull
	var_13_object = 0; // 0x63 SetNull
	var_12_object = 0; // 0x64 SetNull
	goto Label_190; // 0x65 Jump
	
Label_190:
	return 18; // 0xbe Return
	
Label_102:
	var_103_string = "fail"; // 0x66 PushS
	var_104_bool = var_2_string == var_103_string; // 0x67 Eq
	if(var_104_bool == 0) goto Label_109; // 0x68 JumpB
	func_206(); // 0x6a Call
	goto Label_190; // 0x6c Jump
	
Label_109:
	var_109_string = "place_prisoners"; // 0x6d PushS
	var_110_bool = var_2_string == var_109_string; // 0x6e Eq
	if(var_110_bool == 0) goto Label_190; // 0x6f JumpB
	var_111_string = ""; var_112_bool = 0; // 0x70 PushV
	var_111_string = "uprava_prison@door1"; // 0x71 MovS
	var_112_bool = 0; // 0x72 MovB
	func_359(var_111_string, var_112_bool); // 0x73 Call
	var_113_string = "uprava_prison"; // 0x75 PushS
	GetSceneByName(var_19_object, var_113_string); // 0x76 Func
	var_114_object = Obj(); var_115_object = Obj(); var_116_string = ""; var_117_string = ""; var_118_string = ""; // 0x78 PushV
	var_115_object = var_19_object; // 0x79 Mov
	var_116_string = "pt_guard"; // 0x7a MovS
	var_117_string = "pers_birdmask"; // 0x7b MovS
	var_118_string = "d5q03_birdmask.xml"; // 0x7c MovS
	func_341(var_114_object, var_115_object, var_116_string, var_117_string, var_118_string); // 0x7d Call
	var_1_object = var_114_object; // 0x7e TMov
	var_132_object = Obj(); var_133_object = Obj(); var_134_string = ""; var_135_string = ""; var_136_string = ""; // 0x80 PushV
	var_133_object = var_19_object; // 0x81 Mov
	var_134_string = "pt_prisoner1"; // 0x82 MovS
	var_135_string = "pers_unosha"; // 0x83 MovS
	var_136_string = "d5q03_unosha.xml"; // 0x84 MovS
	func_341(var_132_object, var_133_object, var_134_string, var_135_string, var_136_string); // 0x85 Call
	var_20_object = var_132_object; // 0x86 Mov
	add(var_20_object); // 0x88 TObjFunc
	var_137_object = Obj(); var_138_object = Obj(); var_139_string = ""; var_140_string = ""; var_141_string = ""; // 0x8a PushV
	var_138_object = var_19_object; // 0x8b Mov
	var_139_string = "pt_prisoner2"; // 0x8c MovS
	var_140_string = "pers_worker"; // 0x8d MovS
	var_141_string = "d5q03_worker.xml"; // 0x8e MovS
	func_341(var_137_object, var_138_object, var_139_string, var_140_string, var_141_string); // 0x8f Call
	var_20_object = var_137_object; // 0x90 Mov
	add(var_20_object); // 0x92 TObjFunc
	var_142_object = Obj(); var_143_object = Obj(); var_144_string = ""; var_145_string = ""; var_146_string = ""; // 0x94 PushV
	var_143_object = var_19_object; // 0x95 Mov
	var_144_string = "pt_prisoner3"; // 0x96 MovS
	var_145_string = "pers_wasted_male"; // 0x97 MovS
	var_146_string = "d5q03_wastedmale.xml"; // 0x98 MovS
	func_341(var_142_object, var_143_object, var_144_string, var_145_string, var_146_string); // 0x99 Call
	var_20_object = var_142_object; // 0x9a Mov
	add(var_20_object); // 0x9c TObjFunc
	var_147_object = Obj(); var_148_object = Obj(); var_149_string = ""; var_150_string = ""; var_151_string = ""; // 0x9e PushV
	var_148_object = var_19_object; // 0x9f Mov
	var_149_string = "pt_prisoner4"; // 0xa0 MovS
	var_150_string = "pers_alkash"; // 0xa1 MovS
	var_151_string = "d5q03_alkash.xml"; // 0xa2 MovS
	func_341(var_147_object, var_148_object, var_149_string, var_150_string, var_151_string); // 0xa3 Call
	var_20_object = var_147_object; // 0xa4 Mov
	add(var_20_object); // 0xa6 TObjFunc
	var_152_object = Obj(); var_153_object = Obj(); var_154_string = ""; var_155_string = ""; var_156_string = ""; // 0xa8 PushV
	var_153_object = var_19_object; // 0xa9 Mov
	var_154_string = "pt_prisoner5"; // 0xaa MovS
	var_155_string = "pers_worker"; // 0xab MovS
	var_156_string = "d5q03_worker.xml"; // 0xac MovS
	func_341(var_152_object, var_153_object, var_154_string, var_155_string, var_156_string); // 0xad Call
	var_20_object = var_152_object; // 0xae Mov
	add(var_20_object); // 0xb0 TObjFunc
	var_157_object = Obj(); var_158_object = Obj(); var_159_string = ""; var_160_string = ""; var_161_string = ""; // 0xb2 PushV
	var_158_object = var_19_object; // 0xb3 Mov
	var_159_string = "pt_prisoner6"; // 0xb4 MovS
	var_160_string = "pers_unosha"; // 0xb5 MovS
	var_161_string = "d5q03_unosha.xml"; // 0xb6 MovS
	func_341(var_157_object, var_158_object, var_159_string, var_160_string, var_161_string); // 0xb7 Call
	var_20_object = var_157_object; // 0xb8 Mov
	add(var_20_object); // 0xba TObjFunc
	var_20_object = 0; // 0xbc SetNull
	var_19_object = 0; // 0xbd SetNull
}


task_0_event_24(var_0_object, var_1_object, var_2_int)
{
	CameraSwitchToNormal(); // 0xc0 Func
	return 0; // 0xc2 Return
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_195(); // 0x11b Call
	return 0; // 0x11d Return
}


main(var_0_object, var_1_object)
{
	var_2_string = "d5q03"; // 0x0 PushS
	var_3_int = 1; // 0x1 PushI
	SetVariable(var_2_string, var_3_int); // 0x2 Func
	var_4_object = Obj(); // 0x4 PushV
	func_335(var_4_object); // 0x5 Call
	var_0_object = var_4_object; // 0x6 TMov
	var_7_int = 0; // 0x8 PushV
	var_7_int = 5; // 0x9 MovI
	func_262(var_7_int); // 0xa Call
	return 0; // 0xc Return
}


func_195()
{
	var_4_int = 0; var_5_int = 0; // 0xc3 PushV
	var_6_string = "d5q03"; // 0xc4 PushS
	GetVariable(var_6_string, var_5_int); // 0xc5 Func
	var_7_int = 1000; // 0xc7 PushI
	var_8_bool = var_5_int != var_7_int; // 0xc8 Neq
	if(var_8_bool == 0) goto Label_205; // 0xc9 JumpB
	func_206(); // 0xcb Call
	
Label_205:
	return 2; // 0xcd Return
}


func_262(var_7_int)
{
	var_8_float = 0; var_9_float = 0; // 0x106 PushV
	GetGameTime(var_9_float); // 0x107 Func
	var_10_int = 24; // 0x109 PushI
	var_11_float = var_7_int * var_10_int; // 0x10a Mult
	var_12_bool = var_9_float >= var_11_float; // 0x10b GE
	if(var_12_bool == 0) goto Label_273; // 0x10c JumpB
	func_246(var_9_float); // 0x10e Call
	goto Label_280; // 0x110 Jump
	
Label_280:
	return 2; // 0x118 Return
	
Label_273:
	var_28_int = 0; // 0x111 PushI
	var_29_int = 24; // 0x112 PushI
	var_30_float = var_7_int * var_29_int; // 0x113 Mult
	SetTimeEvent(var_28_int, var_30_float); // 0x114 Func
	Hold(); // 0x116 Func
}


func_359(var_11_string, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x167 PushV
	FindActor(var_14_object, var_11_string); // 0x168 Func
	var_15_bool = var_14_object == 0; // 0x16a Not
	if(var_15_bool == 0) goto Label_370; // 0x16b JumpB
	var_16_string = "Door "; // 0x16c PushS
	var_17_int = var_16_string + var_11_string; // 0x16d Add
	var_18_string = " not found"; // 0x16e PushS
	var_19_int = var_17_int + var_18_string; // 0x16f Add
	Trace(var_19_int); // 0x170 Func
	
Label_370:
	var_20_string = "locked"; // 0x172 PushS
	SetProperty(var_20_string, var_12_bool); // 0x173 ObjFunc
	return 2; // 0x175 Return
}


func_329(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x149 PushV
	self(var_27_object); // 0x14a Func
	var_25_object = var_27_object; // 0x14c Mov
	return 2; // 0x14d Return
}


func_206()
{
	var_9_string = "d5q03"; // 0xce PushS
	var_10_int = -1; // 0xcf PushI
	SetVariable(var_9_string, var_10_int); // 0xd0 Func
	var_11_string = ""; var_12_bool = 0; // 0xd2 PushV
	var_11_string = "uprava_prison@door1"; // 0xd3 MovS
	var_12_bool = 1; // 0xd4 MovB
	func_359(var_11_string, var_12_bool); // 0xd5 Call
	func_246(var_5_int); // 0xd8 Call
	return 0; // 0xda Return
}


func_335(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x14f PushV
	CreateObjectVector(var_6_object); // 0x150 Func
	var_4_object = var_6_object; // 0x152 Mov
	return 2; // 0x153 Return
}


func_309(var_57_object)
{
	var_58_int = 0; var_59_int = 0; // 0x135 PushV
	var_60_bool = var_57_object == 0; // 0x136 Not
	if(var_60_bool == 0) goto Label_313; // 0x137 JumpB
	return 2; // 0x138 Return
	
Label_313:
	var_61_string = "noaccess"; // 0x139 PushS
	GetProperty(var_61_string, var_59_int); // 0x13a ObjFunc
	var_62_int = 1; // 0x13c PushI
	var_63_bool = var_59_int > var_62_int; // 0x13d GT
	if(var_63_bool == 0) goto Label_325; // 0x13e JumpB
	var_64_string = "noaccess"; // 0x13f PushS
	var_65_int = 1; // 0x140 PushI
	var_66_int = var_59_int - var_65_int; // 0x141 Sub
	SetProperty(var_64_string, var_66_int); // 0x142 ObjFunc
	goto Label_328; // 0x144 Jump
	
Label_328:
	return 2; // 0x148 Return
	
Label_325:
	var_67_string = "noaccess"; // 0x145 PushS
	RemoveProperty(var_67_string); // 0x146 ObjFunc
}


func_341(var_114_object, var_115_object, var_116_string, var_117_string, var_118_string)
{
	var_119_bool = 0; var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_object = Obj(); var_123_bool = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_object = Obj(); // 0x155 PushV
	GetLocator(var_116_string, var_123_bool, var_124_cvector, var_125_cvector); // 0x156 ObjFunc
	var_127_bool = var_123_bool == 0; // 0x158 Not
	if(var_127_bool == 0) goto Label_354; // 0x159 JumpB
	var_128_string = "Locator "; // 0x15a PushS
	var_129_int = var_128_string + var_116_string; // 0x15b Add
	var_130_string = " doesn't exist"; // 0x15c PushS
	var_131_int = var_129_int + var_130_string; // 0x15d Add
	Trace(var_131_int); // 0x15e Func
	var_126_object = 0; // 0x160 SetNull
	goto Label_356; // 0x161 Jump
	
Label_356:
	var_114_object = var_126_object; // 0x164 Mov
	return 8; // 0x165 Return
	
Label_354:
	AddActor(var_126_object, var_117_string, var_115_object, var_124_cvector, var_125_cvector, var_118_string); // 0x162 Func
}


func_246(var_0_object)
{
	EventDisable(26); // 0xf6 EventDisable
	var_13_object = Obj(); // 0xf7 PushV
	var_13_object = var_0_object; // 0xf8 MovT
	func_375(); // 0xf9 Call
	var_23_object = var_1_object; // 0xfb PushT
	if(var_23_object == 0) goto Label_256; // 0xfc JumpB
	var_24_string = "cleanup"; // 0xfd PushS
	Trigger(var_24_string, var_24_string); // 0xfe Func
	
Label_256:
	var_25_object = Obj(); // 0x100 PushV
	func_329(var_25_object); // 0x101 Call
	RemoveActor(var_25_object); // 0x103 Func
	return 0; // 0x105 Return
}


func_219()
{
	var_68_int = 0; var_69_int = 0; // 0xdb PushV
	var_70_string = "d5q03"; // 0xdc PushS
	GetVariable(var_70_string, var_69_int); // 0xdd Func
	var_71_bool = 0; // 0xdf PushV
	var_71_bool = 0; // 0xe0 MovB
	var_72_int = 1000; // 0xe1 PushI
	var_73_bool = var_69_int != var_72_int; // 0xe2 Neq
	if(var_73_bool == 0) goto Label_232; // 0xe3 JumpB
	var_74_int = -1; // 0xe4 PushI
	var_75_bool = var_69_int != var_74_int; // 0xe5 Neq
	if(var_75_bool == 0) goto Label_232; // 0xe6 JumpB
	var_71_bool = 1; // 0xe7 MovB
	
Label_232:
	if(var_71_bool == 0) goto Label_245; // 0xe8 JumpB
	var_76_string = "d5q03"; // 0xe9 PushS
	var_77_int = 1000; // 0xea PushI
	SetVariable(var_76_string, var_77_int); // 0xeb Func
	var_78_string = ""; var_79_bool = 0; // 0xed PushV
	var_78_string = "uprava_prison@door1"; // 0xee MovS
	var_79_bool = 1; // 0xef MovB
	func_359(var_78_string, var_79_bool); // 0xf0 Call
	func_246(var_69_int); // 0xf3 Call
	
Label_245:
	return 2; // 0xf5 Return
}


func_286(var_40_object)
{
	var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; // 0x11e PushV
	var_45_bool = var_40_object == 0; // 0x11f Not
	if(var_45_bool == 0) goto Label_290; // 0x120 JumpB
	return 4; // 0x121 Return
	
Label_290:
	var_46_string = "noaccess"; // 0x122 PushS
	HasProperty(var_46_string, var_43_bool); // 0x123 ObjFunc
	var_47_bool = var_43_bool; // 0x125 Push
	if(var_47_bool == 0) goto Label_304; // 0x126 JumpB
	var_48_string = "noaccess"; // 0x127 PushS
	GetProperty(var_48_string, var_44_int); // 0x128 ObjFunc
	var_49_string = "noaccess"; // 0x12a PushS
	var_50_int = 1; // 0x12b PushI
	var_51_int = var_44_int + var_50_int; // 0x12c Add
	SetProperty(var_49_string, var_51_int); // 0x12d ObjFunc
	goto Label_308; // 0x12f Jump
	
Label_308:
	return 4; // 0x134 Return
	
Label_304:
	var_52_string = "noaccess"; // 0x130 PushS
	var_53_int = 1; // 0x131 PushI
	SetProperty(var_52_string, var_53_int); // 0x132 ObjFunc
}


func_375()
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj(); // 0x177 PushV
	size(var_17_int); // 0x178 ObjFunc
	var_18_int = 0; // 0x17a MovI
	
Label_379:
	var_20_bool = var_18_int < var_17_int; // 0x17b LT
	if(var_20_bool == 0) goto Label_391; // 0x17c JumpB
	get(var_19_object, var_18_int); // 0x17d ObjFunc
	var_21_object = var_19_object; // 0x17f Push
	if(var_21_object == 0) goto Label_387; // 0x180 JumpB
	RemoveActor(var_19_object); // 0x181 Func
	
Label_387:
	var_19_object = 0; // 0x183 SetNull
	var_22_int = 1; // 0x184 PushI
	var_18_int = var_18_int + var_22_int; // 0x185 Add2
	goto Label_379; // 0x186 Jump
	
Label_391:
	clear(); // 0x187 ObjFunc
	return 6; // 0x189 Return
}


