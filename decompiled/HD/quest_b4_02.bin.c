task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0xd PushV
	Trace(var_4_string); // 0xe Func
	var_19_string = "place_boy"; // 0x10 PushS
	var_20_bool = var_4_string == var_19_string; // 0x11 Eq
	if(var_20_bool == 0) goto Label_50; // 0x12 JumpB
	GetMainOutdoorScene(var_12_object); // 0x13 Func
	var_21_object = Obj(); var_22_object = Obj(); var_23_string = ""; var_24_string = ""; var_25_string = ""; // 0x15 PushV
	var_22_object = var_12_object; // 0x16 Mov
	var_23_string = "pt_b4q02_boy"; // 0x17 MovS
	var_24_string = "pers_boy"; // 0x18 MovS
	var_25_string = "b4q02_boy.xml"; // 0x19 MovS
	func_220(var_22_object, var_23_string, var_24_string, var_25_string); // 0x1a NEW_2
	var_0_object = var_21_object; // 0x1b TMov
	var_39_string = "house5_unoin03r"; // 0x1d PushS
	GetSceneByName(var_12_object, var_39_string); // 0x1e Func
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = ""; // 0x20 PushV
	var_41_object = var_12_object; // 0x21 Mov
	var_42_string = "pt_b4q02_samopal"; // 0x22 MovS
	var_43_string = "scripted_container"; // 0x23 MovS
	var_44_string = "b4q02_samopal.xml"; // 0x24 MovS
	func_202(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string); // 0x25 NEW_2
	var_1_object = var_40_object; // 0x26 TMov
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = ""; // 0x28 PushV
	var_59_object = var_12_object; // 0x29 Mov
	var_60_string = "pt_b4q02_samopal_ammo"; // 0x2a MovS
	var_61_string = "scripted_container"; // 0x2b MovS
	var_62_string = "b4q02_samopal_ammo.xml"; // 0x2c MovS
	func_202(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string); // 0x2d NEW_2
	var_2_object = var_58_object; // 0x2e TMov
	var_12_object = 0; // 0x30 SetNull
	goto Label_113; // 0x31 Jump
	
Label_113:
	return 14; // 0x71 Return
	
Label_50:
	var_63_string = "boy_run"; // 0x32 PushS
	var_64_bool = var_4_string == var_63_string; // 0x33 Eq
	if(var_64_bool == 0) goto Label_86; // 0x34 JumpB
	GetMainOutdoorScene(var_14_object); // 0x35 Func
	var_15_int = 1; // 0x37 MovI
	
Label_56:
	var_65_string = "pt_b4q02_grabitel"; // 0x38 PushS
	var_66_int = var_65_string + var_15_int; // 0x39 Add
	GetLocator(var_66_int, var_16_bool, var_17_cvector, var_18_cvector); // 0x3a ObjFunc
	var_67_bool = var_16_bool == 0; // 0x3c Not
	if(var_67_bool == 0) goto Label_63; // 0x3d JumpB
	goto Label_73; // 0x3e Jump
	
Label_73:
	GetActor(var_13_object); // 0x49 TObjFunc
	var_68_bool = var_13_object == 0; // 0x4b Not
	if(var_68_bool == 0) goto Label_80; // 0x4c JumpB
	Remove(); // 0x4d TObjFunc
	goto Label_83; // 0x4f Jump
	
Label_83:
	var_14_object = 0; // 0x53 SetNull
	var_13_object = 0; // 0x54 SetNull
	goto Label_113; // 0x55 Jump
	
Label_80:
	var_69_string = "run"; // 0x50 PushS
	Trigger(var_13_object, var_69_string); // 0x51 Func
	
Label_63:
	var_70_string = "pers_grabitel"; // 0x3f PushS
	var_71_string = "b4q02_grabitel.xml"; // 0x40 PushS
	var_72_bool = 1; // 0x41 PushB
	AddStationaryActor(var_13_object, var_17_cvector, var_18_cvector, var_70_string, var_71_string, var_72_bool); // 0x42 ObjFunc
	add(var_13_object); // 0x44 TObjFunc
	var_73_int = 1; // 0x46 PushI
	var_15_int = var_15_int + var_73_int; // 0x47 Add2
	goto Label_56; // 0x48 Jump
	
Label_86:
	var_74_string = "ammo_or_samopal_taken"; // 0x56 PushS
	var_75_bool = var_4_string == var_74_string; // 0x57 Eq
	if(var_75_bool == 0) goto Label_96; // 0x58 JumpB
	func_259(); // 0x5a NEW_2
	func_133(); // 0x5d NEW_2
	goto Label_113; // 0x5f Jump
	
Label_96:
	var_120_string = "house_load"; // 0x60 PushS
	var_121_bool = var_4_string == var_120_string; // 0x61 Eq
	if(var_121_bool == 0) goto Label_100; // 0x62 JumpB
	goto Label_113; // 0x63 Jump
	
Label_100:
	var_122_string = "fail"; // 0x64 PushS
	var_123_bool = var_4_string == var_122_string; // 0x65 Eq
	if(var_123_bool == 0) goto Label_107; // 0x66 JumpB
	func_125(); // 0x68 NEW_2
	goto Label_113; // 0x6a Jump
	
Label_107:
	var_126_string = "completed"; // 0x6b PushS
	var_127_bool = var_4_string == var_126_string; // 0x6c Eq
	if(var_127_bool == 0) goto Label_113; // 0x6d JumpB
	func_133(); // 0x6f NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_114(); // 0xbb NEW_2
	return 0; // 0xbd Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_string = "b4q02"; // 0x0 PushS
	var_5_int = 1; // 0x1 PushI
	SetVariable(var_4_string, var_5_int); // 0x2 Func
	var_6_object = Obj(); // 0x4 PushV
	func_196(var_6_object); // 0x5 NEW_2
	var_3_object = var_6_object; // 0x6 TMov
	var_9_int = 0; // 0x8 PushV
	var_9_int = 4; // 0x9 MovI
	func_166(var_9_int); // 0xa NEW_2
	return 0; // 0xc Return
}


func_259()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x103 PushV
	var_78_int = 215; // 0x104 PushI
	var_79_int = 2; // 0x105 PushI
	var_80_int = 518578; // 0x106 PushI
	CreateDiaryEntry(var_77_object, var_78_int, var_79_int, var_80_int); // 0x107 Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0x109 PushV
	var_82_object = var_77_object; // 0x10a Mov
	var_83_int = 213; // 0x10b MovI
	func_285(var_81_bool, var_82_object, var_83_int); // 0x10c NEW_2
	return 2; // 0x10e Return
}


func_196(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0xc4 PushV
	CreateObjectVector(var_8_object); // 0xc5 Func
	var_6_object = var_8_object; // 0xc7 Mov
	return 2; // 0xc8 Return
}


func_133()
{
	var_99_string = "b4q02"; // 0x85 PushS
	var_100_int = 1000; // 0x86 PushI
	SetVariable(var_99_string, var_100_int); // 0x87 Func
	func_141(var_17_cvector, var_18_cvector); // 0x8a NEW_2
	return 0; // 0x8c Return
}


func_166(var_9_int)
{
	var_10_float = 0; var_11_float = 0; // 0xa6 PushV
	GetGameTime(var_11_float); // 0xa7 Func
	var_12_int = 24; // 0xa9 PushI
	var_13_float = var_9_int * var_12_int; // 0xaa Mult
	var_14_bool = var_11_float >= var_13_float; // 0xab GE
	if(var_14_bool == 0) goto Label_177; // 0xac JumpB
	func_141(var_10_float, var_11_float); // 0xae NEW_2
	goto Label_184; // 0xb0 Jump
	
Label_184:
	return 2; // 0xb8 Return
	
Label_177:
	var_34_int = 0; // 0xb1 PushI
	var_35_int = 24; // 0xb2 PushI
	var_36_float = var_9_int * var_35_int; // 0xb3 Mult
	SetTimeEvent(var_34_int, var_36_float); // 0xb4 Func
	Hold(); // 0xb6 Func
}


func_202(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string)
{
	var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0xca PushV
	GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector); // 0xcb ObjFunc
	var_53_bool = var_49_bool == 0; // 0xcd Not
	if(var_53_bool == 0) goto Label_215; // 0xce JumpB
	var_54_string = "Locator "; // 0xcf PushS
	var_55_int = var_54_string + var_42_string; // 0xd0 Add
	var_56_string = " doesn't exist"; // 0xd1 PushS
	var_57_int = var_55_int + var_56_string; // 0xd2 Add
	Trace(var_57_int); // 0xd3 Func
	var_52_object = 0; // 0xd5 SetNull
	goto Label_217; // 0xd6 Jump
	
Label_217:
	var_40_object = var_52_object; // 0xd9 Mov
	return 8; // 0xda Return
	
Label_215:
	AddActorByType(var_52_object, var_43_string, var_41_object, var_50_cvector, var_51_cvector, var_44_string); // 0xd7 Func
}


func_141(var_3_object, var_11_float)
{
	EventDisable(26); // 0x8d EventDisable
	var_15_object = var_0_object; // 0x8e PushT
	if(var_15_object == 0) goto Label_146; // 0x8f JumpB
	Remove(); // 0x90 TObjFunc
	
Label_146:
	var_16_object = var_1_object; // 0x92 PushT
	if(var_16_object == 0) goto Label_151; // 0x93 JumpB
	var_17_string = "cleanup"; // 0x94 PushS
	Trigger(var_17_string, var_17_string); // 0x95 Func
	
Label_151:
	var_18_object = var_2_object; // 0x97 PushT
	if(var_18_object == 0) goto Label_156; // 0x98 JumpB
	var_19_string = "cleanup"; // 0x99 PushS
	Trigger(var_11_float, var_19_string); // 0x9a Func
	
Label_156:
	var_20_object = Obj(); // 0x9c PushV
	var_20_object = var_3_object; // 0x9d MovT
	func_238(var_20_object); // 0x9e NEW_2
	var_31_object = Obj(); // 0xa0 PushV
	func_190(var_31_object); // 0xa1 NEW_2
	RemoveActor(var_31_object); // 0xa3 Func
	return 0; // 0xa5 Return
}


func_238(var_20_object)
{
	var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_int = 0; var_25_int = 0; var_26_object = Obj(); // 0xee PushV
	var_27_object = var_20_object; // 0xef Push
	if(var_27_object == 0) goto Label_258; // 0xf0 JumpB
	size(var_24_int); // 0xf1 ObjFunc
	var_25_int = 0; // 0xf3 MovI
	
Label_244:
	var_28_bool = var_25_int < var_24_int; // 0xf4 LT
	if(var_28_bool == 0) goto Label_256; // 0xf5 JumpB
	get(var_26_object, var_25_int); // 0xf6 ObjFunc
	var_29_object = var_26_object; // 0xf8 Push
	if(var_29_object == 0) goto Label_252; // 0xf9 JumpB
	Remove(); // 0xfa ObjFunc
	
Label_252:
	var_26_object = 0; // 0xfc SetNull
	var_30_int = 1; // 0xfd PushI
	var_25_int = var_25_int + var_30_int; // 0xfe Add2
	goto Label_244; // 0xff Jump
	
Label_256:
	clear(); // 0x100 ObjFunc
	
Label_258:
	return 6; // 0x102 Return
}


func_272(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0x110 PushV
	GetDiaryRoot(var_92_object); // 0x111 Func
	var_93_bool = var_92_object == 0; // 0x113 Not
	if(var_93_bool == 0) goto Label_282; // 0x114 JumpB
	var_94_string = "Can't retrieve diary root"; // 0x115 PushS
	Trace(var_94_string); // 0x116 Func
	var_90_object = 0; // 0x118 MovB
	return 2; // 0x119 Return
	
Label_282:
	var_90_object = var_92_object; // 0x11a Mov
	return 2; // 0x11b Return
}


func_114()
{
	var_6_int = 0; var_7_int = 0; // 0x72 PushV
	var_8_string = "b4q02"; // 0x73 PushS
	GetVariable(var_8_string, var_7_int); // 0x74 Func
	var_9_int = 1000; // 0x76 PushI
	var_10_bool = var_7_int != var_9_int; // 0x77 Neq
	if(var_10_bool == 0) goto Label_124; // 0x78 JumpB
	func_125(); // 0x7a NEW_2
	
Label_124:
	return 2; // 0x7c Return
}


func_285(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0; // 0x11d PushV
	var_90_object = Obj(); // 0x11e PushV
	func_272(var_90_object); // 0x11f NEW_2
	var_87_object = var_90_object; // 0x120 Mov
	Find(var_83_int, var_88_object); // 0x122 ObjFunc
	var_95_bool = var_88_object == 0; // 0x124 Not
	if(var_95_bool == 0) goto Label_300; // 0x125 JumpB
	var_96_string = "Can't find diary parent with id: "; // 0x126 PushS
	var_97_int = var_96_string + var_83_int; // 0x127 Add
	Trace(var_97_int); // 0x128 Func
	var_81_bool = 0; // 0x12a MovB
	return 6; // 0x12b Return
	
Label_300:
	AddChild(var_82_object); // 0x12c ObjFunc
	var_98_int = 7; // 0x12e PushI
	SendWorldWndMessage(var_98_int); // 0x12f Func
	GetCategory(var_89_int); // 0x131 ObjFunc
	SetDiarySection(var_89_int); // 0x133 Func
	var_81_bool = 0; // 0x135 MovB
	return 6; // 0x136 Return
}


func_220(var_21_object, var_23_string, var_24_string, var_25_string)
{
	var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); // 0xdc PushV
	GetLocator(var_23_string, var_30_bool, var_31_cvector, var_32_cvector); // 0xdd ObjFunc
	var_34_bool = var_30_bool == 0; // 0xdf Not
	if(var_34_bool == 0) goto Label_233; // 0xe0 JumpB
	var_35_string = "Locator "; // 0xe1 PushS
	var_36_int = var_35_string + var_23_string; // 0xe2 Add
	var_37_string = " doesn't exist"; // 0xe3 PushS
	var_38_int = var_36_int + var_37_string; // 0xe4 Add
	Trace(var_38_int); // 0xe5 Func
	var_33_object = 0; // 0xe7 SetNull
	goto Label_235; // 0xe8 Jump
	
Label_235:
	var_21_object = var_33_object; // 0xeb Mov
	return 8; // 0xec Return
	
Label_233:
	AddStationaryActor(var_33_object, var_31_cvector, var_32_cvector, var_24_string, var_25_string); // 0xe9 ObjFunc
}


func_125()
{
	var_11_string = "b4q02"; // 0x7d PushS
	var_12_int = -1; // 0x7e PushI
	SetVariable(var_11_string, var_12_int); // 0x7f Func
	func_141(var_6_int, var_7_int); // 0x82 NEW_2
	return 0; // 0x84 Return
}


func_190(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0xbe PushV
	self(var_33_object); // 0xbf Func
	var_31_object = var_33_object; // 0xc1 Mov
	return 2; // 0xc2 Return
}


