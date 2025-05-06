task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xbe PushI
	if(var_14_int == 0) goto Label_375; // 0xbf JumpB
	func_767(); // 0xc1 NEW_2
	var_16_int = 34201; // 0xc3 PushI
	var_17_bool = var_12_bool == var_16_int; // 0xc4 Eq
	if(var_17_bool == 0) goto Label_253; // 0xc5 JumpB
	var_18_bool = 0; // 0xc6 PushV
	var_18_bool = 0; // 0xc7 MovB
	var_19_bool = 0; var_20_object = Obj(); // 0xc8 PushV
	var_20_object = var_1_object; // 0xc9 MovT
	func_835(var_20_object); // 0xca NEW_2
	var_27_bool = var_19_bool == 0; // 0xcc Not
	if(var_27_bool == 0) goto Label_212; // 0xcd JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0xce PushV
	var_29_object = var_1_object; // 0xcf MovT
	func_847(var_29_object); // 0xd0 NEW_2
	if(var_28_bool == 0) goto Label_212; // 0xd2 JumpB
	var_18_bool = 1; // 0xd3 MovB
	
Label_212:
	if(var_18_bool == 0) goto Label_238; // 0xd4 JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0xd5 PushV
	var_34_object = var_1_object; // 0xd6 MovT
	var_35_object = var_0_object; // 0xd7 MovT
	func_829(); // 0xd8 NEW_2
	var_38_string = ""; // 0xda PushV
	var_38_string = "Neutral"; // 0xdb MovS
	func_167(var_13_bool, var_38_string); // 0xdc NEW_2
	var_55_int = 532726; // 0xde PushI
	SetMessage(var_55_int); // 0xdf TObjFunc
	ClearReplies(); // 0xe1 TObjFunc
	var_56_int = 532727; // 0xe3 PushI
	var_57_int = 34279; // 0xe4 PushI
	var_58_int = 34202; // 0xe5 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xe6 TObjFunc
	var_59_int = 532802; // 0xe8 PushI
	var_60_int = 34282; // 0xe9 PushI
	var_61_int = 34278; // 0xea PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xeb TObjFunc
	return 0; // 0xed Return
	
Label_238:
	var_62_string = ""; // 0xee PushV
	var_62_string = "Neutral"; // 0xef MovS
	func_167(var_13_bool, var_62_string); // 0xf0 NEW_2
	var_63_int = 532809; // 0xf2 PushI
	SetMessage(var_63_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_64_int = 532810; // 0xf7 PushI
	var_65_int = -1; // 0xf8 PushI
	var_66_int = 34287; // 0xf9 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xfa TObjFunc
	return 0; // 0xfc Return
	
Label_253:
	var_67_int = 34279; // 0xfd PushI
	var_68_bool = var_12_bool == var_67_int; // 0xfe Eq
	if(var_68_bool == 0) goto Label_276; // 0xff JumpB
	var_69_string = ""; // 0x100 PushV
	var_69_string = "Neutral"; // 0x101 MovS
	func_167(var_13_bool, var_69_string); // 0x102 NEW_2
	var_70_int = 532803; // 0x104 PushI
	SetMessage(var_70_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_71_int = 532805; // 0x109 PushI
	var_72_int = 34282; // 0x10a PushI
	var_73_int = 34281; // 0x10b PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x10c TObjFunc
	var_74_int = 532804; // 0x10e PushI
	var_75_int = 34577; // 0x10f PushI
	var_76_int = 34280; // 0x110 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_77_int = 34577; // 0x114 PushI
	var_78_bool = var_12_bool == var_77_int; // 0x115 Eq
	if(var_78_bool == 0) goto Label_299; // 0x116 JumpB
	var_79_string = ""; // 0x117 PushV
	var_79_string = "Neutral"; // 0x118 MovS
	func_167(var_13_bool, var_79_string); // 0x119 NEW_2
	var_80_int = 533066; // 0x11b PushI
	SetMessage(var_80_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_81_int = 533067; // 0x120 PushI
	var_82_int = 34580; // 0x121 PushI
	var_83_int = 34578; // 0x122 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x123 TObjFunc
	var_84_int = 533068; // 0x125 PushI
	var_85_int = -1; // 0x126 PushI
	var_86_int = 34579; // 0x127 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x128 TObjFunc
	return 0; // 0x12a Return
	
Label_299:
	var_87_int = 34580; // 0x12b PushI
	var_88_bool = var_12_bool == var_87_int; // 0x12c Eq
	if(var_88_bool == 0) goto Label_317; // 0x12d JumpB
	var_89_string = ""; // 0x12e PushV
	var_89_string = "Neutral"; // 0x12f MovS
	func_167(var_13_bool, var_89_string); // 0x130 NEW_2
	var_90_int = 533069; // 0x132 PushI
	SetMessage(var_90_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_91_int = 533070; // 0x137 PushI
	var_92_int = 34282; // 0x138 PushI
	var_93_int = 34581; // 0x139 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_94_int = 34282; // 0x13d PushI
	var_95_bool = var_12_bool == var_94_int; // 0x13e Eq
	if(var_95_bool == 0) goto Label_340; // 0x13f JumpB
	var_96_string = ""; // 0x140 PushV
	var_96_string = "Neutral"; // 0x141 MovS
	func_167(var_13_bool, var_96_string); // 0x142 NEW_2
	var_97_int = 532806; // 0x144 PushI
	SetMessage(var_97_int); // 0x145 TObjFunc
	ClearReplies(); // 0x147 TObjFunc
	var_98_int = 532808; // 0x149 PushI
	var_99_int = 34288; // 0x14a PushI
	var_100_int = 34285; // 0x14b PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x14c TObjFunc
	var_101_int = 532807; // 0x14e PushI
	var_102_int = -1; // 0x14f PushI
	var_103_int = 34284; // 0x150 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x151 TObjFunc
	return 0; // 0x153 Return
	
Label_340:
	var_104_int = 34288; // 0x154 PushI
	var_105_bool = var_12_bool == var_104_int; // 0x155 Eq
	if(var_105_bool == 0) goto Label_363; // 0x156 JumpB
	var_106_string = ""; // 0x157 PushV
	var_106_string = "Neutral"; // 0x158 MovS
	func_167(var_13_bool, var_106_string); // 0x159 NEW_2
	var_107_int = 532811; // 0x15b PushI
	SetMessage(var_107_int); // 0x15c TObjFunc
	ClearReplies(); // 0x15e TObjFunc
	var_108_int = 532812; // 0x160 PushI
	var_109_int = -1; // 0x161 PushI
	var_110_int = 34289; // 0x162 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x163 TObjFunc
	var_111_int = 532813; // 0x165 PushI
	var_112_int = -1; // 0x166 PushI
	var_113_int = 34290; // 0x167 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_3_string = 1; // 0x16b TMovB
	var_114_bool = 0; // 0x16c PushV
	func_803(var_114_bool); // 0x16d NEW_2
	if(var_114_bool == 0) goto Label_371; // 0x16f JumpB
	lshStopAnimation(); // 0x170 Func
	goto Label_373; // 0x172 Jump
	
Label_373:
	return 0; // 0x175 Return
	
Label_371:
	StopAnimation(); // 0x173 Func
	
Label_375:
	return 0; // 0x177 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_527(var_11_bool, var_12_object); // 0x180 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x182 PushV
	var_17_object = var_12_object; // 0x183 Mov
	TaskCall(0); // 0x184 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x185 NEW_2
	TaskReturn(); // 0x186 TaskReturn
	return 0; // 0x188 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1b0 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1b1 Eq
	if(var_14_bool == 0) goto Label_438; // 0x1b2 JumpB
	func_411(var_12_string); // 0x1b4 NEW_2
	
Label_438:
	return 0; // 0x1b6 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1b7 PushT
	if(var_12_int == 0) goto Label_444; // 0x1b8 JumpB
	func_527(var_10_bool, var_11_bool); // 0x1ba NEW_2
	
Label_444:
	var_16_bool = 0; // 0x1bc PushV
	var_16_bool = 0; // 0x1bd MovB
	var_17_int = var_5_int; // 0x1be PushT
	if(var_17_int == 0) goto Label_453; // 0x1bf JumpB
	var_18_bool = 0; // 0x1c0 PushV
	func_460(var_18_bool); // 0x1c1 NEW_2
	if(var_18_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_16_bool = 1; // 0x1c4 MovB
	
Label_453:
	if(var_16_bool == 0) goto Label_459; // 0x1c5 JumpB
	var_19_object = Obj(); // 0x1c6 PushV
	func_774(var_19_object); // 0x1c7 NEW_2
	RemoveActor(var_19_object); // 0x1c9 Func
	
Label_459:
	return 0; // 0x1cb Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1f9 PushI
	var_14_bool = var_12_int == var_13_int; // 0x1fa Eq
	if(var_14_bool == 0) goto Label_526; // 0x1fb JumpB
	var_15_bool = 0; // 0x1fc PushV
	func_489(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1fd NEW_2
	if(var_15_bool == 0) goto Label_520; // 0x1ff JumpB
	var_28_bool = var_2_object == 0; // 0x200 Not
	if(var_28_bool == 0) goto Label_519; // 0x201 JumpB
	var_29_object = Obj(); // 0x202 PushV
	var_29_object = var_4_bool; // 0x203 MovT
	func_756(var_29_object); // 0x204 NEW_2
	var_2_object = 1; // 0x206 TMovB
	
Label_519:
	goto Label_526; // 0x207 Jump
	
Label_526:
	return 0; // 0x20e Return
	
Label_520:
	var_36_object = var_2_object; // 0x208 PushT
	if(var_36_object == 0) goto Label_526; // 0x209 JumpB
	var_37_string = "head"; // 0x20a PushS
	UnlookAsync(var_37_string); // 0x20b Func
	var_2_object = 0; // 0x20d TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x178 PushV
	var_12_float = 300; // 0x179 MovI
	var_13_float = 100; // 0x17a MovI
	func_393(var_11_bool, var_12_float, var_13_float); // 0x17b NEW_2
	return 0; // 0x17d Return
}


func_640(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x280 PushV
	GetPosition(var_40_cvector); // 0x281 ObjFunc
	GetEyesHeight(var_39_float); // 0x283 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x285 PushE
	var_48_float = var_48_float + var_39_float; // 0x286 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x287 PopE
	GetPosition(var_41_cvector); // 0x288 Func
	GetEyesHeight(var_39_float); // 0x28a Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x28c PushE
	var_49_float = var_49_float + var_39_float; // 0x28d Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x28e PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x28f Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x290 PushE
	var_50_float = 0; // 0x291 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x292 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x293 Or
	var_52_float = sqrt(var_51_int); // 0x294 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x295 Div2
	var_43_cvector = -var_42_cvector; // 0x296 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x297 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x298 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x299 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x29a Xor2
	func_780(var_54_cvector, var_55_cvector); // 0x29b NEW_2
	var_62_int = 25; // 0x29d PushI
	var_63_float = var_54_cvector * var_62_int; // 0x29e Mult
	var_64_int = var_53_float + var_63_float; // 0x29f Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2a0 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2a1 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2a2 Add2
	IsOverrideActive(var_46_bool); // 0x2a3 Func
	var_66_bool = var_46_bool; // 0x2a5 Push
	if(var_66_bool == 0) goto Label_681; // 0x2a6 JumpB
	var_27_bool = 0; // 0x2a7 MovB
	return 18; // 0x2a8 Return
	
Label_681:
	StopWorld(); // 0x2a9 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x2ab Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x2ad PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x2ae PushE
	Rotate(var_67_float, var_68_float); // 0x2af Func
	var_69_bool = 0; // 0x2b1 PushV
	func_803(var_69_bool); // 0x2b2 NEW_2
	if(var_69_bool == 0) goto Label_694; // 0x2b4 JumpB
	goto Label_702; // 0x2b5 Jump
	
Label_702:
	CameraWaitForPlayFinish(); // 0x2be Func
	ResumeWorld(); // 0x2c0 Func
	var_27_bool = 1; // 0x2c2 MovB
	return 18; // 0x2c3 Return
	
Label_694:
	var_70_string = "head"; // 0x2b6 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x2b7 Func
	var_71_bool = var_47_bool; // 0x2b9 Push
	if(var_71_bool == 0) goto Label_702; // 0x2ba JumpB
	var_72_string = "head"; // 0x2bb PushS
	LookAsyncCamera(var_72_string); // 0x2bc Func
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_640(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_797(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_795(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_799(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_801(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_859(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_161_bool = var_26_bool == 0; // 0x38 Not
	if(var_161_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_162_object = Obj(); // 0x3f PushV
	var_162_object = var_17_object; // 0x40 Mov
	func_708(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_774(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x306 PushV
	self(var_21_object); // 0x307 Func
	var_19_object = var_21_object; // 0x309 Mov
	return 2; // 0x30a Return
}


func_393(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x189 PushV
	var_6_int = 0; // 0x18a TMovB
	
Label_395:
	var_18_int = 3; // 0x18b PushI
	rand(var_16_float, var_18_int); // 0x18c Func
	var_19_int = 3; // 0x18e PushI
	var_20_int = var_16_float + var_19_int; // 0x18f Add
	Sleep(var_20_int, var_17_bool); // 0x190 Func
	var_6_int = 1; // 0x192 TMovB
	var_21_float = 0; var_22_float = 0; // 0x193 PushV
	var_21_float = var_12_float; // 0x194 Mov
	var_22_float = var_13_float; // 0x195 Mov
	func_462(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x196 NEW_2
	var_6_int = 0; // 0x198 TMovB
	goto Label_395; // 0x199 Jump
}


func_780(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x30c PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x30d Or
	var_58_float = sqrt(var_59_int); // 0x30e Sqrt2
	var_60_float = 0.0; // 0x30f PushF
	var_61_bool = var_58_float < var_60_float; // 0x310 LT
	if(var_61_bool == 0) goto Label_788; // 0x311 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x312 MovV
	return 2; // 0x313 Return
	
Label_788:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x314 Div2
	return 2; // 0x315 Return
}


func_527(var_2_object, var_3_string)
{
	func_622(); // 0x210 NEW_2
	var_13_int = 10; // 0x212 PushI
	KillTimer(var_13_int); // 0x213 Func
	var_14_object = var_2_object; // 0x215 PushT
	if(var_14_object == 0) goto Label_539; // 0x216 JumpB
	var_15_string = "head"; // 0x217 PushS
	UnlookAsync(var_15_string); // 0x218 Func
	var_2_object = 0; // 0x21a TMovB
	
Label_539:
	var_3_string = 1; // 0x21b TMovB
	return 0; // 0x21c Return
}


func_790(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x316 PushV
	GetVariable(var_98_string, var_100_int); // 0x317 Func
	var_97_int = var_100_int; // 0x319 Mov
	return 2; // 0x31a Return
}


func_411(var_5_int)
{
	var_5_int = 1; // 0x19b TMovB
	var_15_bool = 0; // 0x19c PushV
	var_15_bool = 0; // 0x19d MovB
	var_16_bool = 0; // 0x19e PushV
	func_635(var_16_bool); // 0x19f NEW_2
	var_19_bool = var_16_bool == 0; // 0x1a1 Not
	if(var_19_bool == 0) goto Label_424; // 0x1a2 JumpB
	var_20_bool = 0; // 0x1a3 PushV
	func_460(var_20_bool); // 0x1a4 NEW_2
	if(var_20_bool == 0) goto Label_424; // 0x1a6 JumpB
	var_15_bool = 1; // 0x1a7 MovB
	
Label_424:
	if(var_15_bool == 0) goto Label_430; // 0x1a8 JumpB
	var_21_object = Obj(); // 0x1a9 PushV
	func_774(var_21_object); // 0x1aa NEW_2
	RemoveActor(var_21_object); // 0x1ac Func
	
Label_430:
	return 0; // 0x1ae Return
}


func_795(var_75_int)
{
	var_75_int = 541572; // 0x31b MovI
	return 0; // 0x31c Return
}


func_541()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x21d PushV
	WaitForAnimEnd(); // 0x21e Func
	var_44_bool = 0; // 0x220 PushV
	func_635(var_44_bool); // 0x221 NEW_2
	var_45_bool = var_44_bool == 0; // 0x223 Not
	if(var_45_bool == 0) goto Label_550; // 0x224 JumpB
	return 14; // 0x225 Return
	
Label_550:
	var_46_int = 0; // 0x226 PushV
	func_812(var_46_int); // 0x227 NEW_2
	var_37_int = var_46_int; // 0x228 Mov
	var_38_int = 0; // 0x22a MovI
	
Label_555:
	var_59_bool = 0; // 0x22b PushV
	var_59_bool = 0; // 0x22c MovB
	var_60_int = 5; // 0x22d PushI
	var_61_bool = var_38_int < var_60_int; // 0x22e LT
	if(var_61_bool == 0) goto Label_565; // 0x22f JumpB
	var_62_bool = 0; // 0x230 PushV
	func_635(var_62_bool); // 0x231 NEW_2
	if(var_62_bool == 0) goto Label_565; // 0x233 JumpB
	var_59_bool = 1; // 0x234 MovB
	
Label_565:
	if(var_59_bool == 0) goto Label_617; // 0x235 JumpB
	var_63_int = 3; // 0x236 PushI
	irand(var_39_int, var_63_int); // 0x237 Func
	var_64_int = 0; // 0x239 PushI
	var_65_bool = var_39_int == var_64_int; // 0x23a Eq
	if(var_65_bool == 0) goto Label_589; // 0x23b JumpB
	var_66_int = var_37_int; // 0x23c Push
	if(var_66_int == 0) goto Label_588; // 0x23d JumpB
	irand(var_40_int, var_37_int); // 0x23e Func
	var_67_string = "all"; // 0x240 PushS
	var_68_string = ""; var_69_int = 0; // 0x241 PushV
	var_69_int = var_40_int; // 0x242 Mov
	func_805(var_68_string, var_69_int); // 0x243 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x245 Func
	WaitForAnimEnd(var_41_bool); // 0x247 Func
	var_70_bool = var_41_bool == 0; // 0x249 Not
	if(var_70_bool == 0) goto Label_588; // 0x24a JumpB
	goto Label_617; // 0x24b Jump
	
Label_617:
	ResetAAS(); // 0x269 Func
	return 14; // 0x26b Return
	
Label_588:
	goto Label_606; // 0x24c Jump
	
Label_606:
	var_71_bool = 0; // 0x25e PushV
	func_620(var_71_bool); // 0x25f NEW_2
	var_72_bool = var_71_bool == 0; // 0x261 Not
	if(var_72_bool == 0) goto Label_612; // 0x262 JumpB
	goto Label_617; // 0x263 Jump
	
Label_612:
	ResetAAS(); // 0x264 Func
	var_73_int = 1; // 0x266 PushI
	var_38_int = var_38_int + var_73_int; // 0x267 Add2
	goto Label_555; // 0x268 Jump
	
Label_589:
	var_74_int = 1; // 0x24d PushI
	var_75_bool = var_39_int == var_74_int; // 0x24e Eq
	if(var_75_bool == 0) goto Label_603; // 0x24f JumpB
	var_76_int = 4; // 0x250 PushI
	rand(var_42_float, var_76_int); // 0x251 Func
	var_77_int = 1; // 0x253 PushI
	var_78_int = var_42_float + var_77_int; // 0x254 Add
	Sleep(var_78_int, var_43_bool); // 0x255 Func
	var_79_bool = var_43_bool == 0; // 0x257 Not
	if(var_79_bool == 0) goto Label_602; // 0x258 JumpB
	goto Label_617; // 0x259 Jump
	
Label_602:
	goto Label_606; // 0x25a Jump
	
Label_603:
	var_80_int = var_38_int; // 0x25b Push
	if(var_80_int == 0) goto Label_606; // 0x25c JumpB
	goto Label_617; // 0x25d Jump
}


func_797(var_74_int)
{
	var_74_int = 541571; // 0x31d MovI
	return 0; // 0x31e Return
}


func_799(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1.png"; // 0x31f MovS
	return 0; // 0x320 Return
}


func_801(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1_b.png"; // 0x321 MovS
	return 0; // 0x322 Return
}


func_803(var_69_bool)
{
	var_69_bool = 0; // 0x323 MovB
	return 0; // 0x324 Return
}


func_805(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x325 PushV
	var_55_string = "idle"; // 0x326 MovS
	var_56_int = var_53_int; // 0x327 Push
	if(var_56_int == 0) goto Label_810; // 0x328 JumpB
	var_55_string = var_55_string + var_53_int; // 0x329 Add2
	
Label_810:
	var_52_string = var_55_string; // 0x32a Mov
	return 2; // 0x32b Return
}


func_167(var_2_object, var_114_string)
{
	var_115_bool = 0; // 0xa8 PushV
	func_803(var_115_bool); // 0xa9 NEW_2
	var_116_bool = var_115_bool == 0; // 0xab Not
	if(var_116_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_117_bool = var_114_string == var_2_object; // 0xae Eq
	if(var_117_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_118_string = ""; var_119_bool = 0; // 0xb1 PushV
	var_118_string = var_114_string; // 0xb2 Mov
	var_120_string = ""; // 0xb3 PushS
	var_121_bool = var_114_string == var_120_string; // 0xb4 Eq
	if(var_121_bool == 0) goto Label_184; // 0xb5 JumpB
	var_119_bool = 0; // 0xb6 MovB
	goto Label_185; // 0xb7 Jump
	
Label_185:
	func_741(var_118_string, var_119_bool); // 0xb9 NEW_2
	var_2_object = var_114_string; // 0xbb TMov
	return 0; // 0xbc Return
	
Label_184:
	var_119_bool = 1; // 0xb8 MovB
}


func_812(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x32c PushV
	var_49_int = 0; // 0x32d MovI
	
Label_814:
	var_51_string = "all"; // 0x32e PushS
	var_52_string = ""; var_53_int = 0; // 0x32f PushV
	var_53_int = var_49_int; // 0x330 Mov
	func_805(var_52_string, var_53_int); // 0x331 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x333 Func
	var_57_bool = var_50_bool == 0; // 0x335 Not
	if(var_57_bool == 0) goto Label_824; // 0x336 JumpB
	goto Label_827; // 0x337 Jump
	
Label_827:
	var_46_int = var_49_int; // 0x33b Mov
	return 4; // 0x33c Return
	
Label_824:
	var_58_int = 1; // 0x338 PushI
	var_49_int = var_49_int + var_58_int; // 0x339 Add2
	goto Label_814; // 0x33a Jump
}


func_829()
{
	var_112_string = "ood1SalesmanLaska1"; // 0x33e PushS
	var_113_int = 1; // 0x33f PushI
	SetVariable(var_112_string, var_113_int); // 0x340 Func
	return 0; // 0x342 Return
}


func_835(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x344 PushV
	var_98_string = "d1q02"; // 0x345 MovS
	func_790(var_97_int, var_98_string); // 0x346 NEW_2
	var_101_int = 1000; // 0x348 PushI
	var_102_bool = var_97_int == var_101_int; // 0x349 Eq
	if(var_102_bool == 0) goto Label_845; // 0x34a JumpB
	var_95_bool = 1; // 0x34b MovB
	return 0; // 0x34c Return
	
Label_845:
	var_95_bool = 0; // 0x34d MovB
	return 0; // 0x34e Return
}


func_708()
{
	var_163_bool = 0; var_164_bool = 0; // 0x2c4 PushV
	CameraSwitchToNormal(); // 0x2c5 Func
	var_165_bool = 0; // 0x2c7 PushV
	func_803(var_165_bool); // 0x2c8 NEW_2
	if(var_165_bool == 0) goto Label_716; // 0x2ca JumpB
	goto Label_724; // 0x2cb Jump
	
Label_724:
	return 2; // 0x2d4 Return
	
Label_716:
	var_166_string = "head"; // 0x2cc PushS
	HasAnimationTrack(var_164_bool, var_166_string); // 0x2cd Func
	var_167_bool = var_164_bool; // 0x2cf Push
	if(var_167_bool == 0) goto Label_724; // 0x2d0 JumpB
	var_168_string = "head"; // 0x2d1 PushS
	UnlookAsync(var_168_string); // 0x2d2 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_137; // 0x4f JumpB
	var_94_bool = 0; // 0x50 PushV
	var_94_bool = 0; // 0x51 MovB
	var_95_bool = 0; var_96_object = Obj(); // 0x52 PushV
	var_96_object = var_1_object; // 0x53 MovT
	func_835(var_96_object); // 0x54 NEW_2
	var_103_bool = var_95_bool == 0; // 0x56 Not
	if(var_103_bool == 0) goto Label_94; // 0x57 JumpB
	var_104_bool = 0; var_105_object = Obj(); // 0x58 PushV
	var_105_object = var_1_object; // 0x59 MovT
	func_847(var_105_object); // 0x5a NEW_2
	if(var_104_bool == 0) goto Label_94; // 0x5c JumpB
	var_94_bool = 1; // 0x5d MovB
	
Label_94:
	if(var_94_bool == 0) goto Label_120; // 0x5e JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x5f PushV
	var_110_object = var_1_object; // 0x60 MovT
	var_111_object = var_0_object; // 0x61 MovT
	func_829(); // 0x62 NEW_2
	var_114_string = ""; // 0x64 PushV
	var_114_string = "Neutral"; // 0x65 MovS
	func_167(var_88_object, var_114_string); // 0x66 NEW_2
	var_131_int = 532726; // 0x68 PushI
	SetMessage(var_131_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_132_int = 532727; // 0x6d PushI
	var_133_int = 34279; // 0x6e PushI
	var_134_int = 34202; // 0x6f PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x70 TObjFunc
	var_135_int = 532802; // 0x72 PushI
	var_136_int = 34282; // 0x73 PushI
	var_137_int = 34278; // 0x74 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x75 TObjFunc
	goto Label_137; // 0x77 Jump
	
Label_137:
	var_138_bool = 0; // 0x89 PushV
	func_803(var_138_bool); // 0x8a NEW_2
	if(var_138_bool == 0) goto Label_152; // 0x8c JumpB
	
Label_141:
	lshWaitForAnimEnd(); // 0x8d Func
	var_139_string = var_3_string; // 0x8f PushT
	if(var_139_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_151:
	goto Label_166; // 0x97 Jump
	
Label_166:
	return 0; // 0xa6 Return
	
Label_146:
	var_140_string = ""; // 0x92 PushV
	var_140_string = var_2_object; // 0x93 MovT
	func_725(var_140_string); // 0x94 NEW_2
	goto Label_141; // 0x96 Jump
	
Label_152:
	var_151_string = "all"; // 0x98 PushS
	var_152_string = "idle"; // 0x99 PushS
	PlayAnimation(var_151_string, var_152_string); // 0x9a Func
	
Label_156:
	WaitForAnimEnd(); // 0x9c Func
	var_153_string = var_3_string; // 0x9e PushT
	if(var_153_string == 0) goto Label_161; // 0x9f JumpB
	goto Label_166; // 0xa0 Jump
	
Label_161:
	var_154_string = "all"; // 0xa1 PushS
	var_155_string = "idle"; // 0xa2 PushS
	PlayAnimation(var_154_string, var_155_string); // 0xa3 Func
	goto Label_156; // 0xa5 Jump
	
Label_120:
	var_156_string = ""; // 0x78 PushV
	var_156_string = "Neutral"; // 0x79 MovS
	func_167(var_88_object, var_156_string); // 0x7a NEW_2
	var_157_int = 532809; // 0x7c PushI
	SetMessage(var_157_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_158_int = 532810; // 0x81 PushI
	var_159_int = -1; // 0x82 PushI
	var_160_int = 34287; // 0x83 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x84 TObjFunc
	goto Label_137; // 0x86 Jump
}


func_460(var_18_bool)
{
	var_18_bool = 1; // 0x1cc MovB
	return 0; // 0x1cd Return
}


func_462(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1cf PushV
	func_635(var_23_bool); // 0x1d0 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1d2 Not
	if(var_26_bool == 0) goto Label_469; // 0x1d3 JumpB
	return 0; // 0x1d4 Return
	
Label_469:
	var_27_string = "player"; // 0x1d5 PushS
	FindActor(var_17_bool, var_27_string); // 0x1d6 Func
	var_2_object = 0; // 0x1d8 TMovB
	var_3_string = 0; // 0x1d9 TMovB
	var_0_object = var_21_float; // 0x1da TMov
	var_1_object = var_22_float; // 0x1db TMov
	var_28_int = 10; // 0x1dc PushI
	var_29_float = 1.0; // 0x1dd PushF
	SetTimer(var_28_int, var_29_float); // 0x1de Func
	func_541(); // 0x1e1 NEW_2
	var_81_bool = var_3_string == 0; // 0x1e3 Not
	if(var_81_bool == 0) goto Label_488; // 0x1e4 JumpB
	var_82_int = 10; // 0x1e5 PushI
	KillTimer(var_82_int); // 0x1e6 Func
	
Label_488:
	return 0; // 0x1e8 Return
}


func_847(var_104_bool)
{
	var_106_int = 0; var_107_string = ""; // 0x350 PushV
	var_107_string = "ood1SalesmanLaska1"; // 0x351 MovS
	func_790(var_106_int, var_107_string); // 0x352 NEW_2
	var_108_int = 0; // 0x354 PushI
	var_109_bool = var_106_int == var_108_int; // 0x355 Eq
	if(var_109_bool == 0) goto Label_857; // 0x356 JumpB
	var_104_bool = 1; // 0x357 MovB
	return 0; // 0x358 Return
	
Label_857:
	var_104_bool = 0; // 0x359 MovB
	return 0; // 0x35a Return
}


func_725(var_140_string)
{
	var_141_bool = 0; var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_float = 0; var_146_float = 0; // 0x2d5 PushV
	lshHasAnimation(var_144_bool, var_140_string); // 0x2d6 Func
	var_147_bool = var_144_bool; // 0x2d8 Push
	if(var_147_bool == 0) goto Label_736; // 0x2d9 JumpB
	lshGetAnimTimes(var_140_string, var_145_float, var_146_float); // 0x2da Func
	var_148_bool = 0; // 0x2dc PushB
	lshPlayAnimation(var_145_float, var_146_float, var_148_bool); // 0x2dd Func
	goto Label_740; // 0x2df Jump
	
Label_740:
	return 6; // 0x2e4 Return
	
Label_736:
	var_149_string = "Can't find lsh animation : "; // 0x2e0 PushS
	var_150_int = var_149_string + var_140_string; // 0x2e1 Add
	Trace(var_150_int); // 0x2e2 Func
}


func_859(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x35b PushV
	var_81_string = "branch"; // 0x35c PushS
	GetVariable(var_81_string, var_80_int); // 0x35d Func
	var_82_int = 0; // 0x35f PushI
	var_83_bool = var_80_int == var_82_int; // 0x360 Eq
	if(var_83_bool == 0) goto Label_869; // 0x361 JumpB
	var_78_int = 1; // 0x362 MovI
	return 2; // 0x363 Return
	
Label_869:
	var_84_int = 1; // 0x365 PushI
	var_85_bool = var_80_int == var_84_int; // 0x366 Eq
	if(var_85_bool == 0) goto Label_874; // 0x367 JumpB
	var_78_int = 2; // 0x368 MovI
	return 2; // 0x369 Return
	
Label_874:
	var_78_int = 3; // 0x36a MovI
	return 2; // 0x36b Return
}


func_741(var_118_string, var_119_bool)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x2e5 PushV
	lshHasAnimation(var_125_bool, var_118_string); // 0x2e6 Func
	var_128_bool = var_125_bool; // 0x2e8 Push
	if(var_128_bool == 0) goto Label_751; // 0x2e9 JumpB
	lshGetAnimTimes(var_118_string, var_126_float, var_127_float); // 0x2ea Func
	lshPlayAnimation(var_126_float, var_127_float, var_119_bool); // 0x2ec Func
	goto Label_755; // 0x2ee Jump
	
Label_755:
	return 6; // 0x2f3 Return
	
Label_751:
	var_129_string = "Can't find lsh animation : "; // 0x2ef PushS
	var_130_int = var_129_string + var_118_string; // 0x2f0 Add
	Trace(var_130_int); // 0x2f1 Func
}


func_489(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1e9 PushV
	var_18_bool = var_4_bool == 0; // 0x1ea NullEq
	if(var_18_bool == 0) goto Label_494; // 0x1eb JumpB
	var_15_bool = 0; // 0x1ec MovB
	return 2; // 0x1ed Return
	
Label_494:
	var_19_float = 0; var_20_object = Obj(); // 0x1ee PushV
	var_20_object = var_4_bool; // 0x1ef MovT
	func_627(var_20_object); // 0x1f0 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1f2 Sqrt2
	var_27_object = var_2_object; // 0x1f3 PushT
	if(var_27_object == 0) goto Label_502; // 0x1f4 JumpB
	var_17_float = var_17_float - var_1_object; // 0x1f5 Sub2
	
Label_502:
	var_15_bool = var_17_float < var_0_object; // 0x1f6 LT2
	return 2; // 0x1f7 Return
}


func_620(var_71_bool)
{
	var_71_bool = 1; // 0x26c MovB
	return 0; // 0x26d Return
}


func_622()
{
	StopAnimation(); // 0x26e Func
	StopGroup0(); // 0x270 Func
	return 0; // 0x272 Return
}


func_627(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x273 PushV
	GetPosition(var_24_cvector); // 0x274 Func
	GetPosition(var_25_cvector); // 0x276 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x278 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x279 Or2
	return 6; // 0x27a Return
}


func_756(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2f4 PushV
	GetEyesHeight(var_32_float); // 0x2f5 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2f7 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2f8 PushE
	var_34_float = var_32_float; // 0x2f9 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2fa PopE
	var_35_string = "head"; // 0x2fb PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2fc Func
	return 4; // 0x2fe Return
}


func_635(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x27b PushV
	IsLoaded(var_25_bool); // 0x27c Func
	var_23_bool = var_25_bool; // 0x27e Mov
	return 2; // 0x27f Return
}


func_767()
{
	var_15_bool = 0; // 0x2ff PushV
	func_803(var_15_bool); // 0x300 NEW_2
	if(var_15_bool == 0) goto Label_773; // 0x302 JumpB
	lshStopSpeech(); // 0x303 Func
	
Label_773:
	return 0; // 0x305 Return
}


