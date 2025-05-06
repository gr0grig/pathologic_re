task_0_event_26(var_0_string)
{
	var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); // 0x4 PushV
	Trace(var_0_string); // 0x5 Func
	var_9_string = "place_birdmask"; // 0x7 PushS
	var_10_bool = var_0_string == var_9_string; // 0x8 Eq
	if(var_10_bool == 0) goto Label_21; // 0x9 JumpB
	GetMainOutdoorScene(var_5_object); // 0xa Func
	var_11_object = Obj(); var_12_object = Obj(); var_13_string = ""; var_14_string = ""; var_15_string = ""; // 0xc PushV
	var_12_object = var_5_object; // 0xd Mov
	var_13_string = "pt_d12q01_birdmask"; // 0xe MovS
	var_14_string = "pers_birdmask"; // 0xf MovS
	var_15_string = "d12q01_birdmask.xml"; // 0x10 MovS
	func_173(var_12_object, var_13_string, var_14_string, var_15_string); // 0x11 Call
	var_5_object = 0; // 0x13 SetNull
	goto Label_136; // 0x14 Jump
	
Label_136:
	return 8; // 0x88 Return
	
Label_21:
	var_29_string = "init_sobor"; // 0x15 PushS
	var_30_bool = var_0_string == var_29_string; // 0x16 Eq
	if(var_30_bool == 0) goto Label_69; // 0x17 JumpB
	var_31_string = "sobor"; // 0x18 PushS
	GetSceneByName(var_6_object, var_31_string); // 0x19 Func
	var_32_bool = 0; var_33_string = ""; // 0x1b PushV
	var_33_string = "NPC_Aglaja"; // 0x1c MovS
	func_207(var_32_bool, var_33_string); // 0x1d Call
	var_37_string = "noaglaja"; // 0x1f PushS
	Trigger(var_6_object, var_37_string); // 0x20 Func
	var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = ""; var_42_string = ""; // 0x22 PushV
	var_39_object = var_6_object; // 0x23 Mov
	var_40_string = "pt_d12q01_Klara"; // 0x24 MovS
	var_41_string = "NPC_Klara"; // 0x25 MovS
	var_42_string = "d12q01_Klara.xml"; // 0x26 MovS
	func_155(var_38_object, var_39_object, var_40_string, var_41_string, var_42_string); // 0x27 Call
	var_56_object = Obj(); var_57_object = Obj(); var_58_string = ""; var_59_string = ""; var_60_string = ""; // 0x29 PushV
	var_57_object = var_6_object; // 0x2a Mov
	var_58_string = "pt_d12q01_Block"; // 0x2b MovS
	var_59_string = "NPC_Block"; // 0x2c MovS
	var_60_string = "d12q01_Block.xml"; // 0x2d MovS
	func_155(var_56_object, var_57_object, var_58_string, var_59_string, var_60_string); // 0x2e Call
	var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = ""; // 0x30 PushV
	var_62_object = var_6_object; // 0x31 Mov
	var_63_string = "pt_d12q01_Burah"; // 0x32 MovS
	var_64_string = "NPC_Burah"; // 0x33 MovS
	var_65_string = "d12q01_Burah.xml"; // 0x34 MovS
	func_155(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string); // 0x35 Call
	var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = ""; var_70_string = ""; // 0x37 PushV
	var_67_object = var_6_object; // 0x38 Mov
	var_68_string = "pt_d12q01_Aglaja"; // 0x39 MovS
	var_69_string = "NPC_Aglaja"; // 0x3a MovS
	var_70_string = "d12q01_Aglaja.xml"; // 0x3b MovS
	func_155(var_66_object, var_67_object, var_68_string, var_69_string, var_70_string); // 0x3c Call
	var_71_string = ""; var_72_bool = 0; // 0x3e PushV
	var_71_string = "isobor@door1"; // 0x3f MovS
	var_72_bool = 1; // 0x40 MovB
	func_191(var_71_string, var_72_bool); // 0x41 Call
	var_6_object = 0; // 0x43 SetNull
	goto Label_136; // 0x44 Jump
	
Label_69:
	var_81_string = "init_theater"; // 0x45 PushS
	var_82_bool = var_0_string == var_81_string; // 0x46 Eq
	if(var_82_bool == 0) goto Label_96; // 0x47 JumpB
	var_83_string = "theater"; // 0x48 PushS
	GetSceneByName(var_7_object, var_83_string); // 0x49 Func
	var_84_object = Obj(); var_85_object = Obj(); var_86_string = ""; var_87_string = ""; var_88_string = ""; // 0x4b PushV
	var_85_object = var_7_object; // 0x4c Mov
	var_86_string = "pt_d12q01_birdmask"; // 0x4d MovS
	var_87_string = "pers_birdmask"; // 0x4e MovS
	var_88_string = "d12q01_tbirdmask.xml"; // 0x4f MovS
	func_155(var_84_object, var_85_object, var_86_string, var_87_string, var_88_string); // 0x50 Call
	var_89_object = Obj(); var_90_object = Obj(); var_91_string = ""; var_92_string = ""; var_93_string = ""; // 0x52 PushV
	var_90_object = var_7_object; // 0x53 Mov
	var_91_string = "pt_d12q01_whitemask"; // 0x54 MovS
	var_92_string = "pers_whitemask"; // 0x55 MovS
	var_93_string = "d12q01_twhitemask.xml"; // 0x56 MovS
	func_155(var_89_object, var_90_object, var_91_string, var_92_string, var_93_string); // 0x57 Call
	var_94_string = ""; var_95_bool = 0; // 0x59 PushV
	var_94_string = "itheater@door1"; // 0x5a MovS
	var_95_bool = 1; // 0x5b MovB
	func_191(var_94_string, var_95_bool); // 0x5c Call
	var_7_object = 0; // 0x5e SetNull
	goto Label_136; // 0x5f Jump
	
Label_96:
	var_96_string = "init_mnogogrannik"; // 0x60 PushS
	var_97_bool = var_0_string == var_96_string; // 0x61 Eq
	if(var_97_bool == 0) goto Label_123; // 0x62 JumpB
	var_98_string = ""; var_99_bool = 0; // 0x63 PushV
	var_98_string = "hidden_room@door1"; // 0x64 MovS
	var_99_bool = 0; // 0x65 MovB
	func_191(var_98_string, var_99_bool); // 0x66 Call
	var_100_string = "hidden_room"; // 0x68 PushS
	GetSceneByName(var_8_object, var_100_string); // 0x69 Func
	var_101_object = Obj(); var_102_object = Obj(); var_103_string = ""; var_104_string = ""; var_105_string = ""; // 0x6b PushV
	var_102_object = var_8_object; // 0x6c Mov
	var_103_string = "pt_girl"; // 0x6d MovS
	var_104_string = "pers_littlegirl2"; // 0x6e MovS
	var_105_string = "d12q01_littlegirl.xml"; // 0x6f MovS
	func_155(var_101_object, var_102_object, var_103_string, var_104_string, var_105_string); // 0x70 Call
	var_106_object = Obj(); var_107_object = Obj(); var_108_string = ""; var_109_string = ""; var_110_string = ""; // 0x72 PushV
	var_107_object = var_8_object; // 0x73 Mov
	var_108_string = "pt_boy"; // 0x74 MovS
	var_109_string = "pers_littleboy2"; // 0x75 MovS
	var_110_string = "d12q01_littleboy.xml"; // 0x76 MovS
	func_155(var_106_object, var_107_object, var_108_string, var_109_string, var_110_string); // 0x77 Call
	var_8_object = 0; // 0x79 SetNull
	goto Label_136; // 0x7a Jump
	
Label_123:
	var_111_string = "fail"; // 0x7b PushS
	var_112_bool = var_0_string == var_111_string; // 0x7c Eq
	if(var_112_bool == 0) goto Label_130; // 0x7d JumpB
	func_137(); // 0x7f Call
	goto Label_136; // 0x81 Jump
	
Label_130:
	var_115_string = "completed"; // 0x82 PushS
	var_116_bool = var_0_string == var_115_string; // 0x83 Eq
	if(var_116_bool == 0) goto Label_136; // 0x84 JumpB
	func_145(); // 0x86 Call
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_137()
{
	var_113_string = "d12q01"; // 0x89 PushS
	var_114_int = -1; // 0x8a PushI
	SetVariable(var_113_string, var_114_int); // 0x8b Func
	func_153(); // 0x8e Call
	return 0; // 0x90 Return
}


func_173(var_11_object, var_13_string, var_14_string, var_15_string)
{
	var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); // 0xad PushV
	GetLocator(var_13_string, var_20_bool, var_21_cvector, var_22_cvector); // 0xae ObjFunc
	var_24_bool = var_20_bool == 0; // 0xb0 Not
	if(var_24_bool == 0) goto Label_186; // 0xb1 JumpB
	var_25_string = "Locator "; // 0xb2 PushS
	var_26_int = var_25_string + var_13_string; // 0xb3 Add
	var_27_string = " doesn't exist"; // 0xb4 PushS
	var_28_int = var_26_int + var_27_string; // 0xb5 Add
	Trace(var_28_int); // 0xb6 Func
	var_23_object = 0; // 0xb8 SetNull
	goto Label_188; // 0xb9 Jump
	
Label_188:
	var_11_object = var_23_object; // 0xbc Mov
	return 8; // 0xbd Return
	
Label_186:
	AddStationaryActor(var_23_object, var_21_cvector, var_22_cvector, var_14_string, var_15_string); // 0xba ObjFunc
}


func_207(var_32_bool, var_33_string)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0xcf PushV
	FindActor(var_35_object, var_33_string); // 0xd0 Func
	var_36_bool = var_35_object == 0; // 0xd2 Not
	if(var_36_bool == 0) goto Label_214; // 0xd3 JumpB
	var_32_bool = 0; // 0xd4 MovB
	return 2; // 0xd5 Return
	
Label_214:
	RemoveActor(var_35_object); // 0xd6 Func
	var_32_bool = 1; // 0xd8 MovB
	return 2; // 0xd9 Return
}


func_145()
{
	var_117_string = "d12q01"; // 0x91 PushS
	var_118_int = 1000; // 0x92 PushI
	SetVariable(var_117_string, var_118_int); // 0x93 Func
	func_153(); // 0x96 Call
	return 0; // 0x98 Return
}


func_153()
{
	EventDisable(26); // 0x99 EventDisable
	return 0; // 0x9a Return
}


func_155(var_38_object, var_39_object, var_40_string, var_41_string, var_42_string)
{
	var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x9b PushV
	GetLocator(var_40_string, var_47_bool, var_48_cvector, var_49_cvector); // 0x9c ObjFunc
	var_51_bool = var_47_bool == 0; // 0x9e Not
	if(var_51_bool == 0) goto Label_168; // 0x9f JumpB
	var_52_string = "Locator "; // 0xa0 PushS
	var_53_int = var_52_string + var_40_string; // 0xa1 Add
	var_54_string = " doesn't exist"; // 0xa2 PushS
	var_55_int = var_53_int + var_54_string; // 0xa3 Add
	Trace(var_55_int); // 0xa4 Func
	var_50_object = 0; // 0xa6 SetNull
	goto Label_170; // 0xa7 Jump
	
Label_170:
	var_38_object = var_50_object; // 0xaa Mov
	return 8; // 0xab Return
	
Label_168:
	AddActor(var_50_object, var_41_string, var_39_object, var_48_cvector, var_49_cvector, var_42_string); // 0xa8 Func
}


func_191(var_71_string, var_72_bool)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0xbf PushV
	FindActor(var_74_object, var_71_string); // 0xc0 Func
	var_75_bool = var_74_object == 0; // 0xc2 Not
	if(var_75_bool == 0) goto Label_202; // 0xc3 JumpB
	var_76_string = "Door "; // 0xc4 PushS
	var_77_int = var_76_string + var_71_string; // 0xc5 Add
	var_78_string = " not found"; // 0xc6 PushS
	var_79_int = var_77_int + var_78_string; // 0xc7 Add
	Trace(var_79_int); // 0xc8 Func
	
Label_202:
	var_80_string = "locked"; // 0xca PushS
	SetProperty(var_80_string, var_72_bool); // 0xcb ObjFunc
	return 2; // 0xcd Return
}


