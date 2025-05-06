task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0; // 0x1 PushV
	var_3_int = var_0_int; // 0x2 Mov
	var_4_float = var_1_float; // 0x3 Mov
	func_8899(var_3_int, var_4_float); // 0x4 NEW_2
	if(var_2_bool == 0) goto Label_8; // 0x6 JumpB
	return 0; // 0x7 Return
	
Label_8:
	var_4135_bool = 0; var_4136_int = 0; var_4137_float = 0; // 0x8 PushV
	var_4136_int = var_0_int; // 0x9 Mov
	var_4137_float = var_1_float; // 0xa Mov
	func_12526(var_4136_int, var_4137_float); // 0xb NEW_2
	if(var_4135_bool == 0) goto Label_15; // 0xd JumpB
	return 0; // 0xe Return
	
Label_15:
	var_4657_int = 0; var_4658_float = 0; // 0xf PushV
	var_4657_int = var_0_int; // 0x10 Mov
	var_4658_float = var_1_float; // 0x11 Mov
	func_12622(var_4657_int, var_4658_float); // 0x12 NEW_2
	return 0; // 0x14 Return
}


event_26(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; // 0x1d32 PushV
	var_6_string = "playsound"; // 0x1d33 PushS
	var_7_bool = var_0_string == var_6_string; // 0x1d34 Eq
	if(var_7_bool == 0) goto Label_7481; // 0x1d35 JumpB
	PlaySound(var_1_string); // 0x1d36 Func
	goto Label_7502; // 0x1d38 Jump
	
Label_7502:
	return 4; // 0x1d4e Return
	
Label_7481:
	var_8_string = "enable_bonfire"; // 0x1d39 PushS
	var_9_bool = var_0_string == var_8_string; // 0x1d3a Eq
	if(var_9_bool == 0) goto Label_7492; // 0x1d3b JumpB
	_strtoi(var_4_int, var_1_string); // 0x1d3c Func
	var_10_int = 0; // 0x1d3e PushV
	var_11_int = 1; // 0x1d3f PushI
	var_10_int = var_4_int - var_11_int; // 0x1d40 Sub2
	func_7614(var_10_int); // 0x1d41 NEW_2
	goto Label_7502; // 0x1d43 Jump
	
Label_7492:
	var_64_string = "disable_bonfire"; // 0x1d44 PushS
	var_65_bool = var_0_string == var_64_string; // 0x1d45 Eq
	if(var_65_bool == 0) goto Label_7502; // 0x1d46 JumpB
	_strtoi(var_5_int, var_1_string); // 0x1d47 Func
	var_66_int = 0; // 0x1d49 PushV
	var_67_int = 1; // 0x1d4a PushI
	var_66_int = var_5_int - var_67_int; // 0x1d4b Sub2
	func_7691(var_66_int); // 0x1d4c NEW_2
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x1d4f PushV
	var_22_string = "horror"; // 0x1d50 PushS
	var_23_bool = var_0_string == var_22_string; // 0x1d51 Eq
	if(var_23_bool == 0) goto Label_7542; // 0x1d52 JumpB
	_strtoi(var_12_int, var_1_string); // 0x1d53 Func
	var_24_int = 0; // 0x1d55 PushV
	var_24_int = var_12_int; // 0x1d56 Mov
	func_448(var_24_int); // 0x1d57 NEW_2
	var_39_object = GlobalVars[13]; // 0x1d59 PushGE
	size(var_13_int); // 0x1d5a ObjFunc
	var_40_bool = 0; // 0x1d5c PushV
	var_40_bool = 0; // 0x1d5d MovB
	var_41_int = 0; // 0x1d5e PushI
	var_42_bool = var_12_int >= var_41_int; // 0x1d5f GE
	if(var_42_bool == 0) goto Label_7524; // 0x1d60 JumpB
	var_43_bool = var_12_int < var_13_int; // 0x1d61 LT
	if(var_43_bool == 0) goto Label_7524; // 0x1d62 JumpB
	var_40_bool = 1; // 0x1d63 MovB
	
Label_7524:
	if(var_40_bool == 0) goto Label_7538; // 0x1d64 JumpB
	var_44_object = GlobalVars[13]; // 0x1d65 PushGE
	get(var_14_object, var_12_int); // 0x1d66 ObjFunc
	var_45_object = Obj(); var_46_int = 0; // 0x1d68 PushV
	var_45_object = var_14_object; // 0x1d69 Mov
	var_46_int = 1; // 0x1d6a MovI
	func_311(var_46_int); // 0x1d6b NEW_2
	var_72_string = "Replaced"; // 0x1d6d PushS
	Trace(var_72_string); // 0x1d6e Func
	var_14_object = 0; // 0x1d70 SetNull
	goto Label_7541; // 0x1d71 Jump
	
Label_7541:
	goto Label_7613; // 0x1d75 Jump
	
Label_7613:
	return 20; // 0x1dbd Return
	
Label_7538:
	var_73_string = "Invalid region index"; // 0x1d72 PushS
	Trace(var_73_string); // 0x1d73 Func
	
Label_7542:
	var_74_string = "nail"; // 0x1d76 PushS
	var_75_bool = var_0_string == var_74_string; // 0x1d77 Eq
	if(var_75_bool == 0) goto Label_7580; // 0x1d78 JumpB
	_strtoi(var_15_int, var_1_string); // 0x1d79 Func
	var_76_int = 0; // 0x1d7b PushV
	var_76_int = var_15_int; // 0x1d7c Mov
	func_478(var_76_int); // 0x1d7d NEW_2
	var_88_object = GlobalVars[13]; // 0x1d7f PushGE
	size(var_16_int); // 0x1d80 ObjFunc
	var_89_bool = 0; // 0x1d82 PushV
	var_89_bool = 0; // 0x1d83 MovB
	var_90_int = 0; // 0x1d84 PushI
	var_91_bool = var_15_int >= var_90_int; // 0x1d85 GE
	if(var_91_bool == 0) goto Label_7562; // 0x1d86 JumpB
	var_92_bool = var_15_int < var_16_int; // 0x1d87 LT
	if(var_92_bool == 0) goto Label_7562; // 0x1d88 JumpB
	var_89_bool = 1; // 0x1d89 MovB
	
Label_7562:
	if(var_89_bool == 0) goto Label_7576; // 0x1d8a JumpB
	var_93_object = GlobalVars[13]; // 0x1d8b PushGE
	get(var_17_object, var_15_int); // 0x1d8c ObjFunc
	var_94_object = Obj(); var_95_int = 0; // 0x1d8e PushV
	var_94_object = var_17_object; // 0x1d8f Mov
	var_95_int = 2; // 0x1d90 MovI
	func_311(var_95_int); // 0x1d91 NEW_2
	var_96_string = "Replaced"; // 0x1d93 PushS
	Trace(var_96_string); // 0x1d94 Func
	var_17_object = 0; // 0x1d96 SetNull
	goto Label_7579; // 0x1d97 Jump
	
Label_7579:
	goto Label_7613; // 0x1d9b Jump
	
Label_7576:
	var_97_string = "Invalid region index"; // 0x1d98 PushS
	Trace(var_97_string); // 0x1d99 Func
	
Label_7580:
	var_98_string = "fogme"; // 0x1d9c PushS
	var_99_bool = var_0_string == var_98_string; // 0x1d9d Eq
	if(var_99_bool == 0) goto Label_7600; // 0x1d9e JumpB
	var_100_object = Obj(); // 0x1d9f PushV
	func_80(var_100_object); // 0x1da0 NEW_2
	var_18_object = var_100_object; // 0x1da1 Mov
	GetScene(var_19_object); // 0x1da3 ObjFunc
	GetPosition(var_20_cvector); // 0x1da5 ObjFunc
	var_104_string = "fog"; // 0x1da7 PushS
	var_105_cvector = CVector(0.0, 0.0, 1.0); // 0x1da8 PushVec
	var_106_string = "fog_stat.xml"; // 0x1da9 PushS
	AddActorByType(var_21_object, var_104_string, var_19_object, var_20_cvector, var_105_cvector, var_106_string); // 0x1daa Func
	var_21_object = 0; // 0x1dac SetNull
	var_19_object = 0; // 0x1dad SetNull
	var_18_object = 0; // 0x1dae SetNull
	goto Label_7613; // 0x1daf Jump
	
Label_7600:
	var_107_string = "sepia"; // 0x1db0 PushS
	var_108_bool = var_0_string == var_107_string; // 0x1db1 Eq
	if(var_108_bool == 0) goto Label_7607; // 0x1db2 JumpB
	func_295(); // 0x1db4 NEW_2
	goto Label_7613; // 0x1db6 Jump
	
Label_7607:
	var_111_string = "nosepia"; // 0x1db7 PushS
	var_112_bool = var_0_string == var_111_string; // 0x1db8 Eq
	if(var_112_bool == 0) goto Label_7613; // 0x1db9 JumpB
	func_300(); // 0x1dbb NEW_2
}


main()
{
	var_0_string = "branch"; // 0x15 PushS
	var_1_int = 0; // 0x16 PushI
	SetVariable(var_0_string, var_1_int); // 0x17 Func
	var_2_int = 0; // 0x19 PushI
	var_3_int = 0; // 0x1a PushI
	SetSaveProperty(var_2_int, var_3_int); // 0x1b Func
	func_57(); // 0x1e NEW_2
	func_7914(); // 0x21 NEW_2
	func_8954(); // 0x24 NEW_2
	func_12587(); // 0x27 NEW_2
	var_4560_float = 0; // 0x29 PushV
	var_4561_float = 0; // 0x2a PushV
	func_290(var_4561_float); // 0x2b NEW_2
	var_4560_float = var_4561_float; // 0x2c Mov
	func_13947(var_4560_float); // 0x2e NEW_2
	var_4843_string = ""; var_4844_bool = 0; // 0x30 PushV
	var_4843_string = "burah_home@door1"; // 0x31 MovS
	var_4844_bool = 1; // 0x32 MovB
	func_183(var_4843_string, var_4844_bool); // 0x33 NEW_2
	
Label_53:
	Hold(); // 0x35 Func
	goto Label_53; // 0x37 Jump
}


func_12289(var_5573_bool)
{
	var_5576_int = 0; var_5577_string = ""; // 0x3002 PushV
	var_5577_string = "d3RubinVisit"; // 0x3003 MovS
	func_138(var_5576_int, var_5577_string); // 0x3004 NEW_2
	var_5578_int = 1; // 0x3006 PushI
	var_5579_bool = var_5576_int == var_5578_int; // 0x3007 Eq
	if(var_5579_bool == 0) goto Label_12299; // 0x3008 JumpB
	var_5573_bool = 1; // 0x3009 MovB
	return 0; // 0x300a Return
	
Label_12299:
	var_5573_bool = 0; // 0x300b MovB
	return 0; // 0x300c Return
}


func_1026(var_1323_int, var_1324_int)
{
	var_1325_bool = 0; // 0x403 PushV
	var_1325_bool = 1; // 0x404 MovB
	var_1326_int = 20; // 0x405 PushI
	var_1327_bool = var_1324_int >= var_1326_int; // 0x406 GE
	if(var_1327_bool == 0) goto Label_1043; // 0x407 JumpB
	var_1328_bool = 0; // 0x408 PushV
	var_1328_bool = 0; // 0x409 MovB
	var_1329_int = 6; // 0x40a PushI
	var_1330_bool = var_1324_int >= var_1329_int; // 0x40b GE
	if(var_1330_bool == 0) goto Label_1041; // 0x40c JumpB
	var_1331_int = 10; // 0x40d PushI
	var_1332_bool = var_1324_int < var_1331_int; // 0x40e LT
	if(var_1332_bool == 0) goto Label_1041; // 0x40f JumpB
	var_1328_bool = 1; // 0x410 MovB
	
Label_1041:
	if(var_1328_bool == 0) goto Label_1043; // 0x411 JumpB
	var_1325_bool = 0; // 0x412 MovB
	
Label_1043:
	if(var_1325_bool == 0) goto Label_1050; // 0x413 JumpB
	var_1333_int = 0; var_1334_bool = 0; // 0x414 PushV
	var_1333_int = var_1323_int; // 0x415 Mov
	var_1334_bool = 1; // 0x416 MovB
	func_785(var_1333_int, var_1334_bool); // 0x417 NEW_2
	goto Label_1055; // 0x419 Jump
	
Label_1055:
	return 0; // 0x41f Return
	
Label_1050:
	var_1335_int = 0; var_1336_bool = 0; // 0x41a PushV
	var_1335_int = var_1323_int; // 0x41b Mov
	var_1336_bool = 0; // 0x41c MovB
	func_785(var_1335_int, var_1336_bool); // 0x41d NEW_2
}


func_10246(var_5376_int, var_5377_float)
{
	var_5378_int = 0; var_5379_int = 0; var_5380_int = 0; var_5381_float = 0; // 0x2807 PushV
	var_5379_int = 522202; // 0x2808 MovI
	var_5380_int = 522201; // 0x2809 MovI
	var_5381_float = var_5377_float; // 0x280a Mov
	func_12495(var_5378_int, var_5379_int, var_5380_int, var_5381_float); // 0x280b NEW_2
	var_5376_int = var_5378_int; // 0x280c Mov
	return 0; // 0x280e Return
}


func_5130(var_3680_int, var_3681_int, var_3682_object, var_3683_object, var_3684_object, var_3685_object)
{
	var_3686_int = 0; // 0x140b PushI
	var_3687_bool = var_3681_int == var_3686_int; // 0x140c Eq
	if(var_3687_bool == 0) goto Label_5170; // 0x140d JumpB
	var_3688_int = 0; var_3689_bool = 0; // 0x140e PushV
	var_3688_int = 3; // 0x140f MovI
	var_3689_bool = 0; // 0x1410 MovB
	func_802(var_3688_int, var_3689_bool); // 0x1411 NEW_2
	var_3690_int = 0; var_3691_bool = 0; var_3692_int = 0; // 0x1413 PushV
	var_3690_int = 3; // 0x1414 MovI
	var_3691_bool = 0; // 0x1415 MovB
	var_3692_int = 1; // 0x1416 MovI
	func_819(var_3690_int, var_3691_bool, var_3692_int); // 0x1417 NEW_2
	var_3693_int = 0; var_3694_int = 0; var_3695_object = Obj(); var_3696_object = Obj(); var_3697_object = Obj(); // 0x1419 PushV
	var_3693_int = 3; // 0x141a MovI
	var_3694_int = var_3680_int; // 0x141b Mov
	var_3695_object = var_3682_object; // 0x141c Mov
	var_3696_object = var_3683_object; // 0x141d Mov
	var_3697_object = var_3684_object; // 0x141e Mov
	func_726(var_3693_int, var_3694_int, var_3695_object, var_3696_object, var_3697_object); // 0x141f NEW_2
	var_3698_object = Obj(); var_3699_int = 0; // 0x1421 PushV
	var_3698_object = var_3685_object; // 0x1422 Mov
	var_3699_int = 2; // 0x1423 MovI
	func_311(var_3699_int); // 0x1424 NEW_2
	var_3700_int = 0; var_3701_bool = 0; var_3702_int = 0; // 0x1426 PushV
	var_3700_int = 3; // 0x1427 MovI
	var_3701_bool = 0; // 0x1428 MovB
	var_3702_int = 7; // 0x1429 MovI
	func_876(var_3700_int, var_3701_bool, var_3702_int); // 0x142a NEW_2
	var_3703_int = 0; var_3704_bool = 0; var_3705_int = 0; // 0x142c PushV
	var_3703_int = 3; // 0x142d MovI
	var_3704_bool = 1; // 0x142e MovB
	var_3705_int = 7; // 0x142f MovI
	func_938(var_3703_int, var_3704_bool, var_3705_int); // 0x1430 NEW_2
	
Label_5170:
	var_3706_int = 0; var_3707_bool = 0; // 0x1432 PushV
	var_3706_int = 3; // 0x1433 MovI
	var_3707_bool = 0; // 0x1434 MovB
	func_785(var_3706_int, var_3707_bool); // 0x1435 NEW_2
	var_3708_int = 0; var_3709_int = 0; var_3710_int = 0; // 0x1437 PushV
	var_3708_int = 3; // 0x1438 MovI
	var_3709_int = var_3680_int; // 0x1439 Mov
	var_3710_int = var_3681_int; // 0x143a Mov
	func_3853(var_3708_int, var_3709_int, var_3710_int); // 0x143b NEW_2
	return 0; // 0x143d Return
}


func_12301(var_5557_bool)
{
	var_5560_int = 0; var_5561_string = ""; // 0x300e PushV
	var_5561_string = "d3GeorgVisit"; // 0x300f MovS
	func_138(var_5560_int, var_5561_string); // 0x3010 NEW_2
	var_5562_int = 1; // 0x3012 PushI
	var_5563_bool = var_5560_int == var_5562_int; // 0x3013 Eq
	if(var_5563_bool == 0) goto Label_12311; // 0x3014 JumpB
	var_5557_bool = 1; // 0x3015 MovB
	return 0; // 0x3016 Return
	
Label_12311:
	var_5557_bool = 0; // 0x3017 MovB
	return 0; // 0x3018 Return
}


func_8206()
{
	var_4415_object = Obj(); var_4416_object = Obj(); // 0x200e PushV
	GetMainOutdoorScene(var_4416_object); // 0x200f Func
	var_4417_object = GlobalVars[0]; // 0x2011 PushGE
	var_4418_object = Obj(); var_4419_object = Obj(); var_4420_int = 0; // 0x2012 PushV
	var_4419_object = var_4416_object; // 0x2013 Mov
	var_4420_int = 1; // 0x2014 MovI
	func_7768(var_4418_object, var_4419_object, var_4420_int); // 0x2015 NEW_2
	var_4417_object = var_4418_object; // 0x2016 Mov
	GlobalVars[0] = var_4417_object; // 0x2018 PopGE
	var_4440_object = GlobalVars[1]; // 0x2019 PushGE
	var_4441_object = Obj(); var_4442_object = Obj(); var_4443_int = 0; // 0x201a PushV
	var_4442_object = var_4416_object; // 0x201b Mov
	var_4443_int = 2; // 0x201c MovI
	func_7768(var_4441_object, var_4442_object, var_4443_int); // 0x201d NEW_2
	var_4440_object = var_4441_object; // 0x201e Mov
	GlobalVars[1] = var_4440_object; // 0x2020 PopGE
	var_4444_object = GlobalVars[2]; // 0x2021 PushGE
	var_4445_object = Obj(); var_4446_object = Obj(); var_4447_int = 0; // 0x2022 PushV
	var_4446_object = var_4416_object; // 0x2023 Mov
	var_4447_int = 3; // 0x2024 MovI
	func_7768(var_4445_object, var_4446_object, var_4447_int); // 0x2025 NEW_2
	var_4444_object = var_4445_object; // 0x2026 Mov
	GlobalVars[2] = var_4444_object; // 0x2028 PopGE
	var_4448_object = GlobalVars[3]; // 0x2029 PushGE
	var_4449_object = Obj(); var_4450_object = Obj(); var_4451_int = 0; // 0x202a PushV
	var_4450_object = var_4416_object; // 0x202b Mov
	var_4451_int = 4; // 0x202c MovI
	func_7768(var_4449_object, var_4450_object, var_4451_int); // 0x202d NEW_2
	var_4448_object = var_4449_object; // 0x202e Mov
	GlobalVars[3] = var_4448_object; // 0x2030 PopGE
	var_4452_object = GlobalVars[4]; // 0x2031 PushGE
	var_4453_object = Obj(); var_4454_object = Obj(); var_4455_int = 0; // 0x2032 PushV
	var_4454_object = var_4416_object; // 0x2033 Mov
	var_4455_int = 5; // 0x2034 MovI
	func_7768(var_4453_object, var_4454_object, var_4455_int); // 0x2035 NEW_2
	var_4452_object = var_4453_object; // 0x2036 Mov
	GlobalVars[4] = var_4452_object; // 0x2038 PopGE
	var_4456_object = GlobalVars[5]; // 0x2039 PushGE
	var_4457_object = Obj(); var_4458_object = Obj(); var_4459_int = 0; // 0x203a PushV
	var_4458_object = var_4416_object; // 0x203b Mov
	var_4459_int = 6; // 0x203c MovI
	func_7768(var_4457_object, var_4458_object, var_4459_int); // 0x203d NEW_2
	var_4456_object = var_4457_object; // 0x203e Mov
	GlobalVars[5] = var_4456_object; // 0x2040 PopGE
	var_4460_object = GlobalVars[12]; // 0x2041 PushGE
	var_4461_object = Obj(); // 0x2042 PushV
	func_132(var_4461_object); // 0x2043 NEW_2
	var_4460_object = var_4461_object; // 0x2044 Mov
	GlobalVars[12] = var_4460_object; // 0x2046 PopGE
	var_4462_bool = 0; // 0x2047 PushV
	var_4462_bool = 0; // 0x2048 MovB
	func_7779(var_4462_bool); // 0x2049 NEW_2
	func_8754(); // 0x204c NEW_2
	func_8829(); // 0x204f NEW_2
	var_4559_int = 100; // 0x2051 PushI
	SendWorldWndMessage(var_4559_int); // 0x2052 Func
	return 2; // 0x2054 Return
}


func_10255(var_5697_int, var_5698_float)
{
	var_5699_int = 0; var_5700_int = 0; var_5701_int = 0; var_5702_float = 0; // 0x2810 PushV
	var_5700_int = 502853; // 0x2811 MovI
	var_5701_int = 502852; // 0x2812 MovI
	var_5702_float = var_5698_float; // 0x2813 Mov
	func_12495(var_5699_int, var_5700_int, var_5701_int, var_5702_float); // 0x2814 NEW_2
	var_5697_int = var_5699_int; // 0x2815 Mov
	return 0; // 0x2817 Return
}


func_7188(var_3000_int, var_3001_int, var_3002_object, var_3003_object, var_3004_object, var_3005_object)
{
	var_3006_int = 0; // 0x1c15 PushI
	var_3007_bool = var_3001_int == var_3006_int; // 0x1c16 Eq
	if(var_3007_bool == 0) goto Label_7228; // 0x1c17 JumpB
	var_3008_int = 0; var_3009_bool = 0; // 0x1c18 PushV
	var_3008_int = 14; // 0x1c19 MovI
	var_3009_bool = 1; // 0x1c1a MovB
	func_802(var_3008_int, var_3009_bool); // 0x1c1b NEW_2
	var_3010_int = 0; var_3011_bool = 0; var_3012_int = 0; // 0x1c1d PushV
	var_3010_int = 14; // 0x1c1e MovI
	var_3011_bool = 1; // 0x1c1f MovB
	var_3012_int = 1; // 0x1c20 MovI
	func_819(var_3010_int, var_3011_bool, var_3012_int); // 0x1c21 NEW_2
	var_3013_int = 0; var_3014_int = 0; var_3015_object = Obj(); var_3016_object = Obj(); var_3017_object = Obj(); // 0x1c23 PushV
	var_3013_int = 14; // 0x1c24 MovI
	var_3014_int = var_3000_int; // 0x1c25 Mov
	var_3015_object = var_3002_object; // 0x1c26 Mov
	var_3016_object = var_3003_object; // 0x1c27 Mov
	var_3017_object = var_3004_object; // 0x1c28 Mov
	func_647(var_3013_int, var_3014_int, var_3015_object, var_3016_object, var_3017_object); // 0x1c29 NEW_2
	var_3018_object = Obj(); var_3019_int = 0; // 0x1c2b PushV
	var_3018_object = var_3005_object; // 0x1c2c Mov
	var_3019_int = 1; // 0x1c2d MovI
	func_311(var_3019_int); // 0x1c2e NEW_2
	var_3020_int = 0; var_3021_bool = 0; var_3022_int = 0; // 0x1c30 PushV
	var_3020_int = 14; // 0x1c31 MovI
	var_3021_bool = 1; // 0x1c32 MovB
	var_3022_int = 5; // 0x1c33 MovI
	func_876(var_3020_int, var_3021_bool, var_3022_int); // 0x1c34 NEW_2
	var_3023_int = 0; var_3024_bool = 0; var_3025_int = 0; // 0x1c36 PushV
	var_3023_int = 14; // 0x1c37 MovI
	var_3024_bool = 0; // 0x1c38 MovB
	var_3025_int = 5; // 0x1c39 MovI
	func_938(var_3023_int, var_3024_bool, var_3025_int); // 0x1c3a NEW_2
	
Label_7228:
	var_3026_int = 0; var_3027_bool = 0; // 0x1c3c PushV
	var_3026_int = 14; // 0x1c3d MovI
	var_3027_bool = 0; // 0x1c3e MovB
	func_785(var_3026_int, var_3027_bool); // 0x1c3f NEW_2
	var_3028_int = 0; var_3029_int = 0; var_3030_int = 0; // 0x1c41 PushV
	var_3028_int = 14; // 0x1c42 MovI
	var_3029_int = var_3000_int; // 0x1c43 Mov
	var_3030_int = var_3001_int; // 0x1c44 Mov
	func_2590(var_3028_int, var_3029_int, var_3030_int); // 0x1c45 NEW_2
	return 0; // 0x1c47 Return
}


func_6167(var_2835_int, var_2836_int, var_2837_object, var_2838_object, var_2839_object, var_2840_object)
{
	var_2841_int = 0; // 0x1818 PushI
	var_2842_bool = var_2836_int == var_2841_int; // 0x1819 Eq
	if(var_2842_bool == 0) goto Label_6207; // 0x181a JumpB
	var_2843_int = 0; var_2844_bool = 0; // 0x181b PushV
	var_2843_int = 9; // 0x181c MovI
	var_2844_bool = 1; // 0x181d MovB
	func_802(var_2843_int, var_2844_bool); // 0x181e NEW_2
	var_2845_int = 0; var_2846_bool = 0; var_2847_int = 0; // 0x1820 PushV
	var_2845_int = 9; // 0x1821 MovI
	var_2846_bool = 1; // 0x1822 MovB
	var_2847_int = 1; // 0x1823 MovI
	func_819(var_2845_int, var_2846_bool, var_2847_int); // 0x1824 NEW_2
	var_2848_int = 0; var_2849_int = 0; var_2850_object = Obj(); var_2851_object = Obj(); var_2852_object = Obj(); // 0x1826 PushV
	var_2848_int = 9; // 0x1827 MovI
	var_2849_int = var_2835_int; // 0x1828 Mov
	var_2850_object = var_2837_object; // 0x1829 Mov
	var_2851_object = var_2838_object; // 0x182a Mov
	var_2852_object = var_2839_object; // 0x182b Mov
	func_647(var_2848_int, var_2849_int, var_2850_object, var_2851_object, var_2852_object); // 0x182c NEW_2
	var_2853_object = Obj(); var_2854_int = 0; // 0x182e PushV
	var_2853_object = var_2840_object; // 0x182f Mov
	var_2854_int = 1; // 0x1830 MovI
	func_311(var_2854_int); // 0x1831 NEW_2
	var_2855_int = 0; var_2856_bool = 0; var_2857_int = 0; // 0x1833 PushV
	var_2855_int = 9; // 0x1834 MovI
	var_2856_bool = 1; // 0x1835 MovB
	var_2857_int = 7; // 0x1836 MovI
	func_876(var_2855_int, var_2856_bool, var_2857_int); // 0x1837 NEW_2
	var_2858_int = 0; var_2859_bool = 0; var_2860_int = 0; // 0x1839 PushV
	var_2858_int = 9; // 0x183a MovI
	var_2859_bool = 0; // 0x183b MovB
	var_2860_int = 7; // 0x183c MovI
	func_938(var_2858_int, var_2859_bool, var_2860_int); // 0x183d NEW_2
	
Label_6207:
	var_2861_int = 0; var_2862_bool = 0; // 0x183f PushV
	var_2861_int = 9; // 0x1840 MovI
	var_2862_bool = 0; // 0x1841 MovB
	func_785(var_2861_int, var_2862_bool); // 0x1842 NEW_2
	var_2863_int = 0; var_2864_int = 0; var_2865_int = 0; // 0x1844 PushV
	var_2863_int = 9; // 0x1845 MovI
	var_2864_int = var_2835_int; // 0x1846 Mov
	var_2865_int = var_2836_int; // 0x1847 Mov
	func_2770(var_2863_int, var_2864_int, var_2865_int); // 0x1848 NEW_2
	return 0; // 0x184a Return
}


func_10264(var_6267_int, var_6268_float)
{
	var_6269_int = 0; var_6270_int = 0; var_6271_int = 0; var_6272_float = 0; // 0x2819 PushV
	var_6270_int = 503175; // 0x281a MovI
	var_6271_int = 503174; // 0x281b MovI
	var_6272_float = var_6268_float; // 0x281c Mov
	func_12495(var_6269_int, var_6270_int, var_6271_int, var_6272_float); // 0x281d NEW_2
	var_6267_int = var_6269_int; // 0x281e Mov
	return 0; // 0x2820 Return
}


func_12313(var_5619_bool)
{
	var_5622_int = 0; var_5623_string = ""; // 0x301a PushV
	var_5623_string = "d4BigVladVisit"; // 0x301b MovS
	func_138(var_5622_int, var_5623_string); // 0x301c NEW_2
	var_5624_int = 1; // 0x301e PushI
	var_5625_bool = var_5622_int == var_5624_int; // 0x301f Eq
	if(var_5625_bool == 0) goto Label_12323; // 0x3020 JumpB
	var_5619_bool = 1; // 0x3021 MovB
	return 0; // 0x3022 Return
	
Label_12323:
	var_5619_bool = 0; // 0x3023 MovB
	return 0; // 0x3024 Return
}


func_1056(var_725_int, var_726_int)
{
	var_727_bool = 0; // 0x421 PushV
	var_727_bool = 1; // 0x422 MovB
	var_728_bool = 0; // 0x423 PushV
	var_728_bool = 1; // 0x424 MovB
	var_729_int = 22; // 0x425 PushI
	var_730_bool = var_726_int >= var_729_int; // 0x426 GE
	if(var_730_bool == 0) goto Label_1068; // 0x427 JumpB
	var_731_int = 4; // 0x428 PushI
	var_732_bool = var_726_int < var_731_int; // 0x429 LT
	if(var_732_bool == 0) goto Label_1068; // 0x42a JumpB
	var_728_bool = 0; // 0x42b MovB
	
Label_1068:
	if(var_728_bool == 0) goto Label_1080; // 0x42c JumpB
	var_733_bool = 0; // 0x42d PushV
	var_733_bool = 0; // 0x42e MovB
	var_734_int = 6; // 0x42f PushI
	var_735_bool = var_726_int >= var_734_int; // 0x430 GE
	if(var_735_bool == 0) goto Label_1078; // 0x431 JumpB
	var_736_int = 8; // 0x432 PushI
	var_737_bool = var_726_int < var_736_int; // 0x433 LT
	if(var_737_bool == 0) goto Label_1078; // 0x434 JumpB
	var_733_bool = 1; // 0x435 MovB
	
Label_1078:
	if(var_733_bool == 0) goto Label_1080; // 0x436 JumpB
	var_727_bool = 0; // 0x437 MovB
	
Label_1080:
	if(var_727_bool == 0) goto Label_1087; // 0x438 JumpB
	var_738_int = 0; var_739_bool = 0; // 0x439 PushV
	var_738_int = var_725_int; // 0x43a Mov
	var_739_bool = 1; // 0x43b MovB
	func_785(var_738_int, var_739_bool); // 0x43c NEW_2
	goto Label_1092; // 0x43e Jump
	
Label_1092:
	return 0; // 0x444 Return
	
Label_1087:
	var_749_int = 0; var_750_bool = 0; // 0x43f PushV
	var_749_int = var_725_int; // 0x440 Mov
	var_750_bool = 0; // 0x441 MovB
	func_785(var_749_int, var_750_bool); // 0x442 NEW_2
}


func_10273(var_5387_int, var_5388_float)
{
	var_5389_int = 0; var_5390_int = 0; var_5391_int = 0; var_5392_float = 0; // 0x2822 PushV
	var_5390_int = 522204; // 0x2823 MovI
	var_5391_int = 522203; // 0x2824 MovI
	var_5392_float = var_5388_float; // 0x2825 Mov
	func_12495(var_5389_int, var_5390_int, var_5391_int, var_5392_float); // 0x2826 NEW_2
	var_5387_int = var_5389_int; // 0x2827 Mov
	return 0; // 0x2829 Return
}


func_12325(var_4996_bool)
{
	var_4999_int = 0; var_5000_string = ""; // 0x3026 PushV
	var_5000_string = "d12q01KlaraVisit"; // 0x3027 MovS
	func_138(var_4999_int, var_5000_string); // 0x3028 NEW_2
	var_5001_int = 0; // 0x302a PushI
	var_5002_bool = var_4999_int != var_5001_int; // 0x302b Neq
	if(var_5002_bool == 0) goto Label_12335; // 0x302c JumpB
	var_4996_bool = 1; // 0x302d MovB
	return 0; // 0x302e Return
	
Label_12335:
	var_4996_bool = 0; // 0x302f MovB
	return 0; // 0x3030 Return
}


func_10282(var_5713_int, var_5714_float)
{
	var_5715_int = 0; var_5716_int = 0; var_5717_int = 0; var_5718_float = 0; // 0x282b PushV
	var_5716_int = 503177; // 0x282c MovI
	var_5717_int = 503176; // 0x282d MovI
	var_5718_float = var_5714_float; // 0x282e Mov
	func_12495(var_5715_int, var_5716_int, var_5717_int, var_5718_float); // 0x282f NEW_2
	var_5713_int = var_5715_int; // 0x2830 Mov
	return 0; // 0x2832 Return
}


func_12337(var_5689_bool)
{
	var_5692_int = 0; var_5693_string = ""; // 0x3032 PushV
	var_5693_string = "d5RubinVisit"; // 0x3033 MovS
	func_138(var_5692_int, var_5693_string); // 0x3034 NEW_2
	var_5694_int = 1; // 0x3036 PushI
	var_5695_bool = var_5692_int == var_5694_int; // 0x3037 Eq
	if(var_5695_bool == 0) goto Label_12347; // 0x3038 JumpB
	var_5689_bool = 1; // 0x3039 MovB
	return 0; // 0x303a Return
	
Label_12347:
	var_5689_bool = 0; // 0x303b MovB
	return 0; // 0x303c Return
}


func_10291(var_5643_int, var_5644_float)
{
	var_5645_int = 0; var_5646_int = 0; var_5647_int = 0; var_5648_float = 0; // 0x2834 PushV
	var_5646_int = 503181; // 0x2835 MovI
	var_5647_int = 503180; // 0x2836 MovI
	var_5648_float = var_5644_float; // 0x2837 Mov
	func_12495(var_5645_int, var_5646_int, var_5647_int, var_5648_float); // 0x2838 NEW_2
	var_5643_int = var_5645_int; // 0x2839 Mov
	return 0; // 0x283b Return
}


func_57()
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_object = Obj(); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x39 PushV
	var_14_string = "player"; // 0x3a PushS
	FindActor(var_9_object, var_14_string); // 0x3b Func
	var_15_string = "cot_eva"; // 0x3d PushS
	GetSceneByName(var_10_object, var_15_string); // 0x3e Func
	var_16_bool = var_10_object == 0; // 0x40 Not
	if(var_16_bool == 0) goto Label_70; // 0x41 JumpB
	var_17_string = "Starting scene not found"; // 0x42 PushS
	Trace(var_17_string); // 0x43 Func
	return 10; // 0x45 Return
	
Label_70:
	var_18_string = "pt_birth_Danko"; // 0x46 PushS
	GetLocator(var_18_string, var_11_bool, var_12_cvector, var_13_cvector); // 0x47 ObjFunc
	var_19_bool = var_11_bool; // 0x49 Push
	if(var_19_bool == 0) goto Label_77; // 0x4a JumpB
	Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector); // 0x4b Func
	
Label_77:
	return 10; // 0x4d Return
}


func_10300(var_5729_int, var_5730_float)
{
	var_5731_int = 0; var_5732_int = 0; var_5733_int = 0; var_5734_float = 0; // 0x283d PushV
	var_5732_int = 503179; // 0x283e MovI
	var_5733_int = 503178; // 0x283f MovI
	var_5734_float = var_5730_float; // 0x2840 Mov
	func_12495(var_5731_int, var_5732_int, var_5733_int, var_5734_float); // 0x2841 NEW_2
	var_5729_int = var_5731_int; // 0x2842 Mov
	return 0; // 0x2844 Return
}


func_14397(var_4900_bool, var_4901_int)
{
	var_4902_int = 6; // 0x383e PushI
	add(var_4902_int); // 0x383f ObjFunc
	var_4903_int = 26; // 0x3841 PushI
	add(var_4903_int); // 0x3842 ObjFunc
	var_4904_int = 2; // 0x3844 PushI
	add(var_4904_int); // 0x3845 ObjFunc
	var_4905_int = 22; // 0x3847 PushI
	add(var_4905_int); // 0x3848 ObjFunc
	var_4906_bool = 0; // 0x384a PushB
	var_4907_bool = var_4900_bool == var_4906_bool; // 0x384b Eq
	if(var_4907_bool == 0) goto Label_14423; // 0x384c JumpB
	var_4908_int = 15; // 0x384d PushI
	add(var_4908_int); // 0x384e ObjFunc
	var_4909_int = 5; // 0x3850 PushI
	add(var_4909_int); // 0x3851 ObjFunc
	var_4910_int = 16; // 0x3853 PushI
	add(var_4910_int); // 0x3854 ObjFunc
	goto Label_14429; // 0x3856 Jump
	
Label_14429:
	return 0; // 0x385d Return
	
Label_14423:
	var_4911_int = 0; // 0x3857 PushI
	var_4912_bool = var_4901_int != var_4911_int; // 0x3858 Neq
	if(var_4912_bool == 0) goto Label_14429; // 0x3859 JumpB
	var_4913_int = 15; // 0x385a PushI
	add(var_4913_int); // 0x385b ObjFunc
}


func_12349(var_5635_bool)
{
	var_5638_int = 0; var_5639_string = ""; // 0x303e PushV
	var_5639_string = "d6KapellaVisit"; // 0x303f MovS
	func_138(var_5638_int, var_5639_string); // 0x3040 NEW_2
	var_5640_int = 1; // 0x3042 PushI
	var_5641_bool = var_5638_int == var_5640_int; // 0x3043 Eq
	if(var_5641_bool == 0) goto Label_12359; // 0x3044 JumpB
	var_5635_bool = 1; // 0x3045 MovB
	return 0; // 0x3046 Return
	
Label_12359:
	var_5635_bool = 0; // 0x3047 MovB
	return 0; // 0x3048 Return
}


func_5182()
{
	var_124_string = "dt_house3_08_i2"; // 0x143f PushS
	add(var_124_string); // 0x1440 ObjFunc
	var_125_string = "dt_house3_09"; // 0x1442 PushS
	add(var_125_string); // 0x1443 ObjFunc
	var_126_string = "dt_house3_09_i2"; // 0x1445 PushS
	add(var_126_string); // 0x1446 ObjFunc
	var_127_string = "house1_se_03l"; // 0x1448 PushS
	add(var_127_string); // 0x1449 ObjFunc
	var_128_string = "house1_se_03r"; // 0x144b PushS
	add(var_128_string); // 0x144c ObjFunc
	var_129_string = "house1_se_01l"; // 0x144e PushS
	add(var_129_string); // 0x144f ObjFunc
	var_130_string = "house1_se_01r"; // 0x1451 PushS
	add(var_130_string); // 0x1452 ObjFunc
	var_131_string = "house1_se_04l"; // 0x1454 PushS
	add(var_131_string); // 0x1455 ObjFunc
	var_132_string = "house1_se_04r"; // 0x1457 PushS
	add(var_132_string); // 0x1458 ObjFunc
	var_133_string = "house5_11"; // 0x145a PushS
	add(var_133_string); // 0x145b ObjFunc
	var_134_string = "house5_09"; // 0x145d PushS
	add(var_134_string); // 0x145e ObjFunc
	var_135_string = "house5_13"; // 0x1460 PushS
	add(var_135_string); // 0x1461 ObjFunc
	var_136_string = "house5_12"; // 0x1463 PushS
	add(var_136_string); // 0x1464 ObjFunc
	var_137_string = "house5_14"; // 0x1466 PushS
	add(var_137_string); // 0x1467 ObjFunc
	var_138_string = "house5_unoin03l"; // 0x1469 PushS
	add(var_138_string); // 0x146a ObjFunc
	var_139_string = "house5_unoin03r"; // 0x146c PushS
	add(var_139_string); // 0x146d ObjFunc
	var_140_string = "house5_unoin02l"; // 0x146f PushS
	add(var_140_string); // 0x1470 ObjFunc
	var_141_string = "house5_unoin02r"; // 0x1472 PushS
	add(var_141_string); // 0x1473 ObjFunc
	var_142_string = "house5_unoin01l"; // 0x1475 PushS
	add(var_142_string); // 0x1476 ObjFunc
	var_143_string = "house5_unoin01r"; // 0x1478 PushS
	add(var_143_string); // 0x1479 ObjFunc
	return 0; // 0x147b Return
}


func_10309(var_5966_int, var_5967_float)
{
	var_5968_int = 0; var_5969_int = 0; var_5970_int = 0; var_5971_float = 0; // 0x2846 PushV
	var_5969_int = 512530; // 0x2847 MovI
	var_5970_int = 512529; // 0x2848 MovI
	var_5971_float = var_5967_float; // 0x2849 Mov
	func_12495(var_5968_int, var_5969_int, var_5970_int, var_5971_float); // 0x284a NEW_2
	var_5966_int = var_5968_int; // 0x284b Mov
	return 0; // 0x284d Return
}


func_1093(var_1796_int, var_1797_int)
{
	var_1798_bool = 0; // 0x446 PushV
	var_1798_bool = 1; // 0x447 MovB
	var_1799_int = 22; // 0x448 PushI
	var_1800_bool = var_1797_int >= var_1799_int; // 0x449 GE
	if(var_1800_bool == 0) goto Label_1103; // 0x44a JumpB
	var_1801_int = 6; // 0x44b PushI
	var_1802_bool = var_1797_int < var_1801_int; // 0x44c LT
	if(var_1802_bool == 0) goto Label_1103; // 0x44d JumpB
	var_1798_bool = 0; // 0x44e MovB
	
Label_1103:
	if(var_1798_bool == 0) goto Label_1110; // 0x44f JumpB
	var_1803_int = 0; var_1804_bool = 0; // 0x450 PushV
	var_1803_int = var_1796_int; // 0x451 Mov
	var_1804_bool = 1; // 0x452 MovB
	func_785(var_1803_int, var_1804_bool); // 0x453 NEW_2
	goto Label_1115; // 0x455 Jump
	
Label_1115:
	return 0; // 0x45b Return
	
Label_1110:
	var_1805_int = 0; var_1806_bool = 0; // 0x456 PushV
	var_1805_int = var_1796_int; // 0x457 Mov
	var_1806_bool = 0; // 0x458 MovB
	func_785(var_1805_int, var_1806_bool); // 0x459 NEW_2
}


func_3143(var_2119_int, var_2120_int, var_2121_int)
{
	var_2122_int = 0; var_2123_int = 0; var_2124_int = 0; var_2125_int = 0; // 0xc47 PushV
	var_2126_bool = 0; // 0xc48 PushV
	var_2126_bool = 0; // 0xc49 MovB
	var_2127_int = 8; // 0xc4a PushI
	var_2128_bool = var_2121_int > var_2127_int; // 0xc4b GT
	if(var_2128_bool == 0) goto Label_3153; // 0xc4c JumpB
	var_2129_int = 21; // 0xc4d PushI
	var_2130_bool = var_2121_int < var_2129_int; // 0xc4e LT
	if(var_2130_bool == 0) goto Label_3153; // 0xc4f JumpB
	var_2126_bool = 1; // 0xc50 MovB
	
Label_3153:
	if(var_2126_bool == 0) goto Label_3208; // 0xc51 JumpB
	var_2131_int = 0; var_2132_string = ""; var_2133_string = ""; var_2134_int = 0; // 0xc52 PushV
	var_2131_int = var_2119_int; // 0xc53 Mov
	var_2132_string = "pers_vaxxabit"; // 0xc54 MovS
	var_2133_string = "vaxxabit_d.xml"; // 0xc55 MovS
	var_2134_int = 5; // 0xc56 MovI
	func_509(var_2131_int, var_2132_string, var_2133_string, var_2134_int); // 0xc57 NEW_2
	var_2135_int = 0; var_2136_string = ""; var_2137_string = ""; var_2138_int = 0; // 0xc59 PushV
	var_2135_int = var_2119_int; // 0xc5a Mov
	var_2136_string = "pers_vaxxabitka"; // 0xc5b MovS
	var_2137_string = "vaxxabitka_d.xml"; // 0xc5c MovS
	var_2138_int = 5; // 0xc5d MovI
	func_509(var_2135_int, var_2136_string, var_2137_string, var_2138_int); // 0xc5e NEW_2
	var_2139_int = 0; var_2140_string = ""; var_2141_string = ""; var_2142_int = 0; // 0xc60 PushV
	var_2139_int = var_2119_int; // 0xc61 Mov
	var_2140_string = "pers_rat_big"; // 0xc62 MovS
	var_2141_string = "rat_big.xml"; // 0xc63 MovS
	var_2142_int = 2; // 0xc64 MovI
	func_509(var_2139_int, var_2140_string, var_2141_string, var_2142_int); // 0xc65 NEW_2
	var_2143_int = 0; var_2144_string = ""; var_2145_string = ""; var_2146_int = 0; // 0xc67 PushV
	var_2143_int = var_2119_int; // 0xc68 Mov
	var_2144_string = "fog"; // 0xc69 MovS
	var_2145_string = "fog.xml"; // 0xc6a MovS
	var_2146_int = 6; // 0xc6b MovI
	func_535(var_2143_int, var_2144_string, var_2145_string, var_2146_int); // 0xc6c NEW_2
	var_2151_int = 5; // 0xc6e PushI
	var_2152_bool = var_2120_int >= var_2151_int; // 0xc6f GE
	if(var_2152_bool == 0) goto Label_3192; // 0xc70 JumpB
	var_2153_int = 0; var_2154_string = ""; var_2155_string = ""; var_2156_int = 0; // 0xc71 PushV
	var_2153_int = var_2119_int; // 0xc72 Mov
	var_2154_string = "fog"; // 0xc73 MovS
	var_2155_string = "fog_hunter.xml"; // 0xc74 MovS
	var_2156_int = 2; // 0xc75 MovI
	func_535(var_2153_int, var_2154_string, var_2155_string, var_2156_int); // 0xc76 NEW_2
	
Label_3192:
	var_2157_int = 1; // 0xc78 PushI
	var_2158_float = 0; var_2159_int = 0; // 0xc79 PushV
	var_2159_int = var_2120_int; // 0xc7a Mov
	func_1261(var_2158_float, var_2159_int); // 0xc7b NEW_2
	var_2124_int = var_2157_int * var_2158_float; // 0xc7d Mult2
	var_2204_int = var_2124_int; // 0xc7e Push
	if(var_2204_int == 0) goto Label_3207; // 0xc7f JumpB
	var_2205_int = 0; var_2206_string = ""; var_2207_string = ""; var_2208_int = 0; // 0xc80 PushV
	var_2205_int = var_2119_int; // 0xc81 Mov
	var_2206_string = "pers_bomber"; // 0xc82 MovS
	var_2207_string = "bomber.xml"; // 0xc83 MovS
	var_2208_int = var_2124_int; // 0xc84 Mov
	func_509(var_2205_int, var_2206_string, var_2207_string, var_2208_int); // 0xc85 NEW_2
	
Label_3207:
	goto Label_3261; // 0xc87 Jump
	
Label_3261:
	var_2209_bool = 0; var_2210_int = 0; // 0xcbd PushV
	var_2210_int = var_2120_int; // 0xcbe Mov
	func_1378(var_2209_bool, var_2210_int); // 0xcbf NEW_2
	if(var_2209_bool == 0) goto Label_3273; // 0xcc1 JumpB
	var_2212_int = 0; var_2213_string = ""; var_2214_string = ""; var_2215_int = 0; // 0xcc2 PushV
	var_2212_int = var_2119_int; // 0xcc3 Mov
	var_2213_string = "pers_sanitar"; // 0xcc4 MovS
	var_2214_string = "sanitar.xml"; // 0xcc5 MovS
	var_2215_int = 2; // 0xcc6 MovI
	func_509(var_2212_int, var_2213_string, var_2214_string, var_2215_int); // 0xcc7 NEW_2
	
Label_3273:
	var_2216_int = 0; var_2217_string = ""; var_2218_string = ""; var_2219_int = 0; var_2220_int = 0; var_2221_int = 0; // 0xcc9 PushV
	var_2216_int = var_2119_int; // 0xcca Mov
	var_2217_string = "pers_worker"; // 0xccb MovS
	var_2218_string = "agony1_man.xml"; // 0xccc MovS
	var_2219_int = 2; // 0xccd MovI
	var_2220_int = 4; // 0xcce MovI
	var_2221_int = 4; // 0xccf MovI
	func_522(var_2216_int, var_2217_string, var_2218_string, var_2219_int, var_2220_int, var_2221_int); // 0xcd0 NEW_2
	var_2226_int = 0; var_2227_string = ""; var_2228_string = ""; var_2229_int = 0; var_2230_int = 0; var_2231_int = 0; // 0xcd2 PushV
	var_2226_int = var_2119_int; // 0xcd3 Mov
	var_2227_string = "pers_unosha"; // 0xcd4 MovS
	var_2228_string = "agony1_man.xml"; // 0xcd5 MovS
	var_2229_int = 2; // 0xcd6 MovI
	var_2230_int = 4; // 0xcd7 MovI
	var_2231_int = 4; // 0xcd8 MovI
	func_522(var_2226_int, var_2227_string, var_2228_string, var_2229_int, var_2230_int, var_2231_int); // 0xcd9 NEW_2
	var_2232_int = 0; var_2233_string = ""; var_2234_string = ""; var_2235_int = 0; var_2236_int = 0; var_2237_int = 0; // 0xcdb PushV
	var_2232_int = var_2119_int; // 0xcdc Mov
	var_2233_string = "pers_woman"; // 0xcdd MovS
	var_2234_string = "agony1_woman.xml"; // 0xcde MovS
	var_2235_int = 2; // 0xcdf MovI
	var_2236_int = 4; // 0xce0 MovI
	var_2237_int = 4; // 0xce1 MovI
	func_522(var_2232_int, var_2233_string, var_2234_string, var_2235_int, var_2236_int, var_2237_int); // 0xce2 NEW_2
	var_2238_int = 0; var_2239_string = ""; var_2240_string = ""; var_2241_int = 0; var_2242_int = 0; var_2243_int = 0; // 0xce4 PushV
	var_2238_int = var_2119_int; // 0xce5 Mov
	var_2239_string = "pers_wasted_girl"; // 0xce6 MovS
	var_2240_string = "agony1_woman.xml"; // 0xce7 MovS
	var_2241_int = 2; // 0xce8 MovI
	var_2242_int = 4; // 0xce9 MovI
	var_2243_int = 4; // 0xcea MovI
	func_522(var_2238_int, var_2239_string, var_2240_string, var_2241_int, var_2242_int, var_2243_int); // 0xceb NEW_2
	return 4; // 0xced Return
	
Label_3208:
	var_2244_int = 0; var_2245_string = ""; var_2246_string = ""; var_2247_int = 0; // 0xc88 PushV
	var_2244_int = var_2119_int; // 0xc89 Mov
	var_2245_string = "pers_vaxxabit"; // 0xc8a MovS
	var_2246_string = "vaxxabit_d.xml"; // 0xc8b MovS
	var_2247_int = 4; // 0xc8c MovI
	func_509(var_2244_int, var_2245_string, var_2246_string, var_2247_int); // 0xc8d NEW_2
	var_2248_int = 0; var_2249_string = ""; var_2250_string = ""; var_2251_int = 0; // 0xc8f PushV
	var_2248_int = var_2119_int; // 0xc90 Mov
	var_2249_string = "pers_vaxxabitka"; // 0xc91 MovS
	var_2250_string = "vaxxabitka_d.xml"; // 0xc92 MovS
	var_2251_int = 4; // 0xc93 MovI
	func_509(var_2248_int, var_2249_string, var_2250_string, var_2251_int); // 0xc94 NEW_2
	var_2252_int = 0; var_2253_string = ""; var_2254_string = ""; var_2255_int = 0; // 0xc96 PushV
	var_2252_int = var_2119_int; // 0xc97 Mov
	var_2253_string = "pers_rat_big"; // 0xc98 MovS
	var_2254_string = "rat_big.xml"; // 0xc99 MovS
	var_2255_int = 3; // 0xc9a MovI
	func_509(var_2252_int, var_2253_string, var_2254_string, var_2255_int); // 0xc9b NEW_2
	var_2256_int = 0; var_2257_string = ""; var_2258_string = ""; var_2259_int = 0; // 0xc9d PushV
	var_2256_int = var_2119_int; // 0xc9e Mov
	var_2257_string = "fog"; // 0xc9f MovS
	var_2258_string = "fog.xml"; // 0xca0 MovS
	var_2259_int = 6; // 0xca1 MovI
	func_535(var_2256_int, var_2257_string, var_2258_string, var_2259_int); // 0xca2 NEW_2
	var_2260_int = 5; // 0xca4 PushI
	var_2261_bool = var_2120_int >= var_2260_int; // 0xca5 GE
	if(var_2261_bool == 0) goto Label_3246; // 0xca6 JumpB
	var_2262_int = 0; var_2263_string = ""; var_2264_string = ""; var_2265_int = 0; // 0xca7 PushV
	var_2262_int = var_2119_int; // 0xca8 Mov
	var_2263_string = "fog"; // 0xca9 MovS
	var_2264_string = "fog_hunter.xml"; // 0xcaa MovS
	var_2265_int = 2; // 0xcab MovI
	func_535(var_2262_int, var_2263_string, var_2264_string, var_2265_int); // 0xcac NEW_2
	
Label_3246:
	var_2266_int = 2; // 0xcae PushI
	var_2267_float = 0; var_2268_int = 0; // 0xcaf PushV
	var_2268_int = var_2120_int; // 0xcb0 Mov
	func_1261(var_2267_float, var_2268_int); // 0xcb1 NEW_2
	var_2125_int = var_2266_int * var_2267_float; // 0xcb3 Mult2
	var_2269_int = var_2125_int; // 0xcb4 Push
	if(var_2269_int == 0) goto Label_3261; // 0xcb5 JumpB
	var_2270_int = 0; var_2271_string = ""; var_2272_string = ""; var_2273_int = 0; // 0xcb6 PushV
	var_2270_int = var_2119_int; // 0xcb7 Mov
	var_2271_string = "pers_bomber"; // 0xcb8 MovS
	var_2272_string = "bomber.xml"; // 0xcb9 MovS
	var_2273_int = var_2125_int; // 0xcba Mov
	func_509(var_2270_int, var_2271_string, var_2272_string, var_2273_int); // 0xcbb NEW_2
}


func_7240(var_4130_int, var_4131_int, var_4132_object, var_4133_object, var_4134_object, var_4135_object)
{
	var_4136_int = 0; // 0x1c49 PushI
	var_4137_bool = var_4131_int == var_4136_int; // 0x1c4a Eq
	if(var_4137_bool == 0) goto Label_7280; // 0x1c4b JumpB
	var_4138_int = 0; var_4139_bool = 0; // 0x1c4c PushV
	var_4138_int = 14; // 0x1c4d MovI
	var_4139_bool = 0; // 0x1c4e MovB
	func_802(var_4138_int, var_4139_bool); // 0x1c4f NEW_2
	var_4140_int = 0; var_4141_bool = 0; var_4142_int = 0; // 0x1c51 PushV
	var_4140_int = 14; // 0x1c52 MovI
	var_4141_bool = 0; // 0x1c53 MovB
	var_4142_int = 1; // 0x1c54 MovI
	func_819(var_4140_int, var_4141_bool, var_4142_int); // 0x1c55 NEW_2
	var_4143_int = 0; var_4144_int = 0; var_4145_object = Obj(); var_4146_object = Obj(); var_4147_object = Obj(); // 0x1c57 PushV
	var_4143_int = 14; // 0x1c58 MovI
	var_4144_int = var_4130_int; // 0x1c59 Mov
	var_4145_object = var_4132_object; // 0x1c5a Mov
	var_4146_object = var_4133_object; // 0x1c5b Mov
	var_4147_object = var_4134_object; // 0x1c5c Mov
	func_726(var_4143_int, var_4144_int, var_4145_object, var_4146_object, var_4147_object); // 0x1c5d NEW_2
	var_4148_object = Obj(); var_4149_int = 0; // 0x1c5f PushV
	var_4148_object = var_4135_object; // 0x1c60 Mov
	var_4149_int = 2; // 0x1c61 MovI
	func_311(var_4149_int); // 0x1c62 NEW_2
	var_4150_int = 0; var_4151_bool = 0; var_4152_int = 0; // 0x1c64 PushV
	var_4150_int = 14; // 0x1c65 MovI
	var_4151_bool = 0; // 0x1c66 MovB
	var_4152_int = 5; // 0x1c67 MovI
	func_876(var_4150_int, var_4151_bool, var_4152_int); // 0x1c68 NEW_2
	var_4153_int = 0; var_4154_bool = 0; var_4155_int = 0; // 0x1c6a PushV
	var_4153_int = 14; // 0x1c6b MovI
	var_4154_bool = 1; // 0x1c6c MovB
	var_4155_int = 5; // 0x1c6d MovI
	func_938(var_4153_int, var_4154_bool, var_4155_int); // 0x1c6e NEW_2
	
Label_7280:
	var_4156_int = 0; var_4157_bool = 0; // 0x1c70 PushV
	var_4156_int = 14; // 0x1c71 MovI
	var_4157_bool = 0; // 0x1c72 MovB
	func_785(var_4156_int, var_4157_bool); // 0x1c73 NEW_2
	var_4158_int = 0; var_4159_int = 0; var_4160_int = 0; // 0x1c75 PushV
	var_4158_int = 14; // 0x1c76 MovI
	var_4159_int = var_4130_int; // 0x1c77 Mov
	var_4160_int = var_4131_int; // 0x1c78 Mov
	func_3477(var_4158_int, var_4159_int, var_4160_int); // 0x1c79 NEW_2
	return 0; // 0x1c7b Return
}


func_12361(var_5721_bool)
{
	var_5724_int = 0; var_5725_string = ""; // 0x304a PushV
	var_5725_string = "d6MariaVisit"; // 0x304b MovS
	func_138(var_5724_int, var_5725_string); // 0x304c NEW_2
	var_5726_int = 1; // 0x304e PushI
	var_5727_bool = var_5724_int == var_5726_int; // 0x304f Eq
	if(var_5727_bool == 0) goto Label_12371; // 0x3050 JumpB
	var_5721_bool = 1; // 0x3051 MovB
	return 0; // 0x3052 Return
	
Label_12371:
	var_5721_bool = 0; // 0x3053 MovB
	return 0; // 0x3054 Return
}


func_6219(var_3965_int, var_3966_int, var_3967_object, var_3968_object, var_3969_object, var_3970_object)
{
	var_3971_int = 0; // 0x184c PushI
	var_3972_bool = var_3966_int == var_3971_int; // 0x184d Eq
	if(var_3972_bool == 0) goto Label_6259; // 0x184e JumpB
	var_3973_int = 0; var_3974_bool = 0; // 0x184f PushV
	var_3973_int = 9; // 0x1850 MovI
	var_3974_bool = 0; // 0x1851 MovB
	func_802(var_3973_int, var_3974_bool); // 0x1852 NEW_2
	var_3975_int = 0; var_3976_bool = 0; var_3977_int = 0; // 0x1854 PushV
	var_3975_int = 9; // 0x1855 MovI
	var_3976_bool = 0; // 0x1856 MovB
	var_3977_int = 1; // 0x1857 MovI
	func_819(var_3975_int, var_3976_bool, var_3977_int); // 0x1858 NEW_2
	var_3978_int = 0; var_3979_int = 0; var_3980_object = Obj(); var_3981_object = Obj(); var_3982_object = Obj(); // 0x185a PushV
	var_3978_int = 9; // 0x185b MovI
	var_3979_int = var_3965_int; // 0x185c Mov
	var_3980_object = var_3967_object; // 0x185d Mov
	var_3981_object = var_3968_object; // 0x185e Mov
	var_3982_object = var_3969_object; // 0x185f Mov
	func_726(var_3978_int, var_3979_int, var_3980_object, var_3981_object, var_3982_object); // 0x1860 NEW_2
	var_3983_object = Obj(); var_3984_int = 0; // 0x1862 PushV
	var_3983_object = var_3970_object; // 0x1863 Mov
	var_3984_int = 2; // 0x1864 MovI
	func_311(var_3984_int); // 0x1865 NEW_2
	var_3985_int = 0; var_3986_bool = 0; var_3987_int = 0; // 0x1867 PushV
	var_3985_int = 9; // 0x1868 MovI
	var_3986_bool = 0; // 0x1869 MovB
	var_3987_int = 7; // 0x186a MovI
	func_876(var_3985_int, var_3986_bool, var_3987_int); // 0x186b NEW_2
	var_3988_int = 0; var_3989_bool = 0; var_3990_int = 0; // 0x186d PushV
	var_3988_int = 9; // 0x186e MovI
	var_3989_bool = 1; // 0x186f MovB
	var_3990_int = 7; // 0x1870 MovI
	func_938(var_3988_int, var_3989_bool, var_3990_int); // 0x1871 NEW_2
	
Label_6259:
	var_3991_int = 0; var_3992_bool = 0; // 0x1873 PushV
	var_3991_int = 9; // 0x1874 MovI
	var_3992_bool = 0; // 0x1875 MovB
	func_785(var_3991_int, var_3992_bool); // 0x1876 NEW_2
	var_3993_int = 0; var_3994_int = 0; var_3995_int = 0; // 0x1878 PushV
	var_3993_int = 9; // 0x1879 MovI
	var_3994_int = var_3965_int; // 0x187a Mov
	var_3995_int = var_3966_int; // 0x187b Mov
	func_3665(var_3993_int, var_3994_int, var_3995_int); // 0x187c NEW_2
	return 0; // 0x187e Return
}


func_10318(var_5659_int, var_5660_float)
{
	var_5661_int = 0; var_5662_int = 0; var_5663_int = 0; var_5664_float = 0; // 0x284f PushV
	var_5662_int = 515382; // 0x2850 MovI
	var_5663_int = 515381; // 0x2851 MovI
	var_5664_float = var_5660_float; // 0x2852 Mov
	func_12495(var_5661_int, var_5662_int, var_5663_int, var_5664_float); // 0x2853 NEW_2
	var_5659_int = var_5661_int; // 0x2854 Mov
	return 0; // 0x2856 Return
}


func_80(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x50 PushV
	var_103_string = "player"; // 0x51 PushS
	FindActor(var_102_object, var_103_string); // 0x52 Func
	var_100_object = var_102_object; // 0x54 Mov
	return 2; // 0x55 Return
}


func_12373(var_5705_bool)
{
	var_5708_int = 0; var_5709_string = ""; // 0x3056 PushV
	var_5709_string = "d6BigVladVisit"; // 0x3057 MovS
	func_138(var_5708_int, var_5709_string); // 0x3058 NEW_2
	var_5710_int = 1; // 0x305a PushI
	var_5711_bool = var_5708_int == var_5710_int; // 0x305b Eq
	if(var_5711_bool == 0) goto Label_12383; // 0x305c JumpB
	var_5705_bool = 1; // 0x305d MovB
	return 0; // 0x305e Return
	
Label_12383:
	var_5705_bool = 0; // 0x305f MovB
	return 0; // 0x3060 Return
}


func_8278(var_4157_int, var_4158_int)
{
	var_4160_bool = 0; var_4161_int = 0; var_4162_int = 0; var_4163_bool = 0; var_4164_int = 0; var_4165_int = 0; // 0x2056 PushV
	var_4166_int = 0; // 0x2057 PushI
	var_4167_bool = var_4158_int == var_4166_int; // 0x2058 Eq
	if(var_4167_bool == 0) goto Label_8575; // 0x2059 JumpB
	var_4163_bool = 0; // 0x205a MovB
	var_4168_int = 2; // 0x205b PushI
	var_4169_bool = var_4157_int == var_4168_int; // 0x205c Eq
	if(var_4169_bool == 0) goto Label_8325; // 0x205d JumpB
	var_4170_int = 0; // 0x205e PushV
	func_12520(var_4170_int); // 0x205f NEW_2
	var_4171_int = 0; // 0x2061 PushI
	var_4172_bool = var_4170_int == var_4171_int; // 0x2062 Eq
	if(var_4172_bool == 0) goto Label_8306; // 0x2063 JumpB
	var_4173_string = "d1q01"; // 0x2064 PushS
	GetVariable(var_4173_string, var_4164_int); // 0x2065 Func
	var_4174_int = 1000; // 0x2067 PushI
	var_4175_bool = var_4164_int != var_4174_int; // 0x2068 Neq
	if(var_4175_bool == 0) goto Label_8305; // 0x2069 JumpB
	var_4163_bool = 1; // 0x206a MovB
	var_4176_string = "ACHIEVEMENT_UP"; // 0x206b PushS
	UnlockAchievement(var_4176_string); // 0x206c Func
	var_4177_string = "gameover_fail.xml"; // 0x206e PushS
	GameOver(var_4177_string); // 0x206f Func
	
Label_8305:
	goto Label_8325; // 0x2071 Jump
	
Label_8325:
	var_4178_bool = var_4163_bool == 0; // 0x2085 Not
	if(var_4178_bool == 0) goto Label_8569; // 0x2086 JumpB
	var_4179_int = 0; // 0x2087 PushV
	func_12520(var_4179_int); // 0x2088 NEW_2
	var_4180_int = 0; // 0x208a PushI
	var_4181_bool = var_4179_int == var_4180_int; // 0x208b Eq
	if(var_4181_bool == 0) goto Label_8410; // 0x208c JumpB
	var_4182_int = 2; // 0x208d PushI
	var_4183_bool = var_4157_int == var_4182_int; // 0x208e Eq
	if(var_4183_bool == 0) goto Label_8340; // 0x208f JumpB
	var_4184_string = "ACHIEVEMENT_BACH_1"; // 0x2090 PushS
	UnlockAchievement(var_4184_string); // 0x2091 Func
	goto Label_8409; // 0x2093 Jump
	
Label_8409:
	goto Label_8569; // 0x20d9 Jump
	
Label_8569:
	var_4185_int = 101; // 0x2179 PushI
	SendWorldWndMessage(var_4185_int); // 0x217a Func
	var_4186_string = "c_iWM_RealDayChange"; // 0x217c PushS
	SetVariable(var_4186_string, var_4157_int); // 0x217d Func
	
Label_8575:
	return 6; // 0x217f Return
	
Label_8340:
	var_4187_int = 3; // 0x2094 PushI
	var_4188_bool = var_4157_int == var_4187_int; // 0x2095 Eq
	if(var_4188_bool == 0) goto Label_8347; // 0x2096 JumpB
	var_4189_string = "ACHIEVEMENT_BACH_2"; // 0x2097 PushS
	UnlockAchievement(var_4189_string); // 0x2098 Func
	goto Label_8409; // 0x209a Jump
	
Label_8347:
	var_4190_int = 4; // 0x209b PushI
	var_4191_bool = var_4157_int == var_4190_int; // 0x209c Eq
	if(var_4191_bool == 0) goto Label_8354; // 0x209d JumpB
	var_4192_string = "ACHIEVEMENT_BACH_3"; // 0x209e PushS
	UnlockAchievement(var_4192_string); // 0x209f Func
	goto Label_8409; // 0x20a1 Jump
	
Label_8354:
	var_4193_int = 5; // 0x20a2 PushI
	var_4194_bool = var_4157_int == var_4193_int; // 0x20a3 Eq
	if(var_4194_bool == 0) goto Label_8361; // 0x20a4 JumpB
	var_4195_string = "ACHIEVEMENT_BACH_4"; // 0x20a5 PushS
	UnlockAchievement(var_4195_string); // 0x20a6 Func
	goto Label_8409; // 0x20a8 Jump
	
Label_8361:
	var_4196_int = 6; // 0x20a9 PushI
	var_4197_bool = var_4157_int == var_4196_int; // 0x20aa Eq
	if(var_4197_bool == 0) goto Label_8368; // 0x20ab JumpB
	var_4198_string = "ACHIEVEMENT_BACH_5"; // 0x20ac PushS
	UnlockAchievement(var_4198_string); // 0x20ad Func
	goto Label_8409; // 0x20af Jump
	
Label_8368:
	var_4199_int = 7; // 0x20b0 PushI
	var_4200_bool = var_4157_int == var_4199_int; // 0x20b1 Eq
	if(var_4200_bool == 0) goto Label_8375; // 0x20b2 JumpB
	var_4201_string = "ACHIEVEMENT_BACH_6"; // 0x20b3 PushS
	UnlockAchievement(var_4201_string); // 0x20b4 Func
	goto Label_8409; // 0x20b6 Jump
	
Label_8375:
	var_4202_int = 8; // 0x20b7 PushI
	var_4203_bool = var_4157_int == var_4202_int; // 0x20b8 Eq
	if(var_4203_bool == 0) goto Label_8382; // 0x20b9 JumpB
	var_4204_string = "ACHIEVEMENT_BACH_7"; // 0x20ba PushS
	UnlockAchievement(var_4204_string); // 0x20bb Func
	goto Label_8409; // 0x20bd Jump
	
Label_8382:
	var_4205_int = 9; // 0x20be PushI
	var_4206_bool = var_4157_int == var_4205_int; // 0x20bf Eq
	if(var_4206_bool == 0) goto Label_8389; // 0x20c0 JumpB
	var_4207_string = "ACHIEVEMENT_BACH_8"; // 0x20c1 PushS
	UnlockAchievement(var_4207_string); // 0x20c2 Func
	goto Label_8409; // 0x20c4 Jump
	
Label_8389:
	var_4208_int = 10; // 0x20c5 PushI
	var_4209_bool = var_4157_int == var_4208_int; // 0x20c6 Eq
	if(var_4209_bool == 0) goto Label_8396; // 0x20c7 JumpB
	var_4210_string = "ACHIEVEMENT_BACH_9"; // 0x20c8 PushS
	UnlockAchievement(var_4210_string); // 0x20c9 Func
	goto Label_8409; // 0x20cb Jump
	
Label_8396:
	var_4211_int = 11; // 0x20cc PushI
	var_4212_bool = var_4157_int == var_4211_int; // 0x20cd Eq
	if(var_4212_bool == 0) goto Label_8403; // 0x20ce JumpB
	var_4213_string = "ACHIEVEMENT_BACH_10"; // 0x20cf PushS
	UnlockAchievement(var_4213_string); // 0x20d0 Func
	goto Label_8409; // 0x20d2 Jump
	
Label_8403:
	var_4214_int = 12; // 0x20d3 PushI
	var_4215_bool = var_4157_int == var_4214_int; // 0x20d4 Eq
	if(var_4215_bool == 0) goto Label_8409; // 0x20d5 JumpB
	var_4216_string = "ACHIEVEMENT_BACH_11"; // 0x20d6 PushS
	UnlockAchievement(var_4216_string); // 0x20d7 Func
	
Label_8410:
	var_4217_int = 0; // 0x20da PushV
	func_12520(var_4217_int); // 0x20db NEW_2
	var_4218_int = 1; // 0x20dd PushI
	var_4219_bool = var_4217_int == var_4218_int; // 0x20de Eq
	if(var_4219_bool == 0) goto Label_8493; // 0x20df JumpB
	var_4220_int = 2; // 0x20e0 PushI
	var_4221_bool = var_4157_int == var_4220_int; // 0x20e1 Eq
	if(var_4221_bool == 0) goto Label_8423; // 0x20e2 JumpB
	var_4222_string = "ACHIEVEMENT_BURAH_1"; // 0x20e3 PushS
	UnlockAchievement(var_4222_string); // 0x20e4 Func
	goto Label_8492; // 0x20e6 Jump
	
Label_8492:
	goto Label_8569; // 0x212c Jump
	
Label_8423:
	var_4223_int = 3; // 0x20e7 PushI
	var_4224_bool = var_4157_int == var_4223_int; // 0x20e8 Eq
	if(var_4224_bool == 0) goto Label_8430; // 0x20e9 JumpB
	var_4225_string = "ACHIEVEMENT_BURAH_2"; // 0x20ea PushS
	UnlockAchievement(var_4225_string); // 0x20eb Func
	goto Label_8492; // 0x20ed Jump
	
Label_8430:
	var_4226_int = 4; // 0x20ee PushI
	var_4227_bool = var_4157_int == var_4226_int; // 0x20ef Eq
	if(var_4227_bool == 0) goto Label_8437; // 0x20f0 JumpB
	var_4228_string = "ACHIEVEMENT_BURAH_3"; // 0x20f1 PushS
	UnlockAchievement(var_4228_string); // 0x20f2 Func
	goto Label_8492; // 0x20f4 Jump
	
Label_8437:
	var_4229_int = 5; // 0x20f5 PushI
	var_4230_bool = var_4157_int == var_4229_int; // 0x20f6 Eq
	if(var_4230_bool == 0) goto Label_8444; // 0x20f7 JumpB
	var_4231_string = "ACHIEVEMENT_BURAH_4"; // 0x20f8 PushS
	UnlockAchievement(var_4231_string); // 0x20f9 Func
	goto Label_8492; // 0x20fb Jump
	
Label_8444:
	var_4232_int = 6; // 0x20fc PushI
	var_4233_bool = var_4157_int == var_4232_int; // 0x20fd Eq
	if(var_4233_bool == 0) goto Label_8451; // 0x20fe JumpB
	var_4234_string = "ACHIEVEMENT_BURAH_5"; // 0x20ff PushS
	UnlockAchievement(var_4234_string); // 0x2100 Func
	goto Label_8492; // 0x2102 Jump
	
Label_8451:
	var_4235_int = 7; // 0x2103 PushI
	var_4236_bool = var_4157_int == var_4235_int; // 0x2104 Eq
	if(var_4236_bool == 0) goto Label_8458; // 0x2105 JumpB
	var_4237_string = "ACHIEVEMENT_BURAH_6"; // 0x2106 PushS
	UnlockAchievement(var_4237_string); // 0x2107 Func
	goto Label_8492; // 0x2109 Jump
	
Label_8458:
	var_4238_int = 8; // 0x210a PushI
	var_4239_bool = var_4157_int == var_4238_int; // 0x210b Eq
	if(var_4239_bool == 0) goto Label_8465; // 0x210c JumpB
	var_4240_string = "ACHIEVEMENT_BURAH_7"; // 0x210d PushS
	UnlockAchievement(var_4240_string); // 0x210e Func
	goto Label_8492; // 0x2110 Jump
	
Label_8465:
	var_4241_int = 9; // 0x2111 PushI
	var_4242_bool = var_4157_int == var_4241_int; // 0x2112 Eq
	if(var_4242_bool == 0) goto Label_8472; // 0x2113 JumpB
	var_4243_string = "ACHIEVEMENT_BURAH_8"; // 0x2114 PushS
	UnlockAchievement(var_4243_string); // 0x2115 Func
	goto Label_8492; // 0x2117 Jump
	
Label_8472:
	var_4244_int = 10; // 0x2118 PushI
	var_4245_bool = var_4157_int == var_4244_int; // 0x2119 Eq
	if(var_4245_bool == 0) goto Label_8479; // 0x211a JumpB
	var_4246_string = "ACHIEVEMENT_BURAH_9"; // 0x211b PushS
	UnlockAchievement(var_4246_string); // 0x211c Func
	goto Label_8492; // 0x211e Jump
	
Label_8479:
	var_4247_int = 11; // 0x211f PushI
	var_4248_bool = var_4157_int == var_4247_int; // 0x2120 Eq
	if(var_4248_bool == 0) goto Label_8486; // 0x2121 JumpB
	var_4249_string = "ACHIEVEMENT_BURAH_10"; // 0x2122 PushS
	UnlockAchievement(var_4249_string); // 0x2123 Func
	goto Label_8492; // 0x2125 Jump
	
Label_8486:
	var_4250_int = 12; // 0x2126 PushI
	var_4251_bool = var_4157_int == var_4250_int; // 0x2127 Eq
	if(var_4251_bool == 0) goto Label_8492; // 0x2128 JumpB
	var_4252_string = "ACHIEVEMENT_BURAH_11"; // 0x2129 PushS
	UnlockAchievement(var_4252_string); // 0x212a Func
	
Label_8493:
	var_4253_int = 2; // 0x212d PushI
	var_4254_bool = var_4157_int == var_4253_int; // 0x212e Eq
	if(var_4254_bool == 0) goto Label_8500; // 0x212f JumpB
	var_4255_string = "ACHIEVEMENT_CLARA_1"; // 0x2130 PushS
	UnlockAchievement(var_4255_string); // 0x2131 Func
	goto Label_8569; // 0x2133 Jump
	
Label_8500:
	var_4256_int = 3; // 0x2134 PushI
	var_4257_bool = var_4157_int == var_4256_int; // 0x2135 Eq
	if(var_4257_bool == 0) goto Label_8507; // 0x2136 JumpB
	var_4258_string = "ACHIEVEMENT_CLARA_2"; // 0x2137 PushS
	UnlockAchievement(var_4258_string); // 0x2138 Func
	goto Label_8569; // 0x213a Jump
	
Label_8507:
	var_4259_int = 4; // 0x213b PushI
	var_4260_bool = var_4157_int == var_4259_int; // 0x213c Eq
	if(var_4260_bool == 0) goto Label_8514; // 0x213d JumpB
	var_4261_string = "ACHIEVEMENT_CLARA_3"; // 0x213e PushS
	UnlockAchievement(var_4261_string); // 0x213f Func
	goto Label_8569; // 0x2141 Jump
	
Label_8514:
	var_4262_int = 5; // 0x2142 PushI
	var_4263_bool = var_4157_int == var_4262_int; // 0x2143 Eq
	if(var_4263_bool == 0) goto Label_8521; // 0x2144 JumpB
	var_4264_string = "ACHIEVEMENT_CLARA_4"; // 0x2145 PushS
	UnlockAchievement(var_4264_string); // 0x2146 Func
	goto Label_8569; // 0x2148 Jump
	
Label_8521:
	var_4265_int = 6; // 0x2149 PushI
	var_4266_bool = var_4157_int == var_4265_int; // 0x214a Eq
	if(var_4266_bool == 0) goto Label_8528; // 0x214b JumpB
	var_4267_string = "ACHIEVEMENT_CLARA_5"; // 0x214c PushS
	UnlockAchievement(var_4267_string); // 0x214d Func
	goto Label_8569; // 0x214f Jump
	
Label_8528:
	var_4268_int = 7; // 0x2150 PushI
	var_4269_bool = var_4157_int == var_4268_int; // 0x2151 Eq
	if(var_4269_bool == 0) goto Label_8535; // 0x2152 JumpB
	var_4270_string = "ACHIEVEMENT_CLARA_6"; // 0x2153 PushS
	UnlockAchievement(var_4270_string); // 0x2154 Func
	goto Label_8569; // 0x2156 Jump
	
Label_8535:
	var_4271_int = 8; // 0x2157 PushI
	var_4272_bool = var_4157_int == var_4271_int; // 0x2158 Eq
	if(var_4272_bool == 0) goto Label_8542; // 0x2159 JumpB
	var_4273_string = "ACHIEVEMENT_CLARA_7"; // 0x215a PushS
	UnlockAchievement(var_4273_string); // 0x215b Func
	goto Label_8569; // 0x215d Jump
	
Label_8542:
	var_4274_int = 9; // 0x215e PushI
	var_4275_bool = var_4157_int == var_4274_int; // 0x215f Eq
	if(var_4275_bool == 0) goto Label_8549; // 0x2160 JumpB
	var_4276_string = "ACHIEVEMENT_CLARA_8"; // 0x2161 PushS
	UnlockAchievement(var_4276_string); // 0x2162 Func
	goto Label_8569; // 0x2164 Jump
	
Label_8549:
	var_4277_int = 10; // 0x2165 PushI
	var_4278_bool = var_4157_int == var_4277_int; // 0x2166 Eq
	if(var_4278_bool == 0) goto Label_8556; // 0x2167 JumpB
	var_4279_string = "ACHIEVEMENT_CLARA_9"; // 0x2168 PushS
	UnlockAchievement(var_4279_string); // 0x2169 Func
	goto Label_8569; // 0x216b Jump
	
Label_8556:
	var_4280_int = 11; // 0x216c PushI
	var_4281_bool = var_4157_int == var_4280_int; // 0x216d Eq
	if(var_4281_bool == 0) goto Label_8563; // 0x216e JumpB
	var_4282_string = "ACHIEVEMENT_CLARA_10"; // 0x216f PushS
	UnlockAchievement(var_4282_string); // 0x2170 Func
	goto Label_8569; // 0x2172 Jump
	
Label_8563:
	var_4283_int = 12; // 0x2173 PushI
	var_4284_bool = var_4157_int == var_4283_int; // 0x2174 Eq
	if(var_4284_bool == 0) goto Label_8569; // 0x2175 JumpB
	var_4285_string = "ACHIEVEMENT_CLARA_11"; // 0x2176 PushS
	UnlockAchievement(var_4285_string); // 0x2177 Func
	
Label_8306:
	var_4286_int = 0; // 0x2072 PushV
	func_12520(var_4286_int); // 0x2073 NEW_2
	var_4287_int = 1; // 0x2075 PushI
	var_4288_bool = var_4286_int == var_4287_int; // 0x2076 Eq
	if(var_4288_bool == 0) goto Label_8325; // 0x2077 JumpB
	var_4289_string = "b1q01"; // 0x2078 PushS
	GetVariable(var_4289_string, var_4165_int); // 0x2079 Func
	var_4290_int = 1000; // 0x207b PushI
	var_4291_bool = var_4165_int != var_4290_int; // 0x207c Neq
	if(var_4291_bool == 0) goto Label_8325; // 0x207d JumpB
	var_4163_bool = 1; // 0x207e MovB
	var_4292_string = "ACHIEVEMENT_UP"; // 0x207f PushS
	UnlockAchievement(var_4292_string); // 0x2080 Func
	var_4293_string = "gameover_fail.xml"; // 0x2082 PushS
	GameOver(var_4293_string); // 0x2083 Func
}


func_87(var_586_bool, var_587_object, var_588_string)
{
	var_589_bool = 0; var_590_bool = 0; // 0x57 PushV
	var_591_string = "HasProperty"; // 0x58 PushS
	var_592_int = 2; // 0x59 PushI
	var_593_bool = IsFuncExist(var_587_object, var_591_string, var_592_int); // 0x5a FuncExist
	var_594_bool = var_593_bool == 0; // 0x5b Not
	if(var_594_bool == 0) goto Label_95; // 0x5c JumpB
	var_586_bool = 0; // 0x5d MovB
	return 2; // 0x5e Return
	
Label_95:
	HasProperty(var_588_string, var_590_bool); // 0x5f ObjFunc
	var_586_bool = var_590_bool; // 0x61 Mov
	return 2; // 0x62 Return
}


func_10327(var_5753_int, var_5754_float)
{
	var_5755_int = 0; var_5756_int = 0; var_5757_int = 0; var_5758_float = 0; // 0x2858 PushV
	var_5756_int = 515433; // 0x2859 MovI
	var_5757_int = 515432; // 0x285a MovI
	var_5758_float = var_5754_float; // 0x285b Mov
	func_12495(var_5755_int, var_5756_int, var_5757_int, var_5758_float); // 0x285c NEW_2
	var_5753_int = var_5755_int; // 0x285d Mov
	return 0; // 0x285f Return
}


func_1116(var_792_bool, var_793_int, var_794_int)
{
	var_795_int = 0; var_796_int = 0; // 0x45c PushV
	var_797_int = 0; // 0x45d PushV
	func_12520(var_797_int); // 0x45e NEW_2
	var_796_int = var_797_int; // 0x45f Mov
	var_801_int = 1; // 0x461 PushI
	var_802_bool = var_796_int == var_801_int; // 0x462 Eq
	if(var_802_bool == 0) goto Label_1137; // 0x463 JumpB
	var_803_bool = 0; // 0x464 PushV
	var_803_bool = 0; // 0x465 MovB
	var_804_int = 0; // 0x466 PushI
	var_805_bool = var_793_int == var_804_int; // 0x467 Eq
	if(var_805_bool == 0) goto Label_1133; // 0x468 JumpB
	var_806_int = 21; // 0x469 PushI
	var_807_bool = var_794_int < var_806_int; // 0x46a LT
	if(var_807_bool == 0) goto Label_1133; // 0x46b JumpB
	var_803_bool = 1; // 0x46c MovB
	
Label_1133:
	if(var_803_bool == 0) goto Label_1136; // 0x46d JumpB
	var_792_bool = 1; // 0x46e MovB
	return 2; // 0x46f Return
	
Label_1136:
	goto Label_1145; // 0x470 Jump
	
Label_1145:
	var_792_bool = 0; // 0x479 MovB
	return 2; // 0x47a Return
	
Label_1137:
	var_808_int = 2; // 0x471 PushI
	var_809_bool = var_796_int == var_808_int; // 0x472 Eq
	if(var_809_bool == 0) goto Label_1145; // 0x473 JumpB
	var_810_int = 5; // 0x474 PushI
	var_811_bool = var_793_int == var_810_int; // 0x475 Eq
	if(var_811_bool == 0) goto Label_1145; // 0x476 JumpB
	var_792_bool = 1; // 0x477 MovB
	return 2; // 0x478 Return
}


func_14430(var_4915_int)
{
	var_4916_int = 0; var_4917_int = 0; // 0x385e PushV
	var_4918_string = "vol_"; // 0x385f PushS
	var_4919_int = var_4918_string + var_4915_int; // 0x3860 Add
	GetVariable(var_4919_int, var_4917_int); // 0x3861 Func
	var_4920_string = "vol_"; // 0x3863 PushS
	var_4921_int = var_4920_string + var_4915_int; // 0x3864 Add
	var_4922_int = 8; // 0x3865 PushI
	var_4923_int = var_4917_int | var_4922_int; // 0x3866 Or
	SetVariable(var_4921_int, var_4923_int); // 0x3867 Func
	return 2; // 0x3869 Return
}


func_10336(var_5395_int, var_5396_float)
{
	var_5397_int = 0; var_5398_int = 0; var_5399_int = 0; var_5400_float = 0; // 0x2861 PushV
	var_5398_int = 522206; // 0x2862 MovI
	var_5399_int = 522205; // 0x2863 MovI
	var_5400_float = var_5396_float; // 0x2864 Mov
	func_12495(var_5397_int, var_5398_int, var_5399_int, var_5400_float); // 0x2865 NEW_2
	var_5395_int = var_5397_int; // 0x2866 Mov
	return 0; // 0x2868 Return
}


func_12385(var_5651_bool)
{
	var_5654_int = 0; var_5655_string = ""; // 0x3062 PushV
	var_5655_string = "d6ViktorVisit"; // 0x3063 MovS
	func_138(var_5654_int, var_5655_string); // 0x3064 NEW_2
	var_5656_int = 1; // 0x3066 PushI
	var_5657_bool = var_5654_int == var_5656_int; // 0x3067 Eq
	if(var_5657_bool == 0) goto Label_12395; // 0x3068 JumpB
	var_5651_bool = 1; // 0x3069 MovB
	return 0; // 0x306a Return
	
Label_12395:
	var_5651_bool = 0; // 0x306b MovB
	return 0; // 0x306c Return
}


func_99(var_4826_bool, var_4827_object, var_4828_string, var_4829_float, var_4830_float, var_4831_float)
{
	var_4832_float = 0; var_4833_float = 0; // 0x63 PushV
	var_4834_bool = 0; var_4835_object = Obj(); var_4836_string = ""; // 0x64 PushV
	var_4835_object = var_4827_object; // 0x65 Mov
	var_4836_string = var_4828_string; // 0x66 Mov
	func_87(var_4834_bool, var_4835_object, var_4836_string); // 0x67 NEW_2
	var_4837_bool = var_4834_bool == 0; // 0x69 Not
	if(var_4837_bool == 0) goto Label_109; // 0x6a JumpB
	var_4826_bool = 0; // 0x6b MovB
	return 2; // 0x6c Return
	
Label_109:
	GetProperty(var_4828_string, var_4833_float); // 0x6d ObjFunc
	var_4838_float = 0; var_4839_float = 0; var_4840_float = 0; var_4841_float = 0; // 0x6f PushV
	var_4839_float = var_4833_float + var_4829_float; // 0x70 Add2
	var_4840_float = var_4830_float; // 0x71 Mov
	var_4841_float = var_4831_float; // 0x72 Mov
	func_121(var_4838_float, var_4839_float, var_4840_float, var_4841_float); // 0x73 NEW_2
	SetProperty(var_4828_string, var_4838_float); // 0x75 ObjFunc
	var_4826_bool = 1; // 0x77 MovB
	return 2; // 0x78 Return
}


func_10345(var_5489_int, var_5490_float)
{
	var_5491_int = 0; var_5492_int = 0; var_5493_int = 0; var_5494_float = 0; // 0x286a PushV
	var_5492_int = 515439; // 0x286b MovI
	var_5493_int = 515438; // 0x286c MovI
	var_5494_float = var_5490_float; // 0x286d Mov
	func_12495(var_5491_int, var_5492_int, var_5493_int, var_5494_float); // 0x286e NEW_2
	var_5489_int = var_5491_int; // 0x286f Mov
	return 0; // 0x2871 Return
}


func_14442()
{
	var_4891_object = Obj(); var_4892_int = 0; var_4893_int = 0; var_4894_int = 0; var_4895_object = Obj(); var_4896_int = 0; var_4897_int = 0; var_4898_int = 0; // 0x386a PushV
	CreateIntVector(var_4895_object); // 0x386b Func
	var_4899_object = Obj(); var_4900_bool = 0; var_4901_int = 0; // 0x386d PushV
	var_4899_object = var_4895_object; // 0x386e Mov
	var_4900_bool = 0; // 0x386f MovB
	var_4901_int = -1; // 0x3870 MovI
	func_14397(var_4900_bool, var_4901_int); // 0x3871 NEW_2
	size(var_4896_int); // 0x3873 ObjFunc
	var_4897_int = 0; // 0x3875 MovI
	
Label_14454:
	var_4914_bool = var_4897_int < var_4896_int; // 0x3876 LT
	if(var_4914_bool == 0) goto Label_14465; // 0x3877 JumpB
	get(var_4898_int, var_4897_int); // 0x3878 ObjFunc
	var_4915_int = 0; // 0x387a PushV
	var_4915_int = var_4898_int; // 0x387b Mov
	func_14430(var_4915_int); // 0x387c NEW_2
	var_4924_int = 1; // 0x387e PushI
	var_4897_int = var_4897_int + var_4924_int; // 0x387f Add2
	goto Label_14454; // 0x3880 Jump
	
Label_14465:
	return 8; // 0x3881 Return
}


func_12397(var_5745_bool)
{
	var_5748_int = 0; var_5749_string = ""; // 0x306e PushV
	var_5749_string = "d7AglajaVisit"; // 0x306f MovS
	func_138(var_5748_int, var_5749_string); // 0x3070 NEW_2
	var_5750_int = 1; // 0x3072 PushI
	var_5751_bool = var_5748_int == var_5750_int; // 0x3073 Eq
	if(var_5751_bool == 0) goto Label_12407; // 0x3074 JumpB
	var_5745_bool = 1; // 0x3075 MovB
	return 0; // 0x3076 Return
	
Label_12407:
	var_5745_bool = 0; // 0x3077 MovB
	return 0; // 0x3078 Return
}


func_10354(var_5737_int, var_5738_float)
{
	var_5739_int = 0; var_5740_int = 0; var_5741_int = 0; var_5742_float = 0; // 0x2873 PushV
	var_5740_int = 515431; // 0x2874 MovI
	var_5741_int = 515430; // 0x2875 MovI
	var_5742_float = var_5738_float; // 0x2876 Mov
	func_12495(var_5739_int, var_5740_int, var_5741_int, var_5742_float); // 0x2877 NEW_2
	var_5737_int = var_5739_int; // 0x2878 Mov
	return 0; // 0x287a Return
}


func_4216(var_3429_int, var_3430_int, var_3431_int)
{
	var_3432_int = 0; var_3433_int = 0; var_3434_int = 0; var_3435_int = 0; var_3436_int = 0; var_3437_int = 0; var_3438_int = 0; var_3439_int = 0; // 0x1078 PushV
	var_3440_bool = 0; // 0x1079 PushV
	var_3440_bool = 0; // 0x107a MovB
	var_3441_int = 8; // 0x107b PushI
	var_3442_bool = var_3431_int > var_3441_int; // 0x107c GT
	if(var_3442_bool == 0) goto Label_4226; // 0x107d JumpB
	var_3443_int = 21; // 0x107e PushI
	var_3444_bool = var_3431_int < var_3443_int; // 0x107f LT
	if(var_3444_bool == 0) goto Label_4226; // 0x1080 JumpB
	var_3440_bool = 1; // 0x1081 MovB
	
Label_4226:
	if(var_3440_bool == 0) goto Label_4303; // 0x1082 JumpB
	var_3445_int = 0; var_3446_string = ""; var_3447_string = ""; var_3448_int = 0; // 0x1083 PushV
	var_3445_int = var_3429_int; // 0x1084 Mov
	var_3446_string = "pers_rat"; // 0x1085 MovS
	var_3447_string = "rat.xml"; // 0x1086 MovS
	var_3448_int = 4; // 0x1087 MovI
	func_509(var_3445_int, var_3446_string, var_3447_string, var_3448_int); // 0x1088 NEW_2
	var_3449_int = 0; var_3450_string = ""; var_3451_string = ""; var_3452_int = 0; // 0x108a PushV
	var_3449_int = var_3429_int; // 0x108b Mov
	var_3450_string = "pers_alkash"; // 0x108c MovS
	var_3451_string = "alkash.xml"; // 0x108d MovS
	var_3452_int = 2; // 0x108e MovI
	func_509(var_3449_int, var_3450_string, var_3451_string, var_3452_int); // 0x108f NEW_2
	var_3453_int = 0; var_3454_string = ""; var_3455_string = ""; var_3456_int = 0; // 0x1091 PushV
	var_3453_int = var_3429_int; // 0x1092 Mov
	var_3454_string = "pers_dohodyaga"; // 0x1093 MovS
	var_3455_string = "dohodyaga.xml"; // 0x1094 MovS
	var_3456_int = 1; // 0x1095 MovI
	func_509(var_3453_int, var_3454_string, var_3455_string, var_3456_int); // 0x1096 NEW_2
	var_3457_int = 2; // 0x1098 PushI
	var_3458_float = 0; var_3459_int = 0; // 0x1099 PushV
	var_3459_int = var_3430_int; // 0x109a Mov
	func_1171(var_3458_float, var_3459_int); // 0x109b NEW_2
	var_3436_int = var_3457_int * var_3458_float; // 0x109d Mult2
	var_3460_int = var_3436_int; // 0x109e Push
	if(var_3460_int == 0) goto Label_4263; // 0x109f JumpB
	var_3461_int = 0; var_3462_string = ""; var_3463_string = ""; var_3464_int = 0; // 0x10a0 PushV
	var_3461_int = var_3429_int; // 0x10a1 Mov
	var_3462_string = "pers_grabitel"; // 0x10a2 MovS
	var_3463_string = "grabitel.xml"; // 0x10a3 MovS
	var_3464_int = var_3436_int; // 0x10a4 Mov
	func_509(var_3461_int, var_3462_string, var_3463_string, var_3464_int); // 0x10a5 NEW_2
	
Label_4263:
	var_3465_int = 1; // 0x10a7 PushI
	var_3466_int = var_3430_int + var_3465_int; // 0x10a8 Add
	var_3467_int = 2; // 0x10a9 PushI
	var_3468_bool = var_3466_int >= var_3467_int; // 0x10aa GE
	if(var_3468_bool == 0) goto Label_4287; // 0x10ab JumpB
	var_3469_int = 0; var_3470_string = ""; var_3471_string = ""; var_3472_int = 0; // 0x10ac PushV
	var_3469_int = var_3429_int; // 0x10ad Mov
	var_3470_string = "pers_patrool"; // 0x10ae MovS
	var_3471_string = "patrol.xml"; // 0x10af MovS
	var_3472_int = 2; // 0x10b0 MovI
	func_509(var_3469_int, var_3470_string, var_3471_string, var_3472_int); // 0x10b1 NEW_2
	var_3473_bool = 0; var_3474_int = 0; // 0x10b3 PushV
	var_3474_int = var_3430_int; // 0x10b4 Mov
	func_1378(var_3473_bool, var_3474_int); // 0x10b5 NEW_2
	if(var_3473_bool == 0) goto Label_4287; // 0x10b7 JumpB
	var_3475_int = 0; var_3476_string = ""; var_3477_string = ""; var_3478_int = 0; // 0x10b8 PushV
	var_3475_int = var_3429_int; // 0x10b9 Mov
	var_3476_string = "pers_soldat_hand"; // 0x10ba MovS
	var_3477_string = "soldier_patrol.xml"; // 0x10bb MovS
	var_3478_int = 1; // 0x10bc MovI
	func_509(var_3475_int, var_3476_string, var_3477_string, var_3478_int); // 0x10bd NEW_2
	
Label_4287:
	var_3479_int = 1; // 0x10bf PushI
	var_3480_float = 0; var_3481_int = 0; // 0x10c0 PushV
	var_3481_int = var_3430_int; // 0x10c1 Mov
	func_1261(var_3480_float, var_3481_int); // 0x10c2 NEW_2
	var_3437_int = var_3479_int * var_3480_float; // 0x10c4 Mult2
	var_3482_int = var_3437_int; // 0x10c5 Push
	if(var_3482_int == 0) goto Label_4302; // 0x10c6 JumpB
	var_3483_int = 0; var_3484_string = ""; var_3485_string = ""; var_3486_int = 0; // 0x10c7 PushV
	var_3483_int = var_3429_int; // 0x10c8 Mov
	var_3484_string = "pers_bomber"; // 0x10c9 MovS
	var_3485_string = "bomber.xml"; // 0x10ca MovS
	var_3486_int = var_3437_int; // 0x10cb Mov
	func_509(var_3483_int, var_3484_string, var_3485_string, var_3486_int); // 0x10cc NEW_2
	
Label_4302:
	goto Label_4378; // 0x10ce Jump
	
Label_4378:
	var_3487_bool = 0; var_3488_int = 0; // 0x111a PushV
	var_3488_int = var_3430_int; // 0x111b Mov
	func_1378(var_3487_bool, var_3488_int); // 0x111c NEW_2
	if(var_3487_bool == 0) goto Label_4390; // 0x111e JumpB
	var_3489_int = 0; var_3490_string = ""; var_3491_string = ""; var_3492_int = 0; // 0x111f PushV
	var_3489_int = var_3429_int; // 0x1120 Mov
	var_3490_string = "pers_sanitar"; // 0x1121 MovS
	var_3491_string = "sanitar.xml"; // 0x1122 MovS
	var_3492_int = 2; // 0x1123 MovI
	func_509(var_3489_int, var_3490_string, var_3491_string, var_3492_int); // 0x1124 NEW_2
	
Label_4390:
	return 8; // 0x1126 Return
	
Label_4303:
	var_3493_int = 0; var_3494_string = ""; var_3495_string = ""; var_3496_int = 0; // 0x10cf PushV
	var_3493_int = var_3429_int; // 0x10d0 Mov
	var_3494_string = "pers_rat"; // 0x10d1 MovS
	var_3495_string = "rat.xml"; // 0x10d2 MovS
	var_3496_int = 8; // 0x10d3 MovI
	func_509(var_3493_int, var_3494_string, var_3495_string, var_3496_int); // 0x10d4 NEW_2
	var_3497_int = 0; var_3498_string = ""; var_3499_string = ""; var_3500_int = 0; // 0x10d6 PushV
	var_3497_int = var_3429_int; // 0x10d7 Mov
	var_3498_string = "pers_alkash"; // 0x10d8 MovS
	var_3499_string = "alkash.xml"; // 0x10d9 MovS
	var_3500_int = 1; // 0x10da MovI
	func_509(var_3497_int, var_3498_string, var_3499_string, var_3500_int); // 0x10db NEW_2
	var_3501_int = 0; var_3502_string = ""; var_3503_string = ""; var_3504_int = 0; // 0x10dd PushV
	var_3501_int = var_3429_int; // 0x10de Mov
	var_3502_string = "pers_dohodyaga"; // 0x10df MovS
	var_3503_string = "dohodyaga.xml"; // 0x10e0 MovS
	var_3504_int = 1; // 0x10e1 MovI
	func_509(var_3501_int, var_3502_string, var_3503_string, var_3504_int); // 0x10e2 NEW_2
	var_3505_int = 3; // 0x10e4 PushI
	var_3506_float = 0; var_3507_int = 0; // 0x10e5 PushV
	var_3507_int = var_3430_int; // 0x10e6 Mov
	func_1171(var_3506_float, var_3507_int); // 0x10e7 NEW_2
	var_3438_int = var_3505_int * var_3506_float; // 0x10e9 Mult2
	var_3508_int = var_3438_int; // 0x10ea Push
	if(var_3508_int == 0) goto Label_4339; // 0x10eb JumpB
	var_3509_int = 0; var_3510_string = ""; var_3511_string = ""; var_3512_int = 0; // 0x10ec PushV
	var_3509_int = var_3429_int; // 0x10ed Mov
	var_3510_string = "pers_grabitel"; // 0x10ee MovS
	var_3511_string = "grabitel.xml"; // 0x10ef MovS
	var_3512_int = var_3438_int; // 0x10f0 Mov
	func_509(var_3509_int, var_3510_string, var_3511_string, var_3512_int); // 0x10f1 NEW_2
	
Label_4339:
	var_3513_int = 1; // 0x10f3 PushI
	var_3514_int = var_3430_int + var_3513_int; // 0x10f4 Add
	var_3515_int = 2; // 0x10f5 PushI
	var_3516_bool = var_3514_int >= var_3515_int; // 0x10f6 GE
	if(var_3516_bool == 0) goto Label_4363; // 0x10f7 JumpB
	var_3517_int = 0; var_3518_string = ""; var_3519_string = ""; var_3520_int = 0; // 0x10f8 PushV
	var_3517_int = var_3429_int; // 0x10f9 Mov
	var_3518_string = "pers_patrool"; // 0x10fa MovS
	var_3519_string = "patrol.xml"; // 0x10fb MovS
	var_3520_int = 1; // 0x10fc MovI
	func_509(var_3517_int, var_3518_string, var_3519_string, var_3520_int); // 0x10fd NEW_2
	var_3521_bool = 0; var_3522_int = 0; // 0x10ff PushV
	var_3522_int = var_3430_int; // 0x1100 Mov
	func_1378(var_3521_bool, var_3522_int); // 0x1101 NEW_2
	if(var_3521_bool == 0) goto Label_4363; // 0x1103 JumpB
	var_3523_int = 0; var_3524_string = ""; var_3525_string = ""; var_3526_int = 0; // 0x1104 PushV
	var_3523_int = var_3429_int; // 0x1105 Mov
	var_3524_string = "pers_soldat_hand"; // 0x1106 MovS
	var_3525_string = "soldier_patrol.xml"; // 0x1107 MovS
	var_3526_int = 1; // 0x1108 MovI
	func_509(var_3523_int, var_3524_string, var_3525_string, var_3526_int); // 0x1109 NEW_2
	
Label_4363:
	var_3527_int = 1; // 0x110b PushI
	var_3528_float = 0; var_3529_int = 0; // 0x110c PushV
	var_3529_int = var_3430_int; // 0x110d Mov
	func_1261(var_3528_float, var_3529_int); // 0x110e NEW_2
	var_3439_int = var_3527_int * var_3528_float; // 0x1110 Mult2
	var_3530_int = var_3439_int; // 0x1111 Push
	if(var_3530_int == 0) goto Label_4378; // 0x1112 JumpB
	var_3531_int = 0; var_3532_string = ""; var_3533_string = ""; var_3534_int = 0; // 0x1113 PushV
	var_3531_int = var_3429_int; // 0x1114 Mov
	var_3532_string = "pers_bomber"; // 0x1115 MovS
	var_3533_string = "bomber.xml"; // 0x1116 MovS
	var_3534_int = var_3439_int; // 0x1117 Mov
	func_509(var_3531_int, var_3532_string, var_3533_string, var_3534_int); // 0x1118 NEW_2
}


func_12409(var_5497_bool)
{
	var_5500_int = 0; var_5501_string = ""; // 0x307a PushV
	var_5501_string = "d11AglajaVisit"; // 0x307b MovS
	func_138(var_5500_int, var_5501_string); // 0x307c NEW_2
	var_5502_int = 1; // 0x307e PushI
	var_5503_bool = var_5500_int == var_5502_int; // 0x307f Eq
	if(var_5503_bool == 0) goto Label_12419; // 0x3080 JumpB
	var_5497_bool = 1; // 0x3081 MovB
	return 0; // 0x3082 Return
	
Label_12419:
	var_5497_bool = 0; // 0x3083 MovB
	return 0; // 0x3084 Return
}


func_121(var_4838_float, var_4839_float, var_4840_float, var_4841_float)
{
	var_4842_bool = var_4839_float < var_4840_float; // 0x7a LT
	if(var_4842_bool == 0) goto Label_126; // 0x7b JumpB
	var_4838_float = var_4840_float; // 0x7c Mov
	return 0; // 0x7d Return
	
Label_126:
	var_4843_bool = var_4839_float > var_4841_float; // 0x7e GT
	if(var_4843_bool == 0) goto Label_130; // 0x7f JumpB
	var_4838_float = var_4841_float; // 0x80 Mov
	return 0; // 0x81 Return
	
Label_130:
	var_4838_float = var_4839_float; // 0x82 Mov
	return 0; // 0x83 Return
}


func_10363(var_4988_int, var_4989_float)
{
	var_4990_int = 0; var_4991_int = 0; var_4992_int = 0; var_4993_float = 0; // 0x287c PushV
	var_4991_int = 536365; // 0x287d MovI
	var_4992_int = 536364; // 0x287e MovI
	var_4993_float = var_4989_float; // 0x287f Mov
	func_12495(var_4990_int, var_4991_int, var_4992_int, var_4993_float); // 0x2880 NEW_2
	var_4988_int = var_4990_int; // 0x2881 Mov
	return 0; // 0x2883 Return
}


func_1147(var_769_float, var_770_int)
{
	var_771_int = 1; // 0x47c PushI
	var_772_int = var_770_int + var_771_int; // 0x47d Add
	var_773_int = 7; // 0x47e PushI
	var_774_bool = var_772_int == var_773_int; // 0x47f Eq
	if(var_774_bool == 0) goto Label_1155; // 0x480 JumpB
	var_769_float = 2; // 0x481 MovI
	return 0; // 0x482 Return
	
Label_1155:
	var_775_int = 1; // 0x483 PushI
	var_776_int = var_770_int + var_775_int; // 0x484 Add
	var_777_int = 8; // 0x485 PushI
	var_778_bool = var_776_int == var_777_int; // 0x486 Eq
	if(var_778_bool == 0) goto Label_1162; // 0x487 JumpB
	var_769_float = 0; // 0x488 MovI
	return 0; // 0x489 Return
	
Label_1162:
	var_779_int = 1; // 0x48a PushI
	var_780_int = var_770_int + var_779_int; // 0x48b Add
	var_781_int = 1; // 0x48c PushI
	var_782_bool = var_780_int == var_781_int; // 0x48d Eq
	if(var_782_bool == 0) goto Label_1169; // 0x48e JumpB
	var_769_float = 0; // 0x48f MovI
	return 0; // 0x490 Return
	
Label_1169:
	var_769_float = 1; // 0x491 MovI
	return 0; // 0x492 Return
}


func_7292()
{
	var_315_string = "lc_house3_05_i2"; // 0x1c7d PushS
	add(var_315_string); // 0x1c7e ObjFunc
	var_316_string = "lc_house3_05"; // 0x1c80 PushS
	add(var_316_string); // 0x1c81 ObjFunc
	var_317_string = "lc_house3_06_i2"; // 0x1c83 PushS
	add(var_317_string); // 0x1c84 ObjFunc
	var_318_string = "lc_house3_06"; // 0x1c86 PushS
	add(var_318_string); // 0x1c87 ObjFunc
	var_319_string = "lc_House6_06"; // 0x1c89 PushS
	add(var_319_string); // 0x1c8a ObjFunc
	var_320_string = "lc_house3_04_i2"; // 0x1c8c PushS
	add(var_320_string); // 0x1c8d ObjFunc
	var_321_string = "lc_house3_04"; // 0x1c8f PushS
	add(var_321_string); // 0x1c90 ObjFunc
	var_322_string = "house3_plus_03_i2"; // 0x1c92 PushS
	add(var_322_string); // 0x1c93 ObjFunc
	return 0; // 0x1c95 Return
}


func_5244(var_1297_int, var_1298_int, var_1299_object, var_1300_object, var_1301_object, var_1302_object)
{
	var_1303_int = 0; // 0x147d PushI
	var_1304_bool = var_1298_int == var_1303_int; // 0x147e Eq
	if(var_1304_bool == 0) goto Label_5284; // 0x147f JumpB
	var_1305_int = 0; var_1306_bool = 0; // 0x1480 PushV
	var_1305_int = 4; // 0x1481 MovI
	var_1306_bool = 0; // 0x1482 MovB
	func_802(var_1305_int, var_1306_bool); // 0x1483 NEW_2
	var_1307_int = 0; var_1308_bool = 0; var_1309_int = 0; // 0x1485 PushV
	var_1307_int = 4; // 0x1486 MovI
	var_1308_bool = 0; // 0x1487 MovB
	var_1309_int = 1; // 0x1488 MovI
	func_819(var_1307_int, var_1308_bool, var_1309_int); // 0x1489 NEW_2
	var_1310_int = 0; var_1311_int = 0; var_1312_object = Obj(); var_1313_object = Obj(); var_1314_object = Obj(); // 0x148b PushV
	var_1310_int = 4; // 0x148c MovI
	var_1311_int = var_1297_int; // 0x148d Mov
	var_1312_object = var_1299_object; // 0x148e Mov
	var_1313_object = var_1300_object; // 0x148f Mov
	var_1314_object = var_1301_object; // 0x1490 Mov
	func_628(var_1311_int, var_1312_object, var_1313_object, var_1314_object); // 0x1491 NEW_2
	var_1315_object = Obj(); var_1316_int = 0; // 0x1493 PushV
	var_1315_object = var_1302_object; // 0x1494 Mov
	var_1316_int = 0; // 0x1495 MovI
	func_311(var_1316_int); // 0x1496 NEW_2
	var_1317_int = 0; var_1318_bool = 0; var_1319_int = 0; // 0x1498 PushV
	var_1317_int = 4; // 0x1499 MovI
	var_1318_bool = 0; // 0x149a MovB
	var_1319_int = 4; // 0x149b MovI
	func_876(var_1317_int, var_1318_bool, var_1319_int); // 0x149c NEW_2
	var_1320_int = 0; var_1321_bool = 0; var_1322_int = 0; // 0x149e PushV
	var_1320_int = 4; // 0x149f MovI
	var_1321_bool = 0; // 0x14a0 MovB
	var_1322_int = 4; // 0x14a1 MovI
	func_938(var_1320_int, var_1321_bool, var_1322_int); // 0x14a2 NEW_2
	
Label_5284:
	var_1323_int = 0; var_1324_int = 0; // 0x14a4 PushV
	var_1323_int = 4; // 0x14a5 MovI
	var_1324_int = var_1298_int; // 0x14a6 Mov
	func_1026(var_1323_int, var_1324_int); // 0x14a7 NEW_2
	var_1337_int = 0; var_1338_int = 0; var_1339_int = 0; // 0x14a9 PushV
	var_1337_int = 4; // 0x14aa MovI
	var_1338_int = var_1297_int; // 0x14ab Mov
	var_1339_int = var_1298_int; // 0x14ac Mov
	func_1903(var_1337_int, var_1338_int, var_1339_int); // 0x14ad NEW_2
	return 0; // 0x14af Return
}


func_6271()
{
	var_228_string = "r4_house_2_02"; // 0x1880 PushS
	add(var_228_string); // 0x1881 ObjFunc
	var_229_string = "r4_house3_03_i2"; // 0x1883 PushS
	add(var_229_string); // 0x1884 ObjFunc
	var_230_string = "r4_house3_03"; // 0x1886 PushS
	add(var_230_string); // 0x1887 ObjFunc
	var_231_string = "r4_house4_02_i2"; // 0x1889 PushS
	add(var_231_string); // 0x188a ObjFunc
	var_232_string = "r4_house4_02"; // 0x188c PushS
	add(var_232_string); // 0x188d ObjFunc
	var_233_string = "r4_house4_01_i2"; // 0x188f PushS
	add(var_233_string); // 0x1890 ObjFunc
	var_234_string = "r4_house4_01"; // 0x1892 PushS
	add(var_234_string); // 0x1893 ObjFunc
	var_235_string = "r4_house3_02_i2"; // 0x1895 PushS
	add(var_235_string); // 0x1896 ObjFunc
	var_236_string = "r4_house3_02"; // 0x1898 PushS
	add(var_236_string); // 0x1899 ObjFunc
	var_237_string = "r4_house_2_01"; // 0x189b PushS
	add(var_237_string); // 0x189c ObjFunc
	var_238_string = "r4_house3_01_i2"; // 0x189e PushS
	add(var_238_string); // 0x189f ObjFunc
	var_239_string = "r4_house3_01"; // 0x18a1 PushS
	add(var_239_string); // 0x18a2 ObjFunc
	var_240_string = "r4_house7_01"; // 0x18a4 PushS
	add(var_240_string); // 0x18a5 ObjFunc
	var_241_string = "r4_House6_01"; // 0x18a7 PushS
	add(var_241_string); // 0x18a8 ObjFunc
	var_242_string = "r4_house_2_03"; // 0x18aa PushS
	add(var_242_string); // 0x18ab ObjFunc
	var_243_string = "r4_House6_03"; // 0x18ad PushS
	add(var_243_string); // 0x18ae ObjFunc
	var_244_string = "r4_house_2_04"; // 0x18b0 PushS
	add(var_244_string); // 0x18b1 ObjFunc
	return 0; // 0x18b3 Return
}


func_11394()
{
	var_6222_object = Obj(); var_6223_object = Obj(); var_6224_object = Obj(); var_6225_object = Obj(); // 0x2c82 PushV
	var_6226_object = Obj(); // 0x2c83 PushV
	func_12503(var_6226_object); // 0x2c84 NEW_2
	var_6224_object = var_6226_object; // 0x2c85 Mov
	var_6227_string = "d5q01AlexandrGotoKaterina"; // 0x2c87 PushS
	FindMark(var_6225_object, var_6227_string); // 0x2c88 ObjFunc
	var_6228_object = var_6225_object; // 0x2c8a Push
	if(var_6228_object == 0) goto Label_11406; // 0x2c8b JumpB
	Remove(); // 0x2c8c ObjFunc
	
Label_11406:
	var_6229_string = "d5q01BigVladGotoAlexandr"; // 0x2c8e PushS
	FindMark(var_6225_object, var_6229_string); // 0x2c8f ObjFunc
	var_6230_object = var_6225_object; // 0x2c91 Push
	if(var_6230_object == 0) goto Label_11413; // 0x2c92 JumpB
	Remove(); // 0x2c93 ObjFunc
	
Label_11413:
	var_6231_string = "d5q01BigVladGotoLara"; // 0x2c95 PushS
	FindMark(var_6225_object, var_6231_string); // 0x2c96 ObjFunc
	var_6232_object = var_6225_object; // 0x2c98 Push
	if(var_6232_object == 0) goto Label_11420; // 0x2c99 JumpB
	Remove(); // 0x2c9a ObjFunc
	
Label_11420:
	var_6233_string = "d5q01BurahMeeting"; // 0x2c9c PushS
	FindMark(var_6225_object, var_6233_string); // 0x2c9d ObjFunc
	var_6234_object = var_6225_object; // 0x2c9f Push
	if(var_6234_object == 0) goto Label_11427; // 0x2ca0 JumpB
	Remove(); // 0x2ca1 ObjFunc
	
Label_11427:
	var_6235_string = "d5q01GrifWantsMoney"; // 0x2ca3 PushS
	FindMark(var_6225_object, var_6235_string); // 0x2ca4 ObjFunc
	var_6236_object = var_6225_object; // 0x2ca6 Push
	if(var_6236_object == 0) goto Label_11434; // 0x2ca7 JumpB
	Remove(); // 0x2ca8 ObjFunc
	
Label_11434:
	var_6237_string = "d5q01PatrolGotoGrif"; // 0x2caa PushS
	FindMark(var_6225_object, var_6237_string); // 0x2cab ObjFunc
	var_6238_object = var_6225_object; // 0x2cad Push
	if(var_6238_object == 0) goto Label_11441; // 0x2cae JumpB
	Remove(); // 0x2caf ObjFunc
	
Label_11441:
	var_6239_string = "d5q01RubinGotoBigVlad"; // 0x2cb1 PushS
	FindMark(var_6225_object, var_6239_string); // 0x2cb2 ObjFunc
	var_6240_object = var_6225_object; // 0x2cb4 Push
	if(var_6240_object == 0) goto Label_11448; // 0x2cb5 JumpB
	Remove(); // 0x2cb6 ObjFunc
	
Label_11448:
	var_6241_string = "d5q01RubinGotoBigVladSelf"; // 0x2cb8 PushS
	FindMark(var_6225_object, var_6241_string); // 0x2cb9 ObjFunc
	var_6242_object = var_6225_object; // 0x2cbb Push
	if(var_6242_object == 0) goto Label_11455; // 0x2cbc JumpB
	Remove(); // 0x2cbd ObjFunc
	
Label_11455:
	var_6243_string = "d5q02AnnaGotoGorbun"; // 0x2cbf PushS
	FindMark(var_6225_object, var_6243_string); // 0x2cc0 ObjFunc
	var_6244_object = var_6225_object; // 0x2cc2 Push
	if(var_6244_object == 0) goto Label_11462; // 0x2cc3 JumpB
	Remove(); // 0x2cc4 ObjFunc
	
Label_11462:
	var_6245_string = "d5q02AnnaGotoGorbunSelf"; // 0x2cc6 PushS
	FindMark(var_6225_object, var_6245_string); // 0x2cc7 ObjFunc
	var_6246_object = var_6225_object; // 0x2cc9 Push
	if(var_6246_object == 0) goto Label_11469; // 0x2cca JumpB
	Remove(); // 0x2ccb ObjFunc
	
Label_11469:
	var_6247_string = "d5q02AnnaGotoKabak"; // 0x2ccd PushS
	FindMark(var_6225_object, var_6247_string); // 0x2cce ObjFunc
	var_6248_object = var_6225_object; // 0x2cd0 Push
	if(var_6248_object == 0) goto Label_11476; // 0x2cd1 JumpB
	Remove(); // 0x2cd2 ObjFunc
	
Label_11476:
	var_6249_string = "d5q02GorbunFindTheDaughter"; // 0x2cd4 PushS
	FindMark(var_6225_object, var_6249_string); // 0x2cd5 ObjFunc
	var_6250_object = var_6225_object; // 0x2cd7 Push
	if(var_6250_object == 0) goto Label_11483; // 0x2cd8 JumpB
	Remove(); // 0x2cd9 ObjFunc
	
Label_11483:
	var_6251_string = "d5q02NudeMeeting"; // 0x2cdb PushS
	FindMark(var_6225_object, var_6251_string); // 0x2cdc ObjFunc
	var_6252_object = var_6225_object; // 0x2cde Push
	if(var_6252_object == 0) goto Label_11490; // 0x2cdf JumpB
	Remove(); // 0x2ce0 ObjFunc
	
Label_11490:
	var_6253_string = "d5q03BirdmaskBringMoneySelf"; // 0x2ce2 PushS
	FindMark(var_6225_object, var_6253_string); // 0x2ce3 ObjFunc
	var_6254_object = var_6225_object; // 0x2ce5 Push
	if(var_6254_object == 0) goto Label_11497; // 0x2ce6 JumpB
	Remove(); // 0x2ce7 ObjFunc
	
Label_11497:
	var_6255_string = "d5q03BirdmaskGotoMladVlad"; // 0x2ce9 PushS
	FindMark(var_6225_object, var_6255_string); // 0x2cea ObjFunc
	var_6256_object = var_6225_object; // 0x2cec Push
	if(var_6256_object == 0) goto Label_11504; // 0x2ced JumpB
	Remove(); // 0x2cee ObjFunc
	
Label_11504:
	var_6257_string = "d5q03BirdmaskGotoViktor"; // 0x2cf0 PushS
	FindMark(var_6225_object, var_6257_string); // 0x2cf1 ObjFunc
	var_6258_object = var_6225_object; // 0x2cf3 Push
	if(var_6258_object == 0) goto Label_11511; // 0x2cf4 JumpB
	Remove(); // 0x2cf5 ObjFunc
	
Label_11511:
	var_6259_string = "d5q03SavePrisoners"; // 0x2cf7 PushS
	FindMark(var_6225_object, var_6259_string); // 0x2cf8 ObjFunc
	var_6260_object = var_6225_object; // 0x2cfa Push
	if(var_6260_object == 0) goto Label_11518; // 0x2cfb JumpB
	Remove(); // 0x2cfc ObjFunc
	
Label_11518:
	var_6261_bool = 0; var_6262_int = 0; // 0x2cfe PushV
	var_6262_int = 139; // 0x2cff MovI
	func_12478(var_6261_bool, var_6262_int); // 0x2d00 NEW_2
	var_6263_bool = 0; var_6264_int = 0; // 0x2d02 PushV
	var_6264_int = 148; // 0x2d03 MovI
	func_12478(var_6263_bool, var_6264_int); // 0x2d04 NEW_2
	var_6265_bool = 0; var_6266_int = 0; // 0x2d06 PushV
	var_6266_int = 154; // 0x2d07 MovI
	func_12478(var_6265_bool, var_6266_int); // 0x2d08 NEW_2
	return 4; // 0x2d0a Return
}


func_14467()
{
	func_14442(); // 0x3884 NEW_2
	return 0; // 0x3886 Return
}


func_132(var_41_object)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x84 PushV
	CreateObjectVector(var_43_object); // 0x85 Func
	var_41_object = var_43_object; // 0x87 Mov
	return 2; // 0x88 Return
}


func_12421(var_5195_bool)
{
	var_5195_bool = 0; // 0x3086 MovB
	return 0; // 0x3087 Return
}


func_10372(var_5160_int, var_5161_float)
{
	var_5162_int = 0; var_5163_int = 0; var_5164_int = 0; var_5165_float = 0; // 0x2885 PushV
	var_5163_int = 522208; // 0x2886 MovI
	var_5164_int = 522207; // 0x2887 MovI
	var_5165_float = var_5161_float; // 0x2888 Mov
	func_12495(var_5162_int, var_5163_int, var_5164_int, var_5165_float); // 0x2889 NEW_2
	var_5160_int = var_5162_int; // 0x288a Mov
	return 0; // 0x288c Return
}


func_14471()
{
	return 0; // 0x3887 Return
}


func_14472(var_144_bool, var_145_int, var_146_int)
{
	var_147_int = 6; // 0x3889 PushI
	var_148_bool = var_145_int == var_147_int; // 0x388a Eq
	if(var_148_bool == 0) goto Label_14478; // 0x388b JumpB
	var_144_bool = 0; // 0x388c MovB
	return 0; // 0x388d Return
	
Label_14478:
	var_149_int = 4; // 0x388e PushI
	var_150_bool = var_146_int == var_149_int; // 0x388f Eq
	if(var_150_bool == 0) goto Label_14492; // 0x3890 JumpB
	var_151_int = 15; // 0x3891 PushI
	var_152_bool = var_145_int == var_151_int; // 0x3892 Eq
	if(var_152_bool == 0) goto Label_14486; // 0x3893 JumpB
	var_144_bool = 0; // 0x3894 MovB
	return 0; // 0x3895 Return
	
Label_14486:
	var_153_int = 9; // 0x3896 PushI
	var_154_bool = var_145_int == var_153_int; // 0x3897 Eq
	if(var_154_bool == 0) goto Label_14491; // 0x3898 JumpB
	var_144_bool = 0; // 0x3899 MovB
	return 0; // 0x389a Return
	
Label_14491:
	goto Label_14509; // 0x389b Jump
	
Label_14509:
	var_144_bool = 1; // 0x38ad MovB
	return 0; // 0x38ae Return
	
Label_14492:
	var_155_int = 5; // 0x389c PushI
	var_156_bool = var_146_int == var_155_int; // 0x389d Eq
	if(var_156_bool == 0) goto Label_14501; // 0x389e JumpB
	var_157_int = 15; // 0x389f PushI
	var_158_bool = var_145_int == var_157_int; // 0x38a0 Eq
	if(var_158_bool == 0) goto Label_14500; // 0x38a1 JumpB
	var_144_bool = 0; // 0x38a2 MovB
	return 0; // 0x38a3 Return
	
Label_14500:
	goto Label_14509; // 0x38a4 Jump
	
Label_14501:
	var_159_int = 6; // 0x38a5 PushI
	var_160_bool = var_146_int == var_159_int; // 0x38a6 Eq
	if(var_160_bool == 0) goto Label_14509; // 0x38a7 JumpB
	var_161_int = 15; // 0x38a8 PushI
	var_162_bool = var_145_int == var_161_int; // 0x38a9 Eq
	if(var_162_bool == 0) goto Label_14509; // 0x38aa JumpB
	var_144_bool = 0; // 0x38ab MovB
	return 0; // 0x38ac Return
}


func_12424()
{
	var_4755_object = Obj(); var_4756_object = Obj(); // 0x3088 PushV
	var_4757_int = 30; // 0x3089 PushI
	var_4758_int = 0; // 0x308a PushI
	var_4759_int = 504079; // 0x308b PushI
	CreateDiaryEntry(var_4756_object, var_4757_int, var_4758_int, var_4759_int); // 0x308c Func
	var_4760_bool = 0; var_4761_object = Obj(); var_4762_int = 0; // 0x308e PushV
	var_4761_object = var_4756_object; // 0x308f Mov
	var_4762_int = -1; // 0x3090 MovI
	func_12450(var_4760_bool, var_4761_object, var_4762_int); // 0x3091 NEW_2
	return 2; // 0x3093 Return
}


func_138(var_4665_int, var_4666_string)
{
	var_4667_int = 0; var_4668_int = 0; // 0x8a PushV
	GetVariable(var_4666_string, var_4668_int); // 0x8b Func
	var_4665_int = var_4668_int; // 0x8d Mov
	return 2; // 0x8e Return
}


func_10381(var_5018_int, var_5019_float)
{
	var_5020_int = 0; var_5021_int = 0; var_5022_int = 0; var_5023_float = 0; // 0x288e PushV
	var_5021_int = 538406; // 0x288f MovI
	var_5022_int = 538405; // 0x2890 MovI
	var_5023_float = var_5019_float; // 0x2891 Mov
	func_12495(var_5020_int, var_5021_int, var_5022_int, var_5023_float); // 0x2892 NEW_2
	var_5018_int = var_5020_int; // 0x2893 Mov
	return 0; // 0x2895 Return
}


func_143(var_4823_object, var_4824_string)
{
	var_4825_object = Obj(); var_4826_object = Obj(); var_4827_object = Obj(); var_4828_object = Obj(); // 0x8f PushV
	GetMainOutdoorScene(var_4827_object); // 0x90 Func
	var_4829_string = ".bin"; // 0x92 PushS
	var_4830_int = var_4824_string + var_4829_string; // 0x93 Add
	AddBlankActor(var_4828_object, var_4827_object, var_4824_string, var_4830_int); // 0x94 Func
	var_4823_object = var_4828_object; // 0x96 Mov
	return 4; // 0x97 Return
}


func_1171(var_3278_float, var_3279_int)
{
	var_3280_int = 1; // 0x494 PushI
	var_3281_int = var_3279_int + var_3280_int; // 0x495 Add
	var_3282_int = 1; // 0x496 PushI
	var_3283_bool = var_3281_int == var_3282_int; // 0x497 Eq
	if(var_3283_bool == 0) goto Label_1180; // 0x498 JumpB
	var_3278_float = 0; // 0x499 MovI
	return 0; // 0x49a Return
	
Label_1180:
	var_3284_int = 1; // 0x49c PushI
	var_3285_int = var_3279_int + var_3284_int; // 0x49d Add
	var_3286_int = 2; // 0x49e PushI
	var_3287_bool = var_3285_int == var_3286_int; // 0x49f Eq
	if(var_3287_bool == 0) goto Label_1188; // 0x4a0 JumpB
	var_3278_float = 0; // 0x4a1 MovI
	return 0; // 0x4a2 Return
	
Label_1188:
	var_3288_int = 1; // 0x4a4 PushI
	var_3289_int = var_3279_int + var_3288_int; // 0x4a5 Add
	var_3290_int = 3; // 0x4a6 PushI
	var_3291_bool = var_3289_int == var_3290_int; // 0x4a7 Eq
	if(var_3291_bool == 0) goto Label_1196; // 0x4a8 JumpB
	var_3278_float = 1; // 0x4a9 MovI
	return 0; // 0x4aa Return
	
Label_1196:
	var_3292_int = 1; // 0x4ac PushI
	var_3293_int = var_3279_int + var_3292_int; // 0x4ad Add
	var_3294_int = 4; // 0x4ae PushI
	var_3295_bool = var_3293_int == var_3294_int; // 0x4af Eq
	if(var_3295_bool == 0) goto Label_1204; // 0x4b0 JumpB
	var_3278_float = 1; // 0x4b1 MovI
	return 0; // 0x4b2 Return
	
Label_1204:
	var_3296_int = 1; // 0x4b4 PushI
	var_3297_int = var_3279_int + var_3296_int; // 0x4b5 Add
	var_3298_int = 5; // 0x4b6 PushI
	var_3299_bool = var_3297_int == var_3298_int; // 0x4b7 Eq
	if(var_3299_bool == 0) goto Label_1212; // 0x4b8 JumpB
	var_3278_float = 1; // 0x4b9 MovI
	return 0; // 0x4ba Return
	
Label_1212:
	var_3300_int = 1; // 0x4bc PushI
	var_3301_int = var_3279_int + var_3300_int; // 0x4bd Add
	var_3302_int = 6; // 0x4be PushI
	var_3303_bool = var_3301_int == var_3302_int; // 0x4bf Eq
	if(var_3303_bool == 0) goto Label_1220; // 0x4c0 JumpB
	var_3278_float = 2; // 0x4c1 MovI
	return 0; // 0x4c2 Return
	
Label_1220:
	var_3304_int = 1; // 0x4c4 PushI
	var_3305_int = var_3279_int + var_3304_int; // 0x4c5 Add
	var_3306_int = 7; // 0x4c6 PushI
	var_3307_bool = var_3305_int == var_3306_int; // 0x4c7 Eq
	if(var_3307_bool == 0) goto Label_1228; // 0x4c8 JumpB
	var_3278_float = 1; // 0x4c9 MovI
	return 0; // 0x4ca Return
	
Label_1228:
	var_3308_int = 1; // 0x4cc PushI
	var_3309_int = var_3279_int + var_3308_int; // 0x4cd Add
	var_3310_int = 8; // 0x4ce PushI
	var_3311_bool = var_3309_int == var_3310_int; // 0x4cf Eq
	if(var_3311_bool == 0) goto Label_1236; // 0x4d0 JumpB
	var_3278_float = 1; // 0x4d1 MovI
	return 0; // 0x4d2 Return
	
Label_1236:
	var_3312_int = 1; // 0x4d4 PushI
	var_3313_int = var_3279_int + var_3312_int; // 0x4d5 Add
	var_3314_int = 9; // 0x4d6 PushI
	var_3315_bool = var_3313_int == var_3314_int; // 0x4d7 Eq
	if(var_3315_bool == 0) goto Label_1244; // 0x4d8 JumpB
	var_3278_float = 1; // 0x4d9 MovI
	return 0; // 0x4da Return
	
Label_1244:
	var_3316_int = 1; // 0x4dc PushI
	var_3317_int = var_3279_int + var_3316_int; // 0x4dd Add
	var_3318_int = 10; // 0x4de PushI
	var_3319_bool = var_3317_int == var_3318_int; // 0x4df Eq
	if(var_3319_bool == 0) goto Label_1252; // 0x4e0 JumpB
	var_3278_float = 1; // 0x4e1 MovI
	return 0; // 0x4e2 Return
	
Label_1252:
	var_3320_int = 1; // 0x4e4 PushI
	var_3321_int = var_3279_int + var_3320_int; // 0x4e5 Add
	var_3322_int = 11; // 0x4e6 PushI
	var_3323_bool = var_3321_int == var_3322_int; // 0x4e7 Eq
	if(var_3323_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_3278_float = 1; // 0x4e9 MovI
	return 0; // 0x4ea Return
	
Label_1259:
	var_3278_float = 0; // 0x4eb MovI
	return 0; // 0x4ec Return
}


func_12437(var_4769_object)
{
	var_4770_object = Obj(); var_4771_object = Obj(); // 0x3095 PushV
	GetDiaryRoot(var_4771_object); // 0x3096 Func
	var_4772_bool = var_4771_object == 0; // 0x3098 Not
	if(var_4772_bool == 0) goto Label_12447; // 0x3099 JumpB
	var_4773_string = "Can't retrieve diary root"; // 0x309a PushS
	Trace(var_4773_string); // 0x309b Func
	var_4769_object = 0; // 0x309d MovB
	return 2; // 0x309e Return
	
Label_12447:
	var_4769_object = var_4771_object; // 0x309f Mov
	return 2; // 0x30a0 Return
}


func_10390(var_5325_int, var_5326_float)
{
	var_5327_int = 0; var_5328_int = 0; var_5329_int = 0; var_5330_float = 0; // 0x2897 PushV
	var_5328_int = 533323; // 0x2898 MovI
	var_5329_int = 533322; // 0x2899 MovI
	var_5330_float = var_5326_float; // 0x289a Mov
	func_12495(var_5327_int, var_5328_int, var_5329_int, var_5330_float); // 0x289b NEW_2
	var_5325_int = var_5327_int; // 0x289c Mov
	return 0; // 0x289e Return
}


func_7318(var_1948_int, var_1949_int, var_1950_object, var_1951_object, var_1952_object, var_1953_object)
{
	var_1954_int = 0; // 0x1c97 PushI
	var_1955_bool = var_1949_int == var_1954_int; // 0x1c98 Eq
	if(var_1955_bool == 0) goto Label_7358; // 0x1c99 JumpB
	var_1956_int = 0; var_1957_bool = 0; // 0x1c9a PushV
	var_1956_int = 15; // 0x1c9b MovI
	var_1957_bool = 0; // 0x1c9c MovB
	func_802(var_1956_int, var_1957_bool); // 0x1c9d NEW_2
	var_1958_int = 0; var_1959_bool = 0; var_1960_int = 0; // 0x1c9f PushV
	var_1958_int = 15; // 0x1ca0 MovI
	var_1959_bool = 0; // 0x1ca1 MovB
	var_1960_int = 1; // 0x1ca2 MovI
	func_819(var_1958_int, var_1959_bool, var_1960_int); // 0x1ca3 NEW_2
	var_1961_int = 0; var_1962_int = 0; var_1963_object = Obj(); var_1964_object = Obj(); var_1965_object = Obj(); // 0x1ca5 PushV
	var_1961_int = 15; // 0x1ca6 MovI
	var_1962_int = var_1948_int; // 0x1ca7 Mov
	var_1963_object = var_1950_object; // 0x1ca8 Mov
	var_1964_object = var_1951_object; // 0x1ca9 Mov
	var_1965_object = var_1952_object; // 0x1caa Mov
	func_628(var_1962_int, var_1963_object, var_1964_object, var_1965_object); // 0x1cab NEW_2
	var_1966_object = Obj(); var_1967_int = 0; // 0x1cad PushV
	var_1966_object = var_1953_object; // 0x1cae Mov
	var_1967_int = 0; // 0x1caf MovI
	func_311(var_1967_int); // 0x1cb0 NEW_2
	var_1968_int = 0; var_1969_bool = 0; var_1970_int = 0; // 0x1cb2 PushV
	var_1968_int = 15; // 0x1cb3 MovI
	var_1969_bool = 0; // 0x1cb4 MovB
	var_1970_int = 5; // 0x1cb5 MovI
	func_876(var_1968_int, var_1969_bool, var_1970_int); // 0x1cb6 NEW_2
	var_1971_int = 0; var_1972_bool = 0; var_1973_int = 0; // 0x1cb8 PushV
	var_1971_int = 15; // 0x1cb9 MovI
	var_1972_bool = 0; // 0x1cba MovB
	var_1973_int = 5; // 0x1cbb MovI
	func_938(var_1971_int, var_1972_bool, var_1973_int); // 0x1cbc NEW_2
	
Label_7358:
	var_1974_int = 0; var_1975_int = 0; // 0x1cbe PushV
	var_1974_int = 15; // 0x1cbf MovI
	var_1975_int = var_1949_int; // 0x1cc0 Mov
	func_1093(var_1974_int, var_1975_int); // 0x1cc1 NEW_2
	var_1976_int = 0; var_1977_int = 0; var_1978_int = 0; // 0x1cc3 PushV
	var_1976_int = 15; // 0x1cc4 MovI
	var_1977_int = var_1948_int; // 0x1cc5 Mov
	var_1978_int = var_1949_int; // 0x1cc6 Mov
	func_1382(var_1976_int, var_1977_int, var_1978_int); // 0x1cc7 NEW_2
	return 0; // 0x1cc9 Return
}


func_154(var_6068_object, var_6069_string)
{
	var_6070_object = Obj(); var_6071_object = Obj(); var_6072_object = Obj(); var_6073_object = Obj(); // 0x9a PushV
	GetMainOutdoorScene(var_6072_object); // 0x9b Func
	var_6074_string = ".xml"; // 0x9d PushS
	var_6075_int = var_6069_string + var_6074_string; // 0x9e Add
	AddBlankActorFromXml(var_6073_object, var_6072_object, var_6069_string, var_6075_int); // 0x9f Func
	var_6068_object = var_6073_object; // 0xa1 Mov
	return 4; // 0xa2 Return
}


func_10399(var_4935_int, var_4936_float)
{
	var_4937_int = 0; var_4938_int = 0; var_4939_int = 0; var_4940_float = 0; // 0x28a0 PushV
	var_4938_int = 538721; // 0x28a1 MovI
	var_4939_int = 538720; // 0x28a2 MovI
	var_4940_float = var_4936_float; // 0x28a3 Mov
	func_12495(var_4937_int, var_4938_int, var_4939_int, var_4940_float); // 0x28a4 NEW_2
	var_4935_int = var_4937_int; // 0x28a5 Mov
	return 0; // 0x28a7 Return
}


func_12450(var_4760_bool, var_4761_object, var_4762_int)
{
	var_4763_object = Obj(); var_4764_object = Obj(); var_4765_int = 0; var_4766_object = Obj(); var_4767_object = Obj(); var_4768_int = 0; // 0x30a2 PushV
	var_4769_object = Obj(); // 0x30a3 PushV
	func_12437(var_4769_object); // 0x30a4 NEW_2
	var_4766_object = var_4769_object; // 0x30a5 Mov
	Find(var_4762_int, var_4767_object); // 0x30a7 ObjFunc
	var_4774_bool = var_4767_object == 0; // 0x30a9 Not
	if(var_4774_bool == 0) goto Label_12465; // 0x30aa JumpB
	var_4775_string = "Can't find diary parent with id: "; // 0x30ab PushS
	var_4776_int = var_4775_string + var_4762_int; // 0x30ac Add
	Trace(var_4776_int); // 0x30ad Func
	var_4760_bool = 0; // 0x30af MovB
	return 6; // 0x30b0 Return
	
Label_12465:
	AddChild(var_4761_object); // 0x30b1 ObjFunc
	var_4777_int = 7; // 0x30b3 PushI
	SendWorldWndMessage(var_4777_int); // 0x30b4 Func
	GetCategory(var_4768_int); // 0x30b6 ObjFunc
	SetDiarySection(var_4768_int); // 0x30b8 Func
	var_4760_bool = 0; // 0x30ba MovB
	return 6; // 0x30bb Return
}


func_2212(var_751_int, var_752_int, var_753_int)
{
	var_754_int = 0; var_755_int = 0; // 0x8a4 PushV
	var_756_int = 1; // 0x8a5 PushI
	var_757_int = var_752_int + var_756_int; // 0x8a6 Add
	var_758_int = 12; // 0x8a7 PushI
	var_759_bool = var_757_int == var_758_int; // 0x8a8 Eq
	if(var_759_bool == 0) goto Label_2219; // 0x8a9 JumpB
	return 2; // 0x8aa Return
	
Label_2219:
	var_760_bool = 0; // 0x8ab PushV
	var_760_bool = 0; // 0x8ac MovB
	var_761_bool = 0; // 0x8ad PushV
	var_761_bool = 1; // 0x8ae MovB
	var_762_int = 7; // 0x8af PushI
	var_763_bool = var_753_int < var_762_int; // 0x8b0 LT
	if(var_763_bool == 0) goto Label_2230; // 0x8b1 JumpB
	var_764_int = 21; // 0x8b2 PushI
	var_765_bool = var_753_int > var_764_int; // 0x8b3 GT
	if(var_765_bool == 0) goto Label_2230; // 0x8b4 JumpB
	var_761_bool = 0; // 0x8b5 MovB
	
Label_2230:
	if(var_761_bool == 0) goto Label_2235; // 0x8b6 JumpB
	var_766_int = 0; // 0x8b7 PushI
	var_767_bool = var_752_int != var_766_int; // 0x8b8 Neq
	if(var_767_bool == 0) goto Label_2235; // 0x8b9 JumpB
	var_760_bool = 1; // 0x8ba MovB
	
Label_2235:
	if(var_760_bool == 0) goto Label_2251; // 0x8bb JumpB
	var_768_int = 1; // 0x8bc PushI
	var_769_float = 0; var_770_int = 0; // 0x8bd PushV
	var_770_int = var_752_int; // 0x8be Mov
	func_1147(var_769_float, var_770_int); // 0x8bf NEW_2
	var_755_int = var_768_int * var_769_float; // 0x8c1 Mult2
	var_783_int = var_755_int; // 0x8c2 Push
	if(var_783_int == 0) goto Label_2251; // 0x8c3 JumpB
	var_784_int = 0; var_785_string = ""; var_786_string = ""; var_787_int = 0; // 0x8c4 PushV
	var_784_int = var_751_int; // 0x8c5 Mov
	var_785_string = "pers_grabitel"; // 0x8c6 MovS
	var_786_string = "grabitel.xml"; // 0x8c7 MovS
	var_787_int = var_755_int; // 0x8c8 Mov
	func_509(var_784_int, var_785_string, var_786_string, var_787_int); // 0x8c9 NEW_2
	
Label_2251:
	var_792_bool = 0; var_793_int = 0; var_794_int = 0; // 0x8cb PushV
	var_793_int = var_752_int; // 0x8cc Mov
	var_794_int = var_753_int; // 0x8cd Mov
	func_1116(var_792_bool, var_793_int, var_794_int); // 0x8ce NEW_2
	if(var_792_bool == 0) goto Label_2314; // 0x8d0 JumpB
	var_812_int = 0; var_813_string = ""; var_814_string = ""; var_815_int = 0; // 0x8d1 PushV
	var_812_int = var_751_int; // 0x8d2 Mov
	var_813_string = "pers_unosha"; // 0x8d3 MovS
	var_814_string = "unosha_attacker.xml"; // 0x8d4 MovS
	var_815_int = 1; // 0x8d5 MovI
	func_509(var_812_int, var_813_string, var_814_string, var_815_int); // 0x8d6 NEW_2
	var_816_int = 0; var_817_string = ""; var_818_string = ""; var_819_int = 0; // 0x8d8 PushV
	var_816_int = var_751_int; // 0x8d9 Mov
	var_817_string = "pers_unosha"; // 0x8da MovS
	var_818_string = "unosha2_attacker.xml"; // 0x8db MovS
	var_819_int = 1; // 0x8dc MovI
	func_509(var_816_int, var_817_string, var_818_string, var_819_int); // 0x8dd NEW_2
	var_820_int = 0; var_821_string = ""; var_822_string = ""; var_823_int = 0; // 0x8df PushV
	var_820_int = var_751_int; // 0x8e0 Mov
	var_821_string = "pers_worker"; // 0x8e1 MovS
	var_822_string = "worker_attacker.xml"; // 0x8e2 MovS
	var_823_int = 1; // 0x8e3 MovI
	func_509(var_820_int, var_821_string, var_822_string, var_823_int); // 0x8e4 NEW_2
	var_824_int = 0; var_825_string = ""; var_826_string = ""; var_827_int = 0; // 0x8e6 PushV
	var_824_int = var_751_int; // 0x8e7 Mov
	var_825_string = "pers_worker"; // 0x8e8 MovS
	var_826_string = "worker2_attacker.xml"; // 0x8e9 MovS
	var_827_int = 1; // 0x8ea MovI
	func_509(var_824_int, var_825_string, var_826_string, var_827_int); // 0x8eb NEW_2
	var_828_int = 0; var_829_string = ""; var_830_string = ""; var_831_int = 0; // 0x8ed PushV
	var_828_int = var_751_int; // 0x8ee Mov
	var_829_string = "pers_boy"; // 0x8ef MovS
	var_830_string = "boy.xml"; // 0x8f0 MovS
	var_831_int = 1; // 0x8f1 MovI
	func_509(var_828_int, var_829_string, var_830_string, var_831_int); // 0x8f2 NEW_2
	var_832_int = 0; var_833_string = ""; var_834_string = ""; var_835_int = 0; // 0x8f4 PushV
	var_832_int = var_751_int; // 0x8f5 Mov
	var_833_string = "pers_alkash"; // 0x8f6 MovS
	var_834_string = "alkash.xml"; // 0x8f7 MovS
	var_835_int = 1; // 0x8f8 MovI
	func_509(var_832_int, var_833_string, var_834_string, var_835_int); // 0x8f9 NEW_2
	var_836_int = 0; var_837_string = ""; var_838_string = ""; var_839_int = 0; // 0x8fb PushV
	var_836_int = var_751_int; // 0x8fc Mov
	var_837_string = "pers_girl"; // 0x8fd MovS
	var_838_string = "girl.xml"; // 0x8fe MovS
	var_839_int = 1; // 0x8ff MovI
	func_509(var_836_int, var_837_string, var_838_string, var_839_int); // 0x900 NEW_2
	var_840_int = 0; var_841_string = ""; var_842_string = ""; var_843_int = 0; // 0x902 PushV
	var_840_int = var_751_int; // 0x903 Mov
	var_841_string = "pers_girl"; // 0x904 MovS
	var_842_string = "girl2.xml"; // 0x905 MovS
	var_843_int = 1; // 0x906 MovI
	func_509(var_840_int, var_841_string, var_842_string, var_843_int); // 0x907 NEW_2
	goto Label_2388; // 0x909 Jump
	
Label_2388:
	return 2; // 0x954 Return
	
Label_2314:
	var_844_bool = 0; // 0x90a PushV
	var_844_bool = 0; // 0x90b MovB
	var_845_int = 8; // 0x90c PushI
	var_846_bool = var_753_int > var_845_int; // 0x90d GT
	if(var_846_bool == 0) goto Label_2323; // 0x90e JumpB
	var_847_int = 21; // 0x90f PushI
	var_848_bool = var_753_int < var_847_int; // 0x910 LT
	if(var_848_bool == 0) goto Label_2323; // 0x911 JumpB
	var_844_bool = 1; // 0x912 MovB
	
Label_2323:
	if(var_844_bool == 0) goto Label_2367; // 0x913 JumpB
	var_849_int = 0; var_850_string = ""; var_851_string = ""; var_852_int = 0; // 0x914 PushV
	var_849_int = var_751_int; // 0x915 Mov
	var_850_string = "pers_boy"; // 0x916 MovS
	var_851_string = "boy.xml"; // 0x917 MovS
	var_852_int = 1; // 0x918 MovI
	func_509(var_849_int, var_850_string, var_851_string, var_852_int); // 0x919 NEW_2
	var_853_int = 0; var_854_string = ""; var_855_string = ""; var_856_int = 0; // 0x91b PushV
	var_853_int = var_751_int; // 0x91c Mov
	var_854_string = "pers_alkash"; // 0x91d MovS
	var_855_string = "alkash.xml"; // 0x91e MovS
	var_856_int = 1; // 0x91f MovI
	func_509(var_853_int, var_854_string, var_855_string, var_856_int); // 0x920 NEW_2
	var_857_int = 0; var_858_string = ""; var_859_string = ""; var_860_int = 0; // 0x922 PushV
	var_857_int = var_751_int; // 0x923 Mov
	var_858_string = "pers_girl"; // 0x924 MovS
	var_859_string = "girl.xml"; // 0x925 MovS
	var_860_int = 1; // 0x926 MovI
	func_509(var_857_int, var_858_string, var_859_string, var_860_int); // 0x927 NEW_2
	var_861_int = 0; var_862_string = ""; var_863_string = ""; var_864_int = 0; // 0x929 PushV
	var_861_int = var_751_int; // 0x92a Mov
	var_862_string = "pers_girl"; // 0x92b MovS
	var_863_string = "girl2.xml"; // 0x92c MovS
	var_864_int = 1; // 0x92d MovI
	func_509(var_861_int, var_862_string, var_863_string, var_864_int); // 0x92e NEW_2
	var_865_int = 0; var_866_string = ""; var_867_string = ""; var_868_int = 0; // 0x930 PushV
	var_865_int = var_751_int; // 0x931 Mov
	var_866_string = "pers_worker"; // 0x932 MovS
	var_867_string = "worker.xml"; // 0x933 MovS
	var_868_int = 2; // 0x934 MovI
	func_509(var_865_int, var_866_string, var_867_string, var_868_int); // 0x935 NEW_2
	var_869_int = 0; var_870_string = ""; var_871_string = ""; var_872_int = 0; // 0x937 PushV
	var_869_int = var_751_int; // 0x938 Mov
	var_870_string = "pers_worker"; // 0x939 MovS
	var_871_string = "worker2.xml"; // 0x93a MovS
	var_872_int = 2; // 0x93b MovI
	func_509(var_869_int, var_870_string, var_871_string, var_872_int); // 0x93c NEW_2
	goto Label_2388; // 0x93e Jump
	
Label_2367:
	var_873_int = 0; var_874_string = ""; var_875_string = ""; var_876_int = 0; // 0x93f PushV
	var_873_int = var_751_int; // 0x940 Mov
	var_874_string = "pers_alkash"; // 0x941 MovS
	var_875_string = "alkash.xml"; // 0x942 MovS
	var_876_int = 1; // 0x943 MovI
	func_509(var_873_int, var_874_string, var_875_string, var_876_int); // 0x944 NEW_2
	var_877_int = 0; var_878_string = ""; var_879_string = ""; var_880_int = 0; // 0x946 PushV
	var_877_int = var_751_int; // 0x947 Mov
	var_878_string = "pers_worker"; // 0x948 MovS
	var_879_string = "worker.xml"; // 0x949 MovS
	var_880_int = 1; // 0x94a MovI
	func_509(var_877_int, var_878_string, var_879_string, var_880_int); // 0x94b NEW_2
	var_881_int = 0; var_882_string = ""; var_883_string = ""; var_884_int = 0; // 0x94d PushV
	var_881_int = var_751_int; // 0x94e Mov
	var_882_string = "pers_worker"; // 0x94f MovS
	var_883_string = "worker2.xml"; // 0x950 MovS
	var_884_int = 1; // 0x951 MovI
	func_509(var_881_int, var_882_string, var_883_string, var_884_int); // 0x952 NEW_2
}


func_165(var_330_object, var_332_string, var_333_string, var_334_string)
{
	var_336_bool = 0; var_337_cvector = CVector(0,0,0); var_338_cvector = CVector(0,0,0); var_339_object = Obj(); var_340_bool = 0; var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_object = Obj(); // 0xa5 PushV
	GetLocator(var_332_string, var_340_bool, var_341_cvector, var_342_cvector); // 0xa6 ObjFunc
	var_344_bool = var_340_bool == 0; // 0xa8 Not
	if(var_344_bool == 0) goto Label_178; // 0xa9 JumpB
	var_345_string = "Locator "; // 0xaa PushS
	var_346_int = var_345_string + var_332_string; // 0xab Add
	var_347_string = " doesn't exist"; // 0xac PushS
	var_348_int = var_346_int + var_347_string; // 0xad Add
	Trace(var_348_int); // 0xae Func
	var_343_object = 0; // 0xb0 SetNull
	goto Label_180; // 0xb1 Jump
	
Label_180:
	var_330_object = var_343_object; // 0xb4 Mov
	return 8; // 0xb5 Return
	
Label_178:
	AddStationaryActor(var_343_object, var_341_cvector, var_342_cvector, var_333_string, var_334_string); // 0xb2 ObjFunc
}


func_9382(var_1989_int, var_1990_int, var_1991_int)
{
	var_1992_object = Obj(); var_1993_object = Obj(); var_1994_object = Obj(); var_1995_object = Obj(); var_1996_object = Obj(); var_1997_object = Obj(); var_1998_object = Obj(); var_1999_object = Obj(); // 0x24a6 PushV
	var_2000_object = GlobalVars[8]; // 0x24a7 PushGE
	get(var_1996_object, var_1989_int); // 0x24a8 ObjFunc
	var_2001_object = GlobalVars[9]; // 0x24aa PushGE
	get(var_1997_object, var_1989_int); // 0x24ab ObjFunc
	var_2002_object = GlobalVars[10]; // 0x24ad PushGE
	get(var_1998_object, var_1989_int); // 0x24ae ObjFunc
	var_2003_object = GlobalVars[13]; // 0x24b0 PushGE
	get(var_1999_object, var_1989_int); // 0x24b1 ObjFunc
	var_2004_int = 0; // 0x24b3 PushI
	var_2005_bool = var_1989_int == var_2004_int; // 0x24b4 Eq
	if(var_2005_bool == 0) goto Label_9408; // 0x24b5 JumpB
	var_2006_int = 0; var_2007_int = 0; var_2008_object = Obj(); var_2009_object = Obj(); var_2010_object = Obj(); var_2011_object = Obj(); // 0x24b6 PushV
	var_2006_int = var_1990_int; // 0x24b7 Mov
	var_2007_int = var_1991_int; // 0x24b8 Mov
	var_2008_object = var_1996_object; // 0x24b9 Mov
	var_2009_object = var_1997_object; // 0x24ba Mov
	var_2010_object = var_1998_object; // 0x24bb Mov
	var_2011_object = var_1999_object; // 0x24bc Mov
	func_4445(var_2006_int, var_2007_int, var_2008_object, var_2009_object, var_2010_object, var_2011_object); // 0x24bd NEW_2
	goto Label_9602; // 0x24bf Jump
	
Label_9602:
	return 8; // 0x2582 Return
	
Label_9408:
	var_2274_int = 1; // 0x24c0 PushI
	var_2275_bool = var_1989_int == var_2274_int; // 0x24c1 Eq
	if(var_2275_bool == 0) goto Label_9421; // 0x24c2 JumpB
	var_2276_int = 0; var_2277_int = 0; var_2278_object = Obj(); var_2279_object = Obj(); var_2280_object = Obj(); var_2281_object = Obj(); // 0x24c3 PushV
	var_2276_int = var_1990_int; // 0x24c4 Mov
	var_2277_int = var_1991_int; // 0x24c5 Mov
	var_2278_object = var_1996_object; // 0x24c6 Mov
	var_2279_object = var_1997_object; // 0x24c7 Mov
	var_2280_object = var_1998_object; // 0x24c8 Mov
	var_2281_object = var_1999_object; // 0x24c9 Mov
	func_4642(var_2276_int, var_2277_int, var_2278_object, var_2279_object, var_2280_object, var_2281_object); // 0x24ca NEW_2
	goto Label_9602; // 0x24cc Jump
	
Label_9421:
	var_2406_int = 2; // 0x24cd PushI
	var_2407_bool = var_1989_int == var_2406_int; // 0x24ce Eq
	if(var_2407_bool == 0) goto Label_9434; // 0x24cf JumpB
	var_2408_int = 0; var_2409_int = 0; var_2410_object = Obj(); var_2411_object = Obj(); var_2412_object = Obj(); var_2413_object = Obj(); // 0x24d0 PushV
	var_2408_int = var_1990_int; // 0x24d1 Mov
	var_2409_int = var_1991_int; // 0x24d2 Mov
	var_2410_object = var_1996_object; // 0x24d3 Mov
	var_2411_object = var_1997_object; // 0x24d4 Mov
	var_2412_object = var_1998_object; // 0x24d5 Mov
	var_2413_object = var_1999_object; // 0x24d6 Mov
	func_4848(var_2408_int, var_2409_int, var_2410_object, var_2411_object, var_2412_object, var_2413_object); // 0x24d7 NEW_2
	goto Label_9602; // 0x24d9 Jump
	
Label_9434:
	var_2552_int = 3; // 0x24da PushI
	var_2553_bool = var_1989_int == var_2552_int; // 0x24db Eq
	if(var_2553_bool == 0) goto Label_9447; // 0x24dc JumpB
	var_2554_int = 0; var_2555_int = 0; var_2556_object = Obj(); var_2557_object = Obj(); var_2558_object = Obj(); var_2559_object = Obj(); // 0x24dd PushV
	var_2554_int = var_1990_int; // 0x24de Mov
	var_2555_int = var_1991_int; // 0x24df Mov
	var_2556_object = var_1996_object; // 0x24e0 Mov
	var_2557_object = var_1997_object; // 0x24e1 Mov
	var_2558_object = var_1998_object; // 0x24e2 Mov
	var_2559_object = var_1999_object; // 0x24e3 Mov
	func_5078(var_2554_int, var_2555_int, var_2556_object, var_2557_object, var_2558_object, var_2559_object); // 0x24e4 NEW_2
	goto Label_9602; // 0x24e6 Jump
	
Label_9447:
	var_2585_int = 4; // 0x24e7 PushI
	var_2586_bool = var_1989_int == var_2585_int; // 0x24e8 Eq
	if(var_2586_bool == 0) goto Label_9460; // 0x24e9 JumpB
	var_2587_int = 0; var_2588_int = 0; var_2589_object = Obj(); var_2590_object = Obj(); var_2591_object = Obj(); var_2592_object = Obj(); // 0x24ea PushV
	var_2587_int = var_1990_int; // 0x24eb Mov
	var_2588_int = var_1991_int; // 0x24ec Mov
	var_2589_object = var_1996_object; // 0x24ed Mov
	var_2590_object = var_1997_object; // 0x24ee Mov
	var_2591_object = var_1998_object; // 0x24ef Mov
	var_2592_object = var_1999_object; // 0x24f0 Mov
	func_5296(var_2587_int, var_2588_int, var_2589_object, var_2590_object, var_2591_object, var_2592_object); // 0x24f1 NEW_2
	goto Label_9602; // 0x24f3 Jump
	
Label_9460:
	var_2618_int = 5; // 0x24f4 PushI
	var_2619_bool = var_1989_int == var_2618_int; // 0x24f5 Eq
	if(var_2619_bool == 0) goto Label_9473; // 0x24f6 JumpB
	var_2620_int = 0; var_2621_int = 0; var_2622_object = Obj(); var_2623_object = Obj(); var_2624_object = Obj(); var_2625_object = Obj(); // 0x24f7 PushV
	var_2620_int = var_1990_int; // 0x24f8 Mov
	var_2621_int = var_1991_int; // 0x24f9 Mov
	var_2622_object = var_1996_object; // 0x24fa Mov
	var_2623_object = var_1997_object; // 0x24fb Mov
	var_2624_object = var_1998_object; // 0x24fc Mov
	var_2625_object = var_1999_object; // 0x24fd Mov
	func_5541(var_2620_int, var_2621_int, var_2622_object, var_2623_object, var_2624_object, var_2625_object); // 0x24fe NEW_2
	goto Label_9602; // 0x2500 Jump
	
Label_9473:
	var_2651_int = 6; // 0x2501 PushI
	var_2652_bool = var_1989_int == var_2651_int; // 0x2502 Eq
	if(var_2652_bool == 0) goto Label_9486; // 0x2503 JumpB
	var_2653_int = 0; var_2654_int = 0; var_2655_object = Obj(); var_2656_object = Obj(); var_2657_object = Obj(); var_2658_object = Obj(); // 0x2504 PushV
	var_2653_int = var_1990_int; // 0x2505 Mov
	var_2654_int = var_1991_int; // 0x2506 Mov
	var_2655_object = var_1996_object; // 0x2507 Mov
	var_2656_object = var_1997_object; // 0x2508 Mov
	var_2657_object = var_1998_object; // 0x2509 Mov
	var_2658_object = var_1999_object; // 0x250a Mov
	func_5654(); // 0x250b NEW_2
	goto Label_9602; // 0x250d Jump
	
Label_9486:
	var_2661_int = 7; // 0x250e PushI
	var_2662_bool = var_1989_int == var_2661_int; // 0x250f Eq
	if(var_2662_bool == 0) goto Label_9499; // 0x2510 JumpB
	var_2663_int = 0; var_2664_int = 0; var_2665_object = Obj(); var_2666_object = Obj(); var_2667_object = Obj(); var_2668_object = Obj(); // 0x2511 PushV
	var_2663_int = var_1990_int; // 0x2512 Mov
	var_2664_int = var_1991_int; // 0x2513 Mov
	var_2665_object = var_1996_object; // 0x2514 Mov
	var_2666_object = var_1997_object; // 0x2515 Mov
	var_2667_object = var_1998_object; // 0x2516 Mov
	var_2668_object = var_1999_object; // 0x2517 Mov
	func_5764(var_2663_int, var_2664_int, var_2665_object, var_2666_object, var_2667_object, var_2668_object); // 0x2518 NEW_2
	goto Label_9602; // 0x251a Jump
	
Label_9499:
	var_2800_int = 8; // 0x251b PushI
	var_2801_bool = var_1989_int == var_2800_int; // 0x251c Eq
	if(var_2801_bool == 0) goto Label_9512; // 0x251d JumpB
	var_2802_int = 0; var_2803_int = 0; var_2804_object = Obj(); var_2805_object = Obj(); var_2806_object = Obj(); var_2807_object = Obj(); // 0x251e PushV
	var_2802_int = var_1990_int; // 0x251f Mov
	var_2803_int = var_1991_int; // 0x2520 Mov
	var_2804_object = var_1996_object; // 0x2521 Mov
	var_2805_object = var_1997_object; // 0x2522 Mov
	var_2806_object = var_1998_object; // 0x2523 Mov
	var_2807_object = var_1999_object; // 0x2524 Mov
	func_5964(var_2802_int, var_2803_int, var_2804_object, var_2805_object, var_2806_object, var_2807_object); // 0x2525 NEW_2
	goto Label_9602; // 0x2527 Jump
	
Label_9512:
	var_2833_int = 9; // 0x2528 PushI
	var_2834_bool = var_1989_int == var_2833_int; // 0x2529 Eq
	if(var_2834_bool == 0) goto Label_9525; // 0x252a JumpB
	var_2835_int = 0; var_2836_int = 0; var_2837_object = Obj(); var_2838_object = Obj(); var_2839_object = Obj(); var_2840_object = Obj(); // 0x252b PushV
	var_2835_int = var_1990_int; // 0x252c Mov
	var_2836_int = var_1991_int; // 0x252d Mov
	var_2837_object = var_1996_object; // 0x252e Mov
	var_2838_object = var_1997_object; // 0x252f Mov
	var_2839_object = var_1998_object; // 0x2530 Mov
	var_2840_object = var_1999_object; // 0x2531 Mov
	func_6167(var_2835_int, var_2836_int, var_2837_object, var_2838_object, var_2839_object, var_2840_object); // 0x2532 NEW_2
	goto Label_9602; // 0x2534 Jump
	
Label_9525:
	var_2866_int = 10; // 0x2535 PushI
	var_2867_bool = var_1989_int == var_2866_int; // 0x2536 Eq
	if(var_2867_bool == 0) goto Label_9538; // 0x2537 JumpB
	var_2868_int = 0; var_2869_int = 0; var_2870_object = Obj(); var_2871_object = Obj(); var_2872_object = Obj(); var_2873_object = Obj(); // 0x2538 PushV
	var_2868_int = var_1990_int; // 0x2539 Mov
	var_2869_int = var_1991_int; // 0x253a Mov
	var_2870_object = var_1996_object; // 0x253b Mov
	var_2871_object = var_1997_object; // 0x253c Mov
	var_2872_object = var_1998_object; // 0x253d Mov
	var_2873_object = var_1999_object; // 0x253e Mov
	func_6376(var_2868_int, var_2869_int, var_2870_object, var_2871_object, var_2872_object, var_2873_object); // 0x253f NEW_2
	goto Label_9602; // 0x2541 Jump
	
Label_9538:
	var_2899_int = 11; // 0x2542 PushI
	var_2900_bool = var_1989_int == var_2899_int; // 0x2543 Eq
	if(var_2900_bool == 0) goto Label_9551; // 0x2544 JumpB
	var_2901_int = 0; var_2902_int = 0; var_2903_object = Obj(); var_2904_object = Obj(); var_2905_object = Obj(); var_2906_object = Obj(); // 0x2545 PushV
	var_2901_int = var_1990_int; // 0x2546 Mov
	var_2902_int = var_1991_int; // 0x2547 Mov
	var_2903_object = var_1996_object; // 0x2548 Mov
	var_2904_object = var_1997_object; // 0x2549 Mov
	var_2905_object = var_1998_object; // 0x254a Mov
	var_2906_object = var_1999_object; // 0x254b Mov
	func_6588(var_2901_int, var_2902_int, var_2903_object, var_2904_object, var_2905_object, var_2906_object); // 0x254c NEW_2
	goto Label_9602; // 0x254e Jump
	
Label_9551:
	var_2932_int = 12; // 0x254f PushI
	var_2933_bool = var_1989_int == var_2932_int; // 0x2550 Eq
	if(var_2933_bool == 0) goto Label_9564; // 0x2551 JumpB
	var_2934_int = 0; var_2935_int = 0; var_2936_object = Obj(); var_2937_object = Obj(); var_2938_object = Obj(); var_2939_object = Obj(); // 0x2552 PushV
	var_2934_int = var_1990_int; // 0x2553 Mov
	var_2935_int = var_1991_int; // 0x2554 Mov
	var_2936_object = var_1996_object; // 0x2555 Mov
	var_2937_object = var_1997_object; // 0x2556 Mov
	var_2938_object = var_1998_object; // 0x2557 Mov
	var_2939_object = var_1999_object; // 0x2558 Mov
	func_6785(var_2934_int, var_2935_int, var_2936_object, var_2937_object, var_2938_object, var_2939_object); // 0x2559 NEW_2
	goto Label_9602; // 0x255b Jump
	
Label_9564:
	var_2965_int = 13; // 0x255c PushI
	var_2966_bool = var_1989_int == var_2965_int; // 0x255d Eq
	if(var_2966_bool == 0) goto Label_9577; // 0x255e JumpB
	var_2967_int = 0; var_2968_int = 0; var_2969_object = Obj(); var_2970_object = Obj(); var_2971_object = Obj(); var_2972_object = Obj(); // 0x255f PushV
	var_2967_int = var_1990_int; // 0x2560 Mov
	var_2968_int = var_1991_int; // 0x2561 Mov
	var_2969_object = var_1996_object; // 0x2562 Mov
	var_2970_object = var_1997_object; // 0x2563 Mov
	var_2971_object = var_1998_object; // 0x2564 Mov
	var_2972_object = var_1999_object; // 0x2565 Mov
	func_6988(var_2967_int, var_2968_int, var_2969_object, var_2970_object, var_2971_object, var_2972_object); // 0x2566 NEW_2
	goto Label_9602; // 0x2568 Jump
	
Label_9577:
	var_2998_int = 14; // 0x2569 PushI
	var_2999_bool = var_1989_int == var_2998_int; // 0x256a Eq
	if(var_2999_bool == 0) goto Label_9590; // 0x256b JumpB
	var_3000_int = 0; var_3001_int = 0; var_3002_object = Obj(); var_3003_object = Obj(); var_3004_object = Obj(); var_3005_object = Obj(); // 0x256c PushV
	var_3000_int = var_1990_int; // 0x256d Mov
	var_3001_int = var_1991_int; // 0x256e Mov
	var_3002_object = var_1996_object; // 0x256f Mov
	var_3003_object = var_1997_object; // 0x2570 Mov
	var_3004_object = var_1998_object; // 0x2571 Mov
	var_3005_object = var_1999_object; // 0x2572 Mov
	func_7188(var_3000_int, var_3001_int, var_3002_object, var_3003_object, var_3004_object, var_3005_object); // 0x2573 NEW_2
	goto Label_9602; // 0x2575 Jump
	
Label_9590:
	var_3137_int = 15; // 0x2576 PushI
	var_3138_bool = var_1989_int == var_3137_int; // 0x2577 Eq
	if(var_3138_bool == 0) goto Label_9602; // 0x2578 JumpB
	var_3139_int = 0; var_3140_int = 0; var_3141_object = Obj(); var_3142_object = Obj(); var_3143_object = Obj(); var_3144_object = Obj(); // 0x2579 PushV
	var_3139_int = var_1990_int; // 0x257a Mov
	var_3140_int = var_1991_int; // 0x257b Mov
	var_3141_object = var_1996_object; // 0x257c Mov
	var_3142_object = var_1997_object; // 0x257d Mov
	var_3143_object = var_1998_object; // 0x257e Mov
	var_3144_object = var_1999_object; // 0x257f Mov
	func_7370(var_3139_int, var_3140_int, var_3141_object, var_3142_object, var_3143_object, var_3144_object); // 0x2580 NEW_2
}


func_10408(var_4972_int, var_4973_float)
{
	var_4974_int = 0; var_4975_int = 0; var_4976_int = 0; var_4977_float = 0; // 0x28a9 PushV
	var_4975_int = 536369; // 0x28aa MovI
	var_4976_int = 536368; // 0x28ab MovI
	var_4977_float = var_4973_float; // 0x28ac Mov
	func_12495(var_4974_int, var_4975_int, var_4976_int, var_4977_float); // 0x28ad NEW_2
	var_4972_int = var_4974_int; // 0x28ae Mov
	return 0; // 0x28b0 Return
}


func_14511(var_4627_int, var_4628_int)
{
	var_4630_object = Obj(); var_4631_object = Obj(); var_4632_object = Obj(); var_4633_object = Obj(); // 0x38af PushV
	var_4634_string = "Updating game "; // 0x38b0 PushS
	var_4635_int = var_4634_string + var_4627_int; // 0x38b1 Add
	var_4636_string = " "; // 0x38b2 PushS
	var_4637_int = var_4635_int + var_4636_string; // 0x38b3 Add
	var_4638_int = var_4637_int + var_4628_int; // 0x38b4 Add
	Trace(var_4638_int); // 0x38b5 Func
	var_4639_bool = 0; // 0x38b7 PushV
	var_4639_bool = 0; // 0x38b8 MovB
	var_4640_int = 5; // 0x38b9 PushI
	var_4641_bool = var_4627_int == var_4640_int; // 0x38ba Eq
	if(var_4641_bool == 0) goto Label_14528; // 0x38bb JumpB
	var_4642_int = 0; // 0x38bc PushI
	var_4643_bool = var_4628_int == var_4642_int; // 0x38bd Eq
	if(var_4643_bool == 0) goto Label_14528; // 0x38be JumpB
	var_4639_bool = 1; // 0x38bf MovB
	
Label_14528:
	if(var_4639_bool == 0) goto Label_14545; // 0x38c0 JumpB
	var_4644_string = "house7_03@door1"; // 0x38c1 PushS
	FindActor(var_4632_object, var_4644_string); // 0x38c2 Func
	var_4645_string = "lp"; // 0x38c4 PushS
	var_4646_bool = 1; // 0x38c5 PushB
	SetProperty(var_4645_string, var_4646_bool); // 0x38c6 ObjFunc
	var_4647_string = "house7_03@door2"; // 0x38c8 PushS
	FindActor(var_4632_object, var_4647_string); // 0x38c9 Func
	var_4648_string = "lp"; // 0x38cb PushS
	var_4649_bool = 1; // 0x38cc PushB
	SetProperty(var_4648_string, var_4649_bool); // 0x38cd ObjFunc
	var_4632_object = 0; // 0x38cf SetNull
	goto Label_14562; // 0x38d0 Jump
	
Label_14562:
	return 4; // 0x38e2 Return
	
Label_14545:
	var_4650_bool = 0; // 0x38d1 PushV
	var_4650_bool = 0; // 0x38d2 MovB
	var_4651_int = 7; // 0x38d3 PushI
	var_4652_bool = var_4627_int == var_4651_int; // 0x38d4 Eq
	if(var_4652_bool == 0) goto Label_14554; // 0x38d5 JumpB
	var_4653_int = 0; // 0x38d6 PushI
	var_4654_bool = var_4628_int == var_4653_int; // 0x38d7 Eq
	if(var_4654_bool == 0) goto Label_14554; // 0x38d8 JumpB
	var_4650_bool = 1; // 0x38d9 MovB
	
Label_14554:
	if(var_4650_bool == 0) goto Label_14562; // 0x38da JumpB
	var_4655_string = "sobor"; // 0x38db PushS
	GetSceneByName(var_4633_object, var_4655_string); // 0x38dc Func
	var_4656_string = "aglaja"; // 0x38de PushS
	Trigger(var_4633_object, var_4656_string); // 0x38df Func
	var_4633_object = 0; // 0x38e1 SetNull
}


func_5296(var_2587_int, var_2588_int, var_2589_object, var_2590_object, var_2591_object, var_2592_object)
{
	var_2593_int = 0; // 0x14b1 PushI
	var_2594_bool = var_2588_int == var_2593_int; // 0x14b2 Eq
	if(var_2594_bool == 0) goto Label_5336; // 0x14b3 JumpB
	var_2595_int = 0; var_2596_bool = 0; // 0x14b4 PushV
	var_2595_int = 4; // 0x14b5 MovI
	var_2596_bool = 1; // 0x14b6 MovB
	func_802(var_2595_int, var_2596_bool); // 0x14b7 NEW_2
	var_2597_int = 0; var_2598_bool = 0; var_2599_int = 0; // 0x14b9 PushV
	var_2597_int = 4; // 0x14ba MovI
	var_2598_bool = 1; // 0x14bb MovB
	var_2599_int = 1; // 0x14bc MovI
	func_819(var_2597_int, var_2598_bool, var_2599_int); // 0x14bd NEW_2
	var_2600_int = 0; var_2601_int = 0; var_2602_object = Obj(); var_2603_object = Obj(); var_2604_object = Obj(); // 0x14bf PushV
	var_2600_int = 4; // 0x14c0 MovI
	var_2601_int = var_2587_int; // 0x14c1 Mov
	var_2602_object = var_2589_object; // 0x14c2 Mov
	var_2603_object = var_2590_object; // 0x14c3 Mov
	var_2604_object = var_2591_object; // 0x14c4 Mov
	func_647(var_2600_int, var_2601_int, var_2602_object, var_2603_object, var_2604_object); // 0x14c5 NEW_2
	var_2605_object = Obj(); var_2606_int = 0; // 0x14c7 PushV
	var_2605_object = var_2592_object; // 0x14c8 Mov
	var_2606_int = 1; // 0x14c9 MovI
	func_311(var_2606_int); // 0x14ca NEW_2
	var_2607_int = 0; var_2608_bool = 0; var_2609_int = 0; // 0x14cc PushV
	var_2607_int = 4; // 0x14cd MovI
	var_2608_bool = 1; // 0x14ce MovB
	var_2609_int = 4; // 0x14cf MovI
	func_876(var_2607_int, var_2608_bool, var_2609_int); // 0x14d0 NEW_2
	var_2610_int = 0; var_2611_bool = 0; var_2612_int = 0; // 0x14d2 PushV
	var_2610_int = 4; // 0x14d3 MovI
	var_2611_bool = 0; // 0x14d4 MovB
	var_2612_int = 4; // 0x14d5 MovI
	func_938(var_2610_int, var_2611_bool, var_2612_int); // 0x14d6 NEW_2
	
Label_5336:
	var_2613_int = 0; var_2614_bool = 0; // 0x14d8 PushV
	var_2613_int = 4; // 0x14d9 MovI
	var_2614_bool = 0; // 0x14da MovB
	func_785(var_2613_int, var_2614_bool); // 0x14db NEW_2
	var_2615_int = 0; var_2616_int = 0; var_2617_int = 0; // 0x14dd PushV
	var_2615_int = 4; // 0x14de MovI
	var_2616_int = var_2587_int; // 0x14df Mov
	var_2617_int = var_2588_int; // 0x14e0 Mov
	func_2950(var_2615_int, var_2616_int, var_2617_int); // 0x14e1 NEW_2
	return 0; // 0x14e3 Return
}


func_10417(var_5168_int, var_5169_float)
{
	var_5170_int = 0; var_5171_int = 0; var_5172_int = 0; var_5173_float = 0; // 0x28b2 PushV
	var_5171_int = 522210; // 0x28b3 MovI
	var_5172_int = 522209; // 0x28b4 MovI
	var_5173_float = var_5169_float; // 0x28b5 Mov
	func_12495(var_5170_int, var_5171_int, var_5172_int, var_5173_float); // 0x28b6 NEW_2
	var_5168_int = var_5170_int; // 0x28b7 Mov
	return 0; // 0x28b9 Return
}


func_6324(var_1638_int, var_1639_int, var_1640_object, var_1641_object, var_1642_object, var_1643_object)
{
	var_1644_int = 0; // 0x18b5 PushI
	var_1645_bool = var_1639_int == var_1644_int; // 0x18b6 Eq
	if(var_1645_bool == 0) goto Label_6364; // 0x18b7 JumpB
	var_1646_int = 0; var_1647_bool = 0; // 0x18b8 PushV
	var_1646_int = 10; // 0x18b9 MovI
	var_1647_bool = 0; // 0x18ba MovB
	func_802(var_1646_int, var_1647_bool); // 0x18bb NEW_2
	var_1648_int = 0; var_1649_bool = 0; var_1650_int = 0; // 0x18bd PushV
	var_1648_int = 10; // 0x18be MovI
	var_1649_bool = 0; // 0x18bf MovB
	var_1650_int = 1; // 0x18c0 MovI
	func_819(var_1648_int, var_1649_bool, var_1650_int); // 0x18c1 NEW_2
	var_1651_int = 0; var_1652_int = 0; var_1653_object = Obj(); var_1654_object = Obj(); var_1655_object = Obj(); // 0x18c3 PushV
	var_1651_int = 10; // 0x18c4 MovI
	var_1652_int = var_1638_int; // 0x18c5 Mov
	var_1653_object = var_1640_object; // 0x18c6 Mov
	var_1654_object = var_1641_object; // 0x18c7 Mov
	var_1655_object = var_1642_object; // 0x18c8 Mov
	func_628(var_1652_int, var_1653_object, var_1654_object, var_1655_object); // 0x18c9 NEW_2
	var_1656_object = Obj(); var_1657_int = 0; // 0x18cb PushV
	var_1656_object = var_1643_object; // 0x18cc Mov
	var_1657_int = 0; // 0x18cd MovI
	func_311(var_1657_int); // 0x18ce NEW_2
	var_1658_int = 0; var_1659_bool = 0; var_1660_int = 0; // 0x18d0 PushV
	var_1658_int = 10; // 0x18d1 MovI
	var_1659_bool = 0; // 0x18d2 MovB
	var_1660_int = 7; // 0x18d3 MovI
	func_876(var_1658_int, var_1659_bool, var_1660_int); // 0x18d4 NEW_2
	var_1661_int = 0; var_1662_bool = 0; var_1663_int = 0; // 0x18d6 PushV
	var_1661_int = 10; // 0x18d7 MovI
	var_1662_bool = 0; // 0x18d8 MovB
	var_1663_int = 7; // 0x18d9 MovI
	func_938(var_1661_int, var_1662_bool, var_1663_int); // 0x18da NEW_2
	
Label_6364:
	var_1664_int = 0; var_1665_int = 0; // 0x18dc PushV
	var_1664_int = 10; // 0x18dd MovI
	var_1665_int = var_1639_int; // 0x18de Mov
	func_989(var_1664_int, var_1665_int); // 0x18df NEW_2
	var_1666_int = 0; var_1667_int = 0; var_1668_int = 0; // 0x18e1 PushV
	var_1666_int = 10; // 0x18e2 MovI
	var_1667_int = var_1638_int; // 0x18e3 Mov
	var_1668_int = var_1639_int; // 0x18e4 Mov
	func_1630(var_1666_int, var_1667_int, var_1668_int); // 0x18e5 NEW_2
	return 0; // 0x18e7 Return
}


func_183(var_4735_string, var_4736_bool)
{
	var_4737_object = Obj(); var_4738_object = Obj(); // 0xb7 PushV
	FindActor(var_4738_object, var_4735_string); // 0xb8 Func
	var_4739_bool = var_4738_object == 0; // 0xba Not
	if(var_4739_bool == 0) goto Label_195; // 0xbb JumpB
	var_4740_string = "Door "; // 0xbc PushS
	var_4741_int = var_4740_string + var_4735_string; // 0xbd Add
	var_4742_string = " not found"; // 0xbe PushS
	var_4743_int = var_4741_int + var_4742_string; // 0xbf Add
	Trace(var_4743_int); // 0xc0 Func
	goto Label_198; // 0xc2 Jump
	
Label_198:
	return 2; // 0xc6 Return
	
Label_195:
	var_4744_string = "locked"; // 0xc3 PushS
	SetProperty(var_4744_string, var_4736_bool); // 0xc4 ObjFunc
}


func_10426(var_4782_int, var_4783_float)
{
	var_4784_int = 0; var_4785_int = 0; var_4786_int = 0; var_4787_float = 0; // 0x28bb PushV
	var_4785_int = 536371; // 0x28bc MovI
	var_4786_int = 536370; // 0x28bd MovI
	var_4787_float = var_4783_float; // 0x28be Mov
	func_12495(var_4784_int, var_4785_int, var_4786_int, var_4787_float); // 0x28bf NEW_2
	var_4782_int = var_4784_int; // 0x28c0 Mov
	return 0; // 0x28c2 Return
}


func_12478(var_5526_bool, var_5527_int)
{
	var_5528_object = Obj(); var_5529_object = Obj(); var_5530_object = Obj(); var_5531_object = Obj(); // 0x30be PushV
	var_5532_object = Obj(); // 0x30bf PushV
	func_12437(var_5532_object); // 0x30c0 NEW_2
	var_5530_object = var_5532_object; // 0x30c1 Mov
	Find(var_5527_int, var_5531_object); // 0x30c3 ObjFunc
	var_5537_bool = var_5531_object == 0; // 0x30c5 Not
	if(var_5537_bool == 0) goto Label_12489; // 0x30c6 JumpB
	var_5526_bool = 0; // 0x30c7 MovB
	return 4; // 0x30c8 Return
	
Label_12489:
	Remove(); // 0x30c9 ObjFunc
	var_5526_bool = 1; // 0x30cb MovB
	return 4; // 0x30cc Return
}


func_10435(var_5481_int, var_5482_float)
{
	var_5483_int = 0; var_5484_int = 0; var_5485_int = 0; var_5486_float = 0; // 0x28c4 PushV
	var_5484_int = 533585; // 0x28c5 MovI
	var_5485_int = 533584; // 0x28c6 MovI
	var_5486_float = var_5482_float; // 0x28c7 Mov
	func_12495(var_5483_int, var_5484_int, var_5485_int, var_5486_float); // 0x28c8 NEW_2
	var_5481_int = var_5483_int; // 0x28c9 Mov
	return 0; // 0x28cb Return
}


func_200(var_4815_bool, var_4816_object, var_4817_float)
{
	var_4818_bool = var_4816_object == 0; // 0xc9 Not
	if(var_4818_bool == 0) goto Label_205; // 0xca JumpB
	var_4815_bool = 0; // 0xcb MovB
	return 0; // 0xcc Return
	
Label_205:
	var_4819_int = 0; // 0xcd PushI
	var_4820_bool = var_4817_float > var_4819_int; // 0xce GT
	if(var_4820_bool == 0) goto Label_212; // 0xcf JumpB
	var_4821_int = 8; // 0xd0 PushI
	SendWorldWndMessage(var_4821_int); // 0xd1 Func
	goto Label_221; // 0xd3 Jump
	
Label_221:
	var_4822_float = 0; // 0xdd PushV
	var_4822_float = var_4817_float; // 0xde Mov
	func_235(var_4822_float); // 0xdf NEW_2
	var_4826_bool = 0; var_4827_object = Obj(); var_4828_string = ""; var_4829_float = 0; var_4830_float = 0; var_4831_float = 0; // 0xe1 PushV
	var_4827_object = var_4816_object; // 0xe2 Mov
	var_4828_string = "reputation"; // 0xe3 MovS
	var_4829_float = var_4817_float; // 0xe4 Mov
	var_4830_float = 0; // 0xe5 MovI
	var_4831_float = 1; // 0xe6 MovI
	func_99(var_4826_bool, var_4827_object, var_4828_string, var_4829_float, var_4830_float, var_4831_float); // 0xe7 NEW_2
	var_4815_bool = 1; // 0xe9 MovB
	return 0; // 0xea Return
	
Label_212:
	var_4844_int = 0; // 0xd4 PushI
	var_4845_bool = var_4817_float < var_4844_int; // 0xd5 LT
	if(var_4845_bool == 0) goto Label_219; // 0xd6 JumpB
	var_4846_int = 9; // 0xd7 PushI
	SendWorldWndMessage(var_4846_int); // 0xd8 Func
	goto Label_221; // 0xda Jump
	
Label_219:
	var_4815_bool = 0; // 0xdb MovB
	return 0; // 0xdc Return
}


func_7370(var_3139_int, var_3140_int, var_3141_object, var_3142_object, var_3143_object, var_3144_object)
{
	var_3145_int = 0; // 0x1ccb PushI
	var_3146_bool = var_3140_int == var_3145_int; // 0x1ccc Eq
	if(var_3146_bool == 0) goto Label_7410; // 0x1ccd JumpB
	var_3147_int = 0; var_3148_bool = 0; // 0x1cce PushV
	var_3147_int = 15; // 0x1ccf MovI
	var_3148_bool = 1; // 0x1cd0 MovB
	func_802(var_3147_int, var_3148_bool); // 0x1cd1 NEW_2
	var_3149_int = 0; var_3150_bool = 0; var_3151_int = 0; // 0x1cd3 PushV
	var_3149_int = 15; // 0x1cd4 MovI
	var_3150_bool = 1; // 0x1cd5 MovB
	var_3151_int = 1; // 0x1cd6 MovI
	func_819(var_3149_int, var_3150_bool, var_3151_int); // 0x1cd7 NEW_2
	var_3152_int = 0; var_3153_int = 0; var_3154_object = Obj(); var_3155_object = Obj(); var_3156_object = Obj(); // 0x1cd9 PushV
	var_3152_int = 15; // 0x1cda MovI
	var_3153_int = var_3139_int; // 0x1cdb Mov
	var_3154_object = var_3141_object; // 0x1cdc Mov
	var_3155_object = var_3142_object; // 0x1cdd Mov
	var_3156_object = var_3143_object; // 0x1cde Mov
	func_647(var_3152_int, var_3153_int, var_3154_object, var_3155_object, var_3156_object); // 0x1cdf NEW_2
	var_3157_object = Obj(); var_3158_int = 0; // 0x1ce1 PushV
	var_3157_object = var_3144_object; // 0x1ce2 Mov
	var_3158_int = 1; // 0x1ce3 MovI
	func_311(var_3158_int); // 0x1ce4 NEW_2
	var_3159_int = 0; var_3160_bool = 0; var_3161_int = 0; // 0x1ce6 PushV
	var_3159_int = 15; // 0x1ce7 MovI
	var_3160_bool = 1; // 0x1ce8 MovB
	var_3161_int = 5; // 0x1ce9 MovI
	func_876(var_3159_int, var_3160_bool, var_3161_int); // 0x1cea NEW_2
	var_3162_int = 0; var_3163_bool = 0; var_3164_int = 0; // 0x1cec PushV
	var_3162_int = 15; // 0x1ced MovI
	var_3163_bool = 0; // 0x1cee MovB
	var_3164_int = 5; // 0x1cef MovI
	func_938(var_3162_int, var_3163_bool, var_3164_int); // 0x1cf0 NEW_2
	
Label_7410:
	var_3165_int = 0; var_3166_bool = 0; // 0x1cf2 PushV
	var_3165_int = 15; // 0x1cf3 MovI
	var_3166_bool = 0; // 0x1cf4 MovB
	func_785(var_3165_int, var_3166_bool); // 0x1cf5 NEW_2
	var_3167_int = 0; var_3168_int = 0; var_3169_int = 0; // 0x1cf7 PushV
	var_3167_int = 15; // 0x1cf8 MovI
	var_3168_int = var_3139_int; // 0x1cf9 Mov
	var_3169_int = var_3140_int; // 0x1cfa Mov
	func_2590(var_3167_int, var_3168_int, var_3169_int); // 0x1cfb NEW_2
	return 0; // 0x1cfd Return
}


func_10444(var_5152_int, var_5153_float)
{
	var_5154_int = 0; var_5155_int = 0; var_5156_int = 0; var_5157_float = 0; // 0x28cd PushV
	var_5155_int = 536367; // 0x28ce MovI
	var_5156_int = 536366; // 0x28cf MovI
	var_5157_float = var_5153_float; // 0x28d0 Mov
	func_12495(var_5154_int, var_5155_int, var_5156_int, var_5157_float); // 0x28d1 NEW_2
	var_5152_int = var_5154_int; // 0x28d2 Mov
	return 0; // 0x28d4 Return
}


func_12495(var_4816_int, var_4817_int, var_4818_int, var_4819_float)
{
	var_4820_int = 0; var_4821_int = 0; // 0x30cf PushV
	AddMessage(var_4817_int, var_4818_int, var_4819_float, var_4821_int); // 0x30d0 Func
	var_4822_int = 6; // 0x30d2 PushI
	SendWorldWndMessage(var_4822_int); // 0x30d3 Func
	var_4816_int = var_4821_int; // 0x30d5 Mov
	return 2; // 0x30d6 Return
}


func_10453(var_4705_int, var_4706_float)
{
	var_4707_int = 0; var_4708_int = 0; var_4709_int = 0; var_4710_float = 0; // 0x28d6 PushV
	var_4708_int = 538734; // 0x28d7 MovI
	var_4709_int = 538733; // 0x28d8 MovI
	var_4710_float = var_4706_float; // 0x28d9 Mov
	func_12495(var_4707_int, var_4708_int, var_4709_int, var_4710_float); // 0x28da NEW_2
	var_4705_int = var_4707_int; // 0x28db Mov
	return 0; // 0x28dd Return
}


func_12503(var_4691_object)
{
	var_4692_object = Obj(); var_4693_object = Obj(); var_4694_object = Obj(); var_4695_object = Obj(); // 0x30d7 PushV
	GetMainOutdoorScene(var_4694_object); // 0x30d8 Func
	var_4696_bool = var_4694_object == 0; // 0x30da NullEq
	if(var_4696_bool == 0) goto Label_12514; // 0x30db JumpB
	var_4697_string = "Can't find main outdoor scene"; // 0x30dc PushS
	Trace(var_4697_string); // 0x30dd Func
	var_4695_object = 0; // 0x30df SetNull
	var_4691_object = var_4695_object; // 0x30e0 Mov
	return 4; // 0x30e1 Return
	
Label_12514:
	GetMap(var_4695_object); // 0x30e2 ObjFunc
	var_4691_object = var_4695_object; // 0x30e4 Mov
	return 4; // 0x30e5 Return
}


func_10462()
{
	var_4812_string = ""; var_4813_bool = 0; // 0x28df PushV
	var_4812_string = "termitnik2@door1"; // 0x28e0 MovS
	var_4813_bool = 1; // 0x28e1 MovB
	func_183(var_4812_string, var_4813_bool); // 0x28e2 NEW_2
	return 0; // 0x28e4 Return
}


func_14563(var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; // 0x38e3 PushV
	var_36_string = "Disease update"; // 0x38e4 PushS
	Trace(var_36_string); // 0x38e5 Func
	var_30_int = 0; // 0x38e7 MovI
	var_37_int = 0; // 0x38e8 PushI
	var_38_bool = var_23_int == var_37_int; // 0x38e9 Eq
	if(var_38_bool == 0) goto Label_14573; // 0x38ea JumpB
	var_30_int = 0; // 0x38eb MovI
	goto Label_14627; // 0x38ec Jump
	
Label_14627:
	var_39_int = 1; // 0x3923 PushI
	var_40_int = var_23_int + var_39_int; // 0x3924 Add
	var_41_int = 12; // 0x3925 PushI
	var_42_bool = var_40_int != var_41_int; // 0x3926 Neq
	if(var_42_bool == 0) goto Label_14709; // 0x3927 JumpB
	var_43_string = "Diseased regions : "; // 0x3928 PushS
	var_44_int = var_43_string + var_30_int; // 0x3929 Add
	Trace(var_44_int); // 0x392a Func
	var_31_int = 0; // 0x392c MovI
	
Label_14637:
	var_45_int = 16; // 0x392d PushI
	var_46_bool = var_31_int < var_45_int; // 0x392e LT
	if(var_46_bool == 0) goto Label_14662; // 0x392f JumpB
	var_47_bool = 0; var_48_int = 0; // 0x3930 PushV
	var_48_int = var_31_int; // 0x3931 Mov
	func_436(var_47_bool, var_48_int); // 0x3932 NEW_2
	if(var_47_bool == 0) goto Label_14650; // 0x3934 JumpB
	var_59_int = 0; // 0x3935 PushV
	var_59_int = var_31_int; // 0x3936 Mov
	func_478(var_59_int); // 0x3937 NEW_2
	goto Label_14659; // 0x3939 Jump
	
Label_14659:
	var_71_int = 1; // 0x3943 PushI
	var_31_int = var_31_int + var_71_int; // 0x3944 Add2
	goto Label_14637; // 0x3945 Jump
	
Label_14650:
	var_72_bool = 0; var_73_int = 0; // 0x393a PushV
	var_73_int = var_31_int; // 0x393b Mov
	func_466(var_72_bool, var_73_int); // 0x393c NEW_2
	if(var_72_bool == 0) goto Label_14659; // 0x393e JumpB
	var_81_int = 0; // 0x393f PushV
	var_81_int = var_31_int; // 0x3940 Mov
	func_418(var_81_int); // 0x3941 NEW_2
	
Label_14662:
	var_93_int = 2; // 0x3946 PushI
	var_94_bool = var_23_int == var_93_int; // 0x3947 Eq
	if(var_94_bool == 0) goto Label_14673; // 0x3948 JumpB
	var_95_string = "Special diseased region: 5"; // 0x3949 PushS
	Trace(var_95_string); // 0x394a Func
	var_96_int = 0; // 0x394c PushV
	var_96_int = 5; // 0x394d MovI
	func_448(var_96_int); // 0x394e NEW_2
	goto Label_14690; // 0x3950 Jump
	
Label_14690:
	var_108_int = 0; // 0x3962 PushV
	func_349(var_108_int); // 0x3963 NEW_2
	var_32_int = var_108_int; // 0x3964 Mov
	var_119_bool = var_32_int < var_30_int; // 0x3966 LT
	if(var_119_bool == 0) goto Label_14708; // 0x3967 JumpB
	var_33_int = var_30_int - var_32_int; // 0x3968 Sub2
	var_34_int = 0; // 0x3969 MovI
	
Label_14698:
	var_120_bool = var_34_int < var_33_int; // 0x396a LT
	if(var_120_bool == 0) goto Label_14708; // 0x396b JumpB
	var_121_int = 0; // 0x396c PushV
	var_122_int = 1; // 0x396d PushI
	var_121_int = var_23_int + var_122_int; // 0x396e Add2
	func_367(var_121_int); // 0x396f NEW_2
	var_167_int = 1; // 0x3971 PushI
	var_34_int = var_34_int + var_167_int; // 0x3972 Add2
	goto Label_14698; // 0x3973 Jump
	
Label_14708:
	goto Label_14734; // 0x3974 Jump
	
Label_14734:
	return 12; // 0x398e Return
	
Label_14673:
	var_168_int = 3; // 0x3951 PushI
	var_169_bool = var_23_int == var_168_int; // 0x3952 Eq
	if(var_169_bool == 0) goto Label_14690; // 0x3953 JumpB
	var_170_string = "Special diseased region: 3"; // 0x3954 PushS
	Trace(var_170_string); // 0x3955 Func
	var_171_int = 0; // 0x3957 PushV
	var_171_int = 3; // 0x3958 MovI
	func_448(var_171_int); // 0x3959 NEW_2
	var_172_string = "Special diseased region: 13"; // 0x395b PushS
	Trace(var_172_string); // 0x395c Func
	var_173_int = 0; // 0x395e PushV
	var_173_int = 13; // 0x395f MovI
	func_448(var_173_int); // 0x3960 NEW_2
	
Label_14709:
	var_35_int = 0; // 0x3975 MovI
	
Label_14710:
	var_174_int = 16; // 0x3976 PushI
	var_175_bool = var_35_int < var_174_int; // 0x3977 LT
	if(var_175_bool == 0) goto Label_14734; // 0x3978 JumpB
	var_176_bool = 0; // 0x3979 PushV
	var_176_bool = 1; // 0x397a MovB
	var_177_bool = 0; var_178_int = 0; // 0x397b PushV
	var_178_int = var_35_int; // 0x397c Mov
	func_436(var_177_bool, var_178_int); // 0x397d NEW_2
	if(var_177_bool == 0) goto Label_14726; // 0x397f JumpB
	var_179_bool = 0; var_180_int = 0; // 0x3980 PushV
	var_180_int = var_35_int; // 0x3981 Mov
	func_466(var_179_bool, var_180_int); // 0x3982 NEW_2
	if(var_179_bool == 0) goto Label_14726; // 0x3984 JumpB
	var_176_bool = 0; // 0x3985 MovB
	
Label_14726:
	if(var_176_bool == 0) goto Label_14731; // 0x3986 JumpB
	var_181_int = 0; // 0x3987 PushV
	var_181_int = var_35_int; // 0x3988 Mov
	func_418(var_181_int); // 0x3989 NEW_2
	
Label_14731:
	var_182_int = 1; // 0x398b PushI
	var_35_int = var_35_int + var_182_int; // 0x398c Add2
	goto Label_14710; // 0x398d Jump
	
Label_14573:
	var_183_int = 1; // 0x38ed PushI
	var_184_bool = var_23_int == var_183_int; // 0x38ee Eq
	if(var_184_bool == 0) goto Label_14578; // 0x38ef JumpB
	var_30_int = 0; // 0x38f0 MovI
	goto Label_14627; // 0x38f1 Jump
	
Label_14578:
	var_185_int = 2; // 0x38f2 PushI
	var_186_bool = var_23_int == var_185_int; // 0x38f3 Eq
	if(var_186_bool == 0) goto Label_14583; // 0x38f4 JumpB
	var_30_int = 1; // 0x38f5 MovI
	goto Label_14627; // 0x38f6 Jump
	
Label_14583:
	var_187_int = 3; // 0x38f7 PushI
	var_188_bool = var_23_int == var_187_int; // 0x38f8 Eq
	if(var_188_bool == 0) goto Label_14588; // 0x38f9 JumpB
	var_30_int = 2; // 0x38fa MovI
	goto Label_14627; // 0x38fb Jump
	
Label_14588:
	var_189_int = 4; // 0x38fc PushI
	var_190_bool = var_23_int == var_189_int; // 0x38fd Eq
	if(var_190_bool == 0) goto Label_14593; // 0x38fe JumpB
	var_30_int = 3; // 0x38ff MovI
	goto Label_14627; // 0x3900 Jump
	
Label_14593:
	var_191_int = 5; // 0x3901 PushI
	var_192_bool = var_23_int == var_191_int; // 0x3902 Eq
	if(var_192_bool == 0) goto Label_14598; // 0x3903 JumpB
	var_30_int = 4; // 0x3904 MovI
	goto Label_14627; // 0x3905 Jump
	
Label_14598:
	var_193_int = 6; // 0x3906 PushI
	var_194_bool = var_23_int == var_193_int; // 0x3907 Eq
	if(var_194_bool == 0) goto Label_14603; // 0x3908 JumpB
	var_30_int = 5; // 0x3909 MovI
	goto Label_14627; // 0x390a Jump
	
Label_14603:
	var_195_int = 7; // 0x390b PushI
	var_196_bool = var_23_int == var_195_int; // 0x390c Eq
	if(var_196_bool == 0) goto Label_14608; // 0x390d JumpB
	var_30_int = 5; // 0x390e MovI
	goto Label_14627; // 0x390f Jump
	
Label_14608:
	var_197_int = 8; // 0x3910 PushI
	var_198_bool = var_23_int == var_197_int; // 0x3911 Eq
	if(var_198_bool == 0) goto Label_14613; // 0x3912 JumpB
	var_30_int = 6; // 0x3913 MovI
	goto Label_14627; // 0x3914 Jump
	
Label_14613:
	var_199_int = 9; // 0x3915 PushI
	var_200_bool = var_23_int == var_199_int; // 0x3916 Eq
	if(var_200_bool == 0) goto Label_14618; // 0x3917 JumpB
	var_30_int = 6; // 0x3918 MovI
	goto Label_14627; // 0x3919 Jump
	
Label_14618:
	var_201_int = 10; // 0x391a PushI
	var_202_bool = var_23_int == var_201_int; // 0x391b Eq
	if(var_202_bool == 0) goto Label_14623; // 0x391c JumpB
	var_30_int = 7; // 0x391d MovI
	goto Label_14627; // 0x391e Jump
	
Label_14623:
	var_203_int = 11; // 0x391f PushI
	var_204_bool = var_23_int == var_203_int; // 0x3920 Eq
	if(var_204_bool == 0) goto Label_14627; // 0x3921 JumpB
	var_30_int = 8; // 0x3922 MovI
}


func_5348(var_3713_int, var_3714_int, var_3715_object, var_3716_object, var_3717_object, var_3718_object)
{
	var_3719_int = 0; // 0x14e5 PushI
	var_3720_bool = var_3714_int == var_3719_int; // 0x14e6 Eq
	if(var_3720_bool == 0) goto Label_5388; // 0x14e7 JumpB
	var_3721_int = 0; var_3722_bool = 0; // 0x14e8 PushV
	var_3721_int = 4; // 0x14e9 MovI
	var_3722_bool = 0; // 0x14ea MovB
	func_802(var_3721_int, var_3722_bool); // 0x14eb NEW_2
	var_3723_int = 0; var_3724_bool = 0; var_3725_int = 0; // 0x14ed PushV
	var_3723_int = 4; // 0x14ee MovI
	var_3724_bool = 0; // 0x14ef MovB
	var_3725_int = 1; // 0x14f0 MovI
	func_819(var_3723_int, var_3724_bool, var_3725_int); // 0x14f1 NEW_2
	var_3726_int = 0; var_3727_int = 0; var_3728_object = Obj(); var_3729_object = Obj(); var_3730_object = Obj(); // 0x14f3 PushV
	var_3726_int = 4; // 0x14f4 MovI
	var_3727_int = var_3713_int; // 0x14f5 Mov
	var_3728_object = var_3715_object; // 0x14f6 Mov
	var_3729_object = var_3716_object; // 0x14f7 Mov
	var_3730_object = var_3717_object; // 0x14f8 Mov
	func_726(var_3726_int, var_3727_int, var_3728_object, var_3729_object, var_3730_object); // 0x14f9 NEW_2
	var_3731_object = Obj(); var_3732_int = 0; // 0x14fb PushV
	var_3731_object = var_3718_object; // 0x14fc Mov
	var_3732_int = 2; // 0x14fd MovI
	func_311(var_3732_int); // 0x14fe NEW_2
	var_3733_int = 0; var_3734_bool = 0; var_3735_int = 0; // 0x1500 PushV
	var_3733_int = 4; // 0x1501 MovI
	var_3734_bool = 0; // 0x1502 MovB
	var_3735_int = 4; // 0x1503 MovI
	func_876(var_3733_int, var_3734_bool, var_3735_int); // 0x1504 NEW_2
	var_3736_int = 0; var_3737_bool = 0; var_3738_int = 0; // 0x1506 PushV
	var_3736_int = 4; // 0x1507 MovI
	var_3737_bool = 1; // 0x1508 MovB
	var_3738_int = 4; // 0x1509 MovI
	func_938(var_3736_int, var_3737_bool, var_3738_int); // 0x150a NEW_2
	
Label_5388:
	var_3739_int = 0; var_3740_bool = 0; // 0x150c PushV
	var_3739_int = 4; // 0x150d MovI
	var_3740_bool = 0; // 0x150e MovB
	func_785(var_3739_int, var_3740_bool); // 0x150f NEW_2
	var_3741_int = 0; var_3742_int = 0; var_3743_int = 0; // 0x1511 PushV
	var_3741_int = 4; // 0x1512 MovI
	var_3742_int = var_3713_int; // 0x1513 Mov
	var_3743_int = var_3714_int; // 0x1514 Mov
	func_3853(var_3741_int, var_3742_int, var_3743_int); // 0x1515 NEW_2
	return 0; // 0x1517 Return
}


func_10469()
{
	var_4794_string = ""; var_4795_bool = 0; // 0x28e6 PushV
	var_4794_string = "house_vlad@door2"; // 0x28e7 MovS
	var_4795_bool = 1; // 0x28e8 MovB
	func_183(var_4794_string, var_4795_bool); // 0x28e9 NEW_2
	return 0; // 0x28eb Return
}


func_12520(var_797_int)
{
	var_798_int = 0; var_799_int = 0; // 0x30e8 PushV
	var_800_string = "branch"; // 0x30e9 PushS
	GetVariable(var_800_string, var_799_int); // 0x30ea Func
	var_797_int = var_799_int; // 0x30ec Mov
	return 2; // 0x30ed Return
}


func_6376(var_2868_int, var_2869_int, var_2870_object, var_2871_object, var_2872_object, var_2873_object)
{
	var_2874_int = 0; // 0x18e9 PushI
	var_2875_bool = var_2869_int == var_2874_int; // 0x18ea Eq
	if(var_2875_bool == 0) goto Label_6416; // 0x18eb JumpB
	var_2876_int = 0; var_2877_bool = 0; // 0x18ec PushV
	var_2876_int = 10; // 0x18ed MovI
	var_2877_bool = 1; // 0x18ee MovB
	func_802(var_2876_int, var_2877_bool); // 0x18ef NEW_2
	var_2878_int = 0; var_2879_bool = 0; var_2880_int = 0; // 0x18f1 PushV
	var_2878_int = 10; // 0x18f2 MovI
	var_2879_bool = 1; // 0x18f3 MovB
	var_2880_int = 1; // 0x18f4 MovI
	func_819(var_2878_int, var_2879_bool, var_2880_int); // 0x18f5 NEW_2
	var_2881_int = 0; var_2882_int = 0; var_2883_object = Obj(); var_2884_object = Obj(); var_2885_object = Obj(); // 0x18f7 PushV
	var_2881_int = 10; // 0x18f8 MovI
	var_2882_int = var_2868_int; // 0x18f9 Mov
	var_2883_object = var_2870_object; // 0x18fa Mov
	var_2884_object = var_2871_object; // 0x18fb Mov
	var_2885_object = var_2872_object; // 0x18fc Mov
	func_647(var_2881_int, var_2882_int, var_2883_object, var_2884_object, var_2885_object); // 0x18fd NEW_2
	var_2886_object = Obj(); var_2887_int = 0; // 0x18ff PushV
	var_2886_object = var_2873_object; // 0x1900 Mov
	var_2887_int = 1; // 0x1901 MovI
	func_311(var_2887_int); // 0x1902 NEW_2
	var_2888_int = 0; var_2889_bool = 0; var_2890_int = 0; // 0x1904 PushV
	var_2888_int = 10; // 0x1905 MovI
	var_2889_bool = 1; // 0x1906 MovB
	var_2890_int = 7; // 0x1907 MovI
	func_876(var_2888_int, var_2889_bool, var_2890_int); // 0x1908 NEW_2
	var_2891_int = 0; var_2892_bool = 0; var_2893_int = 0; // 0x190a PushV
	var_2891_int = 10; // 0x190b MovI
	var_2892_bool = 0; // 0x190c MovB
	var_2893_int = 7; // 0x190d MovI
	func_938(var_2891_int, var_2892_bool, var_2893_int); // 0x190e NEW_2
	
Label_6416:
	var_2894_int = 0; var_2895_bool = 0; // 0x1910 PushV
	var_2894_int = 10; // 0x1911 MovI
	var_2895_bool = 0; // 0x1912 MovB
	func_785(var_2894_int, var_2895_bool); // 0x1913 NEW_2
	var_2896_int = 0; var_2897_int = 0; var_2898_int = 0; // 0x1915 PushV
	var_2896_int = 10; // 0x1916 MovI
	var_2897_int = var_2868_int; // 0x1917 Mov
	var_2898_int = var_2869_int; // 0x1918 Mov
	func_2770(var_2896_int, var_2897_int, var_2898_int); // 0x1919 NEW_2
	return 0; // 0x191b Return
}


func_235(var_4822_float)
{
	var_4823_object = Obj(); var_4824_object = Obj(); // 0xeb PushV
	CreateFloatVector(var_4824_object); // 0xec Func
	add(var_4822_float); // 0xee ObjFunc
	var_4825_int = 16; // 0xf0 PushI
	SendWorldWndMessage(var_4825_int, var_4824_object); // 0xf1 Func
	return 2; // 0xf3 Return
}


func_10476()
{
	var_5585_string = ""; var_5586_bool = 0; // 0x28ed PushV
	var_5585_string = "warehouse_rubin@door1"; // 0x28ee MovS
	var_5586_bool = 0; // 0x28ef MovB
	func_183(var_5585_string, var_5586_bool); // 0x28f0 NEW_2
	return 0; // 0x28f2 Return
}


func_1261(var_2158_float, var_2159_int)
{
	var_2160_int = 1; // 0x4ee PushI
	var_2161_int = var_2159_int + var_2160_int; // 0x4ef Add
	var_2162_int = 1; // 0x4f0 PushI
	var_2163_bool = var_2161_int == var_2162_int; // 0x4f1 Eq
	if(var_2163_bool == 0) goto Label_1270; // 0x4f2 JumpB
	var_2158_float = 0; // 0x4f3 MovI
	return 0; // 0x4f4 Return
	
Label_1270:
	var_2164_int = 1; // 0x4f6 PushI
	var_2165_int = var_2159_int + var_2164_int; // 0x4f7 Add
	var_2166_int = 2; // 0x4f8 PushI
	var_2167_bool = var_2165_int == var_2166_int; // 0x4f9 Eq
	if(var_2167_bool == 0) goto Label_1278; // 0x4fa JumpB
	var_2158_float = 0; // 0x4fb MovI
	return 0; // 0x4fc Return
	
Label_1278:
	var_2168_int = 1; // 0x4fe PushI
	var_2169_int = var_2159_int + var_2168_int; // 0x4ff Add
	var_2170_int = 3; // 0x500 PushI
	var_2171_bool = var_2169_int == var_2170_int; // 0x501 Eq
	if(var_2171_bool == 0) goto Label_1286; // 0x502 JumpB
	var_2158_float = 0; // 0x503 MovI
	return 0; // 0x504 Return
	
Label_1286:
	var_2172_int = 1; // 0x506 PushI
	var_2173_int = var_2159_int + var_2172_int; // 0x507 Add
	var_2174_int = 4; // 0x508 PushI
	var_2175_bool = var_2173_int == var_2174_int; // 0x509 Eq
	if(var_2175_bool == 0) goto Label_1294; // 0x50a JumpB
	var_2158_float = 0; // 0x50b MovI
	return 0; // 0x50c Return
	
Label_1294:
	var_2176_int = 1; // 0x50e PushI
	var_2177_int = var_2159_int + var_2176_int; // 0x50f Add
	var_2178_int = 5; // 0x510 PushI
	var_2179_bool = var_2177_int == var_2178_int; // 0x511 Eq
	if(var_2179_bool == 0) goto Label_1302; // 0x512 JumpB
	var_2158_float = 0; // 0x513 MovI
	return 0; // 0x514 Return
	
Label_1302:
	var_2180_int = 1; // 0x516 PushI
	var_2181_int = var_2159_int + var_2180_int; // 0x517 Add
	var_2182_int = 6; // 0x518 PushI
	var_2183_bool = var_2181_int == var_2182_int; // 0x519 Eq
	if(var_2183_bool == 0) goto Label_1310; // 0x51a JumpB
	var_2158_float = 2; // 0x51b MovI
	return 0; // 0x51c Return
	
Label_1310:
	var_2184_int = 1; // 0x51e PushI
	var_2185_int = var_2159_int + var_2184_int; // 0x51f Add
	var_2186_int = 7; // 0x520 PushI
	var_2187_bool = var_2185_int == var_2186_int; // 0x521 Eq
	if(var_2187_bool == 0) goto Label_1318; // 0x522 JumpB
	var_2158_float = 1; // 0x523 MovI
	return 0; // 0x524 Return
	
Label_1318:
	var_2188_int = 1; // 0x526 PushI
	var_2189_int = var_2159_int + var_2188_int; // 0x527 Add
	var_2190_int = 8; // 0x528 PushI
	var_2191_bool = var_2189_int == var_2190_int; // 0x529 Eq
	if(var_2191_bool == 0) goto Label_1326; // 0x52a JumpB
	var_2158_float = 1; // 0x52b MovI
	return 0; // 0x52c Return
	
Label_1326:
	var_2192_int = 1; // 0x52e PushI
	var_2193_int = var_2159_int + var_2192_int; // 0x52f Add
	var_2194_int = 9; // 0x530 PushI
	var_2195_bool = var_2193_int == var_2194_int; // 0x531 Eq
	if(var_2195_bool == 0) goto Label_1334; // 0x532 JumpB
	var_2158_float = 1; // 0x533 MovI
	return 0; // 0x534 Return
	
Label_1334:
	var_2196_int = 1; // 0x536 PushI
	var_2197_int = var_2159_int + var_2196_int; // 0x537 Add
	var_2198_int = 10; // 0x538 PushI
	var_2199_bool = var_2197_int == var_2198_int; // 0x539 Eq
	if(var_2199_bool == 0) goto Label_1342; // 0x53a JumpB
	var_2158_float = 1; // 0x53b MovI
	return 0; // 0x53c Return
	
Label_1342:
	var_2200_int = 1; // 0x53e PushI
	var_2201_int = var_2159_int + var_2200_int; // 0x53f Add
	var_2202_int = 11; // 0x540 PushI
	var_2203_bool = var_2201_int == var_2202_int; // 0x541 Eq
	if(var_2203_bool == 0) goto Label_1349; // 0x542 JumpB
	var_2158_float = 1; // 0x543 MovI
	return 0; // 0x544 Return
	
Label_1349:
	var_2158_float = 0; // 0x545 MovI
	return 0; // 0x546 Return
}


func_12526(var_4135_bool, var_4136_int)
{
	var_4138_int = 0; var_4139_int = 0; var_4140_int = 0; var_4141_int = 0; var_4142_int = 0; var_4143_int = 0; var_4144_int = 0; var_4145_int = 0; // 0x30ee PushV
	var_4146_bool = 0; // 0x30ef PushV
	var_4146_bool = 0; // 0x30f0 MovB
	var_4147_int = 42000; // 0x30f1 PushI
	var_4148_bool = var_4136_int > var_4147_int; // 0x30f2 GT
	if(var_4148_bool == 0) goto Label_12536; // 0x30f3 JumpB
	var_4149_int = 42288; // 0x30f4 PushI
	var_4150_bool = var_4136_int < var_4149_int; // 0x30f5 LT
	if(var_4150_bool == 0) goto Label_12536; // 0x30f6 JumpB
	var_4146_bool = 1; // 0x30f7 MovB
	
Label_12536:
	if(var_4146_bool == 0) goto Label_12553; // 0x30f8 JumpB
	var_4151_int = 42000; // 0x30f9 PushI
	var_4152_int = var_4136_int - var_4151_int; // 0x30fa Sub
	var_4153_int = 24; // 0x30fb PushI
	var_4142_int = var_4152_int / var_4152_int; // 0x30fc Div2
	var_4154_int = 42000; // 0x30fd PushI
	var_4155_int = var_4136_int - var_4154_int; // 0x30fe Sub
	var_4156_int = 24; // 0x30ff PushI
	var_4143_int = var_4155_int % var_4156_int; // 0x3100 Mod2
	var_4157_int = 0; var_4158_int = 0; // 0x3101 PushV
	var_4159_int = 1; // 0x3102 PushI
	var_4157_int = var_4142_int + var_4159_int; // 0x3103 Add2
	var_4158_int = var_4143_int; // 0x3104 Mov
	func_8278(var_4157_int, var_4158_int); // 0x3105 NEW_2
	var_4135_bool = 1; // 0x3107 MovB
	return 8; // 0x3108 Return
	
Label_12553:
	var_4294_bool = 0; // 0x3109 PushV
	var_4294_bool = 0; // 0x310a MovB
	var_4295_int = 40000; // 0x310b PushI
	var_4296_bool = var_4136_int > var_4295_int; // 0x310c GT
	if(var_4296_bool == 0) goto Label_12562; // 0x310d JumpB
	var_4297_int = 40288; // 0x310e PushI
	var_4298_bool = var_4136_int < var_4297_int; // 0x310f LT
	if(var_4298_bool == 0) goto Label_12562; // 0x3110 JumpB
	var_4294_bool = 1; // 0x3111 MovB
	
Label_12562:
	if(var_4294_bool == 0) goto Label_12585; // 0x3112 JumpB
	var_4299_int = 40000; // 0x3113 PushI
	var_4300_int = var_4136_int - var_4299_int; // 0x3114 Sub
	var_4301_int = 24; // 0x3115 PushI
	var_4144_int = var_4300_int / var_4300_int; // 0x3116 Div2
	var_4302_int = 40000; // 0x3117 PushI
	var_4303_int = var_4136_int - var_4302_int; // 0x3118 Sub
	var_4304_int = 24; // 0x3119 PushI
	var_4145_int = var_4303_int % var_4304_int; // 0x311a Mod2
	var_4305_int = 0; var_4306_int = 0; // 0x311b PushV
	var_4307_int = 1; // 0x311c PushI
	var_4305_int = var_4144_int + var_4307_int; // 0x311d Add2
	var_4306_int = var_4145_int; // 0x311e Mov
	func_8576(var_4305_int, var_4306_int); // 0x311f NEW_2
	var_4627_int = 0; var_4628_int = 0; // 0x3121 PushV
	var_4629_int = 1; // 0x3122 PushI
	var_4627_int = var_4144_int + var_4629_int; // 0x3123 Add2
	var_4628_int = var_4145_int; // 0x3124 Mov
	func_14511(var_4627_int, var_4628_int); // 0x3125 NEW_2
	var_4135_bool = 1; // 0x3127 MovB
	return 8; // 0x3128 Return
	
Label_12585:
	var_4135_bool = 0; // 0x3129 MovB
	return 8; // 0x312a Return
}


func_3310(var_2304_int, var_2305_int, var_2306_int)
{
	var_2307_int = 0; var_2308_int = 0; var_2309_int = 0; var_2310_int = 0; // 0xcee PushV
	var_2311_bool = 0; // 0xcef PushV
	var_2311_bool = 0; // 0xcf0 MovB
	var_2312_int = 8; // 0xcf1 PushI
	var_2313_bool = var_2306_int > var_2312_int; // 0xcf2 GT
	if(var_2313_bool == 0) goto Label_3320; // 0xcf3 JumpB
	var_2314_int = 21; // 0xcf4 PushI
	var_2315_bool = var_2306_int < var_2314_int; // 0xcf5 LT
	if(var_2315_bool == 0) goto Label_3320; // 0xcf6 JumpB
	var_2311_bool = 1; // 0xcf7 MovB
	
Label_3320:
	if(var_2311_bool == 0) goto Label_3375; // 0xcf8 JumpB
	var_2316_int = 0; var_2317_string = ""; var_2318_string = ""; var_2319_int = 0; // 0xcf9 PushV
	var_2316_int = var_2304_int; // 0xcfa Mov
	var_2317_string = "pers_vaxxabit"; // 0xcfb MovS
	var_2318_string = "vaxxabit_d.xml"; // 0xcfc MovS
	var_2319_int = 7; // 0xcfd MovI
	func_509(var_2316_int, var_2317_string, var_2318_string, var_2319_int); // 0xcfe NEW_2
	var_2320_int = 0; var_2321_string = ""; var_2322_string = ""; var_2323_int = 0; // 0xd00 PushV
	var_2320_int = var_2304_int; // 0xd01 Mov
	var_2321_string = "pers_vaxxabitka"; // 0xd02 MovS
	var_2322_string = "vaxxabitka_d.xml"; // 0xd03 MovS
	var_2323_int = 7; // 0xd04 MovI
	func_509(var_2320_int, var_2321_string, var_2322_string, var_2323_int); // 0xd05 NEW_2
	var_2324_int = 0; var_2325_string = ""; var_2326_string = ""; var_2327_int = 0; // 0xd07 PushV
	var_2324_int = var_2304_int; // 0xd08 Mov
	var_2325_string = "pers_rat_big"; // 0xd09 MovS
	var_2326_string = "rat_big.xml"; // 0xd0a MovS
	var_2327_int = 3; // 0xd0b MovI
	func_509(var_2324_int, var_2325_string, var_2326_string, var_2327_int); // 0xd0c NEW_2
	var_2328_int = 0; var_2329_string = ""; var_2330_string = ""; var_2331_int = 0; // 0xd0e PushV
	var_2328_int = var_2304_int; // 0xd0f Mov
	var_2329_string = "fog"; // 0xd10 MovS
	var_2330_string = "fog.xml"; // 0xd11 MovS
	var_2331_int = 7; // 0xd12 MovI
	func_535(var_2328_int, var_2329_string, var_2330_string, var_2331_int); // 0xd13 NEW_2
	var_2332_int = 5; // 0xd15 PushI
	var_2333_bool = var_2305_int >= var_2332_int; // 0xd16 GE
	if(var_2333_bool == 0) goto Label_3359; // 0xd17 JumpB
	var_2334_int = 0; var_2335_string = ""; var_2336_string = ""; var_2337_int = 0; // 0xd18 PushV
	var_2334_int = var_2304_int; // 0xd19 Mov
	var_2335_string = "fog"; // 0xd1a MovS
	var_2336_string = "fog_hunter.xml"; // 0xd1b MovS
	var_2337_int = 3; // 0xd1c MovI
	func_535(var_2334_int, var_2335_string, var_2336_string, var_2337_int); // 0xd1d NEW_2
	
Label_3359:
	var_2338_int = 2; // 0xd1f PushI
	var_2339_float = 0; var_2340_int = 0; // 0xd20 PushV
	var_2340_int = var_2305_int; // 0xd21 Mov
	func_1261(var_2339_float, var_2340_int); // 0xd22 NEW_2
	var_2309_int = var_2338_int * var_2339_float; // 0xd24 Mult2
	var_2341_int = var_2309_int; // 0xd25 Push
	if(var_2341_int == 0) goto Label_3374; // 0xd26 JumpB
	var_2342_int = 0; var_2343_string = ""; var_2344_string = ""; var_2345_int = 0; // 0xd27 PushV
	var_2342_int = var_2304_int; // 0xd28 Mov
	var_2343_string = "pers_bomber"; // 0xd29 MovS
	var_2344_string = "bomber.xml"; // 0xd2a MovS
	var_2345_int = var_2309_int; // 0xd2b Mov
	func_509(var_2342_int, var_2343_string, var_2344_string, var_2345_int); // 0xd2c NEW_2
	
Label_3374:
	goto Label_3428; // 0xd2e Jump
	
Label_3428:
	var_2346_bool = 0; var_2347_int = 0; // 0xd64 PushV
	var_2347_int = var_2305_int; // 0xd65 Mov
	func_1378(var_2346_bool, var_2347_int); // 0xd66 NEW_2
	if(var_2346_bool == 0) goto Label_3440; // 0xd68 JumpB
	var_2348_int = 0; var_2349_string = ""; var_2350_string = ""; var_2351_int = 0; // 0xd69 PushV
	var_2348_int = var_2304_int; // 0xd6a Mov
	var_2349_string = "pers_sanitar"; // 0xd6b MovS
	var_2350_string = "sanitar.xml"; // 0xd6c MovS
	var_2351_int = 2; // 0xd6d MovI
	func_509(var_2348_int, var_2349_string, var_2350_string, var_2351_int); // 0xd6e NEW_2
	
Label_3440:
	var_2352_int = 0; var_2353_string = ""; var_2354_string = ""; var_2355_int = 0; var_2356_int = 0; var_2357_int = 0; // 0xd70 PushV
	var_2352_int = var_2304_int; // 0xd71 Mov
	var_2353_string = "pers_worker"; // 0xd72 MovS
	var_2354_string = "agony1_man.xml"; // 0xd73 MovS
	var_2355_int = 2; // 0xd74 MovI
	var_2356_int = 4; // 0xd75 MovI
	var_2357_int = 4; // 0xd76 MovI
	func_522(var_2352_int, var_2353_string, var_2354_string, var_2355_int, var_2356_int, var_2357_int); // 0xd77 NEW_2
	var_2358_int = 0; var_2359_string = ""; var_2360_string = ""; var_2361_int = 0; var_2362_int = 0; var_2363_int = 0; // 0xd79 PushV
	var_2358_int = var_2304_int; // 0xd7a Mov
	var_2359_string = "pers_unosha"; // 0xd7b MovS
	var_2360_string = "agony1_man.xml"; // 0xd7c MovS
	var_2361_int = 2; // 0xd7d MovI
	var_2362_int = 4; // 0xd7e MovI
	var_2363_int = 4; // 0xd7f MovI
	func_522(var_2358_int, var_2359_string, var_2360_string, var_2361_int, var_2362_int, var_2363_int); // 0xd80 NEW_2
	var_2364_int = 0; var_2365_string = ""; var_2366_string = ""; var_2367_int = 0; var_2368_int = 0; var_2369_int = 0; // 0xd82 PushV
	var_2364_int = var_2304_int; // 0xd83 Mov
	var_2365_string = "pers_woman"; // 0xd84 MovS
	var_2366_string = "agony1_woman.xml"; // 0xd85 MovS
	var_2367_int = 2; // 0xd86 MovI
	var_2368_int = 4; // 0xd87 MovI
	var_2369_int = 4; // 0xd88 MovI
	func_522(var_2364_int, var_2365_string, var_2366_string, var_2367_int, var_2368_int, var_2369_int); // 0xd89 NEW_2
	var_2370_int = 0; var_2371_string = ""; var_2372_string = ""; var_2373_int = 0; var_2374_int = 0; var_2375_int = 0; // 0xd8b PushV
	var_2370_int = var_2304_int; // 0xd8c Mov
	var_2371_string = "pers_wasted_girl"; // 0xd8d MovS
	var_2372_string = "agony1_woman.xml"; // 0xd8e MovS
	var_2373_int = 2; // 0xd8f MovI
	var_2374_int = 4; // 0xd90 MovI
	var_2375_int = 4; // 0xd91 MovI
	func_522(var_2370_int, var_2371_string, var_2372_string, var_2373_int, var_2374_int, var_2375_int); // 0xd92 NEW_2
	return 4; // 0xd94 Return
	
Label_3375:
	var_2376_int = 0; var_2377_string = ""; var_2378_string = ""; var_2379_int = 0; // 0xd2f PushV
	var_2376_int = var_2304_int; // 0xd30 Mov
	var_2377_string = "pers_vaxxabit"; // 0xd31 MovS
	var_2378_string = "vaxxabit_d.xml"; // 0xd32 MovS
	var_2379_int = 5; // 0xd33 MovI
	func_509(var_2376_int, var_2377_string, var_2378_string, var_2379_int); // 0xd34 NEW_2
	var_2380_int = 0; var_2381_string = ""; var_2382_string = ""; var_2383_int = 0; // 0xd36 PushV
	var_2380_int = var_2304_int; // 0xd37 Mov
	var_2381_string = "pers_vaxxabitka"; // 0xd38 MovS
	var_2382_string = "vaxxabitka_d.xml"; // 0xd39 MovS
	var_2383_int = 5; // 0xd3a MovI
	func_509(var_2380_int, var_2381_string, var_2382_string, var_2383_int); // 0xd3b NEW_2
	var_2384_int = 0; var_2385_string = ""; var_2386_string = ""; var_2387_int = 0; // 0xd3d PushV
	var_2384_int = var_2304_int; // 0xd3e Mov
	var_2385_string = "pers_rat_big"; // 0xd3f MovS
	var_2386_string = "rat_big.xml"; // 0xd40 MovS
	var_2387_int = 4; // 0xd41 MovI
	func_509(var_2384_int, var_2385_string, var_2386_string, var_2387_int); // 0xd42 NEW_2
	var_2388_int = 0; var_2389_string = ""; var_2390_string = ""; var_2391_int = 0; // 0xd44 PushV
	var_2388_int = var_2304_int; // 0xd45 Mov
	var_2389_string = "fog"; // 0xd46 MovS
	var_2390_string = "fog.xml"; // 0xd47 MovS
	var_2391_int = 7; // 0xd48 MovI
	func_535(var_2388_int, var_2389_string, var_2390_string, var_2391_int); // 0xd49 NEW_2
	var_2392_int = 5; // 0xd4b PushI
	var_2393_bool = var_2305_int >= var_2392_int; // 0xd4c GE
	if(var_2393_bool == 0) goto Label_3413; // 0xd4d JumpB
	var_2394_int = 0; var_2395_string = ""; var_2396_string = ""; var_2397_int = 0; // 0xd4e PushV
	var_2394_int = var_2304_int; // 0xd4f Mov
	var_2395_string = "fog"; // 0xd50 MovS
	var_2396_string = "fog_hunter.xml"; // 0xd51 MovS
	var_2397_int = 3; // 0xd52 MovI
	func_535(var_2394_int, var_2395_string, var_2396_string, var_2397_int); // 0xd53 NEW_2
	
Label_3413:
	var_2398_int = 2; // 0xd55 PushI
	var_2399_float = 0; var_2400_int = 0; // 0xd56 PushV
	var_2400_int = var_2305_int; // 0xd57 Mov
	func_1261(var_2399_float, var_2400_int); // 0xd58 NEW_2
	var_2310_int = var_2398_int * var_2399_float; // 0xd5a Mult2
	var_2401_int = var_2310_int; // 0xd5b Push
	if(var_2401_int == 0) goto Label_3428; // 0xd5c JumpB
	var_2402_int = 0; var_2403_string = ""; var_2404_string = ""; var_2405_int = 0; // 0xd5d PushV
	var_2402_int = var_2304_int; // 0xd5e Mov
	var_2403_string = "pers_bomber"; // 0xd5f MovS
	var_2404_string = "bomber.xml"; // 0xd60 MovS
	var_2405_int = var_2310_int; // 0xd61 Mov
	func_509(var_2402_int, var_2403_string, var_2404_string, var_2405_int); // 0xd62 NEW_2
}


func_10483()
{
	var_6379_object = Obj(); var_6380_object = Obj(); // 0x28f3 PushV
	var_6381_object = Obj(); // 0x28f4 PushV
	func_12503(var_6381_object); // 0x28f5 NEW_2
	var_6380_object = var_6381_object; // 0x28f6 Mov
	var_6382_string = "d1KaterinaMapMark"; // 0x28f8 PushS
	var_6383_string = "pt_map_katerina"; // 0x28f9 PushS
	var_6384_int = 3; // 0x28fa PushI
	var_6385_int = 508640; // 0x28fb PushI
	var_6386_float = 0; // 0x28fc PushV
	func_290(var_6386_float); // 0x28fd NEW_2
	AddMark(var_6382_string, var_6383_string, var_6384_int, var_6385_int, var_6386_float); // 0x28ff ObjFunc
	return 2; // 0x2901 Return
}


func_245(var_673_bool, var_674_string, var_675_string)
{
	var_676_object = Obj(); var_677_object = Obj(); // 0xf5 PushV
	FindActor(var_677_object, var_674_string); // 0xf6 Func
	var_678_bool = var_677_object == 0; // 0xf8 NullEq
	if(var_678_bool == 0) goto Label_252; // 0xf9 JumpB
	var_673_bool = 0; // 0xfa MovB
	return 2; // 0xfb Return
	
Label_252:
	Trigger(var_677_object, var_675_string); // 0xfc Func
	var_673_bool = 1; // 0xfe MovB
	return 2; // 0xff Return
}


func_7422(var_4273_int, var_4274_int, var_4275_object, var_4276_object, var_4277_object, var_4278_object)
{
	var_4279_int = 0; // 0x1cff PushI
	var_4280_bool = var_4274_int == var_4279_int; // 0x1d00 Eq
	if(var_4280_bool == 0) goto Label_7462; // 0x1d01 JumpB
	var_4281_int = 0; var_4282_bool = 0; // 0x1d02 PushV
	var_4281_int = 15; // 0x1d03 MovI
	var_4282_bool = 0; // 0x1d04 MovB
	func_802(var_4281_int, var_4282_bool); // 0x1d05 NEW_2
	var_4283_int = 0; var_4284_bool = 0; var_4285_int = 0; // 0x1d07 PushV
	var_4283_int = 15; // 0x1d08 MovI
	var_4284_bool = 0; // 0x1d09 MovB
	var_4285_int = 1; // 0x1d0a MovI
	func_819(var_4283_int, var_4284_bool, var_4285_int); // 0x1d0b NEW_2
	var_4286_int = 0; var_4287_int = 0; var_4288_object = Obj(); var_4289_object = Obj(); var_4290_object = Obj(); // 0x1d0d PushV
	var_4286_int = 15; // 0x1d0e MovI
	var_4287_int = var_4273_int; // 0x1d0f Mov
	var_4288_object = var_4275_object; // 0x1d10 Mov
	var_4289_object = var_4276_object; // 0x1d11 Mov
	var_4290_object = var_4277_object; // 0x1d12 Mov
	func_726(var_4286_int, var_4287_int, var_4288_object, var_4289_object, var_4290_object); // 0x1d13 NEW_2
	var_4291_object = Obj(); var_4292_int = 0; // 0x1d15 PushV
	var_4291_object = var_4278_object; // 0x1d16 Mov
	var_4292_int = 2; // 0x1d17 MovI
	func_311(var_4292_int); // 0x1d18 NEW_2
	var_4293_int = 0; var_4294_bool = 0; var_4295_int = 0; // 0x1d1a PushV
	var_4293_int = 15; // 0x1d1b MovI
	var_4294_bool = 0; // 0x1d1c MovB
	var_4295_int = 5; // 0x1d1d MovI
	func_876(var_4293_int, var_4294_bool, var_4295_int); // 0x1d1e NEW_2
	var_4296_int = 0; var_4297_bool = 0; var_4298_int = 0; // 0x1d20 PushV
	var_4296_int = 15; // 0x1d21 MovI
	var_4297_bool = 1; // 0x1d22 MovB
	var_4298_int = 5; // 0x1d23 MovI
	func_938(var_4296_int, var_4297_bool, var_4298_int); // 0x1d24 NEW_2
	
Label_7462:
	var_4299_int = 0; var_4300_bool = 0; // 0x1d26 PushV
	var_4299_int = 15; // 0x1d27 MovI
	var_4300_bool = 0; // 0x1d28 MovB
	func_785(var_4299_int, var_4300_bool); // 0x1d29 NEW_2
	var_4301_int = 0; var_4302_int = 0; var_4303_int = 0; // 0x1d2b PushV
	var_4301_int = 15; // 0x1d2c MovI
	var_4302_int = var_4273_int; // 0x1d2d Mov
	var_4303_int = var_4274_int; // 0x1d2e Mov
	func_3477(var_4301_int, var_4302_int, var_4303_int); // 0x1d2f NEW_2
	return 0; // 0x1d31 Return
}


func_257(var_4508_bool, var_4509_string, var_4510_string, var_4511_string)
{
	var_4512_object = Obj(); var_4513_object = Obj(); // 0x101 PushV
	FindActor(var_4513_object, var_4509_string); // 0x102 Func
	var_4514_bool = var_4513_object == 0; // 0x104 NullEq
	if(var_4514_bool == 0) goto Label_264; // 0x105 JumpB
	var_4508_bool = 0; // 0x106 MovB
	return 2; // 0x107 Return
	
Label_264:
	Trigger(var_4513_object, var_4510_string, var_4511_string); // 0x108 Func
	var_4508_bool = 1; // 0x10a MovB
	return 2; // 0x10b Return
}


func_10499()
{
	var_5925_object = Obj(); var_5926_object = Obj(); var_5927_object = Obj(); var_5928_object = Obj(); // 0x2903 PushV
	var_5929_object = Obj(); // 0x2904 PushV
	func_12503(var_5929_object); // 0x2905 NEW_2
	var_5927_object = var_5929_object; // 0x2906 Mov
	var_5930_string = "d8q01MatGotoToyHouse"; // 0x2908 PushS
	FindMark(var_5928_object, var_5930_string); // 0x2909 ObjFunc
	var_5931_object = var_5928_object; // 0x290b Push
	if(var_5931_object == 0) goto Label_10511; // 0x290c JumpB
	Remove(); // 0x290d ObjFunc
	
Label_10511:
	var_5932_string = "d8q01MatGotoBoiny"; // 0x290f PushS
	FindMark(var_5928_object, var_5932_string); // 0x2910 ObjFunc
	var_5933_object = var_5928_object; // 0x2912 Push
	if(var_5933_object == 0) goto Label_10518; // 0x2913 JumpB
	Remove(); // 0x2914 ObjFunc
	
Label_10518:
	var_5934_string = "d8q01MladVladGotoMat"; // 0x2916 PushS
	FindMark(var_5928_object, var_5934_string); // 0x2917 ObjFunc
	var_5935_object = var_5928_object; // 0x2919 Push
	if(var_5935_object == 0) goto Label_10525; // 0x291a JumpB
	Remove(); // 0x291b ObjFunc
	
Label_10525:
	var_5936_string = "d8q01MladVladgotoOspina"; // 0x291d PushS
	FindMark(var_5928_object, var_5936_string); // 0x291e ObjFunc
	var_5937_object = var_5928_object; // 0x2920 Push
	if(var_5937_object == 0) goto Label_10532; // 0x2921 JumpB
	Remove(); // 0x2922 ObjFunc
	
Label_10532:
	var_5938_string = "d8q01OspinaGotoMladVlad"; // 0x2924 PushS
	FindMark(var_5928_object, var_5938_string); // 0x2925 ObjFunc
	var_5939_object = var_5928_object; // 0x2927 Push
	if(var_5939_object == 0) goto Label_10539; // 0x2928 JumpB
	Remove(); // 0x2929 ObjFunc
	
Label_10539:
	var_5940_string = "d8q02GotoKapella"; // 0x292b PushS
	FindMark(var_5928_object, var_5940_string); // 0x292c ObjFunc
	var_5941_object = var_5928_object; // 0x292e Push
	if(var_5941_object == 0) goto Label_10546; // 0x292f JumpB
	Remove(); // 0x2930 ObjFunc
	
Label_10546:
	var_5942_string = "d8q04MladVladGotoMark"; // 0x2932 PushS
	FindMark(var_5928_object, var_5942_string); // 0x2933 ObjFunc
	var_5943_object = var_5928_object; // 0x2935 Push
	if(var_5943_object == 0) goto Label_10553; // 0x2936 JumpB
	Remove(); // 0x2937 ObjFunc
	
Label_10553:
	var_5944_bool = 0; var_5945_int = 0; // 0x2939 PushV
	var_5945_int = 175; // 0x293a MovI
	func_12478(var_5944_bool, var_5945_int); // 0x293b NEW_2
	var_5946_bool = 0; var_5947_int = 0; // 0x293d PushV
	var_5947_int = 127; // 0x293e MovI
	func_12478(var_5946_bool, var_5947_int); // 0x293f NEW_2
	var_5948_bool = 0; var_5949_int = 0; // 0x2941 PushV
	var_5949_int = 124; // 0x2942 MovI
	func_12478(var_5948_bool, var_5949_int); // 0x2943 NEW_2
	var_5950_bool = 0; var_5951_int = 0; // 0x2945 PushV
	var_5951_int = 649; // 0x2946 MovI
	func_12478(var_5950_bool, var_5951_int); // 0x2947 NEW_2
	return 4; // 0x2949 Return
}


func_269(var_600_object)
{
	var_601_int = 0; var_602_int = 0; var_603_object = Obj(); var_604_int = 0; var_605_int = 0; var_606_object = Obj(); // 0x10d PushV
	var_607_object = var_600_object; // 0x10e Push
	if(var_607_object == 0) goto Label_289; // 0x10f JumpB
	size(var_604_int); // 0x110 ObjFunc
	var_605_int = 0; // 0x112 MovI
	
Label_275:
	var_608_bool = var_605_int < var_604_int; // 0x113 LT
	if(var_608_bool == 0) goto Label_287; // 0x114 JumpB
	get(var_606_object, var_605_int); // 0x115 ObjFunc
	var_609_object = var_606_object; // 0x117 Push
	if(var_609_object == 0) goto Label_283; // 0x118 JumpB
	Remove(); // 0x119 ObjFunc
	
Label_283:
	var_606_object = 0; // 0x11b SetNull
	var_610_int = 1; // 0x11c PushI
	var_605_int = var_605_int + var_610_int; // 0x11d Add2
	goto Label_275; // 0x11e Jump
	
Label_287:
	clear(); // 0x11f ObjFunc
	
Label_289:
	return 6; // 0x121 Return
}


func_11533()
{
	var_6284_object = Obj(); var_6285_object = Obj(); var_6286_object = Obj(); var_6287_object = Obj(); // 0x2d0d PushV
	var_6288_object = Obj(); // 0x2d0e PushV
	func_12503(var_6288_object); // 0x2d0f NEW_2
	var_6286_object = var_6288_object; // 0x2d10 Mov
	var_6289_string = "d6q01AlexandrGotoJulia"; // 0x2d12 PushS
	FindMark(var_6287_object, var_6289_string); // 0x2d13 ObjFunc
	var_6290_object = var_6287_object; // 0x2d15 Push
	if(var_6290_object == 0) goto Label_11545; // 0x2d16 JumpB
	Remove(); // 0x2d17 ObjFunc
	
Label_11545:
	var_6291_string = "d6q01AlexandrGotoKaterina"; // 0x2d19 PushS
	FindMark(var_6287_object, var_6291_string); // 0x2d1a ObjFunc
	var_6292_object = var_6287_object; // 0x2d1c Push
	if(var_6292_object == 0) goto Label_11552; // 0x2d1d JumpB
	Remove(); // 0x2d1e ObjFunc
	
Label_11552:
	var_6293_string = "d6q01AlexandrGotoLara"; // 0x2d20 PushS
	FindMark(var_6287_object, var_6293_string); // 0x2d21 ObjFunc
	var_6294_object = var_6287_object; // 0x2d23 Push
	if(var_6294_object == 0) goto Label_11559; // 0x2d24 JumpB
	Remove(); // 0x2d25 ObjFunc
	
Label_11559:
	var_6295_string = "d6q01AlexangrGotoJulLaraSelf"; // 0x2d27 PushS
	FindMark(var_6287_object, var_6295_string); // 0x2d28 ObjFunc
	var_6296_object = var_6287_object; // 0x2d2a Push
	if(var_6296_object == 0) goto Label_11566; // 0x2d2b JumpB
	Remove(); // 0x2d2c ObjFunc
	
Label_11566:
	var_6297_string = "d6q01BigVladGotoAnna"; // 0x2d2e PushS
	FindMark(var_6287_object, var_6297_string); // 0x2d2f ObjFunc
	var_6298_object = var_6287_object; // 0x2d31 Push
	if(var_6298_object == 0) goto Label_11573; // 0x2d32 JumpB
	Remove(); // 0x2d33 ObjFunc
	
Label_11573:
	var_6299_string = "d6q01BigVladGotoAnnaOspinaSelf"; // 0x2d35 PushS
	FindMark(var_6287_object, var_6299_string); // 0x2d36 ObjFunc
	var_6300_object = var_6287_object; // 0x2d38 Push
	if(var_6300_object == 0) goto Label_11580; // 0x2d39 JumpB
	Remove(); // 0x2d3a ObjFunc
	
Label_11580:
	var_6301_string = "d6q01BigVladGotoOspina"; // 0x2d3c PushS
	FindMark(var_6287_object, var_6301_string); // 0x2d3d ObjFunc
	var_6302_object = var_6287_object; // 0x2d3f Push
	if(var_6302_object == 0) goto Label_11587; // 0x2d40 JumpB
	Remove(); // 0x2d41 ObjFunc
	
Label_11587:
	var_6303_string = "d6q01KaterinaGotoLaska"; // 0x2d43 PushS
	FindMark(var_6287_object, var_6303_string); // 0x2d44 ObjFunc
	var_6304_object = var_6287_object; // 0x2d46 Push
	if(var_6304_object == 0) goto Label_11594; // 0x2d47 JumpB
	Remove(); // 0x2d48 ObjFunc
	
Label_11594:
	var_6305_string = "d6q01KaterinagotoLaskaSelf"; // 0x2d4a PushS
	FindMark(var_6287_object, var_6305_string); // 0x2d4b ObjFunc
	var_6306_object = var_6287_object; // 0x2d4d Push
	if(var_6306_object == 0) goto Label_11601; // 0x2d4e JumpB
	Remove(); // 0x2d4f ObjFunc
	
Label_11601:
	var_6307_string = "d6q01KillerIsKlara"; // 0x2d51 PushS
	FindMark(var_6287_object, var_6307_string); // 0x2d52 ObjFunc
	var_6308_object = var_6287_object; // 0x2d54 Push
	if(var_6308_object == 0) goto Label_11608; // 0x2d55 JumpB
	Remove(); // 0x2d56 ObjFunc
	
Label_11608:
	var_6309_string = "d6q01LaskaGotoAlbinos"; // 0x2d58 PushS
	FindMark(var_6287_object, var_6309_string); // 0x2d59 ObjFunc
	var_6310_object = var_6287_object; // 0x2d5b Push
	if(var_6310_object == 0) goto Label_11615; // 0x2d5c JumpB
	Remove(); // 0x2d5d ObjFunc
	
Label_11615:
	var_6311_string = "d6q01ViktorGotoAlexandr"; // 0x2d5f PushS
	FindMark(var_6287_object, var_6311_string); // 0x2d60 ObjFunc
	var_6312_object = var_6287_object; // 0x2d62 Push
	if(var_6312_object == 0) goto Label_11622; // 0x2d63 JumpB
	Remove(); // 0x2d64 ObjFunc
	
Label_11622:
	var_6313_string = "d6q01ViktorGotoAlxBigSelf"; // 0x2d66 PushS
	FindMark(var_6287_object, var_6313_string); // 0x2d67 ObjFunc
	var_6314_object = var_6287_object; // 0x2d69 Push
	if(var_6314_object == 0) goto Label_11629; // 0x2d6a JumpB
	Remove(); // 0x2d6b ObjFunc
	
Label_11629:
	var_6315_string = "d6q01ViktorGotoBigVlad"; // 0x2d6d PushS
	FindMark(var_6287_object, var_6315_string); // 0x2d6e ObjFunc
	var_6316_object = var_6287_object; // 0x2d70 Push
	if(var_6316_object == 0) goto Label_11636; // 0x2d71 JumpB
	Remove(); // 0x2d72 ObjFunc
	
Label_11636:
	var_6317_string = "d6q02BigVlad"; // 0x2d74 PushS
	FindMark(var_6287_object, var_6317_string); // 0x2d75 ObjFunc
	var_6318_object = var_6287_object; // 0x2d77 Push
	if(var_6318_object == 0) goto Label_11643; // 0x2d78 JumpB
	Remove(); // 0x2d79 ObjFunc
	
Label_11643:
	var_6319_string = "d6q02KapellaGotoMladVlad"; // 0x2d7b PushS
	FindMark(var_6287_object, var_6319_string); // 0x2d7c ObjFunc
	var_6320_object = var_6287_object; // 0x2d7e Push
	if(var_6320_object == 0) goto Label_11650; // 0x2d7f JumpB
	Remove(); // 0x2d80 ObjFunc
	
Label_11650:
	var_6321_string = "d6q02MladVladGotoBigVlad"; // 0x2d82 PushS
	FindMark(var_6287_object, var_6321_string); // 0x2d83 ObjFunc
	var_6322_object = var_6287_object; // 0x2d85 Push
	if(var_6322_object == 0) goto Label_11657; // 0x2d86 JumpB
	Remove(); // 0x2d87 ObjFunc
	
Label_11657:
	var_6323_string = "d6q02MladVladGotoBigVladSelf"; // 0x2d89 PushS
	FindMark(var_6287_object, var_6323_string); // 0x2d8a ObjFunc
	var_6324_object = var_6287_object; // 0x2d8c Push
	if(var_6324_object == 0) goto Label_11664; // 0x2d8d JumpB
	Remove(); // 0x2d8e ObjFunc
	
Label_11664:
	var_6325_bool = 0; var_6326_int = 0; // 0x2d90 PushV
	var_6326_int = 111; // 0x2d91 MovI
	func_12478(var_6325_bool, var_6326_int); // 0x2d92 NEW_2
	var_6327_bool = 0; var_6328_int = 0; // 0x2d94 PushV
	var_6328_int = 102; // 0x2d95 MovI
	func_12478(var_6327_bool, var_6328_int); // 0x2d96 NEW_2
	var_6329_bool = 0; var_6330_int = 0; // 0x2d98 PushV
	var_6330_int = 107; // 0x2d99 MovI
	func_12478(var_6329_bool, var_6330_int); // 0x2d9a NEW_2
	return 4; // 0x2d9c Return
}


func_5400()
{
	var_146_string = "dt_house3_14_i2"; // 0x1519 PushS
	add(var_146_string); // 0x151a ObjFunc
	var_147_string = "dt_house3_14"; // 0x151c PushS
	add(var_147_string); // 0x151d ObjFunc
	var_148_string = "house1_arc_01l"; // 0x151f PushS
	add(var_148_string); // 0x1520 ObjFunc
	var_149_string = "house1_arc_01r"; // 0x1522 PushS
	add(var_149_string); // 0x1523 ObjFunc
	var_150_string = "dt_House6_01"; // 0x1525 PushS
	add(var_150_string); // 0x1526 ObjFunc
	var_151_string = "dt_house_1_09"; // 0x1528 PushS
	add(var_151_string); // 0x1529 ObjFunc
	var_152_string = "house5_24"; // 0x152b PushS
	add(var_152_string); // 0x152c ObjFunc
	var_153_string = "dt_House6_03"; // 0x152e PushS
	add(var_153_string); // 0x152f ObjFunc
	var_154_string = "dt_House6_04"; // 0x1531 PushS
	add(var_154_string); // 0x1532 ObjFunc
	var_155_string = "dt_house_1_08"; // 0x1534 PushS
	add(var_155_string); // 0x1535 ObjFunc
	var_156_string = "house5_unoin_solidl"; // 0x1537 PushS
	add(var_156_string); // 0x1538 ObjFunc
	var_157_string = "house5_unoin_solidr"; // 0x153a PushS
	add(var_157_string); // 0x153b ObjFunc
	var_158_string = "dt_house2_12"; // 0x153d PushS
	add(var_158_string); // 0x153e ObjFunc
	var_159_string = "dt_house2_11"; // 0x1540 PushS
	add(var_159_string); // 0x1541 ObjFunc
	var_160_string = "dt_house2_13"; // 0x1543 PushS
	add(var_160_string); // 0x1544 ObjFunc
	var_161_string = "dt_house2_09"; // 0x1546 PushS
	add(var_161_string); // 0x1547 ObjFunc
	var_162_string = "dt_house2_08"; // 0x1549 PushS
	add(var_162_string); // 0x154a ObjFunc
	var_163_string = "dt_house2_07"; // 0x154c PushS
	add(var_163_string); // 0x154d ObjFunc
	var_164_string = "dt_house2_06"; // 0x154f PushS
	add(var_164_string); // 0x1550 ObjFunc
	var_165_string = "house5_01"; // 0x1552 PushS
	add(var_165_string); // 0x1553 ObjFunc
	var_166_string = "house5_15"; // 0x1555 PushS
	add(var_166_string); // 0x1556 ObjFunc
	var_167_string = "house5_16"; // 0x1558 PushS
	add(var_167_string); // 0x1559 ObjFunc
	var_168_string = "house5_17"; // 0x155b PushS
	add(var_168_string); // 0x155c ObjFunc
	var_169_string = "house5_unoin04l"; // 0x155e PushS
	add(var_169_string); // 0x155f ObjFunc
	var_170_string = "house5_unoin04r"; // 0x1561 PushS
	add(var_170_string); // 0x1562 ObjFunc
	var_171_string = "house5_23"; // 0x1564 PushS
	add(var_171_string); // 0x1565 ObjFunc
	var_172_string = "house1_se_05r"; // 0x1567 PushS
	add(var_172_string); // 0x1568 ObjFunc
	var_173_string = "house1_se_05l"; // 0x156a PushS
	add(var_173_string); // 0x156b ObjFunc
	var_174_string = "dt_house2_10"; // 0x156d PushS
	add(var_174_string); // 0x156e ObjFunc
	return 0; // 0x1570 Return
}


func_6428(var_3998_int, var_3999_int, var_4000_object, var_4001_object, var_4002_object, var_4003_object)
{
	var_4004_int = 0; // 0x191d PushI
	var_4005_bool = var_3999_int == var_4004_int; // 0x191e Eq
	if(var_4005_bool == 0) goto Label_6468; // 0x191f JumpB
	var_4006_int = 0; var_4007_bool = 0; // 0x1920 PushV
	var_4006_int = 10; // 0x1921 MovI
	var_4007_bool = 0; // 0x1922 MovB
	func_802(var_4006_int, var_4007_bool); // 0x1923 NEW_2
	var_4008_int = 0; var_4009_bool = 0; var_4010_int = 0; // 0x1925 PushV
	var_4008_int = 10; // 0x1926 MovI
	var_4009_bool = 0; // 0x1927 MovB
	var_4010_int = 1; // 0x1928 MovI
	func_819(var_4008_int, var_4009_bool, var_4010_int); // 0x1929 NEW_2
	var_4011_int = 0; var_4012_int = 0; var_4013_object = Obj(); var_4014_object = Obj(); var_4015_object = Obj(); // 0x192b PushV
	var_4011_int = 10; // 0x192c MovI
	var_4012_int = var_3998_int; // 0x192d Mov
	var_4013_object = var_4000_object; // 0x192e Mov
	var_4014_object = var_4001_object; // 0x192f Mov
	var_4015_object = var_4002_object; // 0x1930 Mov
	func_726(var_4011_int, var_4012_int, var_4013_object, var_4014_object, var_4015_object); // 0x1931 NEW_2
	var_4016_object = Obj(); var_4017_int = 0; // 0x1933 PushV
	var_4016_object = var_4003_object; // 0x1934 Mov
	var_4017_int = 2; // 0x1935 MovI
	func_311(var_4017_int); // 0x1936 NEW_2
	var_4018_int = 0; var_4019_bool = 0; var_4020_int = 0; // 0x1938 PushV
	var_4018_int = 10; // 0x1939 MovI
	var_4019_bool = 0; // 0x193a MovB
	var_4020_int = 7; // 0x193b MovI
	func_876(var_4018_int, var_4019_bool, var_4020_int); // 0x193c NEW_2
	var_4021_int = 0; var_4022_bool = 0; var_4023_int = 0; // 0x193e PushV
	var_4021_int = 10; // 0x193f MovI
	var_4022_bool = 1; // 0x1940 MovB
	var_4023_int = 7; // 0x1941 MovI
	func_938(var_4021_int, var_4022_bool, var_4023_int); // 0x1942 NEW_2
	
Label_6468:
	var_4024_int = 0; var_4025_bool = 0; // 0x1944 PushV
	var_4024_int = 10; // 0x1945 MovI
	var_4025_bool = 0; // 0x1946 MovB
	func_785(var_4024_int, var_4025_bool); // 0x1947 NEW_2
	var_4026_int = 0; var_4027_int = 0; var_4028_int = 0; // 0x1949 PushV
	var_4026_int = 10; // 0x194a MovI
	var_4027_int = var_3998_int; // 0x194b Mov
	var_4028_int = var_3999_int; // 0x194c Mov
	func_3665(var_4026_int, var_4027_int, var_4028_int); // 0x194d NEW_2
	return 0; // 0x194f Return
}


func_290(var_4561_float)
{
	var_4562_float = 0; var_4563_float = 0; // 0x122 PushV
	GetGameTime(var_4563_float); // 0x123 Func
	var_4561_float = var_4563_float; // 0x125 Mov
	return 2; // 0x126 Return
}


func_295()
{
	var_109_float = 0.5; // 0x127 PushF
	var_110_float = 0.886; // 0x128 PushF
	SetSepia(var_109_float, var_110_float); // 0x129 Func
	return 0; // 0x12b Return
}


func_4391()
{
	return 0; // 0x1128 Return
}


func_4393(var_519_int, var_520_int, var_521_object, var_522_object, var_523_object, var_524_object)
{
	var_525_int = 0; // 0x112a PushI
	var_526_bool = var_520_int == var_525_int; // 0x112b Eq
	if(var_526_bool == 0) goto Label_4433; // 0x112c JumpB
	var_527_int = 0; var_528_bool = 0; // 0x112d PushV
	var_527_int = 0; // 0x112e MovI
	var_528_bool = 0; // 0x112f MovB
	func_802(var_527_int, var_528_bool); // 0x1130 NEW_2
	var_529_int = 0; var_530_bool = 0; var_531_int = 0; // 0x1132 PushV
	var_529_int = 0; // 0x1133 MovI
	var_530_bool = 0; // 0x1134 MovB
	var_531_int = 1; // 0x1135 MovI
	func_819(var_529_int, var_530_bool, var_531_int); // 0x1136 NEW_2
	var_567_int = 0; var_568_int = 0; var_569_object = Obj(); var_570_object = Obj(); var_571_object = Obj(); // 0x1138 PushV
	var_567_int = 0; // 0x1139 MovI
	var_568_int = var_519_int; // 0x113a Mov
	var_569_object = var_521_object; // 0x113b Mov
	var_570_object = var_522_object; // 0x113c Mov
	var_571_object = var_523_object; // 0x113d Mov
	func_628(var_568_int, var_569_object, var_570_object, var_571_object); // 0x113e NEW_2
	var_613_object = Obj(); var_614_int = 0; // 0x1140 PushV
	var_613_object = var_524_object; // 0x1141 Mov
	var_614_int = 0; // 0x1142 MovI
	func_311(var_614_int); // 0x1143 NEW_2
	var_640_int = 0; var_641_bool = 0; var_642_int = 0; // 0x1145 PushV
	var_640_int = 0; // 0x1146 MovI
	var_641_bool = 0; // 0x1147 MovB
	var_642_int = 4; // 0x1148 MovI
	func_876(var_640_int, var_641_bool, var_642_int); // 0x1149 NEW_2
	var_687_int = 0; var_688_bool = 0; var_689_int = 0; // 0x114b PushV
	var_687_int = 0; // 0x114c MovI
	var_688_bool = 0; // 0x114d MovB
	var_689_int = 4; // 0x114e MovI
	func_938(var_687_int, var_688_bool, var_689_int); // 0x114f NEW_2
	
Label_4433:
	var_725_int = 0; var_726_int = 0; // 0x1151 PushV
	var_725_int = 0; // 0x1152 MovI
	var_726_int = var_520_int; // 0x1153 Mov
	func_1056(var_725_int, var_726_int); // 0x1154 NEW_2
	var_751_int = 0; var_752_int = 0; var_753_int = 0; // 0x1156 PushV
	var_751_int = 0; // 0x1157 MovI
	var_752_int = var_519_int; // 0x1158 Mov
	var_753_int = var_520_int; // 0x1159 Mov
	func_2212(var_751_int, var_752_int, var_753_int); // 0x115a NEW_2
	return 0; // 0x115c Return
}


func_12587()
{
	var_4398_float = 0; var_4399_int = 0; var_4400_float = 0; var_4401_float = 0; var_4402_int = 0; var_4403_float = 0; // 0x312b PushV
	GetGameTime(var_4401_float); // 0x312c Func
	var_4402_int = 1; // 0x312e MovI
	
Label_12591:
	var_4404_int = 288; // 0x312f PushI
	var_4405_bool = var_4402_int < var_4404_int; // 0x3130 LT
	if(var_4405_bool == 0) goto Label_12615; // 0x3131 JumpB
	var_4406_float = 1.0; // 0x3132 PushF
	var_4403_float = var_4406_float * var_4402_int; // 0x3133 Mult2
	var_4407_bool = var_4403_float < var_4401_float; // 0x3134 LT
	if(var_4407_bool == 0) goto Label_12599; // 0x3135 JumpB
	goto Label_12612; // 0x3136 Jump
	
Label_12612:
	var_4408_int = 1; // 0x3144 PushI
	var_4402_int = var_4402_int + var_4408_int; // 0x3145 Add2
	goto Label_12591; // 0x3146 Jump
	
Label_12599:
	var_4409_int = 40000; // 0x3137 PushI
	var_4410_int = var_4409_int + var_4402_int; // 0x3138 Add
	SetTimeEvent(var_4410_int, var_4403_float); // 0x3139 Func
	var_4411_float = 0.00333; // 0x313b PushF
	var_4403_float = var_4403_float - var_4411_float; // 0x313c Sub2
	var_4412_bool = var_4403_float < var_4401_float; // 0x313d LT
	if(var_4412_bool == 0) goto Label_12608; // 0x313e JumpB
	goto Label_12612; // 0x313f Jump
	
Label_12608:
	var_4413_int = 42000; // 0x3140 PushI
	var_4414_int = var_4413_int + var_4402_int; // 0x3141 Add
	SetTimeEvent(var_4414_int, var_4403_float); // 0x3142 Func
	
Label_12615:
	func_8206(); // 0x3148 NEW_2
	func_14471(); // 0x314b NEW_2
	return 6; // 0x314d Return
}


func_300()
{
	var_113_int = 0; // 0x12c PushI
	var_114_int = 0; // 0x12d PushI
	SetSepia(var_113_int, var_114_int); // 0x12e Func
	return 0; // 0x130 Return
}


func_305(var_447_string, var_448_int)
{
	var_449_string = "Region"; // 0x132 PushS
	var_450_int = var_449_string + var_448_int; // 0x133 Add
	var_451_string = "State"; // 0x134 PushS
	var_447_string = var_450_int + var_451_string; // 0x135 Add2
	return 0; // 0x136 Return
}


func_311(var_614_int)
{
	var_615_int = 0; var_616_string = ""; var_617_int = 0; var_618_string = ""; var_619_string = ""; var_620_object = Obj(); var_621_int = 0; var_622_string = ""; var_623_int = 0; var_624_string = ""; var_625_string = ""; var_626_object = Obj(); // 0x137 PushV
	size(var_621_int); // 0x138 ObjFunc
	var_627_int = 1; // 0x13a PushI
	var_628_bool = var_614_int == var_627_int; // 0x13b Eq
	if(var_628_bool == 0) goto Label_319; // 0x13c JumpB
	var_622_string = "s_"; // 0x13d MovS
	goto Label_323; // 0x13e Jump
	
Label_323:
	var_623_int = 0; // 0x143 MovI
	
Label_324:
	var_629_bool = var_623_int < var_621_int; // 0x144 LT
	if(var_629_bool == 0) goto Label_348; // 0x145 JumpB
	get(var_624_string, var_623_int); // 0x146 ObjFunc
	var_630_int = var_622_string + var_624_string; // 0x148 Add
	var_631_string = ".isc"; // 0x149 PushS
	var_625_string = var_630_int + var_631_string; // 0x14a Add2
	GetSceneByName(var_626_object, var_624_string); // 0x14b Func
	var_632_bool = var_626_object == 0; // 0x14d Not
	if(var_632_bool == 0) goto Label_342; // 0x14e JumpB
	var_633_string = "City manager: can't replace indoor scene ""; // 0x14f PushS
	var_634_int = var_633_string + var_624_string; // 0x150 Add
	var_635_string = "" because it doesn't exist"; // 0x151 PushS
	var_636_int = var_634_int + var_635_string; // 0x152 Add
	Trace(var_636_int); // 0x153 Func
	goto Label_344; // 0x155 Jump
	
Label_344:
	var_626_object = 0; // 0x158 SetNull
	var_637_int = 1; // 0x159 PushI
	var_623_int = var_623_int + var_637_int; // 0x15a Add2
	goto Label_324; // 0x15b Jump
	
Label_342:
	ReplaceScene(var_626_object, var_625_string); // 0x156 Func
	
Label_348:
	return 12; // 0x15c Return
	
Label_319:
	var_638_int = 2; // 0x13f PushI
	var_639_bool = var_614_int == var_638_int; // 0x140 Eq
	if(var_639_bool == 0) goto Label_323; // 0x141 JumpB
	var_622_string = "n_"; // 0x142 MovS
}


func_1351(var_1129_bool, var_1130_int, var_1131_int)
{
	var_1129_bool = 0; // 0x548 MovB
	var_1132_int = 10; // 0x549 PushI
	var_1133_bool = var_1130_int >= var_1132_int; // 0x54a GE
	if(var_1133_bool == 0) goto Label_1360; // 0x54b JumpB
	var_1134_int = 6; // 0x54c PushI
	var_1135_bool = var_1131_int < var_1134_int; // 0x54d LT
	if(var_1135_bool == 0) goto Label_1360; // 0x54e JumpB
	var_1129_bool = 1; // 0x54f MovB
	
Label_1360:
	return 0; // 0x550 Return
}


func_10572()
{
	var_4800_string = ""; var_4801_bool = 0; // 0x294d PushV
	var_4800_string = "house1_kabak@door1"; // 0x294e MovS
	var_4801_bool = 1; // 0x294f MovB
	func_183(var_4800_string, var_4801_bool); // 0x2950 NEW_2
	return 0; // 0x2952 Return
}


func_12622(var_4657_int, var_4658_float)
{
	var_4659_int = 45268; // 0x314f PushI
	var_4660_bool = var_4657_int == var_4659_int; // 0x3150 Eq
	if(var_4660_bool == 0) goto Label_12635; // 0x3151 JumpB
	var_4661_object = Obj(); var_4662_object = Obj(); // 0x3152 PushV
	var_4663_object = GlobalVars[16]; // 0x3153 PushGE
	var_4661_object = var_4663_object; // 0x3154 Mov
	var_4664_object = GlobalVars[16]; // 0x3156 PushGE
	var_4662_object = var_4664_object; // 0x3157 Mov
	func_10689(); // 0x3159 NEW_2
	
Label_12635:
	var_4675_int = 45261; // 0x315b PushI
	var_4676_bool = var_4657_int == var_4675_int; // 0x315c Eq
	if(var_4676_bool == 0) goto Label_12659; // 0x315d JumpB
	var_4677_bool = 0; var_4678_object = Obj(); // 0x315e PushV
	var_4679_object = GlobalVars[16]; // 0x315f PushGE
	var_4678_object = var_4679_object; // 0x3160 Mov
	func_12195(var_4678_object); // 0x3162 NEW_2
	var_4684_bool = var_4677_bool == 0; // 0x3164 Not
	if(var_4684_bool == 0) goto Label_12659; // 0x3165 JumpB
	var_4685_object = Obj(); var_4686_object = Obj(); // 0x3166 PushV
	var_4687_object = GlobalVars[16]; // 0x3167 PushGE
	var_4685_object = var_4687_object; // 0x3168 Mov
	var_4688_object = GlobalVars[16]; // 0x316a PushGE
	var_4686_object = var_4688_object; // 0x316b Mov
	func_10602(); // 0x316d NEW_2
	var_4705_int = 0; var_4706_float = 0; // 0x316f PushV
	var_4706_float = var_4658_float; // 0x3170 Mov
	func_10453(var_4705_int, var_4706_float); // 0x3171 NEW_2
	
Label_12659:
	var_4714_int = 45230; // 0x3173 PushI
	var_4715_bool = var_4657_int == var_4714_int; // 0x3174 Eq
	if(var_4715_bool == 0) goto Label_12666; // 0x3175 JumpB
	var_4716_int = 0; var_4717_float = 0; // 0x3176 PushV
	var_4717_float = var_4658_float; // 0x3177 Mov
	func_10156(var_4716_int, var_4717_float); // 0x3178 NEW_2
	
Label_12666:
	var_4722_int = 45218; // 0x317a PushI
	var_4723_bool = var_4657_int == var_4722_int; // 0x317b Eq
	if(var_4723_bool == 0) goto Label_12681; // 0x317c JumpB
	var_4724_bool = 0; var_4725_object = Obj(); // 0x317d PushV
	var_4726_object = GlobalVars[16]; // 0x317e PushGE
	var_4725_object = var_4726_object; // 0x317f Mov
	func_12063(var_4725_object); // 0x3181 NEW_2
	var_4731_bool = var_4724_bool == 0; // 0x3183 Not
	if(var_4731_bool == 0) goto Label_12681; // 0x3184 JumpB
	var_4732_int = 0; var_4733_float = 0; // 0x3185 PushV
	var_4733_float = var_4658_float; // 0x3186 Mov
	func_9922(var_4732_int, var_4733_float); // 0x3187 NEW_2
	
Label_12681:
	var_4738_int = 45269; // 0x3189 PushI
	var_4739_bool = var_4657_int == var_4738_int; // 0x318a Eq
	if(var_4739_bool == 0) goto Label_12693; // 0x318b JumpB
	var_4740_object = Obj(); var_4741_object = Obj(); // 0x318c PushV
	var_4742_object = GlobalVars[16]; // 0x318d PushGE
	var_4740_object = var_4742_object; // 0x318e Mov
	var_4743_object = GlobalVars[16]; // 0x3190 PushGE
	var_4741_object = var_4743_object; // 0x3191 Mov
	func_10706(); // 0x3193 NEW_2
	
Label_12693:
	var_4752_int = 45231; // 0x3195 PushI
	var_4753_bool = var_4657_int == var_4752_int; // 0x3196 Eq
	if(var_4753_bool == 0) goto Label_12700; // 0x3197 JumpB
	var_4754_int = 0; var_4755_float = 0; // 0x3198 PushV
	var_4755_float = var_4658_float; // 0x3199 Mov
	func_10201(var_4754_int, var_4755_float); // 0x319a NEW_2
	
Label_12700:
	var_4760_int = 45227; // 0x319c PushI
	var_4761_bool = var_4657_int == var_4760_int; // 0x319d Eq
	if(var_4761_bool == 0) goto Label_12724; // 0x319e JumpB
	var_4762_bool = 0; var_4763_object = Obj(); // 0x319f PushV
	var_4764_object = GlobalVars[16]; // 0x31a0 PushGE
	var_4763_object = var_4764_object; // 0x31a1 Mov
	func_12147(var_4763_object); // 0x31a3 NEW_2
	var_4769_bool = var_4762_bool == 0; // 0x31a5 Not
	if(var_4769_bool == 0) goto Label_12724; // 0x31a6 JumpB
	var_4770_object = Obj(); var_4771_object = Obj(); // 0x31a7 PushV
	var_4772_object = GlobalVars[16]; // 0x31a8 PushGE
	var_4770_object = var_4772_object; // 0x31a9 Mov
	var_4773_object = GlobalVars[16]; // 0x31ab PushGE
	var_4771_object = var_4773_object; // 0x31ac Mov
	func_10618(); // 0x31ae NEW_2
	var_4782_int = 0; var_4783_float = 0; // 0x31b0 PushV
	var_4783_float = var_4658_float; // 0x31b1 Mov
	func_10426(var_4782_int, var_4783_float); // 0x31b2 NEW_2
	
Label_12724:
	var_4788_int = 45271; // 0x31b4 PushI
	var_4789_bool = var_4657_int == var_4788_int; // 0x31b5 Eq
	if(var_4789_bool == 0) goto Label_12736; // 0x31b6 JumpB
	var_4790_object = Obj(); var_4791_object = Obj(); // 0x31b7 PushV
	var_4792_object = GlobalVars[16]; // 0x31b8 PushGE
	var_4790_object = var_4792_object; // 0x31b9 Mov
	var_4793_object = GlobalVars[16]; // 0x31bb PushGE
	var_4791_object = var_4793_object; // 0x31bc Mov
	func_10740(); // 0x31be NEW_2
	
Label_12736:
	var_4802_int = 45282; // 0x31c0 PushI
	var_4803_bool = var_4657_int == var_4802_int; // 0x31c1 Eq
	if(var_4803_bool == 0) goto Label_12759; // 0x31c2 JumpB
	var_4804_bool = 0; var_4805_object = Obj(); // 0x31c3 PushV
	var_4806_object = GlobalVars[16]; // 0x31c4 PushGE
	var_4805_object = var_4806_object; // 0x31c5 Mov
	func_12207(var_4805_object); // 0x31c7 NEW_2
	if(var_4804_bool == 0) goto Label_12759; // 0x31c9 JumpB
	var_4811_object = Obj(); var_4812_object = Obj(); // 0x31ca PushV
	var_4813_object = GlobalVars[16]; // 0x31cb PushGE
	var_4811_object = var_4813_object; // 0x31cc Mov
	var_4814_object = GlobalVars[16]; // 0x31ce PushGE
	var_4812_object = var_4814_object; // 0x31cf Mov
	func_10776(var_4812_object); // 0x31d1 NEW_2
	var_4847_int = 0; var_4848_float = 0; // 0x31d3 PushV
	var_4848_float = var_4658_float; // 0x31d4 Mov
	func_10120(var_4847_int, var_4848_float); // 0x31d5 NEW_2
	
Label_12759:
	var_4853_int = 45270; // 0x31d7 PushI
	var_4854_bool = var_4657_int == var_4853_int; // 0x31d8 Eq
	if(var_4854_bool == 0) goto Label_12771; // 0x31d9 JumpB
	var_4855_object = Obj(); var_4856_object = Obj(); // 0x31da PushV
	var_4857_object = GlobalVars[16]; // 0x31db PushGE
	var_4855_object = var_4857_object; // 0x31dc Mov
	var_4858_object = GlobalVars[16]; // 0x31de PushGE
	var_4856_object = var_4858_object; // 0x31df Mov
	func_10723(); // 0x31e1 NEW_2
	
Label_12771:
	var_4867_int = 45229; // 0x31e3 PushI
	var_4868_bool = var_4657_int == var_4867_int; // 0x31e4 Eq
	if(var_4868_bool == 0) goto Label_12778; // 0x31e5 JumpB
	var_4869_int = 0; var_4870_float = 0; // 0x31e6 PushV
	var_4870_float = var_4658_float; // 0x31e7 Mov
	func_10147(var_4869_int, var_4870_float); // 0x31e8 NEW_2
	
Label_12778:
	var_4875_int = 45222; // 0x31ea PushI
	var_4876_bool = var_4657_int == var_4875_int; // 0x31eb Eq
	if(var_4876_bool == 0) goto Label_12798; // 0x31ec JumpB
	var_4877_bool = 0; var_4878_object = Obj(); // 0x31ed PushV
	var_4879_object = GlobalVars[16]; // 0x31ee PushGE
	var_4878_object = var_4879_object; // 0x31ef Mov
	func_11967(var_4878_object); // 0x31f1 NEW_2
	var_4884_bool = var_4877_bool == 0; // 0x31f3 Not
	if(var_4884_bool == 0) goto Label_12798; // 0x31f4 JumpB
	var_4885_object = Obj(); var_4886_object = Obj(); // 0x31f5 PushV
	var_4887_object = GlobalVars[16]; // 0x31f6 PushGE
	var_4885_object = var_4887_object; // 0x31f7 Mov
	var_4888_object = GlobalVars[16]; // 0x31f9 PushGE
	var_4886_object = var_4888_object; // 0x31fa Mov
	func_10797(); // 0x31fc NEW_2
	
Label_12798:
	var_4925_int = 45260; // 0x31fe PushI
	var_4926_bool = var_4657_int == var_4925_int; // 0x31ff Eq
	if(var_4926_bool == 0) goto Label_12813; // 0x3200 JumpB
	var_4927_bool = 0; var_4928_object = Obj(); // 0x3201 PushV
	var_4929_object = GlobalVars[16]; // 0x3202 PushGE
	var_4928_object = var_4929_object; // 0x3203 Mov
	func_12183(var_4928_object); // 0x3205 NEW_2
	var_4934_bool = var_4927_bool == 0; // 0x3207 Not
	if(var_4934_bool == 0) goto Label_12813; // 0x3208 JumpB
	var_4935_int = 0; var_4936_float = 0; // 0x3209 PushV
	var_4936_float = var_4658_float; // 0x320a Mov
	func_10399(var_4935_int, var_4936_float); // 0x320b NEW_2
	
Label_12813:
	var_4941_int = 45226; // 0x320d PushI
	var_4942_bool = var_4657_int == var_4941_int; // 0x320e Eq
	if(var_4942_bool == 0) goto Label_12849; // 0x320f JumpB
	var_4943_bool = 0; // 0x3210 PushV
	var_4943_bool = 0; // 0x3211 MovB
	var_4944_bool = 0; var_4945_object = Obj(); // 0x3212 PushV
	var_4946_object = GlobalVars[16]; // 0x3213 PushGE
	var_4945_object = var_4946_object; // 0x3214 Mov
	func_12123(var_4945_object); // 0x3216 NEW_2
	var_4951_bool = var_4944_bool == 0; // 0x3218 Not
	if(var_4951_bool == 0) goto Label_12835; // 0x3219 JumpB
	var_4952_bool = 0; var_4953_object = Obj(); // 0x321a PushV
	var_4954_object = GlobalVars[16]; // 0x321b PushGE
	var_4953_object = var_4954_object; // 0x321c Mov
	func_12051(var_4953_object); // 0x321e NEW_2
	var_4959_bool = var_4952_bool == 0; // 0x3220 Not
	if(var_4959_bool == 0) goto Label_12835; // 0x3221 JumpB
	var_4943_bool = 1; // 0x3222 MovB
	
Label_12835:
	if(var_4943_bool == 0) goto Label_12849; // 0x3223 JumpB
	var_4960_object = Obj(); var_4961_object = Obj(); // 0x3224 PushV
	var_4962_object = GlobalVars[16]; // 0x3225 PushGE
	var_4960_object = var_4962_object; // 0x3226 Mov
	var_4963_object = GlobalVars[16]; // 0x3228 PushGE
	var_4961_object = var_4963_object; // 0x3229 Mov
	func_10650(); // 0x322b NEW_2
	var_4972_int = 0; var_4973_float = 0; // 0x322d PushV
	var_4973_float = var_4658_float; // 0x322e Mov
	func_10408(var_4972_int, var_4973_float); // 0x322f NEW_2
	
Label_12849:
	var_4978_int = 45224; // 0x3231 PushI
	var_4979_bool = var_4657_int == var_4978_int; // 0x3232 Eq
	if(var_4979_bool == 0) goto Label_12864; // 0x3233 JumpB
	var_4980_bool = 0; var_4981_object = Obj(); // 0x3234 PushV
	var_4982_object = GlobalVars[16]; // 0x3235 PushGE
	var_4981_object = var_4982_object; // 0x3236 Mov
	func_12111(var_4981_object); // 0x3238 NEW_2
	var_4987_bool = var_4980_bool == 0; // 0x323a Not
	if(var_4987_bool == 0) goto Label_12864; // 0x323b JumpB
	var_4988_int = 0; var_4989_float = 0; // 0x323c PushV
	var_4989_float = var_4658_float; // 0x323d Mov
	func_10363(var_4988_int, var_4989_float); // 0x323e NEW_2
	
Label_12864:
	var_4994_int = 45221; // 0x3240 PushI
	var_4995_bool = var_4657_int == var_4994_int; // 0x3241 Eq
	if(var_4995_bool == 0) goto Label_12879; // 0x3242 JumpB
	var_4996_bool = 0; var_4997_object = Obj(); // 0x3243 PushV
	var_4998_object = GlobalVars[16]; // 0x3244 PushGE
	var_4997_object = var_4998_object; // 0x3245 Mov
	func_12325(var_4997_object); // 0x3247 NEW_2
	var_5003_bool = var_4996_bool == 0; // 0x3249 Not
	if(var_5003_bool == 0) goto Label_12879; // 0x324a JumpB
	var_5004_int = 0; var_5005_float = 0; // 0x324b PushV
	var_5005_float = var_4658_float; // 0x324c Mov
	func_10021(var_5004_int, var_5005_float); // 0x324d NEW_2
	
Label_12879:
	var_5010_int = 45239; // 0x324f PushI
	var_5011_bool = var_4657_int == var_5010_int; // 0x3250 Eq
	if(var_5011_bool == 0) goto Label_12895; // 0x3251 JumpB
	var_5012_object = Obj(); var_5013_object = Obj(); // 0x3252 PushV
	var_5014_object = GlobalVars[16]; // 0x3253 PushGE
	var_5012_object = var_5014_object; // 0x3254 Mov
	var_5015_object = GlobalVars[16]; // 0x3256 PushGE
	var_5013_object = var_5015_object; // 0x3257 Mov
	func_10666(); // 0x3259 NEW_2
	var_5018_int = 0; var_5019_float = 0; // 0x325b PushV
	var_5019_float = var_4658_float; // 0x325c Mov
	func_10381(var_5018_int, var_5019_float); // 0x325d NEW_2
	
Label_12895:
	var_5024_int = 45220; // 0x325f PushI
	var_5025_bool = var_4657_int == var_5024_int; // 0x3260 Eq
	if(var_5025_bool == 0) goto Label_12910; // 0x3261 JumpB
	var_5026_bool = 0; var_5027_object = Obj(); // 0x3262 PushV
	var_5028_object = GlobalVars[16]; // 0x3263 PushGE
	var_5027_object = var_5028_object; // 0x3264 Mov
	func_12087(var_5027_object); // 0x3266 NEW_2
	var_5033_bool = var_5026_bool == 0; // 0x3268 Not
	if(var_5033_bool == 0) goto Label_12910; // 0x3269 JumpB
	var_5034_int = 0; var_5035_float = 0; // 0x326a PushV
	var_5035_float = var_4658_float; // 0x326b Mov
	func_10012(var_5034_int, var_5035_float); // 0x326c NEW_2
	
Label_12910:
	var_5040_int = 45228; // 0x326e PushI
	var_5041_bool = var_4657_int == var_5040_int; // 0x326f Eq
	if(var_5041_bool == 0) goto Label_12925; // 0x3270 JumpB
	var_5042_bool = 0; var_5043_object = Obj(); // 0x3271 PushV
	var_5044_object = GlobalVars[16]; // 0x3272 PushGE
	var_5043_object = var_5044_object; // 0x3273 Mov
	func_12159(var_5043_object); // 0x3275 NEW_2
	var_5049_bool = var_5042_bool == 0; // 0x3277 Not
	if(var_5049_bool == 0) goto Label_12925; // 0x3278 JumpB
	var_5050_int = 0; var_5051_float = 0; // 0x3279 PushV
	var_5051_float = var_4658_float; // 0x327a Mov
	func_9904(var_5050_int, var_5051_float); // 0x327b NEW_2
	
Label_12925:
	var_5056_int = 45219; // 0x327d PushI
	var_5057_bool = var_4657_int == var_5056_int; // 0x327e Eq
	if(var_5057_bool == 0) goto Label_12949; // 0x327f JumpB
	var_5058_bool = 0; var_5059_object = Obj(); // 0x3280 PushV
	var_5060_object = GlobalVars[16]; // 0x3281 PushGE
	var_5059_object = var_5060_object; // 0x3282 Mov
	func_12075(var_5059_object); // 0x3284 NEW_2
	var_5065_bool = var_5058_bool == 0; // 0x3286 Not
	if(var_5065_bool == 0) goto Label_12949; // 0x3287 JumpB
	var_5066_object = Obj(); var_5067_object = Obj(); // 0x3288 PushV
	var_5068_object = GlobalVars[16]; // 0x3289 PushGE
	var_5066_object = var_5068_object; // 0x328a Mov
	var_5069_object = GlobalVars[16]; // 0x328c PushGE
	var_5067_object = var_5069_object; // 0x328d Mov
	func_10586(); // 0x328f NEW_2
	var_5078_int = 0; var_5079_float = 0; // 0x3291 PushV
	var_5079_float = var_4658_float; // 0x3292 Mov
	func_9931(var_5078_int, var_5079_float); // 0x3293 NEW_2
	
Label_12949:
	var_5084_int = 45232; // 0x3295 PushI
	var_5085_bool = var_4657_int == var_5084_int; // 0x3296 Eq
	if(var_5085_bool == 0) goto Label_12964; // 0x3297 JumpB
	var_5086_bool = 0; var_5087_object = Obj(); // 0x3298 PushV
	var_5088_object = GlobalVars[16]; // 0x3299 PushGE
	var_5087_object = var_5088_object; // 0x329a Mov
	func_12171(var_5087_object); // 0x329c NEW_2
	var_5093_bool = var_5086_bool == 0; // 0x329e Not
	if(var_5093_bool == 0) goto Label_12964; // 0x329f JumpB
	var_5094_int = 0; var_5095_float = 0; // 0x32a0 PushV
	var_5095_float = var_4658_float; // 0x32a1 Mov
	func_9985(var_5094_int, var_5095_float); // 0x32a2 NEW_2
	
Label_12964:
	var_5100_int = 45267; // 0x32a4 PushI
	var_5101_bool = var_4657_int == var_5100_int; // 0x32a5 Eq
	if(var_5101_bool == 0) goto Label_12976; // 0x32a6 JumpB
	var_5102_object = Obj(); var_5103_object = Obj(); // 0x32a7 PushV
	var_5104_object = GlobalVars[16]; // 0x32a8 PushGE
	var_5102_object = var_5104_object; // 0x32a9 Mov
	var_5105_object = GlobalVars[16]; // 0x32ab PushGE
	var_5103_object = var_5105_object; // 0x32ac Mov
	func_10672(); // 0x32ae NEW_2
	
Label_12976:
	var_5114_int = 45223; // 0x32b0 PushI
	var_5115_bool = var_4657_int == var_5114_int; // 0x32b1 Eq
	if(var_5115_bool == 0) goto Label_12991; // 0x32b2 JumpB
	var_5116_bool = 0; var_5117_object = Obj(); // 0x32b3 PushV
	var_5118_object = GlobalVars[16]; // 0x32b4 PushGE
	var_5117_object = var_5118_object; // 0x32b5 Mov
	func_12099(var_5117_object); // 0x32b7 NEW_2
	var_5123_bool = var_5116_bool == 0; // 0x32b9 Not
	if(var_5123_bool == 0) goto Label_12991; // 0x32ba JumpB
	var_5124_int = 0; var_5125_float = 0; // 0x32bb PushV
	var_5125_float = var_4658_float; // 0x32bc Mov
	func_10219(var_5124_int, var_5125_float); // 0x32bd NEW_2
	
Label_12991:
	var_5130_int = 45225; // 0x32bf PushI
	var_5131_bool = var_4657_int == var_5130_int; // 0x32c0 Eq
	if(var_5131_bool == 0) goto Label_13015; // 0x32c1 JumpB
	var_5132_bool = 0; var_5133_object = Obj(); // 0x32c2 PushV
	var_5134_object = GlobalVars[16]; // 0x32c3 PushGE
	var_5133_object = var_5134_object; // 0x32c4 Mov
	func_12135(var_5133_object); // 0x32c6 NEW_2
	var_5139_bool = var_5132_bool == 0; // 0x32c8 Not
	if(var_5139_bool == 0) goto Label_13015; // 0x32c9 JumpB
	var_5140_object = Obj(); var_5141_object = Obj(); // 0x32ca PushV
	var_5142_object = GlobalVars[16]; // 0x32cb PushGE
	var_5140_object = var_5142_object; // 0x32cc Mov
	var_5143_object = GlobalVars[16]; // 0x32ce PushGE
	var_5141_object = var_5143_object; // 0x32cf Mov
	func_10634(); // 0x32d1 NEW_2
	var_5152_int = 0; var_5153_float = 0; // 0x32d3 PushV
	var_5153_float = var_4658_float; // 0x32d4 Mov
	func_10444(var_5152_int, var_5153_float); // 0x32d5 NEW_2
	
Label_13015:
	var_5158_int = 45214; // 0x32d7 PushI
	var_5159_bool = var_4657_int == var_5158_int; // 0x32d8 Eq
	if(var_5159_bool == 0) goto Label_13022; // 0x32d9 JumpB
	var_5160_int = 0; var_5161_float = 0; // 0x32da PushV
	var_5161_float = var_4658_float; // 0x32db Mov
	func_10372(var_5160_int, var_5161_float); // 0x32dc NEW_2
	
Label_13022:
	var_5166_int = 45215; // 0x32de PushI
	var_5167_bool = var_4657_int == var_5166_int; // 0x32df Eq
	if(var_5167_bool == 0) goto Label_13029; // 0x32e0 JumpB
	var_5168_int = 0; var_5169_float = 0; // 0x32e1 PushV
	var_5169_float = var_4658_float; // 0x32e2 Mov
	func_10417(var_5168_int, var_5169_float); // 0x32e3 NEW_2
	
Label_13029:
	var_5174_int = 45216; // 0x32e5 PushI
	var_5175_bool = var_4657_int == var_5174_int; // 0x32e6 Eq
	if(var_5175_bool == 0) goto Label_13036; // 0x32e7 JumpB
	var_5176_int = 0; var_5177_float = 0; // 0x32e8 PushV
	var_5177_float = var_4658_float; // 0x32e9 Mov
	func_9913(var_5176_int, var_5177_float); // 0x32ea NEW_2
	
Label_13036:
	var_5182_int = 45217; // 0x32ec PushI
	var_5183_bool = var_4657_int == var_5182_int; // 0x32ed Eq
	if(var_5183_bool == 0) goto Label_13043; // 0x32ee JumpB
	var_5184_int = 0; var_5185_float = 0; // 0x32ef PushV
	var_5185_float = var_4658_float; // 0x32f0 Mov
	func_9958(var_5184_int, var_5185_float); // 0x32f1 NEW_2
	
Label_13043:
	var_5190_int = 45174; // 0x32f3 PushI
	var_5191_bool = var_4657_int == var_5190_int; // 0x32f4 Eq
	if(var_5191_bool == 0) goto Label_13057; // 0x32f5 JumpB
	var_5192_bool = 0; var_5193_object = Obj(); // 0x32f6 PushV
	var_5194_object = GlobalVars[16]; // 0x32f7 PushGE
	var_5193_object = var_5194_object; // 0x32f8 Mov
	func_12219(var_5192_bool, var_5193_object); // 0x32fa NEW_2
	if(var_5192_bool == 0) goto Label_13057; // 0x32fc JumpB
	var_5197_int = 0; var_5198_float = 0; // 0x32fd PushV
	var_5198_float = var_4658_float; // 0x32fe Mov
	func_9832(var_5197_int, var_5198_float); // 0x32ff NEW_2
	
Label_13057:
	var_5203_int = 45178; // 0x3301 PushI
	var_5204_bool = var_4657_int == var_5203_int; // 0x3302 Eq
	if(var_5204_bool == 0) goto Label_13071; // 0x3303 JumpB
	var_5205_bool = 0; var_5206_object = Obj(); // 0x3304 PushV
	var_5207_object = GlobalVars[16]; // 0x3305 PushGE
	var_5206_object = var_5207_object; // 0x3306 Mov
	func_12219(var_5205_bool, var_5206_object); // 0x3308 NEW_2
	if(var_5205_bool == 0) goto Label_13071; // 0x330a JumpB
	var_5208_int = 0; var_5209_float = 0; // 0x330b PushV
	var_5209_float = var_4658_float; // 0x330c Mov
	func_9868(var_5208_int, var_5209_float); // 0x330d NEW_2
	
Label_13071:
	var_5214_int = 45179; // 0x330f PushI
	var_5215_bool = var_4657_int == var_5214_int; // 0x3310 Eq
	if(var_5215_bool == 0) goto Label_13085; // 0x3311 JumpB
	var_5216_bool = 0; var_5217_object = Obj(); // 0x3312 PushV
	var_5218_object = GlobalVars[16]; // 0x3313 PushGE
	var_5217_object = var_5218_object; // 0x3314 Mov
	func_12219(var_5216_bool, var_5217_object); // 0x3316 NEW_2
	if(var_5216_bool == 0) goto Label_13085; // 0x3318 JumpB
	var_5219_int = 0; var_5220_float = 0; // 0x3319 PushV
	var_5220_float = var_4658_float; // 0x331a Mov
	func_9877(var_5219_int, var_5220_float); // 0x331b NEW_2
	
Label_13085:
	var_5225_int = 45200; // 0x331d PushI
	var_5226_bool = var_4657_int == var_5225_int; // 0x331e Eq
	if(var_5226_bool == 0) goto Label_13100; // 0x331f JumpB
	var_5227_bool = 0; var_5228_object = Obj(); // 0x3320 PushV
	var_5229_object = GlobalVars[16]; // 0x3321 PushGE
	var_5228_object = var_5229_object; // 0x3322 Mov
	func_11979(var_5228_object); // 0x3324 NEW_2
	var_5234_bool = var_5227_bool == 0; // 0x3326 Not
	if(var_5234_bool == 0) goto Label_13100; // 0x3327 JumpB
	var_5235_int = 0; var_5236_float = 0; // 0x3328 PushV
	var_5236_float = var_4658_float; // 0x3329 Mov
	func_10102(var_5235_int, var_5236_float); // 0x332a NEW_2
	
Label_13100:
	var_5241_int = 45180; // 0x332c PushI
	var_5242_bool = var_4657_int == var_5241_int; // 0x332d Eq
	if(var_5242_bool == 0) goto Label_13114; // 0x332e JumpB
	var_5243_bool = 0; var_5244_object = Obj(); // 0x332f PushV
	var_5245_object = GlobalVars[16]; // 0x3330 PushGE
	var_5244_object = var_5245_object; // 0x3331 Mov
	func_12219(var_5243_bool, var_5244_object); // 0x3333 NEW_2
	if(var_5243_bool == 0) goto Label_13114; // 0x3335 JumpB
	var_5246_int = 0; var_5247_float = 0; // 0x3336 PushV
	var_5247_float = var_4658_float; // 0x3337 Mov
	func_9886(var_5246_int, var_5247_float); // 0x3338 NEW_2
	
Label_13114:
	var_5252_int = 45182; // 0x333a PushI
	var_5253_bool = var_4657_int == var_5252_int; // 0x333b Eq
	if(var_5253_bool == 0) goto Label_13128; // 0x333c JumpB
	var_5254_bool = 0; var_5255_object = Obj(); // 0x333d PushV
	var_5256_object = GlobalVars[16]; // 0x333e PushGE
	var_5255_object = var_5256_object; // 0x333f Mov
	func_12219(var_5254_bool, var_5255_object); // 0x3341 NEW_2
	if(var_5254_bool == 0) goto Label_13128; // 0x3343 JumpB
	var_5257_int = 0; var_5258_float = 0; // 0x3344 PushV
	var_5258_float = var_4658_float; // 0x3345 Mov
	func_9940(var_5257_int, var_5258_float); // 0x3346 NEW_2
	
Label_13128:
	var_5263_int = 45176; // 0x3348 PushI
	var_5264_bool = var_4657_int == var_5263_int; // 0x3349 Eq
	if(var_5264_bool == 0) goto Label_13142; // 0x334a JumpB
	var_5265_bool = 0; var_5266_object = Obj(); // 0x334b PushV
	var_5267_object = GlobalVars[16]; // 0x334c PushGE
	var_5266_object = var_5267_object; // 0x334d Mov
	func_12219(var_5265_bool, var_5266_object); // 0x334f NEW_2
	if(var_5265_bool == 0) goto Label_13142; // 0x3351 JumpB
	var_5268_int = 0; var_5269_float = 0; // 0x3352 PushV
	var_5269_float = var_4658_float; // 0x3353 Mov
	func_9850(var_5268_int, var_5269_float); // 0x3354 NEW_2
	
Label_13142:
	var_5274_int = 45063; // 0x3356 PushI
	var_5275_bool = var_4657_int == var_5274_int; // 0x3357 Eq
	if(var_5275_bool == 0) goto Label_13148; // 0x3358 JumpB
	var_5276_string = "aglaja.wmv"; // 0x3359 PushS
	QueuePlayMovie(var_5276_string); // 0x335a Func
	
Label_13148:
	var_5277_int = 45177; // 0x335c PushI
	var_5278_bool = var_4657_int == var_5277_int; // 0x335d Eq
	if(var_5278_bool == 0) goto Label_13162; // 0x335e JumpB
	var_5279_bool = 0; var_5280_object = Obj(); // 0x335f PushV
	var_5281_object = GlobalVars[16]; // 0x3360 PushGE
	var_5280_object = var_5281_object; // 0x3361 Mov
	func_12219(var_5279_bool, var_5280_object); // 0x3363 NEW_2
	if(var_5279_bool == 0) goto Label_13162; // 0x3365 JumpB
	var_5282_int = 0; var_5283_float = 0; // 0x3366 PushV
	var_5283_float = var_4658_float; // 0x3367 Mov
	func_9859(var_5282_int, var_5283_float); // 0x3368 NEW_2
	
Label_13162:
	var_5288_int = 45183; // 0x336a PushI
	var_5289_bool = var_4657_int == var_5288_int; // 0x336b Eq
	if(var_5289_bool == 0) goto Label_13176; // 0x336c JumpB
	var_5290_bool = 0; var_5291_object = Obj(); // 0x336d PushV
	var_5292_object = GlobalVars[16]; // 0x336e PushGE
	var_5291_object = var_5292_object; // 0x336f Mov
	func_12219(var_5290_bool, var_5291_object); // 0x3371 NEW_2
	if(var_5290_bool == 0) goto Label_13176; // 0x3373 JumpB
	var_5293_int = 0; var_5294_float = 0; // 0x3374 PushV
	var_5294_float = var_4658_float; // 0x3375 Mov
	func_9994(var_5293_int, var_5294_float); // 0x3376 NEW_2
	
Label_13176:
	var_5299_int = 45202; // 0x3378 PushI
	var_5300_bool = var_4657_int == var_5299_int; // 0x3379 Eq
	if(var_5300_bool == 0) goto Label_13191; // 0x337a JumpB
	var_5301_bool = 0; var_5302_object = Obj(); // 0x337b PushV
	var_5303_object = GlobalVars[16]; // 0x337c PushGE
	var_5302_object = var_5303_object; // 0x337d Mov
	func_12015(var_5302_object); // 0x337f NEW_2
	var_5308_bool = var_5301_bool == 0; // 0x3381 Not
	if(var_5308_bool == 0) goto Label_13191; // 0x3382 JumpB
	var_5309_int = 0; var_5310_float = 0; // 0x3383 PushV
	var_5310_float = var_4658_float; // 0x3384 Mov
	func_10183(var_5309_int, var_5310_float); // 0x3385 NEW_2
	
Label_13191:
	var_5315_int = 45205; // 0x3387 PushI
	var_5316_bool = var_4657_int == var_5315_int; // 0x3388 Eq
	if(var_5316_bool == 0) goto Label_13206; // 0x3389 JumpB
	var_5317_bool = 0; var_5318_object = Obj(); // 0x338a PushV
	var_5319_object = GlobalVars[16]; // 0x338b PushGE
	var_5318_object = var_5319_object; // 0x338c Mov
	func_12039(var_5318_object); // 0x338e NEW_2
	var_5324_bool = var_5317_bool == 0; // 0x3390 Not
	if(var_5324_bool == 0) goto Label_13206; // 0x3391 JumpB
	var_5325_int = 0; var_5326_float = 0; // 0x3392 PushV
	var_5326_float = var_4658_float; // 0x3393 Mov
	func_10390(var_5325_int, var_5326_float); // 0x3394 NEW_2
	
Label_13206:
	var_5331_int = 45209; // 0x3396 PushI
	var_5332_bool = var_4657_int == var_5331_int; // 0x3397 Eq
	if(var_5332_bool == 0) goto Label_13213; // 0x3398 JumpB
	var_5333_int = 0; var_5334_float = 0; // 0x3399 PushV
	var_5334_float = var_4658_float; // 0x339a Mov
	func_10138(var_5333_int, var_5334_float); // 0x339b NEW_2
	
Label_13213:
	var_5339_int = 45207; // 0x339d PushI
	var_5340_bool = var_4657_int == var_5339_int; // 0x339e Eq
	if(var_5340_bool == 0) goto Label_13220; // 0x339f JumpB
	var_5341_int = 0; var_5342_float = 0; // 0x33a0 PushV
	var_5342_float = var_4658_float; // 0x33a1 Mov
	func_10084(var_5341_int, var_5342_float); // 0x33a2 NEW_2
	
Label_13220:
	var_5347_int = 45208; // 0x33a4 PushI
	var_5348_bool = var_4657_int == var_5347_int; // 0x33a5 Eq
	if(var_5348_bool == 0) goto Label_13227; // 0x33a6 JumpB
	var_5349_int = 0; var_5350_float = 0; // 0x33a7 PushV
	var_5350_float = var_4658_float; // 0x33a8 Mov
	func_10093(var_5349_int, var_5350_float); // 0x33a9 NEW_2
	
Label_13227:
	var_5355_int = 45181; // 0x33ab PushI
	var_5356_bool = var_4657_int == var_5355_int; // 0x33ac Eq
	if(var_5356_bool == 0) goto Label_13241; // 0x33ad JumpB
	var_5357_bool = 0; var_5358_object = Obj(); // 0x33ae PushV
	var_5359_object = GlobalVars[16]; // 0x33af PushGE
	var_5358_object = var_5359_object; // 0x33b0 Mov
	func_12219(var_5357_bool, var_5358_object); // 0x33b2 NEW_2
	if(var_5357_bool == 0) goto Label_13241; // 0x33b4 JumpB
	var_5360_int = 0; var_5361_float = 0; // 0x33b5 PushV
	var_5361_float = var_4658_float; // 0x33b6 Mov
	func_9895(var_5360_int, var_5361_float); // 0x33b7 NEW_2
	
Label_13241:
	var_5366_int = 45210; // 0x33b9 PushI
	var_5367_bool = var_4657_int == var_5366_int; // 0x33ba Eq
	if(var_5367_bool == 0) goto Label_13248; // 0x33bb JumpB
	var_5368_int = 0; var_5369_float = 0; // 0x33bc PushV
	var_5369_float = var_4658_float; // 0x33bd Mov
	func_10192(var_5368_int, var_5369_float); // 0x33be NEW_2
	
Label_13248:
	var_5374_int = 45211; // 0x33c0 PushI
	var_5375_bool = var_4657_int == var_5374_int; // 0x33c1 Eq
	if(var_5375_bool == 0) goto Label_13255; // 0x33c2 JumpB
	var_5376_int = 0; var_5377_float = 0; // 0x33c3 PushV
	var_5377_float = var_4658_float; // 0x33c4 Mov
	func_10246(var_5376_int, var_5377_float); // 0x33c5 NEW_2
	
Label_13255:
	var_5382_int = 45064; // 0x33c7 PushI
	var_5383_bool = var_4657_int == var_5382_int; // 0x33c8 Eq
	if(var_5383_bool == 0) goto Label_13261; // 0x33c9 JumpB
	var_5384_string = "army.wmv"; // 0x33ca PushS
	QueuePlayMovie(var_5384_string); // 0x33cb Func
	
Label_13261:
	var_5385_int = 45212; // 0x33cd PushI
	var_5386_bool = var_4657_int == var_5385_int; // 0x33ce Eq
	if(var_5386_bool == 0) goto Label_13268; // 0x33cf JumpB
	var_5387_int = 0; var_5388_float = 0; // 0x33d0 PushV
	var_5388_float = var_4658_float; // 0x33d1 Mov
	func_10273(var_5387_int, var_5388_float); // 0x33d2 NEW_2
	
Label_13268:
	var_5393_int = 45213; // 0x33d4 PushI
	var_5394_bool = var_4657_int == var_5393_int; // 0x33d5 Eq
	if(var_5394_bool == 0) goto Label_13275; // 0x33d6 JumpB
	var_5395_int = 0; var_5396_float = 0; // 0x33d7 PushV
	var_5396_float = var_4658_float; // 0x33d8 Mov
	func_10336(var_5395_int, var_5396_float); // 0x33d9 NEW_2
	
Label_13275:
	var_5401_int = 45203; // 0x33db PushI
	var_5402_bool = var_4657_int == var_5401_int; // 0x33dc Eq
	if(var_5402_bool == 0) goto Label_13290; // 0x33dd JumpB
	var_5403_bool = 0; var_5404_object = Obj(); // 0x33de PushV
	var_5405_object = GlobalVars[16]; // 0x33df PushGE
	var_5404_object = var_5405_object; // 0x33e0 Mov
	func_12027(var_5404_object); // 0x33e2 NEW_2
	var_5410_bool = var_5403_bool == 0; // 0x33e4 Not
	if(var_5410_bool == 0) goto Label_13290; // 0x33e5 JumpB
	var_5411_int = 0; var_5412_float = 0; // 0x33e6 PushV
	var_5412_float = var_4658_float; // 0x33e7 Mov
	func_10237(var_5411_int, var_5412_float); // 0x33e8 NEW_2
	
Label_13290:
	var_5417_int = 45175; // 0x33ea PushI
	var_5418_bool = var_4657_int == var_5417_int; // 0x33eb Eq
	if(var_5418_bool == 0) goto Label_13304; // 0x33ec JumpB
	var_5419_bool = 0; var_5420_object = Obj(); // 0x33ed PushV
	var_5421_object = GlobalVars[16]; // 0x33ee PushGE
	var_5420_object = var_5421_object; // 0x33ef Mov
	func_12219(var_5419_bool, var_5420_object); // 0x33f1 NEW_2
	if(var_5419_bool == 0) goto Label_13304; // 0x33f3 JumpB
	var_5422_int = 0; var_5423_float = 0; // 0x33f4 PushV
	var_5423_float = var_4658_float; // 0x33f5 Mov
	func_9841(var_5422_int, var_5423_float); // 0x33f6 NEW_2
	
Label_13304:
	var_5428_int = 45054; // 0x33f8 PushI
	var_5429_bool = var_4657_int == var_5428_int; // 0x33f9 Eq
	if(var_5429_bool == 0) goto Label_13311; // 0x33fa JumpB
	var_5430_int = 0; var_5431_float = 0; // 0x33fb PushV
	var_5431_float = var_4658_float; // 0x33fc Mov
	func_10003(var_5430_int, var_5431_float); // 0x33fd NEW_2
	
Label_13311:
	var_5436_int = 45199; // 0x33ff PushI
	var_5437_bool = var_4657_int == var_5436_int; // 0x3400 Eq
	if(var_5437_bool == 0) goto Label_13326; // 0x3401 JumpB
	var_5438_bool = 0; var_5439_object = Obj(); // 0x3402 PushV
	var_5440_object = GlobalVars[16]; // 0x3403 PushGE
	var_5439_object = var_5440_object; // 0x3404 Mov
	func_11991(var_5439_object); // 0x3406 NEW_2
	var_5445_bool = var_5438_bool == 0; // 0x3408 Not
	if(var_5445_bool == 0) goto Label_13326; // 0x3409 JumpB
	var_5446_int = 0; var_5447_float = 0; // 0x340a PushV
	var_5447_float = var_4658_float; // 0x340b Mov
	func_10111(var_5446_int, var_5447_float); // 0x340c NEW_2
	
Label_13326:
	var_5452_int = 45201; // 0x340e PushI
	var_5453_bool = var_4657_int == var_5452_int; // 0x340f Eq
	if(var_5453_bool == 0) goto Label_13341; // 0x3410 JumpB
	var_5454_bool = 0; var_5455_object = Obj(); // 0x3411 PushV
	var_5456_object = GlobalVars[16]; // 0x3412 PushGE
	var_5455_object = var_5456_object; // 0x3413 Mov
	func_12003(var_5455_object); // 0x3415 NEW_2
	var_5461_bool = var_5454_bool == 0; // 0x3417 Not
	if(var_5461_bool == 0) goto Label_13341; // 0x3418 JumpB
	var_5462_int = 0; var_5463_float = 0; // 0x3419 PushV
	var_5463_float = var_4658_float; // 0x341a Mov
	func_10210(var_5462_int, var_5463_float); // 0x341b NEW_2
	
Label_13341:
	var_5468_int = 45184; // 0x341d PushI
	var_5469_bool = var_4657_int == var_5468_int; // 0x341e Eq
	if(var_5469_bool == 0) goto Label_13355; // 0x341f JumpB
	var_5470_bool = 0; var_5471_object = Obj(); // 0x3420 PushV
	var_5472_object = GlobalVars[16]; // 0x3421 PushGE
	var_5471_object = var_5472_object; // 0x3422 Mov
	func_12219(var_5470_bool, var_5471_object); // 0x3424 NEW_2
	if(var_5470_bool == 0) goto Label_13355; // 0x3426 JumpB
	var_5473_int = 0; var_5474_float = 0; // 0x3427 PushV
	var_5474_float = var_4658_float; // 0x3428 Mov
	func_10030(var_5473_int, var_5474_float); // 0x3429 NEW_2
	
Label_13355:
	var_5479_int = 45206; // 0x342b PushI
	var_5480_bool = var_4657_int == var_5479_int; // 0x342c Eq
	if(var_5480_bool == 0) goto Label_13362; // 0x342d JumpB
	var_5481_int = 0; var_5482_float = 0; // 0x342e PushV
	var_5482_float = var_4658_float; // 0x342f Mov
	func_10435(var_5481_int, var_5482_float); // 0x3430 NEW_2
	
Label_13362:
	var_5487_int = 45050; // 0x3432 PushI
	var_5488_bool = var_4657_int == var_5487_int; // 0x3433 Eq
	if(var_5488_bool == 0) goto Label_13369; // 0x3434 JumpB
	var_5489_int = 0; var_5490_float = 0; // 0x3435 PushV
	var_5490_float = var_4658_float; // 0x3436 Mov
	func_10345(var_5489_int, var_5490_float); // 0x3437 NEW_2
	
Label_13369:
	var_5495_int = 45051; // 0x3439 PushI
	var_5496_bool = var_4657_int == var_5495_int; // 0x343a Eq
	if(var_5496_bool == 0) goto Label_13384; // 0x343b JumpB
	var_5497_bool = 0; var_5498_object = Obj(); // 0x343c PushV
	var_5499_object = GlobalVars[16]; // 0x343d PushGE
	var_5498_object = var_5499_object; // 0x343e Mov
	func_12409(var_5498_object); // 0x3440 NEW_2
	var_5504_bool = var_5497_bool == 0; // 0x3442 Not
	if(var_5504_bool == 0) goto Label_13384; // 0x3443 JumpB
	var_5505_int = 0; var_5506_float = 0; // 0x3444 PushV
	var_5506_float = var_4658_float; // 0x3445 Mov
	func_9949(var_5505_int, var_5506_float); // 0x3446 NEW_2
	
Label_13384:
	var_5511_int = 45042; // 0x3448 PushI
	var_5512_bool = var_4657_int == var_5511_int; // 0x3449 Eq
	if(var_5512_bool == 0) goto Label_13405; // 0x344a JumpB
	var_5513_object = Obj(); var_5514_object = Obj(); // 0x344b PushV
	var_5515_object = GlobalVars[16]; // 0x344c PushGE
	var_5513_object = var_5515_object; // 0x344d Mov
	var_5516_object = GlobalVars[16]; // 0x344f PushGE
	var_5514_object = var_5516_object; // 0x3450 Mov
	func_11905(); // 0x3452 NEW_2
	var_5544_bool = 0; var_5545_string = ""; var_5546_string = ""; // 0x3454 PushV
	var_5545_string = "quest_d11_01"; // 0x3455 MovS
	var_5546_string = "cleanup"; // 0x3456 MovS
	func_245(var_5544_bool, var_5545_string, var_5546_string); // 0x3457 NEW_2
	var_5547_object = Obj(); var_5548_string = ""; // 0x3459 PushV
	var_5548_string = "quest_d12_01"; // 0x345a MovS
	func_143(var_5547_object, var_5548_string); // 0x345b NEW_2
	
Label_13405:
	var_5555_int = 45040; // 0x345d PushI
	var_5556_bool = var_4657_int == var_5555_int; // 0x345e Eq
	if(var_5556_bool == 0) goto Label_13420; // 0x345f JumpB
	var_5557_bool = 0; var_5558_object = Obj(); // 0x3460 PushV
	var_5559_object = GlobalVars[16]; // 0x3461 PushGE
	var_5558_object = var_5559_object; // 0x3462 Mov
	func_12301(var_5558_object); // 0x3464 NEW_2
	var_5564_bool = var_5557_bool == 0; // 0x3466 Not
	if(var_5564_bool == 0) goto Label_13420; // 0x3467 JumpB
	var_5565_int = 0; var_5566_float = 0; // 0x3468 PushV
	var_5566_float = var_4658_float; // 0x3469 Mov
	func_10165(var_5565_int, var_5566_float); // 0x346a NEW_2
	
Label_13420:
	var_5571_int = 45039; // 0x346c PushI
	var_5572_bool = var_4657_int == var_5571_int; // 0x346d Eq
	if(var_5572_bool == 0) goto Label_13444; // 0x346e JumpB
	var_5573_bool = 0; var_5574_object = Obj(); // 0x346f PushV
	var_5575_object = GlobalVars[16]; // 0x3470 PushGE
	var_5574_object = var_5575_object; // 0x3471 Mov
	func_12289(var_5574_object); // 0x3473 NEW_2
	var_5580_bool = var_5573_bool == 0; // 0x3475 Not
	if(var_5580_bool == 0) goto Label_13444; // 0x3476 JumpB
	var_5581_object = Obj(); var_5582_object = Obj(); // 0x3477 PushV
	var_5583_object = GlobalVars[16]; // 0x3478 PushGE
	var_5581_object = var_5583_object; // 0x3479 Mov
	var_5584_object = GlobalVars[16]; // 0x347b PushGE
	var_5582_object = var_5584_object; // 0x347c Mov
	func_10476(); // 0x347e NEW_2
	var_5595_int = 0; var_5596_float = 0; // 0x3480 PushV
	var_5596_float = var_4658_float; // 0x3481 Mov
	func_10174(var_5595_int, var_5596_float); // 0x3482 NEW_2
	
Label_13444:
	var_5601_int = 45038; // 0x3484 PushI
	var_5602_bool = var_4657_int == var_5601_int; // 0x3485 Eq
	if(var_5602_bool == 0) goto Label_13459; // 0x3486 JumpB
	var_5603_bool = 0; var_5604_object = Obj(); // 0x3487 PushV
	var_5605_object = GlobalVars[16]; // 0x3488 PushGE
	var_5604_object = var_5605_object; // 0x3489 Mov
	func_12277(var_5604_object); // 0x348b NEW_2
	var_5610_bool = var_5603_bool == 0; // 0x348d Not
	if(var_5610_bool == 0) goto Label_13459; // 0x348e JumpB
	var_5611_int = 0; var_5612_float = 0; // 0x348f PushV
	var_5612_float = var_4658_float; // 0x3490 Mov
	func_10129(var_5611_int, var_5612_float); // 0x3491 NEW_2
	
Label_13459:
	var_5617_int = 45041; // 0x3493 PushI
	var_5618_bool = var_4657_int == var_5617_int; // 0x3494 Eq
	if(var_5618_bool == 0) goto Label_13474; // 0x3495 JumpB
	var_5619_bool = 0; var_5620_object = Obj(); // 0x3496 PushV
	var_5621_object = GlobalVars[16]; // 0x3497 PushGE
	var_5620_object = var_5621_object; // 0x3498 Mov
	func_12313(var_5620_object); // 0x349a NEW_2
	var_5626_bool = var_5619_bool == 0; // 0x349c Not
	if(var_5626_bool == 0) goto Label_13474; // 0x349d JumpB
	var_5627_int = 0; var_5628_float = 0; // 0x349e PushV
	var_5628_float = var_4658_float; // 0x349f Mov
	func_10228(var_5627_int, var_5628_float); // 0x34a0 NEW_2
	
Label_13474:
	var_5633_int = 45045; // 0x34a2 PushI
	var_5634_bool = var_4657_int == var_5633_int; // 0x34a3 Eq
	if(var_5634_bool == 0) goto Label_13489; // 0x34a4 JumpB
	var_5635_bool = 0; var_5636_object = Obj(); // 0x34a5 PushV
	var_5637_object = GlobalVars[16]; // 0x34a6 PushGE
	var_5636_object = var_5637_object; // 0x34a7 Mov
	func_12349(var_5636_object); // 0x34a9 NEW_2
	var_5642_bool = var_5635_bool == 0; // 0x34ab Not
	if(var_5642_bool == 0) goto Label_13489; // 0x34ac JumpB
	var_5643_int = 0; var_5644_float = 0; // 0x34ad PushV
	var_5644_float = var_4658_float; // 0x34ae Mov
	func_10291(var_5643_int, var_5644_float); // 0x34af NEW_2
	
Label_13489:
	var_5649_int = 45047; // 0x34b1 PushI
	var_5650_bool = var_4657_int == var_5649_int; // 0x34b2 Eq
	if(var_5650_bool == 0) goto Label_13504; // 0x34b3 JumpB
	var_5651_bool = 0; var_5652_object = Obj(); // 0x34b4 PushV
	var_5653_object = GlobalVars[16]; // 0x34b5 PushGE
	var_5652_object = var_5653_object; // 0x34b6 Mov
	func_12385(var_5652_object); // 0x34b8 NEW_2
	var_5658_bool = var_5651_bool == 0; // 0x34ba Not
	if(var_5658_bool == 0) goto Label_13504; // 0x34bb JumpB
	var_5659_int = 0; var_5660_float = 0; // 0x34bc PushV
	var_5660_float = var_4658_float; // 0x34bd Mov
	func_10318(var_5659_int, var_5660_float); // 0x34be NEW_2
	
Label_13504:
	var_5665_int = 45036; // 0x34c0 PushI
	var_5666_bool = var_4657_int == var_5665_int; // 0x34c1 Eq
	if(var_5666_bool == 0) goto Label_13528; // 0x34c2 JumpB
	var_5667_bool = 0; var_5668_object = Obj(); // 0x34c3 PushV
	var_5669_object = GlobalVars[16]; // 0x34c4 PushGE
	var_5668_object = var_5669_object; // 0x34c5 Mov
	func_12253(var_5668_object); // 0x34c7 NEW_2
	var_5674_bool = var_5667_bool == 0; // 0x34c9 Not
	if(var_5674_bool == 0) goto Label_13528; // 0x34ca JumpB
	var_5675_object = Obj(); var_5676_object = Obj(); // 0x34cb PushV
	var_5677_object = GlobalVars[16]; // 0x34cc PushGE
	var_5675_object = var_5677_object; // 0x34cd Mov
	var_5678_object = GlobalVars[16]; // 0x34cf PushGE
	var_5676_object = var_5678_object; // 0x34d0 Mov
	func_10806(); // 0x34d2 NEW_2
	var_5681_int = 0; var_5682_float = 0; // 0x34d4 PushV
	var_5682_float = var_4658_float; // 0x34d5 Mov
	func_9967(var_5681_int, var_5682_float); // 0x34d6 NEW_2
	
Label_13528:
	var_5687_int = 45043; // 0x34d8 PushI
	var_5688_bool = var_4657_int == var_5687_int; // 0x34d9 Eq
	if(var_5688_bool == 0) goto Label_13543; // 0x34da JumpB
	var_5689_bool = 0; var_5690_object = Obj(); // 0x34db PushV
	var_5691_object = GlobalVars[16]; // 0x34dc PushGE
	var_5690_object = var_5691_object; // 0x34dd Mov
	func_12337(var_5690_object); // 0x34df NEW_2
	var_5696_bool = var_5689_bool == 0; // 0x34e1 Not
	if(var_5696_bool == 0) goto Label_13543; // 0x34e2 JumpB
	var_5697_int = 0; var_5698_float = 0; // 0x34e3 PushV
	var_5698_float = var_4658_float; // 0x34e4 Mov
	func_10255(var_5697_int, var_5698_float); // 0x34e5 NEW_2
	
Label_13543:
	var_5703_int = 45046; // 0x34e7 PushI
	var_5704_bool = var_4657_int == var_5703_int; // 0x34e8 Eq
	if(var_5704_bool == 0) goto Label_13558; // 0x34e9 JumpB
	var_5705_bool = 0; var_5706_object = Obj(); // 0x34ea PushV
	var_5707_object = GlobalVars[16]; // 0x34eb PushGE
	var_5706_object = var_5707_object; // 0x34ec Mov
	func_12373(var_5706_object); // 0x34ee NEW_2
	var_5712_bool = var_5705_bool == 0; // 0x34f0 Not
	if(var_5712_bool == 0) goto Label_13558; // 0x34f1 JumpB
	var_5713_int = 0; var_5714_float = 0; // 0x34f2 PushV
	var_5714_float = var_4658_float; // 0x34f3 Mov
	func_10282(var_5713_int, var_5714_float); // 0x34f4 NEW_2
	
Label_13558:
	var_5719_int = 45044; // 0x34f6 PushI
	var_5720_bool = var_4657_int == var_5719_int; // 0x34f7 Eq
	if(var_5720_bool == 0) goto Label_13573; // 0x34f8 JumpB
	var_5721_bool = 0; var_5722_object = Obj(); // 0x34f9 PushV
	var_5723_object = GlobalVars[16]; // 0x34fa PushGE
	var_5722_object = var_5723_object; // 0x34fb Mov
	func_12361(var_5722_object); // 0x34fd NEW_2
	var_5728_bool = var_5721_bool == 0; // 0x34ff Not
	if(var_5728_bool == 0) goto Label_13573; // 0x3500 JumpB
	var_5729_int = 0; var_5730_float = 0; // 0x3501 PushV
	var_5730_float = var_4658_float; // 0x3502 Mov
	func_10300(var_5729_int, var_5730_float); // 0x3503 NEW_2
	
Label_13573:
	var_5735_int = 45048; // 0x3505 PushI
	var_5736_bool = var_4657_int == var_5735_int; // 0x3506 Eq
	if(var_5736_bool == 0) goto Label_13580; // 0x3507 JumpB
	var_5737_int = 0; var_5738_float = 0; // 0x3508 PushV
	var_5738_float = var_4658_float; // 0x3509 Mov
	func_10354(var_5737_int, var_5738_float); // 0x350a NEW_2
	
Label_13580:
	var_5743_int = 45049; // 0x350c PushI
	var_5744_bool = var_4657_int == var_5743_int; // 0x350d Eq
	if(var_5744_bool == 0) goto Label_13595; // 0x350e JumpB
	var_5745_bool = 0; var_5746_object = Obj(); // 0x350f PushV
	var_5747_object = GlobalVars[16]; // 0x3510 PushGE
	var_5746_object = var_5747_object; // 0x3511 Mov
	func_12397(var_5746_object); // 0x3513 NEW_2
	var_5752_bool = var_5745_bool == 0; // 0x3515 Not
	if(var_5752_bool == 0) goto Label_13595; // 0x3516 JumpB
	var_5753_int = 0; var_5754_float = 0; // 0x3517 PushV
	var_5754_float = var_4658_float; // 0x3518 Mov
	func_10327(var_5753_int, var_5754_float); // 0x3519 NEW_2
	
Label_13595:
	var_5759_int = 45018; // 0x351b PushI
	var_5760_bool = var_4657_int == var_5759_int; // 0x351c Eq
	if(var_5760_bool == 0) goto Label_13616; // 0x351d JumpB
	var_5761_object = Obj(); var_5762_object = Obj(); // 0x351e PushV
	var_5763_object = GlobalVars[16]; // 0x351f PushGE
	var_5761_object = var_5763_object; // 0x3520 Mov
	var_5764_object = GlobalVars[16]; // 0x3522 PushGE
	var_5762_object = var_5764_object; // 0x3523 Mov
	func_11780(); // 0x3525 NEW_2
	var_5790_bool = 0; var_5791_string = ""; var_5792_string = ""; // 0x3527 PushV
	var_5791_string = "quest_d9_01"; // 0x3528 MovS
	var_5792_string = "cleanup"; // 0x3529 MovS
	func_245(var_5790_bool, var_5791_string, var_5792_string); // 0x352a NEW_2
	var_5793_object = Obj(); var_5794_string = ""; // 0x352c PushV
	var_5794_string = "quest_d10_01"; // 0x352d MovS
	func_143(var_5793_object, var_5794_string); // 0x352e NEW_2
	
Label_13616:
	var_5795_int = 45005; // 0x3530 PushI
	var_5796_bool = var_4657_int == var_5795_int; // 0x3531 Eq
	if(var_5796_bool == 0) goto Label_13637; // 0x3532 JumpB
	var_5797_object = Obj(); var_5798_object = Obj(); // 0x3533 PushV
	var_5799_object = GlobalVars[16]; // 0x3534 PushGE
	var_5797_object = var_5799_object; // 0x3535 Mov
	var_5800_object = GlobalVars[16]; // 0x3537 PushGE
	var_5798_object = var_5800_object; // 0x3538 Mov
	func_10980(); // 0x353a NEW_2
	var_5848_bool = 0; var_5849_string = ""; var_5850_string = ""; // 0x353c PushV
	var_5849_string = "quest_d2_01"; // 0x353d MovS
	var_5850_string = "cleanup"; // 0x353e MovS
	func_245(var_5848_bool, var_5849_string, var_5850_string); // 0x353f NEW_2
	var_5851_object = Obj(); var_5852_string = ""; // 0x3541 PushV
	var_5852_string = "quest_d3_01"; // 0x3542 MovS
	func_143(var_5851_object, var_5852_string); // 0x3543 NEW_2
	
Label_13637:
	var_5853_int = 45007; // 0x3545 PushI
	var_5854_bool = var_4657_int == var_5853_int; // 0x3546 Eq
	if(var_5854_bool == 0) goto Label_13649; // 0x3547 JumpB
	var_5855_object = Obj(); var_5856_object = Obj(); // 0x3548 PushV
	var_5857_object = GlobalVars[16]; // 0x3549 PushGE
	var_5855_object = var_5857_object; // 0x354a Mov
	var_5858_object = GlobalVars[16]; // 0x354c PushGE
	var_5856_object = var_5858_object; // 0x354d Mov
	func_10764(); // 0x354f NEW_2
	
Label_13649:
	var_5861_int = 45009; // 0x3551 PushI
	var_5862_bool = var_4657_int == var_5861_int; // 0x3552 Eq
	if(var_5862_bool == 0) goto Label_13656; // 0x3553 JumpB
	var_5863_int = 0; var_5864_float = 0; // 0x3554 PushV
	var_5864_float = var_4658_float; // 0x3555 Mov
	func_10048(var_5863_int, var_5864_float); // 0x3556 NEW_2
	
Label_13656:
	var_5869_int = 45016; // 0x3558 PushI
	var_5870_bool = var_4657_int == var_5869_int; // 0x3559 Eq
	if(var_5870_bool == 0) goto Label_13686; // 0x355a JumpB
	var_5871_object = Obj(); var_5872_object = Obj(); // 0x355b PushV
	var_5873_object = GlobalVars[16]; // 0x355c PushGE
	var_5871_object = var_5873_object; // 0x355d Mov
	var_5874_object = GlobalVars[16]; // 0x355f PushGE
	var_5872_object = var_5874_object; // 0x3560 Mov
	func_11679(); // 0x3562 NEW_2
	var_5908_object = Obj(); var_5909_object = Obj(); // 0x3564 PushV
	var_5910_object = GlobalVars[16]; // 0x3565 PushGE
	var_5908_object = var_5910_object; // 0x3566 Mov
	var_5911_object = GlobalVars[16]; // 0x3568 PushGE
	var_5909_object = var_5911_object; // 0x3569 Mov
	func_10790(); // 0x356b NEW_2
	var_5914_bool = 0; var_5915_string = ""; var_5916_string = ""; // 0x356d PushV
	var_5915_string = "quest_d7_01"; // 0x356e MovS
	var_5916_string = "cleanup"; // 0x356f MovS
	func_245(var_5914_bool, var_5915_string, var_5916_string); // 0x3570 NEW_2
	var_5917_object = Obj(); var_5918_string = ""; // 0x3572 PushV
	var_5918_string = "quest_d8_01"; // 0x3573 MovS
	func_143(var_5917_object, var_5918_string); // 0x3574 NEW_2
	
Label_13686:
	var_5919_int = 45017; // 0x3576 PushI
	var_5920_bool = var_4657_int == var_5919_int; // 0x3577 Eq
	if(var_5920_bool == 0) goto Label_13707; // 0x3578 JumpB
	var_5921_object = Obj(); var_5922_object = Obj(); // 0x3579 PushV
	var_5923_object = GlobalVars[16]; // 0x357a PushGE
	var_5921_object = var_5923_object; // 0x357b Mov
	var_5924_object = GlobalVars[16]; // 0x357d PushGE
	var_5922_object = var_5924_object; // 0x357e Mov
	func_10499(); // 0x3580 NEW_2
	var_5952_bool = 0; var_5953_string = ""; var_5954_string = ""; // 0x3582 PushV
	var_5953_string = "quest_d8_01"; // 0x3583 MovS
	var_5954_string = "cleanup"; // 0x3584 MovS
	func_245(var_5952_bool, var_5953_string, var_5954_string); // 0x3585 NEW_2
	var_5955_object = Obj(); var_5956_string = ""; // 0x3587 PushV
	var_5956_string = "quest_d9_01"; // 0x3588 MovS
	func_143(var_5955_object, var_5956_string); // 0x3589 NEW_2
	
Label_13707:
	var_5957_int = 45015; // 0x358b PushI
	var_5958_bool = var_4657_int == var_5957_int; // 0x358c Eq
	if(var_5958_bool == 0) goto Label_13721; // 0x358d JumpB
	var_5959_bool = 0; var_5960_object = Obj(); // 0x358e PushV
	var_5961_object = GlobalVars[16]; // 0x358f PushGE
	var_5960_object = var_5961_object; // 0x3590 Mov
	func_12241(var_5960_object); // 0x3592 NEW_2
	if(var_5959_bool == 0) goto Label_13721; // 0x3594 JumpB
	var_5966_int = 0; var_5967_float = 0; // 0x3595 PushV
	var_5967_float = var_4658_float; // 0x3596 Mov
	func_10309(var_5966_int, var_5967_float); // 0x3597 NEW_2
	
Label_13721:
	var_5972_int = 45031; // 0x3599 PushI
	var_5973_bool = var_4657_int == var_5972_int; // 0x359a Eq
	if(var_5973_bool == 0) goto Label_13742; // 0x359b JumpB
	var_5974_object = Obj(); var_5975_object = Obj(); // 0x359c PushV
	var_5976_object = GlobalVars[16]; // 0x359d PushGE
	var_5974_object = var_5976_object; // 0x359e Mov
	var_5977_object = GlobalVars[16]; // 0x35a0 PushGE
	var_5975_object = var_5977_object; // 0x35a1 Mov
	func_11843(); // 0x35a3 NEW_2
	var_6001_bool = 0; var_6002_string = ""; var_6003_string = ""; // 0x35a5 PushV
	var_6002_string = "quest_d10_01"; // 0x35a6 MovS
	var_6003_string = "cleanup"; // 0x35a7 MovS
	func_245(var_6001_bool, var_6002_string, var_6003_string); // 0x35a8 NEW_2
	var_6004_object = Obj(); var_6005_string = ""; // 0x35aa PushV
	var_6005_string = "quest_d11_01"; // 0x35ab MovS
	func_143(var_6004_object, var_6005_string); // 0x35ac NEW_2
	
Label_13742:
	var_6006_int = 45011; // 0x35ae PushI
	var_6007_bool = var_4657_int == var_6006_int; // 0x35af Eq
	if(var_6007_bool == 0) goto Label_13763; // 0x35b0 JumpB
	var_6008_object = Obj(); var_6009_object = Obj(); // 0x35b1 PushV
	var_6010_object = GlobalVars[16]; // 0x35b2 PushGE
	var_6008_object = var_6010_object; // 0x35b3 Mov
	var_6011_object = GlobalVars[16]; // 0x35b5 PushGE
	var_6009_object = var_6011_object; // 0x35b6 Mov
	func_11230(); // 0x35b8 NEW_2
	var_6065_bool = 0; var_6066_string = ""; var_6067_string = ""; // 0x35ba PushV
	var_6066_string = "quest_d4_01"; // 0x35bb MovS
	var_6067_string = "cleanup"; // 0x35bc MovS
	func_245(var_6065_bool, var_6066_string, var_6067_string); // 0x35bd NEW_2
	var_6068_object = Obj(); var_6069_string = ""; // 0x35bf PushV
	var_6069_string = "quest_d5_01"; // 0x35c0 MovS
	func_154(var_6068_object, var_6069_string); // 0x35c1 NEW_2
	
Label_13763:
	var_6076_int = 45032; // 0x35c3 PushI
	var_6077_bool = var_4657_int == var_6076_int; // 0x35c4 Eq
	if(var_6077_bool == 0) goto Label_13770; // 0x35c5 JumpB
	var_6078_object = Obj(); var_6079_string = ""; // 0x35c6 PushV
	var_6079_string = "quest_d11_02"; // 0x35c7 MovS
	func_143(var_6078_object, var_6079_string); // 0x35c8 NEW_2
	
Label_13770:
	var_6080_int = 45008; // 0x35ca PushI
	var_6081_bool = var_4657_int == var_6080_int; // 0x35cb Eq
	if(var_6081_bool == 0) goto Label_13784; // 0x35cc JumpB
	var_6082_bool = 0; var_6083_object = Obj(); // 0x35cd PushV
	var_6084_object = GlobalVars[16]; // 0x35ce PushGE
	var_6083_object = var_6084_object; // 0x35cf Mov
	func_11955(var_6083_object); // 0x35d1 NEW_2
	if(var_6082_bool == 0) goto Label_13784; // 0x35d3 JumpB
	var_6089_int = 0; var_6090_float = 0; // 0x35d4 PushV
	var_6090_float = var_4658_float; // 0x35d5 Mov
	func_10057(var_6089_int, var_6090_float); // 0x35d6 NEW_2
	
Label_13784:
	var_6095_int = 45003; // 0x35d8 PushI
	var_6096_bool = var_4657_int == var_6095_int; // 0x35d9 Eq
	if(var_6096_bool == 0) goto Label_13819; // 0x35da JumpB
	var_6097_object = Obj(); var_6098_object = Obj(); // 0x35db PushV
	var_6099_object = GlobalVars[16]; // 0x35dc PushGE
	var_6097_object = var_6099_object; // 0x35dd Mov
	var_6100_object = GlobalVars[16]; // 0x35df PushGE
	var_6098_object = var_6100_object; // 0x35e0 Mov
	func_10820(); // 0x35e2 NEW_2
	var_6153_int = 0; var_6154_float = 0; // 0x35e4 PushV
	var_6154_float = var_4658_float; // 0x35e5 Mov
	func_10039(var_6153_int, var_6154_float); // 0x35e6 NEW_2
	var_6159_object = Obj(); var_6160_string = ""; // 0x35e8 PushV
	var_6160_string = "quest_d2_01"; // 0x35e9 MovS
	func_143(var_6159_object, var_6160_string); // 0x35ea NEW_2
	var_6161_bool = 0; var_6162_string = ""; var_6163_string = ""; // 0x35ec PushV
	var_6162_string = "quest_d1_01"; // 0x35ed MovS
	var_6163_string = "cleanup"; // 0x35ee MovS
	func_245(var_6161_bool, var_6162_string, var_6163_string); // 0x35ef NEW_2
	var_6164_bool = 0; var_6165_string = ""; var_6166_string = ""; // 0x35f1 PushV
	var_6165_string = "tutorial_mask1"; // 0x35f2 MovS
	var_6166_string = "cleanup"; // 0x35f3 MovS
	func_245(var_6164_bool, var_6165_string, var_6166_string); // 0x35f4 NEW_2
	var_6167_bool = 0; var_6168_string = ""; var_6169_string = ""; // 0x35f6 PushV
	var_6168_string = "tutorial_mask2"; // 0x35f7 MovS
	var_6169_string = "cleanup"; // 0x35f8 MovS
	func_245(var_6167_bool, var_6168_string, var_6169_string); // 0x35f9 NEW_2
	
Label_13819:
	var_6170_int = 45006; // 0x35fb PushI
	var_6171_bool = var_4657_int == var_6170_int; // 0x35fc Eq
	if(var_6171_bool == 0) goto Label_13840; // 0x35fd JumpB
	var_6172_object = Obj(); var_6173_object = Obj(); // 0x35fe PushV
	var_6174_object = GlobalVars[16]; // 0x35ff PushGE
	var_6172_object = var_6174_object; // 0x3600 Mov
	var_6175_object = GlobalVars[16]; // 0x3602 PushGE
	var_6173_object = var_6175_object; // 0x3603 Mov
	func_11126(); // 0x3605 NEW_2
	var_6211_bool = 0; var_6212_string = ""; var_6213_string = ""; // 0x3607 PushV
	var_6212_string = "quest_d3_01"; // 0x3608 MovS
	var_6213_string = "cleanup"; // 0x3609 MovS
	func_245(var_6211_bool, var_6212_string, var_6213_string); // 0x360a NEW_2
	var_6214_object = Obj(); var_6215_string = ""; // 0x360c PushV
	var_6215_string = "quest_d4_01"; // 0x360d MovS
	func_143(var_6214_object, var_6215_string); // 0x360e NEW_2
	
Label_13840:
	var_6216_int = 45012; // 0x3610 PushI
	var_6217_bool = var_4657_int == var_6216_int; // 0x3611 Eq
	if(var_6217_bool == 0) goto Label_13865; // 0x3612 JumpB
	var_6218_object = Obj(); var_6219_object = Obj(); // 0x3613 PushV
	var_6220_object = GlobalVars[16]; // 0x3614 PushGE
	var_6218_object = var_6220_object; // 0x3615 Mov
	var_6221_object = GlobalVars[16]; // 0x3617 PushGE
	var_6219_object = var_6221_object; // 0x3618 Mov
	func_11394(); // 0x361a NEW_2
	var_6267_int = 0; var_6268_float = 0; // 0x361c PushV
	var_6268_float = var_4658_float; // 0x361d Mov
	func_10264(var_6267_int, var_6268_float); // 0x361e NEW_2
	var_6273_bool = 0; var_6274_string = ""; var_6275_string = ""; // 0x3620 PushV
	var_6274_string = "quest_d5_01"; // 0x3621 MovS
	var_6275_string = "cleanup"; // 0x3622 MovS
	func_245(var_6273_bool, var_6274_string, var_6275_string); // 0x3623 NEW_2
	var_6276_object = Obj(); var_6277_string = ""; // 0x3625 PushV
	var_6277_string = "quest_d6_01"; // 0x3626 MovS
	func_143(var_6276_object, var_6277_string); // 0x3627 NEW_2
	
Label_13865:
	var_6278_int = 45013; // 0x3629 PushI
	var_6279_bool = var_4657_int == var_6278_int; // 0x362a Eq
	if(var_6279_bool == 0) goto Label_13886; // 0x362b JumpB
	var_6280_object = Obj(); var_6281_object = Obj(); // 0x362c PushV
	var_6282_object = GlobalVars[16]; // 0x362d PushGE
	var_6280_object = var_6282_object; // 0x362e Mov
	var_6283_object = GlobalVars[16]; // 0x3630 PushGE
	var_6281_object = var_6283_object; // 0x3631 Mov
	func_11533(); // 0x3633 NEW_2
	var_6331_bool = 0; var_6332_string = ""; var_6333_string = ""; // 0x3635 PushV
	var_6332_string = "quest_d6_01"; // 0x3636 MovS
	var_6333_string = "cleanup"; // 0x3637 MovS
	func_245(var_6331_bool, var_6332_string, var_6333_string); // 0x3638 NEW_2
	var_6334_object = Obj(); var_6335_string = ""; // 0x363a PushV
	var_6335_string = "quest_d7_01"; // 0x363b MovS
	func_143(var_6334_object, var_6335_string); // 0x363c NEW_2
	
Label_13886:
	var_6336_int = 45035; // 0x363e PushI
	var_6337_bool = var_4657_int == var_6336_int; // 0x363f Eq
	if(var_6337_bool == 0) goto Label_13910; // 0x3640 JumpB
	var_6338_bool = 0; var_6339_object = Obj(); // 0x3641 PushV
	var_6340_object = GlobalVars[16]; // 0x3642 PushGE
	var_6339_object = var_6340_object; // 0x3643 Mov
	func_12265(var_6339_object); // 0x3645 NEW_2
	var_6345_bool = var_6338_bool == 0; // 0x3647 Not
	if(var_6345_bool == 0) goto Label_13910; // 0x3648 JumpB
	var_6346_object = Obj(); var_6347_object = Obj(); // 0x3649 PushV
	var_6348_object = GlobalVars[16]; // 0x364a PushGE
	var_6346_object = var_6348_object; // 0x364b Mov
	var_6349_object = GlobalVars[16]; // 0x364d PushGE
	var_6347_object = var_6349_object; // 0x364e Mov
	func_10790(); // 0x3650 NEW_2
	var_6350_int = 0; var_6351_float = 0; // 0x3652 PushV
	var_6351_float = var_4658_float; // 0x3653 Mov
	func_9976(var_6350_int, var_6351_float); // 0x3654 NEW_2
	
Label_13910:
	var_6356_int = 45010; // 0x3656 PushI
	var_6357_bool = var_4657_int == var_6356_int; // 0x3657 Eq
	if(var_6357_bool == 0) goto Label_13946; // 0x3658 JumpB
	var_6358_bool = 0; // 0x3659 PushV
	var_6358_bool = 0; // 0x365a MovB
	var_6359_bool = 0; var_6360_object = Obj(); // 0x365b PushV
	var_6361_object = GlobalVars[16]; // 0x365c PushGE
	var_6360_object = var_6361_object; // 0x365d Mov
	func_12229(var_6360_object); // 0x365f NEW_2
	var_6366_bool = var_6359_bool == 0; // 0x3661 Not
	if(var_6366_bool == 0) goto Label_13932; // 0x3662 JumpB
	var_6367_bool = 0; var_6368_object = Obj(); // 0x3663 PushV
	var_6369_object = GlobalVars[16]; // 0x3664 PushGE
	var_6368_object = var_6369_object; // 0x3665 Mov
	func_11943(var_6368_object); // 0x3667 NEW_2
	var_6374_bool = var_6367_bool == 0; // 0x3669 Not
	if(var_6374_bool == 0) goto Label_13932; // 0x366a JumpB
	var_6358_bool = 1; // 0x366b MovB
	
Label_13932:
	if(var_6358_bool == 0) goto Label_13946; // 0x366c JumpB
	var_6375_object = Obj(); var_6376_object = Obj(); // 0x366d PushV
	var_6377_object = GlobalVars[16]; // 0x366e PushGE
	var_6375_object = var_6377_object; // 0x366f Mov
	var_6378_object = GlobalVars[16]; // 0x3671 PushGE
	var_6376_object = var_6378_object; // 0x3672 Mov
	func_10483(); // 0x3674 NEW_2
	var_6387_int = 0; var_6388_float = 0; // 0x3676 PushV
	var_6388_float = var_4658_float; // 0x3677 Mov
	func_10075(var_6387_int, var_6388_float); // 0x3678 NEW_2
	
Label_13946:
	return 0; // 0x367a Return
}


func_6480()
{
	var_247_string = "r5_house2_01"; // 0x1951 PushS
	add(var_247_string); // 0x1952 ObjFunc
	var_248_string = "r5_house2_02"; // 0x1954 PushS
	add(var_248_string); // 0x1955 ObjFunc
	var_249_string = "r5_house2_03"; // 0x1957 PushS
	add(var_249_string); // 0x1958 ObjFunc
	var_250_string = "r5_house3_01_i2"; // 0x195a PushS
	add(var_250_string); // 0x195b ObjFunc
	var_251_string = "r5_house3_01"; // 0x195d PushS
	add(var_251_string); // 0x195e ObjFunc
	var_252_string = "r5_house3_02_i2"; // 0x1960 PushS
	add(var_252_string); // 0x1961 ObjFunc
	var_253_string = "r5_house3_02"; // 0x1963 PushS
	add(var_253_string); // 0x1964 ObjFunc
	var_254_string = "r5_house3_03_i2"; // 0x1966 PushS
	add(var_254_string); // 0x1967 ObjFunc
	var_255_string = "r5_house3_03"; // 0x1969 PushS
	add(var_255_string); // 0x196a ObjFunc
	var_256_string = "r5_house3_04_i2"; // 0x196c PushS
	add(var_256_string); // 0x196d ObjFunc
	var_257_string = "r5_house3_04"; // 0x196f PushS
	add(var_257_string); // 0x1970 ObjFunc
	var_258_string = "r5_house3_05_i2"; // 0x1972 PushS
	add(var_258_string); // 0x1973 ObjFunc
	var_259_string = "r5_house3_05"; // 0x1975 PushS
	add(var_259_string); // 0x1976 ObjFunc
	var_260_string = "r5_house3_06_i2"; // 0x1978 PushS
	add(var_260_string); // 0x1979 ObjFunc
	var_261_string = "r5_house3_06"; // 0x197b PushS
	add(var_261_string); // 0x197c ObjFunc
	var_262_string = "r5_house3_07_i2"; // 0x197e PushS
	add(var_262_string); // 0x197f ObjFunc
	var_263_string = "r5_house3_07"; // 0x1981 PushS
	add(var_263_string); // 0x1982 ObjFunc
	var_264_string = "r5_House6_01"; // 0x1984 PushS
	add(var_264_string); // 0x1985 ObjFunc
	return 0; // 0x1987 Return
}


func_1361(var_1140_bool, var_1141_int, var_1142_int)
{
	var_1140_bool = 0; // 0x552 MovB
	var_1143_int = 3; // 0x553 PushI
	var_1144_bool = var_1141_int >= var_1143_int; // 0x554 GE
	if(var_1144_bool == 0) goto Label_1377; // 0x555 JumpB
	var_1145_bool = 0; // 0x556 PushV
	var_1145_bool = 1; // 0x557 MovB
	var_1146_int = 22; // 0x558 PushI
	var_1147_bool = var_1142_int > var_1146_int; // 0x559 GT
	if(var_1147_bool == 0) goto Label_1375; // 0x55a JumpB
	var_1148_int = 5; // 0x55b PushI
	var_1149_bool = var_1142_int < var_1148_int; // 0x55c LT
	if(var_1149_bool == 0) goto Label_1375; // 0x55d JumpB
	var_1145_bool = 0; // 0x55e MovB
	
Label_1375:
	if(var_1145_bool == 0) goto Label_1377; // 0x55f JumpB
	var_1140_bool = 1; // 0x560 MovB
	
Label_1377:
	return 0; // 0x561 Return
}


func_10579()
{
	var_4806_string = ""; var_4807_bool = 0; // 0x2954 PushV
	var_4806_string = "mnogogrannik_han@door1"; // 0x2955 MovS
	var_4807_bool = 1; // 0x2956 MovB
	func_183(var_4806_string, var_4807_bool); // 0x2957 NEW_2
	return 0; // 0x2959 Return
}


func_2389(var_915_int, var_916_int, var_917_int)
{
	var_918_int = 0; var_919_int = 0; // 0x955 PushV
	var_920_int = 1; // 0x956 PushI
	var_921_int = var_916_int + var_920_int; // 0x957 Add
	var_922_int = 12; // 0x958 PushI
	var_923_bool = var_921_int == var_922_int; // 0x959 Eq
	if(var_923_bool == 0) goto Label_2396; // 0x95a JumpB
	return 2; // 0x95b Return
	
Label_2396:
	var_924_bool = 0; // 0x95c PushV
	var_924_bool = 0; // 0x95d MovB
	var_925_bool = 0; // 0x95e PushV
	var_925_bool = 1; // 0x95f MovB
	var_926_int = 7; // 0x960 PushI
	var_927_bool = var_917_int < var_926_int; // 0x961 LT
	if(var_927_bool == 0) goto Label_2407; // 0x962 JumpB
	var_928_int = 21; // 0x963 PushI
	var_929_bool = var_917_int > var_928_int; // 0x964 GT
	if(var_929_bool == 0) goto Label_2407; // 0x965 JumpB
	var_925_bool = 0; // 0x966 MovB
	
Label_2407:
	if(var_925_bool == 0) goto Label_2412; // 0x967 JumpB
	var_930_int = 0; // 0x968 PushI
	var_931_bool = var_916_int != var_930_int; // 0x969 Neq
	if(var_931_bool == 0) goto Label_2412; // 0x96a JumpB
	var_924_bool = 1; // 0x96b MovB
	
Label_2412:
	if(var_924_bool == 0) goto Label_2428; // 0x96c JumpB
	var_932_int = 1; // 0x96d PushI
	var_933_float = 0; var_934_int = 0; // 0x96e PushV
	var_934_int = var_916_int; // 0x96f Mov
	func_1147(var_933_float, var_934_int); // 0x970 NEW_2
	var_919_int = var_932_int * var_933_float; // 0x972 Mult2
	var_935_int = var_919_int; // 0x973 Push
	if(var_935_int == 0) goto Label_2428; // 0x974 JumpB
	var_936_int = 0; var_937_string = ""; var_938_string = ""; var_939_int = 0; // 0x975 PushV
	var_936_int = var_915_int; // 0x976 Mov
	var_937_string = "pers_grabitel"; // 0x977 MovS
	var_938_string = "grabitel.xml"; // 0x978 MovS
	var_939_int = var_919_int; // 0x979 Mov
	func_509(var_936_int, var_937_string, var_938_string, var_939_int); // 0x97a NEW_2
	
Label_2428:
	var_940_bool = 0; var_941_int = 0; var_942_int = 0; // 0x97c PushV
	var_941_int = var_916_int; // 0x97d Mov
	var_942_int = var_917_int; // 0x97e Mov
	func_1116(var_940_bool, var_941_int, var_942_int); // 0x97f NEW_2
	if(var_940_bool == 0) goto Label_2477; // 0x981 JumpB
	var_943_int = 0; var_944_string = ""; var_945_string = ""; var_946_int = 0; // 0x982 PushV
	var_943_int = var_915_int; // 0x983 Mov
	var_944_string = "pers_unosha"; // 0x984 MovS
	var_945_string = "unosha_attacker.xml"; // 0x985 MovS
	var_946_int = 1; // 0x986 MovI
	func_509(var_943_int, var_944_string, var_945_string, var_946_int); // 0x987 NEW_2
	var_947_int = 0; var_948_string = ""; var_949_string = ""; var_950_int = 0; // 0x989 PushV
	var_947_int = var_915_int; // 0x98a Mov
	var_948_string = "pers_unosha"; // 0x98b MovS
	var_949_string = "unosha2_attacker.xml"; // 0x98c MovS
	var_950_int = 1; // 0x98d MovI
	func_509(var_947_int, var_948_string, var_949_string, var_950_int); // 0x98e NEW_2
	var_951_int = 0; var_952_string = ""; var_953_string = ""; var_954_int = 0; // 0x990 PushV
	var_951_int = var_915_int; // 0x991 Mov
	var_952_string = "pers_worker"; // 0x992 MovS
	var_953_string = "worker_attacker.xml"; // 0x993 MovS
	var_954_int = 1; // 0x994 MovI
	func_509(var_951_int, var_952_string, var_953_string, var_954_int); // 0x995 NEW_2
	var_955_int = 0; var_956_string = ""; var_957_string = ""; var_958_int = 0; // 0x997 PushV
	var_955_int = var_915_int; // 0x998 Mov
	var_956_string = "pers_worker"; // 0x999 MovS
	var_957_string = "worker2_attacker.xml"; // 0x99a MovS
	var_958_int = 1; // 0x99b MovI
	func_509(var_955_int, var_956_string, var_957_string, var_958_int); // 0x99c NEW_2
	var_959_int = 0; var_960_string = ""; var_961_string = ""; var_962_int = 0; // 0x99e PushV
	var_959_int = var_915_int; // 0x99f Mov
	var_960_string = "pers_alkash"; // 0x9a0 MovS
	var_961_string = "alkash.xml"; // 0x9a1 MovS
	var_962_int = 1; // 0x9a2 MovI
	func_509(var_959_int, var_960_string, var_961_string, var_962_int); // 0x9a3 NEW_2
	var_963_int = 0; var_964_string = ""; var_965_string = ""; var_966_int = 0; // 0x9a5 PushV
	var_963_int = var_915_int; // 0x9a6 Mov
	var_964_string = "pers_woman"; // 0x9a7 MovS
	var_965_string = "woman.xml"; // 0x9a8 MovS
	var_966_int = 2; // 0x9a9 MovI
	func_509(var_963_int, var_964_string, var_965_string, var_966_int); // 0x9aa NEW_2
	goto Label_2565; // 0x9ac Jump
	
Label_2565:
	var_967_bool = 0; // 0xa05 PushV
	var_967_bool = 0; // 0xa06 MovB
	var_968_bool = 0; // 0xa07 PushV
	var_968_bool = 0; // 0xa08 MovB
	var_969_int = 0; // 0xa09 PushI
	var_970_bool = var_916_int == var_969_int; // 0xa0a Eq
	if(var_970_bool == 0) goto Label_2576; // 0xa0b JumpB
	var_971_int = 12; // 0xa0c PushI
	var_972_bool = var_917_int > var_971_int; // 0xa0d GT
	if(var_972_bool == 0) goto Label_2576; // 0xa0e JumpB
	var_968_bool = 1; // 0xa0f MovB
	
Label_2576:
	if(var_968_bool == 0) goto Label_2581; // 0xa10 JumpB
	var_973_int = 22; // 0xa11 PushI
	var_974_bool = var_917_int < var_973_int; // 0xa12 LT
	if(var_974_bool == 0) goto Label_2581; // 0xa13 JumpB
	var_967_bool = 1; // 0xa14 MovB
	
Label_2581:
	if(var_967_bool == 0) goto Label_2589; // 0xa15 JumpB
	var_975_int = 0; var_976_string = ""; var_977_string = ""; var_978_int = 0; // 0xa16 PushV
	var_975_int = var_915_int; // 0xa17 Mov
	var_976_string = "pers_woman"; // 0xa18 MovS
	var_977_string = "woman_killme.xml"; // 0xa19 MovS
	var_978_int = 1; // 0xa1a MovI
	func_509(var_975_int, var_976_string, var_977_string, var_978_int); // 0xa1b NEW_2
	
Label_2589:
	return 2; // 0xa1d Return
	
Label_2477:
	var_979_bool = 0; // 0x9ad PushV
	var_979_bool = 0; // 0x9ae MovB
	var_980_int = 8; // 0x9af PushI
	var_981_bool = var_917_int > var_980_int; // 0x9b0 GT
	if(var_981_bool == 0) goto Label_2486; // 0x9b1 JumpB
	var_982_int = 21; // 0x9b2 PushI
	var_983_bool = var_917_int < var_982_int; // 0x9b3 LT
	if(var_983_bool == 0) goto Label_2486; // 0x9b4 JumpB
	var_979_bool = 1; // 0x9b5 MovB
	
Label_2486:
	if(var_979_bool == 0) goto Label_2530; // 0x9b6 JumpB
	var_984_int = 0; var_985_string = ""; var_986_string = ""; var_987_int = 0; // 0x9b7 PushV
	var_984_int = var_915_int; // 0x9b8 Mov
	var_985_string = "pers_worker"; // 0x9b9 MovS
	var_986_string = "worker.xml"; // 0x9ba MovS
	var_987_int = 2; // 0x9bb MovI
	func_509(var_984_int, var_985_string, var_986_string, var_987_int); // 0x9bc NEW_2
	var_988_int = 0; var_989_string = ""; var_990_string = ""; var_991_int = 0; // 0x9be PushV
	var_988_int = var_915_int; // 0x9bf Mov
	var_989_string = "pers_worker"; // 0x9c0 MovS
	var_990_string = "worker2.xml"; // 0x9c1 MovS
	var_991_int = 2; // 0x9c2 MovI
	func_509(var_988_int, var_989_string, var_990_string, var_991_int); // 0x9c3 NEW_2
	var_992_int = 0; var_993_string = ""; var_994_string = ""; var_995_int = 0; // 0x9c5 PushV
	var_992_int = var_915_int; // 0x9c6 Mov
	var_993_string = "pers_alkash"; // 0x9c7 MovS
	var_994_string = "alkash.xml"; // 0x9c8 MovS
	var_995_int = 1; // 0x9c9 MovI
	func_509(var_992_int, var_993_string, var_994_string, var_995_int); // 0x9ca NEW_2
	var_996_int = 0; var_997_string = ""; var_998_string = ""; var_999_int = 0; // 0x9cc PushV
	var_996_int = var_915_int; // 0x9cd Mov
	var_997_string = "pers_woman"; // 0x9ce MovS
	var_998_string = "woman.xml"; // 0x9cf MovS
	var_999_int = 2; // 0x9d0 MovI
	func_509(var_996_int, var_997_string, var_998_string, var_999_int); // 0x9d1 NEW_2
	var_1000_int = 0; var_1001_string = ""; var_1002_string = ""; var_1003_int = 0; // 0x9d3 PushV
	var_1000_int = var_915_int; // 0x9d4 Mov
	var_1001_string = "pers_unosha"; // 0x9d5 MovS
	var_1002_string = "unosha.xml"; // 0x9d6 MovS
	var_1003_int = 1; // 0x9d7 MovI
	func_509(var_1000_int, var_1001_string, var_1002_string, var_1003_int); // 0x9d8 NEW_2
	var_1004_int = 0; var_1005_string = ""; var_1006_string = ""; var_1007_int = 0; // 0x9da PushV
	var_1004_int = var_915_int; // 0x9db Mov
	var_1005_string = "pers_unosha"; // 0x9dc MovS
	var_1006_string = "unosha2.xml"; // 0x9dd MovS
	var_1007_int = 1; // 0x9de MovI
	func_509(var_1004_int, var_1005_string, var_1006_string, var_1007_int); // 0x9df NEW_2
	goto Label_2565; // 0x9e1 Jump
	
Label_2530:
	var_1008_int = 0; var_1009_string = ""; var_1010_string = ""; var_1011_int = 0; // 0x9e2 PushV
	var_1008_int = var_915_int; // 0x9e3 Mov
	var_1009_string = "pers_alkash"; // 0x9e4 MovS
	var_1010_string = "alkash.xml"; // 0x9e5 MovS
	var_1011_int = 1; // 0x9e6 MovI
	func_509(var_1008_int, var_1009_string, var_1010_string, var_1011_int); // 0x9e7 NEW_2
	var_1012_int = 0; var_1013_string = ""; var_1014_string = ""; var_1015_int = 0; // 0x9e9 PushV
	var_1012_int = var_915_int; // 0x9ea Mov
	var_1013_string = "pers_worker"; // 0x9eb MovS
	var_1014_string = "worker.xml"; // 0x9ec MovS
	var_1015_int = 1; // 0x9ed MovI
	func_509(var_1012_int, var_1013_string, var_1014_string, var_1015_int); // 0x9ee NEW_2
	var_1016_int = 0; var_1017_string = ""; var_1018_string = ""; var_1019_int = 0; // 0x9f0 PushV
	var_1016_int = var_915_int; // 0x9f1 Mov
	var_1017_string = "pers_worker"; // 0x9f2 MovS
	var_1018_string = "worker2.xml"; // 0x9f3 MovS
	var_1019_int = 1; // 0x9f4 MovI
	func_509(var_1016_int, var_1017_string, var_1018_string, var_1019_int); // 0x9f5 NEW_2
	var_1020_int = 0; var_1021_string = ""; var_1022_string = ""; var_1023_int = 0; // 0x9f7 PushV
	var_1020_int = var_915_int; // 0x9f8 Mov
	var_1021_string = "pers_unosha"; // 0x9f9 MovS
	var_1022_string = "unosha2.xml"; // 0x9fa MovS
	var_1023_int = 1; // 0x9fb MovI
	func_509(var_1020_int, var_1021_string, var_1022_string, var_1023_int); // 0x9fc NEW_2
	var_1024_int = 0; var_1025_string = ""; var_1026_string = ""; var_1027_int = 0; // 0x9fe PushV
	var_1024_int = var_915_int; // 0x9ff Mov
	var_1025_string = "pers_dog"; // 0xa00 MovS
	var_1026_string = "dog.xml"; // 0xa01 MovS
	var_1027_int = 1; // 0xa02 MovI
	func_509(var_1024_int, var_1025_string, var_1026_string, var_1027_int); // 0xa03 NEW_2
}


func_10586()
{
	var_5070_object = Obj(); var_5071_object = Obj(); // 0x295a PushV
	var_5072_object = Obj(); // 0x295b PushV
	func_12503(var_5072_object); // 0x295c NEW_2
	var_5071_object = var_5072_object; // 0x295d Mov
	var_5073_string = "d10q03GotoMark"; // 0x295f PushS
	var_5074_string = "pt_map_theater"; // 0x2960 PushS
	var_5075_int = 0; // 0x2961 PushI
	var_5076_int = 511154; // 0x2962 PushI
	var_5077_float = 0; // 0x2963 PushV
	func_290(var_5077_float); // 0x2964 NEW_2
	AddMark(var_5073_string, var_5074_string, var_5075_int, var_5076_int, var_5077_float); // 0x2966 ObjFunc
	return 2; // 0x2968 Return
}


func_4445(var_2006_int, var_2007_int, var_2008_object, var_2009_object, var_2010_object, var_2011_object)
{
	var_2012_int = 0; // 0x115e PushI
	var_2013_bool = var_2007_int == var_2012_int; // 0x115f Eq
	if(var_2013_bool == 0) goto Label_4485; // 0x1160 JumpB
	var_2014_int = 0; var_2015_bool = 0; // 0x1161 PushV
	var_2014_int = 0; // 0x1162 MovI
	var_2015_bool = 1; // 0x1163 MovB
	func_802(var_2014_int, var_2015_bool); // 0x1164 NEW_2
	var_2016_int = 0; var_2017_bool = 0; var_2018_int = 0; // 0x1166 PushV
	var_2016_int = 0; // 0x1167 MovI
	var_2017_bool = 1; // 0x1168 MovB
	var_2018_int = 1; // 0x1169 MovI
	func_819(var_2016_int, var_2017_bool, var_2018_int); // 0x116a NEW_2
	var_2019_int = 0; var_2020_int = 0; var_2021_object = Obj(); var_2022_object = Obj(); var_2023_object = Obj(); // 0x116c PushV
	var_2019_int = 0; // 0x116d MovI
	var_2020_int = var_2006_int; // 0x116e Mov
	var_2021_object = var_2008_object; // 0x116f Mov
	var_2022_object = var_2009_object; // 0x1170 Mov
	var_2023_object = var_2010_object; // 0x1171 Mov
	func_647(var_2019_int, var_2020_int, var_2021_object, var_2022_object, var_2023_object); // 0x1172 NEW_2
	var_2109_object = Obj(); var_2110_int = 0; // 0x1174 PushV
	var_2109_object = var_2011_object; // 0x1175 Mov
	var_2110_int = 1; // 0x1176 MovI
	func_311(var_2110_int); // 0x1177 NEW_2
	var_2111_int = 0; var_2112_bool = 0; var_2113_int = 0; // 0x1179 PushV
	var_2111_int = 0; // 0x117a MovI
	var_2112_bool = 1; // 0x117b MovB
	var_2113_int = 4; // 0x117c MovI
	func_876(var_2111_int, var_2112_bool, var_2113_int); // 0x117d NEW_2
	var_2114_int = 0; var_2115_bool = 0; var_2116_int = 0; // 0x117f PushV
	var_2114_int = 0; // 0x1180 MovI
	var_2115_bool = 0; // 0x1181 MovB
	var_2116_int = 4; // 0x1182 MovI
	func_938(var_2114_int, var_2115_bool, var_2116_int); // 0x1183 NEW_2
	
Label_4485:
	var_2117_int = 0; var_2118_bool = 0; // 0x1185 PushV
	var_2117_int = 0; // 0x1186 MovI
	var_2118_bool = 0; // 0x1187 MovB
	func_785(var_2117_int, var_2118_bool); // 0x1188 NEW_2
	var_2119_int = 0; var_2120_int = 0; var_2121_int = 0; // 0x118a PushV
	var_2119_int = 0; // 0x118b MovI
	var_2120_int = var_2006_int; // 0x118c Mov
	var_2121_int = var_2007_int; // 0x118d Mov
	func_3143(var_2119_int, var_2120_int, var_2121_int); // 0x118e NEW_2
	return 0; // 0x1190 Return
}


func_349(var_108_int)
{
	var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0; // 0x15d PushV
	var_111_int = 0; // 0x15e MovI
	var_112_int = 0; // 0x15f MovI
	
Label_352:
	var_113_int = 16; // 0x160 PushI
	var_114_bool = var_112_int < var_113_int; // 0x161 LT
	if(var_114_bool == 0) goto Label_365; // 0x162 JumpB
	var_115_bool = 0; var_116_int = 0; // 0x163 PushV
	var_116_int = var_112_int; // 0x164 Mov
	func_436(var_115_bool, var_116_int); // 0x165 NEW_2
	if(var_115_bool == 0) goto Label_362; // 0x167 JumpB
	var_117_int = 1; // 0x168 PushI
	var_111_int = var_111_int + var_117_int; // 0x169 Add2
	
Label_362:
	var_118_int = 1; // 0x16a PushI
	var_112_int = var_112_int + var_118_int; // 0x16b Add2
	goto Label_352; // 0x16c Jump
	
Label_365:
	var_108_int = var_111_int; // 0x16d Mov
	return 4; // 0x16e Return
}


func_1378(var_2209_bool, var_2210_int)
{
	var_2211_int = 8; // 0x563 PushI
	var_2209_bool = var_2210_int >= var_2211_int; // 0x564 GE2
	return 0; // 0x565 Return
}


func_1382(var_1807_int, var_1808_int, var_1809_int)
{
	var_1810_int = 0; var_1811_int = 0; // 0x566 PushV
	var_1812_int = 1; // 0x567 PushI
	var_1813_int = var_1808_int + var_1812_int; // 0x568 Add
	var_1814_int = 12; // 0x569 PushI
	var_1815_bool = var_1813_int == var_1814_int; // 0x56a Eq
	if(var_1815_bool == 0) goto Label_1389; // 0x56b JumpB
	return 2; // 0x56c Return
	
Label_1389:
	var_1816_bool = 0; // 0x56d PushV
	var_1816_bool = 0; // 0x56e MovB
	var_1817_bool = 0; // 0x56f PushV
	var_1817_bool = 1; // 0x570 MovB
	var_1818_int = 7; // 0x571 PushI
	var_1819_bool = var_1809_int < var_1818_int; // 0x572 LT
	if(var_1819_bool == 0) goto Label_1400; // 0x573 JumpB
	var_1820_int = 21; // 0x574 PushI
	var_1821_bool = var_1809_int > var_1820_int; // 0x575 GT
	if(var_1821_bool == 0) goto Label_1400; // 0x576 JumpB
	var_1817_bool = 0; // 0x577 MovB
	
Label_1400:
	if(var_1817_bool == 0) goto Label_1405; // 0x578 JumpB
	var_1822_int = 0; // 0x579 PushI
	var_1823_bool = var_1808_int != var_1822_int; // 0x57a Neq
	if(var_1823_bool == 0) goto Label_1405; // 0x57b JumpB
	var_1816_bool = 1; // 0x57c MovB
	
Label_1405:
	if(var_1816_bool == 0) goto Label_1420; // 0x57d JumpB
	var_1824_float = 0; var_1825_int = 0; // 0x57e PushV
	var_1825_int = var_1808_int; // 0x57f Mov
	func_1147(var_1824_float, var_1825_int); // 0x580 NEW_2
	var_1811_int = var_1824_float; // 0x581 Mov
	var_1826_int = var_1811_int; // 0x583 Push
	if(var_1826_int == 0) goto Label_1420; // 0x584 JumpB
	var_1827_int = 0; var_1828_string = ""; var_1829_string = ""; var_1830_int = 0; // 0x585 PushV
	var_1827_int = var_1807_int; // 0x586 Mov
	var_1828_string = "pers_grabitel"; // 0x587 MovS
	var_1829_string = "grabitel.xml"; // 0x588 MovS
	var_1830_int = var_1811_int; // 0x589 Mov
	func_509(var_1827_int, var_1828_string, var_1829_string, var_1830_int); // 0x58a NEW_2
	
Label_1420:
	var_1831_bool = 0; var_1832_int = 0; var_1833_int = 0; // 0x58c PushV
	var_1832_int = var_1808_int; // 0x58d Mov
	var_1833_int = var_1809_int; // 0x58e Mov
	func_1116(var_1831_bool, var_1832_int, var_1833_int); // 0x58f NEW_2
	if(var_1831_bool == 0) goto Label_1497; // 0x591 JumpB
	var_1834_int = 0; var_1835_string = ""; var_1836_string = ""; var_1837_int = 0; // 0x592 PushV
	var_1834_int = var_1807_int; // 0x593 Mov
	var_1835_string = "pers_unosha"; // 0x594 MovS
	var_1836_string = "unosha_attacker.xml"; // 0x595 MovS
	var_1837_int = 1; // 0x596 MovI
	func_509(var_1834_int, var_1835_string, var_1836_string, var_1837_int); // 0x597 NEW_2
	var_1838_int = 0; var_1839_string = ""; var_1840_string = ""; var_1841_int = 0; // 0x599 PushV
	var_1838_int = var_1807_int; // 0x59a Mov
	var_1839_string = "pers_unosha"; // 0x59b MovS
	var_1840_string = "unosha2_attacker.xml"; // 0x59c MovS
	var_1841_int = 1; // 0x59d MovI
	func_509(var_1838_int, var_1839_string, var_1840_string, var_1841_int); // 0x59e NEW_2
	var_1842_int = 0; var_1843_string = ""; var_1844_string = ""; var_1845_int = 0; // 0x5a0 PushV
	var_1842_int = var_1807_int; // 0x5a1 Mov
	var_1843_string = "pers_worker"; // 0x5a2 MovS
	var_1844_string = "worker_attacker.xml"; // 0x5a3 MovS
	var_1845_int = 1; // 0x5a4 MovI
	func_509(var_1842_int, var_1843_string, var_1844_string, var_1845_int); // 0x5a5 NEW_2
	var_1846_int = 0; var_1847_string = ""; var_1848_string = ""; var_1849_int = 0; // 0x5a7 PushV
	var_1846_int = var_1807_int; // 0x5a8 Mov
	var_1847_string = "pers_worker"; // 0x5a9 MovS
	var_1848_string = "worker2_attacker.xml"; // 0x5aa MovS
	var_1849_int = 1; // 0x5ab MovI
	func_509(var_1846_int, var_1847_string, var_1848_string, var_1849_int); // 0x5ac NEW_2
	var_1850_int = 0; var_1851_string = ""; var_1852_string = ""; var_1853_int = 0; // 0x5ae PushV
	var_1850_int = var_1807_int; // 0x5af Mov
	var_1851_string = "pers_wasted_girl"; // 0x5b0 MovS
	var_1852_string = "wasted_girl.xml"; // 0x5b1 MovS
	var_1853_int = 2; // 0x5b2 MovI
	func_509(var_1850_int, var_1851_string, var_1852_string, var_1853_int); // 0x5b3 NEW_2
	var_1854_int = 0; var_1855_string = ""; var_1856_string = ""; var_1857_int = 0; // 0x5b5 PushV
	var_1854_int = var_1807_int; // 0x5b6 Mov
	var_1855_string = "pers_wasted_male"; // 0x5b7 MovS
	var_1856_string = "wasted_male.xml"; // 0x5b8 MovS
	var_1857_int = 3; // 0x5b9 MovI
	func_509(var_1854_int, var_1855_string, var_1856_string, var_1857_int); // 0x5ba NEW_2
	var_1858_int = 0; var_1859_string = ""; var_1860_string = ""; var_1861_int = 0; // 0x5bc PushV
	var_1858_int = var_1807_int; // 0x5bd Mov
	var_1859_string = "pers_woman"; // 0x5be MovS
	var_1860_string = "woman.xml"; // 0x5bf MovS
	var_1861_int = 3; // 0x5c0 MovI
	func_509(var_1858_int, var_1859_string, var_1860_string, var_1861_int); // 0x5c1 NEW_2
	var_1862_int = 0; var_1863_string = ""; var_1864_string = ""; var_1865_int = 0; // 0x5c3 PushV
	var_1862_int = var_1807_int; // 0x5c4 Mov
	var_1863_string = "pers_boy"; // 0x5c5 MovS
	var_1864_string = "boy.xml"; // 0x5c6 MovS
	var_1865_int = 1; // 0x5c7 MovI
	func_509(var_1862_int, var_1863_string, var_1864_string, var_1865_int); // 0x5c8 NEW_2
	var_1866_int = 0; var_1867_string = ""; var_1868_string = ""; var_1869_int = 0; // 0x5ca PushV
	var_1866_int = var_1807_int; // 0x5cb Mov
	var_1867_string = "pers_girl"; // 0x5cc MovS
	var_1868_string = "girl.xml"; // 0x5cd MovS
	var_1869_int = 1; // 0x5ce MovI
	func_509(var_1866_int, var_1867_string, var_1868_string, var_1869_int); // 0x5cf NEW_2
	var_1870_int = 0; var_1871_string = ""; var_1872_string = ""; var_1873_int = 0; // 0x5d1 PushV
	var_1870_int = var_1807_int; // 0x5d2 Mov
	var_1871_string = "pers_girl"; // 0x5d3 MovS
	var_1872_string = "girl2.xml"; // 0x5d4 MovS
	var_1873_int = 1; // 0x5d5 MovI
	func_509(var_1870_int, var_1871_string, var_1872_string, var_1873_int); // 0x5d6 NEW_2
	goto Label_1592; // 0x5d8 Jump
	
Label_1592:
	var_1874_bool = 0; // 0x638 PushV
	var_1874_bool = 0; // 0x639 MovB
	var_1875_bool = 0; // 0x63a PushV
	var_1875_bool = 0; // 0x63b MovB
	var_1876_int = 0; // 0x63c PushI
	var_1877_bool = var_1808_int == var_1876_int; // 0x63d Eq
	if(var_1877_bool == 0) goto Label_1603; // 0x63e JumpB
	var_1878_int = 12; // 0x63f PushI
	var_1879_bool = var_1809_int > var_1878_int; // 0x640 GT
	if(var_1879_bool == 0) goto Label_1603; // 0x641 JumpB
	var_1875_bool = 1; // 0x642 MovB
	
Label_1603:
	if(var_1875_bool == 0) goto Label_1608; // 0x643 JumpB
	var_1880_int = 22; // 0x644 PushI
	var_1881_bool = var_1809_int < var_1880_int; // 0x645 LT
	if(var_1881_bool == 0) goto Label_1608; // 0x646 JumpB
	var_1874_bool = 1; // 0x647 MovB
	
Label_1608:
	if(var_1874_bool == 0) goto Label_1616; // 0x648 JumpB
	var_1882_int = 0; var_1883_string = ""; var_1884_string = ""; var_1885_int = 0; // 0x649 PushV
	var_1882_int = var_1807_int; // 0x64a Mov
	var_1883_string = "pers_wasted_girl"; // 0x64b MovS
	var_1884_string = "wasted_girl_killme.xml"; // 0x64c MovS
	var_1885_int = 1; // 0x64d MovI
	func_509(var_1882_int, var_1883_string, var_1884_string, var_1885_int); // 0x64e NEW_2
	
Label_1616:
	var_1886_bool = 0; var_1887_int = 0; var_1888_int = 0; // 0x650 PushV
	var_1887_int = var_1808_int; // 0x651 Mov
	var_1888_int = var_1809_int; // 0x652 Mov
	func_1351(var_1886_bool, var_1887_int, var_1888_int); // 0x653 NEW_2
	if(var_1886_bool == 0) goto Label_1629; // 0x655 JumpB
	var_1889_int = 0; var_1890_string = ""; var_1891_string = ""; var_1892_int = 0; // 0x656 PushV
	var_1889_int = var_1807_int; // 0x657 Mov
	var_1890_string = "pers_soldat"; // 0x658 MovS
	var_1891_string = "soldier_marauder.xml"; // 0x659 MovS
	var_1892_int = 2; // 0x65a MovI
	func_509(var_1889_int, var_1890_string, var_1891_string, var_1892_int); // 0x65b NEW_2
	
Label_1629:
	return 2; // 0x65d Return
	
Label_1497:
	var_1893_bool = 0; // 0x5d9 PushV
	var_1893_bool = 0; // 0x5da MovB
	var_1894_int = 8; // 0x5db PushI
	var_1895_bool = var_1809_int > var_1894_int; // 0x5dc GT
	if(var_1895_bool == 0) goto Label_1506; // 0x5dd JumpB
	var_1896_int = 21; // 0x5de PushI
	var_1897_bool = var_1809_int < var_1896_int; // 0x5df LT
	if(var_1897_bool == 0) goto Label_1506; // 0x5e0 JumpB
	var_1893_bool = 1; // 0x5e1 MovB
	
Label_1506:
	if(var_1893_bool == 0) goto Label_1564; // 0x5e2 JumpB
	var_1898_int = 0; var_1899_string = ""; var_1900_string = ""; var_1901_int = 0; // 0x5e3 PushV
	var_1898_int = var_1807_int; // 0x5e4 Mov
	var_1899_string = "pers_wasted_girl"; // 0x5e5 MovS
	var_1900_string = "wasted_girl.xml"; // 0x5e6 MovS
	var_1901_int = 2; // 0x5e7 MovI
	func_509(var_1898_int, var_1899_string, var_1900_string, var_1901_int); // 0x5e8 NEW_2
	var_1902_int = 0; var_1903_string = ""; var_1904_string = ""; var_1905_int = 0; // 0x5ea PushV
	var_1902_int = var_1807_int; // 0x5eb Mov
	var_1903_string = "pers_wasted_male"; // 0x5ec MovS
	var_1904_string = "wasted_male.xml"; // 0x5ed MovS
	var_1905_int = 3; // 0x5ee MovI
	func_509(var_1902_int, var_1903_string, var_1904_string, var_1905_int); // 0x5ef NEW_2
	var_1906_int = 0; var_1907_string = ""; var_1908_string = ""; var_1909_int = 0; // 0x5f1 PushV
	var_1906_int = var_1807_int; // 0x5f2 Mov
	var_1907_string = "pers_woman"; // 0x5f3 MovS
	var_1908_string = "woman.xml"; // 0x5f4 MovS
	var_1909_int = 3; // 0x5f5 MovI
	func_509(var_1906_int, var_1907_string, var_1908_string, var_1909_int); // 0x5f6 NEW_2
	var_1910_int = 0; var_1911_string = ""; var_1912_string = ""; var_1913_int = 0; // 0x5f8 PushV
	var_1910_int = var_1807_int; // 0x5f9 Mov
	var_1911_string = "pers_unosha"; // 0x5fa MovS
	var_1912_string = "unosha.xml"; // 0x5fb MovS
	var_1913_int = 2; // 0x5fc MovI
	func_509(var_1910_int, var_1911_string, var_1912_string, var_1913_int); // 0x5fd NEW_2
	var_1914_int = 0; var_1915_string = ""; var_1916_string = ""; var_1917_int = 0; // 0x5ff PushV
	var_1914_int = var_1807_int; // 0x600 Mov
	var_1915_string = "pers_unosha"; // 0x601 MovS
	var_1916_string = "unosha2.xml"; // 0x602 MovS
	var_1917_int = 2; // 0x603 MovI
	func_509(var_1914_int, var_1915_string, var_1916_string, var_1917_int); // 0x604 NEW_2
	var_1918_int = 0; var_1919_string = ""; var_1920_string = ""; var_1921_int = 0; // 0x606 PushV
	var_1918_int = var_1807_int; // 0x607 Mov
	var_1919_string = "pers_boy"; // 0x608 MovS
	var_1920_string = "boy.xml"; // 0x609 MovS
	var_1921_int = 2; // 0x60a MovI
	func_509(var_1918_int, var_1919_string, var_1920_string, var_1921_int); // 0x60b NEW_2
	var_1922_int = 0; var_1923_string = ""; var_1924_string = ""; var_1925_int = 0; // 0x60d PushV
	var_1922_int = var_1807_int; // 0x60e Mov
	var_1923_string = "pers_girl"; // 0x60f MovS
	var_1924_string = "girl.xml"; // 0x610 MovS
	var_1925_int = 1; // 0x611 MovI
	func_509(var_1922_int, var_1923_string, var_1924_string, var_1925_int); // 0x612 NEW_2
	var_1926_int = 0; var_1927_string = ""; var_1928_string = ""; var_1929_int = 0; // 0x614 PushV
	var_1926_int = var_1807_int; // 0x615 Mov
	var_1927_string = "pers_girl"; // 0x616 MovS
	var_1928_string = "girl2.xml"; // 0x617 MovS
	var_1929_int = 1; // 0x618 MovI
	func_509(var_1926_int, var_1927_string, var_1928_string, var_1929_int); // 0x619 NEW_2
	goto Label_1592; // 0x61b Jump
	
Label_1564:
	var_1930_int = 0; var_1931_string = ""; var_1932_string = ""; var_1933_int = 0; // 0x61c PushV
	var_1930_int = var_1807_int; // 0x61d Mov
	var_1931_string = "pers_wasted_girl"; // 0x61e MovS
	var_1932_string = "wasted_girl.xml"; // 0x61f MovS
	var_1933_int = 1; // 0x620 MovI
	func_509(var_1930_int, var_1931_string, var_1932_string, var_1933_int); // 0x621 NEW_2
	var_1934_int = 0; var_1935_string = ""; var_1936_string = ""; var_1937_int = 0; // 0x623 PushV
	var_1934_int = var_1807_int; // 0x624 Mov
	var_1935_string = "pers_wasted_male"; // 0x625 MovS
	var_1936_string = "wasted_male.xml"; // 0x626 MovS
	var_1937_int = 2; // 0x627 MovI
	func_509(var_1934_int, var_1935_string, var_1936_string, var_1937_int); // 0x628 NEW_2
	var_1938_int = 0; var_1939_string = ""; var_1940_string = ""; var_1941_int = 0; // 0x62a PushV
	var_1938_int = var_1807_int; // 0x62b Mov
	var_1939_string = "pers_unosha"; // 0x62c MovS
	var_1940_string = "unosha.xml"; // 0x62d MovS
	var_1941_int = 1; // 0x62e MovI
	func_509(var_1938_int, var_1939_string, var_1940_string, var_1941_int); // 0x62f NEW_2
	var_1942_int = 0; var_1943_string = ""; var_1944_string = ""; var_1945_int = 0; // 0x631 PushV
	var_1942_int = var_1807_int; // 0x632 Mov
	var_1943_string = "pers_unosha"; // 0x633 MovS
	var_1944_string = "unosha2.xml"; // 0x634 MovS
	var_1945_int = 1; // 0x635 MovI
	func_509(var_1942_int, var_1943_string, var_1944_string, var_1945_int); // 0x636 NEW_2
}


func_10602()
{
	var_4689_object = Obj(); var_4690_object = Obj(); // 0x296a PushV
	var_4691_object = Obj(); // 0x296b PushV
	func_12503(var_4691_object); // 0x296c NEW_2
	var_4690_object = var_4691_object; // 0x296d Mov
	var_4698_string = "d9q01GotoViktor"; // 0x296f PushS
	var_4699_string = "pt_map_viktor"; // 0x2970 PushS
	var_4700_int = 1; // 0x2971 PushI
	var_4701_int = 540031; // 0x2972 PushI
	var_4702_float = 0; // 0x2973 PushV
	func_290(var_4702_float); // 0x2974 NEW_2
	AddMark(var_4698_string, var_4699_string, var_4700_int, var_4701_int, var_4702_float); // 0x2976 ObjFunc
	return 2; // 0x2978 Return
}


func_367(var_121_int)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; // 0x16f PushV
	var_129_int = 16; // 0x170 PushI
	irand(var_126_int, var_129_int); // 0x171 Func
	var_127_int = 0; // 0x173 MovI
	
Label_372:
	var_130_int = 16; // 0x174 PushI
	var_131_bool = var_127_int < var_130_int; // 0x175 LT
	if(var_131_bool == 0) goto Label_405; // 0x176 JumpB
	var_132_int = var_127_int + var_126_int; // 0x177 Add
	var_133_int = 16; // 0x178 PushI
	var_128_int = var_132_int % var_133_int; // 0x179 Mod2
	var_134_bool = 0; // 0x17a PushV
	var_134_bool = 0; // 0x17b MovB
	var_135_bool = 0; var_136_int = 0; // 0x17c PushV
	var_136_int = var_128_int; // 0x17d Mov
	func_406(var_135_bool, var_136_int); // 0x17e NEW_2
	if(var_135_bool == 0) goto Label_392; // 0x180 JumpB
	var_144_bool = 0; var_145_int = 0; var_146_int = 0; // 0x181 PushV
	var_145_int = var_128_int; // 0x182 Mov
	var_146_int = var_121_int; // 0x183 Mov
	func_14472(var_144_bool, var_145_int, var_146_int); // 0x184 NEW_2
	if(var_144_bool == 0) goto Label_392; // 0x186 JumpB
	var_134_bool = 1; // 0x187 MovB
	
Label_392:
	if(var_134_bool == 0) goto Label_402; // 0x188 JumpB
	var_163_int = 0; // 0x189 PushV
	var_163_int = var_128_int; // 0x18a Mov
	func_448(var_163_int); // 0x18b NEW_2
	var_164_string = "Diseased Region: "; // 0x18d PushS
	var_165_int = var_164_string + var_128_int; // 0x18e Add
	Trace(var_165_int); // 0x18f Func
	return 6; // 0x191 Return
	
Label_402:
	var_166_int = 1; // 0x192 PushI
	var_127_int = var_127_int + var_166_int; // 0x193 Add2
	goto Label_372; // 0x194 Jump
	
Label_405:
	return 6; // 0x195 Return
}


func_5489(var_1342_int, var_1343_int, var_1344_object, var_1345_object, var_1346_object, var_1347_object)
{
	var_1348_int = 0; // 0x1572 PushI
	var_1349_bool = var_1343_int == var_1348_int; // 0x1573 Eq
	if(var_1349_bool == 0) goto Label_5529; // 0x1574 JumpB
	var_1350_int = 0; var_1351_bool = 0; // 0x1575 PushV
	var_1350_int = 5; // 0x1576 MovI
	var_1351_bool = 0; // 0x1577 MovB
	func_802(var_1350_int, var_1351_bool); // 0x1578 NEW_2
	var_1352_int = 0; var_1353_bool = 0; var_1354_int = 0; // 0x157a PushV
	var_1352_int = 5; // 0x157b MovI
	var_1353_bool = 0; // 0x157c MovB
	var_1354_int = 1; // 0x157d MovI
	func_819(var_1352_int, var_1353_bool, var_1354_int); // 0x157e NEW_2
	var_1355_int = 0; var_1356_int = 0; var_1357_object = Obj(); var_1358_object = Obj(); var_1359_object = Obj(); // 0x1580 PushV
	var_1355_int = 5; // 0x1581 MovI
	var_1356_int = var_1342_int; // 0x1582 Mov
	var_1357_object = var_1344_object; // 0x1583 Mov
	var_1358_object = var_1345_object; // 0x1584 Mov
	var_1359_object = var_1346_object; // 0x1585 Mov
	func_628(var_1356_int, var_1357_object, var_1358_object, var_1359_object); // 0x1586 NEW_2
	var_1360_object = Obj(); var_1361_int = 0; // 0x1588 PushV
	var_1360_object = var_1347_object; // 0x1589 Mov
	var_1361_int = 0; // 0x158a MovI
	func_311(var_1361_int); // 0x158b NEW_2
	var_1362_int = 0; var_1363_bool = 0; var_1364_int = 0; // 0x158d PushV
	var_1362_int = 5; // 0x158e MovI
	var_1363_bool = 0; // 0x158f MovB
	var_1364_int = 4; // 0x1590 MovI
	func_876(var_1362_int, var_1363_bool, var_1364_int); // 0x1591 NEW_2
	var_1365_int = 0; var_1366_bool = 0; var_1367_int = 0; // 0x1593 PushV
	var_1365_int = 5; // 0x1594 MovI
	var_1366_bool = 0; // 0x1595 MovB
	var_1367_int = 4; // 0x1596 MovI
	func_938(var_1365_int, var_1366_bool, var_1367_int); // 0x1597 NEW_2
	
Label_5529:
	var_1368_int = 0; var_1369_int = 0; // 0x1599 PushV
	var_1368_int = 5; // 0x159a MovI
	var_1369_int = var_1343_int; // 0x159b Mov
	func_989(var_1368_int, var_1369_int); // 0x159c NEW_2
	var_1370_int = 0; var_1371_int = 0; var_1372_int = 0; // 0x159e PushV
	var_1370_int = 5; // 0x159f MovI
	var_1371_int = var_1342_int; // 0x15a0 Mov
	var_1372_int = var_1343_int; // 0x15a1 Mov
	func_1903(var_1370_int, var_1371_int, var_1372_int); // 0x15a2 NEW_2
	return 0; // 0x15a4 Return
}


func_10618()
{
	var_4774_object = Obj(); var_4775_object = Obj(); // 0x297a PushV
	var_4776_object = Obj(); // 0x297b PushV
	func_12503(var_4776_object); // 0x297c NEW_2
	var_4775_object = var_4776_object; // 0x297d Mov
	var_4777_string = "d9q02GotoJulia"; // 0x297f PushS
	var_4778_string = "pt_map_julia"; // 0x2980 PushS
	var_4779_int = 0; // 0x2981 PushI
	var_4780_int = 515296; // 0x2982 PushI
	var_4781_float = 0; // 0x2983 PushV
	func_290(var_4781_float); // 0x2984 NEW_2
	AddMark(var_4777_string, var_4778_string, var_4779_int, var_4780_int, var_4781_float); // 0x2986 ObjFunc
	return 2; // 0x2988 Return
}


func_8576(var_4305_int, var_4306_int)
{
	var_4308_object = Obj(); var_4309_object = Obj(); var_4310_string = ""; var_4311_int = 0; var_4312_int = 0; var_4313_int = 0; var_4314_object = Obj(); var_4315_object = Obj(); var_4316_string = ""; var_4317_int = 0; var_4318_int = 0; var_4319_int = 0; // 0x2180 PushV
	var_4320_bool = 0; // 0x2181 PushV
	var_4320_bool = 0; // 0x2182 MovB
	var_4321_int = 5; // 0x2183 PushI
	var_4322_bool = var_4306_int == var_4321_int; // 0x2184 Eq
	if(var_4322_bool == 0) goto Label_8586; // 0x2185 JumpB
	var_4323_int = 7; // 0x2186 PushI
	var_4324_bool = var_4305_int >= var_4323_int; // 0x2187 GE
	if(var_4324_bool == 0) goto Label_8586; // 0x2188 JumpB
	var_4320_bool = 1; // 0x2189 MovB
	
Label_8586:
	if(var_4320_bool == 0) goto Label_8597; // 0x218a JumpB
	var_4325_int = 0; // 0x218b PushV
	func_12520(var_4325_int); // 0x218c NEW_2
	var_4326_int = 2; // 0x218e PushI
	var_4327_bool = var_4325_int != var_4326_int; // 0x218f Neq
	if(var_4327_bool == 0) goto Label_8596; // 0x2190 JumpB
	func_7787(); // 0x2192 NEW_2
	
Label_8596:
	goto Label_8616; // 0x2194 Jump
	
Label_8616:
	var_4374_bool = 0; // 0x21a8 PushV
	var_4374_bool = 0; // 0x21a9 MovB
	var_4375_int = 7; // 0x21aa PushI
	var_4376_bool = var_4306_int == var_4375_int; // 0x21ab Eq
	if(var_4376_bool == 0) goto Label_8625; // 0x21ac JumpB
	var_4377_int = 1; // 0x21ad PushI
	var_4378_bool = var_4305_int != var_4377_int; // 0x21ae Neq
	if(var_4378_bool == 0) goto Label_8625; // 0x21af JumpB
	var_4374_bool = 1; // 0x21b0 MovB
	
Label_8625:
	if(var_4374_bool == 0) goto Label_8629; // 0x21b1 JumpB
	var_4379_int = 100; // 0x21b2 PushI
	SendWorldWndMessage(var_4379_int); // 0x21b3 Func
	
Label_8629:
	var_4380_int = 0; // 0x21b5 PushI
	var_4381_bool = var_4306_int == var_4380_int; // 0x21b6 Eq
	if(var_4381_bool == 0) goto Label_8717; // 0x21b7 JumpB
	func_8754(); // 0x21b9 NEW_2
	func_8829(); // 0x21bc NEW_2
	var_4475_int = 6; // 0x21be PushI
	var_4476_bool = var_4305_int == var_4475_int; // 0x21bf Eq
	if(var_4476_bool == 0) goto Label_8650; // 0x21c0 JumpB
	GetMainOutdoorScene(var_4314_object); // 0x21c1 Func
	var_4477_string = "shed_corpse"; // 0x21c3 PushS
	var_4478_string = "splash_object_wo_pf.bin"; // 0x21c4 PushS
	var_4479_cvector = CVector(0.0, 0.0, 0.0); // 0x21c5 PushVec
	AddScriptedActor(var_4315_object, var_4477_string, var_4478_string, var_4314_object, var_4479_cvector); // 0x21c6 Func
	var_4315_object = 0; // 0x21c8 SetNull
	var_4314_object = 0; // 0x21c9 SetNull
	
Label_8650:
	var_4480_int = 9; // 0x21ca PushI
	var_4481_bool = var_4305_int == var_4480_int; // 0x21cb Eq
	if(var_4481_bool == 0) goto Label_8656; // 0x21cc JumpB
	func_8878(); // 0x21ce NEW_2
	
Label_8656:
	var_4495_int = 1; // 0x21d0 PushI
	var_4496_bool = var_4305_int != var_4495_int; // 0x21d1 Neq
	if(var_4496_bool == 0) goto Label_8717; // 0x21d2 JumpB
	var_4497_int = 0; // 0x21d3 PushV
	func_12520(var_4497_int); // 0x21d4 NEW_2
	var_4498_int = 1; // 0x21d6 PushI
	var_4499_bool = var_4497_int == var_4498_int; // 0x21d7 Eq
	if(var_4499_bool == 0) goto Label_8675; // 0x21d8 JumpB
	var_4500_string = "b"; // 0x21d9 PushS
	var_4501_int = 1; // 0x21da PushI
	var_4502_int = var_4305_int - var_4501_int; // 0x21db Sub
	var_4503_int = var_4500_string + var_4502_int; // 0x21dc Add
	var_4504_string = "q01"; // 0x21dd PushS
	var_4505_int = var_4503_int + var_4504_string; // 0x21de Add
	GetVariable(var_4505_int, var_4317_int); // 0x21df Func
	var_4316_string = "volonteers_burah"; // 0x21e1 MovS
	goto Label_8700; // 0x21e2 Jump
	
Label_8700:
	Trace(var_4316_string); // 0x21fc Func
	var_4506_int = 1000; // 0x21fe PushI
	var_4507_bool = var_4317_int == var_4506_int; // 0x21ff Eq
	if(var_4507_bool == 0) goto Label_8711; // 0x2200 JumpB
	var_4508_bool = 0; var_4509_string = ""; var_4510_string = ""; var_4511_string = ""; // 0x2201 PushV
	var_4509_string = var_4316_string; // 0x2202 Mov
	var_4510_string = "rescue_locked"; // 0x2203 MovS
	var_4511_string = ""; // 0x2204 MovS
	func_257(var_4508_bool, var_4509_string, var_4510_string, var_4511_string); // 0x2205 NEW_2
	
Label_8711:
	var_4515_bool = 0; var_4516_string = ""; var_4517_string = ""; var_4518_string = ""; // 0x2207 PushV
	var_4516_string = var_4316_string; // 0x2208 Mov
	var_4517_string = "update"; // 0x2209 MovS
	var_4518_string = ""; // 0x220a MovS
	func_257(var_4515_bool, var_4516_string, var_4517_string, var_4518_string); // 0x220b NEW_2
	
Label_8717:
	var_4519_bool = 0; // 0x220d PushV
	var_4519_bool = 0; // 0x220e MovB
	var_4520_int = 6; // 0x220f PushI
	var_4521_bool = var_4305_int == var_4520_int; // 0x2210 Eq
	if(var_4521_bool == 0) goto Label_8726; // 0x2211 JumpB
	var_4522_int = 0; // 0x2212 PushI
	var_4523_bool = var_4306_int == var_4522_int; // 0x2213 Eq
	if(var_4523_bool == 0) goto Label_8726; // 0x2214 JumpB
	var_4519_bool = 1; // 0x2215 MovB
	
Label_8726:
	if(var_4519_bool == 0) goto Label_8730; // 0x2216 JumpB
	func_7907(); // 0x2218 NEW_2
	
Label_8730:
	var_4526_bool = 0; // 0x221a PushV
	var_4526_bool = 0; // 0x221b MovB
	var_4527_int = 7; // 0x221c PushI
	var_4528_bool = var_4305_int == var_4527_int; // 0x221d Eq
	if(var_4528_bool == 0) goto Label_8739; // 0x221e JumpB
	var_4529_int = 0; // 0x221f PushI
	var_4530_bool = var_4306_int == var_4529_int; // 0x2220 Eq
	if(var_4530_bool == 0) goto Label_8739; // 0x2221 JumpB
	var_4526_bool = 1; // 0x2222 MovB
	
Label_8739:
	if(var_4526_bool == 0) goto Label_8753; // 0x2223 JumpB
	var_4531_object = GlobalVars[14]; // 0x2224 PushGE
	size(var_4318_int); // 0x2225 ObjFunc
	var_4319_int = 0; // 0x2227 MovI
	
Label_8744:
	var_4532_bool = var_4319_int < var_4318_int; // 0x2228 LT
	if(var_4532_bool == 0) goto Label_8753; // 0x2229 JumpB
	var_4533_int = 0; // 0x222a PushV
	var_4533_int = var_4319_int; // 0x222b Mov
	func_7614(var_4533_int); // 0x222c NEW_2
	var_4586_int = 1; // 0x222e PushI
	var_4319_int = var_4319_int + var_4586_int; // 0x222f Add2
	goto Label_8744; // 0x2230 Jump
	
Label_8753:
	return 12; // 0x2231 Return
	
Label_8675:
	var_4587_int = 0; // 0x21e3 PushV
	func_12520(var_4587_int); // 0x21e4 NEW_2
	var_4588_int = 0; // 0x21e6 PushI
	var_4589_bool = var_4587_int == var_4588_int; // 0x21e7 Eq
	if(var_4589_bool == 0) goto Label_8691; // 0x21e8 JumpB
	var_4590_string = "d"; // 0x21e9 PushS
	var_4591_int = 1; // 0x21ea PushI
	var_4592_int = var_4305_int - var_4591_int; // 0x21eb Sub
	var_4593_int = var_4590_string + var_4592_int; // 0x21ec Add
	var_4594_string = "q01"; // 0x21ed PushS
	var_4595_int = var_4593_int + var_4594_string; // 0x21ee Add
	GetVariable(var_4595_int, var_4317_int); // 0x21ef Func
	var_4316_string = "volonteers_danko"; // 0x21f1 MovS
	goto Label_8700; // 0x21f2 Jump
	
Label_8691:
	var_4596_string = "k"; // 0x21f3 PushS
	var_4597_int = 1; // 0x21f4 PushI
	var_4598_int = var_4305_int - var_4597_int; // 0x21f5 Sub
	var_4599_int = var_4596_string + var_4598_int; // 0x21f6 Add
	var_4600_string = "q01"; // 0x21f7 PushS
	var_4601_int = var_4599_int + var_4600_string; // 0x21f8 Add
	GetVariable(var_4601_int, var_4317_int); // 0x21f9 Func
	var_4316_string = "volonteers_klara"; // 0x21fb MovS
	
Label_8597:
	var_4602_bool = 0; // 0x2195 PushV
	var_4602_bool = 0; // 0x2196 MovB
	var_4603_int = 22; // 0x2197 PushI
	var_4604_bool = var_4306_int == var_4603_int; // 0x2198 Eq
	if(var_4604_bool == 0) goto Label_8606; // 0x2199 JumpB
	var_4605_int = 7; // 0x219a PushI
	var_4606_bool = var_4305_int >= var_4605_int; // 0x219b GE
	if(var_4606_bool == 0) goto Label_8606; // 0x219c JumpB
	var_4602_bool = 1; // 0x219d MovB
	
Label_8606:
	if(var_4602_bool == 0) goto Label_8616; // 0x219e JumpB
	var_4607_int = 0; // 0x219f PushV
	func_12520(var_4607_int); // 0x21a0 NEW_2
	var_4608_int = 2; // 0x21a2 PushI
	var_4609_bool = var_4607_int != var_4608_int; // 0x21a3 Neq
	if(var_4609_bool == 0) goto Label_8616; // 0x21a4 JumpB
	func_7850(); // 0x21a6 NEW_2
}


func_9607(var_3170_int, var_3171_int, var_3172_int)
{
	var_3173_object = Obj(); var_3174_object = Obj(); var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj(); var_3178_object = Obj(); var_3179_object = Obj(); var_3180_object = Obj(); // 0x2587 PushV
	var_3181_object = GlobalVars[8]; // 0x2588 PushGE
	get(var_3177_object, var_3170_int); // 0x2589 ObjFunc
	var_3182_object = GlobalVars[9]; // 0x258b PushGE
	get(var_3178_object, var_3170_int); // 0x258c ObjFunc
	var_3183_object = GlobalVars[10]; // 0x258e PushGE
	get(var_3179_object, var_3170_int); // 0x258f ObjFunc
	var_3184_object = GlobalVars[13]; // 0x2591 PushGE
	get(var_3180_object, var_3170_int); // 0x2592 ObjFunc
	var_3185_int = 0; // 0x2594 PushI
	var_3186_bool = var_3170_int == var_3185_int; // 0x2595 Eq
	if(var_3186_bool == 0) goto Label_9633; // 0x2596 JumpB
	var_3187_int = 0; var_3188_int = 0; var_3189_object = Obj(); var_3190_object = Obj(); var_3191_object = Obj(); var_3192_object = Obj(); // 0x2597 PushV
	var_3187_int = var_3171_int; // 0x2598 Mov
	var_3188_int = var_3172_int; // 0x2599 Mov
	var_3189_object = var_3177_object; // 0x259a Mov
	var_3190_object = var_3178_object; // 0x259b Mov
	var_3191_object = var_3179_object; // 0x259c Mov
	var_3192_object = var_3180_object; // 0x259d Mov
	func_4497(var_3187_int, var_3188_int, var_3189_object, var_3190_object, var_3191_object, var_3192_object); // 0x259e NEW_2
	goto Label_9827; // 0x25a0 Jump
	
Label_9827:
	return 8; // 0x2663 Return
	
Label_9633:
	var_3399_int = 1; // 0x25a1 PushI
	var_3400_bool = var_3170_int == var_3399_int; // 0x25a2 Eq
	if(var_3400_bool == 0) goto Label_9646; // 0x25a3 JumpB
	var_3401_int = 0; var_3402_int = 0; var_3403_object = Obj(); var_3404_object = Obj(); var_3405_object = Obj(); var_3406_object = Obj(); // 0x25a4 PushV
	var_3401_int = var_3171_int; // 0x25a5 Mov
	var_3402_int = var_3172_int; // 0x25a6 Mov
	var_3403_object = var_3177_object; // 0x25a7 Mov
	var_3404_object = var_3178_object; // 0x25a8 Mov
	var_3405_object = var_3179_object; // 0x25a9 Mov
	var_3406_object = var_3180_object; // 0x25aa Mov
	func_4694(var_3401_int, var_3402_int, var_3403_object, var_3404_object, var_3405_object, var_3406_object); // 0x25ab NEW_2
	goto Label_9827; // 0x25ad Jump
	
Label_9646:
	var_3535_int = 2; // 0x25ae PushI
	var_3536_bool = var_3170_int == var_3535_int; // 0x25af Eq
	if(var_3536_bool == 0) goto Label_9659; // 0x25b0 JumpB
	var_3537_int = 0; var_3538_int = 0; var_3539_object = Obj(); var_3540_object = Obj(); var_3541_object = Obj(); var_3542_object = Obj(); // 0x25b1 PushV
	var_3537_int = var_3171_int; // 0x25b2 Mov
	var_3538_int = var_3172_int; // 0x25b3 Mov
	var_3539_object = var_3177_object; // 0x25b4 Mov
	var_3540_object = var_3178_object; // 0x25b5 Mov
	var_3541_object = var_3179_object; // 0x25b6 Mov
	var_3542_object = var_3180_object; // 0x25b7 Mov
	func_4900(var_3537_int, var_3538_int, var_3539_object, var_3540_object, var_3541_object, var_3542_object); // 0x25b8 NEW_2
	goto Label_9827; // 0x25ba Jump
	
Label_9659:
	var_3678_int = 3; // 0x25bb PushI
	var_3679_bool = var_3170_int == var_3678_int; // 0x25bc Eq
	if(var_3679_bool == 0) goto Label_9672; // 0x25bd JumpB
	var_3680_int = 0; var_3681_int = 0; var_3682_object = Obj(); var_3683_object = Obj(); var_3684_object = Obj(); var_3685_object = Obj(); // 0x25be PushV
	var_3680_int = var_3171_int; // 0x25bf Mov
	var_3681_int = var_3172_int; // 0x25c0 Mov
	var_3682_object = var_3177_object; // 0x25c1 Mov
	var_3683_object = var_3178_object; // 0x25c2 Mov
	var_3684_object = var_3179_object; // 0x25c3 Mov
	var_3685_object = var_3180_object; // 0x25c4 Mov
	func_5130(var_3680_int, var_3681_int, var_3682_object, var_3683_object, var_3684_object, var_3685_object); // 0x25c5 NEW_2
	goto Label_9827; // 0x25c7 Jump
	
Label_9672:
	var_3711_int = 4; // 0x25c8 PushI
	var_3712_bool = var_3170_int == var_3711_int; // 0x25c9 Eq
	if(var_3712_bool == 0) goto Label_9685; // 0x25ca JumpB
	var_3713_int = 0; var_3714_int = 0; var_3715_object = Obj(); var_3716_object = Obj(); var_3717_object = Obj(); var_3718_object = Obj(); // 0x25cb PushV
	var_3713_int = var_3171_int; // 0x25cc Mov
	var_3714_int = var_3172_int; // 0x25cd Mov
	var_3715_object = var_3177_object; // 0x25ce Mov
	var_3716_object = var_3178_object; // 0x25cf Mov
	var_3717_object = var_3179_object; // 0x25d0 Mov
	var_3718_object = var_3180_object; // 0x25d1 Mov
	func_5348(var_3713_int, var_3714_int, var_3715_object, var_3716_object, var_3717_object, var_3718_object); // 0x25d2 NEW_2
	goto Label_9827; // 0x25d4 Jump
	
Label_9685:
	var_3744_int = 5; // 0x25d5 PushI
	var_3745_bool = var_3170_int == var_3744_int; // 0x25d6 Eq
	if(var_3745_bool == 0) goto Label_9698; // 0x25d7 JumpB
	var_3746_int = 0; var_3747_int = 0; var_3748_object = Obj(); var_3749_object = Obj(); var_3750_object = Obj(); var_3751_object = Obj(); // 0x25d8 PushV
	var_3746_int = var_3171_int; // 0x25d9 Mov
	var_3747_int = var_3172_int; // 0x25da Mov
	var_3748_object = var_3177_object; // 0x25db Mov
	var_3749_object = var_3178_object; // 0x25dc Mov
	var_3750_object = var_3179_object; // 0x25dd Mov
	var_3751_object = var_3180_object; // 0x25de Mov
	func_5593(var_3746_int, var_3747_int, var_3748_object, var_3749_object, var_3750_object, var_3751_object); // 0x25df NEW_2
	goto Label_9827; // 0x25e1 Jump
	
Label_9698:
	var_3777_int = 6; // 0x25e2 PushI
	var_3778_bool = var_3170_int == var_3777_int; // 0x25e3 Eq
	if(var_3778_bool == 0) goto Label_9711; // 0x25e4 JumpB
	var_3779_int = 0; var_3780_int = 0; var_3781_object = Obj(); var_3782_object = Obj(); var_3783_object = Obj(); var_3784_object = Obj(); // 0x25e5 PushV
	var_3779_int = var_3171_int; // 0x25e6 Mov
	var_3780_int = var_3172_int; // 0x25e7 Mov
	var_3781_object = var_3177_object; // 0x25e8 Mov
	var_3782_object = var_3178_object; // 0x25e9 Mov
	var_3783_object = var_3179_object; // 0x25ea Mov
	var_3784_object = var_3180_object; // 0x25eb Mov
	func_5661(); // 0x25ec NEW_2
	goto Label_9827; // 0x25ee Jump
	
Label_9711:
	var_3787_int = 7; // 0x25ef PushI
	var_3788_bool = var_3170_int == var_3787_int; // 0x25f0 Eq
	if(var_3788_bool == 0) goto Label_9724; // 0x25f1 JumpB
	var_3789_int = 0; var_3790_int = 0; var_3791_object = Obj(); var_3792_object = Obj(); var_3793_object = Obj(); var_3794_object = Obj(); // 0x25f2 PushV
	var_3789_int = var_3171_int; // 0x25f3 Mov
	var_3790_int = var_3172_int; // 0x25f4 Mov
	var_3791_object = var_3177_object; // 0x25f5 Mov
	var_3792_object = var_3178_object; // 0x25f6 Mov
	var_3793_object = var_3179_object; // 0x25f7 Mov
	var_3794_object = var_3180_object; // 0x25f8 Mov
	func_5816(var_3789_int, var_3790_int, var_3791_object, var_3792_object, var_3793_object, var_3794_object); // 0x25f9 NEW_2
	goto Label_9827; // 0x25fb Jump
	
Label_9724:
	var_3930_int = 8; // 0x25fc PushI
	var_3931_bool = var_3170_int == var_3930_int; // 0x25fd Eq
	if(var_3931_bool == 0) goto Label_9737; // 0x25fe JumpB
	var_3932_int = 0; var_3933_int = 0; var_3934_object = Obj(); var_3935_object = Obj(); var_3936_object = Obj(); var_3937_object = Obj(); // 0x25ff PushV
	var_3932_int = var_3171_int; // 0x2600 Mov
	var_3933_int = var_3172_int; // 0x2601 Mov
	var_3934_object = var_3177_object; // 0x2602 Mov
	var_3935_object = var_3178_object; // 0x2603 Mov
	var_3936_object = var_3179_object; // 0x2604 Mov
	var_3937_object = var_3180_object; // 0x2605 Mov
	func_6016(var_3932_int, var_3933_int, var_3934_object, var_3935_object, var_3936_object, var_3937_object); // 0x2606 NEW_2
	goto Label_9827; // 0x2608 Jump
	
Label_9737:
	var_3963_int = 9; // 0x2609 PushI
	var_3964_bool = var_3170_int == var_3963_int; // 0x260a Eq
	if(var_3964_bool == 0) goto Label_9750; // 0x260b JumpB
	var_3965_int = 0; var_3966_int = 0; var_3967_object = Obj(); var_3968_object = Obj(); var_3969_object = Obj(); var_3970_object = Obj(); // 0x260c PushV
	var_3965_int = var_3171_int; // 0x260d Mov
	var_3966_int = var_3172_int; // 0x260e Mov
	var_3967_object = var_3177_object; // 0x260f Mov
	var_3968_object = var_3178_object; // 0x2610 Mov
	var_3969_object = var_3179_object; // 0x2611 Mov
	var_3970_object = var_3180_object; // 0x2612 Mov
	func_6219(var_3965_int, var_3966_int, var_3967_object, var_3968_object, var_3969_object, var_3970_object); // 0x2613 NEW_2
	goto Label_9827; // 0x2615 Jump
	
Label_9750:
	var_3996_int = 10; // 0x2616 PushI
	var_3997_bool = var_3170_int == var_3996_int; // 0x2617 Eq
	if(var_3997_bool == 0) goto Label_9763; // 0x2618 JumpB
	var_3998_int = 0; var_3999_int = 0; var_4000_object = Obj(); var_4001_object = Obj(); var_4002_object = Obj(); var_4003_object = Obj(); // 0x2619 PushV
	var_3998_int = var_3171_int; // 0x261a Mov
	var_3999_int = var_3172_int; // 0x261b Mov
	var_4000_object = var_3177_object; // 0x261c Mov
	var_4001_object = var_3178_object; // 0x261d Mov
	var_4002_object = var_3179_object; // 0x261e Mov
	var_4003_object = var_3180_object; // 0x261f Mov
	func_6428(var_3998_int, var_3999_int, var_4000_object, var_4001_object, var_4002_object, var_4003_object); // 0x2620 NEW_2
	goto Label_9827; // 0x2622 Jump
	
Label_9763:
	var_4029_int = 11; // 0x2623 PushI
	var_4030_bool = var_3170_int == var_4029_int; // 0x2624 Eq
	if(var_4030_bool == 0) goto Label_9776; // 0x2625 JumpB
	var_4031_int = 0; var_4032_int = 0; var_4033_object = Obj(); var_4034_object = Obj(); var_4035_object = Obj(); var_4036_object = Obj(); // 0x2626 PushV
	var_4031_int = var_3171_int; // 0x2627 Mov
	var_4032_int = var_3172_int; // 0x2628 Mov
	var_4033_object = var_3177_object; // 0x2629 Mov
	var_4034_object = var_3178_object; // 0x262a Mov
	var_4035_object = var_3179_object; // 0x262b Mov
	var_4036_object = var_3180_object; // 0x262c Mov
	func_6640(var_4031_int, var_4032_int, var_4033_object, var_4034_object, var_4035_object, var_4036_object); // 0x262d NEW_2
	goto Label_9827; // 0x262f Jump
	
Label_9776:
	var_4062_int = 12; // 0x2630 PushI
	var_4063_bool = var_3170_int == var_4062_int; // 0x2631 Eq
	if(var_4063_bool == 0) goto Label_9789; // 0x2632 JumpB
	var_4064_int = 0; var_4065_int = 0; var_4066_object = Obj(); var_4067_object = Obj(); var_4068_object = Obj(); var_4069_object = Obj(); // 0x2633 PushV
	var_4064_int = var_3171_int; // 0x2634 Mov
	var_4065_int = var_3172_int; // 0x2635 Mov
	var_4066_object = var_3177_object; // 0x2636 Mov
	var_4067_object = var_3178_object; // 0x2637 Mov
	var_4068_object = var_3179_object; // 0x2638 Mov
	var_4069_object = var_3180_object; // 0x2639 Mov
	func_6837(var_4064_int, var_4065_int, var_4066_object, var_4067_object, var_4068_object, var_4069_object); // 0x263a NEW_2
	goto Label_9827; // 0x263c Jump
	
Label_9789:
	var_4095_int = 13; // 0x263d PushI
	var_4096_bool = var_3170_int == var_4095_int; // 0x263e Eq
	if(var_4096_bool == 0) goto Label_9802; // 0x263f JumpB
	var_4097_int = 0; var_4098_int = 0; var_4099_object = Obj(); var_4100_object = Obj(); var_4101_object = Obj(); var_4102_object = Obj(); // 0x2640 PushV
	var_4097_int = var_3171_int; // 0x2641 Mov
	var_4098_int = var_3172_int; // 0x2642 Mov
	var_4099_object = var_3177_object; // 0x2643 Mov
	var_4100_object = var_3178_object; // 0x2644 Mov
	var_4101_object = var_3179_object; // 0x2645 Mov
	var_4102_object = var_3180_object; // 0x2646 Mov
	func_7040(var_4097_int, var_4098_int, var_4099_object, var_4100_object, var_4101_object, var_4102_object); // 0x2647 NEW_2
	goto Label_9827; // 0x2649 Jump
	
Label_9802:
	var_4128_int = 14; // 0x264a PushI
	var_4129_bool = var_3170_int == var_4128_int; // 0x264b Eq
	if(var_4129_bool == 0) goto Label_9815; // 0x264c JumpB
	var_4130_int = 0; var_4131_int = 0; var_4132_object = Obj(); var_4133_object = Obj(); var_4134_object = Obj(); var_4135_object = Obj(); // 0x264d PushV
	var_4130_int = var_3171_int; // 0x264e Mov
	var_4131_int = var_3172_int; // 0x264f Mov
	var_4132_object = var_3177_object; // 0x2650 Mov
	var_4133_object = var_3178_object; // 0x2651 Mov
	var_4134_object = var_3179_object; // 0x2652 Mov
	var_4135_object = var_3180_object; // 0x2653 Mov
	func_7240(var_4130_int, var_4131_int, var_4132_object, var_4133_object, var_4134_object, var_4135_object); // 0x2654 NEW_2
	goto Label_9827; // 0x2656 Jump
	
Label_9815:
	var_4271_int = 15; // 0x2657 PushI
	var_4272_bool = var_3170_int == var_4271_int; // 0x2658 Eq
	if(var_4272_bool == 0) goto Label_9827; // 0x2659 JumpB
	var_4273_int = 0; var_4274_int = 0; var_4275_object = Obj(); var_4276_object = Obj(); var_4277_object = Obj(); var_4278_object = Obj(); // 0x265a PushV
	var_4273_int = var_3171_int; // 0x265b Mov
	var_4274_int = var_3172_int; // 0x265c Mov
	var_4275_object = var_3177_object; // 0x265d Mov
	var_4276_object = var_3178_object; // 0x265e Mov
	var_4277_object = var_3179_object; // 0x265f Mov
	var_4278_object = var_3180_object; // 0x2660 Mov
	func_7422(var_4273_int, var_4274_int, var_4275_object, var_4276_object, var_4277_object, var_4278_object); // 0x2661 NEW_2
}


func_6536(var_1671_int, var_1672_int, var_1673_object, var_1674_object, var_1675_object, var_1676_object)
{
	var_1677_int = 0; // 0x1989 PushI
	var_1678_bool = var_1672_int == var_1677_int; // 0x198a Eq
	if(var_1678_bool == 0) goto Label_6576; // 0x198b JumpB
	var_1679_int = 0; var_1680_bool = 0; // 0x198c PushV
	var_1679_int = 11; // 0x198d MovI
	var_1680_bool = 0; // 0x198e MovB
	func_802(var_1679_int, var_1680_bool); // 0x198f NEW_2
	var_1681_int = 0; var_1682_bool = 0; var_1683_int = 0; // 0x1991 PushV
	var_1681_int = 11; // 0x1992 MovI
	var_1682_bool = 0; // 0x1993 MovB
	var_1683_int = 1; // 0x1994 MovI
	func_819(var_1681_int, var_1682_bool, var_1683_int); // 0x1995 NEW_2
	var_1684_int = 0; var_1685_int = 0; var_1686_object = Obj(); var_1687_object = Obj(); var_1688_object = Obj(); // 0x1997 PushV
	var_1684_int = 11; // 0x1998 MovI
	var_1685_int = var_1671_int; // 0x1999 Mov
	var_1686_object = var_1673_object; // 0x199a Mov
	var_1687_object = var_1674_object; // 0x199b Mov
	var_1688_object = var_1675_object; // 0x199c Mov
	func_628(var_1685_int, var_1686_object, var_1687_object, var_1688_object); // 0x199d NEW_2
	var_1689_object = Obj(); var_1690_int = 0; // 0x199f PushV
	var_1689_object = var_1676_object; // 0x19a0 Mov
	var_1690_int = 0; // 0x19a1 MovI
	func_311(var_1690_int); // 0x19a2 NEW_2
	var_1691_int = 0; var_1692_bool = 0; var_1693_int = 0; // 0x19a4 PushV
	var_1691_int = 11; // 0x19a5 MovI
	var_1692_bool = 0; // 0x19a6 MovB
	var_1693_int = 5; // 0x19a7 MovI
	func_876(var_1691_int, var_1692_bool, var_1693_int); // 0x19a8 NEW_2
	var_1694_int = 0; var_1695_bool = 0; var_1696_int = 0; // 0x19aa PushV
	var_1694_int = 11; // 0x19ab MovI
	var_1695_bool = 0; // 0x19ac MovB
	var_1696_int = 5; // 0x19ad MovI
	func_938(var_1694_int, var_1695_bool, var_1696_int); // 0x19ae NEW_2
	
Label_6576:
	var_1697_int = 0; var_1698_int = 0; // 0x19b0 PushV
	var_1697_int = 11; // 0x19b1 MovI
	var_1698_int = var_1672_int; // 0x19b2 Mov
	func_989(var_1697_int, var_1698_int); // 0x19b3 NEW_2
	var_1699_int = 0; var_1700_int = 0; var_1701_int = 0; // 0x19b5 PushV
	var_1699_int = 11; // 0x19b6 MovI
	var_1700_int = var_1671_int; // 0x19b7 Mov
	var_1701_int = var_1672_int; // 0x19b8 Mov
	func_1630(var_1699_int, var_1700_int, var_1701_int); // 0x19b9 NEW_2
	return 0; // 0x19bb Return
}


func_10634()
{
	var_5144_object = Obj(); var_5145_object = Obj(); // 0x298a PushV
	var_5146_object = Obj(); // 0x298b PushV
	func_12503(var_5146_object); // 0x298c NEW_2
	var_5145_object = var_5146_object; // 0x298d Mov
	var_5147_string = "d9q03GotoLara"; // 0x298f PushS
	var_5148_string = "pt_map_lara"; // 0x2990 PushS
	var_5149_int = 0; // 0x2991 PushI
	var_5150_int = 515294; // 0x2992 PushI
	var_5151_float = 0; // 0x2993 PushV
	func_290(var_5151_float); // 0x2994 NEW_2
	AddMark(var_5147_string, var_5148_string, var_5149_int, var_5150_int, var_5151_float); // 0x2996 ObjFunc
	return 2; // 0x2998 Return
}


func_14735(var_4306_int)
{
	var_4307_object = Obj(); var_4308_object = Obj(); var_4309_object = Obj(); var_4310_object = Obj(); var_4311_object = Obj(); var_4312_object = Obj(); var_4313_object = Obj(); var_4314_object = Obj(); var_4315_object = Obj(); var_4316_object = Obj(); var_4317_object = Obj(); var_4318_object = Obj(); var_4319_object = Obj(); var_4320_object = Obj(); var_4321_object = Obj(); var_4322_object = Obj(); var_4323_object = Obj(); var_4324_object = Obj(); // 0x398f PushV
	var_4325_int = 1; // 0x3990 PushI
	var_4326_bool = var_4306_int == var_4325_int; // 0x3991 Eq
	if(var_4326_bool == 0) goto Label_14750; // 0x3992 JumpB
	var_4327_string = "Special diseased house: r4_house_2_02"; // 0x3993 PushS
	Trace(var_4327_string); // 0x3994 Func
	var_4328_string = "r4_house_2_02"; // 0x3996 PushS
	GetSceneByName(var_4316_object, var_4328_string); // 0x3997 Func
	var_4329_string = "s_r4_house_2_02.isc"; // 0x3999 PushS
	ReplaceScene(var_4316_object, var_4329_string); // 0x399a Func
	var_4316_object = 0; // 0x399c SetNull
	goto Label_14855; // 0x399d Jump
	
Label_14855:
	return 18; // 0x3a07 Return
	
Label_14750:
	var_4330_int = 2; // 0x399e PushI
	var_4331_bool = var_4306_int == var_4330_int; // 0x399f Eq
	if(var_4331_bool == 0) goto Label_14764; // 0x39a0 JumpB
	var_4332_string = "Special house: r7_house2_01"; // 0x39a1 PushS
	Trace(var_4332_string); // 0x39a2 Func
	var_4333_string = "r7_house2_01"; // 0x39a4 PushS
	GetSceneByName(var_4317_object, var_4333_string); // 0x39a5 Func
	var_4334_string = "r7_house2_01_d3q02.isc"; // 0x39a7 PushS
	ReplaceScene(var_4317_object, var_4334_string); // 0x39a8 Func
	var_4317_object = 0; // 0x39aa SetNull
	goto Label_14855; // 0x39ab Jump
	
Label_14764:
	var_4335_int = 3; // 0x39ac PushI
	var_4336_bool = var_4306_int == var_4335_int; // 0x39ad Eq
	if(var_4336_bool == 0) goto Label_14778; // 0x39ae JumpB
	var_4337_string = "Special diseased house: house7_03"; // 0x39af PushS
	Trace(var_4337_string); // 0x39b0 Func
	var_4338_string = "house7_03"; // 0x39b2 PushS
	GetSceneByName(var_4318_object, var_4338_string); // 0x39b3 Func
	var_4339_string = "s_house7_03.isc"; // 0x39b5 PushS
	ReplaceScene(var_4318_object, var_4339_string); // 0x39b6 Func
	var_4318_object = 0; // 0x39b8 SetNull
	goto Label_14855; // 0x39b9 Jump
	
Label_14778:
	var_4340_int = 4; // 0x39ba PushI
	var_4341_bool = var_4306_int == var_4340_int; // 0x39bb Eq
	if(var_4341_bool == 0) goto Label_14789; // 0x39bc JumpB
	var_4342_string = "theater"; // 0x39bd PushS
	GetSceneByName(var_4319_object, var_4342_string); // 0x39be Func
	var_4343_string = "dtheater_danko.isc"; // 0x39c0 PushS
	ReplaceScene(var_4319_object, var_4343_string); // 0x39c1 Func
	var_4319_object = 0; // 0x39c3 SetNull
	goto Label_14855; // 0x39c4 Jump
	
Label_14789:
	var_4344_int = 5; // 0x39c5 PushI
	var_4345_bool = var_4306_int == var_4344_int; // 0x39c6 Eq
	if(var_4345_bool == 0) goto Label_14803; // 0x39c7 JumpB
	var_4346_string = "Special house: sobor (with corpses)"; // 0x39c8 PushS
	Trace(var_4346_string); // 0x39c9 Func
	var_4347_string = "sobor"; // 0x39cb PushS
	GetSceneByName(var_4320_object, var_4347_string); // 0x39cc Func
	var_4348_string = "sobor_trup.isc"; // 0x39ce PushS
	ReplaceScene(var_4320_object, var_4348_string); // 0x39cf Func
	var_4320_object = 0; // 0x39d1 SetNull
	goto Label_14855; // 0x39d2 Jump
	
Label_14803:
	var_4349_int = 6; // 0x39d3 PushI
	var_4350_bool = var_4306_int == var_4349_int; // 0x39d4 Eq
	if(var_4350_bool == 0) goto Label_14817; // 0x39d5 JumpB
	var_4351_string = "Special house: sobor (normal)"; // 0x39d6 PushS
	Trace(var_4351_string); // 0x39d7 Func
	var_4352_string = "sobor"; // 0x39d9 PushS
	GetSceneByName(var_4321_object, var_4352_string); // 0x39da Func
	var_4353_string = "sobor_danko.isc"; // 0x39dc PushS
	ReplaceScene(var_4321_object, var_4353_string); // 0x39dd Func
	var_4321_object = 0; // 0x39df SetNull
	goto Label_14855; // 0x39e0 Jump
	
Label_14817:
	var_4354_int = 7; // 0x39e1 PushI
	var_4355_bool = var_4306_int == var_4354_int; // 0x39e2 Eq
	if(var_4355_bool == 0) goto Label_14831; // 0x39e3 JumpB
	var_4356_string = "Special diseased house: r4_house_2_02"; // 0x39e4 PushS
	Trace(var_4356_string); // 0x39e5 Func
	var_4357_string = "r4_house_2_02"; // 0x39e7 PushS
	GetSceneByName(var_4322_object, var_4357_string); // 0x39e8 Func
	var_4358_string = "s_r4_house_2_02.isc"; // 0x39ea PushS
	ReplaceScene(var_4322_object, var_4358_string); // 0x39eb Func
	var_4322_object = 0; // 0x39ed SetNull
	goto Label_14855; // 0x39ee Jump
	
Label_14831:
	var_4359_int = 8; // 0x39ef PushI
	var_4360_bool = var_4306_int == var_4359_int; // 0x39f0 Eq
	if(var_4360_bool == 0) goto Label_14845; // 0x39f1 JumpB
	var_4361_string = "Special replaced house: uprava_admin"; // 0x39f2 PushS
	Trace(var_4361_string); // 0x39f3 Func
	var_4362_string = "uprava_admin"; // 0x39f5 PushS
	GetSceneByName(var_4323_object, var_4362_string); // 0x39f6 Func
	var_4363_string = "uprava_admin_army_danko.isc"; // 0x39f8 PushS
	ReplaceScene(var_4323_object, var_4363_string); // 0x39f9 Func
	var_4323_object = 0; // 0x39fb SetNull
	goto Label_14855; // 0x39fc Jump
	
Label_14845:
	var_4364_int = 11; // 0x39fd PushI
	var_4365_bool = var_4306_int == var_4364_int; // 0x39fe Eq
	if(var_4365_bool == 0) goto Label_14855; // 0x39ff JumpB
	var_4366_string = "theater"; // 0x3a00 PushS
	GetSceneByName(var_4324_object, var_4366_string); // 0x3a01 Func
	var_4367_string = "theater_danko.isc"; // 0x3a03 PushS
	ReplaceScene(var_4324_object, var_4367_string); // 0x3a04 Func
	var_4324_object = 0; // 0x3a06 SetNull
}


func_4497(var_3187_int, var_3188_int, var_3189_object, var_3190_object, var_3191_object, var_3192_object)
{
	var_3193_int = 0; // 0x1192 PushI
	var_3194_bool = var_3188_int == var_3193_int; // 0x1193 Eq
	if(var_3194_bool == 0) goto Label_4537; // 0x1194 JumpB
	var_3195_int = 0; var_3196_bool = 0; // 0x1195 PushV
	var_3195_int = 0; // 0x1196 MovI
	var_3196_bool = 0; // 0x1197 MovB
	func_802(var_3195_int, var_3196_bool); // 0x1198 NEW_2
	var_3197_int = 0; var_3198_bool = 0; var_3199_int = 0; // 0x119a PushV
	var_3197_int = 0; // 0x119b MovI
	var_3198_bool = 0; // 0x119c MovB
	var_3199_int = 1; // 0x119d MovI
	func_819(var_3197_int, var_3198_bool, var_3199_int); // 0x119e NEW_2
	var_3200_int = 0; var_3201_int = 0; var_3202_object = Obj(); var_3203_object = Obj(); var_3204_object = Obj(); // 0x11a0 PushV
	var_3200_int = 0; // 0x11a1 MovI
	var_3201_int = var_3187_int; // 0x11a2 Mov
	var_3202_object = var_3189_object; // 0x11a3 Mov
	var_3203_object = var_3190_object; // 0x11a4 Mov
	var_3204_object = var_3191_object; // 0x11a5 Mov
	func_726(var_3200_int, var_3201_int, var_3202_object, var_3203_object, var_3204_object); // 0x11a6 NEW_2
	var_3239_object = Obj(); var_3240_int = 0; // 0x11a8 PushV
	var_3239_object = var_3192_object; // 0x11a9 Mov
	var_3240_int = 2; // 0x11aa MovI
	func_311(var_3240_int); // 0x11ab NEW_2
	var_3241_int = 0; var_3242_bool = 0; var_3243_int = 0; // 0x11ad PushV
	var_3241_int = 0; // 0x11ae MovI
	var_3242_bool = 0; // 0x11af MovB
	var_3243_int = 4; // 0x11b0 MovI
	func_876(var_3241_int, var_3242_bool, var_3243_int); // 0x11b1 NEW_2
	var_3244_int = 0; var_3245_bool = 0; var_3246_int = 0; // 0x11b3 PushV
	var_3244_int = 0; // 0x11b4 MovI
	var_3245_bool = 1; // 0x11b5 MovB
	var_3246_int = 4; // 0x11b6 MovI
	func_938(var_3244_int, var_3245_bool, var_3246_int); // 0x11b7 NEW_2
	
Label_4537:
	var_3247_int = 0; var_3248_bool = 0; // 0x11b9 PushV
	var_3247_int = 0; // 0x11ba MovI
	var_3248_bool = 0; // 0x11bb MovB
	func_785(var_3247_int, var_3248_bool); // 0x11bc NEW_2
	var_3249_int = 0; var_3250_int = 0; var_3251_int = 0; // 0x11be PushV
	var_3249_int = 0; // 0x11bf MovI
	var_3250_int = var_3187_int; // 0x11c0 Mov
	var_3251_int = var_3188_int; // 0x11c1 Mov
	func_4041(var_3249_int, var_3250_int, var_3251_int); // 0x11c2 NEW_2
	return 0; // 0x11c4 Return
}


func_3477(var_4158_int, var_4159_int, var_4160_int)
{
	var_4161_int = 0; var_4162_int = 0; var_4163_int = 0; var_4164_int = 0; var_4165_int = 0; var_4166_int = 0; var_4167_int = 0; var_4168_int = 0; // 0xd95 PushV
	var_4169_bool = 0; // 0xd96 PushV
	var_4169_bool = 0; // 0xd97 MovB
	var_4170_int = 8; // 0xd98 PushI
	var_4171_bool = var_4160_int > var_4170_int; // 0xd99 GT
	if(var_4171_bool == 0) goto Label_3487; // 0xd9a JumpB
	var_4172_int = 21; // 0xd9b PushI
	var_4173_bool = var_4160_int < var_4172_int; // 0xd9c LT
	if(var_4173_bool == 0) goto Label_3487; // 0xd9d JumpB
	var_4169_bool = 1; // 0xd9e MovB
	
Label_3487:
	if(var_4169_bool == 0) goto Label_3564; // 0xd9f JumpB
	var_4174_int = 0; var_4175_string = ""; var_4176_string = ""; var_4177_int = 0; // 0xda0 PushV
	var_4174_int = var_4158_int; // 0xda1 Mov
	var_4175_string = "pers_rat"; // 0xda2 MovS
	var_4176_string = "rat.xml"; // 0xda3 MovS
	var_4177_int = 3; // 0xda4 MovI
	func_509(var_4174_int, var_4175_string, var_4176_string, var_4177_int); // 0xda5 NEW_2
	var_4178_int = 0; var_4179_string = ""; var_4180_string = ""; var_4181_int = 0; // 0xda7 PushV
	var_4178_int = var_4158_int; // 0xda8 Mov
	var_4179_string = "pers_alkash"; // 0xda9 MovS
	var_4180_string = "alkash.xml"; // 0xdaa MovS
	var_4181_int = 2; // 0xdab MovI
	func_509(var_4178_int, var_4179_string, var_4180_string, var_4181_int); // 0xdac NEW_2
	var_4182_int = 0; var_4183_string = ""; var_4184_string = ""; var_4185_int = 0; // 0xdae PushV
	var_4182_int = var_4158_int; // 0xdaf Mov
	var_4183_string = "pers_dohodyaga"; // 0xdb0 MovS
	var_4184_string = "dohodyaga.xml"; // 0xdb1 MovS
	var_4185_int = 1; // 0xdb2 MovI
	func_509(var_4182_int, var_4183_string, var_4184_string, var_4185_int); // 0xdb3 NEW_2
	var_4186_int = 2; // 0xdb5 PushI
	var_4187_float = 0; var_4188_int = 0; // 0xdb6 PushV
	var_4188_int = var_4159_int; // 0xdb7 Mov
	func_1171(var_4187_float, var_4188_int); // 0xdb8 NEW_2
	var_4165_int = var_4186_int * var_4187_float; // 0xdba Mult2
	var_4189_int = var_4165_int; // 0xdbb Push
	if(var_4189_int == 0) goto Label_3524; // 0xdbc JumpB
	var_4190_int = 0; var_4191_string = ""; var_4192_string = ""; var_4193_int = 0; // 0xdbd PushV
	var_4190_int = var_4158_int; // 0xdbe Mov
	var_4191_string = "pers_grabitel"; // 0xdbf MovS
	var_4192_string = "grabitel.xml"; // 0xdc0 MovS
	var_4193_int = var_4165_int; // 0xdc1 Mov
	func_509(var_4190_int, var_4191_string, var_4192_string, var_4193_int); // 0xdc2 NEW_2
	
Label_3524:
	var_4194_int = 1; // 0xdc4 PushI
	var_4195_int = var_4159_int + var_4194_int; // 0xdc5 Add
	var_4196_int = 2; // 0xdc6 PushI
	var_4197_bool = var_4195_int >= var_4196_int; // 0xdc7 GE
	if(var_4197_bool == 0) goto Label_3548; // 0xdc8 JumpB
	var_4198_int = 0; var_4199_string = ""; var_4200_string = ""; var_4201_int = 0; // 0xdc9 PushV
	var_4198_int = var_4158_int; // 0xdca Mov
	var_4199_string = "pers_patrool"; // 0xdcb MovS
	var_4200_string = "patrol.xml"; // 0xdcc MovS
	var_4201_int = 2; // 0xdcd MovI
	func_509(var_4198_int, var_4199_string, var_4200_string, var_4201_int); // 0xdce NEW_2
	var_4202_bool = 0; var_4203_int = 0; // 0xdd0 PushV
	var_4203_int = var_4159_int; // 0xdd1 Mov
	func_1378(var_4202_bool, var_4203_int); // 0xdd2 NEW_2
	if(var_4202_bool == 0) goto Label_3548; // 0xdd4 JumpB
	var_4204_int = 0; var_4205_string = ""; var_4206_string = ""; var_4207_int = 0; // 0xdd5 PushV
	var_4204_int = var_4158_int; // 0xdd6 Mov
	var_4205_string = "pers_soldat_hand"; // 0xdd7 MovS
	var_4206_string = "soldier_patrol.xml"; // 0xdd8 MovS
	var_4207_int = 1; // 0xdd9 MovI
	func_509(var_4204_int, var_4205_string, var_4206_string, var_4207_int); // 0xdda NEW_2
	
Label_3548:
	var_4208_int = 1; // 0xddc PushI
	var_4209_float = 0; var_4210_int = 0; // 0xddd PushV
	var_4210_int = var_4159_int; // 0xdde Mov
	func_1261(var_4209_float, var_4210_int); // 0xddf NEW_2
	var_4166_int = var_4208_int * var_4209_float; // 0xde1 Mult2
	var_4211_int = var_4166_int; // 0xde2 Push
	if(var_4211_int == 0) goto Label_3563; // 0xde3 JumpB
	var_4212_int = 0; var_4213_string = ""; var_4214_string = ""; var_4215_int = 0; // 0xde4 PushV
	var_4212_int = var_4158_int; // 0xde5 Mov
	var_4213_string = "pers_bomber"; // 0xde6 MovS
	var_4214_string = "bomber.xml"; // 0xde7 MovS
	var_4215_int = var_4166_int; // 0xde8 Mov
	func_509(var_4212_int, var_4213_string, var_4214_string, var_4215_int); // 0xde9 NEW_2
	
Label_3563:
	goto Label_3639; // 0xdeb Jump
	
Label_3639:
	var_4216_bool = 0; var_4217_int = 0; var_4218_int = 0; // 0xe37 PushV
	var_4217_int = var_4159_int; // 0xe38 Mov
	var_4218_int = var_4160_int; // 0xe39 Mov
	func_1351(var_4216_bool, var_4217_int, var_4218_int); // 0xe3a NEW_2
	if(var_4216_bool == 0) goto Label_3652; // 0xe3c JumpB
	var_4219_int = 0; var_4220_string = ""; var_4221_string = ""; var_4222_int = 0; // 0xe3d PushV
	var_4219_int = var_4158_int; // 0xe3e Mov
	var_4220_string = "pers_soldat"; // 0xe3f MovS
	var_4221_string = "soldier_marauder.xml"; // 0xe40 MovS
	var_4222_int = 2; // 0xe41 MovI
	func_509(var_4219_int, var_4220_string, var_4221_string, var_4222_int); // 0xe42 NEW_2
	
Label_3652:
	var_4223_bool = 0; var_4224_int = 0; // 0xe44 PushV
	var_4224_int = var_4159_int; // 0xe45 Mov
	func_1378(var_4223_bool, var_4224_int); // 0xe46 NEW_2
	if(var_4223_bool == 0) goto Label_3664; // 0xe48 JumpB
	var_4225_int = 0; var_4226_string = ""; var_4227_string = ""; var_4228_int = 0; // 0xe49 PushV
	var_4225_int = var_4158_int; // 0xe4a Mov
	var_4226_string = "pers_sanitar"; // 0xe4b MovS
	var_4227_string = "sanitar.xml"; // 0xe4c MovS
	var_4228_int = 1; // 0xe4d MovI
	func_509(var_4225_int, var_4226_string, var_4227_string, var_4228_int); // 0xe4e NEW_2
	
Label_3664:
	return 8; // 0xe50 Return
	
Label_3564:
	var_4229_int = 0; var_4230_string = ""; var_4231_string = ""; var_4232_int = 0; // 0xdec PushV
	var_4229_int = var_4158_int; // 0xded Mov
	var_4230_string = "pers_rat"; // 0xdee MovS
	var_4231_string = "rat.xml"; // 0xdef MovS
	var_4232_int = 5; // 0xdf0 MovI
	func_509(var_4229_int, var_4230_string, var_4231_string, var_4232_int); // 0xdf1 NEW_2
	var_4233_int = 0; var_4234_string = ""; var_4235_string = ""; var_4236_int = 0; // 0xdf3 PushV
	var_4233_int = var_4158_int; // 0xdf4 Mov
	var_4234_string = "pers_alkash"; // 0xdf5 MovS
	var_4235_string = "alkash.xml"; // 0xdf6 MovS
	var_4236_int = 1; // 0xdf7 MovI
	func_509(var_4233_int, var_4234_string, var_4235_string, var_4236_int); // 0xdf8 NEW_2
	var_4237_int = 1; // 0xdfa PushI
	var_4238_int = var_4159_int + var_4237_int; // 0xdfb Add
	var_4239_int = 2; // 0xdfc PushI
	var_4240_bool = var_4238_int >= var_4239_int; // 0xdfd GE
	if(var_4240_bool == 0) goto Label_3602; // 0xdfe JumpB
	var_4241_int = 0; var_4242_string = ""; var_4243_string = ""; var_4244_int = 0; // 0xdff PushV
	var_4241_int = var_4158_int; // 0xe00 Mov
	var_4242_string = "pers_patrool"; // 0xe01 MovS
	var_4243_string = "patrol.xml"; // 0xe02 MovS
	var_4244_int = 1; // 0xe03 MovI
	func_509(var_4241_int, var_4242_string, var_4243_string, var_4244_int); // 0xe04 NEW_2
	var_4245_bool = 0; var_4246_int = 0; // 0xe06 PushV
	var_4246_int = var_4159_int; // 0xe07 Mov
	func_1378(var_4245_bool, var_4246_int); // 0xe08 NEW_2
	if(var_4245_bool == 0) goto Label_3602; // 0xe0a JumpB
	var_4247_int = 0; var_4248_string = ""; var_4249_string = ""; var_4250_int = 0; // 0xe0b PushV
	var_4247_int = var_4158_int; // 0xe0c Mov
	var_4248_string = "pers_soldat_hand"; // 0xe0d MovS
	var_4249_string = "soldier_patrol.xml"; // 0xe0e MovS
	var_4250_int = 1; // 0xe0f MovI
	func_509(var_4247_int, var_4248_string, var_4249_string, var_4250_int); // 0xe10 NEW_2
	
Label_3602:
	var_4251_int = 0; var_4252_string = ""; var_4253_string = ""; var_4254_int = 0; // 0xe12 PushV
	var_4251_int = var_4158_int; // 0xe13 Mov
	var_4252_string = "pers_rat"; // 0xe14 MovS
	var_4253_string = "rat.xml"; // 0xe15 MovS
	var_4254_int = 2; // 0xe16 MovI
	func_509(var_4251_int, var_4252_string, var_4253_string, var_4254_int); // 0xe17 NEW_2
	var_4255_int = 3; // 0xe19 PushI
	var_4256_float = 0; var_4257_int = 0; // 0xe1a PushV
	var_4257_int = var_4159_int; // 0xe1b Mov
	func_1171(var_4256_float, var_4257_int); // 0xe1c NEW_2
	var_4167_int = var_4255_int * var_4256_float; // 0xe1e Mult2
	var_4258_int = var_4167_int; // 0xe1f Push
	if(var_4258_int == 0) goto Label_3624; // 0xe20 JumpB
	var_4259_int = 0; var_4260_string = ""; var_4261_string = ""; var_4262_int = 0; // 0xe21 PushV
	var_4259_int = var_4158_int; // 0xe22 Mov
	var_4260_string = "pers_grabitel"; // 0xe23 MovS
	var_4261_string = "grabitel.xml"; // 0xe24 MovS
	var_4262_int = var_4167_int; // 0xe25 Mov
	func_509(var_4259_int, var_4260_string, var_4261_string, var_4262_int); // 0xe26 NEW_2
	
Label_3624:
	var_4263_int = 1; // 0xe28 PushI
	var_4264_float = 0; var_4265_int = 0; // 0xe29 PushV
	var_4265_int = var_4159_int; // 0xe2a Mov
	func_1261(var_4264_float, var_4265_int); // 0xe2b NEW_2
	var_4168_int = var_4263_int * var_4264_float; // 0xe2d Mult2
	var_4266_int = var_4168_int; // 0xe2e Push
	if(var_4266_int == 0) goto Label_3639; // 0xe2f JumpB
	var_4267_int = 0; var_4268_string = ""; var_4269_string = ""; var_4270_int = 0; // 0xe30 PushV
	var_4267_int = var_4158_int; // 0xe31 Mov
	var_4268_string = "pers_bomber"; // 0xe32 MovS
	var_4269_string = "bomber.xml"; // 0xe33 MovS
	var_4270_int = var_4168_int; // 0xe34 Mov
	func_509(var_4267_int, var_4268_string, var_4269_string, var_4270_int); // 0xe35 NEW_2
}


func_406(var_493_bool, var_494_int)
{
	var_495_int = 0; var_496_int = 0; // 0x196 PushV
	var_497_string = ""; var_498_int = 0; // 0x197 PushV
	var_498_int = var_494_int; // 0x198 Mov
	func_305(var_497_string, var_498_int); // 0x199 NEW_2
	GetVariable(var_497_string, var_496_int); // 0x19b Func
	var_499_int = 3; // 0x19d PushI
	var_500_int = var_496_int & var_499_int; // 0x19e And
	var_501_int = 0; // 0x19f PushI
	var_493_bool = var_500_int == var_501_int; // 0x1a0 Eq2
	return 2; // 0x1a1 Return
}


func_10650()
{
	var_4964_object = Obj(); var_4965_object = Obj(); // 0x299a PushV
	var_4966_object = Obj(); // 0x299b PushV
	func_12503(var_4966_object); // 0x299c NEW_2
	var_4965_object = var_4966_object; // 0x299d Mov
	var_4967_string = "d9q04GotoAnna"; // 0x299f PushS
	var_4968_string = "pt_map_anna"; // 0x29a0 PushS
	var_4969_int = 0; // 0x29a1 PushI
	var_4970_int = 511375; // 0x29a2 PushI
	var_4971_float = 0; // 0x29a3 PushV
	func_290(var_4971_float); // 0x29a4 NEW_2
	AddMark(var_4967_string, var_4968_string, var_4969_int, var_4970_int, var_4971_float); // 0x29a6 ObjFunc
	return 2; // 0x29a8 Return
}


func_11679()
{
	var_5875_object = Obj(); var_5876_object = Obj(); var_5877_object = Obj(); var_5878_object = Obj(); // 0x2d9f PushV
	var_5879_object = Obj(); // 0x2da0 PushV
	func_12503(var_5879_object); // 0x2da1 NEW_2
	var_5877_object = var_5879_object; // 0x2da2 Mov
	var_5880_string = "d7q01AglajaFindLierSelf"; // 0x2da4 PushS
	FindMark(var_5878_object, var_5880_string); // 0x2da5 ObjFunc
	var_5881_object = var_5878_object; // 0x2da7 Push
	if(var_5881_object == 0) goto Label_11691; // 0x2da8 JumpB
	Remove(); // 0x2da9 ObjFunc
	
Label_11691:
	var_5882_string = "d7q01AglajaGotoBirdmaskSelf"; // 0x2dab PushS
	FindMark(var_5878_object, var_5882_string); // 0x2dac ObjFunc
	var_5883_object = var_5878_object; // 0x2dae Push
	if(var_5883_object == 0) goto Label_11698; // 0x2daf JumpB
	Remove(); // 0x2db0 ObjFunc
	
Label_11698:
	var_5884_string = "d7q01BirdmaskD"; // 0x2db2 PushS
	FindMark(var_5878_object, var_5884_string); // 0x2db3 ObjFunc
	var_5885_object = var_5878_object; // 0x2db5 Push
	if(var_5885_object == 0) goto Label_11705; // 0x2db6 JumpB
	Remove(); // 0x2db7 ObjFunc
	
Label_11705:
	var_5886_string = "d7q01BirdmaskM"; // 0x2db9 PushS
	FindMark(var_5878_object, var_5886_string); // 0x2dba ObjFunc
	var_5887_object = var_5878_object; // 0x2dbc Push
	if(var_5887_object == 0) goto Label_11712; // 0x2dbd JumpB
	Remove(); // 0x2dbe ObjFunc
	
Label_11712:
	var_5888_string = "d7q01BirdmaskU"; // 0x2dc0 PushS
	FindMark(var_5878_object, var_5888_string); // 0x2dc1 ObjFunc
	var_5889_object = var_5878_object; // 0x2dc3 Push
	if(var_5889_object == 0) goto Label_11719; // 0x2dc4 JumpB
	Remove(); // 0x2dc5 ObjFunc
	
Label_11719:
	var_5890_string = "d7q02AlexandrGotoPetr"; // 0x2dc7 PushS
	FindMark(var_5878_object, var_5890_string); // 0x2dc8 ObjFunc
	var_5891_object = var_5878_object; // 0x2dca Push
	if(var_5891_object == 0) goto Label_11726; // 0x2dcb JumpB
	Remove(); // 0x2dcc ObjFunc
	
Label_11726:
	var_5892_string = "d7q02MarkGotoAlexandr"; // 0x2dce PushS
	FindMark(var_5878_object, var_5892_string); // 0x2dcf ObjFunc
	var_5893_object = var_5878_object; // 0x2dd1 Push
	if(var_5893_object == 0) goto Label_11733; // 0x2dd2 JumpB
	Remove(); // 0x2dd3 ObjFunc
	
Label_11733:
	var_5894_string = "d7q02MarkGotoCemetery"; // 0x2dd5 PushS
	FindMark(var_5878_object, var_5894_string); // 0x2dd6 ObjFunc
	var_5895_object = var_5878_object; // 0x2dd8 Push
	if(var_5895_object == 0) goto Label_11740; // 0x2dd9 JumpB
	Remove(); // 0x2dda ObjFunc
	
Label_11740:
	var_5896_string = "d7q04WastedGotoGatherer"; // 0x2ddc PushS
	FindMark(var_5878_object, var_5896_string); // 0x2ddd ObjFunc
	var_5897_object = var_5878_object; // 0x2ddf Push
	if(var_5897_object == 0) goto Label_11747; // 0x2de0 JumpB
	Remove(); // 0x2de1 ObjFunc
	
Label_11747:
	var_5898_string = "d7q04NudeGotoAndrei"; // 0x2de3 PushS
	FindMark(var_5878_object, var_5898_string); // 0x2de4 ObjFunc
	var_5899_object = var_5878_object; // 0x2de6 Push
	if(var_5899_object == 0) goto Label_11754; // 0x2de7 JumpB
	Remove(); // 0x2de8 ObjFunc
	
Label_11754:
	var_5900_bool = 0; var_5901_int = 0; // 0x2dea PushV
	var_5901_int = 165; // 0x2deb MovI
	func_12478(var_5900_bool, var_5901_int); // 0x2dec NEW_2
	var_5902_bool = 0; var_5903_int = 0; // 0x2dee PushV
	var_5903_int = 170; // 0x2def MovI
	func_12478(var_5902_bool, var_5903_int); // 0x2df0 NEW_2
	var_5904_bool = 0; var_5905_int = 0; // 0x2df2 PushV
	var_5905_int = 637; // 0x2df3 MovI
	func_12478(var_5904_bool, var_5905_int); // 0x2df4 NEW_2
	var_5906_bool = 0; var_5907_int = 0; // 0x2df6 PushV
	var_5907_int = 641; // 0x2df7 MovI
	func_12478(var_5906_bool, var_5907_int); // 0x2df8 NEW_2
	return 4; // 0x2dfa Return
}


func_418(var_81_int)
{
	var_82_int = 0; var_83_int = 0; var_84_int = 0; var_85_int = 0; // 0x1a2 PushV
	var_86_string = ""; var_87_int = 0; // 0x1a3 PushV
	var_87_int = var_81_int; // 0x1a4 Mov
	func_305(var_86_string, var_87_int); // 0x1a5 NEW_2
	GetVariable(var_86_string, var_84_int); // 0x1a7 Func
	var_88_int = 252; // 0x1a9 PushI
	var_89_int = var_84_int & var_88_int; // 0x1aa And
	var_90_int = 0; // 0x1ab PushI
	var_85_int = var_89_int | var_90_int; // 0x1ac Or2
	var_91_string = ""; var_92_int = 0; // 0x1ad PushV
	var_92_int = var_81_int; // 0x1ae Mov
	func_305(var_91_string, var_92_int); // 0x1af NEW_2
	SetVariable(var_91_string, var_85_int); // 0x1b1 Func
	return 4; // 0x1b3 Return
}


func_5541(var_2620_int, var_2621_int, var_2622_object, var_2623_object, var_2624_object, var_2625_object)
{
	var_2626_int = 0; // 0x15a6 PushI
	var_2627_bool = var_2621_int == var_2626_int; // 0x15a7 Eq
	if(var_2627_bool == 0) goto Label_5581; // 0x15a8 JumpB
	var_2628_int = 0; var_2629_bool = 0; // 0x15a9 PushV
	var_2628_int = 5; // 0x15aa MovI
	var_2629_bool = 1; // 0x15ab MovB
	func_802(var_2628_int, var_2629_bool); // 0x15ac NEW_2
	var_2630_int = 0; var_2631_bool = 0; var_2632_int = 0; // 0x15ae PushV
	var_2630_int = 5; // 0x15af MovI
	var_2631_bool = 1; // 0x15b0 MovB
	var_2632_int = 1; // 0x15b1 MovI
	func_819(var_2630_int, var_2631_bool, var_2632_int); // 0x15b2 NEW_2
	var_2633_int = 0; var_2634_int = 0; var_2635_object = Obj(); var_2636_object = Obj(); var_2637_object = Obj(); // 0x15b4 PushV
	var_2633_int = 5; // 0x15b5 MovI
	var_2634_int = var_2620_int; // 0x15b6 Mov
	var_2635_object = var_2622_object; // 0x15b7 Mov
	var_2636_object = var_2623_object; // 0x15b8 Mov
	var_2637_object = var_2624_object; // 0x15b9 Mov
	func_647(var_2633_int, var_2634_int, var_2635_object, var_2636_object, var_2637_object); // 0x15ba NEW_2
	var_2638_object = Obj(); var_2639_int = 0; // 0x15bc PushV
	var_2638_object = var_2625_object; // 0x15bd Mov
	var_2639_int = 1; // 0x15be MovI
	func_311(var_2639_int); // 0x15bf NEW_2
	var_2640_int = 0; var_2641_bool = 0; var_2642_int = 0; // 0x15c1 PushV
	var_2640_int = 5; // 0x15c2 MovI
	var_2641_bool = 1; // 0x15c3 MovB
	var_2642_int = 4; // 0x15c4 MovI
	func_876(var_2640_int, var_2641_bool, var_2642_int); // 0x15c5 NEW_2
	var_2643_int = 0; var_2644_bool = 0; var_2645_int = 0; // 0x15c7 PushV
	var_2643_int = 5; // 0x15c8 MovI
	var_2644_bool = 0; // 0x15c9 MovB
	var_2645_int = 4; // 0x15ca MovI
	func_938(var_2643_int, var_2644_bool, var_2645_int); // 0x15cb NEW_2
	
Label_5581:
	var_2646_int = 0; var_2647_bool = 0; // 0x15cd PushV
	var_2646_int = 5; // 0x15ce MovI
	var_2647_bool = 0; // 0x15cf MovB
	func_785(var_2646_int, var_2647_bool); // 0x15d0 NEW_2
	var_2648_int = 0; var_2649_int = 0; var_2650_int = 0; // 0x15d2 PushV
	var_2648_int = 5; // 0x15d3 MovI
	var_2649_int = var_2620_int; // 0x15d4 Mov
	var_2650_int = var_2621_int; // 0x15d5 Mov
	func_2950(var_2648_int, var_2649_int, var_2650_int); // 0x15d6 NEW_2
	return 0; // 0x15d8 Return
}


func_10666()
{
	var_5016_string = "d8BurahLetter"; // 0x29ab PushS
	var_5017_int = 1; // 0x29ac PushI
	SetVariable(var_5016_string, var_5017_int); // 0x29ad Func
	return 0; // 0x29af Return
}


func_10672()
{
	var_5106_int = 0; var_5107_string = ""; // 0x29b1 PushV
	var_5107_string = "map_chertez_state"; // 0x29b2 MovS
	func_138(var_5106_int, var_5107_string); // 0x29b3 NEW_2
	var_5108_int = 1; // 0x29b5 PushI
	var_5109_bool = var_5106_int <= var_5108_int; // 0x29b6 LE
	if(var_5109_bool == 0) goto Label_10688; // 0x29b7 JumpB
	var_5110_string = "map_chertez_state"; // 0x29b8 PushS
	var_5111_int = 1; // 0x29b9 PushI
	SetVariable(var_5110_string, var_5111_int); // 0x29ba Func
	var_5112_string = "map_chertez_force"; // 0x29bc PushS
	var_5113_int = 1; // 0x29bd PushI
	SetVariable(var_5112_string, var_5113_int); // 0x29be Func
	
Label_10688:
	return 0; // 0x29c0 Return
}


func_436(var_1980_bool, var_1981_int)
{
	var_1982_int = 0; var_1983_int = 0; // 0x1b4 PushV
	var_1984_string = ""; var_1985_int = 0; // 0x1b5 PushV
	var_1985_int = var_1981_int; // 0x1b6 Mov
	func_305(var_1984_string, var_1985_int); // 0x1b7 NEW_2
	GetVariable(var_1984_string, var_1983_int); // 0x1b9 Func
	var_1986_int = 3; // 0x1bb PushI
	var_1987_int = var_1983_int & var_1986_int; // 0x1bc And
	var_1988_int = 1; // 0x1bd PushI
	var_1980_bool = var_1987_int == var_1988_int; // 0x1be Eq2
	return 2; // 0x1bf Return
}


func_6588(var_2901_int, var_2902_int, var_2903_object, var_2904_object, var_2905_object, var_2906_object)
{
	var_2907_int = 0; // 0x19bd PushI
	var_2908_bool = var_2902_int == var_2907_int; // 0x19be Eq
	if(var_2908_bool == 0) goto Label_6628; // 0x19bf JumpB
	var_2909_int = 0; var_2910_bool = 0; // 0x19c0 PushV
	var_2909_int = 11; // 0x19c1 MovI
	var_2910_bool = 0; // 0x19c2 MovB
	func_802(var_2909_int, var_2910_bool); // 0x19c3 NEW_2
	var_2911_int = 0; var_2912_bool = 0; var_2913_int = 0; // 0x19c5 PushV
	var_2911_int = 11; // 0x19c6 MovI
	var_2912_bool = 1; // 0x19c7 MovB
	var_2913_int = 1; // 0x19c8 MovI
	func_819(var_2911_int, var_2912_bool, var_2913_int); // 0x19c9 NEW_2
	var_2914_int = 0; var_2915_int = 0; var_2916_object = Obj(); var_2917_object = Obj(); var_2918_object = Obj(); // 0x19cb PushV
	var_2914_int = 11; // 0x19cc MovI
	var_2915_int = var_2901_int; // 0x19cd Mov
	var_2916_object = var_2903_object; // 0x19ce Mov
	var_2917_object = var_2904_object; // 0x19cf Mov
	var_2918_object = var_2905_object; // 0x19d0 Mov
	func_647(var_2914_int, var_2915_int, var_2916_object, var_2917_object, var_2918_object); // 0x19d1 NEW_2
	var_2919_object = Obj(); var_2920_int = 0; // 0x19d3 PushV
	var_2919_object = var_2906_object; // 0x19d4 Mov
	var_2920_int = 1; // 0x19d5 MovI
	func_311(var_2920_int); // 0x19d6 NEW_2
	var_2921_int = 0; var_2922_bool = 0; var_2923_int = 0; // 0x19d8 PushV
	var_2921_int = 11; // 0x19d9 MovI
	var_2922_bool = 1; // 0x19da MovB
	var_2923_int = 5; // 0x19db MovI
	func_876(var_2921_int, var_2922_bool, var_2923_int); // 0x19dc NEW_2
	var_2924_int = 0; var_2925_bool = 0; var_2926_int = 0; // 0x19de PushV
	var_2924_int = 11; // 0x19df MovI
	var_2925_bool = 0; // 0x19e0 MovB
	var_2926_int = 5; // 0x19e1 MovI
	func_938(var_2924_int, var_2925_bool, var_2926_int); // 0x19e2 NEW_2
	
Label_6628:
	var_2927_int = 0; var_2928_bool = 0; // 0x19e4 PushV
	var_2927_int = 11; // 0x19e5 MovI
	var_2928_bool = 0; // 0x19e6 MovB
	func_785(var_2927_int, var_2928_bool); // 0x19e7 NEW_2
	var_2929_int = 0; var_2930_int = 0; var_2931_int = 0; // 0x19e9 PushV
	var_2929_int = 11; // 0x19ea MovI
	var_2930_int = var_2901_int; // 0x19eb Mov
	var_2931_int = var_2902_int; // 0x19ec Mov
	func_2770(var_2929_int, var_2930_int, var_2931_int); // 0x19ed NEW_2
	return 0; // 0x19ef Return
}


func_7614(var_10_int)
{
	var_12_int = 0; var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); // 0x1dbe PushV
	var_28_object = GlobalVars[14]; // 0x1dbf PushGE
	size(var_20_int); // 0x1dc0 ObjFunc
	var_29_bool = 0; // 0x1dc2 PushV
	var_29_bool = 1; // 0x1dc3 MovB
	var_30_bool = var_10_int >= var_20_int; // 0x1dc4 GE
	if(var_30_bool == 0) goto Label_7626; // 0x1dc5 JumpB
	var_31_int = -1; // 0x1dc6 PushI
	var_32_bool = var_10_int == var_31_int; // 0x1dc7 Eq
	if(var_32_bool == 0) goto Label_7626; // 0x1dc8 JumpB
	var_29_bool = 0; // 0x1dc9 MovB
	
Label_7626:
	if(var_29_bool == 0) goto Label_7632; // 0x1dca JumpB
	var_33_string = "Wrong bonfire index "; // 0x1dcb PushS
	var_34_int = var_33_string + var_10_int; // 0x1dcc Add
	Trace(var_34_int); // 0x1dcd Func
	return 16; // 0x1dcf Return
	
Label_7632:
	var_35_object = GlobalVars[14]; // 0x1dd0 PushGE
	get(var_21_object, var_10_int); // 0x1dd1 ObjFunc
	var_36_string = "bonfire_light"; // 0x1dd3 PushS
	var_37_int = 1; // 0x1dd4 PushI
	var_38_int = var_10_int + var_37_int; // 0x1dd5 Add
	var_39_int = var_36_string + var_38_int; // 0x1dd6 Add
	FindActor(var_22_object, var_39_int); // 0x1dd7 Func
	var_40_bool = var_22_object == 0; // 0x1dd9 Not
	if(var_40_bool == 0) goto Label_7652; // 0x1dda JumpB
	var_41_string = "Bofire  light "; // 0x1ddb PushS
	var_42_int = 1; // 0x1ddc PushI
	var_43_int = var_10_int + var_42_int; // 0x1ddd Add
	var_44_int = var_41_string + var_43_int; // 0x1dde Add
	var_45_string = " not found"; // 0x1ddf PushS
	var_46_int = var_44_int + var_45_string; // 0x1de0 Add
	Trace(var_46_int); // 0x1de1 Func
	goto Label_7655; // 0x1de3 Jump
	
Label_7655:
	GetMainOutdoorScene(var_23_object); // 0x1de7 Func
	var_47_string = "pt_bonfire"; // 0x1de9 PushS
	var_48_int = 1; // 0x1dea PushI
	var_49_int = var_10_int + var_48_int; // 0x1deb Add
	var_50_int = var_47_string + var_49_int; // 0x1dec Add
	GetLocator(var_50_int, var_26_bool, var_24_cvector, var_25_cvector); // 0x1ded ObjFunc
	var_51_bool = var_26_bool == 0; // 0x1def Not
	if(var_51_bool == 0) goto Label_7669; // 0x1df0 JumpB
	var_52_string = "Locator for bonfire doesn't exist"; // 0x1df1 PushS
	Trace(var_52_string); // 0x1df2 Func
	return 16; // 0x1df4 Return
	
Label_7669:
	var_53_bool = var_21_object == 0; // 0x1df5 Not
	if(var_53_bool == 0) goto Label_7679; // 0x1df6 JumpB
	var_54_string = "scripted"; // 0x1df7 PushS
	var_55_string = "bonfire_big.xml"; // 0x1df8 PushS
	AddActorByType(var_27_object, var_54_string, var_23_object, var_24_cvector, var_25_cvector, var_55_string); // 0x1df9 Func
	var_56_object = GlobalVars[14]; // 0x1dfb PushGE
	set(var_10_int, var_27_object); // 0x1dfc ObjFunc
	var_27_object = 0; // 0x1dfe SetNull
	
Label_7679:
	var_57_string = "Setting bonfire "; // 0x1dff PushS
	var_58_int = 1; // 0x1e00 PushI
	var_59_int = var_10_int + var_58_int; // 0x1e01 Add
	var_60_int = var_57_string + var_59_int; // 0x1e02 Add
	var_61_string = "... ok"; // 0x1e03 PushS
	var_62_int = var_60_int + var_61_string; // 0x1e04 Add
	Trace(var_62_int); // 0x1e05 Func
	return 16; // 0x1e07 Return
	
Label_7652:
	var_63_bool = 1; // 0x1de4 PushB
	Switch(var_63_bool); // 0x1de5 ObjFunc
}


func_448(var_24_int)
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; // 0x1c0 PushV
	var_29_string = ""; var_30_int = 0; // 0x1c1 PushV
	var_30_int = var_24_int; // 0x1c2 Mov
	func_305(var_29_string, var_30_int); // 0x1c3 NEW_2
	GetVariable(var_29_string, var_27_int); // 0x1c5 Func
	var_34_int = 252; // 0x1c7 PushI
	var_35_int = var_27_int & var_34_int; // 0x1c8 And
	var_36_int = 1; // 0x1c9 PushI
	var_28_int = var_35_int | var_36_int; // 0x1ca Or2
	var_37_string = ""; var_38_int = 0; // 0x1cb PushV
	var_38_int = var_24_int; // 0x1cc Mov
	func_305(var_37_string, var_38_int); // 0x1cd NEW_2
	SetVariable(var_37_string, var_28_int); // 0x1cf Func
	return 4; // 0x1d1 Return
}


func_10689()
{
	var_4665_int = 0; var_4666_string = ""; // 0x29c2 PushV
	var_4666_string = "map_chertez_state"; // 0x29c3 MovS
	func_138(var_4665_int, var_4666_string); // 0x29c4 NEW_2
	var_4669_int = 2; // 0x29c6 PushI
	var_4670_bool = var_4665_int <= var_4669_int; // 0x29c7 LE
	if(var_4670_bool == 0) goto Label_10705; // 0x29c8 JumpB
	var_4671_string = "map_chertez_state"; // 0x29c9 PushS
	var_4672_int = 2; // 0x29ca PushI
	SetVariable(var_4671_string, var_4672_int); // 0x29cb Func
	var_4673_string = "map_chertez_force"; // 0x29cd PushS
	var_4674_int = 1; // 0x29ce PushI
	SetVariable(var_4673_string, var_4674_int); // 0x29cf Func
	
Label_10705:
	return 0; // 0x29d1 Return
}


func_4549()
{
	var_65_string = "dt_house3_05_i2"; // 0x11c6 PushS
	add(var_65_string); // 0x11c7 ObjFunc
	var_66_string = "dt_house3_05"; // 0x11c9 PushS
	add(var_66_string); // 0x11ca ObjFunc
	var_67_string = "dt_house3_06_i2"; // 0x11cc PushS
	add(var_67_string); // 0x11cd ObjFunc
	var_68_string = "dt_house_1_10"; // 0x11cf PushS
	add(var_68_string); // 0x11d0 ObjFunc
	var_69_string = "house5_10"; // 0x11d2 PushS
	add(var_69_string); // 0x11d3 ObjFunc
	var_70_string = "house5_07"; // 0x11d5 PushS
	add(var_70_string); // 0x11d6 ObjFunc
	var_71_string = "dt_house_1_03"; // 0x11d8 PushS
	add(var_71_string); // 0x11d9 ObjFunc
	var_72_string = "dt_house1_union2_04l"; // 0x11db PushS
	add(var_72_string); // 0x11dc ObjFunc
	var_73_string = "dt_house1_union2_04r"; // 0x11de PushS
	add(var_73_string); // 0x11df ObjFunc
	var_74_string = "house5_22"; // 0x11e1 PushS
	add(var_74_string); // 0x11e2 ObjFunc
	var_75_string = "house5_08"; // 0x11e4 PushS
	add(var_75_string); // 0x11e5 ObjFunc
	var_76_string = "dt_house1_union2_02l"; // 0x11e7 PushS
	add(var_76_string); // 0x11e8 ObjFunc
	var_77_string = "dt_house1_union2_02r"; // 0x11ea PushS
	add(var_77_string); // 0x11eb ObjFunc
	return 0; // 0x11ed Return
}


func_10706()
{
	var_4744_int = 0; var_4745_string = ""; // 0x29d3 PushV
	var_4745_string = "map_chertez_state"; // 0x29d4 MovS
	func_138(var_4744_int, var_4745_string); // 0x29d5 NEW_2
	var_4746_int = 3; // 0x29d7 PushI
	var_4747_bool = var_4744_int <= var_4746_int; // 0x29d8 LE
	if(var_4747_bool == 0) goto Label_10722; // 0x29d9 JumpB
	var_4748_string = "map_chertez_state"; // 0x29da PushS
	var_4749_int = 3; // 0x29db PushI
	SetVariable(var_4748_string, var_4749_int); // 0x29dc Func
	var_4750_string = "map_chertez_force"; // 0x29de PushS
	var_4751_int = 1; // 0x29df PushI
	SetVariable(var_4750_string, var_4751_int); // 0x29e0 Func
	
Label_10722:
	return 0; // 0x29e2 Return
}


func_466(var_72_bool, var_73_int)
{
	var_74_int = 0; var_75_int = 0; // 0x1d2 PushV
	var_76_string = ""; var_77_int = 0; // 0x1d3 PushV
	var_77_int = var_73_int; // 0x1d4 Mov
	func_305(var_76_string, var_77_int); // 0x1d5 NEW_2
	GetVariable(var_76_string, var_75_int); // 0x1d7 Func
	var_78_int = 3; // 0x1d9 PushI
	var_79_int = var_75_int & var_78_int; // 0x1da And
	var_80_int = 2; // 0x1db PushI
	var_72_bool = var_79_int == var_80_int; // 0x1dc Eq2
	return 2; // 0x1dd Return
}


func_5593(var_3746_int, var_3747_int, var_3748_object, var_3749_object, var_3750_object, var_3751_object)
{
	var_3752_int = 0; // 0x15da PushI
	var_3753_bool = var_3747_int == var_3752_int; // 0x15db Eq
	if(var_3753_bool == 0) goto Label_5633; // 0x15dc JumpB
	var_3754_int = 0; var_3755_bool = 0; // 0x15dd PushV
	var_3754_int = 5; // 0x15de MovI
	var_3755_bool = 0; // 0x15df MovB
	func_802(var_3754_int, var_3755_bool); // 0x15e0 NEW_2
	var_3756_int = 0; var_3757_bool = 0; var_3758_int = 0; // 0x15e2 PushV
	var_3756_int = 5; // 0x15e3 MovI
	var_3757_bool = 0; // 0x15e4 MovB
	var_3758_int = 1; // 0x15e5 MovI
	func_819(var_3756_int, var_3757_bool, var_3758_int); // 0x15e6 NEW_2
	var_3759_int = 0; var_3760_int = 0; var_3761_object = Obj(); var_3762_object = Obj(); var_3763_object = Obj(); // 0x15e8 PushV
	var_3759_int = 5; // 0x15e9 MovI
	var_3760_int = var_3746_int; // 0x15ea Mov
	var_3761_object = var_3748_object; // 0x15eb Mov
	var_3762_object = var_3749_object; // 0x15ec Mov
	var_3763_object = var_3750_object; // 0x15ed Mov
	func_726(var_3759_int, var_3760_int, var_3761_object, var_3762_object, var_3763_object); // 0x15ee NEW_2
	var_3764_object = Obj(); var_3765_int = 0; // 0x15f0 PushV
	var_3764_object = var_3751_object; // 0x15f1 Mov
	var_3765_int = 2; // 0x15f2 MovI
	func_311(var_3765_int); // 0x15f3 NEW_2
	var_3766_int = 0; var_3767_bool = 0; var_3768_int = 0; // 0x15f5 PushV
	var_3766_int = 5; // 0x15f6 MovI
	var_3767_bool = 0; // 0x15f7 MovB
	var_3768_int = 4; // 0x15f8 MovI
	func_876(var_3766_int, var_3767_bool, var_3768_int); // 0x15f9 NEW_2
	var_3769_int = 0; var_3770_bool = 0; var_3771_int = 0; // 0x15fb PushV
	var_3769_int = 5; // 0x15fc MovI
	var_3770_bool = 1; // 0x15fd MovB
	var_3771_int = 4; // 0x15fe MovI
	func_938(var_3769_int, var_3770_bool, var_3771_int); // 0x15ff NEW_2
	
Label_5633:
	var_3772_int = 0; var_3773_bool = 0; // 0x1601 PushV
	var_3772_int = 5; // 0x1602 MovI
	var_3773_bool = 0; // 0x1603 MovB
	func_785(var_3772_int, var_3773_bool); // 0x1604 NEW_2
	var_3774_int = 0; var_3775_int = 0; var_3776_int = 0; // 0x1606 PushV
	var_3774_int = 5; // 0x1607 MovI
	var_3775_int = var_3746_int; // 0x1608 Mov
	var_3776_int = var_3747_int; // 0x1609 Mov
	func_3853(var_3774_int, var_3775_int, var_3776_int); // 0x160a NEW_2
	return 0; // 0x160c Return
}


func_478(var_76_int)
{
	var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; // 0x1de PushV
	var_81_string = ""; var_82_int = 0; // 0x1df PushV
	var_82_int = var_76_int; // 0x1e0 Mov
	func_305(var_81_string, var_82_int); // 0x1e1 NEW_2
	GetVariable(var_81_string, var_79_int); // 0x1e3 Func
	var_83_int = 252; // 0x1e5 PushI
	var_84_int = var_79_int & var_83_int; // 0x1e6 And
	var_85_int = 2; // 0x1e7 PushI
	var_80_int = var_84_int | var_85_int; // 0x1e8 Or2
	var_86_string = ""; var_87_int = 0; // 0x1e9 PushV
	var_87_int = var_76_int; // 0x1ea Mov
	func_305(var_86_string, var_87_int); // 0x1eb NEW_2
	SetVariable(var_86_string, var_80_int); // 0x1ed Func
	return 4; // 0x1ef Return
}


func_10723()
{
	var_4859_int = 0; var_4860_string = ""; // 0x29e4 PushV
	var_4860_string = "map_chertez_state"; // 0x29e5 MovS
	func_138(var_4859_int, var_4860_string); // 0x29e6 NEW_2
	var_4861_int = 4; // 0x29e8 PushI
	var_4862_bool = var_4859_int <= var_4861_int; // 0x29e9 LE
	if(var_4862_bool == 0) goto Label_10739; // 0x29ea JumpB
	var_4863_string = "map_chertez_state"; // 0x29eb PushS
	var_4864_int = 4; // 0x29ec PushI
	SetVariable(var_4863_string, var_4864_int); // 0x29ed Func
	var_4865_string = "map_chertez_force"; // 0x29ef PushS
	var_4866_int = 1; // 0x29f0 PushI
	SetVariable(var_4865_string, var_4866_int); // 0x29f1 Func
	
Label_10739:
	return 0; // 0x29f3 Return
}


func_4590(var_887_int, var_888_int, var_889_object, var_890_object, var_891_object, var_892_object)
{
	var_893_int = 0; // 0x11ef PushI
	var_894_bool = var_888_int == var_893_int; // 0x11f0 Eq
	if(var_894_bool == 0) goto Label_4630; // 0x11f1 JumpB
	var_895_int = 0; var_896_bool = 0; // 0x11f2 PushV
	var_895_int = 1; // 0x11f3 MovI
	var_896_bool = 0; // 0x11f4 MovB
	func_802(var_895_int, var_896_bool); // 0x11f5 NEW_2
	var_897_int = 0; var_898_bool = 0; var_899_int = 0; // 0x11f7 PushV
	var_897_int = 1; // 0x11f8 MovI
	var_898_bool = 0; // 0x11f9 MovB
	var_899_int = 1; // 0x11fa MovI
	func_819(var_897_int, var_898_bool, var_899_int); // 0x11fb NEW_2
	var_900_int = 0; var_901_int = 0; var_902_object = Obj(); var_903_object = Obj(); var_904_object = Obj(); // 0x11fd PushV
	var_900_int = 1; // 0x11fe MovI
	var_901_int = var_887_int; // 0x11ff Mov
	var_902_object = var_889_object; // 0x1200 Mov
	var_903_object = var_890_object; // 0x1201 Mov
	var_904_object = var_891_object; // 0x1202 Mov
	func_628(var_901_int, var_902_object, var_903_object, var_904_object); // 0x1203 NEW_2
	var_905_object = Obj(); var_906_int = 0; // 0x1205 PushV
	var_905_object = var_892_object; // 0x1206 Mov
	var_906_int = 0; // 0x1207 MovI
	func_311(var_906_int); // 0x1208 NEW_2
	var_907_int = 0; var_908_bool = 0; var_909_int = 0; // 0x120a PushV
	var_907_int = 1; // 0x120b MovI
	var_908_bool = 0; // 0x120c MovB
	var_909_int = 8; // 0x120d MovI
	func_876(var_907_int, var_908_bool, var_909_int); // 0x120e NEW_2
	var_910_int = 0; var_911_bool = 0; var_912_int = 0; // 0x1210 PushV
	var_910_int = 1; // 0x1211 MovI
	var_911_bool = 0; // 0x1212 MovB
	var_912_int = 8; // 0x1213 MovI
	func_938(var_910_int, var_911_bool, var_912_int); // 0x1214 NEW_2
	
Label_4630:
	var_913_int = 0; var_914_int = 0; // 0x1216 PushV
	var_913_int = 1; // 0x1217 MovI
	var_914_int = var_888_int; // 0x1218 Mov
	func_1056(var_913_int, var_914_int); // 0x1219 NEW_2
	var_915_int = 0; var_916_int = 0; var_917_int = 0; // 0x121b PushV
	var_915_int = 1; // 0x121c MovI
	var_916_int = var_887_int; // 0x121d Mov
	var_917_int = var_888_int; // 0x121e Mov
	func_2389(var_915_int, var_916_int, var_917_int); // 0x121f NEW_2
	return 0; // 0x1221 Return
}


func_496(var_488_int)
{
	var_489_object = Obj(); var_490_object = Obj(); // 0x1f0 PushV
	GetMainOutdoorScene(var_490_object); // 0x1f1 Func
	var_491_bool = var_490_object == 0; // 0x1f3 NullEq
	if(var_491_bool == 0) goto Label_505; // 0x1f4 JumpB
	var_492_string = "City manager: main outdoor scene not found"; // 0x1f5 PushS
	Trace(var_492_string); // 0x1f6 Func
	return 2; // 0x1f8 Return
	
Label_505:
	RemoveAllRegionActors(var_488_int); // 0x1f9 ObjFunc
	return 2; // 0x1fb Return
}


func_6640(var_4031_int, var_4032_int, var_4033_object, var_4034_object, var_4035_object, var_4036_object)
{
	var_4037_int = 0; // 0x19f1 PushI
	var_4038_bool = var_4032_int == var_4037_int; // 0x19f2 Eq
	if(var_4038_bool == 0) goto Label_6680; // 0x19f3 JumpB
	var_4039_int = 0; var_4040_bool = 0; // 0x19f4 PushV
	var_4039_int = 11; // 0x19f5 MovI
	var_4040_bool = 1; // 0x19f6 MovB
	func_802(var_4039_int, var_4040_bool); // 0x19f7 NEW_2
	var_4041_int = 0; var_4042_bool = 0; var_4043_int = 0; // 0x19f9 PushV
	var_4041_int = 11; // 0x19fa MovI
	var_4042_bool = 0; // 0x19fb MovB
	var_4043_int = 1; // 0x19fc MovI
	func_819(var_4041_int, var_4042_bool, var_4043_int); // 0x19fd NEW_2
	var_4044_int = 0; var_4045_int = 0; var_4046_object = Obj(); var_4047_object = Obj(); var_4048_object = Obj(); // 0x19ff PushV
	var_4044_int = 11; // 0x1a00 MovI
	var_4045_int = var_4031_int; // 0x1a01 Mov
	var_4046_object = var_4033_object; // 0x1a02 Mov
	var_4047_object = var_4034_object; // 0x1a03 Mov
	var_4048_object = var_4035_object; // 0x1a04 Mov
	func_726(var_4044_int, var_4045_int, var_4046_object, var_4047_object, var_4048_object); // 0x1a05 NEW_2
	var_4049_object = Obj(); var_4050_int = 0; // 0x1a07 PushV
	var_4049_object = var_4036_object; // 0x1a08 Mov
	var_4050_int = 2; // 0x1a09 MovI
	func_311(var_4050_int); // 0x1a0a NEW_2
	var_4051_int = 0; var_4052_bool = 0; var_4053_int = 0; // 0x1a0c PushV
	var_4051_int = 11; // 0x1a0d MovI
	var_4052_bool = 0; // 0x1a0e MovB
	var_4053_int = 5; // 0x1a0f MovI
	func_876(var_4051_int, var_4052_bool, var_4053_int); // 0x1a10 NEW_2
	var_4054_int = 0; var_4055_bool = 0; var_4056_int = 0; // 0x1a12 PushV
	var_4054_int = 11; // 0x1a13 MovI
	var_4055_bool = 1; // 0x1a14 MovB
	var_4056_int = 5; // 0x1a15 MovI
	func_938(var_4054_int, var_4055_bool, var_4056_int); // 0x1a16 NEW_2
	
Label_6680:
	var_4057_int = 0; var_4058_bool = 0; // 0x1a18 PushV
	var_4057_int = 11; // 0x1a19 MovI
	var_4058_bool = 0; // 0x1a1a MovB
	func_785(var_4057_int, var_4058_bool); // 0x1a1b NEW_2
	var_4059_int = 0; var_4060_int = 0; var_4061_int = 0; // 0x1a1d PushV
	var_4059_int = 11; // 0x1a1e MovI
	var_4060_int = var_4031_int; // 0x1a1f Mov
	var_4061_int = var_4032_int; // 0x1a20 Mov
	func_3665(var_4059_int, var_4060_int, var_4061_int); // 0x1a21 NEW_2
	return 0; // 0x1a23 Return
}


func_10740()
{
	var_4794_int = 0; var_4795_string = ""; // 0x29f5 PushV
	var_4795_string = "map_chertez_state"; // 0x29f6 MovS
	func_138(var_4794_int, var_4795_string); // 0x29f7 NEW_2
	var_4796_int = 6; // 0x29f9 PushI
	var_4797_bool = var_4794_int <= var_4796_int; // 0x29fa LE
	if(var_4797_bool == 0) goto Label_10756; // 0x29fb JumpB
	var_4798_string = "map_chertez_state"; // 0x29fc PushS
	var_4799_int = 6; // 0x29fd PushI
	SetVariable(var_4798_string, var_4799_int); // 0x29fe Func
	var_4800_string = "map_chertez_force"; // 0x2a00 PushS
	var_4801_int = 1; // 0x2a01 PushI
	SetVariable(var_4800_string, var_4801_int); // 0x2a02 Func
	
Label_10756:
	return 0; // 0x2a04 Return
}


func_509(var_784_int, var_785_string, var_786_string, var_787_int)
{
	var_788_object = Obj(); var_789_object = Obj(); // 0x1fd PushV
	GetMainOutdoorScene(var_789_object); // 0x1fe Func
	var_790_bool = var_789_object == 0; // 0x200 NullEq
	if(var_790_bool == 0) goto Label_518; // 0x201 JumpB
	var_791_string = "City manager: Can't find main outdoor scene"; // 0x202 PushS
	Trace(var_791_string); // 0x203 Func
	return 2; // 0x205 Return
	
Label_518:
	SetRegionActorCount(var_784_int, var_785_string, var_786_string, var_787_int); // 0x206 ObjFunc
	return 2; // 0x208 Return
}


func_11773()
{
	var_4788_string = ""; var_4789_bool = 0; // 0x2dfe PushV
	var_4788_string = "mnogogrannik@door1"; // 0x2dff MovS
	var_4789_bool = 1; // 0x2e00 MovB
	func_183(var_4788_string, var_4789_bool); // 0x2e01 NEW_2
	return 0; // 0x2e03 Return
}


func_11780()
{
	var_5765_object = Obj(); var_5766_object = Obj(); var_5767_object = Obj(); var_5768_object = Obj(); // 0x2e04 PushV
	var_5769_object = Obj(); // 0x2e05 PushV
	func_12503(var_5769_object); // 0x2e06 NEW_2
	var_5767_object = var_5769_object; // 0x2e07 Mov
	var_5770_string = "d9q01GotoViktor"; // 0x2e09 PushS
	FindMark(var_5768_object, var_5770_string); // 0x2e0a ObjFunc
	var_5771_object = var_5768_object; // 0x2e0c Push
	if(var_5771_object == 0) goto Label_11792; // 0x2e0d JumpB
	Remove(); // 0x2e0e ObjFunc
	
Label_11792:
	var_5772_string = "d9q02GotoJulia"; // 0x2e10 PushS
	FindMark(var_5768_object, var_5772_string); // 0x2e11 ObjFunc
	var_5773_object = var_5768_object; // 0x2e13 Push
	if(var_5773_object == 0) goto Label_11799; // 0x2e14 JumpB
	Remove(); // 0x2e15 ObjFunc
	
Label_11799:
	var_5774_string = "d9q03GotoLara"; // 0x2e17 PushS
	FindMark(var_5768_object, var_5774_string); // 0x2e18 ObjFunc
	var_5775_object = var_5768_object; // 0x2e1a Push
	if(var_5775_object == 0) goto Label_11806; // 0x2e1b JumpB
	Remove(); // 0x2e1c ObjFunc
	
Label_11806:
	var_5776_string = "d9q04GotoAnna"; // 0x2e1e PushS
	FindMark(var_5768_object, var_5776_string); // 0x2e1f ObjFunc
	var_5777_object = var_5768_object; // 0x2e21 Push
	if(var_5777_object == 0) goto Label_11813; // 0x2e22 JumpB
	Remove(); // 0x2e23 ObjFunc
	
Label_11813:
	var_5778_string = "d9q05AglajaGotoBurah"; // 0x2e25 PushS
	FindMark(var_5768_object, var_5778_string); // 0x2e26 ObjFunc
	var_5779_object = var_5768_object; // 0x2e28 Push
	if(var_5779_object == 0) goto Label_11820; // 0x2e29 JumpB
	Remove(); // 0x2e2a ObjFunc
	
Label_11820:
	var_5780_bool = 0; var_5781_int = 0; // 0x2e2c PushV
	var_5781_int = 182; // 0x2e2d MovI
	func_12478(var_5780_bool, var_5781_int); // 0x2e2e NEW_2
	var_5782_bool = 0; var_5783_int = 0; // 0x2e30 PushV
	var_5783_int = 655; // 0x2e31 MovI
	func_12478(var_5782_bool, var_5783_int); // 0x2e32 NEW_2
	var_5784_bool = 0; var_5785_int = 0; // 0x2e34 PushV
	var_5785_int = 659; // 0x2e35 MovI
	func_12478(var_5784_bool, var_5785_int); // 0x2e36 NEW_2
	var_5786_bool = 0; var_5787_int = 0; // 0x2e38 PushV
	var_5787_int = 662; // 0x2e39 MovI
	func_12478(var_5786_bool, var_5787_int); // 0x2e3a NEW_2
	var_5788_bool = 0; var_5789_int = 0; // 0x2e3c PushV
	var_5789_int = 764; // 0x2e3d MovI
	func_12478(var_5788_bool, var_5789_int); // 0x2e3e NEW_2
	return 4; // 0x2e40 Return
}


func_10757()
{
	var_4749_string = ""; var_4750_bool = 0; // 0x2a06 PushV
	var_4749_string = "theater@door1"; // 0x2a07 MovS
	var_4750_bool = 1; // 0x2a08 MovB
	func_183(var_4749_string, var_4750_bool); // 0x2a09 NEW_2
	return 0; // 0x2a0b Return
}


func_14856(var_4366_object, var_4368_cvector, var_4369_cvector)
{
	var_4370_object = Obj(); var_4371_object = Obj(); // 0x3a08 PushV
	var_4372_string = "pers_morlok"; // 0x3a09 PushS
	var_4373_string = "Danko_arena_manager.xml"; // 0x3a0a PushS
	AddStationaryActor(var_4371_object, var_4368_cvector, var_4369_cvector, var_4372_string, var_4373_string); // 0x3a0b ObjFunc
	var_4366_object = var_4371_object; // 0x3a0d Mov
	return 2; // 0x3a0e Return
}


func_522(var_2216_int, var_2217_string, var_2218_string, var_2219_int, var_2220_int, var_2221_int)
{
	var_2222_object = Obj(); var_2223_object = Obj(); // 0x20a PushV
	GetMainOutdoorScene(var_2223_object); // 0x20b Func
	var_2224_bool = var_2223_object == 0; // 0x20d NullEq
	if(var_2224_bool == 0) goto Label_531; // 0x20e JumpB
	var_2225_string = "City manager: Can't find main outdoor scene"; // 0x20f PushS
	Trace(var_2225_string); // 0x210 Func
	return 2; // 0x212 Return
	
Label_531:
	SetRegionActorCount(var_2216_int, var_2217_string, var_2218_string, var_2219_int, var_2220_int, var_2221_int); // 0x213 ObjFunc
	return 2; // 0x215 Return
}


func_7691(var_380_int)
{
	var_381_int = 0; var_382_object = Obj(); var_383_object = Obj(); var_384_int = 0; var_385_object = Obj(); var_386_object = Obj(); // 0x1e0b PushV
	var_387_object = GlobalVars[14]; // 0x1e0c PushGE
	size(var_384_int); // 0x1e0d ObjFunc
	var_388_bool = 0; // 0x1e0f PushV
	var_388_bool = 1; // 0x1e10 MovB
	var_389_bool = var_380_int >= var_384_int; // 0x1e11 GE
	if(var_389_bool == 0) goto Label_7703; // 0x1e12 JumpB
	var_390_int = -1; // 0x1e13 PushI
	var_391_bool = var_380_int == var_390_int; // 0x1e14 Eq
	if(var_391_bool == 0) goto Label_7703; // 0x1e15 JumpB
	var_388_bool = 0; // 0x1e16 MovB
	
Label_7703:
	if(var_388_bool == 0) goto Label_7709; // 0x1e17 JumpB
	var_392_string = "Wrong bonfire index "; // 0x1e18 PushS
	var_393_int = var_392_string + var_380_int; // 0x1e19 Add
	Trace(var_393_int); // 0x1e1a Func
	return 6; // 0x1e1c Return
	
Label_7709:
	var_394_object = GlobalVars[14]; // 0x1e1d PushGE
	get(var_385_object, var_380_int); // 0x1e1e ObjFunc
	var_395_string = "bonfire_light"; // 0x1e20 PushS
	var_396_int = 1; // 0x1e21 PushI
	var_397_int = var_380_int + var_396_int; // 0x1e22 Add
	var_398_int = var_395_string + var_397_int; // 0x1e23 Add
	FindActor(var_386_object, var_398_int); // 0x1e24 Func
	var_399_bool = var_386_object == 0; // 0x1e26 Not
	if(var_399_bool == 0) goto Label_7729; // 0x1e27 JumpB
	var_400_string = "Bofire  light "; // 0x1e28 PushS
	var_401_int = 1; // 0x1e29 PushI
	var_402_int = var_380_int + var_401_int; // 0x1e2a Add
	var_403_int = var_400_string + var_402_int; // 0x1e2b Add
	var_404_string = " not found"; // 0x1e2c PushS
	var_405_int = var_403_int + var_404_string; // 0x1e2d Add
	Trace(var_405_int); // 0x1e2e Func
	goto Label_7732; // 0x1e30 Jump
	
Label_7732:
	var_406_object = var_385_object; // 0x1e34 Push
	if(var_406_object == 0) goto Label_7736; // 0x1e35 JumpB
	RemoveActor(var_385_object); // 0x1e36 Func
	
Label_7736:
	var_385_object = 0; // 0x1e38 SetNull
	var_407_object = GlobalVars[14]; // 0x1e39 PushGE
	set(var_380_int, var_385_object); // 0x1e3a ObjFunc
	var_408_string = "Cleanup bonfire "; // 0x1e3c PushS
	var_409_int = 1; // 0x1e3d PushI
	var_410_int = var_380_int + var_409_int; // 0x1e3e Add
	var_411_int = var_408_string + var_410_int; // 0x1e3f Add
	var_412_string = "... ok"; // 0x1e40 PushS
	var_413_int = var_411_int + var_412_string; // 0x1e41 Add
	Trace(var_413_int); // 0x1e42 Func
	return 6; // 0x1e44 Return
	
Label_7729:
	var_414_bool = 0; // 0x1e31 PushB
	Switch(var_414_bool); // 0x1e32 ObjFunc
}


func_10764()
{
	var_5859_string = ""; var_5860_bool = 0; // 0x2a0d PushV
	var_5859_string = "theater@door1"; // 0x2a0e MovS
	var_5860_bool = 0; // 0x2a0f MovB
	func_183(var_5859_string, var_5860_bool); // 0x2a10 NEW_2
	return 0; // 0x2a12 Return
}


func_5645()
{
	return 0; // 0x160e Return
}


func_5647(var_1376_int)
{
	var_1381_int = 0; var_1382_int = 0; // 0x1610 PushV
	var_1381_int = 6; // 0x1611 MovI
	var_1382_int = var_1376_int; // 0x1612 Mov
	func_1056(var_1381_int, var_1382_int); // 0x1613 NEW_2
	return 0; // 0x1615 Return
}


func_10771()
{
	func_12424(); // 0x2a15 NEW_2
	return 0; // 0x2a17 Return
}


func_5654()
{
	var_2659_int = 0; var_2660_bool = 0; // 0x1617 PushV
	var_2659_int = 6; // 0x1618 MovI
	var_2660_bool = 0; // 0x1619 MovB
	func_785(var_2659_int, var_2660_bool); // 0x161a NEW_2
	return 0; // 0x161c Return
}


func_535(var_2143_int, var_2144_string, var_2145_string, var_2146_int)
{
	var_2147_object = Obj(); var_2148_object = Obj(); // 0x217 PushV
	GetMainOutdoorScene(var_2148_object); // 0x218 Func
	var_2149_bool = var_2148_object == 0; // 0x21a NullEq
	if(var_2149_bool == 0) goto Label_544; // 0x21b JumpB
	var_2150_string = "City manager: Can't find main outdoor scene"; // 0x21c PushS
	Trace(var_2150_string); // 0x21d Func
	return 2; // 0x21f Return
	
Label_544:
	SetRegionActorCountByType(var_2143_int, var_2144_string, var_2145_string, var_2146_int); // 0x220 ObjFunc
	return 2; // 0x222 Return
}


func_10776(var_4811_object)
{
	var_4815_bool = 0; var_4816_object = Obj(); var_4817_float = 0; // 0x2a19 PushV
	var_4816_object = var_4811_object; // 0x2a1a Mov
	var_4817_float = -0.3; // 0x2a1b MovF
	func_200(var_4815_bool, var_4816_object, var_4817_float); // 0x2a1c NEW_2
	return 0; // 0x2a1e Return
}


func_5661()
{
	var_3785_int = 0; var_3786_bool = 0; // 0x161e PushV
	var_3785_int = 6; // 0x161f MovI
	var_3786_bool = 0; // 0x1620 MovB
	func_785(var_3785_int, var_3786_bool); // 0x1621 NEW_2
	return 0; // 0x1623 Return
}


func_2590(var_3028_int, var_3029_int, var_3030_int)
{
	var_3031_int = 0; var_3032_int = 0; var_3033_int = 0; var_3034_int = 0; // 0xa1e PushV
	var_3035_bool = 0; // 0xa1f PushV
	var_3035_bool = 0; // 0xa20 MovB
	var_3036_int = 8; // 0xa21 PushI
	var_3037_bool = var_3030_int > var_3036_int; // 0xa22 GT
	if(var_3037_bool == 0) goto Label_2600; // 0xa23 JumpB
	var_3038_int = 21; // 0xa24 PushI
	var_3039_bool = var_3030_int < var_3038_int; // 0xa25 LT
	if(var_3039_bool == 0) goto Label_2600; // 0xa26 JumpB
	var_3035_bool = 1; // 0xa27 MovB
	
Label_2600:
	if(var_3035_bool == 0) goto Label_2655; // 0xa28 JumpB
	var_3040_int = 0; var_3041_string = ""; var_3042_string = ""; var_3043_int = 0; // 0xa29 PushV
	var_3040_int = var_3028_int; // 0xa2a Mov
	var_3041_string = "pers_vaxxabit"; // 0xa2b MovS
	var_3042_string = "vaxxabit_d.xml"; // 0xa2c MovS
	var_3043_int = 6; // 0xa2d MovI
	func_509(var_3040_int, var_3041_string, var_3042_string, var_3043_int); // 0xa2e NEW_2
	var_3044_int = 0; var_3045_string = ""; var_3046_string = ""; var_3047_int = 0; // 0xa30 PushV
	var_3044_int = var_3028_int; // 0xa31 Mov
	var_3045_string = "pers_vaxxabitka"; // 0xa32 MovS
	var_3046_string = "vaxxabitka_d.xml"; // 0xa33 MovS
	var_3047_int = 6; // 0xa34 MovI
	func_509(var_3044_int, var_3045_string, var_3046_string, var_3047_int); // 0xa35 NEW_2
	var_3048_int = 0; var_3049_string = ""; var_3050_string = ""; var_3051_int = 0; // 0xa37 PushV
	var_3048_int = var_3028_int; // 0xa38 Mov
	var_3049_string = "pers_rat_big"; // 0xa39 MovS
	var_3050_string = "rat_big.xml"; // 0xa3a MovS
	var_3051_int = 3; // 0xa3b MovI
	func_509(var_3048_int, var_3049_string, var_3050_string, var_3051_int); // 0xa3c NEW_2
	var_3052_int = 0; var_3053_string = ""; var_3054_string = ""; var_3055_int = 0; // 0xa3e PushV
	var_3052_int = var_3028_int; // 0xa3f Mov
	var_3053_string = "fog"; // 0xa40 MovS
	var_3054_string = "fog.xml"; // 0xa41 MovS
	var_3055_int = 8; // 0xa42 MovI
	func_535(var_3052_int, var_3053_string, var_3054_string, var_3055_int); // 0xa43 NEW_2
	var_3056_int = 5; // 0xa45 PushI
	var_3057_bool = var_3029_int >= var_3056_int; // 0xa46 GE
	if(var_3057_bool == 0) goto Label_2639; // 0xa47 JumpB
	var_3058_int = 0; var_3059_string = ""; var_3060_string = ""; var_3061_int = 0; // 0xa48 PushV
	var_3058_int = var_3028_int; // 0xa49 Mov
	var_3059_string = "fog"; // 0xa4a MovS
	var_3060_string = "fog_hunter.xml"; // 0xa4b MovS
	var_3061_int = 3; // 0xa4c MovI
	func_535(var_3058_int, var_3059_string, var_3060_string, var_3061_int); // 0xa4d NEW_2
	
Label_2639:
	var_3062_int = 1; // 0xa4f PushI
	var_3063_float = 0; var_3064_int = 0; // 0xa50 PushV
	var_3064_int = var_3029_int; // 0xa51 Mov
	func_1261(var_3063_float, var_3064_int); // 0xa52 NEW_2
	var_3033_int = var_3062_int * var_3063_float; // 0xa54 Mult2
	var_3065_int = var_3033_int; // 0xa55 Push
	if(var_3065_int == 0) goto Label_2654; // 0xa56 JumpB
	var_3066_int = 0; var_3067_string = ""; var_3068_string = ""; var_3069_int = 0; // 0xa57 PushV
	var_3066_int = var_3028_int; // 0xa58 Mov
	var_3067_string = "pers_bomber"; // 0xa59 MovS
	var_3068_string = "bomber.xml"; // 0xa5a MovS
	var_3069_int = var_3033_int; // 0xa5b Mov
	func_509(var_3066_int, var_3067_string, var_3068_string, var_3069_int); // 0xa5c NEW_2
	
Label_2654:
	goto Label_2708; // 0xa5e Jump
	
Label_2708:
	var_3070_int = 0; var_3071_string = ""; var_3072_string = ""; var_3073_int = 0; var_3074_int = 0; var_3075_int = 0; // 0xa94 PushV
	var_3070_int = var_3028_int; // 0xa95 Mov
	var_3071_string = "pers_worker"; // 0xa96 MovS
	var_3072_string = "agony1_man.xml"; // 0xa97 MovS
	var_3073_int = 2; // 0xa98 MovI
	var_3074_int = 4; // 0xa99 MovI
	var_3075_int = 4; // 0xa9a MovI
	func_522(var_3070_int, var_3071_string, var_3072_string, var_3073_int, var_3074_int, var_3075_int); // 0xa9b NEW_2
	var_3076_int = 0; var_3077_string = ""; var_3078_string = ""; var_3079_int = 0; var_3080_int = 0; var_3081_int = 0; // 0xa9d PushV
	var_3076_int = var_3028_int; // 0xa9e Mov
	var_3077_string = "pers_unosha"; // 0xa9f MovS
	var_3078_string = "agony1_man.xml"; // 0xaa0 MovS
	var_3079_int = 2; // 0xaa1 MovI
	var_3080_int = 4; // 0xaa2 MovI
	var_3081_int = 4; // 0xaa3 MovI
	func_522(var_3076_int, var_3077_string, var_3078_string, var_3079_int, var_3080_int, var_3081_int); // 0xaa4 NEW_2
	var_3082_int = 0; var_3083_string = ""; var_3084_string = ""; var_3085_int = 0; var_3086_int = 0; var_3087_int = 0; // 0xaa6 PushV
	var_3082_int = var_3028_int; // 0xaa7 Mov
	var_3083_string = "pers_woman"; // 0xaa8 MovS
	var_3084_string = "agony1_woman.xml"; // 0xaa9 MovS
	var_3085_int = 2; // 0xaaa MovI
	var_3086_int = 4; // 0xaab MovI
	var_3087_int = 4; // 0xaac MovI
	func_522(var_3082_int, var_3083_string, var_3084_string, var_3085_int, var_3086_int, var_3087_int); // 0xaad NEW_2
	var_3088_int = 0; var_3089_string = ""; var_3090_string = ""; var_3091_int = 0; var_3092_int = 0; var_3093_int = 0; // 0xaaf PushV
	var_3088_int = var_3028_int; // 0xab0 Mov
	var_3089_string = "pers_wasted_girl"; // 0xab1 MovS
	var_3090_string = "agony1_woman.xml"; // 0xab2 MovS
	var_3091_int = 2; // 0xab3 MovI
	var_3092_int = 4; // 0xab4 MovI
	var_3093_int = 4; // 0xab5 MovI
	func_522(var_3088_int, var_3089_string, var_3090_string, var_3091_int, var_3092_int, var_3093_int); // 0xab6 NEW_2
	var_3094_bool = 0; var_3095_int = 0; var_3096_int = 0; // 0xab8 PushV
	var_3095_int = var_3029_int; // 0xab9 Mov
	var_3096_int = var_3030_int; // 0xaba Mov
	func_1351(var_3094_bool, var_3095_int, var_3096_int); // 0xabb NEW_2
	if(var_3094_bool == 0) goto Label_2757; // 0xabd JumpB
	var_3097_int = 0; var_3098_string = ""; var_3099_string = ""; var_3100_int = 0; // 0xabe PushV
	var_3097_int = var_3028_int; // 0xabf Mov
	var_3098_string = "pers_soldat"; // 0xac0 MovS
	var_3099_string = "soldier_marauder.xml"; // 0xac1 MovS
	var_3100_int = 2; // 0xac2 MovI
	func_509(var_3097_int, var_3098_string, var_3099_string, var_3100_int); // 0xac3 NEW_2
	
Label_2757:
	var_3101_bool = 0; var_3102_int = 0; // 0xac5 PushV
	var_3102_int = var_3029_int; // 0xac6 Mov
	func_1378(var_3101_bool, var_3102_int); // 0xac7 NEW_2
	if(var_3101_bool == 0) goto Label_2769; // 0xac9 JumpB
	var_3103_int = 0; var_3104_string = ""; var_3105_string = ""; var_3106_int = 0; // 0xaca PushV
	var_3103_int = var_3028_int; // 0xacb Mov
	var_3104_string = "pers_sanitar"; // 0xacc MovS
	var_3105_string = "sanitar.xml"; // 0xacd MovS
	var_3106_int = 2; // 0xace MovI
	func_509(var_3103_int, var_3104_string, var_3105_string, var_3106_int); // 0xacf NEW_2
	
Label_2769:
	return 4; // 0xad1 Return
	
Label_2655:
	var_3107_int = 0; var_3108_string = ""; var_3109_string = ""; var_3110_int = 0; // 0xa5f PushV
	var_3107_int = var_3028_int; // 0xa60 Mov
	var_3108_string = "pers_vaxxabit"; // 0xa61 MovS
	var_3109_string = "vaxxabit_d.xml"; // 0xa62 MovS
	var_3110_int = 6; // 0xa63 MovI
	func_509(var_3107_int, var_3108_string, var_3109_string, var_3110_int); // 0xa64 NEW_2
	var_3111_int = 0; var_3112_string = ""; var_3113_string = ""; var_3114_int = 0; // 0xa66 PushV
	var_3111_int = var_3028_int; // 0xa67 Mov
	var_3112_string = "pers_vaxxabitka"; // 0xa68 MovS
	var_3113_string = "vaxxabitka_d.xml"; // 0xa69 MovS
	var_3114_int = 5; // 0xa6a MovI
	func_509(var_3111_int, var_3112_string, var_3113_string, var_3114_int); // 0xa6b NEW_2
	var_3115_int = 0; var_3116_string = ""; var_3117_string = ""; var_3118_int = 0; // 0xa6d PushV
	var_3115_int = var_3028_int; // 0xa6e Mov
	var_3116_string = "pers_rat_big"; // 0xa6f MovS
	var_3117_string = "rat_big.xml"; // 0xa70 MovS
	var_3118_int = 4; // 0xa71 MovI
	func_509(var_3115_int, var_3116_string, var_3117_string, var_3118_int); // 0xa72 NEW_2
	var_3119_int = 0; var_3120_string = ""; var_3121_string = ""; var_3122_int = 0; // 0xa74 PushV
	var_3119_int = var_3028_int; // 0xa75 Mov
	var_3120_string = "fog"; // 0xa76 MovS
	var_3121_string = "fog.xml"; // 0xa77 MovS
	var_3122_int = 6; // 0xa78 MovI
	func_535(var_3119_int, var_3120_string, var_3121_string, var_3122_int); // 0xa79 NEW_2
	var_3123_int = 5; // 0xa7b PushI
	var_3124_bool = var_3029_int >= var_3123_int; // 0xa7c GE
	if(var_3124_bool == 0) goto Label_2693; // 0xa7d JumpB
	var_3125_int = 0; var_3126_string = ""; var_3127_string = ""; var_3128_int = 0; // 0xa7e PushV
	var_3125_int = var_3028_int; // 0xa7f Mov
	var_3126_string = "fog"; // 0xa80 MovS
	var_3127_string = "fog_hunter.xml"; // 0xa81 MovS
	var_3128_int = 2; // 0xa82 MovI
	func_535(var_3125_int, var_3126_string, var_3127_string, var_3128_int); // 0xa83 NEW_2
	
Label_2693:
	var_3129_int = 1; // 0xa85 PushI
	var_3130_float = 0; var_3131_int = 0; // 0xa86 PushV
	var_3131_int = var_3029_int; // 0xa87 Mov
	func_1261(var_3130_float, var_3131_int); // 0xa88 NEW_2
	var_3034_int = var_3129_int * var_3130_float; // 0xa8a Mult2
	var_3132_int = var_3034_int; // 0xa8b Push
	if(var_3132_int == 0) goto Label_2708; // 0xa8c JumpB
	var_3133_int = 0; var_3134_string = ""; var_3135_string = ""; var_3136_int = 0; // 0xa8d PushV
	var_3133_int = var_3028_int; // 0xa8e Mov
	var_3134_string = "pers_bomber"; // 0xa8f MovS
	var_3135_string = "bomber.xml"; // 0xa90 MovS
	var_3136_int = var_3034_int; // 0xa91 Mov
	func_509(var_3133_int, var_3134_string, var_3135_string, var_3136_int); // 0xa92 NEW_2
}


func_10783()
{
	var_4782_string = ""; var_4783_bool = 0; // 0x2a20 PushV
	var_4782_string = "termitnik@door1"; // 0x2a21 MovS
	var_4783_bool = 1; // 0x2a22 MovB
	func_183(var_4782_string, var_4783_bool); // 0x2a23 NEW_2
	return 0; // 0x2a25 Return
}


func_4642(var_2276_int, var_2277_int, var_2278_object, var_2279_object, var_2280_object, var_2281_object)
{
	var_2282_int = 0; // 0x1223 PushI
	var_2283_bool = var_2277_int == var_2282_int; // 0x1224 Eq
	if(var_2283_bool == 0) goto Label_4682; // 0x1225 JumpB
	var_2284_int = 0; var_2285_bool = 0; // 0x1226 PushV
	var_2284_int = 1; // 0x1227 MovI
	var_2285_bool = 1; // 0x1228 MovB
	func_802(var_2284_int, var_2285_bool); // 0x1229 NEW_2
	var_2286_int = 0; var_2287_bool = 0; var_2288_int = 0; // 0x122b PushV
	var_2286_int = 1; // 0x122c MovI
	var_2287_bool = 1; // 0x122d MovB
	var_2288_int = 1; // 0x122e MovI
	func_819(var_2286_int, var_2287_bool, var_2288_int); // 0x122f NEW_2
	var_2289_int = 0; var_2290_int = 0; var_2291_object = Obj(); var_2292_object = Obj(); var_2293_object = Obj(); // 0x1231 PushV
	var_2289_int = 1; // 0x1232 MovI
	var_2290_int = var_2276_int; // 0x1233 Mov
	var_2291_object = var_2278_object; // 0x1234 Mov
	var_2292_object = var_2279_object; // 0x1235 Mov
	var_2293_object = var_2280_object; // 0x1236 Mov
	func_647(var_2289_int, var_2290_int, var_2291_object, var_2292_object, var_2293_object); // 0x1237 NEW_2
	var_2294_object = Obj(); var_2295_int = 0; // 0x1239 PushV
	var_2294_object = var_2281_object; // 0x123a Mov
	var_2295_int = 1; // 0x123b MovI
	func_311(var_2295_int); // 0x123c NEW_2
	var_2296_int = 0; var_2297_bool = 0; var_2298_int = 0; // 0x123e PushV
	var_2296_int = 1; // 0x123f MovI
	var_2297_bool = 1; // 0x1240 MovB
	var_2298_int = 8; // 0x1241 MovI
	func_876(var_2296_int, var_2297_bool, var_2298_int); // 0x1242 NEW_2
	var_2299_int = 0; var_2300_bool = 0; var_2301_int = 0; // 0x1244 PushV
	var_2299_int = 1; // 0x1245 MovI
	var_2300_bool = 0; // 0x1246 MovB
	var_2301_int = 8; // 0x1247 MovI
	func_938(var_2299_int, var_2300_bool, var_2301_int); // 0x1248 NEW_2
	
Label_4682:
	var_2302_int = 0; var_2303_bool = 0; // 0x124a PushV
	var_2302_int = 1; // 0x124b MovI
	var_2303_bool = 0; // 0x124c MovB
	func_785(var_2302_int, var_2303_bool); // 0x124d NEW_2
	var_2304_int = 0; var_2305_int = 0; var_2306_int = 0; // 0x124f PushV
	var_2304_int = 1; // 0x1250 MovI
	var_2305_int = var_2276_int; // 0x1251 Mov
	var_2306_int = var_2277_int; // 0x1252 Mov
	func_3310(var_2304_int, var_2305_int, var_2306_int); // 0x1253 NEW_2
	return 0; // 0x1255 Return
}


func_548(var_572_int, var_573_bool)
{
	var_574_object = Obj(); var_575_object = Obj(); var_576_bool = 0; var_577_object = Obj(); var_578_object = Obj(); var_579_object = Obj(); var_580_bool = 0; var_581_object = Obj(); // 0x224 PushV
	GetMainOutdoorScene(var_578_object); // 0x225 Func
	var_582_int = 101; // 0x227 PushI
	var_583_int = var_582_int + var_572_int; // 0x228 Add
	GetGroupActors(var_579_object, var_583_int); // 0x229 ObjFunc
	var_584_object = var_579_object; // 0x22b Push
	if(var_584_object == 0) goto Label_579; // 0x22c JumpB
	
Label_557:
	Next(var_580_bool, var_581_object); // 0x22d ObjFunc
	var_585_bool = var_580_bool; // 0x22f Push
	if(var_585_bool == 0) goto Label_578; // 0x230 JumpB
	var_586_bool = 0; var_587_object = Obj(); var_588_string = ""; // 0x231 PushV
	var_587_object = var_581_object; // 0x232 Mov
	var_588_string = "locked"; // 0x233 MovS
	func_87(var_586_bool, var_587_object, var_588_string); // 0x234 NEW_2
	if(var_586_bool == 0) goto Label_571; // 0x236 JumpB
	var_595_string = "locked"; // 0x237 PushS
	SetProperty(var_595_string, var_573_bool); // 0x238 ObjFunc
	goto Label_577; // 0x23a Jump
	
Label_577:
	goto Label_557; // 0x241 Jump
	
Label_571:
	var_596_string = "Actor ""; // 0x23b PushS
	var_597_int = var_596_string + var_581_object; // 0x23c Add
	var_598_string = "" can't be locked"; // 0x23d PushS
	var_599_int = var_597_int + var_598_string; // 0x23e Add
	Trace(var_599_int); // 0x23f Func
	
Label_578:
	var_581_object = 0; // 0x242 SetNull
	
Label_579:
	return 8; // 0x243 Return
}


func_6692()
{
	var_267_string = "r6_house2_03"; // 0x1a25 PushS
	add(var_267_string); // 0x1a26 ObjFunc
	var_268_string = "r6_house4_01_i2"; // 0x1a28 PushS
	add(var_268_string); // 0x1a29 ObjFunc
	var_269_string = "r6_house4_02_i2"; // 0x1a2b PushS
	add(var_269_string); // 0x1a2c ObjFunc
	var_270_string = "r6_house4_02"; // 0x1a2e PushS
	add(var_270_string); // 0x1a2f ObjFunc
	var_271_string = "r6_house3_02_i2"; // 0x1a31 PushS
	add(var_271_string); // 0x1a32 ObjFunc
	var_272_string = "r6_house3_02"; // 0x1a34 PushS
	add(var_272_string); // 0x1a35 ObjFunc
	var_273_string = "r6_house3_01_i2"; // 0x1a37 PushS
	add(var_273_string); // 0x1a38 ObjFunc
	var_274_string = "r6_house3_01"; // 0x1a3a PushS
	add(var_274_string); // 0x1a3b ObjFunc
	var_275_string = "r6_house2_01"; // 0x1a3d PushS
	add(var_275_string); // 0x1a3e ObjFunc
	var_276_string = "r6_house7_01"; // 0x1a40 PushS
	add(var_276_string); // 0x1a41 ObjFunc
	var_277_string = "r6_house7_02"; // 0x1a43 PushS
	add(var_277_string); // 0x1a44 ObjFunc
	var_278_string = "r6_House6_01"; // 0x1a46 PushS
	add(var_278_string); // 0x1a47 ObjFunc
	var_279_string = "r6_house2_02"; // 0x1a49 PushS
	add(var_279_string); // 0x1a4a ObjFunc
	return 0; // 0x1a4c Return
}


func_10790()
{
	var_5912_string = ""; var_5913_bool = 0; // 0x2a27 PushV
	var_5912_string = "termitnik@door1"; // 0x2a28 MovS
	var_5913_bool = 0; // 0x2a29 MovB
	func_183(var_5912_string, var_5913_bool); // 0x2a2a NEW_2
	return 0; // 0x2a2c Return
}


func_5668()
{
	var_179_string = "House6_02"; // 0x1625 PushS
	add(var_179_string); // 0x1626 ObjFunc
	var_180_string = "House6_01"; // 0x1628 PushS
	add(var_180_string); // 0x1629 ObjFunc
	var_181_string = "house_2_01"; // 0x162b PushS
	add(var_181_string); // 0x162c ObjFunc
	var_182_string = "house7_03"; // 0x162e PushS
	add(var_182_string); // 0x162f ObjFunc
	var_183_string = "house7_02"; // 0x1631 PushS
	add(var_183_string); // 0x1632 ObjFunc
	var_184_string = "house3_01_i2"; // 0x1634 PushS
	add(var_184_string); // 0x1635 ObjFunc
	var_185_string = "house3_01"; // 0x1637 PushS
	add(var_185_string); // 0x1638 ObjFunc
	var_186_string = "house_2_03"; // 0x163a PushS
	add(var_186_string); // 0x163b ObjFunc
	var_187_string = "house_2_02"; // 0x163d PushS
	add(var_187_string); // 0x163e ObjFunc
	var_188_string = "house4_01_i2"; // 0x1640 PushS
	add(var_188_string); // 0x1641 ObjFunc
	var_189_string = "house4_01"; // 0x1643 PushS
	add(var_189_string); // 0x1644 ObjFunc
	var_190_string = "House6_05"; // 0x1646 PushS
	add(var_190_string); // 0x1647 ObjFunc
	var_191_string = "House6_04"; // 0x1649 PushS
	add(var_191_string); // 0x164a ObjFunc
	var_192_string = "House6_03"; // 0x164c PushS
	add(var_192_string); // 0x164d ObjFunc
	return 0; // 0x164f Return
}


func_10797()
{
	var_4889_string = "resque_list"; // 0x2a2e PushS
	var_4890_int = 1; // 0x2a2f PushI
	SetVariable(var_4889_string, var_4890_int); // 0x2a30 Func
	func_14467(); // 0x2a33 NEW_2
	return 0; // 0x2a35 Return
}


func_8754()
{
	var_4466_int = 0; var_4467_object = Obj(); var_4468_int = 0; var_4469_object = Obj(); var_4470_bool = 0; var_4471_cvector = CVector(0,0,0); var_4472_cvector = CVector(0,0,0); var_4473_string = ""; var_4474_int = 0; var_4475_object = Obj(); var_4476_int = 0; var_4477_object = Obj(); var_4478_bool = 0; var_4479_cvector = CVector(0,0,0); var_4480_cvector = CVector(0,0,0); var_4481_string = ""; // 0x2232 PushV
	var_4482_int = 0; // 0x2233 PushV
	func_12520(var_4482_int); // 0x2234 NEW_2
	var_4483_int = 0; // 0x2236 PushI
	var_4484_bool = var_4482_int == var_4483_int; // 0x2237 Eq
	if(var_4484_bool == 0) goto Label_8762; // 0x2238 JumpB
	return 16; // 0x2239 Return
	
Label_8762:
	var_4485_object = GlobalVars[6]; // 0x223a PushGE
	size(var_4474_int); // 0x223b ObjFunc
	GetMainOutdoorScene(var_4475_object); // 0x223d Func
	var_4476_int = 0; // 0x223f MovI
	
Label_8768:
	var_4486_bool = var_4476_int < var_4474_int; // 0x2240 LT
	if(var_4486_bool == 0) goto Label_8827; // 0x2241 JumpB
	var_4487_object = GlobalVars[6]; // 0x2242 PushGE
	get(var_4477_object, var_4476_int); // 0x2243 ObjFunc
	var_4488_object = var_4477_object; // 0x2245 Push
	if(var_4488_object == 0) goto Label_8776; // 0x2246 JumpB
	goto Label_8824; // 0x2247 Jump
	
Label_8824:
	var_4489_int = 1; // 0x2278 PushI
	var_4476_int = var_4476_int + var_4489_int; // 0x2279 Add2
	goto Label_8768; // 0x227a Jump
	
Label_8776:
	var_4490_string = "pt_plant"; // 0x2248 PushS
	var_4491_int = 1; // 0x2249 PushI
	var_4492_int = var_4476_int + var_4491_int; // 0x224a Add
	var_4493_int = var_4490_string + var_4492_int; // 0x224b Add
	GetLocator(var_4493_int, var_4478_bool, var_4479_cvector, var_4480_cvector); // 0x224c ObjFunc
	var_4494_bool = var_4478_bool == 0; // 0x224e Not
	if(var_4494_bool == 0) goto Label_8788; // 0x224f JumpB
	var_4495_string = "Plant point not found"; // 0x2250 PushS
	Trace(var_4495_string); // 0x2251 Func
	goto Label_8824; // 0x2253 Jump
	
Label_8788:
	var_4496_int = 6; // 0x2254 PushI
	var_4497_int = 3; // 0x2255 PushI
	var_4498_int = 3; // 0x2256 PushI
	var_4499_int = 3; // 0x2257 PushI
	var_4500_int = 1; // 0x2258 PushI
	var_4501_int = 1; // 0x2259 PushI
	var_4502_string = ""; // 0x225a PushS
	var_4503_string = "grass_black_tvir"; // 0x225b PushS
	var_4504_string = "grass_blood_tvir"; // 0x225c PushS
	var_4505_string = "grass_brown_tvir"; // 0x225d PushS
	var_4506_string = "grass_savyur"; // 0x225e PushS
	var_4507_string = "grass_white_plet"; // 0x225f PushS
	RandOneOf(var_4481_string, var_4496_int, var_4497_int, var_4498_int, var_4499_int, var_4500_int, var_4501_int, var_4502_string, var_4503_string, var_4504_string, var_4505_string, var_4506_string, var_4507_string); // 0x2260 Func
	var_4508_string = var_4481_string; // 0x2262 Push
	if(var_4508_string == 0) goto Label_8823; // 0x2263 JumpB
	var_4509_string = "scripted"; // 0x2264 PushS
	var_4510_string = "item_"; // 0x2265 PushS
	var_4511_int = var_4510_string + var_4481_string; // 0x2266 Add
	var_4512_string = "_stat.xml"; // 0x2267 PushS
	var_4513_int = var_4511_int + var_4512_string; // 0x2268 Add
	AddStationaryActorByType(var_4477_object, var_4479_cvector, var_4480_cvector, var_4509_string, var_4513_int); // 0x2269 ObjFunc
	var_4514_object = GlobalVars[6]; // 0x226b PushGE
	set(var_4476_int, var_4477_object); // 0x226c ObjFunc
	var_4515_string = "New plant: ""; // 0x226e PushS
	var_4516_int = var_4515_string + var_4481_string; // 0x226f Add
	var_4517_string = "" at location #"; // 0x2270 PushS
	var_4518_int = var_4516_int + var_4517_string; // 0x2271 Add
	var_4519_int = 1; // 0x2272 PushI
	var_4520_int = var_4476_int + var_4519_int; // 0x2273 Add
	var_4521_int = var_4518_int + var_4520_int; // 0x2274 Add
	Trace(var_4521_int); // 0x2275 Func
	
Label_8823:
	var_4477_object = 0; // 0x2277 SetNull
	
Label_8827:
	return 16; // 0x227b Return
}


func_10806()
{
	var_5679_string = ""; var_5680_bool = 0; // 0x2a37 PushV
	var_5679_string = "factory@door1"; // 0x2a38 MovS
	var_5680_bool = 0; // 0x2a39 MovB
	func_183(var_5679_string, var_5680_bool); // 0x2a3a NEW_2
	return 0; // 0x2a3c Return
}


func_10813()
{
	var_4735_string = ""; var_4736_bool = 0; // 0x2a3e PushV
	var_4735_string = "icot_eva@door1"; // 0x2a3f MovS
	var_4736_bool = 1; // 0x2a40 MovB
	func_183(var_4735_string, var_4736_bool); // 0x2a41 NEW_2
	return 0; // 0x2a43 Return
}


func_11843()
{
	var_5978_object = Obj(); var_5979_object = Obj(); var_5980_object = Obj(); var_5981_object = Obj(); // 0x2e43 PushV
	var_5982_object = Obj(); // 0x2e44 PushV
	func_12503(var_5982_object); // 0x2e45 NEW_2
	var_5980_object = var_5982_object; // 0x2e46 Mov
	var_5983_string = "d10q01AglajaGotoPetr"; // 0x2e48 PushS
	FindMark(var_5981_object, var_5983_string); // 0x2e49 ObjFunc
	var_5984_object = var_5981_object; // 0x2e4b Push
	if(var_5984_object == 0) goto Label_11855; // 0x2e4c JumpB
	Remove(); // 0x2e4d ObjFunc
	
Label_11855:
	var_5985_string = "d10q02KaterinaGotoRubin"; // 0x2e4f PushS
	FindMark(var_5981_object, var_5985_string); // 0x2e50 ObjFunc
	var_5986_object = var_5981_object; // 0x2e52 Push
	if(var_5986_object == 0) goto Label_11862; // 0x2e53 JumpB
	Remove(); // 0x2e54 ObjFunc
	
Label_11862:
	var_5987_string = "d10q02RubinGotoMaria"; // 0x2e56 PushS
	FindMark(var_5981_object, var_5987_string); // 0x2e57 ObjFunc
	var_5988_object = var_5981_object; // 0x2e59 Push
	if(var_5988_object == 0) goto Label_11869; // 0x2e5a JumpB
	Remove(); // 0x2e5b ObjFunc
	
Label_11869:
	var_5989_string = "d10q02GeorgGotoAglaja"; // 0x2e5d PushS
	FindMark(var_5981_object, var_5989_string); // 0x2e5e ObjFunc
	var_5990_object = var_5981_object; // 0x2e60 Push
	if(var_5990_object == 0) goto Label_11876; // 0x2e61 JumpB
	Remove(); // 0x2e62 ObjFunc
	
Label_11876:
	var_5991_string = "d10q03GotoMark"; // 0x2e64 PushS
	FindMark(var_5981_object, var_5991_string); // 0x2e65 ObjFunc
	var_5992_object = var_5981_object; // 0x2e67 Push
	if(var_5992_object == 0) goto Label_11883; // 0x2e68 JumpB
	Remove(); // 0x2e69 ObjFunc
	
Label_11883:
	var_5993_string = "d10q03MarkGotoBlock"; // 0x2e6b PushS
	FindMark(var_5981_object, var_5993_string); // 0x2e6c ObjFunc
	var_5994_object = var_5981_object; // 0x2e6e Push
	if(var_5994_object == 0) goto Label_11890; // 0x2e6f JumpB
	Remove(); // 0x2e70 ObjFunc
	
Label_11890:
	var_5995_bool = 0; var_5996_int = 0; // 0x2e72 PushV
	var_5996_int = 186; // 0x2e73 MovI
	func_12478(var_5995_bool, var_5996_int); // 0x2e74 NEW_2
	var_5997_bool = 0; var_5998_int = 0; // 0x2e76 PushV
	var_5998_int = 666; // 0x2e77 MovI
	func_12478(var_5997_bool, var_5998_int); // 0x2e78 NEW_2
	var_5999_bool = 0; var_6000_int = 0; // 0x2e7a PushV
	var_6000_int = 672; // 0x2e7b MovI
	func_12478(var_5999_bool, var_6000_int); // 0x2e7c NEW_2
	return 4; // 0x2e7e Return
}


func_10820()
{
	var_6101_object = Obj(); var_6102_object = Obj(); var_6103_object = Obj(); var_6104_object = Obj(); // 0x2a44 PushV
	var_6105_object = Obj(); // 0x2a45 PushV
	func_12503(var_6105_object); // 0x2a46 NEW_2
	var_6103_object = var_6105_object; // 0x2a47 Mov
	var_6106_string = "d1EvaGotoMaria"; // 0x2a49 PushS
	FindMark(var_6104_object, var_6106_string); // 0x2a4a ObjFunc
	var_6107_object = var_6104_object; // 0x2a4c Push
	if(var_6107_object == 0) goto Label_10832; // 0x2a4d JumpB
	Remove(); // 0x2a4e ObjFunc
	
Label_10832:
	var_6108_string = "d1EvaInfo"; // 0x2a50 PushS
	FindMark(var_6104_object, var_6108_string); // 0x2a51 ObjFunc
	var_6109_object = var_6104_object; // 0x2a53 Push
	if(var_6109_object == 0) goto Label_10839; // 0x2a54 JumpB
	Remove(); // 0x2a55 ObjFunc
	
Label_10839:
	var_6110_string = "d1GeorgInfo"; // 0x2a57 PushS
	FindMark(var_6104_object, var_6110_string); // 0x2a58 ObjFunc
	var_6111_object = var_6104_object; // 0x2a5a Push
	if(var_6111_object == 0) goto Label_10846; // 0x2a5b JumpB
	Remove(); // 0x2a5c ObjFunc
	
Label_10846:
	var_6112_string = "d1JuliaMapMarkEva"; // 0x2a5e PushS
	FindMark(var_6104_object, var_6112_string); // 0x2a5f ObjFunc
	var_6113_object = var_6104_object; // 0x2a61 Push
	if(var_6113_object == 0) goto Label_10853; // 0x2a62 JumpB
	Remove(); // 0x2a63 ObjFunc
	
Label_10853:
	var_6114_string = "d1JuliaMapMarkLara"; // 0x2a65 PushS
	FindMark(var_6104_object, var_6114_string); // 0x2a66 ObjFunc
	var_6115_object = var_6104_object; // 0x2a68 Push
	if(var_6115_object == 0) goto Label_10860; // 0x2a69 JumpB
	Remove(); // 0x2a6a ObjFunc
	
Label_10860:
	var_6116_string = "d1KaterinaMapMark"; // 0x2a6c PushS
	FindMark(var_6104_object, var_6116_string); // 0x2a6d ObjFunc
	var_6117_object = var_6104_object; // 0x2a6f Push
	if(var_6117_object == 0) goto Label_10867; // 0x2a70 JumpB
	Remove(); // 0x2a71 ObjFunc
	
Label_10867:
	var_6118_string = "d1q01AlexandrGotoJulia"; // 0x2a73 PushS
	FindMark(var_6104_object, var_6118_string); // 0x2a74 ObjFunc
	var_6119_object = var_6104_object; // 0x2a76 Push
	if(var_6119_object == 0) goto Label_10874; // 0x2a77 JumpB
	Remove(); // 0x2a78 ObjFunc
	
Label_10874:
	var_6120_string = "d1q01AnnaMapMarkMladVlad"; // 0x2a7a PushS
	FindMark(var_6104_object, var_6120_string); // 0x2a7b ObjFunc
	var_6121_object = var_6104_object; // 0x2a7d Push
	if(var_6121_object == 0) goto Label_10881; // 0x2a7e JumpB
	Remove(); // 0x2a7f ObjFunc
	
Label_10881:
	var_6122_string = "d1q01EvaGotoSimon"; // 0x2a81 PushS
	FindMark(var_6104_object, var_6122_string); // 0x2a82 ObjFunc
	var_6123_object = var_6104_object; // 0x2a84 Push
	if(var_6123_object == 0) goto Label_10888; // 0x2a85 JumpB
	Remove(); // 0x2a86 ObjFunc
	
Label_10888:
	var_6124_string = "d1q01EvaMapMarkMladVlad"; // 0x2a88 PushS
	FindMark(var_6104_object, var_6124_string); // 0x2a89 ObjFunc
	var_6125_object = var_6104_object; // 0x2a8b Push
	if(var_6125_object == 0) goto Label_10895; // 0x2a8c JumpB
	Remove(); // 0x2a8d ObjFunc
	
Label_10895:
	var_6126_string = "d1q01GeorgGotoViktor"; // 0x2a8f PushS
	FindMark(var_6104_object, var_6126_string); // 0x2a90 ObjFunc
	var_6127_object = var_6104_object; // 0x2a92 Push
	if(var_6127_object == 0) goto Label_10902; // 0x2a93 JumpB
	Remove(); // 0x2a94 ObjFunc
	
Label_10902:
	var_6128_string = "d1q01JuliaGotoBigVlad"; // 0x2a96 PushS
	FindMark(var_6104_object, var_6128_string); // 0x2a97 ObjFunc
	var_6129_object = var_6104_object; // 0x2a99 Push
	if(var_6129_object == 0) goto Label_10909; // 0x2a9a JumpB
	Remove(); // 0x2a9b ObjFunc
	
Label_10909:
	var_6130_string = "d1q01LaraMarkMladVlad"; // 0x2a9d PushS
	FindMark(var_6104_object, var_6130_string); // 0x2a9e ObjFunc
	var_6131_object = var_6104_object; // 0x2aa0 Push
	if(var_6131_object == 0) goto Label_10916; // 0x2aa1 JumpB
	Remove(); // 0x2aa2 ObjFunc
	
Label_10916:
	var_6132_string = "d1q01PatrolGotoAlexandr"; // 0x2aa4 PushS
	FindMark(var_6104_object, var_6132_string); // 0x2aa5 ObjFunc
	var_6133_object = var_6104_object; // 0x2aa7 Push
	if(var_6133_object == 0) goto Label_10923; // 0x2aa8 JumpB
	Remove(); // 0x2aa9 ObjFunc
	
Label_10923:
	var_6134_string = "d1q01ViktorGotoIsidor"; // 0x2aab PushS
	FindMark(var_6104_object, var_6134_string); // 0x2aac ObjFunc
	var_6135_object = var_6104_object; // 0x2aae Push
	if(var_6135_object == 0) goto Label_10930; // 0x2aaf JumpB
	Remove(); // 0x2ab0 ObjFunc
	
Label_10930:
	var_6136_string = "d1q02AnnaGotoLaska"; // 0x2ab2 PushS
	FindMark(var_6104_object, var_6136_string); // 0x2ab3 ObjFunc
	var_6137_object = var_6104_object; // 0x2ab5 Push
	if(var_6137_object == 0) goto Label_10937; // 0x2ab6 JumpB
	Remove(); // 0x2ab7 ObjFunc
	
Label_10937:
	var_6138_string = "d1q02JuliaGotoAnna"; // 0x2ab9 PushS
	FindMark(var_6104_object, var_6138_string); // 0x2aba ObjFunc
	var_6139_object = var_6104_object; // 0x2abc Push
	if(var_6139_object == 0) goto Label_10944; // 0x2abd JumpB
	Remove(); // 0x2abe ObjFunc
	
Label_10944:
	var_6140_string = "d1q03KapellaGotoOspina"; // 0x2ac0 PushS
	FindMark(var_6104_object, var_6140_string); // 0x2ac1 ObjFunc
	var_6141_object = var_6104_object; // 0x2ac3 Push
	if(var_6141_object == 0) goto Label_10951; // 0x2ac4 JumpB
	Remove(); // 0x2ac5 ObjFunc
	
Label_10951:
	var_6142_string = "d1q03MladVladGotoOspina"; // 0x2ac7 PushS
	FindMark(var_6104_object, var_6142_string); // 0x2ac8 ObjFunc
	var_6143_object = var_6104_object; // 0x2aca Push
	if(var_6143_object == 0) goto Label_10958; // 0x2acb JumpB
	Remove(); // 0x2acc ObjFunc
	
Label_10958:
	var_6144_bool = 0; var_6145_int = 0; // 0x2ace PushV
	var_6145_int = 2; // 0x2acf MovI
	func_12478(var_6144_bool, var_6145_int); // 0x2ad0 NEW_2
	var_6146_bool = 0; var_6147_int = 0; // 0x2ad2 PushV
	var_6147_int = 7; // 0x2ad3 MovI
	func_12478(var_6146_bool, var_6147_int); // 0x2ad4 NEW_2
	var_6148_bool = 0; var_6149_int = 0; // 0x2ad6 PushV
	var_6149_int = 37; // 0x2ad7 MovI
	func_12478(var_6148_bool, var_6149_int); // 0x2ad8 NEW_2
	var_6150_bool = 0; var_6151_int = 0; // 0x2ada PushV
	var_6151_int = 43; // 0x2adb MovI
	func_12478(var_6150_bool, var_6151_int); // 0x2adc NEW_2
	var_6152_string = "Day1 cleanup"; // 0x2ade PushS
	Trace(var_6152_string); // 0x2adf Func
	return 4; // 0x2ae1 Return
}


func_582(var_2031_string, var_2033_string, var_2034_string)
{
	var_2040_object = Obj(); var_2041_int = 0; var_2042_bool = 0; var_2043_cvector = CVector(0,0,0); var_2044_cvector = CVector(0,0,0); var_2045_object = Obj(); var_2046_object = Obj(); var_2047_int = 0; var_2048_bool = 0; var_2049_cvector = CVector(0,0,0); var_2050_cvector = CVector(0,0,0); var_2051_object = Obj(); // 0x246 PushV
	GetMainOutdoorScene(var_2046_object); // 0x247 Func
	var_2047_int = 0; // 0x249 MovI
	
Label_586:
	var_2052_int = 1; // 0x24a PushI
	var_2053_int = var_2047_int + var_2052_int; // 0x24b Add
	var_2054_int = var_2031_string + var_2053_int; // 0x24c Add
	GetLocator(var_2054_int, var_2048_bool, var_2049_cvector, var_2050_cvector); // 0x24d ObjFunc
	var_2055_bool = var_2048_bool == 0; // 0x24f Not
	if(var_2055_bool == 0) goto Label_594; // 0x250 JumpB
	goto Label_602; // 0x251 Jump
	
Label_602:
	return 12; // 0x25a Return
	
Label_594:
	AddStationaryActor(var_2051_object, var_2049_cvector, var_2050_cvector, var_2033_string, var_2034_string); // 0x252 ObjFunc
	add(var_2051_object); // 0x254 ObjFunc
	var_2051_object = 0; // 0x256 SetNull
	var_2056_int = 1; // 0x257 PushI
	var_2047_int = var_2047_int + var_2056_int; // 0x258 Add2
	goto Label_586; // 0x259 Jump
}


func_7751(var_4421_object, var_4423_string, var_4424_string, var_4425_string)
{
	var_4427_bool = 0; var_4428_cvector = CVector(0,0,0); var_4429_cvector = CVector(0,0,0); var_4430_object = Obj(); var_4431_bool = 0; var_4432_cvector = CVector(0,0,0); var_4433_cvector = CVector(0,0,0); var_4434_object = Obj(); // 0x1e47 PushV
	var_4435_string = "pt_guard_"; // 0x1e48 PushS
	var_4436_int = var_4435_string + var_4423_string; // 0x1e49 Add
	GetLocator(var_4436_int, var_4431_bool, var_4432_cvector, var_4433_cvector); // 0x1e4a ObjFunc
	var_4437_bool = var_4431_bool == 0; // 0x1e4c Not
	if(var_4437_bool == 0) goto Label_7763; // 0x1e4d JumpB
	var_4438_string = "Locator doesn't exist for guard "; // 0x1e4e PushS
	var_4439_int = var_4438_string + var_4423_string; // 0x1e4f Add
	Trace(var_4439_int); // 0x1e50 Func
	goto Label_7765; // 0x1e52 Jump
	
Label_7765:
	var_4421_object = var_4434_object; // 0x1e55 Mov
	return 8; // 0x1e56 Return
	
Label_7763:
	AddStationaryActor(var_4434_object, var_4432_cvector, var_4433_cvector, var_4424_string, var_4425_string); // 0x1e53 ObjFunc
}


func_6733(var_1704_int, var_1705_int, var_1706_object, var_1707_object, var_1708_object, var_1709_object)
{
	var_1710_int = 0; // 0x1a4e PushI
	var_1711_bool = var_1705_int == var_1710_int; // 0x1a4f Eq
	if(var_1711_bool == 0) goto Label_6773; // 0x1a50 JumpB
	var_1712_int = 0; var_1713_bool = 0; // 0x1a51 PushV
	var_1712_int = 12; // 0x1a52 MovI
	var_1713_bool = 0; // 0x1a53 MovB
	func_802(var_1712_int, var_1713_bool); // 0x1a54 NEW_2
	var_1714_int = 0; var_1715_bool = 0; var_1716_int = 0; // 0x1a56 PushV
	var_1714_int = 12; // 0x1a57 MovI
	var_1715_bool = 0; // 0x1a58 MovB
	var_1716_int = 1; // 0x1a59 MovI
	func_819(var_1714_int, var_1715_bool, var_1716_int); // 0x1a5a NEW_2
	var_1717_int = 0; var_1718_int = 0; var_1719_object = Obj(); var_1720_object = Obj(); var_1721_object = Obj(); // 0x1a5c PushV
	var_1717_int = 12; // 0x1a5d MovI
	var_1718_int = var_1704_int; // 0x1a5e Mov
	var_1719_object = var_1706_object; // 0x1a5f Mov
	var_1720_object = var_1707_object; // 0x1a60 Mov
	var_1721_object = var_1708_object; // 0x1a61 Mov
	func_628(var_1718_int, var_1719_object, var_1720_object, var_1721_object); // 0x1a62 NEW_2
	var_1722_object = Obj(); var_1723_int = 0; // 0x1a64 PushV
	var_1722_object = var_1709_object; // 0x1a65 Mov
	var_1723_int = 0; // 0x1a66 MovI
	func_311(var_1723_int); // 0x1a67 NEW_2
	var_1724_int = 0; var_1725_bool = 0; var_1726_int = 0; // 0x1a69 PushV
	var_1724_int = 12; // 0x1a6a MovI
	var_1725_bool = 0; // 0x1a6b MovB
	var_1726_int = 4; // 0x1a6c MovI
	func_876(var_1724_int, var_1725_bool, var_1726_int); // 0x1a6d NEW_2
	var_1727_int = 0; var_1728_bool = 0; var_1729_int = 0; // 0x1a6f PushV
	var_1727_int = 12; // 0x1a70 MovI
	var_1728_bool = 0; // 0x1a71 MovB
	var_1729_int = 4; // 0x1a72 MovI
	func_938(var_1727_int, var_1728_bool, var_1729_int); // 0x1a73 NEW_2
	
Label_6773:
	var_1730_int = 0; var_1731_int = 0; // 0x1a75 PushV
	var_1730_int = 12; // 0x1a76 MovI
	var_1731_int = var_1705_int; // 0x1a77 Mov
	func_1026(var_1730_int, var_1731_int); // 0x1a78 NEW_2
	var_1732_int = 0; var_1733_int = 0; var_1734_int = 0; // 0x1a7a PushV
	var_1732_int = 12; // 0x1a7b MovI
	var_1733_int = var_1704_int; // 0x1a7c Mov
	var_1734_int = var_1705_int; // 0x1a7d Mov
	func_1630(var_1732_int, var_1733_int, var_1734_int); // 0x1a7e NEW_2
	return 0; // 0x1a80 Return
}


func_5712(var_1385_int, var_1386_int, var_1387_object, var_1388_object, var_1389_object, var_1390_object)
{
	var_1391_int = 0; // 0x1651 PushI
	var_1392_bool = var_1386_int == var_1391_int; // 0x1652 Eq
	if(var_1392_bool == 0) goto Label_5752; // 0x1653 JumpB
	var_1393_int = 0; var_1394_bool = 0; // 0x1654 PushV
	var_1393_int = 7; // 0x1655 MovI
	var_1394_bool = 0; // 0x1656 MovB
	func_802(var_1393_int, var_1394_bool); // 0x1657 NEW_2
	var_1395_int = 0; var_1396_bool = 0; var_1397_int = 0; // 0x1659 PushV
	var_1395_int = 7; // 0x165a MovI
	var_1396_bool = 0; // 0x165b MovB
	var_1397_int = 1; // 0x165c MovI
	func_819(var_1395_int, var_1396_bool, var_1397_int); // 0x165d NEW_2
	var_1398_int = 0; var_1399_int = 0; var_1400_object = Obj(); var_1401_object = Obj(); var_1402_object = Obj(); // 0x165f PushV
	var_1398_int = 7; // 0x1660 MovI
	var_1399_int = var_1385_int; // 0x1661 Mov
	var_1400_object = var_1387_object; // 0x1662 Mov
	var_1401_object = var_1388_object; // 0x1663 Mov
	var_1402_object = var_1389_object; // 0x1664 Mov
	func_628(var_1399_int, var_1400_object, var_1401_object, var_1402_object); // 0x1665 NEW_2
	var_1403_object = Obj(); var_1404_int = 0; // 0x1667 PushV
	var_1403_object = var_1390_object; // 0x1668 Mov
	var_1404_int = 0; // 0x1669 MovI
	func_311(var_1404_int); // 0x166a NEW_2
	var_1405_int = 0; var_1406_bool = 0; var_1407_int = 0; // 0x166c PushV
	var_1405_int = 7; // 0x166d MovI
	var_1406_bool = 0; // 0x166e MovB
	var_1407_int = 6; // 0x166f MovI
	func_876(var_1405_int, var_1406_bool, var_1407_int); // 0x1670 NEW_2
	var_1408_int = 0; var_1409_bool = 0; var_1410_int = 0; // 0x1672 PushV
	var_1408_int = 7; // 0x1673 MovI
	var_1409_bool = 0; // 0x1674 MovB
	var_1410_int = 6; // 0x1675 MovI
	func_938(var_1408_int, var_1409_bool, var_1410_int); // 0x1676 NEW_2
	
Label_5752:
	var_1411_int = 0; var_1412_int = 0; // 0x1678 PushV
	var_1411_int = 7; // 0x1679 MovI
	var_1412_int = var_1386_int; // 0x167a Mov
	func_1026(var_1411_int, var_1412_int); // 0x167b NEW_2
	var_1413_int = 0; var_1414_int = 0; var_1415_int = 0; // 0x167d PushV
	var_1413_int = 7; // 0x167e MovI
	var_1414_int = var_1385_int; // 0x167f Mov
	var_1415_int = var_1386_int; // 0x1680 Mov
	func_1630(var_1413_int, var_1414_int, var_1415_int); // 0x1681 NEW_2
	return 0; // 0x1683 Return
}


func_3665(var_3817_int, var_3818_int, var_3819_int)
{
	var_3820_int = 0; var_3821_int = 0; var_3822_int = 0; var_3823_int = 0; var_3824_int = 0; var_3825_int = 0; var_3826_int = 0; var_3827_int = 0; // 0xe51 PushV
	var_3828_bool = 0; // 0xe52 PushV
	var_3828_bool = 0; // 0xe53 MovB
	var_3829_int = 8; // 0xe54 PushI
	var_3830_bool = var_3819_int > var_3829_int; // 0xe55 GT
	if(var_3830_bool == 0) goto Label_3675; // 0xe56 JumpB
	var_3831_int = 21; // 0xe57 PushI
	var_3832_bool = var_3819_int < var_3831_int; // 0xe58 LT
	if(var_3832_bool == 0) goto Label_3675; // 0xe59 JumpB
	var_3828_bool = 1; // 0xe5a MovB
	
Label_3675:
	if(var_3828_bool == 0) goto Label_3752; // 0xe5b JumpB
	var_3833_int = 0; var_3834_string = ""; var_3835_string = ""; var_3836_int = 0; // 0xe5c PushV
	var_3833_int = var_3817_int; // 0xe5d Mov
	var_3834_string = "pers_rat"; // 0xe5e MovS
	var_3835_string = "rat.xml"; // 0xe5f MovS
	var_3836_int = 1; // 0xe60 MovI
	func_509(var_3833_int, var_3834_string, var_3835_string, var_3836_int); // 0xe61 NEW_2
	var_3837_int = 0; var_3838_string = ""; var_3839_string = ""; var_3840_int = 0; // 0xe63 PushV
	var_3837_int = var_3817_int; // 0xe64 Mov
	var_3838_string = "pers_alkash"; // 0xe65 MovS
	var_3839_string = "alkash.xml"; // 0xe66 MovS
	var_3840_int = 2; // 0xe67 MovI
	func_509(var_3837_int, var_3838_string, var_3839_string, var_3840_int); // 0xe68 NEW_2
	var_3841_int = 0; var_3842_string = ""; var_3843_string = ""; var_3844_int = 0; // 0xe6a PushV
	var_3841_int = var_3817_int; // 0xe6b Mov
	var_3842_string = "pers_dohodyaga"; // 0xe6c MovS
	var_3843_string = "dohodyaga.xml"; // 0xe6d MovS
	var_3844_int = 1; // 0xe6e MovI
	func_509(var_3841_int, var_3842_string, var_3843_string, var_3844_int); // 0xe6f NEW_2
	var_3845_int = 2; // 0xe71 PushI
	var_3846_float = 0; var_3847_int = 0; // 0xe72 PushV
	var_3847_int = var_3818_int; // 0xe73 Mov
	func_1171(var_3846_float, var_3847_int); // 0xe74 NEW_2
	var_3824_int = var_3845_int * var_3846_float; // 0xe76 Mult2
	var_3848_int = var_3824_int; // 0xe77 Push
	if(var_3848_int == 0) goto Label_3712; // 0xe78 JumpB
	var_3849_int = 0; var_3850_string = ""; var_3851_string = ""; var_3852_int = 0; // 0xe79 PushV
	var_3849_int = var_3817_int; // 0xe7a Mov
	var_3850_string = "pers_grabitel"; // 0xe7b MovS
	var_3851_string = "grabitel.xml"; // 0xe7c MovS
	var_3852_int = var_3824_int; // 0xe7d Mov
	func_509(var_3849_int, var_3850_string, var_3851_string, var_3852_int); // 0xe7e NEW_2
	
Label_3712:
	var_3853_int = 1; // 0xe80 PushI
	var_3854_int = var_3818_int + var_3853_int; // 0xe81 Add
	var_3855_int = 2; // 0xe82 PushI
	var_3856_bool = var_3854_int >= var_3855_int; // 0xe83 GE
	if(var_3856_bool == 0) goto Label_3736; // 0xe84 JumpB
	var_3857_int = 0; var_3858_string = ""; var_3859_string = ""; var_3860_int = 0; // 0xe85 PushV
	var_3857_int = var_3817_int; // 0xe86 Mov
	var_3858_string = "pers_patrool"; // 0xe87 MovS
	var_3859_string = "patrol.xml"; // 0xe88 MovS
	var_3860_int = 1; // 0xe89 MovI
	func_509(var_3857_int, var_3858_string, var_3859_string, var_3860_int); // 0xe8a NEW_2
	var_3861_bool = 0; var_3862_int = 0; // 0xe8c PushV
	var_3862_int = var_3818_int; // 0xe8d Mov
	func_1378(var_3861_bool, var_3862_int); // 0xe8e NEW_2
	if(var_3861_bool == 0) goto Label_3736; // 0xe90 JumpB
	var_3863_int = 0; var_3864_string = ""; var_3865_string = ""; var_3866_int = 0; // 0xe91 PushV
	var_3863_int = var_3817_int; // 0xe92 Mov
	var_3864_string = "pers_soldat_hand"; // 0xe93 MovS
	var_3865_string = "soldier_patrol.xml"; // 0xe94 MovS
	var_3866_int = 1; // 0xe95 MovI
	func_509(var_3863_int, var_3864_string, var_3865_string, var_3866_int); // 0xe96 NEW_2
	
Label_3736:
	var_3867_int = 1; // 0xe98 PushI
	var_3868_float = 0; var_3869_int = 0; // 0xe99 PushV
	var_3869_int = var_3818_int; // 0xe9a Mov
	func_1261(var_3868_float, var_3869_int); // 0xe9b NEW_2
	var_3825_int = var_3867_int * var_3868_float; // 0xe9d Mult2
	var_3870_int = var_3825_int; // 0xe9e Push
	if(var_3870_int == 0) goto Label_3751; // 0xe9f JumpB
	var_3871_int = 0; var_3872_string = ""; var_3873_string = ""; var_3874_int = 0; // 0xea0 PushV
	var_3871_int = var_3817_int; // 0xea1 Mov
	var_3872_string = "pers_bomber"; // 0xea2 MovS
	var_3873_string = "bomber.xml"; // 0xea3 MovS
	var_3874_int = var_3825_int; // 0xea4 Mov
	func_509(var_3871_int, var_3872_string, var_3873_string, var_3874_int); // 0xea5 NEW_2
	
Label_3751:
	goto Label_3827; // 0xea7 Jump
	
Label_3827:
	var_3875_bool = 0; var_3876_int = 0; var_3877_int = 0; // 0xef3 PushV
	var_3876_int = var_3818_int; // 0xef4 Mov
	var_3877_int = var_3819_int; // 0xef5 Mov
	func_1351(var_3875_bool, var_3876_int, var_3877_int); // 0xef6 NEW_2
	if(var_3875_bool == 0) goto Label_3840; // 0xef8 JumpB
	var_3878_int = 0; var_3879_string = ""; var_3880_string = ""; var_3881_int = 0; // 0xef9 PushV
	var_3878_int = var_3817_int; // 0xefa Mov
	var_3879_string = "pers_soldat"; // 0xefb MovS
	var_3880_string = "soldier_marauder.xml"; // 0xefc MovS
	var_3881_int = 2; // 0xefd MovI
	func_509(var_3878_int, var_3879_string, var_3880_string, var_3881_int); // 0xefe NEW_2
	
Label_3840:
	var_3882_bool = 0; var_3883_int = 0; // 0xf00 PushV
	var_3883_int = var_3818_int; // 0xf01 Mov
	func_1378(var_3882_bool, var_3883_int); // 0xf02 NEW_2
	if(var_3882_bool == 0) goto Label_3852; // 0xf04 JumpB
	var_3884_int = 0; var_3885_string = ""; var_3886_string = ""; var_3887_int = 0; // 0xf05 PushV
	var_3884_int = var_3817_int; // 0xf06 Mov
	var_3885_string = "pers_sanitar"; // 0xf07 MovS
	var_3886_string = "sanitar.xml"; // 0xf08 MovS
	var_3887_int = 1; // 0xf09 MovI
	func_509(var_3884_int, var_3885_string, var_3886_string, var_3887_int); // 0xf0a NEW_2
	
Label_3852:
	return 8; // 0xf0c Return
	
Label_3752:
	var_3888_int = 0; var_3889_string = ""; var_3890_string = ""; var_3891_int = 0; // 0xea8 PushV
	var_3888_int = var_3817_int; // 0xea9 Mov
	var_3889_string = "pers_rat"; // 0xeaa MovS
	var_3890_string = "rat.xml"; // 0xeab MovS
	var_3891_int = 3; // 0xeac MovI
	func_509(var_3888_int, var_3889_string, var_3890_string, var_3891_int); // 0xead NEW_2
	var_3892_int = 0; var_3893_string = ""; var_3894_string = ""; var_3895_int = 0; // 0xeaf PushV
	var_3892_int = var_3817_int; // 0xeb0 Mov
	var_3893_string = "pers_alkash"; // 0xeb1 MovS
	var_3894_string = "alkash.xml"; // 0xeb2 MovS
	var_3895_int = 1; // 0xeb3 MovI
	func_509(var_3892_int, var_3893_string, var_3894_string, var_3895_int); // 0xeb4 NEW_2
	var_3896_int = 0; var_3897_string = ""; var_3898_string = ""; var_3899_int = 0; // 0xeb6 PushV
	var_3896_int = var_3817_int; // 0xeb7 Mov
	var_3897_string = "pers_dohodyaga"; // 0xeb8 MovS
	var_3898_string = "dohodyaga.xml"; // 0xeb9 MovS
	var_3899_int = 1; // 0xeba MovI
	func_509(var_3896_int, var_3897_string, var_3898_string, var_3899_int); // 0xebb NEW_2
	var_3900_int = 3; // 0xebd PushI
	var_3901_float = 0; var_3902_int = 0; // 0xebe PushV
	var_3902_int = var_3818_int; // 0xebf Mov
	func_1171(var_3901_float, var_3902_int); // 0xec0 NEW_2
	var_3826_int = var_3900_int * var_3901_float; // 0xec2 Mult2
	var_3903_int = var_3826_int; // 0xec3 Push
	if(var_3903_int == 0) goto Label_3788; // 0xec4 JumpB
	var_3904_int = 0; var_3905_string = ""; var_3906_string = ""; var_3907_int = 0; // 0xec5 PushV
	var_3904_int = var_3817_int; // 0xec6 Mov
	var_3905_string = "pers_grabitel"; // 0xec7 MovS
	var_3906_string = "grabitel.xml"; // 0xec8 MovS
	var_3907_int = var_3826_int; // 0xec9 Mov
	func_509(var_3904_int, var_3905_string, var_3906_string, var_3907_int); // 0xeca NEW_2
	
Label_3788:
	var_3908_int = 1; // 0xecc PushI
	var_3909_int = var_3818_int + var_3908_int; // 0xecd Add
	var_3910_int = 2; // 0xece PushI
	var_3911_bool = var_3909_int >= var_3910_int; // 0xecf GE
	if(var_3911_bool == 0) goto Label_3812; // 0xed0 JumpB
	var_3912_int = 0; var_3913_string = ""; var_3914_string = ""; var_3915_int = 0; // 0xed1 PushV
	var_3912_int = var_3817_int; // 0xed2 Mov
	var_3913_string = "pers_patrool"; // 0xed3 MovS
	var_3914_string = "patrol.xml"; // 0xed4 MovS
	var_3915_int = 1; // 0xed5 MovI
	func_509(var_3912_int, var_3913_string, var_3914_string, var_3915_int); // 0xed6 NEW_2
	var_3916_bool = 0; var_3917_int = 0; // 0xed8 PushV
	var_3917_int = var_3818_int; // 0xed9 Mov
	func_1378(var_3916_bool, var_3917_int); // 0xeda NEW_2
	if(var_3916_bool == 0) goto Label_3812; // 0xedc JumpB
	var_3918_int = 0; var_3919_string = ""; var_3920_string = ""; var_3921_int = 0; // 0xedd PushV
	var_3918_int = var_3817_int; // 0xede Mov
	var_3919_string = "pers_soldat_hand"; // 0xedf MovS
	var_3920_string = "soldier_patrol.xml"; // 0xee0 MovS
	var_3921_int = 1; // 0xee1 MovI
	func_509(var_3918_int, var_3919_string, var_3920_string, var_3921_int); // 0xee2 NEW_2
	
Label_3812:
	var_3922_int = 1; // 0xee4 PushI
	var_3923_float = 0; var_3924_int = 0; // 0xee5 PushV
	var_3924_int = var_3818_int; // 0xee6 Mov
	func_1261(var_3923_float, var_3924_int); // 0xee7 NEW_2
	var_3827_int = var_3922_int * var_3923_float; // 0xee9 Mult2
	var_3925_int = var_3827_int; // 0xeea Push
	if(var_3925_int == 0) goto Label_3827; // 0xeeb JumpB
	var_3926_int = 0; var_3927_string = ""; var_3928_string = ""; var_3929_int = 0; // 0xeec PushV
	var_3926_int = var_3817_int; // 0xeed Mov
	var_3927_string = "pers_bomber"; // 0xeee MovS
	var_3928_string = "bomber.xml"; // 0xeef MovS
	var_3929_int = var_3827_int; // 0xef0 Mov
	func_509(var_3926_int, var_3927_string, var_3928_string, var_3929_int); // 0xef1 NEW_2
}


func_4694(var_3401_int, var_3402_int, var_3403_object, var_3404_object, var_3405_object, var_3406_object)
{
	var_3407_int = 0; // 0x1257 PushI
	var_3408_bool = var_3402_int == var_3407_int; // 0x1258 Eq
	if(var_3408_bool == 0) goto Label_4734; // 0x1259 JumpB
	var_3409_int = 0; var_3410_bool = 0; // 0x125a PushV
	var_3409_int = 1; // 0x125b MovI
	var_3410_bool = 0; // 0x125c MovB
	func_802(var_3409_int, var_3410_bool); // 0x125d NEW_2
	var_3411_int = 0; var_3412_bool = 0; var_3413_int = 0; // 0x125f PushV
	var_3411_int = 1; // 0x1260 MovI
	var_3412_bool = 0; // 0x1261 MovB
	var_3413_int = 1; // 0x1262 MovI
	func_819(var_3411_int, var_3412_bool, var_3413_int); // 0x1263 NEW_2
	var_3414_int = 0; var_3415_int = 0; var_3416_object = Obj(); var_3417_object = Obj(); var_3418_object = Obj(); // 0x1265 PushV
	var_3414_int = 1; // 0x1266 MovI
	var_3415_int = var_3401_int; // 0x1267 Mov
	var_3416_object = var_3403_object; // 0x1268 Mov
	var_3417_object = var_3404_object; // 0x1269 Mov
	var_3418_object = var_3405_object; // 0x126a Mov
	func_726(var_3414_int, var_3415_int, var_3416_object, var_3417_object, var_3418_object); // 0x126b NEW_2
	var_3419_object = Obj(); var_3420_int = 0; // 0x126d PushV
	var_3419_object = var_3406_object; // 0x126e Mov
	var_3420_int = 2; // 0x126f MovI
	func_311(var_3420_int); // 0x1270 NEW_2
	var_3421_int = 0; var_3422_bool = 0; var_3423_int = 0; // 0x1272 PushV
	var_3421_int = 1; // 0x1273 MovI
	var_3422_bool = 0; // 0x1274 MovB
	var_3423_int = 8; // 0x1275 MovI
	func_876(var_3421_int, var_3422_bool, var_3423_int); // 0x1276 NEW_2
	var_3424_int = 0; var_3425_bool = 0; var_3426_int = 0; // 0x1278 PushV
	var_3424_int = 1; // 0x1279 MovI
	var_3425_bool = 1; // 0x127a MovB
	var_3426_int = 8; // 0x127b MovI
	func_938(var_3424_int, var_3425_bool, var_3426_int); // 0x127c NEW_2
	
Label_4734:
	var_3427_int = 0; var_3428_bool = 0; // 0x127e PushV
	var_3427_int = 1; // 0x127f MovI
	var_3428_bool = 0; // 0x1280 MovB
	func_785(var_3427_int, var_3428_bool); // 0x1281 NEW_2
	var_3429_int = 0; var_3430_int = 0; var_3431_int = 0; // 0x1283 PushV
	var_3429_int = 1; // 0x1284 MovI
	var_3430_int = var_3401_int; // 0x1285 Mov
	var_3431_int = var_3402_int; // 0x1286 Mov
	func_4216(var_3429_int, var_3430_int, var_3431_int); // 0x1287 NEW_2
	return 0; // 0x1289 Return
}


func_7768(var_4418_object, var_4419_object, var_4420_int)
{
	var_4421_object = Obj(); var_4422_object = Obj(); var_4423_string = ""; var_4424_string = ""; var_4425_string = ""; // 0x1e59 PushV
	var_4422_object = var_4419_object; // 0x1e5a Mov
	var_4426_string = "term"; // 0x1e5b PushS
	var_4423_string = var_4426_string + var_4420_int; // 0x1e5c Add2
	var_4424_string = "pers_patrool"; // 0x1e5d MovS
	var_4425_string = "guard_term.xml"; // 0x1e5e MovS
	func_7751(var_4422_object, var_4423_string, var_4424_string, var_4425_string); // 0x1e5f NEW_2
	var_4418_object = var_4421_object; // 0x1e60 Mov
	return 0; // 0x1e62 Return
}


func_604(var_2057_string)
{
	var_2064_object = Obj(); var_2065_int = 0; var_2066_bool = 0; var_2067_cvector = CVector(0,0,0); var_2068_cvector = CVector(0,0,0); var_2069_object = Obj(); var_2070_string = ""; var_2071_object = Obj(); var_2072_int = 0; var_2073_bool = 0; var_2074_cvector = CVector(0,0,0); var_2075_cvector = CVector(0,0,0); var_2076_object = Obj(); var_2077_string = ""; // 0x25c PushV
	GetMainOutdoorScene(var_2071_object); // 0x25d Func
	var_2072_int = 0; // 0x25f MovI
	
Label_608:
	var_2078_int = 1; // 0x260 PushI
	var_2079_int = var_2072_int + var_2078_int; // 0x261 Add
	var_2080_int = var_2057_string + var_2079_int; // 0x262 Add
	GetLocator(var_2080_int, var_2073_bool, var_2074_cvector, var_2075_cvector); // 0x263 ObjFunc
	var_2081_bool = var_2073_bool == 0; // 0x265 Not
	if(var_2081_bool == 0) goto Label_616; // 0x266 JumpB
	goto Label_626; // 0x267 Jump
	
Label_626:
	return 14; // 0x272 Return
	
Label_616:
	var_2077_string = "fog_stat.xml"; // 0x268 MovS
	var_2082_string = "fog"; // 0x269 PushS
	AddStationaryActorByType(var_2076_object, var_2074_cvector, var_2075_cvector, var_2082_string, var_2077_string); // 0x26a ObjFunc
	add(var_2076_object); // 0x26c ObjFunc
	var_2076_object = 0; // 0x26e SetNull
	var_2083_int = 1; // 0x26f PushI
	var_2072_int = var_2072_int + var_2083_int; // 0x270 Add2
	goto Label_608; // 0x271 Jump
}


func_1630(var_1413_int, var_1414_int, var_1415_int)
{
	var_1416_int = 0; var_1417_int = 0; // 0x65e PushV
	var_1418_int = 1; // 0x65f PushI
	var_1419_int = var_1414_int + var_1418_int; // 0x660 Add
	var_1420_int = 12; // 0x661 PushI
	var_1421_bool = var_1419_int == var_1420_int; // 0x662 Eq
	if(var_1421_bool == 0) goto Label_1637; // 0x663 JumpB
	return 2; // 0x664 Return
	
Label_1637:
	var_1422_bool = 0; // 0x665 PushV
	var_1422_bool = 0; // 0x666 MovB
	var_1423_bool = 0; // 0x667 PushV
	var_1423_bool = 1; // 0x668 MovB
	var_1424_int = 7; // 0x669 PushI
	var_1425_bool = var_1415_int < var_1424_int; // 0x66a LT
	if(var_1425_bool == 0) goto Label_1648; // 0x66b JumpB
	var_1426_int = 21; // 0x66c PushI
	var_1427_bool = var_1415_int > var_1426_int; // 0x66d GT
	if(var_1427_bool == 0) goto Label_1648; // 0x66e JumpB
	var_1423_bool = 0; // 0x66f MovB
	
Label_1648:
	if(var_1423_bool == 0) goto Label_1653; // 0x670 JumpB
	var_1428_int = 0; // 0x671 PushI
	var_1429_bool = var_1414_int != var_1428_int; // 0x672 Neq
	if(var_1429_bool == 0) goto Label_1653; // 0x673 JumpB
	var_1422_bool = 1; // 0x674 MovB
	
Label_1653:
	if(var_1422_bool == 0) goto Label_1669; // 0x675 JumpB
	var_1430_int = 1; // 0x676 PushI
	var_1431_float = 0; var_1432_int = 0; // 0x677 PushV
	var_1432_int = var_1414_int; // 0x678 Mov
	func_1147(var_1431_float, var_1432_int); // 0x679 NEW_2
	var_1417_int = var_1430_int * var_1431_float; // 0x67b Mult2
	var_1433_int = var_1417_int; // 0x67c Push
	if(var_1433_int == 0) goto Label_1669; // 0x67d JumpB
	var_1434_int = 0; var_1435_string = ""; var_1436_string = ""; var_1437_int = 0; // 0x67e PushV
	var_1434_int = var_1413_int; // 0x67f Mov
	var_1435_string = "pers_grabitel"; // 0x680 MovS
	var_1436_string = "grabitel.xml"; // 0x681 MovS
	var_1437_int = var_1417_int; // 0x682 Mov
	func_509(var_1434_int, var_1435_string, var_1436_string, var_1437_int); // 0x683 NEW_2
	
Label_1669:
	var_1438_bool = 0; var_1439_int = 0; var_1440_int = 0; // 0x685 PushV
	var_1439_int = var_1414_int; // 0x686 Mov
	var_1440_int = var_1415_int; // 0x687 Mov
	func_1116(var_1438_bool, var_1439_int, var_1440_int); // 0x688 NEW_2
	if(var_1438_bool == 0) goto Label_1763; // 0x68a JumpB
	var_1441_int = 0; var_1442_string = ""; var_1443_string = ""; var_1444_int = 0; // 0x68b PushV
	var_1441_int = var_1413_int; // 0x68c Mov
	var_1442_string = "pers_unosha"; // 0x68d MovS
	var_1443_string = "unosha_attacker.xml"; // 0x68e MovS
	var_1444_int = 1; // 0x68f MovI
	func_509(var_1441_int, var_1442_string, var_1443_string, var_1444_int); // 0x690 NEW_2
	var_1445_int = 0; var_1446_string = ""; var_1447_string = ""; var_1448_int = 0; // 0x692 PushV
	var_1445_int = var_1413_int; // 0x693 Mov
	var_1446_string = "pers_unosha"; // 0x694 MovS
	var_1447_string = "unosha2_attacker.xml"; // 0x695 MovS
	var_1448_int = 1; // 0x696 MovI
	func_509(var_1445_int, var_1446_string, var_1447_string, var_1448_int); // 0x697 NEW_2
	var_1449_int = 0; var_1450_string = ""; var_1451_string = ""; var_1452_int = 0; // 0x699 PushV
	var_1449_int = var_1413_int; // 0x69a Mov
	var_1450_string = "pers_worker"; // 0x69b MovS
	var_1451_string = "worker_attacker.xml"; // 0x69c MovS
	var_1452_int = 1; // 0x69d MovI
	func_509(var_1449_int, var_1450_string, var_1451_string, var_1452_int); // 0x69e NEW_2
	var_1453_int = 0; var_1454_string = ""; var_1455_string = ""; var_1456_int = 0; // 0x6a0 PushV
	var_1453_int = var_1413_int; // 0x6a1 Mov
	var_1454_string = "pers_worker"; // 0x6a2 MovS
	var_1455_string = "worker2_attacker.xml"; // 0x6a3 MovS
	var_1456_int = 1; // 0x6a4 MovI
	func_509(var_1453_int, var_1454_string, var_1455_string, var_1456_int); // 0x6a5 NEW_2
	var_1457_int = 0; var_1458_string = ""; var_1459_string = ""; var_1460_int = 0; // 0x6a7 PushV
	var_1457_int = var_1413_int; // 0x6a8 Mov
	var_1458_string = "pers_woman"; // 0x6a9 MovS
	var_1459_string = "woman.xml"; // 0x6aa MovS
	var_1460_int = 1; // 0x6ab MovI
	func_509(var_1457_int, var_1458_string, var_1459_string, var_1460_int); // 0x6ac NEW_2
	var_1461_int = 0; var_1462_string = ""; var_1463_string = ""; var_1464_int = 0; // 0x6ae PushV
	var_1461_int = var_1413_int; // 0x6af Mov
	var_1462_string = "pers_alkash"; // 0x6b0 MovS
	var_1463_string = "alkash.xml"; // 0x6b1 MovS
	var_1464_int = 1; // 0x6b2 MovI
	func_509(var_1461_int, var_1462_string, var_1463_string, var_1464_int); // 0x6b3 NEW_2
	var_1465_bool = 0; // 0x6b5 PushV
	var_1465_bool = 0; // 0x6b6 MovB
	var_1466_int = 8; // 0x6b7 PushI
	var_1467_bool = var_1415_int > var_1466_int; // 0x6b8 GT
	if(var_1467_bool == 0) goto Label_1726; // 0x6b9 JumpB
	var_1468_int = 21; // 0x6ba PushI
	var_1469_bool = var_1415_int < var_1468_int; // 0x6bb LT
	if(var_1469_bool == 0) goto Label_1726; // 0x6bc JumpB
	var_1465_bool = 1; // 0x6bd MovB
	
Label_1726:
	if(var_1465_bool == 0) goto Label_1762; // 0x6be JumpB
	var_1470_int = 0; var_1471_string = ""; var_1472_string = ""; var_1473_int = 0; // 0x6bf PushV
	var_1470_int = var_1413_int; // 0x6c0 Mov
	var_1471_string = "pers_boy"; // 0x6c1 MovS
	var_1472_string = "boy.xml"; // 0x6c2 MovS
	var_1473_int = 1; // 0x6c3 MovI
	func_509(var_1470_int, var_1471_string, var_1472_string, var_1473_int); // 0x6c4 NEW_2
	var_1474_int = 0; var_1475_string = ""; var_1476_string = ""; var_1477_int = 0; // 0x6c6 PushV
	var_1474_int = var_1413_int; // 0x6c7 Mov
	var_1475_string = "pers_girl"; // 0x6c8 MovS
	var_1476_string = "girl.xml"; // 0x6c9 MovS
	var_1477_int = 1; // 0x6ca MovI
	func_509(var_1474_int, var_1475_string, var_1476_string, var_1477_int); // 0x6cb NEW_2
	var_1478_int = 0; var_1479_string = ""; var_1480_string = ""; var_1481_int = 0; // 0x6cd PushV
	var_1478_int = var_1413_int; // 0x6ce Mov
	var_1479_string = "pers_girl"; // 0x6cf MovS
	var_1480_string = "girl2.xml"; // 0x6d0 MovS
	var_1481_int = 1; // 0x6d1 MovI
	func_509(var_1478_int, var_1479_string, var_1480_string, var_1481_int); // 0x6d2 NEW_2
	var_1482_int = 0; var_1483_string = ""; var_1484_string = ""; var_1485_int = 0; // 0x6d4 PushV
	var_1482_int = var_1413_int; // 0x6d5 Mov
	var_1483_string = "pers_littleboy"; // 0x6d6 MovS
	var_1484_string = "littleboy.xml"; // 0x6d7 MovS
	var_1485_int = 1; // 0x6d8 MovI
	func_509(var_1482_int, var_1483_string, var_1484_string, var_1485_int); // 0x6d9 NEW_2
	var_1486_int = 0; var_1487_string = ""; var_1488_string = ""; var_1489_int = 0; // 0x6db PushV
	var_1486_int = var_1413_int; // 0x6dc Mov
	var_1487_string = "pers_littlegirl"; // 0x6dd MovS
	var_1488_string = "littlegirl.xml"; // 0x6de MovS
	var_1489_int = 1; // 0x6df MovI
	func_509(var_1486_int, var_1487_string, var_1488_string, var_1489_int); // 0x6e0 NEW_2
	
Label_1762:
	goto Label_1889; // 0x6e2 Jump
	
Label_1889:
	var_1490_bool = 0; var_1491_int = 0; var_1492_int = 0; // 0x761 PushV
	var_1491_int = var_1414_int; // 0x762 Mov
	var_1492_int = var_1415_int; // 0x763 Mov
	func_1351(var_1490_bool, var_1491_int, var_1492_int); // 0x764 NEW_2
	if(var_1490_bool == 0) goto Label_1902; // 0x766 JumpB
	var_1493_int = 0; var_1494_string = ""; var_1495_string = ""; var_1496_int = 0; // 0x767 PushV
	var_1493_int = var_1413_int; // 0x768 Mov
	var_1494_string = "pers_soldat"; // 0x769 MovS
	var_1495_string = "soldier_marauder.xml"; // 0x76a MovS
	var_1496_int = 2; // 0x76b MovI
	func_509(var_1493_int, var_1494_string, var_1495_string, var_1496_int); // 0x76c NEW_2
	
Label_1902:
	return 2; // 0x76e Return
	
Label_1763:
	var_1497_bool = 0; // 0x6e3 PushV
	var_1497_bool = 0; // 0x6e4 MovB
	var_1498_int = 8; // 0x6e5 PushI
	var_1499_bool = var_1415_int > var_1498_int; // 0x6e6 GT
	if(var_1499_bool == 0) goto Label_1772; // 0x6e7 JumpB
	var_1500_int = 21; // 0x6e8 PushI
	var_1501_bool = var_1415_int < var_1500_int; // 0x6e9 LT
	if(var_1501_bool == 0) goto Label_1772; // 0x6ea JumpB
	var_1497_bool = 1; // 0x6eb MovB
	
Label_1772:
	if(var_1497_bool == 0) goto Label_1849; // 0x6ec JumpB
	var_1502_int = 0; var_1503_string = ""; var_1504_string = ""; var_1505_int = 0; // 0x6ed PushV
	var_1502_int = var_1413_int; // 0x6ee Mov
	var_1503_string = "pers_woman"; // 0x6ef MovS
	var_1504_string = "woman.xml"; // 0x6f0 MovS
	var_1505_int = 1; // 0x6f1 MovI
	func_509(var_1502_int, var_1503_string, var_1504_string, var_1505_int); // 0x6f2 NEW_2
	var_1506_int = 0; var_1507_string = ""; var_1508_string = ""; var_1509_int = 0; // 0x6f4 PushV
	var_1506_int = var_1413_int; // 0x6f5 Mov
	var_1507_string = "pers_unosha"; // 0x6f6 MovS
	var_1508_string = "unosha.xml"; // 0x6f7 MovS
	var_1509_int = 1; // 0x6f8 MovI
	func_509(var_1506_int, var_1507_string, var_1508_string, var_1509_int); // 0x6f9 NEW_2
	var_1510_int = 0; var_1511_string = ""; var_1512_string = ""; var_1513_int = 0; // 0x6fb PushV
	var_1510_int = var_1413_int; // 0x6fc Mov
	var_1511_string = "pers_unosha"; // 0x6fd MovS
	var_1512_string = "unosha2.xml"; // 0x6fe MovS
	var_1513_int = 1; // 0x6ff MovI
	func_509(var_1510_int, var_1511_string, var_1512_string, var_1513_int); // 0x700 NEW_2
	var_1514_int = 0; var_1515_string = ""; var_1516_string = ""; var_1517_int = 0; // 0x702 PushV
	var_1514_int = var_1413_int; // 0x703 Mov
	var_1515_string = "pers_boy"; // 0x704 MovS
	var_1516_string = "boy.xml"; // 0x705 MovS
	var_1517_int = 1; // 0x706 MovI
	func_509(var_1514_int, var_1515_string, var_1516_string, var_1517_int); // 0x707 NEW_2
	var_1518_int = 0; var_1519_string = ""; var_1520_string = ""; var_1521_int = 0; // 0x709 PushV
	var_1518_int = var_1413_int; // 0x70a Mov
	var_1519_string = "pers_girl"; // 0x70b MovS
	var_1520_string = "girl.xml"; // 0x70c MovS
	var_1521_int = 1; // 0x70d MovI
	func_509(var_1518_int, var_1519_string, var_1520_string, var_1521_int); // 0x70e NEW_2
	var_1522_int = 0; var_1523_string = ""; var_1524_string = ""; var_1525_int = 0; // 0x710 PushV
	var_1522_int = var_1413_int; // 0x711 Mov
	var_1523_string = "pers_girl"; // 0x712 MovS
	var_1524_string = "girl2.xml"; // 0x713 MovS
	var_1525_int = 1; // 0x714 MovI
	func_509(var_1522_int, var_1523_string, var_1524_string, var_1525_int); // 0x715 NEW_2
	var_1526_int = 0; var_1527_string = ""; var_1528_string = ""; var_1529_int = 0; // 0x717 PushV
	var_1526_int = var_1413_int; // 0x718 Mov
	var_1527_string = "pers_littleboy"; // 0x719 MovS
	var_1528_string = "littleboy.xml"; // 0x71a MovS
	var_1529_int = 1; // 0x71b MovI
	func_509(var_1526_int, var_1527_string, var_1528_string, var_1529_int); // 0x71c NEW_2
	var_1530_int = 0; var_1531_string = ""; var_1532_string = ""; var_1533_int = 0; // 0x71e PushV
	var_1530_int = var_1413_int; // 0x71f Mov
	var_1531_string = "pers_littlegirl"; // 0x720 MovS
	var_1532_string = "littlegirl.xml"; // 0x721 MovS
	var_1533_int = 1; // 0x722 MovI
	func_509(var_1530_int, var_1531_string, var_1532_string, var_1533_int); // 0x723 NEW_2
	var_1534_int = 0; var_1535_string = ""; var_1536_string = ""; var_1537_int = 0; // 0x725 PushV
	var_1534_int = var_1413_int; // 0x726 Mov
	var_1535_string = "pers_alkash"; // 0x727 MovS
	var_1536_string = "alkash.xml"; // 0x728 MovS
	var_1537_int = 1; // 0x729 MovI
	func_509(var_1534_int, var_1535_string, var_1536_string, var_1537_int); // 0x72a NEW_2
	var_1538_int = 1; // 0x72c PushI
	var_1539_int = var_1414_int + var_1538_int; // 0x72d Add
	var_1540_int = 3; // 0x72e PushI
	var_1541_bool = var_1539_int >= var_1540_int; // 0x72f GE
	if(var_1541_bool == 0) goto Label_1848; // 0x730 JumpB
	var_1542_int = 0; var_1543_string = ""; var_1544_string = ""; var_1545_int = 0; // 0x731 PushV
	var_1542_int = var_1413_int; // 0x732 Mov
	var_1543_string = "pers_dohodyaga"; // 0x733 MovS
	var_1544_string = "dohodyaga.xml"; // 0x734 MovS
	var_1545_int = 1; // 0x735 MovI
	func_509(var_1542_int, var_1543_string, var_1544_string, var_1545_int); // 0x736 NEW_2
	
Label_1848:
	goto Label_1889; // 0x738 Jump
	
Label_1849:
	var_1546_int = 0; var_1547_string = ""; var_1548_string = ""; var_1549_int = 0; // 0x739 PushV
	var_1546_int = var_1413_int; // 0x73a Mov
	var_1547_string = "pers_woman"; // 0x73b MovS
	var_1548_string = "woman.xml"; // 0x73c MovS
	var_1549_int = 1; // 0x73d MovI
	func_509(var_1546_int, var_1547_string, var_1548_string, var_1549_int); // 0x73e NEW_2
	var_1550_int = 0; var_1551_string = ""; var_1552_string = ""; var_1553_int = 0; // 0x740 PushV
	var_1550_int = var_1413_int; // 0x741 Mov
	var_1551_string = "pers_unosha"; // 0x742 MovS
	var_1552_string = "unosha.xml"; // 0x743 MovS
	var_1553_int = 1; // 0x744 MovI
	func_509(var_1550_int, var_1551_string, var_1552_string, var_1553_int); // 0x745 NEW_2
	var_1554_int = 0; var_1555_string = ""; var_1556_string = ""; var_1557_int = 0; // 0x747 PushV
	var_1554_int = var_1413_int; // 0x748 Mov
	var_1555_string = "pers_unosha"; // 0x749 MovS
	var_1556_string = "unosha2.xml"; // 0x74a MovS
	var_1557_int = 1; // 0x74b MovI
	func_509(var_1554_int, var_1555_string, var_1556_string, var_1557_int); // 0x74c NEW_2
	var_1558_int = 0; var_1559_string = ""; var_1560_string = ""; var_1561_int = 0; // 0x74e PushV
	var_1558_int = var_1413_int; // 0x74f Mov
	var_1559_string = "pers_alkash"; // 0x750 MovS
	var_1560_string = "alkash.xml"; // 0x751 MovS
	var_1561_int = 1; // 0x752 MovI
	func_509(var_1558_int, var_1559_string, var_1560_string, var_1561_int); // 0x753 NEW_2
	var_1562_int = 1; // 0x755 PushI
	var_1563_int = var_1414_int + var_1562_int; // 0x756 Add
	var_1564_int = 3; // 0x757 PushI
	var_1565_bool = var_1563_int >= var_1564_int; // 0x758 GE
	if(var_1565_bool == 0) goto Label_1889; // 0x759 JumpB
	var_1566_int = 0; var_1567_string = ""; var_1568_string = ""; var_1569_int = 0; // 0x75a PushV
	var_1566_int = var_1413_int; // 0x75b Mov
	var_1567_string = "pers_dohodyaga"; // 0x75c MovS
	var_1568_string = "dohodyaga.xml"; // 0x75d MovS
	var_1569_int = 1; // 0x75e MovI
	func_509(var_1566_int, var_1567_string, var_1568_string, var_1569_int); // 0x75f NEW_2
}


func_7779(var_4462_bool)
{
	var_4463_object = Obj(); var_4464_object = Obj(); // 0x1e63 PushV
	var_4465_string = "arena_light"; // 0x1e64 PushS
	FindActor(var_4464_object, var_4465_string); // 0x1e65 Func
	Switch(var_4462_bool); // 0x1e67 ObjFunc
	return 2; // 0x1e69 Return
}


func_9832(var_5197_int, var_5198_float)
{
	var_5199_int = 0; var_5200_int = 0; var_5201_int = 0; var_5202_float = 0; // 0x2669 PushV
	var_5200_int = 530554; // 0x266a MovI
	var_5201_int = 530553; // 0x266b MovI
	var_5202_float = var_5198_float; // 0x266c Mov
	func_12495(var_5199_int, var_5200_int, var_5201_int, var_5202_float); // 0x266d NEW_2
	var_5197_int = var_5199_int; // 0x266e Mov
	return 0; // 0x2670 Return
}


func_7787()
{
	var_4328_object = Obj(); var_4329_bool = 0; var_4330_cvector = CVector(0,0,0); var_4331_cvector = CVector(0,0,0); var_4332_int = 0; var_4333_object = Obj(); var_4334_object = Obj(); var_4335_bool = 0; var_4336_cvector = CVector(0,0,0); var_4337_cvector = CVector(0,0,0); var_4338_int = 0; var_4339_object = Obj(); // 0x1e6b PushV
	var_4340_string = "Setting arena..."; // 0x1e6c PushS
	Trace(var_4340_string); // 0x1e6d Func
	var_4341_object = GlobalVars[11]; // 0x1e6f PushGE
	var_4342_bool = var_4341_object == 0; // 0x1e70 NullEq
	if(var_4342_bool == 0) goto Label_7849; // 0x1e71 JumpB
	GetMainOutdoorScene(var_4334_object); // 0x1e72 Func
	var_4343_string = "pt_arena_manager"; // 0x1e74 PushS
	GetLocator(var_4343_string, var_4335_bool, var_4336_cvector, var_4337_cvector); // 0x1e75 ObjFunc
	var_4344_bool = var_4335_bool == 0; // 0x1e77 Not
	if(var_4344_bool == 0) goto Label_7805; // 0x1e78 JumpB
	var_4345_string = "Locator doesn't exist for arena manager"; // 0x1e79 PushS
	Trace(var_4345_string); // 0x1e7a Func
	goto Label_7814; // 0x1e7c Jump
	
Label_7814:
	var_4338_int = 0; // 0x1e86 MovI
	
Label_7815:
	var_4346_int = 6; // 0x1e87 PushI
	var_4347_bool = var_4338_int < var_4346_int; // 0x1e88 LT
	if(var_4347_bool == 0) goto Label_7844; // 0x1e89 JumpB
	var_4348_string = "pt_arena_torch"; // 0x1e8a PushS
	var_4349_int = 1; // 0x1e8b PushI
	var_4350_int = var_4338_int + var_4349_int; // 0x1e8c Add
	var_4351_int = var_4348_string + var_4350_int; // 0x1e8d Add
	GetLocator(var_4351_int, var_4335_bool, var_4336_cvector, var_4337_cvector); // 0x1e8e ObjFunc
	var_4352_bool = var_4335_bool == 0; // 0x1e90 Not
	if(var_4352_bool == 0) goto Label_7833; // 0x1e91 JumpB
	var_4353_string = "Locator doesn't exist for arena torch "; // 0x1e92 PushS
	var_4354_int = 1; // 0x1e93 PushI
	var_4355_int = var_4338_int + var_4354_int; // 0x1e94 Add
	var_4356_int = var_4353_string + var_4355_int; // 0x1e95 Add
	Trace(var_4356_int); // 0x1e96 Func
	goto Label_7841; // 0x1e98 Jump
	
Label_7841:
	var_4357_int = 1; // 0x1ea1 PushI
	var_4338_int = var_4338_int + var_4357_int; // 0x1ea2 Add2
	goto Label_7815; // 0x1ea3 Jump
	
Label_7833:
	var_4358_string = "scripted"; // 0x1e99 PushS
	var_4359_string = "torch.xml"; // 0x1e9a PushS
	AddActorByType(var_4339_object, var_4358_string, var_4334_object, var_4336_cvector, var_4337_cvector, var_4359_string); // 0x1e9b Func
	var_4360_object = GlobalVars[12]; // 0x1e9d PushGE
	add(var_4339_object); // 0x1e9e ObjFunc
	var_4339_object = 0; // 0x1ea0 SetNull
	
Label_7844:
	var_4361_bool = 0; // 0x1ea4 PushV
	var_4361_bool = 1; // 0x1ea5 MovB
	func_7779(var_4361_bool); // 0x1ea6 NEW_2
	var_4334_object = 0; // 0x1ea8 SetNull
	
Label_7849:
	return 12; // 0x1ea9 Return
	
Label_7805:
	var_4365_object = GlobalVars[11]; // 0x1e7d PushGE
	var_4366_object = Obj(); var_4367_object = Obj(); var_4368_cvector = CVector(0,0,0); var_4369_cvector = CVector(0,0,0); // 0x1e7e PushV
	var_4367_object = var_4334_object; // 0x1e7f Mov
	var_4368_cvector = var_4336_cvector; // 0x1e80 Mov
	var_4369_cvector = var_4337_cvector; // 0x1e81 Mov
	func_14856(var_4367_object, var_4368_cvector, var_4369_cvector); // 0x1e82 NEW_2
	var_4365_object = var_4366_object; // 0x1e83 Mov
	GlobalVars[11] = var_4365_object; // 0x1e85 PopGE
}


func_9841(var_5422_int, var_5423_float)
{
	var_5424_int = 0; var_5425_int = 0; var_5426_int = 0; var_5427_float = 0; // 0x2672 PushV
	var_5425_int = 530556; // 0x2673 MovI
	var_5426_int = 530555; // 0x2674 MovI
	var_5427_float = var_5423_float; // 0x2675 Mov
	func_12495(var_5424_int, var_5425_int, var_5426_int, var_5427_float); // 0x2676 NEW_2
	var_5422_int = var_5424_int; // 0x2677 Mov
	return 0; // 0x2679 Return
}


func_628(var_567_int, var_569_object, var_570_object, var_571_object)
{
	var_572_int = 0; var_573_bool = 0; // 0x275 PushV
	var_572_int = var_567_int; // 0x276 Mov
	var_573_bool = 1; // 0x277 MovB
	func_548(var_572_int, var_573_bool); // 0x278 NEW_2
	var_600_object = Obj(); // 0x27a PushV
	var_600_object = var_569_object; // 0x27b Mov
	func_269(var_600_object); // 0x27c NEW_2
	var_611_object = Obj(); // 0x27e PushV
	var_611_object = var_570_object; // 0x27f Mov
	func_269(var_611_object); // 0x280 NEW_2
	var_612_object = Obj(); // 0x282 PushV
	var_612_object = var_571_object; // 0x283 Mov
	func_269(var_612_object); // 0x284 NEW_2
	return 0; // 0x286 Return
}


func_9850(var_5268_int, var_5269_float)
{
	var_5270_int = 0; var_5271_int = 0; var_5272_int = 0; var_5273_float = 0; // 0x267b PushV
	var_5271_int = 530558; // 0x267c MovI
	var_5272_int = 530557; // 0x267d MovI
	var_5273_float = var_5269_float; // 0x267e Mov
	func_12495(var_5270_int, var_5271_int, var_5272_int, var_5273_float); // 0x267f NEW_2
	var_5268_int = var_5270_int; // 0x2680 Mov
	return 0; // 0x2682 Return
}


func_13947(var_4560_float)
{
	var_4564_object = GlobalVars[16]; // 0x367c PushGE
	var_4564_object = 0; // 0x367d SetNull
	GlobalVars[16] = var_4564_object; // 0x367e PopGE
	var_4565_int = 45268; // 0x367f PushI
	var_4566_float = 192.0; // 0x3680 PushF
	SetTimeEvent(var_4565_int, var_4566_float); // 0x3681 Func
	var_4567_int = 45261; // 0x3683 PushI
	var_4568_float = 199.5; // 0x3684 PushF
	SetTimeEvent(var_4567_int, var_4568_float); // 0x3685 Func
	var_4569_int = 45230; // 0x3687 PushI
	var_4570_float = 64.25; // 0x3688 PushF
	SetTimeEvent(var_4569_int, var_4570_float); // 0x3689 Func
	var_4571_int = 45218; // 0x368b PushI
	var_4572_float = 228.0; // 0x368c PushF
	SetTimeEvent(var_4571_int, var_4572_float); // 0x368d Func
	var_4573_int = 45269; // 0x368f PushI
	var_4574_float = 216.0; // 0x3690 PushF
	SetTimeEvent(var_4573_int, var_4574_float); // 0x3691 Func
	var_4575_int = 45231; // 0x3693 PushI
	var_4576_float = 90.0; // 0x3694 PushF
	SetTimeEvent(var_4575_int, var_4576_float); // 0x3695 Func
	var_4577_int = 45227; // 0x3697 PushI
	var_4578_float = 203.0; // 0x3698 PushF
	SetTimeEvent(var_4577_int, var_4578_float); // 0x3699 Func
	var_4579_int = 45271; // 0x369b PushI
	var_4580_float = 264.0; // 0x369c PushF
	SetTimeEvent(var_4579_int, var_4580_float); // 0x369d Func
	var_4581_int = 45282; // 0x369f PushI
	var_4582_float = 58.0; // 0x36a0 PushF
	SetTimeEvent(var_4581_int, var_4582_float); // 0x36a1 Func
	var_4583_int = 45270; // 0x36a3 PushI
	var_4584_float = 240.0; // 0x36a4 PushF
	SetTimeEvent(var_4583_int, var_4584_float); // 0x36a5 Func
	var_4585_int = 45229; // 0x36a7 PushI
	var_4586_float = 64.0; // 0x36a8 PushF
	SetTimeEvent(var_4585_int, var_4586_float); // 0x36a9 Func
	var_4587_int = 45222; // 0x36ab PushI
	var_4588_float = 24.0; // 0x36ac PushF
	SetTimeEvent(var_4587_int, var_4588_float); // 0x36ad Func
	var_4589_int = 45260; // 0x36af PushI
	var_4590_float = 199.17; // 0x36b0 PushF
	SetTimeEvent(var_4589_int, var_4590_float); // 0x36b1 Func
	var_4591_int = 45226; // 0x36b3 PushI
	var_4592_float = 202.0; // 0x36b4 PushF
	SetTimeEvent(var_4591_int, var_4592_float); // 0x36b5 Func
	var_4593_int = 45224; // 0x36b7 PushI
	var_4594_float = 180.5; // 0x36b8 PushF
	SetTimeEvent(var_4593_int, var_4594_float); // 0x36b9 Func
	var_4595_int = 45221; // 0x36bb PushI
	var_4596_float = 272.29001; // 0x36bc PushF
	SetTimeEvent(var_4595_int, var_4596_float); // 0x36bd Func
	var_4597_int = 45239; // 0x36bf PushI
	var_4598_float = 182.5; // 0x36c0 PushF
	SetTimeEvent(var_4597_int, var_4598_float); // 0x36c1 Func
	var_4599_int = 45220; // 0x36c3 PushI
	var_4600_float = 271.54001; // 0x36c4 PushF
	SetTimeEvent(var_4599_int, var_4600_float); // 0x36c5 Func
	var_4601_int = 45228; // 0x36c7 PushI
	var_4602_float = 223.96001; // 0x36c8 PushF
	SetTimeEvent(var_4601_int, var_4602_float); // 0x36c9 Func
	var_4603_int = 45219; // 0x36cb PushI
	var_4604_float = 230.0; // 0x36cc PushF
	SetTimeEvent(var_4603_int, var_4604_float); // 0x36cd Func
	var_4605_int = 45232; // 0x36cf PushI
	var_4606_float = 250.5; // 0x36d0 PushF
	SetTimeEvent(var_4605_int, var_4606_float); // 0x36d1 Func
	var_4607_int = 45267; // 0x36d3 PushI
	var_4608_float = 168.0; // 0x36d4 PushF
	SetTimeEvent(var_4607_int, var_4608_float); // 0x36d5 Func
	var_4609_int = 45223; // 0x36d7 PushI
	var_4610_float = 80.25; // 0x36d8 PushF
	SetTimeEvent(var_4609_int, var_4610_float); // 0x36d9 Func
	var_4611_int = 45225; // 0x36db PushI
	var_4612_float = 201.0; // 0x36dc PushF
	SetTimeEvent(var_4611_int, var_4612_float); // 0x36dd Func
	var_4613_int = 45214; // 0x36df PushI
	var_4614_float = 192.08; // 0x36e0 PushF
	SetTimeEvent(var_4613_int, var_4614_float); // 0x36e1 Func
	var_4615_int = 45215; // 0x36e3 PushI
	var_4616_float = 216.08; // 0x36e4 PushF
	SetTimeEvent(var_4615_int, var_4616_float); // 0x36e5 Func
	var_4617_int = 45216; // 0x36e7 PushI
	var_4618_float = 240.08; // 0x36e8 PushF
	SetTimeEvent(var_4617_int, var_4618_float); // 0x36e9 Func
	var_4619_int = 45217; // 0x36eb PushI
	var_4620_float = 264.07999; // 0x36ec PushF
	SetTimeEvent(var_4619_int, var_4620_float); // 0x36ed Func
	var_4621_int = 45174; // 0x36ef PushI
	var_4622_float = 31.02; // 0x36f0 PushF
	SetTimeEvent(var_4621_int, var_4622_float); // 0x36f1 Func
	var_4623_int = 45178; // 0x36f3 PushI
	var_4624_float = 127.02; // 0x36f4 PushF
	SetTimeEvent(var_4623_int, var_4624_float); // 0x36f5 Func
	var_4625_int = 45179; // 0x36f7 PushI
	var_4626_float = 151.02; // 0x36f8 PushF
	SetTimeEvent(var_4625_int, var_4626_float); // 0x36f9 Func
	var_4627_int = 45200; // 0x36fb PushI
	var_4628_float = 39.5; // 0x36fc PushF
	SetTimeEvent(var_4627_int, var_4628_float); // 0x36fd Func
	var_4629_int = 45180; // 0x36ff PushI
	var_4630_float = 175.02; // 0x3700 PushF
	SetTimeEvent(var_4629_int, var_4630_float); // 0x3701 Func
	var_4631_int = 45182; // 0x3703 PushI
	var_4632_float = 223.02; // 0x3704 PushF
	SetTimeEvent(var_4631_int, var_4632_float); // 0x3705 Func
	var_4633_int = 45176; // 0x3707 PushI
	var_4634_float = 79.02; // 0x3708 PushF
	SetTimeEvent(var_4633_int, var_4634_float); // 0x3709 Func
	var_4635_int = 45063; // 0x370b PushI
	var_4636_float = 144.0; // 0x370c PushF
	SetTimeEvent(var_4635_int, var_4636_float); // 0x370d Func
	var_4637_int = 45177; // 0x370f PushI
	var_4638_float = 103.02; // 0x3710 PushF
	SetTimeEvent(var_4637_int, var_4638_float); // 0x3711 Func
	var_4639_int = 45183; // 0x3713 PushI
	var_4640_float = 247.02; // 0x3714 PushF
	SetTimeEvent(var_4639_int, var_4640_float); // 0x3715 Func
	var_4641_int = 45202; // 0x3717 PushI
	var_4642_float = 85.0; // 0x3718 PushF
	SetTimeEvent(var_4641_int, var_4642_float); // 0x3719 Func
	var_4643_int = 45205; // 0x371b PushI
	var_4644_float = 175.25; // 0x371c PushF
	SetTimeEvent(var_4643_int, var_4644_float); // 0x371d Func
	var_4645_int = 45209; // 0x371f PushI
	var_4646_float = 72.08; // 0x3720 PushF
	SetTimeEvent(var_4645_int, var_4646_float); // 0x3721 Func
	var_4647_int = 45207; // 0x3723 PushI
	var_4648_float = 24.33; // 0x3724 PushF
	SetTimeEvent(var_4647_int, var_4648_float); // 0x3725 Func
	var_4649_int = 45208; // 0x3727 PushI
	var_4650_float = 48.08; // 0x3728 PushF
	SetTimeEvent(var_4649_int, var_4650_float); // 0x3729 Func
	var_4651_int = 45181; // 0x372b PushI
	var_4652_float = 199.02; // 0x372c PushF
	SetTimeEvent(var_4651_int, var_4652_float); // 0x372d Func
	var_4653_int = 45210; // 0x372f PushI
	var_4654_float = 96.08; // 0x3730 PushF
	SetTimeEvent(var_4653_int, var_4654_float); // 0x3731 Func
	var_4655_int = 45211; // 0x3733 PushI
	var_4656_float = 120.08; // 0x3734 PushF
	SetTimeEvent(var_4655_int, var_4656_float); // 0x3735 Func
	var_4657_int = 45064; // 0x3737 PushI
	var_4658_float = 192.0; // 0x3738 PushF
	SetTimeEvent(var_4657_int, var_4658_float); // 0x3739 Func
	var_4659_int = 45212; // 0x373b PushI
	var_4660_float = 144.08; // 0x373c PushF
	SetTimeEvent(var_4659_int, var_4660_float); // 0x373d Func
	var_4661_int = 45213; // 0x373f PushI
	var_4662_float = 168.08; // 0x3740 PushF
	SetTimeEvent(var_4661_int, var_4662_float); // 0x3741 Func
	var_4663_int = 45203; // 0x3743 PushI
	var_4664_float = 103.25; // 0x3744 PushF
	SetTimeEvent(var_4663_int, var_4664_float); // 0x3745 Func
	var_4665_int = 45175; // 0x3747 PushI
	var_4666_float = 55.02; // 0x3748 PushF
	SetTimeEvent(var_4665_int, var_4666_float); // 0x3749 Func
	var_4667_int = 45054; // 0x374b PushI
	var_4668_float = 273.0; // 0x374c PushF
	SetTimeEvent(var_4667_int, var_4668_float); // 0x374d Func
	var_4669_int = 45199; // 0x374f PushI
	var_4670_float = 37.0; // 0x3750 PushF
	SetTimeEvent(var_4669_int, var_4670_float); // 0x3751 Func
	var_4671_int = 45201; // 0x3753 PushI
	var_4672_float = 86.5; // 0x3754 PushF
	SetTimeEvent(var_4671_int, var_4672_float); // 0x3755 Func
	var_4673_int = 45184; // 0x3757 PushI
	var_4674_float = 271.01999; // 0x3758 PushF
	SetTimeEvent(var_4673_int, var_4674_float); // 0x3759 Func
	var_4675_int = 45206; // 0x375b PushI
	var_4676_float = 210.0; // 0x375c PushF
	SetTimeEvent(var_4675_int, var_4676_float); // 0x375d Func
	var_4677_int = 45050; // 0x375f PushI
	var_4678_float = 151.25; // 0x3760 PushF
	SetTimeEvent(var_4677_int, var_4678_float); // 0x3761 Func
	var_4679_int = 45051; // 0x3763 PushI
	var_4680_float = 249.35001; // 0x3764 PushF
	SetTimeEvent(var_4679_int, var_4680_float); // 0x3765 Func
	var_4681_int = 45042; // 0x3767 PushI
	var_4682_float = 264.0; // 0x3768 PushF
	SetTimeEvent(var_4681_int, var_4682_float); // 0x3769 Func
	var_4683_int = 45040; // 0x376b PushI
	var_4684_float = 55.25; // 0x376c PushF
	SetTimeEvent(var_4683_int, var_4684_float); // 0x376d Func
	var_4685_int = 45039; // 0x376f PushI
	var_4686_float = 60.0; // 0x3770 PushF
	SetTimeEvent(var_4685_int, var_4686_float); // 0x3771 Func
	var_4687_int = 45038; // 0x3773 PushI
	var_4688_float = 31.25; // 0x3774 PushF
	SetTimeEvent(var_4687_int, var_4688_float); // 0x3775 Func
	var_4689_int = 45041; // 0x3777 PushI
	var_4690_float = 79.25; // 0x3778 PushF
	SetTimeEvent(var_4689_int, var_4690_float); // 0x3779 Func
	var_4691_int = 45045; // 0x377b PushI
	var_4692_float = 128.25; // 0x377c PushF
	SetTimeEvent(var_4691_int, var_4692_float); // 0x377d Func
	var_4693_int = 45047; // 0x377f PushI
	var_4694_float = 127.25; // 0x3780 PushF
	SetTimeEvent(var_4693_int, var_4694_float); // 0x3781 Func
	var_4695_int = 45036; // 0x3783 PushI
	var_4696_float = 255.0; // 0x3784 PushF
	SetTimeEvent(var_4695_int, var_4696_float); // 0x3785 Func
	var_4697_int = 45043; // 0x3787 PushI
	var_4698_float = 108.0; // 0x3788 PushF
	SetTimeEvent(var_4697_int, var_4698_float); // 0x3789 Func
	var_4699_int = 45046; // 0x378b PushI
	var_4700_float = 128.0; // 0x378c PushF
	SetTimeEvent(var_4699_int, var_4700_float); // 0x378d Func
	var_4701_int = 45044; // 0x378f PushI
	var_4702_float = 128.67; // 0x3790 PushF
	SetTimeEvent(var_4701_int, var_4702_float); // 0x3791 Func
	var_4703_int = 45048; // 0x3793 PushI
	var_4704_float = 154.0; // 0x3794 PushF
	SetTimeEvent(var_4703_int, var_4704_float); // 0x3795 Func
	var_4705_int = 45049; // 0x3797 PushI
	var_4706_float = 152.0; // 0x3798 PushF
	SetTimeEvent(var_4705_int, var_4706_float); // 0x3799 Func
	var_4707_int = 45018; // 0x379b PushI
	var_4708_float = 216.0; // 0x379c PushF
	SetTimeEvent(var_4707_int, var_4708_float); // 0x379d Func
	var_4709_int = 45005; // 0x379f PushI
	var_4710_float = 48.0; // 0x37a0 PushF
	SetTimeEvent(var_4709_int, var_4710_float); // 0x37a1 Func
	var_4711_int = 45007; // 0x37a3 PushI
	var_4712_float = 17.92; // 0x37a4 PushF
	SetTimeEvent(var_4711_int, var_4712_float); // 0x37a5 Func
	var_4713_int = 45009; // 0x37a7 PushI
	var_4714_float = 23.5; // 0x37a8 PushF
	SetTimeEvent(var_4713_int, var_4714_float); // 0x37a9 Func
	var_4715_int = 45016; // 0x37ab PushI
	var_4716_float = 168.0; // 0x37ac PushF
	SetTimeEvent(var_4715_int, var_4716_float); // 0x37ad Func
	var_4717_int = 45017; // 0x37af PushI
	var_4718_float = 192.0; // 0x37b0 PushF
	SetTimeEvent(var_4717_int, var_4718_float); // 0x37b1 Func
	var_4719_int = 45015; // 0x37b3 PushI
	var_4720_float = 132.0; // 0x37b4 PushF
	SetTimeEvent(var_4719_int, var_4720_float); // 0x37b5 Func
	var_4721_int = 45031; // 0x37b7 PushI
	var_4722_float = 240.0; // 0x37b8 PushF
	SetTimeEvent(var_4721_int, var_4722_float); // 0x37b9 Func
	var_4723_int = 45011; // 0x37bb PushI
	var_4724_float = 96.0; // 0x37bc PushF
	SetTimeEvent(var_4723_int, var_4724_float); // 0x37bd Func
	var_4725_int = 45032; // 0x37bf PushI
	var_4726_float = 245.0; // 0x37c0 PushF
	SetTimeEvent(var_4725_int, var_4726_float); // 0x37c1 Func
	var_4727_int = 45008; // 0x37c3 PushI
	var_4728_float = 10.0; // 0x37c4 PushF
	SetTimeEvent(var_4727_int, var_4728_float); // 0x37c5 Func
	var_4729_int = 45003; // 0x37c7 PushI
	var_4730_float = 24.0; // 0x37c8 PushF
	SetTimeEvent(var_4729_int, var_4730_float); // 0x37c9 Func
	var_4731_object = Obj(); var_4732_object = Obj(); // 0x37cb PushV
	var_4733_object = GlobalVars[16]; // 0x37cc PushGE
	var_4731_object = var_4733_object; // 0x37cd Mov
	var_4734_object = GlobalVars[16]; // 0x37cf PushGE
	var_4732_object = var_4734_object; // 0x37d0 Mov
	func_10813(); // 0x37d2 NEW_2
	var_4745_object = Obj(); var_4746_object = Obj(); // 0x37d4 PushV
	var_4747_object = GlobalVars[16]; // 0x37d5 PushGE
	var_4745_object = var_4747_object; // 0x37d6 Mov
	var_4748_object = GlobalVars[16]; // 0x37d8 PushGE
	var_4746_object = var_4748_object; // 0x37d9 Mov
	func_10757(); // 0x37db NEW_2
	var_4751_object = Obj(); var_4752_object = Obj(); // 0x37dd PushV
	var_4753_object = GlobalVars[16]; // 0x37de PushGE
	var_4751_object = var_4753_object; // 0x37df Mov
	var_4754_object = GlobalVars[16]; // 0x37e1 PushGE
	var_4752_object = var_4754_object; // 0x37e2 Mov
	func_10771(); // 0x37e4 NEW_2
	var_4778_object = Obj(); var_4779_object = Obj(); // 0x37e6 PushV
	var_4780_object = GlobalVars[16]; // 0x37e7 PushGE
	var_4778_object = var_4780_object; // 0x37e8 Mov
	var_4781_object = GlobalVars[16]; // 0x37ea PushGE
	var_4779_object = var_4781_object; // 0x37eb Mov
	func_10783(); // 0x37ed NEW_2
	var_4784_object = Obj(); var_4785_object = Obj(); // 0x37ef PushV
	var_4786_object = GlobalVars[16]; // 0x37f0 PushGE
	var_4784_object = var_4786_object; // 0x37f1 Mov
	var_4787_object = GlobalVars[16]; // 0x37f3 PushGE
	var_4785_object = var_4787_object; // 0x37f4 Mov
	func_11773(); // 0x37f6 NEW_2
	var_4790_object = Obj(); var_4791_object = Obj(); // 0x37f8 PushV
	var_4792_object = GlobalVars[16]; // 0x37f9 PushGE
	var_4790_object = var_4792_object; // 0x37fa Mov
	var_4793_object = GlobalVars[16]; // 0x37fc PushGE
	var_4791_object = var_4793_object; // 0x37fd Mov
	func_10469(); // 0x37ff NEW_2
	var_4796_object = Obj(); var_4797_object = Obj(); // 0x3801 PushV
	var_4798_object = GlobalVars[16]; // 0x3802 PushGE
	var_4796_object = var_4798_object; // 0x3803 Mov
	var_4799_object = GlobalVars[16]; // 0x3805 PushGE
	var_4797_object = var_4799_object; // 0x3806 Mov
	func_10572(); // 0x3808 NEW_2
	var_4802_object = Obj(); var_4803_object = Obj(); // 0x380a PushV
	var_4804_object = GlobalVars[16]; // 0x380b PushGE
	var_4802_object = var_4804_object; // 0x380c Mov
	var_4805_object = GlobalVars[16]; // 0x380e PushGE
	var_4803_object = var_4805_object; // 0x380f Mov
	func_10579(); // 0x3811 NEW_2
	var_4808_object = Obj(); var_4809_object = Obj(); // 0x3813 PushV
	var_4810_object = GlobalVars[16]; // 0x3814 PushGE
	var_4808_object = var_4810_object; // 0x3815 Mov
	var_4811_object = GlobalVars[16]; // 0x3817 PushGE
	var_4809_object = var_4811_object; // 0x3818 Mov
	func_10462(); // 0x381a NEW_2
	var_4814_int = 0; var_4815_float = 0; // 0x381c PushV
	var_4815_float = var_4560_float; // 0x381d Mov
	func_10066(var_4814_int, var_4815_float); // 0x381e NEW_2
	var_4823_object = Obj(); var_4824_string = ""; // 0x3820 PushV
	var_4824_string = "volonteers_danko"; // 0x3821 MovS
	func_143(var_4823_object, var_4824_string); // 0x3822 NEW_2
	var_4831_object = Obj(); var_4832_string = ""; // 0x3824 PushV
	var_4832_string = "quest_d1_01"; // 0x3825 MovS
	func_143(var_4831_object, var_4832_string); // 0x3826 NEW_2
	var_4833_int = 45006; // 0x3828 PushI
	var_4834_float = 72.0; // 0x3829 PushF
	SetTimeEvent(var_4833_int, var_4834_float); // 0x382a Func
	var_4835_int = 45012; // 0x382c PushI
	var_4836_float = 120.0; // 0x382d PushF
	SetTimeEvent(var_4835_int, var_4836_float); // 0x382e Func
	var_4837_int = 45013; // 0x3830 PushI
	var_4838_float = 144.0; // 0x3831 PushF
	SetTimeEvent(var_4837_int, var_4838_float); // 0x3832 Func
	var_4839_int = 45035; // 0x3834 PushI
	var_4840_float = 261.5; // 0x3835 PushF
	SetTimeEvent(var_4839_int, var_4840_float); // 0x3836 Func
	var_4841_int = 45010; // 0x3838 PushI
	var_4842_float = 16.0; // 0x3839 PushF
	SetTimeEvent(var_4841_int, var_4842_float); // 0x383a Func
	return 0; // 0x383c Return
}


func_8829()
{
	var_4522_object = Obj(); var_4523_int = 0; var_4524_int = 0; var_4525_object = Obj(); var_4526_bool = 0; var_4527_cvector = CVector(0,0,0); var_4528_cvector = CVector(0,0,0); var_4529_string = ""; var_4530_object = Obj(); var_4531_int = 0; var_4532_int = 0; var_4533_object = Obj(); var_4534_bool = 0; var_4535_cvector = CVector(0,0,0); var_4536_cvector = CVector(0,0,0); var_4537_string = ""; // 0x227d PushV
	GetMainOutdoorScene(var_4530_object); // 0x227e Func
	var_4538_object = GlobalVars[7]; // 0x2280 PushGE
	size(var_4531_int); // 0x2281 ObjFunc
	var_4532_int = 0; // 0x2283 MovI
	
Label_8836:
	var_4539_bool = var_4532_int < var_4531_int; // 0x2284 LT
	if(var_4539_bool == 0) goto Label_8876; // 0x2285 JumpB
	var_4540_object = GlobalVars[7]; // 0x2286 PushGE
	get(var_4533_object, var_4532_int); // 0x2287 ObjFunc
	var_4541_object = var_4533_object; // 0x2289 Push
	if(var_4541_object == 0) goto Label_8844; // 0x228a JumpB
	goto Label_8873; // 0x228b Jump
	
Label_8873:
	var_4542_int = 1; // 0x22a9 PushI
	var_4532_int = var_4532_int + var_4542_int; // 0x22aa Add2
	goto Label_8836; // 0x22ab Jump
	
Label_8844:
	var_4543_string = "pt_grave_supply"; // 0x228c PushS
	var_4544_int = 1; // 0x228d PushI
	var_4545_int = var_4532_int + var_4544_int; // 0x228e Add
	var_4546_int = var_4543_string + var_4545_int; // 0x228f Add
	GetLocator(var_4546_int, var_4534_bool, var_4535_cvector, var_4536_cvector); // 0x2290 ObjFunc
	var_4547_bool = var_4534_bool == 0; // 0x2292 Not
	if(var_4547_bool == 0) goto Label_8856; // 0x2293 JumpB
	var_4548_string = "Grave supply point not found"; // 0x2294 PushS
	Trace(var_4548_string); // 0x2295 Func
	goto Label_8873; // 0x2297 Jump
	
Label_8856:
	var_4549_int = 1; // 0x2298 PushI
	var_4550_int = 1; // 0x2299 PushI
	var_4551_string = "bread"; // 0x229a PushS
	var_4552_string = "milk"; // 0x229b PushS
	RandOneOf(var_4537_string, var_4549_int, var_4550_int, var_4551_string, var_4552_string); // 0x229c Func
	var_4553_string = "scripted"; // 0x229e PushS
	var_4554_string = "item_"; // 0x229f PushS
	var_4555_int = var_4554_string + var_4537_string; // 0x22a0 Add
	var_4556_string = "_stat.xml"; // 0x22a1 PushS
	var_4557_int = var_4555_int + var_4556_string; // 0x22a2 Add
	AddStationaryActorByType(var_4533_object, var_4535_cvector, var_4536_cvector, var_4553_string, var_4557_int); // 0x22a3 ObjFunc
	var_4558_object = GlobalVars[7]; // 0x22a5 PushGE
	set(var_4532_int, var_4533_object); // 0x22a6 ObjFunc
	var_4533_object = 0; // 0x22a8 SetNull
	
Label_8876:
	return 16; // 0x22ac Return
}


func_6785(var_2934_int, var_2935_int, var_2936_object, var_2937_object, var_2938_object, var_2939_object)
{
	var_2940_int = 0; // 0x1a82 PushI
	var_2941_bool = var_2935_int == var_2940_int; // 0x1a83 Eq
	if(var_2941_bool == 0) goto Label_6825; // 0x1a84 JumpB
	var_2942_int = 0; var_2943_bool = 0; // 0x1a85 PushV
	var_2942_int = 12; // 0x1a86 MovI
	var_2943_bool = 1; // 0x1a87 MovB
	func_802(var_2942_int, var_2943_bool); // 0x1a88 NEW_2
	var_2944_int = 0; var_2945_bool = 0; var_2946_int = 0; // 0x1a8a PushV
	var_2944_int = 12; // 0x1a8b MovI
	var_2945_bool = 1; // 0x1a8c MovB
	var_2946_int = 1; // 0x1a8d MovI
	func_819(var_2944_int, var_2945_bool, var_2946_int); // 0x1a8e NEW_2
	var_2947_int = 0; var_2948_int = 0; var_2949_object = Obj(); var_2950_object = Obj(); var_2951_object = Obj(); // 0x1a90 PushV
	var_2947_int = 12; // 0x1a91 MovI
	var_2948_int = var_2934_int; // 0x1a92 Mov
	var_2949_object = var_2936_object; // 0x1a93 Mov
	var_2950_object = var_2937_object; // 0x1a94 Mov
	var_2951_object = var_2938_object; // 0x1a95 Mov
	func_647(var_2947_int, var_2948_int, var_2949_object, var_2950_object, var_2951_object); // 0x1a96 NEW_2
	var_2952_object = Obj(); var_2953_int = 0; // 0x1a98 PushV
	var_2952_object = var_2939_object; // 0x1a99 Mov
	var_2953_int = 1; // 0x1a9a MovI
	func_311(var_2953_int); // 0x1a9b NEW_2
	var_2954_int = 0; var_2955_bool = 0; var_2956_int = 0; // 0x1a9d PushV
	var_2954_int = 12; // 0x1a9e MovI
	var_2955_bool = 1; // 0x1a9f MovB
	var_2956_int = 4; // 0x1aa0 MovI
	func_876(var_2954_int, var_2955_bool, var_2956_int); // 0x1aa1 NEW_2
	var_2957_int = 0; var_2958_bool = 0; var_2959_int = 0; // 0x1aa3 PushV
	var_2957_int = 12; // 0x1aa4 MovI
	var_2958_bool = 0; // 0x1aa5 MovB
	var_2959_int = 4; // 0x1aa6 MovI
	func_938(var_2957_int, var_2958_bool, var_2959_int); // 0x1aa7 NEW_2
	
Label_6825:
	var_2960_int = 0; var_2961_bool = 0; // 0x1aa9 PushV
	var_2960_int = 12; // 0x1aaa MovI
	var_2961_bool = 0; // 0x1aab MovB
	func_785(var_2960_int, var_2961_bool); // 0x1aac NEW_2
	var_2962_int = 0; var_2963_int = 0; var_2964_int = 0; // 0x1aae PushV
	var_2962_int = 12; // 0x1aaf MovI
	var_2963_int = var_2934_int; // 0x1ab0 Mov
	var_2964_int = var_2935_int; // 0x1ab1 Mov
	func_2770(var_2962_int, var_2963_int, var_2964_int); // 0x1ab2 NEW_2
	return 0; // 0x1ab4 Return
}


func_11905()
{
	var_5517_object = Obj(); var_5518_object = Obj(); var_5519_object = Obj(); var_5520_object = Obj(); // 0x2e81 PushV
	var_5521_object = Obj(); // 0x2e82 PushV
	func_12503(var_5521_object); // 0x2e83 NEW_2
	var_5519_object = var_5521_object; // 0x2e84 Mov
	var_5522_string = "d11q01NudeGotoRastrel"; // 0x2e86 PushS
	FindMark(var_5520_object, var_5522_string); // 0x2e87 ObjFunc
	var_5523_object = var_5520_object; // 0x2e89 Push
	if(var_5523_object == 0) goto Label_11917; // 0x2e8a JumpB
	Remove(); // 0x2e8b ObjFunc
	
Label_11917:
	var_5524_string = "d11q01NudeGotoBlock"; // 0x2e8d PushS
	FindMark(var_5520_object, var_5524_string); // 0x2e8e ObjFunc
	var_5525_object = var_5520_object; // 0x2e90 Push
	if(var_5525_object == 0) goto Label_11924; // 0x2e91 JumpB
	Remove(); // 0x2e92 ObjFunc
	
Label_11924:
	var_5526_bool = 0; var_5527_int = 0; // 0x2e94 PushV
	var_5527_int = 192; // 0x2e95 MovI
	func_12478(var_5526_bool, var_5527_int); // 0x2e96 NEW_2
	var_5538_bool = 0; var_5539_int = 0; // 0x2e98 PushV
	var_5539_int = 197; // 0x2e99 MovI
	func_12478(var_5538_bool, var_5539_int); // 0x2e9a NEW_2
	var_5540_bool = 0; var_5541_int = 0; // 0x2e9c PushV
	var_5541_int = 682; // 0x2e9d MovI
	func_12478(var_5540_bool, var_5541_int); // 0x2e9e NEW_2
	var_5542_bool = 0; var_5543_int = 0; // 0x2ea0 PushV
	var_5543_int = 686; // 0x2ea1 MovI
	func_12478(var_5542_bool, var_5543_int); // 0x2ea2 NEW_2
	return 4; // 0x2ea4 Return
}


func_9859(var_5282_int, var_5283_float)
{
	var_5284_int = 0; var_5285_int = 0; var_5286_int = 0; var_5287_float = 0; // 0x2684 PushV
	var_5285_int = 530560; // 0x2685 MovI
	var_5286_int = 530559; // 0x2686 MovI
	var_5287_float = var_5283_float; // 0x2687 Mov
	func_12495(var_5284_int, var_5285_int, var_5286_int, var_5287_float); // 0x2688 NEW_2
	var_5282_int = var_5284_int; // 0x2689 Mov
	return 0; // 0x268b Return
}


func_5764(var_2663_int, var_2664_int, var_2665_object, var_2666_object, var_2667_object, var_2668_object)
{
	var_2669_int = 0; // 0x1685 PushI
	var_2670_bool = var_2664_int == var_2669_int; // 0x1686 Eq
	if(var_2670_bool == 0) goto Label_5804; // 0x1687 JumpB
	var_2671_int = 0; var_2672_bool = 0; // 0x1688 PushV
	var_2671_int = 7; // 0x1689 MovI
	var_2672_bool = 1; // 0x168a MovB
	func_802(var_2671_int, var_2672_bool); // 0x168b NEW_2
	var_2673_int = 0; var_2674_bool = 0; var_2675_int = 0; // 0x168d PushV
	var_2673_int = 7; // 0x168e MovI
	var_2674_bool = 1; // 0x168f MovB
	var_2675_int = 1; // 0x1690 MovI
	func_819(var_2673_int, var_2674_bool, var_2675_int); // 0x1691 NEW_2
	var_2676_int = 0; var_2677_int = 0; var_2678_object = Obj(); var_2679_object = Obj(); var_2680_object = Obj(); // 0x1693 PushV
	var_2676_int = 7; // 0x1694 MovI
	var_2677_int = var_2663_int; // 0x1695 Mov
	var_2678_object = var_2665_object; // 0x1696 Mov
	var_2679_object = var_2666_object; // 0x1697 Mov
	var_2680_object = var_2667_object; // 0x1698 Mov
	func_647(var_2676_int, var_2677_int, var_2678_object, var_2679_object, var_2680_object); // 0x1699 NEW_2
	var_2681_object = Obj(); var_2682_int = 0; // 0x169b PushV
	var_2681_object = var_2668_object; // 0x169c Mov
	var_2682_int = 1; // 0x169d MovI
	func_311(var_2682_int); // 0x169e NEW_2
	var_2683_int = 0; var_2684_bool = 0; var_2685_int = 0; // 0x16a0 PushV
	var_2683_int = 7; // 0x16a1 MovI
	var_2684_bool = 1; // 0x16a2 MovB
	var_2685_int = 6; // 0x16a3 MovI
	func_876(var_2683_int, var_2684_bool, var_2685_int); // 0x16a4 NEW_2
	var_2686_int = 0; var_2687_bool = 0; var_2688_int = 0; // 0x16a6 PushV
	var_2686_int = 7; // 0x16a7 MovI
	var_2687_bool = 0; // 0x16a8 MovB
	var_2688_int = 6; // 0x16a9 MovI
	func_938(var_2686_int, var_2687_bool, var_2688_int); // 0x16aa NEW_2
	
Label_5804:
	var_2689_int = 0; var_2690_bool = 0; // 0x16ac PushV
	var_2689_int = 7; // 0x16ad MovI
	var_2690_bool = 0; // 0x16ae MovB
	func_785(var_2689_int, var_2690_bool); // 0x16af NEW_2
	var_2691_int = 0; var_2692_int = 0; var_2693_int = 0; // 0x16b1 PushV
	var_2691_int = 7; // 0x16b2 MovI
	var_2692_int = var_2663_int; // 0x16b3 Mov
	var_2693_int = var_2664_int; // 0x16b4 Mov
	func_2770(var_2691_int, var_2692_int, var_2693_int); // 0x16b5 NEW_2
	return 0; // 0x16b7 Return
}


func_647(var_2019_int, var_2020_int, var_2021_object, var_2022_object, var_2023_object)
{
	var_2024_int = 0; var_2025_bool = 0; // 0x288 PushV
	var_2024_int = var_2019_int; // 0x289 Mov
	var_2025_bool = 0; // 0x28a MovB
	func_548(var_2024_int, var_2025_bool); // 0x28b NEW_2
	var_2026_object = Obj(); // 0x28d PushV
	var_2026_object = var_2021_object; // 0x28e Mov
	func_269(var_2026_object); // 0x28f NEW_2
	var_2027_object = Obj(); // 0x291 PushV
	var_2027_object = var_2022_object; // 0x292 Mov
	func_269(var_2027_object); // 0x293 NEW_2
	var_2028_object = Obj(); // 0x295 PushV
	var_2028_object = var_2023_object; // 0x296 Mov
	func_269(var_2028_object); // 0x297 NEW_2
	var_2029_int = 8; // 0x299 PushI
	var_2030_bool = var_2020_int < var_2029_int; // 0x29a LT
	if(var_2030_bool == 0) goto Label_691; // 0x29b JumpB
	var_2031_string = ""; var_2032_object = Obj(); var_2033_string = ""; var_2034_string = ""; // 0x29c PushV
	var_2035_string = "pt_blockpost"; // 0x29d PushS
	var_2036_int = 1; // 0x29e PushI
	var_2037_int = var_2019_int + var_2036_int; // 0x29f Add
	var_2038_int = var_2035_string + var_2037_int; // 0x2a0 Add
	var_2039_string = "_1_"; // 0x2a1 PushS
	var_2031_string = var_2038_int + var_2039_string; // 0x2a2 Add2
	var_2032_object = var_2021_object; // 0x2a3 Mov
	var_2033_string = "pers_patrool"; // 0x2a4 MovS
	var_2034_string = "patrol_stat.xml"; // 0x2a5 MovS
	func_582(var_2032_object, var_2033_string, var_2034_string); // 0x2a6 NEW_2
	var_2057_string = ""; var_2058_object = Obj(); // 0x2a8 PushV
	var_2059_string = "pt_fog"; // 0x2a9 PushS
	var_2060_int = 1; // 0x2aa PushI
	var_2061_int = var_2019_int + var_2060_int; // 0x2ab Add
	var_2062_int = var_2059_string + var_2061_int; // 0x2ac Add
	var_2063_string = "_"; // 0x2ad PushS
	var_2057_string = var_2062_int + var_2063_string; // 0x2ae Add2
	var_2058_object = var_2023_object; // 0x2af Mov
	func_604(var_2058_object); // 0x2b0 NEW_2
	goto Label_725; // 0x2b2 Jump
	
Label_725:
	return 0; // 0x2d5 Return
	
Label_691:
	var_2084_string = ""; var_2085_object = Obj(); var_2086_string = ""; var_2087_string = ""; // 0x2b3 PushV
	var_2088_string = "pt_blockpost"; // 0x2b4 PushS
	var_2089_int = 1; // 0x2b5 PushI
	var_2090_int = var_2019_int + var_2089_int; // 0x2b6 Add
	var_2091_int = var_2088_string + var_2090_int; // 0x2b7 Add
	var_2092_string = "_1_"; // 0x2b8 PushS
	var_2084_string = var_2091_int + var_2092_string; // 0x2b9 Add2
	var_2085_object = var_2021_object; // 0x2ba Mov
	var_2086_string = "pers_soldat"; // 0x2bb MovS
	var_2087_string = "soldier.xml"; // 0x2bc MovS
	func_582(var_2085_object, var_2086_string, var_2087_string); // 0x2bd NEW_2
	var_2093_string = ""; var_2094_object = Obj(); var_2095_string = ""; var_2096_string = ""; // 0x2bf PushV
	var_2097_string = "pt_blockpost"; // 0x2c0 PushS
	var_2098_int = 1; // 0x2c1 PushI
	var_2099_int = var_2019_int + var_2098_int; // 0x2c2 Add
	var_2100_int = var_2097_string + var_2099_int; // 0x2c3 Add
	var_2101_string = "_2_"; // 0x2c4 PushS
	var_2093_string = var_2100_int + var_2101_string; // 0x2c5 Add2
	var_2094_object = var_2022_object; // 0x2c6 Mov
	var_2095_string = "pers_sanitar"; // 0x2c7 MovS
	var_2096_string = "sanitar_stat.xml"; // 0x2c8 MovS
	func_582(var_2094_object, var_2095_string, var_2096_string); // 0x2c9 NEW_2
	var_2102_string = ""; var_2103_object = Obj(); // 0x2cb PushV
	var_2104_string = "pt_fog"; // 0x2cc PushS
	var_2105_int = 1; // 0x2cd PushI
	var_2106_int = var_2019_int + var_2105_int; // 0x2ce Add
	var_2107_int = var_2104_string + var_2106_int; // 0x2cf Add
	var_2108_string = "_"; // 0x2d0 PushS
	var_2102_string = var_2107_int + var_2108_string; // 0x2d1 Add2
	var_2103_object = var_2023_object; // 0x2d2 Mov
	func_604(var_2103_object); // 0x2d3 NEW_2
}


func_4746()
{
	var_80_string = "dt_house1_union2_05l"; // 0x128b PushS
	add(var_80_string); // 0x128c ObjFunc
	var_81_string = "dt_house1_union2_05r"; // 0x128e PushS
	add(var_81_string); // 0x128f ObjFunc
	var_82_string = "dt_house2_01"; // 0x1291 PushS
	add(var_82_string); // 0x1292 ObjFunc
	var_83_string = "dt_house2_02"; // 0x1294 PushS
	add(var_83_string); // 0x1295 ObjFunc
	var_84_string = "dt_house2_03"; // 0x1297 PushS
	add(var_84_string); // 0x1298 ObjFunc
	var_85_string = "dt_house2_04"; // 0x129a PushS
	add(var_85_string); // 0x129b ObjFunc
	var_86_string = "dt_house2_05"; // 0x129d PushS
	add(var_86_string); // 0x129e ObjFunc
	var_87_string = "dt_house3_10_i2"; // 0x12a0 PushS
	add(var_87_string); // 0x12a1 ObjFunc
	var_88_string = "dt_house3_10"; // 0x12a3 PushS
	add(var_88_string); // 0x12a4 ObjFunc
	var_89_string = "dt_house3_11_i2"; // 0x12a6 PushS
	add(var_89_string); // 0x12a7 ObjFunc
	var_90_string = "dt_house3_11"; // 0x12a9 PushS
	add(var_90_string); // 0x12aa ObjFunc
	var_91_string = "dt_house3_12_i2"; // 0x12ac PushS
	add(var_91_string); // 0x12ad ObjFunc
	var_92_string = "dt_house3_12"; // 0x12af PushS
	add(var_92_string); // 0x12b0 ObjFunc
	var_93_string = "dt_house_1_06"; // 0x12b2 PushS
	add(var_93_string); // 0x12b3 ObjFunc
	var_94_string = "dt_house3_07_i2"; // 0x12b5 PushS
	add(var_94_string); // 0x12b6 ObjFunc
	var_95_string = "dt_house3_07"; // 0x12b8 PushS
	add(var_95_string); // 0x12b9 ObjFunc
	return 0; // 0x12bb Return
}


func_9868(var_5208_int, var_5209_float)
{
	var_5210_int = 0; var_5211_int = 0; var_5212_int = 0; var_5213_float = 0; // 0x268d PushV
	var_5211_int = 530562; // 0x268e MovI
	var_5212_int = 530561; // 0x268f MovI
	var_5213_float = var_5209_float; // 0x2690 Mov
	func_12495(var_5210_int, var_5211_int, var_5212_int, var_5213_float); // 0x2691 NEW_2
	var_5208_int = var_5210_int; // 0x2692 Mov
	return 0; // 0x2694 Return
}


func_9877(var_5219_int, var_5220_float)
{
	var_5221_int = 0; var_5222_int = 0; var_5223_int = 0; var_5224_float = 0; // 0x2696 PushV
	var_5222_int = 530564; // 0x2697 MovI
	var_5223_int = 530563; // 0x2698 MovI
	var_5224_float = var_5220_float; // 0x2699 Mov
	func_12495(var_5221_int, var_5222_int, var_5223_int, var_5224_float); // 0x269a NEW_2
	var_5219_int = var_5221_int; // 0x269b Mov
	return 0; // 0x269d Return
}


func_9886(var_5246_int, var_5247_float)
{
	var_5248_int = 0; var_5249_int = 0; var_5250_int = 0; var_5251_float = 0; // 0x269f PushV
	var_5249_int = 530566; // 0x26a0 MovI
	var_5250_int = 530565; // 0x26a1 MovI
	var_5251_float = var_5247_float; // 0x26a2 Mov
	func_12495(var_5248_int, var_5249_int, var_5250_int, var_5251_float); // 0x26a3 NEW_2
	var_5246_int = var_5248_int; // 0x26a4 Mov
	return 0; // 0x26a6 Return
}


func_9895(var_5360_int, var_5361_float)
{
	var_5362_int = 0; var_5363_int = 0; var_5364_int = 0; var_5365_float = 0; // 0x26a8 PushV
	var_5363_int = 530568; // 0x26a9 MovI
	var_5364_int = 530567; // 0x26aa MovI
	var_5365_float = var_5361_float; // 0x26ab Mov
	func_12495(var_5362_int, var_5363_int, var_5364_int, var_5365_float); // 0x26ac NEW_2
	var_5360_int = var_5362_int; // 0x26ad Mov
	return 0; // 0x26af Return
}


func_11943(var_6367_bool)
{
	var_6370_int = 0; var_6371_string = ""; // 0x2ea8 PushV
	var_6371_string = "d1q01"; // 0x2ea9 MovS
	func_138(var_6370_int, var_6371_string); // 0x2eaa NEW_2
	var_6372_int = 1000; // 0x2eac PushI
	var_6373_bool = var_6370_int == var_6372_int; // 0x2ead Eq
	if(var_6373_bool == 0) goto Label_11953; // 0x2eae JumpB
	var_6367_bool = 1; // 0x2eaf MovB
	return 0; // 0x2eb0 Return
	
Label_11953:
	var_6367_bool = 0; // 0x2eb1 MovB
	return 0; // 0x2eb2 Return
}


func_7850()
{
	var_4610_int = 0; var_4611_int = 0; var_4612_object = Obj(); var_4613_int = 0; var_4614_int = 0; var_4615_object = Obj(); // 0x1eaa PushV
	var_4616_string = "Cleaning arena..."; // 0x1eab PushS
	Trace(var_4616_string); // 0x1eac Func
	var_4617_object = GlobalVars[11]; // 0x1eae PushGE
	var_4618_bool = var_4617_object != 0; // 0x1eaf NullNeq
	if(var_4618_bool == 0) goto Label_7883; // 0x1eb0 JumpB
	var_4619_object = GlobalVars[11]; // 0x1eb1 PushGE
	Remove(); // 0x1eb2 ObjFunc
	var_4620_object = GlobalVars[12]; // 0x1eb4 PushGE
	size(var_4613_int); // 0x1eb5 ObjFunc
	var_4614_int = 0; // 0x1eb7 MovI
	
Label_7864:
	var_4621_bool = var_4614_int < var_4613_int; // 0x1eb8 LT
	if(var_4621_bool == 0) goto Label_7876; // 0x1eb9 JumpB
	var_4622_object = GlobalVars[12]; // 0x1eba PushGE
	get(var_4615_object, var_4614_int); // 0x1ebb ObjFunc
	var_4623_string = "remove"; // 0x1ebd PushS
	Trigger(var_4615_object, var_4623_string); // 0x1ebe Func
	var_4615_object = 0; // 0x1ec0 SetNull
	var_4624_int = 1; // 0x1ec1 PushI
	var_4614_int = var_4614_int + var_4624_int; // 0x1ec2 Add2
	goto Label_7864; // 0x1ec3 Jump
	
Label_7876:
	var_4625_object = GlobalVars[12]; // 0x1ec4 PushGE
	clear(); // 0x1ec5 ObjFunc
	var_4626_bool = 0; // 0x1ec7 PushV
	var_4626_bool = 0; // 0x1ec8 MovB
	func_7779(var_4626_bool); // 0x1ec9 NEW_2
	
Label_7883:
	return 6; // 0x1ecb Return
}


func_8878()
{
	var_4482_object = Obj(); var_4483_object = Obj(); var_4484_object = Obj(); var_4485_object = Obj(); // 0x22ae PushV
	GetMainOutdoorScene(var_4484_object); // 0x22af Func
	var_4486_string = "big_gun"; // 0x22b1 PushS
	var_4487_string = "big_gun.bin"; // 0x22b2 PushS
	var_4488_cvector = CVector(0.0, 0.0, 0.0); // 0x22b3 PushVec
	AddScriptedActor(var_4485_object, var_4486_string, var_4487_string, var_4484_object, var_4488_cvector); // 0x22b4 Func
	var_4489_string = "vagon_martira"; // 0x22b6 PushS
	var_4490_string = "big_gun.bin"; // 0x22b7 PushS
	var_4491_cvector = CVector(0.0, 0.0, 0.0); // 0x22b8 PushVec
	AddScriptedActor(var_4485_object, var_4489_string, var_4490_string, var_4484_object, var_4491_cvector); // 0x22b9 Func
	var_4492_string = "d9q01_trigger_wagon"; // 0x22bb PushS
	var_4493_string = "quest_d9_01_wagon.bin"; // 0x22bc PushS
	var_4494_cvector = CVector(0.0, 0.0, 0.0); // 0x22bd PushVec
	AddScriptedActor(var_4485_object, var_4492_string, var_4493_string, var_4484_object, var_4494_cvector); // 0x22be Func
	return 4; // 0x22c0 Return
}


func_9904(var_5050_int, var_5051_float)
{
	var_5052_int = 0; var_5053_int = 0; var_5054_int = 0; var_5055_float = 0; // 0x26b1 PushV
	var_5053_int = 536379; // 0x26b2 MovI
	var_5054_int = 536378; // 0x26b3 MovI
	var_5055_float = var_5051_float; // 0x26b4 Mov
	func_12495(var_5052_int, var_5053_int, var_5054_int, var_5055_float); // 0x26b5 NEW_2
	var_5050_int = var_5052_int; // 0x26b6 Mov
	return 0; // 0x26b8 Return
}


func_11955(var_6082_bool)
{
	var_6085_int = 0; var_6086_string = ""; // 0x2eb4 PushV
	var_6086_string = "d1q01"; // 0x2eb5 MovS
	func_138(var_6085_int, var_6086_string); // 0x2eb6 NEW_2
	var_6087_int = 0; // 0x2eb8 PushI
	var_6088_bool = var_6085_int == var_6087_int; // 0x2eb9 Eq
	if(var_6088_bool == 0) goto Label_11965; // 0x2eba JumpB
	var_6082_bool = 1; // 0x2ebb MovB
	return 0; // 0x2ebc Return
	
Label_11965:
	var_6082_bool = 0; // 0x2ebd MovB
	return 0; // 0x2ebe Return
}


func_6837(var_4064_int, var_4065_int, var_4066_object, var_4067_object, var_4068_object, var_4069_object)
{
	var_4070_int = 0; // 0x1ab6 PushI
	var_4071_bool = var_4065_int == var_4070_int; // 0x1ab7 Eq
	if(var_4071_bool == 0) goto Label_6877; // 0x1ab8 JumpB
	var_4072_int = 0; var_4073_bool = 0; // 0x1ab9 PushV
	var_4072_int = 12; // 0x1aba MovI
	var_4073_bool = 0; // 0x1abb MovB
	func_802(var_4072_int, var_4073_bool); // 0x1abc NEW_2
	var_4074_int = 0; var_4075_bool = 0; var_4076_int = 0; // 0x1abe PushV
	var_4074_int = 12; // 0x1abf MovI
	var_4075_bool = 0; // 0x1ac0 MovB
	var_4076_int = 1; // 0x1ac1 MovI
	func_819(var_4074_int, var_4075_bool, var_4076_int); // 0x1ac2 NEW_2
	var_4077_int = 0; var_4078_int = 0; var_4079_object = Obj(); var_4080_object = Obj(); var_4081_object = Obj(); // 0x1ac4 PushV
	var_4077_int = 12; // 0x1ac5 MovI
	var_4078_int = var_4064_int; // 0x1ac6 Mov
	var_4079_object = var_4066_object; // 0x1ac7 Mov
	var_4080_object = var_4067_object; // 0x1ac8 Mov
	var_4081_object = var_4068_object; // 0x1ac9 Mov
	func_726(var_4077_int, var_4078_int, var_4079_object, var_4080_object, var_4081_object); // 0x1aca NEW_2
	var_4082_object = Obj(); var_4083_int = 0; // 0x1acc PushV
	var_4082_object = var_4069_object; // 0x1acd Mov
	var_4083_int = 2; // 0x1ace MovI
	func_311(var_4083_int); // 0x1acf NEW_2
	var_4084_int = 0; var_4085_bool = 0; var_4086_int = 0; // 0x1ad1 PushV
	var_4084_int = 12; // 0x1ad2 MovI
	var_4085_bool = 0; // 0x1ad3 MovB
	var_4086_int = 4; // 0x1ad4 MovI
	func_876(var_4084_int, var_4085_bool, var_4086_int); // 0x1ad5 NEW_2
	var_4087_int = 0; var_4088_bool = 0; var_4089_int = 0; // 0x1ad7 PushV
	var_4087_int = 12; // 0x1ad8 MovI
	var_4088_bool = 1; // 0x1ad9 MovB
	var_4089_int = 4; // 0x1ada MovI
	func_938(var_4087_int, var_4088_bool, var_4089_int); // 0x1adb NEW_2
	
Label_6877:
	var_4090_int = 0; var_4091_bool = 0; // 0x1add PushV
	var_4090_int = 12; // 0x1ade MovI
	var_4091_bool = 0; // 0x1adf MovB
	func_785(var_4090_int, var_4091_bool); // 0x1ae0 NEW_2
	var_4092_int = 0; var_4093_int = 0; var_4094_int = 0; // 0x1ae2 PushV
	var_4092_int = 12; // 0x1ae3 MovI
	var_4093_int = var_4064_int; // 0x1ae4 Mov
	var_4094_int = var_4065_int; // 0x1ae5 Mov
	func_3665(var_4092_int, var_4093_int, var_4094_int); // 0x1ae6 NEW_2
	return 0; // 0x1ae8 Return
}


func_5816(var_3789_int, var_3790_int, var_3791_object, var_3792_object, var_3793_object, var_3794_object)
{
	var_3795_int = 0; // 0x16b9 PushI
	var_3796_bool = var_3790_int == var_3795_int; // 0x16ba Eq
	if(var_3796_bool == 0) goto Label_5856; // 0x16bb JumpB
	var_3797_int = 0; var_3798_bool = 0; // 0x16bc PushV
	var_3797_int = 7; // 0x16bd MovI
	var_3798_bool = 0; // 0x16be MovB
	func_802(var_3797_int, var_3798_bool); // 0x16bf NEW_2
	var_3799_int = 0; var_3800_bool = 0; var_3801_int = 0; // 0x16c1 PushV
	var_3799_int = 7; // 0x16c2 MovI
	var_3800_bool = 0; // 0x16c3 MovB
	var_3801_int = 1; // 0x16c4 MovI
	func_819(var_3799_int, var_3800_bool, var_3801_int); // 0x16c5 NEW_2
	var_3802_int = 0; var_3803_int = 0; var_3804_object = Obj(); var_3805_object = Obj(); var_3806_object = Obj(); // 0x16c7 PushV
	var_3802_int = 7; // 0x16c8 MovI
	var_3803_int = var_3789_int; // 0x16c9 Mov
	var_3804_object = var_3791_object; // 0x16ca Mov
	var_3805_object = var_3792_object; // 0x16cb Mov
	var_3806_object = var_3793_object; // 0x16cc Mov
	func_726(var_3802_int, var_3803_int, var_3804_object, var_3805_object, var_3806_object); // 0x16cd NEW_2
	var_3807_object = Obj(); var_3808_int = 0; // 0x16cf PushV
	var_3807_object = var_3794_object; // 0x16d0 Mov
	var_3808_int = 2; // 0x16d1 MovI
	func_311(var_3808_int); // 0x16d2 NEW_2
	var_3809_int = 0; var_3810_bool = 0; var_3811_int = 0; // 0x16d4 PushV
	var_3809_int = 7; // 0x16d5 MovI
	var_3810_bool = 0; // 0x16d6 MovB
	var_3811_int = 6; // 0x16d7 MovI
	func_876(var_3809_int, var_3810_bool, var_3811_int); // 0x16d8 NEW_2
	var_3812_int = 0; var_3813_bool = 0; var_3814_int = 0; // 0x16da PushV
	var_3812_int = 7; // 0x16db MovI
	var_3813_bool = 1; // 0x16dc MovB
	var_3814_int = 6; // 0x16dd MovI
	func_938(var_3812_int, var_3813_bool, var_3814_int); // 0x16de NEW_2
	
Label_5856:
	var_3815_int = 0; var_3816_bool = 0; // 0x16e0 PushV
	var_3815_int = 7; // 0x16e1 MovI
	var_3816_bool = 0; // 0x16e2 MovB
	func_785(var_3815_int, var_3816_bool); // 0x16e3 NEW_2
	var_3817_int = 0; var_3818_int = 0; var_3819_int = 0; // 0x16e5 PushV
	var_3817_int = 7; // 0x16e6 MovI
	var_3818_int = var_3789_int; // 0x16e7 Mov
	var_3819_int = var_3790_int; // 0x16e8 Mov
	func_3665(var_3817_int, var_3818_int, var_3819_int); // 0x16e9 NEW_2
	return 0; // 0x16eb Return
}


func_9913(var_5176_int, var_5177_float)
{
	var_5178_int = 0; var_5179_int = 0; var_5180_int = 0; var_5181_float = 0; // 0x26ba PushV
	var_5179_int = 522212; // 0x26bb MovI
	var_5180_int = 522211; // 0x26bc MovI
	var_5181_float = var_5177_float; // 0x26bd Mov
	func_12495(var_5178_int, var_5179_int, var_5180_int, var_5181_float); // 0x26be NEW_2
	var_5176_int = var_5178_int; // 0x26bf Mov
	return 0; // 0x26c1 Return
}


func_4796(var_1030_int, var_1031_int, var_1032_object, var_1033_object, var_1034_object, var_1035_object)
{
	var_1036_int = 0; // 0x12bd PushI
	var_1037_bool = var_1031_int == var_1036_int; // 0x12be Eq
	if(var_1037_bool == 0) goto Label_4836; // 0x12bf JumpB
	var_1038_int = 0; var_1039_bool = 0; // 0x12c0 PushV
	var_1038_int = 2; // 0x12c1 MovI
	var_1039_bool = 0; // 0x12c2 MovB
	func_802(var_1038_int, var_1039_bool); // 0x12c3 NEW_2
	var_1040_int = 0; var_1041_bool = 0; var_1042_int = 0; // 0x12c5 PushV
	var_1040_int = 2; // 0x12c6 MovI
	var_1041_bool = 0; // 0x12c7 MovB
	var_1042_int = 1; // 0x12c8 MovI
	func_819(var_1040_int, var_1041_bool, var_1042_int); // 0x12c9 NEW_2
	var_1043_int = 0; var_1044_int = 0; var_1045_object = Obj(); var_1046_object = Obj(); var_1047_object = Obj(); // 0x12cb PushV
	var_1043_int = 2; // 0x12cc MovI
	var_1044_int = var_1030_int; // 0x12cd Mov
	var_1045_object = var_1032_object; // 0x12ce Mov
	var_1046_object = var_1033_object; // 0x12cf Mov
	var_1047_object = var_1034_object; // 0x12d0 Mov
	func_628(var_1044_int, var_1045_object, var_1046_object, var_1047_object); // 0x12d1 NEW_2
	var_1048_object = Obj(); var_1049_int = 0; // 0x12d3 PushV
	var_1048_object = var_1035_object; // 0x12d4 Mov
	var_1049_int = 0; // 0x12d5 MovI
	func_311(var_1049_int); // 0x12d6 NEW_2
	var_1050_int = 0; var_1051_bool = 0; var_1052_int = 0; // 0x12d8 PushV
	var_1050_int = 2; // 0x12d9 MovI
	var_1051_bool = 0; // 0x12da MovB
	var_1052_int = 5; // 0x12db MovI
	func_876(var_1050_int, var_1051_bool, var_1052_int); // 0x12dc NEW_2
	var_1053_int = 0; var_1054_bool = 0; var_1055_int = 0; // 0x12de PushV
	var_1053_int = 2; // 0x12df MovI
	var_1054_bool = 0; // 0x12e0 MovB
	var_1055_int = 5; // 0x12e1 MovI
	func_938(var_1053_int, var_1054_bool, var_1055_int); // 0x12e2 NEW_2
	
Label_4836:
	var_1056_int = 0; var_1057_int = 0; // 0x12e4 PushV
	var_1056_int = 2; // 0x12e5 MovI
	var_1057_int = var_1031_int; // 0x12e6 Mov
	func_1056(var_1056_int, var_1057_int); // 0x12e7 NEW_2
	var_1058_int = 0; var_1059_int = 0; var_1060_int = 0; // 0x12e9 PushV
	var_1058_int = 2; // 0x12ea MovI
	var_1059_int = var_1030_int; // 0x12eb Mov
	var_1060_int = var_1031_int; // 0x12ec Mov
	func_1903(var_1058_int, var_1059_int, var_1060_int); // 0x12ed NEW_2
	return 0; // 0x12ef Return
}


func_11967(var_4877_bool)
{
	var_4880_int = 0; var_4881_string = ""; // 0x2ec0 PushV
	var_4881_string = "resque_list"; // 0x2ec1 MovS
	func_138(var_4880_int, var_4881_string); // 0x2ec2 NEW_2
	var_4882_int = 0; // 0x2ec4 PushI
	var_4883_bool = var_4880_int != var_4882_int; // 0x2ec5 Neq
	if(var_4883_bool == 0) goto Label_11977; // 0x2ec6 JumpB
	var_4877_bool = 1; // 0x2ec7 MovB
	return 0; // 0x2ec8 Return
	
Label_11977:
	var_4877_bool = 0; // 0x2ec9 MovB
	return 0; // 0x2eca Return
}


func_9922(var_4732_int, var_4733_float)
{
	var_4734_int = 0; var_4735_int = 0; var_4736_int = 0; var_4737_float = 0; // 0x26c3 PushV
	var_4735_int = 534077; // 0x26c4 MovI
	var_4736_int = 534076; // 0x26c5 MovI
	var_4737_float = var_4733_float; // 0x26c6 Mov
	func_12495(var_4734_int, var_4735_int, var_4736_int, var_4737_float); // 0x26c7 NEW_2
	var_4732_int = var_4734_int; // 0x26c8 Mov
	return 0; // 0x26ca Return
}


func_8899(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_int = 0; var_16_int = 0; // 0x22c3 PushV
	var_17_bool = 0; // 0x22c4 PushV
	var_17_bool = 0; // 0x22c5 MovB
	var_18_int = 16384; // 0x22c6 PushI
	var_19_bool = var_3_int > var_18_int; // 0x22c7 GT
	if(var_19_bool == 0) goto Label_8909; // 0x22c8 JumpB
	var_20_int = 16396; // 0x22c9 PushI
	var_21_bool = var_3_int < var_20_int; // 0x22ca LT
	if(var_21_bool == 0) goto Label_8909; // 0x22cb JumpB
	var_17_bool = 1; // 0x22cc MovB
	
Label_8909:
	if(var_17_bool == 0) goto Label_8918; // 0x22cd JumpB
	var_22_int = 16384; // 0x22ce PushI
	var_11_int = var_3_int - var_22_int; // 0x22cf Sub2
	var_23_int = 0; // 0x22d0 PushV
	var_23_int = var_11_int; // 0x22d1 Mov
	func_14563(var_23_int); // 0x22d2 NEW_2
	var_2_bool = 1; // 0x22d4 MovB
	return 12; // 0x22d5 Return
	
Label_8918:
	var_205_bool = 0; // 0x22d6 PushV
	var_205_bool = 0; // 0x22d7 MovB
	var_206_int = 32768; // 0x22d8 PushI
	var_207_bool = var_3_int > var_206_int; // 0x22d9 GT
	if(var_207_bool == 0) goto Label_8927; // 0x22da JumpB
	var_208_int = 33056; // 0x22db PushI
	var_209_bool = var_3_int < var_208_int; // 0x22dc LT
	if(var_209_bool == 0) goto Label_8927; // 0x22dd JumpB
	var_205_bool = 1; // 0x22de MovB
	
Label_8927:
	if(var_205_bool == 0) goto Label_8952; // 0x22df JumpB
	var_210_int = 32768; // 0x22e0 PushI
	var_211_int = var_3_int - var_210_int; // 0x22e1 Sub
	var_212_int = 24; // 0x22e2 PushI
	var_12_int = var_211_int / var_211_int; // 0x22e3 Div2
	var_213_int = 32768; // 0x22e4 PushI
	var_214_int = var_3_int - var_213_int; // 0x22e5 Sub
	var_215_int = 24; // 0x22e6 PushI
	var_13_int = var_214_int % var_215_int; // 0x22e7 Mod2
	GetGameTime(var_14_float); // 0x22e8 Func
	var_216_int = 24; // 0x22ea PushI
	var_15_int = var_14_float / var_14_float; // 0x22eb Div2
	var_16_int = var_14_float; // 0x22ec Mov
	var_217_int = 24; // 0x22ed PushI
	var_16_int = var_16_int % var_217_int; // 0x22ee Mod2
	var_218_int = 0; var_219_int = 0; var_220_int = 0; var_221_int = 0; // 0x22ef PushV
	var_218_int = var_12_int; // 0x22f0 Mov
	var_219_int = var_13_int; // 0x22f1 Mov
	var_220_int = var_15_int; // 0x22f2 Mov
	var_221_int = var_16_int; // 0x22f3 Mov
	func_9037(var_218_int, var_219_int, var_220_int, var_221_int); // 0x22f4 NEW_2
	var_2_bool = 1; // 0x22f6 MovB
	return 12; // 0x22f7 Return
	
Label_8952:
	var_2_bool = 0; // 0x22f8 MovB
	return 12; // 0x22f9 Return
}


func_9931(var_5078_int, var_5079_float)
{
	var_5080_int = 0; var_5081_int = 0; var_5082_int = 0; var_5083_float = 0; // 0x26cc PushV
	var_5081_int = 534163; // 0x26cd MovI
	var_5082_int = 534162; // 0x26ce MovI
	var_5083_float = var_5079_float; // 0x26cf Mov
	func_12495(var_5080_int, var_5081_int, var_5082_int, var_5083_float); // 0x26d0 NEW_2
	var_5078_int = var_5080_int; // 0x26d1 Mov
	return 0; // 0x26d3 Return
}


func_7884()
{
	var_323_object = Obj(); var_324_int = 0; var_325_object = Obj(); var_326_int = 0; // 0x1ecc PushV
	GetMainOutdoorScene(var_325_object); // 0x1ecd Func
	var_326_int = 1; // 0x1ecf MovI
	
Label_7888:
	var_327_int = 17; // 0x1ed0 PushI
	var_328_bool = var_326_int <= var_327_int; // 0x1ed1 LE
	if(var_328_bool == 0) goto Label_7905; // 0x1ed2 JumpB
	var_329_object = GlobalVars[15]; // 0x1ed3 PushGE
	var_330_object = Obj(); var_331_object = Obj(); var_332_string = ""; var_333_string = ""; var_334_string = ""; // 0x1ed4 PushV
	var_331_object = var_325_object; // 0x1ed5 Mov
	var_335_string = "pt_bull"; // 0x1ed6 PushS
	var_332_string = var_335_string + var_326_int; // 0x1ed7 Add2
	var_333_string = "pers_bull"; // 0x1ed8 MovS
	var_334_string = "bull.xml"; // 0x1ed9 MovS
	func_165(var_331_object, var_332_string, var_333_string, var_334_string); // 0x1eda NEW_2
	add(var_330_object); // 0x1edc ObjFunc
	var_349_int = 1; // 0x1ede PushI
	var_326_int = var_326_int + var_349_int; // 0x1edf Add2
	goto Label_7888; // 0x1ee0 Jump
	
Label_7905:
	return 4; // 0x1ee1 Return
}


func_11979(var_5227_bool)
{
	var_5230_int = 0; var_5231_string = ""; // 0x2ecc PushV
	var_5231_string = "d2EvaVisit"; // 0x2ecd MovS
	func_138(var_5230_int, var_5231_string); // 0x2ece NEW_2
	var_5232_int = 0; // 0x2ed0 PushI
	var_5233_bool = var_5230_int != var_5232_int; // 0x2ed1 Neq
	if(var_5233_bool == 0) goto Label_11989; // 0x2ed2 JumpB
	var_5227_bool = 1; // 0x2ed3 MovB
	return 0; // 0x2ed4 Return
	
Label_11989:
	var_5227_bool = 0; // 0x2ed5 MovB
	return 0; // 0x2ed6 Return
}


func_2770(var_2691_int, var_2692_int, var_2693_int)
{
	var_2694_int = 0; var_2695_int = 0; var_2696_int = 0; var_2697_int = 0; // 0xad2 PushV
	var_2698_bool = 0; // 0xad3 PushV
	var_2698_bool = 0; // 0xad4 MovB
	var_2699_int = 8; // 0xad5 PushI
	var_2700_bool = var_2693_int > var_2699_int; // 0xad6 GT
	if(var_2700_bool == 0) goto Label_2780; // 0xad7 JumpB
	var_2701_int = 21; // 0xad8 PushI
	var_2702_bool = var_2693_int < var_2701_int; // 0xad9 LT
	if(var_2702_bool == 0) goto Label_2780; // 0xada JumpB
	var_2698_bool = 1; // 0xadb MovB
	
Label_2780:
	if(var_2698_bool == 0) goto Label_2835; // 0xadc JumpB
	var_2703_int = 0; var_2704_string = ""; var_2705_string = ""; var_2706_int = 0; // 0xadd PushV
	var_2703_int = var_2691_int; // 0xade Mov
	var_2704_string = "pers_vaxxabit"; // 0xadf MovS
	var_2705_string = "vaxxabit_d.xml"; // 0xae0 MovS
	var_2706_int = 6; // 0xae1 MovI
	func_509(var_2703_int, var_2704_string, var_2705_string, var_2706_int); // 0xae2 NEW_2
	var_2707_int = 0; var_2708_string = ""; var_2709_string = ""; var_2710_int = 0; // 0xae4 PushV
	var_2707_int = var_2691_int; // 0xae5 Mov
	var_2708_string = "pers_vaxxabitka"; // 0xae6 MovS
	var_2709_string = "vaxxabitka_d.xml"; // 0xae7 MovS
	var_2710_int = 5; // 0xae8 MovI
	func_509(var_2707_int, var_2708_string, var_2709_string, var_2710_int); // 0xae9 NEW_2
	var_2711_int = 0; var_2712_string = ""; var_2713_string = ""; var_2714_int = 0; // 0xaeb PushV
	var_2711_int = var_2691_int; // 0xaec Mov
	var_2712_string = "pers_rat_big"; // 0xaed MovS
	var_2713_string = "rat_big.xml"; // 0xaee MovS
	var_2714_int = 2; // 0xaef MovI
	func_509(var_2711_int, var_2712_string, var_2713_string, var_2714_int); // 0xaf0 NEW_2
	var_2715_int = 0; var_2716_string = ""; var_2717_string = ""; var_2718_int = 0; // 0xaf2 PushV
	var_2715_int = var_2691_int; // 0xaf3 Mov
	var_2716_string = "fog"; // 0xaf4 MovS
	var_2717_string = "fog.xml"; // 0xaf5 MovS
	var_2718_int = 6; // 0xaf6 MovI
	func_535(var_2715_int, var_2716_string, var_2717_string, var_2718_int); // 0xaf7 NEW_2
	var_2719_int = 5; // 0xaf9 PushI
	var_2720_bool = var_2692_int >= var_2719_int; // 0xafa GE
	if(var_2720_bool == 0) goto Label_2819; // 0xafb JumpB
	var_2721_int = 0; var_2722_string = ""; var_2723_string = ""; var_2724_int = 0; // 0xafc PushV
	var_2721_int = var_2691_int; // 0xafd Mov
	var_2722_string = "fog"; // 0xafe MovS
	var_2723_string = "fog_hunter.xml"; // 0xaff MovS
	var_2724_int = 2; // 0xb00 MovI
	func_535(var_2721_int, var_2722_string, var_2723_string, var_2724_int); // 0xb01 NEW_2
	
Label_2819:
	var_2725_int = 1; // 0xb03 PushI
	var_2726_float = 0; var_2727_int = 0; // 0xb04 PushV
	var_2727_int = var_2692_int; // 0xb05 Mov
	func_1261(var_2726_float, var_2727_int); // 0xb06 NEW_2
	var_2696_int = var_2725_int * var_2726_float; // 0xb08 Mult2
	var_2728_int = var_2696_int; // 0xb09 Push
	if(var_2728_int == 0) goto Label_2834; // 0xb0a JumpB
	var_2729_int = 0; var_2730_string = ""; var_2731_string = ""; var_2732_int = 0; // 0xb0b PushV
	var_2729_int = var_2691_int; // 0xb0c Mov
	var_2730_string = "pers_bomber"; // 0xb0d MovS
	var_2731_string = "bomber.xml"; // 0xb0e MovS
	var_2732_int = var_2696_int; // 0xb0f Mov
	func_509(var_2729_int, var_2730_string, var_2731_string, var_2732_int); // 0xb10 NEW_2
	
Label_2834:
	goto Label_2888; // 0xb12 Jump
	
Label_2888:
	var_2733_int = 0; var_2734_string = ""; var_2735_string = ""; var_2736_int = 0; var_2737_int = 0; var_2738_int = 0; // 0xb48 PushV
	var_2733_int = var_2691_int; // 0xb49 Mov
	var_2734_string = "pers_worker"; // 0xb4a MovS
	var_2735_string = "agony1_man.xml"; // 0xb4b MovS
	var_2736_int = 2; // 0xb4c MovI
	var_2737_int = 4; // 0xb4d MovI
	var_2738_int = 4; // 0xb4e MovI
	func_522(var_2733_int, var_2734_string, var_2735_string, var_2736_int, var_2737_int, var_2738_int); // 0xb4f NEW_2
	var_2739_int = 0; var_2740_string = ""; var_2741_string = ""; var_2742_int = 0; var_2743_int = 0; var_2744_int = 0; // 0xb51 PushV
	var_2739_int = var_2691_int; // 0xb52 Mov
	var_2740_string = "pers_unosha"; // 0xb53 MovS
	var_2741_string = "agony1_man.xml"; // 0xb54 MovS
	var_2742_int = 2; // 0xb55 MovI
	var_2743_int = 4; // 0xb56 MovI
	var_2744_int = 4; // 0xb57 MovI
	func_522(var_2739_int, var_2740_string, var_2741_string, var_2742_int, var_2743_int, var_2744_int); // 0xb58 NEW_2
	var_2745_int = 0; var_2746_string = ""; var_2747_string = ""; var_2748_int = 0; var_2749_int = 0; var_2750_int = 0; // 0xb5a PushV
	var_2745_int = var_2691_int; // 0xb5b Mov
	var_2746_string = "pers_woman"; // 0xb5c MovS
	var_2747_string = "agony1_woman.xml"; // 0xb5d MovS
	var_2748_int = 2; // 0xb5e MovI
	var_2749_int = 4; // 0xb5f MovI
	var_2750_int = 4; // 0xb60 MovI
	func_522(var_2745_int, var_2746_string, var_2747_string, var_2748_int, var_2749_int, var_2750_int); // 0xb61 NEW_2
	var_2751_int = 0; var_2752_string = ""; var_2753_string = ""; var_2754_int = 0; var_2755_int = 0; var_2756_int = 0; // 0xb63 PushV
	var_2751_int = var_2691_int; // 0xb64 Mov
	var_2752_string = "pers_wasted_girl"; // 0xb65 MovS
	var_2753_string = "agony1_woman.xml"; // 0xb66 MovS
	var_2754_int = 2; // 0xb67 MovI
	var_2755_int = 4; // 0xb68 MovI
	var_2756_int = 4; // 0xb69 MovI
	func_522(var_2751_int, var_2752_string, var_2753_string, var_2754_int, var_2755_int, var_2756_int); // 0xb6a NEW_2
	var_2757_bool = 0; var_2758_int = 0; var_2759_int = 0; // 0xb6c PushV
	var_2758_int = var_2692_int; // 0xb6d Mov
	var_2759_int = var_2693_int; // 0xb6e Mov
	func_1351(var_2757_bool, var_2758_int, var_2759_int); // 0xb6f NEW_2
	if(var_2757_bool == 0) goto Label_2937; // 0xb71 JumpB
	var_2760_int = 0; var_2761_string = ""; var_2762_string = ""; var_2763_int = 0; // 0xb72 PushV
	var_2760_int = var_2691_int; // 0xb73 Mov
	var_2761_string = "pers_soldat"; // 0xb74 MovS
	var_2762_string = "soldier_marauder.xml"; // 0xb75 MovS
	var_2763_int = 2; // 0xb76 MovI
	func_509(var_2760_int, var_2761_string, var_2762_string, var_2763_int); // 0xb77 NEW_2
	
Label_2937:
	var_2764_bool = 0; var_2765_int = 0; // 0xb79 PushV
	var_2765_int = var_2692_int; // 0xb7a Mov
	func_1378(var_2764_bool, var_2765_int); // 0xb7b NEW_2
	if(var_2764_bool == 0) goto Label_2949; // 0xb7d JumpB
	var_2766_int = 0; var_2767_string = ""; var_2768_string = ""; var_2769_int = 0; // 0xb7e PushV
	var_2766_int = var_2691_int; // 0xb7f Mov
	var_2767_string = "pers_sanitar"; // 0xb80 MovS
	var_2768_string = "sanitar.xml"; // 0xb81 MovS
	var_2769_int = 1; // 0xb82 MovI
	func_509(var_2766_int, var_2767_string, var_2768_string, var_2769_int); // 0xb83 NEW_2
	
Label_2949:
	return 4; // 0xb85 Return
	
Label_2835:
	var_2770_int = 0; var_2771_string = ""; var_2772_string = ""; var_2773_int = 0; // 0xb13 PushV
	var_2770_int = var_2691_int; // 0xb14 Mov
	var_2771_string = "pers_vaxxabit"; // 0xb15 MovS
	var_2772_string = "vaxxabit_d.xml"; // 0xb16 MovS
	var_2773_int = 4; // 0xb17 MovI
	func_509(var_2770_int, var_2771_string, var_2772_string, var_2773_int); // 0xb18 NEW_2
	var_2774_int = 0; var_2775_string = ""; var_2776_string = ""; var_2777_int = 0; // 0xb1a PushV
	var_2774_int = var_2691_int; // 0xb1b Mov
	var_2775_string = "pers_vaxxabitka"; // 0xb1c MovS
	var_2776_string = "vaxxabitka_d.xml"; // 0xb1d MovS
	var_2777_int = 4; // 0xb1e MovI
	func_509(var_2774_int, var_2775_string, var_2776_string, var_2777_int); // 0xb1f NEW_2
	var_2778_int = 0; var_2779_string = ""; var_2780_string = ""; var_2781_int = 0; // 0xb21 PushV
	var_2778_int = var_2691_int; // 0xb22 Mov
	var_2779_string = "pers_rat_big"; // 0xb23 MovS
	var_2780_string = "rat_big.xml"; // 0xb24 MovS
	var_2781_int = 3; // 0xb25 MovI
	func_509(var_2778_int, var_2779_string, var_2780_string, var_2781_int); // 0xb26 NEW_2
	var_2782_int = 0; var_2783_string = ""; var_2784_string = ""; var_2785_int = 0; // 0xb28 PushV
	var_2782_int = var_2691_int; // 0xb29 Mov
	var_2783_string = "fog"; // 0xb2a MovS
	var_2784_string = "fog.xml"; // 0xb2b MovS
	var_2785_int = 6; // 0xb2c MovI
	func_535(var_2782_int, var_2783_string, var_2784_string, var_2785_int); // 0xb2d NEW_2
	var_2786_int = 5; // 0xb2f PushI
	var_2787_bool = var_2692_int >= var_2786_int; // 0xb30 GE
	if(var_2787_bool == 0) goto Label_2873; // 0xb31 JumpB
	var_2788_int = 0; var_2789_string = ""; var_2790_string = ""; var_2791_int = 0; // 0xb32 PushV
	var_2788_int = var_2691_int; // 0xb33 Mov
	var_2789_string = "fog"; // 0xb34 MovS
	var_2790_string = "fog_hunter.xml"; // 0xb35 MovS
	var_2791_int = 2; // 0xb36 MovI
	func_535(var_2788_int, var_2789_string, var_2790_string, var_2791_int); // 0xb37 NEW_2
	
Label_2873:
	var_2792_int = 1; // 0xb39 PushI
	var_2793_float = 0; var_2794_int = 0; // 0xb3a PushV
	var_2794_int = var_2692_int; // 0xb3b Mov
	func_1261(var_2793_float, var_2794_int); // 0xb3c NEW_2
	var_2697_int = var_2792_int * var_2793_float; // 0xb3e Mult2
	var_2795_int = var_2697_int; // 0xb3f Push
	if(var_2795_int == 0) goto Label_2888; // 0xb40 JumpB
	var_2796_int = 0; var_2797_string = ""; var_2798_string = ""; var_2799_int = 0; // 0xb41 PushV
	var_2796_int = var_2691_int; // 0xb42 Mov
	var_2797_string = "pers_bomber"; // 0xb43 MovS
	var_2798_string = "bomber.xml"; // 0xb44 MovS
	var_2799_int = var_2697_int; // 0xb45 Mov
	func_509(var_2796_int, var_2797_string, var_2798_string, var_2799_int); // 0xb46 NEW_2
}


func_9940(var_5257_int, var_5258_float)
{
	var_5259_int = 0; var_5260_int = 0; var_5261_int = 0; var_5262_float = 0; // 0x26d5 PushV
	var_5260_int = 530570; // 0x26d6 MovI
	var_5261_int = 530569; // 0x26d7 MovI
	var_5262_float = var_5258_float; // 0x26d8 Mov
	func_12495(var_5259_int, var_5260_int, var_5261_int, var_5262_float); // 0x26d9 NEW_2
	var_5257_int = var_5259_int; // 0x26da Mov
	return 0; // 0x26dc Return
}


func_726(var_3200_int, var_3201_int, var_3202_object, var_3203_object, var_3204_object)
{
	var_3205_int = 0; var_3206_bool = 0; // 0x2d7 PushV
	var_3205_int = var_3200_int; // 0x2d8 Mov
	var_3206_bool = 0; // 0x2d9 MovB
	func_548(var_3205_int, var_3206_bool); // 0x2da NEW_2
	var_3207_object = Obj(); // 0x2dc PushV
	var_3207_object = var_3202_object; // 0x2dd Mov
	func_269(var_3207_object); // 0x2de NEW_2
	var_3208_object = Obj(); // 0x2e0 PushV
	var_3208_object = var_3203_object; // 0x2e1 Mov
	func_269(var_3208_object); // 0x2e2 NEW_2
	var_3209_object = Obj(); // 0x2e4 PushV
	var_3209_object = var_3204_object; // 0x2e5 Mov
	func_269(var_3209_object); // 0x2e6 NEW_2
	var_3210_int = 8; // 0x2e8 PushI
	var_3211_bool = var_3201_int < var_3210_int; // 0x2e9 LT
	if(var_3211_bool == 0) goto Label_760; // 0x2ea JumpB
	var_3212_string = ""; var_3213_object = Obj(); var_3214_string = ""; var_3215_string = ""; // 0x2eb PushV
	var_3216_string = "pt_blockpost"; // 0x2ec PushS
	var_3217_int = 1; // 0x2ed PushI
	var_3218_int = var_3200_int + var_3217_int; // 0x2ee Add
	var_3219_int = var_3216_string + var_3218_int; // 0x2ef Add
	var_3220_string = "_1_"; // 0x2f0 PushS
	var_3212_string = var_3219_int + var_3220_string; // 0x2f1 Add2
	var_3213_object = var_3202_object; // 0x2f2 Mov
	var_3214_string = "pers_patrool"; // 0x2f3 MovS
	var_3215_string = "patrol_stat.xml"; // 0x2f4 MovS
	func_582(var_3213_object, var_3214_string, var_3215_string); // 0x2f5 NEW_2
	goto Label_784; // 0x2f7 Jump
	
Label_784:
	return 0; // 0x310 Return
	
Label_760:
	var_3221_string = ""; var_3222_object = Obj(); var_3223_string = ""; var_3224_string = ""; // 0x2f8 PushV
	var_3225_string = "pt_blockpost"; // 0x2f9 PushS
	var_3226_int = 1; // 0x2fa PushI
	var_3227_int = var_3200_int + var_3226_int; // 0x2fb Add
	var_3228_int = var_3225_string + var_3227_int; // 0x2fc Add
	var_3229_string = "_1_"; // 0x2fd PushS
	var_3221_string = var_3228_int + var_3229_string; // 0x2fe Add2
	var_3222_object = var_3202_object; // 0x2ff Mov
	var_3223_string = "pers_soldat"; // 0x300 MovS
	var_3224_string = "soldier.xml"; // 0x301 MovS
	func_582(var_3222_object, var_3223_string, var_3224_string); // 0x302 NEW_2
	var_3230_string = ""; var_3231_object = Obj(); var_3232_string = ""; var_3233_string = ""; // 0x304 PushV
	var_3234_string = "pt_blockpost"; // 0x305 PushS
	var_3235_int = 1; // 0x306 PushI
	var_3236_int = var_3200_int + var_3235_int; // 0x307 Add
	var_3237_int = var_3234_string + var_3236_int; // 0x308 Add
	var_3238_string = "_2_"; // 0x309 PushS
	var_3230_string = var_3237_int + var_3238_string; // 0x30a Add2
	var_3231_object = var_3203_object; // 0x30b Mov
	var_3232_string = "pers_sanitar"; // 0x30c MovS
	var_3233_string = "sanitar_stat.xml"; // 0x30d MovS
	func_582(var_3231_object, var_3232_string, var_3233_string); // 0x30e NEW_2
}


func_11991(var_5438_bool)
{
	var_5441_int = 0; var_5442_string = ""; // 0x2ed8 PushV
	var_5442_string = "d2LaraVisit"; // 0x2ed9 MovS
	func_138(var_5441_int, var_5442_string); // 0x2eda NEW_2
	var_5443_int = 0; // 0x2edc PushI
	var_5444_bool = var_5441_int != var_5443_int; // 0x2edd Neq
	if(var_5444_bool == 0) goto Label_12001; // 0x2ede JumpB
	var_5438_bool = 1; // 0x2edf MovB
	return 0; // 0x2ee0 Return
	
Label_12001:
	var_5438_bool = 0; // 0x2ee1 MovB
	return 0; // 0x2ee2 Return
}


func_9949(var_5505_int, var_5506_float)
{
	var_5507_int = 0; var_5508_int = 0; var_5509_int = 0; var_5510_float = 0; // 0x26de PushV
	var_5508_int = 515484; // 0x26df MovI
	var_5509_int = 515483; // 0x26e0 MovI
	var_5510_float = var_5506_float; // 0x26e1 Mov
	func_12495(var_5507_int, var_5508_int, var_5509_int, var_5510_float); // 0x26e2 NEW_2
	var_5505_int = var_5507_int; // 0x26e3 Mov
	return 0; // 0x26e5 Return
}


func_7907()
{
	var_4524_object = Obj(); // 0x1ee3 PushV
	var_4525_object = GlobalVars[15]; // 0x1ee4 PushGE
	var_4524_object = var_4525_object; // 0x1ee5 Mov
	func_269(var_4524_object); // 0x1ee7 NEW_2
	return 0; // 0x1ee9 Return
}


func_10980()
{
	var_5801_object = Obj(); var_5802_object = Obj(); var_5803_object = Obj(); var_5804_object = Obj(); // 0x2ae4 PushV
	var_5805_object = Obj(); // 0x2ae5 PushV
	func_12503(var_5805_object); // 0x2ae6 NEW_2
	var_5803_object = var_5805_object; // 0x2ae7 Mov
	var_5806_string = "d2q01AlexandrGotoAnna"; // 0x2ae9 PushS
	FindMark(var_5804_object, var_5806_string); // 0x2aea ObjFunc
	var_5807_object = var_5804_object; // 0x2aec Push
	if(var_5807_object == 0) goto Label_10992; // 0x2aed JumpB
	Remove(); // 0x2aee ObjFunc
	
Label_10992:
	var_5808_string = "d2q01AlexandrGotoBigVlad"; // 0x2af0 PushS
	FindMark(var_5804_object, var_5808_string); // 0x2af1 ObjFunc
	var_5809_object = var_5804_object; // 0x2af3 Push
	if(var_5809_object == 0) goto Label_10999; // 0x2af4 JumpB
	Remove(); // 0x2af5 ObjFunc
	
Label_10999:
	var_5810_string = "d2q01AlexandrGotoGeorg"; // 0x2af7 PushS
	FindMark(var_5804_object, var_5810_string); // 0x2af8 ObjFunc
	var_5811_object = var_5804_object; // 0x2afa Push
	if(var_5811_object == 0) goto Label_11006; // 0x2afb JumpB
	Remove(); // 0x2afc ObjFunc
	
Label_11006:
	var_5812_string = "d2q01AnnaGotoKapella"; // 0x2afe PushS
	FindMark(var_5804_object, var_5812_string); // 0x2aff ObjFunc
	var_5813_object = var_5804_object; // 0x2b01 Push
	if(var_5813_object == 0) goto Label_11013; // 0x2b02 JumpB
	Remove(); // 0x2b03 ObjFunc
	
Label_11013:
	var_5814_string = "d2q01KapellaGotoSpi4ka"; // 0x2b05 PushS
	FindMark(var_5804_object, var_5814_string); // 0x2b06 ObjFunc
	var_5815_object = var_5804_object; // 0x2b08 Push
	if(var_5815_object == 0) goto Label_11020; // 0x2b09 JumpB
	Remove(); // 0x2b0a ObjFunc
	
Label_11020:
	var_5816_string = "d2q01WomanDGotoAlexandr"; // 0x2b0c PushS
	FindMark(var_5804_object, var_5816_string); // 0x2b0d ObjFunc
	var_5817_object = var_5804_object; // 0x2b0f Push
	if(var_5817_object == 0) goto Label_11027; // 0x2b10 JumpB
	Remove(); // 0x2b11 ObjFunc
	
Label_11027:
	var_5818_string = "d2q02AndreiGotoGrif"; // 0x2b13 PushS
	FindMark(var_5804_object, var_5818_string); // 0x2b14 ObjFunc
	var_5819_object = var_5804_object; // 0x2b16 Push
	if(var_5819_object == 0) goto Label_11034; // 0x2b17 JumpB
	Remove(); // 0x2b18 ObjFunc
	
Label_11034:
	var_5820_string = "d2q02AndreiGotoPetr"; // 0x2b1a PushS
	FindMark(var_5804_object, var_5820_string); // 0x2b1b ObjFunc
	var_5821_object = var_5804_object; // 0x2b1d Push
	if(var_5821_object == 0) goto Label_11041; // 0x2b1e JumpB
	Remove(); // 0x2b1f ObjFunc
	
Label_11041:
	var_5822_string = "d2q02EvaGotoAndrei"; // 0x2b21 PushS
	FindMark(var_5804_object, var_5822_string); // 0x2b22 ObjFunc
	var_5823_object = var_5804_object; // 0x2b24 Push
	if(var_5823_object == 0) goto Label_11048; // 0x2b25 JumpB
	Remove(); // 0x2b26 ObjFunc
	
Label_11048:
	var_5824_string = "d2q02EvaGotoMaria"; // 0x2b28 PushS
	FindMark(var_5804_object, var_5824_string); // 0x2b29 ObjFunc
	var_5825_object = var_5804_object; // 0x2b2b Push
	if(var_5825_object == 0) goto Label_11055; // 0x2b2c JumpB
	Remove(); // 0x2b2d ObjFunc
	
Label_11055:
	var_5826_string = "d2q02MariaGotoPetr"; // 0x2b2f PushS
	FindMark(var_5804_object, var_5826_string); // 0x2b30 ObjFunc
	var_5827_object = var_5804_object; // 0x2b32 Push
	if(var_5827_object == 0) goto Label_11062; // 0x2b33 JumpB
	Remove(); // 0x2b34 ObjFunc
	
Label_11062:
	var_5828_string = "d2q02PetrGotoAndrei"; // 0x2b36 PushS
	FindMark(var_5804_object, var_5828_string); // 0x2b37 ObjFunc
	var_5829_object = var_5804_object; // 0x2b39 Push
	if(var_5829_object == 0) goto Label_11069; // 0x2b3a JumpB
	Remove(); // 0x2b3b ObjFunc
	
Label_11069:
	var_5830_string = "d2q03BirdmaskGotoLara"; // 0x2b3d PushS
	FindMark(var_5804_object, var_5830_string); // 0x2b3e ObjFunc
	var_5831_object = var_5804_object; // 0x2b40 Push
	if(var_5831_object == 0) goto Label_11076; // 0x2b41 JumpB
	Remove(); // 0x2b42 ObjFunc
	
Label_11076:
	var_5832_string = "d2q03LaraGotoJulia"; // 0x2b44 PushS
	FindMark(var_5804_object, var_5832_string); // 0x2b45 ObjFunc
	var_5833_object = var_5804_object; // 0x2b47 Push
	if(var_5833_object == 0) goto Label_11083; // 0x2b48 JumpB
	Remove(); // 0x2b49 ObjFunc
	
Label_11083:
	var_5834_string = "d2q03LaraGotoMaria"; // 0x2b4b PushS
	FindMark(var_5804_object, var_5834_string); // 0x2b4c ObjFunc
	var_5835_object = var_5804_object; // 0x2b4e Push
	if(var_5835_object == 0) goto Label_11090; // 0x2b4f JumpB
	Remove(); // 0x2b50 ObjFunc
	
Label_11090:
	var_5836_string = "d2q03LaraGotoMladVlad"; // 0x2b52 PushS
	FindMark(var_5804_object, var_5836_string); // 0x2b53 ObjFunc
	var_5837_object = var_5804_object; // 0x2b55 Push
	if(var_5837_object == 0) goto Label_11097; // 0x2b56 JumpB
	Remove(); // 0x2b57 ObjFunc
	
Label_11097:
	var_5838_string = "d2q03LaraGotoMoneyFoodSelf"; // 0x2b59 PushS
	FindMark(var_5804_object, var_5838_string); // 0x2b5a ObjFunc
	var_5839_object = var_5804_object; // 0x2b5c Push
	if(var_5839_object == 0) goto Label_11104; // 0x2b5d JumpB
	Remove(); // 0x2b5e ObjFunc
	
Label_11104:
	var_5840_string = "d2q03LaraGotoSklad"; // 0x2b60 PushS
	FindMark(var_5804_object, var_5840_string); // 0x2b61 ObjFunc
	var_5841_object = var_5804_object; // 0x2b63 Push
	if(var_5841_object == 0) goto Label_11111; // 0x2b64 JumpB
	Remove(); // 0x2b65 ObjFunc
	
Label_11111:
	var_5842_bool = 0; var_5843_int = 0; // 0x2b67 PushV
	var_5843_int = 10; // 0x2b68 MovI
	func_12478(var_5842_bool, var_5843_int); // 0x2b69 NEW_2
	var_5844_bool = 0; var_5845_int = 0; // 0x2b6b PushV
	var_5845_int = 11; // 0x2b6c MovI
	func_12478(var_5844_bool, var_5845_int); // 0x2b6d NEW_2
	var_5846_bool = 0; var_5847_int = 0; // 0x2b6f PushV
	var_5847_int = 12; // 0x2b70 MovI
	func_12478(var_5846_bool, var_5847_int); // 0x2b71 NEW_2
	return 4; // 0x2b73 Return
}


func_12003(var_5454_bool)
{
	var_5457_int = 0; var_5458_string = ""; // 0x2ee4 PushV
	var_5458_string = "d4MladVladVisit"; // 0x2ee5 MovS
	func_138(var_5457_int, var_5458_string); // 0x2ee6 NEW_2
	var_5459_int = 0; // 0x2ee8 PushI
	var_5460_bool = var_5457_int != var_5459_int; // 0x2ee9 Neq
	if(var_5460_bool == 0) goto Label_12013; // 0x2eea JumpB
	var_5454_bool = 1; // 0x2eeb MovB
	return 0; // 0x2eec Return
	
Label_12013:
	var_5454_bool = 0; // 0x2eed MovB
	return 0; // 0x2eee Return
}


func_9958(var_5184_int, var_5185_float)
{
	var_5186_int = 0; var_5187_int = 0; var_5188_int = 0; var_5189_float = 0; // 0x26e7 PushV
	var_5187_int = 522214; // 0x26e8 MovI
	var_5188_int = 522213; // 0x26e9 MovI
	var_5189_float = var_5185_float; // 0x26ea Mov
	func_12495(var_5186_int, var_5187_int, var_5188_int, var_5189_float); // 0x26eb NEW_2
	var_5184_int = var_5186_int; // 0x26ec Mov
	return 0; // 0x26ee Return
}


func_6889()
{
	var_282_string = "r7_house2_01"; // 0x1aea PushS
	add(var_282_string); // 0x1aeb ObjFunc
	var_283_string = "r7_house2_02"; // 0x1aed PushS
	add(var_283_string); // 0x1aee ObjFunc
	var_284_string = "r7_house2_03"; // 0x1af0 PushS
	add(var_284_string); // 0x1af1 ObjFunc
	var_285_string = "r7_house2_04"; // 0x1af3 PushS
	add(var_285_string); // 0x1af4 ObjFunc
	var_286_string = "r7_house3_03_i2"; // 0x1af6 PushS
	add(var_286_string); // 0x1af7 ObjFunc
	var_287_string = "r7_house3_03"; // 0x1af9 PushS
	add(var_287_string); // 0x1afa ObjFunc
	var_288_string = "r7_house3_04_i2"; // 0x1afc PushS
	add(var_288_string); // 0x1afd ObjFunc
	var_289_string = "r7_house3_04"; // 0x1aff PushS
	add(var_289_string); // 0x1b00 ObjFunc
	var_290_string = "r7_house3_05_i2"; // 0x1b02 PushS
	add(var_290_string); // 0x1b03 ObjFunc
	var_291_string = "r7_house3_05"; // 0x1b05 PushS
	add(var_291_string); // 0x1b06 ObjFunc
	var_292_string = "r7_house3_06_i2"; // 0x1b08 PushS
	add(var_292_string); // 0x1b09 ObjFunc
	var_293_string = "r7_house3_01_i2"; // 0x1b0b PushS
	add(var_293_string); // 0x1b0c ObjFunc
	var_294_string = "r7_house3_01"; // 0x1b0e PushS
	add(var_294_string); // 0x1b0f ObjFunc
	var_295_string = "r7_house3_02_i2"; // 0x1b11 PushS
	add(var_295_string); // 0x1b12 ObjFunc
	var_296_string = "r7_house3_02"; // 0x1b14 PushS
	add(var_296_string); // 0x1b15 ObjFunc
	return 0; // 0x1b17 Return
}


func_7914()
{
	var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_bool = 0; var_39_object = Obj(); // 0x1eea PushV
	var_40_object = GlobalVars[15]; // 0x1eeb PushGE
	var_41_object = Obj(); // 0x1eec PushV
	func_132(var_41_object); // 0x1eed NEW_2
	var_40_object = var_41_object; // 0x1eee Mov
	GlobalVars[15] = var_40_object; // 0x1ef0 PopGE
	var_44_object = GlobalVars[13]; // 0x1ef1 PushGE
	var_45_object = Obj(); // 0x1ef2 PushV
	func_132(var_45_object); // 0x1ef3 NEW_2
	var_44_object = var_45_object; // 0x1ef4 Mov
	GlobalVars[13] = var_44_object; // 0x1ef6 PopGE
	var_46_object = GlobalVars[8]; // 0x1ef7 PushGE
	var_47_object = Obj(); // 0x1ef8 PushV
	func_132(var_47_object); // 0x1ef9 NEW_2
	var_46_object = var_47_object; // 0x1efa Mov
	GlobalVars[8] = var_46_object; // 0x1efc PopGE
	var_48_object = GlobalVars[9]; // 0x1efd PushGE
	var_49_object = Obj(); // 0x1efe PushV
	func_132(var_49_object); // 0x1eff NEW_2
	var_48_object = var_49_object; // 0x1f00 Mov
	GlobalVars[9] = var_48_object; // 0x1f02 PopGE
	var_50_object = GlobalVars[10]; // 0x1f03 PushGE
	var_51_object = Obj(); // 0x1f04 PushV
	func_132(var_51_object); // 0x1f05 NEW_2
	var_50_object = var_51_object; // 0x1f06 Mov
	GlobalVars[10] = var_50_object; // 0x1f08 PopGE
	var_30_int = 0; // 0x1f09 MovI
	
Label_7946:
	var_52_int = 16; // 0x1f0a PushI
	var_53_bool = var_30_int < var_52_int; // 0x1f0b LT
	if(var_53_bool == 0) goto Label_7970; // 0x1f0c JumpB
	var_54_object = GlobalVars[8]; // 0x1f0d PushGE
	var_55_object = Obj(); // 0x1f0e PushV
	func_132(var_55_object); // 0x1f0f NEW_2
	add(var_55_object); // 0x1f11 ObjFunc
	var_56_object = GlobalVars[9]; // 0x1f13 PushGE
	var_57_object = Obj(); // 0x1f14 PushV
	func_132(var_57_object); // 0x1f15 NEW_2
	add(var_57_object); // 0x1f17 ObjFunc
	var_58_object = GlobalVars[10]; // 0x1f19 PushGE
	var_59_object = Obj(); // 0x1f1a PushV
	func_132(var_59_object); // 0x1f1b NEW_2
	add(var_59_object); // 0x1f1d ObjFunc
	var_60_int = 1; // 0x1f1f PushI
	var_30_int = var_30_int + var_60_int; // 0x1f20 Add2
	goto Label_7946; // 0x1f21 Jump
	
Label_7970:
	CreateStringVector(var_31_object); // 0x1f22 Func
	var_61_object = GlobalVars[13]; // 0x1f24 PushGE
	add(var_31_object); // 0x1f25 ObjFunc
	var_62_object = Obj(); // 0x1f27 PushV
	var_62_object = var_31_object; // 0x1f28 Mov
	func_4391(); // 0x1f29 NEW_2
	CreateStringVector(var_31_object); // 0x1f2b Func
	var_63_object = GlobalVars[13]; // 0x1f2d PushGE
	add(var_31_object); // 0x1f2e ObjFunc
	var_64_object = Obj(); // 0x1f30 PushV
	var_64_object = var_31_object; // 0x1f31 Mov
	func_4549(); // 0x1f32 NEW_2
	CreateStringVector(var_31_object); // 0x1f34 Func
	var_78_object = GlobalVars[13]; // 0x1f36 PushGE
	add(var_31_object); // 0x1f37 ObjFunc
	var_79_object = Obj(); // 0x1f39 PushV
	var_79_object = var_31_object; // 0x1f3a Mov
	func_4746(); // 0x1f3b NEW_2
	CreateStringVector(var_31_object); // 0x1f3d Func
	var_96_object = GlobalVars[13]; // 0x1f3f PushGE
	add(var_31_object); // 0x1f40 ObjFunc
	var_97_object = Obj(); // 0x1f42 PushV
	var_97_object = var_31_object; // 0x1f43 Mov
	func_4952(); // 0x1f44 NEW_2
	CreateStringVector(var_31_object); // 0x1f46 Func
	var_122_object = GlobalVars[13]; // 0x1f48 PushGE
	add(var_31_object); // 0x1f49 ObjFunc
	var_123_object = Obj(); // 0x1f4b PushV
	var_123_object = var_31_object; // 0x1f4c Mov
	func_5182(); // 0x1f4d NEW_2
	CreateStringVector(var_31_object); // 0x1f4f Func
	var_144_object = GlobalVars[13]; // 0x1f51 PushGE
	add(var_31_object); // 0x1f52 ObjFunc
	var_145_object = Obj(); // 0x1f54 PushV
	var_145_object = var_31_object; // 0x1f55 Mov
	func_5400(); // 0x1f56 NEW_2
	CreateStringVector(var_31_object); // 0x1f58 Func
	var_175_object = GlobalVars[13]; // 0x1f5a PushGE
	add(var_31_object); // 0x1f5b ObjFunc
	var_176_object = Obj(); // 0x1f5d PushV
	var_176_object = var_31_object; // 0x1f5e Mov
	func_5645(); // 0x1f5f NEW_2
	CreateStringVector(var_31_object); // 0x1f61 Func
	var_177_object = GlobalVars[13]; // 0x1f63 PushGE
	add(var_31_object); // 0x1f64 ObjFunc
	var_178_object = Obj(); // 0x1f66 PushV
	var_178_object = var_31_object; // 0x1f67 Mov
	func_5668(); // 0x1f68 NEW_2
	CreateStringVector(var_31_object); // 0x1f6a Func
	var_193_object = GlobalVars[13]; // 0x1f6c PushGE
	add(var_31_object); // 0x1f6d ObjFunc
	var_194_object = Obj(); // 0x1f6f PushV
	var_194_object = var_31_object; // 0x1f70 Mov
	func_5868(); // 0x1f71 NEW_2
	CreateStringVector(var_31_object); // 0x1f73 Func
	var_209_object = GlobalVars[13]; // 0x1f75 PushGE
	add(var_31_object); // 0x1f76 ObjFunc
	var_210_object = Obj(); // 0x1f78 PushV
	var_210_object = var_31_object; // 0x1f79 Mov
	func_6068(); // 0x1f7a NEW_2
	CreateStringVector(var_31_object); // 0x1f7c Func
	var_226_object = GlobalVars[13]; // 0x1f7e PushGE
	add(var_31_object); // 0x1f7f ObjFunc
	var_227_object = Obj(); // 0x1f81 PushV
	var_227_object = var_31_object; // 0x1f82 Mov
	func_6271(); // 0x1f83 NEW_2
	CreateStringVector(var_31_object); // 0x1f85 Func
	var_245_object = GlobalVars[13]; // 0x1f87 PushGE
	add(var_31_object); // 0x1f88 ObjFunc
	var_246_object = Obj(); // 0x1f8a PushV
	var_246_object = var_31_object; // 0x1f8b Mov
	func_6480(); // 0x1f8c NEW_2
	CreateStringVector(var_31_object); // 0x1f8e Func
	var_265_object = GlobalVars[13]; // 0x1f90 PushGE
	add(var_31_object); // 0x1f91 ObjFunc
	var_266_object = Obj(); // 0x1f93 PushV
	var_266_object = var_31_object; // 0x1f94 Mov
	func_6692(); // 0x1f95 NEW_2
	CreateStringVector(var_31_object); // 0x1f97 Func
	var_280_object = GlobalVars[13]; // 0x1f99 PushGE
	add(var_31_object); // 0x1f9a ObjFunc
	var_281_object = Obj(); // 0x1f9c PushV
	var_281_object = var_31_object; // 0x1f9d Mov
	func_6889(); // 0x1f9e NEW_2
	CreateStringVector(var_31_object); // 0x1fa0 Func
	var_297_object = GlobalVars[13]; // 0x1fa2 PushGE
	add(var_31_object); // 0x1fa3 ObjFunc
	var_298_object = Obj(); // 0x1fa5 PushV
	var_298_object = var_31_object; // 0x1fa6 Mov
	func_7092(); // 0x1fa7 NEW_2
	CreateStringVector(var_31_object); // 0x1fa9 Func
	var_313_object = GlobalVars[13]; // 0x1fab PushGE
	add(var_31_object); // 0x1fac ObjFunc
	var_314_object = Obj(); // 0x1fae PushV
	var_314_object = var_31_object; // 0x1faf Mov
	func_7292(); // 0x1fb0 NEW_2
	func_7884(); // 0x1fb3 NEW_2
	GetMainOutdoorScene(var_32_object); // 0x1fb5 Func
	var_350_object = GlobalVars[6]; // 0x1fb7 PushGE
	var_351_object = Obj(); // 0x1fb8 PushV
	func_132(var_351_object); // 0x1fb9 NEW_2
	var_350_object = var_351_object; // 0x1fba Mov
	GlobalVars[6] = var_350_object; // 0x1fbc PopGE
	var_33_int = 0; // 0x1fbd MovI
	
Label_8126:
	var_352_string = "pt_plant"; // 0x1fbe PushS
	var_353_int = 1; // 0x1fbf PushI
	var_354_int = var_33_int + var_353_int; // 0x1fc0 Add
	var_355_int = var_352_string + var_354_int; // 0x1fc1 Add
	GetLocator(var_355_int, var_34_bool); // 0x1fc2 ObjFunc
	var_356_bool = var_34_bool == 0; // 0x1fc4 Not
	if(var_356_bool == 0) goto Label_8135; // 0x1fc5 JumpB
	goto Label_8138; // 0x1fc6 Jump
	
Label_8138:
	var_357_object = GlobalVars[6]; // 0x1fca PushGE
	resize(var_33_int); // 0x1fcb ObjFunc
	var_358_string = "Total plants: "; // 0x1fcd PushS
	var_359_int = var_358_string + var_33_int; // 0x1fce Add
	Trace(var_359_int); // 0x1fcf Func
	var_360_object = GlobalVars[7]; // 0x1fd1 PushGE
	var_361_object = Obj(); // 0x1fd2 PushV
	func_132(var_361_object); // 0x1fd3 NEW_2
	var_360_object = var_361_object; // 0x1fd4 Mov
	GlobalVars[7] = var_360_object; // 0x1fd6 PopGE
	var_35_int = 0; // 0x1fd7 MovI
	
Label_8152:
	var_362_string = "pt_grave_supply"; // 0x1fd8 PushS
	var_363_int = 1; // 0x1fd9 PushI
	var_364_int = var_35_int + var_363_int; // 0x1fda Add
	var_365_int = var_362_string + var_364_int; // 0x1fdb Add
	GetLocator(var_365_int, var_36_bool); // 0x1fdc ObjFunc
	var_366_bool = var_36_bool == 0; // 0x1fde Not
	if(var_366_bool == 0) goto Label_8161; // 0x1fdf JumpB
	goto Label_8164; // 0x1fe0 Jump
	
Label_8164:
	var_367_object = GlobalVars[7]; // 0x1fe4 PushGE
	resize(var_35_int); // 0x1fe5 ObjFunc
	var_368_string = "Total grave supplies: "; // 0x1fe7 PushS
	var_369_int = var_368_string + var_35_int; // 0x1fe8 Add
	Trace(var_369_int); // 0x1fe9 Func
	var_370_object = GlobalVars[14]; // 0x1feb PushGE
	var_371_object = Obj(); // 0x1fec PushV
	func_132(var_371_object); // 0x1fed NEW_2
	var_370_object = var_371_object; // 0x1fee Mov
	GlobalVars[14] = var_370_object; // 0x1ff0 PopGE
	var_37_int = 0; // 0x1ff1 MovI
	
Label_8178:
	var_372_string = "pt_bonfire"; // 0x1ff2 PushS
	var_373_int = 1; // 0x1ff3 PushI
	var_374_int = var_37_int + var_373_int; // 0x1ff4 Add
	var_375_int = var_372_string + var_374_int; // 0x1ff5 Add
	GetLocator(var_375_int, var_38_bool); // 0x1ff6 ObjFunc
	var_376_bool = var_38_bool == 0; // 0x1ff8 Not
	if(var_376_bool == 0) goto Label_8187; // 0x1ff9 JumpB
	goto Label_8199; // 0x1ffa Jump
	
Label_8199:
	var_377_string = "Total bonfires: "; // 0x2007 PushS
	var_378_int = var_377_string + var_37_int; // 0x2008 Add
	Trace(var_378_int); // 0x2009 Func
	return 20; // 0x200b Return
	
Label_8187:
	var_39_object = 0; // 0x1ffb SetNull
	var_379_object = GlobalVars[14]; // 0x1ffc PushGE
	add(var_39_object); // 0x1ffd ObjFunc
	var_380_int = 0; // 0x1fff PushV
	var_380_int = var_37_int; // 0x2000 Mov
	func_7691(var_380_int); // 0x2001 NEW_2
	var_39_object = 0; // 0x2003 SetNull
	var_415_int = 1; // 0x2004 PushI
	var_37_int = var_37_int + var_415_int; // 0x2005 Add2
	goto Label_8178; // 0x2006 Jump
	
Label_8161:
	var_416_int = 1; // 0x1fe1 PushI
	var_35_int = var_35_int + var_416_int; // 0x1fe2 Add2
	goto Label_8152; // 0x1fe3 Jump
	
Label_8135:
	var_417_int = 1; // 0x1fc7 PushI
	var_33_int = var_33_int + var_417_int; // 0x1fc8 Add2
	goto Label_8126; // 0x1fc9 Jump
}


func_5868()
{
	var_195_string = "r2_house_2_01"; // 0x16ed PushS
	add(var_195_string); // 0x16ee ObjFunc
	var_196_string = "r2_house_2_02"; // 0x16f0 PushS
	add(var_196_string); // 0x16f1 ObjFunc
	var_197_string = "r2_house_2_03"; // 0x16f3 PushS
	add(var_197_string); // 0x16f4 ObjFunc
	var_198_string = "r2_house7_02"; // 0x16f6 PushS
	add(var_198_string); // 0x16f7 ObjFunc
	var_199_string = "r2_house01_01"; // 0x16f9 PushS
	add(var_199_string); // 0x16fa ObjFunc
	var_200_string = "r2_house7_01"; // 0x16fc PushS
	add(var_200_string); // 0x16fd ObjFunc
	var_201_string = "r2_house3_01_i2"; // 0x16ff PushS
	add(var_201_string); // 0x1700 ObjFunc
	var_202_string = "r2_house3_01"; // 0x1702 PushS
	add(var_202_string); // 0x1703 ObjFunc
	var_203_string = "r2_house3_02_i2"; // 0x1705 PushS
	add(var_203_string); // 0x1706 ObjFunc
	var_204_string = "r2_house3_02"; // 0x1708 PushS
	add(var_204_string); // 0x1709 ObjFunc
	var_205_string = "r2_house3_03_i2"; // 0x170b PushS
	add(var_205_string); // 0x170c ObjFunc
	var_206_string = "r2_house3_03"; // 0x170e PushS
	add(var_206_string); // 0x170f ObjFunc
	var_207_string = "r3_house7_01"; // 0x1711 PushS
	add(var_207_string); // 0x1712 ObjFunc
	var_208_string = "r3_house7_02"; // 0x1714 PushS
	add(var_208_string); // 0x1715 ObjFunc
	return 0; // 0x1717 Return
}


func_12015(var_5301_bool)
{
	var_5304_int = 0; var_5305_string = ""; // 0x2ef0 PushV
	var_5305_string = "d4AlexandrVisit"; // 0x2ef1 MovS
	func_138(var_5304_int, var_5305_string); // 0x2ef2 NEW_2
	var_5306_int = 0; // 0x2ef4 PushI
	var_5307_bool = var_5304_int != var_5306_int; // 0x2ef5 Neq
	if(var_5307_bool == 0) goto Label_12025; // 0x2ef6 JumpB
	var_5301_bool = 1; // 0x2ef7 MovB
	return 0; // 0x2ef8 Return
	
Label_12025:
	var_5301_bool = 0; // 0x2ef9 MovB
	return 0; // 0x2efa Return
}


func_4848(var_2408_int, var_2409_int, var_2410_object, var_2411_object, var_2412_object, var_2413_object)
{
	var_2414_int = 0; // 0x12f1 PushI
	var_2415_bool = var_2409_int == var_2414_int; // 0x12f2 Eq
	if(var_2415_bool == 0) goto Label_4888; // 0x12f3 JumpB
	var_2416_int = 0; var_2417_bool = 0; // 0x12f4 PushV
	var_2416_int = 2; // 0x12f5 MovI
	var_2417_bool = 1; // 0x12f6 MovB
	func_802(var_2416_int, var_2417_bool); // 0x12f7 NEW_2
	var_2418_int = 0; var_2419_bool = 0; var_2420_int = 0; // 0x12f9 PushV
	var_2418_int = 2; // 0x12fa MovI
	var_2419_bool = 1; // 0x12fb MovB
	var_2420_int = 1; // 0x12fc MovI
	func_819(var_2418_int, var_2419_bool, var_2420_int); // 0x12fd NEW_2
	var_2421_int = 0; var_2422_int = 0; var_2423_object = Obj(); var_2424_object = Obj(); var_2425_object = Obj(); // 0x12ff PushV
	var_2421_int = 2; // 0x1300 MovI
	var_2422_int = var_2408_int; // 0x1301 Mov
	var_2423_object = var_2410_object; // 0x1302 Mov
	var_2424_object = var_2411_object; // 0x1303 Mov
	var_2425_object = var_2412_object; // 0x1304 Mov
	func_647(var_2421_int, var_2422_int, var_2423_object, var_2424_object, var_2425_object); // 0x1305 NEW_2
	var_2426_object = Obj(); var_2427_int = 0; // 0x1307 PushV
	var_2426_object = var_2413_object; // 0x1308 Mov
	var_2427_int = 1; // 0x1309 MovI
	func_311(var_2427_int); // 0x130a NEW_2
	var_2428_int = 0; var_2429_bool = 0; var_2430_int = 0; // 0x130c PushV
	var_2428_int = 2; // 0x130d MovI
	var_2429_bool = 1; // 0x130e MovB
	var_2430_int = 5; // 0x130f MovI
	func_876(var_2428_int, var_2429_bool, var_2430_int); // 0x1310 NEW_2
	var_2431_int = 0; var_2432_bool = 0; var_2433_int = 0; // 0x1312 PushV
	var_2431_int = 2; // 0x1313 MovI
	var_2432_bool = 0; // 0x1314 MovB
	var_2433_int = 5; // 0x1315 MovI
	func_938(var_2431_int, var_2432_bool, var_2433_int); // 0x1316 NEW_2
	
Label_4888:
	var_2434_int = 0; var_2435_bool = 0; // 0x1318 PushV
	var_2434_int = 2; // 0x1319 MovI
	var_2435_bool = 0; // 0x131a MovB
	func_785(var_2434_int, var_2435_bool); // 0x131b NEW_2
	var_2436_int = 0; var_2437_int = 0; var_2438_int = 0; // 0x131d PushV
	var_2436_int = 2; // 0x131e MovI
	var_2437_int = var_2408_int; // 0x131f Mov
	var_2438_int = var_2409_int; // 0x1320 Mov
	func_2950(var_2436_int, var_2437_int, var_2438_int); // 0x1321 NEW_2
	return 0; // 0x1323 Return
}


func_9967(var_5681_int, var_5682_float)
{
	var_5683_int = 0; var_5684_int = 0; var_5685_int = 0; var_5686_float = 0; // 0x26f0 PushV
	var_5684_int = 514529; // 0x26f1 MovI
	var_5685_int = 514528; // 0x26f2 MovI
	var_5686_float = var_5682_float; // 0x26f3 Mov
	func_12495(var_5683_int, var_5684_int, var_5685_int, var_5686_float); // 0x26f4 NEW_2
	var_5681_int = var_5683_int; // 0x26f5 Mov
	return 0; // 0x26f7 Return
}


func_9976(var_6350_int, var_6351_float)
{
	var_6352_int = 0; var_6353_int = 0; var_6354_int = 0; var_6355_float = 0; // 0x26f9 PushV
	var_6353_int = 514531; // 0x26fa MovI
	var_6354_int = 514530; // 0x26fb MovI
	var_6355_float = var_6351_float; // 0x26fc Mov
	func_12495(var_6352_int, var_6353_int, var_6354_int, var_6355_float); // 0x26fd NEW_2
	var_6350_int = var_6352_int; // 0x26fe Mov
	return 0; // 0x2700 Return
}


func_8954()
{
	var_418_float = 0; var_419_int = 0; var_420_int = 0; var_421_float = 0; var_422_int = 0; var_423_object = Obj(); var_424_object = Obj(); var_425_float = 0; var_426_int = 0; var_427_int = 0; var_428_float = 0; var_429_int = 0; var_430_object = Obj(); var_431_object = Obj(); // 0x22fa PushV
	GetGameTime(var_425_float); // 0x22fb Func
	var_426_int = 1; // 0x22fd MovI
	
Label_8958:
	var_432_int = 12; // 0x22fe PushI
	var_433_bool = var_426_int < var_432_int; // 0x22ff LT
	if(var_433_bool == 0) goto Label_8970; // 0x2300 JumpB
	var_434_int = 16384; // 0x2301 PushI
	var_435_int = var_434_int + var_426_int; // 0x2302 Add
	var_436_int = 24; // 0x2303 PushI
	var_437_float = var_436_int * var_426_int; // 0x2304 Mult
	SetTimeEvent(var_435_int, var_437_float); // 0x2305 Func
	var_438_int = 1; // 0x2307 PushI
	var_426_int = var_426_int + var_438_int; // 0x2308 Add2
	goto Label_8958; // 0x2309 Jump
	
Label_8970:
	var_427_int = 0; // 0x230a MovI
	
Label_8971:
	var_439_int = 288; // 0x230b PushI
	var_440_bool = var_427_int < var_439_int; // 0x230c LT
	if(var_440_bool == 0) goto Label_8985; // 0x230d JumpB
	var_428_float = var_427_int; // 0x230e Mov
	var_441_bool = var_428_float < var_425_float; // 0x230f LT
	if(var_441_bool == 0) goto Label_8978; // 0x2310 JumpB
	goto Label_8982; // 0x2311 Jump
	
Label_8982:
	var_442_int = 1; // 0x2316 PushI
	var_427_int = var_427_int + var_442_int; // 0x2317 Add2
	goto Label_8971; // 0x2318 Jump
	
Label_8978:
	var_443_int = 32768; // 0x2312 PushI
	var_444_int = var_443_int + var_427_int; // 0x2313 Add
	SetTimeEvent(var_444_int, var_428_float); // 0x2314 Func
	
Label_8985:
	var_429_int = 0; // 0x2319 MovI
	
Label_8986:
	var_445_int = 16; // 0x231a PushI
	var_446_bool = var_429_int < var_445_int; // 0x231b LT
	if(var_446_bool == 0) goto Label_9004; // 0x231c JumpB
	var_447_string = ""; var_448_int = 0; // 0x231d PushV
	var_448_int = var_429_int; // 0x231e Mov
	func_305(var_447_string, var_448_int); // 0x231f NEW_2
	var_452_int = 0; // 0x2321 PushI
	SetVariable(var_447_string, var_452_int); // 0x2322 Func
	var_453_int = 0; var_454_bool = 0; // 0x2324 PushV
	var_453_int = var_429_int; // 0x2325 Mov
	var_454_bool = 0; // 0x2326 MovB
	func_802(var_453_int, var_454_bool); // 0x2327 NEW_2
	var_464_int = 1; // 0x2329 PushI
	var_429_int = var_429_int + var_464_int; // 0x232a Add2
	goto Label_8986; // 0x232b Jump
	
Label_9004:
	var_465_int = 0; var_466_int = 0; var_467_int = 0; var_468_int = 0; // 0x232c PushV
	var_465_int = 0; // 0x232d MovI
	var_469_int = 24; // 0x232e PushI
	var_466_int = var_425_float % var_469_int; // 0x232f Mod2
	var_467_int = 0; // 0x2330 MovI
	var_470_int = 24; // 0x2331 PushI
	var_468_int = var_425_float % var_470_int; // 0x2332 Mod2
	func_9037(var_465_int, var_466_int, var_467_int, var_468_int); // 0x2333 NEW_2
	var_4389_string = "dt_house_1_07"; // 0x2335 PushS
	FindActor(var_430_object, var_4389_string); // 0x2336 Func
	var_4390_int = 200; // 0x2338 PushI
	var_4391_bool = 0; // 0x2339 PushB
	EnableSubset(var_4390_int, var_4391_bool); // 0x233a ObjFunc
	GetMainOutdoorScene(var_431_object); // 0x233c Func
	var_4392_int = 0; // 0x233e PushI
	var_4393_bool = 0; // 0x233f PushV
	var_4393_bool = 1; // 0x2340 MovB
	var_4394_int = 7; // 0x2341 PushI
	var_4395_bool = var_425_float < var_4394_int; // 0x2342 LT
	if(var_4395_bool == 0) goto Label_9032; // 0x2343 JumpB
	var_4396_int = 20; // 0x2344 PushI
	var_4397_bool = var_425_float >= var_4396_int; // 0x2345 GE
	if(var_4397_bool == 0) goto Label_9032; // 0x2346 JumpB
	var_4393_bool = 0; // 0x2347 MovB
	
Label_9032:
	SwitchLights(var_4392_int, var_4393_bool); // 0x2348 ObjFunc
	return 14; // 0x234a Return
}


func_12027(var_5403_bool)
{
	var_5406_int = 0; var_5407_string = ""; // 0x2efc PushV
	var_5407_string = "d5AnnaVisit"; // 0x2efd MovS
	func_138(var_5406_int, var_5407_string); // 0x2efe NEW_2
	var_5408_int = 0; // 0x2f00 PushI
	var_5409_bool = var_5406_int != var_5408_int; // 0x2f01 Neq
	if(var_5409_bool == 0) goto Label_12037; // 0x2f02 JumpB
	var_5403_bool = 1; // 0x2f03 MovB
	return 0; // 0x2f04 Return
	
Label_12037:
	var_5403_bool = 0; // 0x2f05 MovB
	return 0; // 0x2f06 Return
}


func_9985(var_5094_int, var_5095_float)
{
	var_5096_int = 0; var_5097_int = 0; var_5098_int = 0; var_5099_float = 0; // 0x2702 PushV
	var_5097_int = 538404; // 0x2703 MovI
	var_5098_int = 538403; // 0x2704 MovI
	var_5099_float = var_5095_float; // 0x2705 Mov
	func_12495(var_5096_int, var_5097_int, var_5098_int, var_5099_float); // 0x2706 NEW_2
	var_5094_int = var_5096_int; // 0x2707 Mov
	return 0; // 0x2709 Return
}


func_12039(var_5317_bool)
{
	var_5320_int = 0; var_5321_string = ""; // 0x2f08 PushV
	var_5321_string = "d8MladVladVisit"; // 0x2f09 MovS
	func_138(var_5320_int, var_5321_string); // 0x2f0a NEW_2
	var_5322_int = 0; // 0x2f0c PushI
	var_5323_bool = var_5320_int != var_5322_int; // 0x2f0d Neq
	if(var_5323_bool == 0) goto Label_12049; // 0x2f0e JumpB
	var_5317_bool = 1; // 0x2f0f MovB
	return 0; // 0x2f10 Return
	
Label_12049:
	var_5317_bool = 0; // 0x2f11 MovB
	return 0; // 0x2f12 Return
}


func_9994(var_5293_int, var_5294_float)
{
	var_5295_int = 0; var_5296_int = 0; var_5297_int = 0; var_5298_float = 0; // 0x270b PushV
	var_5296_int = 530572; // 0x270c MovI
	var_5297_int = 530571; // 0x270d MovI
	var_5298_float = var_5294_float; // 0x270e Mov
	func_12495(var_5295_int, var_5296_int, var_5297_int, var_5298_float); // 0x270f NEW_2
	var_5293_int = var_5295_int; // 0x2710 Mov
	return 0; // 0x2712 Return
}


func_3853(var_3565_int, var_3566_int, var_3567_int)
{
	var_3568_int = 0; var_3569_int = 0; var_3570_int = 0; var_3571_int = 0; var_3572_int = 0; var_3573_int = 0; var_3574_int = 0; var_3575_int = 0; // 0xf0d PushV
	var_3576_bool = 0; // 0xf0e PushV
	var_3576_bool = 0; // 0xf0f MovB
	var_3577_int = 8; // 0xf10 PushI
	var_3578_bool = var_3567_int > var_3577_int; // 0xf11 GT
	if(var_3578_bool == 0) goto Label_3863; // 0xf12 JumpB
	var_3579_int = 21; // 0xf13 PushI
	var_3580_bool = var_3567_int < var_3579_int; // 0xf14 LT
	if(var_3580_bool == 0) goto Label_3863; // 0xf15 JumpB
	var_3576_bool = 1; // 0xf16 MovB
	
Label_3863:
	if(var_3576_bool == 0) goto Label_3940; // 0xf17 JumpB
	var_3581_int = 0; var_3582_string = ""; var_3583_string = ""; var_3584_int = 0; // 0xf18 PushV
	var_3581_int = var_3565_int; // 0xf19 Mov
	var_3582_string = "pers_rat"; // 0xf1a MovS
	var_3583_string = "rat.xml"; // 0xf1b MovS
	var_3584_int = 2; // 0xf1c MovI
	func_509(var_3581_int, var_3582_string, var_3583_string, var_3584_int); // 0xf1d NEW_2
	var_3585_int = 0; var_3586_string = ""; var_3587_string = ""; var_3588_int = 0; // 0xf1f PushV
	var_3585_int = var_3565_int; // 0xf20 Mov
	var_3586_string = "pers_alkash"; // 0xf21 MovS
	var_3587_string = "alkash.xml"; // 0xf22 MovS
	var_3588_int = 2; // 0xf23 MovI
	func_509(var_3585_int, var_3586_string, var_3587_string, var_3588_int); // 0xf24 NEW_2
	var_3589_int = 0; var_3590_string = ""; var_3591_string = ""; var_3592_int = 0; // 0xf26 PushV
	var_3589_int = var_3565_int; // 0xf27 Mov
	var_3590_string = "pers_dohodyaga"; // 0xf28 MovS
	var_3591_string = "dohodyaga.xml"; // 0xf29 MovS
	var_3592_int = 1; // 0xf2a MovI
	func_509(var_3589_int, var_3590_string, var_3591_string, var_3592_int); // 0xf2b NEW_2
	var_3593_int = 2; // 0xf2d PushI
	var_3594_float = 0; var_3595_int = 0; // 0xf2e PushV
	var_3595_int = var_3566_int; // 0xf2f Mov
	func_1171(var_3594_float, var_3595_int); // 0xf30 NEW_2
	var_3572_int = var_3593_int * var_3594_float; // 0xf32 Mult2
	var_3596_int = var_3572_int; // 0xf33 Push
	if(var_3596_int == 0) goto Label_3900; // 0xf34 JumpB
	var_3597_int = 0; var_3598_string = ""; var_3599_string = ""; var_3600_int = 0; // 0xf35 PushV
	var_3597_int = var_3565_int; // 0xf36 Mov
	var_3598_string = "pers_grabitel"; // 0xf37 MovS
	var_3599_string = "grabitel.xml"; // 0xf38 MovS
	var_3600_int = var_3572_int; // 0xf39 Mov
	func_509(var_3597_int, var_3598_string, var_3599_string, var_3600_int); // 0xf3a NEW_2
	
Label_3900:
	var_3601_int = 1; // 0xf3c PushI
	var_3602_int = var_3566_int + var_3601_int; // 0xf3d Add
	var_3603_int = 2; // 0xf3e PushI
	var_3604_bool = var_3602_int >= var_3603_int; // 0xf3f GE
	if(var_3604_bool == 0) goto Label_3924; // 0xf40 JumpB
	var_3605_int = 0; var_3606_string = ""; var_3607_string = ""; var_3608_int = 0; // 0xf41 PushV
	var_3605_int = var_3565_int; // 0xf42 Mov
	var_3606_string = "pers_patrool"; // 0xf43 MovS
	var_3607_string = "patrol.xml"; // 0xf44 MovS
	var_3608_int = 2; // 0xf45 MovI
	func_509(var_3605_int, var_3606_string, var_3607_string, var_3608_int); // 0xf46 NEW_2
	var_3609_bool = 0; var_3610_int = 0; // 0xf48 PushV
	var_3610_int = var_3566_int; // 0xf49 Mov
	func_1378(var_3609_bool, var_3610_int); // 0xf4a NEW_2
	if(var_3609_bool == 0) goto Label_3924; // 0xf4c JumpB
	var_3611_int = 0; var_3612_string = ""; var_3613_string = ""; var_3614_int = 0; // 0xf4d PushV
	var_3611_int = var_3565_int; // 0xf4e Mov
	var_3612_string = "pers_soldat_hand"; // 0xf4f MovS
	var_3613_string = "soldier_patrol.xml"; // 0xf50 MovS
	var_3614_int = 1; // 0xf51 MovI
	func_509(var_3611_int, var_3612_string, var_3613_string, var_3614_int); // 0xf52 NEW_2
	
Label_3924:
	var_3615_int = 1; // 0xf54 PushI
	var_3616_float = 0; var_3617_int = 0; // 0xf55 PushV
	var_3617_int = var_3566_int; // 0xf56 Mov
	func_1261(var_3616_float, var_3617_int); // 0xf57 NEW_2
	var_3573_int = var_3615_int * var_3616_float; // 0xf59 Mult2
	var_3618_int = var_3573_int; // 0xf5a Push
	if(var_3618_int == 0) goto Label_3939; // 0xf5b JumpB
	var_3619_int = 0; var_3620_string = ""; var_3621_string = ""; var_3622_int = 0; // 0xf5c PushV
	var_3619_int = var_3565_int; // 0xf5d Mov
	var_3620_string = "pers_bomber"; // 0xf5e MovS
	var_3621_string = "bomber.xml"; // 0xf5f MovS
	var_3622_int = var_3573_int; // 0xf60 Mov
	func_509(var_3619_int, var_3620_string, var_3621_string, var_3622_int); // 0xf61 NEW_2
	
Label_3939:
	goto Label_4015; // 0xf63 Jump
	
Label_4015:
	var_3623_bool = 0; var_3624_int = 0; var_3625_int = 0; // 0xfaf PushV
	var_3624_int = var_3566_int; // 0xfb0 Mov
	var_3625_int = var_3567_int; // 0xfb1 Mov
	func_1351(var_3623_bool, var_3624_int, var_3625_int); // 0xfb2 NEW_2
	if(var_3623_bool == 0) goto Label_4028; // 0xfb4 JumpB
	var_3626_int = 0; var_3627_string = ""; var_3628_string = ""; var_3629_int = 0; // 0xfb5 PushV
	var_3626_int = var_3565_int; // 0xfb6 Mov
	var_3627_string = "pers_soldat"; // 0xfb7 MovS
	var_3628_string = "soldier_marauder.xml"; // 0xfb8 MovS
	var_3629_int = 2; // 0xfb9 MovI
	func_509(var_3626_int, var_3627_string, var_3628_string, var_3629_int); // 0xfba NEW_2
	
Label_4028:
	var_3630_bool = 0; var_3631_int = 0; // 0xfbc PushV
	var_3631_int = var_3566_int; // 0xfbd Mov
	func_1378(var_3630_bool, var_3631_int); // 0xfbe NEW_2
	if(var_3630_bool == 0) goto Label_4040; // 0xfc0 JumpB
	var_3632_int = 0; var_3633_string = ""; var_3634_string = ""; var_3635_int = 0; // 0xfc1 PushV
	var_3632_int = var_3565_int; // 0xfc2 Mov
	var_3633_string = "pers_sanitar"; // 0xfc3 MovS
	var_3634_string = "sanitar.xml"; // 0xfc4 MovS
	var_3635_int = 1; // 0xfc5 MovI
	func_509(var_3632_int, var_3633_string, var_3634_string, var_3635_int); // 0xfc6 NEW_2
	
Label_4040:
	return 8; // 0xfc8 Return
	
Label_3940:
	var_3636_int = 0; var_3637_string = ""; var_3638_string = ""; var_3639_int = 0; // 0xf64 PushV
	var_3636_int = var_3565_int; // 0xf65 Mov
	var_3637_string = "pers_rat"; // 0xf66 MovS
	var_3638_string = "rat.xml"; // 0xf67 MovS
	var_3639_int = 4; // 0xf68 MovI
	func_509(var_3636_int, var_3637_string, var_3638_string, var_3639_int); // 0xf69 NEW_2
	var_3640_int = 0; var_3641_string = ""; var_3642_string = ""; var_3643_int = 0; // 0xf6b PushV
	var_3640_int = var_3565_int; // 0xf6c Mov
	var_3641_string = "pers_alkash"; // 0xf6d MovS
	var_3642_string = "alkash.xml"; // 0xf6e MovS
	var_3643_int = 1; // 0xf6f MovI
	func_509(var_3640_int, var_3641_string, var_3642_string, var_3643_int); // 0xf70 NEW_2
	var_3644_int = 0; var_3645_string = ""; var_3646_string = ""; var_3647_int = 0; // 0xf72 PushV
	var_3644_int = var_3565_int; // 0xf73 Mov
	var_3645_string = "pers_dohodyaga"; // 0xf74 MovS
	var_3646_string = "dohodyaga.xml"; // 0xf75 MovS
	var_3647_int = 1; // 0xf76 MovI
	func_509(var_3644_int, var_3645_string, var_3646_string, var_3647_int); // 0xf77 NEW_2
	var_3648_int = 3; // 0xf79 PushI
	var_3649_float = 0; var_3650_int = 0; // 0xf7a PushV
	var_3650_int = var_3566_int; // 0xf7b Mov
	func_1171(var_3649_float, var_3650_int); // 0xf7c NEW_2
	var_3574_int = var_3648_int * var_3649_float; // 0xf7e Mult2
	var_3651_int = var_3574_int; // 0xf7f Push
	if(var_3651_int == 0) goto Label_3976; // 0xf80 JumpB
	var_3652_int = 0; var_3653_string = ""; var_3654_string = ""; var_3655_int = 0; // 0xf81 PushV
	var_3652_int = var_3565_int; // 0xf82 Mov
	var_3653_string = "pers_grabitel"; // 0xf83 MovS
	var_3654_string = "grabitel.xml"; // 0xf84 MovS
	var_3655_int = var_3574_int; // 0xf85 Mov
	func_509(var_3652_int, var_3653_string, var_3654_string, var_3655_int); // 0xf86 NEW_2
	
Label_3976:
	var_3656_int = 1; // 0xf88 PushI
	var_3657_int = var_3566_int + var_3656_int; // 0xf89 Add
	var_3658_int = 2; // 0xf8a PushI
	var_3659_bool = var_3657_int >= var_3658_int; // 0xf8b GE
	if(var_3659_bool == 0) goto Label_4000; // 0xf8c JumpB
	var_3660_int = 0; var_3661_string = ""; var_3662_string = ""; var_3663_int = 0; // 0xf8d PushV
	var_3660_int = var_3565_int; // 0xf8e Mov
	var_3661_string = "pers_patrool"; // 0xf8f MovS
	var_3662_string = "patrol.xml"; // 0xf90 MovS
	var_3663_int = 1; // 0xf91 MovI
	func_509(var_3660_int, var_3661_string, var_3662_string, var_3663_int); // 0xf92 NEW_2
	var_3664_bool = 0; var_3665_int = 0; // 0xf94 PushV
	var_3665_int = var_3566_int; // 0xf95 Mov
	func_1378(var_3664_bool, var_3665_int); // 0xf96 NEW_2
	if(var_3664_bool == 0) goto Label_4000; // 0xf98 JumpB
	var_3666_int = 0; var_3667_string = ""; var_3668_string = ""; var_3669_int = 0; // 0xf99 PushV
	var_3666_int = var_3565_int; // 0xf9a Mov
	var_3667_string = "pers_soldat_hand"; // 0xf9b MovS
	var_3668_string = "soldier_patrol.xml"; // 0xf9c MovS
	var_3669_int = 1; // 0xf9d MovI
	func_509(var_3666_int, var_3667_string, var_3668_string, var_3669_int); // 0xf9e NEW_2
	
Label_4000:
	var_3670_int = 1; // 0xfa0 PushI
	var_3671_float = 0; var_3672_int = 0; // 0xfa1 PushV
	var_3672_int = var_3566_int; // 0xfa2 Mov
	func_1261(var_3671_float, var_3672_int); // 0xfa3 NEW_2
	var_3575_int = var_3670_int * var_3671_float; // 0xfa5 Mult2
	var_3673_int = var_3575_int; // 0xfa6 Push
	if(var_3673_int == 0) goto Label_4015; // 0xfa7 JumpB
	var_3674_int = 0; var_3675_string = ""; var_3676_string = ""; var_3677_int = 0; // 0xfa8 PushV
	var_3674_int = var_3565_int; // 0xfa9 Mov
	var_3675_string = "pers_bomber"; // 0xfaa MovS
	var_3676_string = "bomber.xml"; // 0xfab MovS
	var_3677_int = var_3575_int; // 0xfac Mov
	func_509(var_3674_int, var_3675_string, var_3676_string, var_3677_int); // 0xfad NEW_2
}


func_785(var_738_int, var_739_bool)
{
	var_740_object = Obj(); var_741_int = 0; var_742_object = Obj(); var_743_int = 0; // 0x311 PushV
	GetMainOutdoorScene(var_742_object); // 0x312 Func
	var_744_bool = var_742_object == 0; // 0x314 NullEq
	if(var_744_bool == 0) goto Label_794; // 0x315 JumpB
	var_745_string = "City manager: Can't find main outdoor scene"; // 0x316 PushS
	Trace(var_745_string); // 0x317 Func
	return 4; // 0x319 Return
	
Label_794:
	var_746_int = 1; // 0x31a PushI
	var_743_int = var_738_int + var_746_int; // 0x31b Add2
	var_747_int = 100; // 0x31c PushI
	var_748_bool = 1; // 0x31d PushB
	EnableSubsets(var_743_int, var_747_int, var_739_bool, var_748_bool); // 0x31e ObjFunc
	return 4; // 0x320 Return
}


func_12051(var_4952_bool)
{
	var_4955_int = 0; var_4956_string = ""; // 0x2f14 PushV
	var_4956_string = "d9q03"; // 0x2f15 MovS
	func_138(var_4955_int, var_4956_string); // 0x2f16 NEW_2
	var_4957_int = 1000; // 0x2f18 PushI
	var_4958_bool = var_4955_int == var_4957_int; // 0x2f19 Eq
	if(var_4958_bool == 0) goto Label_12061; // 0x2f1a JumpB
	var_4952_bool = 1; // 0x2f1b MovB
	return 0; // 0x2f1c Return
	
Label_12061:
	var_4952_bool = 0; // 0x2f1d MovB
	return 0; // 0x2f1e Return
}


func_10003(var_5430_int, var_5431_float)
{
	var_5432_int = 0; var_5433_int = 0; var_5434_int = 0; var_5435_float = 0; // 0x2714 PushV
	var_5433_int = 515493; // 0x2715 MovI
	var_5434_int = 515492; // 0x2716 MovI
	var_5435_float = var_5431_float; // 0x2717 Mov
	func_12495(var_5432_int, var_5433_int, var_5434_int, var_5435_float); // 0x2718 NEW_2
	var_5430_int = var_5432_int; // 0x2719 Mov
	return 0; // 0x271b Return
}


func_6936(var_1737_int, var_1738_int, var_1739_object, var_1740_object, var_1741_object, var_1742_object)
{
	var_1743_int = 0; // 0x1b19 PushI
	var_1744_bool = var_1738_int == var_1743_int; // 0x1b1a Eq
	if(var_1744_bool == 0) goto Label_6976; // 0x1b1b JumpB
	var_1745_int = 0; var_1746_bool = 0; // 0x1b1c PushV
	var_1745_int = 13; // 0x1b1d MovI
	var_1746_bool = 0; // 0x1b1e MovB
	func_802(var_1745_int, var_1746_bool); // 0x1b1f NEW_2
	var_1747_int = 0; var_1748_bool = 0; var_1749_int = 0; // 0x1b21 PushV
	var_1747_int = 13; // 0x1b22 MovI
	var_1748_bool = 0; // 0x1b23 MovB
	var_1749_int = 1; // 0x1b24 MovI
	func_819(var_1747_int, var_1748_bool, var_1749_int); // 0x1b25 NEW_2
	var_1750_int = 0; var_1751_int = 0; var_1752_object = Obj(); var_1753_object = Obj(); var_1754_object = Obj(); // 0x1b27 PushV
	var_1750_int = 13; // 0x1b28 MovI
	var_1751_int = var_1737_int; // 0x1b29 Mov
	var_1752_object = var_1739_object; // 0x1b2a Mov
	var_1753_object = var_1740_object; // 0x1b2b Mov
	var_1754_object = var_1741_object; // 0x1b2c Mov
	func_628(var_1751_int, var_1752_object, var_1753_object, var_1754_object); // 0x1b2d NEW_2
	var_1755_object = Obj(); var_1756_int = 0; // 0x1b2f PushV
	var_1755_object = var_1742_object; // 0x1b30 Mov
	var_1756_int = 0; // 0x1b31 MovI
	func_311(var_1756_int); // 0x1b32 NEW_2
	var_1757_int = 0; var_1758_bool = 0; var_1759_int = 0; // 0x1b34 PushV
	var_1757_int = 13; // 0x1b35 MovI
	var_1758_bool = 0; // 0x1b36 MovB
	var_1759_int = 4; // 0x1b37 MovI
	func_876(var_1757_int, var_1758_bool, var_1759_int); // 0x1b38 NEW_2
	var_1760_int = 0; var_1761_bool = 0; var_1762_int = 0; // 0x1b3a PushV
	var_1760_int = 13; // 0x1b3b MovI
	var_1761_bool = 0; // 0x1b3c MovB
	var_1762_int = 4; // 0x1b3d MovI
	func_938(var_1760_int, var_1761_bool, var_1762_int); // 0x1b3e NEW_2
	
Label_6976:
	var_1763_int = 0; var_1764_int = 0; // 0x1b40 PushV
	var_1763_int = 13; // 0x1b41 MovI
	var_1764_int = var_1738_int; // 0x1b42 Mov
	func_1056(var_1763_int, var_1764_int); // 0x1b43 NEW_2
	var_1765_int = 0; var_1766_int = 0; var_1767_int = 0; // 0x1b45 PushV
	var_1765_int = 13; // 0x1b46 MovI
	var_1766_int = var_1737_int; // 0x1b47 Mov
	var_1767_int = var_1738_int; // 0x1b48 Mov
	func_1630(var_1765_int, var_1766_int, var_1767_int); // 0x1b49 NEW_2
	return 0; // 0x1b4b Return
}


func_5912(var_1572_int, var_1573_int, var_1574_object, var_1575_object, var_1576_object, var_1577_object)
{
	var_1578_int = 0; // 0x1719 PushI
	var_1579_bool = var_1573_int == var_1578_int; // 0x171a Eq
	if(var_1579_bool == 0) goto Label_5952; // 0x171b JumpB
	var_1580_int = 0; var_1581_bool = 0; // 0x171c PushV
	var_1580_int = 8; // 0x171d MovI
	var_1581_bool = 0; // 0x171e MovB
	func_802(var_1580_int, var_1581_bool); // 0x171f NEW_2
	var_1582_int = 0; var_1583_bool = 0; var_1584_int = 0; // 0x1721 PushV
	var_1582_int = 8; // 0x1722 MovI
	var_1583_bool = 0; // 0x1723 MovB
	var_1584_int = 1; // 0x1724 MovI
	func_819(var_1582_int, var_1583_bool, var_1584_int); // 0x1725 NEW_2
	var_1585_int = 0; var_1586_int = 0; var_1587_object = Obj(); var_1588_object = Obj(); var_1589_object = Obj(); // 0x1727 PushV
	var_1585_int = 8; // 0x1728 MovI
	var_1586_int = var_1572_int; // 0x1729 Mov
	var_1587_object = var_1574_object; // 0x172a Mov
	var_1588_object = var_1575_object; // 0x172b Mov
	var_1589_object = var_1576_object; // 0x172c Mov
	func_628(var_1586_int, var_1587_object, var_1588_object, var_1589_object); // 0x172d NEW_2
	var_1590_object = Obj(); var_1591_int = 0; // 0x172f PushV
	var_1590_object = var_1577_object; // 0x1730 Mov
	var_1591_int = 0; // 0x1731 MovI
	func_311(var_1591_int); // 0x1732 NEW_2
	var_1592_int = 0; var_1593_bool = 0; var_1594_int = 0; // 0x1734 PushV
	var_1592_int = 8; // 0x1735 MovI
	var_1593_bool = 0; // 0x1736 MovB
	var_1594_int = 4; // 0x1737 MovI
	func_876(var_1592_int, var_1593_bool, var_1594_int); // 0x1738 NEW_2
	var_1595_int = 0; var_1596_bool = 0; var_1597_int = 0; // 0x173a PushV
	var_1595_int = 8; // 0x173b MovI
	var_1596_bool = 0; // 0x173c MovB
	var_1597_int = 4; // 0x173d MovI
	func_938(var_1595_int, var_1596_bool, var_1597_int); // 0x173e NEW_2
	
Label_5952:
	var_1598_int = 0; var_1599_int = 0; // 0x1740 PushV
	var_1598_int = 8; // 0x1741 MovI
	var_1599_int = var_1573_int; // 0x1742 Mov
	func_989(var_1598_int, var_1599_int); // 0x1743 NEW_2
	var_1600_int = 0; var_1601_int = 0; var_1602_int = 0; // 0x1745 PushV
	var_1600_int = 8; // 0x1746 MovI
	var_1601_int = var_1572_int; // 0x1747 Mov
	var_1602_int = var_1573_int; // 0x1748 Mov
	func_1630(var_1600_int, var_1601_int, var_1602_int); // 0x1749 NEW_2
	return 0; // 0x174b Return
}


func_10012(var_5034_int, var_5035_float)
{
	var_5036_int = 0; var_5037_int = 0; var_5038_int = 0; var_5039_float = 0; // 0x271d PushV
	var_5037_int = 535696; // 0x271e MovI
	var_5038_int = 535695; // 0x271f MovI
	var_5039_float = var_5035_float; // 0x2720 Mov
	func_12495(var_5036_int, var_5037_int, var_5038_int, var_5039_float); // 0x2721 NEW_2
	var_5034_int = var_5036_int; // 0x2722 Mov
	return 0; // 0x2724 Return
}


func_12063(var_4724_bool)
{
	var_4727_int = 0; var_4728_string = ""; // 0x2f20 PushV
	var_4728_string = "d10KaterinaVisit"; // 0x2f21 MovS
	func_138(var_4727_int, var_4728_string); // 0x2f22 NEW_2
	var_4729_int = 0; // 0x2f24 PushI
	var_4730_bool = var_4727_int != var_4729_int; // 0x2f25 Neq
	if(var_4730_bool == 0) goto Label_12073; // 0x2f26 JumpB
	var_4724_bool = 1; // 0x2f27 MovB
	return 0; // 0x2f28 Return
	
Label_12073:
	var_4724_bool = 0; // 0x2f29 MovB
	return 0; // 0x2f2a Return
}


func_802(var_453_int, var_454_bool)
{
	var_455_object = Obj(); var_456_int = 0; var_457_object = Obj(); var_458_int = 0; // 0x322 PushV
	GetMainOutdoorScene(var_457_object); // 0x323 Func
	var_459_bool = var_457_object == 0; // 0x325 NullEq
	if(var_459_bool == 0) goto Label_811; // 0x326 JumpB
	var_460_string = "City manager: Can't find main outdoor scene"; // 0x327 PushS
	Trace(var_460_string); // 0x328 Func
	return 4; // 0x32a Return
	
Label_811:
	var_461_int = 1; // 0x32b PushI
	var_458_int = var_453_int + var_461_int; // 0x32c Add2
	var_462_int = 200; // 0x32d PushI
	var_463_bool = 0; // 0x32e PushB
	EnableSubsets(var_458_int, var_462_int, var_454_bool, var_463_bool); // 0x32f ObjFunc
	return 4; // 0x331 Return
}


func_4900(var_3537_int, var_3538_int, var_3539_object, var_3540_object, var_3541_object, var_3542_object)
{
	var_3543_int = 0; // 0x1325 PushI
	var_3544_bool = var_3538_int == var_3543_int; // 0x1326 Eq
	if(var_3544_bool == 0) goto Label_4940; // 0x1327 JumpB
	var_3545_int = 0; var_3546_bool = 0; // 0x1328 PushV
	var_3545_int = 2; // 0x1329 MovI
	var_3546_bool = 0; // 0x132a MovB
	func_802(var_3545_int, var_3546_bool); // 0x132b NEW_2
	var_3547_int = 0; var_3548_bool = 0; var_3549_int = 0; // 0x132d PushV
	var_3547_int = 2; // 0x132e MovI
	var_3548_bool = 0; // 0x132f MovB
	var_3549_int = 1; // 0x1330 MovI
	func_819(var_3547_int, var_3548_bool, var_3549_int); // 0x1331 NEW_2
	var_3550_int = 0; var_3551_int = 0; var_3552_object = Obj(); var_3553_object = Obj(); var_3554_object = Obj(); // 0x1333 PushV
	var_3550_int = 2; // 0x1334 MovI
	var_3551_int = var_3537_int; // 0x1335 Mov
	var_3552_object = var_3539_object; // 0x1336 Mov
	var_3553_object = var_3540_object; // 0x1337 Mov
	var_3554_object = var_3541_object; // 0x1338 Mov
	func_726(var_3550_int, var_3551_int, var_3552_object, var_3553_object, var_3554_object); // 0x1339 NEW_2
	var_3555_object = Obj(); var_3556_int = 0; // 0x133b PushV
	var_3555_object = var_3542_object; // 0x133c Mov
	var_3556_int = 2; // 0x133d MovI
	func_311(var_3556_int); // 0x133e NEW_2
	var_3557_int = 0; var_3558_bool = 0; var_3559_int = 0; // 0x1340 PushV
	var_3557_int = 2; // 0x1341 MovI
	var_3558_bool = 0; // 0x1342 MovB
	var_3559_int = 5; // 0x1343 MovI
	func_876(var_3557_int, var_3558_bool, var_3559_int); // 0x1344 NEW_2
	var_3560_int = 0; var_3561_bool = 0; var_3562_int = 0; // 0x1346 PushV
	var_3560_int = 2; // 0x1347 MovI
	var_3561_bool = 1; // 0x1348 MovB
	var_3562_int = 5; // 0x1349 MovI
	func_938(var_3560_int, var_3561_bool, var_3562_int); // 0x134a NEW_2
	
Label_4940:
	var_3563_int = 0; var_3564_bool = 0; // 0x134c PushV
	var_3563_int = 2; // 0x134d MovI
	var_3564_bool = 0; // 0x134e MovB
	func_785(var_3563_int, var_3564_bool); // 0x134f NEW_2
	var_3565_int = 0; var_3566_int = 0; var_3567_int = 0; // 0x1351 PushV
	var_3565_int = 2; // 0x1352 MovI
	var_3566_int = var_3537_int; // 0x1353 Mov
	var_3567_int = var_3538_int; // 0x1354 Mov
	func_3853(var_3565_int, var_3566_int, var_3567_int); // 0x1355 NEW_2
	return 0; // 0x1357 Return
}


func_10021(var_5004_int, var_5005_float)
{
	var_5006_int = 0; var_5007_int = 0; var_5008_int = 0; var_5009_float = 0; // 0x2726 PushV
	var_5007_int = 535694; // 0x2727 MovI
	var_5008_int = 535693; // 0x2728 MovI
	var_5009_float = var_5005_float; // 0x2729 Mov
	func_12495(var_5006_int, var_5007_int, var_5008_int, var_5009_float); // 0x272a NEW_2
	var_5004_int = var_5006_int; // 0x272b Mov
	return 0; // 0x272d Return
}


func_12075(var_5058_bool)
{
	var_5061_int = 0; var_5062_string = ""; // 0x2f2c PushV
	var_5062_string = "d10MarkVisit"; // 0x2f2d MovS
	func_138(var_5061_int, var_5062_string); // 0x2f2e NEW_2
	var_5063_int = 0; // 0x2f30 PushI
	var_5064_bool = var_5061_int != var_5063_int; // 0x2f31 Neq
	if(var_5064_bool == 0) goto Label_12085; // 0x2f32 JumpB
	var_5058_bool = 1; // 0x2f33 MovB
	return 0; // 0x2f34 Return
	
Label_12085:
	var_5058_bool = 0; // 0x2f35 MovB
	return 0; // 0x2f36 Return
}


func_10030(var_5473_int, var_5474_float)
{
	var_5475_int = 0; var_5476_int = 0; var_5477_int = 0; var_5478_float = 0; // 0x272f PushV
	var_5476_int = 530574; // 0x2730 MovI
	var_5477_int = 530573; // 0x2731 MovI
	var_5478_float = var_5474_float; // 0x2732 Mov
	func_12495(var_5475_int, var_5476_int, var_5477_int, var_5478_float); // 0x2733 NEW_2
	var_5473_int = var_5475_int; // 0x2734 Mov
	return 0; // 0x2736 Return
}


func_819(var_529_int, var_530_bool, var_531_int)
{
	var_532_string = ""; var_533_object = Obj(); var_534_int = 0; var_535_string = ""; var_536_object = Obj(); var_537_int = 0; var_538_object = Obj(); var_539_string = ""; var_540_object = Obj(); var_541_int = 0; var_542_string = ""; var_543_object = Obj(); var_544_int = 0; var_545_object = Obj(); // 0x333 PushV
	var_546_string = "street_rags"; // 0x334 PushS
	var_547_int = 1; // 0x335 PushI
	var_548_int = var_529_int + var_547_int; // 0x336 Add
	var_539_string = var_546_string + var_548_int; // 0x337 Add2
	var_549_bool = var_530_bool; // 0x338 Push
	if(var_549_bool == 0) goto Label_859; // 0x339 JumpB
	GetMainOutdoorScene(var_540_object); // 0x33a Func
	var_550_bool = var_540_object == 0; // 0x33c NullEq
	if(var_550_bool == 0) goto Label_834; // 0x33d JumpB
	var_551_string = "City manager: Can't find main outdoor scene"; // 0x33e PushS
	Trace(var_551_string); // 0x33f Func
	return 14; // 0x341 Return
	
Label_834:
	var_541_int = 1; // 0x342 MovI
	
Label_835:
	var_552_bool = var_541_int <= var_531_int; // 0x343 LE
	if(var_552_bool == 0) goto Label_857; // 0x344 JumpB
	var_553_string = "_"; // 0x345 PushS
	var_554_int = var_539_string + var_553_string; // 0x346 Add
	var_542_string = var_554_int + var_541_int; // 0x347 Add2
	FindActor(var_543_object, var_542_string); // 0x348 Func
	var_555_bool = var_543_object == 0; // 0x34a Not
	if(var_555_bool == 0) goto Label_850; // 0x34b JumpB
	var_556_cvector = CVector(0.0, 0.0, 0.0); // 0x34c PushVec
	var_557_cvector = CVector(0.0, 0.0, 1.0); // 0x34d PushVec
	var_558_string = "do_invis.xml"; // 0x34e PushS
	AddActor(var_543_object, var_542_string, var_540_object, var_556_cvector, var_557_cvector, var_558_string); // 0x34f Func
	goto Label_853; // 0x351 Jump
	
Label_853:
	var_543_object = 0; // 0x355 SetNull
	var_559_int = 1; // 0x356 PushI
	var_541_int = var_541_int + var_559_int; // 0x357 Add2
	goto Label_835; // 0x358 Jump
	
Label_850:
	var_560_bool = 0; // 0x352 PushB
	RemoveOnUnload(var_560_bool); // 0x353 ObjFunc
	
Label_857:
	var_540_object = 0; // 0x359 SetNull
	goto Label_875; // 0x35a Jump
	
Label_875:
	return 14; // 0x36b Return
	
Label_859:
	var_544_int = 1; // 0x35b MovI
	
Label_860:
	var_561_bool = var_544_int <= var_531_int; // 0x35c LE
	if(var_561_bool == 0) goto Label_875; // 0x35d JumpB
	var_562_string = "_"; // 0x35e PushS
	var_563_int = var_539_string + var_562_string; // 0x35f Add
	var_564_int = var_563_int + var_544_int; // 0x360 Add
	FindActor(var_545_object, var_564_int); // 0x361 Func
	var_565_object = var_545_object; // 0x363 Push
	if(var_565_object == 0) goto Label_871; // 0x364 JumpB
	RemoveOnUnload(); // 0x365 ObjFunc
	
Label_871:
	var_545_object = 0; // 0x367 SetNull
	var_566_int = 1; // 0x368 PushI
	var_544_int = var_544_int + var_566_int; // 0x369 Add2
	goto Label_860; // 0x36a Jump
}


func_12087(var_5026_bool)
{
	var_5029_int = 0; var_5030_string = ""; // 0x2f38 PushV
	var_5030_string = "d12q01BurahVisit"; // 0x2f39 MovS
	func_138(var_5029_int, var_5030_string); // 0x2f3a NEW_2
	var_5031_int = 0; // 0x2f3c PushI
	var_5032_bool = var_5029_int != var_5031_int; // 0x2f3d Neq
	if(var_5032_bool == 0) goto Label_12097; // 0x2f3e JumpB
	var_5026_bool = 1; // 0x2f3f MovB
	return 0; // 0x2f40 Return
	
Label_12097:
	var_5026_bool = 0; // 0x2f41 MovB
	return 0; // 0x2f42 Return
}


func_10039(var_6153_int, var_6154_float)
{
	var_6155_int = 0; var_6156_int = 0; var_6157_int = 0; var_6158_float = 0; // 0x2738 PushV
	var_6156_int = 501160; // 0x2739 MovI
	var_6157_int = 501159; // 0x273a MovI
	var_6158_float = var_6154_float; // 0x273b Mov
	func_12495(var_6155_int, var_6156_int, var_6157_int, var_6158_float); // 0x273c NEW_2
	var_6153_int = var_6155_int; // 0x273d Mov
	return 0; // 0x273f Return
}


func_10048(var_5863_int, var_5864_float)
{
	var_5865_int = 0; var_5866_int = 0; var_5867_int = 0; var_5868_float = 0; // 0x2741 PushV
	var_5866_int = 501158; // 0x2742 MovI
	var_5867_int = 501157; // 0x2743 MovI
	var_5868_float = var_5864_float; // 0x2744 Mov
	func_12495(var_5865_int, var_5866_int, var_5867_int, var_5868_float); // 0x2745 NEW_2
	var_5863_int = var_5865_int; // 0x2746 Mov
	return 0; // 0x2748 Return
}


func_12099(var_5116_bool)
{
	var_5119_int = 0; var_5120_string = ""; // 0x2f44 PushV
	var_5120_string = "d4ViktorVisit"; // 0x2f45 MovS
	func_138(var_5119_int, var_5120_string); // 0x2f46 NEW_2
	var_5121_int = 0; // 0x2f48 PushI
	var_5122_bool = var_5119_int != var_5121_int; // 0x2f49 Neq
	if(var_5122_bool == 0) goto Label_12109; // 0x2f4a JumpB
	var_5116_bool = 1; // 0x2f4b MovB
	return 0; // 0x2f4c Return
	
Label_12109:
	var_5116_bool = 0; // 0x2f4d MovB
	return 0; // 0x2f4e Return
}


func_10057(var_6089_int, var_6090_float)
{
	var_6091_int = 0; var_6092_int = 0; var_6093_int = 0; var_6094_float = 0; // 0x274a PushV
	var_6092_int = 501154; // 0x274b MovI
	var_6093_int = 501153; // 0x274c MovI
	var_6094_float = var_6090_float; // 0x274d Mov
	func_12495(var_6091_int, var_6092_int, var_6093_int, var_6094_float); // 0x274e NEW_2
	var_6089_int = var_6091_int; // 0x274f Mov
	return 0; // 0x2751 Return
}


func_6988(var_2967_int, var_2968_int, var_2969_object, var_2970_object, var_2971_object, var_2972_object)
{
	var_2973_int = 0; // 0x1b4d PushI
	var_2974_bool = var_2968_int == var_2973_int; // 0x1b4e Eq
	if(var_2974_bool == 0) goto Label_7028; // 0x1b4f JumpB
	var_2975_int = 0; var_2976_bool = 0; // 0x1b50 PushV
	var_2975_int = 13; // 0x1b51 MovI
	var_2976_bool = 1; // 0x1b52 MovB
	func_802(var_2975_int, var_2976_bool); // 0x1b53 NEW_2
	var_2977_int = 0; var_2978_bool = 0; var_2979_int = 0; // 0x1b55 PushV
	var_2977_int = 13; // 0x1b56 MovI
	var_2978_bool = 1; // 0x1b57 MovB
	var_2979_int = 1; // 0x1b58 MovI
	func_819(var_2977_int, var_2978_bool, var_2979_int); // 0x1b59 NEW_2
	var_2980_int = 0; var_2981_int = 0; var_2982_object = Obj(); var_2983_object = Obj(); var_2984_object = Obj(); // 0x1b5b PushV
	var_2980_int = 13; // 0x1b5c MovI
	var_2981_int = var_2967_int; // 0x1b5d Mov
	var_2982_object = var_2969_object; // 0x1b5e Mov
	var_2983_object = var_2970_object; // 0x1b5f Mov
	var_2984_object = var_2971_object; // 0x1b60 Mov
	func_647(var_2980_int, var_2981_int, var_2982_object, var_2983_object, var_2984_object); // 0x1b61 NEW_2
	var_2985_object = Obj(); var_2986_int = 0; // 0x1b63 PushV
	var_2985_object = var_2972_object; // 0x1b64 Mov
	var_2986_int = 1; // 0x1b65 MovI
	func_311(var_2986_int); // 0x1b66 NEW_2
	var_2987_int = 0; var_2988_bool = 0; var_2989_int = 0; // 0x1b68 PushV
	var_2987_int = 13; // 0x1b69 MovI
	var_2988_bool = 1; // 0x1b6a MovB
	var_2989_int = 4; // 0x1b6b MovI
	func_876(var_2987_int, var_2988_bool, var_2989_int); // 0x1b6c NEW_2
	var_2990_int = 0; var_2991_bool = 0; var_2992_int = 0; // 0x1b6e PushV
	var_2990_int = 13; // 0x1b6f MovI
	var_2991_bool = 0; // 0x1b70 MovB
	var_2992_int = 4; // 0x1b71 MovI
	func_938(var_2990_int, var_2991_bool, var_2992_int); // 0x1b72 NEW_2
	
Label_7028:
	var_2993_int = 0; var_2994_bool = 0; // 0x1b74 PushV
	var_2993_int = 13; // 0x1b75 MovI
	var_2994_bool = 0; // 0x1b76 MovB
	func_785(var_2993_int, var_2994_bool); // 0x1b77 NEW_2
	var_2995_int = 0; var_2996_int = 0; var_2997_int = 0; // 0x1b79 PushV
	var_2995_int = 13; // 0x1b7a MovI
	var_2996_int = var_2967_int; // 0x1b7b Mov
	var_2997_int = var_2968_int; // 0x1b7c Mov
	func_2770(var_2995_int, var_2996_int, var_2997_int); // 0x1b7d NEW_2
	return 0; // 0x1b7f Return
}


func_9037(var_465_int, var_466_int, var_467_int, var_468_int)
{
	var_471_int = 0; var_472_object = Obj(); var_473_object = Obj(); var_474_object = Obj(); var_475_object = Obj(); var_476_int = 0; var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj(); var_480_object = Obj(); // 0x234d PushV
	var_481_string = "City update"; // 0x234e PushS
	Trace(var_481_string); // 0x234f Func
	var_482_bool = 0; // 0x2351 PushV
	var_482_bool = 0; // 0x2352 MovB
	var_483_bool = var_465_int == var_467_int; // 0x2353 Eq
	if(var_483_bool == 0) goto Label_9048; // 0x2354 JumpB
	var_484_bool = var_466_int == var_468_int; // 0x2355 Eq
	if(var_484_bool == 0) goto Label_9048; // 0x2356 JumpB
	var_482_bool = 1; // 0x2357 MovB
	
Label_9048:
	if(var_482_bool == 0) goto Label_9052; // 0x2358 JumpB
	var_485_string = "kolokol"; // 0x2359 PushS
	PlaySound(var_485_string); // 0x235a Func
	
Label_9052:
	var_476_int = 0; // 0x235c MovI
	
Label_9053:
	var_486_int = 16; // 0x235d PushI
	var_487_bool = var_476_int < var_486_int; // 0x235e LT
	if(var_487_bool == 0) goto Label_9093; // 0x235f JumpB
	var_488_int = 0; // 0x2360 PushV
	var_488_int = var_476_int; // 0x2361 Mov
	func_496(var_488_int); // 0x2362 NEW_2
	var_493_bool = 0; var_494_int = 0; // 0x2364 PushV
	var_494_int = var_476_int; // 0x2365 Mov
	func_406(var_493_bool, var_494_int); // 0x2366 NEW_2
	if(var_493_bool == 0) goto Label_9072; // 0x2368 JumpB
	var_502_int = 0; var_503_int = 0; var_504_int = 0; // 0x2369 PushV
	var_502_int = var_476_int; // 0x236a Mov
	var_503_int = var_465_int; // 0x236b Mov
	var_504_int = var_466_int; // 0x236c Mov
	func_9157(var_502_int, var_503_int, var_504_int); // 0x236d NEW_2
	goto Label_9090; // 0x236f Jump
	
Label_9090:
	var_1979_int = 1; // 0x2382 PushI
	var_476_int = var_476_int + var_1979_int; // 0x2383 Add2
	goto Label_9053; // 0x2384 Jump
	
Label_9072:
	var_1980_bool = 0; var_1981_int = 0; // 0x2370 PushV
	var_1981_int = var_476_int; // 0x2371 Mov
	func_436(var_1980_bool, var_1981_int); // 0x2372 NEW_2
	if(var_1980_bool == 0) goto Label_9084; // 0x2374 JumpB
	var_1989_int = 0; var_1990_int = 0; var_1991_int = 0; // 0x2375 PushV
	var_1989_int = var_476_int; // 0x2376 Mov
	var_1990_int = var_465_int; // 0x2377 Mov
	var_1991_int = var_466_int; // 0x2378 Mov
	func_9382(var_1989_int, var_1990_int, var_1991_int); // 0x2379 NEW_2
	goto Label_9090; // 0x237b Jump
	
Label_9084:
	var_3170_int = 0; var_3171_int = 0; var_3172_int = 0; // 0x237c PushV
	var_3170_int = var_476_int; // 0x237d Mov
	var_3171_int = var_465_int; // 0x237e Mov
	var_3172_int = var_466_int; // 0x237f Mov
	func_9607(var_3170_int, var_3171_int, var_3172_int); // 0x2380 NEW_2
	
Label_9093:
	var_4304_int = 0; // 0x2385 PushI
	var_4305_bool = var_466_int == var_4304_int; // 0x2386 Eq
	if(var_4305_bool == 0) goto Label_9129; // 0x2387 JumpB
	var_4306_int = 0; // 0x2388 PushV
	var_4306_int = var_465_int; // 0x2389 Mov
	func_14735(var_4306_int); // 0x238a NEW_2
	var_4368_bool = 0; // 0x238c PushV
	var_4368_bool = 1; // 0x238d MovB
	var_4369_int = 1; // 0x238e PushI
	var_4370_bool = var_465_int == var_4369_int; // 0x238f Eq
	if(var_4370_bool == 0) goto Label_9111; // 0x2390 JumpB
	var_4371_bool = 0; var_4372_int = 0; // 0x2391 PushV
	var_4372_int = 5; // 0x2392 MovI
	func_436(var_4371_bool, var_4372_int); // 0x2393 NEW_2
	if(var_4371_bool == 0) goto Label_9111; // 0x2395 JumpB
	var_4368_bool = 0; // 0x2396 MovB
	
Label_9111:
	if(var_4368_bool == 0) goto Label_9121; // 0x2397 JumpB
	var_4373_string = "dt_house_1_07"; // 0x2398 PushS
	FindActor(var_477_object, var_4373_string); // 0x2399 Func
	var_4374_int = 200; // 0x239b PushI
	var_4375_bool = 1; // 0x239c PushB
	EnableSubset(var_4374_int, var_4375_bool); // 0x239d ObjFunc
	var_477_object = 0; // 0x239f SetNull
	goto Label_9129; // 0x23a0 Jump
	
Label_9129:
	var_4376_int = 7; // 0x23a9 PushI
	var_4377_bool = var_466_int == var_4376_int; // 0x23aa Eq
	if(var_4377_bool == 0) goto Label_9143; // 0x23ab JumpB
	var_4378_string = "day time"; // 0x23ac PushS
	Trace(var_4378_string); // 0x23ad Func
	GetMainOutdoorScene(var_479_object); // 0x23af Func
	var_4379_int = 0; // 0x23b1 PushI
	var_4380_bool = 0; // 0x23b2 PushB
	SwitchLights(var_4379_int, var_4380_bool); // 0x23b3 ObjFunc
	var_479_object = 0; // 0x23b5 SetNull
	goto Label_9156; // 0x23b6 Jump
	
Label_9156:
	return 10; // 0x23c4 Return
	
Label_9143:
	var_4381_int = 20; // 0x23b7 PushI
	var_4382_bool = var_466_int == var_4381_int; // 0x23b8 Eq
	if(var_4382_bool == 0) goto Label_9156; // 0x23b9 JumpB
	var_4383_string = "night time"; // 0x23ba PushS
	Trace(var_4383_string); // 0x23bb Func
	GetMainOutdoorScene(var_480_object); // 0x23bd Func
	var_4384_int = 0; // 0x23bf PushI
	var_4385_bool = 1; // 0x23c0 PushB
	SwitchLights(var_4384_int, var_4385_bool); // 0x23c1 ObjFunc
	var_480_object = 0; // 0x23c3 SetNull
	
Label_9121:
	var_4386_string = "dt_house_1_07"; // 0x23a1 PushS
	FindActor(var_478_object, var_4386_string); // 0x23a2 Func
	var_4387_int = 200; // 0x23a4 PushI
	var_4388_bool = 0; // 0x23a5 PushB
	EnableSubset(var_4387_int, var_4388_bool); // 0x23a6 ObjFunc
	var_478_object = 0; // 0x23a8 SetNull
}


func_5964(var_2802_int, var_2803_int, var_2804_object, var_2805_object, var_2806_object, var_2807_object)
{
	var_2808_int = 0; // 0x174d PushI
	var_2809_bool = var_2803_int == var_2808_int; // 0x174e Eq
	if(var_2809_bool == 0) goto Label_6004; // 0x174f JumpB
	var_2810_int = 0; var_2811_bool = 0; // 0x1750 PushV
	var_2810_int = 8; // 0x1751 MovI
	var_2811_bool = 1; // 0x1752 MovB
	func_802(var_2810_int, var_2811_bool); // 0x1753 NEW_2
	var_2812_int = 0; var_2813_bool = 0; var_2814_int = 0; // 0x1755 PushV
	var_2812_int = 8; // 0x1756 MovI
	var_2813_bool = 1; // 0x1757 MovB
	var_2814_int = 1; // 0x1758 MovI
	func_819(var_2812_int, var_2813_bool, var_2814_int); // 0x1759 NEW_2
	var_2815_int = 0; var_2816_int = 0; var_2817_object = Obj(); var_2818_object = Obj(); var_2819_object = Obj(); // 0x175b PushV
	var_2815_int = 8; // 0x175c MovI
	var_2816_int = var_2802_int; // 0x175d Mov
	var_2817_object = var_2804_object; // 0x175e Mov
	var_2818_object = var_2805_object; // 0x175f Mov
	var_2819_object = var_2806_object; // 0x1760 Mov
	func_647(var_2815_int, var_2816_int, var_2817_object, var_2818_object, var_2819_object); // 0x1761 NEW_2
	var_2820_object = Obj(); var_2821_int = 0; // 0x1763 PushV
	var_2820_object = var_2807_object; // 0x1764 Mov
	var_2821_int = 1; // 0x1765 MovI
	func_311(var_2821_int); // 0x1766 NEW_2
	var_2822_int = 0; var_2823_bool = 0; var_2824_int = 0; // 0x1768 PushV
	var_2822_int = 8; // 0x1769 MovI
	var_2823_bool = 1; // 0x176a MovB
	var_2824_int = 4; // 0x176b MovI
	func_876(var_2822_int, var_2823_bool, var_2824_int); // 0x176c NEW_2
	var_2825_int = 0; var_2826_bool = 0; var_2827_int = 0; // 0x176e PushV
	var_2825_int = 8; // 0x176f MovI
	var_2826_bool = 0; // 0x1770 MovB
	var_2827_int = 4; // 0x1771 MovI
	func_938(var_2825_int, var_2826_bool, var_2827_int); // 0x1772 NEW_2
	
Label_6004:
	var_2828_int = 0; var_2829_bool = 0; // 0x1774 PushV
	var_2828_int = 8; // 0x1775 MovI
	var_2829_bool = 0; // 0x1776 MovB
	func_785(var_2828_int, var_2829_bool); // 0x1777 NEW_2
	var_2830_int = 0; var_2831_int = 0; var_2832_int = 0; // 0x1779 PushV
	var_2830_int = 8; // 0x177a MovI
	var_2831_int = var_2802_int; // 0x177b Mov
	var_2832_int = var_2803_int; // 0x177c Mov
	func_2770(var_2830_int, var_2831_int, var_2832_int); // 0x177d NEW_2
	return 0; // 0x177f Return
}


func_12111(var_4980_bool)
{
	var_4983_int = 0; var_4984_string = ""; // 0x2f50 PushV
	var_4984_string = "d8AglajaVisit"; // 0x2f51 MovS
	func_138(var_4983_int, var_4984_string); // 0x2f52 NEW_2
	var_4985_int = 0; // 0x2f54 PushI
	var_4986_bool = var_4983_int != var_4985_int; // 0x2f55 Neq
	if(var_4986_bool == 0) goto Label_12121; // 0x2f56 JumpB
	var_4980_bool = 1; // 0x2f57 MovB
	return 0; // 0x2f58 Return
	
Label_12121:
	var_4980_bool = 0; // 0x2f59 MovB
	return 0; // 0x2f5a Return
}


func_10066(var_4814_int, var_4815_float)
{
	var_4816_int = 0; var_4817_int = 0; var_4818_int = 0; var_4819_float = 0; // 0x2753 PushV
	var_4817_int = 501152; // 0x2754 MovI
	var_4818_int = 501151; // 0x2755 MovI
	var_4819_float = var_4815_float; // 0x2756 Mov
	func_12495(var_4816_int, var_4817_int, var_4818_int, var_4819_float); // 0x2757 NEW_2
	var_4814_int = var_4816_int; // 0x2758 Mov
	return 0; // 0x275a Return
}


func_4952()
{
	var_98_string = "house5_02"; // 0x1359 PushS
	add(var_98_string); // 0x135a ObjFunc
	var_99_string = "dt_house1_union2_03l"; // 0x135c PushS
	add(var_99_string); // 0x135d ObjFunc
	var_100_string = "dt_house1_union2_03r"; // 0x135f PushS
	add(var_100_string); // 0x1360 ObjFunc
	var_101_string = "dt_house1_union2_01l"; // 0x1362 PushS
	add(var_101_string); // 0x1363 ObjFunc
	var_102_string = "dt_house1_union2_01r"; // 0x1365 PushS
	add(var_102_string); // 0x1366 ObjFunc
	var_103_string = "house5_unoinl"; // 0x1368 PushS
	add(var_103_string); // 0x1369 ObjFunc
	var_104_string = "house5_unoinr"; // 0x136b PushS
	add(var_104_string); // 0x136c ObjFunc
	var_105_string = "dt_house_1_01"; // 0x136e PushS
	add(var_105_string); // 0x136f ObjFunc
	var_106_string = "house5_05"; // 0x1371 PushS
	add(var_106_string); // 0x1372 ObjFunc
	var_107_string = "house5_06"; // 0x1374 PushS
	add(var_107_string); // 0x1375 ObjFunc
	var_108_string = "dt_house_1_02"; // 0x1377 PushS
	add(var_108_string); // 0x1378 ObjFunc
	var_109_string = "house5_unoin_solid01l"; // 0x137a PushS
	add(var_109_string); // 0x137b ObjFunc
	var_110_string = "house5_unoin_solid01r"; // 0x137d PushS
	add(var_110_string); // 0x137e ObjFunc
	var_111_string = "house5_03"; // 0x1380 PushS
	add(var_111_string); // 0x1381 ObjFunc
	var_112_string = "house5_04"; // 0x1383 PushS
	add(var_112_string); // 0x1384 ObjFunc
	var_113_string = "house1_se_02l"; // 0x1386 PushS
	add(var_113_string); // 0x1387 ObjFunc
	var_114_string = "house1_se_02r"; // 0x1389 PushS
	add(var_114_string); // 0x138a ObjFunc
	var_115_string = "dt_house3_01_i2"; // 0x138c PushS
	add(var_115_string); // 0x138d ObjFunc
	var_116_string = "dt_house3_02_i2"; // 0x138f PushS
	add(var_116_string); // 0x1390 ObjFunc
	var_117_string = "dt_house3_02"; // 0x1392 PushS
	add(var_117_string); // 0x1393 ObjFunc
	var_118_string = "dt_house3_03_i2"; // 0x1395 PushS
	add(var_118_string); // 0x1396 ObjFunc
	var_119_string = "dt_house3_03"; // 0x1398 PushS
	add(var_119_string); // 0x1399 ObjFunc
	var_120_string = "dt_house3_04_i2"; // 0x139b PushS
	add(var_120_string); // 0x139c ObjFunc
	var_121_string = "house5_21"; // 0x139e PushS
	add(var_121_string); // 0x139f ObjFunc
	return 0; // 0x13a1 Return
}


func_12123(var_4944_bool)
{
	var_4947_int = 0; var_4948_string = ""; // 0x2f5c PushV
	var_4948_string = "d9AnnaVisit"; // 0x2f5d MovS
	func_138(var_4947_int, var_4948_string); // 0x2f5e NEW_2
	var_4949_int = 0; // 0x2f60 PushI
	var_4950_bool = var_4947_int != var_4949_int; // 0x2f61 Neq
	if(var_4950_bool == 0) goto Label_12133; // 0x2f62 JumpB
	var_4944_bool = 1; // 0x2f63 MovB
	return 0; // 0x2f64 Return
	
Label_12133:
	var_4944_bool = 0; // 0x2f65 MovB
	return 0; // 0x2f66 Return
}


func_10075(var_6387_int, var_6388_float)
{
	var_6389_int = 0; var_6390_int = 0; var_6391_int = 0; var_6392_float = 0; // 0x275c PushV
	var_6390_int = 501156; // 0x275d MovI
	var_6391_int = 501155; // 0x275e MovI
	var_6392_float = var_6388_float; // 0x275f Mov
	func_12495(var_6389_int, var_6390_int, var_6391_int, var_6392_float); // 0x2760 NEW_2
	var_6387_int = var_6389_int; // 0x2761 Mov
	return 0; // 0x2763 Return
}


func_10084(var_5341_int, var_5342_float)
{
	var_5343_int = 0; var_5344_int = 0; var_5345_int = 0; var_5346_float = 0; // 0x2765 PushV
	var_5344_int = 501413; // 0x2766 MovI
	var_5345_int = 501412; // 0x2767 MovI
	var_5346_float = var_5342_float; // 0x2768 Mov
	func_12495(var_5343_int, var_5344_int, var_5345_int, var_5346_float); // 0x2769 NEW_2
	var_5341_int = var_5343_int; // 0x276a Mov
	return 0; // 0x276c Return
}


func_12135(var_5132_bool)
{
	var_5135_int = 0; var_5136_string = ""; // 0x2f68 PushV
	var_5136_string = "d9LaraVisit"; // 0x2f69 MovS
	func_138(var_5135_int, var_5136_string); // 0x2f6a NEW_2
	var_5137_int = 0; // 0x2f6c PushI
	var_5138_bool = var_5135_int != var_5137_int; // 0x2f6d Neq
	if(var_5138_bool == 0) goto Label_12145; // 0x2f6e JumpB
	var_5132_bool = 1; // 0x2f6f MovB
	return 0; // 0x2f70 Return
	
Label_12145:
	var_5132_bool = 0; // 0x2f71 MovB
	return 0; // 0x2f72 Return
}


func_876(var_640_int, var_641_bool, var_642_int)
{
	var_643_string = ""; var_644_object = Obj(); var_645_int = 0; var_646_string = ""; var_647_object = Obj(); var_648_int = 0; var_649_string = ""; var_650_object = Obj(); var_651_string = ""; var_652_object = Obj(); var_653_int = 0; var_654_string = ""; var_655_object = Obj(); var_656_int = 0; var_657_string = ""; var_658_object = Obj(); // 0x36c PushV
	var_659_string = "dr_mark"; // 0x36d PushS
	var_660_int = 1; // 0x36e PushI
	var_661_int = var_640_int + var_660_int; // 0x36f Add
	var_651_string = var_659_string + var_661_int; // 0x370 Add2
	var_662_bool = var_641_bool; // 0x371 Push
	if(var_662_bool == 0) goto Label_918; // 0x372 JumpB
	GetMainOutdoorScene(var_652_object); // 0x373 Func
	var_663_bool = var_652_object == 0; // 0x375 NullEq
	if(var_663_bool == 0) goto Label_891; // 0x376 JumpB
	var_664_string = "City manager: Can't find main outdoor scene"; // 0x377 PushS
	Trace(var_664_string); // 0x378 Func
	return 16; // 0x37a Return
	
Label_891:
	var_653_int = 1; // 0x37b MovI
	
Label_892:
	var_665_bool = var_653_int <= var_642_int; // 0x37c LE
	if(var_665_bool == 0) goto Label_916; // 0x37d JumpB
	var_666_string = "_"; // 0x37e PushS
	var_667_int = var_651_string + var_666_string; // 0x37f Add
	var_654_string = var_667_int + var_653_int; // 0x380 Add2
	FindActor(var_655_object, var_654_string); // 0x381 Func
	var_668_bool = var_655_object == 0; // 0x383 Not
	if(var_668_bool == 0) goto Label_907; // 0x384 JumpB
	var_669_cvector = CVector(0.0, 0.0, 0.0); // 0x385 PushVec
	var_670_cvector = CVector(0.0, 0.0, 1.0); // 0x386 PushVec
	var_671_string = "disease_object.xml"; // 0x387 PushS
	AddActor(var_655_object, var_654_string, var_652_object, var_669_cvector, var_670_cvector, var_671_string); // 0x388 Func
	goto Label_912; // 0x38a Jump
	
Label_912:
	var_655_object = 0; // 0x390 SetNull
	var_672_int = 1; // 0x391 PushI
	var_653_int = var_653_int + var_672_int; // 0x392 Add2
	goto Label_892; // 0x393 Jump
	
Label_907:
	var_673_bool = 0; var_674_string = ""; var_675_string = ""; // 0x38b PushV
	var_674_string = var_654_string; // 0x38c Mov
	var_675_string = "restore"; // 0x38d MovS
	func_245(var_673_bool, var_674_string, var_675_string); // 0x38e NEW_2
	
Label_916:
	var_652_object = 0; // 0x394 SetNull
	goto Label_937; // 0x395 Jump
	
Label_937:
	return 16; // 0x3a9 Return
	
Label_918:
	var_656_int = 1; // 0x396 MovI
	
Label_919:
	var_679_bool = var_656_int <= var_642_int; // 0x397 LE
	if(var_679_bool == 0) goto Label_937; // 0x398 JumpB
	var_680_string = "_"; // 0x399 PushS
	var_681_int = var_651_string + var_680_string; // 0x39a Add
	var_657_string = var_681_int + var_656_int; // 0x39b Add2
	FindActor(var_658_object, var_657_string); // 0x39c Func
	var_682_object = var_658_object; // 0x39e Push
	if(var_682_object == 0) goto Label_933; // 0x39f JumpB
	var_683_bool = 0; var_684_string = ""; var_685_string = ""; // 0x3a0 PushV
	var_684_string = var_657_string; // 0x3a1 Mov
	var_685_string = "cleanup"; // 0x3a2 MovS
	func_245(var_683_bool, var_684_string, var_685_string); // 0x3a3 NEW_2
	
Label_933:
	var_658_object = 0; // 0x3a5 SetNull
	var_686_int = 1; // 0x3a6 PushI
	var_656_int = var_656_int + var_686_int; // 0x3a7 Add2
	goto Label_919; // 0x3a8 Jump
}


func_10093(var_5349_int, var_5350_float)
{
	var_5351_int = 0; var_5352_int = 0; var_5353_int = 0; var_5354_float = 0; // 0x276e PushV
	var_5352_int = 502662; // 0x276f MovI
	var_5353_int = 502661; // 0x2770 MovI
	var_5354_float = var_5350_float; // 0x2771 Mov
	func_12495(var_5351_int, var_5352_int, var_5353_int, var_5354_float); // 0x2772 NEW_2
	var_5349_int = var_5351_int; // 0x2773 Mov
	return 0; // 0x2775 Return
}


func_1903(var_1058_int, var_1059_int, var_1060_int)
{
	var_1061_int = 0; var_1062_int = 0; // 0x76f PushV
	var_1063_int = 1; // 0x770 PushI
	var_1064_int = var_1059_int + var_1063_int; // 0x771 Add
	var_1065_int = 12; // 0x772 PushI
	var_1066_bool = var_1064_int == var_1065_int; // 0x773 Eq
	if(var_1066_bool == 0) goto Label_1910; // 0x774 JumpB
	return 2; // 0x775 Return
	
Label_1910:
	var_1067_bool = 0; // 0x776 PushV
	var_1067_bool = 0; // 0x777 MovB
	var_1068_bool = 0; // 0x778 PushV
	var_1068_bool = 1; // 0x779 MovB
	var_1069_int = 7; // 0x77a PushI
	var_1070_bool = var_1060_int < var_1069_int; // 0x77b LT
	if(var_1070_bool == 0) goto Label_1921; // 0x77c JumpB
	var_1071_int = 21; // 0x77d PushI
	var_1072_bool = var_1060_int > var_1071_int; // 0x77e GT
	if(var_1072_bool == 0) goto Label_1921; // 0x77f JumpB
	var_1068_bool = 0; // 0x780 MovB
	
Label_1921:
	if(var_1068_bool == 0) goto Label_1926; // 0x781 JumpB
	var_1073_int = 0; // 0x782 PushI
	var_1074_bool = var_1059_int != var_1073_int; // 0x783 Neq
	if(var_1074_bool == 0) goto Label_1926; // 0x784 JumpB
	var_1067_bool = 1; // 0x785 MovB
	
Label_1926:
	if(var_1067_bool == 0) goto Label_1941; // 0x786 JumpB
	var_1075_float = 0; var_1076_int = 0; // 0x787 PushV
	var_1076_int = var_1059_int; // 0x788 Mov
	func_1147(var_1075_float, var_1076_int); // 0x789 NEW_2
	var_1062_int = var_1075_float; // 0x78a Mov
	var_1077_int = var_1062_int; // 0x78c Push
	if(var_1077_int == 0) goto Label_1941; // 0x78d JumpB
	var_1078_int = 0; var_1079_string = ""; var_1080_string = ""; var_1081_int = 0; // 0x78e PushV
	var_1078_int = var_1058_int; // 0x78f Mov
	var_1079_string = "pers_grabitel"; // 0x790 MovS
	var_1080_string = "grabitel.xml"; // 0x791 MovS
	var_1081_int = var_1062_int; // 0x792 Mov
	func_509(var_1078_int, var_1079_string, var_1080_string, var_1081_int); // 0x793 NEW_2
	
Label_1941:
	var_1082_bool = 0; var_1083_int = 0; var_1084_int = 0; // 0x795 PushV
	var_1083_int = var_1059_int; // 0x796 Mov
	var_1084_int = var_1060_int; // 0x797 Mov
	func_1116(var_1082_bool, var_1083_int, var_1084_int); // 0x798 NEW_2
	if(var_1082_bool == 0) goto Label_2004; // 0x79a JumpB
	var_1085_int = 0; var_1086_string = ""; var_1087_string = ""; var_1088_int = 0; // 0x79b PushV
	var_1085_int = var_1058_int; // 0x79c Mov
	var_1086_string = "pers_unosha"; // 0x79d MovS
	var_1087_string = "unosha_attacker.xml"; // 0x79e MovS
	var_1088_int = 1; // 0x79f MovI
	func_509(var_1085_int, var_1086_string, var_1087_string, var_1088_int); // 0x7a0 NEW_2
	var_1089_int = 0; var_1090_string = ""; var_1091_string = ""; var_1092_int = 0; // 0x7a2 PushV
	var_1089_int = var_1058_int; // 0x7a3 Mov
	var_1090_string = "pers_unosha"; // 0x7a4 MovS
	var_1091_string = "unosha2_attacker.xml"; // 0x7a5 MovS
	var_1092_int = 1; // 0x7a6 MovI
	func_509(var_1089_int, var_1090_string, var_1091_string, var_1092_int); // 0x7a7 NEW_2
	var_1093_int = 0; var_1094_string = ""; var_1095_string = ""; var_1096_int = 0; // 0x7a9 PushV
	var_1093_int = var_1058_int; // 0x7aa Mov
	var_1094_string = "pers_worker"; // 0x7ab MovS
	var_1095_string = "worker_attacker.xml"; // 0x7ac MovS
	var_1096_int = 1; // 0x7ad MovI
	func_509(var_1093_int, var_1094_string, var_1095_string, var_1096_int); // 0x7ae NEW_2
	var_1097_int = 0; var_1098_string = ""; var_1099_string = ""; var_1100_int = 0; // 0x7b0 PushV
	var_1097_int = var_1058_int; // 0x7b1 Mov
	var_1098_string = "pers_worker"; // 0x7b2 MovS
	var_1099_string = "worker2_attacker.xml"; // 0x7b3 MovS
	var_1100_int = 1; // 0x7b4 MovI
	func_509(var_1097_int, var_1098_string, var_1099_string, var_1100_int); // 0x7b5 NEW_2
	var_1101_int = 0; var_1102_string = ""; var_1103_string = ""; var_1104_int = 0; // 0x7b7 PushV
	var_1101_int = var_1058_int; // 0x7b8 Mov
	var_1102_string = "pers_woman"; // 0x7b9 MovS
	var_1103_string = "woman.xml"; // 0x7ba MovS
	var_1104_int = 1; // 0x7bb MovI
	func_509(var_1101_int, var_1102_string, var_1103_string, var_1104_int); // 0x7bc NEW_2
	var_1105_int = 0; var_1106_string = ""; var_1107_string = ""; var_1108_int = 0; // 0x7be PushV
	var_1105_int = var_1058_int; // 0x7bf Mov
	var_1106_string = "pers_alkash"; // 0x7c0 MovS
	var_1107_string = "alkash.xml"; // 0x7c1 MovS
	var_1108_int = 1; // 0x7c2 MovI
	func_509(var_1105_int, var_1106_string, var_1107_string, var_1108_int); // 0x7c3 NEW_2
	var_1109_int = 0; var_1110_string = ""; var_1111_string = ""; var_1112_int = 0; // 0x7c5 PushV
	var_1109_int = var_1058_int; // 0x7c6 Mov
	var_1110_string = "pers_girl"; // 0x7c7 MovS
	var_1111_string = "girl.xml"; // 0x7c8 MovS
	var_1112_int = 1; // 0x7c9 MovI
	func_509(var_1109_int, var_1110_string, var_1111_string, var_1112_int); // 0x7ca NEW_2
	var_1113_int = 0; var_1114_string = ""; var_1115_string = ""; var_1116_int = 0; // 0x7cc PushV
	var_1113_int = var_1058_int; // 0x7cd Mov
	var_1114_string = "pers_girl"; // 0x7ce MovS
	var_1115_string = "girl2.xml"; // 0x7cf MovS
	var_1116_int = 1; // 0x7d0 MovI
	func_509(var_1113_int, var_1114_string, var_1115_string, var_1116_int); // 0x7d1 NEW_2
	goto Label_2161; // 0x7d3 Jump
	
Label_2161:
	var_1117_bool = 0; // 0x871 PushV
	var_1117_bool = 0; // 0x872 MovB
	var_1118_bool = 0; // 0x873 PushV
	var_1118_bool = 0; // 0x874 MovB
	var_1119_int = 0; // 0x875 PushI
	var_1120_bool = var_1059_int == var_1119_int; // 0x876 Eq
	if(var_1120_bool == 0) goto Label_2172; // 0x877 JumpB
	var_1121_int = 12; // 0x878 PushI
	var_1122_bool = var_1060_int > var_1121_int; // 0x879 GT
	if(var_1122_bool == 0) goto Label_2172; // 0x87a JumpB
	var_1118_bool = 1; // 0x87b MovB
	
Label_2172:
	if(var_1118_bool == 0) goto Label_2177; // 0x87c JumpB
	var_1123_int = 22; // 0x87d PushI
	var_1124_bool = var_1060_int < var_1123_int; // 0x87e LT
	if(var_1124_bool == 0) goto Label_2177; // 0x87f JumpB
	var_1117_bool = 1; // 0x880 MovB
	
Label_2177:
	if(var_1117_bool == 0) goto Label_2185; // 0x881 JumpB
	var_1125_int = 0; var_1126_string = ""; var_1127_string = ""; var_1128_int = 0; // 0x882 PushV
	var_1125_int = var_1058_int; // 0x883 Mov
	var_1126_string = "pers_woman"; // 0x884 MovS
	var_1127_string = "woman_killme.xml"; // 0x885 MovS
	var_1128_int = 1; // 0x886 MovI
	func_509(var_1125_int, var_1126_string, var_1127_string, var_1128_int); // 0x887 NEW_2
	
Label_2185:
	var_1129_bool = 0; var_1130_int = 0; var_1131_int = 0; // 0x889 PushV
	var_1130_int = var_1059_int; // 0x88a Mov
	var_1131_int = var_1060_int; // 0x88b Mov
	func_1351(var_1129_bool, var_1130_int, var_1131_int); // 0x88c NEW_2
	if(var_1129_bool == 0) goto Label_2198; // 0x88e JumpB
	var_1136_int = 0; var_1137_string = ""; var_1138_string = ""; var_1139_int = 0; // 0x88f PushV
	var_1136_int = var_1058_int; // 0x890 Mov
	var_1137_string = "pers_soldat"; // 0x891 MovS
	var_1138_string = "soldier_marauder.xml"; // 0x892 MovS
	var_1139_int = 2; // 0x893 MovI
	func_509(var_1136_int, var_1137_string, var_1138_string, var_1139_int); // 0x894 NEW_2
	
Label_2198:
	var_1140_bool = 0; var_1141_int = 0; var_1142_int = 0; // 0x896 PushV
	var_1141_int = var_1059_int; // 0x897 Mov
	var_1142_int = var_1060_int; // 0x898 Mov
	func_1361(var_1140_bool, var_1141_int, var_1142_int); // 0x899 NEW_2
	if(var_1140_bool == 0) goto Label_2211; // 0x89b JumpB
	var_1150_int = 0; var_1151_string = ""; var_1152_string = ""; var_1153_int = 0; // 0x89c PushV
	var_1150_int = var_1058_int; // 0x89d Mov
	var_1151_string = "pers_nudegirl"; // 0x89e MovS
	var_1152_string = "nudegirl.xml"; // 0x89f MovS
	var_1153_int = 1; // 0x8a0 MovI
	func_509(var_1150_int, var_1151_string, var_1152_string, var_1153_int); // 0x8a1 NEW_2
	
Label_2211:
	return 2; // 0x8a3 Return
	
Label_2004:
	var_1154_bool = 0; // 0x7d4 PushV
	var_1154_bool = 0; // 0x7d5 MovB
	var_1155_int = 8; // 0x7d6 PushI
	var_1156_bool = var_1060_int > var_1155_int; // 0x7d7 GT
	if(var_1156_bool == 0) goto Label_2013; // 0x7d8 JumpB
	var_1157_int = 21; // 0x7d9 PushI
	var_1158_bool = var_1060_int < var_1157_int; // 0x7da LT
	if(var_1158_bool == 0) goto Label_2013; // 0x7db JumpB
	var_1154_bool = 1; // 0x7dc MovB
	
Label_2013:
	if(var_1154_bool == 0) goto Label_2095; // 0x7dd JumpB
	var_1159_int = 0; var_1160_string = ""; var_1161_string = ""; var_1162_int = 0; // 0x7de PushV
	var_1159_int = var_1058_int; // 0x7df Mov
	var_1160_string = "pers_woman"; // 0x7e0 MovS
	var_1161_string = "woman.xml"; // 0x7e1 MovS
	var_1162_int = 1; // 0x7e2 MovI
	func_509(var_1159_int, var_1160_string, var_1161_string, var_1162_int); // 0x7e3 NEW_2
	var_1163_int = 0; var_1164_string = ""; var_1165_string = ""; var_1166_int = 0; // 0x7e5 PushV
	var_1163_int = var_1058_int; // 0x7e6 Mov
	var_1164_string = "pers_unosha"; // 0x7e7 MovS
	var_1165_string = "unosha.xml"; // 0x7e8 MovS
	var_1166_int = 1; // 0x7e9 MovI
	func_509(var_1163_int, var_1164_string, var_1165_string, var_1166_int); // 0x7ea NEW_2
	var_1167_int = 0; var_1168_string = ""; var_1169_string = ""; var_1170_int = 0; // 0x7ec PushV
	var_1167_int = var_1058_int; // 0x7ed Mov
	var_1168_string = "pers_unosha"; // 0x7ee MovS
	var_1169_string = "unosha2.xml"; // 0x7ef MovS
	var_1170_int = 1; // 0x7f0 MovI
	func_509(var_1167_int, var_1168_string, var_1169_string, var_1170_int); // 0x7f1 NEW_2
	var_1171_int = 0; var_1172_string = ""; var_1173_string = ""; var_1174_int = 0; // 0x7f3 PushV
	var_1171_int = var_1058_int; // 0x7f4 Mov
	var_1172_string = "pers_worker"; // 0x7f5 MovS
	var_1173_string = "worker.xml"; // 0x7f6 MovS
	var_1174_int = 1; // 0x7f7 MovI
	func_509(var_1171_int, var_1172_string, var_1173_string, var_1174_int); // 0x7f8 NEW_2
	var_1175_int = 0; var_1176_string = ""; var_1177_string = ""; var_1178_int = 0; // 0x7fa PushV
	var_1175_int = var_1058_int; // 0x7fb Mov
	var_1176_string = "pers_worker"; // 0x7fc MovS
	var_1177_string = "worker2.xml"; // 0x7fd MovS
	var_1178_int = 1; // 0x7fe MovI
	func_509(var_1175_int, var_1176_string, var_1177_string, var_1178_int); // 0x7ff NEW_2
	var_1179_int = 0; var_1180_string = ""; var_1181_string = ""; var_1182_int = 0; // 0x801 PushV
	var_1179_int = var_1058_int; // 0x802 Mov
	var_1180_string = "pers_alkash"; // 0x803 MovS
	var_1181_string = "alkash.xml"; // 0x804 MovS
	var_1182_int = 1; // 0x805 MovI
	func_509(var_1179_int, var_1180_string, var_1181_string, var_1182_int); // 0x806 NEW_2
	var_1183_int = 0; var_1184_string = ""; var_1185_string = ""; var_1186_int = 0; // 0x808 PushV
	var_1183_int = var_1058_int; // 0x809 Mov
	var_1184_string = "pers_girl"; // 0x80a MovS
	var_1185_string = "girl.xml"; // 0x80b MovS
	var_1186_int = 1; // 0x80c MovI
	func_509(var_1183_int, var_1184_string, var_1185_string, var_1186_int); // 0x80d NEW_2
	var_1187_int = 0; var_1188_string = ""; var_1189_string = ""; var_1190_int = 0; // 0x80f PushV
	var_1187_int = var_1058_int; // 0x810 Mov
	var_1188_string = "pers_girl"; // 0x811 MovS
	var_1189_string = "girl2.xml"; // 0x812 MovS
	var_1190_int = 1; // 0x813 MovI
	func_509(var_1187_int, var_1188_string, var_1189_string, var_1190_int); // 0x814 NEW_2
	var_1191_int = 1; // 0x816 PushI
	var_1192_int = var_1059_int + var_1191_int; // 0x817 Add
	var_1193_int = 3; // 0x818 PushI
	var_1194_bool = var_1192_int >= var_1193_int; // 0x819 GE
	if(var_1194_bool == 0) goto Label_2082; // 0x81a JumpB
	var_1195_int = 0; var_1196_string = ""; var_1197_string = ""; var_1198_int = 0; // 0x81b PushV
	var_1195_int = var_1058_int; // 0x81c Mov
	var_1196_string = "pers_dohodyaga"; // 0x81d MovS
	var_1197_string = "dohodyaga.xml"; // 0x81e MovS
	var_1198_int = 1; // 0x81f MovI
	func_509(var_1195_int, var_1196_string, var_1197_string, var_1198_int); // 0x820 NEW_2
	
Label_2082:
	var_1199_int = 1; // 0x822 PushI
	var_1200_int = var_1059_int + var_1199_int; // 0x823 Add
	var_1201_int = 7; // 0x824 PushI
	var_1202_bool = var_1200_int >= var_1201_int; // 0x825 GE
	if(var_1202_bool == 0) goto Label_2094; // 0x826 JumpB
	var_1203_int = 0; var_1204_string = ""; var_1205_string = ""; var_1206_int = 0; // 0x827 PushV
	var_1203_int = var_1058_int; // 0x828 Mov
	var_1204_string = "pers_butcher"; // 0x829 MovS
	var_1205_string = "butcher.xml"; // 0x82a MovS
	var_1206_int = 2; // 0x82b MovI
	func_509(var_1203_int, var_1204_string, var_1205_string, var_1206_int); // 0x82c NEW_2
	
Label_2094:
	goto Label_2161; // 0x82e Jump
	
Label_2095:
	var_1207_int = 0; var_1208_string = ""; var_1209_string = ""; var_1210_int = 0; // 0x82f PushV
	var_1207_int = var_1058_int; // 0x830 Mov
	var_1208_string = "pers_woman"; // 0x831 MovS
	var_1209_string = "woman.xml"; // 0x832 MovS
	var_1210_int = 1; // 0x833 MovI
	func_509(var_1207_int, var_1208_string, var_1209_string, var_1210_int); // 0x834 NEW_2
	var_1211_int = 0; var_1212_string = ""; var_1213_string = ""; var_1214_int = 0; // 0x836 PushV
	var_1211_int = var_1058_int; // 0x837 Mov
	var_1212_string = "pers_unosha"; // 0x838 MovS
	var_1213_string = "unosha.xml"; // 0x839 MovS
	var_1214_int = 1; // 0x83a MovI
	func_509(var_1211_int, var_1212_string, var_1213_string, var_1214_int); // 0x83b NEW_2
	var_1215_int = 0; var_1216_string = ""; var_1217_string = ""; var_1218_int = 0; // 0x83d PushV
	var_1215_int = var_1058_int; // 0x83e Mov
	var_1216_string = "pers_unosha"; // 0x83f MovS
	var_1217_string = "unosha2.xml"; // 0x840 MovS
	var_1218_int = 1; // 0x841 MovI
	func_509(var_1215_int, var_1216_string, var_1217_string, var_1218_int); // 0x842 NEW_2
	var_1219_int = 0; var_1220_string = ""; var_1221_string = ""; var_1222_int = 0; // 0x844 PushV
	var_1219_int = var_1058_int; // 0x845 Mov
	var_1220_string = "pers_worker"; // 0x846 MovS
	var_1221_string = "worker.xml"; // 0x847 MovS
	var_1222_int = 1; // 0x848 MovI
	func_509(var_1219_int, var_1220_string, var_1221_string, var_1222_int); // 0x849 NEW_2
	var_1223_int = 0; var_1224_string = ""; var_1225_string = ""; var_1226_int = 0; // 0x84b PushV
	var_1223_int = var_1058_int; // 0x84c Mov
	var_1224_string = "pers_worker"; // 0x84d MovS
	var_1225_string = "worker2.xml"; // 0x84e MovS
	var_1226_int = 1; // 0x84f MovI
	func_509(var_1223_int, var_1224_string, var_1225_string, var_1226_int); // 0x850 NEW_2
	var_1227_int = 0; var_1228_string = ""; var_1229_string = ""; var_1230_int = 0; // 0x852 PushV
	var_1227_int = var_1058_int; // 0x853 Mov
	var_1228_string = "pers_alkash"; // 0x854 MovS
	var_1229_string = "alkash.xml"; // 0x855 MovS
	var_1230_int = 1; // 0x856 MovI
	func_509(var_1227_int, var_1228_string, var_1229_string, var_1230_int); // 0x857 NEW_2
	var_1231_int = 1; // 0x859 PushI
	var_1232_int = var_1059_int + var_1231_int; // 0x85a Add
	var_1233_int = 3; // 0x85b PushI
	var_1234_bool = var_1232_int >= var_1233_int; // 0x85c GE
	if(var_1234_bool == 0) goto Label_2149; // 0x85d JumpB
	var_1235_int = 0; var_1236_string = ""; var_1237_string = ""; var_1238_int = 0; // 0x85e PushV
	var_1235_int = var_1058_int; // 0x85f Mov
	var_1236_string = "pers_dohodyaga"; // 0x860 MovS
	var_1237_string = "dohodyaga.xml"; // 0x861 MovS
	var_1238_int = 1; // 0x862 MovI
	func_509(var_1235_int, var_1236_string, var_1237_string, var_1238_int); // 0x863 NEW_2
	
Label_2149:
	var_1239_int = 1; // 0x865 PushI
	var_1240_int = var_1059_int + var_1239_int; // 0x866 Add
	var_1241_int = 7; // 0x867 PushI
	var_1242_bool = var_1240_int >= var_1241_int; // 0x868 GE
	if(var_1242_bool == 0) goto Label_2161; // 0x869 JumpB
	var_1243_int = 0; var_1244_string = ""; var_1245_string = ""; var_1246_int = 0; // 0x86a PushV
	var_1243_int = var_1058_int; // 0x86b Mov
	var_1244_string = "pers_butcher"; // 0x86c MovS
	var_1245_string = "butcher.xml"; // 0x86d MovS
	var_1246_int = 3; // 0x86e MovI
	func_509(var_1243_int, var_1244_string, var_1245_string, var_1246_int); // 0x86f NEW_2
}


func_12147(var_4762_bool)
{
	var_4765_int = 0; var_4766_string = ""; // 0x2f74 PushV
	var_4766_string = "d9JuliaVisit"; // 0x2f75 MovS
	func_138(var_4765_int, var_4766_string); // 0x2f76 NEW_2
	var_4767_int = 0; // 0x2f78 PushI
	var_4768_bool = var_4765_int != var_4767_int; // 0x2f79 Neq
	if(var_4768_bool == 0) goto Label_12157; // 0x2f7a JumpB
	var_4762_bool = 1; // 0x2f7b MovB
	return 0; // 0x2f7c Return
	
Label_12157:
	var_4762_bool = 0; // 0x2f7d MovB
	return 0; // 0x2f7e Return
}


func_11126()
{
	var_6176_object = Obj(); var_6177_object = Obj(); var_6178_object = Obj(); var_6179_object = Obj(); // 0x2b76 PushV
	var_6180_object = Obj(); // 0x2b77 PushV
	func_12503(var_6180_object); // 0x2b78 NEW_2
	var_6178_object = var_6180_object; // 0x2b79 Mov
	var_6181_string = "d3q01AlexandrGotoOspina"; // 0x2b7b PushS
	FindMark(var_6179_object, var_6181_string); // 0x2b7c ObjFunc
	var_6182_object = var_6179_object; // 0x2b7e Push
	if(var_6182_object == 0) goto Label_11138; // 0x2b7f JumpB
	Remove(); // 0x2b80 ObjFunc
	
Label_11138:
	var_6183_string = "d3q01BigVladAgreed"; // 0x2b82 PushS
	FindMark(var_6179_object, var_6183_string); // 0x2b83 ObjFunc
	var_6184_object = var_6179_object; // 0x2b85 Push
	if(var_6184_object == 0) goto Label_11145; // 0x2b86 JumpB
	Remove(); // 0x2b87 ObjFunc
	
Label_11145:
	var_6185_string = "d3q01OspinaGotoBigVlad"; // 0x2b89 PushS
	FindMark(var_6179_object, var_6185_string); // 0x2b8a ObjFunc
	var_6186_object = var_6179_object; // 0x2b8c Push
	if(var_6186_object == 0) goto Label_11152; // 0x2b8d JumpB
	Remove(); // 0x2b8e ObjFunc
	
Label_11152:
	var_6187_string = "d3q01RubinGotoAlexandr"; // 0x2b90 PushS
	FindMark(var_6179_object, var_6187_string); // 0x2b91 ObjFunc
	var_6188_object = var_6179_object; // 0x2b93 Push
	if(var_6188_object == 0) goto Label_11159; // 0x2b94 JumpB
	Remove(); // 0x2b95 ObjFunc
	
Label_11159:
	var_6189_string = "d3q02GeorgGotoViktor"; // 0x2b97 PushS
	FindMark(var_6179_object, var_6189_string); // 0x2b98 ObjFunc
	var_6190_object = var_6179_object; // 0x2b9a Push
	if(var_6190_object == 0) goto Label_11166; // 0x2b9b JumpB
	Remove(); // 0x2b9c ObjFunc
	
Label_11166:
	var_6191_string = "d3q02HanGotoMladVlad"; // 0x2b9e PushS
	FindMark(var_6179_object, var_6191_string); // 0x2b9f ObjFunc
	var_6192_object = var_6179_object; // 0x2ba1 Push
	if(var_6192_object == 0) goto Label_11173; // 0x2ba2 JumpB
	Remove(); // 0x2ba3 ObjFunc
	
Label_11173:
	var_6193_string = "d3q02MishkaGotoMladVlad"; // 0x2ba5 PushS
	FindMark(var_6179_object, var_6193_string); // 0x2ba6 ObjFunc
	var_6194_object = var_6179_object; // 0x2ba8 Push
	if(var_6194_object == 0) goto Label_11180; // 0x2ba9 JumpB
	Remove(); // 0x2baa ObjFunc
	
Label_11180:
	var_6195_string = "d3q02MladVladGotoButcher"; // 0x2bac PushS
	FindMark(var_6179_object, var_6195_string); // 0x2bad ObjFunc
	var_6196_object = var_6179_object; // 0x2baf Push
	if(var_6196_object == 0) goto Label_11187; // 0x2bb0 JumpB
	Remove(); // 0x2bb1 ObjFunc
	
Label_11187:
	var_6197_string = "d3q02MladVladGotoViktor"; // 0x2bb3 PushS
	FindMark(var_6179_object, var_6197_string); // 0x2bb4 ObjFunc
	var_6198_object = var_6179_object; // 0x2bb6 Push
	if(var_6198_object == 0) goto Label_11194; // 0x2bb7 JumpB
	Remove(); // 0x2bb8 ObjFunc
	
Label_11194:
	var_6199_string = "d3q02ViktorGotoHan"; // 0x2bba PushS
	FindMark(var_6179_object, var_6199_string); // 0x2bbb ObjFunc
	var_6200_object = var_6179_object; // 0x2bbd Push
	if(var_6200_object == 0) goto Label_11201; // 0x2bbe JumpB
	Remove(); // 0x2bbf ObjFunc
	
Label_11201:
	var_6201_string = "d3q02ViktorGotoMladVlad"; // 0x2bc1 PushS
	FindMark(var_6179_object, var_6201_string); // 0x2bc2 ObjFunc
	var_6202_object = var_6179_object; // 0x2bc4 Push
	if(var_6202_object == 0) goto Label_11208; // 0x2bc5 JumpB
	Remove(); // 0x2bc6 ObjFunc
	
Label_11208:
	var_6203_string = "d3q03KapellaBoyLocation"; // 0x2bc8 PushS
	FindMark(var_6179_object, var_6203_string); // 0x2bc9 ObjFunc
	var_6204_object = var_6179_object; // 0x2bcb Push
	if(var_6204_object == 0) goto Label_11215; // 0x2bcc JumpB
	Remove(); // 0x2bcd ObjFunc
	
Label_11215:
	var_6205_bool = 0; var_6206_int = 0; // 0x2bcf PushV
	var_6206_int = 25; // 0x2bd0 MovI
	func_12478(var_6205_bool, var_6206_int); // 0x2bd1 NEW_2
	var_6207_bool = 0; var_6208_int = 0; // 0x2bd3 PushV
	var_6208_int = 26; // 0x2bd4 MovI
	func_12478(var_6207_bool, var_6208_int); // 0x2bd5 NEW_2
	var_6209_bool = 0; var_6210_int = 0; // 0x2bd7 PushV
	var_6210_int = 27; // 0x2bd8 MovI
	func_12478(var_6209_bool, var_6210_int); // 0x2bd9 NEW_2
	return 4; // 0x2bdb Return
}


func_10102(var_5235_int, var_5236_float)
{
	var_5237_int = 0; var_5238_int = 0; var_5239_int = 0; var_5240_float = 0; // 0x2777 PushV
	var_5238_int = 532770; // 0x2778 MovI
	var_5239_int = 532769; // 0x2779 MovI
	var_5240_float = var_5236_float; // 0x277a Mov
	func_12495(var_5237_int, var_5238_int, var_5239_int, var_5240_float); // 0x277b NEW_2
	var_5235_int = var_5237_int; // 0x277c Mov
	return 0; // 0x277e Return
}


func_12159(var_5042_bool)
{
	var_5045_int = 0; var_5046_string = ""; // 0x2f80 PushV
	var_5046_string = "d10AglajaVisit"; // 0x2f81 MovS
	func_138(var_5045_int, var_5046_string); // 0x2f82 NEW_2
	var_5047_int = 0; // 0x2f84 PushI
	var_5048_bool = var_5045_int != var_5047_int; // 0x2f85 Neq
	if(var_5048_bool == 0) goto Label_12169; // 0x2f86 JumpB
	var_5042_bool = 1; // 0x2f87 MovB
	return 0; // 0x2f88 Return
	
Label_12169:
	var_5042_bool = 0; // 0x2f89 MovB
	return 0; // 0x2f8a Return
}


func_7040(var_4097_int, var_4098_int, var_4099_object, var_4100_object, var_4101_object, var_4102_object)
{
	var_4103_int = 0; // 0x1b81 PushI
	var_4104_bool = var_4098_int == var_4103_int; // 0x1b82 Eq
	if(var_4104_bool == 0) goto Label_7080; // 0x1b83 JumpB
	var_4105_int = 0; var_4106_bool = 0; // 0x1b84 PushV
	var_4105_int = 13; // 0x1b85 MovI
	var_4106_bool = 0; // 0x1b86 MovB
	func_802(var_4105_int, var_4106_bool); // 0x1b87 NEW_2
	var_4107_int = 0; var_4108_bool = 0; var_4109_int = 0; // 0x1b89 PushV
	var_4107_int = 13; // 0x1b8a MovI
	var_4108_bool = 0; // 0x1b8b MovB
	var_4109_int = 1; // 0x1b8c MovI
	func_819(var_4107_int, var_4108_bool, var_4109_int); // 0x1b8d NEW_2
	var_4110_int = 0; var_4111_int = 0; var_4112_object = Obj(); var_4113_object = Obj(); var_4114_object = Obj(); // 0x1b8f PushV
	var_4110_int = 13; // 0x1b90 MovI
	var_4111_int = var_4097_int; // 0x1b91 Mov
	var_4112_object = var_4099_object; // 0x1b92 Mov
	var_4113_object = var_4100_object; // 0x1b93 Mov
	var_4114_object = var_4101_object; // 0x1b94 Mov
	func_726(var_4110_int, var_4111_int, var_4112_object, var_4113_object, var_4114_object); // 0x1b95 NEW_2
	var_4115_object = Obj(); var_4116_int = 0; // 0x1b97 PushV
	var_4115_object = var_4102_object; // 0x1b98 Mov
	var_4116_int = 2; // 0x1b99 MovI
	func_311(var_4116_int); // 0x1b9a NEW_2
	var_4117_int = 0; var_4118_bool = 0; var_4119_int = 0; // 0x1b9c PushV
	var_4117_int = 13; // 0x1b9d MovI
	var_4118_bool = 0; // 0x1b9e MovB
	var_4119_int = 4; // 0x1b9f MovI
	func_876(var_4117_int, var_4118_bool, var_4119_int); // 0x1ba0 NEW_2
	var_4120_int = 0; var_4121_bool = 0; var_4122_int = 0; // 0x1ba2 PushV
	var_4120_int = 13; // 0x1ba3 MovI
	var_4121_bool = 1; // 0x1ba4 MovB
	var_4122_int = 4; // 0x1ba5 MovI
	func_938(var_4120_int, var_4121_bool, var_4122_int); // 0x1ba6 NEW_2
	
Label_7080:
	var_4123_int = 0; var_4124_bool = 0; // 0x1ba8 PushV
	var_4123_int = 13; // 0x1ba9 MovI
	var_4124_bool = 0; // 0x1baa MovB
	func_785(var_4123_int, var_4124_bool); // 0x1bab NEW_2
	var_4125_int = 0; var_4126_int = 0; var_4127_int = 0; // 0x1bad PushV
	var_4125_int = 13; // 0x1bae MovI
	var_4126_int = var_4097_int; // 0x1baf Mov
	var_4127_int = var_4098_int; // 0x1bb0 Mov
	func_3665(var_4125_int, var_4126_int, var_4127_int); // 0x1bb1 NEW_2
	return 0; // 0x1bb3 Return
}


func_6016(var_3932_int, var_3933_int, var_3934_object, var_3935_object, var_3936_object, var_3937_object)
{
	var_3938_int = 0; // 0x1781 PushI
	var_3939_bool = var_3933_int == var_3938_int; // 0x1782 Eq
	if(var_3939_bool == 0) goto Label_6056; // 0x1783 JumpB
	var_3940_int = 0; var_3941_bool = 0; // 0x1784 PushV
	var_3940_int = 8; // 0x1785 MovI
	var_3941_bool = 0; // 0x1786 MovB
	func_802(var_3940_int, var_3941_bool); // 0x1787 NEW_2
	var_3942_int = 0; var_3943_bool = 0; var_3944_int = 0; // 0x1789 PushV
	var_3942_int = 8; // 0x178a MovI
	var_3943_bool = 0; // 0x178b MovB
	var_3944_int = 1; // 0x178c MovI
	func_819(var_3942_int, var_3943_bool, var_3944_int); // 0x178d NEW_2
	var_3945_int = 0; var_3946_int = 0; var_3947_object = Obj(); var_3948_object = Obj(); var_3949_object = Obj(); // 0x178f PushV
	var_3945_int = 8; // 0x1790 MovI
	var_3946_int = var_3932_int; // 0x1791 Mov
	var_3947_object = var_3934_object; // 0x1792 Mov
	var_3948_object = var_3935_object; // 0x1793 Mov
	var_3949_object = var_3936_object; // 0x1794 Mov
	func_726(var_3945_int, var_3946_int, var_3947_object, var_3948_object, var_3949_object); // 0x1795 NEW_2
	var_3950_object = Obj(); var_3951_int = 0; // 0x1797 PushV
	var_3950_object = var_3937_object; // 0x1798 Mov
	var_3951_int = 2; // 0x1799 MovI
	func_311(var_3951_int); // 0x179a NEW_2
	var_3952_int = 0; var_3953_bool = 0; var_3954_int = 0; // 0x179c PushV
	var_3952_int = 8; // 0x179d MovI
	var_3953_bool = 0; // 0x179e MovB
	var_3954_int = 4; // 0x179f MovI
	func_876(var_3952_int, var_3953_bool, var_3954_int); // 0x17a0 NEW_2
	var_3955_int = 0; var_3956_bool = 0; var_3957_int = 0; // 0x17a2 PushV
	var_3955_int = 8; // 0x17a3 MovI
	var_3956_bool = 1; // 0x17a4 MovB
	var_3957_int = 4; // 0x17a5 MovI
	func_938(var_3955_int, var_3956_bool, var_3957_int); // 0x17a6 NEW_2
	
Label_6056:
	var_3958_int = 0; var_3959_bool = 0; // 0x17a8 PushV
	var_3958_int = 8; // 0x17a9 MovI
	var_3959_bool = 0; // 0x17aa MovB
	func_785(var_3958_int, var_3959_bool); // 0x17ab NEW_2
	var_3960_int = 0; var_3961_int = 0; var_3962_int = 0; // 0x17ad PushV
	var_3960_int = 8; // 0x17ae MovI
	var_3961_int = var_3932_int; // 0x17af Mov
	var_3962_int = var_3933_int; // 0x17b0 Mov
	func_3665(var_3960_int, var_3961_int, var_3962_int); // 0x17b1 NEW_2
	return 0; // 0x17b3 Return
}


func_10111(var_5446_int, var_5447_float)
{
	var_5448_int = 0; var_5449_int = 0; var_5450_int = 0; var_5451_float = 0; // 0x2780 PushV
	var_5449_int = 532768; // 0x2781 MovI
	var_5450_int = 532767; // 0x2782 MovI
	var_5451_float = var_5447_float; // 0x2783 Mov
	func_12495(var_5448_int, var_5449_int, var_5450_int, var_5451_float); // 0x2784 NEW_2
	var_5446_int = var_5448_int; // 0x2785 Mov
	return 0; // 0x2787 Return
}


func_2950(var_2436_int, var_2437_int, var_2438_int)
{
	var_2439_int = 0; var_2440_int = 0; var_2441_int = 0; var_2442_int = 0; // 0xb86 PushV
	var_2443_bool = 0; // 0xb87 PushV
	var_2443_bool = 0; // 0xb88 MovB
	var_2444_int = 8; // 0xb89 PushI
	var_2445_bool = var_2438_int > var_2444_int; // 0xb8a GT
	if(var_2445_bool == 0) goto Label_2960; // 0xb8b JumpB
	var_2446_int = 21; // 0xb8c PushI
	var_2447_bool = var_2438_int < var_2446_int; // 0xb8d LT
	if(var_2447_bool == 0) goto Label_2960; // 0xb8e JumpB
	var_2443_bool = 1; // 0xb8f MovB
	
Label_2960:
	if(var_2443_bool == 0) goto Label_3015; // 0xb90 JumpB
	var_2448_int = 0; var_2449_string = ""; var_2450_string = ""; var_2451_int = 0; // 0xb91 PushV
	var_2448_int = var_2436_int; // 0xb92 Mov
	var_2449_string = "pers_vaxxabit"; // 0xb93 MovS
	var_2450_string = "vaxxabit_d.xml"; // 0xb94 MovS
	var_2451_int = 6; // 0xb95 MovI
	func_509(var_2448_int, var_2449_string, var_2450_string, var_2451_int); // 0xb96 NEW_2
	var_2452_int = 0; var_2453_string = ""; var_2454_string = ""; var_2455_int = 0; // 0xb98 PushV
	var_2452_int = var_2436_int; // 0xb99 Mov
	var_2453_string = "pers_vaxxabitka"; // 0xb9a MovS
	var_2454_string = "vaxxabitka_d.xml"; // 0xb9b MovS
	var_2455_int = 6; // 0xb9c MovI
	func_509(var_2452_int, var_2453_string, var_2454_string, var_2455_int); // 0xb9d NEW_2
	var_2456_int = 0; var_2457_string = ""; var_2458_string = ""; var_2459_int = 0; // 0xb9f PushV
	var_2456_int = var_2436_int; // 0xba0 Mov
	var_2457_string = "pers_rat_big"; // 0xba1 MovS
	var_2458_string = "rat_big.xml"; // 0xba2 MovS
	var_2459_int = 2; // 0xba3 MovI
	func_509(var_2456_int, var_2457_string, var_2458_string, var_2459_int); // 0xba4 NEW_2
	var_2460_int = 0; var_2461_string = ""; var_2462_string = ""; var_2463_int = 0; // 0xba6 PushV
	var_2460_int = var_2436_int; // 0xba7 Mov
	var_2461_string = "fog"; // 0xba8 MovS
	var_2462_string = "fog.xml"; // 0xba9 MovS
	var_2463_int = 6; // 0xbaa MovI
	func_535(var_2460_int, var_2461_string, var_2462_string, var_2463_int); // 0xbab NEW_2
	var_2464_int = 5; // 0xbad PushI
	var_2465_bool = var_2437_int >= var_2464_int; // 0xbae GE
	if(var_2465_bool == 0) goto Label_2999; // 0xbaf JumpB
	var_2466_int = 0; var_2467_string = ""; var_2468_string = ""; var_2469_int = 0; // 0xbb0 PushV
	var_2466_int = var_2436_int; // 0xbb1 Mov
	var_2467_string = "fog"; // 0xbb2 MovS
	var_2468_string = "fog_hunter.xml"; // 0xbb3 MovS
	var_2469_int = 2; // 0xbb4 MovI
	func_535(var_2466_int, var_2467_string, var_2468_string, var_2469_int); // 0xbb5 NEW_2
	
Label_2999:
	var_2470_int = 1; // 0xbb7 PushI
	var_2471_float = 0; var_2472_int = 0; // 0xbb8 PushV
	var_2472_int = var_2437_int; // 0xbb9 Mov
	func_1261(var_2471_float, var_2472_int); // 0xbba NEW_2
	var_2441_int = var_2470_int * var_2471_float; // 0xbbc Mult2
	var_2473_int = var_2441_int; // 0xbbd Push
	if(var_2473_int == 0) goto Label_3014; // 0xbbe JumpB
	var_2474_int = 0; var_2475_string = ""; var_2476_string = ""; var_2477_int = 0; // 0xbbf PushV
	var_2474_int = var_2436_int; // 0xbc0 Mov
	var_2475_string = "pers_bomber"; // 0xbc1 MovS
	var_2476_string = "bomber.xml"; // 0xbc2 MovS
	var_2477_int = var_2441_int; // 0xbc3 Mov
	func_509(var_2474_int, var_2475_string, var_2476_string, var_2477_int); // 0xbc4 NEW_2
	
Label_3014:
	goto Label_3068; // 0xbc6 Jump
	
Label_3068:
	var_2478_int = 0; var_2479_string = ""; var_2480_string = ""; var_2481_int = 0; var_2482_int = 0; var_2483_int = 0; // 0xbfc PushV
	var_2478_int = var_2436_int; // 0xbfd Mov
	var_2479_string = "pers_worker"; // 0xbfe MovS
	var_2480_string = "agony1_man.xml"; // 0xbff MovS
	var_2481_int = 2; // 0xc00 MovI
	var_2482_int = 4; // 0xc01 MovI
	var_2483_int = 4; // 0xc02 MovI
	func_522(var_2478_int, var_2479_string, var_2480_string, var_2481_int, var_2482_int, var_2483_int); // 0xc03 NEW_2
	var_2484_int = 0; var_2485_string = ""; var_2486_string = ""; var_2487_int = 0; var_2488_int = 0; var_2489_int = 0; // 0xc05 PushV
	var_2484_int = var_2436_int; // 0xc06 Mov
	var_2485_string = "pers_unosha"; // 0xc07 MovS
	var_2486_string = "agony1_man.xml"; // 0xc08 MovS
	var_2487_int = 2; // 0xc09 MovI
	var_2488_int = 4; // 0xc0a MovI
	var_2489_int = 4; // 0xc0b MovI
	func_522(var_2484_int, var_2485_string, var_2486_string, var_2487_int, var_2488_int, var_2489_int); // 0xc0c NEW_2
	var_2490_int = 0; var_2491_string = ""; var_2492_string = ""; var_2493_int = 0; var_2494_int = 0; var_2495_int = 0; // 0xc0e PushV
	var_2490_int = var_2436_int; // 0xc0f Mov
	var_2491_string = "pers_woman"; // 0xc10 MovS
	var_2492_string = "agony1_woman.xml"; // 0xc11 MovS
	var_2493_int = 2; // 0xc12 MovI
	var_2494_int = 4; // 0xc13 MovI
	var_2495_int = 4; // 0xc14 MovI
	func_522(var_2490_int, var_2491_string, var_2492_string, var_2493_int, var_2494_int, var_2495_int); // 0xc15 NEW_2
	var_2496_int = 0; var_2497_string = ""; var_2498_string = ""; var_2499_int = 0; var_2500_int = 0; var_2501_int = 0; // 0xc17 PushV
	var_2496_int = var_2436_int; // 0xc18 Mov
	var_2497_string = "pers_wasted_girl"; // 0xc19 MovS
	var_2498_string = "agony1_woman.xml"; // 0xc1a MovS
	var_2499_int = 2; // 0xc1b MovI
	var_2500_int = 4; // 0xc1c MovI
	var_2501_int = 4; // 0xc1d MovI
	func_522(var_2496_int, var_2497_string, var_2498_string, var_2499_int, var_2500_int, var_2501_int); // 0xc1e NEW_2
	var_2502_bool = 0; var_2503_int = 0; var_2504_int = 0; // 0xc20 PushV
	var_2503_int = var_2437_int; // 0xc21 Mov
	var_2504_int = var_2438_int; // 0xc22 Mov
	func_1351(var_2502_bool, var_2503_int, var_2504_int); // 0xc23 NEW_2
	if(var_2502_bool == 0) goto Label_3117; // 0xc25 JumpB
	var_2505_int = 0; var_2506_string = ""; var_2507_string = ""; var_2508_int = 0; // 0xc26 PushV
	var_2505_int = var_2436_int; // 0xc27 Mov
	var_2506_string = "pers_soldat"; // 0xc28 MovS
	var_2507_string = "soldier_marauder.xml"; // 0xc29 MovS
	var_2508_int = 2; // 0xc2a MovI
	func_509(var_2505_int, var_2506_string, var_2507_string, var_2508_int); // 0xc2b NEW_2
	
Label_3117:
	var_2509_bool = 0; var_2510_int = 0; var_2511_int = 0; // 0xc2d PushV
	var_2510_int = var_2437_int; // 0xc2e Mov
	var_2511_int = var_2438_int; // 0xc2f Mov
	func_1361(var_2509_bool, var_2510_int, var_2511_int); // 0xc30 NEW_2
	if(var_2509_bool == 0) goto Label_3130; // 0xc32 JumpB
	var_2512_int = 0; var_2513_string = ""; var_2514_string = ""; var_2515_int = 0; // 0xc33 PushV
	var_2512_int = var_2436_int; // 0xc34 Mov
	var_2513_string = "pers_nudegirl"; // 0xc35 MovS
	var_2514_string = "nudegirl.xml"; // 0xc36 MovS
	var_2515_int = 1; // 0xc37 MovI
	func_509(var_2512_int, var_2513_string, var_2514_string, var_2515_int); // 0xc38 NEW_2
	
Label_3130:
	var_2516_bool = 0; var_2517_int = 0; // 0xc3a PushV
	var_2517_int = var_2437_int; // 0xc3b Mov
	func_1378(var_2516_bool, var_2517_int); // 0xc3c NEW_2
	if(var_2516_bool == 0) goto Label_3142; // 0xc3e JumpB
	var_2518_int = 0; var_2519_string = ""; var_2520_string = ""; var_2521_int = 0; // 0xc3f PushV
	var_2518_int = var_2436_int; // 0xc40 Mov
	var_2519_string = "pers_sanitar"; // 0xc41 MovS
	var_2520_string = "sanitar.xml"; // 0xc42 MovS
	var_2521_int = 1; // 0xc43 MovI
	func_509(var_2518_int, var_2519_string, var_2520_string, var_2521_int); // 0xc44 NEW_2
	
Label_3142:
	return 4; // 0xc46 Return
	
Label_3015:
	var_2522_int = 0; var_2523_string = ""; var_2524_string = ""; var_2525_int = 0; // 0xbc7 PushV
	var_2522_int = var_2436_int; // 0xbc8 Mov
	var_2523_string = "pers_vaxxabit"; // 0xbc9 MovS
	var_2524_string = "vaxxabit_d.xml"; // 0xbca MovS
	var_2525_int = 5; // 0xbcb MovI
	func_509(var_2522_int, var_2523_string, var_2524_string, var_2525_int); // 0xbcc NEW_2
	var_2526_int = 0; var_2527_string = ""; var_2528_string = ""; var_2529_int = 0; // 0xbce PushV
	var_2526_int = var_2436_int; // 0xbcf Mov
	var_2527_string = "pers_vaxxabitka"; // 0xbd0 MovS
	var_2528_string = "vaxxabitka_d.xml"; // 0xbd1 MovS
	var_2529_int = 5; // 0xbd2 MovI
	func_509(var_2526_int, var_2527_string, var_2528_string, var_2529_int); // 0xbd3 NEW_2
	var_2530_int = 0; var_2531_string = ""; var_2532_string = ""; var_2533_int = 0; // 0xbd5 PushV
	var_2530_int = var_2436_int; // 0xbd6 Mov
	var_2531_string = "pers_rat_big"; // 0xbd7 MovS
	var_2532_string = "rat_big.xml"; // 0xbd8 MovS
	var_2533_int = 3; // 0xbd9 MovI
	func_509(var_2530_int, var_2531_string, var_2532_string, var_2533_int); // 0xbda NEW_2
	var_2534_int = 0; var_2535_string = ""; var_2536_string = ""; var_2537_int = 0; // 0xbdc PushV
	var_2534_int = var_2436_int; // 0xbdd Mov
	var_2535_string = "fog"; // 0xbde MovS
	var_2536_string = "fog.xml"; // 0xbdf MovS
	var_2537_int = 6; // 0xbe0 MovI
	func_535(var_2534_int, var_2535_string, var_2536_string, var_2537_int); // 0xbe1 NEW_2
	var_2538_int = 5; // 0xbe3 PushI
	var_2539_bool = var_2437_int >= var_2538_int; // 0xbe4 GE
	if(var_2539_bool == 0) goto Label_3053; // 0xbe5 JumpB
	var_2540_int = 0; var_2541_string = ""; var_2542_string = ""; var_2543_int = 0; // 0xbe6 PushV
	var_2540_int = var_2436_int; // 0xbe7 Mov
	var_2541_string = "fog"; // 0xbe8 MovS
	var_2542_string = "fog_hunter.xml"; // 0xbe9 MovS
	var_2543_int = 2; // 0xbea MovI
	func_535(var_2540_int, var_2541_string, var_2542_string, var_2543_int); // 0xbeb NEW_2
	
Label_3053:
	var_2544_int = 1; // 0xbed PushI
	var_2545_float = 0; var_2546_int = 0; // 0xbee PushV
	var_2546_int = var_2437_int; // 0xbef Mov
	func_1261(var_2545_float, var_2546_int); // 0xbf0 NEW_2
	var_2442_int = var_2544_int * var_2545_float; // 0xbf2 Mult2
	var_2547_int = var_2442_int; // 0xbf3 Push
	if(var_2547_int == 0) goto Label_3068; // 0xbf4 JumpB
	var_2548_int = 0; var_2549_string = ""; var_2550_string = ""; var_2551_int = 0; // 0xbf5 PushV
	var_2548_int = var_2436_int; // 0xbf6 Mov
	var_2549_string = "pers_bomber"; // 0xbf7 MovS
	var_2550_string = "bomber.xml"; // 0xbf8 MovS
	var_2551_int = var_2442_int; // 0xbf9 Mov
	func_509(var_2548_int, var_2549_string, var_2550_string, var_2551_int); // 0xbfa NEW_2
}


func_10120(var_4847_int, var_4848_float)
{
	var_4849_int = 0; var_4850_int = 0; var_4851_int = 0; var_4852_float = 0; // 0x2789 PushV
	var_4850_int = 541589; // 0x278a MovI
	var_4851_int = 541588; // 0x278b MovI
	var_4852_float = var_4848_float; // 0x278c Mov
	func_12495(var_4849_int, var_4850_int, var_4851_int, var_4852_float); // 0x278d NEW_2
	var_4847_int = var_4849_int; // 0x278e Mov
	return 0; // 0x2790 Return
}


func_12171(var_5086_bool)
{
	var_5089_int = 0; var_5090_string = ""; // 0x2f8c PushV
	var_5090_string = "d11ViktorVisit"; // 0x2f8d MovS
	func_138(var_5089_int, var_5090_string); // 0x2f8e NEW_2
	var_5091_int = 0; // 0x2f90 PushI
	var_5092_bool = var_5089_int != var_5091_int; // 0x2f91 Neq
	if(var_5092_bool == 0) goto Label_12181; // 0x2f92 JumpB
	var_5086_bool = 1; // 0x2f93 MovB
	return 0; // 0x2f94 Return
	
Label_12181:
	var_5086_bool = 0; // 0x2f95 MovB
	return 0; // 0x2f96 Return
}


func_10129(var_5611_int, var_5612_float)
{
	var_5613_int = 0; var_5614_int = 0; var_5615_int = 0; var_5616_float = 0; // 0x2792 PushV
	var_5614_int = 501175; // 0x2793 MovI
	var_5615_int = 501174; // 0x2794 MovI
	var_5616_float = var_5612_float; // 0x2795 Mov
	func_12495(var_5613_int, var_5614_int, var_5615_int, var_5616_float); // 0x2796 NEW_2
	var_5611_int = var_5613_int; // 0x2797 Mov
	return 0; // 0x2799 Return
}


func_12183(var_4927_bool)
{
	var_4930_int = 0; var_4931_string = ""; // 0x2f98 PushV
	var_4931_string = "d9AglajaVisit"; // 0x2f99 MovS
	func_138(var_4930_int, var_4931_string); // 0x2f9a NEW_2
	var_4932_int = 0; // 0x2f9c PushI
	var_4933_bool = var_4930_int != var_4932_int; // 0x2f9d Neq
	if(var_4933_bool == 0) goto Label_12193; // 0x2f9e JumpB
	var_4927_bool = 1; // 0x2f9f MovB
	return 0; // 0x2fa0 Return
	
Label_12193:
	var_4927_bool = 0; // 0x2fa1 MovB
	return 0; // 0x2fa2 Return
}


func_10138(var_5333_int, var_5334_float)
{
	var_5335_int = 0; var_5336_int = 0; var_5337_int = 0; var_5338_float = 0; // 0x279b PushV
	var_5336_int = 522198; // 0x279c MovI
	var_5337_int = 522197; // 0x279d MovI
	var_5338_float = var_5334_float; // 0x279e Mov
	func_12495(var_5335_int, var_5336_int, var_5337_int, var_5338_float); // 0x279f NEW_2
	var_5333_int = var_5335_int; // 0x27a0 Mov
	return 0; // 0x27a2 Return
}


func_5026(var_1249_int, var_1250_int, var_1251_object, var_1252_object, var_1253_object, var_1254_object)
{
	var_1255_int = 0; // 0x13a3 PushI
	var_1256_bool = var_1250_int == var_1255_int; // 0x13a4 Eq
	if(var_1256_bool == 0) goto Label_5066; // 0x13a5 JumpB
	var_1257_int = 0; var_1258_bool = 0; // 0x13a6 PushV
	var_1257_int = 3; // 0x13a7 MovI
	var_1258_bool = 0; // 0x13a8 MovB
	func_802(var_1257_int, var_1258_bool); // 0x13a9 NEW_2
	var_1259_int = 0; var_1260_bool = 0; var_1261_int = 0; // 0x13ab PushV
	var_1259_int = 3; // 0x13ac MovI
	var_1260_bool = 0; // 0x13ad MovB
	var_1261_int = 1; // 0x13ae MovI
	func_819(var_1259_int, var_1260_bool, var_1261_int); // 0x13af NEW_2
	var_1262_int = 0; var_1263_int = 0; var_1264_object = Obj(); var_1265_object = Obj(); var_1266_object = Obj(); // 0x13b1 PushV
	var_1262_int = 3; // 0x13b2 MovI
	var_1263_int = var_1249_int; // 0x13b3 Mov
	var_1264_object = var_1251_object; // 0x13b4 Mov
	var_1265_object = var_1252_object; // 0x13b5 Mov
	var_1266_object = var_1253_object; // 0x13b6 Mov
	func_628(var_1263_int, var_1264_object, var_1265_object, var_1266_object); // 0x13b7 NEW_2
	var_1267_object = Obj(); var_1268_int = 0; // 0x13b9 PushV
	var_1267_object = var_1254_object; // 0x13ba Mov
	var_1268_int = 0; // 0x13bb MovI
	func_311(var_1268_int); // 0x13bc NEW_2
	var_1269_int = 0; var_1270_bool = 0; var_1271_int = 0; // 0x13be PushV
	var_1269_int = 3; // 0x13bf MovI
	var_1270_bool = 0; // 0x13c0 MovB
	var_1271_int = 7; // 0x13c1 MovI
	func_876(var_1269_int, var_1270_bool, var_1271_int); // 0x13c2 NEW_2
	var_1272_int = 0; var_1273_bool = 0; var_1274_int = 0; // 0x13c4 PushV
	var_1272_int = 3; // 0x13c5 MovI
	var_1273_bool = 0; // 0x13c6 MovB
	var_1274_int = 7; // 0x13c7 MovI
	func_938(var_1272_int, var_1273_bool, var_1274_int); // 0x13c8 NEW_2
	
Label_5066:
	var_1275_int = 0; var_1276_int = 0; // 0x13ca PushV
	var_1275_int = 3; // 0x13cb MovI
	var_1276_int = var_1250_int; // 0x13cc Mov
	func_989(var_1275_int, var_1276_int); // 0x13cd NEW_2
	var_1292_int = 0; var_1293_int = 0; var_1294_int = 0; // 0x13cf PushV
	var_1292_int = 3; // 0x13d0 MovI
	var_1293_int = var_1249_int; // 0x13d1 Mov
	var_1294_int = var_1250_int; // 0x13d2 Mov
	func_1903(var_1292_int, var_1293_int, var_1294_int); // 0x13d3 NEW_2
	return 0; // 0x13d5 Return
}


func_12195(var_4677_bool)
{
	var_4680_int = 0; var_4681_string = ""; // 0x2fa4 PushV
	var_4681_string = "d9ViktorVisit"; // 0x2fa5 MovS
	func_138(var_4680_int, var_4681_string); // 0x2fa6 NEW_2
	var_4682_int = 0; // 0x2fa8 PushI
	var_4683_bool = var_4680_int != var_4682_int; // 0x2fa9 Neq
	if(var_4683_bool == 0) goto Label_12205; // 0x2faa JumpB
	var_4677_bool = 1; // 0x2fab MovB
	return 0; // 0x2fac Return
	
Label_12205:
	var_4677_bool = 0; // 0x2fad MovB
	return 0; // 0x2fae Return
}


func_10147(var_4869_int, var_4870_float)
{
	var_4871_int = 0; var_4872_int = 0; var_4873_int = 0; var_4874_float = 0; // 0x27a4 PushV
	var_4872_int = 538398; // 0x27a5 MovI
	var_4873_int = 538397; // 0x27a6 MovI
	var_4874_float = var_4870_float; // 0x27a7 Mov
	func_12495(var_4871_int, var_4872_int, var_4873_int, var_4874_float); // 0x27a8 NEW_2
	var_4869_int = var_4871_int; // 0x27a9 Mov
	return 0; // 0x27ab Return
}


func_938(var_687_int, var_688_bool, var_689_int)
{
	var_690_string = ""; var_691_object = Obj(); var_692_object = Obj(); var_693_int = 0; var_694_string = ""; var_695_object = Obj(); var_696_string = ""; var_697_object = Obj(); var_698_object = Obj(); var_699_int = 0; var_700_string = ""; var_701_object = Obj(); // 0x3aa PushV
	var_702_string = "dr_mark"; // 0x3ab PushS
	var_703_int = 1; // 0x3ac PushI
	var_704_int = var_687_int + var_703_int; // 0x3ad Add
	var_696_string = var_702_string + var_704_int; // 0x3ae Add2
	var_705_string = "br_"; // 0x3af PushS
	var_706_int = 1; // 0x3b0 PushI
	var_707_int = var_687_int + var_706_int; // 0x3b1 Add
	var_708_int = var_705_string + var_707_int; // 0x3b2 Add
	FindActor(var_697_object, var_708_int); // 0x3b3 Func
	var_709_bool = var_688_bool; // 0x3b5 Push
	if(var_709_bool == 0) goto Label_964; // 0x3b6 JumpB
	var_710_bool = var_697_object == 0; // 0x3b7 Not
	if(var_710_bool == 0) goto Label_963; // 0x3b8 JumpB
	GetMainOutdoorScene(var_698_object); // 0x3b9 Func
	var_711_string = "br_"; // 0x3bb PushS
	var_712_int = 1; // 0x3bc PushI
	var_713_int = var_687_int + var_712_int; // 0x3bd Add
	var_714_int = var_711_string + var_713_int; // 0x3be Add
	var_715_cvector = CVector(0.0, 0.0, 0.0); // 0x3bf PushVec
	AddActor(var_697_object, var_714_int, var_698_object, var_715_cvector); // 0x3c0 Func
	var_698_object = 0; // 0x3c2 SetNull
	
Label_963:
	goto Label_968; // 0x3c3 Jump
	
Label_968:
	var_699_int = 1; // 0x3c8 MovI
	
Label_969:
	var_716_bool = var_699_int <= var_689_int; // 0x3c9 LE
	if(var_716_bool == 0) goto Label_987; // 0x3ca JumpB
	var_717_string = "_"; // 0x3cb PushS
	var_718_int = var_696_string + var_717_string; // 0x3cc Add
	var_700_string = var_718_int + var_699_int; // 0x3cd Add2
	FindActor(var_701_object, var_700_string); // 0x3ce Func
	var_719_object = var_701_object; // 0x3d0 Push
	if(var_719_object == 0) goto Label_983; // 0x3d1 JumpB
	var_720_bool = 0; var_721_string = ""; var_722_string = ""; // 0x3d2 PushV
	var_721_string = var_700_string; // 0x3d3 Mov
	var_722_string = "cleanup"; // 0x3d4 MovS
	func_245(var_720_bool, var_721_string, var_722_string); // 0x3d5 NEW_2
	
Label_983:
	var_701_object = 0; // 0x3d7 SetNull
	var_723_int = 1; // 0x3d8 PushI
	var_699_int = var_699_int + var_723_int; // 0x3d9 Add2
	goto Label_969; // 0x3da Jump
	
Label_987:
	return 12; // 0x3db Return
	
Label_964:
	var_724_object = var_697_object; // 0x3c4 Push
	if(var_724_object == 0) goto Label_968; // 0x3c5 JumpB
	RemoveActor(var_697_object); // 0x3c6 Func
}


func_10156(var_4716_int, var_4717_float)
{
	var_4718_int = 0; var_4719_int = 0; var_4720_int = 0; var_4721_float = 0; // 0x27ad PushV
	var_4719_int = 538400; // 0x27ae MovI
	var_4720_int = 538399; // 0x27af MovI
	var_4721_float = var_4717_float; // 0x27b0 Mov
	func_12495(var_4718_int, var_4719_int, var_4720_int, var_4721_float); // 0x27b1 NEW_2
	var_4716_int = var_4718_int; // 0x27b2 Mov
	return 0; // 0x27b4 Return
}


func_12207(var_4804_bool)
{
	var_4807_int = 0; var_4808_string = ""; // 0x2fb0 PushV
	var_4808_string = "d2q03RepDown"; // 0x2fb1 MovS
	func_138(var_4807_int, var_4808_string); // 0x2fb2 NEW_2
	var_4809_int = 0; // 0x2fb4 PushI
	var_4810_bool = var_4807_int != var_4809_int; // 0x2fb5 Neq
	if(var_4810_bool == 0) goto Label_12217; // 0x2fb6 JumpB
	var_4804_bool = 1; // 0x2fb7 MovB
	return 0; // 0x2fb8 Return
	
Label_12217:
	var_4804_bool = 0; // 0x2fb9 MovB
	return 0; // 0x2fba Return
}


func_7092()
{
	var_299_string = "lc_house7_02"; // 0x1bb5 PushS
	add(var_299_string); // 0x1bb6 ObjFunc
	var_300_string = "lc_house7_03"; // 0x1bb8 PushS
	add(var_300_string); // 0x1bb9 ObjFunc
	var_301_string = "lc_house7_04"; // 0x1bbb PushS
	add(var_301_string); // 0x1bbc ObjFunc
	var_302_string = "lc_house7_05"; // 0x1bbe PushS
	add(var_302_string); // 0x1bbf ObjFunc
	var_303_string = "lc_house7_06"; // 0x1bc1 PushS
	add(var_303_string); // 0x1bc2 ObjFunc
	var_304_string = "lc_house7_07"; // 0x1bc4 PushS
	add(var_304_string); // 0x1bc5 ObjFunc
	var_305_string = "lc_House6_02"; // 0x1bc7 PushS
	add(var_305_string); // 0x1bc8 ObjFunc
	var_306_string = "lc_house7_01"; // 0x1bca PushS
	add(var_306_string); // 0x1bcb ObjFunc
	var_307_string = "lc_house_2_02"; // 0x1bcd PushS
	add(var_307_string); // 0x1bce ObjFunc
	var_308_string = "lc_House6_01"; // 0x1bd0 PushS
	add(var_308_string); // 0x1bd1 ObjFunc
	var_309_string = "lc_house3_03_i2"; // 0x1bd3 PushS
	add(var_309_string); // 0x1bd4 ObjFunc
	var_310_string = "lc_house3_03"; // 0x1bd6 PushS
	add(var_310_string); // 0x1bd7 ObjFunc
	var_311_string = "lc_House6_03"; // 0x1bd9 PushS
	add(var_311_string); // 0x1bda ObjFunc
	var_312_string = "lc_House6_04"; // 0x1bdc PushS
	add(var_312_string); // 0x1bdd ObjFunc
	return 0; // 0x1bdf Return
}


func_6068()
{
	var_211_string = "r3_house_2_02"; // 0x17b5 PushS
	add(var_211_string); // 0x17b6 ObjFunc
	var_212_string = "r3_house3_02_i2"; // 0x17b8 PushS
	add(var_212_string); // 0x17b9 ObjFunc
	var_213_string = "r3_house3_02"; // 0x17bb PushS
	add(var_213_string); // 0x17bc ObjFunc
	var_214_string = "r3_house4_05_i2"; // 0x17be PushS
	add(var_214_string); // 0x17bf ObjFunc
	var_215_string = "r3_house4_05"; // 0x17c1 PushS
	add(var_215_string); // 0x17c2 ObjFunc
	var_216_string = "r3_house4_03_i2"; // 0x17c4 PushS
	add(var_216_string); // 0x17c5 ObjFunc
	var_217_string = "r3_house4_04_i2"; // 0x17c7 PushS
	add(var_217_string); // 0x17c8 ObjFunc
	var_218_string = "r3_house4_04"; // 0x17ca PushS
	add(var_218_string); // 0x17cb ObjFunc
	var_219_string = "r3_house4_01_i2"; // 0x17cd PushS
	add(var_219_string); // 0x17ce ObjFunc
	var_220_string = "r3_house4_01"; // 0x17d0 PushS
	add(var_220_string); // 0x17d1 ObjFunc
	var_221_string = "r3_house_2_01"; // 0x17d3 PushS
	add(var_221_string); // 0x17d4 ObjFunc
	var_222_string = "r3_house4_02_i2"; // 0x17d6 PushS
	add(var_222_string); // 0x17d7 ObjFunc
	var_223_string = "r3_house4_02"; // 0x17d9 PushS
	add(var_223_string); // 0x17da ObjFunc
	var_224_string = "r3_house3_01_i2"; // 0x17dc PushS
	add(var_224_string); // 0x17dd ObjFunc
	var_225_string = "r3_house3_01"; // 0x17df PushS
	add(var_225_string); // 0x17e0 ObjFunc
	return 0; // 0x17e2 Return
}


func_10165(var_5565_int, var_5566_float)
{
	var_5567_int = 0; var_5568_int = 0; var_5569_int = 0; var_5570_float = 0; // 0x27b6 PushV
	var_5568_int = 515303; // 0x27b7 MovI
	var_5569_int = 515302; // 0x27b8 MovI
	var_5570_float = var_5566_float; // 0x27b9 Mov
	func_12495(var_5567_int, var_5568_int, var_5569_int, var_5570_float); // 0x27ba NEW_2
	var_5565_int = var_5567_int; // 0x27bb Mov
	return 0; // 0x27bd Return
}


func_12219(var_5192_bool, var_5193_object)
{
	var_5195_bool = 0; var_5196_object = Obj(); // 0x2fbc PushV
	var_5196_object = var_5193_object; // 0x2fbd Mov
	func_12421(var_5196_object); // 0x2fbe NEW_2
	if(var_5195_bool == 0) goto Label_12227; // 0x2fc0 JumpB
	var_5192_bool = 1; // 0x2fc1 MovB
	return 0; // 0x2fc2 Return
	
Label_12227:
	var_5192_bool = 0; // 0x2fc3 MovB
	return 0; // 0x2fc4 Return
}


func_10174(var_5595_int, var_5596_float)
{
	var_5597_int = 0; var_5598_int = 0; var_5599_int = 0; var_5600_float = 0; // 0x27bf PushV
	var_5598_int = 502851; // 0x27c0 MovI
	var_5599_int = 502850; // 0x27c1 MovI
	var_5600_float = var_5596_float; // 0x27c2 Mov
	func_12495(var_5597_int, var_5598_int, var_5599_int, var_5600_float); // 0x27c3 NEW_2
	var_5595_int = var_5597_int; // 0x27c4 Mov
	return 0; // 0x27c6 Return
}


func_9157(var_502_int, var_503_int, var_504_int)
{
	var_505_object = Obj(); var_506_object = Obj(); var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj(); var_510_object = Obj(); var_511_object = Obj(); var_512_object = Obj(); // 0x23c5 PushV
	var_513_object = GlobalVars[8]; // 0x23c6 PushGE
	get(var_509_object, var_502_int); // 0x23c7 ObjFunc
	var_514_object = GlobalVars[9]; // 0x23c9 PushGE
	get(var_510_object, var_502_int); // 0x23ca ObjFunc
	var_515_object = GlobalVars[10]; // 0x23cc PushGE
	get(var_511_object, var_502_int); // 0x23cd ObjFunc
	var_516_object = GlobalVars[13]; // 0x23cf PushGE
	get(var_512_object, var_502_int); // 0x23d0 ObjFunc
	var_517_int = 0; // 0x23d2 PushI
	var_518_bool = var_502_int == var_517_int; // 0x23d3 Eq
	if(var_518_bool == 0) goto Label_9183; // 0x23d4 JumpB
	var_519_int = 0; var_520_int = 0; var_521_object = Obj(); var_522_object = Obj(); var_523_object = Obj(); var_524_object = Obj(); // 0x23d5 PushV
	var_519_int = var_503_int; // 0x23d6 Mov
	var_520_int = var_504_int; // 0x23d7 Mov
	var_521_object = var_509_object; // 0x23d8 Mov
	var_522_object = var_510_object; // 0x23d9 Mov
	var_523_object = var_511_object; // 0x23da Mov
	var_524_object = var_512_object; // 0x23db Mov
	func_4393(var_519_int, var_520_int, var_521_object, var_522_object, var_523_object, var_524_object); // 0x23dc NEW_2
	goto Label_9377; // 0x23de Jump
	
Label_9377:
	return 8; // 0x24a1 Return
	
Label_9183:
	var_885_int = 1; // 0x23df PushI
	var_886_bool = var_502_int == var_885_int; // 0x23e0 Eq
	if(var_886_bool == 0) goto Label_9196; // 0x23e1 JumpB
	var_887_int = 0; var_888_int = 0; var_889_object = Obj(); var_890_object = Obj(); var_891_object = Obj(); var_892_object = Obj(); // 0x23e2 PushV
	var_887_int = var_503_int; // 0x23e3 Mov
	var_888_int = var_504_int; // 0x23e4 Mov
	var_889_object = var_509_object; // 0x23e5 Mov
	var_890_object = var_510_object; // 0x23e6 Mov
	var_891_object = var_511_object; // 0x23e7 Mov
	var_892_object = var_512_object; // 0x23e8 Mov
	func_4590(var_887_int, var_888_int, var_889_object, var_890_object, var_891_object, var_892_object); // 0x23e9 NEW_2
	goto Label_9377; // 0x23eb Jump
	
Label_9196:
	var_1028_int = 2; // 0x23ec PushI
	var_1029_bool = var_502_int == var_1028_int; // 0x23ed Eq
	if(var_1029_bool == 0) goto Label_9209; // 0x23ee JumpB
	var_1030_int = 0; var_1031_int = 0; var_1032_object = Obj(); var_1033_object = Obj(); var_1034_object = Obj(); var_1035_object = Obj(); // 0x23ef PushV
	var_1030_int = var_503_int; // 0x23f0 Mov
	var_1031_int = var_504_int; // 0x23f1 Mov
	var_1032_object = var_509_object; // 0x23f2 Mov
	var_1033_object = var_510_object; // 0x23f3 Mov
	var_1034_object = var_511_object; // 0x23f4 Mov
	var_1035_object = var_512_object; // 0x23f5 Mov
	func_4796(var_1030_int, var_1031_int, var_1032_object, var_1033_object, var_1034_object, var_1035_object); // 0x23f6 NEW_2
	goto Label_9377; // 0x23f8 Jump
	
Label_9209:
	var_1247_int = 3; // 0x23f9 PushI
	var_1248_bool = var_502_int == var_1247_int; // 0x23fa Eq
	if(var_1248_bool == 0) goto Label_9222; // 0x23fb JumpB
	var_1249_int = 0; var_1250_int = 0; var_1251_object = Obj(); var_1252_object = Obj(); var_1253_object = Obj(); var_1254_object = Obj(); // 0x23fc PushV
	var_1249_int = var_503_int; // 0x23fd Mov
	var_1250_int = var_504_int; // 0x23fe Mov
	var_1251_object = var_509_object; // 0x23ff Mov
	var_1252_object = var_510_object; // 0x2400 Mov
	var_1253_object = var_511_object; // 0x2401 Mov
	var_1254_object = var_512_object; // 0x2402 Mov
	func_5026(var_1249_int, var_1250_int, var_1251_object, var_1252_object, var_1253_object, var_1254_object); // 0x2403 NEW_2
	goto Label_9377; // 0x2405 Jump
	
Label_9222:
	var_1295_int = 4; // 0x2406 PushI
	var_1296_bool = var_502_int == var_1295_int; // 0x2407 Eq
	if(var_1296_bool == 0) goto Label_9235; // 0x2408 JumpB
	var_1297_int = 0; var_1298_int = 0; var_1299_object = Obj(); var_1300_object = Obj(); var_1301_object = Obj(); var_1302_object = Obj(); // 0x2409 PushV
	var_1297_int = var_503_int; // 0x240a Mov
	var_1298_int = var_504_int; // 0x240b Mov
	var_1299_object = var_509_object; // 0x240c Mov
	var_1300_object = var_510_object; // 0x240d Mov
	var_1301_object = var_511_object; // 0x240e Mov
	var_1302_object = var_512_object; // 0x240f Mov
	func_5244(var_1297_int, var_1298_int, var_1299_object, var_1300_object, var_1301_object, var_1302_object); // 0x2410 NEW_2
	goto Label_9377; // 0x2412 Jump
	
Label_9235:
	var_1340_int = 5; // 0x2413 PushI
	var_1341_bool = var_502_int == var_1340_int; // 0x2414 Eq
	if(var_1341_bool == 0) goto Label_9248; // 0x2415 JumpB
	var_1342_int = 0; var_1343_int = 0; var_1344_object = Obj(); var_1345_object = Obj(); var_1346_object = Obj(); var_1347_object = Obj(); // 0x2416 PushV
	var_1342_int = var_503_int; // 0x2417 Mov
	var_1343_int = var_504_int; // 0x2418 Mov
	var_1344_object = var_509_object; // 0x2419 Mov
	var_1345_object = var_510_object; // 0x241a Mov
	var_1346_object = var_511_object; // 0x241b Mov
	var_1347_object = var_512_object; // 0x241c Mov
	func_5489(var_1342_int, var_1343_int, var_1344_object, var_1345_object, var_1346_object, var_1347_object); // 0x241d NEW_2
	goto Label_9377; // 0x241f Jump
	
Label_9248:
	var_1373_int = 6; // 0x2420 PushI
	var_1374_bool = var_502_int == var_1373_int; // 0x2421 Eq
	if(var_1374_bool == 0) goto Label_9261; // 0x2422 JumpB
	var_1375_int = 0; var_1376_int = 0; var_1377_object = Obj(); var_1378_object = Obj(); var_1379_object = Obj(); var_1380_object = Obj(); // 0x2423 PushV
	var_1375_int = var_503_int; // 0x2424 Mov
	var_1376_int = var_504_int; // 0x2425 Mov
	var_1377_object = var_509_object; // 0x2426 Mov
	var_1378_object = var_510_object; // 0x2427 Mov
	var_1379_object = var_511_object; // 0x2428 Mov
	var_1380_object = var_512_object; // 0x2429 Mov
	func_5647(var_1380_object); // 0x242a NEW_2
	goto Label_9377; // 0x242c Jump
	
Label_9261:
	var_1383_int = 7; // 0x242d PushI
	var_1384_bool = var_502_int == var_1383_int; // 0x242e Eq
	if(var_1384_bool == 0) goto Label_9274; // 0x242f JumpB
	var_1385_int = 0; var_1386_int = 0; var_1387_object = Obj(); var_1388_object = Obj(); var_1389_object = Obj(); var_1390_object = Obj(); // 0x2430 PushV
	var_1385_int = var_503_int; // 0x2431 Mov
	var_1386_int = var_504_int; // 0x2432 Mov
	var_1387_object = var_509_object; // 0x2433 Mov
	var_1388_object = var_510_object; // 0x2434 Mov
	var_1389_object = var_511_object; // 0x2435 Mov
	var_1390_object = var_512_object; // 0x2436 Mov
	func_5712(var_1385_int, var_1386_int, var_1387_object, var_1388_object, var_1389_object, var_1390_object); // 0x2437 NEW_2
	goto Label_9377; // 0x2439 Jump
	
Label_9274:
	var_1570_int = 8; // 0x243a PushI
	var_1571_bool = var_502_int == var_1570_int; // 0x243b Eq
	if(var_1571_bool == 0) goto Label_9287; // 0x243c JumpB
	var_1572_int = 0; var_1573_int = 0; var_1574_object = Obj(); var_1575_object = Obj(); var_1576_object = Obj(); var_1577_object = Obj(); // 0x243d PushV
	var_1572_int = var_503_int; // 0x243e Mov
	var_1573_int = var_504_int; // 0x243f Mov
	var_1574_object = var_509_object; // 0x2440 Mov
	var_1575_object = var_510_object; // 0x2441 Mov
	var_1576_object = var_511_object; // 0x2442 Mov
	var_1577_object = var_512_object; // 0x2443 Mov
	func_5912(var_1572_int, var_1573_int, var_1574_object, var_1575_object, var_1576_object, var_1577_object); // 0x2444 NEW_2
	goto Label_9377; // 0x2446 Jump
	
Label_9287:
	var_1603_int = 9; // 0x2447 PushI
	var_1604_bool = var_502_int == var_1603_int; // 0x2448 Eq
	if(var_1604_bool == 0) goto Label_9300; // 0x2449 JumpB
	var_1605_int = 0; var_1606_int = 0; var_1607_object = Obj(); var_1608_object = Obj(); var_1609_object = Obj(); var_1610_object = Obj(); // 0x244a PushV
	var_1605_int = var_503_int; // 0x244b Mov
	var_1606_int = var_504_int; // 0x244c Mov
	var_1607_object = var_509_object; // 0x244d Mov
	var_1608_object = var_510_object; // 0x244e Mov
	var_1609_object = var_511_object; // 0x244f Mov
	var_1610_object = var_512_object; // 0x2450 Mov
	func_6115(var_1605_int, var_1606_int, var_1607_object, var_1608_object, var_1609_object, var_1610_object); // 0x2451 NEW_2
	goto Label_9377; // 0x2453 Jump
	
Label_9300:
	var_1636_int = 10; // 0x2454 PushI
	var_1637_bool = var_502_int == var_1636_int; // 0x2455 Eq
	if(var_1637_bool == 0) goto Label_9313; // 0x2456 JumpB
	var_1638_int = 0; var_1639_int = 0; var_1640_object = Obj(); var_1641_object = Obj(); var_1642_object = Obj(); var_1643_object = Obj(); // 0x2457 PushV
	var_1638_int = var_503_int; // 0x2458 Mov
	var_1639_int = var_504_int; // 0x2459 Mov
	var_1640_object = var_509_object; // 0x245a Mov
	var_1641_object = var_510_object; // 0x245b Mov
	var_1642_object = var_511_object; // 0x245c Mov
	var_1643_object = var_512_object; // 0x245d Mov
	func_6324(var_1638_int, var_1639_int, var_1640_object, var_1641_object, var_1642_object, var_1643_object); // 0x245e NEW_2
	goto Label_9377; // 0x2460 Jump
	
Label_9313:
	var_1669_int = 11; // 0x2461 PushI
	var_1670_bool = var_502_int == var_1669_int; // 0x2462 Eq
	if(var_1670_bool == 0) goto Label_9326; // 0x2463 JumpB
	var_1671_int = 0; var_1672_int = 0; var_1673_object = Obj(); var_1674_object = Obj(); var_1675_object = Obj(); var_1676_object = Obj(); // 0x2464 PushV
	var_1671_int = var_503_int; // 0x2465 Mov
	var_1672_int = var_504_int; // 0x2466 Mov
	var_1673_object = var_509_object; // 0x2467 Mov
	var_1674_object = var_510_object; // 0x2468 Mov
	var_1675_object = var_511_object; // 0x2469 Mov
	var_1676_object = var_512_object; // 0x246a Mov
	func_6536(var_1671_int, var_1672_int, var_1673_object, var_1674_object, var_1675_object, var_1676_object); // 0x246b NEW_2
	goto Label_9377; // 0x246d Jump
	
Label_9326:
	var_1702_int = 12; // 0x246e PushI
	var_1703_bool = var_502_int == var_1702_int; // 0x246f Eq
	if(var_1703_bool == 0) goto Label_9339; // 0x2470 JumpB
	var_1704_int = 0; var_1705_int = 0; var_1706_object = Obj(); var_1707_object = Obj(); var_1708_object = Obj(); var_1709_object = Obj(); // 0x2471 PushV
	var_1704_int = var_503_int; // 0x2472 Mov
	var_1705_int = var_504_int; // 0x2473 Mov
	var_1706_object = var_509_object; // 0x2474 Mov
	var_1707_object = var_510_object; // 0x2475 Mov
	var_1708_object = var_511_object; // 0x2476 Mov
	var_1709_object = var_512_object; // 0x2477 Mov
	func_6733(var_1704_int, var_1705_int, var_1706_object, var_1707_object, var_1708_object, var_1709_object); // 0x2478 NEW_2
	goto Label_9377; // 0x247a Jump
	
Label_9339:
	var_1735_int = 13; // 0x247b PushI
	var_1736_bool = var_502_int == var_1735_int; // 0x247c Eq
	if(var_1736_bool == 0) goto Label_9352; // 0x247d JumpB
	var_1737_int = 0; var_1738_int = 0; var_1739_object = Obj(); var_1740_object = Obj(); var_1741_object = Obj(); var_1742_object = Obj(); // 0x247e PushV
	var_1737_int = var_503_int; // 0x247f Mov
	var_1738_int = var_504_int; // 0x2480 Mov
	var_1739_object = var_509_object; // 0x2481 Mov
	var_1740_object = var_510_object; // 0x2482 Mov
	var_1741_object = var_511_object; // 0x2483 Mov
	var_1742_object = var_512_object; // 0x2484 Mov
	func_6936(var_1737_int, var_1738_int, var_1739_object, var_1740_object, var_1741_object, var_1742_object); // 0x2485 NEW_2
	goto Label_9377; // 0x2487 Jump
	
Label_9352:
	var_1768_int = 14; // 0x2488 PushI
	var_1769_bool = var_502_int == var_1768_int; // 0x2489 Eq
	if(var_1769_bool == 0) goto Label_9365; // 0x248a JumpB
	var_1770_int = 0; var_1771_int = 0; var_1772_object = Obj(); var_1773_object = Obj(); var_1774_object = Obj(); var_1775_object = Obj(); // 0x248b PushV
	var_1770_int = var_503_int; // 0x248c Mov
	var_1771_int = var_504_int; // 0x248d Mov
	var_1772_object = var_509_object; // 0x248e Mov
	var_1773_object = var_510_object; // 0x248f Mov
	var_1774_object = var_511_object; // 0x2490 Mov
	var_1775_object = var_512_object; // 0x2491 Mov
	func_7136(var_1770_int, var_1771_int, var_1772_object, var_1773_object, var_1774_object, var_1775_object); // 0x2492 NEW_2
	goto Label_9377; // 0x2494 Jump
	
Label_9365:
	var_1946_int = 15; // 0x2495 PushI
	var_1947_bool = var_502_int == var_1946_int; // 0x2496 Eq
	if(var_1947_bool == 0) goto Label_9377; // 0x2497 JumpB
	var_1948_int = 0; var_1949_int = 0; var_1950_object = Obj(); var_1951_object = Obj(); var_1952_object = Obj(); var_1953_object = Obj(); // 0x2498 PushV
	var_1948_int = var_503_int; // 0x2499 Mov
	var_1949_int = var_504_int; // 0x249a Mov
	var_1950_object = var_509_object; // 0x249b Mov
	var_1951_object = var_510_object; // 0x249c Mov
	var_1952_object = var_511_object; // 0x249d Mov
	var_1953_object = var_512_object; // 0x249e Mov
	func_7318(var_1948_int, var_1949_int, var_1950_object, var_1951_object, var_1952_object, var_1953_object); // 0x249f NEW_2
}


func_12229(var_6359_bool)
{
	var_6362_int = 0; var_6363_string = ""; // 0x2fc6 PushV
	var_6363_string = "d1q01KaterinaUHave1day"; // 0x2fc7 MovS
	func_138(var_6362_int, var_6363_string); // 0x2fc8 NEW_2
	var_6364_int = 1; // 0x2fca PushI
	var_6365_bool = var_6362_int == var_6364_int; // 0x2fcb Eq
	if(var_6365_bool == 0) goto Label_12239; // 0x2fcc JumpB
	var_6359_bool = 1; // 0x2fcd MovB
	return 0; // 0x2fce Return
	
Label_12239:
	var_6359_bool = 0; // 0x2fcf MovB
	return 0; // 0x2fd0 Return
}


func_10183(var_5309_int, var_5310_float)
{
	var_5311_int = 0; var_5312_int = 0; var_5313_int = 0; var_5314_float = 0; // 0x27c8 PushV
	var_5312_int = 532895; // 0x27c9 MovI
	var_5313_int = 532894; // 0x27ca MovI
	var_5314_float = var_5310_float; // 0x27cb Mov
	func_12495(var_5311_int, var_5312_int, var_5313_int, var_5314_float); // 0x27cc NEW_2
	var_5309_int = var_5311_int; // 0x27cd Mov
	return 0; // 0x27cf Return
}


func_4041(var_3249_int, var_3250_int, var_3251_int)
{
	var_3252_int = 0; var_3253_int = 0; var_3254_int = 0; var_3255_int = 0; var_3256_int = 0; var_3257_int = 0; var_3258_int = 0; var_3259_int = 0; // 0xfc9 PushV
	var_3260_bool = 0; // 0xfca PushV
	var_3260_bool = 0; // 0xfcb MovB
	var_3261_int = 8; // 0xfcc PushI
	var_3262_bool = var_3251_int > var_3261_int; // 0xfcd GT
	if(var_3262_bool == 0) goto Label_4051; // 0xfce JumpB
	var_3263_int = 21; // 0xfcf PushI
	var_3264_bool = var_3251_int < var_3263_int; // 0xfd0 LT
	if(var_3264_bool == 0) goto Label_4051; // 0xfd1 JumpB
	var_3260_bool = 1; // 0xfd2 MovB
	
Label_4051:
	if(var_3260_bool == 0) goto Label_4128; // 0xfd3 JumpB
	var_3265_int = 0; var_3266_string = ""; var_3267_string = ""; var_3268_int = 0; // 0xfd4 PushV
	var_3265_int = var_3249_int; // 0xfd5 Mov
	var_3266_string = "pers_rat"; // 0xfd6 MovS
	var_3267_string = "rat.xml"; // 0xfd7 MovS
	var_3268_int = 4; // 0xfd8 MovI
	func_509(var_3265_int, var_3266_string, var_3267_string, var_3268_int); // 0xfd9 NEW_2
	var_3269_int = 0; var_3270_string = ""; var_3271_string = ""; var_3272_int = 0; // 0xfdb PushV
	var_3269_int = var_3249_int; // 0xfdc Mov
	var_3270_string = "pers_alkash"; // 0xfdd MovS
	var_3271_string = "alkash.xml"; // 0xfde MovS
	var_3272_int = 2; // 0xfdf MovI
	func_509(var_3269_int, var_3270_string, var_3271_string, var_3272_int); // 0xfe0 NEW_2
	var_3273_int = 0; var_3274_string = ""; var_3275_string = ""; var_3276_int = 0; // 0xfe2 PushV
	var_3273_int = var_3249_int; // 0xfe3 Mov
	var_3274_string = "pers_dohodyaga"; // 0xfe4 MovS
	var_3275_string = "dohodyaga.xml"; // 0xfe5 MovS
	var_3276_int = 1; // 0xfe6 MovI
	func_509(var_3273_int, var_3274_string, var_3275_string, var_3276_int); // 0xfe7 NEW_2
	var_3277_int = 2; // 0xfe9 PushI
	var_3278_float = 0; var_3279_int = 0; // 0xfea PushV
	var_3279_int = var_3250_int; // 0xfeb Mov
	func_1171(var_3278_float, var_3279_int); // 0xfec NEW_2
	var_3256_int = var_3277_int * var_3278_float; // 0xfee Mult2
	var_3324_int = var_3256_int; // 0xfef Push
	if(var_3324_int == 0) goto Label_4088; // 0xff0 JumpB
	var_3325_int = 0; var_3326_string = ""; var_3327_string = ""; var_3328_int = 0; // 0xff1 PushV
	var_3325_int = var_3249_int; // 0xff2 Mov
	var_3326_string = "pers_grabitel"; // 0xff3 MovS
	var_3327_string = "grabitel.xml"; // 0xff4 MovS
	var_3328_int = var_3256_int; // 0xff5 Mov
	func_509(var_3325_int, var_3326_string, var_3327_string, var_3328_int); // 0xff6 NEW_2
	
Label_4088:
	var_3329_int = 1; // 0xff8 PushI
	var_3330_int = var_3250_int + var_3329_int; // 0xff9 Add
	var_3331_int = 2; // 0xffa PushI
	var_3332_bool = var_3330_int >= var_3331_int; // 0xffb GE
	if(var_3332_bool == 0) goto Label_4112; // 0xffc JumpB
	var_3333_int = 0; var_3334_string = ""; var_3335_string = ""; var_3336_int = 0; // 0xffd PushV
	var_3333_int = var_3249_int; // 0xffe Mov
	var_3334_string = "pers_patrool"; // 0xfff MovS
	var_3335_string = "patrol.xml"; // 0x1000 MovS
	var_3336_int = 2; // 0x1001 MovI
	func_509(var_3333_int, var_3334_string, var_3335_string, var_3336_int); // 0x1002 NEW_2
	var_3337_bool = 0; var_3338_int = 0; // 0x1004 PushV
	var_3338_int = var_3250_int; // 0x1005 Mov
	func_1378(var_3337_bool, var_3338_int); // 0x1006 NEW_2
	if(var_3337_bool == 0) goto Label_4112; // 0x1008 JumpB
	var_3339_int = 0; var_3340_string = ""; var_3341_string = ""; var_3342_int = 0; // 0x1009 PushV
	var_3339_int = var_3249_int; // 0x100a Mov
	var_3340_string = "pers_soldat_hand"; // 0x100b MovS
	var_3341_string = "soldier_patrol.xml"; // 0x100c MovS
	var_3342_int = 1; // 0x100d MovI
	func_509(var_3339_int, var_3340_string, var_3341_string, var_3342_int); // 0x100e NEW_2
	
Label_4112:
	var_3343_int = 1; // 0x1010 PushI
	var_3344_float = 0; var_3345_int = 0; // 0x1011 PushV
	var_3345_int = var_3250_int; // 0x1012 Mov
	func_1261(var_3344_float, var_3345_int); // 0x1013 NEW_2
	var_3257_int = var_3343_int * var_3344_float; // 0x1015 Mult2
	var_3346_int = var_3257_int; // 0x1016 Push
	if(var_3346_int == 0) goto Label_4127; // 0x1017 JumpB
	var_3347_int = 0; var_3348_string = ""; var_3349_string = ""; var_3350_int = 0; // 0x1018 PushV
	var_3347_int = var_3249_int; // 0x1019 Mov
	var_3348_string = "pers_bomber"; // 0x101a MovS
	var_3349_string = "bomber.xml"; // 0x101b MovS
	var_3350_int = var_3257_int; // 0x101c Mov
	func_509(var_3347_int, var_3348_string, var_3349_string, var_3350_int); // 0x101d NEW_2
	
Label_4127:
	goto Label_4203; // 0x101f Jump
	
Label_4203:
	var_3351_bool = 0; var_3352_int = 0; // 0x106b PushV
	var_3352_int = var_3250_int; // 0x106c Mov
	func_1378(var_3351_bool, var_3352_int); // 0x106d NEW_2
	if(var_3351_bool == 0) goto Label_4215; // 0x106f JumpB
	var_3353_int = 0; var_3354_string = ""; var_3355_string = ""; var_3356_int = 0; // 0x1070 PushV
	var_3353_int = var_3249_int; // 0x1071 Mov
	var_3354_string = "pers_sanitar"; // 0x1072 MovS
	var_3355_string = "sanitar.xml"; // 0x1073 MovS
	var_3356_int = 1; // 0x1074 MovI
	func_509(var_3353_int, var_3354_string, var_3355_string, var_3356_int); // 0x1075 NEW_2
	
Label_4215:
	return 8; // 0x1077 Return
	
Label_4128:
	var_3357_int = 0; var_3358_string = ""; var_3359_string = ""; var_3360_int = 0; // 0x1020 PushV
	var_3357_int = var_3249_int; // 0x1021 Mov
	var_3358_string = "pers_rat"; // 0x1022 MovS
	var_3359_string = "rat.xml"; // 0x1023 MovS
	var_3360_int = 7; // 0x1024 MovI
	func_509(var_3357_int, var_3358_string, var_3359_string, var_3360_int); // 0x1025 NEW_2
	var_3361_int = 0; var_3362_string = ""; var_3363_string = ""; var_3364_int = 0; // 0x1027 PushV
	var_3361_int = var_3249_int; // 0x1028 Mov
	var_3362_string = "pers_alkash"; // 0x1029 MovS
	var_3363_string = "alkash.xml"; // 0x102a MovS
	var_3364_int = 1; // 0x102b MovI
	func_509(var_3361_int, var_3362_string, var_3363_string, var_3364_int); // 0x102c NEW_2
	var_3365_int = 0; var_3366_string = ""; var_3367_string = ""; var_3368_int = 0; // 0x102e PushV
	var_3365_int = var_3249_int; // 0x102f Mov
	var_3366_string = "pers_dohodyaga"; // 0x1030 MovS
	var_3367_string = "dohodyaga.xml"; // 0x1031 MovS
	var_3368_int = 1; // 0x1032 MovI
	func_509(var_3365_int, var_3366_string, var_3367_string, var_3368_int); // 0x1033 NEW_2
	var_3369_int = 2; // 0x1035 PushI
	var_3370_float = 0; var_3371_int = 0; // 0x1036 PushV
	var_3371_int = var_3250_int; // 0x1037 Mov
	func_1171(var_3370_float, var_3371_int); // 0x1038 NEW_2
	var_3258_int = var_3369_int * var_3370_float; // 0x103a Mult2
	var_3372_int = var_3258_int; // 0x103b Push
	if(var_3372_int == 0) goto Label_4164; // 0x103c JumpB
	var_3373_int = 0; var_3374_string = ""; var_3375_string = ""; var_3376_int = 0; // 0x103d PushV
	var_3373_int = var_3249_int; // 0x103e Mov
	var_3374_string = "pers_grabitel"; // 0x103f MovS
	var_3375_string = "grabitel.xml"; // 0x1040 MovS
	var_3376_int = var_3258_int; // 0x1041 Mov
	func_509(var_3373_int, var_3374_string, var_3375_string, var_3376_int); // 0x1042 NEW_2
	
Label_4164:
	var_3377_int = 1; // 0x1044 PushI
	var_3378_int = var_3250_int + var_3377_int; // 0x1045 Add
	var_3379_int = 2; // 0x1046 PushI
	var_3380_bool = var_3378_int >= var_3379_int; // 0x1047 GE
	if(var_3380_bool == 0) goto Label_4188; // 0x1048 JumpB
	var_3381_int = 0; var_3382_string = ""; var_3383_string = ""; var_3384_int = 0; // 0x1049 PushV
	var_3381_int = var_3249_int; // 0x104a Mov
	var_3382_string = "pers_patrool"; // 0x104b MovS
	var_3383_string = "patrol.xml"; // 0x104c MovS
	var_3384_int = 1; // 0x104d MovI
	func_509(var_3381_int, var_3382_string, var_3383_string, var_3384_int); // 0x104e NEW_2
	var_3385_bool = 0; var_3386_int = 0; // 0x1050 PushV
	var_3386_int = var_3250_int; // 0x1051 Mov
	func_1378(var_3385_bool, var_3386_int); // 0x1052 NEW_2
	if(var_3385_bool == 0) goto Label_4188; // 0x1054 JumpB
	var_3387_int = 0; var_3388_string = ""; var_3389_string = ""; var_3390_int = 0; // 0x1055 PushV
	var_3387_int = var_3249_int; // 0x1056 Mov
	var_3388_string = "pers_soldat_hand"; // 0x1057 MovS
	var_3389_string = "soldier_patrol.xml"; // 0x1058 MovS
	var_3390_int = 1; // 0x1059 MovI
	func_509(var_3387_int, var_3388_string, var_3389_string, var_3390_int); // 0x105a NEW_2
	
Label_4188:
	var_3391_int = 1; // 0x105c PushI
	var_3392_float = 0; var_3393_int = 0; // 0x105d PushV
	var_3393_int = var_3250_int; // 0x105e Mov
	func_1261(var_3392_float, var_3393_int); // 0x105f NEW_2
	var_3259_int = var_3391_int * var_3392_float; // 0x1061 Mult2
	var_3394_int = var_3259_int; // 0x1062 Push
	if(var_3394_int == 0) goto Label_4203; // 0x1063 JumpB
	var_3395_int = 0; var_3396_string = ""; var_3397_string = ""; var_3398_int = 0; // 0x1064 PushV
	var_3395_int = var_3249_int; // 0x1065 Mov
	var_3396_string = "pers_bomber"; // 0x1066 MovS
	var_3397_string = "bomber.xml"; // 0x1067 MovS
	var_3398_int = var_3259_int; // 0x1068 Mov
	func_509(var_3395_int, var_3396_string, var_3397_string, var_3398_int); // 0x1069 NEW_2
}


func_10192(var_5368_int, var_5369_float)
{
	var_5370_int = 0; var_5371_int = 0; var_5372_int = 0; var_5373_float = 0; // 0x27d1 PushV
	var_5371_int = 522200; // 0x27d2 MovI
	var_5372_int = 522199; // 0x27d3 MovI
	var_5373_float = var_5369_float; // 0x27d4 Mov
	func_12495(var_5370_int, var_5371_int, var_5372_int, var_5373_float); // 0x27d5 NEW_2
	var_5368_int = var_5370_int; // 0x27d6 Mov
	return 0; // 0x27d8 Return
}


func_12241(var_5959_bool)
{
	var_5962_int = 0; var_5963_string = ""; // 0x2fd2 PushV
	var_5963_string = "d6q03"; // 0x2fd3 MovS
	func_138(var_5962_int, var_5963_string); // 0x2fd4 NEW_2
	var_5964_int = 0; // 0x2fd6 PushI
	var_5965_bool = var_5962_int == var_5964_int; // 0x2fd7 Eq
	if(var_5965_bool == 0) goto Label_12251; // 0x2fd8 JumpB
	var_5959_bool = 1; // 0x2fd9 MovB
	return 0; // 0x2fda Return
	
Label_12251:
	var_5959_bool = 0; // 0x2fdb MovB
	return 0; // 0x2fdc Return
}


func_5078(var_2554_int, var_2555_int, var_2556_object, var_2557_object, var_2558_object, var_2559_object)
{
	var_2560_int = 0; // 0x13d7 PushI
	var_2561_bool = var_2555_int == var_2560_int; // 0x13d8 Eq
	if(var_2561_bool == 0) goto Label_5118; // 0x13d9 JumpB
	var_2562_int = 0; var_2563_bool = 0; // 0x13da PushV
	var_2562_int = 3; // 0x13db MovI
	var_2563_bool = 1; // 0x13dc MovB
	func_802(var_2562_int, var_2563_bool); // 0x13dd NEW_2
	var_2564_int = 0; var_2565_bool = 0; var_2566_int = 0; // 0x13df PushV
	var_2564_int = 3; // 0x13e0 MovI
	var_2565_bool = 1; // 0x13e1 MovB
	var_2566_int = 1; // 0x13e2 MovI
	func_819(var_2564_int, var_2565_bool, var_2566_int); // 0x13e3 NEW_2
	var_2567_int = 0; var_2568_int = 0; var_2569_object = Obj(); var_2570_object = Obj(); var_2571_object = Obj(); // 0x13e5 PushV
	var_2567_int = 3; // 0x13e6 MovI
	var_2568_int = var_2554_int; // 0x13e7 Mov
	var_2569_object = var_2556_object; // 0x13e8 Mov
	var_2570_object = var_2557_object; // 0x13e9 Mov
	var_2571_object = var_2558_object; // 0x13ea Mov
	func_647(var_2567_int, var_2568_int, var_2569_object, var_2570_object, var_2571_object); // 0x13eb NEW_2
	var_2572_object = Obj(); var_2573_int = 0; // 0x13ed PushV
	var_2572_object = var_2559_object; // 0x13ee Mov
	var_2573_int = 1; // 0x13ef MovI
	func_311(var_2573_int); // 0x13f0 NEW_2
	var_2574_int = 0; var_2575_bool = 0; var_2576_int = 0; // 0x13f2 PushV
	var_2574_int = 3; // 0x13f3 MovI
	var_2575_bool = 1; // 0x13f4 MovB
	var_2576_int = 7; // 0x13f5 MovI
	func_876(var_2574_int, var_2575_bool, var_2576_int); // 0x13f6 NEW_2
	var_2577_int = 0; var_2578_bool = 0; var_2579_int = 0; // 0x13f8 PushV
	var_2577_int = 3; // 0x13f9 MovI
	var_2578_bool = 0; // 0x13fa MovB
	var_2579_int = 7; // 0x13fb MovI
	func_938(var_2577_int, var_2578_bool, var_2579_int); // 0x13fc NEW_2
	
Label_5118:
	var_2580_int = 0; var_2581_bool = 0; // 0x13fe PushV
	var_2580_int = 3; // 0x13ff MovI
	var_2581_bool = 0; // 0x1400 MovB
	func_785(var_2580_int, var_2581_bool); // 0x1401 NEW_2
	var_2582_int = 0; var_2583_int = 0; var_2584_int = 0; // 0x1403 PushV
	var_2582_int = 3; // 0x1404 MovI
	var_2583_int = var_2554_int; // 0x1405 Mov
	var_2584_int = var_2555_int; // 0x1406 Mov
	func_2950(var_2582_int, var_2583_int, var_2584_int); // 0x1407 NEW_2
	return 0; // 0x1409 Return
}


func_10201(var_4754_int, var_4755_float)
{
	var_4756_int = 0; var_4757_int = 0; var_4758_int = 0; var_4759_float = 0; // 0x27da PushV
	var_4757_int = 538402; // 0x27db MovI
	var_4758_int = 538401; // 0x27dc MovI
	var_4759_float = var_4755_float; // 0x27dd Mov
	func_12495(var_4756_int, var_4757_int, var_4758_int, var_4759_float); // 0x27de NEW_2
	var_4754_int = var_4756_int; // 0x27df Mov
	return 0; // 0x27e1 Return
}


func_989(var_1275_int, var_1276_int)
{
	var_1277_bool = 0; // 0x3de PushV
	var_1277_bool = 1; // 0x3df MovB
	var_1278_bool = 0; // 0x3e0 PushV
	var_1278_bool = 1; // 0x3e1 MovB
	var_1279_int = 20; // 0x3e2 PushI
	var_1280_bool = var_1276_int >= var_1279_int; // 0x3e3 GE
	if(var_1280_bool == 0) goto Label_1001; // 0x3e4 JumpB
	var_1281_int = 2; // 0x3e5 PushI
	var_1282_bool = var_1276_int < var_1281_int; // 0x3e6 LT
	if(var_1282_bool == 0) goto Label_1001; // 0x3e7 JumpB
	var_1278_bool = 0; // 0x3e8 MovB
	
Label_1001:
	if(var_1278_bool == 0) goto Label_1013; // 0x3e9 JumpB
	var_1283_bool = 0; // 0x3ea PushV
	var_1283_bool = 0; // 0x3eb MovB
	var_1284_int = 6; // 0x3ec PushI
	var_1285_bool = var_1276_int >= var_1284_int; // 0x3ed GE
	if(var_1285_bool == 0) goto Label_1011; // 0x3ee JumpB
	var_1286_int = 10; // 0x3ef PushI
	var_1287_bool = var_1276_int < var_1286_int; // 0x3f0 LT
	if(var_1287_bool == 0) goto Label_1011; // 0x3f1 JumpB
	var_1283_bool = 1; // 0x3f2 MovB
	
Label_1011:
	if(var_1283_bool == 0) goto Label_1013; // 0x3f3 JumpB
	var_1277_bool = 0; // 0x3f4 MovB
	
Label_1013:
	if(var_1277_bool == 0) goto Label_1020; // 0x3f5 JumpB
	var_1288_int = 0; var_1289_bool = 0; // 0x3f6 PushV
	var_1288_int = var_1275_int; // 0x3f7 Mov
	var_1289_bool = 1; // 0x3f8 MovB
	func_785(var_1288_int, var_1289_bool); // 0x3f9 NEW_2
	goto Label_1025; // 0x3fb Jump
	
Label_1025:
	return 0; // 0x401 Return
	
Label_1020:
	var_1290_int = 0; var_1291_bool = 0; // 0x3fc PushV
	var_1290_int = var_1275_int; // 0x3fd Mov
	var_1291_bool = 0; // 0x3fe MovB
	func_785(var_1290_int, var_1291_bool); // 0x3ff NEW_2
}


func_11230()
{
	var_6012_object = Obj(); var_6013_object = Obj(); var_6014_object = Obj(); var_6015_object = Obj(); // 0x2bde PushV
	var_6016_object = Obj(); // 0x2bdf PushV
	func_12503(var_6016_object); // 0x2be0 NEW_2
	var_6014_object = var_6016_object; // 0x2be1 Mov
	var_6017_string = "d4q01BigVladGotoLara"; // 0x2be3 PushS
	FindMark(var_6015_object, var_6017_string); // 0x2be4 ObjFunc
	var_6018_object = var_6015_object; // 0x2be6 Push
	if(var_6018_object == 0) goto Label_11242; // 0x2be7 JumpB
	Remove(); // 0x2be8 ObjFunc
	
Label_11242:
	var_6019_string = "d4q01BigVladGotoSklad"; // 0x2bea PushS
	FindMark(var_6015_object, var_6019_string); // 0x2beb ObjFunc
	var_6020_object = var_6015_object; // 0x2bed Push
	if(var_6020_object == 0) goto Label_11249; // 0x2bee JumpB
	Remove(); // 0x2bef ObjFunc
	
Label_11249:
	var_6021_string = "d4q01BigVladGotoSobor"; // 0x2bf1 PushS
	FindMark(var_6015_object, var_6021_string); // 0x2bf2 ObjFunc
	var_6022_object = var_6015_object; // 0x2bf4 Push
	if(var_6022_object == 0) goto Label_11256; // 0x2bf5 JumpB
	Remove(); // 0x2bf6 ObjFunc
	
Label_11256:
	var_6023_string = "d4q01BigVladGotoTheater"; // 0x2bf8 PushS
	FindMark(var_6015_object, var_6023_string); // 0x2bf9 ObjFunc
	var_6024_object = var_6015_object; // 0x2bfb Push
	if(var_6024_object == 0) goto Label_11263; // 0x2bfc JumpB
	Remove(); // 0x2bfd ObjFunc
	
Label_11263:
	var_6025_string = "d4q01LaraGotoMladVlad"; // 0x2bff PushS
	FindMark(var_6015_object, var_6025_string); // 0x2c00 ObjFunc
	var_6026_object = var_6015_object; // 0x2c02 Push
	if(var_6026_object == 0) goto Label_11270; // 0x2c03 JumpB
	Remove(); // 0x2c04 ObjFunc
	
Label_11270:
	var_6027_string = "d4q01LaraGotoMladVladSelf"; // 0x2c06 PushS
	FindMark(var_6015_object, var_6027_string); // 0x2c07 ObjFunc
	var_6028_object = var_6015_object; // 0x2c09 Push
	if(var_6028_object == 0) goto Label_11277; // 0x2c0a JumpB
	Remove(); // 0x2c0b ObjFunc
	
Label_11277:
	var_6029_string = "d4q01LaraGotoOspina"; // 0x2c0d PushS
	FindMark(var_6015_object, var_6029_string); // 0x2c0e ObjFunc
	var_6030_object = var_6015_object; // 0x2c10 Push
	if(var_6030_object == 0) goto Label_11284; // 0x2c11 JumpB
	Remove(); // 0x2c12 ObjFunc
	
Label_11284:
	var_6031_string = "d4q01MladVladGotoBigVlad"; // 0x2c14 PushS
	FindMark(var_6015_object, var_6031_string); // 0x2c15 ObjFunc
	var_6032_object = var_6015_object; // 0x2c17 Push
	if(var_6032_object == 0) goto Label_11291; // 0x2c18 JumpB
	Remove(); // 0x2c19 ObjFunc
	
Label_11291:
	var_6033_string = "d4q01MladVladGotoOspina"; // 0x2c1b PushS
	FindMark(var_6015_object, var_6033_string); // 0x2c1c ObjFunc
	var_6034_object = var_6015_object; // 0x2c1e Push
	if(var_6034_object == 0) goto Label_11298; // 0x2c1f JumpB
	Remove(); // 0x2c20 ObjFunc
	
Label_11298:
	var_6035_string = "d4q01OspinaGotoLara"; // 0x2c22 PushS
	FindMark(var_6015_object, var_6035_string); // 0x2c23 ObjFunc
	var_6036_object = var_6015_object; // 0x2c25 Push
	if(var_6036_object == 0) goto Label_11305; // 0x2c26 JumpB
	Remove(); // 0x2c27 ObjFunc
	
Label_11305:
	var_6037_string = "d4q01WastedMale"; // 0x2c29 PushS
	FindMark(var_6015_object, var_6037_string); // 0x2c2a ObjFunc
	var_6038_object = var_6015_object; // 0x2c2c Push
	if(var_6038_object == 0) goto Label_11312; // 0x2c2d JumpB
	Remove(); // 0x2c2e ObjFunc
	
Label_11312:
	var_6039_string = "d4q01Whitemask"; // 0x2c30 PushS
	FindMark(var_6015_object, var_6039_string); // 0x2c31 ObjFunc
	var_6040_object = var_6015_object; // 0x2c33 Push
	if(var_6040_object == 0) goto Label_11319; // 0x2c34 JumpB
	Remove(); // 0x2c35 ObjFunc
	
Label_11319:
	var_6041_string = "d4q02BirdmaskNearHome"; // 0x2c37 PushS
	FindMark(var_6015_object, var_6041_string); // 0x2c38 ObjFunc
	var_6042_object = var_6015_object; // 0x2c3a Push
	if(var_6042_object == 0) goto Label_11326; // 0x2c3b JumpB
	Remove(); // 0x2c3c ObjFunc
	
Label_11326:
	var_6043_string = "d4q02MladVladGotoAnna"; // 0x2c3e PushS
	FindMark(var_6015_object, var_6043_string); // 0x2c3f ObjFunc
	var_6044_object = var_6015_object; // 0x2c41 Push
	if(var_6044_object == 0) goto Label_11333; // 0x2c42 JumpB
	Remove(); // 0x2c43 ObjFunc
	
Label_11333:
	var_6045_string = "d4q02MladVladGotoJulia"; // 0x2c45 PushS
	FindMark(var_6015_object, var_6045_string); // 0x2c46 ObjFunc
	var_6046_object = var_6015_object; // 0x2c48 Push
	if(var_6046_object == 0) goto Label_11340; // 0x2c49 JumpB
	Remove(); // 0x2c4a ObjFunc
	
Label_11340:
	var_6047_string = "d4q02MladVladGotoLara"; // 0x2c4c PushS
	FindMark(var_6015_object, var_6047_string); // 0x2c4d ObjFunc
	var_6048_object = var_6015_object; // 0x2c4f Push
	if(var_6048_object == 0) goto Label_11347; // 0x2c50 JumpB
	Remove(); // 0x2c51 ObjFunc
	
Label_11347:
	var_6049_string = "d4q03AlexandrAboutVolnica"; // 0x2c53 PushS
	FindMark(var_6015_object, var_6049_string); // 0x2c54 ObjFunc
	var_6050_object = var_6015_object; // 0x2c56 Push
	if(var_6050_object == 0) goto Label_11354; // 0x2c57 JumpB
	Remove(); // 0x2c58 ObjFunc
	
Label_11354:
	var_6051_string = "d4q03AlexandrGotoGrif"; // 0x2c5a PushS
	FindMark(var_6015_object, var_6051_string); // 0x2c5b ObjFunc
	var_6052_object = var_6015_object; // 0x2c5d Push
	if(var_6052_object == 0) goto Label_11361; // 0x2c5e JumpB
	Remove(); // 0x2c5f ObjFunc
	
Label_11361:
	var_6053_string = "d4q03GrifGotoAlexandr"; // 0x2c61 PushS
	FindMark(var_6015_object, var_6053_string); // 0x2c62 ObjFunc
	var_6054_object = var_6015_object; // 0x2c64 Push
	if(var_6054_object == 0) goto Label_11368; // 0x2c65 JumpB
	Remove(); // 0x2c66 ObjFunc
	
Label_11368:
	var_6055_string = "d4q03GrifGotoAlexandrSelf"; // 0x2c68 PushS
	FindMark(var_6015_object, var_6055_string); // 0x2c69 ObjFunc
	var_6056_object = var_6015_object; // 0x2c6b Push
	if(var_6056_object == 0) goto Label_11375; // 0x2c6c JumpB
	Remove(); // 0x2c6d ObjFunc
	
Label_11375:
	var_6057_bool = 0; var_6058_int = 0; // 0x2c6f PushV
	var_6058_int = 20; // 0x2c70 MovI
	func_12478(var_6057_bool, var_6058_int); // 0x2c71 NEW_2
	var_6059_bool = 0; var_6060_int = 0; // 0x2c73 PushV
	var_6060_int = 21; // 0x2c74 MovI
	func_12478(var_6059_bool, var_6060_int); // 0x2c75 NEW_2
	var_6061_bool = 0; var_6062_int = 0; // 0x2c77 PushV
	var_6062_int = 22; // 0x2c78 MovI
	func_12478(var_6061_bool, var_6062_int); // 0x2c79 NEW_2
	var_6063_bool = 0; var_6064_int = 0; // 0x2c7b PushV
	var_6064_int = 710; // 0x2c7c MovI
	func_12478(var_6063_bool, var_6064_int); // 0x2c7d NEW_2
	return 4; // 0x2c7f Return
}


func_12253(var_5667_bool)
{
	var_5670_int = 0; var_5671_string = ""; // 0x2fde PushV
	var_5671_string = "d11q03BurahVisit"; // 0x2fdf MovS
	func_138(var_5670_int, var_5671_string); // 0x2fe0 NEW_2
	var_5672_int = 0; // 0x2fe2 PushI
	var_5673_bool = var_5670_int != var_5672_int; // 0x2fe3 Neq
	if(var_5673_bool == 0) goto Label_12263; // 0x2fe4 JumpB
	var_5667_bool = 1; // 0x2fe5 MovB
	return 0; // 0x2fe6 Return
	
Label_12263:
	var_5667_bool = 0; // 0x2fe7 MovB
	return 0; // 0x2fe8 Return
}


func_7136(var_1770_int, var_1771_int, var_1772_object, var_1773_object, var_1774_object, var_1775_object)
{
	var_1776_int = 0; // 0x1be1 PushI
	var_1777_bool = var_1771_int == var_1776_int; // 0x1be2 Eq
	if(var_1777_bool == 0) goto Label_7176; // 0x1be3 JumpB
	var_1778_int = 0; var_1779_bool = 0; // 0x1be4 PushV
	var_1778_int = 14; // 0x1be5 MovI
	var_1779_bool = 0; // 0x1be6 MovB
	func_802(var_1778_int, var_1779_bool); // 0x1be7 NEW_2
	var_1780_int = 0; var_1781_bool = 0; var_1782_int = 0; // 0x1be9 PushV
	var_1780_int = 14; // 0x1bea MovI
	var_1781_bool = 0; // 0x1beb MovB
	var_1782_int = 1; // 0x1bec MovI
	func_819(var_1780_int, var_1781_bool, var_1782_int); // 0x1bed NEW_2
	var_1783_int = 0; var_1784_int = 0; var_1785_object = Obj(); var_1786_object = Obj(); var_1787_object = Obj(); // 0x1bef PushV
	var_1783_int = 14; // 0x1bf0 MovI
	var_1784_int = var_1770_int; // 0x1bf1 Mov
	var_1785_object = var_1772_object; // 0x1bf2 Mov
	var_1786_object = var_1773_object; // 0x1bf3 Mov
	var_1787_object = var_1774_object; // 0x1bf4 Mov
	func_628(var_1784_int, var_1785_object, var_1786_object, var_1787_object); // 0x1bf5 NEW_2
	var_1788_object = Obj(); var_1789_int = 0; // 0x1bf7 PushV
	var_1788_object = var_1775_object; // 0x1bf8 Mov
	var_1789_int = 0; // 0x1bf9 MovI
	func_311(var_1789_int); // 0x1bfa NEW_2
	var_1790_int = 0; var_1791_bool = 0; var_1792_int = 0; // 0x1bfc PushV
	var_1790_int = 14; // 0x1bfd MovI
	var_1791_bool = 0; // 0x1bfe MovB
	var_1792_int = 5; // 0x1bff MovI
	func_876(var_1790_int, var_1791_bool, var_1792_int); // 0x1c00 NEW_2
	var_1793_int = 0; var_1794_bool = 0; var_1795_int = 0; // 0x1c02 PushV
	var_1793_int = 14; // 0x1c03 MovI
	var_1794_bool = 0; // 0x1c04 MovB
	var_1795_int = 5; // 0x1c05 MovI
	func_938(var_1793_int, var_1794_bool, var_1795_int); // 0x1c06 NEW_2
	
Label_7176:
	var_1796_int = 0; var_1797_int = 0; // 0x1c08 PushV
	var_1796_int = 14; // 0x1c09 MovI
	var_1797_int = var_1771_int; // 0x1c0a Mov
	func_1093(var_1796_int, var_1797_int); // 0x1c0b NEW_2
	var_1807_int = 0; var_1808_int = 0; var_1809_int = 0; // 0x1c0d PushV
	var_1807_int = 14; // 0x1c0e MovI
	var_1808_int = var_1770_int; // 0x1c0f Mov
	var_1809_int = var_1771_int; // 0x1c10 Mov
	func_1382(var_1807_int, var_1808_int, var_1809_int); // 0x1c11 NEW_2
	return 0; // 0x1c13 Return
}


func_10210(var_5462_int, var_5463_float)
{
	var_5464_int = 0; var_5465_int = 0; var_5466_int = 0; var_5467_float = 0; // 0x27e3 PushV
	var_5465_int = 503307; // 0x27e4 MovI
	var_5466_int = 503306; // 0x27e5 MovI
	var_5467_float = var_5463_float; // 0x27e6 Mov
	func_12495(var_5464_int, var_5465_int, var_5466_int, var_5467_float); // 0x27e7 NEW_2
	var_5462_int = var_5464_int; // 0x27e8 Mov
	return 0; // 0x27ea Return
}


func_6115(var_1605_int, var_1606_int, var_1607_object, var_1608_object, var_1609_object, var_1610_object)
{
	var_1611_int = 0; // 0x17e4 PushI
	var_1612_bool = var_1606_int == var_1611_int; // 0x17e5 Eq
	if(var_1612_bool == 0) goto Label_6155; // 0x17e6 JumpB
	var_1613_int = 0; var_1614_bool = 0; // 0x17e7 PushV
	var_1613_int = 9; // 0x17e8 MovI
	var_1614_bool = 0; // 0x17e9 MovB
	func_802(var_1613_int, var_1614_bool); // 0x17ea NEW_2
	var_1615_int = 0; var_1616_bool = 0; var_1617_int = 0; // 0x17ec PushV
	var_1615_int = 9; // 0x17ed MovI
	var_1616_bool = 0; // 0x17ee MovB
	var_1617_int = 1; // 0x17ef MovI
	func_819(var_1615_int, var_1616_bool, var_1617_int); // 0x17f0 NEW_2
	var_1618_int = 0; var_1619_int = 0; var_1620_object = Obj(); var_1621_object = Obj(); var_1622_object = Obj(); // 0x17f2 PushV
	var_1618_int = 9; // 0x17f3 MovI
	var_1619_int = var_1605_int; // 0x17f4 Mov
	var_1620_object = var_1607_object; // 0x17f5 Mov
	var_1621_object = var_1608_object; // 0x17f6 Mov
	var_1622_object = var_1609_object; // 0x17f7 Mov
	func_628(var_1619_int, var_1620_object, var_1621_object, var_1622_object); // 0x17f8 NEW_2
	var_1623_object = Obj(); var_1624_int = 0; // 0x17fa PushV
	var_1623_object = var_1610_object; // 0x17fb Mov
	var_1624_int = 0; // 0x17fc MovI
	func_311(var_1624_int); // 0x17fd NEW_2
	var_1625_int = 0; var_1626_bool = 0; var_1627_int = 0; // 0x17ff PushV
	var_1625_int = 9; // 0x1800 MovI
	var_1626_bool = 0; // 0x1801 MovB
	var_1627_int = 7; // 0x1802 MovI
	func_876(var_1625_int, var_1626_bool, var_1627_int); // 0x1803 NEW_2
	var_1628_int = 0; var_1629_bool = 0; var_1630_int = 0; // 0x1805 PushV
	var_1628_int = 9; // 0x1806 MovI
	var_1629_bool = 0; // 0x1807 MovB
	var_1630_int = 7; // 0x1808 MovI
	func_938(var_1628_int, var_1629_bool, var_1630_int); // 0x1809 NEW_2
	
Label_6155:
	var_1631_int = 0; var_1632_int = 0; // 0x180b PushV
	var_1631_int = 9; // 0x180c MovI
	var_1632_int = var_1606_int; // 0x180d Mov
	func_1056(var_1631_int, var_1632_int); // 0x180e NEW_2
	var_1633_int = 0; var_1634_int = 0; var_1635_int = 0; // 0x1810 PushV
	var_1633_int = 9; // 0x1811 MovI
	var_1634_int = var_1605_int; // 0x1812 Mov
	var_1635_int = var_1606_int; // 0x1813 Mov
	func_1630(var_1633_int, var_1634_int, var_1635_int); // 0x1814 NEW_2
	return 0; // 0x1816 Return
}


func_12265(var_6338_bool)
{
	var_6341_int = 0; var_6342_string = ""; // 0x2fea PushV
	var_6342_string = "d11q04KlaraVisit"; // 0x2feb MovS
	func_138(var_6341_int, var_6342_string); // 0x2fec NEW_2
	var_6343_int = 0; // 0x2fee PushI
	var_6344_bool = var_6341_int != var_6343_int; // 0x2fef Neq
	if(var_6344_bool == 0) goto Label_12275; // 0x2ff0 JumpB
	var_6338_bool = 1; // 0x2ff1 MovB
	return 0; // 0x2ff2 Return
	
Label_12275:
	var_6338_bool = 0; // 0x2ff3 MovB
	return 0; // 0x2ff4 Return
}


func_10219(var_5124_int, var_5125_float)
{
	var_5126_int = 0; var_5127_int = 0; var_5128_int = 0; var_5129_float = 0; // 0x27ec PushV
	var_5127_int = 536320; // 0x27ed MovI
	var_5128_int = 536319; // 0x27ee MovI
	var_5129_float = var_5125_float; // 0x27ef Mov
	func_12495(var_5126_int, var_5127_int, var_5128_int, var_5129_float); // 0x27f0 NEW_2
	var_5124_int = var_5126_int; // 0x27f1 Mov
	return 0; // 0x27f3 Return
}


func_10228(var_5627_int, var_5628_float)
{
	var_5629_int = 0; var_5630_int = 0; var_5631_int = 0; var_5632_float = 0; // 0x27f5 PushV
	var_5630_int = 515334; // 0x27f6 MovI
	var_5631_int = 515333; // 0x27f7 MovI
	var_5632_float = var_5628_float; // 0x27f8 Mov
	func_12495(var_5629_int, var_5630_int, var_5631_int, var_5632_float); // 0x27f9 NEW_2
	var_5627_int = var_5629_int; // 0x27fa Mov
	return 0; // 0x27fc Return
}


func_12277(var_5603_bool)
{
	var_5606_int = 0; var_5607_string = ""; // 0x2ff6 PushV
	var_5607_string = "d2TalkToAlexandr"; // 0x2ff7 MovS
	func_138(var_5606_int, var_5607_string); // 0x2ff8 NEW_2
	var_5608_int = 0; // 0x2ffa PushI
	var_5609_bool = var_5606_int != var_5608_int; // 0x2ffb Neq
	if(var_5609_bool == 0) goto Label_12287; // 0x2ffc JumpB
	var_5603_bool = 1; // 0x2ffd MovB
	return 0; // 0x2ffe Return
	
Label_12287:
	var_5603_bool = 0; // 0x2fff MovB
	return 0; // 0x3000 Return
}


func_10237(var_5411_int, var_5412_float)
{
	var_5413_int = 0; var_5414_int = 0; var_5415_int = 0; var_5416_float = 0; // 0x27fe PushV
	var_5414_int = 533079; // 0x27ff MovI
	var_5415_int = 533078; // 0x2800 MovI
	var_5416_float = var_5412_float; // 0x2801 Mov
	func_12495(var_5413_int, var_5414_int, var_5415_int, var_5416_float); // 0x2802 NEW_2
	var_5411_int = var_5413_int; // 0x2803 Mov
	return 0; // 0x2805 Return
}


