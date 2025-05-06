task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_float)
{
	var_8_string = ""; var_9_bool = 0; // 0x1a PushV
	var_8_string = "theater@door1"; // 0x1b MovS
	var_9_bool = 1; // 0x1c MovB
	func_269(var_8_string, var_9_bool); // 0x1d NEW_2
	return 0; // 0x1f Return
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_int = 0; // 0x20 PushV
	Trace(var_6_string); // 0x21 Func
	var_17_string = "key_actors"; // 0x23 PushS
	var_18_bool = var_6_string == var_17_string; // 0x24 Eq
	if(var_18_bool == 0) goto Label_58; // 0x25 JumpB
	GetMainOutdoorScene(var_12_object); // 0x26 Func
	var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = ""; // 0x28 PushV
	var_20_object = var_12_object; // 0x29 Mov
	var_21_string = "pt_d4q01_key1"; // 0x2a MovS
	var_22_string = "pers_whitemask"; // 0x2b MovS
	var_23_string = "d4q01_key1.xml"; // 0x2c MovS
	func_251(var_20_object, var_21_string, var_22_string, var_23_string); // 0x2d NEW_2
	var_0_object = var_19_object; // 0x2e TMov
	var_37_object = Obj(); var_38_object = Obj(); var_39_string = ""; var_40_string = ""; var_41_string = ""; // 0x30 PushV
	var_38_object = var_12_object; // 0x31 Mov
	var_39_string = "pt_d4q01_key2"; // 0x32 MovS
	var_40_string = "pers_wasted_male"; // 0x33 MovS
	var_41_string = "d4q01_key2.xml"; // 0x34 MovS
	func_251(var_38_object, var_39_string, var_40_string, var_41_string); // 0x35 NEW_2
	var_1_object = var_37_object; // 0x36 TMov
	var_12_object = 0; // 0x38 SetNull
	goto Label_186; // 0x39 Jump
	
Label_186:
	return 10; // 0xba Return
	
Label_58:
	var_42_string = "pers"; // 0x3a PushS
	var_43_bool = var_6_string == var_42_string; // 0x3b Eq
	if(var_43_bool == 0) goto Label_81; // 0x3c JumpB
	GetMainOutdoorScene(var_13_object); // 0x3d Func
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = ""; // 0x3f PushV
	var_45_object = var_13_object; // 0x40 Mov
	var_46_string = "pt_d4q01_birdmask"; // 0x41 MovS
	var_47_string = "pers_birdmask"; // 0x42 MovS
	var_48_string = "d4q01_birdmask.xml"; // 0x43 MovS
	func_251(var_45_object, var_46_string, var_47_string, var_48_string); // 0x44 NEW_2
	var_2_object = var_44_object; // 0x45 TMov
	var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = ""; // 0x47 PushV
	var_50_object = var_13_object; // 0x48 Mov
	var_51_string = "pt_d4q01_wastedwoman"; // 0x49 MovS
	var_52_string = "pers_wasted_girl"; // 0x4a MovS
	var_53_string = "d4q01_wastedwoman.xml"; // 0x4b MovS
	func_251(var_50_object, var_51_string, var_52_string, var_53_string); // 0x4c NEW_2
	var_3_object = var_49_object; // 0x4d TMov
	var_13_object = 0; // 0x4f SetNull
	goto Label_186; // 0x50 Jump
	
Label_81:
	var_54_string = "key1_done"; // 0x51 PushS
	var_55_bool = var_6_string == var_54_string; // 0x52 Eq
	if(var_55_bool == 0) goto Label_87; // 0x53 JumpB
	Remove(); // 0x54 TObjFunc
	goto Label_186; // 0x56 Jump
	
Label_87:
	var_56_string = "key2_done"; // 0x57 PushS
	var_57_bool = var_6_string == var_56_string; // 0x58 Eq
	if(var_57_bool == 0) goto Label_93; // 0x59 JumpB
	Remove(); // 0x5a TObjFunc
	goto Label_186; // 0x5c Jump
	
Label_93:
	var_58_string = "birdmask_done"; // 0x5d PushS
	var_59_bool = var_6_string == var_58_string; // 0x5e Eq
	if(var_59_bool == 0) goto Label_99; // 0x5f JumpB
	Remove(); // 0x60 TObjFunc
	goto Label_186; // 0x62 Jump
	
Label_99:
	var_60_string = "wastedwoman_done"; // 0x63 PushS
	var_61_bool = var_6_string == var_60_string; // 0x64 Eq
	if(var_61_bool == 0) goto Label_105; // 0x65 JumpB
	Remove(); // 0x66 TObjFunc
	goto Label_186; // 0x68 Jump
	
Label_105:
	var_62_string = "init_sobor"; // 0x69 PushS
	var_63_bool = var_6_string == var_62_string; // 0x6a Eq
	if(var_63_bool == 0) goto Label_129; // 0x6b JumpB
	var_64_object = var_3_object; // 0x6c PushT
	if(var_64_object == 0) goto Label_112; // 0x6d JumpB
	Remove(); // 0x6e TObjFunc
	
Label_112:
	GetMainOutdoorScene(var_14_object); // 0x70 Func
	var_65_object = Obj(); var_66_object = Obj(); var_67_string = ""; var_68_string = ""; var_69_string = ""; // 0x72 PushV
	var_66_object = var_14_object; // 0x73 Mov
	var_67_string = "pt_d4q01_wastedwoman"; // 0x74 MovS
	var_68_string = "pers_wasted_male"; // 0x75 MovS
	var_69_string = "d4q01_sobor_guard.xml"; // 0x76 MovS
	func_251(var_66_object, var_67_string, var_68_string, var_69_string); // 0x77 NEW_2
	var_4_object = var_65_object; // 0x78 TMov
	var_70_string = ""; var_71_bool = 0; // 0x7a PushV
	var_70_string = "sobor@door1"; // 0x7b MovS
	var_71_bool = 0; // 0x7c MovB
	func_269(var_70_string, var_71_bool); // 0x7d NEW_2
	var_14_object = 0; // 0x7f SetNull
	goto Label_186; // 0x80 Jump
	
Label_129:
	var_80_string = "init_theater"; // 0x81 PushS
	var_81_bool = var_6_string == var_80_string; // 0x82 Eq
	if(var_81_bool == 0) goto Label_153; // 0x83 JumpB
	var_82_object = var_2_object; // 0x84 PushT
	if(var_82_object == 0) goto Label_136; // 0x85 JumpB
	Remove(); // 0x86 TObjFunc
	
Label_136:
	GetMainOutdoorScene(var_15_object); // 0x88 Func
	var_83_object = Obj(); var_84_object = Obj(); var_85_string = ""; var_86_string = ""; var_87_string = ""; // 0x8a PushV
	var_84_object = var_15_object; // 0x8b Mov
	var_85_string = "pt_d4q01_birdmask"; // 0x8c MovS
	var_86_string = "pers_birdmask"; // 0x8d MovS
	var_87_string = "d4q01_theater_guard.xml"; // 0x8e MovS
	func_251(var_84_object, var_85_string, var_86_string, var_87_string); // 0x8f NEW_2
	var_5_object = var_83_object; // 0x90 TMov
	var_88_string = ""; var_89_bool = 0; // 0x92 PushV
	var_88_string = "theater@door1"; // 0x93 MovS
	var_89_bool = 0; // 0x94 MovB
	func_269(var_88_string, var_89_bool); // 0x95 NEW_2
	var_15_object = 0; // 0x97 SetNull
	goto Label_186; // 0x98 Jump
	
Label_153:
	var_90_string = "cleanup"; // 0x99 PushS
	var_91_bool = var_6_string == var_90_string; // 0x9a Eq
	if(var_91_bool == 0) goto Label_173; // 0x9b JumpB
	var_92_string = "d4q01"; // 0x9c PushS
	GetVariable(var_92_string, var_16_int); // 0x9d Func
	var_93_int = 1000; // 0x9f PushI
	var_94_bool = var_16_int != var_93_int; // 0xa0 Neq
	if(var_94_bool == 0) goto Label_166; // 0xa1 JumpB
	func_187(); // 0xa3 NEW_2
	goto Label_169; // 0xa5 Jump
	
Label_169:
	func_220(); // 0xaa NEW_2
	goto Label_186; // 0xac Jump
	
Label_166:
	func_203(); // 0xa7 NEW_2
	
Label_173:
	var_110_string = "fail"; // 0xad PushS
	var_111_bool = var_6_string == var_110_string; // 0xae Eq
	if(var_111_bool == 0) goto Label_180; // 0xaf JumpB
	func_187(); // 0xb1 NEW_2
	goto Label_186; // 0xb3 Jump
	
Label_180:
	var_112_string = "completed"; // 0xb4 PushS
	var_113_bool = var_6_string == var_112_string; // 0xb5 Eq
	if(var_113_bool == 0) goto Label_186; // 0xb6 JumpB
	func_195(); // 0xb8 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	var_6_float = 0; var_7_float = 0; // 0x0 PushV
	GetGameTime(var_7_float); // 0x1 Func
	var_8_int = 79; // 0x3 PushI
	var_9_bool = var_7_float < var_8_int; // 0x4 LT
	if(var_9_bool == 0) goto Label_11; // 0x5 JumpB
	var_10_int = 0; // 0x6 PushI
	var_11_int = 79; // 0x7 PushI
	SetTimeEvent(var_10_int, var_11_int); // 0x8 Func
	goto Label_16; // 0xa Jump
	
Label_16:
	var_12_string = ""; var_13_bool = 0; // 0x10 PushV
	var_12_string = "sobor@door1"; // 0x11 MovS
	var_13_bool = 1; // 0x12 MovB
	func_269(var_12_string, var_13_bool); // 0x13 NEW_2
	
Label_21:
	Hold(); // 0x15 Func
	goto Label_21; // 0x17 Jump
	
Label_11:
	var_22_string = ""; var_23_bool = 0; // 0xb PushV
	var_22_string = "theater@door1"; // 0xc MovS
	var_23_bool = 1; // 0xd MovB
	func_269(var_22_string, var_23_bool); // 0xe NEW_2
}


func_195()
{
	var_114_string = "d4q01"; // 0xc3 PushS
	var_115_int = 1000; // 0xc4 PushI
	SetVariable(var_114_string, var_115_int); // 0xc5 Func
	func_203(); // 0xc8 NEW_2
	return 0; // 0xca Return
}


func_203()
{
	var_97_object = var_0_object; // 0xcb PushT
	if(var_97_object == 0) goto Label_207; // 0xcc JumpB
	Remove(); // 0xcd TObjFunc
	
Label_207:
	var_98_object = var_1_object; // 0xcf PushT
	if(var_98_object == 0) goto Label_211; // 0xd0 JumpB
	Remove(); // 0xd1 TObjFunc
	
Label_211:
	var_99_object = var_2_object; // 0xd3 PushT
	if(var_99_object == 0) goto Label_215; // 0xd4 JumpB
	Remove(); // 0xd5 TObjFunc
	
Label_215:
	var_100_object = var_3_object; // 0xd7 PushT
	if(var_100_object == 0) goto Label_219; // 0xd8 JumpB
	Remove(); // 0xd9 TObjFunc
	
Label_219:
	return 0; // 0xdb Return
}


func_269(var_12_string, var_13_bool)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x10d PushV
	FindActor(var_15_object, var_12_string); // 0x10e Func
	var_16_bool = var_15_object == 0; // 0x110 Not
	if(var_16_bool == 0) goto Label_281; // 0x111 JumpB
	var_17_string = "Door "; // 0x112 PushS
	var_18_int = var_17_string + var_12_string; // 0x113 Add
	var_19_string = " not found"; // 0x114 PushS
	var_20_int = var_18_int + var_19_string; // 0x115 Add
	Trace(var_20_int); // 0x116 Func
	goto Label_284; // 0x118 Jump
	
Label_284:
	return 2; // 0x11c Return
	
Label_281:
	var_21_string = "locked"; // 0x119 PushS
	SetProperty(var_21_string, var_13_bool); // 0x11a ObjFunc
}


func_251(var_19_object, var_21_string, var_22_string, var_23_string)
{
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); // 0xfb PushV
	GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector); // 0xfc ObjFunc
	var_32_bool = var_28_bool == 0; // 0xfe Not
	if(var_32_bool == 0) goto Label_264; // 0xff JumpB
	var_33_string = "Locator "; // 0x100 PushS
	var_34_int = var_33_string + var_21_string; // 0x101 Add
	var_35_string = " doesn't exist"; // 0x102 PushS
	var_36_int = var_34_int + var_35_string; // 0x103 Add
	Trace(var_36_int); // 0x104 Func
	var_31_object = 0; // 0x106 SetNull
	goto Label_266; // 0x107 Jump
	
Label_266:
	var_19_object = var_31_object; // 0x10a Mov
	return 8; // 0x10b Return
	
Label_264:
	AddStationaryActor(var_31_object, var_29_cvector, var_30_cvector, var_22_string, var_23_string); // 0x108 ObjFunc
}


func_245(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj(); // 0xf5 PushV
	self(var_109_object); // 0xf6 Func
	var_107_object = var_109_object; // 0xf8 Mov
	return 2; // 0xf9 Return
}


func_187()
{
	var_95_string = "d4q01"; // 0xbb PushS
	var_96_int = -1; // 0xbc PushI
	SetVariable(var_95_string, var_96_int); // 0xbd Func
	func_203(); // 0xc0 NEW_2
	return 0; // 0xc2 Return
}


func_220()
{
	EventDisable(26); // 0xdc EventDisable
	var_101_object = var_5_object; // 0xdd PushT
	if(var_101_object == 0) goto Label_225; // 0xde JumpB
	Remove(); // 0xdf TObjFunc
	
Label_225:
	var_102_object = var_4_object; // 0xe1 PushT
	if(var_102_object == 0) goto Label_229; // 0xe2 JumpB
	Remove(); // 0xe3 TObjFunc
	
Label_229:
	var_103_string = ""; var_104_bool = 0; // 0xe5 PushV
	var_103_string = "theater@door1"; // 0xe6 MovS
	var_104_bool = 0; // 0xe7 MovB
	func_269(var_103_string, var_104_bool); // 0xe8 NEW_2
	var_105_string = ""; var_106_bool = 0; // 0xea PushV
	var_105_string = "sobor@door1"; // 0xeb MovS
	var_106_bool = 1; // 0xec MovB
	func_269(var_105_string, var_106_bool); // 0xed NEW_2
	var_107_object = Obj(); // 0xef PushV
	func_245(var_107_object); // 0xf0 NEW_2
	RemoveActor(var_107_object); // 0xf2 Func
	return 0; // 0xf4 Return
}


