task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x61 PushV
	Trace(var_4_string); // 0x62 Func
	var_15_string = "place_sanitars"; // 0x64 PushS
	var_16_bool = var_4_string == var_15_string; // 0x65 Eq
	if(var_16_bool == 0) goto Label_146; // 0x66 JumpB
	var_17_object = Obj(); var_18_string = ""; // 0x67 PushV
	var_17_object = var_0_object; // 0x68 MovT
	var_18_string = "cleanup"; // 0x69 MovS
	func_336(var_17_object, var_18_string); // 0x6a NEW_2
	var_29_object = var_1_object; // 0x6c PushT
	if(var_29_object == 0) goto Label_113; // 0x6d JumpB
	var_30_string = "cleanup"; // 0x6e PushS
	Trigger(var_30_string, var_30_string); // 0x6f Func
	
Label_113:
	GetMainOutdoorScene(var_10_object); // 0x71 Func
	var_11_int = 1; // 0x73 MovI
	
Label_116:
	var_31_string = "pt_b11q04_sanitar"; // 0x74 PushS
	var_32_int = var_31_string + var_11_int; // 0x75 Add
	GetLocator(var_32_int, var_12_bool, var_13_cvector, var_14_cvector); // 0x76 ObjFunc
	var_33_bool = var_12_bool == 0; // 0x78 Not
	if(var_33_bool == 0) goto Label_123; // 0x79 JumpB
	goto Label_136; // 0x7a Jump
	
Label_136:
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x88 PushV
	var_35_object = var_10_object; // 0x89 Mov
	var_36_string = "pt_b11q04_corpse"; // 0x8a MovS
	var_37_string = "scripted"; // 0x8b MovS
	var_38_string = "b11q04_corpse.xml"; // 0x8c MovS
	func_279(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string); // 0x8d NEW_2
	var_3_object = var_34_object; // 0x8e TMov
	var_10_object = 0; // 0x90 SetNull
	goto Label_159; // 0x91 Jump
	
Label_159:
	return 10; // 0x9f Return
	
Label_123:
	var_52_object = Obj(); var_53_object = Obj(); var_54_string = ""; var_55_string = ""; var_56_string = ""; // 0x7b PushV
	var_53_object = var_10_object; // 0x7c Mov
	var_57_string = "pt_b11q04_sanitar"; // 0x7d PushS
	var_54_string = var_57_string + var_11_int; // 0x7e Add2
	var_55_string = "pers_sanitar"; // 0x7f MovS
	var_56_string = "b11q04_sanitar.xml"; // 0x80 MovS
	func_297(var_53_object, var_54_string, var_55_string, var_56_string); // 0x81 NEW_2
	add(var_52_object); // 0x83 TObjFunc
	var_71_int = 1; // 0x85 PushI
	var_11_int = var_11_int + var_71_int; // 0x86 Add2
	goto Label_116; // 0x87 Jump
	
Label_146:
	var_72_string = "fail"; // 0x92 PushS
	var_73_bool = var_4_string == var_72_string; // 0x93 Eq
	if(var_73_bool == 0) goto Label_153; // 0x94 JumpB
	func_174(); // 0x96 NEW_2
	goto Label_159; // 0x98 Jump
	
Label_153:
	var_80_string = "completed"; // 0x99 PushS
	var_81_bool = var_4_string == var_80_string; // 0x9a Eq
	if(var_81_bool == 0) goto Label_159; // 0x9b JumpB
	func_182(); // 0x9d NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_160(); // 0xf6 NEW_2
	return 0; // 0xf8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x0 PushV
	var_6_object = Obj(); // 0x1 PushV
	func_255(var_6_object); // 0x2 NEW_2
	var_0_object = var_6_object; // 0x3 TMov
	var_9_object = Obj(); // 0x5 PushV
	func_255(var_9_object); // 0x6 NEW_2
	var_2_object = var_9_object; // 0x7 TMov
	GetMainOutdoorScene(var_5_object); // 0x9 Func
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = ""; // 0xb PushV
	var_11_object = var_5_object; // 0xc Mov
	var_12_string = "pt_b10q04_bull"; // 0xd MovS
	var_13_string = "pers_avrox"; // 0xe MovS
	var_14_string = "b10q04_bull.xml"; // 0xf MovS
	func_261(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string); // 0x10 NEW_2
	var_1_object = var_10_object; // 0x11 TMov
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = ""; // 0x13 PushV
	var_29_object = var_5_object; // 0x14 Mov
	var_30_string = "pt_d10q03_morlok1"; // 0x15 MovS
	var_31_string = "pers_morlok"; // 0x16 MovS
	var_32_string = "d10q03_morlok.xml"; // 0x17 MovS
	func_261(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string); // 0x18 NEW_2
	add(var_28_object); // 0x1a TObjFunc
	var_33_object = Obj(); var_34_object = Obj(); var_35_string = ""; var_36_string = ""; var_37_string = ""; // 0x1c PushV
	var_34_object = var_5_object; // 0x1d Mov
	var_35_string = "pt_d10q03_morlok2"; // 0x1e MovS
	var_36_string = "pers_morlok"; // 0x1f MovS
	var_37_string = "d10q03_morlok.xml"; // 0x20 MovS
	func_261(var_33_object, var_34_object, var_35_string, var_36_string, var_37_string); // 0x21 NEW_2
	add(var_33_object); // 0x23 TObjFunc
	var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = ""; var_42_string = ""; // 0x25 PushV
	var_39_object = var_5_object; // 0x26 Mov
	var_40_string = "pt_d10q03_morlok3"; // 0x27 MovS
	var_41_string = "pers_morlok"; // 0x28 MovS
	var_42_string = "d10q03_morlok.xml"; // 0x29 MovS
	func_261(var_38_object, var_39_object, var_40_string, var_41_string, var_42_string); // 0x2a NEW_2
	add(var_38_object); // 0x2c TObjFunc
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = ""; // 0x2e PushV
	var_44_object = var_5_object; // 0x2f Mov
	var_45_string = "pt_d10q03_salesman"; // 0x30 MovS
	var_46_string = "pers_salesman"; // 0x31 MovS
	var_47_string = "d10q03_salesman.xml"; // 0x32 MovS
	func_261(var_43_object, var_44_object, var_45_string, var_46_string, var_47_string); // 0x33 NEW_2
	add(var_43_object); // 0x35 TObjFunc
	var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; var_52_string = ""; // 0x37 PushV
	var_49_object = var_5_object; // 0x38 Mov
	var_50_string = "pt_d10q03_people1"; // 0x39 MovS
	var_51_string = "pers_worker"; // 0x3a MovS
	var_52_string = "d10q03_worker.xml"; // 0x3b MovS
	func_261(var_48_object, var_49_object, var_50_string, var_51_string, var_52_string); // 0x3c NEW_2
	add(var_48_object); // 0x3e TObjFunc
	var_53_object = Obj(); var_54_object = Obj(); var_55_string = ""; var_56_string = ""; var_57_string = ""; // 0x40 PushV
	var_54_object = var_5_object; // 0x41 Mov
	var_55_string = "pt_d10q03_people2"; // 0x42 MovS
	var_56_string = "pers_dohodyaga"; // 0x43 MovS
	var_57_string = "d10q03_dohodyaga.xml"; // 0x44 MovS
	func_261(var_53_object, var_54_object, var_55_string, var_56_string, var_57_string); // 0x45 NEW_2
	add(var_53_object); // 0x47 TObjFunc
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = ""; // 0x49 PushV
	var_59_object = var_5_object; // 0x4a Mov
	var_60_string = "pt_d10q03_people3"; // 0x4b MovS
	var_61_string = "pers_unosha"; // 0x4c MovS
	var_62_string = "d10q03_unosha.xml"; // 0x4d MovS
	func_261(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string); // 0x4e NEW_2
	add(var_58_object); // 0x50 TObjFunc
	var_63_object = Obj(); var_64_object = Obj(); var_65_string = ""; var_66_string = ""; var_67_string = ""; // 0x52 PushV
	var_64_object = var_5_object; // 0x53 Mov
	var_65_string = "pt_d10q03_people4"; // 0x54 MovS
	var_66_string = "pers_alkash"; // 0x55 MovS
	var_67_string = "d10q03_alkash.xml"; // 0x56 MovS
	func_261(var_63_object, var_64_object, var_65_string, var_66_string, var_67_string); // 0x57 NEW_2
	add(var_63_object); // 0x59 TObjFunc
	var_68_int = 0; // 0x5b PushV
	var_68_int = 10; // 0x5c MovI
	func_225(var_68_int); // 0x5d NEW_2
	return 2; // 0x5f Return
}


func_160()
{
	var_6_int = 0; var_7_int = 0; // 0xa0 PushV
	var_8_string = "d10q03"; // 0xa1 PushS
	GetVariable(var_8_string, var_7_int); // 0xa2 Func
	var_9_int = 1000; // 0xa4 PushI
	var_10_bool = var_7_int != var_9_int; // 0xa5 Neq
	if(var_10_bool == 0) goto Label_170; // 0xa6 JumpB
	func_174(); // 0xa8 NEW_2
	
Label_170:
	func_201(var_6_int, var_7_int); // 0xab NEW_2
	return 2; // 0xad Return
}


func_225(var_68_int)
{
	var_69_float = 0; var_70_float = 0; // 0xe1 PushV
	GetGameTime(var_70_float); // 0xe2 Func
	var_71_int = 24; // 0xe4 PushI
	var_72_float = var_68_int * var_71_int; // 0xe5 Mult
	var_73_bool = var_70_float >= var_72_float; // 0xe6 GE
	if(var_73_bool == 0) goto Label_236; // 0xe7 JumpB
	func_201(var_69_float, var_70_float); // 0xe9 NEW_2
	goto Label_243; // 0xeb Jump
	
Label_243:
	return 2; // 0xf3 Return
	
Label_236:
	var_106_int = 0; // 0xec PushI
	var_107_int = 24; // 0xed PushI
	var_108_float = var_68_int * var_107_int; // 0xee Mult
	SetTimeEvent(var_106_int, var_108_float); // 0xef Func
	Hold(); // 0xf1 Func
}


func_261(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0x105 PushV
	GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector); // 0x106 ObjFunc
	var_23_bool = var_19_bool == 0; // 0x108 Not
	if(var_23_bool == 0) goto Label_274; // 0x109 JumpB
	var_24_string = "Locator "; // 0x10a PushS
	var_25_int = var_24_string + var_12_string; // 0x10b Add
	var_26_string = " doesn't exist"; // 0x10c PushS
	var_27_int = var_25_int + var_26_string; // 0x10d Add
	Trace(var_27_int); // 0x10e Func
	var_22_object = 0; // 0x110 SetNull
	goto Label_276; // 0x111 Jump
	
Label_276:
	var_10_object = var_22_object; // 0x114 Mov
	return 8; // 0x115 Return
	
Label_274:
	AddActor(var_22_object, var_13_string, var_11_object, var_20_cvector, var_21_cvector, var_14_string); // 0x112 Func
}


func_201(var_2_object, var_69_float)
{
	EventDisable(26); // 0xc9 EventDisable
	func_190(var_70_float); // 0xcb NEW_2
	var_88_object = Obj(); // 0xcd PushV
	var_88_object = var_2_object; // 0xce MovT
	func_315(var_88_object); // 0xcf NEW_2
	var_99_object = var_3_object; // 0xd1 PushT
	if(var_99_object == 0) goto Label_214; // 0xd2 JumpB
	var_100_string = "cleaunp"; // 0xd3 PushS
	Trigger(var_69_float, var_100_string); // 0xd4 Func
	
Label_214:
	var_101_object = var_1_object; // 0xd6 PushT
	if(var_101_object == 0) goto Label_219; // 0xd7 JumpB
	var_102_string = "cleanup"; // 0xd8 PushS
	Trigger(var_102_string, var_102_string); // 0xd9 Func
	
Label_219:
	var_103_object = Obj(); // 0xdb PushV
	func_249(var_103_object); // 0xdc NEW_2
	RemoveActor(var_103_object); // 0xde Func
	return 0; // 0xe0 Return
}


func_297(var_52_object, var_54_string, var_55_string, var_56_string)
{
	var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_object = Obj(); var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_object = Obj(); // 0x129 PushV
	GetLocator(var_54_string, var_62_bool, var_63_cvector, var_64_cvector); // 0x12a ObjFunc
	var_66_bool = var_62_bool == 0; // 0x12c Not
	if(var_66_bool == 0) goto Label_310; // 0x12d JumpB
	var_67_string = "Locator "; // 0x12e PushS
	var_68_int = var_67_string + var_54_string; // 0x12f Add
	var_69_string = " doesn't exist"; // 0x130 PushS
	var_70_int = var_68_int + var_69_string; // 0x131 Add
	Trace(var_70_int); // 0x132 Func
	var_65_object = 0; // 0x134 SetNull
	goto Label_312; // 0x135 Jump
	
Label_312:
	var_52_object = var_65_object; // 0x138 Mov
	return 8; // 0x139 Return
	
Label_310:
	AddStationaryActor(var_65_object, var_63_cvector, var_64_cvector, var_55_string, var_56_string); // 0x136 ObjFunc
}


func_174()
{
	var_11_string = "d10q03"; // 0xae PushS
	var_12_int = -1; // 0xaf PushI
	SetVariable(var_11_string, var_12_int); // 0xb0 Func
	func_190(var_7_int); // 0xb3 NEW_2
	return 0; // 0xb5 Return
}


func_336(var_74_object, var_75_string)
{
	var_76_int = 0; var_77_int = 0; var_78_object = Obj(); var_79_int = 0; var_80_int = 0; var_81_object = Obj(); // 0x150 PushV
	var_82_object = var_74_object; // 0x151 Push
	if(var_82_object == 0) goto Label_354; // 0x152 JumpB
	size(var_79_int); // 0x153 ObjFunc
	var_80_int = 0; // 0x155 MovI
	
Label_342:
	var_83_bool = var_80_int < var_79_int; // 0x156 LT
	if(var_83_bool == 0) goto Label_354; // 0x157 JumpB
	get(var_81_object, var_80_int); // 0x158 ObjFunc
	var_84_object = var_81_object; // 0x15a Push
	if(var_84_object == 0) goto Label_350; // 0x15b JumpB
	Trigger(var_81_object, var_75_string); // 0x15c Func
	
Label_350:
	var_81_object = 0; // 0x15e SetNull
	var_85_int = 1; // 0x15f PushI
	var_80_int = var_80_int + var_85_int; // 0x160 Add2
	goto Label_342; // 0x161 Jump
	
Label_354:
	return 6; // 0x162 Return
}


func_182()
{
	var_82_string = "d10q03"; // 0xb6 PushS
	var_83_int = 1000; // 0xb7 PushI
	SetVariable(var_82_string, var_83_int); // 0xb8 Func
	func_190(var_14_cvector); // 0xbb NEW_2
	return 0; // 0xbd Return
}


func_279(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string)
{
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x117 PushV
	GetLocator(var_36_string, var_43_bool, var_44_cvector, var_45_cvector); // 0x118 ObjFunc
	var_47_bool = var_43_bool == 0; // 0x11a Not
	if(var_47_bool == 0) goto Label_292; // 0x11b JumpB
	var_48_string = "Locator "; // 0x11c PushS
	var_49_int = var_48_string + var_36_string; // 0x11d Add
	var_50_string = " doesn't exist"; // 0x11e PushS
	var_51_int = var_49_int + var_50_string; // 0x11f Add
	Trace(var_51_int); // 0x120 Func
	var_46_object = 0; // 0x122 SetNull
	goto Label_294; // 0x123 Jump
	
Label_294:
	var_34_object = var_46_object; // 0x126 Mov
	return 8; // 0x127 Return
	
Label_292:
	AddActorByType(var_46_object, var_37_string, var_35_object, var_44_cvector, var_45_cvector, var_38_string); // 0x124 Func
}


func_249(var_103_object)
{
	var_104_object = Obj(); var_105_object = Obj(); // 0xf9 PushV
	self(var_105_object); // 0xfa Func
	var_103_object = var_105_object; // 0xfc Mov
	return 2; // 0xfd Return
}


func_315(var_88_object)
{
	var_89_int = 0; var_90_int = 0; var_91_object = Obj(); var_92_int = 0; var_93_int = 0; var_94_object = Obj(); // 0x13b PushV
	var_95_object = var_88_object; // 0x13c Push
	if(var_95_object == 0) goto Label_335; // 0x13d JumpB
	size(var_92_int); // 0x13e ObjFunc
	var_93_int = 0; // 0x140 MovI
	
Label_321:
	var_96_bool = var_93_int < var_92_int; // 0x141 LT
	if(var_96_bool == 0) goto Label_333; // 0x142 JumpB
	get(var_94_object, var_93_int); // 0x143 ObjFunc
	var_97_object = var_94_object; // 0x145 Push
	if(var_97_object == 0) goto Label_329; // 0x146 JumpB
	Remove(); // 0x147 ObjFunc
	
Label_329:
	var_94_object = 0; // 0x149 SetNull
	var_98_int = 1; // 0x14a PushI
	var_93_int = var_93_int + var_98_int; // 0x14b Add2
	goto Label_321; // 0x14c Jump
	
Label_333:
	clear(); // 0x14d ObjFunc
	
Label_335:
	return 6; // 0x14f Return
}


func_190(var_0_object)
{
	var_74_object = Obj(); var_75_string = ""; // 0xbe PushV
	var_74_object = var_0_object; // 0xbf MovT
	var_75_string = "cleanup"; // 0xc0 MovS
	func_336(var_74_object, var_75_string); // 0xc1 NEW_2
	var_86_object = var_1_object; // 0xc3 PushT
	if(var_86_object == 0) goto Label_200; // 0xc4 JumpB
	var_87_string = "cleanup"; // 0xc5 PushS
	Trigger(var_87_string, var_87_string); // 0xc6 Func
	
Label_200:
	return 0; // 0xc8 Return
}


func_255(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0xff PushV
	CreateObjectVector(var_8_object); // 0x100 Func
	var_6_object = var_8_object; // 0x102 Mov
	return 2; // 0x103 Return
}


