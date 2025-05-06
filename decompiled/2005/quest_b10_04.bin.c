task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); // 0x34 PushV
	Trace(var_7_string); // 0x35 Func
	var_14_string = "place_morloks"; // 0x37 PushS
	var_15_bool = var_7_string == var_14_string; // 0x38 Eq
	if(var_15_bool == 0) goto Label_97; // 0x39 JumpB
	GetMainOutdoorScene(var_11_object); // 0x3a Func
	var_16_object = Obj(); var_17_object = Obj(); var_18_string = ""; var_19_string = ""; var_20_string = ""; // 0x3c PushV
	var_17_object = var_11_object; // 0x3d Mov
	var_18_string = "pt_b10q04_morlok"; // 0x3e MovS
	var_19_string = "pers_morlok"; // 0x3f MovS
	var_20_string = "b10q04_morlok.xml"; // 0x40 MovS
	func_311(var_16_object, var_17_object, var_18_string, var_19_string, var_20_string); // 0x41 NEW_2
	add(var_16_object); // 0x43 TObjFunc
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x45 PushV
	var_35_object = var_11_object; // 0x46 Mov
	var_36_string = "pt_b10q04_morlok_mishka"; // 0x47 MovS
	var_37_string = "pers_morlok"; // 0x48 MovS
	var_38_string = "b10q04_morlok_mishka.xml"; // 0x49 MovS
	func_311(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string); // 0x4a NEW_2
	add(var_34_object); // 0x4c TObjFunc
	var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = ""; // 0x4e PushV
	var_40_object = var_11_object; // 0x4f Mov
	var_41_string = "pt_b10q04_morlok_laska"; // 0x50 MovS
	var_42_string = "pers_morlok"; // 0x51 MovS
	var_43_string = "b10q04_morlok_laska.xml"; // 0x52 MovS
	func_311(var_39_object, var_40_object, var_41_string, var_42_string, var_43_string); // 0x53 NEW_2
	add(var_39_object); // 0x55 TObjFunc
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = ""; // 0x57 PushV
	var_45_object = var_11_object; // 0x58 Mov
	var_46_string = "pt_b10q04_morlok_spi4ka"; // 0x59 MovS
	var_47_string = "pers_morlok"; // 0x5a MovS
	var_48_string = "b10q04_morlok_spi4ka.xml"; // 0x5b MovS
	func_311(var_44_object, var_45_object, var_46_string, var_47_string, var_48_string); // 0x5c NEW_2
	add(var_44_object); // 0x5e TObjFunc
	var_11_object = 0; // 0x60 SetNull
	
Label_97:
	var_49_string = "init_storojka"; // 0x61 PushS
	var_50_bool = var_7_string == var_49_string; // 0x62 Eq
	if(var_50_bool == 0) goto Label_151; // 0x63 JumpB
	var_51_string = "storojka"; // 0x64 PushS
	GetSceneByName(var_12_object, var_51_string); // 0x65 Func
	var_52_string = "nolaska"; // 0x67 PushS
	Trigger(var_12_object, var_52_string); // 0x68 Func
	var_53_object = Obj(); var_54_object = Obj(); var_55_string = ""; var_56_string = ""; var_57_string = ""; // 0x6a PushV
	var_54_object = var_12_object; // 0x6b Mov
	var_55_string = "pt_b10q04_girl"; // 0x6c MovS
	var_56_string = "pers_girl"; // 0x6d MovS
	var_57_string = "b10q04_girl_laska.xml"; // 0x6e MovS
	func_311(var_53_object, var_54_object, var_55_string, var_56_string, var_57_string); // 0x6f NEW_2
	var_2_object = var_53_object; // 0x70 TMov
	var_58_string = "uprava_admin"; // 0x72 PushS
	GetSceneByName(var_12_object, var_58_string); // 0x73 Func
	var_59_object = Obj(); var_60_object = Obj(); var_61_string = ""; var_62_string = ""; var_63_string = ""; // 0x75 PushV
	var_60_object = var_12_object; // 0x76 Mov
	var_61_string = "pt_b10q04_klara"; // 0x77 MovS
	var_62_string = "NPC_Klara"; // 0x78 MovS
	var_63_string = "b10q04_klara.xml"; // 0x79 MovS
	func_311(var_59_object, var_60_object, var_61_string, var_62_string, var_63_string); // 0x7a NEW_2
	var_4_object = var_59_object; // 0x7b TMov
	var_64_string = ""; var_65_bool = 0; // 0x7d PushV
	var_64_string = "vagon_army@door1"; // 0x7e MovS
	var_65_bool = 0; // 0x7f MovB
	func_329(var_64_string, var_65_bool); // 0x80 NEW_2
	var_74_string = "vagon_army"; // 0x82 PushS
	GetSceneByName(var_12_object, var_74_string); // 0x83 Func
	var_75_object = Obj(); var_76_object = Obj(); var_77_string = ""; var_78_string = ""; var_79_string = ""; // 0x85 PushV
	var_76_object = var_12_object; // 0x86 Mov
	var_77_string = "pt_b10q04_laska"; // 0x87 MovS
	var_78_string = "NPC_Laska"; // 0x88 MovS
	var_79_string = "b10q04_laska.xml"; // 0x89 MovS
	func_311(var_75_object, var_76_object, var_77_string, var_78_string, var_79_string); // 0x8a NEW_2
	var_3_object = var_75_object; // 0x8b TMov
	var_80_object = Obj(); var_81_object = Obj(); var_82_string = ""; var_83_string = ""; var_84_string = ""; // 0x8d PushV
	var_81_object = var_12_object; // 0x8e Mov
	var_82_string = "pt_b10q04_officer"; // 0x8f MovS
	var_83_string = "pers_soldat"; // 0x90 MovS
	var_84_string = "b10q04_officer.xml"; // 0x91 MovS
	func_311(var_80_object, var_81_object, var_82_string, var_83_string, var_84_string); // 0x92 NEW_2
	var_5_object = var_80_object; // 0x93 TMov
	var_12_object = 0; // 0x95 SetNull
	goto Label_185; // 0x96 Jump
	
Label_185:
	return 6; // 0xb9 Return
	
Label_151:
	var_85_string = "restore_laska"; // 0x97 PushS
	var_86_bool = var_7_string == var_85_string; // 0x98 Eq
	if(var_86_bool == 0) goto Label_172; // 0x99 JumpB
	var_87_object = var_3_object; // 0x9a PushT
	if(var_87_object == 0) goto Label_159; // 0x9b JumpB
	var_88_string = "cleanup"; // 0x9c PushS
	Trigger(var_12_object, var_88_string); // 0x9d Func
	
Label_159:
	var_89_object = var_2_object; // 0x9f PushT
	if(var_89_object == 0) goto Label_164; // 0xa0 JumpB
	var_90_string = "cleanup"; // 0xa1 PushS
	Trigger(var_13_object, var_90_string); // 0xa2 Func
	
Label_164:
	var_91_string = "storojka"; // 0xa4 PushS
	GetSceneByName(var_13_object, var_91_string); // 0xa5 Func
	var_92_string = "laska"; // 0xa7 PushS
	Trigger(var_13_object, var_92_string); // 0xa8 Func
	var_13_object = 0; // 0xaa SetNull
	goto Label_185; // 0xab Jump
	
Label_172:
	var_93_string = "fail"; // 0xac PushS
	var_94_bool = var_7_string == var_93_string; // 0xad Eq
	if(var_94_bool == 0) goto Label_179; // 0xae JumpB
	func_200(); // 0xb0 NEW_2
	goto Label_185; // 0xb2 Jump
	
Label_179:
	var_111_string = "completed"; // 0xb3 PushS
	var_112_bool = var_7_string == var_111_string; // 0xb4 Eq
	if(var_112_bool == 0) goto Label_185; // 0xb5 JumpB
	func_208(); // 0xb7 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_float)
{
	func_186(); // 0x128 NEW_2
	return 0; // 0x12a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; // 0x0 PushV
	var_15_object = Obj(); // 0x1 PushV
	func_305(var_15_object); // 0x2 NEW_2
	var_0_object = var_15_object; // 0x3 TMov
	GetMainOutdoorScene(var_11_object); // 0x5 Func
	var_18_object = Obj(); var_19_object = Obj(); var_20_string = ""; var_21_string = ""; var_22_string = ""; // 0x7 PushV
	var_19_object = var_11_object; // 0x8 Mov
	var_20_string = "pt_b10q04_bull"; // 0x9 MovS
	var_21_string = "pers_avrox"; // 0xa MovS
	var_22_string = "b10q04_bull.xml"; // 0xb MovS
	func_311(var_18_object, var_19_object, var_20_string, var_21_string, var_22_string); // 0xc NEW_2
	var_1_object = var_18_object; // 0xd TMov
	GetScene(var_13_object); // 0xf Func
	var_36_string = "termitnik_mat"; // 0x11 PushS
	GetSceneByName(var_12_object, var_36_string); // 0x12 Func
	var_37_bool = var_13_object != var_12_object; // 0x14 Neq
	if(var_37_bool == 0) goto Label_44; // 0x15 JumpB
	var_38_string = "b8q03MladVladIsVictim"; // 0x16 PushS
	GetVariable(var_38_string, var_14_int); // 0x17 Func
	var_39_int = var_14_int; // 0x19 Push
	if(var_39_int == 0) goto Label_36; // 0x1a JumpB
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = ""; // 0x1b PushV
	var_41_object = var_12_object; // 0x1c Mov
	var_42_string = "pt_b10q04_prisoner"; // 0x1d MovS
	var_43_string = "NPC_MladVlad"; // 0x1e MovS
	var_44_string = "b10q04_mladvlad.xml"; // 0x1f MovS
	func_311(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string); // 0x20 NEW_2
	var_6_object = var_40_object; // 0x21 TMov
	goto Label_44; // 0x23 Jump
	
Label_44:
	var_45_int = 0; // 0x2c PushV
	var_45_int = 10; // 0x2d MovI
	func_275(var_45_int); // 0x2e NEW_2
	return 8; // 0x30 Return
	
Label_36:
	var_95_object = Obj(); var_96_object = Obj(); var_97_string = ""; var_98_string = ""; var_99_string = ""; // 0x24 PushV
	var_96_object = var_12_object; // 0x25 Mov
	var_97_string = "pt_b10q04_prisoner"; // 0x26 MovS
	var_98_string = "NPC_BigVlad"; // 0x27 MovS
	var_99_string = "b10q04_bigvlad.xml"; // 0x28 MovS
	func_311(var_95_object, var_96_object, var_97_string, var_98_string, var_99_string); // 0x29 NEW_2
	var_6_object = var_95_object; // 0x2a TMov
}


func_200()
{
	var_14_string = "b10q04"; // 0xc8 PushS
	var_15_int = -1; // 0xc9 PushI
	SetVariable(var_14_string, var_15_int); // 0xca Func
	func_216(var_8_float, var_9_int, var_10_int); // 0xcd NEW_2
	return 0; // 0xcf Return
}


func_329(var_77_string, var_78_bool)
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x149 PushV
	FindActor(var_80_object, var_77_string); // 0x14a Func
	var_81_bool = var_80_object == 0; // 0x14c Not
	if(var_81_bool == 0) goto Label_341; // 0x14d JumpB
	var_82_string = "Door "; // 0x14e PushS
	var_83_int = var_82_string + var_77_string; // 0x14f Add
	var_84_string = " not found"; // 0x150 PushS
	var_85_int = var_83_int + var_84_string; // 0x151 Add
	Trace(var_85_int); // 0x152 Func
	goto Label_344; // 0x154 Jump
	
Label_344:
	return 2; // 0x158 Return
	
Label_341:
	var_86_string = "locked"; // 0x155 PushS
	SetProperty(var_86_string, var_78_bool); // 0x156 ObjFunc
}


func_186()
{
	var_9_int = 0; var_10_int = 0; // 0xba PushV
	var_11_string = "b10q04"; // 0xbb PushS
	GetVariable(var_11_string, var_10_int); // 0xbc Func
	var_12_int = 1000; // 0xbe PushI
	var_13_bool = var_10_int != var_12_int; // 0xbf Neq
	if(var_13_bool == 0) goto Label_196; // 0xc0 JumpB
	func_200(); // 0xc2 NEW_2
	
Label_196:
	func_250(var_10_int); // 0xc5 NEW_2
	return 2; // 0xc7 Return
}


func_299(var_89_object)
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x12b PushV
	self(var_91_object); // 0x12c Func
	var_89_object = var_91_object; // 0x12e Mov
	return 2; // 0x12f Return
}


func_346(var_65_object, var_66_string)
{
	var_67_int = 0; var_68_int = 0; var_69_object = Obj(); var_70_int = 0; var_71_int = 0; var_72_object = Obj(); // 0x15a PushV
	var_73_object = var_65_object; // 0x15b Push
	if(var_73_object == 0) goto Label_364; // 0x15c JumpB
	size(var_70_int); // 0x15d ObjFunc
	var_71_int = 0; // 0x15f MovI
	
Label_352:
	var_74_bool = var_71_int < var_70_int; // 0x160 LT
	if(var_74_bool == 0) goto Label_364; // 0x161 JumpB
	get(var_72_object, var_71_int); // 0x162 ObjFunc
	var_75_object = var_72_object; // 0x164 Push
	if(var_75_object == 0) goto Label_360; // 0x165 JumpB
	Trigger(var_72_object, var_66_string); // 0x166 Func
	
Label_360:
	var_72_object = 0; // 0x168 SetNull
	var_76_int = 1; // 0x169 PushI
	var_71_int = var_71_int + var_76_int; // 0x16a Add2
	goto Label_352; // 0x16b Jump
	
Label_364:
	return 6; // 0x16c Return
}


func_208()
{
	var_113_string = "b10q04"; // 0xd0 PushS
	var_114_int = 1000; // 0xd1 PushI
	SetVariable(var_113_string, var_114_int); // 0xd2 Func
	func_216(var_11_object, var_12_object, var_13_object); // 0xd5 NEW_2
	return 0; // 0xd7 Return
}


func_305(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x131 PushV
	CreateObjectVector(var_17_object); // 0x132 Func
	var_15_object = var_17_object; // 0x134 Mov
	return 2; // 0x135 Return
}


func_275(var_45_int)
{
	var_46_float = 0; var_47_float = 0; // 0x113 PushV
	GetGameTime(var_47_float); // 0x114 Func
	var_48_int = 24; // 0x116 PushI
	var_49_float = var_45_int * var_48_int; // 0x117 Mult
	var_50_bool = var_47_float >= var_49_float; // 0x118 GE
	if(var_50_bool == 0) goto Label_286; // 0x119 JumpB
	func_250(var_47_float); // 0x11b NEW_2
	goto Label_293; // 0x11d Jump
	
Label_293:
	return 2; // 0x125 Return
	
Label_286:
	var_92_int = 0; // 0x11e PushI
	var_93_int = 24; // 0x11f PushI
	var_94_float = var_45_int * var_93_int; // 0x120 Mult
	SetTimeEvent(var_92_int, var_94_float); // 0x121 Func
	Hold(); // 0x123 Func
}


func_311(var_18_object, var_19_object, var_20_string, var_21_string, var_22_string)
{
	var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); // 0x137 PushV
	GetLocator(var_20_string, var_27_bool, var_28_cvector, var_29_cvector); // 0x138 ObjFunc
	var_31_bool = var_27_bool == 0; // 0x13a Not
	if(var_31_bool == 0) goto Label_324; // 0x13b JumpB
	var_32_string = "Locator "; // 0x13c PushS
	var_33_int = var_32_string + var_20_string; // 0x13d Add
	var_34_string = " doesn't exist"; // 0x13e PushS
	var_35_int = var_33_int + var_34_string; // 0x13f Add
	Trace(var_35_int); // 0x140 Func
	var_30_object = 0; // 0x142 SetNull
	goto Label_326; // 0x143 Jump
	
Label_326:
	var_18_object = var_30_object; // 0x146 Mov
	return 8; // 0x147 Return
	
Label_324:
	AddActor(var_30_object, var_21_string, var_19_object, var_28_cvector, var_29_cvector, var_22_string); // 0x144 Func
}


func_216(var_45_int, var_46_float, var_47_float)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0xd8 PushV
	var_53_object = var_2_object; // 0xd9 PushT
	if(var_53_object == 0) goto Label_222; // 0xda JumpB
	var_54_string = "cleanup"; // 0xdb PushS
	Trigger(var_52_object, var_54_string); // 0xdc Func
	
Label_222:
	var_55_object = var_3_object; // 0xde PushT
	if(var_55_object == 0) goto Label_227; // 0xdf JumpB
	var_56_string = "cleanup"; // 0xe0 PushS
	Trigger(var_51_object, var_56_string); // 0xe1 Func
	
Label_227:
	var_57_object = var_4_object; // 0xe3 PushT
	if(var_57_object == 0) goto Label_232; // 0xe4 JumpB
	var_58_string = "cleanup"; // 0xe5 PushS
	Trigger(var_47_float, var_58_string); // 0xe6 Func
	
Label_232:
	var_59_object = var_5_object; // 0xe8 PushT
	if(var_59_object == 0) goto Label_237; // 0xe9 JumpB
	var_60_string = "cleanup"; // 0xea PushS
	Trigger(var_46_float, var_60_string); // 0xeb Func
	
Label_237:
	var_61_object = var_6_object; // 0xed PushT
	if(var_61_object == 0) goto Label_242; // 0xee JumpB
	var_62_string = "cleanup"; // 0xef PushS
	Trigger(var_45_int, var_62_string); // 0xf0 Func
	
Label_242:
	var_63_string = "storojka"; // 0xf2 PushS
	GetSceneByName(var_52_object, var_63_string); // 0xf3 Func
	var_64_string = "laska"; // 0xf5 PushS
	Trigger(var_52_object, var_64_string); // 0xf6 Func
	return 2; // 0xf8 Return
}


func_250(var_0_object)
{
	EventDisable(26); // 0xfa EventDisable
	func_216(var_45_int, var_46_float, var_47_float); // 0xfc NEW_2
	var_65_object = Obj(); var_66_string = ""; // 0xfe PushV
	var_65_object = var_0_object; // 0xff MovT
	var_66_string = "cleanup"; // 0x100 MovS
	func_346(var_65_object, var_66_string); // 0x101 NEW_2
	var_77_string = ""; var_78_bool = 0; // 0x103 PushV
	var_77_string = "vagon_army@door1"; // 0x104 MovS
	var_78_bool = 1; // 0x105 MovB
	func_329(var_77_string, var_78_bool); // 0x106 NEW_2
	var_87_object = var_1_object; // 0x108 PushT
	if(var_87_object == 0) goto Label_269; // 0x109 JumpB
	var_88_string = "cleanup"; // 0x10a PushS
	Trigger(var_88_string, var_88_string); // 0x10b Func
	
Label_269:
	var_89_object = Obj(); // 0x10d PushV
	func_299(var_89_object); // 0x10e NEW_2
	RemoveActor(var_89_object); // 0x110 Func
	return 0; // 0x112 Return
}


