task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_string)
{
	var_8_string = "noandrei"; // 0x72 PushS
	var_9_bool = var_7_string == var_8_string; // 0x73 Eq
	if(var_9_bool == 0) goto Label_119; // 0x74 JumpB
	var_2_bool = 0; // 0x75 TMovB
	goto Label_123; // 0x76 Jump
	
Label_123:
	return 0; // 0x7b Return
	
Label_119:
	var_10_string = "andrei"; // 0x77 PushS
	var_11_bool = var_7_string == var_10_string; // 0x78 Eq
	if(var_11_bool == 0) goto Label_123; // 0x79 JumpB
	var_2_bool = 1; // 0x7a TMovB
}


task_0_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object)
{
	var_7_object = var_3_object; // 0x7c PushT
	if(var_7_object == 0) goto Label_141; // 0x7d JumpB
	clear(); // 0x7e TObjFunc
	var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); // 0x80 PushV
	var_9_object = var_3_object; // 0x81 MovT
	var_10_int = 0; // 0x82 MovI
	var_11_object = var_5_object; // 0x83 MovT
	func_210(var_10_int, var_11_object); // 0x84 NEW_2
	var_4_object = var_8_object; // 0x85 TMov
	var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x87 PushV
	var_28_object = var_3_object; // 0x88 MovT
	var_29_int = 0; // 0x89 MovI
	func_235(var_28_object, var_29_int); // 0x8a NEW_2
	var_6_object = var_27_object; // 0x8b TMov
	
Label_141:
	func_203(); // 0x8e NEW_2
	return 0; // 0x90 Return
}


task_0_event_5(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object)
{
	func_153(); // 0xc5 NEW_2
	func_177(var_6_object); // 0xc8 NEW_2
	return 0; // 0xca Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object)
{
	CreateIntVector(var_2_bool); // 0x0 Func
	var_2_bool = 1; // 0x2 TMovB
	func_145(var_5_object, var_6_object); // 0x4 NEW_2
	return 0; // 0x6 Return
}


func_287(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x11f PushV
	self(var_22_object); // 0x120 Func
	var_20_object = var_22_object; // 0x122 Mov
	return 2; // 0x123 Return
}


func_325(var_41_object)
{
	var_42_int = 0; var_43_int = 0; var_44_object = Obj(); var_45_int = 0; var_46_int = 0; var_47_object = Obj(); // 0x145 PushV
	var_48_object = var_41_object; // 0x146 Push
	if(var_48_object == 0) goto Label_345; // 0x147 JumpB
	size(var_45_int); // 0x148 ObjFunc
	var_46_int = 0; // 0x14a MovI
	
Label_331:
	var_49_bool = var_46_int < var_45_int; // 0x14b LT
	if(var_49_bool == 0) goto Label_343; // 0x14c JumpB
	get(var_47_object, var_46_int); // 0x14d ObjFunc
	var_50_object = var_47_object; // 0x14f Push
	if(var_50_object == 0) goto Label_339; // 0x150 JumpB
	RemoveActor(var_47_object); // 0x151 Func
	
Label_339:
	var_47_object = 0; // 0x153 SetNull
	var_51_int = 1; // 0x154 PushI
	var_46_int = var_46_int + var_51_int; // 0x155 Add2
	goto Label_331; // 0x156 Jump
	
Label_343:
	clear(); // 0x157 ObjFunc
	
Label_345:
	return 6; // 0x159 Return
}


func_293(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x125 PushV
	CreateObjectVector(var_24_object); // 0x126 Func
	var_22_object = var_24_object; // 0x128 Mov
	return 2; // 0x129 Return
}


func_7(var_3_object, var_4_object, var_5_object, var_6_object)
{
	var_27_bool = var_2_bool; // 0x8 PushT
	if(var_27_bool == 0) goto Label_22; // 0x9 JumpB
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = ""; // 0xa PushV
	var_33_object = Obj(); // 0xb PushV
	func_287(var_33_object); // 0xc NEW_2
	var_29_object = var_33_object; // 0xd Mov
	var_30_string = "pt_andrei"; // 0xf MovS
	var_31_string = "NPC_Andrei"; // 0x10 MovS
	var_32_string = "NPC_Danko_Andrei.xml"; // 0x11 MovS
	func_299(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string); // 0x12 NEW_2
	add(var_28_object); // 0x14 ObjFunc
	
Label_22:
	var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = ""; // 0x16 PushV
	var_52_object = Obj(); // 0x17 PushV
	func_287(var_52_object); // 0x18 NEW_2
	var_48_object = var_52_object; // 0x19 Mov
	var_49_string = "pt_dance"; // 0x1b MovS
	var_50_string = "pers_nudegirl_dance"; // 0x1c MovS
	var_51_string = "nudegirl_dance.xml"; // 0x1d MovS
	func_299(var_47_object, var_48_object, var_49_string, var_50_string, var_51_string); // 0x1e NEW_2
	add(var_47_object); // 0x20 ObjFunc
	var_53_object = Obj(); var_54_object = Obj(); var_55_string = ""; var_56_string = ""; var_57_string = ""; // 0x22 PushV
	var_58_object = Obj(); // 0x23 PushV
	func_287(var_58_object); // 0x24 NEW_2
	var_54_object = var_58_object; // 0x25 Mov
	var_55_string = "pt_salesman"; // 0x27 MovS
	var_56_string = "pers_dohodyaga"; // 0x28 MovS
	var_57_string = "salesman_kabak.xml"; // 0x29 MovS
	func_299(var_53_object, var_54_object, var_55_string, var_56_string, var_57_string); // 0x2a NEW_2
	var_3_object = var_53_object; // 0x2b TMov
	var_59_object = var_4_object; // 0x2d PushT
	if(var_59_object == 0) goto Label_55; // 0x2e JumpB
	var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_object = Obj(); // 0x2f PushV
	var_60_object = var_3_object; // 0x30 MovT
	var_61_int = 0; // 0x31 MovI
	var_62_object = var_4_object; // 0x32 MovT
	var_63_object = var_5_object; // 0x33 MovT
	var_64_object = var_6_object; // 0x34 MovT
	func_255(var_64_object); // 0x35 NEW_2
	
Label_55:
	add(var_5_object); // 0x37 ObjFunc
	var_84_object = Obj(); var_85_object = Obj(); var_86_string = ""; var_87_string = ""; // 0x39 PushV
	var_88_object = Obj(); // 0x3a PushV
	func_287(var_88_object); // 0x3b NEW_2
	var_85_object = var_88_object; // 0x3c Mov
	var_86_string = "ps_kabak_alkash1"; // 0x3e MovS
	var_87_string = "cs_play_cycle.bin"; // 0x3f MovS
	func_317(var_84_object, var_85_object, var_86_string, var_87_string); // 0x40 NEW_2
	add(var_84_object); // 0x42 ObjFunc
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; // 0x44 PushV
	var_97_object = Obj(); // 0x45 PushV
	func_287(var_97_object); // 0x46 NEW_2
	var_94_object = var_97_object; // 0x47 Mov
	var_95_string = "ps_kabak_alkash2"; // 0x49 MovS
	var_96_string = "cs_play_cycle.bin"; // 0x4a MovS
	func_317(var_93_object, var_94_object, var_95_string, var_96_string); // 0x4b NEW_2
	add(var_93_object); // 0x4d ObjFunc
	var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = ""; // 0x4f PushV
	var_102_object = Obj(); // 0x50 PushV
	func_287(var_102_object); // 0x51 NEW_2
	var_99_object = var_102_object; // 0x52 Mov
	var_100_string = "ps_kabak_unosha1"; // 0x54 MovS
	var_101_string = "cs_play_cycle.bin"; // 0x55 MovS
	func_317(var_98_object, var_99_object, var_100_string, var_101_string); // 0x56 NEW_2
	add(var_98_object); // 0x58 ObjFunc
	var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = ""; // 0x5a PushV
	var_107_object = Obj(); // 0x5b PushV
	func_287(var_107_object); // 0x5c NEW_2
	var_104_object = var_107_object; // 0x5d Mov
	var_105_string = "ps_kabak_woman1"; // 0x5f MovS
	var_106_string = "cs_play_cycle.bin"; // 0x60 MovS
	func_317(var_103_object, var_104_object, var_105_string, var_106_string); // 0x61 NEW_2
	add(var_103_object); // 0x63 ObjFunc
	var_108_object = Obj(); var_109_object = Obj(); var_110_string = ""; var_111_string = ""; // 0x65 PushV
	var_112_object = Obj(); // 0x66 PushV
	func_287(var_112_object); // 0x67 NEW_2
	var_109_object = var_112_object; // 0x68 Mov
	var_110_string = "ps_kabak_worker1"; // 0x6a MovS
	var_111_string = "cs_play_cycle.bin"; // 0x6b MovS
	func_317(var_108_object, var_109_object, var_110_string, var_111_string); // 0x6c NEW_2
	add(var_108_object); // 0x6e ObjFunc
	return 0; // 0x70 Return
}


func_299(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string)
{
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj(); // 0x12b PushV
	GetLocator(var_30_string, var_38_bool, var_39_cvector, var_40_cvector); // 0x12c ObjFunc
	var_42_bool = var_38_bool == 0; // 0x12e Not
	if(var_42_bool == 0) goto Label_312; // 0x12f JumpB
	var_43_string = "Locator "; // 0x130 PushS
	var_44_int = var_43_string + var_30_string; // 0x131 Add
	var_45_string = " doesn't exist"; // 0x132 PushS
	var_46_int = var_44_int + var_45_string; // 0x133 Add
	Trace(var_46_int); // 0x134 Func
	var_41_object = 0; // 0x136 SetNull
	goto Label_314; // 0x137 Jump
	
Label_314:
	var_28_object = var_41_object; // 0x13a Mov
	return 8; // 0x13b Return
	
Label_312:
	AddActor(var_41_object, var_31_string, var_29_object, var_39_cvector, var_40_cvector, var_32_string); // 0x138 Func
}


func_235(var_27_object, var_29_int)
{
	var_30_object = Obj(); var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0xeb PushV
	CreateIntVector(var_34_object); // 0xec Func
	GetItemCount(var_35_int, var_29_int); // 0xee ObjFunc
	var_36_int = 0; // 0xf0 MovI
	
Label_241:
	var_38_bool = var_36_int < var_35_int; // 0xf1 LT
	if(var_38_bool == 0) goto Label_252; // 0xf2 JumpB
	IsItemSelected(var_37_bool, var_36_int, var_29_int); // 0xf3 ObjFunc
	var_39_bool = var_37_bool; // 0xf5 Push
	if(var_39_bool == 0) goto Label_249; // 0xf6 JumpB
	add(var_36_int); // 0xf7 ObjFunc
	
Label_249:
	var_40_int = 1; // 0xf9 PushI
	var_36_int = var_36_int + var_40_int; // 0xfa Add2
	goto Label_241; // 0xfb Jump
	
Label_252:
	var_27_object = var_34_object; // 0xfc Mov
	return 8; // 0xfd Return
}


func_203()
{
	func_182(var_6_object); // 0xcc NEW_2
	func_189(var_6_object); // 0xcf NEW_2
	return 0; // 0xd1 Return
}


func_145(var_0_object, var_6_object)
{
	CreateObjectVector(var_0_object); // 0x91 Func
	CreateObjectVector(var_6_object); // 0x93 Func
	
Label_149:
	Hold(); // 0x95 Func
	goto Label_149; // 0x97 Jump
}


func_210(var_8_object, var_10_int)
{
	var_12_object = Obj(); var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_int = 0; // 0xd2 PushV
	var_22_object = Obj(); // 0xd3 PushV
	func_293(var_22_object); // 0xd4 NEW_2
	var_17_object = var_22_object; // 0xd5 Mov
	GetItemCount(var_18_int, var_10_int); // 0xd7 ObjFunc
	var_19_int = 0; // 0xd9 MovI
	
Label_218:
	var_25_bool = var_19_int < var_18_int; // 0xda LT
	if(var_25_bool == 0) goto Label_232; // 0xdb JumpB
	GetItem(var_20_object, var_19_int, var_10_int); // 0xdc ObjFunc
	add(var_20_object); // 0xde ObjFunc
	GetItemAmount(var_21_int, var_19_int, var_10_int); // 0xe0 ObjFunc
	add(var_21_int); // 0xe2 ObjFunc
	var_20_object = 0; // 0xe4 SetNull
	var_26_int = 1; // 0xe5 PushI
	var_19_int = var_19_int + var_26_int; // 0xe6 Add2
	goto Label_218; // 0xe7 Jump
	
Label_232:
	var_8_object = var_17_object; // 0xe8 Mov
	return 10; // 0xe9 Return
}


func_177(var_1_object)
{
	var_26_object = Obj(); // 0xb1 PushV
	var_26_object = var_1_object; // 0xb2 MovT
	func_7(var_4_object, var_5_object, var_6_object, var_26_object); // 0xb3 NEW_2
	return 0; // 0xb5 Return
}


func_182(var_0_object)
{
	var_41_object = Obj(); // 0xb6 PushV
	var_41_object = var_0_object; // 0xb7 MovT
	func_325(var_41_object); // 0xb8 NEW_2
	clear(); // 0xba TObjFunc
	return 0; // 0xbc Return
}


func_189(var_1_object)
{
	var_52_object = Obj(); // 0xbd PushV
	var_52_object = var_1_object; // 0xbe MovT
	func_325(var_52_object); // 0xbf NEW_2
	clear(); // 0xc1 TObjFunc
	return 0; // 0xc3 Return
}


func_153()
{
	var_7_int = 0; var_8_string = ""; var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_string = ""; var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_object = Obj(); // 0x99 PushV
	var_12_int = 1; // 0x9a MovI
	
Label_155:
	var_17_string = "pt_fireplace"; // 0x9b PushS
	var_13_string = var_17_string + var_12_int; // 0x9c Add2
	GetLocator(var_13_string, var_14_bool, var_15_cvector); // 0x9d Func
	var_18_bool = var_14_bool == 0; // 0x9f Not
	if(var_18_bool == 0) goto Label_162; // 0xa0 JumpB
	goto Label_176; // 0xa1 Jump
	
Label_176:
	return 10; // 0xb0 Return
	
Label_162:
	var_19_string = "scripted"; // 0xa2 PushS
	var_20_object = Obj(); // 0xa3 PushV
	func_287(var_20_object); // 0xa4 NEW_2
	var_23_cvector = CVector(0.0, 0.0, 1.0); // 0xa6 PushVec
	var_24_string = "fireplace.xml"; // 0xa7 PushS
	AddActorByType(var_16_object, var_19_string, var_20_object, var_15_cvector, var_23_cvector, var_24_string); // 0xa8 Func
	add(var_16_object); // 0xaa TObjFunc
	var_16_object = 0; // 0xac SetNull
	var_25_int = 1; // 0xad PushI
	var_12_int = var_12_int + var_25_int; // 0xae Add2
	goto Label_155; // 0xaf Jump
}


func_317(var_84_object, var_85_object, var_86_string, var_87_string)
{
	var_89_object = Obj(); var_90_object = Obj(); // 0x13d PushV
	var_91_cvector = CVector(0.0, 0.0, 0.0); // 0x13e PushVec
	var_92_cvector = CVector(0.0, 0.0, 1.0); // 0x13f PushVec
	AddScriptedActor(var_90_object, var_86_string, var_87_string, var_85_object, var_91_cvector, var_92_cvector); // 0x140 Func
	var_84_object = var_90_object; // 0x142 Mov
	return 2; // 0x143 Return
}


func_255(var_61_int)
{
	var_65_int = 0; var_66_int = 0; var_67_object = Obj(); var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_int = 0; var_73_int = 0; var_74_object = Obj(); var_75_int = 0; var_76_bool = 0; var_77_int = 0; var_78_int = 0; // 0xff PushV
	RemoveAllItems(var_61_int); // 0x100 ObjFunc
	size(var_72_int); // 0x102 ObjFunc
	var_73_int = 0; // 0x104 MovI
	
Label_261:
	var_79_bool = var_73_int < var_72_int; // 0x105 LT
	if(var_79_bool == 0) goto Label_273; // 0x106 JumpB
	get(var_74_object, var_73_int); // 0x107 ObjFunc
	get(var_75_int, var_73_int); // 0x109 ObjFunc
	AddItem(var_76_bool, var_74_object, var_61_int, var_75_int); // 0x10b ObjFunc
	var_74_object = 0; // 0x10d SetNull
	var_80_int = 1; // 0x10e PushI
	var_73_int = var_73_int + var_80_int; // 0x10f Add2
	goto Label_261; // 0x110 Jump
	
Label_273:
	size(var_72_int); // 0x111 ObjFunc
	var_77_int = 0; // 0x113 MovI
	
Label_276:
	var_81_bool = var_77_int < var_72_int; // 0x114 LT
	if(var_81_bool == 0) goto Label_286; // 0x115 JumpB
	get(var_78_int, var_77_int); // 0x116 ObjFunc
	var_82_bool = 1; // 0x118 PushB
	SelectItem(var_78_int, var_82_bool, var_61_int); // 0x119 ObjFunc
	var_83_int = 1; // 0x11b PushI
	var_77_int = var_77_int + var_83_int; // 0x11c Add2
	goto Label_276; // 0x11d Jump
	
Label_286:
	return 14; // 0x11e Return
}


