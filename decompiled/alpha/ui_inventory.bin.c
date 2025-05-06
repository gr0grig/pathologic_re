task_0_event_100(var_0_int, var_1_int)
{
	DestroyWindow(); // 0x20 Func
	return 0; // 0x22 Return
}


task_0_event_1(var_0_int, var_1_float)
{
	var_2_int = 0; // 0x24 PushV
	var_2_int = var_0_int; // 0x25 MovT
	func_381(var_2_int); // 0x26 Call
	return 0; // 0x28 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; // 0x29 PushV
	var_16_string = "button_weapon"; // 0x2a PushS
	var_17_bool = var_2_string == var_16_string; // 0x2b Eq
	if(var_17_bool == 0) goto Label_47; // 0x2c JumpB
	var_0_int = 0; // 0x2d TMovI
	goto Label_149; // 0x2e Jump
	
Label_149:
	var_18_int = 0; // 0x95 PushV
	var_18_int = var_0_int; // 0x96 MovT
	func_437(var_18_int); // 0x97 Call
	var_49_int = 0; // 0x99 PushV
	var_49_int = var_0_int; // 0x9a MovT
	func_381(var_49_int); // 0x9b Call
	func_326(); // 0x9e Call
	return 12; // 0xa0 Return
	
Label_47:
	var_139_string = "button_clothes"; // 0x2f PushS
	var_140_bool = var_2_string == var_139_string; // 0x30 Eq
	if(var_140_bool == 0) goto Label_52; // 0x31 JumpB
	var_0_int = 1; // 0x32 TMovI
	goto Label_149; // 0x33 Jump
	
Label_52:
	var_141_string = "button_medcine"; // 0x34 PushS
	var_142_bool = var_2_string == var_141_string; // 0x35 Eq
	if(var_142_bool == 0) goto Label_57; // 0x36 JumpB
	var_0_int = 2; // 0x37 TMovI
	goto Label_149; // 0x38 Jump
	
Label_57:
	var_143_string = "button_food"; // 0x39 PushS
	var_144_bool = var_2_string == var_143_string; // 0x3a Eq
	if(var_144_bool == 0) goto Label_62; // 0x3b JumpB
	var_0_int = 3; // 0x3c TMovI
	goto Label_149; // 0x3d Jump
	
Label_62:
	var_145_string = "button_other"; // 0x3e PushS
	var_146_bool = var_2_string == var_145_string; // 0x3f Eq
	if(var_146_bool == 0) goto Label_67; // 0x40 JumpB
	var_0_int = 4; // 0x41 TMovI
	goto Label_149; // 0x42 Jump
	
Label_67:
	var_147_string = "button_detector"; // 0x43 PushS
	var_148_bool = var_2_string == var_147_string; // 0x44 Eq
	if(var_148_bool == 0) goto Label_71; // 0x45 JumpB
	goto Label_149; // 0x46 Jump
	
Label_71:
	var_149_string = "button_anticeptic"; // 0x47 PushS
	var_150_bool = var_2_string == var_149_string; // 0x48 Eq
	if(var_150_bool == 0) goto Label_75; // 0x49 JumpB
	goto Label_149; // 0x4a Jump
	
Label_75:
	var_151_int = 0; // 0x4b PushI
	var_152_bool = var_1_int != var_151_int; // 0x4c Neq
	if(var_152_bool == 0) goto Label_84; // 0x4d JumpB
	var_153_string = "noinv_drop"; // 0x4e PushS
	GetVariable(var_153_string, var_10_int); // 0x4f Func
	var_154_int = var_10_int; // 0x51 Push
	if(var_154_int == 0) goto Label_84; // 0x52 JumpB
	return 12; // 0x53 Return
	
Label_84:
	var_11_int = 0; // 0x54 MovI
	
Label_85:
	var_155_int = 12; // 0x55 PushI
	var_156_bool = var_11_int < var_155_int; // 0x56 LT
	if(var_156_bool == 0) goto Label_124; // 0x57 JumpB
	var_157_string = ""; var_158_int = 0; // 0x58 PushV
	var_158_int = var_11_int; // 0x59 Mov
	func_161(var_157_string, var_158_int); // 0x5a Call
	var_159_bool = var_2_string == var_157_string; // 0x5c Eq
	if(var_159_bool == 0) goto Label_121; // 0x5d JumpB
	var_160_bool = 0; // 0x5e PushV
	func_193(var_160_bool); // 0x5f Call
	if(var_160_bool == 0) goto Label_105; // 0x61 JumpB
	var_161_bool = 0; var_162_int = 0; var_163_int = 0; // 0x62 PushV
	var_162_int = var_0_int; // 0x63 MovT
	var_163_int = var_11_int; // 0x64 Mov
	func_223(var_161_bool, var_162_int, var_163_int); // 0x65 Call
	var_12_int = var_161_bool; // 0x66 Mov
	goto Label_120; // 0x68 Jump
	
Label_120:
	goto Label_124; // 0x78 Jump
	
Label_124:
	var_14_int = 0; // 0x7c MovI
	
Label_125:
	var_184_int = 0; // 0x7d PushV
	func_198(var_184_int); // 0x7e Call
	var_185_bool = var_14_int < var_184_int; // 0x80 LT
	if(var_185_bool == 0) goto Label_149; // 0x81 JumpB
	var_186_string = ""; var_187_int = 0; // 0x82 PushV
	var_187_int = var_14_int; // 0x83 Mov
	func_177(var_186_string, var_187_int); // 0x84 Call
	var_188_bool = var_2_string == var_186_string; // 0x86 Eq
	if(var_188_bool == 0) goto Label_146; // 0x87 JumpB
	var_189_int = 0; var_190_int = 0; // 0x88 PushV
	var_190_int = var_14_int; // 0x89 Mov
	func_259(var_189_int, var_190_int); // 0x8a Call
	var_15_int = var_189_int; // 0x8b Mov
	var_227_int = -1; // 0x8d PushI
	var_228_bool = var_15_int != var_227_int; // 0x8e Neq
	if(var_228_bool == 0) goto Label_145; // 0x8f JumpB
	var_0_int = var_15_int; // 0x90 TMov
	
Label_145:
	goto Label_149; // 0x91 Jump
	
Label_146:
	var_229_int = 1; // 0x92 PushI
	var_14_int = var_14_int + var_229_int; // 0x93 Add2
	goto Label_125; // 0x94 Jump
	
Label_105:
	var_230_int = 0; // 0x69 PushI
	var_231_bool = var_1_int == var_230_int; // 0x6a Eq
	if(var_231_bool == 0) goto Label_114; // 0x6b JumpB
	var_232_int = 0; var_233_int = 0; // 0x6c PushV
	var_232_int = var_0_int; // 0x6d MovT
	var_233_int = var_11_int; // 0x6e Mov
	func_499(var_232_int, var_233_int); // 0x6f Call
	goto Label_120; // 0x71 Jump
	
Label_114:
	var_304_bool = 0; var_305_int = 0; var_306_int = 0; // 0x72 PushV
	var_305_int = var_0_int; // 0x73 MovT
	var_306_int = var_11_int; // 0x74 Mov
	func_223(var_304_bool, var_305_int, var_306_int); // 0x75 Call
	var_13_int = var_304_bool; // 0x76 Mov
	
Label_121:
	var_307_int = 1; // 0x79 PushI
	var_11_int = var_11_int + var_307_int; // 0x7a Add2
	goto Label_85; // 0x7b Jump
}


main(var_0_int)
{
	var_0_int = 0; // 0x0 TMovI
	var_1_int = 0; // 0x1 PushV
	var_1_int = var_0_int; // 0x2 MovT
	func_437(var_1_int); // 0x3 Call
	var_32_int = 0; // 0x5 PushV
	var_32_int = var_0_int; // 0x6 MovT
	func_381(var_32_int); // 0x7 Call
	func_326(); // 0xa Call
	func_319(); // 0xd Call
	var_125_string = "default"; // 0xf PushS
	SetCursor(var_125_string); // 0x10 Func
	ShowCursor(); // 0x12 Func
	CaptureKeyboard(); // 0x14 Func
	var_126_bool = 0; // 0x16 PushB
	SetOwnerDraw(var_126_bool); // 0x17 Func
	var_127_bool = 1; // 0x19 PushB
	SetNeedUpdate(var_127_bool); // 0x1a Func
	ProcessEvents(); // 0x1c Func
	return 0; // 0x1e Return
}


func_161(var_50_string, var_51_int)
{
	var_52_int = 1; // 0xa2 PushI
	var_53_int = var_51_int + var_52_int; // 0xa3 Add
	var_54_int = 10; // 0xa4 PushI
	var_55_bool = var_53_int < var_54_int; // 0xa5 LT
	if(var_55_bool == 0) goto Label_172; // 0xa6 JumpB
	var_56_string = "slot0"; // 0xa7 PushS
	var_57_int = 1; // 0xa8 PushI
	var_58_int = var_51_int + var_57_int; // 0xa9 Add
	var_50_string = var_56_string + var_58_int; // 0xaa Add2
	return 0; // 0xab Return
	
Label_172:
	var_59_string = "slot"; // 0xac PushS
	var_60_int = 1; // 0xad PushI
	var_61_int = var_51_int + var_60_int; // 0xae Add
	var_50_string = var_59_string + var_61_int; // 0xaf Add2
	return 0; // 0xb0 Return
}


func_193(var_87_bool)
{
	var_88_bool = 0; var_89_bool = 0; // 0xc1 PushV
	HasContainer(var_89_bool); // 0xc2 Func
	var_87_bool = var_89_bool; // 0xc4 Mov
	return 2; // 0xc5 Return
}


func_259(var_189_int, var_190_int)
{
	var_191_object = Obj(); var_192_object = Obj(); var_193_object = Obj(); var_194_int = 0; var_195_int = 0; var_196_int = 0; var_197_int = 0; var_198_int = 0; var_199_bool = 0; var_200_bool = 0; var_201_object = Obj(); var_202_object = Obj(); var_203_object = Obj(); var_204_int = 0; var_205_int = 0; var_206_int = 0; var_207_int = 0; var_208_int = 0; var_209_bool = 0; var_210_bool = 0; // 0x103 PushV
	var_211_string = "MoveToPlayerContainer"; // 0x104 PushS
	Trace(var_211_string); // 0x105 Func
	GetPlayerContainer(var_202_object); // 0x107 Func
	GetContainer(var_201_object); // 0x109 Func
	GetItemCount(var_204_int); // 0x10b ObjFunc
	var_212_bool = var_204_int <= var_190_int; // 0x10d LE
	if(var_212_bool == 0) goto Label_273; // 0x10e JumpB
	var_189_int = -1; // 0x10f MovI
	return 20; // 0x110 Return
	
Label_273:
	GetItemAmount(var_205_int, var_190_int); // 0x111 ObjFunc
	var_213_int = 0; // 0x113 PushI
	var_214_bool = var_205_int == var_213_int; // 0x114 Eq
	if(var_214_bool == 0) goto Label_280; // 0x115 JumpB
	var_189_int = -1; // 0x116 MovI
	return 20; // 0x117 Return
	
Label_280:
	GetItem(var_203_object, var_190_int); // 0x118 ObjFunc
	GetItemID(var_206_int); // 0x11a ObjFunc
	var_215_string = "Category"; // 0x11c PushS
	GetInvItemProperty(var_207_int, var_206_int, var_215_string); // 0x11d Func
	var_216_int = 0; // 0x11f PushV
	func_217(var_216_int); // 0x120 Call
	var_220_bool = var_206_int == var_216_int; // 0x122 Eq
	if(var_220_bool == 0) goto Label_304; // 0x123 JumpB
	GetPlayerMoneyCount(var_208_int); // 0x124 Func
	var_208_int = var_208_int + var_205_int; // 0x126 Add2
	SetPlayerMoneyCount(var_208_int); // 0x127 Func
	RemoveItem(var_190_int, var_205_int); // 0x129 ObjFunc
	func_319(); // 0x12c Call
	var_189_int = -1; // 0x12e MovI
	return 20; // 0x12f Return
	
Label_304:
	var_224_int = 1; // 0x130 PushI
	AddItem(var_210_bool, var_203_object, var_207_int, var_224_int); // 0x131 ObjFunc
	var_225_bool = var_210_bool == 0; // 0x133 Not
	if(var_225_bool == 0) goto Label_311; // 0x134 JumpB
	var_189_int = -1; // 0x135 MovI
	return 20; // 0x136 Return
	
Label_311:
	var_226_int = 1; // 0x137 PushI
	RemoveItem(var_190_int, var_226_int); // 0x138 ObjFunc
	var_189_int = var_207_int; // 0x13a Mov
	return 20; // 0x13b Return
}


func_223(var_161_bool, var_162_int, var_163_int)
{
	var_164_object = Obj(); var_165_object = Obj(); var_166_object = Obj(); var_167_int = 0; var_168_int = 0; var_169_int = 0; var_170_bool = 0; var_171_object = Obj(); var_172_object = Obj(); var_173_object = Obj(); var_174_int = 0; var_175_int = 0; var_176_int = 0; var_177_bool = 0; // 0xdf PushV
	var_178_string = "MoveToContainer"; // 0xe0 PushS
	Trace(var_178_string); // 0xe1 Func
	GetPlayerContainer(var_172_object); // 0xe3 Func
	GetContainer(var_171_object); // 0xe5 Func
	GetItemCount(var_174_int, var_162_int); // 0xe7 ObjFunc
	var_179_bool = var_174_int <= var_163_int; // 0xe9 LE
	if(var_179_bool == 0) goto Label_237; // 0xea JumpB
	var_161_bool = 0; // 0xeb MovB
	return 14; // 0xec Return
	
Label_237:
	GetItemAmount(var_175_int, var_163_int, var_162_int); // 0xed ObjFunc
	GetItem(var_173_object, var_163_int, var_162_int); // 0xef ObjFunc
	GetItemID(var_176_int); // 0xf1 ObjFunc
	var_180_int = 0; // 0xf3 PushI
	var_181_int = 1; // 0xf4 PushI
	AddItem(var_177_bool, var_173_object, var_180_int, var_181_int); // 0xf5 ObjFunc
	var_182_bool = var_177_bool == 0; // 0xf7 Not
	if(var_182_bool == 0) goto Label_251; // 0xf8 JumpB
	var_161_bool = 0; // 0xf9 MovB
	return 14; // 0xfa Return
	
Label_251:
	var_183_int = 1; // 0xfb PushI
	RemoveItem(var_163_int, var_183_int, var_162_int); // 0xfc ObjFunc
	var_161_bool = 1; // 0xfe MovB
	return 14; // 0xff Return
}


func_326()
{
	var_73_object = Obj(); var_74_int = 0; var_75_int = 0; var_76_int = 0; var_77_object = Obj(); var_78_int = 0; var_79_int = 0; var_80_object = Obj(); var_81_int = 0; var_82_int = 0; var_83_int = 0; var_84_object = Obj(); var_85_int = 0; var_86_int = 0; // 0x146 PushV
	var_87_bool = 0; // 0x147 PushV
	func_193(var_87_bool); // 0x148 Call
	var_90_bool = var_87_bool == 0; // 0x14a Not
	if(var_90_bool == 0) goto Label_333; // 0x14b JumpB
	return 14; // 0x14c Return
	
Label_333:
	GetContainer(var_80_object); // 0x14d Func
	GetItemCount(var_81_int); // 0x14f ObjFunc
	var_91_int = 0; // 0x151 PushV
	func_198(var_91_int); // 0x152 Call
	var_82_int = var_91_int; // 0x153 Mov
	var_83_int = 0; // 0x155 MovI
	
Label_342:
	var_99_bool = var_83_int < var_82_int; // 0x156 LT
	if(var_99_bool == 0) goto Label_379; // 0x157 JumpB
	var_100_bool = var_83_int < var_81_int; // 0x158 LT
	if(var_100_bool == 0) goto Label_369; // 0x159 JumpB
	GetItem(var_84_object, var_83_int); // 0x15a ObjFunc
	GetItemID(var_85_int); // 0x15c ObjFunc
	GetItemAmount(var_86_int, var_83_int); // 0x15e ObjFunc
	var_101_int = 0; // 0x160 PushI
	var_102_string = ""; var_103_int = 0; // 0x161 PushV
	var_103_int = var_83_int; // 0x162 Mov
	func_177(var_102_string, var_103_int); // 0x163 Call
	SendMessage(var_101_int, var_102_string, var_84_object); // 0x165 Func
	var_114_int = 65536; // 0x167 PushI
	var_115_int = var_86_int | var_114_int; // 0x168 Or
	var_116_string = ""; var_117_int = 0; // 0x169 PushV
	var_117_int = var_83_int; // 0x16a Mov
	func_177(var_116_string, var_117_int); // 0x16b Call
	SendMessage(var_115_int, var_116_string); // 0x16d Func
	var_84_object = 0; // 0x16f SetNull
	goto Label_376; // 0x170 Jump
	
Label_376:
	var_118_int = 1; // 0x178 PushI
	var_83_int = var_83_int + var_118_int; // 0x179 Add2
	goto Label_342; // 0x17a Jump
	
Label_369:
	var_119_int = 32768; // 0x171 PushI
	var_120_string = ""; var_121_int = 0; // 0x172 PushV
	var_121_int = var_83_int; // 0x173 Mov
	func_177(var_120_string, var_121_int); // 0x174 Call
	SendMessage(var_119_int, var_120_string); // 0x176 Func
	
Label_379:
	return 14; // 0x17b Return
}


func_198(var_91_int)
{
	var_92_object = Obj(); var_93_int = 0; var_94_object = Obj(); var_95_int = 0; // 0xc6 PushV
	var_96_bool = 0; // 0xc7 PushV
	func_193(var_96_bool); // 0xc8 Call
	var_97_bool = var_96_bool == 0; // 0xca Not
	if(var_97_bool == 0) goto Label_206; // 0xcb JumpB
	var_91_int = 0; // 0xcc MovB
	return 4; // 0xcd Return
	
Label_206:
	GetContainer(var_94_object); // 0xce Func
	var_98_bool = var_94_object == 0; // 0xd0 NullEq
	if(var_98_bool == 0) goto Label_212; // 0xd1 JumpB
	var_91_int = 0; // 0xd2 MovI
	return 4; // 0xd3 Return
	
Label_212:
	GetCapacity(var_95_int); // 0xd4 ObjFunc
	var_91_int = var_95_int; // 0xd6 Mov
	return 4; // 0xd7 Return
}


func_177(var_102_string, var_103_int)
{
	var_104_int = 1; // 0xb2 PushI
	var_105_int = var_103_int + var_104_int; // 0xb3 Add
	var_106_int = 10; // 0xb4 PushI
	var_107_bool = var_105_int < var_106_int; // 0xb5 LT
	if(var_107_bool == 0) goto Label_188; // 0xb6 JumpB
	var_108_string = "cslot0"; // 0xb7 PushS
	var_109_int = 1; // 0xb8 PushI
	var_110_int = var_103_int + var_109_int; // 0xb9 Add
	var_102_string = var_108_string + var_110_int; // 0xba Add2
	return 0; // 0xbb Return
	
Label_188:
	var_111_string = "cslot"; // 0xbc PushS
	var_112_int = 1; // 0xbd PushI
	var_113_int = var_103_int + var_112_int; // 0xbe Add
	var_102_string = var_111_string + var_113_int; // 0xbf Add2
	return 0; // 0xc0 Return
}


func_499(var_232_int, var_233_int)
{
	var_234_object = Obj(); var_235_int = 0; var_236_object = Obj(); var_237_int = 0; var_238_int = 0; var_239_bool = 0; var_240_bool = 0; var_241_int = 0; var_242_bool = 0; var_243_int = 0; var_244_int = 0; var_245_bool = 0; var_246_object = Obj(); var_247_int = 0; var_248_bool = 0; var_249_int = 0; var_250_bool = 0; var_251_bool = 0; var_252_object = Obj(); var_253_int = 0; var_254_object = Obj(); var_255_int = 0; var_256_int = 0; var_257_bool = 0; var_258_bool = 0; var_259_int = 0; var_260_bool = 0; var_261_int = 0; var_262_int = 0; var_263_bool = 0; var_264_object = Obj(); var_265_int = 0; var_266_bool = 0; var_267_int = 0; var_268_bool = 0; var_269_bool = 0; // 0x1f3 PushV
	GetPlayerContainer(var_252_object); // 0x1f4 Func
	GetItemCount(var_253_int, var_232_int); // 0x1f6 ObjFunc
	var_270_bool = var_233_int >= var_253_int; // 0x1f8 GE
	if(var_270_bool == 0) goto Label_507; // 0x1f9 JumpB
	return 36; // 0x1fa Return
	
Label_507:
	GetItem(var_254_object, var_233_int, var_232_int); // 0x1fb ObjFunc
	GetItemID(var_255_int); // 0x1fd ObjFunc
	GetItemAmount(var_256_int, var_233_int, var_232_int); // 0x1ff ObjFunc
	IsItemSelected(var_257_bool, var_233_int, var_232_int); // 0x201 ObjFunc
	var_271_int = 0; // 0x203 PushI
	var_272_bool = var_232_int == var_271_int; // 0x204 Eq
	if(var_272_bool == 0) goto Label_548; // 0x205 JumpB
	var_273_string = "Weapon"; // 0x206 PushS
	HasInvItemProperty(var_258_bool, var_255_int, var_273_string); // 0x207 Func
	var_274_bool = var_258_bool == 0; // 0x209 Not
	if(var_274_bool == 0) goto Label_524; // 0x20a JumpB
	return 36; // 0x20b Return
	
Label_524:
	var_275_bool = var_257_bool; // 0x20c Push
	if(var_275_bool == 0) goto Label_533; // 0x20d JumpB
	var_276_bool = 0; // 0x20e PushB
	SelectItem(var_233_int, var_276_bool, var_232_int); // 0x20f ObjFunc
	var_277_int = -1; // 0x211 PushI
	SetPlayerHandsItem(var_277_int); // 0x212 Func
	goto Label_547; // 0x214 Jump
	
Label_547:
	goto Label_616; // 0x223 Jump
	
Label_616:
	var_278_int = 0; // 0x268 PushV
	var_278_int = var_232_int; // 0x269 Mov
	func_381(var_278_int); // 0x26a Call
	return 36; // 0x26c Return
	
Label_533:
	SetPlayerHandsItem(var_255_int); // 0x215 Func
	var_259_int = 0; // 0x217 MovI
	
Label_536:
	var_279_bool = var_259_int < var_253_int; // 0x218 LT
	if(var_279_bool == 0) goto Label_544; // 0x219 JumpB
	var_280_bool = 0; // 0x21a PushB
	SelectItem(var_259_int, var_280_bool, var_232_int); // 0x21b ObjFunc
	var_281_int = 1; // 0x21d PushI
	var_259_int = var_259_int + var_281_int; // 0x21e Add2
	goto Label_536; // 0x21f Jump
	
Label_544:
	var_282_bool = 1; // 0x220 PushB
	SelectItem(var_233_int, var_282_bool, var_232_int); // 0x221 ObjFunc
	
Label_548:
	var_283_int = 1; // 0x224 PushI
	var_284_bool = var_232_int == var_283_int; // 0x225 Eq
	if(var_284_bool == 0) goto Label_601; // 0x226 JumpB
	var_285_string = "Group"; // 0x227 PushS
	HasInvItemProperty(var_260_bool, var_255_int, var_285_string); // 0x228 Func
	var_286_bool = var_260_bool == 0; // 0x22a Not
	if(var_286_bool == 0) goto Label_557; // 0x22b JumpB
	return 36; // 0x22c Return
	
Label_557:
	var_287_string = "Group"; // 0x22d PushS
	GetInvItemProperty(var_261_int, var_255_int, var_287_string); // 0x22e Func
	var_288_bool = var_257_bool; // 0x230 Push
	if(var_288_bool == 0) goto Label_566; // 0x231 JumpB
	var_289_bool = 0; // 0x232 PushB
	SelectItem(var_233_int, var_289_bool, var_232_int); // 0x233 ObjFunc
	goto Label_600; // 0x235 Jump
	
Label_600:
	goto Label_616; // 0x258 Jump
	
Label_566:
	var_262_int = 0; // 0x236 MovI
	
Label_567:
	var_290_bool = var_262_int < var_253_int; // 0x237 LT
	if(var_290_bool == 0) goto Label_597; // 0x238 JumpB
	IsItemSelected(var_263_bool, var_262_int, var_232_int); // 0x239 ObjFunc
	var_291_bool = var_263_bool == 0; // 0x23b Not
	if(var_291_bool == 0) goto Label_574; // 0x23c JumpB
	goto Label_594; // 0x23d Jump
	
Label_594:
	var_292_int = 1; // 0x252 PushI
	var_262_int = var_262_int + var_292_int; // 0x253 Add2
	goto Label_567; // 0x254 Jump
	
Label_574:
	GetItem(var_264_object, var_262_int, var_232_int); // 0x23e ObjFunc
	GetItemID(var_265_int); // 0x240 ObjFunc
	var_293_string = "Group"; // 0x242 PushS
	HasInvItemProperty(var_266_bool, var_265_int, var_293_string); // 0x243 Func
	var_294_bool = var_266_bool == 0; // 0x245 Not
	if(var_294_bool == 0) goto Label_584; // 0x246 JumpB
	goto Label_594; // 0x247 Jump
	
Label_584:
	var_295_string = "Group"; // 0x248 PushS
	GetInvItemProperty(var_267_int, var_265_int, var_295_string); // 0x249 Func
	var_296_bool = var_267_int == var_261_int; // 0x24b Eq
	if(var_296_bool == 0) goto Label_593; // 0x24c JumpB
	var_297_bool = 0; // 0x24d PushB
	SelectItem(var_262_int, var_297_bool, var_232_int); // 0x24e ObjFunc
	goto Label_597; // 0x250 Jump
	
Label_597:
	var_298_bool = 1; // 0x255 PushB
	SelectItem(var_233_int, var_298_bool, var_232_int); // 0x256 ObjFunc
	
Label_593:
	var_264_object = 0; // 0x251 SetNull
	
Label_601:
	UseItem(var_233_int, var_232_int, var_268_bool); // 0x259 Func
	var_299_bool = var_268_bool; // 0x25b Push
	if(var_299_bool == 0) goto Label_616; // 0x25c JumpB
	var_300_int = -1; // 0x25d PushI
	var_256_int = var_256_int + var_300_int; // 0x25e Add2
	var_301_int = 0; // 0x25f PushI
	var_302_bool = var_256_int == var_301_int; // 0x260 Eq
	if(var_302_bool == 0) goto Label_614; // 0x261 JumpB
	var_303_int = 1; // 0x262 PushI
	RemoveItem(var_233_int, var_303_int, var_232_int); // 0x263 ObjFunc
	goto Label_616; // 0x265 Jump
	
Label_614:
	SetItemAmount(var_256_int, var_233_int, var_232_int); // 0x266 ObjFunc
}


func_437(var_1_int)
{
	var_2_int = 0; // 0x1b6 PushI
	var_3_bool = var_1_int != var_2_int; // 0x1b7 Neq
	if(var_3_bool == 0) goto Label_446; // 0x1b8 JumpB
	var_4_int = 0; // 0x1b9 PushI
	var_5_string = "button_weapon"; // 0x1ba PushS
	SendMessage(var_4_int, var_5_string); // 0x1bb Func
	goto Label_450; // 0x1bd Jump
	
Label_450:
	var_6_int = 1; // 0x1c2 PushI
	var_7_bool = var_1_int != var_6_int; // 0x1c3 Neq
	if(var_7_bool == 0) goto Label_458; // 0x1c4 JumpB
	var_8_int = 0; // 0x1c5 PushI
	var_9_string = "button_clothes"; // 0x1c6 PushS
	SendMessage(var_8_int, var_9_string); // 0x1c7 Func
	goto Label_462; // 0x1c9 Jump
	
Label_462:
	var_10_int = 2; // 0x1ce PushI
	var_11_bool = var_1_int != var_10_int; // 0x1cf Neq
	if(var_11_bool == 0) goto Label_470; // 0x1d0 JumpB
	var_12_int = 0; // 0x1d1 PushI
	var_13_string = "button_medcine"; // 0x1d2 PushS
	SendMessage(var_12_int, var_13_string); // 0x1d3 Func
	goto Label_474; // 0x1d5 Jump
	
Label_474:
	var_14_int = 3; // 0x1da PushI
	var_15_bool = var_1_int != var_14_int; // 0x1db Neq
	if(var_15_bool == 0) goto Label_482; // 0x1dc JumpB
	var_16_int = 0; // 0x1dd PushI
	var_17_string = "button_food"; // 0x1de PushS
	SendMessage(var_16_int, var_17_string); // 0x1df Func
	goto Label_486; // 0x1e1 Jump
	
Label_486:
	var_18_int = 4; // 0x1e6 PushI
	var_19_bool = var_1_int != var_18_int; // 0x1e7 Neq
	if(var_19_bool == 0) goto Label_494; // 0x1e8 JumpB
	var_20_int = 0; // 0x1e9 PushI
	var_21_string = "button_other"; // 0x1ea PushS
	SendMessage(var_20_int, var_21_string); // 0x1eb Func
	goto Label_498; // 0x1ed Jump
	
Label_498:
	return 0; // 0x1f2 Return
	
Label_494:
	var_22_int = 1; // 0x1ee PushI
	var_23_string = "button_other"; // 0x1ef PushS
	SendMessage(var_22_int, var_23_string); // 0x1f0 Func
	
Label_482:
	var_24_int = 1; // 0x1e2 PushI
	var_25_string = "button_food"; // 0x1e3 PushS
	SendMessage(var_24_int, var_25_string); // 0x1e4 Func
	
Label_470:
	var_26_int = 1; // 0x1d6 PushI
	var_27_string = "button_medcine"; // 0x1d7 PushS
	SendMessage(var_26_int, var_27_string); // 0x1d8 Func
	
Label_458:
	var_28_int = 1; // 0x1ca PushI
	var_29_string = "button_clothes"; // 0x1cb PushS
	SendMessage(var_28_int, var_29_string); // 0x1cc Func
	
Label_446:
	var_30_int = 1; // 0x1be PushI
	var_31_string = "button_weapon"; // 0x1bf PushS
	SendMessage(var_30_int, var_31_string); // 0x1c0 Func
}


func_217(var_216_int)
{
	var_217_int = 0; var_218_int = 0; // 0xd9 PushV
	var_219_string = "Money"; // 0xda PushS
	GetInvItemByName(var_218_int, var_219_string); // 0xdb Func
	var_216_int = var_218_int; // 0xdd Mov
	return 2; // 0xde Return
}


func_381(var_32_int)
{
	var_33_object = Obj(); var_34_int = 0; var_35_int = 0; var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_object = Obj(); var_40_int = 0; var_41_int = 0; var_42_object = Obj(); var_43_int = 0; var_44_bool = 0; // 0x17d PushV
	GetPlayerContainer(var_39_object); // 0x17e Func
	GetItemCount(var_40_int, var_32_int); // 0x180 ObjFunc
	var_41_int = 0; // 0x182 MovI
	
Label_387:
	var_45_int = 12; // 0x183 PushI
	var_46_bool = var_41_int < var_45_int; // 0x184 LT
	if(var_46_bool == 0) goto Label_435; // 0x185 JumpB
	var_47_bool = var_41_int < var_40_int; // 0x186 LT
	if(var_47_bool == 0) goto Label_425; // 0x187 JumpB
	GetItem(var_42_object, var_41_int, var_32_int); // 0x188 ObjFunc
	GetItemAmount(var_43_int, var_41_int, var_32_int); // 0x18a ObjFunc
	IsItemSelected(var_44_bool, var_41_int, var_32_int); // 0x18c ObjFunc
	var_48_bool = var_44_bool; // 0x18e Push
	if(var_48_bool == 0) goto Label_408; // 0x18f JumpB
	var_49_int = 16384; // 0x190 PushI
	var_50_string = ""; var_51_int = 0; // 0x191 PushV
	var_51_int = var_41_int; // 0x192 Mov
	func_161(var_50_string, var_51_int); // 0x193 Call
	SendMessage(var_49_int, var_50_string, var_42_object); // 0x195 Func
	goto Label_415; // 0x197 Jump
	
Label_415:
	var_62_int = 65536; // 0x19f PushI
	var_63_int = var_43_int | var_62_int; // 0x1a0 Or
	var_64_string = ""; var_65_int = 0; // 0x1a1 PushV
	var_65_int = var_41_int; // 0x1a2 Mov
	func_161(var_64_string, var_65_int); // 0x1a3 Call
	SendMessage(var_63_int, var_64_string); // 0x1a5 Func
	var_42_object = 0; // 0x1a7 SetNull
	goto Label_432; // 0x1a8 Jump
	
Label_432:
	var_66_int = 1; // 0x1b0 PushI
	var_41_int = var_41_int + var_66_int; // 0x1b1 Add2
	goto Label_387; // 0x1b2 Jump
	
Label_408:
	var_67_int = 0; // 0x198 PushI
	var_68_string = ""; var_69_int = 0; // 0x199 PushV
	var_69_int = var_41_int; // 0x19a Mov
	func_161(var_68_string, var_69_int); // 0x19b Call
	SendMessage(var_67_int, var_68_string, var_42_object); // 0x19d Func
	
Label_425:
	var_70_int = 32768; // 0x1a9 PushI
	var_71_string = ""; var_72_int = 0; // 0x1aa PushV
	var_72_int = var_41_int; // 0x1ab Mov
	func_161(var_71_string, var_72_int); // 0x1ac Call
	SendMessage(var_70_int, var_71_string); // 0x1ae Func
	
Label_435:
	return 12; // 0x1b3 Return
}


func_319()
{
	var_122_int = 0; var_123_int = 0; // 0x13f PushV
	GetPlayerMoneyCount(var_123_int); // 0x140 Func
	var_124_string = "money"; // 0x142 PushS
	SendMessage(var_123_int, var_124_string); // 0x143 Func
	return 2; // 0x145 Return
}


