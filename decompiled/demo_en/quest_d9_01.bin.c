task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_bool = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_bool = 0; var_12_object = Obj(); var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_int = 0; // 0x25 PushV
	Trace(var_1_string); // 0x26 Func
	var_30_string = "teleport_to_han"; // 0x28 PushS
	var_31_bool = var_1_string == var_30_string; // 0x29 Eq
	if(var_31_bool == 0) goto Label_59; // 0x2a JumpB
	var_32_string = "player"; // 0x2b PushS
	FindActor(var_16_object, var_32_string); // 0x2c Func
	var_33_object = var_16_object; // 0x2e Push
	if(var_33_object == 0) goto Label_57; // 0x2f JumpB
	var_34_string = "mnogogrannik_han"; // 0x30 PushS
	GetSceneByName(var_17_object, var_34_string); // 0x31 Func
	var_35_string = "pt_d9q01_teleport"; // 0x33 PushS
	GetLocator(var_35_string, var_20_bool, var_18_cvector, var_19_cvector); // 0x34 ObjFunc
	Teleport(var_16_object, var_17_object, var_18_cvector, var_19_cvector); // 0x36 Func
	var_17_object = 0; // 0x38 SetNull
	
Label_57:
	var_16_object = 0; // 0x39 SetNull
	goto Label_139; // 0x3a Jump
	
Label_139:
	return 28; // 0x8b Return
	
Label_59:
	var_36_string = "teleport_to_mnogogrannik"; // 0x3b PushS
	var_37_bool = var_1_string == var_36_string; // 0x3c Eq
	if(var_37_bool == 0) goto Label_78; // 0x3d JumpB
	var_38_string = "player"; // 0x3e PushS
	FindActor(var_21_object, var_38_string); // 0x3f Func
	var_39_object = var_21_object; // 0x41 Push
	if(var_39_object == 0) goto Label_76; // 0x42 JumpB
	var_40_string = "mnogogrannik"; // 0x43 PushS
	GetSceneByName(var_22_object, var_40_string); // 0x44 Func
	var_41_string = "pt_d9q01_teleport"; // 0x46 PushS
	GetLocator(var_41_string, var_25_bool, var_23_cvector, var_24_cvector); // 0x47 ObjFunc
	Teleport(var_21_object, var_22_object, var_23_cvector, var_24_cvector); // 0x49 Func
	var_22_object = 0; // 0x4b SetNull
	
Label_76:
	var_21_object = 0; // 0x4c SetNull
	goto Label_139; // 0x4d Jump
	
Label_78:
	var_42_string = "place_rifles"; // 0x4e PushS
	var_43_bool = var_1_string == var_42_string; // 0x4f Eq
	if(var_43_bool == 0) goto Label_100; // 0x50 JumpB
	GetMainOutdoorScene(var_26_object); // 0x51 Func
	var_27_int = 1; // 0x53 MovI
	
Label_84:
	var_44_int = 5; // 0x54 PushI
	var_45_bool = var_27_int <= var_44_int; // 0x55 LE
	if(var_45_bool == 0) goto Label_98; // 0x56 JumpB
	var_46_string = "d9q01_rifle"; // 0x57 PushS
	var_47_int = var_46_string + var_27_int; // 0x58 Add
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0x59 PushVec
	var_49_cvector = CVector(0.0, 0.0, 1.0); // 0x5a PushVec
	var_50_string = "d9q01_rifle.xml"; // 0x5b PushS
	AddActor(var_28_object, var_47_int, var_26_object, var_48_cvector, var_49_cvector, var_50_string); // 0x5c Func
	var_28_object = 0; // 0x5e SetNull
	var_51_int = 1; // 0x5f PushI
	var_27_int = var_27_int + var_51_int; // 0x60 Add2
	goto Label_84; // 0x61 Jump
	
Label_98:
	var_26_object = 0; // 0x62 SetNull
	goto Label_139; // 0x63 Jump
	
Label_100:
	var_52_string = "unlock_polyh"; // 0x64 PushS
	var_53_bool = var_1_string == var_52_string; // 0x65 Eq
	if(var_53_bool == 0) goto Label_109; // 0x66 JumpB
	var_54_string = ""; var_55_bool = 0; // 0x67 PushV
	var_54_string = "polyh@door1"; // 0x68 MovS
	var_55_bool = 0; // 0x69 MovB
	func_196(var_54_string, var_55_bool); // 0x6a NEW_2
	goto Label_139; // 0x6c Jump
	
Label_109:
	var_64_string = "cleanup"; // 0x6d PushS
	var_65_bool = var_1_string == var_64_string; // 0x6e Eq
	if(var_65_bool == 0) goto Label_126; // 0x6f JumpB
	var_66_string = "d9q01"; // 0x70 PushS
	GetVariable(var_66_string, var_29_int); // 0x71 Func
	var_67_int = 1000; // 0x73 PushI
	var_68_bool = var_29_int != var_67_int; // 0x74 Neq
	if(var_68_bool == 0) goto Label_122; // 0x75 JumpB
	func_140(); // 0x77 NEW_2
	goto Label_125; // 0x79 Jump
	
Label_125:
	goto Label_139; // 0x7d Jump
	
Label_122:
	func_156(var_29_int); // 0x7b NEW_2
	
Label_126:
	var_87_string = "fail"; // 0x7e PushS
	var_88_bool = var_1_string == var_87_string; // 0x7f Eq
	if(var_88_bool == 0) goto Label_133; // 0x80 JumpB
	func_140(); // 0x82 NEW_2
	goto Label_139; // 0x84 Jump
	
Label_133:
	var_89_string = "completed"; // 0x85 PushS
	var_90_bool = var_1_string == var_89_string; // 0x86 Eq
	if(var_90_bool == 0) goto Label_139; // 0x87 JumpB
	func_148(); // 0x89 NEW_2
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	CreateObjectVector(var_0_object); // 0x1 Func
	GetMainOutdoorScene(var_2_object); // 0x3 Func
	var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_string = ""; // 0x5 PushV
	var_4_object = var_2_object; // 0x6 Mov
	var_5_string = "pt_d9q01_doberman1"; // 0x7 MovS
	var_6_string = "pers_doberman"; // 0x8 MovS
	var_7_string = "d9q01_doberman.xml"; // 0x9 MovS
	func_178(var_4_object, var_5_string, var_6_string, var_7_string); // 0xa NEW_2
	add(var_3_object); // 0xc TObjFunc
	var_21_object = Obj(); var_22_object = Obj(); var_23_string = ""; var_24_string = ""; var_25_string = ""; // 0xe PushV
	var_22_object = var_2_object; // 0xf Mov
	var_23_string = "pt_d9q01_doberman2"; // 0x10 MovS
	var_24_string = "pers_doberman"; // 0x11 MovS
	var_25_string = "d9q01_doberman.xml"; // 0x12 MovS
	func_178(var_22_object, var_23_string, var_24_string, var_25_string); // 0x13 NEW_2
	add(var_21_object); // 0x15 TObjFunc
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = ""; // 0x17 PushV
	var_27_object = var_2_object; // 0x18 Mov
	var_28_string = "pt_d9q01_doberman3"; // 0x19 MovS
	var_29_string = "pers_doberman"; // 0x1a MovS
	var_30_string = "d9q01_doberman.xml"; // 0x1b MovS
	func_178(var_27_object, var_28_string, var_29_string, var_30_string); // 0x1c NEW_2
	add(var_26_object); // 0x1e TObjFunc
	
Label_32:
	Hold(); // 0x20 Func
	goto Label_32; // 0x22 Jump
}


func_196(var_54_string, var_55_bool)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0xc4 PushV
	FindActor(var_57_object, var_54_string); // 0xc5 Func
	var_58_bool = var_57_object == 0; // 0xc7 Not
	if(var_58_bool == 0) goto Label_208; // 0xc8 JumpB
	var_59_string = "Door "; // 0xc9 PushS
	var_60_int = var_59_string + var_54_string; // 0xca Add
	var_61_string = " not found"; // 0xcb PushS
	var_62_int = var_60_int + var_61_string; // 0xcc Add
	Trace(var_62_int); // 0xcd Func
	goto Label_211; // 0xcf Jump
	
Label_211:
	return 2; // 0xd3 Return
	
Label_208:
	var_63_string = "locked"; // 0xd0 PushS
	SetProperty(var_63_string, var_55_bool); // 0xd1 ObjFunc
}


func_140()
{
	var_69_string = "d9q01"; // 0x8c PushS
	var_70_int = -1; // 0x8d PushI
	SetVariable(var_69_string, var_70_int); // 0x8e Func
	func_156(var_29_int); // 0x91 NEW_2
	return 0; // 0x93 Return
}


func_172(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0xac PushV
	self(var_86_object); // 0xad Func
	var_84_object = var_86_object; // 0xaf Mov
	return 2; // 0xb0 Return
}


func_178(var_3_object, var_5_string, var_6_string, var_7_string)
{
	var_8_bool = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); // 0xb2 PushV
	GetLocator(var_5_string, var_12_bool, var_13_cvector, var_14_cvector); // 0xb3 ObjFunc
	var_16_bool = var_12_bool == 0; // 0xb5 Not
	if(var_16_bool == 0) goto Label_191; // 0xb6 JumpB
	var_17_string = "Locator "; // 0xb7 PushS
	var_18_int = var_17_string + var_5_string; // 0xb8 Add
	var_19_string = " doesn't exist"; // 0xb9 PushS
	var_20_int = var_18_int + var_19_string; // 0xba Add
	Trace(var_20_int); // 0xbb Func
	var_15_object = 0; // 0xbd SetNull
	goto Label_193; // 0xbe Jump
	
Label_193:
	var_3_object = var_15_object; // 0xc1 Mov
	return 8; // 0xc2 Return
	
Label_191:
	AddStationaryActor(var_15_object, var_13_cvector, var_14_cvector, var_6_string, var_7_string); // 0xbf ObjFunc
}


func_148()
{
	var_91_string = "d9q01"; // 0x94 PushS
	var_92_int = 1000; // 0x95 PushI
	SetVariable(var_91_string, var_92_int); // 0x96 Func
	func_156(var_29_int); // 0x99 NEW_2
	return 0; // 0x9b Return
}


func_213(var_73_object)
{
	var_74_int = 0; var_75_int = 0; var_76_object = Obj(); var_77_int = 0; var_78_int = 0; var_79_object = Obj(); // 0xd5 PushV
	var_80_object = var_73_object; // 0xd6 Push
	if(var_80_object == 0) goto Label_233; // 0xd7 JumpB
	size(var_77_int); // 0xd8 ObjFunc
	var_78_int = 0; // 0xda MovI
	
Label_219:
	var_81_bool = var_78_int < var_77_int; // 0xdb LT
	if(var_81_bool == 0) goto Label_231; // 0xdc JumpB
	get(var_79_object, var_78_int); // 0xdd ObjFunc
	var_82_object = var_79_object; // 0xdf Push
	if(var_82_object == 0) goto Label_227; // 0xe0 JumpB
	Remove(); // 0xe1 ObjFunc
	
Label_227:
	var_79_object = 0; // 0xe3 SetNull
	var_83_int = 1; // 0xe4 PushI
	var_78_int = var_78_int + var_83_int; // 0xe5 Add2
	goto Label_219; // 0xe6 Jump
	
Label_231:
	clear(); // 0xe7 ObjFunc
	
Label_233:
	return 6; // 0xe9 Return
}


func_156(var_0_object)
{
	EventDisable(26); // 0x9c EventDisable
	var_71_string = ""; var_72_bool = 0; // 0x9d PushV
	var_71_string = "polyh@door1"; // 0x9e MovS
	var_72_bool = 1; // 0x9f MovB
	func_196(var_71_string, var_72_bool); // 0xa0 NEW_2
	var_73_object = Obj(); // 0xa2 PushV
	var_73_object = var_0_object; // 0xa3 MovT
	func_213(var_73_object); // 0xa4 NEW_2
	var_84_object = Obj(); // 0xa6 PushV
	func_172(var_84_object); // 0xa7 NEW_2
	RemoveActor(var_84_object); // 0xa9 Func
	return 0; // 0xab Return
}


