task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_string)
{
	var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); var_9_int = 0; // 0x9 PushV
	Trace(var_5_string); // 0xa Func
	var_10_string = "init_house"; // 0xc PushS
	var_11_bool = var_5_string == var_10_string; // 0xd Eq
	if(var_11_bool == 0) goto Label_76; // 0xe JumpB
	var_12_bool = 0; var_13_string = ""; // 0xf PushV
	var_13_string = "NPC_Petr"; // 0x10 MovS
	func_210(var_12_bool, var_13_string); // 0x11 Call
	var_17_string = "house_petr"; // 0x13 PushS
	GetSceneByName(var_8_object, var_17_string); // 0x14 Func
	var_9_int = 1; // 0x16 MovI
	
Label_23:
	var_18_int = 4; // 0x17 PushI
	var_19_bool = var_9_int <= var_18_int; // 0x18 LE
	if(var_19_bool == 0) goto Label_39; // 0x19 JumpB
	var_20_object = Obj(); var_21_object = Obj(); var_22_string = ""; var_23_string = ""; var_24_string = ""; // 0x1a PushV
	var_21_object = var_8_object; // 0x1b Mov
	var_25_string = "pt_d10q01_soldier"; // 0x1c PushS
	var_22_string = var_25_string + var_9_int; // 0x1d Add2
	var_23_string = "pers_soldat"; // 0x1e MovS
	var_24_string = "d10q01_soldier.xml"; // 0x1f MovS
	func_158(var_20_object, var_21_object, var_22_string, var_23_string, var_24_string); // 0x20 Call
	add(var_20_object); // 0x22 TObjFunc
	var_39_int = 1; // 0x24 PushI
	var_9_int = var_9_int + var_39_int; // 0x25 Add2
	goto Label_23; // 0x26 Jump
	
Label_39:
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = ""; // 0x27 PushV
	var_41_object = var_8_object; // 0x28 Mov
	var_42_string = "pt_d10q01_msoldier"; // 0x29 MovS
	var_43_string = "pers_soldat"; // 0x2a MovS
	var_44_string = "d10q01_msoldier.xml"; // 0x2b MovS
	func_158(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string); // 0x2c Call
	add(var_40_object); // 0x2e TObjFunc
	var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = ""; // 0x30 PushV
	var_46_object = var_8_object; // 0x31 Mov
	var_47_string = "pt_d10q01_sketch"; // 0x32 MovS
	var_48_string = "scripted_container"; // 0x33 MovS
	var_49_string = "d10q01_blueprint.xml"; // 0x34 MovS
	func_176(var_45_object, var_46_object, var_47_string, var_48_string, var_49_string); // 0x35 Call
	var_1_object = var_45_object; // 0x36 TMov
	GetMainOutdoorScene(var_8_object); // 0x38 Func
	var_63_object = Obj(); var_64_object = Obj(); var_65_string = ""; var_66_string = ""; var_67_string = ""; // 0x3a PushV
	var_64_object = var_8_object; // 0x3b Mov
	var_65_string = "pt_d10q01_petr"; // 0x3c MovS
	var_66_string = "pers_birdmask"; // 0x3d MovS
	var_67_string = "d10q01_petr.xml"; // 0x3e MovS
	func_158(var_63_object, var_64_object, var_65_string, var_66_string, var_67_string); // 0x3f Call
	var_2_object = var_63_object; // 0x40 TMov
	var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = ""; // 0x42 PushV
	var_69_object = var_8_object; // 0x43 Mov
	var_70_string = "pt_d10q01_fire"; // 0x44 MovS
	var_71_string = "scripted"; // 0x45 MovS
	var_72_string = "d10q01_fire.xml"; // 0x46 MovS
	func_176(var_68_object, var_69_object, var_70_string, var_71_string, var_72_string); // 0x47 Call
	var_3_object = var_68_object; // 0x48 TMov
	var_8_object = 0; // 0x4a SetNull
	goto Label_108; // 0x4b Jump
	
Label_108:
	return 4; // 0x6c Return
	
Label_76:
	var_73_string = "soldier_fight"; // 0x4c PushS
	var_74_bool = var_5_string == var_73_string; // 0x4d Eq
	if(var_74_bool == 0) goto Label_86; // 0x4e JumpB
	var_75_object = Obj(); var_76_string = ""; // 0x4f PushV
	var_75_object = var_0_object; // 0x50 MovT
	var_76_string = "attack"; // 0x51 MovS
	func_222(var_76_string); // 0x52 Call
	var_4_bool = 1; // 0x54 TMovB
	goto Label_108; // 0x55 Jump
	
Label_86:
	var_86_string = "house_unload"; // 0x56 PushS
	var_87_bool = var_5_string == var_86_string; // 0x57 Eq
	if(var_87_bool == 0) goto Label_95; // 0x58 JumpB
	var_88_string = ""; var_89_bool = 0; // 0x59 PushV
	var_88_string = "house_petr@door1"; // 0x5a MovS
	var_89_bool = 1; // 0x5b MovB
	func_194(var_88_string, var_89_bool); // 0x5c Call
	goto Label_108; // 0x5e Jump
	
Label_95:
	var_98_string = "fail"; // 0x5f PushS
	var_99_bool = var_5_string == var_98_string; // 0x60 Eq
	if(var_99_bool == 0) goto Label_102; // 0x61 JumpB
	func_109(); // 0x63 Call
	goto Label_108; // 0x65 Jump
	
Label_102:
	var_112_string = "completed"; // 0x66 PushS
	var_113_bool = var_5_string == var_112_string; // 0x67 Eq
	if(var_113_bool == 0) goto Label_108; // 0x68 JumpB
	func_117(); // 0x6a Call
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool)
{
	var_5_object = Obj(); // 0x0 PushV
	func_152(var_5_object); // 0x1 Call
	var_0_object = var_5_object; // 0x2 TMov
	var_4_bool = 0; // 0x4 TMovB
	
Label_5:
	Hold(); // 0x5 Func
	goto Label_5; // 0x7 Jump
}


func_194(var_88_string, var_89_bool)
{
	var_90_object = Obj(); var_91_object = Obj(); // 0xc2 PushV
	FindActor(var_91_object, var_88_string); // 0xc3 Func
	var_92_bool = var_91_object == 0; // 0xc5 Not
	if(var_92_bool == 0) goto Label_205; // 0xc6 JumpB
	var_93_string = "Door "; // 0xc7 PushS
	var_94_int = var_93_string + var_88_string; // 0xc8 Add
	var_95_string = " not found"; // 0xc9 PushS
	var_96_int = var_94_int + var_95_string; // 0xca Add
	Trace(var_96_int); // 0xcb Func
	
Label_205:
	var_97_string = "locked"; // 0xcd PushS
	SetProperty(var_97_string, var_89_bool); // 0xce ObjFunc
	return 2; // 0xd0 Return
}


func_109()
{
	var_100_string = "d10q01"; // 0x6d PushS
	var_101_int = -1; // 0x6e PushI
	SetVariable(var_100_string, var_101_int); // 0x6f Func
	func_125(var_7_int, var_8_object, var_9_int); // 0x72 Call
	return 0; // 0x74 Return
}


func_176(var_45_object, var_46_object, var_47_string, var_48_string, var_49_string)
{
	var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_object = Obj(); var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_object = Obj(); // 0xb0 PushV
	GetLocator(var_47_string, var_54_bool, var_55_cvector, var_56_cvector); // 0xb1 ObjFunc
	var_58_bool = var_54_bool == 0; // 0xb3 Not
	if(var_58_bool == 0) goto Label_189; // 0xb4 JumpB
	var_59_string = "Locator "; // 0xb5 PushS
	var_60_int = var_59_string + var_47_string; // 0xb6 Add
	var_61_string = " doesn't exist"; // 0xb7 PushS
	var_62_int = var_60_int + var_61_string; // 0xb8 Add
	Trace(var_62_int); // 0xb9 Func
	var_57_object = 0; // 0xbb SetNull
	goto Label_191; // 0xbc Jump
	
Label_191:
	var_45_object = var_57_object; // 0xbf Mov
	return 8; // 0xc0 Return
	
Label_189:
	AddActorByType(var_57_object, var_48_string, var_46_object, var_55_cvector, var_56_cvector, var_49_string); // 0xbd Func
}


func_210(var_12_bool, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0xd2 PushV
	FindActor(var_15_object, var_13_string); // 0xd3 Func
	var_16_bool = var_15_object == 0; // 0xd5 Not
	if(var_16_bool == 0) goto Label_217; // 0xd6 JumpB
	var_12_bool = 0; // 0xd7 MovB
	return 2; // 0xd8 Return
	
Label_217:
	RemoveActor(var_15_object); // 0xd9 Func
	var_12_bool = 1; // 0xdb MovB
	return 2; // 0xdc Return
}


func_117()
{
	var_114_string = "d10q01"; // 0x75 PushS
	var_115_int = 1000; // 0x76 PushI
	SetVariable(var_114_string, var_115_int); // 0x77 Func
	func_125(var_7_int, var_8_object, var_9_int); // 0x7a Call
	return 0; // 0x7c Return
}


func_152(var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x98 PushV
	CreateObjectVector(var_7_object); // 0x99 Func
	var_5_object = var_7_object; // 0x9b Mov
	return 2; // 0x9c Return
}


func_158(var_20_object, var_21_object, var_22_string, var_23_string, var_24_string)
{
	var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); // 0x9e PushV
	GetLocator(var_22_string, var_30_bool, var_31_cvector, var_32_cvector); // 0x9f ObjFunc
	var_34_bool = var_30_bool == 0; // 0xa1 Not
	if(var_34_bool == 0) goto Label_171; // 0xa2 JumpB
	var_35_string = "Locator "; // 0xa3 PushS
	var_36_int = var_35_string + var_22_string; // 0xa4 Add
	var_37_string = " doesn't exist"; // 0xa5 PushS
	var_38_int = var_36_int + var_37_string; // 0xa6 Add
	Trace(var_38_int); // 0xa7 Func
	var_33_object = 0; // 0xa9 SetNull
	goto Label_173; // 0xaa Jump
	
Label_173:
	var_20_object = var_33_object; // 0xad Mov
	return 8; // 0xae Return
	
Label_171:
	AddActor(var_33_object, var_23_string, var_21_object, var_31_cvector, var_32_cvector, var_24_string); // 0xab Func
}


func_125(var_0_object, var_8_object, var_9_int)
{
	EventDisable(26); // 0x7d EventDisable
	var_102_object = Obj(); var_103_string = ""; // 0x7e PushV
	var_102_object = var_0_object; // 0x7f MovT
	var_103_string = "cleanup"; // 0x80 MovS
	func_222(var_103_string); // 0x81 Call
	var_104_object = var_1_object; // 0x83 PushT
	if(var_104_object == 0) goto Label_136; // 0x84 JumpB
	var_105_string = "cleanup"; // 0x85 PushS
	Trigger(var_105_string, var_105_string); // 0x86 Func
	
Label_136:
	var_106_object = var_2_object; // 0x88 PushT
	if(var_106_object == 0) goto Label_141; // 0x89 JumpB
	var_107_string = "cleanup"; // 0x8a PushS
	Trigger(var_9_int, var_107_string); // 0x8b Func
	
Label_141:
	var_108_object = var_3_object; // 0x8d PushT
	if(var_108_object == 0) goto Label_146; // 0x8e JumpB
	var_109_string = "cleanup"; // 0x8f PushS
	Trigger(var_8_object, var_109_string); // 0x90 Func
	
Label_146:
	var_110_string = ""; var_111_bool = 0; // 0x92 PushV
	var_110_string = "house_petr@door1"; // 0x93 MovS
	var_111_bool = 0; // 0x94 MovB
	func_194(var_110_string, var_111_bool); // 0x95 Call
	return 0; // 0x97 Return
}


func_222(var_76_string)
{
	var_77_int = 0; var_78_int = 0; var_79_object = Obj(); var_80_int = 0; var_81_int = 0; var_82_object = Obj(); // 0xde PushV
	size(var_80_int); // 0xdf ObjFunc
	var_81_int = 0; // 0xe1 MovI
	
Label_226:
	var_83_bool = var_81_int < var_80_int; // 0xe2 LT
	if(var_83_bool == 0) goto Label_238; // 0xe3 JumpB
	get(var_82_object, var_81_int); // 0xe4 ObjFunc
	var_84_object = var_82_object; // 0xe6 Push
	if(var_84_object == 0) goto Label_234; // 0xe7 JumpB
	Trigger(var_82_object, var_76_string); // 0xe8 Func
	
Label_234:
	var_82_object = 0; // 0xea SetNull
	var_85_int = 1; // 0xeb PushI
	var_81_int = var_81_int + var_85_int; // 0xec Add2
	goto Label_226; // 0xed Jump
	
Label_238:
	return 6; // 0xee Return
}


