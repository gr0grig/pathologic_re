main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_bool = 0; var_3_object = Obj(); var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_float = 0; var_7_float = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_bool = 0; var_11_object = Obj(); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_float = 0; // 0x0 PushV
	GetMainOutdoorScene(var_8_object); // 0x1 Func
	var_16_float = 0; var_17_float = 0; var_18_float = 0; // 0x3 PushV
	var_16_float = 0; // 0x4 MovI
	var_17_float = 1; // 0x5 MovI
	var_18_float = 1.0; // 0x6 MovF
	func_130(var_17_float, var_18_float); // 0x7 NEW_2
	var_30_string = "player"; // 0x9 PushS
	FindActor(var_9_object, var_30_string); // 0xa Func
	var_31_object = var_9_object; // 0xc Push
	if(var_31_object == 0) goto Label_55; // 0xd JumpB
	var_32_string = "storojka"; // 0xe PushS
	GetSceneByName(var_11_object, var_32_string); // 0xf Func
	var_33_string = "birth"; // 0x11 PushS
	GetLocator(var_33_string, var_10_bool, var_12_cvector, var_13_cvector); // 0x12 ObjFunc
	Teleport(var_9_object, var_11_object, var_12_cvector, var_13_cvector); // 0x14 Func
	sync(); // 0x16 Func
	var_34_string = "pt_d11q01_teleport"; // 0x18 PushS
	GetLocator(var_34_string, var_10_bool, var_12_cvector, var_13_cvector); // 0x19 ObjFunc
	Teleport(var_9_object, var_8_object, var_12_cvector, var_13_cvector); // 0x1b Func
	var_35_string = "health"; // 0x1d PushS
	GetProperty(var_35_string, var_14_float); // 0x1e ObjFunc
	var_36_float = 0.2; // 0x20 PushF
	var_37_bool = var_14_float > var_36_float; // 0x21 GT
	if(var_37_bool == 0) goto Label_39; // 0x22 JumpB
	var_38_string = "health"; // 0x23 PushS
	var_39_float = 0.2; // 0x24 PushF
	SetProperty(var_38_string, var_39_float); // 0x25 ObjFunc
	
Label_39:
	var_40_string = "tiredness"; // 0x27 PushS
	GetProperty(var_40_string, var_15_float); // 0x28 ObjFunc
	var_41_float = 0.6; // 0x2a PushF
	var_42_bool = var_15_float > var_41_float; // 0x2b GT
	if(var_42_bool == 0) goto Label_54; // 0x2c JumpB
	var_43_string = "tiredness"; // 0x2d PushS
	var_44_float = 0.6; // 0x2e PushF
	SetProperty(var_43_string, var_44_float); // 0x2f ObjFunc
	var_45_float = 0; // 0x31 PushV
	var_46_float = 0.6; // 0x32 PushF
	var_45_float = var_46_float - var_15_float; // 0x33 Sub2
	func_120(var_45_float); // 0x34 NEW_2
	
Label_54:
	var_11_object = 0; // 0x36 SetNull
	
Label_55:
	sync(); // 0x37 Func
	var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = ""; // 0x39 PushV
	var_51_object = var_8_object; // 0x3a Mov
	var_52_string = "pt_d11q01_dog1"; // 0x3b MovS
	var_53_string = "pers_dog"; // 0x3c MovS
	var_54_string = "d11q01_dog.xml"; // 0x3d MovS
	func_102(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string); // 0x3e NEW_2
	var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = ""; // 0x40 PushV
	var_69_object = var_8_object; // 0x41 Mov
	var_70_string = "pt_d11q01_dog2"; // 0x42 MovS
	var_71_string = "pers_dog"; // 0x43 MovS
	var_72_string = "d11q01_dog.xml"; // 0x44 MovS
	func_102(var_68_object, var_69_object, var_70_string, var_71_string, var_72_string); // 0x45 NEW_2
	var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = ""; // 0x47 PushV
	var_74_object = var_8_object; // 0x48 Mov
	var_75_string = "pt_d11q01_dog3"; // 0x49 MovS
	var_76_string = "pers_dog"; // 0x4a MovS
	var_77_string = "d11q01_dog.xml"; // 0x4b MovS
	func_102(var_73_object, var_74_object, var_75_string, var_76_string, var_77_string); // 0x4c NEW_2
	var_78_float = 0; var_79_float = 0; var_80_float = 0; // 0x4e PushV
	var_78_float = 1; // 0x4f MovI
	var_79_float = 0; // 0x50 MovI
	var_80_float = 5.0; // 0x51 MovF
	func_130(var_79_float, var_80_float); // 0x52 NEW_2
	var_81_string = "d11q01SoldierAttack"; // 0x54 PushS
	var_82_int = 1; // 0x55 PushI
	SetVariable(var_81_string, var_82_int); // 0x56 Func
	var_83_object = Obj(); // 0x58 PushV
	func_96(var_83_object); // 0x59 NEW_2
	RemoveActor(var_83_object); // 0x5b Func
	return 16; // 0x5d Return
}


func_120(var_45_float)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x78 PushV
	CreateFloatVector(var_48_object); // 0x79 Func
	add(var_45_float); // 0x7b ObjFunc
	var_49_int = 11; // 0x7d PushI
	SendWorldWndMessage(var_49_int, var_48_object); // 0x7e Func
	return 2; // 0x80 Return
}


func_130(var_16_float, var_17_float)
{
	var_19_bool = 0; var_20_float = 0; var_21_float = 0; var_22_bool = 0; var_23_float = 0; var_24_float = 0; // 0x82 PushV
	var_22_bool = var_17_float > var_16_float; // 0x83 GT2
	var_25_int = var_17_float - var_16_float; // 0x84 Sub
	var_23_float = var_25_int / var_25_int; // 0x85 Div2
	
Label_134:
	var_26_bool = var_22_bool; // 0x86 Push
	if(var_26_bool == 0) goto Label_138; // 0x87 JumpB
	var_27_bool = var_16_float < var_17_float; // 0x88 LT
	goto Label_139; // 0x89 Jump
	
Label_139:
	if(var_27_bool == 0) goto Label_147; // 0x8b JumpB
	ModDarkenLevel(var_16_float); // 0x8c Func
	sync(var_24_float); // 0x8e Func
	var_28_float = var_24_float * var_23_float; // 0x90 Mult
	var_16_float = var_16_float + var_28_float; // 0x91 Add2
	goto Label_134; // 0x92 Jump
	
Label_147:
	ModDarkenLevel(var_17_float); // 0x93 Func
	return 6; // 0x95 Return
	
Label_138:
	var_29_bool = var_17_float < var_16_float; // 0x8a LT
}


func_96(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x60 PushV
	self(var_85_object); // 0x61 Func
	var_83_object = var_85_object; // 0x63 Mov
	return 2; // 0x64 Return
}


func_102(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string)
{
	var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0x66 PushV
	GetLocator(var_52_string, var_59_bool, var_60_cvector, var_61_cvector); // 0x67 ObjFunc
	var_63_bool = var_59_bool == 0; // 0x69 Not
	if(var_63_bool == 0) goto Label_115; // 0x6a JumpB
	var_64_string = "Locator "; // 0x6b PushS
	var_65_int = var_64_string + var_52_string; // 0x6c Add
	var_66_string = " doesn't exist"; // 0x6d PushS
	var_67_int = var_65_int + var_66_string; // 0x6e Add
	Trace(var_67_int); // 0x6f Func
	var_62_object = 0; // 0x71 SetNull
	goto Label_117; // 0x72 Jump
	
Label_117:
	var_50_object = var_62_object; // 0x75 Mov
	return 8; // 0x76 Return
	
Label_115:
	AddActor(var_62_object, var_53_string, var_51_object, var_60_cvector, var_61_cvector, var_54_string); // 0x73 Func
}


