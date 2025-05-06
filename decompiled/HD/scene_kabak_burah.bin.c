task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string)
{
	var_12_string = "noandrei"; // 0x81 PushS
	var_13_bool = var_11_string == var_12_string; // 0x82 Eq
	if(var_13_bool == 0) goto Label_134; // 0x83 JumpB
	var_2_bool = 0; // 0x84 TMovB
	goto Label_138; // 0x85 Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_134:
	var_14_string = "andrei"; // 0x86 PushS
	var_15_bool = var_11_string == var_14_string; // 0x87 Eq
	if(var_15_bool == 0) goto Label_138; // 0x88 JumpB
	var_2_bool = 1; // 0x89 TMovB
}


task_0_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = ""; // 0x8b PushV
	var_12_string = "quest_b2_03"; // 0x8c MovS
	var_13_string = "kabak_unload"; // 0x8d MovS
	func_362(var_11_bool, var_12_string, var_13_string); // 0x8e NEW_2
	var_17_object = var_3_object; // 0x90 PushT
	if(var_17_object == 0) goto Label_161; // 0x91 JumpB
	clear(); // 0x92 TObjFunc
	var_18_object = Obj(); var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); // 0x94 PushV
	var_19_object = var_3_object; // 0x95 MovT
	var_20_int = 0; // 0x96 MovI
	var_21_object = var_5_object; // 0x97 MovT
	func_247(var_20_int, var_21_object); // 0x98 NEW_2
	var_4_object = var_18_object; // 0x99 TMov
	var_37_object = Obj(); var_38_object = Obj(); var_39_int = 0; // 0x9b PushV
	var_38_object = var_3_object; // 0x9c MovT
	var_39_int = 0; // 0x9d MovI
	func_272(var_38_object, var_39_int); // 0x9e NEW_2
	var_6_object = var_37_object; // 0x9f TMov
	
Label_161:
	var_51_object = var_7_object; // 0xa1 PushT
	if(var_51_object == 0) goto Label_178; // 0xa2 JumpB
	clear(); // 0xa3 TObjFunc
	var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; var_55_object = Obj(); // 0xa5 PushV
	var_53_object = var_7_object; // 0xa6 MovT
	var_54_int = 0; // 0xa7 MovI
	var_55_object = var_9_object; // 0xa8 MovT
	func_247(var_54_int, var_55_object); // 0xa9 NEW_2
	var_8_object = var_52_object; // 0xaa TMov
	var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0xac PushV
	var_57_object = var_7_object; // 0xad MovT
	var_58_int = 0; // 0xae MovI
	func_272(var_57_object, var_58_int); // 0xaf NEW_2
	var_10_object = var_56_object; // 0xb0 TMov
	
Label_178:
	func_240(); // 0xb3 NEW_2
	return 0; // 0xb5 Return
}


task_0_event_5(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	func_190(); // 0xea NEW_2
	func_214(var_10_object); // 0xed NEW_2
	return 0; // 0xef Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	CreateIntVector(var_6_object); // 0x0 Func
	CreateIntVector(var_2_bool); // 0x2 Func
	var_2_bool = 1; // 0x4 TMovB
	func_182(var_9_object, var_10_object); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_354(var_94_object, var_95_object, var_96_string, var_97_string)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x162 PushV
	var_101_cvector = CVector(0.0, 0.0, 0.0); // 0x163 PushVec
	var_102_cvector = CVector(0.0, 0.0, 1.0); // 0x164 PushVec
	AddScriptedActor(var_100_object, var_96_string, var_97_string, var_95_object, var_101_cvector, var_102_cvector); // 0x165 Func
	var_94_object = var_100_object; // 0x167 Mov
	return 2; // 0x168 Return
}


func_226(var_1_object)
{
	var_70_object = Obj(); // 0xe2 PushV
	var_70_object = var_1_object; // 0xe3 MovT
	func_374(var_70_object); // 0xe4 NEW_2
	clear(); // 0xe6 TObjFunc
	return 0; // 0xe8 Return
}


func_324(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x144 PushV
	self(var_26_object); // 0x145 Func
	var_24_object = var_26_object; // 0x147 Mov
	return 2; // 0x148 Return
}


func_292(var_53_int)
{
	var_57_int = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_object = Obj(); var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_int = 0; // 0x124 PushV
	RemoveAllItems(var_53_int); // 0x125 ObjFunc
	size(var_64_int); // 0x127 ObjFunc
	var_65_int = 0; // 0x129 MovI
	
Label_298:
	var_71_bool = var_65_int < var_64_int; // 0x12a LT
	if(var_71_bool == 0) goto Label_310; // 0x12b JumpB
	get(var_66_object, var_65_int); // 0x12c ObjFunc
	get(var_67_int, var_65_int); // 0x12e ObjFunc
	AddItem(var_68_bool, var_66_object, var_53_int, var_67_int); // 0x130 ObjFunc
	var_66_object = 0; // 0x132 SetNull
	var_72_int = 1; // 0x133 PushI
	var_65_int = var_65_int + var_72_int; // 0x134 Add2
	goto Label_298; // 0x135 Jump
	
Label_310:
	size(var_64_int); // 0x136 ObjFunc
	var_69_int = 0; // 0x138 MovI
	
Label_313:
	var_73_bool = var_69_int < var_64_int; // 0x139 LT
	if(var_73_bool == 0) goto Label_323; // 0x13a JumpB
	get(var_70_int, var_69_int); // 0x13b ObjFunc
	var_74_bool = 1; // 0x13d PushB
	SelectItem(var_70_int, var_74_bool, var_53_int); // 0x13e ObjFunc
	var_75_int = 1; // 0x140 PushI
	var_69_int = var_69_int + var_75_int; // 0x141 Add2
	goto Label_313; // 0x142 Jump
	
Label_323:
	return 14; // 0x143 Return
}


func_9(var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	var_31_bool = var_2_bool; // 0xa PushT
	if(var_31_bool == 0) goto Label_36; // 0xb JumpB
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = ""; // 0xc PushV
	var_37_object = Obj(); // 0xd PushV
	func_324(var_37_object); // 0xe NEW_2
	var_33_object = var_37_object; // 0xf Mov
	var_34_string = "pt_andrei"; // 0x11 MovS
	var_35_string = "NPC_Andrei"; // 0x12 MovS
	var_36_string = "NPC_Burah_Andrei.xml"; // 0x13 MovS
	func_336(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string); // 0x14 NEW_2
	var_7_object = var_32_object; // 0x15 TMov
	var_51_object = var_8_object; // 0x17 PushT
	if(var_51_object == 0) goto Label_33; // 0x18 JumpB
	var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); // 0x19 PushV
	var_52_object = var_7_object; // 0x1a MovT
	var_53_int = 0; // 0x1b MovI
	var_54_object = var_8_object; // 0x1c MovT
	var_55_object = var_9_object; // 0x1d MovT
	var_56_object = var_10_object; // 0x1e MovT
	func_292(var_56_object); // 0x1f NEW_2
	
Label_33:
	add(var_5_object); // 0x21 ObjFunc
	goto Label_37; // 0x23 Jump
	
Label_37:
	var_76_object = Obj(); var_77_object = Obj(); var_78_string = ""; var_79_string = ""; var_80_string = ""; // 0x25 PushV
	var_81_object = Obj(); // 0x26 PushV
	func_324(var_81_object); // 0x27 NEW_2
	var_77_object = var_81_object; // 0x28 Mov
	var_78_string = "pt_dance"; // 0x2a MovS
	var_79_string = "pers_nudegirl_dance"; // 0x2b MovS
	var_80_string = "nudegirl_dance.xml"; // 0x2c MovS
	func_336(var_76_object, var_77_object, var_78_string, var_79_string, var_80_string); // 0x2d NEW_2
	add(var_76_object); // 0x2f ObjFunc
	var_82_object = Obj(); var_83_object = Obj(); var_84_string = ""; var_85_string = ""; var_86_string = ""; // 0x31 PushV
	var_87_object = Obj(); // 0x32 PushV
	func_324(var_87_object); // 0x33 NEW_2
	var_83_object = var_87_object; // 0x34 Mov
	var_84_string = "pt_salesman"; // 0x36 MovS
	var_85_string = "pers_dohodyaga"; // 0x37 MovS
	var_86_string = "salesman_kabak.xml"; // 0x38 MovS
	func_336(var_82_object, var_83_object, var_84_string, var_85_string, var_86_string); // 0x39 NEW_2
	var_3_object = var_82_object; // 0x3a TMov
	var_88_object = var_4_object; // 0x3c PushT
	if(var_88_object == 0) goto Label_70; // 0x3d JumpB
	var_89_object = Obj(); var_90_int = 0; var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); // 0x3e PushV
	var_89_object = var_3_object; // 0x3f MovT
	var_90_int = 0; // 0x40 MovI
	var_91_object = var_4_object; // 0x41 MovT
	var_92_object = var_5_object; // 0x42 MovT
	var_93_object = var_6_object; // 0x43 MovT
	func_292(var_93_object); // 0x44 NEW_2
	
Label_70:
	add(var_9_object); // 0x46 ObjFunc
	var_94_object = Obj(); var_95_object = Obj(); var_96_string = ""; var_97_string = ""; // 0x48 PushV
	var_98_object = Obj(); // 0x49 PushV
	func_324(var_98_object); // 0x4a NEW_2
	var_95_object = var_98_object; // 0x4b Mov
	var_96_string = "ps_kabak_alkash1"; // 0x4d MovS
	var_97_string = "cs_play_cycle.bin"; // 0x4e MovS
	func_354(var_94_object, var_95_object, var_96_string, var_97_string); // 0x4f NEW_2
	add(var_94_object); // 0x51 ObjFunc
	var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = ""; // 0x53 PushV
	var_107_object = Obj(); // 0x54 PushV
	func_324(var_107_object); // 0x55 NEW_2
	var_104_object = var_107_object; // 0x56 Mov
	var_105_string = "ps_kabak_alkash2"; // 0x58 MovS
	var_106_string = "cs_play_cycle.bin"; // 0x59 MovS
	func_354(var_103_object, var_104_object, var_105_string, var_106_string); // 0x5a NEW_2
	add(var_103_object); // 0x5c ObjFunc
	var_108_object = Obj(); var_109_object = Obj(); var_110_string = ""; var_111_string = ""; // 0x5e PushV
	var_112_object = Obj(); // 0x5f PushV
	func_324(var_112_object); // 0x60 NEW_2
	var_109_object = var_112_object; // 0x61 Mov
	var_110_string = "ps_kabak_unosha1"; // 0x63 MovS
	var_111_string = "cs_play_cycle.bin"; // 0x64 MovS
	func_354(var_108_object, var_109_object, var_110_string, var_111_string); // 0x65 NEW_2
	add(var_108_object); // 0x67 ObjFunc
	var_113_object = Obj(); var_114_object = Obj(); var_115_string = ""; var_116_string = ""; // 0x69 PushV
	var_117_object = Obj(); // 0x6a PushV
	func_324(var_117_object); // 0x6b NEW_2
	var_114_object = var_117_object; // 0x6c Mov
	var_115_string = "ps_kabak_woman1"; // 0x6e MovS
	var_116_string = "cs_play_cycle.bin"; // 0x6f MovS
	func_354(var_113_object, var_114_object, var_115_string, var_116_string); // 0x70 NEW_2
	add(var_113_object); // 0x72 ObjFunc
	var_118_object = Obj(); var_119_object = Obj(); var_120_string = ""; var_121_string = ""; // 0x74 PushV
	var_122_object = Obj(); // 0x75 PushV
	func_324(var_122_object); // 0x76 NEW_2
	var_119_object = var_122_object; // 0x77 Mov
	var_120_string = "ps_kabak_worker1"; // 0x79 MovS
	var_121_string = "cs_play_cycle.bin"; // 0x7a MovS
	func_354(var_118_object, var_119_object, var_120_string, var_121_string); // 0x7b NEW_2
	add(var_118_object); // 0x7d ObjFunc
	return 0; // 0x7f Return
	
Label_36:
	var_7_object = 0; // 0x24 SetNullT
}


func_362(var_11_bool, var_12_string, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x16a PushV
	FindActor(var_15_object, var_12_string); // 0x16b Func
	var_16_bool = var_15_object == 0; // 0x16d NullEq
	if(var_16_bool == 0) goto Label_369; // 0x16e JumpB
	var_11_bool = 0; // 0x16f MovB
	return 2; // 0x170 Return
	
Label_369:
	Trigger(var_15_object, var_13_string); // 0x171 Func
	var_11_bool = 1; // 0x173 MovB
	return 2; // 0x174 Return
}


func_330(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x14a PushV
	CreateObjectVector(var_34_object); // 0x14b Func
	var_32_object = var_34_object; // 0x14d Mov
	return 2; // 0x14e Return
}


func_336(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string)
{
	var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj(); var_42_bool = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x150 PushV
	GetLocator(var_34_string, var_42_bool, var_43_cvector, var_44_cvector); // 0x151 ObjFunc
	var_46_bool = var_42_bool == 0; // 0x153 Not
	if(var_46_bool == 0) goto Label_349; // 0x154 JumpB
	var_47_string = "Locator "; // 0x155 PushS
	var_48_int = var_47_string + var_34_string; // 0x156 Add
	var_49_string = " doesn't exist"; // 0x157 PushS
	var_50_int = var_48_int + var_49_string; // 0x158 Add
	Trace(var_50_int); // 0x159 Func
	var_45_object = 0; // 0x15b SetNull
	goto Label_351; // 0x15c Jump
	
Label_351:
	var_32_object = var_45_object; // 0x15f Mov
	return 8; // 0x160 Return
	
Label_349:
	AddActor(var_45_object, var_35_string, var_33_object, var_43_cvector, var_44_cvector, var_36_string); // 0x15d Func
}


func_272(var_37_object, var_39_int)
{
	var_40_object = Obj(); var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0x110 PushV
	CreateIntVector(var_44_object); // 0x111 Func
	GetItemCount(var_45_int, var_39_int); // 0x113 ObjFunc
	var_46_int = 0; // 0x115 MovI
	
Label_278:
	var_48_bool = var_46_int < var_45_int; // 0x116 LT
	if(var_48_bool == 0) goto Label_289; // 0x117 JumpB
	IsItemSelected(var_47_bool, var_46_int, var_39_int); // 0x118 ObjFunc
	var_49_bool = var_47_bool; // 0x11a Push
	if(var_49_bool == 0) goto Label_286; // 0x11b JumpB
	add(var_46_int); // 0x11c ObjFunc
	
Label_286:
	var_50_int = 1; // 0x11e PushI
	var_46_int = var_46_int + var_50_int; // 0x11f Add2
	goto Label_278; // 0x120 Jump
	
Label_289:
	var_37_object = var_44_object; // 0x121 Mov
	return 8; // 0x122 Return
}


func_240()
{
	func_219(var_10_object); // 0xf1 NEW_2
	func_226(var_10_object); // 0xf4 NEW_2
	return 0; // 0xf6 Return
}


func_182(var_0_object, var_10_object)
{
	CreateObjectVector(var_0_object); // 0xb6 Func
	CreateObjectVector(var_10_object); // 0xb8 Func
	
Label_186:
	Hold(); // 0xba Func
	goto Label_186; // 0xbc Jump
}


func_247(var_18_object, var_20_int)
{
	var_22_object = Obj(); var_23_int = 0; var_24_int = 0; var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_int = 0; var_29_int = 0; var_30_object = Obj(); var_31_int = 0; // 0xf7 PushV
	var_32_object = Obj(); // 0xf8 PushV
	func_330(var_32_object); // 0xf9 NEW_2
	var_27_object = var_32_object; // 0xfa Mov
	GetItemCount(var_28_int, var_20_int); // 0xfc ObjFunc
	var_29_int = 0; // 0xfe MovI
	
Label_255:
	var_35_bool = var_29_int < var_28_int; // 0xff LT
	if(var_35_bool == 0) goto Label_269; // 0x100 JumpB
	GetItem(var_30_object, var_29_int, var_20_int); // 0x101 ObjFunc
	add(var_30_object); // 0x103 ObjFunc
	GetItemAmount(var_31_int, var_29_int, var_20_int); // 0x105 ObjFunc
	add(var_31_int); // 0x107 ObjFunc
	var_30_object = 0; // 0x109 SetNull
	var_36_int = 1; // 0x10a PushI
	var_29_int = var_29_int + var_36_int; // 0x10b Add2
	goto Label_255; // 0x10c Jump
	
Label_269:
	var_18_object = var_27_object; // 0x10d Mov
	return 10; // 0x10e Return
}


func_374(var_59_object)
{
	var_60_int = 0; var_61_int = 0; var_62_object = Obj(); var_63_int = 0; var_64_int = 0; var_65_object = Obj(); // 0x176 PushV
	var_66_object = var_59_object; // 0x177 Push
	if(var_66_object == 0) goto Label_394; // 0x178 JumpB
	size(var_63_int); // 0x179 ObjFunc
	var_64_int = 0; // 0x17b MovI
	
Label_380:
	var_67_bool = var_64_int < var_63_int; // 0x17c LT
	if(var_67_bool == 0) goto Label_392; // 0x17d JumpB
	get(var_65_object, var_64_int); // 0x17e ObjFunc
	var_68_object = var_65_object; // 0x180 Push
	if(var_68_object == 0) goto Label_388; // 0x181 JumpB
	RemoveActor(var_65_object); // 0x182 Func
	
Label_388:
	var_65_object = 0; // 0x184 SetNull
	var_69_int = 1; // 0x185 PushI
	var_64_int = var_64_int + var_69_int; // 0x186 Add2
	goto Label_380; // 0x187 Jump
	
Label_392:
	clear(); // 0x188 ObjFunc
	
Label_394:
	return 6; // 0x18a Return
}


func_214(var_1_object)
{
	var_30_object = Obj(); // 0xd6 PushV
	var_30_object = var_1_object; // 0xd7 MovT
	func_9(var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_30_object); // 0xd8 NEW_2
	return 0; // 0xda Return
}


func_219(var_0_object)
{
	var_59_object = Obj(); // 0xdb PushV
	var_59_object = var_0_object; // 0xdc MovT
	func_374(var_59_object); // 0xdd NEW_2
	clear(); // 0xdf TObjFunc
	return 0; // 0xe1 Return
}


func_190()
{
	var_11_int = 0; var_12_string = ""; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_string = ""; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0xbe PushV
	var_16_int = 1; // 0xbf MovI
	
Label_192:
	var_21_string = "pt_fireplace"; // 0xc0 PushS
	var_17_string = var_21_string + var_16_int; // 0xc1 Add2
	GetLocator(var_17_string, var_18_bool, var_19_cvector); // 0xc2 Func
	var_22_bool = var_18_bool == 0; // 0xc4 Not
	if(var_22_bool == 0) goto Label_199; // 0xc5 JumpB
	goto Label_213; // 0xc6 Jump
	
Label_213:
	return 10; // 0xd5 Return
	
Label_199:
	var_23_string = "scripted"; // 0xc7 PushS
	var_24_object = Obj(); // 0xc8 PushV
	func_324(var_24_object); // 0xc9 NEW_2
	var_27_cvector = CVector(0.0, 0.0, 1.0); // 0xcb PushVec
	var_28_string = "fireplace.xml"; // 0xcc PushS
	AddActorByType(var_20_object, var_23_string, var_24_object, var_19_cvector, var_27_cvector, var_28_string); // 0xcd Func
	add(var_20_object); // 0xcf TObjFunc
	var_20_object = 0; // 0xd1 SetNull
	var_29_int = 1; // 0xd2 PushI
	var_16_int = var_16_int + var_29_int; // 0xd3 Add2
	goto Label_192; // 0xd4 Jump
}


