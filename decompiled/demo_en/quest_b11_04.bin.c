task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_object = Obj(); var_12_int = 0; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); // 0x9 PushV
	Trace(var_4_string); // 0xa Func
	var_17_string = "place_sanitar"; // 0xc PushS
	var_18_bool = var_4_string == var_17_string; // 0xd Eq
	if(var_18_bool == 0) goto Label_56; // 0xe JumpB
	GetMainOutdoorScene(var_11_object); // 0xf Func
	var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = ""; // 0x11 PushV
	var_20_object = var_11_object; // 0x12 Mov
	var_21_string = "pt_b11q04_sanitar"; // 0x13 MovS
	var_22_string = "pers_sanitar"; // 0x14 MovS
	var_23_string = "b11q04_sanitar_main.xml"; // 0x15 MovS
	func_192(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string); // 0x16 NEW_2
	var_1_object = var_19_object; // 0x17 TMov
	var_12_int = 1; // 0x19 MovI
	
Label_26:
	var_37_string = "pt_b11q04_sanitar"; // 0x1a PushS
	var_38_int = var_37_string + var_12_int; // 0x1b Add
	GetLocator(var_38_int, var_13_bool, var_14_cvector, var_15_cvector); // 0x1c ObjFunc
	var_39_bool = var_13_bool == 0; // 0x1e Not
	if(var_39_bool == 0) goto Label_33; // 0x1f JumpB
	goto Label_46; // 0x20 Jump
	
Label_46:
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = ""; // 0x2e PushV
	var_41_object = var_11_object; // 0x2f Mov
	var_42_string = "pt_b11q04_corpse"; // 0x30 MovS
	var_43_string = "scripted"; // 0x31 MovS
	var_44_string = "b11q04_corpse.xml"; // 0x32 MovS
	func_210(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string); // 0x33 NEW_2
	var_3_object = var_40_object; // 0x34 TMov
	var_11_object = 0; // 0x36 SetNull
	goto Label_90; // 0x37 Jump
	
Label_90:
	return 12; // 0x5a Return
	
Label_33:
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = ""; // 0x21 PushV
	var_59_object = var_11_object; // 0x22 Mov
	var_63_string = "pt_b11q04_sanitar"; // 0x23 PushS
	var_60_string = var_63_string + var_12_int; // 0x24 Add2
	var_61_string = "pers_sanitar"; // 0x25 MovS
	var_62_string = "b11q04_sanitar.xml"; // 0x26 MovS
	func_228(var_59_object, var_60_string, var_61_string, var_62_string); // 0x27 NEW_2
	add(var_58_object); // 0x29 TObjFunc
	var_77_int = 1; // 0x2b PushI
	var_12_int = var_12_int + var_77_int; // 0x2c Add2
	goto Label_26; // 0x2d Jump
	
Label_56:
	var_78_string = "place_officer"; // 0x38 PushS
	var_79_bool = var_4_string == var_78_string; // 0x39 Eq
	if(var_79_bool == 0) goto Label_77; // 0x3a JumpB
	var_80_string = "vagon_army"; // 0x3b PushS
	GetSceneByName(var_16_object, var_80_string); // 0x3c Func
	var_81_string = ""; var_82_bool = 0; // 0x3e PushV
	var_81_string = "vagon_army@door1"; // 0x3f MovS
	var_82_bool = 0; // 0x40 MovB
	func_246(var_81_string, var_82_bool); // 0x41 NEW_2
	var_91_object = Obj(); var_92_object = Obj(); var_93_string = ""; var_94_string = ""; var_95_string = ""; // 0x43 PushV
	var_92_object = var_16_object; // 0x44 Mov
	var_93_string = "pt_b11q04_officer"; // 0x45 MovS
	var_94_string = "pers_soldat"; // 0x46 MovS
	var_95_string = "b11q04_officer.xml"; // 0x47 MovS
	func_192(var_91_object, var_92_object, var_93_string, var_94_string, var_95_string); // 0x48 NEW_2
	var_2_object = var_91_object; // 0x49 TMov
	var_16_object = 0; // 0x4b SetNull
	goto Label_90; // 0x4c Jump
	
Label_77:
	var_96_string = "fail"; // 0x4d PushS
	var_97_bool = var_4_string == var_96_string; // 0x4e Eq
	if(var_97_bool == 0) goto Label_84; // 0x4f JumpB
	func_105(); // 0x51 NEW_2
	goto Label_90; // 0x53 Jump
	
Label_84:
	var_104_string = "completed"; // 0x54 PushS
	var_105_bool = var_4_string == var_104_string; // 0x55 Eq
	if(var_105_bool == 0) goto Label_90; // 0x56 JumpB
	func_113(); // 0x58 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_91(); // 0xb1 NEW_2
	return 0; // 0xb3 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj(); // 0x0 PushV
	func_186(var_4_object); // 0x1 NEW_2
	var_0_object = var_4_object; // 0x2 TMov
	var_7_int = 0; // 0x4 PushV
	var_7_int = 11; // 0x5 MovI
	func_156(var_7_int); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_192(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
{
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); // 0xc0 PushV
	GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector); // 0xc1 ObjFunc
	var_32_bool = var_28_bool == 0; // 0xc3 Not
	if(var_32_bool == 0) goto Label_205; // 0xc4 JumpB
	var_33_string = "Locator "; // 0xc5 PushS
	var_34_int = var_33_string + var_21_string; // 0xc6 Add
	var_35_string = " doesn't exist"; // 0xc7 PushS
	var_36_int = var_34_int + var_35_string; // 0xc8 Add
	Trace(var_36_int); // 0xc9 Func
	var_31_object = 0; // 0xcb SetNull
	goto Label_207; // 0xcc Jump
	
Label_207:
	var_19_object = var_31_object; // 0xcf Mov
	return 8; // 0xd0 Return
	
Label_205:
	AddActor(var_31_object, var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string); // 0xcd Func
}


func_132(var_0_object, var_8_float)
{
	EventDisable(26); // 0x84 EventDisable
	func_121(var_9_float); // 0x86 NEW_2
	var_17_object = Obj(); // 0x88 PushV
	var_17_object = var_0_object; // 0x89 MovT
	func_263(var_17_object); // 0x8a NEW_2
	var_28_string = ""; var_29_bool = 0; // 0x8c PushV
	var_28_string = "vagon_army@door1"; // 0x8d MovS
	var_29_bool = 1; // 0x8e MovB
	func_246(var_28_string, var_29_bool); // 0x8f NEW_2
	var_38_object = var_3_object; // 0x91 PushT
	if(var_38_object == 0) goto Label_150; // 0x92 JumpB
	var_39_string = "cleanup"; // 0x93 PushS
	Trigger(var_8_float, var_39_string); // 0x94 Func
	
Label_150:
	var_40_object = Obj(); // 0x96 PushV
	func_180(var_40_object); // 0x97 NEW_2
	RemoveActor(var_40_object); // 0x99 Func
	return 0; // 0x9b Return
}


func_228(var_58_object, var_60_string, var_61_string, var_62_string)
{
	var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_object = Obj(); // 0xe4 PushV
	GetLocator(var_60_string, var_68_bool, var_69_cvector, var_70_cvector); // 0xe5 ObjFunc
	var_72_bool = var_68_bool == 0; // 0xe7 Not
	if(var_72_bool == 0) goto Label_241; // 0xe8 JumpB
	var_73_string = "Locator "; // 0xe9 PushS
	var_74_int = var_73_string + var_60_string; // 0xea Add
	var_75_string = " doesn't exist"; // 0xeb PushS
	var_76_int = var_74_int + var_75_string; // 0xec Add
	Trace(var_76_int); // 0xed Func
	var_71_object = 0; // 0xef SetNull
	goto Label_243; // 0xf0 Jump
	
Label_243:
	var_58_object = var_71_object; // 0xf3 Mov
	return 8; // 0xf4 Return
	
Label_241:
	AddStationaryActor(var_71_object, var_69_cvector, var_70_cvector, var_61_string, var_62_string); // 0xf1 ObjFunc
}


func_263(var_17_object)
{
	var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_int = 0; var_22_int = 0; var_23_object = Obj(); // 0x107 PushV
	var_24_object = var_17_object; // 0x108 Push
	if(var_24_object == 0) goto Label_283; // 0x109 JumpB
	size(var_21_int); // 0x10a ObjFunc
	var_22_int = 0; // 0x10c MovI
	
Label_269:
	var_25_bool = var_22_int < var_21_int; // 0x10d LT
	if(var_25_bool == 0) goto Label_281; // 0x10e JumpB
	get(var_23_object, var_22_int); // 0x10f ObjFunc
	var_26_object = var_23_object; // 0x111 Push
	if(var_26_object == 0) goto Label_277; // 0x112 JumpB
	Remove(); // 0x113 ObjFunc
	
Label_277:
	var_23_object = 0; // 0x115 SetNull
	var_27_int = 1; // 0x116 PushI
	var_22_int = var_22_int + var_27_int; // 0x117 Add2
	goto Label_269; // 0x118 Jump
	
Label_281:
	clear(); // 0x119 ObjFunc
	
Label_283:
	return 6; // 0x11b Return
}


func_105()
{
	var_11_string = "b11q04"; // 0x69 PushS
	var_12_int = -1; // 0x6a PushI
	SetVariable(var_11_string, var_12_int); // 0x6b Func
	func_121(var_7_int); // 0x6e NEW_2
	return 0; // 0x70 Return
}


func_113()
{
	var_106_string = "b11q04"; // 0x71 PushS
	var_107_int = 1000; // 0x72 PushI
	SetVariable(var_106_string, var_107_int); // 0x73 Func
	func_121(var_16_object); // 0x76 NEW_2
	return 0; // 0x78 Return
}


func_210(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string)
{
	var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0xd2 PushV
	GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector); // 0xd3 ObjFunc
	var_53_bool = var_49_bool == 0; // 0xd5 Not
	if(var_53_bool == 0) goto Label_223; // 0xd6 JumpB
	var_54_string = "Locator "; // 0xd7 PushS
	var_55_int = var_54_string + var_42_string; // 0xd8 Add
	var_56_string = " doesn't exist"; // 0xd9 PushS
	var_57_int = var_55_int + var_56_string; // 0xda Add
	Trace(var_57_int); // 0xdb Func
	var_52_object = 0; // 0xdd SetNull
	goto Label_225; // 0xde Jump
	
Label_225:
	var_40_object = var_52_object; // 0xe1 Mov
	return 8; // 0xe2 Return
	
Label_223:
	AddActorByType(var_52_object, var_43_string, var_41_object, var_50_cvector, var_51_cvector, var_44_string); // 0xdf Func
}


func_180(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xb4 PushV
	self(var_42_object); // 0xb5 Func
	var_40_object = var_42_object; // 0xb7 Mov
	return 2; // 0xb8 Return
}


func_246(var_28_string, var_29_bool)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0xf6 PushV
	FindActor(var_31_object, var_28_string); // 0xf7 Func
	var_32_bool = var_31_object == 0; // 0xf9 Not
	if(var_32_bool == 0) goto Label_258; // 0xfa JumpB
	var_33_string = "Door "; // 0xfb PushS
	var_34_int = var_33_string + var_28_string; // 0xfc Add
	var_35_string = " not found"; // 0xfd PushS
	var_36_int = var_34_int + var_35_string; // 0xfe Add
	Trace(var_36_int); // 0xff Func
	goto Label_261; // 0x101 Jump
	
Label_261:
	return 2; // 0x105 Return
	
Label_258:
	var_37_string = "locked"; // 0x102 PushS
	SetProperty(var_37_string, var_29_bool); // 0x103 ObjFunc
}


func_121(var_9_float)
{
	var_13_object = var_1_object; // 0x79 PushT
	if(var_13_object == 0) goto Label_126; // 0x7a JumpB
	var_14_string = "cleanup"; // 0x7b PushS
	Trigger(var_14_string, var_14_string); // 0x7c Func
	
Label_126:
	var_15_object = var_2_object; // 0x7e PushT
	if(var_15_object == 0) goto Label_131; // 0x7f JumpB
	var_16_string = "cleanup"; // 0x80 PushS
	Trigger(var_9_float, var_16_string); // 0x81 Func
	
Label_131:
	return 0; // 0x83 Return
}


func_186(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0xba PushV
	CreateObjectVector(var_6_object); // 0xbb Func
	var_4_object = var_6_object; // 0xbd Mov
	return 2; // 0xbe Return
}


func_91()
{
	var_6_int = 0; var_7_int = 0; // 0x5b PushV
	var_8_string = "b11q04"; // 0x5c PushS
	GetVariable(var_8_string, var_7_int); // 0x5d Func
	var_9_int = 1000; // 0x5f PushI
	var_10_bool = var_7_int != var_9_int; // 0x60 Neq
	if(var_10_bool == 0) goto Label_101; // 0x61 JumpB
	func_105(); // 0x63 NEW_2
	
Label_101:
	func_132(var_6_int, var_7_int); // 0x66 NEW_2
	return 2; // 0x68 Return
}


func_156(var_7_int)
{
	var_8_float = 0; var_9_float = 0; // 0x9c PushV
	GetGameTime(var_9_float); // 0x9d Func
	var_10_int = 24; // 0x9f PushI
	var_11_float = var_7_int * var_10_int; // 0xa0 Mult
	var_12_bool = var_9_float >= var_11_float; // 0xa1 GE
	if(var_12_bool == 0) goto Label_167; // 0xa2 JumpB
	func_132(var_8_float, var_9_float); // 0xa4 NEW_2
	goto Label_174; // 0xa6 Jump
	
Label_174:
	return 2; // 0xae Return
	
Label_167:
	var_43_int = 0; // 0xa7 PushI
	var_44_int = 24; // 0xa8 PushI
	var_45_float = var_7_int * var_44_int; // 0xa9 Mult
	SetTimeEvent(var_43_int, var_45_float); // 0xaa Func
	Hold(); // 0xac Func
}


