task_0_event_26(var_0_object, var_1_string)
{
	var_2_string = "noaglaja"; // 0x7 PushS
	var_3_bool = var_1_string == var_2_string; // 0x8 Eq
	if(var_3_bool == 0) goto Label_15; // 0x9 JumpB
	var_4_string = "sobor_aglaja"; // 0xa PushS
	var_5_int = 0; // 0xb PushI
	SetVariable(var_4_string, var_5_int); // 0xc Func
	goto Label_22; // 0xe Jump
	
Label_22:
	return 0; // 0x16 Return
	
Label_15:
	var_6_string = "aglaja"; // 0xf PushS
	var_7_bool = var_1_string == var_6_string; // 0x10 Eq
	if(var_7_bool == 0) goto Label_22; // 0x11 JumpB
	var_8_string = "sobor_aglaja"; // 0x12 PushS
	var_9_int = 1; // 0x13 PushI
	SetVariable(var_8_string, var_9_int); // 0x14 Func
}


task_0_event_5(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); var_3_string = ""; var_4_string = ""; var_5_string = ""; // 0x17 PushV
	var_6_object = Obj(); // 0x18 PushV
	func_113(var_6_object); // 0x19 NEW_2
	var_2_object = var_6_object; // 0x1a Mov
	var_3_string = "pt_d6q01_boy"; // 0x1c MovS
	var_4_string = "pers_boy"; // 0x1d MovS
	var_5_string = "d6q01_boy.xml"; // 0x1e MovS
	func_119(var_1_object, var_2_object, var_3_string, var_4_string, var_5_string); // 0x1f NEW_2
	add(var_1_object); // 0x21 TObjFunc
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = ""; // 0x23 PushV
	var_27_object = Obj(); // 0x24 PushV
	func_113(var_27_object); // 0x25 NEW_2
	var_23_object = var_27_object; // 0x26 Mov
	var_24_string = "pt_d6q01_girl"; // 0x28 MovS
	var_25_string = "pers_girl"; // 0x29 MovS
	var_26_string = "d6q01_girl.xml"; // 0x2a MovS
	func_119(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string); // 0x2b NEW_2
	add(var_22_object); // 0x2d TObjFunc
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = ""; // 0x2f PushV
	var_33_object = Obj(); // 0x30 PushV
	func_113(var_33_object); // 0x31 NEW_2
	var_29_object = var_33_object; // 0x32 Mov
	var_30_string = "pt_d6q01_unosha"; // 0x34 MovS
	var_31_string = "pers_unosha"; // 0x35 MovS
	var_32_string = "d6q01_unosha.xml"; // 0x36 MovS
	func_119(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string); // 0x37 NEW_2
	add(var_28_object); // 0x39 TObjFunc
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x3b PushV
	var_39_object = Obj(); // 0x3c PushV
	func_113(var_39_object); // 0x3d NEW_2
	var_35_object = var_39_object; // 0x3e Mov
	var_36_string = "pt_d6q01_wasted_male"; // 0x40 MovS
	var_37_string = "pers_wasted_male"; // 0x41 MovS
	var_38_string = "d6q01_wasted_male.xml"; // 0x42 MovS
	func_119(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string); // 0x43 NEW_2
	add(var_34_object); // 0x45 TObjFunc
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = ""; // 0x47 PushV
	var_45_object = Obj(); // 0x48 PushV
	func_113(var_45_object); // 0x49 NEW_2
	var_41_object = var_45_object; // 0x4a Mov
	var_42_string = "pt_d6q01_wasted_woman"; // 0x4c MovS
	var_43_string = "pers_wasted_girl"; // 0x4d MovS
	var_44_string = "d6q01_wasted_woman.xml"; // 0x4e MovS
	func_119(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string); // 0x4f NEW_2
	add(var_40_object); // 0x51 TObjFunc
	var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = ""; // 0x53 PushV
	var_51_object = Obj(); // 0x54 PushV
	func_113(var_51_object); // 0x55 NEW_2
	var_47_object = var_51_object; // 0x56 Mov
	var_48_string = "pt_d6q01_woman"; // 0x58 MovS
	var_49_string = "pers_woman"; // 0x59 MovS
	var_50_string = "d6q01_woman.xml"; // 0x5a MovS
	func_119(var_46_object, var_47_object, var_48_string, var_49_string, var_50_string); // 0x5b NEW_2
	add(var_46_object); // 0x5d TObjFunc
	var_52_object = Obj(); var_53_object = Obj(); var_54_string = ""; var_55_string = ""; var_56_string = ""; // 0x5f PushV
	var_57_object = Obj(); // 0x60 PushV
	func_113(var_57_object); // 0x61 NEW_2
	var_53_object = var_57_object; // 0x62 Mov
	var_54_string = "pt_d6q01_worker"; // 0x64 MovS
	var_55_string = "pers_worker"; // 0x65 MovS
	var_56_string = "d6q01_worker.xml"; // 0x66 MovS
	func_119(var_52_object, var_53_object, var_54_string, var_55_string, var_56_string); // 0x67 NEW_2
	add(var_52_object); // 0x69 TObjFunc
	return 0; // 0x6b Return
}


task_0_event_6(var_0_object)
{
	var_1_object = Obj(); // 0x6c PushV
	var_1_object = var_0_object; // 0x6d MovT
	func_137(var_1_object); // 0x6e NEW_2
	return 0; // 0x70 Return
}


main(var_0_object)
{
	CreateObjectVector(var_0_object); // 0x0 Func
	
Label_2:
	Hold(); // 0x2 Func
	goto Label_2; // 0x4 Jump
}


func_113(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x71 PushV
	self(var_8_object); // 0x72 Func
	var_6_object = var_8_object; // 0x74 Mov
	return 2; // 0x75 Return
}


func_137(var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); // 0x89 PushV
	var_8_object = var_1_object; // 0x8a Push
	if(var_8_object == 0) goto Label_157; // 0x8b JumpB
	size(var_5_int); // 0x8c ObjFunc
	var_6_int = 0; // 0x8e MovI
	
Label_143:
	var_9_bool = var_6_int < var_5_int; // 0x8f LT
	if(var_9_bool == 0) goto Label_155; // 0x90 JumpB
	get(var_7_object, var_6_int); // 0x91 ObjFunc
	var_10_object = var_7_object; // 0x93 Push
	if(var_10_object == 0) goto Label_151; // 0x94 JumpB
	RemoveActor(var_7_object); // 0x95 Func
	
Label_151:
	var_7_object = 0; // 0x97 SetNull
	var_11_int = 1; // 0x98 PushI
	var_6_int = var_6_int + var_11_int; // 0x99 Add2
	goto Label_143; // 0x9a Jump
	
Label_155:
	clear(); // 0x9b ObjFunc
	
Label_157:
	return 6; // 0x9d Return
}


func_119(var_1_object, var_2_object, var_3_string, var_4_string, var_5_string)
{
	var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_object = Obj(); var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); // 0x77 PushV
	GetLocator(var_3_string, var_13_bool, var_14_cvector, var_15_cvector); // 0x78 ObjFunc
	var_17_bool = var_13_bool == 0; // 0x7a Not
	if(var_17_bool == 0) goto Label_132; // 0x7b JumpB
	var_18_string = "Locator "; // 0x7c PushS
	var_19_int = var_18_string + var_3_string; // 0x7d Add
	var_20_string = " doesn't exist"; // 0x7e PushS
	var_21_int = var_19_int + var_20_string; // 0x7f Add
	Trace(var_21_int); // 0x80 Func
	var_16_object = 0; // 0x82 SetNull
	goto Label_134; // 0x83 Jump
	
Label_134:
	var_1_object = var_16_object; // 0x86 Mov
	return 8; // 0x87 Return
	
Label_132:
	AddActor(var_16_object, var_4_string, var_2_object, var_14_cvector, var_15_cvector, var_5_string); // 0x84 Func
}


