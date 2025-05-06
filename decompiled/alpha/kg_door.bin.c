task_0_event_0(var_0_object)
{
	var_1_bool = 0; // 0x1 PushV
	func_120(var_1_bool); // 0x2 Call
	if(var_1_bool == 0) goto Label_21; // 0x4 JumpB
	var_6_bool = 0; var_7_object = Obj(); var_8_string = ""; var_9_bool = 0; // 0x5 PushV
	var_7_object = var_0_object; // 0x6 Mov
	var_10_string = ""; // 0x7 PushV
	func_132(var_10_string); // 0x8 Call
	var_8_string = var_10_string; // 0x9 Mov
	var_9_bool = 1; // 0xb MovB
	func_157(var_8_string, var_9_bool); // 0xc Call
	if(var_6_bool == 0) goto Label_20; // 0xe JumpB
	var_60_bool = 0; // 0xf PushV
	var_60_bool = 0; // 0x10 MovB
	func_127(var_60_bool); // 0x11 Call
	goto Label_21; // 0x13 Jump
	
Label_21:
	var_62_object = Obj(); // 0x15 PushV
	var_62_object = var_0_object; // 0x16 Mov
	func_33(var_62_object); // 0x17 Call
	return 0; // 0x19 Return
	
Label_20:
	return 0; // 0x14 Return
}


main()
{
	var_0_bool = 1; // 0x1a PushB
	SetVisibility(var_0_bool); // 0x1b Func
	
Label_29:
	Hold(); // 0x1d Func
	goto Label_29; // 0x1f Jump
}


func_33(var_62_object)
{
	var_63_string = ""; var_64_int = 0; var_65_string = ""; var_66_string = ""; var_67_object = Obj(); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_string = ""; var_72_int = 0; var_73_string = ""; var_74_string = ""; var_75_object = Obj(); var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x21 PushV
	var_79_bool = 0; // 0x22 PushV
	func_120(var_79_bool); // 0x23 Call
	if(var_79_bool == 0) goto Label_45; // 0x25 JumpB
	var_80_string = "door_closed"; // 0x26 PushS
	PlaySound(var_80_string); // 0x27 Func
	var_81_string = "Door is locked"; // 0x29 PushS
	Trace(var_81_string); // 0x2a Func
	return 16; // 0x2c Return
	
Label_45:
	GetActorName(var_71_string); // 0x2d Func
	var_82_int = 0; var_83_string = ""; var_84_string = ""; // 0x2f PushV
	var_83_string = var_71_string; // 0x30 Mov
	var_84_string = "@"; // 0x31 MovS
	func_105(var_82_int, var_83_string, var_84_string); // 0x32 Call
	var_72_int = var_82_int; // 0x33 Mov
	var_85_int = -1; // 0x35 PushI
	var_86_bool = var_72_int == var_85_int; // 0x36 Eq
	if(var_86_bool == 0) goto Label_60; // 0x37 JumpB
	var_87_string = "Wrong door name"; // 0x38 PushS
	Trace(var_87_string); // 0x39 Func
	return 16; // 0x3b Return
	
Label_60:
	var_88_string = ""; var_89_string = ""; var_90_int = 0; var_91_int = 0; // 0x3c PushV
	var_89_string = var_71_string; // 0x3d Mov
	var_90_int = 0; // 0x3e MovI
	var_91_int = var_72_int; // 0x3f Mov
	func_115(var_88_string, var_89_string, var_90_int, var_91_int); // 0x40 Call
	var_73_string = var_88_string; // 0x41 Mov
	var_92_string = "pt_"; // 0x43 PushS
	var_93_string = ""; var_94_string = ""; var_95_int = 0; // 0x44 PushV
	var_94_string = var_71_string; // 0x45 Mov
	var_96_int = 1; // 0x46 PushI
	var_95_int = var_72_int + var_96_int; // 0x47 Add2
	func_110(var_93_string, var_94_string, var_95_int); // 0x48 Call
	var_74_string = var_92_string + var_93_string; // 0x4a Add2
	GetSceneByName(var_75_object, var_73_string); // 0x4b Func
	var_99_bool = var_75_object == 0; // 0x4d NullEq
	if(var_99_bool == 0) goto Label_86; // 0x4e JumpB
	var_100_string = "Destination scene '"; // 0x4f PushS
	var_101_int = var_100_string + var_73_string; // 0x50 Add
	var_102_string = "' not found"; // 0x51 PushS
	var_103_int = var_101_int + var_102_string; // 0x52 Add
	Trace(var_103_int); // 0x53 Func
	return 16; // 0x55 Return
	
Label_86:
	GetLocator(var_74_string, var_76_bool, var_77_cvector, var_78_cvector); // 0x56 ObjFunc
	var_104_bool = var_76_bool; // 0x58 Push
	if(var_104_bool == 0) goto Label_96; // 0x59 JumpB
	var_105_string = "door_open"; // 0x5a PushS
	PlaySharedSound(var_105_string); // 0x5b Func
	Teleport(var_62_object, var_75_object, var_77_cvector, var_78_cvector); // 0x5d Func
	goto Label_103; // 0x5f Jump
	
Label_103:
	return 16; // 0x67 Return
	
Label_96:
	var_106_string = "Locator "; // 0x60 PushS
	var_107_int = var_106_string + var_74_string; // 0x61 Add
	var_108_string = " not found in destination scene "; // 0x62 PushS
	var_109_int = var_107_int + var_108_string; // 0x63 Add
	var_110_int = var_109_int + var_73_string; // 0x64 Add
	Trace(var_110_int); // 0x65 Func
}


func_132(var_10_string)
{
	var_11_string = ""; var_12_int = 0; var_13_string = ""; var_14_int = 0; // 0x84 PushV
	GetActorName(var_13_string); // 0x85 Func
	var_15_int = 0; var_16_string = ""; var_17_string = ""; // 0x87 PushV
	var_16_string = var_13_string; // 0x88 Mov
	var_17_string = "@"; // 0x89 MovS
	func_105(var_15_int, var_16_string, var_17_string); // 0x8a Call
	var_14_int = var_15_int; // 0x8b Mov
	var_20_int = -1; // 0x8d PushI
	var_21_bool = var_14_int == var_20_int; // 0x8e Eq
	if(var_21_bool == 0) goto Label_149; // 0x8f JumpB
	var_22_string = "Wrong door name"; // 0x90 PushS
	Trace(var_22_string); // 0x91 Func
	var_10_string = ""; // 0x93 MovS
	return 4; // 0x94 Return
	
Label_149:
	var_23_string = ""; var_24_string = ""; var_25_int = 0; var_26_int = 0; // 0x95 PushV
	var_24_string = var_13_string; // 0x96 Mov
	var_25_int = 0; // 0x97 MovI
	var_26_int = var_14_int; // 0x98 Mov
	func_115(var_23_string, var_24_string, var_25_int, var_26_int); // 0x99 Call
	var_10_string = var_23_string; // 0x9a Mov
	return 4; // 0x9c Return
}


func_105(var_15_int, var_16_string, var_17_string)
{
	var_18_int = 0; var_19_int = 0; // 0x69 PushV
	_strchr(var_19_int, var_16_string, var_17_string); // 0x6a Func
	var_15_int = var_19_int; // 0x6c Mov
	return 2; // 0x6d Return
}


func_110(var_93_string, var_94_string, var_95_int)
{
	var_97_string = ""; var_98_string = ""; // 0x6e PushV
	_strsub(var_98_string, var_94_string, var_95_int); // 0x6f Func
	var_93_string = var_98_string; // 0x71 Mov
	return 2; // 0x72 Return
}


func_115(var_23_string, var_24_string, var_25_int, var_26_int)
{
	var_27_string = ""; var_28_string = ""; // 0x73 PushV
	_strsub(var_28_string, var_24_string, var_25_int, var_26_int); // 0x74 Func
	var_23_string = var_28_string; // 0x76 Mov
	return 2; // 0x77 Return
}


func_120(var_1_bool)
{
	var_2_int = 0; var_3_int = 0; // 0x78 PushV
	var_4_string = "locked"; // 0x79 PushS
	GetProperty(var_4_string, var_3_int); // 0x7a Func
	var_5_int = 0; // 0x7c PushI
	var_1_bool = var_3_int != var_5_int; // 0x7d Neq2
	return 2; // 0x7e Return
}


func_157(var_6_bool, var_8_string)
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_string = ""; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_object = Obj(); var_44_int = 0; var_45_bool = 0; var_46_string = ""; // 0x9d PushV
	var_47_string = "uni_key"; // 0x9e PushS
	GetInvItemByName(var_38_int, var_47_string); // 0x9f Func
	GetSubContainerCount(var_39_int); // 0xa1 ObjFunc
	var_40_int = 0; // 0xa3 MovI
	
Label_164:
	var_48_bool = var_40_int < var_39_int; // 0xa4 LT
	if(var_48_bool == 0) goto Label_203; // 0xa5 JumpB
	GetItemCount(var_41_int, var_40_int); // 0xa6 ObjFunc
	var_42_int = 0; // 0xa8 MovI
	
Label_169:
	var_49_bool = var_42_int < var_41_int; // 0xa9 LT
	if(var_49_bool == 0) goto Label_200; // 0xaa JumpB
	GetItem(var_43_object, var_42_int, var_40_int); // 0xab ObjFunc
	GetItemID(var_44_int); // 0xad ObjFunc
	var_50_bool = var_44_int == var_38_int; // 0xaf Eq
	if(var_50_bool == 0) goto Label_196; // 0xb0 JumpB
	var_51_string = "key_scene_name"; // 0xb1 PushS
	HasProperty(var_45_bool, var_51_string); // 0xb2 ObjFunc
	var_52_bool = var_45_bool; // 0xb4 Push
	if(var_52_bool == 0) goto Label_196; // 0xb5 JumpB
	var_53_string = "key_scene_name"; // 0xb6 PushS
	GetProperty(var_46_string, var_53_string); // 0xb7 ObjFunc
	var_54_string = " "; // 0xb9 PushS
	var_55_int = var_8_string + var_54_string; // 0xba Add
	var_56_int = var_55_int + var_46_string; // 0xbb Add
	Trace(var_56_int); // 0xbc Func
	var_57_bool = var_46_string == var_8_string; // 0xbe Eq
	if(var_57_bool == 0) goto Label_196; // 0xbf JumpB
	RemoveItem(var_42_int, var_40_int); // 0xc0 ObjFunc
	var_6_bool = 1; // 0xc2 MovB
	return 18; // 0xc3 Return
	
Label_196:
	var_43_object = 0; // 0xc4 SetNull
	var_58_int = 1; // 0xc5 PushI
	var_42_int = var_42_int + var_58_int; // 0xc6 Add2
	goto Label_169; // 0xc7 Jump
	
Label_200:
	var_59_int = 1; // 0xc8 PushI
	var_40_int = var_40_int + var_59_int; // 0xc9 Add2
	goto Label_164; // 0xca Jump
	
Label_203:
	var_6_bool = 0; // 0xcb MovB
	return 18; // 0xcc Return
}


func_127(var_60_bool)
{
	var_61_string = "locked"; // 0x80 PushS
	SetProperty(var_61_string, var_60_bool); // 0x81 Func
	return 0; // 0x83 Return
}


