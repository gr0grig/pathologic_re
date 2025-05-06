task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xac PushI
	if(var_9_int == 0) goto Label_271; // 0xad JumpB
	func_874(); // 0xaf NEW_2
	var_11_int = 29399; // 0xb1 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xb2 Eq
	if(var_12_bool == 0) goto Label_185; // 0xb3 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xb4 PushV
	var_13_object = var_1_object; // 0xb5 MovT
	var_14_object = var_0_object; // 0xb6 MovT
	func_935(); // 0xb7 NEW_2
	
Label_185:
	var_17_int = 29398; // 0xb9 PushI
	var_18_bool = var_7_cvector == var_17_int; // 0xba Eq
	if(var_18_bool == 0) goto Label_218; // 0xbb JumpB
	var_19_string = ""; // 0xbc PushV
	var_19_string = "Untrust"; // 0xbd MovS
	func_149(var_8_bool, var_19_string); // 0xbe NEW_2
	var_36_int = 528036; // 0xc0 PushI
	SetMessage(var_36_int); // 0xc1 TObjFunc
	ClearReplies(); // 0xc3 TObjFunc
	var_37_bool = 0; var_38_object = Obj(); // 0xc5 PushV
	var_38_object = var_1_object; // 0xc6 MovT
	func_941(var_38_object); // 0xc7 NEW_2
	if(var_37_bool == 0) goto Label_207; // 0xc9 JumpB
	var_45_int = 528037; // 0xca PushI
	var_46_int = 29400; // 0xcb PushI
	var_47_int = 29399; // 0xcc PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xcd TObjFunc
	
Label_207:
	var_48_int = 528040; // 0xcf PushI
	var_49_int = -1; // 0xd0 PushI
	var_50_int = 29402; // 0xd1 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xd2 TObjFunc
	var_51_int = 541066; // 0xd4 PushI
	var_52_int = -1; // 0xd5 PushI
	var_53_int = 43171; // 0xd6 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xd7 TObjFunc
	return 0; // 0xd9 Return
	
Label_218:
	var_54_int = 29400; // 0xda PushI
	var_55_bool = var_7_cvector == var_54_int; // 0xdb Eq
	if(var_55_bool == 0) goto Label_236; // 0xdc JumpB
	var_56_string = ""; // 0xdd PushV
	var_56_string = "Smile"; // 0xde MovS
	func_149(var_8_bool, var_56_string); // 0xdf NEW_2
	var_57_int = 528038; // 0xe1 PushI
	SetMessage(var_57_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_58_int = 528039; // 0xe6 PushI
	var_59_int = 43172; // 0xe7 PushI
	var_60_int = 29401; // 0xe8 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_61_int = 43172; // 0xec PushI
	var_62_bool = var_7_cvector == var_61_int; // 0xed Eq
	if(var_62_bool == 0) goto Label_259; // 0xee JumpB
	var_63_string = ""; // 0xef PushV
	var_63_string = "Neutral"; // 0xf0 MovS
	func_149(var_8_bool, var_63_string); // 0xf1 NEW_2
	var_64_int = 541067; // 0xf3 PushI
	SetMessage(var_64_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_65_int = 541068; // 0xf8 PushI
	var_66_int = -1; // 0xf9 PushI
	var_67_int = 43173; // 0xfa PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xfb TObjFunc
	var_68_int = 541069; // 0xfd PushI
	var_69_int = -1; // 0xfe PushI
	var_70_int = 43174; // 0xff PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_3_string = 1; // 0x103 TMovB
	var_71_bool = 0; // 0x104 PushV
	func_978(var_71_bool); // 0x105 NEW_2
	if(var_71_bool == 0) goto Label_267; // 0x107 JumpB
	lshStopAnimation(); // 0x108 Func
	goto Label_269; // 0x10a Jump
	
Label_269:
	return 0; // 0x10d Return
	
Label_267:
	StopAnimation(); // 0x10b Func
	
Label_271:
	return 0; // 0x10f Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x11c PushV
	var_10_string = "cleanup"; // 0x11d PushS
	var_11_bool = var_7_string == var_10_string; // 0x11e Eq
	if(var_11_bool == 0) goto Label_299; // 0x11f JumpB
	var_1_object = 1; // 0x120 TMovB
	IsLoaded(var_9_bool); // 0x121 Func
	var_12_bool = var_9_bool == 0; // 0x123 Not
	if(var_12_bool == 0) goto Label_298; // 0x124 JumpB
	var_13_object = Obj(); // 0x125 PushV
	func_881(var_13_object); // 0x126 NEW_2
	RemoveActor(var_13_object); // 0x128 Func
	
Label_298:
	goto Label_303; // 0x12a Jump
	
Label_303:
	return 2; // 0x12f Return
	
Label_299:
	var_16_string = "restore"; // 0x12b PushS
	var_17_bool = var_7_string == var_16_string; // 0x12c Eq
	if(var_17_bool == 0) goto Label_303; // 0x12d JumpB
	var_1_object = 0; // 0x12e TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x130 PushT
	if(var_7_object == 0) goto Label_313; // 0x131 JumpB
	var_8_object = Obj(); // 0x132 PushV
	func_881(var_8_object); // 0x133 NEW_2
	RemoveActor(var_8_object); // 0x135 Func
	Hold(); // 0x137 Func
	
Label_313:
	func_428(); // 0x13a NEW_2
	return 0; // 0x13c Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_443(); // 0x13e NEW_2
	return 0; // 0x140 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x187 PushI
	var_9_bool = var_7_int == var_8_int; // 0x188 Eq
	if(var_9_bool == 0) goto Label_427; // 0x189 JumpB
	func_386(); // 0x18b NEW_2
	var_11_bool = 0; // 0x18d PushV
	var_11_bool = 0; // 0x18e MovB
	var_12_bool = 0; // 0x18f PushV
	func_600(var_12_bool); // 0x190 NEW_2
	if(var_12_bool == 0) goto Label_408; // 0x192 JumpB
	var_15_bool = 0; // 0x193 PushV
	func_355(var_15_bool); // 0x194 NEW_2
	if(var_15_bool == 0) goto Label_408; // 0x196 JumpB
	var_11_bool = 1; // 0x197 MovB
	
Label_408:
	if(var_11_bool == 0) goto Label_421; // 0x198 JumpB
	var_32_bool = 0; // 0x199 PushV
	func_335(var_32_bool); // 0x19a NEW_2
	if(var_32_bool == 0) goto Label_420; // 0x19c JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x19d PushV
	var_53_object = Obj(); // 0x19e PushV
	func_881(var_53_object); // 0x19f NEW_2
	var_52_object = var_53_object; // 0x1a0 Mov
	func_748(var_52_object); // 0x1a2 NEW_2
	
Label_420:
	goto Label_427; // 0x1a4 Jump
	
Label_427:
	return 0; // 0x1ab Return
	
Label_421:
	func_350(var_7_int); // 0x1a6 NEW_2
	func_377(); // 0x1a9 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x1c9 Push
	if(var_8_bool == 0) goto Label_463; // 0x1ca JumpB
	func_377(); // 0x1cc NEW_2
	goto Label_467; // 0x1ce Jump
	
Label_467:
	return 0; // 0x1d3 Return
	
Label_463:
	var_14_string = ""; // 0x1cf PushV
	var_14_string = "Neutral"; // 0x1d0 MovS
	func_828(var_14_string); // 0x1d1 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1d4 PushV
	IsOverrideActive(var_9_bool); // 0x1d5 Func
	var_10_bool = var_9_bool == 0; // 0x1d7 Not
	if(var_10_bool == 0) goto Label_496; // 0x1d8 JumpB
	EventDisable(0); // 0x1d9 EventDisable
	func_568(); // 0x1db NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x1dd PushV
	var_12_object = var_7_object; // 0x1de Mov
	func_591(var_12_object); // 0x1df NEW_2
	EventEnable(0); // 0x1e1 EventEnable
	var_25_object = Obj(); // 0x1e2 PushV
	var_25_object = var_7_object; // 0x1e3 Mov
	func_272(var_25_object); // 0x1e4 NEW_2
	var_260_string = ""; // 0x1e6 PushV
	var_260_string = "Neutral"; // 0x1e7 MovS
	func_828(var_260_string); // 0x1e8 NEW_2
	func_386(); // 0x1eb NEW_2
	func_377(); // 0x1ee NEW_2
	
Label_496:
	return 2; // 0x1f0 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_321(var_6_bool); // 0x119 NEW_2
	return 0; // 0x11b Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_605(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_972(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_970(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_974(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_976(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_953(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_881(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_690(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_252_bool = var_36_bool == 0; // 0x3f Not
	if(var_252_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_253_object = Obj(); // 0x46 PushV
	var_253_object = var_27_object; // 0x47 Mov
	func_673(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_897(var_219_int, var_220_string)
{
	var_221_int = 0; var_222_int = 0; // 0x381 PushV
	GetVariable(var_220_string, var_222_int); // 0x382 Func
	var_219_int = var_222_int; // 0x384 Mov
	return 2; // 0x385 Return
}


func_386()
{
	var_261_int = 10; // 0x182 PushI
	KillTimer(var_261_int); // 0x183 Func
	return 0; // 0x185 Return
}


func_902(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x386 PushV
	GetGameTime(var_154_float); // 0x387 Func
	var_155_int = 1; // 0x389 PushI
	var_156_int = 0; // 0x38a PushV
	var_157_int = 24; // 0x38b PushI
	var_156_int = var_154_float / var_154_float; // 0x38c Div2
	var_152_int = var_155_int + var_156_int; // 0x38d Add2
	return 2; // 0x38e Return
}


func_911(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x38f PushV
	var_34_string = "idle"; // 0x390 MovS
	var_35_int = var_32_int; // 0x391 Push
	if(var_35_int == 0) goto Label_916; // 0x392 JumpB
	var_34_string = var_34_string + var_32_int; // 0x393 Add2
	
Label_916:
	var_31_string = var_34_string; // 0x394 Mov
	return 2; // 0x395 Return
}


func_272(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x111 PushV
	var_27_object = var_25_object; // 0x112 Mov
	TaskCall(0); // 0x113 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x114 NEW_2
	TaskReturn(); // 0x115 TaskReturn
	return 0; // 0x117 Return
}


func_785(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x311 PushV
	var_151_string = "d"; // 0x312 PushS
	var_152_int = 0; // 0x313 PushV
	func_902(var_152_int); // 0x314 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x316 Add
	var_159_string = "m"; // 0x317 PushS
	var_146_string = var_158_int + var_159_string; // 0x318 Add2
	var_147_int = 0; // 0x319 MovI
	
Label_794:
	var_160_int = 1; // 0x31a PushI
	if(var_160_int == 0) goto Label_807; // 0x31b JumpB
	var_161_int = 1; // 0x31c PushI
	var_162_int = var_147_int + var_161_int; // 0x31d Add
	var_163_int = var_146_string + var_162_int; // 0x31e Add
	HasProperty(var_163_int, var_148_bool); // 0x31f ObjFunc
	var_164_bool = var_148_bool == 0; // 0x321 Not
	if(var_164_bool == 0) goto Label_804; // 0x322 JumpB
	goto Label_807; // 0x323 Jump
	
Label_807:
	var_165_bool = var_147_int == 0; // 0x327 Not
	if(var_165_bool == 0) goto Label_811; // 0x328 JumpB
	var_139_bool = 0; // 0x329 MovB
	return 10; // 0x32a Return
	
Label_811:
	var_149_int = 0; // 0x32b MovI
	var_166_int = 1; // 0x32c PushI
	var_167_bool = var_147_int > var_166_int; // 0x32d GT
	if(var_167_bool == 0) goto Label_817; // 0x32e JumpB
	irand(var_149_int, var_147_int); // 0x32f Func
	
Label_817:
	var_168_int = 1; // 0x331 PushI
	var_169_int = var_149_int + var_168_int; // 0x332 Add
	var_170_int = var_146_string + var_169_int; // 0x333 Add
	GetProperty(var_170_int, var_150_string); // 0x334 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x336 PushV
	var_172_string = var_150_string; // 0x337 Mov
	func_859(var_171_bool, var_172_string); // 0x338 NEW_2
	var_139_bool = var_171_bool; // 0x339 Mov
	return 10; // 0x33b Return
	
Label_804:
	var_173_int = 1; // 0x324 PushI
	var_147_int = var_147_int + var_173_int; // 0x325 Add2
	goto Label_794; // 0x326 Jump
}


func_149(var_2_object, var_199_string)
{
	var_200_bool = 0; // 0x96 PushV
	func_978(var_200_bool); // 0x97 NEW_2
	var_201_bool = var_200_bool == 0; // 0x99 Not
	if(var_201_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_202_bool = var_199_string == var_2_object; // 0x9c Eq
	if(var_202_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_203_string = ""; var_204_bool = 0; // 0x9f PushV
	var_203_string = var_199_string; // 0xa0 Mov
	var_205_string = ""; // 0xa1 PushS
	var_206_bool = var_199_string == var_205_string; // 0xa2 Eq
	if(var_206_bool == 0) goto Label_166; // 0xa3 JumpB
	var_204_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_844(var_203_string, var_204_bool); // 0xa7 NEW_2
	var_2_object = var_199_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_204_bool = 1; // 0xa6 MovB
}


func_918(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x396 PushV
	var_28_int = 0; // 0x397 MovI
	
Label_920:
	var_30_string = "all"; // 0x398 PushS
	var_31_string = ""; var_32_int = 0; // 0x399 PushV
	var_32_int = var_28_int; // 0x39a Mov
	func_911(var_31_string, var_32_int); // 0x39b NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x39d Func
	var_36_bool = var_29_bool == 0; // 0x39f Not
	if(var_36_bool == 0) goto Label_930; // 0x3a0 JumpB
	goto Label_933; // 0x3a1 Jump
	
Label_933:
	var_25_int = var_28_int; // 0x3a5 Mov
	return 4; // 0x3a6 Return
	
Label_930:
	var_37_int = 1; // 0x3a2 PushI
	var_28_int = var_28_int + var_37_int; // 0x3a3 Add2
	goto Label_920; // 0x3a4 Jump
}


func_673()
{
	var_254_bool = 0; var_255_bool = 0; // 0x2a1 PushV
	CameraSwitchToNormal(); // 0x2a2 Func
	var_256_bool = 0; // 0x2a4 PushV
	func_978(var_256_bool); // 0x2a5 NEW_2
	if(var_256_bool == 0) goto Label_681; // 0x2a7 JumpB
	goto Label_689; // 0x2a8 Jump
	
Label_689:
	return 2; // 0x2b1 Return
	
Label_681:
	var_257_string = "head"; // 0x2a9 PushS
	HasAnimationTrack(var_255_bool, var_257_string); // 0x2aa Func
	var_258_bool = var_255_bool; // 0x2ac Push
	if(var_258_bool == 0) goto Label_689; // 0x2ad JumpB
	var_259_string = "head"; // 0x2ae PushS
	UnlookAsync(var_259_string); // 0x2af Func
}


func_935()
{
	var_15_string = "ook11Andrei1"; // 0x3a8 PushS
	var_16_int = 1; // 0x3a9 PushI
	SetVariable(var_15_string, var_16_int); // 0x3aa Func
	return 0; // 0x3ac Return
}


func_428()
{
	func_568(); // 0x1ad NEW_2
	func_386(); // 0x1b0 NEW_2
	lshStopSpeech(); // 0x1b2 Func
	lshStopAnimation(); // 0x1b4 Func
	StopAsync(); // 0x1b6 Func
	Hold(); // 0x1b8 Func
	return 0; // 0x1ba Return
}


func_941(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x3ae PushV
	var_220_string = "ook11Andrei1"; // 0x3af MovS
	func_897(var_219_int, var_220_string); // 0x3b0 NEW_2
	var_223_int = 0; // 0x3b2 PushI
	var_224_bool = var_219_int == var_223_int; // 0x3b3 Eq
	if(var_224_bool == 0) goto Label_951; // 0x3b4 JumpB
	var_217_bool = 1; // 0x3b5 MovB
	return 0; // 0x3b6 Return
	
Label_951:
	var_217_bool = 0; // 0x3b7 MovB
	return 0; // 0x3b8 Return
}


func_690(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x2b2 PushV
	var_106_string = "voice_common"; // 0x2b3 PushS
	GetVariable(var_106_string, var_104_int); // 0x2b4 Func
	var_107_int = var_104_int; // 0x2b6 Push
	if(var_107_int == 0) goto Label_728; // 0x2b7 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x2b8 PushV
	var_109_object = var_98_object; // 0x2b9 Mov
	func_748(var_109_object); // 0x2ba NEW_2
	var_138_bool = var_108_bool == 0; // 0x2bc Not
	if(var_138_bool == 0) goto Label_710; // 0x2bd JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x2be PushV
	var_140_object = var_98_object; // 0x2bf Mov
	func_785(var_140_object); // 0x2c0 NEW_2
	var_174_bool = var_139_bool == 0; // 0x2c2 Not
	if(var_174_bool == 0) goto Label_710; // 0x2c3 JumpB
	var_97_bool = 0; // 0x2c4 MovB
	return 4; // 0x2c5 Return
	
Label_710:
	var_175_int = 2; // 0x2c6 PushI
	irand(var_105_int, var_175_int); // 0x2c7 Func
	var_176_int = var_105_int; // 0x2c9 Push
	if(var_176_int == 0) goto Label_723; // 0x2ca JumpB
	var_177_string = "voice_common"; // 0x2cb PushS
	var_178_int = 1; // 0x2cc PushI
	var_179_int = var_104_int + var_178_int; // 0x2cd Add
	var_180_int = 3; // 0x2ce PushI
	var_181_int = var_179_int / var_180_int; // 0x2cf Mod
	SetVariable(var_177_string, var_181_int); // 0x2d0 Func
	goto Label_727; // 0x2d2 Jump
	
Label_727:
	goto Label_746; // 0x2d7 Jump
	
Label_746:
	var_97_bool = 1; // 0x2ea MovB
	return 4; // 0x2eb Return
	
Label_723:
	var_182_string = "voice_common"; // 0x2d3 PushS
	var_183_int = 0; // 0x2d4 PushI
	SetVariable(var_182_string, var_183_int); // 0x2d5 Func
	
Label_728:
	var_184_bool = 0; var_185_object = Obj(); // 0x2d8 PushV
	var_185_object = var_98_object; // 0x2d9 Mov
	func_785(var_185_object); // 0x2da NEW_2
	var_186_bool = var_184_bool == 0; // 0x2dc Not
	if(var_186_bool == 0) goto Label_742; // 0x2dd JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x2de PushV
	var_188_object = var_98_object; // 0x2df Mov
	func_748(var_188_object); // 0x2e0 NEW_2
	var_189_bool = var_187_bool == 0; // 0x2e2 Not
	if(var_189_bool == 0) goto Label_742; // 0x2e3 JumpB
	var_97_bool = 0; // 0x2e4 MovB
	return 4; // 0x2e5 Return
	
Label_742:
	var_190_string = "voice_common"; // 0x2e6 PushS
	var_191_int = 1; // 0x2e7 PushI
	SetVariable(var_190_string, var_191_int); // 0x2e8 Func
}


func_566(var_45_bool)
{
	var_45_bool = 1; // 0x236 MovB
	return 0; // 0x237 Return
}


func_568()
{
	StopAnimation(); // 0x238 Func
	StopGroup0(); // 0x23a Func
	return 0; // 0x23c Return
}


func_953(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x3b9 PushV
	var_91_string = "branch"; // 0x3ba PushS
	GetVariable(var_91_string, var_90_int); // 0x3bb Func
	var_92_int = 0; // 0x3bd PushI
	var_93_bool = var_90_int == var_92_int; // 0x3be Eq
	if(var_93_bool == 0) goto Label_963; // 0x3bf JumpB
	var_88_int = 1; // 0x3c0 MovI
	return 2; // 0x3c1 Return
	
Label_963:
	var_94_int = 1; // 0x3c3 PushI
	var_95_bool = var_90_int == var_94_int; // 0x3c4 Eq
	if(var_95_bool == 0) goto Label_968; // 0x3c5 JumpB
	var_88_int = 2; // 0x3c6 MovI
	return 2; // 0x3c7 Return
	
Label_968:
	var_88_int = 3; // 0x3c8 MovI
	return 2; // 0x3c9 Return
}


func_443()
{
	StopGroup0(); // 0x1bb Func
	func_386(); // 0x1be NEW_2
	var_8_string = ""; // 0x1c0 PushV
	var_8_string = "Neutral"; // 0x1c1 MovS
	func_828(var_8_string); // 0x1c2 NEW_2
	func_377(); // 0x1c5 NEW_2
	return 0; // 0x1c7 Return
}


func_828(var_236_string)
{
	var_237_bool = 0; var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_float = 0; var_242_float = 0; // 0x33c PushV
	lshHasAnimation(var_240_bool, var_236_string); // 0x33d Func
	var_243_bool = var_240_bool; // 0x33f Push
	if(var_243_bool == 0) goto Label_839; // 0x340 JumpB
	lshGetAnimTimes(var_236_string, var_241_float, var_242_float); // 0x341 Func
	var_244_bool = 0; // 0x343 PushB
	lshPlayAnimation(var_241_float, var_242_float, var_244_bool); // 0x344 Func
	goto Label_843; // 0x346 Jump
	
Label_843:
	return 6; // 0x34b Return
	
Label_839:
	var_245_string = "Can't find lsh animation : "; // 0x347 PushS
	var_246_int = var_245_string + var_236_string; // 0x348 Add
	Trace(var_246_int); // 0x349 Func
}


func_573(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x23d PushV
	GetPosition(var_27_cvector); // 0x23e Func
	GetPosition(var_28_cvector); // 0x240 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x242 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x243 Or2
	return 6; // 0x244 Return
}


func_321(var_0_object)
{
	var_7_bool = 0; // 0x141 PushV
	func_600(var_7_bool); // 0x142 NEW_2
	var_10_bool = var_7_bool == 0; // 0x144 Not
	if(var_10_bool == 0) goto Label_328; // 0x145 JumpB
	Hold(); // 0x146 Func
	
Label_328:
	GetDirection(var_0_object); // 0x148 Func
	
Label_330:
	func_497(); // 0x14b NEW_2
	goto Label_330; // 0x14d Jump
}


func_581(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x245 PushV
	GetPosition(var_20_cvector); // 0x246 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x248 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x249 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x24a PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x24b Func
	var_15_bool = var_22_bool; // 0x24d Mov
	return 6; // 0x24e Return
}


func_970(var_85_int)
{
	var_85_int = 515529; // 0x3ca MovI
	return 0; // 0x3cb Return
}


func_972(var_84_int)
{
	var_84_int = 502855; // 0x3cc MovI
	return 0; // 0x3cd Return
}


func_844(var_203_string, var_204_bool)
{
	var_207_bool = 0; var_208_float = 0; var_209_float = 0; var_210_bool = 0; var_211_float = 0; var_212_float = 0; // 0x34c PushV
	lshHasAnimation(var_210_bool, var_203_string); // 0x34d Func
	var_213_bool = var_210_bool; // 0x34f Push
	if(var_213_bool == 0) goto Label_854; // 0x350 JumpB
	lshGetAnimTimes(var_203_string, var_211_float, var_212_float); // 0x351 Func
	lshPlayAnimation(var_211_float, var_212_float, var_204_bool); // 0x353 Func
	goto Label_858; // 0x355 Jump
	
Label_858:
	return 6; // 0x35a Return
	
Label_854:
	var_214_string = "Can't find lsh animation : "; // 0x356 PushS
	var_215_int = var_214_string + var_203_string; // 0x357 Add
	Trace(var_215_int); // 0x358 Func
}


func_974(var_86_string)
{
	var_86_string = "ui/NPC_Andrei.png"; // 0x3ce MovS
	return 0; // 0x3cf Return
}


func_591(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x24f PushV
	GetPosition(var_14_cvector); // 0x250 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x252 PushV
	var_16_cvector = var_14_cvector; // 0x253 Mov
	func_581(var_15_bool, var_16_cvector); // 0x254 NEW_2
	var_11_bool = var_15_bool; // 0x255 Mov
	return 2; // 0x257 Return
}


func_976(var_87_string)
{
	var_87_string = "ui/NPC_Andrei_b.png"; // 0x3d0 MovS
	return 0; // 0x3d1 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_119; // 0x56 JumpB
	var_199_string = ""; // 0x57 PushV
	var_199_string = "Untrust"; // 0x58 MovS
	func_149(var_193_object, var_199_string); // 0x59 NEW_2
	var_216_int = 528036; // 0x5b PushI
	SetMessage(var_216_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_217_bool = 0; var_218_object = Obj(); // 0x60 PushV
	var_218_object = var_1_object; // 0x61 MovT
	func_941(var_218_object); // 0x62 NEW_2
	if(var_217_bool == 0) goto Label_106; // 0x64 JumpB
	var_225_int = 528037; // 0x65 PushI
	var_226_int = 29400; // 0x66 PushI
	var_227_int = 29399; // 0x67 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x68 TObjFunc
	
Label_106:
	var_228_int = 528040; // 0x6a PushI
	var_229_int = -1; // 0x6b PushI
	var_230_int = 29402; // 0x6c PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x6d TObjFunc
	var_231_int = 541066; // 0x6f PushI
	var_232_int = -1; // 0x70 PushI
	var_233_int = 43171; // 0x71 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_234_bool = 0; // 0x77 PushV
	func_978(var_234_bool); // 0x78 NEW_2
	if(var_234_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_235_string = var_3_string; // 0x7d PushT
	if(var_235_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_236_string = ""; // 0x80 PushV
	var_236_string = var_2_object; // 0x81 MovT
	func_828(var_236_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_247_string = "all"; // 0x86 PushS
	var_248_string = "idle"; // 0x87 PushS
	PlayAnimation(var_247_string, var_248_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_249_string = var_3_string; // 0x8c PushT
	if(var_249_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_250_string = "all"; // 0x8f PushS
	var_251_string = "idle"; // 0x90 PushS
	PlayAnimation(var_250_string, var_251_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_978(var_79_bool)
{
	var_79_bool = 1; // 0x3d2 MovB
	return 0; // 0x3d3 Return
}


func_335(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x14f PushV
	var_35_string = "player"; // 0x150 PushS
	FindActor(var_34_object, var_35_string); // 0x151 Func
	var_36_bool = var_34_object == 0; // 0x153 Not
	if(var_36_bool == 0) goto Label_343; // 0x154 JumpB
	var_32_bool = 0; // 0x155 MovB
	return 2; // 0x156 Return
	
Label_343:
	var_37_bool = 0; var_38_object = Obj(); // 0x157 PushV
	var_38_object = var_34_object; // 0x158 Mov
	func_591(var_38_object); // 0x159 NEW_2
	var_32_bool = var_37_bool; // 0x15a Mov
	return 2; // 0x15c Return
}


func_600(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x258 PushV
	IsLoaded(var_9_bool); // 0x259 Func
	var_7_bool = var_9_bool; // 0x25b Mov
	return 2; // 0x25c Return
}


func_859(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x35b PushV
	var_135_bool = 0; // 0x35c PushV
	func_978(var_135_bool); // 0x35d NEW_2
	if(var_135_bool == 0) goto Label_872; // 0x35f JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x360 Func
	var_136_bool = var_134_bool; // 0x362 Push
	if(var_136_bool == 0) goto Label_872; // 0x363 JumpB
	lshPlaySpeech(var_132_string); // 0x364 Func
	var_131_bool = 1; // 0x366 MovB
	return 2; // 0x367 Return
	
Label_872:
	var_131_bool = 0; // 0x368 MovB
	return 2; // 0x369 Return
}


func_605(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x25d PushV
	GetPosition(var_50_cvector); // 0x25e ObjFunc
	GetEyesHeight(var_49_float); // 0x260 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x262 PushE
	var_58_float = var_58_float + var_49_float; // 0x263 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x264 PopE
	GetPosition(var_51_cvector); // 0x265 Func
	GetEyesHeight(var_49_float); // 0x267 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x269 PushE
	var_59_float = var_59_float + var_49_float; // 0x26a Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x26b PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x26c Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x26d PushE
	var_60_float = 0; // 0x26e MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x26f PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x270 Or
	var_62_float = sqrt(var_61_int); // 0x271 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x272 Div2
	var_53_cvector = -var_52_cvector; // 0x273 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x274 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x275 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x276 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x277 Xor2
	func_887(var_64_cvector, var_65_cvector); // 0x278 NEW_2
	var_72_int = 25; // 0x27a PushI
	var_73_float = var_64_cvector * var_72_int; // 0x27b Mult
	var_74_int = var_63_float + var_73_float; // 0x27c Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x27d PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x27e Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x27f Add2
	IsOverrideActive(var_56_bool); // 0x280 Func
	var_76_bool = var_56_bool; // 0x282 Push
	if(var_76_bool == 0) goto Label_646; // 0x283 JumpB
	var_37_bool = 0; // 0x284 MovB
	return 18; // 0x285 Return
	
Label_646:
	StopWorld(); // 0x286 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x288 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x28a PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x28b PushE
	Rotate(var_77_float, var_78_float); // 0x28c Func
	var_79_bool = 0; // 0x28e PushV
	func_978(var_79_bool); // 0x28f NEW_2
	if(var_79_bool == 0) goto Label_659; // 0x291 JumpB
	goto Label_667; // 0x292 Jump
	
Label_667:
	CameraWaitForPlayFinish(); // 0x29b Func
	ResumeWorld(); // 0x29d Func
	var_37_bool = 1; // 0x29f MovB
	return 18; // 0x2a0 Return
	
Label_659:
	var_80_string = "head"; // 0x293 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x294 Func
	var_81_bool = var_57_bool; // 0x296 Push
	if(var_81_bool == 0) goto Label_667; // 0x297 JumpB
	var_82_string = "head"; // 0x298 PushS
	LookAsyncCamera(var_82_string); // 0x299 Func
}


func_350(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x15e PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x15f PushE
	RotateAsync(var_84_float, var_85_float); // 0x160 Func
	return 0; // 0x162 Return
}


func_355(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x163 PushV
	var_20_string = "player"; // 0x164 PushS
	FindActor(var_18_object, var_20_string); // 0x165 Func
	var_21_bool = var_18_object == 0; // 0x167 Not
	if(var_21_bool == 0) goto Label_363; // 0x168 JumpB
	var_15_bool = 0; // 0x169 MovB
	return 4; // 0x16a Return
	
Label_363:
	var_22_float = 0; var_23_object = Obj(); // 0x16b PushV
	var_23_object = var_18_object; // 0x16c Mov
	func_573(var_23_object); // 0x16d NEW_2
	var_30_float = 90000.0; // 0x16f PushF
	var_31_bool = var_22_float > var_30_float; // 0x170 GT
	if(var_31_bool == 0) goto Label_372; // 0x171 JumpB
	var_15_bool = 0; // 0x172 MovB
	return 4; // 0x173 Return
	
Label_372:
	CanSee(var_19_bool, var_18_object); // 0x174 Func
	var_15_bool = var_19_bool; // 0x176 Mov
	return 4; // 0x177 Return
}


func_874()
{
	var_10_bool = 0; // 0x36a PushV
	func_978(var_10_bool); // 0x36b NEW_2
	if(var_10_bool == 0) goto Label_880; // 0x36d JumpB
	lshStopSpeech(); // 0x36e Func
	
Label_880:
	return 0; // 0x370 Return
}


func_748(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x2ec PushV
	var_115_string = "c"; // 0x2ed MovS
	var_116_int = 0; // 0x2ee MovI
	
Label_751:
	var_120_int = 1; // 0x2ef PushI
	if(var_120_int == 0) goto Label_764; // 0x2f0 JumpB
	var_121_int = 1; // 0x2f1 PushI
	var_122_int = var_116_int + var_121_int; // 0x2f2 Add
	var_123_int = var_115_string + var_122_int; // 0x2f3 Add
	HasProperty(var_123_int, var_117_bool); // 0x2f4 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x2f6 Not
	if(var_124_bool == 0) goto Label_761; // 0x2f7 JumpB
	goto Label_764; // 0x2f8 Jump
	
Label_764:
	var_125_bool = var_116_int == 0; // 0x2fc Not
	if(var_125_bool == 0) goto Label_768; // 0x2fd JumpB
	var_108_bool = 0; // 0x2fe MovB
	return 10; // 0x2ff Return
	
Label_768:
	var_118_int = 0; // 0x300 MovI
	var_126_int = 1; // 0x301 PushI
	var_127_bool = var_116_int > var_126_int; // 0x302 GT
	if(var_127_bool == 0) goto Label_774; // 0x303 JumpB
	irand(var_118_int, var_116_int); // 0x304 Func
	
Label_774:
	var_128_int = 1; // 0x306 PushI
	var_129_int = var_118_int + var_128_int; // 0x307 Add
	var_130_int = var_115_string + var_129_int; // 0x308 Add
	GetProperty(var_130_int, var_119_string); // 0x309 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x30b PushV
	var_132_string = var_119_string; // 0x30c Mov
	func_859(var_131_bool, var_132_string); // 0x30d NEW_2
	var_108_bool = var_131_bool; // 0x30e Mov
	return 10; // 0x310 Return
	
Label_761:
	var_137_int = 1; // 0x2f9 PushI
	var_116_int = var_116_int + var_137_int; // 0x2fa Add2
	goto Label_751; // 0x2fb Jump
}


func_881(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x371 PushV
	self(var_101_object); // 0x372 Func
	var_99_object = var_101_object; // 0x374 Mov
	return 2; // 0x375 Return
}


func_497()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x1f1 PushV
	WaitForAnimEnd(); // 0x1f2 Func
	var_23_bool = 0; // 0x1f4 PushV
	func_600(var_23_bool); // 0x1f5 NEW_2
	var_24_bool = var_23_bool == 0; // 0x1f7 Not
	if(var_24_bool == 0) goto Label_506; // 0x1f8 JumpB
	return 12; // 0x1f9 Return
	
Label_506:
	var_25_int = 0; // 0x1fa PushV
	func_918(var_25_int); // 0x1fb NEW_2
	var_17_int = var_25_int; // 0x1fc Mov
	var_18_int = 0; // 0x1fe MovI
	
Label_511:
	var_38_bool = 0; // 0x1ff PushV
	var_38_bool = 0; // 0x200 MovB
	var_39_int = 5; // 0x201 PushI
	var_40_bool = var_18_int < var_39_int; // 0x202 LT
	if(var_40_bool == 0) goto Label_521; // 0x203 JumpB
	var_41_bool = 0; // 0x204 PushV
	func_600(var_41_bool); // 0x205 NEW_2
	if(var_41_bool == 0) goto Label_521; // 0x207 JumpB
	var_38_bool = 1; // 0x208 MovB
	
Label_521:
	if(var_38_bool == 0) goto Label_563; // 0x209 JumpB
	var_42_bool = var_17_int == 0; // 0x20a Not
	if(var_42_bool == 0) goto Label_531; // 0x20b JumpB
	var_43_int = 3; // 0x20c PushI
	Sleep(var_43_int, var_19_bool); // 0x20d Func
	var_44_bool = var_19_bool == 0; // 0x20f Not
	if(var_44_bool == 0) goto Label_530; // 0x210 JumpB
	goto Label_563; // 0x211 Jump
	
Label_563:
	ResetAAS(); // 0x233 Func
	return 12; // 0x235 Return
	
Label_530:
	goto Label_552; // 0x212 Jump
	
Label_552:
	var_45_bool = 0; // 0x228 PushV
	func_566(var_45_bool); // 0x229 NEW_2
	var_46_bool = var_45_bool == 0; // 0x22b Not
	if(var_46_bool == 0) goto Label_558; // 0x22c JumpB
	goto Label_563; // 0x22d Jump
	
Label_558:
	ResetAAS(); // 0x22e Func
	var_47_int = 1; // 0x230 PushI
	var_18_int = var_18_int + var_47_int; // 0x231 Add2
	goto Label_511; // 0x232 Jump
	
Label_531:
	irand(var_20_int, var_17_int); // 0x213 Func
	var_48_int = 5; // 0x215 PushI
	irand(var_21_int, var_48_int); // 0x216 Func
	var_49_int = 0; // 0x218 PushI
	var_50_bool = var_21_int != var_49_int; // 0x219 Neq
	if(var_50_bool == 0) goto Label_540; // 0x21a JumpB
	var_20_int = 0; // 0x21b MovI
	
Label_540:
	var_51_string = "all"; // 0x21c PushS
	var_52_string = ""; var_53_int = 0; // 0x21d PushV
	var_53_int = var_20_int; // 0x21e Mov
	func_911(var_52_string, var_53_int); // 0x21f NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x221 Func
	WaitForAnimEnd(var_22_bool); // 0x223 Func
	var_54_bool = var_22_bool == 0; // 0x225 Not
	if(var_54_bool == 0) goto Label_552; // 0x226 JumpB
	goto Label_563; // 0x227 Jump
}


func_887(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x377 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x378 Or
	var_68_float = sqrt(var_69_int); // 0x379 Sqrt2
	var_70_float = 0.0; // 0x37a PushF
	var_71_bool = var_68_float < var_70_float; // 0x37b LT
	if(var_71_bool == 0) goto Label_895; // 0x37c JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x37d MovV
	return 2; // 0x37e Return
	
Label_895:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x37f Div2
	return 2; // 0x380 Return
}


func_377()
{
	var_262_float = 0; var_263_float = 0; // 0x179 PushV
	var_264_int = 8; // 0x17a PushI
	var_265_int = 16; // 0x17b PushI
	rand(var_263_float, var_264_int, var_265_int); // 0x17c Func
	var_266_int = 10; // 0x17e PushI
	SetTimer(var_266_int, var_263_float); // 0x17f Func
	return 2; // 0x181 Return
}


