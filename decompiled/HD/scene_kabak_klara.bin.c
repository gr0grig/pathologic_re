task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string)
{
	var_12_string = "noandrei"; // 0x7f PushS
	var_13_bool = var_11_string == var_12_string; // 0x80 Eq
	if(var_13_bool == 0) goto Label_132; // 0x81 JumpB
	var_2_bool = 0; // 0x82 TMovB
	goto Label_136; // 0x83 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_132:
	var_14_string = "andrei"; // 0x84 PushS
	var_15_bool = var_11_string == var_14_string; // 0x85 Eq
	if(var_15_bool == 0) goto Label_136; // 0x86 JumpB
	var_2_bool = 1; // 0x87 TMovB
}


task_0_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	var_11_object = var_3_object; // 0x89 PushT
	if(var_11_object == 0) goto Label_154; // 0x8a JumpB
	clear(); // 0x8b TObjFunc
	var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); // 0x8d PushV
	var_13_object = var_3_object; // 0x8e MovT
	var_14_int = 0; // 0x8f MovI
	var_15_object = var_5_object; // 0x90 MovT
	func_240(var_14_int, var_15_object); // 0x91 NEW_2
	var_4_object = var_12_object; // 0x92 TMov
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x94 PushV
	var_32_object = var_3_object; // 0x95 MovT
	var_33_int = 0; // 0x96 MovI
	func_265(var_32_object, var_33_int); // 0x97 NEW_2
	var_6_object = var_31_object; // 0x98 TMov
	
Label_154:
	var_45_object = var_7_object; // 0x9a PushT
	if(var_45_object == 0) goto Label_171; // 0x9b JumpB
	clear(); // 0x9c TObjFunc
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); // 0x9e PushV
	var_47_object = var_7_object; // 0x9f MovT
	var_48_int = 0; // 0xa0 MovI
	var_49_object = var_9_object; // 0xa1 MovT
	func_240(var_48_int, var_49_object); // 0xa2 NEW_2
	var_8_object = var_46_object; // 0xa3 TMov
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0xa5 PushV
	var_51_object = var_7_object; // 0xa6 MovT
	var_52_int = 0; // 0xa7 MovI
	func_265(var_51_object, var_52_int); // 0xa8 NEW_2
	var_10_object = var_50_object; // 0xa9 TMov
	
Label_171:
	func_233(); // 0xac NEW_2
	return 0; // 0xae Return
}


task_0_event_5(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	func_183(); // 0xe3 NEW_2
	func_207(var_10_object); // 0xe6 NEW_2
	return 0; // 0xe8 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	CreateIntVector(var_6_object); // 0x0 Func
	CreateIntVector(var_2_bool); // 0x2 Func
	var_2_bool = 1; // 0x4 TMovB
	func_175(var_9_object, var_10_object); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_355(var_53_object)
{
	var_54_int = 0; var_55_int = 0; var_56_object = Obj(); var_57_int = 0; var_58_int = 0; var_59_object = Obj(); // 0x163 PushV
	var_60_object = var_53_object; // 0x164 Push
	if(var_60_object == 0) goto Label_375; // 0x165 JumpB
	size(var_57_int); // 0x166 ObjFunc
	var_58_int = 0; // 0x168 MovI
	
Label_361:
	var_61_bool = var_58_int < var_57_int; // 0x169 LT
	if(var_61_bool == 0) goto Label_373; // 0x16a JumpB
	get(var_59_object, var_58_int); // 0x16b ObjFunc
	var_62_object = var_59_object; // 0x16d Push
	if(var_62_object == 0) goto Label_369; // 0x16e JumpB
	RemoveActor(var_59_object); // 0x16f Func
	
Label_369:
	var_59_object = 0; // 0x171 SetNull
	var_63_int = 1; // 0x172 PushI
	var_58_int = var_58_int + var_63_int; // 0x173 Add2
	goto Label_361; // 0x174 Jump
	
Label_373:
	clear(); // 0x175 ObjFunc
	
Label_375:
	return 6; // 0x177 Return
}


func_323(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x143 PushV
	CreateObjectVector(var_28_object); // 0x144 Func
	var_26_object = var_28_object; // 0x146 Mov
	return 2; // 0x147 Return
}


func_317(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x13d PushV
	self(var_26_object); // 0x13e Func
	var_24_object = var_26_object; // 0x140 Mov
	return 2; // 0x141 Return
}


func_329(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string)
{
	var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj(); var_42_bool = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x149 PushV
	GetLocator(var_34_string, var_42_bool, var_43_cvector, var_44_cvector); // 0x14a ObjFunc
	var_46_bool = var_42_bool == 0; // 0x14c Not
	if(var_46_bool == 0) goto Label_342; // 0x14d JumpB
	var_47_string = "Locator "; // 0x14e PushS
	var_48_int = var_47_string + var_34_string; // 0x14f Add
	var_49_string = " doesn't exist"; // 0x150 PushS
	var_50_int = var_48_int + var_49_string; // 0x151 Add
	Trace(var_50_int); // 0x152 Func
	var_45_object = 0; // 0x154 SetNull
	goto Label_344; // 0x155 Jump
	
Label_344:
	var_32_object = var_45_object; // 0x158 Mov
	return 8; // 0x159 Return
	
Label_342:
	AddActor(var_45_object, var_35_string, var_33_object, var_43_cvector, var_44_cvector, var_36_string); // 0x156 Func
}


func_233()
{
	func_212(var_10_object); // 0xea NEW_2
	func_219(var_10_object); // 0xed NEW_2
	return 0; // 0xef Return
}


func_265(var_31_object, var_33_int)
{
	var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0x109 PushV
	CreateIntVector(var_38_object); // 0x10a Func
	GetItemCount(var_39_int, var_33_int); // 0x10c ObjFunc
	var_40_int = 0; // 0x10e MovI
	
Label_271:
	var_42_bool = var_40_int < var_39_int; // 0x10f LT
	if(var_42_bool == 0) goto Label_282; // 0x110 JumpB
	IsItemSelected(var_41_bool, var_40_int, var_33_int); // 0x111 ObjFunc
	var_43_bool = var_41_bool; // 0x113 Push
	if(var_43_bool == 0) goto Label_279; // 0x114 JumpB
	add(var_40_int); // 0x115 ObjFunc
	
Label_279:
	var_44_int = 1; // 0x117 PushI
	var_40_int = var_40_int + var_44_int; // 0x118 Add2
	goto Label_271; // 0x119 Jump
	
Label_282:
	var_31_object = var_38_object; // 0x11a Mov
	return 8; // 0x11b Return
}


func_9(var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	var_31_bool = var_2_bool; // 0xa PushT
	if(var_31_bool == 0) goto Label_35; // 0xb JumpB
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = ""; // 0xc PushV
	var_37_object = Obj(); // 0xd PushV
	func_317(var_37_object); // 0xe NEW_2
	var_33_object = var_37_object; // 0xf Mov
	var_34_string = "pt_andrei"; // 0x11 MovS
	var_35_string = "NPC_Andrei"; // 0x12 MovS
	var_36_string = "NPC_Klara_Andrei.xml"; // 0x13 MovS
	func_329(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string); // 0x14 NEW_2
	var_7_object = var_32_object; // 0x15 TMov
	var_51_object = var_8_object; // 0x17 PushT
	if(var_51_object == 0) goto Label_33; // 0x18 JumpB
	var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); // 0x19 PushV
	var_52_object = var_7_object; // 0x1a MovT
	var_53_int = 0; // 0x1b MovI
	var_54_object = var_8_object; // 0x1c MovT
	var_55_object = var_9_object; // 0x1d MovT
	var_56_object = var_10_object; // 0x1e MovT
	func_285(var_56_object); // 0x1f NEW_2
	
Label_33:
	add(var_5_object); // 0x21 ObjFunc
	
Label_35:
	var_76_object = Obj(); var_77_object = Obj(); var_78_string = ""; var_79_string = ""; var_80_string = ""; // 0x23 PushV
	var_81_object = Obj(); // 0x24 PushV
	func_317(var_81_object); // 0x25 NEW_2
	var_77_object = var_81_object; // 0x26 Mov
	var_78_string = "pt_dance"; // 0x28 MovS
	var_79_string = "pers_nudegirl_dance"; // 0x29 MovS
	var_80_string = "nudegirl_dance.xml"; // 0x2a MovS
	func_329(var_76_object, var_77_object, var_78_string, var_79_string, var_80_string); // 0x2b NEW_2
	add(var_76_object); // 0x2d ObjFunc
	var_82_object = Obj(); var_83_object = Obj(); var_84_string = ""; var_85_string = ""; var_86_string = ""; // 0x2f PushV
	var_87_object = Obj(); // 0x30 PushV
	func_317(var_87_object); // 0x31 NEW_2
	var_83_object = var_87_object; // 0x32 Mov
	var_84_string = "pt_salesman"; // 0x34 MovS
	var_85_string = "pers_dohodyaga"; // 0x35 MovS
	var_86_string = "salesman_kabak.xml"; // 0x36 MovS
	func_329(var_82_object, var_83_object, var_84_string, var_85_string, var_86_string); // 0x37 NEW_2
	var_3_object = var_82_object; // 0x38 TMov
	var_88_object = var_4_object; // 0x3a PushT
	if(var_88_object == 0) goto Label_68; // 0x3b JumpB
	var_89_object = Obj(); var_90_int = 0; var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); // 0x3c PushV
	var_89_object = var_3_object; // 0x3d MovT
	var_90_int = 0; // 0x3e MovI
	var_91_object = var_4_object; // 0x3f MovT
	var_92_object = var_5_object; // 0x40 MovT
	var_93_object = var_6_object; // 0x41 MovT
	func_285(var_93_object); // 0x42 NEW_2
	
Label_68:
	add(var_9_object); // 0x44 ObjFunc
	var_94_object = Obj(); var_95_object = Obj(); var_96_string = ""; var_97_string = ""; // 0x46 PushV
	var_98_object = Obj(); // 0x47 PushV
	func_317(var_98_object); // 0x48 NEW_2
	var_95_object = var_98_object; // 0x49 Mov
	var_96_string = "ps_kabak_alkash1"; // 0x4b MovS
	var_97_string = "cs_play_cycle.bin"; // 0x4c MovS
	func_347(var_94_object, var_95_object, var_96_string, var_97_string); // 0x4d NEW_2
	add(var_94_object); // 0x4f ObjFunc
	var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = ""; // 0x51 PushV
	var_107_object = Obj(); // 0x52 PushV
	func_317(var_107_object); // 0x53 NEW_2
	var_104_object = var_107_object; // 0x54 Mov
	var_105_string = "ps_kabak_alkash2"; // 0x56 MovS
	var_106_string = "cs_play_cycle.bin"; // 0x57 MovS
	func_347(var_103_object, var_104_object, var_105_string, var_106_string); // 0x58 NEW_2
	add(var_103_object); // 0x5a ObjFunc
	var_108_object = Obj(); var_109_object = Obj(); var_110_string = ""; var_111_string = ""; // 0x5c PushV
	var_112_object = Obj(); // 0x5d PushV
	func_317(var_112_object); // 0x5e NEW_2
	var_109_object = var_112_object; // 0x5f Mov
	var_110_string = "ps_kabak_unosha1"; // 0x61 MovS
	var_111_string = "cs_play_cycle.bin"; // 0x62 MovS
	func_347(var_108_object, var_109_object, var_110_string, var_111_string); // 0x63 NEW_2
	add(var_108_object); // 0x65 ObjFunc
	var_113_object = Obj(); var_114_object = Obj(); var_115_string = ""; var_116_string = ""; // 0x67 PushV
	var_117_object = Obj(); // 0x68 PushV
	func_317(var_117_object); // 0x69 NEW_2
	var_114_object = var_117_object; // 0x6a Mov
	var_115_string = "ps_kabak_woman1"; // 0x6c MovS
	var_116_string = "cs_play_cycle.bin"; // 0x6d MovS
	func_347(var_113_object, var_114_object, var_115_string, var_116_string); // 0x6e NEW_2
	add(var_113_object); // 0x70 ObjFunc
	var_118_object = Obj(); var_119_object = Obj(); var_120_string = ""; var_121_string = ""; // 0x72 PushV
	var_122_object = Obj(); // 0x73 PushV
	func_317(var_122_object); // 0x74 NEW_2
	var_119_object = var_122_object; // 0x75 Mov
	var_120_string = "ps_kabak_worker1"; // 0x77 MovS
	var_121_string = "cs_play_cycle.bin"; // 0x78 MovS
	func_347(var_118_object, var_119_object, var_120_string, var_121_string); // 0x79 NEW_2
	add(var_118_object); // 0x7b ObjFunc
	return 0; // 0x7d Return
}


func_219(var_1_object)
{
	var_64_object = Obj(); // 0xdb PushV
	var_64_object = var_1_object; // 0xdc MovT
	func_355(var_64_object); // 0xdd NEW_2
	clear(); // 0xdf TObjFunc
	return 0; // 0xe1 Return
}


func_175(var_0_object, var_10_object)
{
	CreateObjectVector(var_0_object); // 0xaf Func
	CreateObjectVector(var_10_object); // 0xb1 Func
	
Label_179:
	Hold(); // 0xb3 Func
	goto Label_179; // 0xb5 Jump
}


func_240(var_12_object, var_14_int)
{
	var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_int = 0; // 0xf0 PushV
	var_26_object = Obj(); // 0xf1 PushV
	func_323(var_26_object); // 0xf2 NEW_2
	var_21_object = var_26_object; // 0xf3 Mov
	GetItemCount(var_22_int, var_14_int); // 0xf5 ObjFunc
	var_23_int = 0; // 0xf7 MovI
	
Label_248:
	var_29_bool = var_23_int < var_22_int; // 0xf8 LT
	if(var_29_bool == 0) goto Label_262; // 0xf9 JumpB
	GetItem(var_24_object, var_23_int, var_14_int); // 0xfa ObjFunc
	add(var_24_object); // 0xfc ObjFunc
	GetItemAmount(var_25_int, var_23_int, var_14_int); // 0xfe ObjFunc
	add(var_25_int); // 0x100 ObjFunc
	var_24_object = 0; // 0x102 SetNull
	var_30_int = 1; // 0x103 PushI
	var_23_int = var_23_int + var_30_int; // 0x104 Add2
	goto Label_248; // 0x105 Jump
	
Label_262:
	var_12_object = var_21_object; // 0x106 Mov
	return 10; // 0x107 Return
}


func_207(var_1_object)
{
	var_30_object = Obj(); // 0xcf PushV
	var_30_object = var_1_object; // 0xd0 MovT
	func_9(var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_30_object); // 0xd1 NEW_2
	return 0; // 0xd3 Return
}


func_212(var_0_object)
{
	var_53_object = Obj(); // 0xd4 PushV
	var_53_object = var_0_object; // 0xd5 MovT
	func_355(var_53_object); // 0xd6 NEW_2
	clear(); // 0xd8 TObjFunc
	return 0; // 0xda Return
}


func_183()
{
	var_11_int = 0; var_12_string = ""; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_string = ""; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0xb7 PushV
	var_16_int = 1; // 0xb8 MovI
	
Label_185:
	var_21_string = "pt_fireplace"; // 0xb9 PushS
	var_17_string = var_21_string + var_16_int; // 0xba Add2
	GetLocator(var_17_string, var_18_bool, var_19_cvector); // 0xbb Func
	var_22_bool = var_18_bool == 0; // 0xbd Not
	if(var_22_bool == 0) goto Label_192; // 0xbe JumpB
	goto Label_206; // 0xbf Jump
	
Label_206:
	return 10; // 0xce Return
	
Label_192:
	var_23_string = "scripted"; // 0xc0 PushS
	var_24_object = Obj(); // 0xc1 PushV
	func_317(var_24_object); // 0xc2 NEW_2
	var_27_cvector = CVector(0.0, 0.0, 1.0); // 0xc4 PushVec
	var_28_string = "fireplace.xml"; // 0xc5 PushS
	AddActorByType(var_20_object, var_23_string, var_24_object, var_19_cvector, var_27_cvector, var_28_string); // 0xc6 Func
	add(var_20_object); // 0xc8 TObjFunc
	var_20_object = 0; // 0xca SetNull
	var_29_int = 1; // 0xcb PushI
	var_16_int = var_16_int + var_29_int; // 0xcc Add2
	goto Label_185; // 0xcd Jump
}


func_347(var_94_object, var_95_object, var_96_string, var_97_string)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x15b PushV
	var_101_cvector = CVector(0.0, 0.0, 0.0); // 0x15c PushVec
	var_102_cvector = CVector(0.0, 0.0, 1.0); // 0x15d PushVec
	AddScriptedActor(var_100_object, var_96_string, var_97_string, var_95_object, var_101_cvector, var_102_cvector); // 0x15e Func
	var_94_object = var_100_object; // 0x160 Mov
	return 2; // 0x161 Return
}


func_285(var_53_int)
{
	var_57_int = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_object = Obj(); var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_int = 0; // 0x11d PushV
	RemoveAllItems(var_53_int); // 0x11e ObjFunc
	size(var_64_int); // 0x120 ObjFunc
	var_65_int = 0; // 0x122 MovI
	
Label_291:
	var_71_bool = var_65_int < var_64_int; // 0x123 LT
	if(var_71_bool == 0) goto Label_303; // 0x124 JumpB
	get(var_66_object, var_65_int); // 0x125 ObjFunc
	get(var_67_int, var_65_int); // 0x127 ObjFunc
	AddItem(var_68_bool, var_66_object, var_53_int, var_67_int); // 0x129 ObjFunc
	var_66_object = 0; // 0x12b SetNull
	var_72_int = 1; // 0x12c PushI
	var_65_int = var_65_int + var_72_int; // 0x12d Add2
	goto Label_291; // 0x12e Jump
	
Label_303:
	size(var_64_int); // 0x12f ObjFunc
	var_69_int = 0; // 0x131 MovI
	
Label_306:
	var_73_bool = var_69_int < var_64_int; // 0x132 LT
	if(var_73_bool == 0) goto Label_316; // 0x133 JumpB
	get(var_70_int, var_69_int); // 0x134 ObjFunc
	var_74_bool = 1; // 0x136 PushB
	SelectItem(var_70_int, var_74_bool, var_53_int); // 0x137 ObjFunc
	var_75_int = 1; // 0x139 PushI
	var_69_int = var_69_int + var_75_int; // 0x13a Add2
	goto Label_306; // 0x13b Jump
	
Label_316:
	return 14; // 0x13c Return
}


