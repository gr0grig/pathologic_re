task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0; // 0x1 PushV
	var_3_int = var_0_int; // 0x2 Mov
	var_4_float = var_1_float; // 0x3 Mov
	func_8643(var_3_int, var_4_float); // 0x4 NEW_2
	if(var_2_bool == 0) goto Label_8; // 0x6 JumpB
	return 0; // 0x7 Return
	
Label_8:
	var_4135_bool = 0; var_4136_int = 0; var_4137_float = 0; // 0x8 PushV
	var_4136_int = var_0_int; // 0x9 Mov
	var_4137_float = var_1_float; // 0xa Mov
	func_12270(var_4136_int, var_4137_float); // 0xb NEW_2
	if(var_4135_bool == 0) goto Label_15; // 0xd JumpB
	return 0; // 0xe Return
	
Label_15:
	var_4547_int = 0; var_4548_float = 0; // 0xf PushV
	var_4547_int = var_0_int; // 0x10 Mov
	var_4548_float = var_1_float; // 0x11 Mov
	func_12366(var_4547_int, var_4548_float); // 0x12 NEW_2
	return 0; // 0x14 Return
}


event_26(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; // 0x1d2f PushV
	var_6_string = "playsound"; // 0x1d30 PushS
	var_7_bool = var_0_string == var_6_string; // 0x1d31 Eq
	if(var_7_bool == 0) goto Label_7478; // 0x1d32 JumpB
	PlaySound(var_1_string); // 0x1d33 Func
	goto Label_7499; // 0x1d35 Jump
	
Label_7499:
	return 4; // 0x1d4b Return
	
Label_7478:
	var_8_string = "enable_bonfire"; // 0x1d36 PushS
	var_9_bool = var_0_string == var_8_string; // 0x1d37 Eq
	if(var_9_bool == 0) goto Label_7489; // 0x1d38 JumpB
	_strtoi(var_4_int, var_1_string); // 0x1d39 Func
	var_10_int = 0; // 0x1d3b PushV
	var_11_int = 1; // 0x1d3c PushI
	var_10_int = var_4_int - var_11_int; // 0x1d3d Sub2
	func_7611(var_10_int); // 0x1d3e NEW_2
	goto Label_7499; // 0x1d40 Jump
	
Label_7489:
	var_64_string = "disable_bonfire"; // 0x1d41 PushS
	var_65_bool = var_0_string == var_64_string; // 0x1d42 Eq
	if(var_65_bool == 0) goto Label_7499; // 0x1d43 JumpB
	_strtoi(var_5_int, var_1_string); // 0x1d44 Func
	var_66_int = 0; // 0x1d46 PushV
	var_67_int = 1; // 0x1d47 PushI
	var_66_int = var_5_int - var_67_int; // 0x1d48 Sub2
	func_7688(var_66_int); // 0x1d49 NEW_2
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x1d4c PushV
	var_22_string = "horror"; // 0x1d4d PushS
	var_23_bool = var_0_string == var_22_string; // 0x1d4e Eq
	if(var_23_bool == 0) goto Label_7539; // 0x1d4f JumpB
	_strtoi(var_12_int, var_1_string); // 0x1d50 Func
	var_24_int = 0; // 0x1d52 PushV
	var_24_int = var_12_int; // 0x1d53 Mov
	func_448(var_24_int); // 0x1d54 NEW_2
	var_39_object = GlobalVars[13]; // 0x1d56 PushGE
	size(var_13_int); // 0x1d57 ObjFunc
	var_40_bool = 0; // 0x1d59 PushV
	var_40_bool = 0; // 0x1d5a MovB
	var_41_int = 0; // 0x1d5b PushI
	var_42_bool = var_12_int >= var_41_int; // 0x1d5c GE
	if(var_42_bool == 0) goto Label_7521; // 0x1d5d JumpB
	var_43_bool = var_12_int < var_13_int; // 0x1d5e LT
	if(var_43_bool == 0) goto Label_7521; // 0x1d5f JumpB
	var_40_bool = 1; // 0x1d60 MovB
	
Label_7521:
	if(var_40_bool == 0) goto Label_7535; // 0x1d61 JumpB
	var_44_object = GlobalVars[13]; // 0x1d62 PushGE
	get(var_14_object, var_12_int); // 0x1d63 ObjFunc
	var_45_object = Obj(); var_46_int = 0; // 0x1d65 PushV
	var_45_object = var_14_object; // 0x1d66 Mov
	var_46_int = 1; // 0x1d67 MovI
	func_311(var_46_int); // 0x1d68 NEW_2
	var_72_string = "Replaced"; // 0x1d6a PushS
	Trace(var_72_string); // 0x1d6b Func
	var_14_object = 0; // 0x1d6d SetNull
	goto Label_7538; // 0x1d6e Jump
	
Label_7538:
	goto Label_7610; // 0x1d72 Jump
	
Label_7610:
	return 20; // 0x1dba Return
	
Label_7535:
	var_73_string = "Invalid region index"; // 0x1d6f PushS
	Trace(var_73_string); // 0x1d70 Func
	
Label_7539:
	var_74_string = "nail"; // 0x1d73 PushS
	var_75_bool = var_0_string == var_74_string; // 0x1d74 Eq
	if(var_75_bool == 0) goto Label_7577; // 0x1d75 JumpB
	_strtoi(var_15_int, var_1_string); // 0x1d76 Func
	var_76_int = 0; // 0x1d78 PushV
	var_76_int = var_15_int; // 0x1d79 Mov
	func_478(var_76_int); // 0x1d7a NEW_2
	var_88_object = GlobalVars[13]; // 0x1d7c PushGE
	size(var_16_int); // 0x1d7d ObjFunc
	var_89_bool = 0; // 0x1d7f PushV
	var_89_bool = 0; // 0x1d80 MovB
	var_90_int = 0; // 0x1d81 PushI
	var_91_bool = var_15_int >= var_90_int; // 0x1d82 GE
	if(var_91_bool == 0) goto Label_7559; // 0x1d83 JumpB
	var_92_bool = var_15_int < var_16_int; // 0x1d84 LT
	if(var_92_bool == 0) goto Label_7559; // 0x1d85 JumpB
	var_89_bool = 1; // 0x1d86 MovB
	
Label_7559:
	if(var_89_bool == 0) goto Label_7573; // 0x1d87 JumpB
	var_93_object = GlobalVars[13]; // 0x1d88 PushGE
	get(var_17_object, var_15_int); // 0x1d89 ObjFunc
	var_94_object = Obj(); var_95_int = 0; // 0x1d8b PushV
	var_94_object = var_17_object; // 0x1d8c Mov
	var_95_int = 2; // 0x1d8d MovI
	func_311(var_95_int); // 0x1d8e NEW_2
	var_96_string = "Replaced"; // 0x1d90 PushS
	Trace(var_96_string); // 0x1d91 Func
	var_17_object = 0; // 0x1d93 SetNull
	goto Label_7576; // 0x1d94 Jump
	
Label_7576:
	goto Label_7610; // 0x1d98 Jump
	
Label_7573:
	var_97_string = "Invalid region index"; // 0x1d95 PushS
	Trace(var_97_string); // 0x1d96 Func
	
Label_7577:
	var_98_string = "fogme"; // 0x1d99 PushS
	var_99_bool = var_0_string == var_98_string; // 0x1d9a Eq
	if(var_99_bool == 0) goto Label_7597; // 0x1d9b JumpB
	var_100_object = Obj(); // 0x1d9c PushV
	func_80(var_100_object); // 0x1d9d NEW_2
	var_18_object = var_100_object; // 0x1d9e Mov
	GetScene(var_19_object); // 0x1da0 ObjFunc
	GetPosition(var_20_cvector); // 0x1da2 ObjFunc
	var_104_string = "fog"; // 0x1da4 PushS
	var_105_cvector = CVector(0.0, 0.0, 1.0); // 0x1da5 PushVec
	var_106_string = "fog_stat.xml"; // 0x1da6 PushS
	AddActorByType(var_21_object, var_104_string, var_19_object, var_20_cvector, var_105_cvector, var_106_string); // 0x1da7 Func
	var_21_object = 0; // 0x1da9 SetNull
	var_19_object = 0; // 0x1daa SetNull
	var_18_object = 0; // 0x1dab SetNull
	goto Label_7610; // 0x1dac Jump
	
Label_7597:
	var_107_string = "sepia"; // 0x1dad PushS
	var_108_bool = var_0_string == var_107_string; // 0x1dae Eq
	if(var_108_bool == 0) goto Label_7604; // 0x1daf JumpB
	func_295(); // 0x1db1 NEW_2
	goto Label_7610; // 0x1db3 Jump
	
Label_7604:
	var_111_string = "nosepia"; // 0x1db4 PushS
	var_112_bool = var_0_string == var_111_string; // 0x1db5 Eq
	if(var_112_bool == 0) goto Label_7610; // 0x1db6 JumpB
	func_300(); // 0x1db8 NEW_2
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
	func_7911(); // 0x21 NEW_2
	func_8698(); // 0x24 NEW_2
	func_12331(); // 0x27 NEW_2
	var_4559_float = 0; // 0x29 PushV
	var_4560_float = 0; // 0x2a PushV
	func_290(var_4560_float); // 0x2b NEW_2
	var_4559_float = var_4560_float; // 0x2c Mov
	func_13691(var_4559_float); // 0x2e NEW_2
	var_4842_string = ""; var_4843_bool = 0; // 0x30 PushV
	var_4842_string = "burah_home@door1"; // 0x31 MovS
	var_4843_bool = 1; // 0x32 MovB
	func_183(var_4842_string, var_4843_bool); // 0x33 NEW_2
	
Label_53:
	Hold(); // 0x35 Func
	goto Label_53; // 0x37 Jump
}


func_1026(var_1322_int, var_1323_int)
{
	var_1324_bool = 0; // 0x403 PushV
	var_1324_bool = 1; // 0x404 MovB
	var_1325_int = 20; // 0x405 PushI
	var_1326_bool = var_1323_int >= var_1325_int; // 0x406 GE
	if(var_1326_bool == 0) goto Label_1043; // 0x407 JumpB
	var_1327_bool = 0; // 0x408 PushV
	var_1327_bool = 0; // 0x409 MovB
	var_1328_int = 6; // 0x40a PushI
	var_1329_bool = var_1323_int >= var_1328_int; // 0x40b GE
	if(var_1329_bool == 0) goto Label_1041; // 0x40c JumpB
	var_1330_int = 10; // 0x40d PushI
	var_1331_bool = var_1323_int < var_1330_int; // 0x40e LT
	if(var_1331_bool == 0) goto Label_1041; // 0x40f JumpB
	var_1327_bool = 1; // 0x410 MovB
	
Label_1041:
	if(var_1327_bool == 0) goto Label_1043; // 0x411 JumpB
	var_1324_bool = 0; // 0x412 MovB
	
Label_1043:
	if(var_1324_bool == 0) goto Label_1050; // 0x413 JumpB
	var_1332_int = 0; var_1333_bool = 0; // 0x414 PushV
	var_1332_int = var_1322_int; // 0x415 Mov
	var_1333_bool = 1; // 0x416 MovB
	func_785(var_1332_int, var_1333_bool); // 0x417 NEW_2
	goto Label_1055; // 0x419 Jump
	
Label_1055:
	return 0; // 0x41f Return
	
Label_1050:
	var_1334_int = 0; var_1335_bool = 0; // 0x41a PushV
	var_1334_int = var_1322_int; // 0x41b Mov
	var_1335_bool = 0; // 0x41c MovB
	func_785(var_1334_int, var_1335_bool); // 0x41d NEW_2
}


func_10243()
{
	var_5094_object = Obj(); var_5095_object = Obj(); var_5096_object = Obj(); var_5097_object = Obj(); // 0x2803 PushV
	var_5098_object = Obj(); // 0x2804 PushV
	func_12247(var_5098_object); // 0x2805 NEW_2
	var_5096_object = var_5098_object; // 0x2806 Mov
	var_5099_string = "d8q01MatGotoToyHouse"; // 0x2808 PushS
	FindMark(var_5097_object, var_5099_string); // 0x2809 ObjFunc
	var_5100_object = var_5097_object; // 0x280b Push
	if(var_5100_object == 0) goto Label_10255; // 0x280c JumpB
	Remove(); // 0x280d ObjFunc
	
Label_10255:
	var_5101_string = "d8q01MatGotoBoiny"; // 0x280f PushS
	FindMark(var_5097_object, var_5101_string); // 0x2810 ObjFunc
	var_5102_object = var_5097_object; // 0x2812 Push
	if(var_5102_object == 0) goto Label_10262; // 0x2813 JumpB
	Remove(); // 0x2814 ObjFunc
	
Label_10262:
	var_5103_string = "d8q01MladVladGotoMat"; // 0x2816 PushS
	FindMark(var_5097_object, var_5103_string); // 0x2817 ObjFunc
	var_5104_object = var_5097_object; // 0x2819 Push
	if(var_5104_object == 0) goto Label_10269; // 0x281a JumpB
	Remove(); // 0x281b ObjFunc
	
Label_10269:
	var_5105_string = "d8q01MladVladgotoOspina"; // 0x281d PushS
	FindMark(var_5097_object, var_5105_string); // 0x281e ObjFunc
	var_5106_object = var_5097_object; // 0x2820 Push
	if(var_5106_object == 0) goto Label_10276; // 0x2821 JumpB
	Remove(); // 0x2822 ObjFunc
	
Label_10276:
	var_5107_string = "d8q01OspinaGotoMladVlad"; // 0x2824 PushS
	FindMark(var_5097_object, var_5107_string); // 0x2825 ObjFunc
	var_5108_object = var_5097_object; // 0x2827 Push
	if(var_5108_object == 0) goto Label_10283; // 0x2828 JumpB
	Remove(); // 0x2829 ObjFunc
	
Label_10283:
	var_5109_string = "d8q02GotoKapella"; // 0x282b PushS
	FindMark(var_5097_object, var_5109_string); // 0x282c ObjFunc
	var_5110_object = var_5097_object; // 0x282e Push
	if(var_5110_object == 0) goto Label_10290; // 0x282f JumpB
	Remove(); // 0x2830 ObjFunc
	
Label_10290:
	var_5111_string = "d8q04MladVladGotoMark"; // 0x2832 PushS
	FindMark(var_5097_object, var_5111_string); // 0x2833 ObjFunc
	var_5112_object = var_5097_object; // 0x2835 Push
	if(var_5112_object == 0) goto Label_10297; // 0x2836 JumpB
	Remove(); // 0x2837 ObjFunc
	
Label_10297:
	var_5113_bool = 0; var_5114_int = 0; // 0x2839 PushV
	var_5114_int = 175; // 0x283a MovI
	func_12222(var_5113_bool, var_5114_int); // 0x283b NEW_2
	var_5115_bool = 0; var_5116_int = 0; // 0x283d PushV
	var_5116_int = 127; // 0x283e MovI
	func_12222(var_5115_bool, var_5116_int); // 0x283f NEW_2
	var_5117_bool = 0; var_5118_int = 0; // 0x2841 PushV
	var_5118_int = 124; // 0x2842 MovI
	func_12222(var_5117_bool, var_5118_int); // 0x2843 NEW_2
	var_5119_bool = 0; var_5120_int = 0; // 0x2845 PushV
	var_5120_int = 649; // 0x2846 MovI
	func_12222(var_5119_bool, var_5120_int); // 0x2847 NEW_2
	return 4; // 0x2849 Return
}


func_5130(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object)
{
	var_3685_int = 0; // 0x140b PushI
	var_3686_bool = var_3680_int == var_3685_int; // 0x140c Eq
	if(var_3686_bool == 0) goto Label_5170; // 0x140d JumpB
	var_3687_int = 0; var_3688_bool = 0; // 0x140e PushV
	var_3687_int = 3; // 0x140f MovI
	var_3688_bool = 0; // 0x1410 MovB
	func_802(var_3687_int, var_3688_bool); // 0x1411 NEW_2
	var_3689_int = 0; var_3690_bool = 0; var_3691_int = 0; // 0x1413 PushV
	var_3689_int = 3; // 0x1414 MovI
	var_3690_bool = 0; // 0x1415 MovB
	var_3691_int = 1; // 0x1416 MovI
	func_819(var_3689_int, var_3690_bool, var_3691_int); // 0x1417 NEW_2
	var_3692_int = 0; var_3693_int = 0; var_3694_object = Obj(); var_3695_object = Obj(); var_3696_object = Obj(); // 0x1419 PushV
	var_3692_int = 3; // 0x141a MovI
	var_3693_int = var_3679_int; // 0x141b Mov
	var_3694_object = var_3681_object; // 0x141c Mov
	var_3695_object = var_3682_object; // 0x141d Mov
	var_3696_object = var_3683_object; // 0x141e Mov
	func_726(var_3692_int, var_3693_int, var_3694_object, var_3695_object, var_3696_object); // 0x141f NEW_2
	var_3697_object = Obj(); var_3698_int = 0; // 0x1421 PushV
	var_3697_object = var_3684_object; // 0x1422 Mov
	var_3698_int = 2; // 0x1423 MovI
	func_311(var_3698_int); // 0x1424 NEW_2
	var_3699_int = 0; var_3700_bool = 0; var_3701_int = 0; // 0x1426 PushV
	var_3699_int = 3; // 0x1427 MovI
	var_3700_bool = 0; // 0x1428 MovB
	var_3701_int = 7; // 0x1429 MovI
	func_876(var_3699_int, var_3700_bool, var_3701_int); // 0x142a NEW_2
	var_3702_int = 0; var_3703_bool = 0; var_3704_int = 0; // 0x142c PushV
	var_3702_int = 3; // 0x142d MovI
	var_3703_bool = 1; // 0x142e MovB
	var_3704_int = 7; // 0x142f MovI
	func_938(var_3702_int, var_3703_bool, var_3704_int); // 0x1430 NEW_2
	
Label_5170:
	var_3705_int = 0; var_3706_bool = 0; // 0x1432 PushV
	var_3705_int = 3; // 0x1433 MovI
	var_3706_bool = 0; // 0x1434 MovB
	func_785(var_3705_int, var_3706_bool); // 0x1435 NEW_2
	var_3707_int = 0; var_3708_int = 0; var_3709_int = 0; // 0x1437 PushV
	var_3707_int = 3; // 0x1438 MovI
	var_3708_int = var_3679_int; // 0x1439 Mov
	var_3709_int = var_3680_int; // 0x143a Mov
	func_3853(var_3707_int, var_3708_int, var_3709_int); // 0x143b NEW_2
	return 0; // 0x143d Return
}


func_8203()
{
	var_4414_object = Obj(); var_4415_object = Obj(); // 0x200b PushV
	GetMainOutdoorScene(var_4415_object); // 0x200c Func
	var_4416_object = GlobalVars[0]; // 0x200e PushGE
	var_4417_object = Obj(); var_4418_object = Obj(); var_4419_int = 0; // 0x200f PushV
	var_4418_object = var_4415_object; // 0x2010 Mov
	var_4419_int = 1; // 0x2011 MovI
	func_7765(var_4417_object, var_4418_object, var_4419_int); // 0x2012 NEW_2
	var_4416_object = var_4417_object; // 0x2013 Mov
	GlobalVars[0] = var_4416_object; // 0x2015 PopGE
	var_4439_object = GlobalVars[1]; // 0x2016 PushGE
	var_4440_object = Obj(); var_4441_object = Obj(); var_4442_int = 0; // 0x2017 PushV
	var_4441_object = var_4415_object; // 0x2018 Mov
	var_4442_int = 2; // 0x2019 MovI
	func_7765(var_4440_object, var_4441_object, var_4442_int); // 0x201a NEW_2
	var_4439_object = var_4440_object; // 0x201b Mov
	GlobalVars[1] = var_4439_object; // 0x201d PopGE
	var_4443_object = GlobalVars[2]; // 0x201e PushGE
	var_4444_object = Obj(); var_4445_object = Obj(); var_4446_int = 0; // 0x201f PushV
	var_4445_object = var_4415_object; // 0x2020 Mov
	var_4446_int = 3; // 0x2021 MovI
	func_7765(var_4444_object, var_4445_object, var_4446_int); // 0x2022 NEW_2
	var_4443_object = var_4444_object; // 0x2023 Mov
	GlobalVars[2] = var_4443_object; // 0x2025 PopGE
	var_4447_object = GlobalVars[3]; // 0x2026 PushGE
	var_4448_object = Obj(); var_4449_object = Obj(); var_4450_int = 0; // 0x2027 PushV
	var_4449_object = var_4415_object; // 0x2028 Mov
	var_4450_int = 4; // 0x2029 MovI
	func_7765(var_4448_object, var_4449_object, var_4450_int); // 0x202a NEW_2
	var_4447_object = var_4448_object; // 0x202b Mov
	GlobalVars[3] = var_4447_object; // 0x202d PopGE
	var_4451_object = GlobalVars[4]; // 0x202e PushGE
	var_4452_object = Obj(); var_4453_object = Obj(); var_4454_int = 0; // 0x202f PushV
	var_4453_object = var_4415_object; // 0x2030 Mov
	var_4454_int = 5; // 0x2031 MovI
	func_7765(var_4452_object, var_4453_object, var_4454_int); // 0x2032 NEW_2
	var_4451_object = var_4452_object; // 0x2033 Mov
	GlobalVars[4] = var_4451_object; // 0x2035 PopGE
	var_4455_object = GlobalVars[5]; // 0x2036 PushGE
	var_4456_object = Obj(); var_4457_object = Obj(); var_4458_int = 0; // 0x2037 PushV
	var_4457_object = var_4415_object; // 0x2038 Mov
	var_4458_int = 6; // 0x2039 MovI
	func_7765(var_4456_object, var_4457_object, var_4458_int); // 0x203a NEW_2
	var_4455_object = var_4456_object; // 0x203b Mov
	GlobalVars[5] = var_4455_object; // 0x203d PopGE
	var_4459_object = GlobalVars[12]; // 0x203e PushGE
	var_4460_object = Obj(); // 0x203f PushV
	func_132(var_4460_object); // 0x2040 NEW_2
	var_4459_object = var_4460_object; // 0x2041 Mov
	GlobalVars[12] = var_4459_object; // 0x2043 PopGE
	var_4461_bool = 0; // 0x2044 PushV
	var_4461_bool = 0; // 0x2045 MovB
	func_7776(var_4461_bool); // 0x2046 NEW_2
	func_8498(); // 0x2049 NEW_2
	func_8573(); // 0x204c NEW_2
	var_4558_int = 100; // 0x204e PushI
	SendWorldWndMessage(var_4558_int); // 0x204f Func
	return 2; // 0x2051 Return
}


func_11277()
{
	var_4971_object = Obj(); var_4972_object = Obj(); var_4973_object = Obj(); var_4974_object = Obj(); // 0x2c0d PushV
	var_4975_object = Obj(); // 0x2c0e PushV
	func_12247(var_4975_object); // 0x2c0f NEW_2
	var_4973_object = var_4975_object; // 0x2c10 Mov
	var_4976_string = "d6q01AlexandrGotoJulia"; // 0x2c12 PushS
	FindMark(var_4974_object, var_4976_string); // 0x2c13 ObjFunc
	var_4977_object = var_4974_object; // 0x2c15 Push
	if(var_4977_object == 0) goto Label_11289; // 0x2c16 JumpB
	Remove(); // 0x2c17 ObjFunc
	
Label_11289:
	var_4978_string = "d6q01AlexandrGotoKaterina"; // 0x2c19 PushS
	FindMark(var_4974_object, var_4978_string); // 0x2c1a ObjFunc
	var_4979_object = var_4974_object; // 0x2c1c Push
	if(var_4979_object == 0) goto Label_11296; // 0x2c1d JumpB
	Remove(); // 0x2c1e ObjFunc
	
Label_11296:
	var_4980_string = "d6q01AlexandrGotoLara"; // 0x2c20 PushS
	FindMark(var_4974_object, var_4980_string); // 0x2c21 ObjFunc
	var_4981_object = var_4974_object; // 0x2c23 Push
	if(var_4981_object == 0) goto Label_11303; // 0x2c24 JumpB
	Remove(); // 0x2c25 ObjFunc
	
Label_11303:
	var_4982_string = "d6q01AlexangrGotoJulLaraSelf"; // 0x2c27 PushS
	FindMark(var_4974_object, var_4982_string); // 0x2c28 ObjFunc
	var_4983_object = var_4974_object; // 0x2c2a Push
	if(var_4983_object == 0) goto Label_11310; // 0x2c2b JumpB
	Remove(); // 0x2c2c ObjFunc
	
Label_11310:
	var_4984_string = "d6q01BigVladGotoAnna"; // 0x2c2e PushS
	FindMark(var_4974_object, var_4984_string); // 0x2c2f ObjFunc
	var_4985_object = var_4974_object; // 0x2c31 Push
	if(var_4985_object == 0) goto Label_11317; // 0x2c32 JumpB
	Remove(); // 0x2c33 ObjFunc
	
Label_11317:
	var_4986_string = "d6q01BigVladGotoAnnaOspinaSelf"; // 0x2c35 PushS
	FindMark(var_4974_object, var_4986_string); // 0x2c36 ObjFunc
	var_4987_object = var_4974_object; // 0x2c38 Push
	if(var_4987_object == 0) goto Label_11324; // 0x2c39 JumpB
	Remove(); // 0x2c3a ObjFunc
	
Label_11324:
	var_4988_string = "d6q01BigVladGotoOspina"; // 0x2c3c PushS
	FindMark(var_4974_object, var_4988_string); // 0x2c3d ObjFunc
	var_4989_object = var_4974_object; // 0x2c3f Push
	if(var_4989_object == 0) goto Label_11331; // 0x2c40 JumpB
	Remove(); // 0x2c41 ObjFunc
	
Label_11331:
	var_4990_string = "d6q01KaterinaGotoLaska"; // 0x2c43 PushS
	FindMark(var_4974_object, var_4990_string); // 0x2c44 ObjFunc
	var_4991_object = var_4974_object; // 0x2c46 Push
	if(var_4991_object == 0) goto Label_11338; // 0x2c47 JumpB
	Remove(); // 0x2c48 ObjFunc
	
Label_11338:
	var_4992_string = "d6q01KaterinagotoLaskaSelf"; // 0x2c4a PushS
	FindMark(var_4974_object, var_4992_string); // 0x2c4b ObjFunc
	var_4993_object = var_4974_object; // 0x2c4d Push
	if(var_4993_object == 0) goto Label_11345; // 0x2c4e JumpB
	Remove(); // 0x2c4f ObjFunc
	
Label_11345:
	var_4994_string = "d6q01KillerIsKlara"; // 0x2c51 PushS
	FindMark(var_4974_object, var_4994_string); // 0x2c52 ObjFunc
	var_4995_object = var_4974_object; // 0x2c54 Push
	if(var_4995_object == 0) goto Label_11352; // 0x2c55 JumpB
	Remove(); // 0x2c56 ObjFunc
	
Label_11352:
	var_4996_string = "d6q01LaskaGotoAlbinos"; // 0x2c58 PushS
	FindMark(var_4974_object, var_4996_string); // 0x2c59 ObjFunc
	var_4997_object = var_4974_object; // 0x2c5b Push
	if(var_4997_object == 0) goto Label_11359; // 0x2c5c JumpB
	Remove(); // 0x2c5d ObjFunc
	
Label_11359:
	var_4998_string = "d6q01ViktorGotoAlexandr"; // 0x2c5f PushS
	FindMark(var_4974_object, var_4998_string); // 0x2c60 ObjFunc
	var_4999_object = var_4974_object; // 0x2c62 Push
	if(var_4999_object == 0) goto Label_11366; // 0x2c63 JumpB
	Remove(); // 0x2c64 ObjFunc
	
Label_11366:
	var_5000_string = "d6q01ViktorGotoAlxBigSelf"; // 0x2c66 PushS
	FindMark(var_4974_object, var_5000_string); // 0x2c67 ObjFunc
	var_5001_object = var_4974_object; // 0x2c69 Push
	if(var_5001_object == 0) goto Label_11373; // 0x2c6a JumpB
	Remove(); // 0x2c6b ObjFunc
	
Label_11373:
	var_5002_string = "d6q01ViktorGotoBigVlad"; // 0x2c6d PushS
	FindMark(var_4974_object, var_5002_string); // 0x2c6e ObjFunc
	var_5003_object = var_4974_object; // 0x2c70 Push
	if(var_5003_object == 0) goto Label_11380; // 0x2c71 JumpB
	Remove(); // 0x2c72 ObjFunc
	
Label_11380:
	var_5004_string = "d6q02BigVlad"; // 0x2c74 PushS
	FindMark(var_4974_object, var_5004_string); // 0x2c75 ObjFunc
	var_5005_object = var_4974_object; // 0x2c77 Push
	if(var_5005_object == 0) goto Label_11387; // 0x2c78 JumpB
	Remove(); // 0x2c79 ObjFunc
	
Label_11387:
	var_5006_string = "d6q02KapellaGotoMladVlad"; // 0x2c7b PushS
	FindMark(var_4974_object, var_5006_string); // 0x2c7c ObjFunc
	var_5007_object = var_4974_object; // 0x2c7e Push
	if(var_5007_object == 0) goto Label_11394; // 0x2c7f JumpB
	Remove(); // 0x2c80 ObjFunc
	
Label_11394:
	var_5008_string = "d6q02MladVladGotoBigVlad"; // 0x2c82 PushS
	FindMark(var_4974_object, var_5008_string); // 0x2c83 ObjFunc
	var_5009_object = var_4974_object; // 0x2c85 Push
	if(var_5009_object == 0) goto Label_11401; // 0x2c86 JumpB
	Remove(); // 0x2c87 ObjFunc
	
Label_11401:
	var_5010_string = "d6q02MladVladGotoBigVladSelf"; // 0x2c89 PushS
	FindMark(var_4974_object, var_5010_string); // 0x2c8a ObjFunc
	var_5011_object = var_4974_object; // 0x2c8c Push
	if(var_5011_object == 0) goto Label_11408; // 0x2c8d JumpB
	Remove(); // 0x2c8e ObjFunc
	
Label_11408:
	var_5012_bool = 0; var_5013_int = 0; // 0x2c90 PushV
	var_5013_int = 111; // 0x2c91 MovI
	func_12222(var_5012_bool, var_5013_int); // 0x2c92 NEW_2
	var_5014_bool = 0; var_5015_int = 0; // 0x2c94 PushV
	var_5015_int = 102; // 0x2c95 MovI
	func_12222(var_5014_bool, var_5015_int); // 0x2c96 NEW_2
	var_5016_bool = 0; var_5017_int = 0; // 0x2c98 PushV
	var_5017_int = 107; // 0x2c99 MovI
	func_12222(var_5016_bool, var_5017_int); // 0x2c9a NEW_2
	return 4; // 0x2c9c Return
}


func_7185(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object)
{
	var_3005_int = 0; // 0x1c12 PushI
	var_3006_bool = var_3000_int == var_3005_int; // 0x1c13 Eq
	if(var_3006_bool == 0) goto Label_7225; // 0x1c14 JumpB
	var_3007_int = 0; var_3008_bool = 0; // 0x1c15 PushV
	var_3007_int = 14; // 0x1c16 MovI
	var_3008_bool = 1; // 0x1c17 MovB
	func_802(var_3007_int, var_3008_bool); // 0x1c18 NEW_2
	var_3009_int = 0; var_3010_bool = 0; var_3011_int = 0; // 0x1c1a PushV
	var_3009_int = 14; // 0x1c1b MovI
	var_3010_bool = 1; // 0x1c1c MovB
	var_3011_int = 1; // 0x1c1d MovI
	func_819(var_3009_int, var_3010_bool, var_3011_int); // 0x1c1e NEW_2
	var_3012_int = 0; var_3013_int = 0; var_3014_object = Obj(); var_3015_object = Obj(); var_3016_object = Obj(); // 0x1c20 PushV
	var_3012_int = 14; // 0x1c21 MovI
	var_3013_int = var_2999_int; // 0x1c22 Mov
	var_3014_object = var_3001_object; // 0x1c23 Mov
	var_3015_object = var_3002_object; // 0x1c24 Mov
	var_3016_object = var_3003_object; // 0x1c25 Mov
	func_647(var_3012_int, var_3013_int, var_3014_object, var_3015_object, var_3016_object); // 0x1c26 NEW_2
	var_3017_object = Obj(); var_3018_int = 0; // 0x1c28 PushV
	var_3017_object = var_3004_object; // 0x1c29 Mov
	var_3018_int = 1; // 0x1c2a MovI
	func_311(var_3018_int); // 0x1c2b NEW_2
	var_3019_int = 0; var_3020_bool = 0; var_3021_int = 0; // 0x1c2d PushV
	var_3019_int = 14; // 0x1c2e MovI
	var_3020_bool = 1; // 0x1c2f MovB
	var_3021_int = 5; // 0x1c30 MovI
	func_876(var_3019_int, var_3020_bool, var_3021_int); // 0x1c31 NEW_2
	var_3022_int = 0; var_3023_bool = 0; var_3024_int = 0; // 0x1c33 PushV
	var_3022_int = 14; // 0x1c34 MovI
	var_3023_bool = 0; // 0x1c35 MovB
	var_3024_int = 5; // 0x1c36 MovI
	func_938(var_3022_int, var_3023_bool, var_3024_int); // 0x1c37 NEW_2
	
Label_7225:
	var_3025_int = 0; var_3026_bool = 0; // 0x1c39 PushV
	var_3025_int = 14; // 0x1c3a MovI
	var_3026_bool = 0; // 0x1c3b MovB
	func_785(var_3025_int, var_3026_bool); // 0x1c3c NEW_2
	var_3027_int = 0; var_3028_int = 0; var_3029_int = 0; // 0x1c3e PushV
	var_3027_int = 14; // 0x1c3f MovI
	var_3028_int = var_2999_int; // 0x1c40 Mov
	var_3029_int = var_3000_int; // 0x1c41 Mov
	func_2590(var_3027_int, var_3028_int, var_3029_int); // 0x1c42 NEW_2
	return 0; // 0x1c44 Return
}


func_6164(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object)
{
	var_2840_int = 0; // 0x1815 PushI
	var_2841_bool = var_2835_int == var_2840_int; // 0x1816 Eq
	if(var_2841_bool == 0) goto Label_6204; // 0x1817 JumpB
	var_2842_int = 0; var_2843_bool = 0; // 0x1818 PushV
	var_2842_int = 9; // 0x1819 MovI
	var_2843_bool = 1; // 0x181a MovB
	func_802(var_2842_int, var_2843_bool); // 0x181b NEW_2
	var_2844_int = 0; var_2845_bool = 0; var_2846_int = 0; // 0x181d PushV
	var_2844_int = 9; // 0x181e MovI
	var_2845_bool = 1; // 0x181f MovB
	var_2846_int = 1; // 0x1820 MovI
	func_819(var_2844_int, var_2845_bool, var_2846_int); // 0x1821 NEW_2
	var_2847_int = 0; var_2848_int = 0; var_2849_object = Obj(); var_2850_object = Obj(); var_2851_object = Obj(); // 0x1823 PushV
	var_2847_int = 9; // 0x1824 MovI
	var_2848_int = var_2834_int; // 0x1825 Mov
	var_2849_object = var_2836_object; // 0x1826 Mov
	var_2850_object = var_2837_object; // 0x1827 Mov
	var_2851_object = var_2838_object; // 0x1828 Mov
	func_647(var_2847_int, var_2848_int, var_2849_object, var_2850_object, var_2851_object); // 0x1829 NEW_2
	var_2852_object = Obj(); var_2853_int = 0; // 0x182b PushV
	var_2852_object = var_2839_object; // 0x182c Mov
	var_2853_int = 1; // 0x182d MovI
	func_311(var_2853_int); // 0x182e NEW_2
	var_2854_int = 0; var_2855_bool = 0; var_2856_int = 0; // 0x1830 PushV
	var_2854_int = 9; // 0x1831 MovI
	var_2855_bool = 1; // 0x1832 MovB
	var_2856_int = 7; // 0x1833 MovI
	func_876(var_2854_int, var_2855_bool, var_2856_int); // 0x1834 NEW_2
	var_2857_int = 0; var_2858_bool = 0; var_2859_int = 0; // 0x1836 PushV
	var_2857_int = 9; // 0x1837 MovI
	var_2858_bool = 0; // 0x1838 MovB
	var_2859_int = 7; // 0x1839 MovI
	func_938(var_2857_int, var_2858_bool, var_2859_int); // 0x183a NEW_2
	
Label_6204:
	var_2860_int = 0; var_2861_bool = 0; // 0x183c PushV
	var_2860_int = 9; // 0x183d MovI
	var_2861_bool = 0; // 0x183e MovB
	func_785(var_2860_int, var_2861_bool); // 0x183f NEW_2
	var_2862_int = 0; var_2863_int = 0; var_2864_int = 0; // 0x1841 PushV
	var_2862_int = 9; // 0x1842 MovI
	var_2863_int = var_2834_int; // 0x1843 Mov
	var_2864_int = var_2835_int; // 0x1844 Mov
	func_2770(var_2862_int, var_2863_int, var_2864_int); // 0x1845 NEW_2
	return 0; // 0x1847 Return
}


func_1056(var_724_int, var_725_int)
{
	var_726_bool = 0; // 0x421 PushV
	var_726_bool = 1; // 0x422 MovB
	var_727_bool = 0; // 0x423 PushV
	var_727_bool = 1; // 0x424 MovB
	var_728_int = 22; // 0x425 PushI
	var_729_bool = var_725_int >= var_728_int; // 0x426 GE
	if(var_729_bool == 0) goto Label_1068; // 0x427 JumpB
	var_730_int = 4; // 0x428 PushI
	var_731_bool = var_725_int < var_730_int; // 0x429 LT
	if(var_731_bool == 0) goto Label_1068; // 0x42a JumpB
	var_727_bool = 0; // 0x42b MovB
	
Label_1068:
	if(var_727_bool == 0) goto Label_1080; // 0x42c JumpB
	var_732_bool = 0; // 0x42d PushV
	var_732_bool = 0; // 0x42e MovB
	var_733_int = 6; // 0x42f PushI
	var_734_bool = var_725_int >= var_733_int; // 0x430 GE
	if(var_734_bool == 0) goto Label_1078; // 0x431 JumpB
	var_735_int = 8; // 0x432 PushI
	var_736_bool = var_725_int < var_735_int; // 0x433 LT
	if(var_736_bool == 0) goto Label_1078; // 0x434 JumpB
	var_732_bool = 1; // 0x435 MovB
	
Label_1078:
	if(var_732_bool == 0) goto Label_1080; // 0x436 JumpB
	var_726_bool = 0; // 0x437 MovB
	
Label_1080:
	if(var_726_bool == 0) goto Label_1087; // 0x438 JumpB
	var_737_int = 0; var_738_bool = 0; // 0x439 PushV
	var_737_int = var_724_int; // 0x43a Mov
	var_738_bool = 1; // 0x43b MovB
	func_785(var_737_int, var_738_bool); // 0x43c NEW_2
	goto Label_1092; // 0x43e Jump
	
Label_1092:
	return 0; // 0x444 Return
	
Label_1087:
	var_748_int = 0; var_749_bool = 0; // 0x43f PushV
	var_748_int = var_724_int; // 0x440 Mov
	var_749_bool = 0; // 0x441 MovB
	func_785(var_748_int, var_749_bool); // 0x442 NEW_2
}


func_12331()
{
	var_4397_float = 0; var_4398_int = 0; var_4399_float = 0; var_4400_float = 0; var_4401_int = 0; var_4402_float = 0; // 0x302b PushV
	GetGameTime(var_4400_float); // 0x302c Func
	var_4401_int = 1; // 0x302e MovI
	
Label_12335:
	var_4403_int = 288; // 0x302f PushI
	var_4404_bool = var_4401_int < var_4403_int; // 0x3030 LT
	if(var_4404_bool == 0) goto Label_12359; // 0x3031 JumpB
	var_4405_float = 1.0; // 0x3032 PushF
	var_4402_float = var_4405_float * var_4401_int; // 0x3033 Mult2
	var_4406_bool = var_4402_float < var_4400_float; // 0x3034 LT
	if(var_4406_bool == 0) goto Label_12343; // 0x3035 JumpB
	goto Label_12356; // 0x3036 Jump
	
Label_12356:
	var_4407_int = 1; // 0x3044 PushI
	var_4401_int = var_4401_int + var_4407_int; // 0x3045 Add2
	goto Label_12335; // 0x3046 Jump
	
Label_12343:
	var_4408_int = 40000; // 0x3037 PushI
	var_4409_int = var_4408_int + var_4401_int; // 0x3038 Add
	SetTimeEvent(var_4409_int, var_4402_float); // 0x3039 Func
	var_4410_float = 0.00333; // 0x303b PushF
	var_4402_float = var_4402_float - var_4410_float; // 0x303c Sub2
	var_4411_bool = var_4402_float < var_4400_float; // 0x303d LT
	if(var_4411_bool == 0) goto Label_12352; // 0x303e JumpB
	goto Label_12356; // 0x303f Jump
	
Label_12352:
	var_4412_int = 42000; // 0x3040 PushI
	var_4413_int = var_4412_int + var_4401_int; // 0x3041 Add
	SetTimeEvent(var_4413_int, var_4402_float); // 0x3042 Func
	
Label_12359:
	func_8203(); // 0x3048 NEW_2
	func_14215(); // 0x304b NEW_2
	return 6; // 0x304d Return
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


func_1093(var_1795_int, var_1796_int)
{
	var_1797_bool = 0; // 0x446 PushV
	var_1797_bool = 1; // 0x447 MovB
	var_1798_int = 22; // 0x448 PushI
	var_1799_bool = var_1796_int >= var_1798_int; // 0x449 GE
	if(var_1799_bool == 0) goto Label_1103; // 0x44a JumpB
	var_1800_int = 6; // 0x44b PushI
	var_1801_bool = var_1796_int < var_1800_int; // 0x44c LT
	if(var_1801_bool == 0) goto Label_1103; // 0x44d JumpB
	var_1797_bool = 0; // 0x44e MovB
	
Label_1103:
	if(var_1797_bool == 0) goto Label_1110; // 0x44f JumpB
	var_1802_int = 0; var_1803_bool = 0; // 0x450 PushV
	var_1802_int = var_1795_int; // 0x451 Mov
	var_1803_bool = 1; // 0x452 MovB
	func_785(var_1802_int, var_1803_bool); // 0x453 NEW_2
	goto Label_1115; // 0x455 Jump
	
Label_1115:
	return 0; // 0x45b Return
	
Label_1110:
	var_1804_int = 0; var_1805_bool = 0; // 0x456 PushV
	var_1804_int = var_1795_int; // 0x457 Mov
	var_1805_bool = 0; // 0x458 MovB
	func_785(var_1804_int, var_1805_bool); // 0x459 NEW_2
}


func_7237(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object)
{
	var_4135_int = 0; // 0x1c46 PushI
	var_4136_bool = var_4130_int == var_4135_int; // 0x1c47 Eq
	if(var_4136_bool == 0) goto Label_7277; // 0x1c48 JumpB
	var_4137_int = 0; var_4138_bool = 0; // 0x1c49 PushV
	var_4137_int = 14; // 0x1c4a MovI
	var_4138_bool = 0; // 0x1c4b MovB
	func_802(var_4137_int, var_4138_bool); // 0x1c4c NEW_2
	var_4139_int = 0; var_4140_bool = 0; var_4141_int = 0; // 0x1c4e PushV
	var_4139_int = 14; // 0x1c4f MovI
	var_4140_bool = 0; // 0x1c50 MovB
	var_4141_int = 1; // 0x1c51 MovI
	func_819(var_4139_int, var_4140_bool, var_4141_int); // 0x1c52 NEW_2
	var_4142_int = 0; var_4143_int = 0; var_4144_object = Obj(); var_4145_object = Obj(); var_4146_object = Obj(); // 0x1c54 PushV
	var_4142_int = 14; // 0x1c55 MovI
	var_4143_int = var_4129_int; // 0x1c56 Mov
	var_4144_object = var_4131_object; // 0x1c57 Mov
	var_4145_object = var_4132_object; // 0x1c58 Mov
	var_4146_object = var_4133_object; // 0x1c59 Mov
	func_726(var_4142_int, var_4143_int, var_4144_object, var_4145_object, var_4146_object); // 0x1c5a NEW_2
	var_4147_object = Obj(); var_4148_int = 0; // 0x1c5c PushV
	var_4147_object = var_4134_object; // 0x1c5d Mov
	var_4148_int = 2; // 0x1c5e MovI
	func_311(var_4148_int); // 0x1c5f NEW_2
	var_4149_int = 0; var_4150_bool = 0; var_4151_int = 0; // 0x1c61 PushV
	var_4149_int = 14; // 0x1c62 MovI
	var_4150_bool = 0; // 0x1c63 MovB
	var_4151_int = 5; // 0x1c64 MovI
	func_876(var_4149_int, var_4150_bool, var_4151_int); // 0x1c65 NEW_2
	var_4152_int = 0; var_4153_bool = 0; var_4154_int = 0; // 0x1c67 PushV
	var_4152_int = 14; // 0x1c68 MovI
	var_4153_bool = 1; // 0x1c69 MovB
	var_4154_int = 5; // 0x1c6a MovI
	func_938(var_4152_int, var_4153_bool, var_4154_int); // 0x1c6b NEW_2
	
Label_7277:
	var_4155_int = 0; var_4156_bool = 0; // 0x1c6d PushV
	var_4155_int = 14; // 0x1c6e MovI
	var_4156_bool = 0; // 0x1c6f MovB
	func_785(var_4155_int, var_4156_bool); // 0x1c70 NEW_2
	var_4157_int = 0; var_4158_int = 0; var_4159_int = 0; // 0x1c72 PushV
	var_4157_int = 14; // 0x1c73 MovI
	var_4158_int = var_4129_int; // 0x1c74 Mov
	var_4159_int = var_4130_int; // 0x1c75 Mov
	func_3477(var_4157_int, var_4158_int, var_4159_int); // 0x1c76 NEW_2
	return 0; // 0x1c78 Return
}


func_3143(var_2118_int, var_2119_int, var_2120_int)
{
	var_2121_int = 0; var_2122_int = 0; var_2123_int = 0; var_2124_int = 0; // 0xc47 PushV
	var_2125_bool = 0; // 0xc48 PushV
	var_2125_bool = 0; // 0xc49 MovB
	var_2126_int = 8; // 0xc4a PushI
	var_2127_bool = var_2120_int > var_2126_int; // 0xc4b GT
	if(var_2127_bool == 0) goto Label_3153; // 0xc4c JumpB
	var_2128_int = 21; // 0xc4d PushI
	var_2129_bool = var_2120_int < var_2128_int; // 0xc4e LT
	if(var_2129_bool == 0) goto Label_3153; // 0xc4f JumpB
	var_2125_bool = 1; // 0xc50 MovB
	
Label_3153:
	if(var_2125_bool == 0) goto Label_3208; // 0xc51 JumpB
	var_2130_int = 0; var_2131_string = ""; var_2132_string = ""; var_2133_int = 0; // 0xc52 PushV
	var_2130_int = var_2118_int; // 0xc53 Mov
	var_2131_string = "pers_vaxxabit"; // 0xc54 MovS
	var_2132_string = "vaxxabit_d.xml"; // 0xc55 MovS
	var_2133_int = 5; // 0xc56 MovI
	func_509(var_2130_int, var_2131_string, var_2132_string, var_2133_int); // 0xc57 NEW_2
	var_2134_int = 0; var_2135_string = ""; var_2136_string = ""; var_2137_int = 0; // 0xc59 PushV
	var_2134_int = var_2118_int; // 0xc5a Mov
	var_2135_string = "pers_vaxxabitka"; // 0xc5b MovS
	var_2136_string = "vaxxabitka_d.xml"; // 0xc5c MovS
	var_2137_int = 5; // 0xc5d MovI
	func_509(var_2134_int, var_2135_string, var_2136_string, var_2137_int); // 0xc5e NEW_2
	var_2138_int = 0; var_2139_string = ""; var_2140_string = ""; var_2141_int = 0; // 0xc60 PushV
	var_2138_int = var_2118_int; // 0xc61 Mov
	var_2139_string = "pers_rat_big"; // 0xc62 MovS
	var_2140_string = "rat_big.xml"; // 0xc63 MovS
	var_2141_int = 2; // 0xc64 MovI
	func_509(var_2138_int, var_2139_string, var_2140_string, var_2141_int); // 0xc65 NEW_2
	var_2142_int = 0; var_2143_string = ""; var_2144_string = ""; var_2145_int = 0; // 0xc67 PushV
	var_2142_int = var_2118_int; // 0xc68 Mov
	var_2143_string = "fog"; // 0xc69 MovS
	var_2144_string = "fog.xml"; // 0xc6a MovS
	var_2145_int = 6; // 0xc6b MovI
	func_535(var_2142_int, var_2143_string, var_2144_string, var_2145_int); // 0xc6c NEW_2
	var_2150_int = 5; // 0xc6e PushI
	var_2151_bool = var_2119_int >= var_2150_int; // 0xc6f GE
	if(var_2151_bool == 0) goto Label_3192; // 0xc70 JumpB
	var_2152_int = 0; var_2153_string = ""; var_2154_string = ""; var_2155_int = 0; // 0xc71 PushV
	var_2152_int = var_2118_int; // 0xc72 Mov
	var_2153_string = "fog"; // 0xc73 MovS
	var_2154_string = "fog_hunter.xml"; // 0xc74 MovS
	var_2155_int = 2; // 0xc75 MovI
	func_535(var_2152_int, var_2153_string, var_2154_string, var_2155_int); // 0xc76 NEW_2
	
Label_3192:
	var_2156_int = 1; // 0xc78 PushI
	var_2157_float = 0; var_2158_int = 0; // 0xc79 PushV
	var_2158_int = var_2119_int; // 0xc7a Mov
	func_1261(var_2157_float, var_2158_int); // 0xc7b NEW_2
	var_2123_int = var_2156_int * var_2157_float; // 0xc7d Mult2
	var_2203_int = var_2123_int; // 0xc7e Push
	if(var_2203_int == 0) goto Label_3207; // 0xc7f JumpB
	var_2204_int = 0; var_2205_string = ""; var_2206_string = ""; var_2207_int = 0; // 0xc80 PushV
	var_2204_int = var_2118_int; // 0xc81 Mov
	var_2205_string = "pers_bomber"; // 0xc82 MovS
	var_2206_string = "bomber.xml"; // 0xc83 MovS
	var_2207_int = var_2123_int; // 0xc84 Mov
	func_509(var_2204_int, var_2205_string, var_2206_string, var_2207_int); // 0xc85 NEW_2
	
Label_3207:
	goto Label_3261; // 0xc87 Jump
	
Label_3261:
	var_2208_bool = 0; var_2209_int = 0; // 0xcbd PushV
	var_2209_int = var_2119_int; // 0xcbe Mov
	func_1378(var_2208_bool, var_2209_int); // 0xcbf NEW_2
	if(var_2208_bool == 0) goto Label_3273; // 0xcc1 JumpB
	var_2211_int = 0; var_2212_string = ""; var_2213_string = ""; var_2214_int = 0; // 0xcc2 PushV
	var_2211_int = var_2118_int; // 0xcc3 Mov
	var_2212_string = "pers_sanitar"; // 0xcc4 MovS
	var_2213_string = "sanitar.xml"; // 0xcc5 MovS
	var_2214_int = 2; // 0xcc6 MovI
	func_509(var_2211_int, var_2212_string, var_2213_string, var_2214_int); // 0xcc7 NEW_2
	
Label_3273:
	var_2215_int = 0; var_2216_string = ""; var_2217_string = ""; var_2218_int = 0; var_2219_int = 0; var_2220_int = 0; // 0xcc9 PushV
	var_2215_int = var_2118_int; // 0xcca Mov
	var_2216_string = "pers_worker"; // 0xccb MovS
	var_2217_string = "agony1_man.xml"; // 0xccc MovS
	var_2218_int = 2; // 0xccd MovI
	var_2219_int = 4; // 0xcce MovI
	var_2220_int = 4; // 0xccf MovI
	func_522(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int); // 0xcd0 NEW_2
	var_2225_int = 0; var_2226_string = ""; var_2227_string = ""; var_2228_int = 0; var_2229_int = 0; var_2230_int = 0; // 0xcd2 PushV
	var_2225_int = var_2118_int; // 0xcd3 Mov
	var_2226_string = "pers_unosha"; // 0xcd4 MovS
	var_2227_string = "agony1_man.xml"; // 0xcd5 MovS
	var_2228_int = 2; // 0xcd6 MovI
	var_2229_int = 4; // 0xcd7 MovI
	var_2230_int = 4; // 0xcd8 MovI
	func_522(var_2225_int, var_2226_string, var_2227_string, var_2228_int, var_2229_int, var_2230_int); // 0xcd9 NEW_2
	var_2231_int = 0; var_2232_string = ""; var_2233_string = ""; var_2234_int = 0; var_2235_int = 0; var_2236_int = 0; // 0xcdb PushV
	var_2231_int = var_2118_int; // 0xcdc Mov
	var_2232_string = "pers_woman"; // 0xcdd MovS
	var_2233_string = "agony1_woman.xml"; // 0xcde MovS
	var_2234_int = 2; // 0xcdf MovI
	var_2235_int = 4; // 0xce0 MovI
	var_2236_int = 4; // 0xce1 MovI
	func_522(var_2231_int, var_2232_string, var_2233_string, var_2234_int, var_2235_int, var_2236_int); // 0xce2 NEW_2
	var_2237_int = 0; var_2238_string = ""; var_2239_string = ""; var_2240_int = 0; var_2241_int = 0; var_2242_int = 0; // 0xce4 PushV
	var_2237_int = var_2118_int; // 0xce5 Mov
	var_2238_string = "pers_wasted_girl"; // 0xce6 MovS
	var_2239_string = "agony1_woman.xml"; // 0xce7 MovS
	var_2240_int = 2; // 0xce8 MovI
	var_2241_int = 4; // 0xce9 MovI
	var_2242_int = 4; // 0xcea MovI
	func_522(var_2237_int, var_2238_string, var_2239_string, var_2240_int, var_2241_int, var_2242_int); // 0xceb NEW_2
	return 4; // 0xced Return
	
Label_3208:
	var_2243_int = 0; var_2244_string = ""; var_2245_string = ""; var_2246_int = 0; // 0xc88 PushV
	var_2243_int = var_2118_int; // 0xc89 Mov
	var_2244_string = "pers_vaxxabit"; // 0xc8a MovS
	var_2245_string = "vaxxabit_d.xml"; // 0xc8b MovS
	var_2246_int = 4; // 0xc8c MovI
	func_509(var_2243_int, var_2244_string, var_2245_string, var_2246_int); // 0xc8d NEW_2
	var_2247_int = 0; var_2248_string = ""; var_2249_string = ""; var_2250_int = 0; // 0xc8f PushV
	var_2247_int = var_2118_int; // 0xc90 Mov
	var_2248_string = "pers_vaxxabitka"; // 0xc91 MovS
	var_2249_string = "vaxxabitka_d.xml"; // 0xc92 MovS
	var_2250_int = 4; // 0xc93 MovI
	func_509(var_2247_int, var_2248_string, var_2249_string, var_2250_int); // 0xc94 NEW_2
	var_2251_int = 0; var_2252_string = ""; var_2253_string = ""; var_2254_int = 0; // 0xc96 PushV
	var_2251_int = var_2118_int; // 0xc97 Mov
	var_2252_string = "pers_rat_big"; // 0xc98 MovS
	var_2253_string = "rat_big.xml"; // 0xc99 MovS
	var_2254_int = 3; // 0xc9a MovI
	func_509(var_2251_int, var_2252_string, var_2253_string, var_2254_int); // 0xc9b NEW_2
	var_2255_int = 0; var_2256_string = ""; var_2257_string = ""; var_2258_int = 0; // 0xc9d PushV
	var_2255_int = var_2118_int; // 0xc9e Mov
	var_2256_string = "fog"; // 0xc9f MovS
	var_2257_string = "fog.xml"; // 0xca0 MovS
	var_2258_int = 6; // 0xca1 MovI
	func_535(var_2255_int, var_2256_string, var_2257_string, var_2258_int); // 0xca2 NEW_2
	var_2259_int = 5; // 0xca4 PushI
	var_2260_bool = var_2119_int >= var_2259_int; // 0xca5 GE
	if(var_2260_bool == 0) goto Label_3246; // 0xca6 JumpB
	var_2261_int = 0; var_2262_string = ""; var_2263_string = ""; var_2264_int = 0; // 0xca7 PushV
	var_2261_int = var_2118_int; // 0xca8 Mov
	var_2262_string = "fog"; // 0xca9 MovS
	var_2263_string = "fog_hunter.xml"; // 0xcaa MovS
	var_2264_int = 2; // 0xcab MovI
	func_535(var_2261_int, var_2262_string, var_2263_string, var_2264_int); // 0xcac NEW_2
	
Label_3246:
	var_2265_int = 2; // 0xcae PushI
	var_2266_float = 0; var_2267_int = 0; // 0xcaf PushV
	var_2267_int = var_2119_int; // 0xcb0 Mov
	func_1261(var_2266_float, var_2267_int); // 0xcb1 NEW_2
	var_2124_int = var_2265_int * var_2266_float; // 0xcb3 Mult2
	var_2268_int = var_2124_int; // 0xcb4 Push
	if(var_2268_int == 0) goto Label_3261; // 0xcb5 JumpB
	var_2269_int = 0; var_2270_string = ""; var_2271_string = ""; var_2272_int = 0; // 0xcb6 PushV
	var_2269_int = var_2118_int; // 0xcb7 Mov
	var_2270_string = "pers_bomber"; // 0xcb8 MovS
	var_2271_string = "bomber.xml"; // 0xcb9 MovS
	var_2272_int = var_2124_int; // 0xcba Mov
	func_509(var_2269_int, var_2270_string, var_2271_string, var_2272_int); // 0xcbb NEW_2
}


func_6216(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object)
{
	var_3970_int = 0; // 0x1849 PushI
	var_3971_bool = var_3965_int == var_3970_int; // 0x184a Eq
	if(var_3971_bool == 0) goto Label_6256; // 0x184b JumpB
	var_3972_int = 0; var_3973_bool = 0; // 0x184c PushV
	var_3972_int = 9; // 0x184d MovI
	var_3973_bool = 0; // 0x184e MovB
	func_802(var_3972_int, var_3973_bool); // 0x184f NEW_2
	var_3974_int = 0; var_3975_bool = 0; var_3976_int = 0; // 0x1851 PushV
	var_3974_int = 9; // 0x1852 MovI
	var_3975_bool = 0; // 0x1853 MovB
	var_3976_int = 1; // 0x1854 MovI
	func_819(var_3974_int, var_3975_bool, var_3976_int); // 0x1855 NEW_2
	var_3977_int = 0; var_3978_int = 0; var_3979_object = Obj(); var_3980_object = Obj(); var_3981_object = Obj(); // 0x1857 PushV
	var_3977_int = 9; // 0x1858 MovI
	var_3978_int = var_3964_int; // 0x1859 Mov
	var_3979_object = var_3966_object; // 0x185a Mov
	var_3980_object = var_3967_object; // 0x185b Mov
	var_3981_object = var_3968_object; // 0x185c Mov
	func_726(var_3977_int, var_3978_int, var_3979_object, var_3980_object, var_3981_object); // 0x185d NEW_2
	var_3982_object = Obj(); var_3983_int = 0; // 0x185f PushV
	var_3982_object = var_3969_object; // 0x1860 Mov
	var_3983_int = 2; // 0x1861 MovI
	func_311(var_3983_int); // 0x1862 NEW_2
	var_3984_int = 0; var_3985_bool = 0; var_3986_int = 0; // 0x1864 PushV
	var_3984_int = 9; // 0x1865 MovI
	var_3985_bool = 0; // 0x1866 MovB
	var_3986_int = 7; // 0x1867 MovI
	func_876(var_3984_int, var_3985_bool, var_3986_int); // 0x1868 NEW_2
	var_3987_int = 0; var_3988_bool = 0; var_3989_int = 0; // 0x186a PushV
	var_3987_int = 9; // 0x186b MovI
	var_3988_bool = 1; // 0x186c MovB
	var_3989_int = 7; // 0x186d MovI
	func_938(var_3987_int, var_3988_bool, var_3989_int); // 0x186e NEW_2
	
Label_6256:
	var_3990_int = 0; var_3991_bool = 0; // 0x1870 PushV
	var_3990_int = 9; // 0x1871 MovI
	var_3991_bool = 0; // 0x1872 MovB
	func_785(var_3990_int, var_3991_bool); // 0x1873 NEW_2
	var_3992_int = 0; var_3993_int = 0; var_3994_int = 0; // 0x1875 PushV
	var_3992_int = 9; // 0x1876 MovI
	var_3993_int = var_3964_int; // 0x1877 Mov
	var_3994_int = var_3965_int; // 0x1878 Mov
	func_3665(var_3992_int, var_3993_int, var_3994_int); // 0x1879 NEW_2
	return 0; // 0x187b Return
}


func_10316()
{
	var_4635_string = ""; var_4636_bool = 0; // 0x284d PushV
	var_4635_string = "house1_kabak@door1"; // 0x284e MovS
	var_4636_bool = 1; // 0x284f MovB
	func_183(var_4635_string, var_4636_bool); // 0x2850 NEW_2
	return 0; // 0x2852 Return
}


func_12366(var_4547_int, var_4548_float)
{
	var_4549_int = 45003; // 0x304f PushI
	var_4550_bool = var_4547_int == var_4549_int; // 0x3050 Eq
	if(var_4550_bool == 0) goto Label_12402; // 0x3051 JumpB
	var_4551_object = Obj(); var_4552_object = Obj(); // 0x3052 PushV
	var_4553_object = GlobalVars[16]; // 0x3053 PushGE
	var_4551_object = var_4553_object; // 0x3054 Mov
	var_4554_object = GlobalVars[16]; // 0x3056 PushGE
	var_4552_object = var_4554_object; // 0x3057 Mov
	func_10564(); // 0x3059 NEW_2
	var_4623_int = 0; var_4624_float = 0; // 0x305b PushV
	var_4624_float = var_4548_float; // 0x305c Mov
	func_9783(var_4623_int, var_4624_float); // 0x305d NEW_2
	var_4632_object = Obj(); var_4633_string = ""; // 0x305f PushV
	var_4633_string = "quest_d2_01"; // 0x3060 MovS
	func_143(var_4632_object, var_4633_string); // 0x3061 NEW_2
	var_4640_bool = 0; var_4641_string = ""; var_4642_string = ""; // 0x3063 PushV
	var_4641_string = "quest_d1_01"; // 0x3064 MovS
	var_4642_string = "cleanup"; // 0x3065 MovS
	func_245(var_4640_bool, var_4641_string, var_4642_string); // 0x3066 NEW_2
	var_4643_bool = 0; var_4644_string = ""; var_4645_string = ""; // 0x3068 PushV
	var_4644_string = "tutorial_mask1"; // 0x3069 MovS
	var_4645_string = "cleanup"; // 0x306a MovS
	func_245(var_4643_bool, var_4644_string, var_4645_string); // 0x306b NEW_2
	var_4646_bool = 0; var_4647_string = ""; var_4648_string = ""; // 0x306d PushV
	var_4647_string = "tutorial_mask2"; // 0x306e MovS
	var_4648_string = "cleanup"; // 0x306f MovS
	func_245(var_4646_bool, var_4647_string, var_4648_string); // 0x3070 NEW_2
	
Label_12402:
	var_4649_int = 45005; // 0x3072 PushI
	var_4650_bool = var_4547_int == var_4649_int; // 0x3073 Eq
	if(var_4650_bool == 0) goto Label_12423; // 0x3074 JumpB
	var_4651_object = Obj(); var_4652_object = Obj(); // 0x3075 PushV
	var_4653_object = GlobalVars[16]; // 0x3076 PushGE
	var_4651_object = var_4653_object; // 0x3077 Mov
	var_4654_object = GlobalVars[16]; // 0x3079 PushGE
	var_4652_object = var_4654_object; // 0x307a Mov
	func_10724(); // 0x307c NEW_2
	var_4702_bool = 0; var_4703_string = ""; var_4704_string = ""; // 0x307e PushV
	var_4703_string = "quest_d2_01"; // 0x307f MovS
	var_4704_string = "cleanup"; // 0x3080 MovS
	func_245(var_4702_bool, var_4703_string, var_4704_string); // 0x3081 NEW_2
	var_4705_object = Obj(); var_4706_string = ""; // 0x3083 PushV
	var_4706_string = "quest_d3_01"; // 0x3084 MovS
	func_143(var_4705_object, var_4706_string); // 0x3085 NEW_2
	
Label_12423:
	var_4707_int = 45006; // 0x3087 PushI
	var_4708_bool = var_4547_int == var_4707_int; // 0x3088 Eq
	if(var_4708_bool == 0) goto Label_12444; // 0x3089 JumpB
	var_4709_object = Obj(); var_4710_object = Obj(); // 0x308a PushV
	var_4711_object = GlobalVars[16]; // 0x308b PushGE
	var_4709_object = var_4711_object; // 0x308c Mov
	var_4712_object = GlobalVars[16]; // 0x308e PushGE
	var_4710_object = var_4712_object; // 0x308f Mov
	func_10870(); // 0x3091 NEW_2
	var_4748_bool = 0; var_4749_string = ""; var_4750_string = ""; // 0x3093 PushV
	var_4749_string = "quest_d3_01"; // 0x3094 MovS
	var_4750_string = "cleanup"; // 0x3095 MovS
	func_245(var_4748_bool, var_4749_string, var_4750_string); // 0x3096 NEW_2
	var_4751_object = Obj(); var_4752_string = ""; // 0x3098 PushV
	var_4752_string = "quest_d4_01"; // 0x3099 MovS
	func_143(var_4751_object, var_4752_string); // 0x309a NEW_2
	
Label_12444:
	var_4753_int = 45007; // 0x309c PushI
	var_4754_bool = var_4547_int == var_4753_int; // 0x309d Eq
	if(var_4754_bool == 0) goto Label_12456; // 0x309e JumpB
	var_4755_object = Obj(); var_4756_object = Obj(); // 0x309f PushV
	var_4757_object = GlobalVars[16]; // 0x30a0 PushGE
	var_4755_object = var_4757_object; // 0x30a1 Mov
	var_4758_object = GlobalVars[16]; // 0x30a3 PushGE
	var_4756_object = var_4758_object; // 0x30a4 Mov
	func_10508(); // 0x30a6 NEW_2
	
Label_12456:
	var_4769_int = 45008; // 0x30a8 PushI
	var_4770_bool = var_4547_int == var_4769_int; // 0x30a9 Eq
	if(var_4770_bool == 0) goto Label_12470; // 0x30aa JumpB
	var_4771_bool = 0; var_4772_object = Obj(); // 0x30ab PushV
	var_4773_object = GlobalVars[16]; // 0x30ac PushGE
	var_4772_object = var_4773_object; // 0x30ad Mov
	func_11699(var_4772_object); // 0x30af NEW_2
	if(var_4771_bool == 0) goto Label_12470; // 0x30b1 JumpB
	var_4780_int = 0; var_4781_float = 0; // 0x30b2 PushV
	var_4781_float = var_4548_float; // 0x30b3 Mov
	func_9801(var_4780_int, var_4781_float); // 0x30b4 NEW_2
	
Label_12470:
	var_4786_int = 45009; // 0x30b6 PushI
	var_4787_bool = var_4547_int == var_4786_int; // 0x30b7 Eq
	if(var_4787_bool == 0) goto Label_12477; // 0x30b8 JumpB
	var_4788_int = 0; var_4789_float = 0; // 0x30b9 PushV
	var_4789_float = var_4548_float; // 0x30ba Mov
	func_9792(var_4788_int, var_4789_float); // 0x30bb NEW_2
	
Label_12477:
	var_4794_int = 45010; // 0x30bd PushI
	var_4795_bool = var_4547_int == var_4794_int; // 0x30be Eq
	if(var_4795_bool == 0) goto Label_12513; // 0x30bf JumpB
	var_4796_bool = 0; // 0x30c0 PushV
	var_4796_bool = 0; // 0x30c1 MovB
	var_4797_bool = 0; var_4798_object = Obj(); // 0x30c2 PushV
	var_4799_object = GlobalVars[16]; // 0x30c3 PushGE
	var_4798_object = var_4799_object; // 0x30c4 Mov
	func_11973(var_4798_object); // 0x30c6 NEW_2
	var_4804_bool = var_4797_bool == 0; // 0x30c8 Not
	if(var_4804_bool == 0) goto Label_12499; // 0x30c9 JumpB
	var_4805_bool = 0; var_4806_object = Obj(); // 0x30ca PushV
	var_4807_object = GlobalVars[16]; // 0x30cb PushGE
	var_4806_object = var_4807_object; // 0x30cc Mov
	func_11687(var_4806_object); // 0x30ce NEW_2
	var_4812_bool = var_4805_bool == 0; // 0x30d0 Not
	if(var_4812_bool == 0) goto Label_12499; // 0x30d1 JumpB
	var_4796_bool = 1; // 0x30d2 MovB
	
Label_12499:
	if(var_4796_bool == 0) goto Label_12513; // 0x30d3 JumpB
	var_4813_object = Obj(); var_4814_object = Obj(); // 0x30d4 PushV
	var_4815_object = GlobalVars[16]; // 0x30d5 PushGE
	var_4813_object = var_4815_object; // 0x30d6 Mov
	var_4816_object = GlobalVars[16]; // 0x30d8 PushGE
	var_4814_object = var_4816_object; // 0x30d9 Mov
	func_10227(); // 0x30db NEW_2
	var_4827_int = 0; var_4828_float = 0; // 0x30dd PushV
	var_4828_float = var_4548_float; // 0x30de Mov
	func_9819(var_4827_int, var_4828_float); // 0x30df NEW_2
	
Label_12513:
	var_4833_int = 45011; // 0x30e1 PushI
	var_4834_bool = var_4547_int == var_4833_int; // 0x30e2 Eq
	if(var_4834_bool == 0) goto Label_12534; // 0x30e3 JumpB
	var_4835_object = Obj(); var_4836_object = Obj(); // 0x30e4 PushV
	var_4837_object = GlobalVars[16]; // 0x30e5 PushGE
	var_4835_object = var_4837_object; // 0x30e6 Mov
	var_4838_object = GlobalVars[16]; // 0x30e8 PushGE
	var_4836_object = var_4838_object; // 0x30e9 Mov
	func_10974(); // 0x30eb NEW_2
	var_4892_bool = 0; var_4893_string = ""; var_4894_string = ""; // 0x30ed PushV
	var_4893_string = "quest_d4_01"; // 0x30ee MovS
	var_4894_string = "cleanup"; // 0x30ef MovS
	func_245(var_4892_bool, var_4893_string, var_4894_string); // 0x30f0 NEW_2
	var_4895_object = Obj(); var_4896_string = ""; // 0x30f2 PushV
	var_4896_string = "quest_d5_01"; // 0x30f3 MovS
	func_154(var_4895_object, var_4896_string); // 0x30f4 NEW_2
	
Label_12534:
	var_4903_int = 45012; // 0x30f6 PushI
	var_4904_bool = var_4547_int == var_4903_int; // 0x30f7 Eq
	if(var_4904_bool == 0) goto Label_12559; // 0x30f8 JumpB
	var_4905_object = Obj(); var_4906_object = Obj(); // 0x30f9 PushV
	var_4907_object = GlobalVars[16]; // 0x30fa PushGE
	var_4905_object = var_4907_object; // 0x30fb Mov
	var_4908_object = GlobalVars[16]; // 0x30fd PushGE
	var_4906_object = var_4908_object; // 0x30fe Mov
	func_11138(); // 0x3100 NEW_2
	var_4954_int = 0; var_4955_float = 0; // 0x3102 PushV
	var_4955_float = var_4548_float; // 0x3103 Mov
	func_10008(var_4954_int, var_4955_float); // 0x3104 NEW_2
	var_4960_bool = 0; var_4961_string = ""; var_4962_string = ""; // 0x3106 PushV
	var_4961_string = "quest_d5_01"; // 0x3107 MovS
	var_4962_string = "cleanup"; // 0x3108 MovS
	func_245(var_4960_bool, var_4961_string, var_4962_string); // 0x3109 NEW_2
	var_4963_object = Obj(); var_4964_string = ""; // 0x310b PushV
	var_4964_string = "quest_d6_01"; // 0x310c MovS
	func_143(var_4963_object, var_4964_string); // 0x310d NEW_2
	
Label_12559:
	var_4965_int = 45013; // 0x310f PushI
	var_4966_bool = var_4547_int == var_4965_int; // 0x3110 Eq
	if(var_4966_bool == 0) goto Label_12580; // 0x3111 JumpB
	var_4967_object = Obj(); var_4968_object = Obj(); // 0x3112 PushV
	var_4969_object = GlobalVars[16]; // 0x3113 PushGE
	var_4967_object = var_4969_object; // 0x3114 Mov
	var_4970_object = GlobalVars[16]; // 0x3116 PushGE
	var_4968_object = var_4970_object; // 0x3117 Mov
	func_11277(); // 0x3119 NEW_2
	var_5018_bool = 0; var_5019_string = ""; var_5020_string = ""; // 0x311b PushV
	var_5019_string = "quest_d6_01"; // 0x311c MovS
	var_5020_string = "cleanup"; // 0x311d MovS
	func_245(var_5018_bool, var_5019_string, var_5020_string); // 0x311e NEW_2
	var_5021_object = Obj(); var_5022_string = ""; // 0x3120 PushV
	var_5022_string = "quest_d7_01"; // 0x3121 MovS
	func_143(var_5021_object, var_5022_string); // 0x3122 NEW_2
	
Label_12580:
	var_5023_int = 45015; // 0x3124 PushI
	var_5024_bool = var_4547_int == var_5023_int; // 0x3125 Eq
	if(var_5024_bool == 0) goto Label_12594; // 0x3126 JumpB
	var_5025_bool = 0; var_5026_object = Obj(); // 0x3127 PushV
	var_5027_object = GlobalVars[16]; // 0x3128 PushGE
	var_5026_object = var_5027_object; // 0x3129 Mov
	func_11985(var_5026_object); // 0x312b NEW_2
	if(var_5025_bool == 0) goto Label_12594; // 0x312d JumpB
	var_5032_int = 0; var_5033_float = 0; // 0x312e PushV
	var_5033_float = var_4548_float; // 0x312f Mov
	func_10053(var_5032_int, var_5033_float); // 0x3130 NEW_2
	
Label_12594:
	var_5038_int = 45016; // 0x3132 PushI
	var_5039_bool = var_4547_int == var_5038_int; // 0x3133 Eq
	if(var_5039_bool == 0) goto Label_12624; // 0x3134 JumpB
	var_5040_object = Obj(); var_5041_object = Obj(); // 0x3135 PushV
	var_5042_object = GlobalVars[16]; // 0x3136 PushGE
	var_5040_object = var_5042_object; // 0x3137 Mov
	var_5043_object = GlobalVars[16]; // 0x3139 PushGE
	var_5041_object = var_5043_object; // 0x313a Mov
	func_11423(); // 0x313c NEW_2
	var_5077_object = Obj(); var_5078_object = Obj(); // 0x313e PushV
	var_5079_object = GlobalVars[16]; // 0x313f PushGE
	var_5077_object = var_5079_object; // 0x3140 Mov
	var_5080_object = GlobalVars[16]; // 0x3142 PushGE
	var_5078_object = var_5080_object; // 0x3143 Mov
	func_10534(); // 0x3145 NEW_2
	var_5083_bool = 0; var_5084_string = ""; var_5085_string = ""; // 0x3147 PushV
	var_5084_string = "quest_d7_01"; // 0x3148 MovS
	var_5085_string = "cleanup"; // 0x3149 MovS
	func_245(var_5083_bool, var_5084_string, var_5085_string); // 0x314a NEW_2
	var_5086_object = Obj(); var_5087_string = ""; // 0x314c PushV
	var_5087_string = "quest_d8_01"; // 0x314d MovS
	func_143(var_5086_object, var_5087_string); // 0x314e NEW_2
	
Label_12624:
	var_5088_int = 45017; // 0x3150 PushI
	var_5089_bool = var_4547_int == var_5088_int; // 0x3151 Eq
	if(var_5089_bool == 0) goto Label_12645; // 0x3152 JumpB
	var_5090_object = Obj(); var_5091_object = Obj(); // 0x3153 PushV
	var_5092_object = GlobalVars[16]; // 0x3154 PushGE
	var_5090_object = var_5092_object; // 0x3155 Mov
	var_5093_object = GlobalVars[16]; // 0x3157 PushGE
	var_5091_object = var_5093_object; // 0x3158 Mov
	func_10243(); // 0x315a NEW_2
	var_5121_bool = 0; var_5122_string = ""; var_5123_string = ""; // 0x315c PushV
	var_5122_string = "quest_d8_01"; // 0x315d MovS
	var_5123_string = "cleanup"; // 0x315e MovS
	func_245(var_5121_bool, var_5122_string, var_5123_string); // 0x315f NEW_2
	var_5124_object = Obj(); var_5125_string = ""; // 0x3161 PushV
	var_5125_string = "quest_d9_01"; // 0x3162 MovS
	func_143(var_5124_object, var_5125_string); // 0x3163 NEW_2
	
Label_12645:
	var_5126_int = 45018; // 0x3165 PushI
	var_5127_bool = var_4547_int == var_5126_int; // 0x3166 Eq
	if(var_5127_bool == 0) goto Label_12666; // 0x3167 JumpB
	var_5128_object = Obj(); var_5129_object = Obj(); // 0x3168 PushV
	var_5130_object = GlobalVars[16]; // 0x3169 PushGE
	var_5128_object = var_5130_object; // 0x316a Mov
	var_5131_object = GlobalVars[16]; // 0x316c PushGE
	var_5129_object = var_5131_object; // 0x316d Mov
	func_11524(); // 0x316f NEW_2
	var_5157_bool = 0; var_5158_string = ""; var_5159_string = ""; // 0x3171 PushV
	var_5158_string = "quest_d9_01"; // 0x3172 MovS
	var_5159_string = "cleanup"; // 0x3173 MovS
	func_245(var_5157_bool, var_5158_string, var_5159_string); // 0x3174 NEW_2
	var_5160_object = Obj(); var_5161_string = ""; // 0x3176 PushV
	var_5161_string = "quest_d10_01"; // 0x3177 MovS
	func_143(var_5160_object, var_5161_string); // 0x3178 NEW_2
	
Label_12666:
	var_5162_int = 45031; // 0x317a PushI
	var_5163_bool = var_4547_int == var_5162_int; // 0x317b Eq
	if(var_5163_bool == 0) goto Label_12687; // 0x317c JumpB
	var_5164_object = Obj(); var_5165_object = Obj(); // 0x317d PushV
	var_5166_object = GlobalVars[16]; // 0x317e PushGE
	var_5164_object = var_5166_object; // 0x317f Mov
	var_5167_object = GlobalVars[16]; // 0x3181 PushGE
	var_5165_object = var_5167_object; // 0x3182 Mov
	func_11587(); // 0x3184 NEW_2
	var_5191_bool = 0; var_5192_string = ""; var_5193_string = ""; // 0x3186 PushV
	var_5192_string = "quest_d10_01"; // 0x3187 MovS
	var_5193_string = "cleanup"; // 0x3188 MovS
	func_245(var_5191_bool, var_5192_string, var_5193_string); // 0x3189 NEW_2
	var_5194_object = Obj(); var_5195_string = ""; // 0x318b PushV
	var_5195_string = "quest_d11_01"; // 0x318c MovS
	func_143(var_5194_object, var_5195_string); // 0x318d NEW_2
	
Label_12687:
	var_5196_int = 45032; // 0x318f PushI
	var_5197_bool = var_4547_int == var_5196_int; // 0x3190 Eq
	if(var_5197_bool == 0) goto Label_12694; // 0x3191 JumpB
	var_5198_object = Obj(); var_5199_string = ""; // 0x3192 PushV
	var_5199_string = "quest_d11_02"; // 0x3193 MovS
	func_143(var_5198_object, var_5199_string); // 0x3194 NEW_2
	
Label_12694:
	var_5200_int = 45035; // 0x3196 PushI
	var_5201_bool = var_4547_int == var_5200_int; // 0x3197 Eq
	if(var_5201_bool == 0) goto Label_12718; // 0x3198 JumpB
	var_5202_bool = 0; var_5203_object = Obj(); // 0x3199 PushV
	var_5204_object = GlobalVars[16]; // 0x319a PushGE
	var_5203_object = var_5204_object; // 0x319b Mov
	func_12009(var_5203_object); // 0x319d NEW_2
	var_5209_bool = var_5202_bool == 0; // 0x319f Not
	if(var_5209_bool == 0) goto Label_12718; // 0x31a0 JumpB
	var_5210_object = Obj(); var_5211_object = Obj(); // 0x31a1 PushV
	var_5212_object = GlobalVars[16]; // 0x31a2 PushGE
	var_5210_object = var_5212_object; // 0x31a3 Mov
	var_5213_object = GlobalVars[16]; // 0x31a5 PushGE
	var_5211_object = var_5213_object; // 0x31a6 Mov
	func_10534(); // 0x31a8 NEW_2
	var_5214_int = 0; var_5215_float = 0; // 0x31aa PushV
	var_5215_float = var_4548_float; // 0x31ab Mov
	func_9720(var_5214_int, var_5215_float); // 0x31ac NEW_2
	
Label_12718:
	var_5220_int = 45036; // 0x31ae PushI
	var_5221_bool = var_4547_int == var_5220_int; // 0x31af Eq
	if(var_5221_bool == 0) goto Label_12742; // 0x31b0 JumpB
	var_5222_bool = 0; var_5223_object = Obj(); // 0x31b1 PushV
	var_5224_object = GlobalVars[16]; // 0x31b2 PushGE
	var_5223_object = var_5224_object; // 0x31b3 Mov
	func_11997(var_5223_object); // 0x31b5 NEW_2
	var_5229_bool = var_5222_bool == 0; // 0x31b7 Not
	if(var_5229_bool == 0) goto Label_12742; // 0x31b8 JumpB
	var_5230_object = Obj(); var_5231_object = Obj(); // 0x31b9 PushV
	var_5232_object = GlobalVars[16]; // 0x31ba PushGE
	var_5230_object = var_5232_object; // 0x31bb Mov
	var_5233_object = GlobalVars[16]; // 0x31bd PushGE
	var_5231_object = var_5233_object; // 0x31be Mov
	func_10550(); // 0x31c0 NEW_2
	var_5236_int = 0; var_5237_float = 0; // 0x31c2 PushV
	var_5237_float = var_4548_float; // 0x31c3 Mov
	func_9711(var_5236_int, var_5237_float); // 0x31c4 NEW_2
	
Label_12742:
	var_5242_int = 45038; // 0x31c6 PushI
	var_5243_bool = var_4547_int == var_5242_int; // 0x31c7 Eq
	if(var_5243_bool == 0) goto Label_12757; // 0x31c8 JumpB
	var_5244_bool = 0; var_5245_object = Obj(); // 0x31c9 PushV
	var_5246_object = GlobalVars[16]; // 0x31ca PushGE
	var_5245_object = var_5246_object; // 0x31cb Mov
	func_12021(var_5245_object); // 0x31cd NEW_2
	var_5251_bool = var_5244_bool == 0; // 0x31cf Not
	if(var_5251_bool == 0) goto Label_12757; // 0x31d0 JumpB
	var_5252_int = 0; var_5253_float = 0; // 0x31d1 PushV
	var_5253_float = var_4548_float; // 0x31d2 Mov
	func_9873(var_5252_int, var_5253_float); // 0x31d3 NEW_2
	
Label_12757:
	var_5258_int = 45039; // 0x31d5 PushI
	var_5259_bool = var_4547_int == var_5258_int; // 0x31d6 Eq
	if(var_5259_bool == 0) goto Label_12781; // 0x31d7 JumpB
	var_5260_bool = 0; var_5261_object = Obj(); // 0x31d8 PushV
	var_5262_object = GlobalVars[16]; // 0x31d9 PushGE
	var_5261_object = var_5262_object; // 0x31da Mov
	func_12033(var_5261_object); // 0x31dc NEW_2
	var_5267_bool = var_5260_bool == 0; // 0x31de Not
	if(var_5267_bool == 0) goto Label_12781; // 0x31df JumpB
	var_5268_object = Obj(); var_5269_object = Obj(); // 0x31e0 PushV
	var_5270_object = GlobalVars[16]; // 0x31e1 PushGE
	var_5268_object = var_5270_object; // 0x31e2 Mov
	var_5271_object = GlobalVars[16]; // 0x31e4 PushGE
	var_5269_object = var_5271_object; // 0x31e5 Mov
	func_10220(); // 0x31e7 NEW_2
	var_5274_int = 0; var_5275_float = 0; // 0x31e9 PushV
	var_5275_float = var_4548_float; // 0x31ea Mov
	func_9918(var_5274_int, var_5275_float); // 0x31eb NEW_2
	
Label_12781:
	var_5280_int = 45040; // 0x31ed PushI
	var_5281_bool = var_4547_int == var_5280_int; // 0x31ee Eq
	if(var_5281_bool == 0) goto Label_12796; // 0x31ef JumpB
	var_5282_bool = 0; var_5283_object = Obj(); // 0x31f0 PushV
	var_5284_object = GlobalVars[16]; // 0x31f1 PushGE
	var_5283_object = var_5284_object; // 0x31f2 Mov
	func_12045(var_5283_object); // 0x31f4 NEW_2
	var_5289_bool = var_5282_bool == 0; // 0x31f6 Not
	if(var_5289_bool == 0) goto Label_12796; // 0x31f7 JumpB
	var_5290_int = 0; var_5291_float = 0; // 0x31f8 PushV
	var_5291_float = var_4548_float; // 0x31f9 Mov
	func_9909(var_5290_int, var_5291_float); // 0x31fa NEW_2
	
Label_12796:
	var_5296_int = 45041; // 0x31fc PushI
	var_5297_bool = var_4547_int == var_5296_int; // 0x31fd Eq
	if(var_5297_bool == 0) goto Label_12811; // 0x31fe JumpB
	var_5298_bool = 0; var_5299_object = Obj(); // 0x31ff PushV
	var_5300_object = GlobalVars[16]; // 0x3200 PushGE
	var_5299_object = var_5300_object; // 0x3201 Mov
	func_12057(var_5299_object); // 0x3203 NEW_2
	var_5305_bool = var_5298_bool == 0; // 0x3205 Not
	if(var_5305_bool == 0) goto Label_12811; // 0x3206 JumpB
	var_5306_int = 0; var_5307_float = 0; // 0x3207 PushV
	var_5307_float = var_4548_float; // 0x3208 Mov
	func_9972(var_5306_int, var_5307_float); // 0x3209 NEW_2
	
Label_12811:
	var_5312_int = 45042; // 0x320b PushI
	var_5313_bool = var_4547_int == var_5312_int; // 0x320c Eq
	if(var_5313_bool == 0) goto Label_12832; // 0x320d JumpB
	var_5314_object = Obj(); var_5315_object = Obj(); // 0x320e PushV
	var_5316_object = GlobalVars[16]; // 0x320f PushGE
	var_5314_object = var_5316_object; // 0x3210 Mov
	var_5317_object = GlobalVars[16]; // 0x3212 PushGE
	var_5315_object = var_5317_object; // 0x3213 Mov
	func_11649(); // 0x3215 NEW_2
	var_5335_bool = 0; var_5336_string = ""; var_5337_string = ""; // 0x3217 PushV
	var_5336_string = "quest_d11_01"; // 0x3218 MovS
	var_5337_string = "cleanup"; // 0x3219 MovS
	func_245(var_5335_bool, var_5336_string, var_5337_string); // 0x321a NEW_2
	var_5338_object = Obj(); var_5339_string = ""; // 0x321c PushV
	var_5339_string = "quest_d12_01"; // 0x321d MovS
	func_143(var_5338_object, var_5339_string); // 0x321e NEW_2
	
Label_12832:
	var_5340_int = 45043; // 0x3220 PushI
	var_5341_bool = var_4547_int == var_5340_int; // 0x3221 Eq
	if(var_5341_bool == 0) goto Label_12847; // 0x3222 JumpB
	var_5342_bool = 0; var_5343_object = Obj(); // 0x3223 PushV
	var_5344_object = GlobalVars[16]; // 0x3224 PushGE
	var_5343_object = var_5344_object; // 0x3225 Mov
	func_12081(var_5343_object); // 0x3227 NEW_2
	var_5349_bool = var_5342_bool == 0; // 0x3229 Not
	if(var_5349_bool == 0) goto Label_12847; // 0x322a JumpB
	var_5350_int = 0; var_5351_float = 0; // 0x322b PushV
	var_5351_float = var_4548_float; // 0x322c Mov
	func_9999(var_5350_int, var_5351_float); // 0x322d NEW_2
	
Label_12847:
	var_5356_int = 45044; // 0x322f PushI
	var_5357_bool = var_4547_int == var_5356_int; // 0x3230 Eq
	if(var_5357_bool == 0) goto Label_12862; // 0x3231 JumpB
	var_5358_bool = 0; var_5359_object = Obj(); // 0x3232 PushV
	var_5360_object = GlobalVars[16]; // 0x3233 PushGE
	var_5359_object = var_5360_object; // 0x3234 Mov
	func_12105(var_5359_object); // 0x3236 NEW_2
	var_5365_bool = var_5358_bool == 0; // 0x3238 Not
	if(var_5365_bool == 0) goto Label_12862; // 0x3239 JumpB
	var_5366_int = 0; var_5367_float = 0; // 0x323a PushV
	var_5367_float = var_4548_float; // 0x323b Mov
	func_10044(var_5366_int, var_5367_float); // 0x323c NEW_2
	
Label_12862:
	var_5372_int = 45045; // 0x323e PushI
	var_5373_bool = var_4547_int == var_5372_int; // 0x323f Eq
	if(var_5373_bool == 0) goto Label_12877; // 0x3240 JumpB
	var_5374_bool = 0; var_5375_object = Obj(); // 0x3241 PushV
	var_5376_object = GlobalVars[16]; // 0x3242 PushGE
	var_5375_object = var_5376_object; // 0x3243 Mov
	func_12093(var_5375_object); // 0x3245 NEW_2
	var_5381_bool = var_5374_bool == 0; // 0x3247 Not
	if(var_5381_bool == 0) goto Label_12877; // 0x3248 JumpB
	var_5382_int = 0; var_5383_float = 0; // 0x3249 PushV
	var_5383_float = var_4548_float; // 0x324a Mov
	func_10035(var_5382_int, var_5383_float); // 0x324b NEW_2
	
Label_12877:
	var_5388_int = 45046; // 0x324d PushI
	var_5389_bool = var_4547_int == var_5388_int; // 0x324e Eq
	if(var_5389_bool == 0) goto Label_12892; // 0x324f JumpB
	var_5390_bool = 0; var_5391_object = Obj(); // 0x3250 PushV
	var_5392_object = GlobalVars[16]; // 0x3251 PushGE
	var_5391_object = var_5392_object; // 0x3252 Mov
	func_12117(var_5391_object); // 0x3254 NEW_2
	var_5397_bool = var_5390_bool == 0; // 0x3256 Not
	if(var_5397_bool == 0) goto Label_12892; // 0x3257 JumpB
	var_5398_int = 0; var_5399_float = 0; // 0x3258 PushV
	var_5399_float = var_4548_float; // 0x3259 Mov
	func_10026(var_5398_int, var_5399_float); // 0x325a NEW_2
	
Label_12892:
	var_5404_int = 45047; // 0x325c PushI
	var_5405_bool = var_4547_int == var_5404_int; // 0x325d Eq
	if(var_5405_bool == 0) goto Label_12907; // 0x325e JumpB
	var_5406_bool = 0; var_5407_object = Obj(); // 0x325f PushV
	var_5408_object = GlobalVars[16]; // 0x3260 PushGE
	var_5407_object = var_5408_object; // 0x3261 Mov
	func_12129(var_5407_object); // 0x3263 NEW_2
	var_5413_bool = var_5406_bool == 0; // 0x3265 Not
	if(var_5413_bool == 0) goto Label_12907; // 0x3266 JumpB
	var_5414_int = 0; var_5415_float = 0; // 0x3267 PushV
	var_5415_float = var_4548_float; // 0x3268 Mov
	func_10062(var_5414_int, var_5415_float); // 0x3269 NEW_2
	
Label_12907:
	var_5420_int = 45048; // 0x326b PushI
	var_5421_bool = var_4547_int == var_5420_int; // 0x326c Eq
	if(var_5421_bool == 0) goto Label_12914; // 0x326d JumpB
	var_5422_int = 0; var_5423_float = 0; // 0x326e PushV
	var_5423_float = var_4548_float; // 0x326f Mov
	func_10098(var_5422_int, var_5423_float); // 0x3270 NEW_2
	
Label_12914:
	var_5428_int = 45049; // 0x3272 PushI
	var_5429_bool = var_4547_int == var_5428_int; // 0x3273 Eq
	if(var_5429_bool == 0) goto Label_12929; // 0x3274 JumpB
	var_5430_bool = 0; var_5431_object = Obj(); // 0x3275 PushV
	var_5432_object = GlobalVars[16]; // 0x3276 PushGE
	var_5431_object = var_5432_object; // 0x3277 Mov
	func_12141(var_5431_object); // 0x3279 NEW_2
	var_5437_bool = var_5430_bool == 0; // 0x327b Not
	if(var_5437_bool == 0) goto Label_12929; // 0x327c JumpB
	var_5438_int = 0; var_5439_float = 0; // 0x327d PushV
	var_5439_float = var_4548_float; // 0x327e Mov
	func_10071(var_5438_int, var_5439_float); // 0x327f NEW_2
	
Label_12929:
	var_5444_int = 45050; // 0x3281 PushI
	var_5445_bool = var_4547_int == var_5444_int; // 0x3282 Eq
	if(var_5445_bool == 0) goto Label_12936; // 0x3283 JumpB
	var_5446_int = 0; var_5447_float = 0; // 0x3284 PushV
	var_5447_float = var_4548_float; // 0x3285 Mov
	func_10089(var_5446_int, var_5447_float); // 0x3286 NEW_2
	
Label_12936:
	var_5452_int = 45051; // 0x3288 PushI
	var_5453_bool = var_4547_int == var_5452_int; // 0x3289 Eq
	if(var_5453_bool == 0) goto Label_12951; // 0x328a JumpB
	var_5454_bool = 0; var_5455_object = Obj(); // 0x328b PushV
	var_5456_object = GlobalVars[16]; // 0x328c PushGE
	var_5455_object = var_5456_object; // 0x328d Mov
	func_12153(var_5455_object); // 0x328f NEW_2
	var_5461_bool = var_5454_bool == 0; // 0x3291 Not
	if(var_5461_bool == 0) goto Label_12951; // 0x3292 JumpB
	var_5462_int = 0; var_5463_float = 0; // 0x3293 PushV
	var_5463_float = var_4548_float; // 0x3294 Mov
	func_9693(var_5462_int, var_5463_float); // 0x3295 NEW_2
	
Label_12951:
	var_5468_int = 45054; // 0x3297 PushI
	var_5469_bool = var_4547_int == var_5468_int; // 0x3298 Eq
	if(var_5469_bool == 0) goto Label_12958; // 0x3299 JumpB
	var_5470_int = 0; var_5471_float = 0; // 0x329a PushV
	var_5471_float = var_4548_float; // 0x329b Mov
	func_9747(var_5470_int, var_5471_float); // 0x329c NEW_2
	
Label_12958:
	var_5476_int = 45063; // 0x329e PushI
	var_5477_bool = var_4547_int == var_5476_int; // 0x329f Eq
	if(var_5477_bool == 0) goto Label_12964; // 0x32a0 JumpB
	var_5478_string = "aglaja.wmv"; // 0x32a1 PushS
	QueuePlayMovie(var_5478_string); // 0x32a2 Func
	
Label_12964:
	var_5479_int = 45064; // 0x32a4 PushI
	var_5480_bool = var_4547_int == var_5479_int; // 0x32a5 Eq
	if(var_5480_bool == 0) goto Label_12970; // 0x32a6 JumpB
	var_5481_string = "army.wmv"; // 0x32a7 PushS
	QueuePlayMovie(var_5481_string); // 0x32a8 Func
	
Label_12970:
	var_5482_int = 45174; // 0x32aa PushI
	var_5483_bool = var_4547_int == var_5482_int; // 0x32ab Eq
	if(var_5483_bool == 0) goto Label_12984; // 0x32ac JumpB
	var_5484_bool = 0; var_5485_object = Obj(); // 0x32ad PushV
	var_5486_object = GlobalVars[16]; // 0x32ae PushGE
	var_5485_object = var_5486_object; // 0x32af Mov
	func_11963(var_5484_bool, var_5485_object); // 0x32b1 NEW_2
	if(var_5484_bool == 0) goto Label_12984; // 0x32b3 JumpB
	var_5489_int = 0; var_5490_float = 0; // 0x32b4 PushV
	var_5490_float = var_4548_float; // 0x32b5 Mov
	func_9576(var_5489_int, var_5490_float); // 0x32b6 NEW_2
	
Label_12984:
	var_5495_int = 45175; // 0x32b8 PushI
	var_5496_bool = var_4547_int == var_5495_int; // 0x32b9 Eq
	if(var_5496_bool == 0) goto Label_12998; // 0x32ba JumpB
	var_5497_bool = 0; var_5498_object = Obj(); // 0x32bb PushV
	var_5499_object = GlobalVars[16]; // 0x32bc PushGE
	var_5498_object = var_5499_object; // 0x32bd Mov
	func_11963(var_5497_bool, var_5498_object); // 0x32bf NEW_2
	if(var_5497_bool == 0) goto Label_12998; // 0x32c1 JumpB
	var_5500_int = 0; var_5501_float = 0; // 0x32c2 PushV
	var_5501_float = var_4548_float; // 0x32c3 Mov
	func_9585(var_5500_int, var_5501_float); // 0x32c4 NEW_2
	
Label_12998:
	var_5506_int = 45176; // 0x32c6 PushI
	var_5507_bool = var_4547_int == var_5506_int; // 0x32c7 Eq
	if(var_5507_bool == 0) goto Label_13012; // 0x32c8 JumpB
	var_5508_bool = 0; var_5509_object = Obj(); // 0x32c9 PushV
	var_5510_object = GlobalVars[16]; // 0x32ca PushGE
	var_5509_object = var_5510_object; // 0x32cb Mov
	func_11963(var_5508_bool, var_5509_object); // 0x32cd NEW_2
	if(var_5508_bool == 0) goto Label_13012; // 0x32cf JumpB
	var_5511_int = 0; var_5512_float = 0; // 0x32d0 PushV
	var_5512_float = var_4548_float; // 0x32d1 Mov
	func_9594(var_5511_int, var_5512_float); // 0x32d2 NEW_2
	
Label_13012:
	var_5517_int = 45177; // 0x32d4 PushI
	var_5518_bool = var_4547_int == var_5517_int; // 0x32d5 Eq
	if(var_5518_bool == 0) goto Label_13026; // 0x32d6 JumpB
	var_5519_bool = 0; var_5520_object = Obj(); // 0x32d7 PushV
	var_5521_object = GlobalVars[16]; // 0x32d8 PushGE
	var_5520_object = var_5521_object; // 0x32d9 Mov
	func_11963(var_5519_bool, var_5520_object); // 0x32db NEW_2
	if(var_5519_bool == 0) goto Label_13026; // 0x32dd JumpB
	var_5522_int = 0; var_5523_float = 0; // 0x32de PushV
	var_5523_float = var_4548_float; // 0x32df Mov
	func_9603(var_5522_int, var_5523_float); // 0x32e0 NEW_2
	
Label_13026:
	var_5528_int = 45178; // 0x32e2 PushI
	var_5529_bool = var_4547_int == var_5528_int; // 0x32e3 Eq
	if(var_5529_bool == 0) goto Label_13040; // 0x32e4 JumpB
	var_5530_bool = 0; var_5531_object = Obj(); // 0x32e5 PushV
	var_5532_object = GlobalVars[16]; // 0x32e6 PushGE
	var_5531_object = var_5532_object; // 0x32e7 Mov
	func_11963(var_5530_bool, var_5531_object); // 0x32e9 NEW_2
	if(var_5530_bool == 0) goto Label_13040; // 0x32eb JumpB
	var_5533_int = 0; var_5534_float = 0; // 0x32ec PushV
	var_5534_float = var_4548_float; // 0x32ed Mov
	func_9612(var_5533_int, var_5534_float); // 0x32ee NEW_2
	
Label_13040:
	var_5539_int = 45179; // 0x32f0 PushI
	var_5540_bool = var_4547_int == var_5539_int; // 0x32f1 Eq
	if(var_5540_bool == 0) goto Label_13054; // 0x32f2 JumpB
	var_5541_bool = 0; var_5542_object = Obj(); // 0x32f3 PushV
	var_5543_object = GlobalVars[16]; // 0x32f4 PushGE
	var_5542_object = var_5543_object; // 0x32f5 Mov
	func_11963(var_5541_bool, var_5542_object); // 0x32f7 NEW_2
	if(var_5541_bool == 0) goto Label_13054; // 0x32f9 JumpB
	var_5544_int = 0; var_5545_float = 0; // 0x32fa PushV
	var_5545_float = var_4548_float; // 0x32fb Mov
	func_9621(var_5544_int, var_5545_float); // 0x32fc NEW_2
	
Label_13054:
	var_5550_int = 45180; // 0x32fe PushI
	var_5551_bool = var_4547_int == var_5550_int; // 0x32ff Eq
	if(var_5551_bool == 0) goto Label_13068; // 0x3300 JumpB
	var_5552_bool = 0; var_5553_object = Obj(); // 0x3301 PushV
	var_5554_object = GlobalVars[16]; // 0x3302 PushGE
	var_5553_object = var_5554_object; // 0x3303 Mov
	func_11963(var_5552_bool, var_5553_object); // 0x3305 NEW_2
	if(var_5552_bool == 0) goto Label_13068; // 0x3307 JumpB
	var_5555_int = 0; var_5556_float = 0; // 0x3308 PushV
	var_5556_float = var_4548_float; // 0x3309 Mov
	func_9630(var_5555_int, var_5556_float); // 0x330a NEW_2
	
Label_13068:
	var_5561_int = 45181; // 0x330c PushI
	var_5562_bool = var_4547_int == var_5561_int; // 0x330d Eq
	if(var_5562_bool == 0) goto Label_13082; // 0x330e JumpB
	var_5563_bool = 0; var_5564_object = Obj(); // 0x330f PushV
	var_5565_object = GlobalVars[16]; // 0x3310 PushGE
	var_5564_object = var_5565_object; // 0x3311 Mov
	func_11963(var_5563_bool, var_5564_object); // 0x3313 NEW_2
	if(var_5563_bool == 0) goto Label_13082; // 0x3315 JumpB
	var_5566_int = 0; var_5567_float = 0; // 0x3316 PushV
	var_5567_float = var_4548_float; // 0x3317 Mov
	func_9639(var_5566_int, var_5567_float); // 0x3318 NEW_2
	
Label_13082:
	var_5572_int = 45182; // 0x331a PushI
	var_5573_bool = var_4547_int == var_5572_int; // 0x331b Eq
	if(var_5573_bool == 0) goto Label_13096; // 0x331c JumpB
	var_5574_bool = 0; var_5575_object = Obj(); // 0x331d PushV
	var_5576_object = GlobalVars[16]; // 0x331e PushGE
	var_5575_object = var_5576_object; // 0x331f Mov
	func_11963(var_5574_bool, var_5575_object); // 0x3321 NEW_2
	if(var_5574_bool == 0) goto Label_13096; // 0x3323 JumpB
	var_5577_int = 0; var_5578_float = 0; // 0x3324 PushV
	var_5578_float = var_4548_float; // 0x3325 Mov
	func_9684(var_5577_int, var_5578_float); // 0x3326 NEW_2
	
Label_13096:
	var_5583_int = 45183; // 0x3328 PushI
	var_5584_bool = var_4547_int == var_5583_int; // 0x3329 Eq
	if(var_5584_bool == 0) goto Label_13110; // 0x332a JumpB
	var_5585_bool = 0; var_5586_object = Obj(); // 0x332b PushV
	var_5587_object = GlobalVars[16]; // 0x332c PushGE
	var_5586_object = var_5587_object; // 0x332d Mov
	func_11963(var_5585_bool, var_5586_object); // 0x332f NEW_2
	if(var_5585_bool == 0) goto Label_13110; // 0x3331 JumpB
	var_5588_int = 0; var_5589_float = 0; // 0x3332 PushV
	var_5589_float = var_4548_float; // 0x3333 Mov
	func_9738(var_5588_int, var_5589_float); // 0x3334 NEW_2
	
Label_13110:
	var_5594_int = 45184; // 0x3336 PushI
	var_5595_bool = var_4547_int == var_5594_int; // 0x3337 Eq
	if(var_5595_bool == 0) goto Label_13124; // 0x3338 JumpB
	var_5596_bool = 0; var_5597_object = Obj(); // 0x3339 PushV
	var_5598_object = GlobalVars[16]; // 0x333a PushGE
	var_5597_object = var_5598_object; // 0x333b Mov
	func_11963(var_5596_bool, var_5597_object); // 0x333d NEW_2
	if(var_5596_bool == 0) goto Label_13124; // 0x333f JumpB
	var_5599_int = 0; var_5600_float = 0; // 0x3340 PushV
	var_5600_float = var_4548_float; // 0x3341 Mov
	func_9774(var_5599_int, var_5600_float); // 0x3342 NEW_2
	
Label_13124:
	var_5605_int = 45199; // 0x3344 PushI
	var_5606_bool = var_4547_int == var_5605_int; // 0x3345 Eq
	if(var_5606_bool == 0) goto Label_13139; // 0x3346 JumpB
	var_5607_bool = 0; var_5608_object = Obj(); // 0x3347 PushV
	var_5609_object = GlobalVars[16]; // 0x3348 PushGE
	var_5608_object = var_5609_object; // 0x3349 Mov
	func_11735(var_5608_object); // 0x334b NEW_2
	var_5614_bool = var_5607_bool == 0; // 0x334d Not
	if(var_5614_bool == 0) goto Label_13139; // 0x334e JumpB
	var_5615_int = 0; var_5616_float = 0; // 0x334f PushV
	var_5616_float = var_4548_float; // 0x3350 Mov
	func_9855(var_5615_int, var_5616_float); // 0x3351 NEW_2
	
Label_13139:
	var_5621_int = 45200; // 0x3353 PushI
	var_5622_bool = var_4547_int == var_5621_int; // 0x3354 Eq
	if(var_5622_bool == 0) goto Label_13154; // 0x3355 JumpB
	var_5623_bool = 0; var_5624_object = Obj(); // 0x3356 PushV
	var_5625_object = GlobalVars[16]; // 0x3357 PushGE
	var_5624_object = var_5625_object; // 0x3358 Mov
	func_11723(var_5624_object); // 0x335a NEW_2
	var_5630_bool = var_5623_bool == 0; // 0x335c Not
	if(var_5630_bool == 0) goto Label_13154; // 0x335d JumpB
	var_5631_int = 0; var_5632_float = 0; // 0x335e PushV
	var_5632_float = var_4548_float; // 0x335f Mov
	func_9846(var_5631_int, var_5632_float); // 0x3360 NEW_2
	
Label_13154:
	var_5637_int = 45201; // 0x3362 PushI
	var_5638_bool = var_4547_int == var_5637_int; // 0x3363 Eq
	if(var_5638_bool == 0) goto Label_13169; // 0x3364 JumpB
	var_5639_bool = 0; var_5640_object = Obj(); // 0x3365 PushV
	var_5641_object = GlobalVars[16]; // 0x3366 PushGE
	var_5640_object = var_5641_object; // 0x3367 Mov
	func_11747(var_5640_object); // 0x3369 NEW_2
	var_5646_bool = var_5639_bool == 0; // 0x336b Not
	if(var_5646_bool == 0) goto Label_13169; // 0x336c JumpB
	var_5647_int = 0; var_5648_float = 0; // 0x336d PushV
	var_5648_float = var_4548_float; // 0x336e Mov
	func_9954(var_5647_int, var_5648_float); // 0x336f NEW_2
	
Label_13169:
	var_5653_int = 45202; // 0x3371 PushI
	var_5654_bool = var_4547_int == var_5653_int; // 0x3372 Eq
	if(var_5654_bool == 0) goto Label_13184; // 0x3373 JumpB
	var_5655_bool = 0; var_5656_object = Obj(); // 0x3374 PushV
	var_5657_object = GlobalVars[16]; // 0x3375 PushGE
	var_5656_object = var_5657_object; // 0x3376 Mov
	func_11759(var_5656_object); // 0x3378 NEW_2
	var_5662_bool = var_5655_bool == 0; // 0x337a Not
	if(var_5662_bool == 0) goto Label_13184; // 0x337b JumpB
	var_5663_int = 0; var_5664_float = 0; // 0x337c PushV
	var_5664_float = var_4548_float; // 0x337d Mov
	func_9927(var_5663_int, var_5664_float); // 0x337e NEW_2
	
Label_13184:
	var_5669_int = 45203; // 0x3380 PushI
	var_5670_bool = var_4547_int == var_5669_int; // 0x3381 Eq
	if(var_5670_bool == 0) goto Label_13199; // 0x3382 JumpB
	var_5671_bool = 0; var_5672_object = Obj(); // 0x3383 PushV
	var_5673_object = GlobalVars[16]; // 0x3384 PushGE
	var_5672_object = var_5673_object; // 0x3385 Mov
	func_11771(var_5672_object); // 0x3387 NEW_2
	var_5678_bool = var_5671_bool == 0; // 0x3389 Not
	if(var_5678_bool == 0) goto Label_13199; // 0x338a JumpB
	var_5679_int = 0; var_5680_float = 0; // 0x338b PushV
	var_5680_float = var_4548_float; // 0x338c Mov
	func_9981(var_5679_int, var_5680_float); // 0x338d NEW_2
	
Label_13199:
	var_5685_int = 45205; // 0x338f PushI
	var_5686_bool = var_4547_int == var_5685_int; // 0x3390 Eq
	if(var_5686_bool == 0) goto Label_13214; // 0x3391 JumpB
	var_5687_bool = 0; var_5688_object = Obj(); // 0x3392 PushV
	var_5689_object = GlobalVars[16]; // 0x3393 PushGE
	var_5688_object = var_5689_object; // 0x3394 Mov
	func_11783(var_5688_object); // 0x3396 NEW_2
	var_5694_bool = var_5687_bool == 0; // 0x3398 Not
	if(var_5694_bool == 0) goto Label_13214; // 0x3399 JumpB
	var_5695_int = 0; var_5696_float = 0; // 0x339a PushV
	var_5696_float = var_4548_float; // 0x339b Mov
	func_10134(var_5695_int, var_5696_float); // 0x339c NEW_2
	
Label_13214:
	var_5701_int = 45206; // 0x339e PushI
	var_5702_bool = var_4547_int == var_5701_int; // 0x339f Eq
	if(var_5702_bool == 0) goto Label_13221; // 0x33a0 JumpB
	var_5703_int = 0; var_5704_float = 0; // 0x33a1 PushV
	var_5704_float = var_4548_float; // 0x33a2 Mov
	func_10179(var_5703_int, var_5704_float); // 0x33a3 NEW_2
	
Label_13221:
	var_5709_int = 45207; // 0x33a5 PushI
	var_5710_bool = var_4547_int == var_5709_int; // 0x33a6 Eq
	if(var_5710_bool == 0) goto Label_13228; // 0x33a7 JumpB
	var_5711_int = 0; var_5712_float = 0; // 0x33a8 PushV
	var_5712_float = var_4548_float; // 0x33a9 Mov
	func_9828(var_5711_int, var_5712_float); // 0x33aa NEW_2
	
Label_13228:
	var_5717_int = 45208; // 0x33ac PushI
	var_5718_bool = var_4547_int == var_5717_int; // 0x33ad Eq
	if(var_5718_bool == 0) goto Label_13235; // 0x33ae JumpB
	var_5719_int = 0; var_5720_float = 0; // 0x33af PushV
	var_5720_float = var_4548_float; // 0x33b0 Mov
	func_9837(var_5719_int, var_5720_float); // 0x33b1 NEW_2
	
Label_13235:
	var_5725_int = 45209; // 0x33b3 PushI
	var_5726_bool = var_4547_int == var_5725_int; // 0x33b4 Eq
	if(var_5726_bool == 0) goto Label_13242; // 0x33b5 JumpB
	var_5727_int = 0; var_5728_float = 0; // 0x33b6 PushV
	var_5728_float = var_4548_float; // 0x33b7 Mov
	func_9882(var_5727_int, var_5728_float); // 0x33b8 NEW_2
	
Label_13242:
	var_5733_int = 45210; // 0x33ba PushI
	var_5734_bool = var_4547_int == var_5733_int; // 0x33bb Eq
	if(var_5734_bool == 0) goto Label_13249; // 0x33bc JumpB
	var_5735_int = 0; var_5736_float = 0; // 0x33bd PushV
	var_5736_float = var_4548_float; // 0x33be Mov
	func_9936(var_5735_int, var_5736_float); // 0x33bf NEW_2
	
Label_13249:
	var_5741_int = 45211; // 0x33c1 PushI
	var_5742_bool = var_4547_int == var_5741_int; // 0x33c2 Eq
	if(var_5742_bool == 0) goto Label_13256; // 0x33c3 JumpB
	var_5743_int = 0; var_5744_float = 0; // 0x33c4 PushV
	var_5744_float = var_4548_float; // 0x33c5 Mov
	func_9990(var_5743_int, var_5744_float); // 0x33c6 NEW_2
	
Label_13256:
	var_5749_int = 45212; // 0x33c8 PushI
	var_5750_bool = var_4547_int == var_5749_int; // 0x33c9 Eq
	if(var_5750_bool == 0) goto Label_13263; // 0x33ca JumpB
	var_5751_int = 0; var_5752_float = 0; // 0x33cb PushV
	var_5752_float = var_4548_float; // 0x33cc Mov
	func_10017(var_5751_int, var_5752_float); // 0x33cd NEW_2
	
Label_13263:
	var_5757_int = 45213; // 0x33cf PushI
	var_5758_bool = var_4547_int == var_5757_int; // 0x33d0 Eq
	if(var_5758_bool == 0) goto Label_13270; // 0x33d1 JumpB
	var_5759_int = 0; var_5760_float = 0; // 0x33d2 PushV
	var_5760_float = var_4548_float; // 0x33d3 Mov
	func_10080(var_5759_int, var_5760_float); // 0x33d4 NEW_2
	
Label_13270:
	var_5765_int = 45214; // 0x33d6 PushI
	var_5766_bool = var_4547_int == var_5765_int; // 0x33d7 Eq
	if(var_5766_bool == 0) goto Label_13277; // 0x33d8 JumpB
	var_5767_int = 0; var_5768_float = 0; // 0x33d9 PushV
	var_5768_float = var_4548_float; // 0x33da Mov
	func_10116(var_5767_int, var_5768_float); // 0x33db NEW_2
	
Label_13277:
	var_5773_int = 45215; // 0x33dd PushI
	var_5774_bool = var_4547_int == var_5773_int; // 0x33de Eq
	if(var_5774_bool == 0) goto Label_13284; // 0x33df JumpB
	var_5775_int = 0; var_5776_float = 0; // 0x33e0 PushV
	var_5776_float = var_4548_float; // 0x33e1 Mov
	func_10161(var_5775_int, var_5776_float); // 0x33e2 NEW_2
	
Label_13284:
	var_5781_int = 45216; // 0x33e4 PushI
	var_5782_bool = var_4547_int == var_5781_int; // 0x33e5 Eq
	if(var_5782_bool == 0) goto Label_13291; // 0x33e6 JumpB
	var_5783_int = 0; var_5784_float = 0; // 0x33e7 PushV
	var_5784_float = var_4548_float; // 0x33e8 Mov
	func_9657(var_5783_int, var_5784_float); // 0x33e9 NEW_2
	
Label_13291:
	var_5789_int = 45217; // 0x33eb PushI
	var_5790_bool = var_4547_int == var_5789_int; // 0x33ec Eq
	if(var_5790_bool == 0) goto Label_13298; // 0x33ed JumpB
	var_5791_int = 0; var_5792_float = 0; // 0x33ee PushV
	var_5792_float = var_4548_float; // 0x33ef Mov
	func_9702(var_5791_int, var_5792_float); // 0x33f0 NEW_2
	
Label_13298:
	var_5797_int = 45218; // 0x33f2 PushI
	var_5798_bool = var_4547_int == var_5797_int; // 0x33f3 Eq
	if(var_5798_bool == 0) goto Label_13313; // 0x33f4 JumpB
	var_5799_bool = 0; var_5800_object = Obj(); // 0x33f5 PushV
	var_5801_object = GlobalVars[16]; // 0x33f6 PushGE
	var_5800_object = var_5801_object; // 0x33f7 Mov
	func_11807(var_5800_object); // 0x33f9 NEW_2
	var_5806_bool = var_5799_bool == 0; // 0x33fb Not
	if(var_5806_bool == 0) goto Label_13313; // 0x33fc JumpB
	var_5807_int = 0; var_5808_float = 0; // 0x33fd PushV
	var_5808_float = var_4548_float; // 0x33fe Mov
	func_9666(var_5807_int, var_5808_float); // 0x33ff NEW_2
	
Label_13313:
	var_5813_int = 45219; // 0x3401 PushI
	var_5814_bool = var_4547_int == var_5813_int; // 0x3402 Eq
	if(var_5814_bool == 0) goto Label_13337; // 0x3403 JumpB
	var_5815_bool = 0; var_5816_object = Obj(); // 0x3404 PushV
	var_5817_object = GlobalVars[16]; // 0x3405 PushGE
	var_5816_object = var_5817_object; // 0x3406 Mov
	func_11819(var_5816_object); // 0x3408 NEW_2
	var_5822_bool = var_5815_bool == 0; // 0x340a Not
	if(var_5822_bool == 0) goto Label_13337; // 0x340b JumpB
	var_5823_object = Obj(); var_5824_object = Obj(); // 0x340c PushV
	var_5825_object = GlobalVars[16]; // 0x340d PushGE
	var_5823_object = var_5825_object; // 0x340e Mov
	var_5826_object = GlobalVars[16]; // 0x3410 PushGE
	var_5824_object = var_5826_object; // 0x3411 Mov
	func_10330(); // 0x3413 NEW_2
	var_5835_int = 0; var_5836_float = 0; // 0x3415 PushV
	var_5836_float = var_4548_float; // 0x3416 Mov
	func_9675(var_5835_int, var_5836_float); // 0x3417 NEW_2
	
Label_13337:
	var_5841_int = 45220; // 0x3419 PushI
	var_5842_bool = var_4547_int == var_5841_int; // 0x341a Eq
	if(var_5842_bool == 0) goto Label_13352; // 0x341b JumpB
	var_5843_bool = 0; var_5844_object = Obj(); // 0x341c PushV
	var_5845_object = GlobalVars[16]; // 0x341d PushGE
	var_5844_object = var_5845_object; // 0x341e Mov
	func_11831(var_5844_object); // 0x3420 NEW_2
	var_5850_bool = var_5843_bool == 0; // 0x3422 Not
	if(var_5850_bool == 0) goto Label_13352; // 0x3423 JumpB
	var_5851_int = 0; var_5852_float = 0; // 0x3424 PushV
	var_5852_float = var_4548_float; // 0x3425 Mov
	func_9756(var_5851_int, var_5852_float); // 0x3426 NEW_2
	
Label_13352:
	var_5857_int = 45221; // 0x3428 PushI
	var_5858_bool = var_4547_int == var_5857_int; // 0x3429 Eq
	if(var_5858_bool == 0) goto Label_13367; // 0x342a JumpB
	var_5859_bool = 0; var_5860_object = Obj(); // 0x342b PushV
	var_5861_object = GlobalVars[16]; // 0x342c PushGE
	var_5860_object = var_5861_object; // 0x342d Mov
	func_12069(var_5860_object); // 0x342f NEW_2
	var_5866_bool = var_5859_bool == 0; // 0x3431 Not
	if(var_5866_bool == 0) goto Label_13367; // 0x3432 JumpB
	var_5867_int = 0; var_5868_float = 0; // 0x3433 PushV
	var_5868_float = var_4548_float; // 0x3434 Mov
	func_9765(var_5867_int, var_5868_float); // 0x3435 NEW_2
	
Label_13367:
	var_5873_int = 45222; // 0x3437 PushI
	var_5874_bool = var_4547_int == var_5873_int; // 0x3438 Eq
	if(var_5874_bool == 0) goto Label_13387; // 0x3439 JumpB
	var_5875_bool = 0; var_5876_object = Obj(); // 0x343a PushV
	var_5877_object = GlobalVars[16]; // 0x343b PushGE
	var_5876_object = var_5877_object; // 0x343c Mov
	func_11711(var_5876_object); // 0x343e NEW_2
	var_5882_bool = var_5875_bool == 0; // 0x3440 Not
	if(var_5882_bool == 0) goto Label_13387; // 0x3441 JumpB
	var_5883_object = Obj(); var_5884_object = Obj(); // 0x3442 PushV
	var_5885_object = GlobalVars[16]; // 0x3443 PushGE
	var_5883_object = var_5885_object; // 0x3444 Mov
	var_5886_object = GlobalVars[16]; // 0x3446 PushGE
	var_5884_object = var_5886_object; // 0x3447 Mov
	func_10541(); // 0x3449 NEW_2
	
Label_13387:
	var_5923_int = 45223; // 0x344b PushI
	var_5924_bool = var_4547_int == var_5923_int; // 0x344c Eq
	if(var_5924_bool == 0) goto Label_13402; // 0x344d JumpB
	var_5925_bool = 0; var_5926_object = Obj(); // 0x344e PushV
	var_5927_object = GlobalVars[16]; // 0x344f PushGE
	var_5926_object = var_5927_object; // 0x3450 Mov
	func_11843(var_5926_object); // 0x3452 NEW_2
	var_5932_bool = var_5925_bool == 0; // 0x3454 Not
	if(var_5932_bool == 0) goto Label_13402; // 0x3455 JumpB
	var_5933_int = 0; var_5934_float = 0; // 0x3456 PushV
	var_5934_float = var_4548_float; // 0x3457 Mov
	func_9963(var_5933_int, var_5934_float); // 0x3458 NEW_2
	
Label_13402:
	var_5939_int = 45224; // 0x345a PushI
	var_5940_bool = var_4547_int == var_5939_int; // 0x345b Eq
	if(var_5940_bool == 0) goto Label_13417; // 0x345c JumpB
	var_5941_bool = 0; var_5942_object = Obj(); // 0x345d PushV
	var_5943_object = GlobalVars[16]; // 0x345e PushGE
	var_5942_object = var_5943_object; // 0x345f Mov
	func_11855(var_5942_object); // 0x3461 NEW_2
	var_5948_bool = var_5941_bool == 0; // 0x3463 Not
	if(var_5948_bool == 0) goto Label_13417; // 0x3464 JumpB
	var_5949_int = 0; var_5950_float = 0; // 0x3465 PushV
	var_5950_float = var_4548_float; // 0x3466 Mov
	func_10107(var_5949_int, var_5950_float); // 0x3467 NEW_2
	
Label_13417:
	var_5955_int = 45225; // 0x3469 PushI
	var_5956_bool = var_4547_int == var_5955_int; // 0x346a Eq
	if(var_5956_bool == 0) goto Label_13441; // 0x346b JumpB
	var_5957_bool = 0; var_5958_object = Obj(); // 0x346c PushV
	var_5959_object = GlobalVars[16]; // 0x346d PushGE
	var_5958_object = var_5959_object; // 0x346e Mov
	func_11879(var_5958_object); // 0x3470 NEW_2
	var_5964_bool = var_5957_bool == 0; // 0x3472 Not
	if(var_5964_bool == 0) goto Label_13441; // 0x3473 JumpB
	var_5965_object = Obj(); var_5966_object = Obj(); // 0x3474 PushV
	var_5967_object = GlobalVars[16]; // 0x3475 PushGE
	var_5965_object = var_5967_object; // 0x3476 Mov
	var_5968_object = GlobalVars[16]; // 0x3478 PushGE
	var_5966_object = var_5968_object; // 0x3479 Mov
	func_10378(); // 0x347b NEW_2
	var_5977_int = 0; var_5978_float = 0; // 0x347d PushV
	var_5978_float = var_4548_float; // 0x347e Mov
	func_10188(var_5977_int, var_5978_float); // 0x347f NEW_2
	
Label_13441:
	var_5983_int = 45226; // 0x3481 PushI
	var_5984_bool = var_4547_int == var_5983_int; // 0x3482 Eq
	if(var_5984_bool == 0) goto Label_13477; // 0x3483 JumpB
	var_5985_bool = 0; // 0x3484 PushV
	var_5985_bool = 0; // 0x3485 MovB
	var_5986_bool = 0; var_5987_object = Obj(); // 0x3486 PushV
	var_5988_object = GlobalVars[16]; // 0x3487 PushGE
	var_5987_object = var_5988_object; // 0x3488 Mov
	func_11867(var_5987_object); // 0x348a NEW_2
	var_5993_bool = var_5986_bool == 0; // 0x348c Not
	if(var_5993_bool == 0) goto Label_13463; // 0x348d JumpB
	var_5994_bool = 0; var_5995_object = Obj(); // 0x348e PushV
	var_5996_object = GlobalVars[16]; // 0x348f PushGE
	var_5995_object = var_5996_object; // 0x3490 Mov
	func_11795(var_5995_object); // 0x3492 NEW_2
	var_6001_bool = var_5994_bool == 0; // 0x3494 Not
	if(var_6001_bool == 0) goto Label_13463; // 0x3495 JumpB
	var_5985_bool = 1; // 0x3496 MovB
	
Label_13463:
	if(var_5985_bool == 0) goto Label_13477; // 0x3497 JumpB
	var_6002_object = Obj(); var_6003_object = Obj(); // 0x3498 PushV
	var_6004_object = GlobalVars[16]; // 0x3499 PushGE
	var_6002_object = var_6004_object; // 0x349a Mov
	var_6005_object = GlobalVars[16]; // 0x349c PushGE
	var_6003_object = var_6005_object; // 0x349d Mov
	func_10394(); // 0x349f NEW_2
	var_6014_int = 0; var_6015_float = 0; // 0x34a1 PushV
	var_6015_float = var_4548_float; // 0x34a2 Mov
	func_10152(var_6014_int, var_6015_float); // 0x34a3 NEW_2
	
Label_13477:
	var_6020_int = 45227; // 0x34a5 PushI
	var_6021_bool = var_4547_int == var_6020_int; // 0x34a6 Eq
	if(var_6021_bool == 0) goto Label_13501; // 0x34a7 JumpB
	var_6022_bool = 0; var_6023_object = Obj(); // 0x34a8 PushV
	var_6024_object = GlobalVars[16]; // 0x34a9 PushGE
	var_6023_object = var_6024_object; // 0x34aa Mov
	func_11891(var_6023_object); // 0x34ac NEW_2
	var_6029_bool = var_6022_bool == 0; // 0x34ae Not
	if(var_6029_bool == 0) goto Label_13501; // 0x34af JumpB
	var_6030_object = Obj(); var_6031_object = Obj(); // 0x34b0 PushV
	var_6032_object = GlobalVars[16]; // 0x34b1 PushGE
	var_6030_object = var_6032_object; // 0x34b2 Mov
	var_6033_object = GlobalVars[16]; // 0x34b4 PushGE
	var_6031_object = var_6033_object; // 0x34b5 Mov
	func_10362(); // 0x34b7 NEW_2
	var_6042_int = 0; var_6043_float = 0; // 0x34b9 PushV
	var_6043_float = var_4548_float; // 0x34ba Mov
	func_10170(var_6042_int, var_6043_float); // 0x34bb NEW_2
	
Label_13501:
	var_6048_int = 45228; // 0x34bd PushI
	var_6049_bool = var_4547_int == var_6048_int; // 0x34be Eq
	if(var_6049_bool == 0) goto Label_13516; // 0x34bf JumpB
	var_6050_bool = 0; var_6051_object = Obj(); // 0x34c0 PushV
	var_6052_object = GlobalVars[16]; // 0x34c1 PushGE
	var_6051_object = var_6052_object; // 0x34c2 Mov
	func_11903(var_6051_object); // 0x34c4 NEW_2
	var_6057_bool = var_6050_bool == 0; // 0x34c6 Not
	if(var_6057_bool == 0) goto Label_13516; // 0x34c7 JumpB
	var_6058_int = 0; var_6059_float = 0; // 0x34c8 PushV
	var_6059_float = var_4548_float; // 0x34c9 Mov
	func_9648(var_6058_int, var_6059_float); // 0x34ca NEW_2
	
Label_13516:
	var_6064_int = 45229; // 0x34cc PushI
	var_6065_bool = var_4547_int == var_6064_int; // 0x34cd Eq
	if(var_6065_bool == 0) goto Label_13523; // 0x34ce JumpB
	var_6066_int = 0; var_6067_float = 0; // 0x34cf PushV
	var_6067_float = var_4548_float; // 0x34d0 Mov
	func_9891(var_6066_int, var_6067_float); // 0x34d1 NEW_2
	
Label_13523:
	var_6072_int = 45230; // 0x34d3 PushI
	var_6073_bool = var_4547_int == var_6072_int; // 0x34d4 Eq
	if(var_6073_bool == 0) goto Label_13530; // 0x34d5 JumpB
	var_6074_int = 0; var_6075_float = 0; // 0x34d6 PushV
	var_6075_float = var_4548_float; // 0x34d7 Mov
	func_9900(var_6074_int, var_6075_float); // 0x34d8 NEW_2
	
Label_13530:
	var_6080_int = 45231; // 0x34da PushI
	var_6081_bool = var_4547_int == var_6080_int; // 0x34db Eq
	if(var_6081_bool == 0) goto Label_13537; // 0x34dc JumpB
	var_6082_int = 0; var_6083_float = 0; // 0x34dd PushV
	var_6083_float = var_4548_float; // 0x34de Mov
	func_9945(var_6082_int, var_6083_float); // 0x34df NEW_2
	
Label_13537:
	var_6088_int = 45232; // 0x34e1 PushI
	var_6089_bool = var_4547_int == var_6088_int; // 0x34e2 Eq
	if(var_6089_bool == 0) goto Label_13552; // 0x34e3 JumpB
	var_6090_bool = 0; var_6091_object = Obj(); // 0x34e4 PushV
	var_6092_object = GlobalVars[16]; // 0x34e5 PushGE
	var_6091_object = var_6092_object; // 0x34e6 Mov
	func_11915(var_6091_object); // 0x34e8 NEW_2
	var_6097_bool = var_6090_bool == 0; // 0x34ea Not
	if(var_6097_bool == 0) goto Label_13552; // 0x34eb JumpB
	var_6098_int = 0; var_6099_float = 0; // 0x34ec PushV
	var_6099_float = var_4548_float; // 0x34ed Mov
	func_9729(var_6098_int, var_6099_float); // 0x34ee NEW_2
	
Label_13552:
	var_6104_int = 45239; // 0x34f0 PushI
	var_6105_bool = var_4547_int == var_6104_int; // 0x34f1 Eq
	if(var_6105_bool == 0) goto Label_13568; // 0x34f2 JumpB
	var_6106_object = Obj(); var_6107_object = Obj(); // 0x34f3 PushV
	var_6108_object = GlobalVars[16]; // 0x34f4 PushGE
	var_6106_object = var_6108_object; // 0x34f5 Mov
	var_6109_object = GlobalVars[16]; // 0x34f7 PushGE
	var_6107_object = var_6109_object; // 0x34f8 Mov
	func_10410(); // 0x34fa NEW_2
	var_6112_int = 0; var_6113_float = 0; // 0x34fc PushV
	var_6113_float = var_4548_float; // 0x34fd Mov
	func_10125(var_6112_int, var_6113_float); // 0x34fe NEW_2
	
Label_13568:
	var_6118_int = 45260; // 0x3500 PushI
	var_6119_bool = var_4547_int == var_6118_int; // 0x3501 Eq
	if(var_6119_bool == 0) goto Label_13583; // 0x3502 JumpB
	var_6120_bool = 0; var_6121_object = Obj(); // 0x3503 PushV
	var_6122_object = GlobalVars[16]; // 0x3504 PushGE
	var_6121_object = var_6122_object; // 0x3505 Mov
	func_11927(var_6121_object); // 0x3507 NEW_2
	var_6127_bool = var_6120_bool == 0; // 0x3509 Not
	if(var_6127_bool == 0) goto Label_13583; // 0x350a JumpB
	var_6128_int = 0; var_6129_float = 0; // 0x350b PushV
	var_6129_float = var_4548_float; // 0x350c Mov
	func_10143(var_6128_int, var_6129_float); // 0x350d NEW_2
	
Label_13583:
	var_6134_int = 45261; // 0x350f PushI
	var_6135_bool = var_4547_int == var_6134_int; // 0x3510 Eq
	if(var_6135_bool == 0) goto Label_13607; // 0x3511 JumpB
	var_6136_bool = 0; var_6137_object = Obj(); // 0x3512 PushV
	var_6138_object = GlobalVars[16]; // 0x3513 PushGE
	var_6137_object = var_6138_object; // 0x3514 Mov
	func_11939(var_6137_object); // 0x3516 NEW_2
	var_6143_bool = var_6136_bool == 0; // 0x3518 Not
	if(var_6143_bool == 0) goto Label_13607; // 0x3519 JumpB
	var_6144_object = Obj(); var_6145_object = Obj(); // 0x351a PushV
	var_6146_object = GlobalVars[16]; // 0x351b PushGE
	var_6144_object = var_6146_object; // 0x351c Mov
	var_6147_object = GlobalVars[16]; // 0x351e PushGE
	var_6145_object = var_6147_object; // 0x351f Mov
	func_10346(); // 0x3521 NEW_2
	var_6156_int = 0; var_6157_float = 0; // 0x3523 PushV
	var_6157_float = var_4548_float; // 0x3524 Mov
	func_10197(var_6156_int, var_6157_float); // 0x3525 NEW_2
	
Label_13607:
	var_6162_int = 45267; // 0x3527 PushI
	var_6163_bool = var_4547_int == var_6162_int; // 0x3528 Eq
	if(var_6163_bool == 0) goto Label_13619; // 0x3529 JumpB
	var_6164_object = Obj(); var_6165_object = Obj(); // 0x352a PushV
	var_6166_object = GlobalVars[16]; // 0x352b PushGE
	var_6164_object = var_6166_object; // 0x352c Mov
	var_6167_object = GlobalVars[16]; // 0x352e PushGE
	var_6165_object = var_6167_object; // 0x352f Mov
	func_10416(); // 0x3531 NEW_2
	
Label_13619:
	var_6176_int = 45268; // 0x3533 PushI
	var_6177_bool = var_4547_int == var_6176_int; // 0x3534 Eq
	if(var_6177_bool == 0) goto Label_13631; // 0x3535 JumpB
	var_6178_object = Obj(); var_6179_object = Obj(); // 0x3536 PushV
	var_6180_object = GlobalVars[16]; // 0x3537 PushGE
	var_6178_object = var_6180_object; // 0x3538 Mov
	var_6181_object = GlobalVars[16]; // 0x353a PushGE
	var_6179_object = var_6181_object; // 0x353b Mov
	func_10433(); // 0x353d NEW_2
	
Label_13631:
	var_6190_int = 45269; // 0x353f PushI
	var_6191_bool = var_4547_int == var_6190_int; // 0x3540 Eq
	if(var_6191_bool == 0) goto Label_13643; // 0x3541 JumpB
	var_6192_object = Obj(); var_6193_object = Obj(); // 0x3542 PushV
	var_6194_object = GlobalVars[16]; // 0x3543 PushGE
	var_6192_object = var_6194_object; // 0x3544 Mov
	var_6195_object = GlobalVars[16]; // 0x3546 PushGE
	var_6193_object = var_6195_object; // 0x3547 Mov
	func_10450(); // 0x3549 NEW_2
	
Label_13643:
	var_6204_int = 45270; // 0x354b PushI
	var_6205_bool = var_4547_int == var_6204_int; // 0x354c Eq
	if(var_6205_bool == 0) goto Label_13655; // 0x354d JumpB
	var_6206_object = Obj(); var_6207_object = Obj(); // 0x354e PushV
	var_6208_object = GlobalVars[16]; // 0x354f PushGE
	var_6206_object = var_6208_object; // 0x3550 Mov
	var_6209_object = GlobalVars[16]; // 0x3552 PushGE
	var_6207_object = var_6209_object; // 0x3553 Mov
	func_10467(); // 0x3555 NEW_2
	
Label_13655:
	var_6218_int = 45271; // 0x3557 PushI
	var_6219_bool = var_4547_int == var_6218_int; // 0x3558 Eq
	if(var_6219_bool == 0) goto Label_13667; // 0x3559 JumpB
	var_6220_object = Obj(); var_6221_object = Obj(); // 0x355a PushV
	var_6222_object = GlobalVars[16]; // 0x355b PushGE
	var_6220_object = var_6222_object; // 0x355c Mov
	var_6223_object = GlobalVars[16]; // 0x355e PushGE
	var_6221_object = var_6223_object; // 0x355f Mov
	func_10484(); // 0x3561 NEW_2
	
Label_13667:
	var_6232_int = 45282; // 0x3563 PushI
	var_6233_bool = var_4547_int == var_6232_int; // 0x3564 Eq
	if(var_6233_bool == 0) goto Label_13690; // 0x3565 JumpB
	var_6234_bool = 0; var_6235_object = Obj(); // 0x3566 PushV
	var_6236_object = GlobalVars[16]; // 0x3567 PushGE
	var_6235_object = var_6236_object; // 0x3568 Mov
	func_11951(var_6235_object); // 0x356a NEW_2
	if(var_6234_bool == 0) goto Label_13690; // 0x356c JumpB
	var_6241_object = Obj(); var_6242_object = Obj(); // 0x356d PushV
	var_6243_object = GlobalVars[16]; // 0x356e PushGE
	var_6241_object = var_6243_object; // 0x356f Mov
	var_6244_object = GlobalVars[16]; // 0x3571 PushGE
	var_6242_object = var_6244_object; // 0x3572 Mov
	func_10520(var_6242_object); // 0x3574 NEW_2
	var_6277_int = 0; var_6278_float = 0; // 0x3576 PushV
	var_6278_float = var_4548_float; // 0x3577 Mov
	func_9864(var_6277_int, var_6278_float); // 0x3578 NEW_2
	
Label_13690:
	return 0; // 0x357a Return
}


func_80(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x50 PushV
	var_103_string = "player"; // 0x51 PushS
	FindActor(var_102_object, var_103_string); // 0x52 Func
	var_100_object = var_102_object; // 0x54 Mov
	return 2; // 0x55 Return
}


func_8275(var_4157_int, var_4158_int)
{
	var_4160_int = 0; var_4161_int = 0; var_4162_int = 0; var_4163_int = 0; // 0x2053 PushV
	var_4164_int = 0; // 0x2054 PushI
	var_4165_bool = var_4158_int == var_4164_int; // 0x2055 Eq
	if(var_4165_bool == 0) goto Label_8319; // 0x2056 JumpB
	var_4166_int = 2; // 0x2057 PushI
	var_4167_bool = var_4157_int == var_4166_int; // 0x2058 Eq
	if(var_4167_bool == 0) goto Label_8313; // 0x2059 JumpB
	var_4168_int = 0; // 0x205a PushV
	func_12264(var_4168_int); // 0x205b NEW_2
	var_4169_int = 0; // 0x205d PushI
	var_4170_bool = var_4168_int == var_4169_int; // 0x205e Eq
	if(var_4170_bool == 0) goto Label_8298; // 0x205f JumpB
	var_4171_string = "d1q01"; // 0x2060 PushS
	GetVariable(var_4171_string, var_4162_int); // 0x2061 Func
	var_4172_int = 1000; // 0x2063 PushI
	var_4173_bool = var_4162_int != var_4172_int; // 0x2064 Neq
	if(var_4173_bool == 0) goto Label_8297; // 0x2065 JumpB
	var_4174_string = "gameover_fail.xml"; // 0x2066 PushS
	GameOver(var_4174_string); // 0x2067 Func
	
Label_8297:
	goto Label_8313; // 0x2069 Jump
	
Label_8313:
	var_4175_int = 101; // 0x2079 PushI
	SendWorldWndMessage(var_4175_int); // 0x207a Func
	var_4176_string = "c_iWM_RealDayChange"; // 0x207c PushS
	SetVariable(var_4176_string, var_4157_int); // 0x207d Func
	
Label_8319:
	return 4; // 0x207f Return
	
Label_8298:
	var_4177_int = 0; // 0x206a PushV
	func_12264(var_4177_int); // 0x206b NEW_2
	var_4178_int = 1; // 0x206d PushI
	var_4179_bool = var_4177_int == var_4178_int; // 0x206e Eq
	if(var_4179_bool == 0) goto Label_8313; // 0x206f JumpB
	var_4180_string = "b1q01"; // 0x2070 PushS
	GetVariable(var_4180_string, var_4163_int); // 0x2071 Func
	var_4181_int = 1000; // 0x2073 PushI
	var_4182_bool = var_4163_int != var_4181_int; // 0x2074 Neq
	if(var_4182_bool == 0) goto Label_8313; // 0x2075 JumpB
	var_4183_string = "gameover_fail.xml"; // 0x2076 PushS
	GameOver(var_4183_string); // 0x2077 Func
}


func_10323()
{
	var_4641_string = ""; var_4642_bool = 0; // 0x2854 PushV
	var_4641_string = "mnogogrannik_han@door1"; // 0x2855 MovS
	var_4642_bool = 1; // 0x2856 MovB
	func_183(var_4641_string, var_4642_bool); // 0x2857 NEW_2
	return 0; // 0x2859 Return
}


func_87(var_585_bool, var_586_object, var_587_string)
{
	var_588_bool = 0; var_589_bool = 0; // 0x57 PushV
	var_590_string = "HasProperty"; // 0x58 PushS
	var_591_int = 2; // 0x59 PushI
	var_592_bool = IsFuncExist(var_586_object, var_590_string, var_591_int); // 0x5a FuncExist
	var_593_bool = var_592_bool == 0; // 0x5b Not
	if(var_593_bool == 0) goto Label_95; // 0x5c JumpB
	var_585_bool = 0; // 0x5d MovB
	return 2; // 0x5e Return
	
Label_95:
	HasProperty(var_587_string, var_589_bool); // 0x5f ObjFunc
	var_585_bool = var_589_bool; // 0x61 Mov
	return 2; // 0x62 Return
}


func_10330()
{
	var_5827_object = Obj(); var_5828_object = Obj(); // 0x285a PushV
	var_5829_object = Obj(); // 0x285b PushV
	func_12247(var_5829_object); // 0x285c NEW_2
	var_5828_object = var_5829_object; // 0x285d Mov
	var_5830_string = "d10q03GotoMark"; // 0x285f PushS
	var_5831_string = "pt_map_theater"; // 0x2860 PushS
	var_5832_int = 0; // 0x2861 PushI
	var_5833_int = 511154; // 0x2862 PushI
	var_5834_float = 0; // 0x2863 PushV
	func_290(var_5834_float); // 0x2864 NEW_2
	AddMark(var_5830_string, var_5831_string, var_5832_int, var_5833_int, var_5834_float); // 0x2866 ObjFunc
	return 2; // 0x2868 Return
}


func_1116(var_791_bool, var_792_int, var_793_int)
{
	var_794_int = 0; var_795_int = 0; // 0x45c PushV
	var_796_int = 0; // 0x45d PushV
	func_12264(var_796_int); // 0x45e NEW_2
	var_795_int = var_796_int; // 0x45f Mov
	var_800_int = 1; // 0x461 PushI
	var_801_bool = var_795_int == var_800_int; // 0x462 Eq
	if(var_801_bool == 0) goto Label_1137; // 0x463 JumpB
	var_802_bool = 0; // 0x464 PushV
	var_802_bool = 0; // 0x465 MovB
	var_803_int = 0; // 0x466 PushI
	var_804_bool = var_792_int == var_803_int; // 0x467 Eq
	if(var_804_bool == 0) goto Label_1133; // 0x468 JumpB
	var_805_int = 21; // 0x469 PushI
	var_806_bool = var_793_int < var_805_int; // 0x46a LT
	if(var_806_bool == 0) goto Label_1133; // 0x46b JumpB
	var_802_bool = 1; // 0x46c MovB
	
Label_1133:
	if(var_802_bool == 0) goto Label_1136; // 0x46d JumpB
	var_791_bool = 1; // 0x46e MovB
	return 2; // 0x46f Return
	
Label_1136:
	goto Label_1145; // 0x470 Jump
	
Label_1145:
	var_791_bool = 0; // 0x479 MovB
	return 2; // 0x47a Return
	
Label_1137:
	var_807_int = 2; // 0x471 PushI
	var_808_bool = var_795_int == var_807_int; // 0x472 Eq
	if(var_808_bool == 0) goto Label_1145; // 0x473 JumpB
	var_809_int = 5; // 0x474 PushI
	var_810_bool = var_792_int == var_809_int; // 0x475 Eq
	if(var_810_bool == 0) goto Label_1145; // 0x476 JumpB
	var_791_bool = 1; // 0x477 MovB
	return 2; // 0x478 Return
}


func_99(var_6256_bool, var_6257_object, var_6258_string, var_6259_float, var_6260_float, var_6261_float)
{
	var_6262_float = 0; var_6263_float = 0; // 0x63 PushV
	var_6264_bool = 0; var_6265_object = Obj(); var_6266_string = ""; // 0x64 PushV
	var_6265_object = var_6257_object; // 0x65 Mov
	var_6266_string = var_6258_string; // 0x66 Mov
	func_87(var_6264_bool, var_6265_object, var_6266_string); // 0x67 NEW_2
	var_6267_bool = var_6264_bool == 0; // 0x69 Not
	if(var_6267_bool == 0) goto Label_109; // 0x6a JumpB
	var_6256_bool = 0; // 0x6b MovB
	return 2; // 0x6c Return
	
Label_109:
	GetProperty(var_6258_string, var_6263_float); // 0x6d ObjFunc
	var_6268_float = 0; var_6269_float = 0; var_6270_float = 0; var_6271_float = 0; // 0x6f PushV
	var_6269_float = var_6263_float + var_6259_float; // 0x70 Add2
	var_6270_float = var_6260_float; // 0x71 Mov
	var_6271_float = var_6261_float; // 0x72 Mov
	func_121(var_6268_float, var_6269_float, var_6270_float, var_6271_float); // 0x73 NEW_2
	SetProperty(var_6258_string, var_6268_float); // 0x75 ObjFunc
	var_6256_bool = 1; // 0x77 MovB
	return 2; // 0x78 Return
}


func_10346()
{
	var_6148_object = Obj(); var_6149_object = Obj(); // 0x286a PushV
	var_6150_object = Obj(); // 0x286b PushV
	func_12247(var_6150_object); // 0x286c NEW_2
	var_6149_object = var_6150_object; // 0x286d Mov
	var_6151_string = "d9q01GotoViktor"; // 0x286f PushS
	var_6152_string = "pt_map_viktor"; // 0x2870 PushS
	var_6153_int = 1; // 0x2871 PushI
	var_6154_int = 540031; // 0x2872 PushI
	var_6155_float = 0; // 0x2873 PushV
	func_290(var_6155_float); // 0x2874 NEW_2
	AddMark(var_6151_string, var_6152_string, var_6153_int, var_6154_int, var_6155_float); // 0x2876 ObjFunc
	return 2; // 0x2878 Return
}


func_4216(var_3428_int, var_3429_int, var_3430_int)
{
	var_3431_int = 0; var_3432_int = 0; var_3433_int = 0; var_3434_int = 0; var_3435_int = 0; var_3436_int = 0; var_3437_int = 0; var_3438_int = 0; // 0x1078 PushV
	var_3439_bool = 0; // 0x1079 PushV
	var_3439_bool = 0; // 0x107a MovB
	var_3440_int = 8; // 0x107b PushI
	var_3441_bool = var_3430_int > var_3440_int; // 0x107c GT
	if(var_3441_bool == 0) goto Label_4226; // 0x107d JumpB
	var_3442_int = 21; // 0x107e PushI
	var_3443_bool = var_3430_int < var_3442_int; // 0x107f LT
	if(var_3443_bool == 0) goto Label_4226; // 0x1080 JumpB
	var_3439_bool = 1; // 0x1081 MovB
	
Label_4226:
	if(var_3439_bool == 0) goto Label_4303; // 0x1082 JumpB
	var_3444_int = 0; var_3445_string = ""; var_3446_string = ""; var_3447_int = 0; // 0x1083 PushV
	var_3444_int = var_3428_int; // 0x1084 Mov
	var_3445_string = "pers_rat"; // 0x1085 MovS
	var_3446_string = "rat.xml"; // 0x1086 MovS
	var_3447_int = 4; // 0x1087 MovI
	func_509(var_3444_int, var_3445_string, var_3446_string, var_3447_int); // 0x1088 NEW_2
	var_3448_int = 0; var_3449_string = ""; var_3450_string = ""; var_3451_int = 0; // 0x108a PushV
	var_3448_int = var_3428_int; // 0x108b Mov
	var_3449_string = "pers_alkash"; // 0x108c MovS
	var_3450_string = "alkash.xml"; // 0x108d MovS
	var_3451_int = 2; // 0x108e MovI
	func_509(var_3448_int, var_3449_string, var_3450_string, var_3451_int); // 0x108f NEW_2
	var_3452_int = 0; var_3453_string = ""; var_3454_string = ""; var_3455_int = 0; // 0x1091 PushV
	var_3452_int = var_3428_int; // 0x1092 Mov
	var_3453_string = "pers_dohodyaga"; // 0x1093 MovS
	var_3454_string = "dohodyaga.xml"; // 0x1094 MovS
	var_3455_int = 1; // 0x1095 MovI
	func_509(var_3452_int, var_3453_string, var_3454_string, var_3455_int); // 0x1096 NEW_2
	var_3456_int = 2; // 0x1098 PushI
	var_3457_float = 0; var_3458_int = 0; // 0x1099 PushV
	var_3458_int = var_3429_int; // 0x109a Mov
	func_1171(var_3457_float, var_3458_int); // 0x109b NEW_2
	var_3435_int = var_3456_int * var_3457_float; // 0x109d Mult2
	var_3459_int = var_3435_int; // 0x109e Push
	if(var_3459_int == 0) goto Label_4263; // 0x109f JumpB
	var_3460_int = 0; var_3461_string = ""; var_3462_string = ""; var_3463_int = 0; // 0x10a0 PushV
	var_3460_int = var_3428_int; // 0x10a1 Mov
	var_3461_string = "pers_grabitel"; // 0x10a2 MovS
	var_3462_string = "grabitel.xml"; // 0x10a3 MovS
	var_3463_int = var_3435_int; // 0x10a4 Mov
	func_509(var_3460_int, var_3461_string, var_3462_string, var_3463_int); // 0x10a5 NEW_2
	
Label_4263:
	var_3464_int = 1; // 0x10a7 PushI
	var_3465_int = var_3429_int + var_3464_int; // 0x10a8 Add
	var_3466_int = 2; // 0x10a9 PushI
	var_3467_bool = var_3465_int >= var_3466_int; // 0x10aa GE
	if(var_3467_bool == 0) goto Label_4287; // 0x10ab JumpB
	var_3468_int = 0; var_3469_string = ""; var_3470_string = ""; var_3471_int = 0; // 0x10ac PushV
	var_3468_int = var_3428_int; // 0x10ad Mov
	var_3469_string = "pers_patrool"; // 0x10ae MovS
	var_3470_string = "patrol.xml"; // 0x10af MovS
	var_3471_int = 2; // 0x10b0 MovI
	func_509(var_3468_int, var_3469_string, var_3470_string, var_3471_int); // 0x10b1 NEW_2
	var_3472_bool = 0; var_3473_int = 0; // 0x10b3 PushV
	var_3473_int = var_3429_int; // 0x10b4 Mov
	func_1378(var_3472_bool, var_3473_int); // 0x10b5 NEW_2
	if(var_3472_bool == 0) goto Label_4287; // 0x10b7 JumpB
	var_3474_int = 0; var_3475_string = ""; var_3476_string = ""; var_3477_int = 0; // 0x10b8 PushV
	var_3474_int = var_3428_int; // 0x10b9 Mov
	var_3475_string = "pers_soldat_hand"; // 0x10ba MovS
	var_3476_string = "soldier_patrol.xml"; // 0x10bb MovS
	var_3477_int = 1; // 0x10bc MovI
	func_509(var_3474_int, var_3475_string, var_3476_string, var_3477_int); // 0x10bd NEW_2
	
Label_4287:
	var_3478_int = 1; // 0x10bf PushI
	var_3479_float = 0; var_3480_int = 0; // 0x10c0 PushV
	var_3480_int = var_3429_int; // 0x10c1 Mov
	func_1261(var_3479_float, var_3480_int); // 0x10c2 NEW_2
	var_3436_int = var_3478_int * var_3479_float; // 0x10c4 Mult2
	var_3481_int = var_3436_int; // 0x10c5 Push
	if(var_3481_int == 0) goto Label_4302; // 0x10c6 JumpB
	var_3482_int = 0; var_3483_string = ""; var_3484_string = ""; var_3485_int = 0; // 0x10c7 PushV
	var_3482_int = var_3428_int; // 0x10c8 Mov
	var_3483_string = "pers_bomber"; // 0x10c9 MovS
	var_3484_string = "bomber.xml"; // 0x10ca MovS
	var_3485_int = var_3436_int; // 0x10cb Mov
	func_509(var_3482_int, var_3483_string, var_3484_string, var_3485_int); // 0x10cc NEW_2
	
Label_4302:
	goto Label_4378; // 0x10ce Jump
	
Label_4378:
	var_3486_bool = 0; var_3487_int = 0; // 0x111a PushV
	var_3487_int = var_3429_int; // 0x111b Mov
	func_1378(var_3486_bool, var_3487_int); // 0x111c NEW_2
	if(var_3486_bool == 0) goto Label_4390; // 0x111e JumpB
	var_3488_int = 0; var_3489_string = ""; var_3490_string = ""; var_3491_int = 0; // 0x111f PushV
	var_3488_int = var_3428_int; // 0x1120 Mov
	var_3489_string = "pers_sanitar"; // 0x1121 MovS
	var_3490_string = "sanitar.xml"; // 0x1122 MovS
	var_3491_int = 2; // 0x1123 MovI
	func_509(var_3488_int, var_3489_string, var_3490_string, var_3491_int); // 0x1124 NEW_2
	
Label_4390:
	return 8; // 0x1126 Return
	
Label_4303:
	var_3492_int = 0; var_3493_string = ""; var_3494_string = ""; var_3495_int = 0; // 0x10cf PushV
	var_3492_int = var_3428_int; // 0x10d0 Mov
	var_3493_string = "pers_rat"; // 0x10d1 MovS
	var_3494_string = "rat.xml"; // 0x10d2 MovS
	var_3495_int = 8; // 0x10d3 MovI
	func_509(var_3492_int, var_3493_string, var_3494_string, var_3495_int); // 0x10d4 NEW_2
	var_3496_int = 0; var_3497_string = ""; var_3498_string = ""; var_3499_int = 0; // 0x10d6 PushV
	var_3496_int = var_3428_int; // 0x10d7 Mov
	var_3497_string = "pers_alkash"; // 0x10d8 MovS
	var_3498_string = "alkash.xml"; // 0x10d9 MovS
	var_3499_int = 1; // 0x10da MovI
	func_509(var_3496_int, var_3497_string, var_3498_string, var_3499_int); // 0x10db NEW_2
	var_3500_int = 0; var_3501_string = ""; var_3502_string = ""; var_3503_int = 0; // 0x10dd PushV
	var_3500_int = var_3428_int; // 0x10de Mov
	var_3501_string = "pers_dohodyaga"; // 0x10df MovS
	var_3502_string = "dohodyaga.xml"; // 0x10e0 MovS
	var_3503_int = 1; // 0x10e1 MovI
	func_509(var_3500_int, var_3501_string, var_3502_string, var_3503_int); // 0x10e2 NEW_2
	var_3504_int = 3; // 0x10e4 PushI
	var_3505_float = 0; var_3506_int = 0; // 0x10e5 PushV
	var_3506_int = var_3429_int; // 0x10e6 Mov
	func_1171(var_3505_float, var_3506_int); // 0x10e7 NEW_2
	var_3437_int = var_3504_int * var_3505_float; // 0x10e9 Mult2
	var_3507_int = var_3437_int; // 0x10ea Push
	if(var_3507_int == 0) goto Label_4339; // 0x10eb JumpB
	var_3508_int = 0; var_3509_string = ""; var_3510_string = ""; var_3511_int = 0; // 0x10ec PushV
	var_3508_int = var_3428_int; // 0x10ed Mov
	var_3509_string = "pers_grabitel"; // 0x10ee MovS
	var_3510_string = "grabitel.xml"; // 0x10ef MovS
	var_3511_int = var_3437_int; // 0x10f0 Mov
	func_509(var_3508_int, var_3509_string, var_3510_string, var_3511_int); // 0x10f1 NEW_2
	
Label_4339:
	var_3512_int = 1; // 0x10f3 PushI
	var_3513_int = var_3429_int + var_3512_int; // 0x10f4 Add
	var_3514_int = 2; // 0x10f5 PushI
	var_3515_bool = var_3513_int >= var_3514_int; // 0x10f6 GE
	if(var_3515_bool == 0) goto Label_4363; // 0x10f7 JumpB
	var_3516_int = 0; var_3517_string = ""; var_3518_string = ""; var_3519_int = 0; // 0x10f8 PushV
	var_3516_int = var_3428_int; // 0x10f9 Mov
	var_3517_string = "pers_patrool"; // 0x10fa MovS
	var_3518_string = "patrol.xml"; // 0x10fb MovS
	var_3519_int = 1; // 0x10fc MovI
	func_509(var_3516_int, var_3517_string, var_3518_string, var_3519_int); // 0x10fd NEW_2
	var_3520_bool = 0; var_3521_int = 0; // 0x10ff PushV
	var_3521_int = var_3429_int; // 0x1100 Mov
	func_1378(var_3520_bool, var_3521_int); // 0x1101 NEW_2
	if(var_3520_bool == 0) goto Label_4363; // 0x1103 JumpB
	var_3522_int = 0; var_3523_string = ""; var_3524_string = ""; var_3525_int = 0; // 0x1104 PushV
	var_3522_int = var_3428_int; // 0x1105 Mov
	var_3523_string = "pers_soldat_hand"; // 0x1106 MovS
	var_3524_string = "soldier_patrol.xml"; // 0x1107 MovS
	var_3525_int = 1; // 0x1108 MovI
	func_509(var_3522_int, var_3523_string, var_3524_string, var_3525_int); // 0x1109 NEW_2
	
Label_4363:
	var_3526_int = 1; // 0x110b PushI
	var_3527_float = 0; var_3528_int = 0; // 0x110c PushV
	var_3528_int = var_3429_int; // 0x110d Mov
	func_1261(var_3527_float, var_3528_int); // 0x110e NEW_2
	var_3438_int = var_3526_int * var_3527_float; // 0x1110 Mult2
	var_3529_int = var_3438_int; // 0x1111 Push
	if(var_3529_int == 0) goto Label_4378; // 0x1112 JumpB
	var_3530_int = 0; var_3531_string = ""; var_3532_string = ""; var_3533_int = 0; // 0x1113 PushV
	var_3530_int = var_3428_int; // 0x1114 Mov
	var_3531_string = "pers_bomber"; // 0x1115 MovS
	var_3532_string = "bomber.xml"; // 0x1116 MovS
	var_3533_int = var_3438_int; // 0x1117 Mov
	func_509(var_3530_int, var_3531_string, var_3532_string, var_3533_int); // 0x1118 NEW_2
}


func_121(var_6268_float, var_6269_float, var_6270_float, var_6271_float)
{
	var_6272_bool = var_6269_float < var_6270_float; // 0x7a LT
	if(var_6272_bool == 0) goto Label_126; // 0x7b JumpB
	var_6268_float = var_6270_float; // 0x7c Mov
	return 0; // 0x7d Return
	
Label_126:
	var_6273_bool = var_6269_float > var_6271_float; // 0x7e GT
	if(var_6273_bool == 0) goto Label_130; // 0x7f JumpB
	var_6268_float = var_6271_float; // 0x80 Mov
	return 0; // 0x81 Return
	
Label_130:
	var_6268_float = var_6269_float; // 0x82 Mov
	return 0; // 0x83 Return
}


func_10362()
{
	var_6034_object = Obj(); var_6035_object = Obj(); // 0x287a PushV
	var_6036_object = Obj(); // 0x287b PushV
	func_12247(var_6036_object); // 0x287c NEW_2
	var_6035_object = var_6036_object; // 0x287d Mov
	var_6037_string = "d9q02GotoJulia"; // 0x287f PushS
	var_6038_string = "pt_map_julia"; // 0x2880 PushS
	var_6039_int = 0; // 0x2881 PushI
	var_6040_int = 515296; // 0x2882 PushI
	var_6041_float = 0; // 0x2883 PushV
	func_290(var_6041_float); // 0x2884 NEW_2
	AddMark(var_6037_string, var_6038_string, var_6039_int, var_6040_int, var_6041_float); // 0x2886 ObjFunc
	return 2; // 0x2888 Return
}


func_7289()
{
	var_314_string = "lc_house3_05_i2"; // 0x1c7a PushS
	add(var_314_string); // 0x1c7b ObjFunc
	var_315_string = "lc_house3_05"; // 0x1c7d PushS
	add(var_315_string); // 0x1c7e ObjFunc
	var_316_string = "lc_house3_06_i2"; // 0x1c80 PushS
	add(var_316_string); // 0x1c81 ObjFunc
	var_317_string = "lc_house3_06"; // 0x1c83 PushS
	add(var_317_string); // 0x1c84 ObjFunc
	var_318_string = "lc_House6_06"; // 0x1c86 PushS
	add(var_318_string); // 0x1c87 ObjFunc
	var_319_string = "lc_house3_04_i2"; // 0x1c89 PushS
	add(var_319_string); // 0x1c8a ObjFunc
	var_320_string = "lc_house3_04"; // 0x1c8c PushS
	add(var_320_string); // 0x1c8d ObjFunc
	var_321_string = "house3_plus_03_i2"; // 0x1c8f PushS
	add(var_321_string); // 0x1c90 ObjFunc
	return 0; // 0x1c92 Return
}


func_6268()
{
	var_227_string = "r4_house_2_02"; // 0x187d PushS
	add(var_227_string); // 0x187e ObjFunc
	var_228_string = "r4_house3_03_i2"; // 0x1880 PushS
	add(var_228_string); // 0x1881 ObjFunc
	var_229_string = "r4_house3_03"; // 0x1883 PushS
	add(var_229_string); // 0x1884 ObjFunc
	var_230_string = "r4_house4_02_i2"; // 0x1886 PushS
	add(var_230_string); // 0x1887 ObjFunc
	var_231_string = "r4_house4_02"; // 0x1889 PushS
	add(var_231_string); // 0x188a ObjFunc
	var_232_string = "r4_house4_01_i2"; // 0x188c PushS
	add(var_232_string); // 0x188d ObjFunc
	var_233_string = "r4_house4_01"; // 0x188f PushS
	add(var_233_string); // 0x1890 ObjFunc
	var_234_string = "r4_house3_02_i2"; // 0x1892 PushS
	add(var_234_string); // 0x1893 ObjFunc
	var_235_string = "r4_house3_02"; // 0x1895 PushS
	add(var_235_string); // 0x1896 ObjFunc
	var_236_string = "r4_house_2_01"; // 0x1898 PushS
	add(var_236_string); // 0x1899 ObjFunc
	var_237_string = "r4_house3_01_i2"; // 0x189b PushS
	add(var_237_string); // 0x189c ObjFunc
	var_238_string = "r4_house3_01"; // 0x189e PushS
	add(var_238_string); // 0x189f ObjFunc
	var_239_string = "r4_house7_01"; // 0x18a1 PushS
	add(var_239_string); // 0x18a2 ObjFunc
	var_240_string = "r4_House6_01"; // 0x18a4 PushS
	add(var_240_string); // 0x18a5 ObjFunc
	var_241_string = "r4_house_2_03"; // 0x18a7 PushS
	add(var_241_string); // 0x18a8 ObjFunc
	var_242_string = "r4_House6_03"; // 0x18aa PushS
	add(var_242_string); // 0x18ab ObjFunc
	var_243_string = "r4_house_2_04"; // 0x18ad PushS
	add(var_243_string); // 0x18ae ObjFunc
	return 0; // 0x18b0 Return
}


func_1147(var_768_float, var_769_int)
{
	var_770_int = 1; // 0x47c PushI
	var_771_int = var_769_int + var_770_int; // 0x47d Add
	var_772_int = 7; // 0x47e PushI
	var_773_bool = var_771_int == var_772_int; // 0x47f Eq
	if(var_773_bool == 0) goto Label_1155; // 0x480 JumpB
	var_768_float = 2; // 0x481 MovI
	return 0; // 0x482 Return
	
Label_1155:
	var_774_int = 1; // 0x483 PushI
	var_775_int = var_769_int + var_774_int; // 0x484 Add
	var_776_int = 8; // 0x485 PushI
	var_777_bool = var_775_int == var_776_int; // 0x486 Eq
	if(var_777_bool == 0) goto Label_1162; // 0x487 JumpB
	var_768_float = 0; // 0x488 MovI
	return 0; // 0x489 Return
	
Label_1162:
	var_778_int = 1; // 0x48a PushI
	var_779_int = var_769_int + var_778_int; // 0x48b Add
	var_780_int = 1; // 0x48c PushI
	var_781_bool = var_779_int == var_780_int; // 0x48d Eq
	if(var_781_bool == 0) goto Label_1169; // 0x48e JumpB
	var_768_float = 0; // 0x48f MovI
	return 0; // 0x490 Return
	
Label_1169:
	var_768_float = 1; // 0x491 MovI
	return 0; // 0x492 Return
}


func_5244(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object)
{
	var_1302_int = 0; // 0x147d PushI
	var_1303_bool = var_1297_int == var_1302_int; // 0x147e Eq
	if(var_1303_bool == 0) goto Label_5284; // 0x147f JumpB
	var_1304_int = 0; var_1305_bool = 0; // 0x1480 PushV
	var_1304_int = 4; // 0x1481 MovI
	var_1305_bool = 0; // 0x1482 MovB
	func_802(var_1304_int, var_1305_bool); // 0x1483 NEW_2
	var_1306_int = 0; var_1307_bool = 0; var_1308_int = 0; // 0x1485 PushV
	var_1306_int = 4; // 0x1486 MovI
	var_1307_bool = 0; // 0x1487 MovB
	var_1308_int = 1; // 0x1488 MovI
	func_819(var_1306_int, var_1307_bool, var_1308_int); // 0x1489 NEW_2
	var_1309_int = 0; var_1310_int = 0; var_1311_object = Obj(); var_1312_object = Obj(); var_1313_object = Obj(); // 0x148b PushV
	var_1309_int = 4; // 0x148c MovI
	var_1310_int = var_1296_int; // 0x148d Mov
	var_1311_object = var_1298_object; // 0x148e Mov
	var_1312_object = var_1299_object; // 0x148f Mov
	var_1313_object = var_1300_object; // 0x1490 Mov
	func_628(var_1310_int, var_1311_object, var_1312_object, var_1313_object); // 0x1491 NEW_2
	var_1314_object = Obj(); var_1315_int = 0; // 0x1493 PushV
	var_1314_object = var_1301_object; // 0x1494 Mov
	var_1315_int = 0; // 0x1495 MovI
	func_311(var_1315_int); // 0x1496 NEW_2
	var_1316_int = 0; var_1317_bool = 0; var_1318_int = 0; // 0x1498 PushV
	var_1316_int = 4; // 0x1499 MovI
	var_1317_bool = 0; // 0x149a MovB
	var_1318_int = 4; // 0x149b MovI
	func_876(var_1316_int, var_1317_bool, var_1318_int); // 0x149c NEW_2
	var_1319_int = 0; var_1320_bool = 0; var_1321_int = 0; // 0x149e PushV
	var_1319_int = 4; // 0x149f MovI
	var_1320_bool = 0; // 0x14a0 MovB
	var_1321_int = 4; // 0x14a1 MovI
	func_938(var_1319_int, var_1320_bool, var_1321_int); // 0x14a2 NEW_2
	
Label_5284:
	var_1322_int = 0; var_1323_int = 0; // 0x14a4 PushV
	var_1322_int = 4; // 0x14a5 MovI
	var_1323_int = var_1297_int; // 0x14a6 Mov
	func_1026(var_1322_int, var_1323_int); // 0x14a7 NEW_2
	var_1336_int = 0; var_1337_int = 0; var_1338_int = 0; // 0x14a9 PushV
	var_1336_int = 4; // 0x14aa MovI
	var_1337_int = var_1296_int; // 0x14ab Mov
	var_1338_int = var_1297_int; // 0x14ac Mov
	func_1903(var_1336_int, var_1337_int, var_1338_int); // 0x14ad NEW_2
	return 0; // 0x14af Return
}


func_8320(var_4195_int, var_4196_int)
{
	var_4198_object = Obj(); var_4199_object = Obj(); var_4200_string = ""; var_4201_int = 0; var_4202_int = 0; var_4203_int = 0; var_4204_object = Obj(); var_4205_object = Obj(); var_4206_string = ""; var_4207_int = 0; var_4208_int = 0; var_4209_int = 0; // 0x2080 PushV
	var_4210_bool = 0; // 0x2081 PushV
	var_4210_bool = 0; // 0x2082 MovB
	var_4211_int = 5; // 0x2083 PushI
	var_4212_bool = var_4196_int == var_4211_int; // 0x2084 Eq
	if(var_4212_bool == 0) goto Label_8330; // 0x2085 JumpB
	var_4213_int = 7; // 0x2086 PushI
	var_4214_bool = var_4195_int >= var_4213_int; // 0x2087 GE
	if(var_4214_bool == 0) goto Label_8330; // 0x2088 JumpB
	var_4210_bool = 1; // 0x2089 MovB
	
Label_8330:
	if(var_4210_bool == 0) goto Label_8341; // 0x208a JumpB
	var_4215_int = 0; // 0x208b PushV
	func_12264(var_4215_int); // 0x208c NEW_2
	var_4216_int = 2; // 0x208e PushI
	var_4217_bool = var_4215_int != var_4216_int; // 0x208f Neq
	if(var_4217_bool == 0) goto Label_8340; // 0x2090 JumpB
	func_7784(); // 0x2092 NEW_2
	
Label_8340:
	goto Label_8360; // 0x2094 Jump
	
Label_8360:
	var_4264_bool = 0; // 0x20a8 PushV
	var_4264_bool = 0; // 0x20a9 MovB
	var_4265_int = 7; // 0x20aa PushI
	var_4266_bool = var_4196_int == var_4265_int; // 0x20ab Eq
	if(var_4266_bool == 0) goto Label_8369; // 0x20ac JumpB
	var_4267_int = 1; // 0x20ad PushI
	var_4268_bool = var_4195_int != var_4267_int; // 0x20ae Neq
	if(var_4268_bool == 0) goto Label_8369; // 0x20af JumpB
	var_4264_bool = 1; // 0x20b0 MovB
	
Label_8369:
	if(var_4264_bool == 0) goto Label_8373; // 0x20b1 JumpB
	var_4269_int = 100; // 0x20b2 PushI
	SendWorldWndMessage(var_4269_int); // 0x20b3 Func
	
Label_8373:
	var_4270_int = 0; // 0x20b5 PushI
	var_4271_bool = var_4196_int == var_4270_int; // 0x20b6 Eq
	if(var_4271_bool == 0) goto Label_8461; // 0x20b7 JumpB
	func_8498(); // 0x20b9 NEW_2
	func_8573(); // 0x20bc NEW_2
	var_4365_int = 6; // 0x20be PushI
	var_4366_bool = var_4195_int == var_4365_int; // 0x20bf Eq
	if(var_4366_bool == 0) goto Label_8394; // 0x20c0 JumpB
	GetMainOutdoorScene(var_4204_object); // 0x20c1 Func
	var_4367_string = "shed_corpse"; // 0x20c3 PushS
	var_4368_string = "splash_object_wo_pf.bin"; // 0x20c4 PushS
	var_4369_cvector = CVector(0.0, 0.0, 0.0); // 0x20c5 PushVec
	AddScriptedActor(var_4205_object, var_4367_string, var_4368_string, var_4204_object, var_4369_cvector); // 0x20c6 Func
	var_4205_object = 0; // 0x20c8 SetNull
	var_4204_object = 0; // 0x20c9 SetNull
	
Label_8394:
	var_4370_int = 9; // 0x20ca PushI
	var_4371_bool = var_4195_int == var_4370_int; // 0x20cb Eq
	if(var_4371_bool == 0) goto Label_8400; // 0x20cc JumpB
	func_8622(); // 0x20ce NEW_2
	
Label_8400:
	var_4385_int = 1; // 0x20d0 PushI
	var_4386_bool = var_4195_int != var_4385_int; // 0x20d1 Neq
	if(var_4386_bool == 0) goto Label_8461; // 0x20d2 JumpB
	var_4387_int = 0; // 0x20d3 PushV
	func_12264(var_4387_int); // 0x20d4 NEW_2
	var_4388_int = 1; // 0x20d6 PushI
	var_4389_bool = var_4387_int == var_4388_int; // 0x20d7 Eq
	if(var_4389_bool == 0) goto Label_8419; // 0x20d8 JumpB
	var_4390_string = "b"; // 0x20d9 PushS
	var_4391_int = 1; // 0x20da PushI
	var_4392_int = var_4195_int - var_4391_int; // 0x20db Sub
	var_4393_int = var_4390_string + var_4392_int; // 0x20dc Add
	var_4394_string = "q01"; // 0x20dd PushS
	var_4395_int = var_4393_int + var_4394_string; // 0x20de Add
	GetVariable(var_4395_int, var_4207_int); // 0x20df Func
	var_4206_string = "volonteers_burah"; // 0x20e1 MovS
	goto Label_8444; // 0x20e2 Jump
	
Label_8444:
	Trace(var_4206_string); // 0x20fc Func
	var_4396_int = 1000; // 0x20fe PushI
	var_4397_bool = var_4207_int == var_4396_int; // 0x20ff Eq
	if(var_4397_bool == 0) goto Label_8455; // 0x2100 JumpB
	var_4398_bool = 0; var_4399_string = ""; var_4400_string = ""; var_4401_string = ""; // 0x2101 PushV
	var_4399_string = var_4206_string; // 0x2102 Mov
	var_4400_string = "rescue_locked"; // 0x2103 MovS
	var_4401_string = ""; // 0x2104 MovS
	func_257(var_4398_bool, var_4399_string, var_4400_string, var_4401_string); // 0x2105 NEW_2
	
Label_8455:
	var_4405_bool = 0; var_4406_string = ""; var_4407_string = ""; var_4408_string = ""; // 0x2107 PushV
	var_4406_string = var_4206_string; // 0x2108 Mov
	var_4407_string = "update"; // 0x2109 MovS
	var_4408_string = ""; // 0x210a MovS
	func_257(var_4405_bool, var_4406_string, var_4407_string, var_4408_string); // 0x210b NEW_2
	
Label_8461:
	var_4409_bool = 0; // 0x210d PushV
	var_4409_bool = 0; // 0x210e MovB
	var_4410_int = 6; // 0x210f PushI
	var_4411_bool = var_4195_int == var_4410_int; // 0x2110 Eq
	if(var_4411_bool == 0) goto Label_8470; // 0x2111 JumpB
	var_4412_int = 0; // 0x2112 PushI
	var_4413_bool = var_4196_int == var_4412_int; // 0x2113 Eq
	if(var_4413_bool == 0) goto Label_8470; // 0x2114 JumpB
	var_4409_bool = 1; // 0x2115 MovB
	
Label_8470:
	if(var_4409_bool == 0) goto Label_8474; // 0x2116 JumpB
	func_7904(); // 0x2118 NEW_2
	
Label_8474:
	var_4416_bool = 0; // 0x211a PushV
	var_4416_bool = 0; // 0x211b MovB
	var_4417_int = 7; // 0x211c PushI
	var_4418_bool = var_4195_int == var_4417_int; // 0x211d Eq
	if(var_4418_bool == 0) goto Label_8483; // 0x211e JumpB
	var_4419_int = 0; // 0x211f PushI
	var_4420_bool = var_4196_int == var_4419_int; // 0x2120 Eq
	if(var_4420_bool == 0) goto Label_8483; // 0x2121 JumpB
	var_4416_bool = 1; // 0x2122 MovB
	
Label_8483:
	if(var_4416_bool == 0) goto Label_8497; // 0x2123 JumpB
	var_4421_object = GlobalVars[14]; // 0x2124 PushGE
	size(var_4208_int); // 0x2125 ObjFunc
	var_4209_int = 0; // 0x2127 MovI
	
Label_8488:
	var_4422_bool = var_4209_int < var_4208_int; // 0x2128 LT
	if(var_4422_bool == 0) goto Label_8497; // 0x2129 JumpB
	var_4423_int = 0; // 0x212a PushV
	var_4423_int = var_4209_int; // 0x212b Mov
	func_7611(var_4423_int); // 0x212c NEW_2
	var_4476_int = 1; // 0x212e PushI
	var_4209_int = var_4209_int + var_4476_int; // 0x212f Add2
	goto Label_8488; // 0x2130 Jump
	
Label_8497:
	return 12; // 0x2131 Return
	
Label_8419:
	var_4477_int = 0; // 0x20e3 PushV
	func_12264(var_4477_int); // 0x20e4 NEW_2
	var_4478_int = 0; // 0x20e6 PushI
	var_4479_bool = var_4477_int == var_4478_int; // 0x20e7 Eq
	if(var_4479_bool == 0) goto Label_8435; // 0x20e8 JumpB
	var_4480_string = "d"; // 0x20e9 PushS
	var_4481_int = 1; // 0x20ea PushI
	var_4482_int = var_4195_int - var_4481_int; // 0x20eb Sub
	var_4483_int = var_4480_string + var_4482_int; // 0x20ec Add
	var_4484_string = "q01"; // 0x20ed PushS
	var_4485_int = var_4483_int + var_4484_string; // 0x20ee Add
	GetVariable(var_4485_int, var_4207_int); // 0x20ef Func
	var_4206_string = "volonteers_danko"; // 0x20f1 MovS
	goto Label_8444; // 0x20f2 Jump
	
Label_8435:
	var_4486_string = "k"; // 0x20f3 PushS
	var_4487_int = 1; // 0x20f4 PushI
	var_4488_int = var_4195_int - var_4487_int; // 0x20f5 Sub
	var_4489_int = var_4486_string + var_4488_int; // 0x20f6 Add
	var_4490_string = "q01"; // 0x20f7 PushS
	var_4491_int = var_4489_int + var_4490_string; // 0x20f8 Add
	GetVariable(var_4491_int, var_4207_int); // 0x20f9 Func
	var_4206_string = "volonteers_klara"; // 0x20fb MovS
	
Label_8341:
	var_4492_bool = 0; // 0x2095 PushV
	var_4492_bool = 0; // 0x2096 MovB
	var_4493_int = 22; // 0x2097 PushI
	var_4494_bool = var_4196_int == var_4493_int; // 0x2098 Eq
	if(var_4494_bool == 0) goto Label_8350; // 0x2099 JumpB
	var_4495_int = 7; // 0x209a PushI
	var_4496_bool = var_4195_int >= var_4495_int; // 0x209b GE
	if(var_4496_bool == 0) goto Label_8350; // 0x209c JumpB
	var_4492_bool = 1; // 0x209d MovB
	
Label_8350:
	if(var_4492_bool == 0) goto Label_8360; // 0x209e JumpB
	var_4497_int = 0; // 0x209f PushV
	func_12264(var_4497_int); // 0x20a0 NEW_2
	var_4498_int = 2; // 0x20a2 PushI
	var_4499_bool = var_4497_int != var_4498_int; // 0x20a3 Neq
	if(var_4499_bool == 0) goto Label_8360; // 0x20a4 JumpB
	func_7847(); // 0x20a6 NEW_2
}


func_132(var_41_object)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x84 PushV
	CreateObjectVector(var_43_object); // 0x85 Func
	var_41_object = var_43_object; // 0x87 Mov
	return 2; // 0x88 Return
}


func_9351(var_3169_int, var_3170_int, var_3171_int)
{
	var_3172_object = Obj(); var_3173_object = Obj(); var_3174_object = Obj(); var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj(); var_3178_object = Obj(); var_3179_object = Obj(); // 0x2487 PushV
	var_3180_object = GlobalVars[8]; // 0x2488 PushGE
	get(var_3176_object, var_3169_int); // 0x2489 ObjFunc
	var_3181_object = GlobalVars[9]; // 0x248b PushGE
	get(var_3177_object, var_3169_int); // 0x248c ObjFunc
	var_3182_object = GlobalVars[10]; // 0x248e PushGE
	get(var_3178_object, var_3169_int); // 0x248f ObjFunc
	var_3183_object = GlobalVars[13]; // 0x2491 PushGE
	get(var_3179_object, var_3169_int); // 0x2492 ObjFunc
	var_3184_int = 0; // 0x2494 PushI
	var_3185_bool = var_3169_int == var_3184_int; // 0x2495 Eq
	if(var_3185_bool == 0) goto Label_9377; // 0x2496 JumpB
	var_3186_int = 0; var_3187_int = 0; var_3188_object = Obj(); var_3189_object = Obj(); var_3190_object = Obj(); var_3191_object = Obj(); // 0x2497 PushV
	var_3186_int = var_3170_int; // 0x2498 Mov
	var_3187_int = var_3171_int; // 0x2499 Mov
	var_3188_object = var_3176_object; // 0x249a Mov
	var_3189_object = var_3177_object; // 0x249b Mov
	var_3190_object = var_3178_object; // 0x249c Mov
	var_3191_object = var_3179_object; // 0x249d Mov
	func_4497(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object); // 0x249e NEW_2
	goto Label_9571; // 0x24a0 Jump
	
Label_9571:
	return 8; // 0x2563 Return
	
Label_9377:
	var_3398_int = 1; // 0x24a1 PushI
	var_3399_bool = var_3169_int == var_3398_int; // 0x24a2 Eq
	if(var_3399_bool == 0) goto Label_9390; // 0x24a3 JumpB
	var_3400_int = 0; var_3401_int = 0; var_3402_object = Obj(); var_3403_object = Obj(); var_3404_object = Obj(); var_3405_object = Obj(); // 0x24a4 PushV
	var_3400_int = var_3170_int; // 0x24a5 Mov
	var_3401_int = var_3171_int; // 0x24a6 Mov
	var_3402_object = var_3176_object; // 0x24a7 Mov
	var_3403_object = var_3177_object; // 0x24a8 Mov
	var_3404_object = var_3178_object; // 0x24a9 Mov
	var_3405_object = var_3179_object; // 0x24aa Mov
	func_4694(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object); // 0x24ab NEW_2
	goto Label_9571; // 0x24ad Jump
	
Label_9390:
	var_3534_int = 2; // 0x24ae PushI
	var_3535_bool = var_3169_int == var_3534_int; // 0x24af Eq
	if(var_3535_bool == 0) goto Label_9403; // 0x24b0 JumpB
	var_3536_int = 0; var_3537_int = 0; var_3538_object = Obj(); var_3539_object = Obj(); var_3540_object = Obj(); var_3541_object = Obj(); // 0x24b1 PushV
	var_3536_int = var_3170_int; // 0x24b2 Mov
	var_3537_int = var_3171_int; // 0x24b3 Mov
	var_3538_object = var_3176_object; // 0x24b4 Mov
	var_3539_object = var_3177_object; // 0x24b5 Mov
	var_3540_object = var_3178_object; // 0x24b6 Mov
	var_3541_object = var_3179_object; // 0x24b7 Mov
	func_4900(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object); // 0x24b8 NEW_2
	goto Label_9571; // 0x24ba Jump
	
Label_9403:
	var_3677_int = 3; // 0x24bb PushI
	var_3678_bool = var_3169_int == var_3677_int; // 0x24bc Eq
	if(var_3678_bool == 0) goto Label_9416; // 0x24bd JumpB
	var_3679_int = 0; var_3680_int = 0; var_3681_object = Obj(); var_3682_object = Obj(); var_3683_object = Obj(); var_3684_object = Obj(); // 0x24be PushV
	var_3679_int = var_3170_int; // 0x24bf Mov
	var_3680_int = var_3171_int; // 0x24c0 Mov
	var_3681_object = var_3176_object; // 0x24c1 Mov
	var_3682_object = var_3177_object; // 0x24c2 Mov
	var_3683_object = var_3178_object; // 0x24c3 Mov
	var_3684_object = var_3179_object; // 0x24c4 Mov
	func_5130(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object); // 0x24c5 NEW_2
	goto Label_9571; // 0x24c7 Jump
	
Label_9416:
	var_3710_int = 4; // 0x24c8 PushI
	var_3711_bool = var_3169_int == var_3710_int; // 0x24c9 Eq
	if(var_3711_bool == 0) goto Label_9429; // 0x24ca JumpB
	var_3712_int = 0; var_3713_int = 0; var_3714_object = Obj(); var_3715_object = Obj(); var_3716_object = Obj(); var_3717_object = Obj(); // 0x24cb PushV
	var_3712_int = var_3170_int; // 0x24cc Mov
	var_3713_int = var_3171_int; // 0x24cd Mov
	var_3714_object = var_3176_object; // 0x24ce Mov
	var_3715_object = var_3177_object; // 0x24cf Mov
	var_3716_object = var_3178_object; // 0x24d0 Mov
	var_3717_object = var_3179_object; // 0x24d1 Mov
	func_5348(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object); // 0x24d2 NEW_2
	goto Label_9571; // 0x24d4 Jump
	
Label_9429:
	var_3743_int = 5; // 0x24d5 PushI
	var_3744_bool = var_3169_int == var_3743_int; // 0x24d6 Eq
	if(var_3744_bool == 0) goto Label_9442; // 0x24d7 JumpB
	var_3745_int = 0; var_3746_int = 0; var_3747_object = Obj(); var_3748_object = Obj(); var_3749_object = Obj(); var_3750_object = Obj(); // 0x24d8 PushV
	var_3745_int = var_3170_int; // 0x24d9 Mov
	var_3746_int = var_3171_int; // 0x24da Mov
	var_3747_object = var_3176_object; // 0x24db Mov
	var_3748_object = var_3177_object; // 0x24dc Mov
	var_3749_object = var_3178_object; // 0x24dd Mov
	var_3750_object = var_3179_object; // 0x24de Mov
	func_5590(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object); // 0x24df NEW_2
	goto Label_9571; // 0x24e1 Jump
	
Label_9442:
	var_3776_int = 6; // 0x24e2 PushI
	var_3777_bool = var_3169_int == var_3776_int; // 0x24e3 Eq
	if(var_3777_bool == 0) goto Label_9455; // 0x24e4 JumpB
	var_3778_int = 0; var_3779_int = 0; var_3780_object = Obj(); var_3781_object = Obj(); var_3782_object = Obj(); var_3783_object = Obj(); // 0x24e5 PushV
	var_3778_int = var_3170_int; // 0x24e6 Mov
	var_3779_int = var_3171_int; // 0x24e7 Mov
	var_3780_object = var_3176_object; // 0x24e8 Mov
	var_3781_object = var_3177_object; // 0x24e9 Mov
	var_3782_object = var_3178_object; // 0x24ea Mov
	var_3783_object = var_3179_object; // 0x24eb Mov
	func_5658(); // 0x24ec NEW_2
	goto Label_9571; // 0x24ee Jump
	
Label_9455:
	var_3786_int = 7; // 0x24ef PushI
	var_3787_bool = var_3169_int == var_3786_int; // 0x24f0 Eq
	if(var_3787_bool == 0) goto Label_9468; // 0x24f1 JumpB
	var_3788_int = 0; var_3789_int = 0; var_3790_object = Obj(); var_3791_object = Obj(); var_3792_object = Obj(); var_3793_object = Obj(); // 0x24f2 PushV
	var_3788_int = var_3170_int; // 0x24f3 Mov
	var_3789_int = var_3171_int; // 0x24f4 Mov
	var_3790_object = var_3176_object; // 0x24f5 Mov
	var_3791_object = var_3177_object; // 0x24f6 Mov
	var_3792_object = var_3178_object; // 0x24f7 Mov
	var_3793_object = var_3179_object; // 0x24f8 Mov
	func_5813(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object); // 0x24f9 NEW_2
	goto Label_9571; // 0x24fb Jump
	
Label_9468:
	var_3929_int = 8; // 0x24fc PushI
	var_3930_bool = var_3169_int == var_3929_int; // 0x24fd Eq
	if(var_3930_bool == 0) goto Label_9481; // 0x24fe JumpB
	var_3931_int = 0; var_3932_int = 0; var_3933_object = Obj(); var_3934_object = Obj(); var_3935_object = Obj(); var_3936_object = Obj(); // 0x24ff PushV
	var_3931_int = var_3170_int; // 0x2500 Mov
	var_3932_int = var_3171_int; // 0x2501 Mov
	var_3933_object = var_3176_object; // 0x2502 Mov
	var_3934_object = var_3177_object; // 0x2503 Mov
	var_3935_object = var_3178_object; // 0x2504 Mov
	var_3936_object = var_3179_object; // 0x2505 Mov
	func_6013(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object); // 0x2506 NEW_2
	goto Label_9571; // 0x2508 Jump
	
Label_9481:
	var_3962_int = 9; // 0x2509 PushI
	var_3963_bool = var_3169_int == var_3962_int; // 0x250a Eq
	if(var_3963_bool == 0) goto Label_9494; // 0x250b JumpB
	var_3964_int = 0; var_3965_int = 0; var_3966_object = Obj(); var_3967_object = Obj(); var_3968_object = Obj(); var_3969_object = Obj(); // 0x250c PushV
	var_3964_int = var_3170_int; // 0x250d Mov
	var_3965_int = var_3171_int; // 0x250e Mov
	var_3966_object = var_3176_object; // 0x250f Mov
	var_3967_object = var_3177_object; // 0x2510 Mov
	var_3968_object = var_3178_object; // 0x2511 Mov
	var_3969_object = var_3179_object; // 0x2512 Mov
	func_6216(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object); // 0x2513 NEW_2
	goto Label_9571; // 0x2515 Jump
	
Label_9494:
	var_3995_int = 10; // 0x2516 PushI
	var_3996_bool = var_3169_int == var_3995_int; // 0x2517 Eq
	if(var_3996_bool == 0) goto Label_9507; // 0x2518 JumpB
	var_3997_int = 0; var_3998_int = 0; var_3999_object = Obj(); var_4000_object = Obj(); var_4001_object = Obj(); var_4002_object = Obj(); // 0x2519 PushV
	var_3997_int = var_3170_int; // 0x251a Mov
	var_3998_int = var_3171_int; // 0x251b Mov
	var_3999_object = var_3176_object; // 0x251c Mov
	var_4000_object = var_3177_object; // 0x251d Mov
	var_4001_object = var_3178_object; // 0x251e Mov
	var_4002_object = var_3179_object; // 0x251f Mov
	func_6425(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object); // 0x2520 NEW_2
	goto Label_9571; // 0x2522 Jump
	
Label_9507:
	var_4028_int = 11; // 0x2523 PushI
	var_4029_bool = var_3169_int == var_4028_int; // 0x2524 Eq
	if(var_4029_bool == 0) goto Label_9520; // 0x2525 JumpB
	var_4030_int = 0; var_4031_int = 0; var_4032_object = Obj(); var_4033_object = Obj(); var_4034_object = Obj(); var_4035_object = Obj(); // 0x2526 PushV
	var_4030_int = var_3170_int; // 0x2527 Mov
	var_4031_int = var_3171_int; // 0x2528 Mov
	var_4032_object = var_3176_object; // 0x2529 Mov
	var_4033_object = var_3177_object; // 0x252a Mov
	var_4034_object = var_3178_object; // 0x252b Mov
	var_4035_object = var_3179_object; // 0x252c Mov
	func_6637(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object); // 0x252d NEW_2
	goto Label_9571; // 0x252f Jump
	
Label_9520:
	var_4061_int = 12; // 0x2530 PushI
	var_4062_bool = var_3169_int == var_4061_int; // 0x2531 Eq
	if(var_4062_bool == 0) goto Label_9533; // 0x2532 JumpB
	var_4063_int = 0; var_4064_int = 0; var_4065_object = Obj(); var_4066_object = Obj(); var_4067_object = Obj(); var_4068_object = Obj(); // 0x2533 PushV
	var_4063_int = var_3170_int; // 0x2534 Mov
	var_4064_int = var_3171_int; // 0x2535 Mov
	var_4065_object = var_3176_object; // 0x2536 Mov
	var_4066_object = var_3177_object; // 0x2537 Mov
	var_4067_object = var_3178_object; // 0x2538 Mov
	var_4068_object = var_3179_object; // 0x2539 Mov
	func_6834(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object); // 0x253a NEW_2
	goto Label_9571; // 0x253c Jump
	
Label_9533:
	var_4094_int = 13; // 0x253d PushI
	var_4095_bool = var_3169_int == var_4094_int; // 0x253e Eq
	if(var_4095_bool == 0) goto Label_9546; // 0x253f JumpB
	var_4096_int = 0; var_4097_int = 0; var_4098_object = Obj(); var_4099_object = Obj(); var_4100_object = Obj(); var_4101_object = Obj(); // 0x2540 PushV
	var_4096_int = var_3170_int; // 0x2541 Mov
	var_4097_int = var_3171_int; // 0x2542 Mov
	var_4098_object = var_3176_object; // 0x2543 Mov
	var_4099_object = var_3177_object; // 0x2544 Mov
	var_4100_object = var_3178_object; // 0x2545 Mov
	var_4101_object = var_3179_object; // 0x2546 Mov
	func_7037(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object); // 0x2547 NEW_2
	goto Label_9571; // 0x2549 Jump
	
Label_9546:
	var_4127_int = 14; // 0x254a PushI
	var_4128_bool = var_3169_int == var_4127_int; // 0x254b Eq
	if(var_4128_bool == 0) goto Label_9559; // 0x254c JumpB
	var_4129_int = 0; var_4130_int = 0; var_4131_object = Obj(); var_4132_object = Obj(); var_4133_object = Obj(); var_4134_object = Obj(); // 0x254d PushV
	var_4129_int = var_3170_int; // 0x254e Mov
	var_4130_int = var_3171_int; // 0x254f Mov
	var_4131_object = var_3176_object; // 0x2550 Mov
	var_4132_object = var_3177_object; // 0x2551 Mov
	var_4133_object = var_3178_object; // 0x2552 Mov
	var_4134_object = var_3179_object; // 0x2553 Mov
	func_7237(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object); // 0x2554 NEW_2
	goto Label_9571; // 0x2556 Jump
	
Label_9559:
	var_4270_int = 15; // 0x2557 PushI
	var_4271_bool = var_3169_int == var_4270_int; // 0x2558 Eq
	if(var_4271_bool == 0) goto Label_9571; // 0x2559 JumpB
	var_4272_int = 0; var_4273_int = 0; var_4274_object = Obj(); var_4275_object = Obj(); var_4276_object = Obj(); var_4277_object = Obj(); // 0x255a PushV
	var_4272_int = var_3170_int; // 0x255b Mov
	var_4273_int = var_3171_int; // 0x255c Mov
	var_4274_object = var_3176_object; // 0x255d Mov
	var_4275_object = var_3177_object; // 0x255e Mov
	var_4276_object = var_3178_object; // 0x255f Mov
	var_4277_object = var_3179_object; // 0x2560 Mov
	func_7419(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object); // 0x2561 NEW_2
}


func_138(var_4774_int, var_4775_string)
{
	var_4776_int = 0; var_4777_int = 0; // 0x8a PushV
	GetVariable(var_4775_string, var_4777_int); // 0x8b Func
	var_4774_int = var_4777_int; // 0x8d Mov
	return 2; // 0x8e Return
}


func_10378()
{
	var_5969_object = Obj(); var_5970_object = Obj(); // 0x288a PushV
	var_5971_object = Obj(); // 0x288b PushV
	func_12247(var_5971_object); // 0x288c NEW_2
	var_5970_object = var_5971_object; // 0x288d Mov
	var_5972_string = "d9q03GotoLara"; // 0x288f PushS
	var_5973_string = "pt_map_lara"; // 0x2890 PushS
	var_5974_int = 0; // 0x2891 PushI
	var_5975_int = 515294; // 0x2892 PushI
	var_5976_float = 0; // 0x2893 PushV
	func_290(var_5976_float); // 0x2894 NEW_2
	AddMark(var_5972_string, var_5973_string, var_5974_int, var_5975_int, var_5976_float); // 0x2896 ObjFunc
	return 2; // 0x2898 Return
}


func_14479(var_4305_int)
{
	var_4306_object = Obj(); var_4307_object = Obj(); var_4308_object = Obj(); var_4309_object = Obj(); var_4310_object = Obj(); var_4311_object = Obj(); var_4312_object = Obj(); var_4313_object = Obj(); var_4314_object = Obj(); var_4315_object = Obj(); var_4316_object = Obj(); var_4317_object = Obj(); var_4318_object = Obj(); var_4319_object = Obj(); var_4320_object = Obj(); var_4321_object = Obj(); var_4322_object = Obj(); var_4323_object = Obj(); // 0x388f PushV
	var_4324_int = 1; // 0x3890 PushI
	var_4325_bool = var_4305_int == var_4324_int; // 0x3891 Eq
	if(var_4325_bool == 0) goto Label_14494; // 0x3892 JumpB
	var_4326_string = "Special diseased house: r4_house_2_02"; // 0x3893 PushS
	Trace(var_4326_string); // 0x3894 Func
	var_4327_string = "r4_house_2_02"; // 0x3896 PushS
	GetSceneByName(var_4315_object, var_4327_string); // 0x3897 Func
	var_4328_string = "s_r4_house_2_02.isc"; // 0x3899 PushS
	ReplaceScene(var_4315_object, var_4328_string); // 0x389a Func
	var_4315_object = 0; // 0x389c SetNull
	goto Label_14599; // 0x389d Jump
	
Label_14599:
	return 18; // 0x3907 Return
	
Label_14494:
	var_4329_int = 2; // 0x389e PushI
	var_4330_bool = var_4305_int == var_4329_int; // 0x389f Eq
	if(var_4330_bool == 0) goto Label_14508; // 0x38a0 JumpB
	var_4331_string = "Special house: r7_house2_01"; // 0x38a1 PushS
	Trace(var_4331_string); // 0x38a2 Func
	var_4332_string = "r7_house2_01"; // 0x38a4 PushS
	GetSceneByName(var_4316_object, var_4332_string); // 0x38a5 Func
	var_4333_string = "r7_house2_01_d3q02.isc"; // 0x38a7 PushS
	ReplaceScene(var_4316_object, var_4333_string); // 0x38a8 Func
	var_4316_object = 0; // 0x38aa SetNull
	goto Label_14599; // 0x38ab Jump
	
Label_14508:
	var_4334_int = 3; // 0x38ac PushI
	var_4335_bool = var_4305_int == var_4334_int; // 0x38ad Eq
	if(var_4335_bool == 0) goto Label_14522; // 0x38ae JumpB
	var_4336_string = "Special diseased house: house7_03"; // 0x38af PushS
	Trace(var_4336_string); // 0x38b0 Func
	var_4337_string = "house7_03"; // 0x38b2 PushS
	GetSceneByName(var_4317_object, var_4337_string); // 0x38b3 Func
	var_4338_string = "s_house7_03.isc"; // 0x38b5 PushS
	ReplaceScene(var_4317_object, var_4338_string); // 0x38b6 Func
	var_4317_object = 0; // 0x38b8 SetNull
	goto Label_14599; // 0x38b9 Jump
	
Label_14522:
	var_4339_int = 4; // 0x38ba PushI
	var_4340_bool = var_4305_int == var_4339_int; // 0x38bb Eq
	if(var_4340_bool == 0) goto Label_14533; // 0x38bc JumpB
	var_4341_string = "theater"; // 0x38bd PushS
	GetSceneByName(var_4318_object, var_4341_string); // 0x38be Func
	var_4342_string = "dtheater_danko.isc"; // 0x38c0 PushS
	ReplaceScene(var_4318_object, var_4342_string); // 0x38c1 Func
	var_4318_object = 0; // 0x38c3 SetNull
	goto Label_14599; // 0x38c4 Jump
	
Label_14533:
	var_4343_int = 5; // 0x38c5 PushI
	var_4344_bool = var_4305_int == var_4343_int; // 0x38c6 Eq
	if(var_4344_bool == 0) goto Label_14547; // 0x38c7 JumpB
	var_4345_string = "Special house: sobor (with corpses)"; // 0x38c8 PushS
	Trace(var_4345_string); // 0x38c9 Func
	var_4346_string = "sobor"; // 0x38cb PushS
	GetSceneByName(var_4319_object, var_4346_string); // 0x38cc Func
	var_4347_string = "sobor_trup.isc"; // 0x38ce PushS
	ReplaceScene(var_4319_object, var_4347_string); // 0x38cf Func
	var_4319_object = 0; // 0x38d1 SetNull
	goto Label_14599; // 0x38d2 Jump
	
Label_14547:
	var_4348_int = 6; // 0x38d3 PushI
	var_4349_bool = var_4305_int == var_4348_int; // 0x38d4 Eq
	if(var_4349_bool == 0) goto Label_14561; // 0x38d5 JumpB
	var_4350_string = "Special house: sobor (normal)"; // 0x38d6 PushS
	Trace(var_4350_string); // 0x38d7 Func
	var_4351_string = "sobor"; // 0x38d9 PushS
	GetSceneByName(var_4320_object, var_4351_string); // 0x38da Func
	var_4352_string = "sobor_danko.isc"; // 0x38dc PushS
	ReplaceScene(var_4320_object, var_4352_string); // 0x38dd Func
	var_4320_object = 0; // 0x38df SetNull
	goto Label_14599; // 0x38e0 Jump
	
Label_14561:
	var_4353_int = 7; // 0x38e1 PushI
	var_4354_bool = var_4305_int == var_4353_int; // 0x38e2 Eq
	if(var_4354_bool == 0) goto Label_14575; // 0x38e3 JumpB
	var_4355_string = "Special diseased house: r4_house_2_02"; // 0x38e4 PushS
	Trace(var_4355_string); // 0x38e5 Func
	var_4356_string = "r4_house_2_02"; // 0x38e7 PushS
	GetSceneByName(var_4321_object, var_4356_string); // 0x38e8 Func
	var_4357_string = "s_r4_house_2_02.isc"; // 0x38ea PushS
	ReplaceScene(var_4321_object, var_4357_string); // 0x38eb Func
	var_4321_object = 0; // 0x38ed SetNull
	goto Label_14599; // 0x38ee Jump
	
Label_14575:
	var_4358_int = 8; // 0x38ef PushI
	var_4359_bool = var_4305_int == var_4358_int; // 0x38f0 Eq
	if(var_4359_bool == 0) goto Label_14589; // 0x38f1 JumpB
	var_4360_string = "Special replaced house: uprava_admin"; // 0x38f2 PushS
	Trace(var_4360_string); // 0x38f3 Func
	var_4361_string = "uprava_admin"; // 0x38f5 PushS
	GetSceneByName(var_4322_object, var_4361_string); // 0x38f6 Func
	var_4362_string = "uprava_admin_army_danko.isc"; // 0x38f8 PushS
	ReplaceScene(var_4322_object, var_4362_string); // 0x38f9 Func
	var_4322_object = 0; // 0x38fb SetNull
	goto Label_14599; // 0x38fc Jump
	
Label_14589:
	var_4363_int = 11; // 0x38fd PushI
	var_4364_bool = var_4305_int == var_4363_int; // 0x38fe Eq
	if(var_4364_bool == 0) goto Label_14599; // 0x38ff JumpB
	var_4365_string = "theater"; // 0x3900 PushS
	GetSceneByName(var_4323_object, var_4365_string); // 0x3901 Func
	var_4366_string = "theater_danko.isc"; // 0x3903 PushS
	ReplaceScene(var_4323_object, var_4366_string); // 0x3904 Func
	var_4323_object = 0; // 0x3906 SetNull
}


func_143(var_4658_object, var_4659_string)
{
	var_4660_object = Obj(); var_4661_object = Obj(); var_4662_object = Obj(); var_4663_object = Obj(); // 0x8f PushV
	GetMainOutdoorScene(var_4662_object); // 0x90 Func
	var_4664_string = ".bin"; // 0x92 PushS
	var_4665_int = var_4659_string + var_4664_string; // 0x93 Add
	AddBlankActor(var_4663_object, var_4662_object, var_4659_string, var_4665_int); // 0x94 Func
	var_4658_object = var_4663_object; // 0x96 Mov
	return 4; // 0x97 Return
}


func_1171(var_3277_float, var_3278_int)
{
	var_3279_int = 1; // 0x494 PushI
	var_3280_int = var_3278_int + var_3279_int; // 0x495 Add
	var_3281_int = 1; // 0x496 PushI
	var_3282_bool = var_3280_int == var_3281_int; // 0x497 Eq
	if(var_3282_bool == 0) goto Label_1180; // 0x498 JumpB
	var_3277_float = 0; // 0x499 MovI
	return 0; // 0x49a Return
	
Label_1180:
	var_3283_int = 1; // 0x49c PushI
	var_3284_int = var_3278_int + var_3283_int; // 0x49d Add
	var_3285_int = 2; // 0x49e PushI
	var_3286_bool = var_3284_int == var_3285_int; // 0x49f Eq
	if(var_3286_bool == 0) goto Label_1188; // 0x4a0 JumpB
	var_3277_float = 0; // 0x4a1 MovI
	return 0; // 0x4a2 Return
	
Label_1188:
	var_3287_int = 1; // 0x4a4 PushI
	var_3288_int = var_3278_int + var_3287_int; // 0x4a5 Add
	var_3289_int = 3; // 0x4a6 PushI
	var_3290_bool = var_3288_int == var_3289_int; // 0x4a7 Eq
	if(var_3290_bool == 0) goto Label_1196; // 0x4a8 JumpB
	var_3277_float = 1; // 0x4a9 MovI
	return 0; // 0x4aa Return
	
Label_1196:
	var_3291_int = 1; // 0x4ac PushI
	var_3292_int = var_3278_int + var_3291_int; // 0x4ad Add
	var_3293_int = 4; // 0x4ae PushI
	var_3294_bool = var_3292_int == var_3293_int; // 0x4af Eq
	if(var_3294_bool == 0) goto Label_1204; // 0x4b0 JumpB
	var_3277_float = 1; // 0x4b1 MovI
	return 0; // 0x4b2 Return
	
Label_1204:
	var_3295_int = 1; // 0x4b4 PushI
	var_3296_int = var_3278_int + var_3295_int; // 0x4b5 Add
	var_3297_int = 5; // 0x4b6 PushI
	var_3298_bool = var_3296_int == var_3297_int; // 0x4b7 Eq
	if(var_3298_bool == 0) goto Label_1212; // 0x4b8 JumpB
	var_3277_float = 1; // 0x4b9 MovI
	return 0; // 0x4ba Return
	
Label_1212:
	var_3299_int = 1; // 0x4bc PushI
	var_3300_int = var_3278_int + var_3299_int; // 0x4bd Add
	var_3301_int = 6; // 0x4be PushI
	var_3302_bool = var_3300_int == var_3301_int; // 0x4bf Eq
	if(var_3302_bool == 0) goto Label_1220; // 0x4c0 JumpB
	var_3277_float = 2; // 0x4c1 MovI
	return 0; // 0x4c2 Return
	
Label_1220:
	var_3303_int = 1; // 0x4c4 PushI
	var_3304_int = var_3278_int + var_3303_int; // 0x4c5 Add
	var_3305_int = 7; // 0x4c6 PushI
	var_3306_bool = var_3304_int == var_3305_int; // 0x4c7 Eq
	if(var_3306_bool == 0) goto Label_1228; // 0x4c8 JumpB
	var_3277_float = 1; // 0x4c9 MovI
	return 0; // 0x4ca Return
	
Label_1228:
	var_3307_int = 1; // 0x4cc PushI
	var_3308_int = var_3278_int + var_3307_int; // 0x4cd Add
	var_3309_int = 8; // 0x4ce PushI
	var_3310_bool = var_3308_int == var_3309_int; // 0x4cf Eq
	if(var_3310_bool == 0) goto Label_1236; // 0x4d0 JumpB
	var_3277_float = 1; // 0x4d1 MovI
	return 0; // 0x4d2 Return
	
Label_1236:
	var_3311_int = 1; // 0x4d4 PushI
	var_3312_int = var_3278_int + var_3311_int; // 0x4d5 Add
	var_3313_int = 9; // 0x4d6 PushI
	var_3314_bool = var_3312_int == var_3313_int; // 0x4d7 Eq
	if(var_3314_bool == 0) goto Label_1244; // 0x4d8 JumpB
	var_3277_float = 1; // 0x4d9 MovI
	return 0; // 0x4da Return
	
Label_1244:
	var_3315_int = 1; // 0x4dc PushI
	var_3316_int = var_3278_int + var_3315_int; // 0x4dd Add
	var_3317_int = 10; // 0x4de PushI
	var_3318_bool = var_3316_int == var_3317_int; // 0x4df Eq
	if(var_3318_bool == 0) goto Label_1252; // 0x4e0 JumpB
	var_3277_float = 1; // 0x4e1 MovI
	return 0; // 0x4e2 Return
	
Label_1252:
	var_3319_int = 1; // 0x4e4 PushI
	var_3320_int = var_3278_int + var_3319_int; // 0x4e5 Add
	var_3321_int = 11; // 0x4e6 PushI
	var_3322_bool = var_3320_int == var_3321_int; // 0x4e7 Eq
	if(var_3322_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_3277_float = 1; // 0x4e9 MovI
	return 0; // 0x4ea Return
	
Label_1259:
	var_3277_float = 0; // 0x4eb MovI
	return 0; // 0x4ec Return
}


func_7315(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object)
{
	var_1953_int = 0; // 0x1c94 PushI
	var_1954_bool = var_1948_int == var_1953_int; // 0x1c95 Eq
	if(var_1954_bool == 0) goto Label_7355; // 0x1c96 JumpB
	var_1955_int = 0; var_1956_bool = 0; // 0x1c97 PushV
	var_1955_int = 15; // 0x1c98 MovI
	var_1956_bool = 0; // 0x1c99 MovB
	func_802(var_1955_int, var_1956_bool); // 0x1c9a NEW_2
	var_1957_int = 0; var_1958_bool = 0; var_1959_int = 0; // 0x1c9c PushV
	var_1957_int = 15; // 0x1c9d MovI
	var_1958_bool = 0; // 0x1c9e MovB
	var_1959_int = 1; // 0x1c9f MovI
	func_819(var_1957_int, var_1958_bool, var_1959_int); // 0x1ca0 NEW_2
	var_1960_int = 0; var_1961_int = 0; var_1962_object = Obj(); var_1963_object = Obj(); var_1964_object = Obj(); // 0x1ca2 PushV
	var_1960_int = 15; // 0x1ca3 MovI
	var_1961_int = var_1947_int; // 0x1ca4 Mov
	var_1962_object = var_1949_object; // 0x1ca5 Mov
	var_1963_object = var_1950_object; // 0x1ca6 Mov
	var_1964_object = var_1951_object; // 0x1ca7 Mov
	func_628(var_1961_int, var_1962_object, var_1963_object, var_1964_object); // 0x1ca8 NEW_2
	var_1965_object = Obj(); var_1966_int = 0; // 0x1caa PushV
	var_1965_object = var_1952_object; // 0x1cab Mov
	var_1966_int = 0; // 0x1cac MovI
	func_311(var_1966_int); // 0x1cad NEW_2
	var_1967_int = 0; var_1968_bool = 0; var_1969_int = 0; // 0x1caf PushV
	var_1967_int = 15; // 0x1cb0 MovI
	var_1968_bool = 0; // 0x1cb1 MovB
	var_1969_int = 5; // 0x1cb2 MovI
	func_876(var_1967_int, var_1968_bool, var_1969_int); // 0x1cb3 NEW_2
	var_1970_int = 0; var_1971_bool = 0; var_1972_int = 0; // 0x1cb5 PushV
	var_1970_int = 15; // 0x1cb6 MovI
	var_1971_bool = 0; // 0x1cb7 MovB
	var_1972_int = 5; // 0x1cb8 MovI
	func_938(var_1970_int, var_1971_bool, var_1972_int); // 0x1cb9 NEW_2
	
Label_7355:
	var_1973_int = 0; var_1974_int = 0; // 0x1cbb PushV
	var_1973_int = 15; // 0x1cbc MovI
	var_1974_int = var_1948_int; // 0x1cbd Mov
	func_1093(var_1973_int, var_1974_int); // 0x1cbe NEW_2
	var_1975_int = 0; var_1976_int = 0; var_1977_int = 0; // 0x1cc0 PushV
	var_1975_int = 15; // 0x1cc1 MovI
	var_1976_int = var_1947_int; // 0x1cc2 Mov
	var_1977_int = var_1948_int; // 0x1cc3 Mov
	func_1382(var_1975_int, var_1976_int, var_1977_int); // 0x1cc4 NEW_2
	return 0; // 0x1cc6 Return
}


func_154(var_4895_object, var_4896_string)
{
	var_4897_object = Obj(); var_4898_object = Obj(); var_4899_object = Obj(); var_4900_object = Obj(); // 0x9a PushV
	GetMainOutdoorScene(var_4899_object); // 0x9b Func
	var_4901_string = ".xml"; // 0x9d PushS
	var_4902_int = var_4896_string + var_4901_string; // 0x9e Add
	AddBlankActorFromXml(var_4900_object, var_4899_object, var_4896_string, var_4902_int); // 0x9f Func
	var_4895_object = var_4900_object; // 0xa1 Mov
	return 4; // 0xa2 Return
}


func_10394()
{
	var_6006_object = Obj(); var_6007_object = Obj(); // 0x289a PushV
	var_6008_object = Obj(); // 0x289b PushV
	func_12247(var_6008_object); // 0x289c NEW_2
	var_6007_object = var_6008_object; // 0x289d Mov
	var_6009_string = "d9q04GotoAnna"; // 0x289f PushS
	var_6010_string = "pt_map_anna"; // 0x28a0 PushS
	var_6011_int = 0; // 0x28a1 PushI
	var_6012_int = 511375; // 0x28a2 PushI
	var_6013_float = 0; // 0x28a3 PushV
	func_290(var_6013_float); // 0x28a4 NEW_2
	AddMark(var_6009_string, var_6010_string, var_6011_int, var_6012_int, var_6013_float); // 0x28a6 ObjFunc
	return 2; // 0x28a8 Return
}


func_11423()
{
	var_5044_object = Obj(); var_5045_object = Obj(); var_5046_object = Obj(); var_5047_object = Obj(); // 0x2c9f PushV
	var_5048_object = Obj(); // 0x2ca0 PushV
	func_12247(var_5048_object); // 0x2ca1 NEW_2
	var_5046_object = var_5048_object; // 0x2ca2 Mov
	var_5049_string = "d7q01AglajaFindLierSelf"; // 0x2ca4 PushS
	FindMark(var_5047_object, var_5049_string); // 0x2ca5 ObjFunc
	var_5050_object = var_5047_object; // 0x2ca7 Push
	if(var_5050_object == 0) goto Label_11435; // 0x2ca8 JumpB
	Remove(); // 0x2ca9 ObjFunc
	
Label_11435:
	var_5051_string = "d7q01AglajaGotoBirdmaskSelf"; // 0x2cab PushS
	FindMark(var_5047_object, var_5051_string); // 0x2cac ObjFunc
	var_5052_object = var_5047_object; // 0x2cae Push
	if(var_5052_object == 0) goto Label_11442; // 0x2caf JumpB
	Remove(); // 0x2cb0 ObjFunc
	
Label_11442:
	var_5053_string = "d7q01BirdmaskD"; // 0x2cb2 PushS
	FindMark(var_5047_object, var_5053_string); // 0x2cb3 ObjFunc
	var_5054_object = var_5047_object; // 0x2cb5 Push
	if(var_5054_object == 0) goto Label_11449; // 0x2cb6 JumpB
	Remove(); // 0x2cb7 ObjFunc
	
Label_11449:
	var_5055_string = "d7q01BirdmaskM"; // 0x2cb9 PushS
	FindMark(var_5047_object, var_5055_string); // 0x2cba ObjFunc
	var_5056_object = var_5047_object; // 0x2cbc Push
	if(var_5056_object == 0) goto Label_11456; // 0x2cbd JumpB
	Remove(); // 0x2cbe ObjFunc
	
Label_11456:
	var_5057_string = "d7q01BirdmaskU"; // 0x2cc0 PushS
	FindMark(var_5047_object, var_5057_string); // 0x2cc1 ObjFunc
	var_5058_object = var_5047_object; // 0x2cc3 Push
	if(var_5058_object == 0) goto Label_11463; // 0x2cc4 JumpB
	Remove(); // 0x2cc5 ObjFunc
	
Label_11463:
	var_5059_string = "d7q02AlexandrGotoPetr"; // 0x2cc7 PushS
	FindMark(var_5047_object, var_5059_string); // 0x2cc8 ObjFunc
	var_5060_object = var_5047_object; // 0x2cca Push
	if(var_5060_object == 0) goto Label_11470; // 0x2ccb JumpB
	Remove(); // 0x2ccc ObjFunc
	
Label_11470:
	var_5061_string = "d7q02MarkGotoAlexandr"; // 0x2cce PushS
	FindMark(var_5047_object, var_5061_string); // 0x2ccf ObjFunc
	var_5062_object = var_5047_object; // 0x2cd1 Push
	if(var_5062_object == 0) goto Label_11477; // 0x2cd2 JumpB
	Remove(); // 0x2cd3 ObjFunc
	
Label_11477:
	var_5063_string = "d7q02MarkGotoCemetery"; // 0x2cd5 PushS
	FindMark(var_5047_object, var_5063_string); // 0x2cd6 ObjFunc
	var_5064_object = var_5047_object; // 0x2cd8 Push
	if(var_5064_object == 0) goto Label_11484; // 0x2cd9 JumpB
	Remove(); // 0x2cda ObjFunc
	
Label_11484:
	var_5065_string = "d7q04WastedGotoGatherer"; // 0x2cdc PushS
	FindMark(var_5047_object, var_5065_string); // 0x2cdd ObjFunc
	var_5066_object = var_5047_object; // 0x2cdf Push
	if(var_5066_object == 0) goto Label_11491; // 0x2ce0 JumpB
	Remove(); // 0x2ce1 ObjFunc
	
Label_11491:
	var_5067_string = "d7q04NudeGotoAndrei"; // 0x2ce3 PushS
	FindMark(var_5047_object, var_5067_string); // 0x2ce4 ObjFunc
	var_5068_object = var_5047_object; // 0x2ce6 Push
	if(var_5068_object == 0) goto Label_11498; // 0x2ce7 JumpB
	Remove(); // 0x2ce8 ObjFunc
	
Label_11498:
	var_5069_bool = 0; var_5070_int = 0; // 0x2cea PushV
	var_5070_int = 165; // 0x2ceb MovI
	func_12222(var_5069_bool, var_5070_int); // 0x2cec NEW_2
	var_5071_bool = 0; var_5072_int = 0; // 0x2cee PushV
	var_5072_int = 170; // 0x2cef MovI
	func_12222(var_5071_bool, var_5072_int); // 0x2cf0 NEW_2
	var_5073_bool = 0; var_5074_int = 0; // 0x2cf2 PushV
	var_5074_int = 637; // 0x2cf3 MovI
	func_12222(var_5073_bool, var_5074_int); // 0x2cf4 NEW_2
	var_5075_bool = 0; var_5076_int = 0; // 0x2cf6 PushV
	var_5076_int = 641; // 0x2cf7 MovI
	func_12222(var_5075_bool, var_5076_int); // 0x2cf8 NEW_2
	return 4; // 0x2cfa Return
}


func_2212(var_750_int, var_751_int, var_752_int)
{
	var_753_int = 0; var_754_int = 0; // 0x8a4 PushV
	var_755_int = 1; // 0x8a5 PushI
	var_756_int = var_751_int + var_755_int; // 0x8a6 Add
	var_757_int = 12; // 0x8a7 PushI
	var_758_bool = var_756_int == var_757_int; // 0x8a8 Eq
	if(var_758_bool == 0) goto Label_2219; // 0x8a9 JumpB
	return 2; // 0x8aa Return
	
Label_2219:
	var_759_bool = 0; // 0x8ab PushV
	var_759_bool = 0; // 0x8ac MovB
	var_760_bool = 0; // 0x8ad PushV
	var_760_bool = 1; // 0x8ae MovB
	var_761_int = 7; // 0x8af PushI
	var_762_bool = var_752_int < var_761_int; // 0x8b0 LT
	if(var_762_bool == 0) goto Label_2230; // 0x8b1 JumpB
	var_763_int = 21; // 0x8b2 PushI
	var_764_bool = var_752_int > var_763_int; // 0x8b3 GT
	if(var_764_bool == 0) goto Label_2230; // 0x8b4 JumpB
	var_760_bool = 0; // 0x8b5 MovB
	
Label_2230:
	if(var_760_bool == 0) goto Label_2235; // 0x8b6 JumpB
	var_765_int = 0; // 0x8b7 PushI
	var_766_bool = var_751_int != var_765_int; // 0x8b8 Neq
	if(var_766_bool == 0) goto Label_2235; // 0x8b9 JumpB
	var_759_bool = 1; // 0x8ba MovB
	
Label_2235:
	if(var_759_bool == 0) goto Label_2251; // 0x8bb JumpB
	var_767_int = 1; // 0x8bc PushI
	var_768_float = 0; var_769_int = 0; // 0x8bd PushV
	var_769_int = var_751_int; // 0x8be Mov
	func_1147(var_768_float, var_769_int); // 0x8bf NEW_2
	var_754_int = var_767_int * var_768_float; // 0x8c1 Mult2
	var_782_int = var_754_int; // 0x8c2 Push
	if(var_782_int == 0) goto Label_2251; // 0x8c3 JumpB
	var_783_int = 0; var_784_string = ""; var_785_string = ""; var_786_int = 0; // 0x8c4 PushV
	var_783_int = var_750_int; // 0x8c5 Mov
	var_784_string = "pers_grabitel"; // 0x8c6 MovS
	var_785_string = "grabitel.xml"; // 0x8c7 MovS
	var_786_int = var_754_int; // 0x8c8 Mov
	func_509(var_783_int, var_784_string, var_785_string, var_786_int); // 0x8c9 NEW_2
	
Label_2251:
	var_791_bool = 0; var_792_int = 0; var_793_int = 0; // 0x8cb PushV
	var_792_int = var_751_int; // 0x8cc Mov
	var_793_int = var_752_int; // 0x8cd Mov
	func_1116(var_791_bool, var_792_int, var_793_int); // 0x8ce NEW_2
	if(var_791_bool == 0) goto Label_2314; // 0x8d0 JumpB
	var_811_int = 0; var_812_string = ""; var_813_string = ""; var_814_int = 0; // 0x8d1 PushV
	var_811_int = var_750_int; // 0x8d2 Mov
	var_812_string = "pers_unosha"; // 0x8d3 MovS
	var_813_string = "unosha_attacker.xml"; // 0x8d4 MovS
	var_814_int = 1; // 0x8d5 MovI
	func_509(var_811_int, var_812_string, var_813_string, var_814_int); // 0x8d6 NEW_2
	var_815_int = 0; var_816_string = ""; var_817_string = ""; var_818_int = 0; // 0x8d8 PushV
	var_815_int = var_750_int; // 0x8d9 Mov
	var_816_string = "pers_unosha"; // 0x8da MovS
	var_817_string = "unosha2_attacker.xml"; // 0x8db MovS
	var_818_int = 1; // 0x8dc MovI
	func_509(var_815_int, var_816_string, var_817_string, var_818_int); // 0x8dd NEW_2
	var_819_int = 0; var_820_string = ""; var_821_string = ""; var_822_int = 0; // 0x8df PushV
	var_819_int = var_750_int; // 0x8e0 Mov
	var_820_string = "pers_worker"; // 0x8e1 MovS
	var_821_string = "worker_attacker.xml"; // 0x8e2 MovS
	var_822_int = 1; // 0x8e3 MovI
	func_509(var_819_int, var_820_string, var_821_string, var_822_int); // 0x8e4 NEW_2
	var_823_int = 0; var_824_string = ""; var_825_string = ""; var_826_int = 0; // 0x8e6 PushV
	var_823_int = var_750_int; // 0x8e7 Mov
	var_824_string = "pers_worker"; // 0x8e8 MovS
	var_825_string = "worker2_attacker.xml"; // 0x8e9 MovS
	var_826_int = 1; // 0x8ea MovI
	func_509(var_823_int, var_824_string, var_825_string, var_826_int); // 0x8eb NEW_2
	var_827_int = 0; var_828_string = ""; var_829_string = ""; var_830_int = 0; // 0x8ed PushV
	var_827_int = var_750_int; // 0x8ee Mov
	var_828_string = "pers_boy"; // 0x8ef MovS
	var_829_string = "boy.xml"; // 0x8f0 MovS
	var_830_int = 1; // 0x8f1 MovI
	func_509(var_827_int, var_828_string, var_829_string, var_830_int); // 0x8f2 NEW_2
	var_831_int = 0; var_832_string = ""; var_833_string = ""; var_834_int = 0; // 0x8f4 PushV
	var_831_int = var_750_int; // 0x8f5 Mov
	var_832_string = "pers_alkash"; // 0x8f6 MovS
	var_833_string = "alkash.xml"; // 0x8f7 MovS
	var_834_int = 1; // 0x8f8 MovI
	func_509(var_831_int, var_832_string, var_833_string, var_834_int); // 0x8f9 NEW_2
	var_835_int = 0; var_836_string = ""; var_837_string = ""; var_838_int = 0; // 0x8fb PushV
	var_835_int = var_750_int; // 0x8fc Mov
	var_836_string = "pers_girl"; // 0x8fd MovS
	var_837_string = "girl.xml"; // 0x8fe MovS
	var_838_int = 1; // 0x8ff MovI
	func_509(var_835_int, var_836_string, var_837_string, var_838_int); // 0x900 NEW_2
	var_839_int = 0; var_840_string = ""; var_841_string = ""; var_842_int = 0; // 0x902 PushV
	var_839_int = var_750_int; // 0x903 Mov
	var_840_string = "pers_girl"; // 0x904 MovS
	var_841_string = "girl2.xml"; // 0x905 MovS
	var_842_int = 1; // 0x906 MovI
	func_509(var_839_int, var_840_string, var_841_string, var_842_int); // 0x907 NEW_2
	goto Label_2388; // 0x909 Jump
	
Label_2388:
	return 2; // 0x954 Return
	
Label_2314:
	var_843_bool = 0; // 0x90a PushV
	var_843_bool = 0; // 0x90b MovB
	var_844_int = 8; // 0x90c PushI
	var_845_bool = var_752_int > var_844_int; // 0x90d GT
	if(var_845_bool == 0) goto Label_2323; // 0x90e JumpB
	var_846_int = 21; // 0x90f PushI
	var_847_bool = var_752_int < var_846_int; // 0x910 LT
	if(var_847_bool == 0) goto Label_2323; // 0x911 JumpB
	var_843_bool = 1; // 0x912 MovB
	
Label_2323:
	if(var_843_bool == 0) goto Label_2367; // 0x913 JumpB
	var_848_int = 0; var_849_string = ""; var_850_string = ""; var_851_int = 0; // 0x914 PushV
	var_848_int = var_750_int; // 0x915 Mov
	var_849_string = "pers_boy"; // 0x916 MovS
	var_850_string = "boy.xml"; // 0x917 MovS
	var_851_int = 1; // 0x918 MovI
	func_509(var_848_int, var_849_string, var_850_string, var_851_int); // 0x919 NEW_2
	var_852_int = 0; var_853_string = ""; var_854_string = ""; var_855_int = 0; // 0x91b PushV
	var_852_int = var_750_int; // 0x91c Mov
	var_853_string = "pers_alkash"; // 0x91d MovS
	var_854_string = "alkash.xml"; // 0x91e MovS
	var_855_int = 1; // 0x91f MovI
	func_509(var_852_int, var_853_string, var_854_string, var_855_int); // 0x920 NEW_2
	var_856_int = 0; var_857_string = ""; var_858_string = ""; var_859_int = 0; // 0x922 PushV
	var_856_int = var_750_int; // 0x923 Mov
	var_857_string = "pers_girl"; // 0x924 MovS
	var_858_string = "girl.xml"; // 0x925 MovS
	var_859_int = 1; // 0x926 MovI
	func_509(var_856_int, var_857_string, var_858_string, var_859_int); // 0x927 NEW_2
	var_860_int = 0; var_861_string = ""; var_862_string = ""; var_863_int = 0; // 0x929 PushV
	var_860_int = var_750_int; // 0x92a Mov
	var_861_string = "pers_girl"; // 0x92b MovS
	var_862_string = "girl2.xml"; // 0x92c MovS
	var_863_int = 1; // 0x92d MovI
	func_509(var_860_int, var_861_string, var_862_string, var_863_int); // 0x92e NEW_2
	var_864_int = 0; var_865_string = ""; var_866_string = ""; var_867_int = 0; // 0x930 PushV
	var_864_int = var_750_int; // 0x931 Mov
	var_865_string = "pers_worker"; // 0x932 MovS
	var_866_string = "worker.xml"; // 0x933 MovS
	var_867_int = 2; // 0x934 MovI
	func_509(var_864_int, var_865_string, var_866_string, var_867_int); // 0x935 NEW_2
	var_868_int = 0; var_869_string = ""; var_870_string = ""; var_871_int = 0; // 0x937 PushV
	var_868_int = var_750_int; // 0x938 Mov
	var_869_string = "pers_worker"; // 0x939 MovS
	var_870_string = "worker2.xml"; // 0x93a MovS
	var_871_int = 2; // 0x93b MovI
	func_509(var_868_int, var_869_string, var_870_string, var_871_int); // 0x93c NEW_2
	goto Label_2388; // 0x93e Jump
	
Label_2367:
	var_872_int = 0; var_873_string = ""; var_874_string = ""; var_875_int = 0; // 0x93f PushV
	var_872_int = var_750_int; // 0x940 Mov
	var_873_string = "pers_alkash"; // 0x941 MovS
	var_874_string = "alkash.xml"; // 0x942 MovS
	var_875_int = 1; // 0x943 MovI
	func_509(var_872_int, var_873_string, var_874_string, var_875_int); // 0x944 NEW_2
	var_876_int = 0; var_877_string = ""; var_878_string = ""; var_879_int = 0; // 0x946 PushV
	var_876_int = var_750_int; // 0x947 Mov
	var_877_string = "pers_worker"; // 0x948 MovS
	var_878_string = "worker.xml"; // 0x949 MovS
	var_879_int = 1; // 0x94a MovI
	func_509(var_876_int, var_877_string, var_878_string, var_879_int); // 0x94b NEW_2
	var_880_int = 0; var_881_string = ""; var_882_string = ""; var_883_int = 0; // 0x94d PushV
	var_880_int = var_750_int; // 0x94e Mov
	var_881_string = "pers_worker"; // 0x94f MovS
	var_882_string = "worker2.xml"; // 0x950 MovS
	var_883_int = 1; // 0x951 MovI
	func_509(var_880_int, var_881_string, var_882_string, var_883_int); // 0x952 NEW_2
}


func_165(var_329_object, var_331_string, var_332_string, var_333_string)
{
	var_335_bool = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_object = Obj(); var_339_bool = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_object = Obj(); // 0xa5 PushV
	GetLocator(var_331_string, var_339_bool, var_340_cvector, var_341_cvector); // 0xa6 ObjFunc
	var_343_bool = var_339_bool == 0; // 0xa8 Not
	if(var_343_bool == 0) goto Label_178; // 0xa9 JumpB
	var_344_string = "Locator "; // 0xaa PushS
	var_345_int = var_344_string + var_331_string; // 0xab Add
	var_346_string = " doesn't exist"; // 0xac PushS
	var_347_int = var_345_int + var_346_string; // 0xad Add
	Trace(var_347_int); // 0xae Func
	var_342_object = 0; // 0xb0 SetNull
	goto Label_180; // 0xb1 Jump
	
Label_180:
	var_329_object = var_342_object; // 0xb4 Mov
	return 8; // 0xb5 Return
	
Label_178:
	AddStationaryActor(var_342_object, var_340_cvector, var_341_cvector, var_332_string, var_333_string); // 0xb2 ObjFunc
}


func_10410()
{
	var_6110_string = "d8BurahLetter"; // 0x28ab PushS
	var_6111_int = 1; // 0x28ac PushI
	SetVariable(var_6110_string, var_6111_int); // 0x28ad Func
	return 0; // 0x28af Return
}


func_10416()
{
	var_6168_int = 0; var_6169_string = ""; // 0x28b1 PushV
	var_6169_string = "map_chertez_state"; // 0x28b2 MovS
	func_138(var_6168_int, var_6169_string); // 0x28b3 NEW_2
	var_6170_int = 1; // 0x28b5 PushI
	var_6171_bool = var_6168_int <= var_6170_int; // 0x28b6 LE
	if(var_6171_bool == 0) goto Label_10432; // 0x28b7 JumpB
	var_6172_string = "map_chertez_state"; // 0x28b8 PushS
	var_6173_int = 1; // 0x28b9 PushI
	SetVariable(var_6172_string, var_6173_int); // 0x28ba Func
	var_6174_string = "map_chertez_force"; // 0x28bc PushS
	var_6175_int = 1; // 0x28bd PushI
	SetVariable(var_6174_string, var_6175_int); // 0x28be Func
	
Label_10432:
	return 0; // 0x28c0 Return
}


func_6321(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object)
{
	var_1643_int = 0; // 0x18b2 PushI
	var_1644_bool = var_1638_int == var_1643_int; // 0x18b3 Eq
	if(var_1644_bool == 0) goto Label_6361; // 0x18b4 JumpB
	var_1645_int = 0; var_1646_bool = 0; // 0x18b5 PushV
	var_1645_int = 10; // 0x18b6 MovI
	var_1646_bool = 0; // 0x18b7 MovB
	func_802(var_1645_int, var_1646_bool); // 0x18b8 NEW_2
	var_1647_int = 0; var_1648_bool = 0; var_1649_int = 0; // 0x18ba PushV
	var_1647_int = 10; // 0x18bb MovI
	var_1648_bool = 0; // 0x18bc MovB
	var_1649_int = 1; // 0x18bd MovI
	func_819(var_1647_int, var_1648_bool, var_1649_int); // 0x18be NEW_2
	var_1650_int = 0; var_1651_int = 0; var_1652_object = Obj(); var_1653_object = Obj(); var_1654_object = Obj(); // 0x18c0 PushV
	var_1650_int = 10; // 0x18c1 MovI
	var_1651_int = var_1637_int; // 0x18c2 Mov
	var_1652_object = var_1639_object; // 0x18c3 Mov
	var_1653_object = var_1640_object; // 0x18c4 Mov
	var_1654_object = var_1641_object; // 0x18c5 Mov
	func_628(var_1651_int, var_1652_object, var_1653_object, var_1654_object); // 0x18c6 NEW_2
	var_1655_object = Obj(); var_1656_int = 0; // 0x18c8 PushV
	var_1655_object = var_1642_object; // 0x18c9 Mov
	var_1656_int = 0; // 0x18ca MovI
	func_311(var_1656_int); // 0x18cb NEW_2
	var_1657_int = 0; var_1658_bool = 0; var_1659_int = 0; // 0x18cd PushV
	var_1657_int = 10; // 0x18ce MovI
	var_1658_bool = 0; // 0x18cf MovB
	var_1659_int = 7; // 0x18d0 MovI
	func_876(var_1657_int, var_1658_bool, var_1659_int); // 0x18d1 NEW_2
	var_1660_int = 0; var_1661_bool = 0; var_1662_int = 0; // 0x18d3 PushV
	var_1660_int = 10; // 0x18d4 MovI
	var_1661_bool = 0; // 0x18d5 MovB
	var_1662_int = 7; // 0x18d6 MovI
	func_938(var_1660_int, var_1661_bool, var_1662_int); // 0x18d7 NEW_2
	
Label_6361:
	var_1663_int = 0; var_1664_int = 0; // 0x18d9 PushV
	var_1663_int = 10; // 0x18da MovI
	var_1664_int = var_1638_int; // 0x18db Mov
	func_989(var_1663_int, var_1664_int); // 0x18dc NEW_2
	var_1665_int = 0; var_1666_int = 0; var_1667_int = 0; // 0x18de PushV
	var_1665_int = 10; // 0x18df MovI
	var_1666_int = var_1637_int; // 0x18e0 Mov
	var_1667_int = var_1638_int; // 0x18e1 Mov
	func_1630(var_1665_int, var_1666_int, var_1667_int); // 0x18e2 NEW_2
	return 0; // 0x18e4 Return
}


func_5296(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object)
{
	var_2592_int = 0; // 0x14b1 PushI
	var_2593_bool = var_2587_int == var_2592_int; // 0x14b2 Eq
	if(var_2593_bool == 0) goto Label_5336; // 0x14b3 JumpB
	var_2594_int = 0; var_2595_bool = 0; // 0x14b4 PushV
	var_2594_int = 4; // 0x14b5 MovI
	var_2595_bool = 1; // 0x14b6 MovB
	func_802(var_2594_int, var_2595_bool); // 0x14b7 NEW_2
	var_2596_int = 0; var_2597_bool = 0; var_2598_int = 0; // 0x14b9 PushV
	var_2596_int = 4; // 0x14ba MovI
	var_2597_bool = 1; // 0x14bb MovB
	var_2598_int = 1; // 0x14bc MovI
	func_819(var_2596_int, var_2597_bool, var_2598_int); // 0x14bd NEW_2
	var_2599_int = 0; var_2600_int = 0; var_2601_object = Obj(); var_2602_object = Obj(); var_2603_object = Obj(); // 0x14bf PushV
	var_2599_int = 4; // 0x14c0 MovI
	var_2600_int = var_2586_int; // 0x14c1 Mov
	var_2601_object = var_2588_object; // 0x14c2 Mov
	var_2602_object = var_2589_object; // 0x14c3 Mov
	var_2603_object = var_2590_object; // 0x14c4 Mov
	func_647(var_2599_int, var_2600_int, var_2601_object, var_2602_object, var_2603_object); // 0x14c5 NEW_2
	var_2604_object = Obj(); var_2605_int = 0; // 0x14c7 PushV
	var_2604_object = var_2591_object; // 0x14c8 Mov
	var_2605_int = 1; // 0x14c9 MovI
	func_311(var_2605_int); // 0x14ca NEW_2
	var_2606_int = 0; var_2607_bool = 0; var_2608_int = 0; // 0x14cc PushV
	var_2606_int = 4; // 0x14cd MovI
	var_2607_bool = 1; // 0x14ce MovB
	var_2608_int = 4; // 0x14cf MovI
	func_876(var_2606_int, var_2607_bool, var_2608_int); // 0x14d0 NEW_2
	var_2609_int = 0; var_2610_bool = 0; var_2611_int = 0; // 0x14d2 PushV
	var_2609_int = 4; // 0x14d3 MovI
	var_2610_bool = 0; // 0x14d4 MovB
	var_2611_int = 4; // 0x14d5 MovI
	func_938(var_2609_int, var_2610_bool, var_2611_int); // 0x14d6 NEW_2
	
Label_5336:
	var_2612_int = 0; var_2613_bool = 0; // 0x14d8 PushV
	var_2612_int = 4; // 0x14d9 MovI
	var_2613_bool = 0; // 0x14da MovB
	func_785(var_2612_int, var_2613_bool); // 0x14db NEW_2
	var_2614_int = 0; var_2615_int = 0; var_2616_int = 0; // 0x14dd PushV
	var_2614_int = 4; // 0x14de MovI
	var_2615_int = var_2586_int; // 0x14df Mov
	var_2616_int = var_2587_int; // 0x14e0 Mov
	func_2950(var_2614_int, var_2615_int, var_2616_int); // 0x14e1 NEW_2
	return 0; // 0x14e3 Return
}


func_183(var_4570_string, var_4571_bool)
{
	var_4572_object = Obj(); var_4573_object = Obj(); // 0xb7 PushV
	FindActor(var_4573_object, var_4570_string); // 0xb8 Func
	var_4574_bool = var_4573_object == 0; // 0xba Not
	if(var_4574_bool == 0) goto Label_195; // 0xbb JumpB
	var_4575_string = "Door "; // 0xbc PushS
	var_4576_int = var_4575_string + var_4570_string; // 0xbd Add
	var_4577_string = " not found"; // 0xbe PushS
	var_4578_int = var_4576_int + var_4577_string; // 0xbf Add
	Trace(var_4578_int); // 0xc0 Func
	goto Label_198; // 0xc2 Jump
	
Label_198:
	return 2; // 0xc6 Return
	
Label_195:
	var_4579_string = "locked"; // 0xc3 PushS
	SetProperty(var_4579_string, var_4571_bool); // 0xc4 ObjFunc
}


func_10433()
{
	var_6182_int = 0; var_6183_string = ""; // 0x28c2 PushV
	var_6183_string = "map_chertez_state"; // 0x28c3 MovS
	func_138(var_6182_int, var_6183_string); // 0x28c4 NEW_2
	var_6184_int = 2; // 0x28c6 PushI
	var_6185_bool = var_6182_int <= var_6184_int; // 0x28c7 LE
	if(var_6185_bool == 0) goto Label_10449; // 0x28c8 JumpB
	var_6186_string = "map_chertez_state"; // 0x28c9 PushS
	var_6187_int = 2; // 0x28ca PushI
	SetVariable(var_6186_string, var_6187_int); // 0x28cb Func
	var_6188_string = "map_chertez_force"; // 0x28cd PushS
	var_6189_int = 1; // 0x28ce PushI
	SetVariable(var_6188_string, var_6189_int); // 0x28cf Func
	
Label_10449:
	return 0; // 0x28d1 Return
}


func_7367(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object)
{
	var_3144_int = 0; // 0x1cc8 PushI
	var_3145_bool = var_3139_int == var_3144_int; // 0x1cc9 Eq
	if(var_3145_bool == 0) goto Label_7407; // 0x1cca JumpB
	var_3146_int = 0; var_3147_bool = 0; // 0x1ccb PushV
	var_3146_int = 15; // 0x1ccc MovI
	var_3147_bool = 1; // 0x1ccd MovB
	func_802(var_3146_int, var_3147_bool); // 0x1cce NEW_2
	var_3148_int = 0; var_3149_bool = 0; var_3150_int = 0; // 0x1cd0 PushV
	var_3148_int = 15; // 0x1cd1 MovI
	var_3149_bool = 1; // 0x1cd2 MovB
	var_3150_int = 1; // 0x1cd3 MovI
	func_819(var_3148_int, var_3149_bool, var_3150_int); // 0x1cd4 NEW_2
	var_3151_int = 0; var_3152_int = 0; var_3153_object = Obj(); var_3154_object = Obj(); var_3155_object = Obj(); // 0x1cd6 PushV
	var_3151_int = 15; // 0x1cd7 MovI
	var_3152_int = var_3138_int; // 0x1cd8 Mov
	var_3153_object = var_3140_object; // 0x1cd9 Mov
	var_3154_object = var_3141_object; // 0x1cda Mov
	var_3155_object = var_3142_object; // 0x1cdb Mov
	func_647(var_3151_int, var_3152_int, var_3153_object, var_3154_object, var_3155_object); // 0x1cdc NEW_2
	var_3156_object = Obj(); var_3157_int = 0; // 0x1cde PushV
	var_3156_object = var_3143_object; // 0x1cdf Mov
	var_3157_int = 1; // 0x1ce0 MovI
	func_311(var_3157_int); // 0x1ce1 NEW_2
	var_3158_int = 0; var_3159_bool = 0; var_3160_int = 0; // 0x1ce3 PushV
	var_3158_int = 15; // 0x1ce4 MovI
	var_3159_bool = 1; // 0x1ce5 MovB
	var_3160_int = 5; // 0x1ce6 MovI
	func_876(var_3158_int, var_3159_bool, var_3160_int); // 0x1ce7 NEW_2
	var_3161_int = 0; var_3162_bool = 0; var_3163_int = 0; // 0x1ce9 PushV
	var_3161_int = 15; // 0x1cea MovI
	var_3162_bool = 0; // 0x1ceb MovB
	var_3163_int = 5; // 0x1cec MovI
	func_938(var_3161_int, var_3162_bool, var_3163_int); // 0x1ced NEW_2
	
Label_7407:
	var_3164_int = 0; var_3165_bool = 0; // 0x1cef PushV
	var_3164_int = 15; // 0x1cf0 MovI
	var_3165_bool = 0; // 0x1cf1 MovB
	func_785(var_3164_int, var_3165_bool); // 0x1cf2 NEW_2
	var_3166_int = 0; var_3167_int = 0; var_3168_int = 0; // 0x1cf4 PushV
	var_3166_int = 15; // 0x1cf5 MovI
	var_3167_int = var_3138_int; // 0x1cf6 Mov
	var_3168_int = var_3139_int; // 0x1cf7 Mov
	func_2590(var_3166_int, var_3167_int, var_3168_int); // 0x1cf8 NEW_2
	return 0; // 0x1cfa Return
}


func_200(var_6245_bool, var_6246_object, var_6247_float)
{
	var_6248_bool = var_6246_object == 0; // 0xc9 Not
	if(var_6248_bool == 0) goto Label_205; // 0xca JumpB
	var_6245_bool = 0; // 0xcb MovB
	return 0; // 0xcc Return
	
Label_205:
	var_6249_int = 0; // 0xcd PushI
	var_6250_bool = var_6247_float > var_6249_int; // 0xce GT
	if(var_6250_bool == 0) goto Label_212; // 0xcf JumpB
	var_6251_int = 8; // 0xd0 PushI
	SendWorldWndMessage(var_6251_int); // 0xd1 Func
	goto Label_221; // 0xd3 Jump
	
Label_221:
	var_6252_float = 0; // 0xdd PushV
	var_6252_float = var_6247_float; // 0xde Mov
	func_235(var_6252_float); // 0xdf NEW_2
	var_6256_bool = 0; var_6257_object = Obj(); var_6258_string = ""; var_6259_float = 0; var_6260_float = 0; var_6261_float = 0; // 0xe1 PushV
	var_6257_object = var_6246_object; // 0xe2 Mov
	var_6258_string = "reputation"; // 0xe3 MovS
	var_6259_float = var_6247_float; // 0xe4 Mov
	var_6260_float = 0; // 0xe5 MovI
	var_6261_float = 1; // 0xe6 MovI
	func_99(var_6256_bool, var_6257_object, var_6258_string, var_6259_float, var_6260_float, var_6261_float); // 0xe7 NEW_2
	var_6245_bool = 1; // 0xe9 MovB
	return 0; // 0xea Return
	
Label_212:
	var_6274_int = 0; // 0xd4 PushI
	var_6275_bool = var_6247_float < var_6274_int; // 0xd5 LT
	if(var_6275_bool == 0) goto Label_219; // 0xd6 JumpB
	var_6276_int = 9; // 0xd7 PushI
	SendWorldWndMessage(var_6276_int); // 0xd8 Func
	goto Label_221; // 0xda Jump
	
Label_219:
	var_6245_bool = 0; // 0xdb MovB
	return 0; // 0xdc Return
}


func_10450()
{
	var_6196_int = 0; var_6197_string = ""; // 0x28d3 PushV
	var_6197_string = "map_chertez_state"; // 0x28d4 MovS
	func_138(var_6196_int, var_6197_string); // 0x28d5 NEW_2
	var_6198_int = 3; // 0x28d7 PushI
	var_6199_bool = var_6196_int <= var_6198_int; // 0x28d8 LE
	if(var_6199_bool == 0) goto Label_10466; // 0x28d9 JumpB
	var_6200_string = "map_chertez_state"; // 0x28da PushS
	var_6201_int = 3; // 0x28db PushI
	SetVariable(var_6200_string, var_6201_int); // 0x28dc Func
	var_6202_string = "map_chertez_force"; // 0x28de PushS
	var_6203_int = 1; // 0x28df PushI
	SetVariable(var_6202_string, var_6203_int); // 0x28e0 Func
	
Label_10466:
	return 0; // 0x28e2 Return
}


func_10467()
{
	var_6210_int = 0; var_6211_string = ""; // 0x28e4 PushV
	var_6211_string = "map_chertez_state"; // 0x28e5 MovS
	func_138(var_6210_int, var_6211_string); // 0x28e6 NEW_2
	var_6212_int = 4; // 0x28e8 PushI
	var_6213_bool = var_6210_int <= var_6212_int; // 0x28e9 LE
	if(var_6213_bool == 0) goto Label_10483; // 0x28ea JumpB
	var_6214_string = "map_chertez_state"; // 0x28eb PushS
	var_6215_int = 4; // 0x28ec PushI
	SetVariable(var_6214_string, var_6215_int); // 0x28ed Func
	var_6216_string = "map_chertez_force"; // 0x28ef PushS
	var_6217_int = 1; // 0x28f0 PushI
	SetVariable(var_6216_string, var_6217_int); // 0x28f1 Func
	
Label_10483:
	return 0; // 0x28f3 Return
}


func_5348(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object)
{
	var_3718_int = 0; // 0x14e5 PushI
	var_3719_bool = var_3713_int == var_3718_int; // 0x14e6 Eq
	if(var_3719_bool == 0) goto Label_5388; // 0x14e7 JumpB
	var_3720_int = 0; var_3721_bool = 0; // 0x14e8 PushV
	var_3720_int = 4; // 0x14e9 MovI
	var_3721_bool = 0; // 0x14ea MovB
	func_802(var_3720_int, var_3721_bool); // 0x14eb NEW_2
	var_3722_int = 0; var_3723_bool = 0; var_3724_int = 0; // 0x14ed PushV
	var_3722_int = 4; // 0x14ee MovI
	var_3723_bool = 0; // 0x14ef MovB
	var_3724_int = 1; // 0x14f0 MovI
	func_819(var_3722_int, var_3723_bool, var_3724_int); // 0x14f1 NEW_2
	var_3725_int = 0; var_3726_int = 0; var_3727_object = Obj(); var_3728_object = Obj(); var_3729_object = Obj(); // 0x14f3 PushV
	var_3725_int = 4; // 0x14f4 MovI
	var_3726_int = var_3712_int; // 0x14f5 Mov
	var_3727_object = var_3714_object; // 0x14f6 Mov
	var_3728_object = var_3715_object; // 0x14f7 Mov
	var_3729_object = var_3716_object; // 0x14f8 Mov
	func_726(var_3725_int, var_3726_int, var_3727_object, var_3728_object, var_3729_object); // 0x14f9 NEW_2
	var_3730_object = Obj(); var_3731_int = 0; // 0x14fb PushV
	var_3730_object = var_3717_object; // 0x14fc Mov
	var_3731_int = 2; // 0x14fd MovI
	func_311(var_3731_int); // 0x14fe NEW_2
	var_3732_int = 0; var_3733_bool = 0; var_3734_int = 0; // 0x1500 PushV
	var_3732_int = 4; // 0x1501 MovI
	var_3733_bool = 0; // 0x1502 MovB
	var_3734_int = 4; // 0x1503 MovI
	func_876(var_3732_int, var_3733_bool, var_3734_int); // 0x1504 NEW_2
	var_3735_int = 0; var_3736_bool = 0; var_3737_int = 0; // 0x1506 PushV
	var_3735_int = 4; // 0x1507 MovI
	var_3736_bool = 1; // 0x1508 MovB
	var_3737_int = 4; // 0x1509 MovI
	func_938(var_3735_int, var_3736_bool, var_3737_int); // 0x150a NEW_2
	
Label_5388:
	var_3738_int = 0; var_3739_bool = 0; // 0x150c PushV
	var_3738_int = 4; // 0x150d MovI
	var_3739_bool = 0; // 0x150e MovB
	func_785(var_3738_int, var_3739_bool); // 0x150f NEW_2
	var_3740_int = 0; var_3741_int = 0; var_3742_int = 0; // 0x1511 PushV
	var_3740_int = 4; // 0x1512 MovI
	var_3741_int = var_3712_int; // 0x1513 Mov
	var_3742_int = var_3713_int; // 0x1514 Mov
	func_3853(var_3740_int, var_3741_int, var_3742_int); // 0x1515 NEW_2
	return 0; // 0x1517 Return
}


func_6373(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object)
{
	var_2873_int = 0; // 0x18e6 PushI
	var_2874_bool = var_2868_int == var_2873_int; // 0x18e7 Eq
	if(var_2874_bool == 0) goto Label_6413; // 0x18e8 JumpB
	var_2875_int = 0; var_2876_bool = 0; // 0x18e9 PushV
	var_2875_int = 10; // 0x18ea MovI
	var_2876_bool = 1; // 0x18eb MovB
	func_802(var_2875_int, var_2876_bool); // 0x18ec NEW_2
	var_2877_int = 0; var_2878_bool = 0; var_2879_int = 0; // 0x18ee PushV
	var_2877_int = 10; // 0x18ef MovI
	var_2878_bool = 1; // 0x18f0 MovB
	var_2879_int = 1; // 0x18f1 MovI
	func_819(var_2877_int, var_2878_bool, var_2879_int); // 0x18f2 NEW_2
	var_2880_int = 0; var_2881_int = 0; var_2882_object = Obj(); var_2883_object = Obj(); var_2884_object = Obj(); // 0x18f4 PushV
	var_2880_int = 10; // 0x18f5 MovI
	var_2881_int = var_2867_int; // 0x18f6 Mov
	var_2882_object = var_2869_object; // 0x18f7 Mov
	var_2883_object = var_2870_object; // 0x18f8 Mov
	var_2884_object = var_2871_object; // 0x18f9 Mov
	func_647(var_2880_int, var_2881_int, var_2882_object, var_2883_object, var_2884_object); // 0x18fa NEW_2
	var_2885_object = Obj(); var_2886_int = 0; // 0x18fc PushV
	var_2885_object = var_2872_object; // 0x18fd Mov
	var_2886_int = 1; // 0x18fe MovI
	func_311(var_2886_int); // 0x18ff NEW_2
	var_2887_int = 0; var_2888_bool = 0; var_2889_int = 0; // 0x1901 PushV
	var_2887_int = 10; // 0x1902 MovI
	var_2888_bool = 1; // 0x1903 MovB
	var_2889_int = 7; // 0x1904 MovI
	func_876(var_2887_int, var_2888_bool, var_2889_int); // 0x1905 NEW_2
	var_2890_int = 0; var_2891_bool = 0; var_2892_int = 0; // 0x1907 PushV
	var_2890_int = 10; // 0x1908 MovI
	var_2891_bool = 0; // 0x1909 MovB
	var_2892_int = 7; // 0x190a MovI
	func_938(var_2890_int, var_2891_bool, var_2892_int); // 0x190b NEW_2
	
Label_6413:
	var_2893_int = 0; var_2894_bool = 0; // 0x190d PushV
	var_2893_int = 10; // 0x190e MovI
	var_2894_bool = 0; // 0x190f MovB
	func_785(var_2893_int, var_2894_bool); // 0x1910 NEW_2
	var_2895_int = 0; var_2896_int = 0; var_2897_int = 0; // 0x1912 PushV
	var_2895_int = 10; // 0x1913 MovI
	var_2896_int = var_2867_int; // 0x1914 Mov
	var_2897_int = var_2868_int; // 0x1915 Mov
	func_2770(var_2895_int, var_2896_int, var_2897_int); // 0x1916 NEW_2
	return 0; // 0x1918 Return
}


func_235(var_6252_float)
{
	var_6253_object = Obj(); var_6254_object = Obj(); // 0xeb PushV
	CreateFloatVector(var_6254_object); // 0xec Func
	add(var_6252_float); // 0xee ObjFunc
	var_6255_int = 16; // 0xf0 PushI
	SendWorldWndMessage(var_6255_int, var_6254_object); // 0xf1 Func
	return 2; // 0xf3 Return
}


func_1261(var_2157_float, var_2158_int)
{
	var_2159_int = 1; // 0x4ee PushI
	var_2160_int = var_2158_int + var_2159_int; // 0x4ef Add
	var_2161_int = 1; // 0x4f0 PushI
	var_2162_bool = var_2160_int == var_2161_int; // 0x4f1 Eq
	if(var_2162_bool == 0) goto Label_1270; // 0x4f2 JumpB
	var_2157_float = 0; // 0x4f3 MovI
	return 0; // 0x4f4 Return
	
Label_1270:
	var_2163_int = 1; // 0x4f6 PushI
	var_2164_int = var_2158_int + var_2163_int; // 0x4f7 Add
	var_2165_int = 2; // 0x4f8 PushI
	var_2166_bool = var_2164_int == var_2165_int; // 0x4f9 Eq
	if(var_2166_bool == 0) goto Label_1278; // 0x4fa JumpB
	var_2157_float = 0; // 0x4fb MovI
	return 0; // 0x4fc Return
	
Label_1278:
	var_2167_int = 1; // 0x4fe PushI
	var_2168_int = var_2158_int + var_2167_int; // 0x4ff Add
	var_2169_int = 3; // 0x500 PushI
	var_2170_bool = var_2168_int == var_2169_int; // 0x501 Eq
	if(var_2170_bool == 0) goto Label_1286; // 0x502 JumpB
	var_2157_float = 0; // 0x503 MovI
	return 0; // 0x504 Return
	
Label_1286:
	var_2171_int = 1; // 0x506 PushI
	var_2172_int = var_2158_int + var_2171_int; // 0x507 Add
	var_2173_int = 4; // 0x508 PushI
	var_2174_bool = var_2172_int == var_2173_int; // 0x509 Eq
	if(var_2174_bool == 0) goto Label_1294; // 0x50a JumpB
	var_2157_float = 0; // 0x50b MovI
	return 0; // 0x50c Return
	
Label_1294:
	var_2175_int = 1; // 0x50e PushI
	var_2176_int = var_2158_int + var_2175_int; // 0x50f Add
	var_2177_int = 5; // 0x510 PushI
	var_2178_bool = var_2176_int == var_2177_int; // 0x511 Eq
	if(var_2178_bool == 0) goto Label_1302; // 0x512 JumpB
	var_2157_float = 0; // 0x513 MovI
	return 0; // 0x514 Return
	
Label_1302:
	var_2179_int = 1; // 0x516 PushI
	var_2180_int = var_2158_int + var_2179_int; // 0x517 Add
	var_2181_int = 6; // 0x518 PushI
	var_2182_bool = var_2180_int == var_2181_int; // 0x519 Eq
	if(var_2182_bool == 0) goto Label_1310; // 0x51a JumpB
	var_2157_float = 2; // 0x51b MovI
	return 0; // 0x51c Return
	
Label_1310:
	var_2183_int = 1; // 0x51e PushI
	var_2184_int = var_2158_int + var_2183_int; // 0x51f Add
	var_2185_int = 7; // 0x520 PushI
	var_2186_bool = var_2184_int == var_2185_int; // 0x521 Eq
	if(var_2186_bool == 0) goto Label_1318; // 0x522 JumpB
	var_2157_float = 1; // 0x523 MovI
	return 0; // 0x524 Return
	
Label_1318:
	var_2187_int = 1; // 0x526 PushI
	var_2188_int = var_2158_int + var_2187_int; // 0x527 Add
	var_2189_int = 8; // 0x528 PushI
	var_2190_bool = var_2188_int == var_2189_int; // 0x529 Eq
	if(var_2190_bool == 0) goto Label_1326; // 0x52a JumpB
	var_2157_float = 1; // 0x52b MovI
	return 0; // 0x52c Return
	
Label_1326:
	var_2191_int = 1; // 0x52e PushI
	var_2192_int = var_2158_int + var_2191_int; // 0x52f Add
	var_2193_int = 9; // 0x530 PushI
	var_2194_bool = var_2192_int == var_2193_int; // 0x531 Eq
	if(var_2194_bool == 0) goto Label_1334; // 0x532 JumpB
	var_2157_float = 1; // 0x533 MovI
	return 0; // 0x534 Return
	
Label_1334:
	var_2195_int = 1; // 0x536 PushI
	var_2196_int = var_2158_int + var_2195_int; // 0x537 Add
	var_2197_int = 10; // 0x538 PushI
	var_2198_bool = var_2196_int == var_2197_int; // 0x539 Eq
	if(var_2198_bool == 0) goto Label_1342; // 0x53a JumpB
	var_2157_float = 1; // 0x53b MovI
	return 0; // 0x53c Return
	
Label_1342:
	var_2199_int = 1; // 0x53e PushI
	var_2200_int = var_2158_int + var_2199_int; // 0x53f Add
	var_2201_int = 11; // 0x540 PushI
	var_2202_bool = var_2200_int == var_2201_int; // 0x541 Eq
	if(var_2202_bool == 0) goto Label_1349; // 0x542 JumpB
	var_2157_float = 1; // 0x543 MovI
	return 0; // 0x544 Return
	
Label_1349:
	var_2157_float = 0; // 0x545 MovI
	return 0; // 0x546 Return
}


func_3310(var_2303_int, var_2304_int, var_2305_int)
{
	var_2306_int = 0; var_2307_int = 0; var_2308_int = 0; var_2309_int = 0; // 0xcee PushV
	var_2310_bool = 0; // 0xcef PushV
	var_2310_bool = 0; // 0xcf0 MovB
	var_2311_int = 8; // 0xcf1 PushI
	var_2312_bool = var_2305_int > var_2311_int; // 0xcf2 GT
	if(var_2312_bool == 0) goto Label_3320; // 0xcf3 JumpB
	var_2313_int = 21; // 0xcf4 PushI
	var_2314_bool = var_2305_int < var_2313_int; // 0xcf5 LT
	if(var_2314_bool == 0) goto Label_3320; // 0xcf6 JumpB
	var_2310_bool = 1; // 0xcf7 MovB
	
Label_3320:
	if(var_2310_bool == 0) goto Label_3375; // 0xcf8 JumpB
	var_2315_int = 0; var_2316_string = ""; var_2317_string = ""; var_2318_int = 0; // 0xcf9 PushV
	var_2315_int = var_2303_int; // 0xcfa Mov
	var_2316_string = "pers_vaxxabit"; // 0xcfb MovS
	var_2317_string = "vaxxabit_d.xml"; // 0xcfc MovS
	var_2318_int = 7; // 0xcfd MovI
	func_509(var_2315_int, var_2316_string, var_2317_string, var_2318_int); // 0xcfe NEW_2
	var_2319_int = 0; var_2320_string = ""; var_2321_string = ""; var_2322_int = 0; // 0xd00 PushV
	var_2319_int = var_2303_int; // 0xd01 Mov
	var_2320_string = "pers_vaxxabitka"; // 0xd02 MovS
	var_2321_string = "vaxxabitka_d.xml"; // 0xd03 MovS
	var_2322_int = 7; // 0xd04 MovI
	func_509(var_2319_int, var_2320_string, var_2321_string, var_2322_int); // 0xd05 NEW_2
	var_2323_int = 0; var_2324_string = ""; var_2325_string = ""; var_2326_int = 0; // 0xd07 PushV
	var_2323_int = var_2303_int; // 0xd08 Mov
	var_2324_string = "pers_rat_big"; // 0xd09 MovS
	var_2325_string = "rat_big.xml"; // 0xd0a MovS
	var_2326_int = 3; // 0xd0b MovI
	func_509(var_2323_int, var_2324_string, var_2325_string, var_2326_int); // 0xd0c NEW_2
	var_2327_int = 0; var_2328_string = ""; var_2329_string = ""; var_2330_int = 0; // 0xd0e PushV
	var_2327_int = var_2303_int; // 0xd0f Mov
	var_2328_string = "fog"; // 0xd10 MovS
	var_2329_string = "fog.xml"; // 0xd11 MovS
	var_2330_int = 7; // 0xd12 MovI
	func_535(var_2327_int, var_2328_string, var_2329_string, var_2330_int); // 0xd13 NEW_2
	var_2331_int = 5; // 0xd15 PushI
	var_2332_bool = var_2304_int >= var_2331_int; // 0xd16 GE
	if(var_2332_bool == 0) goto Label_3359; // 0xd17 JumpB
	var_2333_int = 0; var_2334_string = ""; var_2335_string = ""; var_2336_int = 0; // 0xd18 PushV
	var_2333_int = var_2303_int; // 0xd19 Mov
	var_2334_string = "fog"; // 0xd1a MovS
	var_2335_string = "fog_hunter.xml"; // 0xd1b MovS
	var_2336_int = 3; // 0xd1c MovI
	func_535(var_2333_int, var_2334_string, var_2335_string, var_2336_int); // 0xd1d NEW_2
	
Label_3359:
	var_2337_int = 2; // 0xd1f PushI
	var_2338_float = 0; var_2339_int = 0; // 0xd20 PushV
	var_2339_int = var_2304_int; // 0xd21 Mov
	func_1261(var_2338_float, var_2339_int); // 0xd22 NEW_2
	var_2308_int = var_2337_int * var_2338_float; // 0xd24 Mult2
	var_2340_int = var_2308_int; // 0xd25 Push
	if(var_2340_int == 0) goto Label_3374; // 0xd26 JumpB
	var_2341_int = 0; var_2342_string = ""; var_2343_string = ""; var_2344_int = 0; // 0xd27 PushV
	var_2341_int = var_2303_int; // 0xd28 Mov
	var_2342_string = "pers_bomber"; // 0xd29 MovS
	var_2343_string = "bomber.xml"; // 0xd2a MovS
	var_2344_int = var_2308_int; // 0xd2b Mov
	func_509(var_2341_int, var_2342_string, var_2343_string, var_2344_int); // 0xd2c NEW_2
	
Label_3374:
	goto Label_3428; // 0xd2e Jump
	
Label_3428:
	var_2345_bool = 0; var_2346_int = 0; // 0xd64 PushV
	var_2346_int = var_2304_int; // 0xd65 Mov
	func_1378(var_2345_bool, var_2346_int); // 0xd66 NEW_2
	if(var_2345_bool == 0) goto Label_3440; // 0xd68 JumpB
	var_2347_int = 0; var_2348_string = ""; var_2349_string = ""; var_2350_int = 0; // 0xd69 PushV
	var_2347_int = var_2303_int; // 0xd6a Mov
	var_2348_string = "pers_sanitar"; // 0xd6b MovS
	var_2349_string = "sanitar.xml"; // 0xd6c MovS
	var_2350_int = 2; // 0xd6d MovI
	func_509(var_2347_int, var_2348_string, var_2349_string, var_2350_int); // 0xd6e NEW_2
	
Label_3440:
	var_2351_int = 0; var_2352_string = ""; var_2353_string = ""; var_2354_int = 0; var_2355_int = 0; var_2356_int = 0; // 0xd70 PushV
	var_2351_int = var_2303_int; // 0xd71 Mov
	var_2352_string = "pers_worker"; // 0xd72 MovS
	var_2353_string = "agony1_man.xml"; // 0xd73 MovS
	var_2354_int = 2; // 0xd74 MovI
	var_2355_int = 4; // 0xd75 MovI
	var_2356_int = 4; // 0xd76 MovI
	func_522(var_2351_int, var_2352_string, var_2353_string, var_2354_int, var_2355_int, var_2356_int); // 0xd77 NEW_2
	var_2357_int = 0; var_2358_string = ""; var_2359_string = ""; var_2360_int = 0; var_2361_int = 0; var_2362_int = 0; // 0xd79 PushV
	var_2357_int = var_2303_int; // 0xd7a Mov
	var_2358_string = "pers_unosha"; // 0xd7b MovS
	var_2359_string = "agony1_man.xml"; // 0xd7c MovS
	var_2360_int = 2; // 0xd7d MovI
	var_2361_int = 4; // 0xd7e MovI
	var_2362_int = 4; // 0xd7f MovI
	func_522(var_2357_int, var_2358_string, var_2359_string, var_2360_int, var_2361_int, var_2362_int); // 0xd80 NEW_2
	var_2363_int = 0; var_2364_string = ""; var_2365_string = ""; var_2366_int = 0; var_2367_int = 0; var_2368_int = 0; // 0xd82 PushV
	var_2363_int = var_2303_int; // 0xd83 Mov
	var_2364_string = "pers_woman"; // 0xd84 MovS
	var_2365_string = "agony1_woman.xml"; // 0xd85 MovS
	var_2366_int = 2; // 0xd86 MovI
	var_2367_int = 4; // 0xd87 MovI
	var_2368_int = 4; // 0xd88 MovI
	func_522(var_2363_int, var_2364_string, var_2365_string, var_2366_int, var_2367_int, var_2368_int); // 0xd89 NEW_2
	var_2369_int = 0; var_2370_string = ""; var_2371_string = ""; var_2372_int = 0; var_2373_int = 0; var_2374_int = 0; // 0xd8b PushV
	var_2369_int = var_2303_int; // 0xd8c Mov
	var_2370_string = "pers_wasted_girl"; // 0xd8d MovS
	var_2371_string = "agony1_woman.xml"; // 0xd8e MovS
	var_2372_int = 2; // 0xd8f MovI
	var_2373_int = 4; // 0xd90 MovI
	var_2374_int = 4; // 0xd91 MovI
	func_522(var_2369_int, var_2370_string, var_2371_string, var_2372_int, var_2373_int, var_2374_int); // 0xd92 NEW_2
	return 4; // 0xd94 Return
	
Label_3375:
	var_2375_int = 0; var_2376_string = ""; var_2377_string = ""; var_2378_int = 0; // 0xd2f PushV
	var_2375_int = var_2303_int; // 0xd30 Mov
	var_2376_string = "pers_vaxxabit"; // 0xd31 MovS
	var_2377_string = "vaxxabit_d.xml"; // 0xd32 MovS
	var_2378_int = 5; // 0xd33 MovI
	func_509(var_2375_int, var_2376_string, var_2377_string, var_2378_int); // 0xd34 NEW_2
	var_2379_int = 0; var_2380_string = ""; var_2381_string = ""; var_2382_int = 0; // 0xd36 PushV
	var_2379_int = var_2303_int; // 0xd37 Mov
	var_2380_string = "pers_vaxxabitka"; // 0xd38 MovS
	var_2381_string = "vaxxabitka_d.xml"; // 0xd39 MovS
	var_2382_int = 5; // 0xd3a MovI
	func_509(var_2379_int, var_2380_string, var_2381_string, var_2382_int); // 0xd3b NEW_2
	var_2383_int = 0; var_2384_string = ""; var_2385_string = ""; var_2386_int = 0; // 0xd3d PushV
	var_2383_int = var_2303_int; // 0xd3e Mov
	var_2384_string = "pers_rat_big"; // 0xd3f MovS
	var_2385_string = "rat_big.xml"; // 0xd40 MovS
	var_2386_int = 4; // 0xd41 MovI
	func_509(var_2383_int, var_2384_string, var_2385_string, var_2386_int); // 0xd42 NEW_2
	var_2387_int = 0; var_2388_string = ""; var_2389_string = ""; var_2390_int = 0; // 0xd44 PushV
	var_2387_int = var_2303_int; // 0xd45 Mov
	var_2388_string = "fog"; // 0xd46 MovS
	var_2389_string = "fog.xml"; // 0xd47 MovS
	var_2390_int = 7; // 0xd48 MovI
	func_535(var_2387_int, var_2388_string, var_2389_string, var_2390_int); // 0xd49 NEW_2
	var_2391_int = 5; // 0xd4b PushI
	var_2392_bool = var_2304_int >= var_2391_int; // 0xd4c GE
	if(var_2392_bool == 0) goto Label_3413; // 0xd4d JumpB
	var_2393_int = 0; var_2394_string = ""; var_2395_string = ""; var_2396_int = 0; // 0xd4e PushV
	var_2393_int = var_2303_int; // 0xd4f Mov
	var_2394_string = "fog"; // 0xd50 MovS
	var_2395_string = "fog_hunter.xml"; // 0xd51 MovS
	var_2396_int = 3; // 0xd52 MovI
	func_535(var_2393_int, var_2394_string, var_2395_string, var_2396_int); // 0xd53 NEW_2
	
Label_3413:
	var_2397_int = 2; // 0xd55 PushI
	var_2398_float = 0; var_2399_int = 0; // 0xd56 PushV
	var_2399_int = var_2304_int; // 0xd57 Mov
	func_1261(var_2398_float, var_2399_int); // 0xd58 NEW_2
	var_2309_int = var_2397_int * var_2398_float; // 0xd5a Mult2
	var_2400_int = var_2309_int; // 0xd5b Push
	if(var_2400_int == 0) goto Label_3428; // 0xd5c JumpB
	var_2401_int = 0; var_2402_string = ""; var_2403_string = ""; var_2404_int = 0; // 0xd5d PushV
	var_2401_int = var_2303_int; // 0xd5e Mov
	var_2402_string = "pers_bomber"; // 0xd5f MovS
	var_2403_string = "bomber.xml"; // 0xd60 MovS
	var_2404_int = var_2309_int; // 0xd61 Mov
	func_509(var_2401_int, var_2402_string, var_2403_string, var_2404_int); // 0xd62 NEW_2
}


func_10484()
{
	var_6224_int = 0; var_6225_string = ""; // 0x28f5 PushV
	var_6225_string = "map_chertez_state"; // 0x28f6 MovS
	func_138(var_6224_int, var_6225_string); // 0x28f7 NEW_2
	var_6226_int = 6; // 0x28f9 PushI
	var_6227_bool = var_6224_int <= var_6226_int; // 0x28fa LE
	if(var_6227_bool == 0) goto Label_10500; // 0x28fb JumpB
	var_6228_string = "map_chertez_state"; // 0x28fc PushS
	var_6229_int = 6; // 0x28fd PushI
	SetVariable(var_6228_string, var_6229_int); // 0x28fe Func
	var_6230_string = "map_chertez_force"; // 0x2900 PushS
	var_6231_int = 1; // 0x2901 PushI
	SetVariable(var_6230_string, var_6231_int); // 0x2902 Func
	
Label_10500:
	return 0; // 0x2904 Return
}


func_245(var_672_bool, var_673_string, var_674_string)
{
	var_675_object = Obj(); var_676_object = Obj(); // 0xf5 PushV
	FindActor(var_676_object, var_673_string); // 0xf6 Func
	var_677_bool = var_676_object == 0; // 0xf8 NullEq
	if(var_677_bool == 0) goto Label_252; // 0xf9 JumpB
	var_672_bool = 0; // 0xfa MovB
	return 2; // 0xfb Return
	
Label_252:
	Trigger(var_676_object, var_674_string); // 0xfc Func
	var_672_bool = 1; // 0xfe MovB
	return 2; // 0xff Return
}


func_7419(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object)
{
	var_4278_int = 0; // 0x1cfc PushI
	var_4279_bool = var_4273_int == var_4278_int; // 0x1cfd Eq
	if(var_4279_bool == 0) goto Label_7459; // 0x1cfe JumpB
	var_4280_int = 0; var_4281_bool = 0; // 0x1cff PushV
	var_4280_int = 15; // 0x1d00 MovI
	var_4281_bool = 0; // 0x1d01 MovB
	func_802(var_4280_int, var_4281_bool); // 0x1d02 NEW_2
	var_4282_int = 0; var_4283_bool = 0; var_4284_int = 0; // 0x1d04 PushV
	var_4282_int = 15; // 0x1d05 MovI
	var_4283_bool = 0; // 0x1d06 MovB
	var_4284_int = 1; // 0x1d07 MovI
	func_819(var_4282_int, var_4283_bool, var_4284_int); // 0x1d08 NEW_2
	var_4285_int = 0; var_4286_int = 0; var_4287_object = Obj(); var_4288_object = Obj(); var_4289_object = Obj(); // 0x1d0a PushV
	var_4285_int = 15; // 0x1d0b MovI
	var_4286_int = var_4272_int; // 0x1d0c Mov
	var_4287_object = var_4274_object; // 0x1d0d Mov
	var_4288_object = var_4275_object; // 0x1d0e Mov
	var_4289_object = var_4276_object; // 0x1d0f Mov
	func_726(var_4285_int, var_4286_int, var_4287_object, var_4288_object, var_4289_object); // 0x1d10 NEW_2
	var_4290_object = Obj(); var_4291_int = 0; // 0x1d12 PushV
	var_4290_object = var_4277_object; // 0x1d13 Mov
	var_4291_int = 2; // 0x1d14 MovI
	func_311(var_4291_int); // 0x1d15 NEW_2
	var_4292_int = 0; var_4293_bool = 0; var_4294_int = 0; // 0x1d17 PushV
	var_4292_int = 15; // 0x1d18 MovI
	var_4293_bool = 0; // 0x1d19 MovB
	var_4294_int = 5; // 0x1d1a MovI
	func_876(var_4292_int, var_4293_bool, var_4294_int); // 0x1d1b NEW_2
	var_4295_int = 0; var_4296_bool = 0; var_4297_int = 0; // 0x1d1d PushV
	var_4295_int = 15; // 0x1d1e MovI
	var_4296_bool = 1; // 0x1d1f MovB
	var_4297_int = 5; // 0x1d20 MovI
	func_938(var_4295_int, var_4296_bool, var_4297_int); // 0x1d21 NEW_2
	
Label_7459:
	var_4298_int = 0; var_4299_bool = 0; // 0x1d23 PushV
	var_4298_int = 15; // 0x1d24 MovI
	var_4299_bool = 0; // 0x1d25 MovB
	func_785(var_4298_int, var_4299_bool); // 0x1d26 NEW_2
	var_4300_int = 0; var_4301_int = 0; var_4302_int = 0; // 0x1d28 PushV
	var_4300_int = 15; // 0x1d29 MovI
	var_4301_int = var_4272_int; // 0x1d2a Mov
	var_4302_int = var_4273_int; // 0x1d2b Mov
	func_3477(var_4300_int, var_4301_int, var_4302_int); // 0x1d2c NEW_2
	return 0; // 0x1d2e Return
}


func_11517()
{
	var_4623_string = ""; var_4624_bool = 0; // 0x2cfe PushV
	var_4623_string = "mnogogrannik@door1"; // 0x2cff MovS
	var_4624_bool = 1; // 0x2d00 MovB
	func_183(var_4623_string, var_4624_bool); // 0x2d01 NEW_2
	return 0; // 0x2d03 Return
}


func_257(var_4398_bool, var_4399_string, var_4400_string, var_4401_string)
{
	var_4402_object = Obj(); var_4403_object = Obj(); // 0x101 PushV
	FindActor(var_4403_object, var_4399_string); // 0x102 Func
	var_4404_bool = var_4403_object == 0; // 0x104 NullEq
	if(var_4404_bool == 0) goto Label_264; // 0x105 JumpB
	var_4398_bool = 0; // 0x106 MovB
	return 2; // 0x107 Return
	
Label_264:
	Trigger(var_4403_object, var_4400_string, var_4401_string); // 0x108 Func
	var_4398_bool = 1; // 0x10a MovB
	return 2; // 0x10b Return
}


func_11524()
{
	var_5132_object = Obj(); var_5133_object = Obj(); var_5134_object = Obj(); var_5135_object = Obj(); // 0x2d04 PushV
	var_5136_object = Obj(); // 0x2d05 PushV
	func_12247(var_5136_object); // 0x2d06 NEW_2
	var_5134_object = var_5136_object; // 0x2d07 Mov
	var_5137_string = "d9q01GotoViktor"; // 0x2d09 PushS
	FindMark(var_5135_object, var_5137_string); // 0x2d0a ObjFunc
	var_5138_object = var_5135_object; // 0x2d0c Push
	if(var_5138_object == 0) goto Label_11536; // 0x2d0d JumpB
	Remove(); // 0x2d0e ObjFunc
	
Label_11536:
	var_5139_string = "d9q02GotoJulia"; // 0x2d10 PushS
	FindMark(var_5135_object, var_5139_string); // 0x2d11 ObjFunc
	var_5140_object = var_5135_object; // 0x2d13 Push
	if(var_5140_object == 0) goto Label_11543; // 0x2d14 JumpB
	Remove(); // 0x2d15 ObjFunc
	
Label_11543:
	var_5141_string = "d9q03GotoLara"; // 0x2d17 PushS
	FindMark(var_5135_object, var_5141_string); // 0x2d18 ObjFunc
	var_5142_object = var_5135_object; // 0x2d1a Push
	if(var_5142_object == 0) goto Label_11550; // 0x2d1b JumpB
	Remove(); // 0x2d1c ObjFunc
	
Label_11550:
	var_5143_string = "d9q04GotoAnna"; // 0x2d1e PushS
	FindMark(var_5135_object, var_5143_string); // 0x2d1f ObjFunc
	var_5144_object = var_5135_object; // 0x2d21 Push
	if(var_5144_object == 0) goto Label_11557; // 0x2d22 JumpB
	Remove(); // 0x2d23 ObjFunc
	
Label_11557:
	var_5145_string = "d9q05AglajaGotoBurah"; // 0x2d25 PushS
	FindMark(var_5135_object, var_5145_string); // 0x2d26 ObjFunc
	var_5146_object = var_5135_object; // 0x2d28 Push
	if(var_5146_object == 0) goto Label_11564; // 0x2d29 JumpB
	Remove(); // 0x2d2a ObjFunc
	
Label_11564:
	var_5147_bool = 0; var_5148_int = 0; // 0x2d2c PushV
	var_5148_int = 182; // 0x2d2d MovI
	func_12222(var_5147_bool, var_5148_int); // 0x2d2e NEW_2
	var_5149_bool = 0; var_5150_int = 0; // 0x2d30 PushV
	var_5150_int = 655; // 0x2d31 MovI
	func_12222(var_5149_bool, var_5150_int); // 0x2d32 NEW_2
	var_5151_bool = 0; var_5152_int = 0; // 0x2d34 PushV
	var_5152_int = 659; // 0x2d35 MovI
	func_12222(var_5151_bool, var_5152_int); // 0x2d36 NEW_2
	var_5153_bool = 0; var_5154_int = 0; // 0x2d38 PushV
	var_5154_int = 662; // 0x2d39 MovI
	func_12222(var_5153_bool, var_5154_int); // 0x2d3a NEW_2
	var_5155_bool = 0; var_5156_int = 0; // 0x2d3c PushV
	var_5156_int = 764; // 0x2d3d MovI
	func_12222(var_5155_bool, var_5156_int); // 0x2d3e NEW_2
	return 4; // 0x2d40 Return
}


func_10501()
{
	var_4584_string = ""; var_4585_bool = 0; // 0x2906 PushV
	var_4584_string = "theater@door1"; // 0x2907 MovS
	var_4585_bool = 1; // 0x2908 MovB
	func_183(var_4584_string, var_4585_bool); // 0x2909 NEW_2
	return 0; // 0x290b Return
}


func_14600(var_4256_object, var_4258_cvector, var_4259_cvector)
{
	var_4260_object = Obj(); var_4261_object = Obj(); // 0x3908 PushV
	var_4262_string = "pers_morlok"; // 0x3909 PushS
	var_4263_string = "Danko_arena_manager.xml"; // 0x390a PushS
	AddStationaryActor(var_4261_object, var_4258_cvector, var_4259_cvector, var_4262_string, var_4263_string); // 0x390b ObjFunc
	var_4256_object = var_4261_object; // 0x390d Mov
	return 2; // 0x390e Return
}


func_10508()
{
	var_4759_string = ""; var_4760_bool = 0; // 0x290d PushV
	var_4759_string = "theater@door1"; // 0x290e MovS
	var_4760_bool = 0; // 0x290f MovB
	func_183(var_4759_string, var_4760_bool); // 0x2910 NEW_2
	return 0; // 0x2912 Return
}


func_269(var_599_object)
{
	var_600_int = 0; var_601_int = 0; var_602_object = Obj(); var_603_int = 0; var_604_int = 0; var_605_object = Obj(); // 0x10d PushV
	var_606_object = var_599_object; // 0x10e Push
	if(var_606_object == 0) goto Label_289; // 0x10f JumpB
	size(var_603_int); // 0x110 ObjFunc
	var_604_int = 0; // 0x112 MovI
	
Label_275:
	var_607_bool = var_604_int < var_603_int; // 0x113 LT
	if(var_607_bool == 0) goto Label_287; // 0x114 JumpB
	get(var_605_object, var_604_int); // 0x115 ObjFunc
	var_608_object = var_605_object; // 0x117 Push
	if(var_608_object == 0) goto Label_283; // 0x118 JumpB
	Remove(); // 0x119 ObjFunc
	
Label_283:
	var_605_object = 0; // 0x11b SetNull
	var_609_int = 1; // 0x11c PushI
	var_604_int = var_604_int + var_609_int; // 0x11d Add2
	goto Label_275; // 0x11e Jump
	
Label_287:
	clear(); // 0x11f ObjFunc
	
Label_289:
	return 6; // 0x121 Return
}


func_10515()
{
	func_12168(); // 0x2915 NEW_2
	return 0; // 0x2917 Return
}


func_10520(var_6241_object)
{
	var_6245_bool = 0; var_6246_object = Obj(); var_6247_float = 0; // 0x2919 PushV
	var_6246_object = var_6241_object; // 0x291a Mov
	var_6247_float = -0.3; // 0x291b MovF
	func_200(var_6245_bool, var_6246_object, var_6247_float); // 0x291c NEW_2
	return 0; // 0x291e Return
}


func_6425(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object)
{
	var_4003_int = 0; // 0x191a PushI
	var_4004_bool = var_3998_int == var_4003_int; // 0x191b Eq
	if(var_4004_bool == 0) goto Label_6465; // 0x191c JumpB
	var_4005_int = 0; var_4006_bool = 0; // 0x191d PushV
	var_4005_int = 10; // 0x191e MovI
	var_4006_bool = 0; // 0x191f MovB
	func_802(var_4005_int, var_4006_bool); // 0x1920 NEW_2
	var_4007_int = 0; var_4008_bool = 0; var_4009_int = 0; // 0x1922 PushV
	var_4007_int = 10; // 0x1923 MovI
	var_4008_bool = 0; // 0x1924 MovB
	var_4009_int = 1; // 0x1925 MovI
	func_819(var_4007_int, var_4008_bool, var_4009_int); // 0x1926 NEW_2
	var_4010_int = 0; var_4011_int = 0; var_4012_object = Obj(); var_4013_object = Obj(); var_4014_object = Obj(); // 0x1928 PushV
	var_4010_int = 10; // 0x1929 MovI
	var_4011_int = var_3997_int; // 0x192a Mov
	var_4012_object = var_3999_object; // 0x192b Mov
	var_4013_object = var_4000_object; // 0x192c Mov
	var_4014_object = var_4001_object; // 0x192d Mov
	func_726(var_4010_int, var_4011_int, var_4012_object, var_4013_object, var_4014_object); // 0x192e NEW_2
	var_4015_object = Obj(); var_4016_int = 0; // 0x1930 PushV
	var_4015_object = var_4002_object; // 0x1931 Mov
	var_4016_int = 2; // 0x1932 MovI
	func_311(var_4016_int); // 0x1933 NEW_2
	var_4017_int = 0; var_4018_bool = 0; var_4019_int = 0; // 0x1935 PushV
	var_4017_int = 10; // 0x1936 MovI
	var_4018_bool = 0; // 0x1937 MovB
	var_4019_int = 7; // 0x1938 MovI
	func_876(var_4017_int, var_4018_bool, var_4019_int); // 0x1939 NEW_2
	var_4020_int = 0; var_4021_bool = 0; var_4022_int = 0; // 0x193b PushV
	var_4020_int = 10; // 0x193c MovI
	var_4021_bool = 1; // 0x193d MovB
	var_4022_int = 7; // 0x193e MovI
	func_938(var_4020_int, var_4021_bool, var_4022_int); // 0x193f NEW_2
	
Label_6465:
	var_4023_int = 0; var_4024_bool = 0; // 0x1941 PushV
	var_4023_int = 10; // 0x1942 MovI
	var_4024_bool = 0; // 0x1943 MovB
	func_785(var_4023_int, var_4024_bool); // 0x1944 NEW_2
	var_4025_int = 0; var_4026_int = 0; var_4027_int = 0; // 0x1946 PushV
	var_4025_int = 10; // 0x1947 MovI
	var_4026_int = var_3997_int; // 0x1948 Mov
	var_4027_int = var_3998_int; // 0x1949 Mov
	func_3665(var_4025_int, var_4026_int, var_4027_int); // 0x194a NEW_2
	return 0; // 0x194c Return
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
	return 0; // 0x156d Return
}


func_10527()
{
	var_4617_string = ""; var_4618_bool = 0; // 0x2920 PushV
	var_4617_string = "termitnik@door1"; // 0x2921 MovS
	var_4618_bool = 1; // 0x2922 MovB
	func_183(var_4617_string, var_4618_bool); // 0x2923 NEW_2
	return 0; // 0x2925 Return
}


func_290(var_4560_float)
{
	var_4561_float = 0; var_4562_float = 0; // 0x122 PushV
	GetGameTime(var_4562_float); // 0x123 Func
	var_4560_float = var_4562_float; // 0x125 Mov
	return 2; // 0x126 Return
}


func_10534()
{
	var_5081_string = ""; var_5082_bool = 0; // 0x2927 PushV
	var_5081_string = "termitnik@door1"; // 0x2928 MovS
	var_5082_bool = 0; // 0x2929 MovB
	func_183(var_5081_string, var_5082_bool); // 0x292a NEW_2
	return 0; // 0x292c Return
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


func_4393(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object)
{
	var_524_int = 0; // 0x112a PushI
	var_525_bool = var_519_int == var_524_int; // 0x112b Eq
	if(var_525_bool == 0) goto Label_4433; // 0x112c JumpB
	var_526_int = 0; var_527_bool = 0; // 0x112d PushV
	var_526_int = 0; // 0x112e MovI
	var_527_bool = 0; // 0x112f MovB
	func_802(var_526_int, var_527_bool); // 0x1130 NEW_2
	var_528_int = 0; var_529_bool = 0; var_530_int = 0; // 0x1132 PushV
	var_528_int = 0; // 0x1133 MovI
	var_529_bool = 0; // 0x1134 MovB
	var_530_int = 1; // 0x1135 MovI
	func_819(var_528_int, var_529_bool, var_530_int); // 0x1136 NEW_2
	var_566_int = 0; var_567_int = 0; var_568_object = Obj(); var_569_object = Obj(); var_570_object = Obj(); // 0x1138 PushV
	var_566_int = 0; // 0x1139 MovI
	var_567_int = var_518_int; // 0x113a Mov
	var_568_object = var_520_object; // 0x113b Mov
	var_569_object = var_521_object; // 0x113c Mov
	var_570_object = var_522_object; // 0x113d Mov
	func_628(var_567_int, var_568_object, var_569_object, var_570_object); // 0x113e NEW_2
	var_612_object = Obj(); var_613_int = 0; // 0x1140 PushV
	var_612_object = var_523_object; // 0x1141 Mov
	var_613_int = 0; // 0x1142 MovI
	func_311(var_613_int); // 0x1143 NEW_2
	var_639_int = 0; var_640_bool = 0; var_641_int = 0; // 0x1145 PushV
	var_639_int = 0; // 0x1146 MovI
	var_640_bool = 0; // 0x1147 MovB
	var_641_int = 4; // 0x1148 MovI
	func_876(var_639_int, var_640_bool, var_641_int); // 0x1149 NEW_2
	var_686_int = 0; var_687_bool = 0; var_688_int = 0; // 0x114b PushV
	var_686_int = 0; // 0x114c MovI
	var_687_bool = 0; // 0x114d MovB
	var_688_int = 4; // 0x114e MovI
	func_938(var_686_int, var_687_bool, var_688_int); // 0x114f NEW_2
	
Label_4433:
	var_724_int = 0; var_725_int = 0; // 0x1151 PushV
	var_724_int = 0; // 0x1152 MovI
	var_725_int = var_519_int; // 0x1153 Mov
	func_1056(var_724_int, var_725_int); // 0x1154 NEW_2
	var_750_int = 0; var_751_int = 0; var_752_int = 0; // 0x1156 PushV
	var_750_int = 0; // 0x1157 MovI
	var_751_int = var_518_int; // 0x1158 Mov
	var_752_int = var_519_int; // 0x1159 Mov
	func_2212(var_750_int, var_751_int, var_752_int); // 0x115a NEW_2
	return 0; // 0x115c Return
}


func_300()
{
	var_113_int = 0; // 0x12c PushI
	var_114_int = 0; // 0x12d PushI
	SetSepia(var_113_int, var_114_int); // 0x12e Func
	return 0; // 0x130 Return
}


func_10541()
{
	var_5887_string = "resque_list"; // 0x292e PushS
	var_5888_int = 1; // 0x292f PushI
	SetVariable(var_5887_string, var_5888_int); // 0x2930 Func
	func_14211(); // 0x2933 NEW_2
	return 0; // 0x2935 Return
}


func_305(var_446_string, var_447_int)
{
	var_448_string = "Region"; // 0x132 PushS
	var_449_int = var_448_string + var_447_int; // 0x133 Add
	var_450_string = "State"; // 0x134 PushS
	var_446_string = var_449_int + var_450_string; // 0x135 Add2
	return 0; // 0x136 Return
}


func_8498()
{
	var_4465_int = 0; var_4466_object = Obj(); var_4467_int = 0; var_4468_object = Obj(); var_4469_bool = 0; var_4470_cvector = CVector(0,0,0); var_4471_cvector = CVector(0,0,0); var_4472_string = ""; var_4473_int = 0; var_4474_object = Obj(); var_4475_int = 0; var_4476_object = Obj(); var_4477_bool = 0; var_4478_cvector = CVector(0,0,0); var_4479_cvector = CVector(0,0,0); var_4480_string = ""; // 0x2132 PushV
	var_4481_int = 0; // 0x2133 PushV
	func_12264(var_4481_int); // 0x2134 NEW_2
	var_4482_int = 0; // 0x2136 PushI
	var_4483_bool = var_4481_int == var_4482_int; // 0x2137 Eq
	if(var_4483_bool == 0) goto Label_8506; // 0x2138 JumpB
	return 16; // 0x2139 Return
	
Label_8506:
	var_4484_object = GlobalVars[6]; // 0x213a PushGE
	size(var_4473_int); // 0x213b ObjFunc
	GetMainOutdoorScene(var_4474_object); // 0x213d Func
	var_4475_int = 0; // 0x213f MovI
	
Label_8512:
	var_4485_bool = var_4475_int < var_4473_int; // 0x2140 LT
	if(var_4485_bool == 0) goto Label_8571; // 0x2141 JumpB
	var_4486_object = GlobalVars[6]; // 0x2142 PushGE
	get(var_4476_object, var_4475_int); // 0x2143 ObjFunc
	var_4487_object = var_4476_object; // 0x2145 Push
	if(var_4487_object == 0) goto Label_8520; // 0x2146 JumpB
	goto Label_8568; // 0x2147 Jump
	
Label_8568:
	var_4488_int = 1; // 0x2178 PushI
	var_4475_int = var_4475_int + var_4488_int; // 0x2179 Add2
	goto Label_8512; // 0x217a Jump
	
Label_8520:
	var_4489_string = "pt_plant"; // 0x2148 PushS
	var_4490_int = 1; // 0x2149 PushI
	var_4491_int = var_4475_int + var_4490_int; // 0x214a Add
	var_4492_int = var_4489_string + var_4491_int; // 0x214b Add
	GetLocator(var_4492_int, var_4477_bool, var_4478_cvector, var_4479_cvector); // 0x214c ObjFunc
	var_4493_bool = var_4477_bool == 0; // 0x214e Not
	if(var_4493_bool == 0) goto Label_8532; // 0x214f JumpB
	var_4494_string = "Plant point not found"; // 0x2150 PushS
	Trace(var_4494_string); // 0x2151 Func
	goto Label_8568; // 0x2153 Jump
	
Label_8532:
	var_4495_int = 6; // 0x2154 PushI
	var_4496_int = 3; // 0x2155 PushI
	var_4497_int = 3; // 0x2156 PushI
	var_4498_int = 3; // 0x2157 PushI
	var_4499_int = 1; // 0x2158 PushI
	var_4500_int = 1; // 0x2159 PushI
	var_4501_string = ""; // 0x215a PushS
	var_4502_string = "grass_black_tvir"; // 0x215b PushS
	var_4503_string = "grass_blood_tvir"; // 0x215c PushS
	var_4504_string = "grass_brown_tvir"; // 0x215d PushS
	var_4505_string = "grass_savyur"; // 0x215e PushS
	var_4506_string = "grass_white_plet"; // 0x215f PushS
	RandOneOf(var_4480_string, var_4495_int, var_4496_int, var_4497_int, var_4498_int, var_4499_int, var_4500_int, var_4501_string, var_4502_string, var_4503_string, var_4504_string, var_4505_string, var_4506_string); // 0x2160 Func
	var_4507_string = var_4480_string; // 0x2162 Push
	if(var_4507_string == 0) goto Label_8567; // 0x2163 JumpB
	var_4508_string = "scripted"; // 0x2164 PushS
	var_4509_string = "item_"; // 0x2165 PushS
	var_4510_int = var_4509_string + var_4480_string; // 0x2166 Add
	var_4511_string = "_stat.xml"; // 0x2167 PushS
	var_4512_int = var_4510_int + var_4511_string; // 0x2168 Add
	AddStationaryActorByType(var_4476_object, var_4478_cvector, var_4479_cvector, var_4508_string, var_4512_int); // 0x2169 ObjFunc
	var_4513_object = GlobalVars[6]; // 0x216b PushGE
	set(var_4475_int, var_4476_object); // 0x216c ObjFunc
	var_4514_string = "New plant: ""; // 0x216e PushS
	var_4515_int = var_4514_string + var_4480_string; // 0x216f Add
	var_4516_string = "" at location #"; // 0x2170 PushS
	var_4517_int = var_4515_int + var_4516_string; // 0x2171 Add
	var_4518_int = 1; // 0x2172 PushI
	var_4519_int = var_4475_int + var_4518_int; // 0x2173 Add
	var_4520_int = var_4517_int + var_4519_int; // 0x2174 Add
	Trace(var_4520_int); // 0x2175 Func
	
Label_8567:
	var_4476_object = 0; // 0x2177 SetNull
	
Label_8571:
	return 16; // 0x217b Return
}


func_10550()
{
	var_5234_string = ""; var_5235_bool = 0; // 0x2937 PushV
	var_5234_string = "factory@door1"; // 0x2938 MovS
	var_5235_bool = 0; // 0x2939 MovB
	func_183(var_5234_string, var_5235_bool); // 0x293a NEW_2
	return 0; // 0x293c Return
}


func_311(var_613_int)
{
	var_614_int = 0; var_615_string = ""; var_616_int = 0; var_617_string = ""; var_618_string = ""; var_619_object = Obj(); var_620_int = 0; var_621_string = ""; var_622_int = 0; var_623_string = ""; var_624_string = ""; var_625_object = Obj(); // 0x137 PushV
	size(var_620_int); // 0x138 ObjFunc
	var_626_int = 1; // 0x13a PushI
	var_627_bool = var_613_int == var_626_int; // 0x13b Eq
	if(var_627_bool == 0) goto Label_319; // 0x13c JumpB
	var_621_string = "s_"; // 0x13d MovS
	goto Label_323; // 0x13e Jump
	
Label_323:
	var_622_int = 0; // 0x143 MovI
	
Label_324:
	var_628_bool = var_622_int < var_620_int; // 0x144 LT
	if(var_628_bool == 0) goto Label_348; // 0x145 JumpB
	get(var_623_string, var_622_int); // 0x146 ObjFunc
	var_629_int = var_621_string + var_623_string; // 0x148 Add
	var_630_string = ".isc"; // 0x149 PushS
	var_624_string = var_629_int + var_630_string; // 0x14a Add2
	GetSceneByName(var_625_object, var_623_string); // 0x14b Func
	var_631_bool = var_625_object == 0; // 0x14d Not
	if(var_631_bool == 0) goto Label_342; // 0x14e JumpB
	var_632_string = "City manager: can't replace indoor scene ""; // 0x14f PushS
	var_633_int = var_632_string + var_623_string; // 0x150 Add
	var_634_string = "" because it doesn't exist"; // 0x151 PushS
	var_635_int = var_633_int + var_634_string; // 0x152 Add
	Trace(var_635_int); // 0x153 Func
	goto Label_344; // 0x155 Jump
	
Label_344:
	var_625_object = 0; // 0x158 SetNull
	var_636_int = 1; // 0x159 PushI
	var_622_int = var_622_int + var_636_int; // 0x15a Add2
	goto Label_324; // 0x15b Jump
	
Label_342:
	ReplaceScene(var_625_object, var_624_string); // 0x156 Func
	
Label_348:
	return 12; // 0x15c Return
	
Label_319:
	var_637_int = 2; // 0x13f PushI
	var_638_bool = var_613_int == var_637_int; // 0x140 Eq
	if(var_638_bool == 0) goto Label_323; // 0x141 JumpB
	var_621_string = "n_"; // 0x142 MovS
}


func_10557()
{
	var_4570_string = ""; var_4571_bool = 0; // 0x293e PushV
	var_4570_string = "icot_eva@door1"; // 0x293f MovS
	var_4571_bool = 1; // 0x2940 MovB
	func_183(var_4570_string, var_4571_bool); // 0x2941 NEW_2
	return 0; // 0x2943 Return
}


func_11587()
{
	var_5168_object = Obj(); var_5169_object = Obj(); var_5170_object = Obj(); var_5171_object = Obj(); // 0x2d43 PushV
	var_5172_object = Obj(); // 0x2d44 PushV
	func_12247(var_5172_object); // 0x2d45 NEW_2
	var_5170_object = var_5172_object; // 0x2d46 Mov
	var_5173_string = "d10q01AglajaGotoPetr"; // 0x2d48 PushS
	FindMark(var_5171_object, var_5173_string); // 0x2d49 ObjFunc
	var_5174_object = var_5171_object; // 0x2d4b Push
	if(var_5174_object == 0) goto Label_11599; // 0x2d4c JumpB
	Remove(); // 0x2d4d ObjFunc
	
Label_11599:
	var_5175_string = "d10q02KaterinaGotoRubin"; // 0x2d4f PushS
	FindMark(var_5171_object, var_5175_string); // 0x2d50 ObjFunc
	var_5176_object = var_5171_object; // 0x2d52 Push
	if(var_5176_object == 0) goto Label_11606; // 0x2d53 JumpB
	Remove(); // 0x2d54 ObjFunc
	
Label_11606:
	var_5177_string = "d10q02RubinGotoMaria"; // 0x2d56 PushS
	FindMark(var_5171_object, var_5177_string); // 0x2d57 ObjFunc
	var_5178_object = var_5171_object; // 0x2d59 Push
	if(var_5178_object == 0) goto Label_11613; // 0x2d5a JumpB
	Remove(); // 0x2d5b ObjFunc
	
Label_11613:
	var_5179_string = "d10q02GeorgGotoAglaja"; // 0x2d5d PushS
	FindMark(var_5171_object, var_5179_string); // 0x2d5e ObjFunc
	var_5180_object = var_5171_object; // 0x2d60 Push
	if(var_5180_object == 0) goto Label_11620; // 0x2d61 JumpB
	Remove(); // 0x2d62 ObjFunc
	
Label_11620:
	var_5181_string = "d10q03GotoMark"; // 0x2d64 PushS
	FindMark(var_5171_object, var_5181_string); // 0x2d65 ObjFunc
	var_5182_object = var_5171_object; // 0x2d67 Push
	if(var_5182_object == 0) goto Label_11627; // 0x2d68 JumpB
	Remove(); // 0x2d69 ObjFunc
	
Label_11627:
	var_5183_string = "d10q03MarkGotoBlock"; // 0x2d6b PushS
	FindMark(var_5171_object, var_5183_string); // 0x2d6c ObjFunc
	var_5184_object = var_5171_object; // 0x2d6e Push
	if(var_5184_object == 0) goto Label_11634; // 0x2d6f JumpB
	Remove(); // 0x2d70 ObjFunc
	
Label_11634:
	var_5185_bool = 0; var_5186_int = 0; // 0x2d72 PushV
	var_5186_int = 186; // 0x2d73 MovI
	func_12222(var_5185_bool, var_5186_int); // 0x2d74 NEW_2
	var_5187_bool = 0; var_5188_int = 0; // 0x2d76 PushV
	var_5188_int = 666; // 0x2d77 MovI
	func_12222(var_5187_bool, var_5188_int); // 0x2d78 NEW_2
	var_5189_bool = 0; var_5190_int = 0; // 0x2d7a PushV
	var_5190_int = 672; // 0x2d7b MovI
	func_12222(var_5189_bool, var_5190_int); // 0x2d7c NEW_2
	return 4; // 0x2d7e Return
}


func_10564()
{
	var_4555_object = Obj(); var_4556_object = Obj(); var_4557_object = Obj(); var_4558_object = Obj(); // 0x2944 PushV
	var_4559_object = Obj(); // 0x2945 PushV
	func_12247(var_4559_object); // 0x2946 NEW_2
	var_4557_object = var_4559_object; // 0x2947 Mov
	var_4566_string = "d1EvaGotoMaria"; // 0x2949 PushS
	FindMark(var_4558_object, var_4566_string); // 0x294a ObjFunc
	var_4567_object = var_4558_object; // 0x294c Push
	if(var_4567_object == 0) goto Label_10576; // 0x294d JumpB
	Remove(); // 0x294e ObjFunc
	
Label_10576:
	var_4568_string = "d1EvaInfo"; // 0x2950 PushS
	FindMark(var_4558_object, var_4568_string); // 0x2951 ObjFunc
	var_4569_object = var_4558_object; // 0x2953 Push
	if(var_4569_object == 0) goto Label_10583; // 0x2954 JumpB
	Remove(); // 0x2955 ObjFunc
	
Label_10583:
	var_4570_string = "d1GeorgInfo"; // 0x2957 PushS
	FindMark(var_4558_object, var_4570_string); // 0x2958 ObjFunc
	var_4571_object = var_4558_object; // 0x295a Push
	if(var_4571_object == 0) goto Label_10590; // 0x295b JumpB
	Remove(); // 0x295c ObjFunc
	
Label_10590:
	var_4572_string = "d1JuliaMapMarkEva"; // 0x295e PushS
	FindMark(var_4558_object, var_4572_string); // 0x295f ObjFunc
	var_4573_object = var_4558_object; // 0x2961 Push
	if(var_4573_object == 0) goto Label_10597; // 0x2962 JumpB
	Remove(); // 0x2963 ObjFunc
	
Label_10597:
	var_4574_string = "d1JuliaMapMarkLara"; // 0x2965 PushS
	FindMark(var_4558_object, var_4574_string); // 0x2966 ObjFunc
	var_4575_object = var_4558_object; // 0x2968 Push
	if(var_4575_object == 0) goto Label_10604; // 0x2969 JumpB
	Remove(); // 0x296a ObjFunc
	
Label_10604:
	var_4576_string = "d1KaterinaMapMark"; // 0x296c PushS
	FindMark(var_4558_object, var_4576_string); // 0x296d ObjFunc
	var_4577_object = var_4558_object; // 0x296f Push
	if(var_4577_object == 0) goto Label_10611; // 0x2970 JumpB
	Remove(); // 0x2971 ObjFunc
	
Label_10611:
	var_4578_string = "d1q01AlexandrGotoJulia"; // 0x2973 PushS
	FindMark(var_4558_object, var_4578_string); // 0x2974 ObjFunc
	var_4579_object = var_4558_object; // 0x2976 Push
	if(var_4579_object == 0) goto Label_10618; // 0x2977 JumpB
	Remove(); // 0x2978 ObjFunc
	
Label_10618:
	var_4580_string = "d1q01AnnaMapMarkMladVlad"; // 0x297a PushS
	FindMark(var_4558_object, var_4580_string); // 0x297b ObjFunc
	var_4581_object = var_4558_object; // 0x297d Push
	if(var_4581_object == 0) goto Label_10625; // 0x297e JumpB
	Remove(); // 0x297f ObjFunc
	
Label_10625:
	var_4582_string = "d1q01EvaGotoSimon"; // 0x2981 PushS
	FindMark(var_4558_object, var_4582_string); // 0x2982 ObjFunc
	var_4583_object = var_4558_object; // 0x2984 Push
	if(var_4583_object == 0) goto Label_10632; // 0x2985 JumpB
	Remove(); // 0x2986 ObjFunc
	
Label_10632:
	var_4584_string = "d1q01EvaMapMarkMladVlad"; // 0x2988 PushS
	FindMark(var_4558_object, var_4584_string); // 0x2989 ObjFunc
	var_4585_object = var_4558_object; // 0x298b Push
	if(var_4585_object == 0) goto Label_10639; // 0x298c JumpB
	Remove(); // 0x298d ObjFunc
	
Label_10639:
	var_4586_string = "d1q01GeorgGotoViktor"; // 0x298f PushS
	FindMark(var_4558_object, var_4586_string); // 0x2990 ObjFunc
	var_4587_object = var_4558_object; // 0x2992 Push
	if(var_4587_object == 0) goto Label_10646; // 0x2993 JumpB
	Remove(); // 0x2994 ObjFunc
	
Label_10646:
	var_4588_string = "d1q01JuliaGotoBigVlad"; // 0x2996 PushS
	FindMark(var_4558_object, var_4588_string); // 0x2997 ObjFunc
	var_4589_object = var_4558_object; // 0x2999 Push
	if(var_4589_object == 0) goto Label_10653; // 0x299a JumpB
	Remove(); // 0x299b ObjFunc
	
Label_10653:
	var_4590_string = "d1q01LaraMarkMladVlad"; // 0x299d PushS
	FindMark(var_4558_object, var_4590_string); // 0x299e ObjFunc
	var_4591_object = var_4558_object; // 0x29a0 Push
	if(var_4591_object == 0) goto Label_10660; // 0x29a1 JumpB
	Remove(); // 0x29a2 ObjFunc
	
Label_10660:
	var_4592_string = "d1q01PatrolGotoAlexandr"; // 0x29a4 PushS
	FindMark(var_4558_object, var_4592_string); // 0x29a5 ObjFunc
	var_4593_object = var_4558_object; // 0x29a7 Push
	if(var_4593_object == 0) goto Label_10667; // 0x29a8 JumpB
	Remove(); // 0x29a9 ObjFunc
	
Label_10667:
	var_4594_string = "d1q01ViktorGotoIsidor"; // 0x29ab PushS
	FindMark(var_4558_object, var_4594_string); // 0x29ac ObjFunc
	var_4595_object = var_4558_object; // 0x29ae Push
	if(var_4595_object == 0) goto Label_10674; // 0x29af JumpB
	Remove(); // 0x29b0 ObjFunc
	
Label_10674:
	var_4596_string = "d1q02AnnaGotoLaska"; // 0x29b2 PushS
	FindMark(var_4558_object, var_4596_string); // 0x29b3 ObjFunc
	var_4597_object = var_4558_object; // 0x29b5 Push
	if(var_4597_object == 0) goto Label_10681; // 0x29b6 JumpB
	Remove(); // 0x29b7 ObjFunc
	
Label_10681:
	var_4598_string = "d1q02JuliaGotoAnna"; // 0x29b9 PushS
	FindMark(var_4558_object, var_4598_string); // 0x29ba ObjFunc
	var_4599_object = var_4558_object; // 0x29bc Push
	if(var_4599_object == 0) goto Label_10688; // 0x29bd JumpB
	Remove(); // 0x29be ObjFunc
	
Label_10688:
	var_4600_string = "d1q03KapellaGotoOspina"; // 0x29c0 PushS
	FindMark(var_4558_object, var_4600_string); // 0x29c1 ObjFunc
	var_4601_object = var_4558_object; // 0x29c3 Push
	if(var_4601_object == 0) goto Label_10695; // 0x29c4 JumpB
	Remove(); // 0x29c5 ObjFunc
	
Label_10695:
	var_4602_string = "d1q03MladVladGotoOspina"; // 0x29c7 PushS
	FindMark(var_4558_object, var_4602_string); // 0x29c8 ObjFunc
	var_4603_object = var_4558_object; // 0x29ca Push
	if(var_4603_object == 0) goto Label_10702; // 0x29cb JumpB
	Remove(); // 0x29cc ObjFunc
	
Label_10702:
	var_4604_bool = 0; var_4605_int = 0; // 0x29ce PushV
	var_4605_int = 2; // 0x29cf MovI
	func_12222(var_4604_bool, var_4605_int); // 0x29d0 NEW_2
	var_4616_bool = 0; var_4617_int = 0; // 0x29d2 PushV
	var_4617_int = 7; // 0x29d3 MovI
	func_12222(var_4616_bool, var_4617_int); // 0x29d4 NEW_2
	var_4618_bool = 0; var_4619_int = 0; // 0x29d6 PushV
	var_4619_int = 37; // 0x29d7 MovI
	func_12222(var_4618_bool, var_4619_int); // 0x29d8 NEW_2
	var_4620_bool = 0; var_4621_int = 0; // 0x29da PushV
	var_4621_int = 43; // 0x29db MovI
	func_12222(var_4620_bool, var_4621_int); // 0x29dc NEW_2
	var_4622_string = "Day1 cleanup"; // 0x29de PushS
	Trace(var_4622_string); // 0x29df Func
	return 4; // 0x29e1 Return
}


func_1351(var_1128_bool, var_1129_int, var_1130_int)
{
	var_1128_bool = 0; // 0x548 MovB
	var_1131_int = 10; // 0x549 PushI
	var_1132_bool = var_1129_int >= var_1131_int; // 0x54a GE
	if(var_1132_bool == 0) goto Label_1360; // 0x54b JumpB
	var_1133_int = 6; // 0x54c PushI
	var_1134_bool = var_1130_int < var_1133_int; // 0x54d LT
	if(var_1134_bool == 0) goto Label_1360; // 0x54e JumpB
	var_1128_bool = 1; // 0x54f MovB
	
Label_1360:
	return 0; // 0x550 Return
}


func_6477()
{
	var_246_string = "r5_house2_01"; // 0x194e PushS
	add(var_246_string); // 0x194f ObjFunc
	var_247_string = "r5_house2_02"; // 0x1951 PushS
	add(var_247_string); // 0x1952 ObjFunc
	var_248_string = "r5_house2_03"; // 0x1954 PushS
	add(var_248_string); // 0x1955 ObjFunc
	var_249_string = "r5_house3_01_i2"; // 0x1957 PushS
	add(var_249_string); // 0x1958 ObjFunc
	var_250_string = "r5_house3_01"; // 0x195a PushS
	add(var_250_string); // 0x195b ObjFunc
	var_251_string = "r5_house3_02_i2"; // 0x195d PushS
	add(var_251_string); // 0x195e ObjFunc
	var_252_string = "r5_house3_02"; // 0x1960 PushS
	add(var_252_string); // 0x1961 ObjFunc
	var_253_string = "r5_house3_03_i2"; // 0x1963 PushS
	add(var_253_string); // 0x1964 ObjFunc
	var_254_string = "r5_house3_03"; // 0x1966 PushS
	add(var_254_string); // 0x1967 ObjFunc
	var_255_string = "r5_house3_04_i2"; // 0x1969 PushS
	add(var_255_string); // 0x196a ObjFunc
	var_256_string = "r5_house3_04"; // 0x196c PushS
	add(var_256_string); // 0x196d ObjFunc
	var_257_string = "r5_house3_05_i2"; // 0x196f PushS
	add(var_257_string); // 0x1970 ObjFunc
	var_258_string = "r5_house3_05"; // 0x1972 PushS
	add(var_258_string); // 0x1973 ObjFunc
	var_259_string = "r5_house3_06_i2"; // 0x1975 PushS
	add(var_259_string); // 0x1976 ObjFunc
	var_260_string = "r5_house3_06"; // 0x1978 PushS
	add(var_260_string); // 0x1979 ObjFunc
	var_261_string = "r5_house3_07_i2"; // 0x197b PushS
	add(var_261_string); // 0x197c ObjFunc
	var_262_string = "r5_house3_07"; // 0x197e PushS
	add(var_262_string); // 0x197f ObjFunc
	var_263_string = "r5_House6_01"; // 0x1981 PushS
	add(var_263_string); // 0x1982 ObjFunc
	return 0; // 0x1984 Return
}


func_1361(var_1139_bool, var_1140_int, var_1141_int)
{
	var_1139_bool = 0; // 0x552 MovB
	var_1142_int = 3; // 0x553 PushI
	var_1143_bool = var_1140_int >= var_1142_int; // 0x554 GE
	if(var_1143_bool == 0) goto Label_1377; // 0x555 JumpB
	var_1144_bool = 0; // 0x556 PushV
	var_1144_bool = 1; // 0x557 MovB
	var_1145_int = 22; // 0x558 PushI
	var_1146_bool = var_1141_int > var_1145_int; // 0x559 GT
	if(var_1146_bool == 0) goto Label_1375; // 0x55a JumpB
	var_1147_int = 5; // 0x55b PushI
	var_1148_bool = var_1141_int < var_1147_int; // 0x55c LT
	if(var_1148_bool == 0) goto Label_1375; // 0x55d JumpB
	var_1144_bool = 0; // 0x55e MovB
	
Label_1375:
	if(var_1144_bool == 0) goto Label_1377; // 0x55f JumpB
	var_1139_bool = 1; // 0x560 MovB
	
Label_1377:
	return 0; // 0x561 Return
}


func_2389(var_914_int, var_915_int, var_916_int)
{
	var_917_int = 0; var_918_int = 0; // 0x955 PushV
	var_919_int = 1; // 0x956 PushI
	var_920_int = var_915_int + var_919_int; // 0x957 Add
	var_921_int = 12; // 0x958 PushI
	var_922_bool = var_920_int == var_921_int; // 0x959 Eq
	if(var_922_bool == 0) goto Label_2396; // 0x95a JumpB
	return 2; // 0x95b Return
	
Label_2396:
	var_923_bool = 0; // 0x95c PushV
	var_923_bool = 0; // 0x95d MovB
	var_924_bool = 0; // 0x95e PushV
	var_924_bool = 1; // 0x95f MovB
	var_925_int = 7; // 0x960 PushI
	var_926_bool = var_916_int < var_925_int; // 0x961 LT
	if(var_926_bool == 0) goto Label_2407; // 0x962 JumpB
	var_927_int = 21; // 0x963 PushI
	var_928_bool = var_916_int > var_927_int; // 0x964 GT
	if(var_928_bool == 0) goto Label_2407; // 0x965 JumpB
	var_924_bool = 0; // 0x966 MovB
	
Label_2407:
	if(var_924_bool == 0) goto Label_2412; // 0x967 JumpB
	var_929_int = 0; // 0x968 PushI
	var_930_bool = var_915_int != var_929_int; // 0x969 Neq
	if(var_930_bool == 0) goto Label_2412; // 0x96a JumpB
	var_923_bool = 1; // 0x96b MovB
	
Label_2412:
	if(var_923_bool == 0) goto Label_2428; // 0x96c JumpB
	var_931_int = 1; // 0x96d PushI
	var_932_float = 0; var_933_int = 0; // 0x96e PushV
	var_933_int = var_915_int; // 0x96f Mov
	func_1147(var_932_float, var_933_int); // 0x970 NEW_2
	var_918_int = var_931_int * var_932_float; // 0x972 Mult2
	var_934_int = var_918_int; // 0x973 Push
	if(var_934_int == 0) goto Label_2428; // 0x974 JumpB
	var_935_int = 0; var_936_string = ""; var_937_string = ""; var_938_int = 0; // 0x975 PushV
	var_935_int = var_914_int; // 0x976 Mov
	var_936_string = "pers_grabitel"; // 0x977 MovS
	var_937_string = "grabitel.xml"; // 0x978 MovS
	var_938_int = var_918_int; // 0x979 Mov
	func_509(var_935_int, var_936_string, var_937_string, var_938_int); // 0x97a NEW_2
	
Label_2428:
	var_939_bool = 0; var_940_int = 0; var_941_int = 0; // 0x97c PushV
	var_940_int = var_915_int; // 0x97d Mov
	var_941_int = var_916_int; // 0x97e Mov
	func_1116(var_939_bool, var_940_int, var_941_int); // 0x97f NEW_2
	if(var_939_bool == 0) goto Label_2477; // 0x981 JumpB
	var_942_int = 0; var_943_string = ""; var_944_string = ""; var_945_int = 0; // 0x982 PushV
	var_942_int = var_914_int; // 0x983 Mov
	var_943_string = "pers_unosha"; // 0x984 MovS
	var_944_string = "unosha_attacker.xml"; // 0x985 MovS
	var_945_int = 1; // 0x986 MovI
	func_509(var_942_int, var_943_string, var_944_string, var_945_int); // 0x987 NEW_2
	var_946_int = 0; var_947_string = ""; var_948_string = ""; var_949_int = 0; // 0x989 PushV
	var_946_int = var_914_int; // 0x98a Mov
	var_947_string = "pers_unosha"; // 0x98b MovS
	var_948_string = "unosha2_attacker.xml"; // 0x98c MovS
	var_949_int = 1; // 0x98d MovI
	func_509(var_946_int, var_947_string, var_948_string, var_949_int); // 0x98e NEW_2
	var_950_int = 0; var_951_string = ""; var_952_string = ""; var_953_int = 0; // 0x990 PushV
	var_950_int = var_914_int; // 0x991 Mov
	var_951_string = "pers_worker"; // 0x992 MovS
	var_952_string = "worker_attacker.xml"; // 0x993 MovS
	var_953_int = 1; // 0x994 MovI
	func_509(var_950_int, var_951_string, var_952_string, var_953_int); // 0x995 NEW_2
	var_954_int = 0; var_955_string = ""; var_956_string = ""; var_957_int = 0; // 0x997 PushV
	var_954_int = var_914_int; // 0x998 Mov
	var_955_string = "pers_worker"; // 0x999 MovS
	var_956_string = "worker2_attacker.xml"; // 0x99a MovS
	var_957_int = 1; // 0x99b MovI
	func_509(var_954_int, var_955_string, var_956_string, var_957_int); // 0x99c NEW_2
	var_958_int = 0; var_959_string = ""; var_960_string = ""; var_961_int = 0; // 0x99e PushV
	var_958_int = var_914_int; // 0x99f Mov
	var_959_string = "pers_alkash"; // 0x9a0 MovS
	var_960_string = "alkash.xml"; // 0x9a1 MovS
	var_961_int = 1; // 0x9a2 MovI
	func_509(var_958_int, var_959_string, var_960_string, var_961_int); // 0x9a3 NEW_2
	var_962_int = 0; var_963_string = ""; var_964_string = ""; var_965_int = 0; // 0x9a5 PushV
	var_962_int = var_914_int; // 0x9a6 Mov
	var_963_string = "pers_woman"; // 0x9a7 MovS
	var_964_string = "woman.xml"; // 0x9a8 MovS
	var_965_int = 2; // 0x9a9 MovI
	func_509(var_962_int, var_963_string, var_964_string, var_965_int); // 0x9aa NEW_2
	goto Label_2565; // 0x9ac Jump
	
Label_2565:
	var_966_bool = 0; // 0xa05 PushV
	var_966_bool = 0; // 0xa06 MovB
	var_967_bool = 0; // 0xa07 PushV
	var_967_bool = 0; // 0xa08 MovB
	var_968_int = 0; // 0xa09 PushI
	var_969_bool = var_915_int == var_968_int; // 0xa0a Eq
	if(var_969_bool == 0) goto Label_2576; // 0xa0b JumpB
	var_970_int = 12; // 0xa0c PushI
	var_971_bool = var_916_int > var_970_int; // 0xa0d GT
	if(var_971_bool == 0) goto Label_2576; // 0xa0e JumpB
	var_967_bool = 1; // 0xa0f MovB
	
Label_2576:
	if(var_967_bool == 0) goto Label_2581; // 0xa10 JumpB
	var_972_int = 22; // 0xa11 PushI
	var_973_bool = var_916_int < var_972_int; // 0xa12 LT
	if(var_973_bool == 0) goto Label_2581; // 0xa13 JumpB
	var_966_bool = 1; // 0xa14 MovB
	
Label_2581:
	if(var_966_bool == 0) goto Label_2589; // 0xa15 JumpB
	var_974_int = 0; var_975_string = ""; var_976_string = ""; var_977_int = 0; // 0xa16 PushV
	var_974_int = var_914_int; // 0xa17 Mov
	var_975_string = "pers_woman"; // 0xa18 MovS
	var_976_string = "woman_killme.xml"; // 0xa19 MovS
	var_977_int = 1; // 0xa1a MovI
	func_509(var_974_int, var_975_string, var_976_string, var_977_int); // 0xa1b NEW_2
	
Label_2589:
	return 2; // 0xa1d Return
	
Label_2477:
	var_978_bool = 0; // 0x9ad PushV
	var_978_bool = 0; // 0x9ae MovB
	var_979_int = 8; // 0x9af PushI
	var_980_bool = var_916_int > var_979_int; // 0x9b0 GT
	if(var_980_bool == 0) goto Label_2486; // 0x9b1 JumpB
	var_981_int = 21; // 0x9b2 PushI
	var_982_bool = var_916_int < var_981_int; // 0x9b3 LT
	if(var_982_bool == 0) goto Label_2486; // 0x9b4 JumpB
	var_978_bool = 1; // 0x9b5 MovB
	
Label_2486:
	if(var_978_bool == 0) goto Label_2530; // 0x9b6 JumpB
	var_983_int = 0; var_984_string = ""; var_985_string = ""; var_986_int = 0; // 0x9b7 PushV
	var_983_int = var_914_int; // 0x9b8 Mov
	var_984_string = "pers_worker"; // 0x9b9 MovS
	var_985_string = "worker.xml"; // 0x9ba MovS
	var_986_int = 2; // 0x9bb MovI
	func_509(var_983_int, var_984_string, var_985_string, var_986_int); // 0x9bc NEW_2
	var_987_int = 0; var_988_string = ""; var_989_string = ""; var_990_int = 0; // 0x9be PushV
	var_987_int = var_914_int; // 0x9bf Mov
	var_988_string = "pers_worker"; // 0x9c0 MovS
	var_989_string = "worker2.xml"; // 0x9c1 MovS
	var_990_int = 2; // 0x9c2 MovI
	func_509(var_987_int, var_988_string, var_989_string, var_990_int); // 0x9c3 NEW_2
	var_991_int = 0; var_992_string = ""; var_993_string = ""; var_994_int = 0; // 0x9c5 PushV
	var_991_int = var_914_int; // 0x9c6 Mov
	var_992_string = "pers_alkash"; // 0x9c7 MovS
	var_993_string = "alkash.xml"; // 0x9c8 MovS
	var_994_int = 1; // 0x9c9 MovI
	func_509(var_991_int, var_992_string, var_993_string, var_994_int); // 0x9ca NEW_2
	var_995_int = 0; var_996_string = ""; var_997_string = ""; var_998_int = 0; // 0x9cc PushV
	var_995_int = var_914_int; // 0x9cd Mov
	var_996_string = "pers_woman"; // 0x9ce MovS
	var_997_string = "woman.xml"; // 0x9cf MovS
	var_998_int = 2; // 0x9d0 MovI
	func_509(var_995_int, var_996_string, var_997_string, var_998_int); // 0x9d1 NEW_2
	var_999_int = 0; var_1000_string = ""; var_1001_string = ""; var_1002_int = 0; // 0x9d3 PushV
	var_999_int = var_914_int; // 0x9d4 Mov
	var_1000_string = "pers_unosha"; // 0x9d5 MovS
	var_1001_string = "unosha.xml"; // 0x9d6 MovS
	var_1002_int = 1; // 0x9d7 MovI
	func_509(var_999_int, var_1000_string, var_1001_string, var_1002_int); // 0x9d8 NEW_2
	var_1003_int = 0; var_1004_string = ""; var_1005_string = ""; var_1006_int = 0; // 0x9da PushV
	var_1003_int = var_914_int; // 0x9db Mov
	var_1004_string = "pers_unosha"; // 0x9dc MovS
	var_1005_string = "unosha2.xml"; // 0x9dd MovS
	var_1006_int = 1; // 0x9de MovI
	func_509(var_1003_int, var_1004_string, var_1005_string, var_1006_int); // 0x9df NEW_2
	goto Label_2565; // 0x9e1 Jump
	
Label_2530:
	var_1007_int = 0; var_1008_string = ""; var_1009_string = ""; var_1010_int = 0; // 0x9e2 PushV
	var_1007_int = var_914_int; // 0x9e3 Mov
	var_1008_string = "pers_alkash"; // 0x9e4 MovS
	var_1009_string = "alkash.xml"; // 0x9e5 MovS
	var_1010_int = 1; // 0x9e6 MovI
	func_509(var_1007_int, var_1008_string, var_1009_string, var_1010_int); // 0x9e7 NEW_2
	var_1011_int = 0; var_1012_string = ""; var_1013_string = ""; var_1014_int = 0; // 0x9e9 PushV
	var_1011_int = var_914_int; // 0x9ea Mov
	var_1012_string = "pers_worker"; // 0x9eb MovS
	var_1013_string = "worker.xml"; // 0x9ec MovS
	var_1014_int = 1; // 0x9ed MovI
	func_509(var_1011_int, var_1012_string, var_1013_string, var_1014_int); // 0x9ee NEW_2
	var_1015_int = 0; var_1016_string = ""; var_1017_string = ""; var_1018_int = 0; // 0x9f0 PushV
	var_1015_int = var_914_int; // 0x9f1 Mov
	var_1016_string = "pers_worker"; // 0x9f2 MovS
	var_1017_string = "worker2.xml"; // 0x9f3 MovS
	var_1018_int = 1; // 0x9f4 MovI
	func_509(var_1015_int, var_1016_string, var_1017_string, var_1018_int); // 0x9f5 NEW_2
	var_1019_int = 0; var_1020_string = ""; var_1021_string = ""; var_1022_int = 0; // 0x9f7 PushV
	var_1019_int = var_914_int; // 0x9f8 Mov
	var_1020_string = "pers_unosha"; // 0x9f9 MovS
	var_1021_string = "unosha2.xml"; // 0x9fa MovS
	var_1022_int = 1; // 0x9fb MovI
	func_509(var_1019_int, var_1020_string, var_1021_string, var_1022_int); // 0x9fc NEW_2
	var_1023_int = 0; var_1024_string = ""; var_1025_string = ""; var_1026_int = 0; // 0x9fe PushV
	var_1023_int = var_914_int; // 0x9ff Mov
	var_1024_string = "pers_dog"; // 0xa00 MovS
	var_1025_string = "dog.xml"; // 0xa01 MovS
	var_1026_int = 1; // 0xa02 MovI
	func_509(var_1023_int, var_1024_string, var_1025_string, var_1026_int); // 0xa03 NEW_2
}


func_4445(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object)
{
	var_2011_int = 0; // 0x115e PushI
	var_2012_bool = var_2006_int == var_2011_int; // 0x115f Eq
	if(var_2012_bool == 0) goto Label_4485; // 0x1160 JumpB
	var_2013_int = 0; var_2014_bool = 0; // 0x1161 PushV
	var_2013_int = 0; // 0x1162 MovI
	var_2014_bool = 1; // 0x1163 MovB
	func_802(var_2013_int, var_2014_bool); // 0x1164 NEW_2
	var_2015_int = 0; var_2016_bool = 0; var_2017_int = 0; // 0x1166 PushV
	var_2015_int = 0; // 0x1167 MovI
	var_2016_bool = 1; // 0x1168 MovB
	var_2017_int = 1; // 0x1169 MovI
	func_819(var_2015_int, var_2016_bool, var_2017_int); // 0x116a NEW_2
	var_2018_int = 0; var_2019_int = 0; var_2020_object = Obj(); var_2021_object = Obj(); var_2022_object = Obj(); // 0x116c PushV
	var_2018_int = 0; // 0x116d MovI
	var_2019_int = var_2005_int; // 0x116e Mov
	var_2020_object = var_2007_object; // 0x116f Mov
	var_2021_object = var_2008_object; // 0x1170 Mov
	var_2022_object = var_2009_object; // 0x1171 Mov
	func_647(var_2018_int, var_2019_int, var_2020_object, var_2021_object, var_2022_object); // 0x1172 NEW_2
	var_2108_object = Obj(); var_2109_int = 0; // 0x1174 PushV
	var_2108_object = var_2010_object; // 0x1175 Mov
	var_2109_int = 1; // 0x1176 MovI
	func_311(var_2109_int); // 0x1177 NEW_2
	var_2110_int = 0; var_2111_bool = 0; var_2112_int = 0; // 0x1179 PushV
	var_2110_int = 0; // 0x117a MovI
	var_2111_bool = 1; // 0x117b MovB
	var_2112_int = 4; // 0x117c MovI
	func_876(var_2110_int, var_2111_bool, var_2112_int); // 0x117d NEW_2
	var_2113_int = 0; var_2114_bool = 0; var_2115_int = 0; // 0x117f PushV
	var_2113_int = 0; // 0x1180 MovI
	var_2114_bool = 0; // 0x1181 MovB
	var_2115_int = 4; // 0x1182 MovI
	func_938(var_2113_int, var_2114_bool, var_2115_int); // 0x1183 NEW_2
	
Label_4485:
	var_2116_int = 0; var_2117_bool = 0; // 0x1185 PushV
	var_2116_int = 0; // 0x1186 MovI
	var_2117_bool = 0; // 0x1187 MovB
	func_785(var_2116_int, var_2117_bool); // 0x1188 NEW_2
	var_2118_int = 0; var_2119_int = 0; var_2120_int = 0; // 0x118a PushV
	var_2118_int = 0; // 0x118b MovI
	var_2119_int = var_2005_int; // 0x118c Mov
	var_2120_int = var_2006_int; // 0x118d Mov
	func_3143(var_2118_int, var_2119_int, var_2120_int); // 0x118e NEW_2
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


func_1378(var_2208_bool, var_2209_int)
{
	var_2210_int = 8; // 0x563 PushI
	var_2208_bool = var_2209_int >= var_2210_int; // 0x564 GE2
	return 0; // 0x565 Return
}


func_1382(var_1806_int, var_1807_int, var_1808_int)
{
	var_1809_int = 0; var_1810_int = 0; // 0x566 PushV
	var_1811_int = 1; // 0x567 PushI
	var_1812_int = var_1807_int + var_1811_int; // 0x568 Add
	var_1813_int = 12; // 0x569 PushI
	var_1814_bool = var_1812_int == var_1813_int; // 0x56a Eq
	if(var_1814_bool == 0) goto Label_1389; // 0x56b JumpB
	return 2; // 0x56c Return
	
Label_1389:
	var_1815_bool = 0; // 0x56d PushV
	var_1815_bool = 0; // 0x56e MovB
	var_1816_bool = 0; // 0x56f PushV
	var_1816_bool = 1; // 0x570 MovB
	var_1817_int = 7; // 0x571 PushI
	var_1818_bool = var_1808_int < var_1817_int; // 0x572 LT
	if(var_1818_bool == 0) goto Label_1400; // 0x573 JumpB
	var_1819_int = 21; // 0x574 PushI
	var_1820_bool = var_1808_int > var_1819_int; // 0x575 GT
	if(var_1820_bool == 0) goto Label_1400; // 0x576 JumpB
	var_1816_bool = 0; // 0x577 MovB
	
Label_1400:
	if(var_1816_bool == 0) goto Label_1405; // 0x578 JumpB
	var_1821_int = 0; // 0x579 PushI
	var_1822_bool = var_1807_int != var_1821_int; // 0x57a Neq
	if(var_1822_bool == 0) goto Label_1405; // 0x57b JumpB
	var_1815_bool = 1; // 0x57c MovB
	
Label_1405:
	if(var_1815_bool == 0) goto Label_1420; // 0x57d JumpB
	var_1823_float = 0; var_1824_int = 0; // 0x57e PushV
	var_1824_int = var_1807_int; // 0x57f Mov
	func_1147(var_1823_float, var_1824_int); // 0x580 NEW_2
	var_1810_int = var_1823_float; // 0x581 Mov
	var_1825_int = var_1810_int; // 0x583 Push
	if(var_1825_int == 0) goto Label_1420; // 0x584 JumpB
	var_1826_int = 0; var_1827_string = ""; var_1828_string = ""; var_1829_int = 0; // 0x585 PushV
	var_1826_int = var_1806_int; // 0x586 Mov
	var_1827_string = "pers_grabitel"; // 0x587 MovS
	var_1828_string = "grabitel.xml"; // 0x588 MovS
	var_1829_int = var_1810_int; // 0x589 Mov
	func_509(var_1826_int, var_1827_string, var_1828_string, var_1829_int); // 0x58a NEW_2
	
Label_1420:
	var_1830_bool = 0; var_1831_int = 0; var_1832_int = 0; // 0x58c PushV
	var_1831_int = var_1807_int; // 0x58d Mov
	var_1832_int = var_1808_int; // 0x58e Mov
	func_1116(var_1830_bool, var_1831_int, var_1832_int); // 0x58f NEW_2
	if(var_1830_bool == 0) goto Label_1497; // 0x591 JumpB
	var_1833_int = 0; var_1834_string = ""; var_1835_string = ""; var_1836_int = 0; // 0x592 PushV
	var_1833_int = var_1806_int; // 0x593 Mov
	var_1834_string = "pers_unosha"; // 0x594 MovS
	var_1835_string = "unosha_attacker.xml"; // 0x595 MovS
	var_1836_int = 1; // 0x596 MovI
	func_509(var_1833_int, var_1834_string, var_1835_string, var_1836_int); // 0x597 NEW_2
	var_1837_int = 0; var_1838_string = ""; var_1839_string = ""; var_1840_int = 0; // 0x599 PushV
	var_1837_int = var_1806_int; // 0x59a Mov
	var_1838_string = "pers_unosha"; // 0x59b MovS
	var_1839_string = "unosha2_attacker.xml"; // 0x59c MovS
	var_1840_int = 1; // 0x59d MovI
	func_509(var_1837_int, var_1838_string, var_1839_string, var_1840_int); // 0x59e NEW_2
	var_1841_int = 0; var_1842_string = ""; var_1843_string = ""; var_1844_int = 0; // 0x5a0 PushV
	var_1841_int = var_1806_int; // 0x5a1 Mov
	var_1842_string = "pers_worker"; // 0x5a2 MovS
	var_1843_string = "worker_attacker.xml"; // 0x5a3 MovS
	var_1844_int = 1; // 0x5a4 MovI
	func_509(var_1841_int, var_1842_string, var_1843_string, var_1844_int); // 0x5a5 NEW_2
	var_1845_int = 0; var_1846_string = ""; var_1847_string = ""; var_1848_int = 0; // 0x5a7 PushV
	var_1845_int = var_1806_int; // 0x5a8 Mov
	var_1846_string = "pers_worker"; // 0x5a9 MovS
	var_1847_string = "worker2_attacker.xml"; // 0x5aa MovS
	var_1848_int = 1; // 0x5ab MovI
	func_509(var_1845_int, var_1846_string, var_1847_string, var_1848_int); // 0x5ac NEW_2
	var_1849_int = 0; var_1850_string = ""; var_1851_string = ""; var_1852_int = 0; // 0x5ae PushV
	var_1849_int = var_1806_int; // 0x5af Mov
	var_1850_string = "pers_wasted_girl"; // 0x5b0 MovS
	var_1851_string = "wasted_girl.xml"; // 0x5b1 MovS
	var_1852_int = 2; // 0x5b2 MovI
	func_509(var_1849_int, var_1850_string, var_1851_string, var_1852_int); // 0x5b3 NEW_2
	var_1853_int = 0; var_1854_string = ""; var_1855_string = ""; var_1856_int = 0; // 0x5b5 PushV
	var_1853_int = var_1806_int; // 0x5b6 Mov
	var_1854_string = "pers_wasted_male"; // 0x5b7 MovS
	var_1855_string = "wasted_male.xml"; // 0x5b8 MovS
	var_1856_int = 3; // 0x5b9 MovI
	func_509(var_1853_int, var_1854_string, var_1855_string, var_1856_int); // 0x5ba NEW_2
	var_1857_int = 0; var_1858_string = ""; var_1859_string = ""; var_1860_int = 0; // 0x5bc PushV
	var_1857_int = var_1806_int; // 0x5bd Mov
	var_1858_string = "pers_woman"; // 0x5be MovS
	var_1859_string = "woman.xml"; // 0x5bf MovS
	var_1860_int = 3; // 0x5c0 MovI
	func_509(var_1857_int, var_1858_string, var_1859_string, var_1860_int); // 0x5c1 NEW_2
	var_1861_int = 0; var_1862_string = ""; var_1863_string = ""; var_1864_int = 0; // 0x5c3 PushV
	var_1861_int = var_1806_int; // 0x5c4 Mov
	var_1862_string = "pers_boy"; // 0x5c5 MovS
	var_1863_string = "boy.xml"; // 0x5c6 MovS
	var_1864_int = 1; // 0x5c7 MovI
	func_509(var_1861_int, var_1862_string, var_1863_string, var_1864_int); // 0x5c8 NEW_2
	var_1865_int = 0; var_1866_string = ""; var_1867_string = ""; var_1868_int = 0; // 0x5ca PushV
	var_1865_int = var_1806_int; // 0x5cb Mov
	var_1866_string = "pers_girl"; // 0x5cc MovS
	var_1867_string = "girl.xml"; // 0x5cd MovS
	var_1868_int = 1; // 0x5ce MovI
	func_509(var_1865_int, var_1866_string, var_1867_string, var_1868_int); // 0x5cf NEW_2
	var_1869_int = 0; var_1870_string = ""; var_1871_string = ""; var_1872_int = 0; // 0x5d1 PushV
	var_1869_int = var_1806_int; // 0x5d2 Mov
	var_1870_string = "pers_girl"; // 0x5d3 MovS
	var_1871_string = "girl2.xml"; // 0x5d4 MovS
	var_1872_int = 1; // 0x5d5 MovI
	func_509(var_1869_int, var_1870_string, var_1871_string, var_1872_int); // 0x5d6 NEW_2
	goto Label_1592; // 0x5d8 Jump
	
Label_1592:
	var_1873_bool = 0; // 0x638 PushV
	var_1873_bool = 0; // 0x639 MovB
	var_1874_bool = 0; // 0x63a PushV
	var_1874_bool = 0; // 0x63b MovB
	var_1875_int = 0; // 0x63c PushI
	var_1876_bool = var_1807_int == var_1875_int; // 0x63d Eq
	if(var_1876_bool == 0) goto Label_1603; // 0x63e JumpB
	var_1877_int = 12; // 0x63f PushI
	var_1878_bool = var_1808_int > var_1877_int; // 0x640 GT
	if(var_1878_bool == 0) goto Label_1603; // 0x641 JumpB
	var_1874_bool = 1; // 0x642 MovB
	
Label_1603:
	if(var_1874_bool == 0) goto Label_1608; // 0x643 JumpB
	var_1879_int = 22; // 0x644 PushI
	var_1880_bool = var_1808_int < var_1879_int; // 0x645 LT
	if(var_1880_bool == 0) goto Label_1608; // 0x646 JumpB
	var_1873_bool = 1; // 0x647 MovB
	
Label_1608:
	if(var_1873_bool == 0) goto Label_1616; // 0x648 JumpB
	var_1881_int = 0; var_1882_string = ""; var_1883_string = ""; var_1884_int = 0; // 0x649 PushV
	var_1881_int = var_1806_int; // 0x64a Mov
	var_1882_string = "pers_wasted_girl"; // 0x64b MovS
	var_1883_string = "wasted_girl_killme.xml"; // 0x64c MovS
	var_1884_int = 1; // 0x64d MovI
	func_509(var_1881_int, var_1882_string, var_1883_string, var_1884_int); // 0x64e NEW_2
	
Label_1616:
	var_1885_bool = 0; var_1886_int = 0; var_1887_int = 0; // 0x650 PushV
	var_1886_int = var_1807_int; // 0x651 Mov
	var_1887_int = var_1808_int; // 0x652 Mov
	func_1351(var_1885_bool, var_1886_int, var_1887_int); // 0x653 NEW_2
	if(var_1885_bool == 0) goto Label_1629; // 0x655 JumpB
	var_1888_int = 0; var_1889_string = ""; var_1890_string = ""; var_1891_int = 0; // 0x656 PushV
	var_1888_int = var_1806_int; // 0x657 Mov
	var_1889_string = "pers_soldat"; // 0x658 MovS
	var_1890_string = "soldier_marauder.xml"; // 0x659 MovS
	var_1891_int = 2; // 0x65a MovI
	func_509(var_1888_int, var_1889_string, var_1890_string, var_1891_int); // 0x65b NEW_2
	
Label_1629:
	return 2; // 0x65d Return
	
Label_1497:
	var_1892_bool = 0; // 0x5d9 PushV
	var_1892_bool = 0; // 0x5da MovB
	var_1893_int = 8; // 0x5db PushI
	var_1894_bool = var_1808_int > var_1893_int; // 0x5dc GT
	if(var_1894_bool == 0) goto Label_1506; // 0x5dd JumpB
	var_1895_int = 21; // 0x5de PushI
	var_1896_bool = var_1808_int < var_1895_int; // 0x5df LT
	if(var_1896_bool == 0) goto Label_1506; // 0x5e0 JumpB
	var_1892_bool = 1; // 0x5e1 MovB
	
Label_1506:
	if(var_1892_bool == 0) goto Label_1564; // 0x5e2 JumpB
	var_1897_int = 0; var_1898_string = ""; var_1899_string = ""; var_1900_int = 0; // 0x5e3 PushV
	var_1897_int = var_1806_int; // 0x5e4 Mov
	var_1898_string = "pers_wasted_girl"; // 0x5e5 MovS
	var_1899_string = "wasted_girl.xml"; // 0x5e6 MovS
	var_1900_int = 2; // 0x5e7 MovI
	func_509(var_1897_int, var_1898_string, var_1899_string, var_1900_int); // 0x5e8 NEW_2
	var_1901_int = 0; var_1902_string = ""; var_1903_string = ""; var_1904_int = 0; // 0x5ea PushV
	var_1901_int = var_1806_int; // 0x5eb Mov
	var_1902_string = "pers_wasted_male"; // 0x5ec MovS
	var_1903_string = "wasted_male.xml"; // 0x5ed MovS
	var_1904_int = 3; // 0x5ee MovI
	func_509(var_1901_int, var_1902_string, var_1903_string, var_1904_int); // 0x5ef NEW_2
	var_1905_int = 0; var_1906_string = ""; var_1907_string = ""; var_1908_int = 0; // 0x5f1 PushV
	var_1905_int = var_1806_int; // 0x5f2 Mov
	var_1906_string = "pers_woman"; // 0x5f3 MovS
	var_1907_string = "woman.xml"; // 0x5f4 MovS
	var_1908_int = 3; // 0x5f5 MovI
	func_509(var_1905_int, var_1906_string, var_1907_string, var_1908_int); // 0x5f6 NEW_2
	var_1909_int = 0; var_1910_string = ""; var_1911_string = ""; var_1912_int = 0; // 0x5f8 PushV
	var_1909_int = var_1806_int; // 0x5f9 Mov
	var_1910_string = "pers_unosha"; // 0x5fa MovS
	var_1911_string = "unosha.xml"; // 0x5fb MovS
	var_1912_int = 2; // 0x5fc MovI
	func_509(var_1909_int, var_1910_string, var_1911_string, var_1912_int); // 0x5fd NEW_2
	var_1913_int = 0; var_1914_string = ""; var_1915_string = ""; var_1916_int = 0; // 0x5ff PushV
	var_1913_int = var_1806_int; // 0x600 Mov
	var_1914_string = "pers_unosha"; // 0x601 MovS
	var_1915_string = "unosha2.xml"; // 0x602 MovS
	var_1916_int = 2; // 0x603 MovI
	func_509(var_1913_int, var_1914_string, var_1915_string, var_1916_int); // 0x604 NEW_2
	var_1917_int = 0; var_1918_string = ""; var_1919_string = ""; var_1920_int = 0; // 0x606 PushV
	var_1917_int = var_1806_int; // 0x607 Mov
	var_1918_string = "pers_boy"; // 0x608 MovS
	var_1919_string = "boy.xml"; // 0x609 MovS
	var_1920_int = 2; // 0x60a MovI
	func_509(var_1917_int, var_1918_string, var_1919_string, var_1920_int); // 0x60b NEW_2
	var_1921_int = 0; var_1922_string = ""; var_1923_string = ""; var_1924_int = 0; // 0x60d PushV
	var_1921_int = var_1806_int; // 0x60e Mov
	var_1922_string = "pers_girl"; // 0x60f MovS
	var_1923_string = "girl.xml"; // 0x610 MovS
	var_1924_int = 1; // 0x611 MovI
	func_509(var_1921_int, var_1922_string, var_1923_string, var_1924_int); // 0x612 NEW_2
	var_1925_int = 0; var_1926_string = ""; var_1927_string = ""; var_1928_int = 0; // 0x614 PushV
	var_1925_int = var_1806_int; // 0x615 Mov
	var_1926_string = "pers_girl"; // 0x616 MovS
	var_1927_string = "girl2.xml"; // 0x617 MovS
	var_1928_int = 1; // 0x618 MovI
	func_509(var_1925_int, var_1926_string, var_1927_string, var_1928_int); // 0x619 NEW_2
	goto Label_1592; // 0x61b Jump
	
Label_1564:
	var_1929_int = 0; var_1930_string = ""; var_1931_string = ""; var_1932_int = 0; // 0x61c PushV
	var_1929_int = var_1806_int; // 0x61d Mov
	var_1930_string = "pers_wasted_girl"; // 0x61e MovS
	var_1931_string = "wasted_girl.xml"; // 0x61f MovS
	var_1932_int = 1; // 0x620 MovI
	func_509(var_1929_int, var_1930_string, var_1931_string, var_1932_int); // 0x621 NEW_2
	var_1933_int = 0; var_1934_string = ""; var_1935_string = ""; var_1936_int = 0; // 0x623 PushV
	var_1933_int = var_1806_int; // 0x624 Mov
	var_1934_string = "pers_wasted_male"; // 0x625 MovS
	var_1935_string = "wasted_male.xml"; // 0x626 MovS
	var_1936_int = 2; // 0x627 MovI
	func_509(var_1933_int, var_1934_string, var_1935_string, var_1936_int); // 0x628 NEW_2
	var_1937_int = 0; var_1938_string = ""; var_1939_string = ""; var_1940_int = 0; // 0x62a PushV
	var_1937_int = var_1806_int; // 0x62b Mov
	var_1938_string = "pers_unosha"; // 0x62c MovS
	var_1939_string = "unosha.xml"; // 0x62d MovS
	var_1940_int = 1; // 0x62e MovI
	func_509(var_1937_int, var_1938_string, var_1939_string, var_1940_int); // 0x62f NEW_2
	var_1941_int = 0; var_1942_string = ""; var_1943_string = ""; var_1944_int = 0; // 0x631 PushV
	var_1941_int = var_1806_int; // 0x632 Mov
	var_1942_string = "pers_unosha"; // 0x633 MovS
	var_1943_string = "unosha2.xml"; // 0x634 MovS
	var_1944_int = 1; // 0x635 MovI
	func_509(var_1941_int, var_1942_string, var_1943_string, var_1944_int); // 0x636 NEW_2
}


func_9576(var_5489_int, var_5490_float)
{
	var_5491_int = 0; var_5492_int = 0; var_5493_int = 0; var_5494_float = 0; // 0x2569 PushV
	var_5492_int = 530554; // 0x256a MovI
	var_5493_int = 530553; // 0x256b MovI
	var_5494_float = var_5490_float; // 0x256c Mov
	func_12239(var_5491_int, var_5492_int, var_5493_int, var_5494_float); // 0x256d NEW_2
	var_5489_int = var_5491_int; // 0x256e Mov
	return 0; // 0x2570 Return
}


func_5486(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object)
{
	var_1347_int = 0; // 0x156f PushI
	var_1348_bool = var_1342_int == var_1347_int; // 0x1570 Eq
	if(var_1348_bool == 0) goto Label_5526; // 0x1571 JumpB
	var_1349_int = 0; var_1350_bool = 0; // 0x1572 PushV
	var_1349_int = 5; // 0x1573 MovI
	var_1350_bool = 0; // 0x1574 MovB
	func_802(var_1349_int, var_1350_bool); // 0x1575 NEW_2
	var_1351_int = 0; var_1352_bool = 0; var_1353_int = 0; // 0x1577 PushV
	var_1351_int = 5; // 0x1578 MovI
	var_1352_bool = 0; // 0x1579 MovB
	var_1353_int = 1; // 0x157a MovI
	func_819(var_1351_int, var_1352_bool, var_1353_int); // 0x157b NEW_2
	var_1354_int = 0; var_1355_int = 0; var_1356_object = Obj(); var_1357_object = Obj(); var_1358_object = Obj(); // 0x157d PushV
	var_1354_int = 5; // 0x157e MovI
	var_1355_int = var_1341_int; // 0x157f Mov
	var_1356_object = var_1343_object; // 0x1580 Mov
	var_1357_object = var_1344_object; // 0x1581 Mov
	var_1358_object = var_1345_object; // 0x1582 Mov
	func_628(var_1355_int, var_1356_object, var_1357_object, var_1358_object); // 0x1583 NEW_2
	var_1359_object = Obj(); var_1360_int = 0; // 0x1585 PushV
	var_1359_object = var_1346_object; // 0x1586 Mov
	var_1360_int = 0; // 0x1587 MovI
	func_311(var_1360_int); // 0x1588 NEW_2
	var_1361_int = 0; var_1362_bool = 0; var_1363_int = 0; // 0x158a PushV
	var_1361_int = 5; // 0x158b MovI
	var_1362_bool = 0; // 0x158c MovB
	var_1363_int = 4; // 0x158d MovI
	func_876(var_1361_int, var_1362_bool, var_1363_int); // 0x158e NEW_2
	var_1364_int = 0; var_1365_bool = 0; var_1366_int = 0; // 0x1590 PushV
	var_1364_int = 5; // 0x1591 MovI
	var_1365_bool = 0; // 0x1592 MovB
	var_1366_int = 4; // 0x1593 MovI
	func_938(var_1364_int, var_1365_bool, var_1366_int); // 0x1594 NEW_2
	
Label_5526:
	var_1367_int = 0; var_1368_int = 0; // 0x1596 PushV
	var_1367_int = 5; // 0x1597 MovI
	var_1368_int = var_1342_int; // 0x1598 Mov
	func_989(var_1367_int, var_1368_int); // 0x1599 NEW_2
	var_1369_int = 0; var_1370_int = 0; var_1371_int = 0; // 0x159b PushV
	var_1369_int = 5; // 0x159c MovI
	var_1370_int = var_1341_int; // 0x159d Mov
	var_1371_int = var_1342_int; // 0x159e Mov
	func_1903(var_1369_int, var_1370_int, var_1371_int); // 0x159f NEW_2
	return 0; // 0x15a1 Return
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
	func_14216(var_144_bool, var_145_int, var_146_int); // 0x184 NEW_2
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


func_9585(var_5500_int, var_5501_float)
{
	var_5502_int = 0; var_5503_int = 0; var_5504_int = 0; var_5505_float = 0; // 0x2572 PushV
	var_5503_int = 530556; // 0x2573 MovI
	var_5504_int = 530555; // 0x2574 MovI
	var_5505_float = var_5501_float; // 0x2575 Mov
	func_12239(var_5502_int, var_5503_int, var_5504_int, var_5505_float); // 0x2576 NEW_2
	var_5500_int = var_5502_int; // 0x2577 Mov
	return 0; // 0x2579 Return
}


func_9594(var_5511_int, var_5512_float)
{
	var_5513_int = 0; var_5514_int = 0; var_5515_int = 0; var_5516_float = 0; // 0x257b PushV
	var_5514_int = 530558; // 0x257c MovI
	var_5515_int = 530557; // 0x257d MovI
	var_5516_float = var_5512_float; // 0x257e Mov
	func_12239(var_5513_int, var_5514_int, var_5515_int, var_5516_float); // 0x257f NEW_2
	var_5511_int = var_5513_int; // 0x2580 Mov
	return 0; // 0x2582 Return
}


func_13691(var_4559_float)
{
	var_4563_object = GlobalVars[16]; // 0x357c PushGE
	var_4563_object = 0; // 0x357d SetNull
	GlobalVars[16] = var_4563_object; // 0x357e PopGE
	var_4564_int = 45003; // 0x357f PushI
	var_4565_float = 24.0; // 0x3580 PushF
	SetTimeEvent(var_4564_int, var_4565_float); // 0x3581 Func
	var_4566_object = Obj(); var_4567_object = Obj(); // 0x3583 PushV
	var_4568_object = GlobalVars[16]; // 0x3584 PushGE
	var_4566_object = var_4568_object; // 0x3585 Mov
	var_4569_object = GlobalVars[16]; // 0x3587 PushGE
	var_4567_object = var_4569_object; // 0x3588 Mov
	func_10557(); // 0x358a NEW_2
	var_4580_object = Obj(); var_4581_object = Obj(); // 0x358c PushV
	var_4582_object = GlobalVars[16]; // 0x358d PushGE
	var_4580_object = var_4582_object; // 0x358e Mov
	var_4583_object = GlobalVars[16]; // 0x3590 PushGE
	var_4581_object = var_4583_object; // 0x3591 Mov
	func_10501(); // 0x3593 NEW_2
	var_4586_object = Obj(); var_4587_object = Obj(); // 0x3595 PushV
	var_4588_object = GlobalVars[16]; // 0x3596 PushGE
	var_4586_object = var_4588_object; // 0x3597 Mov
	var_4589_object = GlobalVars[16]; // 0x3599 PushGE
	var_4587_object = var_4589_object; // 0x359a Mov
	func_10515(); // 0x359c NEW_2
	var_4613_object = Obj(); var_4614_object = Obj(); // 0x359e PushV
	var_4615_object = GlobalVars[16]; // 0x359f PushGE
	var_4613_object = var_4615_object; // 0x35a0 Mov
	var_4616_object = GlobalVars[16]; // 0x35a2 PushGE
	var_4614_object = var_4616_object; // 0x35a3 Mov
	func_10527(); // 0x35a5 NEW_2
	var_4619_object = Obj(); var_4620_object = Obj(); // 0x35a7 PushV
	var_4621_object = GlobalVars[16]; // 0x35a8 PushGE
	var_4619_object = var_4621_object; // 0x35a9 Mov
	var_4622_object = GlobalVars[16]; // 0x35ab PushGE
	var_4620_object = var_4622_object; // 0x35ac Mov
	func_11517(); // 0x35ae NEW_2
	var_4625_object = Obj(); var_4626_object = Obj(); // 0x35b0 PushV
	var_4627_object = GlobalVars[16]; // 0x35b1 PushGE
	var_4625_object = var_4627_object; // 0x35b2 Mov
	var_4628_object = GlobalVars[16]; // 0x35b4 PushGE
	var_4626_object = var_4628_object; // 0x35b5 Mov
	func_10213(); // 0x35b7 NEW_2
	var_4631_object = Obj(); var_4632_object = Obj(); // 0x35b9 PushV
	var_4633_object = GlobalVars[16]; // 0x35ba PushGE
	var_4631_object = var_4633_object; // 0x35bb Mov
	var_4634_object = GlobalVars[16]; // 0x35bd PushGE
	var_4632_object = var_4634_object; // 0x35be Mov
	func_10316(); // 0x35c0 NEW_2
	var_4637_object = Obj(); var_4638_object = Obj(); // 0x35c2 PushV
	var_4639_object = GlobalVars[16]; // 0x35c3 PushGE
	var_4637_object = var_4639_object; // 0x35c4 Mov
	var_4640_object = GlobalVars[16]; // 0x35c6 PushGE
	var_4638_object = var_4640_object; // 0x35c7 Mov
	func_10323(); // 0x35c9 NEW_2
	var_4643_object = Obj(); var_4644_object = Obj(); // 0x35cb PushV
	var_4645_object = GlobalVars[16]; // 0x35cc PushGE
	var_4643_object = var_4645_object; // 0x35cd Mov
	var_4646_object = GlobalVars[16]; // 0x35cf PushGE
	var_4644_object = var_4646_object; // 0x35d0 Mov
	func_10206(); // 0x35d2 NEW_2
	var_4649_int = 0; var_4650_float = 0; // 0x35d4 PushV
	var_4650_float = var_4559_float; // 0x35d5 Mov
	func_9810(var_4649_int, var_4650_float); // 0x35d6 NEW_2
	var_4658_object = Obj(); var_4659_string = ""; // 0x35d8 PushV
	var_4659_string = "volonteers_danko"; // 0x35d9 MovS
	func_143(var_4658_object, var_4659_string); // 0x35da NEW_2
	var_4666_object = Obj(); var_4667_string = ""; // 0x35dc PushV
	var_4667_string = "quest_d1_01"; // 0x35dd MovS
	func_143(var_4666_object, var_4667_string); // 0x35de NEW_2
	var_4668_int = 45005; // 0x35e0 PushI
	var_4669_float = 48.0; // 0x35e1 PushF
	SetTimeEvent(var_4668_int, var_4669_float); // 0x35e2 Func
	var_4670_int = 45006; // 0x35e4 PushI
	var_4671_float = 72.0; // 0x35e5 PushF
	SetTimeEvent(var_4670_int, var_4671_float); // 0x35e6 Func
	var_4672_int = 45007; // 0x35e8 PushI
	var_4673_float = 17.92; // 0x35e9 PushF
	SetTimeEvent(var_4672_int, var_4673_float); // 0x35ea Func
	var_4674_int = 45008; // 0x35ec PushI
	var_4675_float = 10.0; // 0x35ed PushF
	SetTimeEvent(var_4674_int, var_4675_float); // 0x35ee Func
	var_4676_int = 45009; // 0x35f0 PushI
	var_4677_float = 23.5; // 0x35f1 PushF
	SetTimeEvent(var_4676_int, var_4677_float); // 0x35f2 Func
	var_4678_int = 45010; // 0x35f4 PushI
	var_4679_float = 16.0; // 0x35f5 PushF
	SetTimeEvent(var_4678_int, var_4679_float); // 0x35f6 Func
	var_4680_int = 45011; // 0x35f8 PushI
	var_4681_float = 96.0; // 0x35f9 PushF
	SetTimeEvent(var_4680_int, var_4681_float); // 0x35fa Func
	var_4682_int = 45012; // 0x35fc PushI
	var_4683_float = 120.0; // 0x35fd PushF
	SetTimeEvent(var_4682_int, var_4683_float); // 0x35fe Func
	var_4684_int = 45013; // 0x3600 PushI
	var_4685_float = 144.0; // 0x3601 PushF
	SetTimeEvent(var_4684_int, var_4685_float); // 0x3602 Func
	var_4686_int = 45015; // 0x3604 PushI
	var_4687_float = 132.0; // 0x3605 PushF
	SetTimeEvent(var_4686_int, var_4687_float); // 0x3606 Func
	var_4688_int = 45016; // 0x3608 PushI
	var_4689_float = 168.0; // 0x3609 PushF
	SetTimeEvent(var_4688_int, var_4689_float); // 0x360a Func
	var_4690_int = 45017; // 0x360c PushI
	var_4691_float = 192.0; // 0x360d PushF
	SetTimeEvent(var_4690_int, var_4691_float); // 0x360e Func
	var_4692_int = 45018; // 0x3610 PushI
	var_4693_float = 216.0; // 0x3611 PushF
	SetTimeEvent(var_4692_int, var_4693_float); // 0x3612 Func
	var_4694_int = 45031; // 0x3614 PushI
	var_4695_float = 240.0; // 0x3615 PushF
	SetTimeEvent(var_4694_int, var_4695_float); // 0x3616 Func
	var_4696_int = 45032; // 0x3618 PushI
	var_4697_float = 245.0; // 0x3619 PushF
	SetTimeEvent(var_4696_int, var_4697_float); // 0x361a Func
	var_4698_int = 45035; // 0x361c PushI
	var_4699_float = 261.5; // 0x361d PushF
	SetTimeEvent(var_4698_int, var_4699_float); // 0x361e Func
	var_4700_int = 45036; // 0x3620 PushI
	var_4701_float = 255.0; // 0x3621 PushF
	SetTimeEvent(var_4700_int, var_4701_float); // 0x3622 Func
	var_4702_int = 45038; // 0x3624 PushI
	var_4703_float = 31.25; // 0x3625 PushF
	SetTimeEvent(var_4702_int, var_4703_float); // 0x3626 Func
	var_4704_int = 45039; // 0x3628 PushI
	var_4705_float = 60.0; // 0x3629 PushF
	SetTimeEvent(var_4704_int, var_4705_float); // 0x362a Func
	var_4706_int = 45040; // 0x362c PushI
	var_4707_float = 55.25; // 0x362d PushF
	SetTimeEvent(var_4706_int, var_4707_float); // 0x362e Func
	var_4708_int = 45041; // 0x3630 PushI
	var_4709_float = 79.25; // 0x3631 PushF
	SetTimeEvent(var_4708_int, var_4709_float); // 0x3632 Func
	var_4710_int = 45042; // 0x3634 PushI
	var_4711_float = 264.0; // 0x3635 PushF
	SetTimeEvent(var_4710_int, var_4711_float); // 0x3636 Func
	var_4712_int = 45043; // 0x3638 PushI
	var_4713_float = 108.0; // 0x3639 PushF
	SetTimeEvent(var_4712_int, var_4713_float); // 0x363a Func
	var_4714_int = 45044; // 0x363c PushI
	var_4715_float = 128.67; // 0x363d PushF
	SetTimeEvent(var_4714_int, var_4715_float); // 0x363e Func
	var_4716_int = 45045; // 0x3640 PushI
	var_4717_float = 128.25; // 0x3641 PushF
	SetTimeEvent(var_4716_int, var_4717_float); // 0x3642 Func
	var_4718_int = 45046; // 0x3644 PushI
	var_4719_float = 128.0; // 0x3645 PushF
	SetTimeEvent(var_4718_int, var_4719_float); // 0x3646 Func
	var_4720_int = 45047; // 0x3648 PushI
	var_4721_float = 127.25; // 0x3649 PushF
	SetTimeEvent(var_4720_int, var_4721_float); // 0x364a Func
	var_4722_int = 45048; // 0x364c PushI
	var_4723_float = 154.0; // 0x364d PushF
	SetTimeEvent(var_4722_int, var_4723_float); // 0x364e Func
	var_4724_int = 45049; // 0x3650 PushI
	var_4725_float = 152.0; // 0x3651 PushF
	SetTimeEvent(var_4724_int, var_4725_float); // 0x3652 Func
	var_4726_int = 45050; // 0x3654 PushI
	var_4727_float = 151.25; // 0x3655 PushF
	SetTimeEvent(var_4726_int, var_4727_float); // 0x3656 Func
	var_4728_int = 45051; // 0x3658 PushI
	var_4729_float = 249.35001; // 0x3659 PushF
	SetTimeEvent(var_4728_int, var_4729_float); // 0x365a Func
	var_4730_int = 45054; // 0x365c PushI
	var_4731_float = 273.0; // 0x365d PushF
	SetTimeEvent(var_4730_int, var_4731_float); // 0x365e Func
	var_4732_int = 45063; // 0x3660 PushI
	var_4733_float = 144.0; // 0x3661 PushF
	SetTimeEvent(var_4732_int, var_4733_float); // 0x3662 Func
	var_4734_int = 45064; // 0x3664 PushI
	var_4735_float = 192.0; // 0x3665 PushF
	SetTimeEvent(var_4734_int, var_4735_float); // 0x3666 Func
	var_4736_int = 45174; // 0x3668 PushI
	var_4737_float = 31.02; // 0x3669 PushF
	SetTimeEvent(var_4736_int, var_4737_float); // 0x366a Func
	var_4738_int = 45175; // 0x366c PushI
	var_4739_float = 55.02; // 0x366d PushF
	SetTimeEvent(var_4738_int, var_4739_float); // 0x366e Func
	var_4740_int = 45176; // 0x3670 PushI
	var_4741_float = 79.02; // 0x3671 PushF
	SetTimeEvent(var_4740_int, var_4741_float); // 0x3672 Func
	var_4742_int = 45177; // 0x3674 PushI
	var_4743_float = 103.02; // 0x3675 PushF
	SetTimeEvent(var_4742_int, var_4743_float); // 0x3676 Func
	var_4744_int = 45178; // 0x3678 PushI
	var_4745_float = 127.02; // 0x3679 PushF
	SetTimeEvent(var_4744_int, var_4745_float); // 0x367a Func
	var_4746_int = 45179; // 0x367c PushI
	var_4747_float = 151.02; // 0x367d PushF
	SetTimeEvent(var_4746_int, var_4747_float); // 0x367e Func
	var_4748_int = 45180; // 0x3680 PushI
	var_4749_float = 175.02; // 0x3681 PushF
	SetTimeEvent(var_4748_int, var_4749_float); // 0x3682 Func
	var_4750_int = 45181; // 0x3684 PushI
	var_4751_float = 199.02; // 0x3685 PushF
	SetTimeEvent(var_4750_int, var_4751_float); // 0x3686 Func
	var_4752_int = 45182; // 0x3688 PushI
	var_4753_float = 223.02; // 0x3689 PushF
	SetTimeEvent(var_4752_int, var_4753_float); // 0x368a Func
	var_4754_int = 45183; // 0x368c PushI
	var_4755_float = 247.02; // 0x368d PushF
	SetTimeEvent(var_4754_int, var_4755_float); // 0x368e Func
	var_4756_int = 45184; // 0x3690 PushI
	var_4757_float = 271.01999; // 0x3691 PushF
	SetTimeEvent(var_4756_int, var_4757_float); // 0x3692 Func
	var_4758_int = 45199; // 0x3694 PushI
	var_4759_float = 37.0; // 0x3695 PushF
	SetTimeEvent(var_4758_int, var_4759_float); // 0x3696 Func
	var_4760_int = 45200; // 0x3698 PushI
	var_4761_float = 39.5; // 0x3699 PushF
	SetTimeEvent(var_4760_int, var_4761_float); // 0x369a Func
	var_4762_int = 45201; // 0x369c PushI
	var_4763_float = 86.5; // 0x369d PushF
	SetTimeEvent(var_4762_int, var_4763_float); // 0x369e Func
	var_4764_int = 45202; // 0x36a0 PushI
	var_4765_float = 85.0; // 0x36a1 PushF
	SetTimeEvent(var_4764_int, var_4765_float); // 0x36a2 Func
	var_4766_int = 45203; // 0x36a4 PushI
	var_4767_float = 103.25; // 0x36a5 PushF
	SetTimeEvent(var_4766_int, var_4767_float); // 0x36a6 Func
	var_4768_int = 45205; // 0x36a8 PushI
	var_4769_float = 175.25; // 0x36a9 PushF
	SetTimeEvent(var_4768_int, var_4769_float); // 0x36aa Func
	var_4770_int = 45206; // 0x36ac PushI
	var_4771_float = 210.0; // 0x36ad PushF
	SetTimeEvent(var_4770_int, var_4771_float); // 0x36ae Func
	var_4772_int = 45207; // 0x36b0 PushI
	var_4773_float = 24.33; // 0x36b1 PushF
	SetTimeEvent(var_4772_int, var_4773_float); // 0x36b2 Func
	var_4774_int = 45208; // 0x36b4 PushI
	var_4775_float = 48.08; // 0x36b5 PushF
	SetTimeEvent(var_4774_int, var_4775_float); // 0x36b6 Func
	var_4776_int = 45209; // 0x36b8 PushI
	var_4777_float = 72.08; // 0x36b9 PushF
	SetTimeEvent(var_4776_int, var_4777_float); // 0x36ba Func
	var_4778_int = 45210; // 0x36bc PushI
	var_4779_float = 96.08; // 0x36bd PushF
	SetTimeEvent(var_4778_int, var_4779_float); // 0x36be Func
	var_4780_int = 45211; // 0x36c0 PushI
	var_4781_float = 120.08; // 0x36c1 PushF
	SetTimeEvent(var_4780_int, var_4781_float); // 0x36c2 Func
	var_4782_int = 45212; // 0x36c4 PushI
	var_4783_float = 144.08; // 0x36c5 PushF
	SetTimeEvent(var_4782_int, var_4783_float); // 0x36c6 Func
	var_4784_int = 45213; // 0x36c8 PushI
	var_4785_float = 168.08; // 0x36c9 PushF
	SetTimeEvent(var_4784_int, var_4785_float); // 0x36ca Func
	var_4786_int = 45214; // 0x36cc PushI
	var_4787_float = 192.08; // 0x36cd PushF
	SetTimeEvent(var_4786_int, var_4787_float); // 0x36ce Func
	var_4788_int = 45215; // 0x36d0 PushI
	var_4789_float = 216.08; // 0x36d1 PushF
	SetTimeEvent(var_4788_int, var_4789_float); // 0x36d2 Func
	var_4790_int = 45216; // 0x36d4 PushI
	var_4791_float = 240.08; // 0x36d5 PushF
	SetTimeEvent(var_4790_int, var_4791_float); // 0x36d6 Func
	var_4792_int = 45217; // 0x36d8 PushI
	var_4793_float = 264.07999; // 0x36d9 PushF
	SetTimeEvent(var_4792_int, var_4793_float); // 0x36da Func
	var_4794_int = 45218; // 0x36dc PushI
	var_4795_float = 228.0; // 0x36dd PushF
	SetTimeEvent(var_4794_int, var_4795_float); // 0x36de Func
	var_4796_int = 45219; // 0x36e0 PushI
	var_4797_float = 230.0; // 0x36e1 PushF
	SetTimeEvent(var_4796_int, var_4797_float); // 0x36e2 Func
	var_4798_int = 45220; // 0x36e4 PushI
	var_4799_float = 271.54001; // 0x36e5 PushF
	SetTimeEvent(var_4798_int, var_4799_float); // 0x36e6 Func
	var_4800_int = 45221; // 0x36e8 PushI
	var_4801_float = 272.29001; // 0x36e9 PushF
	SetTimeEvent(var_4800_int, var_4801_float); // 0x36ea Func
	var_4802_int = 45222; // 0x36ec PushI
	var_4803_float = 24.0; // 0x36ed PushF
	SetTimeEvent(var_4802_int, var_4803_float); // 0x36ee Func
	var_4804_int = 45223; // 0x36f0 PushI
	var_4805_float = 80.25; // 0x36f1 PushF
	SetTimeEvent(var_4804_int, var_4805_float); // 0x36f2 Func
	var_4806_int = 45224; // 0x36f4 PushI
	var_4807_float = 180.5; // 0x36f5 PushF
	SetTimeEvent(var_4806_int, var_4807_float); // 0x36f6 Func
	var_4808_int = 45225; // 0x36f8 PushI
	var_4809_float = 201.0; // 0x36f9 PushF
	SetTimeEvent(var_4808_int, var_4809_float); // 0x36fa Func
	var_4810_int = 45226; // 0x36fc PushI
	var_4811_float = 202.0; // 0x36fd PushF
	SetTimeEvent(var_4810_int, var_4811_float); // 0x36fe Func
	var_4812_int = 45227; // 0x3700 PushI
	var_4813_float = 203.0; // 0x3701 PushF
	SetTimeEvent(var_4812_int, var_4813_float); // 0x3702 Func
	var_4814_int = 45228; // 0x3704 PushI
	var_4815_float = 223.96001; // 0x3705 PushF
	SetTimeEvent(var_4814_int, var_4815_float); // 0x3706 Func
	var_4816_int = 45229; // 0x3708 PushI
	var_4817_float = 64.0; // 0x3709 PushF
	SetTimeEvent(var_4816_int, var_4817_float); // 0x370a Func
	var_4818_int = 45230; // 0x370c PushI
	var_4819_float = 64.25; // 0x370d PushF
	SetTimeEvent(var_4818_int, var_4819_float); // 0x370e Func
	var_4820_int = 45231; // 0x3710 PushI
	var_4821_float = 90.0; // 0x3711 PushF
	SetTimeEvent(var_4820_int, var_4821_float); // 0x3712 Func
	var_4822_int = 45232; // 0x3714 PushI
	var_4823_float = 250.5; // 0x3715 PushF
	SetTimeEvent(var_4822_int, var_4823_float); // 0x3716 Func
	var_4824_int = 45239; // 0x3718 PushI
	var_4825_float = 182.5; // 0x3719 PushF
	SetTimeEvent(var_4824_int, var_4825_float); // 0x371a Func
	var_4826_int = 45260; // 0x371c PushI
	var_4827_float = 199.17; // 0x371d PushF
	SetTimeEvent(var_4826_int, var_4827_float); // 0x371e Func
	var_4828_int = 45261; // 0x3720 PushI
	var_4829_float = 199.5; // 0x3721 PushF
	SetTimeEvent(var_4828_int, var_4829_float); // 0x3722 Func
	var_4830_int = 45267; // 0x3724 PushI
	var_4831_float = 168.0; // 0x3725 PushF
	SetTimeEvent(var_4830_int, var_4831_float); // 0x3726 Func
	var_4832_int = 45268; // 0x3728 PushI
	var_4833_float = 192.0; // 0x3729 PushF
	SetTimeEvent(var_4832_int, var_4833_float); // 0x372a Func
	var_4834_int = 45269; // 0x372c PushI
	var_4835_float = 216.0; // 0x372d PushF
	SetTimeEvent(var_4834_int, var_4835_float); // 0x372e Func
	var_4836_int = 45270; // 0x3730 PushI
	var_4837_float = 240.0; // 0x3731 PushF
	SetTimeEvent(var_4836_int, var_4837_float); // 0x3732 Func
	var_4838_int = 45271; // 0x3734 PushI
	var_4839_float = 264.0; // 0x3735 PushF
	SetTimeEvent(var_4838_int, var_4839_float); // 0x3736 Func
	var_4840_int = 45282; // 0x3738 PushI
	var_4841_float = 58.0; // 0x3739 PushF
	SetTimeEvent(var_4840_int, var_4841_float); // 0x373a Func
	return 0; // 0x373c Return
}


func_8573()
{
	var_4521_object = Obj(); var_4522_int = 0; var_4523_int = 0; var_4524_object = Obj(); var_4525_bool = 0; var_4526_cvector = CVector(0,0,0); var_4527_cvector = CVector(0,0,0); var_4528_string = ""; var_4529_object = Obj(); var_4530_int = 0; var_4531_int = 0; var_4532_object = Obj(); var_4533_bool = 0; var_4534_cvector = CVector(0,0,0); var_4535_cvector = CVector(0,0,0); var_4536_string = ""; // 0x217d PushV
	GetMainOutdoorScene(var_4529_object); // 0x217e Func
	var_4537_object = GlobalVars[7]; // 0x2180 PushGE
	size(var_4530_int); // 0x2181 ObjFunc
	var_4531_int = 0; // 0x2183 MovI
	
Label_8580:
	var_4538_bool = var_4531_int < var_4530_int; // 0x2184 LT
	if(var_4538_bool == 0) goto Label_8620; // 0x2185 JumpB
	var_4539_object = GlobalVars[7]; // 0x2186 PushGE
	get(var_4532_object, var_4531_int); // 0x2187 ObjFunc
	var_4540_object = var_4532_object; // 0x2189 Push
	if(var_4540_object == 0) goto Label_8588; // 0x218a JumpB
	goto Label_8617; // 0x218b Jump
	
Label_8617:
	var_4541_int = 1; // 0x21a9 PushI
	var_4531_int = var_4531_int + var_4541_int; // 0x21aa Add2
	goto Label_8580; // 0x21ab Jump
	
Label_8588:
	var_4542_string = "pt_grave_supply"; // 0x218c PushS
	var_4543_int = 1; // 0x218d PushI
	var_4544_int = var_4531_int + var_4543_int; // 0x218e Add
	var_4545_int = var_4542_string + var_4544_int; // 0x218f Add
	GetLocator(var_4545_int, var_4533_bool, var_4534_cvector, var_4535_cvector); // 0x2190 ObjFunc
	var_4546_bool = var_4533_bool == 0; // 0x2192 Not
	if(var_4546_bool == 0) goto Label_8600; // 0x2193 JumpB
	var_4547_string = "Grave supply point not found"; // 0x2194 PushS
	Trace(var_4547_string); // 0x2195 Func
	goto Label_8617; // 0x2197 Jump
	
Label_8600:
	var_4548_int = 1; // 0x2198 PushI
	var_4549_int = 1; // 0x2199 PushI
	var_4550_string = "bread"; // 0x219a PushS
	var_4551_string = "milk"; // 0x219b PushS
	RandOneOf(var_4536_string, var_4548_int, var_4549_int, var_4550_string, var_4551_string); // 0x219c Func
	var_4552_string = "scripted"; // 0x219e PushS
	var_4553_string = "item_"; // 0x219f PushS
	var_4554_int = var_4553_string + var_4536_string; // 0x21a0 Add
	var_4555_string = "_stat.xml"; // 0x21a1 PushS
	var_4556_int = var_4554_int + var_4555_string; // 0x21a2 Add
	AddStationaryActorByType(var_4532_object, var_4534_cvector, var_4535_cvector, var_4552_string, var_4556_int); // 0x21a3 ObjFunc
	var_4557_object = GlobalVars[7]; // 0x21a5 PushGE
	set(var_4531_int, var_4532_object); // 0x21a6 ObjFunc
	var_4532_object = 0; // 0x21a8 SetNull
	
Label_8620:
	return 16; // 0x21ac Return
}


func_11649()
{
	var_5318_object = Obj(); var_5319_object = Obj(); var_5320_object = Obj(); var_5321_object = Obj(); // 0x2d81 PushV
	var_5322_object = Obj(); // 0x2d82 PushV
	func_12247(var_5322_object); // 0x2d83 NEW_2
	var_5320_object = var_5322_object; // 0x2d84 Mov
	var_5323_string = "d11q01NudeGotoRastrel"; // 0x2d86 PushS
	FindMark(var_5321_object, var_5323_string); // 0x2d87 ObjFunc
	var_5324_object = var_5321_object; // 0x2d89 Push
	if(var_5324_object == 0) goto Label_11661; // 0x2d8a JumpB
	Remove(); // 0x2d8b ObjFunc
	
Label_11661:
	var_5325_string = "d11q01NudeGotoBlock"; // 0x2d8d PushS
	FindMark(var_5321_object, var_5325_string); // 0x2d8e ObjFunc
	var_5326_object = var_5321_object; // 0x2d90 Push
	if(var_5326_object == 0) goto Label_11668; // 0x2d91 JumpB
	Remove(); // 0x2d92 ObjFunc
	
Label_11668:
	var_5327_bool = 0; var_5328_int = 0; // 0x2d94 PushV
	var_5328_int = 192; // 0x2d95 MovI
	func_12222(var_5327_bool, var_5328_int); // 0x2d96 NEW_2
	var_5329_bool = 0; var_5330_int = 0; // 0x2d98 PushV
	var_5330_int = 197; // 0x2d99 MovI
	func_12222(var_5329_bool, var_5330_int); // 0x2d9a NEW_2
	var_5331_bool = 0; var_5332_int = 0; // 0x2d9c PushV
	var_5332_int = 682; // 0x2d9d MovI
	func_12222(var_5331_bool, var_5332_int); // 0x2d9e NEW_2
	var_5333_bool = 0; var_5334_int = 0; // 0x2da0 PushV
	var_5334_int = 686; // 0x2da1 MovI
	func_12222(var_5333_bool, var_5334_int); // 0x2da2 NEW_2
	return 4; // 0x2da4 Return
}


func_9603(var_5522_int, var_5523_float)
{
	var_5524_int = 0; var_5525_int = 0; var_5526_int = 0; var_5527_float = 0; // 0x2584 PushV
	var_5525_int = 530560; // 0x2585 MovI
	var_5526_int = 530559; // 0x2586 MovI
	var_5527_float = var_5523_float; // 0x2587 Mov
	func_12239(var_5524_int, var_5525_int, var_5526_int, var_5527_float); // 0x2588 NEW_2
	var_5522_int = var_5524_int; // 0x2589 Mov
	return 0; // 0x258b Return
}


func_6533(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object)
{
	var_1676_int = 0; // 0x1986 PushI
	var_1677_bool = var_1671_int == var_1676_int; // 0x1987 Eq
	if(var_1677_bool == 0) goto Label_6573; // 0x1988 JumpB
	var_1678_int = 0; var_1679_bool = 0; // 0x1989 PushV
	var_1678_int = 11; // 0x198a MovI
	var_1679_bool = 0; // 0x198b MovB
	func_802(var_1678_int, var_1679_bool); // 0x198c NEW_2
	var_1680_int = 0; var_1681_bool = 0; var_1682_int = 0; // 0x198e PushV
	var_1680_int = 11; // 0x198f MovI
	var_1681_bool = 0; // 0x1990 MovB
	var_1682_int = 1; // 0x1991 MovI
	func_819(var_1680_int, var_1681_bool, var_1682_int); // 0x1992 NEW_2
	var_1683_int = 0; var_1684_int = 0; var_1685_object = Obj(); var_1686_object = Obj(); var_1687_object = Obj(); // 0x1994 PushV
	var_1683_int = 11; // 0x1995 MovI
	var_1684_int = var_1670_int; // 0x1996 Mov
	var_1685_object = var_1672_object; // 0x1997 Mov
	var_1686_object = var_1673_object; // 0x1998 Mov
	var_1687_object = var_1674_object; // 0x1999 Mov
	func_628(var_1684_int, var_1685_object, var_1686_object, var_1687_object); // 0x199a NEW_2
	var_1688_object = Obj(); var_1689_int = 0; // 0x199c PushV
	var_1688_object = var_1675_object; // 0x199d Mov
	var_1689_int = 0; // 0x199e MovI
	func_311(var_1689_int); // 0x199f NEW_2
	var_1690_int = 0; var_1691_bool = 0; var_1692_int = 0; // 0x19a1 PushV
	var_1690_int = 11; // 0x19a2 MovI
	var_1691_bool = 0; // 0x19a3 MovB
	var_1692_int = 5; // 0x19a4 MovI
	func_876(var_1690_int, var_1691_bool, var_1692_int); // 0x19a5 NEW_2
	var_1693_int = 0; var_1694_bool = 0; var_1695_int = 0; // 0x19a7 PushV
	var_1693_int = 11; // 0x19a8 MovI
	var_1694_bool = 0; // 0x19a9 MovB
	var_1695_int = 5; // 0x19aa MovI
	func_938(var_1693_int, var_1694_bool, var_1695_int); // 0x19ab NEW_2
	
Label_6573:
	var_1696_int = 0; var_1697_int = 0; // 0x19ad PushV
	var_1696_int = 11; // 0x19ae MovI
	var_1697_int = var_1671_int; // 0x19af Mov
	func_989(var_1696_int, var_1697_int); // 0x19b0 NEW_2
	var_1698_int = 0; var_1699_int = 0; var_1700_int = 0; // 0x19b2 PushV
	var_1698_int = 11; // 0x19b3 MovI
	var_1699_int = var_1670_int; // 0x19b4 Mov
	var_1700_int = var_1671_int; // 0x19b5 Mov
	func_1630(var_1698_int, var_1699_int, var_1700_int); // 0x19b6 NEW_2
	return 0; // 0x19b8 Return
}


func_9612(var_5533_int, var_5534_float)
{
	var_5535_int = 0; var_5536_int = 0; var_5537_int = 0; var_5538_float = 0; // 0x258d PushV
	var_5536_int = 530562; // 0x258e MovI
	var_5537_int = 530561; // 0x258f MovI
	var_5538_float = var_5534_float; // 0x2590 Mov
	func_12239(var_5535_int, var_5536_int, var_5537_int, var_5538_float); // 0x2591 NEW_2
	var_5533_int = var_5535_int; // 0x2592 Mov
	return 0; // 0x2594 Return
}


func_4497(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object)
{
	var_3192_int = 0; // 0x1192 PushI
	var_3193_bool = var_3187_int == var_3192_int; // 0x1193 Eq
	if(var_3193_bool == 0) goto Label_4537; // 0x1194 JumpB
	var_3194_int = 0; var_3195_bool = 0; // 0x1195 PushV
	var_3194_int = 0; // 0x1196 MovI
	var_3195_bool = 0; // 0x1197 MovB
	func_802(var_3194_int, var_3195_bool); // 0x1198 NEW_2
	var_3196_int = 0; var_3197_bool = 0; var_3198_int = 0; // 0x119a PushV
	var_3196_int = 0; // 0x119b MovI
	var_3197_bool = 0; // 0x119c MovB
	var_3198_int = 1; // 0x119d MovI
	func_819(var_3196_int, var_3197_bool, var_3198_int); // 0x119e NEW_2
	var_3199_int = 0; var_3200_int = 0; var_3201_object = Obj(); var_3202_object = Obj(); var_3203_object = Obj(); // 0x11a0 PushV
	var_3199_int = 0; // 0x11a1 MovI
	var_3200_int = var_3186_int; // 0x11a2 Mov
	var_3201_object = var_3188_object; // 0x11a3 Mov
	var_3202_object = var_3189_object; // 0x11a4 Mov
	var_3203_object = var_3190_object; // 0x11a5 Mov
	func_726(var_3199_int, var_3200_int, var_3201_object, var_3202_object, var_3203_object); // 0x11a6 NEW_2
	var_3238_object = Obj(); var_3239_int = 0; // 0x11a8 PushV
	var_3238_object = var_3191_object; // 0x11a9 Mov
	var_3239_int = 2; // 0x11aa MovI
	func_311(var_3239_int); // 0x11ab NEW_2
	var_3240_int = 0; var_3241_bool = 0; var_3242_int = 0; // 0x11ad PushV
	var_3240_int = 0; // 0x11ae MovI
	var_3241_bool = 0; // 0x11af MovB
	var_3242_int = 4; // 0x11b0 MovI
	func_876(var_3240_int, var_3241_bool, var_3242_int); // 0x11b1 NEW_2
	var_3243_int = 0; var_3244_bool = 0; var_3245_int = 0; // 0x11b3 PushV
	var_3243_int = 0; // 0x11b4 MovI
	var_3244_bool = 1; // 0x11b5 MovB
	var_3245_int = 4; // 0x11b6 MovI
	func_938(var_3243_int, var_3244_bool, var_3245_int); // 0x11b7 NEW_2
	
Label_4537:
	var_3246_int = 0; var_3247_bool = 0; // 0x11b9 PushV
	var_3246_int = 0; // 0x11ba MovI
	var_3247_bool = 0; // 0x11bb MovB
	func_785(var_3246_int, var_3247_bool); // 0x11bc NEW_2
	var_3248_int = 0; var_3249_int = 0; var_3250_int = 0; // 0x11be PushV
	var_3248_int = 0; // 0x11bf MovI
	var_3249_int = var_3186_int; // 0x11c0 Mov
	var_3250_int = var_3187_int; // 0x11c1 Mov
	func_4041(var_3248_int, var_3249_int, var_3250_int); // 0x11c2 NEW_2
	return 0; // 0x11c4 Return
}


func_3477(var_4157_int, var_4158_int, var_4159_int)
{
	var_4160_int = 0; var_4161_int = 0; var_4162_int = 0; var_4163_int = 0; var_4164_int = 0; var_4165_int = 0; var_4166_int = 0; var_4167_int = 0; // 0xd95 PushV
	var_4168_bool = 0; // 0xd96 PushV
	var_4168_bool = 0; // 0xd97 MovB
	var_4169_int = 8; // 0xd98 PushI
	var_4170_bool = var_4159_int > var_4169_int; // 0xd99 GT
	if(var_4170_bool == 0) goto Label_3487; // 0xd9a JumpB
	var_4171_int = 21; // 0xd9b PushI
	var_4172_bool = var_4159_int < var_4171_int; // 0xd9c LT
	if(var_4172_bool == 0) goto Label_3487; // 0xd9d JumpB
	var_4168_bool = 1; // 0xd9e MovB
	
Label_3487:
	if(var_4168_bool == 0) goto Label_3564; // 0xd9f JumpB
	var_4173_int = 0; var_4174_string = ""; var_4175_string = ""; var_4176_int = 0; // 0xda0 PushV
	var_4173_int = var_4157_int; // 0xda1 Mov
	var_4174_string = "pers_rat"; // 0xda2 MovS
	var_4175_string = "rat.xml"; // 0xda3 MovS
	var_4176_int = 3; // 0xda4 MovI
	func_509(var_4173_int, var_4174_string, var_4175_string, var_4176_int); // 0xda5 NEW_2
	var_4177_int = 0; var_4178_string = ""; var_4179_string = ""; var_4180_int = 0; // 0xda7 PushV
	var_4177_int = var_4157_int; // 0xda8 Mov
	var_4178_string = "pers_alkash"; // 0xda9 MovS
	var_4179_string = "alkash.xml"; // 0xdaa MovS
	var_4180_int = 2; // 0xdab MovI
	func_509(var_4177_int, var_4178_string, var_4179_string, var_4180_int); // 0xdac NEW_2
	var_4181_int = 0; var_4182_string = ""; var_4183_string = ""; var_4184_int = 0; // 0xdae PushV
	var_4181_int = var_4157_int; // 0xdaf Mov
	var_4182_string = "pers_dohodyaga"; // 0xdb0 MovS
	var_4183_string = "dohodyaga.xml"; // 0xdb1 MovS
	var_4184_int = 1; // 0xdb2 MovI
	func_509(var_4181_int, var_4182_string, var_4183_string, var_4184_int); // 0xdb3 NEW_2
	var_4185_int = 2; // 0xdb5 PushI
	var_4186_float = 0; var_4187_int = 0; // 0xdb6 PushV
	var_4187_int = var_4158_int; // 0xdb7 Mov
	func_1171(var_4186_float, var_4187_int); // 0xdb8 NEW_2
	var_4164_int = var_4185_int * var_4186_float; // 0xdba Mult2
	var_4188_int = var_4164_int; // 0xdbb Push
	if(var_4188_int == 0) goto Label_3524; // 0xdbc JumpB
	var_4189_int = 0; var_4190_string = ""; var_4191_string = ""; var_4192_int = 0; // 0xdbd PushV
	var_4189_int = var_4157_int; // 0xdbe Mov
	var_4190_string = "pers_grabitel"; // 0xdbf MovS
	var_4191_string = "grabitel.xml"; // 0xdc0 MovS
	var_4192_int = var_4164_int; // 0xdc1 Mov
	func_509(var_4189_int, var_4190_string, var_4191_string, var_4192_int); // 0xdc2 NEW_2
	
Label_3524:
	var_4193_int = 1; // 0xdc4 PushI
	var_4194_int = var_4158_int + var_4193_int; // 0xdc5 Add
	var_4195_int = 2; // 0xdc6 PushI
	var_4196_bool = var_4194_int >= var_4195_int; // 0xdc7 GE
	if(var_4196_bool == 0) goto Label_3548; // 0xdc8 JumpB
	var_4197_int = 0; var_4198_string = ""; var_4199_string = ""; var_4200_int = 0; // 0xdc9 PushV
	var_4197_int = var_4157_int; // 0xdca Mov
	var_4198_string = "pers_patrool"; // 0xdcb MovS
	var_4199_string = "patrol.xml"; // 0xdcc MovS
	var_4200_int = 2; // 0xdcd MovI
	func_509(var_4197_int, var_4198_string, var_4199_string, var_4200_int); // 0xdce NEW_2
	var_4201_bool = 0; var_4202_int = 0; // 0xdd0 PushV
	var_4202_int = var_4158_int; // 0xdd1 Mov
	func_1378(var_4201_bool, var_4202_int); // 0xdd2 NEW_2
	if(var_4201_bool == 0) goto Label_3548; // 0xdd4 JumpB
	var_4203_int = 0; var_4204_string = ""; var_4205_string = ""; var_4206_int = 0; // 0xdd5 PushV
	var_4203_int = var_4157_int; // 0xdd6 Mov
	var_4204_string = "pers_soldat_hand"; // 0xdd7 MovS
	var_4205_string = "soldier_patrol.xml"; // 0xdd8 MovS
	var_4206_int = 1; // 0xdd9 MovI
	func_509(var_4203_int, var_4204_string, var_4205_string, var_4206_int); // 0xdda NEW_2
	
Label_3548:
	var_4207_int = 1; // 0xddc PushI
	var_4208_float = 0; var_4209_int = 0; // 0xddd PushV
	var_4209_int = var_4158_int; // 0xdde Mov
	func_1261(var_4208_float, var_4209_int); // 0xddf NEW_2
	var_4165_int = var_4207_int * var_4208_float; // 0xde1 Mult2
	var_4210_int = var_4165_int; // 0xde2 Push
	if(var_4210_int == 0) goto Label_3563; // 0xde3 JumpB
	var_4211_int = 0; var_4212_string = ""; var_4213_string = ""; var_4214_int = 0; // 0xde4 PushV
	var_4211_int = var_4157_int; // 0xde5 Mov
	var_4212_string = "pers_bomber"; // 0xde6 MovS
	var_4213_string = "bomber.xml"; // 0xde7 MovS
	var_4214_int = var_4165_int; // 0xde8 Mov
	func_509(var_4211_int, var_4212_string, var_4213_string, var_4214_int); // 0xde9 NEW_2
	
Label_3563:
	goto Label_3639; // 0xdeb Jump
	
Label_3639:
	var_4215_bool = 0; var_4216_int = 0; var_4217_int = 0; // 0xe37 PushV
	var_4216_int = var_4158_int; // 0xe38 Mov
	var_4217_int = var_4159_int; // 0xe39 Mov
	func_1351(var_4215_bool, var_4216_int, var_4217_int); // 0xe3a NEW_2
	if(var_4215_bool == 0) goto Label_3652; // 0xe3c JumpB
	var_4218_int = 0; var_4219_string = ""; var_4220_string = ""; var_4221_int = 0; // 0xe3d PushV
	var_4218_int = var_4157_int; // 0xe3e Mov
	var_4219_string = "pers_soldat"; // 0xe3f MovS
	var_4220_string = "soldier_marauder.xml"; // 0xe40 MovS
	var_4221_int = 2; // 0xe41 MovI
	func_509(var_4218_int, var_4219_string, var_4220_string, var_4221_int); // 0xe42 NEW_2
	
Label_3652:
	var_4222_bool = 0; var_4223_int = 0; // 0xe44 PushV
	var_4223_int = var_4158_int; // 0xe45 Mov
	func_1378(var_4222_bool, var_4223_int); // 0xe46 NEW_2
	if(var_4222_bool == 0) goto Label_3664; // 0xe48 JumpB
	var_4224_int = 0; var_4225_string = ""; var_4226_string = ""; var_4227_int = 0; // 0xe49 PushV
	var_4224_int = var_4157_int; // 0xe4a Mov
	var_4225_string = "pers_sanitar"; // 0xe4b MovS
	var_4226_string = "sanitar.xml"; // 0xe4c MovS
	var_4227_int = 1; // 0xe4d MovI
	func_509(var_4224_int, var_4225_string, var_4226_string, var_4227_int); // 0xe4e NEW_2
	
Label_3664:
	return 8; // 0xe50 Return
	
Label_3564:
	var_4228_int = 0; var_4229_string = ""; var_4230_string = ""; var_4231_int = 0; // 0xdec PushV
	var_4228_int = var_4157_int; // 0xded Mov
	var_4229_string = "pers_rat"; // 0xdee MovS
	var_4230_string = "rat.xml"; // 0xdef MovS
	var_4231_int = 5; // 0xdf0 MovI
	func_509(var_4228_int, var_4229_string, var_4230_string, var_4231_int); // 0xdf1 NEW_2
	var_4232_int = 0; var_4233_string = ""; var_4234_string = ""; var_4235_int = 0; // 0xdf3 PushV
	var_4232_int = var_4157_int; // 0xdf4 Mov
	var_4233_string = "pers_alkash"; // 0xdf5 MovS
	var_4234_string = "alkash.xml"; // 0xdf6 MovS
	var_4235_int = 1; // 0xdf7 MovI
	func_509(var_4232_int, var_4233_string, var_4234_string, var_4235_int); // 0xdf8 NEW_2
	var_4236_int = 1; // 0xdfa PushI
	var_4237_int = var_4158_int + var_4236_int; // 0xdfb Add
	var_4238_int = 2; // 0xdfc PushI
	var_4239_bool = var_4237_int >= var_4238_int; // 0xdfd GE
	if(var_4239_bool == 0) goto Label_3602; // 0xdfe JumpB
	var_4240_int = 0; var_4241_string = ""; var_4242_string = ""; var_4243_int = 0; // 0xdff PushV
	var_4240_int = var_4157_int; // 0xe00 Mov
	var_4241_string = "pers_patrool"; // 0xe01 MovS
	var_4242_string = "patrol.xml"; // 0xe02 MovS
	var_4243_int = 1; // 0xe03 MovI
	func_509(var_4240_int, var_4241_string, var_4242_string, var_4243_int); // 0xe04 NEW_2
	var_4244_bool = 0; var_4245_int = 0; // 0xe06 PushV
	var_4245_int = var_4158_int; // 0xe07 Mov
	func_1378(var_4244_bool, var_4245_int); // 0xe08 NEW_2
	if(var_4244_bool == 0) goto Label_3602; // 0xe0a JumpB
	var_4246_int = 0; var_4247_string = ""; var_4248_string = ""; var_4249_int = 0; // 0xe0b PushV
	var_4246_int = var_4157_int; // 0xe0c Mov
	var_4247_string = "pers_soldat_hand"; // 0xe0d MovS
	var_4248_string = "soldier_patrol.xml"; // 0xe0e MovS
	var_4249_int = 1; // 0xe0f MovI
	func_509(var_4246_int, var_4247_string, var_4248_string, var_4249_int); // 0xe10 NEW_2
	
Label_3602:
	var_4250_int = 0; var_4251_string = ""; var_4252_string = ""; var_4253_int = 0; // 0xe12 PushV
	var_4250_int = var_4157_int; // 0xe13 Mov
	var_4251_string = "pers_rat"; // 0xe14 MovS
	var_4252_string = "rat.xml"; // 0xe15 MovS
	var_4253_int = 2; // 0xe16 MovI
	func_509(var_4250_int, var_4251_string, var_4252_string, var_4253_int); // 0xe17 NEW_2
	var_4254_int = 3; // 0xe19 PushI
	var_4255_float = 0; var_4256_int = 0; // 0xe1a PushV
	var_4256_int = var_4158_int; // 0xe1b Mov
	func_1171(var_4255_float, var_4256_int); // 0xe1c NEW_2
	var_4166_int = var_4254_int * var_4255_float; // 0xe1e Mult2
	var_4257_int = var_4166_int; // 0xe1f Push
	if(var_4257_int == 0) goto Label_3624; // 0xe20 JumpB
	var_4258_int = 0; var_4259_string = ""; var_4260_string = ""; var_4261_int = 0; // 0xe21 PushV
	var_4258_int = var_4157_int; // 0xe22 Mov
	var_4259_string = "pers_grabitel"; // 0xe23 MovS
	var_4260_string = "grabitel.xml"; // 0xe24 MovS
	var_4261_int = var_4166_int; // 0xe25 Mov
	func_509(var_4258_int, var_4259_string, var_4260_string, var_4261_int); // 0xe26 NEW_2
	
Label_3624:
	var_4262_int = 1; // 0xe28 PushI
	var_4263_float = 0; var_4264_int = 0; // 0xe29 PushV
	var_4264_int = var_4158_int; // 0xe2a Mov
	func_1261(var_4263_float, var_4264_int); // 0xe2b NEW_2
	var_4167_int = var_4262_int * var_4263_float; // 0xe2d Mult2
	var_4265_int = var_4167_int; // 0xe2e Push
	if(var_4265_int == 0) goto Label_3639; // 0xe2f JumpB
	var_4266_int = 0; var_4267_string = ""; var_4268_string = ""; var_4269_int = 0; // 0xe30 PushV
	var_4266_int = var_4157_int; // 0xe31 Mov
	var_4267_string = "pers_bomber"; // 0xe32 MovS
	var_4268_string = "bomber.xml"; // 0xe33 MovS
	var_4269_int = var_4167_int; // 0xe34 Mov
	func_509(var_4266_int, var_4267_string, var_4268_string, var_4269_int); // 0xe35 NEW_2
}


func_406(var_492_bool, var_493_int)
{
	var_494_int = 0; var_495_int = 0; // 0x196 PushV
	var_496_string = ""; var_497_int = 0; // 0x197 PushV
	var_497_int = var_493_int; // 0x198 Mov
	func_305(var_496_string, var_497_int); // 0x199 NEW_2
	GetVariable(var_496_string, var_495_int); // 0x19b Func
	var_498_int = 3; // 0x19d PushI
	var_499_int = var_495_int & var_498_int; // 0x19e And
	var_500_int = 0; // 0x19f PushI
	var_492_bool = var_499_int == var_500_int; // 0x1a0 Eq2
	return 2; // 0x1a1 Return
}


func_9621(var_5544_int, var_5545_float)
{
	var_5546_int = 0; var_5547_int = 0; var_5548_int = 0; var_5549_float = 0; // 0x2596 PushV
	var_5547_int = 530564; // 0x2597 MovI
	var_5548_int = 530563; // 0x2598 MovI
	var_5549_float = var_5545_float; // 0x2599 Mov
	func_12239(var_5546_int, var_5547_int, var_5548_int, var_5549_float); // 0x259a NEW_2
	var_5544_int = var_5546_int; // 0x259b Mov
	return 0; // 0x259d Return
}


func_9630(var_5555_int, var_5556_float)
{
	var_5557_int = 0; var_5558_int = 0; var_5559_int = 0; var_5560_float = 0; // 0x259f PushV
	var_5558_int = 530566; // 0x25a0 MovI
	var_5559_int = 530565; // 0x25a1 MovI
	var_5560_float = var_5556_float; // 0x25a2 Mov
	func_12239(var_5557_int, var_5558_int, var_5559_int, var_5560_float); // 0x25a3 NEW_2
	var_5555_int = var_5557_int; // 0x25a4 Mov
	return 0; // 0x25a6 Return
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


func_5538(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object)
{
	var_2625_int = 0; // 0x15a3 PushI
	var_2626_bool = var_2620_int == var_2625_int; // 0x15a4 Eq
	if(var_2626_bool == 0) goto Label_5578; // 0x15a5 JumpB
	var_2627_int = 0; var_2628_bool = 0; // 0x15a6 PushV
	var_2627_int = 5; // 0x15a7 MovI
	var_2628_bool = 1; // 0x15a8 MovB
	func_802(var_2627_int, var_2628_bool); // 0x15a9 NEW_2
	var_2629_int = 0; var_2630_bool = 0; var_2631_int = 0; // 0x15ab PushV
	var_2629_int = 5; // 0x15ac MovI
	var_2630_bool = 1; // 0x15ad MovB
	var_2631_int = 1; // 0x15ae MovI
	func_819(var_2629_int, var_2630_bool, var_2631_int); // 0x15af NEW_2
	var_2632_int = 0; var_2633_int = 0; var_2634_object = Obj(); var_2635_object = Obj(); var_2636_object = Obj(); // 0x15b1 PushV
	var_2632_int = 5; // 0x15b2 MovI
	var_2633_int = var_2619_int; // 0x15b3 Mov
	var_2634_object = var_2621_object; // 0x15b4 Mov
	var_2635_object = var_2622_object; // 0x15b5 Mov
	var_2636_object = var_2623_object; // 0x15b6 Mov
	func_647(var_2632_int, var_2633_int, var_2634_object, var_2635_object, var_2636_object); // 0x15b7 NEW_2
	var_2637_object = Obj(); var_2638_int = 0; // 0x15b9 PushV
	var_2637_object = var_2624_object; // 0x15ba Mov
	var_2638_int = 1; // 0x15bb MovI
	func_311(var_2638_int); // 0x15bc NEW_2
	var_2639_int = 0; var_2640_bool = 0; var_2641_int = 0; // 0x15be PushV
	var_2639_int = 5; // 0x15bf MovI
	var_2640_bool = 1; // 0x15c0 MovB
	var_2641_int = 4; // 0x15c1 MovI
	func_876(var_2639_int, var_2640_bool, var_2641_int); // 0x15c2 NEW_2
	var_2642_int = 0; var_2643_bool = 0; var_2644_int = 0; // 0x15c4 PushV
	var_2642_int = 5; // 0x15c5 MovI
	var_2643_bool = 0; // 0x15c6 MovB
	var_2644_int = 4; // 0x15c7 MovI
	func_938(var_2642_int, var_2643_bool, var_2644_int); // 0x15c8 NEW_2
	
Label_5578:
	var_2645_int = 0; var_2646_bool = 0; // 0x15ca PushV
	var_2645_int = 5; // 0x15cb MovI
	var_2646_bool = 0; // 0x15cc MovB
	func_785(var_2645_int, var_2646_bool); // 0x15cd NEW_2
	var_2647_int = 0; var_2648_int = 0; var_2649_int = 0; // 0x15cf PushV
	var_2647_int = 5; // 0x15d0 MovI
	var_2648_int = var_2619_int; // 0x15d1 Mov
	var_2649_int = var_2620_int; // 0x15d2 Mov
	func_2950(var_2647_int, var_2648_int, var_2649_int); // 0x15d3 NEW_2
	return 0; // 0x15d5 Return
}


func_11687(var_4805_bool)
{
	var_4808_int = 0; var_4809_string = ""; // 0x2da8 PushV
	var_4809_string = "d1q01"; // 0x2da9 MovS
	func_138(var_4808_int, var_4809_string); // 0x2daa NEW_2
	var_4810_int = 1000; // 0x2dac PushI
	var_4811_bool = var_4808_int == var_4810_int; // 0x2dad Eq
	if(var_4811_bool == 0) goto Label_11697; // 0x2dae JumpB
	var_4805_bool = 1; // 0x2daf MovB
	return 0; // 0x2db0 Return
	
Label_11697:
	var_4805_bool = 0; // 0x2db1 MovB
	return 0; // 0x2db2 Return
}


func_9639(var_5566_int, var_5567_float)
{
	var_5568_int = 0; var_5569_int = 0; var_5570_int = 0; var_5571_float = 0; // 0x25a8 PushV
	var_5569_int = 530568; // 0x25a9 MovI
	var_5570_int = 530567; // 0x25aa MovI
	var_5571_float = var_5567_float; // 0x25ab Mov
	func_12239(var_5568_int, var_5569_int, var_5570_int, var_5571_float); // 0x25ac NEW_2
	var_5566_int = var_5568_int; // 0x25ad Mov
	return 0; // 0x25af Return
}


func_8622()
{
	var_4372_object = Obj(); var_4373_object = Obj(); var_4374_object = Obj(); var_4375_object = Obj(); // 0x21ae PushV
	GetMainOutdoorScene(var_4374_object); // 0x21af Func
	var_4376_string = "big_gun"; // 0x21b1 PushS
	var_4377_string = "big_gun.bin"; // 0x21b2 PushS
	var_4378_cvector = CVector(0.0, 0.0, 0.0); // 0x21b3 PushVec
	AddScriptedActor(var_4375_object, var_4376_string, var_4377_string, var_4374_object, var_4378_cvector); // 0x21b4 Func
	var_4379_string = "vagon_martira"; // 0x21b6 PushS
	var_4380_string = "big_gun.bin"; // 0x21b7 PushS
	var_4381_cvector = CVector(0.0, 0.0, 0.0); // 0x21b8 PushVec
	AddScriptedActor(var_4375_object, var_4379_string, var_4380_string, var_4374_object, var_4381_cvector); // 0x21b9 Func
	var_4382_string = "d9q01_trigger_wagon"; // 0x21bb PushS
	var_4383_string = "quest_d9_01_wagon.bin"; // 0x21bc PushS
	var_4384_cvector = CVector(0.0, 0.0, 0.0); // 0x21bd PushVec
	AddScriptedActor(var_4375_object, var_4382_string, var_4383_string, var_4374_object, var_4384_cvector); // 0x21be Func
	return 4; // 0x21c0 Return
}


func_9648(var_6058_int, var_6059_float)
{
	var_6060_int = 0; var_6061_int = 0; var_6062_int = 0; var_6063_float = 0; // 0x25b1 PushV
	var_6061_int = 536379; // 0x25b2 MovI
	var_6062_int = 536378; // 0x25b3 MovI
	var_6063_float = var_6059_float; // 0x25b4 Mov
	func_12239(var_6060_int, var_6061_int, var_6062_int, var_6063_float); // 0x25b5 NEW_2
	var_6058_int = var_6060_int; // 0x25b6 Mov
	return 0; // 0x25b8 Return
}


func_11699(var_4771_bool)
{
	var_4774_int = 0; var_4775_string = ""; // 0x2db4 PushV
	var_4775_string = "d1q01"; // 0x2db5 MovS
	func_138(var_4774_int, var_4775_string); // 0x2db6 NEW_2
	var_4778_int = 0; // 0x2db8 PushI
	var_4779_bool = var_4774_int == var_4778_int; // 0x2db9 Eq
	if(var_4779_bool == 0) goto Label_11709; // 0x2dba JumpB
	var_4771_bool = 1; // 0x2dbb MovB
	return 0; // 0x2dbc Return
	
Label_11709:
	var_4771_bool = 0; // 0x2dbd MovB
	return 0; // 0x2dbe Return
}


func_436(var_1979_bool, var_1980_int)
{
	var_1981_int = 0; var_1982_int = 0; // 0x1b4 PushV
	var_1983_string = ""; var_1984_int = 0; // 0x1b5 PushV
	var_1984_int = var_1980_int; // 0x1b6 Mov
	func_305(var_1983_string, var_1984_int); // 0x1b7 NEW_2
	GetVariable(var_1983_string, var_1982_int); // 0x1b9 Func
	var_1985_int = 3; // 0x1bb PushI
	var_1986_int = var_1982_int & var_1985_int; // 0x1bc And
	var_1987_int = 1; // 0x1bd PushI
	var_1979_bool = var_1986_int == var_1987_int; // 0x1be Eq2
	return 2; // 0x1bf Return
}


func_6585(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object)
{
	var_2906_int = 0; // 0x19ba PushI
	var_2907_bool = var_2901_int == var_2906_int; // 0x19bb Eq
	if(var_2907_bool == 0) goto Label_6625; // 0x19bc JumpB
	var_2908_int = 0; var_2909_bool = 0; // 0x19bd PushV
	var_2908_int = 11; // 0x19be MovI
	var_2909_bool = 0; // 0x19bf MovB
	func_802(var_2908_int, var_2909_bool); // 0x19c0 NEW_2
	var_2910_int = 0; var_2911_bool = 0; var_2912_int = 0; // 0x19c2 PushV
	var_2910_int = 11; // 0x19c3 MovI
	var_2911_bool = 1; // 0x19c4 MovB
	var_2912_int = 1; // 0x19c5 MovI
	func_819(var_2910_int, var_2911_bool, var_2912_int); // 0x19c6 NEW_2
	var_2913_int = 0; var_2914_int = 0; var_2915_object = Obj(); var_2916_object = Obj(); var_2917_object = Obj(); // 0x19c8 PushV
	var_2913_int = 11; // 0x19c9 MovI
	var_2914_int = var_2900_int; // 0x19ca Mov
	var_2915_object = var_2902_object; // 0x19cb Mov
	var_2916_object = var_2903_object; // 0x19cc Mov
	var_2917_object = var_2904_object; // 0x19cd Mov
	func_647(var_2913_int, var_2914_int, var_2915_object, var_2916_object, var_2917_object); // 0x19ce NEW_2
	var_2918_object = Obj(); var_2919_int = 0; // 0x19d0 PushV
	var_2918_object = var_2905_object; // 0x19d1 Mov
	var_2919_int = 1; // 0x19d2 MovI
	func_311(var_2919_int); // 0x19d3 NEW_2
	var_2920_int = 0; var_2921_bool = 0; var_2922_int = 0; // 0x19d5 PushV
	var_2920_int = 11; // 0x19d6 MovI
	var_2921_bool = 1; // 0x19d7 MovB
	var_2922_int = 5; // 0x19d8 MovI
	func_876(var_2920_int, var_2921_bool, var_2922_int); // 0x19d9 NEW_2
	var_2923_int = 0; var_2924_bool = 0; var_2925_int = 0; // 0x19db PushV
	var_2923_int = 11; // 0x19dc MovI
	var_2924_bool = 0; // 0x19dd MovB
	var_2925_int = 5; // 0x19de MovI
	func_938(var_2923_int, var_2924_bool, var_2925_int); // 0x19df NEW_2
	
Label_6625:
	var_2926_int = 0; var_2927_bool = 0; // 0x19e1 PushV
	var_2926_int = 11; // 0x19e2 MovI
	var_2927_bool = 0; // 0x19e3 MovB
	func_785(var_2926_int, var_2927_bool); // 0x19e4 NEW_2
	var_2928_int = 0; var_2929_int = 0; var_2930_int = 0; // 0x19e6 PushV
	var_2928_int = 11; // 0x19e7 MovI
	var_2929_int = var_2900_int; // 0x19e8 Mov
	var_2930_int = var_2901_int; // 0x19e9 Mov
	func_2770(var_2928_int, var_2929_int, var_2930_int); // 0x19ea NEW_2
	return 0; // 0x19ec Return
}


func_9657(var_5783_int, var_5784_float)
{
	var_5785_int = 0; var_5786_int = 0; var_5787_int = 0; var_5788_float = 0; // 0x25ba PushV
	var_5786_int = 522212; // 0x25bb MovI
	var_5787_int = 522211; // 0x25bc MovI
	var_5788_float = var_5784_float; // 0x25bd Mov
	func_12239(var_5785_int, var_5786_int, var_5787_int, var_5788_float); // 0x25be NEW_2
	var_5783_int = var_5785_int; // 0x25bf Mov
	return 0; // 0x25c1 Return
}


func_7611(var_10_int)
{
	var_12_int = 0; var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); // 0x1dbb PushV
	var_28_object = GlobalVars[14]; // 0x1dbc PushGE
	size(var_20_int); // 0x1dbd ObjFunc
	var_29_bool = 0; // 0x1dbf PushV
	var_29_bool = 1; // 0x1dc0 MovB
	var_30_bool = var_10_int >= var_20_int; // 0x1dc1 GE
	if(var_30_bool == 0) goto Label_7623; // 0x1dc2 JumpB
	var_31_int = -1; // 0x1dc3 PushI
	var_32_bool = var_10_int == var_31_int; // 0x1dc4 Eq
	if(var_32_bool == 0) goto Label_7623; // 0x1dc5 JumpB
	var_29_bool = 0; // 0x1dc6 MovB
	
Label_7623:
	if(var_29_bool == 0) goto Label_7629; // 0x1dc7 JumpB
	var_33_string = "Wrong bonfire index "; // 0x1dc8 PushS
	var_34_int = var_33_string + var_10_int; // 0x1dc9 Add
	Trace(var_34_int); // 0x1dca Func
	return 16; // 0x1dcc Return
	
Label_7629:
	var_35_object = GlobalVars[14]; // 0x1dcd PushGE
	get(var_21_object, var_10_int); // 0x1dce ObjFunc
	var_36_string = "bonfire_light"; // 0x1dd0 PushS
	var_37_int = 1; // 0x1dd1 PushI
	var_38_int = var_10_int + var_37_int; // 0x1dd2 Add
	var_39_int = var_36_string + var_38_int; // 0x1dd3 Add
	FindActor(var_22_object, var_39_int); // 0x1dd4 Func
	var_40_bool = var_22_object == 0; // 0x1dd6 Not
	if(var_40_bool == 0) goto Label_7649; // 0x1dd7 JumpB
	var_41_string = "Bofire  light "; // 0x1dd8 PushS
	var_42_int = 1; // 0x1dd9 PushI
	var_43_int = var_10_int + var_42_int; // 0x1dda Add
	var_44_int = var_41_string + var_43_int; // 0x1ddb Add
	var_45_string = " not found"; // 0x1ddc PushS
	var_46_int = var_44_int + var_45_string; // 0x1ddd Add
	Trace(var_46_int); // 0x1dde Func
	goto Label_7652; // 0x1de0 Jump
	
Label_7652:
	GetMainOutdoorScene(var_23_object); // 0x1de4 Func
	var_47_string = "pt_bonfire"; // 0x1de6 PushS
	var_48_int = 1; // 0x1de7 PushI
	var_49_int = var_10_int + var_48_int; // 0x1de8 Add
	var_50_int = var_47_string + var_49_int; // 0x1de9 Add
	GetLocator(var_50_int, var_26_bool, var_24_cvector, var_25_cvector); // 0x1dea ObjFunc
	var_51_bool = var_26_bool == 0; // 0x1dec Not
	if(var_51_bool == 0) goto Label_7666; // 0x1ded JumpB
	var_52_string = "Locator for bonfire doesn't exist"; // 0x1dee PushS
	Trace(var_52_string); // 0x1def Func
	return 16; // 0x1df1 Return
	
Label_7666:
	var_53_bool = var_21_object == 0; // 0x1df2 Not
	if(var_53_bool == 0) goto Label_7676; // 0x1df3 JumpB
	var_54_string = "scripted"; // 0x1df4 PushS
	var_55_string = "bonfire_big.xml"; // 0x1df5 PushS
	AddActorByType(var_27_object, var_54_string, var_23_object, var_24_cvector, var_25_cvector, var_55_string); // 0x1df6 Func
	var_56_object = GlobalVars[14]; // 0x1df8 PushGE
	set(var_10_int, var_27_object); // 0x1df9 ObjFunc
	var_27_object = 0; // 0x1dfb SetNull
	
Label_7676:
	var_57_string = "Setting bonfire "; // 0x1dfc PushS
	var_58_int = 1; // 0x1dfd PushI
	var_59_int = var_10_int + var_58_int; // 0x1dfe Add
	var_60_int = var_57_string + var_59_int; // 0x1dff Add
	var_61_string = "... ok"; // 0x1e00 PushS
	var_62_int = var_60_int + var_61_string; // 0x1e01 Add
	Trace(var_62_int); // 0x1e02 Func
	return 16; // 0x1e04 Return
	
Label_7649:
	var_63_bool = 1; // 0x1de1 PushB
	Switch(var_63_bool); // 0x1de2 ObjFunc
}


func_11711(var_5875_bool)
{
	var_5878_int = 0; var_5879_string = ""; // 0x2dc0 PushV
	var_5879_string = "resque_list"; // 0x2dc1 MovS
	func_138(var_5878_int, var_5879_string); // 0x2dc2 NEW_2
	var_5880_int = 0; // 0x2dc4 PushI
	var_5881_bool = var_5878_int != var_5880_int; // 0x2dc5 Neq
	if(var_5881_bool == 0) goto Label_11721; // 0x2dc6 JumpB
	var_5875_bool = 1; // 0x2dc7 MovB
	return 0; // 0x2dc8 Return
	
Label_11721:
	var_5875_bool = 0; // 0x2dc9 MovB
	return 0; // 0x2dca Return
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


func_9666(var_5807_int, var_5808_float)
{
	var_5809_int = 0; var_5810_int = 0; var_5811_int = 0; var_5812_float = 0; // 0x25c3 PushV
	var_5810_int = 534077; // 0x25c4 MovI
	var_5811_int = 534076; // 0x25c5 MovI
	var_5812_float = var_5808_float; // 0x25c6 Mov
	func_12239(var_5809_int, var_5810_int, var_5811_int, var_5812_float); // 0x25c7 NEW_2
	var_5807_int = var_5809_int; // 0x25c8 Mov
	return 0; // 0x25ca Return
}


func_8643(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_int = 0; var_16_int = 0; // 0x21c3 PushV
	var_17_bool = 0; // 0x21c4 PushV
	var_17_bool = 0; // 0x21c5 MovB
	var_18_int = 16384; // 0x21c6 PushI
	var_19_bool = var_3_int > var_18_int; // 0x21c7 GT
	if(var_19_bool == 0) goto Label_8653; // 0x21c8 JumpB
	var_20_int = 16396; // 0x21c9 PushI
	var_21_bool = var_3_int < var_20_int; // 0x21ca LT
	if(var_21_bool == 0) goto Label_8653; // 0x21cb JumpB
	var_17_bool = 1; // 0x21cc MovB
	
Label_8653:
	if(var_17_bool == 0) goto Label_8662; // 0x21cd JumpB
	var_22_int = 16384; // 0x21ce PushI
	var_11_int = var_3_int - var_22_int; // 0x21cf Sub2
	var_23_int = 0; // 0x21d0 PushV
	var_23_int = var_11_int; // 0x21d1 Mov
	func_14307(var_23_int); // 0x21d2 NEW_2
	var_2_bool = 1; // 0x21d4 MovB
	return 12; // 0x21d5 Return
	
Label_8662:
	var_205_bool = 0; // 0x21d6 PushV
	var_205_bool = 0; // 0x21d7 MovB
	var_206_int = 32768; // 0x21d8 PushI
	var_207_bool = var_3_int > var_206_int; // 0x21d9 GT
	if(var_207_bool == 0) goto Label_8671; // 0x21da JumpB
	var_208_int = 33056; // 0x21db PushI
	var_209_bool = var_3_int < var_208_int; // 0x21dc LT
	if(var_209_bool == 0) goto Label_8671; // 0x21dd JumpB
	var_205_bool = 1; // 0x21de MovB
	
Label_8671:
	if(var_205_bool == 0) goto Label_8696; // 0x21df JumpB
	var_210_int = 32768; // 0x21e0 PushI
	var_211_int = var_3_int - var_210_int; // 0x21e1 Sub
	var_212_int = 24; // 0x21e2 PushI
	var_12_int = var_211_int / var_211_int; // 0x21e3 Div2
	var_213_int = 32768; // 0x21e4 PushI
	var_214_int = var_3_int - var_213_int; // 0x21e5 Sub
	var_215_int = 24; // 0x21e6 PushI
	var_13_int = var_214_int % var_215_int; // 0x21e7 Mod2
	GetGameTime(var_14_float); // 0x21e8 Func
	var_216_int = 24; // 0x21ea PushI
	var_15_int = var_14_float / var_14_float; // 0x21eb Div2
	var_16_int = var_14_float; // 0x21ec Mov
	var_217_int = 24; // 0x21ed PushI
	var_16_int = var_16_int % var_217_int; // 0x21ee Mod2
	var_218_int = 0; var_219_int = 0; var_220_int = 0; var_221_int = 0; // 0x21ef PushV
	var_218_int = var_12_int; // 0x21f0 Mov
	var_219_int = var_13_int; // 0x21f1 Mov
	var_220_int = var_15_int; // 0x21f2 Mov
	var_221_int = var_16_int; // 0x21f3 Mov
	func_8781(var_218_int, var_219_int, var_220_int, var_221_int); // 0x21f4 NEW_2
	var_2_bool = 1; // 0x21f6 MovB
	return 12; // 0x21f7 Return
	
Label_8696:
	var_2_bool = 0; // 0x21f8 MovB
	return 12; // 0x21f9 Return
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


func_11723(var_5623_bool)
{
	var_5626_int = 0; var_5627_string = ""; // 0x2dcc PushV
	var_5627_string = "d2EvaVisit"; // 0x2dcd MovS
	func_138(var_5626_int, var_5627_string); // 0x2dce NEW_2
	var_5628_int = 0; // 0x2dd0 PushI
	var_5629_bool = var_5626_int != var_5628_int; // 0x2dd1 Neq
	if(var_5629_bool == 0) goto Label_11733; // 0x2dd2 JumpB
	var_5623_bool = 1; // 0x2dd3 MovB
	return 0; // 0x2dd4 Return
	
Label_11733:
	var_5623_bool = 0; // 0x2dd5 MovB
	return 0; // 0x2dd6 Return
}


func_9675(var_5835_int, var_5836_float)
{
	var_5837_int = 0; var_5838_int = 0; var_5839_int = 0; var_5840_float = 0; // 0x25cc PushV
	var_5838_int = 534163; // 0x25cd MovI
	var_5839_int = 534162; // 0x25ce MovI
	var_5840_float = var_5836_float; // 0x25cf Mov
	func_12239(var_5837_int, var_5838_int, var_5839_int, var_5840_float); // 0x25d0 NEW_2
	var_5835_int = var_5837_int; // 0x25d1 Mov
	return 0; // 0x25d3 Return
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


func_9684(var_5577_int, var_5578_float)
{
	var_5579_int = 0; var_5580_int = 0; var_5581_int = 0; var_5582_float = 0; // 0x25d5 PushV
	var_5580_int = 530570; // 0x25d6 MovI
	var_5581_int = 530569; // 0x25d7 MovI
	var_5582_float = var_5578_float; // 0x25d8 Mov
	func_12239(var_5579_int, var_5580_int, var_5581_int, var_5582_float); // 0x25d9 NEW_2
	var_5577_int = var_5579_int; // 0x25da Mov
	return 0; // 0x25dc Return
}


func_5590(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object)
{
	var_3751_int = 0; // 0x15d7 PushI
	var_3752_bool = var_3746_int == var_3751_int; // 0x15d8 Eq
	if(var_3752_bool == 0) goto Label_5630; // 0x15d9 JumpB
	var_3753_int = 0; var_3754_bool = 0; // 0x15da PushV
	var_3753_int = 5; // 0x15db MovI
	var_3754_bool = 0; // 0x15dc MovB
	func_802(var_3753_int, var_3754_bool); // 0x15dd NEW_2
	var_3755_int = 0; var_3756_bool = 0; var_3757_int = 0; // 0x15df PushV
	var_3755_int = 5; // 0x15e0 MovI
	var_3756_bool = 0; // 0x15e1 MovB
	var_3757_int = 1; // 0x15e2 MovI
	func_819(var_3755_int, var_3756_bool, var_3757_int); // 0x15e3 NEW_2
	var_3758_int = 0; var_3759_int = 0; var_3760_object = Obj(); var_3761_object = Obj(); var_3762_object = Obj(); // 0x15e5 PushV
	var_3758_int = 5; // 0x15e6 MovI
	var_3759_int = var_3745_int; // 0x15e7 Mov
	var_3760_object = var_3747_object; // 0x15e8 Mov
	var_3761_object = var_3748_object; // 0x15e9 Mov
	var_3762_object = var_3749_object; // 0x15ea Mov
	func_726(var_3758_int, var_3759_int, var_3760_object, var_3761_object, var_3762_object); // 0x15eb NEW_2
	var_3763_object = Obj(); var_3764_int = 0; // 0x15ed PushV
	var_3763_object = var_3750_object; // 0x15ee Mov
	var_3764_int = 2; // 0x15ef MovI
	func_311(var_3764_int); // 0x15f0 NEW_2
	var_3765_int = 0; var_3766_bool = 0; var_3767_int = 0; // 0x15f2 PushV
	var_3765_int = 5; // 0x15f3 MovI
	var_3766_bool = 0; // 0x15f4 MovB
	var_3767_int = 4; // 0x15f5 MovI
	func_876(var_3765_int, var_3766_bool, var_3767_int); // 0x15f6 NEW_2
	var_3768_int = 0; var_3769_bool = 0; var_3770_int = 0; // 0x15f8 PushV
	var_3768_int = 5; // 0x15f9 MovI
	var_3769_bool = 1; // 0x15fa MovB
	var_3770_int = 4; // 0x15fb MovI
	func_938(var_3768_int, var_3769_bool, var_3770_int); // 0x15fc NEW_2
	
Label_5630:
	var_3771_int = 0; var_3772_bool = 0; // 0x15fe PushV
	var_3771_int = 5; // 0x15ff MovI
	var_3772_bool = 0; // 0x1600 MovB
	func_785(var_3771_int, var_3772_bool); // 0x1601 NEW_2
	var_3773_int = 0; var_3774_int = 0; var_3775_int = 0; // 0x1603 PushV
	var_3773_int = 5; // 0x1604 MovI
	var_3774_int = var_3745_int; // 0x1605 Mov
	var_3775_int = var_3746_int; // 0x1606 Mov
	func_3853(var_3773_int, var_3774_int, var_3775_int); // 0x1607 NEW_2
	return 0; // 0x1609 Return
}


func_11735(var_5607_bool)
{
	var_5610_int = 0; var_5611_string = ""; // 0x2dd8 PushV
	var_5611_string = "d2LaraVisit"; // 0x2dd9 MovS
	func_138(var_5610_int, var_5611_string); // 0x2dda NEW_2
	var_5612_int = 0; // 0x2ddc PushI
	var_5613_bool = var_5610_int != var_5612_int; // 0x2ddd Neq
	if(var_5613_bool == 0) goto Label_11745; // 0x2dde JumpB
	var_5607_bool = 1; // 0x2ddf MovB
	return 0; // 0x2de0 Return
	
Label_11745:
	var_5607_bool = 0; // 0x2de1 MovB
	return 0; // 0x2de2 Return
}


func_9693(var_5462_int, var_5463_float)
{
	var_5464_int = 0; var_5465_int = 0; var_5466_int = 0; var_5467_float = 0; // 0x25de PushV
	var_5465_int = 515484; // 0x25df MovI
	var_5466_int = 515483; // 0x25e0 MovI
	var_5467_float = var_5463_float; // 0x25e1 Mov
	func_12239(var_5464_int, var_5465_int, var_5466_int, var_5467_float); // 0x25e2 NEW_2
	var_5462_int = var_5464_int; // 0x25e3 Mov
	return 0; // 0x25e5 Return
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


func_11747(var_5639_bool)
{
	var_5642_int = 0; var_5643_string = ""; // 0x2de4 PushV
	var_5643_string = "d4MladVladVisit"; // 0x2de5 MovS
	func_138(var_5642_int, var_5643_string); // 0x2de6 NEW_2
	var_5644_int = 0; // 0x2de8 PushI
	var_5645_bool = var_5642_int != var_5644_int; // 0x2de9 Neq
	if(var_5645_bool == 0) goto Label_11757; // 0x2dea JumpB
	var_5639_bool = 1; // 0x2deb MovB
	return 0; // 0x2dec Return
	
Label_11757:
	var_5639_bool = 0; // 0x2ded MovB
	return 0; // 0x2dee Return
}


func_10724()
{
	var_4655_object = Obj(); var_4656_object = Obj(); var_4657_object = Obj(); var_4658_object = Obj(); // 0x29e4 PushV
	var_4659_object = Obj(); // 0x29e5 PushV
	func_12247(var_4659_object); // 0x29e6 NEW_2
	var_4657_object = var_4659_object; // 0x29e7 Mov
	var_4660_string = "d2q01AlexandrGotoAnna"; // 0x29e9 PushS
	FindMark(var_4658_object, var_4660_string); // 0x29ea ObjFunc
	var_4661_object = var_4658_object; // 0x29ec Push
	if(var_4661_object == 0) goto Label_10736; // 0x29ed JumpB
	Remove(); // 0x29ee ObjFunc
	
Label_10736:
	var_4662_string = "d2q01AlexandrGotoBigVlad"; // 0x29f0 PushS
	FindMark(var_4658_object, var_4662_string); // 0x29f1 ObjFunc
	var_4663_object = var_4658_object; // 0x29f3 Push
	if(var_4663_object == 0) goto Label_10743; // 0x29f4 JumpB
	Remove(); // 0x29f5 ObjFunc
	
Label_10743:
	var_4664_string = "d2q01AlexandrGotoGeorg"; // 0x29f7 PushS
	FindMark(var_4658_object, var_4664_string); // 0x29f8 ObjFunc
	var_4665_object = var_4658_object; // 0x29fa Push
	if(var_4665_object == 0) goto Label_10750; // 0x29fb JumpB
	Remove(); // 0x29fc ObjFunc
	
Label_10750:
	var_4666_string = "d2q01AnnaGotoKapella"; // 0x29fe PushS
	FindMark(var_4658_object, var_4666_string); // 0x29ff ObjFunc
	var_4667_object = var_4658_object; // 0x2a01 Push
	if(var_4667_object == 0) goto Label_10757; // 0x2a02 JumpB
	Remove(); // 0x2a03 ObjFunc
	
Label_10757:
	var_4668_string = "d2q01KapellaGotoSpi4ka"; // 0x2a05 PushS
	FindMark(var_4658_object, var_4668_string); // 0x2a06 ObjFunc
	var_4669_object = var_4658_object; // 0x2a08 Push
	if(var_4669_object == 0) goto Label_10764; // 0x2a09 JumpB
	Remove(); // 0x2a0a ObjFunc
	
Label_10764:
	var_4670_string = "d2q01WomanDGotoAlexandr"; // 0x2a0c PushS
	FindMark(var_4658_object, var_4670_string); // 0x2a0d ObjFunc
	var_4671_object = var_4658_object; // 0x2a0f Push
	if(var_4671_object == 0) goto Label_10771; // 0x2a10 JumpB
	Remove(); // 0x2a11 ObjFunc
	
Label_10771:
	var_4672_string = "d2q02AndreiGotoGrif"; // 0x2a13 PushS
	FindMark(var_4658_object, var_4672_string); // 0x2a14 ObjFunc
	var_4673_object = var_4658_object; // 0x2a16 Push
	if(var_4673_object == 0) goto Label_10778; // 0x2a17 JumpB
	Remove(); // 0x2a18 ObjFunc
	
Label_10778:
	var_4674_string = "d2q02AndreiGotoPetr"; // 0x2a1a PushS
	FindMark(var_4658_object, var_4674_string); // 0x2a1b ObjFunc
	var_4675_object = var_4658_object; // 0x2a1d Push
	if(var_4675_object == 0) goto Label_10785; // 0x2a1e JumpB
	Remove(); // 0x2a1f ObjFunc
	
Label_10785:
	var_4676_string = "d2q02EvaGotoAndrei"; // 0x2a21 PushS
	FindMark(var_4658_object, var_4676_string); // 0x2a22 ObjFunc
	var_4677_object = var_4658_object; // 0x2a24 Push
	if(var_4677_object == 0) goto Label_10792; // 0x2a25 JumpB
	Remove(); // 0x2a26 ObjFunc
	
Label_10792:
	var_4678_string = "d2q02EvaGotoMaria"; // 0x2a28 PushS
	FindMark(var_4658_object, var_4678_string); // 0x2a29 ObjFunc
	var_4679_object = var_4658_object; // 0x2a2b Push
	if(var_4679_object == 0) goto Label_10799; // 0x2a2c JumpB
	Remove(); // 0x2a2d ObjFunc
	
Label_10799:
	var_4680_string = "d2q02MariaGotoPetr"; // 0x2a2f PushS
	FindMark(var_4658_object, var_4680_string); // 0x2a30 ObjFunc
	var_4681_object = var_4658_object; // 0x2a32 Push
	if(var_4681_object == 0) goto Label_10806; // 0x2a33 JumpB
	Remove(); // 0x2a34 ObjFunc
	
Label_10806:
	var_4682_string = "d2q02PetrGotoAndrei"; // 0x2a36 PushS
	FindMark(var_4658_object, var_4682_string); // 0x2a37 ObjFunc
	var_4683_object = var_4658_object; // 0x2a39 Push
	if(var_4683_object == 0) goto Label_10813; // 0x2a3a JumpB
	Remove(); // 0x2a3b ObjFunc
	
Label_10813:
	var_4684_string = "d2q03BirdmaskGotoLara"; // 0x2a3d PushS
	FindMark(var_4658_object, var_4684_string); // 0x2a3e ObjFunc
	var_4685_object = var_4658_object; // 0x2a40 Push
	if(var_4685_object == 0) goto Label_10820; // 0x2a41 JumpB
	Remove(); // 0x2a42 ObjFunc
	
Label_10820:
	var_4686_string = "d2q03LaraGotoJulia"; // 0x2a44 PushS
	FindMark(var_4658_object, var_4686_string); // 0x2a45 ObjFunc
	var_4687_object = var_4658_object; // 0x2a47 Push
	if(var_4687_object == 0) goto Label_10827; // 0x2a48 JumpB
	Remove(); // 0x2a49 ObjFunc
	
Label_10827:
	var_4688_string = "d2q03LaraGotoMaria"; // 0x2a4b PushS
	FindMark(var_4658_object, var_4688_string); // 0x2a4c ObjFunc
	var_4689_object = var_4658_object; // 0x2a4e Push
	if(var_4689_object == 0) goto Label_10834; // 0x2a4f JumpB
	Remove(); // 0x2a50 ObjFunc
	
Label_10834:
	var_4690_string = "d2q03LaraGotoMladVlad"; // 0x2a52 PushS
	FindMark(var_4658_object, var_4690_string); // 0x2a53 ObjFunc
	var_4691_object = var_4658_object; // 0x2a55 Push
	if(var_4691_object == 0) goto Label_10841; // 0x2a56 JumpB
	Remove(); // 0x2a57 ObjFunc
	
Label_10841:
	var_4692_string = "d2q03LaraGotoMoneyFoodSelf"; // 0x2a59 PushS
	FindMark(var_4658_object, var_4692_string); // 0x2a5a ObjFunc
	var_4693_object = var_4658_object; // 0x2a5c Push
	if(var_4693_object == 0) goto Label_10848; // 0x2a5d JumpB
	Remove(); // 0x2a5e ObjFunc
	
Label_10848:
	var_4694_string = "d2q03LaraGotoSklad"; // 0x2a60 PushS
	FindMark(var_4658_object, var_4694_string); // 0x2a61 ObjFunc
	var_4695_object = var_4658_object; // 0x2a63 Push
	if(var_4695_object == 0) goto Label_10855; // 0x2a64 JumpB
	Remove(); // 0x2a65 ObjFunc
	
Label_10855:
	var_4696_bool = 0; var_4697_int = 0; // 0x2a67 PushV
	var_4697_int = 10; // 0x2a68 MovI
	func_12222(var_4696_bool, var_4697_int); // 0x2a69 NEW_2
	var_4698_bool = 0; var_4699_int = 0; // 0x2a6b PushV
	var_4699_int = 11; // 0x2a6c MovI
	func_12222(var_4698_bool, var_4699_int); // 0x2a6d NEW_2
	var_4700_bool = 0; var_4701_int = 0; // 0x2a6f PushV
	var_4701_int = 12; // 0x2a70 MovI
	func_12222(var_4700_bool, var_4701_int); // 0x2a71 NEW_2
	return 4; // 0x2a73 Return
}


func_9702(var_5791_int, var_5792_float)
{
	var_5793_int = 0; var_5794_int = 0; var_5795_int = 0; var_5796_float = 0; // 0x25e7 PushV
	var_5794_int = 522214; // 0x25e8 MovI
	var_5795_int = 522213; // 0x25e9 MovI
	var_5796_float = var_5792_float; // 0x25ea Mov
	func_12239(var_5793_int, var_5794_int, var_5795_int, var_5796_float); // 0x25eb NEW_2
	var_5791_int = var_5793_int; // 0x25ec Mov
	return 0; // 0x25ee Return
}


func_6637(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object)
{
	var_4036_int = 0; // 0x19ee PushI
	var_4037_bool = var_4031_int == var_4036_int; // 0x19ef Eq
	if(var_4037_bool == 0) goto Label_6677; // 0x19f0 JumpB
	var_4038_int = 0; var_4039_bool = 0; // 0x19f1 PushV
	var_4038_int = 11; // 0x19f2 MovI
	var_4039_bool = 1; // 0x19f3 MovB
	func_802(var_4038_int, var_4039_bool); // 0x19f4 NEW_2
	var_4040_int = 0; var_4041_bool = 0; var_4042_int = 0; // 0x19f6 PushV
	var_4040_int = 11; // 0x19f7 MovI
	var_4041_bool = 0; // 0x19f8 MovB
	var_4042_int = 1; // 0x19f9 MovI
	func_819(var_4040_int, var_4041_bool, var_4042_int); // 0x19fa NEW_2
	var_4043_int = 0; var_4044_int = 0; var_4045_object = Obj(); var_4046_object = Obj(); var_4047_object = Obj(); // 0x19fc PushV
	var_4043_int = 11; // 0x19fd MovI
	var_4044_int = var_4030_int; // 0x19fe Mov
	var_4045_object = var_4032_object; // 0x19ff Mov
	var_4046_object = var_4033_object; // 0x1a00 Mov
	var_4047_object = var_4034_object; // 0x1a01 Mov
	func_726(var_4043_int, var_4044_int, var_4045_object, var_4046_object, var_4047_object); // 0x1a02 NEW_2
	var_4048_object = Obj(); var_4049_int = 0; // 0x1a04 PushV
	var_4048_object = var_4035_object; // 0x1a05 Mov
	var_4049_int = 2; // 0x1a06 MovI
	func_311(var_4049_int); // 0x1a07 NEW_2
	var_4050_int = 0; var_4051_bool = 0; var_4052_int = 0; // 0x1a09 PushV
	var_4050_int = 11; // 0x1a0a MovI
	var_4051_bool = 0; // 0x1a0b MovB
	var_4052_int = 5; // 0x1a0c MovI
	func_876(var_4050_int, var_4051_bool, var_4052_int); // 0x1a0d NEW_2
	var_4053_int = 0; var_4054_bool = 0; var_4055_int = 0; // 0x1a0f PushV
	var_4053_int = 11; // 0x1a10 MovI
	var_4054_bool = 1; // 0x1a11 MovB
	var_4055_int = 5; // 0x1a12 MovI
	func_938(var_4053_int, var_4054_bool, var_4055_int); // 0x1a13 NEW_2
	
Label_6677:
	var_4056_int = 0; var_4057_bool = 0; // 0x1a15 PushV
	var_4056_int = 11; // 0x1a16 MovI
	var_4057_bool = 0; // 0x1a17 MovB
	func_785(var_4056_int, var_4057_bool); // 0x1a18 NEW_2
	var_4058_int = 0; var_4059_int = 0; var_4060_int = 0; // 0x1a1a PushV
	var_4058_int = 11; // 0x1a1b MovI
	var_4059_int = var_4030_int; // 0x1a1c Mov
	var_4060_int = var_4031_int; // 0x1a1d Mov
	func_3665(var_4058_int, var_4059_int, var_4060_int); // 0x1a1e NEW_2
	return 0; // 0x1a20 Return
}


func_4590(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object)
{
	var_892_int = 0; // 0x11ef PushI
	var_893_bool = var_887_int == var_892_int; // 0x11f0 Eq
	if(var_893_bool == 0) goto Label_4630; // 0x11f1 JumpB
	var_894_int = 0; var_895_bool = 0; // 0x11f2 PushV
	var_894_int = 1; // 0x11f3 MovI
	var_895_bool = 0; // 0x11f4 MovB
	func_802(var_894_int, var_895_bool); // 0x11f5 NEW_2
	var_896_int = 0; var_897_bool = 0; var_898_int = 0; // 0x11f7 PushV
	var_896_int = 1; // 0x11f8 MovI
	var_897_bool = 0; // 0x11f9 MovB
	var_898_int = 1; // 0x11fa MovI
	func_819(var_896_int, var_897_bool, var_898_int); // 0x11fb NEW_2
	var_899_int = 0; var_900_int = 0; var_901_object = Obj(); var_902_object = Obj(); var_903_object = Obj(); // 0x11fd PushV
	var_899_int = 1; // 0x11fe MovI
	var_900_int = var_886_int; // 0x11ff Mov
	var_901_object = var_888_object; // 0x1200 Mov
	var_902_object = var_889_object; // 0x1201 Mov
	var_903_object = var_890_object; // 0x1202 Mov
	func_628(var_900_int, var_901_object, var_902_object, var_903_object); // 0x1203 NEW_2
	var_904_object = Obj(); var_905_int = 0; // 0x1205 PushV
	var_904_object = var_891_object; // 0x1206 Mov
	var_905_int = 0; // 0x1207 MovI
	func_311(var_905_int); // 0x1208 NEW_2
	var_906_int = 0; var_907_bool = 0; var_908_int = 0; // 0x120a PushV
	var_906_int = 1; // 0x120b MovI
	var_907_bool = 0; // 0x120c MovB
	var_908_int = 8; // 0x120d MovI
	func_876(var_906_int, var_907_bool, var_908_int); // 0x120e NEW_2
	var_909_int = 0; var_910_bool = 0; var_911_int = 0; // 0x1210 PushV
	var_909_int = 1; // 0x1211 MovI
	var_910_bool = 0; // 0x1212 MovB
	var_911_int = 8; // 0x1213 MovI
	func_938(var_909_int, var_910_bool, var_911_int); // 0x1214 NEW_2
	
Label_4630:
	var_912_int = 0; var_913_int = 0; // 0x1216 PushV
	var_912_int = 1; // 0x1217 MovI
	var_913_int = var_887_int; // 0x1218 Mov
	func_1056(var_912_int, var_913_int); // 0x1219 NEW_2
	var_914_int = 0; var_915_int = 0; var_916_int = 0; // 0x121b PushV
	var_914_int = 1; // 0x121c MovI
	var_915_int = var_886_int; // 0x121d Mov
	var_916_int = var_887_int; // 0x121e Mov
	func_2389(var_914_int, var_915_int, var_916_int); // 0x121f NEW_2
	return 0; // 0x1221 Return
}


func_9711(var_5236_int, var_5237_float)
{
	var_5238_int = 0; var_5239_int = 0; var_5240_int = 0; var_5241_float = 0; // 0x25f0 PushV
	var_5239_int = 514529; // 0x25f1 MovI
	var_5240_int = 514528; // 0x25f2 MovI
	var_5241_float = var_5237_float; // 0x25f3 Mov
	func_12239(var_5238_int, var_5239_int, var_5240_int, var_5241_float); // 0x25f4 NEW_2
	var_5236_int = var_5238_int; // 0x25f5 Mov
	return 0; // 0x25f7 Return
}


func_496(var_487_int)
{
	var_488_object = Obj(); var_489_object = Obj(); // 0x1f0 PushV
	GetMainOutdoorScene(var_489_object); // 0x1f1 Func
	var_490_bool = var_489_object == 0; // 0x1f3 NullEq
	if(var_490_bool == 0) goto Label_505; // 0x1f4 JumpB
	var_491_string = "City manager: main outdoor scene not found"; // 0x1f5 PushS
	Trace(var_491_string); // 0x1f6 Func
	return 2; // 0x1f8 Return
	
Label_505:
	RemoveAllRegionActors(var_487_int); // 0x1f9 ObjFunc
	return 2; // 0x1fb Return
}


func_11759(var_5655_bool)
{
	var_5658_int = 0; var_5659_string = ""; // 0x2df0 PushV
	var_5659_string = "d4AlexandrVisit"; // 0x2df1 MovS
	func_138(var_5658_int, var_5659_string); // 0x2df2 NEW_2
	var_5660_int = 0; // 0x2df4 PushI
	var_5661_bool = var_5658_int != var_5660_int; // 0x2df5 Neq
	if(var_5661_bool == 0) goto Label_11769; // 0x2df6 JumpB
	var_5655_bool = 1; // 0x2df7 MovB
	return 0; // 0x2df8 Return
	
Label_11769:
	var_5655_bool = 0; // 0x2df9 MovB
	return 0; // 0x2dfa Return
}


func_9720(var_5214_int, var_5215_float)
{
	var_5216_int = 0; var_5217_int = 0; var_5218_int = 0; var_5219_float = 0; // 0x25f9 PushV
	var_5217_int = 514531; // 0x25fa MovI
	var_5218_int = 514530; // 0x25fb MovI
	var_5219_float = var_5215_float; // 0x25fc Mov
	func_12239(var_5216_int, var_5217_int, var_5218_int, var_5219_float); // 0x25fd NEW_2
	var_5214_int = var_5216_int; // 0x25fe Mov
	return 0; // 0x2600 Return
}


func_8698()
{
	var_417_float = 0; var_418_int = 0; var_419_int = 0; var_420_float = 0; var_421_int = 0; var_422_object = Obj(); var_423_object = Obj(); var_424_float = 0; var_425_int = 0; var_426_int = 0; var_427_float = 0; var_428_int = 0; var_429_object = Obj(); var_430_object = Obj(); // 0x21fa PushV
	GetGameTime(var_424_float); // 0x21fb Func
	var_425_int = 1; // 0x21fd MovI
	
Label_8702:
	var_431_int = 12; // 0x21fe PushI
	var_432_bool = var_425_int < var_431_int; // 0x21ff LT
	if(var_432_bool == 0) goto Label_8714; // 0x2200 JumpB
	var_433_int = 16384; // 0x2201 PushI
	var_434_int = var_433_int + var_425_int; // 0x2202 Add
	var_435_int = 24; // 0x2203 PushI
	var_436_float = var_435_int * var_425_int; // 0x2204 Mult
	SetTimeEvent(var_434_int, var_436_float); // 0x2205 Func
	var_437_int = 1; // 0x2207 PushI
	var_425_int = var_425_int + var_437_int; // 0x2208 Add2
	goto Label_8702; // 0x2209 Jump
	
Label_8714:
	var_426_int = 0; // 0x220a MovI
	
Label_8715:
	var_438_int = 288; // 0x220b PushI
	var_439_bool = var_426_int < var_438_int; // 0x220c LT
	if(var_439_bool == 0) goto Label_8729; // 0x220d JumpB
	var_427_float = var_426_int; // 0x220e Mov
	var_440_bool = var_427_float < var_424_float; // 0x220f LT
	if(var_440_bool == 0) goto Label_8722; // 0x2210 JumpB
	goto Label_8726; // 0x2211 Jump
	
Label_8726:
	var_441_int = 1; // 0x2216 PushI
	var_426_int = var_426_int + var_441_int; // 0x2217 Add2
	goto Label_8715; // 0x2218 Jump
	
Label_8722:
	var_442_int = 32768; // 0x2212 PushI
	var_443_int = var_442_int + var_426_int; // 0x2213 Add
	SetTimeEvent(var_443_int, var_427_float); // 0x2214 Func
	
Label_8729:
	var_428_int = 0; // 0x2219 MovI
	
Label_8730:
	var_444_int = 16; // 0x221a PushI
	var_445_bool = var_428_int < var_444_int; // 0x221b LT
	if(var_445_bool == 0) goto Label_8748; // 0x221c JumpB
	var_446_string = ""; var_447_int = 0; // 0x221d PushV
	var_447_int = var_428_int; // 0x221e Mov
	func_305(var_446_string, var_447_int); // 0x221f NEW_2
	var_451_int = 0; // 0x2221 PushI
	SetVariable(var_446_string, var_451_int); // 0x2222 Func
	var_452_int = 0; var_453_bool = 0; // 0x2224 PushV
	var_452_int = var_428_int; // 0x2225 Mov
	var_453_bool = 0; // 0x2226 MovB
	func_802(var_452_int, var_453_bool); // 0x2227 NEW_2
	var_463_int = 1; // 0x2229 PushI
	var_428_int = var_428_int + var_463_int; // 0x222a Add2
	goto Label_8730; // 0x222b Jump
	
Label_8748:
	var_464_int = 0; var_465_int = 0; var_466_int = 0; var_467_int = 0; // 0x222c PushV
	var_464_int = 0; // 0x222d MovI
	var_468_int = 24; // 0x222e PushI
	var_465_int = var_424_float % var_468_int; // 0x222f Mod2
	var_466_int = 0; // 0x2230 MovI
	var_469_int = 24; // 0x2231 PushI
	var_467_int = var_424_float % var_469_int; // 0x2232 Mod2
	func_8781(var_464_int, var_465_int, var_466_int, var_467_int); // 0x2233 NEW_2
	var_4388_string = "dt_house_1_07"; // 0x2235 PushS
	FindActor(var_429_object, var_4388_string); // 0x2236 Func
	var_4389_int = 200; // 0x2238 PushI
	var_4390_bool = 0; // 0x2239 PushB
	EnableSubset(var_4389_int, var_4390_bool); // 0x223a ObjFunc
	GetMainOutdoorScene(var_430_object); // 0x223c Func
	var_4391_int = 0; // 0x223e PushI
	var_4392_bool = 0; // 0x223f PushV
	var_4392_bool = 1; // 0x2240 MovB
	var_4393_int = 7; // 0x2241 PushI
	var_4394_bool = var_424_float < var_4393_int; // 0x2242 LT
	if(var_4394_bool == 0) goto Label_8776; // 0x2243 JumpB
	var_4395_int = 20; // 0x2244 PushI
	var_4396_bool = var_424_float >= var_4395_int; // 0x2245 GE
	if(var_4396_bool == 0) goto Label_8776; // 0x2246 JumpB
	var_4392_bool = 0; // 0x2247 MovB
	
Label_8776:
	SwitchLights(var_4391_int, var_4392_bool); // 0x2248 ObjFunc
	return 14; // 0x224a Return
}


func_11771(var_5671_bool)
{
	var_5674_int = 0; var_5675_string = ""; // 0x2dfc PushV
	var_5675_string = "d5AnnaVisit"; // 0x2dfd MovS
	func_138(var_5674_int, var_5675_string); // 0x2dfe NEW_2
	var_5676_int = 0; // 0x2e00 PushI
	var_5677_bool = var_5674_int != var_5676_int; // 0x2e01 Neq
	if(var_5677_bool == 0) goto Label_11781; // 0x2e02 JumpB
	var_5671_bool = 1; // 0x2e03 MovB
	return 0; // 0x2e04 Return
	
Label_11781:
	var_5671_bool = 0; // 0x2e05 MovB
	return 0; // 0x2e06 Return
}


func_509(var_783_int, var_784_string, var_785_string, var_786_int)
{
	var_787_object = Obj(); var_788_object = Obj(); // 0x1fd PushV
	GetMainOutdoorScene(var_788_object); // 0x1fe Func
	var_789_bool = var_788_object == 0; // 0x200 NullEq
	if(var_789_bool == 0) goto Label_518; // 0x201 JumpB
	var_790_string = "City manager: Can't find main outdoor scene"; // 0x202 PushS
	Trace(var_790_string); // 0x203 Func
	return 2; // 0x205 Return
	
Label_518:
	SetRegionActorCount(var_783_int, var_784_string, var_785_string, var_786_int); // 0x206 ObjFunc
	return 2; // 0x208 Return
}


func_9729(var_6098_int, var_6099_float)
{
	var_6100_int = 0; var_6101_int = 0; var_6102_int = 0; var_6103_float = 0; // 0x2602 PushV
	var_6101_int = 538404; // 0x2603 MovI
	var_6102_int = 538403; // 0x2604 MovI
	var_6103_float = var_6099_float; // 0x2605 Mov
	func_12239(var_6100_int, var_6101_int, var_6102_int, var_6103_float); // 0x2606 NEW_2
	var_6098_int = var_6100_int; // 0x2607 Mov
	return 0; // 0x2609 Return
}


func_11783(var_5687_bool)
{
	var_5690_int = 0; var_5691_string = ""; // 0x2e08 PushV
	var_5691_string = "d8MladVladVisit"; // 0x2e09 MovS
	func_138(var_5690_int, var_5691_string); // 0x2e0a NEW_2
	var_5692_int = 0; // 0x2e0c PushI
	var_5693_bool = var_5690_int != var_5692_int; // 0x2e0d Neq
	if(var_5693_bool == 0) goto Label_11793; // 0x2e0e JumpB
	var_5687_bool = 1; // 0x2e0f MovB
	return 0; // 0x2e10 Return
	
Label_11793:
	var_5687_bool = 0; // 0x2e11 MovB
	return 0; // 0x2e12 Return
}


func_7688(var_379_int)
{
	var_380_int = 0; var_381_object = Obj(); var_382_object = Obj(); var_383_int = 0; var_384_object = Obj(); var_385_object = Obj(); // 0x1e08 PushV
	var_386_object = GlobalVars[14]; // 0x1e09 PushGE
	size(var_383_int); // 0x1e0a ObjFunc
	var_387_bool = 0; // 0x1e0c PushV
	var_387_bool = 1; // 0x1e0d MovB
	var_388_bool = var_379_int >= var_383_int; // 0x1e0e GE
	if(var_388_bool == 0) goto Label_7700; // 0x1e0f JumpB
	var_389_int = -1; // 0x1e10 PushI
	var_390_bool = var_379_int == var_389_int; // 0x1e11 Eq
	if(var_390_bool == 0) goto Label_7700; // 0x1e12 JumpB
	var_387_bool = 0; // 0x1e13 MovB
	
Label_7700:
	if(var_387_bool == 0) goto Label_7706; // 0x1e14 JumpB
	var_391_string = "Wrong bonfire index "; // 0x1e15 PushS
	var_392_int = var_391_string + var_379_int; // 0x1e16 Add
	Trace(var_392_int); // 0x1e17 Func
	return 6; // 0x1e19 Return
	
Label_7706:
	var_393_object = GlobalVars[14]; // 0x1e1a PushGE
	get(var_384_object, var_379_int); // 0x1e1b ObjFunc
	var_394_string = "bonfire_light"; // 0x1e1d PushS
	var_395_int = 1; // 0x1e1e PushI
	var_396_int = var_379_int + var_395_int; // 0x1e1f Add
	var_397_int = var_394_string + var_396_int; // 0x1e20 Add
	FindActor(var_385_object, var_397_int); // 0x1e21 Func
	var_398_bool = var_385_object == 0; // 0x1e23 Not
	if(var_398_bool == 0) goto Label_7726; // 0x1e24 JumpB
	var_399_string = "Bofire  light "; // 0x1e25 PushS
	var_400_int = 1; // 0x1e26 PushI
	var_401_int = var_379_int + var_400_int; // 0x1e27 Add
	var_402_int = var_399_string + var_401_int; // 0x1e28 Add
	var_403_string = " not found"; // 0x1e29 PushS
	var_404_int = var_402_int + var_403_string; // 0x1e2a Add
	Trace(var_404_int); // 0x1e2b Func
	goto Label_7729; // 0x1e2d Jump
	
Label_7729:
	var_405_object = var_384_object; // 0x1e31 Push
	if(var_405_object == 0) goto Label_7733; // 0x1e32 JumpB
	RemoveActor(var_384_object); // 0x1e33 Func
	
Label_7733:
	var_384_object = 0; // 0x1e35 SetNull
	var_406_object = GlobalVars[14]; // 0x1e36 PushGE
	set(var_379_int, var_384_object); // 0x1e37 ObjFunc
	var_407_string = "Cleanup bonfire "; // 0x1e39 PushS
	var_408_int = 1; // 0x1e3a PushI
	var_409_int = var_379_int + var_408_int; // 0x1e3b Add
	var_410_int = var_407_string + var_409_int; // 0x1e3c Add
	var_411_string = "... ok"; // 0x1e3d PushS
	var_412_int = var_410_int + var_411_string; // 0x1e3e Add
	Trace(var_412_int); // 0x1e3f Func
	return 6; // 0x1e41 Return
	
Label_7726:
	var_413_bool = 0; // 0x1e2e PushB
	Switch(var_413_bool); // 0x1e2f ObjFunc
}


func_522(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int)
{
	var_2221_object = Obj(); var_2222_object = Obj(); // 0x20a PushV
	GetMainOutdoorScene(var_2222_object); // 0x20b Func
	var_2223_bool = var_2222_object == 0; // 0x20d NullEq
	if(var_2223_bool == 0) goto Label_531; // 0x20e JumpB
	var_2224_string = "City manager: Can't find main outdoor scene"; // 0x20f PushS
	Trace(var_2224_string); // 0x210 Func
	return 2; // 0x212 Return
	
Label_531:
	SetRegionActorCount(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int); // 0x213 ObjFunc
	return 2; // 0x215 Return
}


func_5642()
{
	return 0; // 0x160b Return
}


func_9738(var_5588_int, var_5589_float)
{
	var_5590_int = 0; var_5591_int = 0; var_5592_int = 0; var_5593_float = 0; // 0x260b PushV
	var_5591_int = 530572; // 0x260c MovI
	var_5592_int = 530571; // 0x260d MovI
	var_5593_float = var_5589_float; // 0x260e Mov
	func_12239(var_5590_int, var_5591_int, var_5592_int, var_5593_float); // 0x260f NEW_2
	var_5588_int = var_5590_int; // 0x2610 Mov
	return 0; // 0x2612 Return
}


func_5644(var_1375_int)
{
	var_1380_int = 0; var_1381_int = 0; // 0x160d PushV
	var_1380_int = 6; // 0x160e MovI
	var_1381_int = var_1375_int; // 0x160f Mov
	func_1056(var_1380_int, var_1381_int); // 0x1610 NEW_2
	return 0; // 0x1612 Return
}


func_5651()
{
	var_2658_int = 0; var_2659_bool = 0; // 0x1614 PushV
	var_2658_int = 6; // 0x1615 MovI
	var_2659_bool = 0; // 0x1616 MovB
	func_785(var_2658_int, var_2659_bool); // 0x1617 NEW_2
	return 0; // 0x1619 Return
}


func_9747(var_5470_int, var_5471_float)
{
	var_5472_int = 0; var_5473_int = 0; var_5474_int = 0; var_5475_float = 0; // 0x2614 PushV
	var_5473_int = 515493; // 0x2615 MovI
	var_5474_int = 515492; // 0x2616 MovI
	var_5475_float = var_5471_float; // 0x2617 Mov
	func_12239(var_5472_int, var_5473_int, var_5474_int, var_5475_float); // 0x2618 NEW_2
	var_5470_int = var_5472_int; // 0x2619 Mov
	return 0; // 0x261b Return
}


func_11795(var_5994_bool)
{
	var_5997_int = 0; var_5998_string = ""; // 0x2e14 PushV
	var_5998_string = "d9q03"; // 0x2e15 MovS
	func_138(var_5997_int, var_5998_string); // 0x2e16 NEW_2
	var_5999_int = 1000; // 0x2e18 PushI
	var_6000_bool = var_5997_int == var_5999_int; // 0x2e19 Eq
	if(var_6000_bool == 0) goto Label_11805; // 0x2e1a JumpB
	var_5994_bool = 1; // 0x2e1b MovB
	return 0; // 0x2e1c Return
	
Label_11805:
	var_5994_bool = 0; // 0x2e1d MovB
	return 0; // 0x2e1e Return
}


func_535(var_2142_int, var_2143_string, var_2144_string, var_2145_int)
{
	var_2146_object = Obj(); var_2147_object = Obj(); // 0x217 PushV
	GetMainOutdoorScene(var_2147_object); // 0x218 Func
	var_2148_bool = var_2147_object == 0; // 0x21a NullEq
	if(var_2148_bool == 0) goto Label_544; // 0x21b JumpB
	var_2149_string = "City manager: Can't find main outdoor scene"; // 0x21c PushS
	Trace(var_2149_string); // 0x21d Func
	return 2; // 0x21f Return
	
Label_544:
	SetRegionActorCountByType(var_2142_int, var_2143_string, var_2144_string, var_2145_int); // 0x220 ObjFunc
	return 2; // 0x222 Return
}


func_5658()
{
	var_3784_int = 0; var_3785_bool = 0; // 0x161b PushV
	var_3784_int = 6; // 0x161c MovI
	var_3785_bool = 0; // 0x161d MovB
	func_785(var_3784_int, var_3785_bool); // 0x161e NEW_2
	return 0; // 0x1620 Return
}


func_9756(var_5851_int, var_5852_float)
{
	var_5853_int = 0; var_5854_int = 0; var_5855_int = 0; var_5856_float = 0; // 0x261d PushV
	var_5854_int = 535696; // 0x261e MovI
	var_5855_int = 535695; // 0x261f MovI
	var_5856_float = var_5852_float; // 0x2620 Mov
	func_12239(var_5853_int, var_5854_int, var_5855_int, var_5856_float); // 0x2621 NEW_2
	var_5851_int = var_5853_int; // 0x2622 Mov
	return 0; // 0x2624 Return
}


func_2590(var_3027_int, var_3028_int, var_3029_int)
{
	var_3030_int = 0; var_3031_int = 0; var_3032_int = 0; var_3033_int = 0; // 0xa1e PushV
	var_3034_bool = 0; // 0xa1f PushV
	var_3034_bool = 0; // 0xa20 MovB
	var_3035_int = 8; // 0xa21 PushI
	var_3036_bool = var_3029_int > var_3035_int; // 0xa22 GT
	if(var_3036_bool == 0) goto Label_2600; // 0xa23 JumpB
	var_3037_int = 21; // 0xa24 PushI
	var_3038_bool = var_3029_int < var_3037_int; // 0xa25 LT
	if(var_3038_bool == 0) goto Label_2600; // 0xa26 JumpB
	var_3034_bool = 1; // 0xa27 MovB
	
Label_2600:
	if(var_3034_bool == 0) goto Label_2655; // 0xa28 JumpB
	var_3039_int = 0; var_3040_string = ""; var_3041_string = ""; var_3042_int = 0; // 0xa29 PushV
	var_3039_int = var_3027_int; // 0xa2a Mov
	var_3040_string = "pers_vaxxabit"; // 0xa2b MovS
	var_3041_string = "vaxxabit_d.xml"; // 0xa2c MovS
	var_3042_int = 6; // 0xa2d MovI
	func_509(var_3039_int, var_3040_string, var_3041_string, var_3042_int); // 0xa2e NEW_2
	var_3043_int = 0; var_3044_string = ""; var_3045_string = ""; var_3046_int = 0; // 0xa30 PushV
	var_3043_int = var_3027_int; // 0xa31 Mov
	var_3044_string = "pers_vaxxabitka"; // 0xa32 MovS
	var_3045_string = "vaxxabitka_d.xml"; // 0xa33 MovS
	var_3046_int = 6; // 0xa34 MovI
	func_509(var_3043_int, var_3044_string, var_3045_string, var_3046_int); // 0xa35 NEW_2
	var_3047_int = 0; var_3048_string = ""; var_3049_string = ""; var_3050_int = 0; // 0xa37 PushV
	var_3047_int = var_3027_int; // 0xa38 Mov
	var_3048_string = "pers_rat_big"; // 0xa39 MovS
	var_3049_string = "rat_big.xml"; // 0xa3a MovS
	var_3050_int = 3; // 0xa3b MovI
	func_509(var_3047_int, var_3048_string, var_3049_string, var_3050_int); // 0xa3c NEW_2
	var_3051_int = 0; var_3052_string = ""; var_3053_string = ""; var_3054_int = 0; // 0xa3e PushV
	var_3051_int = var_3027_int; // 0xa3f Mov
	var_3052_string = "fog"; // 0xa40 MovS
	var_3053_string = "fog.xml"; // 0xa41 MovS
	var_3054_int = 8; // 0xa42 MovI
	func_535(var_3051_int, var_3052_string, var_3053_string, var_3054_int); // 0xa43 NEW_2
	var_3055_int = 5; // 0xa45 PushI
	var_3056_bool = var_3028_int >= var_3055_int; // 0xa46 GE
	if(var_3056_bool == 0) goto Label_2639; // 0xa47 JumpB
	var_3057_int = 0; var_3058_string = ""; var_3059_string = ""; var_3060_int = 0; // 0xa48 PushV
	var_3057_int = var_3027_int; // 0xa49 Mov
	var_3058_string = "fog"; // 0xa4a MovS
	var_3059_string = "fog_hunter.xml"; // 0xa4b MovS
	var_3060_int = 3; // 0xa4c MovI
	func_535(var_3057_int, var_3058_string, var_3059_string, var_3060_int); // 0xa4d NEW_2
	
Label_2639:
	var_3061_int = 1; // 0xa4f PushI
	var_3062_float = 0; var_3063_int = 0; // 0xa50 PushV
	var_3063_int = var_3028_int; // 0xa51 Mov
	func_1261(var_3062_float, var_3063_int); // 0xa52 NEW_2
	var_3032_int = var_3061_int * var_3062_float; // 0xa54 Mult2
	var_3064_int = var_3032_int; // 0xa55 Push
	if(var_3064_int == 0) goto Label_2654; // 0xa56 JumpB
	var_3065_int = 0; var_3066_string = ""; var_3067_string = ""; var_3068_int = 0; // 0xa57 PushV
	var_3065_int = var_3027_int; // 0xa58 Mov
	var_3066_string = "pers_bomber"; // 0xa59 MovS
	var_3067_string = "bomber.xml"; // 0xa5a MovS
	var_3068_int = var_3032_int; // 0xa5b Mov
	func_509(var_3065_int, var_3066_string, var_3067_string, var_3068_int); // 0xa5c NEW_2
	
Label_2654:
	goto Label_2708; // 0xa5e Jump
	
Label_2708:
	var_3069_int = 0; var_3070_string = ""; var_3071_string = ""; var_3072_int = 0; var_3073_int = 0; var_3074_int = 0; // 0xa94 PushV
	var_3069_int = var_3027_int; // 0xa95 Mov
	var_3070_string = "pers_worker"; // 0xa96 MovS
	var_3071_string = "agony1_man.xml"; // 0xa97 MovS
	var_3072_int = 2; // 0xa98 MovI
	var_3073_int = 4; // 0xa99 MovI
	var_3074_int = 4; // 0xa9a MovI
	func_522(var_3069_int, var_3070_string, var_3071_string, var_3072_int, var_3073_int, var_3074_int); // 0xa9b NEW_2
	var_3075_int = 0; var_3076_string = ""; var_3077_string = ""; var_3078_int = 0; var_3079_int = 0; var_3080_int = 0; // 0xa9d PushV
	var_3075_int = var_3027_int; // 0xa9e Mov
	var_3076_string = "pers_unosha"; // 0xa9f MovS
	var_3077_string = "agony1_man.xml"; // 0xaa0 MovS
	var_3078_int = 2; // 0xaa1 MovI
	var_3079_int = 4; // 0xaa2 MovI
	var_3080_int = 4; // 0xaa3 MovI
	func_522(var_3075_int, var_3076_string, var_3077_string, var_3078_int, var_3079_int, var_3080_int); // 0xaa4 NEW_2
	var_3081_int = 0; var_3082_string = ""; var_3083_string = ""; var_3084_int = 0; var_3085_int = 0; var_3086_int = 0; // 0xaa6 PushV
	var_3081_int = var_3027_int; // 0xaa7 Mov
	var_3082_string = "pers_woman"; // 0xaa8 MovS
	var_3083_string = "agony1_woman.xml"; // 0xaa9 MovS
	var_3084_int = 2; // 0xaaa MovI
	var_3085_int = 4; // 0xaab MovI
	var_3086_int = 4; // 0xaac MovI
	func_522(var_3081_int, var_3082_string, var_3083_string, var_3084_int, var_3085_int, var_3086_int); // 0xaad NEW_2
	var_3087_int = 0; var_3088_string = ""; var_3089_string = ""; var_3090_int = 0; var_3091_int = 0; var_3092_int = 0; // 0xaaf PushV
	var_3087_int = var_3027_int; // 0xab0 Mov
	var_3088_string = "pers_wasted_girl"; // 0xab1 MovS
	var_3089_string = "agony1_woman.xml"; // 0xab2 MovS
	var_3090_int = 2; // 0xab3 MovI
	var_3091_int = 4; // 0xab4 MovI
	var_3092_int = 4; // 0xab5 MovI
	func_522(var_3087_int, var_3088_string, var_3089_string, var_3090_int, var_3091_int, var_3092_int); // 0xab6 NEW_2
	var_3093_bool = 0; var_3094_int = 0; var_3095_int = 0; // 0xab8 PushV
	var_3094_int = var_3028_int; // 0xab9 Mov
	var_3095_int = var_3029_int; // 0xaba Mov
	func_1351(var_3093_bool, var_3094_int, var_3095_int); // 0xabb NEW_2
	if(var_3093_bool == 0) goto Label_2757; // 0xabd JumpB
	var_3096_int = 0; var_3097_string = ""; var_3098_string = ""; var_3099_int = 0; // 0xabe PushV
	var_3096_int = var_3027_int; // 0xabf Mov
	var_3097_string = "pers_soldat"; // 0xac0 MovS
	var_3098_string = "soldier_marauder.xml"; // 0xac1 MovS
	var_3099_int = 2; // 0xac2 MovI
	func_509(var_3096_int, var_3097_string, var_3098_string, var_3099_int); // 0xac3 NEW_2
	
Label_2757:
	var_3100_bool = 0; var_3101_int = 0; // 0xac5 PushV
	var_3101_int = var_3028_int; // 0xac6 Mov
	func_1378(var_3100_bool, var_3101_int); // 0xac7 NEW_2
	if(var_3100_bool == 0) goto Label_2769; // 0xac9 JumpB
	var_3102_int = 0; var_3103_string = ""; var_3104_string = ""; var_3105_int = 0; // 0xaca PushV
	var_3102_int = var_3027_int; // 0xacb Mov
	var_3103_string = "pers_sanitar"; // 0xacc MovS
	var_3104_string = "sanitar.xml"; // 0xacd MovS
	var_3105_int = 2; // 0xace MovI
	func_509(var_3102_int, var_3103_string, var_3104_string, var_3105_int); // 0xacf NEW_2
	
Label_2769:
	return 4; // 0xad1 Return
	
Label_2655:
	var_3106_int = 0; var_3107_string = ""; var_3108_string = ""; var_3109_int = 0; // 0xa5f PushV
	var_3106_int = var_3027_int; // 0xa60 Mov
	var_3107_string = "pers_vaxxabit"; // 0xa61 MovS
	var_3108_string = "vaxxabit_d.xml"; // 0xa62 MovS
	var_3109_int = 6; // 0xa63 MovI
	func_509(var_3106_int, var_3107_string, var_3108_string, var_3109_int); // 0xa64 NEW_2
	var_3110_int = 0; var_3111_string = ""; var_3112_string = ""; var_3113_int = 0; // 0xa66 PushV
	var_3110_int = var_3027_int; // 0xa67 Mov
	var_3111_string = "pers_vaxxabitka"; // 0xa68 MovS
	var_3112_string = "vaxxabitka_d.xml"; // 0xa69 MovS
	var_3113_int = 5; // 0xa6a MovI
	func_509(var_3110_int, var_3111_string, var_3112_string, var_3113_int); // 0xa6b NEW_2
	var_3114_int = 0; var_3115_string = ""; var_3116_string = ""; var_3117_int = 0; // 0xa6d PushV
	var_3114_int = var_3027_int; // 0xa6e Mov
	var_3115_string = "pers_rat_big"; // 0xa6f MovS
	var_3116_string = "rat_big.xml"; // 0xa70 MovS
	var_3117_int = 4; // 0xa71 MovI
	func_509(var_3114_int, var_3115_string, var_3116_string, var_3117_int); // 0xa72 NEW_2
	var_3118_int = 0; var_3119_string = ""; var_3120_string = ""; var_3121_int = 0; // 0xa74 PushV
	var_3118_int = var_3027_int; // 0xa75 Mov
	var_3119_string = "fog"; // 0xa76 MovS
	var_3120_string = "fog.xml"; // 0xa77 MovS
	var_3121_int = 6; // 0xa78 MovI
	func_535(var_3118_int, var_3119_string, var_3120_string, var_3121_int); // 0xa79 NEW_2
	var_3122_int = 5; // 0xa7b PushI
	var_3123_bool = var_3028_int >= var_3122_int; // 0xa7c GE
	if(var_3123_bool == 0) goto Label_2693; // 0xa7d JumpB
	var_3124_int = 0; var_3125_string = ""; var_3126_string = ""; var_3127_int = 0; // 0xa7e PushV
	var_3124_int = var_3027_int; // 0xa7f Mov
	var_3125_string = "fog"; // 0xa80 MovS
	var_3126_string = "fog_hunter.xml"; // 0xa81 MovS
	var_3127_int = 2; // 0xa82 MovI
	func_535(var_3124_int, var_3125_string, var_3126_string, var_3127_int); // 0xa83 NEW_2
	
Label_2693:
	var_3128_int = 1; // 0xa85 PushI
	var_3129_float = 0; var_3130_int = 0; // 0xa86 PushV
	var_3130_int = var_3028_int; // 0xa87 Mov
	func_1261(var_3129_float, var_3130_int); // 0xa88 NEW_2
	var_3033_int = var_3128_int * var_3129_float; // 0xa8a Mult2
	var_3131_int = var_3033_int; // 0xa8b Push
	if(var_3131_int == 0) goto Label_2708; // 0xa8c JumpB
	var_3132_int = 0; var_3133_string = ""; var_3134_string = ""; var_3135_int = 0; // 0xa8d PushV
	var_3132_int = var_3027_int; // 0xa8e Mov
	var_3133_string = "pers_bomber"; // 0xa8f MovS
	var_3134_string = "bomber.xml"; // 0xa90 MovS
	var_3135_int = var_3033_int; // 0xa91 Mov
	func_509(var_3132_int, var_3133_string, var_3134_string, var_3135_int); // 0xa92 NEW_2
}


func_11807(var_5799_bool)
{
	var_5802_int = 0; var_5803_string = ""; // 0x2e20 PushV
	var_5803_string = "d10KaterinaVisit"; // 0x2e21 MovS
	func_138(var_5802_int, var_5803_string); // 0x2e22 NEW_2
	var_5804_int = 0; // 0x2e24 PushI
	var_5805_bool = var_5802_int != var_5804_int; // 0x2e25 Neq
	if(var_5805_bool == 0) goto Label_11817; // 0x2e26 JumpB
	var_5799_bool = 1; // 0x2e27 MovB
	return 0; // 0x2e28 Return
	
Label_11817:
	var_5799_bool = 0; // 0x2e29 MovB
	return 0; // 0x2e2a Return
}


func_6689()
{
	var_266_string = "r6_house2_03"; // 0x1a22 PushS
	add(var_266_string); // 0x1a23 ObjFunc
	var_267_string = "r6_house4_01_i2"; // 0x1a25 PushS
	add(var_267_string); // 0x1a26 ObjFunc
	var_268_string = "r6_house4_02_i2"; // 0x1a28 PushS
	add(var_268_string); // 0x1a29 ObjFunc
	var_269_string = "r6_house4_02"; // 0x1a2b PushS
	add(var_269_string); // 0x1a2c ObjFunc
	var_270_string = "r6_house3_02_i2"; // 0x1a2e PushS
	add(var_270_string); // 0x1a2f ObjFunc
	var_271_string = "r6_house3_02"; // 0x1a31 PushS
	add(var_271_string); // 0x1a32 ObjFunc
	var_272_string = "r6_house3_01_i2"; // 0x1a34 PushS
	add(var_272_string); // 0x1a35 ObjFunc
	var_273_string = "r6_house3_01"; // 0x1a37 PushS
	add(var_273_string); // 0x1a38 ObjFunc
	var_274_string = "r6_house2_01"; // 0x1a3a PushS
	add(var_274_string); // 0x1a3b ObjFunc
	var_275_string = "r6_house7_01"; // 0x1a3d PushS
	add(var_275_string); // 0x1a3e ObjFunc
	var_276_string = "r6_house7_02"; // 0x1a40 PushS
	add(var_276_string); // 0x1a41 ObjFunc
	var_277_string = "r6_House6_01"; // 0x1a43 PushS
	add(var_277_string); // 0x1a44 ObjFunc
	var_278_string = "r6_house2_02"; // 0x1a46 PushS
	add(var_278_string); // 0x1a47 ObjFunc
	return 0; // 0x1a49 Return
}


func_4642(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object)
{
	var_2281_int = 0; // 0x1223 PushI
	var_2282_bool = var_2276_int == var_2281_int; // 0x1224 Eq
	if(var_2282_bool == 0) goto Label_4682; // 0x1225 JumpB
	var_2283_int = 0; var_2284_bool = 0; // 0x1226 PushV
	var_2283_int = 1; // 0x1227 MovI
	var_2284_bool = 1; // 0x1228 MovB
	func_802(var_2283_int, var_2284_bool); // 0x1229 NEW_2
	var_2285_int = 0; var_2286_bool = 0; var_2287_int = 0; // 0x122b PushV
	var_2285_int = 1; // 0x122c MovI
	var_2286_bool = 1; // 0x122d MovB
	var_2287_int = 1; // 0x122e MovI
	func_819(var_2285_int, var_2286_bool, var_2287_int); // 0x122f NEW_2
	var_2288_int = 0; var_2289_int = 0; var_2290_object = Obj(); var_2291_object = Obj(); var_2292_object = Obj(); // 0x1231 PushV
	var_2288_int = 1; // 0x1232 MovI
	var_2289_int = var_2275_int; // 0x1233 Mov
	var_2290_object = var_2277_object; // 0x1234 Mov
	var_2291_object = var_2278_object; // 0x1235 Mov
	var_2292_object = var_2279_object; // 0x1236 Mov
	func_647(var_2288_int, var_2289_int, var_2290_object, var_2291_object, var_2292_object); // 0x1237 NEW_2
	var_2293_object = Obj(); var_2294_int = 0; // 0x1239 PushV
	var_2293_object = var_2280_object; // 0x123a Mov
	var_2294_int = 1; // 0x123b MovI
	func_311(var_2294_int); // 0x123c NEW_2
	var_2295_int = 0; var_2296_bool = 0; var_2297_int = 0; // 0x123e PushV
	var_2295_int = 1; // 0x123f MovI
	var_2296_bool = 1; // 0x1240 MovB
	var_2297_int = 8; // 0x1241 MovI
	func_876(var_2295_int, var_2296_bool, var_2297_int); // 0x1242 NEW_2
	var_2298_int = 0; var_2299_bool = 0; var_2300_int = 0; // 0x1244 PushV
	var_2298_int = 1; // 0x1245 MovI
	var_2299_bool = 0; // 0x1246 MovB
	var_2300_int = 8; // 0x1247 MovI
	func_938(var_2298_int, var_2299_bool, var_2300_int); // 0x1248 NEW_2
	
Label_4682:
	var_2301_int = 0; var_2302_bool = 0; // 0x124a PushV
	var_2301_int = 1; // 0x124b MovI
	var_2302_bool = 0; // 0x124c MovB
	func_785(var_2301_int, var_2302_bool); // 0x124d NEW_2
	var_2303_int = 0; var_2304_int = 0; var_2305_int = 0; // 0x124f PushV
	var_2303_int = 1; // 0x1250 MovI
	var_2304_int = var_2275_int; // 0x1251 Mov
	var_2305_int = var_2276_int; // 0x1252 Mov
	func_3310(var_2303_int, var_2304_int, var_2305_int); // 0x1253 NEW_2
	return 0; // 0x1255 Return
}


func_5665()
{
	var_178_string = "House6_02"; // 0x1622 PushS
	add(var_178_string); // 0x1623 ObjFunc
	var_179_string = "House6_01"; // 0x1625 PushS
	add(var_179_string); // 0x1626 ObjFunc
	var_180_string = "house_2_01"; // 0x1628 PushS
	add(var_180_string); // 0x1629 ObjFunc
	var_181_string = "house7_03"; // 0x162b PushS
	add(var_181_string); // 0x162c ObjFunc
	var_182_string = "house7_02"; // 0x162e PushS
	add(var_182_string); // 0x162f ObjFunc
	var_183_string = "house3_01_i2"; // 0x1631 PushS
	add(var_183_string); // 0x1632 ObjFunc
	var_184_string = "house3_01"; // 0x1634 PushS
	add(var_184_string); // 0x1635 ObjFunc
	var_185_string = "house_2_03"; // 0x1637 PushS
	add(var_185_string); // 0x1638 ObjFunc
	var_186_string = "house_2_02"; // 0x163a PushS
	add(var_186_string); // 0x163b ObjFunc
	var_187_string = "house4_01_i2"; // 0x163d PushS
	add(var_187_string); // 0x163e ObjFunc
	var_188_string = "house4_01"; // 0x1640 PushS
	add(var_188_string); // 0x1641 ObjFunc
	var_189_string = "House6_05"; // 0x1643 PushS
	add(var_189_string); // 0x1644 ObjFunc
	var_190_string = "House6_04"; // 0x1646 PushS
	add(var_190_string); // 0x1647 ObjFunc
	var_191_string = "House6_03"; // 0x1649 PushS
	add(var_191_string); // 0x164a ObjFunc
	return 0; // 0x164c Return
}


func_548(var_571_int, var_572_bool)
{
	var_573_object = Obj(); var_574_object = Obj(); var_575_bool = 0; var_576_object = Obj(); var_577_object = Obj(); var_578_object = Obj(); var_579_bool = 0; var_580_object = Obj(); // 0x224 PushV
	GetMainOutdoorScene(var_577_object); // 0x225 Func
	var_581_int = 101; // 0x227 PushI
	var_582_int = var_581_int + var_571_int; // 0x228 Add
	GetGroupActors(var_578_object, var_582_int); // 0x229 ObjFunc
	var_583_object = var_578_object; // 0x22b Push
	if(var_583_object == 0) goto Label_579; // 0x22c JumpB
	
Label_557:
	Next(var_579_bool, var_580_object); // 0x22d ObjFunc
	var_584_bool = var_579_bool; // 0x22f Push
	if(var_584_bool == 0) goto Label_578; // 0x230 JumpB
	var_585_bool = 0; var_586_object = Obj(); var_587_string = ""; // 0x231 PushV
	var_586_object = var_580_object; // 0x232 Mov
	var_587_string = "locked"; // 0x233 MovS
	func_87(var_585_bool, var_586_object, var_587_string); // 0x234 NEW_2
	if(var_585_bool == 0) goto Label_571; // 0x236 JumpB
	var_594_string = "locked"; // 0x237 PushS
	SetProperty(var_594_string, var_572_bool); // 0x238 ObjFunc
	goto Label_577; // 0x23a Jump
	
Label_577:
	goto Label_557; // 0x241 Jump
	
Label_571:
	var_595_string = "Actor ""; // 0x23b PushS
	var_596_int = var_595_string + var_580_object; // 0x23c Add
	var_597_string = "" can't be locked"; // 0x23d PushS
	var_598_int = var_596_int + var_597_string; // 0x23e Add
	Trace(var_598_int); // 0x23f Func
	
Label_578:
	var_580_object = 0; // 0x242 SetNull
	
Label_579:
	return 8; // 0x243 Return
}


func_9765(var_5867_int, var_5868_float)
{
	var_5869_int = 0; var_5870_int = 0; var_5871_int = 0; var_5872_float = 0; // 0x2626 PushV
	var_5870_int = 535694; // 0x2627 MovI
	var_5871_int = 535693; // 0x2628 MovI
	var_5872_float = var_5868_float; // 0x2629 Mov
	func_12239(var_5869_int, var_5870_int, var_5871_int, var_5872_float); // 0x262a NEW_2
	var_5867_int = var_5869_int; // 0x262b Mov
	return 0; // 0x262d Return
}


func_11819(var_5815_bool)
{
	var_5818_int = 0; var_5819_string = ""; // 0x2e2c PushV
	var_5819_string = "d10MarkVisit"; // 0x2e2d MovS
	func_138(var_5818_int, var_5819_string); // 0x2e2e NEW_2
	var_5820_int = 0; // 0x2e30 PushI
	var_5821_bool = var_5818_int != var_5820_int; // 0x2e31 Neq
	if(var_5821_bool == 0) goto Label_11829; // 0x2e32 JumpB
	var_5815_bool = 1; // 0x2e33 MovB
	return 0; // 0x2e34 Return
	
Label_11829:
	var_5815_bool = 0; // 0x2e35 MovB
	return 0; // 0x2e36 Return
}


func_9774(var_5599_int, var_5600_float)
{
	var_5601_int = 0; var_5602_int = 0; var_5603_int = 0; var_5604_float = 0; // 0x262f PushV
	var_5602_int = 530574; // 0x2630 MovI
	var_5603_int = 530573; // 0x2631 MovI
	var_5604_float = var_5600_float; // 0x2632 Mov
	func_12239(var_5601_int, var_5602_int, var_5603_int, var_5604_float); // 0x2633 NEW_2
	var_5599_int = var_5601_int; // 0x2634 Mov
	return 0; // 0x2636 Return
}


func_9783(var_4623_int, var_4624_float)
{
	var_4625_int = 0; var_4626_int = 0; var_4627_int = 0; var_4628_float = 0; // 0x2638 PushV
	var_4626_int = 501160; // 0x2639 MovI
	var_4627_int = 501159; // 0x263a MovI
	var_4628_float = var_4624_float; // 0x263b Mov
	func_12239(var_4625_int, var_4626_int, var_4627_int, var_4628_float); // 0x263c NEW_2
	var_4623_int = var_4625_int; // 0x263d Mov
	return 0; // 0x263f Return
}


func_11831(var_5843_bool)
{
	var_5846_int = 0; var_5847_string = ""; // 0x2e38 PushV
	var_5847_string = "d12q01BurahVisit"; // 0x2e39 MovS
	func_138(var_5846_int, var_5847_string); // 0x2e3a NEW_2
	var_5848_int = 0; // 0x2e3c PushI
	var_5849_bool = var_5846_int != var_5848_int; // 0x2e3d Neq
	if(var_5849_bool == 0) goto Label_11841; // 0x2e3e JumpB
	var_5843_bool = 1; // 0x2e3f MovB
	return 0; // 0x2e40 Return
	
Label_11841:
	var_5843_bool = 0; // 0x2e41 MovB
	return 0; // 0x2e42 Return
}


func_9792(var_4788_int, var_4789_float)
{
	var_4790_int = 0; var_4791_int = 0; var_4792_int = 0; var_4793_float = 0; // 0x2641 PushV
	var_4791_int = 501158; // 0x2642 MovI
	var_4792_int = 501157; // 0x2643 MovI
	var_4793_float = var_4789_float; // 0x2644 Mov
	func_12239(var_4790_int, var_4791_int, var_4792_int, var_4793_float); // 0x2645 NEW_2
	var_4788_int = var_4790_int; // 0x2646 Mov
	return 0; // 0x2648 Return
}


func_11843(var_5925_bool)
{
	var_5928_int = 0; var_5929_string = ""; // 0x2e44 PushV
	var_5929_string = "d4ViktorVisit"; // 0x2e45 MovS
	func_138(var_5928_int, var_5929_string); // 0x2e46 NEW_2
	var_5930_int = 0; // 0x2e48 PushI
	var_5931_bool = var_5928_int != var_5930_int; // 0x2e49 Neq
	if(var_5931_bool == 0) goto Label_11853; // 0x2e4a JumpB
	var_5925_bool = 1; // 0x2e4b MovB
	return 0; // 0x2e4c Return
	
Label_11853:
	var_5925_bool = 0; // 0x2e4d MovB
	return 0; // 0x2e4e Return
}


func_7748(var_4420_object, var_4422_string, var_4423_string, var_4424_string)
{
	var_4426_bool = 0; var_4427_cvector = CVector(0,0,0); var_4428_cvector = CVector(0,0,0); var_4429_object = Obj(); var_4430_bool = 0; var_4431_cvector = CVector(0,0,0); var_4432_cvector = CVector(0,0,0); var_4433_object = Obj(); // 0x1e44 PushV
	var_4434_string = "pt_guard_"; // 0x1e45 PushS
	var_4435_int = var_4434_string + var_4422_string; // 0x1e46 Add
	GetLocator(var_4435_int, var_4430_bool, var_4431_cvector, var_4432_cvector); // 0x1e47 ObjFunc
	var_4436_bool = var_4430_bool == 0; // 0x1e49 Not
	if(var_4436_bool == 0) goto Label_7760; // 0x1e4a JumpB
	var_4437_string = "Locator doesn't exist for guard "; // 0x1e4b PushS
	var_4438_int = var_4437_string + var_4422_string; // 0x1e4c Add
	Trace(var_4438_int); // 0x1e4d Func
	goto Label_7762; // 0x1e4f Jump
	
Label_7762:
	var_4420_object = var_4433_object; // 0x1e52 Mov
	return 8; // 0x1e53 Return
	
Label_7760:
	AddStationaryActor(var_4433_object, var_4431_cvector, var_4432_cvector, var_4423_string, var_4424_string); // 0x1e50 ObjFunc
}


func_582(var_2030_string, var_2032_string, var_2033_string)
{
	var_2039_object = Obj(); var_2040_int = 0; var_2041_bool = 0; var_2042_cvector = CVector(0,0,0); var_2043_cvector = CVector(0,0,0); var_2044_object = Obj(); var_2045_object = Obj(); var_2046_int = 0; var_2047_bool = 0; var_2048_cvector = CVector(0,0,0); var_2049_cvector = CVector(0,0,0); var_2050_object = Obj(); // 0x246 PushV
	GetMainOutdoorScene(var_2045_object); // 0x247 Func
	var_2046_int = 0; // 0x249 MovI
	
Label_586:
	var_2051_int = 1; // 0x24a PushI
	var_2052_int = var_2046_int + var_2051_int; // 0x24b Add
	var_2053_int = var_2030_string + var_2052_int; // 0x24c Add
	GetLocator(var_2053_int, var_2047_bool, var_2048_cvector, var_2049_cvector); // 0x24d ObjFunc
	var_2054_bool = var_2047_bool == 0; // 0x24f Not
	if(var_2054_bool == 0) goto Label_594; // 0x250 JumpB
	goto Label_602; // 0x251 Jump
	
Label_602:
	return 12; // 0x25a Return
	
Label_594:
	AddStationaryActor(var_2050_object, var_2048_cvector, var_2049_cvector, var_2032_string, var_2033_string); // 0x252 ObjFunc
	add(var_2050_object); // 0x254 ObjFunc
	var_2050_object = 0; // 0x256 SetNull
	var_2055_int = 1; // 0x257 PushI
	var_2046_int = var_2046_int + var_2055_int; // 0x258 Add2
	goto Label_586; // 0x259 Jump
}


func_9801(var_4780_int, var_4781_float)
{
	var_4782_int = 0; var_4783_int = 0; var_4784_int = 0; var_4785_float = 0; // 0x264a PushV
	var_4783_int = 501154; // 0x264b MovI
	var_4784_int = 501153; // 0x264c MovI
	var_4785_float = var_4781_float; // 0x264d Mov
	func_12239(var_4782_int, var_4783_int, var_4784_int, var_4785_float); // 0x264e NEW_2
	var_4780_int = var_4782_int; // 0x264f Mov
	return 0; // 0x2651 Return
}


func_6730(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object)
{
	var_1709_int = 0; // 0x1a4b PushI
	var_1710_bool = var_1704_int == var_1709_int; // 0x1a4c Eq
	if(var_1710_bool == 0) goto Label_6770; // 0x1a4d JumpB
	var_1711_int = 0; var_1712_bool = 0; // 0x1a4e PushV
	var_1711_int = 12; // 0x1a4f MovI
	var_1712_bool = 0; // 0x1a50 MovB
	func_802(var_1711_int, var_1712_bool); // 0x1a51 NEW_2
	var_1713_int = 0; var_1714_bool = 0; var_1715_int = 0; // 0x1a53 PushV
	var_1713_int = 12; // 0x1a54 MovI
	var_1714_bool = 0; // 0x1a55 MovB
	var_1715_int = 1; // 0x1a56 MovI
	func_819(var_1713_int, var_1714_bool, var_1715_int); // 0x1a57 NEW_2
	var_1716_int = 0; var_1717_int = 0; var_1718_object = Obj(); var_1719_object = Obj(); var_1720_object = Obj(); // 0x1a59 PushV
	var_1716_int = 12; // 0x1a5a MovI
	var_1717_int = var_1703_int; // 0x1a5b Mov
	var_1718_object = var_1705_object; // 0x1a5c Mov
	var_1719_object = var_1706_object; // 0x1a5d Mov
	var_1720_object = var_1707_object; // 0x1a5e Mov
	func_628(var_1717_int, var_1718_object, var_1719_object, var_1720_object); // 0x1a5f NEW_2
	var_1721_object = Obj(); var_1722_int = 0; // 0x1a61 PushV
	var_1721_object = var_1708_object; // 0x1a62 Mov
	var_1722_int = 0; // 0x1a63 MovI
	func_311(var_1722_int); // 0x1a64 NEW_2
	var_1723_int = 0; var_1724_bool = 0; var_1725_int = 0; // 0x1a66 PushV
	var_1723_int = 12; // 0x1a67 MovI
	var_1724_bool = 0; // 0x1a68 MovB
	var_1725_int = 4; // 0x1a69 MovI
	func_876(var_1723_int, var_1724_bool, var_1725_int); // 0x1a6a NEW_2
	var_1726_int = 0; var_1727_bool = 0; var_1728_int = 0; // 0x1a6c PushV
	var_1726_int = 12; // 0x1a6d MovI
	var_1727_bool = 0; // 0x1a6e MovB
	var_1728_int = 4; // 0x1a6f MovI
	func_938(var_1726_int, var_1727_bool, var_1728_int); // 0x1a70 NEW_2
	
Label_6770:
	var_1729_int = 0; var_1730_int = 0; // 0x1a72 PushV
	var_1729_int = 12; // 0x1a73 MovI
	var_1730_int = var_1704_int; // 0x1a74 Mov
	func_1026(var_1729_int, var_1730_int); // 0x1a75 NEW_2
	var_1731_int = 0; var_1732_int = 0; var_1733_int = 0; // 0x1a77 PushV
	var_1731_int = 12; // 0x1a78 MovI
	var_1732_int = var_1703_int; // 0x1a79 Mov
	var_1733_int = var_1704_int; // 0x1a7a Mov
	func_1630(var_1731_int, var_1732_int, var_1733_int); // 0x1a7b NEW_2
	return 0; // 0x1a7d Return
}


func_8781(var_464_int, var_465_int, var_466_int, var_467_int)
{
	var_470_int = 0; var_471_object = Obj(); var_472_object = Obj(); var_473_object = Obj(); var_474_object = Obj(); var_475_int = 0; var_476_object = Obj(); var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj(); // 0x224d PushV
	var_480_string = "City update"; // 0x224e PushS
	Trace(var_480_string); // 0x224f Func
	var_481_bool = 0; // 0x2251 PushV
	var_481_bool = 0; // 0x2252 MovB
	var_482_bool = var_464_int == var_466_int; // 0x2253 Eq
	if(var_482_bool == 0) goto Label_8792; // 0x2254 JumpB
	var_483_bool = var_465_int == var_467_int; // 0x2255 Eq
	if(var_483_bool == 0) goto Label_8792; // 0x2256 JumpB
	var_481_bool = 1; // 0x2257 MovB
	
Label_8792:
	if(var_481_bool == 0) goto Label_8796; // 0x2258 JumpB
	var_484_string = "kolokol"; // 0x2259 PushS
	PlaySound(var_484_string); // 0x225a Func
	
Label_8796:
	var_475_int = 0; // 0x225c MovI
	
Label_8797:
	var_485_int = 16; // 0x225d PushI
	var_486_bool = var_475_int < var_485_int; // 0x225e LT
	if(var_486_bool == 0) goto Label_8837; // 0x225f JumpB
	var_487_int = 0; // 0x2260 PushV
	var_487_int = var_475_int; // 0x2261 Mov
	func_496(var_487_int); // 0x2262 NEW_2
	var_492_bool = 0; var_493_int = 0; // 0x2264 PushV
	var_493_int = var_475_int; // 0x2265 Mov
	func_406(var_492_bool, var_493_int); // 0x2266 NEW_2
	if(var_492_bool == 0) goto Label_8816; // 0x2268 JumpB
	var_501_int = 0; var_502_int = 0; var_503_int = 0; // 0x2269 PushV
	var_501_int = var_475_int; // 0x226a Mov
	var_502_int = var_464_int; // 0x226b Mov
	var_503_int = var_465_int; // 0x226c Mov
	func_8901(var_501_int, var_502_int, var_503_int); // 0x226d NEW_2
	goto Label_8834; // 0x226f Jump
	
Label_8834:
	var_1978_int = 1; // 0x2282 PushI
	var_475_int = var_475_int + var_1978_int; // 0x2283 Add2
	goto Label_8797; // 0x2284 Jump
	
Label_8816:
	var_1979_bool = 0; var_1980_int = 0; // 0x2270 PushV
	var_1980_int = var_475_int; // 0x2271 Mov
	func_436(var_1979_bool, var_1980_int); // 0x2272 NEW_2
	if(var_1979_bool == 0) goto Label_8828; // 0x2274 JumpB
	var_1988_int = 0; var_1989_int = 0; var_1990_int = 0; // 0x2275 PushV
	var_1988_int = var_475_int; // 0x2276 Mov
	var_1989_int = var_464_int; // 0x2277 Mov
	var_1990_int = var_465_int; // 0x2278 Mov
	func_9126(var_1988_int, var_1989_int, var_1990_int); // 0x2279 NEW_2
	goto Label_8834; // 0x227b Jump
	
Label_8828:
	var_3169_int = 0; var_3170_int = 0; var_3171_int = 0; // 0x227c PushV
	var_3169_int = var_475_int; // 0x227d Mov
	var_3170_int = var_464_int; // 0x227e Mov
	var_3171_int = var_465_int; // 0x227f Mov
	func_9351(var_3169_int, var_3170_int, var_3171_int); // 0x2280 NEW_2
	
Label_8837:
	var_4303_int = 0; // 0x2285 PushI
	var_4304_bool = var_465_int == var_4303_int; // 0x2286 Eq
	if(var_4304_bool == 0) goto Label_8873; // 0x2287 JumpB
	var_4305_int = 0; // 0x2288 PushV
	var_4305_int = var_464_int; // 0x2289 Mov
	func_14479(var_4305_int); // 0x228a NEW_2
	var_4367_bool = 0; // 0x228c PushV
	var_4367_bool = 1; // 0x228d MovB
	var_4368_int = 1; // 0x228e PushI
	var_4369_bool = var_464_int == var_4368_int; // 0x228f Eq
	if(var_4369_bool == 0) goto Label_8855; // 0x2290 JumpB
	var_4370_bool = 0; var_4371_int = 0; // 0x2291 PushV
	var_4371_int = 5; // 0x2292 MovI
	func_436(var_4370_bool, var_4371_int); // 0x2293 NEW_2
	if(var_4370_bool == 0) goto Label_8855; // 0x2295 JumpB
	var_4367_bool = 0; // 0x2296 MovB
	
Label_8855:
	if(var_4367_bool == 0) goto Label_8865; // 0x2297 JumpB
	var_4372_string = "dt_house_1_07"; // 0x2298 PushS
	FindActor(var_476_object, var_4372_string); // 0x2299 Func
	var_4373_int = 200; // 0x229b PushI
	var_4374_bool = 1; // 0x229c PushB
	EnableSubset(var_4373_int, var_4374_bool); // 0x229d ObjFunc
	var_476_object = 0; // 0x229f SetNull
	goto Label_8873; // 0x22a0 Jump
	
Label_8873:
	var_4375_int = 7; // 0x22a9 PushI
	var_4376_bool = var_465_int == var_4375_int; // 0x22aa Eq
	if(var_4376_bool == 0) goto Label_8887; // 0x22ab JumpB
	var_4377_string = "day time"; // 0x22ac PushS
	Trace(var_4377_string); // 0x22ad Func
	GetMainOutdoorScene(var_478_object); // 0x22af Func
	var_4378_int = 0; // 0x22b1 PushI
	var_4379_bool = 0; // 0x22b2 PushB
	SwitchLights(var_4378_int, var_4379_bool); // 0x22b3 ObjFunc
	var_478_object = 0; // 0x22b5 SetNull
	goto Label_8900; // 0x22b6 Jump
	
Label_8900:
	return 10; // 0x22c4 Return
	
Label_8887:
	var_4380_int = 20; // 0x22b7 PushI
	var_4381_bool = var_465_int == var_4380_int; // 0x22b8 Eq
	if(var_4381_bool == 0) goto Label_8900; // 0x22b9 JumpB
	var_4382_string = "night time"; // 0x22ba PushS
	Trace(var_4382_string); // 0x22bb Func
	GetMainOutdoorScene(var_479_object); // 0x22bd Func
	var_4383_int = 0; // 0x22bf PushI
	var_4384_bool = 1; // 0x22c0 PushB
	SwitchLights(var_4383_int, var_4384_bool); // 0x22c1 ObjFunc
	var_479_object = 0; // 0x22c3 SetNull
	
Label_8865:
	var_4385_string = "dt_house_1_07"; // 0x22a1 PushS
	FindActor(var_477_object, var_4385_string); // 0x22a2 Func
	var_4386_int = 200; // 0x22a4 PushI
	var_4387_bool = 0; // 0x22a5 PushB
	EnableSubset(var_4386_int, var_4387_bool); // 0x22a6 ObjFunc
	var_477_object = 0; // 0x22a8 SetNull
}


func_5709(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object)
{
	var_1390_int = 0; // 0x164e PushI
	var_1391_bool = var_1385_int == var_1390_int; // 0x164f Eq
	if(var_1391_bool == 0) goto Label_5749; // 0x1650 JumpB
	var_1392_int = 0; var_1393_bool = 0; // 0x1651 PushV
	var_1392_int = 7; // 0x1652 MovI
	var_1393_bool = 0; // 0x1653 MovB
	func_802(var_1392_int, var_1393_bool); // 0x1654 NEW_2
	var_1394_int = 0; var_1395_bool = 0; var_1396_int = 0; // 0x1656 PushV
	var_1394_int = 7; // 0x1657 MovI
	var_1395_bool = 0; // 0x1658 MovB
	var_1396_int = 1; // 0x1659 MovI
	func_819(var_1394_int, var_1395_bool, var_1396_int); // 0x165a NEW_2
	var_1397_int = 0; var_1398_int = 0; var_1399_object = Obj(); var_1400_object = Obj(); var_1401_object = Obj(); // 0x165c PushV
	var_1397_int = 7; // 0x165d MovI
	var_1398_int = var_1384_int; // 0x165e Mov
	var_1399_object = var_1386_object; // 0x165f Mov
	var_1400_object = var_1387_object; // 0x1660 Mov
	var_1401_object = var_1388_object; // 0x1661 Mov
	func_628(var_1398_int, var_1399_object, var_1400_object, var_1401_object); // 0x1662 NEW_2
	var_1402_object = Obj(); var_1403_int = 0; // 0x1664 PushV
	var_1402_object = var_1389_object; // 0x1665 Mov
	var_1403_int = 0; // 0x1666 MovI
	func_311(var_1403_int); // 0x1667 NEW_2
	var_1404_int = 0; var_1405_bool = 0; var_1406_int = 0; // 0x1669 PushV
	var_1404_int = 7; // 0x166a MovI
	var_1405_bool = 0; // 0x166b MovB
	var_1406_int = 6; // 0x166c MovI
	func_876(var_1404_int, var_1405_bool, var_1406_int); // 0x166d NEW_2
	var_1407_int = 0; var_1408_bool = 0; var_1409_int = 0; // 0x166f PushV
	var_1407_int = 7; // 0x1670 MovI
	var_1408_bool = 0; // 0x1671 MovB
	var_1409_int = 6; // 0x1672 MovI
	func_938(var_1407_int, var_1408_bool, var_1409_int); // 0x1673 NEW_2
	
Label_5749:
	var_1410_int = 0; var_1411_int = 0; // 0x1675 PushV
	var_1410_int = 7; // 0x1676 MovI
	var_1411_int = var_1385_int; // 0x1677 Mov
	func_1026(var_1410_int, var_1411_int); // 0x1678 NEW_2
	var_1412_int = 0; var_1413_int = 0; var_1414_int = 0; // 0x167a PushV
	var_1412_int = 7; // 0x167b MovI
	var_1413_int = var_1384_int; // 0x167c Mov
	var_1414_int = var_1385_int; // 0x167d Mov
	func_1630(var_1412_int, var_1413_int, var_1414_int); // 0x167e NEW_2
	return 0; // 0x1680 Return
}


func_11855(var_5941_bool)
{
	var_5944_int = 0; var_5945_string = ""; // 0x2e50 PushV
	var_5945_string = "d8AglajaVisit"; // 0x2e51 MovS
	func_138(var_5944_int, var_5945_string); // 0x2e52 NEW_2
	var_5946_int = 0; // 0x2e54 PushI
	var_5947_bool = var_5944_int != var_5946_int; // 0x2e55 Neq
	if(var_5947_bool == 0) goto Label_11865; // 0x2e56 JumpB
	var_5941_bool = 1; // 0x2e57 MovB
	return 0; // 0x2e58 Return
	
Label_11865:
	var_5941_bool = 0; // 0x2e59 MovB
	return 0; // 0x2e5a Return
}


func_3665(var_3816_int, var_3817_int, var_3818_int)
{
	var_3819_int = 0; var_3820_int = 0; var_3821_int = 0; var_3822_int = 0; var_3823_int = 0; var_3824_int = 0; var_3825_int = 0; var_3826_int = 0; // 0xe51 PushV
	var_3827_bool = 0; // 0xe52 PushV
	var_3827_bool = 0; // 0xe53 MovB
	var_3828_int = 8; // 0xe54 PushI
	var_3829_bool = var_3818_int > var_3828_int; // 0xe55 GT
	if(var_3829_bool == 0) goto Label_3675; // 0xe56 JumpB
	var_3830_int = 21; // 0xe57 PushI
	var_3831_bool = var_3818_int < var_3830_int; // 0xe58 LT
	if(var_3831_bool == 0) goto Label_3675; // 0xe59 JumpB
	var_3827_bool = 1; // 0xe5a MovB
	
Label_3675:
	if(var_3827_bool == 0) goto Label_3752; // 0xe5b JumpB
	var_3832_int = 0; var_3833_string = ""; var_3834_string = ""; var_3835_int = 0; // 0xe5c PushV
	var_3832_int = var_3816_int; // 0xe5d Mov
	var_3833_string = "pers_rat"; // 0xe5e MovS
	var_3834_string = "rat.xml"; // 0xe5f MovS
	var_3835_int = 1; // 0xe60 MovI
	func_509(var_3832_int, var_3833_string, var_3834_string, var_3835_int); // 0xe61 NEW_2
	var_3836_int = 0; var_3837_string = ""; var_3838_string = ""; var_3839_int = 0; // 0xe63 PushV
	var_3836_int = var_3816_int; // 0xe64 Mov
	var_3837_string = "pers_alkash"; // 0xe65 MovS
	var_3838_string = "alkash.xml"; // 0xe66 MovS
	var_3839_int = 2; // 0xe67 MovI
	func_509(var_3836_int, var_3837_string, var_3838_string, var_3839_int); // 0xe68 NEW_2
	var_3840_int = 0; var_3841_string = ""; var_3842_string = ""; var_3843_int = 0; // 0xe6a PushV
	var_3840_int = var_3816_int; // 0xe6b Mov
	var_3841_string = "pers_dohodyaga"; // 0xe6c MovS
	var_3842_string = "dohodyaga.xml"; // 0xe6d MovS
	var_3843_int = 1; // 0xe6e MovI
	func_509(var_3840_int, var_3841_string, var_3842_string, var_3843_int); // 0xe6f NEW_2
	var_3844_int = 2; // 0xe71 PushI
	var_3845_float = 0; var_3846_int = 0; // 0xe72 PushV
	var_3846_int = var_3817_int; // 0xe73 Mov
	func_1171(var_3845_float, var_3846_int); // 0xe74 NEW_2
	var_3823_int = var_3844_int * var_3845_float; // 0xe76 Mult2
	var_3847_int = var_3823_int; // 0xe77 Push
	if(var_3847_int == 0) goto Label_3712; // 0xe78 JumpB
	var_3848_int = 0; var_3849_string = ""; var_3850_string = ""; var_3851_int = 0; // 0xe79 PushV
	var_3848_int = var_3816_int; // 0xe7a Mov
	var_3849_string = "pers_grabitel"; // 0xe7b MovS
	var_3850_string = "grabitel.xml"; // 0xe7c MovS
	var_3851_int = var_3823_int; // 0xe7d Mov
	func_509(var_3848_int, var_3849_string, var_3850_string, var_3851_int); // 0xe7e NEW_2
	
Label_3712:
	var_3852_int = 1; // 0xe80 PushI
	var_3853_int = var_3817_int + var_3852_int; // 0xe81 Add
	var_3854_int = 2; // 0xe82 PushI
	var_3855_bool = var_3853_int >= var_3854_int; // 0xe83 GE
	if(var_3855_bool == 0) goto Label_3736; // 0xe84 JumpB
	var_3856_int = 0; var_3857_string = ""; var_3858_string = ""; var_3859_int = 0; // 0xe85 PushV
	var_3856_int = var_3816_int; // 0xe86 Mov
	var_3857_string = "pers_patrool"; // 0xe87 MovS
	var_3858_string = "patrol.xml"; // 0xe88 MovS
	var_3859_int = 1; // 0xe89 MovI
	func_509(var_3856_int, var_3857_string, var_3858_string, var_3859_int); // 0xe8a NEW_2
	var_3860_bool = 0; var_3861_int = 0; // 0xe8c PushV
	var_3861_int = var_3817_int; // 0xe8d Mov
	func_1378(var_3860_bool, var_3861_int); // 0xe8e NEW_2
	if(var_3860_bool == 0) goto Label_3736; // 0xe90 JumpB
	var_3862_int = 0; var_3863_string = ""; var_3864_string = ""; var_3865_int = 0; // 0xe91 PushV
	var_3862_int = var_3816_int; // 0xe92 Mov
	var_3863_string = "pers_soldat_hand"; // 0xe93 MovS
	var_3864_string = "soldier_patrol.xml"; // 0xe94 MovS
	var_3865_int = 1; // 0xe95 MovI
	func_509(var_3862_int, var_3863_string, var_3864_string, var_3865_int); // 0xe96 NEW_2
	
Label_3736:
	var_3866_int = 1; // 0xe98 PushI
	var_3867_float = 0; var_3868_int = 0; // 0xe99 PushV
	var_3868_int = var_3817_int; // 0xe9a Mov
	func_1261(var_3867_float, var_3868_int); // 0xe9b NEW_2
	var_3824_int = var_3866_int * var_3867_float; // 0xe9d Mult2
	var_3869_int = var_3824_int; // 0xe9e Push
	if(var_3869_int == 0) goto Label_3751; // 0xe9f JumpB
	var_3870_int = 0; var_3871_string = ""; var_3872_string = ""; var_3873_int = 0; // 0xea0 PushV
	var_3870_int = var_3816_int; // 0xea1 Mov
	var_3871_string = "pers_bomber"; // 0xea2 MovS
	var_3872_string = "bomber.xml"; // 0xea3 MovS
	var_3873_int = var_3824_int; // 0xea4 Mov
	func_509(var_3870_int, var_3871_string, var_3872_string, var_3873_int); // 0xea5 NEW_2
	
Label_3751:
	goto Label_3827; // 0xea7 Jump
	
Label_3827:
	var_3874_bool = 0; var_3875_int = 0; var_3876_int = 0; // 0xef3 PushV
	var_3875_int = var_3817_int; // 0xef4 Mov
	var_3876_int = var_3818_int; // 0xef5 Mov
	func_1351(var_3874_bool, var_3875_int, var_3876_int); // 0xef6 NEW_2
	if(var_3874_bool == 0) goto Label_3840; // 0xef8 JumpB
	var_3877_int = 0; var_3878_string = ""; var_3879_string = ""; var_3880_int = 0; // 0xef9 PushV
	var_3877_int = var_3816_int; // 0xefa Mov
	var_3878_string = "pers_soldat"; // 0xefb MovS
	var_3879_string = "soldier_marauder.xml"; // 0xefc MovS
	var_3880_int = 2; // 0xefd MovI
	func_509(var_3877_int, var_3878_string, var_3879_string, var_3880_int); // 0xefe NEW_2
	
Label_3840:
	var_3881_bool = 0; var_3882_int = 0; // 0xf00 PushV
	var_3882_int = var_3817_int; // 0xf01 Mov
	func_1378(var_3881_bool, var_3882_int); // 0xf02 NEW_2
	if(var_3881_bool == 0) goto Label_3852; // 0xf04 JumpB
	var_3883_int = 0; var_3884_string = ""; var_3885_string = ""; var_3886_int = 0; // 0xf05 PushV
	var_3883_int = var_3816_int; // 0xf06 Mov
	var_3884_string = "pers_sanitar"; // 0xf07 MovS
	var_3885_string = "sanitar.xml"; // 0xf08 MovS
	var_3886_int = 1; // 0xf09 MovI
	func_509(var_3883_int, var_3884_string, var_3885_string, var_3886_int); // 0xf0a NEW_2
	
Label_3852:
	return 8; // 0xf0c Return
	
Label_3752:
	var_3887_int = 0; var_3888_string = ""; var_3889_string = ""; var_3890_int = 0; // 0xea8 PushV
	var_3887_int = var_3816_int; // 0xea9 Mov
	var_3888_string = "pers_rat"; // 0xeaa MovS
	var_3889_string = "rat.xml"; // 0xeab MovS
	var_3890_int = 3; // 0xeac MovI
	func_509(var_3887_int, var_3888_string, var_3889_string, var_3890_int); // 0xead NEW_2
	var_3891_int = 0; var_3892_string = ""; var_3893_string = ""; var_3894_int = 0; // 0xeaf PushV
	var_3891_int = var_3816_int; // 0xeb0 Mov
	var_3892_string = "pers_alkash"; // 0xeb1 MovS
	var_3893_string = "alkash.xml"; // 0xeb2 MovS
	var_3894_int = 1; // 0xeb3 MovI
	func_509(var_3891_int, var_3892_string, var_3893_string, var_3894_int); // 0xeb4 NEW_2
	var_3895_int = 0; var_3896_string = ""; var_3897_string = ""; var_3898_int = 0; // 0xeb6 PushV
	var_3895_int = var_3816_int; // 0xeb7 Mov
	var_3896_string = "pers_dohodyaga"; // 0xeb8 MovS
	var_3897_string = "dohodyaga.xml"; // 0xeb9 MovS
	var_3898_int = 1; // 0xeba MovI
	func_509(var_3895_int, var_3896_string, var_3897_string, var_3898_int); // 0xebb NEW_2
	var_3899_int = 3; // 0xebd PushI
	var_3900_float = 0; var_3901_int = 0; // 0xebe PushV
	var_3901_int = var_3817_int; // 0xebf Mov
	func_1171(var_3900_float, var_3901_int); // 0xec0 NEW_2
	var_3825_int = var_3899_int * var_3900_float; // 0xec2 Mult2
	var_3902_int = var_3825_int; // 0xec3 Push
	if(var_3902_int == 0) goto Label_3788; // 0xec4 JumpB
	var_3903_int = 0; var_3904_string = ""; var_3905_string = ""; var_3906_int = 0; // 0xec5 PushV
	var_3903_int = var_3816_int; // 0xec6 Mov
	var_3904_string = "pers_grabitel"; // 0xec7 MovS
	var_3905_string = "grabitel.xml"; // 0xec8 MovS
	var_3906_int = var_3825_int; // 0xec9 Mov
	func_509(var_3903_int, var_3904_string, var_3905_string, var_3906_int); // 0xeca NEW_2
	
Label_3788:
	var_3907_int = 1; // 0xecc PushI
	var_3908_int = var_3817_int + var_3907_int; // 0xecd Add
	var_3909_int = 2; // 0xece PushI
	var_3910_bool = var_3908_int >= var_3909_int; // 0xecf GE
	if(var_3910_bool == 0) goto Label_3812; // 0xed0 JumpB
	var_3911_int = 0; var_3912_string = ""; var_3913_string = ""; var_3914_int = 0; // 0xed1 PushV
	var_3911_int = var_3816_int; // 0xed2 Mov
	var_3912_string = "pers_patrool"; // 0xed3 MovS
	var_3913_string = "patrol.xml"; // 0xed4 MovS
	var_3914_int = 1; // 0xed5 MovI
	func_509(var_3911_int, var_3912_string, var_3913_string, var_3914_int); // 0xed6 NEW_2
	var_3915_bool = 0; var_3916_int = 0; // 0xed8 PushV
	var_3916_int = var_3817_int; // 0xed9 Mov
	func_1378(var_3915_bool, var_3916_int); // 0xeda NEW_2
	if(var_3915_bool == 0) goto Label_3812; // 0xedc JumpB
	var_3917_int = 0; var_3918_string = ""; var_3919_string = ""; var_3920_int = 0; // 0xedd PushV
	var_3917_int = var_3816_int; // 0xede Mov
	var_3918_string = "pers_soldat_hand"; // 0xedf MovS
	var_3919_string = "soldier_patrol.xml"; // 0xee0 MovS
	var_3920_int = 1; // 0xee1 MovI
	func_509(var_3917_int, var_3918_string, var_3919_string, var_3920_int); // 0xee2 NEW_2
	
Label_3812:
	var_3921_int = 1; // 0xee4 PushI
	var_3922_float = 0; var_3923_int = 0; // 0xee5 PushV
	var_3923_int = var_3817_int; // 0xee6 Mov
	func_1261(var_3922_float, var_3923_int); // 0xee7 NEW_2
	var_3826_int = var_3921_int * var_3922_float; // 0xee9 Mult2
	var_3924_int = var_3826_int; // 0xeea Push
	if(var_3924_int == 0) goto Label_3827; // 0xeeb JumpB
	var_3925_int = 0; var_3926_string = ""; var_3927_string = ""; var_3928_int = 0; // 0xeec PushV
	var_3925_int = var_3816_int; // 0xeed Mov
	var_3926_string = "pers_bomber"; // 0xeee MovS
	var_3927_string = "bomber.xml"; // 0xeef MovS
	var_3928_int = var_3826_int; // 0xef0 Mov
	func_509(var_3925_int, var_3926_string, var_3927_string, var_3928_int); // 0xef1 NEW_2
}


func_9810(var_4649_int, var_4650_float)
{
	var_4651_int = 0; var_4652_int = 0; var_4653_int = 0; var_4654_float = 0; // 0x2653 PushV
	var_4652_int = 501152; // 0x2654 MovI
	var_4653_int = 501151; // 0x2655 MovI
	var_4654_float = var_4650_float; // 0x2656 Mov
	func_12239(var_4651_int, var_4652_int, var_4653_int, var_4654_float); // 0x2657 NEW_2
	var_4649_int = var_4651_int; // 0x2658 Mov
	return 0; // 0x265a Return
}


func_7765(var_4417_object, var_4418_object, var_4419_int)
{
	var_4420_object = Obj(); var_4421_object = Obj(); var_4422_string = ""; var_4423_string = ""; var_4424_string = ""; // 0x1e56 PushV
	var_4421_object = var_4418_object; // 0x1e57 Mov
	var_4425_string = "term"; // 0x1e58 PushS
	var_4422_string = var_4425_string + var_4419_int; // 0x1e59 Add2
	var_4423_string = "pers_patrool"; // 0x1e5a MovS
	var_4424_string = "guard_term.xml"; // 0x1e5b MovS
	func_7748(var_4421_object, var_4422_string, var_4423_string, var_4424_string); // 0x1e5c NEW_2
	var_4417_object = var_4420_object; // 0x1e5d Mov
	return 0; // 0x1e5f Return
}


func_4694(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object)
{
	var_3406_int = 0; // 0x1257 PushI
	var_3407_bool = var_3401_int == var_3406_int; // 0x1258 Eq
	if(var_3407_bool == 0) goto Label_4734; // 0x1259 JumpB
	var_3408_int = 0; var_3409_bool = 0; // 0x125a PushV
	var_3408_int = 1; // 0x125b MovI
	var_3409_bool = 0; // 0x125c MovB
	func_802(var_3408_int, var_3409_bool); // 0x125d NEW_2
	var_3410_int = 0; var_3411_bool = 0; var_3412_int = 0; // 0x125f PushV
	var_3410_int = 1; // 0x1260 MovI
	var_3411_bool = 0; // 0x1261 MovB
	var_3412_int = 1; // 0x1262 MovI
	func_819(var_3410_int, var_3411_bool, var_3412_int); // 0x1263 NEW_2
	var_3413_int = 0; var_3414_int = 0; var_3415_object = Obj(); var_3416_object = Obj(); var_3417_object = Obj(); // 0x1265 PushV
	var_3413_int = 1; // 0x1266 MovI
	var_3414_int = var_3400_int; // 0x1267 Mov
	var_3415_object = var_3402_object; // 0x1268 Mov
	var_3416_object = var_3403_object; // 0x1269 Mov
	var_3417_object = var_3404_object; // 0x126a Mov
	func_726(var_3413_int, var_3414_int, var_3415_object, var_3416_object, var_3417_object); // 0x126b NEW_2
	var_3418_object = Obj(); var_3419_int = 0; // 0x126d PushV
	var_3418_object = var_3405_object; // 0x126e Mov
	var_3419_int = 2; // 0x126f MovI
	func_311(var_3419_int); // 0x1270 NEW_2
	var_3420_int = 0; var_3421_bool = 0; var_3422_int = 0; // 0x1272 PushV
	var_3420_int = 1; // 0x1273 MovI
	var_3421_bool = 0; // 0x1274 MovB
	var_3422_int = 8; // 0x1275 MovI
	func_876(var_3420_int, var_3421_bool, var_3422_int); // 0x1276 NEW_2
	var_3423_int = 0; var_3424_bool = 0; var_3425_int = 0; // 0x1278 PushV
	var_3423_int = 1; // 0x1279 MovI
	var_3424_bool = 1; // 0x127a MovB
	var_3425_int = 8; // 0x127b MovI
	func_938(var_3423_int, var_3424_bool, var_3425_int); // 0x127c NEW_2
	
Label_4734:
	var_3426_int = 0; var_3427_bool = 0; // 0x127e PushV
	var_3426_int = 1; // 0x127f MovI
	var_3427_bool = 0; // 0x1280 MovB
	func_785(var_3426_int, var_3427_bool); // 0x1281 NEW_2
	var_3428_int = 0; var_3429_int = 0; var_3430_int = 0; // 0x1283 PushV
	var_3428_int = 1; // 0x1284 MovI
	var_3429_int = var_3400_int; // 0x1285 Mov
	var_3430_int = var_3401_int; // 0x1286 Mov
	func_4216(var_3428_int, var_3429_int, var_3430_int); // 0x1287 NEW_2
	return 0; // 0x1289 Return
}


func_9819(var_4827_int, var_4828_float)
{
	var_4829_int = 0; var_4830_int = 0; var_4831_int = 0; var_4832_float = 0; // 0x265c PushV
	var_4830_int = 501156; // 0x265d MovI
	var_4831_int = 501155; // 0x265e MovI
	var_4832_float = var_4828_float; // 0x265f Mov
	func_12239(var_4829_int, var_4830_int, var_4831_int, var_4832_float); // 0x2660 NEW_2
	var_4827_int = var_4829_int; // 0x2661 Mov
	return 0; // 0x2663 Return
}


func_604(var_2056_string)
{
	var_2063_object = Obj(); var_2064_int = 0; var_2065_bool = 0; var_2066_cvector = CVector(0,0,0); var_2067_cvector = CVector(0,0,0); var_2068_object = Obj(); var_2069_string = ""; var_2070_object = Obj(); var_2071_int = 0; var_2072_bool = 0; var_2073_cvector = CVector(0,0,0); var_2074_cvector = CVector(0,0,0); var_2075_object = Obj(); var_2076_string = ""; // 0x25c PushV
	GetMainOutdoorScene(var_2070_object); // 0x25d Func
	var_2071_int = 0; // 0x25f MovI
	
Label_608:
	var_2077_int = 1; // 0x260 PushI
	var_2078_int = var_2071_int + var_2077_int; // 0x261 Add
	var_2079_int = var_2056_string + var_2078_int; // 0x262 Add
	GetLocator(var_2079_int, var_2072_bool, var_2073_cvector, var_2074_cvector); // 0x263 ObjFunc
	var_2080_bool = var_2072_bool == 0; // 0x265 Not
	if(var_2080_bool == 0) goto Label_616; // 0x266 JumpB
	goto Label_626; // 0x267 Jump
	
Label_626:
	return 14; // 0x272 Return
	
Label_616:
	var_2076_string = "fog_stat.xml"; // 0x268 MovS
	var_2081_string = "fog"; // 0x269 PushS
	AddStationaryActorByType(var_2075_object, var_2073_cvector, var_2074_cvector, var_2081_string, var_2076_string); // 0x26a ObjFunc
	add(var_2075_object); // 0x26c ObjFunc
	var_2075_object = 0; // 0x26e SetNull
	var_2082_int = 1; // 0x26f PushI
	var_2071_int = var_2071_int + var_2082_int; // 0x270 Add2
	goto Label_608; // 0x271 Jump
}


func_11867(var_5986_bool)
{
	var_5989_int = 0; var_5990_string = ""; // 0x2e5c PushV
	var_5990_string = "d9AnnaVisit"; // 0x2e5d MovS
	func_138(var_5989_int, var_5990_string); // 0x2e5e NEW_2
	var_5991_int = 0; // 0x2e60 PushI
	var_5992_bool = var_5989_int != var_5991_int; // 0x2e61 Neq
	if(var_5992_bool == 0) goto Label_11877; // 0x2e62 JumpB
	var_5986_bool = 1; // 0x2e63 MovB
	return 0; // 0x2e64 Return
	
Label_11877:
	var_5986_bool = 0; // 0x2e65 MovB
	return 0; // 0x2e66 Return
}


func_1630(var_1412_int, var_1413_int, var_1414_int)
{
	var_1415_int = 0; var_1416_int = 0; // 0x65e PushV
	var_1417_int = 1; // 0x65f PushI
	var_1418_int = var_1413_int + var_1417_int; // 0x660 Add
	var_1419_int = 12; // 0x661 PushI
	var_1420_bool = var_1418_int == var_1419_int; // 0x662 Eq
	if(var_1420_bool == 0) goto Label_1637; // 0x663 JumpB
	return 2; // 0x664 Return
	
Label_1637:
	var_1421_bool = 0; // 0x665 PushV
	var_1421_bool = 0; // 0x666 MovB
	var_1422_bool = 0; // 0x667 PushV
	var_1422_bool = 1; // 0x668 MovB
	var_1423_int = 7; // 0x669 PushI
	var_1424_bool = var_1414_int < var_1423_int; // 0x66a LT
	if(var_1424_bool == 0) goto Label_1648; // 0x66b JumpB
	var_1425_int = 21; // 0x66c PushI
	var_1426_bool = var_1414_int > var_1425_int; // 0x66d GT
	if(var_1426_bool == 0) goto Label_1648; // 0x66e JumpB
	var_1422_bool = 0; // 0x66f MovB
	
Label_1648:
	if(var_1422_bool == 0) goto Label_1653; // 0x670 JumpB
	var_1427_int = 0; // 0x671 PushI
	var_1428_bool = var_1413_int != var_1427_int; // 0x672 Neq
	if(var_1428_bool == 0) goto Label_1653; // 0x673 JumpB
	var_1421_bool = 1; // 0x674 MovB
	
Label_1653:
	if(var_1421_bool == 0) goto Label_1669; // 0x675 JumpB
	var_1429_int = 1; // 0x676 PushI
	var_1430_float = 0; var_1431_int = 0; // 0x677 PushV
	var_1431_int = var_1413_int; // 0x678 Mov
	func_1147(var_1430_float, var_1431_int); // 0x679 NEW_2
	var_1416_int = var_1429_int * var_1430_float; // 0x67b Mult2
	var_1432_int = var_1416_int; // 0x67c Push
	if(var_1432_int == 0) goto Label_1669; // 0x67d JumpB
	var_1433_int = 0; var_1434_string = ""; var_1435_string = ""; var_1436_int = 0; // 0x67e PushV
	var_1433_int = var_1412_int; // 0x67f Mov
	var_1434_string = "pers_grabitel"; // 0x680 MovS
	var_1435_string = "grabitel.xml"; // 0x681 MovS
	var_1436_int = var_1416_int; // 0x682 Mov
	func_509(var_1433_int, var_1434_string, var_1435_string, var_1436_int); // 0x683 NEW_2
	
Label_1669:
	var_1437_bool = 0; var_1438_int = 0; var_1439_int = 0; // 0x685 PushV
	var_1438_int = var_1413_int; // 0x686 Mov
	var_1439_int = var_1414_int; // 0x687 Mov
	func_1116(var_1437_bool, var_1438_int, var_1439_int); // 0x688 NEW_2
	if(var_1437_bool == 0) goto Label_1763; // 0x68a JumpB
	var_1440_int = 0; var_1441_string = ""; var_1442_string = ""; var_1443_int = 0; // 0x68b PushV
	var_1440_int = var_1412_int; // 0x68c Mov
	var_1441_string = "pers_unosha"; // 0x68d MovS
	var_1442_string = "unosha_attacker.xml"; // 0x68e MovS
	var_1443_int = 1; // 0x68f MovI
	func_509(var_1440_int, var_1441_string, var_1442_string, var_1443_int); // 0x690 NEW_2
	var_1444_int = 0; var_1445_string = ""; var_1446_string = ""; var_1447_int = 0; // 0x692 PushV
	var_1444_int = var_1412_int; // 0x693 Mov
	var_1445_string = "pers_unosha"; // 0x694 MovS
	var_1446_string = "unosha2_attacker.xml"; // 0x695 MovS
	var_1447_int = 1; // 0x696 MovI
	func_509(var_1444_int, var_1445_string, var_1446_string, var_1447_int); // 0x697 NEW_2
	var_1448_int = 0; var_1449_string = ""; var_1450_string = ""; var_1451_int = 0; // 0x699 PushV
	var_1448_int = var_1412_int; // 0x69a Mov
	var_1449_string = "pers_worker"; // 0x69b MovS
	var_1450_string = "worker_attacker.xml"; // 0x69c MovS
	var_1451_int = 1; // 0x69d MovI
	func_509(var_1448_int, var_1449_string, var_1450_string, var_1451_int); // 0x69e NEW_2
	var_1452_int = 0; var_1453_string = ""; var_1454_string = ""; var_1455_int = 0; // 0x6a0 PushV
	var_1452_int = var_1412_int; // 0x6a1 Mov
	var_1453_string = "pers_worker"; // 0x6a2 MovS
	var_1454_string = "worker2_attacker.xml"; // 0x6a3 MovS
	var_1455_int = 1; // 0x6a4 MovI
	func_509(var_1452_int, var_1453_string, var_1454_string, var_1455_int); // 0x6a5 NEW_2
	var_1456_int = 0; var_1457_string = ""; var_1458_string = ""; var_1459_int = 0; // 0x6a7 PushV
	var_1456_int = var_1412_int; // 0x6a8 Mov
	var_1457_string = "pers_woman"; // 0x6a9 MovS
	var_1458_string = "woman.xml"; // 0x6aa MovS
	var_1459_int = 1; // 0x6ab MovI
	func_509(var_1456_int, var_1457_string, var_1458_string, var_1459_int); // 0x6ac NEW_2
	var_1460_int = 0; var_1461_string = ""; var_1462_string = ""; var_1463_int = 0; // 0x6ae PushV
	var_1460_int = var_1412_int; // 0x6af Mov
	var_1461_string = "pers_alkash"; // 0x6b0 MovS
	var_1462_string = "alkash.xml"; // 0x6b1 MovS
	var_1463_int = 1; // 0x6b2 MovI
	func_509(var_1460_int, var_1461_string, var_1462_string, var_1463_int); // 0x6b3 NEW_2
	var_1464_bool = 0; // 0x6b5 PushV
	var_1464_bool = 0; // 0x6b6 MovB
	var_1465_int = 8; // 0x6b7 PushI
	var_1466_bool = var_1414_int > var_1465_int; // 0x6b8 GT
	if(var_1466_bool == 0) goto Label_1726; // 0x6b9 JumpB
	var_1467_int = 21; // 0x6ba PushI
	var_1468_bool = var_1414_int < var_1467_int; // 0x6bb LT
	if(var_1468_bool == 0) goto Label_1726; // 0x6bc JumpB
	var_1464_bool = 1; // 0x6bd MovB
	
Label_1726:
	if(var_1464_bool == 0) goto Label_1762; // 0x6be JumpB
	var_1469_int = 0; var_1470_string = ""; var_1471_string = ""; var_1472_int = 0; // 0x6bf PushV
	var_1469_int = var_1412_int; // 0x6c0 Mov
	var_1470_string = "pers_boy"; // 0x6c1 MovS
	var_1471_string = "boy.xml"; // 0x6c2 MovS
	var_1472_int = 1; // 0x6c3 MovI
	func_509(var_1469_int, var_1470_string, var_1471_string, var_1472_int); // 0x6c4 NEW_2
	var_1473_int = 0; var_1474_string = ""; var_1475_string = ""; var_1476_int = 0; // 0x6c6 PushV
	var_1473_int = var_1412_int; // 0x6c7 Mov
	var_1474_string = "pers_girl"; // 0x6c8 MovS
	var_1475_string = "girl.xml"; // 0x6c9 MovS
	var_1476_int = 1; // 0x6ca MovI
	func_509(var_1473_int, var_1474_string, var_1475_string, var_1476_int); // 0x6cb NEW_2
	var_1477_int = 0; var_1478_string = ""; var_1479_string = ""; var_1480_int = 0; // 0x6cd PushV
	var_1477_int = var_1412_int; // 0x6ce Mov
	var_1478_string = "pers_girl"; // 0x6cf MovS
	var_1479_string = "girl2.xml"; // 0x6d0 MovS
	var_1480_int = 1; // 0x6d1 MovI
	func_509(var_1477_int, var_1478_string, var_1479_string, var_1480_int); // 0x6d2 NEW_2
	var_1481_int = 0; var_1482_string = ""; var_1483_string = ""; var_1484_int = 0; // 0x6d4 PushV
	var_1481_int = var_1412_int; // 0x6d5 Mov
	var_1482_string = "pers_littleboy"; // 0x6d6 MovS
	var_1483_string = "littleboy.xml"; // 0x6d7 MovS
	var_1484_int = 1; // 0x6d8 MovI
	func_509(var_1481_int, var_1482_string, var_1483_string, var_1484_int); // 0x6d9 NEW_2
	var_1485_int = 0; var_1486_string = ""; var_1487_string = ""; var_1488_int = 0; // 0x6db PushV
	var_1485_int = var_1412_int; // 0x6dc Mov
	var_1486_string = "pers_littlegirl"; // 0x6dd MovS
	var_1487_string = "littlegirl.xml"; // 0x6de MovS
	var_1488_int = 1; // 0x6df MovI
	func_509(var_1485_int, var_1486_string, var_1487_string, var_1488_int); // 0x6e0 NEW_2
	
Label_1762:
	goto Label_1889; // 0x6e2 Jump
	
Label_1889:
	var_1489_bool = 0; var_1490_int = 0; var_1491_int = 0; // 0x761 PushV
	var_1490_int = var_1413_int; // 0x762 Mov
	var_1491_int = var_1414_int; // 0x763 Mov
	func_1351(var_1489_bool, var_1490_int, var_1491_int); // 0x764 NEW_2
	if(var_1489_bool == 0) goto Label_1902; // 0x766 JumpB
	var_1492_int = 0; var_1493_string = ""; var_1494_string = ""; var_1495_int = 0; // 0x767 PushV
	var_1492_int = var_1412_int; // 0x768 Mov
	var_1493_string = "pers_soldat"; // 0x769 MovS
	var_1494_string = "soldier_marauder.xml"; // 0x76a MovS
	var_1495_int = 2; // 0x76b MovI
	func_509(var_1492_int, var_1493_string, var_1494_string, var_1495_int); // 0x76c NEW_2
	
Label_1902:
	return 2; // 0x76e Return
	
Label_1763:
	var_1496_bool = 0; // 0x6e3 PushV
	var_1496_bool = 0; // 0x6e4 MovB
	var_1497_int = 8; // 0x6e5 PushI
	var_1498_bool = var_1414_int > var_1497_int; // 0x6e6 GT
	if(var_1498_bool == 0) goto Label_1772; // 0x6e7 JumpB
	var_1499_int = 21; // 0x6e8 PushI
	var_1500_bool = var_1414_int < var_1499_int; // 0x6e9 LT
	if(var_1500_bool == 0) goto Label_1772; // 0x6ea JumpB
	var_1496_bool = 1; // 0x6eb MovB
	
Label_1772:
	if(var_1496_bool == 0) goto Label_1849; // 0x6ec JumpB
	var_1501_int = 0; var_1502_string = ""; var_1503_string = ""; var_1504_int = 0; // 0x6ed PushV
	var_1501_int = var_1412_int; // 0x6ee Mov
	var_1502_string = "pers_woman"; // 0x6ef MovS
	var_1503_string = "woman.xml"; // 0x6f0 MovS
	var_1504_int = 1; // 0x6f1 MovI
	func_509(var_1501_int, var_1502_string, var_1503_string, var_1504_int); // 0x6f2 NEW_2
	var_1505_int = 0; var_1506_string = ""; var_1507_string = ""; var_1508_int = 0; // 0x6f4 PushV
	var_1505_int = var_1412_int; // 0x6f5 Mov
	var_1506_string = "pers_unosha"; // 0x6f6 MovS
	var_1507_string = "unosha.xml"; // 0x6f7 MovS
	var_1508_int = 1; // 0x6f8 MovI
	func_509(var_1505_int, var_1506_string, var_1507_string, var_1508_int); // 0x6f9 NEW_2
	var_1509_int = 0; var_1510_string = ""; var_1511_string = ""; var_1512_int = 0; // 0x6fb PushV
	var_1509_int = var_1412_int; // 0x6fc Mov
	var_1510_string = "pers_unosha"; // 0x6fd MovS
	var_1511_string = "unosha2.xml"; // 0x6fe MovS
	var_1512_int = 1; // 0x6ff MovI
	func_509(var_1509_int, var_1510_string, var_1511_string, var_1512_int); // 0x700 NEW_2
	var_1513_int = 0; var_1514_string = ""; var_1515_string = ""; var_1516_int = 0; // 0x702 PushV
	var_1513_int = var_1412_int; // 0x703 Mov
	var_1514_string = "pers_boy"; // 0x704 MovS
	var_1515_string = "boy.xml"; // 0x705 MovS
	var_1516_int = 1; // 0x706 MovI
	func_509(var_1513_int, var_1514_string, var_1515_string, var_1516_int); // 0x707 NEW_2
	var_1517_int = 0; var_1518_string = ""; var_1519_string = ""; var_1520_int = 0; // 0x709 PushV
	var_1517_int = var_1412_int; // 0x70a Mov
	var_1518_string = "pers_girl"; // 0x70b MovS
	var_1519_string = "girl.xml"; // 0x70c MovS
	var_1520_int = 1; // 0x70d MovI
	func_509(var_1517_int, var_1518_string, var_1519_string, var_1520_int); // 0x70e NEW_2
	var_1521_int = 0; var_1522_string = ""; var_1523_string = ""; var_1524_int = 0; // 0x710 PushV
	var_1521_int = var_1412_int; // 0x711 Mov
	var_1522_string = "pers_girl"; // 0x712 MovS
	var_1523_string = "girl2.xml"; // 0x713 MovS
	var_1524_int = 1; // 0x714 MovI
	func_509(var_1521_int, var_1522_string, var_1523_string, var_1524_int); // 0x715 NEW_2
	var_1525_int = 0; var_1526_string = ""; var_1527_string = ""; var_1528_int = 0; // 0x717 PushV
	var_1525_int = var_1412_int; // 0x718 Mov
	var_1526_string = "pers_littleboy"; // 0x719 MovS
	var_1527_string = "littleboy.xml"; // 0x71a MovS
	var_1528_int = 1; // 0x71b MovI
	func_509(var_1525_int, var_1526_string, var_1527_string, var_1528_int); // 0x71c NEW_2
	var_1529_int = 0; var_1530_string = ""; var_1531_string = ""; var_1532_int = 0; // 0x71e PushV
	var_1529_int = var_1412_int; // 0x71f Mov
	var_1530_string = "pers_littlegirl"; // 0x720 MovS
	var_1531_string = "littlegirl.xml"; // 0x721 MovS
	var_1532_int = 1; // 0x722 MovI
	func_509(var_1529_int, var_1530_string, var_1531_string, var_1532_int); // 0x723 NEW_2
	var_1533_int = 0; var_1534_string = ""; var_1535_string = ""; var_1536_int = 0; // 0x725 PushV
	var_1533_int = var_1412_int; // 0x726 Mov
	var_1534_string = "pers_alkash"; // 0x727 MovS
	var_1535_string = "alkash.xml"; // 0x728 MovS
	var_1536_int = 1; // 0x729 MovI
	func_509(var_1533_int, var_1534_string, var_1535_string, var_1536_int); // 0x72a NEW_2
	var_1537_int = 1; // 0x72c PushI
	var_1538_int = var_1413_int + var_1537_int; // 0x72d Add
	var_1539_int = 3; // 0x72e PushI
	var_1540_bool = var_1538_int >= var_1539_int; // 0x72f GE
	if(var_1540_bool == 0) goto Label_1848; // 0x730 JumpB
	var_1541_int = 0; var_1542_string = ""; var_1543_string = ""; var_1544_int = 0; // 0x731 PushV
	var_1541_int = var_1412_int; // 0x732 Mov
	var_1542_string = "pers_dohodyaga"; // 0x733 MovS
	var_1543_string = "dohodyaga.xml"; // 0x734 MovS
	var_1544_int = 1; // 0x735 MovI
	func_509(var_1541_int, var_1542_string, var_1543_string, var_1544_int); // 0x736 NEW_2
	
Label_1848:
	goto Label_1889; // 0x738 Jump
	
Label_1849:
	var_1545_int = 0; var_1546_string = ""; var_1547_string = ""; var_1548_int = 0; // 0x739 PushV
	var_1545_int = var_1412_int; // 0x73a Mov
	var_1546_string = "pers_woman"; // 0x73b MovS
	var_1547_string = "woman.xml"; // 0x73c MovS
	var_1548_int = 1; // 0x73d MovI
	func_509(var_1545_int, var_1546_string, var_1547_string, var_1548_int); // 0x73e NEW_2
	var_1549_int = 0; var_1550_string = ""; var_1551_string = ""; var_1552_int = 0; // 0x740 PushV
	var_1549_int = var_1412_int; // 0x741 Mov
	var_1550_string = "pers_unosha"; // 0x742 MovS
	var_1551_string = "unosha.xml"; // 0x743 MovS
	var_1552_int = 1; // 0x744 MovI
	func_509(var_1549_int, var_1550_string, var_1551_string, var_1552_int); // 0x745 NEW_2
	var_1553_int = 0; var_1554_string = ""; var_1555_string = ""; var_1556_int = 0; // 0x747 PushV
	var_1553_int = var_1412_int; // 0x748 Mov
	var_1554_string = "pers_unosha"; // 0x749 MovS
	var_1555_string = "unosha2.xml"; // 0x74a MovS
	var_1556_int = 1; // 0x74b MovI
	func_509(var_1553_int, var_1554_string, var_1555_string, var_1556_int); // 0x74c NEW_2
	var_1557_int = 0; var_1558_string = ""; var_1559_string = ""; var_1560_int = 0; // 0x74e PushV
	var_1557_int = var_1412_int; // 0x74f Mov
	var_1558_string = "pers_alkash"; // 0x750 MovS
	var_1559_string = "alkash.xml"; // 0x751 MovS
	var_1560_int = 1; // 0x752 MovI
	func_509(var_1557_int, var_1558_string, var_1559_string, var_1560_int); // 0x753 NEW_2
	var_1561_int = 1; // 0x755 PushI
	var_1562_int = var_1413_int + var_1561_int; // 0x756 Add
	var_1563_int = 3; // 0x757 PushI
	var_1564_bool = var_1562_int >= var_1563_int; // 0x758 GE
	if(var_1564_bool == 0) goto Label_1889; // 0x759 JumpB
	var_1565_int = 0; var_1566_string = ""; var_1567_string = ""; var_1568_int = 0; // 0x75a PushV
	var_1565_int = var_1412_int; // 0x75b Mov
	var_1566_string = "pers_dohodyaga"; // 0x75c MovS
	var_1567_string = "dohodyaga.xml"; // 0x75d MovS
	var_1568_int = 1; // 0x75e MovI
	func_509(var_1565_int, var_1566_string, var_1567_string, var_1568_int); // 0x75f NEW_2
}


func_7776(var_4461_bool)
{
	var_4462_object = Obj(); var_4463_object = Obj(); // 0x1e60 PushV
	var_4464_string = "arena_light"; // 0x1e61 PushS
	FindActor(var_4463_object, var_4464_string); // 0x1e62 Func
	Switch(var_4461_bool); // 0x1e64 ObjFunc
	return 2; // 0x1e66 Return
}


func_9828(var_5711_int, var_5712_float)
{
	var_5713_int = 0; var_5714_int = 0; var_5715_int = 0; var_5716_float = 0; // 0x2665 PushV
	var_5714_int = 501413; // 0x2666 MovI
	var_5715_int = 501412; // 0x2667 MovI
	var_5716_float = var_5712_float; // 0x2668 Mov
	func_12239(var_5713_int, var_5714_int, var_5715_int, var_5716_float); // 0x2669 NEW_2
	var_5711_int = var_5713_int; // 0x266a Mov
	return 0; // 0x266c Return
}


func_11879(var_5957_bool)
{
	var_5960_int = 0; var_5961_string = ""; // 0x2e68 PushV
	var_5961_string = "d9LaraVisit"; // 0x2e69 MovS
	func_138(var_5960_int, var_5961_string); // 0x2e6a NEW_2
	var_5962_int = 0; // 0x2e6c PushI
	var_5963_bool = var_5960_int != var_5962_int; // 0x2e6d Neq
	if(var_5963_bool == 0) goto Label_11889; // 0x2e6e JumpB
	var_5957_bool = 1; // 0x2e6f MovB
	return 0; // 0x2e70 Return
	
Label_11889:
	var_5957_bool = 0; // 0x2e71 MovB
	return 0; // 0x2e72 Return
}


func_7784()
{
	var_4218_object = Obj(); var_4219_bool = 0; var_4220_cvector = CVector(0,0,0); var_4221_cvector = CVector(0,0,0); var_4222_int = 0; var_4223_object = Obj(); var_4224_object = Obj(); var_4225_bool = 0; var_4226_cvector = CVector(0,0,0); var_4227_cvector = CVector(0,0,0); var_4228_int = 0; var_4229_object = Obj(); // 0x1e68 PushV
	var_4230_string = "Setting arena..."; // 0x1e69 PushS
	Trace(var_4230_string); // 0x1e6a Func
	var_4231_object = GlobalVars[11]; // 0x1e6c PushGE
	var_4232_bool = var_4231_object == 0; // 0x1e6d NullEq
	if(var_4232_bool == 0) goto Label_7846; // 0x1e6e JumpB
	GetMainOutdoorScene(var_4224_object); // 0x1e6f Func
	var_4233_string = "pt_arena_manager"; // 0x1e71 PushS
	GetLocator(var_4233_string, var_4225_bool, var_4226_cvector, var_4227_cvector); // 0x1e72 ObjFunc
	var_4234_bool = var_4225_bool == 0; // 0x1e74 Not
	if(var_4234_bool == 0) goto Label_7802; // 0x1e75 JumpB
	var_4235_string = "Locator doesn't exist for arena manager"; // 0x1e76 PushS
	Trace(var_4235_string); // 0x1e77 Func
	goto Label_7811; // 0x1e79 Jump
	
Label_7811:
	var_4228_int = 0; // 0x1e83 MovI
	
Label_7812:
	var_4236_int = 6; // 0x1e84 PushI
	var_4237_bool = var_4228_int < var_4236_int; // 0x1e85 LT
	if(var_4237_bool == 0) goto Label_7841; // 0x1e86 JumpB
	var_4238_string = "pt_arena_torch"; // 0x1e87 PushS
	var_4239_int = 1; // 0x1e88 PushI
	var_4240_int = var_4228_int + var_4239_int; // 0x1e89 Add
	var_4241_int = var_4238_string + var_4240_int; // 0x1e8a Add
	GetLocator(var_4241_int, var_4225_bool, var_4226_cvector, var_4227_cvector); // 0x1e8b ObjFunc
	var_4242_bool = var_4225_bool == 0; // 0x1e8d Not
	if(var_4242_bool == 0) goto Label_7830; // 0x1e8e JumpB
	var_4243_string = "Locator doesn't exist for arena torch "; // 0x1e8f PushS
	var_4244_int = 1; // 0x1e90 PushI
	var_4245_int = var_4228_int + var_4244_int; // 0x1e91 Add
	var_4246_int = var_4243_string + var_4245_int; // 0x1e92 Add
	Trace(var_4246_int); // 0x1e93 Func
	goto Label_7838; // 0x1e95 Jump
	
Label_7838:
	var_4247_int = 1; // 0x1e9e PushI
	var_4228_int = var_4228_int + var_4247_int; // 0x1e9f Add2
	goto Label_7812; // 0x1ea0 Jump
	
Label_7830:
	var_4248_string = "scripted"; // 0x1e96 PushS
	var_4249_string = "torch.xml"; // 0x1e97 PushS
	AddActorByType(var_4229_object, var_4248_string, var_4224_object, var_4226_cvector, var_4227_cvector, var_4249_string); // 0x1e98 Func
	var_4250_object = GlobalVars[12]; // 0x1e9a PushGE
	add(var_4229_object); // 0x1e9b ObjFunc
	var_4229_object = 0; // 0x1e9d SetNull
	
Label_7841:
	var_4251_bool = 0; // 0x1ea1 PushV
	var_4251_bool = 1; // 0x1ea2 MovB
	func_7776(var_4251_bool); // 0x1ea3 NEW_2
	var_4224_object = 0; // 0x1ea5 SetNull
	
Label_7846:
	return 12; // 0x1ea6 Return
	
Label_7802:
	var_4255_object = GlobalVars[11]; // 0x1e7a PushGE
	var_4256_object = Obj(); var_4257_object = Obj(); var_4258_cvector = CVector(0,0,0); var_4259_cvector = CVector(0,0,0); // 0x1e7b PushV
	var_4257_object = var_4224_object; // 0x1e7c Mov
	var_4258_cvector = var_4226_cvector; // 0x1e7d Mov
	var_4259_cvector = var_4227_cvector; // 0x1e7e Mov
	func_14600(var_4257_object, var_4258_cvector, var_4259_cvector); // 0x1e7f NEW_2
	var_4255_object = var_4256_object; // 0x1e80 Mov
	GlobalVars[11] = var_4255_object; // 0x1e82 PopGE
}


func_9837(var_5719_int, var_5720_float)
{
	var_5721_int = 0; var_5722_int = 0; var_5723_int = 0; var_5724_float = 0; // 0x266e PushV
	var_5722_int = 502662; // 0x266f MovI
	var_5723_int = 502661; // 0x2670 MovI
	var_5724_float = var_5720_float; // 0x2671 Mov
	func_12239(var_5721_int, var_5722_int, var_5723_int, var_5724_float); // 0x2672 NEW_2
	var_5719_int = var_5721_int; // 0x2673 Mov
	return 0; // 0x2675 Return
}


func_11891(var_6022_bool)
{
	var_6025_int = 0; var_6026_string = ""; // 0x2e74 PushV
	var_6026_string = "d9JuliaVisit"; // 0x2e75 MovS
	func_138(var_6025_int, var_6026_string); // 0x2e76 NEW_2
	var_6027_int = 0; // 0x2e78 PushI
	var_6028_bool = var_6025_int != var_6027_int; // 0x2e79 Neq
	if(var_6028_bool == 0) goto Label_11901; // 0x2e7a JumpB
	var_6022_bool = 1; // 0x2e7b MovB
	return 0; // 0x2e7c Return
	
Label_11901:
	var_6022_bool = 0; // 0x2e7d MovB
	return 0; // 0x2e7e Return
}


func_628(var_566_int, var_568_object, var_569_object, var_570_object)
{
	var_571_int = 0; var_572_bool = 0; // 0x275 PushV
	var_571_int = var_566_int; // 0x276 Mov
	var_572_bool = 1; // 0x277 MovB
	func_548(var_571_int, var_572_bool); // 0x278 NEW_2
	var_599_object = Obj(); // 0x27a PushV
	var_599_object = var_568_object; // 0x27b Mov
	func_269(var_599_object); // 0x27c NEW_2
	var_610_object = Obj(); // 0x27e PushV
	var_610_object = var_569_object; // 0x27f Mov
	func_269(var_610_object); // 0x280 NEW_2
	var_611_object = Obj(); // 0x282 PushV
	var_611_object = var_570_object; // 0x283 Mov
	func_269(var_611_object); // 0x284 NEW_2
	return 0; // 0x286 Return
}


func_10870()
{
	var_4713_object = Obj(); var_4714_object = Obj(); var_4715_object = Obj(); var_4716_object = Obj(); // 0x2a76 PushV
	var_4717_object = Obj(); // 0x2a77 PushV
	func_12247(var_4717_object); // 0x2a78 NEW_2
	var_4715_object = var_4717_object; // 0x2a79 Mov
	var_4718_string = "d3q01AlexandrGotoOspina"; // 0x2a7b PushS
	FindMark(var_4716_object, var_4718_string); // 0x2a7c ObjFunc
	var_4719_object = var_4716_object; // 0x2a7e Push
	if(var_4719_object == 0) goto Label_10882; // 0x2a7f JumpB
	Remove(); // 0x2a80 ObjFunc
	
Label_10882:
	var_4720_string = "d3q01BigVladAgreed"; // 0x2a82 PushS
	FindMark(var_4716_object, var_4720_string); // 0x2a83 ObjFunc
	var_4721_object = var_4716_object; // 0x2a85 Push
	if(var_4721_object == 0) goto Label_10889; // 0x2a86 JumpB
	Remove(); // 0x2a87 ObjFunc
	
Label_10889:
	var_4722_string = "d3q01OspinaGotoBigVlad"; // 0x2a89 PushS
	FindMark(var_4716_object, var_4722_string); // 0x2a8a ObjFunc
	var_4723_object = var_4716_object; // 0x2a8c Push
	if(var_4723_object == 0) goto Label_10896; // 0x2a8d JumpB
	Remove(); // 0x2a8e ObjFunc
	
Label_10896:
	var_4724_string = "d3q01RubinGotoAlexandr"; // 0x2a90 PushS
	FindMark(var_4716_object, var_4724_string); // 0x2a91 ObjFunc
	var_4725_object = var_4716_object; // 0x2a93 Push
	if(var_4725_object == 0) goto Label_10903; // 0x2a94 JumpB
	Remove(); // 0x2a95 ObjFunc
	
Label_10903:
	var_4726_string = "d3q02GeorgGotoViktor"; // 0x2a97 PushS
	FindMark(var_4716_object, var_4726_string); // 0x2a98 ObjFunc
	var_4727_object = var_4716_object; // 0x2a9a Push
	if(var_4727_object == 0) goto Label_10910; // 0x2a9b JumpB
	Remove(); // 0x2a9c ObjFunc
	
Label_10910:
	var_4728_string = "d3q02HanGotoMladVlad"; // 0x2a9e PushS
	FindMark(var_4716_object, var_4728_string); // 0x2a9f ObjFunc
	var_4729_object = var_4716_object; // 0x2aa1 Push
	if(var_4729_object == 0) goto Label_10917; // 0x2aa2 JumpB
	Remove(); // 0x2aa3 ObjFunc
	
Label_10917:
	var_4730_string = "d3q02MishkaGotoMladVlad"; // 0x2aa5 PushS
	FindMark(var_4716_object, var_4730_string); // 0x2aa6 ObjFunc
	var_4731_object = var_4716_object; // 0x2aa8 Push
	if(var_4731_object == 0) goto Label_10924; // 0x2aa9 JumpB
	Remove(); // 0x2aaa ObjFunc
	
Label_10924:
	var_4732_string = "d3q02MladVladGotoButcher"; // 0x2aac PushS
	FindMark(var_4716_object, var_4732_string); // 0x2aad ObjFunc
	var_4733_object = var_4716_object; // 0x2aaf Push
	if(var_4733_object == 0) goto Label_10931; // 0x2ab0 JumpB
	Remove(); // 0x2ab1 ObjFunc
	
Label_10931:
	var_4734_string = "d3q02MladVladGotoViktor"; // 0x2ab3 PushS
	FindMark(var_4716_object, var_4734_string); // 0x2ab4 ObjFunc
	var_4735_object = var_4716_object; // 0x2ab6 Push
	if(var_4735_object == 0) goto Label_10938; // 0x2ab7 JumpB
	Remove(); // 0x2ab8 ObjFunc
	
Label_10938:
	var_4736_string = "d3q02ViktorGotoHan"; // 0x2aba PushS
	FindMark(var_4716_object, var_4736_string); // 0x2abb ObjFunc
	var_4737_object = var_4716_object; // 0x2abd Push
	if(var_4737_object == 0) goto Label_10945; // 0x2abe JumpB
	Remove(); // 0x2abf ObjFunc
	
Label_10945:
	var_4738_string = "d3q02ViktorGotoMladVlad"; // 0x2ac1 PushS
	FindMark(var_4716_object, var_4738_string); // 0x2ac2 ObjFunc
	var_4739_object = var_4716_object; // 0x2ac4 Push
	if(var_4739_object == 0) goto Label_10952; // 0x2ac5 JumpB
	Remove(); // 0x2ac6 ObjFunc
	
Label_10952:
	var_4740_string = "d3q03KapellaBoyLocation"; // 0x2ac8 PushS
	FindMark(var_4716_object, var_4740_string); // 0x2ac9 ObjFunc
	var_4741_object = var_4716_object; // 0x2acb Push
	if(var_4741_object == 0) goto Label_10959; // 0x2acc JumpB
	Remove(); // 0x2acd ObjFunc
	
Label_10959:
	var_4742_bool = 0; var_4743_int = 0; // 0x2acf PushV
	var_4743_int = 25; // 0x2ad0 MovI
	func_12222(var_4742_bool, var_4743_int); // 0x2ad1 NEW_2
	var_4744_bool = 0; var_4745_int = 0; // 0x2ad3 PushV
	var_4745_int = 26; // 0x2ad4 MovI
	func_12222(var_4744_bool, var_4745_int); // 0x2ad5 NEW_2
	var_4746_bool = 0; var_4747_int = 0; // 0x2ad7 PushV
	var_4747_int = 27; // 0x2ad8 MovI
	func_12222(var_4746_bool, var_4747_int); // 0x2ad9 NEW_2
	return 4; // 0x2adb Return
}


func_9846(var_5631_int, var_5632_float)
{
	var_5633_int = 0; var_5634_int = 0; var_5635_int = 0; var_5636_float = 0; // 0x2677 PushV
	var_5634_int = 532770; // 0x2678 MovI
	var_5635_int = 532769; // 0x2679 MovI
	var_5636_float = var_5632_float; // 0x267a Mov
	func_12239(var_5633_int, var_5634_int, var_5635_int, var_5636_float); // 0x267b NEW_2
	var_5631_int = var_5633_int; // 0x267c Mov
	return 0; // 0x267e Return
}


func_6782(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object)
{
	var_2939_int = 0; // 0x1a7f PushI
	var_2940_bool = var_2934_int == var_2939_int; // 0x1a80 Eq
	if(var_2940_bool == 0) goto Label_6822; // 0x1a81 JumpB
	var_2941_int = 0; var_2942_bool = 0; // 0x1a82 PushV
	var_2941_int = 12; // 0x1a83 MovI
	var_2942_bool = 1; // 0x1a84 MovB
	func_802(var_2941_int, var_2942_bool); // 0x1a85 NEW_2
	var_2943_int = 0; var_2944_bool = 0; var_2945_int = 0; // 0x1a87 PushV
	var_2943_int = 12; // 0x1a88 MovI
	var_2944_bool = 1; // 0x1a89 MovB
	var_2945_int = 1; // 0x1a8a MovI
	func_819(var_2943_int, var_2944_bool, var_2945_int); // 0x1a8b NEW_2
	var_2946_int = 0; var_2947_int = 0; var_2948_object = Obj(); var_2949_object = Obj(); var_2950_object = Obj(); // 0x1a8d PushV
	var_2946_int = 12; // 0x1a8e MovI
	var_2947_int = var_2933_int; // 0x1a8f Mov
	var_2948_object = var_2935_object; // 0x1a90 Mov
	var_2949_object = var_2936_object; // 0x1a91 Mov
	var_2950_object = var_2937_object; // 0x1a92 Mov
	func_647(var_2946_int, var_2947_int, var_2948_object, var_2949_object, var_2950_object); // 0x1a93 NEW_2
	var_2951_object = Obj(); var_2952_int = 0; // 0x1a95 PushV
	var_2951_object = var_2938_object; // 0x1a96 Mov
	var_2952_int = 1; // 0x1a97 MovI
	func_311(var_2952_int); // 0x1a98 NEW_2
	var_2953_int = 0; var_2954_bool = 0; var_2955_int = 0; // 0x1a9a PushV
	var_2953_int = 12; // 0x1a9b MovI
	var_2954_bool = 1; // 0x1a9c MovB
	var_2955_int = 4; // 0x1a9d MovI
	func_876(var_2953_int, var_2954_bool, var_2955_int); // 0x1a9e NEW_2
	var_2956_int = 0; var_2957_bool = 0; var_2958_int = 0; // 0x1aa0 PushV
	var_2956_int = 12; // 0x1aa1 MovI
	var_2957_bool = 0; // 0x1aa2 MovB
	var_2958_int = 4; // 0x1aa3 MovI
	func_938(var_2956_int, var_2957_bool, var_2958_int); // 0x1aa4 NEW_2
	
Label_6822:
	var_2959_int = 0; var_2960_bool = 0; // 0x1aa6 PushV
	var_2959_int = 12; // 0x1aa7 MovI
	var_2960_bool = 0; // 0x1aa8 MovB
	func_785(var_2959_int, var_2960_bool); // 0x1aa9 NEW_2
	var_2961_int = 0; var_2962_int = 0; var_2963_int = 0; // 0x1aab PushV
	var_2961_int = 12; // 0x1aac MovI
	var_2962_int = var_2933_int; // 0x1aad Mov
	var_2963_int = var_2934_int; // 0x1aae Mov
	func_2770(var_2961_int, var_2962_int, var_2963_int); // 0x1aaf NEW_2
	return 0; // 0x1ab1 Return
}


func_9855(var_5615_int, var_5616_float)
{
	var_5617_int = 0; var_5618_int = 0; var_5619_int = 0; var_5620_float = 0; // 0x2680 PushV
	var_5618_int = 532768; // 0x2681 MovI
	var_5619_int = 532767; // 0x2682 MovI
	var_5620_float = var_5616_float; // 0x2683 Mov
	func_12239(var_5617_int, var_5618_int, var_5619_int, var_5620_float); // 0x2684 NEW_2
	var_5615_int = var_5617_int; // 0x2685 Mov
	return 0; // 0x2687 Return
}


func_11903(var_6050_bool)
{
	var_6053_int = 0; var_6054_string = ""; // 0x2e80 PushV
	var_6054_string = "d10AglajaVisit"; // 0x2e81 MovS
	func_138(var_6053_int, var_6054_string); // 0x2e82 NEW_2
	var_6055_int = 0; // 0x2e84 PushI
	var_6056_bool = var_6053_int != var_6055_int; // 0x2e85 Neq
	if(var_6056_bool == 0) goto Label_11913; // 0x2e86 JumpB
	var_6050_bool = 1; // 0x2e87 MovB
	return 0; // 0x2e88 Return
	
Label_11913:
	var_6050_bool = 0; // 0x2e89 MovB
	return 0; // 0x2e8a Return
}


func_5761(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object)
{
	var_2668_int = 0; // 0x1682 PushI
	var_2669_bool = var_2663_int == var_2668_int; // 0x1683 Eq
	if(var_2669_bool == 0) goto Label_5801; // 0x1684 JumpB
	var_2670_int = 0; var_2671_bool = 0; // 0x1685 PushV
	var_2670_int = 7; // 0x1686 MovI
	var_2671_bool = 1; // 0x1687 MovB
	func_802(var_2670_int, var_2671_bool); // 0x1688 NEW_2
	var_2672_int = 0; var_2673_bool = 0; var_2674_int = 0; // 0x168a PushV
	var_2672_int = 7; // 0x168b MovI
	var_2673_bool = 1; // 0x168c MovB
	var_2674_int = 1; // 0x168d MovI
	func_819(var_2672_int, var_2673_bool, var_2674_int); // 0x168e NEW_2
	var_2675_int = 0; var_2676_int = 0; var_2677_object = Obj(); var_2678_object = Obj(); var_2679_object = Obj(); // 0x1690 PushV
	var_2675_int = 7; // 0x1691 MovI
	var_2676_int = var_2662_int; // 0x1692 Mov
	var_2677_object = var_2664_object; // 0x1693 Mov
	var_2678_object = var_2665_object; // 0x1694 Mov
	var_2679_object = var_2666_object; // 0x1695 Mov
	func_647(var_2675_int, var_2676_int, var_2677_object, var_2678_object, var_2679_object); // 0x1696 NEW_2
	var_2680_object = Obj(); var_2681_int = 0; // 0x1698 PushV
	var_2680_object = var_2667_object; // 0x1699 Mov
	var_2681_int = 1; // 0x169a MovI
	func_311(var_2681_int); // 0x169b NEW_2
	var_2682_int = 0; var_2683_bool = 0; var_2684_int = 0; // 0x169d PushV
	var_2682_int = 7; // 0x169e MovI
	var_2683_bool = 1; // 0x169f MovB
	var_2684_int = 6; // 0x16a0 MovI
	func_876(var_2682_int, var_2683_bool, var_2684_int); // 0x16a1 NEW_2
	var_2685_int = 0; var_2686_bool = 0; var_2687_int = 0; // 0x16a3 PushV
	var_2685_int = 7; // 0x16a4 MovI
	var_2686_bool = 0; // 0x16a5 MovB
	var_2687_int = 6; // 0x16a6 MovI
	func_938(var_2685_int, var_2686_bool, var_2687_int); // 0x16a7 NEW_2
	
Label_5801:
	var_2688_int = 0; var_2689_bool = 0; // 0x16a9 PushV
	var_2688_int = 7; // 0x16aa MovI
	var_2689_bool = 0; // 0x16ab MovB
	func_785(var_2688_int, var_2689_bool); // 0x16ac NEW_2
	var_2690_int = 0; var_2691_int = 0; var_2692_int = 0; // 0x16ae PushV
	var_2690_int = 7; // 0x16af MovI
	var_2691_int = var_2662_int; // 0x16b0 Mov
	var_2692_int = var_2663_int; // 0x16b1 Mov
	func_2770(var_2690_int, var_2691_int, var_2692_int); // 0x16b2 NEW_2
	return 0; // 0x16b4 Return
}


func_647(var_2018_int, var_2019_int, var_2020_object, var_2021_object, var_2022_object)
{
	var_2023_int = 0; var_2024_bool = 0; // 0x288 PushV
	var_2023_int = var_2018_int; // 0x289 Mov
	var_2024_bool = 0; // 0x28a MovB
	func_548(var_2023_int, var_2024_bool); // 0x28b NEW_2
	var_2025_object = Obj(); // 0x28d PushV
	var_2025_object = var_2020_object; // 0x28e Mov
	func_269(var_2025_object); // 0x28f NEW_2
	var_2026_object = Obj(); // 0x291 PushV
	var_2026_object = var_2021_object; // 0x292 Mov
	func_269(var_2026_object); // 0x293 NEW_2
	var_2027_object = Obj(); // 0x295 PushV
	var_2027_object = var_2022_object; // 0x296 Mov
	func_269(var_2027_object); // 0x297 NEW_2
	var_2028_int = 8; // 0x299 PushI
	var_2029_bool = var_2019_int < var_2028_int; // 0x29a LT
	if(var_2029_bool == 0) goto Label_691; // 0x29b JumpB
	var_2030_string = ""; var_2031_object = Obj(); var_2032_string = ""; var_2033_string = ""; // 0x29c PushV
	var_2034_string = "pt_blockpost"; // 0x29d PushS
	var_2035_int = 1; // 0x29e PushI
	var_2036_int = var_2018_int + var_2035_int; // 0x29f Add
	var_2037_int = var_2034_string + var_2036_int; // 0x2a0 Add
	var_2038_string = "_1_"; // 0x2a1 PushS
	var_2030_string = var_2037_int + var_2038_string; // 0x2a2 Add2
	var_2031_object = var_2020_object; // 0x2a3 Mov
	var_2032_string = "pers_patrool"; // 0x2a4 MovS
	var_2033_string = "patrol_stat.xml"; // 0x2a5 MovS
	func_582(var_2031_object, var_2032_string, var_2033_string); // 0x2a6 NEW_2
	var_2056_string = ""; var_2057_object = Obj(); // 0x2a8 PushV
	var_2058_string = "pt_fog"; // 0x2a9 PushS
	var_2059_int = 1; // 0x2aa PushI
	var_2060_int = var_2018_int + var_2059_int; // 0x2ab Add
	var_2061_int = var_2058_string + var_2060_int; // 0x2ac Add
	var_2062_string = "_"; // 0x2ad PushS
	var_2056_string = var_2061_int + var_2062_string; // 0x2ae Add2
	var_2057_object = var_2022_object; // 0x2af Mov
	func_604(var_2057_object); // 0x2b0 NEW_2
	goto Label_725; // 0x2b2 Jump
	
Label_725:
	return 0; // 0x2d5 Return
	
Label_691:
	var_2083_string = ""; var_2084_object = Obj(); var_2085_string = ""; var_2086_string = ""; // 0x2b3 PushV
	var_2087_string = "pt_blockpost"; // 0x2b4 PushS
	var_2088_int = 1; // 0x2b5 PushI
	var_2089_int = var_2018_int + var_2088_int; // 0x2b6 Add
	var_2090_int = var_2087_string + var_2089_int; // 0x2b7 Add
	var_2091_string = "_1_"; // 0x2b8 PushS
	var_2083_string = var_2090_int + var_2091_string; // 0x2b9 Add2
	var_2084_object = var_2020_object; // 0x2ba Mov
	var_2085_string = "pers_soldat"; // 0x2bb MovS
	var_2086_string = "soldier.xml"; // 0x2bc MovS
	func_582(var_2084_object, var_2085_string, var_2086_string); // 0x2bd NEW_2
	var_2092_string = ""; var_2093_object = Obj(); var_2094_string = ""; var_2095_string = ""; // 0x2bf PushV
	var_2096_string = "pt_blockpost"; // 0x2c0 PushS
	var_2097_int = 1; // 0x2c1 PushI
	var_2098_int = var_2018_int + var_2097_int; // 0x2c2 Add
	var_2099_int = var_2096_string + var_2098_int; // 0x2c3 Add
	var_2100_string = "_2_"; // 0x2c4 PushS
	var_2092_string = var_2099_int + var_2100_string; // 0x2c5 Add2
	var_2093_object = var_2021_object; // 0x2c6 Mov
	var_2094_string = "pers_sanitar"; // 0x2c7 MovS
	var_2095_string = "sanitar_stat.xml"; // 0x2c8 MovS
	func_582(var_2093_object, var_2094_string, var_2095_string); // 0x2c9 NEW_2
	var_2101_string = ""; var_2102_object = Obj(); // 0x2cb PushV
	var_2103_string = "pt_fog"; // 0x2cc PushS
	var_2104_int = 1; // 0x2cd PushI
	var_2105_int = var_2018_int + var_2104_int; // 0x2ce Add
	var_2106_int = var_2103_string + var_2105_int; // 0x2cf Add
	var_2107_string = "_"; // 0x2d0 PushS
	var_2101_string = var_2106_int + var_2107_string; // 0x2d1 Add2
	var_2102_object = var_2022_object; // 0x2d2 Mov
	func_604(var_2102_object); // 0x2d3 NEW_2
}


func_9864(var_6277_int, var_6278_float)
{
	var_6279_int = 0; var_6280_int = 0; var_6281_int = 0; var_6282_float = 0; // 0x2689 PushV
	var_6280_int = 541589; // 0x268a MovI
	var_6281_int = 541588; // 0x268b MovI
	var_6282_float = var_6278_float; // 0x268c Mov
	func_12239(var_6279_int, var_6280_int, var_6281_int, var_6282_float); // 0x268d NEW_2
	var_6277_int = var_6279_int; // 0x268e Mov
	return 0; // 0x2690 Return
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


func_11915(var_6090_bool)
{
	var_6093_int = 0; var_6094_string = ""; // 0x2e8c PushV
	var_6094_string = "d11ViktorVisit"; // 0x2e8d MovS
	func_138(var_6093_int, var_6094_string); // 0x2e8e NEW_2
	var_6095_int = 0; // 0x2e90 PushI
	var_6096_bool = var_6093_int != var_6095_int; // 0x2e91 Neq
	if(var_6096_bool == 0) goto Label_11925; // 0x2e92 JumpB
	var_6090_bool = 1; // 0x2e93 MovB
	return 0; // 0x2e94 Return
	
Label_11925:
	var_6090_bool = 0; // 0x2e95 MovB
	return 0; // 0x2e96 Return
}


func_9873(var_5252_int, var_5253_float)
{
	var_5254_int = 0; var_5255_int = 0; var_5256_int = 0; var_5257_float = 0; // 0x2692 PushV
	var_5255_int = 501175; // 0x2693 MovI
	var_5256_int = 501174; // 0x2694 MovI
	var_5257_float = var_5253_float; // 0x2695 Mov
	func_12239(var_5254_int, var_5255_int, var_5256_int, var_5257_float); // 0x2696 NEW_2
	var_5252_int = var_5254_int; // 0x2697 Mov
	return 0; // 0x2699 Return
}


func_11927(var_6120_bool)
{
	var_6123_int = 0; var_6124_string = ""; // 0x2e98 PushV
	var_6124_string = "d9AglajaVisit"; // 0x2e99 MovS
	func_138(var_6123_int, var_6124_string); // 0x2e9a NEW_2
	var_6125_int = 0; // 0x2e9c PushI
	var_6126_bool = var_6123_int != var_6125_int; // 0x2e9d Neq
	if(var_6126_bool == 0) goto Label_11937; // 0x2e9e JumpB
	var_6120_bool = 1; // 0x2e9f MovB
	return 0; // 0x2ea0 Return
	
Label_11937:
	var_6120_bool = 0; // 0x2ea1 MovB
	return 0; // 0x2ea2 Return
}


func_9882(var_5727_int, var_5728_float)
{
	var_5729_int = 0; var_5730_int = 0; var_5731_int = 0; var_5732_float = 0; // 0x269b PushV
	var_5730_int = 522198; // 0x269c MovI
	var_5731_int = 522197; // 0x269d MovI
	var_5732_float = var_5728_float; // 0x269e Mov
	func_12239(var_5729_int, var_5730_int, var_5731_int, var_5732_float); // 0x269f NEW_2
	var_5727_int = var_5729_int; // 0x26a0 Mov
	return 0; // 0x26a2 Return
}


func_9891(var_6066_int, var_6067_float)
{
	var_6068_int = 0; var_6069_int = 0; var_6070_int = 0; var_6071_float = 0; // 0x26a4 PushV
	var_6069_int = 538398; // 0x26a5 MovI
	var_6070_int = 538397; // 0x26a6 MovI
	var_6071_float = var_6067_float; // 0x26a7 Mov
	func_12239(var_6068_int, var_6069_int, var_6070_int, var_6071_float); // 0x26a8 NEW_2
	var_6066_int = var_6068_int; // 0x26a9 Mov
	return 0; // 0x26ab Return
}


func_11939(var_6136_bool)
{
	var_6139_int = 0; var_6140_string = ""; // 0x2ea4 PushV
	var_6140_string = "d9ViktorVisit"; // 0x2ea5 MovS
	func_138(var_6139_int, var_6140_string); // 0x2ea6 NEW_2
	var_6141_int = 0; // 0x2ea8 PushI
	var_6142_bool = var_6139_int != var_6141_int; // 0x2ea9 Neq
	if(var_6142_bool == 0) goto Label_11949; // 0x2eaa JumpB
	var_6136_bool = 1; // 0x2eab MovB
	return 0; // 0x2eac Return
	
Label_11949:
	var_6136_bool = 0; // 0x2ead MovB
	return 0; // 0x2eae Return
}


func_7847()
{
	var_4500_int = 0; var_4501_int = 0; var_4502_object = Obj(); var_4503_int = 0; var_4504_int = 0; var_4505_object = Obj(); // 0x1ea7 PushV
	var_4506_string = "Cleaning arena..."; // 0x1ea8 PushS
	Trace(var_4506_string); // 0x1ea9 Func
	var_4507_object = GlobalVars[11]; // 0x1eab PushGE
	var_4508_bool = var_4507_object != 0; // 0x1eac NullNeq
	if(var_4508_bool == 0) goto Label_7880; // 0x1ead JumpB
	var_4509_object = GlobalVars[11]; // 0x1eae PushGE
	Remove(); // 0x1eaf ObjFunc
	var_4510_object = GlobalVars[12]; // 0x1eb1 PushGE
	size(var_4503_int); // 0x1eb2 ObjFunc
	var_4504_int = 0; // 0x1eb4 MovI
	
Label_7861:
	var_4511_bool = var_4504_int < var_4503_int; // 0x1eb5 LT
	if(var_4511_bool == 0) goto Label_7873; // 0x1eb6 JumpB
	var_4512_object = GlobalVars[12]; // 0x1eb7 PushGE
	get(var_4505_object, var_4504_int); // 0x1eb8 ObjFunc
	var_4513_string = "remove"; // 0x1eba PushS
	Trigger(var_4505_object, var_4513_string); // 0x1ebb Func
	var_4505_object = 0; // 0x1ebd SetNull
	var_4514_int = 1; // 0x1ebe PushI
	var_4504_int = var_4504_int + var_4514_int; // 0x1ebf Add2
	goto Label_7861; // 0x1ec0 Jump
	
Label_7873:
	var_4515_object = GlobalVars[12]; // 0x1ec1 PushGE
	clear(); // 0x1ec2 ObjFunc
	var_4516_bool = 0; // 0x1ec4 PushV
	var_4516_bool = 0; // 0x1ec5 MovB
	func_7776(var_4516_bool); // 0x1ec6 NEW_2
	
Label_7880:
	return 6; // 0x1ec8 Return
}


func_9900(var_6074_int, var_6075_float)
{
	var_6076_int = 0; var_6077_int = 0; var_6078_int = 0; var_6079_float = 0; // 0x26ad PushV
	var_6077_int = 538400; // 0x26ae MovI
	var_6078_int = 538399; // 0x26af MovI
	var_6079_float = var_6075_float; // 0x26b0 Mov
	func_12239(var_6076_int, var_6077_int, var_6078_int, var_6079_float); // 0x26b1 NEW_2
	var_6074_int = var_6076_int; // 0x26b2 Mov
	return 0; // 0x26b4 Return
}


func_11951(var_6234_bool)
{
	var_6237_int = 0; var_6238_string = ""; // 0x2eb0 PushV
	var_6238_string = "d2q03RepDown"; // 0x2eb1 MovS
	func_138(var_6237_int, var_6238_string); // 0x2eb2 NEW_2
	var_6239_int = 0; // 0x2eb4 PushI
	var_6240_bool = var_6237_int != var_6239_int; // 0x2eb5 Neq
	if(var_6240_bool == 0) goto Label_11961; // 0x2eb6 JumpB
	var_6234_bool = 1; // 0x2eb7 MovB
	return 0; // 0x2eb8 Return
	
Label_11961:
	var_6234_bool = 0; // 0x2eb9 MovB
	return 0; // 0x2eba Return
}


func_6834(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object)
{
	var_4069_int = 0; // 0x1ab3 PushI
	var_4070_bool = var_4064_int == var_4069_int; // 0x1ab4 Eq
	if(var_4070_bool == 0) goto Label_6874; // 0x1ab5 JumpB
	var_4071_int = 0; var_4072_bool = 0; // 0x1ab6 PushV
	var_4071_int = 12; // 0x1ab7 MovI
	var_4072_bool = 0; // 0x1ab8 MovB
	func_802(var_4071_int, var_4072_bool); // 0x1ab9 NEW_2
	var_4073_int = 0; var_4074_bool = 0; var_4075_int = 0; // 0x1abb PushV
	var_4073_int = 12; // 0x1abc MovI
	var_4074_bool = 0; // 0x1abd MovB
	var_4075_int = 1; // 0x1abe MovI
	func_819(var_4073_int, var_4074_bool, var_4075_int); // 0x1abf NEW_2
	var_4076_int = 0; var_4077_int = 0; var_4078_object = Obj(); var_4079_object = Obj(); var_4080_object = Obj(); // 0x1ac1 PushV
	var_4076_int = 12; // 0x1ac2 MovI
	var_4077_int = var_4063_int; // 0x1ac3 Mov
	var_4078_object = var_4065_object; // 0x1ac4 Mov
	var_4079_object = var_4066_object; // 0x1ac5 Mov
	var_4080_object = var_4067_object; // 0x1ac6 Mov
	func_726(var_4076_int, var_4077_int, var_4078_object, var_4079_object, var_4080_object); // 0x1ac7 NEW_2
	var_4081_object = Obj(); var_4082_int = 0; // 0x1ac9 PushV
	var_4081_object = var_4068_object; // 0x1aca Mov
	var_4082_int = 2; // 0x1acb MovI
	func_311(var_4082_int); // 0x1acc NEW_2
	var_4083_int = 0; var_4084_bool = 0; var_4085_int = 0; // 0x1ace PushV
	var_4083_int = 12; // 0x1acf MovI
	var_4084_bool = 0; // 0x1ad0 MovB
	var_4085_int = 4; // 0x1ad1 MovI
	func_876(var_4083_int, var_4084_bool, var_4085_int); // 0x1ad2 NEW_2
	var_4086_int = 0; var_4087_bool = 0; var_4088_int = 0; // 0x1ad4 PushV
	var_4086_int = 12; // 0x1ad5 MovI
	var_4087_bool = 1; // 0x1ad6 MovB
	var_4088_int = 4; // 0x1ad7 MovI
	func_938(var_4086_int, var_4087_bool, var_4088_int); // 0x1ad8 NEW_2
	
Label_6874:
	var_4089_int = 0; var_4090_bool = 0; // 0x1ada PushV
	var_4089_int = 12; // 0x1adb MovI
	var_4090_bool = 0; // 0x1adc MovB
	func_785(var_4089_int, var_4090_bool); // 0x1add NEW_2
	var_4091_int = 0; var_4092_int = 0; var_4093_int = 0; // 0x1adf PushV
	var_4091_int = 12; // 0x1ae0 MovI
	var_4092_int = var_4063_int; // 0x1ae1 Mov
	var_4093_int = var_4064_int; // 0x1ae2 Mov
	func_3665(var_4091_int, var_4092_int, var_4093_int); // 0x1ae3 NEW_2
	return 0; // 0x1ae5 Return
}


func_5813(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object)
{
	var_3794_int = 0; // 0x16b6 PushI
	var_3795_bool = var_3789_int == var_3794_int; // 0x16b7 Eq
	if(var_3795_bool == 0) goto Label_5853; // 0x16b8 JumpB
	var_3796_int = 0; var_3797_bool = 0; // 0x16b9 PushV
	var_3796_int = 7; // 0x16ba MovI
	var_3797_bool = 0; // 0x16bb MovB
	func_802(var_3796_int, var_3797_bool); // 0x16bc NEW_2
	var_3798_int = 0; var_3799_bool = 0; var_3800_int = 0; // 0x16be PushV
	var_3798_int = 7; // 0x16bf MovI
	var_3799_bool = 0; // 0x16c0 MovB
	var_3800_int = 1; // 0x16c1 MovI
	func_819(var_3798_int, var_3799_bool, var_3800_int); // 0x16c2 NEW_2
	var_3801_int = 0; var_3802_int = 0; var_3803_object = Obj(); var_3804_object = Obj(); var_3805_object = Obj(); // 0x16c4 PushV
	var_3801_int = 7; // 0x16c5 MovI
	var_3802_int = var_3788_int; // 0x16c6 Mov
	var_3803_object = var_3790_object; // 0x16c7 Mov
	var_3804_object = var_3791_object; // 0x16c8 Mov
	var_3805_object = var_3792_object; // 0x16c9 Mov
	func_726(var_3801_int, var_3802_int, var_3803_object, var_3804_object, var_3805_object); // 0x16ca NEW_2
	var_3806_object = Obj(); var_3807_int = 0; // 0x16cc PushV
	var_3806_object = var_3793_object; // 0x16cd Mov
	var_3807_int = 2; // 0x16ce MovI
	func_311(var_3807_int); // 0x16cf NEW_2
	var_3808_int = 0; var_3809_bool = 0; var_3810_int = 0; // 0x16d1 PushV
	var_3808_int = 7; // 0x16d2 MovI
	var_3809_bool = 0; // 0x16d3 MovB
	var_3810_int = 6; // 0x16d4 MovI
	func_876(var_3808_int, var_3809_bool, var_3810_int); // 0x16d5 NEW_2
	var_3811_int = 0; var_3812_bool = 0; var_3813_int = 0; // 0x16d7 PushV
	var_3811_int = 7; // 0x16d8 MovI
	var_3812_bool = 1; // 0x16d9 MovB
	var_3813_int = 6; // 0x16da MovI
	func_938(var_3811_int, var_3812_bool, var_3813_int); // 0x16db NEW_2
	
Label_5853:
	var_3814_int = 0; var_3815_bool = 0; // 0x16dd PushV
	var_3814_int = 7; // 0x16de MovI
	var_3815_bool = 0; // 0x16df MovB
	func_785(var_3814_int, var_3815_bool); // 0x16e0 NEW_2
	var_3816_int = 0; var_3817_int = 0; var_3818_int = 0; // 0x16e2 PushV
	var_3816_int = 7; // 0x16e3 MovI
	var_3817_int = var_3788_int; // 0x16e4 Mov
	var_3818_int = var_3789_int; // 0x16e5 Mov
	func_3665(var_3816_int, var_3817_int, var_3818_int); // 0x16e6 NEW_2
	return 0; // 0x16e8 Return
}


func_9909(var_5290_int, var_5291_float)
{
	var_5292_int = 0; var_5293_int = 0; var_5294_int = 0; var_5295_float = 0; // 0x26b6 PushV
	var_5293_int = 515303; // 0x26b7 MovI
	var_5294_int = 515302; // 0x26b8 MovI
	var_5295_float = var_5291_float; // 0x26b9 Mov
	func_12239(var_5292_int, var_5293_int, var_5294_int, var_5295_float); // 0x26ba NEW_2
	var_5290_int = var_5292_int; // 0x26bb Mov
	return 0; // 0x26bd Return
}


func_11963(var_5484_bool, var_5485_object)
{
	var_5487_bool = 0; var_5488_object = Obj(); // 0x2ebc PushV
	var_5488_object = var_5485_object; // 0x2ebd Mov
	func_12165(var_5488_object); // 0x2ebe NEW_2
	if(var_5487_bool == 0) goto Label_11971; // 0x2ec0 JumpB
	var_5484_bool = 1; // 0x2ec1 MovB
	return 0; // 0x2ec2 Return
	
Label_11971:
	var_5484_bool = 0; // 0x2ec3 MovB
	return 0; // 0x2ec4 Return
}


func_4796(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object)
{
	var_1035_int = 0; // 0x12bd PushI
	var_1036_bool = var_1030_int == var_1035_int; // 0x12be Eq
	if(var_1036_bool == 0) goto Label_4836; // 0x12bf JumpB
	var_1037_int = 0; var_1038_bool = 0; // 0x12c0 PushV
	var_1037_int = 2; // 0x12c1 MovI
	var_1038_bool = 0; // 0x12c2 MovB
	func_802(var_1037_int, var_1038_bool); // 0x12c3 NEW_2
	var_1039_int = 0; var_1040_bool = 0; var_1041_int = 0; // 0x12c5 PushV
	var_1039_int = 2; // 0x12c6 MovI
	var_1040_bool = 0; // 0x12c7 MovB
	var_1041_int = 1; // 0x12c8 MovI
	func_819(var_1039_int, var_1040_bool, var_1041_int); // 0x12c9 NEW_2
	var_1042_int = 0; var_1043_int = 0; var_1044_object = Obj(); var_1045_object = Obj(); var_1046_object = Obj(); // 0x12cb PushV
	var_1042_int = 2; // 0x12cc MovI
	var_1043_int = var_1029_int; // 0x12cd Mov
	var_1044_object = var_1031_object; // 0x12ce Mov
	var_1045_object = var_1032_object; // 0x12cf Mov
	var_1046_object = var_1033_object; // 0x12d0 Mov
	func_628(var_1043_int, var_1044_object, var_1045_object, var_1046_object); // 0x12d1 NEW_2
	var_1047_object = Obj(); var_1048_int = 0; // 0x12d3 PushV
	var_1047_object = var_1034_object; // 0x12d4 Mov
	var_1048_int = 0; // 0x12d5 MovI
	func_311(var_1048_int); // 0x12d6 NEW_2
	var_1049_int = 0; var_1050_bool = 0; var_1051_int = 0; // 0x12d8 PushV
	var_1049_int = 2; // 0x12d9 MovI
	var_1050_bool = 0; // 0x12da MovB
	var_1051_int = 5; // 0x12db MovI
	func_876(var_1049_int, var_1050_bool, var_1051_int); // 0x12dc NEW_2
	var_1052_int = 0; var_1053_bool = 0; var_1054_int = 0; // 0x12de PushV
	var_1052_int = 2; // 0x12df MovI
	var_1053_bool = 0; // 0x12e0 MovB
	var_1054_int = 5; // 0x12e1 MovI
	func_938(var_1052_int, var_1053_bool, var_1054_int); // 0x12e2 NEW_2
	
Label_4836:
	var_1055_int = 0; var_1056_int = 0; // 0x12e4 PushV
	var_1055_int = 2; // 0x12e5 MovI
	var_1056_int = var_1030_int; // 0x12e6 Mov
	func_1056(var_1055_int, var_1056_int); // 0x12e7 NEW_2
	var_1057_int = 0; var_1058_int = 0; var_1059_int = 0; // 0x12e9 PushV
	var_1057_int = 2; // 0x12ea MovI
	var_1058_int = var_1029_int; // 0x12eb Mov
	var_1059_int = var_1030_int; // 0x12ec Mov
	func_1903(var_1057_int, var_1058_int, var_1059_int); // 0x12ed NEW_2
	return 0; // 0x12ef Return
}


func_9918(var_5274_int, var_5275_float)
{
	var_5276_int = 0; var_5277_int = 0; var_5278_int = 0; var_5279_float = 0; // 0x26bf PushV
	var_5277_int = 502851; // 0x26c0 MovI
	var_5278_int = 502850; // 0x26c1 MovI
	var_5279_float = var_5275_float; // 0x26c2 Mov
	func_12239(var_5276_int, var_5277_int, var_5278_int, var_5279_float); // 0x26c3 NEW_2
	var_5274_int = var_5276_int; // 0x26c4 Mov
	return 0; // 0x26c6 Return
}


func_8901(var_501_int, var_502_int, var_503_int)
{
	var_504_object = Obj(); var_505_object = Obj(); var_506_object = Obj(); var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj(); var_510_object = Obj(); var_511_object = Obj(); // 0x22c5 PushV
	var_512_object = GlobalVars[8]; // 0x22c6 PushGE
	get(var_508_object, var_501_int); // 0x22c7 ObjFunc
	var_513_object = GlobalVars[9]; // 0x22c9 PushGE
	get(var_509_object, var_501_int); // 0x22ca ObjFunc
	var_514_object = GlobalVars[10]; // 0x22cc PushGE
	get(var_510_object, var_501_int); // 0x22cd ObjFunc
	var_515_object = GlobalVars[13]; // 0x22cf PushGE
	get(var_511_object, var_501_int); // 0x22d0 ObjFunc
	var_516_int = 0; // 0x22d2 PushI
	var_517_bool = var_501_int == var_516_int; // 0x22d3 Eq
	if(var_517_bool == 0) goto Label_8927; // 0x22d4 JumpB
	var_518_int = 0; var_519_int = 0; var_520_object = Obj(); var_521_object = Obj(); var_522_object = Obj(); var_523_object = Obj(); // 0x22d5 PushV
	var_518_int = var_502_int; // 0x22d6 Mov
	var_519_int = var_503_int; // 0x22d7 Mov
	var_520_object = var_508_object; // 0x22d8 Mov
	var_521_object = var_509_object; // 0x22d9 Mov
	var_522_object = var_510_object; // 0x22da Mov
	var_523_object = var_511_object; // 0x22db Mov
	func_4393(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object); // 0x22dc NEW_2
	goto Label_9121; // 0x22de Jump
	
Label_9121:
	return 8; // 0x23a1 Return
	
Label_8927:
	var_884_int = 1; // 0x22df PushI
	var_885_bool = var_501_int == var_884_int; // 0x22e0 Eq
	if(var_885_bool == 0) goto Label_8940; // 0x22e1 JumpB
	var_886_int = 0; var_887_int = 0; var_888_object = Obj(); var_889_object = Obj(); var_890_object = Obj(); var_891_object = Obj(); // 0x22e2 PushV
	var_886_int = var_502_int; // 0x22e3 Mov
	var_887_int = var_503_int; // 0x22e4 Mov
	var_888_object = var_508_object; // 0x22e5 Mov
	var_889_object = var_509_object; // 0x22e6 Mov
	var_890_object = var_510_object; // 0x22e7 Mov
	var_891_object = var_511_object; // 0x22e8 Mov
	func_4590(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object); // 0x22e9 NEW_2
	goto Label_9121; // 0x22eb Jump
	
Label_8940:
	var_1027_int = 2; // 0x22ec PushI
	var_1028_bool = var_501_int == var_1027_int; // 0x22ed Eq
	if(var_1028_bool == 0) goto Label_8953; // 0x22ee JumpB
	var_1029_int = 0; var_1030_int = 0; var_1031_object = Obj(); var_1032_object = Obj(); var_1033_object = Obj(); var_1034_object = Obj(); // 0x22ef PushV
	var_1029_int = var_502_int; // 0x22f0 Mov
	var_1030_int = var_503_int; // 0x22f1 Mov
	var_1031_object = var_508_object; // 0x22f2 Mov
	var_1032_object = var_509_object; // 0x22f3 Mov
	var_1033_object = var_510_object; // 0x22f4 Mov
	var_1034_object = var_511_object; // 0x22f5 Mov
	func_4796(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object); // 0x22f6 NEW_2
	goto Label_9121; // 0x22f8 Jump
	
Label_8953:
	var_1246_int = 3; // 0x22f9 PushI
	var_1247_bool = var_501_int == var_1246_int; // 0x22fa Eq
	if(var_1247_bool == 0) goto Label_8966; // 0x22fb JumpB
	var_1248_int = 0; var_1249_int = 0; var_1250_object = Obj(); var_1251_object = Obj(); var_1252_object = Obj(); var_1253_object = Obj(); // 0x22fc PushV
	var_1248_int = var_502_int; // 0x22fd Mov
	var_1249_int = var_503_int; // 0x22fe Mov
	var_1250_object = var_508_object; // 0x22ff Mov
	var_1251_object = var_509_object; // 0x2300 Mov
	var_1252_object = var_510_object; // 0x2301 Mov
	var_1253_object = var_511_object; // 0x2302 Mov
	func_5026(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object); // 0x2303 NEW_2
	goto Label_9121; // 0x2305 Jump
	
Label_8966:
	var_1294_int = 4; // 0x2306 PushI
	var_1295_bool = var_501_int == var_1294_int; // 0x2307 Eq
	if(var_1295_bool == 0) goto Label_8979; // 0x2308 JumpB
	var_1296_int = 0; var_1297_int = 0; var_1298_object = Obj(); var_1299_object = Obj(); var_1300_object = Obj(); var_1301_object = Obj(); // 0x2309 PushV
	var_1296_int = var_502_int; // 0x230a Mov
	var_1297_int = var_503_int; // 0x230b Mov
	var_1298_object = var_508_object; // 0x230c Mov
	var_1299_object = var_509_object; // 0x230d Mov
	var_1300_object = var_510_object; // 0x230e Mov
	var_1301_object = var_511_object; // 0x230f Mov
	func_5244(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object); // 0x2310 NEW_2
	goto Label_9121; // 0x2312 Jump
	
Label_8979:
	var_1339_int = 5; // 0x2313 PushI
	var_1340_bool = var_501_int == var_1339_int; // 0x2314 Eq
	if(var_1340_bool == 0) goto Label_8992; // 0x2315 JumpB
	var_1341_int = 0; var_1342_int = 0; var_1343_object = Obj(); var_1344_object = Obj(); var_1345_object = Obj(); var_1346_object = Obj(); // 0x2316 PushV
	var_1341_int = var_502_int; // 0x2317 Mov
	var_1342_int = var_503_int; // 0x2318 Mov
	var_1343_object = var_508_object; // 0x2319 Mov
	var_1344_object = var_509_object; // 0x231a Mov
	var_1345_object = var_510_object; // 0x231b Mov
	var_1346_object = var_511_object; // 0x231c Mov
	func_5486(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object); // 0x231d NEW_2
	goto Label_9121; // 0x231f Jump
	
Label_8992:
	var_1372_int = 6; // 0x2320 PushI
	var_1373_bool = var_501_int == var_1372_int; // 0x2321 Eq
	if(var_1373_bool == 0) goto Label_9005; // 0x2322 JumpB
	var_1374_int = 0; var_1375_int = 0; var_1376_object = Obj(); var_1377_object = Obj(); var_1378_object = Obj(); var_1379_object = Obj(); // 0x2323 PushV
	var_1374_int = var_502_int; // 0x2324 Mov
	var_1375_int = var_503_int; // 0x2325 Mov
	var_1376_object = var_508_object; // 0x2326 Mov
	var_1377_object = var_509_object; // 0x2327 Mov
	var_1378_object = var_510_object; // 0x2328 Mov
	var_1379_object = var_511_object; // 0x2329 Mov
	func_5644(var_1379_object); // 0x232a NEW_2
	goto Label_9121; // 0x232c Jump
	
Label_9005:
	var_1382_int = 7; // 0x232d PushI
	var_1383_bool = var_501_int == var_1382_int; // 0x232e Eq
	if(var_1383_bool == 0) goto Label_9018; // 0x232f JumpB
	var_1384_int = 0; var_1385_int = 0; var_1386_object = Obj(); var_1387_object = Obj(); var_1388_object = Obj(); var_1389_object = Obj(); // 0x2330 PushV
	var_1384_int = var_502_int; // 0x2331 Mov
	var_1385_int = var_503_int; // 0x2332 Mov
	var_1386_object = var_508_object; // 0x2333 Mov
	var_1387_object = var_509_object; // 0x2334 Mov
	var_1388_object = var_510_object; // 0x2335 Mov
	var_1389_object = var_511_object; // 0x2336 Mov
	func_5709(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object); // 0x2337 NEW_2
	goto Label_9121; // 0x2339 Jump
	
Label_9018:
	var_1569_int = 8; // 0x233a PushI
	var_1570_bool = var_501_int == var_1569_int; // 0x233b Eq
	if(var_1570_bool == 0) goto Label_9031; // 0x233c JumpB
	var_1571_int = 0; var_1572_int = 0; var_1573_object = Obj(); var_1574_object = Obj(); var_1575_object = Obj(); var_1576_object = Obj(); // 0x233d PushV
	var_1571_int = var_502_int; // 0x233e Mov
	var_1572_int = var_503_int; // 0x233f Mov
	var_1573_object = var_508_object; // 0x2340 Mov
	var_1574_object = var_509_object; // 0x2341 Mov
	var_1575_object = var_510_object; // 0x2342 Mov
	var_1576_object = var_511_object; // 0x2343 Mov
	func_5909(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object); // 0x2344 NEW_2
	goto Label_9121; // 0x2346 Jump
	
Label_9031:
	var_1602_int = 9; // 0x2347 PushI
	var_1603_bool = var_501_int == var_1602_int; // 0x2348 Eq
	if(var_1603_bool == 0) goto Label_9044; // 0x2349 JumpB
	var_1604_int = 0; var_1605_int = 0; var_1606_object = Obj(); var_1607_object = Obj(); var_1608_object = Obj(); var_1609_object = Obj(); // 0x234a PushV
	var_1604_int = var_502_int; // 0x234b Mov
	var_1605_int = var_503_int; // 0x234c Mov
	var_1606_object = var_508_object; // 0x234d Mov
	var_1607_object = var_509_object; // 0x234e Mov
	var_1608_object = var_510_object; // 0x234f Mov
	var_1609_object = var_511_object; // 0x2350 Mov
	func_6112(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object); // 0x2351 NEW_2
	goto Label_9121; // 0x2353 Jump
	
Label_9044:
	var_1635_int = 10; // 0x2354 PushI
	var_1636_bool = var_501_int == var_1635_int; // 0x2355 Eq
	if(var_1636_bool == 0) goto Label_9057; // 0x2356 JumpB
	var_1637_int = 0; var_1638_int = 0; var_1639_object = Obj(); var_1640_object = Obj(); var_1641_object = Obj(); var_1642_object = Obj(); // 0x2357 PushV
	var_1637_int = var_502_int; // 0x2358 Mov
	var_1638_int = var_503_int; // 0x2359 Mov
	var_1639_object = var_508_object; // 0x235a Mov
	var_1640_object = var_509_object; // 0x235b Mov
	var_1641_object = var_510_object; // 0x235c Mov
	var_1642_object = var_511_object; // 0x235d Mov
	func_6321(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object); // 0x235e NEW_2
	goto Label_9121; // 0x2360 Jump
	
Label_9057:
	var_1668_int = 11; // 0x2361 PushI
	var_1669_bool = var_501_int == var_1668_int; // 0x2362 Eq
	if(var_1669_bool == 0) goto Label_9070; // 0x2363 JumpB
	var_1670_int = 0; var_1671_int = 0; var_1672_object = Obj(); var_1673_object = Obj(); var_1674_object = Obj(); var_1675_object = Obj(); // 0x2364 PushV
	var_1670_int = var_502_int; // 0x2365 Mov
	var_1671_int = var_503_int; // 0x2366 Mov
	var_1672_object = var_508_object; // 0x2367 Mov
	var_1673_object = var_509_object; // 0x2368 Mov
	var_1674_object = var_510_object; // 0x2369 Mov
	var_1675_object = var_511_object; // 0x236a Mov
	func_6533(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object); // 0x236b NEW_2
	goto Label_9121; // 0x236d Jump
	
Label_9070:
	var_1701_int = 12; // 0x236e PushI
	var_1702_bool = var_501_int == var_1701_int; // 0x236f Eq
	if(var_1702_bool == 0) goto Label_9083; // 0x2370 JumpB
	var_1703_int = 0; var_1704_int = 0; var_1705_object = Obj(); var_1706_object = Obj(); var_1707_object = Obj(); var_1708_object = Obj(); // 0x2371 PushV
	var_1703_int = var_502_int; // 0x2372 Mov
	var_1704_int = var_503_int; // 0x2373 Mov
	var_1705_object = var_508_object; // 0x2374 Mov
	var_1706_object = var_509_object; // 0x2375 Mov
	var_1707_object = var_510_object; // 0x2376 Mov
	var_1708_object = var_511_object; // 0x2377 Mov
	func_6730(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object); // 0x2378 NEW_2
	goto Label_9121; // 0x237a Jump
	
Label_9083:
	var_1734_int = 13; // 0x237b PushI
	var_1735_bool = var_501_int == var_1734_int; // 0x237c Eq
	if(var_1735_bool == 0) goto Label_9096; // 0x237d JumpB
	var_1736_int = 0; var_1737_int = 0; var_1738_object = Obj(); var_1739_object = Obj(); var_1740_object = Obj(); var_1741_object = Obj(); // 0x237e PushV
	var_1736_int = var_502_int; // 0x237f Mov
	var_1737_int = var_503_int; // 0x2380 Mov
	var_1738_object = var_508_object; // 0x2381 Mov
	var_1739_object = var_509_object; // 0x2382 Mov
	var_1740_object = var_510_object; // 0x2383 Mov
	var_1741_object = var_511_object; // 0x2384 Mov
	func_6933(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object); // 0x2385 NEW_2
	goto Label_9121; // 0x2387 Jump
	
Label_9096:
	var_1767_int = 14; // 0x2388 PushI
	var_1768_bool = var_501_int == var_1767_int; // 0x2389 Eq
	if(var_1768_bool == 0) goto Label_9109; // 0x238a JumpB
	var_1769_int = 0; var_1770_int = 0; var_1771_object = Obj(); var_1772_object = Obj(); var_1773_object = Obj(); var_1774_object = Obj(); // 0x238b PushV
	var_1769_int = var_502_int; // 0x238c Mov
	var_1770_int = var_503_int; // 0x238d Mov
	var_1771_object = var_508_object; // 0x238e Mov
	var_1772_object = var_509_object; // 0x238f Mov
	var_1773_object = var_510_object; // 0x2390 Mov
	var_1774_object = var_511_object; // 0x2391 Mov
	func_7133(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object); // 0x2392 NEW_2
	goto Label_9121; // 0x2394 Jump
	
Label_9109:
	var_1945_int = 15; // 0x2395 PushI
	var_1946_bool = var_501_int == var_1945_int; // 0x2396 Eq
	if(var_1946_bool == 0) goto Label_9121; // 0x2397 JumpB
	var_1947_int = 0; var_1948_int = 0; var_1949_object = Obj(); var_1950_object = Obj(); var_1951_object = Obj(); var_1952_object = Obj(); // 0x2398 PushV
	var_1947_int = var_502_int; // 0x2399 Mov
	var_1948_int = var_503_int; // 0x239a Mov
	var_1949_object = var_508_object; // 0x239b Mov
	var_1950_object = var_509_object; // 0x239c Mov
	var_1951_object = var_510_object; // 0x239d Mov
	var_1952_object = var_511_object; // 0x239e Mov
	func_7315(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object); // 0x239f NEW_2
}


func_11973(var_4797_bool)
{
	var_4800_int = 0; var_4801_string = ""; // 0x2ec6 PushV
	var_4801_string = "d1q01KaterinaUHave1day"; // 0x2ec7 MovS
	func_138(var_4800_int, var_4801_string); // 0x2ec8 NEW_2
	var_4802_int = 1; // 0x2eca PushI
	var_4803_bool = var_4800_int == var_4802_int; // 0x2ecb Eq
	if(var_4803_bool == 0) goto Label_11983; // 0x2ecc JumpB
	var_4797_bool = 1; // 0x2ecd MovB
	return 0; // 0x2ece Return
	
Label_11983:
	var_4797_bool = 0; // 0x2ecf MovB
	return 0; // 0x2ed0 Return
}


func_9927(var_5663_int, var_5664_float)
{
	var_5665_int = 0; var_5666_int = 0; var_5667_int = 0; var_5668_float = 0; // 0x26c8 PushV
	var_5666_int = 532895; // 0x26c9 MovI
	var_5667_int = 532894; // 0x26ca MovI
	var_5668_float = var_5664_float; // 0x26cb Mov
	func_12239(var_5665_int, var_5666_int, var_5667_int, var_5668_float); // 0x26cc NEW_2
	var_5663_int = var_5665_int; // 0x26cd Mov
	return 0; // 0x26cf Return
}


func_7881()
{
	var_322_object = Obj(); var_323_int = 0; var_324_object = Obj(); var_325_int = 0; // 0x1ec9 PushV
	GetMainOutdoorScene(var_324_object); // 0x1eca Func
	var_325_int = 1; // 0x1ecc MovI
	
Label_7885:
	var_326_int = 17; // 0x1ecd PushI
	var_327_bool = var_325_int <= var_326_int; // 0x1ece LE
	if(var_327_bool == 0) goto Label_7902; // 0x1ecf JumpB
	var_328_object = GlobalVars[15]; // 0x1ed0 PushGE
	var_329_object = Obj(); var_330_object = Obj(); var_331_string = ""; var_332_string = ""; var_333_string = ""; // 0x1ed1 PushV
	var_330_object = var_324_object; // 0x1ed2 Mov
	var_334_string = "pt_bull"; // 0x1ed3 PushS
	var_331_string = var_334_string + var_325_int; // 0x1ed4 Add2
	var_332_string = "pers_bull"; // 0x1ed5 MovS
	var_333_string = "bull.xml"; // 0x1ed6 MovS
	func_165(var_330_object, var_331_string, var_332_string, var_333_string); // 0x1ed7 NEW_2
	add(var_329_object); // 0x1ed9 ObjFunc
	var_348_int = 1; // 0x1edb PushI
	var_325_int = var_325_int + var_348_int; // 0x1edc Add2
	goto Label_7885; // 0x1edd Jump
	
Label_7902:
	return 4; // 0x1ede Return
}


func_9936(var_5735_int, var_5736_float)
{
	var_5737_int = 0; var_5738_int = 0; var_5739_int = 0; var_5740_float = 0; // 0x26d1 PushV
	var_5738_int = 522200; // 0x26d2 MovI
	var_5739_int = 522199; // 0x26d3 MovI
	var_5740_float = var_5736_float; // 0x26d4 Mov
	func_12239(var_5737_int, var_5738_int, var_5739_int, var_5740_float); // 0x26d5 NEW_2
	var_5735_int = var_5737_int; // 0x26d6 Mov
	return 0; // 0x26d8 Return
}


func_11985(var_5025_bool)
{
	var_5028_int = 0; var_5029_string = ""; // 0x2ed2 PushV
	var_5029_string = "d6q03"; // 0x2ed3 MovS
	func_138(var_5028_int, var_5029_string); // 0x2ed4 NEW_2
	var_5030_int = 0; // 0x2ed6 PushI
	var_5031_bool = var_5028_int == var_5030_int; // 0x2ed7 Eq
	if(var_5031_bool == 0) goto Label_11995; // 0x2ed8 JumpB
	var_5025_bool = 1; // 0x2ed9 MovB
	return 0; // 0x2eda Return
	
Label_11995:
	var_5025_bool = 0; // 0x2edb MovB
	return 0; // 0x2edc Return
}


func_2770(var_2690_int, var_2691_int, var_2692_int)
{
	var_2693_int = 0; var_2694_int = 0; var_2695_int = 0; var_2696_int = 0; // 0xad2 PushV
	var_2697_bool = 0; // 0xad3 PushV
	var_2697_bool = 0; // 0xad4 MovB
	var_2698_int = 8; // 0xad5 PushI
	var_2699_bool = var_2692_int > var_2698_int; // 0xad6 GT
	if(var_2699_bool == 0) goto Label_2780; // 0xad7 JumpB
	var_2700_int = 21; // 0xad8 PushI
	var_2701_bool = var_2692_int < var_2700_int; // 0xad9 LT
	if(var_2701_bool == 0) goto Label_2780; // 0xada JumpB
	var_2697_bool = 1; // 0xadb MovB
	
Label_2780:
	if(var_2697_bool == 0) goto Label_2835; // 0xadc JumpB
	var_2702_int = 0; var_2703_string = ""; var_2704_string = ""; var_2705_int = 0; // 0xadd PushV
	var_2702_int = var_2690_int; // 0xade Mov
	var_2703_string = "pers_vaxxabit"; // 0xadf MovS
	var_2704_string = "vaxxabit_d.xml"; // 0xae0 MovS
	var_2705_int = 6; // 0xae1 MovI
	func_509(var_2702_int, var_2703_string, var_2704_string, var_2705_int); // 0xae2 NEW_2
	var_2706_int = 0; var_2707_string = ""; var_2708_string = ""; var_2709_int = 0; // 0xae4 PushV
	var_2706_int = var_2690_int; // 0xae5 Mov
	var_2707_string = "pers_vaxxabitka"; // 0xae6 MovS
	var_2708_string = "vaxxabitka_d.xml"; // 0xae7 MovS
	var_2709_int = 5; // 0xae8 MovI
	func_509(var_2706_int, var_2707_string, var_2708_string, var_2709_int); // 0xae9 NEW_2
	var_2710_int = 0; var_2711_string = ""; var_2712_string = ""; var_2713_int = 0; // 0xaeb PushV
	var_2710_int = var_2690_int; // 0xaec Mov
	var_2711_string = "pers_rat_big"; // 0xaed MovS
	var_2712_string = "rat_big.xml"; // 0xaee MovS
	var_2713_int = 2; // 0xaef MovI
	func_509(var_2710_int, var_2711_string, var_2712_string, var_2713_int); // 0xaf0 NEW_2
	var_2714_int = 0; var_2715_string = ""; var_2716_string = ""; var_2717_int = 0; // 0xaf2 PushV
	var_2714_int = var_2690_int; // 0xaf3 Mov
	var_2715_string = "fog"; // 0xaf4 MovS
	var_2716_string = "fog.xml"; // 0xaf5 MovS
	var_2717_int = 6; // 0xaf6 MovI
	func_535(var_2714_int, var_2715_string, var_2716_string, var_2717_int); // 0xaf7 NEW_2
	var_2718_int = 5; // 0xaf9 PushI
	var_2719_bool = var_2691_int >= var_2718_int; // 0xafa GE
	if(var_2719_bool == 0) goto Label_2819; // 0xafb JumpB
	var_2720_int = 0; var_2721_string = ""; var_2722_string = ""; var_2723_int = 0; // 0xafc PushV
	var_2720_int = var_2690_int; // 0xafd Mov
	var_2721_string = "fog"; // 0xafe MovS
	var_2722_string = "fog_hunter.xml"; // 0xaff MovS
	var_2723_int = 2; // 0xb00 MovI
	func_535(var_2720_int, var_2721_string, var_2722_string, var_2723_int); // 0xb01 NEW_2
	
Label_2819:
	var_2724_int = 1; // 0xb03 PushI
	var_2725_float = 0; var_2726_int = 0; // 0xb04 PushV
	var_2726_int = var_2691_int; // 0xb05 Mov
	func_1261(var_2725_float, var_2726_int); // 0xb06 NEW_2
	var_2695_int = var_2724_int * var_2725_float; // 0xb08 Mult2
	var_2727_int = var_2695_int; // 0xb09 Push
	if(var_2727_int == 0) goto Label_2834; // 0xb0a JumpB
	var_2728_int = 0; var_2729_string = ""; var_2730_string = ""; var_2731_int = 0; // 0xb0b PushV
	var_2728_int = var_2690_int; // 0xb0c Mov
	var_2729_string = "pers_bomber"; // 0xb0d MovS
	var_2730_string = "bomber.xml"; // 0xb0e MovS
	var_2731_int = var_2695_int; // 0xb0f Mov
	func_509(var_2728_int, var_2729_string, var_2730_string, var_2731_int); // 0xb10 NEW_2
	
Label_2834:
	goto Label_2888; // 0xb12 Jump
	
Label_2888:
	var_2732_int = 0; var_2733_string = ""; var_2734_string = ""; var_2735_int = 0; var_2736_int = 0; var_2737_int = 0; // 0xb48 PushV
	var_2732_int = var_2690_int; // 0xb49 Mov
	var_2733_string = "pers_worker"; // 0xb4a MovS
	var_2734_string = "agony1_man.xml"; // 0xb4b MovS
	var_2735_int = 2; // 0xb4c MovI
	var_2736_int = 4; // 0xb4d MovI
	var_2737_int = 4; // 0xb4e MovI
	func_522(var_2732_int, var_2733_string, var_2734_string, var_2735_int, var_2736_int, var_2737_int); // 0xb4f NEW_2
	var_2738_int = 0; var_2739_string = ""; var_2740_string = ""; var_2741_int = 0; var_2742_int = 0; var_2743_int = 0; // 0xb51 PushV
	var_2738_int = var_2690_int; // 0xb52 Mov
	var_2739_string = "pers_unosha"; // 0xb53 MovS
	var_2740_string = "agony1_man.xml"; // 0xb54 MovS
	var_2741_int = 2; // 0xb55 MovI
	var_2742_int = 4; // 0xb56 MovI
	var_2743_int = 4; // 0xb57 MovI
	func_522(var_2738_int, var_2739_string, var_2740_string, var_2741_int, var_2742_int, var_2743_int); // 0xb58 NEW_2
	var_2744_int = 0; var_2745_string = ""; var_2746_string = ""; var_2747_int = 0; var_2748_int = 0; var_2749_int = 0; // 0xb5a PushV
	var_2744_int = var_2690_int; // 0xb5b Mov
	var_2745_string = "pers_woman"; // 0xb5c MovS
	var_2746_string = "agony1_woman.xml"; // 0xb5d MovS
	var_2747_int = 2; // 0xb5e MovI
	var_2748_int = 4; // 0xb5f MovI
	var_2749_int = 4; // 0xb60 MovI
	func_522(var_2744_int, var_2745_string, var_2746_string, var_2747_int, var_2748_int, var_2749_int); // 0xb61 NEW_2
	var_2750_int = 0; var_2751_string = ""; var_2752_string = ""; var_2753_int = 0; var_2754_int = 0; var_2755_int = 0; // 0xb63 PushV
	var_2750_int = var_2690_int; // 0xb64 Mov
	var_2751_string = "pers_wasted_girl"; // 0xb65 MovS
	var_2752_string = "agony1_woman.xml"; // 0xb66 MovS
	var_2753_int = 2; // 0xb67 MovI
	var_2754_int = 4; // 0xb68 MovI
	var_2755_int = 4; // 0xb69 MovI
	func_522(var_2750_int, var_2751_string, var_2752_string, var_2753_int, var_2754_int, var_2755_int); // 0xb6a NEW_2
	var_2756_bool = 0; var_2757_int = 0; var_2758_int = 0; // 0xb6c PushV
	var_2757_int = var_2691_int; // 0xb6d Mov
	var_2758_int = var_2692_int; // 0xb6e Mov
	func_1351(var_2756_bool, var_2757_int, var_2758_int); // 0xb6f NEW_2
	if(var_2756_bool == 0) goto Label_2937; // 0xb71 JumpB
	var_2759_int = 0; var_2760_string = ""; var_2761_string = ""; var_2762_int = 0; // 0xb72 PushV
	var_2759_int = var_2690_int; // 0xb73 Mov
	var_2760_string = "pers_soldat"; // 0xb74 MovS
	var_2761_string = "soldier_marauder.xml"; // 0xb75 MovS
	var_2762_int = 2; // 0xb76 MovI
	func_509(var_2759_int, var_2760_string, var_2761_string, var_2762_int); // 0xb77 NEW_2
	
Label_2937:
	var_2763_bool = 0; var_2764_int = 0; // 0xb79 PushV
	var_2764_int = var_2691_int; // 0xb7a Mov
	func_1378(var_2763_bool, var_2764_int); // 0xb7b NEW_2
	if(var_2763_bool == 0) goto Label_2949; // 0xb7d JumpB
	var_2765_int = 0; var_2766_string = ""; var_2767_string = ""; var_2768_int = 0; // 0xb7e PushV
	var_2765_int = var_2690_int; // 0xb7f Mov
	var_2766_string = "pers_sanitar"; // 0xb80 MovS
	var_2767_string = "sanitar.xml"; // 0xb81 MovS
	var_2768_int = 1; // 0xb82 MovI
	func_509(var_2765_int, var_2766_string, var_2767_string, var_2768_int); // 0xb83 NEW_2
	
Label_2949:
	return 4; // 0xb85 Return
	
Label_2835:
	var_2769_int = 0; var_2770_string = ""; var_2771_string = ""; var_2772_int = 0; // 0xb13 PushV
	var_2769_int = var_2690_int; // 0xb14 Mov
	var_2770_string = "pers_vaxxabit"; // 0xb15 MovS
	var_2771_string = "vaxxabit_d.xml"; // 0xb16 MovS
	var_2772_int = 4; // 0xb17 MovI
	func_509(var_2769_int, var_2770_string, var_2771_string, var_2772_int); // 0xb18 NEW_2
	var_2773_int = 0; var_2774_string = ""; var_2775_string = ""; var_2776_int = 0; // 0xb1a PushV
	var_2773_int = var_2690_int; // 0xb1b Mov
	var_2774_string = "pers_vaxxabitka"; // 0xb1c MovS
	var_2775_string = "vaxxabitka_d.xml"; // 0xb1d MovS
	var_2776_int = 4; // 0xb1e MovI
	func_509(var_2773_int, var_2774_string, var_2775_string, var_2776_int); // 0xb1f NEW_2
	var_2777_int = 0; var_2778_string = ""; var_2779_string = ""; var_2780_int = 0; // 0xb21 PushV
	var_2777_int = var_2690_int; // 0xb22 Mov
	var_2778_string = "pers_rat_big"; // 0xb23 MovS
	var_2779_string = "rat_big.xml"; // 0xb24 MovS
	var_2780_int = 3; // 0xb25 MovI
	func_509(var_2777_int, var_2778_string, var_2779_string, var_2780_int); // 0xb26 NEW_2
	var_2781_int = 0; var_2782_string = ""; var_2783_string = ""; var_2784_int = 0; // 0xb28 PushV
	var_2781_int = var_2690_int; // 0xb29 Mov
	var_2782_string = "fog"; // 0xb2a MovS
	var_2783_string = "fog.xml"; // 0xb2b MovS
	var_2784_int = 6; // 0xb2c MovI
	func_535(var_2781_int, var_2782_string, var_2783_string, var_2784_int); // 0xb2d NEW_2
	var_2785_int = 5; // 0xb2f PushI
	var_2786_bool = var_2691_int >= var_2785_int; // 0xb30 GE
	if(var_2786_bool == 0) goto Label_2873; // 0xb31 JumpB
	var_2787_int = 0; var_2788_string = ""; var_2789_string = ""; var_2790_int = 0; // 0xb32 PushV
	var_2787_int = var_2690_int; // 0xb33 Mov
	var_2788_string = "fog"; // 0xb34 MovS
	var_2789_string = "fog_hunter.xml"; // 0xb35 MovS
	var_2790_int = 2; // 0xb36 MovI
	func_535(var_2787_int, var_2788_string, var_2789_string, var_2790_int); // 0xb37 NEW_2
	
Label_2873:
	var_2791_int = 1; // 0xb39 PushI
	var_2792_float = 0; var_2793_int = 0; // 0xb3a PushV
	var_2793_int = var_2691_int; // 0xb3b Mov
	func_1261(var_2792_float, var_2793_int); // 0xb3c NEW_2
	var_2696_int = var_2791_int * var_2792_float; // 0xb3e Mult2
	var_2794_int = var_2696_int; // 0xb3f Push
	if(var_2794_int == 0) goto Label_2888; // 0xb40 JumpB
	var_2795_int = 0; var_2796_string = ""; var_2797_string = ""; var_2798_int = 0; // 0xb41 PushV
	var_2795_int = var_2690_int; // 0xb42 Mov
	var_2796_string = "pers_bomber"; // 0xb43 MovS
	var_2797_string = "bomber.xml"; // 0xb44 MovS
	var_2798_int = var_2696_int; // 0xb45 Mov
	func_509(var_2795_int, var_2796_string, var_2797_string, var_2798_int); // 0xb46 NEW_2
}


func_726(var_3199_int, var_3200_int, var_3201_object, var_3202_object, var_3203_object)
{
	var_3204_int = 0; var_3205_bool = 0; // 0x2d7 PushV
	var_3204_int = var_3199_int; // 0x2d8 Mov
	var_3205_bool = 0; // 0x2d9 MovB
	func_548(var_3204_int, var_3205_bool); // 0x2da NEW_2
	var_3206_object = Obj(); // 0x2dc PushV
	var_3206_object = var_3201_object; // 0x2dd Mov
	func_269(var_3206_object); // 0x2de NEW_2
	var_3207_object = Obj(); // 0x2e0 PushV
	var_3207_object = var_3202_object; // 0x2e1 Mov
	func_269(var_3207_object); // 0x2e2 NEW_2
	var_3208_object = Obj(); // 0x2e4 PushV
	var_3208_object = var_3203_object; // 0x2e5 Mov
	func_269(var_3208_object); // 0x2e6 NEW_2
	var_3209_int = 8; // 0x2e8 PushI
	var_3210_bool = var_3200_int < var_3209_int; // 0x2e9 LT
	if(var_3210_bool == 0) goto Label_760; // 0x2ea JumpB
	var_3211_string = ""; var_3212_object = Obj(); var_3213_string = ""; var_3214_string = ""; // 0x2eb PushV
	var_3215_string = "pt_blockpost"; // 0x2ec PushS
	var_3216_int = 1; // 0x2ed PushI
	var_3217_int = var_3199_int + var_3216_int; // 0x2ee Add
	var_3218_int = var_3215_string + var_3217_int; // 0x2ef Add
	var_3219_string = "_1_"; // 0x2f0 PushS
	var_3211_string = var_3218_int + var_3219_string; // 0x2f1 Add2
	var_3212_object = var_3201_object; // 0x2f2 Mov
	var_3213_string = "pers_patrool"; // 0x2f3 MovS
	var_3214_string = "patrol_stat.xml"; // 0x2f4 MovS
	func_582(var_3212_object, var_3213_string, var_3214_string); // 0x2f5 NEW_2
	goto Label_784; // 0x2f7 Jump
	
Label_784:
	return 0; // 0x310 Return
	
Label_760:
	var_3220_string = ""; var_3221_object = Obj(); var_3222_string = ""; var_3223_string = ""; // 0x2f8 PushV
	var_3224_string = "pt_blockpost"; // 0x2f9 PushS
	var_3225_int = 1; // 0x2fa PushI
	var_3226_int = var_3199_int + var_3225_int; // 0x2fb Add
	var_3227_int = var_3224_string + var_3226_int; // 0x2fc Add
	var_3228_string = "_1_"; // 0x2fd PushS
	var_3220_string = var_3227_int + var_3228_string; // 0x2fe Add2
	var_3221_object = var_3201_object; // 0x2ff Mov
	var_3222_string = "pers_soldat"; // 0x300 MovS
	var_3223_string = "soldier.xml"; // 0x301 MovS
	func_582(var_3221_object, var_3222_string, var_3223_string); // 0x302 NEW_2
	var_3229_string = ""; var_3230_object = Obj(); var_3231_string = ""; var_3232_string = ""; // 0x304 PushV
	var_3233_string = "pt_blockpost"; // 0x305 PushS
	var_3234_int = 1; // 0x306 PushI
	var_3235_int = var_3199_int + var_3234_int; // 0x307 Add
	var_3236_int = var_3233_string + var_3235_int; // 0x308 Add
	var_3237_string = "_2_"; // 0x309 PushS
	var_3229_string = var_3236_int + var_3237_string; // 0x30a Add2
	var_3230_object = var_3202_object; // 0x30b Mov
	var_3231_string = "pers_sanitar"; // 0x30c MovS
	var_3232_string = "sanitar_stat.xml"; // 0x30d MovS
	func_582(var_3230_object, var_3231_string, var_3232_string); // 0x30e NEW_2
}


func_9945(var_6082_int, var_6083_float)
{
	var_6084_int = 0; var_6085_int = 0; var_6086_int = 0; var_6087_float = 0; // 0x26da PushV
	var_6085_int = 538402; // 0x26db MovI
	var_6086_int = 538401; // 0x26dc MovI
	var_6087_float = var_6083_float; // 0x26dd Mov
	func_12239(var_6084_int, var_6085_int, var_6086_int, var_6087_float); // 0x26de NEW_2
	var_6082_int = var_6084_int; // 0x26df Mov
	return 0; // 0x26e1 Return
}


func_11997(var_5222_bool)
{
	var_5225_int = 0; var_5226_string = ""; // 0x2ede PushV
	var_5226_string = "d11q03BurahVisit"; // 0x2edf MovS
	func_138(var_5225_int, var_5226_string); // 0x2ee0 NEW_2
	var_5227_int = 0; // 0x2ee2 PushI
	var_5228_bool = var_5225_int != var_5227_int; // 0x2ee3 Neq
	if(var_5228_bool == 0) goto Label_12007; // 0x2ee4 JumpB
	var_5222_bool = 1; // 0x2ee5 MovB
	return 0; // 0x2ee6 Return
	
Label_12007:
	var_5222_bool = 0; // 0x2ee7 MovB
	return 0; // 0x2ee8 Return
}


func_10974()
{
	var_4839_object = Obj(); var_4840_object = Obj(); var_4841_object = Obj(); var_4842_object = Obj(); // 0x2ade PushV
	var_4843_object = Obj(); // 0x2adf PushV
	func_12247(var_4843_object); // 0x2ae0 NEW_2
	var_4841_object = var_4843_object; // 0x2ae1 Mov
	var_4844_string = "d4q01BigVladGotoLara"; // 0x2ae3 PushS
	FindMark(var_4842_object, var_4844_string); // 0x2ae4 ObjFunc
	var_4845_object = var_4842_object; // 0x2ae6 Push
	if(var_4845_object == 0) goto Label_10986; // 0x2ae7 JumpB
	Remove(); // 0x2ae8 ObjFunc
	
Label_10986:
	var_4846_string = "d4q01BigVladGotoSklad"; // 0x2aea PushS
	FindMark(var_4842_object, var_4846_string); // 0x2aeb ObjFunc
	var_4847_object = var_4842_object; // 0x2aed Push
	if(var_4847_object == 0) goto Label_10993; // 0x2aee JumpB
	Remove(); // 0x2aef ObjFunc
	
Label_10993:
	var_4848_string = "d4q01BigVladGotoSobor"; // 0x2af1 PushS
	FindMark(var_4842_object, var_4848_string); // 0x2af2 ObjFunc
	var_4849_object = var_4842_object; // 0x2af4 Push
	if(var_4849_object == 0) goto Label_11000; // 0x2af5 JumpB
	Remove(); // 0x2af6 ObjFunc
	
Label_11000:
	var_4850_string = "d4q01BigVladGotoTheater"; // 0x2af8 PushS
	FindMark(var_4842_object, var_4850_string); // 0x2af9 ObjFunc
	var_4851_object = var_4842_object; // 0x2afb Push
	if(var_4851_object == 0) goto Label_11007; // 0x2afc JumpB
	Remove(); // 0x2afd ObjFunc
	
Label_11007:
	var_4852_string = "d4q01LaraGotoMladVlad"; // 0x2aff PushS
	FindMark(var_4842_object, var_4852_string); // 0x2b00 ObjFunc
	var_4853_object = var_4842_object; // 0x2b02 Push
	if(var_4853_object == 0) goto Label_11014; // 0x2b03 JumpB
	Remove(); // 0x2b04 ObjFunc
	
Label_11014:
	var_4854_string = "d4q01LaraGotoMladVladSelf"; // 0x2b06 PushS
	FindMark(var_4842_object, var_4854_string); // 0x2b07 ObjFunc
	var_4855_object = var_4842_object; // 0x2b09 Push
	if(var_4855_object == 0) goto Label_11021; // 0x2b0a JumpB
	Remove(); // 0x2b0b ObjFunc
	
Label_11021:
	var_4856_string = "d4q01LaraGotoOspina"; // 0x2b0d PushS
	FindMark(var_4842_object, var_4856_string); // 0x2b0e ObjFunc
	var_4857_object = var_4842_object; // 0x2b10 Push
	if(var_4857_object == 0) goto Label_11028; // 0x2b11 JumpB
	Remove(); // 0x2b12 ObjFunc
	
Label_11028:
	var_4858_string = "d4q01MladVladGotoBigVlad"; // 0x2b14 PushS
	FindMark(var_4842_object, var_4858_string); // 0x2b15 ObjFunc
	var_4859_object = var_4842_object; // 0x2b17 Push
	if(var_4859_object == 0) goto Label_11035; // 0x2b18 JumpB
	Remove(); // 0x2b19 ObjFunc
	
Label_11035:
	var_4860_string = "d4q01MladVladGotoOspina"; // 0x2b1b PushS
	FindMark(var_4842_object, var_4860_string); // 0x2b1c ObjFunc
	var_4861_object = var_4842_object; // 0x2b1e Push
	if(var_4861_object == 0) goto Label_11042; // 0x2b1f JumpB
	Remove(); // 0x2b20 ObjFunc
	
Label_11042:
	var_4862_string = "d4q01OspinaGotoLara"; // 0x2b22 PushS
	FindMark(var_4842_object, var_4862_string); // 0x2b23 ObjFunc
	var_4863_object = var_4842_object; // 0x2b25 Push
	if(var_4863_object == 0) goto Label_11049; // 0x2b26 JumpB
	Remove(); // 0x2b27 ObjFunc
	
Label_11049:
	var_4864_string = "d4q01WastedMale"; // 0x2b29 PushS
	FindMark(var_4842_object, var_4864_string); // 0x2b2a ObjFunc
	var_4865_object = var_4842_object; // 0x2b2c Push
	if(var_4865_object == 0) goto Label_11056; // 0x2b2d JumpB
	Remove(); // 0x2b2e ObjFunc
	
Label_11056:
	var_4866_string = "d4q01Whitemask"; // 0x2b30 PushS
	FindMark(var_4842_object, var_4866_string); // 0x2b31 ObjFunc
	var_4867_object = var_4842_object; // 0x2b33 Push
	if(var_4867_object == 0) goto Label_11063; // 0x2b34 JumpB
	Remove(); // 0x2b35 ObjFunc
	
Label_11063:
	var_4868_string = "d4q02BirdmaskNearHome"; // 0x2b37 PushS
	FindMark(var_4842_object, var_4868_string); // 0x2b38 ObjFunc
	var_4869_object = var_4842_object; // 0x2b3a Push
	if(var_4869_object == 0) goto Label_11070; // 0x2b3b JumpB
	Remove(); // 0x2b3c ObjFunc
	
Label_11070:
	var_4870_string = "d4q02MladVladGotoAnna"; // 0x2b3e PushS
	FindMark(var_4842_object, var_4870_string); // 0x2b3f ObjFunc
	var_4871_object = var_4842_object; // 0x2b41 Push
	if(var_4871_object == 0) goto Label_11077; // 0x2b42 JumpB
	Remove(); // 0x2b43 ObjFunc
	
Label_11077:
	var_4872_string = "d4q02MladVladGotoJulia"; // 0x2b45 PushS
	FindMark(var_4842_object, var_4872_string); // 0x2b46 ObjFunc
	var_4873_object = var_4842_object; // 0x2b48 Push
	if(var_4873_object == 0) goto Label_11084; // 0x2b49 JumpB
	Remove(); // 0x2b4a ObjFunc
	
Label_11084:
	var_4874_string = "d4q02MladVladGotoLara"; // 0x2b4c PushS
	FindMark(var_4842_object, var_4874_string); // 0x2b4d ObjFunc
	var_4875_object = var_4842_object; // 0x2b4f Push
	if(var_4875_object == 0) goto Label_11091; // 0x2b50 JumpB
	Remove(); // 0x2b51 ObjFunc
	
Label_11091:
	var_4876_string = "d4q03AlexandrAboutVolnica"; // 0x2b53 PushS
	FindMark(var_4842_object, var_4876_string); // 0x2b54 ObjFunc
	var_4877_object = var_4842_object; // 0x2b56 Push
	if(var_4877_object == 0) goto Label_11098; // 0x2b57 JumpB
	Remove(); // 0x2b58 ObjFunc
	
Label_11098:
	var_4878_string = "d4q03AlexandrGotoGrif"; // 0x2b5a PushS
	FindMark(var_4842_object, var_4878_string); // 0x2b5b ObjFunc
	var_4879_object = var_4842_object; // 0x2b5d Push
	if(var_4879_object == 0) goto Label_11105; // 0x2b5e JumpB
	Remove(); // 0x2b5f ObjFunc
	
Label_11105:
	var_4880_string = "d4q03GrifGotoAlexandr"; // 0x2b61 PushS
	FindMark(var_4842_object, var_4880_string); // 0x2b62 ObjFunc
	var_4881_object = var_4842_object; // 0x2b64 Push
	if(var_4881_object == 0) goto Label_11112; // 0x2b65 JumpB
	Remove(); // 0x2b66 ObjFunc
	
Label_11112:
	var_4882_string = "d4q03GrifGotoAlexandrSelf"; // 0x2b68 PushS
	FindMark(var_4842_object, var_4882_string); // 0x2b69 ObjFunc
	var_4883_object = var_4842_object; // 0x2b6b Push
	if(var_4883_object == 0) goto Label_11119; // 0x2b6c JumpB
	Remove(); // 0x2b6d ObjFunc
	
Label_11119:
	var_4884_bool = 0; var_4885_int = 0; // 0x2b6f PushV
	var_4885_int = 20; // 0x2b70 MovI
	func_12222(var_4884_bool, var_4885_int); // 0x2b71 NEW_2
	var_4886_bool = 0; var_4887_int = 0; // 0x2b73 PushV
	var_4887_int = 21; // 0x2b74 MovI
	func_12222(var_4886_bool, var_4887_int); // 0x2b75 NEW_2
	var_4888_bool = 0; var_4889_int = 0; // 0x2b77 PushV
	var_4889_int = 22; // 0x2b78 MovI
	func_12222(var_4888_bool, var_4889_int); // 0x2b79 NEW_2
	var_4890_bool = 0; var_4891_int = 0; // 0x2b7b PushV
	var_4891_int = 710; // 0x2b7c MovI
	func_12222(var_4890_bool, var_4891_int); // 0x2b7d NEW_2
	return 4; // 0x2b7f Return
}


func_7904()
{
	var_4414_object = Obj(); // 0x1ee0 PushV
	var_4415_object = GlobalVars[15]; // 0x1ee1 PushGE
	var_4414_object = var_4415_object; // 0x1ee2 Mov
	func_269(var_4414_object); // 0x1ee4 NEW_2
	return 0; // 0x1ee6 Return
}


func_9954(var_5647_int, var_5648_float)
{
	var_5649_int = 0; var_5650_int = 0; var_5651_int = 0; var_5652_float = 0; // 0x26e3 PushV
	var_5650_int = 503307; // 0x26e4 MovI
	var_5651_int = 503306; // 0x26e5 MovI
	var_5652_float = var_5648_float; // 0x26e6 Mov
	func_12239(var_5649_int, var_5650_int, var_5651_int, var_5652_float); // 0x26e7 NEW_2
	var_5647_int = var_5649_int; // 0x26e8 Mov
	return 0; // 0x26ea Return
}


func_6886()
{
	var_281_string = "r7_house2_01"; // 0x1ae7 PushS
	add(var_281_string); // 0x1ae8 ObjFunc
	var_282_string = "r7_house2_02"; // 0x1aea PushS
	add(var_282_string); // 0x1aeb ObjFunc
	var_283_string = "r7_house2_03"; // 0x1aed PushS
	add(var_283_string); // 0x1aee ObjFunc
	var_284_string = "r7_house2_04"; // 0x1af0 PushS
	add(var_284_string); // 0x1af1 ObjFunc
	var_285_string = "r7_house3_03_i2"; // 0x1af3 PushS
	add(var_285_string); // 0x1af4 ObjFunc
	var_286_string = "r7_house3_03"; // 0x1af6 PushS
	add(var_286_string); // 0x1af7 ObjFunc
	var_287_string = "r7_house3_04_i2"; // 0x1af9 PushS
	add(var_287_string); // 0x1afa ObjFunc
	var_288_string = "r7_house3_04"; // 0x1afc PushS
	add(var_288_string); // 0x1afd ObjFunc
	var_289_string = "r7_house3_05_i2"; // 0x1aff PushS
	add(var_289_string); // 0x1b00 ObjFunc
	var_290_string = "r7_house3_05"; // 0x1b02 PushS
	add(var_290_string); // 0x1b03 ObjFunc
	var_291_string = "r7_house3_06_i2"; // 0x1b05 PushS
	add(var_291_string); // 0x1b06 ObjFunc
	var_292_string = "r7_house3_01_i2"; // 0x1b08 PushS
	add(var_292_string); // 0x1b09 ObjFunc
	var_293_string = "r7_house3_01"; // 0x1b0b PushS
	add(var_293_string); // 0x1b0c ObjFunc
	var_294_string = "r7_house3_02_i2"; // 0x1b0e PushS
	add(var_294_string); // 0x1b0f ObjFunc
	var_295_string = "r7_house3_02"; // 0x1b11 PushS
	add(var_295_string); // 0x1b12 ObjFunc
	return 0; // 0x1b14 Return
}


func_7911()
{
	var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_bool = 0; var_39_object = Obj(); // 0x1ee7 PushV
	var_40_object = GlobalVars[15]; // 0x1ee8 PushGE
	var_41_object = Obj(); // 0x1ee9 PushV
	func_132(var_41_object); // 0x1eea NEW_2
	var_40_object = var_41_object; // 0x1eeb Mov
	GlobalVars[15] = var_40_object; // 0x1eed PopGE
	var_44_object = GlobalVars[13]; // 0x1eee PushGE
	var_45_object = Obj(); // 0x1eef PushV
	func_132(var_45_object); // 0x1ef0 NEW_2
	var_44_object = var_45_object; // 0x1ef1 Mov
	GlobalVars[13] = var_44_object; // 0x1ef3 PopGE
	var_46_object = GlobalVars[8]; // 0x1ef4 PushGE
	var_47_object = Obj(); // 0x1ef5 PushV
	func_132(var_47_object); // 0x1ef6 NEW_2
	var_46_object = var_47_object; // 0x1ef7 Mov
	GlobalVars[8] = var_46_object; // 0x1ef9 PopGE
	var_48_object = GlobalVars[9]; // 0x1efa PushGE
	var_49_object = Obj(); // 0x1efb PushV
	func_132(var_49_object); // 0x1efc NEW_2
	var_48_object = var_49_object; // 0x1efd Mov
	GlobalVars[9] = var_48_object; // 0x1eff PopGE
	var_50_object = GlobalVars[10]; // 0x1f00 PushGE
	var_51_object = Obj(); // 0x1f01 PushV
	func_132(var_51_object); // 0x1f02 NEW_2
	var_50_object = var_51_object; // 0x1f03 Mov
	GlobalVars[10] = var_50_object; // 0x1f05 PopGE
	var_30_int = 0; // 0x1f06 MovI
	
Label_7943:
	var_52_int = 16; // 0x1f07 PushI
	var_53_bool = var_30_int < var_52_int; // 0x1f08 LT
	if(var_53_bool == 0) goto Label_7967; // 0x1f09 JumpB
	var_54_object = GlobalVars[8]; // 0x1f0a PushGE
	var_55_object = Obj(); // 0x1f0b PushV
	func_132(var_55_object); // 0x1f0c NEW_2
	add(var_55_object); // 0x1f0e ObjFunc
	var_56_object = GlobalVars[9]; // 0x1f10 PushGE
	var_57_object = Obj(); // 0x1f11 PushV
	func_132(var_57_object); // 0x1f12 NEW_2
	add(var_57_object); // 0x1f14 ObjFunc
	var_58_object = GlobalVars[10]; // 0x1f16 PushGE
	var_59_object = Obj(); // 0x1f17 PushV
	func_132(var_59_object); // 0x1f18 NEW_2
	add(var_59_object); // 0x1f1a ObjFunc
	var_60_int = 1; // 0x1f1c PushI
	var_30_int = var_30_int + var_60_int; // 0x1f1d Add2
	goto Label_7943; // 0x1f1e Jump
	
Label_7967:
	CreateStringVector(var_31_object); // 0x1f1f Func
	var_61_object = GlobalVars[13]; // 0x1f21 PushGE
	add(var_31_object); // 0x1f22 ObjFunc
	var_62_object = Obj(); // 0x1f24 PushV
	var_62_object = var_31_object; // 0x1f25 Mov
	func_4391(); // 0x1f26 NEW_2
	CreateStringVector(var_31_object); // 0x1f28 Func
	var_63_object = GlobalVars[13]; // 0x1f2a PushGE
	add(var_31_object); // 0x1f2b ObjFunc
	var_64_object = Obj(); // 0x1f2d PushV
	var_64_object = var_31_object; // 0x1f2e Mov
	func_4549(); // 0x1f2f NEW_2
	CreateStringVector(var_31_object); // 0x1f31 Func
	var_78_object = GlobalVars[13]; // 0x1f33 PushGE
	add(var_31_object); // 0x1f34 ObjFunc
	var_79_object = Obj(); // 0x1f36 PushV
	var_79_object = var_31_object; // 0x1f37 Mov
	func_4746(); // 0x1f38 NEW_2
	CreateStringVector(var_31_object); // 0x1f3a Func
	var_96_object = GlobalVars[13]; // 0x1f3c PushGE
	add(var_31_object); // 0x1f3d ObjFunc
	var_97_object = Obj(); // 0x1f3f PushV
	var_97_object = var_31_object; // 0x1f40 Mov
	func_4952(); // 0x1f41 NEW_2
	CreateStringVector(var_31_object); // 0x1f43 Func
	var_122_object = GlobalVars[13]; // 0x1f45 PushGE
	add(var_31_object); // 0x1f46 ObjFunc
	var_123_object = Obj(); // 0x1f48 PushV
	var_123_object = var_31_object; // 0x1f49 Mov
	func_5182(); // 0x1f4a NEW_2
	CreateStringVector(var_31_object); // 0x1f4c Func
	var_144_object = GlobalVars[13]; // 0x1f4e PushGE
	add(var_31_object); // 0x1f4f ObjFunc
	var_145_object = Obj(); // 0x1f51 PushV
	var_145_object = var_31_object; // 0x1f52 Mov
	func_5400(); // 0x1f53 NEW_2
	CreateStringVector(var_31_object); // 0x1f55 Func
	var_174_object = GlobalVars[13]; // 0x1f57 PushGE
	add(var_31_object); // 0x1f58 ObjFunc
	var_175_object = Obj(); // 0x1f5a PushV
	var_175_object = var_31_object; // 0x1f5b Mov
	func_5642(); // 0x1f5c NEW_2
	CreateStringVector(var_31_object); // 0x1f5e Func
	var_176_object = GlobalVars[13]; // 0x1f60 PushGE
	add(var_31_object); // 0x1f61 ObjFunc
	var_177_object = Obj(); // 0x1f63 PushV
	var_177_object = var_31_object; // 0x1f64 Mov
	func_5665(); // 0x1f65 NEW_2
	CreateStringVector(var_31_object); // 0x1f67 Func
	var_192_object = GlobalVars[13]; // 0x1f69 PushGE
	add(var_31_object); // 0x1f6a ObjFunc
	var_193_object = Obj(); // 0x1f6c PushV
	var_193_object = var_31_object; // 0x1f6d Mov
	func_5865(); // 0x1f6e NEW_2
	CreateStringVector(var_31_object); // 0x1f70 Func
	var_208_object = GlobalVars[13]; // 0x1f72 PushGE
	add(var_31_object); // 0x1f73 ObjFunc
	var_209_object = Obj(); // 0x1f75 PushV
	var_209_object = var_31_object; // 0x1f76 Mov
	func_6065(); // 0x1f77 NEW_2
	CreateStringVector(var_31_object); // 0x1f79 Func
	var_225_object = GlobalVars[13]; // 0x1f7b PushGE
	add(var_31_object); // 0x1f7c ObjFunc
	var_226_object = Obj(); // 0x1f7e PushV
	var_226_object = var_31_object; // 0x1f7f Mov
	func_6268(); // 0x1f80 NEW_2
	CreateStringVector(var_31_object); // 0x1f82 Func
	var_244_object = GlobalVars[13]; // 0x1f84 PushGE
	add(var_31_object); // 0x1f85 ObjFunc
	var_245_object = Obj(); // 0x1f87 PushV
	var_245_object = var_31_object; // 0x1f88 Mov
	func_6477(); // 0x1f89 NEW_2
	CreateStringVector(var_31_object); // 0x1f8b Func
	var_264_object = GlobalVars[13]; // 0x1f8d PushGE
	add(var_31_object); // 0x1f8e ObjFunc
	var_265_object = Obj(); // 0x1f90 PushV
	var_265_object = var_31_object; // 0x1f91 Mov
	func_6689(); // 0x1f92 NEW_2
	CreateStringVector(var_31_object); // 0x1f94 Func
	var_279_object = GlobalVars[13]; // 0x1f96 PushGE
	add(var_31_object); // 0x1f97 ObjFunc
	var_280_object = Obj(); // 0x1f99 PushV
	var_280_object = var_31_object; // 0x1f9a Mov
	func_6886(); // 0x1f9b NEW_2
	CreateStringVector(var_31_object); // 0x1f9d Func
	var_296_object = GlobalVars[13]; // 0x1f9f PushGE
	add(var_31_object); // 0x1fa0 ObjFunc
	var_297_object = Obj(); // 0x1fa2 PushV
	var_297_object = var_31_object; // 0x1fa3 Mov
	func_7089(); // 0x1fa4 NEW_2
	CreateStringVector(var_31_object); // 0x1fa6 Func
	var_312_object = GlobalVars[13]; // 0x1fa8 PushGE
	add(var_31_object); // 0x1fa9 ObjFunc
	var_313_object = Obj(); // 0x1fab PushV
	var_313_object = var_31_object; // 0x1fac Mov
	func_7289(); // 0x1fad NEW_2
	func_7881(); // 0x1fb0 NEW_2
	GetMainOutdoorScene(var_32_object); // 0x1fb2 Func
	var_349_object = GlobalVars[6]; // 0x1fb4 PushGE
	var_350_object = Obj(); // 0x1fb5 PushV
	func_132(var_350_object); // 0x1fb6 NEW_2
	var_349_object = var_350_object; // 0x1fb7 Mov
	GlobalVars[6] = var_349_object; // 0x1fb9 PopGE
	var_33_int = 0; // 0x1fba MovI
	
Label_8123:
	var_351_string = "pt_plant"; // 0x1fbb PushS
	var_352_int = 1; // 0x1fbc PushI
	var_353_int = var_33_int + var_352_int; // 0x1fbd Add
	var_354_int = var_351_string + var_353_int; // 0x1fbe Add
	GetLocator(var_354_int, var_34_bool); // 0x1fbf ObjFunc
	var_355_bool = var_34_bool == 0; // 0x1fc1 Not
	if(var_355_bool == 0) goto Label_8132; // 0x1fc2 JumpB
	goto Label_8135; // 0x1fc3 Jump
	
Label_8135:
	var_356_object = GlobalVars[6]; // 0x1fc7 PushGE
	resize(var_33_int); // 0x1fc8 ObjFunc
	var_357_string = "Total plants: "; // 0x1fca PushS
	var_358_int = var_357_string + var_33_int; // 0x1fcb Add
	Trace(var_358_int); // 0x1fcc Func
	var_359_object = GlobalVars[7]; // 0x1fce PushGE
	var_360_object = Obj(); // 0x1fcf PushV
	func_132(var_360_object); // 0x1fd0 NEW_2
	var_359_object = var_360_object; // 0x1fd1 Mov
	GlobalVars[7] = var_359_object; // 0x1fd3 PopGE
	var_35_int = 0; // 0x1fd4 MovI
	
Label_8149:
	var_361_string = "pt_grave_supply"; // 0x1fd5 PushS
	var_362_int = 1; // 0x1fd6 PushI
	var_363_int = var_35_int + var_362_int; // 0x1fd7 Add
	var_364_int = var_361_string + var_363_int; // 0x1fd8 Add
	GetLocator(var_364_int, var_36_bool); // 0x1fd9 ObjFunc
	var_365_bool = var_36_bool == 0; // 0x1fdb Not
	if(var_365_bool == 0) goto Label_8158; // 0x1fdc JumpB
	goto Label_8161; // 0x1fdd Jump
	
Label_8161:
	var_366_object = GlobalVars[7]; // 0x1fe1 PushGE
	resize(var_35_int); // 0x1fe2 ObjFunc
	var_367_string = "Total grave supplies: "; // 0x1fe4 PushS
	var_368_int = var_367_string + var_35_int; // 0x1fe5 Add
	Trace(var_368_int); // 0x1fe6 Func
	var_369_object = GlobalVars[14]; // 0x1fe8 PushGE
	var_370_object = Obj(); // 0x1fe9 PushV
	func_132(var_370_object); // 0x1fea NEW_2
	var_369_object = var_370_object; // 0x1feb Mov
	GlobalVars[14] = var_369_object; // 0x1fed PopGE
	var_37_int = 0; // 0x1fee MovI
	
Label_8175:
	var_371_string = "pt_bonfire"; // 0x1fef PushS
	var_372_int = 1; // 0x1ff0 PushI
	var_373_int = var_37_int + var_372_int; // 0x1ff1 Add
	var_374_int = var_371_string + var_373_int; // 0x1ff2 Add
	GetLocator(var_374_int, var_38_bool); // 0x1ff3 ObjFunc
	var_375_bool = var_38_bool == 0; // 0x1ff5 Not
	if(var_375_bool == 0) goto Label_8184; // 0x1ff6 JumpB
	goto Label_8196; // 0x1ff7 Jump
	
Label_8196:
	var_376_string = "Total bonfires: "; // 0x2004 PushS
	var_377_int = var_376_string + var_37_int; // 0x2005 Add
	Trace(var_377_int); // 0x2006 Func
	return 20; // 0x2008 Return
	
Label_8184:
	var_39_object = 0; // 0x1ff8 SetNull
	var_378_object = GlobalVars[14]; // 0x1ff9 PushGE
	add(var_39_object); // 0x1ffa ObjFunc
	var_379_int = 0; // 0x1ffc PushV
	var_379_int = var_37_int; // 0x1ffd Mov
	func_7688(var_379_int); // 0x1ffe NEW_2
	var_39_object = 0; // 0x2000 SetNull
	var_414_int = 1; // 0x2001 PushI
	var_37_int = var_37_int + var_414_int; // 0x2002 Add2
	goto Label_8175; // 0x2003 Jump
	
Label_8158:
	var_415_int = 1; // 0x1fde PushI
	var_35_int = var_35_int + var_415_int; // 0x1fdf Add2
	goto Label_8149; // 0x1fe0 Jump
	
Label_8132:
	var_416_int = 1; // 0x1fc4 PushI
	var_33_int = var_33_int + var_416_int; // 0x1fc5 Add2
	goto Label_8123; // 0x1fc6 Jump
}


func_5865()
{
	var_194_string = "r2_house_2_01"; // 0x16ea PushS
	add(var_194_string); // 0x16eb ObjFunc
	var_195_string = "r2_house_2_02"; // 0x16ed PushS
	add(var_195_string); // 0x16ee ObjFunc
	var_196_string = "r2_house_2_03"; // 0x16f0 PushS
	add(var_196_string); // 0x16f1 ObjFunc
	var_197_string = "r2_house7_02"; // 0x16f3 PushS
	add(var_197_string); // 0x16f4 ObjFunc
	var_198_string = "r2_house01_01"; // 0x16f6 PushS
	add(var_198_string); // 0x16f7 ObjFunc
	var_199_string = "r2_house7_01"; // 0x16f9 PushS
	add(var_199_string); // 0x16fa ObjFunc
	var_200_string = "r2_house3_01_i2"; // 0x16fc PushS
	add(var_200_string); // 0x16fd ObjFunc
	var_201_string = "r2_house3_01"; // 0x16ff PushS
	add(var_201_string); // 0x1700 ObjFunc
	var_202_string = "r2_house3_02_i2"; // 0x1702 PushS
	add(var_202_string); // 0x1703 ObjFunc
	var_203_string = "r2_house3_02"; // 0x1705 PushS
	add(var_203_string); // 0x1706 ObjFunc
	var_204_string = "r2_house3_03_i2"; // 0x1708 PushS
	add(var_204_string); // 0x1709 ObjFunc
	var_205_string = "r2_house3_03"; // 0x170b PushS
	add(var_205_string); // 0x170c ObjFunc
	var_206_string = "r3_house7_01"; // 0x170e PushS
	add(var_206_string); // 0x170f ObjFunc
	var_207_string = "r3_house7_02"; // 0x1711 PushS
	add(var_207_string); // 0x1712 ObjFunc
	return 0; // 0x1714 Return
}


func_12009(var_5202_bool)
{
	var_5205_int = 0; var_5206_string = ""; // 0x2eea PushV
	var_5206_string = "d11q04KlaraVisit"; // 0x2eeb MovS
	func_138(var_5205_int, var_5206_string); // 0x2eec NEW_2
	var_5207_int = 0; // 0x2eee PushI
	var_5208_bool = var_5205_int != var_5207_int; // 0x2eef Neq
	if(var_5208_bool == 0) goto Label_12019; // 0x2ef0 JumpB
	var_5202_bool = 1; // 0x2ef1 MovB
	return 0; // 0x2ef2 Return
	
Label_12019:
	var_5202_bool = 0; // 0x2ef3 MovB
	return 0; // 0x2ef4 Return
}


func_9963(var_5933_int, var_5934_float)
{
	var_5935_int = 0; var_5936_int = 0; var_5937_int = 0; var_5938_float = 0; // 0x26ec PushV
	var_5936_int = 536320; // 0x26ed MovI
	var_5937_int = 536319; // 0x26ee MovI
	var_5938_float = var_5934_float; // 0x26ef Mov
	func_12239(var_5935_int, var_5936_int, var_5937_int, var_5938_float); // 0x26f0 NEW_2
	var_5933_int = var_5935_int; // 0x26f1 Mov
	return 0; // 0x26f3 Return
}


func_4848(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object)
{
	var_2413_int = 0; // 0x12f1 PushI
	var_2414_bool = var_2408_int == var_2413_int; // 0x12f2 Eq
	if(var_2414_bool == 0) goto Label_4888; // 0x12f3 JumpB
	var_2415_int = 0; var_2416_bool = 0; // 0x12f4 PushV
	var_2415_int = 2; // 0x12f5 MovI
	var_2416_bool = 1; // 0x12f6 MovB
	func_802(var_2415_int, var_2416_bool); // 0x12f7 NEW_2
	var_2417_int = 0; var_2418_bool = 0; var_2419_int = 0; // 0x12f9 PushV
	var_2417_int = 2; // 0x12fa MovI
	var_2418_bool = 1; // 0x12fb MovB
	var_2419_int = 1; // 0x12fc MovI
	func_819(var_2417_int, var_2418_bool, var_2419_int); // 0x12fd NEW_2
	var_2420_int = 0; var_2421_int = 0; var_2422_object = Obj(); var_2423_object = Obj(); var_2424_object = Obj(); // 0x12ff PushV
	var_2420_int = 2; // 0x1300 MovI
	var_2421_int = var_2407_int; // 0x1301 Mov
	var_2422_object = var_2409_object; // 0x1302 Mov
	var_2423_object = var_2410_object; // 0x1303 Mov
	var_2424_object = var_2411_object; // 0x1304 Mov
	func_647(var_2420_int, var_2421_int, var_2422_object, var_2423_object, var_2424_object); // 0x1305 NEW_2
	var_2425_object = Obj(); var_2426_int = 0; // 0x1307 PushV
	var_2425_object = var_2412_object; // 0x1308 Mov
	var_2426_int = 1; // 0x1309 MovI
	func_311(var_2426_int); // 0x130a NEW_2
	var_2427_int = 0; var_2428_bool = 0; var_2429_int = 0; // 0x130c PushV
	var_2427_int = 2; // 0x130d MovI
	var_2428_bool = 1; // 0x130e MovB
	var_2429_int = 5; // 0x130f MovI
	func_876(var_2427_int, var_2428_bool, var_2429_int); // 0x1310 NEW_2
	var_2430_int = 0; var_2431_bool = 0; var_2432_int = 0; // 0x1312 PushV
	var_2430_int = 2; // 0x1313 MovI
	var_2431_bool = 0; // 0x1314 MovB
	var_2432_int = 5; // 0x1315 MovI
	func_938(var_2430_int, var_2431_bool, var_2432_int); // 0x1316 NEW_2
	
Label_4888:
	var_2433_int = 0; var_2434_bool = 0; // 0x1318 PushV
	var_2433_int = 2; // 0x1319 MovI
	var_2434_bool = 0; // 0x131a MovB
	func_785(var_2433_int, var_2434_bool); // 0x131b NEW_2
	var_2435_int = 0; var_2436_int = 0; var_2437_int = 0; // 0x131d PushV
	var_2435_int = 2; // 0x131e MovI
	var_2436_int = var_2407_int; // 0x131f Mov
	var_2437_int = var_2408_int; // 0x1320 Mov
	func_2950(var_2435_int, var_2436_int, var_2437_int); // 0x1321 NEW_2
	return 0; // 0x1323 Return
}


func_9972(var_5306_int, var_5307_float)
{
	var_5308_int = 0; var_5309_int = 0; var_5310_int = 0; var_5311_float = 0; // 0x26f5 PushV
	var_5309_int = 515334; // 0x26f6 MovI
	var_5310_int = 515333; // 0x26f7 MovI
	var_5311_float = var_5307_float; // 0x26f8 Mov
	func_12239(var_5308_int, var_5309_int, var_5310_int, var_5311_float); // 0x26f9 NEW_2
	var_5306_int = var_5308_int; // 0x26fa Mov
	return 0; // 0x26fc Return
}


func_12021(var_5244_bool)
{
	var_5247_int = 0; var_5248_string = ""; // 0x2ef6 PushV
	var_5248_string = "d2TalkToAlexandr"; // 0x2ef7 MovS
	func_138(var_5247_int, var_5248_string); // 0x2ef8 NEW_2
	var_5249_int = 0; // 0x2efa PushI
	var_5250_bool = var_5247_int != var_5249_int; // 0x2efb Neq
	if(var_5250_bool == 0) goto Label_12031; // 0x2efc JumpB
	var_5244_bool = 1; // 0x2efd MovB
	return 0; // 0x2efe Return
	
Label_12031:
	var_5244_bool = 0; // 0x2eff MovB
	return 0; // 0x2f00 Return
}


func_9981(var_5679_int, var_5680_float)
{
	var_5681_int = 0; var_5682_int = 0; var_5683_int = 0; var_5684_float = 0; // 0x26fe PushV
	var_5682_int = 533079; // 0x26ff MovI
	var_5683_int = 533078; // 0x2700 MovI
	var_5684_float = var_5680_float; // 0x2701 Mov
	func_12239(var_5681_int, var_5682_int, var_5683_int, var_5684_float); // 0x2702 NEW_2
	var_5679_int = var_5681_int; // 0x2703 Mov
	return 0; // 0x2705 Return
}


func_12033(var_5260_bool)
{
	var_5263_int = 0; var_5264_string = ""; // 0x2f02 PushV
	var_5264_string = "d3RubinVisit"; // 0x2f03 MovS
	func_138(var_5263_int, var_5264_string); // 0x2f04 NEW_2
	var_5265_int = 1; // 0x2f06 PushI
	var_5266_bool = var_5263_int == var_5265_int; // 0x2f07 Eq
	if(var_5266_bool == 0) goto Label_12043; // 0x2f08 JumpB
	var_5260_bool = 1; // 0x2f09 MovB
	return 0; // 0x2f0a Return
	
Label_12043:
	var_5260_bool = 0; // 0x2f0b MovB
	return 0; // 0x2f0c Return
}


func_9990(var_5743_int, var_5744_float)
{
	var_5745_int = 0; var_5746_int = 0; var_5747_int = 0; var_5748_float = 0; // 0x2707 PushV
	var_5746_int = 522202; // 0x2708 MovI
	var_5747_int = 522201; // 0x2709 MovI
	var_5748_float = var_5744_float; // 0x270a Mov
	func_12239(var_5745_int, var_5746_int, var_5747_int, var_5748_float); // 0x270b NEW_2
	var_5743_int = var_5745_int; // 0x270c Mov
	return 0; // 0x270e Return
}


func_3853(var_3564_int, var_3565_int, var_3566_int)
{
	var_3567_int = 0; var_3568_int = 0; var_3569_int = 0; var_3570_int = 0; var_3571_int = 0; var_3572_int = 0; var_3573_int = 0; var_3574_int = 0; // 0xf0d PushV
	var_3575_bool = 0; // 0xf0e PushV
	var_3575_bool = 0; // 0xf0f MovB
	var_3576_int = 8; // 0xf10 PushI
	var_3577_bool = var_3566_int > var_3576_int; // 0xf11 GT
	if(var_3577_bool == 0) goto Label_3863; // 0xf12 JumpB
	var_3578_int = 21; // 0xf13 PushI
	var_3579_bool = var_3566_int < var_3578_int; // 0xf14 LT
	if(var_3579_bool == 0) goto Label_3863; // 0xf15 JumpB
	var_3575_bool = 1; // 0xf16 MovB
	
Label_3863:
	if(var_3575_bool == 0) goto Label_3940; // 0xf17 JumpB
	var_3580_int = 0; var_3581_string = ""; var_3582_string = ""; var_3583_int = 0; // 0xf18 PushV
	var_3580_int = var_3564_int; // 0xf19 Mov
	var_3581_string = "pers_rat"; // 0xf1a MovS
	var_3582_string = "rat.xml"; // 0xf1b MovS
	var_3583_int = 2; // 0xf1c MovI
	func_509(var_3580_int, var_3581_string, var_3582_string, var_3583_int); // 0xf1d NEW_2
	var_3584_int = 0; var_3585_string = ""; var_3586_string = ""; var_3587_int = 0; // 0xf1f PushV
	var_3584_int = var_3564_int; // 0xf20 Mov
	var_3585_string = "pers_alkash"; // 0xf21 MovS
	var_3586_string = "alkash.xml"; // 0xf22 MovS
	var_3587_int = 2; // 0xf23 MovI
	func_509(var_3584_int, var_3585_string, var_3586_string, var_3587_int); // 0xf24 NEW_2
	var_3588_int = 0; var_3589_string = ""; var_3590_string = ""; var_3591_int = 0; // 0xf26 PushV
	var_3588_int = var_3564_int; // 0xf27 Mov
	var_3589_string = "pers_dohodyaga"; // 0xf28 MovS
	var_3590_string = "dohodyaga.xml"; // 0xf29 MovS
	var_3591_int = 1; // 0xf2a MovI
	func_509(var_3588_int, var_3589_string, var_3590_string, var_3591_int); // 0xf2b NEW_2
	var_3592_int = 2; // 0xf2d PushI
	var_3593_float = 0; var_3594_int = 0; // 0xf2e PushV
	var_3594_int = var_3565_int; // 0xf2f Mov
	func_1171(var_3593_float, var_3594_int); // 0xf30 NEW_2
	var_3571_int = var_3592_int * var_3593_float; // 0xf32 Mult2
	var_3595_int = var_3571_int; // 0xf33 Push
	if(var_3595_int == 0) goto Label_3900; // 0xf34 JumpB
	var_3596_int = 0; var_3597_string = ""; var_3598_string = ""; var_3599_int = 0; // 0xf35 PushV
	var_3596_int = var_3564_int; // 0xf36 Mov
	var_3597_string = "pers_grabitel"; // 0xf37 MovS
	var_3598_string = "grabitel.xml"; // 0xf38 MovS
	var_3599_int = var_3571_int; // 0xf39 Mov
	func_509(var_3596_int, var_3597_string, var_3598_string, var_3599_int); // 0xf3a NEW_2
	
Label_3900:
	var_3600_int = 1; // 0xf3c PushI
	var_3601_int = var_3565_int + var_3600_int; // 0xf3d Add
	var_3602_int = 2; // 0xf3e PushI
	var_3603_bool = var_3601_int >= var_3602_int; // 0xf3f GE
	if(var_3603_bool == 0) goto Label_3924; // 0xf40 JumpB
	var_3604_int = 0; var_3605_string = ""; var_3606_string = ""; var_3607_int = 0; // 0xf41 PushV
	var_3604_int = var_3564_int; // 0xf42 Mov
	var_3605_string = "pers_patrool"; // 0xf43 MovS
	var_3606_string = "patrol.xml"; // 0xf44 MovS
	var_3607_int = 2; // 0xf45 MovI
	func_509(var_3604_int, var_3605_string, var_3606_string, var_3607_int); // 0xf46 NEW_2
	var_3608_bool = 0; var_3609_int = 0; // 0xf48 PushV
	var_3609_int = var_3565_int; // 0xf49 Mov
	func_1378(var_3608_bool, var_3609_int); // 0xf4a NEW_2
	if(var_3608_bool == 0) goto Label_3924; // 0xf4c JumpB
	var_3610_int = 0; var_3611_string = ""; var_3612_string = ""; var_3613_int = 0; // 0xf4d PushV
	var_3610_int = var_3564_int; // 0xf4e Mov
	var_3611_string = "pers_soldat_hand"; // 0xf4f MovS
	var_3612_string = "soldier_patrol.xml"; // 0xf50 MovS
	var_3613_int = 1; // 0xf51 MovI
	func_509(var_3610_int, var_3611_string, var_3612_string, var_3613_int); // 0xf52 NEW_2
	
Label_3924:
	var_3614_int = 1; // 0xf54 PushI
	var_3615_float = 0; var_3616_int = 0; // 0xf55 PushV
	var_3616_int = var_3565_int; // 0xf56 Mov
	func_1261(var_3615_float, var_3616_int); // 0xf57 NEW_2
	var_3572_int = var_3614_int * var_3615_float; // 0xf59 Mult2
	var_3617_int = var_3572_int; // 0xf5a Push
	if(var_3617_int == 0) goto Label_3939; // 0xf5b JumpB
	var_3618_int = 0; var_3619_string = ""; var_3620_string = ""; var_3621_int = 0; // 0xf5c PushV
	var_3618_int = var_3564_int; // 0xf5d Mov
	var_3619_string = "pers_bomber"; // 0xf5e MovS
	var_3620_string = "bomber.xml"; // 0xf5f MovS
	var_3621_int = var_3572_int; // 0xf60 Mov
	func_509(var_3618_int, var_3619_string, var_3620_string, var_3621_int); // 0xf61 NEW_2
	
Label_3939:
	goto Label_4015; // 0xf63 Jump
	
Label_4015:
	var_3622_bool = 0; var_3623_int = 0; var_3624_int = 0; // 0xfaf PushV
	var_3623_int = var_3565_int; // 0xfb0 Mov
	var_3624_int = var_3566_int; // 0xfb1 Mov
	func_1351(var_3622_bool, var_3623_int, var_3624_int); // 0xfb2 NEW_2
	if(var_3622_bool == 0) goto Label_4028; // 0xfb4 JumpB
	var_3625_int = 0; var_3626_string = ""; var_3627_string = ""; var_3628_int = 0; // 0xfb5 PushV
	var_3625_int = var_3564_int; // 0xfb6 Mov
	var_3626_string = "pers_soldat"; // 0xfb7 MovS
	var_3627_string = "soldier_marauder.xml"; // 0xfb8 MovS
	var_3628_int = 2; // 0xfb9 MovI
	func_509(var_3625_int, var_3626_string, var_3627_string, var_3628_int); // 0xfba NEW_2
	
Label_4028:
	var_3629_bool = 0; var_3630_int = 0; // 0xfbc PushV
	var_3630_int = var_3565_int; // 0xfbd Mov
	func_1378(var_3629_bool, var_3630_int); // 0xfbe NEW_2
	if(var_3629_bool == 0) goto Label_4040; // 0xfc0 JumpB
	var_3631_int = 0; var_3632_string = ""; var_3633_string = ""; var_3634_int = 0; // 0xfc1 PushV
	var_3631_int = var_3564_int; // 0xfc2 Mov
	var_3632_string = "pers_sanitar"; // 0xfc3 MovS
	var_3633_string = "sanitar.xml"; // 0xfc4 MovS
	var_3634_int = 1; // 0xfc5 MovI
	func_509(var_3631_int, var_3632_string, var_3633_string, var_3634_int); // 0xfc6 NEW_2
	
Label_4040:
	return 8; // 0xfc8 Return
	
Label_3940:
	var_3635_int = 0; var_3636_string = ""; var_3637_string = ""; var_3638_int = 0; // 0xf64 PushV
	var_3635_int = var_3564_int; // 0xf65 Mov
	var_3636_string = "pers_rat"; // 0xf66 MovS
	var_3637_string = "rat.xml"; // 0xf67 MovS
	var_3638_int = 4; // 0xf68 MovI
	func_509(var_3635_int, var_3636_string, var_3637_string, var_3638_int); // 0xf69 NEW_2
	var_3639_int = 0; var_3640_string = ""; var_3641_string = ""; var_3642_int = 0; // 0xf6b PushV
	var_3639_int = var_3564_int; // 0xf6c Mov
	var_3640_string = "pers_alkash"; // 0xf6d MovS
	var_3641_string = "alkash.xml"; // 0xf6e MovS
	var_3642_int = 1; // 0xf6f MovI
	func_509(var_3639_int, var_3640_string, var_3641_string, var_3642_int); // 0xf70 NEW_2
	var_3643_int = 0; var_3644_string = ""; var_3645_string = ""; var_3646_int = 0; // 0xf72 PushV
	var_3643_int = var_3564_int; // 0xf73 Mov
	var_3644_string = "pers_dohodyaga"; // 0xf74 MovS
	var_3645_string = "dohodyaga.xml"; // 0xf75 MovS
	var_3646_int = 1; // 0xf76 MovI
	func_509(var_3643_int, var_3644_string, var_3645_string, var_3646_int); // 0xf77 NEW_2
	var_3647_int = 3; // 0xf79 PushI
	var_3648_float = 0; var_3649_int = 0; // 0xf7a PushV
	var_3649_int = var_3565_int; // 0xf7b Mov
	func_1171(var_3648_float, var_3649_int); // 0xf7c NEW_2
	var_3573_int = var_3647_int * var_3648_float; // 0xf7e Mult2
	var_3650_int = var_3573_int; // 0xf7f Push
	if(var_3650_int == 0) goto Label_3976; // 0xf80 JumpB
	var_3651_int = 0; var_3652_string = ""; var_3653_string = ""; var_3654_int = 0; // 0xf81 PushV
	var_3651_int = var_3564_int; // 0xf82 Mov
	var_3652_string = "pers_grabitel"; // 0xf83 MovS
	var_3653_string = "grabitel.xml"; // 0xf84 MovS
	var_3654_int = var_3573_int; // 0xf85 Mov
	func_509(var_3651_int, var_3652_string, var_3653_string, var_3654_int); // 0xf86 NEW_2
	
Label_3976:
	var_3655_int = 1; // 0xf88 PushI
	var_3656_int = var_3565_int + var_3655_int; // 0xf89 Add
	var_3657_int = 2; // 0xf8a PushI
	var_3658_bool = var_3656_int >= var_3657_int; // 0xf8b GE
	if(var_3658_bool == 0) goto Label_4000; // 0xf8c JumpB
	var_3659_int = 0; var_3660_string = ""; var_3661_string = ""; var_3662_int = 0; // 0xf8d PushV
	var_3659_int = var_3564_int; // 0xf8e Mov
	var_3660_string = "pers_patrool"; // 0xf8f MovS
	var_3661_string = "patrol.xml"; // 0xf90 MovS
	var_3662_int = 1; // 0xf91 MovI
	func_509(var_3659_int, var_3660_string, var_3661_string, var_3662_int); // 0xf92 NEW_2
	var_3663_bool = 0; var_3664_int = 0; // 0xf94 PushV
	var_3664_int = var_3565_int; // 0xf95 Mov
	func_1378(var_3663_bool, var_3664_int); // 0xf96 NEW_2
	if(var_3663_bool == 0) goto Label_4000; // 0xf98 JumpB
	var_3665_int = 0; var_3666_string = ""; var_3667_string = ""; var_3668_int = 0; // 0xf99 PushV
	var_3665_int = var_3564_int; // 0xf9a Mov
	var_3666_string = "pers_soldat_hand"; // 0xf9b MovS
	var_3667_string = "soldier_patrol.xml"; // 0xf9c MovS
	var_3668_int = 1; // 0xf9d MovI
	func_509(var_3665_int, var_3666_string, var_3667_string, var_3668_int); // 0xf9e NEW_2
	
Label_4000:
	var_3669_int = 1; // 0xfa0 PushI
	var_3670_float = 0; var_3671_int = 0; // 0xfa1 PushV
	var_3671_int = var_3565_int; // 0xfa2 Mov
	func_1261(var_3670_float, var_3671_int); // 0xfa3 NEW_2
	var_3574_int = var_3669_int * var_3670_float; // 0xfa5 Mult2
	var_3672_int = var_3574_int; // 0xfa6 Push
	if(var_3672_int == 0) goto Label_4015; // 0xfa7 JumpB
	var_3673_int = 0; var_3674_string = ""; var_3675_string = ""; var_3676_int = 0; // 0xfa8 PushV
	var_3673_int = var_3564_int; // 0xfa9 Mov
	var_3674_string = "pers_bomber"; // 0xfaa MovS
	var_3675_string = "bomber.xml"; // 0xfab MovS
	var_3676_int = var_3574_int; // 0xfac Mov
	func_509(var_3673_int, var_3674_string, var_3675_string, var_3676_int); // 0xfad NEW_2
}


func_12045(var_5282_bool)
{
	var_5285_int = 0; var_5286_string = ""; // 0x2f0e PushV
	var_5286_string = "d3GeorgVisit"; // 0x2f0f MovS
	func_138(var_5285_int, var_5286_string); // 0x2f10 NEW_2
	var_5287_int = 1; // 0x2f12 PushI
	var_5288_bool = var_5285_int == var_5287_int; // 0x2f13 Eq
	if(var_5288_bool == 0) goto Label_12055; // 0x2f14 JumpB
	var_5282_bool = 1; // 0x2f15 MovB
	return 0; // 0x2f16 Return
	
Label_12055:
	var_5282_bool = 0; // 0x2f17 MovB
	return 0; // 0x2f18 Return
}


func_9999(var_5350_int, var_5351_float)
{
	var_5352_int = 0; var_5353_int = 0; var_5354_int = 0; var_5355_float = 0; // 0x2710 PushV
	var_5353_int = 502853; // 0x2711 MovI
	var_5354_int = 502852; // 0x2712 MovI
	var_5355_float = var_5351_float; // 0x2713 Mov
	func_12239(var_5352_int, var_5353_int, var_5354_int, var_5355_float); // 0x2714 NEW_2
	var_5350_int = var_5352_int; // 0x2715 Mov
	return 0; // 0x2717 Return
}


func_785(var_737_int, var_738_bool)
{
	var_739_object = Obj(); var_740_int = 0; var_741_object = Obj(); var_742_int = 0; // 0x311 PushV
	GetMainOutdoorScene(var_741_object); // 0x312 Func
	var_743_bool = var_741_object == 0; // 0x314 NullEq
	if(var_743_bool == 0) goto Label_794; // 0x315 JumpB
	var_744_string = "City manager: Can't find main outdoor scene"; // 0x316 PushS
	Trace(var_744_string); // 0x317 Func
	return 4; // 0x319 Return
	
Label_794:
	var_745_int = 1; // 0x31a PushI
	var_742_int = var_737_int + var_745_int; // 0x31b Add2
	var_746_int = 100; // 0x31c PushI
	var_747_bool = 1; // 0x31d PushB
	EnableSubsets(var_742_int, var_746_int, var_738_bool, var_747_bool); // 0x31e ObjFunc
	return 4; // 0x320 Return
}


func_6933(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object)
{
	var_1742_int = 0; // 0x1b16 PushI
	var_1743_bool = var_1737_int == var_1742_int; // 0x1b17 Eq
	if(var_1743_bool == 0) goto Label_6973; // 0x1b18 JumpB
	var_1744_int = 0; var_1745_bool = 0; // 0x1b19 PushV
	var_1744_int = 13; // 0x1b1a MovI
	var_1745_bool = 0; // 0x1b1b MovB
	func_802(var_1744_int, var_1745_bool); // 0x1b1c NEW_2
	var_1746_int = 0; var_1747_bool = 0; var_1748_int = 0; // 0x1b1e PushV
	var_1746_int = 13; // 0x1b1f MovI
	var_1747_bool = 0; // 0x1b20 MovB
	var_1748_int = 1; // 0x1b21 MovI
	func_819(var_1746_int, var_1747_bool, var_1748_int); // 0x1b22 NEW_2
	var_1749_int = 0; var_1750_int = 0; var_1751_object = Obj(); var_1752_object = Obj(); var_1753_object = Obj(); // 0x1b24 PushV
	var_1749_int = 13; // 0x1b25 MovI
	var_1750_int = var_1736_int; // 0x1b26 Mov
	var_1751_object = var_1738_object; // 0x1b27 Mov
	var_1752_object = var_1739_object; // 0x1b28 Mov
	var_1753_object = var_1740_object; // 0x1b29 Mov
	func_628(var_1750_int, var_1751_object, var_1752_object, var_1753_object); // 0x1b2a NEW_2
	var_1754_object = Obj(); var_1755_int = 0; // 0x1b2c PushV
	var_1754_object = var_1741_object; // 0x1b2d Mov
	var_1755_int = 0; // 0x1b2e MovI
	func_311(var_1755_int); // 0x1b2f NEW_2
	var_1756_int = 0; var_1757_bool = 0; var_1758_int = 0; // 0x1b31 PushV
	var_1756_int = 13; // 0x1b32 MovI
	var_1757_bool = 0; // 0x1b33 MovB
	var_1758_int = 4; // 0x1b34 MovI
	func_876(var_1756_int, var_1757_bool, var_1758_int); // 0x1b35 NEW_2
	var_1759_int = 0; var_1760_bool = 0; var_1761_int = 0; // 0x1b37 PushV
	var_1759_int = 13; // 0x1b38 MovI
	var_1760_bool = 0; // 0x1b39 MovB
	var_1761_int = 4; // 0x1b3a MovI
	func_938(var_1759_int, var_1760_bool, var_1761_int); // 0x1b3b NEW_2
	
Label_6973:
	var_1762_int = 0; var_1763_int = 0; // 0x1b3d PushV
	var_1762_int = 13; // 0x1b3e MovI
	var_1763_int = var_1737_int; // 0x1b3f Mov
	func_1056(var_1762_int, var_1763_int); // 0x1b40 NEW_2
	var_1764_int = 0; var_1765_int = 0; var_1766_int = 0; // 0x1b42 PushV
	var_1764_int = 13; // 0x1b43 MovI
	var_1765_int = var_1736_int; // 0x1b44 Mov
	var_1766_int = var_1737_int; // 0x1b45 Mov
	func_1630(var_1764_int, var_1765_int, var_1766_int); // 0x1b46 NEW_2
	return 0; // 0x1b48 Return
}


func_5909(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object)
{
	var_1577_int = 0; // 0x1716 PushI
	var_1578_bool = var_1572_int == var_1577_int; // 0x1717 Eq
	if(var_1578_bool == 0) goto Label_5949; // 0x1718 JumpB
	var_1579_int = 0; var_1580_bool = 0; // 0x1719 PushV
	var_1579_int = 8; // 0x171a MovI
	var_1580_bool = 0; // 0x171b MovB
	func_802(var_1579_int, var_1580_bool); // 0x171c NEW_2
	var_1581_int = 0; var_1582_bool = 0; var_1583_int = 0; // 0x171e PushV
	var_1581_int = 8; // 0x171f MovI
	var_1582_bool = 0; // 0x1720 MovB
	var_1583_int = 1; // 0x1721 MovI
	func_819(var_1581_int, var_1582_bool, var_1583_int); // 0x1722 NEW_2
	var_1584_int = 0; var_1585_int = 0; var_1586_object = Obj(); var_1587_object = Obj(); var_1588_object = Obj(); // 0x1724 PushV
	var_1584_int = 8; // 0x1725 MovI
	var_1585_int = var_1571_int; // 0x1726 Mov
	var_1586_object = var_1573_object; // 0x1727 Mov
	var_1587_object = var_1574_object; // 0x1728 Mov
	var_1588_object = var_1575_object; // 0x1729 Mov
	func_628(var_1585_int, var_1586_object, var_1587_object, var_1588_object); // 0x172a NEW_2
	var_1589_object = Obj(); var_1590_int = 0; // 0x172c PushV
	var_1589_object = var_1576_object; // 0x172d Mov
	var_1590_int = 0; // 0x172e MovI
	func_311(var_1590_int); // 0x172f NEW_2
	var_1591_int = 0; var_1592_bool = 0; var_1593_int = 0; // 0x1731 PushV
	var_1591_int = 8; // 0x1732 MovI
	var_1592_bool = 0; // 0x1733 MovB
	var_1593_int = 4; // 0x1734 MovI
	func_876(var_1591_int, var_1592_bool, var_1593_int); // 0x1735 NEW_2
	var_1594_int = 0; var_1595_bool = 0; var_1596_int = 0; // 0x1737 PushV
	var_1594_int = 8; // 0x1738 MovI
	var_1595_bool = 0; // 0x1739 MovB
	var_1596_int = 4; // 0x173a MovI
	func_938(var_1594_int, var_1595_bool, var_1596_int); // 0x173b NEW_2
	
Label_5949:
	var_1597_int = 0; var_1598_int = 0; // 0x173d PushV
	var_1597_int = 8; // 0x173e MovI
	var_1598_int = var_1572_int; // 0x173f Mov
	func_989(var_1597_int, var_1598_int); // 0x1740 NEW_2
	var_1599_int = 0; var_1600_int = 0; var_1601_int = 0; // 0x1742 PushV
	var_1599_int = 8; // 0x1743 MovI
	var_1600_int = var_1571_int; // 0x1744 Mov
	var_1601_int = var_1572_int; // 0x1745 Mov
	func_1630(var_1599_int, var_1600_int, var_1601_int); // 0x1746 NEW_2
	return 0; // 0x1748 Return
}


func_10008(var_4954_int, var_4955_float)
{
	var_4956_int = 0; var_4957_int = 0; var_4958_int = 0; var_4959_float = 0; // 0x2719 PushV
	var_4957_int = 503175; // 0x271a MovI
	var_4958_int = 503174; // 0x271b MovI
	var_4959_float = var_4955_float; // 0x271c Mov
	func_12239(var_4956_int, var_4957_int, var_4958_int, var_4959_float); // 0x271d NEW_2
	var_4954_int = var_4956_int; // 0x271e Mov
	return 0; // 0x2720 Return
}


func_12057(var_5298_bool)
{
	var_5301_int = 0; var_5302_string = ""; // 0x2f1a PushV
	var_5302_string = "d4BigVladVisit"; // 0x2f1b MovS
	func_138(var_5301_int, var_5302_string); // 0x2f1c NEW_2
	var_5303_int = 1; // 0x2f1e PushI
	var_5304_bool = var_5301_int == var_5303_int; // 0x2f1f Eq
	if(var_5304_bool == 0) goto Label_12067; // 0x2f20 JumpB
	var_5298_bool = 1; // 0x2f21 MovB
	return 0; // 0x2f22 Return
	
Label_12067:
	var_5298_bool = 0; // 0x2f23 MovB
	return 0; // 0x2f24 Return
}


func_10017(var_5751_int, var_5752_float)
{
	var_5753_int = 0; var_5754_int = 0; var_5755_int = 0; var_5756_float = 0; // 0x2722 PushV
	var_5754_int = 522204; // 0x2723 MovI
	var_5755_int = 522203; // 0x2724 MovI
	var_5756_float = var_5752_float; // 0x2725 Mov
	func_12239(var_5753_int, var_5754_int, var_5755_int, var_5756_float); // 0x2726 NEW_2
	var_5751_int = var_5753_int; // 0x2727 Mov
	return 0; // 0x2729 Return
}


func_802(var_452_int, var_453_bool)
{
	var_454_object = Obj(); var_455_int = 0; var_456_object = Obj(); var_457_int = 0; // 0x322 PushV
	GetMainOutdoorScene(var_456_object); // 0x323 Func
	var_458_bool = var_456_object == 0; // 0x325 NullEq
	if(var_458_bool == 0) goto Label_811; // 0x326 JumpB
	var_459_string = "City manager: Can't find main outdoor scene"; // 0x327 PushS
	Trace(var_459_string); // 0x328 Func
	return 4; // 0x32a Return
	
Label_811:
	var_460_int = 1; // 0x32b PushI
	var_457_int = var_452_int + var_460_int; // 0x32c Add2
	var_461_int = 200; // 0x32d PushI
	var_462_bool = 0; // 0x32e PushB
	EnableSubsets(var_457_int, var_461_int, var_453_bool, var_462_bool); // 0x32f ObjFunc
	return 4; // 0x331 Return
}


func_4900(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object)
{
	var_3542_int = 0; // 0x1325 PushI
	var_3543_bool = var_3537_int == var_3542_int; // 0x1326 Eq
	if(var_3543_bool == 0) goto Label_4940; // 0x1327 JumpB
	var_3544_int = 0; var_3545_bool = 0; // 0x1328 PushV
	var_3544_int = 2; // 0x1329 MovI
	var_3545_bool = 0; // 0x132a MovB
	func_802(var_3544_int, var_3545_bool); // 0x132b NEW_2
	var_3546_int = 0; var_3547_bool = 0; var_3548_int = 0; // 0x132d PushV
	var_3546_int = 2; // 0x132e MovI
	var_3547_bool = 0; // 0x132f MovB
	var_3548_int = 1; // 0x1330 MovI
	func_819(var_3546_int, var_3547_bool, var_3548_int); // 0x1331 NEW_2
	var_3549_int = 0; var_3550_int = 0; var_3551_object = Obj(); var_3552_object = Obj(); var_3553_object = Obj(); // 0x1333 PushV
	var_3549_int = 2; // 0x1334 MovI
	var_3550_int = var_3536_int; // 0x1335 Mov
	var_3551_object = var_3538_object; // 0x1336 Mov
	var_3552_object = var_3539_object; // 0x1337 Mov
	var_3553_object = var_3540_object; // 0x1338 Mov
	func_726(var_3549_int, var_3550_int, var_3551_object, var_3552_object, var_3553_object); // 0x1339 NEW_2
	var_3554_object = Obj(); var_3555_int = 0; // 0x133b PushV
	var_3554_object = var_3541_object; // 0x133c Mov
	var_3555_int = 2; // 0x133d MovI
	func_311(var_3555_int); // 0x133e NEW_2
	var_3556_int = 0; var_3557_bool = 0; var_3558_int = 0; // 0x1340 PushV
	var_3556_int = 2; // 0x1341 MovI
	var_3557_bool = 0; // 0x1342 MovB
	var_3558_int = 5; // 0x1343 MovI
	func_876(var_3556_int, var_3557_bool, var_3558_int); // 0x1344 NEW_2
	var_3559_int = 0; var_3560_bool = 0; var_3561_int = 0; // 0x1346 PushV
	var_3559_int = 2; // 0x1347 MovI
	var_3560_bool = 1; // 0x1348 MovB
	var_3561_int = 5; // 0x1349 MovI
	func_938(var_3559_int, var_3560_bool, var_3561_int); // 0x134a NEW_2
	
Label_4940:
	var_3562_int = 0; var_3563_bool = 0; // 0x134c PushV
	var_3562_int = 2; // 0x134d MovI
	var_3563_bool = 0; // 0x134e MovB
	func_785(var_3562_int, var_3563_bool); // 0x134f NEW_2
	var_3564_int = 0; var_3565_int = 0; var_3566_int = 0; // 0x1351 PushV
	var_3564_int = 2; // 0x1352 MovI
	var_3565_int = var_3536_int; // 0x1353 Mov
	var_3566_int = var_3537_int; // 0x1354 Mov
	func_3853(var_3564_int, var_3565_int, var_3566_int); // 0x1355 NEW_2
	return 0; // 0x1357 Return
}


func_12069(var_5859_bool)
{
	var_5862_int = 0; var_5863_string = ""; // 0x2f26 PushV
	var_5863_string = "d12q01KlaraVisit"; // 0x2f27 MovS
	func_138(var_5862_int, var_5863_string); // 0x2f28 NEW_2
	var_5864_int = 0; // 0x2f2a PushI
	var_5865_bool = var_5862_int != var_5864_int; // 0x2f2b Neq
	if(var_5865_bool == 0) goto Label_12079; // 0x2f2c JumpB
	var_5859_bool = 1; // 0x2f2d MovB
	return 0; // 0x2f2e Return
	
Label_12079:
	var_5859_bool = 0; // 0x2f2f MovB
	return 0; // 0x2f30 Return
}


func_10026(var_5398_int, var_5399_float)
{
	var_5400_int = 0; var_5401_int = 0; var_5402_int = 0; var_5403_float = 0; // 0x272b PushV
	var_5401_int = 503177; // 0x272c MovI
	var_5402_int = 503176; // 0x272d MovI
	var_5403_float = var_5399_float; // 0x272e Mov
	func_12239(var_5400_int, var_5401_int, var_5402_int, var_5403_float); // 0x272f NEW_2
	var_5398_int = var_5400_int; // 0x2730 Mov
	return 0; // 0x2732 Return
}


func_12081(var_5342_bool)
{
	var_5345_int = 0; var_5346_string = ""; // 0x2f32 PushV
	var_5346_string = "d5RubinVisit"; // 0x2f33 MovS
	func_138(var_5345_int, var_5346_string); // 0x2f34 NEW_2
	var_5347_int = 1; // 0x2f36 PushI
	var_5348_bool = var_5345_int == var_5347_int; // 0x2f37 Eq
	if(var_5348_bool == 0) goto Label_12091; // 0x2f38 JumpB
	var_5342_bool = 1; // 0x2f39 MovB
	return 0; // 0x2f3a Return
	
Label_12091:
	var_5342_bool = 0; // 0x2f3b MovB
	return 0; // 0x2f3c Return
}


func_819(var_528_int, var_529_bool, var_530_int)
{
	var_531_string = ""; var_532_object = Obj(); var_533_int = 0; var_534_string = ""; var_535_object = Obj(); var_536_int = 0; var_537_object = Obj(); var_538_string = ""; var_539_object = Obj(); var_540_int = 0; var_541_string = ""; var_542_object = Obj(); var_543_int = 0; var_544_object = Obj(); // 0x333 PushV
	var_545_string = "street_rags"; // 0x334 PushS
	var_546_int = 1; // 0x335 PushI
	var_547_int = var_528_int + var_546_int; // 0x336 Add
	var_538_string = var_545_string + var_547_int; // 0x337 Add2
	var_548_bool = var_529_bool; // 0x338 Push
	if(var_548_bool == 0) goto Label_859; // 0x339 JumpB
	GetMainOutdoorScene(var_539_object); // 0x33a Func
	var_549_bool = var_539_object == 0; // 0x33c NullEq
	if(var_549_bool == 0) goto Label_834; // 0x33d JumpB
	var_550_string = "City manager: Can't find main outdoor scene"; // 0x33e PushS
	Trace(var_550_string); // 0x33f Func
	return 14; // 0x341 Return
	
Label_834:
	var_540_int = 1; // 0x342 MovI
	
Label_835:
	var_551_bool = var_540_int <= var_530_int; // 0x343 LE
	if(var_551_bool == 0) goto Label_857; // 0x344 JumpB
	var_552_string = "_"; // 0x345 PushS
	var_553_int = var_538_string + var_552_string; // 0x346 Add
	var_541_string = var_553_int + var_540_int; // 0x347 Add2
	FindActor(var_542_object, var_541_string); // 0x348 Func
	var_554_bool = var_542_object == 0; // 0x34a Not
	if(var_554_bool == 0) goto Label_850; // 0x34b JumpB
	var_555_cvector = CVector(0.0, 0.0, 0.0); // 0x34c PushVec
	var_556_cvector = CVector(0.0, 0.0, 1.0); // 0x34d PushVec
	var_557_string = "do_invis.xml"; // 0x34e PushS
	AddActor(var_542_object, var_541_string, var_539_object, var_555_cvector, var_556_cvector, var_557_string); // 0x34f Func
	goto Label_853; // 0x351 Jump
	
Label_853:
	var_542_object = 0; // 0x355 SetNull
	var_558_int = 1; // 0x356 PushI
	var_540_int = var_540_int + var_558_int; // 0x357 Add2
	goto Label_835; // 0x358 Jump
	
Label_850:
	var_559_bool = 0; // 0x352 PushB
	RemoveOnUnload(var_559_bool); // 0x353 ObjFunc
	
Label_857:
	var_539_object = 0; // 0x359 SetNull
	goto Label_875; // 0x35a Jump
	
Label_875:
	return 14; // 0x36b Return
	
Label_859:
	var_543_int = 1; // 0x35b MovI
	
Label_860:
	var_560_bool = var_543_int <= var_530_int; // 0x35c LE
	if(var_560_bool == 0) goto Label_875; // 0x35d JumpB
	var_561_string = "_"; // 0x35e PushS
	var_562_int = var_538_string + var_561_string; // 0x35f Add
	var_563_int = var_562_int + var_543_int; // 0x360 Add
	FindActor(var_544_object, var_563_int); // 0x361 Func
	var_564_object = var_544_object; // 0x363 Push
	if(var_564_object == 0) goto Label_871; // 0x364 JumpB
	RemoveOnUnload(); // 0x365 ObjFunc
	
Label_871:
	var_544_object = 0; // 0x367 SetNull
	var_565_int = 1; // 0x368 PushI
	var_543_int = var_543_int + var_565_int; // 0x369 Add2
	goto Label_860; // 0x36a Jump
}


func_10035(var_5382_int, var_5383_float)
{
	var_5384_int = 0; var_5385_int = 0; var_5386_int = 0; var_5387_float = 0; // 0x2734 PushV
	var_5385_int = 503181; // 0x2735 MovI
	var_5386_int = 503180; // 0x2736 MovI
	var_5387_float = var_5383_float; // 0x2737 Mov
	func_12239(var_5384_int, var_5385_int, var_5386_int, var_5387_float); // 0x2738 NEW_2
	var_5382_int = var_5384_int; // 0x2739 Mov
	return 0; // 0x273b Return
}


func_10044(var_5366_int, var_5367_float)
{
	var_5368_int = 0; var_5369_int = 0; var_5370_int = 0; var_5371_float = 0; // 0x273d PushV
	var_5369_int = 503179; // 0x273e MovI
	var_5370_int = 503178; // 0x273f MovI
	var_5371_float = var_5367_float; // 0x2740 Mov
	func_12239(var_5368_int, var_5369_int, var_5370_int, var_5371_float); // 0x2741 NEW_2
	var_5366_int = var_5368_int; // 0x2742 Mov
	return 0; // 0x2744 Return
}


func_12093(var_5374_bool)
{
	var_5377_int = 0; var_5378_string = ""; // 0x2f3e PushV
	var_5378_string = "d6KapellaVisit"; // 0x2f3f MovS
	func_138(var_5377_int, var_5378_string); // 0x2f40 NEW_2
	var_5379_int = 1; // 0x2f42 PushI
	var_5380_bool = var_5377_int == var_5379_int; // 0x2f43 Eq
	if(var_5380_bool == 0) goto Label_12103; // 0x2f44 JumpB
	var_5374_bool = 1; // 0x2f45 MovB
	return 0; // 0x2f46 Return
	
Label_12103:
	var_5374_bool = 0; // 0x2f47 MovB
	return 0; // 0x2f48 Return
}


func_14141(var_5898_bool, var_5899_int)
{
	var_5900_int = 6; // 0x373e PushI
	add(var_5900_int); // 0x373f ObjFunc
	var_5901_int = 26; // 0x3741 PushI
	add(var_5901_int); // 0x3742 ObjFunc
	var_5902_int = 2; // 0x3744 PushI
	add(var_5902_int); // 0x3745 ObjFunc
	var_5903_int = 22; // 0x3747 PushI
	add(var_5903_int); // 0x3748 ObjFunc
	var_5904_bool = 0; // 0x374a PushB
	var_5905_bool = var_5898_bool == var_5904_bool; // 0x374b Eq
	if(var_5905_bool == 0) goto Label_14167; // 0x374c JumpB
	var_5906_int = 15; // 0x374d PushI
	add(var_5906_int); // 0x374e ObjFunc
	var_5907_int = 5; // 0x3750 PushI
	add(var_5907_int); // 0x3751 ObjFunc
	var_5908_int = 16; // 0x3753 PushI
	add(var_5908_int); // 0x3754 ObjFunc
	goto Label_14173; // 0x3756 Jump
	
Label_14173:
	return 0; // 0x375d Return
	
Label_14167:
	var_5909_int = 0; // 0x3757 PushI
	var_5910_bool = var_5899_int != var_5909_int; // 0x3758 Neq
	if(var_5910_bool == 0) goto Label_14173; // 0x3759 JumpB
	var_5911_int = 15; // 0x375a PushI
	add(var_5911_int); // 0x375b ObjFunc
}


func_10053(var_5032_int, var_5033_float)
{
	var_5034_int = 0; var_5035_int = 0; var_5036_int = 0; var_5037_float = 0; // 0x2746 PushV
	var_5035_int = 512530; // 0x2747 MovI
	var_5036_int = 512529; // 0x2748 MovI
	var_5037_float = var_5033_float; // 0x2749 Mov
	func_12239(var_5034_int, var_5035_int, var_5036_int, var_5037_float); // 0x274a NEW_2
	var_5032_int = var_5034_int; // 0x274b Mov
	return 0; // 0x274d Return
}


func_6985(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object)
{
	var_2972_int = 0; // 0x1b4a PushI
	var_2973_bool = var_2967_int == var_2972_int; // 0x1b4b Eq
	if(var_2973_bool == 0) goto Label_7025; // 0x1b4c JumpB
	var_2974_int = 0; var_2975_bool = 0; // 0x1b4d PushV
	var_2974_int = 13; // 0x1b4e MovI
	var_2975_bool = 1; // 0x1b4f MovB
	func_802(var_2974_int, var_2975_bool); // 0x1b50 NEW_2
	var_2976_int = 0; var_2977_bool = 0; var_2978_int = 0; // 0x1b52 PushV
	var_2976_int = 13; // 0x1b53 MovI
	var_2977_bool = 1; // 0x1b54 MovB
	var_2978_int = 1; // 0x1b55 MovI
	func_819(var_2976_int, var_2977_bool, var_2978_int); // 0x1b56 NEW_2
	var_2979_int = 0; var_2980_int = 0; var_2981_object = Obj(); var_2982_object = Obj(); var_2983_object = Obj(); // 0x1b58 PushV
	var_2979_int = 13; // 0x1b59 MovI
	var_2980_int = var_2966_int; // 0x1b5a Mov
	var_2981_object = var_2968_object; // 0x1b5b Mov
	var_2982_object = var_2969_object; // 0x1b5c Mov
	var_2983_object = var_2970_object; // 0x1b5d Mov
	func_647(var_2979_int, var_2980_int, var_2981_object, var_2982_object, var_2983_object); // 0x1b5e NEW_2
	var_2984_object = Obj(); var_2985_int = 0; // 0x1b60 PushV
	var_2984_object = var_2971_object; // 0x1b61 Mov
	var_2985_int = 1; // 0x1b62 MovI
	func_311(var_2985_int); // 0x1b63 NEW_2
	var_2986_int = 0; var_2987_bool = 0; var_2988_int = 0; // 0x1b65 PushV
	var_2986_int = 13; // 0x1b66 MovI
	var_2987_bool = 1; // 0x1b67 MovB
	var_2988_int = 4; // 0x1b68 MovI
	func_876(var_2986_int, var_2987_bool, var_2988_int); // 0x1b69 NEW_2
	var_2989_int = 0; var_2990_bool = 0; var_2991_int = 0; // 0x1b6b PushV
	var_2989_int = 13; // 0x1b6c MovI
	var_2990_bool = 0; // 0x1b6d MovB
	var_2991_int = 4; // 0x1b6e MovI
	func_938(var_2989_int, var_2990_bool, var_2991_int); // 0x1b6f NEW_2
	
Label_7025:
	var_2992_int = 0; var_2993_bool = 0; // 0x1b71 PushV
	var_2992_int = 13; // 0x1b72 MovI
	var_2993_bool = 0; // 0x1b73 MovB
	func_785(var_2992_int, var_2993_bool); // 0x1b74 NEW_2
	var_2994_int = 0; var_2995_int = 0; var_2996_int = 0; // 0x1b76 PushV
	var_2994_int = 13; // 0x1b77 MovI
	var_2995_int = var_2966_int; // 0x1b78 Mov
	var_2996_int = var_2967_int; // 0x1b79 Mov
	func_2770(var_2994_int, var_2995_int, var_2996_int); // 0x1b7a NEW_2
	return 0; // 0x1b7c Return
}


func_5961(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object)
{
	var_2807_int = 0; // 0x174a PushI
	var_2808_bool = var_2802_int == var_2807_int; // 0x174b Eq
	if(var_2808_bool == 0) goto Label_6001; // 0x174c JumpB
	var_2809_int = 0; var_2810_bool = 0; // 0x174d PushV
	var_2809_int = 8; // 0x174e MovI
	var_2810_bool = 1; // 0x174f MovB
	func_802(var_2809_int, var_2810_bool); // 0x1750 NEW_2
	var_2811_int = 0; var_2812_bool = 0; var_2813_int = 0; // 0x1752 PushV
	var_2811_int = 8; // 0x1753 MovI
	var_2812_bool = 1; // 0x1754 MovB
	var_2813_int = 1; // 0x1755 MovI
	func_819(var_2811_int, var_2812_bool, var_2813_int); // 0x1756 NEW_2
	var_2814_int = 0; var_2815_int = 0; var_2816_object = Obj(); var_2817_object = Obj(); var_2818_object = Obj(); // 0x1758 PushV
	var_2814_int = 8; // 0x1759 MovI
	var_2815_int = var_2801_int; // 0x175a Mov
	var_2816_object = var_2803_object; // 0x175b Mov
	var_2817_object = var_2804_object; // 0x175c Mov
	var_2818_object = var_2805_object; // 0x175d Mov
	func_647(var_2814_int, var_2815_int, var_2816_object, var_2817_object, var_2818_object); // 0x175e NEW_2
	var_2819_object = Obj(); var_2820_int = 0; // 0x1760 PushV
	var_2819_object = var_2806_object; // 0x1761 Mov
	var_2820_int = 1; // 0x1762 MovI
	func_311(var_2820_int); // 0x1763 NEW_2
	var_2821_int = 0; var_2822_bool = 0; var_2823_int = 0; // 0x1765 PushV
	var_2821_int = 8; // 0x1766 MovI
	var_2822_bool = 1; // 0x1767 MovB
	var_2823_int = 4; // 0x1768 MovI
	func_876(var_2821_int, var_2822_bool, var_2823_int); // 0x1769 NEW_2
	var_2824_int = 0; var_2825_bool = 0; var_2826_int = 0; // 0x176b PushV
	var_2824_int = 8; // 0x176c MovI
	var_2825_bool = 0; // 0x176d MovB
	var_2826_int = 4; // 0x176e MovI
	func_938(var_2824_int, var_2825_bool, var_2826_int); // 0x176f NEW_2
	
Label_6001:
	var_2827_int = 0; var_2828_bool = 0; // 0x1771 PushV
	var_2827_int = 8; // 0x1772 MovI
	var_2828_bool = 0; // 0x1773 MovB
	func_785(var_2827_int, var_2828_bool); // 0x1774 NEW_2
	var_2829_int = 0; var_2830_int = 0; var_2831_int = 0; // 0x1776 PushV
	var_2829_int = 8; // 0x1777 MovI
	var_2830_int = var_2801_int; // 0x1778 Mov
	var_2831_int = var_2802_int; // 0x1779 Mov
	func_2770(var_2829_int, var_2830_int, var_2831_int); // 0x177a NEW_2
	return 0; // 0x177c Return
}


func_12105(var_5358_bool)
{
	var_5361_int = 0; var_5362_string = ""; // 0x2f4a PushV
	var_5362_string = "d6MariaVisit"; // 0x2f4b MovS
	func_138(var_5361_int, var_5362_string); // 0x2f4c NEW_2
	var_5363_int = 1; // 0x2f4e PushI
	var_5364_bool = var_5361_int == var_5363_int; // 0x2f4f Eq
	if(var_5364_bool == 0) goto Label_12115; // 0x2f50 JumpB
	var_5358_bool = 1; // 0x2f51 MovB
	return 0; // 0x2f52 Return
	
Label_12115:
	var_5358_bool = 0; // 0x2f53 MovB
	return 0; // 0x2f54 Return
}


func_10062(var_5414_int, var_5415_float)
{
	var_5416_int = 0; var_5417_int = 0; var_5418_int = 0; var_5419_float = 0; // 0x274f PushV
	var_5417_int = 515382; // 0x2750 MovI
	var_5418_int = 515381; // 0x2751 MovI
	var_5419_float = var_5415_float; // 0x2752 Mov
	func_12239(var_5416_int, var_5417_int, var_5418_int, var_5419_float); // 0x2753 NEW_2
	var_5414_int = var_5416_int; // 0x2754 Mov
	return 0; // 0x2756 Return
}


func_12117(var_5390_bool)
{
	var_5393_int = 0; var_5394_string = ""; // 0x2f56 PushV
	var_5394_string = "d6BigVladVisit"; // 0x2f57 MovS
	func_138(var_5393_int, var_5394_string); // 0x2f58 NEW_2
	var_5395_int = 1; // 0x2f5a PushI
	var_5396_bool = var_5393_int == var_5395_int; // 0x2f5b Eq
	if(var_5396_bool == 0) goto Label_12127; // 0x2f5c JumpB
	var_5390_bool = 1; // 0x2f5d MovB
	return 0; // 0x2f5e Return
	
Label_12127:
	var_5390_bool = 0; // 0x2f5f MovB
	return 0; // 0x2f60 Return
}


func_10071(var_5438_int, var_5439_float)
{
	var_5440_int = 0; var_5441_int = 0; var_5442_int = 0; var_5443_float = 0; // 0x2758 PushV
	var_5441_int = 515433; // 0x2759 MovI
	var_5442_int = 515432; // 0x275a MovI
	var_5443_float = var_5439_float; // 0x275b Mov
	func_12239(var_5440_int, var_5441_int, var_5442_int, var_5443_float); // 0x275c NEW_2
	var_5438_int = var_5440_int; // 0x275d Mov
	return 0; // 0x275f Return
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


func_14174(var_5913_int)
{
	var_5914_int = 0; var_5915_int = 0; // 0x375e PushV
	var_5916_string = "vol_"; // 0x375f PushS
	var_5917_int = var_5916_string + var_5913_int; // 0x3760 Add
	GetVariable(var_5917_int, var_5915_int); // 0x3761 Func
	var_5918_string = "vol_"; // 0x3763 PushS
	var_5919_int = var_5918_string + var_5913_int; // 0x3764 Add
	var_5920_int = 8; // 0x3765 PushI
	var_5921_int = var_5915_int | var_5920_int; // 0x3766 Or
	SetVariable(var_5919_int, var_5921_int); // 0x3767 Func
	return 2; // 0x3769 Return
}


func_10080(var_5759_int, var_5760_float)
{
	var_5761_int = 0; var_5762_int = 0; var_5763_int = 0; var_5764_float = 0; // 0x2761 PushV
	var_5762_int = 522206; // 0x2762 MovI
	var_5763_int = 522205; // 0x2763 MovI
	var_5764_float = var_5760_float; // 0x2764 Mov
	func_12239(var_5761_int, var_5762_int, var_5763_int, var_5764_float); // 0x2765 NEW_2
	var_5759_int = var_5761_int; // 0x2766 Mov
	return 0; // 0x2768 Return
}


func_12129(var_5406_bool)
{
	var_5409_int = 0; var_5410_string = ""; // 0x2f62 PushV
	var_5410_string = "d6ViktorVisit"; // 0x2f63 MovS
	func_138(var_5409_int, var_5410_string); // 0x2f64 NEW_2
	var_5411_int = 1; // 0x2f66 PushI
	var_5412_bool = var_5409_int == var_5411_int; // 0x2f67 Eq
	if(var_5412_bool == 0) goto Label_12139; // 0x2f68 JumpB
	var_5406_bool = 1; // 0x2f69 MovB
	return 0; // 0x2f6a Return
	
Label_12139:
	var_5406_bool = 0; // 0x2f6b MovB
	return 0; // 0x2f6c Return
}


func_10089(var_5446_int, var_5447_float)
{
	var_5448_int = 0; var_5449_int = 0; var_5450_int = 0; var_5451_float = 0; // 0x276a PushV
	var_5449_int = 515439; // 0x276b MovI
	var_5450_int = 515438; // 0x276c MovI
	var_5451_float = var_5447_float; // 0x276d Mov
	func_12239(var_5448_int, var_5449_int, var_5450_int, var_5451_float); // 0x276e NEW_2
	var_5446_int = var_5448_int; // 0x276f Mov
	return 0; // 0x2771 Return
}


func_14186()
{
	var_5889_object = Obj(); var_5890_int = 0; var_5891_int = 0; var_5892_int = 0; var_5893_object = Obj(); var_5894_int = 0; var_5895_int = 0; var_5896_int = 0; // 0x376a PushV
	CreateIntVector(var_5893_object); // 0x376b Func
	var_5897_object = Obj(); var_5898_bool = 0; var_5899_int = 0; // 0x376d PushV
	var_5897_object = var_5893_object; // 0x376e Mov
	var_5898_bool = 0; // 0x376f MovB
	var_5899_int = -1; // 0x3770 MovI
	func_14141(var_5898_bool, var_5899_int); // 0x3771 NEW_2
	size(var_5894_int); // 0x3773 ObjFunc
	var_5895_int = 0; // 0x3775 MovI
	
Label_14198:
	var_5912_bool = var_5895_int < var_5894_int; // 0x3776 LT
	if(var_5912_bool == 0) goto Label_14209; // 0x3777 JumpB
	get(var_5896_int, var_5895_int); // 0x3778 ObjFunc
	var_5913_int = 0; // 0x377a PushV
	var_5913_int = var_5896_int; // 0x377b Mov
	func_14174(var_5913_int); // 0x377c NEW_2
	var_5922_int = 1; // 0x377e PushI
	var_5895_int = var_5895_int + var_5922_int; // 0x377f Add2
	goto Label_14198; // 0x3780 Jump
	
Label_14209:
	return 8; // 0x3781 Return
}


func_876(var_639_int, var_640_bool, var_641_int)
{
	var_642_string = ""; var_643_object = Obj(); var_644_int = 0; var_645_string = ""; var_646_object = Obj(); var_647_int = 0; var_648_string = ""; var_649_object = Obj(); var_650_string = ""; var_651_object = Obj(); var_652_int = 0; var_653_string = ""; var_654_object = Obj(); var_655_int = 0; var_656_string = ""; var_657_object = Obj(); // 0x36c PushV
	var_658_string = "dr_mark"; // 0x36d PushS
	var_659_int = 1; // 0x36e PushI
	var_660_int = var_639_int + var_659_int; // 0x36f Add
	var_650_string = var_658_string + var_660_int; // 0x370 Add2
	var_661_bool = var_640_bool; // 0x371 Push
	if(var_661_bool == 0) goto Label_918; // 0x372 JumpB
	GetMainOutdoorScene(var_651_object); // 0x373 Func
	var_662_bool = var_651_object == 0; // 0x375 NullEq
	if(var_662_bool == 0) goto Label_891; // 0x376 JumpB
	var_663_string = "City manager: Can't find main outdoor scene"; // 0x377 PushS
	Trace(var_663_string); // 0x378 Func
	return 16; // 0x37a Return
	
Label_891:
	var_652_int = 1; // 0x37b MovI
	
Label_892:
	var_664_bool = var_652_int <= var_641_int; // 0x37c LE
	if(var_664_bool == 0) goto Label_916; // 0x37d JumpB
	var_665_string = "_"; // 0x37e PushS
	var_666_int = var_650_string + var_665_string; // 0x37f Add
	var_653_string = var_666_int + var_652_int; // 0x380 Add2
	FindActor(var_654_object, var_653_string); // 0x381 Func
	var_667_bool = var_654_object == 0; // 0x383 Not
	if(var_667_bool == 0) goto Label_907; // 0x384 JumpB
	var_668_cvector = CVector(0.0, 0.0, 0.0); // 0x385 PushVec
	var_669_cvector = CVector(0.0, 0.0, 1.0); // 0x386 PushVec
	var_670_string = "disease_object.xml"; // 0x387 PushS
	AddActor(var_654_object, var_653_string, var_651_object, var_668_cvector, var_669_cvector, var_670_string); // 0x388 Func
	goto Label_912; // 0x38a Jump
	
Label_912:
	var_654_object = 0; // 0x390 SetNull
	var_671_int = 1; // 0x391 PushI
	var_652_int = var_652_int + var_671_int; // 0x392 Add2
	goto Label_892; // 0x393 Jump
	
Label_907:
	var_672_bool = 0; var_673_string = ""; var_674_string = ""; // 0x38b PushV
	var_673_string = var_653_string; // 0x38c Mov
	var_674_string = "restore"; // 0x38d MovS
	func_245(var_672_bool, var_673_string, var_674_string); // 0x38e NEW_2
	
Label_916:
	var_651_object = 0; // 0x394 SetNull
	goto Label_937; // 0x395 Jump
	
Label_937:
	return 16; // 0x3a9 Return
	
Label_918:
	var_655_int = 1; // 0x396 MovI
	
Label_919:
	var_678_bool = var_655_int <= var_641_int; // 0x397 LE
	if(var_678_bool == 0) goto Label_937; // 0x398 JumpB
	var_679_string = "_"; // 0x399 PushS
	var_680_int = var_650_string + var_679_string; // 0x39a Add
	var_656_string = var_680_int + var_655_int; // 0x39b Add2
	FindActor(var_657_object, var_656_string); // 0x39c Func
	var_681_object = var_657_object; // 0x39e Push
	if(var_681_object == 0) goto Label_933; // 0x39f JumpB
	var_682_bool = 0; var_683_string = ""; var_684_string = ""; // 0x3a0 PushV
	var_683_string = var_656_string; // 0x3a1 Mov
	var_684_string = "cleanup"; // 0x3a2 MovS
	func_245(var_682_bool, var_683_string, var_684_string); // 0x3a3 NEW_2
	
Label_933:
	var_657_object = 0; // 0x3a5 SetNull
	var_685_int = 1; // 0x3a6 PushI
	var_655_int = var_655_int + var_685_int; // 0x3a7 Add2
	goto Label_919; // 0x3a8 Jump
}


func_12141(var_5430_bool)
{
	var_5433_int = 0; var_5434_string = ""; // 0x2f6e PushV
	var_5434_string = "d7AglajaVisit"; // 0x2f6f MovS
	func_138(var_5433_int, var_5434_string); // 0x2f70 NEW_2
	var_5435_int = 1; // 0x2f72 PushI
	var_5436_bool = var_5433_int == var_5435_int; // 0x2f73 Eq
	if(var_5436_bool == 0) goto Label_12151; // 0x2f74 JumpB
	var_5430_bool = 1; // 0x2f75 MovB
	return 0; // 0x2f76 Return
	
Label_12151:
	var_5430_bool = 0; // 0x2f77 MovB
	return 0; // 0x2f78 Return
}


func_1903(var_1057_int, var_1058_int, var_1059_int)
{
	var_1060_int = 0; var_1061_int = 0; // 0x76f PushV
	var_1062_int = 1; // 0x770 PushI
	var_1063_int = var_1058_int + var_1062_int; // 0x771 Add
	var_1064_int = 12; // 0x772 PushI
	var_1065_bool = var_1063_int == var_1064_int; // 0x773 Eq
	if(var_1065_bool == 0) goto Label_1910; // 0x774 JumpB
	return 2; // 0x775 Return
	
Label_1910:
	var_1066_bool = 0; // 0x776 PushV
	var_1066_bool = 0; // 0x777 MovB
	var_1067_bool = 0; // 0x778 PushV
	var_1067_bool = 1; // 0x779 MovB
	var_1068_int = 7; // 0x77a PushI
	var_1069_bool = var_1059_int < var_1068_int; // 0x77b LT
	if(var_1069_bool == 0) goto Label_1921; // 0x77c JumpB
	var_1070_int = 21; // 0x77d PushI
	var_1071_bool = var_1059_int > var_1070_int; // 0x77e GT
	if(var_1071_bool == 0) goto Label_1921; // 0x77f JumpB
	var_1067_bool = 0; // 0x780 MovB
	
Label_1921:
	if(var_1067_bool == 0) goto Label_1926; // 0x781 JumpB
	var_1072_int = 0; // 0x782 PushI
	var_1073_bool = var_1058_int != var_1072_int; // 0x783 Neq
	if(var_1073_bool == 0) goto Label_1926; // 0x784 JumpB
	var_1066_bool = 1; // 0x785 MovB
	
Label_1926:
	if(var_1066_bool == 0) goto Label_1941; // 0x786 JumpB
	var_1074_float = 0; var_1075_int = 0; // 0x787 PushV
	var_1075_int = var_1058_int; // 0x788 Mov
	func_1147(var_1074_float, var_1075_int); // 0x789 NEW_2
	var_1061_int = var_1074_float; // 0x78a Mov
	var_1076_int = var_1061_int; // 0x78c Push
	if(var_1076_int == 0) goto Label_1941; // 0x78d JumpB
	var_1077_int = 0; var_1078_string = ""; var_1079_string = ""; var_1080_int = 0; // 0x78e PushV
	var_1077_int = var_1057_int; // 0x78f Mov
	var_1078_string = "pers_grabitel"; // 0x790 MovS
	var_1079_string = "grabitel.xml"; // 0x791 MovS
	var_1080_int = var_1061_int; // 0x792 Mov
	func_509(var_1077_int, var_1078_string, var_1079_string, var_1080_int); // 0x793 NEW_2
	
Label_1941:
	var_1081_bool = 0; var_1082_int = 0; var_1083_int = 0; // 0x795 PushV
	var_1082_int = var_1058_int; // 0x796 Mov
	var_1083_int = var_1059_int; // 0x797 Mov
	func_1116(var_1081_bool, var_1082_int, var_1083_int); // 0x798 NEW_2
	if(var_1081_bool == 0) goto Label_2004; // 0x79a JumpB
	var_1084_int = 0; var_1085_string = ""; var_1086_string = ""; var_1087_int = 0; // 0x79b PushV
	var_1084_int = var_1057_int; // 0x79c Mov
	var_1085_string = "pers_unosha"; // 0x79d MovS
	var_1086_string = "unosha_attacker.xml"; // 0x79e MovS
	var_1087_int = 1; // 0x79f MovI
	func_509(var_1084_int, var_1085_string, var_1086_string, var_1087_int); // 0x7a0 NEW_2
	var_1088_int = 0; var_1089_string = ""; var_1090_string = ""; var_1091_int = 0; // 0x7a2 PushV
	var_1088_int = var_1057_int; // 0x7a3 Mov
	var_1089_string = "pers_unosha"; // 0x7a4 MovS
	var_1090_string = "unosha2_attacker.xml"; // 0x7a5 MovS
	var_1091_int = 1; // 0x7a6 MovI
	func_509(var_1088_int, var_1089_string, var_1090_string, var_1091_int); // 0x7a7 NEW_2
	var_1092_int = 0; var_1093_string = ""; var_1094_string = ""; var_1095_int = 0; // 0x7a9 PushV
	var_1092_int = var_1057_int; // 0x7aa Mov
	var_1093_string = "pers_worker"; // 0x7ab MovS
	var_1094_string = "worker_attacker.xml"; // 0x7ac MovS
	var_1095_int = 1; // 0x7ad MovI
	func_509(var_1092_int, var_1093_string, var_1094_string, var_1095_int); // 0x7ae NEW_2
	var_1096_int = 0; var_1097_string = ""; var_1098_string = ""; var_1099_int = 0; // 0x7b0 PushV
	var_1096_int = var_1057_int; // 0x7b1 Mov
	var_1097_string = "pers_worker"; // 0x7b2 MovS
	var_1098_string = "worker2_attacker.xml"; // 0x7b3 MovS
	var_1099_int = 1; // 0x7b4 MovI
	func_509(var_1096_int, var_1097_string, var_1098_string, var_1099_int); // 0x7b5 NEW_2
	var_1100_int = 0; var_1101_string = ""; var_1102_string = ""; var_1103_int = 0; // 0x7b7 PushV
	var_1100_int = var_1057_int; // 0x7b8 Mov
	var_1101_string = "pers_woman"; // 0x7b9 MovS
	var_1102_string = "woman.xml"; // 0x7ba MovS
	var_1103_int = 1; // 0x7bb MovI
	func_509(var_1100_int, var_1101_string, var_1102_string, var_1103_int); // 0x7bc NEW_2
	var_1104_int = 0; var_1105_string = ""; var_1106_string = ""; var_1107_int = 0; // 0x7be PushV
	var_1104_int = var_1057_int; // 0x7bf Mov
	var_1105_string = "pers_alkash"; // 0x7c0 MovS
	var_1106_string = "alkash.xml"; // 0x7c1 MovS
	var_1107_int = 1; // 0x7c2 MovI
	func_509(var_1104_int, var_1105_string, var_1106_string, var_1107_int); // 0x7c3 NEW_2
	var_1108_int = 0; var_1109_string = ""; var_1110_string = ""; var_1111_int = 0; // 0x7c5 PushV
	var_1108_int = var_1057_int; // 0x7c6 Mov
	var_1109_string = "pers_girl"; // 0x7c7 MovS
	var_1110_string = "girl.xml"; // 0x7c8 MovS
	var_1111_int = 1; // 0x7c9 MovI
	func_509(var_1108_int, var_1109_string, var_1110_string, var_1111_int); // 0x7ca NEW_2
	var_1112_int = 0; var_1113_string = ""; var_1114_string = ""; var_1115_int = 0; // 0x7cc PushV
	var_1112_int = var_1057_int; // 0x7cd Mov
	var_1113_string = "pers_girl"; // 0x7ce MovS
	var_1114_string = "girl2.xml"; // 0x7cf MovS
	var_1115_int = 1; // 0x7d0 MovI
	func_509(var_1112_int, var_1113_string, var_1114_string, var_1115_int); // 0x7d1 NEW_2
	goto Label_2161; // 0x7d3 Jump
	
Label_2161:
	var_1116_bool = 0; // 0x871 PushV
	var_1116_bool = 0; // 0x872 MovB
	var_1117_bool = 0; // 0x873 PushV
	var_1117_bool = 0; // 0x874 MovB
	var_1118_int = 0; // 0x875 PushI
	var_1119_bool = var_1058_int == var_1118_int; // 0x876 Eq
	if(var_1119_bool == 0) goto Label_2172; // 0x877 JumpB
	var_1120_int = 12; // 0x878 PushI
	var_1121_bool = var_1059_int > var_1120_int; // 0x879 GT
	if(var_1121_bool == 0) goto Label_2172; // 0x87a JumpB
	var_1117_bool = 1; // 0x87b MovB
	
Label_2172:
	if(var_1117_bool == 0) goto Label_2177; // 0x87c JumpB
	var_1122_int = 22; // 0x87d PushI
	var_1123_bool = var_1059_int < var_1122_int; // 0x87e LT
	if(var_1123_bool == 0) goto Label_2177; // 0x87f JumpB
	var_1116_bool = 1; // 0x880 MovB
	
Label_2177:
	if(var_1116_bool == 0) goto Label_2185; // 0x881 JumpB
	var_1124_int = 0; var_1125_string = ""; var_1126_string = ""; var_1127_int = 0; // 0x882 PushV
	var_1124_int = var_1057_int; // 0x883 Mov
	var_1125_string = "pers_woman"; // 0x884 MovS
	var_1126_string = "woman_killme.xml"; // 0x885 MovS
	var_1127_int = 1; // 0x886 MovI
	func_509(var_1124_int, var_1125_string, var_1126_string, var_1127_int); // 0x887 NEW_2
	
Label_2185:
	var_1128_bool = 0; var_1129_int = 0; var_1130_int = 0; // 0x889 PushV
	var_1129_int = var_1058_int; // 0x88a Mov
	var_1130_int = var_1059_int; // 0x88b Mov
	func_1351(var_1128_bool, var_1129_int, var_1130_int); // 0x88c NEW_2
	if(var_1128_bool == 0) goto Label_2198; // 0x88e JumpB
	var_1135_int = 0; var_1136_string = ""; var_1137_string = ""; var_1138_int = 0; // 0x88f PushV
	var_1135_int = var_1057_int; // 0x890 Mov
	var_1136_string = "pers_soldat"; // 0x891 MovS
	var_1137_string = "soldier_marauder.xml"; // 0x892 MovS
	var_1138_int = 2; // 0x893 MovI
	func_509(var_1135_int, var_1136_string, var_1137_string, var_1138_int); // 0x894 NEW_2
	
Label_2198:
	var_1139_bool = 0; var_1140_int = 0; var_1141_int = 0; // 0x896 PushV
	var_1140_int = var_1058_int; // 0x897 Mov
	var_1141_int = var_1059_int; // 0x898 Mov
	func_1361(var_1139_bool, var_1140_int, var_1141_int); // 0x899 NEW_2
	if(var_1139_bool == 0) goto Label_2211; // 0x89b JumpB
	var_1149_int = 0; var_1150_string = ""; var_1151_string = ""; var_1152_int = 0; // 0x89c PushV
	var_1149_int = var_1057_int; // 0x89d Mov
	var_1150_string = "pers_nudegirl"; // 0x89e MovS
	var_1151_string = "nudegirl.xml"; // 0x89f MovS
	var_1152_int = 1; // 0x8a0 MovI
	func_509(var_1149_int, var_1150_string, var_1151_string, var_1152_int); // 0x8a1 NEW_2
	
Label_2211:
	return 2; // 0x8a3 Return
	
Label_2004:
	var_1153_bool = 0; // 0x7d4 PushV
	var_1153_bool = 0; // 0x7d5 MovB
	var_1154_int = 8; // 0x7d6 PushI
	var_1155_bool = var_1059_int > var_1154_int; // 0x7d7 GT
	if(var_1155_bool == 0) goto Label_2013; // 0x7d8 JumpB
	var_1156_int = 21; // 0x7d9 PushI
	var_1157_bool = var_1059_int < var_1156_int; // 0x7da LT
	if(var_1157_bool == 0) goto Label_2013; // 0x7db JumpB
	var_1153_bool = 1; // 0x7dc MovB
	
Label_2013:
	if(var_1153_bool == 0) goto Label_2095; // 0x7dd JumpB
	var_1158_int = 0; var_1159_string = ""; var_1160_string = ""; var_1161_int = 0; // 0x7de PushV
	var_1158_int = var_1057_int; // 0x7df Mov
	var_1159_string = "pers_woman"; // 0x7e0 MovS
	var_1160_string = "woman.xml"; // 0x7e1 MovS
	var_1161_int = 1; // 0x7e2 MovI
	func_509(var_1158_int, var_1159_string, var_1160_string, var_1161_int); // 0x7e3 NEW_2
	var_1162_int = 0; var_1163_string = ""; var_1164_string = ""; var_1165_int = 0; // 0x7e5 PushV
	var_1162_int = var_1057_int; // 0x7e6 Mov
	var_1163_string = "pers_unosha"; // 0x7e7 MovS
	var_1164_string = "unosha.xml"; // 0x7e8 MovS
	var_1165_int = 1; // 0x7e9 MovI
	func_509(var_1162_int, var_1163_string, var_1164_string, var_1165_int); // 0x7ea NEW_2
	var_1166_int = 0; var_1167_string = ""; var_1168_string = ""; var_1169_int = 0; // 0x7ec PushV
	var_1166_int = var_1057_int; // 0x7ed Mov
	var_1167_string = "pers_unosha"; // 0x7ee MovS
	var_1168_string = "unosha2.xml"; // 0x7ef MovS
	var_1169_int = 1; // 0x7f0 MovI
	func_509(var_1166_int, var_1167_string, var_1168_string, var_1169_int); // 0x7f1 NEW_2
	var_1170_int = 0; var_1171_string = ""; var_1172_string = ""; var_1173_int = 0; // 0x7f3 PushV
	var_1170_int = var_1057_int; // 0x7f4 Mov
	var_1171_string = "pers_worker"; // 0x7f5 MovS
	var_1172_string = "worker.xml"; // 0x7f6 MovS
	var_1173_int = 1; // 0x7f7 MovI
	func_509(var_1170_int, var_1171_string, var_1172_string, var_1173_int); // 0x7f8 NEW_2
	var_1174_int = 0; var_1175_string = ""; var_1176_string = ""; var_1177_int = 0; // 0x7fa PushV
	var_1174_int = var_1057_int; // 0x7fb Mov
	var_1175_string = "pers_worker"; // 0x7fc MovS
	var_1176_string = "worker2.xml"; // 0x7fd MovS
	var_1177_int = 1; // 0x7fe MovI
	func_509(var_1174_int, var_1175_string, var_1176_string, var_1177_int); // 0x7ff NEW_2
	var_1178_int = 0; var_1179_string = ""; var_1180_string = ""; var_1181_int = 0; // 0x801 PushV
	var_1178_int = var_1057_int; // 0x802 Mov
	var_1179_string = "pers_alkash"; // 0x803 MovS
	var_1180_string = "alkash.xml"; // 0x804 MovS
	var_1181_int = 1; // 0x805 MovI
	func_509(var_1178_int, var_1179_string, var_1180_string, var_1181_int); // 0x806 NEW_2
	var_1182_int = 0; var_1183_string = ""; var_1184_string = ""; var_1185_int = 0; // 0x808 PushV
	var_1182_int = var_1057_int; // 0x809 Mov
	var_1183_string = "pers_girl"; // 0x80a MovS
	var_1184_string = "girl.xml"; // 0x80b MovS
	var_1185_int = 1; // 0x80c MovI
	func_509(var_1182_int, var_1183_string, var_1184_string, var_1185_int); // 0x80d NEW_2
	var_1186_int = 0; var_1187_string = ""; var_1188_string = ""; var_1189_int = 0; // 0x80f PushV
	var_1186_int = var_1057_int; // 0x810 Mov
	var_1187_string = "pers_girl"; // 0x811 MovS
	var_1188_string = "girl2.xml"; // 0x812 MovS
	var_1189_int = 1; // 0x813 MovI
	func_509(var_1186_int, var_1187_string, var_1188_string, var_1189_int); // 0x814 NEW_2
	var_1190_int = 1; // 0x816 PushI
	var_1191_int = var_1058_int + var_1190_int; // 0x817 Add
	var_1192_int = 3; // 0x818 PushI
	var_1193_bool = var_1191_int >= var_1192_int; // 0x819 GE
	if(var_1193_bool == 0) goto Label_2082; // 0x81a JumpB
	var_1194_int = 0; var_1195_string = ""; var_1196_string = ""; var_1197_int = 0; // 0x81b PushV
	var_1194_int = var_1057_int; // 0x81c Mov
	var_1195_string = "pers_dohodyaga"; // 0x81d MovS
	var_1196_string = "dohodyaga.xml"; // 0x81e MovS
	var_1197_int = 1; // 0x81f MovI
	func_509(var_1194_int, var_1195_string, var_1196_string, var_1197_int); // 0x820 NEW_2
	
Label_2082:
	var_1198_int = 1; // 0x822 PushI
	var_1199_int = var_1058_int + var_1198_int; // 0x823 Add
	var_1200_int = 7; // 0x824 PushI
	var_1201_bool = var_1199_int >= var_1200_int; // 0x825 GE
	if(var_1201_bool == 0) goto Label_2094; // 0x826 JumpB
	var_1202_int = 0; var_1203_string = ""; var_1204_string = ""; var_1205_int = 0; // 0x827 PushV
	var_1202_int = var_1057_int; // 0x828 Mov
	var_1203_string = "pers_butcher"; // 0x829 MovS
	var_1204_string = "butcher.xml"; // 0x82a MovS
	var_1205_int = 2; // 0x82b MovI
	func_509(var_1202_int, var_1203_string, var_1204_string, var_1205_int); // 0x82c NEW_2
	
Label_2094:
	goto Label_2161; // 0x82e Jump
	
Label_2095:
	var_1206_int = 0; var_1207_string = ""; var_1208_string = ""; var_1209_int = 0; // 0x82f PushV
	var_1206_int = var_1057_int; // 0x830 Mov
	var_1207_string = "pers_woman"; // 0x831 MovS
	var_1208_string = "woman.xml"; // 0x832 MovS
	var_1209_int = 1; // 0x833 MovI
	func_509(var_1206_int, var_1207_string, var_1208_string, var_1209_int); // 0x834 NEW_2
	var_1210_int = 0; var_1211_string = ""; var_1212_string = ""; var_1213_int = 0; // 0x836 PushV
	var_1210_int = var_1057_int; // 0x837 Mov
	var_1211_string = "pers_unosha"; // 0x838 MovS
	var_1212_string = "unosha.xml"; // 0x839 MovS
	var_1213_int = 1; // 0x83a MovI
	func_509(var_1210_int, var_1211_string, var_1212_string, var_1213_int); // 0x83b NEW_2
	var_1214_int = 0; var_1215_string = ""; var_1216_string = ""; var_1217_int = 0; // 0x83d PushV
	var_1214_int = var_1057_int; // 0x83e Mov
	var_1215_string = "pers_unosha"; // 0x83f MovS
	var_1216_string = "unosha2.xml"; // 0x840 MovS
	var_1217_int = 1; // 0x841 MovI
	func_509(var_1214_int, var_1215_string, var_1216_string, var_1217_int); // 0x842 NEW_2
	var_1218_int = 0; var_1219_string = ""; var_1220_string = ""; var_1221_int = 0; // 0x844 PushV
	var_1218_int = var_1057_int; // 0x845 Mov
	var_1219_string = "pers_worker"; // 0x846 MovS
	var_1220_string = "worker.xml"; // 0x847 MovS
	var_1221_int = 1; // 0x848 MovI
	func_509(var_1218_int, var_1219_string, var_1220_string, var_1221_int); // 0x849 NEW_2
	var_1222_int = 0; var_1223_string = ""; var_1224_string = ""; var_1225_int = 0; // 0x84b PushV
	var_1222_int = var_1057_int; // 0x84c Mov
	var_1223_string = "pers_worker"; // 0x84d MovS
	var_1224_string = "worker2.xml"; // 0x84e MovS
	var_1225_int = 1; // 0x84f MovI
	func_509(var_1222_int, var_1223_string, var_1224_string, var_1225_int); // 0x850 NEW_2
	var_1226_int = 0; var_1227_string = ""; var_1228_string = ""; var_1229_int = 0; // 0x852 PushV
	var_1226_int = var_1057_int; // 0x853 Mov
	var_1227_string = "pers_alkash"; // 0x854 MovS
	var_1228_string = "alkash.xml"; // 0x855 MovS
	var_1229_int = 1; // 0x856 MovI
	func_509(var_1226_int, var_1227_string, var_1228_string, var_1229_int); // 0x857 NEW_2
	var_1230_int = 1; // 0x859 PushI
	var_1231_int = var_1058_int + var_1230_int; // 0x85a Add
	var_1232_int = 3; // 0x85b PushI
	var_1233_bool = var_1231_int >= var_1232_int; // 0x85c GE
	if(var_1233_bool == 0) goto Label_2149; // 0x85d JumpB
	var_1234_int = 0; var_1235_string = ""; var_1236_string = ""; var_1237_int = 0; // 0x85e PushV
	var_1234_int = var_1057_int; // 0x85f Mov
	var_1235_string = "pers_dohodyaga"; // 0x860 MovS
	var_1236_string = "dohodyaga.xml"; // 0x861 MovS
	var_1237_int = 1; // 0x862 MovI
	func_509(var_1234_int, var_1235_string, var_1236_string, var_1237_int); // 0x863 NEW_2
	
Label_2149:
	var_1238_int = 1; // 0x865 PushI
	var_1239_int = var_1058_int + var_1238_int; // 0x866 Add
	var_1240_int = 7; // 0x867 PushI
	var_1241_bool = var_1239_int >= var_1240_int; // 0x868 GE
	if(var_1241_bool == 0) goto Label_2161; // 0x869 JumpB
	var_1242_int = 0; var_1243_string = ""; var_1244_string = ""; var_1245_int = 0; // 0x86a PushV
	var_1242_int = var_1057_int; // 0x86b Mov
	var_1243_string = "pers_butcher"; // 0x86c MovS
	var_1244_string = "butcher.xml"; // 0x86d MovS
	var_1245_int = 3; // 0x86e MovI
	func_509(var_1242_int, var_1243_string, var_1244_string, var_1245_int); // 0x86f NEW_2
}


func_10098(var_5422_int, var_5423_float)
{
	var_5424_int = 0; var_5425_int = 0; var_5426_int = 0; var_5427_float = 0; // 0x2773 PushV
	var_5425_int = 515431; // 0x2774 MovI
	var_5426_int = 515430; // 0x2775 MovI
	var_5427_float = var_5423_float; // 0x2776 Mov
	func_12239(var_5424_int, var_5425_int, var_5426_int, var_5427_float); // 0x2777 NEW_2
	var_5422_int = var_5424_int; // 0x2778 Mov
	return 0; // 0x277a Return
}


func_12153(var_5454_bool)
{
	var_5457_int = 0; var_5458_string = ""; // 0x2f7a PushV
	var_5458_string = "d11AglajaVisit"; // 0x2f7b MovS
	func_138(var_5457_int, var_5458_string); // 0x2f7c NEW_2
	var_5459_int = 1; // 0x2f7e PushI
	var_5460_bool = var_5457_int == var_5459_int; // 0x2f7f Eq
	if(var_5460_bool == 0) goto Label_12163; // 0x2f80 JumpB
	var_5454_bool = 1; // 0x2f81 MovB
	return 0; // 0x2f82 Return
	
Label_12163:
	var_5454_bool = 0; // 0x2f83 MovB
	return 0; // 0x2f84 Return
}


func_10107(var_5949_int, var_5950_float)
{
	var_5951_int = 0; var_5952_int = 0; var_5953_int = 0; var_5954_float = 0; // 0x277c PushV
	var_5952_int = 536365; // 0x277d MovI
	var_5953_int = 536364; // 0x277e MovI
	var_5954_float = var_5950_float; // 0x277f Mov
	func_12239(var_5951_int, var_5952_int, var_5953_int, var_5954_float); // 0x2780 NEW_2
	var_5949_int = var_5951_int; // 0x2781 Mov
	return 0; // 0x2783 Return
}


func_7037(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object)
{
	var_4102_int = 0; // 0x1b7e PushI
	var_4103_bool = var_4097_int == var_4102_int; // 0x1b7f Eq
	if(var_4103_bool == 0) goto Label_7077; // 0x1b80 JumpB
	var_4104_int = 0; var_4105_bool = 0; // 0x1b81 PushV
	var_4104_int = 13; // 0x1b82 MovI
	var_4105_bool = 0; // 0x1b83 MovB
	func_802(var_4104_int, var_4105_bool); // 0x1b84 NEW_2
	var_4106_int = 0; var_4107_bool = 0; var_4108_int = 0; // 0x1b86 PushV
	var_4106_int = 13; // 0x1b87 MovI
	var_4107_bool = 0; // 0x1b88 MovB
	var_4108_int = 1; // 0x1b89 MovI
	func_819(var_4106_int, var_4107_bool, var_4108_int); // 0x1b8a NEW_2
	var_4109_int = 0; var_4110_int = 0; var_4111_object = Obj(); var_4112_object = Obj(); var_4113_object = Obj(); // 0x1b8c PushV
	var_4109_int = 13; // 0x1b8d MovI
	var_4110_int = var_4096_int; // 0x1b8e Mov
	var_4111_object = var_4098_object; // 0x1b8f Mov
	var_4112_object = var_4099_object; // 0x1b90 Mov
	var_4113_object = var_4100_object; // 0x1b91 Mov
	func_726(var_4109_int, var_4110_int, var_4111_object, var_4112_object, var_4113_object); // 0x1b92 NEW_2
	var_4114_object = Obj(); var_4115_int = 0; // 0x1b94 PushV
	var_4114_object = var_4101_object; // 0x1b95 Mov
	var_4115_int = 2; // 0x1b96 MovI
	func_311(var_4115_int); // 0x1b97 NEW_2
	var_4116_int = 0; var_4117_bool = 0; var_4118_int = 0; // 0x1b99 PushV
	var_4116_int = 13; // 0x1b9a MovI
	var_4117_bool = 0; // 0x1b9b MovB
	var_4118_int = 4; // 0x1b9c MovI
	func_876(var_4116_int, var_4117_bool, var_4118_int); // 0x1b9d NEW_2
	var_4119_int = 0; var_4120_bool = 0; var_4121_int = 0; // 0x1b9f PushV
	var_4119_int = 13; // 0x1ba0 MovI
	var_4120_bool = 1; // 0x1ba1 MovB
	var_4121_int = 4; // 0x1ba2 MovI
	func_938(var_4119_int, var_4120_bool, var_4121_int); // 0x1ba3 NEW_2
	
Label_7077:
	var_4122_int = 0; var_4123_bool = 0; // 0x1ba5 PushV
	var_4122_int = 13; // 0x1ba6 MovI
	var_4123_bool = 0; // 0x1ba7 MovB
	func_785(var_4122_int, var_4123_bool); // 0x1ba8 NEW_2
	var_4124_int = 0; var_4125_int = 0; var_4126_int = 0; // 0x1baa PushV
	var_4124_int = 13; // 0x1bab MovI
	var_4125_int = var_4096_int; // 0x1bac Mov
	var_4126_int = var_4097_int; // 0x1bad Mov
	func_3665(var_4124_int, var_4125_int, var_4126_int); // 0x1bae NEW_2
	return 0; // 0x1bb0 Return
}


func_6013(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object)
{
	var_3937_int = 0; // 0x177e PushI
	var_3938_bool = var_3932_int == var_3937_int; // 0x177f Eq
	if(var_3938_bool == 0) goto Label_6053; // 0x1780 JumpB
	var_3939_int = 0; var_3940_bool = 0; // 0x1781 PushV
	var_3939_int = 8; // 0x1782 MovI
	var_3940_bool = 0; // 0x1783 MovB
	func_802(var_3939_int, var_3940_bool); // 0x1784 NEW_2
	var_3941_int = 0; var_3942_bool = 0; var_3943_int = 0; // 0x1786 PushV
	var_3941_int = 8; // 0x1787 MovI
	var_3942_bool = 0; // 0x1788 MovB
	var_3943_int = 1; // 0x1789 MovI
	func_819(var_3941_int, var_3942_bool, var_3943_int); // 0x178a NEW_2
	var_3944_int = 0; var_3945_int = 0; var_3946_object = Obj(); var_3947_object = Obj(); var_3948_object = Obj(); // 0x178c PushV
	var_3944_int = 8; // 0x178d MovI
	var_3945_int = var_3931_int; // 0x178e Mov
	var_3946_object = var_3933_object; // 0x178f Mov
	var_3947_object = var_3934_object; // 0x1790 Mov
	var_3948_object = var_3935_object; // 0x1791 Mov
	func_726(var_3944_int, var_3945_int, var_3946_object, var_3947_object, var_3948_object); // 0x1792 NEW_2
	var_3949_object = Obj(); var_3950_int = 0; // 0x1794 PushV
	var_3949_object = var_3936_object; // 0x1795 Mov
	var_3950_int = 2; // 0x1796 MovI
	func_311(var_3950_int); // 0x1797 NEW_2
	var_3951_int = 0; var_3952_bool = 0; var_3953_int = 0; // 0x1799 PushV
	var_3951_int = 8; // 0x179a MovI
	var_3952_bool = 0; // 0x179b MovB
	var_3953_int = 4; // 0x179c MovI
	func_876(var_3951_int, var_3952_bool, var_3953_int); // 0x179d NEW_2
	var_3954_int = 0; var_3955_bool = 0; var_3956_int = 0; // 0x179f PushV
	var_3954_int = 8; // 0x17a0 MovI
	var_3955_bool = 1; // 0x17a1 MovB
	var_3956_int = 4; // 0x17a2 MovI
	func_938(var_3954_int, var_3955_bool, var_3956_int); // 0x17a3 NEW_2
	
Label_6053:
	var_3957_int = 0; var_3958_bool = 0; // 0x17a5 PushV
	var_3957_int = 8; // 0x17a6 MovI
	var_3958_bool = 0; // 0x17a7 MovB
	func_785(var_3957_int, var_3958_bool); // 0x17a8 NEW_2
	var_3959_int = 0; var_3960_int = 0; var_3961_int = 0; // 0x17aa PushV
	var_3959_int = 8; // 0x17ab MovI
	var_3960_int = var_3931_int; // 0x17ac Mov
	var_3961_int = var_3932_int; // 0x17ad Mov
	func_3665(var_3959_int, var_3960_int, var_3961_int); // 0x17ae NEW_2
	return 0; // 0x17b0 Return
}


func_11138()
{
	var_4909_object = Obj(); var_4910_object = Obj(); var_4911_object = Obj(); var_4912_object = Obj(); // 0x2b82 PushV
	var_4913_object = Obj(); // 0x2b83 PushV
	func_12247(var_4913_object); // 0x2b84 NEW_2
	var_4911_object = var_4913_object; // 0x2b85 Mov
	var_4914_string = "d5q01AlexandrGotoKaterina"; // 0x2b87 PushS
	FindMark(var_4912_object, var_4914_string); // 0x2b88 ObjFunc
	var_4915_object = var_4912_object; // 0x2b8a Push
	if(var_4915_object == 0) goto Label_11150; // 0x2b8b JumpB
	Remove(); // 0x2b8c ObjFunc
	
Label_11150:
	var_4916_string = "d5q01BigVladGotoAlexandr"; // 0x2b8e PushS
	FindMark(var_4912_object, var_4916_string); // 0x2b8f ObjFunc
	var_4917_object = var_4912_object; // 0x2b91 Push
	if(var_4917_object == 0) goto Label_11157; // 0x2b92 JumpB
	Remove(); // 0x2b93 ObjFunc
	
Label_11157:
	var_4918_string = "d5q01BigVladGotoLara"; // 0x2b95 PushS
	FindMark(var_4912_object, var_4918_string); // 0x2b96 ObjFunc
	var_4919_object = var_4912_object; // 0x2b98 Push
	if(var_4919_object == 0) goto Label_11164; // 0x2b99 JumpB
	Remove(); // 0x2b9a ObjFunc
	
Label_11164:
	var_4920_string = "d5q01BurahMeeting"; // 0x2b9c PushS
	FindMark(var_4912_object, var_4920_string); // 0x2b9d ObjFunc
	var_4921_object = var_4912_object; // 0x2b9f Push
	if(var_4921_object == 0) goto Label_11171; // 0x2ba0 JumpB
	Remove(); // 0x2ba1 ObjFunc
	
Label_11171:
	var_4922_string = "d5q01GrifWantsMoney"; // 0x2ba3 PushS
	FindMark(var_4912_object, var_4922_string); // 0x2ba4 ObjFunc
	var_4923_object = var_4912_object; // 0x2ba6 Push
	if(var_4923_object == 0) goto Label_11178; // 0x2ba7 JumpB
	Remove(); // 0x2ba8 ObjFunc
	
Label_11178:
	var_4924_string = "d5q01PatrolGotoGrif"; // 0x2baa PushS
	FindMark(var_4912_object, var_4924_string); // 0x2bab ObjFunc
	var_4925_object = var_4912_object; // 0x2bad Push
	if(var_4925_object == 0) goto Label_11185; // 0x2bae JumpB
	Remove(); // 0x2baf ObjFunc
	
Label_11185:
	var_4926_string = "d5q01RubinGotoBigVlad"; // 0x2bb1 PushS
	FindMark(var_4912_object, var_4926_string); // 0x2bb2 ObjFunc
	var_4927_object = var_4912_object; // 0x2bb4 Push
	if(var_4927_object == 0) goto Label_11192; // 0x2bb5 JumpB
	Remove(); // 0x2bb6 ObjFunc
	
Label_11192:
	var_4928_string = "d5q01RubinGotoBigVladSelf"; // 0x2bb8 PushS
	FindMark(var_4912_object, var_4928_string); // 0x2bb9 ObjFunc
	var_4929_object = var_4912_object; // 0x2bbb Push
	if(var_4929_object == 0) goto Label_11199; // 0x2bbc JumpB
	Remove(); // 0x2bbd ObjFunc
	
Label_11199:
	var_4930_string = "d5q02AnnaGotoGorbun"; // 0x2bbf PushS
	FindMark(var_4912_object, var_4930_string); // 0x2bc0 ObjFunc
	var_4931_object = var_4912_object; // 0x2bc2 Push
	if(var_4931_object == 0) goto Label_11206; // 0x2bc3 JumpB
	Remove(); // 0x2bc4 ObjFunc
	
Label_11206:
	var_4932_string = "d5q02AnnaGotoGorbunSelf"; // 0x2bc6 PushS
	FindMark(var_4912_object, var_4932_string); // 0x2bc7 ObjFunc
	var_4933_object = var_4912_object; // 0x2bc9 Push
	if(var_4933_object == 0) goto Label_11213; // 0x2bca JumpB
	Remove(); // 0x2bcb ObjFunc
	
Label_11213:
	var_4934_string = "d5q02AnnaGotoKabak"; // 0x2bcd PushS
	FindMark(var_4912_object, var_4934_string); // 0x2bce ObjFunc
	var_4935_object = var_4912_object; // 0x2bd0 Push
	if(var_4935_object == 0) goto Label_11220; // 0x2bd1 JumpB
	Remove(); // 0x2bd2 ObjFunc
	
Label_11220:
	var_4936_string = "d5q02GorbunFindTheDaughter"; // 0x2bd4 PushS
	FindMark(var_4912_object, var_4936_string); // 0x2bd5 ObjFunc
	var_4937_object = var_4912_object; // 0x2bd7 Push
	if(var_4937_object == 0) goto Label_11227; // 0x2bd8 JumpB
	Remove(); // 0x2bd9 ObjFunc
	
Label_11227:
	var_4938_string = "d5q02NudeMeeting"; // 0x2bdb PushS
	FindMark(var_4912_object, var_4938_string); // 0x2bdc ObjFunc
	var_4939_object = var_4912_object; // 0x2bde Push
	if(var_4939_object == 0) goto Label_11234; // 0x2bdf JumpB
	Remove(); // 0x2be0 ObjFunc
	
Label_11234:
	var_4940_string = "d5q03BirdmaskBringMoneySelf"; // 0x2be2 PushS
	FindMark(var_4912_object, var_4940_string); // 0x2be3 ObjFunc
	var_4941_object = var_4912_object; // 0x2be5 Push
	if(var_4941_object == 0) goto Label_11241; // 0x2be6 JumpB
	Remove(); // 0x2be7 ObjFunc
	
Label_11241:
	var_4942_string = "d5q03BirdmaskGotoMladVlad"; // 0x2be9 PushS
	FindMark(var_4912_object, var_4942_string); // 0x2bea ObjFunc
	var_4943_object = var_4912_object; // 0x2bec Push
	if(var_4943_object == 0) goto Label_11248; // 0x2bed JumpB
	Remove(); // 0x2bee ObjFunc
	
Label_11248:
	var_4944_string = "d5q03BirdmaskGotoViktor"; // 0x2bf0 PushS
	FindMark(var_4912_object, var_4944_string); // 0x2bf1 ObjFunc
	var_4945_object = var_4912_object; // 0x2bf3 Push
	if(var_4945_object == 0) goto Label_11255; // 0x2bf4 JumpB
	Remove(); // 0x2bf5 ObjFunc
	
Label_11255:
	var_4946_string = "d5q03SavePrisoners"; // 0x2bf7 PushS
	FindMark(var_4912_object, var_4946_string); // 0x2bf8 ObjFunc
	var_4947_object = var_4912_object; // 0x2bfa Push
	if(var_4947_object == 0) goto Label_11262; // 0x2bfb JumpB
	Remove(); // 0x2bfc ObjFunc
	
Label_11262:
	var_4948_bool = 0; var_4949_int = 0; // 0x2bfe PushV
	var_4949_int = 139; // 0x2bff MovI
	func_12222(var_4948_bool, var_4949_int); // 0x2c00 NEW_2
	var_4950_bool = 0; var_4951_int = 0; // 0x2c02 PushV
	var_4951_int = 148; // 0x2c03 MovI
	func_12222(var_4950_bool, var_4951_int); // 0x2c04 NEW_2
	var_4952_bool = 0; var_4953_int = 0; // 0x2c06 PushV
	var_4953_int = 154; // 0x2c07 MovI
	func_12222(var_4952_bool, var_4953_int); // 0x2c08 NEW_2
	return 4; // 0x2c0a Return
}


func_14211()
{
	func_14186(); // 0x3784 NEW_2
	return 0; // 0x3786 Return
}


func_10116(var_5767_int, var_5768_float)
{
	var_5769_int = 0; var_5770_int = 0; var_5771_int = 0; var_5772_float = 0; // 0x2785 PushV
	var_5770_int = 522208; // 0x2786 MovI
	var_5771_int = 522207; // 0x2787 MovI
	var_5772_float = var_5768_float; // 0x2788 Mov
	func_12239(var_5769_int, var_5770_int, var_5771_int, var_5772_float); // 0x2789 NEW_2
	var_5767_int = var_5769_int; // 0x278a Mov
	return 0; // 0x278c Return
}


func_12165(var_5487_bool)
{
	var_5487_bool = 0; // 0x2f86 MovB
	return 0; // 0x2f87 Return
}


func_2950(var_2435_int, var_2436_int, var_2437_int)
{
	var_2438_int = 0; var_2439_int = 0; var_2440_int = 0; var_2441_int = 0; // 0xb86 PushV
	var_2442_bool = 0; // 0xb87 PushV
	var_2442_bool = 0; // 0xb88 MovB
	var_2443_int = 8; // 0xb89 PushI
	var_2444_bool = var_2437_int > var_2443_int; // 0xb8a GT
	if(var_2444_bool == 0) goto Label_2960; // 0xb8b JumpB
	var_2445_int = 21; // 0xb8c PushI
	var_2446_bool = var_2437_int < var_2445_int; // 0xb8d LT
	if(var_2446_bool == 0) goto Label_2960; // 0xb8e JumpB
	var_2442_bool = 1; // 0xb8f MovB
	
Label_2960:
	if(var_2442_bool == 0) goto Label_3015; // 0xb90 JumpB
	var_2447_int = 0; var_2448_string = ""; var_2449_string = ""; var_2450_int = 0; // 0xb91 PushV
	var_2447_int = var_2435_int; // 0xb92 Mov
	var_2448_string = "pers_vaxxabit"; // 0xb93 MovS
	var_2449_string = "vaxxabit_d.xml"; // 0xb94 MovS
	var_2450_int = 6; // 0xb95 MovI
	func_509(var_2447_int, var_2448_string, var_2449_string, var_2450_int); // 0xb96 NEW_2
	var_2451_int = 0; var_2452_string = ""; var_2453_string = ""; var_2454_int = 0; // 0xb98 PushV
	var_2451_int = var_2435_int; // 0xb99 Mov
	var_2452_string = "pers_vaxxabitka"; // 0xb9a MovS
	var_2453_string = "vaxxabitka_d.xml"; // 0xb9b MovS
	var_2454_int = 6; // 0xb9c MovI
	func_509(var_2451_int, var_2452_string, var_2453_string, var_2454_int); // 0xb9d NEW_2
	var_2455_int = 0; var_2456_string = ""; var_2457_string = ""; var_2458_int = 0; // 0xb9f PushV
	var_2455_int = var_2435_int; // 0xba0 Mov
	var_2456_string = "pers_rat_big"; // 0xba1 MovS
	var_2457_string = "rat_big.xml"; // 0xba2 MovS
	var_2458_int = 2; // 0xba3 MovI
	func_509(var_2455_int, var_2456_string, var_2457_string, var_2458_int); // 0xba4 NEW_2
	var_2459_int = 0; var_2460_string = ""; var_2461_string = ""; var_2462_int = 0; // 0xba6 PushV
	var_2459_int = var_2435_int; // 0xba7 Mov
	var_2460_string = "fog"; // 0xba8 MovS
	var_2461_string = "fog.xml"; // 0xba9 MovS
	var_2462_int = 6; // 0xbaa MovI
	func_535(var_2459_int, var_2460_string, var_2461_string, var_2462_int); // 0xbab NEW_2
	var_2463_int = 5; // 0xbad PushI
	var_2464_bool = var_2436_int >= var_2463_int; // 0xbae GE
	if(var_2464_bool == 0) goto Label_2999; // 0xbaf JumpB
	var_2465_int = 0; var_2466_string = ""; var_2467_string = ""; var_2468_int = 0; // 0xbb0 PushV
	var_2465_int = var_2435_int; // 0xbb1 Mov
	var_2466_string = "fog"; // 0xbb2 MovS
	var_2467_string = "fog_hunter.xml"; // 0xbb3 MovS
	var_2468_int = 2; // 0xbb4 MovI
	func_535(var_2465_int, var_2466_string, var_2467_string, var_2468_int); // 0xbb5 NEW_2
	
Label_2999:
	var_2469_int = 1; // 0xbb7 PushI
	var_2470_float = 0; var_2471_int = 0; // 0xbb8 PushV
	var_2471_int = var_2436_int; // 0xbb9 Mov
	func_1261(var_2470_float, var_2471_int); // 0xbba NEW_2
	var_2440_int = var_2469_int * var_2470_float; // 0xbbc Mult2
	var_2472_int = var_2440_int; // 0xbbd Push
	if(var_2472_int == 0) goto Label_3014; // 0xbbe JumpB
	var_2473_int = 0; var_2474_string = ""; var_2475_string = ""; var_2476_int = 0; // 0xbbf PushV
	var_2473_int = var_2435_int; // 0xbc0 Mov
	var_2474_string = "pers_bomber"; // 0xbc1 MovS
	var_2475_string = "bomber.xml"; // 0xbc2 MovS
	var_2476_int = var_2440_int; // 0xbc3 Mov
	func_509(var_2473_int, var_2474_string, var_2475_string, var_2476_int); // 0xbc4 NEW_2
	
Label_3014:
	goto Label_3068; // 0xbc6 Jump
	
Label_3068:
	var_2477_int = 0; var_2478_string = ""; var_2479_string = ""; var_2480_int = 0; var_2481_int = 0; var_2482_int = 0; // 0xbfc PushV
	var_2477_int = var_2435_int; // 0xbfd Mov
	var_2478_string = "pers_worker"; // 0xbfe MovS
	var_2479_string = "agony1_man.xml"; // 0xbff MovS
	var_2480_int = 2; // 0xc00 MovI
	var_2481_int = 4; // 0xc01 MovI
	var_2482_int = 4; // 0xc02 MovI
	func_522(var_2477_int, var_2478_string, var_2479_string, var_2480_int, var_2481_int, var_2482_int); // 0xc03 NEW_2
	var_2483_int = 0; var_2484_string = ""; var_2485_string = ""; var_2486_int = 0; var_2487_int = 0; var_2488_int = 0; // 0xc05 PushV
	var_2483_int = var_2435_int; // 0xc06 Mov
	var_2484_string = "pers_unosha"; // 0xc07 MovS
	var_2485_string = "agony1_man.xml"; // 0xc08 MovS
	var_2486_int = 2; // 0xc09 MovI
	var_2487_int = 4; // 0xc0a MovI
	var_2488_int = 4; // 0xc0b MovI
	func_522(var_2483_int, var_2484_string, var_2485_string, var_2486_int, var_2487_int, var_2488_int); // 0xc0c NEW_2
	var_2489_int = 0; var_2490_string = ""; var_2491_string = ""; var_2492_int = 0; var_2493_int = 0; var_2494_int = 0; // 0xc0e PushV
	var_2489_int = var_2435_int; // 0xc0f Mov
	var_2490_string = "pers_woman"; // 0xc10 MovS
	var_2491_string = "agony1_woman.xml"; // 0xc11 MovS
	var_2492_int = 2; // 0xc12 MovI
	var_2493_int = 4; // 0xc13 MovI
	var_2494_int = 4; // 0xc14 MovI
	func_522(var_2489_int, var_2490_string, var_2491_string, var_2492_int, var_2493_int, var_2494_int); // 0xc15 NEW_2
	var_2495_int = 0; var_2496_string = ""; var_2497_string = ""; var_2498_int = 0; var_2499_int = 0; var_2500_int = 0; // 0xc17 PushV
	var_2495_int = var_2435_int; // 0xc18 Mov
	var_2496_string = "pers_wasted_girl"; // 0xc19 MovS
	var_2497_string = "agony1_woman.xml"; // 0xc1a MovS
	var_2498_int = 2; // 0xc1b MovI
	var_2499_int = 4; // 0xc1c MovI
	var_2500_int = 4; // 0xc1d MovI
	func_522(var_2495_int, var_2496_string, var_2497_string, var_2498_int, var_2499_int, var_2500_int); // 0xc1e NEW_2
	var_2501_bool = 0; var_2502_int = 0; var_2503_int = 0; // 0xc20 PushV
	var_2502_int = var_2436_int; // 0xc21 Mov
	var_2503_int = var_2437_int; // 0xc22 Mov
	func_1351(var_2501_bool, var_2502_int, var_2503_int); // 0xc23 NEW_2
	if(var_2501_bool == 0) goto Label_3117; // 0xc25 JumpB
	var_2504_int = 0; var_2505_string = ""; var_2506_string = ""; var_2507_int = 0; // 0xc26 PushV
	var_2504_int = var_2435_int; // 0xc27 Mov
	var_2505_string = "pers_soldat"; // 0xc28 MovS
	var_2506_string = "soldier_marauder.xml"; // 0xc29 MovS
	var_2507_int = 2; // 0xc2a MovI
	func_509(var_2504_int, var_2505_string, var_2506_string, var_2507_int); // 0xc2b NEW_2
	
Label_3117:
	var_2508_bool = 0; var_2509_int = 0; var_2510_int = 0; // 0xc2d PushV
	var_2509_int = var_2436_int; // 0xc2e Mov
	var_2510_int = var_2437_int; // 0xc2f Mov
	func_1361(var_2508_bool, var_2509_int, var_2510_int); // 0xc30 NEW_2
	if(var_2508_bool == 0) goto Label_3130; // 0xc32 JumpB
	var_2511_int = 0; var_2512_string = ""; var_2513_string = ""; var_2514_int = 0; // 0xc33 PushV
	var_2511_int = var_2435_int; // 0xc34 Mov
	var_2512_string = "pers_nudegirl"; // 0xc35 MovS
	var_2513_string = "nudegirl.xml"; // 0xc36 MovS
	var_2514_int = 1; // 0xc37 MovI
	func_509(var_2511_int, var_2512_string, var_2513_string, var_2514_int); // 0xc38 NEW_2
	
Label_3130:
	var_2515_bool = 0; var_2516_int = 0; // 0xc3a PushV
	var_2516_int = var_2436_int; // 0xc3b Mov
	func_1378(var_2515_bool, var_2516_int); // 0xc3c NEW_2
	if(var_2515_bool == 0) goto Label_3142; // 0xc3e JumpB
	var_2517_int = 0; var_2518_string = ""; var_2519_string = ""; var_2520_int = 0; // 0xc3f PushV
	var_2517_int = var_2435_int; // 0xc40 Mov
	var_2518_string = "pers_sanitar"; // 0xc41 MovS
	var_2519_string = "sanitar.xml"; // 0xc42 MovS
	var_2520_int = 1; // 0xc43 MovI
	func_509(var_2517_int, var_2518_string, var_2519_string, var_2520_int); // 0xc44 NEW_2
	
Label_3142:
	return 4; // 0xc46 Return
	
Label_3015:
	var_2521_int = 0; var_2522_string = ""; var_2523_string = ""; var_2524_int = 0; // 0xbc7 PushV
	var_2521_int = var_2435_int; // 0xbc8 Mov
	var_2522_string = "pers_vaxxabit"; // 0xbc9 MovS
	var_2523_string = "vaxxabit_d.xml"; // 0xbca MovS
	var_2524_int = 5; // 0xbcb MovI
	func_509(var_2521_int, var_2522_string, var_2523_string, var_2524_int); // 0xbcc NEW_2
	var_2525_int = 0; var_2526_string = ""; var_2527_string = ""; var_2528_int = 0; // 0xbce PushV
	var_2525_int = var_2435_int; // 0xbcf Mov
	var_2526_string = "pers_vaxxabitka"; // 0xbd0 MovS
	var_2527_string = "vaxxabitka_d.xml"; // 0xbd1 MovS
	var_2528_int = 5; // 0xbd2 MovI
	func_509(var_2525_int, var_2526_string, var_2527_string, var_2528_int); // 0xbd3 NEW_2
	var_2529_int = 0; var_2530_string = ""; var_2531_string = ""; var_2532_int = 0; // 0xbd5 PushV
	var_2529_int = var_2435_int; // 0xbd6 Mov
	var_2530_string = "pers_rat_big"; // 0xbd7 MovS
	var_2531_string = "rat_big.xml"; // 0xbd8 MovS
	var_2532_int = 3; // 0xbd9 MovI
	func_509(var_2529_int, var_2530_string, var_2531_string, var_2532_int); // 0xbda NEW_2
	var_2533_int = 0; var_2534_string = ""; var_2535_string = ""; var_2536_int = 0; // 0xbdc PushV
	var_2533_int = var_2435_int; // 0xbdd Mov
	var_2534_string = "fog"; // 0xbde MovS
	var_2535_string = "fog.xml"; // 0xbdf MovS
	var_2536_int = 6; // 0xbe0 MovI
	func_535(var_2533_int, var_2534_string, var_2535_string, var_2536_int); // 0xbe1 NEW_2
	var_2537_int = 5; // 0xbe3 PushI
	var_2538_bool = var_2436_int >= var_2537_int; // 0xbe4 GE
	if(var_2538_bool == 0) goto Label_3053; // 0xbe5 JumpB
	var_2539_int = 0; var_2540_string = ""; var_2541_string = ""; var_2542_int = 0; // 0xbe6 PushV
	var_2539_int = var_2435_int; // 0xbe7 Mov
	var_2540_string = "fog"; // 0xbe8 MovS
	var_2541_string = "fog_hunter.xml"; // 0xbe9 MovS
	var_2542_int = 2; // 0xbea MovI
	func_535(var_2539_int, var_2540_string, var_2541_string, var_2542_int); // 0xbeb NEW_2
	
Label_3053:
	var_2543_int = 1; // 0xbed PushI
	var_2544_float = 0; var_2545_int = 0; // 0xbee PushV
	var_2545_int = var_2436_int; // 0xbef Mov
	func_1261(var_2544_float, var_2545_int); // 0xbf0 NEW_2
	var_2441_int = var_2543_int * var_2544_float; // 0xbf2 Mult2
	var_2546_int = var_2441_int; // 0xbf3 Push
	if(var_2546_int == 0) goto Label_3068; // 0xbf4 JumpB
	var_2547_int = 0; var_2548_string = ""; var_2549_string = ""; var_2550_int = 0; // 0xbf5 PushV
	var_2547_int = var_2435_int; // 0xbf6 Mov
	var_2548_string = "pers_bomber"; // 0xbf7 MovS
	var_2549_string = "bomber.xml"; // 0xbf8 MovS
	var_2550_int = var_2441_int; // 0xbf9 Mov
	func_509(var_2547_int, var_2548_string, var_2549_string, var_2550_int); // 0xbfa NEW_2
}


func_14215()
{
	return 0; // 0x3787 Return
}


func_14216(var_144_bool, var_145_int, var_146_int)
{
	var_147_int = 6; // 0x3789 PushI
	var_148_bool = var_145_int == var_147_int; // 0x378a Eq
	if(var_148_bool == 0) goto Label_14222; // 0x378b JumpB
	var_144_bool = 0; // 0x378c MovB
	return 0; // 0x378d Return
	
Label_14222:
	var_149_int = 4; // 0x378e PushI
	var_150_bool = var_146_int == var_149_int; // 0x378f Eq
	if(var_150_bool == 0) goto Label_14236; // 0x3790 JumpB
	var_151_int = 15; // 0x3791 PushI
	var_152_bool = var_145_int == var_151_int; // 0x3792 Eq
	if(var_152_bool == 0) goto Label_14230; // 0x3793 JumpB
	var_144_bool = 0; // 0x3794 MovB
	return 0; // 0x3795 Return
	
Label_14230:
	var_153_int = 9; // 0x3796 PushI
	var_154_bool = var_145_int == var_153_int; // 0x3797 Eq
	if(var_154_bool == 0) goto Label_14235; // 0x3798 JumpB
	var_144_bool = 0; // 0x3799 MovB
	return 0; // 0x379a Return
	
Label_14235:
	goto Label_14253; // 0x379b Jump
	
Label_14253:
	var_144_bool = 1; // 0x37ad MovB
	return 0; // 0x37ae Return
	
Label_14236:
	var_155_int = 5; // 0x379c PushI
	var_156_bool = var_146_int == var_155_int; // 0x379d Eq
	if(var_156_bool == 0) goto Label_14245; // 0x379e JumpB
	var_157_int = 15; // 0x379f PushI
	var_158_bool = var_145_int == var_157_int; // 0x37a0 Eq
	if(var_158_bool == 0) goto Label_14244; // 0x37a1 JumpB
	var_144_bool = 0; // 0x37a2 MovB
	return 0; // 0x37a3 Return
	
Label_14244:
	goto Label_14253; // 0x37a4 Jump
	
Label_14245:
	var_159_int = 6; // 0x37a5 PushI
	var_160_bool = var_146_int == var_159_int; // 0x37a6 Eq
	if(var_160_bool == 0) goto Label_14253; // 0x37a7 JumpB
	var_161_int = 15; // 0x37a8 PushI
	var_162_bool = var_145_int == var_161_int; // 0x37a9 Eq
	if(var_162_bool == 0) goto Label_14253; // 0x37aa JumpB
	var_144_bool = 0; // 0x37ab MovB
	return 0; // 0x37ac Return
}


func_12168()
{
	var_4590_object = Obj(); var_4591_object = Obj(); // 0x2f88 PushV
	var_4592_int = 30; // 0x2f89 PushI
	var_4593_int = 0; // 0x2f8a PushI
	var_4594_int = 504079; // 0x2f8b PushI
	CreateDiaryEntry(var_4591_object, var_4592_int, var_4593_int, var_4594_int); // 0x2f8c Func
	var_4595_bool = 0; var_4596_object = Obj(); var_4597_int = 0; // 0x2f8e PushV
	var_4596_object = var_4591_object; // 0x2f8f Mov
	var_4597_int = -1; // 0x2f90 MovI
	func_12194(var_4595_bool, var_4596_object, var_4597_int); // 0x2f91 NEW_2
	return 2; // 0x2f93 Return
}


func_10125(var_6112_int, var_6113_float)
{
	var_6114_int = 0; var_6115_int = 0; var_6116_int = 0; var_6117_float = 0; // 0x278e PushV
	var_6115_int = 538406; // 0x278f MovI
	var_6116_int = 538405; // 0x2790 MovI
	var_6117_float = var_6113_float; // 0x2791 Mov
	func_12239(var_6114_int, var_6115_int, var_6116_int, var_6117_float); // 0x2792 NEW_2
	var_6112_int = var_6114_int; // 0x2793 Mov
	return 0; // 0x2795 Return
}


func_12181(var_4604_object)
{
	var_4605_object = Obj(); var_4606_object = Obj(); // 0x2f95 PushV
	GetDiaryRoot(var_4606_object); // 0x2f96 Func
	var_4607_bool = var_4606_object == 0; // 0x2f98 Not
	if(var_4607_bool == 0) goto Label_12191; // 0x2f99 JumpB
	var_4608_string = "Can't retrieve diary root"; // 0x2f9a PushS
	Trace(var_4608_string); // 0x2f9b Func
	var_4604_object = 0; // 0x2f9d MovB
	return 2; // 0x2f9e Return
	
Label_12191:
	var_4604_object = var_4606_object; // 0x2f9f Mov
	return 2; // 0x2fa0 Return
}


func_10134(var_5695_int, var_5696_float)
{
	var_5697_int = 0; var_5698_int = 0; var_5699_int = 0; var_5700_float = 0; // 0x2797 PushV
	var_5698_int = 533323; // 0x2798 MovI
	var_5699_int = 533322; // 0x2799 MovI
	var_5700_float = var_5696_float; // 0x279a Mov
	func_12239(var_5697_int, var_5698_int, var_5699_int, var_5700_float); // 0x279b NEW_2
	var_5695_int = var_5697_int; // 0x279c Mov
	return 0; // 0x279e Return
}


func_10143(var_6128_int, var_6129_float)
{
	var_6130_int = 0; var_6131_int = 0; var_6132_int = 0; var_6133_float = 0; // 0x27a0 PushV
	var_6131_int = 538721; // 0x27a1 MovI
	var_6132_int = 538720; // 0x27a2 MovI
	var_6133_float = var_6129_float; // 0x27a3 Mov
	func_12239(var_6130_int, var_6131_int, var_6132_int, var_6133_float); // 0x27a4 NEW_2
	var_6128_int = var_6130_int; // 0x27a5 Mov
	return 0; // 0x27a7 Return
}


func_5026(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object)
{
	var_1254_int = 0; // 0x13a3 PushI
	var_1255_bool = var_1249_int == var_1254_int; // 0x13a4 Eq
	if(var_1255_bool == 0) goto Label_5066; // 0x13a5 JumpB
	var_1256_int = 0; var_1257_bool = 0; // 0x13a6 PushV
	var_1256_int = 3; // 0x13a7 MovI
	var_1257_bool = 0; // 0x13a8 MovB
	func_802(var_1256_int, var_1257_bool); // 0x13a9 NEW_2
	var_1258_int = 0; var_1259_bool = 0; var_1260_int = 0; // 0x13ab PushV
	var_1258_int = 3; // 0x13ac MovI
	var_1259_bool = 0; // 0x13ad MovB
	var_1260_int = 1; // 0x13ae MovI
	func_819(var_1258_int, var_1259_bool, var_1260_int); // 0x13af NEW_2
	var_1261_int = 0; var_1262_int = 0; var_1263_object = Obj(); var_1264_object = Obj(); var_1265_object = Obj(); // 0x13b1 PushV
	var_1261_int = 3; // 0x13b2 MovI
	var_1262_int = var_1248_int; // 0x13b3 Mov
	var_1263_object = var_1250_object; // 0x13b4 Mov
	var_1264_object = var_1251_object; // 0x13b5 Mov
	var_1265_object = var_1252_object; // 0x13b6 Mov
	func_628(var_1262_int, var_1263_object, var_1264_object, var_1265_object); // 0x13b7 NEW_2
	var_1266_object = Obj(); var_1267_int = 0; // 0x13b9 PushV
	var_1266_object = var_1253_object; // 0x13ba Mov
	var_1267_int = 0; // 0x13bb MovI
	func_311(var_1267_int); // 0x13bc NEW_2
	var_1268_int = 0; var_1269_bool = 0; var_1270_int = 0; // 0x13be PushV
	var_1268_int = 3; // 0x13bf MovI
	var_1269_bool = 0; // 0x13c0 MovB
	var_1270_int = 7; // 0x13c1 MovI
	func_876(var_1268_int, var_1269_bool, var_1270_int); // 0x13c2 NEW_2
	var_1271_int = 0; var_1272_bool = 0; var_1273_int = 0; // 0x13c4 PushV
	var_1271_int = 3; // 0x13c5 MovI
	var_1272_bool = 0; // 0x13c6 MovB
	var_1273_int = 7; // 0x13c7 MovI
	func_938(var_1271_int, var_1272_bool, var_1273_int); // 0x13c8 NEW_2
	
Label_5066:
	var_1274_int = 0; var_1275_int = 0; // 0x13ca PushV
	var_1274_int = 3; // 0x13cb MovI
	var_1275_int = var_1249_int; // 0x13cc Mov
	func_989(var_1274_int, var_1275_int); // 0x13cd NEW_2
	var_1291_int = 0; var_1292_int = 0; var_1293_int = 0; // 0x13cf PushV
	var_1291_int = 3; // 0x13d0 MovI
	var_1292_int = var_1248_int; // 0x13d1 Mov
	var_1293_int = var_1249_int; // 0x13d2 Mov
	func_1903(var_1291_int, var_1292_int, var_1293_int); // 0x13d3 NEW_2
	return 0; // 0x13d5 Return
}


func_12194(var_4595_bool, var_4596_object, var_4597_int)
{
	var_4598_object = Obj(); var_4599_object = Obj(); var_4600_int = 0; var_4601_object = Obj(); var_4602_object = Obj(); var_4603_int = 0; // 0x2fa2 PushV
	var_4604_object = Obj(); // 0x2fa3 PushV
	func_12181(var_4604_object); // 0x2fa4 NEW_2
	var_4601_object = var_4604_object; // 0x2fa5 Mov
	Find(var_4597_int, var_4602_object); // 0x2fa7 ObjFunc
	var_4609_bool = var_4602_object == 0; // 0x2fa9 Not
	if(var_4609_bool == 0) goto Label_12209; // 0x2faa JumpB
	var_4610_string = "Can't find diary parent with id: "; // 0x2fab PushS
	var_4611_int = var_4610_string + var_4597_int; // 0x2fac Add
	Trace(var_4611_int); // 0x2fad Func
	var_4595_bool = 0; // 0x2faf MovB
	return 6; // 0x2fb0 Return
	
Label_12209:
	AddChild(var_4596_object); // 0x2fb1 ObjFunc
	var_4612_int = 7; // 0x2fb3 PushI
	SendWorldWndMessage(var_4612_int); // 0x2fb4 Func
	GetCategory(var_4603_int); // 0x2fb6 ObjFunc
	SetDiarySection(var_4603_int); // 0x2fb8 Func
	var_4595_bool = 0; // 0x2fba MovB
	return 6; // 0x2fbb Return
}


func_9126(var_1988_int, var_1989_int, var_1990_int)
{
	var_1991_object = Obj(); var_1992_object = Obj(); var_1993_object = Obj(); var_1994_object = Obj(); var_1995_object = Obj(); var_1996_object = Obj(); var_1997_object = Obj(); var_1998_object = Obj(); // 0x23a6 PushV
	var_1999_object = GlobalVars[8]; // 0x23a7 PushGE
	get(var_1995_object, var_1988_int); // 0x23a8 ObjFunc
	var_2000_object = GlobalVars[9]; // 0x23aa PushGE
	get(var_1996_object, var_1988_int); // 0x23ab ObjFunc
	var_2001_object = GlobalVars[10]; // 0x23ad PushGE
	get(var_1997_object, var_1988_int); // 0x23ae ObjFunc
	var_2002_object = GlobalVars[13]; // 0x23b0 PushGE
	get(var_1998_object, var_1988_int); // 0x23b1 ObjFunc
	var_2003_int = 0; // 0x23b3 PushI
	var_2004_bool = var_1988_int == var_2003_int; // 0x23b4 Eq
	if(var_2004_bool == 0) goto Label_9152; // 0x23b5 JumpB
	var_2005_int = 0; var_2006_int = 0; var_2007_object = Obj(); var_2008_object = Obj(); var_2009_object = Obj(); var_2010_object = Obj(); // 0x23b6 PushV
	var_2005_int = var_1989_int; // 0x23b7 Mov
	var_2006_int = var_1990_int; // 0x23b8 Mov
	var_2007_object = var_1995_object; // 0x23b9 Mov
	var_2008_object = var_1996_object; // 0x23ba Mov
	var_2009_object = var_1997_object; // 0x23bb Mov
	var_2010_object = var_1998_object; // 0x23bc Mov
	func_4445(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object); // 0x23bd NEW_2
	goto Label_9346; // 0x23bf Jump
	
Label_9346:
	return 8; // 0x2482 Return
	
Label_9152:
	var_2273_int = 1; // 0x23c0 PushI
	var_2274_bool = var_1988_int == var_2273_int; // 0x23c1 Eq
	if(var_2274_bool == 0) goto Label_9165; // 0x23c2 JumpB
	var_2275_int = 0; var_2276_int = 0; var_2277_object = Obj(); var_2278_object = Obj(); var_2279_object = Obj(); var_2280_object = Obj(); // 0x23c3 PushV
	var_2275_int = var_1989_int; // 0x23c4 Mov
	var_2276_int = var_1990_int; // 0x23c5 Mov
	var_2277_object = var_1995_object; // 0x23c6 Mov
	var_2278_object = var_1996_object; // 0x23c7 Mov
	var_2279_object = var_1997_object; // 0x23c8 Mov
	var_2280_object = var_1998_object; // 0x23c9 Mov
	func_4642(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object); // 0x23ca NEW_2
	goto Label_9346; // 0x23cc Jump
	
Label_9165:
	var_2405_int = 2; // 0x23cd PushI
	var_2406_bool = var_1988_int == var_2405_int; // 0x23ce Eq
	if(var_2406_bool == 0) goto Label_9178; // 0x23cf JumpB
	var_2407_int = 0; var_2408_int = 0; var_2409_object = Obj(); var_2410_object = Obj(); var_2411_object = Obj(); var_2412_object = Obj(); // 0x23d0 PushV
	var_2407_int = var_1989_int; // 0x23d1 Mov
	var_2408_int = var_1990_int; // 0x23d2 Mov
	var_2409_object = var_1995_object; // 0x23d3 Mov
	var_2410_object = var_1996_object; // 0x23d4 Mov
	var_2411_object = var_1997_object; // 0x23d5 Mov
	var_2412_object = var_1998_object; // 0x23d6 Mov
	func_4848(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object); // 0x23d7 NEW_2
	goto Label_9346; // 0x23d9 Jump
	
Label_9178:
	var_2551_int = 3; // 0x23da PushI
	var_2552_bool = var_1988_int == var_2551_int; // 0x23db Eq
	if(var_2552_bool == 0) goto Label_9191; // 0x23dc JumpB
	var_2553_int = 0; var_2554_int = 0; var_2555_object = Obj(); var_2556_object = Obj(); var_2557_object = Obj(); var_2558_object = Obj(); // 0x23dd PushV
	var_2553_int = var_1989_int; // 0x23de Mov
	var_2554_int = var_1990_int; // 0x23df Mov
	var_2555_object = var_1995_object; // 0x23e0 Mov
	var_2556_object = var_1996_object; // 0x23e1 Mov
	var_2557_object = var_1997_object; // 0x23e2 Mov
	var_2558_object = var_1998_object; // 0x23e3 Mov
	func_5078(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object); // 0x23e4 NEW_2
	goto Label_9346; // 0x23e6 Jump
	
Label_9191:
	var_2584_int = 4; // 0x23e7 PushI
	var_2585_bool = var_1988_int == var_2584_int; // 0x23e8 Eq
	if(var_2585_bool == 0) goto Label_9204; // 0x23e9 JumpB
	var_2586_int = 0; var_2587_int = 0; var_2588_object = Obj(); var_2589_object = Obj(); var_2590_object = Obj(); var_2591_object = Obj(); // 0x23ea PushV
	var_2586_int = var_1989_int; // 0x23eb Mov
	var_2587_int = var_1990_int; // 0x23ec Mov
	var_2588_object = var_1995_object; // 0x23ed Mov
	var_2589_object = var_1996_object; // 0x23ee Mov
	var_2590_object = var_1997_object; // 0x23ef Mov
	var_2591_object = var_1998_object; // 0x23f0 Mov
	func_5296(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object); // 0x23f1 NEW_2
	goto Label_9346; // 0x23f3 Jump
	
Label_9204:
	var_2617_int = 5; // 0x23f4 PushI
	var_2618_bool = var_1988_int == var_2617_int; // 0x23f5 Eq
	if(var_2618_bool == 0) goto Label_9217; // 0x23f6 JumpB
	var_2619_int = 0; var_2620_int = 0; var_2621_object = Obj(); var_2622_object = Obj(); var_2623_object = Obj(); var_2624_object = Obj(); // 0x23f7 PushV
	var_2619_int = var_1989_int; // 0x23f8 Mov
	var_2620_int = var_1990_int; // 0x23f9 Mov
	var_2621_object = var_1995_object; // 0x23fa Mov
	var_2622_object = var_1996_object; // 0x23fb Mov
	var_2623_object = var_1997_object; // 0x23fc Mov
	var_2624_object = var_1998_object; // 0x23fd Mov
	func_5538(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object); // 0x23fe NEW_2
	goto Label_9346; // 0x2400 Jump
	
Label_9217:
	var_2650_int = 6; // 0x2401 PushI
	var_2651_bool = var_1988_int == var_2650_int; // 0x2402 Eq
	if(var_2651_bool == 0) goto Label_9230; // 0x2403 JumpB
	var_2652_int = 0; var_2653_int = 0; var_2654_object = Obj(); var_2655_object = Obj(); var_2656_object = Obj(); var_2657_object = Obj(); // 0x2404 PushV
	var_2652_int = var_1989_int; // 0x2405 Mov
	var_2653_int = var_1990_int; // 0x2406 Mov
	var_2654_object = var_1995_object; // 0x2407 Mov
	var_2655_object = var_1996_object; // 0x2408 Mov
	var_2656_object = var_1997_object; // 0x2409 Mov
	var_2657_object = var_1998_object; // 0x240a Mov
	func_5651(); // 0x240b NEW_2
	goto Label_9346; // 0x240d Jump
	
Label_9230:
	var_2660_int = 7; // 0x240e PushI
	var_2661_bool = var_1988_int == var_2660_int; // 0x240f Eq
	if(var_2661_bool == 0) goto Label_9243; // 0x2410 JumpB
	var_2662_int = 0; var_2663_int = 0; var_2664_object = Obj(); var_2665_object = Obj(); var_2666_object = Obj(); var_2667_object = Obj(); // 0x2411 PushV
	var_2662_int = var_1989_int; // 0x2412 Mov
	var_2663_int = var_1990_int; // 0x2413 Mov
	var_2664_object = var_1995_object; // 0x2414 Mov
	var_2665_object = var_1996_object; // 0x2415 Mov
	var_2666_object = var_1997_object; // 0x2416 Mov
	var_2667_object = var_1998_object; // 0x2417 Mov
	func_5761(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object); // 0x2418 NEW_2
	goto Label_9346; // 0x241a Jump
	
Label_9243:
	var_2799_int = 8; // 0x241b PushI
	var_2800_bool = var_1988_int == var_2799_int; // 0x241c Eq
	if(var_2800_bool == 0) goto Label_9256; // 0x241d JumpB
	var_2801_int = 0; var_2802_int = 0; var_2803_object = Obj(); var_2804_object = Obj(); var_2805_object = Obj(); var_2806_object = Obj(); // 0x241e PushV
	var_2801_int = var_1989_int; // 0x241f Mov
	var_2802_int = var_1990_int; // 0x2420 Mov
	var_2803_object = var_1995_object; // 0x2421 Mov
	var_2804_object = var_1996_object; // 0x2422 Mov
	var_2805_object = var_1997_object; // 0x2423 Mov
	var_2806_object = var_1998_object; // 0x2424 Mov
	func_5961(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object); // 0x2425 NEW_2
	goto Label_9346; // 0x2427 Jump
	
Label_9256:
	var_2832_int = 9; // 0x2428 PushI
	var_2833_bool = var_1988_int == var_2832_int; // 0x2429 Eq
	if(var_2833_bool == 0) goto Label_9269; // 0x242a JumpB
	var_2834_int = 0; var_2835_int = 0; var_2836_object = Obj(); var_2837_object = Obj(); var_2838_object = Obj(); var_2839_object = Obj(); // 0x242b PushV
	var_2834_int = var_1989_int; // 0x242c Mov
	var_2835_int = var_1990_int; // 0x242d Mov
	var_2836_object = var_1995_object; // 0x242e Mov
	var_2837_object = var_1996_object; // 0x242f Mov
	var_2838_object = var_1997_object; // 0x2430 Mov
	var_2839_object = var_1998_object; // 0x2431 Mov
	func_6164(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object); // 0x2432 NEW_2
	goto Label_9346; // 0x2434 Jump
	
Label_9269:
	var_2865_int = 10; // 0x2435 PushI
	var_2866_bool = var_1988_int == var_2865_int; // 0x2436 Eq
	if(var_2866_bool == 0) goto Label_9282; // 0x2437 JumpB
	var_2867_int = 0; var_2868_int = 0; var_2869_object = Obj(); var_2870_object = Obj(); var_2871_object = Obj(); var_2872_object = Obj(); // 0x2438 PushV
	var_2867_int = var_1989_int; // 0x2439 Mov
	var_2868_int = var_1990_int; // 0x243a Mov
	var_2869_object = var_1995_object; // 0x243b Mov
	var_2870_object = var_1996_object; // 0x243c Mov
	var_2871_object = var_1997_object; // 0x243d Mov
	var_2872_object = var_1998_object; // 0x243e Mov
	func_6373(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object); // 0x243f NEW_2
	goto Label_9346; // 0x2441 Jump
	
Label_9282:
	var_2898_int = 11; // 0x2442 PushI
	var_2899_bool = var_1988_int == var_2898_int; // 0x2443 Eq
	if(var_2899_bool == 0) goto Label_9295; // 0x2444 JumpB
	var_2900_int = 0; var_2901_int = 0; var_2902_object = Obj(); var_2903_object = Obj(); var_2904_object = Obj(); var_2905_object = Obj(); // 0x2445 PushV
	var_2900_int = var_1989_int; // 0x2446 Mov
	var_2901_int = var_1990_int; // 0x2447 Mov
	var_2902_object = var_1995_object; // 0x2448 Mov
	var_2903_object = var_1996_object; // 0x2449 Mov
	var_2904_object = var_1997_object; // 0x244a Mov
	var_2905_object = var_1998_object; // 0x244b Mov
	func_6585(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object); // 0x244c NEW_2
	goto Label_9346; // 0x244e Jump
	
Label_9295:
	var_2931_int = 12; // 0x244f PushI
	var_2932_bool = var_1988_int == var_2931_int; // 0x2450 Eq
	if(var_2932_bool == 0) goto Label_9308; // 0x2451 JumpB
	var_2933_int = 0; var_2934_int = 0; var_2935_object = Obj(); var_2936_object = Obj(); var_2937_object = Obj(); var_2938_object = Obj(); // 0x2452 PushV
	var_2933_int = var_1989_int; // 0x2453 Mov
	var_2934_int = var_1990_int; // 0x2454 Mov
	var_2935_object = var_1995_object; // 0x2455 Mov
	var_2936_object = var_1996_object; // 0x2456 Mov
	var_2937_object = var_1997_object; // 0x2457 Mov
	var_2938_object = var_1998_object; // 0x2458 Mov
	func_6782(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object); // 0x2459 NEW_2
	goto Label_9346; // 0x245b Jump
	
Label_9308:
	var_2964_int = 13; // 0x245c PushI
	var_2965_bool = var_1988_int == var_2964_int; // 0x245d Eq
	if(var_2965_bool == 0) goto Label_9321; // 0x245e JumpB
	var_2966_int = 0; var_2967_int = 0; var_2968_object = Obj(); var_2969_object = Obj(); var_2970_object = Obj(); var_2971_object = Obj(); // 0x245f PushV
	var_2966_int = var_1989_int; // 0x2460 Mov
	var_2967_int = var_1990_int; // 0x2461 Mov
	var_2968_object = var_1995_object; // 0x2462 Mov
	var_2969_object = var_1996_object; // 0x2463 Mov
	var_2970_object = var_1997_object; // 0x2464 Mov
	var_2971_object = var_1998_object; // 0x2465 Mov
	func_6985(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object); // 0x2466 NEW_2
	goto Label_9346; // 0x2468 Jump
	
Label_9321:
	var_2997_int = 14; // 0x2469 PushI
	var_2998_bool = var_1988_int == var_2997_int; // 0x246a Eq
	if(var_2998_bool == 0) goto Label_9334; // 0x246b JumpB
	var_2999_int = 0; var_3000_int = 0; var_3001_object = Obj(); var_3002_object = Obj(); var_3003_object = Obj(); var_3004_object = Obj(); // 0x246c PushV
	var_2999_int = var_1989_int; // 0x246d Mov
	var_3000_int = var_1990_int; // 0x246e Mov
	var_3001_object = var_1995_object; // 0x246f Mov
	var_3002_object = var_1996_object; // 0x2470 Mov
	var_3003_object = var_1997_object; // 0x2471 Mov
	var_3004_object = var_1998_object; // 0x2472 Mov
	func_7185(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object); // 0x2473 NEW_2
	goto Label_9346; // 0x2475 Jump
	
Label_9334:
	var_3136_int = 15; // 0x2476 PushI
	var_3137_bool = var_1988_int == var_3136_int; // 0x2477 Eq
	if(var_3137_bool == 0) goto Label_9346; // 0x2478 JumpB
	var_3138_int = 0; var_3139_int = 0; var_3140_object = Obj(); var_3141_object = Obj(); var_3142_object = Obj(); var_3143_object = Obj(); // 0x2479 PushV
	var_3138_int = var_1989_int; // 0x247a Mov
	var_3139_int = var_1990_int; // 0x247b Mov
	var_3140_object = var_1995_object; // 0x247c Mov
	var_3141_object = var_1996_object; // 0x247d Mov
	var_3142_object = var_1997_object; // 0x247e Mov
	var_3143_object = var_1998_object; // 0x247f Mov
	func_7367(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object); // 0x2480 NEW_2
}


func_10152(var_6014_int, var_6015_float)
{
	var_6016_int = 0; var_6017_int = 0; var_6018_int = 0; var_6019_float = 0; // 0x27a9 PushV
	var_6017_int = 536369; // 0x27aa MovI
	var_6018_int = 536368; // 0x27ab MovI
	var_6019_float = var_6015_float; // 0x27ac Mov
	func_12239(var_6016_int, var_6017_int, var_6018_int, var_6019_float); // 0x27ad NEW_2
	var_6014_int = var_6016_int; // 0x27ae Mov
	return 0; // 0x27b0 Return
}


func_938(var_686_int, var_687_bool, var_688_int)
{
	var_689_string = ""; var_690_object = Obj(); var_691_object = Obj(); var_692_int = 0; var_693_string = ""; var_694_object = Obj(); var_695_string = ""; var_696_object = Obj(); var_697_object = Obj(); var_698_int = 0; var_699_string = ""; var_700_object = Obj(); // 0x3aa PushV
	var_701_string = "dr_mark"; // 0x3ab PushS
	var_702_int = 1; // 0x3ac PushI
	var_703_int = var_686_int + var_702_int; // 0x3ad Add
	var_695_string = var_701_string + var_703_int; // 0x3ae Add2
	var_704_string = "br_"; // 0x3af PushS
	var_705_int = 1; // 0x3b0 PushI
	var_706_int = var_686_int + var_705_int; // 0x3b1 Add
	var_707_int = var_704_string + var_706_int; // 0x3b2 Add
	FindActor(var_696_object, var_707_int); // 0x3b3 Func
	var_708_bool = var_687_bool; // 0x3b5 Push
	if(var_708_bool == 0) goto Label_964; // 0x3b6 JumpB
	var_709_bool = var_696_object == 0; // 0x3b7 Not
	if(var_709_bool == 0) goto Label_963; // 0x3b8 JumpB
	GetMainOutdoorScene(var_697_object); // 0x3b9 Func
	var_710_string = "br_"; // 0x3bb PushS
	var_711_int = 1; // 0x3bc PushI
	var_712_int = var_686_int + var_711_int; // 0x3bd Add
	var_713_int = var_710_string + var_712_int; // 0x3be Add
	var_714_cvector = CVector(0.0, 0.0, 0.0); // 0x3bf PushVec
	AddActor(var_696_object, var_713_int, var_697_object, var_714_cvector); // 0x3c0 Func
	var_697_object = 0; // 0x3c2 SetNull
	
Label_963:
	goto Label_968; // 0x3c3 Jump
	
Label_968:
	var_698_int = 1; // 0x3c8 MovI
	
Label_969:
	var_715_bool = var_698_int <= var_688_int; // 0x3c9 LE
	if(var_715_bool == 0) goto Label_987; // 0x3ca JumpB
	var_716_string = "_"; // 0x3cb PushS
	var_717_int = var_695_string + var_716_string; // 0x3cc Add
	var_699_string = var_717_int + var_698_int; // 0x3cd Add2
	FindActor(var_700_object, var_699_string); // 0x3ce Func
	var_718_object = var_700_object; // 0x3d0 Push
	if(var_718_object == 0) goto Label_983; // 0x3d1 JumpB
	var_719_bool = 0; var_720_string = ""; var_721_string = ""; // 0x3d2 PushV
	var_720_string = var_699_string; // 0x3d3 Mov
	var_721_string = "cleanup"; // 0x3d4 MovS
	func_245(var_719_bool, var_720_string, var_721_string); // 0x3d5 NEW_2
	
Label_983:
	var_700_object = 0; // 0x3d7 SetNull
	var_722_int = 1; // 0x3d8 PushI
	var_698_int = var_698_int + var_722_int; // 0x3d9 Add2
	goto Label_969; // 0x3da Jump
	
Label_987:
	return 12; // 0x3db Return
	
Label_964:
	var_723_object = var_696_object; // 0x3c4 Push
	if(var_723_object == 0) goto Label_968; // 0x3c5 JumpB
	RemoveActor(var_696_object); // 0x3c6 Func
}


func_14255(var_4517_int, var_4518_int)
{
	var_4520_object = Obj(); var_4521_object = Obj(); var_4522_object = Obj(); var_4523_object = Obj(); // 0x37af PushV
	var_4524_string = "Updating game "; // 0x37b0 PushS
	var_4525_int = var_4524_string + var_4517_int; // 0x37b1 Add
	var_4526_string = " "; // 0x37b2 PushS
	var_4527_int = var_4525_int + var_4526_string; // 0x37b3 Add
	var_4528_int = var_4527_int + var_4518_int; // 0x37b4 Add
	Trace(var_4528_int); // 0x37b5 Func
	var_4529_bool = 0; // 0x37b7 PushV
	var_4529_bool = 0; // 0x37b8 MovB
	var_4530_int = 5; // 0x37b9 PushI
	var_4531_bool = var_4517_int == var_4530_int; // 0x37ba Eq
	if(var_4531_bool == 0) goto Label_14272; // 0x37bb JumpB
	var_4532_int = 0; // 0x37bc PushI
	var_4533_bool = var_4518_int == var_4532_int; // 0x37bd Eq
	if(var_4533_bool == 0) goto Label_14272; // 0x37be JumpB
	var_4529_bool = 1; // 0x37bf MovB
	
Label_14272:
	if(var_4529_bool == 0) goto Label_14289; // 0x37c0 JumpB
	var_4534_string = "house7_03@door1"; // 0x37c1 PushS
	FindActor(var_4522_object, var_4534_string); // 0x37c2 Func
	var_4535_string = "lp"; // 0x37c4 PushS
	var_4536_bool = 1; // 0x37c5 PushB
	SetProperty(var_4535_string, var_4536_bool); // 0x37c6 ObjFunc
	var_4537_string = "house7_03@door2"; // 0x37c8 PushS
	FindActor(var_4522_object, var_4537_string); // 0x37c9 Func
	var_4538_string = "lp"; // 0x37cb PushS
	var_4539_bool = 1; // 0x37cc PushB
	SetProperty(var_4538_string, var_4539_bool); // 0x37cd ObjFunc
	var_4522_object = 0; // 0x37cf SetNull
	goto Label_14306; // 0x37d0 Jump
	
Label_14306:
	return 4; // 0x37e2 Return
	
Label_14289:
	var_4540_bool = 0; // 0x37d1 PushV
	var_4540_bool = 0; // 0x37d2 MovB
	var_4541_int = 7; // 0x37d3 PushI
	var_4542_bool = var_4517_int == var_4541_int; // 0x37d4 Eq
	if(var_4542_bool == 0) goto Label_14298; // 0x37d5 JumpB
	var_4543_int = 0; // 0x37d6 PushI
	var_4544_bool = var_4518_int == var_4543_int; // 0x37d7 Eq
	if(var_4544_bool == 0) goto Label_14298; // 0x37d8 JumpB
	var_4540_bool = 1; // 0x37d9 MovB
	
Label_14298:
	if(var_4540_bool == 0) goto Label_14306; // 0x37da JumpB
	var_4545_string = "sobor"; // 0x37db PushS
	GetSceneByName(var_4523_object, var_4545_string); // 0x37dc Func
	var_4546_string = "aglaja"; // 0x37de PushS
	Trigger(var_4523_object, var_4546_string); // 0x37df Func
	var_4523_object = 0; // 0x37e1 SetNull
}


func_7089()
{
	var_298_string = "lc_house7_02"; // 0x1bb2 PushS
	add(var_298_string); // 0x1bb3 ObjFunc
	var_299_string = "lc_house7_03"; // 0x1bb5 PushS
	add(var_299_string); // 0x1bb6 ObjFunc
	var_300_string = "lc_house7_04"; // 0x1bb8 PushS
	add(var_300_string); // 0x1bb9 ObjFunc
	var_301_string = "lc_house7_05"; // 0x1bbb PushS
	add(var_301_string); // 0x1bbc ObjFunc
	var_302_string = "lc_house7_06"; // 0x1bbe PushS
	add(var_302_string); // 0x1bbf ObjFunc
	var_303_string = "lc_house7_07"; // 0x1bc1 PushS
	add(var_303_string); // 0x1bc2 ObjFunc
	var_304_string = "lc_House6_02"; // 0x1bc4 PushS
	add(var_304_string); // 0x1bc5 ObjFunc
	var_305_string = "lc_house7_01"; // 0x1bc7 PushS
	add(var_305_string); // 0x1bc8 ObjFunc
	var_306_string = "lc_house_2_02"; // 0x1bca PushS
	add(var_306_string); // 0x1bcb ObjFunc
	var_307_string = "lc_House6_01"; // 0x1bcd PushS
	add(var_307_string); // 0x1bce ObjFunc
	var_308_string = "lc_house3_03_i2"; // 0x1bd0 PushS
	add(var_308_string); // 0x1bd1 ObjFunc
	var_309_string = "lc_house3_03"; // 0x1bd3 PushS
	add(var_309_string); // 0x1bd4 ObjFunc
	var_310_string = "lc_House6_03"; // 0x1bd6 PushS
	add(var_310_string); // 0x1bd7 ObjFunc
	var_311_string = "lc_House6_04"; // 0x1bd9 PushS
	add(var_311_string); // 0x1bda ObjFunc
	return 0; // 0x1bdc Return
}


func_6065()
{
	var_210_string = "r3_house_2_02"; // 0x17b2 PushS
	add(var_210_string); // 0x17b3 ObjFunc
	var_211_string = "r3_house3_02_i2"; // 0x17b5 PushS
	add(var_211_string); // 0x17b6 ObjFunc
	var_212_string = "r3_house3_02"; // 0x17b8 PushS
	add(var_212_string); // 0x17b9 ObjFunc
	var_213_string = "r3_house4_05_i2"; // 0x17bb PushS
	add(var_213_string); // 0x17bc ObjFunc
	var_214_string = "r3_house4_05"; // 0x17be PushS
	add(var_214_string); // 0x17bf ObjFunc
	var_215_string = "r3_house4_03_i2"; // 0x17c1 PushS
	add(var_215_string); // 0x17c2 ObjFunc
	var_216_string = "r3_house4_04_i2"; // 0x17c4 PushS
	add(var_216_string); // 0x17c5 ObjFunc
	var_217_string = "r3_house4_04"; // 0x17c7 PushS
	add(var_217_string); // 0x17c8 ObjFunc
	var_218_string = "r3_house4_01_i2"; // 0x17ca PushS
	add(var_218_string); // 0x17cb ObjFunc
	var_219_string = "r3_house4_01"; // 0x17cd PushS
	add(var_219_string); // 0x17ce ObjFunc
	var_220_string = "r3_house_2_01"; // 0x17d0 PushS
	add(var_220_string); // 0x17d1 ObjFunc
	var_221_string = "r3_house4_02_i2"; // 0x17d3 PushS
	add(var_221_string); // 0x17d4 ObjFunc
	var_222_string = "r3_house4_02"; // 0x17d6 PushS
	add(var_222_string); // 0x17d7 ObjFunc
	var_223_string = "r3_house3_01_i2"; // 0x17d9 PushS
	add(var_223_string); // 0x17da ObjFunc
	var_224_string = "r3_house3_01"; // 0x17dc PushS
	add(var_224_string); // 0x17dd ObjFunc
	return 0; // 0x17df Return
}


func_10161(var_5775_int, var_5776_float)
{
	var_5777_int = 0; var_5778_int = 0; var_5779_int = 0; var_5780_float = 0; // 0x27b2 PushV
	var_5778_int = 522210; // 0x27b3 MovI
	var_5779_int = 522209; // 0x27b4 MovI
	var_5780_float = var_5776_float; // 0x27b5 Mov
	func_12239(var_5777_int, var_5778_int, var_5779_int, var_5780_float); // 0x27b6 NEW_2
	var_5775_int = var_5777_int; // 0x27b7 Mov
	return 0; // 0x27b9 Return
}


func_10170(var_6042_int, var_6043_float)
{
	var_6044_int = 0; var_6045_int = 0; var_6046_int = 0; var_6047_float = 0; // 0x27bb PushV
	var_6045_int = 536371; // 0x27bc MovI
	var_6046_int = 536370; // 0x27bd MovI
	var_6047_float = var_6043_float; // 0x27be Mov
	func_12239(var_6044_int, var_6045_int, var_6046_int, var_6047_float); // 0x27bf NEW_2
	var_6042_int = var_6044_int; // 0x27c0 Mov
	return 0; // 0x27c2 Return
}


func_12222(var_4604_bool, var_4605_int)
{
	var_4606_object = Obj(); var_4607_object = Obj(); var_4608_object = Obj(); var_4609_object = Obj(); // 0x2fbe PushV
	var_4610_object = Obj(); // 0x2fbf PushV
	func_12181(var_4610_object); // 0x2fc0 NEW_2
	var_4608_object = var_4610_object; // 0x2fc1 Mov
	Find(var_4605_int, var_4609_object); // 0x2fc3 ObjFunc
	var_4615_bool = var_4609_object == 0; // 0x2fc5 Not
	if(var_4615_bool == 0) goto Label_12233; // 0x2fc6 JumpB
	var_4604_bool = 0; // 0x2fc7 MovB
	return 4; // 0x2fc8 Return
	
Label_12233:
	Remove(); // 0x2fc9 ObjFunc
	var_4604_bool = 1; // 0x2fcb MovB
	return 4; // 0x2fcc Return
}


func_10179(var_5703_int, var_5704_float)
{
	var_5705_int = 0; var_5706_int = 0; var_5707_int = 0; var_5708_float = 0; // 0x27c4 PushV
	var_5706_int = 533585; // 0x27c5 MovI
	var_5707_int = 533584; // 0x27c6 MovI
	var_5708_float = var_5704_float; // 0x27c7 Mov
	func_12239(var_5705_int, var_5706_int, var_5707_int, var_5708_float); // 0x27c8 NEW_2
	var_5703_int = var_5705_int; // 0x27c9 Mov
	return 0; // 0x27cb Return
}


func_4041(var_3248_int, var_3249_int, var_3250_int)
{
	var_3251_int = 0; var_3252_int = 0; var_3253_int = 0; var_3254_int = 0; var_3255_int = 0; var_3256_int = 0; var_3257_int = 0; var_3258_int = 0; // 0xfc9 PushV
	var_3259_bool = 0; // 0xfca PushV
	var_3259_bool = 0; // 0xfcb MovB
	var_3260_int = 8; // 0xfcc PushI
	var_3261_bool = var_3250_int > var_3260_int; // 0xfcd GT
	if(var_3261_bool == 0) goto Label_4051; // 0xfce JumpB
	var_3262_int = 21; // 0xfcf PushI
	var_3263_bool = var_3250_int < var_3262_int; // 0xfd0 LT
	if(var_3263_bool == 0) goto Label_4051; // 0xfd1 JumpB
	var_3259_bool = 1; // 0xfd2 MovB
	
Label_4051:
	if(var_3259_bool == 0) goto Label_4128; // 0xfd3 JumpB
	var_3264_int = 0; var_3265_string = ""; var_3266_string = ""; var_3267_int = 0; // 0xfd4 PushV
	var_3264_int = var_3248_int; // 0xfd5 Mov
	var_3265_string = "pers_rat"; // 0xfd6 MovS
	var_3266_string = "rat.xml"; // 0xfd7 MovS
	var_3267_int = 4; // 0xfd8 MovI
	func_509(var_3264_int, var_3265_string, var_3266_string, var_3267_int); // 0xfd9 NEW_2
	var_3268_int = 0; var_3269_string = ""; var_3270_string = ""; var_3271_int = 0; // 0xfdb PushV
	var_3268_int = var_3248_int; // 0xfdc Mov
	var_3269_string = "pers_alkash"; // 0xfdd MovS
	var_3270_string = "alkash.xml"; // 0xfde MovS
	var_3271_int = 2; // 0xfdf MovI
	func_509(var_3268_int, var_3269_string, var_3270_string, var_3271_int); // 0xfe0 NEW_2
	var_3272_int = 0; var_3273_string = ""; var_3274_string = ""; var_3275_int = 0; // 0xfe2 PushV
	var_3272_int = var_3248_int; // 0xfe3 Mov
	var_3273_string = "pers_dohodyaga"; // 0xfe4 MovS
	var_3274_string = "dohodyaga.xml"; // 0xfe5 MovS
	var_3275_int = 1; // 0xfe6 MovI
	func_509(var_3272_int, var_3273_string, var_3274_string, var_3275_int); // 0xfe7 NEW_2
	var_3276_int = 2; // 0xfe9 PushI
	var_3277_float = 0; var_3278_int = 0; // 0xfea PushV
	var_3278_int = var_3249_int; // 0xfeb Mov
	func_1171(var_3277_float, var_3278_int); // 0xfec NEW_2
	var_3255_int = var_3276_int * var_3277_float; // 0xfee Mult2
	var_3323_int = var_3255_int; // 0xfef Push
	if(var_3323_int == 0) goto Label_4088; // 0xff0 JumpB
	var_3324_int = 0; var_3325_string = ""; var_3326_string = ""; var_3327_int = 0; // 0xff1 PushV
	var_3324_int = var_3248_int; // 0xff2 Mov
	var_3325_string = "pers_grabitel"; // 0xff3 MovS
	var_3326_string = "grabitel.xml"; // 0xff4 MovS
	var_3327_int = var_3255_int; // 0xff5 Mov
	func_509(var_3324_int, var_3325_string, var_3326_string, var_3327_int); // 0xff6 NEW_2
	
Label_4088:
	var_3328_int = 1; // 0xff8 PushI
	var_3329_int = var_3249_int + var_3328_int; // 0xff9 Add
	var_3330_int = 2; // 0xffa PushI
	var_3331_bool = var_3329_int >= var_3330_int; // 0xffb GE
	if(var_3331_bool == 0) goto Label_4112; // 0xffc JumpB
	var_3332_int = 0; var_3333_string = ""; var_3334_string = ""; var_3335_int = 0; // 0xffd PushV
	var_3332_int = var_3248_int; // 0xffe Mov
	var_3333_string = "pers_patrool"; // 0xfff MovS
	var_3334_string = "patrol.xml"; // 0x1000 MovS
	var_3335_int = 2; // 0x1001 MovI
	func_509(var_3332_int, var_3333_string, var_3334_string, var_3335_int); // 0x1002 NEW_2
	var_3336_bool = 0; var_3337_int = 0; // 0x1004 PushV
	var_3337_int = var_3249_int; // 0x1005 Mov
	func_1378(var_3336_bool, var_3337_int); // 0x1006 NEW_2
	if(var_3336_bool == 0) goto Label_4112; // 0x1008 JumpB
	var_3338_int = 0; var_3339_string = ""; var_3340_string = ""; var_3341_int = 0; // 0x1009 PushV
	var_3338_int = var_3248_int; // 0x100a Mov
	var_3339_string = "pers_soldat_hand"; // 0x100b MovS
	var_3340_string = "soldier_patrol.xml"; // 0x100c MovS
	var_3341_int = 1; // 0x100d MovI
	func_509(var_3338_int, var_3339_string, var_3340_string, var_3341_int); // 0x100e NEW_2
	
Label_4112:
	var_3342_int = 1; // 0x1010 PushI
	var_3343_float = 0; var_3344_int = 0; // 0x1011 PushV
	var_3344_int = var_3249_int; // 0x1012 Mov
	func_1261(var_3343_float, var_3344_int); // 0x1013 NEW_2
	var_3256_int = var_3342_int * var_3343_float; // 0x1015 Mult2
	var_3345_int = var_3256_int; // 0x1016 Push
	if(var_3345_int == 0) goto Label_4127; // 0x1017 JumpB
	var_3346_int = 0; var_3347_string = ""; var_3348_string = ""; var_3349_int = 0; // 0x1018 PushV
	var_3346_int = var_3248_int; // 0x1019 Mov
	var_3347_string = "pers_bomber"; // 0x101a MovS
	var_3348_string = "bomber.xml"; // 0x101b MovS
	var_3349_int = var_3256_int; // 0x101c Mov
	func_509(var_3346_int, var_3347_string, var_3348_string, var_3349_int); // 0x101d NEW_2
	
Label_4127:
	goto Label_4203; // 0x101f Jump
	
Label_4203:
	var_3350_bool = 0; var_3351_int = 0; // 0x106b PushV
	var_3351_int = var_3249_int; // 0x106c Mov
	func_1378(var_3350_bool, var_3351_int); // 0x106d NEW_2
	if(var_3350_bool == 0) goto Label_4215; // 0x106f JumpB
	var_3352_int = 0; var_3353_string = ""; var_3354_string = ""; var_3355_int = 0; // 0x1070 PushV
	var_3352_int = var_3248_int; // 0x1071 Mov
	var_3353_string = "pers_sanitar"; // 0x1072 MovS
	var_3354_string = "sanitar.xml"; // 0x1073 MovS
	var_3355_int = 1; // 0x1074 MovI
	func_509(var_3352_int, var_3353_string, var_3354_string, var_3355_int); // 0x1075 NEW_2
	
Label_4215:
	return 8; // 0x1077 Return
	
Label_4128:
	var_3356_int = 0; var_3357_string = ""; var_3358_string = ""; var_3359_int = 0; // 0x1020 PushV
	var_3356_int = var_3248_int; // 0x1021 Mov
	var_3357_string = "pers_rat"; // 0x1022 MovS
	var_3358_string = "rat.xml"; // 0x1023 MovS
	var_3359_int = 7; // 0x1024 MovI
	func_509(var_3356_int, var_3357_string, var_3358_string, var_3359_int); // 0x1025 NEW_2
	var_3360_int = 0; var_3361_string = ""; var_3362_string = ""; var_3363_int = 0; // 0x1027 PushV
	var_3360_int = var_3248_int; // 0x1028 Mov
	var_3361_string = "pers_alkash"; // 0x1029 MovS
	var_3362_string = "alkash.xml"; // 0x102a MovS
	var_3363_int = 1; // 0x102b MovI
	func_509(var_3360_int, var_3361_string, var_3362_string, var_3363_int); // 0x102c NEW_2
	var_3364_int = 0; var_3365_string = ""; var_3366_string = ""; var_3367_int = 0; // 0x102e PushV
	var_3364_int = var_3248_int; // 0x102f Mov
	var_3365_string = "pers_dohodyaga"; // 0x1030 MovS
	var_3366_string = "dohodyaga.xml"; // 0x1031 MovS
	var_3367_int = 1; // 0x1032 MovI
	func_509(var_3364_int, var_3365_string, var_3366_string, var_3367_int); // 0x1033 NEW_2
	var_3368_int = 2; // 0x1035 PushI
	var_3369_float = 0; var_3370_int = 0; // 0x1036 PushV
	var_3370_int = var_3249_int; // 0x1037 Mov
	func_1171(var_3369_float, var_3370_int); // 0x1038 NEW_2
	var_3257_int = var_3368_int * var_3369_float; // 0x103a Mult2
	var_3371_int = var_3257_int; // 0x103b Push
	if(var_3371_int == 0) goto Label_4164; // 0x103c JumpB
	var_3372_int = 0; var_3373_string = ""; var_3374_string = ""; var_3375_int = 0; // 0x103d PushV
	var_3372_int = var_3248_int; // 0x103e Mov
	var_3373_string = "pers_grabitel"; // 0x103f MovS
	var_3374_string = "grabitel.xml"; // 0x1040 MovS
	var_3375_int = var_3257_int; // 0x1041 Mov
	func_509(var_3372_int, var_3373_string, var_3374_string, var_3375_int); // 0x1042 NEW_2
	
Label_4164:
	var_3376_int = 1; // 0x1044 PushI
	var_3377_int = var_3249_int + var_3376_int; // 0x1045 Add
	var_3378_int = 2; // 0x1046 PushI
	var_3379_bool = var_3377_int >= var_3378_int; // 0x1047 GE
	if(var_3379_bool == 0) goto Label_4188; // 0x1048 JumpB
	var_3380_int = 0; var_3381_string = ""; var_3382_string = ""; var_3383_int = 0; // 0x1049 PushV
	var_3380_int = var_3248_int; // 0x104a Mov
	var_3381_string = "pers_patrool"; // 0x104b MovS
	var_3382_string = "patrol.xml"; // 0x104c MovS
	var_3383_int = 1; // 0x104d MovI
	func_509(var_3380_int, var_3381_string, var_3382_string, var_3383_int); // 0x104e NEW_2
	var_3384_bool = 0; var_3385_int = 0; // 0x1050 PushV
	var_3385_int = var_3249_int; // 0x1051 Mov
	func_1378(var_3384_bool, var_3385_int); // 0x1052 NEW_2
	if(var_3384_bool == 0) goto Label_4188; // 0x1054 JumpB
	var_3386_int = 0; var_3387_string = ""; var_3388_string = ""; var_3389_int = 0; // 0x1055 PushV
	var_3386_int = var_3248_int; // 0x1056 Mov
	var_3387_string = "pers_soldat_hand"; // 0x1057 MovS
	var_3388_string = "soldier_patrol.xml"; // 0x1058 MovS
	var_3389_int = 1; // 0x1059 MovI
	func_509(var_3386_int, var_3387_string, var_3388_string, var_3389_int); // 0x105a NEW_2
	
Label_4188:
	var_3390_int = 1; // 0x105c PushI
	var_3391_float = 0; var_3392_int = 0; // 0x105d PushV
	var_3392_int = var_3249_int; // 0x105e Mov
	func_1261(var_3391_float, var_3392_int); // 0x105f NEW_2
	var_3258_int = var_3390_int * var_3391_float; // 0x1061 Mult2
	var_3393_int = var_3258_int; // 0x1062 Push
	if(var_3393_int == 0) goto Label_4203; // 0x1063 JumpB
	var_3394_int = 0; var_3395_string = ""; var_3396_string = ""; var_3397_int = 0; // 0x1064 PushV
	var_3394_int = var_3248_int; // 0x1065 Mov
	var_3395_string = "pers_bomber"; // 0x1066 MovS
	var_3396_string = "bomber.xml"; // 0x1067 MovS
	var_3397_int = var_3258_int; // 0x1068 Mov
	func_509(var_3394_int, var_3395_string, var_3396_string, var_3397_int); // 0x1069 NEW_2
}


func_10188(var_5977_int, var_5978_float)
{
	var_5979_int = 0; var_5980_int = 0; var_5981_int = 0; var_5982_float = 0; // 0x27cd PushV
	var_5980_int = 536367; // 0x27ce MovI
	var_5981_int = 536366; // 0x27cf MovI
	var_5982_float = var_5978_float; // 0x27d0 Mov
	func_12239(var_5979_int, var_5980_int, var_5981_int, var_5982_float); // 0x27d1 NEW_2
	var_5977_int = var_5979_int; // 0x27d2 Mov
	return 0; // 0x27d4 Return
}


func_12239(var_4651_int, var_4652_int, var_4653_int, var_4654_float)
{
	var_4655_int = 0; var_4656_int = 0; // 0x2fcf PushV
	AddMessage(var_4652_int, var_4653_int, var_4654_float, var_4656_int); // 0x2fd0 Func
	var_4657_int = 6; // 0x2fd2 PushI
	SendWorldWndMessage(var_4657_int); // 0x2fd3 Func
	var_4651_int = var_4656_int; // 0x2fd5 Mov
	return 2; // 0x2fd6 Return
}


func_10197(var_6156_int, var_6157_float)
{
	var_6158_int = 0; var_6159_int = 0; var_6160_int = 0; var_6161_float = 0; // 0x27d6 PushV
	var_6159_int = 538734; // 0x27d7 MovI
	var_6160_int = 538733; // 0x27d8 MovI
	var_6161_float = var_6157_float; // 0x27d9 Mov
	func_12239(var_6158_int, var_6159_int, var_6160_int, var_6161_float); // 0x27da NEW_2
	var_6156_int = var_6158_int; // 0x27db Mov
	return 0; // 0x27dd Return
}


func_5078(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object)
{
	var_2559_int = 0; // 0x13d7 PushI
	var_2560_bool = var_2554_int == var_2559_int; // 0x13d8 Eq
	if(var_2560_bool == 0) goto Label_5118; // 0x13d9 JumpB
	var_2561_int = 0; var_2562_bool = 0; // 0x13da PushV
	var_2561_int = 3; // 0x13db MovI
	var_2562_bool = 1; // 0x13dc MovB
	func_802(var_2561_int, var_2562_bool); // 0x13dd NEW_2
	var_2563_int = 0; var_2564_bool = 0; var_2565_int = 0; // 0x13df PushV
	var_2563_int = 3; // 0x13e0 MovI
	var_2564_bool = 1; // 0x13e1 MovB
	var_2565_int = 1; // 0x13e2 MovI
	func_819(var_2563_int, var_2564_bool, var_2565_int); // 0x13e3 NEW_2
	var_2566_int = 0; var_2567_int = 0; var_2568_object = Obj(); var_2569_object = Obj(); var_2570_object = Obj(); // 0x13e5 PushV
	var_2566_int = 3; // 0x13e6 MovI
	var_2567_int = var_2553_int; // 0x13e7 Mov
	var_2568_object = var_2555_object; // 0x13e8 Mov
	var_2569_object = var_2556_object; // 0x13e9 Mov
	var_2570_object = var_2557_object; // 0x13ea Mov
	func_647(var_2566_int, var_2567_int, var_2568_object, var_2569_object, var_2570_object); // 0x13eb NEW_2
	var_2571_object = Obj(); var_2572_int = 0; // 0x13ed PushV
	var_2571_object = var_2558_object; // 0x13ee Mov
	var_2572_int = 1; // 0x13ef MovI
	func_311(var_2572_int); // 0x13f0 NEW_2
	var_2573_int = 0; var_2574_bool = 0; var_2575_int = 0; // 0x13f2 PushV
	var_2573_int = 3; // 0x13f3 MovI
	var_2574_bool = 1; // 0x13f4 MovB
	var_2575_int = 7; // 0x13f5 MovI
	func_876(var_2573_int, var_2574_bool, var_2575_int); // 0x13f6 NEW_2
	var_2576_int = 0; var_2577_bool = 0; var_2578_int = 0; // 0x13f8 PushV
	var_2576_int = 3; // 0x13f9 MovI
	var_2577_bool = 0; // 0x13fa MovB
	var_2578_int = 7; // 0x13fb MovI
	func_938(var_2576_int, var_2577_bool, var_2578_int); // 0x13fc NEW_2
	
Label_5118:
	var_2579_int = 0; var_2580_bool = 0; // 0x13fe PushV
	var_2579_int = 3; // 0x13ff MovI
	var_2580_bool = 0; // 0x1400 MovB
	func_785(var_2579_int, var_2580_bool); // 0x1401 NEW_2
	var_2581_int = 0; var_2582_int = 0; var_2583_int = 0; // 0x1403 PushV
	var_2581_int = 3; // 0x1404 MovI
	var_2582_int = var_2553_int; // 0x1405 Mov
	var_2583_int = var_2554_int; // 0x1406 Mov
	func_2950(var_2581_int, var_2582_int, var_2583_int); // 0x1407 NEW_2
	return 0; // 0x1409 Return
}


func_12247(var_4559_object)
{
	var_4560_object = Obj(); var_4561_object = Obj(); var_4562_object = Obj(); var_4563_object = Obj(); // 0x2fd7 PushV
	GetMainOutdoorScene(var_4562_object); // 0x2fd8 Func
	var_4564_bool = var_4562_object == 0; // 0x2fda NullEq
	if(var_4564_bool == 0) goto Label_12258; // 0x2fdb JumpB
	var_4565_string = "Can't find main outdoor scene"; // 0x2fdc PushS
	Trace(var_4565_string); // 0x2fdd Func
	var_4563_object = 0; // 0x2fdf SetNull
	var_4559_object = var_4563_object; // 0x2fe0 Mov
	return 4; // 0x2fe1 Return
	
Label_12258:
	GetMap(var_4563_object); // 0x2fe2 ObjFunc
	var_4559_object = var_4563_object; // 0x2fe4 Mov
	return 4; // 0x2fe5 Return
}


func_989(var_1274_int, var_1275_int)
{
	var_1276_bool = 0; // 0x3de PushV
	var_1276_bool = 1; // 0x3df MovB
	var_1277_bool = 0; // 0x3e0 PushV
	var_1277_bool = 1; // 0x3e1 MovB
	var_1278_int = 20; // 0x3e2 PushI
	var_1279_bool = var_1275_int >= var_1278_int; // 0x3e3 GE
	if(var_1279_bool == 0) goto Label_1001; // 0x3e4 JumpB
	var_1280_int = 2; // 0x3e5 PushI
	var_1281_bool = var_1275_int < var_1280_int; // 0x3e6 LT
	if(var_1281_bool == 0) goto Label_1001; // 0x3e7 JumpB
	var_1277_bool = 0; // 0x3e8 MovB
	
Label_1001:
	if(var_1277_bool == 0) goto Label_1013; // 0x3e9 JumpB
	var_1282_bool = 0; // 0x3ea PushV
	var_1282_bool = 0; // 0x3eb MovB
	var_1283_int = 6; // 0x3ec PushI
	var_1284_bool = var_1275_int >= var_1283_int; // 0x3ed GE
	if(var_1284_bool == 0) goto Label_1011; // 0x3ee JumpB
	var_1285_int = 10; // 0x3ef PushI
	var_1286_bool = var_1275_int < var_1285_int; // 0x3f0 LT
	if(var_1286_bool == 0) goto Label_1011; // 0x3f1 JumpB
	var_1282_bool = 1; // 0x3f2 MovB
	
Label_1011:
	if(var_1282_bool == 0) goto Label_1013; // 0x3f3 JumpB
	var_1276_bool = 0; // 0x3f4 MovB
	
Label_1013:
	if(var_1276_bool == 0) goto Label_1020; // 0x3f5 JumpB
	var_1287_int = 0; var_1288_bool = 0; // 0x3f6 PushV
	var_1287_int = var_1274_int; // 0x3f7 Mov
	var_1288_bool = 1; // 0x3f8 MovB
	func_785(var_1287_int, var_1288_bool); // 0x3f9 NEW_2
	goto Label_1025; // 0x3fb Jump
	
Label_1025:
	return 0; // 0x401 Return
	
Label_1020:
	var_1289_int = 0; var_1290_bool = 0; // 0x3fc PushV
	var_1289_int = var_1274_int; // 0x3fd Mov
	var_1290_bool = 0; // 0x3fe MovB
	func_785(var_1289_int, var_1290_bool); // 0x3ff NEW_2
}


func_7133(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object)
{
	var_1775_int = 0; // 0x1bde PushI
	var_1776_bool = var_1770_int == var_1775_int; // 0x1bdf Eq
	if(var_1776_bool == 0) goto Label_7173; // 0x1be0 JumpB
	var_1777_int = 0; var_1778_bool = 0; // 0x1be1 PushV
	var_1777_int = 14; // 0x1be2 MovI
	var_1778_bool = 0; // 0x1be3 MovB
	func_802(var_1777_int, var_1778_bool); // 0x1be4 NEW_2
	var_1779_int = 0; var_1780_bool = 0; var_1781_int = 0; // 0x1be6 PushV
	var_1779_int = 14; // 0x1be7 MovI
	var_1780_bool = 0; // 0x1be8 MovB
	var_1781_int = 1; // 0x1be9 MovI
	func_819(var_1779_int, var_1780_bool, var_1781_int); // 0x1bea NEW_2
	var_1782_int = 0; var_1783_int = 0; var_1784_object = Obj(); var_1785_object = Obj(); var_1786_object = Obj(); // 0x1bec PushV
	var_1782_int = 14; // 0x1bed MovI
	var_1783_int = var_1769_int; // 0x1bee Mov
	var_1784_object = var_1771_object; // 0x1bef Mov
	var_1785_object = var_1772_object; // 0x1bf0 Mov
	var_1786_object = var_1773_object; // 0x1bf1 Mov
	func_628(var_1783_int, var_1784_object, var_1785_object, var_1786_object); // 0x1bf2 NEW_2
	var_1787_object = Obj(); var_1788_int = 0; // 0x1bf4 PushV
	var_1787_object = var_1774_object; // 0x1bf5 Mov
	var_1788_int = 0; // 0x1bf6 MovI
	func_311(var_1788_int); // 0x1bf7 NEW_2
	var_1789_int = 0; var_1790_bool = 0; var_1791_int = 0; // 0x1bf9 PushV
	var_1789_int = 14; // 0x1bfa MovI
	var_1790_bool = 0; // 0x1bfb MovB
	var_1791_int = 5; // 0x1bfc MovI
	func_876(var_1789_int, var_1790_bool, var_1791_int); // 0x1bfd NEW_2
	var_1792_int = 0; var_1793_bool = 0; var_1794_int = 0; // 0x1bff PushV
	var_1792_int = 14; // 0x1c00 MovI
	var_1793_bool = 0; // 0x1c01 MovB
	var_1794_int = 5; // 0x1c02 MovI
	func_938(var_1792_int, var_1793_bool, var_1794_int); // 0x1c03 NEW_2
	
Label_7173:
	var_1795_int = 0; var_1796_int = 0; // 0x1c05 PushV
	var_1795_int = 14; // 0x1c06 MovI
	var_1796_int = var_1770_int; // 0x1c07 Mov
	func_1093(var_1795_int, var_1796_int); // 0x1c08 NEW_2
	var_1806_int = 0; var_1807_int = 0; var_1808_int = 0; // 0x1c0a PushV
	var_1806_int = 14; // 0x1c0b MovI
	var_1807_int = var_1769_int; // 0x1c0c Mov
	var_1808_int = var_1770_int; // 0x1c0d Mov
	func_1382(var_1806_int, var_1807_int, var_1808_int); // 0x1c0e NEW_2
	return 0; // 0x1c10 Return
}


func_10206()
{
	var_4647_string = ""; var_4648_bool = 0; // 0x27df PushV
	var_4647_string = "termitnik2@door1"; // 0x27e0 MovS
	var_4648_bool = 1; // 0x27e1 MovB
	func_183(var_4647_string, var_4648_bool); // 0x27e2 NEW_2
	return 0; // 0x27e4 Return
}


func_6112(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object)
{
	var_1610_int = 0; // 0x17e1 PushI
	var_1611_bool = var_1605_int == var_1610_int; // 0x17e2 Eq
	if(var_1611_bool == 0) goto Label_6152; // 0x17e3 JumpB
	var_1612_int = 0; var_1613_bool = 0; // 0x17e4 PushV
	var_1612_int = 9; // 0x17e5 MovI
	var_1613_bool = 0; // 0x17e6 MovB
	func_802(var_1612_int, var_1613_bool); // 0x17e7 NEW_2
	var_1614_int = 0; var_1615_bool = 0; var_1616_int = 0; // 0x17e9 PushV
	var_1614_int = 9; // 0x17ea MovI
	var_1615_bool = 0; // 0x17eb MovB
	var_1616_int = 1; // 0x17ec MovI
	func_819(var_1614_int, var_1615_bool, var_1616_int); // 0x17ed NEW_2
	var_1617_int = 0; var_1618_int = 0; var_1619_object = Obj(); var_1620_object = Obj(); var_1621_object = Obj(); // 0x17ef PushV
	var_1617_int = 9; // 0x17f0 MovI
	var_1618_int = var_1604_int; // 0x17f1 Mov
	var_1619_object = var_1606_object; // 0x17f2 Mov
	var_1620_object = var_1607_object; // 0x17f3 Mov
	var_1621_object = var_1608_object; // 0x17f4 Mov
	func_628(var_1618_int, var_1619_object, var_1620_object, var_1621_object); // 0x17f5 NEW_2
	var_1622_object = Obj(); var_1623_int = 0; // 0x17f7 PushV
	var_1622_object = var_1609_object; // 0x17f8 Mov
	var_1623_int = 0; // 0x17f9 MovI
	func_311(var_1623_int); // 0x17fa NEW_2
	var_1624_int = 0; var_1625_bool = 0; var_1626_int = 0; // 0x17fc PushV
	var_1624_int = 9; // 0x17fd MovI
	var_1625_bool = 0; // 0x17fe MovB
	var_1626_int = 7; // 0x17ff MovI
	func_876(var_1624_int, var_1625_bool, var_1626_int); // 0x1800 NEW_2
	var_1627_int = 0; var_1628_bool = 0; var_1629_int = 0; // 0x1802 PushV
	var_1627_int = 9; // 0x1803 MovI
	var_1628_bool = 0; // 0x1804 MovB
	var_1629_int = 7; // 0x1805 MovI
	func_938(var_1627_int, var_1628_bool, var_1629_int); // 0x1806 NEW_2
	
Label_6152:
	var_1630_int = 0; var_1631_int = 0; // 0x1808 PushV
	var_1630_int = 9; // 0x1809 MovI
	var_1631_int = var_1605_int; // 0x180a Mov
	func_1056(var_1630_int, var_1631_int); // 0x180b NEW_2
	var_1632_int = 0; var_1633_int = 0; var_1634_int = 0; // 0x180d PushV
	var_1632_int = 9; // 0x180e MovI
	var_1633_int = var_1604_int; // 0x180f Mov
	var_1634_int = var_1605_int; // 0x1810 Mov
	func_1630(var_1632_int, var_1633_int, var_1634_int); // 0x1811 NEW_2
	return 0; // 0x1813 Return
}


func_14307(var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; // 0x37e3 PushV
	var_36_string = "Disease update"; // 0x37e4 PushS
	Trace(var_36_string); // 0x37e5 Func
	var_30_int = 0; // 0x37e7 MovI
	var_37_int = 0; // 0x37e8 PushI
	var_38_bool = var_23_int == var_37_int; // 0x37e9 Eq
	if(var_38_bool == 0) goto Label_14317; // 0x37ea JumpB
	var_30_int = 0; // 0x37eb MovI
	goto Label_14371; // 0x37ec Jump
	
Label_14371:
	var_39_int = 1; // 0x3823 PushI
	var_40_int = var_23_int + var_39_int; // 0x3824 Add
	var_41_int = 12; // 0x3825 PushI
	var_42_bool = var_40_int != var_41_int; // 0x3826 Neq
	if(var_42_bool == 0) goto Label_14453; // 0x3827 JumpB
	var_43_string = "Diseased regions : "; // 0x3828 PushS
	var_44_int = var_43_string + var_30_int; // 0x3829 Add
	Trace(var_44_int); // 0x382a Func
	var_31_int = 0; // 0x382c MovI
	
Label_14381:
	var_45_int = 16; // 0x382d PushI
	var_46_bool = var_31_int < var_45_int; // 0x382e LT
	if(var_46_bool == 0) goto Label_14406; // 0x382f JumpB
	var_47_bool = 0; var_48_int = 0; // 0x3830 PushV
	var_48_int = var_31_int; // 0x3831 Mov
	func_436(var_47_bool, var_48_int); // 0x3832 NEW_2
	if(var_47_bool == 0) goto Label_14394; // 0x3834 JumpB
	var_59_int = 0; // 0x3835 PushV
	var_59_int = var_31_int; // 0x3836 Mov
	func_478(var_59_int); // 0x3837 NEW_2
	goto Label_14403; // 0x3839 Jump
	
Label_14403:
	var_71_int = 1; // 0x3843 PushI
	var_31_int = var_31_int + var_71_int; // 0x3844 Add2
	goto Label_14381; // 0x3845 Jump
	
Label_14394:
	var_72_bool = 0; var_73_int = 0; // 0x383a PushV
	var_73_int = var_31_int; // 0x383b Mov
	func_466(var_72_bool, var_73_int); // 0x383c NEW_2
	if(var_72_bool == 0) goto Label_14403; // 0x383e JumpB
	var_81_int = 0; // 0x383f PushV
	var_81_int = var_31_int; // 0x3840 Mov
	func_418(var_81_int); // 0x3841 NEW_2
	
Label_14406:
	var_93_int = 2; // 0x3846 PushI
	var_94_bool = var_23_int == var_93_int; // 0x3847 Eq
	if(var_94_bool == 0) goto Label_14417; // 0x3848 JumpB
	var_95_string = "Special diseased region: 5"; // 0x3849 PushS
	Trace(var_95_string); // 0x384a Func
	var_96_int = 0; // 0x384c PushV
	var_96_int = 5; // 0x384d MovI
	func_448(var_96_int); // 0x384e NEW_2
	goto Label_14434; // 0x3850 Jump
	
Label_14434:
	var_108_int = 0; // 0x3862 PushV
	func_349(var_108_int); // 0x3863 NEW_2
	var_32_int = var_108_int; // 0x3864 Mov
	var_119_bool = var_32_int < var_30_int; // 0x3866 LT
	if(var_119_bool == 0) goto Label_14452; // 0x3867 JumpB
	var_33_int = var_30_int - var_32_int; // 0x3868 Sub2
	var_34_int = 0; // 0x3869 MovI
	
Label_14442:
	var_120_bool = var_34_int < var_33_int; // 0x386a LT
	if(var_120_bool == 0) goto Label_14452; // 0x386b JumpB
	var_121_int = 0; // 0x386c PushV
	var_122_int = 1; // 0x386d PushI
	var_121_int = var_23_int + var_122_int; // 0x386e Add2
	func_367(var_121_int); // 0x386f NEW_2
	var_167_int = 1; // 0x3871 PushI
	var_34_int = var_34_int + var_167_int; // 0x3872 Add2
	goto Label_14442; // 0x3873 Jump
	
Label_14452:
	goto Label_14478; // 0x3874 Jump
	
Label_14478:
	return 12; // 0x388e Return
	
Label_14417:
	var_168_int = 3; // 0x3851 PushI
	var_169_bool = var_23_int == var_168_int; // 0x3852 Eq
	if(var_169_bool == 0) goto Label_14434; // 0x3853 JumpB
	var_170_string = "Special diseased region: 3"; // 0x3854 PushS
	Trace(var_170_string); // 0x3855 Func
	var_171_int = 0; // 0x3857 PushV
	var_171_int = 3; // 0x3858 MovI
	func_448(var_171_int); // 0x3859 NEW_2
	var_172_string = "Special diseased region: 13"; // 0x385b PushS
	Trace(var_172_string); // 0x385c Func
	var_173_int = 0; // 0x385e PushV
	var_173_int = 13; // 0x385f MovI
	func_448(var_173_int); // 0x3860 NEW_2
	
Label_14453:
	var_35_int = 0; // 0x3875 MovI
	
Label_14454:
	var_174_int = 16; // 0x3876 PushI
	var_175_bool = var_35_int < var_174_int; // 0x3877 LT
	if(var_175_bool == 0) goto Label_14478; // 0x3878 JumpB
	var_176_bool = 0; // 0x3879 PushV
	var_176_bool = 1; // 0x387a MovB
	var_177_bool = 0; var_178_int = 0; // 0x387b PushV
	var_178_int = var_35_int; // 0x387c Mov
	func_436(var_177_bool, var_178_int); // 0x387d NEW_2
	if(var_177_bool == 0) goto Label_14470; // 0x387f JumpB
	var_179_bool = 0; var_180_int = 0; // 0x3880 PushV
	var_180_int = var_35_int; // 0x3881 Mov
	func_466(var_179_bool, var_180_int); // 0x3882 NEW_2
	if(var_179_bool == 0) goto Label_14470; // 0x3884 JumpB
	var_176_bool = 0; // 0x3885 MovB
	
Label_14470:
	if(var_176_bool == 0) goto Label_14475; // 0x3886 JumpB
	var_181_int = 0; // 0x3887 PushV
	var_181_int = var_35_int; // 0x3888 Mov
	func_418(var_181_int); // 0x3889 NEW_2
	
Label_14475:
	var_182_int = 1; // 0x388b PushI
	var_35_int = var_35_int + var_182_int; // 0x388c Add2
	goto Label_14454; // 0x388d Jump
	
Label_14317:
	var_183_int = 1; // 0x37ed PushI
	var_184_bool = var_23_int == var_183_int; // 0x37ee Eq
	if(var_184_bool == 0) goto Label_14322; // 0x37ef JumpB
	var_30_int = 0; // 0x37f0 MovI
	goto Label_14371; // 0x37f1 Jump
	
Label_14322:
	var_185_int = 2; // 0x37f2 PushI
	var_186_bool = var_23_int == var_185_int; // 0x37f3 Eq
	if(var_186_bool == 0) goto Label_14327; // 0x37f4 JumpB
	var_30_int = 1; // 0x37f5 MovI
	goto Label_14371; // 0x37f6 Jump
	
Label_14327:
	var_187_int = 3; // 0x37f7 PushI
	var_188_bool = var_23_int == var_187_int; // 0x37f8 Eq
	if(var_188_bool == 0) goto Label_14332; // 0x37f9 JumpB
	var_30_int = 2; // 0x37fa MovI
	goto Label_14371; // 0x37fb Jump
	
Label_14332:
	var_189_int = 4; // 0x37fc PushI
	var_190_bool = var_23_int == var_189_int; // 0x37fd Eq
	if(var_190_bool == 0) goto Label_14337; // 0x37fe JumpB
	var_30_int = 3; // 0x37ff MovI
	goto Label_14371; // 0x3800 Jump
	
Label_14337:
	var_191_int = 5; // 0x3801 PushI
	var_192_bool = var_23_int == var_191_int; // 0x3802 Eq
	if(var_192_bool == 0) goto Label_14342; // 0x3803 JumpB
	var_30_int = 4; // 0x3804 MovI
	goto Label_14371; // 0x3805 Jump
	
Label_14342:
	var_193_int = 6; // 0x3806 PushI
	var_194_bool = var_23_int == var_193_int; // 0x3807 Eq
	if(var_194_bool == 0) goto Label_14347; // 0x3808 JumpB
	var_30_int = 5; // 0x3809 MovI
	goto Label_14371; // 0x380a Jump
	
Label_14347:
	var_195_int = 7; // 0x380b PushI
	var_196_bool = var_23_int == var_195_int; // 0x380c Eq
	if(var_196_bool == 0) goto Label_14352; // 0x380d JumpB
	var_30_int = 5; // 0x380e MovI
	goto Label_14371; // 0x380f Jump
	
Label_14352:
	var_197_int = 8; // 0x3810 PushI
	var_198_bool = var_23_int == var_197_int; // 0x3811 Eq
	if(var_198_bool == 0) goto Label_14357; // 0x3812 JumpB
	var_30_int = 6; // 0x3813 MovI
	goto Label_14371; // 0x3814 Jump
	
Label_14357:
	var_199_int = 9; // 0x3815 PushI
	var_200_bool = var_23_int == var_199_int; // 0x3816 Eq
	if(var_200_bool == 0) goto Label_14362; // 0x3817 JumpB
	var_30_int = 6; // 0x3818 MovI
	goto Label_14371; // 0x3819 Jump
	
Label_14362:
	var_201_int = 10; // 0x381a PushI
	var_202_bool = var_23_int == var_201_int; // 0x381b Eq
	if(var_202_bool == 0) goto Label_14367; // 0x381c JumpB
	var_30_int = 7; // 0x381d MovI
	goto Label_14371; // 0x381e Jump
	
Label_14367:
	var_203_int = 11; // 0x381f PushI
	var_204_bool = var_23_int == var_203_int; // 0x3820 Eq
	if(var_204_bool == 0) goto Label_14371; // 0x3821 JumpB
	var_30_int = 8; // 0x3822 MovI
}


func_10213()
{
	var_4629_string = ""; var_4630_bool = 0; // 0x27e6 PushV
	var_4629_string = "house_vlad@door2"; // 0x27e7 MovS
	var_4630_bool = 1; // 0x27e8 MovB
	func_183(var_4629_string, var_4630_bool); // 0x27e9 NEW_2
	return 0; // 0x27eb Return
}


func_12264(var_796_int)
{
	var_797_int = 0; var_798_int = 0; // 0x2fe8 PushV
	var_799_string = "branch"; // 0x2fe9 PushS
	GetVariable(var_799_string, var_798_int); // 0x2fea Func
	var_796_int = var_798_int; // 0x2fec Mov
	return 2; // 0x2fed Return
}


func_10220()
{
	var_5272_string = ""; var_5273_bool = 0; // 0x27ed PushV
	var_5272_string = "warehouse_rubin@door1"; // 0x27ee MovS
	var_5273_bool = 0; // 0x27ef MovB
	func_183(var_5272_string, var_5273_bool); // 0x27f0 NEW_2
	return 0; // 0x27f2 Return
}


func_12270(var_4135_bool, var_4136_int)
{
	var_4138_int = 0; var_4139_int = 0; var_4140_int = 0; var_4141_int = 0; var_4142_int = 0; var_4143_int = 0; var_4144_int = 0; var_4145_int = 0; // 0x2fee PushV
	var_4146_bool = 0; // 0x2fef PushV
	var_4146_bool = 0; // 0x2ff0 MovB
	var_4147_int = 42000; // 0x2ff1 PushI
	var_4148_bool = var_4136_int > var_4147_int; // 0x2ff2 GT
	if(var_4148_bool == 0) goto Label_12280; // 0x2ff3 JumpB
	var_4149_int = 42288; // 0x2ff4 PushI
	var_4150_bool = var_4136_int < var_4149_int; // 0x2ff5 LT
	if(var_4150_bool == 0) goto Label_12280; // 0x2ff6 JumpB
	var_4146_bool = 1; // 0x2ff7 MovB
	
Label_12280:
	if(var_4146_bool == 0) goto Label_12297; // 0x2ff8 JumpB
	var_4151_int = 42000; // 0x2ff9 PushI
	var_4152_int = var_4136_int - var_4151_int; // 0x2ffa Sub
	var_4153_int = 24; // 0x2ffb PushI
	var_4142_int = var_4152_int / var_4152_int; // 0x2ffc Div2
	var_4154_int = 42000; // 0x2ffd PushI
	var_4155_int = var_4136_int - var_4154_int; // 0x2ffe Sub
	var_4156_int = 24; // 0x2fff PushI
	var_4143_int = var_4155_int % var_4156_int; // 0x3000 Mod2
	var_4157_int = 0; var_4158_int = 0; // 0x3001 PushV
	var_4159_int = 1; // 0x3002 PushI
	var_4157_int = var_4142_int + var_4159_int; // 0x3003 Add2
	var_4158_int = var_4143_int; // 0x3004 Mov
	func_8275(var_4157_int, var_4158_int); // 0x3005 NEW_2
	var_4135_bool = 1; // 0x3007 MovB
	return 8; // 0x3008 Return
	
Label_12297:
	var_4184_bool = 0; // 0x3009 PushV
	var_4184_bool = 0; // 0x300a MovB
	var_4185_int = 40000; // 0x300b PushI
	var_4186_bool = var_4136_int > var_4185_int; // 0x300c GT
	if(var_4186_bool == 0) goto Label_12306; // 0x300d JumpB
	var_4187_int = 40288; // 0x300e PushI
	var_4188_bool = var_4136_int < var_4187_int; // 0x300f LT
	if(var_4188_bool == 0) goto Label_12306; // 0x3010 JumpB
	var_4184_bool = 1; // 0x3011 MovB
	
Label_12306:
	if(var_4184_bool == 0) goto Label_12329; // 0x3012 JumpB
	var_4189_int = 40000; // 0x3013 PushI
	var_4190_int = var_4136_int - var_4189_int; // 0x3014 Sub
	var_4191_int = 24; // 0x3015 PushI
	var_4144_int = var_4190_int / var_4190_int; // 0x3016 Div2
	var_4192_int = 40000; // 0x3017 PushI
	var_4193_int = var_4136_int - var_4192_int; // 0x3018 Sub
	var_4194_int = 24; // 0x3019 PushI
	var_4145_int = var_4193_int % var_4194_int; // 0x301a Mod2
	var_4195_int = 0; var_4196_int = 0; // 0x301b PushV
	var_4197_int = 1; // 0x301c PushI
	var_4195_int = var_4144_int + var_4197_int; // 0x301d Add2
	var_4196_int = var_4145_int; // 0x301e Mov
	func_8320(var_4195_int, var_4196_int); // 0x301f NEW_2
	var_4517_int = 0; var_4518_int = 0; // 0x3021 PushV
	var_4519_int = 1; // 0x3022 PushI
	var_4517_int = var_4144_int + var_4519_int; // 0x3023 Add2
	var_4518_int = var_4145_int; // 0x3024 Mov
	func_14255(var_4517_int, var_4518_int); // 0x3025 NEW_2
	var_4135_bool = 1; // 0x3027 MovB
	return 8; // 0x3028 Return
	
Label_12329:
	var_4135_bool = 0; // 0x3029 MovB
	return 8; // 0x302a Return
}


func_10227()
{
	var_4817_object = Obj(); var_4818_object = Obj(); // 0x27f3 PushV
	var_4819_object = Obj(); // 0x27f4 PushV
	func_12247(var_4819_object); // 0x27f5 NEW_2
	var_4818_object = var_4819_object; // 0x27f6 Mov
	var_4820_string = "d1KaterinaMapMark"; // 0x27f8 PushS
	var_4821_string = "pt_map_katerina"; // 0x27f9 PushS
	var_4822_int = 3; // 0x27fa PushI
	var_4823_int = 508640; // 0x27fb PushI
	var_4824_float = 0; // 0x27fc PushV
	func_290(var_4824_float); // 0x27fd NEW_2
	AddMark(var_4820_string, var_4821_string, var_4822_int, var_4823_int, var_4824_float); // 0x27ff ObjFunc
	return 2; // 0x2801 Return
}


