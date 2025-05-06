task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_string = ""; // 0x29 PushV
	var_3_object = var_1_object; // 0x2a Mov
	var_4_string = "health"; // 0x2b MovS
	func_118(var_2_bool, var_3_object, var_4_string); // 0x2c Call
	if(var_2_bool == 0) goto Label_54; // 0x2e JumpB
	var_11_string = "New damage target: "; // 0x2f PushS
	var_12_int = var_11_string + var_1_object; // 0x30 Add
	Trace(var_12_int); // 0x31 Func
	var_13_object = GlobalVars[0]; // 0x33 PushGE
	add(var_1_object); // 0x34 ObjFunc
	
Label_54:
	return 0; // 0x36 Return
}


task_0_event_27(var_0_bool, var_1_object)
{
	var_2_object = GlobalVars[0]; // 0x38 PushGE
	erase(var_1_object); // 0x39 ObjFunc
	var_3_string = "Removed damage target: "; // 0x3b PushS
	var_4_int = var_3_string + var_1_object; // 0x3c Add
	Trace(var_4_int); // 0x3d Func
	return 0; // 0x3f Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x40 PushV
	var_4_string = "cleanup"; // 0x41 PushS
	var_5_bool = var_1_string == var_4_string; // 0x42 Eq
	if(var_5_bool == 0) goto Label_87; // 0x43 JumpB
	var_0_bool = 1; // 0x44 TMovB
	IsLoaded(var_3_bool); // 0x45 Func
	var_6_bool = 0; // 0x47 PushV
	var_6_bool = 0; // 0x48 MovB
	var_7_bool = var_3_bool == 0; // 0x49 Not
	if(var_7_bool == 0) goto Label_80; // 0x4a JumpB
	var_8_bool = 0; // 0x4b PushV
	func_108(var_8_bool); // 0x4c Call
	if(var_8_bool == 0) goto Label_80; // 0x4e JumpB
	var_6_bool = 1; // 0x4f MovB
	
Label_80:
	if(var_6_bool == 0) goto Label_86; // 0x50 JumpB
	var_9_object = Obj(); // 0x51 PushV
	func_194(var_9_object); // 0x52 Call
	RemoveActor(var_9_object); // 0x54 Func
	
Label_86:
	goto Label_91; // 0x56 Jump
	
Label_91:
	return 2; // 0x5b Return
	
Label_87:
	var_12_string = "restore"; // 0x57 PushS
	var_13_bool = var_1_string == var_12_string; // 0x58 Eq
	if(var_13_bool == 0) goto Label_91; // 0x59 JumpB
	var_0_bool = 0; // 0x5a TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0; // 0x5c PushV
	var_1_bool = 0; // 0x5d MovB
	var_2_bool = var_0_bool; // 0x5e PushT
	if(var_2_bool == 0) goto Label_101; // 0x5f JumpB
	var_3_bool = 0; // 0x60 PushV
	func_108(var_3_bool); // 0x61 Call
	if(var_3_bool == 0) goto Label_101; // 0x63 JumpB
	var_1_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_1_bool == 0) goto Label_107; // 0x65 JumpB
	var_4_object = Obj(); // 0x66 PushV
	func_194(var_4_object); // 0x67 Call
	RemoveActor(var_4_object); // 0x69 Func
	
Label_107:
	return 0; // 0x6b Return
}


main(var_0_bool)
{
	var_1_object = Obj(); var_2_bool = 0; var_3_object = Obj(); var_4_float = 0; var_5_object = Obj(); var_6_bool = 0; var_7_object = Obj(); var_8_float = 0; // 0x0 PushV
	var_9_object = GlobalVars[0]; // 0x1 PushGE
	var_10_object = Obj(); // 0x2 PushV
	func_218(var_10_object); // 0x3 Call
	var_9_object = var_10_object; // 0x4 Mov
	GlobalVars[0] = var_9_object; // 0x6 PopGE
	
Label_7:
	var_13_int = 1; // 0x7 PushI
	Sleep(var_13_int); // 0x8 Func
	var_14_object = GlobalVars[0]; // 0xa PushGE
	iterator(var_5_object); // 0xb ObjFunc
	
Label_13:
	Next(var_6_bool, var_7_object); // 0xd ObjFunc
	var_15_bool = var_6_bool; // 0xf Push
	if(var_15_bool == 0) goto Label_36; // 0x10 JumpB
	var_16_string = "Damaging: "; // 0x11 PushS
	var_17_int = var_16_string + var_7_object; // 0x12 Add
	Trace(var_17_int); // 0x13 Func
	var_18_float = 0; var_19_object = Obj(); var_20_float = 0; var_21_int = 0; // 0x15 PushV
	var_19_object = var_7_object; // 0x16 Mov
	var_20_float = 0.8; // 0x17 MovF
	var_21_int = 1; // 0x18 MovI
	func_130(var_18_float, var_19_object, var_20_float, var_21_int); // 0x19 Call
	var_8_float = var_18_float; // 0x1a Mov
	var_74_object = Obj(); // 0x1c PushV
	func_194(var_74_object); // 0x1d Call
	var_77_int = 4; // 0x1f PushI
	var_78_float = 0.8; // 0x20 PushF
	ReportHit(var_7_object, var_74_object, var_77_int, var_8_float, var_78_float); // 0x21 Func
	goto Label_13; // 0x23 Jump
	
Label_36:
	var_7_object = 0; // 0x24 SetNull
	var_5_object = 0; // 0x25 SetNull
	goto Label_7; // 0x26 Jump
}


func_194(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj(); // 0xc2 PushV
	self(var_76_object); // 0xc3 Func
	var_74_object = var_76_object; // 0xc5 Mov
	return 2; // 0xc6 Return
}


func_130(var_18_float, var_19_object, var_20_float, var_21_int)
{
	var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_int = 0; var_29_string = ""; var_30_int = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0; // 0x82 PushV
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; // 0x83 PushV
	var_35_object = var_19_object; // 0x84 Mov
	var_36_string = "health"; // 0x85 MovS
	func_118(var_34_bool, var_35_object, var_36_string); // 0x86 Call
	var_43_bool = var_34_bool == 0; // 0x88 Not
	if(var_43_bool == 0) goto Label_140; // 0x89 JumpB
	var_18_float = 0.0; // 0x8a MovF
	return 12; // 0x8b Return
	
Label_140:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x8c PushV
	var_45_object = var_19_object; // 0x8d Mov
	var_46_string = "armor"; // 0x8e MovS
	func_118(var_44_bool, var_45_object, var_46_string); // 0x8f Call
	var_47_bool = var_44_bool == 0; // 0x91 Not
	if(var_47_bool == 0) goto Label_149; // 0x92 JumpB
	var_28_int = 0; // 0x93 MovI
	goto Label_152; // 0x94 Jump
	
Label_152:
	var_48_string = "armor_"; // 0x98 PushS
	var_49_string = ""; var_50_int = 0; // 0x99 PushV
	var_50_int = var_21_int; // 0x9a Mov
	func_110(var_49_string, var_50_int); // 0x9b Call
	var_29_string = var_48_string + var_49_string; // 0x9d Add2
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0x9e PushV
	var_54_object = var_19_object; // 0x9f Mov
	var_55_string = var_29_string; // 0xa0 Mov
	func_118(var_53_bool, var_54_object, var_55_string); // 0xa1 Call
	var_56_bool = var_53_bool == 0; // 0xa3 Not
	if(var_56_bool == 0) goto Label_167; // 0xa4 JumpB
	var_30_int = 0; // 0xa5 MovI
	goto Label_169; // 0xa6 Jump
	
Label_169:
	var_57_float = 0; var_58_float = 0; var_59_float = 0; // 0xa9 PushV
	var_60_int = var_28_int + var_30_int; // 0xaa Add
	var_61_float = 100.0; // 0xab PushF
	var_58_float = var_60_int / var_60_int; // 0xac Div2
	var_59_float = 1; // 0xad MovI
	func_200(var_57_float, var_58_float, var_59_float); // 0xae Call
	var_31_float = var_57_float; // 0xaf Mov
	var_63_string = "health"; // 0xb1 PushS
	GetProperty(var_63_string, var_32_float); // 0xb2 ObjFunc
	var_64_int = 1; // 0xb4 PushI
	var_65_int = var_64_int - var_31_float; // 0xb5 Sub
	var_33_float = var_20_float * var_65_int; // 0xb6 Mult2
	var_66_string = "health"; // 0xb7 PushS
	var_67_float = 0; var_68_float = 0; var_69_float = 0; var_70_float = 0; // 0xb8 PushV
	var_68_float = var_32_float - var_33_float; // 0xb9 Sub2
	var_69_float = 0; // 0xba MovI
	var_70_float = 1; // 0xbb MovI
	func_207(var_67_float, var_68_float, var_69_float, var_70_float); // 0xbc Call
	SetProperty(var_66_string, var_67_float); // 0xbe ObjFunc
	var_18_float = var_33_float; // 0xc0 Mov
	return 12; // 0xc1 Return
	
Label_167:
	GetProperty(var_29_string, var_30_int); // 0xa7 ObjFunc
	
Label_149:
	var_73_string = "armor"; // 0x95 PushS
	GetProperty(var_73_string, var_28_int); // 0x96 ObjFunc
}


func_200(var_57_float, var_58_float, var_59_float)
{
	var_62_bool = var_58_float < var_59_float; // 0xc9 LT
	if(var_62_bool == 0) goto Label_205; // 0xca JumpB
	var_57_float = var_58_float; // 0xcb Mov
	goto Label_206; // 0xcc Jump
	
Label_206:
	return 0; // 0xce Return
	
Label_205:
	var_57_float = var_59_float; // 0xcd Mov
}


func_108(var_3_bool)
{
	var_3_bool = 1; // 0x6c MovB
	return 0; // 0x6d Return
}


func_110(var_49_string, var_50_int)
{
	var_51_int = 1; // 0x6f PushI
	var_52_bool = var_50_int == var_51_int; // 0x70 Eq
	if(var_52_bool == 0) goto Label_116; // 0x71 JumpB
	var_49_string = "fire"; // 0x72 MovS
	return 0; // 0x73 Return
	
Label_116:
	var_49_string = "phys"; // 0x74 MovS
	return 0; // 0x75 Return
}


func_207(var_67_float, var_68_float, var_69_float, var_70_float)
{
	var_71_bool = var_68_float < var_69_float; // 0xd0 LT
	if(var_71_bool == 0) goto Label_212; // 0xd1 JumpB
	var_67_float = var_69_float; // 0xd2 Mov
	return 0; // 0xd3 Return
	
Label_212:
	var_72_bool = var_68_float > var_70_float; // 0xd4 GT
	if(var_72_bool == 0) goto Label_216; // 0xd5 JumpB
	var_67_float = var_70_float; // 0xd6 Mov
	return 0; // 0xd7 Return
	
Label_216:
	var_67_float = var_68_float; // 0xd8 Mov
	return 0; // 0xd9 Return
}


func_118(var_34_bool, var_35_object, var_36_string)
{
	var_37_bool = 0; var_38_bool = 0; // 0x76 PushV
	var_39_string = "HasProperty"; // 0x77 PushS
	var_40_int = 2; // 0x78 PushI
	var_41_bool = IsFuncExist(var_35_object, var_39_string, var_40_int); // 0x79 FuncExist
	var_42_bool = var_41_bool == 0; // 0x7a Not
	if(var_42_bool == 0) goto Label_126; // 0x7b JumpB
	var_34_bool = 0; // 0x7c MovB
	return 2; // 0x7d Return
	
Label_126:
	HasProperty(var_36_string, var_38_bool); // 0x7e ObjFunc
	var_34_bool = var_38_bool; // 0x80 Mov
	return 2; // 0x81 Return
}


func_218(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0xda PushV
	CreateObjectSet(var_12_object); // 0xdb Func
	var_10_object = var_12_object; // 0xdd Mov
	return 2; // 0xde Return
}


