task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x16 PushV
	var_4_string = "cleanup"; // 0x17 PushS
	var_5_bool = var_1_string == var_4_string; // 0x18 Eq
	if(var_5_bool == 0) goto Label_36; // 0x19 JumpB
	var_0_bool = 1; // 0x1a TMovB
	IsLoaded(var_3_bool); // 0x1b Func
	var_6_bool = var_3_bool == 0; // 0x1d Not
	if(var_6_bool == 0) goto Label_36; // 0x1e JumpB
	var_7_object = Obj(); // 0x1f PushV
	func_164(var_7_object); // 0x20 NEW_2
	RemoveActor(var_7_object); // 0x22 Func
	
Label_36:
	return 2; // 0x24 Return
}


task_0_event_6(var_0_bool)
{
	func_14(); // 0x26 NEW_2
	return 0; // 0x28 Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x35 PushV
	var_6_bool = 0; var_7_object = Obj(); // 0x36 PushV
	var_7_object = var_1_object; // 0x37 Mov
	func_140(var_6_bool, var_7_object); // 0x38 NEW_2
	var_40_bool = var_6_bool == 0; // 0x3a Not
	if(var_40_bool == 0) goto Label_61; // 0x3b JumpB
	return 4; // 0x3c Return
	
Label_61:
	var_41_int = 0; // 0x3d PushI
	GetItem(var_4_object, var_41_int); // 0x3e Func
	var_42_int = 0; // 0x40 PushI
	GetItemAmount(var_5_int, var_42_int); // 0x41 Func
	var_43_bool = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x43 PushV
	var_44_object = var_1_object; // 0x44 Mov
	var_45_object = var_4_object; // 0x45 Mov
	var_46_int = var_5_int; // 0x46 Mov
	func_182(var_44_object, var_45_object, var_46_int); // 0x47 NEW_2
	if(var_43_bool == 0) goto Label_78; // 0x49 JumpB
	var_60_object = Obj(); // 0x4a PushV
	var_60_object = var_1_object; // 0x4b Mov
	func_0(var_60_object); // 0x4c NEW_2
	
Label_78:
	return 4; // 0x4e Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x9 TMovB
	func_41(); // 0xb NEW_2
	return 0; // 0xd Return
}


func_0(var_60_object)
{
	func_199(); // 0x2 NEW_2
	var_84_object = Obj(); // 0x4 PushV
	var_84_object = var_60_object; // 0x5 Mov
	func_80(); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_225(var_66_bool, var_67_object, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_int = 0; var_72_object = Obj(); var_73_object = Obj(); var_74_int = 0; // 0xe1 PushV
	var_75_object = Obj(); // 0xe2 PushV
	func_212(var_75_object); // 0xe3 NEW_2
	var_72_object = var_75_object; // 0xe4 Mov
	Find(var_68_int, var_73_object); // 0xe6 ObjFunc
	var_80_bool = var_73_object == 0; // 0xe8 Not
	if(var_80_bool == 0) goto Label_240; // 0xe9 JumpB
	var_81_string = "Can't find diary parent with id: "; // 0xea PushS
	var_82_int = var_81_string + var_68_int; // 0xeb Add
	Trace(var_82_int); // 0xec Func
	var_66_bool = 0; // 0xee MovB
	return 6; // 0xef Return
	
Label_240:
	AddChild(var_67_object); // 0xf0 ObjFunc
	var_83_int = 7; // 0xf2 PushI
	SendWorldWndMessage(var_83_int); // 0xf3 Func
	GetCategory(var_74_int); // 0xf5 ObjFunc
	SetDiarySection(var_74_int); // 0xf7 Func
	var_66_bool = 0; // 0xf9 MovB
	return 6; // 0xfa Return
}


func_99(var_21_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x63 PushV
	IsDead(var_24_bool); // 0x64 ObjFunc
	var_21_bool = var_24_bool; // 0x66 Mov
	return 2; // 0x67 Return
}


func_164(var_85_object)
{
	var_86_object = Obj(); var_87_object = Obj(); // 0xa4 PushV
	self(var_87_object); // 0xa5 Func
	var_85_object = var_87_object; // 0xa7 Mov
	return 2; // 0xa8 Return
}


func_199()
{
	var_61_object = Obj(); var_62_object = Obj(); // 0xc7 PushV
	var_63_int = 45; // 0xc8 PushI
	var_64_int = 2; // 0xc9 PushI
	var_65_int = 512127; // 0xca PushI
	CreateDiaryEntry(var_62_object, var_63_int, var_64_int, var_65_int); // 0xcb Func
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0; // 0xcd PushV
	var_67_object = var_62_object; // 0xce Mov
	var_68_int = 43; // 0xcf MovI
	func_225(var_66_bool, var_67_object, var_68_int); // 0xd0 NEW_2
	return 2; // 0xd2 Return
}


func_104(var_10_bool, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0x68 PushV
	var_16_bool = var_11_object == 0; // 0x69 NullEq
	if(var_16_bool == 0) goto Label_109; // 0x6a JumpB
	var_10_bool = 0; // 0x6b MovB
	return 4; // 0x6c Return
	
Label_109:
	var_17_bool = 0; // 0x6d PushV
	var_17_bool = 0; // 0x6e MovB
	var_18_string = "IsDead"; // 0x6f PushS
	var_19_int = 1; // 0x70 PushI
	var_20_bool = IsFuncExist(var_11_object, var_18_string, var_19_int); // 0x71 FuncExist
	if(var_20_bool == 0) goto Label_121; // 0x72 JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x73 PushV
	var_22_object = var_11_object; // 0x74 Mov
	func_99(var_22_object); // 0x75 NEW_2
	if(var_21_bool == 0) goto Label_121; // 0x77 JumpB
	var_17_bool = 1; // 0x78 MovB
	
Label_121:
	if(var_17_bool == 0) goto Label_124; // 0x79 JumpB
	var_10_bool = 0; // 0x7a MovB
	return 4; // 0x7b Return
	
Label_124:
	GetScene(var_14_object); // 0x7c Func
	var_25_bool = var_14_object == 0; // 0x7e NullEq
	if(var_25_bool == 0) goto Label_130; // 0x7f JumpB
	var_10_bool = 0; // 0x80 MovB
	return 4; // 0x81 Return
	
Label_130:
	GetScene(var_15_object); // 0x82 ObjFunc
	var_26_bool = var_14_object != var_15_object; // 0x84 Neq
	if(var_26_bool == 0) goto Label_136; // 0x85 JumpB
	var_10_bool = 0; // 0x86 MovB
	return 4; // 0x87 Return
	
Label_136:
	var_10_bool = 1; // 0x88 MovB
	return 4; // 0x89 Return
}


func_41()
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x29 PushV
	var_3_string = "object"; // 0x2a PushS
	FindGeometry(var_3_string, var_2_object); // 0x2b Func
	var_4_bool = 1; // 0x2d PushB
	Enable(var_4_bool); // 0x2e ObjFunc
	
Label_48:
	Hold(); // 0x30 Func
	goto Label_48; // 0x32 Jump
}


func_170(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xaa PushV
	CreateIntVector(var_58_object); // 0xab Func
	add(var_55_int); // 0xad ObjFunc
	add(var_56_int); // 0xaf ObjFunc
	var_59_int = 3; // 0xb1 PushI
	SendWorldWndMessage(var_59_int, var_58_object); // 0xb2 Func
	return 2; // 0xb4 Return
}


func_140(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x8c PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x8d PushV
	var_11_object = var_7_object; // 0x8e Mov
	func_104(var_10_bool, var_11_object); // 0x8f NEW_2
	var_27_bool = var_10_bool == 0; // 0x91 Not
	if(var_27_bool == 0) goto Label_149; // 0x92 JumpB
	var_6_bool = 0; // 0x93 MovB
	return 2; // 0x94 Return
	
Label_149:
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0x95 PushV
	var_29_object = var_7_object; // 0x96 Mov
	var_30_string = "noaccess"; // 0x97 MovS
	func_87(var_28_bool, var_29_object, var_30_string); // 0x98 NEW_2
	var_37_bool = var_28_bool == 0; // 0x9a Not
	if(var_37_bool == 0) goto Label_158; // 0x9b JumpB
	var_6_bool = 1; // 0x9c MovB
	return 2; // 0x9d Return
	
Label_158:
	var_38_string = "noaccess"; // 0x9e PushS
	GetProperty(var_38_string, var_9_int); // 0x9f ObjFunc
	var_39_int = 0; // 0xa1 PushI
	var_6_bool = var_9_int == var_39_int; // 0xa2 Eq2
	return 2; // 0xa3 Return
}


func_14()
{
	var_1_bool = var_0_bool; // 0xe PushT
	if(var_1_bool == 0) goto Label_21; // 0xf JumpB
	var_2_object = Obj(); // 0x10 PushV
	func_164(var_2_object); // 0x11 NEW_2
	RemoveActor(var_2_object); // 0x13 Func
	
Label_21:
	return 0; // 0x15 Return
}


func_80()
{
	var_85_object = Obj(); // 0x51 PushV
	func_164(var_85_object); // 0x52 NEW_2
	RemoveActor(var_85_object); // 0x54 Func
	return 0; // 0x56 Return
}


func_212(var_75_object)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0xd4 PushV
	GetDiaryRoot(var_77_object); // 0xd5 Func
	var_78_bool = var_77_object == 0; // 0xd7 Not
	if(var_78_bool == 0) goto Label_222; // 0xd8 JumpB
	var_79_string = "Can't retrieve diary root"; // 0xd9 PushS
	Trace(var_79_string); // 0xda Func
	var_75_object = 0; // 0xdc MovB
	return 2; // 0xdd Return
	
Label_222:
	var_75_object = var_77_object; // 0xde Mov
	return 2; // 0xdf Return
}


func_182(var_43_bool, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0xb6 PushV
	GetItemID(var_50_int); // 0xb7 ObjFunc
	var_53_string = "Category"; // 0xb9 PushS
	GetInvItemProperty(var_51_int, var_50_int, var_53_string); // 0xba Func
	AddItem(var_52_bool, var_45_object, var_51_int, var_46_int); // 0xbc ObjFunc
	var_54_bool = var_52_bool; // 0xbe Push
	if(var_54_bool == 0) goto Label_197; // 0xbf JumpB
	var_55_int = 0; var_56_int = 0; // 0xc0 PushV
	var_55_int = var_50_int; // 0xc1 Mov
	var_56_int = var_46_int; // 0xc2 Mov
	func_170(var_55_int, var_56_int); // 0xc3 NEW_2
	
Label_197:
	var_43_bool = var_52_bool; // 0xc5 Mov
	return 6; // 0xc6 Return
}


func_87(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0x57 PushV
	var_33_string = "HasProperty"; // 0x58 PushS
	var_34_int = 2; // 0x59 PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0x5a FuncExist
	var_36_bool = var_35_bool == 0; // 0x5b Not
	if(var_36_bool == 0) goto Label_95; // 0x5c JumpB
	var_28_bool = 0; // 0x5d MovB
	return 2; // 0x5e Return
	
Label_95:
	HasProperty(var_30_string, var_32_bool); // 0x5f ObjFunc
	var_28_bool = var_32_bool; // 0x61 Mov
	return 2; // 0x62 Return
}


