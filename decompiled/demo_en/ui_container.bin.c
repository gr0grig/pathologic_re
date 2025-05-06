task_0_event_15(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int, var_5_float)
{
	var_2_int = var_2_int + var_5_float; // 0x43 Add2
	var_6_int = 0; // 0x44 PushI
	var_7_bool = var_2_int < var_6_int; // 0x45 LT
	if(var_7_bool == 0) goto Label_72; // 0x46 JumpB
	var_2_int = 0; // 0x47 TMovI
	
Label_72:
	func_116(var_5_float); // 0x49 NEW_2
	return 0; // 0x4b Return
}


task_0_event_100(var_0_int, var_1_object, var_2_int, var_3_int)
{
	DestroyWindow(); // 0xed Func
	return 0; // 0xef Return
}


task_0_event_1(var_0_int, var_1_object, var_2_int, var_3_float)
{
	var_4_int = 0; // 0x105 PushV
	var_4_int = var_0_int; // 0x106 MovT
	func_621(var_4_int); // 0x107 NEW_2
	func_422(); // 0x10a NEW_2
	func_76(); // 0x10d NEW_2
	return 0; // 0x10f Return
}


task_0_event_200(var_0_int, var_1_object, var_2_int, var_3_int, var_4_string, var_5_object)
{
	var_6_bool = 0; var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); // 0x110 PushV
	var_12_bool = 0; // 0x111 MovB
	var_18_string = "button_weapon"; // 0x112 PushS
	var_19_bool = var_4_string == var_18_string; // 0x113 Eq
	if(var_19_bool == 0) goto Label_283; // 0x114 JumpB
	var_20_int = 0; // 0x115 PushV
	var_20_int = 0; // 0x116 MovI
	func_387(var_17_object, var_20_int); // 0x117 NEW_2
	var_12_bool = 1; // 0x119 MovB
	goto Label_375; // 0x11a Jump
	
Label_375:
	var_55_bool = var_12_bool == 0; // 0x177 Not
	if(var_55_bool == 0) goto Label_384; // 0x178 JumpB
	var_56_bool = 0; var_57_int = 0; var_58_string = ""; var_59_object = Obj(); // 0x179 PushV
	var_57_int = var_3_int; // 0x17a Mov
	var_58_string = var_4_string; // 0x17b Mov
	var_59_object = var_5_object; // 0x17c Mov
	func_18(var_56_bool, var_57_int, var_58_string, var_59_object); // 0x17d NEW_2
	var_12_bool = var_56_bool; // 0x17e Mov
	
Label_384:
	var_213_bool = var_12_bool; // 0x180 Push
	if(var_213_bool == 0) goto Label_386; // 0x181 JumpB
	
Label_386:
	return 12; // 0x182 Return
	
Label_283:
	var_214_string = "button_clothes"; // 0x11b PushS
	var_215_bool = var_4_string == var_214_string; // 0x11c Eq
	if(var_215_bool == 0) goto Label_292; // 0x11d JumpB
	var_216_int = 0; // 0x11e PushV
	var_216_int = 1; // 0x11f MovI
	func_387(var_17_object, var_216_int); // 0x120 NEW_2
	var_12_bool = 1; // 0x122 MovB
	goto Label_375; // 0x123 Jump
	
Label_292:
	var_217_string = "button_medcine"; // 0x124 PushS
	var_218_bool = var_4_string == var_217_string; // 0x125 Eq
	if(var_218_bool == 0) goto Label_301; // 0x126 JumpB
	var_219_int = 0; // 0x127 PushV
	var_219_int = 2; // 0x128 MovI
	func_387(var_17_object, var_219_int); // 0x129 NEW_2
	var_12_bool = 1; // 0x12b MovB
	goto Label_375; // 0x12c Jump
	
Label_301:
	var_220_string = "button_food"; // 0x12d PushS
	var_221_bool = var_4_string == var_220_string; // 0x12e Eq
	if(var_221_bool == 0) goto Label_310; // 0x12f JumpB
	var_222_int = 0; // 0x130 PushV
	var_222_int = 3; // 0x131 MovI
	func_387(var_17_object, var_222_int); // 0x132 NEW_2
	var_12_bool = 1; // 0x134 MovB
	goto Label_375; // 0x135 Jump
	
Label_310:
	var_223_string = "button_other"; // 0x136 PushS
	var_224_bool = var_4_string == var_223_string; // 0x137 Eq
	if(var_224_bool == 0) goto Label_319; // 0x138 JumpB
	var_225_int = 0; // 0x139 PushV
	var_225_int = 4; // 0x13a MovI
	func_387(var_17_object, var_225_int); // 0x13b NEW_2
	var_12_bool = 1; // 0x13d MovB
	goto Label_375; // 0x13e Jump
	
Label_319:
	var_226_string = "button_detector"; // 0x13f PushS
	var_227_bool = var_4_string == var_226_string; // 0x140 Eq
	if(var_227_bool == 0) goto Label_323; // 0x141 JumpB
	goto Label_375; // 0x142 Jump
	
Label_323:
	var_228_string = "button_anticeptic"; // 0x143 PushS
	var_229_bool = var_4_string == var_228_string; // 0x144 Eq
	if(var_229_bool == 0) goto Label_327; // 0x145 JumpB
	goto Label_375; // 0x146 Jump
	
Label_327:
	var_230_int = 0; // 0x147 PushI
	var_231_bool = var_3_int != var_230_int; // 0x148 Neq
	if(var_231_bool == 0) goto Label_336; // 0x149 JumpB
	var_232_string = "noinv_drop"; // 0x14a PushS
	GetVariable(var_232_string, var_13_int); // 0x14b Func
	var_233_int = var_13_int; // 0x14d Push
	if(var_233_int == 0) goto Label_336; // 0x14e JumpB
	return 12; // 0x14f Return
	
Label_336:
	var_14_int = 0; // 0x150 MovI
	
Label_337:
	var_234_int = 12; // 0x151 PushI
	var_235_bool = var_14_int < var_234_int; // 0x152 LT
	if(var_235_bool == 0) goto Label_375; // 0x153 JumpB
	var_236_string = ""; var_237_int = 0; // 0x154 PushV
	var_237_int = var_14_int; // 0x155 Mov
	func_708(var_236_string, var_237_int); // 0x156 NEW_2
	var_248_bool = var_4_string == var_236_string; // 0x158 Eq
	if(var_248_bool == 0) goto Label_372; // 0x159 JumpB
	var_249_object = Obj(); // 0x15a PushV
	func_12(var_249_object); // 0x15b NEW_2
	var_15_object = var_249_object; // 0x15c Mov
	GetItemCount(var_16_int, var_0_int); // 0x15e ObjFunc
	var_250_bool = var_16_int > var_14_int; // 0x160 GT
	if(var_250_bool == 0) goto Label_370; // 0x161 JumpB
	GetItem(var_17_object, var_14_int, var_0_int); // 0x162 ObjFunc
	var_251_bool = 0; var_252_object = Obj(); // 0x164 PushV
	var_252_object = var_17_object; // 0x165 Mov
	func_240(var_252_object); // 0x166 NEW_2
	var_253_bool = var_251_bool == 0; // 0x168 Not
	if(var_253_bool == 0) goto Label_369; // 0x169 JumpB
	var_254_bool = 0; var_255_int = 0; var_256_bool = 0; // 0x16a PushV
	var_255_int = var_14_int; // 0x16b Mov
	var_257_int = 0; // 0x16c PushI
	var_256_bool = var_3_int == var_257_int; // 0x16d Eq2
	func_103(var_17_object, var_254_bool, var_255_int, var_256_bool); // 0x16e NEW_2
	var_12_bool = var_254_bool; // 0x16f Mov
	
Label_369:
	var_17_object = 0; // 0x171 SetNull
	
Label_370:
	goto Label_375; // 0x172 Jump
	
Label_372:
	var_292_int = 1; // 0x174 PushI
	var_14_int = var_14_int + var_292_int; // 0x175 Add2
	goto Label_337; // 0x176 Jump
}


main(var_0_int, var_1_object, var_2_int)
{
	var_3_string = "inventory_base.xml"; // 0x0 PushS
	var_4_bool = 0; // 0x1 PushB
	CreateWindow(var_3_string, var_4_bool, var_4_bool); // 0x2 Func
	func_116(var_2_int); // 0x5 NEW_2
	var_33_int = 0; // 0x7 PushV
	var_33_int = 0; // 0x8 MovI
	func_204(var_2_int, var_33_int); // 0x9 NEW_2
	return 0; // 0xb Return
}


func_387(var_0_int, var_34_int)
{
	var_35_int = -1; // 0x184 PushI
	var_36_bool = var_34_int == var_35_int; // 0x185 Eq
	if(var_36_bool == 0) goto Label_392; // 0x186 JumpB
	return 0; // 0x187 Return
	
Label_392:
	var_37_bool = var_0_int == var_34_int; // 0x188 Eq
	if(var_37_bool == 0) goto Label_395; // 0x189 JumpB
	return 0; // 0x18a Return
	
Label_395:
	var_0_int = var_34_int; // 0x18b TMov
	var_38_int = 0; // 0x18c PushV
	var_38_int = var_0_int; // 0x18d MovT
	func_429(var_38_int); // 0x18e NEW_2
	return 0; // 0x190 Return
}


func_12(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0xc PushV
	GetPlayerContainer(var_86_object); // 0xd Func
	var_84_object = var_86_object; // 0xf Mov
	return 2; // 0x10 Return
}


func_401(var_134_int)
{
	var_135_object = Obj(); var_136_int = 0; var_137_object = Obj(); var_138_int = 0; // 0x191 PushV
	var_139_object = Obj(); // 0x192 PushV
	func_12(var_139_object); // 0x193 NEW_2
	var_137_object = var_139_object; // 0x194 Mov
	var_140_string = "money"; // 0x196 PushS
	GetProperty(var_140_string, var_138_int); // 0x197 ObjFunc
	var_134_int = var_138_int; // 0x199 Mov
	return 4; // 0x19a Return
}


func_18(var_2_int, var_56_bool, var_57_int, var_58_string)
{
	var_60_int = 0; var_61_object = Obj(); var_62_int = 0; var_63_int = 0; var_64_object = Obj(); var_65_int = 0; // 0x12 PushV
	var_63_int = 0; // 0x13 MovI
	
Label_20:
	var_66_int = 4; // 0x14 PushI
	var_67_bool = var_63_int < var_66_int; // 0x15 LT
	if(var_67_bool == 0) goto Label_40; // 0x16 JumpB
	var_68_string = ""; var_69_int = 0; // 0x17 PushV
	var_69_int = var_63_int; // 0x18 Mov
	func_724(var_68_string, var_69_int); // 0x19 NEW_2
	var_80_bool = var_58_string == var_68_string; // 0x1b Eq
	if(var_80_bool == 0) goto Label_37; // 0x1c JumpB
	var_81_int = 0; var_82_bool = 0; // 0x1d PushV
	var_81_int = var_63_int; // 0x1e Mov
	var_83_int = 0; // 0x1f PushI
	var_82_bool = var_57_int == var_83_int; // 0x20 Eq2
	func_87(var_81_int, var_82_bool); // 0x21 NEW_2
	var_56_bool = 1; // 0x23 MovB
	return 6; // 0x24 Return
	
Label_37:
	var_175_int = 1; // 0x25 PushI
	var_63_int = var_63_int + var_175_int; // 0x26 Add2
	goto Label_20; // 0x27 Jump
	
Label_40:
	var_176_string = "scrollbar"; // 0x28 PushS
	var_177_bool = var_58_string == var_176_string; // 0x29 Eq
	if(var_177_bool == 0) goto Label_64; // 0x2a JumpB
	GetContainer(var_64_object); // 0x2b Func
	GetItemCount(var_65_int); // 0x2d ObjFunc
	var_178_float = 0.01; // 0x2f PushF
	var_179_int = 4; // 0x30 PushI
	var_180_int = var_65_int - var_179_int; // 0x31 Sub
	var_181_float = var_178_float * var_180_int; // 0x32 Mult
	var_182_float = var_181_float * var_57_int; // 0x33 Mult
	var_183_float = 0.5; // 0x34 PushF
	var_2_int = var_182_float + var_183_float; // 0x35 Add2
	var_184_int = 0; // 0x36 PushI
	var_185_bool = var_2_int < var_184_int; // 0x37 LT
	if(var_185_bool == 0) goto Label_58; // 0x38 JumpB
	var_2_int = 0; // 0x39 TMovI
	
Label_58:
	func_157(var_65_int); // 0x3b NEW_2
	var_56_bool = 1; // 0x3d MovB
	return 6; // 0x3e Return
	
Label_64:
	var_56_bool = 0; // 0x40 MovB
	return 6; // 0x41 Return
}


func_412(var_136_int)
{
	var_137_object = Obj(); var_138_object = Obj(); // 0x19c PushV
	var_139_object = Obj(); // 0x19d PushV
	func_12(var_139_object); // 0x19e NEW_2
	var_138_object = var_139_object; // 0x19f Mov
	var_140_string = "money"; // 0x1a1 PushS
	SetProperty(var_140_string, var_136_int); // 0x1a2 ObjFunc
	return 2; // 0x1a4 Return
}


func_157(var_2_int)
{
	var_145_object = Obj(); var_146_int = 0; var_147_int = 0; var_148_object = Obj(); var_149_int = 0; var_150_int = 0; var_151_object = Obj(); var_152_int = 0; var_153_int = 0; var_154_object = Obj(); var_155_int = 0; var_156_int = 0; // 0x9d PushV
	GetContainer(var_151_object); // 0x9e Func
	GetItemCount(var_152_int); // 0xa0 ObjFunc
	var_153_int = var_2_int; // 0xa2 MovT
	
Label_163:
	var_157_int = 4; // 0xa3 PushI
	var_158_int = var_2_int + var_157_int; // 0xa4 Add
	var_159_bool = var_153_int < var_158_int; // 0xa5 LT
	if(var_159_bool == 0) goto Label_202; // 0xa6 JumpB
	var_160_bool = var_153_int < var_152_int; // 0xa7 LT
	if(var_160_bool == 0) goto Label_192; // 0xa8 JumpB
	GetItem(var_154_object, var_153_int); // 0xa9 ObjFunc
	GetItemID(var_155_int); // 0xab ObjFunc
	GetItemAmount(var_156_int, var_153_int); // 0xad ObjFunc
	var_161_int = 0; // 0xaf PushI
	var_162_string = ""; var_163_int = 0; // 0xb0 PushV
	var_163_int = var_153_int - var_2_int; // 0xb1 Sub2
	func_724(var_162_string, var_163_int); // 0xb2 NEW_2
	SendMessage(var_161_int, var_162_string, var_154_object); // 0xb4 Func
	var_174_int = 65536; // 0xb6 PushI
	var_175_int = var_156_int | var_174_int; // 0xb7 Or
	var_176_string = ""; var_177_int = 0; // 0xb8 PushV
	var_177_int = var_153_int - var_2_int; // 0xb9 Sub2
	func_724(var_176_string, var_177_int); // 0xba NEW_2
	SendMessage(var_175_int, var_176_string); // 0xbc Func
	var_154_object = 0; // 0xbe SetNull
	goto Label_199; // 0xbf Jump
	
Label_199:
	var_178_int = 1; // 0xc7 PushI
	var_153_int = var_153_int + var_178_int; // 0xc8 Add2
	goto Label_163; // 0xc9 Jump
	
Label_192:
	var_179_int = 32768; // 0xc0 PushI
	var_180_string = ""; var_181_int = 0; // 0xc1 PushV
	var_181_int = var_153_int - var_2_int; // 0xc2 Sub2
	func_724(var_180_string, var_181_int); // 0xc3 NEW_2
	SendMessage(var_179_int, var_180_string); // 0xc5 Func
	
Label_202:
	return 12; // 0xca Return
}


func_422()
{
	var_134_int = 0; // 0x1a6 PushV
	func_401(var_134_int); // 0x1a7 NEW_2
	var_141_string = "money"; // 0x1a9 PushS
	SendMessage(var_134_int, var_141_string); // 0x1aa Func
	return 0; // 0x1ac Return
}


func_429(var_38_int)
{
	var_39_int = 0; // 0x1ae PushI
	var_40_bool = var_38_int != var_39_int; // 0x1af Neq
	if(var_40_bool == 0) goto Label_438; // 0x1b0 JumpB
	var_41_int = 0; // 0x1b1 PushI
	var_42_string = "button_weapon"; // 0x1b2 PushS
	SendMessage(var_41_int, var_42_string); // 0x1b3 Func
	goto Label_442; // 0x1b5 Jump
	
Label_442:
	var_43_int = 1; // 0x1ba PushI
	var_44_bool = var_38_int != var_43_int; // 0x1bb Neq
	if(var_44_bool == 0) goto Label_450; // 0x1bc JumpB
	var_45_int = 0; // 0x1bd PushI
	var_46_string = "button_clothes"; // 0x1be PushS
	SendMessage(var_45_int, var_46_string); // 0x1bf Func
	goto Label_454; // 0x1c1 Jump
	
Label_454:
	var_47_int = 2; // 0x1c6 PushI
	var_48_bool = var_38_int != var_47_int; // 0x1c7 Neq
	if(var_48_bool == 0) goto Label_462; // 0x1c8 JumpB
	var_49_int = 0; // 0x1c9 PushI
	var_50_string = "button_medcine"; // 0x1ca PushS
	SendMessage(var_49_int, var_50_string); // 0x1cb Func
	goto Label_466; // 0x1cd Jump
	
Label_466:
	var_51_int = 3; // 0x1d2 PushI
	var_52_bool = var_38_int != var_51_int; // 0x1d3 Neq
	if(var_52_bool == 0) goto Label_474; // 0x1d4 JumpB
	var_53_int = 0; // 0x1d5 PushI
	var_54_string = "button_food"; // 0x1d6 PushS
	SendMessage(var_53_int, var_54_string); // 0x1d7 Func
	goto Label_478; // 0x1d9 Jump
	
Label_478:
	var_55_int = 4; // 0x1de PushI
	var_56_bool = var_38_int != var_55_int; // 0x1df Neq
	if(var_56_bool == 0) goto Label_486; // 0x1e0 JumpB
	var_57_int = 0; // 0x1e1 PushI
	var_58_string = "button_other"; // 0x1e2 PushS
	SendMessage(var_57_int, var_58_string); // 0x1e3 Func
	goto Label_490; // 0x1e5 Jump
	
Label_490:
	return 0; // 0x1ea Return
	
Label_486:
	var_59_int = 1; // 0x1e6 PushI
	var_60_string = "button_other"; // 0x1e7 PushS
	SendMessage(var_59_int, var_60_string); // 0x1e8 Func
	
Label_474:
	var_61_int = 1; // 0x1da PushI
	var_62_string = "button_food"; // 0x1db PushS
	SendMessage(var_61_int, var_62_string); // 0x1dc Func
	
Label_462:
	var_63_int = 1; // 0x1ce PushI
	var_64_string = "button_medcine"; // 0x1cf PushS
	SendMessage(var_63_int, var_64_string); // 0x1d0 Func
	
Label_450:
	var_65_int = 1; // 0x1c2 PushI
	var_66_string = "button_clothes"; // 0x1c3 PushS
	SendMessage(var_65_int, var_66_string); // 0x1c4 Func
	
Label_438:
	var_67_int = 1; // 0x1b6 PushI
	var_68_string = "button_weapon"; // 0x1b7 PushS
	SendMessage(var_67_int, var_68_string); // 0x1b8 Func
}


func_571(var_0_int, var_258_bool, var_259_int, var_260_int)
{
	var_261_object = Obj(); var_262_object = Obj(); var_263_object = Obj(); var_264_int = 0; var_265_int = 0; var_266_bool = 0; var_267_int = 0; var_268_bool = 0; var_269_bool = 0; var_270_object = Obj(); var_271_object = Obj(); var_272_object = Obj(); var_273_int = 0; var_274_int = 0; var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_bool = 0; // 0x23b PushV
	var_279_object = Obj(); // 0x23c PushV
	func_12(var_279_object); // 0x23d NEW_2
	var_271_object = var_279_object; // 0x23e Mov
	GetContainer(var_270_object); // 0x240 Func
	GetItemCount(var_273_int, var_259_int); // 0x242 ObjFunc
	var_280_bool = var_273_int <= var_260_int; // 0x244 LE
	if(var_280_bool == 0) goto Label_584; // 0x245 JumpB
	var_258_bool = 0; // 0x246 MovB
	return 18; // 0x247 Return
	
Label_584:
	GetItemAmount(var_274_int, var_260_int, var_259_int); // 0x248 ObjFunc
	GetItem(var_272_object, var_260_int, var_259_int); // 0x24a ObjFunc
	var_281_int = 0; // 0x24c PushI
	var_282_int = 1; // 0x24d PushI
	AddItem(var_275_bool, var_272_object, var_281_int, var_282_int); // 0x24e ObjFunc
	var_283_bool = var_275_bool == 0; // 0x250 Not
	if(var_283_bool == 0) goto Label_596; // 0x251 JumpB
	var_258_bool = 0; // 0x252 MovB
	return 18; // 0x253 Return
	
Label_596:
	var_284_int = 0; // 0x254 PushI
	var_285_bool = var_0_int == var_284_int; // 0x255 Eq
	if(var_285_bool == 0) goto Label_613; // 0x256 JumpB
	GetItemID(var_276_int); // 0x257 ObjFunc
	var_286_string = "Weapon"; // 0x259 PushS
	HasInvItemProperty(var_277_bool, var_276_int, var_286_string); // 0x25a Func
	var_287_bool = var_277_bool; // 0x25c Push
	if(var_287_bool == 0) goto Label_613; // 0x25d JumpB
	IsItemSelected(var_278_bool, var_260_int, var_0_int); // 0x25e ObjFunc
	var_288_bool = var_278_bool; // 0x260 Push
	if(var_288_bool == 0) goto Label_613; // 0x261 JumpB
	var_289_int = -1; // 0x262 PushI
	SetPlayerHandsItem(var_289_int); // 0x263 Func
	
Label_613:
	var_290_int = 1; // 0x265 PushI
	RemoveItem(var_260_int, var_290_int, var_259_int); // 0x266 ObjFunc
	var_258_bool = 1; // 0x268 MovB
	return 18; // 0x269 Return
}


func_708(var_104_string, var_105_int)
{
	var_106_int = 1; // 0x2c5 PushI
	var_107_int = var_105_int + var_106_int; // 0x2c6 Add
	var_108_int = 10; // 0x2c7 PushI
	var_109_bool = var_107_int < var_108_int; // 0x2c8 LT
	if(var_109_bool == 0) goto Label_719; // 0x2c9 JumpB
	var_110_string = "slot0"; // 0x2ca PushS
	var_111_int = 1; // 0x2cb PushI
	var_112_int = var_105_int + var_111_int; // 0x2cc Add
	var_104_string = var_110_string + var_112_int; // 0x2cd Add2
	return 0; // 0x2ce Return
	
Label_719:
	var_113_string = "slot"; // 0x2cf PushS
	var_114_int = 1; // 0x2d0 PushI
	var_115_int = var_105_int + var_114_int; // 0x2d1 Add
	var_104_string = var_113_string + var_115_int; // 0x2d2 Add2
	return 0; // 0x2d3 Return
}


func_204(var_0_int, var_33_int)
{
	var_0_int = -1; // 0xcd TMovI
	var_34_int = 0; // 0xce PushV
	var_34_int = var_33_int; // 0xcf Mov
	func_387(var_33_int, var_34_int); // 0xd0 NEW_2
	var_69_int = 0; // 0xd2 PushV
	var_69_int = var_0_int; // 0xd3 MovT
	func_621(var_69_int); // 0xd4 NEW_2
	func_422(); // 0xd7 NEW_2
	var_142_string = "default"; // 0xd9 PushS
	SetCursor(var_142_string); // 0xda Func
	ShowCursor(); // 0xdc Func
	CaptureKeyboard(); // 0xde Func
	var_143_bool = 0; // 0xe0 PushB
	SetOwnerDraw(var_143_bool); // 0xe1 Func
	var_144_bool = 1; // 0xe3 PushB
	SetNeedUpdate(var_144_bool); // 0xe4 Func
	func_80(); // 0xe7 NEW_2
	ProcessEvents(); // 0xe9 Func
	return 0; // 0xeb Return
}


func_76()
{
	func_157(var_3_float); // 0x4d NEW_2
	return 0; // 0x4f Return
}


func_80()
{
	func_116(var_33_int); // 0x51 NEW_2
	func_157(var_33_int); // 0x54 NEW_2
	return 0; // 0x56 Return
}


func_724(var_162_string, var_163_int)
{
	var_164_int = 1; // 0x2d5 PushI
	var_165_int = var_163_int + var_164_int; // 0x2d6 Add
	var_166_int = 10; // 0x2d7 PushI
	var_167_bool = var_165_int < var_166_int; // 0x2d8 LT
	if(var_167_bool == 0) goto Label_735; // 0x2d9 JumpB
	var_168_string = "cslot0"; // 0x2da PushS
	var_169_int = 1; // 0x2db PushI
	var_170_int = var_163_int + var_169_int; // 0x2dc Add
	var_162_string = var_168_string + var_170_int; // 0x2dd Add2
	return 0; // 0x2de Return
	
Label_735:
	var_171_string = "cslot"; // 0x2df PushS
	var_172_int = 1; // 0x2e0 PushI
	var_173_int = var_163_int + var_172_int; // 0x2e1 Add
	var_162_string = var_171_string + var_173_int; // 0x2e2 Add2
	return 0; // 0x2e3 Return
}


func_87(var_2_int, var_81_int)
{
	var_84_bool = 0; var_85_bool = 0; // 0x57 PushV
	var_86_int = 0; // 0x58 PushV
	var_87_int = 0; var_88_bool = 0; var_89_int = 0; // 0x59 PushV
	var_88_bool = var_85_bool; // 0x5a Mov
	var_89_int = var_81_int + var_2_int; // 0x5b Add2
	func_491(var_87_int, var_88_bool, var_89_int); // 0x5c NEW_2
	var_86_int = var_87_int; // 0x5d Mov
	func_387(var_85_bool, var_86_int); // 0x5f NEW_2
	var_146_bool = var_85_bool == 0; // 0x61 Not
	if(var_146_bool == 0) goto Label_99; // 0x62 JumpB
	
Label_99:
	func_116(var_85_bool); // 0x64 NEW_2
	return 2; // 0x66 Return
}


func_740(var_124_int)
{
	var_125_int = 0; var_126_int = 0; // 0x2e4 PushV
	var_127_string = "Money"; // 0x2e5 PushS
	GetInvItemByName(var_126_int, var_127_string); // 0x2e6 Func
	var_124_int = var_126_int; // 0x2e8 Mov
	return 2; // 0x2e9 Return
}


func_103(var_0_int, var_2_int, var_254_bool, var_255_int)
{
	var_258_bool = 0; var_259_int = 0; var_260_int = 0; // 0x68 PushV
	var_259_int = var_0_int; // 0x69 MovT
	var_260_int = var_255_int; // 0x6a Mov
	func_571(var_256_bool, var_258_bool, var_259_int, var_260_int); // 0x6b NEW_2
	var_291_int = 1; // 0x6d PushI
	var_2_int = var_2_int + var_291_int; // 0x6e Add2
	func_116(var_256_bool); // 0x70 NEW_2
	var_254_bool = 1; // 0x72 MovB
	return 0; // 0x73 Return
}


func_491(var_87_int, var_88_bool, var_89_int)
{
	var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj(); var_93_int = 0; var_94_int = 0; var_95_int = 0; var_96_bool = 0; var_97_int = 0; var_98_int = 0; var_99_bool = 0; var_100_bool = 0; var_101_object = Obj(); var_102_object = Obj(); var_103_object = Obj(); var_104_int = 0; var_105_int = 0; var_106_int = 0; var_107_bool = 0; var_108_int = 0; var_109_int = 0; var_110_bool = 0; var_111_bool = 0; // 0x1eb PushV
	var_88_bool = 0; // 0x1ec MovB
	var_112_int = -1; // 0x1ed PushI
	var_113_bool = var_89_int == var_112_int; // 0x1ee Eq
	if(var_113_bool == 0) goto Label_498; // 0x1ef JumpB
	var_87_int = -1; // 0x1f0 MovI
	return 22; // 0x1f1 Return
	
Label_498:
	var_114_object = Obj(); // 0x1f2 PushV
	func_12(var_114_object); // 0x1f3 NEW_2
	var_102_object = var_114_object; // 0x1f4 Mov
	GetContainer(var_101_object); // 0x1f6 Func
	GetItemCount(var_104_int); // 0x1f8 ObjFunc
	var_117_bool = var_104_int <= var_89_int; // 0x1fa LE
	if(var_117_bool == 0) goto Label_510; // 0x1fb JumpB
	var_87_int = -1; // 0x1fc MovI
	return 22; // 0x1fd Return
	
Label_510:
	GetItemAmount(var_105_int, var_89_int); // 0x1fe ObjFunc
	var_118_int = 0; // 0x200 PushI
	var_119_bool = var_105_int == var_118_int; // 0x201 Eq
	if(var_119_bool == 0) goto Label_517; // 0x202 JumpB
	var_87_int = -1; // 0x203 MovI
	return 22; // 0x204 Return
	
Label_517:
	GetItem(var_103_object, var_89_int); // 0x205 ObjFunc
	GetItemID(var_106_int); // 0x207 ObjFunc
	var_107_bool = 0; // 0x209 MovB
	var_120_string = "Organ"; // 0x20a PushS
	HasProperty(var_107_bool, var_120_string); // 0x20b ObjFunc
	var_121_bool = var_107_bool; // 0x20d Push
	if(var_121_bool == 0) goto Label_530; // 0x20e JumpB
	var_122_string = "Organ"; // 0x20f PushS
	RemoveProperty(var_122_string); // 0x210 ObjFunc
	
Label_530:
	var_123_string = "Category"; // 0x212 PushS
	GetInvItemProperty(var_108_int, var_106_int, var_123_string); // 0x213 Func
	var_124_int = 0; // 0x215 PushV
	func_740(var_124_int); // 0x216 NEW_2
	var_128_bool = var_106_int == var_124_int; // 0x218 Eq
	if(var_128_bool == 0) goto Label_555; // 0x219 JumpB
	var_129_int = 0; // 0x21a PushV
	func_401(var_129_int); // 0x21b NEW_2
	var_109_int = var_129_int; // 0x21c Mov
	var_109_int = var_109_int + var_105_int; // 0x21e Add2
	var_136_int = 0; // 0x21f PushV
	var_136_int = var_109_int; // 0x220 Mov
	func_412(var_136_int); // 0x221 NEW_2
	RemoveItem(var_89_int, var_105_int); // 0x223 ObjFunc
	func_422(); // 0x226 NEW_2
	var_88_bool = 1; // 0x228 MovB
	var_87_int = -1; // 0x229 MovI
	return 22; // 0x22a Return
	
Label_555:
	var_143_int = 1; // 0x22b PushI
	AddItem(var_111_bool, var_103_object, var_108_int, var_143_int); // 0x22c ObjFunc
	var_144_bool = var_111_bool == 0; // 0x22e Not
	if(var_144_bool == 0) goto Label_562; // 0x22f JumpB
	var_87_int = var_108_int; // 0x230 Mov
	return 22; // 0x231 Return
	
Label_562:
	var_88_bool = 1; // 0x232 MovB
	var_145_int = 1; // 0x233 PushI
	RemoveItem(var_89_int, var_145_int); // 0x234 ObjFunc
	var_87_int = var_108_int; // 0x236 Mov
	return 22; // 0x237 Return
}


func_621(var_69_int)
{
	var_70_object = Obj(); var_71_int = 0; var_72_int = 0; var_73_object = Obj(); var_74_int = 0; var_75_bool = 0; var_76_bool = 0; var_77_object = Obj(); var_78_int = 0; var_79_int = 0; var_80_object = Obj(); var_81_int = 0; var_82_bool = 0; var_83_bool = 0; // 0x26d PushV
	var_84_object = Obj(); // 0x26e PushV
	func_12(var_84_object); // 0x26f NEW_2
	var_77_object = var_84_object; // 0x270 Mov
	GetItemCount(var_78_int, var_69_int); // 0x272 ObjFunc
	var_79_int = 0; // 0x274 MovI
	
Label_629:
	var_87_int = 12; // 0x275 PushI
	var_88_bool = var_79_int < var_87_int; // 0x276 LT
	if(var_88_bool == 0) goto Label_706; // 0x277 JumpB
	var_89_bool = var_79_int < var_78_int; // 0x278 LT
	if(var_89_bool == 0) goto Label_696; // 0x279 JumpB
	GetItem(var_80_object, var_79_int, var_69_int); // 0x27a ObjFunc
	GetItemAmount(var_81_int, var_79_int, var_69_int); // 0x27c ObjFunc
	var_90_bool = 0; var_91_int = 0; var_92_int = 0; // 0x27e PushV
	var_91_int = var_79_int; // 0x27f Mov
	var_92_int = var_69_int; // 0x280 Mov
	func_243(var_90_bool, var_91_int, var_92_int); // 0x281 NEW_2
	var_82_bool = var_90_bool; // 0x282 Mov
	var_99_bool = 0; var_100_object = Obj(); // 0x284 PushV
	var_100_object = var_80_object; // 0x285 Mov
	func_240(var_100_object); // 0x286 NEW_2
	var_83_bool = var_99_bool; // 0x287 Mov
	var_101_bool = var_82_bool; // 0x289 Push
	if(var_101_bool == 0) goto Label_669; // 0x28a JumpB
	var_102_bool = var_83_bool; // 0x28b Push
	if(var_102_bool == 0) goto Label_661; // 0x28c JumpB
	var_103_int = 0; // 0x28d PushI
	var_104_string = ""; var_105_int = 0; // 0x28e PushV
	var_105_int = var_79_int; // 0x28f Mov
	func_708(var_104_string, var_105_int); // 0x290 NEW_2
	SendMessage(var_103_int, var_104_string, var_80_object); // 0x292 Func
	goto Label_668; // 0x294 Jump
	
Label_668:
	goto Label_686; // 0x29c Jump
	
Label_686:
	var_116_int = 65536; // 0x2ae PushI
	var_117_int = var_81_int | var_116_int; // 0x2af Or
	var_118_string = ""; var_119_int = 0; // 0x2b0 PushV
	var_119_int = var_79_int; // 0x2b1 Mov
	func_708(var_118_string, var_119_int); // 0x2b2 NEW_2
	SendMessage(var_117_int, var_118_string); // 0x2b4 Func
	var_80_object = 0; // 0x2b6 SetNull
	goto Label_703; // 0x2b7 Jump
	
Label_703:
	var_120_int = 1; // 0x2bf PushI
	var_79_int = var_79_int + var_120_int; // 0x2c0 Add2
	goto Label_629; // 0x2c1 Jump
	
Label_661:
	var_121_int = 16384; // 0x295 PushI
	var_122_string = ""; var_123_int = 0; // 0x296 PushV
	var_123_int = var_79_int; // 0x297 Mov
	func_708(var_122_string, var_123_int); // 0x298 NEW_2
	SendMessage(var_121_int, var_122_string, var_80_object); // 0x29a Func
	
Label_669:
	var_124_bool = var_83_bool; // 0x29d Push
	if(var_124_bool == 0) goto Label_679; // 0x29e JumpB
	var_125_int = 131072; // 0x29f PushI
	var_126_string = ""; var_127_int = 0; // 0x2a0 PushV
	var_127_int = var_79_int; // 0x2a1 Mov
	func_708(var_126_string, var_127_int); // 0x2a2 NEW_2
	SendMessage(var_125_int, var_126_string, var_80_object); // 0x2a4 Func
	goto Label_686; // 0x2a6 Jump
	
Label_679:
	var_128_int = 0; // 0x2a7 PushI
	var_129_string = ""; var_130_int = 0; // 0x2a8 PushV
	var_130_int = var_79_int; // 0x2a9 Mov
	func_708(var_129_string, var_130_int); // 0x2aa NEW_2
	SendMessage(var_128_int, var_129_string, var_80_object); // 0x2ac Func
	
Label_696:
	var_131_int = 32768; // 0x2b8 PushI
	var_132_string = ""; var_133_int = 0; // 0x2b9 PushV
	var_133_int = var_79_int; // 0x2ba Mov
	func_708(var_132_string, var_133_int); // 0x2bb NEW_2
	SendMessage(var_131_int, var_132_string); // 0x2bd Func
	
Label_706:
	return 14; // 0x2c2 Return
}


func_240(var_99_bool)
{
	var_99_bool = 0; // 0xf1 MovB
	return 0; // 0xf2 Return
}


func_243(var_90_bool, var_91_int, var_92_int)
{
	var_93_bool = 0; var_94_bool = 0; // 0xf3 PushV
	var_95_object = Obj(); // 0xf4 PushV
	func_12(var_95_object); // 0xf5 NEW_2
	var_96_object = Obj(); // 0xf7 PushV
	func_12(var_96_object); // 0xf8 NEW_2
	var_97_object = Obj(); // 0xfa PushV
	func_12(var_97_object); // 0xfb NEW_2
	var_98_object = Obj(); // 0xfd PushV
	func_12(var_98_object); // 0xfe NEW_2
	IsItemSelected(var_94_bool, var_91_int, var_92_int); // 0x100 ObjFunc
	var_90_bool = var_94_bool; // 0x102 Mov
	return 2; // 0x103 Return
}


func_116(var_2_int)
{
	var_5_object = Obj(); var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_int = 0; // 0x74 PushV
	GetContainer(var_9_object); // 0x75 Func
	GetItemCount(var_10_int); // 0x77 ObjFunc
	var_13_int = 4; // 0x79 PushI
	var_14_bool = var_10_int <= var_13_int; // 0x7a LE
	if(var_14_bool == 0) goto Label_130; // 0x7b JumpB
	var_15_int = 16384; // 0x7c PushI
	var_16_string = "scrollbar"; // 0x7d PushS
	SendMessage(var_15_int, var_16_string); // 0x7e Func
	var_2_int = 0; // 0x80 TMovI
	goto Label_155; // 0x81 Jump
	
Label_155:
	return 8; // 0x9b Return
	
Label_130:
	var_17_int = 4; // 0x82 PushI
	var_18_int = var_2_int + var_17_int; // 0x83 Add
	var_19_bool = var_18_int > var_10_int; // 0x84 GT
	if(var_19_bool == 0) goto Label_147; // 0x85 JumpB
	var_20_int = 4; // 0x86 PushI
	var_21_int = var_2_int + var_20_int; // 0x87 Add
	var_22_int = var_21_int - var_10_int; // 0x88 Sub
	var_2_int = var_2_int - var_22_int; // 0x89 Sub2
	var_23_int = 100; // 0x8a PushI
	var_24_float = var_2_int * var_23_int; // 0x8b Mult
	var_25_int = 4; // 0x8c PushI
	var_26_int = var_10_int - var_25_int; // 0x8d Sub
	var_11_int = var_24_float / var_24_float; // 0x8e Div2
	var_27_string = "scrollbar"; // 0x8f PushS
	SendMessage(var_11_int, var_27_string); // 0x90 Func
	goto Label_155; // 0x92 Jump
	
Label_147:
	var_28_int = 100; // 0x93 PushI
	var_29_float = var_2_int * var_28_int; // 0x94 Mult
	var_30_int = 4; // 0x95 PushI
	var_31_int = var_10_int - var_30_int; // 0x96 Sub
	var_12_int = var_29_float / var_29_float; // 0x97 Div2
	var_32_string = "scrollbar"; // 0x98 PushS
	SendMessage(var_12_int, var_32_string); // 0x99 Func
}


