task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_float)
{
	var_7_string = ""; var_8_bool = 0; // 0x90 PushV
	var_7_string = "cot_georg@door1"; // 0x91 MovS
	var_8_bool = 0; // 0x92 MovB
	func_371(var_7_string, var_8_bool); // 0x93 NEW_2
	var_17_string = ""; var_18_bool = 0; // 0x95 PushV
	var_17_string = "cot_maria@door1"; // 0x96 MovS
	var_18_bool = 0; // 0x97 MovB
	func_371(var_17_string, var_18_bool); // 0x98 NEW_2
	var_19_string = ""; var_20_bool = 0; // 0x9a PushV
	var_19_string = "cot_viktor@door1"; // 0x9b MovS
	var_20_bool = 0; // 0x9c MovB
	func_371(var_19_string, var_20_bool); // 0x9d NEW_2
	return 0; // 0x9f Return
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string)
{
	var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); var_9_int = 0; // 0xa0 PushV
	Trace(var_5_string); // 0xa1 Func
	var_10_string = "place_corpse"; // 0xa3 PushS
	var_11_bool = var_5_string == var_10_string; // 0xa4 Eq
	if(var_11_bool == 0) goto Label_176; // 0xa5 JumpB
	GetMainOutdoorScene(var_8_object); // 0xa6 Func
	var_12_string = "d7q02_corpse"; // 0xa8 PushS
	var_13_cvector = CVector(0.0, 0.0, 0.0); // 0xa9 PushVec
	var_14_cvector = CVector(0.0, 0.0, 1.0); // 0xaa PushVec
	var_15_string = "k7q01_corpse.xml"; // 0xab PushS
	AddActor(var_14_cvector, var_12_string, var_8_object, var_13_cvector, var_14_cvector, var_15_string); // 0xac Func
	var_8_object = 0; // 0xae SetNull
	goto Label_250; // 0xaf Jump
	
Label_250:
	return 4; // 0xfa Return
	
Label_176:
	var_16_string = "place_danko"; // 0xb0 PushS
	var_17_bool = var_5_string == var_16_string; // 0xb1 Eq
	if(var_17_bool == 0) goto Label_185; // 0xb2 JumpB
	var_18_bool = var_3_object == 0; // 0xb3 Not
	if(var_18_bool == 0) goto Label_184; // 0xb4 JumpB
	func_0(var_9_int); // 0xb6 NEW_2
	
Label_184:
	goto Label_250; // 0xb8 Jump
	
Label_185:
	var_41_string = "cot_eva_load"; // 0xb9 PushS
	var_42_bool = var_5_string == var_41_string; // 0xba Eq
	if(var_42_bool == 0) goto Label_194; // 0xbb JumpB
	var_43_string = ""; var_44_bool = 0; // 0xbc PushV
	var_43_string = "icot_eva_door"; // 0xbd MovS
	var_44_bool = 1; // 0xbe MovB
	func_388(var_43_string, var_44_bool); // 0xbf NEW_2
	goto Label_250; // 0xc1 Jump
	
Label_194:
	var_54_string = "theater_load"; // 0xc2 PushS
	var_55_bool = var_5_string == var_54_string; // 0xc3 Eq
	if(var_55_bool == 0) goto Label_201; // 0xc4 JumpB
	func_0(var_9_int); // 0xc6 NEW_2
	goto Label_250; // 0xc8 Jump
	
Label_201:
	var_56_string = "termitnik2_load"; // 0xc9 PushS
	var_57_bool = var_5_string == var_56_string; // 0xca Eq
	if(var_57_bool == 0) goto Label_208; // 0xcb JumpB
	func_17(var_9_int); // 0xcd NEW_2
	goto Label_250; // 0xcf Jump
	
Label_208:
	var_72_string = "sobor_load"; // 0xd0 PushS
	var_73_bool = var_5_string == var_72_string; // 0xd1 Eq
	if(var_73_bool == 0) goto Label_220; // 0xd2 JumpB
	var_74_object = var_0_object; // 0xd3 PushT
	if(var_74_object == 0) goto Label_215; // 0xd4 JumpB
	Remove(); // 0xd5 TObjFunc
	
Label_215:
	var_75_object = var_1_object; // 0xd7 PushT
	if(var_75_object == 0) goto Label_219; // 0xd8 JumpB
	Remove(); // 0xd9 TObjFunc
	
Label_219:
	goto Label_250; // 0xdb Jump
	
Label_220:
	var_76_string = "fail"; // 0xdc PushS
	var_77_bool = var_5_string == var_76_string; // 0xdd Eq
	if(var_77_bool == 0) goto Label_227; // 0xde JumpB
	func_251(); // 0xe0 NEW_2
	goto Label_250; // 0xe2 Jump
	
Label_227:
	var_94_string = "completed"; // 0xe3 PushS
	var_95_bool = var_5_string == var_94_string; // 0xe4 Eq
	if(var_95_bool == 0) goto Label_234; // 0xe5 JumpB
	func_259(); // 0xe7 NEW_2
	goto Label_250; // 0xe9 Jump
	
Label_234:
	var_98_string = "cleanup"; // 0xea PushS
	var_99_bool = var_5_string == var_98_string; // 0xeb Eq
	if(var_99_bool == 0) goto Label_250; // 0xec JumpB
	var_100_string = "k7q01"; // 0xed PushS
	GetVariable(var_100_string, var_9_int); // 0xee Func
	var_101_int = 1000; // 0xf0 PushI
	var_102_bool = var_9_int != var_101_int; // 0xf1 Neq
	if(var_102_bool == 0) goto Label_247; // 0xf2 JumpB
	var_103_string = "k7q01"; // 0xf3 PushS
	var_104_int = -1; // 0xf4 PushI
	SetVariable(var_103_string, var_104_int); // 0xf5 Func
	
Label_247:
	func_286(var_9_int); // 0xf8 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_float = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_float = 0; // 0x26 PushV
	var_13_string = ""; var_14_bool = 0; // 0x27 PushV
	var_13_string = "termitnik2@door1"; // 0x28 MovS
	var_14_bool = 0; // 0x29 MovB
	func_371(var_13_string, var_14_bool); // 0x2a NEW_2
	var_23_string = ""; var_24_bool = 0; // 0x2c PushV
	var_23_string = "termitnik@door1"; // 0x2d MovS
	var_24_bool = 1; // 0x2e MovB
	func_371(var_23_string, var_24_bool); // 0x2f NEW_2
	GetMainOutdoorScene(var_9_object); // 0x31 Func
	var_25_object = Obj(); var_26_object = Obj(); var_27_string = ""; var_28_string = ""; var_29_string = ""; // 0x33 PushV
	var_26_object = var_9_object; // 0x34 Mov
	var_27_string = "pt_k7q01_birdmask1"; // 0x35 MovS
	var_28_string = "pers_birdmask"; // 0x36 MovS
	var_29_string = "k7q01_birdmask.xml"; // 0x37 MovS
	func_353(var_26_object, var_27_string, var_28_string, var_29_string); // 0x38 NEW_2
	var_0_object = var_25_object; // 0x39 TMov
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = ""; // 0x3b PushV
	var_44_object = var_9_object; // 0x3c Mov
	var_45_string = "pt_k7q01_birdmask2"; // 0x3d MovS
	var_46_string = "pers_birdmask"; // 0x3e MovS
	var_47_string = "k7q01_birdmask.xml"; // 0x3f MovS
	func_353(var_44_object, var_45_string, var_46_string, var_47_string); // 0x40 NEW_2
	var_1_object = var_43_object; // 0x41 TMov
	GetScene(var_9_object); // 0x43 Func
	var_48_string = "theater"; // 0x45 PushS
	GetSceneByName(var_10_object, var_48_string); // 0x46 Func
	var_49_bool = var_10_object != var_9_object; // 0x48 Neq
	if(var_49_bool == 0) goto Label_77; // 0x49 JumpB
	func_0(var_12_float); // 0x4b NEW_2
	
Label_77:
	var_72_string = "termitnik2"; // 0x4d PushS
	GetSceneByName(var_11_object, var_72_string); // 0x4e Func
	var_73_bool = var_11_object != var_9_object; // 0x50 Neq
	if(var_73_bool == 0) goto Label_85; // 0x51 JumpB
	func_17(var_12_float); // 0x53 NEW_2
	
Label_85:
	var_88_string = "burah_home"; // 0x55 PushS
	GetSceneByName(var_9_object, var_88_string); // 0x56 Func
	var_89_string = "noburah"; // 0x58 PushS
	Trigger(var_9_object, var_89_string); // 0x59 Func
	var_90_string = ""; var_91_bool = 0; // 0x5b PushV
	var_90_string = "sobor@door1"; // 0x5c MovS
	var_91_bool = 1; // 0x5d MovB
	func_371(var_90_string, var_91_bool); // 0x5e NEW_2
	GetGameTime(var_12_float); // 0x60 Func
	var_92_float = 156.0; // 0x62 PushF
	var_93_bool = var_12_float >= var_92_float; // 0x63 GE
	if(var_93_bool == 0) goto Label_117; // 0x64 JumpB
	var_94_string = ""; var_95_bool = 0; // 0x65 PushV
	var_94_string = "cot_georg@door1"; // 0x66 MovS
	var_95_bool = 0; // 0x67 MovB
	func_371(var_94_string, var_95_bool); // 0x68 NEW_2
	var_96_string = ""; var_97_bool = 0; // 0x6a PushV
	var_96_string = "cot_maria@door1"; // 0x6b MovS
	var_97_bool = 0; // 0x6c MovB
	func_371(var_96_string, var_97_bool); // 0x6d NEW_2
	var_98_string = ""; var_99_bool = 0; // 0x6f PushV
	var_98_string = "cot_viktor@door1"; // 0x70 MovS
	var_99_bool = 0; // 0x71 MovB
	func_371(var_98_string, var_99_bool); // 0x72 NEW_2
	goto Label_136; // 0x74 Jump
	
Label_136:
	Hold(); // 0x88 Func
	goto Label_136; // 0x8a Jump
	
Label_117:
	var_100_string = ""; var_101_bool = 0; // 0x75 PushV
	var_100_string = "cot_georg@door1"; // 0x76 MovS
	var_101_bool = 1; // 0x77 MovB
	func_371(var_100_string, var_101_bool); // 0x78 NEW_2
	var_102_string = ""; var_103_bool = 0; // 0x7a PushV
	var_102_string = "cot_maria@door1"; // 0x7b MovS
	var_103_bool = 1; // 0x7c MovB
	func_371(var_102_string, var_103_bool); // 0x7d NEW_2
	var_104_string = ""; var_105_bool = 0; // 0x7f PushV
	var_104_string = "cot_viktor@door1"; // 0x80 MovS
	var_105_bool = 1; // 0x81 MovB
	func_371(var_104_string, var_105_bool); // 0x82 NEW_2
	var_106_int = 0; // 0x84 PushI
	var_107_float = 156.0; // 0x85 PushF
	SetTimeEvent(var_106_int, var_107_float); // 0x86 Func
}


func_0(var_3_object)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x0 PushV
	var_52_object = var_3_object; // 0x1 PushT
	if(var_52_object == 0) goto Label_4; // 0x2 JumpB
	return 2; // 0x3 Return
	
Label_4:
	var_53_string = "theater"; // 0x4 PushS
	GetSceneByName(var_51_object, var_53_string); // 0x5 Func
	var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = ""; // 0x7 PushV
	var_55_object = var_51_object; // 0x8 Mov
	var_56_string = "pt_k7q01_danko"; // 0x9 MovS
	var_57_string = "NPC_Bakalavr"; // 0xa MovS
	var_58_string = "k7q01_danko.xml"; // 0xb MovS
	func_335(var_54_object, var_55_object, var_56_string, var_57_string, var_58_string); // 0xc NEW_2
	var_3_object = var_54_object; // 0xd TMov
	return 2; // 0xf Return
}


func_353(var_25_object, var_27_string, var_28_string, var_29_string)
{
	var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); // 0x161 PushV
	GetLocator(var_27_string, var_34_bool, var_35_cvector, var_36_cvector); // 0x162 ObjFunc
	var_38_bool = var_34_bool == 0; // 0x164 Not
	if(var_38_bool == 0) goto Label_366; // 0x165 JumpB
	var_39_string = "Locator "; // 0x166 PushS
	var_40_int = var_39_string + var_27_string; // 0x167 Add
	var_41_string = " doesn't exist"; // 0x168 PushS
	var_42_int = var_40_int + var_41_string; // 0x169 Add
	Trace(var_42_int); // 0x16a Func
	var_37_object = 0; // 0x16c SetNull
	goto Label_368; // 0x16d Jump
	
Label_368:
	var_25_object = var_37_object; // 0x170 Mov
	return 8; // 0x171 Return
	
Label_366:
	AddStationaryActor(var_37_object, var_35_cvector, var_36_cvector, var_28_string, var_29_string); // 0x16e ObjFunc
}


func_259()
{
	var_96_string = "k7q01"; // 0x103 PushS
	var_97_int = 1000; // 0x104 PushI
	SetVariable(var_96_string, var_97_int); // 0x105 Func
	func_267(); // 0x108 NEW_2
	return 0; // 0x10a Return
}


func_388(var_43_string, var_44_bool)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x184 PushV
	FindActor(var_46_object, var_43_string); // 0x185 Func
	var_47_bool = var_46_object == 0; // 0x187 Not
	if(var_47_bool == 0) goto Label_400; // 0x188 JumpB
	var_48_string = "Door "; // 0x189 PushS
	var_49_int = var_48_string + var_43_string; // 0x18a Add
	var_50_string = " not found"; // 0x18b PushS
	var_51_int = var_49_int + var_50_string; // 0x18c Add
	Trace(var_51_int); // 0x18d Func
	goto Label_407; // 0x18f Jump
	
Label_407:
	return 2; // 0x197 Return
	
Label_400:
	var_52_bool = var_44_bool; // 0x190 Push
	if(var_52_bool == 0) goto Label_404; // 0x191 JumpB
	Close(); // 0x192 ObjFunc
	
Label_404:
	var_53_string = "locked"; // 0x194 PushS
	SetProperty(var_53_string, var_44_bool); // 0x195 ObjFunc
}


func_329(var_119_object)
{
	var_120_object = Obj(); var_121_object = Obj(); // 0x149 PushV
	self(var_121_object); // 0x14a Func
	var_119_object = var_121_object; // 0x14c Mov
	return 2; // 0x14d Return
}


func_267()
{
	var_80_object = var_0_object; // 0x10b PushT
	if(var_80_object == 0) goto Label_271; // 0x10c JumpB
	Remove(); // 0x10d TObjFunc
	
Label_271:
	var_81_object = var_1_object; // 0x10f PushT
	if(var_81_object == 0) goto Label_275; // 0x110 JumpB
	Remove(); // 0x111 TObjFunc
	
Label_275:
	var_82_string = ""; var_83_bool = 0; // 0x113 PushV
	var_82_string = "sobor@door1"; // 0x114 MovS
	var_83_bool = 0; // 0x115 MovB
	func_371(var_82_string, var_83_bool); // 0x116 NEW_2
	var_92_string = ""; var_93_bool = 0; // 0x118 PushV
	var_92_string = "termitnik@door1"; // 0x119 MovS
	var_93_bool = 0; // 0x11a MovB
	func_371(var_92_string, var_93_bool); // 0x11b NEW_2
	return 0; // 0x11d Return
}


func_335(var_54_object, var_55_object, var_56_string, var_57_string, var_58_string)
{
	var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj(); var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_object = Obj(); // 0x14f PushV
	GetLocator(var_56_string, var_63_bool, var_64_cvector, var_65_cvector); // 0x150 ObjFunc
	var_67_bool = var_63_bool == 0; // 0x152 Not
	if(var_67_bool == 0) goto Label_348; // 0x153 JumpB
	var_68_string = "Locator "; // 0x154 PushS
	var_69_int = var_68_string + var_56_string; // 0x155 Add
	var_70_string = " doesn't exist"; // 0x156 PushS
	var_71_int = var_69_int + var_70_string; // 0x157 Add
	Trace(var_71_int); // 0x158 Func
	var_66_object = 0; // 0x15a SetNull
	goto Label_350; // 0x15b Jump
	
Label_350:
	var_54_object = var_66_object; // 0x15e Mov
	return 8; // 0x15f Return
	
Label_348:
	AddActor(var_66_object, var_57_string, var_55_object, var_64_cvector, var_65_cvector, var_58_string); // 0x15c Func
}


func_17(var_4_object)
{
	var_74_object = Obj(); var_75_object = Obj(); // 0x11 PushV
	var_76_object = var_4_object; // 0x12 PushT
	if(var_76_object == 0) goto Label_21; // 0x13 JumpB
	return 2; // 0x14 Return
	
Label_21:
	var_77_string = "termitnik2"; // 0x15 PushS
	GetSceneByName(var_75_object, var_77_string); // 0x16 Func
	var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = ""; // 0x18 PushV
	var_79_object = var_75_object; // 0x19 Mov
	var_80_string = "pt_k7q01_burah"; // 0x1a MovS
	var_81_string = "NPC_Burah"; // 0x1b MovS
	var_82_string = "k7q01_burah.xml"; // 0x1c MovS
	func_335(var_78_object, var_79_object, var_80_string, var_81_string, var_82_string); // 0x1d NEW_2
	var_4_object = var_78_object; // 0x1e TMov
	var_83_bool = 0; var_84_string = ""; // 0x20 PushV
	var_84_string = "NPC_Burah"; // 0x21 MovS
	func_409(var_83_bool, var_84_string); // 0x22 NEW_2
	return 2; // 0x24 Return
}


func_371(var_13_string, var_14_bool)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x173 PushV
	FindActor(var_16_object, var_13_string); // 0x174 Func
	var_17_bool = var_16_object == 0; // 0x176 Not
	if(var_17_bool == 0) goto Label_383; // 0x177 JumpB
	var_18_string = "Door "; // 0x178 PushS
	var_19_int = var_18_string + var_13_string; // 0x179 Add
	var_20_string = " not found"; // 0x17a PushS
	var_21_int = var_19_int + var_20_string; // 0x17b Add
	Trace(var_21_int); // 0x17c Func
	goto Label_386; // 0x17e Jump
	
Label_386:
	return 2; // 0x182 Return
	
Label_383:
	var_22_string = "locked"; // 0x17f PushS
	SetProperty(var_22_string, var_14_bool); // 0x180 ObjFunc
}


func_409(var_83_bool, var_84_string)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x199 PushV
	FindActor(var_86_object, var_84_string); // 0x19a Func
	var_87_bool = var_86_object == 0; // 0x19c Not
	if(var_87_bool == 0) goto Label_416; // 0x19d JumpB
	var_83_bool = 0; // 0x19e MovB
	return 2; // 0x19f Return
	
Label_416:
	RemoveActor(var_86_object); // 0x1a0 Func
	var_83_bool = 1; // 0x1a2 MovB
	return 2; // 0x1a3 Return
}


func_251()
{
	var_78_string = "k7q01"; // 0xfb PushS
	var_79_int = -1; // 0xfc PushI
	SetVariable(var_78_string, var_79_int); // 0xfd Func
	func_267(); // 0x100 NEW_2
	return 0; // 0x102 Return
}


func_286(var_9_int)
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x11e PushV
	EventDisable(26); // 0x11f EventDisable
	func_267(); // 0x121 NEW_2
	var_107_object = var_3_object; // 0x123 PushT
	if(var_107_object == 0) goto Label_296; // 0x124 JumpB
	var_108_string = "cleanup"; // 0x125 PushS
	Trigger(var_105_object, var_108_string); // 0x126 Func
	
Label_296:
	var_109_string = ""; var_110_bool = 0; // 0x128 PushV
	var_109_string = "icot_eva_door"; // 0x129 MovS
	var_110_bool = 0; // 0x12a MovB
	func_388(var_109_string, var_110_bool); // 0x12b NEW_2
	var_111_object = var_4_object; // 0x12d PushT
	if(var_111_object == 0) goto Label_306; // 0x12e JumpB
	var_112_string = "cleanup"; // 0x12f PushS
	Trigger(var_9_int, var_112_string); // 0x130 Func
	
Label_306:
	var_113_object = var_2_object; // 0x132 PushT
	if(var_113_object == 0) goto Label_311; // 0x133 JumpB
	var_114_string = "cleanup"; // 0x134 PushS
	Trigger(var_106_object, var_114_string); // 0x135 Func
	
Label_311:
	var_115_string = "burah_home"; // 0x137 PushS
	GetSceneByName(var_106_object, var_115_string); // 0x138 Func
	var_116_string = "burah"; // 0x13a PushS
	Trigger(var_106_object, var_116_string); // 0x13b Func
	var_117_string = ""; var_118_bool = 0; // 0x13d PushV
	var_117_string = "termitnik2@door1"; // 0x13e MovS
	var_118_bool = 1; // 0x13f MovB
	func_371(var_117_string, var_118_bool); // 0x140 NEW_2
	var_119_object = Obj(); // 0x142 PushV
	func_329(var_119_object); // 0x143 NEW_2
	RemoveActor(var_119_object); // 0x145 Func
	return 2; // 0x147 Return
}


