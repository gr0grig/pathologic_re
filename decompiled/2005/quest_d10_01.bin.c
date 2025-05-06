task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_string)
{
	var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0x16 PushV
	Trace(var_5_string); // 0x17 Func
	var_14_string = "init_house"; // 0x19 PushS
	var_15_bool = var_5_string == var_14_string; // 0x1a Eq
	if(var_15_bool == 0) goto Label_89; // 0x1b JumpB
	var_16_bool = 0; var_17_string = ""; // 0x1c PushV
	var_17_string = "NPC_Petr"; // 0x1d MovS
	func_257(var_16_bool, var_17_string); // 0x1e NEW_2
	var_21_string = "house_petr"; // 0x20 PushS
	GetSceneByName(var_10_object, var_21_string); // 0x21 Func
	var_11_int = 1; // 0x23 MovI
	
Label_36:
	var_22_int = 4; // 0x24 PushI
	var_23_bool = var_11_int <= var_22_int; // 0x25 LE
	if(var_23_bool == 0) goto Label_52; // 0x26 JumpB
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = ""; // 0x27 PushV
	var_25_object = var_10_object; // 0x28 Mov
	var_29_string = "pt_d10q01_soldier"; // 0x29 PushS
	var_26_string = var_29_string + var_11_int; // 0x2a Add2
	var_27_string = "pers_soldat"; // 0x2b MovS
	var_28_string = "d10q01_soldier.xml"; // 0x2c MovS
	func_204(var_24_object, var_25_object, var_26_string, var_27_string, var_28_string); // 0x2d NEW_2
	add(var_24_object); // 0x2f TObjFunc
	var_43_int = 1; // 0x31 PushI
	var_11_int = var_11_int + var_43_int; // 0x32 Add2
	goto Label_36; // 0x33 Jump
	
Label_52:
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = ""; // 0x34 PushV
	var_45_object = var_10_object; // 0x35 Mov
	var_46_string = "pt_d10q01_msoldier"; // 0x36 MovS
	var_47_string = "pers_soldat"; // 0x37 MovS
	var_48_string = "d10q01_msoldier.xml"; // 0x38 MovS
	func_204(var_44_object, var_45_object, var_46_string, var_47_string, var_48_string); // 0x39 NEW_2
	add(var_44_object); // 0x3b TObjFunc
	var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = ""; // 0x3d PushV
	var_50_object = var_10_object; // 0x3e Mov
	var_51_string = "pt_d10q01_sketch"; // 0x3f MovS
	var_52_string = "scripted_container"; // 0x40 MovS
	var_53_string = "d10q01_blueprint.xml"; // 0x41 MovS
	func_222(var_49_object, var_50_object, var_51_string, var_52_string, var_53_string); // 0x42 NEW_2
	var_1_object = var_49_object; // 0x43 TMov
	GetMainOutdoorScene(var_10_object); // 0x45 Func
	var_67_object = Obj(); var_68_object = Obj(); var_69_string = ""; var_70_string = ""; var_71_string = ""; // 0x47 PushV
	var_68_object = var_10_object; // 0x48 Mov
	var_69_string = "pt_d10q01_petr"; // 0x49 MovS
	var_70_string = "pers_birdmask"; // 0x4a MovS
	var_71_string = "d10q01_petr.xml"; // 0x4b MovS
	func_204(var_67_object, var_68_object, var_69_string, var_70_string, var_71_string); // 0x4c NEW_2
	var_2_object = var_67_object; // 0x4d TMov
	var_72_object = Obj(); var_73_object = Obj(); var_74_string = ""; var_75_string = ""; var_76_string = ""; // 0x4f PushV
	var_73_object = var_10_object; // 0x50 Mov
	var_74_string = "pt_d10q01_fire"; // 0x51 MovS
	var_75_string = "scripted"; // 0x52 MovS
	var_76_string = "d10q01_fire.xml"; // 0x53 MovS
	func_222(var_72_object, var_73_object, var_74_string, var_75_string, var_76_string); // 0x54 NEW_2
	var_3_object = var_72_object; // 0x55 TMov
	var_10_object = 0; // 0x57 SetNull
	goto Label_143; // 0x58 Jump
	
Label_143:
	return 8; // 0x8f Return
	
Label_89:
	var_77_string = "soldier_fight"; // 0x59 PushS
	var_78_bool = var_5_string == var_77_string; // 0x5a Eq
	if(var_78_bool == 0) goto Label_99; // 0x5b JumpB
	var_79_object = Obj(); var_80_string = ""; // 0x5c PushV
	var_79_object = var_0_object; // 0x5d MovT
	var_80_string = "attack"; // 0x5e MovS
	func_269(var_79_object, var_80_string); // 0x5f NEW_2
	var_4_bool = 1; // 0x61 TMovB
	goto Label_143; // 0x62 Jump
	
Label_99:
	var_91_string = "house_unload"; // 0x63 PushS
	var_92_bool = var_5_string == var_91_string; // 0x64 Eq
	if(var_92_bool == 0) goto Label_113; // 0x65 JumpB
	var_93_string = "d10q01SoldierTalk"; // 0x66 PushS
	GetVariable(var_93_string, var_12_int); // 0x67 Func
	var_94_int = var_12_int; // 0x69 Push
	if(var_94_int == 0) goto Label_112; // 0x6a JumpB
	var_95_string = ""; var_96_bool = 0; // 0x6b PushV
	var_95_string = "house_petr@door1"; // 0x6c MovS
	var_96_bool = 1; // 0x6d MovB
	func_240(var_95_string, var_96_bool); // 0x6e NEW_2
	
Label_112:
	goto Label_143; // 0x70 Jump
	
Label_113:
	var_105_string = "cleanup"; // 0x71 PushS
	var_106_bool = var_5_string == var_105_string; // 0x72 Eq
	if(var_106_bool == 0) goto Label_130; // 0x73 JumpB
	var_107_string = "d10q01"; // 0x74 PushS
	GetVariable(var_107_string, var_13_int); // 0x75 Func
	var_108_int = 1000; // 0x77 PushI
	var_109_bool = var_13_int != var_108_int; // 0x78 Neq
	if(var_109_bool == 0) goto Label_126; // 0x79 JumpB
	func_144(); // 0x7b NEW_2
	goto Label_129; // 0x7d Jump
	
Label_129:
	goto Label_143; // 0x81 Jump
	
Label_126:
	func_160(var_11_int, var_12_int, var_13_int); // 0x7f NEW_2
	
Label_130:
	var_125_string = "fail"; // 0x82 PushS
	var_126_bool = var_5_string == var_125_string; // 0x83 Eq
	if(var_126_bool == 0) goto Label_137; // 0x84 JumpB
	func_144(); // 0x86 NEW_2
	goto Label_143; // 0x88 Jump
	
Label_137:
	var_127_string = "completed"; // 0x89 PushS
	var_128_bool = var_5_string == var_127_string; // 0x8a Eq
	if(var_128_bool == 0) goto Label_143; // 0x8b JumpB
	func_152(); // 0x8d NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x0 PushV
	var_7_string = "warehouse_rubin"; // 0x1 PushS
	GetSceneByName(var_6_object, var_7_string); // 0x2 Func
	var_8_string = "rubin"; // 0x4 PushS
	Trigger(var_6_object, var_8_string); // 0x5 Func
	var_9_string = ""; var_10_bool = 0; // 0x7 PushV
	var_9_string = "house_petr@door1"; // 0x8 MovS
	var_10_bool = 0; // 0x9 MovB
	func_240(var_9_string, var_10_bool); // 0xa NEW_2
	var_19_object = Obj(); // 0xc PushV
	func_198(var_19_object); // 0xd NEW_2
	var_0_object = var_19_object; // 0xe TMov
	var_4_bool = 0; // 0x10 TMovB
	
Label_17:
	Hold(); // 0x11 Func
	goto Label_17; // 0x13 Jump
}


func_160(var_0_object, var_12_int, var_13_int)
{
	EventDisable(26); // 0xa0 EventDisable
	var_112_object = Obj(); var_113_string = ""; // 0xa1 PushV
	var_112_object = var_0_object; // 0xa2 MovT
	var_113_string = "cleanup"; // 0xa3 MovS
	func_269(var_112_object, var_113_string); // 0xa4 NEW_2
	var_114_object = var_1_object; // 0xa6 PushT
	if(var_114_object == 0) goto Label_171; // 0xa7 JumpB
	var_115_string = "cleanup"; // 0xa8 PushS
	Trigger(var_115_string, var_115_string); // 0xa9 Func
	
Label_171:
	var_116_object = var_2_object; // 0xab PushT
	if(var_116_object == 0) goto Label_176; // 0xac JumpB
	var_117_string = "cleanup"; // 0xad PushS
	Trigger(var_13_int, var_117_string); // 0xae Func
	
Label_176:
	var_118_object = var_3_object; // 0xb0 PushT
	if(var_118_object == 0) goto Label_181; // 0xb1 JumpB
	var_119_string = "cleanup"; // 0xb2 PushS
	Trigger(var_12_int, var_119_string); // 0xb3 Func
	
Label_181:
	var_120_string = ""; var_121_bool = 0; // 0xb5 PushV
	var_120_string = "house_petr@door1"; // 0xb6 MovS
	var_121_bool = 0; // 0xb7 MovB
	func_240(var_120_string, var_121_bool); // 0xb8 NEW_2
	var_122_object = Obj(); // 0xba PushV
	func_192(var_122_object); // 0xbb NEW_2
	RemoveActor(var_122_object); // 0xbd Func
	return 0; // 0xbf Return
}


func_257(var_16_bool, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x101 PushV
	FindActor(var_19_object, var_17_string); // 0x102 Func
	var_20_bool = var_19_object == 0; // 0x104 Not
	if(var_20_bool == 0) goto Label_264; // 0x105 JumpB
	var_16_bool = 0; // 0x106 MovB
	return 2; // 0x107 Return
	
Label_264:
	RemoveActor(var_19_object); // 0x108 Func
	var_16_bool = 1; // 0x10a MovB
	return 2; // 0x10b Return
}


func_192(var_122_object)
{
	var_123_object = Obj(); var_124_object = Obj(); // 0xc0 PushV
	self(var_124_object); // 0xc1 Func
	var_122_object = var_124_object; // 0xc3 Mov
	return 2; // 0xc4 Return
}


func_198(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0xc6 PushV
	CreateObjectVector(var_21_object); // 0xc7 Func
	var_19_object = var_21_object; // 0xc9 Mov
	return 2; // 0xca Return
}


func_204(var_24_object, var_25_object, var_26_string, var_27_string, var_28_string)
{
	var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); // 0xcc PushV
	GetLocator(var_26_string, var_34_bool, var_35_cvector, var_36_cvector); // 0xcd ObjFunc
	var_38_bool = var_34_bool == 0; // 0xcf Not
	if(var_38_bool == 0) goto Label_217; // 0xd0 JumpB
	var_39_string = "Locator "; // 0xd1 PushS
	var_40_int = var_39_string + var_26_string; // 0xd2 Add
	var_41_string = " doesn't exist"; // 0xd3 PushS
	var_42_int = var_40_int + var_41_string; // 0xd4 Add
	Trace(var_42_int); // 0xd5 Func
	var_37_object = 0; // 0xd7 SetNull
	goto Label_219; // 0xd8 Jump
	
Label_219:
	var_24_object = var_37_object; // 0xdb Mov
	return 8; // 0xdc Return
	
Label_217:
	AddActor(var_37_object, var_27_string, var_25_object, var_35_cvector, var_36_cvector, var_28_string); // 0xd9 Func
}


func_269(var_79_object, var_80_string)
{
	var_81_int = 0; var_82_int = 0; var_83_object = Obj(); var_84_int = 0; var_85_int = 0; var_86_object = Obj(); // 0x10d PushV
	var_87_object = var_79_object; // 0x10e Push
	if(var_87_object == 0) goto Label_287; // 0x10f JumpB
	size(var_84_int); // 0x110 ObjFunc
	var_85_int = 0; // 0x112 MovI
	
Label_275:
	var_88_bool = var_85_int < var_84_int; // 0x113 LT
	if(var_88_bool == 0) goto Label_287; // 0x114 JumpB
	get(var_86_object, var_85_int); // 0x115 ObjFunc
	var_89_object = var_86_object; // 0x117 Push
	if(var_89_object == 0) goto Label_283; // 0x118 JumpB
	Trigger(var_86_object, var_80_string); // 0x119 Func
	
Label_283:
	var_86_object = 0; // 0x11b SetNull
	var_90_int = 1; // 0x11c PushI
	var_85_int = var_85_int + var_90_int; // 0x11d Add2
	goto Label_275; // 0x11e Jump
	
Label_287:
	return 6; // 0x11f Return
}


func_240(var_9_string, var_10_bool)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0xf0 PushV
	FindActor(var_12_object, var_9_string); // 0xf1 Func
	var_13_bool = var_12_object == 0; // 0xf3 Not
	if(var_13_bool == 0) goto Label_252; // 0xf4 JumpB
	var_14_string = "Door "; // 0xf5 PushS
	var_15_int = var_14_string + var_9_string; // 0xf6 Add
	var_16_string = " not found"; // 0xf7 PushS
	var_17_int = var_15_int + var_16_string; // 0xf8 Add
	Trace(var_17_int); // 0xf9 Func
	goto Label_255; // 0xfb Jump
	
Label_255:
	return 2; // 0xff Return
	
Label_252:
	var_18_string = "locked"; // 0xfc PushS
	SetProperty(var_18_string, var_10_bool); // 0xfd ObjFunc
}


func_144()
{
	var_110_string = "d10q01"; // 0x90 PushS
	var_111_int = -1; // 0x91 PushI
	SetVariable(var_110_string, var_111_int); // 0x92 Func
	func_160(var_11_int, var_12_int, var_13_int); // 0x95 NEW_2
	return 0; // 0x97 Return
}


func_152()
{
	var_129_string = "d10q01"; // 0x98 PushS
	var_130_int = 1000; // 0x99 PushI
	SetVariable(var_129_string, var_130_int); // 0x9a Func
	func_160(var_11_int, var_12_int, var_13_int); // 0x9d NEW_2
	return 0; // 0x9f Return
}


func_222(var_49_object, var_50_object, var_51_string, var_52_string, var_53_string)
{
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_object = Obj(); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_object = Obj(); // 0xde PushV
	GetLocator(var_51_string, var_58_bool, var_59_cvector, var_60_cvector); // 0xdf ObjFunc
	var_62_bool = var_58_bool == 0; // 0xe1 Not
	if(var_62_bool == 0) goto Label_235; // 0xe2 JumpB
	var_63_string = "Locator "; // 0xe3 PushS
	var_64_int = var_63_string + var_51_string; // 0xe4 Add
	var_65_string = " doesn't exist"; // 0xe5 PushS
	var_66_int = var_64_int + var_65_string; // 0xe6 Add
	Trace(var_66_int); // 0xe7 Func
	var_61_object = 0; // 0xe9 SetNull
	goto Label_237; // 0xea Jump
	
Label_237:
	var_49_object = var_61_object; // 0xed Mov
	return 8; // 0xee Return
	
Label_235:
	AddActorByType(var_61_object, var_52_string, var_50_object, var_59_cvector, var_60_cvector, var_53_string); // 0xeb Func
}


