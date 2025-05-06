task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_float = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_float = 0; // 0x5 PushV
	Trace(var_3_string); // 0x6 Func
	var_14_string = "block_well"; // 0x8 PushS
	var_15_bool = var_3_string == var_14_string; // 0x9 Eq
	if(var_15_bool == 0) goto Label_21; // 0xa JumpB
	var_16_string = "house_vlad"; // 0xb PushS
	GetSceneByName(var_9_object, var_16_string); // 0xc Func
	var_17_string = "d8q01_well_block"; // 0xe PushS
	var_18_cvector = CVector(0.0, 0.0, 0.0); // 0xf PushVec
	AddActor(var_10_object, var_17_string, var_9_object, var_18_cvector); // 0x10 Func
	var_10_object = 0; // 0x12 SetNull
	var_9_object = 0; // 0x13 SetNull
	goto Label_94; // 0x14 Jump
	
Label_94:
	return 10; // 0x5e Return
	
Label_21:
	var_19_string = "place_toy"; // 0x15 PushS
	var_20_bool = var_3_string == var_19_string; // 0x16 Eq
	if(var_20_bool == 0) goto Label_37; // 0x17 JumpB
	var_21_string = "r4_house_2_02"; // 0x18 PushS
	GetSceneByName(var_11_object, var_21_string); // 0x19 Func
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = ""; // 0x1b PushV
	var_23_object = var_11_object; // 0x1c Mov
	var_24_string = "pt_d8q01_toy"; // 0x1d MovS
	var_25_string = "scripted_container"; // 0x1e MovS
	var_26_string = "d8q01_toy.xml"; // 0x1f MovS
	func_167(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string); // 0x20 Call
	var_0_object = var_22_object; // 0x21 TMov
	var_11_object = 0; // 0x23 SetNull
	goto Label_94; // 0x24 Jump
	
Label_37:
	var_40_string = "boiny_load"; // 0x25 PushS
	var_41_bool = var_3_string == var_40_string; // 0x26 Eq
	if(var_41_bool == 0) goto Label_41; // 0x27 JumpB
	goto Label_94; // 0x28 Jump
	
Label_41:
	var_42_string = "termitnik_load"; // 0x29 PushS
	var_43_bool = var_3_string == var_42_string; // 0x2a Eq
	if(var_43_bool == 0) goto Label_64; // 0x2b JumpB
	var_44_bool = var_2_bool; // 0x2c PushT
	if(var_44_bool == 0) goto Label_63; // 0x2d JumpB
	var_2_bool = 0; // 0x2e TMovB
	var_45_string = "termitnik"; // 0x2f PushS
	GetSceneByName(var_12_object, var_45_string); // 0x30 Func
	var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = ""; // 0x32 PushV
	var_47_object = var_12_object; // 0x33 Mov
	var_48_string = "pt_d8q01_burah"; // 0x34 MovS
	var_49_string = "NPC_Burah"; // 0x35 MovS
	var_50_string = "d8q01_Burah.xml"; // 0x36 MovS
	func_149(var_46_object, var_47_object, var_48_string, var_49_string, var_50_string); // 0x37 Call
	var_1_object = var_46_object; // 0x38 TMov
	var_64_string = "d8TermitnikLoad"; // 0x3a PushS
	var_65_int = 1; // 0x3b PushI
	SetVariable(var_64_string, var_65_int); // 0x3c Func
	var_12_object = 0; // 0x3e SetNull
	
Label_63:
	goto Label_94; // 0x3f Jump
	
Label_64:
	var_66_string = "unlock_boiny"; // 0x40 PushS
	var_67_bool = var_3_string == var_66_string; // 0x41 Eq
	if(var_67_bool == 0) goto Label_81; // 0x42 JumpB
	GetGameTime(var_13_float); // 0x43 Func
	var_68_float = 193.0; // 0x45 PushF
	var_69_bool = var_13_float >= var_68_float; // 0x46 GE
	if(var_69_bool == 0) goto Label_76; // 0x47 JumpB
	func_103(); // 0x49 Call
	goto Label_80; // 0x4b Jump
	
Label_80:
	goto Label_94; // 0x50 Jump
	
Label_76:
	var_81_int = 0; // 0x4c PushI
	var_82_float = 193.0; // 0x4d PushF
	SetTimeEvent(var_81_int, var_82_float); // 0x4e Func
	
Label_81:
	var_83_string = "fail"; // 0x51 PushS
	var_84_bool = var_3_string == var_83_string; // 0x52 Eq
	if(var_84_bool == 0) goto Label_88; // 0x53 JumpB
	func_112(); // 0x55 Call
	goto Label_94; // 0x57 Jump
	
Label_88:
	var_94_string = "completed"; // 0x58 PushS
	var_95_bool = var_3_string == var_94_string; // 0x59 Eq
	if(var_95_bool == 0) goto Label_94; // 0x5a JumpB
	func_120(); // 0x5c Call
}


task_0_event_9(var_0_object, var_1_object, var_2_bool, var_3_int, var_4_float)
{
	var_5_int = 0; // 0x60 PushI
	ReleaseTimeEvent(var_5_int); // 0x61 Func
	func_103(); // 0x64 Call
	return 0; // 0x66 Return
}


main(var_0_object, var_1_object, var_2_bool)
{
	var_2_bool = 1; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_128(var_0_object)
{
	EventDisable(26); // 0x80 EventDisable
	EventDisable(9); // 0x81 EventDisable
	var_87_int = 0; // 0x82 PushI
	ReleaseTimeEvent(var_87_int); // 0x83 Func
	var_88_object = var_0_object; // 0x85 PushT
	if(var_88_object == 0) goto Label_138; // 0x86 JumpB
	var_89_string = "cleanup"; // 0x87 PushS
	Trigger(var_0_object, var_89_string); // 0x88 Func
	
Label_138:
	var_90_object = var_1_object; // 0x8a PushT
	if(var_90_object == 0) goto Label_143; // 0x8b JumpB
	var_91_string = "cleanup"; // 0x8c PushS
	Trigger(var_91_string, var_91_string); // 0x8d Func
	
Label_143:
	var_92_string = ""; var_93_bool = 0; // 0x8f PushV
	var_92_string = "boiny@door1"; // 0x90 MovS
	var_93_bool = 1; // 0x91 MovB
	func_185(var_92_string, var_93_bool); // 0x92 Call
	return 0; // 0x94 Return
}


func_103()
{
	var_6_string = "Boiny unlocked"; // 0x67 PushS
	Trace(var_6_string); // 0x68 Func
	var_7_string = ""; var_8_bool = 0; // 0x6a PushV
	var_7_string = "boiny@door1"; // 0x6b MovS
	var_8_bool = 0; // 0x6c MovB
	func_185(var_7_string, var_8_bool); // 0x6d Call
	return 0; // 0x6f Return
}


func_167(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string)
{
	var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); // 0xa7 PushV
	GetLocator(var_24_string, var_31_bool, var_32_cvector, var_33_cvector); // 0xa8 ObjFunc
	var_35_bool = var_31_bool == 0; // 0xaa Not
	if(var_35_bool == 0) goto Label_180; // 0xab JumpB
	var_36_string = "Locator "; // 0xac PushS
	var_37_int = var_36_string + var_24_string; // 0xad Add
	var_38_string = " doesn't exist"; // 0xae PushS
	var_39_int = var_37_int + var_38_string; // 0xaf Add
	Trace(var_39_int); // 0xb0 Func
	var_34_object = 0; // 0xb2 SetNull
	goto Label_182; // 0xb3 Jump
	
Label_182:
	var_22_object = var_34_object; // 0xb6 Mov
	return 8; // 0xb7 Return
	
Label_180:
	AddActorByType(var_34_object, var_25_string, var_23_object, var_32_cvector, var_33_cvector, var_26_string); // 0xb4 Func
}


func_112()
{
	var_85_string = "d8q01"; // 0x70 PushS
	var_86_int = -1; // 0x71 PushI
	SetVariable(var_85_string, var_86_int); // 0x72 Func
	func_128(var_13_float); // 0x75 Call
	return 0; // 0x77 Return
}


func_149(var_46_object, var_47_object, var_48_string, var_49_string, var_50_string)
{
	var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_object = Obj(); var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); // 0x95 PushV
	GetLocator(var_48_string, var_55_bool, var_56_cvector, var_57_cvector); // 0x96 ObjFunc
	var_59_bool = var_55_bool == 0; // 0x98 Not
	if(var_59_bool == 0) goto Label_162; // 0x99 JumpB
	var_60_string = "Locator "; // 0x9a PushS
	var_61_int = var_60_string + var_48_string; // 0x9b Add
	var_62_string = " doesn't exist"; // 0x9c PushS
	var_63_int = var_61_int + var_62_string; // 0x9d Add
	Trace(var_63_int); // 0x9e Func
	var_58_object = 0; // 0xa0 SetNull
	goto Label_164; // 0xa1 Jump
	
Label_164:
	var_46_object = var_58_object; // 0xa4 Mov
	return 8; // 0xa5 Return
	
Label_162:
	AddActor(var_58_object, var_49_string, var_47_object, var_56_cvector, var_57_cvector, var_50_string); // 0xa2 Func
}


func_120()
{
	var_96_string = "d8q01"; // 0x78 PushS
	var_97_int = 1000; // 0x79 PushI
	SetVariable(var_96_string, var_97_int); // 0x7a Func
	func_128(var_13_float); // 0x7d Call
	return 0; // 0x7f Return
}


func_185(var_7_string, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0xb9 PushV
	FindActor(var_10_object, var_7_string); // 0xba Func
	var_11_bool = var_10_object == 0; // 0xbc Not
	if(var_11_bool == 0) goto Label_196; // 0xbd JumpB
	var_12_string = "Door "; // 0xbe PushS
	var_13_int = var_12_string + var_7_string; // 0xbf Add
	var_14_string = " not found"; // 0xc0 PushS
	var_15_int = var_13_int + var_14_string; // 0xc1 Add
	Trace(var_15_int); // 0xc2 Func
	
Label_196:
	var_16_string = "locked"; // 0xc4 PushS
	SetProperty(var_16_string, var_8_bool); // 0xc5 ObjFunc
	return 2; // 0xc7 Return
}


