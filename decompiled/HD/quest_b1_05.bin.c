task_0_event_26(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; // 0x3b PushV
	Trace(var_6_string); // 0x3c Func
	var_15_string = "attack"; // 0x3e PushS
	var_16_bool = var_6_string == var_15_string; // 0x3f Eq
	if(var_16_bool == 0) goto Label_86; // 0x40 JumpB
	var_17_object = var_2_object; // 0x41 PushT
	if(var_17_object == 0) goto Label_75; // 0x42 JumpB
	GetActor(var_11_object); // 0x43 TObjFunc
	var_18_object = var_11_object; // 0x45 Push
	if(var_18_object == 0) goto Label_74; // 0x46 JumpB
	var_19_string = "attack"; // 0x47 PushS
	Trigger(var_11_object, var_19_string); // 0x48 Func
	
Label_74:
	var_11_object = 0; // 0x4a SetNull
	
Label_75:
	var_20_object = var_3_object; // 0x4b PushT
	if(var_20_object == 0) goto Label_85; // 0x4c JumpB
	GetActor(var_12_object); // 0x4d TObjFunc
	var_21_object = var_12_object; // 0x4f Push
	if(var_21_object == 0) goto Label_84; // 0x50 JumpB
	var_22_string = "attack"; // 0x51 PushS
	Trigger(var_12_object, var_22_string); // 0x52 Func
	
Label_84:
	var_12_object = 0; // 0x54 SetNull
	
Label_85:
	goto Label_129; // 0x55 Jump
	
Label_129:
	return 8; // 0x81 Return
	
Label_86:
	var_23_string = "house_load"; // 0x56 PushS
	var_24_bool = var_6_string == var_23_string; // 0x57 Eq
	if(var_24_bool == 0) goto Label_110; // 0x58 JumpB
	var_25_string = "d2q01_house1"; // 0x59 PushS
	GetSceneByName(var_13_object, var_25_string); // 0x5a Func
	var_14_int = 0; // 0x5c MovI
	
Label_93:
	var_26_bool = var_14_int < var_0_int; // 0x5d LT
	if(var_26_bool == 0) goto Label_108; // 0x5e JumpB
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0x5f PushV
	var_28_object = var_13_object; // 0x60 Mov
	var_32_string = "pt_b1q05_rat"; // 0x61 PushS
	var_33_int = 1; // 0x62 PushI
	var_34_int = var_14_int + var_33_int; // 0x63 Add
	var_29_string = var_32_string + var_34_int; // 0x64 Add2
	var_30_string = "pers_rat"; // 0x65 MovS
	var_31_string = "b1q05_rat.xml"; // 0x66 MovS
	func_226(var_27_object, var_28_object, var_29_string, var_30_string, var_31_string); // 0x67 NEW_2
	var_48_int = 1; // 0x69 PushI
	var_14_int = var_14_int + var_48_int; // 0x6a Add2
	goto Label_93; // 0x6b Jump
	
Label_108:
	var_13_object = 0; // 0x6c SetNull
	goto Label_129; // 0x6d Jump
	
Label_110:
	var_49_string = "rat_dead"; // 0x6e PushS
	var_50_bool = var_6_string == var_49_string; // 0x6f Eq
	if(var_50_bool == 0) goto Label_116; // 0x70 JumpB
	var_51_int = -1; // 0x71 PushI
	var_0_int = var_0_int + var_51_int; // 0x72 Add2
	goto Label_129; // 0x73 Jump
	
Label_116:
	var_52_string = "fail"; // 0x74 PushS
	var_53_bool = var_6_string == var_52_string; // 0x75 Eq
	if(var_53_bool == 0) goto Label_123; // 0x76 JumpB
	func_149(); // 0x78 NEW_2
	goto Label_129; // 0x7a Jump
	
Label_123:
	var_66_string = "completed"; // 0x7b PushS
	var_67_bool = var_6_string == var_66_string; // 0x7c Eq
	if(var_67_bool == 0) goto Label_129; // 0x7d JumpB
	func_157(); // 0x7f NEW_2
}


task_0_event_9(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_float)
{
	func_130(); // 0xd9 NEW_2
	return 0; // 0xdb Return
}


main(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x0 PushV
	var_0_int = 4; // 0x1 TMovI
	var_8_string = "d2q01_house1"; // 0x2 PushS
	GetSceneByName(var_7_object, var_8_string); // 0x3 Func
	var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = ""; // 0x5 PushV
	var_10_object = var_7_object; // 0x6 Mov
	var_11_string = "pt_b1q05_spi4ka"; // 0x7 MovS
	var_12_string = "NPC_Spi4ka"; // 0x8 MovS
	var_13_string = "b1q05_spi4ka.xml"; // 0x9 MovS
	func_226(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string); // 0xa NEW_2
	var_4_object = var_9_object; // 0xb TMov
	var_27_string = "house_spi4ka"; // 0xd PushS
	GetSceneByName(var_7_object, var_27_string); // 0xe Func
	var_28_string = "nospi4ka"; // 0x10 PushS
	Trigger(var_7_object, var_28_string); // 0x11 Func
	GetMainOutdoorScene(var_7_object); // 0x13 Func
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = ""; // 0x15 PushV
	var_30_object = var_7_object; // 0x16 Mov
	var_31_string = "pt_b1q05_patrol_house"; // 0x17 MovS
	var_32_string = "pers_patrool"; // 0x18 MovS
	var_33_string = "b1q05_patrol_house.xml"; // 0x19 MovS
	func_244(var_30_object, var_31_string, var_32_string, var_33_string); // 0x1a NEW_2
	var_1_object = var_29_object; // 0x1b TMov
	var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = ""; // 0x1d PushV
	var_48_object = var_7_object; // 0x1e Mov
	var_49_string = "pt_b1q05_patrol1"; // 0x1f MovS
	var_50_string = "pers_patrool"; // 0x20 MovS
	var_51_string = "b1q05_patrol_key.xml"; // 0x21 MovS
	func_244(var_48_object, var_49_string, var_50_string, var_51_string); // 0x22 NEW_2
	var_2_object = var_47_object; // 0x23 TMov
	var_52_object = Obj(); var_53_object = Obj(); var_54_string = ""; var_55_string = ""; var_56_string = ""; // 0x25 PushV
	var_53_object = var_7_object; // 0x26 Mov
	var_54_string = "pt_b1q05_patrol2"; // 0x27 MovS
	var_55_string = "pers_patrool"; // 0x28 MovS
	var_56_string = "b1q05_patrol.xml"; // 0x29 MovS
	func_244(var_53_object, var_54_string, var_55_string, var_56_string); // 0x2a NEW_2
	var_3_object = var_52_object; // 0x2b TMov
	var_57_object = Obj(); var_58_object = Obj(); var_59_string = ""; var_60_string = ""; var_61_string = ""; // 0x2d PushV
	var_58_object = var_7_object; // 0x2e Mov
	var_59_string = "pt_b1q05_woman"; // 0x2f MovS
	var_60_string = "pers_woman"; // 0x30 MovS
	var_61_string = "b1q05_woman.xml"; // 0x31 MovS
	func_244(var_58_object, var_59_string, var_60_string, var_61_string); // 0x32 NEW_2
	var_5_object = var_57_object; // 0x33 TMov
	var_62_int = 0; // 0x35 PushV
	var_62_int = 1; // 0x36 MovI
	func_196(var_62_int); // 0x37 NEW_2
	return 2; // 0x39 Return
}


func_226(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0xe2 PushV
	GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector); // 0xe3 ObjFunc
	var_22_bool = var_18_bool == 0; // 0xe5 Not
	if(var_22_bool == 0) goto Label_239; // 0xe6 JumpB
	var_23_string = "Locator "; // 0xe7 PushS
	var_24_int = var_23_string + var_11_string; // 0xe8 Add
	var_25_string = " doesn't exist"; // 0xe9 PushS
	var_26_int = var_24_int + var_25_string; // 0xea Add
	Trace(var_26_int); // 0xeb Func
	var_21_object = 0; // 0xed SetNull
	goto Label_241; // 0xee Jump
	
Label_241:
	var_9_object = var_21_object; // 0xf1 Mov
	return 8; // 0xf2 Return
	
Label_239:
	AddActor(var_21_object, var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string); // 0xef Func
}


func_130()
{
	var_8_int = 0; var_9_int = 0; // 0x82 PushV
	var_10_string = "b1q05"; // 0x83 PushS
	GetVariable(var_10_string, var_9_int); // 0x84 Func
	var_11_int = 1000; // 0x86 PushI
	var_12_bool = var_9_int != var_11_int; // 0x87 Neq
	if(var_12_bool == 0) goto Label_140; // 0x88 JumpB
	func_149(); // 0x8a NEW_2
	
Label_140:
	func_165(var_9_int); // 0x8d NEW_2
	var_25_object = Obj(); // 0x8f PushV
	func_220(var_25_object); // 0x90 NEW_2
	RemoveActor(var_25_object); // 0x92 Func
	return 2; // 0x94 Return
}


func_196(var_62_int)
{
	var_63_float = 0; var_64_float = 0; // 0xc4 PushV
	GetGameTime(var_64_float); // 0xc5 Func
	var_65_int = 24; // 0xc7 PushI
	var_66_float = var_62_int * var_65_int; // 0xc8 Mult
	var_67_bool = var_64_float >= var_66_float; // 0xc9 GE
	if(var_67_bool == 0) goto Label_207; // 0xca JumpB
	func_165(var_64_float); // 0xcc NEW_2
	goto Label_214; // 0xce Jump
	
Label_214:
	return 2; // 0xd6 Return
	
Label_207:
	var_78_int = 0; // 0xcf PushI
	var_79_int = 24; // 0xd0 PushI
	var_80_float = var_62_int * var_79_int; // 0xd1 Mult
	SetTimeEvent(var_78_int, var_80_float); // 0xd2 Func
	Hold(); // 0xd4 Func
}


func_165(var_64_float)
{
	var_68_object = Obj(); var_69_object = Obj(); // 0xa5 PushV
	EventDisable(26); // 0xa6 EventDisable
	var_70_string = "house_spi4ka"; // 0xa7 PushS
	GetSceneByName(var_69_object, var_70_string); // 0xa8 Func
	var_71_string = "spi4ka"; // 0xaa PushS
	Trigger(var_69_object, var_71_string); // 0xab Func
	var_72_object = var_1_object; // 0xad PushT
	if(var_72_object == 0) goto Label_177; // 0xae JumpB
	Remove(); // 0xaf TObjFunc
	
Label_177:
	var_73_object = var_2_object; // 0xb1 PushT
	if(var_73_object == 0) goto Label_181; // 0xb2 JumpB
	Remove(); // 0xb3 TObjFunc
	
Label_181:
	var_74_object = var_3_object; // 0xb5 PushT
	if(var_74_object == 0) goto Label_185; // 0xb6 JumpB
	Remove(); // 0xb7 TObjFunc
	
Label_185:
	var_75_object = var_4_object; // 0xb9 PushT
	if(var_75_object == 0) goto Label_190; // 0xba JumpB
	var_76_string = "cleanup"; // 0xbb PushS
	Trigger(var_64_float, var_76_string); // 0xbc Func
	
Label_190:
	var_77_object = var_5_object; // 0xbe PushT
	if(var_77_object == 0) goto Label_194; // 0xbf JumpB
	Remove(); // 0xc0 TObjFunc
	
Label_194:
	return 2; // 0xc2 Return
}


func_244(var_29_object, var_31_string, var_32_string, var_33_string)
{
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj(); // 0xf4 PushV
	GetLocator(var_31_string, var_38_bool, var_39_cvector, var_40_cvector); // 0xf5 ObjFunc
	var_42_bool = var_38_bool == 0; // 0xf7 Not
	if(var_42_bool == 0) goto Label_257; // 0xf8 JumpB
	var_43_string = "Locator "; // 0xf9 PushS
	var_44_int = var_43_string + var_31_string; // 0xfa Add
	var_45_string = " doesn't exist"; // 0xfb PushS
	var_46_int = var_44_int + var_45_string; // 0xfc Add
	Trace(var_46_int); // 0xfd Func
	var_41_object = 0; // 0xff SetNull
	goto Label_259; // 0x100 Jump
	
Label_259:
	var_29_object = var_41_object; // 0x103 Mov
	return 8; // 0x104 Return
	
Label_257:
	AddStationaryActor(var_41_object, var_39_cvector, var_40_cvector, var_32_string, var_33_string); // 0x101 ObjFunc
}


func_149()
{
	var_13_string = "b1q05"; // 0x95 PushS
	var_14_int = -1; // 0x96 PushI
	SetVariable(var_13_string, var_14_int); // 0x97 Func
	func_165(var_9_int); // 0x9a NEW_2
	return 0; // 0x9c Return
}


func_220(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0xdc PushV
	self(var_27_object); // 0xdd Func
	var_25_object = var_27_object; // 0xdf Mov
	return 2; // 0xe0 Return
}


func_157()
{
	var_68_string = "b1q05"; // 0x9d PushS
	var_69_int = 1000; // 0x9e PushI
	SetVariable(var_68_string, var_69_int); // 0x9f Func
	func_165(var_14_int); // 0xa2 NEW_2
	return 0; // 0xa4 Return
}


