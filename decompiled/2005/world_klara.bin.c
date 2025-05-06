task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0; // 0x1 PushV
	var_3_int = var_0_int; // 0x2 Mov
	var_4_float = var_1_float; // 0x3 Mov
	func_8637(var_3_int, var_4_float); // 0x4 NEW_2
	if(var_2_bool == 0) goto Label_8; // 0x6 JumpB
	return 0; // 0x7 Return
	
Label_8:
	var_4307_bool = 0; var_4308_int = 0; var_4309_float = 0; // 0x8 PushV
	var_4308_int = var_0_int; // 0x9 Mov
	var_4309_float = var_1_float; // 0xa Mov
	func_11184(var_4308_int, var_4309_float); // 0xb NEW_2
	if(var_4307_bool == 0) goto Label_15; // 0xd JumpB
	return 0; // 0xe Return
	
Label_15:
	var_4706_int = 0; var_4707_float = 0; // 0xf PushV
	var_4706_int = var_0_int; // 0x10 Mov
	var_4707_float = var_1_float; // 0x11 Mov
	func_11280(var_4706_int, var_4707_float); // 0x12 NEW_2
	return 0; // 0x14 Return
}


event_26(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; // 0x1d29 PushV
	var_6_string = "playsound"; // 0x1d2a PushS
	var_7_bool = var_0_string == var_6_string; // 0x1d2b Eq
	if(var_7_bool == 0) goto Label_7472; // 0x1d2c JumpB
	PlaySound(var_1_string); // 0x1d2d Func
	goto Label_7493; // 0x1d2f Jump
	
Label_7493:
	return 4; // 0x1d45 Return
	
Label_7472:
	var_8_string = "enable_bonfire"; // 0x1d30 PushS
	var_9_bool = var_0_string == var_8_string; // 0x1d31 Eq
	if(var_9_bool == 0) goto Label_7483; // 0x1d32 JumpB
	_strtoi(var_4_int, var_1_string); // 0x1d33 Func
	var_10_int = 0; // 0x1d35 PushV
	var_11_int = 1; // 0x1d36 PushI
	var_10_int = var_4_int - var_11_int; // 0x1d37 Sub2
	func_7605(var_10_int); // 0x1d38 NEW_2
	goto Label_7493; // 0x1d3a Jump
	
Label_7483:
	var_64_string = "disable_bonfire"; // 0x1d3b PushS
	var_65_bool = var_0_string == var_64_string; // 0x1d3c Eq
	if(var_65_bool == 0) goto Label_7493; // 0x1d3d JumpB
	_strtoi(var_5_int, var_1_string); // 0x1d3e Func
	var_66_int = 0; // 0x1d40 PushV
	var_67_int = 1; // 0x1d41 PushI
	var_66_int = var_5_int - var_67_int; // 0x1d42 Sub2
	func_7682(var_66_int); // 0x1d43 NEW_2
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x1d46 PushV
	var_22_string = "horror"; // 0x1d47 PushS
	var_23_bool = var_0_string == var_22_string; // 0x1d48 Eq
	if(var_23_bool == 0) goto Label_7533; // 0x1d49 JumpB
	_strtoi(var_12_int, var_1_string); // 0x1d4a Func
	var_24_int = 0; // 0x1d4c PushV
	var_24_int = var_12_int; // 0x1d4d Mov
	func_442(var_24_int); // 0x1d4e NEW_2
	var_39_object = GlobalVars[13]; // 0x1d50 PushGE
	size(var_13_int); // 0x1d51 ObjFunc
	var_40_bool = 0; // 0x1d53 PushV
	var_40_bool = 0; // 0x1d54 MovB
	var_41_int = 0; // 0x1d55 PushI
	var_42_bool = var_12_int >= var_41_int; // 0x1d56 GE
	if(var_42_bool == 0) goto Label_7515; // 0x1d57 JumpB
	var_43_bool = var_12_int < var_13_int; // 0x1d58 LT
	if(var_43_bool == 0) goto Label_7515; // 0x1d59 JumpB
	var_40_bool = 1; // 0x1d5a MovB
	
Label_7515:
	if(var_40_bool == 0) goto Label_7529; // 0x1d5b JumpB
	var_44_object = GlobalVars[13]; // 0x1d5c PushGE
	get(var_14_object, var_12_int); // 0x1d5d ObjFunc
	var_45_object = Obj(); var_46_int = 0; // 0x1d5f PushV
	var_45_object = var_14_object; // 0x1d60 Mov
	var_46_int = 1; // 0x1d61 MovI
	func_305(var_46_int); // 0x1d62 NEW_2
	var_72_string = "Replaced"; // 0x1d64 PushS
	Trace(var_72_string); // 0x1d65 Func
	var_14_object = 0; // 0x1d67 SetNull
	goto Label_7532; // 0x1d68 Jump
	
Label_7532:
	goto Label_7604; // 0x1d6c Jump
	
Label_7604:
	return 20; // 0x1db4 Return
	
Label_7529:
	var_73_string = "Invalid region index"; // 0x1d69 PushS
	Trace(var_73_string); // 0x1d6a Func
	
Label_7533:
	var_74_string = "nail"; // 0x1d6d PushS
	var_75_bool = var_0_string == var_74_string; // 0x1d6e Eq
	if(var_75_bool == 0) goto Label_7571; // 0x1d6f JumpB
	_strtoi(var_15_int, var_1_string); // 0x1d70 Func
	var_76_int = 0; // 0x1d72 PushV
	var_76_int = var_15_int; // 0x1d73 Mov
	func_472(var_76_int); // 0x1d74 NEW_2
	var_88_object = GlobalVars[13]; // 0x1d76 PushGE
	size(var_16_int); // 0x1d77 ObjFunc
	var_89_bool = 0; // 0x1d79 PushV
	var_89_bool = 0; // 0x1d7a MovB
	var_90_int = 0; // 0x1d7b PushI
	var_91_bool = var_15_int >= var_90_int; // 0x1d7c GE
	if(var_91_bool == 0) goto Label_7553; // 0x1d7d JumpB
	var_92_bool = var_15_int < var_16_int; // 0x1d7e LT
	if(var_92_bool == 0) goto Label_7553; // 0x1d7f JumpB
	var_89_bool = 1; // 0x1d80 MovB
	
Label_7553:
	if(var_89_bool == 0) goto Label_7567; // 0x1d81 JumpB
	var_93_object = GlobalVars[13]; // 0x1d82 PushGE
	get(var_17_object, var_15_int); // 0x1d83 ObjFunc
	var_94_object = Obj(); var_95_int = 0; // 0x1d85 PushV
	var_94_object = var_17_object; // 0x1d86 Mov
	var_95_int = 2; // 0x1d87 MovI
	func_305(var_95_int); // 0x1d88 NEW_2
	var_96_string = "Replaced"; // 0x1d8a PushS
	Trace(var_96_string); // 0x1d8b Func
	var_17_object = 0; // 0x1d8d SetNull
	goto Label_7570; // 0x1d8e Jump
	
Label_7570:
	goto Label_7604; // 0x1d92 Jump
	
Label_7567:
	var_97_string = "Invalid region index"; // 0x1d8f PushS
	Trace(var_97_string); // 0x1d90 Func
	
Label_7571:
	var_98_string = "fogme"; // 0x1d93 PushS
	var_99_bool = var_0_string == var_98_string; // 0x1d94 Eq
	if(var_99_bool == 0) goto Label_7591; // 0x1d95 JumpB
	var_100_object = Obj(); // 0x1d96 PushV
	func_74(var_100_object); // 0x1d97 NEW_2
	var_18_object = var_100_object; // 0x1d98 Mov
	GetScene(var_19_object); // 0x1d9a ObjFunc
	GetPosition(var_20_cvector); // 0x1d9c ObjFunc
	var_104_string = "fog"; // 0x1d9e PushS
	var_105_cvector = CVector(0.0, 0.0, 1.0); // 0x1d9f PushVec
	var_106_string = "fog_stat.xml"; // 0x1da0 PushS
	AddActorByType(var_21_object, var_104_string, var_19_object, var_20_cvector, var_105_cvector, var_106_string); // 0x1da1 Func
	var_21_object = 0; // 0x1da3 SetNull
	var_19_object = 0; // 0x1da4 SetNull
	var_18_object = 0; // 0x1da5 SetNull
	goto Label_7604; // 0x1da6 Jump
	
Label_7591:
	var_107_string = "sepia"; // 0x1da7 PushS
	var_108_bool = var_0_string == var_107_string; // 0x1da8 Eq
	if(var_108_bool == 0) goto Label_7598; // 0x1da9 JumpB
	func_289(); // 0x1dab NEW_2
	goto Label_7604; // 0x1dad Jump
	
Label_7598:
	var_111_string = "nosepia"; // 0x1dae PushS
	var_112_bool = var_0_string == var_111_string; // 0x1daf Eq
	if(var_112_bool == 0) goto Label_7604; // 0x1db0 JumpB
	func_294(); // 0x1db2 NEW_2
}


main()
{
	var_0_string = "branch"; // 0x15 PushS
	var_1_int = 2; // 0x16 PushI
	SetVariable(var_0_string, var_1_int); // 0x17 Func
	var_2_int = 0; // 0x19 PushI
	var_3_int = 2; // 0x1a PushI
	SetSaveProperty(var_2_int, var_3_int); // 0x1b Func
	func_52(); // 0x1e NEW_2
	func_7905(); // 0x21 NEW_2
	func_8692(); // 0x24 NEW_2
	func_11245(); // 0x27 NEW_2
	var_4578_float = 0; // 0x29 PushV
	var_4579_float = 0; // 0x2a PushV
	func_284(var_4579_float); // 0x2b NEW_2
	var_4578_float = var_4579_float; // 0x2c Mov
	func_12224(); // 0x2e NEW_2
	
Label_48:
	Hold(); // 0x30 Func
	goto Label_48; // 0x32 Jump
}


func_5124(var_3678_int, var_3679_int, var_3680_object, var_3681_object, var_3682_object, var_3683_object)
{
	var_3684_int = 0; // 0x1405 PushI
	var_3685_bool = var_3679_int == var_3684_int; // 0x1406 Eq
	if(var_3685_bool == 0) goto Label_5164; // 0x1407 JumpB
	var_3686_int = 0; var_3687_bool = 0; // 0x1408 PushV
	var_3686_int = 3; // 0x1409 MovI
	var_3687_bool = 0; // 0x140a MovB
	func_796(var_3686_int, var_3687_bool); // 0x140b NEW_2
	var_3688_int = 0; var_3689_bool = 0; var_3690_int = 0; // 0x140d PushV
	var_3688_int = 3; // 0x140e MovI
	var_3689_bool = 0; // 0x140f MovB
	var_3690_int = 1; // 0x1410 MovI
	func_813(var_3688_int, var_3689_bool, var_3690_int); // 0x1411 NEW_2
	var_3691_int = 0; var_3692_int = 0; var_3693_object = Obj(); var_3694_object = Obj(); var_3695_object = Obj(); // 0x1413 PushV
	var_3691_int = 3; // 0x1414 MovI
	var_3692_int = var_3678_int; // 0x1415 Mov
	var_3693_object = var_3680_object; // 0x1416 Mov
	var_3694_object = var_3681_object; // 0x1417 Mov
	var_3695_object = var_3682_object; // 0x1418 Mov
	func_720(var_3691_int, var_3692_int, var_3693_object, var_3694_object, var_3695_object); // 0x1419 NEW_2
	var_3696_object = Obj(); var_3697_int = 0; // 0x141b PushV
	var_3696_object = var_3683_object; // 0x141c Mov
	var_3697_int = 2; // 0x141d MovI
	func_305(var_3697_int); // 0x141e NEW_2
	var_3698_int = 0; var_3699_bool = 0; var_3700_int = 0; // 0x1420 PushV
	var_3698_int = 3; // 0x1421 MovI
	var_3699_bool = 0; // 0x1422 MovB
	var_3700_int = 7; // 0x1423 MovI
	func_870(var_3698_int, var_3699_bool, var_3700_int); // 0x1424 NEW_2
	var_3701_int = 0; var_3702_bool = 0; var_3703_int = 0; // 0x1426 PushV
	var_3701_int = 3; // 0x1427 MovI
	var_3702_bool = 1; // 0x1428 MovB
	var_3703_int = 7; // 0x1429 MovI
	func_932(var_3701_int, var_3702_bool, var_3703_int); // 0x142a NEW_2
	
Label_5164:
	var_3704_int = 0; var_3705_bool = 0; // 0x142c PushV
	var_3704_int = 3; // 0x142d MovI
	var_3705_bool = 0; // 0x142e MovB
	func_779(var_3704_int, var_3705_bool); // 0x142f NEW_2
	var_3706_int = 0; var_3707_int = 0; var_3708_int = 0; // 0x1431 PushV
	var_3706_int = 3; // 0x1432 MovI
	var_3707_int = var_3678_int; // 0x1433 Mov
	var_3708_int = var_3679_int; // 0x1434 Mov
	func_3847(var_3706_int, var_3707_int, var_3708_int); // 0x1435 NEW_2
	return 0; // 0x1437 Return
}


func_8197()
{
	var_4425_object = Obj(); var_4426_object = Obj(); // 0x2005 PushV
	GetMainOutdoorScene(var_4426_object); // 0x2006 Func
	var_4427_object = GlobalVars[0]; // 0x2008 PushGE
	var_4428_object = Obj(); var_4429_object = Obj(); var_4430_int = 0; // 0x2009 PushV
	var_4429_object = var_4426_object; // 0x200a Mov
	var_4430_int = 1; // 0x200b MovI
	func_7759(var_4428_object, var_4429_object, var_4430_int); // 0x200c NEW_2
	var_4427_object = var_4428_object; // 0x200d Mov
	GlobalVars[0] = var_4427_object; // 0x200f PopGE
	var_4450_object = GlobalVars[1]; // 0x2010 PushGE
	var_4451_object = Obj(); var_4452_object = Obj(); var_4453_int = 0; // 0x2011 PushV
	var_4452_object = var_4426_object; // 0x2012 Mov
	var_4453_int = 2; // 0x2013 MovI
	func_7759(var_4451_object, var_4452_object, var_4453_int); // 0x2014 NEW_2
	var_4450_object = var_4451_object; // 0x2015 Mov
	GlobalVars[1] = var_4450_object; // 0x2017 PopGE
	var_4454_object = GlobalVars[2]; // 0x2018 PushGE
	var_4455_object = Obj(); var_4456_object = Obj(); var_4457_int = 0; // 0x2019 PushV
	var_4456_object = var_4426_object; // 0x201a Mov
	var_4457_int = 3; // 0x201b MovI
	func_7759(var_4455_object, var_4456_object, var_4457_int); // 0x201c NEW_2
	var_4454_object = var_4455_object; // 0x201d Mov
	GlobalVars[2] = var_4454_object; // 0x201f PopGE
	var_4458_object = GlobalVars[3]; // 0x2020 PushGE
	var_4459_object = Obj(); var_4460_object = Obj(); var_4461_int = 0; // 0x2021 PushV
	var_4460_object = var_4426_object; // 0x2022 Mov
	var_4461_int = 4; // 0x2023 MovI
	func_7759(var_4459_object, var_4460_object, var_4461_int); // 0x2024 NEW_2
	var_4458_object = var_4459_object; // 0x2025 Mov
	GlobalVars[3] = var_4458_object; // 0x2027 PopGE
	var_4462_object = GlobalVars[4]; // 0x2028 PushGE
	var_4463_object = Obj(); var_4464_object = Obj(); var_4465_int = 0; // 0x2029 PushV
	var_4464_object = var_4426_object; // 0x202a Mov
	var_4465_int = 5; // 0x202b MovI
	func_7759(var_4463_object, var_4464_object, var_4465_int); // 0x202c NEW_2
	var_4462_object = var_4463_object; // 0x202d Mov
	GlobalVars[4] = var_4462_object; // 0x202f PopGE
	var_4466_object = GlobalVars[5]; // 0x2030 PushGE
	var_4467_object = Obj(); var_4468_object = Obj(); var_4469_int = 0; // 0x2031 PushV
	var_4468_object = var_4426_object; // 0x2032 Mov
	var_4469_int = 6; // 0x2033 MovI
	func_7759(var_4467_object, var_4468_object, var_4469_int); // 0x2034 NEW_2
	var_4466_object = var_4467_object; // 0x2035 Mov
	GlobalVars[5] = var_4466_object; // 0x2037 PopGE
	var_4470_object = GlobalVars[12]; // 0x2038 PushGE
	var_4471_object = Obj(); // 0x2039 PushV
	func_126(var_4471_object); // 0x203a NEW_2
	var_4470_object = var_4471_object; // 0x203b Mov
	GlobalVars[12] = var_4470_object; // 0x203d PopGE
	var_4472_bool = 0; // 0x203e PushV
	var_4472_bool = 0; // 0x203f MovB
	func_7770(var_4472_bool); // 0x2040 NEW_2
	func_8492(); // 0x2043 NEW_2
	func_8567(); // 0x2046 NEW_2
	var_4569_int = 100; // 0x2048 PushI
	SendWorldWndMessage(var_4569_int); // 0x2049 Func
	return 2; // 0x204b Return
}


func_13318(var_4304_int)
{
	var_4305_object = Obj(); var_4306_object = Obj(); var_4307_object = Obj(); var_4308_object = Obj(); var_4309_object = Obj(); var_4310_string = ""; var_4311_string = ""; var_4312_object = Obj(); var_4313_object = Obj(); var_4314_object = Obj(); var_4315_object = Obj(); var_4316_object = Obj(); var_4317_string = ""; var_4318_string = ""; // 0x3406 PushV
	var_4319_int = 1; // 0x3407 PushI
	var_4320_bool = var_4304_int == var_4319_int; // 0x3408 Eq
	if(var_4320_bool == 0) goto Label_13332; // 0x3409 JumpB
	var_4321_string = "Special diseased house: r4_house_2_02"; // 0x340a PushS
	Trace(var_4321_string); // 0x340b Func
	var_4322_string = "r4_house_2_02"; // 0x340d PushS
	GetSceneByName(var_4312_object, var_4322_string); // 0x340e Func
	var_4323_string = "s_r4_house_2_02.isc"; // 0x3410 PushS
	ReplaceScene(var_4312_object, var_4323_string); // 0x3411 Func
	var_4312_object = 0; // 0x3413 SetNull
	
Label_13332:
	var_4324_int = 3; // 0x3414 PushI
	var_4325_bool = var_4304_int == var_4324_int; // 0x3415 Eq
	if(var_4325_bool == 0) goto Label_13336; // 0x3416 JumpB
	goto Label_13371; // 0x3417 Jump
	
Label_13371:
	var_4326_bool = 0; // 0x343b PushV
	var_4326_bool = 0; // 0x343c MovB
	var_4327_int = 1; // 0x343d PushI
	var_4328_int = var_4304_int + var_4327_int; // 0x343e Add
	var_4329_int = 8; // 0x343f PushI
	var_4330_bool = var_4328_int >= var_4329_int; // 0x3440 GE
	if(var_4330_bool == 0) goto Label_13384; // 0x3441 JumpB
	var_4331_int = 1; // 0x3442 PushI
	var_4332_int = var_4304_int + var_4331_int; // 0x3443 Add
	var_4333_int = 11; // 0x3444 PushI
	var_4334_bool = var_4332_int <= var_4333_int; // 0x3445 LE
	if(var_4334_bool == 0) goto Label_13384; // 0x3446 JumpB
	var_4326_bool = 1; // 0x3447 MovB
	
Label_13384:
	if(var_4326_bool == 0) goto Label_13414; // 0x3448 JumpB
	var_4335_string = ""; var_4336_int = 0; // 0x3449 PushV
	var_4337_int = 1; // 0x344a PushI
	var_4336_int = var_4304_int + var_4337_int; // 0x344b Add2
	func_12791(var_4335_string, var_4336_int); // 0x344c NEW_2
	var_4317_string = var_4335_string; // 0x344d Mov
	GetSceneByName(var_4316_object, var_4317_string); // 0x344f Func
	var_4346_string = "k2s_"; // 0x3451 PushS
	var_4347_int = var_4346_string + var_4317_string; // 0x3452 Add
	var_4348_string = ".isc"; // 0x3453 PushS
	var_4349_int = var_4347_int + var_4348_string; // 0x3454 Add
	ReplaceScene(var_4316_object, var_4349_int); // 0x3455 Func
	var_4350_string = ""; var_4351_int = 0; // 0x3457 PushV
	var_4352_int = 1; // 0x3458 PushI
	var_4351_int = var_4304_int + var_4352_int; // 0x3459 Add2
	func_12817(var_4350_string, var_4351_int); // 0x345a NEW_2
	var_4318_string = var_4350_string; // 0x345b Mov
	GetSceneByName(var_4316_object, var_4318_string); // 0x345d Func
	var_4361_string = "k2s_"; // 0x345f PushS
	var_4362_int = var_4361_string + var_4318_string; // 0x3460 Add
	var_4363_string = ".isc"; // 0x3461 PushS
	var_4364_int = var_4362_int + var_4363_string; // 0x3462 Add
	ReplaceScene(var_4316_object, var_4364_int); // 0x3463 Func
	var_4316_object = 0; // 0x3465 SetNull
	
Label_13414:
	return 14; // 0x3466 Return
	
Label_13336:
	var_4365_int = 4; // 0x3418 PushI
	var_4366_bool = var_4304_int == var_4365_int; // 0x3419 Eq
	if(var_4366_bool == 0) goto Label_13347; // 0x341a JumpB
	var_4367_string = "theater"; // 0x341b PushS
	GetSceneByName(var_4313_object, var_4367_string); // 0x341c Func
	var_4368_string = "dtheater_klara.isc"; // 0x341e PushS
	ReplaceScene(var_4313_object, var_4368_string); // 0x341f Func
	var_4313_object = 0; // 0x3421 SetNull
	goto Label_13371; // 0x3422 Jump
	
Label_13347:
	var_4369_int = 8; // 0x3423 PushI
	var_4370_bool = var_4304_int == var_4369_int; // 0x3424 Eq
	if(var_4370_bool == 0) goto Label_13361; // 0x3425 JumpB
	var_4371_string = "Special replaced house: uprava_admin"; // 0x3426 PushS
	Trace(var_4371_string); // 0x3427 Func
	var_4372_string = "uprava_admin"; // 0x3429 PushS
	GetSceneByName(var_4314_object, var_4372_string); // 0x342a Func
	var_4373_string = "uprava_admin_army_klara.isc"; // 0x342c PushS
	ReplaceScene(var_4314_object, var_4373_string); // 0x342d Func
	var_4314_object = 0; // 0x342f SetNull
	goto Label_13371; // 0x3430 Jump
	
Label_13361:
	var_4374_int = 11; // 0x3431 PushI
	var_4375_bool = var_4304_int == var_4374_int; // 0x3432 Eq
	if(var_4375_bool == 0) goto Label_13371; // 0x3433 JumpB
	var_4376_string = "theater"; // 0x3434 PushS
	GetSceneByName(var_4315_object, var_4376_string); // 0x3435 Func
	var_4377_string = "theater_klara.isc"; // 0x3437 PushS
	ReplaceScene(var_4315_object, var_4377_string); // 0x3438 Func
	var_4315_object = 0; // 0x343a SetNull
}


func_7179(var_2998_int, var_2999_int, var_3000_object, var_3001_object, var_3002_object, var_3003_object)
{
	var_3004_int = 0; // 0x1c0c PushI
	var_3005_bool = var_2999_int == var_3004_int; // 0x1c0d Eq
	if(var_3005_bool == 0) goto Label_7219; // 0x1c0e JumpB
	var_3006_int = 0; var_3007_bool = 0; // 0x1c0f PushV
	var_3006_int = 14; // 0x1c10 MovI
	var_3007_bool = 1; // 0x1c11 MovB
	func_796(var_3006_int, var_3007_bool); // 0x1c12 NEW_2
	var_3008_int = 0; var_3009_bool = 0; var_3010_int = 0; // 0x1c14 PushV
	var_3008_int = 14; // 0x1c15 MovI
	var_3009_bool = 1; // 0x1c16 MovB
	var_3010_int = 1; // 0x1c17 MovI
	func_813(var_3008_int, var_3009_bool, var_3010_int); // 0x1c18 NEW_2
	var_3011_int = 0; var_3012_int = 0; var_3013_object = Obj(); var_3014_object = Obj(); var_3015_object = Obj(); // 0x1c1a PushV
	var_3011_int = 14; // 0x1c1b MovI
	var_3012_int = var_2998_int; // 0x1c1c Mov
	var_3013_object = var_3000_object; // 0x1c1d Mov
	var_3014_object = var_3001_object; // 0x1c1e Mov
	var_3015_object = var_3002_object; // 0x1c1f Mov
	func_641(var_3011_int, var_3012_int, var_3013_object, var_3014_object, var_3015_object); // 0x1c20 NEW_2
	var_3016_object = Obj(); var_3017_int = 0; // 0x1c22 PushV
	var_3016_object = var_3003_object; // 0x1c23 Mov
	var_3017_int = 1; // 0x1c24 MovI
	func_305(var_3017_int); // 0x1c25 NEW_2
	var_3018_int = 0; var_3019_bool = 0; var_3020_int = 0; // 0x1c27 PushV
	var_3018_int = 14; // 0x1c28 MovI
	var_3019_bool = 1; // 0x1c29 MovB
	var_3020_int = 5; // 0x1c2a MovI
	func_870(var_3018_int, var_3019_bool, var_3020_int); // 0x1c2b NEW_2
	var_3021_int = 0; var_3022_bool = 0; var_3023_int = 0; // 0x1c2d PushV
	var_3021_int = 14; // 0x1c2e MovI
	var_3022_bool = 0; // 0x1c2f MovB
	var_3023_int = 5; // 0x1c30 MovI
	func_932(var_3021_int, var_3022_bool, var_3023_int); // 0x1c31 NEW_2
	
Label_7219:
	var_3024_int = 0; var_3025_bool = 0; // 0x1c33 PushV
	var_3024_int = 14; // 0x1c34 MovI
	var_3025_bool = 0; // 0x1c35 MovB
	func_779(var_3024_int, var_3025_bool); // 0x1c36 NEW_2
	var_3026_int = 0; var_3027_int = 0; var_3028_int = 0; // 0x1c38 PushV
	var_3026_int = 14; // 0x1c39 MovI
	var_3027_int = var_2998_int; // 0x1c3a Mov
	var_3028_int = var_2999_int; // 0x1c3b Mov
	func_2584(var_3026_int, var_3027_int, var_3028_int); // 0x1c3c NEW_2
	return 0; // 0x1c3e Return
}


func_6158(var_2833_int, var_2834_int, var_2835_object, var_2836_object, var_2837_object, var_2838_object)
{
	var_2839_int = 0; // 0x180f PushI
	var_2840_bool = var_2834_int == var_2839_int; // 0x1810 Eq
	if(var_2840_bool == 0) goto Label_6198; // 0x1811 JumpB
	var_2841_int = 0; var_2842_bool = 0; // 0x1812 PushV
	var_2841_int = 9; // 0x1813 MovI
	var_2842_bool = 1; // 0x1814 MovB
	func_796(var_2841_int, var_2842_bool); // 0x1815 NEW_2
	var_2843_int = 0; var_2844_bool = 0; var_2845_int = 0; // 0x1817 PushV
	var_2843_int = 9; // 0x1818 MovI
	var_2844_bool = 1; // 0x1819 MovB
	var_2845_int = 1; // 0x181a MovI
	func_813(var_2843_int, var_2844_bool, var_2845_int); // 0x181b NEW_2
	var_2846_int = 0; var_2847_int = 0; var_2848_object = Obj(); var_2849_object = Obj(); var_2850_object = Obj(); // 0x181d PushV
	var_2846_int = 9; // 0x181e MovI
	var_2847_int = var_2833_int; // 0x181f Mov
	var_2848_object = var_2835_object; // 0x1820 Mov
	var_2849_object = var_2836_object; // 0x1821 Mov
	var_2850_object = var_2837_object; // 0x1822 Mov
	func_641(var_2846_int, var_2847_int, var_2848_object, var_2849_object, var_2850_object); // 0x1823 NEW_2
	var_2851_object = Obj(); var_2852_int = 0; // 0x1825 PushV
	var_2851_object = var_2838_object; // 0x1826 Mov
	var_2852_int = 1; // 0x1827 MovI
	func_305(var_2852_int); // 0x1828 NEW_2
	var_2853_int = 0; var_2854_bool = 0; var_2855_int = 0; // 0x182a PushV
	var_2853_int = 9; // 0x182b MovI
	var_2854_bool = 1; // 0x182c MovB
	var_2855_int = 7; // 0x182d MovI
	func_870(var_2853_int, var_2854_bool, var_2855_int); // 0x182e NEW_2
	var_2856_int = 0; var_2857_bool = 0; var_2858_int = 0; // 0x1830 PushV
	var_2856_int = 9; // 0x1831 MovI
	var_2857_bool = 0; // 0x1832 MovB
	var_2858_int = 7; // 0x1833 MovI
	func_932(var_2856_int, var_2857_bool, var_2858_int); // 0x1834 NEW_2
	
Label_6198:
	var_2859_int = 0; var_2860_bool = 0; // 0x1836 PushV
	var_2859_int = 9; // 0x1837 MovI
	var_2860_bool = 0; // 0x1838 MovB
	func_779(var_2859_int, var_2860_bool); // 0x1839 NEW_2
	var_2861_int = 0; var_2862_int = 0; var_2863_int = 0; // 0x183b PushV
	var_2861_int = 9; // 0x183c MovI
	var_2862_int = var_2833_int; // 0x183d Mov
	var_2863_int = var_2834_int; // 0x183e Mov
	func_2764(var_2861_int, var_2862_int, var_2863_int); // 0x183f NEW_2
	return 0; // 0x1841 Return
}


func_11280(var_4706_int, var_4707_float)
{
	var_4708_int = 45095; // 0x2c11 PushI
	var_4709_bool = var_4706_int == var_4708_int; // 0x2c12 Eq
	if(var_4709_bool == 0) goto Label_11298; // 0x2c13 JumpB
	var_4710_object = Obj(); var_4711_object = Obj(); // 0x2c14 PushV
	var_4712_object = GlobalVars[16]; // 0x2c15 PushGE
	var_4710_object = var_4712_object; // 0x2c16 Mov
	var_4713_object = GlobalVars[16]; // 0x2c18 PushGE
	var_4711_object = var_4713_object; // 0x2c19 Mov
	func_9920(); // 0x2c1b NEW_2
	var_4761_bool = 0; var_4762_string = ""; var_4763_string = ""; // 0x2c1d PushV
	var_4762_string = "quest_k1_01"; // 0x2c1e MovS
	var_4763_string = "cleanup"; // 0x2c1f MovS
	func_239(var_4761_bool, var_4762_string, var_4763_string); // 0x2c20 NEW_2
	
Label_11298:
	var_4764_int = 45170; // 0x2c22 PushI
	var_4765_bool = var_4706_int == var_4764_int; // 0x2c23 Eq
	if(var_4765_bool == 0) goto Label_11312; // 0x2c24 JumpB
	var_4766_bool = 0; var_4767_object = Obj(); // 0x2c25 PushV
	var_4768_object = GlobalVars[16]; // 0x2c26 PushGE
	var_4767_object = var_4768_object; // 0x2c27 Mov
	func_11056(var_4766_bool, var_4767_object); // 0x2c29 NEW_2
	if(var_4766_bool == 0) goto Label_11312; // 0x2c2b JumpB
	var_4771_int = 0; var_4772_float = 0; // 0x2c2c PushV
	var_4772_float = var_4707_float; // 0x2c2d Mov
	func_9633(var_4771_int, var_4772_float); // 0x2c2e NEW_2
	
Label_11312:
	var_4780_int = 45275; // 0x2c30 PushI
	var_4781_bool = var_4706_int == var_4780_int; // 0x2c31 Eq
	if(var_4781_bool == 0) goto Label_11324; // 0x2c32 JumpB
	var_4782_object = Obj(); var_4783_object = Obj(); // 0x2c33 PushV
	var_4784_object = GlobalVars[16]; // 0x2c34 PushGE
	var_4782_object = var_4784_object; // 0x2c35 Mov
	var_4785_object = GlobalVars[16]; // 0x2c37 PushGE
	var_4783_object = var_4785_object; // 0x2c38 Mov
	func_10638(); // 0x2c3a NEW_2
	
Label_11324:
	var_4796_int = 45276; // 0x2c3c PushI
	var_4797_bool = var_4706_int == var_4796_int; // 0x2c3d Eq
	if(var_4797_bool == 0) goto Label_11336; // 0x2c3e JumpB
	var_4798_object = Obj(); var_4799_object = Obj(); // 0x2c3f PushV
	var_4800_object = GlobalVars[16]; // 0x2c40 PushGE
	var_4798_object = var_4800_object; // 0x2c41 Mov
	var_4801_object = GlobalVars[16]; // 0x2c43 PushGE
	var_4799_object = var_4801_object; // 0x2c44 Mov
	func_10655(); // 0x2c46 NEW_2
	
Label_11336:
	var_4810_int = 45273; // 0x2c48 PushI
	var_4811_bool = var_4706_int == var_4810_int; // 0x2c49 Eq
	if(var_4811_bool == 0) goto Label_11348; // 0x2c4a JumpB
	var_4812_object = Obj(); var_4813_object = Obj(); // 0x2c4b PushV
	var_4814_object = GlobalVars[16]; // 0x2c4c PushGE
	var_4812_object = var_4814_object; // 0x2c4d Mov
	var_4815_object = GlobalVars[16]; // 0x2c4f PushGE
	var_4813_object = var_4815_object; // 0x2c50 Mov
	func_10604(); // 0x2c52 NEW_2
	
Label_11348:
	var_4824_int = 45274; // 0x2c54 PushI
	var_4825_bool = var_4706_int == var_4824_int; // 0x2c55 Eq
	if(var_4825_bool == 0) goto Label_11360; // 0x2c56 JumpB
	var_4826_object = Obj(); var_4827_object = Obj(); // 0x2c57 PushV
	var_4828_object = GlobalVars[16]; // 0x2c58 PushGE
	var_4826_object = var_4828_object; // 0x2c59 Mov
	var_4829_object = GlobalVars[16]; // 0x2c5b PushGE
	var_4827_object = var_4829_object; // 0x2c5c Mov
	func_10621(); // 0x2c5e NEW_2
	
Label_11360:
	var_4838_int = 45277; // 0x2c60 PushI
	var_4839_bool = var_4706_int == var_4838_int; // 0x2c61 Eq
	if(var_4839_bool == 0) goto Label_11372; // 0x2c62 JumpB
	var_4840_object = Obj(); var_4841_object = Obj(); // 0x2c63 PushV
	var_4842_object = GlobalVars[16]; // 0x2c64 PushGE
	var_4840_object = var_4842_object; // 0x2c65 Mov
	var_4843_object = GlobalVars[16]; // 0x2c67 PushGE
	var_4841_object = var_4843_object; // 0x2c68 Mov
	func_10672(); // 0x2c6a NEW_2
	
Label_11372:
	var_4852_int = 45278; // 0x2c6c PushI
	var_4853_bool = var_4706_int == var_4852_int; // 0x2c6d Eq
	if(var_4853_bool == 0) goto Label_11392; // 0x2c6e JumpB
	var_4854_bool = 0; var_4855_object = Obj(); // 0x2c6f PushV
	var_4856_object = GlobalVars[16]; // 0x2c70 PushGE
	var_4855_object = var_4856_object; // 0x2c71 Mov
	func_10804(var_4855_object); // 0x2c73 NEW_2
	var_4861_bool = var_4854_bool == 0; // 0x2c75 Not
	if(var_4861_bool == 0) goto Label_11392; // 0x2c76 JumpB
	var_4862_object = Obj(); var_4863_object = Obj(); // 0x2c77 PushV
	var_4864_object = GlobalVars[16]; // 0x2c78 PushGE
	var_4862_object = var_4864_object; // 0x2c79 Mov
	var_4865_object = GlobalVars[16]; // 0x2c7b PushGE
	var_4863_object = var_4865_object; // 0x2c7c Mov
	func_10752(); // 0x2c7e NEW_2
	
Label_11392:
	var_4901_int = 45169; // 0x2c80 PushI
	var_4902_bool = var_4706_int == var_4901_int; // 0x2c81 Eq
	if(var_4902_bool == 0) goto Label_11406; // 0x2c82 JumpB
	var_4903_bool = 0; var_4904_object = Obj(); // 0x2c83 PushV
	var_4905_object = GlobalVars[16]; // 0x2c84 PushGE
	var_4904_object = var_4905_object; // 0x2c85 Mov
	func_11056(var_4903_bool, var_4904_object); // 0x2c87 NEW_2
	if(var_4903_bool == 0) goto Label_11406; // 0x2c89 JumpB
	var_4906_int = 0; var_4907_float = 0; // 0x2c8a PushV
	var_4907_float = var_4707_float; // 0x2c8b Mov
	func_9624(var_4906_int, var_4907_float); // 0x2c8c NEW_2
	
Label_11406:
	var_4912_int = 45168; // 0x2c8e PushI
	var_4913_bool = var_4706_int == var_4912_int; // 0x2c8f Eq
	if(var_4913_bool == 0) goto Label_11420; // 0x2c90 JumpB
	var_4914_bool = 0; var_4915_object = Obj(); // 0x2c91 PushV
	var_4916_object = GlobalVars[16]; // 0x2c92 PushGE
	var_4915_object = var_4916_object; // 0x2c93 Mov
	func_11056(var_4914_bool, var_4915_object); // 0x2c95 NEW_2
	if(var_4914_bool == 0) goto Label_11420; // 0x2c97 JumpB
	var_4917_int = 0; var_4918_float = 0; // 0x2c98 PushV
	var_4918_float = var_4707_float; // 0x2c99 Mov
	func_9615(var_4917_int, var_4918_float); // 0x2c9a NEW_2
	
Label_11420:
	var_4923_int = 45258; // 0x2c9c PushI
	var_4924_bool = var_4706_int == var_4923_int; // 0x2c9d Eq
	if(var_4924_bool == 0) goto Label_11427; // 0x2c9e JumpB
	var_4925_int = 0; var_4926_float = 0; // 0x2c9f PushV
	var_4926_float = var_4707_float; // 0x2ca0 Mov
	func_9759(var_4925_int, var_4926_float); // 0x2ca1 NEW_2
	
Label_11427:
	var_4931_int = 45272; // 0x2ca3 PushI
	var_4932_bool = var_4706_int == var_4931_int; // 0x2ca4 Eq
	if(var_4932_bool == 0) goto Label_11439; // 0x2ca5 JumpB
	var_4933_object = Obj(); var_4934_object = Obj(); // 0x2ca6 PushV
	var_4935_object = GlobalVars[16]; // 0x2ca7 PushGE
	var_4933_object = var_4935_object; // 0x2ca8 Mov
	var_4936_object = GlobalVars[16]; // 0x2caa PushGE
	var_4934_object = var_4936_object; // 0x2cab Mov
	func_10587(); // 0x2cad NEW_2
	
Label_11439:
	var_4945_int = 45167; // 0x2caf PushI
	var_4946_bool = var_4706_int == var_4945_int; // 0x2cb0 Eq
	if(var_4946_bool == 0) goto Label_11453; // 0x2cb1 JumpB
	var_4947_bool = 0; var_4948_object = Obj(); // 0x2cb2 PushV
	var_4949_object = GlobalVars[16]; // 0x2cb3 PushGE
	var_4948_object = var_4949_object; // 0x2cb4 Mov
	func_11056(var_4947_bool, var_4948_object); // 0x2cb6 NEW_2
	if(var_4947_bool == 0) goto Label_11453; // 0x2cb8 JumpB
	var_4950_int = 0; var_4951_float = 0; // 0x2cb9 PushV
	var_4951_float = var_4707_float; // 0x2cba Mov
	func_9606(var_4950_int, var_4951_float); // 0x2cbb NEW_2
	
Label_11453:
	var_4956_int = 45166; // 0x2cbd PushI
	var_4957_bool = var_4706_int == var_4956_int; // 0x2cbe Eq
	if(var_4957_bool == 0) goto Label_11467; // 0x2cbf JumpB
	var_4958_bool = 0; var_4959_object = Obj(); // 0x2cc0 PushV
	var_4960_object = GlobalVars[16]; // 0x2cc1 PushGE
	var_4959_object = var_4960_object; // 0x2cc2 Mov
	func_11056(var_4958_bool, var_4959_object); // 0x2cc4 NEW_2
	if(var_4958_bool == 0) goto Label_11467; // 0x2cc6 JumpB
	var_4961_int = 0; var_4962_float = 0; // 0x2cc7 PushV
	var_4962_float = var_4707_float; // 0x2cc8 Mov
	func_9597(var_4961_int, var_4962_float); // 0x2cc9 NEW_2
	
Label_11467:
	var_4967_int = 45165; // 0x2ccb PushI
	var_4968_bool = var_4706_int == var_4967_int; // 0x2ccc Eq
	if(var_4968_bool == 0) goto Label_11481; // 0x2ccd JumpB
	var_4969_bool = 0; var_4970_object = Obj(); // 0x2cce PushV
	var_4971_object = GlobalVars[16]; // 0x2ccf PushGE
	var_4970_object = var_4971_object; // 0x2cd0 Mov
	func_11056(var_4969_bool, var_4970_object); // 0x2cd2 NEW_2
	if(var_4969_bool == 0) goto Label_11481; // 0x2cd4 JumpB
	var_4972_int = 0; var_4973_float = 0; // 0x2cd5 PushV
	var_4973_float = var_4707_float; // 0x2cd6 Mov
	func_9588(var_4972_int, var_4973_float); // 0x2cd7 NEW_2
	
Label_11481:
	var_4978_int = 45164; // 0x2cd9 PushI
	var_4979_bool = var_4706_int == var_4978_int; // 0x2cda Eq
	if(var_4979_bool == 0) goto Label_11495; // 0x2cdb JumpB
	var_4980_bool = 0; var_4981_object = Obj(); // 0x2cdc PushV
	var_4982_object = GlobalVars[16]; // 0x2cdd PushGE
	var_4981_object = var_4982_object; // 0x2cde Mov
	func_11056(var_4980_bool, var_4981_object); // 0x2ce0 NEW_2
	if(var_4980_bool == 0) goto Label_11495; // 0x2ce2 JumpB
	var_4983_int = 0; var_4984_float = 0; // 0x2ce3 PushV
	var_4984_float = var_4707_float; // 0x2ce4 Mov
	func_9579(var_4983_int, var_4984_float); // 0x2ce5 NEW_2
	
Label_11495:
	var_4989_int = 45163; // 0x2ce7 PushI
	var_4990_bool = var_4706_int == var_4989_int; // 0x2ce8 Eq
	if(var_4990_bool == 0) goto Label_11509; // 0x2ce9 JumpB
	var_4991_bool = 0; var_4992_object = Obj(); // 0x2cea PushV
	var_4993_object = GlobalVars[16]; // 0x2ceb PushGE
	var_4992_object = var_4993_object; // 0x2cec Mov
	func_11056(var_4991_bool, var_4992_object); // 0x2cee NEW_2
	if(var_4991_bool == 0) goto Label_11509; // 0x2cf0 JumpB
	var_4994_int = 0; var_4995_float = 0; // 0x2cf1 PushV
	var_4995_float = var_4707_float; // 0x2cf2 Mov
	func_9570(var_4994_int, var_4995_float); // 0x2cf3 NEW_2
	
Label_11509:
	var_5000_int = 45110; // 0x2cf5 PushI
	var_5001_bool = var_4706_int == var_5000_int; // 0x2cf6 Eq
	if(var_5001_bool == 0) goto Label_11534; // 0x2cf7 JumpB
	var_5002_object = Obj(); var_5003_object = Obj(); // 0x2cf8 PushV
	var_5004_object = GlobalVars[16]; // 0x2cf9 PushGE
	var_5002_object = var_5004_object; // 0x2cfa Mov
	var_5005_object = GlobalVars[16]; // 0x2cfc PushGE
	var_5003_object = var_5005_object; // 0x2cfd Mov
	func_10010(); // 0x2cff NEW_2
	var_5043_object = Obj(); var_5044_object = Obj(); // 0x2d01 PushV
	var_5045_object = GlobalVars[16]; // 0x2d02 PushGE
	var_5043_object = var_5045_object; // 0x2d03 Mov
	var_5046_object = GlobalVars[16]; // 0x2d05 PushGE
	var_5044_object = var_5046_object; // 0x2d06 Mov
	func_9906(); // 0x2d08 NEW_2
	var_5057_object = Obj(); var_5058_string = ""; // 0x2d0a PushV
	var_5058_string = "quest_k3_01"; // 0x2d0b MovS
	func_137(var_5057_object, var_5058_string); // 0x2d0c NEW_2
	
Label_11534:
	var_5065_int = 45109; // 0x2d0e PushI
	var_5066_bool = var_4706_int == var_5065_int; // 0x2d0f Eq
	if(var_5066_bool == 0) goto Label_11555; // 0x2d10 JumpB
	var_5067_object = Obj(); var_5068_object = Obj(); // 0x2d11 PushV
	var_5069_object = GlobalVars[16]; // 0x2d12 PushGE
	var_5067_object = var_5069_object; // 0x2d13 Mov
	var_5070_object = GlobalVars[16]; // 0x2d15 PushGE
	var_5068_object = var_5070_object; // 0x2d16 Mov
	func_10539(); // 0x2d18 NEW_2
	var_5079_bool = 0; var_5080_string = ""; var_5081_string = ""; // 0x2d1a PushV
	var_5080_string = "quest_k11_01"; // 0x2d1b MovS
	var_5081_string = "cleanup"; // 0x2d1c MovS
	func_239(var_5079_bool, var_5080_string, var_5081_string); // 0x2d1d NEW_2
	var_5082_object = Obj(); var_5083_string = ""; // 0x2d1f PushV
	var_5083_string = "quest_k12_01"; // 0x2d20 MovS
	func_137(var_5082_object, var_5083_string); // 0x2d21 NEW_2
	
Label_11555:
	var_5084_int = 45243; // 0x2d23 PushI
	var_5085_bool = var_4706_int == var_5084_int; // 0x2d24 Eq
	if(var_5085_bool == 0) goto Label_11579; // 0x2d25 JumpB
	var_5086_bool = 0; var_5087_object = Obj(); // 0x2d26 PushV
	var_5088_object = GlobalVars[16]; // 0x2d27 PushGE
	var_5087_object = var_5088_object; // 0x2d28 Mov
	func_10828(var_5087_object); // 0x2d2a NEW_2
	var_5093_bool = var_5086_bool == 0; // 0x2d2c Not
	if(var_5093_bool == 0) goto Label_11579; // 0x2d2d JumpB
	var_5094_object = Obj(); var_5095_object = Obj(); // 0x2d2e PushV
	var_5096_object = GlobalVars[16]; // 0x2d2f PushGE
	var_5094_object = var_5096_object; // 0x2d30 Mov
	var_5097_object = GlobalVars[16]; // 0x2d32 PushGE
	var_5095_object = var_5097_object; // 0x2d33 Mov
	func_10571(); // 0x2d35 NEW_2
	var_5108_int = 0; var_5109_float = 0; // 0x2d37 PushV
	var_5109_float = var_4707_float; // 0x2d38 Mov
	func_9741(var_5108_int, var_5109_float); // 0x2d39 NEW_2
	
Label_11579:
	var_5114_int = 45108; // 0x2d3b PushI
	var_5115_bool = var_4706_int == var_5114_int; // 0x2d3c Eq
	if(var_5115_bool == 0) goto Label_11600; // 0x2d3d JumpB
	var_5116_object = Obj(); var_5117_object = Obj(); // 0x2d3e PushV
	var_5118_object = GlobalVars[16]; // 0x2d3f PushGE
	var_5116_object = var_5118_object; // 0x2d40 Mov
	var_5119_object = GlobalVars[16]; // 0x2d42 PushGE
	var_5117_object = var_5119_object; // 0x2d43 Mov
	func_10501(); // 0x2d45 NEW_2
	var_5137_bool = 0; var_5138_string = ""; var_5139_string = ""; // 0x2d47 PushV
	var_5138_string = "quest_k10_01"; // 0x2d48 MovS
	var_5139_string = "cleanup"; // 0x2d49 MovS
	func_239(var_5137_bool, var_5138_string, var_5139_string); // 0x2d4a NEW_2
	var_5140_object = Obj(); var_5141_string = ""; // 0x2d4c PushV
	var_5141_string = "quest_k11_01"; // 0x2d4d MovS
	func_137(var_5140_object, var_5141_string); // 0x2d4e NEW_2
	
Label_11600:
	var_5142_int = 45107; // 0x2d50 PushI
	var_5143_bool = var_4706_int == var_5142_int; // 0x2d51 Eq
	if(var_5143_bool == 0) goto Label_11615; // 0x2d52 JumpB
	var_5144_bool = 0; var_5145_object = Obj(); // 0x2d53 PushV
	var_5146_object = GlobalVars[16]; // 0x2d54 PushGE
	var_5145_object = var_5146_object; // 0x2d55 Mov
	func_10792(var_5145_object); // 0x2d57 NEW_2
	var_5151_bool = var_5144_bool == 0; // 0x2d59 Not
	if(var_5151_bool == 0) goto Label_11615; // 0x2d5a JumpB
	var_5152_int = 0; var_5153_float = 0; // 0x2d5b PushV
	var_5153_float = var_4707_float; // 0x2d5c Mov
	func_9651(var_5152_int, var_5153_float); // 0x2d5d NEW_2
	
Label_11615:
	var_5158_int = 45287; // 0x2d5f PushI
	var_5159_bool = var_4706_int == var_5158_int; // 0x2d60 Eq
	if(var_5159_bool == 0) goto Label_11630; // 0x2d61 JumpB
	var_5160_bool = 0; var_5161_object = Obj(); // 0x2d62 PushV
	var_5162_object = GlobalVars[16]; // 0x2d63 PushGE
	var_5161_object = var_5162_object; // 0x2d64 Mov
	func_11032(var_5161_object); // 0x2d66 NEW_2
	var_5167_bool = var_5160_bool == 0; // 0x2d68 Not
	if(var_5167_bool == 0) goto Label_11630; // 0x2d69 JumpB
	var_5168_int = 0; var_5169_float = 0; // 0x2d6a PushV
	var_5169_float = var_4707_float; // 0x2d6b Mov
	func_9669(var_5168_int, var_5169_float); // 0x2d6c NEW_2
	
Label_11630:
	var_5174_int = 45288; // 0x2d6e PushI
	var_5175_bool = var_4706_int == var_5174_int; // 0x2d6f Eq
	if(var_5175_bool == 0) goto Label_11645; // 0x2d70 JumpB
	var_5176_bool = 0; var_5177_object = Obj(); // 0x2d71 PushV
	var_5178_object = GlobalVars[16]; // 0x2d72 PushGE
	var_5177_object = var_5178_object; // 0x2d73 Mov
	func_11044(var_5177_object); // 0x2d75 NEW_2
	var_5183_bool = var_5176_bool == 0; // 0x2d77 Not
	if(var_5183_bool == 0) goto Label_11645; // 0x2d78 JumpB
	var_5184_int = 0; var_5185_float = 0; // 0x2d79 PushV
	var_5185_float = var_4707_float; // 0x2d7a Mov
	func_9687(var_5184_int, var_5185_float); // 0x2d7b NEW_2
	
Label_11645:
	var_5190_int = 45289; // 0x2d7d PushI
	var_5191_bool = var_4706_int == var_5190_int; // 0x2d7e Eq
	if(var_5191_bool == 0) goto Label_11660; // 0x2d7f JumpB
	var_5192_bool = 0; var_5193_object = Obj(); // 0x2d80 PushV
	var_5194_object = GlobalVars[16]; // 0x2d81 PushGE
	var_5193_object = var_5194_object; // 0x2d82 Mov
	func_10768(var_5193_object); // 0x2d84 NEW_2
	var_5199_bool = var_5192_bool == 0; // 0x2d86 Not
	if(var_5199_bool == 0) goto Label_11660; // 0x2d87 JumpB
	var_5200_int = 0; var_5201_float = 0; // 0x2d88 PushV
	var_5201_float = var_4707_float; // 0x2d89 Mov
	func_9696(var_5200_int, var_5201_float); // 0x2d8a NEW_2
	
Label_11660:
	var_5206_int = 45106; // 0x2d8c PushI
	var_5207_bool = var_4706_int == var_5206_int; // 0x2d8d Eq
	if(var_5207_bool == 0) goto Label_11681; // 0x2d8e JumpB
	var_5208_object = Obj(); var_5209_object = Obj(); // 0x2d8f PushV
	var_5210_object = GlobalVars[16]; // 0x2d90 PushGE
	var_5208_object = var_5210_object; // 0x2d91 Mov
	var_5211_object = GlobalVars[16]; // 0x2d93 PushGE
	var_5209_object = var_5211_object; // 0x2d94 Mov
	func_10483(); // 0x2d96 NEW_2
	var_5220_bool = 0; var_5221_string = ""; var_5222_string = ""; // 0x2d98 PushV
	var_5221_string = "quest_k9_01"; // 0x2d99 MovS
	var_5222_string = "cleanup"; // 0x2d9a MovS
	func_239(var_5220_bool, var_5221_string, var_5222_string); // 0x2d9b NEW_2
	var_5223_object = Obj(); var_5224_string = ""; // 0x2d9d PushV
	var_5224_string = "quest_k10_01"; // 0x2d9e MovS
	func_137(var_5223_object, var_5224_string); // 0x2d9f NEW_2
	
Label_11681:
	var_5225_int = 45105; // 0x2da1 PushI
	var_5226_bool = var_4706_int == var_5225_int; // 0x2da2 Eq
	if(var_5226_bool == 0) goto Label_11702; // 0x2da3 JumpB
	var_5227_object = Obj(); var_5228_object = Obj(); // 0x2da4 PushV
	var_5229_object = GlobalVars[16]; // 0x2da5 PushGE
	var_5227_object = var_5229_object; // 0x2da6 Mov
	var_5230_object = GlobalVars[16]; // 0x2da8 PushGE
	var_5228_object = var_5230_object; // 0x2da9 Mov
	func_10465(); // 0x2dab NEW_2
	var_5239_bool = 0; var_5240_string = ""; var_5241_string = ""; // 0x2dad PushV
	var_5240_string = "quest_k8_01"; // 0x2dae MovS
	var_5241_string = "cleanup"; // 0x2daf MovS
	func_239(var_5239_bool, var_5240_string, var_5241_string); // 0x2db0 NEW_2
	var_5242_object = Obj(); var_5243_string = ""; // 0x2db2 PushV
	var_5243_string = "quest_k9_01"; // 0x2db3 MovS
	func_137(var_5242_object, var_5243_string); // 0x2db4 NEW_2
	
Label_11702:
	var_5244_int = 45171; // 0x2db6 PushI
	var_5245_bool = var_4706_int == var_5244_int; // 0x2db7 Eq
	if(var_5245_bool == 0) goto Label_11716; // 0x2db8 JumpB
	var_5246_bool = 0; var_5247_object = Obj(); // 0x2db9 PushV
	var_5248_object = GlobalVars[16]; // 0x2dba PushGE
	var_5247_object = var_5248_object; // 0x2dbb Mov
	func_11056(var_5246_bool, var_5247_object); // 0x2dbd NEW_2
	if(var_5246_bool == 0) goto Label_11716; // 0x2dbf JumpB
	var_5249_int = 0; var_5250_float = 0; // 0x2dc0 PushV
	var_5250_float = var_4707_float; // 0x2dc1 Mov
	func_9642(var_5249_int, var_5250_float); // 0x2dc2 NEW_2
	
Label_11716:
	var_5255_int = 45256; // 0x2dc4 PushI
	var_5256_bool = var_4706_int == var_5255_int; // 0x2dc5 Eq
	if(var_5256_bool == 0) goto Label_11731; // 0x2dc6 JumpB
	var_5257_bool = 0; var_5258_object = Obj(); // 0x2dc7 PushV
	var_5259_object = GlobalVars[16]; // 0x2dc8 PushGE
	var_5258_object = var_5259_object; // 0x2dc9 Mov
	func_10972(var_5258_object); // 0x2dcb NEW_2
	var_5264_bool = var_5257_bool == 0; // 0x2dcd Not
	if(var_5264_bool == 0) goto Label_11731; // 0x2dce JumpB
	var_5265_int = 0; var_5266_float = 0; // 0x2dcf PushV
	var_5266_float = var_4707_float; // 0x2dd0 Mov
	func_9849(var_5265_int, var_5266_float); // 0x2dd1 NEW_2
	
Label_11731:
	var_5271_int = 45257; // 0x2dd3 PushI
	var_5272_bool = var_4706_int == var_5271_int; // 0x2dd4 Eq
	if(var_5272_bool == 0) goto Label_11738; // 0x2dd5 JumpB
	var_5273_int = 0; var_5274_float = 0; // 0x2dd6 PushV
	var_5274_float = var_4707_float; // 0x2dd7 Mov
	func_9750(var_5273_int, var_5274_float); // 0x2dd8 NEW_2
	
Label_11738:
	var_5279_int = 45281; // 0x2dda PushI
	var_5280_bool = var_4706_int == var_5279_int; // 0x2ddb Eq
	if(var_5280_bool == 0) goto Label_11753; // 0x2ddc JumpB
	var_5281_bool = 0; var_5282_object = Obj(); // 0x2ddd PushV
	var_5283_object = GlobalVars[16]; // 0x2dde PushGE
	var_5282_object = var_5283_object; // 0x2ddf Mov
	func_10984(var_5282_object); // 0x2de1 NEW_2
	var_5288_bool = var_5281_bool == 0; // 0x2de3 Not
	if(var_5288_bool == 0) goto Label_11753; // 0x2de4 JumpB
	var_5289_int = 0; var_5290_float = 0; // 0x2de5 PushV
	var_5290_float = var_4707_float; // 0x2de6 Mov
	func_9813(var_5289_int, var_5290_float); // 0x2de7 NEW_2
	
Label_11753:
	var_5295_int = 45284; // 0x2de9 PushI
	var_5296_bool = var_4706_int == var_5295_int; // 0x2dea Eq
	if(var_5296_bool == 0) goto Label_11768; // 0x2deb JumpB
	var_5297_bool = 0; var_5298_object = Obj(); // 0x2dec PushV
	var_5299_object = GlobalVars[16]; // 0x2ded PushGE
	var_5298_object = var_5299_object; // 0x2dee Mov
	func_10996(var_5298_object); // 0x2df0 NEW_2
	var_5304_bool = var_5297_bool == 0; // 0x2df2 Not
	if(var_5304_bool == 0) goto Label_11768; // 0x2df3 JumpB
	var_5305_int = 0; var_5306_float = 0; // 0x2df4 PushV
	var_5306_float = var_4707_float; // 0x2df5 Mov
	func_9858(var_5305_int, var_5306_float); // 0x2df6 NEW_2
	
Label_11768:
	var_5311_int = 45285; // 0x2df8 PushI
	var_5312_bool = var_4706_int == var_5311_int; // 0x2df9 Eq
	if(var_5312_bool == 0) goto Label_11783; // 0x2dfa JumpB
	var_5313_bool = 0; var_5314_object = Obj(); // 0x2dfb PushV
	var_5315_object = GlobalVars[16]; // 0x2dfc PushGE
	var_5314_object = var_5315_object; // 0x2dfd Mov
	func_11008(var_5314_object); // 0x2dff NEW_2
	var_5320_bool = var_5313_bool == 0; // 0x2e01 Not
	if(var_5320_bool == 0) goto Label_11783; // 0x2e02 JumpB
	var_5321_int = 0; var_5322_float = 0; // 0x2e03 PushV
	var_5322_float = var_4707_float; // 0x2e04 Mov
	func_9867(var_5321_int, var_5322_float); // 0x2e05 NEW_2
	
Label_11783:
	var_5327_int = 45286; // 0x2e07 PushI
	var_5328_bool = var_4706_int == var_5327_int; // 0x2e08 Eq
	if(var_5328_bool == 0) goto Label_11798; // 0x2e09 JumpB
	var_5329_bool = 0; var_5330_object = Obj(); // 0x2e0a PushV
	var_5331_object = GlobalVars[16]; // 0x2e0b PushGE
	var_5330_object = var_5331_object; // 0x2e0c Mov
	func_11020(var_5330_object); // 0x2e0e NEW_2
	var_5336_bool = var_5329_bool == 0; // 0x2e10 Not
	if(var_5336_bool == 0) goto Label_11798; // 0x2e11 JumpB
	var_5337_int = 0; var_5338_float = 0; // 0x2e12 PushV
	var_5338_float = var_4707_float; // 0x2e13 Mov
	func_9876(var_5337_int, var_5338_float); // 0x2e14 NEW_2
	
Label_11798:
	var_5343_int = 45104; // 0x2e16 PushI
	var_5344_bool = var_4706_int == var_5343_int; // 0x2e17 Eq
	if(var_5344_bool == 0) goto Label_11819; // 0x2e18 JumpB
	var_5345_object = Obj(); var_5346_object = Obj(); // 0x2e19 PushV
	var_5347_object = GlobalVars[16]; // 0x2e1a PushGE
	var_5345_object = var_5347_object; // 0x2e1b Mov
	var_5348_object = GlobalVars[16]; // 0x2e1d PushGE
	var_5346_object = var_5348_object; // 0x2e1e Mov
	func_10420(); // 0x2e20 NEW_2
	var_5368_bool = 0; var_5369_string = ""; var_5370_string = ""; // 0x2e22 PushV
	var_5369_string = "quest_k7_01"; // 0x2e23 MovS
	var_5370_string = "cleanup"; // 0x2e24 MovS
	func_239(var_5368_bool, var_5369_string, var_5370_string); // 0x2e25 NEW_2
	var_5371_object = Obj(); var_5372_string = ""; // 0x2e27 PushV
	var_5372_string = "quest_k8_01"; // 0x2e28 MovS
	func_137(var_5371_object, var_5372_string); // 0x2e29 NEW_2
	
Label_11819:
	var_5373_int = 45103; // 0x2e2b PushI
	var_5374_bool = var_4706_int == var_5373_int; // 0x2e2c Eq
	if(var_5374_bool == 0) goto Label_11840; // 0x2e2d JumpB
	var_5375_object = Obj(); var_5376_object = Obj(); // 0x2e2e PushV
	var_5377_object = GlobalVars[16]; // 0x2e2f PushGE
	var_5375_object = var_5377_object; // 0x2e30 Mov
	var_5378_object = GlobalVars[16]; // 0x2e32 PushGE
	var_5376_object = var_5378_object; // 0x2e33 Mov
	func_10354(); // 0x2e35 NEW_2
	var_5404_bool = 0; var_5405_string = ""; var_5406_string = ""; // 0x2e37 PushV
	var_5405_string = "quest_k6_01"; // 0x2e38 MovS
	var_5406_string = "cleanup"; // 0x2e39 MovS
	func_239(var_5404_bool, var_5405_string, var_5406_string); // 0x2e3a NEW_2
	var_5407_object = Obj(); var_5408_string = ""; // 0x2e3c PushV
	var_5408_string = "quest_k7_01"; // 0x2e3d MovS
	func_137(var_5407_object, var_5408_string); // 0x2e3e NEW_2
	
Label_11840:
	var_5409_int = 45102; // 0x2e40 PushI
	var_5410_bool = var_4706_int == var_5409_int; // 0x2e41 Eq
	if(var_5410_bool == 0) goto Label_11856; // 0x2e42 JumpB
	var_5411_object = Obj(); var_5412_object = Obj(); // 0x2e43 PushV
	var_5413_object = GlobalVars[16]; // 0x2e44 PushGE
	var_5411_object = var_5413_object; // 0x2e45 Mov
	var_5414_object = GlobalVars[16]; // 0x2e47 PushGE
	var_5412_object = var_5414_object; // 0x2e48 Mov
	func_10274(); // 0x2e4a NEW_2
	var_5444_object = Obj(); var_5445_string = ""; // 0x2e4c PushV
	var_5445_string = "quest_k6_01"; // 0x2e4d MovS
	func_148(var_5444_object, var_5445_string); // 0x2e4e NEW_2
	
Label_11856:
	var_5452_int = 45254; // 0x2e50 PushI
	var_5453_bool = var_4706_int == var_5452_int; // 0x2e51 Eq
	if(var_5453_bool == 0) goto Label_11863; // 0x2e52 JumpB
	var_5454_int = 0; var_5455_float = 0; // 0x2e53 PushV
	var_5455_float = var_4707_float; // 0x2e54 Mov
	func_9786(var_5454_int, var_5455_float); // 0x2e55 NEW_2
	
Label_11863:
	var_5460_int = 45253; // 0x2e57 PushI
	var_5461_bool = var_4706_int == var_5460_int; // 0x2e58 Eq
	if(var_5461_bool == 0) goto Label_11890; // 0x2e59 JumpB
	var_5462_bool = 0; // 0x2e5a PushV
	var_5462_bool = 1; // 0x2e5b MovB
	var_5463_bool = 0; var_5464_object = Obj(); // 0x2e5c PushV
	var_5465_object = GlobalVars[16]; // 0x2e5d PushGE
	var_5464_object = var_5465_object; // 0x2e5e Mov
	func_10948(var_5464_object); // 0x2e60 NEW_2
	var_5470_bool = var_5463_bool == 0; // 0x2e62 Not
	if(var_5470_bool == 0) goto Label_11885; // 0x2e63 JumpB
	var_5471_bool = 0; var_5472_object = Obj(); // 0x2e64 PushV
	var_5473_object = GlobalVars[16]; // 0x2e65 PushGE
	var_5472_object = var_5473_object; // 0x2e66 Mov
	func_10936(var_5472_object); // 0x2e68 NEW_2
	var_5478_bool = var_5471_bool == 0; // 0x2e6a Not
	if(var_5478_bool == 0) goto Label_11885; // 0x2e6b JumpB
	var_5462_bool = 0; // 0x2e6c MovB
	
Label_11885:
	if(var_5462_bool == 0) goto Label_11890; // 0x2e6d JumpB
	var_5479_int = 0; var_5480_float = 0; // 0x2e6e PushV
	var_5480_float = var_4707_float; // 0x2e6f Mov
	func_9723(var_5479_int, var_5480_float); // 0x2e70 NEW_2
	
Label_11890:
	var_5485_int = 45252; // 0x2e72 PushI
	var_5486_bool = var_4706_int == var_5485_int; // 0x2e73 Eq
	if(var_5486_bool == 0) goto Label_11917; // 0x2e74 JumpB
	var_5487_bool = 0; // 0x2e75 PushV
	var_5487_bool = 1; // 0x2e76 MovB
	var_5488_bool = 0; var_5489_object = Obj(); // 0x2e77 PushV
	var_5490_object = GlobalVars[16]; // 0x2e78 PushGE
	var_5489_object = var_5490_object; // 0x2e79 Mov
	func_10912(var_5489_object); // 0x2e7b NEW_2
	var_5495_bool = var_5488_bool == 0; // 0x2e7d Not
	if(var_5495_bool == 0) goto Label_11912; // 0x2e7e JumpB
	var_5496_bool = 0; var_5497_object = Obj(); // 0x2e7f PushV
	var_5498_object = GlobalVars[16]; // 0x2e80 PushGE
	var_5497_object = var_5498_object; // 0x2e81 Mov
	func_10924(var_5497_object); // 0x2e83 NEW_2
	var_5503_bool = var_5496_bool == 0; // 0x2e85 Not
	if(var_5503_bool == 0) goto Label_11912; // 0x2e86 JumpB
	var_5487_bool = 0; // 0x2e87 MovB
	
Label_11912:
	if(var_5487_bool == 0) goto Label_11917; // 0x2e88 JumpB
	var_5504_int = 0; var_5505_float = 0; // 0x2e89 PushV
	var_5505_float = var_4707_float; // 0x2e8a Mov
	func_9723(var_5504_int, var_5505_float); // 0x2e8b NEW_2
	
Label_11917:
	var_5506_int = 45251; // 0x2e8d PushI
	var_5507_bool = var_4706_int == var_5506_int; // 0x2e8e Eq
	if(var_5507_bool == 0) goto Label_11944; // 0x2e8f JumpB
	var_5508_bool = 0; // 0x2e90 PushV
	var_5508_bool = 1; // 0x2e91 MovB
	var_5509_bool = 0; var_5510_object = Obj(); // 0x2e92 PushV
	var_5511_object = GlobalVars[16]; // 0x2e93 PushGE
	var_5510_object = var_5511_object; // 0x2e94 Mov
	func_10888(var_5510_object); // 0x2e96 NEW_2
	var_5516_bool = var_5509_bool == 0; // 0x2e98 Not
	if(var_5516_bool == 0) goto Label_11939; // 0x2e99 JumpB
	var_5517_bool = 0; var_5518_object = Obj(); // 0x2e9a PushV
	var_5519_object = GlobalVars[16]; // 0x2e9b PushGE
	var_5518_object = var_5519_object; // 0x2e9c Mov
	func_10900(var_5518_object); // 0x2e9e NEW_2
	var_5524_bool = var_5517_bool == 0; // 0x2ea0 Not
	if(var_5524_bool == 0) goto Label_11939; // 0x2ea1 JumpB
	var_5508_bool = 0; // 0x2ea2 MovB
	
Label_11939:
	if(var_5508_bool == 0) goto Label_11944; // 0x2ea3 JumpB
	var_5525_int = 0; var_5526_float = 0; // 0x2ea4 PushV
	var_5526_float = var_4707_float; // 0x2ea5 Mov
	func_9723(var_5525_int, var_5526_float); // 0x2ea6 NEW_2
	
Label_11944:
	var_5527_int = 45242; // 0x2ea8 PushI
	var_5528_bool = var_4706_int == var_5527_int; // 0x2ea9 Eq
	if(var_5528_bool == 0) goto Label_11971; // 0x2eaa JumpB
	var_5529_bool = 0; // 0x2eab PushV
	var_5529_bool = 1; // 0x2eac MovB
	var_5530_bool = 0; var_5531_object = Obj(); // 0x2ead PushV
	var_5532_object = GlobalVars[16]; // 0x2eae PushGE
	var_5531_object = var_5532_object; // 0x2eaf Mov
	func_10816(var_5531_object); // 0x2eb1 NEW_2
	var_5537_bool = var_5530_bool == 0; // 0x2eb3 Not
	if(var_5537_bool == 0) goto Label_11966; // 0x2eb4 JumpB
	var_5538_bool = 0; var_5539_object = Obj(); // 0x2eb5 PushV
	var_5540_object = GlobalVars[16]; // 0x2eb6 PushGE
	var_5539_object = var_5540_object; // 0x2eb7 Mov
	func_10852(var_5539_object); // 0x2eb9 NEW_2
	var_5545_bool = var_5538_bool == 0; // 0x2ebb Not
	if(var_5545_bool == 0) goto Label_11966; // 0x2ebc JumpB
	var_5529_bool = 0; // 0x2ebd MovB
	
Label_11966:
	if(var_5529_bool == 0) goto Label_11971; // 0x2ebe JumpB
	var_5546_int = 0; var_5547_float = 0; // 0x2ebf PushV
	var_5547_float = var_4707_float; // 0x2ec0 Mov
	func_9723(var_5546_int, var_5547_float); // 0x2ec1 NEW_2
	
Label_11971:
	var_5548_int = 45241; // 0x2ec3 PushI
	var_5549_bool = var_4706_int == var_5548_int; // 0x2ec4 Eq
	if(var_5549_bool == 0) goto Label_11978; // 0x2ec5 JumpB
	var_5550_int = 0; var_5551_float = 0; // 0x2ec6 PushV
	var_5551_float = var_4707_float; // 0x2ec7 Mov
	func_9714(var_5550_int, var_5551_float); // 0x2ec8 NEW_2
	
Label_11978:
	var_5556_int = 45240; // 0x2eca PushI
	var_5557_bool = var_4706_int == var_5556_int; // 0x2ecb Eq
	if(var_5557_bool == 0) goto Label_11993; // 0x2ecc JumpB
	var_5558_bool = 0; var_5559_object = Obj(); // 0x2ecd PushV
	var_5560_object = GlobalVars[16]; // 0x2ece PushGE
	var_5559_object = var_5560_object; // 0x2ecf Mov
	func_10804(var_5559_object); // 0x2ed1 NEW_2
	var_5561_bool = var_5558_bool == 0; // 0x2ed3 Not
	if(var_5561_bool == 0) goto Label_11993; // 0x2ed4 JumpB
	var_5562_int = 0; var_5563_float = 0; // 0x2ed5 PushV
	var_5563_float = var_4707_float; // 0x2ed6 Mov
	func_9705(var_5562_int, var_5563_float); // 0x2ed7 NEW_2
	
Label_11993:
	var_5568_int = 45236; // 0x2ed9 PushI
	var_5569_bool = var_4706_int == var_5568_int; // 0x2eda Eq
	if(var_5569_bool == 0) goto Label_12000; // 0x2edb JumpB
	var_5570_int = 0; var_5571_float = 0; // 0x2edc PushV
	var_5571_float = var_4707_float; // 0x2edd Mov
	func_9777(var_5570_int, var_5571_float); // 0x2ede NEW_2
	
Label_12000:
	var_5576_int = 45283; // 0x2ee0 PushI
	var_5577_bool = var_4706_int == var_5576_int; // 0x2ee1 Eq
	if(var_5577_bool == 0) goto Label_12012; // 0x2ee2 JumpB
	var_5578_object = Obj(); var_5579_object = Obj(); // 0x2ee3 PushV
	var_5580_object = GlobalVars[16]; // 0x2ee4 PushGE
	var_5578_object = var_5580_object; // 0x2ee5 Mov
	var_5581_object = GlobalVars[16]; // 0x2ee7 PushGE
	var_5579_object = var_5581_object; // 0x2ee8 Mov
	func_10694(); // 0x2eea NEW_2
	
Label_12012:
	var_5615_int = 45173; // 0x2eec PushI
	var_5616_bool = var_4706_int == var_5615_int; // 0x2eed Eq
	if(var_5616_bool == 0) goto Label_12026; // 0x2eee JumpB
	var_5617_bool = 0; var_5618_object = Obj(); // 0x2eef PushV
	var_5619_object = GlobalVars[16]; // 0x2ef0 PushGE
	var_5618_object = var_5619_object; // 0x2ef1 Mov
	func_11056(var_5617_bool, var_5618_object); // 0x2ef3 NEW_2
	if(var_5617_bool == 0) goto Label_12026; // 0x2ef5 JumpB
	var_5620_int = 0; var_5621_float = 0; // 0x2ef6 PushV
	var_5621_float = var_4707_float; // 0x2ef7 Mov
	func_9678(var_5620_int, var_5621_float); // 0x2ef8 NEW_2
	
Label_12026:
	var_5626_int = 45172; // 0x2efa PushI
	var_5627_bool = var_4706_int == var_5626_int; // 0x2efb Eq
	if(var_5627_bool == 0) goto Label_12040; // 0x2efc JumpB
	var_5628_bool = 0; var_5629_object = Obj(); // 0x2efd PushV
	var_5630_object = GlobalVars[16]; // 0x2efe PushGE
	var_5629_object = var_5630_object; // 0x2eff Mov
	func_11056(var_5628_bool, var_5629_object); // 0x2f01 NEW_2
	if(var_5628_bool == 0) goto Label_12040; // 0x2f03 JumpB
	var_5631_int = 0; var_5632_float = 0; // 0x2f04 PushV
	var_5632_float = var_4707_float; // 0x2f05 Mov
	func_9660(var_5631_int, var_5632_float); // 0x2f06 NEW_2
	
Label_12040:
	var_5637_int = 45250; // 0x2f08 PushI
	var_5638_bool = var_4706_int == var_5637_int; // 0x2f09 Eq
	if(var_5638_bool == 0) goto Label_12067; // 0x2f0a JumpB
	var_5639_bool = 0; // 0x2f0b PushV
	var_5639_bool = 1; // 0x2f0c MovB
	var_5640_bool = 0; var_5641_object = Obj(); // 0x2f0d PushV
	var_5642_object = GlobalVars[16]; // 0x2f0e PushGE
	var_5641_object = var_5642_object; // 0x2f0f Mov
	func_10864(var_5641_object); // 0x2f11 NEW_2
	var_5647_bool = var_5640_bool == 0; // 0x2f13 Not
	if(var_5647_bool == 0) goto Label_12062; // 0x2f14 JumpB
	var_5648_bool = 0; var_5649_object = Obj(); // 0x2f15 PushV
	var_5650_object = GlobalVars[16]; // 0x2f16 PushGE
	var_5649_object = var_5650_object; // 0x2f17 Mov
	func_10876(var_5649_object); // 0x2f19 NEW_2
	var_5655_bool = var_5648_bool == 0; // 0x2f1b Not
	if(var_5655_bool == 0) goto Label_12062; // 0x2f1c JumpB
	var_5639_bool = 0; // 0x2f1d MovB
	
Label_12062:
	if(var_5639_bool == 0) goto Label_12067; // 0x2f1e JumpB
	var_5656_int = 0; var_5657_float = 0; // 0x2f1f PushV
	var_5657_float = var_4707_float; // 0x2f20 Mov
	func_9723(var_5656_int, var_5657_float); // 0x2f21 NEW_2
	
Label_12067:
	var_5658_int = 45279; // 0x2f23 PushI
	var_5659_bool = var_4706_int == var_5658_int; // 0x2f24 Eq
	if(var_5659_bool == 0) goto Label_12073; // 0x2f25 JumpB
	var_5660_string = "aglaja.wmv"; // 0x2f26 PushS
	QueuePlayMovie(var_5660_string); // 0x2f27 Func
	
Label_12073:
	var_5661_int = 45280; // 0x2f29 PushI
	var_5662_bool = var_4706_int == var_5661_int; // 0x2f2a Eq
	if(var_5662_bool == 0) goto Label_12079; // 0x2f2b JumpB
	var_5663_string = "army.wmv"; // 0x2f2c PushS
	QueuePlayMovie(var_5663_string); // 0x2f2d Func
	
Label_12079:
	var_5664_int = 45255; // 0x2f2f PushI
	var_5665_bool = var_4706_int == var_5664_int; // 0x2f30 Eq
	if(var_5665_bool == 0) goto Label_12094; // 0x2f31 JumpB
	var_5666_bool = 0; var_5667_object = Obj(); // 0x2f32 PushV
	var_5668_object = GlobalVars[16]; // 0x2f33 PushGE
	var_5667_object = var_5668_object; // 0x2f34 Mov
	func_10960(var_5667_object); // 0x2f36 NEW_2
	var_5673_bool = var_5666_bool == 0; // 0x2f38 Not
	if(var_5673_bool == 0) goto Label_12094; // 0x2f39 JumpB
	var_5674_int = 0; var_5675_float = 0; // 0x2f3a PushV
	var_5675_float = var_4707_float; // 0x2f3b Mov
	func_9822(var_5674_int, var_5675_float); // 0x2f3c NEW_2
	
Label_12094:
	var_5680_int = 45249; // 0x2f3e PushI
	var_5681_bool = var_4706_int == var_5680_int; // 0x2f3f Eq
	if(var_5681_bool == 0) goto Label_12101; // 0x2f40 JumpB
	var_5682_object = Obj(); var_5683_string = ""; // 0x2f41 PushV
	var_5683_string = "quest_k5_04"; // 0x2f42 MovS
	func_137(var_5682_object, var_5683_string); // 0x2f43 NEW_2
	
Label_12101:
	var_5684_int = 45248; // 0x2f45 PushI
	var_5685_bool = var_4706_int == var_5684_int; // 0x2f46 Eq
	if(var_5685_bool == 0) goto Label_12116; // 0x2f47 JumpB
	var_5686_bool = 0; var_5687_object = Obj(); // 0x2f48 PushV
	var_5688_object = GlobalVars[16]; // 0x2f49 PushGE
	var_5687_object = var_5688_object; // 0x2f4a Mov
	func_10840(var_5687_object); // 0x2f4c NEW_2
	var_5693_bool = var_5686_bool == 0; // 0x2f4e Not
	if(var_5693_bool == 0) goto Label_12116; // 0x2f4f JumpB
	var_5694_int = 0; var_5695_float = 0; // 0x2f50 PushV
	var_5695_float = var_4707_float; // 0x2f51 Mov
	func_9840(var_5694_int, var_5695_float); // 0x2f52 NEW_2
	
Label_12116:
	var_5700_int = 45247; // 0x2f54 PushI
	var_5701_bool = var_4706_int == var_5700_int; // 0x2f55 Eq
	if(var_5701_bool == 0) goto Label_12123; // 0x2f56 JumpB
	var_5702_int = 0; var_5703_float = 0; // 0x2f57 PushV
	var_5703_float = var_4707_float; // 0x2f58 Mov
	func_9831(var_5702_int, var_5703_float); // 0x2f59 NEW_2
	
Label_12123:
	var_5708_int = 45246; // 0x2f5b PushI
	var_5709_bool = var_4706_int == var_5708_int; // 0x2f5c Eq
	if(var_5709_bool == 0) goto Label_12130; // 0x2f5d JumpB
	var_5710_int = 0; var_5711_float = 0; // 0x2f5e PushV
	var_5711_float = var_4707_float; // 0x2f5f Mov
	func_9804(var_5710_int, var_5711_float); // 0x2f60 NEW_2
	
Label_12130:
	var_5716_int = 45245; // 0x2f62 PushI
	var_5717_bool = var_4706_int == var_5716_int; // 0x2f63 Eq
	if(var_5717_bool == 0) goto Label_12137; // 0x2f64 JumpB
	var_5718_int = 0; var_5719_float = 0; // 0x2f65 PushV
	var_5719_float = var_4707_float; // 0x2f66 Mov
	func_9768(var_5718_int, var_5719_float); // 0x2f67 NEW_2
	
Label_12137:
	var_5724_int = 45244; // 0x2f69 PushI
	var_5725_bool = var_4706_int == var_5724_int; // 0x2f6a Eq
	if(var_5725_bool == 0) goto Label_12144; // 0x2f6b JumpB
	var_5726_int = 0; var_5727_float = 0; // 0x2f6c PushV
	var_5727_float = var_4707_float; // 0x2f6d Mov
	func_9732(var_5726_int, var_5727_float); // 0x2f6e NEW_2
	
Label_12144:
	var_5732_int = 45101; // 0x2f70 PushI
	var_5733_bool = var_4706_int == var_5732_int; // 0x2f71 Eq
	if(var_5733_bool == 0) goto Label_12170; // 0x2f72 JumpB
	var_5734_object = Obj(); var_5735_object = Obj(); // 0x2f73 PushV
	var_5736_object = GlobalVars[16]; // 0x2f74 PushGE
	var_5734_object = var_5736_object; // 0x2f75 Mov
	var_5737_object = GlobalVars[16]; // 0x2f77 PushGE
	var_5735_object = var_5737_object; // 0x2f78 Mov
	func_10205(); // 0x2f7a NEW_2
	var_5763_object = Obj(); var_5764_object = Obj(); // 0x2f7c PushV
	var_5765_object = GlobalVars[16]; // 0x2f7d PushGE
	var_5763_object = var_5765_object; // 0x2f7e Mov
	var_5766_object = GlobalVars[16]; // 0x2f80 PushGE
	var_5764_object = var_5766_object; // 0x2f81 Mov
	func_9906(); // 0x2f83 NEW_2
	var_5767_bool = 0; var_5768_string = ""; var_5769_string = ""; // 0x2f85 PushV
	var_5768_string = "quest_k4_01"; // 0x2f86 MovS
	var_5769_string = "cleanup"; // 0x2f87 MovS
	func_239(var_5767_bool, var_5768_string, var_5769_string); // 0x2f88 NEW_2
	
Label_12170:
	var_5770_int = 45100; // 0x2f8a PushI
	var_5771_bool = var_4706_int == var_5770_int; // 0x2f8b Eq
	if(var_5771_bool == 0) goto Label_12200; // 0x2f8c JumpB
	var_5772_object = Obj(); var_5773_object = Obj(); // 0x2f8d PushV
	var_5774_object = GlobalVars[16]; // 0x2f8e PushGE
	var_5772_object = var_5774_object; // 0x2f8f Mov
	var_5775_object = GlobalVars[16]; // 0x2f91 PushGE
	var_5773_object = var_5775_object; // 0x2f92 Mov
	func_10118(); // 0x2f94 NEW_2
	var_5807_object = Obj(); var_5808_object = Obj(); // 0x2f96 PushV
	var_5809_object = GlobalVars[16]; // 0x2f97 PushGE
	var_5807_object = var_5809_object; // 0x2f98 Mov
	var_5810_object = GlobalVars[16]; // 0x2f9a PushGE
	var_5808_object = var_5810_object; // 0x2f9b Mov
	func_9913(); // 0x2f9d NEW_2
	var_5813_bool = 0; var_5814_string = ""; var_5815_string = ""; // 0x2f9f PushV
	var_5814_string = "quest_k3_01"; // 0x2fa0 MovS
	var_5815_string = "cleanup"; // 0x2fa1 MovS
	func_239(var_5813_bool, var_5814_string, var_5815_string); // 0x2fa2 NEW_2
	var_5816_object = Obj(); var_5817_string = ""; // 0x2fa4 PushV
	var_5817_string = "quest_k4_01"; // 0x2fa5 MovS
	func_148(var_5816_object, var_5817_string); // 0x2fa6 NEW_2
	
Label_12200:
	var_5818_int = 45096; // 0x2fa8 PushI
	var_5819_bool = var_4706_int == var_5818_int; // 0x2fa9 Eq
	if(var_5819_bool == 0) goto Label_12223; // 0x2faa JumpB
	var_5820_bool = 0; var_5821_object = Obj(); // 0x2fab PushV
	var_5822_object = GlobalVars[16]; // 0x2fac PushGE
	var_5821_object = var_5822_object; // 0x2fad Mov
	func_10780(var_5821_object); // 0x2faf NEW_2
	if(var_5820_bool == 0) goto Label_12223; // 0x2fb1 JumpB
	var_5827_object = Obj(); var_5828_object = Obj(); // 0x2fb2 PushV
	var_5829_object = GlobalVars[16]; // 0x2fb3 PushGE
	var_5827_object = var_5829_object; // 0x2fb4 Mov
	var_5830_object = GlobalVars[16]; // 0x2fb6 PushGE
	var_5828_object = var_5830_object; // 0x2fb7 Mov
	func_10738(var_5828_object); // 0x2fb9 NEW_2
	var_5863_int = 0; var_5864_float = 0; // 0x2fbb PushV
	var_5864_float = var_4707_float; // 0x2fbc Mov
	func_9795(var_5863_int, var_5864_float); // 0x2fbd NEW_2
	
Label_12223:
	return 0; // 0x2fbf Return
}


func_1050(var_723_int, var_724_int)
{
	var_725_bool = 0; // 0x41b PushV
	var_725_bool = 1; // 0x41c MovB
	var_726_bool = 0; // 0x41d PushV
	var_726_bool = 1; // 0x41e MovB
	var_727_int = 22; // 0x41f PushI
	var_728_bool = var_724_int >= var_727_int; // 0x420 GE
	if(var_728_bool == 0) goto Label_1062; // 0x421 JumpB
	var_729_int = 4; // 0x422 PushI
	var_730_bool = var_724_int < var_729_int; // 0x423 LT
	if(var_730_bool == 0) goto Label_1062; // 0x424 JumpB
	var_726_bool = 0; // 0x425 MovB
	
Label_1062:
	if(var_726_bool == 0) goto Label_1074; // 0x426 JumpB
	var_731_bool = 0; // 0x427 PushV
	var_731_bool = 0; // 0x428 MovB
	var_732_int = 6; // 0x429 PushI
	var_733_bool = var_724_int >= var_732_int; // 0x42a GE
	if(var_733_bool == 0) goto Label_1072; // 0x42b JumpB
	var_734_int = 8; // 0x42c PushI
	var_735_bool = var_724_int < var_734_int; // 0x42d LT
	if(var_735_bool == 0) goto Label_1072; // 0x42e JumpB
	var_731_bool = 1; // 0x42f MovB
	
Label_1072:
	if(var_731_bool == 0) goto Label_1074; // 0x430 JumpB
	var_725_bool = 0; // 0x431 MovB
	
Label_1074:
	if(var_725_bool == 0) goto Label_1081; // 0x432 JumpB
	var_736_int = 0; var_737_bool = 0; // 0x433 PushV
	var_736_int = var_723_int; // 0x434 Mov
	var_737_bool = 1; // 0x435 MovB
	func_779(var_736_int, var_737_bool); // 0x436 NEW_2
	goto Label_1086; // 0x438 Jump
	
Label_1086:
	return 0; // 0x43e Return
	
Label_1081:
	var_747_int = 0; var_748_bool = 0; // 0x439 PushV
	var_747_int = var_723_int; // 0x43a Mov
	var_748_bool = 0; // 0x43b MovB
	func_779(var_747_int, var_748_bool); // 0x43c NEW_2
}


func_10274()
{
	var_5415_object = Obj(); var_5416_object = Obj(); var_5417_object = Obj(); var_5418_object = Obj(); // 0x2822 PushV
	var_5419_object = Obj(); // 0x2823 PushV
	func_11161(var_5419_object); // 0x2824 NEW_2
	var_5417_object = var_5419_object; // 0x2825 Mov
	var_5420_string = "k5q03LaskaGotoAlbinos"; // 0x2827 PushS
	FindMark(var_5418_object, var_5420_string); // 0x2828 ObjFunc
	var_5421_object = var_5418_object; // 0x282a Push
	if(var_5421_object == 0) goto Label_10286; // 0x282b JumpB
	Remove(); // 0x282c ObjFunc
	
Label_10286:
	var_5422_string = "k5q01AlexandrGotoMladVlad"; // 0x282e PushS
	FindMark(var_5418_object, var_5422_string); // 0x282f ObjFunc
	var_5423_object = var_5418_object; // 0x2831 Push
	if(var_5423_object == 0) goto Label_10293; // 0x2832 JumpB
	Remove(); // 0x2833 ObjFunc
	
Label_10293:
	var_5424_string = "k5q01RubinGotoGeorg"; // 0x2835 PushS
	FindMark(var_5418_object, var_5424_string); // 0x2836 ObjFunc
	var_5425_object = var_5418_object; // 0x2838 Push
	if(var_5425_object == 0) goto Label_10300; // 0x2839 JumpB
	Remove(); // 0x283a ObjFunc
	
Label_10300:
	var_5426_string = "k5q04KapellaGotoMaria"; // 0x283c PushS
	FindMark(var_5418_object, var_5426_string); // 0x283d ObjFunc
	var_5427_object = var_5418_object; // 0x283f Push
	if(var_5427_object == 0) goto Label_10307; // 0x2840 JumpB
	Remove(); // 0x2841 ObjFunc
	
Label_10307:
	var_5428_string = "k5q04MariaGotoDanko"; // 0x2843 PushS
	FindMark(var_5418_object, var_5428_string); // 0x2844 ObjFunc
	var_5429_object = var_5418_object; // 0x2846 Push
	if(var_5429_object == 0) goto Label_10314; // 0x2847 JumpB
	Remove(); // 0x2848 ObjFunc
	
Label_10314:
	var_5430_string = "k5q02KabatchikGotoAlexandr"; // 0x284a PushS
	FindMark(var_5418_object, var_5430_string); // 0x284b ObjFunc
	var_5431_object = var_5418_object; // 0x284d Push
	if(var_5431_object == 0) goto Label_10321; // 0x284e JumpB
	Remove(); // 0x284f ObjFunc
	
Label_10321:
	var_5432_string = "k5q02KaterinaGotoPetr"; // 0x2851 PushS
	FindMark(var_5418_object, var_5432_string); // 0x2852 ObjFunc
	var_5433_object = var_5418_object; // 0x2854 Push
	if(var_5433_object == 0) goto Label_10328; // 0x2855 JumpB
	Remove(); // 0x2856 ObjFunc
	
Label_10328:
	var_5434_string = "k5q02PetrGotoAndrei"; // 0x2858 PushS
	FindMark(var_5418_object, var_5434_string); // 0x2859 ObjFunc
	var_5435_object = var_5418_object; // 0x285b Push
	if(var_5435_object == 0) goto Label_10335; // 0x285c JumpB
	Remove(); // 0x285d ObjFunc
	
Label_10335:
	var_5436_bool = 0; var_5437_int = 0; // 0x285f PushV
	var_5437_int = 390; // 0x2860 MovI
	func_11136(var_5436_bool, var_5437_int); // 0x2861 NEW_2
	var_5438_bool = 0; var_5439_int = 0; // 0x2863 PushV
	var_5439_int = 397; // 0x2864 MovI
	func_11136(var_5438_bool, var_5439_int); // 0x2865 NEW_2
	var_5440_bool = 0; var_5441_int = 0; // 0x2867 PushV
	var_5441_int = 405; // 0x2868 MovI
	func_11136(var_5440_bool, var_5441_int); // 0x2869 NEW_2
	var_5442_bool = 0; var_5443_int = 0; // 0x286b PushV
	var_5443_int = 740; // 0x286c MovI
	func_11136(var_5442_bool, var_5443_int); // 0x286d NEW_2
	return 4; // 0x286f Return
}


func_52()
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_object = Obj(); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x34 PushV
	var_14_string = "player"; // 0x35 PushS
	FindActor(var_9_object, var_14_string); // 0x36 Func
	GetMainOutdoorScene(var_10_object); // 0x38 Func
	var_15_bool = var_10_object == 0; // 0x3a Not
	if(var_15_bool == 0) goto Label_64; // 0x3b JumpB
	var_16_string = "Starting scene not found"; // 0x3c PushS
	Trace(var_16_string); // 0x3d Func
	return 10; // 0x3f Return
	
Label_64:
	var_17_string = "pt_birth_Klara"; // 0x40 PushS
	GetLocator(var_17_string, var_11_bool, var_12_cvector, var_13_cvector); // 0x41 ObjFunc
	var_18_bool = var_11_bool; // 0x43 Push
	if(var_18_bool == 0) goto Label_71; // 0x44 JumpB
	Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector); // 0x45 Func
	
Label_71:
	return 10; // 0x47 Return
}


func_5176()
{
	var_123_string = "dt_house3_08_i2"; // 0x1439 PushS
	add(var_123_string); // 0x143a ObjFunc
	var_124_string = "dt_house3_09"; // 0x143c PushS
	add(var_124_string); // 0x143d ObjFunc
	var_125_string = "dt_house3_09_i2"; // 0x143f PushS
	add(var_125_string); // 0x1440 ObjFunc
	var_126_string = "house1_se_03l"; // 0x1442 PushS
	add(var_126_string); // 0x1443 ObjFunc
	var_127_string = "house1_se_03r"; // 0x1445 PushS
	add(var_127_string); // 0x1446 ObjFunc
	var_128_string = "house1_se_01l"; // 0x1448 PushS
	add(var_128_string); // 0x1449 ObjFunc
	var_129_string = "house1_se_01r"; // 0x144b PushS
	add(var_129_string); // 0x144c ObjFunc
	var_130_string = "house1_se_04l"; // 0x144e PushS
	add(var_130_string); // 0x144f ObjFunc
	var_131_string = "house1_se_04r"; // 0x1451 PushS
	add(var_131_string); // 0x1452 ObjFunc
	var_132_string = "house5_11"; // 0x1454 PushS
	add(var_132_string); // 0x1455 ObjFunc
	var_133_string = "house5_09"; // 0x1457 PushS
	add(var_133_string); // 0x1458 ObjFunc
	var_134_string = "house5_13"; // 0x145a PushS
	add(var_134_string); // 0x145b ObjFunc
	var_135_string = "house5_12"; // 0x145d PushS
	add(var_135_string); // 0x145e ObjFunc
	var_136_string = "house5_14"; // 0x1460 PushS
	add(var_136_string); // 0x1461 ObjFunc
	var_137_string = "house5_unoin03l"; // 0x1463 PushS
	add(var_137_string); // 0x1464 ObjFunc
	var_138_string = "house5_unoin03r"; // 0x1466 PushS
	add(var_138_string); // 0x1467 ObjFunc
	var_139_string = "house5_unoin02l"; // 0x1469 PushS
	add(var_139_string); // 0x146a ObjFunc
	var_140_string = "house5_unoin02r"; // 0x146c PushS
	add(var_140_string); // 0x146d ObjFunc
	var_141_string = "house5_unoin01l"; // 0x146f PushS
	add(var_141_string); // 0x1470 ObjFunc
	var_142_string = "house5_unoin01r"; // 0x1472 PushS
	add(var_142_string); // 0x1473 ObjFunc
	return 0; // 0x1475 Return
}


func_1087(var_1794_int, var_1795_int)
{
	var_1796_bool = 0; // 0x440 PushV
	var_1796_bool = 1; // 0x441 MovB
	var_1797_int = 22; // 0x442 PushI
	var_1798_bool = var_1795_int >= var_1797_int; // 0x443 GE
	if(var_1798_bool == 0) goto Label_1097; // 0x444 JumpB
	var_1799_int = 6; // 0x445 PushI
	var_1800_bool = var_1795_int < var_1799_int; // 0x446 LT
	if(var_1800_bool == 0) goto Label_1097; // 0x447 JumpB
	var_1796_bool = 0; // 0x448 MovB
	
Label_1097:
	if(var_1796_bool == 0) goto Label_1104; // 0x449 JumpB
	var_1801_int = 0; var_1802_bool = 0; // 0x44a PushV
	var_1801_int = var_1794_int; // 0x44b Mov
	var_1802_bool = 1; // 0x44c MovB
	func_779(var_1801_int, var_1802_bool); // 0x44d NEW_2
	goto Label_1109; // 0x44f Jump
	
Label_1109:
	return 0; // 0x455 Return
	
Label_1104:
	var_1803_int = 0; var_1804_bool = 0; // 0x450 PushV
	var_1803_int = var_1794_int; // 0x451 Mov
	var_1804_bool = 0; // 0x452 MovB
	func_779(var_1803_int, var_1804_bool); // 0x453 NEW_2
}


func_7231(var_4128_int, var_4129_int, var_4130_object, var_4131_object, var_4132_object, var_4133_object)
{
	var_4134_int = 0; // 0x1c40 PushI
	var_4135_bool = var_4129_int == var_4134_int; // 0x1c41 Eq
	if(var_4135_bool == 0) goto Label_7271; // 0x1c42 JumpB
	var_4136_int = 0; var_4137_bool = 0; // 0x1c43 PushV
	var_4136_int = 14; // 0x1c44 MovI
	var_4137_bool = 0; // 0x1c45 MovB
	func_796(var_4136_int, var_4137_bool); // 0x1c46 NEW_2
	var_4138_int = 0; var_4139_bool = 0; var_4140_int = 0; // 0x1c48 PushV
	var_4138_int = 14; // 0x1c49 MovI
	var_4139_bool = 0; // 0x1c4a MovB
	var_4140_int = 1; // 0x1c4b MovI
	func_813(var_4138_int, var_4139_bool, var_4140_int); // 0x1c4c NEW_2
	var_4141_int = 0; var_4142_int = 0; var_4143_object = Obj(); var_4144_object = Obj(); var_4145_object = Obj(); // 0x1c4e PushV
	var_4141_int = 14; // 0x1c4f MovI
	var_4142_int = var_4128_int; // 0x1c50 Mov
	var_4143_object = var_4130_object; // 0x1c51 Mov
	var_4144_object = var_4131_object; // 0x1c52 Mov
	var_4145_object = var_4132_object; // 0x1c53 Mov
	func_720(var_4141_int, var_4142_int, var_4143_object, var_4144_object, var_4145_object); // 0x1c54 NEW_2
	var_4146_object = Obj(); var_4147_int = 0; // 0x1c56 PushV
	var_4146_object = var_4133_object; // 0x1c57 Mov
	var_4147_int = 2; // 0x1c58 MovI
	func_305(var_4147_int); // 0x1c59 NEW_2
	var_4148_int = 0; var_4149_bool = 0; var_4150_int = 0; // 0x1c5b PushV
	var_4148_int = 14; // 0x1c5c MovI
	var_4149_bool = 0; // 0x1c5d MovB
	var_4150_int = 5; // 0x1c5e MovI
	func_870(var_4148_int, var_4149_bool, var_4150_int); // 0x1c5f NEW_2
	var_4151_int = 0; var_4152_bool = 0; var_4153_int = 0; // 0x1c61 PushV
	var_4151_int = 14; // 0x1c62 MovI
	var_4152_bool = 1; // 0x1c63 MovB
	var_4153_int = 5; // 0x1c64 MovI
	func_932(var_4151_int, var_4152_bool, var_4153_int); // 0x1c65 NEW_2
	
Label_7271:
	var_4154_int = 0; var_4155_bool = 0; // 0x1c67 PushV
	var_4154_int = 14; // 0x1c68 MovI
	var_4155_bool = 0; // 0x1c69 MovB
	func_779(var_4154_int, var_4155_bool); // 0x1c6a NEW_2
	var_4156_int = 0; var_4157_int = 0; var_4158_int = 0; // 0x1c6c PushV
	var_4156_int = 14; // 0x1c6d MovI
	var_4157_int = var_4128_int; // 0x1c6e Mov
	var_4158_int = var_4129_int; // 0x1c6f Mov
	func_3471(var_4156_int, var_4157_int, var_4158_int); // 0x1c70 NEW_2
	return 0; // 0x1c72 Return
}


func_3137(var_2117_int, var_2118_int, var_2119_int)
{
	var_2120_int = 0; var_2121_int = 0; var_2122_int = 0; var_2123_int = 0; // 0xc41 PushV
	var_2124_bool = 0; // 0xc42 PushV
	var_2124_bool = 0; // 0xc43 MovB
	var_2125_int = 8; // 0xc44 PushI
	var_2126_bool = var_2119_int > var_2125_int; // 0xc45 GT
	if(var_2126_bool == 0) goto Label_3147; // 0xc46 JumpB
	var_2127_int = 21; // 0xc47 PushI
	var_2128_bool = var_2119_int < var_2127_int; // 0xc48 LT
	if(var_2128_bool == 0) goto Label_3147; // 0xc49 JumpB
	var_2124_bool = 1; // 0xc4a MovB
	
Label_3147:
	if(var_2124_bool == 0) goto Label_3202; // 0xc4b JumpB
	var_2129_int = 0; var_2130_string = ""; var_2131_string = ""; var_2132_int = 0; // 0xc4c PushV
	var_2129_int = var_2117_int; // 0xc4d Mov
	var_2130_string = "pers_vaxxabit"; // 0xc4e MovS
	var_2131_string = "vaxxabit_d.xml"; // 0xc4f MovS
	var_2132_int = 5; // 0xc50 MovI
	func_503(var_2129_int, var_2130_string, var_2131_string, var_2132_int); // 0xc51 NEW_2
	var_2133_int = 0; var_2134_string = ""; var_2135_string = ""; var_2136_int = 0; // 0xc53 PushV
	var_2133_int = var_2117_int; // 0xc54 Mov
	var_2134_string = "pers_vaxxabitka"; // 0xc55 MovS
	var_2135_string = "vaxxabitka_d.xml"; // 0xc56 MovS
	var_2136_int = 5; // 0xc57 MovI
	func_503(var_2133_int, var_2134_string, var_2135_string, var_2136_int); // 0xc58 NEW_2
	var_2137_int = 0; var_2138_string = ""; var_2139_string = ""; var_2140_int = 0; // 0xc5a PushV
	var_2137_int = var_2117_int; // 0xc5b Mov
	var_2138_string = "pers_rat_big"; // 0xc5c MovS
	var_2139_string = "rat_big.xml"; // 0xc5d MovS
	var_2140_int = 2; // 0xc5e MovI
	func_503(var_2137_int, var_2138_string, var_2139_string, var_2140_int); // 0xc5f NEW_2
	var_2141_int = 0; var_2142_string = ""; var_2143_string = ""; var_2144_int = 0; // 0xc61 PushV
	var_2141_int = var_2117_int; // 0xc62 Mov
	var_2142_string = "fog"; // 0xc63 MovS
	var_2143_string = "fog.xml"; // 0xc64 MovS
	var_2144_int = 6; // 0xc65 MovI
	func_529(var_2141_int, var_2142_string, var_2143_string, var_2144_int); // 0xc66 NEW_2
	var_2149_int = 5; // 0xc68 PushI
	var_2150_bool = var_2118_int >= var_2149_int; // 0xc69 GE
	if(var_2150_bool == 0) goto Label_3186; // 0xc6a JumpB
	var_2151_int = 0; var_2152_string = ""; var_2153_string = ""; var_2154_int = 0; // 0xc6b PushV
	var_2151_int = var_2117_int; // 0xc6c Mov
	var_2152_string = "fog"; // 0xc6d MovS
	var_2153_string = "fog_hunter.xml"; // 0xc6e MovS
	var_2154_int = 2; // 0xc6f MovI
	func_529(var_2151_int, var_2152_string, var_2153_string, var_2154_int); // 0xc70 NEW_2
	
Label_3186:
	var_2155_int = 1; // 0xc72 PushI
	var_2156_float = 0; var_2157_int = 0; // 0xc73 PushV
	var_2157_int = var_2118_int; // 0xc74 Mov
	func_1255(var_2156_float, var_2157_int); // 0xc75 NEW_2
	var_2122_int = var_2155_int * var_2156_float; // 0xc77 Mult2
	var_2202_int = var_2122_int; // 0xc78 Push
	if(var_2202_int == 0) goto Label_3201; // 0xc79 JumpB
	var_2203_int = 0; var_2204_string = ""; var_2205_string = ""; var_2206_int = 0; // 0xc7a PushV
	var_2203_int = var_2117_int; // 0xc7b Mov
	var_2204_string = "pers_bomber"; // 0xc7c MovS
	var_2205_string = "bomber.xml"; // 0xc7d MovS
	var_2206_int = var_2122_int; // 0xc7e Mov
	func_503(var_2203_int, var_2204_string, var_2205_string, var_2206_int); // 0xc7f NEW_2
	
Label_3201:
	goto Label_3255; // 0xc81 Jump
	
Label_3255:
	var_2207_bool = 0; var_2208_int = 0; // 0xcb7 PushV
	var_2208_int = var_2118_int; // 0xcb8 Mov
	func_1372(var_2207_bool, var_2208_int); // 0xcb9 NEW_2
	if(var_2207_bool == 0) goto Label_3267; // 0xcbb JumpB
	var_2210_int = 0; var_2211_string = ""; var_2212_string = ""; var_2213_int = 0; // 0xcbc PushV
	var_2210_int = var_2117_int; // 0xcbd Mov
	var_2211_string = "pers_sanitar"; // 0xcbe MovS
	var_2212_string = "sanitar.xml"; // 0xcbf MovS
	var_2213_int = 2; // 0xcc0 MovI
	func_503(var_2210_int, var_2211_string, var_2212_string, var_2213_int); // 0xcc1 NEW_2
	
Label_3267:
	var_2214_int = 0; var_2215_string = ""; var_2216_string = ""; var_2217_int = 0; var_2218_int = 0; var_2219_int = 0; // 0xcc3 PushV
	var_2214_int = var_2117_int; // 0xcc4 Mov
	var_2215_string = "pers_worker"; // 0xcc5 MovS
	var_2216_string = "agony1_man.xml"; // 0xcc6 MovS
	var_2217_int = 2; // 0xcc7 MovI
	var_2218_int = 4; // 0xcc8 MovI
	var_2219_int = 4; // 0xcc9 MovI
	func_516(var_2214_int, var_2215_string, var_2216_string, var_2217_int, var_2218_int, var_2219_int); // 0xcca NEW_2
	var_2224_int = 0; var_2225_string = ""; var_2226_string = ""; var_2227_int = 0; var_2228_int = 0; var_2229_int = 0; // 0xccc PushV
	var_2224_int = var_2117_int; // 0xccd Mov
	var_2225_string = "pers_unosha"; // 0xcce MovS
	var_2226_string = "agony1_man.xml"; // 0xccf MovS
	var_2227_int = 2; // 0xcd0 MovI
	var_2228_int = 4; // 0xcd1 MovI
	var_2229_int = 4; // 0xcd2 MovI
	func_516(var_2224_int, var_2225_string, var_2226_string, var_2227_int, var_2228_int, var_2229_int); // 0xcd3 NEW_2
	var_2230_int = 0; var_2231_string = ""; var_2232_string = ""; var_2233_int = 0; var_2234_int = 0; var_2235_int = 0; // 0xcd5 PushV
	var_2230_int = var_2117_int; // 0xcd6 Mov
	var_2231_string = "pers_woman"; // 0xcd7 MovS
	var_2232_string = "agony1_woman.xml"; // 0xcd8 MovS
	var_2233_int = 2; // 0xcd9 MovI
	var_2234_int = 4; // 0xcda MovI
	var_2235_int = 4; // 0xcdb MovI
	func_516(var_2230_int, var_2231_string, var_2232_string, var_2233_int, var_2234_int, var_2235_int); // 0xcdc NEW_2
	var_2236_int = 0; var_2237_string = ""; var_2238_string = ""; var_2239_int = 0; var_2240_int = 0; var_2241_int = 0; // 0xcde PushV
	var_2236_int = var_2117_int; // 0xcdf Mov
	var_2237_string = "pers_wasted_girl"; // 0xce0 MovS
	var_2238_string = "agony1_woman.xml"; // 0xce1 MovS
	var_2239_int = 2; // 0xce2 MovI
	var_2240_int = 4; // 0xce3 MovI
	var_2241_int = 4; // 0xce4 MovI
	func_516(var_2236_int, var_2237_string, var_2238_string, var_2239_int, var_2240_int, var_2241_int); // 0xce5 NEW_2
	return 4; // 0xce7 Return
	
Label_3202:
	var_2242_int = 0; var_2243_string = ""; var_2244_string = ""; var_2245_int = 0; // 0xc82 PushV
	var_2242_int = var_2117_int; // 0xc83 Mov
	var_2243_string = "pers_vaxxabit"; // 0xc84 MovS
	var_2244_string = "vaxxabit_d.xml"; // 0xc85 MovS
	var_2245_int = 4; // 0xc86 MovI
	func_503(var_2242_int, var_2243_string, var_2244_string, var_2245_int); // 0xc87 NEW_2
	var_2246_int = 0; var_2247_string = ""; var_2248_string = ""; var_2249_int = 0; // 0xc89 PushV
	var_2246_int = var_2117_int; // 0xc8a Mov
	var_2247_string = "pers_vaxxabitka"; // 0xc8b MovS
	var_2248_string = "vaxxabitka_d.xml"; // 0xc8c MovS
	var_2249_int = 4; // 0xc8d MovI
	func_503(var_2246_int, var_2247_string, var_2248_string, var_2249_int); // 0xc8e NEW_2
	var_2250_int = 0; var_2251_string = ""; var_2252_string = ""; var_2253_int = 0; // 0xc90 PushV
	var_2250_int = var_2117_int; // 0xc91 Mov
	var_2251_string = "pers_rat_big"; // 0xc92 MovS
	var_2252_string = "rat_big.xml"; // 0xc93 MovS
	var_2253_int = 3; // 0xc94 MovI
	func_503(var_2250_int, var_2251_string, var_2252_string, var_2253_int); // 0xc95 NEW_2
	var_2254_int = 0; var_2255_string = ""; var_2256_string = ""; var_2257_int = 0; // 0xc97 PushV
	var_2254_int = var_2117_int; // 0xc98 Mov
	var_2255_string = "fog"; // 0xc99 MovS
	var_2256_string = "fog.xml"; // 0xc9a MovS
	var_2257_int = 6; // 0xc9b MovI
	func_529(var_2254_int, var_2255_string, var_2256_string, var_2257_int); // 0xc9c NEW_2
	var_2258_int = 5; // 0xc9e PushI
	var_2259_bool = var_2118_int >= var_2258_int; // 0xc9f GE
	if(var_2259_bool == 0) goto Label_3240; // 0xca0 JumpB
	var_2260_int = 0; var_2261_string = ""; var_2262_string = ""; var_2263_int = 0; // 0xca1 PushV
	var_2260_int = var_2117_int; // 0xca2 Mov
	var_2261_string = "fog"; // 0xca3 MovS
	var_2262_string = "fog_hunter.xml"; // 0xca4 MovS
	var_2263_int = 2; // 0xca5 MovI
	func_529(var_2260_int, var_2261_string, var_2262_string, var_2263_int); // 0xca6 NEW_2
	
Label_3240:
	var_2264_int = 2; // 0xca8 PushI
	var_2265_float = 0; var_2266_int = 0; // 0xca9 PushV
	var_2266_int = var_2118_int; // 0xcaa Mov
	func_1255(var_2265_float, var_2266_int); // 0xcab NEW_2
	var_2123_int = var_2264_int * var_2265_float; // 0xcad Mult2
	var_2267_int = var_2123_int; // 0xcae Push
	if(var_2267_int == 0) goto Label_3255; // 0xcaf JumpB
	var_2268_int = 0; var_2269_string = ""; var_2270_string = ""; var_2271_int = 0; // 0xcb0 PushV
	var_2268_int = var_2117_int; // 0xcb1 Mov
	var_2269_string = "pers_bomber"; // 0xcb2 MovS
	var_2270_string = "bomber.xml"; // 0xcb3 MovS
	var_2271_int = var_2123_int; // 0xcb4 Mov
	func_503(var_2268_int, var_2269_string, var_2270_string, var_2271_int); // 0xcb5 NEW_2
}


func_6210(var_3963_int, var_3964_int, var_3965_object, var_3966_object, var_3967_object, var_3968_object)
{
	var_3969_int = 0; // 0x1843 PushI
	var_3970_bool = var_3964_int == var_3969_int; // 0x1844 Eq
	if(var_3970_bool == 0) goto Label_6250; // 0x1845 JumpB
	var_3971_int = 0; var_3972_bool = 0; // 0x1846 PushV
	var_3971_int = 9; // 0x1847 MovI
	var_3972_bool = 0; // 0x1848 MovB
	func_796(var_3971_int, var_3972_bool); // 0x1849 NEW_2
	var_3973_int = 0; var_3974_bool = 0; var_3975_int = 0; // 0x184b PushV
	var_3973_int = 9; // 0x184c MovI
	var_3974_bool = 0; // 0x184d MovB
	var_3975_int = 1; // 0x184e MovI
	func_813(var_3973_int, var_3974_bool, var_3975_int); // 0x184f NEW_2
	var_3976_int = 0; var_3977_int = 0; var_3978_object = Obj(); var_3979_object = Obj(); var_3980_object = Obj(); // 0x1851 PushV
	var_3976_int = 9; // 0x1852 MovI
	var_3977_int = var_3963_int; // 0x1853 Mov
	var_3978_object = var_3965_object; // 0x1854 Mov
	var_3979_object = var_3966_object; // 0x1855 Mov
	var_3980_object = var_3967_object; // 0x1856 Mov
	func_720(var_3976_int, var_3977_int, var_3978_object, var_3979_object, var_3980_object); // 0x1857 NEW_2
	var_3981_object = Obj(); var_3982_int = 0; // 0x1859 PushV
	var_3981_object = var_3968_object; // 0x185a Mov
	var_3982_int = 2; // 0x185b MovI
	func_305(var_3982_int); // 0x185c NEW_2
	var_3983_int = 0; var_3984_bool = 0; var_3985_int = 0; // 0x185e PushV
	var_3983_int = 9; // 0x185f MovI
	var_3984_bool = 0; // 0x1860 MovB
	var_3985_int = 7; // 0x1861 MovI
	func_870(var_3983_int, var_3984_bool, var_3985_int); // 0x1862 NEW_2
	var_3986_int = 0; var_3987_bool = 0; var_3988_int = 0; // 0x1864 PushV
	var_3986_int = 9; // 0x1865 MovI
	var_3987_bool = 1; // 0x1866 MovB
	var_3988_int = 7; // 0x1867 MovI
	func_932(var_3986_int, var_3987_bool, var_3988_int); // 0x1868 NEW_2
	
Label_6250:
	var_3989_int = 0; var_3990_bool = 0; // 0x186a PushV
	var_3989_int = 9; // 0x186b MovI
	var_3990_bool = 0; // 0x186c MovB
	func_779(var_3989_int, var_3990_bool); // 0x186d NEW_2
	var_3991_int = 0; var_3992_int = 0; var_3993_int = 0; // 0x186f PushV
	var_3991_int = 9; // 0x1870 MovI
	var_3992_int = var_3963_int; // 0x1871 Mov
	var_3993_int = var_3964_int; // 0x1872 Mov
	func_3659(var_3991_int, var_3992_int, var_3993_int); // 0x1873 NEW_2
	return 0; // 0x1875 Return
}


func_74(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x4a PushV
	var_103_string = "player"; // 0x4b PushS
	FindActor(var_102_object, var_103_string); // 0x4c Func
	var_100_object = var_102_object; // 0x4e Mov
	return 2; // 0x4f Return
}


func_8269(var_4329_int, var_4330_int)
{
	var_4332_int = 0; var_4333_int = 0; var_4334_int = 0; var_4335_int = 0; // 0x204d PushV
	var_4336_int = 0; // 0x204e PushI
	var_4337_bool = var_4330_int == var_4336_int; // 0x204f Eq
	if(var_4337_bool == 0) goto Label_8313; // 0x2050 JumpB
	var_4338_int = 2; // 0x2051 PushI
	var_4339_bool = var_4329_int == var_4338_int; // 0x2052 Eq
	if(var_4339_bool == 0) goto Label_8307; // 0x2053 JumpB
	var_4340_int = 0; // 0x2054 PushV
	func_11178(var_4340_int); // 0x2055 NEW_2
	var_4341_int = 0; // 0x2057 PushI
	var_4342_bool = var_4340_int == var_4341_int; // 0x2058 Eq
	if(var_4342_bool == 0) goto Label_8292; // 0x2059 JumpB
	var_4343_string = "d1q01"; // 0x205a PushS
	GetVariable(var_4343_string, var_4334_int); // 0x205b Func
	var_4344_int = 1000; // 0x205d PushI
	var_4345_bool = var_4334_int != var_4344_int; // 0x205e Neq
	if(var_4345_bool == 0) goto Label_8291; // 0x205f JumpB
	var_4346_string = "gameover_fail.xml"; // 0x2060 PushS
	GameOver(var_4346_string); // 0x2061 Func
	
Label_8291:
	goto Label_8307; // 0x2063 Jump
	
Label_8307:
	var_4347_int = 101; // 0x2073 PushI
	SendWorldWndMessage(var_4347_int); // 0x2074 Func
	var_4348_string = "c_iWM_RealDayChange"; // 0x2076 PushS
	SetVariable(var_4348_string, var_4329_int); // 0x2077 Func
	
Label_8313:
	return 4; // 0x2079 Return
	
Label_8292:
	var_4349_int = 0; // 0x2064 PushV
	func_11178(var_4349_int); // 0x2065 NEW_2
	var_4350_int = 1; // 0x2067 PushI
	var_4351_bool = var_4349_int == var_4350_int; // 0x2068 Eq
	if(var_4351_bool == 0) goto Label_8307; // 0x2069 JumpB
	var_4352_string = "b1q01"; // 0x206a PushS
	GetVariable(var_4352_string, var_4335_int); // 0x206b Func
	var_4353_int = 1000; // 0x206d PushI
	var_4354_bool = var_4335_int != var_4353_int; // 0x206e Neq
	if(var_4354_bool == 0) goto Label_8307; // 0x206f JumpB
	var_4355_string = "gameover_fail.xml"; // 0x2070 PushS
	GameOver(var_4355_string); // 0x2071 Func
}


func_81(var_584_bool, var_585_object, var_586_string)
{
	var_587_bool = 0; var_588_bool = 0; // 0x51 PushV
	var_589_string = "HasProperty"; // 0x52 PushS
	var_590_int = 2; // 0x53 PushI
	var_591_bool = IsFuncExist(var_585_object, var_589_string, var_590_int); // 0x54 FuncExist
	var_592_bool = var_591_bool == 0; // 0x55 Not
	if(var_592_bool == 0) goto Label_89; // 0x56 JumpB
	var_584_bool = 0; // 0x57 MovB
	return 2; // 0x58 Return
	
Label_89:
	HasProperty(var_586_string, var_588_bool); // 0x59 ObjFunc
	var_584_bool = var_588_bool; // 0x5b Mov
	return 2; // 0x5c Return
}


func_1110(var_790_bool, var_791_int, var_792_int)
{
	var_793_int = 0; var_794_int = 0; // 0x456 PushV
	var_795_int = 0; // 0x457 PushV
	func_11178(var_795_int); // 0x458 NEW_2
	var_794_int = var_795_int; // 0x459 Mov
	var_799_int = 1; // 0x45b PushI
	var_800_bool = var_794_int == var_799_int; // 0x45c Eq
	if(var_800_bool == 0) goto Label_1131; // 0x45d JumpB
	var_801_bool = 0; // 0x45e PushV
	var_801_bool = 0; // 0x45f MovB
	var_802_int = 0; // 0x460 PushI
	var_803_bool = var_791_int == var_802_int; // 0x461 Eq
	if(var_803_bool == 0) goto Label_1127; // 0x462 JumpB
	var_804_int = 21; // 0x463 PushI
	var_805_bool = var_792_int < var_804_int; // 0x464 LT
	if(var_805_bool == 0) goto Label_1127; // 0x465 JumpB
	var_801_bool = 1; // 0x466 MovB
	
Label_1127:
	if(var_801_bool == 0) goto Label_1130; // 0x467 JumpB
	var_790_bool = 1; // 0x468 MovB
	return 2; // 0x469 Return
	
Label_1130:
	goto Label_1139; // 0x46a Jump
	
Label_1139:
	var_790_bool = 0; // 0x473 MovB
	return 2; // 0x474 Return
	
Label_1131:
	var_806_int = 2; // 0x46b PushI
	var_807_bool = var_794_int == var_806_int; // 0x46c Eq
	if(var_807_bool == 0) goto Label_1139; // 0x46d JumpB
	var_808_int = 5; // 0x46e PushI
	var_809_bool = var_791_int == var_808_int; // 0x46f Eq
	if(var_809_bool == 0) goto Label_1139; // 0x470 JumpB
	var_790_bool = 1; // 0x471 MovB
	return 2; // 0x472 Return
}


func_93(var_5842_bool, var_5843_object, var_5844_string, var_5845_float, var_5846_float, var_5847_float)
{
	var_5848_float = 0; var_5849_float = 0; // 0x5d PushV
	var_5850_bool = 0; var_5851_object = Obj(); var_5852_string = ""; // 0x5e PushV
	var_5851_object = var_5843_object; // 0x5f Mov
	var_5852_string = var_5844_string; // 0x60 Mov
	func_81(var_5850_bool, var_5851_object, var_5852_string); // 0x61 NEW_2
	var_5853_bool = var_5850_bool == 0; // 0x63 Not
	if(var_5853_bool == 0) goto Label_103; // 0x64 JumpB
	var_5842_bool = 0; // 0x65 MovB
	return 2; // 0x66 Return
	
Label_103:
	GetProperty(var_5844_string, var_5849_float); // 0x67 ObjFunc
	var_5854_float = 0; var_5855_float = 0; var_5856_float = 0; var_5857_float = 0; // 0x69 PushV
	var_5855_float = var_5849_float + var_5845_float; // 0x6a Add2
	var_5856_float = var_5846_float; // 0x6b Mov
	var_5857_float = var_5847_float; // 0x6c Mov
	func_115(var_5854_float, var_5855_float, var_5856_float, var_5857_float); // 0x6d NEW_2
	SetProperty(var_5844_string, var_5854_float); // 0x6f ObjFunc
	var_5842_bool = 1; // 0x71 MovB
	return 2; // 0x72 Return
}


func_13415(var_4428_object, var_4430_cvector, var_4431_cvector)
{
	var_4432_object = Obj(); var_4433_object = Obj(); // 0x3467 PushV
	var_4434_string = "pers_morlok"; // 0x3468 PushS
	var_4435_string = "Burah_arena_manager.xml"; // 0x3469 PushS
	AddStationaryActor(var_4433_object, var_4430_cvector, var_4431_cvector, var_4434_string, var_4435_string); // 0x346a ObjFunc
	var_4428_object = var_4433_object; // 0x346c Mov
	return 2; // 0x346d Return
}


func_4210(var_3427_int, var_3428_int, var_3429_int)
{
	var_3430_int = 0; var_3431_int = 0; var_3432_int = 0; var_3433_int = 0; var_3434_int = 0; var_3435_int = 0; var_3436_int = 0; var_3437_int = 0; // 0x1072 PushV
	var_3438_bool = 0; // 0x1073 PushV
	var_3438_bool = 0; // 0x1074 MovB
	var_3439_int = 8; // 0x1075 PushI
	var_3440_bool = var_3429_int > var_3439_int; // 0x1076 GT
	if(var_3440_bool == 0) goto Label_4220; // 0x1077 JumpB
	var_3441_int = 21; // 0x1078 PushI
	var_3442_bool = var_3429_int < var_3441_int; // 0x1079 LT
	if(var_3442_bool == 0) goto Label_4220; // 0x107a JumpB
	var_3438_bool = 1; // 0x107b MovB
	
Label_4220:
	if(var_3438_bool == 0) goto Label_4297; // 0x107c JumpB
	var_3443_int = 0; var_3444_string = ""; var_3445_string = ""; var_3446_int = 0; // 0x107d PushV
	var_3443_int = var_3427_int; // 0x107e Mov
	var_3444_string = "pers_rat"; // 0x107f MovS
	var_3445_string = "rat.xml"; // 0x1080 MovS
	var_3446_int = 4; // 0x1081 MovI
	func_503(var_3443_int, var_3444_string, var_3445_string, var_3446_int); // 0x1082 NEW_2
	var_3447_int = 0; var_3448_string = ""; var_3449_string = ""; var_3450_int = 0; // 0x1084 PushV
	var_3447_int = var_3427_int; // 0x1085 Mov
	var_3448_string = "pers_alkash"; // 0x1086 MovS
	var_3449_string = "alkash.xml"; // 0x1087 MovS
	var_3450_int = 2; // 0x1088 MovI
	func_503(var_3447_int, var_3448_string, var_3449_string, var_3450_int); // 0x1089 NEW_2
	var_3451_int = 0; var_3452_string = ""; var_3453_string = ""; var_3454_int = 0; // 0x108b PushV
	var_3451_int = var_3427_int; // 0x108c Mov
	var_3452_string = "pers_dohodyaga"; // 0x108d MovS
	var_3453_string = "dohodyaga.xml"; // 0x108e MovS
	var_3454_int = 1; // 0x108f MovI
	func_503(var_3451_int, var_3452_string, var_3453_string, var_3454_int); // 0x1090 NEW_2
	var_3455_int = 2; // 0x1092 PushI
	var_3456_float = 0; var_3457_int = 0; // 0x1093 PushV
	var_3457_int = var_3428_int; // 0x1094 Mov
	func_1165(var_3456_float, var_3457_int); // 0x1095 NEW_2
	var_3434_int = var_3455_int * var_3456_float; // 0x1097 Mult2
	var_3458_int = var_3434_int; // 0x1098 Push
	if(var_3458_int == 0) goto Label_4257; // 0x1099 JumpB
	var_3459_int = 0; var_3460_string = ""; var_3461_string = ""; var_3462_int = 0; // 0x109a PushV
	var_3459_int = var_3427_int; // 0x109b Mov
	var_3460_string = "pers_grabitel"; // 0x109c MovS
	var_3461_string = "grabitel.xml"; // 0x109d MovS
	var_3462_int = var_3434_int; // 0x109e Mov
	func_503(var_3459_int, var_3460_string, var_3461_string, var_3462_int); // 0x109f NEW_2
	
Label_4257:
	var_3463_int = 1; // 0x10a1 PushI
	var_3464_int = var_3428_int + var_3463_int; // 0x10a2 Add
	var_3465_int = 2; // 0x10a3 PushI
	var_3466_bool = var_3464_int >= var_3465_int; // 0x10a4 GE
	if(var_3466_bool == 0) goto Label_4281; // 0x10a5 JumpB
	var_3467_int = 0; var_3468_string = ""; var_3469_string = ""; var_3470_int = 0; // 0x10a6 PushV
	var_3467_int = var_3427_int; // 0x10a7 Mov
	var_3468_string = "pers_patrool"; // 0x10a8 MovS
	var_3469_string = "patrol.xml"; // 0x10a9 MovS
	var_3470_int = 2; // 0x10aa MovI
	func_503(var_3467_int, var_3468_string, var_3469_string, var_3470_int); // 0x10ab NEW_2
	var_3471_bool = 0; var_3472_int = 0; // 0x10ad PushV
	var_3472_int = var_3428_int; // 0x10ae Mov
	func_1372(var_3471_bool, var_3472_int); // 0x10af NEW_2
	if(var_3471_bool == 0) goto Label_4281; // 0x10b1 JumpB
	var_3473_int = 0; var_3474_string = ""; var_3475_string = ""; var_3476_int = 0; // 0x10b2 PushV
	var_3473_int = var_3427_int; // 0x10b3 Mov
	var_3474_string = "pers_soldat_hand"; // 0x10b4 MovS
	var_3475_string = "soldier_patrol.xml"; // 0x10b5 MovS
	var_3476_int = 1; // 0x10b6 MovI
	func_503(var_3473_int, var_3474_string, var_3475_string, var_3476_int); // 0x10b7 NEW_2
	
Label_4281:
	var_3477_int = 1; // 0x10b9 PushI
	var_3478_float = 0; var_3479_int = 0; // 0x10ba PushV
	var_3479_int = var_3428_int; // 0x10bb Mov
	func_1255(var_3478_float, var_3479_int); // 0x10bc NEW_2
	var_3435_int = var_3477_int * var_3478_float; // 0x10be Mult2
	var_3480_int = var_3435_int; // 0x10bf Push
	if(var_3480_int == 0) goto Label_4296; // 0x10c0 JumpB
	var_3481_int = 0; var_3482_string = ""; var_3483_string = ""; var_3484_int = 0; // 0x10c1 PushV
	var_3481_int = var_3427_int; // 0x10c2 Mov
	var_3482_string = "pers_bomber"; // 0x10c3 MovS
	var_3483_string = "bomber.xml"; // 0x10c4 MovS
	var_3484_int = var_3435_int; // 0x10c5 Mov
	func_503(var_3481_int, var_3482_string, var_3483_string, var_3484_int); // 0x10c6 NEW_2
	
Label_4296:
	goto Label_4372; // 0x10c8 Jump
	
Label_4372:
	var_3485_bool = 0; var_3486_int = 0; // 0x1114 PushV
	var_3486_int = var_3428_int; // 0x1115 Mov
	func_1372(var_3485_bool, var_3486_int); // 0x1116 NEW_2
	if(var_3485_bool == 0) goto Label_4384; // 0x1118 JumpB
	var_3487_int = 0; var_3488_string = ""; var_3489_string = ""; var_3490_int = 0; // 0x1119 PushV
	var_3487_int = var_3427_int; // 0x111a Mov
	var_3488_string = "pers_sanitar"; // 0x111b MovS
	var_3489_string = "sanitar.xml"; // 0x111c MovS
	var_3490_int = 2; // 0x111d MovI
	func_503(var_3487_int, var_3488_string, var_3489_string, var_3490_int); // 0x111e NEW_2
	
Label_4384:
	return 8; // 0x1120 Return
	
Label_4297:
	var_3491_int = 0; var_3492_string = ""; var_3493_string = ""; var_3494_int = 0; // 0x10c9 PushV
	var_3491_int = var_3427_int; // 0x10ca Mov
	var_3492_string = "pers_rat"; // 0x10cb MovS
	var_3493_string = "rat.xml"; // 0x10cc MovS
	var_3494_int = 8; // 0x10cd MovI
	func_503(var_3491_int, var_3492_string, var_3493_string, var_3494_int); // 0x10ce NEW_2
	var_3495_int = 0; var_3496_string = ""; var_3497_string = ""; var_3498_int = 0; // 0x10d0 PushV
	var_3495_int = var_3427_int; // 0x10d1 Mov
	var_3496_string = "pers_alkash"; // 0x10d2 MovS
	var_3497_string = "alkash.xml"; // 0x10d3 MovS
	var_3498_int = 1; // 0x10d4 MovI
	func_503(var_3495_int, var_3496_string, var_3497_string, var_3498_int); // 0x10d5 NEW_2
	var_3499_int = 0; var_3500_string = ""; var_3501_string = ""; var_3502_int = 0; // 0x10d7 PushV
	var_3499_int = var_3427_int; // 0x10d8 Mov
	var_3500_string = "pers_dohodyaga"; // 0x10d9 MovS
	var_3501_string = "dohodyaga.xml"; // 0x10da MovS
	var_3502_int = 1; // 0x10db MovI
	func_503(var_3499_int, var_3500_string, var_3501_string, var_3502_int); // 0x10dc NEW_2
	var_3503_int = 3; // 0x10de PushI
	var_3504_float = 0; var_3505_int = 0; // 0x10df PushV
	var_3505_int = var_3428_int; // 0x10e0 Mov
	func_1165(var_3504_float, var_3505_int); // 0x10e1 NEW_2
	var_3436_int = var_3503_int * var_3504_float; // 0x10e3 Mult2
	var_3506_int = var_3436_int; // 0x10e4 Push
	if(var_3506_int == 0) goto Label_4333; // 0x10e5 JumpB
	var_3507_int = 0; var_3508_string = ""; var_3509_string = ""; var_3510_int = 0; // 0x10e6 PushV
	var_3507_int = var_3427_int; // 0x10e7 Mov
	var_3508_string = "pers_grabitel"; // 0x10e8 MovS
	var_3509_string = "grabitel.xml"; // 0x10e9 MovS
	var_3510_int = var_3436_int; // 0x10ea Mov
	func_503(var_3507_int, var_3508_string, var_3509_string, var_3510_int); // 0x10eb NEW_2
	
Label_4333:
	var_3511_int = 1; // 0x10ed PushI
	var_3512_int = var_3428_int + var_3511_int; // 0x10ee Add
	var_3513_int = 2; // 0x10ef PushI
	var_3514_bool = var_3512_int >= var_3513_int; // 0x10f0 GE
	if(var_3514_bool == 0) goto Label_4357; // 0x10f1 JumpB
	var_3515_int = 0; var_3516_string = ""; var_3517_string = ""; var_3518_int = 0; // 0x10f2 PushV
	var_3515_int = var_3427_int; // 0x10f3 Mov
	var_3516_string = "pers_patrool"; // 0x10f4 MovS
	var_3517_string = "patrol.xml"; // 0x10f5 MovS
	var_3518_int = 1; // 0x10f6 MovI
	func_503(var_3515_int, var_3516_string, var_3517_string, var_3518_int); // 0x10f7 NEW_2
	var_3519_bool = 0; var_3520_int = 0; // 0x10f9 PushV
	var_3520_int = var_3428_int; // 0x10fa Mov
	func_1372(var_3519_bool, var_3520_int); // 0x10fb NEW_2
	if(var_3519_bool == 0) goto Label_4357; // 0x10fd JumpB
	var_3521_int = 0; var_3522_string = ""; var_3523_string = ""; var_3524_int = 0; // 0x10fe PushV
	var_3521_int = var_3427_int; // 0x10ff Mov
	var_3522_string = "pers_soldat_hand"; // 0x1100 MovS
	var_3523_string = "soldier_patrol.xml"; // 0x1101 MovS
	var_3524_int = 1; // 0x1102 MovI
	func_503(var_3521_int, var_3522_string, var_3523_string, var_3524_int); // 0x1103 NEW_2
	
Label_4357:
	var_3525_int = 1; // 0x1105 PushI
	var_3526_float = 0; var_3527_int = 0; // 0x1106 PushV
	var_3527_int = var_3428_int; // 0x1107 Mov
	func_1255(var_3526_float, var_3527_int); // 0x1108 NEW_2
	var_3437_int = var_3525_int * var_3526_float; // 0x110a Mult2
	var_3528_int = var_3437_int; // 0x110b Push
	if(var_3528_int == 0) goto Label_4372; // 0x110c JumpB
	var_3529_int = 0; var_3530_string = ""; var_3531_string = ""; var_3532_int = 0; // 0x110d PushV
	var_3529_int = var_3427_int; // 0x110e Mov
	var_3530_string = "pers_bomber"; // 0x110f MovS
	var_3531_string = "bomber.xml"; // 0x1110 MovS
	var_3532_int = var_3437_int; // 0x1111 Mov
	func_503(var_3529_int, var_3530_string, var_3531_string, var_3532_int); // 0x1112 NEW_2
}


func_115(var_5854_float, var_5855_float, var_5856_float, var_5857_float)
{
	var_5858_bool = var_5855_float < var_5856_float; // 0x74 LT
	if(var_5858_bool == 0) goto Label_120; // 0x75 JumpB
	var_5854_float = var_5856_float; // 0x76 Mov
	return 0; // 0x77 Return
	
Label_120:
	var_5859_bool = var_5855_float > var_5857_float; // 0x78 GT
	if(var_5859_bool == 0) goto Label_124; // 0x79 JumpB
	var_5854_float = var_5857_float; // 0x7a Mov
	return 0; // 0x7b Return
	
Label_124:
	var_5854_float = var_5855_float; // 0x7c Mov
	return 0; // 0x7d Return
}


func_7283()
{
	var_313_string = "lc_house3_05_i2"; // 0x1c74 PushS
	add(var_313_string); // 0x1c75 ObjFunc
	var_314_string = "lc_house3_05"; // 0x1c77 PushS
	add(var_314_string); // 0x1c78 ObjFunc
	var_315_string = "lc_house3_06_i2"; // 0x1c7a PushS
	add(var_315_string); // 0x1c7b ObjFunc
	var_316_string = "lc_house3_06"; // 0x1c7d PushS
	add(var_316_string); // 0x1c7e ObjFunc
	var_317_string = "lc_House6_06"; // 0x1c80 PushS
	add(var_317_string); // 0x1c81 ObjFunc
	var_318_string = "lc_house3_04_i2"; // 0x1c83 PushS
	add(var_318_string); // 0x1c84 ObjFunc
	var_319_string = "lc_house3_04"; // 0x1c86 PushS
	add(var_319_string); // 0x1c87 ObjFunc
	var_320_string = "house3_plus_03_i2"; // 0x1c89 PushS
	add(var_320_string); // 0x1c8a ObjFunc
	return 0; // 0x1c8c Return
}


func_1141(var_767_float, var_768_int)
{
	var_769_int = 1; // 0x476 PushI
	var_770_int = var_768_int + var_769_int; // 0x477 Add
	var_771_int = 7; // 0x478 PushI
	var_772_bool = var_770_int == var_771_int; // 0x479 Eq
	if(var_772_bool == 0) goto Label_1149; // 0x47a JumpB
	var_767_float = 2; // 0x47b MovI
	return 0; // 0x47c Return
	
Label_1149:
	var_773_int = 1; // 0x47d PushI
	var_774_int = var_768_int + var_773_int; // 0x47e Add
	var_775_int = 8; // 0x47f PushI
	var_776_bool = var_774_int == var_775_int; // 0x480 Eq
	if(var_776_bool == 0) goto Label_1156; // 0x481 JumpB
	var_767_float = 0; // 0x482 MovI
	return 0; // 0x483 Return
	
Label_1156:
	var_777_int = 1; // 0x484 PushI
	var_778_int = var_768_int + var_777_int; // 0x485 Add
	var_779_int = 1; // 0x486 PushI
	var_780_bool = var_778_int == var_779_int; // 0x487 Eq
	if(var_780_bool == 0) goto Label_1163; // 0x488 JumpB
	var_767_float = 0; // 0x489 MovI
	return 0; // 0x48a Return
	
Label_1163:
	var_767_float = 1; // 0x48b MovI
	return 0; // 0x48c Return
}


func_6262()
{
	var_226_string = "r4_house_2_02"; // 0x1877 PushS
	add(var_226_string); // 0x1878 ObjFunc
	var_227_string = "r4_house3_03_i2"; // 0x187a PushS
	add(var_227_string); // 0x187b ObjFunc
	var_228_string = "r4_house3_03"; // 0x187d PushS
	add(var_228_string); // 0x187e ObjFunc
	var_229_string = "r4_house4_02_i2"; // 0x1880 PushS
	add(var_229_string); // 0x1881 ObjFunc
	var_230_string = "r4_house4_02"; // 0x1883 PushS
	add(var_230_string); // 0x1884 ObjFunc
	var_231_string = "r4_house4_01_i2"; // 0x1886 PushS
	add(var_231_string); // 0x1887 ObjFunc
	var_232_string = "r4_house4_01"; // 0x1889 PushS
	add(var_232_string); // 0x188a ObjFunc
	var_233_string = "r4_house3_02_i2"; // 0x188c PushS
	add(var_233_string); // 0x188d ObjFunc
	var_234_string = "r4_house3_02"; // 0x188f PushS
	add(var_234_string); // 0x1890 ObjFunc
	var_235_string = "r4_house_2_01"; // 0x1892 PushS
	add(var_235_string); // 0x1893 ObjFunc
	var_236_string = "r4_house3_01_i2"; // 0x1895 PushS
	add(var_236_string); // 0x1896 ObjFunc
	var_237_string = "r4_house3_01"; // 0x1898 PushS
	add(var_237_string); // 0x1899 ObjFunc
	var_238_string = "r4_house7_01"; // 0x189b PushS
	add(var_238_string); // 0x189c ObjFunc
	var_239_string = "r4_House6_01"; // 0x189e PushS
	add(var_239_string); // 0x189f ObjFunc
	var_240_string = "r4_house_2_03"; // 0x18a1 PushS
	add(var_240_string); // 0x18a2 ObjFunc
	var_241_string = "r4_House6_03"; // 0x18a4 PushS
	add(var_241_string); // 0x18a5 ObjFunc
	var_242_string = "r4_house_2_04"; // 0x18a7 PushS
	add(var_242_string); // 0x18a8 ObjFunc
	return 0; // 0x18aa Return
}


func_5238(var_1295_int, var_1296_int, var_1297_object, var_1298_object, var_1299_object, var_1300_object)
{
	var_1301_int = 0; // 0x1477 PushI
	var_1302_bool = var_1296_int == var_1301_int; // 0x1478 Eq
	if(var_1302_bool == 0) goto Label_5278; // 0x1479 JumpB
	var_1303_int = 0; var_1304_bool = 0; // 0x147a PushV
	var_1303_int = 4; // 0x147b MovI
	var_1304_bool = 0; // 0x147c MovB
	func_796(var_1303_int, var_1304_bool); // 0x147d NEW_2
	var_1305_int = 0; var_1306_bool = 0; var_1307_int = 0; // 0x147f PushV
	var_1305_int = 4; // 0x1480 MovI
	var_1306_bool = 0; // 0x1481 MovB
	var_1307_int = 1; // 0x1482 MovI
	func_813(var_1305_int, var_1306_bool, var_1307_int); // 0x1483 NEW_2
	var_1308_int = 0; var_1309_int = 0; var_1310_object = Obj(); var_1311_object = Obj(); var_1312_object = Obj(); // 0x1485 PushV
	var_1308_int = 4; // 0x1486 MovI
	var_1309_int = var_1295_int; // 0x1487 Mov
	var_1310_object = var_1297_object; // 0x1488 Mov
	var_1311_object = var_1298_object; // 0x1489 Mov
	var_1312_object = var_1299_object; // 0x148a Mov
	func_622(var_1309_int, var_1310_object, var_1311_object, var_1312_object); // 0x148b NEW_2
	var_1313_object = Obj(); var_1314_int = 0; // 0x148d PushV
	var_1313_object = var_1300_object; // 0x148e Mov
	var_1314_int = 0; // 0x148f MovI
	func_305(var_1314_int); // 0x1490 NEW_2
	var_1315_int = 0; var_1316_bool = 0; var_1317_int = 0; // 0x1492 PushV
	var_1315_int = 4; // 0x1493 MovI
	var_1316_bool = 0; // 0x1494 MovB
	var_1317_int = 4; // 0x1495 MovI
	func_870(var_1315_int, var_1316_bool, var_1317_int); // 0x1496 NEW_2
	var_1318_int = 0; var_1319_bool = 0; var_1320_int = 0; // 0x1498 PushV
	var_1318_int = 4; // 0x1499 MovI
	var_1319_bool = 0; // 0x149a MovB
	var_1320_int = 4; // 0x149b MovI
	func_932(var_1318_int, var_1319_bool, var_1320_int); // 0x149c NEW_2
	
Label_5278:
	var_1321_int = 0; var_1322_int = 0; // 0x149e PushV
	var_1321_int = 4; // 0x149f MovI
	var_1322_int = var_1296_int; // 0x14a0 Mov
	func_1020(var_1321_int, var_1322_int); // 0x14a1 NEW_2
	var_1335_int = 0; var_1336_int = 0; var_1337_int = 0; // 0x14a3 PushV
	var_1335_int = 4; // 0x14a4 MovI
	var_1336_int = var_1295_int; // 0x14a5 Mov
	var_1337_int = var_1296_int; // 0x14a6 Mov
	func_1897(var_1335_int, var_1336_int, var_1337_int); // 0x14a7 NEW_2
	return 0; // 0x14a9 Return
}


func_10354()
{
	var_5379_object = Obj(); var_5380_object = Obj(); var_5381_object = Obj(); var_5382_object = Obj(); // 0x2872 PushV
	var_5383_object = Obj(); // 0x2873 PushV
	func_11161(var_5383_object); // 0x2874 NEW_2
	var_5381_object = var_5383_object; // 0x2875 Mov
	var_5384_string = "k6q03LaskaGotoAlbinos"; // 0x2877 PushS
	FindMark(var_5382_object, var_5384_string); // 0x2878 ObjFunc
	var_5385_object = var_5382_object; // 0x287a Push
	if(var_5385_object == 0) goto Label_10366; // 0x287b JumpB
	Remove(); // 0x287c ObjFunc
	
Label_10366:
	var_5386_string = "k6q01IfAnna"; // 0x287e PushS
	FindMark(var_5382_object, var_5386_string); // 0x287f ObjFunc
	var_5387_object = var_5382_object; // 0x2881 Push
	if(var_5387_object == 0) goto Label_10373; // 0x2882 JumpB
	Remove(); // 0x2883 ObjFunc
	
Label_10373:
	var_5388_string = "k6q01IfEva"; // 0x2885 PushS
	FindMark(var_5382_object, var_5388_string); // 0x2886 ObjFunc
	var_5389_object = var_5382_object; // 0x2888 Push
	if(var_5389_object == 0) goto Label_10380; // 0x2889 JumpB
	Remove(); // 0x288a ObjFunc
	
Label_10380:
	var_5390_string = "k6q01IfLara"; // 0x288c PushS
	FindMark(var_5382_object, var_5390_string); // 0x288d ObjFunc
	var_5391_object = var_5382_object; // 0x288f Push
	if(var_5391_object == 0) goto Label_10387; // 0x2890 JumpB
	Remove(); // 0x2891 ObjFunc
	
Label_10387:
	var_5392_string = "k6q01IfOspina"; // 0x2893 PushS
	FindMark(var_5382_object, var_5392_string); // 0x2894 ObjFunc
	var_5393_object = var_5382_object; // 0x2896 Push
	if(var_5393_object == 0) goto Label_10394; // 0x2897 JumpB
	Remove(); // 0x2898 ObjFunc
	
Label_10394:
	var_5394_string = "k6q02GotoKapella"; // 0x289a PushS
	FindMark(var_5382_object, var_5394_string); // 0x289b ObjFunc
	var_5395_object = var_5382_object; // 0x289d Push
	if(var_5395_object == 0) goto Label_10401; // 0x289e JumpB
	Remove(); // 0x289f ObjFunc
	
Label_10401:
	var_5396_bool = 0; var_5397_int = 0; // 0x28a1 PushV
	var_5397_int = 408; // 0x28a2 MovI
	func_11136(var_5396_bool, var_5397_int); // 0x28a3 NEW_2
	var_5398_bool = 0; var_5399_int = 0; // 0x28a5 PushV
	var_5399_int = 500; // 0x28a6 MovI
	func_11136(var_5398_bool, var_5399_int); // 0x28a7 NEW_2
	var_5400_bool = 0; var_5401_int = 0; // 0x28a9 PushV
	var_5401_int = 748; // 0x28aa MovI
	func_11136(var_5400_bool, var_5401_int); // 0x28ab NEW_2
	var_5402_bool = 0; var_5403_int = 0; // 0x28ad PushV
	var_5403_int = 723; // 0x28ae MovI
	func_11136(var_5402_bool, var_5403_int); // 0x28af NEW_2
	return 4; // 0x28b1 Return
}


func_8314(var_4367_int, var_4368_int)
{
	var_4370_object = Obj(); var_4371_object = Obj(); var_4372_string = ""; var_4373_int = 0; var_4374_int = 0; var_4375_int = 0; var_4376_object = Obj(); var_4377_object = Obj(); var_4378_string = ""; var_4379_int = 0; var_4380_int = 0; var_4381_int = 0; // 0x207a PushV
	var_4382_bool = 0; // 0x207b PushV
	var_4382_bool = 0; // 0x207c MovB
	var_4383_int = 5; // 0x207d PushI
	var_4384_bool = var_4368_int == var_4383_int; // 0x207e Eq
	if(var_4384_bool == 0) goto Label_8324; // 0x207f JumpB
	var_4385_int = 7; // 0x2080 PushI
	var_4386_bool = var_4367_int >= var_4385_int; // 0x2081 GE
	if(var_4386_bool == 0) goto Label_8324; // 0x2082 JumpB
	var_4382_bool = 1; // 0x2083 MovB
	
Label_8324:
	if(var_4382_bool == 0) goto Label_8335; // 0x2084 JumpB
	var_4387_int = 0; // 0x2085 PushV
	func_11178(var_4387_int); // 0x2086 NEW_2
	var_4388_int = 2; // 0x2088 PushI
	var_4389_bool = var_4387_int != var_4388_int; // 0x2089 Neq
	if(var_4389_bool == 0) goto Label_8334; // 0x208a JumpB
	func_7778(); // 0x208c NEW_2
	
Label_8334:
	goto Label_8354; // 0x208e Jump
	
Label_8354:
	var_4436_bool = 0; // 0x20a2 PushV
	var_4436_bool = 0; // 0x20a3 MovB
	var_4437_int = 7; // 0x20a4 PushI
	var_4438_bool = var_4368_int == var_4437_int; // 0x20a5 Eq
	if(var_4438_bool == 0) goto Label_8363; // 0x20a6 JumpB
	var_4439_int = 1; // 0x20a7 PushI
	var_4440_bool = var_4367_int != var_4439_int; // 0x20a8 Neq
	if(var_4440_bool == 0) goto Label_8363; // 0x20a9 JumpB
	var_4436_bool = 1; // 0x20aa MovB
	
Label_8363:
	if(var_4436_bool == 0) goto Label_8367; // 0x20ab JumpB
	var_4441_int = 100; // 0x20ac PushI
	SendWorldWndMessage(var_4441_int); // 0x20ad Func
	
Label_8367:
	var_4442_int = 0; // 0x20af PushI
	var_4443_bool = var_4368_int == var_4442_int; // 0x20b0 Eq
	if(var_4443_bool == 0) goto Label_8455; // 0x20b1 JumpB
	func_8492(); // 0x20b3 NEW_2
	func_8567(); // 0x20b6 NEW_2
	var_4537_int = 6; // 0x20b8 PushI
	var_4538_bool = var_4367_int == var_4537_int; // 0x20b9 Eq
	if(var_4538_bool == 0) goto Label_8388; // 0x20ba JumpB
	GetMainOutdoorScene(var_4376_object); // 0x20bb Func
	var_4539_string = "shed_corpse"; // 0x20bd PushS
	var_4540_string = "splash_object_wo_pf.bin"; // 0x20be PushS
	var_4541_cvector = CVector(0.0, 0.0, 0.0); // 0x20bf PushVec
	AddScriptedActor(var_4377_object, var_4539_string, var_4540_string, var_4376_object, var_4541_cvector); // 0x20c0 Func
	var_4377_object = 0; // 0x20c2 SetNull
	var_4376_object = 0; // 0x20c3 SetNull
	
Label_8388:
	var_4542_int = 9; // 0x20c4 PushI
	var_4543_bool = var_4367_int == var_4542_int; // 0x20c5 Eq
	if(var_4543_bool == 0) goto Label_8394; // 0x20c6 JumpB
	func_8616(); // 0x20c8 NEW_2
	
Label_8394:
	var_4557_int = 1; // 0x20ca PushI
	var_4558_bool = var_4367_int != var_4557_int; // 0x20cb Neq
	if(var_4558_bool == 0) goto Label_8455; // 0x20cc JumpB
	var_4559_int = 0; // 0x20cd PushV
	func_11178(var_4559_int); // 0x20ce NEW_2
	var_4560_int = 1; // 0x20d0 PushI
	var_4561_bool = var_4559_int == var_4560_int; // 0x20d1 Eq
	if(var_4561_bool == 0) goto Label_8413; // 0x20d2 JumpB
	var_4562_string = "b"; // 0x20d3 PushS
	var_4563_int = 1; // 0x20d4 PushI
	var_4564_int = var_4367_int - var_4563_int; // 0x20d5 Sub
	var_4565_int = var_4562_string + var_4564_int; // 0x20d6 Add
	var_4566_string = "q01"; // 0x20d7 PushS
	var_4567_int = var_4565_int + var_4566_string; // 0x20d8 Add
	GetVariable(var_4567_int, var_4379_int); // 0x20d9 Func
	var_4378_string = "volonteers_burah"; // 0x20db MovS
	goto Label_8438; // 0x20dc Jump
	
Label_8438:
	Trace(var_4378_string); // 0x20f6 Func
	var_4568_int = 1000; // 0x20f8 PushI
	var_4569_bool = var_4379_int == var_4568_int; // 0x20f9 Eq
	if(var_4569_bool == 0) goto Label_8449; // 0x20fa JumpB
	var_4570_bool = 0; var_4571_string = ""; var_4572_string = ""; var_4573_string = ""; // 0x20fb PushV
	var_4571_string = var_4378_string; // 0x20fc Mov
	var_4572_string = "rescue_locked"; // 0x20fd MovS
	var_4573_string = ""; // 0x20fe MovS
	func_251(var_4570_bool, var_4571_string, var_4572_string, var_4573_string); // 0x20ff NEW_2
	
Label_8449:
	var_4577_bool = 0; var_4578_string = ""; var_4579_string = ""; var_4580_string = ""; // 0x2101 PushV
	var_4578_string = var_4378_string; // 0x2102 Mov
	var_4579_string = "update"; // 0x2103 MovS
	var_4580_string = ""; // 0x2104 MovS
	func_251(var_4577_bool, var_4578_string, var_4579_string, var_4580_string); // 0x2105 NEW_2
	
Label_8455:
	var_4581_bool = 0; // 0x2107 PushV
	var_4581_bool = 0; // 0x2108 MovB
	var_4582_int = 6; // 0x2109 PushI
	var_4583_bool = var_4367_int == var_4582_int; // 0x210a Eq
	if(var_4583_bool == 0) goto Label_8464; // 0x210b JumpB
	var_4584_int = 0; // 0x210c PushI
	var_4585_bool = var_4368_int == var_4584_int; // 0x210d Eq
	if(var_4585_bool == 0) goto Label_8464; // 0x210e JumpB
	var_4581_bool = 1; // 0x210f MovB
	
Label_8464:
	if(var_4581_bool == 0) goto Label_8468; // 0x2110 JumpB
	func_7898(); // 0x2112 NEW_2
	
Label_8468:
	var_4588_bool = 0; // 0x2114 PushV
	var_4588_bool = 0; // 0x2115 MovB
	var_4589_int = 7; // 0x2116 PushI
	var_4590_bool = var_4367_int == var_4589_int; // 0x2117 Eq
	if(var_4590_bool == 0) goto Label_8477; // 0x2118 JumpB
	var_4591_int = 0; // 0x2119 PushI
	var_4592_bool = var_4368_int == var_4591_int; // 0x211a Eq
	if(var_4592_bool == 0) goto Label_8477; // 0x211b JumpB
	var_4588_bool = 1; // 0x211c MovB
	
Label_8477:
	if(var_4588_bool == 0) goto Label_8491; // 0x211d JumpB
	var_4593_object = GlobalVars[14]; // 0x211e PushGE
	size(var_4380_int); // 0x211f ObjFunc
	var_4381_int = 0; // 0x2121 MovI
	
Label_8482:
	var_4594_bool = var_4381_int < var_4380_int; // 0x2122 LT
	if(var_4594_bool == 0) goto Label_8491; // 0x2123 JumpB
	var_4595_int = 0; // 0x2124 PushV
	var_4595_int = var_4381_int; // 0x2125 Mov
	func_7605(var_4595_int); // 0x2126 NEW_2
	var_4648_int = 1; // 0x2128 PushI
	var_4381_int = var_4381_int + var_4648_int; // 0x2129 Add2
	goto Label_8482; // 0x212a Jump
	
Label_8491:
	return 12; // 0x212b Return
	
Label_8413:
	var_4649_int = 0; // 0x20dd PushV
	func_11178(var_4649_int); // 0x20de NEW_2
	var_4650_int = 0; // 0x20e0 PushI
	var_4651_bool = var_4649_int == var_4650_int; // 0x20e1 Eq
	if(var_4651_bool == 0) goto Label_8429; // 0x20e2 JumpB
	var_4652_string = "d"; // 0x20e3 PushS
	var_4653_int = 1; // 0x20e4 PushI
	var_4654_int = var_4367_int - var_4653_int; // 0x20e5 Sub
	var_4655_int = var_4652_string + var_4654_int; // 0x20e6 Add
	var_4656_string = "q01"; // 0x20e7 PushS
	var_4657_int = var_4655_int + var_4656_string; // 0x20e8 Add
	GetVariable(var_4657_int, var_4379_int); // 0x20e9 Func
	var_4378_string = "volonteers_danko"; // 0x20eb MovS
	goto Label_8438; // 0x20ec Jump
	
Label_8429:
	var_4658_string = "k"; // 0x20ed PushS
	var_4659_int = 1; // 0x20ee PushI
	var_4660_int = var_4367_int - var_4659_int; // 0x20ef Sub
	var_4661_int = var_4658_string + var_4660_int; // 0x20f0 Add
	var_4662_string = "q01"; // 0x20f1 PushS
	var_4663_int = var_4661_int + var_4662_string; // 0x20f2 Add
	GetVariable(var_4663_int, var_4379_int); // 0x20f3 Func
	var_4378_string = "volonteers_klara"; // 0x20f5 MovS
	
Label_8335:
	var_4664_bool = 0; // 0x208f PushV
	var_4664_bool = 0; // 0x2090 MovB
	var_4665_int = 22; // 0x2091 PushI
	var_4666_bool = var_4368_int == var_4665_int; // 0x2092 Eq
	if(var_4666_bool == 0) goto Label_8344; // 0x2093 JumpB
	var_4667_int = 7; // 0x2094 PushI
	var_4668_bool = var_4367_int >= var_4667_int; // 0x2095 GE
	if(var_4668_bool == 0) goto Label_8344; // 0x2096 JumpB
	var_4664_bool = 1; // 0x2097 MovB
	
Label_8344:
	if(var_4664_bool == 0) goto Label_8354; // 0x2098 JumpB
	var_4669_int = 0; // 0x2099 PushV
	func_11178(var_4669_int); // 0x209a NEW_2
	var_4670_int = 2; // 0x209c PushI
	var_4671_bool = var_4669_int != var_4670_int; // 0x209d Neq
	if(var_4671_bool == 0) goto Label_8354; // 0x209e JumpB
	func_7841(); // 0x20a0 NEW_2
}


func_126(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x7e PushV
	CreateObjectVector(var_42_object); // 0x7f Func
	var_40_object = var_42_object; // 0x81 Mov
	return 2; // 0x82 Return
}


func_9345(var_3168_int, var_3169_int, var_3170_int)
{
	var_3171_object = Obj(); var_3172_object = Obj(); var_3173_object = Obj(); var_3174_object = Obj(); var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj(); var_3178_object = Obj(); // 0x2481 PushV
	var_3179_object = GlobalVars[8]; // 0x2482 PushGE
	get(var_3175_object, var_3168_int); // 0x2483 ObjFunc
	var_3180_object = GlobalVars[9]; // 0x2485 PushGE
	get(var_3176_object, var_3168_int); // 0x2486 ObjFunc
	var_3181_object = GlobalVars[10]; // 0x2488 PushGE
	get(var_3177_object, var_3168_int); // 0x2489 ObjFunc
	var_3182_object = GlobalVars[13]; // 0x248b PushGE
	get(var_3178_object, var_3168_int); // 0x248c ObjFunc
	var_3183_int = 0; // 0x248e PushI
	var_3184_bool = var_3168_int == var_3183_int; // 0x248f Eq
	if(var_3184_bool == 0) goto Label_9371; // 0x2490 JumpB
	var_3185_int = 0; var_3186_int = 0; var_3187_object = Obj(); var_3188_object = Obj(); var_3189_object = Obj(); var_3190_object = Obj(); // 0x2491 PushV
	var_3185_int = var_3169_int; // 0x2492 Mov
	var_3186_int = var_3170_int; // 0x2493 Mov
	var_3187_object = var_3175_object; // 0x2494 Mov
	var_3188_object = var_3176_object; // 0x2495 Mov
	var_3189_object = var_3177_object; // 0x2496 Mov
	var_3190_object = var_3178_object; // 0x2497 Mov
	func_4491(var_3185_int, var_3186_int, var_3187_object, var_3188_object, var_3189_object, var_3190_object); // 0x2498 NEW_2
	goto Label_9565; // 0x249a Jump
	
Label_9565:
	return 8; // 0x255d Return
	
Label_9371:
	var_3397_int = 1; // 0x249b PushI
	var_3398_bool = var_3168_int == var_3397_int; // 0x249c Eq
	if(var_3398_bool == 0) goto Label_9384; // 0x249d JumpB
	var_3399_int = 0; var_3400_int = 0; var_3401_object = Obj(); var_3402_object = Obj(); var_3403_object = Obj(); var_3404_object = Obj(); // 0x249e PushV
	var_3399_int = var_3169_int; // 0x249f Mov
	var_3400_int = var_3170_int; // 0x24a0 Mov
	var_3401_object = var_3175_object; // 0x24a1 Mov
	var_3402_object = var_3176_object; // 0x24a2 Mov
	var_3403_object = var_3177_object; // 0x24a3 Mov
	var_3404_object = var_3178_object; // 0x24a4 Mov
	func_4688(var_3399_int, var_3400_int, var_3401_object, var_3402_object, var_3403_object, var_3404_object); // 0x24a5 NEW_2
	goto Label_9565; // 0x24a7 Jump
	
Label_9384:
	var_3533_int = 2; // 0x24a8 PushI
	var_3534_bool = var_3168_int == var_3533_int; // 0x24a9 Eq
	if(var_3534_bool == 0) goto Label_9397; // 0x24aa JumpB
	var_3535_int = 0; var_3536_int = 0; var_3537_object = Obj(); var_3538_object = Obj(); var_3539_object = Obj(); var_3540_object = Obj(); // 0x24ab PushV
	var_3535_int = var_3169_int; // 0x24ac Mov
	var_3536_int = var_3170_int; // 0x24ad Mov
	var_3537_object = var_3175_object; // 0x24ae Mov
	var_3538_object = var_3176_object; // 0x24af Mov
	var_3539_object = var_3177_object; // 0x24b0 Mov
	var_3540_object = var_3178_object; // 0x24b1 Mov
	func_4894(var_3535_int, var_3536_int, var_3537_object, var_3538_object, var_3539_object, var_3540_object); // 0x24b2 NEW_2
	goto Label_9565; // 0x24b4 Jump
	
Label_9397:
	var_3676_int = 3; // 0x24b5 PushI
	var_3677_bool = var_3168_int == var_3676_int; // 0x24b6 Eq
	if(var_3677_bool == 0) goto Label_9410; // 0x24b7 JumpB
	var_3678_int = 0; var_3679_int = 0; var_3680_object = Obj(); var_3681_object = Obj(); var_3682_object = Obj(); var_3683_object = Obj(); // 0x24b8 PushV
	var_3678_int = var_3169_int; // 0x24b9 Mov
	var_3679_int = var_3170_int; // 0x24ba Mov
	var_3680_object = var_3175_object; // 0x24bb Mov
	var_3681_object = var_3176_object; // 0x24bc Mov
	var_3682_object = var_3177_object; // 0x24bd Mov
	var_3683_object = var_3178_object; // 0x24be Mov
	func_5124(var_3678_int, var_3679_int, var_3680_object, var_3681_object, var_3682_object, var_3683_object); // 0x24bf NEW_2
	goto Label_9565; // 0x24c1 Jump
	
Label_9410:
	var_3709_int = 4; // 0x24c2 PushI
	var_3710_bool = var_3168_int == var_3709_int; // 0x24c3 Eq
	if(var_3710_bool == 0) goto Label_9423; // 0x24c4 JumpB
	var_3711_int = 0; var_3712_int = 0; var_3713_object = Obj(); var_3714_object = Obj(); var_3715_object = Obj(); var_3716_object = Obj(); // 0x24c5 PushV
	var_3711_int = var_3169_int; // 0x24c6 Mov
	var_3712_int = var_3170_int; // 0x24c7 Mov
	var_3713_object = var_3175_object; // 0x24c8 Mov
	var_3714_object = var_3176_object; // 0x24c9 Mov
	var_3715_object = var_3177_object; // 0x24ca Mov
	var_3716_object = var_3178_object; // 0x24cb Mov
	func_5342(var_3711_int, var_3712_int, var_3713_object, var_3714_object, var_3715_object, var_3716_object); // 0x24cc NEW_2
	goto Label_9565; // 0x24ce Jump
	
Label_9423:
	var_3742_int = 5; // 0x24cf PushI
	var_3743_bool = var_3168_int == var_3742_int; // 0x24d0 Eq
	if(var_3743_bool == 0) goto Label_9436; // 0x24d1 JumpB
	var_3744_int = 0; var_3745_int = 0; var_3746_object = Obj(); var_3747_object = Obj(); var_3748_object = Obj(); var_3749_object = Obj(); // 0x24d2 PushV
	var_3744_int = var_3169_int; // 0x24d3 Mov
	var_3745_int = var_3170_int; // 0x24d4 Mov
	var_3746_object = var_3175_object; // 0x24d5 Mov
	var_3747_object = var_3176_object; // 0x24d6 Mov
	var_3748_object = var_3177_object; // 0x24d7 Mov
	var_3749_object = var_3178_object; // 0x24d8 Mov
	func_5584(var_3744_int, var_3745_int, var_3746_object, var_3747_object, var_3748_object, var_3749_object); // 0x24d9 NEW_2
	goto Label_9565; // 0x24db Jump
	
Label_9436:
	var_3775_int = 6; // 0x24dc PushI
	var_3776_bool = var_3168_int == var_3775_int; // 0x24dd Eq
	if(var_3776_bool == 0) goto Label_9449; // 0x24de JumpB
	var_3777_int = 0; var_3778_int = 0; var_3779_object = Obj(); var_3780_object = Obj(); var_3781_object = Obj(); var_3782_object = Obj(); // 0x24df PushV
	var_3777_int = var_3169_int; // 0x24e0 Mov
	var_3778_int = var_3170_int; // 0x24e1 Mov
	var_3779_object = var_3175_object; // 0x24e2 Mov
	var_3780_object = var_3176_object; // 0x24e3 Mov
	var_3781_object = var_3177_object; // 0x24e4 Mov
	var_3782_object = var_3178_object; // 0x24e5 Mov
	func_5652(); // 0x24e6 NEW_2
	goto Label_9565; // 0x24e8 Jump
	
Label_9449:
	var_3785_int = 7; // 0x24e9 PushI
	var_3786_bool = var_3168_int == var_3785_int; // 0x24ea Eq
	if(var_3786_bool == 0) goto Label_9462; // 0x24eb JumpB
	var_3787_int = 0; var_3788_int = 0; var_3789_object = Obj(); var_3790_object = Obj(); var_3791_object = Obj(); var_3792_object = Obj(); // 0x24ec PushV
	var_3787_int = var_3169_int; // 0x24ed Mov
	var_3788_int = var_3170_int; // 0x24ee Mov
	var_3789_object = var_3175_object; // 0x24ef Mov
	var_3790_object = var_3176_object; // 0x24f0 Mov
	var_3791_object = var_3177_object; // 0x24f1 Mov
	var_3792_object = var_3178_object; // 0x24f2 Mov
	func_5807(var_3787_int, var_3788_int, var_3789_object, var_3790_object, var_3791_object, var_3792_object); // 0x24f3 NEW_2
	goto Label_9565; // 0x24f5 Jump
	
Label_9462:
	var_3928_int = 8; // 0x24f6 PushI
	var_3929_bool = var_3168_int == var_3928_int; // 0x24f7 Eq
	if(var_3929_bool == 0) goto Label_9475; // 0x24f8 JumpB
	var_3930_int = 0; var_3931_int = 0; var_3932_object = Obj(); var_3933_object = Obj(); var_3934_object = Obj(); var_3935_object = Obj(); // 0x24f9 PushV
	var_3930_int = var_3169_int; // 0x24fa Mov
	var_3931_int = var_3170_int; // 0x24fb Mov
	var_3932_object = var_3175_object; // 0x24fc Mov
	var_3933_object = var_3176_object; // 0x24fd Mov
	var_3934_object = var_3177_object; // 0x24fe Mov
	var_3935_object = var_3178_object; // 0x24ff Mov
	func_6007(var_3930_int, var_3931_int, var_3932_object, var_3933_object, var_3934_object, var_3935_object); // 0x2500 NEW_2
	goto Label_9565; // 0x2502 Jump
	
Label_9475:
	var_3961_int = 9; // 0x2503 PushI
	var_3962_bool = var_3168_int == var_3961_int; // 0x2504 Eq
	if(var_3962_bool == 0) goto Label_9488; // 0x2505 JumpB
	var_3963_int = 0; var_3964_int = 0; var_3965_object = Obj(); var_3966_object = Obj(); var_3967_object = Obj(); var_3968_object = Obj(); // 0x2506 PushV
	var_3963_int = var_3169_int; // 0x2507 Mov
	var_3964_int = var_3170_int; // 0x2508 Mov
	var_3965_object = var_3175_object; // 0x2509 Mov
	var_3966_object = var_3176_object; // 0x250a Mov
	var_3967_object = var_3177_object; // 0x250b Mov
	var_3968_object = var_3178_object; // 0x250c Mov
	func_6210(var_3963_int, var_3964_int, var_3965_object, var_3966_object, var_3967_object, var_3968_object); // 0x250d NEW_2
	goto Label_9565; // 0x250f Jump
	
Label_9488:
	var_3994_int = 10; // 0x2510 PushI
	var_3995_bool = var_3168_int == var_3994_int; // 0x2511 Eq
	if(var_3995_bool == 0) goto Label_9501; // 0x2512 JumpB
	var_3996_int = 0; var_3997_int = 0; var_3998_object = Obj(); var_3999_object = Obj(); var_4000_object = Obj(); var_4001_object = Obj(); // 0x2513 PushV
	var_3996_int = var_3169_int; // 0x2514 Mov
	var_3997_int = var_3170_int; // 0x2515 Mov
	var_3998_object = var_3175_object; // 0x2516 Mov
	var_3999_object = var_3176_object; // 0x2517 Mov
	var_4000_object = var_3177_object; // 0x2518 Mov
	var_4001_object = var_3178_object; // 0x2519 Mov
	func_6419(var_3996_int, var_3997_int, var_3998_object, var_3999_object, var_4000_object, var_4001_object); // 0x251a NEW_2
	goto Label_9565; // 0x251c Jump
	
Label_9501:
	var_4027_int = 11; // 0x251d PushI
	var_4028_bool = var_3168_int == var_4027_int; // 0x251e Eq
	if(var_4028_bool == 0) goto Label_9514; // 0x251f JumpB
	var_4029_int = 0; var_4030_int = 0; var_4031_object = Obj(); var_4032_object = Obj(); var_4033_object = Obj(); var_4034_object = Obj(); // 0x2520 PushV
	var_4029_int = var_3169_int; // 0x2521 Mov
	var_4030_int = var_3170_int; // 0x2522 Mov
	var_4031_object = var_3175_object; // 0x2523 Mov
	var_4032_object = var_3176_object; // 0x2524 Mov
	var_4033_object = var_3177_object; // 0x2525 Mov
	var_4034_object = var_3178_object; // 0x2526 Mov
	func_6631(var_4029_int, var_4030_int, var_4031_object, var_4032_object, var_4033_object, var_4034_object); // 0x2527 NEW_2
	goto Label_9565; // 0x2529 Jump
	
Label_9514:
	var_4060_int = 12; // 0x252a PushI
	var_4061_bool = var_3168_int == var_4060_int; // 0x252b Eq
	if(var_4061_bool == 0) goto Label_9527; // 0x252c JumpB
	var_4062_int = 0; var_4063_int = 0; var_4064_object = Obj(); var_4065_object = Obj(); var_4066_object = Obj(); var_4067_object = Obj(); // 0x252d PushV
	var_4062_int = var_3169_int; // 0x252e Mov
	var_4063_int = var_3170_int; // 0x252f Mov
	var_4064_object = var_3175_object; // 0x2530 Mov
	var_4065_object = var_3176_object; // 0x2531 Mov
	var_4066_object = var_3177_object; // 0x2532 Mov
	var_4067_object = var_3178_object; // 0x2533 Mov
	func_6828(var_4062_int, var_4063_int, var_4064_object, var_4065_object, var_4066_object, var_4067_object); // 0x2534 NEW_2
	goto Label_9565; // 0x2536 Jump
	
Label_9527:
	var_4093_int = 13; // 0x2537 PushI
	var_4094_bool = var_3168_int == var_4093_int; // 0x2538 Eq
	if(var_4094_bool == 0) goto Label_9540; // 0x2539 JumpB
	var_4095_int = 0; var_4096_int = 0; var_4097_object = Obj(); var_4098_object = Obj(); var_4099_object = Obj(); var_4100_object = Obj(); // 0x253a PushV
	var_4095_int = var_3169_int; // 0x253b Mov
	var_4096_int = var_3170_int; // 0x253c Mov
	var_4097_object = var_3175_object; // 0x253d Mov
	var_4098_object = var_3176_object; // 0x253e Mov
	var_4099_object = var_3177_object; // 0x253f Mov
	var_4100_object = var_3178_object; // 0x2540 Mov
	func_7031(var_4095_int, var_4096_int, var_4097_object, var_4098_object, var_4099_object, var_4100_object); // 0x2541 NEW_2
	goto Label_9565; // 0x2543 Jump
	
Label_9540:
	var_4126_int = 14; // 0x2544 PushI
	var_4127_bool = var_3168_int == var_4126_int; // 0x2545 Eq
	if(var_4127_bool == 0) goto Label_9553; // 0x2546 JumpB
	var_4128_int = 0; var_4129_int = 0; var_4130_object = Obj(); var_4131_object = Obj(); var_4132_object = Obj(); var_4133_object = Obj(); // 0x2547 PushV
	var_4128_int = var_3169_int; // 0x2548 Mov
	var_4129_int = var_3170_int; // 0x2549 Mov
	var_4130_object = var_3175_object; // 0x254a Mov
	var_4131_object = var_3176_object; // 0x254b Mov
	var_4132_object = var_3177_object; // 0x254c Mov
	var_4133_object = var_3178_object; // 0x254d Mov
	func_7231(var_4128_int, var_4129_int, var_4130_object, var_4131_object, var_4132_object, var_4133_object); // 0x254e NEW_2
	goto Label_9565; // 0x2550 Jump
	
Label_9553:
	var_4269_int = 15; // 0x2551 PushI
	var_4270_bool = var_3168_int == var_4269_int; // 0x2552 Eq
	if(var_4270_bool == 0) goto Label_9565; // 0x2553 JumpB
	var_4271_int = 0; var_4272_int = 0; var_4273_object = Obj(); var_4274_object = Obj(); var_4275_object = Obj(); var_4276_object = Obj(); // 0x2554 PushV
	var_4271_int = var_3169_int; // 0x2555 Mov
	var_4272_int = var_3170_int; // 0x2556 Mov
	var_4273_object = var_3175_object; // 0x2557 Mov
	var_4274_object = var_3176_object; // 0x2558 Mov
	var_4275_object = var_3177_object; // 0x2559 Mov
	var_4276_object = var_3178_object; // 0x255a Mov
	func_7413(var_4271_int, var_4272_int, var_4273_object, var_4274_object, var_4275_object, var_4276_object); // 0x255b NEW_2
}


func_132(var_4786_int, var_4787_string)
{
	var_4788_int = 0; var_4789_int = 0; // 0x84 PushV
	GetVariable(var_4787_string, var_4789_int); // 0x85 Func
	var_4786_int = var_4789_int; // 0x87 Mov
	return 2; // 0x88 Return
}


func_137(var_4670_object, var_4671_string)
{
	var_4672_object = Obj(); var_4673_object = Obj(); var_4674_object = Obj(); var_4675_object = Obj(); // 0x89 PushV
	GetMainOutdoorScene(var_4674_object); // 0x8a Func
	var_4676_string = ".bin"; // 0x8c PushS
	var_4677_int = var_4671_string + var_4676_string; // 0x8d Add
	AddBlankActor(var_4675_object, var_4674_object, var_4671_string, var_4677_int); // 0x8e Func
	var_4670_object = var_4675_object; // 0x90 Mov
	return 4; // 0x91 Return
}


func_1165(var_3276_float, var_3277_int)
{
	var_3278_int = 1; // 0x48e PushI
	var_3279_int = var_3277_int + var_3278_int; // 0x48f Add
	var_3280_int = 1; // 0x490 PushI
	var_3281_bool = var_3279_int == var_3280_int; // 0x491 Eq
	if(var_3281_bool == 0) goto Label_1174; // 0x492 JumpB
	var_3276_float = 0; // 0x493 MovI
	return 0; // 0x494 Return
	
Label_1174:
	var_3282_int = 1; // 0x496 PushI
	var_3283_int = var_3277_int + var_3282_int; // 0x497 Add
	var_3284_int = 2; // 0x498 PushI
	var_3285_bool = var_3283_int == var_3284_int; // 0x499 Eq
	if(var_3285_bool == 0) goto Label_1182; // 0x49a JumpB
	var_3276_float = 0; // 0x49b MovI
	return 0; // 0x49c Return
	
Label_1182:
	var_3286_int = 1; // 0x49e PushI
	var_3287_int = var_3277_int + var_3286_int; // 0x49f Add
	var_3288_int = 3; // 0x4a0 PushI
	var_3289_bool = var_3287_int == var_3288_int; // 0x4a1 Eq
	if(var_3289_bool == 0) goto Label_1190; // 0x4a2 JumpB
	var_3276_float = 1; // 0x4a3 MovI
	return 0; // 0x4a4 Return
	
Label_1190:
	var_3290_int = 1; // 0x4a6 PushI
	var_3291_int = var_3277_int + var_3290_int; // 0x4a7 Add
	var_3292_int = 4; // 0x4a8 PushI
	var_3293_bool = var_3291_int == var_3292_int; // 0x4a9 Eq
	if(var_3293_bool == 0) goto Label_1198; // 0x4aa JumpB
	var_3276_float = 1; // 0x4ab MovI
	return 0; // 0x4ac Return
	
Label_1198:
	var_3294_int = 1; // 0x4ae PushI
	var_3295_int = var_3277_int + var_3294_int; // 0x4af Add
	var_3296_int = 5; // 0x4b0 PushI
	var_3297_bool = var_3295_int == var_3296_int; // 0x4b1 Eq
	if(var_3297_bool == 0) goto Label_1206; // 0x4b2 JumpB
	var_3276_float = 1; // 0x4b3 MovI
	return 0; // 0x4b4 Return
	
Label_1206:
	var_3298_int = 1; // 0x4b6 PushI
	var_3299_int = var_3277_int + var_3298_int; // 0x4b7 Add
	var_3300_int = 6; // 0x4b8 PushI
	var_3301_bool = var_3299_int == var_3300_int; // 0x4b9 Eq
	if(var_3301_bool == 0) goto Label_1214; // 0x4ba JumpB
	var_3276_float = 2; // 0x4bb MovI
	return 0; // 0x4bc Return
	
Label_1214:
	var_3302_int = 1; // 0x4be PushI
	var_3303_int = var_3277_int + var_3302_int; // 0x4bf Add
	var_3304_int = 7; // 0x4c0 PushI
	var_3305_bool = var_3303_int == var_3304_int; // 0x4c1 Eq
	if(var_3305_bool == 0) goto Label_1222; // 0x4c2 JumpB
	var_3276_float = 1; // 0x4c3 MovI
	return 0; // 0x4c4 Return
	
Label_1222:
	var_3306_int = 1; // 0x4c6 PushI
	var_3307_int = var_3277_int + var_3306_int; // 0x4c7 Add
	var_3308_int = 8; // 0x4c8 PushI
	var_3309_bool = var_3307_int == var_3308_int; // 0x4c9 Eq
	if(var_3309_bool == 0) goto Label_1230; // 0x4ca JumpB
	var_3276_float = 1; // 0x4cb MovI
	return 0; // 0x4cc Return
	
Label_1230:
	var_3310_int = 1; // 0x4ce PushI
	var_3311_int = var_3277_int + var_3310_int; // 0x4cf Add
	var_3312_int = 9; // 0x4d0 PushI
	var_3313_bool = var_3311_int == var_3312_int; // 0x4d1 Eq
	if(var_3313_bool == 0) goto Label_1238; // 0x4d2 JumpB
	var_3276_float = 1; // 0x4d3 MovI
	return 0; // 0x4d4 Return
	
Label_1238:
	var_3314_int = 1; // 0x4d6 PushI
	var_3315_int = var_3277_int + var_3314_int; // 0x4d7 Add
	var_3316_int = 10; // 0x4d8 PushI
	var_3317_bool = var_3315_int == var_3316_int; // 0x4d9 Eq
	if(var_3317_bool == 0) goto Label_1246; // 0x4da JumpB
	var_3276_float = 1; // 0x4db MovI
	return 0; // 0x4dc Return
	
Label_1246:
	var_3318_int = 1; // 0x4de PushI
	var_3319_int = var_3277_int + var_3318_int; // 0x4df Add
	var_3320_int = 11; // 0x4e0 PushI
	var_3321_bool = var_3319_int == var_3320_int; // 0x4e1 Eq
	if(var_3321_bool == 0) goto Label_1253; // 0x4e2 JumpB
	var_3276_float = 1; // 0x4e3 MovI
	return 0; // 0x4e4 Return
	
Label_1253:
	var_3276_float = 0; // 0x4e5 MovI
	return 0; // 0x4e6 Return
}


func_7309(var_1946_int, var_1947_int, var_1948_object, var_1949_object, var_1950_object, var_1951_object)
{
	var_1952_int = 0; // 0x1c8e PushI
	var_1953_bool = var_1947_int == var_1952_int; // 0x1c8f Eq
	if(var_1953_bool == 0) goto Label_7349; // 0x1c90 JumpB
	var_1954_int = 0; var_1955_bool = 0; // 0x1c91 PushV
	var_1954_int = 15; // 0x1c92 MovI
	var_1955_bool = 0; // 0x1c93 MovB
	func_796(var_1954_int, var_1955_bool); // 0x1c94 NEW_2
	var_1956_int = 0; var_1957_bool = 0; var_1958_int = 0; // 0x1c96 PushV
	var_1956_int = 15; // 0x1c97 MovI
	var_1957_bool = 0; // 0x1c98 MovB
	var_1958_int = 1; // 0x1c99 MovI
	func_813(var_1956_int, var_1957_bool, var_1958_int); // 0x1c9a NEW_2
	var_1959_int = 0; var_1960_int = 0; var_1961_object = Obj(); var_1962_object = Obj(); var_1963_object = Obj(); // 0x1c9c PushV
	var_1959_int = 15; // 0x1c9d MovI
	var_1960_int = var_1946_int; // 0x1c9e Mov
	var_1961_object = var_1948_object; // 0x1c9f Mov
	var_1962_object = var_1949_object; // 0x1ca0 Mov
	var_1963_object = var_1950_object; // 0x1ca1 Mov
	func_622(var_1960_int, var_1961_object, var_1962_object, var_1963_object); // 0x1ca2 NEW_2
	var_1964_object = Obj(); var_1965_int = 0; // 0x1ca4 PushV
	var_1964_object = var_1951_object; // 0x1ca5 Mov
	var_1965_int = 0; // 0x1ca6 MovI
	func_305(var_1965_int); // 0x1ca7 NEW_2
	var_1966_int = 0; var_1967_bool = 0; var_1968_int = 0; // 0x1ca9 PushV
	var_1966_int = 15; // 0x1caa MovI
	var_1967_bool = 0; // 0x1cab MovB
	var_1968_int = 5; // 0x1cac MovI
	func_870(var_1966_int, var_1967_bool, var_1968_int); // 0x1cad NEW_2
	var_1969_int = 0; var_1970_bool = 0; var_1971_int = 0; // 0x1caf PushV
	var_1969_int = 15; // 0x1cb0 MovI
	var_1970_bool = 0; // 0x1cb1 MovB
	var_1971_int = 5; // 0x1cb2 MovI
	func_932(var_1969_int, var_1970_bool, var_1971_int); // 0x1cb3 NEW_2
	
Label_7349:
	var_1972_int = 0; var_1973_int = 0; // 0x1cb5 PushV
	var_1972_int = 15; // 0x1cb6 MovI
	var_1973_int = var_1947_int; // 0x1cb7 Mov
	func_1087(var_1972_int, var_1973_int); // 0x1cb8 NEW_2
	var_1974_int = 0; var_1975_int = 0; var_1976_int = 0; // 0x1cba PushV
	var_1974_int = 15; // 0x1cbb MovI
	var_1975_int = var_1946_int; // 0x1cbc Mov
	var_1976_int = var_1947_int; // 0x1cbd Mov
	func_1376(var_1974_int, var_1975_int, var_1976_int); // 0x1cbe NEW_2
	return 0; // 0x1cc0 Return
}


func_148(var_5444_object, var_5445_string)
{
	var_5446_object = Obj(); var_5447_object = Obj(); var_5448_object = Obj(); var_5449_object = Obj(); // 0x94 PushV
	GetMainOutdoorScene(var_5448_object); // 0x95 Func
	var_5450_string = ".xml"; // 0x97 PushS
	var_5451_int = var_5445_string + var_5450_string; // 0x98 Add
	AddBlankActorFromXml(var_5449_object, var_5448_object, var_5445_string, var_5451_int); // 0x99 Func
	var_5444_object = var_5449_object; // 0x9b Mov
	return 4; // 0x9c Return
}


func_2206(var_749_int, var_750_int, var_751_int)
{
	var_752_int = 0; var_753_int = 0; // 0x89e PushV
	var_754_int = 1; // 0x89f PushI
	var_755_int = var_750_int + var_754_int; // 0x8a0 Add
	var_756_int = 12; // 0x8a1 PushI
	var_757_bool = var_755_int == var_756_int; // 0x8a2 Eq
	if(var_757_bool == 0) goto Label_2213; // 0x8a3 JumpB
	return 2; // 0x8a4 Return
	
Label_2213:
	var_758_bool = 0; // 0x8a5 PushV
	var_758_bool = 0; // 0x8a6 MovB
	var_759_bool = 0; // 0x8a7 PushV
	var_759_bool = 1; // 0x8a8 MovB
	var_760_int = 7; // 0x8a9 PushI
	var_761_bool = var_751_int < var_760_int; // 0x8aa LT
	if(var_761_bool == 0) goto Label_2224; // 0x8ab JumpB
	var_762_int = 21; // 0x8ac PushI
	var_763_bool = var_751_int > var_762_int; // 0x8ad GT
	if(var_763_bool == 0) goto Label_2224; // 0x8ae JumpB
	var_759_bool = 0; // 0x8af MovB
	
Label_2224:
	if(var_759_bool == 0) goto Label_2229; // 0x8b0 JumpB
	var_764_int = 0; // 0x8b1 PushI
	var_765_bool = var_750_int != var_764_int; // 0x8b2 Neq
	if(var_765_bool == 0) goto Label_2229; // 0x8b3 JumpB
	var_758_bool = 1; // 0x8b4 MovB
	
Label_2229:
	if(var_758_bool == 0) goto Label_2245; // 0x8b5 JumpB
	var_766_int = 1; // 0x8b6 PushI
	var_767_float = 0; var_768_int = 0; // 0x8b7 PushV
	var_768_int = var_750_int; // 0x8b8 Mov
	func_1141(var_767_float, var_768_int); // 0x8b9 NEW_2
	var_753_int = var_766_int * var_767_float; // 0x8bb Mult2
	var_781_int = var_753_int; // 0x8bc Push
	if(var_781_int == 0) goto Label_2245; // 0x8bd JumpB
	var_782_int = 0; var_783_string = ""; var_784_string = ""; var_785_int = 0; // 0x8be PushV
	var_782_int = var_749_int; // 0x8bf Mov
	var_783_string = "pers_grabitel"; // 0x8c0 MovS
	var_784_string = "grabitel.xml"; // 0x8c1 MovS
	var_785_int = var_753_int; // 0x8c2 Mov
	func_503(var_782_int, var_783_string, var_784_string, var_785_int); // 0x8c3 NEW_2
	
Label_2245:
	var_790_bool = 0; var_791_int = 0; var_792_int = 0; // 0x8c5 PushV
	var_791_int = var_750_int; // 0x8c6 Mov
	var_792_int = var_751_int; // 0x8c7 Mov
	func_1110(var_790_bool, var_791_int, var_792_int); // 0x8c8 NEW_2
	if(var_790_bool == 0) goto Label_2308; // 0x8ca JumpB
	var_810_int = 0; var_811_string = ""; var_812_string = ""; var_813_int = 0; // 0x8cb PushV
	var_810_int = var_749_int; // 0x8cc Mov
	var_811_string = "pers_unosha"; // 0x8cd MovS
	var_812_string = "unosha_attacker.xml"; // 0x8ce MovS
	var_813_int = 1; // 0x8cf MovI
	func_503(var_810_int, var_811_string, var_812_string, var_813_int); // 0x8d0 NEW_2
	var_814_int = 0; var_815_string = ""; var_816_string = ""; var_817_int = 0; // 0x8d2 PushV
	var_814_int = var_749_int; // 0x8d3 Mov
	var_815_string = "pers_unosha"; // 0x8d4 MovS
	var_816_string = "unosha2_attacker.xml"; // 0x8d5 MovS
	var_817_int = 1; // 0x8d6 MovI
	func_503(var_814_int, var_815_string, var_816_string, var_817_int); // 0x8d7 NEW_2
	var_818_int = 0; var_819_string = ""; var_820_string = ""; var_821_int = 0; // 0x8d9 PushV
	var_818_int = var_749_int; // 0x8da Mov
	var_819_string = "pers_worker"; // 0x8db MovS
	var_820_string = "worker_attacker.xml"; // 0x8dc MovS
	var_821_int = 1; // 0x8dd MovI
	func_503(var_818_int, var_819_string, var_820_string, var_821_int); // 0x8de NEW_2
	var_822_int = 0; var_823_string = ""; var_824_string = ""; var_825_int = 0; // 0x8e0 PushV
	var_822_int = var_749_int; // 0x8e1 Mov
	var_823_string = "pers_worker"; // 0x8e2 MovS
	var_824_string = "worker2_attacker.xml"; // 0x8e3 MovS
	var_825_int = 1; // 0x8e4 MovI
	func_503(var_822_int, var_823_string, var_824_string, var_825_int); // 0x8e5 NEW_2
	var_826_int = 0; var_827_string = ""; var_828_string = ""; var_829_int = 0; // 0x8e7 PushV
	var_826_int = var_749_int; // 0x8e8 Mov
	var_827_string = "pers_boy"; // 0x8e9 MovS
	var_828_string = "boy.xml"; // 0x8ea MovS
	var_829_int = 1; // 0x8eb MovI
	func_503(var_826_int, var_827_string, var_828_string, var_829_int); // 0x8ec NEW_2
	var_830_int = 0; var_831_string = ""; var_832_string = ""; var_833_int = 0; // 0x8ee PushV
	var_830_int = var_749_int; // 0x8ef Mov
	var_831_string = "pers_alkash"; // 0x8f0 MovS
	var_832_string = "alkash.xml"; // 0x8f1 MovS
	var_833_int = 1; // 0x8f2 MovI
	func_503(var_830_int, var_831_string, var_832_string, var_833_int); // 0x8f3 NEW_2
	var_834_int = 0; var_835_string = ""; var_836_string = ""; var_837_int = 0; // 0x8f5 PushV
	var_834_int = var_749_int; // 0x8f6 Mov
	var_835_string = "pers_girl"; // 0x8f7 MovS
	var_836_string = "girl.xml"; // 0x8f8 MovS
	var_837_int = 1; // 0x8f9 MovI
	func_503(var_834_int, var_835_string, var_836_string, var_837_int); // 0x8fa NEW_2
	var_838_int = 0; var_839_string = ""; var_840_string = ""; var_841_int = 0; // 0x8fc PushV
	var_838_int = var_749_int; // 0x8fd Mov
	var_839_string = "pers_girl"; // 0x8fe MovS
	var_840_string = "girl2.xml"; // 0x8ff MovS
	var_841_int = 1; // 0x900 MovI
	func_503(var_838_int, var_839_string, var_840_string, var_841_int); // 0x901 NEW_2
	goto Label_2382; // 0x903 Jump
	
Label_2382:
	return 2; // 0x94e Return
	
Label_2308:
	var_842_bool = 0; // 0x904 PushV
	var_842_bool = 0; // 0x905 MovB
	var_843_int = 8; // 0x906 PushI
	var_844_bool = var_751_int > var_843_int; // 0x907 GT
	if(var_844_bool == 0) goto Label_2317; // 0x908 JumpB
	var_845_int = 21; // 0x909 PushI
	var_846_bool = var_751_int < var_845_int; // 0x90a LT
	if(var_846_bool == 0) goto Label_2317; // 0x90b JumpB
	var_842_bool = 1; // 0x90c MovB
	
Label_2317:
	if(var_842_bool == 0) goto Label_2361; // 0x90d JumpB
	var_847_int = 0; var_848_string = ""; var_849_string = ""; var_850_int = 0; // 0x90e PushV
	var_847_int = var_749_int; // 0x90f Mov
	var_848_string = "pers_boy"; // 0x910 MovS
	var_849_string = "boy.xml"; // 0x911 MovS
	var_850_int = 1; // 0x912 MovI
	func_503(var_847_int, var_848_string, var_849_string, var_850_int); // 0x913 NEW_2
	var_851_int = 0; var_852_string = ""; var_853_string = ""; var_854_int = 0; // 0x915 PushV
	var_851_int = var_749_int; // 0x916 Mov
	var_852_string = "pers_alkash"; // 0x917 MovS
	var_853_string = "alkash.xml"; // 0x918 MovS
	var_854_int = 1; // 0x919 MovI
	func_503(var_851_int, var_852_string, var_853_string, var_854_int); // 0x91a NEW_2
	var_855_int = 0; var_856_string = ""; var_857_string = ""; var_858_int = 0; // 0x91c PushV
	var_855_int = var_749_int; // 0x91d Mov
	var_856_string = "pers_girl"; // 0x91e MovS
	var_857_string = "girl.xml"; // 0x91f MovS
	var_858_int = 1; // 0x920 MovI
	func_503(var_855_int, var_856_string, var_857_string, var_858_int); // 0x921 NEW_2
	var_859_int = 0; var_860_string = ""; var_861_string = ""; var_862_int = 0; // 0x923 PushV
	var_859_int = var_749_int; // 0x924 Mov
	var_860_string = "pers_girl"; // 0x925 MovS
	var_861_string = "girl2.xml"; // 0x926 MovS
	var_862_int = 1; // 0x927 MovI
	func_503(var_859_int, var_860_string, var_861_string, var_862_int); // 0x928 NEW_2
	var_863_int = 0; var_864_string = ""; var_865_string = ""; var_866_int = 0; // 0x92a PushV
	var_863_int = var_749_int; // 0x92b Mov
	var_864_string = "pers_worker"; // 0x92c MovS
	var_865_string = "worker.xml"; // 0x92d MovS
	var_866_int = 2; // 0x92e MovI
	func_503(var_863_int, var_864_string, var_865_string, var_866_int); // 0x92f NEW_2
	var_867_int = 0; var_868_string = ""; var_869_string = ""; var_870_int = 0; // 0x931 PushV
	var_867_int = var_749_int; // 0x932 Mov
	var_868_string = "pers_worker"; // 0x933 MovS
	var_869_string = "worker2.xml"; // 0x934 MovS
	var_870_int = 2; // 0x935 MovI
	func_503(var_867_int, var_868_string, var_869_string, var_870_int); // 0x936 NEW_2
	goto Label_2382; // 0x938 Jump
	
Label_2361:
	var_871_int = 0; var_872_string = ""; var_873_string = ""; var_874_int = 0; // 0x939 PushV
	var_871_int = var_749_int; // 0x93a Mov
	var_872_string = "pers_alkash"; // 0x93b MovS
	var_873_string = "alkash.xml"; // 0x93c MovS
	var_874_int = 1; // 0x93d MovI
	func_503(var_871_int, var_872_string, var_873_string, var_874_int); // 0x93e NEW_2
	var_875_int = 0; var_876_string = ""; var_877_string = ""; var_878_int = 0; // 0x940 PushV
	var_875_int = var_749_int; // 0x941 Mov
	var_876_string = "pers_worker"; // 0x942 MovS
	var_877_string = "worker.xml"; // 0x943 MovS
	var_878_int = 1; // 0x944 MovI
	func_503(var_875_int, var_876_string, var_877_string, var_878_int); // 0x945 NEW_2
	var_879_int = 0; var_880_string = ""; var_881_string = ""; var_882_int = 0; // 0x947 PushV
	var_879_int = var_749_int; // 0x948 Mov
	var_880_string = "pers_worker"; // 0x949 MovS
	var_881_string = "worker2.xml"; // 0x94a MovS
	var_882_int = 1; // 0x94b MovI
	func_503(var_879_int, var_880_string, var_881_string, var_882_int); // 0x94c NEW_2
}


func_159(var_328_object, var_330_string, var_331_string, var_332_string)
{
	var_334_bool = 0; var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_object = Obj(); var_338_bool = 0; var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_object = Obj(); // 0x9f PushV
	GetLocator(var_330_string, var_338_bool, var_339_cvector, var_340_cvector); // 0xa0 ObjFunc
	var_342_bool = var_338_bool == 0; // 0xa2 Not
	if(var_342_bool == 0) goto Label_172; // 0xa3 JumpB
	var_343_string = "Locator "; // 0xa4 PushS
	var_344_int = var_343_string + var_330_string; // 0xa5 Add
	var_345_string = " doesn't exist"; // 0xa6 PushS
	var_346_int = var_344_int + var_345_string; // 0xa7 Add
	Trace(var_346_int); // 0xa8 Func
	var_341_object = 0; // 0xaa SetNull
	goto Label_174; // 0xab Jump
	
Label_174:
	var_328_object = var_341_object; // 0xae Mov
	return 8; // 0xaf Return
	
Label_172:
	AddStationaryActor(var_341_object, var_339_cvector, var_340_cvector, var_331_string, var_332_string); // 0xac ObjFunc
}


func_5290(var_2585_int, var_2586_int, var_2587_object, var_2588_object, var_2589_object, var_2590_object)
{
	var_2591_int = 0; // 0x14ab PushI
	var_2592_bool = var_2586_int == var_2591_int; // 0x14ac Eq
	if(var_2592_bool == 0) goto Label_5330; // 0x14ad JumpB
	var_2593_int = 0; var_2594_bool = 0; // 0x14ae PushV
	var_2593_int = 4; // 0x14af MovI
	var_2594_bool = 1; // 0x14b0 MovB
	func_796(var_2593_int, var_2594_bool); // 0x14b1 NEW_2
	var_2595_int = 0; var_2596_bool = 0; var_2597_int = 0; // 0x14b3 PushV
	var_2595_int = 4; // 0x14b4 MovI
	var_2596_bool = 1; // 0x14b5 MovB
	var_2597_int = 1; // 0x14b6 MovI
	func_813(var_2595_int, var_2596_bool, var_2597_int); // 0x14b7 NEW_2
	var_2598_int = 0; var_2599_int = 0; var_2600_object = Obj(); var_2601_object = Obj(); var_2602_object = Obj(); // 0x14b9 PushV
	var_2598_int = 4; // 0x14ba MovI
	var_2599_int = var_2585_int; // 0x14bb Mov
	var_2600_object = var_2587_object; // 0x14bc Mov
	var_2601_object = var_2588_object; // 0x14bd Mov
	var_2602_object = var_2589_object; // 0x14be Mov
	func_641(var_2598_int, var_2599_int, var_2600_object, var_2601_object, var_2602_object); // 0x14bf NEW_2
	var_2603_object = Obj(); var_2604_int = 0; // 0x14c1 PushV
	var_2603_object = var_2590_object; // 0x14c2 Mov
	var_2604_int = 1; // 0x14c3 MovI
	func_305(var_2604_int); // 0x14c4 NEW_2
	var_2605_int = 0; var_2606_bool = 0; var_2607_int = 0; // 0x14c6 PushV
	var_2605_int = 4; // 0x14c7 MovI
	var_2606_bool = 1; // 0x14c8 MovB
	var_2607_int = 4; // 0x14c9 MovI
	func_870(var_2605_int, var_2606_bool, var_2607_int); // 0x14ca NEW_2
	var_2608_int = 0; var_2609_bool = 0; var_2610_int = 0; // 0x14cc PushV
	var_2608_int = 4; // 0x14cd MovI
	var_2609_bool = 0; // 0x14ce MovB
	var_2610_int = 4; // 0x14cf MovI
	func_932(var_2608_int, var_2609_bool, var_2610_int); // 0x14d0 NEW_2
	
Label_5330:
	var_2611_int = 0; var_2612_bool = 0; // 0x14d2 PushV
	var_2611_int = 4; // 0x14d3 MovI
	var_2612_bool = 0; // 0x14d4 MovB
	func_779(var_2611_int, var_2612_bool); // 0x14d5 NEW_2
	var_2613_int = 0; var_2614_int = 0; var_2615_int = 0; // 0x14d7 PushV
	var_2613_int = 4; // 0x14d8 MovI
	var_2614_int = var_2585_int; // 0x14d9 Mov
	var_2615_int = var_2586_int; // 0x14da Mov
	func_2944(var_2613_int, var_2614_int, var_2615_int); // 0x14db NEW_2
	return 0; // 0x14dd Return
}


func_6315(var_1636_int, var_1637_int, var_1638_object, var_1639_object, var_1640_object, var_1641_object)
{
	var_1642_int = 0; // 0x18ac PushI
	var_1643_bool = var_1637_int == var_1642_int; // 0x18ad Eq
	if(var_1643_bool == 0) goto Label_6355; // 0x18ae JumpB
	var_1644_int = 0; var_1645_bool = 0; // 0x18af PushV
	var_1644_int = 10; // 0x18b0 MovI
	var_1645_bool = 0; // 0x18b1 MovB
	func_796(var_1644_int, var_1645_bool); // 0x18b2 NEW_2
	var_1646_int = 0; var_1647_bool = 0; var_1648_int = 0; // 0x18b4 PushV
	var_1646_int = 10; // 0x18b5 MovI
	var_1647_bool = 0; // 0x18b6 MovB
	var_1648_int = 1; // 0x18b7 MovI
	func_813(var_1646_int, var_1647_bool, var_1648_int); // 0x18b8 NEW_2
	var_1649_int = 0; var_1650_int = 0; var_1651_object = Obj(); var_1652_object = Obj(); var_1653_object = Obj(); // 0x18ba PushV
	var_1649_int = 10; // 0x18bb MovI
	var_1650_int = var_1636_int; // 0x18bc Mov
	var_1651_object = var_1638_object; // 0x18bd Mov
	var_1652_object = var_1639_object; // 0x18be Mov
	var_1653_object = var_1640_object; // 0x18bf Mov
	func_622(var_1650_int, var_1651_object, var_1652_object, var_1653_object); // 0x18c0 NEW_2
	var_1654_object = Obj(); var_1655_int = 0; // 0x18c2 PushV
	var_1654_object = var_1641_object; // 0x18c3 Mov
	var_1655_int = 0; // 0x18c4 MovI
	func_305(var_1655_int); // 0x18c5 NEW_2
	var_1656_int = 0; var_1657_bool = 0; var_1658_int = 0; // 0x18c7 PushV
	var_1656_int = 10; // 0x18c8 MovI
	var_1657_bool = 0; // 0x18c9 MovB
	var_1658_int = 7; // 0x18ca MovI
	func_870(var_1656_int, var_1657_bool, var_1658_int); // 0x18cb NEW_2
	var_1659_int = 0; var_1660_bool = 0; var_1661_int = 0; // 0x18cd PushV
	var_1659_int = 10; // 0x18ce MovI
	var_1660_bool = 0; // 0x18cf MovB
	var_1661_int = 7; // 0x18d0 MovI
	func_932(var_1659_int, var_1660_bool, var_1661_int); // 0x18d1 NEW_2
	
Label_6355:
	var_1662_int = 0; var_1663_int = 0; // 0x18d3 PushV
	var_1662_int = 10; // 0x18d4 MovI
	var_1663_int = var_1637_int; // 0x18d5 Mov
	func_983(var_1662_int, var_1663_int); // 0x18d6 NEW_2
	var_1664_int = 0; var_1665_int = 0; var_1666_int = 0; // 0x18d8 PushV
	var_1664_int = 10; // 0x18d9 MovI
	var_1665_int = var_1636_int; // 0x18da Mov
	var_1666_int = var_1637_int; // 0x18db Mov
	func_1624(var_1664_int, var_1665_int, var_1666_int); // 0x18dc NEW_2
	return 0; // 0x18de Return
}


func_177(var_4589_string, var_4590_bool)
{
	var_4591_object = Obj(); var_4592_object = Obj(); // 0xb1 PushV
	FindActor(var_4592_object, var_4589_string); // 0xb2 Func
	var_4593_bool = var_4592_object == 0; // 0xb4 Not
	if(var_4593_bool == 0) goto Label_189; // 0xb5 JumpB
	var_4594_string = "Door "; // 0xb6 PushS
	var_4595_int = var_4594_string + var_4589_string; // 0xb7 Add
	var_4596_string = " not found"; // 0xb8 PushS
	var_4597_int = var_4595_int + var_4596_string; // 0xb9 Add
	Trace(var_4597_int); // 0xba Func
	goto Label_192; // 0xbc Jump
	
Label_192:
	return 2; // 0xc0 Return
	
Label_189:
	var_4598_string = "locked"; // 0xbd PushS
	SetProperty(var_4598_string, var_4590_bool); // 0xbe ObjFunc
}


func_10420()
{
	var_5349_object = Obj(); var_5350_object = Obj(); var_5351_object = Obj(); var_5352_object = Obj(); // 0x28b4 PushV
	var_5353_object = Obj(); // 0x28b5 PushV
	func_11161(var_5353_object); // 0x28b6 NEW_2
	var_5351_object = var_5353_object; // 0x28b7 Mov
	var_5354_string = "k7q01BirdmaskGotoCorpse"; // 0x28b9 PushS
	FindMark(var_5352_object, var_5354_string); // 0x28ba ObjFunc
	var_5355_object = var_5352_object; // 0x28bc Push
	if(var_5355_object == 0) goto Label_10432; // 0x28bd JumpB
	Remove(); // 0x28be ObjFunc
	
Label_10432:
	var_5356_string = "k7q02DankoGotoGatherer"; // 0x28c0 PushS
	FindMark(var_5352_object, var_5356_string); // 0x28c1 ObjFunc
	var_5357_object = var_5352_object; // 0x28c3 Push
	if(var_5357_object == 0) goto Label_10439; // 0x28c4 JumpB
	Remove(); // 0x28c5 ObjFunc
	
Label_10439:
	var_5358_string = "k7q03BurahGotoFather"; // 0x28c7 PushS
	FindMark(var_5352_object, var_5358_string); // 0x28c8 ObjFunc
	var_5359_object = var_5352_object; // 0x28ca Push
	if(var_5359_object == 0) goto Label_10446; // 0x28cb JumpB
	Remove(); // 0x28cc ObjFunc
	
Label_10446:
	var_5360_bool = 0; var_5361_int = 0; // 0x28ce PushV
	var_5361_int = 416; // 0x28cf MovI
	func_11136(var_5360_bool, var_5361_int); // 0x28d0 NEW_2
	var_5362_bool = 0; var_5363_int = 0; // 0x28d2 PushV
	var_5363_int = 430; // 0x28d3 MovI
	func_11136(var_5362_bool, var_5363_int); // 0x28d4 NEW_2
	var_5364_bool = 0; var_5365_int = 0; // 0x28d6 PushV
	var_5365_int = 434; // 0x28d7 MovI
	func_11136(var_5364_bool, var_5365_int); // 0x28d8 NEW_2
	var_5366_bool = 0; var_5367_int = 0; // 0x28da PushV
	var_5367_int = 723; // 0x28db MovI
	func_11136(var_5366_bool, var_5367_int); // 0x28dc NEW_2
	return 4; // 0x28de Return
}


func_7361(var_3137_int, var_3138_int, var_3139_object, var_3140_object, var_3141_object, var_3142_object)
{
	var_3143_int = 0; // 0x1cc2 PushI
	var_3144_bool = var_3138_int == var_3143_int; // 0x1cc3 Eq
	if(var_3144_bool == 0) goto Label_7401; // 0x1cc4 JumpB
	var_3145_int = 0; var_3146_bool = 0; // 0x1cc5 PushV
	var_3145_int = 15; // 0x1cc6 MovI
	var_3146_bool = 1; // 0x1cc7 MovB
	func_796(var_3145_int, var_3146_bool); // 0x1cc8 NEW_2
	var_3147_int = 0; var_3148_bool = 0; var_3149_int = 0; // 0x1cca PushV
	var_3147_int = 15; // 0x1ccb MovI
	var_3148_bool = 1; // 0x1ccc MovB
	var_3149_int = 1; // 0x1ccd MovI
	func_813(var_3147_int, var_3148_bool, var_3149_int); // 0x1cce NEW_2
	var_3150_int = 0; var_3151_int = 0; var_3152_object = Obj(); var_3153_object = Obj(); var_3154_object = Obj(); // 0x1cd0 PushV
	var_3150_int = 15; // 0x1cd1 MovI
	var_3151_int = var_3137_int; // 0x1cd2 Mov
	var_3152_object = var_3139_object; // 0x1cd3 Mov
	var_3153_object = var_3140_object; // 0x1cd4 Mov
	var_3154_object = var_3141_object; // 0x1cd5 Mov
	func_641(var_3150_int, var_3151_int, var_3152_object, var_3153_object, var_3154_object); // 0x1cd6 NEW_2
	var_3155_object = Obj(); var_3156_int = 0; // 0x1cd8 PushV
	var_3155_object = var_3142_object; // 0x1cd9 Mov
	var_3156_int = 1; // 0x1cda MovI
	func_305(var_3156_int); // 0x1cdb NEW_2
	var_3157_int = 0; var_3158_bool = 0; var_3159_int = 0; // 0x1cdd PushV
	var_3157_int = 15; // 0x1cde MovI
	var_3158_bool = 1; // 0x1cdf MovB
	var_3159_int = 5; // 0x1ce0 MovI
	func_870(var_3157_int, var_3158_bool, var_3159_int); // 0x1ce1 NEW_2
	var_3160_int = 0; var_3161_bool = 0; var_3162_int = 0; // 0x1ce3 PushV
	var_3160_int = 15; // 0x1ce4 MovI
	var_3161_bool = 0; // 0x1ce5 MovB
	var_3162_int = 5; // 0x1ce6 MovI
	func_932(var_3160_int, var_3161_bool, var_3162_int); // 0x1ce7 NEW_2
	
Label_7401:
	var_3163_int = 0; var_3164_bool = 0; // 0x1ce9 PushV
	var_3163_int = 15; // 0x1cea MovI
	var_3164_bool = 0; // 0x1ceb MovB
	func_779(var_3163_int, var_3164_bool); // 0x1cec NEW_2
	var_3165_int = 0; var_3166_int = 0; var_3167_int = 0; // 0x1cee PushV
	var_3165_int = 15; // 0x1cef MovI
	var_3166_int = var_3137_int; // 0x1cf0 Mov
	var_3167_int = var_3138_int; // 0x1cf1 Mov
	func_2584(var_3165_int, var_3166_int, var_3167_int); // 0x1cf2 NEW_2
	return 0; // 0x1cf4 Return
}


func_194(var_5831_bool, var_5832_object, var_5833_float)
{
	var_5834_bool = var_5832_object == 0; // 0xc3 Not
	if(var_5834_bool == 0) goto Label_199; // 0xc4 JumpB
	var_5831_bool = 0; // 0xc5 MovB
	return 0; // 0xc6 Return
	
Label_199:
	var_5835_int = 0; // 0xc7 PushI
	var_5836_bool = var_5833_float > var_5835_int; // 0xc8 GT
	if(var_5836_bool == 0) goto Label_206; // 0xc9 JumpB
	var_5837_int = 8; // 0xca PushI
	SendWorldWndMessage(var_5837_int); // 0xcb Func
	goto Label_215; // 0xcd Jump
	
Label_215:
	var_5838_float = 0; // 0xd7 PushV
	var_5838_float = var_5833_float; // 0xd8 Mov
	func_229(var_5838_float); // 0xd9 NEW_2
	var_5842_bool = 0; var_5843_object = Obj(); var_5844_string = ""; var_5845_float = 0; var_5846_float = 0; var_5847_float = 0; // 0xdb PushV
	var_5843_object = var_5832_object; // 0xdc Mov
	var_5844_string = "reputation"; // 0xdd MovS
	var_5845_float = var_5833_float; // 0xde Mov
	var_5846_float = 0; // 0xdf MovI
	var_5847_float = 1; // 0xe0 MovI
	func_93(var_5842_bool, var_5843_object, var_5844_string, var_5845_float, var_5846_float, var_5847_float); // 0xe1 NEW_2
	var_5831_bool = 1; // 0xe3 MovB
	return 0; // 0xe4 Return
	
Label_206:
	var_5860_int = 0; // 0xce PushI
	var_5861_bool = var_5833_float < var_5860_int; // 0xcf LT
	if(var_5861_bool == 0) goto Label_213; // 0xd0 JumpB
	var_5862_int = 9; // 0xd1 PushI
	SendWorldWndMessage(var_5862_int); // 0xd2 Func
	goto Label_215; // 0xd4 Jump
	
Label_213:
	var_5831_bool = 0; // 0xd5 MovB
	return 0; // 0xd6 Return
}


func_5342(var_3711_int, var_3712_int, var_3713_object, var_3714_object, var_3715_object, var_3716_object)
{
	var_3717_int = 0; // 0x14df PushI
	var_3718_bool = var_3712_int == var_3717_int; // 0x14e0 Eq
	if(var_3718_bool == 0) goto Label_5382; // 0x14e1 JumpB
	var_3719_int = 0; var_3720_bool = 0; // 0x14e2 PushV
	var_3719_int = 4; // 0x14e3 MovI
	var_3720_bool = 0; // 0x14e4 MovB
	func_796(var_3719_int, var_3720_bool); // 0x14e5 NEW_2
	var_3721_int = 0; var_3722_bool = 0; var_3723_int = 0; // 0x14e7 PushV
	var_3721_int = 4; // 0x14e8 MovI
	var_3722_bool = 0; // 0x14e9 MovB
	var_3723_int = 1; // 0x14ea MovI
	func_813(var_3721_int, var_3722_bool, var_3723_int); // 0x14eb NEW_2
	var_3724_int = 0; var_3725_int = 0; var_3726_object = Obj(); var_3727_object = Obj(); var_3728_object = Obj(); // 0x14ed PushV
	var_3724_int = 4; // 0x14ee MovI
	var_3725_int = var_3711_int; // 0x14ef Mov
	var_3726_object = var_3713_object; // 0x14f0 Mov
	var_3727_object = var_3714_object; // 0x14f1 Mov
	var_3728_object = var_3715_object; // 0x14f2 Mov
	func_720(var_3724_int, var_3725_int, var_3726_object, var_3727_object, var_3728_object); // 0x14f3 NEW_2
	var_3729_object = Obj(); var_3730_int = 0; // 0x14f5 PushV
	var_3729_object = var_3716_object; // 0x14f6 Mov
	var_3730_int = 2; // 0x14f7 MovI
	func_305(var_3730_int); // 0x14f8 NEW_2
	var_3731_int = 0; var_3732_bool = 0; var_3733_int = 0; // 0x14fa PushV
	var_3731_int = 4; // 0x14fb MovI
	var_3732_bool = 0; // 0x14fc MovB
	var_3733_int = 4; // 0x14fd MovI
	func_870(var_3731_int, var_3732_bool, var_3733_int); // 0x14fe NEW_2
	var_3734_int = 0; var_3735_bool = 0; var_3736_int = 0; // 0x1500 PushV
	var_3734_int = 4; // 0x1501 MovI
	var_3735_bool = 1; // 0x1502 MovB
	var_3736_int = 4; // 0x1503 MovI
	func_932(var_3734_int, var_3735_bool, var_3736_int); // 0x1504 NEW_2
	
Label_5382:
	var_3737_int = 0; var_3738_bool = 0; // 0x1506 PushV
	var_3737_int = 4; // 0x1507 MovI
	var_3738_bool = 0; // 0x1508 MovB
	func_779(var_3737_int, var_3738_bool); // 0x1509 NEW_2
	var_3739_int = 0; var_3740_int = 0; var_3741_int = 0; // 0x150b PushV
	var_3739_int = 4; // 0x150c MovI
	var_3740_int = var_3711_int; // 0x150d Mov
	var_3741_int = var_3712_int; // 0x150e Mov
	func_3847(var_3739_int, var_3740_int, var_3741_int); // 0x150f NEW_2
	return 0; // 0x1511 Return
}


func_6367(var_2866_int, var_2867_int, var_2868_object, var_2869_object, var_2870_object, var_2871_object)
{
	var_2872_int = 0; // 0x18e0 PushI
	var_2873_bool = var_2867_int == var_2872_int; // 0x18e1 Eq
	if(var_2873_bool == 0) goto Label_6407; // 0x18e2 JumpB
	var_2874_int = 0; var_2875_bool = 0; // 0x18e3 PushV
	var_2874_int = 10; // 0x18e4 MovI
	var_2875_bool = 1; // 0x18e5 MovB
	func_796(var_2874_int, var_2875_bool); // 0x18e6 NEW_2
	var_2876_int = 0; var_2877_bool = 0; var_2878_int = 0; // 0x18e8 PushV
	var_2876_int = 10; // 0x18e9 MovI
	var_2877_bool = 1; // 0x18ea MovB
	var_2878_int = 1; // 0x18eb MovI
	func_813(var_2876_int, var_2877_bool, var_2878_int); // 0x18ec NEW_2
	var_2879_int = 0; var_2880_int = 0; var_2881_object = Obj(); var_2882_object = Obj(); var_2883_object = Obj(); // 0x18ee PushV
	var_2879_int = 10; // 0x18ef MovI
	var_2880_int = var_2866_int; // 0x18f0 Mov
	var_2881_object = var_2868_object; // 0x18f1 Mov
	var_2882_object = var_2869_object; // 0x18f2 Mov
	var_2883_object = var_2870_object; // 0x18f3 Mov
	func_641(var_2879_int, var_2880_int, var_2881_object, var_2882_object, var_2883_object); // 0x18f4 NEW_2
	var_2884_object = Obj(); var_2885_int = 0; // 0x18f6 PushV
	var_2884_object = var_2871_object; // 0x18f7 Mov
	var_2885_int = 1; // 0x18f8 MovI
	func_305(var_2885_int); // 0x18f9 NEW_2
	var_2886_int = 0; var_2887_bool = 0; var_2888_int = 0; // 0x18fb PushV
	var_2886_int = 10; // 0x18fc MovI
	var_2887_bool = 1; // 0x18fd MovB
	var_2888_int = 7; // 0x18fe MovI
	func_870(var_2886_int, var_2887_bool, var_2888_int); // 0x18ff NEW_2
	var_2889_int = 0; var_2890_bool = 0; var_2891_int = 0; // 0x1901 PushV
	var_2889_int = 10; // 0x1902 MovI
	var_2890_bool = 0; // 0x1903 MovB
	var_2891_int = 7; // 0x1904 MovI
	func_932(var_2889_int, var_2890_bool, var_2891_int); // 0x1905 NEW_2
	
Label_6407:
	var_2892_int = 0; var_2893_bool = 0; // 0x1907 PushV
	var_2892_int = 10; // 0x1908 MovI
	var_2893_bool = 0; // 0x1909 MovB
	func_779(var_2892_int, var_2893_bool); // 0x190a NEW_2
	var_2894_int = 0; var_2895_int = 0; var_2896_int = 0; // 0x190c PushV
	var_2894_int = 10; // 0x190d MovI
	var_2895_int = var_2866_int; // 0x190e Mov
	var_2896_int = var_2867_int; // 0x190f Mov
	func_2764(var_2894_int, var_2895_int, var_2896_int); // 0x1910 NEW_2
	return 0; // 0x1912 Return
}


func_10465()
{
	var_5231_bool = 0; var_5232_int = 0; // 0x28e2 PushV
	var_5232_int = 438; // 0x28e3 MovI
	func_11136(var_5231_bool, var_5232_int); // 0x28e4 NEW_2
	var_5233_bool = 0; var_5234_int = 0; // 0x28e6 PushV
	var_5234_int = 723; // 0x28e7 MovI
	func_11136(var_5233_bool, var_5234_int); // 0x28e8 NEW_2
	var_5235_bool = 0; var_5236_int = 0; // 0x28ea PushV
	var_5236_int = 751; // 0x28eb MovI
	func_11136(var_5235_bool, var_5236_int); // 0x28ec NEW_2
	var_5237_bool = 0; var_5238_int = 0; // 0x28ee PushV
	var_5238_int = 757; // 0x28ef MovI
	func_11136(var_5237_bool, var_5238_int); // 0x28f0 NEW_2
	return 0; // 0x28f2 Return
}


func_229(var_5838_float)
{
	var_5839_object = Obj(); var_5840_object = Obj(); // 0xe5 PushV
	CreateFloatVector(var_5840_object); // 0xe6 Func
	add(var_5838_float); // 0xe8 ObjFunc
	var_5841_int = 16; // 0xea PushI
	SendWorldWndMessage(var_5841_int, var_5840_object); // 0xeb Func
	return 2; // 0xed Return
}


func_1255(var_2156_float, var_2157_int)
{
	var_2158_int = 1; // 0x4e8 PushI
	var_2159_int = var_2157_int + var_2158_int; // 0x4e9 Add
	var_2160_int = 1; // 0x4ea PushI
	var_2161_bool = var_2159_int == var_2160_int; // 0x4eb Eq
	if(var_2161_bool == 0) goto Label_1264; // 0x4ec JumpB
	var_2156_float = 0; // 0x4ed MovI
	return 0; // 0x4ee Return
	
Label_1264:
	var_2162_int = 1; // 0x4f0 PushI
	var_2163_int = var_2157_int + var_2162_int; // 0x4f1 Add
	var_2164_int = 2; // 0x4f2 PushI
	var_2165_bool = var_2163_int == var_2164_int; // 0x4f3 Eq
	if(var_2165_bool == 0) goto Label_1272; // 0x4f4 JumpB
	var_2156_float = 0; // 0x4f5 MovI
	return 0; // 0x4f6 Return
	
Label_1272:
	var_2166_int = 1; // 0x4f8 PushI
	var_2167_int = var_2157_int + var_2166_int; // 0x4f9 Add
	var_2168_int = 3; // 0x4fa PushI
	var_2169_bool = var_2167_int == var_2168_int; // 0x4fb Eq
	if(var_2169_bool == 0) goto Label_1280; // 0x4fc JumpB
	var_2156_float = 0; // 0x4fd MovI
	return 0; // 0x4fe Return
	
Label_1280:
	var_2170_int = 1; // 0x500 PushI
	var_2171_int = var_2157_int + var_2170_int; // 0x501 Add
	var_2172_int = 4; // 0x502 PushI
	var_2173_bool = var_2171_int == var_2172_int; // 0x503 Eq
	if(var_2173_bool == 0) goto Label_1288; // 0x504 JumpB
	var_2156_float = 0; // 0x505 MovI
	return 0; // 0x506 Return
	
Label_1288:
	var_2174_int = 1; // 0x508 PushI
	var_2175_int = var_2157_int + var_2174_int; // 0x509 Add
	var_2176_int = 5; // 0x50a PushI
	var_2177_bool = var_2175_int == var_2176_int; // 0x50b Eq
	if(var_2177_bool == 0) goto Label_1296; // 0x50c JumpB
	var_2156_float = 0; // 0x50d MovI
	return 0; // 0x50e Return
	
Label_1296:
	var_2178_int = 1; // 0x510 PushI
	var_2179_int = var_2157_int + var_2178_int; // 0x511 Add
	var_2180_int = 6; // 0x512 PushI
	var_2181_bool = var_2179_int == var_2180_int; // 0x513 Eq
	if(var_2181_bool == 0) goto Label_1304; // 0x514 JumpB
	var_2156_float = 2; // 0x515 MovI
	return 0; // 0x516 Return
	
Label_1304:
	var_2182_int = 1; // 0x518 PushI
	var_2183_int = var_2157_int + var_2182_int; // 0x519 Add
	var_2184_int = 7; // 0x51a PushI
	var_2185_bool = var_2183_int == var_2184_int; // 0x51b Eq
	if(var_2185_bool == 0) goto Label_1312; // 0x51c JumpB
	var_2156_float = 1; // 0x51d MovI
	return 0; // 0x51e Return
	
Label_1312:
	var_2186_int = 1; // 0x520 PushI
	var_2187_int = var_2157_int + var_2186_int; // 0x521 Add
	var_2188_int = 8; // 0x522 PushI
	var_2189_bool = var_2187_int == var_2188_int; // 0x523 Eq
	if(var_2189_bool == 0) goto Label_1320; // 0x524 JumpB
	var_2156_float = 1; // 0x525 MovI
	return 0; // 0x526 Return
	
Label_1320:
	var_2190_int = 1; // 0x528 PushI
	var_2191_int = var_2157_int + var_2190_int; // 0x529 Add
	var_2192_int = 9; // 0x52a PushI
	var_2193_bool = var_2191_int == var_2192_int; // 0x52b Eq
	if(var_2193_bool == 0) goto Label_1328; // 0x52c JumpB
	var_2156_float = 1; // 0x52d MovI
	return 0; // 0x52e Return
	
Label_1328:
	var_2194_int = 1; // 0x530 PushI
	var_2195_int = var_2157_int + var_2194_int; // 0x531 Add
	var_2196_int = 10; // 0x532 PushI
	var_2197_bool = var_2195_int == var_2196_int; // 0x533 Eq
	if(var_2197_bool == 0) goto Label_1336; // 0x534 JumpB
	var_2156_float = 1; // 0x535 MovI
	return 0; // 0x536 Return
	
Label_1336:
	var_2198_int = 1; // 0x538 PushI
	var_2199_int = var_2157_int + var_2198_int; // 0x539 Add
	var_2200_int = 11; // 0x53a PushI
	var_2201_bool = var_2199_int == var_2200_int; // 0x53b Eq
	if(var_2201_bool == 0) goto Label_1343; // 0x53c JumpB
	var_2156_float = 1; // 0x53d MovI
	return 0; // 0x53e Return
	
Label_1343:
	var_2156_float = 0; // 0x53f MovI
	return 0; // 0x540 Return
}


func_3304(var_2302_int, var_2303_int, var_2304_int)
{
	var_2305_int = 0; var_2306_int = 0; var_2307_int = 0; var_2308_int = 0; // 0xce8 PushV
	var_2309_bool = 0; // 0xce9 PushV
	var_2309_bool = 0; // 0xcea MovB
	var_2310_int = 8; // 0xceb PushI
	var_2311_bool = var_2304_int > var_2310_int; // 0xcec GT
	if(var_2311_bool == 0) goto Label_3314; // 0xced JumpB
	var_2312_int = 21; // 0xcee PushI
	var_2313_bool = var_2304_int < var_2312_int; // 0xcef LT
	if(var_2313_bool == 0) goto Label_3314; // 0xcf0 JumpB
	var_2309_bool = 1; // 0xcf1 MovB
	
Label_3314:
	if(var_2309_bool == 0) goto Label_3369; // 0xcf2 JumpB
	var_2314_int = 0; var_2315_string = ""; var_2316_string = ""; var_2317_int = 0; // 0xcf3 PushV
	var_2314_int = var_2302_int; // 0xcf4 Mov
	var_2315_string = "pers_vaxxabit"; // 0xcf5 MovS
	var_2316_string = "vaxxabit_d.xml"; // 0xcf6 MovS
	var_2317_int = 7; // 0xcf7 MovI
	func_503(var_2314_int, var_2315_string, var_2316_string, var_2317_int); // 0xcf8 NEW_2
	var_2318_int = 0; var_2319_string = ""; var_2320_string = ""; var_2321_int = 0; // 0xcfa PushV
	var_2318_int = var_2302_int; // 0xcfb Mov
	var_2319_string = "pers_vaxxabitka"; // 0xcfc MovS
	var_2320_string = "vaxxabitka_d.xml"; // 0xcfd MovS
	var_2321_int = 7; // 0xcfe MovI
	func_503(var_2318_int, var_2319_string, var_2320_string, var_2321_int); // 0xcff NEW_2
	var_2322_int = 0; var_2323_string = ""; var_2324_string = ""; var_2325_int = 0; // 0xd01 PushV
	var_2322_int = var_2302_int; // 0xd02 Mov
	var_2323_string = "pers_rat_big"; // 0xd03 MovS
	var_2324_string = "rat_big.xml"; // 0xd04 MovS
	var_2325_int = 3; // 0xd05 MovI
	func_503(var_2322_int, var_2323_string, var_2324_string, var_2325_int); // 0xd06 NEW_2
	var_2326_int = 0; var_2327_string = ""; var_2328_string = ""; var_2329_int = 0; // 0xd08 PushV
	var_2326_int = var_2302_int; // 0xd09 Mov
	var_2327_string = "fog"; // 0xd0a MovS
	var_2328_string = "fog.xml"; // 0xd0b MovS
	var_2329_int = 7; // 0xd0c MovI
	func_529(var_2326_int, var_2327_string, var_2328_string, var_2329_int); // 0xd0d NEW_2
	var_2330_int = 5; // 0xd0f PushI
	var_2331_bool = var_2303_int >= var_2330_int; // 0xd10 GE
	if(var_2331_bool == 0) goto Label_3353; // 0xd11 JumpB
	var_2332_int = 0; var_2333_string = ""; var_2334_string = ""; var_2335_int = 0; // 0xd12 PushV
	var_2332_int = var_2302_int; // 0xd13 Mov
	var_2333_string = "fog"; // 0xd14 MovS
	var_2334_string = "fog_hunter.xml"; // 0xd15 MovS
	var_2335_int = 3; // 0xd16 MovI
	func_529(var_2332_int, var_2333_string, var_2334_string, var_2335_int); // 0xd17 NEW_2
	
Label_3353:
	var_2336_int = 2; // 0xd19 PushI
	var_2337_float = 0; var_2338_int = 0; // 0xd1a PushV
	var_2338_int = var_2303_int; // 0xd1b Mov
	func_1255(var_2337_float, var_2338_int); // 0xd1c NEW_2
	var_2307_int = var_2336_int * var_2337_float; // 0xd1e Mult2
	var_2339_int = var_2307_int; // 0xd1f Push
	if(var_2339_int == 0) goto Label_3368; // 0xd20 JumpB
	var_2340_int = 0; var_2341_string = ""; var_2342_string = ""; var_2343_int = 0; // 0xd21 PushV
	var_2340_int = var_2302_int; // 0xd22 Mov
	var_2341_string = "pers_bomber"; // 0xd23 MovS
	var_2342_string = "bomber.xml"; // 0xd24 MovS
	var_2343_int = var_2307_int; // 0xd25 Mov
	func_503(var_2340_int, var_2341_string, var_2342_string, var_2343_int); // 0xd26 NEW_2
	
Label_3368:
	goto Label_3422; // 0xd28 Jump
	
Label_3422:
	var_2344_bool = 0; var_2345_int = 0; // 0xd5e PushV
	var_2345_int = var_2303_int; // 0xd5f Mov
	func_1372(var_2344_bool, var_2345_int); // 0xd60 NEW_2
	if(var_2344_bool == 0) goto Label_3434; // 0xd62 JumpB
	var_2346_int = 0; var_2347_string = ""; var_2348_string = ""; var_2349_int = 0; // 0xd63 PushV
	var_2346_int = var_2302_int; // 0xd64 Mov
	var_2347_string = "pers_sanitar"; // 0xd65 MovS
	var_2348_string = "sanitar.xml"; // 0xd66 MovS
	var_2349_int = 2; // 0xd67 MovI
	func_503(var_2346_int, var_2347_string, var_2348_string, var_2349_int); // 0xd68 NEW_2
	
Label_3434:
	var_2350_int = 0; var_2351_string = ""; var_2352_string = ""; var_2353_int = 0; var_2354_int = 0; var_2355_int = 0; // 0xd6a PushV
	var_2350_int = var_2302_int; // 0xd6b Mov
	var_2351_string = "pers_worker"; // 0xd6c MovS
	var_2352_string = "agony1_man.xml"; // 0xd6d MovS
	var_2353_int = 2; // 0xd6e MovI
	var_2354_int = 4; // 0xd6f MovI
	var_2355_int = 4; // 0xd70 MovI
	func_516(var_2350_int, var_2351_string, var_2352_string, var_2353_int, var_2354_int, var_2355_int); // 0xd71 NEW_2
	var_2356_int = 0; var_2357_string = ""; var_2358_string = ""; var_2359_int = 0; var_2360_int = 0; var_2361_int = 0; // 0xd73 PushV
	var_2356_int = var_2302_int; // 0xd74 Mov
	var_2357_string = "pers_unosha"; // 0xd75 MovS
	var_2358_string = "agony1_man.xml"; // 0xd76 MovS
	var_2359_int = 2; // 0xd77 MovI
	var_2360_int = 4; // 0xd78 MovI
	var_2361_int = 4; // 0xd79 MovI
	func_516(var_2356_int, var_2357_string, var_2358_string, var_2359_int, var_2360_int, var_2361_int); // 0xd7a NEW_2
	var_2362_int = 0; var_2363_string = ""; var_2364_string = ""; var_2365_int = 0; var_2366_int = 0; var_2367_int = 0; // 0xd7c PushV
	var_2362_int = var_2302_int; // 0xd7d Mov
	var_2363_string = "pers_woman"; // 0xd7e MovS
	var_2364_string = "agony1_woman.xml"; // 0xd7f MovS
	var_2365_int = 2; // 0xd80 MovI
	var_2366_int = 4; // 0xd81 MovI
	var_2367_int = 4; // 0xd82 MovI
	func_516(var_2362_int, var_2363_string, var_2364_string, var_2365_int, var_2366_int, var_2367_int); // 0xd83 NEW_2
	var_2368_int = 0; var_2369_string = ""; var_2370_string = ""; var_2371_int = 0; var_2372_int = 0; var_2373_int = 0; // 0xd85 PushV
	var_2368_int = var_2302_int; // 0xd86 Mov
	var_2369_string = "pers_wasted_girl"; // 0xd87 MovS
	var_2370_string = "agony1_woman.xml"; // 0xd88 MovS
	var_2371_int = 2; // 0xd89 MovI
	var_2372_int = 4; // 0xd8a MovI
	var_2373_int = 4; // 0xd8b MovI
	func_516(var_2368_int, var_2369_string, var_2370_string, var_2371_int, var_2372_int, var_2373_int); // 0xd8c NEW_2
	return 4; // 0xd8e Return
	
Label_3369:
	var_2374_int = 0; var_2375_string = ""; var_2376_string = ""; var_2377_int = 0; // 0xd29 PushV
	var_2374_int = var_2302_int; // 0xd2a Mov
	var_2375_string = "pers_vaxxabit"; // 0xd2b MovS
	var_2376_string = "vaxxabit_d.xml"; // 0xd2c MovS
	var_2377_int = 5; // 0xd2d MovI
	func_503(var_2374_int, var_2375_string, var_2376_string, var_2377_int); // 0xd2e NEW_2
	var_2378_int = 0; var_2379_string = ""; var_2380_string = ""; var_2381_int = 0; // 0xd30 PushV
	var_2378_int = var_2302_int; // 0xd31 Mov
	var_2379_string = "pers_vaxxabitka"; // 0xd32 MovS
	var_2380_string = "vaxxabitka_d.xml"; // 0xd33 MovS
	var_2381_int = 5; // 0xd34 MovI
	func_503(var_2378_int, var_2379_string, var_2380_string, var_2381_int); // 0xd35 NEW_2
	var_2382_int = 0; var_2383_string = ""; var_2384_string = ""; var_2385_int = 0; // 0xd37 PushV
	var_2382_int = var_2302_int; // 0xd38 Mov
	var_2383_string = "pers_rat_big"; // 0xd39 MovS
	var_2384_string = "rat_big.xml"; // 0xd3a MovS
	var_2385_int = 4; // 0xd3b MovI
	func_503(var_2382_int, var_2383_string, var_2384_string, var_2385_int); // 0xd3c NEW_2
	var_2386_int = 0; var_2387_string = ""; var_2388_string = ""; var_2389_int = 0; // 0xd3e PushV
	var_2386_int = var_2302_int; // 0xd3f Mov
	var_2387_string = "fog"; // 0xd40 MovS
	var_2388_string = "fog.xml"; // 0xd41 MovS
	var_2389_int = 7; // 0xd42 MovI
	func_529(var_2386_int, var_2387_string, var_2388_string, var_2389_int); // 0xd43 NEW_2
	var_2390_int = 5; // 0xd45 PushI
	var_2391_bool = var_2303_int >= var_2390_int; // 0xd46 GE
	if(var_2391_bool == 0) goto Label_3407; // 0xd47 JumpB
	var_2392_int = 0; var_2393_string = ""; var_2394_string = ""; var_2395_int = 0; // 0xd48 PushV
	var_2392_int = var_2302_int; // 0xd49 Mov
	var_2393_string = "fog"; // 0xd4a MovS
	var_2394_string = "fog_hunter.xml"; // 0xd4b MovS
	var_2395_int = 3; // 0xd4c MovI
	func_529(var_2392_int, var_2393_string, var_2394_string, var_2395_int); // 0xd4d NEW_2
	
Label_3407:
	var_2396_int = 2; // 0xd4f PushI
	var_2397_float = 0; var_2398_int = 0; // 0xd50 PushV
	var_2398_int = var_2303_int; // 0xd51 Mov
	func_1255(var_2397_float, var_2398_int); // 0xd52 NEW_2
	var_2308_int = var_2396_int * var_2397_float; // 0xd54 Mult2
	var_2399_int = var_2308_int; // 0xd55 Push
	if(var_2399_int == 0) goto Label_3422; // 0xd56 JumpB
	var_2400_int = 0; var_2401_string = ""; var_2402_string = ""; var_2403_int = 0; // 0xd57 PushV
	var_2400_int = var_2302_int; // 0xd58 Mov
	var_2401_string = "pers_bomber"; // 0xd59 MovS
	var_2402_string = "bomber.xml"; // 0xd5a MovS
	var_2403_int = var_2308_int; // 0xd5b Mov
	func_503(var_2400_int, var_2401_string, var_2402_string, var_2403_int); // 0xd5c NEW_2
}


func_239(var_671_bool, var_672_string, var_673_string)
{
	var_674_object = Obj(); var_675_object = Obj(); // 0xef PushV
	FindActor(var_675_object, var_672_string); // 0xf0 Func
	var_676_bool = var_675_object == 0; // 0xf2 NullEq
	if(var_676_bool == 0) goto Label_246; // 0xf3 JumpB
	var_671_bool = 0; // 0xf4 MovB
	return 2; // 0xf5 Return
	
Label_246:
	Trigger(var_675_object, var_673_string); // 0xf6 Func
	var_671_bool = 1; // 0xf8 MovB
	return 2; // 0xf9 Return
}


func_10483()
{
	var_5212_bool = 0; var_5213_int = 0; // 0x28f4 PushV
	var_5213_int = 517; // 0x28f5 MovI
	func_11136(var_5212_bool, var_5213_int); // 0x28f6 NEW_2
	var_5214_bool = 0; var_5215_int = 0; // 0x28f8 PushV
	var_5215_int = 723; // 0x28f9 MovI
	func_11136(var_5214_bool, var_5215_int); // 0x28fa NEW_2
	var_5216_bool = 0; var_5217_int = 0; // 0x28fc PushV
	var_5217_int = 751; // 0x28fd MovI
	func_11136(var_5216_bool, var_5217_int); // 0x28fe NEW_2
	var_5218_bool = 0; var_5219_int = 0; // 0x2900 PushV
	var_5219_int = 757; // 0x2901 MovI
	func_11136(var_5218_bool, var_5219_int); // 0x2902 NEW_2
	return 0; // 0x2904 Return
}


func_7413(var_4271_int, var_4272_int, var_4273_object, var_4274_object, var_4275_object, var_4276_object)
{
	var_4277_int = 0; // 0x1cf6 PushI
	var_4278_bool = var_4272_int == var_4277_int; // 0x1cf7 Eq
	if(var_4278_bool == 0) goto Label_7453; // 0x1cf8 JumpB
	var_4279_int = 0; var_4280_bool = 0; // 0x1cf9 PushV
	var_4279_int = 15; // 0x1cfa MovI
	var_4280_bool = 0; // 0x1cfb MovB
	func_796(var_4279_int, var_4280_bool); // 0x1cfc NEW_2
	var_4281_int = 0; var_4282_bool = 0; var_4283_int = 0; // 0x1cfe PushV
	var_4281_int = 15; // 0x1cff MovI
	var_4282_bool = 0; // 0x1d00 MovB
	var_4283_int = 1; // 0x1d01 MovI
	func_813(var_4281_int, var_4282_bool, var_4283_int); // 0x1d02 NEW_2
	var_4284_int = 0; var_4285_int = 0; var_4286_object = Obj(); var_4287_object = Obj(); var_4288_object = Obj(); // 0x1d04 PushV
	var_4284_int = 15; // 0x1d05 MovI
	var_4285_int = var_4271_int; // 0x1d06 Mov
	var_4286_object = var_4273_object; // 0x1d07 Mov
	var_4287_object = var_4274_object; // 0x1d08 Mov
	var_4288_object = var_4275_object; // 0x1d09 Mov
	func_720(var_4284_int, var_4285_int, var_4286_object, var_4287_object, var_4288_object); // 0x1d0a NEW_2
	var_4289_object = Obj(); var_4290_int = 0; // 0x1d0c PushV
	var_4289_object = var_4276_object; // 0x1d0d Mov
	var_4290_int = 2; // 0x1d0e MovI
	func_305(var_4290_int); // 0x1d0f NEW_2
	var_4291_int = 0; var_4292_bool = 0; var_4293_int = 0; // 0x1d11 PushV
	var_4291_int = 15; // 0x1d12 MovI
	var_4292_bool = 0; // 0x1d13 MovB
	var_4293_int = 5; // 0x1d14 MovI
	func_870(var_4291_int, var_4292_bool, var_4293_int); // 0x1d15 NEW_2
	var_4294_int = 0; var_4295_bool = 0; var_4296_int = 0; // 0x1d17 PushV
	var_4294_int = 15; // 0x1d18 MovI
	var_4295_bool = 1; // 0x1d19 MovB
	var_4296_int = 5; // 0x1d1a MovI
	func_932(var_4294_int, var_4295_bool, var_4296_int); // 0x1d1b NEW_2
	
Label_7453:
	var_4297_int = 0; var_4298_bool = 0; // 0x1d1d PushV
	var_4297_int = 15; // 0x1d1e MovI
	var_4298_bool = 0; // 0x1d1f MovB
	func_779(var_4297_int, var_4298_bool); // 0x1d20 NEW_2
	var_4299_int = 0; var_4300_int = 0; var_4301_int = 0; // 0x1d22 PushV
	var_4299_int = 15; // 0x1d23 MovI
	var_4300_int = var_4271_int; // 0x1d24 Mov
	var_4301_int = var_4272_int; // 0x1d25 Mov
	func_3471(var_4299_int, var_4300_int, var_4301_int); // 0x1d26 NEW_2
	return 0; // 0x1d28 Return
}


func_251(var_4570_bool, var_4571_string, var_4572_string, var_4573_string)
{
	var_4574_object = Obj(); var_4575_object = Obj(); // 0xfb PushV
	FindActor(var_4575_object, var_4571_string); // 0xfc Func
	var_4576_bool = var_4575_object == 0; // 0xfe NullEq
	if(var_4576_bool == 0) goto Label_258; // 0xff JumpB
	var_4570_bool = 0; // 0x100 MovB
	return 2; // 0x101 Return
	
Label_258:
	Trigger(var_4575_object, var_4572_string, var_4573_string); // 0x102 Func
	var_4570_bool = 1; // 0x104 MovB
	return 2; // 0x105 Return
}


func_10501()
{
	var_5120_object = Obj(); var_5121_object = Obj(); var_5122_object = Obj(); var_5123_object = Obj(); // 0x2905 PushV
	var_5124_object = Obj(); // 0x2906 PushV
	func_11161(var_5124_object); // 0x2907 NEW_2
	var_5122_object = var_5124_object; // 0x2908 Mov
	var_5125_string = "k10q01NotkinGotoRubin"; // 0x290a PushS
	FindMark(var_5123_object, var_5125_string); // 0x290b ObjFunc
	var_5126_object = var_5123_object; // 0x290d Push
	if(var_5126_object == 0) goto Label_10513; // 0x290e JumpB
	Remove(); // 0x290f ObjFunc
	
Label_10513:
	var_5127_string = "k10q01WastedGotoBurah"; // 0x2911 PushS
	FindMark(var_5123_object, var_5127_string); // 0x2912 ObjFunc
	var_5128_object = var_5123_object; // 0x2914 Push
	if(var_5128_object == 0) goto Label_10520; // 0x2915 JumpB
	Remove(); // 0x2916 ObjFunc
	
Label_10520:
	var_5129_bool = 0; var_5130_int = 0; // 0x2918 PushV
	var_5130_int = 447; // 0x2919 MovI
	func_11136(var_5129_bool, var_5130_int); // 0x291a NEW_2
	var_5131_bool = 0; var_5132_int = 0; // 0x291c PushV
	var_5132_int = 723; // 0x291d MovI
	func_11136(var_5131_bool, var_5132_int); // 0x291e NEW_2
	var_5133_bool = 0; var_5134_int = 0; // 0x2920 PushV
	var_5134_int = 751; // 0x2921 MovI
	func_11136(var_5133_bool, var_5134_int); // 0x2922 NEW_2
	var_5135_bool = 0; var_5136_int = 0; // 0x2924 PushV
	var_5136_int = 757; // 0x2925 MovI
	func_11136(var_5135_bool, var_5136_int); // 0x2926 NEW_2
	return 4; // 0x2928 Return
}


func_263(var_598_object)
{
	var_599_int = 0; var_600_int = 0; var_601_object = Obj(); var_602_int = 0; var_603_int = 0; var_604_object = Obj(); // 0x107 PushV
	var_605_object = var_598_object; // 0x108 Push
	if(var_605_object == 0) goto Label_283; // 0x109 JumpB
	size(var_602_int); // 0x10a ObjFunc
	var_603_int = 0; // 0x10c MovI
	
Label_269:
	var_606_bool = var_603_int < var_602_int; // 0x10d LT
	if(var_606_bool == 0) goto Label_281; // 0x10e JumpB
	get(var_604_object, var_603_int); // 0x10f ObjFunc
	var_607_object = var_604_object; // 0x111 Push
	if(var_607_object == 0) goto Label_277; // 0x112 JumpB
	Remove(); // 0x113 ObjFunc
	
Label_277:
	var_604_object = 0; // 0x115 SetNull
	var_608_int = 1; // 0x116 PushI
	var_603_int = var_603_int + var_608_int; // 0x117 Add2
	goto Label_269; // 0x118 Jump
	
Label_281:
	clear(); // 0x119 ObjFunc
	
Label_283:
	return 6; // 0x11b Return
}


func_5394()
{
	var_145_string = "dt_house3_14_i2"; // 0x1513 PushS
	add(var_145_string); // 0x1514 ObjFunc
	var_146_string = "dt_house3_14"; // 0x1516 PushS
	add(var_146_string); // 0x1517 ObjFunc
	var_147_string = "house1_arc_01l"; // 0x1519 PushS
	add(var_147_string); // 0x151a ObjFunc
	var_148_string = "house1_arc_01r"; // 0x151c PushS
	add(var_148_string); // 0x151d ObjFunc
	var_149_string = "dt_House6_01"; // 0x151f PushS
	add(var_149_string); // 0x1520 ObjFunc
	var_150_string = "dt_house_1_09"; // 0x1522 PushS
	add(var_150_string); // 0x1523 ObjFunc
	var_151_string = "house5_24"; // 0x1525 PushS
	add(var_151_string); // 0x1526 ObjFunc
	var_152_string = "dt_House6_03"; // 0x1528 PushS
	add(var_152_string); // 0x1529 ObjFunc
	var_153_string = "dt_House6_04"; // 0x152b PushS
	add(var_153_string); // 0x152c ObjFunc
	var_154_string = "dt_house_1_08"; // 0x152e PushS
	add(var_154_string); // 0x152f ObjFunc
	var_155_string = "house5_unoin_solidl"; // 0x1531 PushS
	add(var_155_string); // 0x1532 ObjFunc
	var_156_string = "house5_unoin_solidr"; // 0x1534 PushS
	add(var_156_string); // 0x1535 ObjFunc
	var_157_string = "dt_house2_12"; // 0x1537 PushS
	add(var_157_string); // 0x1538 ObjFunc
	var_158_string = "dt_house2_11"; // 0x153a PushS
	add(var_158_string); // 0x153b ObjFunc
	var_159_string = "dt_house2_13"; // 0x153d PushS
	add(var_159_string); // 0x153e ObjFunc
	var_160_string = "dt_house2_09"; // 0x1540 PushS
	add(var_160_string); // 0x1541 ObjFunc
	var_161_string = "dt_house2_08"; // 0x1543 PushS
	add(var_161_string); // 0x1544 ObjFunc
	var_162_string = "dt_house2_07"; // 0x1546 PushS
	add(var_162_string); // 0x1547 ObjFunc
	var_163_string = "dt_house2_06"; // 0x1549 PushS
	add(var_163_string); // 0x154a ObjFunc
	var_164_string = "house5_01"; // 0x154c PushS
	add(var_164_string); // 0x154d ObjFunc
	var_165_string = "house5_15"; // 0x154f PushS
	add(var_165_string); // 0x1550 ObjFunc
	var_166_string = "house5_16"; // 0x1552 PushS
	add(var_166_string); // 0x1553 ObjFunc
	var_167_string = "house5_17"; // 0x1555 PushS
	add(var_167_string); // 0x1556 ObjFunc
	var_168_string = "house5_unoin04l"; // 0x1558 PushS
	add(var_168_string); // 0x1559 ObjFunc
	var_169_string = "house5_unoin04r"; // 0x155b PushS
	add(var_169_string); // 0x155c ObjFunc
	var_170_string = "house5_23"; // 0x155e PushS
	add(var_170_string); // 0x155f ObjFunc
	var_171_string = "house1_se_05r"; // 0x1561 PushS
	add(var_171_string); // 0x1562 ObjFunc
	var_172_string = "house1_se_05l"; // 0x1564 PushS
	add(var_172_string); // 0x1565 ObjFunc
	return 0; // 0x1567 Return
}


func_6419(var_3996_int, var_3997_int, var_3998_object, var_3999_object, var_4000_object, var_4001_object)
{
	var_4002_int = 0; // 0x1914 PushI
	var_4003_bool = var_3997_int == var_4002_int; // 0x1915 Eq
	if(var_4003_bool == 0) goto Label_6459; // 0x1916 JumpB
	var_4004_int = 0; var_4005_bool = 0; // 0x1917 PushV
	var_4004_int = 10; // 0x1918 MovI
	var_4005_bool = 0; // 0x1919 MovB
	func_796(var_4004_int, var_4005_bool); // 0x191a NEW_2
	var_4006_int = 0; var_4007_bool = 0; var_4008_int = 0; // 0x191c PushV
	var_4006_int = 10; // 0x191d MovI
	var_4007_bool = 0; // 0x191e MovB
	var_4008_int = 1; // 0x191f MovI
	func_813(var_4006_int, var_4007_bool, var_4008_int); // 0x1920 NEW_2
	var_4009_int = 0; var_4010_int = 0; var_4011_object = Obj(); var_4012_object = Obj(); var_4013_object = Obj(); // 0x1922 PushV
	var_4009_int = 10; // 0x1923 MovI
	var_4010_int = var_3996_int; // 0x1924 Mov
	var_4011_object = var_3998_object; // 0x1925 Mov
	var_4012_object = var_3999_object; // 0x1926 Mov
	var_4013_object = var_4000_object; // 0x1927 Mov
	func_720(var_4009_int, var_4010_int, var_4011_object, var_4012_object, var_4013_object); // 0x1928 NEW_2
	var_4014_object = Obj(); var_4015_int = 0; // 0x192a PushV
	var_4014_object = var_4001_object; // 0x192b Mov
	var_4015_int = 2; // 0x192c MovI
	func_305(var_4015_int); // 0x192d NEW_2
	var_4016_int = 0; var_4017_bool = 0; var_4018_int = 0; // 0x192f PushV
	var_4016_int = 10; // 0x1930 MovI
	var_4017_bool = 0; // 0x1931 MovB
	var_4018_int = 7; // 0x1932 MovI
	func_870(var_4016_int, var_4017_bool, var_4018_int); // 0x1933 NEW_2
	var_4019_int = 0; var_4020_bool = 0; var_4021_int = 0; // 0x1935 PushV
	var_4019_int = 10; // 0x1936 MovI
	var_4020_bool = 1; // 0x1937 MovB
	var_4021_int = 7; // 0x1938 MovI
	func_932(var_4019_int, var_4020_bool, var_4021_int); // 0x1939 NEW_2
	
Label_6459:
	var_4022_int = 0; var_4023_bool = 0; // 0x193b PushV
	var_4022_int = 10; // 0x193c MovI
	var_4023_bool = 0; // 0x193d MovB
	func_779(var_4022_int, var_4023_bool); // 0x193e NEW_2
	var_4024_int = 0; var_4025_int = 0; var_4026_int = 0; // 0x1940 PushV
	var_4024_int = 10; // 0x1941 MovI
	var_4025_int = var_3996_int; // 0x1942 Mov
	var_4026_int = var_3997_int; // 0x1943 Mov
	func_3659(var_4024_int, var_4025_int, var_4026_int); // 0x1944 NEW_2
	return 0; // 0x1946 Return
}


func_284(var_4579_float)
{
	var_4580_float = 0; var_4581_float = 0; // 0x11c PushV
	GetGameTime(var_4581_float); // 0x11d Func
	var_4579_float = var_4581_float; // 0x11f Mov
	return 2; // 0x120 Return
}


func_12574(var_4877_bool)
{
	var_4879_int = 7; // 0x311f PushI
	add(var_4879_int); // 0x3120 ObjFunc
	var_4880_int = 23; // 0x3122 PushI
	add(var_4880_int); // 0x3123 ObjFunc
	var_4881_int = 21; // 0x3125 PushI
	add(var_4881_int); // 0x3126 ObjFunc
	var_4882_int = 9; // 0x3128 PushI
	add(var_4882_int); // 0x3129 ObjFunc
	var_4883_int = 3; // 0x312b PushI
	add(var_4883_int); // 0x312c ObjFunc
	var_4884_int = 1; // 0x312e PushI
	add(var_4884_int); // 0x312f ObjFunc
	var_4885_int = 11; // 0x3131 PushI
	add(var_4885_int); // 0x3132 ObjFunc
	var_4886_int = 13; // 0x3134 PushI
	add(var_4886_int); // 0x3135 ObjFunc
	var_4887_bool = 0; // 0x3137 PushB
	var_4888_bool = var_4877_bool == var_4887_bool; // 0x3138 Eq
	if(var_4888_bool == 0) goto Label_12605; // 0x3139 JumpB
	var_4889_int = 25; // 0x313a PushI
	add(var_4889_int); // 0x313b ObjFunc
	
Label_12605:
	return 0; // 0x313d Return
}


func_289()
{
	var_109_float = 0.5; // 0x121 PushF
	var_110_float = 0.886; // 0x122 PushF
	SetSepia(var_109_float, var_110_float); // 0x123 Func
	return 0; // 0x125 Return
}


func_4385()
{
	return 0; // 0x1122 Return
}


func_4387(var_517_int, var_518_int, var_519_object, var_520_object, var_521_object, var_522_object)
{
	var_523_int = 0; // 0x1124 PushI
	var_524_bool = var_518_int == var_523_int; // 0x1125 Eq
	if(var_524_bool == 0) goto Label_4427; // 0x1126 JumpB
	var_525_int = 0; var_526_bool = 0; // 0x1127 PushV
	var_525_int = 0; // 0x1128 MovI
	var_526_bool = 0; // 0x1129 MovB
	func_796(var_525_int, var_526_bool); // 0x112a NEW_2
	var_527_int = 0; var_528_bool = 0; var_529_int = 0; // 0x112c PushV
	var_527_int = 0; // 0x112d MovI
	var_528_bool = 0; // 0x112e MovB
	var_529_int = 1; // 0x112f MovI
	func_813(var_527_int, var_528_bool, var_529_int); // 0x1130 NEW_2
	var_565_int = 0; var_566_int = 0; var_567_object = Obj(); var_568_object = Obj(); var_569_object = Obj(); // 0x1132 PushV
	var_565_int = 0; // 0x1133 MovI
	var_566_int = var_517_int; // 0x1134 Mov
	var_567_object = var_519_object; // 0x1135 Mov
	var_568_object = var_520_object; // 0x1136 Mov
	var_569_object = var_521_object; // 0x1137 Mov
	func_622(var_566_int, var_567_object, var_568_object, var_569_object); // 0x1138 NEW_2
	var_611_object = Obj(); var_612_int = 0; // 0x113a PushV
	var_611_object = var_522_object; // 0x113b Mov
	var_612_int = 0; // 0x113c MovI
	func_305(var_612_int); // 0x113d NEW_2
	var_638_int = 0; var_639_bool = 0; var_640_int = 0; // 0x113f PushV
	var_638_int = 0; // 0x1140 MovI
	var_639_bool = 0; // 0x1141 MovB
	var_640_int = 4; // 0x1142 MovI
	func_870(var_638_int, var_639_bool, var_640_int); // 0x1143 NEW_2
	var_685_int = 0; var_686_bool = 0; var_687_int = 0; // 0x1145 PushV
	var_685_int = 0; // 0x1146 MovI
	var_686_bool = 0; // 0x1147 MovB
	var_687_int = 4; // 0x1148 MovI
	func_932(var_685_int, var_686_bool, var_687_int); // 0x1149 NEW_2
	
Label_4427:
	var_723_int = 0; var_724_int = 0; // 0x114b PushV
	var_723_int = 0; // 0x114c MovI
	var_724_int = var_518_int; // 0x114d Mov
	func_1050(var_723_int, var_724_int); // 0x114e NEW_2
	var_749_int = 0; var_750_int = 0; var_751_int = 0; // 0x1150 PushV
	var_749_int = 0; // 0x1151 MovI
	var_750_int = var_517_int; // 0x1152 Mov
	var_751_int = var_518_int; // 0x1153 Mov
	func_2206(var_749_int, var_750_int, var_751_int); // 0x1154 NEW_2
	return 0; // 0x1156 Return
}


func_294()
{
	var_113_int = 0; // 0x126 PushI
	var_114_int = 0; // 0x127 PushI
	SetSepia(var_113_int, var_114_int); // 0x128 Func
	return 0; // 0x12a Return
}


func_299(var_445_string, var_446_int)
{
	var_447_string = "Region"; // 0x12c PushS
	var_448_int = var_447_string + var_446_int; // 0x12d Add
	var_449_string = "State"; // 0x12e PushS
	var_445_string = var_448_int + var_449_string; // 0x12f Add2
	return 0; // 0x130 Return
}


func_8492()
{
	var_4476_int = 0; var_4477_object = Obj(); var_4478_int = 0; var_4479_object = Obj(); var_4480_bool = 0; var_4481_cvector = CVector(0,0,0); var_4482_cvector = CVector(0,0,0); var_4483_string = ""; var_4484_int = 0; var_4485_object = Obj(); var_4486_int = 0; var_4487_object = Obj(); var_4488_bool = 0; var_4489_cvector = CVector(0,0,0); var_4490_cvector = CVector(0,0,0); var_4491_string = ""; // 0x212c PushV
	var_4492_int = 0; // 0x212d PushV
	func_11178(var_4492_int); // 0x212e NEW_2
	var_4493_int = 0; // 0x2130 PushI
	var_4494_bool = var_4492_int == var_4493_int; // 0x2131 Eq
	if(var_4494_bool == 0) goto Label_8500; // 0x2132 JumpB
	return 16; // 0x2133 Return
	
Label_8500:
	var_4495_object = GlobalVars[6]; // 0x2134 PushGE
	size(var_4484_int); // 0x2135 ObjFunc
	GetMainOutdoorScene(var_4485_object); // 0x2137 Func
	var_4486_int = 0; // 0x2139 MovI
	
Label_8506:
	var_4496_bool = var_4486_int < var_4484_int; // 0x213a LT
	if(var_4496_bool == 0) goto Label_8565; // 0x213b JumpB
	var_4497_object = GlobalVars[6]; // 0x213c PushGE
	get(var_4487_object, var_4486_int); // 0x213d ObjFunc
	var_4498_object = var_4487_object; // 0x213f Push
	if(var_4498_object == 0) goto Label_8514; // 0x2140 JumpB
	goto Label_8562; // 0x2141 Jump
	
Label_8562:
	var_4499_int = 1; // 0x2172 PushI
	var_4486_int = var_4486_int + var_4499_int; // 0x2173 Add2
	goto Label_8506; // 0x2174 Jump
	
Label_8514:
	var_4500_string = "pt_plant"; // 0x2142 PushS
	var_4501_int = 1; // 0x2143 PushI
	var_4502_int = var_4486_int + var_4501_int; // 0x2144 Add
	var_4503_int = var_4500_string + var_4502_int; // 0x2145 Add
	GetLocator(var_4503_int, var_4488_bool, var_4489_cvector, var_4490_cvector); // 0x2146 ObjFunc
	var_4504_bool = var_4488_bool == 0; // 0x2148 Not
	if(var_4504_bool == 0) goto Label_8526; // 0x2149 JumpB
	var_4505_string = "Plant point not found"; // 0x214a PushS
	Trace(var_4505_string); // 0x214b Func
	goto Label_8562; // 0x214d Jump
	
Label_8526:
	var_4506_int = 6; // 0x214e PushI
	var_4507_int = 3; // 0x214f PushI
	var_4508_int = 3; // 0x2150 PushI
	var_4509_int = 3; // 0x2151 PushI
	var_4510_int = 1; // 0x2152 PushI
	var_4511_int = 1; // 0x2153 PushI
	var_4512_string = ""; // 0x2154 PushS
	var_4513_string = "grass_black_tvir"; // 0x2155 PushS
	var_4514_string = "grass_blood_tvir"; // 0x2156 PushS
	var_4515_string = "grass_brown_tvir"; // 0x2157 PushS
	var_4516_string = "grass_savyur"; // 0x2158 PushS
	var_4517_string = "grass_white_plet"; // 0x2159 PushS
	RandOneOf(var_4491_string, var_4506_int, var_4507_int, var_4508_int, var_4509_int, var_4510_int, var_4511_int, var_4512_string, var_4513_string, var_4514_string, var_4515_string, var_4516_string, var_4517_string); // 0x215a Func
	var_4518_string = var_4491_string; // 0x215c Push
	if(var_4518_string == 0) goto Label_8561; // 0x215d JumpB
	var_4519_string = "scripted"; // 0x215e PushS
	var_4520_string = "item_"; // 0x215f PushS
	var_4521_int = var_4520_string + var_4491_string; // 0x2160 Add
	var_4522_string = "_stat.xml"; // 0x2161 PushS
	var_4523_int = var_4521_int + var_4522_string; // 0x2162 Add
	AddStationaryActorByType(var_4487_object, var_4489_cvector, var_4490_cvector, var_4519_string, var_4523_int); // 0x2163 ObjFunc
	var_4524_object = GlobalVars[6]; // 0x2165 PushGE
	set(var_4486_int, var_4487_object); // 0x2166 ObjFunc
	var_4525_string = "New plant: ""; // 0x2168 PushS
	var_4526_int = var_4525_string + var_4491_string; // 0x2169 Add
	var_4527_string = "" at location #"; // 0x216a PushS
	var_4528_int = var_4526_int + var_4527_string; // 0x216b Add
	var_4529_int = 1; // 0x216c PushI
	var_4530_int = var_4486_int + var_4529_int; // 0x216d Add
	var_4531_int = var_4528_int + var_4530_int; // 0x216e Add
	Trace(var_4531_int); // 0x216f Func
	
Label_8561:
	var_4487_object = 0; // 0x2171 SetNull
	
Label_8565:
	return 16; // 0x2175 Return
}


func_10539()
{
	var_5071_bool = 0; var_5072_int = 0; // 0x292c PushV
	var_5072_int = 480; // 0x292d MovI
	func_11136(var_5071_bool, var_5072_int); // 0x292e NEW_2
	var_5073_bool = 0; var_5074_int = 0; // 0x2930 PushV
	var_5074_int = 723; // 0x2931 MovI
	func_11136(var_5073_bool, var_5074_int); // 0x2932 NEW_2
	var_5075_bool = 0; var_5076_int = 0; // 0x2934 PushV
	var_5076_int = 751; // 0x2935 MovI
	func_11136(var_5075_bool, var_5076_int); // 0x2936 NEW_2
	var_5077_bool = 0; var_5078_int = 0; // 0x2938 PushV
	var_5078_int = 757; // 0x2939 MovI
	func_11136(var_5077_bool, var_5078_int); // 0x293a NEW_2
	return 0; // 0x293c Return
}


func_305(var_612_int)
{
	var_613_int = 0; var_614_string = ""; var_615_int = 0; var_616_string = ""; var_617_string = ""; var_618_object = Obj(); var_619_int = 0; var_620_string = ""; var_621_int = 0; var_622_string = ""; var_623_string = ""; var_624_object = Obj(); // 0x131 PushV
	size(var_619_int); // 0x132 ObjFunc
	var_625_int = 1; // 0x134 PushI
	var_626_bool = var_612_int == var_625_int; // 0x135 Eq
	if(var_626_bool == 0) goto Label_313; // 0x136 JumpB
	var_620_string = "s_"; // 0x137 MovS
	goto Label_317; // 0x138 Jump
	
Label_317:
	var_621_int = 0; // 0x13d MovI
	
Label_318:
	var_627_bool = var_621_int < var_619_int; // 0x13e LT
	if(var_627_bool == 0) goto Label_342; // 0x13f JumpB
	get(var_622_string, var_621_int); // 0x140 ObjFunc
	var_628_int = var_620_string + var_622_string; // 0x142 Add
	var_629_string = ".isc"; // 0x143 PushS
	var_623_string = var_628_int + var_629_string; // 0x144 Add2
	GetSceneByName(var_624_object, var_622_string); // 0x145 Func
	var_630_bool = var_624_object == 0; // 0x147 Not
	if(var_630_bool == 0) goto Label_336; // 0x148 JumpB
	var_631_string = "City manager: can't replace indoor scene ""; // 0x149 PushS
	var_632_int = var_631_string + var_622_string; // 0x14a Add
	var_633_string = "" because it doesn't exist"; // 0x14b PushS
	var_634_int = var_632_int + var_633_string; // 0x14c Add
	Trace(var_634_int); // 0x14d Func
	goto Label_338; // 0x14f Jump
	
Label_338:
	var_624_object = 0; // 0x152 SetNull
	var_635_int = 1; // 0x153 PushI
	var_621_int = var_621_int + var_635_int; // 0x154 Add2
	goto Label_318; // 0x155 Jump
	
Label_336:
	ReplaceScene(var_624_object, var_623_string); // 0x150 Func
	
Label_342:
	return 12; // 0x156 Return
	
Label_313:
	var_636_int = 2; // 0x139 PushI
	var_637_bool = var_612_int == var_636_int; // 0x13a Eq
	if(var_637_bool == 0) goto Label_317; // 0x13b JumpB
	var_620_string = "n_"; // 0x13c MovS
}


func_10557()
{
	var_4629_string = ""; var_4630_bool = 0; // 0x293e PushV
	var_4629_string = "house1_kabak@door1"; // 0x293f MovS
	var_4630_bool = 1; // 0x2940 MovB
	func_177(var_4629_string, var_4630_bool); // 0x2941 NEW_2
	return 0; // 0x2943 Return
}


func_12606(var_4891_int)
{
	var_4892_int = 0; var_4893_int = 0; // 0x313e PushV
	var_4894_string = "vol_"; // 0x313f PushS
	var_4895_int = var_4894_string + var_4891_int; // 0x3140 Add
	GetVariable(var_4895_int, var_4893_int); // 0x3141 Func
	var_4896_string = "vol_"; // 0x3143 PushS
	var_4897_int = var_4896_string + var_4891_int; // 0x3144 Add
	var_4898_int = 8; // 0x3145 PushI
	var_4899_int = var_4893_int | var_4898_int; // 0x3146 Or
	SetVariable(var_4897_int, var_4899_int); // 0x3147 Func
	return 2; // 0x3149 Return
}


func_1345(var_1127_bool, var_1128_int, var_1129_int)
{
	var_1127_bool = 0; // 0x542 MovB
	var_1130_int = 10; // 0x543 PushI
	var_1131_bool = var_1128_int >= var_1130_int; // 0x544 GE
	if(var_1131_bool == 0) goto Label_1354; // 0x545 JumpB
	var_1132_int = 6; // 0x546 PushI
	var_1133_bool = var_1129_int < var_1132_int; // 0x547 LT
	if(var_1133_bool == 0) goto Label_1354; // 0x548 JumpB
	var_1127_bool = 1; // 0x549 MovB
	
Label_1354:
	return 0; // 0x54a Return
}


func_10564()
{
	var_4641_string = ""; var_4642_bool = 0; // 0x2945 PushV
	var_4641_string = "mnogogrannik_han@door1"; // 0x2946 MovS
	var_4642_bool = 1; // 0x2947 MovB
	func_177(var_4641_string, var_4642_bool); // 0x2948 NEW_2
	return 0; // 0x294a Return
}


func_6471()
{
	var_245_string = "r5_house2_01"; // 0x1948 PushS
	add(var_245_string); // 0x1949 ObjFunc
	var_246_string = "r5_house2_02"; // 0x194b PushS
	add(var_246_string); // 0x194c ObjFunc
	var_247_string = "r5_house2_03"; // 0x194e PushS
	add(var_247_string); // 0x194f ObjFunc
	var_248_string = "r5_house3_01_i2"; // 0x1951 PushS
	add(var_248_string); // 0x1952 ObjFunc
	var_249_string = "r5_house3_01"; // 0x1954 PushS
	add(var_249_string); // 0x1955 ObjFunc
	var_250_string = "r5_house3_02_i2"; // 0x1957 PushS
	add(var_250_string); // 0x1958 ObjFunc
	var_251_string = "r5_house3_02"; // 0x195a PushS
	add(var_251_string); // 0x195b ObjFunc
	var_252_string = "r5_house3_03_i2"; // 0x195d PushS
	add(var_252_string); // 0x195e ObjFunc
	var_253_string = "r5_house3_03"; // 0x1960 PushS
	add(var_253_string); // 0x1961 ObjFunc
	var_254_string = "r5_house3_04_i2"; // 0x1963 PushS
	add(var_254_string); // 0x1964 ObjFunc
	var_255_string = "r5_house3_04"; // 0x1966 PushS
	add(var_255_string); // 0x1967 ObjFunc
	var_256_string = "r5_house3_05_i2"; // 0x1969 PushS
	add(var_256_string); // 0x196a ObjFunc
	var_257_string = "r5_house3_05"; // 0x196c PushS
	add(var_257_string); // 0x196d ObjFunc
	var_258_string = "r5_house3_06_i2"; // 0x196f PushS
	add(var_258_string); // 0x1970 ObjFunc
	var_259_string = "r5_house3_06"; // 0x1972 PushS
	add(var_259_string); // 0x1973 ObjFunc
	var_260_string = "r5_house3_07_i2"; // 0x1975 PushS
	add(var_260_string); // 0x1976 ObjFunc
	var_261_string = "r5_house3_07"; // 0x1978 PushS
	add(var_261_string); // 0x1979 ObjFunc
	var_262_string = "r5_House6_01"; // 0x197b PushS
	add(var_262_string); // 0x197c ObjFunc
	return 0; // 0x197e Return
}


func_12618()
{
	var_4868_object = Obj(); var_4869_int = 0; var_4870_int = 0; var_4871_int = 0; var_4872_object = Obj(); var_4873_int = 0; var_4874_int = 0; var_4875_int = 0; // 0x314a PushV
	CreateIntVector(var_4872_object); // 0x314b Func
	var_4876_object = Obj(); var_4877_bool = 0; var_4878_int = 0; // 0x314d PushV
	var_4876_object = var_4872_object; // 0x314e Mov
	var_4877_bool = 0; // 0x314f MovB
	var_4878_int = -1; // 0x3150 MovI
	func_12574(var_4878_int); // 0x3151 NEW_2
	size(var_4873_int); // 0x3153 ObjFunc
	var_4874_int = 0; // 0x3155 MovI
	
Label_12630:
	var_4890_bool = var_4874_int < var_4873_int; // 0x3156 LT
	if(var_4890_bool == 0) goto Label_12641; // 0x3157 JumpB
	get(var_4875_int, var_4874_int); // 0x3158 ObjFunc
	var_4891_int = 0; // 0x315a PushV
	var_4891_int = var_4875_int; // 0x315b Mov
	func_12606(var_4891_int); // 0x315c NEW_2
	var_4900_int = 1; // 0x315e PushI
	var_4874_int = var_4874_int + var_4900_int; // 0x315f Add2
	goto Label_12630; // 0x3160 Jump
	
Label_12641:
	return 8; // 0x3161 Return
}


func_1355(var_1138_bool, var_1139_int, var_1140_int)
{
	var_1138_bool = 0; // 0x54c MovB
	var_1141_int = 3; // 0x54d PushI
	var_1142_bool = var_1139_int >= var_1141_int; // 0x54e GE
	if(var_1142_bool == 0) goto Label_1371; // 0x54f JumpB
	var_1143_bool = 0; // 0x550 PushV
	var_1143_bool = 1; // 0x551 MovB
	var_1144_int = 22; // 0x552 PushI
	var_1145_bool = var_1140_int > var_1144_int; // 0x553 GT
	if(var_1145_bool == 0) goto Label_1369; // 0x554 JumpB
	var_1146_int = 5; // 0x555 PushI
	var_1147_bool = var_1140_int < var_1146_int; // 0x556 LT
	if(var_1147_bool == 0) goto Label_1369; // 0x557 JumpB
	var_1143_bool = 0; // 0x558 MovB
	
Label_1369:
	if(var_1143_bool == 0) goto Label_1371; // 0x559 JumpB
	var_1138_bool = 1; // 0x55a MovB
	
Label_1371:
	return 0; // 0x55b Return
}


func_10571()
{
	var_5098_object = Obj(); var_5099_object = Obj(); // 0x294b PushV
	var_5100_object = Obj(); // 0x294c PushV
	func_11161(var_5100_object); // 0x294d NEW_2
	var_5099_object = var_5100_object; // 0x294e Mov
	var_5101_string = "k2q03LaraLetter"; // 0x2950 PushS
	var_5102_string = "pt_map_lara"; // 0x2951 PushS
	var_5103_int = 0; // 0x2952 PushI
	var_5104_int = 539375; // 0x2953 PushI
	var_5105_float = 0; // 0x2954 PushV
	func_284(var_5105_float); // 0x2955 NEW_2
	AddMark(var_5101_string, var_5102_string, var_5103_int, var_5104_int, var_5105_float); // 0x2957 ObjFunc
	return 2; // 0x2959 Return
}


func_2383(var_913_int, var_914_int, var_915_int)
{
	var_916_int = 0; var_917_int = 0; // 0x94f PushV
	var_918_int = 1; // 0x950 PushI
	var_919_int = var_914_int + var_918_int; // 0x951 Add
	var_920_int = 12; // 0x952 PushI
	var_921_bool = var_919_int == var_920_int; // 0x953 Eq
	if(var_921_bool == 0) goto Label_2390; // 0x954 JumpB
	return 2; // 0x955 Return
	
Label_2390:
	var_922_bool = 0; // 0x956 PushV
	var_922_bool = 0; // 0x957 MovB
	var_923_bool = 0; // 0x958 PushV
	var_923_bool = 1; // 0x959 MovB
	var_924_int = 7; // 0x95a PushI
	var_925_bool = var_915_int < var_924_int; // 0x95b LT
	if(var_925_bool == 0) goto Label_2401; // 0x95c JumpB
	var_926_int = 21; // 0x95d PushI
	var_927_bool = var_915_int > var_926_int; // 0x95e GT
	if(var_927_bool == 0) goto Label_2401; // 0x95f JumpB
	var_923_bool = 0; // 0x960 MovB
	
Label_2401:
	if(var_923_bool == 0) goto Label_2406; // 0x961 JumpB
	var_928_int = 0; // 0x962 PushI
	var_929_bool = var_914_int != var_928_int; // 0x963 Neq
	if(var_929_bool == 0) goto Label_2406; // 0x964 JumpB
	var_922_bool = 1; // 0x965 MovB
	
Label_2406:
	if(var_922_bool == 0) goto Label_2422; // 0x966 JumpB
	var_930_int = 1; // 0x967 PushI
	var_931_float = 0; var_932_int = 0; // 0x968 PushV
	var_932_int = var_914_int; // 0x969 Mov
	func_1141(var_931_float, var_932_int); // 0x96a NEW_2
	var_917_int = var_930_int * var_931_float; // 0x96c Mult2
	var_933_int = var_917_int; // 0x96d Push
	if(var_933_int == 0) goto Label_2422; // 0x96e JumpB
	var_934_int = 0; var_935_string = ""; var_936_string = ""; var_937_int = 0; // 0x96f PushV
	var_934_int = var_913_int; // 0x970 Mov
	var_935_string = "pers_grabitel"; // 0x971 MovS
	var_936_string = "grabitel.xml"; // 0x972 MovS
	var_937_int = var_917_int; // 0x973 Mov
	func_503(var_934_int, var_935_string, var_936_string, var_937_int); // 0x974 NEW_2
	
Label_2422:
	var_938_bool = 0; var_939_int = 0; var_940_int = 0; // 0x976 PushV
	var_939_int = var_914_int; // 0x977 Mov
	var_940_int = var_915_int; // 0x978 Mov
	func_1110(var_938_bool, var_939_int, var_940_int); // 0x979 NEW_2
	if(var_938_bool == 0) goto Label_2471; // 0x97b JumpB
	var_941_int = 0; var_942_string = ""; var_943_string = ""; var_944_int = 0; // 0x97c PushV
	var_941_int = var_913_int; // 0x97d Mov
	var_942_string = "pers_unosha"; // 0x97e MovS
	var_943_string = "unosha_attacker.xml"; // 0x97f MovS
	var_944_int = 1; // 0x980 MovI
	func_503(var_941_int, var_942_string, var_943_string, var_944_int); // 0x981 NEW_2
	var_945_int = 0; var_946_string = ""; var_947_string = ""; var_948_int = 0; // 0x983 PushV
	var_945_int = var_913_int; // 0x984 Mov
	var_946_string = "pers_unosha"; // 0x985 MovS
	var_947_string = "unosha2_attacker.xml"; // 0x986 MovS
	var_948_int = 1; // 0x987 MovI
	func_503(var_945_int, var_946_string, var_947_string, var_948_int); // 0x988 NEW_2
	var_949_int = 0; var_950_string = ""; var_951_string = ""; var_952_int = 0; // 0x98a PushV
	var_949_int = var_913_int; // 0x98b Mov
	var_950_string = "pers_worker"; // 0x98c MovS
	var_951_string = "worker_attacker.xml"; // 0x98d MovS
	var_952_int = 1; // 0x98e MovI
	func_503(var_949_int, var_950_string, var_951_string, var_952_int); // 0x98f NEW_2
	var_953_int = 0; var_954_string = ""; var_955_string = ""; var_956_int = 0; // 0x991 PushV
	var_953_int = var_913_int; // 0x992 Mov
	var_954_string = "pers_worker"; // 0x993 MovS
	var_955_string = "worker2_attacker.xml"; // 0x994 MovS
	var_956_int = 1; // 0x995 MovI
	func_503(var_953_int, var_954_string, var_955_string, var_956_int); // 0x996 NEW_2
	var_957_int = 0; var_958_string = ""; var_959_string = ""; var_960_int = 0; // 0x998 PushV
	var_957_int = var_913_int; // 0x999 Mov
	var_958_string = "pers_alkash"; // 0x99a MovS
	var_959_string = "alkash.xml"; // 0x99b MovS
	var_960_int = 1; // 0x99c MovI
	func_503(var_957_int, var_958_string, var_959_string, var_960_int); // 0x99d NEW_2
	var_961_int = 0; var_962_string = ""; var_963_string = ""; var_964_int = 0; // 0x99f PushV
	var_961_int = var_913_int; // 0x9a0 Mov
	var_962_string = "pers_woman"; // 0x9a1 MovS
	var_963_string = "woman.xml"; // 0x9a2 MovS
	var_964_int = 2; // 0x9a3 MovI
	func_503(var_961_int, var_962_string, var_963_string, var_964_int); // 0x9a4 NEW_2
	goto Label_2559; // 0x9a6 Jump
	
Label_2559:
	var_965_bool = 0; // 0x9ff PushV
	var_965_bool = 0; // 0xa00 MovB
	var_966_bool = 0; // 0xa01 PushV
	var_966_bool = 0; // 0xa02 MovB
	var_967_int = 0; // 0xa03 PushI
	var_968_bool = var_914_int == var_967_int; // 0xa04 Eq
	if(var_968_bool == 0) goto Label_2570; // 0xa05 JumpB
	var_969_int = 12; // 0xa06 PushI
	var_970_bool = var_915_int > var_969_int; // 0xa07 GT
	if(var_970_bool == 0) goto Label_2570; // 0xa08 JumpB
	var_966_bool = 1; // 0xa09 MovB
	
Label_2570:
	if(var_966_bool == 0) goto Label_2575; // 0xa0a JumpB
	var_971_int = 22; // 0xa0b PushI
	var_972_bool = var_915_int < var_971_int; // 0xa0c LT
	if(var_972_bool == 0) goto Label_2575; // 0xa0d JumpB
	var_965_bool = 1; // 0xa0e MovB
	
Label_2575:
	if(var_965_bool == 0) goto Label_2583; // 0xa0f JumpB
	var_973_int = 0; var_974_string = ""; var_975_string = ""; var_976_int = 0; // 0xa10 PushV
	var_973_int = var_913_int; // 0xa11 Mov
	var_974_string = "pers_woman"; // 0xa12 MovS
	var_975_string = "woman_killme.xml"; // 0xa13 MovS
	var_976_int = 1; // 0xa14 MovI
	func_503(var_973_int, var_974_string, var_975_string, var_976_int); // 0xa15 NEW_2
	
Label_2583:
	return 2; // 0xa17 Return
	
Label_2471:
	var_977_bool = 0; // 0x9a7 PushV
	var_977_bool = 0; // 0x9a8 MovB
	var_978_int = 8; // 0x9a9 PushI
	var_979_bool = var_915_int > var_978_int; // 0x9aa GT
	if(var_979_bool == 0) goto Label_2480; // 0x9ab JumpB
	var_980_int = 21; // 0x9ac PushI
	var_981_bool = var_915_int < var_980_int; // 0x9ad LT
	if(var_981_bool == 0) goto Label_2480; // 0x9ae JumpB
	var_977_bool = 1; // 0x9af MovB
	
Label_2480:
	if(var_977_bool == 0) goto Label_2524; // 0x9b0 JumpB
	var_982_int = 0; var_983_string = ""; var_984_string = ""; var_985_int = 0; // 0x9b1 PushV
	var_982_int = var_913_int; // 0x9b2 Mov
	var_983_string = "pers_worker"; // 0x9b3 MovS
	var_984_string = "worker.xml"; // 0x9b4 MovS
	var_985_int = 2; // 0x9b5 MovI
	func_503(var_982_int, var_983_string, var_984_string, var_985_int); // 0x9b6 NEW_2
	var_986_int = 0; var_987_string = ""; var_988_string = ""; var_989_int = 0; // 0x9b8 PushV
	var_986_int = var_913_int; // 0x9b9 Mov
	var_987_string = "pers_worker"; // 0x9ba MovS
	var_988_string = "worker2.xml"; // 0x9bb MovS
	var_989_int = 2; // 0x9bc MovI
	func_503(var_986_int, var_987_string, var_988_string, var_989_int); // 0x9bd NEW_2
	var_990_int = 0; var_991_string = ""; var_992_string = ""; var_993_int = 0; // 0x9bf PushV
	var_990_int = var_913_int; // 0x9c0 Mov
	var_991_string = "pers_alkash"; // 0x9c1 MovS
	var_992_string = "alkash.xml"; // 0x9c2 MovS
	var_993_int = 1; // 0x9c3 MovI
	func_503(var_990_int, var_991_string, var_992_string, var_993_int); // 0x9c4 NEW_2
	var_994_int = 0; var_995_string = ""; var_996_string = ""; var_997_int = 0; // 0x9c6 PushV
	var_994_int = var_913_int; // 0x9c7 Mov
	var_995_string = "pers_woman"; // 0x9c8 MovS
	var_996_string = "woman.xml"; // 0x9c9 MovS
	var_997_int = 2; // 0x9ca MovI
	func_503(var_994_int, var_995_string, var_996_string, var_997_int); // 0x9cb NEW_2
	var_998_int = 0; var_999_string = ""; var_1000_string = ""; var_1001_int = 0; // 0x9cd PushV
	var_998_int = var_913_int; // 0x9ce Mov
	var_999_string = "pers_unosha"; // 0x9cf MovS
	var_1000_string = "unosha.xml"; // 0x9d0 MovS
	var_1001_int = 1; // 0x9d1 MovI
	func_503(var_998_int, var_999_string, var_1000_string, var_1001_int); // 0x9d2 NEW_2
	var_1002_int = 0; var_1003_string = ""; var_1004_string = ""; var_1005_int = 0; // 0x9d4 PushV
	var_1002_int = var_913_int; // 0x9d5 Mov
	var_1003_string = "pers_unosha"; // 0x9d6 MovS
	var_1004_string = "unosha2.xml"; // 0x9d7 MovS
	var_1005_int = 1; // 0x9d8 MovI
	func_503(var_1002_int, var_1003_string, var_1004_string, var_1005_int); // 0x9d9 NEW_2
	goto Label_2559; // 0x9db Jump
	
Label_2524:
	var_1006_int = 0; var_1007_string = ""; var_1008_string = ""; var_1009_int = 0; // 0x9dc PushV
	var_1006_int = var_913_int; // 0x9dd Mov
	var_1007_string = "pers_alkash"; // 0x9de MovS
	var_1008_string = "alkash.xml"; // 0x9df MovS
	var_1009_int = 1; // 0x9e0 MovI
	func_503(var_1006_int, var_1007_string, var_1008_string, var_1009_int); // 0x9e1 NEW_2
	var_1010_int = 0; var_1011_string = ""; var_1012_string = ""; var_1013_int = 0; // 0x9e3 PushV
	var_1010_int = var_913_int; // 0x9e4 Mov
	var_1011_string = "pers_worker"; // 0x9e5 MovS
	var_1012_string = "worker.xml"; // 0x9e6 MovS
	var_1013_int = 1; // 0x9e7 MovI
	func_503(var_1010_int, var_1011_string, var_1012_string, var_1013_int); // 0x9e8 NEW_2
	var_1014_int = 0; var_1015_string = ""; var_1016_string = ""; var_1017_int = 0; // 0x9ea PushV
	var_1014_int = var_913_int; // 0x9eb Mov
	var_1015_string = "pers_worker"; // 0x9ec MovS
	var_1016_string = "worker2.xml"; // 0x9ed MovS
	var_1017_int = 1; // 0x9ee MovI
	func_503(var_1014_int, var_1015_string, var_1016_string, var_1017_int); // 0x9ef NEW_2
	var_1018_int = 0; var_1019_string = ""; var_1020_string = ""; var_1021_int = 0; // 0x9f1 PushV
	var_1018_int = var_913_int; // 0x9f2 Mov
	var_1019_string = "pers_unosha"; // 0x9f3 MovS
	var_1020_string = "unosha2.xml"; // 0x9f4 MovS
	var_1021_int = 1; // 0x9f5 MovI
	func_503(var_1018_int, var_1019_string, var_1020_string, var_1021_int); // 0x9f6 NEW_2
	var_1022_int = 0; var_1023_string = ""; var_1024_string = ""; var_1025_int = 0; // 0x9f8 PushV
	var_1022_int = var_913_int; // 0x9f9 Mov
	var_1023_string = "pers_dog"; // 0x9fa MovS
	var_1024_string = "dog.xml"; // 0x9fb MovS
	var_1025_int = 1; // 0x9fc MovI
	func_503(var_1022_int, var_1023_string, var_1024_string, var_1025_int); // 0x9fd NEW_2
}


func_4439(var_2004_int, var_2005_int, var_2006_object, var_2007_object, var_2008_object, var_2009_object)
{
	var_2010_int = 0; // 0x1158 PushI
	var_2011_bool = var_2005_int == var_2010_int; // 0x1159 Eq
	if(var_2011_bool == 0) goto Label_4479; // 0x115a JumpB
	var_2012_int = 0; var_2013_bool = 0; // 0x115b PushV
	var_2012_int = 0; // 0x115c MovI
	var_2013_bool = 1; // 0x115d MovB
	func_796(var_2012_int, var_2013_bool); // 0x115e NEW_2
	var_2014_int = 0; var_2015_bool = 0; var_2016_int = 0; // 0x1160 PushV
	var_2014_int = 0; // 0x1161 MovI
	var_2015_bool = 1; // 0x1162 MovB
	var_2016_int = 1; // 0x1163 MovI
	func_813(var_2014_int, var_2015_bool, var_2016_int); // 0x1164 NEW_2
	var_2017_int = 0; var_2018_int = 0; var_2019_object = Obj(); var_2020_object = Obj(); var_2021_object = Obj(); // 0x1166 PushV
	var_2017_int = 0; // 0x1167 MovI
	var_2018_int = var_2004_int; // 0x1168 Mov
	var_2019_object = var_2006_object; // 0x1169 Mov
	var_2020_object = var_2007_object; // 0x116a Mov
	var_2021_object = var_2008_object; // 0x116b Mov
	func_641(var_2017_int, var_2018_int, var_2019_object, var_2020_object, var_2021_object); // 0x116c NEW_2
	var_2107_object = Obj(); var_2108_int = 0; // 0x116e PushV
	var_2107_object = var_2009_object; // 0x116f Mov
	var_2108_int = 1; // 0x1170 MovI
	func_305(var_2108_int); // 0x1171 NEW_2
	var_2109_int = 0; var_2110_bool = 0; var_2111_int = 0; // 0x1173 PushV
	var_2109_int = 0; // 0x1174 MovI
	var_2110_bool = 1; // 0x1175 MovB
	var_2111_int = 4; // 0x1176 MovI
	func_870(var_2109_int, var_2110_bool, var_2111_int); // 0x1177 NEW_2
	var_2112_int = 0; var_2113_bool = 0; var_2114_int = 0; // 0x1179 PushV
	var_2112_int = 0; // 0x117a MovI
	var_2113_bool = 0; // 0x117b MovB
	var_2114_int = 4; // 0x117c MovI
	func_932(var_2112_int, var_2113_bool, var_2114_int); // 0x117d NEW_2
	
Label_4479:
	var_2115_int = 0; var_2116_bool = 0; // 0x117f PushV
	var_2115_int = 0; // 0x1180 MovI
	var_2116_bool = 0; // 0x1181 MovB
	func_779(var_2115_int, var_2116_bool); // 0x1182 NEW_2
	var_2117_int = 0; var_2118_int = 0; var_2119_int = 0; // 0x1184 PushV
	var_2117_int = 0; // 0x1185 MovI
	var_2118_int = var_2004_int; // 0x1186 Mov
	var_2119_int = var_2005_int; // 0x1187 Mov
	func_3137(var_2117_int, var_2118_int, var_2119_int); // 0x1188 NEW_2
	return 0; // 0x118a Return
}


func_343(var_122_int)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0; // 0x157 PushV
	var_125_int = 0; // 0x158 MovI
	var_126_int = 0; // 0x159 MovI
	
Label_346:
	var_127_int = 16; // 0x15a PushI
	var_128_bool = var_126_int < var_127_int; // 0x15b LT
	if(var_128_bool == 0) goto Label_359; // 0x15c JumpB
	var_129_bool = 0; var_130_int = 0; // 0x15d PushV
	var_130_int = var_126_int; // 0x15e Mov
	func_430(var_129_bool, var_130_int); // 0x15f NEW_2
	if(var_129_bool == 0) goto Label_356; // 0x161 JumpB
	var_131_int = 1; // 0x162 PushI
	var_125_int = var_125_int + var_131_int; // 0x163 Add2
	
Label_356:
	var_132_int = 1; // 0x164 PushI
	var_126_int = var_126_int + var_132_int; // 0x165 Add2
	goto Label_346; // 0x166 Jump
	
Label_359:
	var_122_int = var_125_int; // 0x167 Mov
	return 4; // 0x168 Return
}


func_10587()
{
	var_4937_int = 0; var_4938_string = ""; // 0x295c PushV
	var_4938_string = "map_chertez_state"; // 0x295d MovS
	func_132(var_4937_int, var_4938_string); // 0x295e NEW_2
	var_4939_int = 1; // 0x2960 PushI
	var_4940_bool = var_4937_int <= var_4939_int; // 0x2961 LE
	if(var_4940_bool == 0) goto Label_10603; // 0x2962 JumpB
	var_4941_string = "map_chertez_state"; // 0x2963 PushS
	var_4942_int = 1; // 0x2964 PushI
	SetVariable(var_4941_string, var_4942_int); // 0x2965 Func
	var_4943_string = "map_chertez_force"; // 0x2967 PushS
	var_4944_int = 1; // 0x2968 PushI
	SetVariable(var_4943_string, var_4944_int); // 0x2969 Func
	
Label_10603:
	return 0; // 0x296b Return
}


func_1372(var_2207_bool, var_2208_int)
{
	var_2209_int = 8; // 0x55d PushI
	var_2207_bool = var_2208_int >= var_2209_int; // 0x55e GE2
	return 0; // 0x55f Return
}


func_1376(var_1805_int, var_1806_int, var_1807_int)
{
	var_1808_int = 0; var_1809_int = 0; // 0x560 PushV
	var_1810_int = 1; // 0x561 PushI
	var_1811_int = var_1806_int + var_1810_int; // 0x562 Add
	var_1812_int = 12; // 0x563 PushI
	var_1813_bool = var_1811_int == var_1812_int; // 0x564 Eq
	if(var_1813_bool == 0) goto Label_1383; // 0x565 JumpB
	return 2; // 0x566 Return
	
Label_1383:
	var_1814_bool = 0; // 0x567 PushV
	var_1814_bool = 0; // 0x568 MovB
	var_1815_bool = 0; // 0x569 PushV
	var_1815_bool = 1; // 0x56a MovB
	var_1816_int = 7; // 0x56b PushI
	var_1817_bool = var_1807_int < var_1816_int; // 0x56c LT
	if(var_1817_bool == 0) goto Label_1394; // 0x56d JumpB
	var_1818_int = 21; // 0x56e PushI
	var_1819_bool = var_1807_int > var_1818_int; // 0x56f GT
	if(var_1819_bool == 0) goto Label_1394; // 0x570 JumpB
	var_1815_bool = 0; // 0x571 MovB
	
Label_1394:
	if(var_1815_bool == 0) goto Label_1399; // 0x572 JumpB
	var_1820_int = 0; // 0x573 PushI
	var_1821_bool = var_1806_int != var_1820_int; // 0x574 Neq
	if(var_1821_bool == 0) goto Label_1399; // 0x575 JumpB
	var_1814_bool = 1; // 0x576 MovB
	
Label_1399:
	if(var_1814_bool == 0) goto Label_1414; // 0x577 JumpB
	var_1822_float = 0; var_1823_int = 0; // 0x578 PushV
	var_1823_int = var_1806_int; // 0x579 Mov
	func_1141(var_1822_float, var_1823_int); // 0x57a NEW_2
	var_1809_int = var_1822_float; // 0x57b Mov
	var_1824_int = var_1809_int; // 0x57d Push
	if(var_1824_int == 0) goto Label_1414; // 0x57e JumpB
	var_1825_int = 0; var_1826_string = ""; var_1827_string = ""; var_1828_int = 0; // 0x57f PushV
	var_1825_int = var_1805_int; // 0x580 Mov
	var_1826_string = "pers_grabitel"; // 0x581 MovS
	var_1827_string = "grabitel.xml"; // 0x582 MovS
	var_1828_int = var_1809_int; // 0x583 Mov
	func_503(var_1825_int, var_1826_string, var_1827_string, var_1828_int); // 0x584 NEW_2
	
Label_1414:
	var_1829_bool = 0; var_1830_int = 0; var_1831_int = 0; // 0x586 PushV
	var_1830_int = var_1806_int; // 0x587 Mov
	var_1831_int = var_1807_int; // 0x588 Mov
	func_1110(var_1829_bool, var_1830_int, var_1831_int); // 0x589 NEW_2
	if(var_1829_bool == 0) goto Label_1491; // 0x58b JumpB
	var_1832_int = 0; var_1833_string = ""; var_1834_string = ""; var_1835_int = 0; // 0x58c PushV
	var_1832_int = var_1805_int; // 0x58d Mov
	var_1833_string = "pers_unosha"; // 0x58e MovS
	var_1834_string = "unosha_attacker.xml"; // 0x58f MovS
	var_1835_int = 1; // 0x590 MovI
	func_503(var_1832_int, var_1833_string, var_1834_string, var_1835_int); // 0x591 NEW_2
	var_1836_int = 0; var_1837_string = ""; var_1838_string = ""; var_1839_int = 0; // 0x593 PushV
	var_1836_int = var_1805_int; // 0x594 Mov
	var_1837_string = "pers_unosha"; // 0x595 MovS
	var_1838_string = "unosha2_attacker.xml"; // 0x596 MovS
	var_1839_int = 1; // 0x597 MovI
	func_503(var_1836_int, var_1837_string, var_1838_string, var_1839_int); // 0x598 NEW_2
	var_1840_int = 0; var_1841_string = ""; var_1842_string = ""; var_1843_int = 0; // 0x59a PushV
	var_1840_int = var_1805_int; // 0x59b Mov
	var_1841_string = "pers_worker"; // 0x59c MovS
	var_1842_string = "worker_attacker.xml"; // 0x59d MovS
	var_1843_int = 1; // 0x59e MovI
	func_503(var_1840_int, var_1841_string, var_1842_string, var_1843_int); // 0x59f NEW_2
	var_1844_int = 0; var_1845_string = ""; var_1846_string = ""; var_1847_int = 0; // 0x5a1 PushV
	var_1844_int = var_1805_int; // 0x5a2 Mov
	var_1845_string = "pers_worker"; // 0x5a3 MovS
	var_1846_string = "worker2_attacker.xml"; // 0x5a4 MovS
	var_1847_int = 1; // 0x5a5 MovI
	func_503(var_1844_int, var_1845_string, var_1846_string, var_1847_int); // 0x5a6 NEW_2
	var_1848_int = 0; var_1849_string = ""; var_1850_string = ""; var_1851_int = 0; // 0x5a8 PushV
	var_1848_int = var_1805_int; // 0x5a9 Mov
	var_1849_string = "pers_wasted_girl"; // 0x5aa MovS
	var_1850_string = "wasted_girl.xml"; // 0x5ab MovS
	var_1851_int = 2; // 0x5ac MovI
	func_503(var_1848_int, var_1849_string, var_1850_string, var_1851_int); // 0x5ad NEW_2
	var_1852_int = 0; var_1853_string = ""; var_1854_string = ""; var_1855_int = 0; // 0x5af PushV
	var_1852_int = var_1805_int; // 0x5b0 Mov
	var_1853_string = "pers_wasted_male"; // 0x5b1 MovS
	var_1854_string = "wasted_male.xml"; // 0x5b2 MovS
	var_1855_int = 3; // 0x5b3 MovI
	func_503(var_1852_int, var_1853_string, var_1854_string, var_1855_int); // 0x5b4 NEW_2
	var_1856_int = 0; var_1857_string = ""; var_1858_string = ""; var_1859_int = 0; // 0x5b6 PushV
	var_1856_int = var_1805_int; // 0x5b7 Mov
	var_1857_string = "pers_woman"; // 0x5b8 MovS
	var_1858_string = "woman.xml"; // 0x5b9 MovS
	var_1859_int = 3; // 0x5ba MovI
	func_503(var_1856_int, var_1857_string, var_1858_string, var_1859_int); // 0x5bb NEW_2
	var_1860_int = 0; var_1861_string = ""; var_1862_string = ""; var_1863_int = 0; // 0x5bd PushV
	var_1860_int = var_1805_int; // 0x5be Mov
	var_1861_string = "pers_boy"; // 0x5bf MovS
	var_1862_string = "boy.xml"; // 0x5c0 MovS
	var_1863_int = 1; // 0x5c1 MovI
	func_503(var_1860_int, var_1861_string, var_1862_string, var_1863_int); // 0x5c2 NEW_2
	var_1864_int = 0; var_1865_string = ""; var_1866_string = ""; var_1867_int = 0; // 0x5c4 PushV
	var_1864_int = var_1805_int; // 0x5c5 Mov
	var_1865_string = "pers_girl"; // 0x5c6 MovS
	var_1866_string = "girl.xml"; // 0x5c7 MovS
	var_1867_int = 1; // 0x5c8 MovI
	func_503(var_1864_int, var_1865_string, var_1866_string, var_1867_int); // 0x5c9 NEW_2
	var_1868_int = 0; var_1869_string = ""; var_1870_string = ""; var_1871_int = 0; // 0x5cb PushV
	var_1868_int = var_1805_int; // 0x5cc Mov
	var_1869_string = "pers_girl"; // 0x5cd MovS
	var_1870_string = "girl2.xml"; // 0x5ce MovS
	var_1871_int = 1; // 0x5cf MovI
	func_503(var_1868_int, var_1869_string, var_1870_string, var_1871_int); // 0x5d0 NEW_2
	goto Label_1586; // 0x5d2 Jump
	
Label_1586:
	var_1872_bool = 0; // 0x632 PushV
	var_1872_bool = 0; // 0x633 MovB
	var_1873_bool = 0; // 0x634 PushV
	var_1873_bool = 0; // 0x635 MovB
	var_1874_int = 0; // 0x636 PushI
	var_1875_bool = var_1806_int == var_1874_int; // 0x637 Eq
	if(var_1875_bool == 0) goto Label_1597; // 0x638 JumpB
	var_1876_int = 12; // 0x639 PushI
	var_1877_bool = var_1807_int > var_1876_int; // 0x63a GT
	if(var_1877_bool == 0) goto Label_1597; // 0x63b JumpB
	var_1873_bool = 1; // 0x63c MovB
	
Label_1597:
	if(var_1873_bool == 0) goto Label_1602; // 0x63d JumpB
	var_1878_int = 22; // 0x63e PushI
	var_1879_bool = var_1807_int < var_1878_int; // 0x63f LT
	if(var_1879_bool == 0) goto Label_1602; // 0x640 JumpB
	var_1872_bool = 1; // 0x641 MovB
	
Label_1602:
	if(var_1872_bool == 0) goto Label_1610; // 0x642 JumpB
	var_1880_int = 0; var_1881_string = ""; var_1882_string = ""; var_1883_int = 0; // 0x643 PushV
	var_1880_int = var_1805_int; // 0x644 Mov
	var_1881_string = "pers_wasted_girl"; // 0x645 MovS
	var_1882_string = "wasted_girl_killme.xml"; // 0x646 MovS
	var_1883_int = 1; // 0x647 MovI
	func_503(var_1880_int, var_1881_string, var_1882_string, var_1883_int); // 0x648 NEW_2
	
Label_1610:
	var_1884_bool = 0; var_1885_int = 0; var_1886_int = 0; // 0x64a PushV
	var_1885_int = var_1806_int; // 0x64b Mov
	var_1886_int = var_1807_int; // 0x64c Mov
	func_1345(var_1884_bool, var_1885_int, var_1886_int); // 0x64d NEW_2
	if(var_1884_bool == 0) goto Label_1623; // 0x64f JumpB
	var_1887_int = 0; var_1888_string = ""; var_1889_string = ""; var_1890_int = 0; // 0x650 PushV
	var_1887_int = var_1805_int; // 0x651 Mov
	var_1888_string = "pers_soldat"; // 0x652 MovS
	var_1889_string = "soldier_marauder.xml"; // 0x653 MovS
	var_1890_int = 2; // 0x654 MovI
	func_503(var_1887_int, var_1888_string, var_1889_string, var_1890_int); // 0x655 NEW_2
	
Label_1623:
	return 2; // 0x657 Return
	
Label_1491:
	var_1891_bool = 0; // 0x5d3 PushV
	var_1891_bool = 0; // 0x5d4 MovB
	var_1892_int = 8; // 0x5d5 PushI
	var_1893_bool = var_1807_int > var_1892_int; // 0x5d6 GT
	if(var_1893_bool == 0) goto Label_1500; // 0x5d7 JumpB
	var_1894_int = 21; // 0x5d8 PushI
	var_1895_bool = var_1807_int < var_1894_int; // 0x5d9 LT
	if(var_1895_bool == 0) goto Label_1500; // 0x5da JumpB
	var_1891_bool = 1; // 0x5db MovB
	
Label_1500:
	if(var_1891_bool == 0) goto Label_1558; // 0x5dc JumpB
	var_1896_int = 0; var_1897_string = ""; var_1898_string = ""; var_1899_int = 0; // 0x5dd PushV
	var_1896_int = var_1805_int; // 0x5de Mov
	var_1897_string = "pers_wasted_girl"; // 0x5df MovS
	var_1898_string = "wasted_girl.xml"; // 0x5e0 MovS
	var_1899_int = 2; // 0x5e1 MovI
	func_503(var_1896_int, var_1897_string, var_1898_string, var_1899_int); // 0x5e2 NEW_2
	var_1900_int = 0; var_1901_string = ""; var_1902_string = ""; var_1903_int = 0; // 0x5e4 PushV
	var_1900_int = var_1805_int; // 0x5e5 Mov
	var_1901_string = "pers_wasted_male"; // 0x5e6 MovS
	var_1902_string = "wasted_male.xml"; // 0x5e7 MovS
	var_1903_int = 3; // 0x5e8 MovI
	func_503(var_1900_int, var_1901_string, var_1902_string, var_1903_int); // 0x5e9 NEW_2
	var_1904_int = 0; var_1905_string = ""; var_1906_string = ""; var_1907_int = 0; // 0x5eb PushV
	var_1904_int = var_1805_int; // 0x5ec Mov
	var_1905_string = "pers_woman"; // 0x5ed MovS
	var_1906_string = "woman.xml"; // 0x5ee MovS
	var_1907_int = 3; // 0x5ef MovI
	func_503(var_1904_int, var_1905_string, var_1906_string, var_1907_int); // 0x5f0 NEW_2
	var_1908_int = 0; var_1909_string = ""; var_1910_string = ""; var_1911_int = 0; // 0x5f2 PushV
	var_1908_int = var_1805_int; // 0x5f3 Mov
	var_1909_string = "pers_unosha"; // 0x5f4 MovS
	var_1910_string = "unosha.xml"; // 0x5f5 MovS
	var_1911_int = 2; // 0x5f6 MovI
	func_503(var_1908_int, var_1909_string, var_1910_string, var_1911_int); // 0x5f7 NEW_2
	var_1912_int = 0; var_1913_string = ""; var_1914_string = ""; var_1915_int = 0; // 0x5f9 PushV
	var_1912_int = var_1805_int; // 0x5fa Mov
	var_1913_string = "pers_unosha"; // 0x5fb MovS
	var_1914_string = "unosha2.xml"; // 0x5fc MovS
	var_1915_int = 2; // 0x5fd MovI
	func_503(var_1912_int, var_1913_string, var_1914_string, var_1915_int); // 0x5fe NEW_2
	var_1916_int = 0; var_1917_string = ""; var_1918_string = ""; var_1919_int = 0; // 0x600 PushV
	var_1916_int = var_1805_int; // 0x601 Mov
	var_1917_string = "pers_boy"; // 0x602 MovS
	var_1918_string = "boy.xml"; // 0x603 MovS
	var_1919_int = 2; // 0x604 MovI
	func_503(var_1916_int, var_1917_string, var_1918_string, var_1919_int); // 0x605 NEW_2
	var_1920_int = 0; var_1921_string = ""; var_1922_string = ""; var_1923_int = 0; // 0x607 PushV
	var_1920_int = var_1805_int; // 0x608 Mov
	var_1921_string = "pers_girl"; // 0x609 MovS
	var_1922_string = "girl.xml"; // 0x60a MovS
	var_1923_int = 1; // 0x60b MovI
	func_503(var_1920_int, var_1921_string, var_1922_string, var_1923_int); // 0x60c NEW_2
	var_1924_int = 0; var_1925_string = ""; var_1926_string = ""; var_1927_int = 0; // 0x60e PushV
	var_1924_int = var_1805_int; // 0x60f Mov
	var_1925_string = "pers_girl"; // 0x610 MovS
	var_1926_string = "girl2.xml"; // 0x611 MovS
	var_1927_int = 1; // 0x612 MovI
	func_503(var_1924_int, var_1925_string, var_1926_string, var_1927_int); // 0x613 NEW_2
	goto Label_1586; // 0x615 Jump
	
Label_1558:
	var_1928_int = 0; var_1929_string = ""; var_1930_string = ""; var_1931_int = 0; // 0x616 PushV
	var_1928_int = var_1805_int; // 0x617 Mov
	var_1929_string = "pers_wasted_girl"; // 0x618 MovS
	var_1930_string = "wasted_girl.xml"; // 0x619 MovS
	var_1931_int = 1; // 0x61a MovI
	func_503(var_1928_int, var_1929_string, var_1930_string, var_1931_int); // 0x61b NEW_2
	var_1932_int = 0; var_1933_string = ""; var_1934_string = ""; var_1935_int = 0; // 0x61d PushV
	var_1932_int = var_1805_int; // 0x61e Mov
	var_1933_string = "pers_wasted_male"; // 0x61f MovS
	var_1934_string = "wasted_male.xml"; // 0x620 MovS
	var_1935_int = 2; // 0x621 MovI
	func_503(var_1932_int, var_1933_string, var_1934_string, var_1935_int); // 0x622 NEW_2
	var_1936_int = 0; var_1937_string = ""; var_1938_string = ""; var_1939_int = 0; // 0x624 PushV
	var_1936_int = var_1805_int; // 0x625 Mov
	var_1937_string = "pers_unosha"; // 0x626 MovS
	var_1938_string = "unosha.xml"; // 0x627 MovS
	var_1939_int = 1; // 0x628 MovI
	func_503(var_1936_int, var_1937_string, var_1938_string, var_1939_int); // 0x629 NEW_2
	var_1940_int = 0; var_1941_string = ""; var_1942_string = ""; var_1943_int = 0; // 0x62b PushV
	var_1940_int = var_1805_int; // 0x62c Mov
	var_1941_string = "pers_unosha"; // 0x62d MovS
	var_1942_string = "unosha2.xml"; // 0x62e MovS
	var_1943_int = 1; // 0x62f MovI
	func_503(var_1940_int, var_1941_string, var_1942_string, var_1943_int); // 0x630 NEW_2
}


func_9570(var_4994_int, var_4995_float)
{
	var_4996_int = 0; var_4997_int = 0; var_4998_int = 0; var_4999_float = 0; // 0x2563 PushV
	var_4997_int = 530554; // 0x2564 MovI
	var_4998_int = 530553; // 0x2565 MovI
	var_4999_float = var_4995_float; // 0x2566 Mov
	func_11153(var_4996_int, var_4997_int, var_4998_int, var_4999_float); // 0x2567 NEW_2
	var_4994_int = var_4996_int; // 0x2568 Mov
	return 0; // 0x256a Return
}


func_12643()
{
	func_12618(); // 0x3164 NEW_2
	return 0; // 0x3166 Return
}


func_12647(var_303_bool, var_304_int)
{
	var_305_int = 0; var_306_int = 0; // 0x3167 PushV
	var_307_string = "K2System"; // 0x3168 PushS
	var_308_int = var_307_string + var_304_int; // 0x3169 Add
	GetVariable(var_308_int, var_306_int); // 0x316a Func
	var_309_int = 0; // 0x316c PushI
	var_303_bool = var_306_int != var_309_int; // 0x316d Neq2
	return 2; // 0x316e Return
}


func_5480(var_1340_int, var_1341_int, var_1342_object, var_1343_object, var_1344_object, var_1345_object)
{
	var_1346_int = 0; // 0x1569 PushI
	var_1347_bool = var_1341_int == var_1346_int; // 0x156a Eq
	if(var_1347_bool == 0) goto Label_5520; // 0x156b JumpB
	var_1348_int = 0; var_1349_bool = 0; // 0x156c PushV
	var_1348_int = 5; // 0x156d MovI
	var_1349_bool = 0; // 0x156e MovB
	func_796(var_1348_int, var_1349_bool); // 0x156f NEW_2
	var_1350_int = 0; var_1351_bool = 0; var_1352_int = 0; // 0x1571 PushV
	var_1350_int = 5; // 0x1572 MovI
	var_1351_bool = 0; // 0x1573 MovB
	var_1352_int = 1; // 0x1574 MovI
	func_813(var_1350_int, var_1351_bool, var_1352_int); // 0x1575 NEW_2
	var_1353_int = 0; var_1354_int = 0; var_1355_object = Obj(); var_1356_object = Obj(); var_1357_object = Obj(); // 0x1577 PushV
	var_1353_int = 5; // 0x1578 MovI
	var_1354_int = var_1340_int; // 0x1579 Mov
	var_1355_object = var_1342_object; // 0x157a Mov
	var_1356_object = var_1343_object; // 0x157b Mov
	var_1357_object = var_1344_object; // 0x157c Mov
	func_622(var_1354_int, var_1355_object, var_1356_object, var_1357_object); // 0x157d NEW_2
	var_1358_object = Obj(); var_1359_int = 0; // 0x157f PushV
	var_1358_object = var_1345_object; // 0x1580 Mov
	var_1359_int = 0; // 0x1581 MovI
	func_305(var_1359_int); // 0x1582 NEW_2
	var_1360_int = 0; var_1361_bool = 0; var_1362_int = 0; // 0x1584 PushV
	var_1360_int = 5; // 0x1585 MovI
	var_1361_bool = 0; // 0x1586 MovB
	var_1362_int = 4; // 0x1587 MovI
	func_870(var_1360_int, var_1361_bool, var_1362_int); // 0x1588 NEW_2
	var_1363_int = 0; var_1364_bool = 0; var_1365_int = 0; // 0x158a PushV
	var_1363_int = 5; // 0x158b MovI
	var_1364_bool = 0; // 0x158c MovB
	var_1365_int = 4; // 0x158d MovI
	func_932(var_1363_int, var_1364_bool, var_1365_int); // 0x158e NEW_2
	
Label_5520:
	var_1366_int = 0; var_1367_int = 0; // 0x1590 PushV
	var_1366_int = 5; // 0x1591 MovI
	var_1367_int = var_1341_int; // 0x1592 Mov
	func_983(var_1366_int, var_1367_int); // 0x1593 NEW_2
	var_1368_int = 0; var_1369_int = 0; var_1370_int = 0; // 0x1595 PushV
	var_1368_int = 5; // 0x1596 MovI
	var_1369_int = var_1340_int; // 0x1597 Mov
	var_1370_int = var_1341_int; // 0x1598 Mov
	func_1897(var_1368_int, var_1369_int, var_1370_int); // 0x1599 NEW_2
	return 0; // 0x159b Return
}


func_361(var_135_int)
{
	var_137_int = 0; var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; // 0x169 PushV
	var_143_int = 16; // 0x16a PushI
	irand(var_140_int, var_143_int); // 0x16b Func
	var_141_int = 0; // 0x16d MovI
	
Label_366:
	var_144_int = 16; // 0x16e PushI
	var_145_bool = var_141_int < var_144_int; // 0x16f LT
	if(var_145_bool == 0) goto Label_399; // 0x170 JumpB
	var_146_int = var_141_int + var_140_int; // 0x171 Add
	var_147_int = 16; // 0x172 PushI
	var_142_int = var_146_int % var_147_int; // 0x173 Mod2
	var_148_bool = 0; // 0x174 PushV
	var_148_bool = 0; // 0x175 MovB
	var_149_bool = 0; var_150_int = 0; // 0x176 PushV
	var_150_int = var_142_int; // 0x177 Mov
	func_400(var_149_bool, var_150_int); // 0x178 NEW_2
	if(var_149_bool == 0) goto Label_386; // 0x17a JumpB
	var_158_bool = 0; var_159_int = 0; var_160_int = 0; // 0x17b PushV
	var_159_int = var_142_int; // 0x17c Mov
	var_160_int = var_135_int; // 0x17d Mov
	func_12857(var_158_bool, var_159_int, var_160_int); // 0x17e NEW_2
	if(var_158_bool == 0) goto Label_386; // 0x180 JumpB
	var_148_bool = 1; // 0x181 MovB
	
Label_386:
	if(var_148_bool == 0) goto Label_396; // 0x182 JumpB
	var_221_int = 0; // 0x183 PushV
	var_221_int = var_142_int; // 0x184 Mov
	func_442(var_221_int); // 0x185 NEW_2
	var_222_string = "Diseased Region: "; // 0x187 PushS
	var_223_int = var_222_string + var_142_int; // 0x188 Add
	Trace(var_223_int); // 0x189 Func
	return 6; // 0x18b Return
	
Label_396:
	var_224_int = 1; // 0x18c PushI
	var_141_int = var_141_int + var_224_int; // 0x18d Add2
	goto Label_366; // 0x18e Jump
	
Label_399:
	return 6; // 0x18f Return
}


func_9579(var_4983_int, var_4984_float)
{
	var_4985_int = 0; var_4986_int = 0; var_4987_int = 0; var_4988_float = 0; // 0x256c PushV
	var_4986_int = 530556; // 0x256d MovI
	var_4987_int = 530555; // 0x256e MovI
	var_4988_float = var_4984_float; // 0x256f Mov
	func_11153(var_4985_int, var_4986_int, var_4987_int, var_4988_float); // 0x2570 NEW_2
	var_4983_int = var_4985_int; // 0x2571 Mov
	return 0; // 0x2573 Return
}


func_10604()
{
	var_4816_int = 0; var_4817_string = ""; // 0x296d PushV
	var_4817_string = "map_chertez_state"; // 0x296e MovS
	func_132(var_4816_int, var_4817_string); // 0x296f NEW_2
	var_4818_int = 2; // 0x2971 PushI
	var_4819_bool = var_4816_int <= var_4818_int; // 0x2972 LE
	if(var_4819_bool == 0) goto Label_10620; // 0x2973 JumpB
	var_4820_string = "map_chertez_state"; // 0x2974 PushS
	var_4821_int = 2; // 0x2975 PushI
	SetVariable(var_4820_string, var_4821_int); // 0x2976 Func
	var_4822_string = "map_chertez_force"; // 0x2978 PushS
	var_4823_int = 1; // 0x2979 PushI
	SetVariable(var_4822_string, var_4823_int); // 0x297a Func
	
Label_10620:
	return 0; // 0x297c Return
}


func_12655(var_198_int, var_199_int)
{
	var_200_int = 6; // 0x3170 PushI
	var_201_bool = var_199_int == var_200_int; // 0x3171 Eq
	if(var_201_bool == 0) goto Label_12662; // 0x3172 JumpB
	var_198_int = 14; // 0x3173 MovI
	return 0; // 0x3174 Return
	
Label_12662:
	var_202_int = 7; // 0x3176 PushI
	var_203_bool = var_199_int == var_202_int; // 0x3177 Eq
	if(var_203_bool == 0) goto Label_12668; // 0x3178 JumpB
	var_198_int = 8; // 0x3179 MovI
	return 0; // 0x317a Return
	
Label_12668:
	var_204_int = 8; // 0x317c PushI
	var_205_bool = var_199_int == var_204_int; // 0x317d Eq
	if(var_205_bool == 0) goto Label_12674; // 0x317e JumpB
	var_198_int = 4; // 0x317f MovI
	return 0; // 0x3180 Return
	
Label_12674:
	var_206_int = 9; // 0x3182 PushI
	var_207_bool = var_199_int == var_206_int; // 0x3183 Eq
	if(var_207_bool == 0) goto Label_12680; // 0x3184 JumpB
	var_198_int = 13; // 0x3185 MovI
	return 0; // 0x3186 Return
	
Label_12680:
	var_208_int = 10; // 0x3188 PushI
	var_209_bool = var_199_int == var_208_int; // 0x3189 Eq
	if(var_209_bool == 0) goto Label_12686; // 0x318a JumpB
	var_198_int = 5; // 0x318b MovI
	return 0; // 0x318c Return
	
Label_12686:
	var_210_int = 11; // 0x318e PushI
	var_211_bool = var_199_int == var_210_int; // 0x318f Eq
	if(var_211_bool == 0) goto Label_12691; // 0x3190 JumpB
	var_198_int = 11; // 0x3191 MovI
	return 0; // 0x3192 Return
	
Label_12691:
	var_198_int = -1; // 0x3193 MovI
	return 0; // 0x3194 Return
}


func_9588(var_4972_int, var_4973_float)
{
	var_4974_int = 0; var_4975_int = 0; var_4976_int = 0; var_4977_float = 0; // 0x2575 PushV
	var_4975_int = 530558; // 0x2576 MovI
	var_4976_int = 530557; // 0x2577 MovI
	var_4977_float = var_4973_float; // 0x2578 Mov
	func_11153(var_4974_int, var_4975_int, var_4976_int, var_4977_float); // 0x2579 NEW_2
	var_4972_int = var_4974_int; // 0x257a Mov
	return 0; // 0x257c Return
}


func_8567()
{
	var_4532_object = Obj(); var_4533_int = 0; var_4534_int = 0; var_4535_object = Obj(); var_4536_bool = 0; var_4537_cvector = CVector(0,0,0); var_4538_cvector = CVector(0,0,0); var_4539_string = ""; var_4540_object = Obj(); var_4541_int = 0; var_4542_int = 0; var_4543_object = Obj(); var_4544_bool = 0; var_4545_cvector = CVector(0,0,0); var_4546_cvector = CVector(0,0,0); var_4547_string = ""; // 0x2177 PushV
	GetMainOutdoorScene(var_4540_object); // 0x2178 Func
	var_4548_object = GlobalVars[7]; // 0x217a PushGE
	size(var_4541_int); // 0x217b ObjFunc
	var_4542_int = 0; // 0x217d MovI
	
Label_8574:
	var_4549_bool = var_4542_int < var_4541_int; // 0x217e LT
	if(var_4549_bool == 0) goto Label_8614; // 0x217f JumpB
	var_4550_object = GlobalVars[7]; // 0x2180 PushGE
	get(var_4543_object, var_4542_int); // 0x2181 ObjFunc
	var_4551_object = var_4543_object; // 0x2183 Push
	if(var_4551_object == 0) goto Label_8582; // 0x2184 JumpB
	goto Label_8611; // 0x2185 Jump
	
Label_8611:
	var_4552_int = 1; // 0x21a3 PushI
	var_4542_int = var_4542_int + var_4552_int; // 0x21a4 Add2
	goto Label_8574; // 0x21a5 Jump
	
Label_8582:
	var_4553_string = "pt_grave_supply"; // 0x2186 PushS
	var_4554_int = 1; // 0x2187 PushI
	var_4555_int = var_4542_int + var_4554_int; // 0x2188 Add
	var_4556_int = var_4553_string + var_4555_int; // 0x2189 Add
	GetLocator(var_4556_int, var_4544_bool, var_4545_cvector, var_4546_cvector); // 0x218a ObjFunc
	var_4557_bool = var_4544_bool == 0; // 0x218c Not
	if(var_4557_bool == 0) goto Label_8594; // 0x218d JumpB
	var_4558_string = "Grave supply point not found"; // 0x218e PushS
	Trace(var_4558_string); // 0x218f Func
	goto Label_8611; // 0x2191 Jump
	
Label_8594:
	var_4559_int = 1; // 0x2192 PushI
	var_4560_int = 1; // 0x2193 PushI
	var_4561_string = "bread"; // 0x2194 PushS
	var_4562_string = "milk"; // 0x2195 PushS
	RandOneOf(var_4547_string, var_4559_int, var_4560_int, var_4561_string, var_4562_string); // 0x2196 Func
	var_4563_string = "scripted"; // 0x2198 PushS
	var_4564_string = "item_"; // 0x2199 PushS
	var_4565_int = var_4564_string + var_4547_string; // 0x219a Add
	var_4566_string = "_stat.xml"; // 0x219b PushS
	var_4567_int = var_4565_int + var_4566_string; // 0x219c Add
	AddStationaryActorByType(var_4543_object, var_4545_cvector, var_4546_cvector, var_4563_string, var_4567_int); // 0x219d ObjFunc
	var_4568_object = GlobalVars[7]; // 0x219f PushGE
	set(var_4542_int, var_4543_object); // 0x21a0 ObjFunc
	var_4543_object = 0; // 0x21a2 SetNull
	
Label_8614:
	return 16; // 0x21a6 Return
}


func_10621()
{
	var_4830_int = 0; var_4831_string = ""; // 0x297e PushV
	var_4831_string = "map_chertez_state"; // 0x297f MovS
	func_132(var_4830_int, var_4831_string); // 0x2980 NEW_2
	var_4832_int = 3; // 0x2982 PushI
	var_4833_bool = var_4830_int <= var_4832_int; // 0x2983 LE
	if(var_4833_bool == 0) goto Label_10637; // 0x2984 JumpB
	var_4834_string = "map_chertez_state"; // 0x2985 PushS
	var_4835_int = 3; // 0x2986 PushI
	SetVariable(var_4834_string, var_4835_int); // 0x2987 Func
	var_4836_string = "map_chertez_force"; // 0x2989 PushS
	var_4837_int = 1; // 0x298a PushI
	SetVariable(var_4836_string, var_4837_int); // 0x298b Func
	
Label_10637:
	return 0; // 0x298d Return
}


func_9597(var_4961_int, var_4962_float)
{
	var_4963_int = 0; var_4964_int = 0; var_4965_int = 0; var_4966_float = 0; // 0x257e PushV
	var_4964_int = 530560; // 0x257f MovI
	var_4965_int = 530559; // 0x2580 MovI
	var_4966_float = var_4962_float; // 0x2581 Mov
	func_11153(var_4963_int, var_4964_int, var_4965_int, var_4966_float); // 0x2582 NEW_2
	var_4961_int = var_4963_int; // 0x2583 Mov
	return 0; // 0x2585 Return
}


func_6527(var_1669_int, var_1670_int, var_1671_object, var_1672_object, var_1673_object, var_1674_object)
{
	var_1675_int = 0; // 0x1980 PushI
	var_1676_bool = var_1670_int == var_1675_int; // 0x1981 Eq
	if(var_1676_bool == 0) goto Label_6567; // 0x1982 JumpB
	var_1677_int = 0; var_1678_bool = 0; // 0x1983 PushV
	var_1677_int = 11; // 0x1984 MovI
	var_1678_bool = 0; // 0x1985 MovB
	func_796(var_1677_int, var_1678_bool); // 0x1986 NEW_2
	var_1679_int = 0; var_1680_bool = 0; var_1681_int = 0; // 0x1988 PushV
	var_1679_int = 11; // 0x1989 MovI
	var_1680_bool = 0; // 0x198a MovB
	var_1681_int = 1; // 0x198b MovI
	func_813(var_1679_int, var_1680_bool, var_1681_int); // 0x198c NEW_2
	var_1682_int = 0; var_1683_int = 0; var_1684_object = Obj(); var_1685_object = Obj(); var_1686_object = Obj(); // 0x198e PushV
	var_1682_int = 11; // 0x198f MovI
	var_1683_int = var_1669_int; // 0x1990 Mov
	var_1684_object = var_1671_object; // 0x1991 Mov
	var_1685_object = var_1672_object; // 0x1992 Mov
	var_1686_object = var_1673_object; // 0x1993 Mov
	func_622(var_1683_int, var_1684_object, var_1685_object, var_1686_object); // 0x1994 NEW_2
	var_1687_object = Obj(); var_1688_int = 0; // 0x1996 PushV
	var_1687_object = var_1674_object; // 0x1997 Mov
	var_1688_int = 0; // 0x1998 MovI
	func_305(var_1688_int); // 0x1999 NEW_2
	var_1689_int = 0; var_1690_bool = 0; var_1691_int = 0; // 0x199b PushV
	var_1689_int = 11; // 0x199c MovI
	var_1690_bool = 0; // 0x199d MovB
	var_1691_int = 5; // 0x199e MovI
	func_870(var_1689_int, var_1690_bool, var_1691_int); // 0x199f NEW_2
	var_1692_int = 0; var_1693_bool = 0; var_1694_int = 0; // 0x19a1 PushV
	var_1692_int = 11; // 0x19a2 MovI
	var_1693_bool = 0; // 0x19a3 MovB
	var_1694_int = 5; // 0x19a4 MovI
	func_932(var_1692_int, var_1693_bool, var_1694_int); // 0x19a5 NEW_2
	
Label_6567:
	var_1695_int = 0; var_1696_int = 0; // 0x19a7 PushV
	var_1695_int = 11; // 0x19a8 MovI
	var_1696_int = var_1670_int; // 0x19a9 Mov
	func_983(var_1695_int, var_1696_int); // 0x19aa NEW_2
	var_1697_int = 0; var_1698_int = 0; var_1699_int = 0; // 0x19ac PushV
	var_1697_int = 11; // 0x19ad MovI
	var_1698_int = var_1669_int; // 0x19ae Mov
	var_1699_int = var_1670_int; // 0x19af Mov
	func_1624(var_1697_int, var_1698_int, var_1699_int); // 0x19b0 NEW_2
	return 0; // 0x19b2 Return
}


func_9606(var_4950_int, var_4951_float)
{
	var_4952_int = 0; var_4953_int = 0; var_4954_int = 0; var_4955_float = 0; // 0x2587 PushV
	var_4953_int = 530562; // 0x2588 MovI
	var_4954_int = 530561; // 0x2589 MovI
	var_4955_float = var_4951_float; // 0x258a Mov
	func_11153(var_4952_int, var_4953_int, var_4954_int, var_4955_float); // 0x258b NEW_2
	var_4950_int = var_4952_int; // 0x258c Mov
	return 0; // 0x258e Return
}


func_4491(var_3185_int, var_3186_int, var_3187_object, var_3188_object, var_3189_object, var_3190_object)
{
	var_3191_int = 0; // 0x118c PushI
	var_3192_bool = var_3186_int == var_3191_int; // 0x118d Eq
	if(var_3192_bool == 0) goto Label_4531; // 0x118e JumpB
	var_3193_int = 0; var_3194_bool = 0; // 0x118f PushV
	var_3193_int = 0; // 0x1190 MovI
	var_3194_bool = 0; // 0x1191 MovB
	func_796(var_3193_int, var_3194_bool); // 0x1192 NEW_2
	var_3195_int = 0; var_3196_bool = 0; var_3197_int = 0; // 0x1194 PushV
	var_3195_int = 0; // 0x1195 MovI
	var_3196_bool = 0; // 0x1196 MovB
	var_3197_int = 1; // 0x1197 MovI
	func_813(var_3195_int, var_3196_bool, var_3197_int); // 0x1198 NEW_2
	var_3198_int = 0; var_3199_int = 0; var_3200_object = Obj(); var_3201_object = Obj(); var_3202_object = Obj(); // 0x119a PushV
	var_3198_int = 0; // 0x119b MovI
	var_3199_int = var_3185_int; // 0x119c Mov
	var_3200_object = var_3187_object; // 0x119d Mov
	var_3201_object = var_3188_object; // 0x119e Mov
	var_3202_object = var_3189_object; // 0x119f Mov
	func_720(var_3198_int, var_3199_int, var_3200_object, var_3201_object, var_3202_object); // 0x11a0 NEW_2
	var_3237_object = Obj(); var_3238_int = 0; // 0x11a2 PushV
	var_3237_object = var_3190_object; // 0x11a3 Mov
	var_3238_int = 2; // 0x11a4 MovI
	func_305(var_3238_int); // 0x11a5 NEW_2
	var_3239_int = 0; var_3240_bool = 0; var_3241_int = 0; // 0x11a7 PushV
	var_3239_int = 0; // 0x11a8 MovI
	var_3240_bool = 0; // 0x11a9 MovB
	var_3241_int = 4; // 0x11aa MovI
	func_870(var_3239_int, var_3240_bool, var_3241_int); // 0x11ab NEW_2
	var_3242_int = 0; var_3243_bool = 0; var_3244_int = 0; // 0x11ad PushV
	var_3242_int = 0; // 0x11ae MovI
	var_3243_bool = 1; // 0x11af MovB
	var_3244_int = 4; // 0x11b0 MovI
	func_932(var_3242_int, var_3243_bool, var_3244_int); // 0x11b1 NEW_2
	
Label_4531:
	var_3245_int = 0; var_3246_bool = 0; // 0x11b3 PushV
	var_3245_int = 0; // 0x11b4 MovI
	var_3246_bool = 0; // 0x11b5 MovB
	func_779(var_3245_int, var_3246_bool); // 0x11b6 NEW_2
	var_3247_int = 0; var_3248_int = 0; var_3249_int = 0; // 0x11b8 PushV
	var_3247_int = 0; // 0x11b9 MovI
	var_3248_int = var_3185_int; // 0x11ba Mov
	var_3249_int = var_3186_int; // 0x11bb Mov
	func_4035(var_3247_int, var_3248_int, var_3249_int); // 0x11bc NEW_2
	return 0; // 0x11be Return
}


func_10638()
{
	var_4786_int = 0; var_4787_string = ""; // 0x298f PushV
	var_4787_string = "map_chertez_state"; // 0x2990 MovS
	func_132(var_4786_int, var_4787_string); // 0x2991 NEW_2
	var_4790_int = 4; // 0x2993 PushI
	var_4791_bool = var_4786_int <= var_4790_int; // 0x2994 LE
	if(var_4791_bool == 0) goto Label_10654; // 0x2995 JumpB
	var_4792_string = "map_chertez_state"; // 0x2996 PushS
	var_4793_int = 4; // 0x2997 PushI
	SetVariable(var_4792_string, var_4793_int); // 0x2998 Func
	var_4794_string = "map_chertez_force"; // 0x299a PushS
	var_4795_int = 1; // 0x299b PushI
	SetVariable(var_4794_string, var_4795_int); // 0x299c Func
	
Label_10654:
	return 0; // 0x299e Return
}


func_3471(var_4156_int, var_4157_int, var_4158_int)
{
	var_4159_int = 0; var_4160_int = 0; var_4161_int = 0; var_4162_int = 0; var_4163_int = 0; var_4164_int = 0; var_4165_int = 0; var_4166_int = 0; // 0xd8f PushV
	var_4167_bool = 0; // 0xd90 PushV
	var_4167_bool = 0; // 0xd91 MovB
	var_4168_int = 8; // 0xd92 PushI
	var_4169_bool = var_4158_int > var_4168_int; // 0xd93 GT
	if(var_4169_bool == 0) goto Label_3481; // 0xd94 JumpB
	var_4170_int = 21; // 0xd95 PushI
	var_4171_bool = var_4158_int < var_4170_int; // 0xd96 LT
	if(var_4171_bool == 0) goto Label_3481; // 0xd97 JumpB
	var_4167_bool = 1; // 0xd98 MovB
	
Label_3481:
	if(var_4167_bool == 0) goto Label_3558; // 0xd99 JumpB
	var_4172_int = 0; var_4173_string = ""; var_4174_string = ""; var_4175_int = 0; // 0xd9a PushV
	var_4172_int = var_4156_int; // 0xd9b Mov
	var_4173_string = "pers_rat"; // 0xd9c MovS
	var_4174_string = "rat.xml"; // 0xd9d MovS
	var_4175_int = 3; // 0xd9e MovI
	func_503(var_4172_int, var_4173_string, var_4174_string, var_4175_int); // 0xd9f NEW_2
	var_4176_int = 0; var_4177_string = ""; var_4178_string = ""; var_4179_int = 0; // 0xda1 PushV
	var_4176_int = var_4156_int; // 0xda2 Mov
	var_4177_string = "pers_alkash"; // 0xda3 MovS
	var_4178_string = "alkash.xml"; // 0xda4 MovS
	var_4179_int = 2; // 0xda5 MovI
	func_503(var_4176_int, var_4177_string, var_4178_string, var_4179_int); // 0xda6 NEW_2
	var_4180_int = 0; var_4181_string = ""; var_4182_string = ""; var_4183_int = 0; // 0xda8 PushV
	var_4180_int = var_4156_int; // 0xda9 Mov
	var_4181_string = "pers_dohodyaga"; // 0xdaa MovS
	var_4182_string = "dohodyaga.xml"; // 0xdab MovS
	var_4183_int = 1; // 0xdac MovI
	func_503(var_4180_int, var_4181_string, var_4182_string, var_4183_int); // 0xdad NEW_2
	var_4184_int = 2; // 0xdaf PushI
	var_4185_float = 0; var_4186_int = 0; // 0xdb0 PushV
	var_4186_int = var_4157_int; // 0xdb1 Mov
	func_1165(var_4185_float, var_4186_int); // 0xdb2 NEW_2
	var_4163_int = var_4184_int * var_4185_float; // 0xdb4 Mult2
	var_4187_int = var_4163_int; // 0xdb5 Push
	if(var_4187_int == 0) goto Label_3518; // 0xdb6 JumpB
	var_4188_int = 0; var_4189_string = ""; var_4190_string = ""; var_4191_int = 0; // 0xdb7 PushV
	var_4188_int = var_4156_int; // 0xdb8 Mov
	var_4189_string = "pers_grabitel"; // 0xdb9 MovS
	var_4190_string = "grabitel.xml"; // 0xdba MovS
	var_4191_int = var_4163_int; // 0xdbb Mov
	func_503(var_4188_int, var_4189_string, var_4190_string, var_4191_int); // 0xdbc NEW_2
	
Label_3518:
	var_4192_int = 1; // 0xdbe PushI
	var_4193_int = var_4157_int + var_4192_int; // 0xdbf Add
	var_4194_int = 2; // 0xdc0 PushI
	var_4195_bool = var_4193_int >= var_4194_int; // 0xdc1 GE
	if(var_4195_bool == 0) goto Label_3542; // 0xdc2 JumpB
	var_4196_int = 0; var_4197_string = ""; var_4198_string = ""; var_4199_int = 0; // 0xdc3 PushV
	var_4196_int = var_4156_int; // 0xdc4 Mov
	var_4197_string = "pers_patrool"; // 0xdc5 MovS
	var_4198_string = "patrol.xml"; // 0xdc6 MovS
	var_4199_int = 2; // 0xdc7 MovI
	func_503(var_4196_int, var_4197_string, var_4198_string, var_4199_int); // 0xdc8 NEW_2
	var_4200_bool = 0; var_4201_int = 0; // 0xdca PushV
	var_4201_int = var_4157_int; // 0xdcb Mov
	func_1372(var_4200_bool, var_4201_int); // 0xdcc NEW_2
	if(var_4200_bool == 0) goto Label_3542; // 0xdce JumpB
	var_4202_int = 0; var_4203_string = ""; var_4204_string = ""; var_4205_int = 0; // 0xdcf PushV
	var_4202_int = var_4156_int; // 0xdd0 Mov
	var_4203_string = "pers_soldat_hand"; // 0xdd1 MovS
	var_4204_string = "soldier_patrol.xml"; // 0xdd2 MovS
	var_4205_int = 1; // 0xdd3 MovI
	func_503(var_4202_int, var_4203_string, var_4204_string, var_4205_int); // 0xdd4 NEW_2
	
Label_3542:
	var_4206_int = 1; // 0xdd6 PushI
	var_4207_float = 0; var_4208_int = 0; // 0xdd7 PushV
	var_4208_int = var_4157_int; // 0xdd8 Mov
	func_1255(var_4207_float, var_4208_int); // 0xdd9 NEW_2
	var_4164_int = var_4206_int * var_4207_float; // 0xddb Mult2
	var_4209_int = var_4164_int; // 0xddc Push
	if(var_4209_int == 0) goto Label_3557; // 0xddd JumpB
	var_4210_int = 0; var_4211_string = ""; var_4212_string = ""; var_4213_int = 0; // 0xdde PushV
	var_4210_int = var_4156_int; // 0xddf Mov
	var_4211_string = "pers_bomber"; // 0xde0 MovS
	var_4212_string = "bomber.xml"; // 0xde1 MovS
	var_4213_int = var_4164_int; // 0xde2 Mov
	func_503(var_4210_int, var_4211_string, var_4212_string, var_4213_int); // 0xde3 NEW_2
	
Label_3557:
	goto Label_3633; // 0xde5 Jump
	
Label_3633:
	var_4214_bool = 0; var_4215_int = 0; var_4216_int = 0; // 0xe31 PushV
	var_4215_int = var_4157_int; // 0xe32 Mov
	var_4216_int = var_4158_int; // 0xe33 Mov
	func_1345(var_4214_bool, var_4215_int, var_4216_int); // 0xe34 NEW_2
	if(var_4214_bool == 0) goto Label_3646; // 0xe36 JumpB
	var_4217_int = 0; var_4218_string = ""; var_4219_string = ""; var_4220_int = 0; // 0xe37 PushV
	var_4217_int = var_4156_int; // 0xe38 Mov
	var_4218_string = "pers_soldat"; // 0xe39 MovS
	var_4219_string = "soldier_marauder.xml"; // 0xe3a MovS
	var_4220_int = 2; // 0xe3b MovI
	func_503(var_4217_int, var_4218_string, var_4219_string, var_4220_int); // 0xe3c NEW_2
	
Label_3646:
	var_4221_bool = 0; var_4222_int = 0; // 0xe3e PushV
	var_4222_int = var_4157_int; // 0xe3f Mov
	func_1372(var_4221_bool, var_4222_int); // 0xe40 NEW_2
	if(var_4221_bool == 0) goto Label_3658; // 0xe42 JumpB
	var_4223_int = 0; var_4224_string = ""; var_4225_string = ""; var_4226_int = 0; // 0xe43 PushV
	var_4223_int = var_4156_int; // 0xe44 Mov
	var_4224_string = "pers_sanitar"; // 0xe45 MovS
	var_4225_string = "sanitar.xml"; // 0xe46 MovS
	var_4226_int = 1; // 0xe47 MovI
	func_503(var_4223_int, var_4224_string, var_4225_string, var_4226_int); // 0xe48 NEW_2
	
Label_3658:
	return 8; // 0xe4a Return
	
Label_3558:
	var_4227_int = 0; var_4228_string = ""; var_4229_string = ""; var_4230_int = 0; // 0xde6 PushV
	var_4227_int = var_4156_int; // 0xde7 Mov
	var_4228_string = "pers_rat"; // 0xde8 MovS
	var_4229_string = "rat.xml"; // 0xde9 MovS
	var_4230_int = 5; // 0xdea MovI
	func_503(var_4227_int, var_4228_string, var_4229_string, var_4230_int); // 0xdeb NEW_2
	var_4231_int = 0; var_4232_string = ""; var_4233_string = ""; var_4234_int = 0; // 0xded PushV
	var_4231_int = var_4156_int; // 0xdee Mov
	var_4232_string = "pers_alkash"; // 0xdef MovS
	var_4233_string = "alkash.xml"; // 0xdf0 MovS
	var_4234_int = 1; // 0xdf1 MovI
	func_503(var_4231_int, var_4232_string, var_4233_string, var_4234_int); // 0xdf2 NEW_2
	var_4235_int = 1; // 0xdf4 PushI
	var_4236_int = var_4157_int + var_4235_int; // 0xdf5 Add
	var_4237_int = 2; // 0xdf6 PushI
	var_4238_bool = var_4236_int >= var_4237_int; // 0xdf7 GE
	if(var_4238_bool == 0) goto Label_3596; // 0xdf8 JumpB
	var_4239_int = 0; var_4240_string = ""; var_4241_string = ""; var_4242_int = 0; // 0xdf9 PushV
	var_4239_int = var_4156_int; // 0xdfa Mov
	var_4240_string = "pers_patrool"; // 0xdfb MovS
	var_4241_string = "patrol.xml"; // 0xdfc MovS
	var_4242_int = 1; // 0xdfd MovI
	func_503(var_4239_int, var_4240_string, var_4241_string, var_4242_int); // 0xdfe NEW_2
	var_4243_bool = 0; var_4244_int = 0; // 0xe00 PushV
	var_4244_int = var_4157_int; // 0xe01 Mov
	func_1372(var_4243_bool, var_4244_int); // 0xe02 NEW_2
	if(var_4243_bool == 0) goto Label_3596; // 0xe04 JumpB
	var_4245_int = 0; var_4246_string = ""; var_4247_string = ""; var_4248_int = 0; // 0xe05 PushV
	var_4245_int = var_4156_int; // 0xe06 Mov
	var_4246_string = "pers_soldat_hand"; // 0xe07 MovS
	var_4247_string = "soldier_patrol.xml"; // 0xe08 MovS
	var_4248_int = 1; // 0xe09 MovI
	func_503(var_4245_int, var_4246_string, var_4247_string, var_4248_int); // 0xe0a NEW_2
	
Label_3596:
	var_4249_int = 0; var_4250_string = ""; var_4251_string = ""; var_4252_int = 0; // 0xe0c PushV
	var_4249_int = var_4156_int; // 0xe0d Mov
	var_4250_string = "pers_rat"; // 0xe0e MovS
	var_4251_string = "rat.xml"; // 0xe0f MovS
	var_4252_int = 2; // 0xe10 MovI
	func_503(var_4249_int, var_4250_string, var_4251_string, var_4252_int); // 0xe11 NEW_2
	var_4253_int = 3; // 0xe13 PushI
	var_4254_float = 0; var_4255_int = 0; // 0xe14 PushV
	var_4255_int = var_4157_int; // 0xe15 Mov
	func_1165(var_4254_float, var_4255_int); // 0xe16 NEW_2
	var_4165_int = var_4253_int * var_4254_float; // 0xe18 Mult2
	var_4256_int = var_4165_int; // 0xe19 Push
	if(var_4256_int == 0) goto Label_3618; // 0xe1a JumpB
	var_4257_int = 0; var_4258_string = ""; var_4259_string = ""; var_4260_int = 0; // 0xe1b PushV
	var_4257_int = var_4156_int; // 0xe1c Mov
	var_4258_string = "pers_grabitel"; // 0xe1d MovS
	var_4259_string = "grabitel.xml"; // 0xe1e MovS
	var_4260_int = var_4165_int; // 0xe1f Mov
	func_503(var_4257_int, var_4258_string, var_4259_string, var_4260_int); // 0xe20 NEW_2
	
Label_3618:
	var_4261_int = 1; // 0xe22 PushI
	var_4262_float = 0; var_4263_int = 0; // 0xe23 PushV
	var_4263_int = var_4157_int; // 0xe24 Mov
	func_1255(var_4262_float, var_4263_int); // 0xe25 NEW_2
	var_4166_int = var_4261_int * var_4262_float; // 0xe27 Mult2
	var_4264_int = var_4166_int; // 0xe28 Push
	if(var_4264_int == 0) goto Label_3633; // 0xe29 JumpB
	var_4265_int = 0; var_4266_string = ""; var_4267_string = ""; var_4268_int = 0; // 0xe2a PushV
	var_4265_int = var_4156_int; // 0xe2b Mov
	var_4266_string = "pers_bomber"; // 0xe2c MovS
	var_4267_string = "bomber.xml"; // 0xe2d MovS
	var_4268_int = var_4166_int; // 0xe2e Mov
	func_503(var_4265_int, var_4266_string, var_4267_string, var_4268_int); // 0xe2f NEW_2
}


func_400(var_491_bool, var_492_int)
{
	var_493_int = 0; var_494_int = 0; // 0x190 PushV
	var_495_string = ""; var_496_int = 0; // 0x191 PushV
	var_496_int = var_492_int; // 0x192 Mov
	func_299(var_495_string, var_496_int); // 0x193 NEW_2
	GetVariable(var_495_string, var_494_int); // 0x195 Func
	var_497_int = 3; // 0x197 PushI
	var_498_int = var_494_int & var_497_int; // 0x198 And
	var_499_int = 0; // 0x199 PushI
	var_491_bool = var_498_int == var_499_int; // 0x19a Eq2
	return 2; // 0x19b Return
}


func_9615(var_4917_int, var_4918_float)
{
	var_4919_int = 0; var_4920_int = 0; var_4921_int = 0; var_4922_float = 0; // 0x2590 PushV
	var_4920_int = 530564; // 0x2591 MovI
	var_4921_int = 530563; // 0x2592 MovI
	var_4922_float = var_4918_float; // 0x2593 Mov
	func_11153(var_4919_int, var_4920_int, var_4921_int, var_4922_float); // 0x2594 NEW_2
	var_4917_int = var_4919_int; // 0x2595 Mov
	return 0; // 0x2597 Return
}


func_12693(var_245_bool, var_246_int)
{
	var_247_int = 0; var_248_int = 0; // 0x3195 PushV
	var_249_string = "K2SystemSvitaRemoved"; // 0x3196 PushS
	var_250_int = var_249_string + var_246_int; // 0x3197 Add
	GetVariable(var_250_int, var_248_int); // 0x3198 Func
	var_251_int = 0; // 0x319a PushI
	var_245_bool = var_248_int != var_251_int; // 0x319b Neq2
	return 2; // 0x319c Return
}


func_9624(var_4906_int, var_4907_float)
{
	var_4908_int = 0; var_4909_int = 0; var_4910_int = 0; var_4911_float = 0; // 0x2599 PushV
	var_4909_int = 530566; // 0x259a MovI
	var_4910_int = 530565; // 0x259b MovI
	var_4911_float = var_4907_float; // 0x259c Mov
	func_11153(var_4908_int, var_4909_int, var_4910_int, var_4911_float); // 0x259d NEW_2
	var_4906_int = var_4908_int; // 0x259e Mov
	return 0; // 0x25a0 Return
}


func_5532(var_2618_int, var_2619_int, var_2620_object, var_2621_object, var_2622_object, var_2623_object)
{
	var_2624_int = 0; // 0x159d PushI
	var_2625_bool = var_2619_int == var_2624_int; // 0x159e Eq
	if(var_2625_bool == 0) goto Label_5572; // 0x159f JumpB
	var_2626_int = 0; var_2627_bool = 0; // 0x15a0 PushV
	var_2626_int = 5; // 0x15a1 MovI
	var_2627_bool = 1; // 0x15a2 MovB
	func_796(var_2626_int, var_2627_bool); // 0x15a3 NEW_2
	var_2628_int = 0; var_2629_bool = 0; var_2630_int = 0; // 0x15a5 PushV
	var_2628_int = 5; // 0x15a6 MovI
	var_2629_bool = 1; // 0x15a7 MovB
	var_2630_int = 1; // 0x15a8 MovI
	func_813(var_2628_int, var_2629_bool, var_2630_int); // 0x15a9 NEW_2
	var_2631_int = 0; var_2632_int = 0; var_2633_object = Obj(); var_2634_object = Obj(); var_2635_object = Obj(); // 0x15ab PushV
	var_2631_int = 5; // 0x15ac MovI
	var_2632_int = var_2618_int; // 0x15ad Mov
	var_2633_object = var_2620_object; // 0x15ae Mov
	var_2634_object = var_2621_object; // 0x15af Mov
	var_2635_object = var_2622_object; // 0x15b0 Mov
	func_641(var_2631_int, var_2632_int, var_2633_object, var_2634_object, var_2635_object); // 0x15b1 NEW_2
	var_2636_object = Obj(); var_2637_int = 0; // 0x15b3 PushV
	var_2636_object = var_2623_object; // 0x15b4 Mov
	var_2637_int = 1; // 0x15b5 MovI
	func_305(var_2637_int); // 0x15b6 NEW_2
	var_2638_int = 0; var_2639_bool = 0; var_2640_int = 0; // 0x15b8 PushV
	var_2638_int = 5; // 0x15b9 MovI
	var_2639_bool = 1; // 0x15ba MovB
	var_2640_int = 4; // 0x15bb MovI
	func_870(var_2638_int, var_2639_bool, var_2640_int); // 0x15bc NEW_2
	var_2641_int = 0; var_2642_bool = 0; var_2643_int = 0; // 0x15be PushV
	var_2641_int = 5; // 0x15bf MovI
	var_2642_bool = 0; // 0x15c0 MovB
	var_2643_int = 4; // 0x15c1 MovI
	func_932(var_2641_int, var_2642_bool, var_2643_int); // 0x15c2 NEW_2
	
Label_5572:
	var_2644_int = 0; var_2645_bool = 0; // 0x15c4 PushV
	var_2644_int = 5; // 0x15c5 MovI
	var_2645_bool = 0; // 0x15c6 MovB
	func_779(var_2644_int, var_2645_bool); // 0x15c7 NEW_2
	var_2646_int = 0; var_2647_int = 0; var_2648_int = 0; // 0x15c9 PushV
	var_2646_int = 5; // 0x15ca MovI
	var_2647_int = var_2618_int; // 0x15cb Mov
	var_2648_int = var_2619_int; // 0x15cc Mov
	func_2944(var_2646_int, var_2647_int, var_2648_int); // 0x15cd NEW_2
	return 0; // 0x15cf Return
}


func_12701(var_178_int, var_179_int)
{
	var_180_int = 6; // 0x319e PushI
	var_181_bool = var_179_int == var_180_int; // 0x319f Eq
	if(var_181_bool == 0) goto Label_12708; // 0x31a0 JumpB
	var_178_int = 4; // 0x31a1 MovI
	return 0; // 0x31a2 Return
	
Label_12708:
	var_182_int = 7; // 0x31a4 PushI
	var_183_bool = var_179_int == var_182_int; // 0x31a5 Eq
	if(var_183_bool == 0) goto Label_12714; // 0x31a6 JumpB
	var_178_int = 3; // 0x31a7 MovI
	return 0; // 0x31a8 Return
	
Label_12714:
	var_184_int = 8; // 0x31aa PushI
	var_185_bool = var_179_int == var_184_int; // 0x31ab Eq
	if(var_185_bool == 0) goto Label_12720; // 0x31ac JumpB
	var_178_int = 12; // 0x31ad MovI
	return 0; // 0x31ae Return
	
Label_12720:
	var_186_int = 9; // 0x31b0 PushI
	var_187_bool = var_179_int == var_186_int; // 0x31b1 Eq
	if(var_187_bool == 0) goto Label_12726; // 0x31b2 JumpB
	var_178_int = 5; // 0x31b3 MovI
	return 0; // 0x31b4 Return
	
Label_12726:
	var_188_int = 10; // 0x31b6 PushI
	var_189_bool = var_179_int == var_188_int; // 0x31b7 Eq
	if(var_189_bool == 0) goto Label_12732; // 0x31b8 JumpB
	var_178_int = 9; // 0x31b9 MovI
	return 0; // 0x31ba Return
	
Label_12732:
	var_190_int = 11; // 0x31bc PushI
	var_191_bool = var_179_int == var_190_int; // 0x31bd Eq
	if(var_191_bool == 0) goto Label_12737; // 0x31be JumpB
	var_178_int = 13; // 0x31bf MovI
	return 0; // 0x31c0 Return
	
Label_12737:
	var_178_int = -1; // 0x31c1 MovI
	return 0; // 0x31c2 Return
}


func_412(var_95_int)
{
	var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; // 0x19c PushV
	var_100_string = ""; var_101_int = 0; // 0x19d PushV
	var_101_int = var_95_int; // 0x19e Mov
	func_299(var_100_string, var_101_int); // 0x19f NEW_2
	GetVariable(var_100_string, var_98_int); // 0x1a1 Func
	var_102_int = 252; // 0x1a3 PushI
	var_103_int = var_98_int & var_102_int; // 0x1a4 And
	var_104_int = 0; // 0x1a5 PushI
	var_99_int = var_103_int | var_104_int; // 0x1a6 Or2
	var_105_string = ""; var_106_int = 0; // 0x1a7 PushV
	var_106_int = var_95_int; // 0x1a8 Mov
	func_299(var_105_string, var_106_int); // 0x1a9 NEW_2
	SetVariable(var_105_string, var_99_int); // 0x1ab Func
	return 4; // 0x1ad Return
}


func_10655()
{
	var_4802_int = 0; var_4803_string = ""; // 0x29a0 PushV
	var_4803_string = "map_chertez_state"; // 0x29a1 MovS
	func_132(var_4802_int, var_4803_string); // 0x29a2 NEW_2
	var_4804_int = 5; // 0x29a4 PushI
	var_4805_bool = var_4802_int <= var_4804_int; // 0x29a5 LE
	if(var_4805_bool == 0) goto Label_10671; // 0x29a6 JumpB
	var_4806_string = "map_chertez_state"; // 0x29a7 PushS
	var_4807_int = 5; // 0x29a8 PushI
	SetVariable(var_4806_string, var_4807_int); // 0x29a9 Func
	var_4808_string = "map_chertez_force"; // 0x29ab PushS
	var_4809_int = 1; // 0x29ac PushI
	SetVariable(var_4808_string, var_4809_int); // 0x29ad Func
	
Label_10671:
	return 0; // 0x29af Return
}


func_9633(var_4771_int, var_4772_float)
{
	var_4773_int = 0; var_4774_int = 0; var_4775_int = 0; var_4776_float = 0; // 0x25a2 PushV
	var_4774_int = 530568; // 0x25a3 MovI
	var_4775_int = 530567; // 0x25a4 MovI
	var_4776_float = var_4772_float; // 0x25a5 Mov
	func_11153(var_4773_int, var_4774_int, var_4775_int, var_4776_float); // 0x25a6 NEW_2
	var_4771_int = var_4773_int; // 0x25a7 Mov
	return 0; // 0x25a9 Return
}


func_8616()
{
	var_4544_object = Obj(); var_4545_object = Obj(); var_4546_object = Obj(); var_4547_object = Obj(); // 0x21a8 PushV
	GetMainOutdoorScene(var_4546_object); // 0x21a9 Func
	var_4548_string = "big_gun"; // 0x21ab PushS
	var_4549_string = "big_gun.bin"; // 0x21ac PushS
	var_4550_cvector = CVector(0.0, 0.0, 0.0); // 0x21ad PushVec
	AddScriptedActor(var_4547_object, var_4548_string, var_4549_string, var_4546_object, var_4550_cvector); // 0x21ae Func
	var_4551_string = "vagon_martira"; // 0x21b0 PushS
	var_4552_string = "big_gun.bin"; // 0x21b1 PushS
	var_4553_cvector = CVector(0.0, 0.0, 0.0); // 0x21b2 PushVec
	AddScriptedActor(var_4547_object, var_4551_string, var_4552_string, var_4546_object, var_4553_cvector); // 0x21b3 Func
	var_4554_string = "d9q01_trigger_wagon"; // 0x21b5 PushS
	var_4555_string = "quest_d9_01_wagon.bin"; // 0x21b6 PushS
	var_4556_cvector = CVector(0.0, 0.0, 0.0); // 0x21b7 PushVec
	AddScriptedActor(var_4547_object, var_4554_string, var_4555_string, var_4546_object, var_4556_cvector); // 0x21b8 Func
	return 4; // 0x21ba Return
}


func_9642(var_5249_int, var_5250_float)
{
	var_5251_int = 0; var_5252_int = 0; var_5253_int = 0; var_5254_float = 0; // 0x25ab PushV
	var_5252_int = 530570; // 0x25ac MovI
	var_5253_int = 530569; // 0x25ad MovI
	var_5254_float = var_5250_float; // 0x25ae Mov
	func_11153(var_5251_int, var_5252_int, var_5253_int, var_5254_float); // 0x25af NEW_2
	var_5249_int = var_5251_int; // 0x25b0 Mov
	return 0; // 0x25b2 Return
}


func_430(var_1978_bool, var_1979_int)
{
	var_1980_int = 0; var_1981_int = 0; // 0x1ae PushV
	var_1982_string = ""; var_1983_int = 0; // 0x1af PushV
	var_1983_int = var_1979_int; // 0x1b0 Mov
	func_299(var_1982_string, var_1983_int); // 0x1b1 NEW_2
	GetVariable(var_1982_string, var_1981_int); // 0x1b3 Func
	var_1984_int = 3; // 0x1b5 PushI
	var_1985_int = var_1981_int & var_1984_int; // 0x1b6 And
	var_1986_int = 1; // 0x1b7 PushI
	var_1978_bool = var_1985_int == var_1986_int; // 0x1b8 Eq2
	return 2; // 0x1b9 Return
}


func_10672()
{
	var_4844_int = 0; var_4845_string = ""; // 0x29b1 PushV
	var_4845_string = "map_chertez_state"; // 0x29b2 MovS
	func_132(var_4844_int, var_4845_string); // 0x29b3 NEW_2
	var_4846_int = 6; // 0x29b5 PushI
	var_4847_bool = var_4844_int <= var_4846_int; // 0x29b6 LE
	if(var_4847_bool == 0) goto Label_10688; // 0x29b7 JumpB
	var_4848_string = "map_chertez_state"; // 0x29b8 PushS
	var_4849_int = 6; // 0x29b9 PushI
	SetVariable(var_4848_string, var_4849_int); // 0x29ba Func
	var_4850_string = "map_chertez_force"; // 0x29bc PushS
	var_4851_int = 1; // 0x29bd PushI
	SetVariable(var_4850_string, var_4851_int); // 0x29be Func
	
Label_10688:
	return 0; // 0x29c0 Return
}


func_6579(var_2899_int, var_2900_int, var_2901_object, var_2902_object, var_2903_object, var_2904_object)
{
	var_2905_int = 0; // 0x19b4 PushI
	var_2906_bool = var_2900_int == var_2905_int; // 0x19b5 Eq
	if(var_2906_bool == 0) goto Label_6619; // 0x19b6 JumpB
	var_2907_int = 0; var_2908_bool = 0; // 0x19b7 PushV
	var_2907_int = 11; // 0x19b8 MovI
	var_2908_bool = 0; // 0x19b9 MovB
	func_796(var_2907_int, var_2908_bool); // 0x19ba NEW_2
	var_2909_int = 0; var_2910_bool = 0; var_2911_int = 0; // 0x19bc PushV
	var_2909_int = 11; // 0x19bd MovI
	var_2910_bool = 1; // 0x19be MovB
	var_2911_int = 1; // 0x19bf MovI
	func_813(var_2909_int, var_2910_bool, var_2911_int); // 0x19c0 NEW_2
	var_2912_int = 0; var_2913_int = 0; var_2914_object = Obj(); var_2915_object = Obj(); var_2916_object = Obj(); // 0x19c2 PushV
	var_2912_int = 11; // 0x19c3 MovI
	var_2913_int = var_2899_int; // 0x19c4 Mov
	var_2914_object = var_2901_object; // 0x19c5 Mov
	var_2915_object = var_2902_object; // 0x19c6 Mov
	var_2916_object = var_2903_object; // 0x19c7 Mov
	func_641(var_2912_int, var_2913_int, var_2914_object, var_2915_object, var_2916_object); // 0x19c8 NEW_2
	var_2917_object = Obj(); var_2918_int = 0; // 0x19ca PushV
	var_2917_object = var_2904_object; // 0x19cb Mov
	var_2918_int = 1; // 0x19cc MovI
	func_305(var_2918_int); // 0x19cd NEW_2
	var_2919_int = 0; var_2920_bool = 0; var_2921_int = 0; // 0x19cf PushV
	var_2919_int = 11; // 0x19d0 MovI
	var_2920_bool = 1; // 0x19d1 MovB
	var_2921_int = 5; // 0x19d2 MovI
	func_870(var_2919_int, var_2920_bool, var_2921_int); // 0x19d3 NEW_2
	var_2922_int = 0; var_2923_bool = 0; var_2924_int = 0; // 0x19d5 PushV
	var_2922_int = 11; // 0x19d6 MovI
	var_2923_bool = 0; // 0x19d7 MovB
	var_2924_int = 5; // 0x19d8 MovI
	func_932(var_2922_int, var_2923_bool, var_2924_int); // 0x19d9 NEW_2
	
Label_6619:
	var_2925_int = 0; var_2926_bool = 0; // 0x19db PushV
	var_2925_int = 11; // 0x19dc MovI
	var_2926_bool = 0; // 0x19dd MovB
	func_779(var_2925_int, var_2926_bool); // 0x19de NEW_2
	var_2927_int = 0; var_2928_int = 0; var_2929_int = 0; // 0x19e0 PushV
	var_2927_int = 11; // 0x19e1 MovI
	var_2928_int = var_2899_int; // 0x19e2 Mov
	var_2929_int = var_2900_int; // 0x19e3 Mov
	func_2764(var_2927_int, var_2928_int, var_2929_int); // 0x19e4 NEW_2
	return 0; // 0x19e6 Return
}


func_9651(var_5152_int, var_5153_float)
{
	var_5154_int = 0; var_5155_int = 0; var_5156_int = 0; var_5157_float = 0; // 0x25b4 PushV
	var_5155_int = 527719; // 0x25b5 MovI
	var_5156_int = 527718; // 0x25b6 MovI
	var_5157_float = var_5153_float; // 0x25b7 Mov
	func_11153(var_5154_int, var_5155_int, var_5156_int, var_5157_float); // 0x25b8 NEW_2
	var_5152_int = var_5154_int; // 0x25b9 Mov
	return 0; // 0x25bb Return
}


func_7605(var_10_int)
{
	var_12_int = 0; var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); // 0x1db5 PushV
	var_28_object = GlobalVars[14]; // 0x1db6 PushGE
	size(var_20_int); // 0x1db7 ObjFunc
	var_29_bool = 0; // 0x1db9 PushV
	var_29_bool = 1; // 0x1dba MovB
	var_30_bool = var_10_int >= var_20_int; // 0x1dbb GE
	if(var_30_bool == 0) goto Label_7617; // 0x1dbc JumpB
	var_31_int = -1; // 0x1dbd PushI
	var_32_bool = var_10_int == var_31_int; // 0x1dbe Eq
	if(var_32_bool == 0) goto Label_7617; // 0x1dbf JumpB
	var_29_bool = 0; // 0x1dc0 MovB
	
Label_7617:
	if(var_29_bool == 0) goto Label_7623; // 0x1dc1 JumpB
	var_33_string = "Wrong bonfire index "; // 0x1dc2 PushS
	var_34_int = var_33_string + var_10_int; // 0x1dc3 Add
	Trace(var_34_int); // 0x1dc4 Func
	return 16; // 0x1dc6 Return
	
Label_7623:
	var_35_object = GlobalVars[14]; // 0x1dc7 PushGE
	get(var_21_object, var_10_int); // 0x1dc8 ObjFunc
	var_36_string = "bonfire_light"; // 0x1dca PushS
	var_37_int = 1; // 0x1dcb PushI
	var_38_int = var_10_int + var_37_int; // 0x1dcc Add
	var_39_int = var_36_string + var_38_int; // 0x1dcd Add
	FindActor(var_22_object, var_39_int); // 0x1dce Func
	var_40_bool = var_22_object == 0; // 0x1dd0 Not
	if(var_40_bool == 0) goto Label_7643; // 0x1dd1 JumpB
	var_41_string = "Bofire  light "; // 0x1dd2 PushS
	var_42_int = 1; // 0x1dd3 PushI
	var_43_int = var_10_int + var_42_int; // 0x1dd4 Add
	var_44_int = var_41_string + var_43_int; // 0x1dd5 Add
	var_45_string = " not found"; // 0x1dd6 PushS
	var_46_int = var_44_int + var_45_string; // 0x1dd7 Add
	Trace(var_46_int); // 0x1dd8 Func
	goto Label_7646; // 0x1dda Jump
	
Label_7646:
	GetMainOutdoorScene(var_23_object); // 0x1dde Func
	var_47_string = "pt_bonfire"; // 0x1de0 PushS
	var_48_int = 1; // 0x1de1 PushI
	var_49_int = var_10_int + var_48_int; // 0x1de2 Add
	var_50_int = var_47_string + var_49_int; // 0x1de3 Add
	GetLocator(var_50_int, var_26_bool, var_24_cvector, var_25_cvector); // 0x1de4 ObjFunc
	var_51_bool = var_26_bool == 0; // 0x1de6 Not
	if(var_51_bool == 0) goto Label_7660; // 0x1de7 JumpB
	var_52_string = "Locator for bonfire doesn't exist"; // 0x1de8 PushS
	Trace(var_52_string); // 0x1de9 Func
	return 16; // 0x1deb Return
	
Label_7660:
	var_53_bool = var_21_object == 0; // 0x1dec Not
	if(var_53_bool == 0) goto Label_7670; // 0x1ded JumpB
	var_54_string = "scripted"; // 0x1dee PushS
	var_55_string = "bonfire_big.xml"; // 0x1def PushS
	AddActorByType(var_27_object, var_54_string, var_23_object, var_24_cvector, var_25_cvector, var_55_string); // 0x1df0 Func
	var_56_object = GlobalVars[14]; // 0x1df2 PushGE
	set(var_10_int, var_27_object); // 0x1df3 ObjFunc
	var_27_object = 0; // 0x1df5 SetNull
	
Label_7670:
	var_57_string = "Setting bonfire "; // 0x1df6 PushS
	var_58_int = 1; // 0x1df7 PushI
	var_59_int = var_10_int + var_58_int; // 0x1df8 Add
	var_60_int = var_57_string + var_59_int; // 0x1df9 Add
	var_61_string = "... ok"; // 0x1dfa PushS
	var_62_int = var_60_int + var_61_string; // 0x1dfb Add
	Trace(var_62_int); // 0x1dfc Func
	return 16; // 0x1dfe Return
	
Label_7643:
	var_63_bool = 1; // 0x1ddb PushB
	Switch(var_63_bool); // 0x1ddc ObjFunc
}


func_442(var_24_int)
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; // 0x1ba PushV
	var_29_string = ""; var_30_int = 0; // 0x1bb PushV
	var_30_int = var_24_int; // 0x1bc Mov
	func_299(var_29_string, var_30_int); // 0x1bd NEW_2
	GetVariable(var_29_string, var_27_int); // 0x1bf Func
	var_34_int = 252; // 0x1c1 PushI
	var_35_int = var_27_int & var_34_int; // 0x1c2 And
	var_36_int = 1; // 0x1c3 PushI
	var_28_int = var_35_int | var_36_int; // 0x1c4 Or2
	var_37_string = ""; var_38_int = 0; // 0x1c5 PushV
	var_38_int = var_24_int; // 0x1c6 Mov
	func_299(var_37_string, var_38_int); // 0x1c7 NEW_2
	SetVariable(var_37_string, var_28_int); // 0x1c9 Func
	return 4; // 0x1cb Return
}


func_9660(var_5631_int, var_5632_float)
{
	var_5633_int = 0; var_5634_int = 0; var_5635_int = 0; var_5636_float = 0; // 0x25bd PushV
	var_5634_int = 530572; // 0x25be MovI
	var_5635_int = 530571; // 0x25bf MovI
	var_5636_float = var_5632_float; // 0x25c0 Mov
	func_11153(var_5633_int, var_5634_int, var_5635_int, var_5636_float); // 0x25c1 NEW_2
	var_5631_int = var_5633_int; // 0x25c2 Mov
	return 0; // 0x25c4 Return
}


func_8637(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_int = 0; var_16_int = 0; // 0x21bd PushV
	var_17_bool = 0; // 0x21be PushV
	var_17_bool = 0; // 0x21bf MovB
	var_18_int = 16384; // 0x21c0 PushI
	var_19_bool = var_3_int > var_18_int; // 0x21c1 GT
	if(var_19_bool == 0) goto Label_8647; // 0x21c2 JumpB
	var_20_int = 16396; // 0x21c3 PushI
	var_21_bool = var_3_int < var_20_int; // 0x21c4 LT
	if(var_21_bool == 0) goto Label_8647; // 0x21c5 JumpB
	var_17_bool = 1; // 0x21c6 MovB
	
Label_8647:
	if(var_17_bool == 0) goto Label_8656; // 0x21c7 JumpB
	var_22_int = 16384; // 0x21c8 PushI
	var_11_int = var_3_int - var_22_int; // 0x21c9 Sub2
	var_23_int = 0; // 0x21ca PushV
	var_23_int = var_11_int; // 0x21cb Mov
	func_12960(var_23_int); // 0x21cc NEW_2
	var_2_bool = 1; // 0x21ce MovB
	return 12; // 0x21cf Return
	
Label_8656:
	var_365_bool = 0; // 0x21d0 PushV
	var_365_bool = 0; // 0x21d1 MovB
	var_366_int = 32768; // 0x21d2 PushI
	var_367_bool = var_3_int > var_366_int; // 0x21d3 GT
	if(var_367_bool == 0) goto Label_8665; // 0x21d4 JumpB
	var_368_int = 33056; // 0x21d5 PushI
	var_369_bool = var_3_int < var_368_int; // 0x21d6 LT
	if(var_369_bool == 0) goto Label_8665; // 0x21d7 JumpB
	var_365_bool = 1; // 0x21d8 MovB
	
Label_8665:
	if(var_365_bool == 0) goto Label_8690; // 0x21d9 JumpB
	var_370_int = 32768; // 0x21da PushI
	var_371_int = var_3_int - var_370_int; // 0x21db Sub
	var_372_int = 24; // 0x21dc PushI
	var_12_int = var_371_int / var_371_int; // 0x21dd Div2
	var_373_int = 32768; // 0x21de PushI
	var_374_int = var_3_int - var_373_int; // 0x21df Sub
	var_375_int = 24; // 0x21e0 PushI
	var_13_int = var_374_int % var_375_int; // 0x21e1 Mod2
	GetGameTime(var_14_float); // 0x21e2 Func
	var_376_int = 24; // 0x21e4 PushI
	var_15_int = var_14_float / var_14_float; // 0x21e5 Div2
	var_16_int = var_14_float; // 0x21e6 Mov
	var_377_int = 24; // 0x21e7 PushI
	var_16_int = var_16_int % var_377_int; // 0x21e8 Mod2
	var_378_int = 0; var_379_int = 0; var_380_int = 0; var_381_int = 0; // 0x21e9 PushV
	var_378_int = var_12_int; // 0x21ea Mov
	var_379_int = var_13_int; // 0x21eb Mov
	var_380_int = var_15_int; // 0x21ec Mov
	var_381_int = var_16_int; // 0x21ed Mov
	func_8775(var_378_int, var_379_int, var_380_int, var_381_int); // 0x21ee NEW_2
	var_2_bool = 1; // 0x21f0 MovB
	return 12; // 0x21f1 Return
	
Label_8690:
	var_2_bool = 0; // 0x21f2 MovB
	return 12; // 0x21f3 Return
}


func_4543()
{
	var_64_string = "dt_house3_05_i2"; // 0x11c0 PushS
	add(var_64_string); // 0x11c1 ObjFunc
	var_65_string = "dt_house3_05"; // 0x11c3 PushS
	add(var_65_string); // 0x11c4 ObjFunc
	var_66_string = "dt_house3_06_i2"; // 0x11c6 PushS
	add(var_66_string); // 0x11c7 ObjFunc
	var_67_string = "dt_house_1_10"; // 0x11c9 PushS
	add(var_67_string); // 0x11ca ObjFunc
	var_68_string = "house5_10"; // 0x11cc PushS
	add(var_68_string); // 0x11cd ObjFunc
	var_69_string = "house5_07"; // 0x11cf PushS
	add(var_69_string); // 0x11d0 ObjFunc
	var_70_string = "dt_house_1_03"; // 0x11d2 PushS
	add(var_70_string); // 0x11d3 ObjFunc
	var_71_string = "dt_house1_union2_04l"; // 0x11d5 PushS
	add(var_71_string); // 0x11d6 ObjFunc
	var_72_string = "dt_house1_union2_04r"; // 0x11d8 PushS
	add(var_72_string); // 0x11d9 ObjFunc
	var_73_string = "house5_22"; // 0x11db PushS
	add(var_73_string); // 0x11dc ObjFunc
	var_74_string = "house5_08"; // 0x11de PushS
	add(var_74_string); // 0x11df ObjFunc
	var_75_string = "dt_house1_union2_02l"; // 0x11e1 PushS
	add(var_75_string); // 0x11e2 ObjFunc
	var_76_string = "dt_house1_union2_02r"; // 0x11e4 PushS
	add(var_76_string); // 0x11e5 ObjFunc
	return 0; // 0x11e7 Return
}


func_10689()
{
	func_11069(); // 0x29c3 NEW_2
	return 0; // 0x29c5 Return
}


func_12739(var_282_int, var_283_int)
{
	var_285_int = 8; // 0x31c4 PushI
	var_286_bool = var_283_int == var_285_int; // 0x31c5 Eq
	if(var_286_bool == 0) goto Label_12746; // 0x31c6 JumpB
	var_282_int = 5; // 0x31c7 MovI
	return 0; // 0x31c8 Return
	
Label_12746:
	var_287_int = 9; // 0x31ca PushI
	var_288_bool = var_283_int == var_287_int; // 0x31cb Eq
	if(var_288_bool == 0) goto Label_12752; // 0x31cc JumpB
	var_282_int = 10; // 0x31cd MovI
	return 0; // 0x31ce Return
	
Label_12752:
	var_289_int = 10; // 0x31d0 PushI
	var_290_bool = var_283_int == var_289_int; // 0x31d1 Eq
	if(var_290_bool == 0) goto Label_12758; // 0x31d2 JumpB
	var_282_int = 3; // 0x31d3 MovI
	return 0; // 0x31d4 Return
	
Label_12758:
	var_291_int = 11; // 0x31d6 PushI
	var_292_bool = var_283_int == var_291_int; // 0x31d7 Eq
	if(var_292_bool == 0) goto Label_12763; // 0x31d8 JumpB
	var_282_int = 1; // 0x31d9 MovI
	return 0; // 0x31da Return
	
Label_12763:
	var_282_int = -1; // 0x31db MovI
	return 0; // 0x31dc Return
}


func_9669(var_5168_int, var_5169_float)
{
	var_5170_int = 0; var_5171_int = 0; var_5172_int = 0; var_5173_float = 0; // 0x25c6 PushV
	var_5171_int = 542478; // 0x25c7 MovI
	var_5172_int = 542477; // 0x25c8 MovI
	var_5173_float = var_5169_float; // 0x25c9 Mov
	func_11153(var_5170_int, var_5171_int, var_5172_int, var_5173_float); // 0x25ca NEW_2
	var_5168_int = var_5170_int; // 0x25cb Mov
	return 0; // 0x25cd Return
}


func_10694()
{
	var_5582_int = 0; var_5583_string = ""; // 0x29c7 PushV
	var_5583_string = "K_Mission5"; // 0x29c8 MovS
	func_132(var_5582_int, var_5583_string); // 0x29c9 NEW_2
	var_5584_int = 0; // 0x29cb PushI
	var_5585_bool = var_5582_int == var_5584_int; // 0x29cc Eq
	if(var_5585_bool == 0) goto Label_10725; // 0x29cd JumpB
	var_5586_string = "K_Mission5"; // 0x29ce PushS
	var_5587_int = 1; // 0x29cf PushI
	SetVariable(var_5586_string, var_5587_int); // 0x29d0 Func
	func_11082(); // 0x29d3 NEW_2
	var_5607_bool = 0; var_5608_int = 0; // 0x29d5 PushV
	var_5608_int = 567; // 0x29d6 MovI
	func_11136(var_5607_bool, var_5608_int); // 0x29d7 NEW_2
	var_5609_bool = 0; var_5610_int = 0; // 0x29d9 PushV
	var_5610_int = 568; // 0x29da MovI
	func_11136(var_5609_bool, var_5610_int); // 0x29db NEW_2
	var_5611_bool = 0; var_5612_int = 0; // 0x29dd PushV
	var_5612_int = 569; // 0x29de MovI
	func_11136(var_5611_bool, var_5612_int); // 0x29df NEW_2
	var_5613_bool = 0; var_5614_int = 0; // 0x29e1 PushV
	var_5614_int = 570; // 0x29e2 MovI
	func_11136(var_5613_bool, var_5614_int); // 0x29e3 NEW_2
	
Label_10725:
	return 0; // 0x29e5 Return
}


func_460(var_86_bool, var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x1cc PushV
	var_90_string = ""; var_91_int = 0; // 0x1cd PushV
	var_91_int = var_87_int; // 0x1ce Mov
	func_299(var_90_string, var_91_int); // 0x1cf NEW_2
	GetVariable(var_90_string, var_89_int); // 0x1d1 Func
	var_92_int = 3; // 0x1d3 PushI
	var_93_int = var_89_int & var_92_int; // 0x1d4 And
	var_94_int = 2; // 0x1d5 PushI
	var_86_bool = var_93_int == var_94_int; // 0x1d6 Eq2
	return 2; // 0x1d7 Return
}


func_9678(var_5620_int, var_5621_float)
{
	var_5622_int = 0; var_5623_int = 0; var_5624_int = 0; var_5625_float = 0; // 0x25cf PushV
	var_5623_int = 530574; // 0x25d0 MovI
	var_5624_int = 530573; // 0x25d1 MovI
	var_5625_float = var_5621_float; // 0x25d2 Mov
	func_11153(var_5622_int, var_5623_int, var_5624_int, var_5625_float); // 0x25d3 NEW_2
	var_5620_int = var_5622_int; // 0x25d4 Mov
	return 0; // 0x25d6 Return
}


func_5584(var_3744_int, var_3745_int, var_3746_object, var_3747_object, var_3748_object, var_3749_object)
{
	var_3750_int = 0; // 0x15d1 PushI
	var_3751_bool = var_3745_int == var_3750_int; // 0x15d2 Eq
	if(var_3751_bool == 0) goto Label_5624; // 0x15d3 JumpB
	var_3752_int = 0; var_3753_bool = 0; // 0x15d4 PushV
	var_3752_int = 5; // 0x15d5 MovI
	var_3753_bool = 0; // 0x15d6 MovB
	func_796(var_3752_int, var_3753_bool); // 0x15d7 NEW_2
	var_3754_int = 0; var_3755_bool = 0; var_3756_int = 0; // 0x15d9 PushV
	var_3754_int = 5; // 0x15da MovI
	var_3755_bool = 0; // 0x15db MovB
	var_3756_int = 1; // 0x15dc MovI
	func_813(var_3754_int, var_3755_bool, var_3756_int); // 0x15dd NEW_2
	var_3757_int = 0; var_3758_int = 0; var_3759_object = Obj(); var_3760_object = Obj(); var_3761_object = Obj(); // 0x15df PushV
	var_3757_int = 5; // 0x15e0 MovI
	var_3758_int = var_3744_int; // 0x15e1 Mov
	var_3759_object = var_3746_object; // 0x15e2 Mov
	var_3760_object = var_3747_object; // 0x15e3 Mov
	var_3761_object = var_3748_object; // 0x15e4 Mov
	func_720(var_3757_int, var_3758_int, var_3759_object, var_3760_object, var_3761_object); // 0x15e5 NEW_2
	var_3762_object = Obj(); var_3763_int = 0; // 0x15e7 PushV
	var_3762_object = var_3749_object; // 0x15e8 Mov
	var_3763_int = 2; // 0x15e9 MovI
	func_305(var_3763_int); // 0x15ea NEW_2
	var_3764_int = 0; var_3765_bool = 0; var_3766_int = 0; // 0x15ec PushV
	var_3764_int = 5; // 0x15ed MovI
	var_3765_bool = 0; // 0x15ee MovB
	var_3766_int = 4; // 0x15ef MovI
	func_870(var_3764_int, var_3765_bool, var_3766_int); // 0x15f0 NEW_2
	var_3767_int = 0; var_3768_bool = 0; var_3769_int = 0; // 0x15f2 PushV
	var_3767_int = 5; // 0x15f3 MovI
	var_3768_bool = 1; // 0x15f4 MovB
	var_3769_int = 4; // 0x15f5 MovI
	func_932(var_3767_int, var_3768_bool, var_3769_int); // 0x15f6 NEW_2
	
Label_5624:
	var_3770_int = 0; var_3771_bool = 0; // 0x15f8 PushV
	var_3770_int = 5; // 0x15f9 MovI
	var_3771_bool = 0; // 0x15fa MovB
	func_779(var_3770_int, var_3771_bool); // 0x15fb NEW_2
	var_3772_int = 0; var_3773_int = 0; var_3774_int = 0; // 0x15fd PushV
	var_3772_int = 5; // 0x15fe MovI
	var_3773_int = var_3744_int; // 0x15ff Mov
	var_3774_int = var_3745_int; // 0x1600 Mov
	func_3847(var_3772_int, var_3773_int, var_3774_int); // 0x1601 NEW_2
	return 0; // 0x1603 Return
}


func_9687(var_5184_int, var_5185_float)
{
	var_5186_int = 0; var_5187_int = 0; var_5188_int = 0; var_5189_float = 0; // 0x25d8 PushV
	var_5187_int = 530266; // 0x25d9 MovI
	var_5188_int = 530265; // 0x25da MovI
	var_5189_float = var_5185_float; // 0x25db Mov
	func_11153(var_5186_int, var_5187_int, var_5188_int, var_5189_float); // 0x25dc NEW_2
	var_5184_int = var_5186_int; // 0x25dd Mov
	return 0; // 0x25df Return
}


func_472(var_76_int)
{
	var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; // 0x1d8 PushV
	var_81_string = ""; var_82_int = 0; // 0x1d9 PushV
	var_82_int = var_76_int; // 0x1da Mov
	func_299(var_81_string, var_82_int); // 0x1db NEW_2
	GetVariable(var_81_string, var_79_int); // 0x1dd Func
	var_83_int = 252; // 0x1df PushI
	var_84_int = var_79_int & var_83_int; // 0x1e0 And
	var_85_int = 2; // 0x1e1 PushI
	var_80_int = var_84_int | var_85_int; // 0x1e2 Or2
	var_86_string = ""; var_87_int = 0; // 0x1e3 PushV
	var_87_int = var_76_int; // 0x1e4 Mov
	func_299(var_86_string, var_87_int); // 0x1e5 NEW_2
	SetVariable(var_86_string, var_80_int); // 0x1e7 Func
	return 4; // 0x1e9 Return
}


func_12765(var_265_int, var_266_int)
{
	var_268_int = 8; // 0x31de PushI
	var_269_bool = var_266_int == var_268_int; // 0x31df Eq
	if(var_269_bool == 0) goto Label_12772; // 0x31e0 JumpB
	var_265_int = 11; // 0x31e1 MovI
	return 0; // 0x31e2 Return
	
Label_12772:
	var_270_int = 9; // 0x31e4 PushI
	var_271_bool = var_266_int == var_270_int; // 0x31e5 Eq
	if(var_271_bool == 0) goto Label_12778; // 0x31e6 JumpB
	var_265_int = 2; // 0x31e7 MovI
	return 0; // 0x31e8 Return
	
Label_12778:
	var_272_int = 10; // 0x31ea PushI
	var_273_bool = var_266_int == var_272_int; // 0x31eb Eq
	if(var_273_bool == 0) goto Label_12784; // 0x31ec JumpB
	var_265_int = 7; // 0x31ed MovI
	return 0; // 0x31ee Return
	
Label_12784:
	var_274_int = 11; // 0x31f0 PushI
	var_275_bool = var_266_int == var_274_int; // 0x31f1 Eq
	if(var_275_bool == 0) goto Label_12789; // 0x31f2 JumpB
	var_265_int = 15; // 0x31f3 MovI
	return 0; // 0x31f4 Return
	
Label_12789:
	var_265_int = -1; // 0x31f5 MovI
	return 0; // 0x31f6 Return
}


func_9696(var_5200_int, var_5201_float)
{
	var_5202_int = 0; var_5203_int = 0; var_5204_int = 0; var_5205_float = 0; // 0x25e1 PushV
	var_5203_int = 542793; // 0x25e2 MovI
	var_5204_int = 542792; // 0x25e3 MovI
	var_5205_float = var_5201_float; // 0x25e4 Mov
	func_11153(var_5202_int, var_5203_int, var_5204_int, var_5205_float); // 0x25e5 NEW_2
	var_5200_int = var_5202_int; // 0x25e6 Mov
	return 0; // 0x25e8 Return
}


func_10726()
{
	var_4589_string = ""; var_4590_bool = 0; // 0x29e7 PushV
	var_4589_string = "cot_georg@door1"; // 0x29e8 MovS
	var_4590_bool = 0; // 0x29e9 MovB
	func_177(var_4589_string, var_4590_bool); // 0x29ea NEW_2
	var_4599_string = ""; var_4600_bool = 0; // 0x29ec PushV
	var_4599_string = "cot_georg@door2"; // 0x29ed MovS
	var_4600_bool = 0; // 0x29ee MovB
	func_177(var_4599_string, var_4600_bool); // 0x29ef NEW_2
	return 0; // 0x29f1 Return
}


func_6631(var_4029_int, var_4030_int, var_4031_object, var_4032_object, var_4033_object, var_4034_object)
{
	var_4035_int = 0; // 0x19e8 PushI
	var_4036_bool = var_4030_int == var_4035_int; // 0x19e9 Eq
	if(var_4036_bool == 0) goto Label_6671; // 0x19ea JumpB
	var_4037_int = 0; var_4038_bool = 0; // 0x19eb PushV
	var_4037_int = 11; // 0x19ec MovI
	var_4038_bool = 1; // 0x19ed MovB
	func_796(var_4037_int, var_4038_bool); // 0x19ee NEW_2
	var_4039_int = 0; var_4040_bool = 0; var_4041_int = 0; // 0x19f0 PushV
	var_4039_int = 11; // 0x19f1 MovI
	var_4040_bool = 0; // 0x19f2 MovB
	var_4041_int = 1; // 0x19f3 MovI
	func_813(var_4039_int, var_4040_bool, var_4041_int); // 0x19f4 NEW_2
	var_4042_int = 0; var_4043_int = 0; var_4044_object = Obj(); var_4045_object = Obj(); var_4046_object = Obj(); // 0x19f6 PushV
	var_4042_int = 11; // 0x19f7 MovI
	var_4043_int = var_4029_int; // 0x19f8 Mov
	var_4044_object = var_4031_object; // 0x19f9 Mov
	var_4045_object = var_4032_object; // 0x19fa Mov
	var_4046_object = var_4033_object; // 0x19fb Mov
	func_720(var_4042_int, var_4043_int, var_4044_object, var_4045_object, var_4046_object); // 0x19fc NEW_2
	var_4047_object = Obj(); var_4048_int = 0; // 0x19fe PushV
	var_4047_object = var_4034_object; // 0x19ff Mov
	var_4048_int = 2; // 0x1a00 MovI
	func_305(var_4048_int); // 0x1a01 NEW_2
	var_4049_int = 0; var_4050_bool = 0; var_4051_int = 0; // 0x1a03 PushV
	var_4049_int = 11; // 0x1a04 MovI
	var_4050_bool = 0; // 0x1a05 MovB
	var_4051_int = 5; // 0x1a06 MovI
	func_870(var_4049_int, var_4050_bool, var_4051_int); // 0x1a07 NEW_2
	var_4052_int = 0; var_4053_bool = 0; var_4054_int = 0; // 0x1a09 PushV
	var_4052_int = 11; // 0x1a0a MovI
	var_4053_bool = 1; // 0x1a0b MovB
	var_4054_int = 5; // 0x1a0c MovI
	func_932(var_4052_int, var_4053_bool, var_4054_int); // 0x1a0d NEW_2
	
Label_6671:
	var_4055_int = 0; var_4056_bool = 0; // 0x1a0f PushV
	var_4055_int = 11; // 0x1a10 MovI
	var_4056_bool = 0; // 0x1a11 MovB
	func_779(var_4055_int, var_4056_bool); // 0x1a12 NEW_2
	var_4057_int = 0; var_4058_int = 0; var_4059_int = 0; // 0x1a14 PushV
	var_4057_int = 11; // 0x1a15 MovI
	var_4058_int = var_4029_int; // 0x1a16 Mov
	var_4059_int = var_4030_int; // 0x1a17 Mov
	func_3659(var_4057_int, var_4058_int, var_4059_int); // 0x1a18 NEW_2
	return 0; // 0x1a1a Return
}


func_4584(var_885_int, var_886_int, var_887_object, var_888_object, var_889_object, var_890_object)
{
	var_891_int = 0; // 0x11e9 PushI
	var_892_bool = var_886_int == var_891_int; // 0x11ea Eq
	if(var_892_bool == 0) goto Label_4624; // 0x11eb JumpB
	var_893_int = 0; var_894_bool = 0; // 0x11ec PushV
	var_893_int = 1; // 0x11ed MovI
	var_894_bool = 0; // 0x11ee MovB
	func_796(var_893_int, var_894_bool); // 0x11ef NEW_2
	var_895_int = 0; var_896_bool = 0; var_897_int = 0; // 0x11f1 PushV
	var_895_int = 1; // 0x11f2 MovI
	var_896_bool = 0; // 0x11f3 MovB
	var_897_int = 1; // 0x11f4 MovI
	func_813(var_895_int, var_896_bool, var_897_int); // 0x11f5 NEW_2
	var_898_int = 0; var_899_int = 0; var_900_object = Obj(); var_901_object = Obj(); var_902_object = Obj(); // 0x11f7 PushV
	var_898_int = 1; // 0x11f8 MovI
	var_899_int = var_885_int; // 0x11f9 Mov
	var_900_object = var_887_object; // 0x11fa Mov
	var_901_object = var_888_object; // 0x11fb Mov
	var_902_object = var_889_object; // 0x11fc Mov
	func_622(var_899_int, var_900_object, var_901_object, var_902_object); // 0x11fd NEW_2
	var_903_object = Obj(); var_904_int = 0; // 0x11ff PushV
	var_903_object = var_890_object; // 0x1200 Mov
	var_904_int = 0; // 0x1201 MovI
	func_305(var_904_int); // 0x1202 NEW_2
	var_905_int = 0; var_906_bool = 0; var_907_int = 0; // 0x1204 PushV
	var_905_int = 1; // 0x1205 MovI
	var_906_bool = 0; // 0x1206 MovB
	var_907_int = 8; // 0x1207 MovI
	func_870(var_905_int, var_906_bool, var_907_int); // 0x1208 NEW_2
	var_908_int = 0; var_909_bool = 0; var_910_int = 0; // 0x120a PushV
	var_908_int = 1; // 0x120b MovI
	var_909_bool = 0; // 0x120c MovB
	var_910_int = 8; // 0x120d MovI
	func_932(var_908_int, var_909_bool, var_910_int); // 0x120e NEW_2
	
Label_4624:
	var_911_int = 0; var_912_int = 0; // 0x1210 PushV
	var_911_int = 1; // 0x1211 MovI
	var_912_int = var_886_int; // 0x1212 Mov
	func_1050(var_911_int, var_912_int); // 0x1213 NEW_2
	var_913_int = 0; var_914_int = 0; var_915_int = 0; // 0x1215 PushV
	var_913_int = 1; // 0x1216 MovI
	var_914_int = var_885_int; // 0x1217 Mov
	var_915_int = var_886_int; // 0x1218 Mov
	func_2383(var_913_int, var_914_int, var_915_int); // 0x1219 NEW_2
	return 0; // 0x121b Return
}


func_9705(var_5562_int, var_5563_float)
{
	var_5564_int = 0; var_5565_int = 0; var_5566_int = 0; var_5567_float = 0; // 0x25ea PushV
	var_5565_int = 538944; // 0x25eb MovI
	var_5566_int = 538943; // 0x25ec MovI
	var_5567_float = var_5563_float; // 0x25ed Mov
	func_11153(var_5564_int, var_5565_int, var_5566_int, var_5567_float); // 0x25ee NEW_2
	var_5562_int = var_5564_int; // 0x25ef Mov
	return 0; // 0x25f1 Return
}


func_490(var_486_int)
{
	var_487_object = Obj(); var_488_object = Obj(); // 0x1ea PushV
	GetMainOutdoorScene(var_488_object); // 0x1eb Func
	var_489_bool = var_488_object == 0; // 0x1ed NullEq
	if(var_489_bool == 0) goto Label_499; // 0x1ee JumpB
	var_490_string = "City manager: main outdoor scene not found"; // 0x1ef PushS
	Trace(var_490_string); // 0x1f0 Func
	return 2; // 0x1f2 Return
	
Label_499:
	RemoveAllRegionActors(var_486_int); // 0x1f3 ObjFunc
	return 2; // 0x1f5 Return
}


func_9714(var_5550_int, var_5551_float)
{
	var_5552_int = 0; var_5553_int = 0; var_5554_int = 0; var_5555_float = 0; // 0x25f3 PushV
	var_5553_int = 538946; // 0x25f4 MovI
	var_5554_int = 538945; // 0x25f5 MovI
	var_5555_float = var_5551_float; // 0x25f6 Mov
	func_11153(var_5552_int, var_5553_int, var_5554_int, var_5555_float); // 0x25f7 NEW_2
	var_5550_int = var_5552_int; // 0x25f8 Mov
	return 0; // 0x25fa Return
}


func_10738(var_5827_object)
{
	var_5831_bool = 0; var_5832_object = Obj(); var_5833_float = 0; // 0x29f3 PushV
	var_5832_object = var_5827_object; // 0x29f4 Mov
	var_5833_float = -0.1; // 0x29f5 MovF
	func_194(var_5831_bool, var_5832_object, var_5833_float); // 0x29f6 NEW_2
	return 0; // 0x29f8 Return
}


func_8692()
{
	var_416_float = 0; var_417_int = 0; var_418_int = 0; var_419_float = 0; var_420_int = 0; var_421_object = Obj(); var_422_object = Obj(); var_423_float = 0; var_424_int = 0; var_425_int = 0; var_426_float = 0; var_427_int = 0; var_428_object = Obj(); var_429_object = Obj(); // 0x21f4 PushV
	GetGameTime(var_423_float); // 0x21f5 Func
	var_424_int = 1; // 0x21f7 MovI
	
Label_8696:
	var_430_int = 12; // 0x21f8 PushI
	var_431_bool = var_424_int < var_430_int; // 0x21f9 LT
	if(var_431_bool == 0) goto Label_8708; // 0x21fa JumpB
	var_432_int = 16384; // 0x21fb PushI
	var_433_int = var_432_int + var_424_int; // 0x21fc Add
	var_434_int = 24; // 0x21fd PushI
	var_435_float = var_434_int * var_424_int; // 0x21fe Mult
	SetTimeEvent(var_433_int, var_435_float); // 0x21ff Func
	var_436_int = 1; // 0x2201 PushI
	var_424_int = var_424_int + var_436_int; // 0x2202 Add2
	goto Label_8696; // 0x2203 Jump
	
Label_8708:
	var_425_int = 0; // 0x2204 MovI
	
Label_8709:
	var_437_int = 288; // 0x2205 PushI
	var_438_bool = var_425_int < var_437_int; // 0x2206 LT
	if(var_438_bool == 0) goto Label_8723; // 0x2207 JumpB
	var_426_float = var_425_int; // 0x2208 Mov
	var_439_bool = var_426_float < var_423_float; // 0x2209 LT
	if(var_439_bool == 0) goto Label_8716; // 0x220a JumpB
	goto Label_8720; // 0x220b Jump
	
Label_8720:
	var_440_int = 1; // 0x2210 PushI
	var_425_int = var_425_int + var_440_int; // 0x2211 Add2
	goto Label_8709; // 0x2212 Jump
	
Label_8716:
	var_441_int = 32768; // 0x220c PushI
	var_442_int = var_441_int + var_425_int; // 0x220d Add
	SetTimeEvent(var_442_int, var_426_float); // 0x220e Func
	
Label_8723:
	var_427_int = 0; // 0x2213 MovI
	
Label_8724:
	var_443_int = 16; // 0x2214 PushI
	var_444_bool = var_427_int < var_443_int; // 0x2215 LT
	if(var_444_bool == 0) goto Label_8742; // 0x2216 JumpB
	var_445_string = ""; var_446_int = 0; // 0x2217 PushV
	var_446_int = var_427_int; // 0x2218 Mov
	func_299(var_445_string, var_446_int); // 0x2219 NEW_2
	var_450_int = 0; // 0x221b PushI
	SetVariable(var_445_string, var_450_int); // 0x221c Func
	var_451_int = 0; var_452_bool = 0; // 0x221e PushV
	var_451_int = var_427_int; // 0x221f Mov
	var_452_bool = 0; // 0x2220 MovB
	func_796(var_451_int, var_452_bool); // 0x2221 NEW_2
	var_462_int = 1; // 0x2223 PushI
	var_427_int = var_427_int + var_462_int; // 0x2224 Add2
	goto Label_8724; // 0x2225 Jump
	
Label_8742:
	var_463_int = 0; var_464_int = 0; var_465_int = 0; var_466_int = 0; // 0x2226 PushV
	var_463_int = 0; // 0x2227 MovI
	var_467_int = 24; // 0x2228 PushI
	var_464_int = var_423_float % var_467_int; // 0x2229 Mod2
	var_465_int = 0; // 0x222a MovI
	var_468_int = 24; // 0x222b PushI
	var_466_int = var_423_float % var_468_int; // 0x222c Mod2
	func_8775(var_463_int, var_464_int, var_465_int, var_466_int); // 0x222d NEW_2
	var_4399_string = "dt_house_1_07"; // 0x222f PushS
	FindActor(var_428_object, var_4399_string); // 0x2230 Func
	var_4400_int = 200; // 0x2232 PushI
	var_4401_bool = 0; // 0x2233 PushB
	EnableSubset(var_4400_int, var_4401_bool); // 0x2234 ObjFunc
	GetMainOutdoorScene(var_429_object); // 0x2236 Func
	var_4402_int = 0; // 0x2238 PushI
	var_4403_bool = 0; // 0x2239 PushV
	var_4403_bool = 1; // 0x223a MovB
	var_4404_int = 7; // 0x223b PushI
	var_4405_bool = var_423_float < var_4404_int; // 0x223c LT
	if(var_4405_bool == 0) goto Label_8770; // 0x223d JumpB
	var_4406_int = 20; // 0x223e PushI
	var_4407_bool = var_423_float >= var_4406_int; // 0x223f GE
	if(var_4407_bool == 0) goto Label_8770; // 0x2240 JumpB
	var_4403_bool = 0; // 0x2241 MovB
	
Label_8770:
	SwitchLights(var_4402_int, var_4403_bool); // 0x2242 ObjFunc
	return 14; // 0x2244 Return
}


func_503(var_782_int, var_783_string, var_784_string, var_785_int)
{
	var_786_object = Obj(); var_787_object = Obj(); // 0x1f7 PushV
	GetMainOutdoorScene(var_787_object); // 0x1f8 Func
	var_788_bool = var_787_object == 0; // 0x1fa NullEq
	if(var_788_bool == 0) goto Label_512; // 0x1fb JumpB
	var_789_string = "City manager: Can't find main outdoor scene"; // 0x1fc PushS
	Trace(var_789_string); // 0x1fd Func
	return 2; // 0x1ff Return
	
Label_512:
	SetRegionActorCount(var_782_int, var_783_string, var_784_string, var_785_int); // 0x200 ObjFunc
	return 2; // 0x202 Return
}


func_12791(var_4335_string, var_4336_int)
{
	var_4338_int = 8; // 0x31f8 PushI
	var_4339_bool = var_4336_int == var_4338_int; // 0x31f9 Eq
	if(var_4339_bool == 0) goto Label_12798; // 0x31fa JumpB
	var_4335_string = "house5_unoin_solidl"; // 0x31fb MovS
	return 0; // 0x31fc Return
	
Label_12798:
	var_4340_int = 9; // 0x31fe PushI
	var_4341_bool = var_4336_int == var_4340_int; // 0x31ff Eq
	if(var_4341_bool == 0) goto Label_12804; // 0x3200 JumpB
	var_4335_string = "r4_house4_02_i2"; // 0x3201 MovS
	return 0; // 0x3202 Return
	
Label_12804:
	var_4342_int = 10; // 0x3204 PushI
	var_4343_bool = var_4336_int == var_4342_int; // 0x3205 Eq
	if(var_4343_bool == 0) goto Label_12810; // 0x3206 JumpB
	var_4335_string = "dt_house1_union2_01r"; // 0x3207 MovS
	return 0; // 0x3208 Return
	
Label_12810:
	var_4344_int = 11; // 0x320a PushI
	var_4345_bool = var_4336_int == var_4344_int; // 0x320b Eq
	if(var_4345_bool == 0) goto Label_12815; // 0x320c JumpB
	var_4335_string = "dt_house_1_03"; // 0x320d MovS
	return 0; // 0x320e Return
	
Label_12815:
	var_4335_string = ""; // 0x320f MovS
	return 0; // 0x3210 Return
}


func_10745()
{
	var_4611_string = ""; var_4612_bool = 0; // 0x29fa PushV
	var_4611_string = "termitnik@door1"; // 0x29fb MovS
	var_4612_bool = 1; // 0x29fc MovB
	func_177(var_4611_string, var_4612_bool); // 0x29fd NEW_2
	return 0; // 0x29ff Return
}


func_9723(var_5479_int, var_5480_float)
{
	var_5481_int = 0; var_5482_int = 0; var_5483_int = 0; var_5484_float = 0; // 0x25fc PushV
	var_5482_int = 538954; // 0x25fd MovI
	var_5483_int = 538953; // 0x25fe MovI
	var_5484_float = var_5480_float; // 0x25ff Mov
	func_11153(var_5481_int, var_5482_int, var_5483_int, var_5484_float); // 0x2600 NEW_2
	var_5479_int = var_5481_int; // 0x2601 Mov
	return 0; // 0x2603 Return
}


func_10752()
{
	var_4866_string = "resque_list"; // 0x2a01 PushS
	var_4867_int = 1; // 0x2a02 PushI
	SetVariable(var_4866_string, var_4867_int); // 0x2a03 Func
	func_12643(); // 0x2a06 NEW_2
	return 0; // 0x2a08 Return
}


func_7682(var_378_int)
{
	var_379_int = 0; var_380_object = Obj(); var_381_object = Obj(); var_382_int = 0; var_383_object = Obj(); var_384_object = Obj(); // 0x1e02 PushV
	var_385_object = GlobalVars[14]; // 0x1e03 PushGE
	size(var_382_int); // 0x1e04 ObjFunc
	var_386_bool = 0; // 0x1e06 PushV
	var_386_bool = 1; // 0x1e07 MovB
	var_387_bool = var_378_int >= var_382_int; // 0x1e08 GE
	if(var_387_bool == 0) goto Label_7694; // 0x1e09 JumpB
	var_388_int = -1; // 0x1e0a PushI
	var_389_bool = var_378_int == var_388_int; // 0x1e0b Eq
	if(var_389_bool == 0) goto Label_7694; // 0x1e0c JumpB
	var_386_bool = 0; // 0x1e0d MovB
	
Label_7694:
	if(var_386_bool == 0) goto Label_7700; // 0x1e0e JumpB
	var_390_string = "Wrong bonfire index "; // 0x1e0f PushS
	var_391_int = var_390_string + var_378_int; // 0x1e10 Add
	Trace(var_391_int); // 0x1e11 Func
	return 6; // 0x1e13 Return
	
Label_7700:
	var_392_object = GlobalVars[14]; // 0x1e14 PushGE
	get(var_383_object, var_378_int); // 0x1e15 ObjFunc
	var_393_string = "bonfire_light"; // 0x1e17 PushS
	var_394_int = 1; // 0x1e18 PushI
	var_395_int = var_378_int + var_394_int; // 0x1e19 Add
	var_396_int = var_393_string + var_395_int; // 0x1e1a Add
	FindActor(var_384_object, var_396_int); // 0x1e1b Func
	var_397_bool = var_384_object == 0; // 0x1e1d Not
	if(var_397_bool == 0) goto Label_7720; // 0x1e1e JumpB
	var_398_string = "Bofire  light "; // 0x1e1f PushS
	var_399_int = 1; // 0x1e20 PushI
	var_400_int = var_378_int + var_399_int; // 0x1e21 Add
	var_401_int = var_398_string + var_400_int; // 0x1e22 Add
	var_402_string = " not found"; // 0x1e23 PushS
	var_403_int = var_401_int + var_402_string; // 0x1e24 Add
	Trace(var_403_int); // 0x1e25 Func
	goto Label_7723; // 0x1e27 Jump
	
Label_7723:
	var_404_object = var_383_object; // 0x1e2b Push
	if(var_404_object == 0) goto Label_7727; // 0x1e2c JumpB
	RemoveActor(var_383_object); // 0x1e2d Func
	
Label_7727:
	var_383_object = 0; // 0x1e2f SetNull
	var_405_object = GlobalVars[14]; // 0x1e30 PushGE
	set(var_378_int, var_383_object); // 0x1e31 ObjFunc
	var_406_string = "Cleanup bonfire "; // 0x1e33 PushS
	var_407_int = 1; // 0x1e34 PushI
	var_408_int = var_378_int + var_407_int; // 0x1e35 Add
	var_409_int = var_406_string + var_408_int; // 0x1e36 Add
	var_410_string = "... ok"; // 0x1e37 PushS
	var_411_int = var_409_int + var_410_string; // 0x1e38 Add
	Trace(var_411_int); // 0x1e39 Func
	return 6; // 0x1e3b Return
	
Label_7720:
	var_412_bool = 0; // 0x1e28 PushB
	Switch(var_412_bool); // 0x1e29 ObjFunc
}


func_516(var_2214_int, var_2215_string, var_2216_string, var_2217_int, var_2218_int, var_2219_int)
{
	var_2220_object = Obj(); var_2221_object = Obj(); // 0x204 PushV
	GetMainOutdoorScene(var_2221_object); // 0x205 Func
	var_2222_bool = var_2221_object == 0; // 0x207 NullEq
	if(var_2222_bool == 0) goto Label_525; // 0x208 JumpB
	var_2223_string = "City manager: Can't find main outdoor scene"; // 0x209 PushS
	Trace(var_2223_string); // 0x20a Func
	return 2; // 0x20c Return
	
Label_525:
	SetRegionActorCount(var_2214_int, var_2215_string, var_2216_string, var_2217_int, var_2218_int, var_2219_int); // 0x20d ObjFunc
	return 2; // 0x20f Return
}


func_5636()
{
	return 0; // 0x1605 Return
}


func_5638(var_1374_int)
{
	var_1379_int = 0; var_1380_int = 0; // 0x1607 PushV
	var_1379_int = 6; // 0x1608 MovI
	var_1380_int = var_1374_int; // 0x1609 Mov
	func_1050(var_1379_int, var_1380_int); // 0x160a NEW_2
	return 0; // 0x160c Return
}


func_9732(var_5726_int, var_5727_float)
{
	var_5728_int = 0; var_5729_int = 0; var_5730_int = 0; var_5731_float = 0; // 0x2605 PushV
	var_5729_int = 538948; // 0x2606 MovI
	var_5730_int = 538947; // 0x2607 MovI
	var_5731_float = var_5727_float; // 0x2608 Mov
	func_11153(var_5728_int, var_5729_int, var_5730_int, var_5731_float); // 0x2609 NEW_2
	var_5726_int = var_5728_int; // 0x260a Mov
	return 0; // 0x260c Return
}


func_10761()
{
	var_4635_string = ""; var_4636_bool = 0; // 0x2a0a PushV
	var_4635_string = "mnogogrannik@door1"; // 0x2a0b MovS
	var_4636_bool = 1; // 0x2a0c MovB
	func_177(var_4635_string, var_4636_bool); // 0x2a0d NEW_2
	return 0; // 0x2a0f Return
}


func_5645()
{
	var_2657_int = 0; var_2658_bool = 0; // 0x160e PushV
	var_2657_int = 6; // 0x160f MovI
	var_2658_bool = 0; // 0x1610 MovB
	func_779(var_2657_int, var_2658_bool); // 0x1611 NEW_2
	return 0; // 0x1613 Return
}


func_9741(var_5108_int, var_5109_float)
{
	var_5110_int = 0; var_5111_int = 0; var_5112_int = 0; var_5113_float = 0; // 0x260e PushV
	var_5111_int = 538950; // 0x260f MovI
	var_5112_int = 538949; // 0x2610 MovI
	var_5113_float = var_5109_float; // 0x2611 Mov
	func_11153(var_5110_int, var_5111_int, var_5112_int, var_5113_float); // 0x2612 NEW_2
	var_5108_int = var_5110_int; // 0x2613 Mov
	return 0; // 0x2615 Return
}


func_10768(var_5192_bool)
{
	var_5195_int = 0; var_5196_string = ""; // 0x2a11 PushV
	var_5196_string = "k12DankoVisit"; // 0x2a12 MovS
	func_132(var_5195_int, var_5196_string); // 0x2a13 NEW_2
	var_5197_int = 0; // 0x2a15 PushI
	var_5198_bool = var_5195_int != var_5197_int; // 0x2a16 Neq
	if(var_5198_bool == 0) goto Label_10778; // 0x2a17 JumpB
	var_5192_bool = 1; // 0x2a18 MovB
	return 0; // 0x2a19 Return
	
Label_10778:
	var_5192_bool = 0; // 0x2a1a MovB
	return 0; // 0x2a1b Return
}


func_529(var_2141_int, var_2142_string, var_2143_string, var_2144_int)
{
	var_2145_object = Obj(); var_2146_object = Obj(); // 0x211 PushV
	GetMainOutdoorScene(var_2146_object); // 0x212 Func
	var_2147_bool = var_2146_object == 0; // 0x214 NullEq
	if(var_2147_bool == 0) goto Label_538; // 0x215 JumpB
	var_2148_string = "City manager: Can't find main outdoor scene"; // 0x216 PushS
	Trace(var_2148_string); // 0x217 Func
	return 2; // 0x219 Return
	
Label_538:
	SetRegionActorCountByType(var_2141_int, var_2142_string, var_2143_string, var_2144_int); // 0x21a ObjFunc
	return 2; // 0x21c Return
}


func_12817(var_4350_string, var_4351_int)
{
	var_4353_int = 8; // 0x3212 PushI
	var_4354_bool = var_4351_int == var_4353_int; // 0x3213 Eq
	if(var_4354_bool == 0) goto Label_12824; // 0x3214 JumpB
	var_4350_string = "r5_House6_01"; // 0x3215 MovS
	return 0; // 0x3216 Return
	
Label_12824:
	var_4355_int = 9; // 0x3218 PushI
	var_4356_bool = var_4351_int == var_4355_int; // 0x3219 Eq
	if(var_4356_bool == 0) goto Label_12830; // 0x321a JumpB
	var_4350_string = "dt_house2_01"; // 0x321b MovS
	return 0; // 0x321c Return
	
Label_12830:
	var_4357_int = 10; // 0x321e PushI
	var_4358_bool = var_4351_int == var_4357_int; // 0x321f Eq
	if(var_4358_bool == 0) goto Label_12836; // 0x3220 JumpB
	var_4350_string = "house7_02"; // 0x3221 MovS
	return 0; // 0x3222 Return
	
Label_12836:
	var_4359_int = 11; // 0x3224 PushI
	var_4360_bool = var_4351_int == var_4359_int; // 0x3225 Eq
	if(var_4360_bool == 0) goto Label_12841; // 0x3226 JumpB
	var_4350_string = "lc_house3_05"; // 0x3227 MovS
	return 0; // 0x3228 Return
	
Label_12841:
	var_4350_string = ""; // 0x3229 MovS
	return 0; // 0x322a Return
}


func_5652()
{
	var_3783_int = 0; var_3784_bool = 0; // 0x1615 PushV
	var_3783_int = 6; // 0x1616 MovI
	var_3784_bool = 0; // 0x1617 MovB
	func_779(var_3783_int, var_3784_bool); // 0x1618 NEW_2
	return 0; // 0x161a Return
}


func_9750(var_5273_int, var_5274_float)
{
	var_5275_int = 0; var_5276_int = 0; var_5277_int = 0; var_5278_float = 0; // 0x2617 PushV
	var_5276_int = 530678; // 0x2618 MovI
	var_5277_int = 530677; // 0x2619 MovI
	var_5278_float = var_5274_float; // 0x261a Mov
	func_11153(var_5275_int, var_5276_int, var_5277_int, var_5278_float); // 0x261b NEW_2
	var_5273_int = var_5275_int; // 0x261c Mov
	return 0; // 0x261e Return
}


func_2584(var_3026_int, var_3027_int, var_3028_int)
{
	var_3029_int = 0; var_3030_int = 0; var_3031_int = 0; var_3032_int = 0; // 0xa18 PushV
	var_3033_bool = 0; // 0xa19 PushV
	var_3033_bool = 0; // 0xa1a MovB
	var_3034_int = 8; // 0xa1b PushI
	var_3035_bool = var_3028_int > var_3034_int; // 0xa1c GT
	if(var_3035_bool == 0) goto Label_2594; // 0xa1d JumpB
	var_3036_int = 21; // 0xa1e PushI
	var_3037_bool = var_3028_int < var_3036_int; // 0xa1f LT
	if(var_3037_bool == 0) goto Label_2594; // 0xa20 JumpB
	var_3033_bool = 1; // 0xa21 MovB
	
Label_2594:
	if(var_3033_bool == 0) goto Label_2649; // 0xa22 JumpB
	var_3038_int = 0; var_3039_string = ""; var_3040_string = ""; var_3041_int = 0; // 0xa23 PushV
	var_3038_int = var_3026_int; // 0xa24 Mov
	var_3039_string = "pers_vaxxabit"; // 0xa25 MovS
	var_3040_string = "vaxxabit_d.xml"; // 0xa26 MovS
	var_3041_int = 6; // 0xa27 MovI
	func_503(var_3038_int, var_3039_string, var_3040_string, var_3041_int); // 0xa28 NEW_2
	var_3042_int = 0; var_3043_string = ""; var_3044_string = ""; var_3045_int = 0; // 0xa2a PushV
	var_3042_int = var_3026_int; // 0xa2b Mov
	var_3043_string = "pers_vaxxabitka"; // 0xa2c MovS
	var_3044_string = "vaxxabitka_d.xml"; // 0xa2d MovS
	var_3045_int = 6; // 0xa2e MovI
	func_503(var_3042_int, var_3043_string, var_3044_string, var_3045_int); // 0xa2f NEW_2
	var_3046_int = 0; var_3047_string = ""; var_3048_string = ""; var_3049_int = 0; // 0xa31 PushV
	var_3046_int = var_3026_int; // 0xa32 Mov
	var_3047_string = "pers_rat_big"; // 0xa33 MovS
	var_3048_string = "rat_big.xml"; // 0xa34 MovS
	var_3049_int = 3; // 0xa35 MovI
	func_503(var_3046_int, var_3047_string, var_3048_string, var_3049_int); // 0xa36 NEW_2
	var_3050_int = 0; var_3051_string = ""; var_3052_string = ""; var_3053_int = 0; // 0xa38 PushV
	var_3050_int = var_3026_int; // 0xa39 Mov
	var_3051_string = "fog"; // 0xa3a MovS
	var_3052_string = "fog.xml"; // 0xa3b MovS
	var_3053_int = 8; // 0xa3c MovI
	func_529(var_3050_int, var_3051_string, var_3052_string, var_3053_int); // 0xa3d NEW_2
	var_3054_int = 5; // 0xa3f PushI
	var_3055_bool = var_3027_int >= var_3054_int; // 0xa40 GE
	if(var_3055_bool == 0) goto Label_2633; // 0xa41 JumpB
	var_3056_int = 0; var_3057_string = ""; var_3058_string = ""; var_3059_int = 0; // 0xa42 PushV
	var_3056_int = var_3026_int; // 0xa43 Mov
	var_3057_string = "fog"; // 0xa44 MovS
	var_3058_string = "fog_hunter.xml"; // 0xa45 MovS
	var_3059_int = 3; // 0xa46 MovI
	func_529(var_3056_int, var_3057_string, var_3058_string, var_3059_int); // 0xa47 NEW_2
	
Label_2633:
	var_3060_int = 1; // 0xa49 PushI
	var_3061_float = 0; var_3062_int = 0; // 0xa4a PushV
	var_3062_int = var_3027_int; // 0xa4b Mov
	func_1255(var_3061_float, var_3062_int); // 0xa4c NEW_2
	var_3031_int = var_3060_int * var_3061_float; // 0xa4e Mult2
	var_3063_int = var_3031_int; // 0xa4f Push
	if(var_3063_int == 0) goto Label_2648; // 0xa50 JumpB
	var_3064_int = 0; var_3065_string = ""; var_3066_string = ""; var_3067_int = 0; // 0xa51 PushV
	var_3064_int = var_3026_int; // 0xa52 Mov
	var_3065_string = "pers_bomber"; // 0xa53 MovS
	var_3066_string = "bomber.xml"; // 0xa54 MovS
	var_3067_int = var_3031_int; // 0xa55 Mov
	func_503(var_3064_int, var_3065_string, var_3066_string, var_3067_int); // 0xa56 NEW_2
	
Label_2648:
	goto Label_2702; // 0xa58 Jump
	
Label_2702:
	var_3068_int = 0; var_3069_string = ""; var_3070_string = ""; var_3071_int = 0; var_3072_int = 0; var_3073_int = 0; // 0xa8e PushV
	var_3068_int = var_3026_int; // 0xa8f Mov
	var_3069_string = "pers_worker"; // 0xa90 MovS
	var_3070_string = "agony1_man.xml"; // 0xa91 MovS
	var_3071_int = 2; // 0xa92 MovI
	var_3072_int = 4; // 0xa93 MovI
	var_3073_int = 4; // 0xa94 MovI
	func_516(var_3068_int, var_3069_string, var_3070_string, var_3071_int, var_3072_int, var_3073_int); // 0xa95 NEW_2
	var_3074_int = 0; var_3075_string = ""; var_3076_string = ""; var_3077_int = 0; var_3078_int = 0; var_3079_int = 0; // 0xa97 PushV
	var_3074_int = var_3026_int; // 0xa98 Mov
	var_3075_string = "pers_unosha"; // 0xa99 MovS
	var_3076_string = "agony1_man.xml"; // 0xa9a MovS
	var_3077_int = 2; // 0xa9b MovI
	var_3078_int = 4; // 0xa9c MovI
	var_3079_int = 4; // 0xa9d MovI
	func_516(var_3074_int, var_3075_string, var_3076_string, var_3077_int, var_3078_int, var_3079_int); // 0xa9e NEW_2
	var_3080_int = 0; var_3081_string = ""; var_3082_string = ""; var_3083_int = 0; var_3084_int = 0; var_3085_int = 0; // 0xaa0 PushV
	var_3080_int = var_3026_int; // 0xaa1 Mov
	var_3081_string = "pers_woman"; // 0xaa2 MovS
	var_3082_string = "agony1_woman.xml"; // 0xaa3 MovS
	var_3083_int = 2; // 0xaa4 MovI
	var_3084_int = 4; // 0xaa5 MovI
	var_3085_int = 4; // 0xaa6 MovI
	func_516(var_3080_int, var_3081_string, var_3082_string, var_3083_int, var_3084_int, var_3085_int); // 0xaa7 NEW_2
	var_3086_int = 0; var_3087_string = ""; var_3088_string = ""; var_3089_int = 0; var_3090_int = 0; var_3091_int = 0; // 0xaa9 PushV
	var_3086_int = var_3026_int; // 0xaaa Mov
	var_3087_string = "pers_wasted_girl"; // 0xaab MovS
	var_3088_string = "agony1_woman.xml"; // 0xaac MovS
	var_3089_int = 2; // 0xaad MovI
	var_3090_int = 4; // 0xaae MovI
	var_3091_int = 4; // 0xaaf MovI
	func_516(var_3086_int, var_3087_string, var_3088_string, var_3089_int, var_3090_int, var_3091_int); // 0xab0 NEW_2
	var_3092_bool = 0; var_3093_int = 0; var_3094_int = 0; // 0xab2 PushV
	var_3093_int = var_3027_int; // 0xab3 Mov
	var_3094_int = var_3028_int; // 0xab4 Mov
	func_1345(var_3092_bool, var_3093_int, var_3094_int); // 0xab5 NEW_2
	if(var_3092_bool == 0) goto Label_2751; // 0xab7 JumpB
	var_3095_int = 0; var_3096_string = ""; var_3097_string = ""; var_3098_int = 0; // 0xab8 PushV
	var_3095_int = var_3026_int; // 0xab9 Mov
	var_3096_string = "pers_soldat"; // 0xaba MovS
	var_3097_string = "soldier_marauder.xml"; // 0xabb MovS
	var_3098_int = 2; // 0xabc MovI
	func_503(var_3095_int, var_3096_string, var_3097_string, var_3098_int); // 0xabd NEW_2
	
Label_2751:
	var_3099_bool = 0; var_3100_int = 0; // 0xabf PushV
	var_3100_int = var_3027_int; // 0xac0 Mov
	func_1372(var_3099_bool, var_3100_int); // 0xac1 NEW_2
	if(var_3099_bool == 0) goto Label_2763; // 0xac3 JumpB
	var_3101_int = 0; var_3102_string = ""; var_3103_string = ""; var_3104_int = 0; // 0xac4 PushV
	var_3101_int = var_3026_int; // 0xac5 Mov
	var_3102_string = "pers_sanitar"; // 0xac6 MovS
	var_3103_string = "sanitar.xml"; // 0xac7 MovS
	var_3104_int = 2; // 0xac8 MovI
	func_503(var_3101_int, var_3102_string, var_3103_string, var_3104_int); // 0xac9 NEW_2
	
Label_2763:
	return 4; // 0xacb Return
	
Label_2649:
	var_3105_int = 0; var_3106_string = ""; var_3107_string = ""; var_3108_int = 0; // 0xa59 PushV
	var_3105_int = var_3026_int; // 0xa5a Mov
	var_3106_string = "pers_vaxxabit"; // 0xa5b MovS
	var_3107_string = "vaxxabit_d.xml"; // 0xa5c MovS
	var_3108_int = 6; // 0xa5d MovI
	func_503(var_3105_int, var_3106_string, var_3107_string, var_3108_int); // 0xa5e NEW_2
	var_3109_int = 0; var_3110_string = ""; var_3111_string = ""; var_3112_int = 0; // 0xa60 PushV
	var_3109_int = var_3026_int; // 0xa61 Mov
	var_3110_string = "pers_vaxxabitka"; // 0xa62 MovS
	var_3111_string = "vaxxabitka_d.xml"; // 0xa63 MovS
	var_3112_int = 5; // 0xa64 MovI
	func_503(var_3109_int, var_3110_string, var_3111_string, var_3112_int); // 0xa65 NEW_2
	var_3113_int = 0; var_3114_string = ""; var_3115_string = ""; var_3116_int = 0; // 0xa67 PushV
	var_3113_int = var_3026_int; // 0xa68 Mov
	var_3114_string = "pers_rat_big"; // 0xa69 MovS
	var_3115_string = "rat_big.xml"; // 0xa6a MovS
	var_3116_int = 4; // 0xa6b MovI
	func_503(var_3113_int, var_3114_string, var_3115_string, var_3116_int); // 0xa6c NEW_2
	var_3117_int = 0; var_3118_string = ""; var_3119_string = ""; var_3120_int = 0; // 0xa6e PushV
	var_3117_int = var_3026_int; // 0xa6f Mov
	var_3118_string = "fog"; // 0xa70 MovS
	var_3119_string = "fog.xml"; // 0xa71 MovS
	var_3120_int = 6; // 0xa72 MovI
	func_529(var_3117_int, var_3118_string, var_3119_string, var_3120_int); // 0xa73 NEW_2
	var_3121_int = 5; // 0xa75 PushI
	var_3122_bool = var_3027_int >= var_3121_int; // 0xa76 GE
	if(var_3122_bool == 0) goto Label_2687; // 0xa77 JumpB
	var_3123_int = 0; var_3124_string = ""; var_3125_string = ""; var_3126_int = 0; // 0xa78 PushV
	var_3123_int = var_3026_int; // 0xa79 Mov
	var_3124_string = "fog"; // 0xa7a MovS
	var_3125_string = "fog_hunter.xml"; // 0xa7b MovS
	var_3126_int = 2; // 0xa7c MovI
	func_529(var_3123_int, var_3124_string, var_3125_string, var_3126_int); // 0xa7d NEW_2
	
Label_2687:
	var_3127_int = 1; // 0xa7f PushI
	var_3128_float = 0; var_3129_int = 0; // 0xa80 PushV
	var_3129_int = var_3027_int; // 0xa81 Mov
	func_1255(var_3128_float, var_3129_int); // 0xa82 NEW_2
	var_3032_int = var_3127_int * var_3128_float; // 0xa84 Mult2
	var_3130_int = var_3032_int; // 0xa85 Push
	if(var_3130_int == 0) goto Label_2702; // 0xa86 JumpB
	var_3131_int = 0; var_3132_string = ""; var_3133_string = ""; var_3134_int = 0; // 0xa87 PushV
	var_3131_int = var_3026_int; // 0xa88 Mov
	var_3132_string = "pers_bomber"; // 0xa89 MovS
	var_3133_string = "bomber.xml"; // 0xa8a MovS
	var_3134_int = var_3032_int; // 0xa8b Mov
	func_503(var_3131_int, var_3132_string, var_3133_string, var_3134_int); // 0xa8c NEW_2
}


func_5659()
{
	var_177_string = "House6_02"; // 0x161c PushS
	add(var_177_string); // 0x161d ObjFunc
	var_178_string = "House6_01"; // 0x161f PushS
	add(var_178_string); // 0x1620 ObjFunc
	var_179_string = "house_2_01"; // 0x1622 PushS
	add(var_179_string); // 0x1623 ObjFunc
	var_180_string = "house7_03"; // 0x1625 PushS
	add(var_180_string); // 0x1626 ObjFunc
	var_181_string = "house7_02"; // 0x1628 PushS
	add(var_181_string); // 0x1629 ObjFunc
	var_182_string = "house3_01_i2"; // 0x162b PushS
	add(var_182_string); // 0x162c ObjFunc
	var_183_string = "house3_01"; // 0x162e PushS
	add(var_183_string); // 0x162f ObjFunc
	var_184_string = "house_2_03"; // 0x1631 PushS
	add(var_184_string); // 0x1632 ObjFunc
	var_185_string = "house_2_02"; // 0x1634 PushS
	add(var_185_string); // 0x1635 ObjFunc
	var_186_string = "house4_01_i2"; // 0x1637 PushS
	add(var_186_string); // 0x1638 ObjFunc
	var_187_string = "house4_01"; // 0x163a PushS
	add(var_187_string); // 0x163b ObjFunc
	var_188_string = "House6_05"; // 0x163d PushS
	add(var_188_string); // 0x163e ObjFunc
	var_189_string = "House6_04"; // 0x1640 PushS
	add(var_189_string); // 0x1641 ObjFunc
	var_190_string = "House6_03"; // 0x1643 PushS
	add(var_190_string); // 0x1644 ObjFunc
	return 0; // 0x1646 Return
}


func_6683()
{
	var_265_string = "r6_house2_03"; // 0x1a1c PushS
	add(var_265_string); // 0x1a1d ObjFunc
	var_266_string = "r6_house4_01_i2"; // 0x1a1f PushS
	add(var_266_string); // 0x1a20 ObjFunc
	var_267_string = "r6_house4_02_i2"; // 0x1a22 PushS
	add(var_267_string); // 0x1a23 ObjFunc
	var_268_string = "r6_house4_02"; // 0x1a25 PushS
	add(var_268_string); // 0x1a26 ObjFunc
	var_269_string = "r6_house3_02_i2"; // 0x1a28 PushS
	add(var_269_string); // 0x1a29 ObjFunc
	var_270_string = "r6_house3_02"; // 0x1a2b PushS
	add(var_270_string); // 0x1a2c ObjFunc
	var_271_string = "r6_house3_01_i2"; // 0x1a2e PushS
	add(var_271_string); // 0x1a2f ObjFunc
	var_272_string = "r6_house3_01"; // 0x1a31 PushS
	add(var_272_string); // 0x1a32 ObjFunc
	var_273_string = "r6_house2_01"; // 0x1a34 PushS
	add(var_273_string); // 0x1a35 ObjFunc
	var_274_string = "r6_house7_01"; // 0x1a37 PushS
	add(var_274_string); // 0x1a38 ObjFunc
	var_275_string = "r6_house7_02"; // 0x1a3a PushS
	add(var_275_string); // 0x1a3b ObjFunc
	var_276_string = "r6_House6_01"; // 0x1a3d PushS
	add(var_276_string); // 0x1a3e ObjFunc
	var_277_string = "r6_house2_02"; // 0x1a40 PushS
	add(var_277_string); // 0x1a41 ObjFunc
	return 0; // 0x1a43 Return
}


func_4636(var_2274_int, var_2275_int, var_2276_object, var_2277_object, var_2278_object, var_2279_object)
{
	var_2280_int = 0; // 0x121d PushI
	var_2281_bool = var_2275_int == var_2280_int; // 0x121e Eq
	if(var_2281_bool == 0) goto Label_4676; // 0x121f JumpB
	var_2282_int = 0; var_2283_bool = 0; // 0x1220 PushV
	var_2282_int = 1; // 0x1221 MovI
	var_2283_bool = 1; // 0x1222 MovB
	func_796(var_2282_int, var_2283_bool); // 0x1223 NEW_2
	var_2284_int = 0; var_2285_bool = 0; var_2286_int = 0; // 0x1225 PushV
	var_2284_int = 1; // 0x1226 MovI
	var_2285_bool = 1; // 0x1227 MovB
	var_2286_int = 1; // 0x1228 MovI
	func_813(var_2284_int, var_2285_bool, var_2286_int); // 0x1229 NEW_2
	var_2287_int = 0; var_2288_int = 0; var_2289_object = Obj(); var_2290_object = Obj(); var_2291_object = Obj(); // 0x122b PushV
	var_2287_int = 1; // 0x122c MovI
	var_2288_int = var_2274_int; // 0x122d Mov
	var_2289_object = var_2276_object; // 0x122e Mov
	var_2290_object = var_2277_object; // 0x122f Mov
	var_2291_object = var_2278_object; // 0x1230 Mov
	func_641(var_2287_int, var_2288_int, var_2289_object, var_2290_object, var_2291_object); // 0x1231 NEW_2
	var_2292_object = Obj(); var_2293_int = 0; // 0x1233 PushV
	var_2292_object = var_2279_object; // 0x1234 Mov
	var_2293_int = 1; // 0x1235 MovI
	func_305(var_2293_int); // 0x1236 NEW_2
	var_2294_int = 0; var_2295_bool = 0; var_2296_int = 0; // 0x1238 PushV
	var_2294_int = 1; // 0x1239 MovI
	var_2295_bool = 1; // 0x123a MovB
	var_2296_int = 8; // 0x123b MovI
	func_870(var_2294_int, var_2295_bool, var_2296_int); // 0x123c NEW_2
	var_2297_int = 0; var_2298_bool = 0; var_2299_int = 0; // 0x123e PushV
	var_2297_int = 1; // 0x123f MovI
	var_2298_bool = 0; // 0x1240 MovB
	var_2299_int = 8; // 0x1241 MovI
	func_932(var_2297_int, var_2298_bool, var_2299_int); // 0x1242 NEW_2
	
Label_4676:
	var_2300_int = 0; var_2301_bool = 0; // 0x1244 PushV
	var_2300_int = 1; // 0x1245 MovI
	var_2301_bool = 0; // 0x1246 MovB
	func_779(var_2300_int, var_2301_bool); // 0x1247 NEW_2
	var_2302_int = 0; var_2303_int = 0; var_2304_int = 0; // 0x1249 PushV
	var_2302_int = 1; // 0x124a MovI
	var_2303_int = var_2274_int; // 0x124b Mov
	var_2304_int = var_2275_int; // 0x124c Mov
	func_3304(var_2302_int, var_2303_int, var_2304_int); // 0x124d NEW_2
	return 0; // 0x124f Return
}


func_542(var_570_int, var_571_bool)
{
	var_572_object = Obj(); var_573_object = Obj(); var_574_bool = 0; var_575_object = Obj(); var_576_object = Obj(); var_577_object = Obj(); var_578_bool = 0; var_579_object = Obj(); // 0x21e PushV
	GetMainOutdoorScene(var_576_object); // 0x21f Func
	var_580_int = 101; // 0x221 PushI
	var_581_int = var_580_int + var_570_int; // 0x222 Add
	GetGroupActors(var_577_object, var_581_int); // 0x223 ObjFunc
	var_582_object = var_577_object; // 0x225 Push
	if(var_582_object == 0) goto Label_573; // 0x226 JumpB
	
Label_551:
	Next(var_578_bool, var_579_object); // 0x227 ObjFunc
	var_583_bool = var_578_bool; // 0x229 Push
	if(var_583_bool == 0) goto Label_572; // 0x22a JumpB
	var_584_bool = 0; var_585_object = Obj(); var_586_string = ""; // 0x22b PushV
	var_585_object = var_579_object; // 0x22c Mov
	var_586_string = "locked"; // 0x22d MovS
	func_81(var_584_bool, var_585_object, var_586_string); // 0x22e NEW_2
	if(var_584_bool == 0) goto Label_565; // 0x230 JumpB
	var_593_string = "locked"; // 0x231 PushS
	SetProperty(var_593_string, var_571_bool); // 0x232 ObjFunc
	goto Label_571; // 0x234 Jump
	
Label_571:
	goto Label_551; // 0x23b Jump
	
Label_565:
	var_594_string = "Actor ""; // 0x235 PushS
	var_595_int = var_594_string + var_579_object; // 0x236 Add
	var_596_string = "" can't be locked"; // 0x237 PushS
	var_597_int = var_595_int + var_596_string; // 0x238 Add
	Trace(var_597_int); // 0x239 Func
	
Label_572:
	var_579_object = 0; // 0x23c SetNull
	
Label_573:
	return 8; // 0x23d Return
}


func_9759(var_4925_int, var_4926_float)
{
	var_4927_int = 0; var_4928_int = 0; var_4929_int = 0; var_4930_float = 0; // 0x2620 PushV
	var_4928_int = 530680; // 0x2621 MovI
	var_4929_int = 530679; // 0x2622 MovI
	var_4930_float = var_4926_float; // 0x2623 Mov
	func_11153(var_4927_int, var_4928_int, var_4929_int, var_4930_float); // 0x2624 NEW_2
	var_4925_int = var_4927_int; // 0x2625 Mov
	return 0; // 0x2627 Return
}


func_10780(var_5820_bool)
{
	var_5823_int = 0; var_5824_string = ""; // 0x2a1d PushV
	var_5824_string = "k3q04SendBurahMail"; // 0x2a1e MovS
	func_132(var_5823_int, var_5824_string); // 0x2a1f NEW_2
	var_5825_int = 0; // 0x2a21 PushI
	var_5826_bool = var_5823_int != var_5825_int; // 0x2a22 Neq
	if(var_5826_bool == 0) goto Label_10790; // 0x2a23 JumpB
	var_5820_bool = 1; // 0x2a24 MovB
	return 0; // 0x2a25 Return
	
Label_10790:
	var_5820_bool = 0; // 0x2a26 MovB
	return 0; // 0x2a27 Return
}


func_10792(var_5144_bool)
{
	var_5147_int = 0; var_5148_string = ""; // 0x2a29 PushV
	var_5148_string = "k10q01KnowAboutRubin"; // 0x2a2a MovS
	func_132(var_5147_int, var_5148_string); // 0x2a2b NEW_2
	var_5149_int = 0; // 0x2a2d PushI
	var_5150_bool = var_5147_int != var_5149_int; // 0x2a2e Neq
	if(var_5150_bool == 0) goto Label_10802; // 0x2a2f JumpB
	var_5144_bool = 1; // 0x2a30 MovB
	return 0; // 0x2a31 Return
	
Label_10802:
	var_5144_bool = 0; // 0x2a32 MovB
	return 0; // 0x2a33 Return
}


func_9768(var_5718_int, var_5719_float)
{
	var_5720_int = 0; var_5721_int = 0; var_5722_int = 0; var_5723_float = 0; // 0x2629 PushV
	var_5721_int = 538956; // 0x262a MovI
	var_5722_int = 538955; // 0x262b MovI
	var_5723_float = var_5719_float; // 0x262c Mov
	func_11153(var_5720_int, var_5721_int, var_5722_int, var_5723_float); // 0x262d NEW_2
	var_5718_int = var_5720_int; // 0x262e Mov
	return 0; // 0x2630 Return
}


func_12843()
{
	var_4570_int = 0; var_4571_int = 0; // 0x322b PushV
	var_4571_int = 1; // 0x322c MovI
	
Label_12845:
	var_4572_int = 12; // 0x322d PushI
	var_4573_bool = var_4571_int <= var_4572_int; // 0x322e LE
	if(var_4573_bool == 0) goto Label_12856; // 0x322f JumpB
	var_4574_string = "RMap"; // 0x3230 PushS
	var_4575_int = var_4574_string + var_4571_int; // 0x3231 Add
	var_4576_int = 1; // 0x3232 PushI
	SetVariable(var_4575_int, var_4576_int); // 0x3233 Func
	var_4577_int = 1; // 0x3235 PushI
	var_4571_int = var_4571_int + var_4577_int; // 0x3236 Add2
	goto Label_12845; // 0x3237 Jump
	
Label_12856:
	return 2; // 0x3238 Return
}


func_9777(var_5570_int, var_5571_float)
{
	var_5572_int = 0; var_5573_int = 0; var_5574_int = 0; var_5575_float = 0; // 0x2632 PushV
	var_5573_int = 538402; // 0x2633 MovI
	var_5574_int = 538401; // 0x2634 MovI
	var_5575_float = var_5571_float; // 0x2635 Mov
	func_11153(var_5572_int, var_5573_int, var_5574_int, var_5575_float); // 0x2636 NEW_2
	var_5570_int = var_5572_int; // 0x2637 Mov
	return 0; // 0x2639 Return
}


func_10804(var_4854_bool)
{
	var_4857_int = 0; var_4858_string = ""; // 0x2a35 PushV
	var_4858_string = "resque_list"; // 0x2a36 MovS
	func_132(var_4857_int, var_4858_string); // 0x2a37 NEW_2
	var_4859_int = 0; // 0x2a39 PushI
	var_4860_bool = var_4857_int != var_4859_int; // 0x2a3a Neq
	if(var_4860_bool == 0) goto Label_10814; // 0x2a3b JumpB
	var_4854_bool = 1; // 0x2a3c MovB
	return 0; // 0x2a3d Return
	
Label_10814:
	var_4854_bool = 0; // 0x2a3e MovB
	return 0; // 0x2a3f Return
}


func_12857(var_158_bool, var_159_int, var_160_int)
{
	var_161_int = 0; var_162_int = 0; var_163_int = 0; var_164_int = 0; // 0x3239 PushV
	var_165_int = 6; // 0x323a PushI
	var_166_bool = var_159_int == var_165_int; // 0x323b Eq
	if(var_166_bool == 0) goto Label_12863; // 0x323c JumpB
	var_158_bool = 0; // 0x323d MovB
	return 4; // 0x323e Return
	
Label_12863:
	var_167_int = 4; // 0x323f PushI
	var_168_bool = var_160_int == var_167_int; // 0x3240 Eq
	if(var_168_bool == 0) goto Label_12877; // 0x3241 JumpB
	var_169_int = 15; // 0x3242 PushI
	var_170_bool = var_159_int == var_169_int; // 0x3243 Eq
	if(var_170_bool == 0) goto Label_12871; // 0x3244 JumpB
	var_158_bool = 0; // 0x3245 MovB
	return 4; // 0x3246 Return
	
Label_12871:
	var_171_int = 9; // 0x3247 PushI
	var_172_bool = var_159_int == var_171_int; // 0x3248 Eq
	if(var_172_bool == 0) goto Label_12876; // 0x3249 JumpB
	var_158_bool = 0; // 0x324a MovB
	return 4; // 0x324b Return
	
Label_12876:
	goto Label_12894; // 0x324c Jump
	
Label_12894:
	var_173_bool = 0; // 0x325e PushV
	var_173_bool = 0; // 0x325f MovB
	var_174_int = 4; // 0x3260 PushI
	var_175_bool = var_160_int > var_174_int; // 0x3261 GT
	if(var_175_bool == 0) goto Label_12903; // 0x3262 JumpB
	var_176_int = 6; // 0x3263 PushI
	var_177_bool = var_160_int < var_176_int; // 0x3264 LT
	if(var_177_bool == 0) goto Label_12903; // 0x3265 JumpB
	var_173_bool = 1; // 0x3266 MovB
	
Label_12903:
	if(var_173_bool == 0) goto Label_12913; // 0x3267 JumpB
	var_178_int = 0; var_179_int = 0; // 0x3268 PushV
	var_179_int = 6; // 0x3269 MovI
	func_12701(var_178_int, var_179_int); // 0x326a NEW_2
	var_163_int = var_178_int; // 0x326b Mov
	var_192_bool = var_163_int == var_159_int; // 0x326d Eq
	if(var_192_bool == 0) goto Label_12913; // 0x326e JumpB
	var_158_bool = 0; // 0x326f MovB
	return 4; // 0x3270 Return
	
Label_12913:
	var_193_bool = 0; // 0x3271 PushV
	var_193_bool = 0; // 0x3272 MovB
	var_194_int = 3; // 0x3273 PushI
	var_195_bool = var_160_int > var_194_int; // 0x3274 GT
	if(var_195_bool == 0) goto Label_12922; // 0x3275 JumpB
	var_196_int = 6; // 0x3276 PushI
	var_197_bool = var_160_int < var_196_int; // 0x3277 LT
	if(var_197_bool == 0) goto Label_12922; // 0x3278 JumpB
	var_193_bool = 1; // 0x3279 MovB
	
Label_12922:
	if(var_193_bool == 0) goto Label_12932; // 0x327a JumpB
	var_198_int = 0; var_199_int = 0; // 0x327b PushV
	var_199_int = 6; // 0x327c MovI
	func_12655(var_198_int, var_199_int); // 0x327d NEW_2
	var_164_int = var_198_int; // 0x327e Mov
	var_212_bool = var_164_int == var_159_int; // 0x3280 Eq
	if(var_212_bool == 0) goto Label_12932; // 0x3281 JumpB
	var_158_bool = 0; // 0x3282 MovB
	return 4; // 0x3283 Return
	
Label_12932:
	var_158_bool = 1; // 0x3284 MovB
	return 4; // 0x3285 Return
	
Label_12877:
	var_213_int = 5; // 0x324d PushI
	var_214_bool = var_160_int == var_213_int; // 0x324e Eq
	if(var_214_bool == 0) goto Label_12886; // 0x324f JumpB
	var_215_int = 15; // 0x3250 PushI
	var_216_bool = var_159_int == var_215_int; // 0x3251 Eq
	if(var_216_bool == 0) goto Label_12885; // 0x3252 JumpB
	var_158_bool = 0; // 0x3253 MovB
	return 4; // 0x3254 Return
	
Label_12885:
	goto Label_12894; // 0x3255 Jump
	
Label_12886:
	var_217_int = 6; // 0x3256 PushI
	var_218_bool = var_160_int == var_217_int; // 0x3257 Eq
	if(var_218_bool == 0) goto Label_12894; // 0x3258 JumpB
	var_219_int = 15; // 0x3259 PushI
	var_220_bool = var_159_int == var_219_int; // 0x325a Eq
	if(var_220_bool == 0) goto Label_12894; // 0x325b JumpB
	var_158_bool = 0; // 0x325c MovB
	return 4; // 0x325d Return
}


func_9786(var_5454_int, var_5455_float)
{
	var_5456_int = 0; var_5457_int = 0; var_5458_int = 0; var_5459_float = 0; // 0x263b PushV
	var_5457_int = 539490; // 0x263c MovI
	var_5458_int = 539489; // 0x263d MovI
	var_5459_float = var_5455_float; // 0x263e Mov
	func_11153(var_5456_int, var_5457_int, var_5458_int, var_5459_float); // 0x263f NEW_2
	var_5454_int = var_5456_int; // 0x2640 Mov
	return 0; // 0x2642 Return
}


func_7742(var_4431_object, var_4433_string, var_4434_string, var_4435_string)
{
	var_4437_bool = 0; var_4438_cvector = CVector(0,0,0); var_4439_cvector = CVector(0,0,0); var_4440_object = Obj(); var_4441_bool = 0; var_4442_cvector = CVector(0,0,0); var_4443_cvector = CVector(0,0,0); var_4444_object = Obj(); // 0x1e3e PushV
	var_4445_string = "pt_guard_"; // 0x1e3f PushS
	var_4446_int = var_4445_string + var_4433_string; // 0x1e40 Add
	GetLocator(var_4446_int, var_4441_bool, var_4442_cvector, var_4443_cvector); // 0x1e41 ObjFunc
	var_4447_bool = var_4441_bool == 0; // 0x1e43 Not
	if(var_4447_bool == 0) goto Label_7754; // 0x1e44 JumpB
	var_4448_string = "Locator doesn't exist for guard "; // 0x1e45 PushS
	var_4449_int = var_4448_string + var_4433_string; // 0x1e46 Add
	Trace(var_4449_int); // 0x1e47 Func
	goto Label_7756; // 0x1e49 Jump
	
Label_7756:
	var_4431_object = var_4444_object; // 0x1e4c Mov
	return 8; // 0x1e4d Return
	
Label_7754:
	AddStationaryActor(var_4444_object, var_4442_cvector, var_4443_cvector, var_4434_string, var_4435_string); // 0x1e4a ObjFunc
}


func_576(var_2029_string, var_2031_string, var_2032_string)
{
	var_2038_object = Obj(); var_2039_int = 0; var_2040_bool = 0; var_2041_cvector = CVector(0,0,0); var_2042_cvector = CVector(0,0,0); var_2043_object = Obj(); var_2044_object = Obj(); var_2045_int = 0; var_2046_bool = 0; var_2047_cvector = CVector(0,0,0); var_2048_cvector = CVector(0,0,0); var_2049_object = Obj(); // 0x240 PushV
	GetMainOutdoorScene(var_2044_object); // 0x241 Func
	var_2045_int = 0; // 0x243 MovI
	
Label_580:
	var_2050_int = 1; // 0x244 PushI
	var_2051_int = var_2045_int + var_2050_int; // 0x245 Add
	var_2052_int = var_2029_string + var_2051_int; // 0x246 Add
	GetLocator(var_2052_int, var_2046_bool, var_2047_cvector, var_2048_cvector); // 0x247 ObjFunc
	var_2053_bool = var_2046_bool == 0; // 0x249 Not
	if(var_2053_bool == 0) goto Label_588; // 0x24a JumpB
	goto Label_596; // 0x24b Jump
	
Label_596:
	return 12; // 0x254 Return
	
Label_588:
	AddStationaryActor(var_2049_object, var_2047_cvector, var_2048_cvector, var_2031_string, var_2032_string); // 0x24c ObjFunc
	add(var_2049_object); // 0x24e ObjFunc
	var_2049_object = 0; // 0x250 SetNull
	var_2054_int = 1; // 0x251 PushI
	var_2045_int = var_2045_int + var_2054_int; // 0x252 Add2
	goto Label_580; // 0x253 Jump
}


func_10816(var_5530_bool)
{
	var_5533_int = 0; var_5534_string = ""; // 0x2a41 PushV
	var_5534_string = "k2AlexandrVisit"; // 0x2a42 MovS
	func_132(var_5533_int, var_5534_string); // 0x2a43 NEW_2
	var_5535_int = 0; // 0x2a45 PushI
	var_5536_bool = var_5533_int != var_5535_int; // 0x2a46 Neq
	if(var_5536_bool == 0) goto Label_10826; // 0x2a47 JumpB
	var_5530_bool = 1; // 0x2a48 MovB
	return 0; // 0x2a49 Return
	
Label_10826:
	var_5530_bool = 0; // 0x2a4a MovB
	return 0; // 0x2a4b Return
}


func_9795(var_5863_int, var_5864_float)
{
	var_5865_int = 0; var_5866_int = 0; var_5867_int = 0; var_5868_float = 0; // 0x2644 PushV
	var_5866_int = 525653; // 0x2645 MovI
	var_5867_int = 525652; // 0x2646 MovI
	var_5868_float = var_5864_float; // 0x2647 Mov
	func_11153(var_5865_int, var_5866_int, var_5867_int, var_5868_float); // 0x2648 NEW_2
	var_5863_int = var_5865_int; // 0x2649 Mov
	return 0; // 0x264b Return
}


func_6724(var_1702_int, var_1703_int, var_1704_object, var_1705_object, var_1706_object, var_1707_object)
{
	var_1708_int = 0; // 0x1a45 PushI
	var_1709_bool = var_1703_int == var_1708_int; // 0x1a46 Eq
	if(var_1709_bool == 0) goto Label_6764; // 0x1a47 JumpB
	var_1710_int = 0; var_1711_bool = 0; // 0x1a48 PushV
	var_1710_int = 12; // 0x1a49 MovI
	var_1711_bool = 0; // 0x1a4a MovB
	func_796(var_1710_int, var_1711_bool); // 0x1a4b NEW_2
	var_1712_int = 0; var_1713_bool = 0; var_1714_int = 0; // 0x1a4d PushV
	var_1712_int = 12; // 0x1a4e MovI
	var_1713_bool = 0; // 0x1a4f MovB
	var_1714_int = 1; // 0x1a50 MovI
	func_813(var_1712_int, var_1713_bool, var_1714_int); // 0x1a51 NEW_2
	var_1715_int = 0; var_1716_int = 0; var_1717_object = Obj(); var_1718_object = Obj(); var_1719_object = Obj(); // 0x1a53 PushV
	var_1715_int = 12; // 0x1a54 MovI
	var_1716_int = var_1702_int; // 0x1a55 Mov
	var_1717_object = var_1704_object; // 0x1a56 Mov
	var_1718_object = var_1705_object; // 0x1a57 Mov
	var_1719_object = var_1706_object; // 0x1a58 Mov
	func_622(var_1716_int, var_1717_object, var_1718_object, var_1719_object); // 0x1a59 NEW_2
	var_1720_object = Obj(); var_1721_int = 0; // 0x1a5b PushV
	var_1720_object = var_1707_object; // 0x1a5c Mov
	var_1721_int = 0; // 0x1a5d MovI
	func_305(var_1721_int); // 0x1a5e NEW_2
	var_1722_int = 0; var_1723_bool = 0; var_1724_int = 0; // 0x1a60 PushV
	var_1722_int = 12; // 0x1a61 MovI
	var_1723_bool = 0; // 0x1a62 MovB
	var_1724_int = 4; // 0x1a63 MovI
	func_870(var_1722_int, var_1723_bool, var_1724_int); // 0x1a64 NEW_2
	var_1725_int = 0; var_1726_bool = 0; var_1727_int = 0; // 0x1a66 PushV
	var_1725_int = 12; // 0x1a67 MovI
	var_1726_bool = 0; // 0x1a68 MovB
	var_1727_int = 4; // 0x1a69 MovI
	func_932(var_1725_int, var_1726_bool, var_1727_int); // 0x1a6a NEW_2
	
Label_6764:
	var_1728_int = 0; var_1729_int = 0; // 0x1a6c PushV
	var_1728_int = 12; // 0x1a6d MovI
	var_1729_int = var_1703_int; // 0x1a6e Mov
	func_1020(var_1728_int, var_1729_int); // 0x1a6f NEW_2
	var_1730_int = 0; var_1731_int = 0; var_1732_int = 0; // 0x1a71 PushV
	var_1730_int = 12; // 0x1a72 MovI
	var_1731_int = var_1702_int; // 0x1a73 Mov
	var_1732_int = var_1703_int; // 0x1a74 Mov
	func_1624(var_1730_int, var_1731_int, var_1732_int); // 0x1a75 NEW_2
	return 0; // 0x1a77 Return
}


func_8775(var_463_int, var_464_int, var_465_int, var_466_int)
{
	var_469_int = 0; var_470_object = Obj(); var_471_object = Obj(); var_472_object = Obj(); var_473_object = Obj(); var_474_int = 0; var_475_object = Obj(); var_476_object = Obj(); var_477_object = Obj(); var_478_object = Obj(); // 0x2247 PushV
	var_479_string = "City update"; // 0x2248 PushS
	Trace(var_479_string); // 0x2249 Func
	var_480_bool = 0; // 0x224b PushV
	var_480_bool = 0; // 0x224c MovB
	var_481_bool = var_463_int == var_465_int; // 0x224d Eq
	if(var_481_bool == 0) goto Label_8786; // 0x224e JumpB
	var_482_bool = var_464_int == var_466_int; // 0x224f Eq
	if(var_482_bool == 0) goto Label_8786; // 0x2250 JumpB
	var_480_bool = 1; // 0x2251 MovB
	
Label_8786:
	if(var_480_bool == 0) goto Label_8790; // 0x2252 JumpB
	var_483_string = "kolokol"; // 0x2253 PushS
	PlaySound(var_483_string); // 0x2254 Func
	
Label_8790:
	var_474_int = 0; // 0x2256 MovI
	
Label_8791:
	var_484_int = 16; // 0x2257 PushI
	var_485_bool = var_474_int < var_484_int; // 0x2258 LT
	if(var_485_bool == 0) goto Label_8831; // 0x2259 JumpB
	var_486_int = 0; // 0x225a PushV
	var_486_int = var_474_int; // 0x225b Mov
	func_490(var_486_int); // 0x225c NEW_2
	var_491_bool = 0; var_492_int = 0; // 0x225e PushV
	var_492_int = var_474_int; // 0x225f Mov
	func_400(var_491_bool, var_492_int); // 0x2260 NEW_2
	if(var_491_bool == 0) goto Label_8810; // 0x2262 JumpB
	var_500_int = 0; var_501_int = 0; var_502_int = 0; // 0x2263 PushV
	var_500_int = var_474_int; // 0x2264 Mov
	var_501_int = var_463_int; // 0x2265 Mov
	var_502_int = var_464_int; // 0x2266 Mov
	func_8895(var_500_int, var_501_int, var_502_int); // 0x2267 NEW_2
	goto Label_8828; // 0x2269 Jump
	
Label_8828:
	var_1977_int = 1; // 0x227c PushI
	var_474_int = var_474_int + var_1977_int; // 0x227d Add2
	goto Label_8791; // 0x227e Jump
	
Label_8810:
	var_1978_bool = 0; var_1979_int = 0; // 0x226a PushV
	var_1979_int = var_474_int; // 0x226b Mov
	func_430(var_1978_bool, var_1979_int); // 0x226c NEW_2
	if(var_1978_bool == 0) goto Label_8822; // 0x226e JumpB
	var_1987_int = 0; var_1988_int = 0; var_1989_int = 0; // 0x226f PushV
	var_1987_int = var_474_int; // 0x2270 Mov
	var_1988_int = var_463_int; // 0x2271 Mov
	var_1989_int = var_464_int; // 0x2272 Mov
	func_9120(var_1987_int, var_1988_int, var_1989_int); // 0x2273 NEW_2
	goto Label_8828; // 0x2275 Jump
	
Label_8822:
	var_3168_int = 0; var_3169_int = 0; var_3170_int = 0; // 0x2276 PushV
	var_3168_int = var_474_int; // 0x2277 Mov
	var_3169_int = var_463_int; // 0x2278 Mov
	var_3170_int = var_464_int; // 0x2279 Mov
	func_9345(var_3168_int, var_3169_int, var_3170_int); // 0x227a NEW_2
	
Label_8831:
	var_4302_int = 0; // 0x227f PushI
	var_4303_bool = var_464_int == var_4302_int; // 0x2280 Eq
	if(var_4303_bool == 0) goto Label_8867; // 0x2281 JumpB
	var_4304_int = 0; // 0x2282 PushV
	var_4304_int = var_463_int; // 0x2283 Mov
	func_13318(var_4304_int); // 0x2284 NEW_2
	var_4378_bool = 0; // 0x2286 PushV
	var_4378_bool = 1; // 0x2287 MovB
	var_4379_int = 1; // 0x2288 PushI
	var_4380_bool = var_463_int == var_4379_int; // 0x2289 Eq
	if(var_4380_bool == 0) goto Label_8849; // 0x228a JumpB
	var_4381_bool = 0; var_4382_int = 0; // 0x228b PushV
	var_4382_int = 5; // 0x228c MovI
	func_430(var_4381_bool, var_4382_int); // 0x228d NEW_2
	if(var_4381_bool == 0) goto Label_8849; // 0x228f JumpB
	var_4378_bool = 0; // 0x2290 MovB
	
Label_8849:
	if(var_4378_bool == 0) goto Label_8859; // 0x2291 JumpB
	var_4383_string = "dt_house_1_07"; // 0x2292 PushS
	FindActor(var_475_object, var_4383_string); // 0x2293 Func
	var_4384_int = 200; // 0x2295 PushI
	var_4385_bool = 1; // 0x2296 PushB
	EnableSubset(var_4384_int, var_4385_bool); // 0x2297 ObjFunc
	var_475_object = 0; // 0x2299 SetNull
	goto Label_8867; // 0x229a Jump
	
Label_8867:
	var_4386_int = 7; // 0x22a3 PushI
	var_4387_bool = var_464_int == var_4386_int; // 0x22a4 Eq
	if(var_4387_bool == 0) goto Label_8881; // 0x22a5 JumpB
	var_4388_string = "day time"; // 0x22a6 PushS
	Trace(var_4388_string); // 0x22a7 Func
	GetMainOutdoorScene(var_477_object); // 0x22a9 Func
	var_4389_int = 0; // 0x22ab PushI
	var_4390_bool = 0; // 0x22ac PushB
	SwitchLights(var_4389_int, var_4390_bool); // 0x22ad ObjFunc
	var_477_object = 0; // 0x22af SetNull
	goto Label_8894; // 0x22b0 Jump
	
Label_8894:
	return 10; // 0x22be Return
	
Label_8881:
	var_4391_int = 20; // 0x22b1 PushI
	var_4392_bool = var_464_int == var_4391_int; // 0x22b2 Eq
	if(var_4392_bool == 0) goto Label_8894; // 0x22b3 JumpB
	var_4393_string = "night time"; // 0x22b4 PushS
	Trace(var_4393_string); // 0x22b5 Func
	GetMainOutdoorScene(var_478_object); // 0x22b7 Func
	var_4394_int = 0; // 0x22b9 PushI
	var_4395_bool = 1; // 0x22ba PushB
	SwitchLights(var_4394_int, var_4395_bool); // 0x22bb ObjFunc
	var_478_object = 0; // 0x22bd SetNull
	
Label_8859:
	var_4396_string = "dt_house_1_07"; // 0x229b PushS
	FindActor(var_476_object, var_4396_string); // 0x229c Func
	var_4397_int = 200; // 0x229e PushI
	var_4398_bool = 0; // 0x229f PushB
	EnableSubset(var_4397_int, var_4398_bool); // 0x22a0 ObjFunc
	var_476_object = 0; // 0x22a2 SetNull
}


func_5703(var_1383_int, var_1384_int, var_1385_object, var_1386_object, var_1387_object, var_1388_object)
{
	var_1389_int = 0; // 0x1648 PushI
	var_1390_bool = var_1384_int == var_1389_int; // 0x1649 Eq
	if(var_1390_bool == 0) goto Label_5743; // 0x164a JumpB
	var_1391_int = 0; var_1392_bool = 0; // 0x164b PushV
	var_1391_int = 7; // 0x164c MovI
	var_1392_bool = 0; // 0x164d MovB
	func_796(var_1391_int, var_1392_bool); // 0x164e NEW_2
	var_1393_int = 0; var_1394_bool = 0; var_1395_int = 0; // 0x1650 PushV
	var_1393_int = 7; // 0x1651 MovI
	var_1394_bool = 0; // 0x1652 MovB
	var_1395_int = 1; // 0x1653 MovI
	func_813(var_1393_int, var_1394_bool, var_1395_int); // 0x1654 NEW_2
	var_1396_int = 0; var_1397_int = 0; var_1398_object = Obj(); var_1399_object = Obj(); var_1400_object = Obj(); // 0x1656 PushV
	var_1396_int = 7; // 0x1657 MovI
	var_1397_int = var_1383_int; // 0x1658 Mov
	var_1398_object = var_1385_object; // 0x1659 Mov
	var_1399_object = var_1386_object; // 0x165a Mov
	var_1400_object = var_1387_object; // 0x165b Mov
	func_622(var_1397_int, var_1398_object, var_1399_object, var_1400_object); // 0x165c NEW_2
	var_1401_object = Obj(); var_1402_int = 0; // 0x165e PushV
	var_1401_object = var_1388_object; // 0x165f Mov
	var_1402_int = 0; // 0x1660 MovI
	func_305(var_1402_int); // 0x1661 NEW_2
	var_1403_int = 0; var_1404_bool = 0; var_1405_int = 0; // 0x1663 PushV
	var_1403_int = 7; // 0x1664 MovI
	var_1404_bool = 0; // 0x1665 MovB
	var_1405_int = 6; // 0x1666 MovI
	func_870(var_1403_int, var_1404_bool, var_1405_int); // 0x1667 NEW_2
	var_1406_int = 0; var_1407_bool = 0; var_1408_int = 0; // 0x1669 PushV
	var_1406_int = 7; // 0x166a MovI
	var_1407_bool = 0; // 0x166b MovB
	var_1408_int = 6; // 0x166c MovI
	func_932(var_1406_int, var_1407_bool, var_1408_int); // 0x166d NEW_2
	
Label_5743:
	var_1409_int = 0; var_1410_int = 0; // 0x166f PushV
	var_1409_int = 7; // 0x1670 MovI
	var_1410_int = var_1384_int; // 0x1671 Mov
	func_1020(var_1409_int, var_1410_int); // 0x1672 NEW_2
	var_1411_int = 0; var_1412_int = 0; var_1413_int = 0; // 0x1674 PushV
	var_1411_int = 7; // 0x1675 MovI
	var_1412_int = var_1383_int; // 0x1676 Mov
	var_1413_int = var_1384_int; // 0x1677 Mov
	func_1624(var_1411_int, var_1412_int, var_1413_int); // 0x1678 NEW_2
	return 0; // 0x167a Return
}


func_3659(var_3815_int, var_3816_int, var_3817_int)
{
	var_3818_int = 0; var_3819_int = 0; var_3820_int = 0; var_3821_int = 0; var_3822_int = 0; var_3823_int = 0; var_3824_int = 0; var_3825_int = 0; // 0xe4b PushV
	var_3826_bool = 0; // 0xe4c PushV
	var_3826_bool = 0; // 0xe4d MovB
	var_3827_int = 8; // 0xe4e PushI
	var_3828_bool = var_3817_int > var_3827_int; // 0xe4f GT
	if(var_3828_bool == 0) goto Label_3669; // 0xe50 JumpB
	var_3829_int = 21; // 0xe51 PushI
	var_3830_bool = var_3817_int < var_3829_int; // 0xe52 LT
	if(var_3830_bool == 0) goto Label_3669; // 0xe53 JumpB
	var_3826_bool = 1; // 0xe54 MovB
	
Label_3669:
	if(var_3826_bool == 0) goto Label_3746; // 0xe55 JumpB
	var_3831_int = 0; var_3832_string = ""; var_3833_string = ""; var_3834_int = 0; // 0xe56 PushV
	var_3831_int = var_3815_int; // 0xe57 Mov
	var_3832_string = "pers_rat"; // 0xe58 MovS
	var_3833_string = "rat.xml"; // 0xe59 MovS
	var_3834_int = 1; // 0xe5a MovI
	func_503(var_3831_int, var_3832_string, var_3833_string, var_3834_int); // 0xe5b NEW_2
	var_3835_int = 0; var_3836_string = ""; var_3837_string = ""; var_3838_int = 0; // 0xe5d PushV
	var_3835_int = var_3815_int; // 0xe5e Mov
	var_3836_string = "pers_alkash"; // 0xe5f MovS
	var_3837_string = "alkash.xml"; // 0xe60 MovS
	var_3838_int = 2; // 0xe61 MovI
	func_503(var_3835_int, var_3836_string, var_3837_string, var_3838_int); // 0xe62 NEW_2
	var_3839_int = 0; var_3840_string = ""; var_3841_string = ""; var_3842_int = 0; // 0xe64 PushV
	var_3839_int = var_3815_int; // 0xe65 Mov
	var_3840_string = "pers_dohodyaga"; // 0xe66 MovS
	var_3841_string = "dohodyaga.xml"; // 0xe67 MovS
	var_3842_int = 1; // 0xe68 MovI
	func_503(var_3839_int, var_3840_string, var_3841_string, var_3842_int); // 0xe69 NEW_2
	var_3843_int = 2; // 0xe6b PushI
	var_3844_float = 0; var_3845_int = 0; // 0xe6c PushV
	var_3845_int = var_3816_int; // 0xe6d Mov
	func_1165(var_3844_float, var_3845_int); // 0xe6e NEW_2
	var_3822_int = var_3843_int * var_3844_float; // 0xe70 Mult2
	var_3846_int = var_3822_int; // 0xe71 Push
	if(var_3846_int == 0) goto Label_3706; // 0xe72 JumpB
	var_3847_int = 0; var_3848_string = ""; var_3849_string = ""; var_3850_int = 0; // 0xe73 PushV
	var_3847_int = var_3815_int; // 0xe74 Mov
	var_3848_string = "pers_grabitel"; // 0xe75 MovS
	var_3849_string = "grabitel.xml"; // 0xe76 MovS
	var_3850_int = var_3822_int; // 0xe77 Mov
	func_503(var_3847_int, var_3848_string, var_3849_string, var_3850_int); // 0xe78 NEW_2
	
Label_3706:
	var_3851_int = 1; // 0xe7a PushI
	var_3852_int = var_3816_int + var_3851_int; // 0xe7b Add
	var_3853_int = 2; // 0xe7c PushI
	var_3854_bool = var_3852_int >= var_3853_int; // 0xe7d GE
	if(var_3854_bool == 0) goto Label_3730; // 0xe7e JumpB
	var_3855_int = 0; var_3856_string = ""; var_3857_string = ""; var_3858_int = 0; // 0xe7f PushV
	var_3855_int = var_3815_int; // 0xe80 Mov
	var_3856_string = "pers_patrool"; // 0xe81 MovS
	var_3857_string = "patrol.xml"; // 0xe82 MovS
	var_3858_int = 1; // 0xe83 MovI
	func_503(var_3855_int, var_3856_string, var_3857_string, var_3858_int); // 0xe84 NEW_2
	var_3859_bool = 0; var_3860_int = 0; // 0xe86 PushV
	var_3860_int = var_3816_int; // 0xe87 Mov
	func_1372(var_3859_bool, var_3860_int); // 0xe88 NEW_2
	if(var_3859_bool == 0) goto Label_3730; // 0xe8a JumpB
	var_3861_int = 0; var_3862_string = ""; var_3863_string = ""; var_3864_int = 0; // 0xe8b PushV
	var_3861_int = var_3815_int; // 0xe8c Mov
	var_3862_string = "pers_soldat_hand"; // 0xe8d MovS
	var_3863_string = "soldier_patrol.xml"; // 0xe8e MovS
	var_3864_int = 1; // 0xe8f MovI
	func_503(var_3861_int, var_3862_string, var_3863_string, var_3864_int); // 0xe90 NEW_2
	
Label_3730:
	var_3865_int = 1; // 0xe92 PushI
	var_3866_float = 0; var_3867_int = 0; // 0xe93 PushV
	var_3867_int = var_3816_int; // 0xe94 Mov
	func_1255(var_3866_float, var_3867_int); // 0xe95 NEW_2
	var_3823_int = var_3865_int * var_3866_float; // 0xe97 Mult2
	var_3868_int = var_3823_int; // 0xe98 Push
	if(var_3868_int == 0) goto Label_3745; // 0xe99 JumpB
	var_3869_int = 0; var_3870_string = ""; var_3871_string = ""; var_3872_int = 0; // 0xe9a PushV
	var_3869_int = var_3815_int; // 0xe9b Mov
	var_3870_string = "pers_bomber"; // 0xe9c MovS
	var_3871_string = "bomber.xml"; // 0xe9d MovS
	var_3872_int = var_3823_int; // 0xe9e Mov
	func_503(var_3869_int, var_3870_string, var_3871_string, var_3872_int); // 0xe9f NEW_2
	
Label_3745:
	goto Label_3821; // 0xea1 Jump
	
Label_3821:
	var_3873_bool = 0; var_3874_int = 0; var_3875_int = 0; // 0xeed PushV
	var_3874_int = var_3816_int; // 0xeee Mov
	var_3875_int = var_3817_int; // 0xeef Mov
	func_1345(var_3873_bool, var_3874_int, var_3875_int); // 0xef0 NEW_2
	if(var_3873_bool == 0) goto Label_3834; // 0xef2 JumpB
	var_3876_int = 0; var_3877_string = ""; var_3878_string = ""; var_3879_int = 0; // 0xef3 PushV
	var_3876_int = var_3815_int; // 0xef4 Mov
	var_3877_string = "pers_soldat"; // 0xef5 MovS
	var_3878_string = "soldier_marauder.xml"; // 0xef6 MovS
	var_3879_int = 2; // 0xef7 MovI
	func_503(var_3876_int, var_3877_string, var_3878_string, var_3879_int); // 0xef8 NEW_2
	
Label_3834:
	var_3880_bool = 0; var_3881_int = 0; // 0xefa PushV
	var_3881_int = var_3816_int; // 0xefb Mov
	func_1372(var_3880_bool, var_3881_int); // 0xefc NEW_2
	if(var_3880_bool == 0) goto Label_3846; // 0xefe JumpB
	var_3882_int = 0; var_3883_string = ""; var_3884_string = ""; var_3885_int = 0; // 0xeff PushV
	var_3882_int = var_3815_int; // 0xf00 Mov
	var_3883_string = "pers_sanitar"; // 0xf01 MovS
	var_3884_string = "sanitar.xml"; // 0xf02 MovS
	var_3885_int = 1; // 0xf03 MovI
	func_503(var_3882_int, var_3883_string, var_3884_string, var_3885_int); // 0xf04 NEW_2
	
Label_3846:
	return 8; // 0xf06 Return
	
Label_3746:
	var_3886_int = 0; var_3887_string = ""; var_3888_string = ""; var_3889_int = 0; // 0xea2 PushV
	var_3886_int = var_3815_int; // 0xea3 Mov
	var_3887_string = "pers_rat"; // 0xea4 MovS
	var_3888_string = "rat.xml"; // 0xea5 MovS
	var_3889_int = 3; // 0xea6 MovI
	func_503(var_3886_int, var_3887_string, var_3888_string, var_3889_int); // 0xea7 NEW_2
	var_3890_int = 0; var_3891_string = ""; var_3892_string = ""; var_3893_int = 0; // 0xea9 PushV
	var_3890_int = var_3815_int; // 0xeaa Mov
	var_3891_string = "pers_alkash"; // 0xeab MovS
	var_3892_string = "alkash.xml"; // 0xeac MovS
	var_3893_int = 1; // 0xead MovI
	func_503(var_3890_int, var_3891_string, var_3892_string, var_3893_int); // 0xeae NEW_2
	var_3894_int = 0; var_3895_string = ""; var_3896_string = ""; var_3897_int = 0; // 0xeb0 PushV
	var_3894_int = var_3815_int; // 0xeb1 Mov
	var_3895_string = "pers_dohodyaga"; // 0xeb2 MovS
	var_3896_string = "dohodyaga.xml"; // 0xeb3 MovS
	var_3897_int = 1; // 0xeb4 MovI
	func_503(var_3894_int, var_3895_string, var_3896_string, var_3897_int); // 0xeb5 NEW_2
	var_3898_int = 3; // 0xeb7 PushI
	var_3899_float = 0; var_3900_int = 0; // 0xeb8 PushV
	var_3900_int = var_3816_int; // 0xeb9 Mov
	func_1165(var_3899_float, var_3900_int); // 0xeba NEW_2
	var_3824_int = var_3898_int * var_3899_float; // 0xebc Mult2
	var_3901_int = var_3824_int; // 0xebd Push
	if(var_3901_int == 0) goto Label_3782; // 0xebe JumpB
	var_3902_int = 0; var_3903_string = ""; var_3904_string = ""; var_3905_int = 0; // 0xebf PushV
	var_3902_int = var_3815_int; // 0xec0 Mov
	var_3903_string = "pers_grabitel"; // 0xec1 MovS
	var_3904_string = "grabitel.xml"; // 0xec2 MovS
	var_3905_int = var_3824_int; // 0xec3 Mov
	func_503(var_3902_int, var_3903_string, var_3904_string, var_3905_int); // 0xec4 NEW_2
	
Label_3782:
	var_3906_int = 1; // 0xec6 PushI
	var_3907_int = var_3816_int + var_3906_int; // 0xec7 Add
	var_3908_int = 2; // 0xec8 PushI
	var_3909_bool = var_3907_int >= var_3908_int; // 0xec9 GE
	if(var_3909_bool == 0) goto Label_3806; // 0xeca JumpB
	var_3910_int = 0; var_3911_string = ""; var_3912_string = ""; var_3913_int = 0; // 0xecb PushV
	var_3910_int = var_3815_int; // 0xecc Mov
	var_3911_string = "pers_patrool"; // 0xecd MovS
	var_3912_string = "patrol.xml"; // 0xece MovS
	var_3913_int = 1; // 0xecf MovI
	func_503(var_3910_int, var_3911_string, var_3912_string, var_3913_int); // 0xed0 NEW_2
	var_3914_bool = 0; var_3915_int = 0; // 0xed2 PushV
	var_3915_int = var_3816_int; // 0xed3 Mov
	func_1372(var_3914_bool, var_3915_int); // 0xed4 NEW_2
	if(var_3914_bool == 0) goto Label_3806; // 0xed6 JumpB
	var_3916_int = 0; var_3917_string = ""; var_3918_string = ""; var_3919_int = 0; // 0xed7 PushV
	var_3916_int = var_3815_int; // 0xed8 Mov
	var_3917_string = "pers_soldat_hand"; // 0xed9 MovS
	var_3918_string = "soldier_patrol.xml"; // 0xeda MovS
	var_3919_int = 1; // 0xedb MovI
	func_503(var_3916_int, var_3917_string, var_3918_string, var_3919_int); // 0xedc NEW_2
	
Label_3806:
	var_3920_int = 1; // 0xede PushI
	var_3921_float = 0; var_3922_int = 0; // 0xedf PushV
	var_3922_int = var_3816_int; // 0xee0 Mov
	func_1255(var_3921_float, var_3922_int); // 0xee1 NEW_2
	var_3825_int = var_3920_int * var_3921_float; // 0xee3 Mult2
	var_3923_int = var_3825_int; // 0xee4 Push
	if(var_3923_int == 0) goto Label_3821; // 0xee5 JumpB
	var_3924_int = 0; var_3925_string = ""; var_3926_string = ""; var_3927_int = 0; // 0xee6 PushV
	var_3924_int = var_3815_int; // 0xee7 Mov
	var_3925_string = "pers_bomber"; // 0xee8 MovS
	var_3926_string = "bomber.xml"; // 0xee9 MovS
	var_3927_int = var_3825_int; // 0xeea Mov
	func_503(var_3924_int, var_3925_string, var_3926_string, var_3927_int); // 0xeeb NEW_2
}


func_10828(var_5086_bool)
{
	var_5089_int = 0; var_5090_string = ""; // 0x2a4d PushV
	var_5090_string = "k2LaraVisit"; // 0x2a4e MovS
	func_132(var_5089_int, var_5090_string); // 0x2a4f NEW_2
	var_5091_int = 0; // 0x2a51 PushI
	var_5092_bool = var_5089_int != var_5091_int; // 0x2a52 Neq
	if(var_5092_bool == 0) goto Label_10838; // 0x2a53 JumpB
	var_5086_bool = 1; // 0x2a54 MovB
	return 0; // 0x2a55 Return
	
Label_10838:
	var_5086_bool = 0; // 0x2a56 MovB
	return 0; // 0x2a57 Return
}


func_9804(var_5710_int, var_5711_float)
{
	var_5712_int = 0; var_5713_int = 0; var_5714_int = 0; var_5715_float = 0; // 0x264d PushV
	var_5713_int = 538962; // 0x264e MovI
	var_5714_int = 538961; // 0x264f MovI
	var_5715_float = var_5711_float; // 0x2650 Mov
	func_11153(var_5712_int, var_5713_int, var_5714_int, var_5715_float); // 0x2651 NEW_2
	var_5710_int = var_5712_int; // 0x2652 Mov
	return 0; // 0x2654 Return
}


func_7759(var_4428_object, var_4429_object, var_4430_int)
{
	var_4431_object = Obj(); var_4432_object = Obj(); var_4433_string = ""; var_4434_string = ""; var_4435_string = ""; // 0x1e50 PushV
	var_4432_object = var_4429_object; // 0x1e51 Mov
	var_4436_string = "term"; // 0x1e52 PushS
	var_4433_string = var_4436_string + var_4430_int; // 0x1e53 Add2
	var_4434_string = "pers_patrool"; // 0x1e54 MovS
	var_4435_string = "guard_term.xml"; // 0x1e55 MovS
	func_7742(var_4432_object, var_4433_string, var_4434_string, var_4435_string); // 0x1e56 NEW_2
	var_4428_object = var_4431_object; // 0x1e57 Mov
	return 0; // 0x1e59 Return
}


func_4688(var_3399_int, var_3400_int, var_3401_object, var_3402_object, var_3403_object, var_3404_object)
{
	var_3405_int = 0; // 0x1251 PushI
	var_3406_bool = var_3400_int == var_3405_int; // 0x1252 Eq
	if(var_3406_bool == 0) goto Label_4728; // 0x1253 JumpB
	var_3407_int = 0; var_3408_bool = 0; // 0x1254 PushV
	var_3407_int = 1; // 0x1255 MovI
	var_3408_bool = 0; // 0x1256 MovB
	func_796(var_3407_int, var_3408_bool); // 0x1257 NEW_2
	var_3409_int = 0; var_3410_bool = 0; var_3411_int = 0; // 0x1259 PushV
	var_3409_int = 1; // 0x125a MovI
	var_3410_bool = 0; // 0x125b MovB
	var_3411_int = 1; // 0x125c MovI
	func_813(var_3409_int, var_3410_bool, var_3411_int); // 0x125d NEW_2
	var_3412_int = 0; var_3413_int = 0; var_3414_object = Obj(); var_3415_object = Obj(); var_3416_object = Obj(); // 0x125f PushV
	var_3412_int = 1; // 0x1260 MovI
	var_3413_int = var_3399_int; // 0x1261 Mov
	var_3414_object = var_3401_object; // 0x1262 Mov
	var_3415_object = var_3402_object; // 0x1263 Mov
	var_3416_object = var_3403_object; // 0x1264 Mov
	func_720(var_3412_int, var_3413_int, var_3414_object, var_3415_object, var_3416_object); // 0x1265 NEW_2
	var_3417_object = Obj(); var_3418_int = 0; // 0x1267 PushV
	var_3417_object = var_3404_object; // 0x1268 Mov
	var_3418_int = 2; // 0x1269 MovI
	func_305(var_3418_int); // 0x126a NEW_2
	var_3419_int = 0; var_3420_bool = 0; var_3421_int = 0; // 0x126c PushV
	var_3419_int = 1; // 0x126d MovI
	var_3420_bool = 0; // 0x126e MovB
	var_3421_int = 8; // 0x126f MovI
	func_870(var_3419_int, var_3420_bool, var_3421_int); // 0x1270 NEW_2
	var_3422_int = 0; var_3423_bool = 0; var_3424_int = 0; // 0x1272 PushV
	var_3422_int = 1; // 0x1273 MovI
	var_3423_bool = 1; // 0x1274 MovB
	var_3424_int = 8; // 0x1275 MovI
	func_932(var_3422_int, var_3423_bool, var_3424_int); // 0x1276 NEW_2
	
Label_4728:
	var_3425_int = 0; var_3426_bool = 0; // 0x1278 PushV
	var_3425_int = 1; // 0x1279 MovI
	var_3426_bool = 0; // 0x127a MovB
	func_779(var_3425_int, var_3426_bool); // 0x127b NEW_2
	var_3427_int = 0; var_3428_int = 0; var_3429_int = 0; // 0x127d PushV
	var_3427_int = 1; // 0x127e MovI
	var_3428_int = var_3399_int; // 0x127f Mov
	var_3429_int = var_3400_int; // 0x1280 Mov
	func_4210(var_3427_int, var_3428_int, var_3429_int); // 0x1281 NEW_2
	return 0; // 0x1283 Return
}


func_9813(var_5289_int, var_5290_float)
{
	var_5291_int = 0; var_5292_int = 0; var_5293_int = 0; var_5294_float = 0; // 0x2656 PushV
	var_5292_int = 540537; // 0x2657 MovI
	var_5293_int = 540536; // 0x2658 MovI
	var_5294_float = var_5290_float; // 0x2659 Mov
	func_11153(var_5291_int, var_5292_int, var_5293_int, var_5294_float); // 0x265a NEW_2
	var_5289_int = var_5291_int; // 0x265b Mov
	return 0; // 0x265d Return
}


func_598(var_2055_string)
{
	var_2062_object = Obj(); var_2063_int = 0; var_2064_bool = 0; var_2065_cvector = CVector(0,0,0); var_2066_cvector = CVector(0,0,0); var_2067_object = Obj(); var_2068_string = ""; var_2069_object = Obj(); var_2070_int = 0; var_2071_bool = 0; var_2072_cvector = CVector(0,0,0); var_2073_cvector = CVector(0,0,0); var_2074_object = Obj(); var_2075_string = ""; // 0x256 PushV
	GetMainOutdoorScene(var_2069_object); // 0x257 Func
	var_2070_int = 0; // 0x259 MovI
	
Label_602:
	var_2076_int = 1; // 0x25a PushI
	var_2077_int = var_2070_int + var_2076_int; // 0x25b Add
	var_2078_int = var_2055_string + var_2077_int; // 0x25c Add
	GetLocator(var_2078_int, var_2071_bool, var_2072_cvector, var_2073_cvector); // 0x25d ObjFunc
	var_2079_bool = var_2071_bool == 0; // 0x25f Not
	if(var_2079_bool == 0) goto Label_610; // 0x260 JumpB
	goto Label_620; // 0x261 Jump
	
Label_620:
	return 14; // 0x26c Return
	
Label_610:
	var_2075_string = "fog_stat.xml"; // 0x262 MovS
	var_2080_string = "fog"; // 0x263 PushS
	AddStationaryActorByType(var_2074_object, var_2072_cvector, var_2073_cvector, var_2080_string, var_2075_string); // 0x264 ObjFunc
	add(var_2074_object); // 0x266 ObjFunc
	var_2074_object = 0; // 0x268 SetNull
	var_2081_int = 1; // 0x269 PushI
	var_2070_int = var_2070_int + var_2081_int; // 0x26a Add2
	goto Label_602; // 0x26b Jump
}


func_1624(var_1411_int, var_1412_int, var_1413_int)
{
	var_1414_int = 0; var_1415_int = 0; // 0x658 PushV
	var_1416_int = 1; // 0x659 PushI
	var_1417_int = var_1412_int + var_1416_int; // 0x65a Add
	var_1418_int = 12; // 0x65b PushI
	var_1419_bool = var_1417_int == var_1418_int; // 0x65c Eq
	if(var_1419_bool == 0) goto Label_1631; // 0x65d JumpB
	return 2; // 0x65e Return
	
Label_1631:
	var_1420_bool = 0; // 0x65f PushV
	var_1420_bool = 0; // 0x660 MovB
	var_1421_bool = 0; // 0x661 PushV
	var_1421_bool = 1; // 0x662 MovB
	var_1422_int = 7; // 0x663 PushI
	var_1423_bool = var_1413_int < var_1422_int; // 0x664 LT
	if(var_1423_bool == 0) goto Label_1642; // 0x665 JumpB
	var_1424_int = 21; // 0x666 PushI
	var_1425_bool = var_1413_int > var_1424_int; // 0x667 GT
	if(var_1425_bool == 0) goto Label_1642; // 0x668 JumpB
	var_1421_bool = 0; // 0x669 MovB
	
Label_1642:
	if(var_1421_bool == 0) goto Label_1647; // 0x66a JumpB
	var_1426_int = 0; // 0x66b PushI
	var_1427_bool = var_1412_int != var_1426_int; // 0x66c Neq
	if(var_1427_bool == 0) goto Label_1647; // 0x66d JumpB
	var_1420_bool = 1; // 0x66e MovB
	
Label_1647:
	if(var_1420_bool == 0) goto Label_1663; // 0x66f JumpB
	var_1428_int = 1; // 0x670 PushI
	var_1429_float = 0; var_1430_int = 0; // 0x671 PushV
	var_1430_int = var_1412_int; // 0x672 Mov
	func_1141(var_1429_float, var_1430_int); // 0x673 NEW_2
	var_1415_int = var_1428_int * var_1429_float; // 0x675 Mult2
	var_1431_int = var_1415_int; // 0x676 Push
	if(var_1431_int == 0) goto Label_1663; // 0x677 JumpB
	var_1432_int = 0; var_1433_string = ""; var_1434_string = ""; var_1435_int = 0; // 0x678 PushV
	var_1432_int = var_1411_int; // 0x679 Mov
	var_1433_string = "pers_grabitel"; // 0x67a MovS
	var_1434_string = "grabitel.xml"; // 0x67b MovS
	var_1435_int = var_1415_int; // 0x67c Mov
	func_503(var_1432_int, var_1433_string, var_1434_string, var_1435_int); // 0x67d NEW_2
	
Label_1663:
	var_1436_bool = 0; var_1437_int = 0; var_1438_int = 0; // 0x67f PushV
	var_1437_int = var_1412_int; // 0x680 Mov
	var_1438_int = var_1413_int; // 0x681 Mov
	func_1110(var_1436_bool, var_1437_int, var_1438_int); // 0x682 NEW_2
	if(var_1436_bool == 0) goto Label_1757; // 0x684 JumpB
	var_1439_int = 0; var_1440_string = ""; var_1441_string = ""; var_1442_int = 0; // 0x685 PushV
	var_1439_int = var_1411_int; // 0x686 Mov
	var_1440_string = "pers_unosha"; // 0x687 MovS
	var_1441_string = "unosha_attacker.xml"; // 0x688 MovS
	var_1442_int = 1; // 0x689 MovI
	func_503(var_1439_int, var_1440_string, var_1441_string, var_1442_int); // 0x68a NEW_2
	var_1443_int = 0; var_1444_string = ""; var_1445_string = ""; var_1446_int = 0; // 0x68c PushV
	var_1443_int = var_1411_int; // 0x68d Mov
	var_1444_string = "pers_unosha"; // 0x68e MovS
	var_1445_string = "unosha2_attacker.xml"; // 0x68f MovS
	var_1446_int = 1; // 0x690 MovI
	func_503(var_1443_int, var_1444_string, var_1445_string, var_1446_int); // 0x691 NEW_2
	var_1447_int = 0; var_1448_string = ""; var_1449_string = ""; var_1450_int = 0; // 0x693 PushV
	var_1447_int = var_1411_int; // 0x694 Mov
	var_1448_string = "pers_worker"; // 0x695 MovS
	var_1449_string = "worker_attacker.xml"; // 0x696 MovS
	var_1450_int = 1; // 0x697 MovI
	func_503(var_1447_int, var_1448_string, var_1449_string, var_1450_int); // 0x698 NEW_2
	var_1451_int = 0; var_1452_string = ""; var_1453_string = ""; var_1454_int = 0; // 0x69a PushV
	var_1451_int = var_1411_int; // 0x69b Mov
	var_1452_string = "pers_worker"; // 0x69c MovS
	var_1453_string = "worker2_attacker.xml"; // 0x69d MovS
	var_1454_int = 1; // 0x69e MovI
	func_503(var_1451_int, var_1452_string, var_1453_string, var_1454_int); // 0x69f NEW_2
	var_1455_int = 0; var_1456_string = ""; var_1457_string = ""; var_1458_int = 0; // 0x6a1 PushV
	var_1455_int = var_1411_int; // 0x6a2 Mov
	var_1456_string = "pers_woman"; // 0x6a3 MovS
	var_1457_string = "woman.xml"; // 0x6a4 MovS
	var_1458_int = 1; // 0x6a5 MovI
	func_503(var_1455_int, var_1456_string, var_1457_string, var_1458_int); // 0x6a6 NEW_2
	var_1459_int = 0; var_1460_string = ""; var_1461_string = ""; var_1462_int = 0; // 0x6a8 PushV
	var_1459_int = var_1411_int; // 0x6a9 Mov
	var_1460_string = "pers_alkash"; // 0x6aa MovS
	var_1461_string = "alkash.xml"; // 0x6ab MovS
	var_1462_int = 1; // 0x6ac MovI
	func_503(var_1459_int, var_1460_string, var_1461_string, var_1462_int); // 0x6ad NEW_2
	var_1463_bool = 0; // 0x6af PushV
	var_1463_bool = 0; // 0x6b0 MovB
	var_1464_int = 8; // 0x6b1 PushI
	var_1465_bool = var_1413_int > var_1464_int; // 0x6b2 GT
	if(var_1465_bool == 0) goto Label_1720; // 0x6b3 JumpB
	var_1466_int = 21; // 0x6b4 PushI
	var_1467_bool = var_1413_int < var_1466_int; // 0x6b5 LT
	if(var_1467_bool == 0) goto Label_1720; // 0x6b6 JumpB
	var_1463_bool = 1; // 0x6b7 MovB
	
Label_1720:
	if(var_1463_bool == 0) goto Label_1756; // 0x6b8 JumpB
	var_1468_int = 0; var_1469_string = ""; var_1470_string = ""; var_1471_int = 0; // 0x6b9 PushV
	var_1468_int = var_1411_int; // 0x6ba Mov
	var_1469_string = "pers_boy"; // 0x6bb MovS
	var_1470_string = "boy.xml"; // 0x6bc MovS
	var_1471_int = 1; // 0x6bd MovI
	func_503(var_1468_int, var_1469_string, var_1470_string, var_1471_int); // 0x6be NEW_2
	var_1472_int = 0; var_1473_string = ""; var_1474_string = ""; var_1475_int = 0; // 0x6c0 PushV
	var_1472_int = var_1411_int; // 0x6c1 Mov
	var_1473_string = "pers_girl"; // 0x6c2 MovS
	var_1474_string = "girl.xml"; // 0x6c3 MovS
	var_1475_int = 1; // 0x6c4 MovI
	func_503(var_1472_int, var_1473_string, var_1474_string, var_1475_int); // 0x6c5 NEW_2
	var_1476_int = 0; var_1477_string = ""; var_1478_string = ""; var_1479_int = 0; // 0x6c7 PushV
	var_1476_int = var_1411_int; // 0x6c8 Mov
	var_1477_string = "pers_girl"; // 0x6c9 MovS
	var_1478_string = "girl2.xml"; // 0x6ca MovS
	var_1479_int = 1; // 0x6cb MovI
	func_503(var_1476_int, var_1477_string, var_1478_string, var_1479_int); // 0x6cc NEW_2
	var_1480_int = 0; var_1481_string = ""; var_1482_string = ""; var_1483_int = 0; // 0x6ce PushV
	var_1480_int = var_1411_int; // 0x6cf Mov
	var_1481_string = "pers_littleboy"; // 0x6d0 MovS
	var_1482_string = "littleboy.xml"; // 0x6d1 MovS
	var_1483_int = 1; // 0x6d2 MovI
	func_503(var_1480_int, var_1481_string, var_1482_string, var_1483_int); // 0x6d3 NEW_2
	var_1484_int = 0; var_1485_string = ""; var_1486_string = ""; var_1487_int = 0; // 0x6d5 PushV
	var_1484_int = var_1411_int; // 0x6d6 Mov
	var_1485_string = "pers_littlegirl"; // 0x6d7 MovS
	var_1486_string = "littlegirl.xml"; // 0x6d8 MovS
	var_1487_int = 1; // 0x6d9 MovI
	func_503(var_1484_int, var_1485_string, var_1486_string, var_1487_int); // 0x6da NEW_2
	
Label_1756:
	goto Label_1883; // 0x6dc Jump
	
Label_1883:
	var_1488_bool = 0; var_1489_int = 0; var_1490_int = 0; // 0x75b PushV
	var_1489_int = var_1412_int; // 0x75c Mov
	var_1490_int = var_1413_int; // 0x75d Mov
	func_1345(var_1488_bool, var_1489_int, var_1490_int); // 0x75e NEW_2
	if(var_1488_bool == 0) goto Label_1896; // 0x760 JumpB
	var_1491_int = 0; var_1492_string = ""; var_1493_string = ""; var_1494_int = 0; // 0x761 PushV
	var_1491_int = var_1411_int; // 0x762 Mov
	var_1492_string = "pers_soldat"; // 0x763 MovS
	var_1493_string = "soldier_marauder.xml"; // 0x764 MovS
	var_1494_int = 2; // 0x765 MovI
	func_503(var_1491_int, var_1492_string, var_1493_string, var_1494_int); // 0x766 NEW_2
	
Label_1896:
	return 2; // 0x768 Return
	
Label_1757:
	var_1495_bool = 0; // 0x6dd PushV
	var_1495_bool = 0; // 0x6de MovB
	var_1496_int = 8; // 0x6df PushI
	var_1497_bool = var_1413_int > var_1496_int; // 0x6e0 GT
	if(var_1497_bool == 0) goto Label_1766; // 0x6e1 JumpB
	var_1498_int = 21; // 0x6e2 PushI
	var_1499_bool = var_1413_int < var_1498_int; // 0x6e3 LT
	if(var_1499_bool == 0) goto Label_1766; // 0x6e4 JumpB
	var_1495_bool = 1; // 0x6e5 MovB
	
Label_1766:
	if(var_1495_bool == 0) goto Label_1843; // 0x6e6 JumpB
	var_1500_int = 0; var_1501_string = ""; var_1502_string = ""; var_1503_int = 0; // 0x6e7 PushV
	var_1500_int = var_1411_int; // 0x6e8 Mov
	var_1501_string = "pers_woman"; // 0x6e9 MovS
	var_1502_string = "woman.xml"; // 0x6ea MovS
	var_1503_int = 1; // 0x6eb MovI
	func_503(var_1500_int, var_1501_string, var_1502_string, var_1503_int); // 0x6ec NEW_2
	var_1504_int = 0; var_1505_string = ""; var_1506_string = ""; var_1507_int = 0; // 0x6ee PushV
	var_1504_int = var_1411_int; // 0x6ef Mov
	var_1505_string = "pers_unosha"; // 0x6f0 MovS
	var_1506_string = "unosha.xml"; // 0x6f1 MovS
	var_1507_int = 1; // 0x6f2 MovI
	func_503(var_1504_int, var_1505_string, var_1506_string, var_1507_int); // 0x6f3 NEW_2
	var_1508_int = 0; var_1509_string = ""; var_1510_string = ""; var_1511_int = 0; // 0x6f5 PushV
	var_1508_int = var_1411_int; // 0x6f6 Mov
	var_1509_string = "pers_unosha"; // 0x6f7 MovS
	var_1510_string = "unosha2.xml"; // 0x6f8 MovS
	var_1511_int = 1; // 0x6f9 MovI
	func_503(var_1508_int, var_1509_string, var_1510_string, var_1511_int); // 0x6fa NEW_2
	var_1512_int = 0; var_1513_string = ""; var_1514_string = ""; var_1515_int = 0; // 0x6fc PushV
	var_1512_int = var_1411_int; // 0x6fd Mov
	var_1513_string = "pers_boy"; // 0x6fe MovS
	var_1514_string = "boy.xml"; // 0x6ff MovS
	var_1515_int = 1; // 0x700 MovI
	func_503(var_1512_int, var_1513_string, var_1514_string, var_1515_int); // 0x701 NEW_2
	var_1516_int = 0; var_1517_string = ""; var_1518_string = ""; var_1519_int = 0; // 0x703 PushV
	var_1516_int = var_1411_int; // 0x704 Mov
	var_1517_string = "pers_girl"; // 0x705 MovS
	var_1518_string = "girl.xml"; // 0x706 MovS
	var_1519_int = 1; // 0x707 MovI
	func_503(var_1516_int, var_1517_string, var_1518_string, var_1519_int); // 0x708 NEW_2
	var_1520_int = 0; var_1521_string = ""; var_1522_string = ""; var_1523_int = 0; // 0x70a PushV
	var_1520_int = var_1411_int; // 0x70b Mov
	var_1521_string = "pers_girl"; // 0x70c MovS
	var_1522_string = "girl2.xml"; // 0x70d MovS
	var_1523_int = 1; // 0x70e MovI
	func_503(var_1520_int, var_1521_string, var_1522_string, var_1523_int); // 0x70f NEW_2
	var_1524_int = 0; var_1525_string = ""; var_1526_string = ""; var_1527_int = 0; // 0x711 PushV
	var_1524_int = var_1411_int; // 0x712 Mov
	var_1525_string = "pers_littleboy"; // 0x713 MovS
	var_1526_string = "littleboy.xml"; // 0x714 MovS
	var_1527_int = 1; // 0x715 MovI
	func_503(var_1524_int, var_1525_string, var_1526_string, var_1527_int); // 0x716 NEW_2
	var_1528_int = 0; var_1529_string = ""; var_1530_string = ""; var_1531_int = 0; // 0x718 PushV
	var_1528_int = var_1411_int; // 0x719 Mov
	var_1529_string = "pers_littlegirl"; // 0x71a MovS
	var_1530_string = "littlegirl.xml"; // 0x71b MovS
	var_1531_int = 1; // 0x71c MovI
	func_503(var_1528_int, var_1529_string, var_1530_string, var_1531_int); // 0x71d NEW_2
	var_1532_int = 0; var_1533_string = ""; var_1534_string = ""; var_1535_int = 0; // 0x71f PushV
	var_1532_int = var_1411_int; // 0x720 Mov
	var_1533_string = "pers_alkash"; // 0x721 MovS
	var_1534_string = "alkash.xml"; // 0x722 MovS
	var_1535_int = 1; // 0x723 MovI
	func_503(var_1532_int, var_1533_string, var_1534_string, var_1535_int); // 0x724 NEW_2
	var_1536_int = 1; // 0x726 PushI
	var_1537_int = var_1412_int + var_1536_int; // 0x727 Add
	var_1538_int = 3; // 0x728 PushI
	var_1539_bool = var_1537_int >= var_1538_int; // 0x729 GE
	if(var_1539_bool == 0) goto Label_1842; // 0x72a JumpB
	var_1540_int = 0; var_1541_string = ""; var_1542_string = ""; var_1543_int = 0; // 0x72b PushV
	var_1540_int = var_1411_int; // 0x72c Mov
	var_1541_string = "pers_dohodyaga"; // 0x72d MovS
	var_1542_string = "dohodyaga.xml"; // 0x72e MovS
	var_1543_int = 1; // 0x72f MovI
	func_503(var_1540_int, var_1541_string, var_1542_string, var_1543_int); // 0x730 NEW_2
	
Label_1842:
	goto Label_1883; // 0x732 Jump
	
Label_1843:
	var_1544_int = 0; var_1545_string = ""; var_1546_string = ""; var_1547_int = 0; // 0x733 PushV
	var_1544_int = var_1411_int; // 0x734 Mov
	var_1545_string = "pers_woman"; // 0x735 MovS
	var_1546_string = "woman.xml"; // 0x736 MovS
	var_1547_int = 1; // 0x737 MovI
	func_503(var_1544_int, var_1545_string, var_1546_string, var_1547_int); // 0x738 NEW_2
	var_1548_int = 0; var_1549_string = ""; var_1550_string = ""; var_1551_int = 0; // 0x73a PushV
	var_1548_int = var_1411_int; // 0x73b Mov
	var_1549_string = "pers_unosha"; // 0x73c MovS
	var_1550_string = "unosha.xml"; // 0x73d MovS
	var_1551_int = 1; // 0x73e MovI
	func_503(var_1548_int, var_1549_string, var_1550_string, var_1551_int); // 0x73f NEW_2
	var_1552_int = 0; var_1553_string = ""; var_1554_string = ""; var_1555_int = 0; // 0x741 PushV
	var_1552_int = var_1411_int; // 0x742 Mov
	var_1553_string = "pers_unosha"; // 0x743 MovS
	var_1554_string = "unosha2.xml"; // 0x744 MovS
	var_1555_int = 1; // 0x745 MovI
	func_503(var_1552_int, var_1553_string, var_1554_string, var_1555_int); // 0x746 NEW_2
	var_1556_int = 0; var_1557_string = ""; var_1558_string = ""; var_1559_int = 0; // 0x748 PushV
	var_1556_int = var_1411_int; // 0x749 Mov
	var_1557_string = "pers_alkash"; // 0x74a MovS
	var_1558_string = "alkash.xml"; // 0x74b MovS
	var_1559_int = 1; // 0x74c MovI
	func_503(var_1556_int, var_1557_string, var_1558_string, var_1559_int); // 0x74d NEW_2
	var_1560_int = 1; // 0x74f PushI
	var_1561_int = var_1412_int + var_1560_int; // 0x750 Add
	var_1562_int = 3; // 0x751 PushI
	var_1563_bool = var_1561_int >= var_1562_int; // 0x752 GE
	if(var_1563_bool == 0) goto Label_1883; // 0x753 JumpB
	var_1564_int = 0; var_1565_string = ""; var_1566_string = ""; var_1567_int = 0; // 0x754 PushV
	var_1564_int = var_1411_int; // 0x755 Mov
	var_1565_string = "pers_dohodyaga"; // 0x756 MovS
	var_1566_string = "dohodyaga.xml"; // 0x757 MovS
	var_1567_int = 1; // 0x758 MovI
	func_503(var_1564_int, var_1565_string, var_1566_string, var_1567_int); // 0x759 NEW_2
}


func_10840(var_5686_bool)
{
	var_5689_int = 0; var_5690_string = ""; // 0x2a59 PushV
	var_5690_string = "k5LaskaVisit"; // 0x2a5a MovS
	func_132(var_5689_int, var_5690_string); // 0x2a5b NEW_2
	var_5691_int = 0; // 0x2a5d PushI
	var_5692_bool = var_5689_int != var_5691_int; // 0x2a5e Neq
	if(var_5692_bool == 0) goto Label_10850; // 0x2a5f JumpB
	var_5686_bool = 1; // 0x2a60 MovB
	return 0; // 0x2a61 Return
	
Label_10850:
	var_5686_bool = 0; // 0x2a62 MovB
	return 0; // 0x2a63 Return
}


func_7770(var_4472_bool)
{
	var_4473_object = Obj(); var_4474_object = Obj(); // 0x1e5a PushV
	var_4475_string = "arena_light"; // 0x1e5b PushS
	FindActor(var_4474_object, var_4475_string); // 0x1e5c Func
	Switch(var_4472_bool); // 0x1e5e ObjFunc
	return 2; // 0x1e60 Return
}


func_9822(var_5674_int, var_5675_float)
{
	var_5676_int = 0; var_5677_int = 0; var_5678_int = 0; var_5679_float = 0; // 0x265f PushV
	var_5677_int = 539492; // 0x2660 MovI
	var_5678_int = 539491; // 0x2661 MovI
	var_5679_float = var_5675_float; // 0x2662 Mov
	func_11153(var_5676_int, var_5677_int, var_5678_int, var_5679_float); // 0x2663 NEW_2
	var_5674_int = var_5676_int; // 0x2664 Mov
	return 0; // 0x2666 Return
}


func_7778()
{
	var_4390_object = Obj(); var_4391_bool = 0; var_4392_cvector = CVector(0,0,0); var_4393_cvector = CVector(0,0,0); var_4394_int = 0; var_4395_object = Obj(); var_4396_object = Obj(); var_4397_bool = 0; var_4398_cvector = CVector(0,0,0); var_4399_cvector = CVector(0,0,0); var_4400_int = 0; var_4401_object = Obj(); // 0x1e62 PushV
	var_4402_string = "Setting arena..."; // 0x1e63 PushS
	Trace(var_4402_string); // 0x1e64 Func
	var_4403_object = GlobalVars[11]; // 0x1e66 PushGE
	var_4404_bool = var_4403_object == 0; // 0x1e67 NullEq
	if(var_4404_bool == 0) goto Label_7840; // 0x1e68 JumpB
	GetMainOutdoorScene(var_4396_object); // 0x1e69 Func
	var_4405_string = "pt_arena_manager"; // 0x1e6b PushS
	GetLocator(var_4405_string, var_4397_bool, var_4398_cvector, var_4399_cvector); // 0x1e6c ObjFunc
	var_4406_bool = var_4397_bool == 0; // 0x1e6e Not
	if(var_4406_bool == 0) goto Label_7796; // 0x1e6f JumpB
	var_4407_string = "Locator doesn't exist for arena manager"; // 0x1e70 PushS
	Trace(var_4407_string); // 0x1e71 Func
	goto Label_7805; // 0x1e73 Jump
	
Label_7805:
	var_4400_int = 0; // 0x1e7d MovI
	
Label_7806:
	var_4408_int = 6; // 0x1e7e PushI
	var_4409_bool = var_4400_int < var_4408_int; // 0x1e7f LT
	if(var_4409_bool == 0) goto Label_7835; // 0x1e80 JumpB
	var_4410_string = "pt_arena_torch"; // 0x1e81 PushS
	var_4411_int = 1; // 0x1e82 PushI
	var_4412_int = var_4400_int + var_4411_int; // 0x1e83 Add
	var_4413_int = var_4410_string + var_4412_int; // 0x1e84 Add
	GetLocator(var_4413_int, var_4397_bool, var_4398_cvector, var_4399_cvector); // 0x1e85 ObjFunc
	var_4414_bool = var_4397_bool == 0; // 0x1e87 Not
	if(var_4414_bool == 0) goto Label_7824; // 0x1e88 JumpB
	var_4415_string = "Locator doesn't exist for arena torch "; // 0x1e89 PushS
	var_4416_int = 1; // 0x1e8a PushI
	var_4417_int = var_4400_int + var_4416_int; // 0x1e8b Add
	var_4418_int = var_4415_string + var_4417_int; // 0x1e8c Add
	Trace(var_4418_int); // 0x1e8d Func
	goto Label_7832; // 0x1e8f Jump
	
Label_7832:
	var_4419_int = 1; // 0x1e98 PushI
	var_4400_int = var_4400_int + var_4419_int; // 0x1e99 Add2
	goto Label_7806; // 0x1e9a Jump
	
Label_7824:
	var_4420_string = "scripted"; // 0x1e90 PushS
	var_4421_string = "torch.xml"; // 0x1e91 PushS
	AddActorByType(var_4401_object, var_4420_string, var_4396_object, var_4398_cvector, var_4399_cvector, var_4421_string); // 0x1e92 Func
	var_4422_object = GlobalVars[12]; // 0x1e94 PushGE
	add(var_4401_object); // 0x1e95 ObjFunc
	var_4401_object = 0; // 0x1e97 SetNull
	
Label_7835:
	var_4423_bool = 0; // 0x1e9b PushV
	var_4423_bool = 1; // 0x1e9c MovB
	func_7770(var_4423_bool); // 0x1e9d NEW_2
	var_4396_object = 0; // 0x1e9f SetNull
	
Label_7840:
	return 12; // 0x1ea0 Return
	
Label_7796:
	var_4427_object = GlobalVars[11]; // 0x1e74 PushGE
	var_4428_object = Obj(); var_4429_object = Obj(); var_4430_cvector = CVector(0,0,0); var_4431_cvector = CVector(0,0,0); // 0x1e75 PushV
	var_4429_object = var_4396_object; // 0x1e76 Mov
	var_4430_cvector = var_4398_cvector; // 0x1e77 Mov
	var_4431_cvector = var_4399_cvector; // 0x1e78 Mov
	func_13415(var_4429_object, var_4430_cvector, var_4431_cvector); // 0x1e79 NEW_2
	var_4427_object = var_4428_object; // 0x1e7a Mov
	GlobalVars[11] = var_4427_object; // 0x1e7c PopGE
}


func_10852(var_5538_bool)
{
	var_5541_int = 0; var_5542_string = ""; // 0x2a65 PushV
	var_5542_string = "k2KaterinaVisit"; // 0x2a66 MovS
	func_132(var_5541_int, var_5542_string); // 0x2a67 NEW_2
	var_5543_int = 0; // 0x2a69 PushI
	var_5544_bool = var_5541_int != var_5543_int; // 0x2a6a Neq
	if(var_5544_bool == 0) goto Label_10862; // 0x2a6b JumpB
	var_5538_bool = 1; // 0x2a6c MovB
	return 0; // 0x2a6d Return
	
Label_10862:
	var_5538_bool = 0; // 0x2a6e MovB
	return 0; // 0x2a6f Return
}


func_9831(var_5702_int, var_5703_float)
{
	var_5704_int = 0; var_5705_int = 0; var_5706_int = 0; var_5707_float = 0; // 0x2668 PushV
	var_5705_int = 538964; // 0x2669 MovI
	var_5706_int = 538963; // 0x266a MovI
	var_5707_float = var_5703_float; // 0x266b Mov
	func_11153(var_5704_int, var_5705_int, var_5706_int, var_5707_float); // 0x266c NEW_2
	var_5702_int = var_5704_int; // 0x266d Mov
	return 0; // 0x266f Return
}


func_622(var_565_int, var_567_object, var_568_object, var_569_object)
{
	var_570_int = 0; var_571_bool = 0; // 0x26f PushV
	var_570_int = var_565_int; // 0x270 Mov
	var_571_bool = 1; // 0x271 MovB
	func_542(var_570_int, var_571_bool); // 0x272 NEW_2
	var_598_object = Obj(); // 0x274 PushV
	var_598_object = var_567_object; // 0x275 Mov
	func_263(var_598_object); // 0x276 NEW_2
	var_609_object = Obj(); // 0x278 PushV
	var_609_object = var_568_object; // 0x279 Mov
	func_263(var_609_object); // 0x27a NEW_2
	var_610_object = Obj(); // 0x27c PushV
	var_610_object = var_569_object; // 0x27d Mov
	func_263(var_610_object); // 0x27e NEW_2
	return 0; // 0x280 Return
}


func_10864(var_5640_bool)
{
	var_5643_int = 0; var_5644_string = ""; // 0x2a71 PushV
	var_5644_string = "k3AlexandrVisit"; // 0x2a72 MovS
	func_132(var_5643_int, var_5644_string); // 0x2a73 NEW_2
	var_5645_int = 0; // 0x2a75 PushI
	var_5646_bool = var_5643_int != var_5645_int; // 0x2a76 Neq
	if(var_5646_bool == 0) goto Label_10874; // 0x2a77 JumpB
	var_5640_bool = 1; // 0x2a78 MovB
	return 0; // 0x2a79 Return
	
Label_10874:
	var_5640_bool = 0; // 0x2a7a MovB
	return 0; // 0x2a7b Return
}


func_9840(var_5694_int, var_5695_float)
{
	var_5696_int = 0; var_5697_int = 0; var_5698_int = 0; var_5699_float = 0; // 0x2671 PushV
	var_5697_int = 538958; // 0x2672 MovI
	var_5698_int = 538957; // 0x2673 MovI
	var_5699_float = var_5695_float; // 0x2674 Mov
	func_11153(var_5696_int, var_5697_int, var_5698_int, var_5699_float); // 0x2675 NEW_2
	var_5694_int = var_5696_int; // 0x2676 Mov
	return 0; // 0x2678 Return
}


func_6776(var_2932_int, var_2933_int, var_2934_object, var_2935_object, var_2936_object, var_2937_object)
{
	var_2938_int = 0; // 0x1a79 PushI
	var_2939_bool = var_2933_int == var_2938_int; // 0x1a7a Eq
	if(var_2939_bool == 0) goto Label_6816; // 0x1a7b JumpB
	var_2940_int = 0; var_2941_bool = 0; // 0x1a7c PushV
	var_2940_int = 12; // 0x1a7d MovI
	var_2941_bool = 1; // 0x1a7e MovB
	func_796(var_2940_int, var_2941_bool); // 0x1a7f NEW_2
	var_2942_int = 0; var_2943_bool = 0; var_2944_int = 0; // 0x1a81 PushV
	var_2942_int = 12; // 0x1a82 MovI
	var_2943_bool = 1; // 0x1a83 MovB
	var_2944_int = 1; // 0x1a84 MovI
	func_813(var_2942_int, var_2943_bool, var_2944_int); // 0x1a85 NEW_2
	var_2945_int = 0; var_2946_int = 0; var_2947_object = Obj(); var_2948_object = Obj(); var_2949_object = Obj(); // 0x1a87 PushV
	var_2945_int = 12; // 0x1a88 MovI
	var_2946_int = var_2932_int; // 0x1a89 Mov
	var_2947_object = var_2934_object; // 0x1a8a Mov
	var_2948_object = var_2935_object; // 0x1a8b Mov
	var_2949_object = var_2936_object; // 0x1a8c Mov
	func_641(var_2945_int, var_2946_int, var_2947_object, var_2948_object, var_2949_object); // 0x1a8d NEW_2
	var_2950_object = Obj(); var_2951_int = 0; // 0x1a8f PushV
	var_2950_object = var_2937_object; // 0x1a90 Mov
	var_2951_int = 1; // 0x1a91 MovI
	func_305(var_2951_int); // 0x1a92 NEW_2
	var_2952_int = 0; var_2953_bool = 0; var_2954_int = 0; // 0x1a94 PushV
	var_2952_int = 12; // 0x1a95 MovI
	var_2953_bool = 1; // 0x1a96 MovB
	var_2954_int = 4; // 0x1a97 MovI
	func_870(var_2952_int, var_2953_bool, var_2954_int); // 0x1a98 NEW_2
	var_2955_int = 0; var_2956_bool = 0; var_2957_int = 0; // 0x1a9a PushV
	var_2955_int = 12; // 0x1a9b MovI
	var_2956_bool = 0; // 0x1a9c MovB
	var_2957_int = 4; // 0x1a9d MovI
	func_932(var_2955_int, var_2956_bool, var_2957_int); // 0x1a9e NEW_2
	
Label_6816:
	var_2958_int = 0; var_2959_bool = 0; // 0x1aa0 PushV
	var_2958_int = 12; // 0x1aa1 MovI
	var_2959_bool = 0; // 0x1aa2 MovB
	func_779(var_2958_int, var_2959_bool); // 0x1aa3 NEW_2
	var_2960_int = 0; var_2961_int = 0; var_2962_int = 0; // 0x1aa5 PushV
	var_2960_int = 12; // 0x1aa6 MovI
	var_2961_int = var_2932_int; // 0x1aa7 Mov
	var_2962_int = var_2933_int; // 0x1aa8 Mov
	func_2764(var_2960_int, var_2961_int, var_2962_int); // 0x1aa9 NEW_2
	return 0; // 0x1aab Return
}


func_9849(var_5265_int, var_5266_float)
{
	var_5267_int = 0; var_5268_int = 0; var_5269_int = 0; var_5270_float = 0; // 0x267a PushV
	var_5268_int = 539494; // 0x267b MovI
	var_5269_int = 539493; // 0x267c MovI
	var_5270_float = var_5266_float; // 0x267d Mov
	func_11153(var_5267_int, var_5268_int, var_5269_int, var_5270_float); // 0x267e NEW_2
	var_5265_int = var_5267_int; // 0x267f Mov
	return 0; // 0x2681 Return
}


func_5755(var_2661_int, var_2662_int, var_2663_object, var_2664_object, var_2665_object, var_2666_object)
{
	var_2667_int = 0; // 0x167c PushI
	var_2668_bool = var_2662_int == var_2667_int; // 0x167d Eq
	if(var_2668_bool == 0) goto Label_5795; // 0x167e JumpB
	var_2669_int = 0; var_2670_bool = 0; // 0x167f PushV
	var_2669_int = 7; // 0x1680 MovI
	var_2670_bool = 1; // 0x1681 MovB
	func_796(var_2669_int, var_2670_bool); // 0x1682 NEW_2
	var_2671_int = 0; var_2672_bool = 0; var_2673_int = 0; // 0x1684 PushV
	var_2671_int = 7; // 0x1685 MovI
	var_2672_bool = 1; // 0x1686 MovB
	var_2673_int = 1; // 0x1687 MovI
	func_813(var_2671_int, var_2672_bool, var_2673_int); // 0x1688 NEW_2
	var_2674_int = 0; var_2675_int = 0; var_2676_object = Obj(); var_2677_object = Obj(); var_2678_object = Obj(); // 0x168a PushV
	var_2674_int = 7; // 0x168b MovI
	var_2675_int = var_2661_int; // 0x168c Mov
	var_2676_object = var_2663_object; // 0x168d Mov
	var_2677_object = var_2664_object; // 0x168e Mov
	var_2678_object = var_2665_object; // 0x168f Mov
	func_641(var_2674_int, var_2675_int, var_2676_object, var_2677_object, var_2678_object); // 0x1690 NEW_2
	var_2679_object = Obj(); var_2680_int = 0; // 0x1692 PushV
	var_2679_object = var_2666_object; // 0x1693 Mov
	var_2680_int = 1; // 0x1694 MovI
	func_305(var_2680_int); // 0x1695 NEW_2
	var_2681_int = 0; var_2682_bool = 0; var_2683_int = 0; // 0x1697 PushV
	var_2681_int = 7; // 0x1698 MovI
	var_2682_bool = 1; // 0x1699 MovB
	var_2683_int = 6; // 0x169a MovI
	func_870(var_2681_int, var_2682_bool, var_2683_int); // 0x169b NEW_2
	var_2684_int = 0; var_2685_bool = 0; var_2686_int = 0; // 0x169d PushV
	var_2684_int = 7; // 0x169e MovI
	var_2685_bool = 0; // 0x169f MovB
	var_2686_int = 6; // 0x16a0 MovI
	func_932(var_2684_int, var_2685_bool, var_2686_int); // 0x16a1 NEW_2
	
Label_5795:
	var_2687_int = 0; var_2688_bool = 0; // 0x16a3 PushV
	var_2687_int = 7; // 0x16a4 MovI
	var_2688_bool = 0; // 0x16a5 MovB
	func_779(var_2687_int, var_2688_bool); // 0x16a6 NEW_2
	var_2689_int = 0; var_2690_int = 0; var_2691_int = 0; // 0x16a8 PushV
	var_2689_int = 7; // 0x16a9 MovI
	var_2690_int = var_2661_int; // 0x16aa Mov
	var_2691_int = var_2662_int; // 0x16ab Mov
	func_2764(var_2689_int, var_2690_int, var_2691_int); // 0x16ac NEW_2
	return 0; // 0x16ae Return
}


func_10876(var_5648_bool)
{
	var_5651_int = 0; var_5652_string = ""; // 0x2a7d PushV
	var_5652_string = "k3KaterinaVisit"; // 0x2a7e MovS
	func_132(var_5651_int, var_5652_string); // 0x2a7f NEW_2
	var_5653_int = 0; // 0x2a81 PushI
	var_5654_bool = var_5651_int != var_5653_int; // 0x2a82 Neq
	if(var_5654_bool == 0) goto Label_10886; // 0x2a83 JumpB
	var_5648_bool = 1; // 0x2a84 MovB
	return 0; // 0x2a85 Return
	
Label_10886:
	var_5648_bool = 0; // 0x2a86 MovB
	return 0; // 0x2a87 Return
}


func_641(var_2017_int, var_2018_int, var_2019_object, var_2020_object, var_2021_object)
{
	var_2022_int = 0; var_2023_bool = 0; // 0x282 PushV
	var_2022_int = var_2017_int; // 0x283 Mov
	var_2023_bool = 0; // 0x284 MovB
	func_542(var_2022_int, var_2023_bool); // 0x285 NEW_2
	var_2024_object = Obj(); // 0x287 PushV
	var_2024_object = var_2019_object; // 0x288 Mov
	func_263(var_2024_object); // 0x289 NEW_2
	var_2025_object = Obj(); // 0x28b PushV
	var_2025_object = var_2020_object; // 0x28c Mov
	func_263(var_2025_object); // 0x28d NEW_2
	var_2026_object = Obj(); // 0x28f PushV
	var_2026_object = var_2021_object; // 0x290 Mov
	func_263(var_2026_object); // 0x291 NEW_2
	var_2027_int = 8; // 0x293 PushI
	var_2028_bool = var_2018_int < var_2027_int; // 0x294 LT
	if(var_2028_bool == 0) goto Label_685; // 0x295 JumpB
	var_2029_string = ""; var_2030_object = Obj(); var_2031_string = ""; var_2032_string = ""; // 0x296 PushV
	var_2033_string = "pt_blockpost"; // 0x297 PushS
	var_2034_int = 1; // 0x298 PushI
	var_2035_int = var_2017_int + var_2034_int; // 0x299 Add
	var_2036_int = var_2033_string + var_2035_int; // 0x29a Add
	var_2037_string = "_1_"; // 0x29b PushS
	var_2029_string = var_2036_int + var_2037_string; // 0x29c Add2
	var_2030_object = var_2019_object; // 0x29d Mov
	var_2031_string = "pers_patrool"; // 0x29e MovS
	var_2032_string = "patrol_stat.xml"; // 0x29f MovS
	func_576(var_2030_object, var_2031_string, var_2032_string); // 0x2a0 NEW_2
	var_2055_string = ""; var_2056_object = Obj(); // 0x2a2 PushV
	var_2057_string = "pt_fog"; // 0x2a3 PushS
	var_2058_int = 1; // 0x2a4 PushI
	var_2059_int = var_2017_int + var_2058_int; // 0x2a5 Add
	var_2060_int = var_2057_string + var_2059_int; // 0x2a6 Add
	var_2061_string = "_"; // 0x2a7 PushS
	var_2055_string = var_2060_int + var_2061_string; // 0x2a8 Add2
	var_2056_object = var_2021_object; // 0x2a9 Mov
	func_598(var_2056_object); // 0x2aa NEW_2
	goto Label_719; // 0x2ac Jump
	
Label_719:
	return 0; // 0x2cf Return
	
Label_685:
	var_2082_string = ""; var_2083_object = Obj(); var_2084_string = ""; var_2085_string = ""; // 0x2ad PushV
	var_2086_string = "pt_blockpost"; // 0x2ae PushS
	var_2087_int = 1; // 0x2af PushI
	var_2088_int = var_2017_int + var_2087_int; // 0x2b0 Add
	var_2089_int = var_2086_string + var_2088_int; // 0x2b1 Add
	var_2090_string = "_1_"; // 0x2b2 PushS
	var_2082_string = var_2089_int + var_2090_string; // 0x2b3 Add2
	var_2083_object = var_2019_object; // 0x2b4 Mov
	var_2084_string = "pers_soldat"; // 0x2b5 MovS
	var_2085_string = "soldier.xml"; // 0x2b6 MovS
	func_576(var_2083_object, var_2084_string, var_2085_string); // 0x2b7 NEW_2
	var_2091_string = ""; var_2092_object = Obj(); var_2093_string = ""; var_2094_string = ""; // 0x2b9 PushV
	var_2095_string = "pt_blockpost"; // 0x2ba PushS
	var_2096_int = 1; // 0x2bb PushI
	var_2097_int = var_2017_int + var_2096_int; // 0x2bc Add
	var_2098_int = var_2095_string + var_2097_int; // 0x2bd Add
	var_2099_string = "_2_"; // 0x2be PushS
	var_2091_string = var_2098_int + var_2099_string; // 0x2bf Add2
	var_2092_object = var_2020_object; // 0x2c0 Mov
	var_2093_string = "pers_sanitar"; // 0x2c1 MovS
	var_2094_string = "sanitar_stat.xml"; // 0x2c2 MovS
	func_576(var_2092_object, var_2093_string, var_2094_string); // 0x2c3 NEW_2
	var_2100_string = ""; var_2101_object = Obj(); // 0x2c5 PushV
	var_2102_string = "pt_fog"; // 0x2c6 PushS
	var_2103_int = 1; // 0x2c7 PushI
	var_2104_int = var_2017_int + var_2103_int; // 0x2c8 Add
	var_2105_int = var_2102_string + var_2104_int; // 0x2c9 Add
	var_2106_string = "_"; // 0x2ca PushS
	var_2100_string = var_2105_int + var_2106_string; // 0x2cb Add2
	var_2101_object = var_2021_object; // 0x2cc Mov
	func_598(var_2101_object); // 0x2cd NEW_2
}


func_9858(var_5305_int, var_5306_float)
{
	var_5307_int = 0; var_5308_int = 0; var_5309_int = 0; var_5310_float = 0; // 0x2683 PushV
	var_5308_int = 542472; // 0x2684 MovI
	var_5309_int = 542471; // 0x2685 MovI
	var_5310_float = var_5306_float; // 0x2686 Mov
	func_11153(var_5307_int, var_5308_int, var_5309_int, var_5310_float); // 0x2687 NEW_2
	var_5305_int = var_5307_int; // 0x2688 Mov
	return 0; // 0x268a Return
}


func_4740()
{
	var_79_string = "dt_house1_union2_05l"; // 0x1285 PushS
	add(var_79_string); // 0x1286 ObjFunc
	var_80_string = "dt_house1_union2_05r"; // 0x1288 PushS
	add(var_80_string); // 0x1289 ObjFunc
	var_81_string = "dt_house2_01"; // 0x128b PushS
	add(var_81_string); // 0x128c ObjFunc
	var_82_string = "dt_house2_02"; // 0x128e PushS
	add(var_82_string); // 0x128f ObjFunc
	var_83_string = "dt_house2_03"; // 0x1291 PushS
	add(var_83_string); // 0x1292 ObjFunc
	var_84_string = "dt_house2_04"; // 0x1294 PushS
	add(var_84_string); // 0x1295 ObjFunc
	var_85_string = "dt_house2_05"; // 0x1297 PushS
	add(var_85_string); // 0x1298 ObjFunc
	var_86_string = "dt_house3_10_i2"; // 0x129a PushS
	add(var_86_string); // 0x129b ObjFunc
	var_87_string = "dt_house3_10"; // 0x129d PushS
	add(var_87_string); // 0x129e ObjFunc
	var_88_string = "dt_house3_11_i2"; // 0x12a0 PushS
	add(var_88_string); // 0x12a1 ObjFunc
	var_89_string = "dt_house3_11"; // 0x12a3 PushS
	add(var_89_string); // 0x12a4 ObjFunc
	var_90_string = "dt_house3_12_i2"; // 0x12a6 PushS
	add(var_90_string); // 0x12a7 ObjFunc
	var_91_string = "dt_house3_12"; // 0x12a9 PushS
	add(var_91_string); // 0x12aa ObjFunc
	var_92_string = "dt_house_1_06"; // 0x12ac PushS
	add(var_92_string); // 0x12ad ObjFunc
	var_93_string = "dt_house3_07_i2"; // 0x12af PushS
	add(var_93_string); // 0x12b0 ObjFunc
	var_94_string = "dt_house3_07"; // 0x12b2 PushS
	add(var_94_string); // 0x12b3 ObjFunc
	return 0; // 0x12b5 Return
}


func_12934(var_4689_int, var_4690_int)
{
	var_4692_object = Obj(); var_4693_object = Obj(); // 0x3286 PushV
	var_4694_string = "Updating game "; // 0x3287 PushS
	var_4695_int = var_4694_string + var_4689_int; // 0x3288 Add
	var_4696_string = " "; // 0x3289 PushS
	var_4697_int = var_4695_int + var_4696_string; // 0x328a Add
	var_4698_int = var_4697_int + var_4690_int; // 0x328b Add
	Trace(var_4698_int); // 0x328c Func
	var_4699_bool = 0; // 0x328e PushV
	var_4699_bool = 0; // 0x328f MovB
	var_4700_int = 7; // 0x3290 PushI
	var_4701_bool = var_4689_int == var_4700_int; // 0x3291 Eq
	if(var_4701_bool == 0) goto Label_12951; // 0x3292 JumpB
	var_4702_int = 0; // 0x3293 PushI
	var_4703_bool = var_4690_int == var_4702_int; // 0x3294 Eq
	if(var_4703_bool == 0) goto Label_12951; // 0x3295 JumpB
	var_4699_bool = 1; // 0x3296 MovB
	
Label_12951:
	if(var_4699_bool == 0) goto Label_12959; // 0x3297 JumpB
	var_4704_string = "sobor"; // 0x3298 PushS
	GetSceneByName(var_4693_object, var_4704_string); // 0x3299 Func
	var_4705_string = "aglaja"; // 0x329b PushS
	Trigger(var_4693_object, var_4705_string); // 0x329c Func
	var_4693_object = 0; // 0x329e SetNull
	
Label_12959:
	return 2; // 0x329f Return
}


func_10888(var_5509_bool)
{
	var_5512_int = 0; var_5513_string = ""; // 0x2a89 PushV
	var_5513_string = "k4AlexandrVisit"; // 0x2a8a MovS
	func_132(var_5512_int, var_5513_string); // 0x2a8b NEW_2
	var_5514_int = 0; // 0x2a8d PushI
	var_5515_bool = var_5512_int != var_5514_int; // 0x2a8e Neq
	if(var_5515_bool == 0) goto Label_10898; // 0x2a8f JumpB
	var_5509_bool = 1; // 0x2a90 MovB
	return 0; // 0x2a91 Return
	
Label_10898:
	var_5509_bool = 0; // 0x2a92 MovB
	return 0; // 0x2a93 Return
}


func_9867(var_5321_int, var_5322_float)
{
	var_5323_int = 0; var_5324_int = 0; var_5325_int = 0; var_5326_float = 0; // 0x268c PushV
	var_5324_int = 542474; // 0x268d MovI
	var_5325_int = 542473; // 0x268e MovI
	var_5326_float = var_5322_float; // 0x268f Mov
	func_11153(var_5323_int, var_5324_int, var_5325_int, var_5326_float); // 0x2690 NEW_2
	var_5321_int = var_5323_int; // 0x2691 Mov
	return 0; // 0x2693 Return
}


func_9876(var_5337_int, var_5338_float)
{
	var_5339_int = 0; var_5340_int = 0; var_5341_int = 0; var_5342_float = 0; // 0x2695 PushV
	var_5340_int = 542476; // 0x2696 MovI
	var_5341_int = 542475; // 0x2697 MovI
	var_5342_float = var_5338_float; // 0x2698 Mov
	func_11153(var_5339_int, var_5340_int, var_5341_int, var_5342_float); // 0x2699 NEW_2
	var_5337_int = var_5339_int; // 0x269a Mov
	return 0; // 0x269c Return
}


func_10900(var_5517_bool)
{
	var_5520_int = 0; var_5521_string = ""; // 0x2a95 PushV
	var_5521_string = "k4KaterinaVisit"; // 0x2a96 MovS
	func_132(var_5520_int, var_5521_string); // 0x2a97 NEW_2
	var_5522_int = 0; // 0x2a99 PushI
	var_5523_bool = var_5520_int != var_5522_int; // 0x2a9a Neq
	if(var_5523_bool == 0) goto Label_10910; // 0x2a9b JumpB
	var_5517_bool = 1; // 0x2a9c MovB
	return 0; // 0x2a9d Return
	
Label_10910:
	var_5517_bool = 0; // 0x2a9e MovB
	return 0; // 0x2a9f Return
}


func_9885()
{
	var_4617_string = ""; var_4618_bool = 0; // 0x269e PushV
	var_4617_string = "termitnik2@door1"; // 0x269f MovS
	var_4618_bool = 1; // 0x26a0 MovB
	func_177(var_4617_string, var_4618_bool); // 0x26a1 NEW_2
	return 0; // 0x26a3 Return
}


func_12960(var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; // 0x32a0 PushV
	var_46_string = "Disease update"; // 0x32a1 PushS
	Trace(var_46_string); // 0x32a2 Func
	var_35_int = 0; // 0x32a4 MovI
	var_47_int = 0; // 0x32a5 PushI
	var_48_bool = var_23_int == var_47_int; // 0x32a6 Eq
	if(var_48_bool == 0) goto Label_12970; // 0x32a7 JumpB
	var_35_int = 0; // 0x32a8 MovI
	goto Label_13024; // 0x32a9 Jump
	
Label_13024:
	var_49_int = 1; // 0x32e0 PushI
	var_50_int = var_23_int + var_49_int; // 0x32e1 Add
	var_51_int = 12; // 0x32e2 PushI
	var_52_bool = var_50_int != var_51_int; // 0x32e3 Neq
	if(var_52_bool == 0) goto Label_13292; // 0x32e4 JumpB
	var_53_string = "Diseased regions : "; // 0x32e5 PushS
	var_54_int = var_53_string + var_35_int; // 0x32e6 Add
	Trace(var_54_int); // 0x32e7 Func
	var_55_int = 1; // 0x32e9 PushI
	var_56_int = var_23_int + var_55_int; // 0x32ea Add
	var_57_int = 6; // 0x32eb PushI
	var_58_bool = var_56_int < var_57_int; // 0x32ec LT
	if(var_58_bool == 0) goto Label_13104; // 0x32ed JumpB
	var_36_int = 0; // 0x32ee MovI
	
Label_13039:
	var_59_int = 16; // 0x32ef PushI
	var_60_bool = var_36_int < var_59_int; // 0x32f0 LT
	if(var_60_bool == 0) goto Label_13064; // 0x32f1 JumpB
	var_61_bool = 0; var_62_int = 0; // 0x32f2 PushV
	var_62_int = var_36_int; // 0x32f3 Mov
	func_430(var_61_bool, var_62_int); // 0x32f4 NEW_2
	if(var_61_bool == 0) goto Label_13052; // 0x32f6 JumpB
	var_73_int = 0; // 0x32f7 PushV
	var_73_int = var_36_int; // 0x32f8 Mov
	func_472(var_73_int); // 0x32f9 NEW_2
	goto Label_13061; // 0x32fb Jump
	
Label_13061:
	var_85_int = 1; // 0x3305 PushI
	var_36_int = var_36_int + var_85_int; // 0x3306 Add2
	goto Label_13039; // 0x3307 Jump
	
Label_13052:
	var_86_bool = 0; var_87_int = 0; // 0x32fc PushV
	var_87_int = var_36_int; // 0x32fd Mov
	func_460(var_86_bool, var_87_int); // 0x32fe NEW_2
	if(var_86_bool == 0) goto Label_13061; // 0x3300 JumpB
	var_95_int = 0; // 0x3301 PushV
	var_95_int = var_36_int; // 0x3302 Mov
	func_412(var_95_int); // 0x3303 NEW_2
	
Label_13064:
	var_107_int = 2; // 0x3308 PushI
	var_108_bool = var_23_int == var_107_int; // 0x3309 Eq
	if(var_108_bool == 0) goto Label_13075; // 0x330a JumpB
	var_109_string = "Special diseased region: 5"; // 0x330b PushS
	Trace(var_109_string); // 0x330c Func
	var_110_int = 0; // 0x330e PushV
	var_110_int = 5; // 0x330f MovI
	func_442(var_110_int); // 0x3310 NEW_2
	goto Label_13085; // 0x3312 Jump
	
Label_13085:
	var_122_int = 0; // 0x331d PushV
	func_343(var_122_int); // 0x331e NEW_2
	var_37_int = var_122_int; // 0x331f Mov
	var_133_bool = var_37_int < var_35_int; // 0x3321 LT
	if(var_133_bool == 0) goto Label_13103; // 0x3322 JumpB
	var_38_int = var_35_int - var_37_int; // 0x3323 Sub2
	var_39_int = 0; // 0x3324 MovI
	
Label_13093:
	var_134_bool = var_39_int < var_38_int; // 0x3325 LT
	if(var_134_bool == 0) goto Label_13103; // 0x3326 JumpB
	var_135_int = 0; // 0x3327 PushV
	var_136_int = 1; // 0x3328 PushI
	var_135_int = var_23_int + var_136_int; // 0x3329 Add2
	func_361(var_135_int); // 0x332a NEW_2
	var_225_int = 1; // 0x332c PushI
	var_39_int = var_39_int + var_225_int; // 0x332d Add2
	goto Label_13093; // 0x332e Jump
	
Label_13103:
	goto Label_13291; // 0x332f Jump
	
Label_13291:
	goto Label_13317; // 0x33eb Jump
	
Label_13317:
	return 22; // 0x3405 Return
	
Label_13075:
	var_226_int = 3; // 0x3313 PushI
	var_227_bool = var_23_int == var_226_int; // 0x3314 Eq
	if(var_227_bool == 0) goto Label_13085; // 0x3315 JumpB
	var_228_string = "Special diseased region: 1"; // 0x3316 PushS
	Trace(var_228_string); // 0x3317 Func
	var_229_int = 0; // 0x3319 PushV
	var_229_int = 1; // 0x331a MovI
	func_442(var_229_int); // 0x331b NEW_2
	
Label_13104:
	var_230_int = 1; // 0x3330 PushI
	var_231_int = var_23_int + var_230_int; // 0x3331 Add
	var_232_int = 6; // 0x3332 PushI
	var_233_bool = var_231_int == var_232_int; // 0x3333 Eq
	if(var_233_bool == 0) goto Label_13136; // 0x3334 JumpB
	var_41_int = 0; // 0x3335 MovI
	
Label_13110:
	var_234_int = 16; // 0x3336 PushI
	var_235_bool = var_41_int < var_234_int; // 0x3337 LT
	if(var_235_bool == 0) goto Label_13135; // 0x3338 JumpB
	var_236_bool = 0; var_237_int = 0; // 0x3339 PushV
	var_237_int = var_41_int; // 0x333a Mov
	func_430(var_236_bool, var_237_int); // 0x333b NEW_2
	if(var_236_bool == 0) goto Label_13123; // 0x333d JumpB
	var_238_int = 0; // 0x333e PushV
	var_238_int = var_41_int; // 0x333f Mov
	func_472(var_238_int); // 0x3340 NEW_2
	goto Label_13132; // 0x3342 Jump
	
Label_13132:
	var_239_int = 1; // 0x334c PushI
	var_41_int = var_41_int + var_239_int; // 0x334d Add2
	goto Label_13110; // 0x334e Jump
	
Label_13123:
	var_240_bool = 0; var_241_int = 0; // 0x3343 PushV
	var_241_int = var_41_int; // 0x3344 Mov
	func_460(var_240_bool, var_241_int); // 0x3345 NEW_2
	if(var_240_bool == 0) goto Label_13132; // 0x3347 JumpB
	var_242_int = 0; // 0x3348 PushV
	var_242_int = var_41_int; // 0x3349 Mov
	func_412(var_242_int); // 0x334a NEW_2
	
Label_13135:
	goto Label_13152; // 0x334f Jump
	
Label_13152:
	var_243_int = 0; var_244_int = 0; // 0x3360 PushV
	var_244_int = var_23_int; // 0x3361 Mov
	func_12701(var_243_int, var_244_int); // 0x3362 NEW_2
	var_40_int = var_243_int; // 0x3363 Mov
	var_245_bool = 0; var_246_int = 0; // 0x3365 PushV
	var_246_int = var_23_int; // 0x3366 Mov
	func_12693(var_245_bool, var_246_int); // 0x3367 NEW_2
	if(var_245_bool == 0) goto Label_13167; // 0x3369 JumpB
	var_252_int = 0; // 0x336a PushV
	var_252_int = var_40_int; // 0x336b Mov
	func_412(var_252_int); // 0x336c NEW_2
	goto Label_13171; // 0x336e Jump
	
Label_13171:
	var_253_int = 0; var_254_int = 0; // 0x3373 PushV
	var_255_int = 1; // 0x3374 PushI
	var_254_int = var_23_int + var_255_int; // 0x3375 Add2
	func_12655(var_253_int, var_254_int); // 0x3376 NEW_2
	var_40_int = var_253_int; // 0x3377 Mov
	var_256_int = -1; // 0x3379 PushI
	var_257_bool = var_40_int != var_256_int; // 0x337a Neq
	if(var_257_bool == 0) goto Label_13184; // 0x337b JumpB
	var_258_int = 0; // 0x337c PushV
	var_258_int = var_40_int; // 0x337d Mov
	func_442(var_258_int); // 0x337e NEW_2
	
Label_13184:
	var_259_int = 0; var_260_int = 0; // 0x3380 PushV
	var_261_int = 1; // 0x3381 PushI
	var_260_int = var_23_int + var_261_int; // 0x3382 Add2
	func_12701(var_259_int, var_260_int); // 0x3383 NEW_2
	var_40_int = var_259_int; // 0x3384 Mov
	var_262_int = -1; // 0x3386 PushI
	var_263_bool = var_40_int != var_262_int; // 0x3387 Neq
	if(var_263_bool == 0) goto Label_13197; // 0x3388 JumpB
	var_264_int = 0; // 0x3389 PushV
	var_264_int = var_40_int; // 0x338a Mov
	func_412(var_264_int); // 0x338b NEW_2
	
Label_13197:
	var_265_int = 0; var_266_int = 0; // 0x338d PushV
	var_267_int = 2; // 0x338e PushI
	var_266_int = var_23_int + var_267_int; // 0x338f Add2
	func_12765(var_265_int, var_266_int); // 0x3390 NEW_2
	var_40_int = var_265_int; // 0x3391 Mov
	var_276_int = -1; // 0x3393 PushI
	var_277_bool = var_40_int != var_276_int; // 0x3394 Neq
	if(var_277_bool == 0) goto Label_13216; // 0x3395 JumpB
	var_278_bool = 0; var_279_int = 0; // 0x3396 PushV
	var_279_int = var_40_int; // 0x3397 Mov
	func_430(var_278_bool, var_279_int); // 0x3398 NEW_2
	var_280_bool = var_278_bool == 0; // 0x339a Not
	if(var_280_bool == 0) goto Label_13216; // 0x339b JumpB
	var_281_int = 0; // 0x339c PushV
	var_281_int = var_40_int; // 0x339d Mov
	func_442(var_281_int); // 0x339e NEW_2
	
Label_13216:
	var_282_int = 0; var_283_int = 0; // 0x33a0 PushV
	var_284_int = 2; // 0x33a1 PushI
	var_283_int = var_23_int + var_284_int; // 0x33a2 Add2
	func_12739(var_282_int, var_283_int); // 0x33a3 NEW_2
	var_40_int = var_282_int; // 0x33a4 Mov
	var_293_int = -1; // 0x33a6 PushI
	var_294_bool = var_40_int != var_293_int; // 0x33a7 Neq
	if(var_294_bool == 0) goto Label_13235; // 0x33a8 JumpB
	var_295_bool = 0; var_296_int = 0; // 0x33a9 PushV
	var_296_int = var_40_int; // 0x33aa Mov
	func_430(var_295_bool, var_296_int); // 0x33ab NEW_2
	var_297_bool = var_295_bool == 0; // 0x33ad Not
	if(var_297_bool == 0) goto Label_13235; // 0x33ae JumpB
	var_298_int = 0; // 0x33af PushV
	var_298_int = var_40_int; // 0x33b0 Mov
	func_442(var_298_int); // 0x33b1 NEW_2
	
Label_13235:
	var_299_int = 0; var_300_int = 0; // 0x33b3 PushV
	var_300_int = var_23_int; // 0x33b4 Mov
	func_12655(var_299_int, var_300_int); // 0x33b5 NEW_2
	var_40_int = var_299_int; // 0x33b6 Mov
	var_301_int = -1; // 0x33b8 PushI
	var_302_bool = var_40_int != var_301_int; // 0x33b9 Neq
	if(var_302_bool == 0) goto Label_13259; // 0x33ba JumpB
	var_303_bool = 0; var_304_int = 0; // 0x33bb PushV
	var_304_int = var_23_int; // 0x33bc Mov
	func_12647(var_303_bool, var_304_int); // 0x33bd NEW_2
	var_43_bool = var_303_bool; // 0x33be Mov
	var_310_bool = var_43_bool; // 0x33c0 Push
	if(var_310_bool == 0) goto Label_13255; // 0x33c1 JumpB
	var_311_int = 0; // 0x33c2 PushV
	var_311_int = var_40_int; // 0x33c3 Mov
	func_442(var_311_int); // 0x33c4 NEW_2
	goto Label_13259; // 0x33c6 Jump
	
Label_13259:
	var_312_int = 0; var_313_int = 0; // 0x33cb PushV
	var_314_int = 1; // 0x33cc PushI
	var_313_int = var_23_int + var_314_int; // 0x33cd Add2
	func_12739(var_312_int, var_313_int); // 0x33ce NEW_2
	var_40_int = var_312_int; // 0x33cf Mov
	var_315_int = -1; // 0x33d1 PushI
	var_316_bool = var_40_int != var_315_int; // 0x33d2 Neq
	if(var_316_bool == 0) goto Label_13272; // 0x33d3 JumpB
	var_317_int = 0; // 0x33d4 PushV
	var_317_int = var_40_int; // 0x33d5 Mov
	func_472(var_317_int); // 0x33d6 NEW_2
	
Label_13272:
	var_318_int = 0; var_319_int = 0; // 0x33d8 PushV
	var_320_int = 1; // 0x33d9 PushI
	var_319_int = var_23_int + var_320_int; // 0x33da Add2
	func_12765(var_318_int, var_319_int); // 0x33db NEW_2
	var_44_int = var_318_int; // 0x33dc Mov
	var_321_bool = 0; // 0x33de PushV
	var_321_bool = 0; // 0x33df MovB
	var_322_bool = var_44_int != var_40_int; // 0x33e0 Neq
	if(var_322_bool == 0) goto Label_13286; // 0x33e1 JumpB
	var_323_int = -1; // 0x33e2 PushI
	var_324_bool = var_44_int != var_323_int; // 0x33e3 Neq
	if(var_324_bool == 0) goto Label_13286; // 0x33e4 JumpB
	var_321_bool = 1; // 0x33e5 MovB
	
Label_13286:
	if(var_321_bool == 0) goto Label_13291; // 0x33e6 JumpB
	var_325_int = 0; // 0x33e7 PushV
	var_325_int = var_44_int; // 0x33e8 Mov
	func_472(var_325_int); // 0x33e9 NEW_2
	
Label_13255:
	var_326_int = 0; // 0x33c7 PushV
	var_326_int = var_40_int; // 0x33c8 Mov
	func_472(var_326_int); // 0x33c9 NEW_2
	
Label_13167:
	var_327_int = 0; // 0x336f PushV
	var_327_int = var_40_int; // 0x3370 Mov
	func_442(var_327_int); // 0x3371 NEW_2
	
Label_13136:
	var_42_int = 0; // 0x3350 MovI
	
Label_13137:
	var_328_int = 16; // 0x3351 PushI
	var_329_bool = var_42_int < var_328_int; // 0x3352 LT
	if(var_329_bool == 0) goto Label_13152; // 0x3353 JumpB
	var_330_bool = 0; var_331_int = 0; // 0x3354 PushV
	var_331_int = var_42_int; // 0x3355 Mov
	func_460(var_330_bool, var_331_int); // 0x3356 NEW_2
	if(var_330_bool == 0) goto Label_13149; // 0x3358 JumpB
	var_332_int = 0; // 0x3359 PushV
	var_332_int = var_42_int; // 0x335a Mov
	func_412(var_332_int); // 0x335b NEW_2
	
Label_13149:
	var_333_int = 1; // 0x335d PushI
	var_42_int = var_42_int + var_333_int; // 0x335e Add2
	goto Label_13137; // 0x335f Jump
	
Label_13292:
	var_45_int = 0; // 0x33ec MovI
	
Label_13293:
	var_334_int = 16; // 0x33ed PushI
	var_335_bool = var_45_int < var_334_int; // 0x33ee LT
	if(var_335_bool == 0) goto Label_13317; // 0x33ef JumpB
	var_336_bool = 0; // 0x33f0 PushV
	var_336_bool = 1; // 0x33f1 MovB
	var_337_bool = 0; var_338_int = 0; // 0x33f2 PushV
	var_338_int = var_45_int; // 0x33f3 Mov
	func_430(var_337_bool, var_338_int); // 0x33f4 NEW_2
	if(var_337_bool == 0) goto Label_13309; // 0x33f6 JumpB
	var_339_bool = 0; var_340_int = 0; // 0x33f7 PushV
	var_340_int = var_45_int; // 0x33f8 Mov
	func_460(var_339_bool, var_340_int); // 0x33f9 NEW_2
	if(var_339_bool == 0) goto Label_13309; // 0x33fb JumpB
	var_336_bool = 0; // 0x33fc MovB
	
Label_13309:
	if(var_336_bool == 0) goto Label_13314; // 0x33fd JumpB
	var_341_int = 0; // 0x33fe PushV
	var_341_int = var_45_int; // 0x33ff Mov
	func_412(var_341_int); // 0x3400 NEW_2
	
Label_13314:
	var_342_int = 1; // 0x3402 PushI
	var_45_int = var_45_int + var_342_int; // 0x3403 Add2
	goto Label_13293; // 0x3404 Jump
	
Label_12970:
	var_343_int = 1; // 0x32aa PushI
	var_344_bool = var_23_int == var_343_int; // 0x32ab Eq
	if(var_344_bool == 0) goto Label_12975; // 0x32ac JumpB
	var_35_int = 0; // 0x32ad MovI
	goto Label_13024; // 0x32ae Jump
	
Label_12975:
	var_345_int = 2; // 0x32af PushI
	var_346_bool = var_23_int == var_345_int; // 0x32b0 Eq
	if(var_346_bool == 0) goto Label_12980; // 0x32b1 JumpB
	var_35_int = 1; // 0x32b2 MovI
	goto Label_13024; // 0x32b3 Jump
	
Label_12980:
	var_347_int = 3; // 0x32b4 PushI
	var_348_bool = var_23_int == var_347_int; // 0x32b5 Eq
	if(var_348_bool == 0) goto Label_12985; // 0x32b6 JumpB
	var_35_int = 2; // 0x32b7 MovI
	goto Label_13024; // 0x32b8 Jump
	
Label_12985:
	var_349_int = 4; // 0x32b9 PushI
	var_350_bool = var_23_int == var_349_int; // 0x32ba Eq
	if(var_350_bool == 0) goto Label_12990; // 0x32bb JumpB
	var_35_int = 3; // 0x32bc MovI
	goto Label_13024; // 0x32bd Jump
	
Label_12990:
	var_351_int = 5; // 0x32be PushI
	var_352_bool = var_23_int == var_351_int; // 0x32bf Eq
	if(var_352_bool == 0) goto Label_12995; // 0x32c0 JumpB
	var_35_int = 4; // 0x32c1 MovI
	goto Label_13024; // 0x32c2 Jump
	
Label_12995:
	var_353_int = 6; // 0x32c3 PushI
	var_354_bool = var_23_int == var_353_int; // 0x32c4 Eq
	if(var_354_bool == 0) goto Label_13000; // 0x32c5 JumpB
	var_35_int = 5; // 0x32c6 MovI
	goto Label_13024; // 0x32c7 Jump
	
Label_13000:
	var_355_int = 7; // 0x32c8 PushI
	var_356_bool = var_23_int == var_355_int; // 0x32c9 Eq
	if(var_356_bool == 0) goto Label_13005; // 0x32ca JumpB
	var_35_int = 5; // 0x32cb MovI
	goto Label_13024; // 0x32cc Jump
	
Label_13005:
	var_357_int = 8; // 0x32cd PushI
	var_358_bool = var_23_int == var_357_int; // 0x32ce Eq
	if(var_358_bool == 0) goto Label_13010; // 0x32cf JumpB
	var_35_int = 6; // 0x32d0 MovI
	goto Label_13024; // 0x32d1 Jump
	
Label_13010:
	var_359_int = 9; // 0x32d2 PushI
	var_360_bool = var_23_int == var_359_int; // 0x32d3 Eq
	if(var_360_bool == 0) goto Label_13015; // 0x32d4 JumpB
	var_35_int = 6; // 0x32d5 MovI
	goto Label_13024; // 0x32d6 Jump
	
Label_13015:
	var_361_int = 10; // 0x32d7 PushI
	var_362_bool = var_23_int == var_361_int; // 0x32d8 Eq
	if(var_362_bool == 0) goto Label_13020; // 0x32d9 JumpB
	var_35_int = 7; // 0x32da MovI
	goto Label_13024; // 0x32db Jump
	
Label_13020:
	var_363_int = 11; // 0x32dc PushI
	var_364_bool = var_23_int == var_363_int; // 0x32dd Eq
	if(var_364_bool == 0) goto Label_13024; // 0x32de JumpB
	var_35_int = 8; // 0x32df MovI
}


func_7841()
{
	var_4672_int = 0; var_4673_int = 0; var_4674_object = Obj(); var_4675_int = 0; var_4676_int = 0; var_4677_object = Obj(); // 0x1ea1 PushV
	var_4678_string = "Cleaning arena..."; // 0x1ea2 PushS
	Trace(var_4678_string); // 0x1ea3 Func
	var_4679_object = GlobalVars[11]; // 0x1ea5 PushGE
	var_4680_bool = var_4679_object != 0; // 0x1ea6 NullNeq
	if(var_4680_bool == 0) goto Label_7874; // 0x1ea7 JumpB
	var_4681_object = GlobalVars[11]; // 0x1ea8 PushGE
	Remove(); // 0x1ea9 ObjFunc
	var_4682_object = GlobalVars[12]; // 0x1eab PushGE
	size(var_4675_int); // 0x1eac ObjFunc
	var_4676_int = 0; // 0x1eae MovI
	
Label_7855:
	var_4683_bool = var_4676_int < var_4675_int; // 0x1eaf LT
	if(var_4683_bool == 0) goto Label_7867; // 0x1eb0 JumpB
	var_4684_object = GlobalVars[12]; // 0x1eb1 PushGE
	get(var_4677_object, var_4676_int); // 0x1eb2 ObjFunc
	var_4685_string = "remove"; // 0x1eb4 PushS
	Trigger(var_4677_object, var_4685_string); // 0x1eb5 Func
	var_4677_object = 0; // 0x1eb7 SetNull
	var_4686_int = 1; // 0x1eb8 PushI
	var_4676_int = var_4676_int + var_4686_int; // 0x1eb9 Add2
	goto Label_7855; // 0x1eba Jump
	
Label_7867:
	var_4687_object = GlobalVars[12]; // 0x1ebb PushGE
	clear(); // 0x1ebc ObjFunc
	var_4688_bool = 0; // 0x1ebe PushV
	var_4688_bool = 0; // 0x1ebf MovB
	func_7770(var_4688_bool); // 0x1ec0 NEW_2
	
Label_7874:
	return 6; // 0x1ec2 Return
}


func_10912(var_5488_bool)
{
	var_5491_int = 0; var_5492_string = ""; // 0x2aa1 PushV
	var_5492_string = "k5AlexandrVisit"; // 0x2aa2 MovS
	func_132(var_5491_int, var_5492_string); // 0x2aa3 NEW_2
	var_5493_int = 0; // 0x2aa5 PushI
	var_5494_bool = var_5491_int != var_5493_int; // 0x2aa6 Neq
	if(var_5494_bool == 0) goto Label_10922; // 0x2aa7 JumpB
	var_5488_bool = 1; // 0x2aa8 MovB
	return 0; // 0x2aa9 Return
	
Label_10922:
	var_5488_bool = 0; // 0x2aaa MovB
	return 0; // 0x2aab Return
}


func_9892()
{
	var_4623_string = ""; var_4624_bool = 0; // 0x26a5 PushV
	var_4623_string = "house_vlad@door2"; // 0x26a6 MovS
	var_4624_bool = 1; // 0x26a7 MovB
	func_177(var_4623_string, var_4624_bool); // 0x26a8 NEW_2
	return 0; // 0x26aa Return
}


func_9899()
{
	var_4605_string = ""; var_4606_bool = 0; // 0x26ac PushV
	var_4605_string = "cot_maria@door1"; // 0x26ad MovS
	var_4606_bool = 0; // 0x26ae MovB
	func_177(var_4605_string, var_4606_bool); // 0x26af NEW_2
	return 0; // 0x26b1 Return
}


func_6828(var_4062_int, var_4063_int, var_4064_object, var_4065_object, var_4066_object, var_4067_object)
{
	var_4068_int = 0; // 0x1aad PushI
	var_4069_bool = var_4063_int == var_4068_int; // 0x1aae Eq
	if(var_4069_bool == 0) goto Label_6868; // 0x1aaf JumpB
	var_4070_int = 0; var_4071_bool = 0; // 0x1ab0 PushV
	var_4070_int = 12; // 0x1ab1 MovI
	var_4071_bool = 0; // 0x1ab2 MovB
	func_796(var_4070_int, var_4071_bool); // 0x1ab3 NEW_2
	var_4072_int = 0; var_4073_bool = 0; var_4074_int = 0; // 0x1ab5 PushV
	var_4072_int = 12; // 0x1ab6 MovI
	var_4073_bool = 0; // 0x1ab7 MovB
	var_4074_int = 1; // 0x1ab8 MovI
	func_813(var_4072_int, var_4073_bool, var_4074_int); // 0x1ab9 NEW_2
	var_4075_int = 0; var_4076_int = 0; var_4077_object = Obj(); var_4078_object = Obj(); var_4079_object = Obj(); // 0x1abb PushV
	var_4075_int = 12; // 0x1abc MovI
	var_4076_int = var_4062_int; // 0x1abd Mov
	var_4077_object = var_4064_object; // 0x1abe Mov
	var_4078_object = var_4065_object; // 0x1abf Mov
	var_4079_object = var_4066_object; // 0x1ac0 Mov
	func_720(var_4075_int, var_4076_int, var_4077_object, var_4078_object, var_4079_object); // 0x1ac1 NEW_2
	var_4080_object = Obj(); var_4081_int = 0; // 0x1ac3 PushV
	var_4080_object = var_4067_object; // 0x1ac4 Mov
	var_4081_int = 2; // 0x1ac5 MovI
	func_305(var_4081_int); // 0x1ac6 NEW_2
	var_4082_int = 0; var_4083_bool = 0; var_4084_int = 0; // 0x1ac8 PushV
	var_4082_int = 12; // 0x1ac9 MovI
	var_4083_bool = 0; // 0x1aca MovB
	var_4084_int = 4; // 0x1acb MovI
	func_870(var_4082_int, var_4083_bool, var_4084_int); // 0x1acc NEW_2
	var_4085_int = 0; var_4086_bool = 0; var_4087_int = 0; // 0x1ace PushV
	var_4085_int = 12; // 0x1acf MovI
	var_4086_bool = 1; // 0x1ad0 MovB
	var_4087_int = 4; // 0x1ad1 MovI
	func_932(var_4085_int, var_4086_bool, var_4087_int); // 0x1ad2 NEW_2
	
Label_6868:
	var_4088_int = 0; var_4089_bool = 0; // 0x1ad4 PushV
	var_4088_int = 12; // 0x1ad5 MovI
	var_4089_bool = 0; // 0x1ad6 MovB
	func_779(var_4088_int, var_4089_bool); // 0x1ad7 NEW_2
	var_4090_int = 0; var_4091_int = 0; var_4092_int = 0; // 0x1ad9 PushV
	var_4090_int = 12; // 0x1ada MovI
	var_4091_int = var_4062_int; // 0x1adb Mov
	var_4092_int = var_4063_int; // 0x1adc Mov
	func_3659(var_4090_int, var_4091_int, var_4092_int); // 0x1add NEW_2
	return 0; // 0x1adf Return
}


func_10924(var_5496_bool)
{
	var_5499_int = 0; var_5500_string = ""; // 0x2aad PushV
	var_5500_string = "k5KaterinaVisit"; // 0x2aae MovS
	func_132(var_5499_int, var_5500_string); // 0x2aaf NEW_2
	var_5501_int = 0; // 0x2ab1 PushI
	var_5502_bool = var_5499_int != var_5501_int; // 0x2ab2 Neq
	if(var_5502_bool == 0) goto Label_10934; // 0x2ab3 JumpB
	var_5496_bool = 1; // 0x2ab4 MovB
	return 0; // 0x2ab5 Return
	
Label_10934:
	var_5496_bool = 0; // 0x2ab6 MovB
	return 0; // 0x2ab7 Return
}


func_5807(var_3787_int, var_3788_int, var_3789_object, var_3790_object, var_3791_object, var_3792_object)
{
	var_3793_int = 0; // 0x16b0 PushI
	var_3794_bool = var_3788_int == var_3793_int; // 0x16b1 Eq
	if(var_3794_bool == 0) goto Label_5847; // 0x16b2 JumpB
	var_3795_int = 0; var_3796_bool = 0; // 0x16b3 PushV
	var_3795_int = 7; // 0x16b4 MovI
	var_3796_bool = 0; // 0x16b5 MovB
	func_796(var_3795_int, var_3796_bool); // 0x16b6 NEW_2
	var_3797_int = 0; var_3798_bool = 0; var_3799_int = 0; // 0x16b8 PushV
	var_3797_int = 7; // 0x16b9 MovI
	var_3798_bool = 0; // 0x16ba MovB
	var_3799_int = 1; // 0x16bb MovI
	func_813(var_3797_int, var_3798_bool, var_3799_int); // 0x16bc NEW_2
	var_3800_int = 0; var_3801_int = 0; var_3802_object = Obj(); var_3803_object = Obj(); var_3804_object = Obj(); // 0x16be PushV
	var_3800_int = 7; // 0x16bf MovI
	var_3801_int = var_3787_int; // 0x16c0 Mov
	var_3802_object = var_3789_object; // 0x16c1 Mov
	var_3803_object = var_3790_object; // 0x16c2 Mov
	var_3804_object = var_3791_object; // 0x16c3 Mov
	func_720(var_3800_int, var_3801_int, var_3802_object, var_3803_object, var_3804_object); // 0x16c4 NEW_2
	var_3805_object = Obj(); var_3806_int = 0; // 0x16c6 PushV
	var_3805_object = var_3792_object; // 0x16c7 Mov
	var_3806_int = 2; // 0x16c8 MovI
	func_305(var_3806_int); // 0x16c9 NEW_2
	var_3807_int = 0; var_3808_bool = 0; var_3809_int = 0; // 0x16cb PushV
	var_3807_int = 7; // 0x16cc MovI
	var_3808_bool = 0; // 0x16cd MovB
	var_3809_int = 6; // 0x16ce MovI
	func_870(var_3807_int, var_3808_bool, var_3809_int); // 0x16cf NEW_2
	var_3810_int = 0; var_3811_bool = 0; var_3812_int = 0; // 0x16d1 PushV
	var_3810_int = 7; // 0x16d2 MovI
	var_3811_bool = 1; // 0x16d3 MovB
	var_3812_int = 6; // 0x16d4 MovI
	func_932(var_3810_int, var_3811_bool, var_3812_int); // 0x16d5 NEW_2
	
Label_5847:
	var_3813_int = 0; var_3814_bool = 0; // 0x16d7 PushV
	var_3813_int = 7; // 0x16d8 MovI
	var_3814_bool = 0; // 0x16d9 MovB
	func_779(var_3813_int, var_3814_bool); // 0x16da NEW_2
	var_3815_int = 0; var_3816_int = 0; var_3817_int = 0; // 0x16dc PushV
	var_3815_int = 7; // 0x16dd MovI
	var_3816_int = var_3787_int; // 0x16de Mov
	var_3817_int = var_3788_int; // 0x16df Mov
	func_3659(var_3815_int, var_3816_int, var_3817_int); // 0x16e0 NEW_2
	return 0; // 0x16e2 Return
}


func_9906()
{
	var_5047_string = ""; var_5048_bool = 0; // 0x26b3 PushV
	var_5047_string = "warehouse_rubin@door1"; // 0x26b4 MovS
	var_5048_bool = 0; // 0x26b5 MovB
	func_177(var_5047_string, var_5048_bool); // 0x26b6 NEW_2
	return 0; // 0x26b8 Return
}


func_4790(var_1028_int, var_1029_int, var_1030_object, var_1031_object, var_1032_object, var_1033_object)
{
	var_1034_int = 0; // 0x12b7 PushI
	var_1035_bool = var_1029_int == var_1034_int; // 0x12b8 Eq
	if(var_1035_bool == 0) goto Label_4830; // 0x12b9 JumpB
	var_1036_int = 0; var_1037_bool = 0; // 0x12ba PushV
	var_1036_int = 2; // 0x12bb MovI
	var_1037_bool = 0; // 0x12bc MovB
	func_796(var_1036_int, var_1037_bool); // 0x12bd NEW_2
	var_1038_int = 0; var_1039_bool = 0; var_1040_int = 0; // 0x12bf PushV
	var_1038_int = 2; // 0x12c0 MovI
	var_1039_bool = 0; // 0x12c1 MovB
	var_1040_int = 1; // 0x12c2 MovI
	func_813(var_1038_int, var_1039_bool, var_1040_int); // 0x12c3 NEW_2
	var_1041_int = 0; var_1042_int = 0; var_1043_object = Obj(); var_1044_object = Obj(); var_1045_object = Obj(); // 0x12c5 PushV
	var_1041_int = 2; // 0x12c6 MovI
	var_1042_int = var_1028_int; // 0x12c7 Mov
	var_1043_object = var_1030_object; // 0x12c8 Mov
	var_1044_object = var_1031_object; // 0x12c9 Mov
	var_1045_object = var_1032_object; // 0x12ca Mov
	func_622(var_1042_int, var_1043_object, var_1044_object, var_1045_object); // 0x12cb NEW_2
	var_1046_object = Obj(); var_1047_int = 0; // 0x12cd PushV
	var_1046_object = var_1033_object; // 0x12ce Mov
	var_1047_int = 0; // 0x12cf MovI
	func_305(var_1047_int); // 0x12d0 NEW_2
	var_1048_int = 0; var_1049_bool = 0; var_1050_int = 0; // 0x12d2 PushV
	var_1048_int = 2; // 0x12d3 MovI
	var_1049_bool = 0; // 0x12d4 MovB
	var_1050_int = 5; // 0x12d5 MovI
	func_870(var_1048_int, var_1049_bool, var_1050_int); // 0x12d6 NEW_2
	var_1051_int = 0; var_1052_bool = 0; var_1053_int = 0; // 0x12d8 PushV
	var_1051_int = 2; // 0x12d9 MovI
	var_1052_bool = 0; // 0x12da MovB
	var_1053_int = 5; // 0x12db MovI
	func_932(var_1051_int, var_1052_bool, var_1053_int); // 0x12dc NEW_2
	
Label_4830:
	var_1054_int = 0; var_1055_int = 0; // 0x12de PushV
	var_1054_int = 2; // 0x12df MovI
	var_1055_int = var_1029_int; // 0x12e0 Mov
	func_1050(var_1054_int, var_1055_int); // 0x12e1 NEW_2
	var_1056_int = 0; var_1057_int = 0; var_1058_int = 0; // 0x12e3 PushV
	var_1056_int = 2; // 0x12e4 MovI
	var_1057_int = var_1028_int; // 0x12e5 Mov
	var_1058_int = var_1029_int; // 0x12e6 Mov
	func_1897(var_1056_int, var_1057_int, var_1058_int); // 0x12e7 NEW_2
	return 0; // 0x12e9 Return
}


func_10936(var_5471_bool)
{
	var_5474_int = 0; var_5475_string = ""; // 0x2ab9 PushV
	var_5475_string = "k6KaterinaVisit"; // 0x2aba MovS
	func_132(var_5474_int, var_5475_string); // 0x2abb NEW_2
	var_5476_int = 0; // 0x2abd PushI
	var_5477_bool = var_5474_int != var_5476_int; // 0x2abe Neq
	if(var_5477_bool == 0) goto Label_10946; // 0x2abf JumpB
	var_5471_bool = 1; // 0x2ac0 MovB
	return 0; // 0x2ac1 Return
	
Label_10946:
	var_5471_bool = 0; // 0x2ac2 MovB
	return 0; // 0x2ac3 Return
}


func_9913()
{
	var_5811_string = ""; var_5812_bool = 0; // 0x26ba PushV
	var_5811_string = "warehouse_rubin@door1"; // 0x26bb MovS
	var_5812_bool = 1; // 0x26bc MovB
	func_177(var_5811_string, var_5812_bool); // 0x26bd NEW_2
	return 0; // 0x26bf Return
}


func_8895(var_500_int, var_501_int, var_502_int)
{
	var_503_object = Obj(); var_504_object = Obj(); var_505_object = Obj(); var_506_object = Obj(); var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj(); var_510_object = Obj(); // 0x22bf PushV
	var_511_object = GlobalVars[8]; // 0x22c0 PushGE
	get(var_507_object, var_500_int); // 0x22c1 ObjFunc
	var_512_object = GlobalVars[9]; // 0x22c3 PushGE
	get(var_508_object, var_500_int); // 0x22c4 ObjFunc
	var_513_object = GlobalVars[10]; // 0x22c6 PushGE
	get(var_509_object, var_500_int); // 0x22c7 ObjFunc
	var_514_object = GlobalVars[13]; // 0x22c9 PushGE
	get(var_510_object, var_500_int); // 0x22ca ObjFunc
	var_515_int = 0; // 0x22cc PushI
	var_516_bool = var_500_int == var_515_int; // 0x22cd Eq
	if(var_516_bool == 0) goto Label_8921; // 0x22ce JumpB
	var_517_int = 0; var_518_int = 0; var_519_object = Obj(); var_520_object = Obj(); var_521_object = Obj(); var_522_object = Obj(); // 0x22cf PushV
	var_517_int = var_501_int; // 0x22d0 Mov
	var_518_int = var_502_int; // 0x22d1 Mov
	var_519_object = var_507_object; // 0x22d2 Mov
	var_520_object = var_508_object; // 0x22d3 Mov
	var_521_object = var_509_object; // 0x22d4 Mov
	var_522_object = var_510_object; // 0x22d5 Mov
	func_4387(var_517_int, var_518_int, var_519_object, var_520_object, var_521_object, var_522_object); // 0x22d6 NEW_2
	goto Label_9115; // 0x22d8 Jump
	
Label_9115:
	return 8; // 0x239b Return
	
Label_8921:
	var_883_int = 1; // 0x22d9 PushI
	var_884_bool = var_500_int == var_883_int; // 0x22da Eq
	if(var_884_bool == 0) goto Label_8934; // 0x22db JumpB
	var_885_int = 0; var_886_int = 0; var_887_object = Obj(); var_888_object = Obj(); var_889_object = Obj(); var_890_object = Obj(); // 0x22dc PushV
	var_885_int = var_501_int; // 0x22dd Mov
	var_886_int = var_502_int; // 0x22de Mov
	var_887_object = var_507_object; // 0x22df Mov
	var_888_object = var_508_object; // 0x22e0 Mov
	var_889_object = var_509_object; // 0x22e1 Mov
	var_890_object = var_510_object; // 0x22e2 Mov
	func_4584(var_885_int, var_886_int, var_887_object, var_888_object, var_889_object, var_890_object); // 0x22e3 NEW_2
	goto Label_9115; // 0x22e5 Jump
	
Label_8934:
	var_1026_int = 2; // 0x22e6 PushI
	var_1027_bool = var_500_int == var_1026_int; // 0x22e7 Eq
	if(var_1027_bool == 0) goto Label_8947; // 0x22e8 JumpB
	var_1028_int = 0; var_1029_int = 0; var_1030_object = Obj(); var_1031_object = Obj(); var_1032_object = Obj(); var_1033_object = Obj(); // 0x22e9 PushV
	var_1028_int = var_501_int; // 0x22ea Mov
	var_1029_int = var_502_int; // 0x22eb Mov
	var_1030_object = var_507_object; // 0x22ec Mov
	var_1031_object = var_508_object; // 0x22ed Mov
	var_1032_object = var_509_object; // 0x22ee Mov
	var_1033_object = var_510_object; // 0x22ef Mov
	func_4790(var_1028_int, var_1029_int, var_1030_object, var_1031_object, var_1032_object, var_1033_object); // 0x22f0 NEW_2
	goto Label_9115; // 0x22f2 Jump
	
Label_8947:
	var_1245_int = 3; // 0x22f3 PushI
	var_1246_bool = var_500_int == var_1245_int; // 0x22f4 Eq
	if(var_1246_bool == 0) goto Label_8960; // 0x22f5 JumpB
	var_1247_int = 0; var_1248_int = 0; var_1249_object = Obj(); var_1250_object = Obj(); var_1251_object = Obj(); var_1252_object = Obj(); // 0x22f6 PushV
	var_1247_int = var_501_int; // 0x22f7 Mov
	var_1248_int = var_502_int; // 0x22f8 Mov
	var_1249_object = var_507_object; // 0x22f9 Mov
	var_1250_object = var_508_object; // 0x22fa Mov
	var_1251_object = var_509_object; // 0x22fb Mov
	var_1252_object = var_510_object; // 0x22fc Mov
	func_5020(var_1247_int, var_1248_int, var_1249_object, var_1250_object, var_1251_object, var_1252_object); // 0x22fd NEW_2
	goto Label_9115; // 0x22ff Jump
	
Label_8960:
	var_1293_int = 4; // 0x2300 PushI
	var_1294_bool = var_500_int == var_1293_int; // 0x2301 Eq
	if(var_1294_bool == 0) goto Label_8973; // 0x2302 JumpB
	var_1295_int = 0; var_1296_int = 0; var_1297_object = Obj(); var_1298_object = Obj(); var_1299_object = Obj(); var_1300_object = Obj(); // 0x2303 PushV
	var_1295_int = var_501_int; // 0x2304 Mov
	var_1296_int = var_502_int; // 0x2305 Mov
	var_1297_object = var_507_object; // 0x2306 Mov
	var_1298_object = var_508_object; // 0x2307 Mov
	var_1299_object = var_509_object; // 0x2308 Mov
	var_1300_object = var_510_object; // 0x2309 Mov
	func_5238(var_1295_int, var_1296_int, var_1297_object, var_1298_object, var_1299_object, var_1300_object); // 0x230a NEW_2
	goto Label_9115; // 0x230c Jump
	
Label_8973:
	var_1338_int = 5; // 0x230d PushI
	var_1339_bool = var_500_int == var_1338_int; // 0x230e Eq
	if(var_1339_bool == 0) goto Label_8986; // 0x230f JumpB
	var_1340_int = 0; var_1341_int = 0; var_1342_object = Obj(); var_1343_object = Obj(); var_1344_object = Obj(); var_1345_object = Obj(); // 0x2310 PushV
	var_1340_int = var_501_int; // 0x2311 Mov
	var_1341_int = var_502_int; // 0x2312 Mov
	var_1342_object = var_507_object; // 0x2313 Mov
	var_1343_object = var_508_object; // 0x2314 Mov
	var_1344_object = var_509_object; // 0x2315 Mov
	var_1345_object = var_510_object; // 0x2316 Mov
	func_5480(var_1340_int, var_1341_int, var_1342_object, var_1343_object, var_1344_object, var_1345_object); // 0x2317 NEW_2
	goto Label_9115; // 0x2319 Jump
	
Label_8986:
	var_1371_int = 6; // 0x231a PushI
	var_1372_bool = var_500_int == var_1371_int; // 0x231b Eq
	if(var_1372_bool == 0) goto Label_8999; // 0x231c JumpB
	var_1373_int = 0; var_1374_int = 0; var_1375_object = Obj(); var_1376_object = Obj(); var_1377_object = Obj(); var_1378_object = Obj(); // 0x231d PushV
	var_1373_int = var_501_int; // 0x231e Mov
	var_1374_int = var_502_int; // 0x231f Mov
	var_1375_object = var_507_object; // 0x2320 Mov
	var_1376_object = var_508_object; // 0x2321 Mov
	var_1377_object = var_509_object; // 0x2322 Mov
	var_1378_object = var_510_object; // 0x2323 Mov
	func_5638(var_1378_object); // 0x2324 NEW_2
	goto Label_9115; // 0x2326 Jump
	
Label_8999:
	var_1381_int = 7; // 0x2327 PushI
	var_1382_bool = var_500_int == var_1381_int; // 0x2328 Eq
	if(var_1382_bool == 0) goto Label_9012; // 0x2329 JumpB
	var_1383_int = 0; var_1384_int = 0; var_1385_object = Obj(); var_1386_object = Obj(); var_1387_object = Obj(); var_1388_object = Obj(); // 0x232a PushV
	var_1383_int = var_501_int; // 0x232b Mov
	var_1384_int = var_502_int; // 0x232c Mov
	var_1385_object = var_507_object; // 0x232d Mov
	var_1386_object = var_508_object; // 0x232e Mov
	var_1387_object = var_509_object; // 0x232f Mov
	var_1388_object = var_510_object; // 0x2330 Mov
	func_5703(var_1383_int, var_1384_int, var_1385_object, var_1386_object, var_1387_object, var_1388_object); // 0x2331 NEW_2
	goto Label_9115; // 0x2333 Jump
	
Label_9012:
	var_1568_int = 8; // 0x2334 PushI
	var_1569_bool = var_500_int == var_1568_int; // 0x2335 Eq
	if(var_1569_bool == 0) goto Label_9025; // 0x2336 JumpB
	var_1570_int = 0; var_1571_int = 0; var_1572_object = Obj(); var_1573_object = Obj(); var_1574_object = Obj(); var_1575_object = Obj(); // 0x2337 PushV
	var_1570_int = var_501_int; // 0x2338 Mov
	var_1571_int = var_502_int; // 0x2339 Mov
	var_1572_object = var_507_object; // 0x233a Mov
	var_1573_object = var_508_object; // 0x233b Mov
	var_1574_object = var_509_object; // 0x233c Mov
	var_1575_object = var_510_object; // 0x233d Mov
	func_5903(var_1570_int, var_1571_int, var_1572_object, var_1573_object, var_1574_object, var_1575_object); // 0x233e NEW_2
	goto Label_9115; // 0x2340 Jump
	
Label_9025:
	var_1601_int = 9; // 0x2341 PushI
	var_1602_bool = var_500_int == var_1601_int; // 0x2342 Eq
	if(var_1602_bool == 0) goto Label_9038; // 0x2343 JumpB
	var_1603_int = 0; var_1604_int = 0; var_1605_object = Obj(); var_1606_object = Obj(); var_1607_object = Obj(); var_1608_object = Obj(); // 0x2344 PushV
	var_1603_int = var_501_int; // 0x2345 Mov
	var_1604_int = var_502_int; // 0x2346 Mov
	var_1605_object = var_507_object; // 0x2347 Mov
	var_1606_object = var_508_object; // 0x2348 Mov
	var_1607_object = var_509_object; // 0x2349 Mov
	var_1608_object = var_510_object; // 0x234a Mov
	func_6106(var_1603_int, var_1604_int, var_1605_object, var_1606_object, var_1607_object, var_1608_object); // 0x234b NEW_2
	goto Label_9115; // 0x234d Jump
	
Label_9038:
	var_1634_int = 10; // 0x234e PushI
	var_1635_bool = var_500_int == var_1634_int; // 0x234f Eq
	if(var_1635_bool == 0) goto Label_9051; // 0x2350 JumpB
	var_1636_int = 0; var_1637_int = 0; var_1638_object = Obj(); var_1639_object = Obj(); var_1640_object = Obj(); var_1641_object = Obj(); // 0x2351 PushV
	var_1636_int = var_501_int; // 0x2352 Mov
	var_1637_int = var_502_int; // 0x2353 Mov
	var_1638_object = var_507_object; // 0x2354 Mov
	var_1639_object = var_508_object; // 0x2355 Mov
	var_1640_object = var_509_object; // 0x2356 Mov
	var_1641_object = var_510_object; // 0x2357 Mov
	func_6315(var_1636_int, var_1637_int, var_1638_object, var_1639_object, var_1640_object, var_1641_object); // 0x2358 NEW_2
	goto Label_9115; // 0x235a Jump
	
Label_9051:
	var_1667_int = 11; // 0x235b PushI
	var_1668_bool = var_500_int == var_1667_int; // 0x235c Eq
	if(var_1668_bool == 0) goto Label_9064; // 0x235d JumpB
	var_1669_int = 0; var_1670_int = 0; var_1671_object = Obj(); var_1672_object = Obj(); var_1673_object = Obj(); var_1674_object = Obj(); // 0x235e PushV
	var_1669_int = var_501_int; // 0x235f Mov
	var_1670_int = var_502_int; // 0x2360 Mov
	var_1671_object = var_507_object; // 0x2361 Mov
	var_1672_object = var_508_object; // 0x2362 Mov
	var_1673_object = var_509_object; // 0x2363 Mov
	var_1674_object = var_510_object; // 0x2364 Mov
	func_6527(var_1669_int, var_1670_int, var_1671_object, var_1672_object, var_1673_object, var_1674_object); // 0x2365 NEW_2
	goto Label_9115; // 0x2367 Jump
	
Label_9064:
	var_1700_int = 12; // 0x2368 PushI
	var_1701_bool = var_500_int == var_1700_int; // 0x2369 Eq
	if(var_1701_bool == 0) goto Label_9077; // 0x236a JumpB
	var_1702_int = 0; var_1703_int = 0; var_1704_object = Obj(); var_1705_object = Obj(); var_1706_object = Obj(); var_1707_object = Obj(); // 0x236b PushV
	var_1702_int = var_501_int; // 0x236c Mov
	var_1703_int = var_502_int; // 0x236d Mov
	var_1704_object = var_507_object; // 0x236e Mov
	var_1705_object = var_508_object; // 0x236f Mov
	var_1706_object = var_509_object; // 0x2370 Mov
	var_1707_object = var_510_object; // 0x2371 Mov
	func_6724(var_1702_int, var_1703_int, var_1704_object, var_1705_object, var_1706_object, var_1707_object); // 0x2372 NEW_2
	goto Label_9115; // 0x2374 Jump
	
Label_9077:
	var_1733_int = 13; // 0x2375 PushI
	var_1734_bool = var_500_int == var_1733_int; // 0x2376 Eq
	if(var_1734_bool == 0) goto Label_9090; // 0x2377 JumpB
	var_1735_int = 0; var_1736_int = 0; var_1737_object = Obj(); var_1738_object = Obj(); var_1739_object = Obj(); var_1740_object = Obj(); // 0x2378 PushV
	var_1735_int = var_501_int; // 0x2379 Mov
	var_1736_int = var_502_int; // 0x237a Mov
	var_1737_object = var_507_object; // 0x237b Mov
	var_1738_object = var_508_object; // 0x237c Mov
	var_1739_object = var_509_object; // 0x237d Mov
	var_1740_object = var_510_object; // 0x237e Mov
	func_6927(var_1735_int, var_1736_int, var_1737_object, var_1738_object, var_1739_object, var_1740_object); // 0x237f NEW_2
	goto Label_9115; // 0x2381 Jump
	
Label_9090:
	var_1766_int = 14; // 0x2382 PushI
	var_1767_bool = var_500_int == var_1766_int; // 0x2383 Eq
	if(var_1767_bool == 0) goto Label_9103; // 0x2384 JumpB
	var_1768_int = 0; var_1769_int = 0; var_1770_object = Obj(); var_1771_object = Obj(); var_1772_object = Obj(); var_1773_object = Obj(); // 0x2385 PushV
	var_1768_int = var_501_int; // 0x2386 Mov
	var_1769_int = var_502_int; // 0x2387 Mov
	var_1770_object = var_507_object; // 0x2388 Mov
	var_1771_object = var_508_object; // 0x2389 Mov
	var_1772_object = var_509_object; // 0x238a Mov
	var_1773_object = var_510_object; // 0x238b Mov
	func_7127(var_1768_int, var_1769_int, var_1770_object, var_1771_object, var_1772_object, var_1773_object); // 0x238c NEW_2
	goto Label_9115; // 0x238e Jump
	
Label_9103:
	var_1944_int = 15; // 0x238f PushI
	var_1945_bool = var_500_int == var_1944_int; // 0x2390 Eq
	if(var_1945_bool == 0) goto Label_9115; // 0x2391 JumpB
	var_1946_int = 0; var_1947_int = 0; var_1948_object = Obj(); var_1949_object = Obj(); var_1950_object = Obj(); var_1951_object = Obj(); // 0x2392 PushV
	var_1946_int = var_501_int; // 0x2393 Mov
	var_1947_int = var_502_int; // 0x2394 Mov
	var_1948_object = var_507_object; // 0x2395 Mov
	var_1949_object = var_508_object; // 0x2396 Mov
	var_1950_object = var_509_object; // 0x2397 Mov
	var_1951_object = var_510_object; // 0x2398 Mov
	func_7309(var_1946_int, var_1947_int, var_1948_object, var_1949_object, var_1950_object, var_1951_object); // 0x2399 NEW_2
}


func_9920()
{
	var_4714_object = Obj(); var_4715_object = Obj(); var_4716_object = Obj(); var_4717_object = Obj(); // 0x26c0 PushV
	var_4718_object = Obj(); // 0x26c1 PushV
	func_11161(var_4718_object); // 0x26c2 NEW_2
	var_4716_object = var_4718_object; // 0x26c3 Mov
	var_4725_string = "k1q01AlexandrGotoKaterina"; // 0x26c5 PushS
	FindMark(var_4717_object, var_4725_string); // 0x26c6 ObjFunc
	var_4726_object = var_4717_object; // 0x26c8 Push
	if(var_4726_object == 0) goto Label_9932; // 0x26c9 JumpB
	Remove(); // 0x26ca ObjFunc
	
Label_9932:
	var_4727_string = "k1q01AlexandrGotoStation"; // 0x26cc PushS
	FindMark(var_4717_object, var_4727_string); // 0x26cd ObjFunc
	var_4728_object = var_4717_object; // 0x26cf Push
	if(var_4728_object == 0) goto Label_9939; // 0x26d0 JumpB
	Remove(); // 0x26d1 ObjFunc
	
Label_9939:
	var_4729_string = "k1q01BurahGotoAnna"; // 0x26d3 PushS
	FindMark(var_4717_object, var_4729_string); // 0x26d4 ObjFunc
	var_4730_object = var_4717_object; // 0x26d6 Push
	if(var_4730_object == 0) goto Label_9946; // 0x26d7 JumpB
	Remove(); // 0x26d8 ObjFunc
	
Label_9946:
	var_4731_string = "k1q01CompletedGotoAlexandt"; // 0x26da PushS
	FindMark(var_4717_object, var_4731_string); // 0x26db ObjFunc
	var_4732_object = var_4717_object; // 0x26dd Push
	if(var_4732_object == 0) goto Label_9953; // 0x26de JumpB
	Remove(); // 0x26df ObjFunc
	
Label_9953:
	var_4733_string = "k1q01KaterinaGotoAlexandr"; // 0x26e1 PushS
	FindMark(var_4717_object, var_4733_string); // 0x26e2 ObjFunc
	var_4734_object = var_4717_object; // 0x26e4 Push
	if(var_4734_object == 0) goto Label_9960; // 0x26e5 JumpB
	Remove(); // 0x26e6 ObjFunc
	
Label_9960:
	var_4735_string = "k1q01LaskaGotoBurah"; // 0x26e8 PushS
	FindMark(var_4717_object, var_4735_string); // 0x26e9 ObjFunc
	var_4736_object = var_4717_object; // 0x26eb Push
	if(var_4736_object == 0) goto Label_9967; // 0x26ec JumpB
	Remove(); // 0x26ed ObjFunc
	
Label_9967:
	var_4737_string = "k1q01StationGotoLaska"; // 0x26ef PushS
	FindMark(var_4717_object, var_4737_string); // 0x26f0 ObjFunc
	var_4738_object = var_4717_object; // 0x26f2 Push
	if(var_4738_object == 0) goto Label_9974; // 0x26f3 JumpB
	Remove(); // 0x26f4 ObjFunc
	
Label_9974:
	var_4739_string = "k1q02GeorgGotoMaria"; // 0x26f6 PushS
	FindMark(var_4717_object, var_4739_string); // 0x26f7 ObjFunc
	var_4740_object = var_4717_object; // 0x26f9 Push
	if(var_4740_object == 0) goto Label_9981; // 0x26fa JumpB
	Remove(); // 0x26fb ObjFunc
	
Label_9981:
	var_4741_string = "k1q02KaterinaGotoGeorg"; // 0x26fd PushS
	FindMark(var_4717_object, var_4741_string); // 0x26fe ObjFunc
	var_4742_object = var_4717_object; // 0x2700 Push
	if(var_4742_object == 0) goto Label_9988; // 0x2701 JumpB
	Remove(); // 0x2702 ObjFunc
	
Label_9988:
	var_4743_string = "k1q03AnnaGotoNotkin"; // 0x2704 PushS
	FindMark(var_4717_object, var_4743_string); // 0x2705 ObjFunc
	var_4744_object = var_4717_object; // 0x2707 Push
	if(var_4744_object == 0) goto Label_9995; // 0x2708 JumpB
	Remove(); // 0x2709 ObjFunc
	
Label_9995:
	var_4745_bool = 0; var_4746_int = 0; // 0x270b PushV
	var_4746_int = 318; // 0x270c MovI
	func_11136(var_4745_bool, var_4746_int); // 0x270d NEW_2
	var_4757_bool = 0; var_4758_int = 0; // 0x270f PushV
	var_4758_int = 326; // 0x2710 MovI
	func_11136(var_4757_bool, var_4758_int); // 0x2711 NEW_2
	var_4759_bool = 0; var_4760_int = 0; // 0x2713 PushV
	var_4760_int = 333; // 0x2714 MovI
	func_11136(var_4759_bool, var_4760_int); // 0x2715 NEW_2
	return 4; // 0x2717 Return
}


func_7875()
{
	var_321_object = Obj(); var_322_int = 0; var_323_object = Obj(); var_324_int = 0; // 0x1ec3 PushV
	GetMainOutdoorScene(var_323_object); // 0x1ec4 Func
	var_324_int = 1; // 0x1ec6 MovI
	
Label_7879:
	var_325_int = 17; // 0x1ec7 PushI
	var_326_bool = var_324_int <= var_325_int; // 0x1ec8 LE
	if(var_326_bool == 0) goto Label_7896; // 0x1ec9 JumpB
	var_327_object = GlobalVars[15]; // 0x1eca PushGE
	var_328_object = Obj(); var_329_object = Obj(); var_330_string = ""; var_331_string = ""; var_332_string = ""; // 0x1ecb PushV
	var_329_object = var_323_object; // 0x1ecc Mov
	var_333_string = "pt_bull"; // 0x1ecd PushS
	var_330_string = var_333_string + var_324_int; // 0x1ece Add2
	var_331_string = "pers_bull"; // 0x1ecf MovS
	var_332_string = "bull.xml"; // 0x1ed0 MovS
	func_159(var_329_object, var_330_string, var_331_string, var_332_string); // 0x1ed1 NEW_2
	add(var_328_object); // 0x1ed3 ObjFunc
	var_347_int = 1; // 0x1ed5 PushI
	var_324_int = var_324_int + var_347_int; // 0x1ed6 Add2
	goto Label_7879; // 0x1ed7 Jump
	
Label_7896:
	return 4; // 0x1ed8 Return
}


func_10948(var_5463_bool)
{
	var_5466_int = 0; var_5467_string = ""; // 0x2ac5 PushV
	var_5467_string = "k6AlexandrVisit"; // 0x2ac6 MovS
	func_132(var_5466_int, var_5467_string); // 0x2ac7 NEW_2
	var_5468_int = 0; // 0x2ac9 PushI
	var_5469_bool = var_5466_int != var_5468_int; // 0x2aca Neq
	if(var_5469_bool == 0) goto Label_10958; // 0x2acb JumpB
	var_5463_bool = 1; // 0x2acc MovB
	return 0; // 0x2acd Return
	
Label_10958:
	var_5463_bool = 0; // 0x2ace MovB
	return 0; // 0x2acf Return
}


func_2764(var_2689_int, var_2690_int, var_2691_int)
{
	var_2692_int = 0; var_2693_int = 0; var_2694_int = 0; var_2695_int = 0; // 0xacc PushV
	var_2696_bool = 0; // 0xacd PushV
	var_2696_bool = 0; // 0xace MovB
	var_2697_int = 8; // 0xacf PushI
	var_2698_bool = var_2691_int > var_2697_int; // 0xad0 GT
	if(var_2698_bool == 0) goto Label_2774; // 0xad1 JumpB
	var_2699_int = 21; // 0xad2 PushI
	var_2700_bool = var_2691_int < var_2699_int; // 0xad3 LT
	if(var_2700_bool == 0) goto Label_2774; // 0xad4 JumpB
	var_2696_bool = 1; // 0xad5 MovB
	
Label_2774:
	if(var_2696_bool == 0) goto Label_2829; // 0xad6 JumpB
	var_2701_int = 0; var_2702_string = ""; var_2703_string = ""; var_2704_int = 0; // 0xad7 PushV
	var_2701_int = var_2689_int; // 0xad8 Mov
	var_2702_string = "pers_vaxxabit"; // 0xad9 MovS
	var_2703_string = "vaxxabit_d.xml"; // 0xada MovS
	var_2704_int = 6; // 0xadb MovI
	func_503(var_2701_int, var_2702_string, var_2703_string, var_2704_int); // 0xadc NEW_2
	var_2705_int = 0; var_2706_string = ""; var_2707_string = ""; var_2708_int = 0; // 0xade PushV
	var_2705_int = var_2689_int; // 0xadf Mov
	var_2706_string = "pers_vaxxabitka"; // 0xae0 MovS
	var_2707_string = "vaxxabitka_d.xml"; // 0xae1 MovS
	var_2708_int = 5; // 0xae2 MovI
	func_503(var_2705_int, var_2706_string, var_2707_string, var_2708_int); // 0xae3 NEW_2
	var_2709_int = 0; var_2710_string = ""; var_2711_string = ""; var_2712_int = 0; // 0xae5 PushV
	var_2709_int = var_2689_int; // 0xae6 Mov
	var_2710_string = "pers_rat_big"; // 0xae7 MovS
	var_2711_string = "rat_big.xml"; // 0xae8 MovS
	var_2712_int = 2; // 0xae9 MovI
	func_503(var_2709_int, var_2710_string, var_2711_string, var_2712_int); // 0xaea NEW_2
	var_2713_int = 0; var_2714_string = ""; var_2715_string = ""; var_2716_int = 0; // 0xaec PushV
	var_2713_int = var_2689_int; // 0xaed Mov
	var_2714_string = "fog"; // 0xaee MovS
	var_2715_string = "fog.xml"; // 0xaef MovS
	var_2716_int = 6; // 0xaf0 MovI
	func_529(var_2713_int, var_2714_string, var_2715_string, var_2716_int); // 0xaf1 NEW_2
	var_2717_int = 5; // 0xaf3 PushI
	var_2718_bool = var_2690_int >= var_2717_int; // 0xaf4 GE
	if(var_2718_bool == 0) goto Label_2813; // 0xaf5 JumpB
	var_2719_int = 0; var_2720_string = ""; var_2721_string = ""; var_2722_int = 0; // 0xaf6 PushV
	var_2719_int = var_2689_int; // 0xaf7 Mov
	var_2720_string = "fog"; // 0xaf8 MovS
	var_2721_string = "fog_hunter.xml"; // 0xaf9 MovS
	var_2722_int = 2; // 0xafa MovI
	func_529(var_2719_int, var_2720_string, var_2721_string, var_2722_int); // 0xafb NEW_2
	
Label_2813:
	var_2723_int = 1; // 0xafd PushI
	var_2724_float = 0; var_2725_int = 0; // 0xafe PushV
	var_2725_int = var_2690_int; // 0xaff Mov
	func_1255(var_2724_float, var_2725_int); // 0xb00 NEW_2
	var_2694_int = var_2723_int * var_2724_float; // 0xb02 Mult2
	var_2726_int = var_2694_int; // 0xb03 Push
	if(var_2726_int == 0) goto Label_2828; // 0xb04 JumpB
	var_2727_int = 0; var_2728_string = ""; var_2729_string = ""; var_2730_int = 0; // 0xb05 PushV
	var_2727_int = var_2689_int; // 0xb06 Mov
	var_2728_string = "pers_bomber"; // 0xb07 MovS
	var_2729_string = "bomber.xml"; // 0xb08 MovS
	var_2730_int = var_2694_int; // 0xb09 Mov
	func_503(var_2727_int, var_2728_string, var_2729_string, var_2730_int); // 0xb0a NEW_2
	
Label_2828:
	goto Label_2882; // 0xb0c Jump
	
Label_2882:
	var_2731_int = 0; var_2732_string = ""; var_2733_string = ""; var_2734_int = 0; var_2735_int = 0; var_2736_int = 0; // 0xb42 PushV
	var_2731_int = var_2689_int; // 0xb43 Mov
	var_2732_string = "pers_worker"; // 0xb44 MovS
	var_2733_string = "agony1_man.xml"; // 0xb45 MovS
	var_2734_int = 2; // 0xb46 MovI
	var_2735_int = 4; // 0xb47 MovI
	var_2736_int = 4; // 0xb48 MovI
	func_516(var_2731_int, var_2732_string, var_2733_string, var_2734_int, var_2735_int, var_2736_int); // 0xb49 NEW_2
	var_2737_int = 0; var_2738_string = ""; var_2739_string = ""; var_2740_int = 0; var_2741_int = 0; var_2742_int = 0; // 0xb4b PushV
	var_2737_int = var_2689_int; // 0xb4c Mov
	var_2738_string = "pers_unosha"; // 0xb4d MovS
	var_2739_string = "agony1_man.xml"; // 0xb4e MovS
	var_2740_int = 2; // 0xb4f MovI
	var_2741_int = 4; // 0xb50 MovI
	var_2742_int = 4; // 0xb51 MovI
	func_516(var_2737_int, var_2738_string, var_2739_string, var_2740_int, var_2741_int, var_2742_int); // 0xb52 NEW_2
	var_2743_int = 0; var_2744_string = ""; var_2745_string = ""; var_2746_int = 0; var_2747_int = 0; var_2748_int = 0; // 0xb54 PushV
	var_2743_int = var_2689_int; // 0xb55 Mov
	var_2744_string = "pers_woman"; // 0xb56 MovS
	var_2745_string = "agony1_woman.xml"; // 0xb57 MovS
	var_2746_int = 2; // 0xb58 MovI
	var_2747_int = 4; // 0xb59 MovI
	var_2748_int = 4; // 0xb5a MovI
	func_516(var_2743_int, var_2744_string, var_2745_string, var_2746_int, var_2747_int, var_2748_int); // 0xb5b NEW_2
	var_2749_int = 0; var_2750_string = ""; var_2751_string = ""; var_2752_int = 0; var_2753_int = 0; var_2754_int = 0; // 0xb5d PushV
	var_2749_int = var_2689_int; // 0xb5e Mov
	var_2750_string = "pers_wasted_girl"; // 0xb5f MovS
	var_2751_string = "agony1_woman.xml"; // 0xb60 MovS
	var_2752_int = 2; // 0xb61 MovI
	var_2753_int = 4; // 0xb62 MovI
	var_2754_int = 4; // 0xb63 MovI
	func_516(var_2749_int, var_2750_string, var_2751_string, var_2752_int, var_2753_int, var_2754_int); // 0xb64 NEW_2
	var_2755_bool = 0; var_2756_int = 0; var_2757_int = 0; // 0xb66 PushV
	var_2756_int = var_2690_int; // 0xb67 Mov
	var_2757_int = var_2691_int; // 0xb68 Mov
	func_1345(var_2755_bool, var_2756_int, var_2757_int); // 0xb69 NEW_2
	if(var_2755_bool == 0) goto Label_2931; // 0xb6b JumpB
	var_2758_int = 0; var_2759_string = ""; var_2760_string = ""; var_2761_int = 0; // 0xb6c PushV
	var_2758_int = var_2689_int; // 0xb6d Mov
	var_2759_string = "pers_soldat"; // 0xb6e MovS
	var_2760_string = "soldier_marauder.xml"; // 0xb6f MovS
	var_2761_int = 2; // 0xb70 MovI
	func_503(var_2758_int, var_2759_string, var_2760_string, var_2761_int); // 0xb71 NEW_2
	
Label_2931:
	var_2762_bool = 0; var_2763_int = 0; // 0xb73 PushV
	var_2763_int = var_2690_int; // 0xb74 Mov
	func_1372(var_2762_bool, var_2763_int); // 0xb75 NEW_2
	if(var_2762_bool == 0) goto Label_2943; // 0xb77 JumpB
	var_2764_int = 0; var_2765_string = ""; var_2766_string = ""; var_2767_int = 0; // 0xb78 PushV
	var_2764_int = var_2689_int; // 0xb79 Mov
	var_2765_string = "pers_sanitar"; // 0xb7a MovS
	var_2766_string = "sanitar.xml"; // 0xb7b MovS
	var_2767_int = 1; // 0xb7c MovI
	func_503(var_2764_int, var_2765_string, var_2766_string, var_2767_int); // 0xb7d NEW_2
	
Label_2943:
	return 4; // 0xb7f Return
	
Label_2829:
	var_2768_int = 0; var_2769_string = ""; var_2770_string = ""; var_2771_int = 0; // 0xb0d PushV
	var_2768_int = var_2689_int; // 0xb0e Mov
	var_2769_string = "pers_vaxxabit"; // 0xb0f MovS
	var_2770_string = "vaxxabit_d.xml"; // 0xb10 MovS
	var_2771_int = 4; // 0xb11 MovI
	func_503(var_2768_int, var_2769_string, var_2770_string, var_2771_int); // 0xb12 NEW_2
	var_2772_int = 0; var_2773_string = ""; var_2774_string = ""; var_2775_int = 0; // 0xb14 PushV
	var_2772_int = var_2689_int; // 0xb15 Mov
	var_2773_string = "pers_vaxxabitka"; // 0xb16 MovS
	var_2774_string = "vaxxabitka_d.xml"; // 0xb17 MovS
	var_2775_int = 4; // 0xb18 MovI
	func_503(var_2772_int, var_2773_string, var_2774_string, var_2775_int); // 0xb19 NEW_2
	var_2776_int = 0; var_2777_string = ""; var_2778_string = ""; var_2779_int = 0; // 0xb1b PushV
	var_2776_int = var_2689_int; // 0xb1c Mov
	var_2777_string = "pers_rat_big"; // 0xb1d MovS
	var_2778_string = "rat_big.xml"; // 0xb1e MovS
	var_2779_int = 3; // 0xb1f MovI
	func_503(var_2776_int, var_2777_string, var_2778_string, var_2779_int); // 0xb20 NEW_2
	var_2780_int = 0; var_2781_string = ""; var_2782_string = ""; var_2783_int = 0; // 0xb22 PushV
	var_2780_int = var_2689_int; // 0xb23 Mov
	var_2781_string = "fog"; // 0xb24 MovS
	var_2782_string = "fog.xml"; // 0xb25 MovS
	var_2783_int = 6; // 0xb26 MovI
	func_529(var_2780_int, var_2781_string, var_2782_string, var_2783_int); // 0xb27 NEW_2
	var_2784_int = 5; // 0xb29 PushI
	var_2785_bool = var_2690_int >= var_2784_int; // 0xb2a GE
	if(var_2785_bool == 0) goto Label_2867; // 0xb2b JumpB
	var_2786_int = 0; var_2787_string = ""; var_2788_string = ""; var_2789_int = 0; // 0xb2c PushV
	var_2786_int = var_2689_int; // 0xb2d Mov
	var_2787_string = "fog"; // 0xb2e MovS
	var_2788_string = "fog_hunter.xml"; // 0xb2f MovS
	var_2789_int = 2; // 0xb30 MovI
	func_529(var_2786_int, var_2787_string, var_2788_string, var_2789_int); // 0xb31 NEW_2
	
Label_2867:
	var_2790_int = 1; // 0xb33 PushI
	var_2791_float = 0; var_2792_int = 0; // 0xb34 PushV
	var_2792_int = var_2690_int; // 0xb35 Mov
	func_1255(var_2791_float, var_2792_int); // 0xb36 NEW_2
	var_2695_int = var_2790_int * var_2791_float; // 0xb38 Mult2
	var_2793_int = var_2695_int; // 0xb39 Push
	if(var_2793_int == 0) goto Label_2882; // 0xb3a JumpB
	var_2794_int = 0; var_2795_string = ""; var_2796_string = ""; var_2797_int = 0; // 0xb3b PushV
	var_2794_int = var_2689_int; // 0xb3c Mov
	var_2795_string = "pers_bomber"; // 0xb3d MovS
	var_2796_string = "bomber.xml"; // 0xb3e MovS
	var_2797_int = var_2695_int; // 0xb3f Mov
	func_503(var_2794_int, var_2795_string, var_2796_string, var_2797_int); // 0xb40 NEW_2
}


func_720(var_3198_int, var_3199_int, var_3200_object, var_3201_object, var_3202_object)
{
	var_3203_int = 0; var_3204_bool = 0; // 0x2d1 PushV
	var_3203_int = var_3198_int; // 0x2d2 Mov
	var_3204_bool = 0; // 0x2d3 MovB
	func_542(var_3203_int, var_3204_bool); // 0x2d4 NEW_2
	var_3205_object = Obj(); // 0x2d6 PushV
	var_3205_object = var_3200_object; // 0x2d7 Mov
	func_263(var_3205_object); // 0x2d8 NEW_2
	var_3206_object = Obj(); // 0x2da PushV
	var_3206_object = var_3201_object; // 0x2db Mov
	func_263(var_3206_object); // 0x2dc NEW_2
	var_3207_object = Obj(); // 0x2de PushV
	var_3207_object = var_3202_object; // 0x2df Mov
	func_263(var_3207_object); // 0x2e0 NEW_2
	var_3208_int = 8; // 0x2e2 PushI
	var_3209_bool = var_3199_int < var_3208_int; // 0x2e3 LT
	if(var_3209_bool == 0) goto Label_754; // 0x2e4 JumpB
	var_3210_string = ""; var_3211_object = Obj(); var_3212_string = ""; var_3213_string = ""; // 0x2e5 PushV
	var_3214_string = "pt_blockpost"; // 0x2e6 PushS
	var_3215_int = 1; // 0x2e7 PushI
	var_3216_int = var_3198_int + var_3215_int; // 0x2e8 Add
	var_3217_int = var_3214_string + var_3216_int; // 0x2e9 Add
	var_3218_string = "_1_"; // 0x2ea PushS
	var_3210_string = var_3217_int + var_3218_string; // 0x2eb Add2
	var_3211_object = var_3200_object; // 0x2ec Mov
	var_3212_string = "pers_patrool"; // 0x2ed MovS
	var_3213_string = "patrol_stat.xml"; // 0x2ee MovS
	func_576(var_3211_object, var_3212_string, var_3213_string); // 0x2ef NEW_2
	goto Label_778; // 0x2f1 Jump
	
Label_778:
	return 0; // 0x30a Return
	
Label_754:
	var_3219_string = ""; var_3220_object = Obj(); var_3221_string = ""; var_3222_string = ""; // 0x2f2 PushV
	var_3223_string = "pt_blockpost"; // 0x2f3 PushS
	var_3224_int = 1; // 0x2f4 PushI
	var_3225_int = var_3198_int + var_3224_int; // 0x2f5 Add
	var_3226_int = var_3223_string + var_3225_int; // 0x2f6 Add
	var_3227_string = "_1_"; // 0x2f7 PushS
	var_3219_string = var_3226_int + var_3227_string; // 0x2f8 Add2
	var_3220_object = var_3200_object; // 0x2f9 Mov
	var_3221_string = "pers_soldat"; // 0x2fa MovS
	var_3222_string = "soldier.xml"; // 0x2fb MovS
	func_576(var_3220_object, var_3221_string, var_3222_string); // 0x2fc NEW_2
	var_3228_string = ""; var_3229_object = Obj(); var_3230_string = ""; var_3231_string = ""; // 0x2fe PushV
	var_3232_string = "pt_blockpost"; // 0x2ff PushS
	var_3233_int = 1; // 0x300 PushI
	var_3234_int = var_3198_int + var_3233_int; // 0x301 Add
	var_3235_int = var_3232_string + var_3234_int; // 0x302 Add
	var_3236_string = "_2_"; // 0x303 PushS
	var_3228_string = var_3235_int + var_3236_string; // 0x304 Add2
	var_3229_object = var_3201_object; // 0x305 Mov
	var_3230_string = "pers_sanitar"; // 0x306 MovS
	var_3231_string = "sanitar_stat.xml"; // 0x307 MovS
	func_576(var_3229_object, var_3230_string, var_3231_string); // 0x308 NEW_2
}


func_10960(var_5666_bool)
{
	var_5669_int = 0; var_5670_string = ""; // 0x2ad1 PushV
	var_5670_string = "k5Kapellavisit"; // 0x2ad2 MovS
	func_132(var_5669_int, var_5670_string); // 0x2ad3 NEW_2
	var_5671_int = 0; // 0x2ad5 PushI
	var_5672_bool = var_5669_int != var_5671_int; // 0x2ad6 Neq
	if(var_5672_bool == 0) goto Label_10970; // 0x2ad7 JumpB
	var_5666_bool = 1; // 0x2ad8 MovB
	return 0; // 0x2ad9 Return
	
Label_10970:
	var_5666_bool = 0; // 0x2ada MovB
	return 0; // 0x2adb Return
}


func_7898()
{
	var_4586_object = Obj(); // 0x1eda PushV
	var_4587_object = GlobalVars[15]; // 0x1edb PushGE
	var_4586_object = var_4587_object; // 0x1edc Mov
	func_263(var_4586_object); // 0x1ede NEW_2
	return 0; // 0x1ee0 Return
}


func_10972(var_5257_bool)
{
	var_5260_int = 0; var_5261_string = ""; // 0x2add PushV
	var_5261_string = "k6LaskaVisit"; // 0x2ade MovS
	func_132(var_5260_int, var_5261_string); // 0x2adf NEW_2
	var_5262_int = 0; // 0x2ae1 PushI
	var_5263_bool = var_5260_int != var_5262_int; // 0x2ae2 Neq
	if(var_5263_bool == 0) goto Label_10982; // 0x2ae3 JumpB
	var_5257_bool = 1; // 0x2ae4 MovB
	return 0; // 0x2ae5 Return
	
Label_10982:
	var_5257_bool = 0; // 0x2ae6 MovB
	return 0; // 0x2ae7 Return
}


func_6880()
{
	var_280_string = "r7_house2_01"; // 0x1ae1 PushS
	add(var_280_string); // 0x1ae2 ObjFunc
	var_281_string = "r7_house2_02"; // 0x1ae4 PushS
	add(var_281_string); // 0x1ae5 ObjFunc
	var_282_string = "r7_house2_03"; // 0x1ae7 PushS
	add(var_282_string); // 0x1ae8 ObjFunc
	var_283_string = "r7_house2_04"; // 0x1aea PushS
	add(var_283_string); // 0x1aeb ObjFunc
	var_284_string = "r7_house3_03_i2"; // 0x1aed PushS
	add(var_284_string); // 0x1aee ObjFunc
	var_285_string = "r7_house3_03"; // 0x1af0 PushS
	add(var_285_string); // 0x1af1 ObjFunc
	var_286_string = "r7_house3_04_i2"; // 0x1af3 PushS
	add(var_286_string); // 0x1af4 ObjFunc
	var_287_string = "r7_house3_04"; // 0x1af6 PushS
	add(var_287_string); // 0x1af7 ObjFunc
	var_288_string = "r7_house3_05_i2"; // 0x1af9 PushS
	add(var_288_string); // 0x1afa ObjFunc
	var_289_string = "r7_house3_05"; // 0x1afc PushS
	add(var_289_string); // 0x1afd ObjFunc
	var_290_string = "r7_house3_06_i2"; // 0x1aff PushS
	add(var_290_string); // 0x1b00 ObjFunc
	var_291_string = "r7_house3_01_i2"; // 0x1b02 PushS
	add(var_291_string); // 0x1b03 ObjFunc
	var_292_string = "r7_house3_01"; // 0x1b05 PushS
	add(var_292_string); // 0x1b06 ObjFunc
	var_293_string = "r7_house3_02_i2"; // 0x1b08 PushS
	add(var_293_string); // 0x1b09 ObjFunc
	var_294_string = "r7_house3_02"; // 0x1b0b PushS
	add(var_294_string); // 0x1b0c ObjFunc
	return 0; // 0x1b0e Return
}


func_7905()
{
	var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); // 0x1ee1 PushV
	var_39_object = GlobalVars[15]; // 0x1ee2 PushGE
	var_40_object = Obj(); // 0x1ee3 PushV
	func_126(var_40_object); // 0x1ee4 NEW_2
	var_39_object = var_40_object; // 0x1ee5 Mov
	GlobalVars[15] = var_39_object; // 0x1ee7 PopGE
	var_43_object = GlobalVars[13]; // 0x1ee8 PushGE
	var_44_object = Obj(); // 0x1ee9 PushV
	func_126(var_44_object); // 0x1eea NEW_2
	var_43_object = var_44_object; // 0x1eeb Mov
	GlobalVars[13] = var_43_object; // 0x1eed PopGE
	var_45_object = GlobalVars[8]; // 0x1eee PushGE
	var_46_object = Obj(); // 0x1eef PushV
	func_126(var_46_object); // 0x1ef0 NEW_2
	var_45_object = var_46_object; // 0x1ef1 Mov
	GlobalVars[8] = var_45_object; // 0x1ef3 PopGE
	var_47_object = GlobalVars[9]; // 0x1ef4 PushGE
	var_48_object = Obj(); // 0x1ef5 PushV
	func_126(var_48_object); // 0x1ef6 NEW_2
	var_47_object = var_48_object; // 0x1ef7 Mov
	GlobalVars[9] = var_47_object; // 0x1ef9 PopGE
	var_49_object = GlobalVars[10]; // 0x1efa PushGE
	var_50_object = Obj(); // 0x1efb PushV
	func_126(var_50_object); // 0x1efc NEW_2
	var_49_object = var_50_object; // 0x1efd Mov
	GlobalVars[10] = var_49_object; // 0x1eff PopGE
	var_29_int = 0; // 0x1f00 MovI
	
Label_7937:
	var_51_int = 16; // 0x1f01 PushI
	var_52_bool = var_29_int < var_51_int; // 0x1f02 LT
	if(var_52_bool == 0) goto Label_7961; // 0x1f03 JumpB
	var_53_object = GlobalVars[8]; // 0x1f04 PushGE
	var_54_object = Obj(); // 0x1f05 PushV
	func_126(var_54_object); // 0x1f06 NEW_2
	add(var_54_object); // 0x1f08 ObjFunc
	var_55_object = GlobalVars[9]; // 0x1f0a PushGE
	var_56_object = Obj(); // 0x1f0b PushV
	func_126(var_56_object); // 0x1f0c NEW_2
	add(var_56_object); // 0x1f0e ObjFunc
	var_57_object = GlobalVars[10]; // 0x1f10 PushGE
	var_58_object = Obj(); // 0x1f11 PushV
	func_126(var_58_object); // 0x1f12 NEW_2
	add(var_58_object); // 0x1f14 ObjFunc
	var_59_int = 1; // 0x1f16 PushI
	var_29_int = var_29_int + var_59_int; // 0x1f17 Add2
	goto Label_7937; // 0x1f18 Jump
	
Label_7961:
	CreateStringVector(var_30_object); // 0x1f19 Func
	var_60_object = GlobalVars[13]; // 0x1f1b PushGE
	add(var_30_object); // 0x1f1c ObjFunc
	var_61_object = Obj(); // 0x1f1e PushV
	var_61_object = var_30_object; // 0x1f1f Mov
	func_4385(); // 0x1f20 NEW_2
	CreateStringVector(var_30_object); // 0x1f22 Func
	var_62_object = GlobalVars[13]; // 0x1f24 PushGE
	add(var_30_object); // 0x1f25 ObjFunc
	var_63_object = Obj(); // 0x1f27 PushV
	var_63_object = var_30_object; // 0x1f28 Mov
	func_4543(); // 0x1f29 NEW_2
	CreateStringVector(var_30_object); // 0x1f2b Func
	var_77_object = GlobalVars[13]; // 0x1f2d PushGE
	add(var_30_object); // 0x1f2e ObjFunc
	var_78_object = Obj(); // 0x1f30 PushV
	var_78_object = var_30_object; // 0x1f31 Mov
	func_4740(); // 0x1f32 NEW_2
	CreateStringVector(var_30_object); // 0x1f34 Func
	var_95_object = GlobalVars[13]; // 0x1f36 PushGE
	add(var_30_object); // 0x1f37 ObjFunc
	var_96_object = Obj(); // 0x1f39 PushV
	var_96_object = var_30_object; // 0x1f3a Mov
	func_4946(); // 0x1f3b NEW_2
	CreateStringVector(var_30_object); // 0x1f3d Func
	var_121_object = GlobalVars[13]; // 0x1f3f PushGE
	add(var_30_object); // 0x1f40 ObjFunc
	var_122_object = Obj(); // 0x1f42 PushV
	var_122_object = var_30_object; // 0x1f43 Mov
	func_5176(); // 0x1f44 NEW_2
	CreateStringVector(var_30_object); // 0x1f46 Func
	var_143_object = GlobalVars[13]; // 0x1f48 PushGE
	add(var_30_object); // 0x1f49 ObjFunc
	var_144_object = Obj(); // 0x1f4b PushV
	var_144_object = var_30_object; // 0x1f4c Mov
	func_5394(); // 0x1f4d NEW_2
	CreateStringVector(var_30_object); // 0x1f4f Func
	var_173_object = GlobalVars[13]; // 0x1f51 PushGE
	add(var_30_object); // 0x1f52 ObjFunc
	var_174_object = Obj(); // 0x1f54 PushV
	var_174_object = var_30_object; // 0x1f55 Mov
	func_5636(); // 0x1f56 NEW_2
	CreateStringVector(var_30_object); // 0x1f58 Func
	var_175_object = GlobalVars[13]; // 0x1f5a PushGE
	add(var_30_object); // 0x1f5b ObjFunc
	var_176_object = Obj(); // 0x1f5d PushV
	var_176_object = var_30_object; // 0x1f5e Mov
	func_5659(); // 0x1f5f NEW_2
	CreateStringVector(var_30_object); // 0x1f61 Func
	var_191_object = GlobalVars[13]; // 0x1f63 PushGE
	add(var_30_object); // 0x1f64 ObjFunc
	var_192_object = Obj(); // 0x1f66 PushV
	var_192_object = var_30_object; // 0x1f67 Mov
	func_5859(); // 0x1f68 NEW_2
	CreateStringVector(var_30_object); // 0x1f6a Func
	var_207_object = GlobalVars[13]; // 0x1f6c PushGE
	add(var_30_object); // 0x1f6d ObjFunc
	var_208_object = Obj(); // 0x1f6f PushV
	var_208_object = var_30_object; // 0x1f70 Mov
	func_6059(); // 0x1f71 NEW_2
	CreateStringVector(var_30_object); // 0x1f73 Func
	var_224_object = GlobalVars[13]; // 0x1f75 PushGE
	add(var_30_object); // 0x1f76 ObjFunc
	var_225_object = Obj(); // 0x1f78 PushV
	var_225_object = var_30_object; // 0x1f79 Mov
	func_6262(); // 0x1f7a NEW_2
	CreateStringVector(var_30_object); // 0x1f7c Func
	var_243_object = GlobalVars[13]; // 0x1f7e PushGE
	add(var_30_object); // 0x1f7f ObjFunc
	var_244_object = Obj(); // 0x1f81 PushV
	var_244_object = var_30_object; // 0x1f82 Mov
	func_6471(); // 0x1f83 NEW_2
	CreateStringVector(var_30_object); // 0x1f85 Func
	var_263_object = GlobalVars[13]; // 0x1f87 PushGE
	add(var_30_object); // 0x1f88 ObjFunc
	var_264_object = Obj(); // 0x1f8a PushV
	var_264_object = var_30_object; // 0x1f8b Mov
	func_6683(); // 0x1f8c NEW_2
	CreateStringVector(var_30_object); // 0x1f8e Func
	var_278_object = GlobalVars[13]; // 0x1f90 PushGE
	add(var_30_object); // 0x1f91 ObjFunc
	var_279_object = Obj(); // 0x1f93 PushV
	var_279_object = var_30_object; // 0x1f94 Mov
	func_6880(); // 0x1f95 NEW_2
	CreateStringVector(var_30_object); // 0x1f97 Func
	var_295_object = GlobalVars[13]; // 0x1f99 PushGE
	add(var_30_object); // 0x1f9a ObjFunc
	var_296_object = Obj(); // 0x1f9c PushV
	var_296_object = var_30_object; // 0x1f9d Mov
	func_7083(); // 0x1f9e NEW_2
	CreateStringVector(var_30_object); // 0x1fa0 Func
	var_311_object = GlobalVars[13]; // 0x1fa2 PushGE
	add(var_30_object); // 0x1fa3 ObjFunc
	var_312_object = Obj(); // 0x1fa5 PushV
	var_312_object = var_30_object; // 0x1fa6 Mov
	func_7283(); // 0x1fa7 NEW_2
	func_7875(); // 0x1faa NEW_2
	GetMainOutdoorScene(var_31_object); // 0x1fac Func
	var_348_object = GlobalVars[6]; // 0x1fae PushGE
	var_349_object = Obj(); // 0x1faf PushV
	func_126(var_349_object); // 0x1fb0 NEW_2
	var_348_object = var_349_object; // 0x1fb1 Mov
	GlobalVars[6] = var_348_object; // 0x1fb3 PopGE
	var_32_int = 0; // 0x1fb4 MovI
	
Label_8117:
	var_350_string = "pt_plant"; // 0x1fb5 PushS
	var_351_int = 1; // 0x1fb6 PushI
	var_352_int = var_32_int + var_351_int; // 0x1fb7 Add
	var_353_int = var_350_string + var_352_int; // 0x1fb8 Add
	GetLocator(var_353_int, var_33_bool); // 0x1fb9 ObjFunc
	var_354_bool = var_33_bool == 0; // 0x1fbb Not
	if(var_354_bool == 0) goto Label_8126; // 0x1fbc JumpB
	goto Label_8129; // 0x1fbd Jump
	
Label_8129:
	var_355_object = GlobalVars[6]; // 0x1fc1 PushGE
	resize(var_32_int); // 0x1fc2 ObjFunc
	var_356_string = "Total plants: "; // 0x1fc4 PushS
	var_357_int = var_356_string + var_32_int; // 0x1fc5 Add
	Trace(var_357_int); // 0x1fc6 Func
	var_358_object = GlobalVars[7]; // 0x1fc8 PushGE
	var_359_object = Obj(); // 0x1fc9 PushV
	func_126(var_359_object); // 0x1fca NEW_2
	var_358_object = var_359_object; // 0x1fcb Mov
	GlobalVars[7] = var_358_object; // 0x1fcd PopGE
	var_34_int = 0; // 0x1fce MovI
	
Label_8143:
	var_360_string = "pt_grave_supply"; // 0x1fcf PushS
	var_361_int = 1; // 0x1fd0 PushI
	var_362_int = var_34_int + var_361_int; // 0x1fd1 Add
	var_363_int = var_360_string + var_362_int; // 0x1fd2 Add
	GetLocator(var_363_int, var_35_bool); // 0x1fd3 ObjFunc
	var_364_bool = var_35_bool == 0; // 0x1fd5 Not
	if(var_364_bool == 0) goto Label_8152; // 0x1fd6 JumpB
	goto Label_8155; // 0x1fd7 Jump
	
Label_8155:
	var_365_object = GlobalVars[7]; // 0x1fdb PushGE
	resize(var_34_int); // 0x1fdc ObjFunc
	var_366_string = "Total grave supplies: "; // 0x1fde PushS
	var_367_int = var_366_string + var_34_int; // 0x1fdf Add
	Trace(var_367_int); // 0x1fe0 Func
	var_368_object = GlobalVars[14]; // 0x1fe2 PushGE
	var_369_object = Obj(); // 0x1fe3 PushV
	func_126(var_369_object); // 0x1fe4 NEW_2
	var_368_object = var_369_object; // 0x1fe5 Mov
	GlobalVars[14] = var_368_object; // 0x1fe7 PopGE
	var_36_int = 0; // 0x1fe8 MovI
	
Label_8169:
	var_370_string = "pt_bonfire"; // 0x1fe9 PushS
	var_371_int = 1; // 0x1fea PushI
	var_372_int = var_36_int + var_371_int; // 0x1feb Add
	var_373_int = var_370_string + var_372_int; // 0x1fec Add
	GetLocator(var_373_int, var_37_bool); // 0x1fed ObjFunc
	var_374_bool = var_37_bool == 0; // 0x1fef Not
	if(var_374_bool == 0) goto Label_8178; // 0x1ff0 JumpB
	goto Label_8190; // 0x1ff1 Jump
	
Label_8190:
	var_375_string = "Total bonfires: "; // 0x1ffe PushS
	var_376_int = var_375_string + var_36_int; // 0x1fff Add
	Trace(var_376_int); // 0x2000 Func
	return 20; // 0x2002 Return
	
Label_8178:
	var_38_object = 0; // 0x1ff2 SetNull
	var_377_object = GlobalVars[14]; // 0x1ff3 PushGE
	add(var_38_object); // 0x1ff4 ObjFunc
	var_378_int = 0; // 0x1ff6 PushV
	var_378_int = var_36_int; // 0x1ff7 Mov
	func_7682(var_378_int); // 0x1ff8 NEW_2
	var_38_object = 0; // 0x1ffa SetNull
	var_413_int = 1; // 0x1ffb PushI
	var_36_int = var_36_int + var_413_int; // 0x1ffc Add2
	goto Label_8169; // 0x1ffd Jump
	
Label_8152:
	var_414_int = 1; // 0x1fd8 PushI
	var_34_int = var_34_int + var_414_int; // 0x1fd9 Add2
	goto Label_8143; // 0x1fda Jump
	
Label_8126:
	var_415_int = 1; // 0x1fbe PushI
	var_32_int = var_32_int + var_415_int; // 0x1fbf Add2
	goto Label_8117; // 0x1fc0 Jump
}


func_5859()
{
	var_193_string = "r2_house_2_01"; // 0x16e4 PushS
	add(var_193_string); // 0x16e5 ObjFunc
	var_194_string = "r2_house_2_02"; // 0x16e7 PushS
	add(var_194_string); // 0x16e8 ObjFunc
	var_195_string = "r2_house_2_03"; // 0x16ea PushS
	add(var_195_string); // 0x16eb ObjFunc
	var_196_string = "r2_house7_02"; // 0x16ed PushS
	add(var_196_string); // 0x16ee ObjFunc
	var_197_string = "r2_house01_01"; // 0x16f0 PushS
	add(var_197_string); // 0x16f1 ObjFunc
	var_198_string = "r2_house7_01"; // 0x16f3 PushS
	add(var_198_string); // 0x16f4 ObjFunc
	var_199_string = "r2_house3_01_i2"; // 0x16f6 PushS
	add(var_199_string); // 0x16f7 ObjFunc
	var_200_string = "r2_house3_01"; // 0x16f9 PushS
	add(var_200_string); // 0x16fa ObjFunc
	var_201_string = "r2_house3_02_i2"; // 0x16fc PushS
	add(var_201_string); // 0x16fd ObjFunc
	var_202_string = "r2_house3_02"; // 0x16ff PushS
	add(var_202_string); // 0x1700 ObjFunc
	var_203_string = "r2_house3_03_i2"; // 0x1702 PushS
	add(var_203_string); // 0x1703 ObjFunc
	var_204_string = "r2_house3_03"; // 0x1705 PushS
	add(var_204_string); // 0x1706 ObjFunc
	var_205_string = "r3_house7_01"; // 0x1708 PushS
	add(var_205_string); // 0x1709 ObjFunc
	var_206_string = "r3_house7_02"; // 0x170b PushS
	add(var_206_string); // 0x170c ObjFunc
	return 0; // 0x170e Return
}


func_10984(var_5281_bool)
{
	var_5284_int = 0; var_5285_string = ""; // 0x2ae9 PushV
	var_5285_string = "k4LaraVisit"; // 0x2aea MovS
	func_132(var_5284_int, var_5285_string); // 0x2aeb NEW_2
	var_5286_int = 0; // 0x2aed PushI
	var_5287_bool = var_5284_int != var_5286_int; // 0x2aee Neq
	if(var_5287_bool == 0) goto Label_10994; // 0x2aef JumpB
	var_5281_bool = 1; // 0x2af0 MovB
	return 0; // 0x2af1 Return
	
Label_10994:
	var_5281_bool = 0; // 0x2af2 MovB
	return 0; // 0x2af3 Return
}


func_4842(var_2406_int, var_2407_int, var_2408_object, var_2409_object, var_2410_object, var_2411_object)
{
	var_2412_int = 0; // 0x12eb PushI
	var_2413_bool = var_2407_int == var_2412_int; // 0x12ec Eq
	if(var_2413_bool == 0) goto Label_4882; // 0x12ed JumpB
	var_2414_int = 0; var_2415_bool = 0; // 0x12ee PushV
	var_2414_int = 2; // 0x12ef MovI
	var_2415_bool = 1; // 0x12f0 MovB
	func_796(var_2414_int, var_2415_bool); // 0x12f1 NEW_2
	var_2416_int = 0; var_2417_bool = 0; var_2418_int = 0; // 0x12f3 PushV
	var_2416_int = 2; // 0x12f4 MovI
	var_2417_bool = 1; // 0x12f5 MovB
	var_2418_int = 1; // 0x12f6 MovI
	func_813(var_2416_int, var_2417_bool, var_2418_int); // 0x12f7 NEW_2
	var_2419_int = 0; var_2420_int = 0; var_2421_object = Obj(); var_2422_object = Obj(); var_2423_object = Obj(); // 0x12f9 PushV
	var_2419_int = 2; // 0x12fa MovI
	var_2420_int = var_2406_int; // 0x12fb Mov
	var_2421_object = var_2408_object; // 0x12fc Mov
	var_2422_object = var_2409_object; // 0x12fd Mov
	var_2423_object = var_2410_object; // 0x12fe Mov
	func_641(var_2419_int, var_2420_int, var_2421_object, var_2422_object, var_2423_object); // 0x12ff NEW_2
	var_2424_object = Obj(); var_2425_int = 0; // 0x1301 PushV
	var_2424_object = var_2411_object; // 0x1302 Mov
	var_2425_int = 1; // 0x1303 MovI
	func_305(var_2425_int); // 0x1304 NEW_2
	var_2426_int = 0; var_2427_bool = 0; var_2428_int = 0; // 0x1306 PushV
	var_2426_int = 2; // 0x1307 MovI
	var_2427_bool = 1; // 0x1308 MovB
	var_2428_int = 5; // 0x1309 MovI
	func_870(var_2426_int, var_2427_bool, var_2428_int); // 0x130a NEW_2
	var_2429_int = 0; var_2430_bool = 0; var_2431_int = 0; // 0x130c PushV
	var_2429_int = 2; // 0x130d MovI
	var_2430_bool = 0; // 0x130e MovB
	var_2431_int = 5; // 0x130f MovI
	func_932(var_2429_int, var_2430_bool, var_2431_int); // 0x1310 NEW_2
	
Label_4882:
	var_2432_int = 0; var_2433_bool = 0; // 0x1312 PushV
	var_2432_int = 2; // 0x1313 MovI
	var_2433_bool = 0; // 0x1314 MovB
	func_779(var_2432_int, var_2433_bool); // 0x1315 NEW_2
	var_2434_int = 0; var_2435_int = 0; var_2436_int = 0; // 0x1317 PushV
	var_2434_int = 2; // 0x1318 MovI
	var_2435_int = var_2406_int; // 0x1319 Mov
	var_2436_int = var_2407_int; // 0x131a Mov
	func_2944(var_2434_int, var_2435_int, var_2436_int); // 0x131b NEW_2
	return 0; // 0x131d Return
}


func_10996(var_5297_bool)
{
	var_5300_int = 0; var_5301_string = ""; // 0x2af5 PushV
	var_5301_string = "k7AglajaVisit"; // 0x2af6 MovS
	func_132(var_5300_int, var_5301_string); // 0x2af7 NEW_2
	var_5302_int = 0; // 0x2af9 PushI
	var_5303_bool = var_5300_int != var_5302_int; // 0x2afa Neq
	if(var_5303_bool == 0) goto Label_11006; // 0x2afb JumpB
	var_5297_bool = 1; // 0x2afc MovB
	return 0; // 0x2afd Return
	
Label_11006:
	var_5297_bool = 0; // 0x2afe MovB
	return 0; // 0x2aff Return
}


func_11008(var_5313_bool)
{
	var_5316_int = 0; var_5317_string = ""; // 0x2b01 PushV
	var_5317_string = "k8AglajaVisit"; // 0x2b02 MovS
	func_132(var_5316_int, var_5317_string); // 0x2b03 NEW_2
	var_5318_int = 0; // 0x2b05 PushI
	var_5319_bool = var_5316_int != var_5318_int; // 0x2b06 Neq
	if(var_5319_bool == 0) goto Label_11018; // 0x2b07 JumpB
	var_5313_bool = 1; // 0x2b08 MovB
	return 0; // 0x2b09 Return
	
Label_11018:
	var_5313_bool = 0; // 0x2b0a MovB
	return 0; // 0x2b0b Return
}


func_3847(var_3563_int, var_3564_int, var_3565_int)
{
	var_3566_int = 0; var_3567_int = 0; var_3568_int = 0; var_3569_int = 0; var_3570_int = 0; var_3571_int = 0; var_3572_int = 0; var_3573_int = 0; // 0xf07 PushV
	var_3574_bool = 0; // 0xf08 PushV
	var_3574_bool = 0; // 0xf09 MovB
	var_3575_int = 8; // 0xf0a PushI
	var_3576_bool = var_3565_int > var_3575_int; // 0xf0b GT
	if(var_3576_bool == 0) goto Label_3857; // 0xf0c JumpB
	var_3577_int = 21; // 0xf0d PushI
	var_3578_bool = var_3565_int < var_3577_int; // 0xf0e LT
	if(var_3578_bool == 0) goto Label_3857; // 0xf0f JumpB
	var_3574_bool = 1; // 0xf10 MovB
	
Label_3857:
	if(var_3574_bool == 0) goto Label_3934; // 0xf11 JumpB
	var_3579_int = 0; var_3580_string = ""; var_3581_string = ""; var_3582_int = 0; // 0xf12 PushV
	var_3579_int = var_3563_int; // 0xf13 Mov
	var_3580_string = "pers_rat"; // 0xf14 MovS
	var_3581_string = "rat.xml"; // 0xf15 MovS
	var_3582_int = 2; // 0xf16 MovI
	func_503(var_3579_int, var_3580_string, var_3581_string, var_3582_int); // 0xf17 NEW_2
	var_3583_int = 0; var_3584_string = ""; var_3585_string = ""; var_3586_int = 0; // 0xf19 PushV
	var_3583_int = var_3563_int; // 0xf1a Mov
	var_3584_string = "pers_alkash"; // 0xf1b MovS
	var_3585_string = "alkash.xml"; // 0xf1c MovS
	var_3586_int = 2; // 0xf1d MovI
	func_503(var_3583_int, var_3584_string, var_3585_string, var_3586_int); // 0xf1e NEW_2
	var_3587_int = 0; var_3588_string = ""; var_3589_string = ""; var_3590_int = 0; // 0xf20 PushV
	var_3587_int = var_3563_int; // 0xf21 Mov
	var_3588_string = "pers_dohodyaga"; // 0xf22 MovS
	var_3589_string = "dohodyaga.xml"; // 0xf23 MovS
	var_3590_int = 1; // 0xf24 MovI
	func_503(var_3587_int, var_3588_string, var_3589_string, var_3590_int); // 0xf25 NEW_2
	var_3591_int = 2; // 0xf27 PushI
	var_3592_float = 0; var_3593_int = 0; // 0xf28 PushV
	var_3593_int = var_3564_int; // 0xf29 Mov
	func_1165(var_3592_float, var_3593_int); // 0xf2a NEW_2
	var_3570_int = var_3591_int * var_3592_float; // 0xf2c Mult2
	var_3594_int = var_3570_int; // 0xf2d Push
	if(var_3594_int == 0) goto Label_3894; // 0xf2e JumpB
	var_3595_int = 0; var_3596_string = ""; var_3597_string = ""; var_3598_int = 0; // 0xf2f PushV
	var_3595_int = var_3563_int; // 0xf30 Mov
	var_3596_string = "pers_grabitel"; // 0xf31 MovS
	var_3597_string = "grabitel.xml"; // 0xf32 MovS
	var_3598_int = var_3570_int; // 0xf33 Mov
	func_503(var_3595_int, var_3596_string, var_3597_string, var_3598_int); // 0xf34 NEW_2
	
Label_3894:
	var_3599_int = 1; // 0xf36 PushI
	var_3600_int = var_3564_int + var_3599_int; // 0xf37 Add
	var_3601_int = 2; // 0xf38 PushI
	var_3602_bool = var_3600_int >= var_3601_int; // 0xf39 GE
	if(var_3602_bool == 0) goto Label_3918; // 0xf3a JumpB
	var_3603_int = 0; var_3604_string = ""; var_3605_string = ""; var_3606_int = 0; // 0xf3b PushV
	var_3603_int = var_3563_int; // 0xf3c Mov
	var_3604_string = "pers_patrool"; // 0xf3d MovS
	var_3605_string = "patrol.xml"; // 0xf3e MovS
	var_3606_int = 2; // 0xf3f MovI
	func_503(var_3603_int, var_3604_string, var_3605_string, var_3606_int); // 0xf40 NEW_2
	var_3607_bool = 0; var_3608_int = 0; // 0xf42 PushV
	var_3608_int = var_3564_int; // 0xf43 Mov
	func_1372(var_3607_bool, var_3608_int); // 0xf44 NEW_2
	if(var_3607_bool == 0) goto Label_3918; // 0xf46 JumpB
	var_3609_int = 0; var_3610_string = ""; var_3611_string = ""; var_3612_int = 0; // 0xf47 PushV
	var_3609_int = var_3563_int; // 0xf48 Mov
	var_3610_string = "pers_soldat_hand"; // 0xf49 MovS
	var_3611_string = "soldier_patrol.xml"; // 0xf4a MovS
	var_3612_int = 1; // 0xf4b MovI
	func_503(var_3609_int, var_3610_string, var_3611_string, var_3612_int); // 0xf4c NEW_2
	
Label_3918:
	var_3613_int = 1; // 0xf4e PushI
	var_3614_float = 0; var_3615_int = 0; // 0xf4f PushV
	var_3615_int = var_3564_int; // 0xf50 Mov
	func_1255(var_3614_float, var_3615_int); // 0xf51 NEW_2
	var_3571_int = var_3613_int * var_3614_float; // 0xf53 Mult2
	var_3616_int = var_3571_int; // 0xf54 Push
	if(var_3616_int == 0) goto Label_3933; // 0xf55 JumpB
	var_3617_int = 0; var_3618_string = ""; var_3619_string = ""; var_3620_int = 0; // 0xf56 PushV
	var_3617_int = var_3563_int; // 0xf57 Mov
	var_3618_string = "pers_bomber"; // 0xf58 MovS
	var_3619_string = "bomber.xml"; // 0xf59 MovS
	var_3620_int = var_3571_int; // 0xf5a Mov
	func_503(var_3617_int, var_3618_string, var_3619_string, var_3620_int); // 0xf5b NEW_2
	
Label_3933:
	goto Label_4009; // 0xf5d Jump
	
Label_4009:
	var_3621_bool = 0; var_3622_int = 0; var_3623_int = 0; // 0xfa9 PushV
	var_3622_int = var_3564_int; // 0xfaa Mov
	var_3623_int = var_3565_int; // 0xfab Mov
	func_1345(var_3621_bool, var_3622_int, var_3623_int); // 0xfac NEW_2
	if(var_3621_bool == 0) goto Label_4022; // 0xfae JumpB
	var_3624_int = 0; var_3625_string = ""; var_3626_string = ""; var_3627_int = 0; // 0xfaf PushV
	var_3624_int = var_3563_int; // 0xfb0 Mov
	var_3625_string = "pers_soldat"; // 0xfb1 MovS
	var_3626_string = "soldier_marauder.xml"; // 0xfb2 MovS
	var_3627_int = 2; // 0xfb3 MovI
	func_503(var_3624_int, var_3625_string, var_3626_string, var_3627_int); // 0xfb4 NEW_2
	
Label_4022:
	var_3628_bool = 0; var_3629_int = 0; // 0xfb6 PushV
	var_3629_int = var_3564_int; // 0xfb7 Mov
	func_1372(var_3628_bool, var_3629_int); // 0xfb8 NEW_2
	if(var_3628_bool == 0) goto Label_4034; // 0xfba JumpB
	var_3630_int = 0; var_3631_string = ""; var_3632_string = ""; var_3633_int = 0; // 0xfbb PushV
	var_3630_int = var_3563_int; // 0xfbc Mov
	var_3631_string = "pers_sanitar"; // 0xfbd MovS
	var_3632_string = "sanitar.xml"; // 0xfbe MovS
	var_3633_int = 1; // 0xfbf MovI
	func_503(var_3630_int, var_3631_string, var_3632_string, var_3633_int); // 0xfc0 NEW_2
	
Label_4034:
	return 8; // 0xfc2 Return
	
Label_3934:
	var_3634_int = 0; var_3635_string = ""; var_3636_string = ""; var_3637_int = 0; // 0xf5e PushV
	var_3634_int = var_3563_int; // 0xf5f Mov
	var_3635_string = "pers_rat"; // 0xf60 MovS
	var_3636_string = "rat.xml"; // 0xf61 MovS
	var_3637_int = 4; // 0xf62 MovI
	func_503(var_3634_int, var_3635_string, var_3636_string, var_3637_int); // 0xf63 NEW_2
	var_3638_int = 0; var_3639_string = ""; var_3640_string = ""; var_3641_int = 0; // 0xf65 PushV
	var_3638_int = var_3563_int; // 0xf66 Mov
	var_3639_string = "pers_alkash"; // 0xf67 MovS
	var_3640_string = "alkash.xml"; // 0xf68 MovS
	var_3641_int = 1; // 0xf69 MovI
	func_503(var_3638_int, var_3639_string, var_3640_string, var_3641_int); // 0xf6a NEW_2
	var_3642_int = 0; var_3643_string = ""; var_3644_string = ""; var_3645_int = 0; // 0xf6c PushV
	var_3642_int = var_3563_int; // 0xf6d Mov
	var_3643_string = "pers_dohodyaga"; // 0xf6e MovS
	var_3644_string = "dohodyaga.xml"; // 0xf6f MovS
	var_3645_int = 1; // 0xf70 MovI
	func_503(var_3642_int, var_3643_string, var_3644_string, var_3645_int); // 0xf71 NEW_2
	var_3646_int = 3; // 0xf73 PushI
	var_3647_float = 0; var_3648_int = 0; // 0xf74 PushV
	var_3648_int = var_3564_int; // 0xf75 Mov
	func_1165(var_3647_float, var_3648_int); // 0xf76 NEW_2
	var_3572_int = var_3646_int * var_3647_float; // 0xf78 Mult2
	var_3649_int = var_3572_int; // 0xf79 Push
	if(var_3649_int == 0) goto Label_3970; // 0xf7a JumpB
	var_3650_int = 0; var_3651_string = ""; var_3652_string = ""; var_3653_int = 0; // 0xf7b PushV
	var_3650_int = var_3563_int; // 0xf7c Mov
	var_3651_string = "pers_grabitel"; // 0xf7d MovS
	var_3652_string = "grabitel.xml"; // 0xf7e MovS
	var_3653_int = var_3572_int; // 0xf7f Mov
	func_503(var_3650_int, var_3651_string, var_3652_string, var_3653_int); // 0xf80 NEW_2
	
Label_3970:
	var_3654_int = 1; // 0xf82 PushI
	var_3655_int = var_3564_int + var_3654_int; // 0xf83 Add
	var_3656_int = 2; // 0xf84 PushI
	var_3657_bool = var_3655_int >= var_3656_int; // 0xf85 GE
	if(var_3657_bool == 0) goto Label_3994; // 0xf86 JumpB
	var_3658_int = 0; var_3659_string = ""; var_3660_string = ""; var_3661_int = 0; // 0xf87 PushV
	var_3658_int = var_3563_int; // 0xf88 Mov
	var_3659_string = "pers_patrool"; // 0xf89 MovS
	var_3660_string = "patrol.xml"; // 0xf8a MovS
	var_3661_int = 1; // 0xf8b MovI
	func_503(var_3658_int, var_3659_string, var_3660_string, var_3661_int); // 0xf8c NEW_2
	var_3662_bool = 0; var_3663_int = 0; // 0xf8e PushV
	var_3663_int = var_3564_int; // 0xf8f Mov
	func_1372(var_3662_bool, var_3663_int); // 0xf90 NEW_2
	if(var_3662_bool == 0) goto Label_3994; // 0xf92 JumpB
	var_3664_int = 0; var_3665_string = ""; var_3666_string = ""; var_3667_int = 0; // 0xf93 PushV
	var_3664_int = var_3563_int; // 0xf94 Mov
	var_3665_string = "pers_soldat_hand"; // 0xf95 MovS
	var_3666_string = "soldier_patrol.xml"; // 0xf96 MovS
	var_3667_int = 1; // 0xf97 MovI
	func_503(var_3664_int, var_3665_string, var_3666_string, var_3667_int); // 0xf98 NEW_2
	
Label_3994:
	var_3668_int = 1; // 0xf9a PushI
	var_3669_float = 0; var_3670_int = 0; // 0xf9b PushV
	var_3670_int = var_3564_int; // 0xf9c Mov
	func_1255(var_3669_float, var_3670_int); // 0xf9d NEW_2
	var_3573_int = var_3668_int * var_3669_float; // 0xf9f Mult2
	var_3671_int = var_3573_int; // 0xfa0 Push
	if(var_3671_int == 0) goto Label_4009; // 0xfa1 JumpB
	var_3672_int = 0; var_3673_string = ""; var_3674_string = ""; var_3675_int = 0; // 0xfa2 PushV
	var_3672_int = var_3563_int; // 0xfa3 Mov
	var_3673_string = "pers_bomber"; // 0xfa4 MovS
	var_3674_string = "bomber.xml"; // 0xfa5 MovS
	var_3675_int = var_3573_int; // 0xfa6 Mov
	func_503(var_3672_int, var_3673_string, var_3674_string, var_3675_int); // 0xfa7 NEW_2
}


func_779(var_736_int, var_737_bool)
{
	var_738_object = Obj(); var_739_int = 0; var_740_object = Obj(); var_741_int = 0; // 0x30b PushV
	GetMainOutdoorScene(var_740_object); // 0x30c Func
	var_742_bool = var_740_object == 0; // 0x30e NullEq
	if(var_742_bool == 0) goto Label_788; // 0x30f JumpB
	var_743_string = "City manager: Can't find main outdoor scene"; // 0x310 PushS
	Trace(var_743_string); // 0x311 Func
	return 4; // 0x313 Return
	
Label_788:
	var_744_int = 1; // 0x314 PushI
	var_741_int = var_736_int + var_744_int; // 0x315 Add2
	var_745_int = 100; // 0x316 PushI
	var_746_bool = 1; // 0x317 PushB
	EnableSubsets(var_741_int, var_745_int, var_737_bool, var_746_bool); // 0x318 ObjFunc
	return 4; // 0x31a Return
}


func_11020(var_5329_bool)
{
	var_5332_int = 0; var_5333_string = ""; // 0x2b0d PushV
	var_5333_string = "k9AglajaVisit"; // 0x2b0e MovS
	func_132(var_5332_int, var_5333_string); // 0x2b0f NEW_2
	var_5334_int = 0; // 0x2b11 PushI
	var_5335_bool = var_5332_int != var_5334_int; // 0x2b12 Neq
	if(var_5335_bool == 0) goto Label_11030; // 0x2b13 JumpB
	var_5329_bool = 1; // 0x2b14 MovB
	return 0; // 0x2b15 Return
	
Label_11030:
	var_5329_bool = 0; // 0x2b16 MovB
	return 0; // 0x2b17 Return
}


func_5903(var_1570_int, var_1571_int, var_1572_object, var_1573_object, var_1574_object, var_1575_object)
{
	var_1576_int = 0; // 0x1710 PushI
	var_1577_bool = var_1571_int == var_1576_int; // 0x1711 Eq
	if(var_1577_bool == 0) goto Label_5943; // 0x1712 JumpB
	var_1578_int = 0; var_1579_bool = 0; // 0x1713 PushV
	var_1578_int = 8; // 0x1714 MovI
	var_1579_bool = 0; // 0x1715 MovB
	func_796(var_1578_int, var_1579_bool); // 0x1716 NEW_2
	var_1580_int = 0; var_1581_bool = 0; var_1582_int = 0; // 0x1718 PushV
	var_1580_int = 8; // 0x1719 MovI
	var_1581_bool = 0; // 0x171a MovB
	var_1582_int = 1; // 0x171b MovI
	func_813(var_1580_int, var_1581_bool, var_1582_int); // 0x171c NEW_2
	var_1583_int = 0; var_1584_int = 0; var_1585_object = Obj(); var_1586_object = Obj(); var_1587_object = Obj(); // 0x171e PushV
	var_1583_int = 8; // 0x171f MovI
	var_1584_int = var_1570_int; // 0x1720 Mov
	var_1585_object = var_1572_object; // 0x1721 Mov
	var_1586_object = var_1573_object; // 0x1722 Mov
	var_1587_object = var_1574_object; // 0x1723 Mov
	func_622(var_1584_int, var_1585_object, var_1586_object, var_1587_object); // 0x1724 NEW_2
	var_1588_object = Obj(); var_1589_int = 0; // 0x1726 PushV
	var_1588_object = var_1575_object; // 0x1727 Mov
	var_1589_int = 0; // 0x1728 MovI
	func_305(var_1589_int); // 0x1729 NEW_2
	var_1590_int = 0; var_1591_bool = 0; var_1592_int = 0; // 0x172b PushV
	var_1590_int = 8; // 0x172c MovI
	var_1591_bool = 0; // 0x172d MovB
	var_1592_int = 4; // 0x172e MovI
	func_870(var_1590_int, var_1591_bool, var_1592_int); // 0x172f NEW_2
	var_1593_int = 0; var_1594_bool = 0; var_1595_int = 0; // 0x1731 PushV
	var_1593_int = 8; // 0x1732 MovI
	var_1594_bool = 0; // 0x1733 MovB
	var_1595_int = 4; // 0x1734 MovI
	func_932(var_1593_int, var_1594_bool, var_1595_int); // 0x1735 NEW_2
	
Label_5943:
	var_1596_int = 0; var_1597_int = 0; // 0x1737 PushV
	var_1596_int = 8; // 0x1738 MovI
	var_1597_int = var_1571_int; // 0x1739 Mov
	func_983(var_1596_int, var_1597_int); // 0x173a NEW_2
	var_1598_int = 0; var_1599_int = 0; var_1600_int = 0; // 0x173c PushV
	var_1598_int = 8; // 0x173d MovI
	var_1599_int = var_1570_int; // 0x173e Mov
	var_1600_int = var_1571_int; // 0x173f Mov
	func_1624(var_1598_int, var_1599_int, var_1600_int); // 0x1740 NEW_2
	return 0; // 0x1742 Return
}


func_6927(var_1735_int, var_1736_int, var_1737_object, var_1738_object, var_1739_object, var_1740_object)
{
	var_1741_int = 0; // 0x1b10 PushI
	var_1742_bool = var_1736_int == var_1741_int; // 0x1b11 Eq
	if(var_1742_bool == 0) goto Label_6967; // 0x1b12 JumpB
	var_1743_int = 0; var_1744_bool = 0; // 0x1b13 PushV
	var_1743_int = 13; // 0x1b14 MovI
	var_1744_bool = 0; // 0x1b15 MovB
	func_796(var_1743_int, var_1744_bool); // 0x1b16 NEW_2
	var_1745_int = 0; var_1746_bool = 0; var_1747_int = 0; // 0x1b18 PushV
	var_1745_int = 13; // 0x1b19 MovI
	var_1746_bool = 0; // 0x1b1a MovB
	var_1747_int = 1; // 0x1b1b MovI
	func_813(var_1745_int, var_1746_bool, var_1747_int); // 0x1b1c NEW_2
	var_1748_int = 0; var_1749_int = 0; var_1750_object = Obj(); var_1751_object = Obj(); var_1752_object = Obj(); // 0x1b1e PushV
	var_1748_int = 13; // 0x1b1f MovI
	var_1749_int = var_1735_int; // 0x1b20 Mov
	var_1750_object = var_1737_object; // 0x1b21 Mov
	var_1751_object = var_1738_object; // 0x1b22 Mov
	var_1752_object = var_1739_object; // 0x1b23 Mov
	func_622(var_1749_int, var_1750_object, var_1751_object, var_1752_object); // 0x1b24 NEW_2
	var_1753_object = Obj(); var_1754_int = 0; // 0x1b26 PushV
	var_1753_object = var_1740_object; // 0x1b27 Mov
	var_1754_int = 0; // 0x1b28 MovI
	func_305(var_1754_int); // 0x1b29 NEW_2
	var_1755_int = 0; var_1756_bool = 0; var_1757_int = 0; // 0x1b2b PushV
	var_1755_int = 13; // 0x1b2c MovI
	var_1756_bool = 0; // 0x1b2d MovB
	var_1757_int = 4; // 0x1b2e MovI
	func_870(var_1755_int, var_1756_bool, var_1757_int); // 0x1b2f NEW_2
	var_1758_int = 0; var_1759_bool = 0; var_1760_int = 0; // 0x1b31 PushV
	var_1758_int = 13; // 0x1b32 MovI
	var_1759_bool = 0; // 0x1b33 MovB
	var_1760_int = 4; // 0x1b34 MovI
	func_932(var_1758_int, var_1759_bool, var_1760_int); // 0x1b35 NEW_2
	
Label_6967:
	var_1761_int = 0; var_1762_int = 0; // 0x1b37 PushV
	var_1761_int = 13; // 0x1b38 MovI
	var_1762_int = var_1736_int; // 0x1b39 Mov
	func_1050(var_1761_int, var_1762_int); // 0x1b3a NEW_2
	var_1763_int = 0; var_1764_int = 0; var_1765_int = 0; // 0x1b3c PushV
	var_1763_int = 13; // 0x1b3d MovI
	var_1764_int = var_1735_int; // 0x1b3e Mov
	var_1765_int = var_1736_int; // 0x1b3f Mov
	func_1624(var_1763_int, var_1764_int, var_1765_int); // 0x1b40 NEW_2
	return 0; // 0x1b42 Return
}


func_11032(var_5160_bool)
{
	var_5163_int = 0; var_5164_string = ""; // 0x2b19 PushV
	var_5164_string = "k11AglajaVisit"; // 0x2b1a MovS
	func_132(var_5163_int, var_5164_string); // 0x2b1b NEW_2
	var_5165_int = 0; // 0x2b1d PushI
	var_5166_bool = var_5163_int != var_5165_int; // 0x2b1e Neq
	if(var_5166_bool == 0) goto Label_11042; // 0x2b1f JumpB
	var_5160_bool = 1; // 0x2b20 MovB
	return 0; // 0x2b21 Return
	
Label_11042:
	var_5160_bool = 0; // 0x2b22 MovB
	return 0; // 0x2b23 Return
}


func_10010()
{
	var_5006_object = Obj(); var_5007_object = Obj(); var_5008_object = Obj(); var_5009_object = Obj(); // 0x271a PushV
	var_5010_object = Obj(); // 0x271b PushV
	func_11161(var_5010_object); // 0x271c NEW_2
	var_5008_object = var_5010_object; // 0x271d Mov
	var_5011_string = "k2q03Arfist"; // 0x271f PushS
	FindMark(var_5009_object, var_5011_string); // 0x2720 ObjFunc
	var_5012_object = var_5009_object; // 0x2722 Push
	if(var_5012_object == 0) goto Label_10022; // 0x2723 JumpB
	Remove(); // 0x2724 ObjFunc
	
Label_10022:
	var_5013_string = "k2q01AlexandrGotoMladVlad"; // 0x2726 PushS
	FindMark(var_5009_object, var_5013_string); // 0x2727 ObjFunc
	var_5014_object = var_5009_object; // 0x2729 Push
	if(var_5014_object == 0) goto Label_10029; // 0x272a JumpB
	Remove(); // 0x272b ObjFunc
	
Label_10029:
	var_5015_string = "k2q01BigVladGotoOspina"; // 0x272d PushS
	FindMark(var_5009_object, var_5015_string); // 0x272e ObjFunc
	var_5016_object = var_5009_object; // 0x2730 Push
	if(var_5016_object == 0) goto Label_10036; // 0x2731 JumpB
	Remove(); // 0x2732 ObjFunc
	
Label_10036:
	var_5017_string = "k2q01MladVladGotoOspina"; // 0x2734 PushS
	FindMark(var_5009_object, var_5017_string); // 0x2735 ObjFunc
	var_5018_object = var_5009_object; // 0x2737 Push
	if(var_5018_object == 0) goto Label_10043; // 0x2738 JumpB
	Remove(); // 0x2739 ObjFunc
	
Label_10043:
	var_5019_string = "k2q03Arfist"; // 0x273b PushS
	FindMark(var_5009_object, var_5019_string); // 0x273c ObjFunc
	var_5020_object = var_5009_object; // 0x273e Push
	if(var_5020_object == 0) goto Label_10050; // 0x273f JumpB
	Remove(); // 0x2740 ObjFunc
	
Label_10050:
	var_5021_string = "k2q04AnnaGotoGatherer1"; // 0x2742 PushS
	FindMark(var_5009_object, var_5021_string); // 0x2743 ObjFunc
	var_5022_object = var_5009_object; // 0x2745 Push
	if(var_5022_object == 0) goto Label_10057; // 0x2746 JumpB
	Remove(); // 0x2747 ObjFunc
	
Label_10057:
	var_5023_string = "k2q04AnnaGotoGatherer2"; // 0x2749 PushS
	FindMark(var_5009_object, var_5023_string); // 0x274a ObjFunc
	var_5024_object = var_5009_object; // 0x274c Push
	if(var_5024_object == 0) goto Label_10064; // 0x274d JumpB
	Remove(); // 0x274e ObjFunc
	
Label_10064:
	var_5025_string = "k2q04AnnaGotoGatherer3"; // 0x2750 PushS
	FindMark(var_5009_object, var_5025_string); // 0x2751 ObjFunc
	var_5026_object = var_5009_object; // 0x2753 Push
	if(var_5026_object == 0) goto Label_10071; // 0x2754 JumpB
	Remove(); // 0x2755 ObjFunc
	
Label_10071:
	var_5027_string = "k2q04MorlokGotoAndrei"; // 0x2757 PushS
	FindMark(var_5009_object, var_5027_string); // 0x2758 ObjFunc
	var_5028_object = var_5009_object; // 0x275a Push
	if(var_5028_object == 0) goto Label_10078; // 0x275b JumpB
	Remove(); // 0x275c ObjFunc
	
Label_10078:
	var_5029_string = "k2q03LaraLetter"; // 0x275e PushS
	FindMark(var_5009_object, var_5029_string); // 0x275f ObjFunc
	var_5030_object = var_5009_object; // 0x2761 Push
	if(var_5030_object == 0) goto Label_10085; // 0x2762 JumpB
	Remove(); // 0x2763 ObjFunc
	
Label_10085:
	var_5031_string = "k2q04MladVladGotoAnna"; // 0x2765 PushS
	FindMark(var_5009_object, var_5031_string); // 0x2766 ObjFunc
	var_5032_object = var_5009_object; // 0x2768 Push
	if(var_5032_object == 0) goto Label_10092; // 0x2769 JumpB
	Remove(); // 0x276a ObjFunc
	
Label_10092:
	var_5033_string = "k2q02KaterinaGotoLara"; // 0x276c PushS
	FindMark(var_5009_object, var_5033_string); // 0x276d ObjFunc
	var_5034_object = var_5009_object; // 0x276f Push
	if(var_5034_object == 0) goto Label_10099; // 0x2770 JumpB
	Remove(); // 0x2771 ObjFunc
	
Label_10099:
	var_5035_bool = 0; var_5036_int = 0; // 0x2773 PushV
	var_5036_int = 461; // 0x2774 MovI
	func_11136(var_5035_bool, var_5036_int); // 0x2775 NEW_2
	var_5037_bool = 0; var_5038_int = 0; // 0x2777 PushV
	var_5038_int = 470; // 0x2778 MovI
	func_11136(var_5037_bool, var_5038_int); // 0x2779 NEW_2
	var_5039_bool = 0; var_5040_int = 0; // 0x277b PushV
	var_5040_int = 476; // 0x277c MovI
	func_11136(var_5039_bool, var_5040_int); // 0x277d NEW_2
	var_5041_bool = 0; var_5042_int = 0; // 0x277f PushV
	var_5042_int = 507; // 0x2780 MovI
	func_11136(var_5041_bool, var_5042_int); // 0x2781 NEW_2
	return 4; // 0x2783 Return
}


func_796(var_451_int, var_452_bool)
{
	var_453_object = Obj(); var_454_int = 0; var_455_object = Obj(); var_456_int = 0; // 0x31c PushV
	GetMainOutdoorScene(var_455_object); // 0x31d Func
	var_457_bool = var_455_object == 0; // 0x31f NullEq
	if(var_457_bool == 0) goto Label_805; // 0x320 JumpB
	var_458_string = "City manager: Can't find main outdoor scene"; // 0x321 PushS
	Trace(var_458_string); // 0x322 Func
	return 4; // 0x324 Return
	
Label_805:
	var_459_int = 1; // 0x325 PushI
	var_456_int = var_451_int + var_459_int; // 0x326 Add2
	var_460_int = 200; // 0x327 PushI
	var_461_bool = 0; // 0x328 PushB
	EnableSubsets(var_456_int, var_460_int, var_452_bool, var_461_bool); // 0x329 ObjFunc
	return 4; // 0x32b Return
}


func_4894(var_3535_int, var_3536_int, var_3537_object, var_3538_object, var_3539_object, var_3540_object)
{
	var_3541_int = 0; // 0x131f PushI
	var_3542_bool = var_3536_int == var_3541_int; // 0x1320 Eq
	if(var_3542_bool == 0) goto Label_4934; // 0x1321 JumpB
	var_3543_int = 0; var_3544_bool = 0; // 0x1322 PushV
	var_3543_int = 2; // 0x1323 MovI
	var_3544_bool = 0; // 0x1324 MovB
	func_796(var_3543_int, var_3544_bool); // 0x1325 NEW_2
	var_3545_int = 0; var_3546_bool = 0; var_3547_int = 0; // 0x1327 PushV
	var_3545_int = 2; // 0x1328 MovI
	var_3546_bool = 0; // 0x1329 MovB
	var_3547_int = 1; // 0x132a MovI
	func_813(var_3545_int, var_3546_bool, var_3547_int); // 0x132b NEW_2
	var_3548_int = 0; var_3549_int = 0; var_3550_object = Obj(); var_3551_object = Obj(); var_3552_object = Obj(); // 0x132d PushV
	var_3548_int = 2; // 0x132e MovI
	var_3549_int = var_3535_int; // 0x132f Mov
	var_3550_object = var_3537_object; // 0x1330 Mov
	var_3551_object = var_3538_object; // 0x1331 Mov
	var_3552_object = var_3539_object; // 0x1332 Mov
	func_720(var_3548_int, var_3549_int, var_3550_object, var_3551_object, var_3552_object); // 0x1333 NEW_2
	var_3553_object = Obj(); var_3554_int = 0; // 0x1335 PushV
	var_3553_object = var_3540_object; // 0x1336 Mov
	var_3554_int = 2; // 0x1337 MovI
	func_305(var_3554_int); // 0x1338 NEW_2
	var_3555_int = 0; var_3556_bool = 0; var_3557_int = 0; // 0x133a PushV
	var_3555_int = 2; // 0x133b MovI
	var_3556_bool = 0; // 0x133c MovB
	var_3557_int = 5; // 0x133d MovI
	func_870(var_3555_int, var_3556_bool, var_3557_int); // 0x133e NEW_2
	var_3558_int = 0; var_3559_bool = 0; var_3560_int = 0; // 0x1340 PushV
	var_3558_int = 2; // 0x1341 MovI
	var_3559_bool = 1; // 0x1342 MovB
	var_3560_int = 5; // 0x1343 MovI
	func_932(var_3558_int, var_3559_bool, var_3560_int); // 0x1344 NEW_2
	
Label_4934:
	var_3561_int = 0; var_3562_bool = 0; // 0x1346 PushV
	var_3561_int = 2; // 0x1347 MovI
	var_3562_bool = 0; // 0x1348 MovB
	func_779(var_3561_int, var_3562_bool); // 0x1349 NEW_2
	var_3563_int = 0; var_3564_int = 0; var_3565_int = 0; // 0x134b PushV
	var_3563_int = 2; // 0x134c MovI
	var_3564_int = var_3535_int; // 0x134d Mov
	var_3565_int = var_3536_int; // 0x134e Mov
	func_3847(var_3563_int, var_3564_int, var_3565_int); // 0x134f NEW_2
	return 0; // 0x1351 Return
}


func_11044(var_5176_bool)
{
	var_5179_int = 0; var_5180_string = ""; // 0x2b25 PushV
	var_5180_string = "k12BurahVisit"; // 0x2b26 MovS
	func_132(var_5179_int, var_5180_string); // 0x2b27 NEW_2
	var_5181_int = 0; // 0x2b29 PushI
	var_5182_bool = var_5179_int != var_5181_int; // 0x2b2a Neq
	if(var_5182_bool == 0) goto Label_11054; // 0x2b2b JumpB
	var_5176_bool = 1; // 0x2b2c MovB
	return 0; // 0x2b2d Return
	
Label_11054:
	var_5176_bool = 0; // 0x2b2e MovB
	return 0; // 0x2b2f Return
}


func_813(var_527_int, var_528_bool, var_529_int)
{
	var_530_string = ""; var_531_object = Obj(); var_532_int = 0; var_533_string = ""; var_534_object = Obj(); var_535_int = 0; var_536_object = Obj(); var_537_string = ""; var_538_object = Obj(); var_539_int = 0; var_540_string = ""; var_541_object = Obj(); var_542_int = 0; var_543_object = Obj(); // 0x32d PushV
	var_544_string = "street_rags"; // 0x32e PushS
	var_545_int = 1; // 0x32f PushI
	var_546_int = var_527_int + var_545_int; // 0x330 Add
	var_537_string = var_544_string + var_546_int; // 0x331 Add2
	var_547_bool = var_528_bool; // 0x332 Push
	if(var_547_bool == 0) goto Label_853; // 0x333 JumpB
	GetMainOutdoorScene(var_538_object); // 0x334 Func
	var_548_bool = var_538_object == 0; // 0x336 NullEq
	if(var_548_bool == 0) goto Label_828; // 0x337 JumpB
	var_549_string = "City manager: Can't find main outdoor scene"; // 0x338 PushS
	Trace(var_549_string); // 0x339 Func
	return 14; // 0x33b Return
	
Label_828:
	var_539_int = 1; // 0x33c MovI
	
Label_829:
	var_550_bool = var_539_int <= var_529_int; // 0x33d LE
	if(var_550_bool == 0) goto Label_851; // 0x33e JumpB
	var_551_string = "_"; // 0x33f PushS
	var_552_int = var_537_string + var_551_string; // 0x340 Add
	var_540_string = var_552_int + var_539_int; // 0x341 Add2
	FindActor(var_541_object, var_540_string); // 0x342 Func
	var_553_bool = var_541_object == 0; // 0x344 Not
	if(var_553_bool == 0) goto Label_844; // 0x345 JumpB
	var_554_cvector = CVector(0.0, 0.0, 0.0); // 0x346 PushVec
	var_555_cvector = CVector(0.0, 0.0, 1.0); // 0x347 PushVec
	var_556_string = "do_invis.xml"; // 0x348 PushS
	AddActor(var_541_object, var_540_string, var_538_object, var_554_cvector, var_555_cvector, var_556_string); // 0x349 Func
	goto Label_847; // 0x34b Jump
	
Label_847:
	var_541_object = 0; // 0x34f SetNull
	var_557_int = 1; // 0x350 PushI
	var_539_int = var_539_int + var_557_int; // 0x351 Add2
	goto Label_829; // 0x352 Jump
	
Label_844:
	var_558_bool = 0; // 0x34c PushB
	RemoveOnUnload(var_558_bool); // 0x34d ObjFunc
	
Label_851:
	var_538_object = 0; // 0x353 SetNull
	goto Label_869; // 0x354 Jump
	
Label_869:
	return 14; // 0x365 Return
	
Label_853:
	var_542_int = 1; // 0x355 MovI
	
Label_854:
	var_559_bool = var_542_int <= var_529_int; // 0x356 LE
	if(var_559_bool == 0) goto Label_869; // 0x357 JumpB
	var_560_string = "_"; // 0x358 PushS
	var_561_int = var_537_string + var_560_string; // 0x359 Add
	var_562_int = var_561_int + var_542_int; // 0x35a Add
	FindActor(var_543_object, var_562_int); // 0x35b Func
	var_563_object = var_543_object; // 0x35d Push
	if(var_563_object == 0) goto Label_865; // 0x35e JumpB
	RemoveOnUnload(); // 0x35f ObjFunc
	
Label_865:
	var_543_object = 0; // 0x361 SetNull
	var_564_int = 1; // 0x362 PushI
	var_542_int = var_542_int + var_564_int; // 0x363 Add2
	goto Label_854; // 0x364 Jump
}


func_11056(var_4766_bool, var_4767_object)
{
	var_4769_bool = 0; var_4770_object = Obj(); // 0x2b31 PushV
	var_4770_object = var_4767_object; // 0x2b32 Mov
	func_11066(var_4770_object); // 0x2b33 NEW_2
	if(var_4769_bool == 0) goto Label_11064; // 0x2b35 JumpB
	var_4766_bool = 1; // 0x2b36 MovB
	return 0; // 0x2b37 Return
	
Label_11064:
	var_4766_bool = 0; // 0x2b38 MovB
	return 0; // 0x2b39 Return
}


func_11066(var_4769_bool)
{
	var_4769_bool = 0; // 0x2b3b MovB
	return 0; // 0x2b3c Return
}


func_11069()
{
	var_4647_object = Obj(); var_4648_object = Obj(); // 0x2b3d PushV
	var_4649_int = 567; // 0x2b3e PushI
	var_4650_int = 0; // 0x2b3f PushI
	var_4651_int = 530581; // 0x2b40 PushI
	CreateDiaryEntry(var_4648_object, var_4649_int, var_4650_int, var_4651_int); // 0x2b41 Func
	var_4652_bool = 0; var_4653_object = Obj(); var_4654_int = 0; // 0x2b43 PushV
	var_4653_object = var_4648_object; // 0x2b44 Mov
	var_4654_int = -1; // 0x2b45 MovI
	func_11108(var_4652_bool, var_4653_object, var_4654_int); // 0x2b46 NEW_2
	return 2; // 0x2b48 Return
}


func_5955(var_2800_int, var_2801_int, var_2802_object, var_2803_object, var_2804_object, var_2805_object)
{
	var_2806_int = 0; // 0x1744 PushI
	var_2807_bool = var_2801_int == var_2806_int; // 0x1745 Eq
	if(var_2807_bool == 0) goto Label_5995; // 0x1746 JumpB
	var_2808_int = 0; var_2809_bool = 0; // 0x1747 PushV
	var_2808_int = 8; // 0x1748 MovI
	var_2809_bool = 1; // 0x1749 MovB
	func_796(var_2808_int, var_2809_bool); // 0x174a NEW_2
	var_2810_int = 0; var_2811_bool = 0; var_2812_int = 0; // 0x174c PushV
	var_2810_int = 8; // 0x174d MovI
	var_2811_bool = 1; // 0x174e MovB
	var_2812_int = 1; // 0x174f MovI
	func_813(var_2810_int, var_2811_bool, var_2812_int); // 0x1750 NEW_2
	var_2813_int = 0; var_2814_int = 0; var_2815_object = Obj(); var_2816_object = Obj(); var_2817_object = Obj(); // 0x1752 PushV
	var_2813_int = 8; // 0x1753 MovI
	var_2814_int = var_2800_int; // 0x1754 Mov
	var_2815_object = var_2802_object; // 0x1755 Mov
	var_2816_object = var_2803_object; // 0x1756 Mov
	var_2817_object = var_2804_object; // 0x1757 Mov
	func_641(var_2813_int, var_2814_int, var_2815_object, var_2816_object, var_2817_object); // 0x1758 NEW_2
	var_2818_object = Obj(); var_2819_int = 0; // 0x175a PushV
	var_2818_object = var_2805_object; // 0x175b Mov
	var_2819_int = 1; // 0x175c MovI
	func_305(var_2819_int); // 0x175d NEW_2
	var_2820_int = 0; var_2821_bool = 0; var_2822_int = 0; // 0x175f PushV
	var_2820_int = 8; // 0x1760 MovI
	var_2821_bool = 1; // 0x1761 MovB
	var_2822_int = 4; // 0x1762 MovI
	func_870(var_2820_int, var_2821_bool, var_2822_int); // 0x1763 NEW_2
	var_2823_int = 0; var_2824_bool = 0; var_2825_int = 0; // 0x1765 PushV
	var_2823_int = 8; // 0x1766 MovI
	var_2824_bool = 0; // 0x1767 MovB
	var_2825_int = 4; // 0x1768 MovI
	func_932(var_2823_int, var_2824_bool, var_2825_int); // 0x1769 NEW_2
	
Label_5995:
	var_2826_int = 0; var_2827_bool = 0; // 0x176b PushV
	var_2826_int = 8; // 0x176c MovI
	var_2827_bool = 0; // 0x176d MovB
	func_779(var_2826_int, var_2827_bool); // 0x176e NEW_2
	var_2828_int = 0; var_2829_int = 0; var_2830_int = 0; // 0x1770 PushV
	var_2828_int = 8; // 0x1771 MovI
	var_2829_int = var_2800_int; // 0x1772 Mov
	var_2830_int = var_2801_int; // 0x1773 Mov
	func_2764(var_2828_int, var_2829_int, var_2830_int); // 0x1774 NEW_2
	return 0; // 0x1776 Return
}


func_6979(var_2965_int, var_2966_int, var_2967_object, var_2968_object, var_2969_object, var_2970_object)
{
	var_2971_int = 0; // 0x1b44 PushI
	var_2972_bool = var_2966_int == var_2971_int; // 0x1b45 Eq
	if(var_2972_bool == 0) goto Label_7019; // 0x1b46 JumpB
	var_2973_int = 0; var_2974_bool = 0; // 0x1b47 PushV
	var_2973_int = 13; // 0x1b48 MovI
	var_2974_bool = 1; // 0x1b49 MovB
	func_796(var_2973_int, var_2974_bool); // 0x1b4a NEW_2
	var_2975_int = 0; var_2976_bool = 0; var_2977_int = 0; // 0x1b4c PushV
	var_2975_int = 13; // 0x1b4d MovI
	var_2976_bool = 1; // 0x1b4e MovB
	var_2977_int = 1; // 0x1b4f MovI
	func_813(var_2975_int, var_2976_bool, var_2977_int); // 0x1b50 NEW_2
	var_2978_int = 0; var_2979_int = 0; var_2980_object = Obj(); var_2981_object = Obj(); var_2982_object = Obj(); // 0x1b52 PushV
	var_2978_int = 13; // 0x1b53 MovI
	var_2979_int = var_2965_int; // 0x1b54 Mov
	var_2980_object = var_2967_object; // 0x1b55 Mov
	var_2981_object = var_2968_object; // 0x1b56 Mov
	var_2982_object = var_2969_object; // 0x1b57 Mov
	func_641(var_2978_int, var_2979_int, var_2980_object, var_2981_object, var_2982_object); // 0x1b58 NEW_2
	var_2983_object = Obj(); var_2984_int = 0; // 0x1b5a PushV
	var_2983_object = var_2970_object; // 0x1b5b Mov
	var_2984_int = 1; // 0x1b5c MovI
	func_305(var_2984_int); // 0x1b5d NEW_2
	var_2985_int = 0; var_2986_bool = 0; var_2987_int = 0; // 0x1b5f PushV
	var_2985_int = 13; // 0x1b60 MovI
	var_2986_bool = 1; // 0x1b61 MovB
	var_2987_int = 4; // 0x1b62 MovI
	func_870(var_2985_int, var_2986_bool, var_2987_int); // 0x1b63 NEW_2
	var_2988_int = 0; var_2989_bool = 0; var_2990_int = 0; // 0x1b65 PushV
	var_2988_int = 13; // 0x1b66 MovI
	var_2989_bool = 0; // 0x1b67 MovB
	var_2990_int = 4; // 0x1b68 MovI
	func_932(var_2988_int, var_2989_bool, var_2990_int); // 0x1b69 NEW_2
	
Label_7019:
	var_2991_int = 0; var_2992_bool = 0; // 0x1b6b PushV
	var_2991_int = 13; // 0x1b6c MovI
	var_2992_bool = 0; // 0x1b6d MovB
	func_779(var_2991_int, var_2992_bool); // 0x1b6e NEW_2
	var_2993_int = 0; var_2994_int = 0; var_2995_int = 0; // 0x1b70 PushV
	var_2993_int = 13; // 0x1b71 MovI
	var_2994_int = var_2965_int; // 0x1b72 Mov
	var_2995_int = var_2966_int; // 0x1b73 Mov
	func_2764(var_2993_int, var_2994_int, var_2995_int); // 0x1b74 NEW_2
	return 0; // 0x1b76 Return
}


func_11082()
{
	var_5588_object = Obj(); var_5589_object = Obj(); // 0x2b4a PushV
	var_5590_int = 571; // 0x2b4b PushI
	var_5591_int = 0; // 0x2b4c PushI
	var_5592_int = 530585; // 0x2b4d PushI
	CreateDiaryEntry(var_5589_object, var_5590_int, var_5591_int, var_5592_int); // 0x2b4e Func
	var_5593_bool = 0; var_5594_object = Obj(); var_5595_int = 0; // 0x2b50 PushV
	var_5594_object = var_5589_object; // 0x2b51 Mov
	var_5595_int = -1; // 0x2b52 MovI
	func_11108(var_5593_bool, var_5594_object, var_5595_int); // 0x2b53 NEW_2
	return 2; // 0x2b55 Return
}


func_4946()
{
	var_97_string = "house5_02"; // 0x1353 PushS
	add(var_97_string); // 0x1354 ObjFunc
	var_98_string = "dt_house1_union2_03l"; // 0x1356 PushS
	add(var_98_string); // 0x1357 ObjFunc
	var_99_string = "dt_house1_union2_03r"; // 0x1359 PushS
	add(var_99_string); // 0x135a ObjFunc
	var_100_string = "dt_house1_union2_01l"; // 0x135c PushS
	add(var_100_string); // 0x135d ObjFunc
	var_101_string = "dt_house1_union2_01r"; // 0x135f PushS
	add(var_101_string); // 0x1360 ObjFunc
	var_102_string = "house5_unoinl"; // 0x1362 PushS
	add(var_102_string); // 0x1363 ObjFunc
	var_103_string = "house5_unoinr"; // 0x1365 PushS
	add(var_103_string); // 0x1366 ObjFunc
	var_104_string = "dt_house_1_01"; // 0x1368 PushS
	add(var_104_string); // 0x1369 ObjFunc
	var_105_string = "house5_05"; // 0x136b PushS
	add(var_105_string); // 0x136c ObjFunc
	var_106_string = "house5_06"; // 0x136e PushS
	add(var_106_string); // 0x136f ObjFunc
	var_107_string = "dt_house_1_02"; // 0x1371 PushS
	add(var_107_string); // 0x1372 ObjFunc
	var_108_string = "house5_unoin_solid01l"; // 0x1374 PushS
	add(var_108_string); // 0x1375 ObjFunc
	var_109_string = "house5_unoin_solid01r"; // 0x1377 PushS
	add(var_109_string); // 0x1378 ObjFunc
	var_110_string = "house5_03"; // 0x137a PushS
	add(var_110_string); // 0x137b ObjFunc
	var_111_string = "house5_04"; // 0x137d PushS
	add(var_111_string); // 0x137e ObjFunc
	var_112_string = "house1_se_02l"; // 0x1380 PushS
	add(var_112_string); // 0x1381 ObjFunc
	var_113_string = "house1_se_02r"; // 0x1383 PushS
	add(var_113_string); // 0x1384 ObjFunc
	var_114_string = "dt_house3_01_i2"; // 0x1386 PushS
	add(var_114_string); // 0x1387 ObjFunc
	var_115_string = "dt_house3_02_i2"; // 0x1389 PushS
	add(var_115_string); // 0x138a ObjFunc
	var_116_string = "dt_house3_02"; // 0x138c PushS
	add(var_116_string); // 0x138d ObjFunc
	var_117_string = "dt_house3_03_i2"; // 0x138f PushS
	add(var_117_string); // 0x1390 ObjFunc
	var_118_string = "dt_house3_03"; // 0x1392 PushS
	add(var_118_string); // 0x1393 ObjFunc
	var_119_string = "dt_house3_04_i2"; // 0x1395 PushS
	add(var_119_string); // 0x1396 ObjFunc
	var_120_string = "house5_21"; // 0x1398 PushS
	add(var_120_string); // 0x1399 ObjFunc
	return 0; // 0x139b Return
}


func_11095(var_4661_object)
{
	var_4662_object = Obj(); var_4663_object = Obj(); // 0x2b57 PushV
	GetDiaryRoot(var_4663_object); // 0x2b58 Func
	var_4664_bool = var_4663_object == 0; // 0x2b5a Not
	if(var_4664_bool == 0) goto Label_11105; // 0x2b5b JumpB
	var_4665_string = "Can't retrieve diary root"; // 0x2b5c PushS
	Trace(var_4665_string); // 0x2b5d Func
	var_4661_object = 0; // 0x2b5f MovB
	return 2; // 0x2b60 Return
	
Label_11105:
	var_4661_object = var_4663_object; // 0x2b61 Mov
	return 2; // 0x2b62 Return
}


func_11108(var_4652_bool, var_4653_object, var_4654_int)
{
	var_4655_object = Obj(); var_4656_object = Obj(); var_4657_int = 0; var_4658_object = Obj(); var_4659_object = Obj(); var_4660_int = 0; // 0x2b64 PushV
	var_4661_object = Obj(); // 0x2b65 PushV
	func_11095(var_4661_object); // 0x2b66 NEW_2
	var_4658_object = var_4661_object; // 0x2b67 Mov
	Find(var_4654_int, var_4659_object); // 0x2b69 ObjFunc
	var_4666_bool = var_4659_object == 0; // 0x2b6b Not
	if(var_4666_bool == 0) goto Label_11123; // 0x2b6c JumpB
	var_4667_string = "Can't find diary parent with id: "; // 0x2b6d PushS
	var_4668_int = var_4667_string + var_4654_int; // 0x2b6e Add
	Trace(var_4668_int); // 0x2b6f Func
	var_4652_bool = 0; // 0x2b71 MovB
	return 6; // 0x2b72 Return
	
Label_11123:
	AddChild(var_4653_object); // 0x2b73 ObjFunc
	var_4669_int = 7; // 0x2b75 PushI
	SendWorldWndMessage(var_4669_int); // 0x2b76 Func
	GetCategory(var_4660_int); // 0x2b78 ObjFunc
	SetDiarySection(var_4660_int); // 0x2b7a Func
	var_4652_bool = 0; // 0x2b7c MovB
	return 6; // 0x2b7d Return
}


func_870(var_638_int, var_639_bool, var_640_int)
{
	var_641_string = ""; var_642_object = Obj(); var_643_int = 0; var_644_string = ""; var_645_object = Obj(); var_646_int = 0; var_647_string = ""; var_648_object = Obj(); var_649_string = ""; var_650_object = Obj(); var_651_int = 0; var_652_string = ""; var_653_object = Obj(); var_654_int = 0; var_655_string = ""; var_656_object = Obj(); // 0x366 PushV
	var_657_string = "dr_mark"; // 0x367 PushS
	var_658_int = 1; // 0x368 PushI
	var_659_int = var_638_int + var_658_int; // 0x369 Add
	var_649_string = var_657_string + var_659_int; // 0x36a Add2
	var_660_bool = var_639_bool; // 0x36b Push
	if(var_660_bool == 0) goto Label_912; // 0x36c JumpB
	GetMainOutdoorScene(var_650_object); // 0x36d Func
	var_661_bool = var_650_object == 0; // 0x36f NullEq
	if(var_661_bool == 0) goto Label_885; // 0x370 JumpB
	var_662_string = "City manager: Can't find main outdoor scene"; // 0x371 PushS
	Trace(var_662_string); // 0x372 Func
	return 16; // 0x374 Return
	
Label_885:
	var_651_int = 1; // 0x375 MovI
	
Label_886:
	var_663_bool = var_651_int <= var_640_int; // 0x376 LE
	if(var_663_bool == 0) goto Label_910; // 0x377 JumpB
	var_664_string = "_"; // 0x378 PushS
	var_665_int = var_649_string + var_664_string; // 0x379 Add
	var_652_string = var_665_int + var_651_int; // 0x37a Add2
	FindActor(var_653_object, var_652_string); // 0x37b Func
	var_666_bool = var_653_object == 0; // 0x37d Not
	if(var_666_bool == 0) goto Label_901; // 0x37e JumpB
	var_667_cvector = CVector(0.0, 0.0, 0.0); // 0x37f PushVec
	var_668_cvector = CVector(0.0, 0.0, 1.0); // 0x380 PushVec
	var_669_string = "disease_object.xml"; // 0x381 PushS
	AddActor(var_653_object, var_652_string, var_650_object, var_667_cvector, var_668_cvector, var_669_string); // 0x382 Func
	goto Label_906; // 0x384 Jump
	
Label_906:
	var_653_object = 0; // 0x38a SetNull
	var_670_int = 1; // 0x38b PushI
	var_651_int = var_651_int + var_670_int; // 0x38c Add2
	goto Label_886; // 0x38d Jump
	
Label_901:
	var_671_bool = 0; var_672_string = ""; var_673_string = ""; // 0x385 PushV
	var_672_string = var_652_string; // 0x386 Mov
	var_673_string = "restore"; // 0x387 MovS
	func_239(var_671_bool, var_672_string, var_673_string); // 0x388 NEW_2
	
Label_910:
	var_650_object = 0; // 0x38e SetNull
	goto Label_931; // 0x38f Jump
	
Label_931:
	return 16; // 0x3a3 Return
	
Label_912:
	var_654_int = 1; // 0x390 MovI
	
Label_913:
	var_677_bool = var_654_int <= var_640_int; // 0x391 LE
	if(var_677_bool == 0) goto Label_931; // 0x392 JumpB
	var_678_string = "_"; // 0x393 PushS
	var_679_int = var_649_string + var_678_string; // 0x394 Add
	var_655_string = var_679_int + var_654_int; // 0x395 Add2
	FindActor(var_656_object, var_655_string); // 0x396 Func
	var_680_object = var_656_object; // 0x398 Push
	if(var_680_object == 0) goto Label_927; // 0x399 JumpB
	var_681_bool = 0; var_682_string = ""; var_683_string = ""; // 0x39a PushV
	var_682_string = var_655_string; // 0x39b Mov
	var_683_string = "cleanup"; // 0x39c MovS
	func_239(var_681_bool, var_682_string, var_683_string); // 0x39d NEW_2
	
Label_927:
	var_656_object = 0; // 0x39f SetNull
	var_684_int = 1; // 0x3a0 PushI
	var_654_int = var_654_int + var_684_int; // 0x3a1 Add2
	goto Label_913; // 0x3a2 Jump
}


func_1897(var_1056_int, var_1057_int, var_1058_int)
{
	var_1059_int = 0; var_1060_int = 0; // 0x769 PushV
	var_1061_int = 1; // 0x76a PushI
	var_1062_int = var_1057_int + var_1061_int; // 0x76b Add
	var_1063_int = 12; // 0x76c PushI
	var_1064_bool = var_1062_int == var_1063_int; // 0x76d Eq
	if(var_1064_bool == 0) goto Label_1904; // 0x76e JumpB
	return 2; // 0x76f Return
	
Label_1904:
	var_1065_bool = 0; // 0x770 PushV
	var_1065_bool = 0; // 0x771 MovB
	var_1066_bool = 0; // 0x772 PushV
	var_1066_bool = 1; // 0x773 MovB
	var_1067_int = 7; // 0x774 PushI
	var_1068_bool = var_1058_int < var_1067_int; // 0x775 LT
	if(var_1068_bool == 0) goto Label_1915; // 0x776 JumpB
	var_1069_int = 21; // 0x777 PushI
	var_1070_bool = var_1058_int > var_1069_int; // 0x778 GT
	if(var_1070_bool == 0) goto Label_1915; // 0x779 JumpB
	var_1066_bool = 0; // 0x77a MovB
	
Label_1915:
	if(var_1066_bool == 0) goto Label_1920; // 0x77b JumpB
	var_1071_int = 0; // 0x77c PushI
	var_1072_bool = var_1057_int != var_1071_int; // 0x77d Neq
	if(var_1072_bool == 0) goto Label_1920; // 0x77e JumpB
	var_1065_bool = 1; // 0x77f MovB
	
Label_1920:
	if(var_1065_bool == 0) goto Label_1935; // 0x780 JumpB
	var_1073_float = 0; var_1074_int = 0; // 0x781 PushV
	var_1074_int = var_1057_int; // 0x782 Mov
	func_1141(var_1073_float, var_1074_int); // 0x783 NEW_2
	var_1060_int = var_1073_float; // 0x784 Mov
	var_1075_int = var_1060_int; // 0x786 Push
	if(var_1075_int == 0) goto Label_1935; // 0x787 JumpB
	var_1076_int = 0; var_1077_string = ""; var_1078_string = ""; var_1079_int = 0; // 0x788 PushV
	var_1076_int = var_1056_int; // 0x789 Mov
	var_1077_string = "pers_grabitel"; // 0x78a MovS
	var_1078_string = "grabitel.xml"; // 0x78b MovS
	var_1079_int = var_1060_int; // 0x78c Mov
	func_503(var_1076_int, var_1077_string, var_1078_string, var_1079_int); // 0x78d NEW_2
	
Label_1935:
	var_1080_bool = 0; var_1081_int = 0; var_1082_int = 0; // 0x78f PushV
	var_1081_int = var_1057_int; // 0x790 Mov
	var_1082_int = var_1058_int; // 0x791 Mov
	func_1110(var_1080_bool, var_1081_int, var_1082_int); // 0x792 NEW_2
	if(var_1080_bool == 0) goto Label_1998; // 0x794 JumpB
	var_1083_int = 0; var_1084_string = ""; var_1085_string = ""; var_1086_int = 0; // 0x795 PushV
	var_1083_int = var_1056_int; // 0x796 Mov
	var_1084_string = "pers_unosha"; // 0x797 MovS
	var_1085_string = "unosha_attacker.xml"; // 0x798 MovS
	var_1086_int = 1; // 0x799 MovI
	func_503(var_1083_int, var_1084_string, var_1085_string, var_1086_int); // 0x79a NEW_2
	var_1087_int = 0; var_1088_string = ""; var_1089_string = ""; var_1090_int = 0; // 0x79c PushV
	var_1087_int = var_1056_int; // 0x79d Mov
	var_1088_string = "pers_unosha"; // 0x79e MovS
	var_1089_string = "unosha2_attacker.xml"; // 0x79f MovS
	var_1090_int = 1; // 0x7a0 MovI
	func_503(var_1087_int, var_1088_string, var_1089_string, var_1090_int); // 0x7a1 NEW_2
	var_1091_int = 0; var_1092_string = ""; var_1093_string = ""; var_1094_int = 0; // 0x7a3 PushV
	var_1091_int = var_1056_int; // 0x7a4 Mov
	var_1092_string = "pers_worker"; // 0x7a5 MovS
	var_1093_string = "worker_attacker.xml"; // 0x7a6 MovS
	var_1094_int = 1; // 0x7a7 MovI
	func_503(var_1091_int, var_1092_string, var_1093_string, var_1094_int); // 0x7a8 NEW_2
	var_1095_int = 0; var_1096_string = ""; var_1097_string = ""; var_1098_int = 0; // 0x7aa PushV
	var_1095_int = var_1056_int; // 0x7ab Mov
	var_1096_string = "pers_worker"; // 0x7ac MovS
	var_1097_string = "worker2_attacker.xml"; // 0x7ad MovS
	var_1098_int = 1; // 0x7ae MovI
	func_503(var_1095_int, var_1096_string, var_1097_string, var_1098_int); // 0x7af NEW_2
	var_1099_int = 0; var_1100_string = ""; var_1101_string = ""; var_1102_int = 0; // 0x7b1 PushV
	var_1099_int = var_1056_int; // 0x7b2 Mov
	var_1100_string = "pers_woman"; // 0x7b3 MovS
	var_1101_string = "woman.xml"; // 0x7b4 MovS
	var_1102_int = 1; // 0x7b5 MovI
	func_503(var_1099_int, var_1100_string, var_1101_string, var_1102_int); // 0x7b6 NEW_2
	var_1103_int = 0; var_1104_string = ""; var_1105_string = ""; var_1106_int = 0; // 0x7b8 PushV
	var_1103_int = var_1056_int; // 0x7b9 Mov
	var_1104_string = "pers_alkash"; // 0x7ba MovS
	var_1105_string = "alkash.xml"; // 0x7bb MovS
	var_1106_int = 1; // 0x7bc MovI
	func_503(var_1103_int, var_1104_string, var_1105_string, var_1106_int); // 0x7bd NEW_2
	var_1107_int = 0; var_1108_string = ""; var_1109_string = ""; var_1110_int = 0; // 0x7bf PushV
	var_1107_int = var_1056_int; // 0x7c0 Mov
	var_1108_string = "pers_girl"; // 0x7c1 MovS
	var_1109_string = "girl.xml"; // 0x7c2 MovS
	var_1110_int = 1; // 0x7c3 MovI
	func_503(var_1107_int, var_1108_string, var_1109_string, var_1110_int); // 0x7c4 NEW_2
	var_1111_int = 0; var_1112_string = ""; var_1113_string = ""; var_1114_int = 0; // 0x7c6 PushV
	var_1111_int = var_1056_int; // 0x7c7 Mov
	var_1112_string = "pers_girl"; // 0x7c8 MovS
	var_1113_string = "girl2.xml"; // 0x7c9 MovS
	var_1114_int = 1; // 0x7ca MovI
	func_503(var_1111_int, var_1112_string, var_1113_string, var_1114_int); // 0x7cb NEW_2
	goto Label_2155; // 0x7cd Jump
	
Label_2155:
	var_1115_bool = 0; // 0x86b PushV
	var_1115_bool = 0; // 0x86c MovB
	var_1116_bool = 0; // 0x86d PushV
	var_1116_bool = 0; // 0x86e MovB
	var_1117_int = 0; // 0x86f PushI
	var_1118_bool = var_1057_int == var_1117_int; // 0x870 Eq
	if(var_1118_bool == 0) goto Label_2166; // 0x871 JumpB
	var_1119_int = 12; // 0x872 PushI
	var_1120_bool = var_1058_int > var_1119_int; // 0x873 GT
	if(var_1120_bool == 0) goto Label_2166; // 0x874 JumpB
	var_1116_bool = 1; // 0x875 MovB
	
Label_2166:
	if(var_1116_bool == 0) goto Label_2171; // 0x876 JumpB
	var_1121_int = 22; // 0x877 PushI
	var_1122_bool = var_1058_int < var_1121_int; // 0x878 LT
	if(var_1122_bool == 0) goto Label_2171; // 0x879 JumpB
	var_1115_bool = 1; // 0x87a MovB
	
Label_2171:
	if(var_1115_bool == 0) goto Label_2179; // 0x87b JumpB
	var_1123_int = 0; var_1124_string = ""; var_1125_string = ""; var_1126_int = 0; // 0x87c PushV
	var_1123_int = var_1056_int; // 0x87d Mov
	var_1124_string = "pers_woman"; // 0x87e MovS
	var_1125_string = "woman_killme.xml"; // 0x87f MovS
	var_1126_int = 1; // 0x880 MovI
	func_503(var_1123_int, var_1124_string, var_1125_string, var_1126_int); // 0x881 NEW_2
	
Label_2179:
	var_1127_bool = 0; var_1128_int = 0; var_1129_int = 0; // 0x883 PushV
	var_1128_int = var_1057_int; // 0x884 Mov
	var_1129_int = var_1058_int; // 0x885 Mov
	func_1345(var_1127_bool, var_1128_int, var_1129_int); // 0x886 NEW_2
	if(var_1127_bool == 0) goto Label_2192; // 0x888 JumpB
	var_1134_int = 0; var_1135_string = ""; var_1136_string = ""; var_1137_int = 0; // 0x889 PushV
	var_1134_int = var_1056_int; // 0x88a Mov
	var_1135_string = "pers_soldat"; // 0x88b MovS
	var_1136_string = "soldier_marauder.xml"; // 0x88c MovS
	var_1137_int = 2; // 0x88d MovI
	func_503(var_1134_int, var_1135_string, var_1136_string, var_1137_int); // 0x88e NEW_2
	
Label_2192:
	var_1138_bool = 0; var_1139_int = 0; var_1140_int = 0; // 0x890 PushV
	var_1139_int = var_1057_int; // 0x891 Mov
	var_1140_int = var_1058_int; // 0x892 Mov
	func_1355(var_1138_bool, var_1139_int, var_1140_int); // 0x893 NEW_2
	if(var_1138_bool == 0) goto Label_2205; // 0x895 JumpB
	var_1148_int = 0; var_1149_string = ""; var_1150_string = ""; var_1151_int = 0; // 0x896 PushV
	var_1148_int = var_1056_int; // 0x897 Mov
	var_1149_string = "pers_nudegirl"; // 0x898 MovS
	var_1150_string = "nudegirl.xml"; // 0x899 MovS
	var_1151_int = 1; // 0x89a MovI
	func_503(var_1148_int, var_1149_string, var_1150_string, var_1151_int); // 0x89b NEW_2
	
Label_2205:
	return 2; // 0x89d Return
	
Label_1998:
	var_1152_bool = 0; // 0x7ce PushV
	var_1152_bool = 0; // 0x7cf MovB
	var_1153_int = 8; // 0x7d0 PushI
	var_1154_bool = var_1058_int > var_1153_int; // 0x7d1 GT
	if(var_1154_bool == 0) goto Label_2007; // 0x7d2 JumpB
	var_1155_int = 21; // 0x7d3 PushI
	var_1156_bool = var_1058_int < var_1155_int; // 0x7d4 LT
	if(var_1156_bool == 0) goto Label_2007; // 0x7d5 JumpB
	var_1152_bool = 1; // 0x7d6 MovB
	
Label_2007:
	if(var_1152_bool == 0) goto Label_2089; // 0x7d7 JumpB
	var_1157_int = 0; var_1158_string = ""; var_1159_string = ""; var_1160_int = 0; // 0x7d8 PushV
	var_1157_int = var_1056_int; // 0x7d9 Mov
	var_1158_string = "pers_woman"; // 0x7da MovS
	var_1159_string = "woman.xml"; // 0x7db MovS
	var_1160_int = 1; // 0x7dc MovI
	func_503(var_1157_int, var_1158_string, var_1159_string, var_1160_int); // 0x7dd NEW_2
	var_1161_int = 0; var_1162_string = ""; var_1163_string = ""; var_1164_int = 0; // 0x7df PushV
	var_1161_int = var_1056_int; // 0x7e0 Mov
	var_1162_string = "pers_unosha"; // 0x7e1 MovS
	var_1163_string = "unosha.xml"; // 0x7e2 MovS
	var_1164_int = 1; // 0x7e3 MovI
	func_503(var_1161_int, var_1162_string, var_1163_string, var_1164_int); // 0x7e4 NEW_2
	var_1165_int = 0; var_1166_string = ""; var_1167_string = ""; var_1168_int = 0; // 0x7e6 PushV
	var_1165_int = var_1056_int; // 0x7e7 Mov
	var_1166_string = "pers_unosha"; // 0x7e8 MovS
	var_1167_string = "unosha2.xml"; // 0x7e9 MovS
	var_1168_int = 1; // 0x7ea MovI
	func_503(var_1165_int, var_1166_string, var_1167_string, var_1168_int); // 0x7eb NEW_2
	var_1169_int = 0; var_1170_string = ""; var_1171_string = ""; var_1172_int = 0; // 0x7ed PushV
	var_1169_int = var_1056_int; // 0x7ee Mov
	var_1170_string = "pers_worker"; // 0x7ef MovS
	var_1171_string = "worker.xml"; // 0x7f0 MovS
	var_1172_int = 1; // 0x7f1 MovI
	func_503(var_1169_int, var_1170_string, var_1171_string, var_1172_int); // 0x7f2 NEW_2
	var_1173_int = 0; var_1174_string = ""; var_1175_string = ""; var_1176_int = 0; // 0x7f4 PushV
	var_1173_int = var_1056_int; // 0x7f5 Mov
	var_1174_string = "pers_worker"; // 0x7f6 MovS
	var_1175_string = "worker2.xml"; // 0x7f7 MovS
	var_1176_int = 1; // 0x7f8 MovI
	func_503(var_1173_int, var_1174_string, var_1175_string, var_1176_int); // 0x7f9 NEW_2
	var_1177_int = 0; var_1178_string = ""; var_1179_string = ""; var_1180_int = 0; // 0x7fb PushV
	var_1177_int = var_1056_int; // 0x7fc Mov
	var_1178_string = "pers_alkash"; // 0x7fd MovS
	var_1179_string = "alkash.xml"; // 0x7fe MovS
	var_1180_int = 1; // 0x7ff MovI
	func_503(var_1177_int, var_1178_string, var_1179_string, var_1180_int); // 0x800 NEW_2
	var_1181_int = 0; var_1182_string = ""; var_1183_string = ""; var_1184_int = 0; // 0x802 PushV
	var_1181_int = var_1056_int; // 0x803 Mov
	var_1182_string = "pers_girl"; // 0x804 MovS
	var_1183_string = "girl.xml"; // 0x805 MovS
	var_1184_int = 1; // 0x806 MovI
	func_503(var_1181_int, var_1182_string, var_1183_string, var_1184_int); // 0x807 NEW_2
	var_1185_int = 0; var_1186_string = ""; var_1187_string = ""; var_1188_int = 0; // 0x809 PushV
	var_1185_int = var_1056_int; // 0x80a Mov
	var_1186_string = "pers_girl"; // 0x80b MovS
	var_1187_string = "girl2.xml"; // 0x80c MovS
	var_1188_int = 1; // 0x80d MovI
	func_503(var_1185_int, var_1186_string, var_1187_string, var_1188_int); // 0x80e NEW_2
	var_1189_int = 1; // 0x810 PushI
	var_1190_int = var_1057_int + var_1189_int; // 0x811 Add
	var_1191_int = 3; // 0x812 PushI
	var_1192_bool = var_1190_int >= var_1191_int; // 0x813 GE
	if(var_1192_bool == 0) goto Label_2076; // 0x814 JumpB
	var_1193_int = 0; var_1194_string = ""; var_1195_string = ""; var_1196_int = 0; // 0x815 PushV
	var_1193_int = var_1056_int; // 0x816 Mov
	var_1194_string = "pers_dohodyaga"; // 0x817 MovS
	var_1195_string = "dohodyaga.xml"; // 0x818 MovS
	var_1196_int = 1; // 0x819 MovI
	func_503(var_1193_int, var_1194_string, var_1195_string, var_1196_int); // 0x81a NEW_2
	
Label_2076:
	var_1197_int = 1; // 0x81c PushI
	var_1198_int = var_1057_int + var_1197_int; // 0x81d Add
	var_1199_int = 7; // 0x81e PushI
	var_1200_bool = var_1198_int >= var_1199_int; // 0x81f GE
	if(var_1200_bool == 0) goto Label_2088; // 0x820 JumpB
	var_1201_int = 0; var_1202_string = ""; var_1203_string = ""; var_1204_int = 0; // 0x821 PushV
	var_1201_int = var_1056_int; // 0x822 Mov
	var_1202_string = "pers_butcher"; // 0x823 MovS
	var_1203_string = "butcher.xml"; // 0x824 MovS
	var_1204_int = 2; // 0x825 MovI
	func_503(var_1201_int, var_1202_string, var_1203_string, var_1204_int); // 0x826 NEW_2
	
Label_2088:
	goto Label_2155; // 0x828 Jump
	
Label_2089:
	var_1205_int = 0; var_1206_string = ""; var_1207_string = ""; var_1208_int = 0; // 0x829 PushV
	var_1205_int = var_1056_int; // 0x82a Mov
	var_1206_string = "pers_woman"; // 0x82b MovS
	var_1207_string = "woman.xml"; // 0x82c MovS
	var_1208_int = 1; // 0x82d MovI
	func_503(var_1205_int, var_1206_string, var_1207_string, var_1208_int); // 0x82e NEW_2
	var_1209_int = 0; var_1210_string = ""; var_1211_string = ""; var_1212_int = 0; // 0x830 PushV
	var_1209_int = var_1056_int; // 0x831 Mov
	var_1210_string = "pers_unosha"; // 0x832 MovS
	var_1211_string = "unosha.xml"; // 0x833 MovS
	var_1212_int = 1; // 0x834 MovI
	func_503(var_1209_int, var_1210_string, var_1211_string, var_1212_int); // 0x835 NEW_2
	var_1213_int = 0; var_1214_string = ""; var_1215_string = ""; var_1216_int = 0; // 0x837 PushV
	var_1213_int = var_1056_int; // 0x838 Mov
	var_1214_string = "pers_unosha"; // 0x839 MovS
	var_1215_string = "unosha2.xml"; // 0x83a MovS
	var_1216_int = 1; // 0x83b MovI
	func_503(var_1213_int, var_1214_string, var_1215_string, var_1216_int); // 0x83c NEW_2
	var_1217_int = 0; var_1218_string = ""; var_1219_string = ""; var_1220_int = 0; // 0x83e PushV
	var_1217_int = var_1056_int; // 0x83f Mov
	var_1218_string = "pers_worker"; // 0x840 MovS
	var_1219_string = "worker.xml"; // 0x841 MovS
	var_1220_int = 1; // 0x842 MovI
	func_503(var_1217_int, var_1218_string, var_1219_string, var_1220_int); // 0x843 NEW_2
	var_1221_int = 0; var_1222_string = ""; var_1223_string = ""; var_1224_int = 0; // 0x845 PushV
	var_1221_int = var_1056_int; // 0x846 Mov
	var_1222_string = "pers_worker"; // 0x847 MovS
	var_1223_string = "worker2.xml"; // 0x848 MovS
	var_1224_int = 1; // 0x849 MovI
	func_503(var_1221_int, var_1222_string, var_1223_string, var_1224_int); // 0x84a NEW_2
	var_1225_int = 0; var_1226_string = ""; var_1227_string = ""; var_1228_int = 0; // 0x84c PushV
	var_1225_int = var_1056_int; // 0x84d Mov
	var_1226_string = "pers_alkash"; // 0x84e MovS
	var_1227_string = "alkash.xml"; // 0x84f MovS
	var_1228_int = 1; // 0x850 MovI
	func_503(var_1225_int, var_1226_string, var_1227_string, var_1228_int); // 0x851 NEW_2
	var_1229_int = 1; // 0x853 PushI
	var_1230_int = var_1057_int + var_1229_int; // 0x854 Add
	var_1231_int = 3; // 0x855 PushI
	var_1232_bool = var_1230_int >= var_1231_int; // 0x856 GE
	if(var_1232_bool == 0) goto Label_2143; // 0x857 JumpB
	var_1233_int = 0; var_1234_string = ""; var_1235_string = ""; var_1236_int = 0; // 0x858 PushV
	var_1233_int = var_1056_int; // 0x859 Mov
	var_1234_string = "pers_dohodyaga"; // 0x85a MovS
	var_1235_string = "dohodyaga.xml"; // 0x85b MovS
	var_1236_int = 1; // 0x85c MovI
	func_503(var_1233_int, var_1234_string, var_1235_string, var_1236_int); // 0x85d NEW_2
	
Label_2143:
	var_1237_int = 1; // 0x85f PushI
	var_1238_int = var_1057_int + var_1237_int; // 0x860 Add
	var_1239_int = 7; // 0x861 PushI
	var_1240_bool = var_1238_int >= var_1239_int; // 0x862 GE
	if(var_1240_bool == 0) goto Label_2155; // 0x863 JumpB
	var_1241_int = 0; var_1242_string = ""; var_1243_string = ""; var_1244_int = 0; // 0x864 PushV
	var_1241_int = var_1056_int; // 0x865 Mov
	var_1242_string = "pers_butcher"; // 0x866 MovS
	var_1243_string = "butcher.xml"; // 0x867 MovS
	var_1244_int = 3; // 0x868 MovI
	func_503(var_1241_int, var_1242_string, var_1243_string, var_1244_int); // 0x869 NEW_2
}


func_6007(var_3930_int, var_3931_int, var_3932_object, var_3933_object, var_3934_object, var_3935_object)
{
	var_3936_int = 0; // 0x1778 PushI
	var_3937_bool = var_3931_int == var_3936_int; // 0x1779 Eq
	if(var_3937_bool == 0) goto Label_6047; // 0x177a JumpB
	var_3938_int = 0; var_3939_bool = 0; // 0x177b PushV
	var_3938_int = 8; // 0x177c MovI
	var_3939_bool = 0; // 0x177d MovB
	func_796(var_3938_int, var_3939_bool); // 0x177e NEW_2
	var_3940_int = 0; var_3941_bool = 0; var_3942_int = 0; // 0x1780 PushV
	var_3940_int = 8; // 0x1781 MovI
	var_3941_bool = 0; // 0x1782 MovB
	var_3942_int = 1; // 0x1783 MovI
	func_813(var_3940_int, var_3941_bool, var_3942_int); // 0x1784 NEW_2
	var_3943_int = 0; var_3944_int = 0; var_3945_object = Obj(); var_3946_object = Obj(); var_3947_object = Obj(); // 0x1786 PushV
	var_3943_int = 8; // 0x1787 MovI
	var_3944_int = var_3930_int; // 0x1788 Mov
	var_3945_object = var_3932_object; // 0x1789 Mov
	var_3946_object = var_3933_object; // 0x178a Mov
	var_3947_object = var_3934_object; // 0x178b Mov
	func_720(var_3943_int, var_3944_int, var_3945_object, var_3946_object, var_3947_object); // 0x178c NEW_2
	var_3948_object = Obj(); var_3949_int = 0; // 0x178e PushV
	var_3948_object = var_3935_object; // 0x178f Mov
	var_3949_int = 2; // 0x1790 MovI
	func_305(var_3949_int); // 0x1791 NEW_2
	var_3950_int = 0; var_3951_bool = 0; var_3952_int = 0; // 0x1793 PushV
	var_3950_int = 8; // 0x1794 MovI
	var_3951_bool = 0; // 0x1795 MovB
	var_3952_int = 4; // 0x1796 MovI
	func_870(var_3950_int, var_3951_bool, var_3952_int); // 0x1797 NEW_2
	var_3953_int = 0; var_3954_bool = 0; var_3955_int = 0; // 0x1799 PushV
	var_3953_int = 8; // 0x179a MovI
	var_3954_bool = 1; // 0x179b MovB
	var_3955_int = 4; // 0x179c MovI
	func_932(var_3953_int, var_3954_bool, var_3955_int); // 0x179d NEW_2
	
Label_6047:
	var_3956_int = 0; var_3957_bool = 0; // 0x179f PushV
	var_3956_int = 8; // 0x17a0 MovI
	var_3957_bool = 0; // 0x17a1 MovB
	func_779(var_3956_int, var_3957_bool); // 0x17a2 NEW_2
	var_3958_int = 0; var_3959_int = 0; var_3960_int = 0; // 0x17a4 PushV
	var_3958_int = 8; // 0x17a5 MovI
	var_3959_int = var_3930_int; // 0x17a6 Mov
	var_3960_int = var_3931_int; // 0x17a7 Mov
	func_3659(var_3958_int, var_3959_int, var_3960_int); // 0x17a8 NEW_2
	return 0; // 0x17aa Return
}


func_7031(var_4095_int, var_4096_int, var_4097_object, var_4098_object, var_4099_object, var_4100_object)
{
	var_4101_int = 0; // 0x1b78 PushI
	var_4102_bool = var_4096_int == var_4101_int; // 0x1b79 Eq
	if(var_4102_bool == 0) goto Label_7071; // 0x1b7a JumpB
	var_4103_int = 0; var_4104_bool = 0; // 0x1b7b PushV
	var_4103_int = 13; // 0x1b7c MovI
	var_4104_bool = 0; // 0x1b7d MovB
	func_796(var_4103_int, var_4104_bool); // 0x1b7e NEW_2
	var_4105_int = 0; var_4106_bool = 0; var_4107_int = 0; // 0x1b80 PushV
	var_4105_int = 13; // 0x1b81 MovI
	var_4106_bool = 0; // 0x1b82 MovB
	var_4107_int = 1; // 0x1b83 MovI
	func_813(var_4105_int, var_4106_bool, var_4107_int); // 0x1b84 NEW_2
	var_4108_int = 0; var_4109_int = 0; var_4110_object = Obj(); var_4111_object = Obj(); var_4112_object = Obj(); // 0x1b86 PushV
	var_4108_int = 13; // 0x1b87 MovI
	var_4109_int = var_4095_int; // 0x1b88 Mov
	var_4110_object = var_4097_object; // 0x1b89 Mov
	var_4111_object = var_4098_object; // 0x1b8a Mov
	var_4112_object = var_4099_object; // 0x1b8b Mov
	func_720(var_4108_int, var_4109_int, var_4110_object, var_4111_object, var_4112_object); // 0x1b8c NEW_2
	var_4113_object = Obj(); var_4114_int = 0; // 0x1b8e PushV
	var_4113_object = var_4100_object; // 0x1b8f Mov
	var_4114_int = 2; // 0x1b90 MovI
	func_305(var_4114_int); // 0x1b91 NEW_2
	var_4115_int = 0; var_4116_bool = 0; var_4117_int = 0; // 0x1b93 PushV
	var_4115_int = 13; // 0x1b94 MovI
	var_4116_bool = 0; // 0x1b95 MovB
	var_4117_int = 4; // 0x1b96 MovI
	func_870(var_4115_int, var_4116_bool, var_4117_int); // 0x1b97 NEW_2
	var_4118_int = 0; var_4119_bool = 0; var_4120_int = 0; // 0x1b99 PushV
	var_4118_int = 13; // 0x1b9a MovI
	var_4119_bool = 1; // 0x1b9b MovB
	var_4120_int = 4; // 0x1b9c MovI
	func_932(var_4118_int, var_4119_bool, var_4120_int); // 0x1b9d NEW_2
	
Label_7071:
	var_4121_int = 0; var_4122_bool = 0; // 0x1b9f PushV
	var_4121_int = 13; // 0x1ba0 MovI
	var_4122_bool = 0; // 0x1ba1 MovB
	func_779(var_4121_int, var_4122_bool); // 0x1ba2 NEW_2
	var_4123_int = 0; var_4124_int = 0; var_4125_int = 0; // 0x1ba4 PushV
	var_4123_int = 13; // 0x1ba5 MovI
	var_4124_int = var_4095_int; // 0x1ba6 Mov
	var_4125_int = var_4096_int; // 0x1ba7 Mov
	func_3659(var_4123_int, var_4124_int, var_4125_int); // 0x1ba8 NEW_2
	return 0; // 0x1baa Return
}


func_2944(var_2434_int, var_2435_int, var_2436_int)
{
	var_2437_int = 0; var_2438_int = 0; var_2439_int = 0; var_2440_int = 0; // 0xb80 PushV
	var_2441_bool = 0; // 0xb81 PushV
	var_2441_bool = 0; // 0xb82 MovB
	var_2442_int = 8; // 0xb83 PushI
	var_2443_bool = var_2436_int > var_2442_int; // 0xb84 GT
	if(var_2443_bool == 0) goto Label_2954; // 0xb85 JumpB
	var_2444_int = 21; // 0xb86 PushI
	var_2445_bool = var_2436_int < var_2444_int; // 0xb87 LT
	if(var_2445_bool == 0) goto Label_2954; // 0xb88 JumpB
	var_2441_bool = 1; // 0xb89 MovB
	
Label_2954:
	if(var_2441_bool == 0) goto Label_3009; // 0xb8a JumpB
	var_2446_int = 0; var_2447_string = ""; var_2448_string = ""; var_2449_int = 0; // 0xb8b PushV
	var_2446_int = var_2434_int; // 0xb8c Mov
	var_2447_string = "pers_vaxxabit"; // 0xb8d MovS
	var_2448_string = "vaxxabit_d.xml"; // 0xb8e MovS
	var_2449_int = 6; // 0xb8f MovI
	func_503(var_2446_int, var_2447_string, var_2448_string, var_2449_int); // 0xb90 NEW_2
	var_2450_int = 0; var_2451_string = ""; var_2452_string = ""; var_2453_int = 0; // 0xb92 PushV
	var_2450_int = var_2434_int; // 0xb93 Mov
	var_2451_string = "pers_vaxxabitka"; // 0xb94 MovS
	var_2452_string = "vaxxabitka_d.xml"; // 0xb95 MovS
	var_2453_int = 6; // 0xb96 MovI
	func_503(var_2450_int, var_2451_string, var_2452_string, var_2453_int); // 0xb97 NEW_2
	var_2454_int = 0; var_2455_string = ""; var_2456_string = ""; var_2457_int = 0; // 0xb99 PushV
	var_2454_int = var_2434_int; // 0xb9a Mov
	var_2455_string = "pers_rat_big"; // 0xb9b MovS
	var_2456_string = "rat_big.xml"; // 0xb9c MovS
	var_2457_int = 2; // 0xb9d MovI
	func_503(var_2454_int, var_2455_string, var_2456_string, var_2457_int); // 0xb9e NEW_2
	var_2458_int = 0; var_2459_string = ""; var_2460_string = ""; var_2461_int = 0; // 0xba0 PushV
	var_2458_int = var_2434_int; // 0xba1 Mov
	var_2459_string = "fog"; // 0xba2 MovS
	var_2460_string = "fog.xml"; // 0xba3 MovS
	var_2461_int = 6; // 0xba4 MovI
	func_529(var_2458_int, var_2459_string, var_2460_string, var_2461_int); // 0xba5 NEW_2
	var_2462_int = 5; // 0xba7 PushI
	var_2463_bool = var_2435_int >= var_2462_int; // 0xba8 GE
	if(var_2463_bool == 0) goto Label_2993; // 0xba9 JumpB
	var_2464_int = 0; var_2465_string = ""; var_2466_string = ""; var_2467_int = 0; // 0xbaa PushV
	var_2464_int = var_2434_int; // 0xbab Mov
	var_2465_string = "fog"; // 0xbac MovS
	var_2466_string = "fog_hunter.xml"; // 0xbad MovS
	var_2467_int = 2; // 0xbae MovI
	func_529(var_2464_int, var_2465_string, var_2466_string, var_2467_int); // 0xbaf NEW_2
	
Label_2993:
	var_2468_int = 1; // 0xbb1 PushI
	var_2469_float = 0; var_2470_int = 0; // 0xbb2 PushV
	var_2470_int = var_2435_int; // 0xbb3 Mov
	func_1255(var_2469_float, var_2470_int); // 0xbb4 NEW_2
	var_2439_int = var_2468_int * var_2469_float; // 0xbb6 Mult2
	var_2471_int = var_2439_int; // 0xbb7 Push
	if(var_2471_int == 0) goto Label_3008; // 0xbb8 JumpB
	var_2472_int = 0; var_2473_string = ""; var_2474_string = ""; var_2475_int = 0; // 0xbb9 PushV
	var_2472_int = var_2434_int; // 0xbba Mov
	var_2473_string = "pers_bomber"; // 0xbbb MovS
	var_2474_string = "bomber.xml"; // 0xbbc MovS
	var_2475_int = var_2439_int; // 0xbbd Mov
	func_503(var_2472_int, var_2473_string, var_2474_string, var_2475_int); // 0xbbe NEW_2
	
Label_3008:
	goto Label_3062; // 0xbc0 Jump
	
Label_3062:
	var_2476_int = 0; var_2477_string = ""; var_2478_string = ""; var_2479_int = 0; var_2480_int = 0; var_2481_int = 0; // 0xbf6 PushV
	var_2476_int = var_2434_int; // 0xbf7 Mov
	var_2477_string = "pers_worker"; // 0xbf8 MovS
	var_2478_string = "agony1_man.xml"; // 0xbf9 MovS
	var_2479_int = 2; // 0xbfa MovI
	var_2480_int = 4; // 0xbfb MovI
	var_2481_int = 4; // 0xbfc MovI
	func_516(var_2476_int, var_2477_string, var_2478_string, var_2479_int, var_2480_int, var_2481_int); // 0xbfd NEW_2
	var_2482_int = 0; var_2483_string = ""; var_2484_string = ""; var_2485_int = 0; var_2486_int = 0; var_2487_int = 0; // 0xbff PushV
	var_2482_int = var_2434_int; // 0xc00 Mov
	var_2483_string = "pers_unosha"; // 0xc01 MovS
	var_2484_string = "agony1_man.xml"; // 0xc02 MovS
	var_2485_int = 2; // 0xc03 MovI
	var_2486_int = 4; // 0xc04 MovI
	var_2487_int = 4; // 0xc05 MovI
	func_516(var_2482_int, var_2483_string, var_2484_string, var_2485_int, var_2486_int, var_2487_int); // 0xc06 NEW_2
	var_2488_int = 0; var_2489_string = ""; var_2490_string = ""; var_2491_int = 0; var_2492_int = 0; var_2493_int = 0; // 0xc08 PushV
	var_2488_int = var_2434_int; // 0xc09 Mov
	var_2489_string = "pers_woman"; // 0xc0a MovS
	var_2490_string = "agony1_woman.xml"; // 0xc0b MovS
	var_2491_int = 2; // 0xc0c MovI
	var_2492_int = 4; // 0xc0d MovI
	var_2493_int = 4; // 0xc0e MovI
	func_516(var_2488_int, var_2489_string, var_2490_string, var_2491_int, var_2492_int, var_2493_int); // 0xc0f NEW_2
	var_2494_int = 0; var_2495_string = ""; var_2496_string = ""; var_2497_int = 0; var_2498_int = 0; var_2499_int = 0; // 0xc11 PushV
	var_2494_int = var_2434_int; // 0xc12 Mov
	var_2495_string = "pers_wasted_girl"; // 0xc13 MovS
	var_2496_string = "agony1_woman.xml"; // 0xc14 MovS
	var_2497_int = 2; // 0xc15 MovI
	var_2498_int = 4; // 0xc16 MovI
	var_2499_int = 4; // 0xc17 MovI
	func_516(var_2494_int, var_2495_string, var_2496_string, var_2497_int, var_2498_int, var_2499_int); // 0xc18 NEW_2
	var_2500_bool = 0; var_2501_int = 0; var_2502_int = 0; // 0xc1a PushV
	var_2501_int = var_2435_int; // 0xc1b Mov
	var_2502_int = var_2436_int; // 0xc1c Mov
	func_1345(var_2500_bool, var_2501_int, var_2502_int); // 0xc1d NEW_2
	if(var_2500_bool == 0) goto Label_3111; // 0xc1f JumpB
	var_2503_int = 0; var_2504_string = ""; var_2505_string = ""; var_2506_int = 0; // 0xc20 PushV
	var_2503_int = var_2434_int; // 0xc21 Mov
	var_2504_string = "pers_soldat"; // 0xc22 MovS
	var_2505_string = "soldier_marauder.xml"; // 0xc23 MovS
	var_2506_int = 2; // 0xc24 MovI
	func_503(var_2503_int, var_2504_string, var_2505_string, var_2506_int); // 0xc25 NEW_2
	
Label_3111:
	var_2507_bool = 0; var_2508_int = 0; var_2509_int = 0; // 0xc27 PushV
	var_2508_int = var_2435_int; // 0xc28 Mov
	var_2509_int = var_2436_int; // 0xc29 Mov
	func_1355(var_2507_bool, var_2508_int, var_2509_int); // 0xc2a NEW_2
	if(var_2507_bool == 0) goto Label_3124; // 0xc2c JumpB
	var_2510_int = 0; var_2511_string = ""; var_2512_string = ""; var_2513_int = 0; // 0xc2d PushV
	var_2510_int = var_2434_int; // 0xc2e Mov
	var_2511_string = "pers_nudegirl"; // 0xc2f MovS
	var_2512_string = "nudegirl.xml"; // 0xc30 MovS
	var_2513_int = 1; // 0xc31 MovI
	func_503(var_2510_int, var_2511_string, var_2512_string, var_2513_int); // 0xc32 NEW_2
	
Label_3124:
	var_2514_bool = 0; var_2515_int = 0; // 0xc34 PushV
	var_2515_int = var_2435_int; // 0xc35 Mov
	func_1372(var_2514_bool, var_2515_int); // 0xc36 NEW_2
	if(var_2514_bool == 0) goto Label_3136; // 0xc38 JumpB
	var_2516_int = 0; var_2517_string = ""; var_2518_string = ""; var_2519_int = 0; // 0xc39 PushV
	var_2516_int = var_2434_int; // 0xc3a Mov
	var_2517_string = "pers_sanitar"; // 0xc3b MovS
	var_2518_string = "sanitar.xml"; // 0xc3c MovS
	var_2519_int = 1; // 0xc3d MovI
	func_503(var_2516_int, var_2517_string, var_2518_string, var_2519_int); // 0xc3e NEW_2
	
Label_3136:
	return 4; // 0xc40 Return
	
Label_3009:
	var_2520_int = 0; var_2521_string = ""; var_2522_string = ""; var_2523_int = 0; // 0xbc1 PushV
	var_2520_int = var_2434_int; // 0xbc2 Mov
	var_2521_string = "pers_vaxxabit"; // 0xbc3 MovS
	var_2522_string = "vaxxabit_d.xml"; // 0xbc4 MovS
	var_2523_int = 5; // 0xbc5 MovI
	func_503(var_2520_int, var_2521_string, var_2522_string, var_2523_int); // 0xbc6 NEW_2
	var_2524_int = 0; var_2525_string = ""; var_2526_string = ""; var_2527_int = 0; // 0xbc8 PushV
	var_2524_int = var_2434_int; // 0xbc9 Mov
	var_2525_string = "pers_vaxxabitka"; // 0xbca MovS
	var_2526_string = "vaxxabitka_d.xml"; // 0xbcb MovS
	var_2527_int = 5; // 0xbcc MovI
	func_503(var_2524_int, var_2525_string, var_2526_string, var_2527_int); // 0xbcd NEW_2
	var_2528_int = 0; var_2529_string = ""; var_2530_string = ""; var_2531_int = 0; // 0xbcf PushV
	var_2528_int = var_2434_int; // 0xbd0 Mov
	var_2529_string = "pers_rat_big"; // 0xbd1 MovS
	var_2530_string = "rat_big.xml"; // 0xbd2 MovS
	var_2531_int = 3; // 0xbd3 MovI
	func_503(var_2528_int, var_2529_string, var_2530_string, var_2531_int); // 0xbd4 NEW_2
	var_2532_int = 0; var_2533_string = ""; var_2534_string = ""; var_2535_int = 0; // 0xbd6 PushV
	var_2532_int = var_2434_int; // 0xbd7 Mov
	var_2533_string = "fog"; // 0xbd8 MovS
	var_2534_string = "fog.xml"; // 0xbd9 MovS
	var_2535_int = 6; // 0xbda MovI
	func_529(var_2532_int, var_2533_string, var_2534_string, var_2535_int); // 0xbdb NEW_2
	var_2536_int = 5; // 0xbdd PushI
	var_2537_bool = var_2435_int >= var_2536_int; // 0xbde GE
	if(var_2537_bool == 0) goto Label_3047; // 0xbdf JumpB
	var_2538_int = 0; var_2539_string = ""; var_2540_string = ""; var_2541_int = 0; // 0xbe0 PushV
	var_2538_int = var_2434_int; // 0xbe1 Mov
	var_2539_string = "fog"; // 0xbe2 MovS
	var_2540_string = "fog_hunter.xml"; // 0xbe3 MovS
	var_2541_int = 2; // 0xbe4 MovI
	func_529(var_2538_int, var_2539_string, var_2540_string, var_2541_int); // 0xbe5 NEW_2
	
Label_3047:
	var_2542_int = 1; // 0xbe7 PushI
	var_2543_float = 0; var_2544_int = 0; // 0xbe8 PushV
	var_2544_int = var_2435_int; // 0xbe9 Mov
	func_1255(var_2543_float, var_2544_int); // 0xbea NEW_2
	var_2440_int = var_2542_int * var_2543_float; // 0xbec Mult2
	var_2545_int = var_2440_int; // 0xbed Push
	if(var_2545_int == 0) goto Label_3062; // 0xbee JumpB
	var_2546_int = 0; var_2547_string = ""; var_2548_string = ""; var_2549_int = 0; // 0xbef PushV
	var_2546_int = var_2434_int; // 0xbf0 Mov
	var_2547_string = "pers_bomber"; // 0xbf1 MovS
	var_2548_string = "bomber.xml"; // 0xbf2 MovS
	var_2549_int = var_2440_int; // 0xbf3 Mov
	func_503(var_2546_int, var_2547_string, var_2548_string, var_2549_int); // 0xbf4 NEW_2
}


func_11136(var_4745_bool, var_4746_int)
{
	var_4747_object = Obj(); var_4748_object = Obj(); var_4749_object = Obj(); var_4750_object = Obj(); // 0x2b80 PushV
	var_4751_object = Obj(); // 0x2b81 PushV
	func_11095(var_4751_object); // 0x2b82 NEW_2
	var_4749_object = var_4751_object; // 0x2b83 Mov
	Find(var_4746_int, var_4750_object); // 0x2b85 ObjFunc
	var_4756_bool = var_4750_object == 0; // 0x2b87 Not
	if(var_4756_bool == 0) goto Label_11147; // 0x2b88 JumpB
	var_4745_bool = 0; // 0x2b89 MovB
	return 4; // 0x2b8a Return
	
Label_11147:
	Remove(); // 0x2b8b ObjFunc
	var_4745_bool = 1; // 0x2b8d MovB
	return 4; // 0x2b8e Return
}


func_10118()
{
	var_5776_object = Obj(); var_5777_object = Obj(); var_5778_object = Obj(); var_5779_object = Obj(); // 0x2786 PushV
	var_5780_object = Obj(); // 0x2787 PushV
	func_11161(var_5780_object); // 0x2788 NEW_2
	var_5778_object = var_5780_object; // 0x2789 Mov
	var_5781_string = "k3q01AlexandrGotoAnna"; // 0x278b PushS
	FindMark(var_5779_object, var_5781_string); // 0x278c ObjFunc
	var_5782_object = var_5779_object; // 0x278e Push
	if(var_5782_object == 0) goto Label_10130; // 0x278f JumpB
	Remove(); // 0x2790 ObjFunc
	
Label_10130:
	var_5783_string = "k3q01AnnaGotoKapella"; // 0x2792 PushS
	FindMark(var_5779_object, var_5783_string); // 0x2793 ObjFunc
	var_5784_object = var_5779_object; // 0x2795 Push
	if(var_5784_object == 0) goto Label_10137; // 0x2796 JumpB
	Remove(); // 0x2797 ObjFunc
	
Label_10137:
	var_5785_string = "k3q01AnnaGotoMladVlad"; // 0x2799 PushS
	FindMark(var_5779_object, var_5785_string); // 0x279a ObjFunc
	var_5786_object = var_5779_object; // 0x279c Push
	if(var_5786_object == 0) goto Label_10144; // 0x279d JumpB
	Remove(); // 0x279e ObjFunc
	
Label_10144:
	var_5787_string = "k3q01KapellaGotoAnna"; // 0x27a0 PushS
	FindMark(var_5779_object, var_5787_string); // 0x27a1 ObjFunc
	var_5788_object = var_5779_object; // 0x27a3 Push
	if(var_5788_object == 0) goto Label_10151; // 0x27a4 JumpB
	Remove(); // 0x27a5 ObjFunc
	
Label_10151:
	var_5789_string = "k3q02JuliaGotoEva"; // 0x27a7 PushS
	FindMark(var_5779_object, var_5789_string); // 0x27a8 ObjFunc
	var_5790_object = var_5779_object; // 0x27aa Push
	if(var_5790_object == 0) goto Label_10158; // 0x27ab JumpB
	Remove(); // 0x27ac ObjFunc
	
Label_10158:
	var_5791_string = "k3q02KaterinaGotoJulia"; // 0x27ae PushS
	FindMark(var_5779_object, var_5791_string); // 0x27af ObjFunc
	var_5792_object = var_5779_object; // 0x27b1 Push
	if(var_5792_object == 0) goto Label_10165; // 0x27b2 JumpB
	Remove(); // 0x27b3 ObjFunc
	
Label_10165:
	var_5793_string = "k3q03AnnaGotoEva"; // 0x27b5 PushS
	FindMark(var_5779_object, var_5793_string); // 0x27b6 ObjFunc
	var_5794_object = var_5779_object; // 0x27b8 Push
	if(var_5794_object == 0) goto Label_10172; // 0x27b9 JumpB
	Remove(); // 0x27ba ObjFunc
	
Label_10172:
	var_5795_string = "k3q04KapellaGotoDanko"; // 0x27bc PushS
	FindMark(var_5779_object, var_5795_string); // 0x27bd ObjFunc
	var_5796_object = var_5779_object; // 0x27bf Push
	if(var_5796_object == 0) goto Label_10179; // 0x27c0 JumpB
	Remove(); // 0x27c1 ObjFunc
	
Label_10179:
	var_5797_string = "k3q03EvaGotoSklad"; // 0x27c3 PushS
	FindMark(var_5779_object, var_5797_string); // 0x27c4 ObjFunc
	var_5798_object = var_5779_object; // 0x27c6 Push
	if(var_5798_object == 0) goto Label_10186; // 0x27c7 JumpB
	Remove(); // 0x27c8 ObjFunc
	
Label_10186:
	var_5799_bool = 0; var_5800_int = 0; // 0x27ca PushV
	var_5800_int = 337; // 0x27cb MovI
	func_11136(var_5799_bool, var_5800_int); // 0x27cc NEW_2
	var_5801_bool = 0; var_5802_int = 0; // 0x27ce PushV
	var_5802_int = 344; // 0x27cf MovI
	func_11136(var_5801_bool, var_5802_int); // 0x27d0 NEW_2
	var_5803_bool = 0; var_5804_int = 0; // 0x27d2 PushV
	var_5804_int = 350; // 0x27d3 MovI
	func_11136(var_5803_bool, var_5804_int); // 0x27d4 NEW_2
	var_5805_bool = 0; var_5806_int = 0; // 0x27d6 PushV
	var_5806_int = 354; // 0x27d7 MovI
	func_11136(var_5805_bool, var_5806_int); // 0x27d8 NEW_2
	return 4; // 0x27da Return
}


func_11153(var_4773_int, var_4774_int, var_4775_int, var_4776_float)
{
	var_4777_int = 0; var_4778_int = 0; // 0x2b91 PushV
	AddMessage(var_4774_int, var_4775_int, var_4776_float, var_4778_int); // 0x2b92 Func
	var_4779_int = 6; // 0x2b94 PushI
	SendWorldWndMessage(var_4779_int); // 0x2b95 Func
	var_4773_int = var_4778_int; // 0x2b97 Mov
	return 2; // 0x2b98 Return
}


func_11161(var_4718_object)
{
	var_4719_object = Obj(); var_4720_object = Obj(); var_4721_object = Obj(); var_4722_object = Obj(); // 0x2b99 PushV
	GetMainOutdoorScene(var_4721_object); // 0x2b9a Func
	var_4723_bool = var_4721_object == 0; // 0x2b9c NullEq
	if(var_4723_bool == 0) goto Label_11172; // 0x2b9d JumpB
	var_4724_string = "Can't find main outdoor scene"; // 0x2b9e PushS
	Trace(var_4724_string); // 0x2b9f Func
	var_4722_object = 0; // 0x2ba1 SetNull
	var_4718_object = var_4722_object; // 0x2ba2 Mov
	return 4; // 0x2ba3 Return
	
Label_11172:
	GetMap(var_4722_object); // 0x2ba4 ObjFunc
	var_4718_object = var_4722_object; // 0x2ba6 Mov
	return 4; // 0x2ba7 Return
}


func_5020(var_1247_int, var_1248_int, var_1249_object, var_1250_object, var_1251_object, var_1252_object)
{
	var_1253_int = 0; // 0x139d PushI
	var_1254_bool = var_1248_int == var_1253_int; // 0x139e Eq
	if(var_1254_bool == 0) goto Label_5060; // 0x139f JumpB
	var_1255_int = 0; var_1256_bool = 0; // 0x13a0 PushV
	var_1255_int = 3; // 0x13a1 MovI
	var_1256_bool = 0; // 0x13a2 MovB
	func_796(var_1255_int, var_1256_bool); // 0x13a3 NEW_2
	var_1257_int = 0; var_1258_bool = 0; var_1259_int = 0; // 0x13a5 PushV
	var_1257_int = 3; // 0x13a6 MovI
	var_1258_bool = 0; // 0x13a7 MovB
	var_1259_int = 1; // 0x13a8 MovI
	func_813(var_1257_int, var_1258_bool, var_1259_int); // 0x13a9 NEW_2
	var_1260_int = 0; var_1261_int = 0; var_1262_object = Obj(); var_1263_object = Obj(); var_1264_object = Obj(); // 0x13ab PushV
	var_1260_int = 3; // 0x13ac MovI
	var_1261_int = var_1247_int; // 0x13ad Mov
	var_1262_object = var_1249_object; // 0x13ae Mov
	var_1263_object = var_1250_object; // 0x13af Mov
	var_1264_object = var_1251_object; // 0x13b0 Mov
	func_622(var_1261_int, var_1262_object, var_1263_object, var_1264_object); // 0x13b1 NEW_2
	var_1265_object = Obj(); var_1266_int = 0; // 0x13b3 PushV
	var_1265_object = var_1252_object; // 0x13b4 Mov
	var_1266_int = 0; // 0x13b5 MovI
	func_305(var_1266_int); // 0x13b6 NEW_2
	var_1267_int = 0; var_1268_bool = 0; var_1269_int = 0; // 0x13b8 PushV
	var_1267_int = 3; // 0x13b9 MovI
	var_1268_bool = 0; // 0x13ba MovB
	var_1269_int = 7; // 0x13bb MovI
	func_870(var_1267_int, var_1268_bool, var_1269_int); // 0x13bc NEW_2
	var_1270_int = 0; var_1271_bool = 0; var_1272_int = 0; // 0x13be PushV
	var_1270_int = 3; // 0x13bf MovI
	var_1271_bool = 0; // 0x13c0 MovB
	var_1272_int = 7; // 0x13c1 MovI
	func_932(var_1270_int, var_1271_bool, var_1272_int); // 0x13c2 NEW_2
	
Label_5060:
	var_1273_int = 0; var_1274_int = 0; // 0x13c4 PushV
	var_1273_int = 3; // 0x13c5 MovI
	var_1274_int = var_1248_int; // 0x13c6 Mov
	func_983(var_1273_int, var_1274_int); // 0x13c7 NEW_2
	var_1290_int = 0; var_1291_int = 0; var_1292_int = 0; // 0x13c9 PushV
	var_1290_int = 3; // 0x13ca MovI
	var_1291_int = var_1247_int; // 0x13cb Mov
	var_1292_int = var_1248_int; // 0x13cc Mov
	func_1897(var_1290_int, var_1291_int, var_1292_int); // 0x13cd NEW_2
	return 0; // 0x13cf Return
}


func_9120(var_1987_int, var_1988_int, var_1989_int)
{
	var_1990_object = Obj(); var_1991_object = Obj(); var_1992_object = Obj(); var_1993_object = Obj(); var_1994_object = Obj(); var_1995_object = Obj(); var_1996_object = Obj(); var_1997_object = Obj(); // 0x23a0 PushV
	var_1998_object = GlobalVars[8]; // 0x23a1 PushGE
	get(var_1994_object, var_1987_int); // 0x23a2 ObjFunc
	var_1999_object = GlobalVars[9]; // 0x23a4 PushGE
	get(var_1995_object, var_1987_int); // 0x23a5 ObjFunc
	var_2000_object = GlobalVars[10]; // 0x23a7 PushGE
	get(var_1996_object, var_1987_int); // 0x23a8 ObjFunc
	var_2001_object = GlobalVars[13]; // 0x23aa PushGE
	get(var_1997_object, var_1987_int); // 0x23ab ObjFunc
	var_2002_int = 0; // 0x23ad PushI
	var_2003_bool = var_1987_int == var_2002_int; // 0x23ae Eq
	if(var_2003_bool == 0) goto Label_9146; // 0x23af JumpB
	var_2004_int = 0; var_2005_int = 0; var_2006_object = Obj(); var_2007_object = Obj(); var_2008_object = Obj(); var_2009_object = Obj(); // 0x23b0 PushV
	var_2004_int = var_1988_int; // 0x23b1 Mov
	var_2005_int = var_1989_int; // 0x23b2 Mov
	var_2006_object = var_1994_object; // 0x23b3 Mov
	var_2007_object = var_1995_object; // 0x23b4 Mov
	var_2008_object = var_1996_object; // 0x23b5 Mov
	var_2009_object = var_1997_object; // 0x23b6 Mov
	func_4439(var_2004_int, var_2005_int, var_2006_object, var_2007_object, var_2008_object, var_2009_object); // 0x23b7 NEW_2
	goto Label_9340; // 0x23b9 Jump
	
Label_9340:
	return 8; // 0x247c Return
	
Label_9146:
	var_2272_int = 1; // 0x23ba PushI
	var_2273_bool = var_1987_int == var_2272_int; // 0x23bb Eq
	if(var_2273_bool == 0) goto Label_9159; // 0x23bc JumpB
	var_2274_int = 0; var_2275_int = 0; var_2276_object = Obj(); var_2277_object = Obj(); var_2278_object = Obj(); var_2279_object = Obj(); // 0x23bd PushV
	var_2274_int = var_1988_int; // 0x23be Mov
	var_2275_int = var_1989_int; // 0x23bf Mov
	var_2276_object = var_1994_object; // 0x23c0 Mov
	var_2277_object = var_1995_object; // 0x23c1 Mov
	var_2278_object = var_1996_object; // 0x23c2 Mov
	var_2279_object = var_1997_object; // 0x23c3 Mov
	func_4636(var_2274_int, var_2275_int, var_2276_object, var_2277_object, var_2278_object, var_2279_object); // 0x23c4 NEW_2
	goto Label_9340; // 0x23c6 Jump
	
Label_9159:
	var_2404_int = 2; // 0x23c7 PushI
	var_2405_bool = var_1987_int == var_2404_int; // 0x23c8 Eq
	if(var_2405_bool == 0) goto Label_9172; // 0x23c9 JumpB
	var_2406_int = 0; var_2407_int = 0; var_2408_object = Obj(); var_2409_object = Obj(); var_2410_object = Obj(); var_2411_object = Obj(); // 0x23ca PushV
	var_2406_int = var_1988_int; // 0x23cb Mov
	var_2407_int = var_1989_int; // 0x23cc Mov
	var_2408_object = var_1994_object; // 0x23cd Mov
	var_2409_object = var_1995_object; // 0x23ce Mov
	var_2410_object = var_1996_object; // 0x23cf Mov
	var_2411_object = var_1997_object; // 0x23d0 Mov
	func_4842(var_2406_int, var_2407_int, var_2408_object, var_2409_object, var_2410_object, var_2411_object); // 0x23d1 NEW_2
	goto Label_9340; // 0x23d3 Jump
	
Label_9172:
	var_2550_int = 3; // 0x23d4 PushI
	var_2551_bool = var_1987_int == var_2550_int; // 0x23d5 Eq
	if(var_2551_bool == 0) goto Label_9185; // 0x23d6 JumpB
	var_2552_int = 0; var_2553_int = 0; var_2554_object = Obj(); var_2555_object = Obj(); var_2556_object = Obj(); var_2557_object = Obj(); // 0x23d7 PushV
	var_2552_int = var_1988_int; // 0x23d8 Mov
	var_2553_int = var_1989_int; // 0x23d9 Mov
	var_2554_object = var_1994_object; // 0x23da Mov
	var_2555_object = var_1995_object; // 0x23db Mov
	var_2556_object = var_1996_object; // 0x23dc Mov
	var_2557_object = var_1997_object; // 0x23dd Mov
	func_5072(var_2552_int, var_2553_int, var_2554_object, var_2555_object, var_2556_object, var_2557_object); // 0x23de NEW_2
	goto Label_9340; // 0x23e0 Jump
	
Label_9185:
	var_2583_int = 4; // 0x23e1 PushI
	var_2584_bool = var_1987_int == var_2583_int; // 0x23e2 Eq
	if(var_2584_bool == 0) goto Label_9198; // 0x23e3 JumpB
	var_2585_int = 0; var_2586_int = 0; var_2587_object = Obj(); var_2588_object = Obj(); var_2589_object = Obj(); var_2590_object = Obj(); // 0x23e4 PushV
	var_2585_int = var_1988_int; // 0x23e5 Mov
	var_2586_int = var_1989_int; // 0x23e6 Mov
	var_2587_object = var_1994_object; // 0x23e7 Mov
	var_2588_object = var_1995_object; // 0x23e8 Mov
	var_2589_object = var_1996_object; // 0x23e9 Mov
	var_2590_object = var_1997_object; // 0x23ea Mov
	func_5290(var_2585_int, var_2586_int, var_2587_object, var_2588_object, var_2589_object, var_2590_object); // 0x23eb NEW_2
	goto Label_9340; // 0x23ed Jump
	
Label_9198:
	var_2616_int = 5; // 0x23ee PushI
	var_2617_bool = var_1987_int == var_2616_int; // 0x23ef Eq
	if(var_2617_bool == 0) goto Label_9211; // 0x23f0 JumpB
	var_2618_int = 0; var_2619_int = 0; var_2620_object = Obj(); var_2621_object = Obj(); var_2622_object = Obj(); var_2623_object = Obj(); // 0x23f1 PushV
	var_2618_int = var_1988_int; // 0x23f2 Mov
	var_2619_int = var_1989_int; // 0x23f3 Mov
	var_2620_object = var_1994_object; // 0x23f4 Mov
	var_2621_object = var_1995_object; // 0x23f5 Mov
	var_2622_object = var_1996_object; // 0x23f6 Mov
	var_2623_object = var_1997_object; // 0x23f7 Mov
	func_5532(var_2618_int, var_2619_int, var_2620_object, var_2621_object, var_2622_object, var_2623_object); // 0x23f8 NEW_2
	goto Label_9340; // 0x23fa Jump
	
Label_9211:
	var_2649_int = 6; // 0x23fb PushI
	var_2650_bool = var_1987_int == var_2649_int; // 0x23fc Eq
	if(var_2650_bool == 0) goto Label_9224; // 0x23fd JumpB
	var_2651_int = 0; var_2652_int = 0; var_2653_object = Obj(); var_2654_object = Obj(); var_2655_object = Obj(); var_2656_object = Obj(); // 0x23fe PushV
	var_2651_int = var_1988_int; // 0x23ff Mov
	var_2652_int = var_1989_int; // 0x2400 Mov
	var_2653_object = var_1994_object; // 0x2401 Mov
	var_2654_object = var_1995_object; // 0x2402 Mov
	var_2655_object = var_1996_object; // 0x2403 Mov
	var_2656_object = var_1997_object; // 0x2404 Mov
	func_5645(); // 0x2405 NEW_2
	goto Label_9340; // 0x2407 Jump
	
Label_9224:
	var_2659_int = 7; // 0x2408 PushI
	var_2660_bool = var_1987_int == var_2659_int; // 0x2409 Eq
	if(var_2660_bool == 0) goto Label_9237; // 0x240a JumpB
	var_2661_int = 0; var_2662_int = 0; var_2663_object = Obj(); var_2664_object = Obj(); var_2665_object = Obj(); var_2666_object = Obj(); // 0x240b PushV
	var_2661_int = var_1988_int; // 0x240c Mov
	var_2662_int = var_1989_int; // 0x240d Mov
	var_2663_object = var_1994_object; // 0x240e Mov
	var_2664_object = var_1995_object; // 0x240f Mov
	var_2665_object = var_1996_object; // 0x2410 Mov
	var_2666_object = var_1997_object; // 0x2411 Mov
	func_5755(var_2661_int, var_2662_int, var_2663_object, var_2664_object, var_2665_object, var_2666_object); // 0x2412 NEW_2
	goto Label_9340; // 0x2414 Jump
	
Label_9237:
	var_2798_int = 8; // 0x2415 PushI
	var_2799_bool = var_1987_int == var_2798_int; // 0x2416 Eq
	if(var_2799_bool == 0) goto Label_9250; // 0x2417 JumpB
	var_2800_int = 0; var_2801_int = 0; var_2802_object = Obj(); var_2803_object = Obj(); var_2804_object = Obj(); var_2805_object = Obj(); // 0x2418 PushV
	var_2800_int = var_1988_int; // 0x2419 Mov
	var_2801_int = var_1989_int; // 0x241a Mov
	var_2802_object = var_1994_object; // 0x241b Mov
	var_2803_object = var_1995_object; // 0x241c Mov
	var_2804_object = var_1996_object; // 0x241d Mov
	var_2805_object = var_1997_object; // 0x241e Mov
	func_5955(var_2800_int, var_2801_int, var_2802_object, var_2803_object, var_2804_object, var_2805_object); // 0x241f NEW_2
	goto Label_9340; // 0x2421 Jump
	
Label_9250:
	var_2831_int = 9; // 0x2422 PushI
	var_2832_bool = var_1987_int == var_2831_int; // 0x2423 Eq
	if(var_2832_bool == 0) goto Label_9263; // 0x2424 JumpB
	var_2833_int = 0; var_2834_int = 0; var_2835_object = Obj(); var_2836_object = Obj(); var_2837_object = Obj(); var_2838_object = Obj(); // 0x2425 PushV
	var_2833_int = var_1988_int; // 0x2426 Mov
	var_2834_int = var_1989_int; // 0x2427 Mov
	var_2835_object = var_1994_object; // 0x2428 Mov
	var_2836_object = var_1995_object; // 0x2429 Mov
	var_2837_object = var_1996_object; // 0x242a Mov
	var_2838_object = var_1997_object; // 0x242b Mov
	func_6158(var_2833_int, var_2834_int, var_2835_object, var_2836_object, var_2837_object, var_2838_object); // 0x242c NEW_2
	goto Label_9340; // 0x242e Jump
	
Label_9263:
	var_2864_int = 10; // 0x242f PushI
	var_2865_bool = var_1987_int == var_2864_int; // 0x2430 Eq
	if(var_2865_bool == 0) goto Label_9276; // 0x2431 JumpB
	var_2866_int = 0; var_2867_int = 0; var_2868_object = Obj(); var_2869_object = Obj(); var_2870_object = Obj(); var_2871_object = Obj(); // 0x2432 PushV
	var_2866_int = var_1988_int; // 0x2433 Mov
	var_2867_int = var_1989_int; // 0x2434 Mov
	var_2868_object = var_1994_object; // 0x2435 Mov
	var_2869_object = var_1995_object; // 0x2436 Mov
	var_2870_object = var_1996_object; // 0x2437 Mov
	var_2871_object = var_1997_object; // 0x2438 Mov
	func_6367(var_2866_int, var_2867_int, var_2868_object, var_2869_object, var_2870_object, var_2871_object); // 0x2439 NEW_2
	goto Label_9340; // 0x243b Jump
	
Label_9276:
	var_2897_int = 11; // 0x243c PushI
	var_2898_bool = var_1987_int == var_2897_int; // 0x243d Eq
	if(var_2898_bool == 0) goto Label_9289; // 0x243e JumpB
	var_2899_int = 0; var_2900_int = 0; var_2901_object = Obj(); var_2902_object = Obj(); var_2903_object = Obj(); var_2904_object = Obj(); // 0x243f PushV
	var_2899_int = var_1988_int; // 0x2440 Mov
	var_2900_int = var_1989_int; // 0x2441 Mov
	var_2901_object = var_1994_object; // 0x2442 Mov
	var_2902_object = var_1995_object; // 0x2443 Mov
	var_2903_object = var_1996_object; // 0x2444 Mov
	var_2904_object = var_1997_object; // 0x2445 Mov
	func_6579(var_2899_int, var_2900_int, var_2901_object, var_2902_object, var_2903_object, var_2904_object); // 0x2446 NEW_2
	goto Label_9340; // 0x2448 Jump
	
Label_9289:
	var_2930_int = 12; // 0x2449 PushI
	var_2931_bool = var_1987_int == var_2930_int; // 0x244a Eq
	if(var_2931_bool == 0) goto Label_9302; // 0x244b JumpB
	var_2932_int = 0; var_2933_int = 0; var_2934_object = Obj(); var_2935_object = Obj(); var_2936_object = Obj(); var_2937_object = Obj(); // 0x244c PushV
	var_2932_int = var_1988_int; // 0x244d Mov
	var_2933_int = var_1989_int; // 0x244e Mov
	var_2934_object = var_1994_object; // 0x244f Mov
	var_2935_object = var_1995_object; // 0x2450 Mov
	var_2936_object = var_1996_object; // 0x2451 Mov
	var_2937_object = var_1997_object; // 0x2452 Mov
	func_6776(var_2932_int, var_2933_int, var_2934_object, var_2935_object, var_2936_object, var_2937_object); // 0x2453 NEW_2
	goto Label_9340; // 0x2455 Jump
	
Label_9302:
	var_2963_int = 13; // 0x2456 PushI
	var_2964_bool = var_1987_int == var_2963_int; // 0x2457 Eq
	if(var_2964_bool == 0) goto Label_9315; // 0x2458 JumpB
	var_2965_int = 0; var_2966_int = 0; var_2967_object = Obj(); var_2968_object = Obj(); var_2969_object = Obj(); var_2970_object = Obj(); // 0x2459 PushV
	var_2965_int = var_1988_int; // 0x245a Mov
	var_2966_int = var_1989_int; // 0x245b Mov
	var_2967_object = var_1994_object; // 0x245c Mov
	var_2968_object = var_1995_object; // 0x245d Mov
	var_2969_object = var_1996_object; // 0x245e Mov
	var_2970_object = var_1997_object; // 0x245f Mov
	func_6979(var_2965_int, var_2966_int, var_2967_object, var_2968_object, var_2969_object, var_2970_object); // 0x2460 NEW_2
	goto Label_9340; // 0x2462 Jump
	
Label_9315:
	var_2996_int = 14; // 0x2463 PushI
	var_2997_bool = var_1987_int == var_2996_int; // 0x2464 Eq
	if(var_2997_bool == 0) goto Label_9328; // 0x2465 JumpB
	var_2998_int = 0; var_2999_int = 0; var_3000_object = Obj(); var_3001_object = Obj(); var_3002_object = Obj(); var_3003_object = Obj(); // 0x2466 PushV
	var_2998_int = var_1988_int; // 0x2467 Mov
	var_2999_int = var_1989_int; // 0x2468 Mov
	var_3000_object = var_1994_object; // 0x2469 Mov
	var_3001_object = var_1995_object; // 0x246a Mov
	var_3002_object = var_1996_object; // 0x246b Mov
	var_3003_object = var_1997_object; // 0x246c Mov
	func_7179(var_2998_int, var_2999_int, var_3000_object, var_3001_object, var_3002_object, var_3003_object); // 0x246d NEW_2
	goto Label_9340; // 0x246f Jump
	
Label_9328:
	var_3135_int = 15; // 0x2470 PushI
	var_3136_bool = var_1987_int == var_3135_int; // 0x2471 Eq
	if(var_3136_bool == 0) goto Label_9340; // 0x2472 JumpB
	var_3137_int = 0; var_3138_int = 0; var_3139_object = Obj(); var_3140_object = Obj(); var_3141_object = Obj(); var_3142_object = Obj(); // 0x2473 PushV
	var_3137_int = var_1988_int; // 0x2474 Mov
	var_3138_int = var_1989_int; // 0x2475 Mov
	var_3139_object = var_1994_object; // 0x2476 Mov
	var_3140_object = var_1995_object; // 0x2477 Mov
	var_3141_object = var_1996_object; // 0x2478 Mov
	var_3142_object = var_1997_object; // 0x2479 Mov
	func_7361(var_3137_int, var_3138_int, var_3139_object, var_3140_object, var_3141_object, var_3142_object); // 0x247a NEW_2
}


func_932(var_685_int, var_686_bool, var_687_int)
{
	var_688_string = ""; var_689_object = Obj(); var_690_object = Obj(); var_691_int = 0; var_692_string = ""; var_693_object = Obj(); var_694_string = ""; var_695_object = Obj(); var_696_object = Obj(); var_697_int = 0; var_698_string = ""; var_699_object = Obj(); // 0x3a4 PushV
	var_700_string = "dr_mark"; // 0x3a5 PushS
	var_701_int = 1; // 0x3a6 PushI
	var_702_int = var_685_int + var_701_int; // 0x3a7 Add
	var_694_string = var_700_string + var_702_int; // 0x3a8 Add2
	var_703_string = "br_"; // 0x3a9 PushS
	var_704_int = 1; // 0x3aa PushI
	var_705_int = var_685_int + var_704_int; // 0x3ab Add
	var_706_int = var_703_string + var_705_int; // 0x3ac Add
	FindActor(var_695_object, var_706_int); // 0x3ad Func
	var_707_bool = var_686_bool; // 0x3af Push
	if(var_707_bool == 0) goto Label_958; // 0x3b0 JumpB
	var_708_bool = var_695_object == 0; // 0x3b1 Not
	if(var_708_bool == 0) goto Label_957; // 0x3b2 JumpB
	GetMainOutdoorScene(var_696_object); // 0x3b3 Func
	var_709_string = "br_"; // 0x3b5 PushS
	var_710_int = 1; // 0x3b6 PushI
	var_711_int = var_685_int + var_710_int; // 0x3b7 Add
	var_712_int = var_709_string + var_711_int; // 0x3b8 Add
	var_713_cvector = CVector(0.0, 0.0, 0.0); // 0x3b9 PushVec
	AddActor(var_695_object, var_712_int, var_696_object, var_713_cvector); // 0x3ba Func
	var_696_object = 0; // 0x3bc SetNull
	
Label_957:
	goto Label_962; // 0x3bd Jump
	
Label_962:
	var_697_int = 1; // 0x3c2 MovI
	
Label_963:
	var_714_bool = var_697_int <= var_687_int; // 0x3c3 LE
	if(var_714_bool == 0) goto Label_981; // 0x3c4 JumpB
	var_715_string = "_"; // 0x3c5 PushS
	var_716_int = var_694_string + var_715_string; // 0x3c6 Add
	var_698_string = var_716_int + var_697_int; // 0x3c7 Add2
	FindActor(var_699_object, var_698_string); // 0x3c8 Func
	var_717_object = var_699_object; // 0x3ca Push
	if(var_717_object == 0) goto Label_977; // 0x3cb JumpB
	var_718_bool = 0; var_719_string = ""; var_720_string = ""; // 0x3cc PushV
	var_719_string = var_698_string; // 0x3cd Mov
	var_720_string = "cleanup"; // 0x3ce MovS
	func_239(var_718_bool, var_719_string, var_720_string); // 0x3cf NEW_2
	
Label_977:
	var_699_object = 0; // 0x3d1 SetNull
	var_721_int = 1; // 0x3d2 PushI
	var_697_int = var_697_int + var_721_int; // 0x3d3 Add2
	goto Label_963; // 0x3d4 Jump
	
Label_981:
	return 12; // 0x3d5 Return
	
Label_958:
	var_722_object = var_695_object; // 0x3be Push
	if(var_722_object == 0) goto Label_962; // 0x3bf JumpB
	RemoveActor(var_695_object); // 0x3c0 Func
}


func_11178(var_795_int)
{
	var_796_int = 0; var_797_int = 0; // 0x2baa PushV
	var_798_string = "branch"; // 0x2bab PushS
	GetVariable(var_798_string, var_797_int); // 0x2bac Func
	var_795_int = var_797_int; // 0x2bae Mov
	return 2; // 0x2baf Return
}


func_6059()
{
	var_209_string = "r3_house_2_02"; // 0x17ac PushS
	add(var_209_string); // 0x17ad ObjFunc
	var_210_string = "r3_house3_02_i2"; // 0x17af PushS
	add(var_210_string); // 0x17b0 ObjFunc
	var_211_string = "r3_house3_02"; // 0x17b2 PushS
	add(var_211_string); // 0x17b3 ObjFunc
	var_212_string = "r3_house4_05_i2"; // 0x17b5 PushS
	add(var_212_string); // 0x17b6 ObjFunc
	var_213_string = "r3_house4_05"; // 0x17b8 PushS
	add(var_213_string); // 0x17b9 ObjFunc
	var_214_string = "r3_house4_03_i2"; // 0x17bb PushS
	add(var_214_string); // 0x17bc ObjFunc
	var_215_string = "r3_house4_04_i2"; // 0x17be PushS
	add(var_215_string); // 0x17bf ObjFunc
	var_216_string = "r3_house4_04"; // 0x17c1 PushS
	add(var_216_string); // 0x17c2 ObjFunc
	var_217_string = "r3_house4_01_i2"; // 0x17c4 PushS
	add(var_217_string); // 0x17c5 ObjFunc
	var_218_string = "r3_house4_01"; // 0x17c7 PushS
	add(var_218_string); // 0x17c8 ObjFunc
	var_219_string = "r3_house_2_01"; // 0x17ca PushS
	add(var_219_string); // 0x17cb ObjFunc
	var_220_string = "r3_house4_02_i2"; // 0x17cd PushS
	add(var_220_string); // 0x17ce ObjFunc
	var_221_string = "r3_house4_02"; // 0x17d0 PushS
	add(var_221_string); // 0x17d1 ObjFunc
	var_222_string = "r3_house3_01_i2"; // 0x17d3 PushS
	add(var_222_string); // 0x17d4 ObjFunc
	var_223_string = "r3_house3_01"; // 0x17d6 PushS
	add(var_223_string); // 0x17d7 ObjFunc
	return 0; // 0x17d9 Return
}


func_7083()
{
	var_297_string = "lc_house7_02"; // 0x1bac PushS
	add(var_297_string); // 0x1bad ObjFunc
	var_298_string = "lc_house7_03"; // 0x1baf PushS
	add(var_298_string); // 0x1bb0 ObjFunc
	var_299_string = "lc_house7_04"; // 0x1bb2 PushS
	add(var_299_string); // 0x1bb3 ObjFunc
	var_300_string = "lc_house7_05"; // 0x1bb5 PushS
	add(var_300_string); // 0x1bb6 ObjFunc
	var_301_string = "lc_house7_06"; // 0x1bb8 PushS
	add(var_301_string); // 0x1bb9 ObjFunc
	var_302_string = "lc_house7_07"; // 0x1bbb PushS
	add(var_302_string); // 0x1bbc ObjFunc
	var_303_string = "lc_House6_02"; // 0x1bbe PushS
	add(var_303_string); // 0x1bbf ObjFunc
	var_304_string = "lc_house7_01"; // 0x1bc1 PushS
	add(var_304_string); // 0x1bc2 ObjFunc
	var_305_string = "lc_house_2_02"; // 0x1bc4 PushS
	add(var_305_string); // 0x1bc5 ObjFunc
	var_306_string = "lc_House6_01"; // 0x1bc7 PushS
	add(var_306_string); // 0x1bc8 ObjFunc
	var_307_string = "lc_house3_03_i2"; // 0x1bca PushS
	add(var_307_string); // 0x1bcb ObjFunc
	var_308_string = "lc_house3_03"; // 0x1bcd PushS
	add(var_308_string); // 0x1bce ObjFunc
	var_309_string = "lc_House6_03"; // 0x1bd0 PushS
	add(var_309_string); // 0x1bd1 ObjFunc
	var_310_string = "lc_House6_04"; // 0x1bd3 PushS
	add(var_310_string); // 0x1bd4 ObjFunc
	return 0; // 0x1bd6 Return
}


func_11184(var_4307_bool, var_4308_int)
{
	var_4310_int = 0; var_4311_int = 0; var_4312_int = 0; var_4313_int = 0; var_4314_int = 0; var_4315_int = 0; var_4316_int = 0; var_4317_int = 0; // 0x2bb0 PushV
	var_4318_bool = 0; // 0x2bb1 PushV
	var_4318_bool = 0; // 0x2bb2 MovB
	var_4319_int = 42000; // 0x2bb3 PushI
	var_4320_bool = var_4308_int > var_4319_int; // 0x2bb4 GT
	if(var_4320_bool == 0) goto Label_11194; // 0x2bb5 JumpB
	var_4321_int = 42288; // 0x2bb6 PushI
	var_4322_bool = var_4308_int < var_4321_int; // 0x2bb7 LT
	if(var_4322_bool == 0) goto Label_11194; // 0x2bb8 JumpB
	var_4318_bool = 1; // 0x2bb9 MovB
	
Label_11194:
	if(var_4318_bool == 0) goto Label_11211; // 0x2bba JumpB
	var_4323_int = 42000; // 0x2bbb PushI
	var_4324_int = var_4308_int - var_4323_int; // 0x2bbc Sub
	var_4325_int = 24; // 0x2bbd PushI
	var_4314_int = var_4324_int / var_4324_int; // 0x2bbe Div2
	var_4326_int = 42000; // 0x2bbf PushI
	var_4327_int = var_4308_int - var_4326_int; // 0x2bc0 Sub
	var_4328_int = 24; // 0x2bc1 PushI
	var_4315_int = var_4327_int % var_4328_int; // 0x2bc2 Mod2
	var_4329_int = 0; var_4330_int = 0; // 0x2bc3 PushV
	var_4331_int = 1; // 0x2bc4 PushI
	var_4329_int = var_4314_int + var_4331_int; // 0x2bc5 Add2
	var_4330_int = var_4315_int; // 0x2bc6 Mov
	func_8269(var_4329_int, var_4330_int); // 0x2bc7 NEW_2
	var_4307_bool = 1; // 0x2bc9 MovB
	return 8; // 0x2bca Return
	
Label_11211:
	var_4356_bool = 0; // 0x2bcb PushV
	var_4356_bool = 0; // 0x2bcc MovB
	var_4357_int = 40000; // 0x2bcd PushI
	var_4358_bool = var_4308_int > var_4357_int; // 0x2bce GT
	if(var_4358_bool == 0) goto Label_11220; // 0x2bcf JumpB
	var_4359_int = 40288; // 0x2bd0 PushI
	var_4360_bool = var_4308_int < var_4359_int; // 0x2bd1 LT
	if(var_4360_bool == 0) goto Label_11220; // 0x2bd2 JumpB
	var_4356_bool = 1; // 0x2bd3 MovB
	
Label_11220:
	if(var_4356_bool == 0) goto Label_11243; // 0x2bd4 JumpB
	var_4361_int = 40000; // 0x2bd5 PushI
	var_4362_int = var_4308_int - var_4361_int; // 0x2bd6 Sub
	var_4363_int = 24; // 0x2bd7 PushI
	var_4316_int = var_4362_int / var_4362_int; // 0x2bd8 Div2
	var_4364_int = 40000; // 0x2bd9 PushI
	var_4365_int = var_4308_int - var_4364_int; // 0x2bda Sub
	var_4366_int = 24; // 0x2bdb PushI
	var_4317_int = var_4365_int % var_4366_int; // 0x2bdc Mod2
	var_4367_int = 0; var_4368_int = 0; // 0x2bdd PushV
	var_4369_int = 1; // 0x2bde PushI
	var_4367_int = var_4316_int + var_4369_int; // 0x2bdf Add2
	var_4368_int = var_4317_int; // 0x2be0 Mov
	func_8314(var_4367_int, var_4368_int); // 0x2be1 NEW_2
	var_4689_int = 0; var_4690_int = 0; // 0x2be3 PushV
	var_4691_int = 1; // 0x2be4 PushI
	var_4689_int = var_4316_int + var_4691_int; // 0x2be5 Add2
	var_4690_int = var_4317_int; // 0x2be6 Mov
	func_12934(var_4689_int, var_4690_int); // 0x2be7 NEW_2
	var_4307_bool = 1; // 0x2be9 MovB
	return 8; // 0x2bea Return
	
Label_11243:
	var_4307_bool = 0; // 0x2beb MovB
	return 8; // 0x2bec Return
}


func_12224()
{
	var_4582_object = GlobalVars[16]; // 0x2fc1 PushGE
	var_4582_object = 0; // 0x2fc2 SetNull
	GlobalVars[16] = var_4582_object; // 0x2fc3 PopGE
	var_4583_int = 45095; // 0x2fc4 PushI
	var_4584_float = 24.0; // 0x2fc5 PushF
	SetTimeEvent(var_4583_int, var_4584_float); // 0x2fc6 Func
	var_4585_object = Obj(); var_4586_object = Obj(); // 0x2fc8 PushV
	var_4587_object = GlobalVars[16]; // 0x2fc9 PushGE
	var_4585_object = var_4587_object; // 0x2fca Mov
	var_4588_object = GlobalVars[16]; // 0x2fcc PushGE
	var_4586_object = var_4588_object; // 0x2fcd Mov
	func_10726(); // 0x2fcf NEW_2
	var_4601_object = Obj(); var_4602_object = Obj(); // 0x2fd1 PushV
	var_4603_object = GlobalVars[16]; // 0x2fd2 PushGE
	var_4601_object = var_4603_object; // 0x2fd3 Mov
	var_4604_object = GlobalVars[16]; // 0x2fd5 PushGE
	var_4602_object = var_4604_object; // 0x2fd6 Mov
	func_9899(); // 0x2fd8 NEW_2
	var_4607_object = Obj(); var_4608_object = Obj(); // 0x2fda PushV
	var_4609_object = GlobalVars[16]; // 0x2fdb PushGE
	var_4607_object = var_4609_object; // 0x2fdc Mov
	var_4610_object = GlobalVars[16]; // 0x2fde PushGE
	var_4608_object = var_4610_object; // 0x2fdf Mov
	func_10745(); // 0x2fe1 NEW_2
	var_4613_object = Obj(); var_4614_object = Obj(); // 0x2fe3 PushV
	var_4615_object = GlobalVars[16]; // 0x2fe4 PushGE
	var_4613_object = var_4615_object; // 0x2fe5 Mov
	var_4616_object = GlobalVars[16]; // 0x2fe7 PushGE
	var_4614_object = var_4616_object; // 0x2fe8 Mov
	func_9885(); // 0x2fea NEW_2
	var_4619_object = Obj(); var_4620_object = Obj(); // 0x2fec PushV
	var_4621_object = GlobalVars[16]; // 0x2fed PushGE
	var_4619_object = var_4621_object; // 0x2fee Mov
	var_4622_object = GlobalVars[16]; // 0x2ff0 PushGE
	var_4620_object = var_4622_object; // 0x2ff1 Mov
	func_9892(); // 0x2ff3 NEW_2
	var_4625_object = Obj(); var_4626_object = Obj(); // 0x2ff5 PushV
	var_4627_object = GlobalVars[16]; // 0x2ff6 PushGE
	var_4625_object = var_4627_object; // 0x2ff7 Mov
	var_4628_object = GlobalVars[16]; // 0x2ff9 PushGE
	var_4626_object = var_4628_object; // 0x2ffa Mov
	func_10557(); // 0x2ffc NEW_2
	var_4631_object = Obj(); var_4632_object = Obj(); // 0x2ffe PushV
	var_4633_object = GlobalVars[16]; // 0x2fff PushGE
	var_4631_object = var_4633_object; // 0x3000 Mov
	var_4634_object = GlobalVars[16]; // 0x3002 PushGE
	var_4632_object = var_4634_object; // 0x3003 Mov
	func_10761(); // 0x3005 NEW_2
	var_4637_object = Obj(); var_4638_object = Obj(); // 0x3007 PushV
	var_4639_object = GlobalVars[16]; // 0x3008 PushGE
	var_4637_object = var_4639_object; // 0x3009 Mov
	var_4640_object = GlobalVars[16]; // 0x300b PushGE
	var_4638_object = var_4640_object; // 0x300c Mov
	func_10564(); // 0x300e NEW_2
	var_4643_object = Obj(); var_4644_object = Obj(); // 0x3010 PushV
	var_4645_object = GlobalVars[16]; // 0x3011 PushGE
	var_4643_object = var_4645_object; // 0x3012 Mov
	var_4646_object = GlobalVars[16]; // 0x3014 PushGE
	var_4644_object = var_4646_object; // 0x3015 Mov
	func_10689(); // 0x3017 NEW_2
	var_4670_object = Obj(); var_4671_string = ""; // 0x3019 PushV
	var_4671_string = "volonteers_klara"; // 0x301a MovS
	func_137(var_4670_object, var_4671_string); // 0x301b NEW_2
	var_4678_object = Obj(); var_4679_string = ""; // 0x301d PushV
	var_4679_string = "quest_k1_01"; // 0x301e MovS
	func_137(var_4678_object, var_4679_string); // 0x301f NEW_2
	var_4680_object = Obj(); var_4681_string = ""; // 0x3021 PushV
	var_4681_string = "klara2_positioner"; // 0x3022 MovS
	func_137(var_4680_object, var_4681_string); // 0x3023 NEW_2
	var_4682_object = Obj(); var_4683_string = ""; // 0x3025 PushV
	var_4683_string = "klara2_svita_positioner"; // 0x3026 MovS
	func_137(var_4682_object, var_4683_string); // 0x3027 NEW_2
	var_4684_object = Obj(); var_4685_string = ""; // 0x3029 PushV
	var_4685_string = "klara2_npc_positioner"; // 0x302a MovS
	func_137(var_4684_object, var_4685_string); // 0x302b NEW_2
	var_4686_int = 45170; // 0x302d PushI
	var_4687_float = 199.02; // 0x302e PushF
	SetTimeEvent(var_4686_int, var_4687_float); // 0x302f Func
	var_4688_int = 45275; // 0x3031 PushI
	var_4689_float = 216.0; // 0x3032 PushF
	SetTimeEvent(var_4688_int, var_4689_float); // 0x3033 Func
	var_4690_int = 45276; // 0x3035 PushI
	var_4691_float = 240.0; // 0x3036 PushF
	SetTimeEvent(var_4690_int, var_4691_float); // 0x3037 Func
	var_4692_int = 45273; // 0x3039 PushI
	var_4693_float = 168.0; // 0x303a PushF
	SetTimeEvent(var_4692_int, var_4693_float); // 0x303b Func
	var_4694_int = 45274; // 0x303d PushI
	var_4695_float = 192.0; // 0x303e PushF
	SetTimeEvent(var_4694_int, var_4695_float); // 0x303f Func
	var_4696_int = 45277; // 0x3041 PushI
	var_4697_float = 264.0; // 0x3042 PushF
	SetTimeEvent(var_4696_int, var_4697_float); // 0x3043 Func
	var_4698_int = 45278; // 0x3045 PushI
	var_4699_float = 24.0; // 0x3046 PushF
	SetTimeEvent(var_4698_int, var_4699_float); // 0x3047 Func
	var_4700_int = 45169; // 0x3049 PushI
	var_4701_float = 175.02; // 0x304a PushF
	SetTimeEvent(var_4700_int, var_4701_float); // 0x304b Func
	var_4702_int = 45168; // 0x304d PushI
	var_4703_float = 151.02; // 0x304e PushF
	SetTimeEvent(var_4702_int, var_4703_float); // 0x304f Func
	var_4704_int = 45258; // 0x3051 PushI
	var_4705_float = 64.26; // 0x3052 PushF
	SetTimeEvent(var_4704_int, var_4705_float); // 0x3053 Func
	var_4706_int = 45272; // 0x3055 PushI
	var_4707_float = 144.0; // 0x3056 PushF
	SetTimeEvent(var_4706_int, var_4707_float); // 0x3057 Func
	var_4708_int = 45167; // 0x3059 PushI
	var_4709_float = 127.02; // 0x305a PushF
	SetTimeEvent(var_4708_int, var_4709_float); // 0x305b Func
	var_4710_int = 45166; // 0x305d PushI
	var_4711_float = 103.02; // 0x305e PushF
	SetTimeEvent(var_4710_int, var_4711_float); // 0x305f Func
	var_4712_int = 45165; // 0x3061 PushI
	var_4713_float = 79.02; // 0x3062 PushF
	SetTimeEvent(var_4712_int, var_4713_float); // 0x3063 Func
	var_4714_int = 45164; // 0x3065 PushI
	var_4715_float = 55.02; // 0x3066 PushF
	SetTimeEvent(var_4714_int, var_4715_float); // 0x3067 Func
	var_4716_int = 45163; // 0x3069 PushI
	var_4717_float = 31.02; // 0x306a PushF
	SetTimeEvent(var_4716_int, var_4717_float); // 0x306b Func
	var_4718_int = 45110; // 0x306d PushI
	var_4719_float = 48.0; // 0x306e PushF
	SetTimeEvent(var_4718_int, var_4719_float); // 0x306f Func
	var_4720_int = 45109; // 0x3071 PushI
	var_4721_float = 264.0; // 0x3072 PushF
	SetTimeEvent(var_4720_int, var_4721_float); // 0x3073 Func
	var_4722_int = 45243; // 0x3075 PushI
	var_4723_float = 42.25; // 0x3076 PushF
	SetTimeEvent(var_4722_int, var_4723_float); // 0x3077 Func
	var_4724_int = 45108; // 0x3079 PushI
	var_4725_float = 240.0; // 0x307a PushF
	SetTimeEvent(var_4724_int, var_4725_float); // 0x307b Func
	var_4726_int = 45107; // 0x307d PushI
	var_4727_float = 224.25999; // 0x307e PushF
	SetTimeEvent(var_4726_int, var_4727_float); // 0x307f Func
	var_4728_int = 45287; // 0x3081 PushI
	var_4729_float = 249.0; // 0x3082 PushF
	SetTimeEvent(var_4728_int, var_4729_float); // 0x3083 Func
	var_4730_int = 45288; // 0x3085 PushI
	var_4731_float = 271.25; // 0x3086 PushF
	SetTimeEvent(var_4730_int, var_4731_float); // 0x3087 Func
	var_4732_int = 45289; // 0x3089 PushI
	var_4733_float = 272.0; // 0x308a PushF
	SetTimeEvent(var_4732_int, var_4733_float); // 0x308b Func
	var_4734_int = 45106; // 0x308d PushI
	var_4735_float = 216.0; // 0x308e PushF
	SetTimeEvent(var_4734_int, var_4735_float); // 0x308f Func
	var_4736_int = 45105; // 0x3091 PushI
	var_4737_float = 192.0; // 0x3092 PushF
	SetTimeEvent(var_4736_int, var_4737_float); // 0x3093 Func
	var_4738_int = 45171; // 0x3095 PushI
	var_4739_float = 223.02; // 0x3096 PushF
	SetTimeEvent(var_4738_int, var_4739_float); // 0x3097 Func
	var_4740_int = 45256; // 0x3099 PushI
	var_4741_float = 132.17; // 0x309a PushF
	SetTimeEvent(var_4740_int, var_4741_float); // 0x309b Func
	var_4742_int = 45257; // 0x309d PushI
	var_4743_float = 64.0; // 0x309e PushF
	SetTimeEvent(var_4742_int, var_4743_float); // 0x309f Func
	var_4744_int = 45281; // 0x30a1 PushI
	var_4745_float = 81.5; // 0x30a2 PushF
	SetTimeEvent(var_4744_int, var_4745_float); // 0x30a3 Func
	var_4746_int = 45284; // 0x30a5 PushI
	var_4747_float = 156.0; // 0x30a6 PushF
	SetTimeEvent(var_4746_int, var_4747_float); // 0x30a7 Func
	var_4748_int = 45285; // 0x30a9 PushI
	var_4749_float = 181.0; // 0x30aa PushF
	SetTimeEvent(var_4748_int, var_4749_float); // 0x30ab Func
	var_4750_int = 45286; // 0x30ad PushI
	var_4751_float = 203.22; // 0x30ae PushF
	SetTimeEvent(var_4750_int, var_4751_float); // 0x30af Func
	var_4752_int = 45104; // 0x30b1 PushI
	var_4753_float = 168.0; // 0x30b2 PushF
	SetTimeEvent(var_4752_int, var_4753_float); // 0x30b3 Func
	var_4754_int = 45103; // 0x30b5 PushI
	var_4755_float = 144.0; // 0x30b6 PushF
	SetTimeEvent(var_4754_int, var_4755_float); // 0x30b7 Func
	var_4756_int = 45102; // 0x30b9 PushI
	var_4757_float = 120.0; // 0x30ba PushF
	SetTimeEvent(var_4756_int, var_4757_float); // 0x30bb Func
	var_4758_int = 45254; // 0x30bd PushI
	var_4759_float = 95.5; // 0x30be PushF
	SetTimeEvent(var_4758_int, var_4759_float); // 0x30bf Func
	var_4760_int = 45253; // 0x30c1 PushI
	var_4761_float = 130.42999; // 0x30c2 PushF
	SetTimeEvent(var_4760_int, var_4761_float); // 0x30c3 Func
	var_4762_int = 45252; // 0x30c5 PushI
	var_4763_float = 106.5; // 0x30c6 PushF
	SetTimeEvent(var_4762_int, var_4763_float); // 0x30c7 Func
	var_4764_int = 45251; // 0x30c9 PushI
	var_4765_float = 83.25; // 0x30ca PushF
	SetTimeEvent(var_4764_int, var_4765_float); // 0x30cb Func
	var_4766_int = 45242; // 0x30cd PushI
	var_4767_float = 34.08; // 0x30ce PushF
	SetTimeEvent(var_4766_int, var_4767_float); // 0x30cf Func
	var_4768_int = 45241; // 0x30d1 PushI
	var_4769_float = 23.08; // 0x30d2 PushF
	SetTimeEvent(var_4768_int, var_4769_float); // 0x30d3 Func
	var_4770_int = 45240; // 0x30d5 PushI
	var_4771_float = 16.25; // 0x30d6 PushF
	SetTimeEvent(var_4770_int, var_4771_float); // 0x30d7 Func
	var_4772_int = 45236; // 0x30d9 PushI
	var_4773_float = 90.0; // 0x30da PushF
	SetTimeEvent(var_4772_int, var_4773_float); // 0x30db Func
	var_4774_int = 45283; // 0x30dd PushI
	var_4775_float = 264.0; // 0x30de PushF
	SetTimeEvent(var_4774_int, var_4775_float); // 0x30df Func
	var_4776_int = 45173; // 0x30e1 PushI
	var_4777_float = 271.01999; // 0x30e2 PushF
	SetTimeEvent(var_4776_int, var_4777_float); // 0x30e3 Func
	var_4778_int = 45172; // 0x30e5 PushI
	var_4779_float = 247.02; // 0x30e6 PushF
	SetTimeEvent(var_4778_int, var_4779_float); // 0x30e7 Func
	var_4780_int = 45250; // 0x30e9 PushI
	var_4781_float = 58.25; // 0x30ea PushF
	SetTimeEvent(var_4780_int, var_4781_float); // 0x30eb Func
	var_4782_int = 45279; // 0x30ed PushI
	var_4783_float = 144.0; // 0x30ee PushF
	SetTimeEvent(var_4782_int, var_4783_float); // 0x30ef Func
	var_4784_int = 45280; // 0x30f1 PushI
	var_4785_float = 192.0; // 0x30f2 PushF
	SetTimeEvent(var_4784_int, var_4785_float); // 0x30f3 Func
	var_4786_int = 45255; // 0x30f5 PushI
	var_4787_float = 113.5; // 0x30f6 PushF
	SetTimeEvent(var_4786_int, var_4787_float); // 0x30f7 Func
	var_4788_int = 45249; // 0x30f9 PushI
	var_4789_float = 96.0; // 0x30fa PushF
	SetTimeEvent(var_4788_int, var_4789_float); // 0x30fb Func
	var_4790_int = 45248; // 0x30fd PushI
	var_4791_float = 111.0; // 0x30fe PushF
	SetTimeEvent(var_4790_int, var_4791_float); // 0x30ff Func
	var_4792_int = 45247; // 0x3101 PushI
	var_4793_float = 119.0; // 0x3102 PushF
	SetTimeEvent(var_4792_int, var_4793_float); // 0x3103 Func
	var_4794_int = 45246; // 0x3105 PushI
	var_4795_float = 95.0; // 0x3106 PushF
	SetTimeEvent(var_4794_int, var_4795_float); // 0x3107 Func
	var_4796_int = 45245; // 0x3109 PushI
	var_4797_float = 71.0; // 0x310a PushF
	SetTimeEvent(var_4796_int, var_4797_float); // 0x310b Func
	var_4798_int = 45244; // 0x310d PushI
	var_4799_float = 47.0; // 0x310e PushF
	SetTimeEvent(var_4798_int, var_4799_float); // 0x310f Func
	var_4800_int = 45101; // 0x3111 PushI
	var_4801_float = 96.0; // 0x3112 PushF
	SetTimeEvent(var_4800_int, var_4801_float); // 0x3113 Func
	var_4802_int = 45100; // 0x3115 PushI
	var_4803_float = 72.0; // 0x3116 PushF
	SetTimeEvent(var_4802_int, var_4803_float); // 0x3117 Func
	var_4804_int = 45096; // 0x3119 PushI
	var_4805_float = 80.0; // 0x311a PushF
	SetTimeEvent(var_4804_int, var_4805_float); // 0x311b Func
	return 0; // 0x311d Return
}


func_4035(var_3247_int, var_3248_int, var_3249_int)
{
	var_3250_int = 0; var_3251_int = 0; var_3252_int = 0; var_3253_int = 0; var_3254_int = 0; var_3255_int = 0; var_3256_int = 0; var_3257_int = 0; // 0xfc3 PushV
	var_3258_bool = 0; // 0xfc4 PushV
	var_3258_bool = 0; // 0xfc5 MovB
	var_3259_int = 8; // 0xfc6 PushI
	var_3260_bool = var_3249_int > var_3259_int; // 0xfc7 GT
	if(var_3260_bool == 0) goto Label_4045; // 0xfc8 JumpB
	var_3261_int = 21; // 0xfc9 PushI
	var_3262_bool = var_3249_int < var_3261_int; // 0xfca LT
	if(var_3262_bool == 0) goto Label_4045; // 0xfcb JumpB
	var_3258_bool = 1; // 0xfcc MovB
	
Label_4045:
	if(var_3258_bool == 0) goto Label_4122; // 0xfcd JumpB
	var_3263_int = 0; var_3264_string = ""; var_3265_string = ""; var_3266_int = 0; // 0xfce PushV
	var_3263_int = var_3247_int; // 0xfcf Mov
	var_3264_string = "pers_rat"; // 0xfd0 MovS
	var_3265_string = "rat.xml"; // 0xfd1 MovS
	var_3266_int = 4; // 0xfd2 MovI
	func_503(var_3263_int, var_3264_string, var_3265_string, var_3266_int); // 0xfd3 NEW_2
	var_3267_int = 0; var_3268_string = ""; var_3269_string = ""; var_3270_int = 0; // 0xfd5 PushV
	var_3267_int = var_3247_int; // 0xfd6 Mov
	var_3268_string = "pers_alkash"; // 0xfd7 MovS
	var_3269_string = "alkash.xml"; // 0xfd8 MovS
	var_3270_int = 2; // 0xfd9 MovI
	func_503(var_3267_int, var_3268_string, var_3269_string, var_3270_int); // 0xfda NEW_2
	var_3271_int = 0; var_3272_string = ""; var_3273_string = ""; var_3274_int = 0; // 0xfdc PushV
	var_3271_int = var_3247_int; // 0xfdd Mov
	var_3272_string = "pers_dohodyaga"; // 0xfde MovS
	var_3273_string = "dohodyaga.xml"; // 0xfdf MovS
	var_3274_int = 1; // 0xfe0 MovI
	func_503(var_3271_int, var_3272_string, var_3273_string, var_3274_int); // 0xfe1 NEW_2
	var_3275_int = 2; // 0xfe3 PushI
	var_3276_float = 0; var_3277_int = 0; // 0xfe4 PushV
	var_3277_int = var_3248_int; // 0xfe5 Mov
	func_1165(var_3276_float, var_3277_int); // 0xfe6 NEW_2
	var_3254_int = var_3275_int * var_3276_float; // 0xfe8 Mult2
	var_3322_int = var_3254_int; // 0xfe9 Push
	if(var_3322_int == 0) goto Label_4082; // 0xfea JumpB
	var_3323_int = 0; var_3324_string = ""; var_3325_string = ""; var_3326_int = 0; // 0xfeb PushV
	var_3323_int = var_3247_int; // 0xfec Mov
	var_3324_string = "pers_grabitel"; // 0xfed MovS
	var_3325_string = "grabitel.xml"; // 0xfee MovS
	var_3326_int = var_3254_int; // 0xfef Mov
	func_503(var_3323_int, var_3324_string, var_3325_string, var_3326_int); // 0xff0 NEW_2
	
Label_4082:
	var_3327_int = 1; // 0xff2 PushI
	var_3328_int = var_3248_int + var_3327_int; // 0xff3 Add
	var_3329_int = 2; // 0xff4 PushI
	var_3330_bool = var_3328_int >= var_3329_int; // 0xff5 GE
	if(var_3330_bool == 0) goto Label_4106; // 0xff6 JumpB
	var_3331_int = 0; var_3332_string = ""; var_3333_string = ""; var_3334_int = 0; // 0xff7 PushV
	var_3331_int = var_3247_int; // 0xff8 Mov
	var_3332_string = "pers_patrool"; // 0xff9 MovS
	var_3333_string = "patrol.xml"; // 0xffa MovS
	var_3334_int = 2; // 0xffb MovI
	func_503(var_3331_int, var_3332_string, var_3333_string, var_3334_int); // 0xffc NEW_2
	var_3335_bool = 0; var_3336_int = 0; // 0xffe PushV
	var_3336_int = var_3248_int; // 0xfff Mov
	func_1372(var_3335_bool, var_3336_int); // 0x1000 NEW_2
	if(var_3335_bool == 0) goto Label_4106; // 0x1002 JumpB
	var_3337_int = 0; var_3338_string = ""; var_3339_string = ""; var_3340_int = 0; // 0x1003 PushV
	var_3337_int = var_3247_int; // 0x1004 Mov
	var_3338_string = "pers_soldat_hand"; // 0x1005 MovS
	var_3339_string = "soldier_patrol.xml"; // 0x1006 MovS
	var_3340_int = 1; // 0x1007 MovI
	func_503(var_3337_int, var_3338_string, var_3339_string, var_3340_int); // 0x1008 NEW_2
	
Label_4106:
	var_3341_int = 1; // 0x100a PushI
	var_3342_float = 0; var_3343_int = 0; // 0x100b PushV
	var_3343_int = var_3248_int; // 0x100c Mov
	func_1255(var_3342_float, var_3343_int); // 0x100d NEW_2
	var_3255_int = var_3341_int * var_3342_float; // 0x100f Mult2
	var_3344_int = var_3255_int; // 0x1010 Push
	if(var_3344_int == 0) goto Label_4121; // 0x1011 JumpB
	var_3345_int = 0; var_3346_string = ""; var_3347_string = ""; var_3348_int = 0; // 0x1012 PushV
	var_3345_int = var_3247_int; // 0x1013 Mov
	var_3346_string = "pers_bomber"; // 0x1014 MovS
	var_3347_string = "bomber.xml"; // 0x1015 MovS
	var_3348_int = var_3255_int; // 0x1016 Mov
	func_503(var_3345_int, var_3346_string, var_3347_string, var_3348_int); // 0x1017 NEW_2
	
Label_4121:
	goto Label_4197; // 0x1019 Jump
	
Label_4197:
	var_3349_bool = 0; var_3350_int = 0; // 0x1065 PushV
	var_3350_int = var_3248_int; // 0x1066 Mov
	func_1372(var_3349_bool, var_3350_int); // 0x1067 NEW_2
	if(var_3349_bool == 0) goto Label_4209; // 0x1069 JumpB
	var_3351_int = 0; var_3352_string = ""; var_3353_string = ""; var_3354_int = 0; // 0x106a PushV
	var_3351_int = var_3247_int; // 0x106b Mov
	var_3352_string = "pers_sanitar"; // 0x106c MovS
	var_3353_string = "sanitar.xml"; // 0x106d MovS
	var_3354_int = 1; // 0x106e MovI
	func_503(var_3351_int, var_3352_string, var_3353_string, var_3354_int); // 0x106f NEW_2
	
Label_4209:
	return 8; // 0x1071 Return
	
Label_4122:
	var_3355_int = 0; var_3356_string = ""; var_3357_string = ""; var_3358_int = 0; // 0x101a PushV
	var_3355_int = var_3247_int; // 0x101b Mov
	var_3356_string = "pers_rat"; // 0x101c MovS
	var_3357_string = "rat.xml"; // 0x101d MovS
	var_3358_int = 7; // 0x101e MovI
	func_503(var_3355_int, var_3356_string, var_3357_string, var_3358_int); // 0x101f NEW_2
	var_3359_int = 0; var_3360_string = ""; var_3361_string = ""; var_3362_int = 0; // 0x1021 PushV
	var_3359_int = var_3247_int; // 0x1022 Mov
	var_3360_string = "pers_alkash"; // 0x1023 MovS
	var_3361_string = "alkash.xml"; // 0x1024 MovS
	var_3362_int = 1; // 0x1025 MovI
	func_503(var_3359_int, var_3360_string, var_3361_string, var_3362_int); // 0x1026 NEW_2
	var_3363_int = 0; var_3364_string = ""; var_3365_string = ""; var_3366_int = 0; // 0x1028 PushV
	var_3363_int = var_3247_int; // 0x1029 Mov
	var_3364_string = "pers_dohodyaga"; // 0x102a MovS
	var_3365_string = "dohodyaga.xml"; // 0x102b MovS
	var_3366_int = 1; // 0x102c MovI
	func_503(var_3363_int, var_3364_string, var_3365_string, var_3366_int); // 0x102d NEW_2
	var_3367_int = 2; // 0x102f PushI
	var_3368_float = 0; var_3369_int = 0; // 0x1030 PushV
	var_3369_int = var_3248_int; // 0x1031 Mov
	func_1165(var_3368_float, var_3369_int); // 0x1032 NEW_2
	var_3256_int = var_3367_int * var_3368_float; // 0x1034 Mult2
	var_3370_int = var_3256_int; // 0x1035 Push
	if(var_3370_int == 0) goto Label_4158; // 0x1036 JumpB
	var_3371_int = 0; var_3372_string = ""; var_3373_string = ""; var_3374_int = 0; // 0x1037 PushV
	var_3371_int = var_3247_int; // 0x1038 Mov
	var_3372_string = "pers_grabitel"; // 0x1039 MovS
	var_3373_string = "grabitel.xml"; // 0x103a MovS
	var_3374_int = var_3256_int; // 0x103b Mov
	func_503(var_3371_int, var_3372_string, var_3373_string, var_3374_int); // 0x103c NEW_2
	
Label_4158:
	var_3375_int = 1; // 0x103e PushI
	var_3376_int = var_3248_int + var_3375_int; // 0x103f Add
	var_3377_int = 2; // 0x1040 PushI
	var_3378_bool = var_3376_int >= var_3377_int; // 0x1041 GE
	if(var_3378_bool == 0) goto Label_4182; // 0x1042 JumpB
	var_3379_int = 0; var_3380_string = ""; var_3381_string = ""; var_3382_int = 0; // 0x1043 PushV
	var_3379_int = var_3247_int; // 0x1044 Mov
	var_3380_string = "pers_patrool"; // 0x1045 MovS
	var_3381_string = "patrol.xml"; // 0x1046 MovS
	var_3382_int = 1; // 0x1047 MovI
	func_503(var_3379_int, var_3380_string, var_3381_string, var_3382_int); // 0x1048 NEW_2
	var_3383_bool = 0; var_3384_int = 0; // 0x104a PushV
	var_3384_int = var_3248_int; // 0x104b Mov
	func_1372(var_3383_bool, var_3384_int); // 0x104c NEW_2
	if(var_3383_bool == 0) goto Label_4182; // 0x104e JumpB
	var_3385_int = 0; var_3386_string = ""; var_3387_string = ""; var_3388_int = 0; // 0x104f PushV
	var_3385_int = var_3247_int; // 0x1050 Mov
	var_3386_string = "pers_soldat_hand"; // 0x1051 MovS
	var_3387_string = "soldier_patrol.xml"; // 0x1052 MovS
	var_3388_int = 1; // 0x1053 MovI
	func_503(var_3385_int, var_3386_string, var_3387_string, var_3388_int); // 0x1054 NEW_2
	
Label_4182:
	var_3389_int = 1; // 0x1056 PushI
	var_3390_float = 0; var_3391_int = 0; // 0x1057 PushV
	var_3391_int = var_3248_int; // 0x1058 Mov
	func_1255(var_3390_float, var_3391_int); // 0x1059 NEW_2
	var_3257_int = var_3389_int * var_3390_float; // 0x105b Mult2
	var_3392_int = var_3257_int; // 0x105c Push
	if(var_3392_int == 0) goto Label_4197; // 0x105d JumpB
	var_3393_int = 0; var_3394_string = ""; var_3395_string = ""; var_3396_int = 0; // 0x105e PushV
	var_3393_int = var_3247_int; // 0x105f Mov
	var_3394_string = "pers_bomber"; // 0x1060 MovS
	var_3395_string = "bomber.xml"; // 0x1061 MovS
	var_3396_int = var_3257_int; // 0x1062 Mov
	func_503(var_3393_int, var_3394_string, var_3395_string, var_3396_int); // 0x1063 NEW_2
}


func_5072(var_2552_int, var_2553_int, var_2554_object, var_2555_object, var_2556_object, var_2557_object)
{
	var_2558_int = 0; // 0x13d1 PushI
	var_2559_bool = var_2553_int == var_2558_int; // 0x13d2 Eq
	if(var_2559_bool == 0) goto Label_5112; // 0x13d3 JumpB
	var_2560_int = 0; var_2561_bool = 0; // 0x13d4 PushV
	var_2560_int = 3; // 0x13d5 MovI
	var_2561_bool = 1; // 0x13d6 MovB
	func_796(var_2560_int, var_2561_bool); // 0x13d7 NEW_2
	var_2562_int = 0; var_2563_bool = 0; var_2564_int = 0; // 0x13d9 PushV
	var_2562_int = 3; // 0x13da MovI
	var_2563_bool = 1; // 0x13db MovB
	var_2564_int = 1; // 0x13dc MovI
	func_813(var_2562_int, var_2563_bool, var_2564_int); // 0x13dd NEW_2
	var_2565_int = 0; var_2566_int = 0; var_2567_object = Obj(); var_2568_object = Obj(); var_2569_object = Obj(); // 0x13df PushV
	var_2565_int = 3; // 0x13e0 MovI
	var_2566_int = var_2552_int; // 0x13e1 Mov
	var_2567_object = var_2554_object; // 0x13e2 Mov
	var_2568_object = var_2555_object; // 0x13e3 Mov
	var_2569_object = var_2556_object; // 0x13e4 Mov
	func_641(var_2565_int, var_2566_int, var_2567_object, var_2568_object, var_2569_object); // 0x13e5 NEW_2
	var_2570_object = Obj(); var_2571_int = 0; // 0x13e7 PushV
	var_2570_object = var_2557_object; // 0x13e8 Mov
	var_2571_int = 1; // 0x13e9 MovI
	func_305(var_2571_int); // 0x13ea NEW_2
	var_2572_int = 0; var_2573_bool = 0; var_2574_int = 0; // 0x13ec PushV
	var_2572_int = 3; // 0x13ed MovI
	var_2573_bool = 1; // 0x13ee MovB
	var_2574_int = 7; // 0x13ef MovI
	func_870(var_2572_int, var_2573_bool, var_2574_int); // 0x13f0 NEW_2
	var_2575_int = 0; var_2576_bool = 0; var_2577_int = 0; // 0x13f2 PushV
	var_2575_int = 3; // 0x13f3 MovI
	var_2576_bool = 0; // 0x13f4 MovB
	var_2577_int = 7; // 0x13f5 MovI
	func_932(var_2575_int, var_2576_bool, var_2577_int); // 0x13f6 NEW_2
	
Label_5112:
	var_2578_int = 0; var_2579_bool = 0; // 0x13f8 PushV
	var_2578_int = 3; // 0x13f9 MovI
	var_2579_bool = 0; // 0x13fa MovB
	func_779(var_2578_int, var_2579_bool); // 0x13fb NEW_2
	var_2580_int = 0; var_2581_int = 0; var_2582_int = 0; // 0x13fd PushV
	var_2580_int = 3; // 0x13fe MovI
	var_2581_int = var_2552_int; // 0x13ff Mov
	var_2582_int = var_2553_int; // 0x1400 Mov
	func_2944(var_2580_int, var_2581_int, var_2582_int); // 0x1401 NEW_2
	return 0; // 0x1403 Return
}


func_983(var_1273_int, var_1274_int)
{
	var_1275_bool = 0; // 0x3d8 PushV
	var_1275_bool = 1; // 0x3d9 MovB
	var_1276_bool = 0; // 0x3da PushV
	var_1276_bool = 1; // 0x3db MovB
	var_1277_int = 20; // 0x3dc PushI
	var_1278_bool = var_1274_int >= var_1277_int; // 0x3dd GE
	if(var_1278_bool == 0) goto Label_995; // 0x3de JumpB
	var_1279_int = 2; // 0x3df PushI
	var_1280_bool = var_1274_int < var_1279_int; // 0x3e0 LT
	if(var_1280_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_1276_bool = 0; // 0x3e2 MovB
	
Label_995:
	if(var_1276_bool == 0) goto Label_1007; // 0x3e3 JumpB
	var_1281_bool = 0; // 0x3e4 PushV
	var_1281_bool = 0; // 0x3e5 MovB
	var_1282_int = 6; // 0x3e6 PushI
	var_1283_bool = var_1274_int >= var_1282_int; // 0x3e7 GE
	if(var_1283_bool == 0) goto Label_1005; // 0x3e8 JumpB
	var_1284_int = 10; // 0x3e9 PushI
	var_1285_bool = var_1274_int < var_1284_int; // 0x3ea LT
	if(var_1285_bool == 0) goto Label_1005; // 0x3eb JumpB
	var_1281_bool = 1; // 0x3ec MovB
	
Label_1005:
	if(var_1281_bool == 0) goto Label_1007; // 0x3ed JumpB
	var_1275_bool = 0; // 0x3ee MovB
	
Label_1007:
	if(var_1275_bool == 0) goto Label_1014; // 0x3ef JumpB
	var_1286_int = 0; var_1287_bool = 0; // 0x3f0 PushV
	var_1286_int = var_1273_int; // 0x3f1 Mov
	var_1287_bool = 1; // 0x3f2 MovB
	func_779(var_1286_int, var_1287_bool); // 0x3f3 NEW_2
	goto Label_1019; // 0x3f5 Jump
	
Label_1019:
	return 0; // 0x3fb Return
	
Label_1014:
	var_1288_int = 0; var_1289_bool = 0; // 0x3f6 PushV
	var_1288_int = var_1273_int; // 0x3f7 Mov
	var_1289_bool = 0; // 0x3f8 MovB
	func_779(var_1288_int, var_1289_bool); // 0x3f9 NEW_2
}


func_7127(var_1768_int, var_1769_int, var_1770_object, var_1771_object, var_1772_object, var_1773_object)
{
	var_1774_int = 0; // 0x1bd8 PushI
	var_1775_bool = var_1769_int == var_1774_int; // 0x1bd9 Eq
	if(var_1775_bool == 0) goto Label_7167; // 0x1bda JumpB
	var_1776_int = 0; var_1777_bool = 0; // 0x1bdb PushV
	var_1776_int = 14; // 0x1bdc MovI
	var_1777_bool = 0; // 0x1bdd MovB
	func_796(var_1776_int, var_1777_bool); // 0x1bde NEW_2
	var_1778_int = 0; var_1779_bool = 0; var_1780_int = 0; // 0x1be0 PushV
	var_1778_int = 14; // 0x1be1 MovI
	var_1779_bool = 0; // 0x1be2 MovB
	var_1780_int = 1; // 0x1be3 MovI
	func_813(var_1778_int, var_1779_bool, var_1780_int); // 0x1be4 NEW_2
	var_1781_int = 0; var_1782_int = 0; var_1783_object = Obj(); var_1784_object = Obj(); var_1785_object = Obj(); // 0x1be6 PushV
	var_1781_int = 14; // 0x1be7 MovI
	var_1782_int = var_1768_int; // 0x1be8 Mov
	var_1783_object = var_1770_object; // 0x1be9 Mov
	var_1784_object = var_1771_object; // 0x1bea Mov
	var_1785_object = var_1772_object; // 0x1beb Mov
	func_622(var_1782_int, var_1783_object, var_1784_object, var_1785_object); // 0x1bec NEW_2
	var_1786_object = Obj(); var_1787_int = 0; // 0x1bee PushV
	var_1786_object = var_1773_object; // 0x1bef Mov
	var_1787_int = 0; // 0x1bf0 MovI
	func_305(var_1787_int); // 0x1bf1 NEW_2
	var_1788_int = 0; var_1789_bool = 0; var_1790_int = 0; // 0x1bf3 PushV
	var_1788_int = 14; // 0x1bf4 MovI
	var_1789_bool = 0; // 0x1bf5 MovB
	var_1790_int = 5; // 0x1bf6 MovI
	func_870(var_1788_int, var_1789_bool, var_1790_int); // 0x1bf7 NEW_2
	var_1791_int = 0; var_1792_bool = 0; var_1793_int = 0; // 0x1bf9 PushV
	var_1791_int = 14; // 0x1bfa MovI
	var_1792_bool = 0; // 0x1bfb MovB
	var_1793_int = 5; // 0x1bfc MovI
	func_932(var_1791_int, var_1792_bool, var_1793_int); // 0x1bfd NEW_2
	
Label_7167:
	var_1794_int = 0; var_1795_int = 0; // 0x1bff PushV
	var_1794_int = 14; // 0x1c00 MovI
	var_1795_int = var_1769_int; // 0x1c01 Mov
	func_1087(var_1794_int, var_1795_int); // 0x1c02 NEW_2
	var_1805_int = 0; var_1806_int = 0; var_1807_int = 0; // 0x1c04 PushV
	var_1805_int = 14; // 0x1c05 MovI
	var_1806_int = var_1768_int; // 0x1c06 Mov
	var_1807_int = var_1769_int; // 0x1c07 Mov
	func_1376(var_1805_int, var_1806_int, var_1807_int); // 0x1c08 NEW_2
	return 0; // 0x1c0a Return
}


func_6106(var_1603_int, var_1604_int, var_1605_object, var_1606_object, var_1607_object, var_1608_object)
{
	var_1609_int = 0; // 0x17db PushI
	var_1610_bool = var_1604_int == var_1609_int; // 0x17dc Eq
	if(var_1610_bool == 0) goto Label_6146; // 0x17dd JumpB
	var_1611_int = 0; var_1612_bool = 0; // 0x17de PushV
	var_1611_int = 9; // 0x17df MovI
	var_1612_bool = 0; // 0x17e0 MovB
	func_796(var_1611_int, var_1612_bool); // 0x17e1 NEW_2
	var_1613_int = 0; var_1614_bool = 0; var_1615_int = 0; // 0x17e3 PushV
	var_1613_int = 9; // 0x17e4 MovI
	var_1614_bool = 0; // 0x17e5 MovB
	var_1615_int = 1; // 0x17e6 MovI
	func_813(var_1613_int, var_1614_bool, var_1615_int); // 0x17e7 NEW_2
	var_1616_int = 0; var_1617_int = 0; var_1618_object = Obj(); var_1619_object = Obj(); var_1620_object = Obj(); // 0x17e9 PushV
	var_1616_int = 9; // 0x17ea MovI
	var_1617_int = var_1603_int; // 0x17eb Mov
	var_1618_object = var_1605_object; // 0x17ec Mov
	var_1619_object = var_1606_object; // 0x17ed Mov
	var_1620_object = var_1607_object; // 0x17ee Mov
	func_622(var_1617_int, var_1618_object, var_1619_object, var_1620_object); // 0x17ef NEW_2
	var_1621_object = Obj(); var_1622_int = 0; // 0x17f1 PushV
	var_1621_object = var_1608_object; // 0x17f2 Mov
	var_1622_int = 0; // 0x17f3 MovI
	func_305(var_1622_int); // 0x17f4 NEW_2
	var_1623_int = 0; var_1624_bool = 0; var_1625_int = 0; // 0x17f6 PushV
	var_1623_int = 9; // 0x17f7 MovI
	var_1624_bool = 0; // 0x17f8 MovB
	var_1625_int = 7; // 0x17f9 MovI
	func_870(var_1623_int, var_1624_bool, var_1625_int); // 0x17fa NEW_2
	var_1626_int = 0; var_1627_bool = 0; var_1628_int = 0; // 0x17fc PushV
	var_1626_int = 9; // 0x17fd MovI
	var_1627_bool = 0; // 0x17fe MovB
	var_1628_int = 7; // 0x17ff MovI
	func_932(var_1626_int, var_1627_bool, var_1628_int); // 0x1800 NEW_2
	
Label_6146:
	var_1629_int = 0; var_1630_int = 0; // 0x1802 PushV
	var_1629_int = 9; // 0x1803 MovI
	var_1630_int = var_1604_int; // 0x1804 Mov
	func_1050(var_1629_int, var_1630_int); // 0x1805 NEW_2
	var_1631_int = 0; var_1632_int = 0; var_1633_int = 0; // 0x1807 PushV
	var_1631_int = 9; // 0x1808 MovI
	var_1632_int = var_1603_int; // 0x1809 Mov
	var_1633_int = var_1604_int; // 0x180a Mov
	func_1624(var_1631_int, var_1632_int, var_1633_int); // 0x180b NEW_2
	return 0; // 0x180d Return
}


func_10205()
{
	var_5738_object = Obj(); var_5739_object = Obj(); var_5740_object = Obj(); var_5741_object = Obj(); // 0x27dd PushV
	var_5742_object = Obj(); // 0x27de PushV
	func_11161(var_5742_object); // 0x27df NEW_2
	var_5740_object = var_5742_object; // 0x27e0 Mov
	var_5743_string = "k4q03AlexandrGotoBurah"; // 0x27e2 PushS
	FindMark(var_5741_object, var_5743_string); // 0x27e3 ObjFunc
	var_5744_object = var_5741_object; // 0x27e5 Push
	if(var_5744_object == 0) goto Label_10217; // 0x27e6 JumpB
	Remove(); // 0x27e7 ObjFunc
	
Label_10217:
	var_5745_string = "k4q01GrifGotoBraga"; // 0x27e9 PushS
	FindMark(var_5741_object, var_5745_string); // 0x27ea ObjFunc
	var_5746_object = var_5741_object; // 0x27ec Push
	if(var_5746_object == 0) goto Label_10224; // 0x27ed JumpB
	Remove(); // 0x27ee ObjFunc
	
Label_10224:
	var_5747_string = "k4q01AlexandrGotoGrif"; // 0x27f0 PushS
	FindMark(var_5741_object, var_5747_string); // 0x27f1 ObjFunc
	var_5748_object = var_5741_object; // 0x27f3 Push
	if(var_5748_object == 0) goto Label_10231; // 0x27f4 JumpB
	Remove(); // 0x27f5 ObjFunc
	
Label_10231:
	var_5749_string = "k4q01GrifGotoNotkin"; // 0x27f7 PushS
	FindMark(var_5741_object, var_5749_string); // 0x27f8 ObjFunc
	var_5750_object = var_5741_object; // 0x27fa Push
	if(var_5750_object == 0) goto Label_10238; // 0x27fb JumpB
	Remove(); // 0x27fc ObjFunc
	
Label_10238:
	var_5751_string = "k4q02KaterinaGotoTheater"; // 0x27fe PushS
	FindMark(var_5741_object, var_5751_string); // 0x27ff ObjFunc
	var_5752_object = var_5741_object; // 0x2801 Push
	if(var_5752_object == 0) goto Label_10245; // 0x2802 JumpB
	Remove(); // 0x2803 ObjFunc
	
Label_10245:
	var_5753_string = "k4q02MarkGotoTheater"; // 0x2805 PushS
	FindMark(var_5741_object, var_5753_string); // 0x2806 ObjFunc
	var_5754_object = var_5741_object; // 0x2808 Push
	if(var_5754_object == 0) goto Label_10252; // 0x2809 JumpB
	Remove(); // 0x280a ObjFunc
	
Label_10252:
	var_5755_string = "k4q03LaraGotoAlexandr"; // 0x280c PushS
	FindMark(var_5741_object, var_5755_string); // 0x280d ObjFunc
	var_5756_object = var_5741_object; // 0x280f Push
	if(var_5756_object == 0) goto Label_10259; // 0x2810 JumpB
	Remove(); // 0x2811 ObjFunc
	
Label_10259:
	var_5757_bool = 0; var_5758_int = 0; // 0x2813 PushV
	var_5758_int = 368; // 0x2814 MovI
	func_11136(var_5757_bool, var_5758_int); // 0x2815 NEW_2
	var_5759_bool = 0; var_5760_int = 0; // 0x2817 PushV
	var_5760_int = 378; // 0x2818 MovI
	func_11136(var_5759_bool, var_5760_int); // 0x2819 NEW_2
	var_5761_bool = 0; var_5762_int = 0; // 0x281b PushV
	var_5762_int = 384; // 0x281c MovI
	func_11136(var_5761_bool, var_5762_int); // 0x281d NEW_2
	return 4; // 0x281f Return
}


func_11245()
{
	var_4408_float = 0; var_4409_int = 0; var_4410_float = 0; var_4411_float = 0; var_4412_int = 0; var_4413_float = 0; // 0x2bed PushV
	GetGameTime(var_4411_float); // 0x2bee Func
	var_4412_int = 1; // 0x2bf0 MovI
	
Label_11249:
	var_4414_int = 288; // 0x2bf1 PushI
	var_4415_bool = var_4412_int < var_4414_int; // 0x2bf2 LT
	if(var_4415_bool == 0) goto Label_11273; // 0x2bf3 JumpB
	var_4416_float = 1.0; // 0x2bf4 PushF
	var_4413_float = var_4416_float * var_4412_int; // 0x2bf5 Mult2
	var_4417_bool = var_4413_float < var_4411_float; // 0x2bf6 LT
	if(var_4417_bool == 0) goto Label_11257; // 0x2bf7 JumpB
	goto Label_11270; // 0x2bf8 Jump
	
Label_11270:
	var_4418_int = 1; // 0x2c06 PushI
	var_4412_int = var_4412_int + var_4418_int; // 0x2c07 Add2
	goto Label_11249; // 0x2c08 Jump
	
Label_11257:
	var_4419_int = 40000; // 0x2bf9 PushI
	var_4420_int = var_4419_int + var_4412_int; // 0x2bfa Add
	SetTimeEvent(var_4420_int, var_4413_float); // 0x2bfb Func
	var_4421_float = 0.00333; // 0x2bfd PushF
	var_4413_float = var_4413_float - var_4421_float; // 0x2bfe Sub2
	var_4422_bool = var_4413_float < var_4411_float; // 0x2bff LT
	if(var_4422_bool == 0) goto Label_11266; // 0x2c00 JumpB
	goto Label_11270; // 0x2c01 Jump
	
Label_11266:
	var_4423_int = 42000; // 0x2c02 PushI
	var_4424_int = var_4423_int + var_4412_int; // 0x2c03 Add
	SetTimeEvent(var_4424_int, var_4413_float); // 0x2c04 Func
	
Label_11273:
	func_8197(); // 0x2c0a NEW_2
	func_12843(); // 0x2c0d NEW_2
	return 6; // 0x2c0f Return
}


func_1020(var_1321_int, var_1322_int)
{
	var_1323_bool = 0; // 0x3fd PushV
	var_1323_bool = 1; // 0x3fe MovB
	var_1324_int = 20; // 0x3ff PushI
	var_1325_bool = var_1322_int >= var_1324_int; // 0x400 GE
	if(var_1325_bool == 0) goto Label_1037; // 0x401 JumpB
	var_1326_bool = 0; // 0x402 PushV
	var_1326_bool = 0; // 0x403 MovB
	var_1327_int = 6; // 0x404 PushI
	var_1328_bool = var_1322_int >= var_1327_int; // 0x405 GE
	if(var_1328_bool == 0) goto Label_1035; // 0x406 JumpB
	var_1329_int = 10; // 0x407 PushI
	var_1330_bool = var_1322_int < var_1329_int; // 0x408 LT
	if(var_1330_bool == 0) goto Label_1035; // 0x409 JumpB
	var_1326_bool = 1; // 0x40a MovB
	
Label_1035:
	if(var_1326_bool == 0) goto Label_1037; // 0x40b JumpB
	var_1323_bool = 0; // 0x40c MovB
	
Label_1037:
	if(var_1323_bool == 0) goto Label_1044; // 0x40d JumpB
	var_1331_int = 0; var_1332_bool = 0; // 0x40e PushV
	var_1331_int = var_1321_int; // 0x40f Mov
	var_1332_bool = 1; // 0x410 MovB
	func_779(var_1331_int, var_1332_bool); // 0x411 NEW_2
	goto Label_1049; // 0x413 Jump
	
Label_1049:
	return 0; // 0x419 Return
	
Label_1044:
	var_1333_int = 0; var_1334_bool = 0; // 0x414 PushV
	var_1333_int = var_1321_int; // 0x415 Mov
	var_1334_bool = 0; // 0x416 MovB
	func_779(var_1333_int, var_1334_bool); // 0x417 NEW_2
}


