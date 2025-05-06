task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_string = ""; // 0x32 PushV
	var_3_object = var_1_object; // 0x33 Mov
	var_4_string = "health"; // 0x34 MovS
	func_157(var_2_bool, var_3_object, var_4_string); // 0x35 NEW_2
	if(var_2_bool == 0) goto Label_63; // 0x37 JumpB
	var_11_string = "New damage target: "; // 0x38 PushS
	var_12_int = var_11_string + var_1_object; // 0x39 Add
	Trace(var_12_int); // 0x3a Func
	var_13_object = GlobalVars[0]; // 0x3c PushGE
	add(var_1_object); // 0x3d ObjFunc
	
Label_63:
	return 0; // 0x3f Return
}


task_0_event_27(var_0_bool, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); // 0x40 PushV
	var_8_object = GlobalVars[0]; // 0x41 PushGE
	size(var_5_int); // 0x42 ObjFunc
	var_6_int = 0; // 0x44 MovI
	
Label_69:
	var_9_bool = var_6_int < var_5_int; // 0x45 LT
	if(var_9_bool == 0) goto Label_87; // 0x46 JumpB
	var_10_object = GlobalVars[0]; // 0x47 PushGE
	get(var_7_object, var_6_int); // 0x48 ObjFunc
	var_11_bool = var_7_object == var_1_object; // 0x4a Eq
	if(var_11_bool == 0) goto Label_82; // 0x4b JumpB
	var_12_object = GlobalVars[0]; // 0x4c PushGE
	remove(var_6_int); // 0x4d ObjFunc
	var_13_int = -1; // 0x4f PushI
	var_5_int = var_5_int + var_13_int; // 0x50 Add2
	goto Label_85; // 0x51 Jump
	
Label_85:
	var_7_object = 0; // 0x55 SetNull
	
Label_86:
	goto Label_69; // 0x56 Jump
	
Label_82:
	var_14_int = 1; // 0x52 PushI
	var_6_int = var_6_int + var_14_int; // 0x53 Add2
	goto Label_86; // 0x54 Jump
	
Label_87:
	var_15_string = "Removed damage target: "; // 0x57 PushS
	var_16_int = var_15_string + var_1_object; // 0x58 Add
	Trace(var_16_int); // 0x59 Func
	return 6; // 0x5b Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x5c PushV
	var_4_string = "cleanup"; // 0x5d PushS
	var_5_bool = var_1_string == var_4_string; // 0x5e Eq
	if(var_5_bool == 0) goto Label_115; // 0x5f JumpB
	var_0_bool = 1; // 0x60 TMovB
	IsLoaded(var_3_bool); // 0x61 Func
	var_6_bool = 0; // 0x63 PushV
	var_6_bool = 0; // 0x64 MovB
	var_7_bool = var_3_bool == 0; // 0x65 Not
	if(var_7_bool == 0) goto Label_108; // 0x66 JumpB
	var_8_bool = 0; // 0x67 PushV
	func_136(var_8_bool); // 0x68 NEW_2
	if(var_8_bool == 0) goto Label_108; // 0x6a JumpB
	var_6_bool = 1; // 0x6b MovB
	
Label_108:
	if(var_6_bool == 0) goto Label_114; // 0x6c JumpB
	var_9_object = Obj(); // 0x6d PushV
	func_242(var_9_object); // 0x6e NEW_2
	RemoveActor(var_9_object); // 0x70 Func
	
Label_114:
	goto Label_119; // 0x72 Jump
	
Label_119:
	return 2; // 0x77 Return
	
Label_115:
	var_12_string = "restore"; // 0x73 PushS
	var_13_bool = var_1_string == var_12_string; // 0x74 Eq
	if(var_13_bool == 0) goto Label_119; // 0x75 JumpB
	var_0_bool = 0; // 0x76 TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0; // 0x78 PushV
	var_1_bool = 0; // 0x79 MovB
	var_2_bool = var_0_bool; // 0x7a PushT
	if(var_2_bool == 0) goto Label_129; // 0x7b JumpB
	var_3_bool = 0; // 0x7c PushV
	func_136(var_3_bool); // 0x7d NEW_2
	if(var_3_bool == 0) goto Label_129; // 0x7f JumpB
	var_1_bool = 1; // 0x80 MovB
	
Label_129:
	if(var_1_bool == 0) goto Label_135; // 0x81 JumpB
	var_4_object = Obj(); // 0x82 PushV
	func_242(var_4_object); // 0x83 NEW_2
	RemoveActor(var_4_object); // 0x85 Func
	
Label_135:
	return 0; // 0x87 Return
}


main(var_0_bool)
{
	var_1_int = 0; var_2_int = 0; var_3_object = Obj(); var_4_float = 0; var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_float = 0; // 0x0 PushV
	var_9_object = GlobalVars[0]; // 0x1 PushGE
	var_10_object = Obj(); // 0x2 PushV
	func_266(var_10_object); // 0x3 NEW_2
	var_9_object = var_10_object; // 0x4 Mov
	GlobalVars[0] = var_9_object; // 0x6 PopGE
	
Label_7:
	var_13_int = 1; // 0x7 PushI
	Sleep(var_13_int); // 0x8 Func
	var_14_object = GlobalVars[0]; // 0xa PushGE
	size(var_5_int); // 0xb ObjFunc
	var_6_int = 0; // 0xd MovI
	
Label_14:
	var_15_bool = var_6_int < var_5_int; // 0xe LT
	if(var_15_bool == 0) goto Label_47; // 0xf JumpB
	var_16_object = GlobalVars[0]; // 0x10 PushGE
	get(var_7_object, var_6_int); // 0x11 ObjFunc
	var_17_bool = var_7_object == 0; // 0x13 Not
	if(var_17_bool == 0) goto Label_25; // 0x14 JumpB
	var_18_object = GlobalVars[0]; // 0x15 PushGE
	remove(var_6_int); // 0x16 ObjFunc
	goto Label_45; // 0x18 Jump
	
Label_45:
	var_7_object = 0; // 0x2d SetNull
	goto Label_14; // 0x2e Jump
	
Label_25:
	var_19_string = "Damaging: "; // 0x19 PushS
	var_20_int = var_19_string + var_7_object; // 0x1a Add
	Trace(var_20_int); // 0x1b Func
	var_21_float = 0; var_22_object = Obj(); var_23_float = 0; var_24_int = 0; // 0x1d PushV
	var_22_object = var_7_object; // 0x1e Mov
	var_23_float = 0.8; // 0x1f MovF
	var_24_int = 2; // 0x20 MovI
	func_169(var_21_float, var_22_object, var_23_float, var_24_int); // 0x21 NEW_2
	var_8_float = var_21_float; // 0x22 Mov
	var_87_object = Obj(); // 0x24 PushV
	func_242(var_87_object); // 0x25 NEW_2
	var_90_int = 4; // 0x27 PushI
	var_91_float = 0.8; // 0x28 PushF
	ReportHit(var_7_object, var_87_object, var_90_int, var_8_float, var_91_float); // 0x29 Func
	var_92_int = 1; // 0x2b PushI
	var_6_int = var_6_int + var_92_int; // 0x2c Add2
	
Label_47:
	goto Label_7; // 0x2f Jump
}


func_136(var_3_bool)
{
	var_3_bool = 1; // 0x88 MovB
	return 0; // 0x89 Return
}


func_169(var_21_float, var_22_object, var_23_float, var_24_int)
{
	var_25_int = 0; var_26_string = ""; var_27_int = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_int = 0; var_32_string = ""; var_33_int = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; // 0xa9 PushV
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0xaa PushV
	var_38_object = var_22_object; // 0xab Mov
	var_39_string = "health"; // 0xac MovS
	func_157(var_37_bool, var_38_object, var_39_string); // 0xad NEW_2
	var_46_bool = var_37_bool == 0; // 0xaf Not
	if(var_46_bool == 0) goto Label_179; // 0xb0 JumpB
	var_21_float = 0.0; // 0xb1 MovF
	return 12; // 0xb2 Return
	
Label_179:
	var_47_bool = 0; var_48_object = Obj(); var_49_string = ""; // 0xb3 PushV
	var_48_object = var_22_object; // 0xb4 Mov
	var_49_string = "armor"; // 0xb5 MovS
	func_157(var_47_bool, var_48_object, var_49_string); // 0xb6 NEW_2
	var_50_bool = var_47_bool == 0; // 0xb8 Not
	if(var_50_bool == 0) goto Label_188; // 0xb9 JumpB
	var_31_int = 0; // 0xba MovI
	goto Label_191; // 0xbb Jump
	
Label_191:
	var_51_string = "armor_"; // 0xbf PushS
	var_52_string = ""; var_53_int = 0; // 0xc0 PushV
	var_53_int = var_24_int; // 0xc1 Mov
	func_138(var_52_string, var_53_int); // 0xc2 NEW_2
	var_32_string = var_51_string + var_52_string; // 0xc4 Add2
	var_58_bool = 0; var_59_object = Obj(); var_60_string = ""; // 0xc5 PushV
	var_59_object = var_22_object; // 0xc6 Mov
	var_60_string = var_32_string; // 0xc7 Mov
	func_157(var_58_bool, var_59_object, var_60_string); // 0xc8 NEW_2
	var_61_bool = var_58_bool == 0; // 0xca Not
	if(var_61_bool == 0) goto Label_206; // 0xcb JumpB
	var_33_int = 0; // 0xcc MovI
	goto Label_208; // 0xcd Jump
	
Label_208:
	var_62_float = 0; var_63_float = 0; var_64_float = 0; // 0xd0 PushV
	var_65_int = var_31_int + var_33_int; // 0xd1 Add
	var_66_float = 100.0; // 0xd2 PushF
	var_63_float = var_65_int / var_65_int; // 0xd3 Div2
	var_64_float = 1; // 0xd4 MovI
	func_248(var_62_float, var_63_float, var_64_float); // 0xd5 NEW_2
	var_34_float = var_62_float; // 0xd6 Mov
	var_68_string = "health"; // 0xd8 PushS
	GetProperty(var_68_string, var_35_float); // 0xd9 ObjFunc
	var_69_int = 1; // 0xdb PushI
	var_70_int = var_69_int - var_34_float; // 0xdc Sub
	var_36_float = var_23_float * var_70_int; // 0xdd Mult2
	var_71_string = "health"; // 0xde PushS
	var_72_float = 0; var_73_float = 0; var_74_float = 0; var_75_float = 0; // 0xdf PushV
	var_73_float = var_35_float - var_36_float; // 0xe0 Sub2
	var_74_float = 0; // 0xe1 MovI
	var_75_float = 1; // 0xe2 MovI
	func_255(var_72_float, var_73_float, var_74_float, var_75_float); // 0xe3 NEW_2
	SetProperty(var_71_string, var_72_float); // 0xe5 ObjFunc
	var_78_bool = 0; var_79_object = Obj(); // 0xe7 PushV
	var_79_object = var_22_object; // 0xe8 Mov
	func_152(var_78_bool, var_79_object); // 0xe9 NEW_2
	if(var_78_bool == 0) goto Label_240; // 0xeb JumpB
	var_82_float = 0; // 0xec PushV
	var_82_float = -var_36_float; // 0xed Neg2
	func_272(var_82_float); // 0xee NEW_2
	
Label_240:
	var_21_float = var_36_float; // 0xf0 Mov
	return 12; // 0xf1 Return
	
Label_206:
	GetProperty(var_32_string, var_33_int); // 0xce ObjFunc
	
Label_188:
	var_86_string = "armor"; // 0xbc PushS
	GetProperty(var_86_string, var_31_int); // 0xbd ObjFunc
}


func_266(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x10a PushV
	CreateObjectVector(var_12_object); // 0x10b Func
	var_10_object = var_12_object; // 0x10d Mov
	return 2; // 0x10e Return
}


func_138(var_52_string, var_53_int)
{
	var_54_int = 2; // 0x8b PushI
	var_55_bool = var_53_int == var_54_int; // 0x8c Eq
	if(var_55_bool == 0) goto Label_145; // 0x8d JumpB
	var_52_string = "fire"; // 0x8e MovS
	return 0; // 0x8f Return
	
Label_145:
	var_56_int = 1; // 0x91 PushI
	var_57_bool = var_53_int == var_56_int; // 0x92 Eq
	if(var_57_bool == 0) goto Label_150; // 0x93 JumpB
	var_52_string = "bullet"; // 0x94 MovS
	return 0; // 0x95 Return
	
Label_150:
	var_52_string = "phys"; // 0x96 MovS
	return 0; // 0x97 Return
}


func_272(var_82_float)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x110 PushV
	CreateFloatVector(var_84_object); // 0x111 Func
	add(var_82_float); // 0x113 ObjFunc
	var_85_int = 15; // 0x115 PushI
	SendWorldWndMessage(var_85_int, var_84_object); // 0x116 Func
	return 2; // 0x118 Return
}


func_242(var_87_object)
{
	var_88_object = Obj(); var_89_object = Obj(); // 0xf2 PushV
	self(var_89_object); // 0xf3 Func
	var_87_object = var_89_object; // 0xf5 Mov
	return 2; // 0xf6 Return
}


func_157(var_37_bool, var_38_object, var_39_string)
{
	var_40_bool = 0; var_41_bool = 0; // 0x9d PushV
	var_42_string = "HasProperty"; // 0x9e PushS
	var_43_int = 2; // 0x9f PushI
	var_44_bool = IsFuncExist(var_38_object, var_42_string, var_43_int); // 0xa0 FuncExist
	var_45_bool = var_44_bool == 0; // 0xa1 Not
	if(var_45_bool == 0) goto Label_165; // 0xa2 JumpB
	var_37_bool = 0; // 0xa3 MovB
	return 2; // 0xa4 Return
	
Label_165:
	HasProperty(var_39_string, var_41_bool); // 0xa5 ObjFunc
	var_37_bool = var_41_bool; // 0xa7 Mov
	return 2; // 0xa8 Return
}


func_248(var_62_float, var_63_float, var_64_float)
{
	var_67_bool = var_63_float < var_64_float; // 0xf9 LT
	if(var_67_bool == 0) goto Label_253; // 0xfa JumpB
	var_62_float = var_63_float; // 0xfb Mov
	goto Label_254; // 0xfc Jump
	
Label_254:
	return 0; // 0xfe Return
	
Label_253:
	var_62_float = var_64_float; // 0xfd Mov
}


func_152(var_78_bool, var_79_object)
{
	var_80_bool = 0; var_81_bool = 0; // 0x98 PushV
	IsPlayerActor(var_79_object, var_81_bool); // 0x99 Func
	var_78_bool = var_81_bool; // 0x9b Mov
	return 2; // 0x9c Return
}


func_255(var_72_float, var_73_float, var_74_float, var_75_float)
{
	var_76_bool = var_73_float < var_74_float; // 0x100 LT
	if(var_76_bool == 0) goto Label_260; // 0x101 JumpB
	var_72_float = var_74_float; // 0x102 Mov
	return 0; // 0x103 Return
	
Label_260:
	var_77_bool = var_73_float > var_75_float; // 0x104 GT
	if(var_77_bool == 0) goto Label_264; // 0x105 JumpB
	var_72_float = var_75_float; // 0x106 Mov
	return 0; // 0x107 Return
	
Label_264:
	var_72_float = var_73_float; // 0x108 Mov
	return 0; // 0x109 Return
}


