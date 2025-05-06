task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj(); var_20_float = 0; var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_int = 0; var_29_object = Obj(); var_30_float = 0; var_31_object = Obj(); var_32_int = 0; // 0xe PushV
	Trace(var_12_string); // 0xf Func
	var_33_string = "lock_danko"; // 0x11 PushS
	var_34_bool = var_12_string == var_33_string; // 0x12 Eq
	if(var_34_bool == 0) goto Label_33; // 0x13 JumpB
	var_35_string = ""; var_36_bool = 0; // 0x14 PushV
	var_35_string = "icot_eva_door"; // 0x15 MovS
	var_36_bool = 1; // 0x16 MovB
	func_593(var_35_string, var_36_bool); // 0x17 NEW_2
	var_46_string = "cot_eva"; // 0x19 PushS
	GetSceneByName(var_23_object, var_46_string); // 0x1a Func
	var_47_string = "danko"; // 0x1c PushS
	Trigger(var_23_object, var_47_string); // 0x1d Func
	var_23_object = 0; // 0x1f SetNull
	goto Label_334; // 0x20 Jump
	
Label_334:
	return 20; // 0x14e Return
	
Label_33:
	var_48_string = "teleport"; // 0x21 PushS
	var_49_bool = var_12_string == var_48_string; // 0x22 Eq
	if(var_49_bool == 0) goto Label_108; // 0x23 JumpB
	func_5(); // 0x25 NEW_2
	GetScene(var_24_object); // 0x27 Func
	var_54_string = "cot_eva"; // 0x29 PushS
	GetSceneByName(var_25_object, var_54_string); // 0x2a Func
	var_55_string = ""; var_56_bool = 0; // 0x2c PushV
	var_55_string = "icot_eva_door"; // 0x2d MovS
	var_56_bool = 0; // 0x2e MovB
	func_593(var_55_string, var_56_bool); // 0x2f NEW_2
	var_57_string = ""; var_58_bool = 0; // 0x31 PushV
	var_57_string = "icot_eva@door1"; // 0x32 MovS
	var_58_bool = 1; // 0x33 MovB
	func_576(var_57_string, var_58_bool); // 0x34 NEW_2
	var_67_string = "door_close"; // 0x36 PushS
	PlaySound(var_67_string); // 0x37 Func
	var_68_object = var_1_object; // 0x39 PushT
	if(var_68_object == 0) goto Label_62; // 0x3a JumpB
	var_69_string = "cleanup"; // 0x3b PushS
	Trigger(var_69_string, var_69_string); // 0x3c Func
	
Label_62:
	var_70_bool = var_24_object != var_25_object; // 0x3e Neq
	if(var_70_bool == 0) goto Label_75; // 0x3f JumpB
	var_71_object = Obj(); var_72_string = ""; var_73_string = ""; // 0x40 PushV
	var_74_object = Obj(); // 0x41 PushV
	func_514(var_74_object); // 0x42 NEW_2
	var_71_object = var_74_object; // 0x43 Mov
	var_72_string = "cot_eva"; // 0x45 MovS
	var_73_string = "pt_k6q01_klara"; // 0x46 MovS
	func_645(var_71_object, var_72_string, var_73_string); // 0x47 NEW_2
	sync(); // 0x49 Func
	
Label_75:
	var_95_string = "player"; // 0x4b PushS
	FindActor(var_26_object, var_95_string); // 0x4c Func
	var_96_bool = 0; // 0x4e PushV
	var_96_bool = 0; // 0x4f MovB
	var_97_object = var_26_object; // 0x50 Push
	if(var_97_object == 0) goto Label_85; // 0x51 JumpB
	var_98_bool = var_0_bool; // 0x52 PushT
	if(var_98_bool == 0) goto Label_85; // 0x53 JumpB
	var_96_bool = 1; // 0x54 MovB
	
Label_85:
	if(var_96_bool == 0) goto Label_104; // 0x55 JumpB
	var_99_object = Obj(); var_100_object = Obj(); var_101_object = Obj(); // 0x56 PushV
	var_99_object = var_26_object; // 0x57 Mov
	var_100_object = var_4_object; // 0x58 MovT
	var_101_object = var_5_object; // 0x59 MovT
	func_669(var_101_object); // 0x5a NEW_2
	var_128_object = Obj(); var_129_object = Obj(); var_130_object = Obj(); // 0x5c PushV
	var_128_object = var_26_object; // 0x5d Mov
	var_129_object = var_8_object; // 0x5e MovT
	var_130_object = var_9_object; // 0x5f MovT
	func_669(var_130_object); // 0x60 NEW_2
	var_131_object = Obj(); var_132_object = Obj(); var_133_object = Obj(); // 0x62 PushV
	var_131_object = var_26_object; // 0x63 Mov
	var_132_object = var_10_object; // 0x64 MovT
	var_133_object = var_11_object; // 0x65 MovT
	func_669(var_133_object); // 0x66 NEW_2
	
Label_104:
	var_26_object = 0; // 0x68 SetNull
	var_25_object = 0; // 0x69 SetNull
	var_24_object = 0; // 0x6a SetNull
	goto Label_334; // 0x6b Jump
	
Label_108:
	var_134_string = "cot_eva_load"; // 0x6c PushS
	var_135_bool = var_12_string == var_134_string; // 0x6d Eq
	if(var_135_bool == 0) goto Label_139; // 0x6e JumpB
	var_136_string = "k6q01"; // 0x6f PushS
	GetVariable(var_136_string, var_27_int); // 0x70 Func
	var_137_string = "k6q01DoorWasLocked"; // 0x72 PushS
	GetVariable(var_137_string, var_28_int); // 0x73 Func
	var_138_bool = 0; // 0x75 PushV
	var_138_bool = 0; // 0x76 MovB
	var_139_int = 2; // 0x77 PushI
	var_140_bool = var_27_int == var_139_int; // 0x78 Eq
	if(var_140_bool == 0) goto Label_125; // 0x79 JumpB
	var_141_bool = var_28_int == 0; // 0x7a Not
	if(var_141_bool == 0) goto Label_125; // 0x7b JumpB
	var_138_bool = 1; // 0x7c MovB
	
Label_125:
	if(var_138_bool == 0) goto Label_138; // 0x7d JumpB
	var_142_string = ""; var_143_bool = 0; // 0x7e PushV
	var_142_string = "icot_eva@door1"; // 0x7f MovS
	var_143_bool = 1; // 0x80 MovB
	func_576(var_142_string, var_143_bool); // 0x81 NEW_2
	var_144_string = "k6q01DoorWasLocked"; // 0x83 PushS
	var_145_int = 1; // 0x84 PushI
	SetVariable(var_144_string, var_145_int); // 0x85 Func
	var_146_string = "door_close"; // 0x87 PushS
	PlaySound(var_146_string); // 0x88 Func
	
Label_138:
	goto Label_334; // 0x8a Jump
	
Label_139:
	var_147_string = "unlock_eva"; // 0x8b PushS
	var_148_bool = var_12_string == var_147_string; // 0x8c Eq
	if(var_148_bool == 0) goto Label_204; // 0x8d JumpB
	var_149_string = ""; var_150_bool = 0; // 0x8e PushV
	var_149_string = "icot_eva@door1"; // 0x8f MovS
	var_150_bool = 0; // 0x90 MovB
	func_576(var_149_string, var_150_bool); // 0x91 NEW_2
	var_151_string = "door_open"; // 0x93 PushS
	PlaySound(var_151_string); // 0x94 Func
	var_152_string = "k6q01ItemsRemoved"; // 0x96 PushS
	var_153_int = 1; // 0x97 PushI
	SetVariable(var_152_string, var_153_int); // 0x98 Func
	CreateIntVector(var_30_float); // 0x9a Func
	CreateIntVector(var_28_int); // 0x9c Func
	CreateIntVector(var_26_object); // 0x9e Func
	CreateIntVector(var_24_object); // 0xa0 Func
	CreateIntVector(var_22_int); // 0xa2 Func
	var_154_string = "player"; // 0xa4 PushS
	FindActor(var_29_object, var_154_string); // 0xa5 Func
	var_155_object = var_29_object; // 0xa7 Push
	if(var_155_object == 0) goto Label_202; // 0xa8 JumpB
	var_156_object = Obj(); var_157_object = Obj(); var_158_int = 0; var_159_object = Obj(); // 0xa9 PushV
	var_157_object = var_29_object; // 0xaa Mov
	var_158_int = 1; // 0xab MovI
	var_159_object = var_5_object; // 0xac MovT
	func_521(var_158_int, var_159_object); // 0xad NEW_2
	var_4_object = var_156_object; // 0xae TMov
	var_175_object = Obj(); var_176_object = Obj(); var_177_int = 0; var_178_object = Obj(); // 0xb0 PushV
	var_176_object = var_29_object; // 0xb1 Mov
	var_177_int = 3; // 0xb2 MovI
	var_178_object = var_9_object; // 0xb3 MovT
	func_521(var_177_int, var_178_object); // 0xb4 NEW_2
	var_8_object = var_175_object; // 0xb5 TMov
	var_179_object = Obj(); var_180_object = Obj(); var_181_int = 0; var_182_object = Obj(); // 0xb7 PushV
	var_180_object = var_29_object; // 0xb8 Mov
	var_181_int = 4; // 0xb9 MovI
	var_182_object = var_11_object; // 0xba MovT
	func_521(var_181_int, var_182_object); // 0xbb NEW_2
	var_10_object = var_179_object; // 0xbc TMov
	var_183_int = 1; // 0xbe PushI
	ClearSubContainer(var_183_int); // 0xbf ObjFunc
	var_184_int = 3; // 0xc1 PushI
	ClearSubContainer(var_184_int); // 0xc2 ObjFunc
	var_185_int = 4; // 0xc4 PushI
	ClearSubContainer(var_185_int); // 0xc5 ObjFunc
	SelectWeapon(); // 0xc7 ObjFunc
	var_0_bool = 1; // 0xc9 TMovB
	
Label_202:
	var_29_object = 0; // 0xca SetNull
	goto Label_334; // 0xcb Jump
	
Label_204:
	var_186_string = "place_danko"; // 0xcc PushS
	var_187_bool = var_12_string == var_186_string; // 0xcd Eq
	if(var_187_bool == 0) goto Label_304; // 0xce JumpB
	GetGameTime(var_30_float); // 0xcf Func
	var_188_int = 134; // 0xd1 PushI
	var_189_bool = var_30_float < var_188_int; // 0xd2 LT
	if(var_189_bool == 0) goto Label_240; // 0xd3 JumpB
	var_190_string = "cot_anna"; // 0xd4 PushS
	GetSceneByName(var_31_object, var_190_string); // 0xd5 Func
	var_191_object = Obj(); var_192_object = Obj(); var_193_string = ""; var_194_string = ""; var_195_string = ""; // 0xd7 PushV
	var_192_object = var_31_object; // 0xd8 Mov
	var_193_string = "pt_k6q01_danko"; // 0xd9 MovS
	var_194_string = "NPC_Bakalavr"; // 0xda MovS
	var_195_string = "k6q01_danko.xml"; // 0xdb MovS
	func_558(var_191_object, var_192_object, var_193_string, var_194_string, var_195_string); // 0xdc NEW_2
	var_1_object = var_191_object; // 0xdd TMov
	var_209_int = 1; // 0xdf PushI
	var_210_int = 134; // 0xe0 PushI
	SetTimeEvent(var_209_int, var_210_int); // 0xe1 Func
	var_211_int = 2; // 0xe3 PushI
	var_212_int = 136; // 0xe4 PushI
	SetTimeEvent(var_211_int, var_212_int); // 0xe5 Func
	var_213_int = 3; // 0xe7 PushI
	var_214_int = 138; // 0xe8 PushI
	SetTimeEvent(var_213_int, var_214_int); // 0xe9 Func
	var_215_string = "k6q01DankoPos"; // 0xeb PushS
	var_216_int = 1; // 0xec PushI
	SetVariable(var_215_string, var_216_int); // 0xed Func
	goto Label_302; // 0xef Jump
	
Label_302:
	var_31_object = 0; // 0x12e SetNull
	goto Label_334; // 0x12f Jump
	
Label_240:
	var_217_int = 136; // 0xf0 PushI
	var_218_bool = var_30_float < var_217_int; // 0xf1 LT
	if(var_218_bool == 0) goto Label_267; // 0xf2 JumpB
	var_219_string = "cot_lara"; // 0xf3 PushS
	GetSceneByName(var_31_object, var_219_string); // 0xf4 Func
	var_220_object = Obj(); var_221_object = Obj(); var_222_string = ""; var_223_string = ""; var_224_string = ""; // 0xf6 PushV
	var_221_object = var_31_object; // 0xf7 Mov
	var_222_string = "pt_k6q01_danko"; // 0xf8 MovS
	var_223_string = "NPC_Bakalavr"; // 0xf9 MovS
	var_224_string = "k6q01_danko.xml"; // 0xfa MovS
	func_558(var_220_object, var_221_object, var_222_string, var_223_string, var_224_string); // 0xfb NEW_2
	var_1_object = var_220_object; // 0xfc TMov
	var_225_int = 2; // 0xfe PushI
	var_226_int = 136; // 0xff PushI
	SetTimeEvent(var_225_int, var_226_int); // 0x100 Func
	var_227_int = 3; // 0x102 PushI
	var_228_int = 138; // 0x103 PushI
	SetTimeEvent(var_227_int, var_228_int); // 0x104 Func
	var_229_string = "k6q01DankoPos"; // 0x106 PushS
	var_230_int = 2; // 0x107 PushI
	SetVariable(var_229_string, var_230_int); // 0x108 Func
	goto Label_302; // 0x10a Jump
	
Label_267:
	var_231_int = 138; // 0x10b PushI
	var_232_bool = var_30_float < var_231_int; // 0x10c LT
	if(var_232_bool == 0) goto Label_290; // 0x10d JumpB
	var_233_string = "dt_house_1_04"; // 0x10e PushS
	GetSceneByName(var_31_object, var_233_string); // 0x10f Func
	var_234_object = Obj(); var_235_object = Obj(); var_236_string = ""; var_237_string = ""; var_238_string = ""; // 0x111 PushV
	var_235_object = var_31_object; // 0x112 Mov
	var_236_string = "pt_k6q01_danko"; // 0x113 MovS
	var_237_string = "NPC_Bakalavr"; // 0x114 MovS
	var_238_string = "k6q01_danko.xml"; // 0x115 MovS
	func_558(var_234_object, var_235_object, var_236_string, var_237_string, var_238_string); // 0x116 NEW_2
	var_1_object = var_234_object; // 0x117 TMov
	var_239_int = 3; // 0x119 PushI
	var_240_int = 138; // 0x11a PushI
	SetTimeEvent(var_239_int, var_240_int); // 0x11b Func
	var_241_string = "k6q01DankoPos"; // 0x11d PushS
	var_242_int = 3; // 0x11e PushI
	SetVariable(var_241_string, var_242_int); // 0x11f Func
	goto Label_302; // 0x121 Jump
	
Label_290:
	var_243_string = ""; var_244_bool = 0; // 0x122 PushV
	var_243_string = "icot_eva_door"; // 0x123 MovS
	var_244_bool = 0; // 0x124 MovB
	func_593(var_243_string, var_244_bool); // 0x125 NEW_2
	func_5(); // 0x128 NEW_2
	var_245_string = "k6q01DankoPos"; // 0x12a PushS
	var_246_int = 4; // 0x12b PushI
	SetVariable(var_245_string, var_246_int); // 0x12c Func
	
Label_304:
	var_247_string = "fail"; // 0x130 PushS
	var_248_bool = var_12_string == var_247_string; // 0x131 Eq
	if(var_248_bool == 0) goto Label_311; // 0x132 JumpB
	func_466(); // 0x134 NEW_2
	goto Label_334; // 0x136 Jump
	
Label_311:
	var_266_string = "completed"; // 0x137 PushS
	var_267_bool = var_12_string == var_266_string; // 0x138 Eq
	if(var_267_bool == 0) goto Label_318; // 0x139 JumpB
	func_474(); // 0x13b NEW_2
	goto Label_334; // 0x13d Jump
	
Label_318:
	var_270_string = "cleanup"; // 0x13e PushS
	var_271_bool = var_12_string == var_270_string; // 0x13f Eq
	if(var_271_bool == 0) goto Label_334; // 0x140 JumpB
	var_272_string = "k6q01"; // 0x141 PushS
	GetVariable(var_272_string, var_32_int); // 0x142 Func
	var_273_int = 1000; // 0x144 PushI
	var_274_bool = var_32_int != var_273_int; // 0x145 Neq
	if(var_274_bool == 0) goto Label_331; // 0x146 JumpB
	func_466(); // 0x148 NEW_2
	goto Label_334; // 0x14a Jump
	
Label_331:
	func_479(); // 0x14c NEW_2
}


task_0_event_9(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_int, var_13_float)
{
	var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x14f PushV
	var_26_string = "k6q01DankoPos"; // 0x150 PushS
	GetVariable(var_26_string, var_20_int); // 0x151 Func
	var_27_int = 1; // 0x153 PushI
	var_28_bool = var_12_int == var_27_int; // 0x154 Eq
	if(var_28_bool == 0) goto Label_388; // 0x155 JumpB
	var_29_int = 1; // 0x156 PushI
	var_30_bool = var_20_int != var_29_int; // 0x157 Neq
	if(var_30_bool == 0) goto Label_346; // 0x158 JumpB
	return 12; // 0x159 Return
	
Label_346:
	GetScene(var_21_object); // 0x15a Func
	var_31_string = "cot_lara"; // 0x15c PushS
	GetSceneByName(var_22_object, var_31_string); // 0x15d Func
	var_32_object = var_1_object; // 0x15f PushT
	if(var_32_object == 0) goto Label_356; // 0x160 JumpB
	var_33_string = "cleanup"; // 0x161 PushS
	Trigger(var_33_string, var_33_string); // 0x162 Func
	
Label_356:
	var_34_bool = var_21_object != var_22_object; // 0x164 Neq
	if(var_34_bool == 0) goto Label_367; // 0x165 JumpB
	var_21_object = var_22_object; // 0x166 Mov
	var_35_string = "0: placing danko to lara"; // 0x167 PushS
	Trace(var_35_string); // 0x168 Func
	var_36_string = "k6q01DankoPos"; // 0x16a PushS
	var_37_int = 2; // 0x16b PushI
	SetVariable(var_36_string, var_37_int); // 0x16c Func
	goto Label_377; // 0x16e Jump
	
Label_377:
	var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = ""; var_42_string = ""; // 0x179 PushV
	var_39_object = var_21_object; // 0x17a Mov
	var_40_string = "pt_k6q01_danko"; // 0x17b MovS
	var_41_string = "NPC_Bakalavr"; // 0x17c MovS
	var_42_string = "k6q01_danko.xml"; // 0x17d MovS
	func_558(var_38_object, var_39_object, var_40_string, var_41_string, var_42_string); // 0x17e NEW_2
	var_1_object = var_38_object; // 0x17f TMov
	var_22_object = 0; // 0x181 SetNull
	var_21_object = 0; // 0x182 SetNull
	goto Label_465; // 0x183 Jump
	
Label_465:
	return 12; // 0x1d1 Return
	
Label_367:
	var_56_string = "dt_house_1_04"; // 0x16f PushS
	GetSceneByName(var_21_object, var_56_string); // 0x170 Func
	var_57_string = "0: placing danko to ospina"; // 0x172 PushS
	Trace(var_57_string); // 0x173 Func
	var_58_string = "k6q01DankoPos"; // 0x175 PushS
	var_59_int = 3; // 0x176 PushI
	SetVariable(var_58_string, var_59_int); // 0x177 Func
	
Label_388:
	var_60_int = 2; // 0x184 PushI
	var_61_bool = var_12_int == var_60_int; // 0x185 Eq
	if(var_61_bool == 0) goto Label_442; // 0x186 JumpB
	var_62_int = 2; // 0x187 PushI
	var_63_bool = var_20_int != var_62_int; // 0x188 Neq
	if(var_63_bool == 0) goto Label_395; // 0x189 JumpB
	return 12; // 0x18a Return
	
Label_395:
	GetScene(var_23_object); // 0x18b Func
	var_64_string = "dt_house_1_04"; // 0x18d PushS
	GetSceneByName(var_24_object, var_64_string); // 0x18e Func
	var_65_object = var_1_object; // 0x190 PushT
	if(var_65_object == 0) goto Label_405; // 0x191 JumpB
	var_66_string = "cleanup"; // 0x192 PushS
	Trigger(var_66_string, var_66_string); // 0x193 Func
	
Label_405:
	var_67_bool = var_23_object != var_24_object; // 0x195 Neq
	if(var_67_bool == 0) goto Label_423; // 0x196 JumpB
	var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = ""; // 0x197 PushV
	var_69_object = var_24_object; // 0x198 Mov
	var_70_string = "pt_k6q01_danko"; // 0x199 MovS
	var_71_string = "NPC_Bakalavr"; // 0x19a MovS
	var_72_string = "k6q01_danko.xml"; // 0x19b MovS
	func_558(var_68_object, var_69_object, var_70_string, var_71_string, var_72_string); // 0x19c NEW_2
	var_1_object = var_68_object; // 0x19d TMov
	var_73_string = "1: placing danko to ospina"; // 0x19f PushS
	Trace(var_73_string); // 0x1a0 Func
	var_74_string = "k6q01DankoPos"; // 0x1a2 PushS
	var_75_int = 3; // 0x1a3 PushI
	SetVariable(var_74_string, var_75_int); // 0x1a4 Func
	goto Label_439; // 0x1a6 Jump
	
Label_439:
	var_24_object = 0; // 0x1b7 SetNull
	var_23_object = 0; // 0x1b8 SetNull
	goto Label_465; // 0x1b9 Jump
	
Label_423:
	var_76_string = ""; var_77_bool = 0; // 0x1a7 PushV
	var_76_string = "icot_eva_door"; // 0x1a8 MovS
	var_77_bool = 0; // 0x1a9 MovB
	func_593(var_76_string, var_77_bool); // 0x1aa NEW_2
	func_5(); // 0x1ad NEW_2
	var_91_string = "k6q01DankoPos"; // 0x1af PushS
	var_92_int = 4; // 0x1b0 PushI
	SetVariable(var_91_string, var_92_int); // 0x1b1 Func
	var_93_string = "1: placing danko to eva"; // 0x1b3 PushS
	Trace(var_93_string); // 0x1b4 Func
	var_25_object = 0; // 0x1b6 SetNull
	
Label_442:
	var_94_int = 3; // 0x1ba PushI
	var_95_bool = var_12_int == var_94_int; // 0x1bb Eq
	if(var_95_bool == 0) goto Label_465; // 0x1bc JumpB
	var_96_string = "placing danko from ospina to eva"; // 0x1bd PushS
	Trace(var_96_string); // 0x1be Func
	var_97_object = var_1_object; // 0x1c0 PushT
	if(var_97_object == 0) goto Label_453; // 0x1c1 JumpB
	var_98_string = "cleanup"; // 0x1c2 PushS
	Trigger(var_98_string, var_98_string); // 0x1c3 Func
	
Label_453:
	func_5(); // 0x1c6 NEW_2
	var_99_string = ""; var_100_bool = 0; // 0x1c8 PushV
	var_99_string = "icot_eva_door"; // 0x1c9 MovS
	var_100_bool = 0; // 0x1ca MovB
	func_593(var_99_string, var_100_bool); // 0x1cb NEW_2
	var_101_string = "k6q01DankoPos"; // 0x1cd PushS
	var_102_int = 4; // 0x1ce PushI
	SetVariable(var_101_string, var_102_int); // 0x1cf Func
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_0_bool = 0; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_576(var_57_string, var_58_bool)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x240 PushV
	FindActor(var_60_object, var_57_string); // 0x241 Func
	var_61_bool = var_60_object == 0; // 0x243 Not
	if(var_61_bool == 0) goto Label_588; // 0x244 JumpB
	var_62_string = "Door "; // 0x245 PushS
	var_63_int = var_62_string + var_57_string; // 0x246 Add
	var_64_string = " not found"; // 0x247 PushS
	var_65_int = var_63_int + var_64_string; // 0x248 Add
	Trace(var_65_int); // 0x249 Func
	goto Label_591; // 0x24b Jump
	
Label_591:
	return 2; // 0x24f Return
	
Label_588:
	var_66_string = "locked"; // 0x24c PushS
	SetProperty(var_66_string, var_58_bool); // 0x24d ObjFunc
}


func_514(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x202 PushV
	var_77_string = "player"; // 0x203 PushS
	FindActor(var_76_object, var_77_string); // 0x204 Func
	var_74_object = var_76_object; // 0x206 Mov
	return 2; // 0x207 Return
}


func_546(var_263_object)
{
	var_264_object = Obj(); var_265_object = Obj(); // 0x222 PushV
	self(var_265_object); // 0x223 Func
	var_263_object = var_265_object; // 0x225 Mov
	return 2; // 0x226 Return
}


func_5()
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x5 PushV
	var_89_string = "cot_eva"; // 0x6 PushS
	GetSceneByName(var_88_object, var_89_string); // 0x7 Func
	var_90_string = "noeva"; // 0x9 PushS
	Trigger(var_88_object, var_90_string); // 0xa Func
	return 2; // 0xc Return
}


func_645(var_71_object, var_72_string, var_73_string)
{
	var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x285 PushV
	var_86_bool = var_71_object == 0; // 0x286 Not
	if(var_86_bool == 0) goto Label_649; // 0x287 JumpB
	return 8; // 0x288 Return
	
Label_649:
	GetSceneByName(var_82_object, var_72_string); // 0x289 Func
	GetLocator(var_73_string, var_83_bool, var_84_cvector, var_85_cvector); // 0x28b ObjFunc
	var_87_bool = var_83_bool == 0; // 0x28d Not
	if(var_87_bool == 0) goto Label_665; // 0x28e JumpB
	var_88_string = "Teleport location '"; // 0x28f PushS
	var_89_int = var_88_string + var_73_string; // 0x290 Add
	var_90_string = "' not found in scene '"; // 0x291 PushS
	var_91_int = var_89_int + var_90_string; // 0x292 Add
	var_92_int = var_91_int + var_72_string; // 0x293 Add
	var_93_string = "'"; // 0x294 PushS
	var_94_int = var_92_int + var_93_string; // 0x295 Add
	Trace(var_94_int); // 0x296 Func
	goto Label_667; // 0x298 Jump
	
Label_667:
	return 8; // 0x29b Return
	
Label_665:
	Teleport(var_71_object, var_82_object, var_84_cvector, var_85_cvector); // 0x299 Func
}


func_614(var_122_int, var_123_int)
{
	var_124_object = Obj(); var_125_object = Obj(); // 0x266 PushV
	CreateIntVector(var_125_object); // 0x267 Func
	add(var_122_int); // 0x269 ObjFunc
	add(var_123_int); // 0x26b ObjFunc
	var_126_int = 3; // 0x26d PushI
	SendWorldWndMessage(var_126_int, var_125_object); // 0x26e Func
	return 2; // 0x270 Return
}


func_552(var_170_object)
{
	var_171_object = Obj(); var_172_object = Obj(); // 0x228 PushV
	CreateObjectVector(var_172_object); // 0x229 Func
	var_170_object = var_172_object; // 0x22b Mov
	return 2; // 0x22c Return
}


func_521(var_156_object, var_158_int)
{
	var_160_object = Obj(); var_161_int = 0; var_162_int = 0; var_163_object = Obj(); var_164_int = 0; var_165_object = Obj(); var_166_int = 0; var_167_int = 0; var_168_object = Obj(); var_169_int = 0; // 0x209 PushV
	var_170_object = Obj(); // 0x20a PushV
	func_552(var_170_object); // 0x20b NEW_2
	var_165_object = var_170_object; // 0x20c Mov
	GetItemCount(var_166_int, var_158_int); // 0x20e ObjFunc
	var_167_int = 0; // 0x210 MovI
	
Label_529:
	var_173_bool = var_167_int < var_166_int; // 0x211 LT
	if(var_173_bool == 0) goto Label_543; // 0x212 JumpB
	GetItem(var_168_object, var_167_int, var_158_int); // 0x213 ObjFunc
	add(var_168_object); // 0x215 ObjFunc
	GetItemAmount(var_169_int, var_167_int, var_158_int); // 0x217 ObjFunc
	add(var_169_int); // 0x219 ObjFunc
	var_168_object = 0; // 0x21b SetNull
	var_174_int = 1; // 0x21c PushI
	var_167_int = var_167_int + var_174_int; // 0x21d Add2
	goto Label_529; // 0x21e Jump
	
Label_543:
	var_156_object = var_165_object; // 0x21f Mov
	return 10; // 0x220 Return
}


func_558(var_38_object, var_39_object, var_40_string, var_41_string, var_42_string)
{
	var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x22e PushV
	GetLocator(var_40_string, var_47_bool, var_48_cvector, var_49_cvector); // 0x22f ObjFunc
	var_51_bool = var_47_bool == 0; // 0x231 Not
	if(var_51_bool == 0) goto Label_571; // 0x232 JumpB
	var_52_string = "Locator "; // 0x233 PushS
	var_53_int = var_52_string + var_40_string; // 0x234 Add
	var_54_string = " doesn't exist"; // 0x235 PushS
	var_55_int = var_53_int + var_54_string; // 0x236 Add
	Trace(var_55_int); // 0x237 Func
	var_50_object = 0; // 0x239 SetNull
	goto Label_573; // 0x23a Jump
	
Label_573:
	var_38_object = var_50_object; // 0x23d Mov
	return 8; // 0x23e Return
	
Label_571:
	AddActor(var_50_object, var_41_string, var_39_object, var_48_cvector, var_49_cvector, var_42_string); // 0x23b Func
}


func_593(var_76_string, var_77_bool)
{
	var_78_object = Obj(); var_79_object = Obj(); // 0x251 PushV
	FindActor(var_79_object, var_76_string); // 0x252 Func
	var_80_bool = var_79_object == 0; // 0x254 Not
	if(var_80_bool == 0) goto Label_605; // 0x255 JumpB
	var_81_string = "Door "; // 0x256 PushS
	var_82_int = var_81_string + var_76_string; // 0x257 Add
	var_83_string = " not found"; // 0x258 PushS
	var_84_int = var_82_int + var_83_string; // 0x259 Add
	Trace(var_84_int); // 0x25a Func
	goto Label_612; // 0x25c Jump
	
Label_612:
	return 2; // 0x264 Return
	
Label_605:
	var_85_bool = var_77_bool; // 0x25d Push
	if(var_85_bool == 0) goto Label_609; // 0x25e JumpB
	Close(); // 0x25f ObjFunc
	
Label_609:
	var_86_string = "locked"; // 0x261 PushS
	SetProperty(var_86_string, var_77_bool); // 0x262 ObjFunc
}


func_466()
{
	var_249_string = "k6q01"; // 0x1d2 PushS
	var_250_int = -1; // 0x1d3 PushI
	SetVariable(var_249_string, var_250_int); // 0x1d4 Func
	func_479(); // 0x1d7 NEW_2
	return 0; // 0x1d9 Return
}


func_626(var_112_object, var_113_int)
{
	var_114_int = 0; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_int = 0; var_119_bool = 0; // 0x272 PushV
	GetItemID(var_117_int); // 0x273 ObjFunc
	var_120_string = "Category"; // 0x275 PushS
	GetInvItemProperty(var_118_int, var_117_int, var_120_string); // 0x276 Func
	AddItem(var_119_bool, var_112_object, var_118_int, var_113_int); // 0x278 ObjFunc
	var_121_bool = var_119_bool == 0; // 0x27a Not
	if(var_121_bool == 0) goto Label_639; // 0x27b JumpB
	DropItems(var_112_object, var_113_int); // 0x27c ObjFunc
	goto Label_644; // 0x27e Jump
	
Label_644:
	return 6; // 0x284 Return
	
Label_639:
	var_122_int = 0; var_123_int = 0; // 0x27f PushV
	var_122_int = var_117_int; // 0x280 Mov
	var_123_int = var_113_int; // 0x281 Mov
	func_614(var_122_int, var_123_int); // 0x282 NEW_2
}


func_474()
{
	var_268_string = "k6q01"; // 0x1da PushS
	var_269_int = 1000; // 0x1db PushI
	SetVariable(var_268_string, var_269_int); // 0x1dc Func
	return 0; // 0x1de Return
}


func_669(var_99_object)
{
	var_102_int = 0; var_103_int = 0; var_104_object = Obj(); var_105_int = 0; var_106_int = 0; var_107_int = 0; var_108_object = Obj(); var_109_int = 0; // 0x29d PushV
	size(var_106_int); // 0x29e ObjFunc
	var_107_int = 0; // 0x2a0 MovI
	
Label_673:
	var_110_bool = var_107_int < var_106_int; // 0x2a1 LT
	if(var_110_bool == 0) goto Label_689; // 0x2a2 JumpB
	get(var_108_object, var_107_int); // 0x2a3 ObjFunc
	get(var_109_int, var_107_int); // 0x2a5 ObjFunc
	var_111_object = Obj(); var_112_object = Obj(); var_113_int = 0; // 0x2a7 PushV
	var_111_object = var_99_object; // 0x2a8 Mov
	var_112_object = var_108_object; // 0x2a9 Mov
	var_113_int = var_109_int; // 0x2aa Mov
	func_626(var_112_object, var_113_int); // 0x2ab NEW_2
	var_108_object = 0; // 0x2ad SetNull
	var_127_int = 1; // 0x2ae PushI
	var_107_int = var_107_int + var_127_int; // 0x2af Add2
	goto Label_673; // 0x2b0 Jump
	
Label_689:
	return 8; // 0x2b1 Return
}


func_479()
{
	var_251_int = 0; var_252_int = 0; // 0x1df PushV
	EventDisable(26); // 0x1e0 EventDisable
	var_253_string = ""; var_254_bool = 0; // 0x1e1 PushV
	var_253_string = "icot_eva_door"; // 0x1e2 MovS
	var_254_bool = 0; // 0x1e3 MovB
	func_593(var_253_string, var_254_bool); // 0x1e4 NEW_2
	var_255_object = var_1_object; // 0x1e6 PushT
	if(var_255_object == 0) goto Label_491; // 0x1e7 JumpB
	var_256_string = "cleanup"; // 0x1e8 PushS
	Trigger(var_256_string, var_256_string); // 0x1e9 Func
	
Label_491:
	var_257_string = "k6q01"; // 0x1eb PushS
	GetVariable(var_257_string, var_252_int); // 0x1ec Func
	var_258_string = ""; var_259_bool = 0; // 0x1ee PushV
	var_258_string = "icot_eva@door1"; // 0x1ef MovS
	var_259_bool = 0; // 0x1f0 MovB
	func_576(var_258_string, var_259_bool); // 0x1f1 NEW_2
	var_260_int = 1000; // 0x1f3 PushI
	var_261_bool = var_252_int == var_260_int; // 0x1f4 Eq
	if(var_261_bool == 0) goto Label_505; // 0x1f5 JumpB
	var_262_string = "door_open"; // 0x1f6 PushS
	PlaySound(var_262_string); // 0x1f7 Func
	
Label_505:
	func_5(); // 0x1fa NEW_2
	var_263_object = Obj(); // 0x1fc PushV
	func_546(var_263_object); // 0x1fd NEW_2
	RemoveActor(var_263_object); // 0x1ff Func
	return 2; // 0x201 Return
}


