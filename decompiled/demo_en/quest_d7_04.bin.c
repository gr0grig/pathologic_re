task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string)
{
	var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); // 0x12 PushV
	Trace(var_5_string); // 0x13 Func
	var_10_string = "init_kabak"; // 0x15 PushS
	var_11_bool = var_5_string == var_10_string; // 0x16 Eq
	if(var_11_bool == 0) goto Label_47; // 0x17 JumpB
	var_12_string = "shouse1_kabak"; // 0x18 PushS
	GetSceneByName(var_8_object, var_12_string); // 0x19 Func
	var_13_string = "noandrei"; // 0x1b PushS
	Trigger(var_8_object, var_13_string); // 0x1c Func
	var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; var_18_string = ""; // 0x1e PushV
	var_15_object = var_8_object; // 0x1f Mov
	var_16_string = "pt_d7q04_wastedmale1"; // 0x20 MovS
	var_17_string = "pers_wasted_male"; // 0x21 MovS
	var_18_string = "d7q04_wastedmale.xml"; // 0x22 MovS
	func_235(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string); // 0x23 NEW_2
	var_3_object = var_14_object; // 0x24 TMov
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = ""; // 0x26 PushV
	var_33_object = var_8_object; // 0x27 Mov
	var_34_string = "pt_d7q04_wastedmale2"; // 0x28 MovS
	var_35_string = "pers_wasted_male"; // 0x29 MovS
	var_36_string = "d7q04_wastedmale.xml"; // 0x2a MovS
	func_235(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string); // 0x2b NEW_2
	var_4_object = var_32_object; // 0x2c TMov
	var_8_object = 0; // 0x2e SetNull
	
Label_47:
	var_37_string = "init_andrei"; // 0x2f PushS
	var_38_bool = var_5_string == var_37_string; // 0x30 Eq
	if(var_38_bool == 0) goto Label_124; // 0x31 JumpB
	GetMainOutdoorScene(var_9_object); // 0x32 Func
	var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = ""; // 0x34 PushV
	var_40_object = var_9_object; // 0x35 Mov
	var_41_string = "pt_d7q04_andrei"; // 0x36 MovS
	var_42_string = "NPC_Andrei"; // 0x37 MovS
	var_43_string = "d7q04_andrei.xml"; // 0x38 MovS
	func_235(var_39_object, var_40_object, var_41_string, var_42_string, var_43_string); // 0x39 NEW_2
	var_2_object = var_39_object; // 0x3a TMov
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = ""; // 0x3c PushV
	var_45_object = var_9_object; // 0x3d Mov
	var_46_string = "pt_d7q04_nude"; // 0x3e MovS
	var_47_string = "pers_nudegirl"; // 0x3f MovS
	var_48_string = "d7q04_nudegirl.xml"; // 0x40 MovS
	func_235(var_44_object, var_45_object, var_46_string, var_47_string, var_48_string); // 0x41 NEW_2
	var_1_object = var_44_object; // 0x42 TMov
	var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = ""; // 0x44 PushV
	var_50_object = var_9_object; // 0x45 Mov
	var_51_string = "pt_d7q04_enemy1"; // 0x46 MovS
	var_52_string = "pers_morlok"; // 0x47 MovS
	var_53_string = "d7q04_e_morlok.xml"; // 0x48 MovS
	func_235(var_49_object, var_50_object, var_51_string, var_52_string, var_53_string); // 0x49 NEW_2
	add(var_49_object); // 0x4b TObjFunc
	var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = ""; // 0x4d PushV
	var_55_object = var_9_object; // 0x4e Mov
	var_56_string = "pt_d7q04_enemy2"; // 0x4f MovS
	var_57_string = "pers_butcher"; // 0x50 MovS
	var_58_string = "d7q04_e_butcher.xml"; // 0x51 MovS
	func_235(var_54_object, var_55_object, var_56_string, var_57_string, var_58_string); // 0x52 NEW_2
	add(var_54_object); // 0x54 TObjFunc
	var_59_object = Obj(); var_60_object = Obj(); var_61_string = ""; var_62_string = ""; var_63_string = ""; // 0x56 PushV
	var_60_object = var_9_object; // 0x57 Mov
	var_61_string = "pt_d7q04_enemy3"; // 0x58 MovS
	var_62_string = "pers_morlok"; // 0x59 MovS
	var_63_string = "d7q04_e_morlok.xml"; // 0x5a MovS
	func_235(var_59_object, var_60_object, var_61_string, var_62_string, var_63_string); // 0x5b NEW_2
	add(var_59_object); // 0x5d TObjFunc
	var_64_object = Obj(); var_65_object = Obj(); var_66_string = ""; var_67_string = ""; var_68_string = ""; // 0x5f PushV
	var_65_object = var_9_object; // 0x60 Mov
	var_66_string = "pt_d7q04_enemy4"; // 0x61 MovS
	var_67_string = "pers_butcher"; // 0x62 MovS
	var_68_string = "d7q04_e_butcher.xml"; // 0x63 MovS
	func_235(var_64_object, var_65_object, var_66_string, var_67_string, var_68_string); // 0x64 NEW_2
	add(var_64_object); // 0x66 TObjFunc
	var_69_object = Obj(); var_70_object = Obj(); var_71_string = ""; var_72_string = ""; var_73_string = ""; // 0x68 PushV
	var_70_object = var_9_object; // 0x69 Mov
	var_71_string = "pt_d7q04_enemy5"; // 0x6a MovS
	var_72_string = "pers_morlok"; // 0x6b MovS
	var_73_string = "d7q04_e_morlok.xml"; // 0x6c MovS
	func_235(var_69_object, var_70_object, var_71_string, var_72_string, var_73_string); // 0x6d NEW_2
	add(var_69_object); // 0x6f TObjFunc
	var_74_object = Obj(); var_75_object = Obj(); var_76_string = ""; var_77_string = ""; var_78_string = ""; // 0x71 PushV
	var_75_object = var_9_object; // 0x72 Mov
	var_76_string = "pt_d7q04_enemy6"; // 0x73 MovS
	var_77_string = "pers_butcher"; // 0x74 MovS
	var_78_string = "d7q04_e_butcher.xml"; // 0x75 MovS
	func_235(var_74_object, var_75_object, var_76_string, var_77_string, var_78_string); // 0x76 NEW_2
	add(var_74_object); // 0x78 TObjFunc
	var_9_object = 0; // 0x7a SetNull
	goto Label_137; // 0x7b Jump
	
Label_137:
	return 4; // 0x89 Return
	
Label_124:
	var_79_string = "fail"; // 0x7c PushS
	var_80_bool = var_5_string == var_79_string; // 0x7d Eq
	if(var_80_bool == 0) goto Label_131; // 0x7e JumpB
	func_149(); // 0x80 NEW_2
	goto Label_137; // 0x82 Jump
	
Label_131:
	var_110_string = "completed"; // 0x83 PushS
	var_111_bool = var_5_string == var_110_string; // 0x84 Eq
	if(var_111_bool == 0) goto Label_137; // 0x85 JumpB
	func_157(); // 0x87 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_float)
{
	func_138(); // 0xe2 NEW_2
	return 0; // 0xe4 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_6_object); // 0x1 Func
	var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = ""; // 0x3 PushV
	var_8_object = var_6_object; // 0x4 Mov
	var_9_string = "pt_gatherer_fire2"; // 0x5 MovS
	var_10_string = "scripted"; // 0x6 MovS
	var_11_string = "bonfire.xml"; // 0x7 MovS
	func_253(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string); // 0x8 NEW_2
	CreateObjectVector(var_0_object); // 0xa Func
	var_25_int = 0; // 0xc PushV
	var_25_int = 7; // 0xd MovI
	func_205(var_25_int); // 0xe NEW_2
	return 2; // 0x10 Return
}


func_229(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0xe5 PushV
	self(var_57_object); // 0xe6 Func
	var_55_object = var_57_object; // 0xe8 Mov
	return 2; // 0xe9 Return
}


func_165(var_0_object, var_27_float)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0xa5 PushV
	EventDisable(26); // 0xa6 EventDisable
	var_33_object = Obj(); var_34_string = ""; // 0xa7 PushV
	var_33_object = var_0_object; // 0xa8 MovT
	var_34_string = "cleanup"; // 0xa9 MovS
	func_271(var_33_object, var_34_string); // 0xaa NEW_2
	var_45_object = var_2_object; // 0xac PushT
	if(var_45_object == 0) goto Label_177; // 0xad JumpB
	var_46_string = "cleanup"; // 0xae PushS
	Trigger(var_32_object, var_46_string); // 0xaf Func
	
Label_177:
	var_47_object = var_1_object; // 0xb1 PushT
	if(var_47_object == 0) goto Label_182; // 0xb2 JumpB
	var_48_string = "cleanup"; // 0xb3 PushS
	Trigger(var_48_string, var_48_string); // 0xb4 Func
	
Label_182:
	var_49_object = var_3_object; // 0xb6 PushT
	if(var_49_object == 0) goto Label_187; // 0xb7 JumpB
	var_50_string = "cleanup"; // 0xb8 PushS
	Trigger(var_31_object, var_50_string); // 0xb9 Func
	
Label_187:
	var_51_object = var_4_object; // 0xbb PushT
	if(var_51_object == 0) goto Label_192; // 0xbc JumpB
	var_52_string = "cleanup"; // 0xbd PushS
	Trigger(var_27_float, var_52_string); // 0xbe Func
	
Label_192:
	var_53_string = "shouse1_kabak"; // 0xc0 PushS
	GetSceneByName(var_32_object, var_53_string); // 0xc1 Func
	var_54_string = "andrei"; // 0xc3 PushS
	Trigger(var_32_object, var_54_string); // 0xc4 Func
	var_55_object = Obj(); // 0xc6 PushV
	func_229(var_55_object); // 0xc7 NEW_2
	RemoveActor(var_55_object); // 0xc9 Func
	return 2; // 0xcb Return
}


func_138()
{
	var_7_int = 0; var_8_int = 0; // 0x8a PushV
	var_9_string = "d7q04"; // 0x8b PushS
	GetVariable(var_9_string, var_8_int); // 0x8c Func
	var_10_int = 1000; // 0x8e PushI
	var_11_bool = var_8_int != var_10_int; // 0x8f Neq
	if(var_11_bool == 0) goto Label_148; // 0x90 JumpB
	func_149(); // 0x92 NEW_2
	
Label_148:
	return 2; // 0x94 Return
}


func_235(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string)
{
	var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); // 0xeb PushV
	GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector); // 0xec ObjFunc
	var_27_bool = var_23_bool == 0; // 0xee Not
	if(var_27_bool == 0) goto Label_248; // 0xef JumpB
	var_28_string = "Locator "; // 0xf0 PushS
	var_29_int = var_28_string + var_16_string; // 0xf1 Add
	var_30_string = " doesn't exist"; // 0xf2 PushS
	var_31_int = var_29_int + var_30_string; // 0xf3 Add
	Trace(var_31_int); // 0xf4 Func
	var_26_object = 0; // 0xf6 SetNull
	goto Label_250; // 0xf7 Jump
	
Label_250:
	var_14_object = var_26_object; // 0xfa Mov
	return 8; // 0xfb Return
	
Label_248:
	AddActor(var_26_object, var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string); // 0xf8 Func
}


func_205(var_25_int)
{
	var_26_float = 0; var_27_float = 0; // 0xcd PushV
	GetGameTime(var_27_float); // 0xce Func
	var_28_int = 24; // 0xd0 PushI
	var_29_float = var_25_int * var_28_int; // 0xd1 Mult
	var_30_bool = var_27_float >= var_29_float; // 0xd2 GE
	if(var_30_bool == 0) goto Label_216; // 0xd3 JumpB
	func_165(var_26_float, var_27_float); // 0xd5 NEW_2
	goto Label_223; // 0xd7 Jump
	
Label_223:
	return 2; // 0xdf Return
	
Label_216:
	var_58_int = 0; // 0xd8 PushI
	var_59_int = 24; // 0xd9 PushI
	var_60_float = var_25_int * var_59_int; // 0xda Mult
	SetTimeEvent(var_58_int, var_60_float); // 0xdb Func
	Hold(); // 0xdd Func
}


func_271(var_33_object, var_34_string)
{
	var_35_int = 0; var_36_int = 0; var_37_object = Obj(); var_38_int = 0; var_39_int = 0; var_40_object = Obj(); // 0x10f PushV
	var_41_object = var_33_object; // 0x110 Push
	if(var_41_object == 0) goto Label_289; // 0x111 JumpB
	size(var_38_int); // 0x112 ObjFunc
	var_39_int = 0; // 0x114 MovI
	
Label_277:
	var_42_bool = var_39_int < var_38_int; // 0x115 LT
	if(var_42_bool == 0) goto Label_289; // 0x116 JumpB
	get(var_40_object, var_39_int); // 0x117 ObjFunc
	var_43_object = var_40_object; // 0x119 Push
	if(var_43_object == 0) goto Label_285; // 0x11a JumpB
	Trigger(var_40_object, var_34_string); // 0x11b Func
	
Label_285:
	var_40_object = 0; // 0x11d SetNull
	var_44_int = 1; // 0x11e PushI
	var_39_int = var_39_int + var_44_int; // 0x11f Add2
	goto Label_277; // 0x120 Jump
	
Label_289:
	return 6; // 0x121 Return
}


func_149()
{
	var_12_string = "d7q04"; // 0x95 PushS
	var_13_int = -1; // 0x96 PushI
	SetVariable(var_12_string, var_13_int); // 0x97 Func
	func_165(var_7_int, var_8_int); // 0x9a NEW_2
	return 0; // 0x9c Return
}


func_157()
{
	var_112_string = "d7q04"; // 0x9d PushS
	var_113_int = 1000; // 0x9e PushI
	SetVariable(var_112_string, var_113_int); // 0x9f Func
	func_165(var_8_object, var_9_object); // 0xa2 NEW_2
	return 0; // 0xa4 Return
}


func_253(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); // 0xfd PushV
	GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector); // 0xfe ObjFunc
	var_20_bool = var_16_bool == 0; // 0x100 Not
	if(var_20_bool == 0) goto Label_266; // 0x101 JumpB
	var_21_string = "Locator "; // 0x102 PushS
	var_22_int = var_21_string + var_9_string; // 0x103 Add
	var_23_string = " doesn't exist"; // 0x104 PushS
	var_24_int = var_22_int + var_23_string; // 0x105 Add
	Trace(var_24_int); // 0x106 Func
	var_19_object = 0; // 0x108 SetNull
	goto Label_268; // 0x109 Jump
	
Label_268:
	var_7_object = var_19_object; // 0x10c Mov
	return 8; // 0x10d Return
	
Label_266:
	AddActorByType(var_19_object, var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string); // 0x10a Func
}


