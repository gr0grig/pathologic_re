task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_bool = 0; var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); // 0x3c PushV
	Trace(var_4_string); // 0x3d Func
	var_19_string = "teleport"; // 0x3f PushS
	var_20_bool = var_4_string == var_19_string; // 0x40 Eq
	if(var_20_bool == 0) goto Label_82; // 0x41 JumpB
	var_21_string = "player"; // 0x42 PushS
	FindActor(var_12_object, var_21_string); // 0x43 Func
	var_22_object = var_12_object; // 0x45 Push
	if(var_22_object == 0) goto Label_80; // 0x46 JumpB
	var_23_string = "mnogogrannik_han"; // 0x47 PushS
	GetSceneByName(var_13_object, var_23_string); // 0x48 Func
	var_24_string = "pt_d9q01_teleport"; // 0x4a PushS
	GetLocator(var_24_string, var_16_bool, var_14_cvector, var_15_cvector); // 0x4b ObjFunc
	Teleport(var_12_object, var_13_object, var_14_cvector, var_15_cvector); // 0x4d Func
	var_13_object = 0; // 0x4f SetNull
	
Label_80:
	var_12_object = 0; // 0x50 SetNull
	goto Label_181; // 0x51 Jump
	
Label_181:
	return 14; // 0xb5 Return
	
Label_82:
	var_25_string = "place_enemy_before"; // 0x52 PushS
	var_26_bool = var_4_string == var_25_string; // 0x53 Eq
	if(var_26_bool == 0) goto Label_125; // 0x54 JumpB
	GetMainOutdoorScene(var_17_object); // 0x55 Func
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0x57 PushV
	var_28_object = var_17_object; // 0x58 Mov
	var_29_string = "pt_d11q05_grabitel_before1"; // 0x59 MovS
	var_30_string = "pers_grabitel"; // 0x5a MovS
	var_31_string = "d11q05_grabitel.xml"; // 0x5b MovS
	func_290(var_28_object, var_29_string, var_30_string, var_31_string); // 0x5c NEW_2
	add(var_27_object); // 0x5e TObjFunc
	var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = ""; // 0x60 PushV
	var_46_object = var_17_object; // 0x61 Mov
	var_47_string = "pt_d11q05_grabitel_before2"; // 0x62 MovS
	var_48_string = "pers_grabitel"; // 0x63 MovS
	var_49_string = "d11q05_grabitel.xml"; // 0x64 MovS
	func_290(var_46_object, var_47_string, var_48_string, var_49_string); // 0x65 NEW_2
	add(var_45_object); // 0x67 TObjFunc
	var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = ""; // 0x69 PushV
	var_51_object = var_17_object; // 0x6a Mov
	var_52_string = "pt_d11q05_worker_before1"; // 0x6b MovS
	var_53_string = "pers_worker"; // 0x6c MovS
	var_54_string = "d11q05_worker.xml"; // 0x6d MovS
	func_290(var_51_object, var_52_string, var_53_string, var_54_string); // 0x6e NEW_2
	add(var_50_object); // 0x70 TObjFunc
	var_55_object = Obj(); var_56_object = Obj(); var_57_string = ""; var_58_string = ""; var_59_string = ""; // 0x72 PushV
	var_56_object = var_17_object; // 0x73 Mov
	var_57_string = "pt_d11q05_worker_before2"; // 0x74 MovS
	var_58_string = "pers_worker"; // 0x75 MovS
	var_59_string = "d11q05_worker.xml"; // 0x76 MovS
	func_290(var_56_object, var_57_string, var_58_string, var_59_string); // 0x77 NEW_2
	add(var_55_object); // 0x79 TObjFunc
	var_17_object = 0; // 0x7b SetNull
	goto Label_181; // 0x7c Jump
	
Label_125:
	var_60_string = "place_enemy_after"; // 0x7d PushS
	var_61_bool = var_4_string == var_60_string; // 0x7e Eq
	if(var_61_bool == 0) goto Label_168; // 0x7f JumpB
	GetMainOutdoorScene(var_18_object); // 0x80 Func
	var_62_object = Obj(); var_63_object = Obj(); var_64_string = ""; var_65_string = ""; var_66_string = ""; // 0x82 PushV
	var_63_object = var_18_object; // 0x83 Mov
	var_64_string = "pt_d11q05_grabitel_after1"; // 0x84 MovS
	var_65_string = "pers_grabitel"; // 0x85 MovS
	var_66_string = "d11q05_grabitel_serum.xml"; // 0x86 MovS
	func_290(var_63_object, var_64_string, var_65_string, var_66_string); // 0x87 NEW_2
	add(var_62_object); // 0x89 TObjFunc
	var_67_object = Obj(); var_68_object = Obj(); var_69_string = ""; var_70_string = ""; var_71_string = ""; // 0x8b PushV
	var_68_object = var_18_object; // 0x8c Mov
	var_69_string = "pt_d11q05_grabitel_after2"; // 0x8d MovS
	var_70_string = "pers_grabitel"; // 0x8e MovS
	var_71_string = "d11q05_grabitel.xml"; // 0x8f MovS
	func_290(var_68_object, var_69_string, var_70_string, var_71_string); // 0x90 NEW_2
	add(var_67_object); // 0x92 TObjFunc
	var_72_object = Obj(); var_73_object = Obj(); var_74_string = ""; var_75_string = ""; var_76_string = ""; // 0x94 PushV
	var_73_object = var_18_object; // 0x95 Mov
	var_74_string = "pt_d11q05_unosha_after1"; // 0x96 MovS
	var_75_string = "pers_unosha"; // 0x97 MovS
	var_76_string = "d11q05_worker.xml"; // 0x98 MovS
	func_290(var_73_object, var_74_string, var_75_string, var_76_string); // 0x99 NEW_2
	add(var_72_object); // 0x9b TObjFunc
	var_77_object = Obj(); var_78_object = Obj(); var_79_string = ""; var_80_string = ""; var_81_string = ""; // 0x9d PushV
	var_78_object = var_18_object; // 0x9e Mov
	var_79_string = "pt_d11q05_unosha_after2"; // 0x9f MovS
	var_80_string = "pers_unosha"; // 0xa0 MovS
	var_81_string = "d11q05_worker.xml"; // 0xa1 MovS
	func_290(var_78_object, var_79_string, var_80_string, var_81_string); // 0xa2 NEW_2
	add(var_77_object); // 0xa4 TObjFunc
	var_18_object = 0; // 0xa6 SetNull
	goto Label_181; // 0xa7 Jump
	
Label_168:
	var_82_string = "fail"; // 0xa8 PushS
	var_83_bool = var_4_string == var_82_string; // 0xa9 Eq
	if(var_83_bool == 0) goto Label_175; // 0xaa JumpB
	func_196(); // 0xac NEW_2
	goto Label_181; // 0xae Jump
	
Label_175:
	var_88_string = "completed"; // 0xaf PushS
	var_89_bool = var_4_string == var_88_string; // 0xb0 Eq
	if(var_89_bool == 0) goto Label_181; // 0xb1 JumpB
	func_204(); // 0xb3 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_int, var_5_float)
{
	func_182(); // 0x101 NEW_2
	return 0; // 0x103 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_bool)
{
	var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; var_9_object = Obj(); // 0x0 PushV
	CreateObjectVector(var_9_object); // 0x1 Func
	GetMainOutdoorScene(var_7_object); // 0x3 Func
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = ""; // 0x5 PushV
	var_11_object = var_7_object; // 0x6 Mov
	var_12_string = "pt_d9q01_doberman1"; // 0x7 MovS
	var_13_string = "pers_doberman"; // 0x8 MovS
	var_14_string = "d11q05_doberman.xml"; // 0x9 MovS
	func_290(var_11_object, var_12_string, var_13_string, var_14_string); // 0xa NEW_2
	add(var_10_object); // 0xc TObjFunc
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = ""; // 0xe PushV
	var_29_object = var_7_object; // 0xf Mov
	var_30_string = "pt_d9q01_doberman2"; // 0x10 MovS
	var_31_string = "pers_doberman"; // 0x11 MovS
	var_32_string = "d11q05_doberman.xml"; // 0x12 MovS
	func_290(var_29_object, var_30_string, var_31_string, var_32_string); // 0x13 NEW_2
	add(var_28_object); // 0x15 TObjFunc
	var_33_object = Obj(); var_34_object = Obj(); var_35_string = ""; var_36_string = ""; var_37_string = ""; // 0x17 PushV
	var_34_object = var_7_object; // 0x18 Mov
	var_35_string = "pt_d9q01_doberman3"; // 0x19 MovS
	var_36_string = "pers_doberman"; // 0x1a MovS
	var_37_string = "d11q05_doberman.xml"; // 0x1b MovS
	func_290(var_34_object, var_35_string, var_36_string, var_37_string); // 0x1c NEW_2
	add(var_33_object); // 0x1e TObjFunc
	var_38_object = Obj(); // 0x20 PushV
	func_266(var_38_object); // 0x21 NEW_2
	var_0_object = var_38_object; // 0x22 TMov
	var_41_string = "d8q01MladVladIsVictim"; // 0x24 PushS
	GetVariable(var_41_string, var_8_int); // 0x25 Func
	var_42_int = var_8_int; // 0x27 Push
	if(var_42_int == 0) goto Label_54; // 0x28 JumpB
	var_3_bool = 1; // 0x29 TMovB
	var_43_string = "termitnik_mat"; // 0x2a PushS
	GetSceneByName(var_9_object, var_43_string); // 0x2b Func
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = ""; // 0x2d PushV
	var_45_object = var_9_object; // 0x2e Mov
	var_46_string = "pt_d11q05_mladvlad"; // 0x2f MovS
	var_47_string = "NPC_MladVlad"; // 0x30 MovS
	var_48_string = "d11q05_mladvlad.xml"; // 0x31 MovS
	func_272(var_44_object, var_45_object, var_46_string, var_47_string, var_48_string); // 0x32 NEW_2
	var_2_object = var_44_object; // 0x33 TMov
	var_9_object = 0; // 0x35 SetNull
	
Label_54:
	var_62_int = 0; // 0x36 PushV
	var_62_int = 11; // 0x37 MovI
	func_236(var_62_int); // 0x38 NEW_2
	return 6; // 0x3a Return
}


func_290(var_10_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0x122 PushV
	GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector); // 0x123 ObjFunc
	var_23_bool = var_19_bool == 0; // 0x125 Not
	if(var_23_bool == 0) goto Label_303; // 0x126 JumpB
	var_24_string = "Locator "; // 0x127 PushS
	var_25_int = var_24_string + var_12_string; // 0x128 Add
	var_26_string = " doesn't exist"; // 0x129 PushS
	var_27_int = var_25_int + var_26_string; // 0x12a Add
	Trace(var_27_int); // 0x12b Func
	var_22_object = 0; // 0x12d SetNull
	goto Label_305; // 0x12e Jump
	
Label_305:
	var_10_object = var_22_object; // 0x131 Mov
	return 8; // 0x132 Return
	
Label_303:
	AddStationaryActor(var_22_object, var_20_cvector, var_21_cvector, var_13_string, var_14_string); // 0x12f ObjFunc
}


func_196()
{
	var_11_string = "d11q05"; // 0xc4 PushS
	var_12_int = -1; // 0xc5 PushI
	SetVariable(var_11_string, var_12_int); // 0xc6 Func
	func_212(var_7_int); // 0xc9 NEW_2
	return 0; // 0xcb Return
}


func_260(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x104 PushV
	self(var_84_object); // 0x105 Func
	var_82_object = var_84_object; // 0x107 Mov
	return 2; // 0x108 Return
}


func_266(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x10a PushV
	CreateObjectVector(var_40_object); // 0x10b Func
	var_38_object = var_40_object; // 0x10d Mov
	return 2; // 0x10e Return
}


func_236(var_62_int)
{
	var_63_float = 0; var_64_float = 0; // 0xec PushV
	GetGameTime(var_64_float); // 0xed Func
	var_65_int = 24; // 0xef PushI
	var_66_float = var_62_int * var_65_int; // 0xf0 Mult
	var_67_bool = var_64_float >= var_66_float; // 0xf1 GE
	if(var_67_bool == 0) goto Label_247; // 0xf2 JumpB
	func_218(var_63_float, var_64_float); // 0xf4 NEW_2
	goto Label_254; // 0xf6 Jump
	
Label_254:
	return 2; // 0xfe Return
	
Label_247:
	var_85_int = 0; // 0xf7 PushI
	var_86_int = 24; // 0xf8 PushI
	var_87_float = var_62_int * var_86_int; // 0xf9 Mult
	SetTimeEvent(var_85_int, var_87_float); // 0xfa Func
	Hold(); // 0xfc Func
}


func_204()
{
	var_90_string = "d11q05"; // 0xcc PushS
	var_91_int = 1000; // 0xcd PushI
	SetVariable(var_90_string, var_91_int); // 0xce Func
	func_212(var_18_object); // 0xd1 NEW_2
	return 0; // 0xd3 Return
}


func_272(var_44_object, var_45_object, var_46_string, var_47_string, var_48_string)
{
	var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj(); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_object = Obj(); // 0x110 PushV
	GetLocator(var_46_string, var_53_bool, var_54_cvector, var_55_cvector); // 0x111 ObjFunc
	var_57_bool = var_53_bool == 0; // 0x113 Not
	if(var_57_bool == 0) goto Label_285; // 0x114 JumpB
	var_58_string = "Locator "; // 0x115 PushS
	var_59_int = var_58_string + var_46_string; // 0x116 Add
	var_60_string = " doesn't exist"; // 0x117 PushS
	var_61_int = var_59_int + var_60_string; // 0x118 Add
	Trace(var_61_int); // 0x119 Func
	var_56_object = 0; // 0x11b SetNull
	goto Label_287; // 0x11c Jump
	
Label_287:
	var_44_object = var_56_object; // 0x11f Mov
	return 8; // 0x120 Return
	
Label_285:
	AddActor(var_56_object, var_47_string, var_45_object, var_54_cvector, var_55_cvector, var_48_string); // 0x11d Func
}


func_212(var_64_float)
{
	var_68_object = var_2_object; // 0xd4 PushT
	if(var_68_object == 0) goto Label_217; // 0xd5 JumpB
	var_69_string = "cleanup"; // 0xd6 PushS
	Trigger(var_64_float, var_69_string); // 0xd7 Func
	
Label_217:
	return 0; // 0xd9 Return
}


func_308(var_70_object)
{
	var_71_int = 0; var_72_int = 0; var_73_object = Obj(); var_74_int = 0; var_75_int = 0; var_76_object = Obj(); // 0x134 PushV
	var_77_object = var_70_object; // 0x135 Push
	if(var_77_object == 0) goto Label_328; // 0x136 JumpB
	size(var_74_int); // 0x137 ObjFunc
	var_75_int = 0; // 0x139 MovI
	
Label_314:
	var_78_bool = var_75_int < var_74_int; // 0x13a LT
	if(var_78_bool == 0) goto Label_326; // 0x13b JumpB
	get(var_76_object, var_75_int); // 0x13c ObjFunc
	var_79_object = var_76_object; // 0x13e Push
	if(var_79_object == 0) goto Label_322; // 0x13f JumpB
	Remove(); // 0x140 ObjFunc
	
Label_322:
	var_76_object = 0; // 0x142 SetNull
	var_80_int = 1; // 0x143 PushI
	var_75_int = var_75_int + var_80_int; // 0x144 Add2
	goto Label_314; // 0x145 Jump
	
Label_326:
	clear(); // 0x146 ObjFunc
	
Label_328:
	return 6; // 0x148 Return
}


func_182()
{
	var_6_int = 0; var_7_int = 0; // 0xb6 PushV
	var_8_string = "d11q05"; // 0xb7 PushS
	GetVariable(var_8_string, var_7_int); // 0xb8 Func
	var_9_int = 1000; // 0xba PushI
	var_10_bool = var_7_int != var_9_int; // 0xbb Neq
	if(var_10_bool == 0) goto Label_192; // 0xbc JumpB
	func_196(); // 0xbe NEW_2
	
Label_192:
	func_218(var_6_int, var_7_int); // 0xc1 NEW_2
	return 2; // 0xc3 Return
}


func_218(var_0_object, var_1_object)
{
	EventDisable(26); // 0xda EventDisable
	func_212(var_64_float); // 0xdc NEW_2
	var_70_object = Obj(); // 0xde PushV
	var_70_object = var_0_object; // 0xdf MovT
	func_308(var_70_object); // 0xe0 NEW_2
	var_81_object = Obj(); // 0xe2 PushV
	var_81_object = var_1_object; // 0xe3 MovT
	func_308(var_81_object); // 0xe4 NEW_2
	var_82_object = Obj(); // 0xe6 PushV
	func_260(var_82_object); // 0xe7 NEW_2
	RemoveActor(var_82_object); // 0xe9 Func
	return 0; // 0xeb Return
}


