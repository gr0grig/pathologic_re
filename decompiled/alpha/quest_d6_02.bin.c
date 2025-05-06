task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); // 0x9 PushV
	Trace(var_1_string); // 0xa Func
	var_6_string = "completed"; // 0xc PushS
	var_7_bool = var_1_string == var_6_string; // 0xd Eq
	if(var_7_bool == 0) goto Label_19; // 0xe JumpB
	func_117(); // 0x10 Call
	goto Label_97; // 0x12 Jump
	
Label_97:
	return 4; // 0x61 Return
	
Label_19:
	var_22_string = "fail"; // 0x13 PushS
	var_23_bool = var_1_string == var_22_string; // 0x14 Eq
	if(var_23_bool == 0) goto Label_26; // 0x15 JumpB
	func_109(); // 0x17 Call
	goto Label_97; // 0x19 Jump
	
Label_26:
	var_26_string = "place_trigger"; // 0x1a PushS
	var_27_bool = var_1_string == var_26_string; // 0x1b Eq
	if(var_27_bool == 0) goto Label_39; // 0x1c JumpB
	GetMainOutdoorScene(var_4_object); // 0x1d Func
	var_28_string = "d6q02_trigger_bombers"; // 0x1f PushS
	var_29_cvector = CVector(0.0, 0.0, 0.0); // 0x20 PushVec
	var_30_cvector = CVector(0.0, 0.0, 1.0); // 0x21 PushVec
	var_31_string = "d6q02_trigger.xml"; // 0x22 PushS
	AddActor(var_0_object, var_28_string, var_4_object, var_29_cvector, var_30_cvector, var_31_string); // 0x23 Func
	var_4_object = 0; // 0x25 SetNull
	goto Label_97; // 0x26 Jump
	
Label_39:
	var_32_string = "d6q02_trigger_bombers"; // 0x27 PushS
	var_33_bool = var_1_string == var_32_string; // 0x28 Eq
	if(var_33_bool == 0) goto Label_87; // 0x29 JumpB
	var_34_string = "d6q02Trigger"; // 0x2a PushS
	var_35_int = 1; // 0x2b PushI
	SetVariable(var_34_string, var_35_int); // 0x2c Func
	RemoveActor(var_0_object); // 0x2e Func
	GetMainOutdoorScene(var_5_object); // 0x30 Func
	var_36_object = Obj(); var_37_object = Obj(); var_38_string = ""; var_39_string = ""; var_40_string = ""; // 0x32 PushV
	var_37_object = var_5_object; // 0x33 Mov
	var_38_string = "pt_d6q02_bomber1"; // 0x34 MovS
	var_39_string = "pers_bomber"; // 0x35 MovS
	var_40_string = "d6q02_bomber.xml"; // 0x36 MovS
	func_180(var_36_object, var_37_object, var_38_string, var_39_string, var_40_string); // 0x37 Call
	var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = ""; // 0x39 PushV
	var_55_object = var_5_object; // 0x3a Mov
	var_56_string = "pt_d6q02_bomber2"; // 0x3b MovS
	var_57_string = "pers_bomber"; // 0x3c MovS
	var_58_string = "d6q02_bomber.xml"; // 0x3d MovS
	func_180(var_54_object, var_55_object, var_56_string, var_57_string, var_58_string); // 0x3e Call
	var_59_object = Obj(); var_60_object = Obj(); var_61_string = ""; var_62_string = ""; var_63_string = ""; // 0x40 PushV
	var_60_object = var_5_object; // 0x41 Mov
	var_61_string = "pt_d6q02_bomber3"; // 0x42 MovS
	var_62_string = "pers_bomber"; // 0x43 MovS
	var_63_string = "d6q02_bomber.xml"; // 0x44 MovS
	func_180(var_59_object, var_60_object, var_61_string, var_62_string, var_63_string); // 0x45 Call
	var_64_object = Obj(); var_65_object = Obj(); var_66_string = ""; var_67_string = ""; var_68_string = ""; // 0x47 PushV
	var_65_object = var_5_object; // 0x48 Mov
	var_66_string = "pt_d6q02_bomber4"; // 0x49 MovS
	var_67_string = "pers_bomber"; // 0x4a MovS
	var_68_string = "d6q02_bomber.xml"; // 0x4b MovS
	func_180(var_64_object, var_65_object, var_66_string, var_67_string, var_68_string); // 0x4c Call
	var_69_object = Obj(); var_70_object = Obj(); var_71_string = ""; var_72_string = ""; var_73_string = ""; // 0x4e PushV
	var_70_object = var_5_object; // 0x4f Mov
	var_71_string = "pt_d6q02_gorbun"; // 0x50 MovS
	var_72_string = "pers_bomber"; // 0x51 MovS
	var_73_string = "d6q02_gorbun.xml"; // 0x52 MovS
	func_180(var_69_object, var_70_object, var_71_string, var_72_string, var_73_string); // 0x53 Call
	var_5_object = 0; // 0x55 SetNull
	goto Label_97; // 0x56 Jump
	
Label_87:
	var_74_string = "gorbun_death"; // 0x57 PushS
	var_75_bool = var_1_string == var_74_string; // 0x58 Eq
	if(var_75_bool == 0) goto Label_97; // 0x59 JumpB
	func_240(); // 0x5b Call
	var_101_string = "d6q02GorbunDeath"; // 0x5d PushS
	var_102_int = 1; // 0x5e PushI
	SetVariable(var_101_string, var_102_int); // 0x5f Func
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_98(); // 0xab Call
	return 0; // 0xad Return
}


main(var_0_object)
{
	var_1_string = "d6q02"; // 0x0 PushS
	var_2_int = 1; // 0x1 PushI
	SetVariable(var_1_string, var_2_int); // 0x2 Func
	var_3_int = 0; // 0x4 PushV
	var_3_int = 6; // 0x5 MovI
	func_150(var_3_int); // 0x6 Call
	return 0; // 0x8 Return
}


func_98()
{
	var_3_int = 0; var_4_int = 0; // 0x62 PushV
	var_5_string = "d6q02"; // 0x63 PushS
	GetVariable(var_5_string, var_4_int); // 0x64 Func
	var_6_int = 1000; // 0x66 PushI
	var_7_bool = var_4_int != var_6_int; // 0x67 Neq
	if(var_7_bool == 0) goto Label_108; // 0x68 JumpB
	func_109(); // 0x6a Call
	
Label_108:
	return 2; // 0x6c Return
}


func_198(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj(); // 0xc6 PushV
	GetDiaryRoot(var_93_object); // 0xc7 Func
	var_94_bool = var_93_object == 0; // 0xc9 Not
	if(var_94_bool == 0) goto Label_208; // 0xca JumpB
	var_95_string = "Can't retrieve diary root"; // 0xcb PushS
	Trace(var_95_string); // 0xcc Func
	var_91_object = 0; // 0xce MovB
	return 2; // 0xcf Return
	
Label_208:
	var_91_object = var_93_object; // 0xd0 Mov
	return 2; // 0xd1 Return
}


func_139(var_0_object)
{
	EventDisable(26); // 0x8b EventDisable
	var_9_object = var_0_object; // 0x8c PushT
	if(var_9_object == 0) goto Label_144; // 0x8d JumpB
	RemoveActor(var_0_object); // 0x8e Func
	
Label_144:
	var_10_object = Obj(); // 0x90 PushV
	func_174(var_10_object); // 0x91 Call
	RemoveActor(var_10_object); // 0x93 Func
	return 0; // 0x95 Return
}


func_109()
{
	var_8_string = "d6q02"; // 0x6d PushS
	var_9_int = -1; // 0x6e PushI
	SetVariable(var_8_string, var_9_int); // 0x6f Func
	func_139(var_4_int); // 0x72 Call
	return 0; // 0x74 Return
}


func_174(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0xae PushV
	self(var_12_object); // 0xaf Func
	var_10_object = var_12_object; // 0xb1 Mov
	return 2; // 0xb2 Return
}


func_240()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0xf0 PushV
	var_78_string = "Adding diary entry"; // 0xf1 PushS
	Trace(var_78_string); // 0xf2 Func
	var_79_int = 103; // 0xf4 PushI
	var_80_int = 2; // 0xf5 PushI
	var_81_int = 13726; // 0xf6 PushI
	CreateDiaryEntry(var_77_object, var_79_int, var_80_int, var_81_int); // 0xf7 Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0xf9 PushV
	var_83_object = var_77_object; // 0xfa Mov
	var_84_int = 102; // 0xfb MovI
	func_211(var_82_bool, var_83_object, var_84_int); // 0xfc Call
	return 2; // 0xfe Return
}


func_211(var_82_bool, var_83_object, var_84_int)
{
	var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0; var_88_object = Obj(); var_89_object = Obj(); var_90_int = 0; // 0xd3 PushV
	var_91_object = Obj(); // 0xd4 PushV
	func_198(var_91_object); // 0xd5 Call
	var_88_object = var_91_object; // 0xd6 Mov
	Find(var_84_int, var_89_object); // 0xd8 ObjFunc
	var_96_bool = var_89_object == 0; // 0xda Not
	if(var_96_bool == 0) goto Label_226; // 0xdb JumpB
	var_97_string = "Can't find diary parent with id: "; // 0xdc PushS
	var_98_int = var_97_string + var_84_int; // 0xdd Add
	Trace(var_98_int); // 0xde Func
	var_82_bool = 0; // 0xe0 MovB
	return 6; // 0xe1 Return
	
Label_226:
	AddChild(var_83_object); // 0xe2 ObjFunc
	var_99_string = "player_diary"; // 0xe4 PushS
	var_100_int = 1; // 0xe5 PushI
	SetVariable(var_99_string, var_100_int); // 0xe6 Func
	GetCategory(var_90_int); // 0xe8 ObjFunc
	SetDiarySection(var_90_int); // 0xea Func
	var_82_bool = 0; // 0xec MovB
	return 6; // 0xed Return
}


func_180(var_36_object, var_37_object, var_38_string, var_39_string, var_40_string)
{
	var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); // 0xb4 PushV
	GetLocator(var_38_string, var_45_bool, var_46_cvector, var_47_cvector); // 0xb5 ObjFunc
	var_49_bool = var_45_bool == 0; // 0xb7 Not
	if(var_49_bool == 0) goto Label_193; // 0xb8 JumpB
	var_50_string = "Locator "; // 0xb9 PushS
	var_51_int = var_50_string + var_38_string; // 0xba Add
	var_52_string = " doesn't exist"; // 0xbb PushS
	var_53_int = var_51_int + var_52_string; // 0xbc Add
	Trace(var_53_int); // 0xbd Func
	var_48_object = 0; // 0xbf SetNull
	goto Label_195; // 0xc0 Jump
	
Label_195:
	var_36_object = var_48_object; // 0xc3 Mov
	return 8; // 0xc4 Return
	
Label_193:
	AddActor(var_48_object, var_39_string, var_37_object, var_46_cvector, var_47_cvector, var_40_string); // 0xc1 Func
}


func_117()
{
	var_8_int = 0; var_9_int = 0; // 0x75 PushV
	var_10_string = "d6q02"; // 0x76 PushS
	GetVariable(var_10_string, var_9_int); // 0x77 Func
	var_11_bool = 0; // 0x79 PushV
	var_11_bool = 0; // 0x7a MovB
	var_12_int = 1000; // 0x7b PushI
	var_13_bool = var_9_int != var_12_int; // 0x7c Neq
	if(var_13_bool == 0) goto Label_130; // 0x7d JumpB
	var_14_int = -1; // 0x7e PushI
	var_15_bool = var_9_int != var_14_int; // 0x7f Neq
	if(var_15_bool == 0) goto Label_130; // 0x80 JumpB
	var_11_bool = 1; // 0x81 MovB
	
Label_130:
	if(var_11_bool == 0) goto Label_138; // 0x82 JumpB
	var_16_string = "d6q02"; // 0x83 PushS
	var_17_int = 1000; // 0x84 PushI
	SetVariable(var_16_string, var_17_int); // 0x85 Func
	func_139(var_9_int); // 0x88 Call
	
Label_138:
	return 2; // 0x8a Return
}


func_150(var_3_int)
{
	var_4_float = 0; var_5_float = 0; // 0x96 PushV
	GetGameTime(var_5_float); // 0x97 Func
	var_6_int = 24; // 0x99 PushI
	var_7_float = var_3_int * var_6_int; // 0x9a Mult
	var_8_bool = var_5_float >= var_7_float; // 0x9b GE
	if(var_8_bool == 0) goto Label_161; // 0x9c JumpB
	func_139(var_5_float); // 0x9e Call
	goto Label_168; // 0xa0 Jump
	
Label_168:
	return 2; // 0xa8 Return
	
Label_161:
	var_13_int = 0; // 0xa1 PushI
	var_14_int = 24; // 0xa2 PushI
	var_15_float = var_3_int * var_14_int; // 0xa3 Mult
	SetTimeEvent(var_13_int, var_15_float); // 0xa4 Func
	Hold(); // 0xa6 Func
}


