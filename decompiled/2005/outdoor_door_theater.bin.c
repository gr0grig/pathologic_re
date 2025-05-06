task_0_event_0(var_0_object)
{
	var_1_bool = 0; // 0x7 PushV
	func_137(var_1_bool); // 0x8 NEW_2
	if(var_1_bool == 0) goto Label_14; // 0xa JumpB
	func_161(); // 0xc NEW_2
	
Label_14:
	var_40_object = Obj(); // 0xe PushV
	var_40_object = var_0_object; // 0xf Mov
	func_26(var_40_object); // 0x10 NEW_2
	return 0; // 0x12 Return
}


main()
{
	DisableUpdate(); // 0x0 Func
	func_19(); // 0x3 NEW_2
	return 0; // 0x5 Return
}


func_161()
{
	var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; // 0xa1 PushV
	var_30_int = 0; // 0xa2 PushV
	func_113(var_30_int); // 0xa3 NEW_2
	var_28_int = var_30_int; // 0xa4 Mov
	var_31_string = "Performance"; // 0xa6 PushS
	var_32_int = var_31_string + var_28_int; // 0xa7 Add
	var_33_int = 1; // 0xa8 PushI
	SetVariable(var_32_int, var_33_int); // 0xa9 Func
	var_34_string = "NightMasks"; // 0xab PushS
	var_35_int = 1; // 0xac PushI
	var_36_int = var_28_int - var_35_int; // 0xad Sub
	var_37_int = var_34_string + var_36_int; // 0xae Add
	var_38_string = ".wmv"; // 0xaf PushS
	var_39_int = var_37_int + var_38_string; // 0xb0 Add
	PlayMovie(var_39_int); // 0xb1 Func
	return 4; // 0xb3 Return
}


func_130(var_57_bool)
{
	var_58_int = 0; var_59_int = 0; // 0x82 PushV
	var_60_string = "locked"; // 0x83 PushS
	GetProperty(var_60_string, var_59_int); // 0x84 Func
	var_61_int = 0; // 0x86 PushI
	var_57_bool = var_59_int != var_61_int; // 0x87 Neq2
	return 2; // 0x88 Return
}


func_98(var_64_int, var_65_string, var_66_string)
{
	var_67_int = 0; var_68_int = 0; // 0x62 PushV
	_strchr(var_68_int, var_65_string, var_66_string); // 0x63 Func
	var_64_int = var_68_int; // 0x65 Mov
	return 2; // 0x66 Return
}


func_122(var_8_int)
{
	var_9_float = 0; var_10_float = 0; // 0x7a PushV
	GetGameTime(var_10_float); // 0x7b Func
	var_11_int = 0; // 0x7d PushV
	var_11_int = var_10_float; // 0x7e Mov
	var_12_int = 24; // 0x7f PushI
	var_8_int = var_11_int % var_12_int; // 0x80 Mod2
	return 2; // 0x81 Return
}


func_103(var_79_string, var_80_string, var_81_int)
{
	var_83_string = ""; var_84_string = ""; // 0x67 PushV
	_strsub(var_84_string, var_80_string, var_81_int); // 0x68 Func
	var_79_string = var_84_string; // 0x6a Mov
	return 2; // 0x6b Return
}


func_137(var_1_bool)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; // 0x89 PushV
	var_8_int = 0; // 0x8a PushV
	func_122(var_8_int); // 0x8b NEW_2
	var_5_int = var_8_int; // 0x8c Mov
	var_13_int = 6; // 0x8e PushI
	var_14_bool = var_5_int < var_13_int; // 0x8f LT
	if(var_14_bool == 0) goto Label_159; // 0x90 JumpB
	var_15_int = 0; // 0x91 PushV
	func_113(var_15_int); // 0x92 NEW_2
	var_6_int = var_15_int; // 0x93 Mov
	var_21_int = 1; // 0x95 PushI
	var_22_bool = var_6_int > var_21_int; // 0x96 GT
	if(var_22_bool == 0) goto Label_159; // 0x97 JumpB
	var_23_string = "Performance"; // 0x98 PushS
	var_24_int = var_23_string + var_6_int; // 0x99 Add
	GetVariable(var_24_int, var_7_int); // 0x9a Func
	var_25_int = 0; // 0x9c PushI
	var_1_bool = var_7_int == var_25_int; // 0x9d Eq2
	return 6; // 0x9e Return
	
Label_159:
	var_1_bool = 0; // 0x9f MovB
	return 6; // 0xa0 Return
}


func_108(var_72_string, var_73_string, var_74_int, var_75_int)
{
	var_76_string = ""; var_77_string = ""; // 0x6c PushV
	_strsub(var_77_string, var_73_string, var_74_int, var_75_int); // 0x6d Func
	var_72_string = var_77_string; // 0x6f Mov
	return 2; // 0x70 Return
}


func_113(var_15_int)
{
	var_16_float = 0; var_17_float = 0; // 0x71 PushV
	GetGameTime(var_17_float); // 0x72 Func
	var_18_int = 1; // 0x74 PushI
	var_19_int = 0; // 0x75 PushV
	var_20_int = 24; // 0x76 PushI
	var_19_int = var_17_float / var_17_float; // 0x77 Div2
	var_15_int = var_18_int + var_19_int; // 0x78 Add2
	return 2; // 0x79 Return
}


func_19()
{
	var_0_bool = 1; // 0x13 PushB
	SetVisibility(var_0_bool); // 0x14 Func
	
Label_22:
	Hold(); // 0x16 Func
	goto Label_22; // 0x18 Jump
}


func_26(var_40_object)
{
	var_41_string = ""; var_42_int = 0; var_43_string = ""; var_44_string = ""; var_45_object = Obj(); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = ""; var_50_int = 0; var_51_string = ""; var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x1a PushV
	var_57_bool = 0; // 0x1b PushV
	func_130(var_57_bool); // 0x1c NEW_2
	if(var_57_bool == 0) goto Label_38; // 0x1e JumpB
	var_62_string = "door_closed"; // 0x1f PushS
	PlaySound(var_62_string); // 0x20 Func
	var_63_string = "Door is locked"; // 0x22 PushS
	Trace(var_63_string); // 0x23 Func
	return 16; // 0x25 Return
	
Label_38:
	GetActorName(var_49_string); // 0x26 Func
	var_64_int = 0; var_65_string = ""; var_66_string = ""; // 0x28 PushV
	var_65_string = var_49_string; // 0x29 Mov
	var_66_string = "@"; // 0x2a MovS
	func_98(var_64_int, var_65_string, var_66_string); // 0x2b NEW_2
	var_50_int = var_64_int; // 0x2c Mov
	var_69_int = -1; // 0x2e PushI
	var_70_bool = var_50_int == var_69_int; // 0x2f Eq
	if(var_70_bool == 0) goto Label_53; // 0x30 JumpB
	var_71_string = "Wrong door name"; // 0x31 PushS
	Trace(var_71_string); // 0x32 Func
	return 16; // 0x34 Return
	
Label_53:
	var_72_string = ""; var_73_string = ""; var_74_int = 0; var_75_int = 0; // 0x35 PushV
	var_73_string = var_49_string; // 0x36 Mov
	var_74_int = 0; // 0x37 MovI
	var_75_int = var_50_int; // 0x38 Mov
	func_108(var_72_string, var_73_string, var_74_int, var_75_int); // 0x39 NEW_2
	var_51_string = var_72_string; // 0x3a Mov
	var_78_string = "pt_"; // 0x3c PushS
	var_79_string = ""; var_80_string = ""; var_81_int = 0; // 0x3d PushV
	var_80_string = var_49_string; // 0x3e Mov
	var_82_int = 1; // 0x3f PushI
	var_81_int = var_50_int + var_82_int; // 0x40 Add2
	func_103(var_79_string, var_80_string, var_81_int); // 0x41 NEW_2
	var_52_string = var_78_string + var_79_string; // 0x43 Add2
	GetSceneByName(var_53_object, var_51_string); // 0x44 Func
	var_85_bool = var_53_object == 0; // 0x46 NullEq
	if(var_85_bool == 0) goto Label_79; // 0x47 JumpB
	var_86_string = "Destination scene '"; // 0x48 PushS
	var_87_int = var_86_string + var_51_string; // 0x49 Add
	var_88_string = "' not found"; // 0x4a PushS
	var_89_int = var_87_int + var_88_string; // 0x4b Add
	Trace(var_89_int); // 0x4c Func
	return 16; // 0x4e Return
	
Label_79:
	GetLocator(var_52_string, var_54_bool, var_55_cvector, var_56_cvector); // 0x4f ObjFunc
	var_90_bool = var_54_bool; // 0x51 Push
	if(var_90_bool == 0) goto Label_89; // 0x52 JumpB
	var_91_string = "door_open"; // 0x53 PushS
	PlaySharedSound(var_91_string); // 0x54 Func
	Teleport(var_40_object, var_53_object, var_55_cvector, var_56_cvector); // 0x56 Func
	goto Label_96; // 0x58 Jump
	
Label_96:
	return 16; // 0x60 Return
	
Label_89:
	var_92_string = "Locator "; // 0x59 PushS
	var_93_int = var_92_string + var_52_string; // 0x5a Add
	var_94_string = " not found in destination scene "; // 0x5b PushS
	var_95_int = var_93_int + var_94_string; // 0x5c Add
	var_96_int = var_95_int + var_51_string; // 0x5d Add
	Trace(var_96_int); // 0x5e Func
}


