task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; // 0x9 PushV
	Trace(var_4_string); // 0xa Func
	var_11_string = "init_termitnik2"; // 0xc PushS
	var_12_bool = var_4_string == var_11_string; // 0xd Eq
	if(var_12_bool == 0) goto Label_59; // 0xe JumpB
	var_13_string = "burah_home"; // 0xf PushS
	GetSceneByName(var_8_object, var_13_string); // 0x10 Func
	var_14_string = "noburah"; // 0x12 PushS
	Trigger(var_8_object, var_14_string); // 0x13 Func
	var_15_string = "cot_eva"; // 0x15 PushS
	GetSceneByName(var_8_object, var_15_string); // 0x16 Func
	var_16_string = "nodanko"; // 0x18 PushS
	Trigger(var_8_object, var_16_string); // 0x19 Func
	var_17_string = "warehouse_rubin"; // 0x1b PushS
	GetSceneByName(var_8_object, var_17_string); // 0x1c Func
	var_18_string = "norubin"; // 0x1e PushS
	Trigger(var_8_object, var_18_string); // 0x1f Func
	var_19_string = "termitnik2"; // 0x21 PushS
	GetSceneByName(var_8_object, var_19_string); // 0x22 Func
	var_20_string = ""; var_21_bool = 0; // 0x24 PushV
	var_20_string = "termitnik2@door1"; // 0x25 MovS
	var_21_bool = 0; // 0x26 MovB
	func_240(var_20_string, var_21_bool); // 0x27 NEW_2
	var_30_object = Obj(); var_31_object = Obj(); var_32_string = ""; var_33_string = ""; var_34_string = ""; // 0x29 PushV
	var_31_object = var_8_object; // 0x2a Mov
	var_32_string = "pt_k9q01_burah"; // 0x2b MovS
	var_33_string = "NPC_Bakalavr"; // 0x2c MovS
	var_34_string = "k9q01_danko.xml"; // 0x2d MovS
	func_222(var_30_object, var_31_object, var_32_string, var_33_string, var_34_string); // 0x2e NEW_2
	var_1_object = var_30_object; // 0x2f TMov
	var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; var_52_string = ""; // 0x31 PushV
	var_49_object = var_8_object; // 0x32 Mov
	var_50_string = "pt_k9q01_danko"; // 0x33 MovS
	var_51_string = "NPC_Burah"; // 0x34 MovS
	var_52_string = "k9q01_burah.xml"; // 0x35 MovS
	func_222(var_48_object, var_49_object, var_50_string, var_51_string, var_52_string); // 0x36 NEW_2
	var_0_object = var_48_object; // 0x37 TMov
	var_8_object = 0; // 0x39 SetNull
	goto Label_139; // 0x3a Jump
	
Label_139:
	return 6; // 0x8b Return
	
Label_59:
	var_53_string = "init_mnogogrannik"; // 0x3b PushS
	var_54_bool = var_4_string == var_53_string; // 0x3c Eq
	if(var_54_bool == 0) goto Label_98; // 0x3d JumpB
	var_55_string = ""; var_56_bool = 0; // 0x3e PushV
	var_55_string = "mnogogrannik@door1"; // 0x3f MovS
	var_56_bool = 0; // 0x40 MovB
	func_240(var_55_string, var_56_bool); // 0x41 NEW_2
	var_57_string = ""; var_58_bool = 0; // 0x43 PushV
	var_57_string = "mnogogrannik_han@door2"; // 0x44 MovS
	var_58_bool = 0; // 0x45 MovB
	func_240(var_57_string, var_58_bool); // 0x46 NEW_2
	var_59_string = ""; var_60_bool = 0; // 0x48 PushV
	var_59_string = "hidden_room@door1"; // 0x49 MovS
	var_60_bool = 0; // 0x4a MovB
	func_240(var_59_string, var_60_bool); // 0x4b NEW_2
	var_61_string = "hidden_room"; // 0x4d PushS
	GetSceneByName(var_9_object, var_61_string); // 0x4e Func
	var_62_object = Obj(); var_63_object = Obj(); var_64_string = ""; var_65_string = ""; var_66_string = ""; // 0x50 PushV
	var_63_object = var_9_object; // 0x51 Mov
	var_64_string = "pt_boy"; // 0x52 MovS
	var_65_string = "pers_littleboy2"; // 0x53 MovS
	var_66_string = "k9q01_littleboy.xml"; // 0x54 MovS
	func_222(var_62_object, var_63_object, var_64_string, var_65_string, var_66_string); // 0x55 NEW_2
	var_2_object = var_62_object; // 0x56 TMov
	var_67_object = Obj(); var_68_object = Obj(); var_69_string = ""; var_70_string = ""; var_71_string = ""; // 0x58 PushV
	var_68_object = var_9_object; // 0x59 Mov
	var_69_string = "pt_girl"; // 0x5a MovS
	var_70_string = "pers_littlegirl2"; // 0x5b MovS
	var_71_string = "k9q01_littlegirl.xml"; // 0x5c MovS
	func_222(var_67_object, var_68_object, var_69_string, var_70_string, var_71_string); // 0x5d NEW_2
	var_3_object = var_67_object; // 0x5e TMov
	var_9_object = 0; // 0x60 SetNull
	goto Label_139; // 0x61 Jump
	
Label_98:
	var_72_string = "fail"; // 0x62 PushS
	var_73_bool = var_4_string == var_72_string; // 0x63 Eq
	if(var_73_bool == 0) goto Label_111; // 0x64 JumpB
	func_140(); // 0x66 NEW_2
	func_269(); // 0x69 NEW_2
	func_275(); // 0x6c NEW_2
	goto Label_139; // 0x6e Jump
	
Label_111:
	var_106_string = "completed"; // 0x6f PushS
	var_107_bool = var_4_string == var_106_string; // 0x70 Eq
	if(var_107_bool == 0) goto Label_124; // 0x71 JumpB
	func_148(); // 0x73 NEW_2
	func_269(); // 0x76 NEW_2
	func_275(); // 0x79 NEW_2
	goto Label_139; // 0x7b Jump
	
Label_124:
	var_110_string = "cleanup"; // 0x7c PushS
	var_111_bool = var_4_string == var_110_string; // 0x7d Eq
	if(var_111_bool == 0) goto Label_139; // 0x7e JumpB
	var_112_string = "k9q01"; // 0x7f PushS
	GetVariable(var_112_string, var_10_int); // 0x80 Func
	var_113_int = 1000; // 0x82 PushI
	var_114_bool = var_10_int != var_113_int; // 0x83 Neq
	if(var_114_bool == 0) goto Label_136; // 0x84 JumpB
	func_140(); // 0x86 NEW_2
	
Label_136:
	func_206(); // 0x89 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_string = ""; var_5_bool = 0; // 0x0 PushV
	var_4_string = "mnogogrannik_han@door1"; // 0x1 MovS
	var_5_bool = 0; // 0x2 MovB
	func_240(var_4_string, var_5_bool); // 0x3 NEW_2
	
Label_5:
	Hold(); // 0x5 Func
	goto Label_5; // 0x7 Jump
}


func_257(var_96_bool, var_97_string, var_98_string)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x101 PushV
	FindActor(var_100_object, var_97_string); // 0x102 Func
	var_101_bool = var_100_object == 0; // 0x104 NullEq
	if(var_101_bool == 0) goto Label_264; // 0x105 JumpB
	var_96_bool = 0; // 0x106 MovB
	return 2; // 0x107 Return
	
Label_264:
	Trigger(var_100_object, var_98_string); // 0x108 Func
	var_96_bool = 1; // 0x10a MovB
	return 2; // 0x10b Return
}


func_140()
{
	var_74_string = "k9q01"; // 0x8c PushS
	var_75_int = -1; // 0x8d PushI
	SetVariable(var_74_string, var_75_int); // 0x8e Func
	func_156(var_10_int); // 0x91 NEW_2
	return 0; // 0x93 Return
}


func_269()
{
	var_96_bool = 0; var_97_string = ""; var_98_string = ""; // 0x10d PushV
	var_97_string = "klara2_npc_positioner"; // 0x10e MovS
	var_98_string = "init"; // 0x10f MovS
	func_257(var_96_bool, var_97_string, var_98_string); // 0x110 NEW_2
	return 0; // 0x112 Return
}


func_206()
{
	EventDisable(26); // 0xce EventDisable
	func_284(); // 0xd0 NEW_2
	var_119_object = Obj(); // 0xd2 PushV
	func_216(var_119_object); // 0xd3 NEW_2
	RemoveActor(var_119_object); // 0xd5 Func
	return 0; // 0xd7 Return
}


func_240(var_4_string, var_5_bool)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0xf0 PushV
	FindActor(var_7_object, var_4_string); // 0xf1 Func
	var_8_bool = var_7_object == 0; // 0xf3 Not
	if(var_8_bool == 0) goto Label_252; // 0xf4 JumpB
	var_9_string = "Door "; // 0xf5 PushS
	var_10_int = var_9_string + var_4_string; // 0xf6 Add
	var_11_string = " not found"; // 0xf7 PushS
	var_12_int = var_10_int + var_11_string; // 0xf8 Add
	Trace(var_12_int); // 0xf9 Func
	goto Label_255; // 0xfb Jump
	
Label_255:
	return 2; // 0xff Return
	
Label_252:
	var_13_string = "locked"; // 0xfc PushS
	SetProperty(var_13_string, var_5_bool); // 0xfd ObjFunc
}


func_275()
{
	var_102_object = Obj(); var_103_object = Obj(); // 0x113 PushV
	var_104_string = "burah_home"; // 0x114 PushS
	GetSceneByName(var_103_object, var_104_string); // 0x115 Func
	var_105_string = "noburah"; // 0x117 PushS
	Trigger(var_103_object, var_105_string); // 0x118 Func
	return 2; // 0x11a Return
}


func_148()
{
	var_108_string = "k9q01"; // 0x94 PushS
	var_109_int = 1000; // 0x95 PushI
	SetVariable(var_108_string, var_109_int); // 0x96 Func
	func_156(var_10_int); // 0x99 NEW_2
	return 0; // 0x9b Return
}


func_284()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x11c PushV
	var_117_string = "burah_home"; // 0x11d PushS
	GetSceneByName(var_116_object, var_117_string); // 0x11e Func
	var_118_string = "burah"; // 0x120 PushS
	Trigger(var_116_object, var_118_string); // 0x121 Func
	return 2; // 0x123 Return
}


func_216(var_119_object)
{
	var_120_object = Obj(); var_121_object = Obj(); // 0xd8 PushV
	self(var_121_object); // 0xd9 Func
	var_119_object = var_121_object; // 0xdb Mov
	return 2; // 0xdc Return
}


func_156(var_0_object)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x9c PushV
	var_78_object = var_1_object; // 0x9d PushT
	if(var_78_object == 0) goto Label_162; // 0x9e JumpB
	var_79_string = "cleanup"; // 0x9f PushS
	Trigger(var_79_string, var_79_string); // 0xa0 Func
	
Label_162:
	var_80_object = var_0_object; // 0xa2 PushT
	if(var_80_object == 0) goto Label_167; // 0xa3 JumpB
	var_81_string = "cleanup"; // 0xa4 PushS
	Trigger(var_0_object, var_81_string); // 0xa5 Func
	
Label_167:
	var_82_object = var_2_object; // 0xa7 PushT
	if(var_82_object == 0) goto Label_172; // 0xa8 JumpB
	var_83_string = "cleanup"; // 0xa9 PushS
	Trigger(var_77_object, var_83_string); // 0xaa Func
	
Label_172:
	var_84_object = var_3_object; // 0xac PushT
	if(var_84_object == 0) goto Label_177; // 0xad JumpB
	var_85_string = "cleanup"; // 0xae PushS
	Trigger(var_76_object, var_85_string); // 0xaf Func
	
Label_177:
	var_86_string = "cot_eva"; // 0xb1 PushS
	GetSceneByName(var_77_object, var_86_string); // 0xb2 Func
	var_87_string = "danko"; // 0xb4 PushS
	Trigger(var_77_object, var_87_string); // 0xb5 Func
	var_88_string = "warehouse_rubin"; // 0xb7 PushS
	GetSceneByName(var_77_object, var_88_string); // 0xb8 Func
	var_89_string = "rubin"; // 0xba PushS
	Trigger(var_77_object, var_89_string); // 0xbb Func
	var_90_string = ""; var_91_bool = 0; // 0xbd PushV
	var_90_string = "mnogogrannik@door1"; // 0xbe MovS
	var_91_bool = 1; // 0xbf MovB
	func_240(var_90_string, var_91_bool); // 0xc0 NEW_2
	var_92_string = ""; var_93_bool = 0; // 0xc2 PushV
	var_92_string = "mnogogrannik_han@door1"; // 0xc3 MovS
	var_93_bool = 1; // 0xc4 MovB
	func_240(var_92_string, var_93_bool); // 0xc5 NEW_2
	var_94_string = ""; var_95_bool = 0; // 0xc7 PushV
	var_94_string = "hidden_room@door1"; // 0xc8 MovS
	var_95_bool = 1; // 0xc9 MovB
	func_240(var_94_string, var_95_bool); // 0xca NEW_2
	return 2; // 0xcc Return
}


func_222(var_30_object, var_31_object, var_32_string, var_33_string, var_34_string)
{
	var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); // 0xde PushV
	GetLocator(var_32_string, var_39_bool, var_40_cvector, var_41_cvector); // 0xdf ObjFunc
	var_43_bool = var_39_bool == 0; // 0xe1 Not
	if(var_43_bool == 0) goto Label_235; // 0xe2 JumpB
	var_44_string = "Locator "; // 0xe3 PushS
	var_45_int = var_44_string + var_32_string; // 0xe4 Add
	var_46_string = " doesn't exist"; // 0xe5 PushS
	var_47_int = var_45_int + var_46_string; // 0xe6 Add
	Trace(var_47_int); // 0xe7 Func
	var_42_object = 0; // 0xe9 SetNull
	goto Label_237; // 0xea Jump
	
Label_237:
	var_30_object = var_42_object; // 0xed Mov
	return 8; // 0xee Return
	
Label_235:
	AddActor(var_42_object, var_33_string, var_31_object, var_40_cvector, var_41_cvector, var_34_string); // 0xeb Func
}


