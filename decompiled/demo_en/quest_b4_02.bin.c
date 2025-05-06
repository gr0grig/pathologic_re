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
	func_216(var_22_object, var_23_string, var_24_string, var_25_string); // 0x1a NEW_2
	var_0_object = var_21_object; // 0x1b TMov
	var_39_string = "house5_unoin03r"; // 0x1d PushS
	GetSceneByName(var_12_object, var_39_string); // 0x1e Func
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = ""; // 0x20 PushV
	var_41_object = var_12_object; // 0x21 Mov
	var_42_string = "pt_b4q02_samopal"; // 0x22 MovS
	var_43_string = "scripted_container"; // 0x23 MovS
	var_44_string = "b4q02_samopal.xml"; // 0x24 MovS
	func_198(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string); // 0x25 NEW_2
	var_1_object = var_40_object; // 0x26 TMov
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = ""; // 0x28 PushV
	var_59_object = var_12_object; // 0x29 Mov
	var_60_string = "pt_b4q02_samopal_ammo"; // 0x2a MovS
	var_61_string = "scripted_container"; // 0x2b MovS
	var_62_string = "b4q02_samopal_ammo.xml"; // 0x2c MovS
	func_198(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string); // 0x2d NEW_2
	var_2_object = var_58_object; // 0x2e TMov
	var_12_object = 0; // 0x30 SetNull
	goto Label_109; // 0x31 Jump
	
Label_109:
	return 14; // 0x6d Return
	
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
	goto Label_109; // 0x55 Jump
	
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
	var_74_string = "house_load"; // 0x56 PushS
	var_75_bool = var_4_string == var_74_string; // 0x57 Eq
	if(var_75_bool == 0) goto Label_96; // 0x58 JumpB
	func_255(); // 0x5a NEW_2
	func_129(); // 0x5d NEW_2
	goto Label_109; // 0x5f Jump
	
Label_96:
	var_120_string = "fail"; // 0x60 PushS
	var_121_bool = var_4_string == var_120_string; // 0x61 Eq
	if(var_121_bool == 0) goto Label_103; // 0x62 JumpB
	func_121(); // 0x64 NEW_2
	goto Label_109; // 0x66 Jump
	
Label_103:
	var_124_string = "completed"; // 0x67 PushS
	var_125_bool = var_4_string == var_124_string; // 0x68 Eq
	if(var_125_bool == 0) goto Label_109; // 0x69 JumpB
	func_129(); // 0x6b NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_110(); // 0xb7 NEW_2
	return 0; // 0xb9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_string = "b4q02"; // 0x0 PushS
	var_5_int = 1; // 0x1 PushI
	SetVariable(var_4_string, var_5_int); // 0x2 Func
	var_6_object = Obj(); // 0x4 PushV
	func_192(var_6_object); // 0x5 NEW_2
	var_3_object = var_6_object; // 0x6 TMov
	var_9_int = 0; // 0x8 PushV
	var_9_int = 4; // 0x9 MovI
	func_162(var_9_int); // 0xa NEW_2
	return 0; // 0xc Return
}


func_192(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0xc0 PushV
	CreateObjectVector(var_8_object); // 0xc1 Func
	var_6_object = var_8_object; // 0xc3 Mov
	return 2; // 0xc4 Return
}


func_129()
{
	var_99_string = "b4q02"; // 0x81 PushS
	var_100_int = 1000; // 0x82 PushI
	SetVariable(var_99_string, var_100_int); // 0x83 Func
	func_137(var_17_cvector, var_18_cvector); // 0x86 NEW_2
	return 0; // 0x88 Return
}


func_162(var_9_int)
{
	var_10_float = 0; var_11_float = 0; // 0xa2 PushV
	GetGameTime(var_11_float); // 0xa3 Func
	var_12_int = 24; // 0xa5 PushI
	var_13_float = var_9_int * var_12_int; // 0xa6 Mult
	var_14_bool = var_11_float >= var_13_float; // 0xa7 GE
	if(var_14_bool == 0) goto Label_173; // 0xa8 JumpB
	func_137(var_10_float, var_11_float); // 0xaa NEW_2
	goto Label_180; // 0xac Jump
	
Label_180:
	return 2; // 0xb4 Return
	
Label_173:
	var_34_int = 0; // 0xad PushI
	var_35_int = 24; // 0xae PushI
	var_36_float = var_9_int * var_35_int; // 0xaf Mult
	SetTimeEvent(var_34_int, var_36_float); // 0xb0 Func
	Hold(); // 0xb2 Func
}


func_198(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string)
{
	var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0xc6 PushV
	GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector); // 0xc7 ObjFunc
	var_53_bool = var_49_bool == 0; // 0xc9 Not
	if(var_53_bool == 0) goto Label_211; // 0xca JumpB
	var_54_string = "Locator "; // 0xcb PushS
	var_55_int = var_54_string + var_42_string; // 0xcc Add
	var_56_string = " doesn't exist"; // 0xcd PushS
	var_57_int = var_55_int + var_56_string; // 0xce Add
	Trace(var_57_int); // 0xcf Func
	var_52_object = 0; // 0xd1 SetNull
	goto Label_213; // 0xd2 Jump
	
Label_213:
	var_40_object = var_52_object; // 0xd5 Mov
	return 8; // 0xd6 Return
	
Label_211:
	AddActorByType(var_52_object, var_43_string, var_41_object, var_50_cvector, var_51_cvector, var_44_string); // 0xd3 Func
}


func_281(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0; // 0x119 PushV
	var_90_object = Obj(); // 0x11a PushV
	func_268(var_90_object); // 0x11b NEW_2
	var_87_object = var_90_object; // 0x11c Mov
	Find(var_83_int, var_88_object); // 0x11e ObjFunc
	var_95_bool = var_88_object == 0; // 0x120 Not
	if(var_95_bool == 0) goto Label_296; // 0x121 JumpB
	var_96_string = "Can't find diary parent with id: "; // 0x122 PushS
	var_97_int = var_96_string + var_83_int; // 0x123 Add
	Trace(var_97_int); // 0x124 Func
	var_81_bool = 0; // 0x126 MovB
	return 6; // 0x127 Return
	
Label_296:
	AddChild(var_82_object); // 0x128 ObjFunc
	var_98_int = 7; // 0x12a PushI
	SendWorldWndMessage(var_98_int); // 0x12b Func
	GetCategory(var_89_int); // 0x12d ObjFunc
	SetDiarySection(var_89_int); // 0x12f Func
	var_81_bool = 0; // 0x131 MovB
	return 6; // 0x132 Return
}


func_137(var_3_object, var_11_float)
{
	EventDisable(26); // 0x89 EventDisable
	var_15_object = var_0_object; // 0x8a PushT
	if(var_15_object == 0) goto Label_142; // 0x8b JumpB
	Remove(); // 0x8c TObjFunc
	
Label_142:
	var_16_object = var_1_object; // 0x8e PushT
	if(var_16_object == 0) goto Label_147; // 0x8f JumpB
	var_17_string = "cleanup"; // 0x90 PushS
	Trigger(var_17_string, var_17_string); // 0x91 Func
	
Label_147:
	var_18_object = var_2_object; // 0x93 PushT
	if(var_18_object == 0) goto Label_152; // 0x94 JumpB
	var_19_string = "cleanup"; // 0x95 PushS
	Trigger(var_11_float, var_19_string); // 0x96 Func
	
Label_152:
	var_20_object = Obj(); // 0x98 PushV
	var_20_object = var_3_object; // 0x99 MovT
	func_234(var_20_object); // 0x9a NEW_2
	var_31_object = Obj(); // 0x9c PushV
	func_186(var_31_object); // 0x9d NEW_2
	RemoveActor(var_31_object); // 0x9f Func
	return 0; // 0xa1 Return
}


func_234(var_20_object)
{
	var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_int = 0; var_25_int = 0; var_26_object = Obj(); // 0xea PushV
	var_27_object = var_20_object; // 0xeb Push
	if(var_27_object == 0) goto Label_254; // 0xec JumpB
	size(var_24_int); // 0xed ObjFunc
	var_25_int = 0; // 0xef MovI
	
Label_240:
	var_28_bool = var_25_int < var_24_int; // 0xf0 LT
	if(var_28_bool == 0) goto Label_252; // 0xf1 JumpB
	get(var_26_object, var_25_int); // 0xf2 ObjFunc
	var_29_object = var_26_object; // 0xf4 Push
	if(var_29_object == 0) goto Label_248; // 0xf5 JumpB
	Remove(); // 0xf6 ObjFunc
	
Label_248:
	var_26_object = 0; // 0xf8 SetNull
	var_30_int = 1; // 0xf9 PushI
	var_25_int = var_25_int + var_30_int; // 0xfa Add2
	goto Label_240; // 0xfb Jump
	
Label_252:
	clear(); // 0xfc ObjFunc
	
Label_254:
	return 6; // 0xfe Return
}


func_268(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0x10c PushV
	GetDiaryRoot(var_92_object); // 0x10d Func
	var_93_bool = var_92_object == 0; // 0x10f Not
	if(var_93_bool == 0) goto Label_278; // 0x110 JumpB
	var_94_string = "Can't retrieve diary root"; // 0x111 PushS
	Trace(var_94_string); // 0x112 Func
	var_90_object = 0; // 0x114 MovB
	return 2; // 0x115 Return
	
Label_278:
	var_90_object = var_92_object; // 0x116 Mov
	return 2; // 0x117 Return
}


func_110()
{
	var_6_int = 0; var_7_int = 0; // 0x6e PushV
	var_8_string = "b4q02"; // 0x6f PushS
	GetVariable(var_8_string, var_7_int); // 0x70 Func
	var_9_int = 1000; // 0x72 PushI
	var_10_bool = var_7_int != var_9_int; // 0x73 Neq
	if(var_10_bool == 0) goto Label_120; // 0x74 JumpB
	func_121(); // 0x76 NEW_2
	
Label_120:
	return 2; // 0x78 Return
}


func_216(var_21_object, var_23_string, var_24_string, var_25_string)
{
	var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); // 0xd8 PushV
	GetLocator(var_23_string, var_30_bool, var_31_cvector, var_32_cvector); // 0xd9 ObjFunc
	var_34_bool = var_30_bool == 0; // 0xdb Not
	if(var_34_bool == 0) goto Label_229; // 0xdc JumpB
	var_35_string = "Locator "; // 0xdd PushS
	var_36_int = var_35_string + var_23_string; // 0xde Add
	var_37_string = " doesn't exist"; // 0xdf PushS
	var_38_int = var_36_int + var_37_string; // 0xe0 Add
	Trace(var_38_int); // 0xe1 Func
	var_33_object = 0; // 0xe3 SetNull
	goto Label_231; // 0xe4 Jump
	
Label_231:
	var_21_object = var_33_object; // 0xe7 Mov
	return 8; // 0xe8 Return
	
Label_229:
	AddStationaryActor(var_33_object, var_31_cvector, var_32_cvector, var_24_string, var_25_string); // 0xe5 ObjFunc
}


func_121()
{
	var_11_string = "b4q02"; // 0x79 PushS
	var_12_int = -1; // 0x7a PushI
	SetVariable(var_11_string, var_12_int); // 0x7b Func
	func_137(var_6_int, var_7_int); // 0x7e NEW_2
	return 0; // 0x80 Return
}


func_186(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0xba PushV
	self(var_33_object); // 0xbb Func
	var_31_object = var_33_object; // 0xbd Mov
	return 2; // 0xbe Return
}


func_255()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0xff PushV
	var_78_int = 215; // 0x100 PushI
	var_79_int = 2; // 0x101 PushI
	var_80_int = 518578; // 0x102 PushI
	CreateDiaryEntry(var_77_object, var_78_int, var_79_int, var_80_int); // 0x103 Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0x105 PushV
	var_82_object = var_77_object; // 0x106 Mov
	var_83_int = 213; // 0x107 MovI
	func_281(var_81_bool, var_82_object, var_83_int); // 0x108 NEW_2
	return 2; // 0x10a Return
}


