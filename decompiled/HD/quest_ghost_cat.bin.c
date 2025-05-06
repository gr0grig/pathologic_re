task_0_event_7(var_0_object, var_1_int)
{
	var_2_object = Obj(); var_3_int = 0; var_4_int = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_int = 0; // 0x8 PushV
	var_14_object = Obj(); // 0x9 PushV
	func_112(var_14_object); // 0xa NEW_2
	var_8_object = var_14_object; // 0xb Mov
	var_18_int = 0; // 0xd PushV
	func_130(var_18_int); // 0xe NEW_2
	var_9_int = var_18_int; // 0xf Mov
	var_24_int = 0; // 0x11 PushV
	func_139(var_24_int); // 0x12 NEW_2
	var_10_int = var_24_int; // 0x13 Mov
	var_29_bool = 0; // 0x15 PushV
	var_29_bool = 0; // 0x16 MovB
	var_30_int = 2; // 0x17 PushI
	var_31_bool = var_9_int >= var_30_int; // 0x18 GE
	if(var_31_bool == 0) goto Label_30; // 0x19 JumpB
	var_32_int = 2; // 0x1a PushI
	var_33_bool = var_10_int > var_32_int; // 0x1b GT
	if(var_33_bool == 0) goto Label_30; // 0x1c JumpB
	var_29_bool = 1; // 0x1d MovB
	
Label_30:
	if(var_29_bool == 0) goto Label_37; // 0x1e JumpB
	var_34_object = Obj(); // 0x1f PushV
	func_119(var_34_object); // 0x20 NEW_2
	RemoveActor(var_34_object); // 0x22 Func
	return 12; // 0x24 Return
	
Label_37:
	var_37_bool = var_8_object == 0; // 0x25 NullEq
	if(var_37_bool == 0) goto Label_40; // 0x26 JumpB
	return 12; // 0x27 Return
	
Label_40:
	var_38_cvector = CVector(0,0,0); var_39_object = Obj(); // 0x28 PushV
	var_39_object = var_8_object; // 0x29 Mov
	func_107(var_39_object); // 0x2a NEW_2
	var_11_cvector = var_38_cvector; // 0x2b Mov
	var_42_float = GetByIndex(var_12_cvector, 0); // 0x2d PushE
	var_42_float = 17738; // 0x2e MovI
	SetByIndex(var_12_cvector, 0) = var_42_float; // 0x2f PopE
	var_43_float = GetByIndex(var_12_cvector, 1); // 0x30 PushE
	var_43_float = 705; // 0x31 MovI
	SetByIndex(var_12_cvector, 1) = var_43_float; // 0x32 PopE
	var_44_float = GetByIndex(var_12_cvector, 2); // 0x33 PushE
	var_44_float = 2229; // 0x34 MovI
	SetByIndex(var_12_cvector, 2) = var_44_float; // 0x35 PopE
	var_13_int = 0; // 0x36 MovI
	var_45_string = "d1GhostCatHDPathologic"; // 0x37 PushS
	GetVariable(var_45_string, var_13_int); // 0x38 Func
	var_46_bool = 0; // 0x3a PushV
	var_46_bool = 0; // 0x3b MovB
	var_47_int = 0; // 0x3c PushI
	var_48_bool = var_13_int != var_47_int; // 0x3d Neq
	if(var_48_bool == 0) goto Label_88; // 0x3e JumpB
	var_49_bool = 0; // 0x3f PushV
	var_49_bool = 1; // 0x40 MovB
	var_50_bool = 0; // 0x41 PushV
	var_50_bool = 0; // 0x42 MovB
	var_51_int = 1; // 0x43 PushI
	var_52_bool = var_9_int == var_51_int; // 0x44 Eq
	if(var_52_bool == 0) goto Label_74; // 0x45 JumpB
	var_53_int = 21; // 0x46 PushI
	var_54_bool = var_10_int >= var_53_int; // 0x47 GE
	if(var_54_bool == 0) goto Label_74; // 0x48 JumpB
	var_50_bool = 1; // 0x49 MovB
	
Label_74:
	if(var_50_bool == 0) goto Label_86; // 0x4a JumpB
	var_55_bool = 0; // 0x4b PushV
	var_55_bool = 0; // 0x4c MovB
	var_56_int = 2; // 0x4d PushI
	var_57_bool = var_9_int == var_56_int; // 0x4e Eq
	if(var_57_bool == 0) goto Label_84; // 0x4f JumpB
	var_58_int = 2; // 0x50 PushI
	var_59_bool = var_10_int <= var_58_int; // 0x51 LE
	if(var_59_bool == 0) goto Label_84; // 0x52 JumpB
	var_55_bool = 1; // 0x53 MovB
	
Label_84:
	if(var_55_bool == 0) goto Label_86; // 0x54 JumpB
	var_49_bool = 0; // 0x55 MovB
	
Label_86:
	if(var_49_bool == 0) goto Label_88; // 0x56 JumpB
	var_46_bool = 1; // 0x57 MovB
	
Label_88:
	if(var_46_bool == 0) goto Label_105; // 0x58 JumpB
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x59 PushV
	var_61_cvector = var_11_cvector; // 0x5a Mov
	var_62_cvector = var_12_cvector; // 0x5b Mov
	func_125(var_60_float, var_61_cvector, var_62_cvector); // 0x5c NEW_2
	var_66_int = 500; // 0x5e PushI
	var_67_bool = var_60_float < var_66_int; // 0x5f LT
	if(var_67_bool == 0) goto Label_105; // 0x60 JumpB
	var_68_string = "ACHIEVEMENT_NOTICE"; // 0x61 PushS
	UnlockAchievement(var_68_string); // 0x62 Func
	var_69_object = Obj(); // 0x64 PushV
	func_119(var_69_object); // 0x65 NEW_2
	RemoveActor(var_69_object); // 0x67 Func
	
Label_105:
	return 12; // 0x69 Return
}


main(var_0_object)
{
	var_1_int = 111; // 0x0 PushI
	var_2_int = 1; // 0x1 PushI
	SetTimer(var_1_int, var_2_int); // 0x2 Func
	
Label_4:
	Hold(); // 0x4 Func
	goto Label_4; // 0x6 Jump
}


func_130(var_18_int)
{
	var_19_float = 0; var_20_float = 0; // 0x82 PushV
	GetGameTime(var_20_float); // 0x83 Func
	var_21_int = 1; // 0x85 PushI
	var_22_int = 0; // 0x86 PushV
	var_23_int = 24; // 0x87 PushI
	var_22_int = var_20_float / var_20_float; // 0x88 Div2
	var_18_int = var_21_int + var_22_int; // 0x89 Add2
	return 2; // 0x8a Return
}


func_107(var_38_cvector)
{
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x6b PushV
	GetPosition(var_41_cvector); // 0x6c ObjFunc
	var_38_cvector = var_41_cvector; // 0x6e Mov
	return 2; // 0x6f Return
}


func_139(var_24_int)
{
	var_25_float = 0; var_26_float = 0; // 0x8b PushV
	GetGameTime(var_26_float); // 0x8c Func
	var_27_int = 0; // 0x8e PushV
	var_27_int = var_26_float; // 0x8f Mov
	var_28_int = 24; // 0x90 PushI
	var_24_int = var_27_int % var_28_int; // 0x91 Mod2
	return 2; // 0x92 Return
}


func_112(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x70 PushV
	var_17_string = "player"; // 0x71 PushS
	FindActor(var_16_object, var_17_string); // 0x72 Func
	var_14_object = var_16_object; // 0x74 Mov
	return 2; // 0x75 Return
}


func_119(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x77 PushV
	self(var_36_object); // 0x78 Func
	var_34_object = var_36_object; // 0x7a Mov
	return 2; // 0x7b Return
}


func_125(var_60_float, var_61_cvector, var_62_cvector)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x7d PushV
	var_64_cvector = var_62_cvector - var_61_cvector; // 0x7e Sub2
	var_65_int = var_64_cvector | var_64_cvector; // 0x7f Or
	var_60_float = sqrt(var_65_int); // 0x80 Sqrt2
	return 2; // 0x81 Return
}


