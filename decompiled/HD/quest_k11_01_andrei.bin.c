task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xac PushI
	if(var_9_int == 0) goto Label_271; // 0xad JumpB
	func_876(); // 0xaf NEW_2
	var_11_int = 29399; // 0xb1 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xb2 Eq
	if(var_12_bool == 0) goto Label_185; // 0xb3 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xb4 PushV
	var_13_object = var_1_object; // 0xb5 MovT
	var_14_object = var_0_object; // 0xb6 MovT
	func_937(); // 0xb7 NEW_2
	
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
	func_943(var_38_object); // 0xc7 NEW_2
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
	func_980(var_71_bool); // 0x105 NEW_2
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
	func_883(var_13_object); // 0x126 NEW_2
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
	func_883(var_8_object); // 0x133 NEW_2
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
	func_883(var_53_object); // 0x19f NEW_2
	var_52_object = var_53_object; // 0x1a0 Mov
	func_750(var_52_object); // 0x1a2 NEW_2
	
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
	func_830(var_14_string); // 0x1d1 NEW_2
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
	var_262_string = ""; // 0x1e6 PushV
	var_262_string = "Neutral"; // 0x1e7 MovS
	func_830(var_262_string); // 0x1e8 NEW_2
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
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_974(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_972(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_976(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_978(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_955(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_883(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_692(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_253_bool = var_36_bool == 0; // 0x3f Not
	if(var_253_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_254_object = Obj(); // 0x46 PushV
	var_254_object = var_27_object; // 0x47 Mov
	func_674(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_386()
{
	var_263_int = 10; // 0x182 PushI
	KillTimer(var_263_int); // 0x183 Func
	return 0; // 0x185 Return
}


func_899(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0; // 0x383 PushV
	GetVariable(var_221_string, var_223_int); // 0x384 Func
	var_220_int = var_223_int; // 0x386 Mov
	return 2; // 0x387 Return
}


func_904(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x388 PushV
	GetGameTime(var_155_float); // 0x389 Func
	var_156_int = 1; // 0x38b PushI
	var_157_int = 0; // 0x38c PushV
	var_158_int = 24; // 0x38d PushI
	var_157_int = var_155_float / var_155_float; // 0x38e Div2
	var_153_int = var_156_int + var_157_int; // 0x38f Add2
	return 2; // 0x390 Return
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


func_913(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x391 PushV
	var_34_string = "idle"; // 0x392 MovS
	var_35_int = var_32_int; // 0x393 Push
	if(var_35_int == 0) goto Label_918; // 0x394 JumpB
	var_34_string = var_34_string + var_32_int; // 0x395 Add2
	
Label_918:
	var_31_string = var_34_string; // 0x396 Mov
	return 2; // 0x397 Return
}


func_787(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x313 PushV
	var_152_string = "d"; // 0x314 PushS
	var_153_int = 0; // 0x315 PushV
	func_904(var_153_int); // 0x316 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x318 Add
	var_160_string = "m"; // 0x319 PushS
	var_147_string = var_159_int + var_160_string; // 0x31a Add2
	var_148_int = 0; // 0x31b MovI
	
Label_796:
	var_161_int = 1; // 0x31c PushI
	if(var_161_int == 0) goto Label_809; // 0x31d JumpB
	var_162_int = 1; // 0x31e PushI
	var_163_int = var_148_int + var_162_int; // 0x31f Add
	var_164_int = var_147_string + var_163_int; // 0x320 Add
	HasProperty(var_164_int, var_149_bool); // 0x321 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x323 Not
	if(var_165_bool == 0) goto Label_806; // 0x324 JumpB
	goto Label_809; // 0x325 Jump
	
Label_809:
	var_166_bool = var_148_int == 0; // 0x329 Not
	if(var_166_bool == 0) goto Label_813; // 0x32a JumpB
	var_140_bool = 0; // 0x32b MovB
	return 10; // 0x32c Return
	
Label_813:
	var_150_int = 0; // 0x32d MovI
	var_167_int = 1; // 0x32e PushI
	var_168_bool = var_148_int > var_167_int; // 0x32f GT
	if(var_168_bool == 0) goto Label_819; // 0x330 JumpB
	irand(var_150_int, var_148_int); // 0x331 Func
	
Label_819:
	var_169_int = 1; // 0x333 PushI
	var_170_int = var_150_int + var_169_int; // 0x334 Add
	var_171_int = var_147_string + var_170_int; // 0x335 Add
	GetProperty(var_171_int, var_151_string); // 0x336 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x338 PushV
	var_173_string = var_151_string; // 0x339 Mov
	func_861(var_172_bool, var_173_string); // 0x33a NEW_2
	var_140_bool = var_172_bool; // 0x33b Mov
	return 10; // 0x33d Return
	
Label_806:
	var_174_int = 1; // 0x326 PushI
	var_148_int = var_148_int + var_174_int; // 0x327 Add2
	goto Label_796; // 0x328 Jump
}


func_149(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0x96 PushV
	func_980(var_201_bool); // 0x97 NEW_2
	var_202_bool = var_201_bool == 0; // 0x99 Not
	if(var_202_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_203_bool = var_200_string == var_2_object; // 0x9c Eq
	if(var_203_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_204_string = ""; var_205_bool = 0; // 0x9f PushV
	var_204_string = var_200_string; // 0xa0 Mov
	var_206_string = ""; // 0xa1 PushS
	var_207_bool = var_200_string == var_206_string; // 0xa2 Eq
	if(var_207_bool == 0) goto Label_166; // 0xa3 JumpB
	var_205_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_846(var_204_string, var_205_bool); // 0xa7 NEW_2
	var_2_object = var_200_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_205_bool = 1; // 0xa6 MovB
}


func_920(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x398 PushV
	var_28_int = 0; // 0x399 MovI
	
Label_922:
	var_30_string = "all"; // 0x39a PushS
	var_31_string = ""; var_32_int = 0; // 0x39b PushV
	var_32_int = var_28_int; // 0x39c Mov
	func_913(var_31_string, var_32_int); // 0x39d NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x39f Func
	var_36_bool = var_29_bool == 0; // 0x3a1 Not
	if(var_36_bool == 0) goto Label_932; // 0x3a2 JumpB
	goto Label_935; // 0x3a3 Jump
	
Label_935:
	var_25_int = var_28_int; // 0x3a7 Mov
	return 4; // 0x3a8 Return
	
Label_932:
	var_37_int = 1; // 0x3a4 PushI
	var_28_int = var_28_int + var_37_int; // 0x3a5 Add2
	goto Label_922; // 0x3a6 Jump
}


func_674()
{
	var_255_bool = 0; var_256_bool = 0; // 0x2a2 PushV
	var_257_bool = 1; // 0x2a3 PushB
	CameraSwitchToNormal(var_257_bool); // 0x2a4 Func
	var_258_bool = 0; // 0x2a6 PushV
	func_980(var_258_bool); // 0x2a7 NEW_2
	if(var_258_bool == 0) goto Label_683; // 0x2a9 JumpB
	goto Label_691; // 0x2aa Jump
	
Label_691:
	return 2; // 0x2b3 Return
	
Label_683:
	var_259_string = "head"; // 0x2ab PushS
	HasAnimationTrack(var_256_bool, var_259_string); // 0x2ac Func
	var_260_bool = var_256_bool; // 0x2ae Push
	if(var_260_bool == 0) goto Label_691; // 0x2af JumpB
	var_261_string = "head"; // 0x2b0 PushS
	UnlookAsync(var_261_string); // 0x2b1 Func
}


func_937()
{
	var_15_string = "ook11Andrei1"; // 0x3aa PushS
	var_16_int = 1; // 0x3ab PushI
	SetVariable(var_15_string, var_16_int); // 0x3ac Func
	return 0; // 0x3ae Return
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


func_943(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x3b0 PushV
	var_221_string = "ook11Andrei1"; // 0x3b1 MovS
	func_899(var_220_int, var_221_string); // 0x3b2 NEW_2
	var_224_int = 0; // 0x3b4 PushI
	var_225_bool = var_220_int == var_224_int; // 0x3b5 Eq
	if(var_225_bool == 0) goto Label_953; // 0x3b6 JumpB
	var_218_bool = 1; // 0x3b7 MovB
	return 0; // 0x3b8 Return
	
Label_953:
	var_218_bool = 0; // 0x3b9 MovB
	return 0; // 0x3ba Return
}


func_692(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x2b4 PushV
	var_107_string = "voice_common"; // 0x2b5 PushS
	GetVariable(var_107_string, var_105_int); // 0x2b6 Func
	var_108_int = var_105_int; // 0x2b8 Push
	if(var_108_int == 0) goto Label_730; // 0x2b9 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x2ba PushV
	var_110_object = var_99_object; // 0x2bb Mov
	func_750(var_110_object); // 0x2bc NEW_2
	var_139_bool = var_109_bool == 0; // 0x2be Not
	if(var_139_bool == 0) goto Label_712; // 0x2bf JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x2c0 PushV
	var_141_object = var_99_object; // 0x2c1 Mov
	func_787(var_141_object); // 0x2c2 NEW_2
	var_175_bool = var_140_bool == 0; // 0x2c4 Not
	if(var_175_bool == 0) goto Label_712; // 0x2c5 JumpB
	var_98_bool = 0; // 0x2c6 MovB
	return 4; // 0x2c7 Return
	
Label_712:
	var_176_int = 2; // 0x2c8 PushI
	irand(var_106_int, var_176_int); // 0x2c9 Func
	var_177_int = var_106_int; // 0x2cb Push
	if(var_177_int == 0) goto Label_725; // 0x2cc JumpB
	var_178_string = "voice_common"; // 0x2cd PushS
	var_179_int = 1; // 0x2ce PushI
	var_180_int = var_105_int + var_179_int; // 0x2cf Add
	var_181_int = 3; // 0x2d0 PushI
	var_182_int = var_180_int / var_181_int; // 0x2d1 Mod
	SetVariable(var_178_string, var_182_int); // 0x2d2 Func
	goto Label_729; // 0x2d4 Jump
	
Label_729:
	goto Label_748; // 0x2d9 Jump
	
Label_748:
	var_98_bool = 1; // 0x2ec MovB
	return 4; // 0x2ed Return
	
Label_725:
	var_183_string = "voice_common"; // 0x2d5 PushS
	var_184_int = 0; // 0x2d6 PushI
	SetVariable(var_183_string, var_184_int); // 0x2d7 Func
	
Label_730:
	var_185_bool = 0; var_186_object = Obj(); // 0x2da PushV
	var_186_object = var_99_object; // 0x2db Mov
	func_787(var_186_object); // 0x2dc NEW_2
	var_187_bool = var_185_bool == 0; // 0x2de Not
	if(var_187_bool == 0) goto Label_744; // 0x2df JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x2e0 PushV
	var_189_object = var_99_object; // 0x2e1 Mov
	func_750(var_189_object); // 0x2e2 NEW_2
	var_190_bool = var_188_bool == 0; // 0x2e4 Not
	if(var_190_bool == 0) goto Label_744; // 0x2e5 JumpB
	var_98_bool = 0; // 0x2e6 MovB
	return 4; // 0x2e7 Return
	
Label_744:
	var_191_string = "voice_common"; // 0x2e8 PushS
	var_192_int = 1; // 0x2e9 PushI
	SetVariable(var_191_string, var_192_int); // 0x2ea Func
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


func_443()
{
	StopGroup0(); // 0x1bb Func
	func_386(); // 0x1be NEW_2
	var_8_string = ""; // 0x1c0 PushV
	var_8_string = "Neutral"; // 0x1c1 MovS
	func_830(var_8_string); // 0x1c2 NEW_2
	func_377(); // 0x1c5 NEW_2
	return 0; // 0x1c7 Return
}


func_955(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x3bb PushV
	var_92_string = "branch"; // 0x3bc PushS
	GetVariable(var_92_string, var_91_int); // 0x3bd Func
	var_93_int = 0; // 0x3bf PushI
	var_94_bool = var_91_int == var_93_int; // 0x3c0 Eq
	if(var_94_bool == 0) goto Label_965; // 0x3c1 JumpB
	var_89_int = 1; // 0x3c2 MovI
	return 2; // 0x3c3 Return
	
Label_965:
	var_95_int = 1; // 0x3c5 PushI
	var_96_bool = var_91_int == var_95_int; // 0x3c6 Eq
	if(var_96_bool == 0) goto Label_970; // 0x3c7 JumpB
	var_89_int = 2; // 0x3c8 MovI
	return 2; // 0x3c9 Return
	
Label_970:
	var_89_int = 3; // 0x3ca MovI
	return 2; // 0x3cb Return
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


func_830(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x33e PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x33f Func
	var_244_bool = var_241_bool; // 0x341 Push
	if(var_244_bool == 0) goto Label_841; // 0x342 JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x343 Func
	var_245_bool = 0; // 0x345 PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x346 Func
	goto Label_845; // 0x348 Jump
	
Label_845:
	return 6; // 0x34d Return
	
Label_841:
	var_246_string = "Can't find lsh animation : "; // 0x349 PushS
	var_247_int = var_246_string + var_237_string; // 0x34a Add
	Trace(var_247_int); // 0x34b Func
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


func_972(var_86_int)
{
	var_86_int = 515529; // 0x3cc MovI
	return 0; // 0x3cd Return
}


func_974(var_85_int)
{
	var_85_int = 502855; // 0x3ce MovI
	return 0; // 0x3cf Return
}


func_846(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x34e PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x34f Func
	var_214_bool = var_211_bool; // 0x351 Push
	if(var_214_bool == 0) goto Label_856; // 0x352 JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x353 Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x355 Func
	goto Label_860; // 0x357 Jump
	
Label_860:
	return 6; // 0x35c Return
	
Label_856:
	var_215_string = "Can't find lsh animation : "; // 0x358 PushS
	var_216_int = var_215_string + var_204_string; // 0x359 Add
	Trace(var_216_int); // 0x35a Func
}


func_976(var_87_string)
{
	var_87_string = "ui/NPC_Andrei.png"; // 0x3d0 MovS
	return 0; // 0x3d1 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_119; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Untrust"; // 0x58 MovS
	func_149(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 528036; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x60 PushV
	var_219_object = var_1_object; // 0x61 MovT
	func_943(var_219_object); // 0x62 NEW_2
	if(var_218_bool == 0) goto Label_106; // 0x64 JumpB
	var_226_int = 528037; // 0x65 PushI
	var_227_int = 29400; // 0x66 PushI
	var_228_int = 29399; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	
Label_106:
	var_229_int = 528040; // 0x6a PushI
	var_230_int = -1; // 0x6b PushI
	var_231_int = 29402; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	var_232_int = 541066; // 0x6f PushI
	var_233_int = -1; // 0x70 PushI
	var_234_int = 43171; // 0x71 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_235_bool = 0; // 0x77 PushV
	func_980(var_235_bool); // 0x78 NEW_2
	if(var_235_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_236_string = var_3_string; // 0x7d PushT
	if(var_236_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_237_string = ""; // 0x80 PushV
	var_237_string = var_2_object; // 0x81 MovT
	func_830(var_237_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_248_string = "all"; // 0x86 PushS
	var_249_string = "idle"; // 0x87 PushS
	PlayAnimation(var_248_string, var_249_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_250_string = var_3_string; // 0x8c PushT
	if(var_250_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_251_string = "all"; // 0x8f PushS
	var_252_string = "idle"; // 0x90 PushS
	PlayAnimation(var_251_string, var_252_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_978(var_88_string)
{
	var_88_string = "ui/NPC_Andrei_b.png"; // 0x3d2 MovS
	return 0; // 0x3d3 Return
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


func_980(var_80_bool)
{
	var_80_bool = 1; // 0x3d4 MovB
	return 0; // 0x3d5 Return
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
	func_889(var_64_cvector, var_65_cvector); // 0x278 NEW_2
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
	var_77_bool = 1; // 0x288 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x289 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x28b PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x28c PushE
	Rotate(var_78_float, var_79_float); // 0x28d Func
	var_80_bool = 0; // 0x28f PushV
	func_980(var_80_bool); // 0x290 NEW_2
	if(var_80_bool == 0) goto Label_660; // 0x292 JumpB
	goto Label_668; // 0x293 Jump
	
Label_668:
	CameraWaitForPlayFinish(); // 0x29c Func
	ResumeWorld(); // 0x29e Func
	var_37_bool = 1; // 0x2a0 MovB
	return 18; // 0x2a1 Return
	
Label_660:
	var_81_string = "head"; // 0x294 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x295 Func
	var_82_bool = var_57_bool; // 0x297 Push
	if(var_82_bool == 0) goto Label_668; // 0x298 JumpB
	var_83_string = "head"; // 0x299 PushS
	LookAsyncCamera(var_83_string); // 0x29a Func
}


func_350(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x15e PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x15f PushE
	RotateAsync(var_84_float, var_85_float); // 0x160 Func
	return 0; // 0x162 Return
}


func_861(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x35d PushV
	var_136_bool = 0; // 0x35e PushV
	func_980(var_136_bool); // 0x35f NEW_2
	if(var_136_bool == 0) goto Label_874; // 0x361 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x362 Func
	var_137_bool = var_135_bool; // 0x364 Push
	if(var_137_bool == 0) goto Label_874; // 0x365 JumpB
	lshPlaySpeech(var_133_string); // 0x366 Func
	var_132_bool = 1; // 0x368 MovB
	return 2; // 0x369 Return
	
Label_874:
	var_132_bool = 0; // 0x36a MovB
	return 2; // 0x36b Return
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


func_377()
{
	var_264_float = 0; var_265_float = 0; // 0x179 PushV
	var_266_int = 8; // 0x17a PushI
	var_267_int = 16; // 0x17b PushI
	rand(var_265_float, var_266_int, var_267_int); // 0x17c Func
	var_268_int = 10; // 0x17e PushI
	SetTimer(var_268_int, var_265_float); // 0x17f Func
	return 2; // 0x181 Return
}


func_876()
{
	var_10_bool = 0; // 0x36c PushV
	func_980(var_10_bool); // 0x36d NEW_2
	if(var_10_bool == 0) goto Label_882; // 0x36f JumpB
	lshStopSpeech(); // 0x370 Func
	
Label_882:
	return 0; // 0x372 Return
}


func_750(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x2ee PushV
	var_116_string = "c"; // 0x2ef MovS
	var_117_int = 0; // 0x2f0 MovI
	
Label_753:
	var_121_int = 1; // 0x2f1 PushI
	if(var_121_int == 0) goto Label_766; // 0x2f2 JumpB
	var_122_int = 1; // 0x2f3 PushI
	var_123_int = var_117_int + var_122_int; // 0x2f4 Add
	var_124_int = var_116_string + var_123_int; // 0x2f5 Add
	HasProperty(var_124_int, var_118_bool); // 0x2f6 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x2f8 Not
	if(var_125_bool == 0) goto Label_763; // 0x2f9 JumpB
	goto Label_766; // 0x2fa Jump
	
Label_766:
	var_126_bool = var_117_int == 0; // 0x2fe Not
	if(var_126_bool == 0) goto Label_770; // 0x2ff JumpB
	var_109_bool = 0; // 0x300 MovB
	return 10; // 0x301 Return
	
Label_770:
	var_119_int = 0; // 0x302 MovI
	var_127_int = 1; // 0x303 PushI
	var_128_bool = var_117_int > var_127_int; // 0x304 GT
	if(var_128_bool == 0) goto Label_776; // 0x305 JumpB
	irand(var_119_int, var_117_int); // 0x306 Func
	
Label_776:
	var_129_int = 1; // 0x308 PushI
	var_130_int = var_119_int + var_129_int; // 0x309 Add
	var_131_int = var_116_string + var_130_int; // 0x30a Add
	GetProperty(var_131_int, var_120_string); // 0x30b ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x30d PushV
	var_133_string = var_120_string; // 0x30e Mov
	func_861(var_132_bool, var_133_string); // 0x30f NEW_2
	var_109_bool = var_132_bool; // 0x310 Mov
	return 10; // 0x312 Return
	
Label_763:
	var_138_int = 1; // 0x2fb PushI
	var_117_int = var_117_int + var_138_int; // 0x2fc Add2
	goto Label_753; // 0x2fd Jump
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
	func_920(var_25_int); // 0x1fb NEW_2
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
	func_913(var_52_string, var_53_int); // 0x21f NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x221 Func
	WaitForAnimEnd(var_22_bool); // 0x223 Func
	var_54_bool = var_22_bool == 0; // 0x225 Not
	if(var_54_bool == 0) goto Label_552; // 0x226 JumpB
	goto Label_563; // 0x227 Jump
}


func_883(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x373 PushV
	self(var_102_object); // 0x374 Func
	var_100_object = var_102_object; // 0x376 Mov
	return 2; // 0x377 Return
}


func_889(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x379 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x37a Or
	var_68_float = sqrt(var_69_int); // 0x37b Sqrt2
	var_70_float = 0.0; // 0x37c PushF
	var_71_bool = var_68_float < var_70_float; // 0x37d LT
	if(var_71_bool == 0) goto Label_897; // 0x37e JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x37f MovV
	return 2; // 0x380 Return
	
Label_897:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x381 Div2
	return 2; // 0x382 Return
}


