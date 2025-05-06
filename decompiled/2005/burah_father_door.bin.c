task_0_event_0(var_0_object)
{
	var_1_bool = 0; // 0x1 PushV
	func_115(var_1_bool); // 0x2 NEW_2
	if(var_1_bool == 0) goto Label_16; // 0x4 JumpB
	var_6_bool = 0; var_7_object = Obj(); var_8_string = ""; var_9_bool = 0; // 0x5 PushV
	var_7_object = var_0_object; // 0x6 Mov
	var_8_string = "burah_father_key"; // 0x7 MovS
	var_9_bool = 1; // 0x8 MovB
	func_127(var_7_object, var_8_string, var_9_bool); // 0x9 NEW_2
	if(var_6_bool == 0) goto Label_16; // 0xb JumpB
	var_31_bool = 0; // 0xc PushV
	var_31_bool = 0; // 0xd MovB
	func_122(var_31_bool); // 0xe NEW_2
	
Label_16:
	var_33_object = Obj(); // 0x10 PushV
	var_33_object = var_0_object; // 0x11 Mov
	func_28(var_33_object); // 0x12 NEW_2
	return 0; // 0x14 Return
}


main()
{
	var_0_bool = 1; // 0x15 PushB
	SetVisibility(var_0_bool); // 0x16 Func
	
Label_24:
	Hold(); // 0x18 Func
	goto Label_24; // 0x1a Jump
}


func_100(var_53_int, var_54_string, var_55_string)
{
	var_56_int = 0; var_57_int = 0; // 0x64 PushV
	_strchr(var_57_int, var_54_string, var_55_string); // 0x65 Func
	var_53_int = var_57_int; // 0x67 Mov
	return 2; // 0x68 Return
}


func_105(var_68_string, var_69_string, var_70_int)
{
	var_72_string = ""; var_73_string = ""; // 0x69 PushV
	_strsub(var_73_string, var_69_string, var_70_int); // 0x6a Func
	var_68_string = var_73_string; // 0x6c Mov
	return 2; // 0x6d Return
}


func_110(var_61_string, var_62_string, var_63_int, var_64_int)
{
	var_65_string = ""; var_66_string = ""; // 0x6e PushV
	_strsub(var_66_string, var_62_string, var_63_int, var_64_int); // 0x6f Func
	var_61_string = var_66_string; // 0x71 Mov
	return 2; // 0x72 Return
}


func_115(var_1_bool)
{
	var_2_int = 0; var_3_int = 0; // 0x73 PushV
	var_4_string = "locked"; // 0x74 PushS
	GetProperty(var_4_string, var_3_int); // 0x75 Func
	var_5_int = 0; // 0x77 PushI
	var_1_bool = var_3_int != var_5_int; // 0x78 Neq2
	return 2; // 0x79 Return
}


func_122(var_31_bool)
{
	var_32_string = "locked"; // 0x7b PushS
	SetProperty(var_32_string, var_31_bool); // 0x7c Func
	return 0; // 0x7e Return
}


func_28(var_33_object)
{
	var_34_string = ""; var_35_int = 0; var_36_string = ""; var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_int = 0; var_44_string = ""; var_45_string = ""; var_46_object = Obj(); var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x1c PushV
	var_50_bool = 0; // 0x1d PushV
	func_115(var_50_bool); // 0x1e NEW_2
	if(var_50_bool == 0) goto Label_40; // 0x20 JumpB
	var_51_string = "door_closed"; // 0x21 PushS
	PlaySound(var_51_string); // 0x22 Func
	var_52_string = "Door is locked"; // 0x24 PushS
	Trace(var_52_string); // 0x25 Func
	return 16; // 0x27 Return
	
Label_40:
	GetActorName(var_42_string); // 0x28 Func
	var_53_int = 0; var_54_string = ""; var_55_string = ""; // 0x2a PushV
	var_54_string = var_42_string; // 0x2b Mov
	var_55_string = "@"; // 0x2c MovS
	func_100(var_53_int, var_54_string, var_55_string); // 0x2d NEW_2
	var_43_int = var_53_int; // 0x2e Mov
	var_58_int = -1; // 0x30 PushI
	var_59_bool = var_43_int == var_58_int; // 0x31 Eq
	if(var_59_bool == 0) goto Label_55; // 0x32 JumpB
	var_60_string = "Wrong door name"; // 0x33 PushS
	Trace(var_60_string); // 0x34 Func
	return 16; // 0x36 Return
	
Label_55:
	var_61_string = ""; var_62_string = ""; var_63_int = 0; var_64_int = 0; // 0x37 PushV
	var_62_string = var_42_string; // 0x38 Mov
	var_63_int = 0; // 0x39 MovI
	var_64_int = var_43_int; // 0x3a Mov
	func_110(var_61_string, var_62_string, var_63_int, var_64_int); // 0x3b NEW_2
	var_44_string = var_61_string; // 0x3c Mov
	var_67_string = "pt_"; // 0x3e PushS
	var_68_string = ""; var_69_string = ""; var_70_int = 0; // 0x3f PushV
	var_69_string = var_42_string; // 0x40 Mov
	var_71_int = 1; // 0x41 PushI
	var_70_int = var_43_int + var_71_int; // 0x42 Add2
	func_105(var_68_string, var_69_string, var_70_int); // 0x43 NEW_2
	var_45_string = var_67_string + var_68_string; // 0x45 Add2
	GetSceneByName(var_46_object, var_44_string); // 0x46 Func
	var_74_bool = var_46_object == 0; // 0x48 NullEq
	if(var_74_bool == 0) goto Label_81; // 0x49 JumpB
	var_75_string = "Destination scene '"; // 0x4a PushS
	var_76_int = var_75_string + var_44_string; // 0x4b Add
	var_77_string = "' not found"; // 0x4c PushS
	var_78_int = var_76_int + var_77_string; // 0x4d Add
	Trace(var_78_int); // 0x4e Func
	return 16; // 0x50 Return
	
Label_81:
	GetLocator(var_45_string, var_47_bool, var_48_cvector, var_49_cvector); // 0x51 ObjFunc
	var_79_bool = var_47_bool; // 0x53 Push
	if(var_79_bool == 0) goto Label_91; // 0x54 JumpB
	var_80_string = "door_open"; // 0x55 PushS
	PlaySharedSound(var_80_string); // 0x56 Func
	Teleport(var_33_object, var_46_object, var_48_cvector, var_49_cvector); // 0x58 Func
	goto Label_98; // 0x5a Jump
	
Label_98:
	return 16; // 0x62 Return
	
Label_91:
	var_81_string = "Locator "; // 0x5b PushS
	var_82_int = var_81_string + var_45_string; // 0x5c Add
	var_83_string = " not found in destination scene "; // 0x5d PushS
	var_84_int = var_82_int + var_83_string; // 0x5e Add
	var_85_int = var_84_int + var_44_string; // 0x5f Add
	Trace(var_85_int); // 0x60 Func
}


func_127(var_6_bool, var_8_string, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_object = Obj(); var_23_int = 0; // 0x7f PushV
	GetInvItemByName(var_17_int, var_8_string); // 0x80 Func
	GetSubContainerCount(var_18_int); // 0x82 ObjFunc
	var_19_int = 0; // 0x84 MovI
	
Label_133:
	var_24_bool = var_19_int < var_18_int; // 0x85 LT
	if(var_24_bool == 0) goto Label_160; // 0x86 JumpB
	GetItemCount(var_20_int, var_19_int); // 0x87 ObjFunc
	var_21_int = 0; // 0x89 MovI
	
Label_138:
	var_25_bool = var_21_int < var_20_int; // 0x8a LT
	if(var_25_bool == 0) goto Label_157; // 0x8b JumpB
	GetItem(var_22_object, var_21_int, var_19_int); // 0x8c ObjFunc
	GetItemID(var_23_int); // 0x8e ObjFunc
	var_26_bool = var_23_int == var_17_int; // 0x90 Eq
	if(var_26_bool == 0) goto Label_153; // 0x91 JumpB
	var_27_bool = var_9_bool; // 0x92 Push
	if(var_27_bool == 0) goto Label_151; // 0x93 JumpB
	var_28_int = 1; // 0x94 PushI
	RemoveItem(var_21_int, var_28_int, var_19_int); // 0x95 ObjFunc
	
Label_151:
	var_6_bool = 1; // 0x97 MovB
	return 14; // 0x98 Return
	
Label_153:
	var_22_object = 0; // 0x99 SetNull
	var_29_int = 1; // 0x9a PushI
	var_21_int = var_21_int + var_29_int; // 0x9b Add2
	goto Label_138; // 0x9c Jump
	
Label_157:
	var_30_int = 1; // 0x9d PushI
	var_19_int = var_19_int + var_30_int; // 0x9e Add2
	goto Label_133; // 0x9f Jump
	
Label_160:
	var_6_bool = 0; // 0xa0 MovB
	return 14; // 0xa1 Return
}


