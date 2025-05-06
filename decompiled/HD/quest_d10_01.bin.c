task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_string)
{
	var_7_object = Obj(); var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_int = 0; // 0x17 PushV
	Trace(var_6_string); // 0x18 Func
	var_15_string = "init_house"; // 0x1a PushS
	var_16_bool = var_6_string == var_15_string; // 0x1b Eq
	if(var_16_bool == 0) goto Label_91; // 0x1c JumpB
	var_17_bool = 0; var_18_string = ""; // 0x1d PushV
	var_18_string = "NPC_Petr"; // 0x1e MovS
	func_273(var_17_bool, var_18_string); // 0x1f NEW_2
	var_5_bool = 1; // 0x21 TMovB
	var_22_string = "house_petr"; // 0x22 PushS
	GetSceneByName(var_11_object, var_22_string); // 0x23 Func
	var_12_int = 1; // 0x25 MovI
	
Label_38:
	var_23_int = 4; // 0x26 PushI
	var_24_bool = var_12_int <= var_23_int; // 0x27 LE
	if(var_24_bool == 0) goto Label_54; // 0x28 JumpB
	var_25_object = Obj(); var_26_object = Obj(); var_27_string = ""; var_28_string = ""; var_29_string = ""; // 0x29 PushV
	var_26_object = var_11_object; // 0x2a Mov
	var_30_string = "pt_d10q01_soldier"; // 0x2b PushS
	var_27_string = var_30_string + var_12_int; // 0x2c Add2
	var_28_string = "pers_soldat"; // 0x2d MovS
	var_29_string = "d10q01_soldier.xml"; // 0x2e MovS
	func_220(var_25_object, var_26_object, var_27_string, var_28_string, var_29_string); // 0x2f NEW_2
	add(var_25_object); // 0x31 TObjFunc
	var_44_int = 1; // 0x33 PushI
	var_12_int = var_12_int + var_44_int; // 0x34 Add2
	goto Label_38; // 0x35 Jump
	
Label_54:
	var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = ""; // 0x36 PushV
	var_46_object = var_11_object; // 0x37 Mov
	var_47_string = "pt_d10q01_msoldier"; // 0x38 MovS
	var_48_string = "pers_soldat"; // 0x39 MovS
	var_49_string = "d10q01_msoldier.xml"; // 0x3a MovS
	func_220(var_45_object, var_46_object, var_47_string, var_48_string, var_49_string); // 0x3b NEW_2
	add(var_45_object); // 0x3d TObjFunc
	var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = ""; // 0x3f PushV
	var_51_object = var_11_object; // 0x40 Mov
	var_52_string = "pt_d10q01_sketch"; // 0x41 MovS
	var_53_string = "scripted_container"; // 0x42 MovS
	var_54_string = "d10q01_blueprint.xml"; // 0x43 MovS
	func_238(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string); // 0x44 NEW_2
	var_1_object = var_50_object; // 0x45 TMov
	GetMainOutdoorScene(var_11_object); // 0x47 Func
	var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = ""; // 0x49 PushV
	var_69_object = var_11_object; // 0x4a Mov
	var_70_string = "pt_d10q01_petr"; // 0x4b MovS
	var_71_string = "pers_birdmask"; // 0x4c MovS
	var_72_string = "d10q01_petr.xml"; // 0x4d MovS
	func_220(var_68_object, var_69_object, var_70_string, var_71_string, var_72_string); // 0x4e NEW_2
	var_2_object = var_68_object; // 0x4f TMov
	var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = ""; // 0x51 PushV
	var_74_object = var_11_object; // 0x52 Mov
	var_75_string = "pt_d10q01_fire"; // 0x53 MovS
	var_76_string = "scripted"; // 0x54 MovS
	var_77_string = "d10q01_fire.xml"; // 0x55 MovS
	func_238(var_73_object, var_74_object, var_75_string, var_76_string, var_77_string); // 0x56 NEW_2
	var_3_object = var_73_object; // 0x57 TMov
	var_11_object = 0; // 0x59 SetNull
	goto Label_145; // 0x5a Jump
	
Label_145:
	return 8; // 0x91 Return
	
Label_91:
	var_78_string = "soldier_fight"; // 0x5b PushS
	var_79_bool = var_6_string == var_78_string; // 0x5c Eq
	if(var_79_bool == 0) goto Label_101; // 0x5d JumpB
	var_80_object = Obj(); var_81_string = ""; // 0x5e PushV
	var_80_object = var_0_object; // 0x5f MovT
	var_81_string = "attack"; // 0x60 MovS
	func_285(var_80_object, var_81_string); // 0x61 NEW_2
	var_4_bool = 1; // 0x63 TMovB
	goto Label_145; // 0x64 Jump
	
Label_101:
	var_92_string = "house_unload"; // 0x65 PushS
	var_93_bool = var_6_string == var_92_string; // 0x66 Eq
	if(var_93_bool == 0) goto Label_115; // 0x67 JumpB
	var_94_string = "d10q01SoldierTalk"; // 0x68 PushS
	GetVariable(var_94_string, var_13_int); // 0x69 Func
	var_95_int = var_13_int; // 0x6b Push
	if(var_95_int == 0) goto Label_114; // 0x6c JumpB
	var_96_string = ""; var_97_bool = 0; // 0x6d PushV
	var_96_string = "house_petr@door1"; // 0x6e MovS
	var_97_bool = 1; // 0x6f MovB
	func_256(var_96_string, var_97_bool); // 0x70 NEW_2
	
Label_114:
	goto Label_145; // 0x72 Jump
	
Label_115:
	var_106_string = "cleanup"; // 0x73 PushS
	var_107_bool = var_6_string == var_106_string; // 0x74 Eq
	if(var_107_bool == 0) goto Label_132; // 0x75 JumpB
	var_108_string = "d10q01"; // 0x76 PushS
	GetVariable(var_108_string, var_14_int); // 0x77 Func
	var_109_int = 1000; // 0x79 PushI
	var_110_bool = var_14_int != var_109_int; // 0x7a Neq
	if(var_110_bool == 0) goto Label_128; // 0x7b JumpB
	func_146(); // 0x7d NEW_2
	goto Label_131; // 0x7f Jump
	
Label_131:
	goto Label_145; // 0x83 Jump
	
Label_128:
	func_162(var_14_int); // 0x81 NEW_2
	
Label_132:
	var_135_string = "fail"; // 0x84 PushS
	var_136_bool = var_6_string == var_135_string; // 0x85 Eq
	if(var_136_bool == 0) goto Label_139; // 0x86 JumpB
	func_146(); // 0x88 NEW_2
	goto Label_145; // 0x8a Jump
	
Label_139:
	var_137_string = "completed"; // 0x8b PushS
	var_138_bool = var_6_string == var_137_string; // 0x8c Eq
	if(var_138_bool == 0) goto Label_145; // 0x8d JumpB
	func_154(); // 0x8f NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_bool)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x0 PushV
	var_5_bool = 0; // 0x1 TMovB
	var_8_string = "warehouse_rubin"; // 0x2 PushS
	GetSceneByName(var_7_object, var_8_string); // 0x3 Func
	var_9_string = "rubin"; // 0x5 PushS
	Trigger(var_7_object, var_9_string); // 0x6 Func
	var_10_string = ""; var_11_bool = 0; // 0x8 PushV
	var_10_string = "house_petr@door1"; // 0x9 MovS
	var_11_bool = 0; // 0xa MovB
	func_256(var_10_string, var_11_bool); // 0xb NEW_2
	var_20_object = Obj(); // 0xd PushV
	func_214(var_20_object); // 0xe NEW_2
	var_0_object = var_20_object; // 0xf TMov
	var_4_bool = 0; // 0x11 TMovB
	
Label_18:
	Hold(); // 0x12 Func
	goto Label_18; // 0x14 Jump
}


func_256(var_10_string, var_11_bool)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x100 PushV
	FindActor(var_13_object, var_10_string); // 0x101 Func
	var_14_bool = var_13_object == 0; // 0x103 Not
	if(var_14_bool == 0) goto Label_268; // 0x104 JumpB
	var_15_string = "Door "; // 0x105 PushS
	var_16_int = var_15_string + var_10_string; // 0x106 Add
	var_17_string = " not found"; // 0x107 PushS
	var_18_int = var_16_int + var_17_string; // 0x108 Add
	Trace(var_18_int); // 0x109 Func
	goto Label_271; // 0x10b Jump
	
Label_271:
	return 2; // 0x10f Return
	
Label_268:
	var_19_string = "locked"; // 0x10c PushS
	SetProperty(var_19_string, var_11_bool); // 0x10d ObjFunc
}


func_162(var_0_object)
{
	var_113_object = Obj(); var_114_object = Obj(); // 0xa2 PushV
	EventDisable(26); // 0xa3 EventDisable
	var_115_object = Obj(); var_116_string = ""; // 0xa4 PushV
	var_115_object = var_0_object; // 0xa5 MovT
	var_116_string = "cleanup"; // 0xa6 MovS
	func_285(var_115_object, var_116_string); // 0xa7 NEW_2
	var_117_object = var_1_object; // 0xa9 PushT
	if(var_117_object == 0) goto Label_174; // 0xaa JumpB
	var_118_string = "cleanup"; // 0xab PushS
	Trigger(var_118_string, var_118_string); // 0xac Func
	
Label_174:
	var_119_object = var_2_object; // 0xae PushT
	if(var_119_object == 0) goto Label_179; // 0xaf JumpB
	var_120_string = "cleanup"; // 0xb0 PushS
	Trigger(var_114_object, var_120_string); // 0xb1 Func
	
Label_179:
	var_121_object = var_3_object; // 0xb3 PushT
	if(var_121_object == 0) goto Label_184; // 0xb4 JumpB
	var_122_string = "cleanup"; // 0xb5 PushS
	Trigger(var_113_object, var_122_string); // 0xb6 Func
	
Label_184:
	var_123_string = ""; var_124_bool = 0; // 0xb8 PushV
	var_123_string = "house_petr@door1"; // 0xb9 MovS
	var_124_bool = 0; // 0xba MovB
	func_256(var_123_string, var_124_bool); // 0xbb NEW_2
	var_125_bool = var_5_bool; // 0xbd PushT
	if(var_125_bool == 0) goto Label_202; // 0xbe JumpB
	var_126_string = "house_petr"; // 0xbf PushS
	GetSceneByName(var_114_object, var_126_string); // 0xc0 Func
	var_127_object = Obj(); var_128_object = Obj(); var_129_string = ""; var_130_string = ""; var_131_string = ""; // 0xc2 PushV
	var_128_object = var_114_object; // 0xc3 Mov
	var_129_string = "pt_petr"; // 0xc4 MovS
	var_130_string = "NPC_Petr"; // 0xc5 MovS
	var_131_string = "NPC_Danko_Petr.xml"; // 0xc6 MovS
	func_220(var_127_object, var_128_object, var_129_string, var_130_string, var_131_string); // 0xc7 NEW_2
	var_114_object = 0; // 0xc9 SetNull
	
Label_202:
	var_132_object = Obj(); // 0xca PushV
	func_208(var_132_object); // 0xcb NEW_2
	RemoveActor(var_132_object); // 0xcd Func
	return 2; // 0xcf Return
}


func_238(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string)
{
	var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0xee PushV
	GetLocator(var_52_string, var_59_bool, var_60_cvector, var_61_cvector); // 0xef ObjFunc
	var_63_bool = var_59_bool == 0; // 0xf1 Not
	if(var_63_bool == 0) goto Label_251; // 0xf2 JumpB
	var_64_string = "Locator "; // 0xf3 PushS
	var_65_int = var_64_string + var_52_string; // 0xf4 Add
	var_66_string = " doesn't exist"; // 0xf5 PushS
	var_67_int = var_65_int + var_66_string; // 0xf6 Add
	Trace(var_67_int); // 0xf7 Func
	var_62_object = 0; // 0xf9 SetNull
	goto Label_253; // 0xfa Jump
	
Label_253:
	var_50_object = var_62_object; // 0xfd Mov
	return 8; // 0xfe Return
	
Label_251:
	AddActorByType(var_62_object, var_53_string, var_51_object, var_60_cvector, var_61_cvector, var_54_string); // 0xfb Func
}


func_208(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0xd0 PushV
	self(var_134_object); // 0xd1 Func
	var_132_object = var_134_object; // 0xd3 Mov
	return 2; // 0xd4 Return
}


func_273(var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x111 PushV
	FindActor(var_20_object, var_18_string); // 0x112 Func
	var_21_bool = var_20_object == 0; // 0x114 Not
	if(var_21_bool == 0) goto Label_280; // 0x115 JumpB
	var_17_bool = 0; // 0x116 MovB
	return 2; // 0x117 Return
	
Label_280:
	RemoveActor(var_20_object); // 0x118 Func
	var_17_bool = 1; // 0x11a MovB
	return 2; // 0x11b Return
}


func_146()
{
	var_111_string = "d10q01"; // 0x92 PushS
	var_112_int = -1; // 0x93 PushI
	SetVariable(var_111_string, var_112_int); // 0x94 Func
	func_162(var_14_int); // 0x97 NEW_2
	return 0; // 0x99 Return
}


func_214(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0xd6 PushV
	CreateObjectVector(var_22_object); // 0xd7 Func
	var_20_object = var_22_object; // 0xd9 Mov
	return 2; // 0xda Return
}


func_154()
{
	var_139_string = "d10q01"; // 0x9a PushS
	var_140_int = 1000; // 0x9b PushI
	SetVariable(var_139_string, var_140_int); // 0x9c Func
	func_162(var_14_int); // 0x9f NEW_2
	return 0; // 0xa1 Return
}


func_220(var_25_object, var_26_object, var_27_string, var_28_string, var_29_string)
{
	var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); // 0xdc PushV
	GetLocator(var_27_string, var_35_bool, var_36_cvector, var_37_cvector); // 0xdd ObjFunc
	var_39_bool = var_35_bool == 0; // 0xdf Not
	if(var_39_bool == 0) goto Label_233; // 0xe0 JumpB
	var_40_string = "Locator "; // 0xe1 PushS
	var_41_int = var_40_string + var_27_string; // 0xe2 Add
	var_42_string = " doesn't exist"; // 0xe3 PushS
	var_43_int = var_41_int + var_42_string; // 0xe4 Add
	Trace(var_43_int); // 0xe5 Func
	var_38_object = 0; // 0xe7 SetNull
	goto Label_235; // 0xe8 Jump
	
Label_235:
	var_25_object = var_38_object; // 0xeb Mov
	return 8; // 0xec Return
	
Label_233:
	AddActor(var_38_object, var_28_string, var_26_object, var_36_cvector, var_37_cvector, var_29_string); // 0xe9 Func
}


func_285(var_80_object, var_81_string)
{
	var_82_int = 0; var_83_int = 0; var_84_object = Obj(); var_85_int = 0; var_86_int = 0; var_87_object = Obj(); // 0x11d PushV
	var_88_object = var_80_object; // 0x11e Push
	if(var_88_object == 0) goto Label_303; // 0x11f JumpB
	size(var_85_int); // 0x120 ObjFunc
	var_86_int = 0; // 0x122 MovI
	
Label_291:
	var_89_bool = var_86_int < var_85_int; // 0x123 LT
	if(var_89_bool == 0) goto Label_303; // 0x124 JumpB
	get(var_87_object, var_86_int); // 0x125 ObjFunc
	var_90_object = var_87_object; // 0x127 Push
	if(var_90_object == 0) goto Label_299; // 0x128 JumpB
	Trigger(var_87_object, var_81_string); // 0x129 Func
	
Label_299:
	var_87_object = 0; // 0x12b SetNull
	var_91_int = 1; // 0x12c PushI
	var_86_int = var_86_int + var_91_int; // 0x12d Add2
	goto Label_291; // 0x12e Jump
	
Label_303:
	return 6; // 0x12f Return
}


