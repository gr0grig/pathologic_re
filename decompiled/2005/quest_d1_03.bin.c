task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string); // 0x1c Func
	var_2_string = "unlock_butcher"; // 0x1e PushS
	var_3_bool = var_1_string == var_2_string; // 0x1f Eq
	if(var_3_bool == 0) goto Label_39; // 0x20 JumpB
	var_4_string = ""; var_5_bool = 0; // 0x21 PushV
	var_4_string = "ospina_kabak@door1"; // 0x22 MovS
	var_5_bool = 0; // 0x23 MovB
	func_193(var_4_string, var_5_bool); // 0x24 NEW_2
	goto Label_100; // 0x26 Jump
	
Label_100:
	return 0; // 0x64 Return
	
Label_39:
	var_14_string = "butcher_fail"; // 0x27 PushS
	var_15_bool = var_1_string == var_14_string; // 0x28 Eq
	if(var_15_bool == 0) goto Label_49; // 0x29 JumpB
	func_262(); // 0x2b NEW_2
	func_109(); // 0x2e NEW_2
	goto Label_100; // 0x30 Jump
	
Label_49:
	var_48_string = "butcher_battle"; // 0x31 PushS
	var_49_bool = var_1_string == var_48_string; // 0x32 Eq
	if(var_49_bool == 0) goto Label_57; // 0x33 JumpB
	var_50_string = "d1q03"; // 0x34 PushS
	var_51_int = 2; // 0x35 PushI
	SetVariable(var_50_string, var_51_int); // 0x36 Func
	goto Label_100; // 0x38 Jump
	
Label_57:
	var_52_string = "butcher_death"; // 0x39 PushS
	var_53_bool = var_1_string == var_52_string; // 0x3a Eq
	if(var_53_bool == 0) goto Label_78; // 0x3b JumpB
	var_54_bool = 0; // 0x3c PushV
	func_316(var_54_bool); // 0x3d NEW_2
	if(var_54_bool == 0) goto Label_71; // 0x3f JumpB
	func_223(); // 0x41 NEW_2
	func_109(); // 0x44 NEW_2
	goto Label_77; // 0x46 Jump
	
Label_77:
	goto Label_100; // 0x4d Jump
	
Label_71:
	func_236(); // 0x48 NEW_2
	func_101(); // 0x4b NEW_2
	
Label_78:
	var_77_string = "eva_finish"; // 0x4e PushS
	var_78_bool = var_1_string == var_77_string; // 0x4f Eq
	if(var_78_bool == 0) goto Label_100; // 0x50 JumpB
	RemoveActor(var_0_object); // 0x51 Func
	var_79_bool = 0; // 0x53 PushV
	func_316(var_79_bool); // 0x54 NEW_2
	if(var_79_bool == 0) goto Label_94; // 0x56 JumpB
	func_210(); // 0x58 NEW_2
	func_101(); // 0x5b NEW_2
	goto Label_100; // 0x5d Jump
	
Label_94:
	func_249(); // 0x5f NEW_2
	func_109(); // 0x62 NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_117(); // 0xa6 NEW_2
	return 0; // 0xa8 Return
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	var_3_string = "d1q03"; // 0x1 PushS
	var_4_int = 1; // 0x2 PushI
	SetVariable(var_3_string, var_4_int); // 0x3 Func
	var_5_string = "ospina_kabak"; // 0x5 PushS
	GetSceneByName(var_2_object, var_5_string); // 0x6 Func
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = ""; // 0x8 PushV
	var_7_object = var_2_object; // 0x9 Mov
	var_8_string = "pt_d1q04_butcher"; // 0xa MovS
	var_9_string = "pers_butcher"; // 0xb MovS
	var_10_string = "d1q03_butcher.xml"; // 0xc MovS
	func_175(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string); // 0xd NEW_2
	var_0_object = var_6_object; // 0xe TMov
	var_24_string = ""; var_25_bool = 0; // 0x10 PushV
	var_24_string = "ospina_kabak@door1"; // 0x11 MovS
	var_25_bool = 1; // 0x12 MovB
	func_193(var_24_string, var_25_bool); // 0x13 NEW_2
	var_34_int = 0; // 0x15 PushV
	var_34_int = 1; // 0x16 MovI
	func_145(var_34_int); // 0x17 NEW_2
	return 2; // 0x19 Return
}


func_128(var_0_object)
{
	EventDisable(26); // 0x80 EventDisable
	var_40_object = var_0_object; // 0x81 PushT
	if(var_40_object == 0) goto Label_134; // 0x82 JumpB
	var_41_string = "cleanup"; // 0x83 PushS
	Trigger(var_0_object, var_41_string); // 0x84 Func
	
Label_134:
	var_42_string = ""; var_43_bool = 0; // 0x86 PushV
	var_42_string = "ospina_kabak@door1"; // 0x87 MovS
	var_43_bool = 0; // 0x88 MovB
	func_193(var_42_string, var_43_bool); // 0x89 NEW_2
	var_44_object = Obj(); // 0x8b PushV
	func_169(var_44_object); // 0x8c NEW_2
	RemoveActor(var_44_object); // 0x8e Func
	return 0; // 0x90 Return
}


func_193(var_24_string, var_25_bool)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0xc1 PushV
	FindActor(var_27_object, var_24_string); // 0xc2 Func
	var_28_bool = var_27_object == 0; // 0xc4 Not
	if(var_28_bool == 0) goto Label_205; // 0xc5 JumpB
	var_29_string = "Door "; // 0xc6 PushS
	var_30_int = var_29_string + var_24_string; // 0xc7 Add
	var_31_string = " not found"; // 0xc8 PushS
	var_32_int = var_30_int + var_31_string; // 0xc9 Add
	Trace(var_32_int); // 0xca Func
	goto Label_208; // 0xcc Jump
	
Label_208:
	return 2; // 0xd0 Return
	
Label_205:
	var_33_string = "locked"; // 0xcd PushS
	SetProperty(var_33_string, var_25_bool); // 0xce ObjFunc
}


func_262()
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x106 PushV
	var_18_int = 42; // 0x107 PushI
	var_19_int = 2; // 0x108 PushI
	var_20_int = 512124; // 0x109 PushI
	CreateDiaryEntry(var_17_object, var_18_int, var_19_int, var_20_int); // 0x10a Func
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0; // 0x10c PushV
	var_22_object = var_17_object; // 0x10d Mov
	var_23_int = 37; // 0x10e MovI
	func_288(var_21_bool, var_22_object, var_23_int); // 0x10f NEW_2
	return 2; // 0x111 Return
}


func_145(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x91 PushV
	GetGameTime(var_36_float); // 0x92 Func
	var_37_int = 24; // 0x94 PushI
	var_38_float = var_34_int * var_37_int; // 0x95 Mult
	var_39_bool = var_36_float >= var_38_float; // 0x96 GE
	if(var_39_bool == 0) goto Label_156; // 0x97 JumpB
	func_128(var_36_float); // 0x99 NEW_2
	goto Label_163; // 0x9b Jump
	
Label_163:
	return 2; // 0xa3 Return
	
Label_156:
	var_47_int = 0; // 0x9c PushI
	var_48_int = 24; // 0x9d PushI
	var_49_float = var_34_int * var_48_int; // 0x9e Mult
	SetTimeEvent(var_47_int, var_49_float); // 0x9f Func
	Hold(); // 0xa1 Func
}


func_210()
{
	var_80_object = Obj(); var_81_object = Obj(); // 0xd2 PushV
	var_82_int = 38; // 0xd3 PushI
	var_83_int = 2; // 0xd4 PushI
	var_84_int = 512120; // 0xd5 PushI
	CreateDiaryEntry(var_81_object, var_82_int, var_83_int, var_84_int); // 0xd6 Func
	var_85_bool = 0; var_86_object = Obj(); var_87_int = 0; // 0xd8 PushV
	var_86_object = var_81_object; // 0xd9 Mov
	var_87_int = 37; // 0xda MovI
	func_288(var_85_bool, var_86_object, var_87_int); // 0xdb NEW_2
	return 2; // 0xdd Return
}


func_275(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x113 PushV
	GetDiaryRoot(var_32_object); // 0x114 Func
	var_33_bool = var_32_object == 0; // 0x116 Not
	if(var_33_bool == 0) goto Label_285; // 0x117 JumpB
	var_34_string = "Can't retrieve diary root"; // 0x118 PushS
	Trace(var_34_string); // 0x119 Func
	var_30_object = 0; // 0x11b MovB
	return 2; // 0x11c Return
	
Label_285:
	var_30_object = var_32_object; // 0x11d Mov
	return 2; // 0x11e Return
}


func_223()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0xdf PushV
	var_61_int = 39; // 0xe0 PushI
	var_62_int = 2; // 0xe1 PushI
	var_63_int = 512121; // 0xe2 PushI
	CreateDiaryEntry(var_60_object, var_61_int, var_62_int, var_63_int); // 0xe3 Func
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; // 0xe5 PushV
	var_65_object = var_60_object; // 0xe6 Mov
	var_66_int = 37; // 0xe7 MovI
	func_288(var_64_bool, var_65_object, var_66_int); // 0xe8 NEW_2
	return 2; // 0xea Return
}


func_288(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x120 PushV
	var_30_object = Obj(); // 0x121 PushV
	func_275(var_30_object); // 0x122 NEW_2
	var_27_object = var_30_object; // 0x123 Mov
	Find(var_23_int, var_28_object); // 0x125 ObjFunc
	var_35_bool = var_28_object == 0; // 0x127 Not
	if(var_35_bool == 0) goto Label_303; // 0x128 JumpB
	var_36_string = "Can't find diary parent with id: "; // 0x129 PushS
	var_37_int = var_36_string + var_23_int; // 0x12a Add
	Trace(var_37_int); // 0x12b Func
	var_21_bool = 0; // 0x12d MovB
	return 6; // 0x12e Return
	
Label_303:
	AddChild(var_22_object); // 0x12f ObjFunc
	var_38_int = 7; // 0x131 PushI
	SendWorldWndMessage(var_38_int); // 0x132 Func
	GetCategory(var_29_int); // 0x134 ObjFunc
	SetDiarySection(var_29_int); // 0x136 Func
	var_21_bool = 0; // 0x138 MovB
	return 6; // 0x139 Return
}


func_101()
{
	var_75_string = "d1q03"; // 0x65 PushS
	var_76_int = 1000; // 0x66 PushI
	SetVariable(var_75_string, var_76_int); // 0x67 Func
	func_128(var_1_string); // 0x6a NEW_2
	return 0; // 0x6c Return
}


func_169(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0xa9 PushV
	self(var_46_object); // 0xaa Func
	var_44_object = var_46_object; // 0xac Mov
	return 2; // 0xad Return
}


func_236()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0xec PushV
	var_69_int = 40; // 0xed PushI
	var_70_int = 2; // 0xee PushI
	var_71_int = 512122; // 0xef PushI
	CreateDiaryEntry(var_68_object, var_69_int, var_70_int, var_71_int); // 0xf0 Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0xf2 PushV
	var_73_object = var_68_object; // 0xf3 Mov
	var_74_int = 37; // 0xf4 MovI
	func_288(var_72_bool, var_73_object, var_74_int); // 0xf5 NEW_2
	return 2; // 0xf7 Return
}


func_109()
{
	var_8_string = "d1q03"; // 0x6d PushS
	var_9_int = -1; // 0x6e PushI
	SetVariable(var_8_string, var_9_int); // 0x6f Func
	func_128(var_4_int); // 0x72 NEW_2
	return 0; // 0x74 Return
}


func_175(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0xaf PushV
	GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector); // 0xb0 ObjFunc
	var_19_bool = var_15_bool == 0; // 0xb2 Not
	if(var_19_bool == 0) goto Label_188; // 0xb3 JumpB
	var_20_string = "Locator "; // 0xb4 PushS
	var_21_int = var_20_string + var_8_string; // 0xb5 Add
	var_22_string = " doesn't exist"; // 0xb6 PushS
	var_23_int = var_21_int + var_22_string; // 0xb7 Add
	Trace(var_23_int); // 0xb8 Func
	var_18_object = 0; // 0xba SetNull
	goto Label_190; // 0xbb Jump
	
Label_190:
	var_6_object = var_18_object; // 0xbe Mov
	return 8; // 0xbf Return
	
Label_188:
	AddActor(var_18_object, var_9_string, var_7_object, var_16_cvector, var_17_cvector, var_10_string); // 0xbc Func
}


func_117()
{
	var_3_int = 0; var_4_int = 0; // 0x75 PushV
	var_5_string = "d1q03"; // 0x76 PushS
	GetVariable(var_5_string, var_4_int); // 0x77 Func
	var_6_int = 1000; // 0x79 PushI
	var_7_bool = var_4_int != var_6_int; // 0x7a Neq
	if(var_7_bool == 0) goto Label_127; // 0x7b JumpB
	func_109(); // 0x7d NEW_2
	
Label_127:
	return 2; // 0x7f Return
}


func_249()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0xf9 PushV
	var_90_int = 41; // 0xfa PushI
	var_91_int = 2; // 0xfb PushI
	var_92_int = 512123; // 0xfc PushI
	CreateDiaryEntry(var_89_object, var_90_int, var_91_int, var_92_int); // 0xfd Func
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0; // 0xff PushV
	var_94_object = var_89_object; // 0x100 Mov
	var_95_int = 37; // 0x101 MovI
	func_288(var_93_bool, var_94_object, var_95_int); // 0x102 NEW_2
	return 2; // 0x104 Return
}


func_316(var_54_bool)
{
	var_55_int = 0; var_56_int = 0; // 0x13c PushV
	var_57_string = "d1q03IsKapella"; // 0x13d PushS
	GetVariable(var_57_string, var_56_int); // 0x13e Func
	var_58_int = 0; // 0x140 PushI
	var_54_bool = var_56_int != var_58_int; // 0x141 Neq2
	return 2; // 0x142 Return
}


