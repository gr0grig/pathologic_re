task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_float = 0; var_8_int = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_float = 0; var_13_int = 0; // 0x1d PushV
	Trace(var_3_string); // 0x1e Func
	var_14_string = "block_well"; // 0x20 PushS
	var_15_bool = var_3_string == var_14_string; // 0x21 Eq
	if(var_15_bool == 0) goto Label_45; // 0x22 JumpB
	var_16_string = "house_vlad"; // 0x23 PushS
	GetSceneByName(var_9_object, var_16_string); // 0x24 Func
	var_17_string = "d8q01_well_block"; // 0x26 PushS
	var_18_cvector = CVector(0.0, 0.0, 0.0); // 0x27 PushVec
	AddActor(var_10_object, var_17_string, var_9_object, var_18_cvector); // 0x28 Func
	var_10_object = 0; // 0x2a SetNull
	var_9_object = 0; // 0x2b SetNull
	goto Label_122; // 0x2c Jump
	
Label_122:
	return 10; // 0x7a Return
	
Label_45:
	var_19_string = "place_toy"; // 0x2d PushS
	var_20_bool = var_3_string == var_19_string; // 0x2e Eq
	if(var_20_bool == 0) goto Label_61; // 0x2f JumpB
	var_21_string = "r4_house_2_02"; // 0x30 PushS
	GetSceneByName(var_11_object, var_21_string); // 0x31 Func
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = ""; // 0x33 PushV
	var_23_object = var_11_object; // 0x34 Mov
	var_24_string = "pt_d8q01_toy"; // 0x35 MovS
	var_25_string = "scripted_container"; // 0x36 MovS
	var_26_string = "d8q01_toy.xml"; // 0x37 MovS
	func_209(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string); // 0x38 NEW_2
	var_0_object = var_22_object; // 0x39 TMov
	var_11_object = 0; // 0x3b SetNull
	goto Label_122; // 0x3c Jump
	
Label_61:
	var_40_string = "boiny_load"; // 0x3d PushS
	var_41_bool = var_3_string == var_40_string; // 0x3e Eq
	if(var_41_bool == 0) goto Label_72; // 0x3f JumpB
	var_42_bool = var_2_bool == 0; // 0x40 Not
	if(var_42_bool == 0) goto Label_71; // 0x41 JumpB
	var_2_bool = 1; // 0x42 TMovB
	var_43_object = Obj(); var_44_string = ""; // 0x43 PushV
	var_44_string = "quest_d8_01_cutscene"; // 0x44 MovS
	func_198(var_43_object, var_44_string); // 0x45 NEW_2
	
Label_71:
	goto Label_122; // 0x47 Jump
	
Label_72:
	var_51_string = "unlock_boiny"; // 0x48 PushS
	var_52_bool = var_3_string == var_51_string; // 0x49 Eq
	if(var_52_bool == 0) goto Label_92; // 0x4a JumpB
	func_0(); // 0x4c NEW_2
	GetGameTime(var_12_float); // 0x4e Func
	var_69_float = 191.0; // 0x50 PushF
	var_70_bool = var_12_float >= var_69_float; // 0x51 GE
	if(var_70_bool == 0) goto Label_87; // 0x52 JumpB
	func_131(); // 0x54 NEW_2
	goto Label_91; // 0x56 Jump
	
Label_91:
	goto Label_122; // 0x5b Jump
	
Label_87:
	var_105_int = 0; // 0x57 PushI
	var_106_float = 191.0; // 0x58 PushF
	SetTimeEvent(var_105_int, var_106_float); // 0x59 Func
	
Label_92:
	var_107_string = "cleanup"; // 0x5c PushS
	var_108_bool = var_3_string == var_107_string; // 0x5d Eq
	if(var_108_bool == 0) goto Label_109; // 0x5e JumpB
	var_109_string = "d8q01"; // 0x5f PushS
	GetVariable(var_109_string, var_13_int); // 0x60 Func
	var_110_int = 1000; // 0x62 PushI
	var_111_bool = var_13_int != var_110_int; // 0x63 Neq
	if(var_111_bool == 0) goto Label_105; // 0x64 JumpB
	func_143(); // 0x66 NEW_2
	goto Label_108; // 0x68 Jump
	
Label_108:
	goto Label_122; // 0x6c Jump
	
Label_105:
	func_159(var_13_int); // 0x6a NEW_2
	
Label_109:
	var_124_string = "fail"; // 0x6d PushS
	var_125_bool = var_3_string == var_124_string; // 0x6e Eq
	if(var_125_bool == 0) goto Label_116; // 0x6f JumpB
	func_143(); // 0x71 NEW_2
	goto Label_122; // 0x73 Jump
	
Label_116:
	var_126_string = "completed"; // 0x74 PushS
	var_127_bool = var_3_string == var_126_string; // 0x75 Eq
	if(var_127_bool == 0) goto Label_122; // 0x76 JumpB
	func_151(); // 0x78 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_bool, var_3_int, var_4_float)
{
	var_5_int = 0; // 0x7c PushI
	ReleaseTimeEvent(var_5_int); // 0x7d Func
	func_131(); // 0x80 NEW_2
	return 0; // 0x82 Return
}


task_0_event_24(var_0_object, var_1_object, var_2_bool, var_3_int)
{
	CameraSwitchToNormal(); // 0xbd Func
	return 0; // 0xbf Return
}


main(var_0_object, var_1_object, var_2_bool)
{
	var_3_object = Obj(); var_4_string = ""; // 0x15 PushV
	var_4_string = "quest_d8_03"; // 0x16 MovS
	func_198(var_3_object, var_4_string); // 0x17 NEW_2
	
Label_25:
	Hold(); // 0x19 Func
	goto Label_25; // 0x1b Jump
}


func_0()
{
	var_53_int = 0; var_54_int = 0; // 0x0 PushV
	var_55_string = "d8q01MladVladIsVictim"; // 0x1 PushS
	GetVariable(var_55_string, var_54_int); // 0x2 Func
	var_56_int = 0; // 0x4 PushI
	var_57_bool = var_54_int != var_56_int; // 0x5 Neq
	if(var_57_bool == 0) goto Label_14; // 0x6 JumpB
	var_58_bool = 0; var_59_string = ""; var_60_string = ""; var_61_string = ""; // 0x7 PushV
	var_59_string = "volonteers_danko"; // 0x8 MovS
	var_60_string = "kill"; // 0x9 MovS
	var_61_string = "mladvlad"; // 0xa MovS
	func_244(var_58_bool, var_59_string, var_60_string, var_61_string); // 0xb NEW_2
	goto Label_20; // 0xd Jump
	
Label_20:
	return 2; // 0x14 Return
	
Label_14:
	var_65_bool = 0; var_66_string = ""; var_67_string = ""; var_68_string = ""; // 0xe PushV
	var_66_string = "volonteers_danko"; // 0xf MovS
	var_67_string = "kill"; // 0x10 MovS
	var_68_string = "bigvlad"; // 0x11 MovS
	func_244(var_65_bool, var_66_string, var_67_string, var_68_string); // 0x12 NEW_2
}


func_256()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x100 PushV
	var_19_int = 716; // 0x101 PushI
	var_20_int = 1; // 0x102 PushI
	var_21_int = 536363; // 0x103 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x104 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x106 PushV
	var_23_object = var_18_object; // 0x107 Mov
	var_24_int = 175; // 0x108 MovI
	func_282(var_22_bool, var_23_object, var_24_int); // 0x109 NEW_2
	return 2; // 0x10b Return
}


func_192(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj(); // 0xc0 PushV
	self(var_123_object); // 0xc1 Func
	var_121_object = var_123_object; // 0xc3 Mov
	return 2; // 0xc4 Return
}


func_131()
{
	var_6_string = "Boiny unlocked"; // 0x83 PushS
	Trace(var_6_string); // 0x84 Func
	var_7_string = ""; var_8_bool = 0; // 0x86 PushV
	var_7_string = "boiny@door1"; // 0x87 MovS
	var_8_bool = 0; // 0x88 MovB
	func_227(var_7_string, var_8_bool); // 0x89 NEW_2
	func_256(); // 0x8c NEW_2
	return 0; // 0x8e Return
}


func_227(var_7_string, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0xe3 PushV
	FindActor(var_10_object, var_7_string); // 0xe4 Func
	var_11_bool = var_10_object == 0; // 0xe6 Not
	if(var_11_bool == 0) goto Label_239; // 0xe7 JumpB
	var_12_string = "Door "; // 0xe8 PushS
	var_13_int = var_12_string + var_7_string; // 0xe9 Add
	var_14_string = " not found"; // 0xea PushS
	var_15_int = var_13_int + var_14_string; // 0xeb Add
	Trace(var_15_int); // 0xec Func
	goto Label_242; // 0xee Jump
	
Label_242:
	return 2; // 0xf2 Return
	
Label_239:
	var_16_string = "locked"; // 0xef PushS
	SetProperty(var_16_string, var_8_bool); // 0xf0 ObjFunc
}


func_198(var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); // 0xc6 PushV
	GetMainOutdoorScene(var_7_object); // 0xc7 Func
	var_9_string = ".bin"; // 0xc9 PushS
	var_10_int = var_4_string + var_9_string; // 0xca Add
	AddBlankActor(var_8_object, var_7_object, var_4_string, var_10_int); // 0xcb Func
	var_3_object = var_8_object; // 0xcd Mov
	return 4; // 0xce Return
}


func_269(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x10d PushV
	GetDiaryRoot(var_33_object); // 0x10e Func
	var_34_bool = var_33_object == 0; // 0x110 Not
	if(var_34_bool == 0) goto Label_279; // 0x111 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x112 PushS
	Trace(var_35_string); // 0x113 Func
	var_31_object = 0; // 0x115 MovB
	return 2; // 0x116 Return
	
Label_279:
	var_31_object = var_33_object; // 0x117 Mov
	return 2; // 0x118 Return
}


func_143()
{
	var_112_string = "d8q01"; // 0x8f PushS
	var_113_int = -1; // 0x90 PushI
	SetVariable(var_112_string, var_113_int); // 0x91 Func
	func_159(var_13_int); // 0x94 NEW_2
	return 0; // 0x96 Return
}


func_209(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string)
{
	var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); // 0xd1 PushV
	GetLocator(var_24_string, var_31_bool, var_32_cvector, var_33_cvector); // 0xd2 ObjFunc
	var_35_bool = var_31_bool == 0; // 0xd4 Not
	if(var_35_bool == 0) goto Label_222; // 0xd5 JumpB
	var_36_string = "Locator "; // 0xd6 PushS
	var_37_int = var_36_string + var_24_string; // 0xd7 Add
	var_38_string = " doesn't exist"; // 0xd8 PushS
	var_39_int = var_37_int + var_38_string; // 0xd9 Add
	Trace(var_39_int); // 0xda Func
	var_34_object = 0; // 0xdc SetNull
	goto Label_224; // 0xdd Jump
	
Label_224:
	var_22_object = var_34_object; // 0xe0 Mov
	return 8; // 0xe1 Return
	
Label_222:
	AddActorByType(var_34_object, var_25_string, var_23_object, var_32_cvector, var_33_cvector, var_26_string); // 0xde Func
}


func_244(var_58_bool, var_59_string, var_60_string, var_61_string)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0xf4 PushV
	FindActor(var_63_object, var_59_string); // 0xf5 Func
	var_64_bool = var_63_object == 0; // 0xf7 NullEq
	if(var_64_bool == 0) goto Label_251; // 0xf8 JumpB
	var_58_bool = 0; // 0xf9 MovB
	return 2; // 0xfa Return
	
Label_251:
	Trigger(var_63_object, var_60_string, var_61_string); // 0xfb Func
	var_58_bool = 1; // 0xfd MovB
	return 2; // 0xfe Return
}


func_151()
{
	var_128_string = "d8q01"; // 0x97 PushS
	var_129_int = 1000; // 0x98 PushI
	SetVariable(var_128_string, var_129_int); // 0x99 Func
	func_159(var_13_int); // 0x9c NEW_2
	return 0; // 0x9e Return
}


func_282(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x11a PushV
	var_31_object = Obj(); // 0x11b PushV
	func_269(var_31_object); // 0x11c NEW_2
	var_28_object = var_31_object; // 0x11d Mov
	Find(var_24_int, var_29_object); // 0x11f ObjFunc
	var_36_bool = var_29_object == 0; // 0x121 Not
	if(var_36_bool == 0) goto Label_297; // 0x122 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x123 PushS
	var_38_int = var_37_string + var_24_int; // 0x124 Add
	Trace(var_38_int); // 0x125 Func
	var_22_bool = 0; // 0x127 MovB
	return 6; // 0x128 Return
	
Label_297:
	AddChild(var_23_object); // 0x129 ObjFunc
	var_39_int = 7; // 0x12b PushI
	SendWorldWndMessage(var_39_int); // 0x12c Func
	GetCategory(var_30_int); // 0x12e ObjFunc
	SetDiarySection(var_30_int); // 0x130 Func
	var_22_bool = 0; // 0x132 MovB
	return 6; // 0x133 Return
}


func_159(var_0_object)
{
	EventDisable(26); // 0x9f EventDisable
	EventDisable(9); // 0xa0 EventDisable
	var_114_int = 0; // 0xa1 PushI
	ReleaseTimeEvent(var_114_int); // 0xa2 Func
	var_115_object = var_0_object; // 0xa4 PushT
	if(var_115_object == 0) goto Label_169; // 0xa5 JumpB
	var_116_string = "cleanup"; // 0xa6 PushS
	Trigger(var_0_object, var_116_string); // 0xa7 Func
	
Label_169:
	var_117_object = var_1_object; // 0xa9 PushT
	if(var_117_object == 0) goto Label_174; // 0xaa JumpB
	var_118_string = "cleanup"; // 0xab PushS
	Trigger(var_118_string, var_118_string); // 0xac Func
	
Label_174:
	var_119_string = ""; var_120_bool = 0; // 0xae PushV
	var_119_string = "boiny@door1"; // 0xaf MovS
	var_120_bool = 1; // 0xb0 MovB
	func_227(var_119_string, var_120_bool); // 0xb1 NEW_2
	func_0(); // 0xb4 NEW_2
	var_121_object = Obj(); // 0xb6 PushV
	func_192(var_121_object); // 0xb7 NEW_2
	RemoveActor(var_121_object); // 0xb9 Func
	return 0; // 0xbb Return
}


