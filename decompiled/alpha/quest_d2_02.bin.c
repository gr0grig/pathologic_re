task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); // 0xb PushV
	Trace(var_6_string); // 0xc Func
	var_11_bool = var_5_bool; // 0xe PushT
	if(var_11_bool == 0) goto Label_36; // 0xf JumpB
	var_12_string = "mpatrol_unload"; // 0x10 PushS
	var_13_bool = var_6_string == var_12_string; // 0x11 Eq
	if(var_13_bool == 0) goto Label_23; // 0x12 JumpB
	Remove(); // 0x13 TObjFunc
	var_1_object = 0; // 0x15 SetNullT
	goto Label_36; // 0x16 Jump
	
Label_36:
	var_14_bool = var_4_bool == 0; // 0x24 Not
	if(var_14_bool == 0) goto Label_108; // 0x25 JumpB
	var_15_string = "put_patrol"; // 0x26 PushS
	var_16_bool = var_6_string == var_15_string; // 0x27 Eq
	if(var_16_bool == 0) goto Label_77; // 0x28 JumpB
	GetMainOutdoorScene(var_9_object); // 0x29 Func
	var_17_object = Obj(); var_18_object = Obj(); var_19_string = ""; var_20_string = ""; var_21_string = ""; // 0x2b PushV
	var_18_object = var_9_object; // 0x2c Mov
	var_19_string = "pt_d2q02_driver"; // 0x2d MovS
	var_20_string = "pers_birdmask"; // 0x2e MovS
	var_21_string = "d2q02_driver.xml"; // 0x2f MovS
	func_320(var_18_object, var_19_string, var_20_string, var_21_string); // 0x30 Call
	var_0_object = var_17_object; // 0x31 TMov
	var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = ""; var_39_string = ""; // 0x33 PushV
	var_36_object = var_9_object; // 0x34 Mov
	var_37_string = "pt_d2q02_mpatrol"; // 0x35 MovS
	var_38_string = "pers_patrool"; // 0x36 MovS
	var_39_string = "d2q02_mpatrol.xml"; // 0x37 MovS
	func_320(var_36_object, var_37_string, var_38_string, var_39_string); // 0x38 Call
	var_1_object = var_35_object; // 0x39 TMov
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = ""; // 0x3b PushV
	var_41_object = var_9_object; // 0x3c Mov
	var_42_string = "pt_d2q02_patrol1"; // 0x3d MovS
	var_43_string = "pers_patrool"; // 0x3e MovS
	var_44_string = "d2q02_patrol1.xml"; // 0x3f MovS
	func_320(var_41_object, var_42_string, var_43_string, var_44_string); // 0x40 Call
	var_2_object = var_40_object; // 0x41 TMov
	var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = ""; // 0x43 PushV
	var_46_object = var_9_object; // 0x44 Mov
	var_47_string = "pt_d2q02_patrol2"; // 0x45 MovS
	var_48_string = "pers_patrool"; // 0x46 MovS
	var_49_string = "d2q02_patrol2.xml"; // 0x47 MovS
	func_320(var_46_object, var_47_string, var_48_string, var_49_string); // 0x48 Call
	var_3_object = var_45_object; // 0x49 TMov
	var_9_object = 0; // 0x4b SetNull
	goto Label_107; // 0x4c Jump
	
Label_107:
	goto Label_139; // 0x6b Jump
	
Label_139:
	return 4; // 0x8b Return
	
Label_77:
	var_50_string = "player_attack"; // 0x4d PushS
	var_51_bool = var_6_string == var_50_string; // 0x4e Eq
	if(var_51_bool == 0) goto Label_101; // 0x4f JumpB
	GetActor(var_10_object); // 0x50 TObjFunc
	var_52_string = "kill_player"; // 0x52 PushS
	Trigger(var_10_object, var_52_string); // 0x53 Func
	GetActor(var_10_object); // 0x55 TObjFunc
	var_53_string = "kill_player"; // 0x57 PushS
	Trigger(var_10_object, var_53_string); // 0x58 Func
	GetActor(var_10_object); // 0x5a TObjFunc
	var_54_string = "kill_player"; // 0x5c PushS
	Trigger(var_10_object, var_54_string); // 0x5d Func
	var_5_bool = 1; // 0x5f TMovB
	func_162(); // 0x61 Call
	var_10_object = 0; // 0x63 SetNull
	goto Label_107; // 0x64 Jump
	
Label_101:
	var_124_string = "completed"; // 0x65 PushS
	var_125_bool = var_6_string == var_124_string; // 0x66 Eq
	if(var_125_bool == 0) goto Label_107; // 0x67 JumpB
	func_162(); // 0x69 Call
	
Label_108:
	var_126_string = "driver_unload"; // 0x6c PushS
	var_127_bool = var_6_string == var_126_string; // 0x6d Eq
	if(var_127_bool == 0) goto Label_116; // 0x6e JumpB
	var_128_int = 0; // 0x6f PushV
	var_128_int = 0; // 0x70 MovI
	func_196(var_7_object, var_8_object, var_9_object, var_10_object, var_128_int); // 0x71 Call
	goto Label_139; // 0x73 Jump
	
Label_116:
	var_129_string = "mpatrol_unload"; // 0x74 PushS
	var_130_bool = var_6_string == var_129_string; // 0x75 Eq
	if(var_130_bool == 0) goto Label_124; // 0x76 JumpB
	var_131_int = 0; // 0x77 PushV
	var_131_int = 1; // 0x78 MovI
	func_196(var_7_object, var_8_object, var_9_object, var_10_object, var_131_int); // 0x79 Call
	goto Label_139; // 0x7b Jump
	
Label_124:
	var_132_string = "patrol1_unload"; // 0x7c PushS
	var_133_bool = var_6_string == var_132_string; // 0x7d Eq
	if(var_133_bool == 0) goto Label_132; // 0x7e JumpB
	var_134_int = 0; // 0x7f PushV
	var_134_int = 2; // 0x80 MovI
	func_196(var_7_object, var_8_object, var_9_object, var_10_object, var_134_int); // 0x81 Call
	goto Label_139; // 0x83 Jump
	
Label_132:
	var_135_string = "patrol2_unload"; // 0x84 PushS
	var_136_bool = var_6_string == var_135_string; // 0x85 Eq
	if(var_136_bool == 0) goto Label_139; // 0x86 JumpB
	var_137_int = 0; // 0x87 PushV
	var_137_int = 3; // 0x88 MovI
	func_196(var_7_object, var_8_object, var_9_object, var_10_object, var_137_int); // 0x89 Call
	
Label_23:
	var_138_string = "patrol1_unload"; // 0x17 PushS
	var_139_bool = var_6_string == var_138_string; // 0x18 Eq
	if(var_139_bool == 0) goto Label_30; // 0x19 JumpB
	Remove(); // 0x1a TObjFunc
	var_2_object = 0; // 0x1c SetNullT
	goto Label_36; // 0x1d Jump
	
Label_30:
	var_140_string = "patrol2_unload"; // 0x1e PushS
	var_141_bool = var_6_string == var_140_string; // 0x1f Eq
	if(var_141_bool == 0) goto Label_36; // 0x20 JumpB
	Remove(); // 0x21 TObjFunc
	var_3_object = 0; // 0x23 SetNullT
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_int, var_7_float)
{
	func_140(); // 0x137 Call
	return 0; // 0x139 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_bool)
{
	var_4_bool = 0; // 0x0 TMovB
	var_5_bool = 0; // 0x1 TMovB
	var_6_string = "d2q02"; // 0x2 PushS
	var_7_int = 1; // 0x3 PushI
	SetVariable(var_6_string, var_7_int); // 0x4 Func
	var_8_int = 0; // 0x6 PushV
	var_8_int = 2; // 0x7 MovI
	func_290(var_8_int); // 0x8 Call
	return 0; // 0xa Return
}


func_320(var_17_object, var_19_string, var_20_string, var_21_string)
{
	var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); // 0x140 PushV
	GetLocator(var_19_string, var_26_bool, var_27_cvector, var_28_cvector); // 0x141 ObjFunc
	var_30_bool = var_26_bool == 0; // 0x143 Not
	if(var_30_bool == 0) goto Label_333; // 0x144 JumpB
	var_31_string = "Locator "; // 0x145 PushS
	var_32_int = var_31_string + var_19_string; // 0x146 Add
	var_33_string = " doesn't exist"; // 0x147 PushS
	var_34_int = var_32_int + var_33_string; // 0x148 Add
	Trace(var_34_int); // 0x149 Func
	var_29_object = 0; // 0x14b SetNull
	goto Label_335; // 0x14c Jump
	
Label_335:
	var_17_object = var_29_object; // 0x14f Mov
	return 8; // 0x150 Return
	
Label_333:
	AddStationaryActor(var_29_object, var_27_cvector, var_28_cvector, var_20_string, var_21_string); // 0x14d ObjFunc
}


func_162()
{
	var_55_int = 0; var_56_int = 0; // 0xa2 PushV
	var_57_string = "d2q02"; // 0xa3 PushS
	GetVariable(var_57_string, var_56_int); // 0xa4 Func
	var_58_bool = 0; // 0xa6 PushV
	var_58_bool = 0; // 0xa7 MovB
	var_59_int = 1000; // 0xa8 PushI
	var_60_bool = var_56_int != var_59_int; // 0xa9 Neq
	if(var_60_bool == 0) goto Label_175; // 0xaa JumpB
	var_61_int = -1; // 0xab PushI
	var_62_bool = var_56_int != var_61_int; // 0xac Neq
	if(var_62_bool == 0) goto Label_175; // 0xad JumpB
	var_58_bool = 1; // 0xae MovB
	
Label_175:
	if(var_58_bool == 0) goto Label_186; // 0xaf JumpB
	var_63_string = "d2q02"; // 0xb0 PushS
	var_64_int = 1000; // 0xb1 PushI
	SetVariable(var_63_string, var_64_int); // 0xb2 Func
	func_380(); // 0xb5 Call
	func_187(var_56_int); // 0xb8 Call
	
Label_186:
	return 2; // 0xba Return
}


func_290(var_8_int)
{
	var_9_float = 0; var_10_float = 0; // 0x122 PushV
	GetGameTime(var_10_float); // 0x123 Func
	var_11_int = 24; // 0x125 PushI
	var_12_float = var_8_int * var_11_int; // 0x126 Mult
	var_13_bool = var_10_float >= var_12_float; // 0x127 GE
	if(var_13_bool == 0) goto Label_301; // 0x128 JumpB
	func_187(var_10_float); // 0x12a Call
	goto Label_308; // 0x12c Jump
	
Label_308:
	return 2; // 0x134 Return
	
Label_301:
	var_48_int = 0; // 0x12d PushI
	var_49_int = 24; // 0x12e PushI
	var_50_float = var_8_int * var_49_int; // 0x12f Mult
	SetTimeEvent(var_48_int, var_50_float); // 0x130 Func
	Hold(); // 0x132 Func
}


func_196(var_0_object, var_1_object, var_2_object, var_3_object, var_14_int)
{
	var_15_bool = 0; // 0xc5 PushV
	var_15_bool = 0; // 0xc6 MovB
	var_16_bool = 0; // 0xc7 PushV
	var_16_bool = 0; // 0xc8 MovB
	var_17_bool = 0; // 0xc9 PushV
	var_17_bool = 0; // 0xca MovB
	var_18_bool = 0; // 0xcb PushV
	var_18_bool = 1; // 0xcc MovB
	var_19_int = 0; // 0xcd PushI
	var_20_bool = var_14_int == var_19_int; // 0xce Eq
	if(var_20_bool == 0) goto Label_214; // 0xcf JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0xd0 PushV
	var_22_object = var_0_object; // 0xd1 MovT
	func_280(var_21_bool, var_22_object); // 0xd2 Call
	if(var_21_bool == 0) goto Label_214; // 0xd4 JumpB
	var_18_bool = 0; // 0xd5 MovB
	
Label_214:
	if(var_18_bool == 0) goto Label_228; // 0xd6 JumpB
	var_26_bool = 0; // 0xd7 PushV
	var_26_bool = 1; // 0xd8 MovB
	var_27_int = 1; // 0xd9 PushI
	var_28_bool = var_14_int == var_27_int; // 0xda Eq
	if(var_28_bool == 0) goto Label_226; // 0xdb JumpB
	var_29_bool = 0; var_30_object = Obj(); // 0xdc PushV
	var_30_object = var_1_object; // 0xdd MovT
	func_280(var_29_bool, var_30_object); // 0xde Call
	if(var_29_bool == 0) goto Label_226; // 0xe0 JumpB
	var_26_bool = 0; // 0xe1 MovB
	
Label_226:
	if(var_26_bool == 0) goto Label_228; // 0xe2 JumpB
	var_17_bool = 1; // 0xe3 MovB
	
Label_228:
	if(var_17_bool == 0) goto Label_242; // 0xe4 JumpB
	var_31_bool = 0; // 0xe5 PushV
	var_31_bool = 1; // 0xe6 MovB
	var_32_int = 2; // 0xe7 PushI
	var_33_bool = var_14_int == var_32_int; // 0xe8 Eq
	if(var_33_bool == 0) goto Label_240; // 0xe9 JumpB
	var_34_bool = 0; var_35_object = Obj(); // 0xea PushV
	var_35_object = var_2_object; // 0xeb MovT
	func_280(var_34_bool, var_35_object); // 0xec Call
	if(var_34_bool == 0) goto Label_240; // 0xee JumpB
	var_31_bool = 0; // 0xef MovB
	
Label_240:
	if(var_31_bool == 0) goto Label_242; // 0xf0 JumpB
	var_16_bool = 1; // 0xf1 MovB
	
Label_242:
	if(var_16_bool == 0) goto Label_256; // 0xf2 JumpB
	var_36_bool = 0; // 0xf3 PushV
	var_36_bool = 1; // 0xf4 MovB
	var_37_int = 3; // 0xf5 PushI
	var_38_bool = var_14_int == var_37_int; // 0xf6 Eq
	if(var_38_bool == 0) goto Label_254; // 0xf7 JumpB
	var_39_bool = 0; var_40_object = Obj(); // 0xf8 PushV
	var_40_object = var_3_object; // 0xf9 MovT
	func_280(var_39_bool, var_40_object); // 0xfa Call
	if(var_39_bool == 0) goto Label_254; // 0xfc JumpB
	var_36_bool = 0; // 0xfd MovB
	
Label_254:
	if(var_36_bool == 0) goto Label_256; // 0xfe JumpB
	var_15_bool = 1; // 0xff MovB
	
Label_256:
	if(var_15_bool == 0) goto Label_279; // 0x100 JumpB
	EventDisable(26); // 0x101 EventDisable
	var_41_object = var_0_object; // 0x102 PushT
	if(var_41_object == 0) goto Label_262; // 0x103 JumpB
	Remove(); // 0x104 TObjFunc
	
Label_262:
	var_42_object = var_1_object; // 0x106 PushT
	if(var_42_object == 0) goto Label_266; // 0x107 JumpB
	Remove(); // 0x108 TObjFunc
	
Label_266:
	var_43_object = var_2_object; // 0x10a PushT
	if(var_43_object == 0) goto Label_270; // 0x10b JumpB
	Remove(); // 0x10c TObjFunc
	
Label_270:
	var_44_object = var_3_object; // 0x10e PushT
	if(var_44_object == 0) goto Label_274; // 0x10f JumpB
	Remove(); // 0x110 TObjFunc
	
Label_274:
	var_45_object = Obj(); // 0x112 PushV
	func_314(var_45_object); // 0x113 Call
	RemoveActor(var_45_object); // 0x115 Func
	
Label_279:
	return 0; // 0x117 Return
}


func_396()
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x18c PushV
	var_15_string = "Adding diary entry"; // 0x18d PushS
	Trace(var_15_string); // 0x18e Func
	var_16_int = 62; // 0x190 PushI
	var_17_int = 2; // 0x191 PushI
	var_18_int = 12144; // 0x192 PushI
	CreateDiaryEntry(var_14_object, var_16_int, var_17_int, var_18_int); // 0x193 Func
	var_19_bool = 0; var_20_object = Obj(); var_21_int = 0; // 0x195 PushV
	var_20_object = var_14_object; // 0x196 Mov
	var_21_int = 11; // 0x197 MovI
	func_351(var_19_bool, var_20_object, var_21_int); // 0x198 Call
	return 2; // 0x19a Return
}


func_140()
{
	var_8_int = 0; var_9_int = 0; // 0x8c PushV
	var_10_string = "d2q02"; // 0x8d PushS
	GetVariable(var_10_string, var_9_int); // 0x8e Func
	var_11_int = 1000; // 0x90 PushI
	var_12_bool = var_9_int != var_11_int; // 0x91 Neq
	if(var_12_bool == 0) goto Label_150; // 0x92 JumpB
	func_151(); // 0x94 Call
	
Label_150:
	return 2; // 0x96 Return
}


func_338(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x152 PushV
	GetDiaryRoot(var_30_object); // 0x153 Func
	var_31_bool = var_30_object == 0; // 0x155 Not
	if(var_31_bool == 0) goto Label_348; // 0x156 JumpB
	var_32_string = "Can't retrieve diary root"; // 0x157 PushS
	Trace(var_32_string); // 0x158 Func
	var_28_object = 0; // 0x15a MovB
	return 2; // 0x15b Return
	
Label_348:
	var_28_object = var_30_object; // 0x15c Mov
	return 2; // 0x15d Return
}


func_151()
{
	func_396(); // 0x98 Call
	var_38_string = "d2q02"; // 0x9a PushS
	var_39_int = -1; // 0x9b PushI
	SetVariable(var_38_string, var_39_int); // 0x9c Func
	func_187(var_9_int); // 0x9f Call
	return 0; // 0xa1 Return
}


func_280(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x118 PushV
	var_25_bool = var_22_object == 0; // 0x119 Not
	if(var_25_bool == 0) goto Label_285; // 0x11a JumpB
	var_21_bool = 1; // 0x11b MovB
	return 2; // 0x11c Return
	
Label_285:
	GetActor(var_24_object); // 0x11d ObjFunc
	var_21_bool = !var_24_object; // 0x11f Not2
	return 2; // 0x120 Return
}


func_412()
{
	return 0; // 0x19c Return
}


func_314(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x13a PushV
	self(var_47_object); // 0x13b Func
	var_45_object = var_47_object; // 0x13d Mov
	return 2; // 0x13e Return
}


func_187(var_4_bool)
{
	func_412(); // 0xbc Call
	var_4_bool = 1; // 0xbe TMovB
	var_14_int = 0; // 0xbf PushV
	var_14_int = -1; // 0xc0 MovI
	func_196(var_5_bool, var_8_int, var_9_float, var_10_float, var_14_int); // 0xc1 Call
	return 0; // 0xc3 Return
}


func_380()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x17c PushV
	var_67_string = "Adding diary entry"; // 0x17d PushS
	Trace(var_67_string); // 0x17e Func
	var_68_int = 61; // 0x180 PushI
	var_69_int = 2; // 0x181 PushI
	var_70_int = 12143; // 0x182 PushI
	CreateDiaryEntry(var_66_object, var_68_int, var_69_int, var_70_int); // 0x183 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x185 PushV
	var_72_object = var_66_object; // 0x186 Mov
	var_73_int = 11; // 0x187 MovI
	func_351(var_71_bool, var_72_object, var_73_int); // 0x188 Call
	return 2; // 0x18a Return
}


func_351(var_19_bool, var_20_object, var_21_int)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; // 0x15f PushV
	var_28_object = Obj(); // 0x160 PushV
	func_338(var_28_object); // 0x161 Call
	var_25_object = var_28_object; // 0x162 Mov
	Find(var_21_int, var_26_object); // 0x164 ObjFunc
	var_33_bool = var_26_object == 0; // 0x166 Not
	if(var_33_bool == 0) goto Label_366; // 0x167 JumpB
	var_34_string = "Can't find diary parent with id: "; // 0x168 PushS
	var_35_int = var_34_string + var_21_int; // 0x169 Add
	Trace(var_35_int); // 0x16a Func
	var_19_bool = 0; // 0x16c MovB
	return 6; // 0x16d Return
	
Label_366:
	AddChild(var_20_object); // 0x16e ObjFunc
	var_36_string = "player_diary"; // 0x170 PushS
	var_37_int = 1; // 0x171 PushI
	SetVariable(var_36_string, var_37_int); // 0x172 Func
	GetCategory(var_27_int); // 0x174 ObjFunc
	SetDiarySection(var_27_int); // 0x176 Func
	var_19_bool = 0; // 0x178 MovB
	return 6; // 0x179 Return
}


