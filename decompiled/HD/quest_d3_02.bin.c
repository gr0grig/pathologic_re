task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string)
{
	var_6_object = Obj(); var_7_object = Obj(); var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_bool = 0; // 0x3e PushV
	Trace(var_5_string); // 0x3f Func
	var_16_string = "teleport"; // 0x41 PushS
	var_17_bool = var_5_string == var_16_string; // 0x42 Eq
	if(var_17_bool == 0) goto Label_84; // 0x43 JumpB
	var_18_string = "player"; // 0x44 PushS
	FindActor(var_11_object, var_18_string); // 0x45 Func
	var_19_object = var_11_object; // 0x47 Push
	if(var_19_object == 0) goto Label_82; // 0x48 JumpB
	var_20_string = "mnogogrannik_han"; // 0x49 PushS
	GetSceneByName(var_12_object, var_20_string); // 0x4a Func
	var_21_string = "pt_d3q02_teleport"; // 0x4c PushS
	GetLocator(var_21_string, var_15_bool, var_13_cvector, var_14_cvector); // 0x4d ObjFunc
	Teleport(var_11_object, var_12_object, var_13_cvector, var_14_cvector); // 0x4f Func
	var_12_object = 0; // 0x51 SetNull
	
Label_82:
	var_11_object = 0; // 0x52 SetNull
	goto Label_114; // 0x53 Jump
	
Label_114:
	return 10; // 0x72 Return
	
Label_84:
	var_22_string = "butcher_trigger"; // 0x54 PushS
	var_23_bool = var_5_string == var_22_string; // 0x55 Eq
	if(var_23_bool == 0) goto Label_108; // 0x56 JumpB
	var_24_object = var_0_object; // 0x57 PushT
	if(var_24_object == 0) goto Label_92; // 0x58 JumpB
	var_25_string = "trigger"; // 0x59 PushS
	Trigger(var_0_object, var_25_string); // 0x5a Func
	
Label_92:
	var_26_object = var_1_object; // 0x5c PushT
	if(var_26_object == 0) goto Label_97; // 0x5d JumpB
	var_27_string = "trigger"; // 0x5e PushS
	Trigger(var_27_string, var_27_string); // 0x5f Func
	
Label_97:
	func_156(var_13_cvector, var_14_cvector, var_15_bool); // 0x62 NEW_2
	var_36_string = "d3q02SeeCorpse"; // 0x64 PushS
	var_37_int = 1; // 0x65 PushI
	SetVariable(var_36_string, var_37_int); // 0x66 Func
	func_273(); // 0x69 NEW_2
	goto Label_114; // 0x6b Jump
	
Label_108:
	var_61_string = "completed"; // 0x6c PushS
	var_62_bool = var_5_string == var_61_string; // 0x6d Eq
	if(var_62_bool == 0) goto Label_114; // 0x6e JumpB
	func_134(); // 0x70 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_float)
{
	func_115(); // 0xdf NEW_2
	return 0; // 0xe1 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x0 PushV
	var_7_string = "d3q02"; // 0x1 PushS
	var_8_int = 1; // 0x2 PushI
	SetVariable(var_7_string, var_8_int); // 0x3 Func
	var_9_object = Obj(); var_10_string = ""; // 0x5 PushV
	var_10_string = "r7_house2_01"; // 0x6 MovS
	func_232(var_9_object, var_10_string); // 0x7 NEW_2
	var_6_object = var_9_object; // 0x8 Mov
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0xa PushV
	var_14_object = var_6_object; // 0xb Mov
	var_15_string = "pt_d3q02_butcher1"; // 0xc MovS
	var_16_string = "pers_butcher"; // 0xd MovS
	var_17_string = "d3q02_butcher.xml"; // 0xe MovS
	func_238(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string); // 0xf NEW_2
	var_0_object = var_13_object; // 0x10 TMov
	var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; var_35_string = ""; // 0x12 PushV
	var_32_object = var_6_object; // 0x13 Mov
	var_33_string = "pt_d3q02_butcher2"; // 0x14 MovS
	var_34_string = "pers_butcher"; // 0x15 MovS
	var_35_string = "d3q02_butcher.xml"; // 0x16 MovS
	func_238(var_31_object, var_32_object, var_33_string, var_34_string, var_35_string); // 0x17 NEW_2
	var_1_object = var_31_object; // 0x18 TMov
	var_36_string = "d3q02_corpse"; // 0x1a PushS
	var_37_string = "actor_disp.bin"; // 0x1b PushS
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x1c PushVec
	AddScriptedActor(var_36_string, var_36_string, var_37_string, var_6_object, var_38_cvector); // 0x1d Func
	var_39_string = "d3q02_btrigger"; // 0x1f PushS
	var_40_string = "quest_d3_02_btrigger.bin"; // 0x20 PushS
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x21 PushVec
	AddScriptedActor(var_6_object, var_39_string, var_40_string, var_6_object, var_41_cvector); // 0x22 Func
	var_42_string = ""; var_43_bool = 0; // 0x24 PushV
	var_42_string = "r7_house2_01@door1"; // 0x25 MovS
	var_43_bool = 0; // 0x26 MovB
	func_256(var_42_string, var_43_bool); // 0x27 NEW_2
	var_52_string = ""; var_53_bool = 0; // 0x29 PushV
	var_52_string = "r7_house2_01@door2"; // 0x2a MovS
	var_53_bool = 0; // 0x2b MovB
	func_256(var_52_string, var_53_bool); // 0x2c NEW_2
	GetMainOutdoorScene(var_6_object); // 0x2e Func
	var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = ""; // 0x30 PushV
	var_55_object = var_6_object; // 0x31 Mov
	var_56_string = "pt_d3q02_doberman"; // 0x32 MovS
	var_57_string = "pers_doberman"; // 0x33 MovS
	var_58_string = "d3q02_doberman.xml"; // 0x34 MovS
	func_238(var_54_object, var_55_object, var_56_string, var_57_string, var_58_string); // 0x35 NEW_2
	var_2_object = var_54_object; // 0x36 TMov
	var_59_int = 0; // 0x38 PushV
	var_59_int = 3; // 0x39 MovI
	func_202(var_59_int); // 0x3a NEW_2
	return 2; // 0x3c Return
}


func_256(var_42_string, var_43_bool)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x100 PushV
	FindActor(var_45_object, var_42_string); // 0x101 Func
	var_46_bool = var_45_object == 0; // 0x103 Not
	if(var_46_bool == 0) goto Label_268; // 0x104 JumpB
	var_47_string = "Door "; // 0x105 PushS
	var_48_int = var_47_string + var_42_string; // 0x106 Add
	var_49_string = " not found"; // 0x107 PushS
	var_50_int = var_48_int + var_49_string; // 0x108 Add
	Trace(var_50_int); // 0x109 Func
	goto Label_271; // 0x10b Jump
	
Label_271:
	return 2; // 0x10f Return
	
Label_268:
	var_51_string = "locked"; // 0x10c PushS
	SetProperty(var_51_string, var_43_bool); // 0x10d ObjFunc
}


func_226(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0xe2 PushV
	self(var_81_object); // 0xe3 Func
	var_79_object = var_81_object; // 0xe5 Mov
	return 2; // 0xe6 Return
}


func_134()
{
	var_63_int = 0; var_64_int = 0; // 0x86 PushV
	var_65_string = "d3q02"; // 0x87 PushS
	GetVariable(var_65_string, var_64_int); // 0x88 Func
	var_66_bool = 0; // 0x8a PushV
	var_66_bool = 0; // 0x8b MovB
	var_67_int = 1000; // 0x8c PushI
	var_68_bool = var_64_int != var_67_int; // 0x8d Neq
	if(var_68_bool == 0) goto Label_147; // 0x8e JumpB
	var_69_int = -1; // 0x8f PushI
	var_70_bool = var_64_int != var_69_int; // 0x90 Neq
	if(var_70_bool == 0) goto Label_147; // 0x91 JumpB
	var_66_bool = 1; // 0x92 MovB
	
Label_147:
	if(var_66_bool == 0) goto Label_155; // 0x93 JumpB
	var_71_string = "d3q02"; // 0x94 PushS
	var_72_int = 1000; // 0x95 PushI
	SetVariable(var_71_string, var_72_int); // 0x96 Func
	func_177(var_64_int); // 0x99 NEW_2
	
Label_155:
	return 2; // 0x9b Return
}


func_232(var_9_object, var_10_string)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0xe8 PushV
	GetSceneByName(var_12_object, var_10_string); // 0xe9 Func
	var_9_object = var_12_object; // 0xeb Mov
	return 2; // 0xec Return
}


func_202(var_59_int)
{
	var_60_float = 0; var_61_float = 0; // 0xca PushV
	GetGameTime(var_61_float); // 0xcb Func
	var_62_int = 24; // 0xcd PushI
	var_63_float = var_59_int * var_62_int; // 0xce Mult
	var_64_bool = var_61_float >= var_63_float; // 0xcf GE
	if(var_64_bool == 0) goto Label_213; // 0xd0 JumpB
	func_177(var_61_float); // 0xd2 NEW_2
	goto Label_220; // 0xd4 Jump
	
Label_220:
	return 2; // 0xdc Return
	
Label_213:
	var_82_int = 0; // 0xd5 PushI
	var_83_int = 24; // 0xd6 PushI
	var_84_float = var_59_int * var_83_int; // 0xd7 Mult
	SetTimeEvent(var_82_int, var_84_float); // 0xd8 Func
	Hold(); // 0xda Func
}


func_299(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x12b PushV
	var_52_object = Obj(); // 0x12c PushV
	func_286(var_52_object); // 0x12d NEW_2
	var_49_object = var_52_object; // 0x12e Mov
	Find(var_45_int, var_50_object); // 0x130 ObjFunc
	var_57_bool = var_50_object == 0; // 0x132 Not
	if(var_57_bool == 0) goto Label_314; // 0x133 JumpB
	var_58_string = "Can't find diary parent with id: "; // 0x134 PushS
	var_59_int = var_58_string + var_45_int; // 0x135 Add
	Trace(var_59_int); // 0x136 Func
	var_43_bool = 0; // 0x138 MovB
	return 6; // 0x139 Return
	
Label_314:
	AddChild(var_44_object); // 0x13a ObjFunc
	var_60_int = 7; // 0x13c PushI
	SendWorldWndMessage(var_60_int); // 0x13d Func
	GetCategory(var_51_int); // 0x13f ObjFunc
	SetDiarySection(var_51_int); // 0x141 Func
	var_43_bool = 0; // 0x143 MovB
	return 6; // 0x144 Return
}


func_238(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); // 0xee PushV
	GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector); // 0xef ObjFunc
	var_26_bool = var_22_bool == 0; // 0xf1 Not
	if(var_26_bool == 0) goto Label_251; // 0xf2 JumpB
	var_27_string = "Locator "; // 0xf3 PushS
	var_28_int = var_27_string + var_15_string; // 0xf4 Add
	var_29_string = " doesn't exist"; // 0xf5 PushS
	var_30_int = var_28_int + var_29_string; // 0xf6 Add
	Trace(var_30_int); // 0xf7 Func
	var_25_object = 0; // 0xf9 SetNull
	goto Label_253; // 0xfa Jump
	
Label_253:
	var_13_object = var_25_object; // 0xfd Mov
	return 8; // 0xfe Return
	
Label_251:
	AddActor(var_25_object, var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string); // 0xfb Func
}


func_273()
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x111 PushV
	var_40_int = 80; // 0x112 PushI
	var_41_int = 2; // 0x113 PushI
	var_42_int = 512162; // 0x114 PushI
	CreateDiaryEntry(var_39_object, var_40_int, var_41_int, var_42_int); // 0x115 Func
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; // 0x117 PushV
	var_44_object = var_39_object; // 0x118 Mov
	var_45_int = 26; // 0x119 MovI
	func_299(var_43_bool, var_44_object, var_45_int); // 0x11a NEW_2
	return 2; // 0x11c Return
}


func_177(var_61_float)
{
	EventDisable(26); // 0xb1 EventDisable
	func_156(var_59_int, var_60_float, var_61_float); // 0xb3 NEW_2
	var_73_object = var_2_object; // 0xb5 PushT
	if(var_73_object == 0) goto Label_186; // 0xb6 JumpB
	var_74_string = "cleanup"; // 0xb7 PushS
	Trigger(var_61_float, var_74_string); // 0xb8 Func
	
Label_186:
	var_75_string = ""; var_76_bool = 0; // 0xba PushV
	var_75_string = "r7_house2_01@door1"; // 0xbb MovS
	var_76_bool = 1; // 0xbc MovB
	func_256(var_75_string, var_76_bool); // 0xbd NEW_2
	var_77_string = ""; var_78_bool = 0; // 0xbf PushV
	var_77_string = "r7_house2_01@door2"; // 0xc0 MovS
	var_78_bool = 1; // 0xc1 MovB
	func_256(var_77_string, var_78_bool); // 0xc2 NEW_2
	var_79_object = Obj(); // 0xc4 PushV
	func_226(var_79_object); // 0xc5 NEW_2
	RemoveActor(var_79_object); // 0xc7 Func
	return 0; // 0xc9 Return
}


func_115()
{
	var_7_int = 0; var_8_int = 0; // 0x73 PushV
	var_9_string = "d3q02"; // 0x74 PushS
	GetVariable(var_9_string, var_8_int); // 0x75 Func
	var_10_int = 1000; // 0x77 PushI
	var_11_bool = var_8_int != var_10_int; // 0x78 Neq
	if(var_11_bool == 0) goto Label_125; // 0x79 JumpB
	func_126(); // 0x7b NEW_2
	
Label_125:
	return 2; // 0x7d Return
}


func_156(var_0_object, var_59_int, var_60_float)
{
	var_65_object = var_0_object; // 0x9c PushT
	if(var_65_object == 0) goto Label_161; // 0x9d JumpB
	var_66_string = "cleanup"; // 0x9e PushS
	Trigger(var_0_object, var_66_string); // 0x9f Func
	
Label_161:
	var_67_object = var_1_object; // 0xa1 PushT
	if(var_67_object == 0) goto Label_166; // 0xa2 JumpB
	var_68_string = "cleanup"; // 0xa3 PushS
	Trigger(var_68_string, var_68_string); // 0xa4 Func
	
Label_166:
	var_69_object = var_3_object; // 0xa6 PushT
	if(var_69_object == 0) goto Label_171; // 0xa7 JumpB
	var_70_string = "cleanup"; // 0xa8 PushS
	Trigger(var_60_float, var_70_string); // 0xa9 Func
	
Label_171:
	var_71_object = var_4_object; // 0xab PushT
	if(var_71_object == 0) goto Label_176; // 0xac JumpB
	var_72_string = "cleanup"; // 0xad PushS
	Trigger(var_59_int, var_72_string); // 0xae Func
	
Label_176:
	return 0; // 0xb0 Return
}


func_126()
{
	var_12_string = "d3q02"; // 0x7e PushS
	var_13_int = -1; // 0x7f PushI
	SetVariable(var_12_string, var_13_int); // 0x80 Func
	func_177(var_8_int); // 0x83 NEW_2
	return 0; // 0x85 Return
}


func_286(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x11e PushV
	GetDiaryRoot(var_54_object); // 0x11f Func
	var_55_bool = var_54_object == 0; // 0x121 Not
	if(var_55_bool == 0) goto Label_296; // 0x122 JumpB
	var_56_string = "Can't retrieve diary root"; // 0x123 PushS
	Trace(var_56_string); // 0x124 Func
	var_52_object = 0; // 0x126 MovB
	return 2; // 0x127 Return
	
Label_296:
	var_52_object = var_54_object; // 0x128 Mov
	return 2; // 0x129 Return
}


