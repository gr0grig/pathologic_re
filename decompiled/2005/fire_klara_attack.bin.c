task_0_event_6()
{
	var_0_object = Obj(); // 0x88 PushV
	func_193(var_0_object); // 0x89 NEW_2
	RemoveActor(var_0_object); // 0x8b Func
	return 0; // 0x8d Return
}


main()
{
	var_0_object = Obj(); var_1_cvector = CVector(0,0,0); var_2_cvector = CVector(0,0,0); var_3_cvector = CVector(0,0,0); var_4_int = 0; var_5_int = 0; var_6_float = 0; var_7_int = 0; var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_int = 0; // 0x0 PushV
	var_16_string = "1"; // 0x1 PushS
	Trace(var_16_string); // 0x2 Func
	sync(); // 0x4 Func
	var_17_string = "2"; // 0x6 PushS
	Trace(var_17_string); // 0x7 Func
	var_18_bool = 0; // 0x9 PushV
	var_18_bool = 1; // 0xa MovB
	var_19_bool = 0; // 0xb PushV
	func_188(var_19_bool); // 0xc NEW_2
	var_22_bool = var_19_bool == 0; // 0xe Not
	if(var_22_bool == 0) goto Label_25; // 0xf JumpB
	var_23_bool = 0; var_24_object = Obj(); // 0x10 PushV
	var_25_object = GlobalVars[0]; // 0x11 PushGE
	var_24_object = var_25_object; // 0x12 Mov
	func_154(var_23_bool, var_24_object); // 0x14 NEW_2
	var_47_bool = var_23_bool == 0; // 0x16 Not
	if(var_47_bool == 0) goto Label_25; // 0x17 JumpB
	var_18_bool = 0; // 0x18 MovB
	
Label_25:
	if(var_18_bool == 0) goto Label_32; // 0x19 JumpB
	var_48_object = Obj(); // 0x1a PushV
	func_193(var_48_object); // 0x1b NEW_2
	RemoveActor(var_48_object); // 0x1d Func
	return 16; // 0x1f Return
	
Label_32:
	var_51_string = "3"; // 0x20 PushS
	Trace(var_51_string); // 0x21 Func
	var_52_string = "fire"; // 0x23 PushS
	FindParticleSystem(var_52_string, var_8_object); // 0x24 Func
	var_53_bool = var_8_object == 0; // 0x26 NullEq
	if(var_53_bool == 0) goto Label_44; // 0x27 JumpB
	var_54_string = "Can't find fire particle system"; // 0x28 PushS
	Trace(var_54_string); // 0x29 Func
	return 16; // 0x2b Return
	
Label_44:
	var_55_string = "4"; // 0x2c PushS
	Trace(var_55_string); // 0x2d Func
	var_56_object = GlobalVars[0]; // 0x2f PushGE
	GetPosition(var_9_cvector); // 0x30 ObjFunc
	GetPosition(var_10_cvector); // 0x32 Func
	var_57_string = "x"; // 0x34 PushS
	var_58_float = GetByIndex(var_9_cvector, 0); // 0x35 PushE
	var_59_int = var_57_string + var_58_float; // 0x36 Add
	var_60_string = " y "; // 0x37 PushS
	var_61_int = var_59_int + var_60_string; // 0x38 Add
	var_62_float = GetByIndex(var_9_cvector, 1); // 0x39 PushE
	var_63_int = var_61_int + var_62_float; // 0x3a Add
	var_64_string = " z"; // 0x3b PushS
	var_65_int = var_63_int + var_64_string; // 0x3c Add
	var_66_float = GetByIndex(var_9_cvector, 2); // 0x3d PushE
	var_67_int = var_65_int + var_66_float; // 0x3e Add
	Trace(var_67_int); // 0x3f Func
	var_68_int = var_9_cvector - var_10_cvector; // 0x41 Sub
	var_69_cvector = CVector(0.0, 1.0, 0.0); // 0x42 PushVec
	var_70_float = 0.5; // 0x43 PushF
	AddSource(var_68_int, var_69_cvector, var_70_float); // 0x44 ObjFunc
	Enable(); // 0x46 ObjFunc
	var_71_bool = 0; // 0x48 PushB
	Fade(var_71_bool); // 0x49 ObjFunc
	var_72_string = "5"; // 0x4b PushS
	Trace(var_72_string); // 0x4c Func
	var_11_cvector = var_9_cvector; // 0x4e Mov
	var_12_int = 2; // 0x4f MovI
	var_13_int = 0; // 0x50 MovI
	
Label_81:
	var_73_int = 600; // 0x51 PushI
	var_74_bool = var_13_int < var_73_int; // 0x52 LT
	if(var_74_bool == 0) goto Label_121; // 0x53 JumpB
	sync(); // 0x54 Func
	var_75_bool = 0; var_76_object = Obj(); // 0x56 PushV
	var_77_object = GlobalVars[0]; // 0x57 PushGE
	var_76_object = var_77_object; // 0x58 Mov
	func_154(var_75_bool, var_76_object); // 0x5a NEW_2
	var_78_bool = var_75_bool == 0; // 0x5c Not
	if(var_78_bool == 0) goto Label_95; // 0x5d JumpB
	goto Label_121; // 0x5e Jump
	
Label_121:
	var_79_string = "6"; // 0x79 PushS
	Trace(var_79_string); // 0x7a Func
	Fade(); // 0x7c ObjFunc
	var_80_int = 3; // 0x7e PushI
	Sleep(var_80_int); // 0x7f Func
	var_81_object = Obj(); // 0x81 PushV
	func_193(var_81_object); // 0x82 NEW_2
	RemoveActor(var_81_object); // 0x84 Func
	return 16; // 0x86 Return
	
Label_95:
	var_82_object = GlobalVars[0]; // 0x5f PushGE
	GetPosition(var_9_cvector); // 0x60 ObjFunc
	var_83_int = var_11_cvector - var_9_cvector; // 0x62 Sub
	var_84_int = var_11_cvector - var_9_cvector; // 0x63 Sub
	var_14_float = var_83_int | var_84_int; // 0x64 Or2
	var_85_int = 25; // 0x65 PushI
	var_86_bool = var_14_float > var_85_int; // 0x66 GT
	if(var_86_bool == 0) goto Label_118; // 0x67 JumpB
	var_15_int = 0; // 0x68 MovI
	
Label_105:
	var_87_bool = var_15_int < var_12_int; // 0x69 LT
	if(var_87_bool == 0) goto Label_115; // 0x6a JumpB
	var_88_int = var_9_cvector - var_10_cvector; // 0x6b Sub
	var_89_cvector = CVector(0.0, 1.0, 0.0); // 0x6c PushVec
	var_90_float = 0.5; // 0x6d PushF
	AddSource(var_88_int, var_89_cvector, var_90_float); // 0x6e ObjFunc
	var_91_int = 1; // 0x70 PushI
	var_15_int = var_15_int + var_91_int; // 0x71 Add2
	goto Label_105; // 0x72 Jump
	
Label_115:
	var_92_int = 3; // 0x73 PushI
	var_12_int = var_12_int + var_92_int; // 0x74 Add2
	var_11_cvector = var_9_cvector; // 0x75 Mov
	
Label_118:
	var_93_int = 1; // 0x76 PushI
	var_13_int = var_13_int + var_93_int; // 0x77 Add2
	goto Label_81; // 0x78 Jump
}


func_193(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0xc1 PushV
	self(var_50_object); // 0xc2 Func
	var_48_object = var_50_object; // 0xc4 Mov
	return 2; // 0xc5 Return
}


func_154(var_23_bool, var_24_object)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; // 0x9a PushV
	var_32_bool = var_24_object == 0; // 0x9b NullEq
	if(var_32_bool == 0) goto Label_159; // 0x9c JumpB
	var_23_bool = 0; // 0x9d MovB
	return 6; // 0x9e Return
	
Label_159:
	GetScene(var_29_object); // 0x9f Func
	var_33_bool = var_29_object == 0; // 0xa1 NullEq
	if(var_33_bool == 0) goto Label_165; // 0xa2 JumpB
	var_23_bool = 0; // 0xa3 MovB
	return 6; // 0xa4 Return
	
Label_165:
	GetScene(var_30_object); // 0xa5 ObjFunc
	var_34_bool = var_29_object != var_30_object; // 0xa7 Neq
	if(var_34_bool == 0) goto Label_171; // 0xa8 JumpB
	var_23_bool = 0; // 0xa9 MovB
	return 6; // 0xaa Return
	
Label_171:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0xab PushV
	var_36_object = var_24_object; // 0xac Mov
	var_37_string = "noaccess"; // 0xad MovS
	func_142(var_35_bool, var_36_object, var_37_string); // 0xae NEW_2
	var_44_bool = var_35_bool == 0; // 0xb0 Not
	if(var_44_bool == 0) goto Label_180; // 0xb1 JumpB
	var_23_bool = 1; // 0xb2 MovB
	return 6; // 0xb3 Return
	
Label_180:
	var_45_string = "noaccess"; // 0xb4 PushS
	GetProperty(var_45_string, var_31_int); // 0xb5 ObjFunc
	var_46_int = 0; // 0xb7 PushI
	var_23_bool = var_31_int == var_46_int; // 0xb8 Eq2
	return 6; // 0xb9 Return
}


func_188(var_19_bool)
{
	var_20_bool = 0; var_21_bool = 0; // 0xbc PushV
	IsLoaded(var_21_bool); // 0xbd Func
	var_19_bool = var_21_bool; // 0xbf Mov
	return 2; // 0xc0 Return
}


func_142(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x8e PushV
	var_40_string = "HasProperty"; // 0x8f PushS
	var_41_int = 2; // 0x90 PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x91 FuncExist
	var_43_bool = var_42_bool == 0; // 0x92 Not
	if(var_43_bool == 0) goto Label_150; // 0x93 JumpB
	var_35_bool = 0; // 0x94 MovB
	return 2; // 0x95 Return
	
Label_150:
	HasProperty(var_37_string, var_39_bool); // 0x96 ObjFunc
	var_35_bool = var_39_bool; // 0x98 Mov
	return 2; // 0x99 Return
}


