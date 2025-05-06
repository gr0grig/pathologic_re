task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_bool, var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_int = 0; var_36_object = Obj(); var_37_int = 0; var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_bool = 0; var_51_bool = 0; var_52_int = 0; // 0x40 PushV
	Trace(var_18_string); // 0x41 Func
	var_53_string = "init_soldiers"; // 0x43 PushS
	var_54_bool = var_18_string == var_53_string; // 0x44 Eq
	if(var_54_bool == 0) goto Label_99; // 0x45 JumpB
	GetMainOutdoorScene(var_36_object); // 0x46 Func
	var_37_int = 1; // 0x48 MovI
	
Label_73:
	var_55_int = 10; // 0x49 PushI
	var_56_bool = var_37_int <= var_55_int; // 0x4a LE
	if(var_56_bool == 0) goto Label_89; // 0x4b JumpB
	var_57_object = Obj(); var_58_object = Obj(); var_59_string = ""; var_60_string = ""; var_61_string = ""; // 0x4c PushV
	var_58_object = var_36_object; // 0x4d Mov
	var_62_string = "pt_d11q01_soldier"; // 0x4e PushS
	var_59_string = var_62_string + var_37_int; // 0x4f Add2
	var_60_string = "pers_soldat"; // 0x50 MovS
	var_61_string = "d11q01_soldier.xml"; // 0x51 MovS
	func_501(var_58_object, var_59_string, var_60_string, var_61_string); // 0x52 NEW_2
	add(var_57_object); // 0x54 TObjFunc
	var_76_int = 1; // 0x56 PushI
	var_37_int = var_37_int + var_76_int; // 0x57 Add2
	goto Label_73; // 0x58 Jump
	
Label_89:
	var_77_object = Obj(); var_78_object = Obj(); var_79_string = ""; var_80_string = ""; var_81_string = ""; // 0x59 PushV
	var_78_object = var_36_object; // 0x5a Mov
	var_79_string = "pt_d11q01_msoldier"; // 0x5b MovS
	var_80_string = "pers_soldat_hand"; // 0x5c MovS
	var_81_string = "d11q01_msoldier.xml"; // 0x5d MovS
	func_501(var_78_object, var_79_string, var_80_string, var_81_string); // 0x5e NEW_2
	var_2_object = var_77_object; // 0x5f TMov
	var_36_object = 0; // 0x61 SetNull
	goto Label_367; // 0x62 Jump
	
Label_367:
	return 34; // 0x16f Return
	
Label_99:
	var_82_string = "init_girl"; // 0x63 PushS
	var_83_bool = var_18_string == var_82_string; // 0x64 Eq
	if(var_83_bool == 0) goto Label_115; // 0x65 JumpB
	var_84_string = "shouse1_kabak"; // 0x66 PushS
	GetSceneByName(var_38_object, var_84_string); // 0x67 Func
	var_85_object = Obj(); var_86_object = Obj(); var_87_string = ""; var_88_string = ""; var_89_string = ""; // 0x69 PushV
	var_86_object = var_38_object; // 0x6a Mov
	var_87_string = "pt_d11q01_girl"; // 0x6b MovS
	var_88_string = "pers_nudegirl"; // 0x6c MovS
	var_89_string = "d11q01_girl.xml"; // 0x6d MovS
	func_483(var_85_object, var_86_object, var_87_string, var_88_string, var_89_string); // 0x6e NEW_2
	var_0_object = var_85_object; // 0x6f TMov
	var_38_object = 0; // 0x71 SetNull
	goto Label_367; // 0x72 Jump
	
Label_115:
	var_103_string = "remove_andrei"; // 0x73 PushS
	var_104_bool = var_18_string == var_103_string; // 0x74 Eq
	if(var_104_bool == 0) goto Label_126; // 0x75 JumpB
	var_105_string = "shouse1_kabak"; // 0x76 PushS
	GetSceneByName(var_39_object, var_105_string); // 0x77 Func
	var_106_string = "noandrei"; // 0x79 PushS
	Trigger(var_39_object, var_106_string); // 0x7a Func
	var_39_object = 0; // 0x7c SetNull
	goto Label_367; // 0x7d Jump
	
Label_126:
	var_107_string = "restore_andrei"; // 0x7e PushS
	var_108_bool = var_18_string == var_107_string; // 0x7f Eq
	if(var_108_bool == 0) goto Label_142; // 0x80 JumpB
	var_109_string = "shouse1_kabak"; // 0x81 PushS
	GetSceneByName(var_40_object, var_109_string); // 0x82 Func
	var_110_string = "andrei"; // 0x84 PushS
	Trigger(var_40_object, var_110_string); // 0x85 Func
	var_111_object = var_0_object; // 0x87 PushT
	if(var_111_object == 0) goto Label_140; // 0x88 JumpB
	var_112_string = "cleanup"; // 0x89 PushS
	Trigger(var_0_object, var_112_string); // 0x8a Func
	
Label_140:
	var_40_object = 0; // 0x8c SetNull
	goto Label_367; // 0x8d Jump
	
Label_142:
	var_113_string = "soldier_attack"; // 0x8e PushS
	var_114_bool = var_18_string == var_113_string; // 0x8f Eq
	if(var_114_bool == 0) goto Label_183; // 0x90 JumpB
	size(var_41_int); // 0x91 TObjFunc
	var_42_int = 0; // 0x93 MovI
	
Label_148:
	var_115_bool = var_42_int < var_41_int; // 0x94 LT
	if(var_115_bool == 0) goto Label_169; // 0x95 JumpB
	get(var_43_object, var_42_int); // 0x96 TObjFunc
	var_116_object = var_43_object; // 0x98 Push
	if(var_116_object == 0) goto Label_165; // 0x99 JumpB
	GetActor(var_44_object); // 0x9a ObjFunc
	var_117_bool = var_44_object == 0; // 0x9c Not
	if(var_117_bool == 0) goto Label_161; // 0x9d JumpB
	Remove(); // 0x9e ObjFunc
	goto Label_164; // 0xa0 Jump
	
Label_164:
	var_44_object = 0; // 0xa4 SetNull
	
Label_165:
	var_43_object = 0; // 0xa5 SetNull
	var_118_int = 1; // 0xa6 PushI
	var_42_int = var_42_int + var_118_int; // 0xa7 Add2
	goto Label_148; // 0xa8 Jump
	
Label_161:
	var_119_string = "attack"; // 0xa1 PushS
	Trigger(var_44_object, var_119_string); // 0xa2 Func
	
Label_169:
	var_120_object = var_2_object; // 0xa9 PushT
	if(var_120_object == 0) goto Label_182; // 0xaa JumpB
	GetActor(var_45_object); // 0xab TObjFunc
	var_121_bool = var_45_object == 0; // 0xad Not
	if(var_121_bool == 0) goto Label_178; // 0xae JumpB
	Remove(); // 0xaf TObjFunc
	goto Label_181; // 0xb1 Jump
	
Label_181:
	var_45_object = 0; // 0xb5 SetNull
	
Label_182:
	goto Label_367; // 0xb6 Jump
	
Label_178:
	var_122_string = "attack"; // 0xb2 PushS
	Trigger(var_45_object, var_122_string); // 0xb3 Func
	
Label_183:
	var_123_string = "teleport"; // 0xb7 PushS
	var_124_bool = var_18_string == var_123_string; // 0xb8 Eq
	if(var_124_bool == 0) goto Label_276; // 0xb9 JumpB
	var_125_string = "player"; // 0xba PushS
	FindActor(var_46_object, var_125_string); // 0xbb Func
	var_16_bool = 1; // 0xbd TMovB
	var_126_object = var_46_object; // 0xbe Push
	if(var_126_object == 0) goto Label_238; // 0xbf JumpB
	var_127_object = Obj(); var_128_object = Obj(); var_129_int = 0; var_130_object = Obj(); // 0xc0 PushV
	var_128_object = var_46_object; // 0xc1 Mov
	var_129_int = 0; // 0xc2 MovI
	var_130_object = var_7_object; // 0xc3 MovT
	func_429(var_129_int, var_130_object); // 0xc4 NEW_2
	var_6_object = var_127_object; // 0xc5 TMov
	var_146_object = Obj(); var_147_object = Obj(); var_148_int = 0; var_149_object = Obj(); // 0xc7 PushV
	var_147_object = var_46_object; // 0xc8 Mov
	var_148_int = 1; // 0xc9 MovI
	var_149_object = var_9_object; // 0xca MovT
	func_429(var_148_int, var_149_object); // 0xcb NEW_2
	var_8_object = var_146_object; // 0xcc TMov
	var_150_object = Obj(); var_151_object = Obj(); var_152_int = 0; var_153_object = Obj(); // 0xce PushV
	var_151_object = var_46_object; // 0xcf Mov
	var_152_int = 2; // 0xd0 MovI
	var_153_object = var_11_object; // 0xd1 MovT
	func_429(var_152_int, var_153_object); // 0xd2 NEW_2
	var_10_object = var_150_object; // 0xd3 TMov
	var_154_object = Obj(); var_155_object = Obj(); var_156_int = 0; var_157_object = Obj(); // 0xd5 PushV
	var_155_object = var_46_object; // 0xd6 Mov
	var_156_int = 3; // 0xd7 MovI
	var_157_object = var_13_object; // 0xd8 MovT
	func_429(var_156_int, var_157_object); // 0xd9 NEW_2
	var_12_object = var_154_object; // 0xda TMov
	var_158_object = Obj(); var_159_object = Obj(); var_160_int = 0; var_161_object = Obj(); // 0xdc PushV
	var_159_object = var_46_object; // 0xdd Mov
	var_160_int = 4; // 0xde MovI
	var_161_object = var_15_object; // 0xdf MovT
	func_429(var_160_int, var_161_object); // 0xe0 NEW_2
	var_14_object = var_158_object; // 0xe1 TMov
	var_47_int = 0; // 0xe3 MovI
	
Label_228:
	var_162_int = 5; // 0xe4 PushI
	var_163_bool = var_47_int < var_162_int; // 0xe5 LT
	if(var_163_bool == 0) goto Label_236; // 0xe6 JumpB
	RemoveAllItems(var_47_int); // 0xe7 ObjFunc
	var_164_int = 1; // 0xe9 PushI
	var_47_int = var_47_int + var_164_int; // 0xea Add2
	goto Label_228; // 0xeb Jump
	
Label_236:
	SelectWeapon(); // 0xec ObjFunc
	
Label_238:
	func_0(); // 0xef NEW_2
	var_171_object = Obj(); var_172_string = ""; // 0xf1 PushV
	var_172_string = "quest_d11_01_teleport"; // 0xf2 MovS
	func_472(var_171_object, var_172_string); // 0xf3 NEW_2
	GetMainOutdoorScene(var_48_object); // 0xf5 Func
	var_179_object = Obj(); var_180_object = Obj(); var_181_string = ""; var_182_string = ""; var_183_string = ""; // 0xf7 PushV
	var_180_object = var_48_object; // 0xf8 Mov
	var_181_string = "pt_d11q01_guard1"; // 0xf9 MovS
	var_182_string = "pers_soldat"; // 0xfa MovS
	var_183_string = "d11q01_guard1.xml"; // 0xfb MovS
	func_519(var_180_object, var_181_string, var_182_string, var_183_string); // 0xfc NEW_2
	var_4_object = var_179_object; // 0xfd TMov
	var_198_object = Obj(); var_199_object = Obj(); var_200_string = ""; var_201_string = ""; var_202_string = ""; // 0xff PushV
	var_199_object = var_48_object; // 0x100 Mov
	var_200_string = "pt_d11q01_guard2"; // 0x101 MovS
	var_201_string = "pers_soldat"; // 0x102 MovS
	var_202_string = "d11q01_guard2.xml"; // 0x103 MovS
	func_519(var_199_object, var_200_string, var_201_string, var_202_string); // 0x104 NEW_2
	var_5_object = var_198_object; // 0x105 TMov
	Remove(); // 0x107 TObjFunc
	var_203_object = Obj(); var_204_object = Obj(); var_205_string = ""; var_206_string = ""; var_207_string = ""; // 0x109 PushV
	var_204_object = var_48_object; // 0x10a Mov
	var_205_string = "pt_d11q01_msoldier"; // 0x10b MovS
	var_206_string = "pers_soldat"; // 0x10c MovS
	var_207_string = "d11q01_soldier.xml"; // 0x10d MovS
	func_501(var_204_object, var_205_string, var_206_string, var_207_string); // 0x10e NEW_2
	var_2_object = var_203_object; // 0x10f TMov
	var_48_object = 0; // 0x111 SetNull
	var_46_object = 0; // 0x112 SetNull
	goto Label_367; // 0x113 Jump
	
Label_276:
	var_208_string = "soldier_death"; // 0x114 PushS
	var_209_bool = var_18_string == var_208_string; // 0x115 Eq
	if(var_209_bool == 0) goto Label_334; // 0x116 JumpB
	var_210_bool = var_16_bool == 0; // 0x117 Not
	if(var_210_bool == 0) goto Label_282; // 0x118 JumpB
	return 34; // 0x119 Return
	
Label_282:
	var_211_bool = var_17_bool; // 0x11a PushT
	if(var_211_bool == 0) goto Label_285; // 0x11b JumpB
	return 34; // 0x11c Return
	
Label_285:
	var_212_object = var_2_object; // 0x11d PushT
	if(var_212_object == 0) goto Label_333; // 0x11e JumpB
	GetActor(var_49_object); // 0x11f TObjFunc
	IsDead(var_50_bool); // 0x121 ObjFunc
	var_213_bool = var_50_bool; // 0x123 Push
	if(var_213_bool == 0) goto Label_332; // 0x124 JumpB
	var_214_object = Obj(); var_215_object = Obj(); var_216_object = Obj(); // 0x125 PushV
	var_214_object = var_49_object; // 0x126 Mov
	var_215_object = var_6_object; // 0x127 MovT
	var_216_object = var_7_object; // 0x128 MovT
	func_593(); // 0x129 NEW_2
	var_230_object = Obj(); var_231_object = Obj(); var_232_object = Obj(); // 0x12b PushV
	var_230_object = var_49_object; // 0x12c Mov
	var_231_object = var_8_object; // 0x12d MovT
	var_232_object = var_9_object; // 0x12e MovT
	func_593(); // 0x12f NEW_2
	var_233_object = Obj(); var_234_object = Obj(); var_235_object = Obj(); // 0x131 PushV
	var_233_object = var_49_object; // 0x132 Mov
	var_234_object = var_10_object; // 0x133 MovT
	var_235_object = var_11_object; // 0x134 MovT
	func_593(); // 0x135 NEW_2
	var_236_object = Obj(); var_237_object = Obj(); var_238_object = Obj(); // 0x137 PushV
	var_236_object = var_49_object; // 0x138 Mov
	var_237_object = var_12_object; // 0x139 MovT
	var_238_object = var_13_object; // 0x13a MovT
	func_593(); // 0x13b NEW_2
	var_239_object = Obj(); var_240_object = Obj(); var_241_object = Obj(); // 0x13d PushV
	var_239_object = var_49_object; // 0x13e Mov
	var_240_object = var_14_object; // 0x13f MovT
	var_241_object = var_15_object; // 0x140 MovT
	func_593(); // 0x141 NEW_2
	var_242_int = 0; var_243_string = ""; // 0x143 PushV
	var_243_string = "burah_serum"; // 0x144 MovS
	func_588(var_242_int, var_243_string); // 0x145 NEW_2
	var_246_int = 0; // 0x147 PushI
	var_247_int = 1; // 0x148 PushI
	AddItem(var_51_bool, var_242_int, var_246_int, var_247_int); // 0x149 ObjFunc
	var_17_bool = 1; // 0x14b TMovB
	
Label_332:
	var_49_object = 0; // 0x14c SetNull
	
Label_333:
	goto Label_367; // 0x14d Jump
	
Label_334:
	var_248_string = "cleanup"; // 0x14e PushS
	var_249_bool = var_18_string == var_248_string; // 0x14f Eq
	if(var_249_bool == 0) goto Label_354; // 0x150 JumpB
	var_250_string = "d11q01"; // 0x151 PushS
	GetVariable(var_250_string, var_52_int); // 0x152 Func
	var_251_int = 1000; // 0x154 PushI
	var_252_bool = var_52_int != var_251_int; // 0x155 Neq
	if(var_252_bool == 0) goto Label_347; // 0x156 JumpB
	func_368(); // 0x158 NEW_2
	goto Label_350; // 0x15a Jump
	
Label_350:
	func_409(var_52_int); // 0x15f NEW_2
	goto Label_367; // 0x161 Jump
	
Label_347:
	func_390(var_51_bool, var_52_int); // 0x15c NEW_2
	
Label_354:
	var_293_string = "fail"; // 0x162 PushS
	var_294_bool = var_18_string == var_293_string; // 0x163 Eq
	if(var_294_bool == 0) goto Label_361; // 0x164 JumpB
	func_368(); // 0x166 NEW_2
	goto Label_367; // 0x168 Jump
	
Label_361:
	var_295_string = "completed"; // 0x169 PushS
	var_296_bool = var_18_string == var_295_string; // 0x16a Eq
	if(var_296_bool == 0) goto Label_367; // 0x16b JumpB
	func_382(); // 0x16d NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_bool, var_17_bool)
{
	var_18_object = Obj(); // 0xb PushV
	func_466(var_18_object); // 0xc NEW_2
	var_1_object = var_18_object; // 0xd TMov
	var_21_object = Obj(); // 0xf PushV
	func_466(var_21_object); // 0x10 NEW_2
	var_6_object = var_21_object; // 0x11 TMov
	var_22_object = Obj(); // 0x13 PushV
	func_460(var_22_object); // 0x14 NEW_2
	var_7_object = var_22_object; // 0x15 TMov
	var_25_object = Obj(); // 0x17 PushV
	func_466(var_25_object); // 0x18 NEW_2
	var_8_object = var_25_object; // 0x19 TMov
	var_26_object = Obj(); // 0x1b PushV
	func_460(var_26_object); // 0x1c NEW_2
	var_9_object = var_26_object; // 0x1d TMov
	var_27_object = Obj(); // 0x1f PushV
	func_466(var_27_object); // 0x20 NEW_2
	var_10_object = var_27_object; // 0x21 TMov
	var_28_object = Obj(); // 0x23 PushV
	func_460(var_28_object); // 0x24 NEW_2
	var_11_object = var_28_object; // 0x25 TMov
	var_29_object = Obj(); // 0x27 PushV
	func_466(var_29_object); // 0x28 NEW_2
	var_12_object = var_29_object; // 0x29 TMov
	var_30_object = Obj(); // 0x2b PushV
	func_460(var_30_object); // 0x2c NEW_2
	var_13_object = var_30_object; // 0x2d TMov
	var_31_object = Obj(); // 0x2f PushV
	func_466(var_31_object); // 0x30 NEW_2
	var_14_object = var_31_object; // 0x31 TMov
	var_32_object = Obj(); // 0x33 PushV
	func_460(var_32_object); // 0x34 NEW_2
	var_15_object = var_32_object; // 0x35 TMov
	var_33_string = ""; var_34_bool = 0; // 0x37 PushV
	var_33_string = "cot_maria@door1"; // 0x38 MovS
	var_34_bool = 1; // 0x39 MovB
	func_538(var_33_string, var_34_bool); // 0x3a NEW_2
	
Label_60:
	Hold(); // 0x3c Func
	goto Label_60; // 0x3e Jump
}


func_0()
{
	var_165_object = Obj(); var_166_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_166_object); // 0x1 Func
	var_167_string = "d3q01_graveyard_fire"; // 0x3 PushS
	var_168_cvector = CVector(0.0, 0.0, 0.0); // 0x4 PushVec
	var_169_cvector = CVector(0.0, 0.0, 1.0); // 0x5 PushVec
	var_170_string = "d3q01_graveyard_fire.xml"; // 0x6 PushS
	AddActor(var_168_cvector, var_167_string, var_166_object, var_168_cvector, var_169_cvector, var_170_string); // 0x7 Func
	return 2; // 0x9 Return
}


func_454(var_290_object)
{
	var_291_object = Obj(); var_292_object = Obj(); // 0x1c6 PushV
	self(var_292_object); // 0x1c7 Func
	var_290_object = var_292_object; // 0x1c9 Mov
	return 2; // 0x1ca Return
}


func_390(var_0_object, var_51_bool)
{
	var_262_object = var_0_object; // 0x186 PushT
	if(var_262_object == 0) goto Label_395; // 0x187 JumpB
	var_263_string = "cleanup"; // 0x188 PushS
	Trigger(var_0_object, var_263_string); // 0x189 Func
	
Label_395:
	var_264_object = var_3_object; // 0x18b PushT
	if(var_264_object == 0) goto Label_400; // 0x18c JumpB
	var_265_string = "cleanup"; // 0x18d PushS
	Trigger(var_51_bool, var_265_string); // 0x18e Func
	
Label_400:
	var_266_object = var_4_object; // 0x190 PushT
	if(var_266_object == 0) goto Label_404; // 0x191 JumpB
	Remove(); // 0x192 TObjFunc
	
Label_404:
	var_267_object = var_5_object; // 0x194 PushT
	if(var_267_object == 0) goto Label_408; // 0x195 JumpB
	Remove(); // 0x196 TObjFunc
	
Label_408:
	return 0; // 0x198 Return
}


func_519(var_179_object, var_181_string, var_182_string, var_183_string)
{
	var_184_bool = 0; var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_object = Obj(); var_188_bool = 0; var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_object = Obj(); // 0x207 PushV
	GetLocator(var_181_string, var_188_bool, var_189_cvector, var_190_cvector); // 0x208 ObjFunc
	var_192_bool = var_188_bool == 0; // 0x20a Not
	if(var_192_bool == 0) goto Label_532; // 0x20b JumpB
	var_193_string = "Locator "; // 0x20c PushS
	var_194_int = var_193_string + var_181_string; // 0x20d Add
	var_195_string = " doesn't exist"; // 0x20e PushS
	var_196_int = var_194_int + var_195_string; // 0x20f Add
	Trace(var_196_int); // 0x210 Func
	var_191_object = 0; // 0x212 SetNull
	goto Label_535; // 0x213 Jump
	
Label_535:
	var_179_object = var_191_object; // 0x217 Mov
	return 8; // 0x218 Return
	
Label_532:
	var_197_bool = 1; // 0x214 PushB
	AddStationaryActor(var_191_object, var_189_cvector, var_190_cvector, var_182_string, var_183_string, var_197_bool); // 0x215 ObjFunc
}


func_460(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x1cc PushV
	CreateIntVector(var_24_object); // 0x1cd Func
	var_22_object = var_24_object; // 0x1cf Mov
	return 2; // 0x1d0 Return
}


func_588(var_242_int, var_243_string)
{
	var_244_int = 0; var_245_int = 0; // 0x24c PushV
	GetInvItemByName(var_245_int, var_243_string); // 0x24d Func
	var_242_int = var_245_int; // 0x24f Mov
	return 2; // 0x250 Return
}


func_593()
{
	var_217_int = 0; var_218_int = 0; var_219_object = Obj(); var_220_int = 0; var_221_bool = 0; var_222_int = 0; var_223_int = 0; var_224_object = Obj(); var_225_int = 0; var_226_bool = 0; // 0x251 PushV
	size(var_222_int); // 0x252 ObjFunc
	var_223_int = 0; // 0x254 MovI
	
Label_597:
	var_227_bool = var_223_int < var_222_int; // 0x255 LT
	if(var_227_bool == 0) goto Label_610; // 0x256 JumpB
	get(var_224_object, var_223_int); // 0x257 ObjFunc
	get(var_225_int, var_223_int); // 0x259 ObjFunc
	var_228_int = 0; // 0x25b PushI
	AddItem(var_226_bool, var_224_object, var_228_int, var_225_int); // 0x25c ObjFunc
	var_224_object = 0; // 0x25e SetNull
	var_229_int = 1; // 0x25f PushI
	var_223_int = var_223_int + var_229_int; // 0x260 Add2
	goto Label_597; // 0x261 Jump
	
Label_610:
	return 10; // 0x262 Return
}


func_466(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x1d2 PushV
	CreateObjectVector(var_20_object); // 0x1d3 Func
	var_18_object = var_20_object; // 0x1d5 Mov
	return 2; // 0x1d6 Return
}


func_472(var_171_object, var_172_string)
{
	var_173_object = Obj(); var_174_object = Obj(); var_175_object = Obj(); var_176_object = Obj(); // 0x1d8 PushV
	GetMainOutdoorScene(var_175_object); // 0x1d9 Func
	var_177_string = ".bin"; // 0x1db PushS
	var_178_int = var_172_string + var_177_string; // 0x1dc Add
	AddBlankActor(var_176_object, var_175_object, var_172_string, var_178_int); // 0x1dd Func
	var_171_object = var_176_object; // 0x1df Mov
	return 4; // 0x1e0 Return
}


func_409(var_1_object)
{
	EventDisable(26); // 0x199 EventDisable
	var_268_object = Obj(); // 0x19a PushV
	var_268_object = var_1_object; // 0x19b MovT
	func_567(var_268_object); // 0x19c NEW_2
	var_279_object = var_2_object; // 0x19e PushT
	if(var_279_object == 0) goto Label_418; // 0x19f JumpB
	Remove(); // 0x1a0 TObjFunc
	
Label_418:
	var_280_string = ""; var_281_bool = 0; // 0x1a2 PushV
	var_280_string = "cot_maria@door1"; // 0x1a3 MovS
	var_281_bool = 0; // 0x1a4 MovB
	func_538(var_280_string, var_281_bool); // 0x1a5 NEW_2
	var_290_object = Obj(); // 0x1a7 PushV
	func_454(var_290_object); // 0x1a8 NEW_2
	RemoveActor(var_290_object); // 0x1aa Func
	return 0; // 0x1ac Return
}


func_538(var_33_string, var_34_bool)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x21a PushV
	FindActor(var_36_object, var_33_string); // 0x21b Func
	var_37_bool = var_36_object == 0; // 0x21d Not
	if(var_37_bool == 0) goto Label_550; // 0x21e JumpB
	var_38_string = "Door "; // 0x21f PushS
	var_39_int = var_38_string + var_33_string; // 0x220 Add
	var_40_string = " not found"; // 0x221 PushS
	var_41_int = var_39_int + var_40_string; // 0x222 Add
	Trace(var_41_int); // 0x223 Func
	goto Label_553; // 0x225 Jump
	
Label_553:
	return 2; // 0x229 Return
	
Label_550:
	var_42_string = "locked"; // 0x226 PushS
	SetProperty(var_42_string, var_34_bool); // 0x227 ObjFunc
}


func_483(var_85_object, var_86_object, var_87_string, var_88_string, var_89_string)
{
	var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); // 0x1e3 PushV
	GetLocator(var_87_string, var_94_bool, var_95_cvector, var_96_cvector); // 0x1e4 ObjFunc
	var_98_bool = var_94_bool == 0; // 0x1e6 Not
	if(var_98_bool == 0) goto Label_496; // 0x1e7 JumpB
	var_99_string = "Locator "; // 0x1e8 PushS
	var_100_int = var_99_string + var_87_string; // 0x1e9 Add
	var_101_string = " doesn't exist"; // 0x1ea PushS
	var_102_int = var_100_int + var_101_string; // 0x1eb Add
	Trace(var_102_int); // 0x1ec Func
	var_97_object = 0; // 0x1ee SetNull
	goto Label_498; // 0x1ef Jump
	
Label_498:
	var_85_object = var_97_object; // 0x1f2 Mov
	return 8; // 0x1f3 Return
	
Label_496:
	AddActor(var_97_object, var_88_string, var_86_object, var_95_cvector, var_96_cvector, var_89_string); // 0x1f0 Func
}


func_555(var_253_bool, var_254_string, var_255_string, var_256_string)
{
	var_257_object = Obj(); var_258_object = Obj(); // 0x22b PushV
	FindActor(var_258_object, var_254_string); // 0x22c Func
	var_259_bool = var_258_object == 0; // 0x22e NullEq
	if(var_259_bool == 0) goto Label_562; // 0x22f JumpB
	var_253_bool = 0; // 0x230 MovB
	return 2; // 0x231 Return
	
Label_562:
	Trigger(var_258_object, var_255_string, var_256_string); // 0x232 Func
	var_253_bool = 1; // 0x234 MovB
	return 2; // 0x235 Return
}


func_429(var_127_object, var_129_int)
{
	var_131_object = Obj(); var_132_int = 0; var_133_int = 0; var_134_object = Obj(); var_135_int = 0; var_136_object = Obj(); var_137_int = 0; var_138_int = 0; var_139_object = Obj(); var_140_int = 0; // 0x1ad PushV
	var_141_object = Obj(); // 0x1ae PushV
	func_466(var_141_object); // 0x1af NEW_2
	var_136_object = var_141_object; // 0x1b0 Mov
	GetItemCount(var_137_int, var_129_int); // 0x1b2 ObjFunc
	var_138_int = 0; // 0x1b4 MovI
	
Label_437:
	var_144_bool = var_138_int < var_137_int; // 0x1b5 LT
	if(var_144_bool == 0) goto Label_451; // 0x1b6 JumpB
	GetItem(var_139_object, var_138_int, var_129_int); // 0x1b7 ObjFunc
	add(var_139_object); // 0x1b9 ObjFunc
	GetItemAmount(var_140_int, var_138_int, var_129_int); // 0x1bb ObjFunc
	add(var_140_int); // 0x1bd ObjFunc
	var_139_object = 0; // 0x1bf SetNull
	var_145_int = 1; // 0x1c0 PushI
	var_138_int = var_138_int + var_145_int; // 0x1c1 Add2
	goto Label_437; // 0x1c2 Jump
	
Label_451:
	var_127_object = var_136_object; // 0x1c3 Mov
	return 10; // 0x1c4 Return
}


func_368()
{
	var_253_bool = 0; var_254_string = ""; var_255_string = ""; var_256_string = ""; // 0x170 PushV
	var_254_string = "volonteers_danko"; // 0x171 MovS
	var_255_string = "disease"; // 0x172 MovS
	var_256_string = "andrei"; // 0x173 MovS
	func_555(var_253_bool, var_254_string, var_255_string, var_256_string); // 0x174 NEW_2
	var_260_string = "d11q01"; // 0x176 PushS
	var_261_int = -1; // 0x177 PushI
	SetVariable(var_260_string, var_261_int); // 0x178 Func
	func_390(var_51_bool, var_52_int); // 0x17b NEW_2
	return 0; // 0x17d Return
}


func_501(var_57_object, var_59_string, var_60_string, var_61_string)
{
	var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_object = Obj(); var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_object = Obj(); // 0x1f5 PushV
	GetLocator(var_59_string, var_67_bool, var_68_cvector, var_69_cvector); // 0x1f6 ObjFunc
	var_71_bool = var_67_bool == 0; // 0x1f8 Not
	if(var_71_bool == 0) goto Label_514; // 0x1f9 JumpB
	var_72_string = "Locator "; // 0x1fa PushS
	var_73_int = var_72_string + var_59_string; // 0x1fb Add
	var_74_string = " doesn't exist"; // 0x1fc PushS
	var_75_int = var_73_int + var_74_string; // 0x1fd Add
	Trace(var_75_int); // 0x1fe Func
	var_70_object = 0; // 0x200 SetNull
	goto Label_516; // 0x201 Jump
	
Label_516:
	var_57_object = var_70_object; // 0x204 Mov
	return 8; // 0x205 Return
	
Label_514:
	AddStationaryActor(var_70_object, var_68_cvector, var_69_cvector, var_60_string, var_61_string); // 0x202 ObjFunc
}


func_567(var_268_object)
{
	var_269_int = 0; var_270_int = 0; var_271_object = Obj(); var_272_int = 0; var_273_int = 0; var_274_object = Obj(); // 0x237 PushV
	var_275_object = var_268_object; // 0x238 Push
	if(var_275_object == 0) goto Label_587; // 0x239 JumpB
	size(var_272_int); // 0x23a ObjFunc
	var_273_int = 0; // 0x23c MovI
	
Label_573:
	var_276_bool = var_273_int < var_272_int; // 0x23d LT
	if(var_276_bool == 0) goto Label_585; // 0x23e JumpB
	get(var_274_object, var_273_int); // 0x23f ObjFunc
	var_277_object = var_274_object; // 0x241 Push
	if(var_277_object == 0) goto Label_581; // 0x242 JumpB
	Remove(); // 0x243 ObjFunc
	
Label_581:
	var_274_object = 0; // 0x245 SetNull
	var_278_int = 1; // 0x246 PushI
	var_273_int = var_273_int + var_278_int; // 0x247 Add2
	goto Label_573; // 0x248 Jump
	
Label_585:
	clear(); // 0x249 ObjFunc
	
Label_587:
	return 6; // 0x24b Return
}


func_382()
{
	var_297_string = "d11q01"; // 0x17e PushS
	var_298_int = 1000; // 0x17f PushI
	SetVariable(var_297_string, var_298_int); // 0x180 Func
	func_390(var_51_bool, var_52_int); // 0x183 NEW_2
	return 0; // 0x185 Return
}


