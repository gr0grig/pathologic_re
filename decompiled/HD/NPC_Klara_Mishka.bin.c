task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	var_18_int = 1; // 0xa2 PushI
	if(var_18_int == 0) goto Label_225; // 0xa3 JumpB
	func_1250(); // 0xa5 NEW_2
	var_20_int = 26866; // 0xa7 PushI
	var_21_bool = var_16_bool == var_20_int; // 0xa8 Eq
	if(var_21_bool == 0) goto Label_190; // 0xa9 JumpB
	var_22_string = ""; // 0xaa PushV
	var_22_string = "Neutral"; // 0xab MovS
	func_139(var_17_cvector, var_22_string); // 0xac NEW_2
	var_39_int = 525510; // 0xae PushI
	SetMessage(var_39_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_40_int = 525511; // 0xb3 PushI
	var_41_int = -1; // 0xb4 PushI
	var_42_int = 26867; // 0xb5 PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xb6 TObjFunc
	var_43_int = 529288; // 0xb8 PushI
	var_44_int = 30743; // 0xb9 PushI
	var_45_int = 30742; // 0xba PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_46_int = 30743; // 0xbe PushI
	var_47_bool = var_16_bool == var_46_int; // 0xbf Eq
	if(var_47_bool == 0) goto Label_213; // 0xc0 JumpB
	var_48_string = ""; // 0xc1 PushV
	var_48_string = "Neutral"; // 0xc2 MovS
	func_139(var_17_cvector, var_48_string); // 0xc3 NEW_2
	var_49_int = 529289; // 0xc5 PushI
	SetMessage(var_49_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_50_int = 529290; // 0xca PushI
	var_51_int = -1; // 0xcb PushI
	var_52_int = 30744; // 0xcc PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xcd TObjFunc
	var_53_int = 529291; // 0xcf PushI
	var_54_int = -1; // 0xd0 PushI
	var_55_int = 30745; // 0xd1 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_3_string = 1; // 0xd5 TMovB
	var_56_bool = 0; // 0xd6 PushV
	func_1320(var_56_bool); // 0xd7 NEW_2
	if(var_56_bool == 0) goto Label_221; // 0xd9 JumpB
	lshStopAnimation(); // 0xda Func
	goto Label_223; // 0xdc Jump
	
Label_223:
	return 0; // 0xdf Return
	
Label_221:
	StopAnimation(); // 0xdd Func
	
Label_225:
	return 0; // 0xe1 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	var_18_int = 1; // 0x189 PushI
	if(var_18_int == 0) goto Label_484; // 0x18a JumpB
	func_1250(); // 0x18c NEW_2
	var_20_int = 36960; // 0x18e PushI
	var_21_bool = var_16_bool == var_20_int; // 0x18f Eq
	if(var_21_bool == 0) goto Label_426; // 0x190 JumpB
	var_22_string = ""; // 0x191 PushV
	var_22_string = "Neutral"; // 0x192 MovS
	func_370(var_17_cvector, var_22_string); // 0x193 NEW_2
	var_39_int = 535284; // 0x195 PushI
	SetMessage(var_39_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_40_int = 535285; // 0x19a PushI
	var_41_int = 36962; // 0x19b PushI
	var_42_int = 36961; // 0x19c PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0x19d TObjFunc
	var_43_int = 535292; // 0x19f PushI
	var_44_int = -1; // 0x1a0 PushI
	var_45_int = 36968; // 0x1a1 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0x1a2 TObjFunc
	var_46_int = 535293; // 0x1a4 PushI
	var_47_int = -1; // 0x1a5 PushI
	var_48_int = 36969; // 0x1a6 PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_49_int = 36962; // 0x1aa PushI
	var_50_bool = var_16_bool == var_49_int; // 0x1ab Eq
	if(var_50_bool == 0) goto Label_449; // 0x1ac JumpB
	var_51_string = ""; // 0x1ad PushV
	var_51_string = "Neutral"; // 0x1ae MovS
	func_370(var_17_cvector, var_51_string); // 0x1af NEW_2
	var_52_int = 535286; // 0x1b1 PushI
	SetMessage(var_52_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_53_int = 535287; // 0x1b6 PushI
	var_54_int = 36964; // 0x1b7 PushI
	var_55_int = 36963; // 0x1b8 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x1b9 TObjFunc
	var_56_int = 535291; // 0x1bb PushI
	var_57_int = -1; // 0x1bc PushI
	var_58_int = 36967; // 0x1bd PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_59_int = 36964; // 0x1c1 PushI
	var_60_bool = var_16_bool == var_59_int; // 0x1c2 Eq
	if(var_60_bool == 0) goto Label_472; // 0x1c3 JumpB
	var_61_string = ""; // 0x1c4 PushV
	var_61_string = "Neutral"; // 0x1c5 MovS
	func_370(var_17_cvector, var_61_string); // 0x1c6 NEW_2
	var_62_int = 535288; // 0x1c8 PushI
	SetMessage(var_62_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_63_int = 535289; // 0x1cd PushI
	var_64_int = -1; // 0x1ce PushI
	var_65_int = 36965; // 0x1cf PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x1d0 TObjFunc
	var_66_int = 535290; // 0x1d2 PushI
	var_67_int = -1; // 0x1d3 PushI
	var_68_int = 36966; // 0x1d4 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x1d5 TObjFunc
	return 0; // 0x1d7 Return
	
Label_472:
	var_3_string = 1; // 0x1d8 TMovB
	var_69_bool = 0; // 0x1d9 PushV
	func_1320(var_69_bool); // 0x1da NEW_2
	if(var_69_bool == 0) goto Label_480; // 0x1dc JumpB
	lshStopAnimation(); // 0x1dd Func
	goto Label_482; // 0x1df Jump
	
Label_482:
	return 0; // 0x1e2 Return
	
Label_480:
	StopAnimation(); // 0x1e0 Func
	
Label_484:
	return 0; // 0x1e4 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_cvector)
{
	var_18_int = 1; // 0x287 PushI
	if(var_18_int == 0) goto Label_687; // 0x288 JumpB
	func_1250(); // 0x28a NEW_2
	var_20_int = 42548; // 0x28c PushI
	var_21_bool = var_16_int == var_20_int; // 0x28d Eq
	if(var_21_bool == 0) goto Label_675; // 0x28e JumpB
	var_22_string = ""; // 0x28f PushV
	var_22_string = "Neutral"; // 0x290 MovS
	func_624(var_17_cvector, var_22_string); // 0x291 NEW_2
	var_39_int = 540539; // 0x293 PushI
	SetMessage(var_39_int); // 0x294 TObjFunc
	ClearReplies(); // 0x296 TObjFunc
	var_40_int = 540540; // 0x298 PushI
	var_41_int = -1; // 0x299 PushI
	var_42_int = 42549; // 0x29a PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0x29b TObjFunc
	var_43_int = 540799; // 0x29d PushI
	var_44_int = -1; // 0x29e PushI
	var_45_int = 42848; // 0x29f PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0x2a0 TObjFunc
	return 0; // 0x2a2 Return
	
Label_675:
	var_3_string = 1; // 0x2a3 TMovB
	var_46_bool = 0; // 0x2a4 PushV
	func_1320(var_46_bool); // 0x2a5 NEW_2
	if(var_46_bool == 0) goto Label_683; // 0x2a7 JumpB
	lshStopAnimation(); // 0x2a8 Func
	goto Label_685; // 0x2aa Jump
	
Label_685:
	return 0; // 0x2ad Return
	
Label_683:
	StopAnimation(); // 0x2ab Func
	
Label_687:
	return 0; // 0x2af Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_int)
{
	var_17_int = 10; // 0x2fd PushI
	var_18_bool = var_16_int == var_17_int; // 0x2fe Eq
	if(var_18_bool == 0) goto Label_801; // 0x2ff JumpB
	func_760(); // 0x301 NEW_2
	var_20_bool = 0; // 0x303 PushV
	var_20_bool = 0; // 0x304 MovB
	var_21_bool = 0; // 0x305 PushV
	func_974(var_21_bool); // 0x306 NEW_2
	if(var_21_bool == 0) goto Label_782; // 0x308 JumpB
	var_24_bool = 0; // 0x309 PushV
	func_729(var_24_bool); // 0x30a NEW_2
	if(var_24_bool == 0) goto Label_782; // 0x30c JumpB
	var_20_bool = 1; // 0x30d MovB
	
Label_782:
	if(var_20_bool == 0) goto Label_795; // 0x30e JumpB
	var_41_bool = 0; // 0x30f PushV
	func_709(var_41_bool); // 0x310 NEW_2
	if(var_41_bool == 0) goto Label_794; // 0x312 JumpB
	var_60_bool = 0; var_61_object = Obj(); // 0x313 PushV
	var_62_object = Obj(); // 0x314 PushV
	func_1257(var_62_object); // 0x315 NEW_2
	var_61_object = var_62_object; // 0x316 Mov
	func_1124(var_61_object); // 0x318 NEW_2
	
Label_794:
	goto Label_801; // 0x31a Jump
	
Label_801:
	return 0; // 0x321 Return
	
Label_795:
	func_724(var_16_int); // 0x31c NEW_2
	func_751(); // 0x31f NEW_2
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_942(); // 0x323 NEW_2
	func_760(); // 0x326 NEW_2
	lshStopSpeech(); // 0x328 Func
	lshStopAnimation(); // 0x32a Func
	StopAsync(); // 0x32c Func
	Hold(); // 0x32e Func
	return 0; // 0x330 Return
}


task_6_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	StopGroup0(); // 0x331 Func
	func_760(); // 0x334 NEW_2
	var_17_string = ""; // 0x336 PushV
	var_17_string = "Neutral"; // 0x337 MovS
	func_1204(var_17_string); // 0x338 NEW_2
	func_751(); // 0x33b NEW_2
	return 0; // 0x33d Return
}


task_6_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	var_17_bool = var_16_bool; // 0x33f Push
	if(var_17_bool == 0) goto Label_837; // 0x340 JumpB
	func_751(); // 0x342 NEW_2
	goto Label_841; // 0x344 Jump
	
Label_841:
	return 0; // 0x349 Return
	
Label_837:
	var_23_string = ""; // 0x345 PushV
	var_23_string = "Neutral"; // 0x346 MovS
	func_1204(var_23_string); // 0x347 NEW_2
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x34a PushV
	IsOverrideActive(var_18_bool); // 0x34b Func
	var_19_bool = var_18_bool == 0; // 0x34d Not
	if(var_19_bool == 0) goto Label_870; // 0x34e JumpB
	EventDisable(0); // 0x34f EventDisable
	func_942(); // 0x351 NEW_2
	var_20_bool = 0; var_21_object = Obj(); // 0x353 PushV
	var_21_object = var_16_object; // 0x354 Mov
	func_965(var_21_object); // 0x355 NEW_2
	EventEnable(0); // 0x357 EventEnable
	var_34_object = Obj(); // 0x358 PushV
	var_34_object = var_16_object; // 0x359 Mov
	func_1339(var_34_object); // 0x35a NEW_2
	var_381_string = ""; // 0x35c PushV
	var_381_string = "Neutral"; // 0x35d MovS
	func_1204(var_381_string); // 0x35e NEW_2
	func_760(); // 0x361 NEW_2
	func_751(); // 0x364 NEW_2
	
Label_870:
	return 2; // 0x366 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	var_16_bool = GlobalVars[1]; // 0x2b0 PushGE
	var_16_bool = 0; // 0x2b1 MovB
	GlobalVars[1] = var_16_bool; // 0x2b2 PopGE
	func_695(var_15_cvector); // 0x2b4 NEW_2
	return 0; // 0x2b6 Return
}


func_0(var_0_object, var_37_int, var_38_object)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; // 0x0 PushV
	var_0_object = var_38_object; // 0x1 TMov
	var_48_bool = 0; var_49_object = Obj(); var_50_float = 0; // 0x2 PushV
	var_49_object = var_38_object; // 0x3 Mov
	var_50_float = 70.0; // 0x4 MovF
	func_979(var_49_object, var_50_float); // 0x5 NEW_2
	var_95_bool = var_48_bool == 0; // 0x7 Not
	if(var_95_bool == 0) goto Label_11; // 0x8 JumpB
	var_37_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_44_object); // 0xb Func
	var_96_int = 0; // 0xd PushV
	func_1314(var_96_int); // 0xe NEW_2
	SetNPCName(var_96_int); // 0x10 ObjFunc
	var_97_int = 0; // 0x12 PushV
	func_1312(var_97_int); // 0x13 NEW_2
	SetNPCDescription(var_97_int); // 0x15 ObjFunc
	var_98_string = ""; // 0x17 PushV
	func_1316(var_98_string); // 0x18 NEW_2
	SetPhoto(var_98_string); // 0x1a ObjFunc
	var_99_string = ""; // 0x1c PushV
	func_1318(var_99_string); // 0x1d NEW_2
	SetPhoto2(var_99_string); // 0x1f ObjFunc
	var_100_int = 0; // 0x21 PushV
	func_1322(var_100_int); // 0x22 NEW_2
	SetPlayerName(var_100_int); // 0x24 ObjFunc
	var_46_int = -1; // 0x26 MovI
	IsOverrideActive(var_45_bool); // 0x27 Func
	var_108_bool = var_45_bool; // 0x29 Push
	if(var_108_bool == 0) goto Label_45; // 0x2a JumpB
	var_37_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_44_object); // 0x2d Func
	var_109_bool = 0; var_110_object = Obj(); // 0x2f PushV
	var_111_object = Obj(); // 0x30 PushV
	func_1257(var_111_object); // 0x31 NEW_2
	var_110_object = var_111_object; // 0x32 Mov
	func_1066(var_109_bool, var_110_object); // 0x34 NEW_2
	var_204_object = Obj(); var_205_object = Obj(); // 0x36 PushV
	var_204_object = var_38_object; // 0x37 Mov
	var_205_object = var_44_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_206_object, var_207_object, var_208_string, var_209_bool, var_204_object, var_205_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_47_bool); // 0x3d ObjFunc
	
Label_63:
	var_253_bool = var_47_bool == 0; // 0x3f Not
	if(var_253_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_47_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_254_object = Obj(); // 0x46 PushV
	var_254_object = var_38_object; // 0x47 Mov
	func_1048(); // 0x48 NEW_2
	StopDialog(var_44_object); // 0x4a Func
	GetReturnValue(var_46_int); // 0x4c ObjFunc
	var_37_int = var_46_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1282(var_263_bool, var_264_int)
{
	var_265_int = 0; // 0x503 PushV
	func_1273(var_265_int); // 0x504 NEW_2
	var_263_bool = var_265_int == var_264_int; // 0x506 Eq2
	return 0; // 0x507 Return
}


func_1288(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x508 PushV
	var_44_string = "idle"; // 0x509 MovS
	var_45_int = var_42_int; // 0x50a Push
	if(var_45_int == 0) goto Label_1293; // 0x50b JumpB
	var_44_string = var_44_string + var_42_int; // 0x50c Add2
	
Label_1293:
	var_41_string = var_44_string; // 0x50d Mov
	return 2; // 0x50e Return
}


func_1161(var_151_bool)
{
	var_153_string = ""; var_154_int = 0; var_155_bool = 0; var_156_int = 0; var_157_string = ""; var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; // 0x489 PushV
	var_163_string = "d"; // 0x48a PushS
	var_164_int = 0; // 0x48b PushV
	func_1273(var_164_int); // 0x48c NEW_2
	var_170_int = var_163_string + var_164_int; // 0x48e Add
	var_171_string = "m"; // 0x48f PushS
	var_158_string = var_170_int + var_171_string; // 0x490 Add2
	var_159_int = 0; // 0x491 MovI
	
Label_1170:
	var_172_int = 1; // 0x492 PushI
	if(var_172_int == 0) goto Label_1183; // 0x493 JumpB
	var_173_int = 1; // 0x494 PushI
	var_174_int = var_159_int + var_173_int; // 0x495 Add
	var_175_int = var_158_string + var_174_int; // 0x496 Add
	HasProperty(var_175_int, var_160_bool); // 0x497 ObjFunc
	var_176_bool = var_160_bool == 0; // 0x499 Not
	if(var_176_bool == 0) goto Label_1180; // 0x49a JumpB
	goto Label_1183; // 0x49b Jump
	
Label_1183:
	var_177_bool = var_159_int == 0; // 0x49f Not
	if(var_177_bool == 0) goto Label_1187; // 0x4a0 JumpB
	var_151_bool = 0; // 0x4a1 MovB
	return 10; // 0x4a2 Return
	
Label_1187:
	var_161_int = 0; // 0x4a3 MovI
	var_178_int = 1; // 0x4a4 PushI
	var_179_bool = var_159_int > var_178_int; // 0x4a5 GT
	if(var_179_bool == 0) goto Label_1193; // 0x4a6 JumpB
	irand(var_161_int, var_159_int); // 0x4a7 Func
	
Label_1193:
	var_180_int = 1; // 0x4a9 PushI
	var_181_int = var_161_int + var_180_int; // 0x4aa Add
	var_182_int = var_158_string + var_181_int; // 0x4ab Add
	GetProperty(var_182_int, var_162_string); // 0x4ac ObjFunc
	var_183_bool = 0; var_184_string = ""; // 0x4ae PushV
	var_184_string = var_162_string; // 0x4af Mov
	func_1235(var_183_bool, var_184_string); // 0x4b0 NEW_2
	var_151_bool = var_183_bool; // 0x4b1 Mov
	return 10; // 0x4b3 Return
	
Label_1180:
	var_185_int = 1; // 0x49c PushI
	var_159_int = var_159_int + var_185_int; // 0x49d Add2
	goto Label_1170; // 0x49e Jump
}


func_139(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0x8c PushV
	func_1320(var_212_bool); // 0x8d NEW_2
	var_213_bool = var_212_bool == 0; // 0x8f Not
	if(var_213_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_214_bool = var_211_string == var_2_object; // 0x92 Eq
	if(var_214_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_215_string = ""; var_216_bool = 0; // 0x95 PushV
	var_215_string = var_211_string; // 0x96 Mov
	var_217_string = ""; // 0x97 PushS
	var_218_bool = var_211_string == var_217_string; // 0x98 Eq
	if(var_218_bool == 0) goto Label_156; // 0x99 JumpB
	var_216_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_1220(var_215_string, var_216_bool); // 0x9d NEW_2
	var_2_object = var_211_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_216_bool = 1; // 0x9c MovB
}


func_1295(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x50f PushV
	var_38_int = 0; // 0x510 MovI
	
Label_1297:
	var_40_string = "all"; // 0x511 PushS
	var_41_string = ""; var_42_int = 0; // 0x512 PushV
	var_42_int = var_38_int; // 0x513 Mov
	func_1288(var_41_string, var_42_int); // 0x514 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x516 Func
	var_46_bool = var_39_bool == 0; // 0x518 Not
	if(var_46_bool == 0) goto Label_1307; // 0x519 JumpB
	goto Label_1310; // 0x51a Jump
	
Label_1310:
	var_35_int = var_38_int; // 0x51e Mov
	return 4; // 0x51f Return
	
Label_1307:
	var_47_int = 1; // 0x51b PushI
	var_38_int = var_38_int + var_47_int; // 0x51c Add2
	goto Label_1297; // 0x51d Jump
}


func_1048()
{
	var_255_bool = 0; var_256_bool = 0; // 0x418 PushV
	var_257_bool = 1; // 0x419 PushB
	CameraSwitchToNormal(var_257_bool); // 0x41a Func
	var_258_bool = 0; // 0x41c PushV
	func_1320(var_258_bool); // 0x41d NEW_2
	if(var_258_bool == 0) goto Label_1057; // 0x41f JumpB
	goto Label_1065; // 0x420 Jump
	
Label_1065:
	return 2; // 0x429 Return
	
Label_1057:
	var_259_string = "head"; // 0x421 PushS
	HasAnimationTrack(var_256_bool, var_259_string); // 0x422 Func
	var_260_bool = var_256_bool; // 0x424 Push
	if(var_260_bool == 0) goto Label_1065; // 0x425 JumpB
	var_261_string = "head"; // 0x426 PushS
	UnlookAsync(var_261_string); // 0x427 Func
}


func_1312(var_97_int)
{
	var_97_int = 515546; // 0x520 MovI
	return 0; // 0x521 Return
}


func_1314(var_96_int)
{
	var_96_int = 502871; // 0x522 MovI
	return 0; // 0x523 Return
}


func_1316(var_98_string)
{
	var_98_string = "ui/NPC_Mishka.png"; // 0x524 MovS
	return 0; // 0x525 Return
}


func_1318(var_99_string)
{
	var_99_string = "ui/NPC_Mishka_b.png"; // 0x526 MovS
	return 0; // 0x527 Return
}


func_1320(var_91_bool)
{
	var_91_bool = 1; // 0x528 MovB
	return 0; // 0x529 Return
}


func_1322(var_100_int)
{
	var_101_int = 0; var_102_int = 0; // 0x52a PushV
	var_103_string = "branch"; // 0x52b PushS
	GetVariable(var_103_string, var_102_int); // 0x52c Func
	var_104_int = 0; // 0x52e PushI
	var_105_bool = var_102_int == var_104_int; // 0x52f Eq
	if(var_105_bool == 0) goto Label_1332; // 0x530 JumpB
	var_100_int = 1; // 0x531 MovI
	return 2; // 0x532 Return
	
Label_1332:
	var_106_int = 1; // 0x534 PushI
	var_107_bool = var_102_int == var_106_int; // 0x535 Eq
	if(var_107_bool == 0) goto Label_1337; // 0x536 JumpB
	var_100_int = 2; // 0x537 MovI
	return 2; // 0x538 Return
	
Label_1337:
	var_100_int = 3; // 0x539 MovI
	return 2; // 0x53a Return
}


func_1066(var_109_bool, var_110_object)
{
	var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_int = 0; // 0x42a PushV
	var_118_string = "voice_common"; // 0x42b PushS
	GetVariable(var_118_string, var_116_int); // 0x42c Func
	var_119_int = var_116_int; // 0x42e Push
	if(var_119_int == 0) goto Label_1104; // 0x42f JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x430 PushV
	var_121_object = var_110_object; // 0x431 Mov
	func_1124(var_121_object); // 0x432 NEW_2
	var_150_bool = var_120_bool == 0; // 0x434 Not
	if(var_150_bool == 0) goto Label_1086; // 0x435 JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x436 PushV
	var_152_object = var_110_object; // 0x437 Mov
	func_1161(var_152_object); // 0x438 NEW_2
	var_186_bool = var_151_bool == 0; // 0x43a Not
	if(var_186_bool == 0) goto Label_1086; // 0x43b JumpB
	var_109_bool = 0; // 0x43c MovB
	return 4; // 0x43d Return
	
Label_1086:
	var_187_int = 2; // 0x43e PushI
	irand(var_117_int, var_187_int); // 0x43f Func
	var_188_int = var_117_int; // 0x441 Push
	if(var_188_int == 0) goto Label_1099; // 0x442 JumpB
	var_189_string = "voice_common"; // 0x443 PushS
	var_190_int = 1; // 0x444 PushI
	var_191_int = var_116_int + var_190_int; // 0x445 Add
	var_192_int = 3; // 0x446 PushI
	var_193_int = var_191_int / var_192_int; // 0x447 Mod
	SetVariable(var_189_string, var_193_int); // 0x448 Func
	goto Label_1103; // 0x44a Jump
	
Label_1103:
	goto Label_1122; // 0x44f Jump
	
Label_1122:
	var_109_bool = 1; // 0x462 MovB
	return 4; // 0x463 Return
	
Label_1099:
	var_194_string = "voice_common"; // 0x44b PushS
	var_195_int = 0; // 0x44c PushI
	SetVariable(var_194_string, var_195_int); // 0x44d Func
	
Label_1104:
	var_196_bool = 0; var_197_object = Obj(); // 0x450 PushV
	var_197_object = var_110_object; // 0x451 Mov
	func_1161(var_197_object); // 0x452 NEW_2
	var_198_bool = var_196_bool == 0; // 0x454 Not
	if(var_198_bool == 0) goto Label_1118; // 0x455 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x456 PushV
	var_200_object = var_110_object; // 0x457 Mov
	func_1124(var_200_object); // 0x458 NEW_2
	var_201_bool = var_199_bool == 0; // 0x45a Not
	if(var_201_bool == 0) goto Label_1118; // 0x45b JumpB
	var_109_bool = 0; // 0x45c MovB
	return 4; // 0x45d Return
	
Label_1118:
	var_202_string = "voice_common"; // 0x45e PushS
	var_203_int = 1; // 0x45f PushI
	SetVariable(var_202_string, var_203_int); // 0x460 Func
}


func_940(var_55_bool)
{
	var_55_bool = 1; // 0x3ac MovB
	return 0; // 0x3ad Return
}


func_942()
{
	StopAnimation(); // 0x3ae Func
	StopGroup0(); // 0x3b0 Func
	return 0; // 0x3b2 Return
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_290_object, var_291_object)
{
	var_0_object = var_291_object; // 0x134 TMov
	var_1_object = var_290_object; // 0x135 TMov
	var_3_string = 0; // 0x136 TMovB
	var_296_int = 1; // 0x137 PushI
	if(var_296_int == 0) goto Label_340; // 0x138 JumpB
	var_297_string = ""; // 0x139 PushV
	var_297_string = "Neutral"; // 0x13a MovS
	func_370(var_291_object, var_297_string); // 0x13b NEW_2
	var_305_int = 535284; // 0x13d PushI
	SetMessage(var_305_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_306_int = 535285; // 0x142 PushI
	var_307_int = 36962; // 0x143 PushI
	var_308_int = 36961; // 0x144 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x145 TObjFunc
	var_309_int = 535292; // 0x147 PushI
	var_310_int = -1; // 0x148 PushI
	var_311_int = 36968; // 0x149 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x14a TObjFunc
	var_312_int = 535293; // 0x14c PushI
	var_313_int = -1; // 0x14d PushI
	var_314_int = 36969; // 0x14e PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x14f TObjFunc
	goto Label_340; // 0x151 Jump
	
Label_340:
	var_315_bool = 0; // 0x154 PushV
	func_1320(var_315_bool); // 0x155 NEW_2
	if(var_315_bool == 0) goto Label_355; // 0x157 JumpB
	
Label_344:
	lshWaitForAnimEnd(); // 0x158 Func
	var_316_string = var_3_string; // 0x15a PushT
	if(var_316_string == 0) goto Label_349; // 0x15b JumpB
	goto Label_354; // 0x15c Jump
	
Label_354:
	goto Label_369; // 0x162 Jump
	
Label_369:
	return 0; // 0x171 Return
	
Label_349:
	var_317_string = ""; // 0x15d PushV
	var_317_string = var_2_object; // 0x15e MovT
	func_1204(var_317_string); // 0x15f NEW_2
	goto Label_344; // 0x161 Jump
	
Label_355:
	var_318_string = "all"; // 0x163 PushS
	var_319_string = "idle"; // 0x164 PushS
	PlayAnimation(var_318_string, var_319_string); // 0x165 Func
	
Label_359:
	WaitForAnimEnd(); // 0x167 Func
	var_320_string = var_3_string; // 0x169 PushT
	if(var_320_string == 0) goto Label_364; // 0x16a JumpB
	goto Label_369; // 0x16b Jump
	
Label_364:
	var_321_string = "all"; // 0x16c PushS
	var_322_string = "idle"; // 0x16d PushS
	PlayAnimation(var_321_string, var_322_string); // 0x16e Func
	goto Label_359; // 0x170 Jump
}


func_1204(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x4b4 PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x4b5 Func
	var_244_bool = var_241_bool; // 0x4b7 Push
	if(var_244_bool == 0) goto Label_1215; // 0x4b8 JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x4b9 Func
	var_245_bool = 0; // 0x4bb PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x4bc Func
	goto Label_1219; // 0x4be Jump
	
Label_1219:
	return 6; // 0x4c3 Return
	
Label_1215:
	var_246_string = "Can't find lsh animation : "; // 0x4bf PushS
	var_247_int = var_246_string + var_237_string; // 0x4c0 Add
	Trace(var_247_int); // 0x4c1 Func
}


func_947(var_31_float)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x3b3 PushV
	GetPosition(var_36_cvector); // 0x3b4 Func
	GetPosition(var_37_cvector); // 0x3b6 ObjFunc
	var_38_cvector = var_37_cvector - var_36_cvector; // 0x3b8 Sub2
	var_31_float = var_38_cvector | var_38_cvector; // 0x3b9 Or2
	return 6; // 0x3ba Return
}


func_566(var_0_object, var_1_object, var_2_object, var_3_string, var_349_object, var_350_object)
{
	var_0_object = var_350_object; // 0x237 TMov
	var_1_object = var_349_object; // 0x238 TMov
	var_3_string = 0; // 0x239 TMovB
	var_355_int = 1; // 0x23a PushI
	if(var_355_int == 0) goto Label_594; // 0x23b JumpB
	var_356_string = ""; // 0x23c PushV
	var_356_string = "Neutral"; // 0x23d MovS
	func_624(var_350_object, var_356_string); // 0x23e NEW_2
	var_364_int = 540539; // 0x240 PushI
	SetMessage(var_364_int); // 0x241 TObjFunc
	ClearReplies(); // 0x243 TObjFunc
	var_365_int = 540540; // 0x245 PushI
	var_366_int = -1; // 0x246 PushI
	var_367_int = 42549; // 0x247 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x248 TObjFunc
	var_368_int = 540799; // 0x24a PushI
	var_369_int = -1; // 0x24b PushI
	var_370_int = 42848; // 0x24c PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x24d TObjFunc
	goto Label_594; // 0x24f Jump
	
Label_594:
	var_371_bool = 0; // 0x252 PushV
	func_1320(var_371_bool); // 0x253 NEW_2
	if(var_371_bool == 0) goto Label_609; // 0x255 JumpB
	
Label_598:
	lshWaitForAnimEnd(); // 0x256 Func
	var_372_string = var_3_string; // 0x258 PushT
	if(var_372_string == 0) goto Label_603; // 0x259 JumpB
	goto Label_608; // 0x25a Jump
	
Label_608:
	goto Label_623; // 0x260 Jump
	
Label_623:
	return 0; // 0x26f Return
	
Label_603:
	var_373_string = ""; // 0x25b PushV
	var_373_string = var_2_object; // 0x25c MovT
	func_1204(var_373_string); // 0x25d NEW_2
	goto Label_598; // 0x25f Jump
	
Label_609:
	var_374_string = "all"; // 0x261 PushS
	var_375_string = "idle"; // 0x262 PushS
	PlayAnimation(var_374_string, var_375_string); // 0x263 Func
	
Label_613:
	WaitForAnimEnd(); // 0x265 Func
	var_376_string = var_3_string; // 0x267 PushT
	if(var_376_string == 0) goto Label_618; // 0x268 JumpB
	goto Label_623; // 0x269 Jump
	
Label_618:
	var_377_string = "all"; // 0x26a PushS
	var_378_string = "idle"; // 0x26b PushS
	PlayAnimation(var_377_string, var_378_string); // 0x26c Func
	goto Label_613; // 0x26e Jump
}


func_695(var_0_object)
{
	var_17_bool = 0; // 0x2b7 PushV
	func_974(var_17_bool); // 0x2b8 NEW_2
	var_20_bool = var_17_bool == 0; // 0x2ba Not
	if(var_20_bool == 0) goto Label_702; // 0x2bb JumpB
	Hold(); // 0x2bc Func
	
Label_702:
	GetDirection(var_0_object); // 0x2be Func
	
Label_704:
	func_871(); // 0x2c1 NEW_2
	goto Label_704; // 0x2c3 Jump
}


func_1339(var_34_object)
{
	var_35_bool = GlobalVars[1]; // 0x53c PushGE
	var_36_bool = var_35_bool == 0; // 0x53d Not
	if(var_36_bool == 0) goto Label_1352; // 0x53e JumpB
	var_37_int = 0; var_38_object = Obj(); // 0x53f PushV
	var_38_object = var_34_object; // 0x540 Mov
	TaskCall(0); // 0x541 TaskCall
	func_0(var_39_object, var_37_int, var_38_object); // 0x542 NEW_2
	TaskReturn(); // 0x543 TaskReturn
	var_262_bool = GlobalVars[1]; // 0x545 PushGE
	var_262_bool = 1; // 0x546 MovB
	GlobalVars[1] = var_262_bool; // 0x547 PopGE
	
Label_1352:
	var_263_bool = 0; var_264_int = 0; // 0x548 PushV
	var_264_int = 12; // 0x549 MovI
	func_1282(var_263_bool, var_264_int); // 0x54a NEW_2
	if(var_263_bool == 0) goto Label_1364; // 0x54c JumpB
	var_266_int = 0; var_267_object = Obj(); // 0x54d PushV
	var_267_object = var_34_object; // 0x54e Mov
	TaskCall(2); // 0x54f TaskCall
	func_226(var_268_object, var_266_int, var_267_object); // 0x550 NEW_2
	TaskReturn(); // 0x551 TaskReturn
	return 0; // 0x553 Return
	
Label_1364:
	var_325_int = 0; var_326_object = Obj(); // 0x554 PushV
	var_326_object = var_34_object; // 0x555 Mov
	TaskCall(4); // 0x556 TaskCall
	func_485(var_327_object, var_325_int, var_326_object); // 0x557 NEW_2
	TaskReturn(); // 0x558 TaskReturn
	return 0; // 0x55a Return
}


func_955(var_24_bool, var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; // 0x3bb PushV
	GetPosition(var_29_cvector); // 0x3bc Func
	var_30_cvector = var_25_cvector - var_29_cvector; // 0x3be Sub2
	var_32_float = GetByIndex(var_30_cvector, 0); // 0x3bf PushE
	var_33_float = GetByIndex(var_30_cvector, 2); // 0x3c0 PushE
	Rotate(var_32_float, var_33_float, var_31_bool); // 0x3c1 Func
	var_24_bool = var_31_bool; // 0x3c3 Mov
	return 6; // 0x3c4 Return
}


func_1220(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x4c4 PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x4c5 Func
	var_225_bool = var_222_bool; // 0x4c7 Push
	if(var_225_bool == 0) goto Label_1230; // 0x4c8 JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x4c9 Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x4cb Func
	goto Label_1234; // 0x4cd Jump
	
Label_1234:
	return 6; // 0x4d2 Return
	
Label_1230:
	var_226_string = "Can't find lsh animation : "; // 0x4ce PushS
	var_227_int = var_226_string + var_215_string; // 0x4cf Add
	Trace(var_227_int); // 0x4d0 Func
}


func_965(var_20_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x3c5 PushV
	GetPosition(var_23_cvector); // 0x3c6 ObjFunc
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); // 0x3c8 PushV
	var_25_cvector = var_23_cvector; // 0x3c9 Mov
	func_955(var_24_bool, var_25_cvector); // 0x3ca NEW_2
	var_20_bool = var_24_bool; // 0x3cb Mov
	return 2; // 0x3cd Return
}


func_709(var_41_bool)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x2c5 PushV
	var_44_string = "player"; // 0x2c6 PushS
	FindActor(var_43_object, var_44_string); // 0x2c7 Func
	var_45_bool = var_43_object == 0; // 0x2c9 Not
	if(var_45_bool == 0) goto Label_717; // 0x2ca JumpB
	var_41_bool = 0; // 0x2cb MovB
	return 2; // 0x2cc Return
	
Label_717:
	var_46_bool = 0; var_47_object = Obj(); // 0x2cd PushV
	var_47_object = var_43_object; // 0x2ce Mov
	func_965(var_47_object); // 0x2cf NEW_2
	var_41_bool = var_46_bool; // 0x2d0 Mov
	return 2; // 0x2d2 Return
}


func_974(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x3ce PushV
	IsLoaded(var_19_bool); // 0x3cf Func
	var_17_bool = var_19_bool; // 0x3d1 Mov
	return 2; // 0x3d2 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_204_object, var_205_object)
{
	var_0_object = var_205_object; // 0x52 TMov
	var_1_object = var_204_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_210_int = 1; // 0x55 PushI
	if(var_210_int == 0) goto Label_109; // 0x56 JumpB
	var_211_string = ""; // 0x57 PushV
	var_211_string = "Neutral"; // 0x58 MovS
	func_139(var_205_object, var_211_string); // 0x59 NEW_2
	var_228_int = 525510; // 0x5b PushI
	SetMessage(var_228_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_229_int = 525511; // 0x60 PushI
	var_230_int = -1; // 0x61 PushI
	var_231_int = 26867; // 0x62 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x63 TObjFunc
	var_232_int = 529288; // 0x65 PushI
	var_233_int = 30743; // 0x66 PushI
	var_234_int = 30742; // 0x67 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_235_bool = 0; // 0x6d PushV
	func_1320(var_235_bool); // 0x6e NEW_2
	if(var_235_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_236_string = var_3_string; // 0x73 PushT
	if(var_236_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_237_string = ""; // 0x76 PushV
	var_237_string = var_2_object; // 0x77 MovT
	func_1204(var_237_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_248_string = "all"; // 0x7c PushS
	var_249_string = "idle"; // 0x7d PushS
	PlayAnimation(var_248_string, var_249_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_250_string = var_3_string; // 0x82 PushT
	if(var_250_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_251_string = "all"; // 0x85 PushS
	var_252_string = "idle"; // 0x86 PushS
	PlayAnimation(var_251_string, var_252_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_979(var_48_bool, var_50_float)
{
	var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0; // 0x3d3 PushV
	GetPosition(var_61_cvector); // 0x3d4 ObjFunc
	GetEyesHeight(var_60_float); // 0x3d6 ObjFunc
	var_69_float = GetByIndex(var_61_cvector, 1); // 0x3d8 PushE
	var_69_float = var_69_float + var_60_float; // 0x3d9 Add2
	SetByIndex(var_61_cvector, 1) = var_69_float; // 0x3da PopE
	GetPosition(var_62_cvector); // 0x3db Func
	GetEyesHeight(var_60_float); // 0x3dd Func
	var_70_float = GetByIndex(var_62_cvector, 1); // 0x3df PushE
	var_70_float = var_70_float + var_60_float; // 0x3e0 Add2
	SetByIndex(var_62_cvector, 1) = var_70_float; // 0x3e1 PopE
	var_63_cvector = var_61_cvector - var_62_cvector; // 0x3e2 Sub2
	var_71_float = GetByIndex(var_63_cvector, 1); // 0x3e3 PushE
	var_71_float = 0; // 0x3e4 MovI
	SetByIndex(var_63_cvector, 1) = var_71_float; // 0x3e5 PopE
	var_72_int = var_63_cvector | var_63_cvector; // 0x3e6 Or
	var_73_float = sqrt(var_72_int); // 0x3e7 Sqrt
	var_63_cvector = var_63_cvector / var_63_cvector; // 0x3e8 Div2
	var_64_cvector = -var_63_cvector; // 0x3e9 Neg2
	var_74_float = var_63_cvector * var_50_float; // 0x3ea Mult
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x3eb PushV
	var_77_cvector = CVector(0.0, 1.0, 0.0); // 0x3ec PushVec
	var_76_cvector = var_64_cvector ^ var_77_cvector; // 0x3ed Xor2
	func_1263(var_75_cvector, var_76_cvector); // 0x3ee NEW_2
	var_83_int = 25; // 0x3f0 PushI
	var_84_float = var_75_cvector * var_83_int; // 0x3f1 Mult
	var_85_int = var_74_float + var_84_float; // 0x3f2 Add
	var_86_cvector = CVector(0.0, 10.0, 0.0); // 0x3f3 PushVec
	var_65_cvector = var_85_int - var_86_cvector; // 0x3f4 Sub2
	var_66_cvector = var_62_cvector + var_65_cvector; // 0x3f5 Add2
	IsOverrideActive(var_67_bool); // 0x3f6 Func
	var_87_bool = var_67_bool; // 0x3f8 Push
	if(var_87_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_48_bool = 0; // 0x3fa MovB
	return 18; // 0x3fb Return
	
Label_1020:
	StopWorld(); // 0x3fc Func
	var_88_bool = 1; // 0x3fe PushB
	CameraTransit(var_66_cvector, var_64_cvector, var_88_bool); // 0x3ff Func
	var_89_float = GetByIndex(var_65_cvector, 0); // 0x401 PushE
	var_90_float = GetByIndex(var_65_cvector, 2); // 0x402 PushE
	Rotate(var_89_float, var_90_float); // 0x403 Func
	var_91_bool = 0; // 0x405 PushV
	func_1320(var_91_bool); // 0x406 NEW_2
	if(var_91_bool == 0) goto Label_1034; // 0x408 JumpB
	goto Label_1042; // 0x409 Jump
	
Label_1042:
	CameraWaitForPlayFinish(); // 0x412 Func
	ResumeWorld(); // 0x414 Func
	var_48_bool = 1; // 0x416 MovB
	return 18; // 0x417 Return
	
Label_1034:
	var_92_string = "head"; // 0x40a PushS
	HasAnimationTrack(var_68_bool, var_92_string); // 0x40b Func
	var_93_bool = var_68_bool; // 0x40d Push
	if(var_93_bool == 0) goto Label_1042; // 0x40e JumpB
	var_94_string = "head"; // 0x40f PushS
	LookAsyncCamera(var_94_string); // 0x410 Func
}


func_724(var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0); // 0x2d4 PushE
	var_94_float = GetByIndex(var_0_object, 2); // 0x2d5 PushE
	RotateAsync(var_93_float, var_94_float); // 0x2d6 Func
	return 0; // 0x2d8 Return
}


func_1235(var_143_bool, var_144_string)
{
	var_145_bool = 0; var_146_bool = 0; // 0x4d3 PushV
	var_147_bool = 0; // 0x4d4 PushV
	func_1320(var_147_bool); // 0x4d5 NEW_2
	if(var_147_bool == 0) goto Label_1248; // 0x4d7 JumpB
	lshHasSpeech(var_146_bool, var_144_string); // 0x4d8 Func
	var_148_bool = var_146_bool; // 0x4da Push
	if(var_148_bool == 0) goto Label_1248; // 0x4db JumpB
	lshPlaySpeech(var_144_string); // 0x4dc Func
	var_143_bool = 1; // 0x4de MovB
	return 2; // 0x4df Return
	
Label_1248:
	var_143_bool = 0; // 0x4e0 MovB
	return 2; // 0x4e1 Return
}


func_729(var_24_bool)
{
	var_25_object = Obj(); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; // 0x2d9 PushV
	var_29_string = "player"; // 0x2da PushS
	FindActor(var_27_object, var_29_string); // 0x2db Func
	var_30_bool = var_27_object == 0; // 0x2dd Not
	if(var_30_bool == 0) goto Label_737; // 0x2de JumpB
	var_24_bool = 0; // 0x2df MovB
	return 4; // 0x2e0 Return
	
Label_737:
	var_31_float = 0; var_32_object = Obj(); // 0x2e1 PushV
	var_32_object = var_27_object; // 0x2e2 Mov
	func_947(var_32_object); // 0x2e3 NEW_2
	var_39_float = 90000.0; // 0x2e5 PushF
	var_40_bool = var_31_float > var_39_float; // 0x2e6 GT
	if(var_40_bool == 0) goto Label_746; // 0x2e7 JumpB
	var_24_bool = 0; // 0x2e8 MovB
	return 4; // 0x2e9 Return
	
Label_746:
	CanSee(var_28_bool, var_27_object); // 0x2ea Func
	var_24_bool = var_28_bool; // 0x2ec Mov
	return 4; // 0x2ed Return
}


func_1250()
{
	var_19_bool = 0; // 0x4e2 PushV
	func_1320(var_19_bool); // 0x4e3 NEW_2
	if(var_19_bool == 0) goto Label_1256; // 0x4e5 JumpB
	lshStopSpeech(); // 0x4e6 Func
	
Label_1256:
	return 0; // 0x4e8 Return
}


func_226(var_0_object, var_266_int, var_267_object)
{
	var_269_object = Obj(); var_270_bool = 0; var_271_int = 0; var_272_bool = 0; var_273_object = Obj(); var_274_bool = 0; var_275_int = 0; var_276_bool = 0; // 0xe2 PushV
	var_0_object = var_267_object; // 0xe3 TMov
	var_277_bool = 0; var_278_object = Obj(); var_279_float = 0; // 0xe4 PushV
	var_278_object = var_267_object; // 0xe5 Mov
	var_279_float = 70.0; // 0xe6 MovF
	func_979(var_278_object, var_279_float); // 0xe7 NEW_2
	var_280_bool = var_277_bool == 0; // 0xe9 Not
	if(var_280_bool == 0) goto Label_237; // 0xea JumpB
	var_266_int = -2; // 0xeb MovI
	return 8; // 0xec Return
	
Label_237:
	CreateDialog(var_273_object); // 0xed Func
	var_281_int = 0; // 0xef PushV
	func_1314(var_281_int); // 0xf0 NEW_2
	SetNPCName(var_281_int); // 0xf2 ObjFunc
	var_282_int = 0; // 0xf4 PushV
	func_1312(var_282_int); // 0xf5 NEW_2
	SetNPCDescription(var_282_int); // 0xf7 ObjFunc
	var_283_string = ""; // 0xf9 PushV
	func_1316(var_283_string); // 0xfa NEW_2
	SetPhoto(var_283_string); // 0xfc ObjFunc
	var_284_string = ""; // 0xfe PushV
	func_1318(var_284_string); // 0xff NEW_2
	SetPhoto2(var_284_string); // 0x101 ObjFunc
	var_285_int = 0; // 0x103 PushV
	func_1322(var_285_int); // 0x104 NEW_2
	SetPlayerName(var_285_int); // 0x106 ObjFunc
	var_275_int = -1; // 0x108 MovI
	IsOverrideActive(var_274_bool); // 0x109 Func
	var_286_bool = var_274_bool; // 0x10b Push
	if(var_286_bool == 0) goto Label_271; // 0x10c JumpB
	var_266_int = -2; // 0x10d MovI
	return 8; // 0x10e Return
	
Label_271:
	DoDialog(var_273_object); // 0x10f Func
	var_287_bool = 0; var_288_object = Obj(); // 0x111 PushV
	var_289_object = Obj(); // 0x112 PushV
	func_1257(var_289_object); // 0x113 NEW_2
	var_288_object = var_289_object; // 0x114 Mov
	func_1066(var_287_bool, var_288_object); // 0x116 NEW_2
	var_290_object = Obj(); var_291_object = Obj(); // 0x118 PushV
	var_290_object = var_267_object; // 0x119 Mov
	var_291_object = var_273_object; // 0x11a Mov
	TaskCall(3); // 0x11b TaskCall
	func_307(var_292_object, var_293_object, var_294_string, var_295_bool, var_290_object, var_291_object); // 0x11c NEW_2
	TaskReturn(); // 0x11d TaskReturn
	IsDialogEnd(var_276_bool); // 0x11f ObjFunc
	
Label_289:
	var_323_bool = var_276_bool == 0; // 0x121 Not
	if(var_323_bool == 0) goto Label_296; // 0x122 JumpB
	sync(); // 0x123 Func
	IsDialogEnd(var_276_bool); // 0x125 ObjFunc
	goto Label_289; // 0x127 Jump
	
Label_296:
	var_324_object = Obj(); // 0x128 PushV
	var_324_object = var_267_object; // 0x129 Mov
	func_1048(); // 0x12a NEW_2
	StopDialog(var_273_object); // 0x12c Func
	GetReturnValue(var_275_int); // 0x12e ObjFunc
	var_266_int = var_275_int; // 0x130 Mov
	return 8; // 0x131 Return
}


func_1124(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x464 PushV
	var_127_string = "c"; // 0x465 MovS
	var_128_int = 0; // 0x466 MovI
	
Label_1127:
	var_132_int = 1; // 0x467 PushI
	if(var_132_int == 0) goto Label_1140; // 0x468 JumpB
	var_133_int = 1; // 0x469 PushI
	var_134_int = var_128_int + var_133_int; // 0x46a Add
	var_135_int = var_127_string + var_134_int; // 0x46b Add
	HasProperty(var_135_int, var_129_bool); // 0x46c ObjFunc
	var_136_bool = var_129_bool == 0; // 0x46e Not
	if(var_136_bool == 0) goto Label_1137; // 0x46f JumpB
	goto Label_1140; // 0x470 Jump
	
Label_1140:
	var_137_bool = var_128_int == 0; // 0x474 Not
	if(var_137_bool == 0) goto Label_1144; // 0x475 JumpB
	var_120_bool = 0; // 0x476 MovB
	return 10; // 0x477 Return
	
Label_1144:
	var_130_int = 0; // 0x478 MovI
	var_138_int = 1; // 0x479 PushI
	var_139_bool = var_128_int > var_138_int; // 0x47a GT
	if(var_139_bool == 0) goto Label_1150; // 0x47b JumpB
	irand(var_130_int, var_128_int); // 0x47c Func
	
Label_1150:
	var_140_int = 1; // 0x47e PushI
	var_141_int = var_130_int + var_140_int; // 0x47f Add
	var_142_int = var_127_string + var_141_int; // 0x480 Add
	GetProperty(var_142_int, var_131_string); // 0x481 ObjFunc
	var_143_bool = 0; var_144_string = ""; // 0x483 PushV
	var_144_string = var_131_string; // 0x484 Mov
	func_1235(var_143_bool, var_144_string); // 0x485 NEW_2
	var_120_bool = var_143_bool; // 0x486 Mov
	return 10; // 0x488 Return
	
Label_1137:
	var_149_int = 1; // 0x471 PushI
	var_128_int = var_128_int + var_149_int; // 0x472 Add2
	goto Label_1127; // 0x473 Jump
}


func_485(var_0_object, var_325_int, var_326_object)
{
	var_328_object = Obj(); var_329_bool = 0; var_330_int = 0; var_331_bool = 0; var_332_object = Obj(); var_333_bool = 0; var_334_int = 0; var_335_bool = 0; // 0x1e5 PushV
	var_0_object = var_326_object; // 0x1e6 TMov
	var_336_bool = 0; var_337_object = Obj(); var_338_float = 0; // 0x1e7 PushV
	var_337_object = var_326_object; // 0x1e8 Mov
	var_338_float = 70.0; // 0x1e9 MovF
	func_979(var_337_object, var_338_float); // 0x1ea NEW_2
	var_339_bool = var_336_bool == 0; // 0x1ec Not
	if(var_339_bool == 0) goto Label_496; // 0x1ed JumpB
	var_325_int = -2; // 0x1ee MovI
	return 8; // 0x1ef Return
	
Label_496:
	CreateDialog(var_332_object); // 0x1f0 Func
	var_340_int = 0; // 0x1f2 PushV
	func_1314(var_340_int); // 0x1f3 NEW_2
	SetNPCName(var_340_int); // 0x1f5 ObjFunc
	var_341_int = 0; // 0x1f7 PushV
	func_1312(var_341_int); // 0x1f8 NEW_2
	SetNPCDescription(var_341_int); // 0x1fa ObjFunc
	var_342_string = ""; // 0x1fc PushV
	func_1316(var_342_string); // 0x1fd NEW_2
	SetPhoto(var_342_string); // 0x1ff ObjFunc
	var_343_string = ""; // 0x201 PushV
	func_1318(var_343_string); // 0x202 NEW_2
	SetPhoto2(var_343_string); // 0x204 ObjFunc
	var_344_int = 0; // 0x206 PushV
	func_1322(var_344_int); // 0x207 NEW_2
	SetPlayerName(var_344_int); // 0x209 ObjFunc
	var_334_int = -1; // 0x20b MovI
	IsOverrideActive(var_333_bool); // 0x20c Func
	var_345_bool = var_333_bool; // 0x20e Push
	if(var_345_bool == 0) goto Label_530; // 0x20f JumpB
	var_325_int = -2; // 0x210 MovI
	return 8; // 0x211 Return
	
Label_530:
	DoDialog(var_332_object); // 0x212 Func
	var_346_bool = 0; var_347_object = Obj(); // 0x214 PushV
	var_348_object = Obj(); // 0x215 PushV
	func_1257(var_348_object); // 0x216 NEW_2
	var_347_object = var_348_object; // 0x217 Mov
	func_1066(var_346_bool, var_347_object); // 0x219 NEW_2
	var_349_object = Obj(); var_350_object = Obj(); // 0x21b PushV
	var_349_object = var_326_object; // 0x21c Mov
	var_350_object = var_332_object; // 0x21d Mov
	TaskCall(5); // 0x21e TaskCall
	func_566(var_351_object, var_352_object, var_353_string, var_354_bool, var_349_object, var_350_object); // 0x21f NEW_2
	TaskReturn(); // 0x220 TaskReturn
	IsDialogEnd(var_335_bool); // 0x222 ObjFunc
	
Label_548:
	var_379_bool = var_335_bool == 0; // 0x224 Not
	if(var_379_bool == 0) goto Label_555; // 0x225 JumpB
	sync(); // 0x226 Func
	IsDialogEnd(var_335_bool); // 0x228 ObjFunc
	goto Label_548; // 0x22a Jump
	
Label_555:
	var_380_object = Obj(); // 0x22b PushV
	var_380_object = var_326_object; // 0x22c Mov
	func_1048(); // 0x22d NEW_2
	StopDialog(var_332_object); // 0x22f Func
	GetReturnValue(var_334_int); // 0x231 ObjFunc
	var_325_int = var_334_int; // 0x233 Mov
	return 8; // 0x234 Return
}


func_871()
{
	var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; // 0x367 PushV
	WaitForAnimEnd(); // 0x368 Func
	var_33_bool = 0; // 0x36a PushV
	func_974(var_33_bool); // 0x36b NEW_2
	var_34_bool = var_33_bool == 0; // 0x36d Not
	if(var_34_bool == 0) goto Label_880; // 0x36e JumpB
	return 12; // 0x36f Return
	
Label_880:
	var_35_int = 0; // 0x370 PushV
	func_1295(var_35_int); // 0x371 NEW_2
	var_27_int = var_35_int; // 0x372 Mov
	var_28_int = 0; // 0x374 MovI
	
Label_885:
	var_48_bool = 0; // 0x375 PushV
	var_48_bool = 0; // 0x376 MovB
	var_49_int = 5; // 0x377 PushI
	var_50_bool = var_28_int < var_49_int; // 0x378 LT
	if(var_50_bool == 0) goto Label_895; // 0x379 JumpB
	var_51_bool = 0; // 0x37a PushV
	func_974(var_51_bool); // 0x37b NEW_2
	if(var_51_bool == 0) goto Label_895; // 0x37d JumpB
	var_48_bool = 1; // 0x37e MovB
	
Label_895:
	if(var_48_bool == 0) goto Label_937; // 0x37f JumpB
	var_52_bool = var_27_int == 0; // 0x380 Not
	if(var_52_bool == 0) goto Label_905; // 0x381 JumpB
	var_53_int = 3; // 0x382 PushI
	Sleep(var_53_int, var_29_bool); // 0x383 Func
	var_54_bool = var_29_bool == 0; // 0x385 Not
	if(var_54_bool == 0) goto Label_904; // 0x386 JumpB
	goto Label_937; // 0x387 Jump
	
Label_937:
	ResetAAS(); // 0x3a9 Func
	return 12; // 0x3ab Return
	
Label_904:
	goto Label_926; // 0x388 Jump
	
Label_926:
	var_55_bool = 0; // 0x39e PushV
	func_940(var_55_bool); // 0x39f NEW_2
	var_56_bool = var_55_bool == 0; // 0x3a1 Not
	if(var_56_bool == 0) goto Label_932; // 0x3a2 JumpB
	goto Label_937; // 0x3a3 Jump
	
Label_932:
	ResetAAS(); // 0x3a4 Func
	var_57_int = 1; // 0x3a6 PushI
	var_28_int = var_28_int + var_57_int; // 0x3a7 Add2
	goto Label_885; // 0x3a8 Jump
	
Label_905:
	irand(var_30_int, var_27_int); // 0x389 Func
	var_58_int = 5; // 0x38b PushI
	irand(var_31_int, var_58_int); // 0x38c Func
	var_59_int = 0; // 0x38e PushI
	var_60_bool = var_31_int != var_59_int; // 0x38f Neq
	if(var_60_bool == 0) goto Label_914; // 0x390 JumpB
	var_30_int = 0; // 0x391 MovI
	
Label_914:
	var_61_string = "all"; // 0x392 PushS
	var_62_string = ""; var_63_int = 0; // 0x393 PushV
	var_63_int = var_30_int; // 0x394 Mov
	func_1288(var_62_string, var_63_int); // 0x395 NEW_2
	PlayAnimation(var_61_string, var_62_string); // 0x397 Func
	WaitForAnimEnd(var_32_bool); // 0x399 Func
	var_64_bool = var_32_bool == 0; // 0x39b Not
	if(var_64_bool == 0) goto Label_926; // 0x39c JumpB
	goto Label_937; // 0x39d Jump
}


func_1257(var_111_object)
{
	var_112_object = Obj(); var_113_object = Obj(); // 0x4e9 PushV
	self(var_113_object); // 0x4ea Func
	var_111_object = var_113_object; // 0x4ec Mov
	return 2; // 0x4ed Return
}


func_751()
{
	var_383_float = 0; var_384_float = 0; // 0x2ef PushV
	var_385_int = 8; // 0x2f0 PushI
	var_386_int = 16; // 0x2f1 PushI
	rand(var_384_float, var_385_int, var_386_int); // 0x2f2 Func
	var_387_int = 10; // 0x2f4 PushI
	SetTimer(var_387_int, var_384_float); // 0x2f5 Func
	return 2; // 0x2f7 Return
}


func_624(var_2_object, var_356_string)
{
	var_357_bool = 0; // 0x271 PushV
	func_1320(var_357_bool); // 0x272 NEW_2
	var_358_bool = var_357_bool == 0; // 0x274 Not
	if(var_358_bool == 0) goto Label_631; // 0x275 JumpB
	return 0; // 0x276 Return
	
Label_631:
	var_359_bool = var_356_string == var_2_object; // 0x277 Eq
	if(var_359_bool == 0) goto Label_634; // 0x278 JumpB
	return 0; // 0x279 Return
	
Label_634:
	var_360_string = ""; var_361_bool = 0; // 0x27a PushV
	var_360_string = var_356_string; // 0x27b Mov
	var_362_string = ""; // 0x27c PushS
	var_363_bool = var_356_string == var_362_string; // 0x27d Eq
	if(var_363_bool == 0) goto Label_641; // 0x27e JumpB
	var_361_bool = 0; // 0x27f MovB
	goto Label_642; // 0x280 Jump
	
Label_642:
	func_1220(var_360_string, var_361_bool); // 0x282 NEW_2
	var_2_object = var_356_string; // 0x284 TMov
	return 0; // 0x285 Return
	
Label_641:
	var_361_bool = 1; // 0x281 MovB
}


func_1263(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0; // 0x4ef PushV
	var_80_int = var_76_cvector | var_76_cvector; // 0x4f0 Or
	var_79_float = sqrt(var_80_int); // 0x4f1 Sqrt2
	var_81_float = 0.0; // 0x4f2 PushF
	var_82_bool = var_79_float < var_81_float; // 0x4f3 LT
	if(var_82_bool == 0) goto Label_1271; // 0x4f4 JumpB
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0x4f5 MovV
	return 2; // 0x4f6 Return
	
Label_1271:
	var_75_cvector = var_76_cvector / var_76_cvector; // 0x4f7 Div2
	return 2; // 0x4f8 Return
}


func_370(var_2_object, var_297_string)
{
	var_298_bool = 0; // 0x173 PushV
	func_1320(var_298_bool); // 0x174 NEW_2
	var_299_bool = var_298_bool == 0; // 0x176 Not
	if(var_299_bool == 0) goto Label_377; // 0x177 JumpB
	return 0; // 0x178 Return
	
Label_377:
	var_300_bool = var_297_string == var_2_object; // 0x179 Eq
	if(var_300_bool == 0) goto Label_380; // 0x17a JumpB
	return 0; // 0x17b Return
	
Label_380:
	var_301_string = ""; var_302_bool = 0; // 0x17c PushV
	var_301_string = var_297_string; // 0x17d Mov
	var_303_string = ""; // 0x17e PushS
	var_304_bool = var_297_string == var_303_string; // 0x17f Eq
	if(var_304_bool == 0) goto Label_387; // 0x180 JumpB
	var_302_bool = 0; // 0x181 MovB
	goto Label_388; // 0x182 Jump
	
Label_388:
	func_1220(var_301_string, var_302_bool); // 0x184 NEW_2
	var_2_object = var_297_string; // 0x186 TMov
	return 0; // 0x187 Return
	
Label_387:
	var_302_bool = 1; // 0x183 MovB
}


func_760()
{
	var_382_int = 10; // 0x2f8 PushI
	KillTimer(var_382_int); // 0x2f9 Func
	return 0; // 0x2fb Return
}


func_1273(var_164_int)
{
	var_165_float = 0; var_166_float = 0; // 0x4f9 PushV
	GetGameTime(var_166_float); // 0x4fa Func
	var_167_int = 1; // 0x4fc PushI
	var_168_int = 0; // 0x4fd PushV
	var_169_int = 24; // 0x4fe PushI
	var_168_int = var_166_float / var_166_float; // 0x4ff Div2
	var_164_int = var_167_int + var_168_int; // 0x500 Add2
	return 2; // 0x501 Return
}


