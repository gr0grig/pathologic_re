task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; // 0x4 PushV
	Trace(var_2_string); // 0x5 Func
	var_9_string = "place_box"; // 0x7 PushS
	var_10_bool = var_2_string == var_9_string; // 0x8 Eq
	if(var_10_bool == 0) goto Label_20; // 0x9 JumpB
	var_11_string = "dt_house_1_04"; // 0xa PushS
	GetSceneByName(var_6_object, var_11_string); // 0xb Func
	var_12_string = "b2q01_box"; // 0xd PushS
	var_13_cvector = CVector(0.0, 0.0, 0.0); // 0xe PushVec
	var_14_cvector = CVector(0.0, 0.0, 1.0); // 0xf PushVec
	var_15_string = "b2q01_box.xml"; // 0x10 PushS
	AddActor(var_0_object, var_12_string, var_6_object, var_13_cvector, var_14_cvector, var_15_string); // 0x11 Func
	var_6_object = 0; // 0x13 SetNull
	
Label_20:
	var_16_string = "place_mladvlad"; // 0x14 PushS
	var_17_bool = var_2_string == var_16_string; // 0x15 Eq
	if(var_17_bool == 0) goto Label_40; // 0x16 JumpB
	var_18_string = "burah_home"; // 0x17 PushS
	GetSceneByName(var_7_object, var_18_string); // 0x18 Func
	var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = ""; // 0x1a PushV
	var_20_object = var_7_object; // 0x1b Mov
	var_21_string = "pt_b2q01_mladvlad"; // 0x1c MovS
	var_22_string = "NPC_MladVlad"; // 0x1d MovS
	var_23_string = "b2q01_MladVlad.xml"; // 0x1e MovS
	func_148(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string); // 0x1f NEW_2
	var_1_object = var_19_object; // 0x20 TMov
	var_37_string = ""; var_38_bool = 0; // 0x22 PushV
	var_37_string = "house_vlad@door1"; // 0x23 MovS
	var_38_bool = 1; // 0x24 MovB
	func_166(var_37_string, var_38_bool); // 0x25 NEW_2
	var_7_object = 0; // 0x27 SetNull
	
Label_40:
	var_47_string = "remove_mladvlad"; // 0x28 PushS
	var_48_bool = var_2_string == var_47_string; // 0x29 Eq
	if(var_48_bool == 0) goto Label_54; // 0x2a JumpB
	var_49_object = var_1_object; // 0x2b PushT
	if(var_49_object == 0) goto Label_48; // 0x2c JumpB
	var_50_string = "cleanup"; // 0x2d PushS
	Trigger(var_50_string, var_50_string); // 0x2e Func
	
Label_48:
	var_51_string = ""; var_52_bool = 0; // 0x30 PushV
	var_51_string = "house_vlad@door1"; // 0x31 MovS
	var_52_bool = 0; // 0x32 MovB
	func_166(var_51_string, var_52_bool); // 0x33 NEW_2
	goto Label_100; // 0x35 Jump
	
Label_100:
	return 6; // 0x64 Return
	
Label_54:
	var_53_string = "cutscene"; // 0x36 PushS
	var_54_bool = var_2_string == var_53_string; // 0x37 Eq
	if(var_54_bool == 0) goto Label_62; // 0x38 JumpB
	var_55_object = Obj(); var_56_string = ""; // 0x39 PushV
	var_56_string = "cs_burah_danko_microscope"; // 0x3a MovS
	func_137(var_55_object, var_56_string); // 0x3b NEW_2
	goto Label_100; // 0x3d Jump
	
Label_62:
	var_63_string = "cutscene_end"; // 0x3e PushS
	var_64_bool = var_2_string == var_63_string; // 0x3f Eq
	if(var_64_bool == 0) goto Label_70; // 0x40 JumpB
	var_65_string = "b2q01MicroscopeCS"; // 0x41 PushS
	var_66_int = 1; // 0x42 PushI
	SetVariable(var_65_string, var_66_int); // 0x43 Func
	goto Label_100; // 0x45 Jump
	
Label_70:
	var_67_string = "cleanup"; // 0x46 PushS
	var_68_bool = var_2_string == var_67_string; // 0x47 Eq
	if(var_68_bool == 0) goto Label_87; // 0x48 JumpB
	var_69_string = "b2q01"; // 0x49 PushS
	GetVariable(var_69_string, var_8_int); // 0x4a Func
	var_70_int = 1000; // 0x4c PushI
	var_71_bool = var_8_int != var_70_int; // 0x4d Neq
	if(var_71_bool == 0) goto Label_83; // 0x4e JumpB
	func_101(); // 0x50 NEW_2
	goto Label_86; // 0x52 Jump
	
Label_86:
	goto Label_100; // 0x56 Jump
	
Label_83:
	func_114(); // 0x54 NEW_2
	
Label_87:
	var_81_string = "fail"; // 0x57 PushS
	var_82_bool = var_2_string == var_81_string; // 0x58 Eq
	if(var_82_bool == 0) goto Label_94; // 0x59 JumpB
	func_101(); // 0x5b NEW_2
	goto Label_100; // 0x5d Jump
	
Label_94:
	var_83_string = "completed"; // 0x5e PushS
	var_84_bool = var_2_string == var_83_string; // 0x5f Eq
	if(var_84_bool == 0) goto Label_100; // 0x60 JumpB
	func_109(); // 0x62 NEW_2
}


main(var_0_object, var_1_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_131(var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x83 PushV
	self(var_80_object); // 0x84 Func
	var_78_object = var_80_object; // 0x86 Mov
	return 2; // 0x87 Return
}


func_101()
{
	var_72_string = "b2q01"; // 0x65 PushS
	var_73_int = -1; // 0x66 PushI
	SetVariable(var_72_string, var_73_int); // 0x67 Func
	func_114(); // 0x6a NEW_2
	return 0; // 0x6c Return
}


func_166(var_37_string, var_38_bool)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xa6 PushV
	FindActor(var_40_object, var_37_string); // 0xa7 Func
	var_41_bool = var_40_object == 0; // 0xa9 Not
	if(var_41_bool == 0) goto Label_178; // 0xaa JumpB
	var_42_string = "Door "; // 0xab PushS
	var_43_int = var_42_string + var_37_string; // 0xac Add
	var_44_string = " not found"; // 0xad PushS
	var_45_int = var_43_int + var_44_string; // 0xae Add
	Trace(var_45_int); // 0xaf Func
	goto Label_181; // 0xb1 Jump
	
Label_181:
	return 2; // 0xb5 Return
	
Label_178:
	var_46_string = "locked"; // 0xb2 PushS
	SetProperty(var_46_string, var_38_bool); // 0xb3 ObjFunc
}


func_137(var_55_object, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj(); // 0x89 PushV
	GetMainOutdoorScene(var_59_object); // 0x8a Func
	var_61_string = ".bin"; // 0x8c PushS
	var_62_int = var_56_string + var_61_string; // 0x8d Add
	AddBlankActor(var_60_object, var_59_object, var_56_string, var_62_int); // 0x8e Func
	var_55_object = var_60_object; // 0x90 Mov
	return 4; // 0x91 Return
}


func_109()
{
	var_85_string = "b2q01"; // 0x6d PushS
	var_86_int = 1000; // 0x6e PushI
	SetVariable(var_85_string, var_86_int); // 0x6f Func
	return 0; // 0x71 Return
}


func_114()
{
	EventDisable(26); // 0x72 EventDisable
	var_74_object = var_1_object; // 0x73 PushT
	if(var_74_object == 0) goto Label_120; // 0x74 JumpB
	var_75_string = "cleanup"; // 0x75 PushS
	Trigger(var_75_string, var_75_string); // 0x76 Func
	
Label_120:
	var_76_string = ""; var_77_bool = 0; // 0x78 PushV
	var_76_string = "house_vlad@door1"; // 0x79 MovS
	var_77_bool = 0; // 0x7a MovB
	func_166(var_76_string, var_77_bool); // 0x7b NEW_2
	var_78_object = Obj(); // 0x7d PushV
	func_131(var_78_object); // 0x7e NEW_2
	RemoveActor(var_78_object); // 0x80 Func
	return 0; // 0x82 Return
}


func_148(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
{
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); // 0x94 PushV
	GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector); // 0x95 ObjFunc
	var_32_bool = var_28_bool == 0; // 0x97 Not
	if(var_32_bool == 0) goto Label_161; // 0x98 JumpB
	var_33_string = "Locator "; // 0x99 PushS
	var_34_int = var_33_string + var_21_string; // 0x9a Add
	var_35_string = " doesn't exist"; // 0x9b PushS
	var_36_int = var_34_int + var_35_string; // 0x9c Add
	Trace(var_36_int); // 0x9d Func
	var_31_object = 0; // 0x9f SetNull
	goto Label_163; // 0xa0 Jump
	
Label_163:
	var_19_object = var_31_object; // 0xa3 Mov
	return 8; // 0xa4 Return
	
Label_161:
	AddActor(var_31_object, var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string); // 0xa1 Func
}


