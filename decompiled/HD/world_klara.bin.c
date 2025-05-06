task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0; // 0x1 PushV
	var_3_int = var_0_int; // 0x2 Mov
	var_4_float = var_1_float; // 0x3 Mov
	func_8893(var_3_int, var_4_float); // 0x4 NEW_2
	if(var_2_bool == 0) goto Label_8; // 0x6 JumpB
	return 0; // 0x7 Return
	
Label_8:
	var_4307_bool = 0; var_4308_int = 0; var_4309_float = 0; // 0x8 PushV
	var_4308_int = var_0_int; // 0x9 Mov
	var_4309_float = var_1_float; // 0xa Mov
	func_11440(var_4308_int, var_4309_float); // 0xb NEW_2
	if(var_4307_bool == 0) goto Label_15; // 0xd JumpB
	return 0; // 0xe Return
	
Label_15:
	var_4816_int = 0; var_4817_float = 0; // 0xf PushV
	var_4816_int = var_0_int; // 0x10 Mov
	var_4817_float = var_1_float; // 0x11 Mov
	func_11536(var_4816_int, var_4817_float); // 0x12 NEW_2
	return 0; // 0x14 Return
}


event_26(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; // 0x1d2c PushV
	var_6_string = "playsound"; // 0x1d2d PushS
	var_7_bool = var_0_string == var_6_string; // 0x1d2e Eq
	if(var_7_bool == 0) goto Label_7475; // 0x1d2f JumpB
	PlaySound(var_1_string); // 0x1d30 Func
	goto Label_7496; // 0x1d32 Jump
	
Label_7496:
	return 4; // 0x1d48 Return
	
Label_7475:
	var_8_string = "enable_bonfire"; // 0x1d33 PushS
	var_9_bool = var_0_string == var_8_string; // 0x1d34 Eq
	if(var_9_bool == 0) goto Label_7486; // 0x1d35 JumpB
	_strtoi(var_4_int, var_1_string); // 0x1d36 Func
	var_10_int = 0; // 0x1d38 PushV
	var_11_int = 1; // 0x1d39 PushI
	var_10_int = var_4_int - var_11_int; // 0x1d3a Sub2
	func_7608(var_10_int); // 0x1d3b NEW_2
	goto Label_7496; // 0x1d3d Jump
	
Label_7486:
	var_64_string = "disable_bonfire"; // 0x1d3e PushS
	var_65_bool = var_0_string == var_64_string; // 0x1d3f Eq
	if(var_65_bool == 0) goto Label_7496; // 0x1d40 JumpB
	_strtoi(var_5_int, var_1_string); // 0x1d41 Func
	var_66_int = 0; // 0x1d43 PushV
	var_67_int = 1; // 0x1d44 PushI
	var_66_int = var_5_int - var_67_int; // 0x1d45 Sub2
	func_7685(var_66_int); // 0x1d46 NEW_2
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x1d49 PushV
	var_22_string = "horror"; // 0x1d4a PushS
	var_23_bool = var_0_string == var_22_string; // 0x1d4b Eq
	if(var_23_bool == 0) goto Label_7536; // 0x1d4c JumpB
	_strtoi(var_12_int, var_1_string); // 0x1d4d Func
	var_24_int = 0; // 0x1d4f PushV
	var_24_int = var_12_int; // 0x1d50 Mov
	func_442(var_24_int); // 0x1d51 NEW_2
	var_39_object = GlobalVars[13]; // 0x1d53 PushGE
	size(var_13_int); // 0x1d54 ObjFunc
	var_40_bool = 0; // 0x1d56 PushV
	var_40_bool = 0; // 0x1d57 MovB
	var_41_int = 0; // 0x1d58 PushI
	var_42_bool = var_12_int >= var_41_int; // 0x1d59 GE
	if(var_42_bool == 0) goto Label_7518; // 0x1d5a JumpB
	var_43_bool = var_12_int < var_13_int; // 0x1d5b LT
	if(var_43_bool == 0) goto Label_7518; // 0x1d5c JumpB
	var_40_bool = 1; // 0x1d5d MovB
	
Label_7518:
	if(var_40_bool == 0) goto Label_7532; // 0x1d5e JumpB
	var_44_object = GlobalVars[13]; // 0x1d5f PushGE
	get(var_14_object, var_12_int); // 0x1d60 ObjFunc
	var_45_object = Obj(); var_46_int = 0; // 0x1d62 PushV
	var_45_object = var_14_object; // 0x1d63 Mov
	var_46_int = 1; // 0x1d64 MovI
	func_305(var_46_int); // 0x1d65 NEW_2
	var_72_string = "Replaced"; // 0x1d67 PushS
	Trace(var_72_string); // 0x1d68 Func
	var_14_object = 0; // 0x1d6a SetNull
	goto Label_7535; // 0x1d6b Jump
	
Label_7535:
	goto Label_7607; // 0x1d6f Jump
	
Label_7607:
	return 20; // 0x1db7 Return
	
Label_7532:
	var_73_string = "Invalid region index"; // 0x1d6c PushS
	Trace(var_73_string); // 0x1d6d Func
	
Label_7536:
	var_74_string = "nail"; // 0x1d70 PushS
	var_75_bool = var_0_string == var_74_string; // 0x1d71 Eq
	if(var_75_bool == 0) goto Label_7574; // 0x1d72 JumpB
	_strtoi(var_15_int, var_1_string); // 0x1d73 Func
	var_76_int = 0; // 0x1d75 PushV
	var_76_int = var_15_int; // 0x1d76 Mov
	func_472(var_76_int); // 0x1d77 NEW_2
	var_88_object = GlobalVars[13]; // 0x1d79 PushGE
	size(var_16_int); // 0x1d7a ObjFunc
	var_89_bool = 0; // 0x1d7c PushV
	var_89_bool = 0; // 0x1d7d MovB
	var_90_int = 0; // 0x1d7e PushI
	var_91_bool = var_15_int >= var_90_int; // 0x1d7f GE
	if(var_91_bool == 0) goto Label_7556; // 0x1d80 JumpB
	var_92_bool = var_15_int < var_16_int; // 0x1d81 LT
	if(var_92_bool == 0) goto Label_7556; // 0x1d82 JumpB
	var_89_bool = 1; // 0x1d83 MovB
	
Label_7556:
	if(var_89_bool == 0) goto Label_7570; // 0x1d84 JumpB
	var_93_object = GlobalVars[13]; // 0x1d85 PushGE
	get(var_17_object, var_15_int); // 0x1d86 ObjFunc
	var_94_object = Obj(); var_95_int = 0; // 0x1d88 PushV
	var_94_object = var_17_object; // 0x1d89 Mov
	var_95_int = 2; // 0x1d8a MovI
	func_305(var_95_int); // 0x1d8b NEW_2
	var_96_string = "Replaced"; // 0x1d8d PushS
	Trace(var_96_string); // 0x1d8e Func
	var_17_object = 0; // 0x1d90 SetNull
	goto Label_7573; // 0x1d91 Jump
	
Label_7573:
	goto Label_7607; // 0x1d95 Jump
	
Label_7570:
	var_97_string = "Invalid region index"; // 0x1d92 PushS
	Trace(var_97_string); // 0x1d93 Func
	
Label_7574:
	var_98_string = "fogme"; // 0x1d96 PushS
	var_99_bool = var_0_string == var_98_string; // 0x1d97 Eq
	if(var_99_bool == 0) goto Label_7594; // 0x1d98 JumpB
	var_100_object = Obj(); // 0x1d99 PushV
	func_74(var_100_object); // 0x1d9a NEW_2
	var_18_object = var_100_object; // 0x1d9b Mov
	GetScene(var_19_object); // 0x1d9d ObjFunc
	GetPosition(var_20_cvector); // 0x1d9f ObjFunc
	var_104_string = "fog"; // 0x1da1 PushS
	var_105_cvector = CVector(0.0, 0.0, 1.0); // 0x1da2 PushVec
	var_106_string = "fog_stat.xml"; // 0x1da3 PushS
	AddActorByType(var_21_object, var_104_string, var_19_object, var_20_cvector, var_105_cvector, var_106_string); // 0x1da4 Func
	var_21_object = 0; // 0x1da6 SetNull
	var_19_object = 0; // 0x1da7 SetNull
	var_18_object = 0; // 0x1da8 SetNull
	goto Label_7607; // 0x1da9 Jump
	
Label_7594:
	var_107_string = "sepia"; // 0x1daa PushS
	var_108_bool = var_0_string == var_107_string; // 0x1dab Eq
	if(var_108_bool == 0) goto Label_7601; // 0x1dac JumpB
	func_289(); // 0x1dae NEW_2
	goto Label_7607; // 0x1db0 Jump
	
Label_7601:
	var_111_string = "nosepia"; // 0x1db1 PushS
	var_112_bool = var_0_string == var_111_string; // 0x1db2 Eq
	if(var_112_bool == 0) goto Label_7607; // 0x1db3 JumpB
	func_294(); // 0x1db5 NEW_2
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
	func_7908(); // 0x21 NEW_2
	func_8948(); // 0x24 NEW_2
	func_11501(); // 0x27 NEW_2
	var_4579_float = 0; // 0x29 PushV
	var_4580_float = 0; // 0x2a PushV
	func_284(var_4580_float); // 0x2b NEW_2
	var_4579_float = var_4580_float; // 0x2c Mov
	func_12480(); // 0x2e NEW_2
	
Label_48:
	Hold(); // 0x30 Func
	goto Label_48; // 0x32 Jump
}


func_11264(var_4944_bool)
{
	var_4947_int = 0; var_4948_string = ""; // 0x2c01 PushV
	var_4948_string = "k8AglajaVisit"; // 0x2c02 MovS
	func_132(var_4947_int, var_4948_string); // 0x2c03 NEW_2
	var_4949_int = 0; // 0x2c05 PushI
	var_4950_bool = var_4947_int != var_4949_int; // 0x2c06 Neq
	if(var_4950_bool == 0) goto Label_11274; // 0x2c07 JumpB
	var_4944_bool = 1; // 0x2c08 MovB
	return 0; // 0x2c09 Return
	
Label_11274:
	var_4944_bool = 0; // 0x2c0a MovB
	return 0; // 0x2c0b Return
}


func_5124(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object)
{
	var_3685_int = 0; // 0x1405 PushI
	var_3686_bool = var_3680_int == var_3685_int; // 0x1406 Eq
	if(var_3686_bool == 0) goto Label_5164; // 0x1407 JumpB
	var_3687_int = 0; var_3688_bool = 0; // 0x1408 PushV
	var_3687_int = 3; // 0x1409 MovI
	var_3688_bool = 0; // 0x140a MovB
	func_796(var_3687_int, var_3688_bool); // 0x140b NEW_2
	var_3689_int = 0; var_3690_bool = 0; var_3691_int = 0; // 0x140d PushV
	var_3689_int = 3; // 0x140e MovI
	var_3690_bool = 0; // 0x140f MovB
	var_3691_int = 1; // 0x1410 MovI
	func_813(var_3689_int, var_3690_bool, var_3691_int); // 0x1411 NEW_2
	var_3692_int = 0; var_3693_int = 0; var_3694_object = Obj(); var_3695_object = Obj(); var_3696_object = Obj(); // 0x1413 PushV
	var_3692_int = 3; // 0x1414 MovI
	var_3693_int = var_3679_int; // 0x1415 Mov
	var_3694_object = var_3681_object; // 0x1416 Mov
	var_3695_object = var_3682_object; // 0x1417 Mov
	var_3696_object = var_3683_object; // 0x1418 Mov
	func_720(var_3692_int, var_3693_int, var_3694_object, var_3695_object, var_3696_object); // 0x1419 NEW_2
	var_3697_object = Obj(); var_3698_int = 0; // 0x141b PushV
	var_3697_object = var_3684_object; // 0x141c Mov
	var_3698_int = 2; // 0x141d MovI
	func_305(var_3698_int); // 0x141e NEW_2
	var_3699_int = 0; var_3700_bool = 0; var_3701_int = 0; // 0x1420 PushV
	var_3699_int = 3; // 0x1421 MovI
	var_3700_bool = 0; // 0x1422 MovB
	var_3701_int = 7; // 0x1423 MovI
	func_870(var_3699_int, var_3700_bool, var_3701_int); // 0x1424 NEW_2
	var_3702_int = 0; var_3703_bool = 0; var_3704_int = 0; // 0x1426 PushV
	var_3702_int = 3; // 0x1427 MovI
	var_3703_bool = 1; // 0x1428 MovB
	var_3704_int = 7; // 0x1429 MovI
	func_932(var_3702_int, var_3703_bool, var_3704_int); // 0x142a NEW_2
	
Label_5164:
	var_3705_int = 0; var_3706_bool = 0; // 0x142c PushV
	var_3705_int = 3; // 0x142d MovI
	var_3706_bool = 0; // 0x142e MovB
	func_779(var_3705_int, var_3706_bool); // 0x142f NEW_2
	var_3707_int = 0; var_3708_int = 0; var_3709_int = 0; // 0x1431 PushV
	var_3707_int = 3; // 0x1432 MovI
	var_3708_int = var_3679_int; // 0x1433 Mov
	var_3709_int = var_3680_int; // 0x1434 Mov
	func_3847(var_3707_int, var_3708_int, var_3709_int); // 0x1435 NEW_2
	return 0; // 0x1437 Return
}


func_8200()
{
	var_4426_object = Obj(); var_4427_object = Obj(); // 0x2008 PushV
	GetMainOutdoorScene(var_4427_object); // 0x2009 Func
	var_4428_object = GlobalVars[0]; // 0x200b PushGE
	var_4429_object = Obj(); var_4430_object = Obj(); var_4431_int = 0; // 0x200c PushV
	var_4430_object = var_4427_object; // 0x200d Mov
	var_4431_int = 1; // 0x200e MovI
	func_7762(var_4429_object, var_4430_object, var_4431_int); // 0x200f NEW_2
	var_4428_object = var_4429_object; // 0x2010 Mov
	GlobalVars[0] = var_4428_object; // 0x2012 PopGE
	var_4451_object = GlobalVars[1]; // 0x2013 PushGE
	var_4452_object = Obj(); var_4453_object = Obj(); var_4454_int = 0; // 0x2014 PushV
	var_4453_object = var_4427_object; // 0x2015 Mov
	var_4454_int = 2; // 0x2016 MovI
	func_7762(var_4452_object, var_4453_object, var_4454_int); // 0x2017 NEW_2
	var_4451_object = var_4452_object; // 0x2018 Mov
	GlobalVars[1] = var_4451_object; // 0x201a PopGE
	var_4455_object = GlobalVars[2]; // 0x201b PushGE
	var_4456_object = Obj(); var_4457_object = Obj(); var_4458_int = 0; // 0x201c PushV
	var_4457_object = var_4427_object; // 0x201d Mov
	var_4458_int = 3; // 0x201e MovI
	func_7762(var_4456_object, var_4457_object, var_4458_int); // 0x201f NEW_2
	var_4455_object = var_4456_object; // 0x2020 Mov
	GlobalVars[2] = var_4455_object; // 0x2022 PopGE
	var_4459_object = GlobalVars[3]; // 0x2023 PushGE
	var_4460_object = Obj(); var_4461_object = Obj(); var_4462_int = 0; // 0x2024 PushV
	var_4461_object = var_4427_object; // 0x2025 Mov
	var_4462_int = 4; // 0x2026 MovI
	func_7762(var_4460_object, var_4461_object, var_4462_int); // 0x2027 NEW_2
	var_4459_object = var_4460_object; // 0x2028 Mov
	GlobalVars[3] = var_4459_object; // 0x202a PopGE
	var_4463_object = GlobalVars[4]; // 0x202b PushGE
	var_4464_object = Obj(); var_4465_object = Obj(); var_4466_int = 0; // 0x202c PushV
	var_4465_object = var_4427_object; // 0x202d Mov
	var_4466_int = 5; // 0x202e MovI
	func_7762(var_4464_object, var_4465_object, var_4466_int); // 0x202f NEW_2
	var_4463_object = var_4464_object; // 0x2030 Mov
	GlobalVars[4] = var_4463_object; // 0x2032 PopGE
	var_4467_object = GlobalVars[5]; // 0x2033 PushGE
	var_4468_object = Obj(); var_4469_object = Obj(); var_4470_int = 0; // 0x2034 PushV
	var_4469_object = var_4427_object; // 0x2035 Mov
	var_4470_int = 6; // 0x2036 MovI
	func_7762(var_4468_object, var_4469_object, var_4470_int); // 0x2037 NEW_2
	var_4467_object = var_4468_object; // 0x2038 Mov
	GlobalVars[5] = var_4467_object; // 0x203a PopGE
	var_4471_object = GlobalVars[12]; // 0x203b PushGE
	var_4472_object = Obj(); // 0x203c PushV
	func_126(var_4472_object); // 0x203d NEW_2
	var_4471_object = var_4472_object; // 0x203e Mov
	GlobalVars[12] = var_4471_object; // 0x2040 PopGE
	var_4473_bool = 0; // 0x2041 PushV
	var_4473_bool = 0; // 0x2042 MovB
	func_7773(var_4473_bool); // 0x2043 NEW_2
	func_8748(); // 0x2046 NEW_2
	func_8823(); // 0x2049 NEW_2
	var_4570_int = 100; // 0x204b PushI
	SendWorldWndMessage(var_4570_int); // 0x204c Func
	return 2; // 0x204e Return
}


func_11276(var_4820_bool)
{
	var_4823_int = 0; var_4824_string = ""; // 0x2c0d PushV
	var_4824_string = "k9AglajaVisit"; // 0x2c0e MovS
	func_132(var_4823_int, var_4824_string); // 0x2c0f NEW_2
	var_4827_int = 0; // 0x2c11 PushI
	var_4828_bool = var_4823_int != var_4827_int; // 0x2c12 Neq
	if(var_4828_bool == 0) goto Label_11286; // 0x2c13 JumpB
	var_4820_bool = 1; // 0x2c14 MovB
	return 0; // 0x2c15 Return
	
Label_11286:
	var_4820_bool = 0; // 0x2c16 MovB
	return 0; // 0x2c17 Return
}


func_7182(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object)
{
	var_3005_int = 0; // 0x1c0f PushI
	var_3006_bool = var_3000_int == var_3005_int; // 0x1c10 Eq
	if(var_3006_bool == 0) goto Label_7222; // 0x1c11 JumpB
	var_3007_int = 0; var_3008_bool = 0; // 0x1c12 PushV
	var_3007_int = 14; // 0x1c13 MovI
	var_3008_bool = 1; // 0x1c14 MovB
	func_796(var_3007_int, var_3008_bool); // 0x1c15 NEW_2
	var_3009_int = 0; var_3010_bool = 0; var_3011_int = 0; // 0x1c17 PushV
	var_3009_int = 14; // 0x1c18 MovI
	var_3010_bool = 1; // 0x1c19 MovB
	var_3011_int = 1; // 0x1c1a MovI
	func_813(var_3009_int, var_3010_bool, var_3011_int); // 0x1c1b NEW_2
	var_3012_int = 0; var_3013_int = 0; var_3014_object = Obj(); var_3015_object = Obj(); var_3016_object = Obj(); // 0x1c1d PushV
	var_3012_int = 14; // 0x1c1e MovI
	var_3013_int = var_2999_int; // 0x1c1f Mov
	var_3014_object = var_3001_object; // 0x1c20 Mov
	var_3015_object = var_3002_object; // 0x1c21 Mov
	var_3016_object = var_3003_object; // 0x1c22 Mov
	func_641(var_3012_int, var_3013_int, var_3014_object, var_3015_object, var_3016_object); // 0x1c23 NEW_2
	var_3017_object = Obj(); var_3018_int = 0; // 0x1c25 PushV
	var_3017_object = var_3004_object; // 0x1c26 Mov
	var_3018_int = 1; // 0x1c27 MovI
	func_305(var_3018_int); // 0x1c28 NEW_2
	var_3019_int = 0; var_3020_bool = 0; var_3021_int = 0; // 0x1c2a PushV
	var_3019_int = 14; // 0x1c2b MovI
	var_3020_bool = 1; // 0x1c2c MovB
	var_3021_int = 5; // 0x1c2d MovI
	func_870(var_3019_int, var_3020_bool, var_3021_int); // 0x1c2e NEW_2
	var_3022_int = 0; var_3023_bool = 0; var_3024_int = 0; // 0x1c30 PushV
	var_3022_int = 14; // 0x1c31 MovI
	var_3023_bool = 0; // 0x1c32 MovB
	var_3024_int = 5; // 0x1c33 MovI
	func_932(var_3022_int, var_3023_bool, var_3024_int); // 0x1c34 NEW_2
	
Label_7222:
	var_3025_int = 0; var_3026_bool = 0; // 0x1c36 PushV
	var_3025_int = 14; // 0x1c37 MovI
	var_3026_bool = 0; // 0x1c38 MovB
	func_779(var_3025_int, var_3026_bool); // 0x1c39 NEW_2
	var_3027_int = 0; var_3028_int = 0; var_3029_int = 0; // 0x1c3b PushV
	var_3027_int = 14; // 0x1c3c MovI
	var_3028_int = var_2999_int; // 0x1c3d Mov
	var_3029_int = var_3000_int; // 0x1c3e Mov
	func_2584(var_3027_int, var_3028_int, var_3029_int); // 0x1c3f NEW_2
	return 0; // 0x1c41 Return
}


func_6161(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object)
{
	var_2840_int = 0; // 0x1812 PushI
	var_2841_bool = var_2835_int == var_2840_int; // 0x1813 Eq
	if(var_2841_bool == 0) goto Label_6201; // 0x1814 JumpB
	var_2842_int = 0; var_2843_bool = 0; // 0x1815 PushV
	var_2842_int = 9; // 0x1816 MovI
	var_2843_bool = 1; // 0x1817 MovB
	func_796(var_2842_int, var_2843_bool); // 0x1818 NEW_2
	var_2844_int = 0; var_2845_bool = 0; var_2846_int = 0; // 0x181a PushV
	var_2844_int = 9; // 0x181b MovI
	var_2845_bool = 1; // 0x181c MovB
	var_2846_int = 1; // 0x181d MovI
	func_813(var_2844_int, var_2845_bool, var_2846_int); // 0x181e NEW_2
	var_2847_int = 0; var_2848_int = 0; var_2849_object = Obj(); var_2850_object = Obj(); var_2851_object = Obj(); // 0x1820 PushV
	var_2847_int = 9; // 0x1821 MovI
	var_2848_int = var_2834_int; // 0x1822 Mov
	var_2849_object = var_2836_object; // 0x1823 Mov
	var_2850_object = var_2837_object; // 0x1824 Mov
	var_2851_object = var_2838_object; // 0x1825 Mov
	func_641(var_2847_int, var_2848_int, var_2849_object, var_2850_object, var_2851_object); // 0x1826 NEW_2
	var_2852_object = Obj(); var_2853_int = 0; // 0x1828 PushV
	var_2852_object = var_2839_object; // 0x1829 Mov
	var_2853_int = 1; // 0x182a MovI
	func_305(var_2853_int); // 0x182b NEW_2
	var_2854_int = 0; var_2855_bool = 0; var_2856_int = 0; // 0x182d PushV
	var_2854_int = 9; // 0x182e MovI
	var_2855_bool = 1; // 0x182f MovB
	var_2856_int = 7; // 0x1830 MovI
	func_870(var_2854_int, var_2855_bool, var_2856_int); // 0x1831 NEW_2
	var_2857_int = 0; var_2858_bool = 0; var_2859_int = 0; // 0x1833 PushV
	var_2857_int = 9; // 0x1834 MovI
	var_2858_bool = 0; // 0x1835 MovB
	var_2859_int = 7; // 0x1836 MovI
	func_932(var_2857_int, var_2858_bool, var_2859_int); // 0x1837 NEW_2
	
Label_6201:
	var_2860_int = 0; var_2861_bool = 0; // 0x1839 PushV
	var_2860_int = 9; // 0x183a MovI
	var_2861_bool = 0; // 0x183b MovB
	func_779(var_2860_int, var_2861_bool); // 0x183c NEW_2
	var_2862_int = 0; var_2863_int = 0; var_2864_int = 0; // 0x183e PushV
	var_2862_int = 9; // 0x183f MovI
	var_2863_int = var_2834_int; // 0x1840 Mov
	var_2864_int = var_2835_int; // 0x1841 Mov
	func_2764(var_2862_int, var_2863_int, var_2864_int); // 0x1842 NEW_2
	return 0; // 0x1844 Return
}


func_11288(var_4857_bool)
{
	var_4860_int = 0; var_4861_string = ""; // 0x2c19 PushV
	var_4861_string = "k11AglajaVisit"; // 0x2c1a MovS
	func_132(var_4860_int, var_4861_string); // 0x2c1b NEW_2
	var_4862_int = 0; // 0x2c1d PushI
	var_4863_bool = var_4860_int != var_4862_int; // 0x2c1e Neq
	if(var_4863_bool == 0) goto Label_11298; // 0x2c1f JumpB
	var_4857_bool = 1; // 0x2c20 MovB
	return 0; // 0x2c21 Return
	
Label_11298:
	var_4857_bool = 0; // 0x2c22 MovB
	return 0; // 0x2c23 Return
}


func_10266()
{
	var_5796_object = Obj(); var_5797_object = Obj(); var_5798_object = Obj(); var_5799_object = Obj(); // 0x281a PushV
	var_5800_object = Obj(); // 0x281b PushV
	func_11417(var_5800_object); // 0x281c NEW_2
	var_5798_object = var_5800_object; // 0x281d Mov
	var_5801_string = "k2q03Arfist"; // 0x281f PushS
	FindMark(var_5799_object, var_5801_string); // 0x2820 ObjFunc
	var_5802_object = var_5799_object; // 0x2822 Push
	if(var_5802_object == 0) goto Label_10278; // 0x2823 JumpB
	Remove(); // 0x2824 ObjFunc
	
Label_10278:
	var_5803_string = "k2q01AlexandrGotoMladVlad"; // 0x2826 PushS
	FindMark(var_5799_object, var_5803_string); // 0x2827 ObjFunc
	var_5804_object = var_5799_object; // 0x2829 Push
	if(var_5804_object == 0) goto Label_10285; // 0x282a JumpB
	Remove(); // 0x282b ObjFunc
	
Label_10285:
	var_5805_string = "k2q01BigVladGotoOspina"; // 0x282d PushS
	FindMark(var_5799_object, var_5805_string); // 0x282e ObjFunc
	var_5806_object = var_5799_object; // 0x2830 Push
	if(var_5806_object == 0) goto Label_10292; // 0x2831 JumpB
	Remove(); // 0x2832 ObjFunc
	
Label_10292:
	var_5807_string = "k2q01MladVladGotoOspina"; // 0x2834 PushS
	FindMark(var_5799_object, var_5807_string); // 0x2835 ObjFunc
	var_5808_object = var_5799_object; // 0x2837 Push
	if(var_5808_object == 0) goto Label_10299; // 0x2838 JumpB
	Remove(); // 0x2839 ObjFunc
	
Label_10299:
	var_5809_string = "k2q03Arfist"; // 0x283b PushS
	FindMark(var_5799_object, var_5809_string); // 0x283c ObjFunc
	var_5810_object = var_5799_object; // 0x283e Push
	if(var_5810_object == 0) goto Label_10306; // 0x283f JumpB
	Remove(); // 0x2840 ObjFunc
	
Label_10306:
	var_5811_string = "k2q04AnnaGotoGatherer1"; // 0x2842 PushS
	FindMark(var_5799_object, var_5811_string); // 0x2843 ObjFunc
	var_5812_object = var_5799_object; // 0x2845 Push
	if(var_5812_object == 0) goto Label_10313; // 0x2846 JumpB
	Remove(); // 0x2847 ObjFunc
	
Label_10313:
	var_5813_string = "k2q04AnnaGotoGatherer2"; // 0x2849 PushS
	FindMark(var_5799_object, var_5813_string); // 0x284a ObjFunc
	var_5814_object = var_5799_object; // 0x284c Push
	if(var_5814_object == 0) goto Label_10320; // 0x284d JumpB
	Remove(); // 0x284e ObjFunc
	
Label_10320:
	var_5815_string = "k2q04AnnaGotoGatherer3"; // 0x2850 PushS
	FindMark(var_5799_object, var_5815_string); // 0x2851 ObjFunc
	var_5816_object = var_5799_object; // 0x2853 Push
	if(var_5816_object == 0) goto Label_10327; // 0x2854 JumpB
	Remove(); // 0x2855 ObjFunc
	
Label_10327:
	var_5817_string = "k2q04MorlokGotoAndrei"; // 0x2857 PushS
	FindMark(var_5799_object, var_5817_string); // 0x2858 ObjFunc
	var_5818_object = var_5799_object; // 0x285a Push
	if(var_5818_object == 0) goto Label_10334; // 0x285b JumpB
	Remove(); // 0x285c ObjFunc
	
Label_10334:
	var_5819_string = "k2q03LaraLetter"; // 0x285e PushS
	FindMark(var_5799_object, var_5819_string); // 0x285f ObjFunc
	var_5820_object = var_5799_object; // 0x2861 Push
	if(var_5820_object == 0) goto Label_10341; // 0x2862 JumpB
	Remove(); // 0x2863 ObjFunc
	
Label_10341:
	var_5821_string = "k2q04MladVladGotoAnna"; // 0x2865 PushS
	FindMark(var_5799_object, var_5821_string); // 0x2866 ObjFunc
	var_5822_object = var_5799_object; // 0x2868 Push
	if(var_5822_object == 0) goto Label_10348; // 0x2869 JumpB
	Remove(); // 0x286a ObjFunc
	
Label_10348:
	var_5823_string = "k2q02KaterinaGotoLara"; // 0x286c PushS
	FindMark(var_5799_object, var_5823_string); // 0x286d ObjFunc
	var_5824_object = var_5799_object; // 0x286f Push
	if(var_5824_object == 0) goto Label_10355; // 0x2870 JumpB
	Remove(); // 0x2871 ObjFunc
	
Label_10355:
	var_5825_bool = 0; var_5826_int = 0; // 0x2873 PushV
	var_5826_int = 461; // 0x2874 MovI
	func_11392(var_5825_bool, var_5826_int); // 0x2875 NEW_2
	var_5827_bool = 0; var_5828_int = 0; // 0x2877 PushV
	var_5828_int = 470; // 0x2878 MovI
	func_11392(var_5827_bool, var_5828_int); // 0x2879 NEW_2
	var_5829_bool = 0; var_5830_int = 0; // 0x287b PushV
	var_5830_int = 476; // 0x287c MovI
	func_11392(var_5829_bool, var_5830_int); // 0x287d NEW_2
	var_5831_bool = 0; var_5832_int = 0; // 0x287f PushV
	var_5832_int = 507; // 0x2880 MovI
	func_11392(var_5831_bool, var_5832_int); // 0x2881 NEW_2
	return 4; // 0x2883 Return
}


func_1050(var_724_int, var_725_int)
{
	var_726_bool = 0; // 0x41b PushV
	var_726_bool = 1; // 0x41c MovB
	var_727_bool = 0; // 0x41d PushV
	var_727_bool = 1; // 0x41e MovB
	var_728_int = 22; // 0x41f PushI
	var_729_bool = var_725_int >= var_728_int; // 0x420 GE
	if(var_729_bool == 0) goto Label_1062; // 0x421 JumpB
	var_730_int = 4; // 0x422 PushI
	var_731_bool = var_725_int < var_730_int; // 0x423 LT
	if(var_731_bool == 0) goto Label_1062; // 0x424 JumpB
	var_727_bool = 0; // 0x425 MovB
	
Label_1062:
	if(var_727_bool == 0) goto Label_1074; // 0x426 JumpB
	var_732_bool = 0; // 0x427 PushV
	var_732_bool = 0; // 0x428 MovB
	var_733_int = 6; // 0x429 PushI
	var_734_bool = var_725_int >= var_733_int; // 0x42a GE
	if(var_734_bool == 0) goto Label_1072; // 0x42b JumpB
	var_735_int = 8; // 0x42c PushI
	var_736_bool = var_725_int < var_735_int; // 0x42d LT
	if(var_736_bool == 0) goto Label_1072; // 0x42e JumpB
	var_732_bool = 1; // 0x42f MovB
	
Label_1072:
	if(var_732_bool == 0) goto Label_1074; // 0x430 JumpB
	var_726_bool = 0; // 0x431 MovB
	
Label_1074:
	if(var_726_bool == 0) goto Label_1081; // 0x432 JumpB
	var_737_int = 0; var_738_bool = 0; // 0x433 PushV
	var_737_int = var_724_int; // 0x434 Mov
	var_738_bool = 1; // 0x435 MovB
	func_779(var_737_int, var_738_bool); // 0x436 NEW_2
	goto Label_1086; // 0x438 Jump
	
Label_1086:
	return 0; // 0x43e Return
	
Label_1081:
	var_748_int = 0; var_749_bool = 0; // 0x439 PushV
	var_748_int = var_724_int; // 0x43a Mov
	var_749_bool = 0; // 0x43b MovB
	func_779(var_748_int, var_749_bool); // 0x43c NEW_2
}


func_11300(var_4841_bool)
{
	var_4844_int = 0; var_4845_string = ""; // 0x2c25 PushV
	var_4845_string = "k12BurahVisit"; // 0x2c26 MovS
	func_132(var_4844_int, var_4845_string); // 0x2c27 NEW_2
	var_4846_int = 0; // 0x2c29 PushI
	var_4847_bool = var_4844_int != var_4846_int; // 0x2c2a Neq
	if(var_4847_bool == 0) goto Label_11310; // 0x2c2b JumpB
	var_4841_bool = 1; // 0x2c2c MovB
	return 0; // 0x2c2d Return
	
Label_11310:
	var_4841_bool = 0; // 0x2c2e MovB
	return 0; // 0x2c2f Return
}


func_11312(var_5193_bool, var_5194_object)
{
	var_5196_bool = 0; var_5197_object = Obj(); // 0x2c31 PushV
	var_5197_object = var_5194_object; // 0x2c32 Mov
	func_11322(var_5197_object); // 0x2c33 NEW_2
	if(var_5196_bool == 0) goto Label_11320; // 0x2c35 JumpB
	var_5193_bool = 1; // 0x2c36 MovB
	return 0; // 0x2c37 Return
	
Label_11320:
	var_5193_bool = 0; // 0x2c38 MovB
	return 0; // 0x2c39 Return
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


func_11322(var_5196_bool)
{
	var_5196_bool = 0; // 0x2c3b MovB
	return 0; // 0x2c3c Return
}


func_11325()
{
	var_4758_object = Obj(); var_4759_object = Obj(); // 0x2c3d PushV
	var_4760_int = 567; // 0x2c3e PushI
	var_4761_int = 0; // 0x2c3f PushI
	var_4762_int = 530581; // 0x2c40 PushI
	CreateDiaryEntry(var_4759_object, var_4760_int, var_4761_int, var_4762_int); // 0x2c41 Func
	var_4763_bool = 0; var_4764_object = Obj(); var_4765_int = 0; // 0x2c43 PushV
	var_4764_object = var_4759_object; // 0x2c44 Mov
	var_4765_int = -1; // 0x2c45 MovI
	func_11364(var_4763_bool, var_4764_object, var_4765_int); // 0x2c46 NEW_2
	return 2; // 0x2c48 Return
}


func_1087(var_1795_int, var_1796_int)
{
	var_1797_bool = 0; // 0x440 PushV
	var_1797_bool = 1; // 0x441 MovB
	var_1798_int = 22; // 0x442 PushI
	var_1799_bool = var_1796_int >= var_1798_int; // 0x443 GE
	if(var_1799_bool == 0) goto Label_1097; // 0x444 JumpB
	var_1800_int = 6; // 0x445 PushI
	var_1801_bool = var_1796_int < var_1800_int; // 0x446 LT
	if(var_1801_bool == 0) goto Label_1097; // 0x447 JumpB
	var_1797_bool = 0; // 0x448 MovB
	
Label_1097:
	if(var_1797_bool == 0) goto Label_1104; // 0x449 JumpB
	var_1802_int = 0; var_1803_bool = 0; // 0x44a PushV
	var_1802_int = var_1795_int; // 0x44b Mov
	var_1803_bool = 1; // 0x44c MovB
	func_779(var_1802_int, var_1803_bool); // 0x44d NEW_2
	goto Label_1109; // 0x44f Jump
	
Label_1109:
	return 0; // 0x455 Return
	
Label_1104:
	var_1804_int = 0; var_1805_bool = 0; // 0x450 PushV
	var_1804_int = var_1795_int; // 0x451 Mov
	var_1805_bool = 0; // 0x452 MovB
	func_779(var_1804_int, var_1805_bool); // 0x453 NEW_2
}


func_3137(var_2118_int, var_2119_int, var_2120_int)
{
	var_2121_int = 0; var_2122_int = 0; var_2123_int = 0; var_2124_int = 0; // 0xc41 PushV
	var_2125_bool = 0; // 0xc42 PushV
	var_2125_bool = 0; // 0xc43 MovB
	var_2126_int = 8; // 0xc44 PushI
	var_2127_bool = var_2120_int > var_2126_int; // 0xc45 GT
	if(var_2127_bool == 0) goto Label_3147; // 0xc46 JumpB
	var_2128_int = 21; // 0xc47 PushI
	var_2129_bool = var_2120_int < var_2128_int; // 0xc48 LT
	if(var_2129_bool == 0) goto Label_3147; // 0xc49 JumpB
	var_2125_bool = 1; // 0xc4a MovB
	
Label_3147:
	if(var_2125_bool == 0) goto Label_3202; // 0xc4b JumpB
	var_2130_int = 0; var_2131_string = ""; var_2132_string = ""; var_2133_int = 0; // 0xc4c PushV
	var_2130_int = var_2118_int; // 0xc4d Mov
	var_2131_string = "pers_vaxxabit"; // 0xc4e MovS
	var_2132_string = "vaxxabit_d.xml"; // 0xc4f MovS
	var_2133_int = 5; // 0xc50 MovI
	func_503(var_2130_int, var_2131_string, var_2132_string, var_2133_int); // 0xc51 NEW_2
	var_2134_int = 0; var_2135_string = ""; var_2136_string = ""; var_2137_int = 0; // 0xc53 PushV
	var_2134_int = var_2118_int; // 0xc54 Mov
	var_2135_string = "pers_vaxxabitka"; // 0xc55 MovS
	var_2136_string = "vaxxabitka_d.xml"; // 0xc56 MovS
	var_2137_int = 5; // 0xc57 MovI
	func_503(var_2134_int, var_2135_string, var_2136_string, var_2137_int); // 0xc58 NEW_2
	var_2138_int = 0; var_2139_string = ""; var_2140_string = ""; var_2141_int = 0; // 0xc5a PushV
	var_2138_int = var_2118_int; // 0xc5b Mov
	var_2139_string = "pers_rat_big"; // 0xc5c MovS
	var_2140_string = "rat_big.xml"; // 0xc5d MovS
	var_2141_int = 2; // 0xc5e MovI
	func_503(var_2138_int, var_2139_string, var_2140_string, var_2141_int); // 0xc5f NEW_2
	var_2142_int = 0; var_2143_string = ""; var_2144_string = ""; var_2145_int = 0; // 0xc61 PushV
	var_2142_int = var_2118_int; // 0xc62 Mov
	var_2143_string = "fog"; // 0xc63 MovS
	var_2144_string = "fog.xml"; // 0xc64 MovS
	var_2145_int = 6; // 0xc65 MovI
	func_529(var_2142_int, var_2143_string, var_2144_string, var_2145_int); // 0xc66 NEW_2
	var_2150_int = 5; // 0xc68 PushI
	var_2151_bool = var_2119_int >= var_2150_int; // 0xc69 GE
	if(var_2151_bool == 0) goto Label_3186; // 0xc6a JumpB
	var_2152_int = 0; var_2153_string = ""; var_2154_string = ""; var_2155_int = 0; // 0xc6b PushV
	var_2152_int = var_2118_int; // 0xc6c Mov
	var_2153_string = "fog"; // 0xc6d MovS
	var_2154_string = "fog_hunter.xml"; // 0xc6e MovS
	var_2155_int = 2; // 0xc6f MovI
	func_529(var_2152_int, var_2153_string, var_2154_string, var_2155_int); // 0xc70 NEW_2
	
Label_3186:
	var_2156_int = 1; // 0xc72 PushI
	var_2157_float = 0; var_2158_int = 0; // 0xc73 PushV
	var_2158_int = var_2119_int; // 0xc74 Mov
	func_1255(var_2157_float, var_2158_int); // 0xc75 NEW_2
	var_2123_int = var_2156_int * var_2157_float; // 0xc77 Mult2
	var_2203_int = var_2123_int; // 0xc78 Push
	if(var_2203_int == 0) goto Label_3201; // 0xc79 JumpB
	var_2204_int = 0; var_2205_string = ""; var_2206_string = ""; var_2207_int = 0; // 0xc7a PushV
	var_2204_int = var_2118_int; // 0xc7b Mov
	var_2205_string = "pers_bomber"; // 0xc7c MovS
	var_2206_string = "bomber.xml"; // 0xc7d MovS
	var_2207_int = var_2123_int; // 0xc7e Mov
	func_503(var_2204_int, var_2205_string, var_2206_string, var_2207_int); // 0xc7f NEW_2
	
Label_3201:
	goto Label_3255; // 0xc81 Jump
	
Label_3255:
	var_2208_bool = 0; var_2209_int = 0; // 0xcb7 PushV
	var_2209_int = var_2119_int; // 0xcb8 Mov
	func_1372(var_2208_bool, var_2209_int); // 0xcb9 NEW_2
	if(var_2208_bool == 0) goto Label_3267; // 0xcbb JumpB
	var_2211_int = 0; var_2212_string = ""; var_2213_string = ""; var_2214_int = 0; // 0xcbc PushV
	var_2211_int = var_2118_int; // 0xcbd Mov
	var_2212_string = "pers_sanitar"; // 0xcbe MovS
	var_2213_string = "sanitar.xml"; // 0xcbf MovS
	var_2214_int = 2; // 0xcc0 MovI
	func_503(var_2211_int, var_2212_string, var_2213_string, var_2214_int); // 0xcc1 NEW_2
	
Label_3267:
	var_2215_int = 0; var_2216_string = ""; var_2217_string = ""; var_2218_int = 0; var_2219_int = 0; var_2220_int = 0; // 0xcc3 PushV
	var_2215_int = var_2118_int; // 0xcc4 Mov
	var_2216_string = "pers_worker"; // 0xcc5 MovS
	var_2217_string = "agony1_man.xml"; // 0xcc6 MovS
	var_2218_int = 2; // 0xcc7 MovI
	var_2219_int = 4; // 0xcc8 MovI
	var_2220_int = 4; // 0xcc9 MovI
	func_516(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int); // 0xcca NEW_2
	var_2225_int = 0; var_2226_string = ""; var_2227_string = ""; var_2228_int = 0; var_2229_int = 0; var_2230_int = 0; // 0xccc PushV
	var_2225_int = var_2118_int; // 0xccd Mov
	var_2226_string = "pers_unosha"; // 0xcce MovS
	var_2227_string = "agony1_man.xml"; // 0xccf MovS
	var_2228_int = 2; // 0xcd0 MovI
	var_2229_int = 4; // 0xcd1 MovI
	var_2230_int = 4; // 0xcd2 MovI
	func_516(var_2225_int, var_2226_string, var_2227_string, var_2228_int, var_2229_int, var_2230_int); // 0xcd3 NEW_2
	var_2231_int = 0; var_2232_string = ""; var_2233_string = ""; var_2234_int = 0; var_2235_int = 0; var_2236_int = 0; // 0xcd5 PushV
	var_2231_int = var_2118_int; // 0xcd6 Mov
	var_2232_string = "pers_woman"; // 0xcd7 MovS
	var_2233_string = "agony1_woman.xml"; // 0xcd8 MovS
	var_2234_int = 2; // 0xcd9 MovI
	var_2235_int = 4; // 0xcda MovI
	var_2236_int = 4; // 0xcdb MovI
	func_516(var_2231_int, var_2232_string, var_2233_string, var_2234_int, var_2235_int, var_2236_int); // 0xcdc NEW_2
	var_2237_int = 0; var_2238_string = ""; var_2239_string = ""; var_2240_int = 0; var_2241_int = 0; var_2242_int = 0; // 0xcde PushV
	var_2237_int = var_2118_int; // 0xcdf Mov
	var_2238_string = "pers_wasted_girl"; // 0xce0 MovS
	var_2239_string = "agony1_woman.xml"; // 0xce1 MovS
	var_2240_int = 2; // 0xce2 MovI
	var_2241_int = 4; // 0xce3 MovI
	var_2242_int = 4; // 0xce4 MovI
	func_516(var_2237_int, var_2238_string, var_2239_string, var_2240_int, var_2241_int, var_2242_int); // 0xce5 NEW_2
	return 4; // 0xce7 Return
	
Label_3202:
	var_2243_int = 0; var_2244_string = ""; var_2245_string = ""; var_2246_int = 0; // 0xc82 PushV
	var_2243_int = var_2118_int; // 0xc83 Mov
	var_2244_string = "pers_vaxxabit"; // 0xc84 MovS
	var_2245_string = "vaxxabit_d.xml"; // 0xc85 MovS
	var_2246_int = 4; // 0xc86 MovI
	func_503(var_2243_int, var_2244_string, var_2245_string, var_2246_int); // 0xc87 NEW_2
	var_2247_int = 0; var_2248_string = ""; var_2249_string = ""; var_2250_int = 0; // 0xc89 PushV
	var_2247_int = var_2118_int; // 0xc8a Mov
	var_2248_string = "pers_vaxxabitka"; // 0xc8b MovS
	var_2249_string = "vaxxabitka_d.xml"; // 0xc8c MovS
	var_2250_int = 4; // 0xc8d MovI
	func_503(var_2247_int, var_2248_string, var_2249_string, var_2250_int); // 0xc8e NEW_2
	var_2251_int = 0; var_2252_string = ""; var_2253_string = ""; var_2254_int = 0; // 0xc90 PushV
	var_2251_int = var_2118_int; // 0xc91 Mov
	var_2252_string = "pers_rat_big"; // 0xc92 MovS
	var_2253_string = "rat_big.xml"; // 0xc93 MovS
	var_2254_int = 3; // 0xc94 MovI
	func_503(var_2251_int, var_2252_string, var_2253_string, var_2254_int); // 0xc95 NEW_2
	var_2255_int = 0; var_2256_string = ""; var_2257_string = ""; var_2258_int = 0; // 0xc97 PushV
	var_2255_int = var_2118_int; // 0xc98 Mov
	var_2256_string = "fog"; // 0xc99 MovS
	var_2257_string = "fog.xml"; // 0xc9a MovS
	var_2258_int = 6; // 0xc9b MovI
	func_529(var_2255_int, var_2256_string, var_2257_string, var_2258_int); // 0xc9c NEW_2
	var_2259_int = 5; // 0xc9e PushI
	var_2260_bool = var_2119_int >= var_2259_int; // 0xc9f GE
	if(var_2260_bool == 0) goto Label_3240; // 0xca0 JumpB
	var_2261_int = 0; var_2262_string = ""; var_2263_string = ""; var_2264_int = 0; // 0xca1 PushV
	var_2261_int = var_2118_int; // 0xca2 Mov
	var_2262_string = "fog"; // 0xca3 MovS
	var_2263_string = "fog_hunter.xml"; // 0xca4 MovS
	var_2264_int = 2; // 0xca5 MovI
	func_529(var_2261_int, var_2262_string, var_2263_string, var_2264_int); // 0xca6 NEW_2
	
Label_3240:
	var_2265_int = 2; // 0xca8 PushI
	var_2266_float = 0; var_2267_int = 0; // 0xca9 PushV
	var_2267_int = var_2119_int; // 0xcaa Mov
	func_1255(var_2266_float, var_2267_int); // 0xcab NEW_2
	var_2124_int = var_2265_int * var_2266_float; // 0xcad Mult2
	var_2268_int = var_2124_int; // 0xcae Push
	if(var_2268_int == 0) goto Label_3255; // 0xcaf JumpB
	var_2269_int = 0; var_2270_string = ""; var_2271_string = ""; var_2272_int = 0; // 0xcb0 PushV
	var_2269_int = var_2118_int; // 0xcb1 Mov
	var_2270_string = "pers_bomber"; // 0xcb2 MovS
	var_2271_string = "bomber.xml"; // 0xcb3 MovS
	var_2272_int = var_2124_int; // 0xcb4 Mov
	func_503(var_2269_int, var_2270_string, var_2271_string, var_2272_int); // 0xcb5 NEW_2
}


func_7234(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object)
{
	var_4135_int = 0; // 0x1c43 PushI
	var_4136_bool = var_4130_int == var_4135_int; // 0x1c44 Eq
	if(var_4136_bool == 0) goto Label_7274; // 0x1c45 JumpB
	var_4137_int = 0; var_4138_bool = 0; // 0x1c46 PushV
	var_4137_int = 14; // 0x1c47 MovI
	var_4138_bool = 0; // 0x1c48 MovB
	func_796(var_4137_int, var_4138_bool); // 0x1c49 NEW_2
	var_4139_int = 0; var_4140_bool = 0; var_4141_int = 0; // 0x1c4b PushV
	var_4139_int = 14; // 0x1c4c MovI
	var_4140_bool = 0; // 0x1c4d MovB
	var_4141_int = 1; // 0x1c4e MovI
	func_813(var_4139_int, var_4140_bool, var_4141_int); // 0x1c4f NEW_2
	var_4142_int = 0; var_4143_int = 0; var_4144_object = Obj(); var_4145_object = Obj(); var_4146_object = Obj(); // 0x1c51 PushV
	var_4142_int = 14; // 0x1c52 MovI
	var_4143_int = var_4129_int; // 0x1c53 Mov
	var_4144_object = var_4131_object; // 0x1c54 Mov
	var_4145_object = var_4132_object; // 0x1c55 Mov
	var_4146_object = var_4133_object; // 0x1c56 Mov
	func_720(var_4142_int, var_4143_int, var_4144_object, var_4145_object, var_4146_object); // 0x1c57 NEW_2
	var_4147_object = Obj(); var_4148_int = 0; // 0x1c59 PushV
	var_4147_object = var_4134_object; // 0x1c5a Mov
	var_4148_int = 2; // 0x1c5b MovI
	func_305(var_4148_int); // 0x1c5c NEW_2
	var_4149_int = 0; var_4150_bool = 0; var_4151_int = 0; // 0x1c5e PushV
	var_4149_int = 14; // 0x1c5f MovI
	var_4150_bool = 0; // 0x1c60 MovB
	var_4151_int = 5; // 0x1c61 MovI
	func_870(var_4149_int, var_4150_bool, var_4151_int); // 0x1c62 NEW_2
	var_4152_int = 0; var_4153_bool = 0; var_4154_int = 0; // 0x1c64 PushV
	var_4152_int = 14; // 0x1c65 MovI
	var_4153_bool = 1; // 0x1c66 MovB
	var_4154_int = 5; // 0x1c67 MovI
	func_932(var_4152_int, var_4153_bool, var_4154_int); // 0x1c68 NEW_2
	
Label_7274:
	var_4155_int = 0; var_4156_bool = 0; // 0x1c6a PushV
	var_4155_int = 14; // 0x1c6b MovI
	var_4156_bool = 0; // 0x1c6c MovB
	func_779(var_4155_int, var_4156_bool); // 0x1c6d NEW_2
	var_4157_int = 0; var_4158_int = 0; var_4159_int = 0; // 0x1c6f PushV
	var_4157_int = 14; // 0x1c70 MovI
	var_4158_int = var_4129_int; // 0x1c71 Mov
	var_4159_int = var_4130_int; // 0x1c72 Mov
	func_3471(var_4157_int, var_4158_int, var_4159_int); // 0x1c73 NEW_2
	return 0; // 0x1c75 Return
}


func_6213(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object)
{
	var_3970_int = 0; // 0x1846 PushI
	var_3971_bool = var_3965_int == var_3970_int; // 0x1847 Eq
	if(var_3971_bool == 0) goto Label_6253; // 0x1848 JumpB
	var_3972_int = 0; var_3973_bool = 0; // 0x1849 PushV
	var_3972_int = 9; // 0x184a MovI
	var_3973_bool = 0; // 0x184b MovB
	func_796(var_3972_int, var_3973_bool); // 0x184c NEW_2
	var_3974_int = 0; var_3975_bool = 0; var_3976_int = 0; // 0x184e PushV
	var_3974_int = 9; // 0x184f MovI
	var_3975_bool = 0; // 0x1850 MovB
	var_3976_int = 1; // 0x1851 MovI
	func_813(var_3974_int, var_3975_bool, var_3976_int); // 0x1852 NEW_2
	var_3977_int = 0; var_3978_int = 0; var_3979_object = Obj(); var_3980_object = Obj(); var_3981_object = Obj(); // 0x1854 PushV
	var_3977_int = 9; // 0x1855 MovI
	var_3978_int = var_3964_int; // 0x1856 Mov
	var_3979_object = var_3966_object; // 0x1857 Mov
	var_3980_object = var_3967_object; // 0x1858 Mov
	var_3981_object = var_3968_object; // 0x1859 Mov
	func_720(var_3977_int, var_3978_int, var_3979_object, var_3980_object, var_3981_object); // 0x185a NEW_2
	var_3982_object = Obj(); var_3983_int = 0; // 0x185c PushV
	var_3982_object = var_3969_object; // 0x185d Mov
	var_3983_int = 2; // 0x185e MovI
	func_305(var_3983_int); // 0x185f NEW_2
	var_3984_int = 0; var_3985_bool = 0; var_3986_int = 0; // 0x1861 PushV
	var_3984_int = 9; // 0x1862 MovI
	var_3985_bool = 0; // 0x1863 MovB
	var_3986_int = 7; // 0x1864 MovI
	func_870(var_3984_int, var_3985_bool, var_3986_int); // 0x1865 NEW_2
	var_3987_int = 0; var_3988_bool = 0; var_3989_int = 0; // 0x1867 PushV
	var_3987_int = 9; // 0x1868 MovI
	var_3988_bool = 1; // 0x1869 MovB
	var_3989_int = 7; // 0x186a MovI
	func_932(var_3987_int, var_3988_bool, var_3989_int); // 0x186b NEW_2
	
Label_6253:
	var_3990_int = 0; var_3991_bool = 0; // 0x186d PushV
	var_3990_int = 9; // 0x186e MovI
	var_3991_bool = 0; // 0x186f MovB
	func_779(var_3990_int, var_3991_bool); // 0x1870 NEW_2
	var_3992_int = 0; var_3993_int = 0; var_3994_int = 0; // 0x1872 PushV
	var_3992_int = 9; // 0x1873 MovI
	var_3993_int = var_3964_int; // 0x1874 Mov
	var_3994_int = var_3965_int; // 0x1875 Mov
	func_3659(var_3992_int, var_3993_int, var_3994_int); // 0x1876 NEW_2
	return 0; // 0x1878 Return
}


func_74(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x4a PushV
	var_103_string = "player"; // 0x4b PushS
	FindActor(var_102_object, var_103_string); // 0x4c Func
	var_100_object = var_102_object; // 0x4e Mov
	return 2; // 0x4f Return
}


func_11338()
{
	var_5033_object = Obj(); var_5034_object = Obj(); // 0x2c4a PushV
	var_5035_int = 571; // 0x2c4b PushI
	var_5036_int = 0; // 0x2c4c PushI
	var_5037_int = 530585; // 0x2c4d PushI
	CreateDiaryEntry(var_5034_object, var_5035_int, var_5036_int, var_5037_int); // 0x2c4e Func
	var_5038_bool = 0; var_5039_object = Obj(); var_5040_int = 0; // 0x2c50 PushV
	var_5039_object = var_5034_object; // 0x2c51 Mov
	var_5040_int = -1; // 0x2c52 MovI
	func_11364(var_5038_bool, var_5039_object, var_5040_int); // 0x2c53 NEW_2
	return 2; // 0x2c55 Return
}


func_8272(var_4329_int, var_4330_int)
{
	var_4332_bool = 0; var_4333_int = 0; var_4334_int = 0; var_4335_bool = 0; var_4336_int = 0; var_4337_int = 0; // 0x2050 PushV
	var_4338_int = 0; // 0x2051 PushI
	var_4339_bool = var_4330_int == var_4338_int; // 0x2052 Eq
	if(var_4339_bool == 0) goto Label_8569; // 0x2053 JumpB
	var_4335_bool = 0; // 0x2054 MovB
	var_4340_int = 2; // 0x2055 PushI
	var_4341_bool = var_4329_int == var_4340_int; // 0x2056 Eq
	if(var_4341_bool == 0) goto Label_8319; // 0x2057 JumpB
	var_4342_int = 0; // 0x2058 PushV
	func_11434(var_4342_int); // 0x2059 NEW_2
	var_4343_int = 0; // 0x205b PushI
	var_4344_bool = var_4342_int == var_4343_int; // 0x205c Eq
	if(var_4344_bool == 0) goto Label_8300; // 0x205d JumpB
	var_4345_string = "d1q01"; // 0x205e PushS
	GetVariable(var_4345_string, var_4336_int); // 0x205f Func
	var_4346_int = 1000; // 0x2061 PushI
	var_4347_bool = var_4336_int != var_4346_int; // 0x2062 Neq
	if(var_4347_bool == 0) goto Label_8299; // 0x2063 JumpB
	var_4335_bool = 1; // 0x2064 MovB
	var_4348_string = "ACHIEVEMENT_UP"; // 0x2065 PushS
	UnlockAchievement(var_4348_string); // 0x2066 Func
	var_4349_string = "gameover_fail.xml"; // 0x2068 PushS
	GameOver(var_4349_string); // 0x2069 Func
	
Label_8299:
	goto Label_8319; // 0x206b Jump
	
Label_8319:
	var_4350_bool = var_4335_bool == 0; // 0x207f Not
	if(var_4350_bool == 0) goto Label_8563; // 0x2080 JumpB
	var_4351_int = 0; // 0x2081 PushV
	func_11434(var_4351_int); // 0x2082 NEW_2
	var_4352_int = 0; // 0x2084 PushI
	var_4353_bool = var_4351_int == var_4352_int; // 0x2085 Eq
	if(var_4353_bool == 0) goto Label_8404; // 0x2086 JumpB
	var_4354_int = 2; // 0x2087 PushI
	var_4355_bool = var_4329_int == var_4354_int; // 0x2088 Eq
	if(var_4355_bool == 0) goto Label_8334; // 0x2089 JumpB
	var_4356_string = "ACHIEVEMENT_BACH_1"; // 0x208a PushS
	UnlockAchievement(var_4356_string); // 0x208b Func
	goto Label_8403; // 0x208d Jump
	
Label_8403:
	goto Label_8563; // 0x20d3 Jump
	
Label_8563:
	var_4357_int = 101; // 0x2173 PushI
	SendWorldWndMessage(var_4357_int); // 0x2174 Func
	var_4358_string = "c_iWM_RealDayChange"; // 0x2176 PushS
	SetVariable(var_4358_string, var_4329_int); // 0x2177 Func
	
Label_8569:
	return 6; // 0x2179 Return
	
Label_8334:
	var_4359_int = 3; // 0x208e PushI
	var_4360_bool = var_4329_int == var_4359_int; // 0x208f Eq
	if(var_4360_bool == 0) goto Label_8341; // 0x2090 JumpB
	var_4361_string = "ACHIEVEMENT_BACH_2"; // 0x2091 PushS
	UnlockAchievement(var_4361_string); // 0x2092 Func
	goto Label_8403; // 0x2094 Jump
	
Label_8341:
	var_4362_int = 4; // 0x2095 PushI
	var_4363_bool = var_4329_int == var_4362_int; // 0x2096 Eq
	if(var_4363_bool == 0) goto Label_8348; // 0x2097 JumpB
	var_4364_string = "ACHIEVEMENT_BACH_3"; // 0x2098 PushS
	UnlockAchievement(var_4364_string); // 0x2099 Func
	goto Label_8403; // 0x209b Jump
	
Label_8348:
	var_4365_int = 5; // 0x209c PushI
	var_4366_bool = var_4329_int == var_4365_int; // 0x209d Eq
	if(var_4366_bool == 0) goto Label_8355; // 0x209e JumpB
	var_4367_string = "ACHIEVEMENT_BACH_4"; // 0x209f PushS
	UnlockAchievement(var_4367_string); // 0x20a0 Func
	goto Label_8403; // 0x20a2 Jump
	
Label_8355:
	var_4368_int = 6; // 0x20a3 PushI
	var_4369_bool = var_4329_int == var_4368_int; // 0x20a4 Eq
	if(var_4369_bool == 0) goto Label_8362; // 0x20a5 JumpB
	var_4370_string = "ACHIEVEMENT_BACH_5"; // 0x20a6 PushS
	UnlockAchievement(var_4370_string); // 0x20a7 Func
	goto Label_8403; // 0x20a9 Jump
	
Label_8362:
	var_4371_int = 7; // 0x20aa PushI
	var_4372_bool = var_4329_int == var_4371_int; // 0x20ab Eq
	if(var_4372_bool == 0) goto Label_8369; // 0x20ac JumpB
	var_4373_string = "ACHIEVEMENT_BACH_6"; // 0x20ad PushS
	UnlockAchievement(var_4373_string); // 0x20ae Func
	goto Label_8403; // 0x20b0 Jump
	
Label_8369:
	var_4374_int = 8; // 0x20b1 PushI
	var_4375_bool = var_4329_int == var_4374_int; // 0x20b2 Eq
	if(var_4375_bool == 0) goto Label_8376; // 0x20b3 JumpB
	var_4376_string = "ACHIEVEMENT_BACH_7"; // 0x20b4 PushS
	UnlockAchievement(var_4376_string); // 0x20b5 Func
	goto Label_8403; // 0x20b7 Jump
	
Label_8376:
	var_4377_int = 9; // 0x20b8 PushI
	var_4378_bool = var_4329_int == var_4377_int; // 0x20b9 Eq
	if(var_4378_bool == 0) goto Label_8383; // 0x20ba JumpB
	var_4379_string = "ACHIEVEMENT_BACH_8"; // 0x20bb PushS
	UnlockAchievement(var_4379_string); // 0x20bc Func
	goto Label_8403; // 0x20be Jump
	
Label_8383:
	var_4380_int = 10; // 0x20bf PushI
	var_4381_bool = var_4329_int == var_4380_int; // 0x20c0 Eq
	if(var_4381_bool == 0) goto Label_8390; // 0x20c1 JumpB
	var_4382_string = "ACHIEVEMENT_BACH_9"; // 0x20c2 PushS
	UnlockAchievement(var_4382_string); // 0x20c3 Func
	goto Label_8403; // 0x20c5 Jump
	
Label_8390:
	var_4383_int = 11; // 0x20c6 PushI
	var_4384_bool = var_4329_int == var_4383_int; // 0x20c7 Eq
	if(var_4384_bool == 0) goto Label_8397; // 0x20c8 JumpB
	var_4385_string = "ACHIEVEMENT_BACH_10"; // 0x20c9 PushS
	UnlockAchievement(var_4385_string); // 0x20ca Func
	goto Label_8403; // 0x20cc Jump
	
Label_8397:
	var_4386_int = 12; // 0x20cd PushI
	var_4387_bool = var_4329_int == var_4386_int; // 0x20ce Eq
	if(var_4387_bool == 0) goto Label_8403; // 0x20cf JumpB
	var_4388_string = "ACHIEVEMENT_BACH_11"; // 0x20d0 PushS
	UnlockAchievement(var_4388_string); // 0x20d1 Func
	
Label_8404:
	var_4389_int = 0; // 0x20d4 PushV
	func_11434(var_4389_int); // 0x20d5 NEW_2
	var_4390_int = 1; // 0x20d7 PushI
	var_4391_bool = var_4389_int == var_4390_int; // 0x20d8 Eq
	if(var_4391_bool == 0) goto Label_8487; // 0x20d9 JumpB
	var_4392_int = 2; // 0x20da PushI
	var_4393_bool = var_4329_int == var_4392_int; // 0x20db Eq
	if(var_4393_bool == 0) goto Label_8417; // 0x20dc JumpB
	var_4394_string = "ACHIEVEMENT_BURAH_1"; // 0x20dd PushS
	UnlockAchievement(var_4394_string); // 0x20de Func
	goto Label_8486; // 0x20e0 Jump
	
Label_8486:
	goto Label_8563; // 0x2126 Jump
	
Label_8417:
	var_4395_int = 3; // 0x20e1 PushI
	var_4396_bool = var_4329_int == var_4395_int; // 0x20e2 Eq
	if(var_4396_bool == 0) goto Label_8424; // 0x20e3 JumpB
	var_4397_string = "ACHIEVEMENT_BURAH_2"; // 0x20e4 PushS
	UnlockAchievement(var_4397_string); // 0x20e5 Func
	goto Label_8486; // 0x20e7 Jump
	
Label_8424:
	var_4398_int = 4; // 0x20e8 PushI
	var_4399_bool = var_4329_int == var_4398_int; // 0x20e9 Eq
	if(var_4399_bool == 0) goto Label_8431; // 0x20ea JumpB
	var_4400_string = "ACHIEVEMENT_BURAH_3"; // 0x20eb PushS
	UnlockAchievement(var_4400_string); // 0x20ec Func
	goto Label_8486; // 0x20ee Jump
	
Label_8431:
	var_4401_int = 5; // 0x20ef PushI
	var_4402_bool = var_4329_int == var_4401_int; // 0x20f0 Eq
	if(var_4402_bool == 0) goto Label_8438; // 0x20f1 JumpB
	var_4403_string = "ACHIEVEMENT_BURAH_4"; // 0x20f2 PushS
	UnlockAchievement(var_4403_string); // 0x20f3 Func
	goto Label_8486; // 0x20f5 Jump
	
Label_8438:
	var_4404_int = 6; // 0x20f6 PushI
	var_4405_bool = var_4329_int == var_4404_int; // 0x20f7 Eq
	if(var_4405_bool == 0) goto Label_8445; // 0x20f8 JumpB
	var_4406_string = "ACHIEVEMENT_BURAH_5"; // 0x20f9 PushS
	UnlockAchievement(var_4406_string); // 0x20fa Func
	goto Label_8486; // 0x20fc Jump
	
Label_8445:
	var_4407_int = 7; // 0x20fd PushI
	var_4408_bool = var_4329_int == var_4407_int; // 0x20fe Eq
	if(var_4408_bool == 0) goto Label_8452; // 0x20ff JumpB
	var_4409_string = "ACHIEVEMENT_BURAH_6"; // 0x2100 PushS
	UnlockAchievement(var_4409_string); // 0x2101 Func
	goto Label_8486; // 0x2103 Jump
	
Label_8452:
	var_4410_int = 8; // 0x2104 PushI
	var_4411_bool = var_4329_int == var_4410_int; // 0x2105 Eq
	if(var_4411_bool == 0) goto Label_8459; // 0x2106 JumpB
	var_4412_string = "ACHIEVEMENT_BURAH_7"; // 0x2107 PushS
	UnlockAchievement(var_4412_string); // 0x2108 Func
	goto Label_8486; // 0x210a Jump
	
Label_8459:
	var_4413_int = 9; // 0x210b PushI
	var_4414_bool = var_4329_int == var_4413_int; // 0x210c Eq
	if(var_4414_bool == 0) goto Label_8466; // 0x210d JumpB
	var_4415_string = "ACHIEVEMENT_BURAH_8"; // 0x210e PushS
	UnlockAchievement(var_4415_string); // 0x210f Func
	goto Label_8486; // 0x2111 Jump
	
Label_8466:
	var_4416_int = 10; // 0x2112 PushI
	var_4417_bool = var_4329_int == var_4416_int; // 0x2113 Eq
	if(var_4417_bool == 0) goto Label_8473; // 0x2114 JumpB
	var_4418_string = "ACHIEVEMENT_BURAH_9"; // 0x2115 PushS
	UnlockAchievement(var_4418_string); // 0x2116 Func
	goto Label_8486; // 0x2118 Jump
	
Label_8473:
	var_4419_int = 11; // 0x2119 PushI
	var_4420_bool = var_4329_int == var_4419_int; // 0x211a Eq
	if(var_4420_bool == 0) goto Label_8480; // 0x211b JumpB
	var_4421_string = "ACHIEVEMENT_BURAH_10"; // 0x211c PushS
	UnlockAchievement(var_4421_string); // 0x211d Func
	goto Label_8486; // 0x211f Jump
	
Label_8480:
	var_4422_int = 12; // 0x2120 PushI
	var_4423_bool = var_4329_int == var_4422_int; // 0x2121 Eq
	if(var_4423_bool == 0) goto Label_8486; // 0x2122 JumpB
	var_4424_string = "ACHIEVEMENT_BURAH_11"; // 0x2123 PushS
	UnlockAchievement(var_4424_string); // 0x2124 Func
	
Label_8487:
	var_4425_int = 2; // 0x2127 PushI
	var_4426_bool = var_4329_int == var_4425_int; // 0x2128 Eq
	if(var_4426_bool == 0) goto Label_8494; // 0x2129 JumpB
	var_4427_string = "ACHIEVEMENT_CLARA_1"; // 0x212a PushS
	UnlockAchievement(var_4427_string); // 0x212b Func
	goto Label_8563; // 0x212d Jump
	
Label_8494:
	var_4428_int = 3; // 0x212e PushI
	var_4429_bool = var_4329_int == var_4428_int; // 0x212f Eq
	if(var_4429_bool == 0) goto Label_8501; // 0x2130 JumpB
	var_4430_string = "ACHIEVEMENT_CLARA_2"; // 0x2131 PushS
	UnlockAchievement(var_4430_string); // 0x2132 Func
	goto Label_8563; // 0x2134 Jump
	
Label_8501:
	var_4431_int = 4; // 0x2135 PushI
	var_4432_bool = var_4329_int == var_4431_int; // 0x2136 Eq
	if(var_4432_bool == 0) goto Label_8508; // 0x2137 JumpB
	var_4433_string = "ACHIEVEMENT_CLARA_3"; // 0x2138 PushS
	UnlockAchievement(var_4433_string); // 0x2139 Func
	goto Label_8563; // 0x213b Jump
	
Label_8508:
	var_4434_int = 5; // 0x213c PushI
	var_4435_bool = var_4329_int == var_4434_int; // 0x213d Eq
	if(var_4435_bool == 0) goto Label_8515; // 0x213e JumpB
	var_4436_string = "ACHIEVEMENT_CLARA_4"; // 0x213f PushS
	UnlockAchievement(var_4436_string); // 0x2140 Func
	goto Label_8563; // 0x2142 Jump
	
Label_8515:
	var_4437_int = 6; // 0x2143 PushI
	var_4438_bool = var_4329_int == var_4437_int; // 0x2144 Eq
	if(var_4438_bool == 0) goto Label_8522; // 0x2145 JumpB
	var_4439_string = "ACHIEVEMENT_CLARA_5"; // 0x2146 PushS
	UnlockAchievement(var_4439_string); // 0x2147 Func
	goto Label_8563; // 0x2149 Jump
	
Label_8522:
	var_4440_int = 7; // 0x214a PushI
	var_4441_bool = var_4329_int == var_4440_int; // 0x214b Eq
	if(var_4441_bool == 0) goto Label_8529; // 0x214c JumpB
	var_4442_string = "ACHIEVEMENT_CLARA_6"; // 0x214d PushS
	UnlockAchievement(var_4442_string); // 0x214e Func
	goto Label_8563; // 0x2150 Jump
	
Label_8529:
	var_4443_int = 8; // 0x2151 PushI
	var_4444_bool = var_4329_int == var_4443_int; // 0x2152 Eq
	if(var_4444_bool == 0) goto Label_8536; // 0x2153 JumpB
	var_4445_string = "ACHIEVEMENT_CLARA_7"; // 0x2154 PushS
	UnlockAchievement(var_4445_string); // 0x2155 Func
	goto Label_8563; // 0x2157 Jump
	
Label_8536:
	var_4446_int = 9; // 0x2158 PushI
	var_4447_bool = var_4329_int == var_4446_int; // 0x2159 Eq
	if(var_4447_bool == 0) goto Label_8543; // 0x215a JumpB
	var_4448_string = "ACHIEVEMENT_CLARA_8"; // 0x215b PushS
	UnlockAchievement(var_4448_string); // 0x215c Func
	goto Label_8563; // 0x215e Jump
	
Label_8543:
	var_4449_int = 10; // 0x215f PushI
	var_4450_bool = var_4329_int == var_4449_int; // 0x2160 Eq
	if(var_4450_bool == 0) goto Label_8550; // 0x2161 JumpB
	var_4451_string = "ACHIEVEMENT_CLARA_9"; // 0x2162 PushS
	UnlockAchievement(var_4451_string); // 0x2163 Func
	goto Label_8563; // 0x2165 Jump
	
Label_8550:
	var_4452_int = 11; // 0x2166 PushI
	var_4453_bool = var_4329_int == var_4452_int; // 0x2167 Eq
	if(var_4453_bool == 0) goto Label_8557; // 0x2168 JumpB
	var_4454_string = "ACHIEVEMENT_CLARA_10"; // 0x2169 PushS
	UnlockAchievement(var_4454_string); // 0x216a Func
	goto Label_8563; // 0x216c Jump
	
Label_8557:
	var_4455_int = 12; // 0x216d PushI
	var_4456_bool = var_4329_int == var_4455_int; // 0x216e Eq
	if(var_4456_bool == 0) goto Label_8563; // 0x216f JumpB
	var_4457_string = "ACHIEVEMENT_CLARA_11"; // 0x2170 PushS
	UnlockAchievement(var_4457_string); // 0x2171 Func
	
Label_8300:
	var_4458_int = 0; // 0x206c PushV
	func_11434(var_4458_int); // 0x206d NEW_2
	var_4459_int = 1; // 0x206f PushI
	var_4460_bool = var_4458_int == var_4459_int; // 0x2070 Eq
	if(var_4460_bool == 0) goto Label_8319; // 0x2071 JumpB
	var_4461_string = "b1q01"; // 0x2072 PushS
	GetVariable(var_4461_string, var_4337_int); // 0x2073 Func
	var_4462_int = 1000; // 0x2075 PushI
	var_4463_bool = var_4337_int != var_4462_int; // 0x2076 Neq
	if(var_4463_bool == 0) goto Label_8319; // 0x2077 JumpB
	var_4335_bool = 1; // 0x2078 MovB
	var_4464_string = "ACHIEVEMENT_UP"; // 0x2079 PushS
	UnlockAchievement(var_4464_string); // 0x207a Func
	var_4465_string = "gameover_fail.xml"; // 0x207c PushS
	GameOver(var_4465_string); // 0x207d Func
}


func_81(var_585_bool, var_586_object, var_587_string)
{
	var_588_bool = 0; var_589_bool = 0; // 0x51 PushV
	var_590_string = "HasProperty"; // 0x52 PushS
	var_591_int = 2; // 0x53 PushI
	var_592_bool = IsFuncExist(var_586_object, var_590_string, var_591_int); // 0x54 FuncExist
	var_593_bool = var_592_bool == 0; // 0x55 Not
	if(var_593_bool == 0) goto Label_89; // 0x56 JumpB
	var_585_bool = 0; // 0x57 MovB
	return 2; // 0x58 Return
	
Label_89:
	HasProperty(var_587_string, var_589_bool); // 0x59 ObjFunc
	var_585_bool = var_589_bool; // 0x5b Mov
	return 2; // 0x5c Return
}


func_1110(var_791_bool, var_792_int, var_793_int)
{
	var_794_int = 0; var_795_int = 0; // 0x456 PushV
	var_796_int = 0; // 0x457 PushV
	func_11434(var_796_int); // 0x458 NEW_2
	var_795_int = var_796_int; // 0x459 Mov
	var_800_int = 1; // 0x45b PushI
	var_801_bool = var_795_int == var_800_int; // 0x45c Eq
	if(var_801_bool == 0) goto Label_1131; // 0x45d JumpB
	var_802_bool = 0; // 0x45e PushV
	var_802_bool = 0; // 0x45f MovB
	var_803_int = 0; // 0x460 PushI
	var_804_bool = var_792_int == var_803_int; // 0x461 Eq
	if(var_804_bool == 0) goto Label_1127; // 0x462 JumpB
	var_805_int = 21; // 0x463 PushI
	var_806_bool = var_793_int < var_805_int; // 0x464 LT
	if(var_806_bool == 0) goto Label_1127; // 0x465 JumpB
	var_802_bool = 1; // 0x466 MovB
	
Label_1127:
	if(var_802_bool == 0) goto Label_1130; // 0x467 JumpB
	var_791_bool = 1; // 0x468 MovB
	return 2; // 0x469 Return
	
Label_1130:
	goto Label_1139; // 0x46a Jump
	
Label_1139:
	var_791_bool = 0; // 0x473 MovB
	return 2; // 0x474 Return
	
Label_1131:
	var_807_int = 2; // 0x46b PushI
	var_808_bool = var_795_int == var_807_int; // 0x46c Eq
	if(var_808_bool == 0) goto Label_1139; // 0x46d JumpB
	var_809_int = 5; // 0x46e PushI
	var_810_bool = var_792_int == var_809_int; // 0x46f Eq
	if(var_810_bool == 0) goto Label_1139; // 0x470 JumpB
	var_791_bool = 1; // 0x471 MovB
	return 2; // 0x472 Return
}


func_11351(var_4772_object)
{
	var_4773_object = Obj(); var_4774_object = Obj(); // 0x2c57 PushV
	GetDiaryRoot(var_4774_object); // 0x2c58 Func
	var_4775_bool = var_4774_object == 0; // 0x2c5a Not
	if(var_4775_bool == 0) goto Label_11361; // 0x2c5b JumpB
	var_4776_string = "Can't retrieve diary root"; // 0x2c5c PushS
	Trace(var_4776_string); // 0x2c5d Func
	var_4772_object = 0; // 0x2c5f MovB
	return 2; // 0x2c60 Return
	
Label_11361:
	var_4772_object = var_4774_object; // 0x2c61 Mov
	return 2; // 0x2c62 Return
}


func_93(var_5874_bool, var_5875_object, var_5876_string, var_5877_float, var_5878_float, var_5879_float)
{
	var_5880_float = 0; var_5881_float = 0; // 0x5d PushV
	var_5882_bool = 0; var_5883_object = Obj(); var_5884_string = ""; // 0x5e PushV
	var_5883_object = var_5875_object; // 0x5f Mov
	var_5884_string = var_5876_string; // 0x60 Mov
	func_81(var_5882_bool, var_5883_object, var_5884_string); // 0x61 NEW_2
	var_5885_bool = var_5882_bool == 0; // 0x63 Not
	if(var_5885_bool == 0) goto Label_103; // 0x64 JumpB
	var_5874_bool = 0; // 0x65 MovB
	return 2; // 0x66 Return
	
Label_103:
	GetProperty(var_5876_string, var_5881_float); // 0x67 ObjFunc
	var_5886_float = 0; var_5887_float = 0; var_5888_float = 0; var_5889_float = 0; // 0x69 PushV
	var_5887_float = var_5881_float + var_5877_float; // 0x6a Add2
	var_5888_float = var_5878_float; // 0x6b Mov
	var_5889_float = var_5879_float; // 0x6c Mov
	func_115(var_5886_float, var_5887_float, var_5888_float, var_5889_float); // 0x6d NEW_2
	SetProperty(var_5876_string, var_5886_float); // 0x6f ObjFunc
	var_5874_bool = 1; // 0x71 MovB
	return 2; // 0x72 Return
}


func_11364(var_4763_bool, var_4764_object, var_4765_int)
{
	var_4766_object = Obj(); var_4767_object = Obj(); var_4768_int = 0; var_4769_object = Obj(); var_4770_object = Obj(); var_4771_int = 0; // 0x2c64 PushV
	var_4772_object = Obj(); // 0x2c65 PushV
	func_11351(var_4772_object); // 0x2c66 NEW_2
	var_4769_object = var_4772_object; // 0x2c67 Mov
	Find(var_4765_int, var_4770_object); // 0x2c69 ObjFunc
	var_4777_bool = var_4770_object == 0; // 0x2c6b Not
	if(var_4777_bool == 0) goto Label_11379; // 0x2c6c JumpB
	var_4778_string = "Can't find diary parent with id: "; // 0x2c6d PushS
	var_4779_int = var_4778_string + var_4765_int; // 0x2c6e Add
	Trace(var_4779_int); // 0x2c6f Func
	var_4763_bool = 0; // 0x2c71 MovB
	return 6; // 0x2c72 Return
	
Label_11379:
	AddChild(var_4764_object); // 0x2c73 ObjFunc
	var_4780_int = 7; // 0x2c75 PushI
	SendWorldWndMessage(var_4780_int); // 0x2c76 Func
	GetCategory(var_4771_int); // 0x2c78 ObjFunc
	SetDiarySection(var_4771_int); // 0x2c7a Func
	var_4763_bool = 0; // 0x2c7c MovB
	return 6; // 0x2c7d Return
}


func_4210(var_3428_int, var_3429_int, var_3430_int)
{
	var_3431_int = 0; var_3432_int = 0; var_3433_int = 0; var_3434_int = 0; var_3435_int = 0; var_3436_int = 0; var_3437_int = 0; var_3438_int = 0; // 0x1072 PushV
	var_3439_bool = 0; // 0x1073 PushV
	var_3439_bool = 0; // 0x1074 MovB
	var_3440_int = 8; // 0x1075 PushI
	var_3441_bool = var_3430_int > var_3440_int; // 0x1076 GT
	if(var_3441_bool == 0) goto Label_4220; // 0x1077 JumpB
	var_3442_int = 21; // 0x1078 PushI
	var_3443_bool = var_3430_int < var_3442_int; // 0x1079 LT
	if(var_3443_bool == 0) goto Label_4220; // 0x107a JumpB
	var_3439_bool = 1; // 0x107b MovB
	
Label_4220:
	if(var_3439_bool == 0) goto Label_4297; // 0x107c JumpB
	var_3444_int = 0; var_3445_string = ""; var_3446_string = ""; var_3447_int = 0; // 0x107d PushV
	var_3444_int = var_3428_int; // 0x107e Mov
	var_3445_string = "pers_rat"; // 0x107f MovS
	var_3446_string = "rat.xml"; // 0x1080 MovS
	var_3447_int = 4; // 0x1081 MovI
	func_503(var_3444_int, var_3445_string, var_3446_string, var_3447_int); // 0x1082 NEW_2
	var_3448_int = 0; var_3449_string = ""; var_3450_string = ""; var_3451_int = 0; // 0x1084 PushV
	var_3448_int = var_3428_int; // 0x1085 Mov
	var_3449_string = "pers_alkash"; // 0x1086 MovS
	var_3450_string = "alkash.xml"; // 0x1087 MovS
	var_3451_int = 2; // 0x1088 MovI
	func_503(var_3448_int, var_3449_string, var_3450_string, var_3451_int); // 0x1089 NEW_2
	var_3452_int = 0; var_3453_string = ""; var_3454_string = ""; var_3455_int = 0; // 0x108b PushV
	var_3452_int = var_3428_int; // 0x108c Mov
	var_3453_string = "pers_dohodyaga"; // 0x108d MovS
	var_3454_string = "dohodyaga.xml"; // 0x108e MovS
	var_3455_int = 1; // 0x108f MovI
	func_503(var_3452_int, var_3453_string, var_3454_string, var_3455_int); // 0x1090 NEW_2
	var_3456_int = 2; // 0x1092 PushI
	var_3457_float = 0; var_3458_int = 0; // 0x1093 PushV
	var_3458_int = var_3429_int; // 0x1094 Mov
	func_1165(var_3457_float, var_3458_int); // 0x1095 NEW_2
	var_3435_int = var_3456_int * var_3457_float; // 0x1097 Mult2
	var_3459_int = var_3435_int; // 0x1098 Push
	if(var_3459_int == 0) goto Label_4257; // 0x1099 JumpB
	var_3460_int = 0; var_3461_string = ""; var_3462_string = ""; var_3463_int = 0; // 0x109a PushV
	var_3460_int = var_3428_int; // 0x109b Mov
	var_3461_string = "pers_grabitel"; // 0x109c MovS
	var_3462_string = "grabitel.xml"; // 0x109d MovS
	var_3463_int = var_3435_int; // 0x109e Mov
	func_503(var_3460_int, var_3461_string, var_3462_string, var_3463_int); // 0x109f NEW_2
	
Label_4257:
	var_3464_int = 1; // 0x10a1 PushI
	var_3465_int = var_3429_int + var_3464_int; // 0x10a2 Add
	var_3466_int = 2; // 0x10a3 PushI
	var_3467_bool = var_3465_int >= var_3466_int; // 0x10a4 GE
	if(var_3467_bool == 0) goto Label_4281; // 0x10a5 JumpB
	var_3468_int = 0; var_3469_string = ""; var_3470_string = ""; var_3471_int = 0; // 0x10a6 PushV
	var_3468_int = var_3428_int; // 0x10a7 Mov
	var_3469_string = "pers_patrool"; // 0x10a8 MovS
	var_3470_string = "patrol.xml"; // 0x10a9 MovS
	var_3471_int = 2; // 0x10aa MovI
	func_503(var_3468_int, var_3469_string, var_3470_string, var_3471_int); // 0x10ab NEW_2
	var_3472_bool = 0; var_3473_int = 0; // 0x10ad PushV
	var_3473_int = var_3429_int; // 0x10ae Mov
	func_1372(var_3472_bool, var_3473_int); // 0x10af NEW_2
	if(var_3472_bool == 0) goto Label_4281; // 0x10b1 JumpB
	var_3474_int = 0; var_3475_string = ""; var_3476_string = ""; var_3477_int = 0; // 0x10b2 PushV
	var_3474_int = var_3428_int; // 0x10b3 Mov
	var_3475_string = "pers_soldat_hand"; // 0x10b4 MovS
	var_3476_string = "soldier_patrol.xml"; // 0x10b5 MovS
	var_3477_int = 1; // 0x10b6 MovI
	func_503(var_3474_int, var_3475_string, var_3476_string, var_3477_int); // 0x10b7 NEW_2
	
Label_4281:
	var_3478_int = 1; // 0x10b9 PushI
	var_3479_float = 0; var_3480_int = 0; // 0x10ba PushV
	var_3480_int = var_3429_int; // 0x10bb Mov
	func_1255(var_3479_float, var_3480_int); // 0x10bc NEW_2
	var_3436_int = var_3478_int * var_3479_float; // 0x10be Mult2
	var_3481_int = var_3436_int; // 0x10bf Push
	if(var_3481_int == 0) goto Label_4296; // 0x10c0 JumpB
	var_3482_int = 0; var_3483_string = ""; var_3484_string = ""; var_3485_int = 0; // 0x10c1 PushV
	var_3482_int = var_3428_int; // 0x10c2 Mov
	var_3483_string = "pers_bomber"; // 0x10c3 MovS
	var_3484_string = "bomber.xml"; // 0x10c4 MovS
	var_3485_int = var_3436_int; // 0x10c5 Mov
	func_503(var_3482_int, var_3483_string, var_3484_string, var_3485_int); // 0x10c6 NEW_2
	
Label_4296:
	goto Label_4372; // 0x10c8 Jump
	
Label_4372:
	var_3486_bool = 0; var_3487_int = 0; // 0x1114 PushV
	var_3487_int = var_3429_int; // 0x1115 Mov
	func_1372(var_3486_bool, var_3487_int); // 0x1116 NEW_2
	if(var_3486_bool == 0) goto Label_4384; // 0x1118 JumpB
	var_3488_int = 0; var_3489_string = ""; var_3490_string = ""; var_3491_int = 0; // 0x1119 PushV
	var_3488_int = var_3428_int; // 0x111a Mov
	var_3489_string = "pers_sanitar"; // 0x111b MovS
	var_3490_string = "sanitar.xml"; // 0x111c MovS
	var_3491_int = 2; // 0x111d MovI
	func_503(var_3488_int, var_3489_string, var_3490_string, var_3491_int); // 0x111e NEW_2
	
Label_4384:
	return 8; // 0x1120 Return
	
Label_4297:
	var_3492_int = 0; var_3493_string = ""; var_3494_string = ""; var_3495_int = 0; // 0x10c9 PushV
	var_3492_int = var_3428_int; // 0x10ca Mov
	var_3493_string = "pers_rat"; // 0x10cb MovS
	var_3494_string = "rat.xml"; // 0x10cc MovS
	var_3495_int = 8; // 0x10cd MovI
	func_503(var_3492_int, var_3493_string, var_3494_string, var_3495_int); // 0x10ce NEW_2
	var_3496_int = 0; var_3497_string = ""; var_3498_string = ""; var_3499_int = 0; // 0x10d0 PushV
	var_3496_int = var_3428_int; // 0x10d1 Mov
	var_3497_string = "pers_alkash"; // 0x10d2 MovS
	var_3498_string = "alkash.xml"; // 0x10d3 MovS
	var_3499_int = 1; // 0x10d4 MovI
	func_503(var_3496_int, var_3497_string, var_3498_string, var_3499_int); // 0x10d5 NEW_2
	var_3500_int = 0; var_3501_string = ""; var_3502_string = ""; var_3503_int = 0; // 0x10d7 PushV
	var_3500_int = var_3428_int; // 0x10d8 Mov
	var_3501_string = "pers_dohodyaga"; // 0x10d9 MovS
	var_3502_string = "dohodyaga.xml"; // 0x10da MovS
	var_3503_int = 1; // 0x10db MovI
	func_503(var_3500_int, var_3501_string, var_3502_string, var_3503_int); // 0x10dc NEW_2
	var_3504_int = 3; // 0x10de PushI
	var_3505_float = 0; var_3506_int = 0; // 0x10df PushV
	var_3506_int = var_3429_int; // 0x10e0 Mov
	func_1165(var_3505_float, var_3506_int); // 0x10e1 NEW_2
	var_3437_int = var_3504_int * var_3505_float; // 0x10e3 Mult2
	var_3507_int = var_3437_int; // 0x10e4 Push
	if(var_3507_int == 0) goto Label_4333; // 0x10e5 JumpB
	var_3508_int = 0; var_3509_string = ""; var_3510_string = ""; var_3511_int = 0; // 0x10e6 PushV
	var_3508_int = var_3428_int; // 0x10e7 Mov
	var_3509_string = "pers_grabitel"; // 0x10e8 MovS
	var_3510_string = "grabitel.xml"; // 0x10e9 MovS
	var_3511_int = var_3437_int; // 0x10ea Mov
	func_503(var_3508_int, var_3509_string, var_3510_string, var_3511_int); // 0x10eb NEW_2
	
Label_4333:
	var_3512_int = 1; // 0x10ed PushI
	var_3513_int = var_3429_int + var_3512_int; // 0x10ee Add
	var_3514_int = 2; // 0x10ef PushI
	var_3515_bool = var_3513_int >= var_3514_int; // 0x10f0 GE
	if(var_3515_bool == 0) goto Label_4357; // 0x10f1 JumpB
	var_3516_int = 0; var_3517_string = ""; var_3518_string = ""; var_3519_int = 0; // 0x10f2 PushV
	var_3516_int = var_3428_int; // 0x10f3 Mov
	var_3517_string = "pers_patrool"; // 0x10f4 MovS
	var_3518_string = "patrol.xml"; // 0x10f5 MovS
	var_3519_int = 1; // 0x10f6 MovI
	func_503(var_3516_int, var_3517_string, var_3518_string, var_3519_int); // 0x10f7 NEW_2
	var_3520_bool = 0; var_3521_int = 0; // 0x10f9 PushV
	var_3521_int = var_3429_int; // 0x10fa Mov
	func_1372(var_3520_bool, var_3521_int); // 0x10fb NEW_2
	if(var_3520_bool == 0) goto Label_4357; // 0x10fd JumpB
	var_3522_int = 0; var_3523_string = ""; var_3524_string = ""; var_3525_int = 0; // 0x10fe PushV
	var_3522_int = var_3428_int; // 0x10ff Mov
	var_3523_string = "pers_soldat_hand"; // 0x1100 MovS
	var_3524_string = "soldier_patrol.xml"; // 0x1101 MovS
	var_3525_int = 1; // 0x1102 MovI
	func_503(var_3522_int, var_3523_string, var_3524_string, var_3525_int); // 0x1103 NEW_2
	
Label_4357:
	var_3526_int = 1; // 0x1105 PushI
	var_3527_float = 0; var_3528_int = 0; // 0x1106 PushV
	var_3528_int = var_3429_int; // 0x1107 Mov
	func_1255(var_3527_float, var_3528_int); // 0x1108 NEW_2
	var_3438_int = var_3526_int * var_3527_float; // 0x110a Mult2
	var_3529_int = var_3438_int; // 0x110b Push
	if(var_3529_int == 0) goto Label_4372; // 0x110c JumpB
	var_3530_int = 0; var_3531_string = ""; var_3532_string = ""; var_3533_int = 0; // 0x110d PushV
	var_3530_int = var_3428_int; // 0x110e Mov
	var_3531_string = "pers_bomber"; // 0x110f MovS
	var_3532_string = "bomber.xml"; // 0x1110 MovS
	var_3533_int = var_3438_int; // 0x1111 Mov
	func_503(var_3530_int, var_3531_string, var_3532_string, var_3533_int); // 0x1112 NEW_2
}


func_115(var_5886_float, var_5887_float, var_5888_float, var_5889_float)
{
	var_5890_bool = var_5887_float < var_5888_float; // 0x74 LT
	if(var_5890_bool == 0) goto Label_120; // 0x75 JumpB
	var_5886_float = var_5888_float; // 0x76 Mov
	return 0; // 0x77 Return
	
Label_120:
	var_5891_bool = var_5887_float > var_5889_float; // 0x78 GT
	if(var_5891_bool == 0) goto Label_124; // 0x79 JumpB
	var_5886_float = var_5889_float; // 0x7a Mov
	return 0; // 0x7b Return
	
Label_124:
	var_5886_float = var_5887_float; // 0x7c Mov
	return 0; // 0x7d Return
}


func_1141(var_768_float, var_769_int)
{
	var_770_int = 1; // 0x476 PushI
	var_771_int = var_769_int + var_770_int; // 0x477 Add
	var_772_int = 7; // 0x478 PushI
	var_773_bool = var_771_int == var_772_int; // 0x479 Eq
	if(var_773_bool == 0) goto Label_1149; // 0x47a JumpB
	var_768_float = 2; // 0x47b MovI
	return 0; // 0x47c Return
	
Label_1149:
	var_774_int = 1; // 0x47d PushI
	var_775_int = var_769_int + var_774_int; // 0x47e Add
	var_776_int = 8; // 0x47f PushI
	var_777_bool = var_775_int == var_776_int; // 0x480 Eq
	if(var_777_bool == 0) goto Label_1156; // 0x481 JumpB
	var_768_float = 0; // 0x482 MovI
	return 0; // 0x483 Return
	
Label_1156:
	var_778_int = 1; // 0x484 PushI
	var_779_int = var_769_int + var_778_int; // 0x485 Add
	var_780_int = 1; // 0x486 PushI
	var_781_bool = var_779_int == var_780_int; // 0x487 Eq
	if(var_781_bool == 0) goto Label_1163; // 0x488 JumpB
	var_768_float = 0; // 0x489 MovI
	return 0; // 0x48a Return
	
Label_1163:
	var_768_float = 1; // 0x48b MovI
	return 0; // 0x48c Return
}


func_7286()
{
	var_314_string = "lc_house3_05_i2"; // 0x1c77 PushS
	add(var_314_string); // 0x1c78 ObjFunc
	var_315_string = "lc_house3_05"; // 0x1c7a PushS
	add(var_315_string); // 0x1c7b ObjFunc
	var_316_string = "lc_house3_06_i2"; // 0x1c7d PushS
	add(var_316_string); // 0x1c7e ObjFunc
	var_317_string = "lc_house3_06"; // 0x1c80 PushS
	add(var_317_string); // 0x1c81 ObjFunc
	var_318_string = "lc_House6_06"; // 0x1c83 PushS
	add(var_318_string); // 0x1c84 ObjFunc
	var_319_string = "lc_house3_04_i2"; // 0x1c86 PushS
	add(var_319_string); // 0x1c87 ObjFunc
	var_320_string = "lc_house3_04"; // 0x1c89 PushS
	add(var_320_string); // 0x1c8a ObjFunc
	var_321_string = "house3_plus_03_i2"; // 0x1c8c PushS
	add(var_321_string); // 0x1c8d ObjFunc
	return 0; // 0x1c8f Return
}


func_5238(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object)
{
	var_1302_int = 0; // 0x1477 PushI
	var_1303_bool = var_1297_int == var_1302_int; // 0x1478 Eq
	if(var_1303_bool == 0) goto Label_5278; // 0x1479 JumpB
	var_1304_int = 0; var_1305_bool = 0; // 0x147a PushV
	var_1304_int = 4; // 0x147b MovI
	var_1305_bool = 0; // 0x147c MovB
	func_796(var_1304_int, var_1305_bool); // 0x147d NEW_2
	var_1306_int = 0; var_1307_bool = 0; var_1308_int = 0; // 0x147f PushV
	var_1306_int = 4; // 0x1480 MovI
	var_1307_bool = 0; // 0x1481 MovB
	var_1308_int = 1; // 0x1482 MovI
	func_813(var_1306_int, var_1307_bool, var_1308_int); // 0x1483 NEW_2
	var_1309_int = 0; var_1310_int = 0; var_1311_object = Obj(); var_1312_object = Obj(); var_1313_object = Obj(); // 0x1485 PushV
	var_1309_int = 4; // 0x1486 MovI
	var_1310_int = var_1296_int; // 0x1487 Mov
	var_1311_object = var_1298_object; // 0x1488 Mov
	var_1312_object = var_1299_object; // 0x1489 Mov
	var_1313_object = var_1300_object; // 0x148a Mov
	func_622(var_1310_int, var_1311_object, var_1312_object, var_1313_object); // 0x148b NEW_2
	var_1314_object = Obj(); var_1315_int = 0; // 0x148d PushV
	var_1314_object = var_1301_object; // 0x148e Mov
	var_1315_int = 0; // 0x148f MovI
	func_305(var_1315_int); // 0x1490 NEW_2
	var_1316_int = 0; var_1317_bool = 0; var_1318_int = 0; // 0x1492 PushV
	var_1316_int = 4; // 0x1493 MovI
	var_1317_bool = 0; // 0x1494 MovB
	var_1318_int = 4; // 0x1495 MovI
	func_870(var_1316_int, var_1317_bool, var_1318_int); // 0x1496 NEW_2
	var_1319_int = 0; var_1320_bool = 0; var_1321_int = 0; // 0x1498 PushV
	var_1319_int = 4; // 0x1499 MovI
	var_1320_bool = 0; // 0x149a MovB
	var_1321_int = 4; // 0x149b MovI
	func_932(var_1319_int, var_1320_bool, var_1321_int); // 0x149c NEW_2
	
Label_5278:
	var_1322_int = 0; var_1323_int = 0; // 0x149e PushV
	var_1322_int = 4; // 0x149f MovI
	var_1323_int = var_1297_int; // 0x14a0 Mov
	func_1020(var_1322_int, var_1323_int); // 0x14a1 NEW_2
	var_1336_int = 0; var_1337_int = 0; var_1338_int = 0; // 0x14a3 PushV
	var_1336_int = 4; // 0x14a4 MovI
	var_1337_int = var_1296_int; // 0x14a5 Mov
	var_1338_int = var_1297_int; // 0x14a6 Mov
	func_1897(var_1336_int, var_1337_int, var_1338_int); // 0x14a7 NEW_2
	return 0; // 0x14a9 Return
}


func_6265()
{
	var_227_string = "r4_house_2_02"; // 0x187a PushS
	add(var_227_string); // 0x187b ObjFunc
	var_228_string = "r4_house3_03_i2"; // 0x187d PushS
	add(var_228_string); // 0x187e ObjFunc
	var_229_string = "r4_house3_03"; // 0x1880 PushS
	add(var_229_string); // 0x1881 ObjFunc
	var_230_string = "r4_house4_02_i2"; // 0x1883 PushS
	add(var_230_string); // 0x1884 ObjFunc
	var_231_string = "r4_house4_02"; // 0x1886 PushS
	add(var_231_string); // 0x1887 ObjFunc
	var_232_string = "r4_house4_01_i2"; // 0x1889 PushS
	add(var_232_string); // 0x188a ObjFunc
	var_233_string = "r4_house4_01"; // 0x188c PushS
	add(var_233_string); // 0x188d ObjFunc
	var_234_string = "r4_house3_02_i2"; // 0x188f PushS
	add(var_234_string); // 0x1890 ObjFunc
	var_235_string = "r4_house3_02"; // 0x1892 PushS
	add(var_235_string); // 0x1893 ObjFunc
	var_236_string = "r4_house_2_01"; // 0x1895 PushS
	add(var_236_string); // 0x1896 ObjFunc
	var_237_string = "r4_house3_01_i2"; // 0x1898 PushS
	add(var_237_string); // 0x1899 ObjFunc
	var_238_string = "r4_house3_01"; // 0x189b PushS
	add(var_238_string); // 0x189c ObjFunc
	var_239_string = "r4_house7_01"; // 0x189e PushS
	add(var_239_string); // 0x189f ObjFunc
	var_240_string = "r4_House6_01"; // 0x18a1 PushS
	add(var_240_string); // 0x18a2 ObjFunc
	var_241_string = "r4_house_2_03"; // 0x18a4 PushS
	add(var_241_string); // 0x18a5 ObjFunc
	var_242_string = "r4_House6_03"; // 0x18a7 PushS
	add(var_242_string); // 0x18a8 ObjFunc
	var_243_string = "r4_house_2_04"; // 0x18aa PushS
	add(var_243_string); // 0x18ab ObjFunc
	return 0; // 0x18ad Return
}


func_126(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x7e PushV
	CreateObjectVector(var_42_object); // 0x7f Func
	var_40_object = var_42_object; // 0x81 Mov
	return 2; // 0x82 Return
}


func_11392(var_5056_bool, var_5057_int)
{
	var_5058_object = Obj(); var_5059_object = Obj(); var_5060_object = Obj(); var_5061_object = Obj(); // 0x2c80 PushV
	var_5062_object = Obj(); // 0x2c81 PushV
	func_11351(var_5062_object); // 0x2c82 NEW_2
	var_5060_object = var_5062_object; // 0x2c83 Mov
	Find(var_5057_int, var_5061_object); // 0x2c85 ObjFunc
	var_5063_bool = var_5061_object == 0; // 0x2c87 Not
	if(var_5063_bool == 0) goto Label_11403; // 0x2c88 JumpB
	var_5056_bool = 0; // 0x2c89 MovB
	return 4; // 0x2c8a Return
	
Label_11403:
	Remove(); // 0x2c8b ObjFunc
	var_5056_bool = 1; // 0x2c8d MovB
	return 4; // 0x2c8e Return
}


func_132(var_4823_int, var_4824_string)
{
	var_4825_int = 0; var_4826_int = 0; // 0x84 PushV
	GetVariable(var_4824_string, var_4826_int); // 0x85 Func
	var_4823_int = var_4826_int; // 0x87 Mov
	return 2; // 0x88 Return
}


func_10374()
{
	var_5937_object = Obj(); var_5938_object = Obj(); var_5939_object = Obj(); var_5940_object = Obj(); // 0x2886 PushV
	var_5941_object = Obj(); // 0x2887 PushV
	func_11417(var_5941_object); // 0x2888 NEW_2
	var_5939_object = var_5941_object; // 0x2889 Mov
	var_5942_string = "k3q01AlexandrGotoAnna"; // 0x288b PushS
	FindMark(var_5940_object, var_5942_string); // 0x288c ObjFunc
	var_5943_object = var_5940_object; // 0x288e Push
	if(var_5943_object == 0) goto Label_10386; // 0x288f JumpB
	Remove(); // 0x2890 ObjFunc
	
Label_10386:
	var_5944_string = "k3q01AnnaGotoKapella"; // 0x2892 PushS
	FindMark(var_5940_object, var_5944_string); // 0x2893 ObjFunc
	var_5945_object = var_5940_object; // 0x2895 Push
	if(var_5945_object == 0) goto Label_10393; // 0x2896 JumpB
	Remove(); // 0x2897 ObjFunc
	
Label_10393:
	var_5946_string = "k3q01AnnaGotoMladVlad"; // 0x2899 PushS
	FindMark(var_5940_object, var_5946_string); // 0x289a ObjFunc
	var_5947_object = var_5940_object; // 0x289c Push
	if(var_5947_object == 0) goto Label_10400; // 0x289d JumpB
	Remove(); // 0x289e ObjFunc
	
Label_10400:
	var_5948_string = "k3q01KapellaGotoAnna"; // 0x28a0 PushS
	FindMark(var_5940_object, var_5948_string); // 0x28a1 ObjFunc
	var_5949_object = var_5940_object; // 0x28a3 Push
	if(var_5949_object == 0) goto Label_10407; // 0x28a4 JumpB
	Remove(); // 0x28a5 ObjFunc
	
Label_10407:
	var_5950_string = "k3q02JuliaGotoEva"; // 0x28a7 PushS
	FindMark(var_5940_object, var_5950_string); // 0x28a8 ObjFunc
	var_5951_object = var_5940_object; // 0x28aa Push
	if(var_5951_object == 0) goto Label_10414; // 0x28ab JumpB
	Remove(); // 0x28ac ObjFunc
	
Label_10414:
	var_5952_string = "k3q02KaterinaGotoJulia"; // 0x28ae PushS
	FindMark(var_5940_object, var_5952_string); // 0x28af ObjFunc
	var_5953_object = var_5940_object; // 0x28b1 Push
	if(var_5953_object == 0) goto Label_10421; // 0x28b2 JumpB
	Remove(); // 0x28b3 ObjFunc
	
Label_10421:
	var_5954_string = "k3q03AnnaGotoEva"; // 0x28b5 PushS
	FindMark(var_5940_object, var_5954_string); // 0x28b6 ObjFunc
	var_5955_object = var_5940_object; // 0x28b8 Push
	if(var_5955_object == 0) goto Label_10428; // 0x28b9 JumpB
	Remove(); // 0x28ba ObjFunc
	
Label_10428:
	var_5956_string = "k3q04KapellaGotoDanko"; // 0x28bc PushS
	FindMark(var_5940_object, var_5956_string); // 0x28bd ObjFunc
	var_5957_object = var_5940_object; // 0x28bf Push
	if(var_5957_object == 0) goto Label_10435; // 0x28c0 JumpB
	Remove(); // 0x28c1 ObjFunc
	
Label_10435:
	var_5958_string = "k3q03EvaGotoSklad"; // 0x28c3 PushS
	FindMark(var_5940_object, var_5958_string); // 0x28c4 ObjFunc
	var_5959_object = var_5940_object; // 0x28c6 Push
	if(var_5959_object == 0) goto Label_10442; // 0x28c7 JumpB
	Remove(); // 0x28c8 ObjFunc
	
Label_10442:
	var_5960_bool = 0; var_5961_int = 0; // 0x28ca PushV
	var_5961_int = 337; // 0x28cb MovI
	func_11392(var_5960_bool, var_5961_int); // 0x28cc NEW_2
	var_5962_bool = 0; var_5963_int = 0; // 0x28ce PushV
	var_5963_int = 344; // 0x28cf MovI
	func_11392(var_5962_bool, var_5963_int); // 0x28d0 NEW_2
	var_5964_bool = 0; var_5965_int = 0; // 0x28d2 PushV
	var_5965_int = 350; // 0x28d3 MovI
	func_11392(var_5964_bool, var_5965_int); // 0x28d4 NEW_2
	var_5966_bool = 0; var_5967_int = 0; // 0x28d6 PushV
	var_5967_int = 354; // 0x28d7 MovI
	func_11392(var_5966_bool, var_5967_int); // 0x28d8 NEW_2
	return 4; // 0x28da Return
}


func_137(var_4781_object, var_4782_string)
{
	var_4783_object = Obj(); var_4784_object = Obj(); var_4785_object = Obj(); var_4786_object = Obj(); // 0x89 PushV
	GetMainOutdoorScene(var_4785_object); // 0x8a Func
	var_4787_string = ".bin"; // 0x8c PushS
	var_4788_int = var_4782_string + var_4787_string; // 0x8d Add
	AddBlankActor(var_4786_object, var_4785_object, var_4782_string, var_4788_int); // 0x8e Func
	var_4781_object = var_4786_object; // 0x90 Mov
	return 4; // 0x91 Return
}


func_1165(var_3277_float, var_3278_int)
{
	var_3279_int = 1; // 0x48e PushI
	var_3280_int = var_3278_int + var_3279_int; // 0x48f Add
	var_3281_int = 1; // 0x490 PushI
	var_3282_bool = var_3280_int == var_3281_int; // 0x491 Eq
	if(var_3282_bool == 0) goto Label_1174; // 0x492 JumpB
	var_3277_float = 0; // 0x493 MovI
	return 0; // 0x494 Return
	
Label_1174:
	var_3283_int = 1; // 0x496 PushI
	var_3284_int = var_3278_int + var_3283_int; // 0x497 Add
	var_3285_int = 2; // 0x498 PushI
	var_3286_bool = var_3284_int == var_3285_int; // 0x499 Eq
	if(var_3286_bool == 0) goto Label_1182; // 0x49a JumpB
	var_3277_float = 0; // 0x49b MovI
	return 0; // 0x49c Return
	
Label_1182:
	var_3287_int = 1; // 0x49e PushI
	var_3288_int = var_3278_int + var_3287_int; // 0x49f Add
	var_3289_int = 3; // 0x4a0 PushI
	var_3290_bool = var_3288_int == var_3289_int; // 0x4a1 Eq
	if(var_3290_bool == 0) goto Label_1190; // 0x4a2 JumpB
	var_3277_float = 1; // 0x4a3 MovI
	return 0; // 0x4a4 Return
	
Label_1190:
	var_3291_int = 1; // 0x4a6 PushI
	var_3292_int = var_3278_int + var_3291_int; // 0x4a7 Add
	var_3293_int = 4; // 0x4a8 PushI
	var_3294_bool = var_3292_int == var_3293_int; // 0x4a9 Eq
	if(var_3294_bool == 0) goto Label_1198; // 0x4aa JumpB
	var_3277_float = 1; // 0x4ab MovI
	return 0; // 0x4ac Return
	
Label_1198:
	var_3295_int = 1; // 0x4ae PushI
	var_3296_int = var_3278_int + var_3295_int; // 0x4af Add
	var_3297_int = 5; // 0x4b0 PushI
	var_3298_bool = var_3296_int == var_3297_int; // 0x4b1 Eq
	if(var_3298_bool == 0) goto Label_1206; // 0x4b2 JumpB
	var_3277_float = 1; // 0x4b3 MovI
	return 0; // 0x4b4 Return
	
Label_1206:
	var_3299_int = 1; // 0x4b6 PushI
	var_3300_int = var_3278_int + var_3299_int; // 0x4b7 Add
	var_3301_int = 6; // 0x4b8 PushI
	var_3302_bool = var_3300_int == var_3301_int; // 0x4b9 Eq
	if(var_3302_bool == 0) goto Label_1214; // 0x4ba JumpB
	var_3277_float = 2; // 0x4bb MovI
	return 0; // 0x4bc Return
	
Label_1214:
	var_3303_int = 1; // 0x4be PushI
	var_3304_int = var_3278_int + var_3303_int; // 0x4bf Add
	var_3305_int = 7; // 0x4c0 PushI
	var_3306_bool = var_3304_int == var_3305_int; // 0x4c1 Eq
	if(var_3306_bool == 0) goto Label_1222; // 0x4c2 JumpB
	var_3277_float = 1; // 0x4c3 MovI
	return 0; // 0x4c4 Return
	
Label_1222:
	var_3307_int = 1; // 0x4c6 PushI
	var_3308_int = var_3278_int + var_3307_int; // 0x4c7 Add
	var_3309_int = 8; // 0x4c8 PushI
	var_3310_bool = var_3308_int == var_3309_int; // 0x4c9 Eq
	if(var_3310_bool == 0) goto Label_1230; // 0x4ca JumpB
	var_3277_float = 1; // 0x4cb MovI
	return 0; // 0x4cc Return
	
Label_1230:
	var_3311_int = 1; // 0x4ce PushI
	var_3312_int = var_3278_int + var_3311_int; // 0x4cf Add
	var_3313_int = 9; // 0x4d0 PushI
	var_3314_bool = var_3312_int == var_3313_int; // 0x4d1 Eq
	if(var_3314_bool == 0) goto Label_1238; // 0x4d2 JumpB
	var_3277_float = 1; // 0x4d3 MovI
	return 0; // 0x4d4 Return
	
Label_1238:
	var_3315_int = 1; // 0x4d6 PushI
	var_3316_int = var_3278_int + var_3315_int; // 0x4d7 Add
	var_3317_int = 10; // 0x4d8 PushI
	var_3318_bool = var_3316_int == var_3317_int; // 0x4d9 Eq
	if(var_3318_bool == 0) goto Label_1246; // 0x4da JumpB
	var_3277_float = 1; // 0x4db MovI
	return 0; // 0x4dc Return
	
Label_1246:
	var_3319_int = 1; // 0x4de PushI
	var_3320_int = var_3278_int + var_3319_int; // 0x4df Add
	var_3321_int = 11; // 0x4e0 PushI
	var_3322_bool = var_3320_int == var_3321_int; // 0x4e1 Eq
	if(var_3322_bool == 0) goto Label_1253; // 0x4e2 JumpB
	var_3277_float = 1; // 0x4e3 MovI
	return 0; // 0x4e4 Return
	
Label_1253:
	var_3277_float = 0; // 0x4e5 MovI
	return 0; // 0x4e6 Return
}


func_7312(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object)
{
	var_1953_int = 0; // 0x1c91 PushI
	var_1954_bool = var_1948_int == var_1953_int; // 0x1c92 Eq
	if(var_1954_bool == 0) goto Label_7352; // 0x1c93 JumpB
	var_1955_int = 0; var_1956_bool = 0; // 0x1c94 PushV
	var_1955_int = 15; // 0x1c95 MovI
	var_1956_bool = 0; // 0x1c96 MovB
	func_796(var_1955_int, var_1956_bool); // 0x1c97 NEW_2
	var_1957_int = 0; var_1958_bool = 0; var_1959_int = 0; // 0x1c99 PushV
	var_1957_int = 15; // 0x1c9a MovI
	var_1958_bool = 0; // 0x1c9b MovB
	var_1959_int = 1; // 0x1c9c MovI
	func_813(var_1957_int, var_1958_bool, var_1959_int); // 0x1c9d NEW_2
	var_1960_int = 0; var_1961_int = 0; var_1962_object = Obj(); var_1963_object = Obj(); var_1964_object = Obj(); // 0x1c9f PushV
	var_1960_int = 15; // 0x1ca0 MovI
	var_1961_int = var_1947_int; // 0x1ca1 Mov
	var_1962_object = var_1949_object; // 0x1ca2 Mov
	var_1963_object = var_1950_object; // 0x1ca3 Mov
	var_1964_object = var_1951_object; // 0x1ca4 Mov
	func_622(var_1961_int, var_1962_object, var_1963_object, var_1964_object); // 0x1ca5 NEW_2
	var_1965_object = Obj(); var_1966_int = 0; // 0x1ca7 PushV
	var_1965_object = var_1952_object; // 0x1ca8 Mov
	var_1966_int = 0; // 0x1ca9 MovI
	func_305(var_1966_int); // 0x1caa NEW_2
	var_1967_int = 0; var_1968_bool = 0; var_1969_int = 0; // 0x1cac PushV
	var_1967_int = 15; // 0x1cad MovI
	var_1968_bool = 0; // 0x1cae MovB
	var_1969_int = 5; // 0x1caf MovI
	func_870(var_1967_int, var_1968_bool, var_1969_int); // 0x1cb0 NEW_2
	var_1970_int = 0; var_1971_bool = 0; var_1972_int = 0; // 0x1cb2 PushV
	var_1970_int = 15; // 0x1cb3 MovI
	var_1971_bool = 0; // 0x1cb4 MovB
	var_1972_int = 5; // 0x1cb5 MovI
	func_932(var_1970_int, var_1971_bool, var_1972_int); // 0x1cb6 NEW_2
	
Label_7352:
	var_1973_int = 0; var_1974_int = 0; // 0x1cb8 PushV
	var_1973_int = 15; // 0x1cb9 MovI
	var_1974_int = var_1948_int; // 0x1cba Mov
	func_1087(var_1973_int, var_1974_int); // 0x1cbb NEW_2
	var_1975_int = 0; var_1976_int = 0; var_1977_int = 0; // 0x1cbd PushV
	var_1975_int = 15; // 0x1cbe MovI
	var_1976_int = var_1947_int; // 0x1cbf Mov
	var_1977_int = var_1948_int; // 0x1cc0 Mov
	func_1376(var_1975_int, var_1976_int, var_1977_int); // 0x1cc1 NEW_2
	return 0; // 0x1cc3 Return
}


func_11409(var_4832_int, var_4833_int, var_4834_int, var_4835_float)
{
	var_4836_int = 0; var_4837_int = 0; // 0x2c91 PushV
	AddMessage(var_4833_int, var_4834_int, var_4835_float, var_4837_int); // 0x2c92 Func
	var_4838_int = 6; // 0x2c94 PushI
	SendWorldWndMessage(var_4838_int); // 0x2c95 Func
	var_4832_int = var_4837_int; // 0x2c97 Mov
	return 2; // 0x2c98 Return
}


func_148(var_5552_object, var_5553_string)
{
	var_5554_object = Obj(); var_5555_object = Obj(); var_5556_object = Obj(); var_5557_object = Obj(); // 0x94 PushV
	GetMainOutdoorScene(var_5556_object); // 0x95 Func
	var_5558_string = ".xml"; // 0x97 PushS
	var_5559_int = var_5553_string + var_5558_string; // 0x98 Add
	AddBlankActorFromXml(var_5557_object, var_5556_object, var_5553_string, var_5559_int); // 0x99 Func
	var_5552_object = var_5557_object; // 0x9b Mov
	return 4; // 0x9c Return
}


func_11417(var_5171_object)
{
	var_5172_object = Obj(); var_5173_object = Obj(); var_5174_object = Obj(); var_5175_object = Obj(); // 0x2c99 PushV
	GetMainOutdoorScene(var_5174_object); // 0x2c9a Func
	var_5176_bool = var_5174_object == 0; // 0x2c9c NullEq
	if(var_5176_bool == 0) goto Label_11428; // 0x2c9d JumpB
	var_5177_string = "Can't find main outdoor scene"; // 0x2c9e PushS
	Trace(var_5177_string); // 0x2c9f Func
	var_5175_object = 0; // 0x2ca1 SetNull
	var_5171_object = var_5175_object; // 0x2ca2 Mov
	return 4; // 0x2ca3 Return
	
Label_11428:
	GetMap(var_5175_object); // 0x2ca4 ObjFunc
	var_5171_object = var_5175_object; // 0x2ca6 Mov
	return 4; // 0x2ca7 Return
}


func_2206(var_750_int, var_751_int, var_752_int)
{
	var_753_int = 0; var_754_int = 0; // 0x89e PushV
	var_755_int = 1; // 0x89f PushI
	var_756_int = var_751_int + var_755_int; // 0x8a0 Add
	var_757_int = 12; // 0x8a1 PushI
	var_758_bool = var_756_int == var_757_int; // 0x8a2 Eq
	if(var_758_bool == 0) goto Label_2213; // 0x8a3 JumpB
	return 2; // 0x8a4 Return
	
Label_2213:
	var_759_bool = 0; // 0x8a5 PushV
	var_759_bool = 0; // 0x8a6 MovB
	var_760_bool = 0; // 0x8a7 PushV
	var_760_bool = 1; // 0x8a8 MovB
	var_761_int = 7; // 0x8a9 PushI
	var_762_bool = var_752_int < var_761_int; // 0x8aa LT
	if(var_762_bool == 0) goto Label_2224; // 0x8ab JumpB
	var_763_int = 21; // 0x8ac PushI
	var_764_bool = var_752_int > var_763_int; // 0x8ad GT
	if(var_764_bool == 0) goto Label_2224; // 0x8ae JumpB
	var_760_bool = 0; // 0x8af MovB
	
Label_2224:
	if(var_760_bool == 0) goto Label_2229; // 0x8b0 JumpB
	var_765_int = 0; // 0x8b1 PushI
	var_766_bool = var_751_int != var_765_int; // 0x8b2 Neq
	if(var_766_bool == 0) goto Label_2229; // 0x8b3 JumpB
	var_759_bool = 1; // 0x8b4 MovB
	
Label_2229:
	if(var_759_bool == 0) goto Label_2245; // 0x8b5 JumpB
	var_767_int = 1; // 0x8b6 PushI
	var_768_float = 0; var_769_int = 0; // 0x8b7 PushV
	var_769_int = var_751_int; // 0x8b8 Mov
	func_1141(var_768_float, var_769_int); // 0x8b9 NEW_2
	var_754_int = var_767_int * var_768_float; // 0x8bb Mult2
	var_782_int = var_754_int; // 0x8bc Push
	if(var_782_int == 0) goto Label_2245; // 0x8bd JumpB
	var_783_int = 0; var_784_string = ""; var_785_string = ""; var_786_int = 0; // 0x8be PushV
	var_783_int = var_750_int; // 0x8bf Mov
	var_784_string = "pers_grabitel"; // 0x8c0 MovS
	var_785_string = "grabitel.xml"; // 0x8c1 MovS
	var_786_int = var_754_int; // 0x8c2 Mov
	func_503(var_783_int, var_784_string, var_785_string, var_786_int); // 0x8c3 NEW_2
	
Label_2245:
	var_791_bool = 0; var_792_int = 0; var_793_int = 0; // 0x8c5 PushV
	var_792_int = var_751_int; // 0x8c6 Mov
	var_793_int = var_752_int; // 0x8c7 Mov
	func_1110(var_791_bool, var_792_int, var_793_int); // 0x8c8 NEW_2
	if(var_791_bool == 0) goto Label_2308; // 0x8ca JumpB
	var_811_int = 0; var_812_string = ""; var_813_string = ""; var_814_int = 0; // 0x8cb PushV
	var_811_int = var_750_int; // 0x8cc Mov
	var_812_string = "pers_unosha"; // 0x8cd MovS
	var_813_string = "unosha_attacker.xml"; // 0x8ce MovS
	var_814_int = 1; // 0x8cf MovI
	func_503(var_811_int, var_812_string, var_813_string, var_814_int); // 0x8d0 NEW_2
	var_815_int = 0; var_816_string = ""; var_817_string = ""; var_818_int = 0; // 0x8d2 PushV
	var_815_int = var_750_int; // 0x8d3 Mov
	var_816_string = "pers_unosha"; // 0x8d4 MovS
	var_817_string = "unosha2_attacker.xml"; // 0x8d5 MovS
	var_818_int = 1; // 0x8d6 MovI
	func_503(var_815_int, var_816_string, var_817_string, var_818_int); // 0x8d7 NEW_2
	var_819_int = 0; var_820_string = ""; var_821_string = ""; var_822_int = 0; // 0x8d9 PushV
	var_819_int = var_750_int; // 0x8da Mov
	var_820_string = "pers_worker"; // 0x8db MovS
	var_821_string = "worker_attacker.xml"; // 0x8dc MovS
	var_822_int = 1; // 0x8dd MovI
	func_503(var_819_int, var_820_string, var_821_string, var_822_int); // 0x8de NEW_2
	var_823_int = 0; var_824_string = ""; var_825_string = ""; var_826_int = 0; // 0x8e0 PushV
	var_823_int = var_750_int; // 0x8e1 Mov
	var_824_string = "pers_worker"; // 0x8e2 MovS
	var_825_string = "worker2_attacker.xml"; // 0x8e3 MovS
	var_826_int = 1; // 0x8e4 MovI
	func_503(var_823_int, var_824_string, var_825_string, var_826_int); // 0x8e5 NEW_2
	var_827_int = 0; var_828_string = ""; var_829_string = ""; var_830_int = 0; // 0x8e7 PushV
	var_827_int = var_750_int; // 0x8e8 Mov
	var_828_string = "pers_boy"; // 0x8e9 MovS
	var_829_string = "boy.xml"; // 0x8ea MovS
	var_830_int = 1; // 0x8eb MovI
	func_503(var_827_int, var_828_string, var_829_string, var_830_int); // 0x8ec NEW_2
	var_831_int = 0; var_832_string = ""; var_833_string = ""; var_834_int = 0; // 0x8ee PushV
	var_831_int = var_750_int; // 0x8ef Mov
	var_832_string = "pers_alkash"; // 0x8f0 MovS
	var_833_string = "alkash.xml"; // 0x8f1 MovS
	var_834_int = 1; // 0x8f2 MovI
	func_503(var_831_int, var_832_string, var_833_string, var_834_int); // 0x8f3 NEW_2
	var_835_int = 0; var_836_string = ""; var_837_string = ""; var_838_int = 0; // 0x8f5 PushV
	var_835_int = var_750_int; // 0x8f6 Mov
	var_836_string = "pers_girl"; // 0x8f7 MovS
	var_837_string = "girl.xml"; // 0x8f8 MovS
	var_838_int = 1; // 0x8f9 MovI
	func_503(var_835_int, var_836_string, var_837_string, var_838_int); // 0x8fa NEW_2
	var_839_int = 0; var_840_string = ""; var_841_string = ""; var_842_int = 0; // 0x8fc PushV
	var_839_int = var_750_int; // 0x8fd Mov
	var_840_string = "pers_girl"; // 0x8fe MovS
	var_841_string = "girl2.xml"; // 0x8ff MovS
	var_842_int = 1; // 0x900 MovI
	func_503(var_839_int, var_840_string, var_841_string, var_842_int); // 0x901 NEW_2
	goto Label_2382; // 0x903 Jump
	
Label_2382:
	return 2; // 0x94e Return
	
Label_2308:
	var_843_bool = 0; // 0x904 PushV
	var_843_bool = 0; // 0x905 MovB
	var_844_int = 8; // 0x906 PushI
	var_845_bool = var_752_int > var_844_int; // 0x907 GT
	if(var_845_bool == 0) goto Label_2317; // 0x908 JumpB
	var_846_int = 21; // 0x909 PushI
	var_847_bool = var_752_int < var_846_int; // 0x90a LT
	if(var_847_bool == 0) goto Label_2317; // 0x90b JumpB
	var_843_bool = 1; // 0x90c MovB
	
Label_2317:
	if(var_843_bool == 0) goto Label_2361; // 0x90d JumpB
	var_848_int = 0; var_849_string = ""; var_850_string = ""; var_851_int = 0; // 0x90e PushV
	var_848_int = var_750_int; // 0x90f Mov
	var_849_string = "pers_boy"; // 0x910 MovS
	var_850_string = "boy.xml"; // 0x911 MovS
	var_851_int = 1; // 0x912 MovI
	func_503(var_848_int, var_849_string, var_850_string, var_851_int); // 0x913 NEW_2
	var_852_int = 0; var_853_string = ""; var_854_string = ""; var_855_int = 0; // 0x915 PushV
	var_852_int = var_750_int; // 0x916 Mov
	var_853_string = "pers_alkash"; // 0x917 MovS
	var_854_string = "alkash.xml"; // 0x918 MovS
	var_855_int = 1; // 0x919 MovI
	func_503(var_852_int, var_853_string, var_854_string, var_855_int); // 0x91a NEW_2
	var_856_int = 0; var_857_string = ""; var_858_string = ""; var_859_int = 0; // 0x91c PushV
	var_856_int = var_750_int; // 0x91d Mov
	var_857_string = "pers_girl"; // 0x91e MovS
	var_858_string = "girl.xml"; // 0x91f MovS
	var_859_int = 1; // 0x920 MovI
	func_503(var_856_int, var_857_string, var_858_string, var_859_int); // 0x921 NEW_2
	var_860_int = 0; var_861_string = ""; var_862_string = ""; var_863_int = 0; // 0x923 PushV
	var_860_int = var_750_int; // 0x924 Mov
	var_861_string = "pers_girl"; // 0x925 MovS
	var_862_string = "girl2.xml"; // 0x926 MovS
	var_863_int = 1; // 0x927 MovI
	func_503(var_860_int, var_861_string, var_862_string, var_863_int); // 0x928 NEW_2
	var_864_int = 0; var_865_string = ""; var_866_string = ""; var_867_int = 0; // 0x92a PushV
	var_864_int = var_750_int; // 0x92b Mov
	var_865_string = "pers_worker"; // 0x92c MovS
	var_866_string = "worker.xml"; // 0x92d MovS
	var_867_int = 2; // 0x92e MovI
	func_503(var_864_int, var_865_string, var_866_string, var_867_int); // 0x92f NEW_2
	var_868_int = 0; var_869_string = ""; var_870_string = ""; var_871_int = 0; // 0x931 PushV
	var_868_int = var_750_int; // 0x932 Mov
	var_869_string = "pers_worker"; // 0x933 MovS
	var_870_string = "worker2.xml"; // 0x934 MovS
	var_871_int = 2; // 0x935 MovI
	func_503(var_868_int, var_869_string, var_870_string, var_871_int); // 0x936 NEW_2
	goto Label_2382; // 0x938 Jump
	
Label_2361:
	var_872_int = 0; var_873_string = ""; var_874_string = ""; var_875_int = 0; // 0x939 PushV
	var_872_int = var_750_int; // 0x93a Mov
	var_873_string = "pers_alkash"; // 0x93b MovS
	var_874_string = "alkash.xml"; // 0x93c MovS
	var_875_int = 1; // 0x93d MovI
	func_503(var_872_int, var_873_string, var_874_string, var_875_int); // 0x93e NEW_2
	var_876_int = 0; var_877_string = ""; var_878_string = ""; var_879_int = 0; // 0x940 PushV
	var_876_int = var_750_int; // 0x941 Mov
	var_877_string = "pers_worker"; // 0x942 MovS
	var_878_string = "worker.xml"; // 0x943 MovS
	var_879_int = 1; // 0x944 MovI
	func_503(var_876_int, var_877_string, var_878_string, var_879_int); // 0x945 NEW_2
	var_880_int = 0; var_881_string = ""; var_882_string = ""; var_883_int = 0; // 0x947 PushV
	var_880_int = var_750_int; // 0x948 Mov
	var_881_string = "pers_worker"; // 0x949 MovS
	var_882_string = "worker2.xml"; // 0x94a MovS
	var_883_int = 1; // 0x94b MovI
	func_503(var_880_int, var_881_string, var_882_string, var_883_int); // 0x94c NEW_2
}


func_159(var_329_object, var_331_string, var_332_string, var_333_string)
{
	var_335_bool = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_object = Obj(); var_339_bool = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_object = Obj(); // 0x9f PushV
	GetLocator(var_331_string, var_339_bool, var_340_cvector, var_341_cvector); // 0xa0 ObjFunc
	var_343_bool = var_339_bool == 0; // 0xa2 Not
	if(var_343_bool == 0) goto Label_172; // 0xa3 JumpB
	var_344_string = "Locator "; // 0xa4 PushS
	var_345_int = var_344_string + var_331_string; // 0xa5 Add
	var_346_string = " doesn't exist"; // 0xa6 PushS
	var_347_int = var_345_int + var_346_string; // 0xa7 Add
	Trace(var_347_int); // 0xa8 Func
	var_342_object = 0; // 0xaa SetNull
	goto Label_174; // 0xab Jump
	
Label_174:
	var_329_object = var_342_object; // 0xae Mov
	return 8; // 0xaf Return
	
Label_172:
	AddStationaryActor(var_342_object, var_340_cvector, var_341_cvector, var_332_string, var_333_string); // 0xac ObjFunc
}


func_9376(var_1988_int, var_1989_int, var_1990_int)
{
	var_1991_object = Obj(); var_1992_object = Obj(); var_1993_object = Obj(); var_1994_object = Obj(); var_1995_object = Obj(); var_1996_object = Obj(); var_1997_object = Obj(); var_1998_object = Obj(); // 0x24a0 PushV
	var_1999_object = GlobalVars[8]; // 0x24a1 PushGE
	get(var_1995_object, var_1988_int); // 0x24a2 ObjFunc
	var_2000_object = GlobalVars[9]; // 0x24a4 PushGE
	get(var_1996_object, var_1988_int); // 0x24a5 ObjFunc
	var_2001_object = GlobalVars[10]; // 0x24a7 PushGE
	get(var_1997_object, var_1988_int); // 0x24a8 ObjFunc
	var_2002_object = GlobalVars[13]; // 0x24aa PushGE
	get(var_1998_object, var_1988_int); // 0x24ab ObjFunc
	var_2003_int = 0; // 0x24ad PushI
	var_2004_bool = var_1988_int == var_2003_int; // 0x24ae Eq
	if(var_2004_bool == 0) goto Label_9402; // 0x24af JumpB
	var_2005_int = 0; var_2006_int = 0; var_2007_object = Obj(); var_2008_object = Obj(); var_2009_object = Obj(); var_2010_object = Obj(); // 0x24b0 PushV
	var_2005_int = var_1989_int; // 0x24b1 Mov
	var_2006_int = var_1990_int; // 0x24b2 Mov
	var_2007_object = var_1995_object; // 0x24b3 Mov
	var_2008_object = var_1996_object; // 0x24b4 Mov
	var_2009_object = var_1997_object; // 0x24b5 Mov
	var_2010_object = var_1998_object; // 0x24b6 Mov
	func_4439(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object); // 0x24b7 NEW_2
	goto Label_9596; // 0x24b9 Jump
	
Label_9596:
	return 8; // 0x257c Return
	
Label_9402:
	var_2273_int = 1; // 0x24ba PushI
	var_2274_bool = var_1988_int == var_2273_int; // 0x24bb Eq
	if(var_2274_bool == 0) goto Label_9415; // 0x24bc JumpB
	var_2275_int = 0; var_2276_int = 0; var_2277_object = Obj(); var_2278_object = Obj(); var_2279_object = Obj(); var_2280_object = Obj(); // 0x24bd PushV
	var_2275_int = var_1989_int; // 0x24be Mov
	var_2276_int = var_1990_int; // 0x24bf Mov
	var_2277_object = var_1995_object; // 0x24c0 Mov
	var_2278_object = var_1996_object; // 0x24c1 Mov
	var_2279_object = var_1997_object; // 0x24c2 Mov
	var_2280_object = var_1998_object; // 0x24c3 Mov
	func_4636(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object); // 0x24c4 NEW_2
	goto Label_9596; // 0x24c6 Jump
	
Label_9415:
	var_2405_int = 2; // 0x24c7 PushI
	var_2406_bool = var_1988_int == var_2405_int; // 0x24c8 Eq
	if(var_2406_bool == 0) goto Label_9428; // 0x24c9 JumpB
	var_2407_int = 0; var_2408_int = 0; var_2409_object = Obj(); var_2410_object = Obj(); var_2411_object = Obj(); var_2412_object = Obj(); // 0x24ca PushV
	var_2407_int = var_1989_int; // 0x24cb Mov
	var_2408_int = var_1990_int; // 0x24cc Mov
	var_2409_object = var_1995_object; // 0x24cd Mov
	var_2410_object = var_1996_object; // 0x24ce Mov
	var_2411_object = var_1997_object; // 0x24cf Mov
	var_2412_object = var_1998_object; // 0x24d0 Mov
	func_4842(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object); // 0x24d1 NEW_2
	goto Label_9596; // 0x24d3 Jump
	
Label_9428:
	var_2551_int = 3; // 0x24d4 PushI
	var_2552_bool = var_1988_int == var_2551_int; // 0x24d5 Eq
	if(var_2552_bool == 0) goto Label_9441; // 0x24d6 JumpB
	var_2553_int = 0; var_2554_int = 0; var_2555_object = Obj(); var_2556_object = Obj(); var_2557_object = Obj(); var_2558_object = Obj(); // 0x24d7 PushV
	var_2553_int = var_1989_int; // 0x24d8 Mov
	var_2554_int = var_1990_int; // 0x24d9 Mov
	var_2555_object = var_1995_object; // 0x24da Mov
	var_2556_object = var_1996_object; // 0x24db Mov
	var_2557_object = var_1997_object; // 0x24dc Mov
	var_2558_object = var_1998_object; // 0x24dd Mov
	func_5072(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object); // 0x24de NEW_2
	goto Label_9596; // 0x24e0 Jump
	
Label_9441:
	var_2584_int = 4; // 0x24e1 PushI
	var_2585_bool = var_1988_int == var_2584_int; // 0x24e2 Eq
	if(var_2585_bool == 0) goto Label_9454; // 0x24e3 JumpB
	var_2586_int = 0; var_2587_int = 0; var_2588_object = Obj(); var_2589_object = Obj(); var_2590_object = Obj(); var_2591_object = Obj(); // 0x24e4 PushV
	var_2586_int = var_1989_int; // 0x24e5 Mov
	var_2587_int = var_1990_int; // 0x24e6 Mov
	var_2588_object = var_1995_object; // 0x24e7 Mov
	var_2589_object = var_1996_object; // 0x24e8 Mov
	var_2590_object = var_1997_object; // 0x24e9 Mov
	var_2591_object = var_1998_object; // 0x24ea Mov
	func_5290(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object); // 0x24eb NEW_2
	goto Label_9596; // 0x24ed Jump
	
Label_9454:
	var_2617_int = 5; // 0x24ee PushI
	var_2618_bool = var_1988_int == var_2617_int; // 0x24ef Eq
	if(var_2618_bool == 0) goto Label_9467; // 0x24f0 JumpB
	var_2619_int = 0; var_2620_int = 0; var_2621_object = Obj(); var_2622_object = Obj(); var_2623_object = Obj(); var_2624_object = Obj(); // 0x24f1 PushV
	var_2619_int = var_1989_int; // 0x24f2 Mov
	var_2620_int = var_1990_int; // 0x24f3 Mov
	var_2621_object = var_1995_object; // 0x24f4 Mov
	var_2622_object = var_1996_object; // 0x24f5 Mov
	var_2623_object = var_1997_object; // 0x24f6 Mov
	var_2624_object = var_1998_object; // 0x24f7 Mov
	func_5535(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object); // 0x24f8 NEW_2
	goto Label_9596; // 0x24fa Jump
	
Label_9467:
	var_2650_int = 6; // 0x24fb PushI
	var_2651_bool = var_1988_int == var_2650_int; // 0x24fc Eq
	if(var_2651_bool == 0) goto Label_9480; // 0x24fd JumpB
	var_2652_int = 0; var_2653_int = 0; var_2654_object = Obj(); var_2655_object = Obj(); var_2656_object = Obj(); var_2657_object = Obj(); // 0x24fe PushV
	var_2652_int = var_1989_int; // 0x24ff Mov
	var_2653_int = var_1990_int; // 0x2500 Mov
	var_2654_object = var_1995_object; // 0x2501 Mov
	var_2655_object = var_1996_object; // 0x2502 Mov
	var_2656_object = var_1997_object; // 0x2503 Mov
	var_2657_object = var_1998_object; // 0x2504 Mov
	func_5648(); // 0x2505 NEW_2
	goto Label_9596; // 0x2507 Jump
	
Label_9480:
	var_2660_int = 7; // 0x2508 PushI
	var_2661_bool = var_1988_int == var_2660_int; // 0x2509 Eq
	if(var_2661_bool == 0) goto Label_9493; // 0x250a JumpB
	var_2662_int = 0; var_2663_int = 0; var_2664_object = Obj(); var_2665_object = Obj(); var_2666_object = Obj(); var_2667_object = Obj(); // 0x250b PushV
	var_2662_int = var_1989_int; // 0x250c Mov
	var_2663_int = var_1990_int; // 0x250d Mov
	var_2664_object = var_1995_object; // 0x250e Mov
	var_2665_object = var_1996_object; // 0x250f Mov
	var_2666_object = var_1997_object; // 0x2510 Mov
	var_2667_object = var_1998_object; // 0x2511 Mov
	func_5758(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object); // 0x2512 NEW_2
	goto Label_9596; // 0x2514 Jump
	
Label_9493:
	var_2799_int = 8; // 0x2515 PushI
	var_2800_bool = var_1988_int == var_2799_int; // 0x2516 Eq
	if(var_2800_bool == 0) goto Label_9506; // 0x2517 JumpB
	var_2801_int = 0; var_2802_int = 0; var_2803_object = Obj(); var_2804_object = Obj(); var_2805_object = Obj(); var_2806_object = Obj(); // 0x2518 PushV
	var_2801_int = var_1989_int; // 0x2519 Mov
	var_2802_int = var_1990_int; // 0x251a Mov
	var_2803_object = var_1995_object; // 0x251b Mov
	var_2804_object = var_1996_object; // 0x251c Mov
	var_2805_object = var_1997_object; // 0x251d Mov
	var_2806_object = var_1998_object; // 0x251e Mov
	func_5958(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object); // 0x251f NEW_2
	goto Label_9596; // 0x2521 Jump
	
Label_9506:
	var_2832_int = 9; // 0x2522 PushI
	var_2833_bool = var_1988_int == var_2832_int; // 0x2523 Eq
	if(var_2833_bool == 0) goto Label_9519; // 0x2524 JumpB
	var_2834_int = 0; var_2835_int = 0; var_2836_object = Obj(); var_2837_object = Obj(); var_2838_object = Obj(); var_2839_object = Obj(); // 0x2525 PushV
	var_2834_int = var_1989_int; // 0x2526 Mov
	var_2835_int = var_1990_int; // 0x2527 Mov
	var_2836_object = var_1995_object; // 0x2528 Mov
	var_2837_object = var_1996_object; // 0x2529 Mov
	var_2838_object = var_1997_object; // 0x252a Mov
	var_2839_object = var_1998_object; // 0x252b Mov
	func_6161(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object); // 0x252c NEW_2
	goto Label_9596; // 0x252e Jump
	
Label_9519:
	var_2865_int = 10; // 0x252f PushI
	var_2866_bool = var_1988_int == var_2865_int; // 0x2530 Eq
	if(var_2866_bool == 0) goto Label_9532; // 0x2531 JumpB
	var_2867_int = 0; var_2868_int = 0; var_2869_object = Obj(); var_2870_object = Obj(); var_2871_object = Obj(); var_2872_object = Obj(); // 0x2532 PushV
	var_2867_int = var_1989_int; // 0x2533 Mov
	var_2868_int = var_1990_int; // 0x2534 Mov
	var_2869_object = var_1995_object; // 0x2535 Mov
	var_2870_object = var_1996_object; // 0x2536 Mov
	var_2871_object = var_1997_object; // 0x2537 Mov
	var_2872_object = var_1998_object; // 0x2538 Mov
	func_6370(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object); // 0x2539 NEW_2
	goto Label_9596; // 0x253b Jump
	
Label_9532:
	var_2898_int = 11; // 0x253c PushI
	var_2899_bool = var_1988_int == var_2898_int; // 0x253d Eq
	if(var_2899_bool == 0) goto Label_9545; // 0x253e JumpB
	var_2900_int = 0; var_2901_int = 0; var_2902_object = Obj(); var_2903_object = Obj(); var_2904_object = Obj(); var_2905_object = Obj(); // 0x253f PushV
	var_2900_int = var_1989_int; // 0x2540 Mov
	var_2901_int = var_1990_int; // 0x2541 Mov
	var_2902_object = var_1995_object; // 0x2542 Mov
	var_2903_object = var_1996_object; // 0x2543 Mov
	var_2904_object = var_1997_object; // 0x2544 Mov
	var_2905_object = var_1998_object; // 0x2545 Mov
	func_6582(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object); // 0x2546 NEW_2
	goto Label_9596; // 0x2548 Jump
	
Label_9545:
	var_2931_int = 12; // 0x2549 PushI
	var_2932_bool = var_1988_int == var_2931_int; // 0x254a Eq
	if(var_2932_bool == 0) goto Label_9558; // 0x254b JumpB
	var_2933_int = 0; var_2934_int = 0; var_2935_object = Obj(); var_2936_object = Obj(); var_2937_object = Obj(); var_2938_object = Obj(); // 0x254c PushV
	var_2933_int = var_1989_int; // 0x254d Mov
	var_2934_int = var_1990_int; // 0x254e Mov
	var_2935_object = var_1995_object; // 0x254f Mov
	var_2936_object = var_1996_object; // 0x2550 Mov
	var_2937_object = var_1997_object; // 0x2551 Mov
	var_2938_object = var_1998_object; // 0x2552 Mov
	func_6779(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object); // 0x2553 NEW_2
	goto Label_9596; // 0x2555 Jump
	
Label_9558:
	var_2964_int = 13; // 0x2556 PushI
	var_2965_bool = var_1988_int == var_2964_int; // 0x2557 Eq
	if(var_2965_bool == 0) goto Label_9571; // 0x2558 JumpB
	var_2966_int = 0; var_2967_int = 0; var_2968_object = Obj(); var_2969_object = Obj(); var_2970_object = Obj(); var_2971_object = Obj(); // 0x2559 PushV
	var_2966_int = var_1989_int; // 0x255a Mov
	var_2967_int = var_1990_int; // 0x255b Mov
	var_2968_object = var_1995_object; // 0x255c Mov
	var_2969_object = var_1996_object; // 0x255d Mov
	var_2970_object = var_1997_object; // 0x255e Mov
	var_2971_object = var_1998_object; // 0x255f Mov
	func_6982(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object); // 0x2560 NEW_2
	goto Label_9596; // 0x2562 Jump
	
Label_9571:
	var_2997_int = 14; // 0x2563 PushI
	var_2998_bool = var_1988_int == var_2997_int; // 0x2564 Eq
	if(var_2998_bool == 0) goto Label_9584; // 0x2565 JumpB
	var_2999_int = 0; var_3000_int = 0; var_3001_object = Obj(); var_3002_object = Obj(); var_3003_object = Obj(); var_3004_object = Obj(); // 0x2566 PushV
	var_2999_int = var_1989_int; // 0x2567 Mov
	var_3000_int = var_1990_int; // 0x2568 Mov
	var_3001_object = var_1995_object; // 0x2569 Mov
	var_3002_object = var_1996_object; // 0x256a Mov
	var_3003_object = var_1997_object; // 0x256b Mov
	var_3004_object = var_1998_object; // 0x256c Mov
	func_7182(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object); // 0x256d NEW_2
	goto Label_9596; // 0x256f Jump
	
Label_9584:
	var_3136_int = 15; // 0x2570 PushI
	var_3137_bool = var_1988_int == var_3136_int; // 0x2571 Eq
	if(var_3137_bool == 0) goto Label_9596; // 0x2572 JumpB
	var_3138_int = 0; var_3139_int = 0; var_3140_object = Obj(); var_3141_object = Obj(); var_3142_object = Obj(); var_3143_object = Obj(); // 0x2573 PushV
	var_3138_int = var_1989_int; // 0x2574 Mov
	var_3139_int = var_1990_int; // 0x2575 Mov
	var_3140_object = var_1995_object; // 0x2576 Mov
	var_3141_object = var_1996_object; // 0x2577 Mov
	var_3142_object = var_1997_object; // 0x2578 Mov
	var_3143_object = var_1998_object; // 0x2579 Mov
	func_7364(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object); // 0x257a NEW_2
}


func_11434(var_796_int)
{
	var_797_int = 0; var_798_int = 0; // 0x2caa PushV
	var_799_string = "branch"; // 0x2cab PushS
	GetVariable(var_799_string, var_798_int); // 0x2cac Func
	var_796_int = var_798_int; // 0x2cae Mov
	return 2; // 0x2caf Return
}


func_5290(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object)
{
	var_2592_int = 0; // 0x14ab PushI
	var_2593_bool = var_2587_int == var_2592_int; // 0x14ac Eq
	if(var_2593_bool == 0) goto Label_5330; // 0x14ad JumpB
	var_2594_int = 0; var_2595_bool = 0; // 0x14ae PushV
	var_2594_int = 4; // 0x14af MovI
	var_2595_bool = 1; // 0x14b0 MovB
	func_796(var_2594_int, var_2595_bool); // 0x14b1 NEW_2
	var_2596_int = 0; var_2597_bool = 0; var_2598_int = 0; // 0x14b3 PushV
	var_2596_int = 4; // 0x14b4 MovI
	var_2597_bool = 1; // 0x14b5 MovB
	var_2598_int = 1; // 0x14b6 MovI
	func_813(var_2596_int, var_2597_bool, var_2598_int); // 0x14b7 NEW_2
	var_2599_int = 0; var_2600_int = 0; var_2601_object = Obj(); var_2602_object = Obj(); var_2603_object = Obj(); // 0x14b9 PushV
	var_2599_int = 4; // 0x14ba MovI
	var_2600_int = var_2586_int; // 0x14bb Mov
	var_2601_object = var_2588_object; // 0x14bc Mov
	var_2602_object = var_2589_object; // 0x14bd Mov
	var_2603_object = var_2590_object; // 0x14be Mov
	func_641(var_2599_int, var_2600_int, var_2601_object, var_2602_object, var_2603_object); // 0x14bf NEW_2
	var_2604_object = Obj(); var_2605_int = 0; // 0x14c1 PushV
	var_2604_object = var_2591_object; // 0x14c2 Mov
	var_2605_int = 1; // 0x14c3 MovI
	func_305(var_2605_int); // 0x14c4 NEW_2
	var_2606_int = 0; var_2607_bool = 0; var_2608_int = 0; // 0x14c6 PushV
	var_2606_int = 4; // 0x14c7 MovI
	var_2607_bool = 1; // 0x14c8 MovB
	var_2608_int = 4; // 0x14c9 MovI
	func_870(var_2606_int, var_2607_bool, var_2608_int); // 0x14ca NEW_2
	var_2609_int = 0; var_2610_bool = 0; var_2611_int = 0; // 0x14cc PushV
	var_2609_int = 4; // 0x14cd MovI
	var_2610_bool = 0; // 0x14ce MovB
	var_2611_int = 4; // 0x14cf MovI
	func_932(var_2609_int, var_2610_bool, var_2611_int); // 0x14d0 NEW_2
	
Label_5330:
	var_2612_int = 0; var_2613_bool = 0; // 0x14d2 PushV
	var_2612_int = 4; // 0x14d3 MovI
	var_2613_bool = 0; // 0x14d4 MovB
	func_779(var_2612_int, var_2613_bool); // 0x14d5 NEW_2
	var_2614_int = 0; var_2615_int = 0; var_2616_int = 0; // 0x14d7 PushV
	var_2614_int = 4; // 0x14d8 MovI
	var_2615_int = var_2586_int; // 0x14d9 Mov
	var_2616_int = var_2587_int; // 0x14da Mov
	func_2944(var_2614_int, var_2615_int, var_2616_int); // 0x14db NEW_2
	return 0; // 0x14dd Return
}


func_6318(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object)
{
	var_1643_int = 0; // 0x18af PushI
	var_1644_bool = var_1638_int == var_1643_int; // 0x18b0 Eq
	if(var_1644_bool == 0) goto Label_6358; // 0x18b1 JumpB
	var_1645_int = 0; var_1646_bool = 0; // 0x18b2 PushV
	var_1645_int = 10; // 0x18b3 MovI
	var_1646_bool = 0; // 0x18b4 MovB
	func_796(var_1645_int, var_1646_bool); // 0x18b5 NEW_2
	var_1647_int = 0; var_1648_bool = 0; var_1649_int = 0; // 0x18b7 PushV
	var_1647_int = 10; // 0x18b8 MovI
	var_1648_bool = 0; // 0x18b9 MovB
	var_1649_int = 1; // 0x18ba MovI
	func_813(var_1647_int, var_1648_bool, var_1649_int); // 0x18bb NEW_2
	var_1650_int = 0; var_1651_int = 0; var_1652_object = Obj(); var_1653_object = Obj(); var_1654_object = Obj(); // 0x18bd PushV
	var_1650_int = 10; // 0x18be MovI
	var_1651_int = var_1637_int; // 0x18bf Mov
	var_1652_object = var_1639_object; // 0x18c0 Mov
	var_1653_object = var_1640_object; // 0x18c1 Mov
	var_1654_object = var_1641_object; // 0x18c2 Mov
	func_622(var_1651_int, var_1652_object, var_1653_object, var_1654_object); // 0x18c3 NEW_2
	var_1655_object = Obj(); var_1656_int = 0; // 0x18c5 PushV
	var_1655_object = var_1642_object; // 0x18c6 Mov
	var_1656_int = 0; // 0x18c7 MovI
	func_305(var_1656_int); // 0x18c8 NEW_2
	var_1657_int = 0; var_1658_bool = 0; var_1659_int = 0; // 0x18ca PushV
	var_1657_int = 10; // 0x18cb MovI
	var_1658_bool = 0; // 0x18cc MovB
	var_1659_int = 7; // 0x18cd MovI
	func_870(var_1657_int, var_1658_bool, var_1659_int); // 0x18ce NEW_2
	var_1660_int = 0; var_1661_bool = 0; var_1662_int = 0; // 0x18d0 PushV
	var_1660_int = 10; // 0x18d1 MovI
	var_1661_bool = 0; // 0x18d2 MovB
	var_1662_int = 7; // 0x18d3 MovI
	func_932(var_1660_int, var_1661_bool, var_1662_int); // 0x18d4 NEW_2
	
Label_6358:
	var_1663_int = 0; var_1664_int = 0; // 0x18d6 PushV
	var_1663_int = 10; // 0x18d7 MovI
	var_1664_int = var_1638_int; // 0x18d8 Mov
	func_983(var_1663_int, var_1664_int); // 0x18d9 NEW_2
	var_1665_int = 0; var_1666_int = 0; var_1667_int = 0; // 0x18db PushV
	var_1665_int = 10; // 0x18dc MovI
	var_1666_int = var_1637_int; // 0x18dd Mov
	var_1667_int = var_1638_int; // 0x18de Mov
	func_1624(var_1665_int, var_1666_int, var_1667_int); // 0x18df NEW_2
	return 0; // 0x18e1 Return
}


func_11440(var_4307_bool, var_4308_int)
{
	var_4310_int = 0; var_4311_int = 0; var_4312_int = 0; var_4313_int = 0; var_4314_int = 0; var_4315_int = 0; var_4316_int = 0; var_4317_int = 0; // 0x2cb0 PushV
	var_4318_bool = 0; // 0x2cb1 PushV
	var_4318_bool = 0; // 0x2cb2 MovB
	var_4319_int = 42000; // 0x2cb3 PushI
	var_4320_bool = var_4308_int > var_4319_int; // 0x2cb4 GT
	if(var_4320_bool == 0) goto Label_11450; // 0x2cb5 JumpB
	var_4321_int = 42288; // 0x2cb6 PushI
	var_4322_bool = var_4308_int < var_4321_int; // 0x2cb7 LT
	if(var_4322_bool == 0) goto Label_11450; // 0x2cb8 JumpB
	var_4318_bool = 1; // 0x2cb9 MovB
	
Label_11450:
	if(var_4318_bool == 0) goto Label_11467; // 0x2cba JumpB
	var_4323_int = 42000; // 0x2cbb PushI
	var_4324_int = var_4308_int - var_4323_int; // 0x2cbc Sub
	var_4325_int = 24; // 0x2cbd PushI
	var_4314_int = var_4324_int / var_4324_int; // 0x2cbe Div2
	var_4326_int = 42000; // 0x2cbf PushI
	var_4327_int = var_4308_int - var_4326_int; // 0x2cc0 Sub
	var_4328_int = 24; // 0x2cc1 PushI
	var_4315_int = var_4327_int % var_4328_int; // 0x2cc2 Mod2
	var_4329_int = 0; var_4330_int = 0; // 0x2cc3 PushV
	var_4331_int = 1; // 0x2cc4 PushI
	var_4329_int = var_4314_int + var_4331_int; // 0x2cc5 Add2
	var_4330_int = var_4315_int; // 0x2cc6 Mov
	func_8272(var_4329_int, var_4330_int); // 0x2cc7 NEW_2
	var_4307_bool = 1; // 0x2cc9 MovB
	return 8; // 0x2cca Return
	
Label_11467:
	var_4466_bool = 0; // 0x2ccb PushV
	var_4466_bool = 0; // 0x2ccc MovB
	var_4467_int = 40000; // 0x2ccd PushI
	var_4468_bool = var_4308_int > var_4467_int; // 0x2cce GT
	if(var_4468_bool == 0) goto Label_11476; // 0x2ccf JumpB
	var_4469_int = 40288; // 0x2cd0 PushI
	var_4470_bool = var_4308_int < var_4469_int; // 0x2cd1 LT
	if(var_4470_bool == 0) goto Label_11476; // 0x2cd2 JumpB
	var_4466_bool = 1; // 0x2cd3 MovB
	
Label_11476:
	if(var_4466_bool == 0) goto Label_11499; // 0x2cd4 JumpB
	var_4471_int = 40000; // 0x2cd5 PushI
	var_4472_int = var_4308_int - var_4471_int; // 0x2cd6 Sub
	var_4473_int = 24; // 0x2cd7 PushI
	var_4316_int = var_4472_int / var_4472_int; // 0x2cd8 Div2
	var_4474_int = 40000; // 0x2cd9 PushI
	var_4475_int = var_4308_int - var_4474_int; // 0x2cda Sub
	var_4476_int = 24; // 0x2cdb PushI
	var_4317_int = var_4475_int % var_4476_int; // 0x2cdc Mod2
	var_4477_int = 0; var_4478_int = 0; // 0x2cdd PushV
	var_4479_int = 1; // 0x2cde PushI
	var_4477_int = var_4316_int + var_4479_int; // 0x2cdf Add2
	var_4478_int = var_4317_int; // 0x2ce0 Mov
	func_8570(var_4477_int, var_4478_int); // 0x2ce1 NEW_2
	var_4799_int = 0; var_4800_int = 0; // 0x2ce3 PushV
	var_4801_int = 1; // 0x2ce4 PushI
	var_4799_int = var_4316_int + var_4801_int; // 0x2ce5 Add2
	var_4800_int = var_4317_int; // 0x2ce6 Mov
	func_13190(var_4799_int, var_4800_int); // 0x2ce7 NEW_2
	var_4307_bool = 1; // 0x2ce9 MovB
	return 8; // 0x2cea Return
	
Label_11499:
	var_4307_bool = 0; // 0x2ceb MovB
	return 8; // 0x2cec Return
}


func_177(var_4700_string, var_4701_bool)
{
	var_4702_object = Obj(); var_4703_object = Obj(); // 0xb1 PushV
	FindActor(var_4703_object, var_4700_string); // 0xb2 Func
	var_4704_bool = var_4703_object == 0; // 0xb4 Not
	if(var_4704_bool == 0) goto Label_189; // 0xb5 JumpB
	var_4705_string = "Door "; // 0xb6 PushS
	var_4706_int = var_4705_string + var_4700_string; // 0xb7 Add
	var_4707_string = " not found"; // 0xb8 PushS
	var_4708_int = var_4706_int + var_4707_string; // 0xb9 Add
	Trace(var_4708_int); // 0xba Func
	goto Label_192; // 0xbc Jump
	
Label_192:
	return 2; // 0xc0 Return
	
Label_189:
	var_4709_string = "locked"; // 0xbd PushS
	SetProperty(var_4709_string, var_4701_bool); // 0xbe ObjFunc
}


func_12480()
{
	var_4583_object = GlobalVars[16]; // 0x30c1 PushGE
	var_4583_object = 0; // 0x30c2 SetNull
	GlobalVars[16] = var_4583_object; // 0x30c3 PopGE
	var_4584_int = 45286; // 0x30c4 PushI
	var_4585_float = 203.22; // 0x30c5 PushF
	SetTimeEvent(var_4584_int, var_4585_float); // 0x30c6 Func
	var_4586_int = 45288; // 0x30c8 PushI
	var_4587_float = 271.25; // 0x30c9 PushF
	SetTimeEvent(var_4586_int, var_4587_float); // 0x30ca Func
	var_4588_int = 45287; // 0x30cc PushI
	var_4589_float = 249.0; // 0x30cd PushF
	SetTimeEvent(var_4588_int, var_4589_float); // 0x30ce Func
	var_4590_int = 45289; // 0x30d0 PushI
	var_4591_float = 272.0; // 0x30d1 PushF
	SetTimeEvent(var_4590_int, var_4591_float); // 0x30d2 Func
	var_4592_int = 45272; // 0x30d4 PushI
	var_4593_float = 144.0; // 0x30d5 PushF
	SetTimeEvent(var_4592_int, var_4593_float); // 0x30d6 Func
	var_4594_int = 45277; // 0x30d8 PushI
	var_4595_float = 264.0; // 0x30d9 PushF
	SetTimeEvent(var_4594_int, var_4595_float); // 0x30da Func
	var_4596_int = 45280; // 0x30dc PushI
	var_4597_float = 192.0; // 0x30dd PushF
	SetTimeEvent(var_4596_int, var_4597_float); // 0x30de Func
	var_4598_int = 45284; // 0x30e0 PushI
	var_4599_float = 156.0; // 0x30e1 PushF
	SetTimeEvent(var_4598_int, var_4599_float); // 0x30e2 Func
	var_4600_int = 45258; // 0x30e4 PushI
	var_4601_float = 64.26; // 0x30e5 PushF
	SetTimeEvent(var_4600_int, var_4601_float); // 0x30e6 Func
	var_4602_int = 45285; // 0x30e8 PushI
	var_4603_float = 181.0; // 0x30e9 PushF
	SetTimeEvent(var_4602_int, var_4603_float); // 0x30ea Func
	var_4604_int = 45279; // 0x30ec PushI
	var_4605_float = 144.0; // 0x30ed PushF
	SetTimeEvent(var_4604_int, var_4605_float); // 0x30ee Func
	var_4606_int = 45256; // 0x30f0 PushI
	var_4607_float = 132.17; // 0x30f1 PushF
	SetTimeEvent(var_4606_int, var_4607_float); // 0x30f2 Func
	var_4608_int = 45274; // 0x30f4 PushI
	var_4609_float = 192.0; // 0x30f5 PushF
	SetTimeEvent(var_4608_int, var_4609_float); // 0x30f6 Func
	var_4610_int = 45276; // 0x30f8 PushI
	var_4611_float = 240.0; // 0x30f9 PushF
	SetTimeEvent(var_4610_int, var_4611_float); // 0x30fa Func
	var_4612_int = 45281; // 0x30fc PushI
	var_4613_float = 81.5; // 0x30fd PushF
	SetTimeEvent(var_4612_int, var_4613_float); // 0x30fe Func
	var_4614_int = 45283; // 0x3100 PushI
	var_4615_float = 264.0; // 0x3101 PushF
	SetTimeEvent(var_4614_int, var_4615_float); // 0x3102 Func
	var_4616_int = 45275; // 0x3104 PushI
	var_4617_float = 216.0; // 0x3105 PushF
	SetTimeEvent(var_4616_int, var_4617_float); // 0x3106 Func
	var_4618_int = 45278; // 0x3108 PushI
	var_4619_float = 24.0; // 0x3109 PushF
	SetTimeEvent(var_4618_int, var_4619_float); // 0x310a Func
	var_4620_int = 45273; // 0x310c PushI
	var_4621_float = 168.0; // 0x310d PushF
	SetTimeEvent(var_4620_int, var_4621_float); // 0x310e Func
	var_4622_int = 45257; // 0x3110 PushI
	var_4623_float = 64.0; // 0x3111 PushF
	SetTimeEvent(var_4622_int, var_4623_float); // 0x3112 Func
	var_4624_int = 45243; // 0x3114 PushI
	var_4625_float = 42.25; // 0x3115 PushF
	SetTimeEvent(var_4624_int, var_4625_float); // 0x3116 Func
	var_4626_int = 45172; // 0x3118 PushI
	var_4627_float = 247.02; // 0x3119 PushF
	SetTimeEvent(var_4626_int, var_4627_float); // 0x311a Func
	var_4628_int = 45249; // 0x311c PushI
	var_4629_float = 96.0; // 0x311d PushF
	SetTimeEvent(var_4628_int, var_4629_float); // 0x311e Func
	var_4630_int = 45241; // 0x3120 PushI
	var_4631_float = 23.08; // 0x3121 PushF
	SetTimeEvent(var_4630_int, var_4631_float); // 0x3122 Func
	var_4632_int = 45245; // 0x3124 PushI
	var_4633_float = 71.0; // 0x3125 PushF
	SetTimeEvent(var_4632_int, var_4633_float); // 0x3126 Func
	var_4634_int = 45252; // 0x3128 PushI
	var_4635_float = 106.5; // 0x3129 PushF
	SetTimeEvent(var_4634_int, var_4635_float); // 0x312a Func
	var_4636_int = 45247; // 0x312c PushI
	var_4637_float = 119.0; // 0x312d PushF
	SetTimeEvent(var_4636_int, var_4637_float); // 0x312e Func
	var_4638_int = 45170; // 0x3130 PushI
	var_4639_float = 199.02; // 0x3131 PushF
	SetTimeEvent(var_4638_int, var_4639_float); // 0x3132 Func
	var_4640_int = 45253; // 0x3134 PushI
	var_4641_float = 130.42999; // 0x3135 PushF
	SetTimeEvent(var_4640_int, var_4641_float); // 0x3136 Func
	var_4642_int = 45173; // 0x3138 PushI
	var_4643_float = 271.01999; // 0x3139 PushF
	SetTimeEvent(var_4642_int, var_4643_float); // 0x313a Func
	var_4644_int = 45254; // 0x313c PushI
	var_4645_float = 95.5; // 0x313d PushF
	SetTimeEvent(var_4644_int, var_4645_float); // 0x313e Func
	var_4646_int = 45255; // 0x3140 PushI
	var_4647_float = 113.5; // 0x3141 PushF
	SetTimeEvent(var_4646_int, var_4647_float); // 0x3142 Func
	var_4648_int = 45167; // 0x3144 PushI
	var_4649_float = 127.02; // 0x3145 PushF
	SetTimeEvent(var_4648_int, var_4649_float); // 0x3146 Func
	var_4650_int = 45240; // 0x3148 PushI
	var_4651_float = 16.25; // 0x3149 PushF
	SetTimeEvent(var_4650_int, var_4651_float); // 0x314a Func
	var_4652_int = 45250; // 0x314c PushI
	var_4653_float = 58.25; // 0x314d PushF
	SetTimeEvent(var_4652_int, var_4653_float); // 0x314e Func
	var_4654_int = 45168; // 0x3150 PushI
	var_4655_float = 151.02; // 0x3151 PushF
	SetTimeEvent(var_4654_int, var_4655_float); // 0x3152 Func
	var_4656_int = 45171; // 0x3154 PushI
	var_4657_float = 223.02; // 0x3155 PushF
	SetTimeEvent(var_4656_int, var_4657_float); // 0x3156 Func
	var_4658_int = 45244; // 0x3158 PushI
	var_4659_float = 47.0; // 0x3159 PushF
	SetTimeEvent(var_4658_int, var_4659_float); // 0x315a Func
	var_4660_int = 45246; // 0x315c PushI
	var_4661_float = 95.0; // 0x315d PushF
	SetTimeEvent(var_4660_int, var_4661_float); // 0x315e Func
	var_4662_int = 45236; // 0x3160 PushI
	var_4663_float = 90.0; // 0x3161 PushF
	SetTimeEvent(var_4662_int, var_4663_float); // 0x3162 Func
	var_4664_int = 45248; // 0x3164 PushI
	var_4665_float = 111.0; // 0x3165 PushF
	SetTimeEvent(var_4664_int, var_4665_float); // 0x3166 Func
	var_4666_int = 45251; // 0x3168 PushI
	var_4667_float = 83.25; // 0x3169 PushF
	SetTimeEvent(var_4666_int, var_4667_float); // 0x316a Func
	var_4668_int = 45242; // 0x316c PushI
	var_4669_float = 34.08; // 0x316d PushF
	SetTimeEvent(var_4668_int, var_4669_float); // 0x316e Func
	var_4670_int = 45169; // 0x3170 PushI
	var_4671_float = 175.02; // 0x3171 PushF
	SetTimeEvent(var_4670_int, var_4671_float); // 0x3172 Func
	var_4672_int = 45108; // 0x3174 PushI
	var_4673_float = 240.0; // 0x3175 PushF
	SetTimeEvent(var_4672_int, var_4673_float); // 0x3176 Func
	var_4674_int = 45102; // 0x3178 PushI
	var_4675_float = 120.0; // 0x3179 PushF
	SetTimeEvent(var_4674_int, var_4675_float); // 0x317a Func
	var_4676_int = 45103; // 0x317c PushI
	var_4677_float = 144.0; // 0x317d PushF
	SetTimeEvent(var_4676_int, var_4677_float); // 0x317e Func
	var_4678_int = 45107; // 0x3180 PushI
	var_4679_float = 224.25999; // 0x3181 PushF
	SetTimeEvent(var_4678_int, var_4679_float); // 0x3182 Func
	var_4680_int = 45101; // 0x3184 PushI
	var_4681_float = 96.0; // 0x3185 PushF
	SetTimeEvent(var_4680_int, var_4681_float); // 0x3186 Func
	var_4682_int = 45109; // 0x3188 PushI
	var_4683_float = 264.0; // 0x3189 PushF
	SetTimeEvent(var_4682_int, var_4683_float); // 0x318a Func
	var_4684_int = 45105; // 0x318c PushI
	var_4685_float = 192.0; // 0x318d PushF
	SetTimeEvent(var_4684_int, var_4685_float); // 0x318e Func
	var_4686_int = 45106; // 0x3190 PushI
	var_4687_float = 216.0; // 0x3191 PushF
	SetTimeEvent(var_4686_int, var_4687_float); // 0x3192 Func
	var_4688_int = 45095; // 0x3194 PushI
	var_4689_float = 24.0; // 0x3195 PushF
	SetTimeEvent(var_4688_int, var_4689_float); // 0x3196 Func
	var_4690_int = 45163; // 0x3198 PushI
	var_4691_float = 31.02; // 0x3199 PushF
	SetTimeEvent(var_4690_int, var_4691_float); // 0x319a Func
	var_4692_int = 45164; // 0x319c PushI
	var_4693_float = 55.02; // 0x319d PushF
	SetTimeEvent(var_4692_int, var_4693_float); // 0x319e Func
	var_4694_int = 45165; // 0x31a0 PushI
	var_4695_float = 79.02; // 0x31a1 PushF
	SetTimeEvent(var_4694_int, var_4695_float); // 0x31a2 Func
	var_4696_object = Obj(); var_4697_object = Obj(); // 0x31a4 PushV
	var_4698_object = GlobalVars[16]; // 0x31a5 PushGE
	var_4696_object = var_4698_object; // 0x31a6 Mov
	var_4699_object = GlobalVars[16]; // 0x31a8 PushGE
	var_4697_object = var_4699_object; // 0x31a9 Mov
	func_10982(); // 0x31ab NEW_2
	var_4712_object = Obj(); var_4713_object = Obj(); // 0x31ad PushV
	var_4714_object = GlobalVars[16]; // 0x31ae PushGE
	var_4712_object = var_4714_object; // 0x31af Mov
	var_4715_object = GlobalVars[16]; // 0x31b1 PushGE
	var_4713_object = var_4715_object; // 0x31b2 Mov
	func_10155(); // 0x31b4 NEW_2
	var_4718_object = Obj(); var_4719_object = Obj(); // 0x31b6 PushV
	var_4720_object = GlobalVars[16]; // 0x31b7 PushGE
	var_4718_object = var_4720_object; // 0x31b8 Mov
	var_4721_object = GlobalVars[16]; // 0x31ba PushGE
	var_4719_object = var_4721_object; // 0x31bb Mov
	func_11001(); // 0x31bd NEW_2
	var_4724_object = Obj(); var_4725_object = Obj(); // 0x31bf PushV
	var_4726_object = GlobalVars[16]; // 0x31c0 PushGE
	var_4724_object = var_4726_object; // 0x31c1 Mov
	var_4727_object = GlobalVars[16]; // 0x31c3 PushGE
	var_4725_object = var_4727_object; // 0x31c4 Mov
	func_10141(); // 0x31c6 NEW_2
	var_4730_object = Obj(); var_4731_object = Obj(); // 0x31c8 PushV
	var_4732_object = GlobalVars[16]; // 0x31c9 PushGE
	var_4730_object = var_4732_object; // 0x31ca Mov
	var_4733_object = GlobalVars[16]; // 0x31cc PushGE
	var_4731_object = var_4733_object; // 0x31cd Mov
	func_10148(); // 0x31cf NEW_2
	var_4736_object = Obj(); var_4737_object = Obj(); // 0x31d1 PushV
	var_4738_object = GlobalVars[16]; // 0x31d2 PushGE
	var_4736_object = var_4738_object; // 0x31d3 Mov
	var_4739_object = GlobalVars[16]; // 0x31d5 PushGE
	var_4737_object = var_4739_object; // 0x31d6 Mov
	func_10813(); // 0x31d8 NEW_2
	var_4742_object = Obj(); var_4743_object = Obj(); // 0x31da PushV
	var_4744_object = GlobalVars[16]; // 0x31db PushGE
	var_4742_object = var_4744_object; // 0x31dc Mov
	var_4745_object = GlobalVars[16]; // 0x31de PushGE
	var_4743_object = var_4745_object; // 0x31df Mov
	func_11017(); // 0x31e1 NEW_2
	var_4748_object = Obj(); var_4749_object = Obj(); // 0x31e3 PushV
	var_4750_object = GlobalVars[16]; // 0x31e4 PushGE
	var_4748_object = var_4750_object; // 0x31e5 Mov
	var_4751_object = GlobalVars[16]; // 0x31e7 PushGE
	var_4749_object = var_4751_object; // 0x31e8 Mov
	func_10820(); // 0x31ea NEW_2
	var_4754_object = Obj(); var_4755_object = Obj(); // 0x31ec PushV
	var_4756_object = GlobalVars[16]; // 0x31ed PushGE
	var_4754_object = var_4756_object; // 0x31ee Mov
	var_4757_object = GlobalVars[16]; // 0x31f0 PushGE
	var_4755_object = var_4757_object; // 0x31f1 Mov
	func_10945(); // 0x31f3 NEW_2
	var_4781_object = Obj(); var_4782_string = ""; // 0x31f5 PushV
	var_4782_string = "volonteers_klara"; // 0x31f6 MovS
	func_137(var_4781_object, var_4782_string); // 0x31f7 NEW_2
	var_4789_object = Obj(); var_4790_string = ""; // 0x31f9 PushV
	var_4790_string = "quest_k1_01"; // 0x31fa MovS
	func_137(var_4789_object, var_4790_string); // 0x31fb NEW_2
	var_4791_object = Obj(); var_4792_string = ""; // 0x31fd PushV
	var_4792_string = "klara2_positioner"; // 0x31fe MovS
	func_137(var_4791_object, var_4792_string); // 0x31ff NEW_2
	var_4793_object = Obj(); var_4794_string = ""; // 0x3201 PushV
	var_4794_string = "klara2_svita_positioner"; // 0x3202 MovS
	func_137(var_4793_object, var_4794_string); // 0x3203 NEW_2
	var_4795_object = Obj(); var_4796_string = ""; // 0x3205 PushV
	var_4796_string = "klara2_npc_positioner"; // 0x3206 MovS
	func_137(var_4795_object, var_4796_string); // 0x3207 NEW_2
	var_4797_int = 45110; // 0x3209 PushI
	var_4798_float = 48.0; // 0x320a PushF
	SetTimeEvent(var_4797_int, var_4798_float); // 0x320b Func
	var_4799_int = 45166; // 0x320d PushI
	var_4800_float = 103.02; // 0x320e PushF
	SetTimeEvent(var_4799_int, var_4800_float); // 0x320f Func
	var_4801_int = 45096; // 0x3211 PushI
	var_4802_float = 80.0; // 0x3212 PushF
	SetTimeEvent(var_4801_int, var_4802_float); // 0x3213 Func
	var_4803_int = 45104; // 0x3215 PushI
	var_4804_float = 168.0; // 0x3216 PushF
	SetTimeEvent(var_4803_int, var_4804_float); // 0x3217 Func
	var_4805_int = 45100; // 0x3219 PushI
	var_4806_float = 72.0; // 0x321a PushF
	SetTimeEvent(var_4805_int, var_4806_float); // 0x321b Func
	return 0; // 0x321d Return
}


func_194(var_5863_bool, var_5864_object, var_5865_float)
{
	var_5866_bool = var_5864_object == 0; // 0xc3 Not
	if(var_5866_bool == 0) goto Label_199; // 0xc4 JumpB
	var_5863_bool = 0; // 0xc5 MovB
	return 0; // 0xc6 Return
	
Label_199:
	var_5867_int = 0; // 0xc7 PushI
	var_5868_bool = var_5865_float > var_5867_int; // 0xc8 GT
	if(var_5868_bool == 0) goto Label_206; // 0xc9 JumpB
	var_5869_int = 8; // 0xca PushI
	SendWorldWndMessage(var_5869_int); // 0xcb Func
	goto Label_215; // 0xcd Jump
	
Label_215:
	var_5870_float = 0; // 0xd7 PushV
	var_5870_float = var_5865_float; // 0xd8 Mov
	func_229(var_5870_float); // 0xd9 NEW_2
	var_5874_bool = 0; var_5875_object = Obj(); var_5876_string = ""; var_5877_float = 0; var_5878_float = 0; var_5879_float = 0; // 0xdb PushV
	var_5875_object = var_5864_object; // 0xdc Mov
	var_5876_string = "reputation"; // 0xdd MovS
	var_5877_float = var_5865_float; // 0xde Mov
	var_5878_float = 0; // 0xdf MovI
	var_5879_float = 1; // 0xe0 MovI
	func_93(var_5874_bool, var_5875_object, var_5876_string, var_5877_float, var_5878_float, var_5879_float); // 0xe1 NEW_2
	var_5863_bool = 1; // 0xe3 MovB
	return 0; // 0xe4 Return
	
Label_206:
	var_5892_int = 0; // 0xce PushI
	var_5893_bool = var_5865_float < var_5892_int; // 0xcf LT
	if(var_5893_bool == 0) goto Label_213; // 0xd0 JumpB
	var_5894_int = 9; // 0xd1 PushI
	SendWorldWndMessage(var_5894_int); // 0xd2 Func
	goto Label_215; // 0xd4 Jump
	
Label_213:
	var_5863_bool = 0; // 0xd5 MovB
	return 0; // 0xd6 Return
}


func_7364(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object)
{
	var_3144_int = 0; // 0x1cc5 PushI
	var_3145_bool = var_3139_int == var_3144_int; // 0x1cc6 Eq
	if(var_3145_bool == 0) goto Label_7404; // 0x1cc7 JumpB
	var_3146_int = 0; var_3147_bool = 0; // 0x1cc8 PushV
	var_3146_int = 15; // 0x1cc9 MovI
	var_3147_bool = 1; // 0x1cca MovB
	func_796(var_3146_int, var_3147_bool); // 0x1ccb NEW_2
	var_3148_int = 0; var_3149_bool = 0; var_3150_int = 0; // 0x1ccd PushV
	var_3148_int = 15; // 0x1cce MovI
	var_3149_bool = 1; // 0x1ccf MovB
	var_3150_int = 1; // 0x1cd0 MovI
	func_813(var_3148_int, var_3149_bool, var_3150_int); // 0x1cd1 NEW_2
	var_3151_int = 0; var_3152_int = 0; var_3153_object = Obj(); var_3154_object = Obj(); var_3155_object = Obj(); // 0x1cd3 PushV
	var_3151_int = 15; // 0x1cd4 MovI
	var_3152_int = var_3138_int; // 0x1cd5 Mov
	var_3153_object = var_3140_object; // 0x1cd6 Mov
	var_3154_object = var_3141_object; // 0x1cd7 Mov
	var_3155_object = var_3142_object; // 0x1cd8 Mov
	func_641(var_3151_int, var_3152_int, var_3153_object, var_3154_object, var_3155_object); // 0x1cd9 NEW_2
	var_3156_object = Obj(); var_3157_int = 0; // 0x1cdb PushV
	var_3156_object = var_3143_object; // 0x1cdc Mov
	var_3157_int = 1; // 0x1cdd MovI
	func_305(var_3157_int); // 0x1cde NEW_2
	var_3158_int = 0; var_3159_bool = 0; var_3160_int = 0; // 0x1ce0 PushV
	var_3158_int = 15; // 0x1ce1 MovI
	var_3159_bool = 1; // 0x1ce2 MovB
	var_3160_int = 5; // 0x1ce3 MovI
	func_870(var_3158_int, var_3159_bool, var_3160_int); // 0x1ce4 NEW_2
	var_3161_int = 0; var_3162_bool = 0; var_3163_int = 0; // 0x1ce6 PushV
	var_3161_int = 15; // 0x1ce7 MovI
	var_3162_bool = 0; // 0x1ce8 MovB
	var_3163_int = 5; // 0x1ce9 MovI
	func_932(var_3161_int, var_3162_bool, var_3163_int); // 0x1cea NEW_2
	
Label_7404:
	var_3164_int = 0; var_3165_bool = 0; // 0x1cec PushV
	var_3164_int = 15; // 0x1ced MovI
	var_3165_bool = 0; // 0x1cee MovB
	func_779(var_3164_int, var_3165_bool); // 0x1cef NEW_2
	var_3166_int = 0; var_3167_int = 0; var_3168_int = 0; // 0x1cf1 PushV
	var_3166_int = 15; // 0x1cf2 MovI
	var_3167_int = var_3138_int; // 0x1cf3 Mov
	var_3168_int = var_3139_int; // 0x1cf4 Mov
	func_2584(var_3166_int, var_3167_int, var_3168_int); // 0x1cf5 NEW_2
	return 0; // 0x1cf7 Return
}


func_10461()
{
	var_5618_object = Obj(); var_5619_object = Obj(); var_5620_object = Obj(); var_5621_object = Obj(); // 0x28dd PushV
	var_5622_object = Obj(); // 0x28de PushV
	func_11417(var_5622_object); // 0x28df NEW_2
	var_5620_object = var_5622_object; // 0x28e0 Mov
	var_5623_string = "k4q03AlexandrGotoBurah"; // 0x28e2 PushS
	FindMark(var_5621_object, var_5623_string); // 0x28e3 ObjFunc
	var_5624_object = var_5621_object; // 0x28e5 Push
	if(var_5624_object == 0) goto Label_10473; // 0x28e6 JumpB
	Remove(); // 0x28e7 ObjFunc
	
Label_10473:
	var_5625_string = "k4q01GrifGotoBraga"; // 0x28e9 PushS
	FindMark(var_5621_object, var_5625_string); // 0x28ea ObjFunc
	var_5626_object = var_5621_object; // 0x28ec Push
	if(var_5626_object == 0) goto Label_10480; // 0x28ed JumpB
	Remove(); // 0x28ee ObjFunc
	
Label_10480:
	var_5627_string = "k4q01AlexandrGotoGrif"; // 0x28f0 PushS
	FindMark(var_5621_object, var_5627_string); // 0x28f1 ObjFunc
	var_5628_object = var_5621_object; // 0x28f3 Push
	if(var_5628_object == 0) goto Label_10487; // 0x28f4 JumpB
	Remove(); // 0x28f5 ObjFunc
	
Label_10487:
	var_5629_string = "k4q01GrifGotoNotkin"; // 0x28f7 PushS
	FindMark(var_5621_object, var_5629_string); // 0x28f8 ObjFunc
	var_5630_object = var_5621_object; // 0x28fa Push
	if(var_5630_object == 0) goto Label_10494; // 0x28fb JumpB
	Remove(); // 0x28fc ObjFunc
	
Label_10494:
	var_5631_string = "k4q02KaterinaGotoTheater"; // 0x28fe PushS
	FindMark(var_5621_object, var_5631_string); // 0x28ff ObjFunc
	var_5632_object = var_5621_object; // 0x2901 Push
	if(var_5632_object == 0) goto Label_10501; // 0x2902 JumpB
	Remove(); // 0x2903 ObjFunc
	
Label_10501:
	var_5633_string = "k4q02MarkGotoTheater"; // 0x2905 PushS
	FindMark(var_5621_object, var_5633_string); // 0x2906 ObjFunc
	var_5634_object = var_5621_object; // 0x2908 Push
	if(var_5634_object == 0) goto Label_10508; // 0x2909 JumpB
	Remove(); // 0x290a ObjFunc
	
Label_10508:
	var_5635_string = "k4q03LaraGotoAlexandr"; // 0x290c PushS
	FindMark(var_5621_object, var_5635_string); // 0x290d ObjFunc
	var_5636_object = var_5621_object; // 0x290f Push
	if(var_5636_object == 0) goto Label_10515; // 0x2910 JumpB
	Remove(); // 0x2911 ObjFunc
	
Label_10515:
	var_5637_bool = 0; var_5638_int = 0; // 0x2913 PushV
	var_5638_int = 368; // 0x2914 MovI
	func_11392(var_5637_bool, var_5638_int); // 0x2915 NEW_2
	var_5639_bool = 0; var_5640_int = 0; // 0x2917 PushV
	var_5640_int = 378; // 0x2918 MovI
	func_11392(var_5639_bool, var_5640_int); // 0x2919 NEW_2
	var_5641_bool = 0; var_5642_int = 0; // 0x291b PushV
	var_5642_int = 384; // 0x291c MovI
	func_11392(var_5641_bool, var_5642_int); // 0x291d NEW_2
	return 4; // 0x291f Return
}


func_5342(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object)
{
	var_3718_int = 0; // 0x14df PushI
	var_3719_bool = var_3713_int == var_3718_int; // 0x14e0 Eq
	if(var_3719_bool == 0) goto Label_5382; // 0x14e1 JumpB
	var_3720_int = 0; var_3721_bool = 0; // 0x14e2 PushV
	var_3720_int = 4; // 0x14e3 MovI
	var_3721_bool = 0; // 0x14e4 MovB
	func_796(var_3720_int, var_3721_bool); // 0x14e5 NEW_2
	var_3722_int = 0; var_3723_bool = 0; var_3724_int = 0; // 0x14e7 PushV
	var_3722_int = 4; // 0x14e8 MovI
	var_3723_bool = 0; // 0x14e9 MovB
	var_3724_int = 1; // 0x14ea MovI
	func_813(var_3722_int, var_3723_bool, var_3724_int); // 0x14eb NEW_2
	var_3725_int = 0; var_3726_int = 0; var_3727_object = Obj(); var_3728_object = Obj(); var_3729_object = Obj(); // 0x14ed PushV
	var_3725_int = 4; // 0x14ee MovI
	var_3726_int = var_3712_int; // 0x14ef Mov
	var_3727_object = var_3714_object; // 0x14f0 Mov
	var_3728_object = var_3715_object; // 0x14f1 Mov
	var_3729_object = var_3716_object; // 0x14f2 Mov
	func_720(var_3725_int, var_3726_int, var_3727_object, var_3728_object, var_3729_object); // 0x14f3 NEW_2
	var_3730_object = Obj(); var_3731_int = 0; // 0x14f5 PushV
	var_3730_object = var_3717_object; // 0x14f6 Mov
	var_3731_int = 2; // 0x14f7 MovI
	func_305(var_3731_int); // 0x14f8 NEW_2
	var_3732_int = 0; var_3733_bool = 0; var_3734_int = 0; // 0x14fa PushV
	var_3732_int = 4; // 0x14fb MovI
	var_3733_bool = 0; // 0x14fc MovB
	var_3734_int = 4; // 0x14fd MovI
	func_870(var_3732_int, var_3733_bool, var_3734_int); // 0x14fe NEW_2
	var_3735_int = 0; var_3736_bool = 0; var_3737_int = 0; // 0x1500 PushV
	var_3735_int = 4; // 0x1501 MovI
	var_3736_bool = 1; // 0x1502 MovB
	var_3737_int = 4; // 0x1503 MovI
	func_932(var_3735_int, var_3736_bool, var_3737_int); // 0x1504 NEW_2
	
Label_5382:
	var_3738_int = 0; var_3739_bool = 0; // 0x1506 PushV
	var_3738_int = 4; // 0x1507 MovI
	var_3739_bool = 0; // 0x1508 MovB
	func_779(var_3738_int, var_3739_bool); // 0x1509 NEW_2
	var_3740_int = 0; var_3741_int = 0; var_3742_int = 0; // 0x150b PushV
	var_3740_int = 4; // 0x150c MovI
	var_3741_int = var_3712_int; // 0x150d Mov
	var_3742_int = var_3713_int; // 0x150e Mov
	func_3847(var_3740_int, var_3741_int, var_3742_int); // 0x150f NEW_2
	return 0; // 0x1511 Return
}


func_6370(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object)
{
	var_2873_int = 0; // 0x18e3 PushI
	var_2874_bool = var_2868_int == var_2873_int; // 0x18e4 Eq
	if(var_2874_bool == 0) goto Label_6410; // 0x18e5 JumpB
	var_2875_int = 0; var_2876_bool = 0; // 0x18e6 PushV
	var_2875_int = 10; // 0x18e7 MovI
	var_2876_bool = 1; // 0x18e8 MovB
	func_796(var_2875_int, var_2876_bool); // 0x18e9 NEW_2
	var_2877_int = 0; var_2878_bool = 0; var_2879_int = 0; // 0x18eb PushV
	var_2877_int = 10; // 0x18ec MovI
	var_2878_bool = 1; // 0x18ed MovB
	var_2879_int = 1; // 0x18ee MovI
	func_813(var_2877_int, var_2878_bool, var_2879_int); // 0x18ef NEW_2
	var_2880_int = 0; var_2881_int = 0; var_2882_object = Obj(); var_2883_object = Obj(); var_2884_object = Obj(); // 0x18f1 PushV
	var_2880_int = 10; // 0x18f2 MovI
	var_2881_int = var_2867_int; // 0x18f3 Mov
	var_2882_object = var_2869_object; // 0x18f4 Mov
	var_2883_object = var_2870_object; // 0x18f5 Mov
	var_2884_object = var_2871_object; // 0x18f6 Mov
	func_641(var_2880_int, var_2881_int, var_2882_object, var_2883_object, var_2884_object); // 0x18f7 NEW_2
	var_2885_object = Obj(); var_2886_int = 0; // 0x18f9 PushV
	var_2885_object = var_2872_object; // 0x18fa Mov
	var_2886_int = 1; // 0x18fb MovI
	func_305(var_2886_int); // 0x18fc NEW_2
	var_2887_int = 0; var_2888_bool = 0; var_2889_int = 0; // 0x18fe PushV
	var_2887_int = 10; // 0x18ff MovI
	var_2888_bool = 1; // 0x1900 MovB
	var_2889_int = 7; // 0x1901 MovI
	func_870(var_2887_int, var_2888_bool, var_2889_int); // 0x1902 NEW_2
	var_2890_int = 0; var_2891_bool = 0; var_2892_int = 0; // 0x1904 PushV
	var_2890_int = 10; // 0x1905 MovI
	var_2891_bool = 0; // 0x1906 MovB
	var_2892_int = 7; // 0x1907 MovI
	func_932(var_2890_int, var_2891_bool, var_2892_int); // 0x1908 NEW_2
	
Label_6410:
	var_2893_int = 0; var_2894_bool = 0; // 0x190a PushV
	var_2893_int = 10; // 0x190b MovI
	var_2894_bool = 0; // 0x190c MovB
	func_779(var_2893_int, var_2894_bool); // 0x190d NEW_2
	var_2895_int = 0; var_2896_int = 0; var_2897_int = 0; // 0x190f PushV
	var_2895_int = 10; // 0x1910 MovI
	var_2896_int = var_2867_int; // 0x1911 Mov
	var_2897_int = var_2868_int; // 0x1912 Mov
	func_2764(var_2895_int, var_2896_int, var_2897_int); // 0x1913 NEW_2
	return 0; // 0x1915 Return
}


func_229(var_5870_float)
{
	var_5871_object = Obj(); var_5872_object = Obj(); // 0xe5 PushV
	CreateFloatVector(var_5872_object); // 0xe6 Func
	add(var_5870_float); // 0xe8 ObjFunc
	var_5873_int = 16; // 0xea PushI
	SendWorldWndMessage(var_5873_int, var_5872_object); // 0xeb Func
	return 2; // 0xed Return
}


func_1255(var_2157_float, var_2158_int)
{
	var_2159_int = 1; // 0x4e8 PushI
	var_2160_int = var_2158_int + var_2159_int; // 0x4e9 Add
	var_2161_int = 1; // 0x4ea PushI
	var_2162_bool = var_2160_int == var_2161_int; // 0x4eb Eq
	if(var_2162_bool == 0) goto Label_1264; // 0x4ec JumpB
	var_2157_float = 0; // 0x4ed MovI
	return 0; // 0x4ee Return
	
Label_1264:
	var_2163_int = 1; // 0x4f0 PushI
	var_2164_int = var_2158_int + var_2163_int; // 0x4f1 Add
	var_2165_int = 2; // 0x4f2 PushI
	var_2166_bool = var_2164_int == var_2165_int; // 0x4f3 Eq
	if(var_2166_bool == 0) goto Label_1272; // 0x4f4 JumpB
	var_2157_float = 0; // 0x4f5 MovI
	return 0; // 0x4f6 Return
	
Label_1272:
	var_2167_int = 1; // 0x4f8 PushI
	var_2168_int = var_2158_int + var_2167_int; // 0x4f9 Add
	var_2169_int = 3; // 0x4fa PushI
	var_2170_bool = var_2168_int == var_2169_int; // 0x4fb Eq
	if(var_2170_bool == 0) goto Label_1280; // 0x4fc JumpB
	var_2157_float = 0; // 0x4fd MovI
	return 0; // 0x4fe Return
	
Label_1280:
	var_2171_int = 1; // 0x500 PushI
	var_2172_int = var_2158_int + var_2171_int; // 0x501 Add
	var_2173_int = 4; // 0x502 PushI
	var_2174_bool = var_2172_int == var_2173_int; // 0x503 Eq
	if(var_2174_bool == 0) goto Label_1288; // 0x504 JumpB
	var_2157_float = 0; // 0x505 MovI
	return 0; // 0x506 Return
	
Label_1288:
	var_2175_int = 1; // 0x508 PushI
	var_2176_int = var_2158_int + var_2175_int; // 0x509 Add
	var_2177_int = 5; // 0x50a PushI
	var_2178_bool = var_2176_int == var_2177_int; // 0x50b Eq
	if(var_2178_bool == 0) goto Label_1296; // 0x50c JumpB
	var_2157_float = 0; // 0x50d MovI
	return 0; // 0x50e Return
	
Label_1296:
	var_2179_int = 1; // 0x510 PushI
	var_2180_int = var_2158_int + var_2179_int; // 0x511 Add
	var_2181_int = 6; // 0x512 PushI
	var_2182_bool = var_2180_int == var_2181_int; // 0x513 Eq
	if(var_2182_bool == 0) goto Label_1304; // 0x514 JumpB
	var_2157_float = 2; // 0x515 MovI
	return 0; // 0x516 Return
	
Label_1304:
	var_2183_int = 1; // 0x518 PushI
	var_2184_int = var_2158_int + var_2183_int; // 0x519 Add
	var_2185_int = 7; // 0x51a PushI
	var_2186_bool = var_2184_int == var_2185_int; // 0x51b Eq
	if(var_2186_bool == 0) goto Label_1312; // 0x51c JumpB
	var_2157_float = 1; // 0x51d MovI
	return 0; // 0x51e Return
	
Label_1312:
	var_2187_int = 1; // 0x520 PushI
	var_2188_int = var_2158_int + var_2187_int; // 0x521 Add
	var_2189_int = 8; // 0x522 PushI
	var_2190_bool = var_2188_int == var_2189_int; // 0x523 Eq
	if(var_2190_bool == 0) goto Label_1320; // 0x524 JumpB
	var_2157_float = 1; // 0x525 MovI
	return 0; // 0x526 Return
	
Label_1320:
	var_2191_int = 1; // 0x528 PushI
	var_2192_int = var_2158_int + var_2191_int; // 0x529 Add
	var_2193_int = 9; // 0x52a PushI
	var_2194_bool = var_2192_int == var_2193_int; // 0x52b Eq
	if(var_2194_bool == 0) goto Label_1328; // 0x52c JumpB
	var_2157_float = 1; // 0x52d MovI
	return 0; // 0x52e Return
	
Label_1328:
	var_2195_int = 1; // 0x530 PushI
	var_2196_int = var_2158_int + var_2195_int; // 0x531 Add
	var_2197_int = 10; // 0x532 PushI
	var_2198_bool = var_2196_int == var_2197_int; // 0x533 Eq
	if(var_2198_bool == 0) goto Label_1336; // 0x534 JumpB
	var_2157_float = 1; // 0x535 MovI
	return 0; // 0x536 Return
	
Label_1336:
	var_2199_int = 1; // 0x538 PushI
	var_2200_int = var_2158_int + var_2199_int; // 0x539 Add
	var_2201_int = 11; // 0x53a PushI
	var_2202_bool = var_2200_int == var_2201_int; // 0x53b Eq
	if(var_2202_bool == 0) goto Label_1343; // 0x53c JumpB
	var_2157_float = 1; // 0x53d MovI
	return 0; // 0x53e Return
	
Label_1343:
	var_2157_float = 0; // 0x53f MovI
	return 0; // 0x540 Return
}


func_3304(var_2303_int, var_2304_int, var_2305_int)
{
	var_2306_int = 0; var_2307_int = 0; var_2308_int = 0; var_2309_int = 0; // 0xce8 PushV
	var_2310_bool = 0; // 0xce9 PushV
	var_2310_bool = 0; // 0xcea MovB
	var_2311_int = 8; // 0xceb PushI
	var_2312_bool = var_2305_int > var_2311_int; // 0xcec GT
	if(var_2312_bool == 0) goto Label_3314; // 0xced JumpB
	var_2313_int = 21; // 0xcee PushI
	var_2314_bool = var_2305_int < var_2313_int; // 0xcef LT
	if(var_2314_bool == 0) goto Label_3314; // 0xcf0 JumpB
	var_2310_bool = 1; // 0xcf1 MovB
	
Label_3314:
	if(var_2310_bool == 0) goto Label_3369; // 0xcf2 JumpB
	var_2315_int = 0; var_2316_string = ""; var_2317_string = ""; var_2318_int = 0; // 0xcf3 PushV
	var_2315_int = var_2303_int; // 0xcf4 Mov
	var_2316_string = "pers_vaxxabit"; // 0xcf5 MovS
	var_2317_string = "vaxxabit_d.xml"; // 0xcf6 MovS
	var_2318_int = 7; // 0xcf7 MovI
	func_503(var_2315_int, var_2316_string, var_2317_string, var_2318_int); // 0xcf8 NEW_2
	var_2319_int = 0; var_2320_string = ""; var_2321_string = ""; var_2322_int = 0; // 0xcfa PushV
	var_2319_int = var_2303_int; // 0xcfb Mov
	var_2320_string = "pers_vaxxabitka"; // 0xcfc MovS
	var_2321_string = "vaxxabitka_d.xml"; // 0xcfd MovS
	var_2322_int = 7; // 0xcfe MovI
	func_503(var_2319_int, var_2320_string, var_2321_string, var_2322_int); // 0xcff NEW_2
	var_2323_int = 0; var_2324_string = ""; var_2325_string = ""; var_2326_int = 0; // 0xd01 PushV
	var_2323_int = var_2303_int; // 0xd02 Mov
	var_2324_string = "pers_rat_big"; // 0xd03 MovS
	var_2325_string = "rat_big.xml"; // 0xd04 MovS
	var_2326_int = 3; // 0xd05 MovI
	func_503(var_2323_int, var_2324_string, var_2325_string, var_2326_int); // 0xd06 NEW_2
	var_2327_int = 0; var_2328_string = ""; var_2329_string = ""; var_2330_int = 0; // 0xd08 PushV
	var_2327_int = var_2303_int; // 0xd09 Mov
	var_2328_string = "fog"; // 0xd0a MovS
	var_2329_string = "fog.xml"; // 0xd0b MovS
	var_2330_int = 7; // 0xd0c MovI
	func_529(var_2327_int, var_2328_string, var_2329_string, var_2330_int); // 0xd0d NEW_2
	var_2331_int = 5; // 0xd0f PushI
	var_2332_bool = var_2304_int >= var_2331_int; // 0xd10 GE
	if(var_2332_bool == 0) goto Label_3353; // 0xd11 JumpB
	var_2333_int = 0; var_2334_string = ""; var_2335_string = ""; var_2336_int = 0; // 0xd12 PushV
	var_2333_int = var_2303_int; // 0xd13 Mov
	var_2334_string = "fog"; // 0xd14 MovS
	var_2335_string = "fog_hunter.xml"; // 0xd15 MovS
	var_2336_int = 3; // 0xd16 MovI
	func_529(var_2333_int, var_2334_string, var_2335_string, var_2336_int); // 0xd17 NEW_2
	
Label_3353:
	var_2337_int = 2; // 0xd19 PushI
	var_2338_float = 0; var_2339_int = 0; // 0xd1a PushV
	var_2339_int = var_2304_int; // 0xd1b Mov
	func_1255(var_2338_float, var_2339_int); // 0xd1c NEW_2
	var_2308_int = var_2337_int * var_2338_float; // 0xd1e Mult2
	var_2340_int = var_2308_int; // 0xd1f Push
	if(var_2340_int == 0) goto Label_3368; // 0xd20 JumpB
	var_2341_int = 0; var_2342_string = ""; var_2343_string = ""; var_2344_int = 0; // 0xd21 PushV
	var_2341_int = var_2303_int; // 0xd22 Mov
	var_2342_string = "pers_bomber"; // 0xd23 MovS
	var_2343_string = "bomber.xml"; // 0xd24 MovS
	var_2344_int = var_2308_int; // 0xd25 Mov
	func_503(var_2341_int, var_2342_string, var_2343_string, var_2344_int); // 0xd26 NEW_2
	
Label_3368:
	goto Label_3422; // 0xd28 Jump
	
Label_3422:
	var_2345_bool = 0; var_2346_int = 0; // 0xd5e PushV
	var_2346_int = var_2304_int; // 0xd5f Mov
	func_1372(var_2345_bool, var_2346_int); // 0xd60 NEW_2
	if(var_2345_bool == 0) goto Label_3434; // 0xd62 JumpB
	var_2347_int = 0; var_2348_string = ""; var_2349_string = ""; var_2350_int = 0; // 0xd63 PushV
	var_2347_int = var_2303_int; // 0xd64 Mov
	var_2348_string = "pers_sanitar"; // 0xd65 MovS
	var_2349_string = "sanitar.xml"; // 0xd66 MovS
	var_2350_int = 2; // 0xd67 MovI
	func_503(var_2347_int, var_2348_string, var_2349_string, var_2350_int); // 0xd68 NEW_2
	
Label_3434:
	var_2351_int = 0; var_2352_string = ""; var_2353_string = ""; var_2354_int = 0; var_2355_int = 0; var_2356_int = 0; // 0xd6a PushV
	var_2351_int = var_2303_int; // 0xd6b Mov
	var_2352_string = "pers_worker"; // 0xd6c MovS
	var_2353_string = "agony1_man.xml"; // 0xd6d MovS
	var_2354_int = 2; // 0xd6e MovI
	var_2355_int = 4; // 0xd6f MovI
	var_2356_int = 4; // 0xd70 MovI
	func_516(var_2351_int, var_2352_string, var_2353_string, var_2354_int, var_2355_int, var_2356_int); // 0xd71 NEW_2
	var_2357_int = 0; var_2358_string = ""; var_2359_string = ""; var_2360_int = 0; var_2361_int = 0; var_2362_int = 0; // 0xd73 PushV
	var_2357_int = var_2303_int; // 0xd74 Mov
	var_2358_string = "pers_unosha"; // 0xd75 MovS
	var_2359_string = "agony1_man.xml"; // 0xd76 MovS
	var_2360_int = 2; // 0xd77 MovI
	var_2361_int = 4; // 0xd78 MovI
	var_2362_int = 4; // 0xd79 MovI
	func_516(var_2357_int, var_2358_string, var_2359_string, var_2360_int, var_2361_int, var_2362_int); // 0xd7a NEW_2
	var_2363_int = 0; var_2364_string = ""; var_2365_string = ""; var_2366_int = 0; var_2367_int = 0; var_2368_int = 0; // 0xd7c PushV
	var_2363_int = var_2303_int; // 0xd7d Mov
	var_2364_string = "pers_woman"; // 0xd7e MovS
	var_2365_string = "agony1_woman.xml"; // 0xd7f MovS
	var_2366_int = 2; // 0xd80 MovI
	var_2367_int = 4; // 0xd81 MovI
	var_2368_int = 4; // 0xd82 MovI
	func_516(var_2363_int, var_2364_string, var_2365_string, var_2366_int, var_2367_int, var_2368_int); // 0xd83 NEW_2
	var_2369_int = 0; var_2370_string = ""; var_2371_string = ""; var_2372_int = 0; var_2373_int = 0; var_2374_int = 0; // 0xd85 PushV
	var_2369_int = var_2303_int; // 0xd86 Mov
	var_2370_string = "pers_wasted_girl"; // 0xd87 MovS
	var_2371_string = "agony1_woman.xml"; // 0xd88 MovS
	var_2372_int = 2; // 0xd89 MovI
	var_2373_int = 4; // 0xd8a MovI
	var_2374_int = 4; // 0xd8b MovI
	func_516(var_2369_int, var_2370_string, var_2371_string, var_2372_int, var_2373_int, var_2374_int); // 0xd8c NEW_2
	return 4; // 0xd8e Return
	
Label_3369:
	var_2375_int = 0; var_2376_string = ""; var_2377_string = ""; var_2378_int = 0; // 0xd29 PushV
	var_2375_int = var_2303_int; // 0xd2a Mov
	var_2376_string = "pers_vaxxabit"; // 0xd2b MovS
	var_2377_string = "vaxxabit_d.xml"; // 0xd2c MovS
	var_2378_int = 5; // 0xd2d MovI
	func_503(var_2375_int, var_2376_string, var_2377_string, var_2378_int); // 0xd2e NEW_2
	var_2379_int = 0; var_2380_string = ""; var_2381_string = ""; var_2382_int = 0; // 0xd30 PushV
	var_2379_int = var_2303_int; // 0xd31 Mov
	var_2380_string = "pers_vaxxabitka"; // 0xd32 MovS
	var_2381_string = "vaxxabitka_d.xml"; // 0xd33 MovS
	var_2382_int = 5; // 0xd34 MovI
	func_503(var_2379_int, var_2380_string, var_2381_string, var_2382_int); // 0xd35 NEW_2
	var_2383_int = 0; var_2384_string = ""; var_2385_string = ""; var_2386_int = 0; // 0xd37 PushV
	var_2383_int = var_2303_int; // 0xd38 Mov
	var_2384_string = "pers_rat_big"; // 0xd39 MovS
	var_2385_string = "rat_big.xml"; // 0xd3a MovS
	var_2386_int = 4; // 0xd3b MovI
	func_503(var_2383_int, var_2384_string, var_2385_string, var_2386_int); // 0xd3c NEW_2
	var_2387_int = 0; var_2388_string = ""; var_2389_string = ""; var_2390_int = 0; // 0xd3e PushV
	var_2387_int = var_2303_int; // 0xd3f Mov
	var_2388_string = "fog"; // 0xd40 MovS
	var_2389_string = "fog.xml"; // 0xd41 MovS
	var_2390_int = 7; // 0xd42 MovI
	func_529(var_2387_int, var_2388_string, var_2389_string, var_2390_int); // 0xd43 NEW_2
	var_2391_int = 5; // 0xd45 PushI
	var_2392_bool = var_2304_int >= var_2391_int; // 0xd46 GE
	if(var_2392_bool == 0) goto Label_3407; // 0xd47 JumpB
	var_2393_int = 0; var_2394_string = ""; var_2395_string = ""; var_2396_int = 0; // 0xd48 PushV
	var_2393_int = var_2303_int; // 0xd49 Mov
	var_2394_string = "fog"; // 0xd4a MovS
	var_2395_string = "fog_hunter.xml"; // 0xd4b MovS
	var_2396_int = 3; // 0xd4c MovI
	func_529(var_2393_int, var_2394_string, var_2395_string, var_2396_int); // 0xd4d NEW_2
	
Label_3407:
	var_2397_int = 2; // 0xd4f PushI
	var_2398_float = 0; var_2399_int = 0; // 0xd50 PushV
	var_2399_int = var_2304_int; // 0xd51 Mov
	func_1255(var_2398_float, var_2399_int); // 0xd52 NEW_2
	var_2309_int = var_2397_int * var_2398_float; // 0xd54 Mult2
	var_2400_int = var_2309_int; // 0xd55 Push
	if(var_2400_int == 0) goto Label_3422; // 0xd56 JumpB
	var_2401_int = 0; var_2402_string = ""; var_2403_string = ""; var_2404_int = 0; // 0xd57 PushV
	var_2401_int = var_2303_int; // 0xd58 Mov
	var_2402_string = "pers_bomber"; // 0xd59 MovS
	var_2403_string = "bomber.xml"; // 0xd5a MovS
	var_2404_int = var_2309_int; // 0xd5b Mov
	func_503(var_2401_int, var_2402_string, var_2403_string, var_2404_int); // 0xd5c NEW_2
}


func_11501()
{
	var_4409_float = 0; var_4410_int = 0; var_4411_float = 0; var_4412_float = 0; var_4413_int = 0; var_4414_float = 0; // 0x2ced PushV
	GetGameTime(var_4412_float); // 0x2cee Func
	var_4413_int = 1; // 0x2cf0 MovI
	
Label_11505:
	var_4415_int = 288; // 0x2cf1 PushI
	var_4416_bool = var_4413_int < var_4415_int; // 0x2cf2 LT
	if(var_4416_bool == 0) goto Label_11529; // 0x2cf3 JumpB
	var_4417_float = 1.0; // 0x2cf4 PushF
	var_4414_float = var_4417_float * var_4413_int; // 0x2cf5 Mult2
	var_4418_bool = var_4414_float < var_4412_float; // 0x2cf6 LT
	if(var_4418_bool == 0) goto Label_11513; // 0x2cf7 JumpB
	goto Label_11526; // 0x2cf8 Jump
	
Label_11526:
	var_4419_int = 1; // 0x2d06 PushI
	var_4413_int = var_4413_int + var_4419_int; // 0x2d07 Add2
	goto Label_11505; // 0x2d08 Jump
	
Label_11513:
	var_4420_int = 40000; // 0x2cf9 PushI
	var_4421_int = var_4420_int + var_4413_int; // 0x2cfa Add
	SetTimeEvent(var_4421_int, var_4414_float); // 0x2cfb Func
	var_4422_float = 0.00333; // 0x2cfd PushF
	var_4414_float = var_4414_float - var_4422_float; // 0x2cfe Sub2
	var_4423_bool = var_4414_float < var_4412_float; // 0x2cff LT
	if(var_4423_bool == 0) goto Label_11522; // 0x2d00 JumpB
	goto Label_11526; // 0x2d01 Jump
	
Label_11522:
	var_4424_int = 42000; // 0x2d02 PushI
	var_4425_int = var_4424_int + var_4413_int; // 0x2d03 Add
	SetTimeEvent(var_4425_int, var_4414_float); // 0x2d04 Func
	
Label_11529:
	func_8200(); // 0x2d0a NEW_2
	func_13099(); // 0x2d0d NEW_2
	return 6; // 0x2d0f Return
}


func_239(var_672_bool, var_673_string, var_674_string)
{
	var_675_object = Obj(); var_676_object = Obj(); // 0xef PushV
	FindActor(var_676_object, var_673_string); // 0xf0 Func
	var_677_bool = var_676_object == 0; // 0xf2 NullEq
	if(var_677_bool == 0) goto Label_246; // 0xf3 JumpB
	var_672_bool = 0; // 0xf4 MovB
	return 2; // 0xf5 Return
	
Label_246:
	Trigger(var_676_object, var_674_string); // 0xf6 Func
	var_672_bool = 1; // 0xf8 MovB
	return 2; // 0xf9 Return
}


func_7416(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object)
{
	var_4278_int = 0; // 0x1cf9 PushI
	var_4279_bool = var_4273_int == var_4278_int; // 0x1cfa Eq
	if(var_4279_bool == 0) goto Label_7456; // 0x1cfb JumpB
	var_4280_int = 0; var_4281_bool = 0; // 0x1cfc PushV
	var_4280_int = 15; // 0x1cfd MovI
	var_4281_bool = 0; // 0x1cfe MovB
	func_796(var_4280_int, var_4281_bool); // 0x1cff NEW_2
	var_4282_int = 0; var_4283_bool = 0; var_4284_int = 0; // 0x1d01 PushV
	var_4282_int = 15; // 0x1d02 MovI
	var_4283_bool = 0; // 0x1d03 MovB
	var_4284_int = 1; // 0x1d04 MovI
	func_813(var_4282_int, var_4283_bool, var_4284_int); // 0x1d05 NEW_2
	var_4285_int = 0; var_4286_int = 0; var_4287_object = Obj(); var_4288_object = Obj(); var_4289_object = Obj(); // 0x1d07 PushV
	var_4285_int = 15; // 0x1d08 MovI
	var_4286_int = var_4272_int; // 0x1d09 Mov
	var_4287_object = var_4274_object; // 0x1d0a Mov
	var_4288_object = var_4275_object; // 0x1d0b Mov
	var_4289_object = var_4276_object; // 0x1d0c Mov
	func_720(var_4285_int, var_4286_int, var_4287_object, var_4288_object, var_4289_object); // 0x1d0d NEW_2
	var_4290_object = Obj(); var_4291_int = 0; // 0x1d0f PushV
	var_4290_object = var_4277_object; // 0x1d10 Mov
	var_4291_int = 2; // 0x1d11 MovI
	func_305(var_4291_int); // 0x1d12 NEW_2
	var_4292_int = 0; var_4293_bool = 0; var_4294_int = 0; // 0x1d14 PushV
	var_4292_int = 15; // 0x1d15 MovI
	var_4293_bool = 0; // 0x1d16 MovB
	var_4294_int = 5; // 0x1d17 MovI
	func_870(var_4292_int, var_4293_bool, var_4294_int); // 0x1d18 NEW_2
	var_4295_int = 0; var_4296_bool = 0; var_4297_int = 0; // 0x1d1a PushV
	var_4295_int = 15; // 0x1d1b MovI
	var_4296_bool = 1; // 0x1d1c MovB
	var_4297_int = 5; // 0x1d1d MovI
	func_932(var_4295_int, var_4296_bool, var_4297_int); // 0x1d1e NEW_2
	
Label_7456:
	var_4298_int = 0; var_4299_bool = 0; // 0x1d20 PushV
	var_4298_int = 15; // 0x1d21 MovI
	var_4299_bool = 0; // 0x1d22 MovB
	func_779(var_4298_int, var_4299_bool); // 0x1d23 NEW_2
	var_4300_int = 0; var_4301_int = 0; var_4302_int = 0; // 0x1d25 PushV
	var_4300_int = 15; // 0x1d26 MovI
	var_4301_int = var_4272_int; // 0x1d27 Mov
	var_4302_int = var_4273_int; // 0x1d28 Mov
	func_3471(var_4300_int, var_4301_int, var_4302_int); // 0x1d29 NEW_2
	return 0; // 0x1d2b Return
}


func_251(var_4680_bool, var_4681_string, var_4682_string, var_4683_string)
{
	var_4684_object = Obj(); var_4685_object = Obj(); // 0xfb PushV
	FindActor(var_4685_object, var_4681_string); // 0xfc Func
	var_4686_bool = var_4685_object == 0; // 0xfe NullEq
	if(var_4686_bool == 0) goto Label_258; // 0xff JumpB
	var_4680_bool = 0; // 0x100 MovB
	return 2; // 0x101 Return
	
Label_258:
	Trigger(var_4685_object, var_4682_string, var_4683_string); // 0x102 Func
	var_4680_bool = 1; // 0x104 MovB
	return 2; // 0x105 Return
}


func_13574(var_4305_int)
{
	var_4306_object = Obj(); var_4307_object = Obj(); var_4308_object = Obj(); var_4309_object = Obj(); var_4310_object = Obj(); var_4311_string = ""; var_4312_string = ""; var_4313_object = Obj(); var_4314_object = Obj(); var_4315_object = Obj(); var_4316_object = Obj(); var_4317_object = Obj(); var_4318_string = ""; var_4319_string = ""; // 0x3506 PushV
	var_4320_int = 1; // 0x3507 PushI
	var_4321_bool = var_4305_int == var_4320_int; // 0x3508 Eq
	if(var_4321_bool == 0) goto Label_13588; // 0x3509 JumpB
	var_4322_string = "Special diseased house: r4_house_2_02"; // 0x350a PushS
	Trace(var_4322_string); // 0x350b Func
	var_4323_string = "r4_house_2_02"; // 0x350d PushS
	GetSceneByName(var_4313_object, var_4323_string); // 0x350e Func
	var_4324_string = "s_r4_house_2_02.isc"; // 0x3510 PushS
	ReplaceScene(var_4313_object, var_4324_string); // 0x3511 Func
	var_4313_object = 0; // 0x3513 SetNull
	
Label_13588:
	var_4325_int = 3; // 0x3514 PushI
	var_4326_bool = var_4305_int == var_4325_int; // 0x3515 Eq
	if(var_4326_bool == 0) goto Label_13592; // 0x3516 JumpB
	goto Label_13627; // 0x3517 Jump
	
Label_13627:
	var_4327_bool = 0; // 0x353b PushV
	var_4327_bool = 0; // 0x353c MovB
	var_4328_int = 1; // 0x353d PushI
	var_4329_int = var_4305_int + var_4328_int; // 0x353e Add
	var_4330_int = 8; // 0x353f PushI
	var_4331_bool = var_4329_int >= var_4330_int; // 0x3540 GE
	if(var_4331_bool == 0) goto Label_13640; // 0x3541 JumpB
	var_4332_int = 1; // 0x3542 PushI
	var_4333_int = var_4305_int + var_4332_int; // 0x3543 Add
	var_4334_int = 11; // 0x3544 PushI
	var_4335_bool = var_4333_int <= var_4334_int; // 0x3545 LE
	if(var_4335_bool == 0) goto Label_13640; // 0x3546 JumpB
	var_4327_bool = 1; // 0x3547 MovB
	
Label_13640:
	if(var_4327_bool == 0) goto Label_13670; // 0x3548 JumpB
	var_4336_string = ""; var_4337_int = 0; // 0x3549 PushV
	var_4338_int = 1; // 0x354a PushI
	var_4337_int = var_4305_int + var_4338_int; // 0x354b Add2
	func_13047(var_4336_string, var_4337_int); // 0x354c NEW_2
	var_4318_string = var_4336_string; // 0x354d Mov
	GetSceneByName(var_4317_object, var_4318_string); // 0x354f Func
	var_4347_string = "k2s_"; // 0x3551 PushS
	var_4348_int = var_4347_string + var_4318_string; // 0x3552 Add
	var_4349_string = ".isc"; // 0x3553 PushS
	var_4350_int = var_4348_int + var_4349_string; // 0x3554 Add
	ReplaceScene(var_4317_object, var_4350_int); // 0x3555 Func
	var_4351_string = ""; var_4352_int = 0; // 0x3557 PushV
	var_4353_int = 1; // 0x3558 PushI
	var_4352_int = var_4305_int + var_4353_int; // 0x3559 Add2
	func_13073(var_4351_string, var_4352_int); // 0x355a NEW_2
	var_4319_string = var_4351_string; // 0x355b Mov
	GetSceneByName(var_4317_object, var_4319_string); // 0x355d Func
	var_4362_string = "k2s_"; // 0x355f PushS
	var_4363_int = var_4362_string + var_4319_string; // 0x3560 Add
	var_4364_string = ".isc"; // 0x3561 PushS
	var_4365_int = var_4363_int + var_4364_string; // 0x3562 Add
	ReplaceScene(var_4317_object, var_4365_int); // 0x3563 Func
	var_4317_object = 0; // 0x3565 SetNull
	
Label_13670:
	return 14; // 0x3566 Return
	
Label_13592:
	var_4366_int = 4; // 0x3518 PushI
	var_4367_bool = var_4305_int == var_4366_int; // 0x3519 Eq
	if(var_4367_bool == 0) goto Label_13603; // 0x351a JumpB
	var_4368_string = "theater"; // 0x351b PushS
	GetSceneByName(var_4314_object, var_4368_string); // 0x351c Func
	var_4369_string = "dtheater_klara.isc"; // 0x351e PushS
	ReplaceScene(var_4314_object, var_4369_string); // 0x351f Func
	var_4314_object = 0; // 0x3521 SetNull
	goto Label_13627; // 0x3522 Jump
	
Label_13603:
	var_4370_int = 8; // 0x3523 PushI
	var_4371_bool = var_4305_int == var_4370_int; // 0x3524 Eq
	if(var_4371_bool == 0) goto Label_13617; // 0x3525 JumpB
	var_4372_string = "Special replaced house: uprava_admin"; // 0x3526 PushS
	Trace(var_4372_string); // 0x3527 Func
	var_4373_string = "uprava_admin"; // 0x3529 PushS
	GetSceneByName(var_4315_object, var_4373_string); // 0x352a Func
	var_4374_string = "uprava_admin_army_klara.isc"; // 0x352c PushS
	ReplaceScene(var_4315_object, var_4374_string); // 0x352d Func
	var_4315_object = 0; // 0x352f SetNull
	goto Label_13627; // 0x3530 Jump
	
Label_13617:
	var_4375_int = 11; // 0x3531 PushI
	var_4376_bool = var_4305_int == var_4375_int; // 0x3532 Eq
	if(var_4376_bool == 0) goto Label_13627; // 0x3533 JumpB
	var_4377_string = "theater"; // 0x3534 PushS
	GetSceneByName(var_4316_object, var_4377_string); // 0x3535 Func
	var_4378_string = "theater_klara.isc"; // 0x3537 PushS
	ReplaceScene(var_4316_object, var_4378_string); // 0x3538 Func
	var_4316_object = 0; // 0x353a SetNull
}


func_263(var_599_object)
{
	var_600_int = 0; var_601_int = 0; var_602_object = Obj(); var_603_int = 0; var_604_int = 0; var_605_object = Obj(); // 0x107 PushV
	var_606_object = var_599_object; // 0x108 Push
	if(var_606_object == 0) goto Label_283; // 0x109 JumpB
	size(var_603_int); // 0x10a ObjFunc
	var_604_int = 0; // 0x10c MovI
	
Label_269:
	var_607_bool = var_604_int < var_603_int; // 0x10d LT
	if(var_607_bool == 0) goto Label_281; // 0x10e JumpB
	get(var_605_object, var_604_int); // 0x10f ObjFunc
	var_608_object = var_605_object; // 0x111 Push
	if(var_608_object == 0) goto Label_277; // 0x112 JumpB
	Remove(); // 0x113 ObjFunc
	
Label_277:
	var_605_object = 0; // 0x115 SetNull
	var_609_int = 1; // 0x116 PushI
	var_604_int = var_604_int + var_609_int; // 0x117 Add2
	goto Label_269; // 0x118 Jump
	
Label_281:
	clear(); // 0x119 ObjFunc
	
Label_283:
	return 6; // 0x11b Return
}


func_11536(var_4816_int, var_4817_float)
{
	var_4818_int = 45286; // 0x2d11 PushI
	var_4819_bool = var_4816_int == var_4818_int; // 0x2d12 Eq
	if(var_4819_bool == 0) goto Label_11552; // 0x2d13 JumpB
	var_4820_bool = 0; var_4821_object = Obj(); // 0x2d14 PushV
	var_4822_object = GlobalVars[16]; // 0x2d15 PushGE
	var_4821_object = var_4822_object; // 0x2d16 Mov
	func_11276(var_4821_object); // 0x2d18 NEW_2
	var_4829_bool = var_4820_bool == 0; // 0x2d1a Not
	if(var_4829_bool == 0) goto Label_11552; // 0x2d1b JumpB
	var_4830_int = 0; var_4831_float = 0; // 0x2d1c PushV
	var_4831_float = var_4817_float; // 0x2d1d Mov
	func_10132(var_4830_int, var_4831_float); // 0x2d1e NEW_2
	
Label_11552:
	var_4839_int = 45288; // 0x2d20 PushI
	var_4840_bool = var_4816_int == var_4839_int; // 0x2d21 Eq
	if(var_4840_bool == 0) goto Label_11567; // 0x2d22 JumpB
	var_4841_bool = 0; var_4842_object = Obj(); // 0x2d23 PushV
	var_4843_object = GlobalVars[16]; // 0x2d24 PushGE
	var_4842_object = var_4843_object; // 0x2d25 Mov
	func_11300(var_4842_object); // 0x2d27 NEW_2
	var_4848_bool = var_4841_bool == 0; // 0x2d29 Not
	if(var_4848_bool == 0) goto Label_11567; // 0x2d2a JumpB
	var_4849_int = 0; var_4850_float = 0; // 0x2d2b PushV
	var_4850_float = var_4817_float; // 0x2d2c Mov
	func_9943(var_4849_int, var_4850_float); // 0x2d2d NEW_2
	
Label_11567:
	var_4855_int = 45287; // 0x2d2f PushI
	var_4856_bool = var_4816_int == var_4855_int; // 0x2d30 Eq
	if(var_4856_bool == 0) goto Label_11582; // 0x2d31 JumpB
	var_4857_bool = 0; var_4858_object = Obj(); // 0x2d32 PushV
	var_4859_object = GlobalVars[16]; // 0x2d33 PushGE
	var_4858_object = var_4859_object; // 0x2d34 Mov
	func_11288(var_4858_object); // 0x2d36 NEW_2
	var_4864_bool = var_4857_bool == 0; // 0x2d38 Not
	if(var_4864_bool == 0) goto Label_11582; // 0x2d39 JumpB
	var_4865_int = 0; var_4866_float = 0; // 0x2d3a PushV
	var_4866_float = var_4817_float; // 0x2d3b Mov
	func_9925(var_4865_int, var_4866_float); // 0x2d3c NEW_2
	
Label_11582:
	var_4871_int = 45289; // 0x2d3e PushI
	var_4872_bool = var_4816_int == var_4871_int; // 0x2d3f Eq
	if(var_4872_bool == 0) goto Label_11597; // 0x2d40 JumpB
	var_4873_bool = 0; var_4874_object = Obj(); // 0x2d41 PushV
	var_4875_object = GlobalVars[16]; // 0x2d42 PushGE
	var_4874_object = var_4875_object; // 0x2d43 Mov
	func_11024(var_4874_object); // 0x2d45 NEW_2
	var_4880_bool = var_4873_bool == 0; // 0x2d47 Not
	if(var_4880_bool == 0) goto Label_11597; // 0x2d48 JumpB
	var_4881_int = 0; var_4882_float = 0; // 0x2d49 PushV
	var_4882_float = var_4817_float; // 0x2d4a Mov
	func_9952(var_4881_int, var_4882_float); // 0x2d4b NEW_2
	
Label_11597:
	var_4887_int = 45272; // 0x2d4d PushI
	var_4888_bool = var_4816_int == var_4887_int; // 0x2d4e Eq
	if(var_4888_bool == 0) goto Label_11609; // 0x2d4f JumpB
	var_4889_object = Obj(); var_4890_object = Obj(); // 0x2d50 PushV
	var_4891_object = GlobalVars[16]; // 0x2d51 PushGE
	var_4889_object = var_4891_object; // 0x2d52 Mov
	var_4892_object = GlobalVars[16]; // 0x2d54 PushGE
	var_4890_object = var_4892_object; // 0x2d55 Mov
	func_10843(); // 0x2d57 NEW_2
	
Label_11609:
	var_4901_int = 45277; // 0x2d59 PushI
	var_4902_bool = var_4816_int == var_4901_int; // 0x2d5a Eq
	if(var_4902_bool == 0) goto Label_11621; // 0x2d5b JumpB
	var_4903_object = Obj(); var_4904_object = Obj(); // 0x2d5c PushV
	var_4905_object = GlobalVars[16]; // 0x2d5d PushGE
	var_4903_object = var_4905_object; // 0x2d5e Mov
	var_4906_object = GlobalVars[16]; // 0x2d60 PushGE
	var_4904_object = var_4906_object; // 0x2d61 Mov
	func_10928(); // 0x2d63 NEW_2
	
Label_11621:
	var_4915_int = 45280; // 0x2d65 PushI
	var_4916_bool = var_4816_int == var_4915_int; // 0x2d66 Eq
	if(var_4916_bool == 0) goto Label_11627; // 0x2d67 JumpB
	var_4917_string = "army.wmv"; // 0x2d68 PushS
	QueuePlayMovie(var_4917_string); // 0x2d69 Func
	
Label_11627:
	var_4918_int = 45284; // 0x2d6b PushI
	var_4919_bool = var_4816_int == var_4918_int; // 0x2d6c Eq
	if(var_4919_bool == 0) goto Label_11642; // 0x2d6d JumpB
	var_4920_bool = 0; var_4921_object = Obj(); // 0x2d6e PushV
	var_4922_object = GlobalVars[16]; // 0x2d6f PushGE
	var_4921_object = var_4922_object; // 0x2d70 Mov
	func_11252(var_4921_object); // 0x2d72 NEW_2
	var_4927_bool = var_4920_bool == 0; // 0x2d74 Not
	if(var_4927_bool == 0) goto Label_11642; // 0x2d75 JumpB
	var_4928_int = 0; var_4929_float = 0; // 0x2d76 PushV
	var_4929_float = var_4817_float; // 0x2d77 Mov
	func_10114(var_4928_int, var_4929_float); // 0x2d78 NEW_2
	
Label_11642:
	var_4934_int = 45258; // 0x2d7a PushI
	var_4935_bool = var_4816_int == var_4934_int; // 0x2d7b Eq
	if(var_4935_bool == 0) goto Label_11649; // 0x2d7c JumpB
	var_4936_int = 0; var_4937_float = 0; // 0x2d7d PushV
	var_4937_float = var_4817_float; // 0x2d7e Mov
	func_10015(var_4936_int, var_4937_float); // 0x2d7f NEW_2
	
Label_11649:
	var_4942_int = 45285; // 0x2d81 PushI
	var_4943_bool = var_4816_int == var_4942_int; // 0x2d82 Eq
	if(var_4943_bool == 0) goto Label_11664; // 0x2d83 JumpB
	var_4944_bool = 0; var_4945_object = Obj(); // 0x2d84 PushV
	var_4946_object = GlobalVars[16]; // 0x2d85 PushGE
	var_4945_object = var_4946_object; // 0x2d86 Mov
	func_11264(var_4945_object); // 0x2d88 NEW_2
	var_4951_bool = var_4944_bool == 0; // 0x2d8a Not
	if(var_4951_bool == 0) goto Label_11664; // 0x2d8b JumpB
	var_4952_int = 0; var_4953_float = 0; // 0x2d8c PushV
	var_4953_float = var_4817_float; // 0x2d8d Mov
	func_10123(var_4952_int, var_4953_float); // 0x2d8e NEW_2
	
Label_11664:
	var_4958_int = 45279; // 0x2d90 PushI
	var_4959_bool = var_4816_int == var_4958_int; // 0x2d91 Eq
	if(var_4959_bool == 0) goto Label_11670; // 0x2d92 JumpB
	var_4960_string = "aglaja.wmv"; // 0x2d93 PushS
	QueuePlayMovie(var_4960_string); // 0x2d94 Func
	
Label_11670:
	var_4961_int = 45256; // 0x2d96 PushI
	var_4962_bool = var_4816_int == var_4961_int; // 0x2d97 Eq
	if(var_4962_bool == 0) goto Label_11685; // 0x2d98 JumpB
	var_4963_bool = 0; var_4964_object = Obj(); // 0x2d99 PushV
	var_4965_object = GlobalVars[16]; // 0x2d9a PushGE
	var_4964_object = var_4965_object; // 0x2d9b Mov
	func_11228(var_4964_object); // 0x2d9d NEW_2
	var_4970_bool = var_4963_bool == 0; // 0x2d9f Not
	if(var_4970_bool == 0) goto Label_11685; // 0x2da0 JumpB
	var_4971_int = 0; var_4972_float = 0; // 0x2da1 PushV
	var_4972_float = var_4817_float; // 0x2da2 Mov
	func_10105(var_4971_int, var_4972_float); // 0x2da3 NEW_2
	
Label_11685:
	var_4977_int = 45274; // 0x2da5 PushI
	var_4978_bool = var_4816_int == var_4977_int; // 0x2da6 Eq
	if(var_4978_bool == 0) goto Label_11697; // 0x2da7 JumpB
	var_4979_object = Obj(); var_4980_object = Obj(); // 0x2da8 PushV
	var_4981_object = GlobalVars[16]; // 0x2da9 PushGE
	var_4979_object = var_4981_object; // 0x2daa Mov
	var_4982_object = GlobalVars[16]; // 0x2dac PushGE
	var_4980_object = var_4982_object; // 0x2dad Mov
	func_10877(); // 0x2daf NEW_2
	
Label_11697:
	var_4991_int = 45276; // 0x2db1 PushI
	var_4992_bool = var_4816_int == var_4991_int; // 0x2db2 Eq
	if(var_4992_bool == 0) goto Label_11709; // 0x2db3 JumpB
	var_4993_object = Obj(); var_4994_object = Obj(); // 0x2db4 PushV
	var_4995_object = GlobalVars[16]; // 0x2db5 PushGE
	var_4993_object = var_4995_object; // 0x2db6 Mov
	var_4996_object = GlobalVars[16]; // 0x2db8 PushGE
	var_4994_object = var_4996_object; // 0x2db9 Mov
	func_10911(); // 0x2dbb NEW_2
	
Label_11709:
	var_5005_int = 45281; // 0x2dbd PushI
	var_5006_bool = var_4816_int == var_5005_int; // 0x2dbe Eq
	if(var_5006_bool == 0) goto Label_11724; // 0x2dbf JumpB
	var_5007_bool = 0; var_5008_object = Obj(); // 0x2dc0 PushV
	var_5009_object = GlobalVars[16]; // 0x2dc1 PushGE
	var_5008_object = var_5009_object; // 0x2dc2 Mov
	func_11240(var_5008_object); // 0x2dc4 NEW_2
	var_5014_bool = var_5007_bool == 0; // 0x2dc6 Not
	if(var_5014_bool == 0) goto Label_11724; // 0x2dc7 JumpB
	var_5015_int = 0; var_5016_float = 0; // 0x2dc8 PushV
	var_5016_float = var_4817_float; // 0x2dc9 Mov
	func_10069(var_5015_int, var_5016_float); // 0x2dca NEW_2
	
Label_11724:
	var_5021_int = 45283; // 0x2dcc PushI
	var_5022_bool = var_4816_int == var_5021_int; // 0x2dcd Eq
	if(var_5022_bool == 0) goto Label_11736; // 0x2dce JumpB
	var_5023_object = Obj(); var_5024_object = Obj(); // 0x2dcf PushV
	var_5025_object = GlobalVars[16]; // 0x2dd0 PushGE
	var_5023_object = var_5025_object; // 0x2dd1 Mov
	var_5026_object = GlobalVars[16]; // 0x2dd3 PushGE
	var_5024_object = var_5026_object; // 0x2dd4 Mov
	func_10950(); // 0x2dd6 NEW_2
	
Label_11736:
	var_5070_int = 45275; // 0x2dd8 PushI
	var_5071_bool = var_4816_int == var_5070_int; // 0x2dd9 Eq
	if(var_5071_bool == 0) goto Label_11748; // 0x2dda JumpB
	var_5072_object = Obj(); var_5073_object = Obj(); // 0x2ddb PushV
	var_5074_object = GlobalVars[16]; // 0x2ddc PushGE
	var_5072_object = var_5074_object; // 0x2ddd Mov
	var_5075_object = GlobalVars[16]; // 0x2ddf PushGE
	var_5073_object = var_5075_object; // 0x2de0 Mov
	func_10894(); // 0x2de2 NEW_2
	
Label_11748:
	var_5084_int = 45278; // 0x2de4 PushI
	var_5085_bool = var_4816_int == var_5084_int; // 0x2de5 Eq
	if(var_5085_bool == 0) goto Label_11768; // 0x2de6 JumpB
	var_5086_bool = 0; var_5087_object = Obj(); // 0x2de7 PushV
	var_5088_object = GlobalVars[16]; // 0x2de8 PushGE
	var_5087_object = var_5088_object; // 0x2de9 Mov
	func_11060(var_5087_object); // 0x2deb NEW_2
	var_5093_bool = var_5086_bool == 0; // 0x2ded Not
	if(var_5093_bool == 0) goto Label_11768; // 0x2dee JumpB
	var_5094_object = Obj(); var_5095_object = Obj(); // 0x2def PushV
	var_5096_object = GlobalVars[16]; // 0x2df0 PushGE
	var_5094_object = var_5096_object; // 0x2df1 Mov
	var_5097_object = GlobalVars[16]; // 0x2df3 PushGE
	var_5095_object = var_5097_object; // 0x2df4 Mov
	func_11008(); // 0x2df6 NEW_2
	
Label_11768:
	var_5133_int = 45273; // 0x2df8 PushI
	var_5134_bool = var_4816_int == var_5133_int; // 0x2df9 Eq
	if(var_5134_bool == 0) goto Label_11780; // 0x2dfa JumpB
	var_5135_object = Obj(); var_5136_object = Obj(); // 0x2dfb PushV
	var_5137_object = GlobalVars[16]; // 0x2dfc PushGE
	var_5135_object = var_5137_object; // 0x2dfd Mov
	var_5138_object = GlobalVars[16]; // 0x2dff PushGE
	var_5136_object = var_5138_object; // 0x2e00 Mov
	func_10860(); // 0x2e02 NEW_2
	
Label_11780:
	var_5147_int = 45257; // 0x2e04 PushI
	var_5148_bool = var_4816_int == var_5147_int; // 0x2e05 Eq
	if(var_5148_bool == 0) goto Label_11787; // 0x2e06 JumpB
	var_5149_int = 0; var_5150_float = 0; // 0x2e07 PushV
	var_5150_float = var_4817_float; // 0x2e08 Mov
	func_10006(var_5149_int, var_5150_float); // 0x2e09 NEW_2
	
Label_11787:
	var_5155_int = 45243; // 0x2e0b PushI
	var_5156_bool = var_4816_int == var_5155_int; // 0x2e0c Eq
	if(var_5156_bool == 0) goto Label_11811; // 0x2e0d JumpB
	var_5157_bool = 0; var_5158_object = Obj(); // 0x2e0e PushV
	var_5159_object = GlobalVars[16]; // 0x2e0f PushGE
	var_5158_object = var_5159_object; // 0x2e10 Mov
	func_11084(var_5158_object); // 0x2e12 NEW_2
	var_5164_bool = var_5157_bool == 0; // 0x2e14 Not
	if(var_5164_bool == 0) goto Label_11811; // 0x2e15 JumpB
	var_5165_object = Obj(); var_5166_object = Obj(); // 0x2e16 PushV
	var_5167_object = GlobalVars[16]; // 0x2e17 PushGE
	var_5165_object = var_5167_object; // 0x2e18 Mov
	var_5168_object = GlobalVars[16]; // 0x2e1a PushGE
	var_5166_object = var_5168_object; // 0x2e1b Mov
	func_10827(); // 0x2e1d NEW_2
	var_5185_int = 0; var_5186_float = 0; // 0x2e1f PushV
	var_5186_float = var_4817_float; // 0x2e20 Mov
	func_9997(var_5185_int, var_5186_float); // 0x2e21 NEW_2
	
Label_11811:
	var_5191_int = 45172; // 0x2e23 PushI
	var_5192_bool = var_4816_int == var_5191_int; // 0x2e24 Eq
	if(var_5192_bool == 0) goto Label_11825; // 0x2e25 JumpB
	var_5193_bool = 0; var_5194_object = Obj(); // 0x2e26 PushV
	var_5195_object = GlobalVars[16]; // 0x2e27 PushGE
	var_5194_object = var_5195_object; // 0x2e28 Mov
	func_11312(var_5193_bool, var_5194_object); // 0x2e2a NEW_2
	if(var_5193_bool == 0) goto Label_11825; // 0x2e2c JumpB
	var_5198_int = 0; var_5199_float = 0; // 0x2e2d PushV
	var_5199_float = var_4817_float; // 0x2e2e Mov
	func_9916(var_5198_int, var_5199_float); // 0x2e2f NEW_2
	
Label_11825:
	var_5204_int = 45249; // 0x2e31 PushI
	var_5205_bool = var_4816_int == var_5204_int; // 0x2e32 Eq
	if(var_5205_bool == 0) goto Label_11832; // 0x2e33 JumpB
	var_5206_object = Obj(); var_5207_string = ""; // 0x2e34 PushV
	var_5207_string = "quest_k5_04"; // 0x2e35 MovS
	func_137(var_5206_object, var_5207_string); // 0x2e36 NEW_2
	
Label_11832:
	var_5214_int = 45241; // 0x2e38 PushI
	var_5215_bool = var_4816_int == var_5214_int; // 0x2e39 Eq
	if(var_5215_bool == 0) goto Label_11839; // 0x2e3a JumpB
	var_5216_int = 0; var_5217_float = 0; // 0x2e3b PushV
	var_5217_float = var_4817_float; // 0x2e3c Mov
	func_9970(var_5216_int, var_5217_float); // 0x2e3d NEW_2
	
Label_11839:
	var_5222_int = 45245; // 0x2e3f PushI
	var_5223_bool = var_4816_int == var_5222_int; // 0x2e40 Eq
	if(var_5223_bool == 0) goto Label_11846; // 0x2e41 JumpB
	var_5224_int = 0; var_5225_float = 0; // 0x2e42 PushV
	var_5225_float = var_4817_float; // 0x2e43 Mov
	func_10024(var_5224_int, var_5225_float); // 0x2e44 NEW_2
	
Label_11846:
	var_5230_int = 45252; // 0x2e46 PushI
	var_5231_bool = var_4816_int == var_5230_int; // 0x2e47 Eq
	if(var_5231_bool == 0) goto Label_11873; // 0x2e48 JumpB
	var_5232_bool = 0; // 0x2e49 PushV
	var_5232_bool = 1; // 0x2e4a MovB
	var_5233_bool = 0; var_5234_object = Obj(); // 0x2e4b PushV
	var_5235_object = GlobalVars[16]; // 0x2e4c PushGE
	var_5234_object = var_5235_object; // 0x2e4d Mov
	func_11168(var_5234_object); // 0x2e4f NEW_2
	var_5240_bool = var_5233_bool == 0; // 0x2e51 Not
	if(var_5240_bool == 0) goto Label_11868; // 0x2e52 JumpB
	var_5241_bool = 0; var_5242_object = Obj(); // 0x2e53 PushV
	var_5243_object = GlobalVars[16]; // 0x2e54 PushGE
	var_5242_object = var_5243_object; // 0x2e55 Mov
	func_11180(var_5242_object); // 0x2e57 NEW_2
	var_5248_bool = var_5241_bool == 0; // 0x2e59 Not
	if(var_5248_bool == 0) goto Label_11868; // 0x2e5a JumpB
	var_5232_bool = 0; // 0x2e5b MovB
	
Label_11868:
	if(var_5232_bool == 0) goto Label_11873; // 0x2e5c JumpB
	var_5249_int = 0; var_5250_float = 0; // 0x2e5d PushV
	var_5250_float = var_4817_float; // 0x2e5e Mov
	func_9979(var_5249_int, var_5250_float); // 0x2e5f NEW_2
	
Label_11873:
	var_5255_int = 45247; // 0x2e61 PushI
	var_5256_bool = var_4816_int == var_5255_int; // 0x2e62 Eq
	if(var_5256_bool == 0) goto Label_11880; // 0x2e63 JumpB
	var_5257_int = 0; var_5258_float = 0; // 0x2e64 PushV
	var_5258_float = var_4817_float; // 0x2e65 Mov
	func_10087(var_5257_int, var_5258_float); // 0x2e66 NEW_2
	
Label_11880:
	var_5263_int = 45170; // 0x2e68 PushI
	var_5264_bool = var_4816_int == var_5263_int; // 0x2e69 Eq
	if(var_5264_bool == 0) goto Label_11894; // 0x2e6a JumpB
	var_5265_bool = 0; var_5266_object = Obj(); // 0x2e6b PushV
	var_5267_object = GlobalVars[16]; // 0x2e6c PushGE
	var_5266_object = var_5267_object; // 0x2e6d Mov
	func_11312(var_5265_bool, var_5266_object); // 0x2e6f NEW_2
	if(var_5265_bool == 0) goto Label_11894; // 0x2e71 JumpB
	var_5268_int = 0; var_5269_float = 0; // 0x2e72 PushV
	var_5269_float = var_4817_float; // 0x2e73 Mov
	func_9889(var_5268_int, var_5269_float); // 0x2e74 NEW_2
	
Label_11894:
	var_5274_int = 45253; // 0x2e76 PushI
	var_5275_bool = var_4816_int == var_5274_int; // 0x2e77 Eq
	if(var_5275_bool == 0) goto Label_11921; // 0x2e78 JumpB
	var_5276_bool = 0; // 0x2e79 PushV
	var_5276_bool = 1; // 0x2e7a MovB
	var_5277_bool = 0; var_5278_object = Obj(); // 0x2e7b PushV
	var_5279_object = GlobalVars[16]; // 0x2e7c PushGE
	var_5278_object = var_5279_object; // 0x2e7d Mov
	func_11204(var_5278_object); // 0x2e7f NEW_2
	var_5284_bool = var_5277_bool == 0; // 0x2e81 Not
	if(var_5284_bool == 0) goto Label_11916; // 0x2e82 JumpB
	var_5285_bool = 0; var_5286_object = Obj(); // 0x2e83 PushV
	var_5287_object = GlobalVars[16]; // 0x2e84 PushGE
	var_5286_object = var_5287_object; // 0x2e85 Mov
	func_11192(var_5286_object); // 0x2e87 NEW_2
	var_5292_bool = var_5285_bool == 0; // 0x2e89 Not
	if(var_5292_bool == 0) goto Label_11916; // 0x2e8a JumpB
	var_5276_bool = 0; // 0x2e8b MovB
	
Label_11916:
	if(var_5276_bool == 0) goto Label_11921; // 0x2e8c JumpB
	var_5293_int = 0; var_5294_float = 0; // 0x2e8d PushV
	var_5294_float = var_4817_float; // 0x2e8e Mov
	func_9979(var_5293_int, var_5294_float); // 0x2e8f NEW_2
	
Label_11921:
	var_5295_int = 45173; // 0x2e91 PushI
	var_5296_bool = var_4816_int == var_5295_int; // 0x2e92 Eq
	if(var_5296_bool == 0) goto Label_11935; // 0x2e93 JumpB
	var_5297_bool = 0; var_5298_object = Obj(); // 0x2e94 PushV
	var_5299_object = GlobalVars[16]; // 0x2e95 PushGE
	var_5298_object = var_5299_object; // 0x2e96 Mov
	func_11312(var_5297_bool, var_5298_object); // 0x2e98 NEW_2
	if(var_5297_bool == 0) goto Label_11935; // 0x2e9a JumpB
	var_5300_int = 0; var_5301_float = 0; // 0x2e9b PushV
	var_5301_float = var_4817_float; // 0x2e9c Mov
	func_9934(var_5300_int, var_5301_float); // 0x2e9d NEW_2
	
Label_11935:
	var_5306_int = 45254; // 0x2e9f PushI
	var_5307_bool = var_4816_int == var_5306_int; // 0x2ea0 Eq
	if(var_5307_bool == 0) goto Label_11942; // 0x2ea1 JumpB
	var_5308_int = 0; var_5309_float = 0; // 0x2ea2 PushV
	var_5309_float = var_4817_float; // 0x2ea3 Mov
	func_10042(var_5308_int, var_5309_float); // 0x2ea4 NEW_2
	
Label_11942:
	var_5314_int = 45255; // 0x2ea6 PushI
	var_5315_bool = var_4816_int == var_5314_int; // 0x2ea7 Eq
	if(var_5315_bool == 0) goto Label_11957; // 0x2ea8 JumpB
	var_5316_bool = 0; var_5317_object = Obj(); // 0x2ea9 PushV
	var_5318_object = GlobalVars[16]; // 0x2eaa PushGE
	var_5317_object = var_5318_object; // 0x2eab Mov
	func_11216(var_5317_object); // 0x2ead NEW_2
	var_5323_bool = var_5316_bool == 0; // 0x2eaf Not
	if(var_5323_bool == 0) goto Label_11957; // 0x2eb0 JumpB
	var_5324_int = 0; var_5325_float = 0; // 0x2eb1 PushV
	var_5325_float = var_4817_float; // 0x2eb2 Mov
	func_10078(var_5324_int, var_5325_float); // 0x2eb3 NEW_2
	
Label_11957:
	var_5330_int = 45167; // 0x2eb5 PushI
	var_5331_bool = var_4816_int == var_5330_int; // 0x2eb6 Eq
	if(var_5331_bool == 0) goto Label_11971; // 0x2eb7 JumpB
	var_5332_bool = 0; var_5333_object = Obj(); // 0x2eb8 PushV
	var_5334_object = GlobalVars[16]; // 0x2eb9 PushGE
	var_5333_object = var_5334_object; // 0x2eba Mov
	func_11312(var_5332_bool, var_5333_object); // 0x2ebc NEW_2
	if(var_5332_bool == 0) goto Label_11971; // 0x2ebe JumpB
	var_5335_int = 0; var_5336_float = 0; // 0x2ebf PushV
	var_5336_float = var_4817_float; // 0x2ec0 Mov
	func_9862(var_5335_int, var_5336_float); // 0x2ec1 NEW_2
	
Label_11971:
	var_5341_int = 45240; // 0x2ec3 PushI
	var_5342_bool = var_4816_int == var_5341_int; // 0x2ec4 Eq
	if(var_5342_bool == 0) goto Label_11986; // 0x2ec5 JumpB
	var_5343_bool = 0; var_5344_object = Obj(); // 0x2ec6 PushV
	var_5345_object = GlobalVars[16]; // 0x2ec7 PushGE
	var_5344_object = var_5345_object; // 0x2ec8 Mov
	func_11060(var_5344_object); // 0x2eca NEW_2
	var_5346_bool = var_5343_bool == 0; // 0x2ecc Not
	if(var_5346_bool == 0) goto Label_11986; // 0x2ecd JumpB
	var_5347_int = 0; var_5348_float = 0; // 0x2ece PushV
	var_5348_float = var_4817_float; // 0x2ecf Mov
	func_9961(var_5347_int, var_5348_float); // 0x2ed0 NEW_2
	
Label_11986:
	var_5353_int = 45250; // 0x2ed2 PushI
	var_5354_bool = var_4816_int == var_5353_int; // 0x2ed3 Eq
	if(var_5354_bool == 0) goto Label_12013; // 0x2ed4 JumpB
	var_5355_bool = 0; // 0x2ed5 PushV
	var_5355_bool = 1; // 0x2ed6 MovB
	var_5356_bool = 0; var_5357_object = Obj(); // 0x2ed7 PushV
	var_5358_object = GlobalVars[16]; // 0x2ed8 PushGE
	var_5357_object = var_5358_object; // 0x2ed9 Mov
	func_11120(var_5357_object); // 0x2edb NEW_2
	var_5363_bool = var_5356_bool == 0; // 0x2edd Not
	if(var_5363_bool == 0) goto Label_12008; // 0x2ede JumpB
	var_5364_bool = 0; var_5365_object = Obj(); // 0x2edf PushV
	var_5366_object = GlobalVars[16]; // 0x2ee0 PushGE
	var_5365_object = var_5366_object; // 0x2ee1 Mov
	func_11132(var_5365_object); // 0x2ee3 NEW_2
	var_5371_bool = var_5364_bool == 0; // 0x2ee5 Not
	if(var_5371_bool == 0) goto Label_12008; // 0x2ee6 JumpB
	var_5355_bool = 0; // 0x2ee7 MovB
	
Label_12008:
	if(var_5355_bool == 0) goto Label_12013; // 0x2ee8 JumpB
	var_5372_int = 0; var_5373_float = 0; // 0x2ee9 PushV
	var_5373_float = var_4817_float; // 0x2eea Mov
	func_9979(var_5372_int, var_5373_float); // 0x2eeb NEW_2
	
Label_12013:
	var_5374_int = 45168; // 0x2eed PushI
	var_5375_bool = var_4816_int == var_5374_int; // 0x2eee Eq
	if(var_5375_bool == 0) goto Label_12027; // 0x2eef JumpB
	var_5376_bool = 0; var_5377_object = Obj(); // 0x2ef0 PushV
	var_5378_object = GlobalVars[16]; // 0x2ef1 PushGE
	var_5377_object = var_5378_object; // 0x2ef2 Mov
	func_11312(var_5376_bool, var_5377_object); // 0x2ef4 NEW_2
	if(var_5376_bool == 0) goto Label_12027; // 0x2ef6 JumpB
	var_5379_int = 0; var_5380_float = 0; // 0x2ef7 PushV
	var_5380_float = var_4817_float; // 0x2ef8 Mov
	func_9871(var_5379_int, var_5380_float); // 0x2ef9 NEW_2
	
Label_12027:
	var_5385_int = 45171; // 0x2efb PushI
	var_5386_bool = var_4816_int == var_5385_int; // 0x2efc Eq
	if(var_5386_bool == 0) goto Label_12041; // 0x2efd JumpB
	var_5387_bool = 0; var_5388_object = Obj(); // 0x2efe PushV
	var_5389_object = GlobalVars[16]; // 0x2eff PushGE
	var_5388_object = var_5389_object; // 0x2f00 Mov
	func_11312(var_5387_bool, var_5388_object); // 0x2f02 NEW_2
	if(var_5387_bool == 0) goto Label_12041; // 0x2f04 JumpB
	var_5390_int = 0; var_5391_float = 0; // 0x2f05 PushV
	var_5391_float = var_4817_float; // 0x2f06 Mov
	func_9898(var_5390_int, var_5391_float); // 0x2f07 NEW_2
	
Label_12041:
	var_5396_int = 45244; // 0x2f09 PushI
	var_5397_bool = var_4816_int == var_5396_int; // 0x2f0a Eq
	if(var_5397_bool == 0) goto Label_12048; // 0x2f0b JumpB
	var_5398_int = 0; var_5399_float = 0; // 0x2f0c PushV
	var_5399_float = var_4817_float; // 0x2f0d Mov
	func_9988(var_5398_int, var_5399_float); // 0x2f0e NEW_2
	
Label_12048:
	var_5404_int = 45246; // 0x2f10 PushI
	var_5405_bool = var_4816_int == var_5404_int; // 0x2f11 Eq
	if(var_5405_bool == 0) goto Label_12055; // 0x2f12 JumpB
	var_5406_int = 0; var_5407_float = 0; // 0x2f13 PushV
	var_5407_float = var_4817_float; // 0x2f14 Mov
	func_10060(var_5406_int, var_5407_float); // 0x2f15 NEW_2
	
Label_12055:
	var_5412_int = 45236; // 0x2f17 PushI
	var_5413_bool = var_4816_int == var_5412_int; // 0x2f18 Eq
	if(var_5413_bool == 0) goto Label_12062; // 0x2f19 JumpB
	var_5414_int = 0; var_5415_float = 0; // 0x2f1a PushV
	var_5415_float = var_4817_float; // 0x2f1b Mov
	func_10033(var_5414_int, var_5415_float); // 0x2f1c NEW_2
	
Label_12062:
	var_5420_int = 45248; // 0x2f1e PushI
	var_5421_bool = var_4816_int == var_5420_int; // 0x2f1f Eq
	if(var_5421_bool == 0) goto Label_12077; // 0x2f20 JumpB
	var_5422_bool = 0; var_5423_object = Obj(); // 0x2f21 PushV
	var_5424_object = GlobalVars[16]; // 0x2f22 PushGE
	var_5423_object = var_5424_object; // 0x2f23 Mov
	func_11096(var_5423_object); // 0x2f25 NEW_2
	var_5429_bool = var_5422_bool == 0; // 0x2f27 Not
	if(var_5429_bool == 0) goto Label_12077; // 0x2f28 JumpB
	var_5430_int = 0; var_5431_float = 0; // 0x2f29 PushV
	var_5431_float = var_4817_float; // 0x2f2a Mov
	func_10096(var_5430_int, var_5431_float); // 0x2f2b NEW_2
	
Label_12077:
	var_5436_int = 45251; // 0x2f2d PushI
	var_5437_bool = var_4816_int == var_5436_int; // 0x2f2e Eq
	if(var_5437_bool == 0) goto Label_12104; // 0x2f2f JumpB
	var_5438_bool = 0; // 0x2f30 PushV
	var_5438_bool = 1; // 0x2f31 MovB
	var_5439_bool = 0; var_5440_object = Obj(); // 0x2f32 PushV
	var_5441_object = GlobalVars[16]; // 0x2f33 PushGE
	var_5440_object = var_5441_object; // 0x2f34 Mov
	func_11144(var_5440_object); // 0x2f36 NEW_2
	var_5446_bool = var_5439_bool == 0; // 0x2f38 Not
	if(var_5446_bool == 0) goto Label_12099; // 0x2f39 JumpB
	var_5447_bool = 0; var_5448_object = Obj(); // 0x2f3a PushV
	var_5449_object = GlobalVars[16]; // 0x2f3b PushGE
	var_5448_object = var_5449_object; // 0x2f3c Mov
	func_11156(var_5448_object); // 0x2f3e NEW_2
	var_5454_bool = var_5447_bool == 0; // 0x2f40 Not
	if(var_5454_bool == 0) goto Label_12099; // 0x2f41 JumpB
	var_5438_bool = 0; // 0x2f42 MovB
	
Label_12099:
	if(var_5438_bool == 0) goto Label_12104; // 0x2f43 JumpB
	var_5455_int = 0; var_5456_float = 0; // 0x2f44 PushV
	var_5456_float = var_4817_float; // 0x2f45 Mov
	func_9979(var_5455_int, var_5456_float); // 0x2f46 NEW_2
	
Label_12104:
	var_5457_int = 45242; // 0x2f48 PushI
	var_5458_bool = var_4816_int == var_5457_int; // 0x2f49 Eq
	if(var_5458_bool == 0) goto Label_12131; // 0x2f4a JumpB
	var_5459_bool = 0; // 0x2f4b PushV
	var_5459_bool = 1; // 0x2f4c MovB
	var_5460_bool = 0; var_5461_object = Obj(); // 0x2f4d PushV
	var_5462_object = GlobalVars[16]; // 0x2f4e PushGE
	var_5461_object = var_5462_object; // 0x2f4f Mov
	func_11072(var_5461_object); // 0x2f51 NEW_2
	var_5467_bool = var_5460_bool == 0; // 0x2f53 Not
	if(var_5467_bool == 0) goto Label_12126; // 0x2f54 JumpB
	var_5468_bool = 0; var_5469_object = Obj(); // 0x2f55 PushV
	var_5470_object = GlobalVars[16]; // 0x2f56 PushGE
	var_5469_object = var_5470_object; // 0x2f57 Mov
	func_11108(var_5469_object); // 0x2f59 NEW_2
	var_5475_bool = var_5468_bool == 0; // 0x2f5b Not
	if(var_5475_bool == 0) goto Label_12126; // 0x2f5c JumpB
	var_5459_bool = 0; // 0x2f5d MovB
	
Label_12126:
	if(var_5459_bool == 0) goto Label_12131; // 0x2f5e JumpB
	var_5476_int = 0; var_5477_float = 0; // 0x2f5f PushV
	var_5477_float = var_4817_float; // 0x2f60 Mov
	func_9979(var_5476_int, var_5477_float); // 0x2f61 NEW_2
	
Label_12131:
	var_5478_int = 45169; // 0x2f63 PushI
	var_5479_bool = var_4816_int == var_5478_int; // 0x2f64 Eq
	if(var_5479_bool == 0) goto Label_12145; // 0x2f65 JumpB
	var_5480_bool = 0; var_5481_object = Obj(); // 0x2f66 PushV
	var_5482_object = GlobalVars[16]; // 0x2f67 PushGE
	var_5481_object = var_5482_object; // 0x2f68 Mov
	func_11312(var_5480_bool, var_5481_object); // 0x2f6a NEW_2
	if(var_5480_bool == 0) goto Label_12145; // 0x2f6c JumpB
	var_5483_int = 0; var_5484_float = 0; // 0x2f6d PushV
	var_5484_float = var_4817_float; // 0x2f6e Mov
	func_9880(var_5483_int, var_5484_float); // 0x2f6f NEW_2
	
Label_12145:
	var_5489_int = 45108; // 0x2f71 PushI
	var_5490_bool = var_4816_int == var_5489_int; // 0x2f72 Eq
	if(var_5490_bool == 0) goto Label_12166; // 0x2f73 JumpB
	var_5491_object = Obj(); var_5492_object = Obj(); // 0x2f74 PushV
	var_5493_object = GlobalVars[16]; // 0x2f75 PushGE
	var_5491_object = var_5493_object; // 0x2f76 Mov
	var_5494_object = GlobalVars[16]; // 0x2f78 PushGE
	var_5492_object = var_5494_object; // 0x2f79 Mov
	func_10757(); // 0x2f7b NEW_2
	var_5512_bool = 0; var_5513_string = ""; var_5514_string = ""; // 0x2f7d PushV
	var_5513_string = "quest_k10_01"; // 0x2f7e MovS
	var_5514_string = "cleanup"; // 0x2f7f MovS
	func_239(var_5512_bool, var_5513_string, var_5514_string); // 0x2f80 NEW_2
	var_5515_object = Obj(); var_5516_string = ""; // 0x2f82 PushV
	var_5516_string = "quest_k11_01"; // 0x2f83 MovS
	func_137(var_5515_object, var_5516_string); // 0x2f84 NEW_2
	
Label_12166:
	var_5517_int = 45102; // 0x2f86 PushI
	var_5518_bool = var_4816_int == var_5517_int; // 0x2f87 Eq
	if(var_5518_bool == 0) goto Label_12182; // 0x2f88 JumpB
	var_5519_object = Obj(); var_5520_object = Obj(); // 0x2f89 PushV
	var_5521_object = GlobalVars[16]; // 0x2f8a PushGE
	var_5519_object = var_5521_object; // 0x2f8b Mov
	var_5522_object = GlobalVars[16]; // 0x2f8d PushGE
	var_5520_object = var_5522_object; // 0x2f8e Mov
	func_10530(); // 0x2f90 NEW_2
	var_5552_object = Obj(); var_5553_string = ""; // 0x2f92 PushV
	var_5553_string = "quest_k6_01"; // 0x2f93 MovS
	func_148(var_5552_object, var_5553_string); // 0x2f94 NEW_2
	
Label_12182:
	var_5560_int = 45103; // 0x2f96 PushI
	var_5561_bool = var_4816_int == var_5560_int; // 0x2f97 Eq
	if(var_5561_bool == 0) goto Label_12203; // 0x2f98 JumpB
	var_5562_object = Obj(); var_5563_object = Obj(); // 0x2f99 PushV
	var_5564_object = GlobalVars[16]; // 0x2f9a PushGE
	var_5562_object = var_5564_object; // 0x2f9b Mov
	var_5565_object = GlobalVars[16]; // 0x2f9d PushGE
	var_5563_object = var_5565_object; // 0x2f9e Mov
	func_10610(); // 0x2fa0 NEW_2
	var_5591_bool = 0; var_5592_string = ""; var_5593_string = ""; // 0x2fa2 PushV
	var_5592_string = "quest_k6_01"; // 0x2fa3 MovS
	var_5593_string = "cleanup"; // 0x2fa4 MovS
	func_239(var_5591_bool, var_5592_string, var_5593_string); // 0x2fa5 NEW_2
	var_5594_object = Obj(); var_5595_string = ""; // 0x2fa7 PushV
	var_5595_string = "quest_k7_01"; // 0x2fa8 MovS
	func_137(var_5594_object, var_5595_string); // 0x2fa9 NEW_2
	
Label_12203:
	var_5596_int = 45107; // 0x2fab PushI
	var_5597_bool = var_4816_int == var_5596_int; // 0x2fac Eq
	if(var_5597_bool == 0) goto Label_12218; // 0x2fad JumpB
	var_5598_bool = 0; var_5599_object = Obj(); // 0x2fae PushV
	var_5600_object = GlobalVars[16]; // 0x2faf PushGE
	var_5599_object = var_5600_object; // 0x2fb0 Mov
	func_11048(var_5599_object); // 0x2fb2 NEW_2
	var_5605_bool = var_5598_bool == 0; // 0x2fb4 Not
	if(var_5605_bool == 0) goto Label_12218; // 0x2fb5 JumpB
	var_5606_int = 0; var_5607_float = 0; // 0x2fb6 PushV
	var_5607_float = var_4817_float; // 0x2fb7 Mov
	func_9907(var_5606_int, var_5607_float); // 0x2fb8 NEW_2
	
Label_12218:
	var_5612_int = 45101; // 0x2fba PushI
	var_5613_bool = var_4816_int == var_5612_int; // 0x2fbb Eq
	if(var_5613_bool == 0) goto Label_12244; // 0x2fbc JumpB
	var_5614_object = Obj(); var_5615_object = Obj(); // 0x2fbd PushV
	var_5616_object = GlobalVars[16]; // 0x2fbe PushGE
	var_5614_object = var_5616_object; // 0x2fbf Mov
	var_5617_object = GlobalVars[16]; // 0x2fc1 PushGE
	var_5615_object = var_5617_object; // 0x2fc2 Mov
	func_10461(); // 0x2fc4 NEW_2
	var_5643_object = Obj(); var_5644_object = Obj(); // 0x2fc6 PushV
	var_5645_object = GlobalVars[16]; // 0x2fc7 PushGE
	var_5643_object = var_5645_object; // 0x2fc8 Mov
	var_5646_object = GlobalVars[16]; // 0x2fca PushGE
	var_5644_object = var_5646_object; // 0x2fcb Mov
	func_10162(); // 0x2fcd NEW_2
	var_5657_bool = 0; var_5658_string = ""; var_5659_string = ""; // 0x2fcf PushV
	var_5658_string = "quest_k4_01"; // 0x2fd0 MovS
	var_5659_string = "cleanup"; // 0x2fd1 MovS
	func_239(var_5657_bool, var_5658_string, var_5659_string); // 0x2fd2 NEW_2
	
Label_12244:
	var_5660_int = 45109; // 0x2fd4 PushI
	var_5661_bool = var_4816_int == var_5660_int; // 0x2fd5 Eq
	if(var_5661_bool == 0) goto Label_12265; // 0x2fd6 JumpB
	var_5662_object = Obj(); var_5663_object = Obj(); // 0x2fd7 PushV
	var_5664_object = GlobalVars[16]; // 0x2fd8 PushGE
	var_5662_object = var_5664_object; // 0x2fd9 Mov
	var_5665_object = GlobalVars[16]; // 0x2fdb PushGE
	var_5663_object = var_5665_object; // 0x2fdc Mov
	func_10795(); // 0x2fde NEW_2
	var_5674_bool = 0; var_5675_string = ""; var_5676_string = ""; // 0x2fe0 PushV
	var_5675_string = "quest_k11_01"; // 0x2fe1 MovS
	var_5676_string = "cleanup"; // 0x2fe2 MovS
	func_239(var_5674_bool, var_5675_string, var_5676_string); // 0x2fe3 NEW_2
	var_5677_object = Obj(); var_5678_string = ""; // 0x2fe5 PushV
	var_5678_string = "quest_k12_01"; // 0x2fe6 MovS
	func_137(var_5677_object, var_5678_string); // 0x2fe7 NEW_2
	
Label_12265:
	var_5679_int = 45105; // 0x2fe9 PushI
	var_5680_bool = var_4816_int == var_5679_int; // 0x2fea Eq
	if(var_5680_bool == 0) goto Label_12286; // 0x2feb JumpB
	var_5681_object = Obj(); var_5682_object = Obj(); // 0x2fec PushV
	var_5683_object = GlobalVars[16]; // 0x2fed PushGE
	var_5681_object = var_5683_object; // 0x2fee Mov
	var_5684_object = GlobalVars[16]; // 0x2ff0 PushGE
	var_5682_object = var_5684_object; // 0x2ff1 Mov
	func_10721(); // 0x2ff3 NEW_2
	var_5693_bool = 0; var_5694_string = ""; var_5695_string = ""; // 0x2ff5 PushV
	var_5694_string = "quest_k8_01"; // 0x2ff6 MovS
	var_5695_string = "cleanup"; // 0x2ff7 MovS
	func_239(var_5693_bool, var_5694_string, var_5695_string); // 0x2ff8 NEW_2
	var_5696_object = Obj(); var_5697_string = ""; // 0x2ffa PushV
	var_5697_string = "quest_k9_01"; // 0x2ffb MovS
	func_137(var_5696_object, var_5697_string); // 0x2ffc NEW_2
	
Label_12286:
	var_5698_int = 45106; // 0x2ffe PushI
	var_5699_bool = var_4816_int == var_5698_int; // 0x2fff Eq
	if(var_5699_bool == 0) goto Label_12307; // 0x3000 JumpB
	var_5700_object = Obj(); var_5701_object = Obj(); // 0x3001 PushV
	var_5702_object = GlobalVars[16]; // 0x3002 PushGE
	var_5700_object = var_5702_object; // 0x3003 Mov
	var_5703_object = GlobalVars[16]; // 0x3005 PushGE
	var_5701_object = var_5703_object; // 0x3006 Mov
	func_10739(); // 0x3008 NEW_2
	var_5712_bool = 0; var_5713_string = ""; var_5714_string = ""; // 0x300a PushV
	var_5713_string = "quest_k9_01"; // 0x300b MovS
	var_5714_string = "cleanup"; // 0x300c MovS
	func_239(var_5712_bool, var_5713_string, var_5714_string); // 0x300d NEW_2
	var_5715_object = Obj(); var_5716_string = ""; // 0x300f PushV
	var_5716_string = "quest_k10_01"; // 0x3010 MovS
	func_137(var_5715_object, var_5716_string); // 0x3011 NEW_2
	
Label_12307:
	var_5717_int = 45095; // 0x3013 PushI
	var_5718_bool = var_4816_int == var_5717_int; // 0x3014 Eq
	if(var_5718_bool == 0) goto Label_12324; // 0x3015 JumpB
	var_5719_object = Obj(); var_5720_object = Obj(); // 0x3016 PushV
	var_5721_object = GlobalVars[16]; // 0x3017 PushGE
	var_5719_object = var_5721_object; // 0x3018 Mov
	var_5722_object = GlobalVars[16]; // 0x301a PushGE
	var_5720_object = var_5722_object; // 0x301b Mov
	func_10176(); // 0x301d NEW_2
	var_5754_bool = 0; var_5755_string = ""; var_5756_string = ""; // 0x301f PushV
	var_5755_string = "quest_k1_01"; // 0x3020 MovS
	var_5756_string = "cleanup"; // 0x3021 MovS
	func_239(var_5754_bool, var_5755_string, var_5756_string); // 0x3022 NEW_2
	
Label_12324:
	var_5757_int = 45163; // 0x3024 PushI
	var_5758_bool = var_4816_int == var_5757_int; // 0x3025 Eq
	if(var_5758_bool == 0) goto Label_12338; // 0x3026 JumpB
	var_5759_bool = 0; var_5760_object = Obj(); // 0x3027 PushV
	var_5761_object = GlobalVars[16]; // 0x3028 PushGE
	var_5760_object = var_5761_object; // 0x3029 Mov
	func_11312(var_5759_bool, var_5760_object); // 0x302b NEW_2
	if(var_5759_bool == 0) goto Label_12338; // 0x302d JumpB
	var_5762_int = 0; var_5763_float = 0; // 0x302e PushV
	var_5763_float = var_4817_float; // 0x302f Mov
	func_9826(var_5762_int, var_5763_float); // 0x3030 NEW_2
	
Label_12338:
	var_5768_int = 45164; // 0x3032 PushI
	var_5769_bool = var_4816_int == var_5768_int; // 0x3033 Eq
	if(var_5769_bool == 0) goto Label_12352; // 0x3034 JumpB
	var_5770_bool = 0; var_5771_object = Obj(); // 0x3035 PushV
	var_5772_object = GlobalVars[16]; // 0x3036 PushGE
	var_5771_object = var_5772_object; // 0x3037 Mov
	func_11312(var_5770_bool, var_5771_object); // 0x3039 NEW_2
	if(var_5770_bool == 0) goto Label_12352; // 0x303b JumpB
	var_5773_int = 0; var_5774_float = 0; // 0x303c PushV
	var_5774_float = var_4817_float; // 0x303d Mov
	func_9835(var_5773_int, var_5774_float); // 0x303e NEW_2
	
Label_12352:
	var_5779_int = 45165; // 0x3040 PushI
	var_5780_bool = var_4816_int == var_5779_int; // 0x3041 Eq
	if(var_5780_bool == 0) goto Label_12366; // 0x3042 JumpB
	var_5781_bool = 0; var_5782_object = Obj(); // 0x3043 PushV
	var_5783_object = GlobalVars[16]; // 0x3044 PushGE
	var_5782_object = var_5783_object; // 0x3045 Mov
	func_11312(var_5781_bool, var_5782_object); // 0x3047 NEW_2
	if(var_5781_bool == 0) goto Label_12366; // 0x3049 JumpB
	var_5784_int = 0; var_5785_float = 0; // 0x304a PushV
	var_5785_float = var_4817_float; // 0x304b Mov
	func_9844(var_5784_int, var_5785_float); // 0x304c NEW_2
	
Label_12366:
	var_5790_int = 45110; // 0x304e PushI
	var_5791_bool = var_4816_int == var_5790_int; // 0x304f Eq
	if(var_5791_bool == 0) goto Label_12391; // 0x3050 JumpB
	var_5792_object = Obj(); var_5793_object = Obj(); // 0x3051 PushV
	var_5794_object = GlobalVars[16]; // 0x3052 PushGE
	var_5792_object = var_5794_object; // 0x3053 Mov
	var_5795_object = GlobalVars[16]; // 0x3055 PushGE
	var_5793_object = var_5795_object; // 0x3056 Mov
	func_10266(); // 0x3058 NEW_2
	var_5833_object = Obj(); var_5834_object = Obj(); // 0x305a PushV
	var_5835_object = GlobalVars[16]; // 0x305b PushGE
	var_5833_object = var_5835_object; // 0x305c Mov
	var_5836_object = GlobalVars[16]; // 0x305e PushGE
	var_5834_object = var_5836_object; // 0x305f Mov
	func_10162(); // 0x3061 NEW_2
	var_5837_object = Obj(); var_5838_string = ""; // 0x3063 PushV
	var_5838_string = "quest_k3_01"; // 0x3064 MovS
	func_137(var_5837_object, var_5838_string); // 0x3065 NEW_2
	
Label_12391:
	var_5839_int = 45166; // 0x3067 PushI
	var_5840_bool = var_4816_int == var_5839_int; // 0x3068 Eq
	if(var_5840_bool == 0) goto Label_12405; // 0x3069 JumpB
	var_5841_bool = 0; var_5842_object = Obj(); // 0x306a PushV
	var_5843_object = GlobalVars[16]; // 0x306b PushGE
	var_5842_object = var_5843_object; // 0x306c Mov
	func_11312(var_5841_bool, var_5842_object); // 0x306e NEW_2
	if(var_5841_bool == 0) goto Label_12405; // 0x3070 JumpB
	var_5844_int = 0; var_5845_float = 0; // 0x3071 PushV
	var_5845_float = var_4817_float; // 0x3072 Mov
	func_9853(var_5844_int, var_5845_float); // 0x3073 NEW_2
	
Label_12405:
	var_5850_int = 45096; // 0x3075 PushI
	var_5851_bool = var_4816_int == var_5850_int; // 0x3076 Eq
	if(var_5851_bool == 0) goto Label_12428; // 0x3077 JumpB
	var_5852_bool = 0; var_5853_object = Obj(); // 0x3078 PushV
	var_5854_object = GlobalVars[16]; // 0x3079 PushGE
	var_5853_object = var_5854_object; // 0x307a Mov
	func_11036(var_5853_object); // 0x307c NEW_2
	if(var_5852_bool == 0) goto Label_12428; // 0x307e JumpB
	var_5859_object = Obj(); var_5860_object = Obj(); // 0x307f PushV
	var_5861_object = GlobalVars[16]; // 0x3080 PushGE
	var_5859_object = var_5861_object; // 0x3081 Mov
	var_5862_object = GlobalVars[16]; // 0x3083 PushGE
	var_5860_object = var_5862_object; // 0x3084 Mov
	func_10994(var_5860_object); // 0x3086 NEW_2
	var_5895_int = 0; var_5896_float = 0; // 0x3088 PushV
	var_5896_float = var_4817_float; // 0x3089 Mov
	func_10051(var_5895_int, var_5896_float); // 0x308a NEW_2
	
Label_12428:
	var_5901_int = 45104; // 0x308c PushI
	var_5902_bool = var_4816_int == var_5901_int; // 0x308d Eq
	if(var_5902_bool == 0) goto Label_12449; // 0x308e JumpB
	var_5903_object = Obj(); var_5904_object = Obj(); // 0x308f PushV
	var_5905_object = GlobalVars[16]; // 0x3090 PushGE
	var_5903_object = var_5905_object; // 0x3091 Mov
	var_5906_object = GlobalVars[16]; // 0x3093 PushGE
	var_5904_object = var_5906_object; // 0x3094 Mov
	func_10676(); // 0x3096 NEW_2
	var_5926_bool = 0; var_5927_string = ""; var_5928_string = ""; // 0x3098 PushV
	var_5927_string = "quest_k7_01"; // 0x3099 MovS
	var_5928_string = "cleanup"; // 0x309a MovS
	func_239(var_5926_bool, var_5927_string, var_5928_string); // 0x309b NEW_2
	var_5929_object = Obj(); var_5930_string = ""; // 0x309d PushV
	var_5930_string = "quest_k8_01"; // 0x309e MovS
	func_137(var_5929_object, var_5930_string); // 0x309f NEW_2
	
Label_12449:
	var_5931_int = 45100; // 0x30a1 PushI
	var_5932_bool = var_4816_int == var_5931_int; // 0x30a2 Eq
	if(var_5932_bool == 0) goto Label_12479; // 0x30a3 JumpB
	var_5933_object = Obj(); var_5934_object = Obj(); // 0x30a4 PushV
	var_5935_object = GlobalVars[16]; // 0x30a5 PushGE
	var_5933_object = var_5935_object; // 0x30a6 Mov
	var_5936_object = GlobalVars[16]; // 0x30a8 PushGE
	var_5934_object = var_5936_object; // 0x30a9 Mov
	func_10374(); // 0x30ab NEW_2
	var_5968_object = Obj(); var_5969_object = Obj(); // 0x30ad PushV
	var_5970_object = GlobalVars[16]; // 0x30ae PushGE
	var_5968_object = var_5970_object; // 0x30af Mov
	var_5971_object = GlobalVars[16]; // 0x30b1 PushGE
	var_5969_object = var_5971_object; // 0x30b2 Mov
	func_10169(); // 0x30b4 NEW_2
	var_5974_bool = 0; var_5975_string = ""; var_5976_string = ""; // 0x30b6 PushV
	var_5975_string = "quest_k3_01"; // 0x30b7 MovS
	var_5976_string = "cleanup"; // 0x30b8 MovS
	func_239(var_5974_bool, var_5975_string, var_5976_string); // 0x30b9 NEW_2
	var_5977_object = Obj(); var_5978_string = ""; // 0x30bb PushV
	var_5978_string = "quest_k4_01"; // 0x30bc MovS
	func_148(var_5977_object, var_5978_string); // 0x30bd NEW_2
	
Label_12479:
	return 0; // 0x30bf Return
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
	var_173_string = "dt_house2_10"; // 0x1567 PushS
	add(var_173_string); // 0x1568 ObjFunc
	return 0; // 0x156a Return
}


func_6422(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object)
{
	var_4003_int = 0; // 0x1917 PushI
	var_4004_bool = var_3998_int == var_4003_int; // 0x1918 Eq
	if(var_4004_bool == 0) goto Label_6462; // 0x1919 JumpB
	var_4005_int = 0; var_4006_bool = 0; // 0x191a PushV
	var_4005_int = 10; // 0x191b MovI
	var_4006_bool = 0; // 0x191c MovB
	func_796(var_4005_int, var_4006_bool); // 0x191d NEW_2
	var_4007_int = 0; var_4008_bool = 0; var_4009_int = 0; // 0x191f PushV
	var_4007_int = 10; // 0x1920 MovI
	var_4008_bool = 0; // 0x1921 MovB
	var_4009_int = 1; // 0x1922 MovI
	func_813(var_4007_int, var_4008_bool, var_4009_int); // 0x1923 NEW_2
	var_4010_int = 0; var_4011_int = 0; var_4012_object = Obj(); var_4013_object = Obj(); var_4014_object = Obj(); // 0x1925 PushV
	var_4010_int = 10; // 0x1926 MovI
	var_4011_int = var_3997_int; // 0x1927 Mov
	var_4012_object = var_3999_object; // 0x1928 Mov
	var_4013_object = var_4000_object; // 0x1929 Mov
	var_4014_object = var_4001_object; // 0x192a Mov
	func_720(var_4010_int, var_4011_int, var_4012_object, var_4013_object, var_4014_object); // 0x192b NEW_2
	var_4015_object = Obj(); var_4016_int = 0; // 0x192d PushV
	var_4015_object = var_4002_object; // 0x192e Mov
	var_4016_int = 2; // 0x192f MovI
	func_305(var_4016_int); // 0x1930 NEW_2
	var_4017_int = 0; var_4018_bool = 0; var_4019_int = 0; // 0x1932 PushV
	var_4017_int = 10; // 0x1933 MovI
	var_4018_bool = 0; // 0x1934 MovB
	var_4019_int = 7; // 0x1935 MovI
	func_870(var_4017_int, var_4018_bool, var_4019_int); // 0x1936 NEW_2
	var_4020_int = 0; var_4021_bool = 0; var_4022_int = 0; // 0x1938 PushV
	var_4020_int = 10; // 0x1939 MovI
	var_4021_bool = 1; // 0x193a MovB
	var_4022_int = 7; // 0x193b MovI
	func_932(var_4020_int, var_4021_bool, var_4022_int); // 0x193c NEW_2
	
Label_6462:
	var_4023_int = 0; var_4024_bool = 0; // 0x193e PushV
	var_4023_int = 10; // 0x193f MovI
	var_4024_bool = 0; // 0x1940 MovB
	func_779(var_4023_int, var_4024_bool); // 0x1941 NEW_2
	var_4025_int = 0; var_4026_int = 0; var_4027_int = 0; // 0x1943 PushV
	var_4025_int = 10; // 0x1944 MovI
	var_4026_int = var_3997_int; // 0x1945 Mov
	var_4027_int = var_3998_int; // 0x1946 Mov
	func_3659(var_4025_int, var_4026_int, var_4027_int); // 0x1947 NEW_2
	return 0; // 0x1949 Return
}


func_284(var_4580_float)
{
	var_4581_float = 0; var_4582_float = 0; // 0x11c PushV
	GetGameTime(var_4582_float); // 0x11d Func
	var_4580_float = var_4582_float; // 0x11f Mov
	return 2; // 0x120 Return
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


func_4387(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object)
{
	var_524_int = 0; // 0x1124 PushI
	var_525_bool = var_519_int == var_524_int; // 0x1125 Eq
	if(var_525_bool == 0) goto Label_4427; // 0x1126 JumpB
	var_526_int = 0; var_527_bool = 0; // 0x1127 PushV
	var_526_int = 0; // 0x1128 MovI
	var_527_bool = 0; // 0x1129 MovB
	func_796(var_526_int, var_527_bool); // 0x112a NEW_2
	var_528_int = 0; var_529_bool = 0; var_530_int = 0; // 0x112c PushV
	var_528_int = 0; // 0x112d MovI
	var_529_bool = 0; // 0x112e MovB
	var_530_int = 1; // 0x112f MovI
	func_813(var_528_int, var_529_bool, var_530_int); // 0x1130 NEW_2
	var_566_int = 0; var_567_int = 0; var_568_object = Obj(); var_569_object = Obj(); var_570_object = Obj(); // 0x1132 PushV
	var_566_int = 0; // 0x1133 MovI
	var_567_int = var_518_int; // 0x1134 Mov
	var_568_object = var_520_object; // 0x1135 Mov
	var_569_object = var_521_object; // 0x1136 Mov
	var_570_object = var_522_object; // 0x1137 Mov
	func_622(var_567_int, var_568_object, var_569_object, var_570_object); // 0x1138 NEW_2
	var_612_object = Obj(); var_613_int = 0; // 0x113a PushV
	var_612_object = var_523_object; // 0x113b Mov
	var_613_int = 0; // 0x113c MovI
	func_305(var_613_int); // 0x113d NEW_2
	var_639_int = 0; var_640_bool = 0; var_641_int = 0; // 0x113f PushV
	var_639_int = 0; // 0x1140 MovI
	var_640_bool = 0; // 0x1141 MovB
	var_641_int = 4; // 0x1142 MovI
	func_870(var_639_int, var_640_bool, var_641_int); // 0x1143 NEW_2
	var_686_int = 0; var_687_bool = 0; var_688_int = 0; // 0x1145 PushV
	var_686_int = 0; // 0x1146 MovI
	var_687_bool = 0; // 0x1147 MovB
	var_688_int = 4; // 0x1148 MovI
	func_932(var_686_int, var_687_bool, var_688_int); // 0x1149 NEW_2
	
Label_4427:
	var_724_int = 0; var_725_int = 0; // 0x114b PushV
	var_724_int = 0; // 0x114c MovI
	var_725_int = var_519_int; // 0x114d Mov
	func_1050(var_724_int, var_725_int); // 0x114e NEW_2
	var_750_int = 0; var_751_int = 0; var_752_int = 0; // 0x1150 PushV
	var_750_int = 0; // 0x1151 MovI
	var_751_int = var_518_int; // 0x1152 Mov
	var_752_int = var_519_int; // 0x1153 Mov
	func_2206(var_750_int, var_751_int, var_752_int); // 0x1154 NEW_2
	return 0; // 0x1156 Return
}


func_10530()
{
	var_5523_object = Obj(); var_5524_object = Obj(); var_5525_object = Obj(); var_5526_object = Obj(); // 0x2922 PushV
	var_5527_object = Obj(); // 0x2923 PushV
	func_11417(var_5527_object); // 0x2924 NEW_2
	var_5525_object = var_5527_object; // 0x2925 Mov
	var_5528_string = "k5q03LaskaGotoAlbinos"; // 0x2927 PushS
	FindMark(var_5526_object, var_5528_string); // 0x2928 ObjFunc
	var_5529_object = var_5526_object; // 0x292a Push
	if(var_5529_object == 0) goto Label_10542; // 0x292b JumpB
	Remove(); // 0x292c ObjFunc
	
Label_10542:
	var_5530_string = "k5q01AlexandrGotoMladVlad"; // 0x292e PushS
	FindMark(var_5526_object, var_5530_string); // 0x292f ObjFunc
	var_5531_object = var_5526_object; // 0x2931 Push
	if(var_5531_object == 0) goto Label_10549; // 0x2932 JumpB
	Remove(); // 0x2933 ObjFunc
	
Label_10549:
	var_5532_string = "k5q01RubinGotoGeorg"; // 0x2935 PushS
	FindMark(var_5526_object, var_5532_string); // 0x2936 ObjFunc
	var_5533_object = var_5526_object; // 0x2938 Push
	if(var_5533_object == 0) goto Label_10556; // 0x2939 JumpB
	Remove(); // 0x293a ObjFunc
	
Label_10556:
	var_5534_string = "k5q04KapellaGotoMaria"; // 0x293c PushS
	FindMark(var_5526_object, var_5534_string); // 0x293d ObjFunc
	var_5535_object = var_5526_object; // 0x293f Push
	if(var_5535_object == 0) goto Label_10563; // 0x2940 JumpB
	Remove(); // 0x2941 ObjFunc
	
Label_10563:
	var_5536_string = "k5q04MariaGotoDanko"; // 0x2943 PushS
	FindMark(var_5526_object, var_5536_string); // 0x2944 ObjFunc
	var_5537_object = var_5526_object; // 0x2946 Push
	if(var_5537_object == 0) goto Label_10570; // 0x2947 JumpB
	Remove(); // 0x2948 ObjFunc
	
Label_10570:
	var_5538_string = "k5q02KabatchikGotoAlexandr"; // 0x294a PushS
	FindMark(var_5526_object, var_5538_string); // 0x294b ObjFunc
	var_5539_object = var_5526_object; // 0x294d Push
	if(var_5539_object == 0) goto Label_10577; // 0x294e JumpB
	Remove(); // 0x294f ObjFunc
	
Label_10577:
	var_5540_string = "k5q02KaterinaGotoPetr"; // 0x2951 PushS
	FindMark(var_5526_object, var_5540_string); // 0x2952 ObjFunc
	var_5541_object = var_5526_object; // 0x2954 Push
	if(var_5541_object == 0) goto Label_10584; // 0x2955 JumpB
	Remove(); // 0x2956 ObjFunc
	
Label_10584:
	var_5542_string = "k5q02PetrGotoAndrei"; // 0x2958 PushS
	FindMark(var_5526_object, var_5542_string); // 0x2959 ObjFunc
	var_5543_object = var_5526_object; // 0x295b Push
	if(var_5543_object == 0) goto Label_10591; // 0x295c JumpB
	Remove(); // 0x295d ObjFunc
	
Label_10591:
	var_5544_bool = 0; var_5545_int = 0; // 0x295f PushV
	var_5545_int = 390; // 0x2960 MovI
	func_11392(var_5544_bool, var_5545_int); // 0x2961 NEW_2
	var_5546_bool = 0; var_5547_int = 0; // 0x2963 PushV
	var_5547_int = 397; // 0x2964 MovI
	func_11392(var_5546_bool, var_5547_int); // 0x2965 NEW_2
	var_5548_bool = 0; var_5549_int = 0; // 0x2967 PushV
	var_5549_int = 405; // 0x2968 MovI
	func_11392(var_5548_bool, var_5549_int); // 0x2969 NEW_2
	var_5550_bool = 0; var_5551_int = 0; // 0x296b PushV
	var_5551_int = 740; // 0x296c MovI
	func_11392(var_5550_bool, var_5551_int); // 0x296d NEW_2
	return 4; // 0x296f Return
}


func_294()
{
	var_113_int = 0; // 0x126 PushI
	var_114_int = 0; // 0x127 PushI
	SetSepia(var_113_int, var_114_int); // 0x128 Func
	return 0; // 0x12a Return
}


func_299(var_446_string, var_447_int)
{
	var_448_string = "Region"; // 0x12c PushS
	var_449_int = var_448_string + var_447_int; // 0x12d Add
	var_450_string = "State"; // 0x12e PushS
	var_446_string = var_449_int + var_450_string; // 0x12f Add2
	return 0; // 0x130 Return
}


func_305(var_613_int)
{
	var_614_int = 0; var_615_string = ""; var_616_int = 0; var_617_string = ""; var_618_string = ""; var_619_object = Obj(); var_620_int = 0; var_621_string = ""; var_622_int = 0; var_623_string = ""; var_624_string = ""; var_625_object = Obj(); // 0x131 PushV
	size(var_620_int); // 0x132 ObjFunc
	var_626_int = 1; // 0x134 PushI
	var_627_bool = var_613_int == var_626_int; // 0x135 Eq
	if(var_627_bool == 0) goto Label_313; // 0x136 JumpB
	var_621_string = "s_"; // 0x137 MovS
	goto Label_317; // 0x138 Jump
	
Label_317:
	var_622_int = 0; // 0x13d MovI
	
Label_318:
	var_628_bool = var_622_int < var_620_int; // 0x13e LT
	if(var_628_bool == 0) goto Label_342; // 0x13f JumpB
	get(var_623_string, var_622_int); // 0x140 ObjFunc
	var_629_int = var_621_string + var_623_string; // 0x142 Add
	var_630_string = ".isc"; // 0x143 PushS
	var_624_string = var_629_int + var_630_string; // 0x144 Add2
	GetSceneByName(var_625_object, var_623_string); // 0x145 Func
	var_631_bool = var_625_object == 0; // 0x147 Not
	if(var_631_bool == 0) goto Label_336; // 0x148 JumpB
	var_632_string = "City manager: can't replace indoor scene ""; // 0x149 PushS
	var_633_int = var_632_string + var_623_string; // 0x14a Add
	var_634_string = "" because it doesn't exist"; // 0x14b PushS
	var_635_int = var_633_int + var_634_string; // 0x14c Add
	Trace(var_635_int); // 0x14d Func
	goto Label_338; // 0x14f Jump
	
Label_338:
	var_625_object = 0; // 0x152 SetNull
	var_636_int = 1; // 0x153 PushI
	var_622_int = var_622_int + var_636_int; // 0x154 Add2
	goto Label_318; // 0x155 Jump
	
Label_336:
	ReplaceScene(var_625_object, var_624_string); // 0x150 Func
	
Label_342:
	return 12; // 0x156 Return
	
Label_313:
	var_637_int = 2; // 0x139 PushI
	var_638_bool = var_613_int == var_637_int; // 0x13a Eq
	if(var_638_bool == 0) goto Label_317; // 0x13b JumpB
	var_621_string = "n_"; // 0x13c MovS
}


func_1345(var_1128_bool, var_1129_int, var_1130_int)
{
	var_1128_bool = 0; // 0x542 MovB
	var_1131_int = 10; // 0x543 PushI
	var_1132_bool = var_1129_int >= var_1131_int; // 0x544 GE
	if(var_1132_bool == 0) goto Label_1354; // 0x545 JumpB
	var_1133_int = 6; // 0x546 PushI
	var_1134_bool = var_1130_int < var_1133_int; // 0x547 LT
	if(var_1134_bool == 0) goto Label_1354; // 0x548 JumpB
	var_1128_bool = 1; // 0x549 MovB
	
Label_1354:
	return 0; // 0x54a Return
}


func_6474()
{
	var_246_string = "r5_house2_01"; // 0x194b PushS
	add(var_246_string); // 0x194c ObjFunc
	var_247_string = "r5_house2_02"; // 0x194e PushS
	add(var_247_string); // 0x194f ObjFunc
	var_248_string = "r5_house2_03"; // 0x1951 PushS
	add(var_248_string); // 0x1952 ObjFunc
	var_249_string = "r5_house3_01_i2"; // 0x1954 PushS
	add(var_249_string); // 0x1955 ObjFunc
	var_250_string = "r5_house3_01"; // 0x1957 PushS
	add(var_250_string); // 0x1958 ObjFunc
	var_251_string = "r5_house3_02_i2"; // 0x195a PushS
	add(var_251_string); // 0x195b ObjFunc
	var_252_string = "r5_house3_02"; // 0x195d PushS
	add(var_252_string); // 0x195e ObjFunc
	var_253_string = "r5_house3_03_i2"; // 0x1960 PushS
	add(var_253_string); // 0x1961 ObjFunc
	var_254_string = "r5_house3_03"; // 0x1963 PushS
	add(var_254_string); // 0x1964 ObjFunc
	var_255_string = "r5_house3_04_i2"; // 0x1966 PushS
	add(var_255_string); // 0x1967 ObjFunc
	var_256_string = "r5_house3_04"; // 0x1969 PushS
	add(var_256_string); // 0x196a ObjFunc
	var_257_string = "r5_house3_05_i2"; // 0x196c PushS
	add(var_257_string); // 0x196d ObjFunc
	var_258_string = "r5_house3_05"; // 0x196f PushS
	add(var_258_string); // 0x1970 ObjFunc
	var_259_string = "r5_house3_06_i2"; // 0x1972 PushS
	add(var_259_string); // 0x1973 ObjFunc
	var_260_string = "r5_house3_06"; // 0x1975 PushS
	add(var_260_string); // 0x1976 ObjFunc
	var_261_string = "r5_house3_07_i2"; // 0x1978 PushS
	add(var_261_string); // 0x1979 ObjFunc
	var_262_string = "r5_house3_07"; // 0x197b PushS
	add(var_262_string); // 0x197c ObjFunc
	var_263_string = "r5_House6_01"; // 0x197e PushS
	add(var_263_string); // 0x197f ObjFunc
	return 0; // 0x1981 Return
}


func_1355(var_1139_bool, var_1140_int, var_1141_int)
{
	var_1139_bool = 0; // 0x54c MovB
	var_1142_int = 3; // 0x54d PushI
	var_1143_bool = var_1140_int >= var_1142_int; // 0x54e GE
	if(var_1143_bool == 0) goto Label_1371; // 0x54f JumpB
	var_1144_bool = 0; // 0x550 PushV
	var_1144_bool = 1; // 0x551 MovB
	var_1145_int = 22; // 0x552 PushI
	var_1146_bool = var_1141_int > var_1145_int; // 0x553 GT
	if(var_1146_bool == 0) goto Label_1369; // 0x554 JumpB
	var_1147_int = 5; // 0x555 PushI
	var_1148_bool = var_1141_int < var_1147_int; // 0x556 LT
	if(var_1148_bool == 0) goto Label_1369; // 0x557 JumpB
	var_1144_bool = 0; // 0x558 MovB
	
Label_1369:
	if(var_1144_bool == 0) goto Label_1371; // 0x559 JumpB
	var_1139_bool = 1; // 0x55a MovB
	
Label_1371:
	return 0; // 0x55b Return
}


func_2383(var_914_int, var_915_int, var_916_int)
{
	var_917_int = 0; var_918_int = 0; // 0x94f PushV
	var_919_int = 1; // 0x950 PushI
	var_920_int = var_915_int + var_919_int; // 0x951 Add
	var_921_int = 12; // 0x952 PushI
	var_922_bool = var_920_int == var_921_int; // 0x953 Eq
	if(var_922_bool == 0) goto Label_2390; // 0x954 JumpB
	return 2; // 0x955 Return
	
Label_2390:
	var_923_bool = 0; // 0x956 PushV
	var_923_bool = 0; // 0x957 MovB
	var_924_bool = 0; // 0x958 PushV
	var_924_bool = 1; // 0x959 MovB
	var_925_int = 7; // 0x95a PushI
	var_926_bool = var_916_int < var_925_int; // 0x95b LT
	if(var_926_bool == 0) goto Label_2401; // 0x95c JumpB
	var_927_int = 21; // 0x95d PushI
	var_928_bool = var_916_int > var_927_int; // 0x95e GT
	if(var_928_bool == 0) goto Label_2401; // 0x95f JumpB
	var_924_bool = 0; // 0x960 MovB
	
Label_2401:
	if(var_924_bool == 0) goto Label_2406; // 0x961 JumpB
	var_929_int = 0; // 0x962 PushI
	var_930_bool = var_915_int != var_929_int; // 0x963 Neq
	if(var_930_bool == 0) goto Label_2406; // 0x964 JumpB
	var_923_bool = 1; // 0x965 MovB
	
Label_2406:
	if(var_923_bool == 0) goto Label_2422; // 0x966 JumpB
	var_931_int = 1; // 0x967 PushI
	var_932_float = 0; var_933_int = 0; // 0x968 PushV
	var_933_int = var_915_int; // 0x969 Mov
	func_1141(var_932_float, var_933_int); // 0x96a NEW_2
	var_918_int = var_931_int * var_932_float; // 0x96c Mult2
	var_934_int = var_918_int; // 0x96d Push
	if(var_934_int == 0) goto Label_2422; // 0x96e JumpB
	var_935_int = 0; var_936_string = ""; var_937_string = ""; var_938_int = 0; // 0x96f PushV
	var_935_int = var_914_int; // 0x970 Mov
	var_936_string = "pers_grabitel"; // 0x971 MovS
	var_937_string = "grabitel.xml"; // 0x972 MovS
	var_938_int = var_918_int; // 0x973 Mov
	func_503(var_935_int, var_936_string, var_937_string, var_938_int); // 0x974 NEW_2
	
Label_2422:
	var_939_bool = 0; var_940_int = 0; var_941_int = 0; // 0x976 PushV
	var_940_int = var_915_int; // 0x977 Mov
	var_941_int = var_916_int; // 0x978 Mov
	func_1110(var_939_bool, var_940_int, var_941_int); // 0x979 NEW_2
	if(var_939_bool == 0) goto Label_2471; // 0x97b JumpB
	var_942_int = 0; var_943_string = ""; var_944_string = ""; var_945_int = 0; // 0x97c PushV
	var_942_int = var_914_int; // 0x97d Mov
	var_943_string = "pers_unosha"; // 0x97e MovS
	var_944_string = "unosha_attacker.xml"; // 0x97f MovS
	var_945_int = 1; // 0x980 MovI
	func_503(var_942_int, var_943_string, var_944_string, var_945_int); // 0x981 NEW_2
	var_946_int = 0; var_947_string = ""; var_948_string = ""; var_949_int = 0; // 0x983 PushV
	var_946_int = var_914_int; // 0x984 Mov
	var_947_string = "pers_unosha"; // 0x985 MovS
	var_948_string = "unosha2_attacker.xml"; // 0x986 MovS
	var_949_int = 1; // 0x987 MovI
	func_503(var_946_int, var_947_string, var_948_string, var_949_int); // 0x988 NEW_2
	var_950_int = 0; var_951_string = ""; var_952_string = ""; var_953_int = 0; // 0x98a PushV
	var_950_int = var_914_int; // 0x98b Mov
	var_951_string = "pers_worker"; // 0x98c MovS
	var_952_string = "worker_attacker.xml"; // 0x98d MovS
	var_953_int = 1; // 0x98e MovI
	func_503(var_950_int, var_951_string, var_952_string, var_953_int); // 0x98f NEW_2
	var_954_int = 0; var_955_string = ""; var_956_string = ""; var_957_int = 0; // 0x991 PushV
	var_954_int = var_914_int; // 0x992 Mov
	var_955_string = "pers_worker"; // 0x993 MovS
	var_956_string = "worker2_attacker.xml"; // 0x994 MovS
	var_957_int = 1; // 0x995 MovI
	func_503(var_954_int, var_955_string, var_956_string, var_957_int); // 0x996 NEW_2
	var_958_int = 0; var_959_string = ""; var_960_string = ""; var_961_int = 0; // 0x998 PushV
	var_958_int = var_914_int; // 0x999 Mov
	var_959_string = "pers_alkash"; // 0x99a MovS
	var_960_string = "alkash.xml"; // 0x99b MovS
	var_961_int = 1; // 0x99c MovI
	func_503(var_958_int, var_959_string, var_960_string, var_961_int); // 0x99d NEW_2
	var_962_int = 0; var_963_string = ""; var_964_string = ""; var_965_int = 0; // 0x99f PushV
	var_962_int = var_914_int; // 0x9a0 Mov
	var_963_string = "pers_woman"; // 0x9a1 MovS
	var_964_string = "woman.xml"; // 0x9a2 MovS
	var_965_int = 2; // 0x9a3 MovI
	func_503(var_962_int, var_963_string, var_964_string, var_965_int); // 0x9a4 NEW_2
	goto Label_2559; // 0x9a6 Jump
	
Label_2559:
	var_966_bool = 0; // 0x9ff PushV
	var_966_bool = 0; // 0xa00 MovB
	var_967_bool = 0; // 0xa01 PushV
	var_967_bool = 0; // 0xa02 MovB
	var_968_int = 0; // 0xa03 PushI
	var_969_bool = var_915_int == var_968_int; // 0xa04 Eq
	if(var_969_bool == 0) goto Label_2570; // 0xa05 JumpB
	var_970_int = 12; // 0xa06 PushI
	var_971_bool = var_916_int > var_970_int; // 0xa07 GT
	if(var_971_bool == 0) goto Label_2570; // 0xa08 JumpB
	var_967_bool = 1; // 0xa09 MovB
	
Label_2570:
	if(var_967_bool == 0) goto Label_2575; // 0xa0a JumpB
	var_972_int = 22; // 0xa0b PushI
	var_973_bool = var_916_int < var_972_int; // 0xa0c LT
	if(var_973_bool == 0) goto Label_2575; // 0xa0d JumpB
	var_966_bool = 1; // 0xa0e MovB
	
Label_2575:
	if(var_966_bool == 0) goto Label_2583; // 0xa0f JumpB
	var_974_int = 0; var_975_string = ""; var_976_string = ""; var_977_int = 0; // 0xa10 PushV
	var_974_int = var_914_int; // 0xa11 Mov
	var_975_string = "pers_woman"; // 0xa12 MovS
	var_976_string = "woman_killme.xml"; // 0xa13 MovS
	var_977_int = 1; // 0xa14 MovI
	func_503(var_974_int, var_975_string, var_976_string, var_977_int); // 0xa15 NEW_2
	
Label_2583:
	return 2; // 0xa17 Return
	
Label_2471:
	var_978_bool = 0; // 0x9a7 PushV
	var_978_bool = 0; // 0x9a8 MovB
	var_979_int = 8; // 0x9a9 PushI
	var_980_bool = var_916_int > var_979_int; // 0x9aa GT
	if(var_980_bool == 0) goto Label_2480; // 0x9ab JumpB
	var_981_int = 21; // 0x9ac PushI
	var_982_bool = var_916_int < var_981_int; // 0x9ad LT
	if(var_982_bool == 0) goto Label_2480; // 0x9ae JumpB
	var_978_bool = 1; // 0x9af MovB
	
Label_2480:
	if(var_978_bool == 0) goto Label_2524; // 0x9b0 JumpB
	var_983_int = 0; var_984_string = ""; var_985_string = ""; var_986_int = 0; // 0x9b1 PushV
	var_983_int = var_914_int; // 0x9b2 Mov
	var_984_string = "pers_worker"; // 0x9b3 MovS
	var_985_string = "worker.xml"; // 0x9b4 MovS
	var_986_int = 2; // 0x9b5 MovI
	func_503(var_983_int, var_984_string, var_985_string, var_986_int); // 0x9b6 NEW_2
	var_987_int = 0; var_988_string = ""; var_989_string = ""; var_990_int = 0; // 0x9b8 PushV
	var_987_int = var_914_int; // 0x9b9 Mov
	var_988_string = "pers_worker"; // 0x9ba MovS
	var_989_string = "worker2.xml"; // 0x9bb MovS
	var_990_int = 2; // 0x9bc MovI
	func_503(var_987_int, var_988_string, var_989_string, var_990_int); // 0x9bd NEW_2
	var_991_int = 0; var_992_string = ""; var_993_string = ""; var_994_int = 0; // 0x9bf PushV
	var_991_int = var_914_int; // 0x9c0 Mov
	var_992_string = "pers_alkash"; // 0x9c1 MovS
	var_993_string = "alkash.xml"; // 0x9c2 MovS
	var_994_int = 1; // 0x9c3 MovI
	func_503(var_991_int, var_992_string, var_993_string, var_994_int); // 0x9c4 NEW_2
	var_995_int = 0; var_996_string = ""; var_997_string = ""; var_998_int = 0; // 0x9c6 PushV
	var_995_int = var_914_int; // 0x9c7 Mov
	var_996_string = "pers_woman"; // 0x9c8 MovS
	var_997_string = "woman.xml"; // 0x9c9 MovS
	var_998_int = 2; // 0x9ca MovI
	func_503(var_995_int, var_996_string, var_997_string, var_998_int); // 0x9cb NEW_2
	var_999_int = 0; var_1000_string = ""; var_1001_string = ""; var_1002_int = 0; // 0x9cd PushV
	var_999_int = var_914_int; // 0x9ce Mov
	var_1000_string = "pers_unosha"; // 0x9cf MovS
	var_1001_string = "unosha.xml"; // 0x9d0 MovS
	var_1002_int = 1; // 0x9d1 MovI
	func_503(var_999_int, var_1000_string, var_1001_string, var_1002_int); // 0x9d2 NEW_2
	var_1003_int = 0; var_1004_string = ""; var_1005_string = ""; var_1006_int = 0; // 0x9d4 PushV
	var_1003_int = var_914_int; // 0x9d5 Mov
	var_1004_string = "pers_unosha"; // 0x9d6 MovS
	var_1005_string = "unosha2.xml"; // 0x9d7 MovS
	var_1006_int = 1; // 0x9d8 MovI
	func_503(var_1003_int, var_1004_string, var_1005_string, var_1006_int); // 0x9d9 NEW_2
	goto Label_2559; // 0x9db Jump
	
Label_2524:
	var_1007_int = 0; var_1008_string = ""; var_1009_string = ""; var_1010_int = 0; // 0x9dc PushV
	var_1007_int = var_914_int; // 0x9dd Mov
	var_1008_string = "pers_alkash"; // 0x9de MovS
	var_1009_string = "alkash.xml"; // 0x9df MovS
	var_1010_int = 1; // 0x9e0 MovI
	func_503(var_1007_int, var_1008_string, var_1009_string, var_1010_int); // 0x9e1 NEW_2
	var_1011_int = 0; var_1012_string = ""; var_1013_string = ""; var_1014_int = 0; // 0x9e3 PushV
	var_1011_int = var_914_int; // 0x9e4 Mov
	var_1012_string = "pers_worker"; // 0x9e5 MovS
	var_1013_string = "worker.xml"; // 0x9e6 MovS
	var_1014_int = 1; // 0x9e7 MovI
	func_503(var_1011_int, var_1012_string, var_1013_string, var_1014_int); // 0x9e8 NEW_2
	var_1015_int = 0; var_1016_string = ""; var_1017_string = ""; var_1018_int = 0; // 0x9ea PushV
	var_1015_int = var_914_int; // 0x9eb Mov
	var_1016_string = "pers_worker"; // 0x9ec MovS
	var_1017_string = "worker2.xml"; // 0x9ed MovS
	var_1018_int = 1; // 0x9ee MovI
	func_503(var_1015_int, var_1016_string, var_1017_string, var_1018_int); // 0x9ef NEW_2
	var_1019_int = 0; var_1020_string = ""; var_1021_string = ""; var_1022_int = 0; // 0x9f1 PushV
	var_1019_int = var_914_int; // 0x9f2 Mov
	var_1020_string = "pers_unosha"; // 0x9f3 MovS
	var_1021_string = "unosha2.xml"; // 0x9f4 MovS
	var_1022_int = 1; // 0x9f5 MovI
	func_503(var_1019_int, var_1020_string, var_1021_string, var_1022_int); // 0x9f6 NEW_2
	var_1023_int = 0; var_1024_string = ""; var_1025_string = ""; var_1026_int = 0; // 0x9f8 PushV
	var_1023_int = var_914_int; // 0x9f9 Mov
	var_1024_string = "pers_dog"; // 0x9fa MovS
	var_1025_string = "dog.xml"; // 0x9fb MovS
	var_1026_int = 1; // 0x9fc MovI
	func_503(var_1023_int, var_1024_string, var_1025_string, var_1026_int); // 0x9fd NEW_2
}


func_4439(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object)
{
	var_2011_int = 0; // 0x1158 PushI
	var_2012_bool = var_2006_int == var_2011_int; // 0x1159 Eq
	if(var_2012_bool == 0) goto Label_4479; // 0x115a JumpB
	var_2013_int = 0; var_2014_bool = 0; // 0x115b PushV
	var_2013_int = 0; // 0x115c MovI
	var_2014_bool = 1; // 0x115d MovB
	func_796(var_2013_int, var_2014_bool); // 0x115e NEW_2
	var_2015_int = 0; var_2016_bool = 0; var_2017_int = 0; // 0x1160 PushV
	var_2015_int = 0; // 0x1161 MovI
	var_2016_bool = 1; // 0x1162 MovB
	var_2017_int = 1; // 0x1163 MovI
	func_813(var_2015_int, var_2016_bool, var_2017_int); // 0x1164 NEW_2
	var_2018_int = 0; var_2019_int = 0; var_2020_object = Obj(); var_2021_object = Obj(); var_2022_object = Obj(); // 0x1166 PushV
	var_2018_int = 0; // 0x1167 MovI
	var_2019_int = var_2005_int; // 0x1168 Mov
	var_2020_object = var_2007_object; // 0x1169 Mov
	var_2021_object = var_2008_object; // 0x116a Mov
	var_2022_object = var_2009_object; // 0x116b Mov
	func_641(var_2018_int, var_2019_int, var_2020_object, var_2021_object, var_2022_object); // 0x116c NEW_2
	var_2108_object = Obj(); var_2109_int = 0; // 0x116e PushV
	var_2108_object = var_2010_object; // 0x116f Mov
	var_2109_int = 1; // 0x1170 MovI
	func_305(var_2109_int); // 0x1171 NEW_2
	var_2110_int = 0; var_2111_bool = 0; var_2112_int = 0; // 0x1173 PushV
	var_2110_int = 0; // 0x1174 MovI
	var_2111_bool = 1; // 0x1175 MovB
	var_2112_int = 4; // 0x1176 MovI
	func_870(var_2110_int, var_2111_bool, var_2112_int); // 0x1177 NEW_2
	var_2113_int = 0; var_2114_bool = 0; var_2115_int = 0; // 0x1179 PushV
	var_2113_int = 0; // 0x117a MovI
	var_2114_bool = 0; // 0x117b MovB
	var_2115_int = 4; // 0x117c MovI
	func_932(var_2113_int, var_2114_bool, var_2115_int); // 0x117d NEW_2
	
Label_4479:
	var_2116_int = 0; var_2117_bool = 0; // 0x117f PushV
	var_2116_int = 0; // 0x1180 MovI
	var_2117_bool = 0; // 0x1181 MovB
	func_779(var_2116_int, var_2117_bool); // 0x1182 NEW_2
	var_2118_int = 0; var_2119_int = 0; var_2120_int = 0; // 0x1184 PushV
	var_2118_int = 0; // 0x1185 MovI
	var_2119_int = var_2005_int; // 0x1186 Mov
	var_2120_int = var_2006_int; // 0x1187 Mov
	func_3137(var_2118_int, var_2119_int, var_2120_int); // 0x1188 NEW_2
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


func_1372(var_2208_bool, var_2209_int)
{
	var_2210_int = 8; // 0x55d PushI
	var_2208_bool = var_2209_int >= var_2210_int; // 0x55e GE2
	return 0; // 0x55f Return
}


func_1376(var_1806_int, var_1807_int, var_1808_int)
{
	var_1809_int = 0; var_1810_int = 0; // 0x560 PushV
	var_1811_int = 1; // 0x561 PushI
	var_1812_int = var_1807_int + var_1811_int; // 0x562 Add
	var_1813_int = 12; // 0x563 PushI
	var_1814_bool = var_1812_int == var_1813_int; // 0x564 Eq
	if(var_1814_bool == 0) goto Label_1383; // 0x565 JumpB
	return 2; // 0x566 Return
	
Label_1383:
	var_1815_bool = 0; // 0x567 PushV
	var_1815_bool = 0; // 0x568 MovB
	var_1816_bool = 0; // 0x569 PushV
	var_1816_bool = 1; // 0x56a MovB
	var_1817_int = 7; // 0x56b PushI
	var_1818_bool = var_1808_int < var_1817_int; // 0x56c LT
	if(var_1818_bool == 0) goto Label_1394; // 0x56d JumpB
	var_1819_int = 21; // 0x56e PushI
	var_1820_bool = var_1808_int > var_1819_int; // 0x56f GT
	if(var_1820_bool == 0) goto Label_1394; // 0x570 JumpB
	var_1816_bool = 0; // 0x571 MovB
	
Label_1394:
	if(var_1816_bool == 0) goto Label_1399; // 0x572 JumpB
	var_1821_int = 0; // 0x573 PushI
	var_1822_bool = var_1807_int != var_1821_int; // 0x574 Neq
	if(var_1822_bool == 0) goto Label_1399; // 0x575 JumpB
	var_1815_bool = 1; // 0x576 MovB
	
Label_1399:
	if(var_1815_bool == 0) goto Label_1414; // 0x577 JumpB
	var_1823_float = 0; var_1824_int = 0; // 0x578 PushV
	var_1824_int = var_1807_int; // 0x579 Mov
	func_1141(var_1823_float, var_1824_int); // 0x57a NEW_2
	var_1810_int = var_1823_float; // 0x57b Mov
	var_1825_int = var_1810_int; // 0x57d Push
	if(var_1825_int == 0) goto Label_1414; // 0x57e JumpB
	var_1826_int = 0; var_1827_string = ""; var_1828_string = ""; var_1829_int = 0; // 0x57f PushV
	var_1826_int = var_1806_int; // 0x580 Mov
	var_1827_string = "pers_grabitel"; // 0x581 MovS
	var_1828_string = "grabitel.xml"; // 0x582 MovS
	var_1829_int = var_1810_int; // 0x583 Mov
	func_503(var_1826_int, var_1827_string, var_1828_string, var_1829_int); // 0x584 NEW_2
	
Label_1414:
	var_1830_bool = 0; var_1831_int = 0; var_1832_int = 0; // 0x586 PushV
	var_1831_int = var_1807_int; // 0x587 Mov
	var_1832_int = var_1808_int; // 0x588 Mov
	func_1110(var_1830_bool, var_1831_int, var_1832_int); // 0x589 NEW_2
	if(var_1830_bool == 0) goto Label_1491; // 0x58b JumpB
	var_1833_int = 0; var_1834_string = ""; var_1835_string = ""; var_1836_int = 0; // 0x58c PushV
	var_1833_int = var_1806_int; // 0x58d Mov
	var_1834_string = "pers_unosha"; // 0x58e MovS
	var_1835_string = "unosha_attacker.xml"; // 0x58f MovS
	var_1836_int = 1; // 0x590 MovI
	func_503(var_1833_int, var_1834_string, var_1835_string, var_1836_int); // 0x591 NEW_2
	var_1837_int = 0; var_1838_string = ""; var_1839_string = ""; var_1840_int = 0; // 0x593 PushV
	var_1837_int = var_1806_int; // 0x594 Mov
	var_1838_string = "pers_unosha"; // 0x595 MovS
	var_1839_string = "unosha2_attacker.xml"; // 0x596 MovS
	var_1840_int = 1; // 0x597 MovI
	func_503(var_1837_int, var_1838_string, var_1839_string, var_1840_int); // 0x598 NEW_2
	var_1841_int = 0; var_1842_string = ""; var_1843_string = ""; var_1844_int = 0; // 0x59a PushV
	var_1841_int = var_1806_int; // 0x59b Mov
	var_1842_string = "pers_worker"; // 0x59c MovS
	var_1843_string = "worker_attacker.xml"; // 0x59d MovS
	var_1844_int = 1; // 0x59e MovI
	func_503(var_1841_int, var_1842_string, var_1843_string, var_1844_int); // 0x59f NEW_2
	var_1845_int = 0; var_1846_string = ""; var_1847_string = ""; var_1848_int = 0; // 0x5a1 PushV
	var_1845_int = var_1806_int; // 0x5a2 Mov
	var_1846_string = "pers_worker"; // 0x5a3 MovS
	var_1847_string = "worker2_attacker.xml"; // 0x5a4 MovS
	var_1848_int = 1; // 0x5a5 MovI
	func_503(var_1845_int, var_1846_string, var_1847_string, var_1848_int); // 0x5a6 NEW_2
	var_1849_int = 0; var_1850_string = ""; var_1851_string = ""; var_1852_int = 0; // 0x5a8 PushV
	var_1849_int = var_1806_int; // 0x5a9 Mov
	var_1850_string = "pers_wasted_girl"; // 0x5aa MovS
	var_1851_string = "wasted_girl.xml"; // 0x5ab MovS
	var_1852_int = 2; // 0x5ac MovI
	func_503(var_1849_int, var_1850_string, var_1851_string, var_1852_int); // 0x5ad NEW_2
	var_1853_int = 0; var_1854_string = ""; var_1855_string = ""; var_1856_int = 0; // 0x5af PushV
	var_1853_int = var_1806_int; // 0x5b0 Mov
	var_1854_string = "pers_wasted_male"; // 0x5b1 MovS
	var_1855_string = "wasted_male.xml"; // 0x5b2 MovS
	var_1856_int = 3; // 0x5b3 MovI
	func_503(var_1853_int, var_1854_string, var_1855_string, var_1856_int); // 0x5b4 NEW_2
	var_1857_int = 0; var_1858_string = ""; var_1859_string = ""; var_1860_int = 0; // 0x5b6 PushV
	var_1857_int = var_1806_int; // 0x5b7 Mov
	var_1858_string = "pers_woman"; // 0x5b8 MovS
	var_1859_string = "woman.xml"; // 0x5b9 MovS
	var_1860_int = 3; // 0x5ba MovI
	func_503(var_1857_int, var_1858_string, var_1859_string, var_1860_int); // 0x5bb NEW_2
	var_1861_int = 0; var_1862_string = ""; var_1863_string = ""; var_1864_int = 0; // 0x5bd PushV
	var_1861_int = var_1806_int; // 0x5be Mov
	var_1862_string = "pers_boy"; // 0x5bf MovS
	var_1863_string = "boy.xml"; // 0x5c0 MovS
	var_1864_int = 1; // 0x5c1 MovI
	func_503(var_1861_int, var_1862_string, var_1863_string, var_1864_int); // 0x5c2 NEW_2
	var_1865_int = 0; var_1866_string = ""; var_1867_string = ""; var_1868_int = 0; // 0x5c4 PushV
	var_1865_int = var_1806_int; // 0x5c5 Mov
	var_1866_string = "pers_girl"; // 0x5c6 MovS
	var_1867_string = "girl.xml"; // 0x5c7 MovS
	var_1868_int = 1; // 0x5c8 MovI
	func_503(var_1865_int, var_1866_string, var_1867_string, var_1868_int); // 0x5c9 NEW_2
	var_1869_int = 0; var_1870_string = ""; var_1871_string = ""; var_1872_int = 0; // 0x5cb PushV
	var_1869_int = var_1806_int; // 0x5cc Mov
	var_1870_string = "pers_girl"; // 0x5cd MovS
	var_1871_string = "girl2.xml"; // 0x5ce MovS
	var_1872_int = 1; // 0x5cf MovI
	func_503(var_1869_int, var_1870_string, var_1871_string, var_1872_int); // 0x5d0 NEW_2
	goto Label_1586; // 0x5d2 Jump
	
Label_1586:
	var_1873_bool = 0; // 0x632 PushV
	var_1873_bool = 0; // 0x633 MovB
	var_1874_bool = 0; // 0x634 PushV
	var_1874_bool = 0; // 0x635 MovB
	var_1875_int = 0; // 0x636 PushI
	var_1876_bool = var_1807_int == var_1875_int; // 0x637 Eq
	if(var_1876_bool == 0) goto Label_1597; // 0x638 JumpB
	var_1877_int = 12; // 0x639 PushI
	var_1878_bool = var_1808_int > var_1877_int; // 0x63a GT
	if(var_1878_bool == 0) goto Label_1597; // 0x63b JumpB
	var_1874_bool = 1; // 0x63c MovB
	
Label_1597:
	if(var_1874_bool == 0) goto Label_1602; // 0x63d JumpB
	var_1879_int = 22; // 0x63e PushI
	var_1880_bool = var_1808_int < var_1879_int; // 0x63f LT
	if(var_1880_bool == 0) goto Label_1602; // 0x640 JumpB
	var_1873_bool = 1; // 0x641 MovB
	
Label_1602:
	if(var_1873_bool == 0) goto Label_1610; // 0x642 JumpB
	var_1881_int = 0; var_1882_string = ""; var_1883_string = ""; var_1884_int = 0; // 0x643 PushV
	var_1881_int = var_1806_int; // 0x644 Mov
	var_1882_string = "pers_wasted_girl"; // 0x645 MovS
	var_1883_string = "wasted_girl_killme.xml"; // 0x646 MovS
	var_1884_int = 1; // 0x647 MovI
	func_503(var_1881_int, var_1882_string, var_1883_string, var_1884_int); // 0x648 NEW_2
	
Label_1610:
	var_1885_bool = 0; var_1886_int = 0; var_1887_int = 0; // 0x64a PushV
	var_1886_int = var_1807_int; // 0x64b Mov
	var_1887_int = var_1808_int; // 0x64c Mov
	func_1345(var_1885_bool, var_1886_int, var_1887_int); // 0x64d NEW_2
	if(var_1885_bool == 0) goto Label_1623; // 0x64f JumpB
	var_1888_int = 0; var_1889_string = ""; var_1890_string = ""; var_1891_int = 0; // 0x650 PushV
	var_1888_int = var_1806_int; // 0x651 Mov
	var_1889_string = "pers_soldat"; // 0x652 MovS
	var_1890_string = "soldier_marauder.xml"; // 0x653 MovS
	var_1891_int = 2; // 0x654 MovI
	func_503(var_1888_int, var_1889_string, var_1890_string, var_1891_int); // 0x655 NEW_2
	
Label_1623:
	return 2; // 0x657 Return
	
Label_1491:
	var_1892_bool = 0; // 0x5d3 PushV
	var_1892_bool = 0; // 0x5d4 MovB
	var_1893_int = 8; // 0x5d5 PushI
	var_1894_bool = var_1808_int > var_1893_int; // 0x5d6 GT
	if(var_1894_bool == 0) goto Label_1500; // 0x5d7 JumpB
	var_1895_int = 21; // 0x5d8 PushI
	var_1896_bool = var_1808_int < var_1895_int; // 0x5d9 LT
	if(var_1896_bool == 0) goto Label_1500; // 0x5da JumpB
	var_1892_bool = 1; // 0x5db MovB
	
Label_1500:
	if(var_1892_bool == 0) goto Label_1558; // 0x5dc JumpB
	var_1897_int = 0; var_1898_string = ""; var_1899_string = ""; var_1900_int = 0; // 0x5dd PushV
	var_1897_int = var_1806_int; // 0x5de Mov
	var_1898_string = "pers_wasted_girl"; // 0x5df MovS
	var_1899_string = "wasted_girl.xml"; // 0x5e0 MovS
	var_1900_int = 2; // 0x5e1 MovI
	func_503(var_1897_int, var_1898_string, var_1899_string, var_1900_int); // 0x5e2 NEW_2
	var_1901_int = 0; var_1902_string = ""; var_1903_string = ""; var_1904_int = 0; // 0x5e4 PushV
	var_1901_int = var_1806_int; // 0x5e5 Mov
	var_1902_string = "pers_wasted_male"; // 0x5e6 MovS
	var_1903_string = "wasted_male.xml"; // 0x5e7 MovS
	var_1904_int = 3; // 0x5e8 MovI
	func_503(var_1901_int, var_1902_string, var_1903_string, var_1904_int); // 0x5e9 NEW_2
	var_1905_int = 0; var_1906_string = ""; var_1907_string = ""; var_1908_int = 0; // 0x5eb PushV
	var_1905_int = var_1806_int; // 0x5ec Mov
	var_1906_string = "pers_woman"; // 0x5ed MovS
	var_1907_string = "woman.xml"; // 0x5ee MovS
	var_1908_int = 3; // 0x5ef MovI
	func_503(var_1905_int, var_1906_string, var_1907_string, var_1908_int); // 0x5f0 NEW_2
	var_1909_int = 0; var_1910_string = ""; var_1911_string = ""; var_1912_int = 0; // 0x5f2 PushV
	var_1909_int = var_1806_int; // 0x5f3 Mov
	var_1910_string = "pers_unosha"; // 0x5f4 MovS
	var_1911_string = "unosha.xml"; // 0x5f5 MovS
	var_1912_int = 2; // 0x5f6 MovI
	func_503(var_1909_int, var_1910_string, var_1911_string, var_1912_int); // 0x5f7 NEW_2
	var_1913_int = 0; var_1914_string = ""; var_1915_string = ""; var_1916_int = 0; // 0x5f9 PushV
	var_1913_int = var_1806_int; // 0x5fa Mov
	var_1914_string = "pers_unosha"; // 0x5fb MovS
	var_1915_string = "unosha2.xml"; // 0x5fc MovS
	var_1916_int = 2; // 0x5fd MovI
	func_503(var_1913_int, var_1914_string, var_1915_string, var_1916_int); // 0x5fe NEW_2
	var_1917_int = 0; var_1918_string = ""; var_1919_string = ""; var_1920_int = 0; // 0x600 PushV
	var_1917_int = var_1806_int; // 0x601 Mov
	var_1918_string = "pers_boy"; // 0x602 MovS
	var_1919_string = "boy.xml"; // 0x603 MovS
	var_1920_int = 2; // 0x604 MovI
	func_503(var_1917_int, var_1918_string, var_1919_string, var_1920_int); // 0x605 NEW_2
	var_1921_int = 0; var_1922_string = ""; var_1923_string = ""; var_1924_int = 0; // 0x607 PushV
	var_1921_int = var_1806_int; // 0x608 Mov
	var_1922_string = "pers_girl"; // 0x609 MovS
	var_1923_string = "girl.xml"; // 0x60a MovS
	var_1924_int = 1; // 0x60b MovI
	func_503(var_1921_int, var_1922_string, var_1923_string, var_1924_int); // 0x60c NEW_2
	var_1925_int = 0; var_1926_string = ""; var_1927_string = ""; var_1928_int = 0; // 0x60e PushV
	var_1925_int = var_1806_int; // 0x60f Mov
	var_1926_string = "pers_girl"; // 0x610 MovS
	var_1927_string = "girl2.xml"; // 0x611 MovS
	var_1928_int = 1; // 0x612 MovI
	func_503(var_1925_int, var_1926_string, var_1927_string, var_1928_int); // 0x613 NEW_2
	goto Label_1586; // 0x615 Jump
	
Label_1558:
	var_1929_int = 0; var_1930_string = ""; var_1931_string = ""; var_1932_int = 0; // 0x616 PushV
	var_1929_int = var_1806_int; // 0x617 Mov
	var_1930_string = "pers_wasted_girl"; // 0x618 MovS
	var_1931_string = "wasted_girl.xml"; // 0x619 MovS
	var_1932_int = 1; // 0x61a MovI
	func_503(var_1929_int, var_1930_string, var_1931_string, var_1932_int); // 0x61b NEW_2
	var_1933_int = 0; var_1934_string = ""; var_1935_string = ""; var_1936_int = 0; // 0x61d PushV
	var_1933_int = var_1806_int; // 0x61e Mov
	var_1934_string = "pers_wasted_male"; // 0x61f MovS
	var_1935_string = "wasted_male.xml"; // 0x620 MovS
	var_1936_int = 2; // 0x621 MovI
	func_503(var_1933_int, var_1934_string, var_1935_string, var_1936_int); // 0x622 NEW_2
	var_1937_int = 0; var_1938_string = ""; var_1939_string = ""; var_1940_int = 0; // 0x624 PushV
	var_1937_int = var_1806_int; // 0x625 Mov
	var_1938_string = "pers_unosha"; // 0x626 MovS
	var_1939_string = "unosha.xml"; // 0x627 MovS
	var_1940_int = 1; // 0x628 MovI
	func_503(var_1937_int, var_1938_string, var_1939_string, var_1940_int); // 0x629 NEW_2
	var_1941_int = 0; var_1942_string = ""; var_1943_string = ""; var_1944_int = 0; // 0x62b PushV
	var_1941_int = var_1806_int; // 0x62c Mov
	var_1942_string = "pers_unosha"; // 0x62d MovS
	var_1943_string = "unosha2.xml"; // 0x62e MovS
	var_1944_int = 1; // 0x62f MovI
	func_503(var_1941_int, var_1942_string, var_1943_string, var_1944_int); // 0x630 NEW_2
}


func_13671(var_4538_object, var_4540_cvector, var_4541_cvector)
{
	var_4542_object = Obj(); var_4543_object = Obj(); // 0x3567 PushV
	var_4544_string = "pers_morlok"; // 0x3568 PushS
	var_4545_string = "Burah_arena_manager.xml"; // 0x3569 PushS
	AddStationaryActor(var_4543_object, var_4540_cvector, var_4541_cvector, var_4544_string, var_4545_string); // 0x356a ObjFunc
	var_4538_object = var_4543_object; // 0x356c Mov
	return 2; // 0x356d Return
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
	func_13113(var_158_bool, var_159_int, var_160_int); // 0x17e NEW_2
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


func_5483(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object)
{
	var_1347_int = 0; // 0x156c PushI
	var_1348_bool = var_1342_int == var_1347_int; // 0x156d Eq
	if(var_1348_bool == 0) goto Label_5523; // 0x156e JumpB
	var_1349_int = 0; var_1350_bool = 0; // 0x156f PushV
	var_1349_int = 5; // 0x1570 MovI
	var_1350_bool = 0; // 0x1571 MovB
	func_796(var_1349_int, var_1350_bool); // 0x1572 NEW_2
	var_1351_int = 0; var_1352_bool = 0; var_1353_int = 0; // 0x1574 PushV
	var_1351_int = 5; // 0x1575 MovI
	var_1352_bool = 0; // 0x1576 MovB
	var_1353_int = 1; // 0x1577 MovI
	func_813(var_1351_int, var_1352_bool, var_1353_int); // 0x1578 NEW_2
	var_1354_int = 0; var_1355_int = 0; var_1356_object = Obj(); var_1357_object = Obj(); var_1358_object = Obj(); // 0x157a PushV
	var_1354_int = 5; // 0x157b MovI
	var_1355_int = var_1341_int; // 0x157c Mov
	var_1356_object = var_1343_object; // 0x157d Mov
	var_1357_object = var_1344_object; // 0x157e Mov
	var_1358_object = var_1345_object; // 0x157f Mov
	func_622(var_1355_int, var_1356_object, var_1357_object, var_1358_object); // 0x1580 NEW_2
	var_1359_object = Obj(); var_1360_int = 0; // 0x1582 PushV
	var_1359_object = var_1346_object; // 0x1583 Mov
	var_1360_int = 0; // 0x1584 MovI
	func_305(var_1360_int); // 0x1585 NEW_2
	var_1361_int = 0; var_1362_bool = 0; var_1363_int = 0; // 0x1587 PushV
	var_1361_int = 5; // 0x1588 MovI
	var_1362_bool = 0; // 0x1589 MovB
	var_1363_int = 4; // 0x158a MovI
	func_870(var_1361_int, var_1362_bool, var_1363_int); // 0x158b NEW_2
	var_1364_int = 0; var_1365_bool = 0; var_1366_int = 0; // 0x158d PushV
	var_1364_int = 5; // 0x158e MovI
	var_1365_bool = 0; // 0x158f MovB
	var_1366_int = 4; // 0x1590 MovI
	func_932(var_1364_int, var_1365_bool, var_1366_int); // 0x1591 NEW_2
	
Label_5523:
	var_1367_int = 0; var_1368_int = 0; // 0x1593 PushV
	var_1367_int = 5; // 0x1594 MovI
	var_1368_int = var_1342_int; // 0x1595 Mov
	func_983(var_1367_int, var_1368_int); // 0x1596 NEW_2
	var_1369_int = 0; var_1370_int = 0; var_1371_int = 0; // 0x1598 PushV
	var_1369_int = 5; // 0x1599 MovI
	var_1370_int = var_1341_int; // 0x159a Mov
	var_1371_int = var_1342_int; // 0x159b Mov
	func_1897(var_1369_int, var_1370_int, var_1371_int); // 0x159c NEW_2
	return 0; // 0x159e Return
}


func_10610()
{
	var_5566_object = Obj(); var_5567_object = Obj(); var_5568_object = Obj(); var_5569_object = Obj(); // 0x2972 PushV
	var_5570_object = Obj(); // 0x2973 PushV
	func_11417(var_5570_object); // 0x2974 NEW_2
	var_5568_object = var_5570_object; // 0x2975 Mov
	var_5571_string = "k6q03LaskaGotoAlbinos"; // 0x2977 PushS
	FindMark(var_5569_object, var_5571_string); // 0x2978 ObjFunc
	var_5572_object = var_5569_object; // 0x297a Push
	if(var_5572_object == 0) goto Label_10622; // 0x297b JumpB
	Remove(); // 0x297c ObjFunc
	
Label_10622:
	var_5573_string = "k6q01IfAnna"; // 0x297e PushS
	FindMark(var_5569_object, var_5573_string); // 0x297f ObjFunc
	var_5574_object = var_5569_object; // 0x2981 Push
	if(var_5574_object == 0) goto Label_10629; // 0x2982 JumpB
	Remove(); // 0x2983 ObjFunc
	
Label_10629:
	var_5575_string = "k6q01IfEva"; // 0x2985 PushS
	FindMark(var_5569_object, var_5575_string); // 0x2986 ObjFunc
	var_5576_object = var_5569_object; // 0x2988 Push
	if(var_5576_object == 0) goto Label_10636; // 0x2989 JumpB
	Remove(); // 0x298a ObjFunc
	
Label_10636:
	var_5577_string = "k6q01IfLara"; // 0x298c PushS
	FindMark(var_5569_object, var_5577_string); // 0x298d ObjFunc
	var_5578_object = var_5569_object; // 0x298f Push
	if(var_5578_object == 0) goto Label_10643; // 0x2990 JumpB
	Remove(); // 0x2991 ObjFunc
	
Label_10643:
	var_5579_string = "k6q01IfOspina"; // 0x2993 PushS
	FindMark(var_5569_object, var_5579_string); // 0x2994 ObjFunc
	var_5580_object = var_5569_object; // 0x2996 Push
	if(var_5580_object == 0) goto Label_10650; // 0x2997 JumpB
	Remove(); // 0x2998 ObjFunc
	
Label_10650:
	var_5581_string = "k6q02GotoKapella"; // 0x299a PushS
	FindMark(var_5569_object, var_5581_string); // 0x299b ObjFunc
	var_5582_object = var_5569_object; // 0x299d Push
	if(var_5582_object == 0) goto Label_10657; // 0x299e JumpB
	Remove(); // 0x299f ObjFunc
	
Label_10657:
	var_5583_bool = 0; var_5584_int = 0; // 0x29a1 PushV
	var_5584_int = 408; // 0x29a2 MovI
	func_11392(var_5583_bool, var_5584_int); // 0x29a3 NEW_2
	var_5585_bool = 0; var_5586_int = 0; // 0x29a5 PushV
	var_5586_int = 500; // 0x29a6 MovI
	func_11392(var_5585_bool, var_5586_int); // 0x29a7 NEW_2
	var_5587_bool = 0; var_5588_int = 0; // 0x29a9 PushV
	var_5588_int = 748; // 0x29aa MovI
	func_11392(var_5587_bool, var_5588_int); // 0x29ab NEW_2
	var_5589_bool = 0; var_5590_int = 0; // 0x29ad PushV
	var_5590_int = 723; // 0x29ae MovI
	func_11392(var_5589_bool, var_5590_int); // 0x29af NEW_2
	return 4; // 0x29b1 Return
}


func_8570(var_4477_int, var_4478_int)
{
	var_4480_object = Obj(); var_4481_object = Obj(); var_4482_string = ""; var_4483_int = 0; var_4484_int = 0; var_4485_int = 0; var_4486_object = Obj(); var_4487_object = Obj(); var_4488_string = ""; var_4489_int = 0; var_4490_int = 0; var_4491_int = 0; // 0x217a PushV
	var_4492_bool = 0; // 0x217b PushV
	var_4492_bool = 0; // 0x217c MovB
	var_4493_int = 5; // 0x217d PushI
	var_4494_bool = var_4478_int == var_4493_int; // 0x217e Eq
	if(var_4494_bool == 0) goto Label_8580; // 0x217f JumpB
	var_4495_int = 7; // 0x2180 PushI
	var_4496_bool = var_4477_int >= var_4495_int; // 0x2181 GE
	if(var_4496_bool == 0) goto Label_8580; // 0x2182 JumpB
	var_4492_bool = 1; // 0x2183 MovB
	
Label_8580:
	if(var_4492_bool == 0) goto Label_8591; // 0x2184 JumpB
	var_4497_int = 0; // 0x2185 PushV
	func_11434(var_4497_int); // 0x2186 NEW_2
	var_4498_int = 2; // 0x2188 PushI
	var_4499_bool = var_4497_int != var_4498_int; // 0x2189 Neq
	if(var_4499_bool == 0) goto Label_8590; // 0x218a JumpB
	func_7781(); // 0x218c NEW_2
	
Label_8590:
	goto Label_8610; // 0x218e Jump
	
Label_8610:
	var_4546_bool = 0; // 0x21a2 PushV
	var_4546_bool = 0; // 0x21a3 MovB
	var_4547_int = 7; // 0x21a4 PushI
	var_4548_bool = var_4478_int == var_4547_int; // 0x21a5 Eq
	if(var_4548_bool == 0) goto Label_8619; // 0x21a6 JumpB
	var_4549_int = 1; // 0x21a7 PushI
	var_4550_bool = var_4477_int != var_4549_int; // 0x21a8 Neq
	if(var_4550_bool == 0) goto Label_8619; // 0x21a9 JumpB
	var_4546_bool = 1; // 0x21aa MovB
	
Label_8619:
	if(var_4546_bool == 0) goto Label_8623; // 0x21ab JumpB
	var_4551_int = 100; // 0x21ac PushI
	SendWorldWndMessage(var_4551_int); // 0x21ad Func
	
Label_8623:
	var_4552_int = 0; // 0x21af PushI
	var_4553_bool = var_4478_int == var_4552_int; // 0x21b0 Eq
	if(var_4553_bool == 0) goto Label_8711; // 0x21b1 JumpB
	func_8748(); // 0x21b3 NEW_2
	func_8823(); // 0x21b6 NEW_2
	var_4647_int = 6; // 0x21b8 PushI
	var_4648_bool = var_4477_int == var_4647_int; // 0x21b9 Eq
	if(var_4648_bool == 0) goto Label_8644; // 0x21ba JumpB
	GetMainOutdoorScene(var_4486_object); // 0x21bb Func
	var_4649_string = "shed_corpse"; // 0x21bd PushS
	var_4650_string = "splash_object_wo_pf.bin"; // 0x21be PushS
	var_4651_cvector = CVector(0.0, 0.0, 0.0); // 0x21bf PushVec
	AddScriptedActor(var_4487_object, var_4649_string, var_4650_string, var_4486_object, var_4651_cvector); // 0x21c0 Func
	var_4487_object = 0; // 0x21c2 SetNull
	var_4486_object = 0; // 0x21c3 SetNull
	
Label_8644:
	var_4652_int = 9; // 0x21c4 PushI
	var_4653_bool = var_4477_int == var_4652_int; // 0x21c5 Eq
	if(var_4653_bool == 0) goto Label_8650; // 0x21c6 JumpB
	func_8872(); // 0x21c8 NEW_2
	
Label_8650:
	var_4667_int = 1; // 0x21ca PushI
	var_4668_bool = var_4477_int != var_4667_int; // 0x21cb Neq
	if(var_4668_bool == 0) goto Label_8711; // 0x21cc JumpB
	var_4669_int = 0; // 0x21cd PushV
	func_11434(var_4669_int); // 0x21ce NEW_2
	var_4670_int = 1; // 0x21d0 PushI
	var_4671_bool = var_4669_int == var_4670_int; // 0x21d1 Eq
	if(var_4671_bool == 0) goto Label_8669; // 0x21d2 JumpB
	var_4672_string = "b"; // 0x21d3 PushS
	var_4673_int = 1; // 0x21d4 PushI
	var_4674_int = var_4477_int - var_4673_int; // 0x21d5 Sub
	var_4675_int = var_4672_string + var_4674_int; // 0x21d6 Add
	var_4676_string = "q01"; // 0x21d7 PushS
	var_4677_int = var_4675_int + var_4676_string; // 0x21d8 Add
	GetVariable(var_4677_int, var_4489_int); // 0x21d9 Func
	var_4488_string = "volonteers_burah"; // 0x21db MovS
	goto Label_8694; // 0x21dc Jump
	
Label_8694:
	Trace(var_4488_string); // 0x21f6 Func
	var_4678_int = 1000; // 0x21f8 PushI
	var_4679_bool = var_4489_int == var_4678_int; // 0x21f9 Eq
	if(var_4679_bool == 0) goto Label_8705; // 0x21fa JumpB
	var_4680_bool = 0; var_4681_string = ""; var_4682_string = ""; var_4683_string = ""; // 0x21fb PushV
	var_4681_string = var_4488_string; // 0x21fc Mov
	var_4682_string = "rescue_locked"; // 0x21fd MovS
	var_4683_string = ""; // 0x21fe MovS
	func_251(var_4680_bool, var_4681_string, var_4682_string, var_4683_string); // 0x21ff NEW_2
	
Label_8705:
	var_4687_bool = 0; var_4688_string = ""; var_4689_string = ""; var_4690_string = ""; // 0x2201 PushV
	var_4688_string = var_4488_string; // 0x2202 Mov
	var_4689_string = "update"; // 0x2203 MovS
	var_4690_string = ""; // 0x2204 MovS
	func_251(var_4687_bool, var_4688_string, var_4689_string, var_4690_string); // 0x2205 NEW_2
	
Label_8711:
	var_4691_bool = 0; // 0x2207 PushV
	var_4691_bool = 0; // 0x2208 MovB
	var_4692_int = 6; // 0x2209 PushI
	var_4693_bool = var_4477_int == var_4692_int; // 0x220a Eq
	if(var_4693_bool == 0) goto Label_8720; // 0x220b JumpB
	var_4694_int = 0; // 0x220c PushI
	var_4695_bool = var_4478_int == var_4694_int; // 0x220d Eq
	if(var_4695_bool == 0) goto Label_8720; // 0x220e JumpB
	var_4691_bool = 1; // 0x220f MovB
	
Label_8720:
	if(var_4691_bool == 0) goto Label_8724; // 0x2210 JumpB
	func_7901(); // 0x2212 NEW_2
	
Label_8724:
	var_4698_bool = 0; // 0x2214 PushV
	var_4698_bool = 0; // 0x2215 MovB
	var_4699_int = 7; // 0x2216 PushI
	var_4700_bool = var_4477_int == var_4699_int; // 0x2217 Eq
	if(var_4700_bool == 0) goto Label_8733; // 0x2218 JumpB
	var_4701_int = 0; // 0x2219 PushI
	var_4702_bool = var_4478_int == var_4701_int; // 0x221a Eq
	if(var_4702_bool == 0) goto Label_8733; // 0x221b JumpB
	var_4698_bool = 1; // 0x221c MovB
	
Label_8733:
	if(var_4698_bool == 0) goto Label_8747; // 0x221d JumpB
	var_4703_object = GlobalVars[14]; // 0x221e PushGE
	size(var_4490_int); // 0x221f ObjFunc
	var_4491_int = 0; // 0x2221 MovI
	
Label_8738:
	var_4704_bool = var_4491_int < var_4490_int; // 0x2222 LT
	if(var_4704_bool == 0) goto Label_8747; // 0x2223 JumpB
	var_4705_int = 0; // 0x2224 PushV
	var_4705_int = var_4491_int; // 0x2225 Mov
	func_7608(var_4705_int); // 0x2226 NEW_2
	var_4758_int = 1; // 0x2228 PushI
	var_4491_int = var_4491_int + var_4758_int; // 0x2229 Add2
	goto Label_8738; // 0x222a Jump
	
Label_8747:
	return 12; // 0x222b Return
	
Label_8669:
	var_4759_int = 0; // 0x21dd PushV
	func_11434(var_4759_int); // 0x21de NEW_2
	var_4760_int = 0; // 0x21e0 PushI
	var_4761_bool = var_4759_int == var_4760_int; // 0x21e1 Eq
	if(var_4761_bool == 0) goto Label_8685; // 0x21e2 JumpB
	var_4762_string = "d"; // 0x21e3 PushS
	var_4763_int = 1; // 0x21e4 PushI
	var_4764_int = var_4477_int - var_4763_int; // 0x21e5 Sub
	var_4765_int = var_4762_string + var_4764_int; // 0x21e6 Add
	var_4766_string = "q01"; // 0x21e7 PushS
	var_4767_int = var_4765_int + var_4766_string; // 0x21e8 Add
	GetVariable(var_4767_int, var_4489_int); // 0x21e9 Func
	var_4488_string = "volonteers_danko"; // 0x21eb MovS
	goto Label_8694; // 0x21ec Jump
	
Label_8685:
	var_4768_string = "k"; // 0x21ed PushS
	var_4769_int = 1; // 0x21ee PushI
	var_4770_int = var_4477_int - var_4769_int; // 0x21ef Sub
	var_4771_int = var_4768_string + var_4770_int; // 0x21f0 Add
	var_4772_string = "q01"; // 0x21f1 PushS
	var_4773_int = var_4771_int + var_4772_string; // 0x21f2 Add
	GetVariable(var_4773_int, var_4489_int); // 0x21f3 Func
	var_4488_string = "volonteers_klara"; // 0x21f5 MovS
	
Label_8591:
	var_4774_bool = 0; // 0x218f PushV
	var_4774_bool = 0; // 0x2190 MovB
	var_4775_int = 22; // 0x2191 PushI
	var_4776_bool = var_4478_int == var_4775_int; // 0x2192 Eq
	if(var_4776_bool == 0) goto Label_8600; // 0x2193 JumpB
	var_4777_int = 7; // 0x2194 PushI
	var_4778_bool = var_4477_int >= var_4777_int; // 0x2195 GE
	if(var_4778_bool == 0) goto Label_8600; // 0x2196 JumpB
	var_4774_bool = 1; // 0x2197 MovB
	
Label_8600:
	if(var_4774_bool == 0) goto Label_8610; // 0x2198 JumpB
	var_4779_int = 0; // 0x2199 PushV
	func_11434(var_4779_int); // 0x219a NEW_2
	var_4780_int = 2; // 0x219c PushI
	var_4781_bool = var_4779_int != var_4780_int; // 0x219d Neq
	if(var_4781_bool == 0) goto Label_8610; // 0x219e JumpB
	func_7844(); // 0x21a0 NEW_2
}


func_9601(var_3169_int, var_3170_int, var_3171_int)
{
	var_3172_object = Obj(); var_3173_object = Obj(); var_3174_object = Obj(); var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj(); var_3178_object = Obj(); var_3179_object = Obj(); // 0x2581 PushV
	var_3180_object = GlobalVars[8]; // 0x2582 PushGE
	get(var_3176_object, var_3169_int); // 0x2583 ObjFunc
	var_3181_object = GlobalVars[9]; // 0x2585 PushGE
	get(var_3177_object, var_3169_int); // 0x2586 ObjFunc
	var_3182_object = GlobalVars[10]; // 0x2588 PushGE
	get(var_3178_object, var_3169_int); // 0x2589 ObjFunc
	var_3183_object = GlobalVars[13]; // 0x258b PushGE
	get(var_3179_object, var_3169_int); // 0x258c ObjFunc
	var_3184_int = 0; // 0x258e PushI
	var_3185_bool = var_3169_int == var_3184_int; // 0x258f Eq
	if(var_3185_bool == 0) goto Label_9627; // 0x2590 JumpB
	var_3186_int = 0; var_3187_int = 0; var_3188_object = Obj(); var_3189_object = Obj(); var_3190_object = Obj(); var_3191_object = Obj(); // 0x2591 PushV
	var_3186_int = var_3170_int; // 0x2592 Mov
	var_3187_int = var_3171_int; // 0x2593 Mov
	var_3188_object = var_3176_object; // 0x2594 Mov
	var_3189_object = var_3177_object; // 0x2595 Mov
	var_3190_object = var_3178_object; // 0x2596 Mov
	var_3191_object = var_3179_object; // 0x2597 Mov
	func_4491(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object); // 0x2598 NEW_2
	goto Label_9821; // 0x259a Jump
	
Label_9821:
	return 8; // 0x265d Return
	
Label_9627:
	var_3398_int = 1; // 0x259b PushI
	var_3399_bool = var_3169_int == var_3398_int; // 0x259c Eq
	if(var_3399_bool == 0) goto Label_9640; // 0x259d JumpB
	var_3400_int = 0; var_3401_int = 0; var_3402_object = Obj(); var_3403_object = Obj(); var_3404_object = Obj(); var_3405_object = Obj(); // 0x259e PushV
	var_3400_int = var_3170_int; // 0x259f Mov
	var_3401_int = var_3171_int; // 0x25a0 Mov
	var_3402_object = var_3176_object; // 0x25a1 Mov
	var_3403_object = var_3177_object; // 0x25a2 Mov
	var_3404_object = var_3178_object; // 0x25a3 Mov
	var_3405_object = var_3179_object; // 0x25a4 Mov
	func_4688(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object); // 0x25a5 NEW_2
	goto Label_9821; // 0x25a7 Jump
	
Label_9640:
	var_3534_int = 2; // 0x25a8 PushI
	var_3535_bool = var_3169_int == var_3534_int; // 0x25a9 Eq
	if(var_3535_bool == 0) goto Label_9653; // 0x25aa JumpB
	var_3536_int = 0; var_3537_int = 0; var_3538_object = Obj(); var_3539_object = Obj(); var_3540_object = Obj(); var_3541_object = Obj(); // 0x25ab PushV
	var_3536_int = var_3170_int; // 0x25ac Mov
	var_3537_int = var_3171_int; // 0x25ad Mov
	var_3538_object = var_3176_object; // 0x25ae Mov
	var_3539_object = var_3177_object; // 0x25af Mov
	var_3540_object = var_3178_object; // 0x25b0 Mov
	var_3541_object = var_3179_object; // 0x25b1 Mov
	func_4894(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object); // 0x25b2 NEW_2
	goto Label_9821; // 0x25b4 Jump
	
Label_9653:
	var_3677_int = 3; // 0x25b5 PushI
	var_3678_bool = var_3169_int == var_3677_int; // 0x25b6 Eq
	if(var_3678_bool == 0) goto Label_9666; // 0x25b7 JumpB
	var_3679_int = 0; var_3680_int = 0; var_3681_object = Obj(); var_3682_object = Obj(); var_3683_object = Obj(); var_3684_object = Obj(); // 0x25b8 PushV
	var_3679_int = var_3170_int; // 0x25b9 Mov
	var_3680_int = var_3171_int; // 0x25ba Mov
	var_3681_object = var_3176_object; // 0x25bb Mov
	var_3682_object = var_3177_object; // 0x25bc Mov
	var_3683_object = var_3178_object; // 0x25bd Mov
	var_3684_object = var_3179_object; // 0x25be Mov
	func_5124(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object); // 0x25bf NEW_2
	goto Label_9821; // 0x25c1 Jump
	
Label_9666:
	var_3710_int = 4; // 0x25c2 PushI
	var_3711_bool = var_3169_int == var_3710_int; // 0x25c3 Eq
	if(var_3711_bool == 0) goto Label_9679; // 0x25c4 JumpB
	var_3712_int = 0; var_3713_int = 0; var_3714_object = Obj(); var_3715_object = Obj(); var_3716_object = Obj(); var_3717_object = Obj(); // 0x25c5 PushV
	var_3712_int = var_3170_int; // 0x25c6 Mov
	var_3713_int = var_3171_int; // 0x25c7 Mov
	var_3714_object = var_3176_object; // 0x25c8 Mov
	var_3715_object = var_3177_object; // 0x25c9 Mov
	var_3716_object = var_3178_object; // 0x25ca Mov
	var_3717_object = var_3179_object; // 0x25cb Mov
	func_5342(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object); // 0x25cc NEW_2
	goto Label_9821; // 0x25ce Jump
	
Label_9679:
	var_3743_int = 5; // 0x25cf PushI
	var_3744_bool = var_3169_int == var_3743_int; // 0x25d0 Eq
	if(var_3744_bool == 0) goto Label_9692; // 0x25d1 JumpB
	var_3745_int = 0; var_3746_int = 0; var_3747_object = Obj(); var_3748_object = Obj(); var_3749_object = Obj(); var_3750_object = Obj(); // 0x25d2 PushV
	var_3745_int = var_3170_int; // 0x25d3 Mov
	var_3746_int = var_3171_int; // 0x25d4 Mov
	var_3747_object = var_3176_object; // 0x25d5 Mov
	var_3748_object = var_3177_object; // 0x25d6 Mov
	var_3749_object = var_3178_object; // 0x25d7 Mov
	var_3750_object = var_3179_object; // 0x25d8 Mov
	func_5587(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object); // 0x25d9 NEW_2
	goto Label_9821; // 0x25db Jump
	
Label_9692:
	var_3776_int = 6; // 0x25dc PushI
	var_3777_bool = var_3169_int == var_3776_int; // 0x25dd Eq
	if(var_3777_bool == 0) goto Label_9705; // 0x25de JumpB
	var_3778_int = 0; var_3779_int = 0; var_3780_object = Obj(); var_3781_object = Obj(); var_3782_object = Obj(); var_3783_object = Obj(); // 0x25df PushV
	var_3778_int = var_3170_int; // 0x25e0 Mov
	var_3779_int = var_3171_int; // 0x25e1 Mov
	var_3780_object = var_3176_object; // 0x25e2 Mov
	var_3781_object = var_3177_object; // 0x25e3 Mov
	var_3782_object = var_3178_object; // 0x25e4 Mov
	var_3783_object = var_3179_object; // 0x25e5 Mov
	func_5655(); // 0x25e6 NEW_2
	goto Label_9821; // 0x25e8 Jump
	
Label_9705:
	var_3786_int = 7; // 0x25e9 PushI
	var_3787_bool = var_3169_int == var_3786_int; // 0x25ea Eq
	if(var_3787_bool == 0) goto Label_9718; // 0x25eb JumpB
	var_3788_int = 0; var_3789_int = 0; var_3790_object = Obj(); var_3791_object = Obj(); var_3792_object = Obj(); var_3793_object = Obj(); // 0x25ec PushV
	var_3788_int = var_3170_int; // 0x25ed Mov
	var_3789_int = var_3171_int; // 0x25ee Mov
	var_3790_object = var_3176_object; // 0x25ef Mov
	var_3791_object = var_3177_object; // 0x25f0 Mov
	var_3792_object = var_3178_object; // 0x25f1 Mov
	var_3793_object = var_3179_object; // 0x25f2 Mov
	func_5810(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object); // 0x25f3 NEW_2
	goto Label_9821; // 0x25f5 Jump
	
Label_9718:
	var_3929_int = 8; // 0x25f6 PushI
	var_3930_bool = var_3169_int == var_3929_int; // 0x25f7 Eq
	if(var_3930_bool == 0) goto Label_9731; // 0x25f8 JumpB
	var_3931_int = 0; var_3932_int = 0; var_3933_object = Obj(); var_3934_object = Obj(); var_3935_object = Obj(); var_3936_object = Obj(); // 0x25f9 PushV
	var_3931_int = var_3170_int; // 0x25fa Mov
	var_3932_int = var_3171_int; // 0x25fb Mov
	var_3933_object = var_3176_object; // 0x25fc Mov
	var_3934_object = var_3177_object; // 0x25fd Mov
	var_3935_object = var_3178_object; // 0x25fe Mov
	var_3936_object = var_3179_object; // 0x25ff Mov
	func_6010(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object); // 0x2600 NEW_2
	goto Label_9821; // 0x2602 Jump
	
Label_9731:
	var_3962_int = 9; // 0x2603 PushI
	var_3963_bool = var_3169_int == var_3962_int; // 0x2604 Eq
	if(var_3963_bool == 0) goto Label_9744; // 0x2605 JumpB
	var_3964_int = 0; var_3965_int = 0; var_3966_object = Obj(); var_3967_object = Obj(); var_3968_object = Obj(); var_3969_object = Obj(); // 0x2606 PushV
	var_3964_int = var_3170_int; // 0x2607 Mov
	var_3965_int = var_3171_int; // 0x2608 Mov
	var_3966_object = var_3176_object; // 0x2609 Mov
	var_3967_object = var_3177_object; // 0x260a Mov
	var_3968_object = var_3178_object; // 0x260b Mov
	var_3969_object = var_3179_object; // 0x260c Mov
	func_6213(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object); // 0x260d NEW_2
	goto Label_9821; // 0x260f Jump
	
Label_9744:
	var_3995_int = 10; // 0x2610 PushI
	var_3996_bool = var_3169_int == var_3995_int; // 0x2611 Eq
	if(var_3996_bool == 0) goto Label_9757; // 0x2612 JumpB
	var_3997_int = 0; var_3998_int = 0; var_3999_object = Obj(); var_4000_object = Obj(); var_4001_object = Obj(); var_4002_object = Obj(); // 0x2613 PushV
	var_3997_int = var_3170_int; // 0x2614 Mov
	var_3998_int = var_3171_int; // 0x2615 Mov
	var_3999_object = var_3176_object; // 0x2616 Mov
	var_4000_object = var_3177_object; // 0x2617 Mov
	var_4001_object = var_3178_object; // 0x2618 Mov
	var_4002_object = var_3179_object; // 0x2619 Mov
	func_6422(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object); // 0x261a NEW_2
	goto Label_9821; // 0x261c Jump
	
Label_9757:
	var_4028_int = 11; // 0x261d PushI
	var_4029_bool = var_3169_int == var_4028_int; // 0x261e Eq
	if(var_4029_bool == 0) goto Label_9770; // 0x261f JumpB
	var_4030_int = 0; var_4031_int = 0; var_4032_object = Obj(); var_4033_object = Obj(); var_4034_object = Obj(); var_4035_object = Obj(); // 0x2620 PushV
	var_4030_int = var_3170_int; // 0x2621 Mov
	var_4031_int = var_3171_int; // 0x2622 Mov
	var_4032_object = var_3176_object; // 0x2623 Mov
	var_4033_object = var_3177_object; // 0x2624 Mov
	var_4034_object = var_3178_object; // 0x2625 Mov
	var_4035_object = var_3179_object; // 0x2626 Mov
	func_6634(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object); // 0x2627 NEW_2
	goto Label_9821; // 0x2629 Jump
	
Label_9770:
	var_4061_int = 12; // 0x262a PushI
	var_4062_bool = var_3169_int == var_4061_int; // 0x262b Eq
	if(var_4062_bool == 0) goto Label_9783; // 0x262c JumpB
	var_4063_int = 0; var_4064_int = 0; var_4065_object = Obj(); var_4066_object = Obj(); var_4067_object = Obj(); var_4068_object = Obj(); // 0x262d PushV
	var_4063_int = var_3170_int; // 0x262e Mov
	var_4064_int = var_3171_int; // 0x262f Mov
	var_4065_object = var_3176_object; // 0x2630 Mov
	var_4066_object = var_3177_object; // 0x2631 Mov
	var_4067_object = var_3178_object; // 0x2632 Mov
	var_4068_object = var_3179_object; // 0x2633 Mov
	func_6831(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object); // 0x2634 NEW_2
	goto Label_9821; // 0x2636 Jump
	
Label_9783:
	var_4094_int = 13; // 0x2637 PushI
	var_4095_bool = var_3169_int == var_4094_int; // 0x2638 Eq
	if(var_4095_bool == 0) goto Label_9796; // 0x2639 JumpB
	var_4096_int = 0; var_4097_int = 0; var_4098_object = Obj(); var_4099_object = Obj(); var_4100_object = Obj(); var_4101_object = Obj(); // 0x263a PushV
	var_4096_int = var_3170_int; // 0x263b Mov
	var_4097_int = var_3171_int; // 0x263c Mov
	var_4098_object = var_3176_object; // 0x263d Mov
	var_4099_object = var_3177_object; // 0x263e Mov
	var_4100_object = var_3178_object; // 0x263f Mov
	var_4101_object = var_3179_object; // 0x2640 Mov
	func_7034(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object); // 0x2641 NEW_2
	goto Label_9821; // 0x2643 Jump
	
Label_9796:
	var_4127_int = 14; // 0x2644 PushI
	var_4128_bool = var_3169_int == var_4127_int; // 0x2645 Eq
	if(var_4128_bool == 0) goto Label_9809; // 0x2646 JumpB
	var_4129_int = 0; var_4130_int = 0; var_4131_object = Obj(); var_4132_object = Obj(); var_4133_object = Obj(); var_4134_object = Obj(); // 0x2647 PushV
	var_4129_int = var_3170_int; // 0x2648 Mov
	var_4130_int = var_3171_int; // 0x2649 Mov
	var_4131_object = var_3176_object; // 0x264a Mov
	var_4132_object = var_3177_object; // 0x264b Mov
	var_4133_object = var_3178_object; // 0x264c Mov
	var_4134_object = var_3179_object; // 0x264d Mov
	func_7234(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object); // 0x264e NEW_2
	goto Label_9821; // 0x2650 Jump
	
Label_9809:
	var_4270_int = 15; // 0x2651 PushI
	var_4271_bool = var_3169_int == var_4270_int; // 0x2652 Eq
	if(var_4271_bool == 0) goto Label_9821; // 0x2653 JumpB
	var_4272_int = 0; var_4273_int = 0; var_4274_object = Obj(); var_4275_object = Obj(); var_4276_object = Obj(); var_4277_object = Obj(); // 0x2654 PushV
	var_4272_int = var_3170_int; // 0x2655 Mov
	var_4273_int = var_3171_int; // 0x2656 Mov
	var_4274_object = var_3176_object; // 0x2657 Mov
	var_4275_object = var_3177_object; // 0x2658 Mov
	var_4276_object = var_3178_object; // 0x2659 Mov
	var_4277_object = var_3179_object; // 0x265a Mov
	func_7416(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object); // 0x265b NEW_2
}


func_6530(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object)
{
	var_1676_int = 0; // 0x1983 PushI
	var_1677_bool = var_1671_int == var_1676_int; // 0x1984 Eq
	if(var_1677_bool == 0) goto Label_6570; // 0x1985 JumpB
	var_1678_int = 0; var_1679_bool = 0; // 0x1986 PushV
	var_1678_int = 11; // 0x1987 MovI
	var_1679_bool = 0; // 0x1988 MovB
	func_796(var_1678_int, var_1679_bool); // 0x1989 NEW_2
	var_1680_int = 0; var_1681_bool = 0; var_1682_int = 0; // 0x198b PushV
	var_1680_int = 11; // 0x198c MovI
	var_1681_bool = 0; // 0x198d MovB
	var_1682_int = 1; // 0x198e MovI
	func_813(var_1680_int, var_1681_bool, var_1682_int); // 0x198f NEW_2
	var_1683_int = 0; var_1684_int = 0; var_1685_object = Obj(); var_1686_object = Obj(); var_1687_object = Obj(); // 0x1991 PushV
	var_1683_int = 11; // 0x1992 MovI
	var_1684_int = var_1670_int; // 0x1993 Mov
	var_1685_object = var_1672_object; // 0x1994 Mov
	var_1686_object = var_1673_object; // 0x1995 Mov
	var_1687_object = var_1674_object; // 0x1996 Mov
	func_622(var_1684_int, var_1685_object, var_1686_object, var_1687_object); // 0x1997 NEW_2
	var_1688_object = Obj(); var_1689_int = 0; // 0x1999 PushV
	var_1688_object = var_1675_object; // 0x199a Mov
	var_1689_int = 0; // 0x199b MovI
	func_305(var_1689_int); // 0x199c NEW_2
	var_1690_int = 0; var_1691_bool = 0; var_1692_int = 0; // 0x199e PushV
	var_1690_int = 11; // 0x199f MovI
	var_1691_bool = 0; // 0x19a0 MovB
	var_1692_int = 5; // 0x19a1 MovI
	func_870(var_1690_int, var_1691_bool, var_1692_int); // 0x19a2 NEW_2
	var_1693_int = 0; var_1694_bool = 0; var_1695_int = 0; // 0x19a4 PushV
	var_1693_int = 11; // 0x19a5 MovI
	var_1694_bool = 0; // 0x19a6 MovB
	var_1695_int = 5; // 0x19a7 MovI
	func_932(var_1693_int, var_1694_bool, var_1695_int); // 0x19a8 NEW_2
	
Label_6570:
	var_1696_int = 0; var_1697_int = 0; // 0x19aa PushV
	var_1696_int = 11; // 0x19ab MovI
	var_1697_int = var_1671_int; // 0x19ac Mov
	func_983(var_1696_int, var_1697_int); // 0x19ad NEW_2
	var_1698_int = 0; var_1699_int = 0; var_1700_int = 0; // 0x19af PushV
	var_1698_int = 11; // 0x19b0 MovI
	var_1699_int = var_1670_int; // 0x19b1 Mov
	var_1700_int = var_1671_int; // 0x19b2 Mov
	func_1624(var_1698_int, var_1699_int, var_1700_int); // 0x19b3 NEW_2
	return 0; // 0x19b5 Return
}


func_4491(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object)
{
	var_3192_int = 0; // 0x118c PushI
	var_3193_bool = var_3187_int == var_3192_int; // 0x118d Eq
	if(var_3193_bool == 0) goto Label_4531; // 0x118e JumpB
	var_3194_int = 0; var_3195_bool = 0; // 0x118f PushV
	var_3194_int = 0; // 0x1190 MovI
	var_3195_bool = 0; // 0x1191 MovB
	func_796(var_3194_int, var_3195_bool); // 0x1192 NEW_2
	var_3196_int = 0; var_3197_bool = 0; var_3198_int = 0; // 0x1194 PushV
	var_3196_int = 0; // 0x1195 MovI
	var_3197_bool = 0; // 0x1196 MovB
	var_3198_int = 1; // 0x1197 MovI
	func_813(var_3196_int, var_3197_bool, var_3198_int); // 0x1198 NEW_2
	var_3199_int = 0; var_3200_int = 0; var_3201_object = Obj(); var_3202_object = Obj(); var_3203_object = Obj(); // 0x119a PushV
	var_3199_int = 0; // 0x119b MovI
	var_3200_int = var_3186_int; // 0x119c Mov
	var_3201_object = var_3188_object; // 0x119d Mov
	var_3202_object = var_3189_object; // 0x119e Mov
	var_3203_object = var_3190_object; // 0x119f Mov
	func_720(var_3199_int, var_3200_int, var_3201_object, var_3202_object, var_3203_object); // 0x11a0 NEW_2
	var_3238_object = Obj(); var_3239_int = 0; // 0x11a2 PushV
	var_3238_object = var_3191_object; // 0x11a3 Mov
	var_3239_int = 2; // 0x11a4 MovI
	func_305(var_3239_int); // 0x11a5 NEW_2
	var_3240_int = 0; var_3241_bool = 0; var_3242_int = 0; // 0x11a7 PushV
	var_3240_int = 0; // 0x11a8 MovI
	var_3241_bool = 0; // 0x11a9 MovB
	var_3242_int = 4; // 0x11aa MovI
	func_870(var_3240_int, var_3241_bool, var_3242_int); // 0x11ab NEW_2
	var_3243_int = 0; var_3244_bool = 0; var_3245_int = 0; // 0x11ad PushV
	var_3243_int = 0; // 0x11ae MovI
	var_3244_bool = 1; // 0x11af MovB
	var_3245_int = 4; // 0x11b0 MovI
	func_932(var_3243_int, var_3244_bool, var_3245_int); // 0x11b1 NEW_2
	
Label_4531:
	var_3246_int = 0; var_3247_bool = 0; // 0x11b3 PushV
	var_3246_int = 0; // 0x11b4 MovI
	var_3247_bool = 0; // 0x11b5 MovB
	func_779(var_3246_int, var_3247_bool); // 0x11b6 NEW_2
	var_3248_int = 0; var_3249_int = 0; var_3250_int = 0; // 0x11b8 PushV
	var_3248_int = 0; // 0x11b9 MovI
	var_3249_int = var_3186_int; // 0x11ba Mov
	var_3250_int = var_3187_int; // 0x11bb Mov
	func_4035(var_3248_int, var_3249_int, var_3250_int); // 0x11bc NEW_2
	return 0; // 0x11be Return
}


func_3471(var_4157_int, var_4158_int, var_4159_int)
{
	var_4160_int = 0; var_4161_int = 0; var_4162_int = 0; var_4163_int = 0; var_4164_int = 0; var_4165_int = 0; var_4166_int = 0; var_4167_int = 0; // 0xd8f PushV
	var_4168_bool = 0; // 0xd90 PushV
	var_4168_bool = 0; // 0xd91 MovB
	var_4169_int = 8; // 0xd92 PushI
	var_4170_bool = var_4159_int > var_4169_int; // 0xd93 GT
	if(var_4170_bool == 0) goto Label_3481; // 0xd94 JumpB
	var_4171_int = 21; // 0xd95 PushI
	var_4172_bool = var_4159_int < var_4171_int; // 0xd96 LT
	if(var_4172_bool == 0) goto Label_3481; // 0xd97 JumpB
	var_4168_bool = 1; // 0xd98 MovB
	
Label_3481:
	if(var_4168_bool == 0) goto Label_3558; // 0xd99 JumpB
	var_4173_int = 0; var_4174_string = ""; var_4175_string = ""; var_4176_int = 0; // 0xd9a PushV
	var_4173_int = var_4157_int; // 0xd9b Mov
	var_4174_string = "pers_rat"; // 0xd9c MovS
	var_4175_string = "rat.xml"; // 0xd9d MovS
	var_4176_int = 3; // 0xd9e MovI
	func_503(var_4173_int, var_4174_string, var_4175_string, var_4176_int); // 0xd9f NEW_2
	var_4177_int = 0; var_4178_string = ""; var_4179_string = ""; var_4180_int = 0; // 0xda1 PushV
	var_4177_int = var_4157_int; // 0xda2 Mov
	var_4178_string = "pers_alkash"; // 0xda3 MovS
	var_4179_string = "alkash.xml"; // 0xda4 MovS
	var_4180_int = 2; // 0xda5 MovI
	func_503(var_4177_int, var_4178_string, var_4179_string, var_4180_int); // 0xda6 NEW_2
	var_4181_int = 0; var_4182_string = ""; var_4183_string = ""; var_4184_int = 0; // 0xda8 PushV
	var_4181_int = var_4157_int; // 0xda9 Mov
	var_4182_string = "pers_dohodyaga"; // 0xdaa MovS
	var_4183_string = "dohodyaga.xml"; // 0xdab MovS
	var_4184_int = 1; // 0xdac MovI
	func_503(var_4181_int, var_4182_string, var_4183_string, var_4184_int); // 0xdad NEW_2
	var_4185_int = 2; // 0xdaf PushI
	var_4186_float = 0; var_4187_int = 0; // 0xdb0 PushV
	var_4187_int = var_4158_int; // 0xdb1 Mov
	func_1165(var_4186_float, var_4187_int); // 0xdb2 NEW_2
	var_4164_int = var_4185_int * var_4186_float; // 0xdb4 Mult2
	var_4188_int = var_4164_int; // 0xdb5 Push
	if(var_4188_int == 0) goto Label_3518; // 0xdb6 JumpB
	var_4189_int = 0; var_4190_string = ""; var_4191_string = ""; var_4192_int = 0; // 0xdb7 PushV
	var_4189_int = var_4157_int; // 0xdb8 Mov
	var_4190_string = "pers_grabitel"; // 0xdb9 MovS
	var_4191_string = "grabitel.xml"; // 0xdba MovS
	var_4192_int = var_4164_int; // 0xdbb Mov
	func_503(var_4189_int, var_4190_string, var_4191_string, var_4192_int); // 0xdbc NEW_2
	
Label_3518:
	var_4193_int = 1; // 0xdbe PushI
	var_4194_int = var_4158_int + var_4193_int; // 0xdbf Add
	var_4195_int = 2; // 0xdc0 PushI
	var_4196_bool = var_4194_int >= var_4195_int; // 0xdc1 GE
	if(var_4196_bool == 0) goto Label_3542; // 0xdc2 JumpB
	var_4197_int = 0; var_4198_string = ""; var_4199_string = ""; var_4200_int = 0; // 0xdc3 PushV
	var_4197_int = var_4157_int; // 0xdc4 Mov
	var_4198_string = "pers_patrool"; // 0xdc5 MovS
	var_4199_string = "patrol.xml"; // 0xdc6 MovS
	var_4200_int = 2; // 0xdc7 MovI
	func_503(var_4197_int, var_4198_string, var_4199_string, var_4200_int); // 0xdc8 NEW_2
	var_4201_bool = 0; var_4202_int = 0; // 0xdca PushV
	var_4202_int = var_4158_int; // 0xdcb Mov
	func_1372(var_4201_bool, var_4202_int); // 0xdcc NEW_2
	if(var_4201_bool == 0) goto Label_3542; // 0xdce JumpB
	var_4203_int = 0; var_4204_string = ""; var_4205_string = ""; var_4206_int = 0; // 0xdcf PushV
	var_4203_int = var_4157_int; // 0xdd0 Mov
	var_4204_string = "pers_soldat_hand"; // 0xdd1 MovS
	var_4205_string = "soldier_patrol.xml"; // 0xdd2 MovS
	var_4206_int = 1; // 0xdd3 MovI
	func_503(var_4203_int, var_4204_string, var_4205_string, var_4206_int); // 0xdd4 NEW_2
	
Label_3542:
	var_4207_int = 1; // 0xdd6 PushI
	var_4208_float = 0; var_4209_int = 0; // 0xdd7 PushV
	var_4209_int = var_4158_int; // 0xdd8 Mov
	func_1255(var_4208_float, var_4209_int); // 0xdd9 NEW_2
	var_4165_int = var_4207_int * var_4208_float; // 0xddb Mult2
	var_4210_int = var_4165_int; // 0xddc Push
	if(var_4210_int == 0) goto Label_3557; // 0xddd JumpB
	var_4211_int = 0; var_4212_string = ""; var_4213_string = ""; var_4214_int = 0; // 0xdde PushV
	var_4211_int = var_4157_int; // 0xddf Mov
	var_4212_string = "pers_bomber"; // 0xde0 MovS
	var_4213_string = "bomber.xml"; // 0xde1 MovS
	var_4214_int = var_4165_int; // 0xde2 Mov
	func_503(var_4211_int, var_4212_string, var_4213_string, var_4214_int); // 0xde3 NEW_2
	
Label_3557:
	goto Label_3633; // 0xde5 Jump
	
Label_3633:
	var_4215_bool = 0; var_4216_int = 0; var_4217_int = 0; // 0xe31 PushV
	var_4216_int = var_4158_int; // 0xe32 Mov
	var_4217_int = var_4159_int; // 0xe33 Mov
	func_1345(var_4215_bool, var_4216_int, var_4217_int); // 0xe34 NEW_2
	if(var_4215_bool == 0) goto Label_3646; // 0xe36 JumpB
	var_4218_int = 0; var_4219_string = ""; var_4220_string = ""; var_4221_int = 0; // 0xe37 PushV
	var_4218_int = var_4157_int; // 0xe38 Mov
	var_4219_string = "pers_soldat"; // 0xe39 MovS
	var_4220_string = "soldier_marauder.xml"; // 0xe3a MovS
	var_4221_int = 2; // 0xe3b MovI
	func_503(var_4218_int, var_4219_string, var_4220_string, var_4221_int); // 0xe3c NEW_2
	
Label_3646:
	var_4222_bool = 0; var_4223_int = 0; // 0xe3e PushV
	var_4223_int = var_4158_int; // 0xe3f Mov
	func_1372(var_4222_bool, var_4223_int); // 0xe40 NEW_2
	if(var_4222_bool == 0) goto Label_3658; // 0xe42 JumpB
	var_4224_int = 0; var_4225_string = ""; var_4226_string = ""; var_4227_int = 0; // 0xe43 PushV
	var_4224_int = var_4157_int; // 0xe44 Mov
	var_4225_string = "pers_sanitar"; // 0xe45 MovS
	var_4226_string = "sanitar.xml"; // 0xe46 MovS
	var_4227_int = 1; // 0xe47 MovI
	func_503(var_4224_int, var_4225_string, var_4226_string, var_4227_int); // 0xe48 NEW_2
	
Label_3658:
	return 8; // 0xe4a Return
	
Label_3558:
	var_4228_int = 0; var_4229_string = ""; var_4230_string = ""; var_4231_int = 0; // 0xde6 PushV
	var_4228_int = var_4157_int; // 0xde7 Mov
	var_4229_string = "pers_rat"; // 0xde8 MovS
	var_4230_string = "rat.xml"; // 0xde9 MovS
	var_4231_int = 5; // 0xdea MovI
	func_503(var_4228_int, var_4229_string, var_4230_string, var_4231_int); // 0xdeb NEW_2
	var_4232_int = 0; var_4233_string = ""; var_4234_string = ""; var_4235_int = 0; // 0xded PushV
	var_4232_int = var_4157_int; // 0xdee Mov
	var_4233_string = "pers_alkash"; // 0xdef MovS
	var_4234_string = "alkash.xml"; // 0xdf0 MovS
	var_4235_int = 1; // 0xdf1 MovI
	func_503(var_4232_int, var_4233_string, var_4234_string, var_4235_int); // 0xdf2 NEW_2
	var_4236_int = 1; // 0xdf4 PushI
	var_4237_int = var_4158_int + var_4236_int; // 0xdf5 Add
	var_4238_int = 2; // 0xdf6 PushI
	var_4239_bool = var_4237_int >= var_4238_int; // 0xdf7 GE
	if(var_4239_bool == 0) goto Label_3596; // 0xdf8 JumpB
	var_4240_int = 0; var_4241_string = ""; var_4242_string = ""; var_4243_int = 0; // 0xdf9 PushV
	var_4240_int = var_4157_int; // 0xdfa Mov
	var_4241_string = "pers_patrool"; // 0xdfb MovS
	var_4242_string = "patrol.xml"; // 0xdfc MovS
	var_4243_int = 1; // 0xdfd MovI
	func_503(var_4240_int, var_4241_string, var_4242_string, var_4243_int); // 0xdfe NEW_2
	var_4244_bool = 0; var_4245_int = 0; // 0xe00 PushV
	var_4245_int = var_4158_int; // 0xe01 Mov
	func_1372(var_4244_bool, var_4245_int); // 0xe02 NEW_2
	if(var_4244_bool == 0) goto Label_3596; // 0xe04 JumpB
	var_4246_int = 0; var_4247_string = ""; var_4248_string = ""; var_4249_int = 0; // 0xe05 PushV
	var_4246_int = var_4157_int; // 0xe06 Mov
	var_4247_string = "pers_soldat_hand"; // 0xe07 MovS
	var_4248_string = "soldier_patrol.xml"; // 0xe08 MovS
	var_4249_int = 1; // 0xe09 MovI
	func_503(var_4246_int, var_4247_string, var_4248_string, var_4249_int); // 0xe0a NEW_2
	
Label_3596:
	var_4250_int = 0; var_4251_string = ""; var_4252_string = ""; var_4253_int = 0; // 0xe0c PushV
	var_4250_int = var_4157_int; // 0xe0d Mov
	var_4251_string = "pers_rat"; // 0xe0e MovS
	var_4252_string = "rat.xml"; // 0xe0f MovS
	var_4253_int = 2; // 0xe10 MovI
	func_503(var_4250_int, var_4251_string, var_4252_string, var_4253_int); // 0xe11 NEW_2
	var_4254_int = 3; // 0xe13 PushI
	var_4255_float = 0; var_4256_int = 0; // 0xe14 PushV
	var_4256_int = var_4158_int; // 0xe15 Mov
	func_1165(var_4255_float, var_4256_int); // 0xe16 NEW_2
	var_4166_int = var_4254_int * var_4255_float; // 0xe18 Mult2
	var_4257_int = var_4166_int; // 0xe19 Push
	if(var_4257_int == 0) goto Label_3618; // 0xe1a JumpB
	var_4258_int = 0; var_4259_string = ""; var_4260_string = ""; var_4261_int = 0; // 0xe1b PushV
	var_4258_int = var_4157_int; // 0xe1c Mov
	var_4259_string = "pers_grabitel"; // 0xe1d MovS
	var_4260_string = "grabitel.xml"; // 0xe1e MovS
	var_4261_int = var_4166_int; // 0xe1f Mov
	func_503(var_4258_int, var_4259_string, var_4260_string, var_4261_int); // 0xe20 NEW_2
	
Label_3618:
	var_4262_int = 1; // 0xe22 PushI
	var_4263_float = 0; var_4264_int = 0; // 0xe23 PushV
	var_4264_int = var_4158_int; // 0xe24 Mov
	func_1255(var_4263_float, var_4264_int); // 0xe25 NEW_2
	var_4167_int = var_4262_int * var_4263_float; // 0xe27 Mult2
	var_4265_int = var_4167_int; // 0xe28 Push
	if(var_4265_int == 0) goto Label_3633; // 0xe29 JumpB
	var_4266_int = 0; var_4267_string = ""; var_4268_string = ""; var_4269_int = 0; // 0xe2a PushV
	var_4266_int = var_4157_int; // 0xe2b Mov
	var_4267_string = "pers_bomber"; // 0xe2c MovS
	var_4268_string = "bomber.xml"; // 0xe2d MovS
	var_4269_int = var_4167_int; // 0xe2e Mov
	func_503(var_4266_int, var_4267_string, var_4268_string, var_4269_int); // 0xe2f NEW_2
}


func_400(var_492_bool, var_493_int)
{
	var_494_int = 0; var_495_int = 0; // 0x190 PushV
	var_496_string = ""; var_497_int = 0; // 0x191 PushV
	var_497_int = var_493_int; // 0x192 Mov
	func_299(var_496_string, var_497_int); // 0x193 NEW_2
	GetVariable(var_496_string, var_495_int); // 0x195 Func
	var_498_int = 3; // 0x197 PushI
	var_499_int = var_495_int & var_498_int; // 0x198 And
	var_500_int = 0; // 0x199 PushI
	var_492_bool = var_499_int == var_500_int; // 0x19a Eq2
	return 2; // 0x19b Return
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


func_5535(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object)
{
	var_2625_int = 0; // 0x15a0 PushI
	var_2626_bool = var_2620_int == var_2625_int; // 0x15a1 Eq
	if(var_2626_bool == 0) goto Label_5575; // 0x15a2 JumpB
	var_2627_int = 0; var_2628_bool = 0; // 0x15a3 PushV
	var_2627_int = 5; // 0x15a4 MovI
	var_2628_bool = 1; // 0x15a5 MovB
	func_796(var_2627_int, var_2628_bool); // 0x15a6 NEW_2
	var_2629_int = 0; var_2630_bool = 0; var_2631_int = 0; // 0x15a8 PushV
	var_2629_int = 5; // 0x15a9 MovI
	var_2630_bool = 1; // 0x15aa MovB
	var_2631_int = 1; // 0x15ab MovI
	func_813(var_2629_int, var_2630_bool, var_2631_int); // 0x15ac NEW_2
	var_2632_int = 0; var_2633_int = 0; var_2634_object = Obj(); var_2635_object = Obj(); var_2636_object = Obj(); // 0x15ae PushV
	var_2632_int = 5; // 0x15af MovI
	var_2633_int = var_2619_int; // 0x15b0 Mov
	var_2634_object = var_2621_object; // 0x15b1 Mov
	var_2635_object = var_2622_object; // 0x15b2 Mov
	var_2636_object = var_2623_object; // 0x15b3 Mov
	func_641(var_2632_int, var_2633_int, var_2634_object, var_2635_object, var_2636_object); // 0x15b4 NEW_2
	var_2637_object = Obj(); var_2638_int = 0; // 0x15b6 PushV
	var_2637_object = var_2624_object; // 0x15b7 Mov
	var_2638_int = 1; // 0x15b8 MovI
	func_305(var_2638_int); // 0x15b9 NEW_2
	var_2639_int = 0; var_2640_bool = 0; var_2641_int = 0; // 0x15bb PushV
	var_2639_int = 5; // 0x15bc MovI
	var_2640_bool = 1; // 0x15bd MovB
	var_2641_int = 4; // 0x15be MovI
	func_870(var_2639_int, var_2640_bool, var_2641_int); // 0x15bf NEW_2
	var_2642_int = 0; var_2643_bool = 0; var_2644_int = 0; // 0x15c1 PushV
	var_2642_int = 5; // 0x15c2 MovI
	var_2643_bool = 0; // 0x15c3 MovB
	var_2644_int = 4; // 0x15c4 MovI
	func_932(var_2642_int, var_2643_bool, var_2644_int); // 0x15c5 NEW_2
	
Label_5575:
	var_2645_int = 0; var_2646_bool = 0; // 0x15c7 PushV
	var_2645_int = 5; // 0x15c8 MovI
	var_2646_bool = 0; // 0x15c9 MovB
	func_779(var_2645_int, var_2646_bool); // 0x15ca NEW_2
	var_2647_int = 0; var_2648_int = 0; var_2649_int = 0; // 0x15cc PushV
	var_2647_int = 5; // 0x15cd MovI
	var_2648_int = var_2619_int; // 0x15ce Mov
	var_2649_int = var_2620_int; // 0x15cf Mov
	func_2944(var_2647_int, var_2648_int, var_2649_int); // 0x15d0 NEW_2
	return 0; // 0x15d2 Return
}


func_430(var_1979_bool, var_1980_int)
{
	var_1981_int = 0; var_1982_int = 0; // 0x1ae PushV
	var_1983_string = ""; var_1984_int = 0; // 0x1af PushV
	var_1984_int = var_1980_int; // 0x1b0 Mov
	func_299(var_1983_string, var_1984_int); // 0x1b1 NEW_2
	GetVariable(var_1983_string, var_1982_int); // 0x1b3 Func
	var_1985_int = 3; // 0x1b5 PushI
	var_1986_int = var_1982_int & var_1985_int; // 0x1b6 And
	var_1987_int = 1; // 0x1b7 PushI
	var_1979_bool = var_1986_int == var_1987_int; // 0x1b8 Eq2
	return 2; // 0x1b9 Return
}


func_10676()
{
	var_5907_object = Obj(); var_5908_object = Obj(); var_5909_object = Obj(); var_5910_object = Obj(); // 0x29b4 PushV
	var_5911_object = Obj(); // 0x29b5 PushV
	func_11417(var_5911_object); // 0x29b6 NEW_2
	var_5909_object = var_5911_object; // 0x29b7 Mov
	var_5912_string = "k7q01BirdmaskGotoCorpse"; // 0x29b9 PushS
	FindMark(var_5910_object, var_5912_string); // 0x29ba ObjFunc
	var_5913_object = var_5910_object; // 0x29bc Push
	if(var_5913_object == 0) goto Label_10688; // 0x29bd JumpB
	Remove(); // 0x29be ObjFunc
	
Label_10688:
	var_5914_string = "k7q02DankoGotoGatherer"; // 0x29c0 PushS
	FindMark(var_5910_object, var_5914_string); // 0x29c1 ObjFunc
	var_5915_object = var_5910_object; // 0x29c3 Push
	if(var_5915_object == 0) goto Label_10695; // 0x29c4 JumpB
	Remove(); // 0x29c5 ObjFunc
	
Label_10695:
	var_5916_string = "k7q03BurahGotoFather"; // 0x29c7 PushS
	FindMark(var_5910_object, var_5916_string); // 0x29c8 ObjFunc
	var_5917_object = var_5910_object; // 0x29ca Push
	if(var_5917_object == 0) goto Label_10702; // 0x29cb JumpB
	Remove(); // 0x29cc ObjFunc
	
Label_10702:
	var_5918_bool = 0; var_5919_int = 0; // 0x29ce PushV
	var_5919_int = 416; // 0x29cf MovI
	func_11392(var_5918_bool, var_5919_int); // 0x29d0 NEW_2
	var_5920_bool = 0; var_5921_int = 0; // 0x29d2 PushV
	var_5921_int = 430; // 0x29d3 MovI
	func_11392(var_5920_bool, var_5921_int); // 0x29d4 NEW_2
	var_5922_bool = 0; var_5923_int = 0; // 0x29d6 PushV
	var_5923_int = 434; // 0x29d7 MovI
	func_11392(var_5922_bool, var_5923_int); // 0x29d8 NEW_2
	var_5924_bool = 0; var_5925_int = 0; // 0x29da PushV
	var_5925_int = 723; // 0x29db MovI
	func_11392(var_5924_bool, var_5925_int); // 0x29dc NEW_2
	return 4; // 0x29de Return
}


func_6582(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object)
{
	var_2906_int = 0; // 0x19b7 PushI
	var_2907_bool = var_2901_int == var_2906_int; // 0x19b8 Eq
	if(var_2907_bool == 0) goto Label_6622; // 0x19b9 JumpB
	var_2908_int = 0; var_2909_bool = 0; // 0x19ba PushV
	var_2908_int = 11; // 0x19bb MovI
	var_2909_bool = 0; // 0x19bc MovB
	func_796(var_2908_int, var_2909_bool); // 0x19bd NEW_2
	var_2910_int = 0; var_2911_bool = 0; var_2912_int = 0; // 0x19bf PushV
	var_2910_int = 11; // 0x19c0 MovI
	var_2911_bool = 1; // 0x19c1 MovB
	var_2912_int = 1; // 0x19c2 MovI
	func_813(var_2910_int, var_2911_bool, var_2912_int); // 0x19c3 NEW_2
	var_2913_int = 0; var_2914_int = 0; var_2915_object = Obj(); var_2916_object = Obj(); var_2917_object = Obj(); // 0x19c5 PushV
	var_2913_int = 11; // 0x19c6 MovI
	var_2914_int = var_2900_int; // 0x19c7 Mov
	var_2915_object = var_2902_object; // 0x19c8 Mov
	var_2916_object = var_2903_object; // 0x19c9 Mov
	var_2917_object = var_2904_object; // 0x19ca Mov
	func_641(var_2913_int, var_2914_int, var_2915_object, var_2916_object, var_2917_object); // 0x19cb NEW_2
	var_2918_object = Obj(); var_2919_int = 0; // 0x19cd PushV
	var_2918_object = var_2905_object; // 0x19ce Mov
	var_2919_int = 1; // 0x19cf MovI
	func_305(var_2919_int); // 0x19d0 NEW_2
	var_2920_int = 0; var_2921_bool = 0; var_2922_int = 0; // 0x19d2 PushV
	var_2920_int = 11; // 0x19d3 MovI
	var_2921_bool = 1; // 0x19d4 MovB
	var_2922_int = 5; // 0x19d5 MovI
	func_870(var_2920_int, var_2921_bool, var_2922_int); // 0x19d6 NEW_2
	var_2923_int = 0; var_2924_bool = 0; var_2925_int = 0; // 0x19d8 PushV
	var_2923_int = 11; // 0x19d9 MovI
	var_2924_bool = 0; // 0x19da MovB
	var_2925_int = 5; // 0x19db MovI
	func_932(var_2923_int, var_2924_bool, var_2925_int); // 0x19dc NEW_2
	
Label_6622:
	var_2926_int = 0; var_2927_bool = 0; // 0x19de PushV
	var_2926_int = 11; // 0x19df MovI
	var_2927_bool = 0; // 0x19e0 MovB
	func_779(var_2926_int, var_2927_bool); // 0x19e1 NEW_2
	var_2928_int = 0; var_2929_int = 0; var_2930_int = 0; // 0x19e3 PushV
	var_2928_int = 11; // 0x19e4 MovI
	var_2929_int = var_2900_int; // 0x19e5 Mov
	var_2930_int = var_2901_int; // 0x19e6 Mov
	func_2764(var_2928_int, var_2929_int, var_2930_int); // 0x19e7 NEW_2
	return 0; // 0x19e9 Return
}


func_7608(var_10_int)
{
	var_12_int = 0; var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); // 0x1db8 PushV
	var_28_object = GlobalVars[14]; // 0x1db9 PushGE
	size(var_20_int); // 0x1dba ObjFunc
	var_29_bool = 0; // 0x1dbc PushV
	var_29_bool = 1; // 0x1dbd MovB
	var_30_bool = var_10_int >= var_20_int; // 0x1dbe GE
	if(var_30_bool == 0) goto Label_7620; // 0x1dbf JumpB
	var_31_int = -1; // 0x1dc0 PushI
	var_32_bool = var_10_int == var_31_int; // 0x1dc1 Eq
	if(var_32_bool == 0) goto Label_7620; // 0x1dc2 JumpB
	var_29_bool = 0; // 0x1dc3 MovB
	
Label_7620:
	if(var_29_bool == 0) goto Label_7626; // 0x1dc4 JumpB
	var_33_string = "Wrong bonfire index "; // 0x1dc5 PushS
	var_34_int = var_33_string + var_10_int; // 0x1dc6 Add
	Trace(var_34_int); // 0x1dc7 Func
	return 16; // 0x1dc9 Return
	
Label_7626:
	var_35_object = GlobalVars[14]; // 0x1dca PushGE
	get(var_21_object, var_10_int); // 0x1dcb ObjFunc
	var_36_string = "bonfire_light"; // 0x1dcd PushS
	var_37_int = 1; // 0x1dce PushI
	var_38_int = var_10_int + var_37_int; // 0x1dcf Add
	var_39_int = var_36_string + var_38_int; // 0x1dd0 Add
	FindActor(var_22_object, var_39_int); // 0x1dd1 Func
	var_40_bool = var_22_object == 0; // 0x1dd3 Not
	if(var_40_bool == 0) goto Label_7646; // 0x1dd4 JumpB
	var_41_string = "Bofire  light "; // 0x1dd5 PushS
	var_42_int = 1; // 0x1dd6 PushI
	var_43_int = var_10_int + var_42_int; // 0x1dd7 Add
	var_44_int = var_41_string + var_43_int; // 0x1dd8 Add
	var_45_string = " not found"; // 0x1dd9 PushS
	var_46_int = var_44_int + var_45_string; // 0x1dda Add
	Trace(var_46_int); // 0x1ddb Func
	goto Label_7649; // 0x1ddd Jump
	
Label_7649:
	GetMainOutdoorScene(var_23_object); // 0x1de1 Func
	var_47_string = "pt_bonfire"; // 0x1de3 PushS
	var_48_int = 1; // 0x1de4 PushI
	var_49_int = var_10_int + var_48_int; // 0x1de5 Add
	var_50_int = var_47_string + var_49_int; // 0x1de6 Add
	GetLocator(var_50_int, var_26_bool, var_24_cvector, var_25_cvector); // 0x1de7 ObjFunc
	var_51_bool = var_26_bool == 0; // 0x1de9 Not
	if(var_51_bool == 0) goto Label_7663; // 0x1dea JumpB
	var_52_string = "Locator for bonfire doesn't exist"; // 0x1deb PushS
	Trace(var_52_string); // 0x1dec Func
	return 16; // 0x1dee Return
	
Label_7663:
	var_53_bool = var_21_object == 0; // 0x1def Not
	if(var_53_bool == 0) goto Label_7673; // 0x1df0 JumpB
	var_54_string = "scripted"; // 0x1df1 PushS
	var_55_string = "bonfire_big.xml"; // 0x1df2 PushS
	AddActorByType(var_27_object, var_54_string, var_23_object, var_24_cvector, var_25_cvector, var_55_string); // 0x1df3 Func
	var_56_object = GlobalVars[14]; // 0x1df5 PushGE
	set(var_10_int, var_27_object); // 0x1df6 ObjFunc
	var_27_object = 0; // 0x1df8 SetNull
	
Label_7673:
	var_57_string = "Setting bonfire "; // 0x1df9 PushS
	var_58_int = 1; // 0x1dfa PushI
	var_59_int = var_10_int + var_58_int; // 0x1dfb Add
	var_60_int = var_57_string + var_59_int; // 0x1dfc Add
	var_61_string = "... ok"; // 0x1dfd PushS
	var_62_int = var_60_int + var_61_string; // 0x1dfe Add
	Trace(var_62_int); // 0x1dff Func
	return 16; // 0x1e01 Return
	
Label_7646:
	var_63_bool = 1; // 0x1dde PushB
	Switch(var_63_bool); // 0x1ddf ObjFunc
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


func_5587(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object)
{
	var_3751_int = 0; // 0x15d4 PushI
	var_3752_bool = var_3746_int == var_3751_int; // 0x15d5 Eq
	if(var_3752_bool == 0) goto Label_5627; // 0x15d6 JumpB
	var_3753_int = 0; var_3754_bool = 0; // 0x15d7 PushV
	var_3753_int = 5; // 0x15d8 MovI
	var_3754_bool = 0; // 0x15d9 MovB
	func_796(var_3753_int, var_3754_bool); // 0x15da NEW_2
	var_3755_int = 0; var_3756_bool = 0; var_3757_int = 0; // 0x15dc PushV
	var_3755_int = 5; // 0x15dd MovI
	var_3756_bool = 0; // 0x15de MovB
	var_3757_int = 1; // 0x15df MovI
	func_813(var_3755_int, var_3756_bool, var_3757_int); // 0x15e0 NEW_2
	var_3758_int = 0; var_3759_int = 0; var_3760_object = Obj(); var_3761_object = Obj(); var_3762_object = Obj(); // 0x15e2 PushV
	var_3758_int = 5; // 0x15e3 MovI
	var_3759_int = var_3745_int; // 0x15e4 Mov
	var_3760_object = var_3747_object; // 0x15e5 Mov
	var_3761_object = var_3748_object; // 0x15e6 Mov
	var_3762_object = var_3749_object; // 0x15e7 Mov
	func_720(var_3758_int, var_3759_int, var_3760_object, var_3761_object, var_3762_object); // 0x15e8 NEW_2
	var_3763_object = Obj(); var_3764_int = 0; // 0x15ea PushV
	var_3763_object = var_3750_object; // 0x15eb Mov
	var_3764_int = 2; // 0x15ec MovI
	func_305(var_3764_int); // 0x15ed NEW_2
	var_3765_int = 0; var_3766_bool = 0; var_3767_int = 0; // 0x15ef PushV
	var_3765_int = 5; // 0x15f0 MovI
	var_3766_bool = 0; // 0x15f1 MovB
	var_3767_int = 4; // 0x15f2 MovI
	func_870(var_3765_int, var_3766_bool, var_3767_int); // 0x15f3 NEW_2
	var_3768_int = 0; var_3769_bool = 0; var_3770_int = 0; // 0x15f5 PushV
	var_3768_int = 5; // 0x15f6 MovI
	var_3769_bool = 1; // 0x15f7 MovB
	var_3770_int = 4; // 0x15f8 MovI
	func_932(var_3768_int, var_3769_bool, var_3770_int); // 0x15f9 NEW_2
	
Label_5627:
	var_3771_int = 0; var_3772_bool = 0; // 0x15fb PushV
	var_3771_int = 5; // 0x15fc MovI
	var_3772_bool = 0; // 0x15fd MovB
	func_779(var_3771_int, var_3772_bool); // 0x15fe NEW_2
	var_3773_int = 0; var_3774_int = 0; var_3775_int = 0; // 0x1600 PushV
	var_3773_int = 5; // 0x1601 MovI
	var_3774_int = var_3745_int; // 0x1602 Mov
	var_3775_int = var_3746_int; // 0x1603 Mov
	func_3847(var_3773_int, var_3774_int, var_3775_int); // 0x1604 NEW_2
	return 0; // 0x1606 Return
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


func_10721()
{
	var_5685_bool = 0; var_5686_int = 0; // 0x29e2 PushV
	var_5686_int = 438; // 0x29e3 MovI
	func_11392(var_5685_bool, var_5686_int); // 0x29e4 NEW_2
	var_5687_bool = 0; var_5688_int = 0; // 0x29e6 PushV
	var_5688_int = 723; // 0x29e7 MovI
	func_11392(var_5687_bool, var_5688_int); // 0x29e8 NEW_2
	var_5689_bool = 0; var_5690_int = 0; // 0x29ea PushV
	var_5690_int = 751; // 0x29eb MovI
	func_11392(var_5689_bool, var_5690_int); // 0x29ec NEW_2
	var_5691_bool = 0; var_5692_int = 0; // 0x29ee PushV
	var_5692_int = 757; // 0x29ef MovI
	func_11392(var_5691_bool, var_5692_int); // 0x29f0 NEW_2
	return 0; // 0x29f2 Return
}


func_4584(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object)
{
	var_892_int = 0; // 0x11e9 PushI
	var_893_bool = var_887_int == var_892_int; // 0x11ea Eq
	if(var_893_bool == 0) goto Label_4624; // 0x11eb JumpB
	var_894_int = 0; var_895_bool = 0; // 0x11ec PushV
	var_894_int = 1; // 0x11ed MovI
	var_895_bool = 0; // 0x11ee MovB
	func_796(var_894_int, var_895_bool); // 0x11ef NEW_2
	var_896_int = 0; var_897_bool = 0; var_898_int = 0; // 0x11f1 PushV
	var_896_int = 1; // 0x11f2 MovI
	var_897_bool = 0; // 0x11f3 MovB
	var_898_int = 1; // 0x11f4 MovI
	func_813(var_896_int, var_897_bool, var_898_int); // 0x11f5 NEW_2
	var_899_int = 0; var_900_int = 0; var_901_object = Obj(); var_902_object = Obj(); var_903_object = Obj(); // 0x11f7 PushV
	var_899_int = 1; // 0x11f8 MovI
	var_900_int = var_886_int; // 0x11f9 Mov
	var_901_object = var_888_object; // 0x11fa Mov
	var_902_object = var_889_object; // 0x11fb Mov
	var_903_object = var_890_object; // 0x11fc Mov
	func_622(var_900_int, var_901_object, var_902_object, var_903_object); // 0x11fd NEW_2
	var_904_object = Obj(); var_905_int = 0; // 0x11ff PushV
	var_904_object = var_891_object; // 0x1200 Mov
	var_905_int = 0; // 0x1201 MovI
	func_305(var_905_int); // 0x1202 NEW_2
	var_906_int = 0; var_907_bool = 0; var_908_int = 0; // 0x1204 PushV
	var_906_int = 1; // 0x1205 MovI
	var_907_bool = 0; // 0x1206 MovB
	var_908_int = 8; // 0x1207 MovI
	func_870(var_906_int, var_907_bool, var_908_int); // 0x1208 NEW_2
	var_909_int = 0; var_910_bool = 0; var_911_int = 0; // 0x120a PushV
	var_909_int = 1; // 0x120b MovI
	var_910_bool = 0; // 0x120c MovB
	var_911_int = 8; // 0x120d MovI
	func_932(var_909_int, var_910_bool, var_911_int); // 0x120e NEW_2
	
Label_4624:
	var_912_int = 0; var_913_int = 0; // 0x1210 PushV
	var_912_int = 1; // 0x1211 MovI
	var_913_int = var_887_int; // 0x1212 Mov
	func_1050(var_912_int, var_913_int); // 0x1213 NEW_2
	var_914_int = 0; var_915_int = 0; var_916_int = 0; // 0x1215 PushV
	var_914_int = 1; // 0x1216 MovI
	var_915_int = var_886_int; // 0x1217 Mov
	var_916_int = var_887_int; // 0x1218 Mov
	func_2383(var_914_int, var_915_int, var_916_int); // 0x1219 NEW_2
	return 0; // 0x121b Return
}


func_490(var_487_int)
{
	var_488_object = Obj(); var_489_object = Obj(); // 0x1ea PushV
	GetMainOutdoorScene(var_489_object); // 0x1eb Func
	var_490_bool = var_489_object == 0; // 0x1ed NullEq
	if(var_490_bool == 0) goto Label_499; // 0x1ee JumpB
	var_491_string = "City manager: main outdoor scene not found"; // 0x1ef PushS
	Trace(var_491_string); // 0x1f0 Func
	return 2; // 0x1f2 Return
	
Label_499:
	RemoveAllRegionActors(var_487_int); // 0x1f3 ObjFunc
	return 2; // 0x1f5 Return
}


func_6634(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object)
{
	var_4036_int = 0; // 0x19eb PushI
	var_4037_bool = var_4031_int == var_4036_int; // 0x19ec Eq
	if(var_4037_bool == 0) goto Label_6674; // 0x19ed JumpB
	var_4038_int = 0; var_4039_bool = 0; // 0x19ee PushV
	var_4038_int = 11; // 0x19ef MovI
	var_4039_bool = 1; // 0x19f0 MovB
	func_796(var_4038_int, var_4039_bool); // 0x19f1 NEW_2
	var_4040_int = 0; var_4041_bool = 0; var_4042_int = 0; // 0x19f3 PushV
	var_4040_int = 11; // 0x19f4 MovI
	var_4041_bool = 0; // 0x19f5 MovB
	var_4042_int = 1; // 0x19f6 MovI
	func_813(var_4040_int, var_4041_bool, var_4042_int); // 0x19f7 NEW_2
	var_4043_int = 0; var_4044_int = 0; var_4045_object = Obj(); var_4046_object = Obj(); var_4047_object = Obj(); // 0x19f9 PushV
	var_4043_int = 11; // 0x19fa MovI
	var_4044_int = var_4030_int; // 0x19fb Mov
	var_4045_object = var_4032_object; // 0x19fc Mov
	var_4046_object = var_4033_object; // 0x19fd Mov
	var_4047_object = var_4034_object; // 0x19fe Mov
	func_720(var_4043_int, var_4044_int, var_4045_object, var_4046_object, var_4047_object); // 0x19ff NEW_2
	var_4048_object = Obj(); var_4049_int = 0; // 0x1a01 PushV
	var_4048_object = var_4035_object; // 0x1a02 Mov
	var_4049_int = 2; // 0x1a03 MovI
	func_305(var_4049_int); // 0x1a04 NEW_2
	var_4050_int = 0; var_4051_bool = 0; var_4052_int = 0; // 0x1a06 PushV
	var_4050_int = 11; // 0x1a07 MovI
	var_4051_bool = 0; // 0x1a08 MovB
	var_4052_int = 5; // 0x1a09 MovI
	func_870(var_4050_int, var_4051_bool, var_4052_int); // 0x1a0a NEW_2
	var_4053_int = 0; var_4054_bool = 0; var_4055_int = 0; // 0x1a0c PushV
	var_4053_int = 11; // 0x1a0d MovI
	var_4054_bool = 1; // 0x1a0e MovB
	var_4055_int = 5; // 0x1a0f MovI
	func_932(var_4053_int, var_4054_bool, var_4055_int); // 0x1a10 NEW_2
	
Label_6674:
	var_4056_int = 0; var_4057_bool = 0; // 0x1a12 PushV
	var_4056_int = 11; // 0x1a13 MovI
	var_4057_bool = 0; // 0x1a14 MovB
	func_779(var_4056_int, var_4057_bool); // 0x1a15 NEW_2
	var_4058_int = 0; var_4059_int = 0; var_4060_int = 0; // 0x1a17 PushV
	var_4058_int = 11; // 0x1a18 MovI
	var_4059_int = var_4030_int; // 0x1a19 Mov
	var_4060_int = var_4031_int; // 0x1a1a Mov
	func_3659(var_4058_int, var_4059_int, var_4060_int); // 0x1a1b NEW_2
	return 0; // 0x1a1d Return
}


func_10739()
{
	var_5704_bool = 0; var_5705_int = 0; // 0x29f4 PushV
	var_5705_int = 517; // 0x29f5 MovI
	func_11392(var_5704_bool, var_5705_int); // 0x29f6 NEW_2
	var_5706_bool = 0; var_5707_int = 0; // 0x29f8 PushV
	var_5707_int = 723; // 0x29f9 MovI
	func_11392(var_5706_bool, var_5707_int); // 0x29fa NEW_2
	var_5708_bool = 0; var_5709_int = 0; // 0x29fc PushV
	var_5709_int = 751; // 0x29fd MovI
	func_11392(var_5708_bool, var_5709_int); // 0x29fe NEW_2
	var_5710_bool = 0; var_5711_int = 0; // 0x2a00 PushV
	var_5711_int = 757; // 0x2a01 MovI
	func_11392(var_5710_bool, var_5711_int); // 0x2a02 NEW_2
	return 0; // 0x2a04 Return
}


func_503(var_783_int, var_784_string, var_785_string, var_786_int)
{
	var_787_object = Obj(); var_788_object = Obj(); // 0x1f7 PushV
	GetMainOutdoorScene(var_788_object); // 0x1f8 Func
	var_789_bool = var_788_object == 0; // 0x1fa NullEq
	if(var_789_bool == 0) goto Label_512; // 0x1fb JumpB
	var_790_string = "City manager: Can't find main outdoor scene"; // 0x1fc PushS
	Trace(var_790_string); // 0x1fd Func
	return 2; // 0x1ff Return
	
Label_512:
	SetRegionActorCount(var_783_int, var_784_string, var_785_string, var_786_int); // 0x200 ObjFunc
	return 2; // 0x202 Return
}


func_516(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int)
{
	var_2221_object = Obj(); var_2222_object = Obj(); // 0x204 PushV
	GetMainOutdoorScene(var_2222_object); // 0x205 Func
	var_2223_bool = var_2222_object == 0; // 0x207 NullEq
	if(var_2223_bool == 0) goto Label_525; // 0x208 JumpB
	var_2224_string = "City manager: Can't find main outdoor scene"; // 0x209 PushS
	Trace(var_2224_string); // 0x20a Func
	return 2; // 0x20c Return
	
Label_525:
	SetRegionActorCount(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int); // 0x20d ObjFunc
	return 2; // 0x20f Return
}


func_7685(var_379_int)
{
	var_380_int = 0; var_381_object = Obj(); var_382_object = Obj(); var_383_int = 0; var_384_object = Obj(); var_385_object = Obj(); // 0x1e05 PushV
	var_386_object = GlobalVars[14]; // 0x1e06 PushGE
	size(var_383_int); // 0x1e07 ObjFunc
	var_387_bool = 0; // 0x1e09 PushV
	var_387_bool = 1; // 0x1e0a MovB
	var_388_bool = var_379_int >= var_383_int; // 0x1e0b GE
	if(var_388_bool == 0) goto Label_7697; // 0x1e0c JumpB
	var_389_int = -1; // 0x1e0d PushI
	var_390_bool = var_379_int == var_389_int; // 0x1e0e Eq
	if(var_390_bool == 0) goto Label_7697; // 0x1e0f JumpB
	var_387_bool = 0; // 0x1e10 MovB
	
Label_7697:
	if(var_387_bool == 0) goto Label_7703; // 0x1e11 JumpB
	var_391_string = "Wrong bonfire index "; // 0x1e12 PushS
	var_392_int = var_391_string + var_379_int; // 0x1e13 Add
	Trace(var_392_int); // 0x1e14 Func
	return 6; // 0x1e16 Return
	
Label_7703:
	var_393_object = GlobalVars[14]; // 0x1e17 PushGE
	get(var_384_object, var_379_int); // 0x1e18 ObjFunc
	var_394_string = "bonfire_light"; // 0x1e1a PushS
	var_395_int = 1; // 0x1e1b PushI
	var_396_int = var_379_int + var_395_int; // 0x1e1c Add
	var_397_int = var_394_string + var_396_int; // 0x1e1d Add
	FindActor(var_385_object, var_397_int); // 0x1e1e Func
	var_398_bool = var_385_object == 0; // 0x1e20 Not
	if(var_398_bool == 0) goto Label_7723; // 0x1e21 JumpB
	var_399_string = "Bofire  light "; // 0x1e22 PushS
	var_400_int = 1; // 0x1e23 PushI
	var_401_int = var_379_int + var_400_int; // 0x1e24 Add
	var_402_int = var_399_string + var_401_int; // 0x1e25 Add
	var_403_string = " not found"; // 0x1e26 PushS
	var_404_int = var_402_int + var_403_string; // 0x1e27 Add
	Trace(var_404_int); // 0x1e28 Func
	goto Label_7726; // 0x1e2a Jump
	
Label_7726:
	var_405_object = var_384_object; // 0x1e2e Push
	if(var_405_object == 0) goto Label_7730; // 0x1e2f JumpB
	RemoveActor(var_384_object); // 0x1e30 Func
	
Label_7730:
	var_384_object = 0; // 0x1e32 SetNull
	var_406_object = GlobalVars[14]; // 0x1e33 PushGE
	set(var_379_int, var_384_object); // 0x1e34 ObjFunc
	var_407_string = "Cleanup bonfire "; // 0x1e36 PushS
	var_408_int = 1; // 0x1e37 PushI
	var_409_int = var_379_int + var_408_int; // 0x1e38 Add
	var_410_int = var_407_string + var_409_int; // 0x1e39 Add
	var_411_string = "... ok"; // 0x1e3a PushS
	var_412_int = var_410_int + var_411_string; // 0x1e3b Add
	Trace(var_412_int); // 0x1e3c Func
	return 6; // 0x1e3e Return
	
Label_7723:
	var_413_bool = 0; // 0x1e2b PushB
	Switch(var_413_bool); // 0x1e2c ObjFunc
}


func_10757()
{
	var_5495_object = Obj(); var_5496_object = Obj(); var_5497_object = Obj(); var_5498_object = Obj(); // 0x2a05 PushV
	var_5499_object = Obj(); // 0x2a06 PushV
	func_11417(var_5499_object); // 0x2a07 NEW_2
	var_5497_object = var_5499_object; // 0x2a08 Mov
	var_5500_string = "k10q01NotkinGotoRubin"; // 0x2a0a PushS
	FindMark(var_5498_object, var_5500_string); // 0x2a0b ObjFunc
	var_5501_object = var_5498_object; // 0x2a0d Push
	if(var_5501_object == 0) goto Label_10769; // 0x2a0e JumpB
	Remove(); // 0x2a0f ObjFunc
	
Label_10769:
	var_5502_string = "k10q01WastedGotoBurah"; // 0x2a11 PushS
	FindMark(var_5498_object, var_5502_string); // 0x2a12 ObjFunc
	var_5503_object = var_5498_object; // 0x2a14 Push
	if(var_5503_object == 0) goto Label_10776; // 0x2a15 JumpB
	Remove(); // 0x2a16 ObjFunc
	
Label_10776:
	var_5504_bool = 0; var_5505_int = 0; // 0x2a18 PushV
	var_5505_int = 447; // 0x2a19 MovI
	func_11392(var_5504_bool, var_5505_int); // 0x2a1a NEW_2
	var_5506_bool = 0; var_5507_int = 0; // 0x2a1c PushV
	var_5507_int = 723; // 0x2a1d MovI
	func_11392(var_5506_bool, var_5507_int); // 0x2a1e NEW_2
	var_5508_bool = 0; var_5509_int = 0; // 0x2a20 PushV
	var_5509_int = 751; // 0x2a21 MovI
	func_11392(var_5508_bool, var_5509_int); // 0x2a22 NEW_2
	var_5510_bool = 0; var_5511_int = 0; // 0x2a24 PushV
	var_5511_int = 757; // 0x2a25 MovI
	func_11392(var_5510_bool, var_5511_int); // 0x2a26 NEW_2
	return 4; // 0x2a28 Return
}


func_5639()
{
	return 0; // 0x1608 Return
}


func_5641(var_1375_int)
{
	var_1380_int = 0; var_1381_int = 0; // 0x160a PushV
	var_1380_int = 6; // 0x160b MovI
	var_1381_int = var_1375_int; // 0x160c Mov
	func_1050(var_1380_int, var_1381_int); // 0x160d NEW_2
	return 0; // 0x160f Return
}


func_5648()
{
	var_2658_int = 0; var_2659_bool = 0; // 0x1611 PushV
	var_2658_int = 6; // 0x1612 MovI
	var_2659_bool = 0; // 0x1613 MovB
	func_779(var_2658_int, var_2659_bool); // 0x1614 NEW_2
	return 0; // 0x1616 Return
}


func_529(var_2142_int, var_2143_string, var_2144_string, var_2145_int)
{
	var_2146_object = Obj(); var_2147_object = Obj(); // 0x211 PushV
	GetMainOutdoorScene(var_2147_object); // 0x212 Func
	var_2148_bool = var_2147_object == 0; // 0x214 NullEq
	if(var_2148_bool == 0) goto Label_538; // 0x215 JumpB
	var_2149_string = "City manager: Can't find main outdoor scene"; // 0x216 PushS
	Trace(var_2149_string); // 0x217 Func
	return 2; // 0x219 Return
	
Label_538:
	SetRegionActorCountByType(var_2142_int, var_2143_string, var_2144_string, var_2145_int); // 0x21a ObjFunc
	return 2; // 0x21c Return
}


func_5655()
{
	var_3784_int = 0; var_3785_bool = 0; // 0x1618 PushV
	var_3784_int = 6; // 0x1619 MovI
	var_3785_bool = 0; // 0x161a MovB
	func_779(var_3784_int, var_3785_bool); // 0x161b NEW_2
	return 0; // 0x161d Return
}


func_2584(var_3027_int, var_3028_int, var_3029_int)
{
	var_3030_int = 0; var_3031_int = 0; var_3032_int = 0; var_3033_int = 0; // 0xa18 PushV
	var_3034_bool = 0; // 0xa19 PushV
	var_3034_bool = 0; // 0xa1a MovB
	var_3035_int = 8; // 0xa1b PushI
	var_3036_bool = var_3029_int > var_3035_int; // 0xa1c GT
	if(var_3036_bool == 0) goto Label_2594; // 0xa1d JumpB
	var_3037_int = 21; // 0xa1e PushI
	var_3038_bool = var_3029_int < var_3037_int; // 0xa1f LT
	if(var_3038_bool == 0) goto Label_2594; // 0xa20 JumpB
	var_3034_bool = 1; // 0xa21 MovB
	
Label_2594:
	if(var_3034_bool == 0) goto Label_2649; // 0xa22 JumpB
	var_3039_int = 0; var_3040_string = ""; var_3041_string = ""; var_3042_int = 0; // 0xa23 PushV
	var_3039_int = var_3027_int; // 0xa24 Mov
	var_3040_string = "pers_vaxxabit"; // 0xa25 MovS
	var_3041_string = "vaxxabit_d.xml"; // 0xa26 MovS
	var_3042_int = 6; // 0xa27 MovI
	func_503(var_3039_int, var_3040_string, var_3041_string, var_3042_int); // 0xa28 NEW_2
	var_3043_int = 0; var_3044_string = ""; var_3045_string = ""; var_3046_int = 0; // 0xa2a PushV
	var_3043_int = var_3027_int; // 0xa2b Mov
	var_3044_string = "pers_vaxxabitka"; // 0xa2c MovS
	var_3045_string = "vaxxabitka_d.xml"; // 0xa2d MovS
	var_3046_int = 6; // 0xa2e MovI
	func_503(var_3043_int, var_3044_string, var_3045_string, var_3046_int); // 0xa2f NEW_2
	var_3047_int = 0; var_3048_string = ""; var_3049_string = ""; var_3050_int = 0; // 0xa31 PushV
	var_3047_int = var_3027_int; // 0xa32 Mov
	var_3048_string = "pers_rat_big"; // 0xa33 MovS
	var_3049_string = "rat_big.xml"; // 0xa34 MovS
	var_3050_int = 3; // 0xa35 MovI
	func_503(var_3047_int, var_3048_string, var_3049_string, var_3050_int); // 0xa36 NEW_2
	var_3051_int = 0; var_3052_string = ""; var_3053_string = ""; var_3054_int = 0; // 0xa38 PushV
	var_3051_int = var_3027_int; // 0xa39 Mov
	var_3052_string = "fog"; // 0xa3a MovS
	var_3053_string = "fog.xml"; // 0xa3b MovS
	var_3054_int = 8; // 0xa3c MovI
	func_529(var_3051_int, var_3052_string, var_3053_string, var_3054_int); // 0xa3d NEW_2
	var_3055_int = 5; // 0xa3f PushI
	var_3056_bool = var_3028_int >= var_3055_int; // 0xa40 GE
	if(var_3056_bool == 0) goto Label_2633; // 0xa41 JumpB
	var_3057_int = 0; var_3058_string = ""; var_3059_string = ""; var_3060_int = 0; // 0xa42 PushV
	var_3057_int = var_3027_int; // 0xa43 Mov
	var_3058_string = "fog"; // 0xa44 MovS
	var_3059_string = "fog_hunter.xml"; // 0xa45 MovS
	var_3060_int = 3; // 0xa46 MovI
	func_529(var_3057_int, var_3058_string, var_3059_string, var_3060_int); // 0xa47 NEW_2
	
Label_2633:
	var_3061_int = 1; // 0xa49 PushI
	var_3062_float = 0; var_3063_int = 0; // 0xa4a PushV
	var_3063_int = var_3028_int; // 0xa4b Mov
	func_1255(var_3062_float, var_3063_int); // 0xa4c NEW_2
	var_3032_int = var_3061_int * var_3062_float; // 0xa4e Mult2
	var_3064_int = var_3032_int; // 0xa4f Push
	if(var_3064_int == 0) goto Label_2648; // 0xa50 JumpB
	var_3065_int = 0; var_3066_string = ""; var_3067_string = ""; var_3068_int = 0; // 0xa51 PushV
	var_3065_int = var_3027_int; // 0xa52 Mov
	var_3066_string = "pers_bomber"; // 0xa53 MovS
	var_3067_string = "bomber.xml"; // 0xa54 MovS
	var_3068_int = var_3032_int; // 0xa55 Mov
	func_503(var_3065_int, var_3066_string, var_3067_string, var_3068_int); // 0xa56 NEW_2
	
Label_2648:
	goto Label_2702; // 0xa58 Jump
	
Label_2702:
	var_3069_int = 0; var_3070_string = ""; var_3071_string = ""; var_3072_int = 0; var_3073_int = 0; var_3074_int = 0; // 0xa8e PushV
	var_3069_int = var_3027_int; // 0xa8f Mov
	var_3070_string = "pers_worker"; // 0xa90 MovS
	var_3071_string = "agony1_man.xml"; // 0xa91 MovS
	var_3072_int = 2; // 0xa92 MovI
	var_3073_int = 4; // 0xa93 MovI
	var_3074_int = 4; // 0xa94 MovI
	func_516(var_3069_int, var_3070_string, var_3071_string, var_3072_int, var_3073_int, var_3074_int); // 0xa95 NEW_2
	var_3075_int = 0; var_3076_string = ""; var_3077_string = ""; var_3078_int = 0; var_3079_int = 0; var_3080_int = 0; // 0xa97 PushV
	var_3075_int = var_3027_int; // 0xa98 Mov
	var_3076_string = "pers_unosha"; // 0xa99 MovS
	var_3077_string = "agony1_man.xml"; // 0xa9a MovS
	var_3078_int = 2; // 0xa9b MovI
	var_3079_int = 4; // 0xa9c MovI
	var_3080_int = 4; // 0xa9d MovI
	func_516(var_3075_int, var_3076_string, var_3077_string, var_3078_int, var_3079_int, var_3080_int); // 0xa9e NEW_2
	var_3081_int = 0; var_3082_string = ""; var_3083_string = ""; var_3084_int = 0; var_3085_int = 0; var_3086_int = 0; // 0xaa0 PushV
	var_3081_int = var_3027_int; // 0xaa1 Mov
	var_3082_string = "pers_woman"; // 0xaa2 MovS
	var_3083_string = "agony1_woman.xml"; // 0xaa3 MovS
	var_3084_int = 2; // 0xaa4 MovI
	var_3085_int = 4; // 0xaa5 MovI
	var_3086_int = 4; // 0xaa6 MovI
	func_516(var_3081_int, var_3082_string, var_3083_string, var_3084_int, var_3085_int, var_3086_int); // 0xaa7 NEW_2
	var_3087_int = 0; var_3088_string = ""; var_3089_string = ""; var_3090_int = 0; var_3091_int = 0; var_3092_int = 0; // 0xaa9 PushV
	var_3087_int = var_3027_int; // 0xaaa Mov
	var_3088_string = "pers_wasted_girl"; // 0xaab MovS
	var_3089_string = "agony1_woman.xml"; // 0xaac MovS
	var_3090_int = 2; // 0xaad MovI
	var_3091_int = 4; // 0xaae MovI
	var_3092_int = 4; // 0xaaf MovI
	func_516(var_3087_int, var_3088_string, var_3089_string, var_3090_int, var_3091_int, var_3092_int); // 0xab0 NEW_2
	var_3093_bool = 0; var_3094_int = 0; var_3095_int = 0; // 0xab2 PushV
	var_3094_int = var_3028_int; // 0xab3 Mov
	var_3095_int = var_3029_int; // 0xab4 Mov
	func_1345(var_3093_bool, var_3094_int, var_3095_int); // 0xab5 NEW_2
	if(var_3093_bool == 0) goto Label_2751; // 0xab7 JumpB
	var_3096_int = 0; var_3097_string = ""; var_3098_string = ""; var_3099_int = 0; // 0xab8 PushV
	var_3096_int = var_3027_int; // 0xab9 Mov
	var_3097_string = "pers_soldat"; // 0xaba MovS
	var_3098_string = "soldier_marauder.xml"; // 0xabb MovS
	var_3099_int = 2; // 0xabc MovI
	func_503(var_3096_int, var_3097_string, var_3098_string, var_3099_int); // 0xabd NEW_2
	
Label_2751:
	var_3100_bool = 0; var_3101_int = 0; // 0xabf PushV
	var_3101_int = var_3028_int; // 0xac0 Mov
	func_1372(var_3100_bool, var_3101_int); // 0xac1 NEW_2
	if(var_3100_bool == 0) goto Label_2763; // 0xac3 JumpB
	var_3102_int = 0; var_3103_string = ""; var_3104_string = ""; var_3105_int = 0; // 0xac4 PushV
	var_3102_int = var_3027_int; // 0xac5 Mov
	var_3103_string = "pers_sanitar"; // 0xac6 MovS
	var_3104_string = "sanitar.xml"; // 0xac7 MovS
	var_3105_int = 2; // 0xac8 MovI
	func_503(var_3102_int, var_3103_string, var_3104_string, var_3105_int); // 0xac9 NEW_2
	
Label_2763:
	return 4; // 0xacb Return
	
Label_2649:
	var_3106_int = 0; var_3107_string = ""; var_3108_string = ""; var_3109_int = 0; // 0xa59 PushV
	var_3106_int = var_3027_int; // 0xa5a Mov
	var_3107_string = "pers_vaxxabit"; // 0xa5b MovS
	var_3108_string = "vaxxabit_d.xml"; // 0xa5c MovS
	var_3109_int = 6; // 0xa5d MovI
	func_503(var_3106_int, var_3107_string, var_3108_string, var_3109_int); // 0xa5e NEW_2
	var_3110_int = 0; var_3111_string = ""; var_3112_string = ""; var_3113_int = 0; // 0xa60 PushV
	var_3110_int = var_3027_int; // 0xa61 Mov
	var_3111_string = "pers_vaxxabitka"; // 0xa62 MovS
	var_3112_string = "vaxxabitka_d.xml"; // 0xa63 MovS
	var_3113_int = 5; // 0xa64 MovI
	func_503(var_3110_int, var_3111_string, var_3112_string, var_3113_int); // 0xa65 NEW_2
	var_3114_int = 0; var_3115_string = ""; var_3116_string = ""; var_3117_int = 0; // 0xa67 PushV
	var_3114_int = var_3027_int; // 0xa68 Mov
	var_3115_string = "pers_rat_big"; // 0xa69 MovS
	var_3116_string = "rat_big.xml"; // 0xa6a MovS
	var_3117_int = 4; // 0xa6b MovI
	func_503(var_3114_int, var_3115_string, var_3116_string, var_3117_int); // 0xa6c NEW_2
	var_3118_int = 0; var_3119_string = ""; var_3120_string = ""; var_3121_int = 0; // 0xa6e PushV
	var_3118_int = var_3027_int; // 0xa6f Mov
	var_3119_string = "fog"; // 0xa70 MovS
	var_3120_string = "fog.xml"; // 0xa71 MovS
	var_3121_int = 6; // 0xa72 MovI
	func_529(var_3118_int, var_3119_string, var_3120_string, var_3121_int); // 0xa73 NEW_2
	var_3122_int = 5; // 0xa75 PushI
	var_3123_bool = var_3028_int >= var_3122_int; // 0xa76 GE
	if(var_3123_bool == 0) goto Label_2687; // 0xa77 JumpB
	var_3124_int = 0; var_3125_string = ""; var_3126_string = ""; var_3127_int = 0; // 0xa78 PushV
	var_3124_int = var_3027_int; // 0xa79 Mov
	var_3125_string = "fog"; // 0xa7a MovS
	var_3126_string = "fog_hunter.xml"; // 0xa7b MovS
	var_3127_int = 2; // 0xa7c MovI
	func_529(var_3124_int, var_3125_string, var_3126_string, var_3127_int); // 0xa7d NEW_2
	
Label_2687:
	var_3128_int = 1; // 0xa7f PushI
	var_3129_float = 0; var_3130_int = 0; // 0xa80 PushV
	var_3130_int = var_3028_int; // 0xa81 Mov
	func_1255(var_3129_float, var_3130_int); // 0xa82 NEW_2
	var_3033_int = var_3128_int * var_3129_float; // 0xa84 Mult2
	var_3131_int = var_3033_int; // 0xa85 Push
	if(var_3131_int == 0) goto Label_2702; // 0xa86 JumpB
	var_3132_int = 0; var_3133_string = ""; var_3134_string = ""; var_3135_int = 0; // 0xa87 PushV
	var_3132_int = var_3027_int; // 0xa88 Mov
	var_3133_string = "pers_bomber"; // 0xa89 MovS
	var_3134_string = "bomber.xml"; // 0xa8a MovS
	var_3135_int = var_3033_int; // 0xa8b Mov
	func_503(var_3132_int, var_3133_string, var_3134_string, var_3135_int); // 0xa8c NEW_2
}


func_4636(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object)
{
	var_2281_int = 0; // 0x121d PushI
	var_2282_bool = var_2276_int == var_2281_int; // 0x121e Eq
	if(var_2282_bool == 0) goto Label_4676; // 0x121f JumpB
	var_2283_int = 0; var_2284_bool = 0; // 0x1220 PushV
	var_2283_int = 1; // 0x1221 MovI
	var_2284_bool = 1; // 0x1222 MovB
	func_796(var_2283_int, var_2284_bool); // 0x1223 NEW_2
	var_2285_int = 0; var_2286_bool = 0; var_2287_int = 0; // 0x1225 PushV
	var_2285_int = 1; // 0x1226 MovI
	var_2286_bool = 1; // 0x1227 MovB
	var_2287_int = 1; // 0x1228 MovI
	func_813(var_2285_int, var_2286_bool, var_2287_int); // 0x1229 NEW_2
	var_2288_int = 0; var_2289_int = 0; var_2290_object = Obj(); var_2291_object = Obj(); var_2292_object = Obj(); // 0x122b PushV
	var_2288_int = 1; // 0x122c MovI
	var_2289_int = var_2275_int; // 0x122d Mov
	var_2290_object = var_2277_object; // 0x122e Mov
	var_2291_object = var_2278_object; // 0x122f Mov
	var_2292_object = var_2279_object; // 0x1230 Mov
	func_641(var_2288_int, var_2289_int, var_2290_object, var_2291_object, var_2292_object); // 0x1231 NEW_2
	var_2293_object = Obj(); var_2294_int = 0; // 0x1233 PushV
	var_2293_object = var_2280_object; // 0x1234 Mov
	var_2294_int = 1; // 0x1235 MovI
	func_305(var_2294_int); // 0x1236 NEW_2
	var_2295_int = 0; var_2296_bool = 0; var_2297_int = 0; // 0x1238 PushV
	var_2295_int = 1; // 0x1239 MovI
	var_2296_bool = 1; // 0x123a MovB
	var_2297_int = 8; // 0x123b MovI
	func_870(var_2295_int, var_2296_bool, var_2297_int); // 0x123c NEW_2
	var_2298_int = 0; var_2299_bool = 0; var_2300_int = 0; // 0x123e PushV
	var_2298_int = 1; // 0x123f MovI
	var_2299_bool = 0; // 0x1240 MovB
	var_2300_int = 8; // 0x1241 MovI
	func_932(var_2298_int, var_2299_bool, var_2300_int); // 0x1242 NEW_2
	
Label_4676:
	var_2301_int = 0; var_2302_bool = 0; // 0x1244 PushV
	var_2301_int = 1; // 0x1245 MovI
	var_2302_bool = 0; // 0x1246 MovB
	func_779(var_2301_int, var_2302_bool); // 0x1247 NEW_2
	var_2303_int = 0; var_2304_int = 0; var_2305_int = 0; // 0x1249 PushV
	var_2303_int = 1; // 0x124a MovI
	var_2304_int = var_2275_int; // 0x124b Mov
	var_2305_int = var_2276_int; // 0x124c Mov
	func_3304(var_2303_int, var_2304_int, var_2305_int); // 0x124d NEW_2
	return 0; // 0x124f Return
}


func_542(var_571_int, var_572_bool)
{
	var_573_object = Obj(); var_574_object = Obj(); var_575_bool = 0; var_576_object = Obj(); var_577_object = Obj(); var_578_object = Obj(); var_579_bool = 0; var_580_object = Obj(); // 0x21e PushV
	GetMainOutdoorScene(var_577_object); // 0x21f Func
	var_581_int = 101; // 0x221 PushI
	var_582_int = var_581_int + var_571_int; // 0x222 Add
	GetGroupActors(var_578_object, var_582_int); // 0x223 ObjFunc
	var_583_object = var_578_object; // 0x225 Push
	if(var_583_object == 0) goto Label_573; // 0x226 JumpB
	
Label_551:
	Next(var_579_bool, var_580_object); // 0x227 ObjFunc
	var_584_bool = var_579_bool; // 0x229 Push
	if(var_584_bool == 0) goto Label_572; // 0x22a JumpB
	var_585_bool = 0; var_586_object = Obj(); var_587_string = ""; // 0x22b PushV
	var_586_object = var_580_object; // 0x22c Mov
	var_587_string = "locked"; // 0x22d MovS
	func_81(var_585_bool, var_586_object, var_587_string); // 0x22e NEW_2
	if(var_585_bool == 0) goto Label_565; // 0x230 JumpB
	var_594_string = "locked"; // 0x231 PushS
	SetProperty(var_594_string, var_572_bool); // 0x232 ObjFunc
	goto Label_571; // 0x234 Jump
	
Label_571:
	goto Label_551; // 0x23b Jump
	
Label_565:
	var_595_string = "Actor ""; // 0x235 PushS
	var_596_int = var_595_string + var_580_object; // 0x236 Add
	var_597_string = "" can't be locked"; // 0x237 PushS
	var_598_int = var_596_int + var_597_string; // 0x238 Add
	Trace(var_598_int); // 0x239 Func
	
Label_572:
	var_580_object = 0; // 0x23c SetNull
	
Label_573:
	return 8; // 0x23d Return
}


func_5662()
{
	var_178_string = "House6_02"; // 0x161f PushS
	add(var_178_string); // 0x1620 ObjFunc
	var_179_string = "House6_01"; // 0x1622 PushS
	add(var_179_string); // 0x1623 ObjFunc
	var_180_string = "house_2_01"; // 0x1625 PushS
	add(var_180_string); // 0x1626 ObjFunc
	var_181_string = "house7_03"; // 0x1628 PushS
	add(var_181_string); // 0x1629 ObjFunc
	var_182_string = "house7_02"; // 0x162b PushS
	add(var_182_string); // 0x162c ObjFunc
	var_183_string = "house3_01_i2"; // 0x162e PushS
	add(var_183_string); // 0x162f ObjFunc
	var_184_string = "house3_01"; // 0x1631 PushS
	add(var_184_string); // 0x1632 ObjFunc
	var_185_string = "house_2_03"; // 0x1634 PushS
	add(var_185_string); // 0x1635 ObjFunc
	var_186_string = "house_2_02"; // 0x1637 PushS
	add(var_186_string); // 0x1638 ObjFunc
	var_187_string = "house4_01_i2"; // 0x163a PushS
	add(var_187_string); // 0x163b ObjFunc
	var_188_string = "house4_01"; // 0x163d PushS
	add(var_188_string); // 0x163e ObjFunc
	var_189_string = "House6_05"; // 0x1640 PushS
	add(var_189_string); // 0x1641 ObjFunc
	var_190_string = "House6_04"; // 0x1643 PushS
	add(var_190_string); // 0x1644 ObjFunc
	var_191_string = "House6_03"; // 0x1646 PushS
	add(var_191_string); // 0x1647 ObjFunc
	return 0; // 0x1649 Return
}


func_6686()
{
	var_266_string = "r6_house2_03"; // 0x1a1f PushS
	add(var_266_string); // 0x1a20 ObjFunc
	var_267_string = "r6_house4_01_i2"; // 0x1a22 PushS
	add(var_267_string); // 0x1a23 ObjFunc
	var_268_string = "r6_house4_02_i2"; // 0x1a25 PushS
	add(var_268_string); // 0x1a26 ObjFunc
	var_269_string = "r6_house4_02"; // 0x1a28 PushS
	add(var_269_string); // 0x1a29 ObjFunc
	var_270_string = "r6_house3_02_i2"; // 0x1a2b PushS
	add(var_270_string); // 0x1a2c ObjFunc
	var_271_string = "r6_house3_02"; // 0x1a2e PushS
	add(var_271_string); // 0x1a2f ObjFunc
	var_272_string = "r6_house3_01_i2"; // 0x1a31 PushS
	add(var_272_string); // 0x1a32 ObjFunc
	var_273_string = "r6_house3_01"; // 0x1a34 PushS
	add(var_273_string); // 0x1a35 ObjFunc
	var_274_string = "r6_house2_01"; // 0x1a37 PushS
	add(var_274_string); // 0x1a38 ObjFunc
	var_275_string = "r6_house7_01"; // 0x1a3a PushS
	add(var_275_string); // 0x1a3b ObjFunc
	var_276_string = "r6_house7_02"; // 0x1a3d PushS
	add(var_276_string); // 0x1a3e ObjFunc
	var_277_string = "r6_House6_01"; // 0x1a40 PushS
	add(var_277_string); // 0x1a41 ObjFunc
	var_278_string = "r6_house2_02"; // 0x1a43 PushS
	add(var_278_string); // 0x1a44 ObjFunc
	return 0; // 0x1a46 Return
}


func_12830(var_5109_bool)
{
	var_5111_int = 7; // 0x321f PushI
	add(var_5111_int); // 0x3220 ObjFunc
	var_5112_int = 23; // 0x3222 PushI
	add(var_5112_int); // 0x3223 ObjFunc
	var_5113_int = 21; // 0x3225 PushI
	add(var_5113_int); // 0x3226 ObjFunc
	var_5114_int = 9; // 0x3228 PushI
	add(var_5114_int); // 0x3229 ObjFunc
	var_5115_int = 3; // 0x322b PushI
	add(var_5115_int); // 0x322c ObjFunc
	var_5116_int = 1; // 0x322e PushI
	add(var_5116_int); // 0x322f ObjFunc
	var_5117_int = 11; // 0x3231 PushI
	add(var_5117_int); // 0x3232 ObjFunc
	var_5118_int = 13; // 0x3234 PushI
	add(var_5118_int); // 0x3235 ObjFunc
	var_5119_bool = 0; // 0x3237 PushB
	var_5120_bool = var_5109_bool == var_5119_bool; // 0x3238 Eq
	if(var_5120_bool == 0) goto Label_12861; // 0x3239 JumpB
	var_5121_int = 25; // 0x323a PushI
	add(var_5121_int); // 0x323b ObjFunc
	
Label_12861:
	return 0; // 0x323d Return
}


func_10795()
{
	var_5666_bool = 0; var_5667_int = 0; // 0x2a2c PushV
	var_5667_int = 480; // 0x2a2d MovI
	func_11392(var_5666_bool, var_5667_int); // 0x2a2e NEW_2
	var_5668_bool = 0; var_5669_int = 0; // 0x2a30 PushV
	var_5669_int = 723; // 0x2a31 MovI
	func_11392(var_5668_bool, var_5669_int); // 0x2a32 NEW_2
	var_5670_bool = 0; var_5671_int = 0; // 0x2a34 PushV
	var_5671_int = 751; // 0x2a35 MovI
	func_11392(var_5670_bool, var_5671_int); // 0x2a36 NEW_2
	var_5672_bool = 0; var_5673_int = 0; // 0x2a38 PushV
	var_5673_int = 757; // 0x2a39 MovI
	func_11392(var_5672_bool, var_5673_int); // 0x2a3a NEW_2
	return 0; // 0x2a3c Return
}


func_8748()
{
	var_4477_int = 0; var_4478_object = Obj(); var_4479_int = 0; var_4480_object = Obj(); var_4481_bool = 0; var_4482_cvector = CVector(0,0,0); var_4483_cvector = CVector(0,0,0); var_4484_string = ""; var_4485_int = 0; var_4486_object = Obj(); var_4487_int = 0; var_4488_object = Obj(); var_4489_bool = 0; var_4490_cvector = CVector(0,0,0); var_4491_cvector = CVector(0,0,0); var_4492_string = ""; // 0x222c PushV
	var_4493_int = 0; // 0x222d PushV
	func_11434(var_4493_int); // 0x222e NEW_2
	var_4494_int = 0; // 0x2230 PushI
	var_4495_bool = var_4493_int == var_4494_int; // 0x2231 Eq
	if(var_4495_bool == 0) goto Label_8756; // 0x2232 JumpB
	return 16; // 0x2233 Return
	
Label_8756:
	var_4496_object = GlobalVars[6]; // 0x2234 PushGE
	size(var_4485_int); // 0x2235 ObjFunc
	GetMainOutdoorScene(var_4486_object); // 0x2237 Func
	var_4487_int = 0; // 0x2239 MovI
	
Label_8762:
	var_4497_bool = var_4487_int < var_4485_int; // 0x223a LT
	if(var_4497_bool == 0) goto Label_8821; // 0x223b JumpB
	var_4498_object = GlobalVars[6]; // 0x223c PushGE
	get(var_4488_object, var_4487_int); // 0x223d ObjFunc
	var_4499_object = var_4488_object; // 0x223f Push
	if(var_4499_object == 0) goto Label_8770; // 0x2240 JumpB
	goto Label_8818; // 0x2241 Jump
	
Label_8818:
	var_4500_int = 1; // 0x2272 PushI
	var_4487_int = var_4487_int + var_4500_int; // 0x2273 Add2
	goto Label_8762; // 0x2274 Jump
	
Label_8770:
	var_4501_string = "pt_plant"; // 0x2242 PushS
	var_4502_int = 1; // 0x2243 PushI
	var_4503_int = var_4487_int + var_4502_int; // 0x2244 Add
	var_4504_int = var_4501_string + var_4503_int; // 0x2245 Add
	GetLocator(var_4504_int, var_4489_bool, var_4490_cvector, var_4491_cvector); // 0x2246 ObjFunc
	var_4505_bool = var_4489_bool == 0; // 0x2248 Not
	if(var_4505_bool == 0) goto Label_8782; // 0x2249 JumpB
	var_4506_string = "Plant point not found"; // 0x224a PushS
	Trace(var_4506_string); // 0x224b Func
	goto Label_8818; // 0x224d Jump
	
Label_8782:
	var_4507_int = 6; // 0x224e PushI
	var_4508_int = 3; // 0x224f PushI
	var_4509_int = 3; // 0x2250 PushI
	var_4510_int = 3; // 0x2251 PushI
	var_4511_int = 1; // 0x2252 PushI
	var_4512_int = 1; // 0x2253 PushI
	var_4513_string = ""; // 0x2254 PushS
	var_4514_string = "grass_black_tvir"; // 0x2255 PushS
	var_4515_string = "grass_blood_tvir"; // 0x2256 PushS
	var_4516_string = "grass_brown_tvir"; // 0x2257 PushS
	var_4517_string = "grass_savyur"; // 0x2258 PushS
	var_4518_string = "grass_white_plet"; // 0x2259 PushS
	RandOneOf(var_4492_string, var_4507_int, var_4508_int, var_4509_int, var_4510_int, var_4511_int, var_4512_int, var_4513_string, var_4514_string, var_4515_string, var_4516_string, var_4517_string, var_4518_string); // 0x225a Func
	var_4519_string = var_4492_string; // 0x225c Push
	if(var_4519_string == 0) goto Label_8817; // 0x225d JumpB
	var_4520_string = "scripted"; // 0x225e PushS
	var_4521_string = "item_"; // 0x225f PushS
	var_4522_int = var_4521_string + var_4492_string; // 0x2260 Add
	var_4523_string = "_stat.xml"; // 0x2261 PushS
	var_4524_int = var_4522_int + var_4523_string; // 0x2262 Add
	AddStationaryActorByType(var_4488_object, var_4490_cvector, var_4491_cvector, var_4520_string, var_4524_int); // 0x2263 ObjFunc
	var_4525_object = GlobalVars[6]; // 0x2265 PushGE
	set(var_4487_int, var_4488_object); // 0x2266 ObjFunc
	var_4526_string = "New plant: ""; // 0x2268 PushS
	var_4527_int = var_4526_string + var_4492_string; // 0x2269 Add
	var_4528_string = "" at location #"; // 0x226a PushS
	var_4529_int = var_4527_int + var_4528_string; // 0x226b Add
	var_4530_int = 1; // 0x226c PushI
	var_4531_int = var_4487_int + var_4530_int; // 0x226d Add
	var_4532_int = var_4529_int + var_4531_int; // 0x226e Add
	Trace(var_4532_int); // 0x226f Func
	
Label_8817:
	var_4488_object = 0; // 0x2271 SetNull
	
Label_8821:
	return 16; // 0x2275 Return
}


func_10813()
{
	var_4740_string = ""; var_4741_bool = 0; // 0x2a3e PushV
	var_4740_string = "house1_kabak@door1"; // 0x2a3f MovS
	var_4741_bool = 1; // 0x2a40 MovB
	func_177(var_4740_string, var_4741_bool); // 0x2a41 NEW_2
	return 0; // 0x2a43 Return
}


func_12862(var_5123_int)
{
	var_5124_int = 0; var_5125_int = 0; // 0x323e PushV
	var_5126_string = "vol_"; // 0x323f PushS
	var_5127_int = var_5126_string + var_5123_int; // 0x3240 Add
	GetVariable(var_5127_int, var_5125_int); // 0x3241 Func
	var_5128_string = "vol_"; // 0x3243 PushS
	var_5129_int = var_5128_string + var_5123_int; // 0x3244 Add
	var_5130_int = 8; // 0x3245 PushI
	var_5131_int = var_5125_int | var_5130_int; // 0x3246 Or
	SetVariable(var_5129_int, var_5131_int); // 0x3247 Func
	return 2; // 0x3249 Return
}


func_576(var_2030_string, var_2032_string, var_2033_string)
{
	var_2039_object = Obj(); var_2040_int = 0; var_2041_bool = 0; var_2042_cvector = CVector(0,0,0); var_2043_cvector = CVector(0,0,0); var_2044_object = Obj(); var_2045_object = Obj(); var_2046_int = 0; var_2047_bool = 0; var_2048_cvector = CVector(0,0,0); var_2049_cvector = CVector(0,0,0); var_2050_object = Obj(); // 0x240 PushV
	GetMainOutdoorScene(var_2045_object); // 0x241 Func
	var_2046_int = 0; // 0x243 MovI
	
Label_580:
	var_2051_int = 1; // 0x244 PushI
	var_2052_int = var_2046_int + var_2051_int; // 0x245 Add
	var_2053_int = var_2030_string + var_2052_int; // 0x246 Add
	GetLocator(var_2053_int, var_2047_bool, var_2048_cvector, var_2049_cvector); // 0x247 ObjFunc
	var_2054_bool = var_2047_bool == 0; // 0x249 Not
	if(var_2054_bool == 0) goto Label_588; // 0x24a JumpB
	goto Label_596; // 0x24b Jump
	
Label_596:
	return 12; // 0x254 Return
	
Label_588:
	AddStationaryActor(var_2050_object, var_2048_cvector, var_2049_cvector, var_2032_string, var_2033_string); // 0x24c ObjFunc
	add(var_2050_object); // 0x24e ObjFunc
	var_2050_object = 0; // 0x250 SetNull
	var_2055_int = 1; // 0x251 PushI
	var_2046_int = var_2046_int + var_2055_int; // 0x252 Add2
	goto Label_580; // 0x253 Jump
}


func_7745(var_4432_object, var_4434_string, var_4435_string, var_4436_string)
{
	var_4438_bool = 0; var_4439_cvector = CVector(0,0,0); var_4440_cvector = CVector(0,0,0); var_4441_object = Obj(); var_4442_bool = 0; var_4443_cvector = CVector(0,0,0); var_4444_cvector = CVector(0,0,0); var_4445_object = Obj(); // 0x1e41 PushV
	var_4446_string = "pt_guard_"; // 0x1e42 PushS
	var_4447_int = var_4446_string + var_4434_string; // 0x1e43 Add
	GetLocator(var_4447_int, var_4442_bool, var_4443_cvector, var_4444_cvector); // 0x1e44 ObjFunc
	var_4448_bool = var_4442_bool == 0; // 0x1e46 Not
	if(var_4448_bool == 0) goto Label_7757; // 0x1e47 JumpB
	var_4449_string = "Locator doesn't exist for guard "; // 0x1e48 PushS
	var_4450_int = var_4449_string + var_4434_string; // 0x1e49 Add
	Trace(var_4450_int); // 0x1e4a Func
	goto Label_7759; // 0x1e4c Jump
	
Label_7759:
	var_4432_object = var_4445_object; // 0x1e4f Mov
	return 8; // 0x1e50 Return
	
Label_7757:
	AddStationaryActor(var_4445_object, var_4443_cvector, var_4444_cvector, var_4435_string, var_4436_string); // 0x1e4d ObjFunc
}


func_10820()
{
	var_4752_string = ""; var_4753_bool = 0; // 0x2a45 PushV
	var_4752_string = "mnogogrannik_han@door1"; // 0x2a46 MovS
	var_4753_bool = 1; // 0x2a47 MovB
	func_177(var_4752_string, var_4753_bool); // 0x2a48 NEW_2
	return 0; // 0x2a4a Return
}


func_6727(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object)
{
	var_1709_int = 0; // 0x1a48 PushI
	var_1710_bool = var_1704_int == var_1709_int; // 0x1a49 Eq
	if(var_1710_bool == 0) goto Label_6767; // 0x1a4a JumpB
	var_1711_int = 0; var_1712_bool = 0; // 0x1a4b PushV
	var_1711_int = 12; // 0x1a4c MovI
	var_1712_bool = 0; // 0x1a4d MovB
	func_796(var_1711_int, var_1712_bool); // 0x1a4e NEW_2
	var_1713_int = 0; var_1714_bool = 0; var_1715_int = 0; // 0x1a50 PushV
	var_1713_int = 12; // 0x1a51 MovI
	var_1714_bool = 0; // 0x1a52 MovB
	var_1715_int = 1; // 0x1a53 MovI
	func_813(var_1713_int, var_1714_bool, var_1715_int); // 0x1a54 NEW_2
	var_1716_int = 0; var_1717_int = 0; var_1718_object = Obj(); var_1719_object = Obj(); var_1720_object = Obj(); // 0x1a56 PushV
	var_1716_int = 12; // 0x1a57 MovI
	var_1717_int = var_1703_int; // 0x1a58 Mov
	var_1718_object = var_1705_object; // 0x1a59 Mov
	var_1719_object = var_1706_object; // 0x1a5a Mov
	var_1720_object = var_1707_object; // 0x1a5b Mov
	func_622(var_1717_int, var_1718_object, var_1719_object, var_1720_object); // 0x1a5c NEW_2
	var_1721_object = Obj(); var_1722_int = 0; // 0x1a5e PushV
	var_1721_object = var_1708_object; // 0x1a5f Mov
	var_1722_int = 0; // 0x1a60 MovI
	func_305(var_1722_int); // 0x1a61 NEW_2
	var_1723_int = 0; var_1724_bool = 0; var_1725_int = 0; // 0x1a63 PushV
	var_1723_int = 12; // 0x1a64 MovI
	var_1724_bool = 0; // 0x1a65 MovB
	var_1725_int = 4; // 0x1a66 MovI
	func_870(var_1723_int, var_1724_bool, var_1725_int); // 0x1a67 NEW_2
	var_1726_int = 0; var_1727_bool = 0; var_1728_int = 0; // 0x1a69 PushV
	var_1726_int = 12; // 0x1a6a MovI
	var_1727_bool = 0; // 0x1a6b MovB
	var_1728_int = 4; // 0x1a6c MovI
	func_932(var_1726_int, var_1727_bool, var_1728_int); // 0x1a6d NEW_2
	
Label_6767:
	var_1729_int = 0; var_1730_int = 0; // 0x1a6f PushV
	var_1729_int = 12; // 0x1a70 MovI
	var_1730_int = var_1704_int; // 0x1a71 Mov
	func_1020(var_1729_int, var_1730_int); // 0x1a72 NEW_2
	var_1731_int = 0; var_1732_int = 0; var_1733_int = 0; // 0x1a74 PushV
	var_1731_int = 12; // 0x1a75 MovI
	var_1732_int = var_1703_int; // 0x1a76 Mov
	var_1733_int = var_1704_int; // 0x1a77 Mov
	func_1624(var_1731_int, var_1732_int, var_1733_int); // 0x1a78 NEW_2
	return 0; // 0x1a7a Return
}


func_5706(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object)
{
	var_1390_int = 0; // 0x164b PushI
	var_1391_bool = var_1385_int == var_1390_int; // 0x164c Eq
	if(var_1391_bool == 0) goto Label_5746; // 0x164d JumpB
	var_1392_int = 0; var_1393_bool = 0; // 0x164e PushV
	var_1392_int = 7; // 0x164f MovI
	var_1393_bool = 0; // 0x1650 MovB
	func_796(var_1392_int, var_1393_bool); // 0x1651 NEW_2
	var_1394_int = 0; var_1395_bool = 0; var_1396_int = 0; // 0x1653 PushV
	var_1394_int = 7; // 0x1654 MovI
	var_1395_bool = 0; // 0x1655 MovB
	var_1396_int = 1; // 0x1656 MovI
	func_813(var_1394_int, var_1395_bool, var_1396_int); // 0x1657 NEW_2
	var_1397_int = 0; var_1398_int = 0; var_1399_object = Obj(); var_1400_object = Obj(); var_1401_object = Obj(); // 0x1659 PushV
	var_1397_int = 7; // 0x165a MovI
	var_1398_int = var_1384_int; // 0x165b Mov
	var_1399_object = var_1386_object; // 0x165c Mov
	var_1400_object = var_1387_object; // 0x165d Mov
	var_1401_object = var_1388_object; // 0x165e Mov
	func_622(var_1398_int, var_1399_object, var_1400_object, var_1401_object); // 0x165f NEW_2
	var_1402_object = Obj(); var_1403_int = 0; // 0x1661 PushV
	var_1402_object = var_1389_object; // 0x1662 Mov
	var_1403_int = 0; // 0x1663 MovI
	func_305(var_1403_int); // 0x1664 NEW_2
	var_1404_int = 0; var_1405_bool = 0; var_1406_int = 0; // 0x1666 PushV
	var_1404_int = 7; // 0x1667 MovI
	var_1405_bool = 0; // 0x1668 MovB
	var_1406_int = 6; // 0x1669 MovI
	func_870(var_1404_int, var_1405_bool, var_1406_int); // 0x166a NEW_2
	var_1407_int = 0; var_1408_bool = 0; var_1409_int = 0; // 0x166c PushV
	var_1407_int = 7; // 0x166d MovI
	var_1408_bool = 0; // 0x166e MovB
	var_1409_int = 6; // 0x166f MovI
	func_932(var_1407_int, var_1408_bool, var_1409_int); // 0x1670 NEW_2
	
Label_5746:
	var_1410_int = 0; var_1411_int = 0; // 0x1672 PushV
	var_1410_int = 7; // 0x1673 MovI
	var_1411_int = var_1385_int; // 0x1674 Mov
	func_1020(var_1410_int, var_1411_int); // 0x1675 NEW_2
	var_1412_int = 0; var_1413_int = 0; var_1414_int = 0; // 0x1677 PushV
	var_1412_int = 7; // 0x1678 MovI
	var_1413_int = var_1384_int; // 0x1679 Mov
	var_1414_int = var_1385_int; // 0x167a Mov
	func_1624(var_1412_int, var_1413_int, var_1414_int); // 0x167b NEW_2
	return 0; // 0x167d Return
}


func_3659(var_3816_int, var_3817_int, var_3818_int)
{
	var_3819_int = 0; var_3820_int = 0; var_3821_int = 0; var_3822_int = 0; var_3823_int = 0; var_3824_int = 0; var_3825_int = 0; var_3826_int = 0; // 0xe4b PushV
	var_3827_bool = 0; // 0xe4c PushV
	var_3827_bool = 0; // 0xe4d MovB
	var_3828_int = 8; // 0xe4e PushI
	var_3829_bool = var_3818_int > var_3828_int; // 0xe4f GT
	if(var_3829_bool == 0) goto Label_3669; // 0xe50 JumpB
	var_3830_int = 21; // 0xe51 PushI
	var_3831_bool = var_3818_int < var_3830_int; // 0xe52 LT
	if(var_3831_bool == 0) goto Label_3669; // 0xe53 JumpB
	var_3827_bool = 1; // 0xe54 MovB
	
Label_3669:
	if(var_3827_bool == 0) goto Label_3746; // 0xe55 JumpB
	var_3832_int = 0; var_3833_string = ""; var_3834_string = ""; var_3835_int = 0; // 0xe56 PushV
	var_3832_int = var_3816_int; // 0xe57 Mov
	var_3833_string = "pers_rat"; // 0xe58 MovS
	var_3834_string = "rat.xml"; // 0xe59 MovS
	var_3835_int = 1; // 0xe5a MovI
	func_503(var_3832_int, var_3833_string, var_3834_string, var_3835_int); // 0xe5b NEW_2
	var_3836_int = 0; var_3837_string = ""; var_3838_string = ""; var_3839_int = 0; // 0xe5d PushV
	var_3836_int = var_3816_int; // 0xe5e Mov
	var_3837_string = "pers_alkash"; // 0xe5f MovS
	var_3838_string = "alkash.xml"; // 0xe60 MovS
	var_3839_int = 2; // 0xe61 MovI
	func_503(var_3836_int, var_3837_string, var_3838_string, var_3839_int); // 0xe62 NEW_2
	var_3840_int = 0; var_3841_string = ""; var_3842_string = ""; var_3843_int = 0; // 0xe64 PushV
	var_3840_int = var_3816_int; // 0xe65 Mov
	var_3841_string = "pers_dohodyaga"; // 0xe66 MovS
	var_3842_string = "dohodyaga.xml"; // 0xe67 MovS
	var_3843_int = 1; // 0xe68 MovI
	func_503(var_3840_int, var_3841_string, var_3842_string, var_3843_int); // 0xe69 NEW_2
	var_3844_int = 2; // 0xe6b PushI
	var_3845_float = 0; var_3846_int = 0; // 0xe6c PushV
	var_3846_int = var_3817_int; // 0xe6d Mov
	func_1165(var_3845_float, var_3846_int); // 0xe6e NEW_2
	var_3823_int = var_3844_int * var_3845_float; // 0xe70 Mult2
	var_3847_int = var_3823_int; // 0xe71 Push
	if(var_3847_int == 0) goto Label_3706; // 0xe72 JumpB
	var_3848_int = 0; var_3849_string = ""; var_3850_string = ""; var_3851_int = 0; // 0xe73 PushV
	var_3848_int = var_3816_int; // 0xe74 Mov
	var_3849_string = "pers_grabitel"; // 0xe75 MovS
	var_3850_string = "grabitel.xml"; // 0xe76 MovS
	var_3851_int = var_3823_int; // 0xe77 Mov
	func_503(var_3848_int, var_3849_string, var_3850_string, var_3851_int); // 0xe78 NEW_2
	
Label_3706:
	var_3852_int = 1; // 0xe7a PushI
	var_3853_int = var_3817_int + var_3852_int; // 0xe7b Add
	var_3854_int = 2; // 0xe7c PushI
	var_3855_bool = var_3853_int >= var_3854_int; // 0xe7d GE
	if(var_3855_bool == 0) goto Label_3730; // 0xe7e JumpB
	var_3856_int = 0; var_3857_string = ""; var_3858_string = ""; var_3859_int = 0; // 0xe7f PushV
	var_3856_int = var_3816_int; // 0xe80 Mov
	var_3857_string = "pers_patrool"; // 0xe81 MovS
	var_3858_string = "patrol.xml"; // 0xe82 MovS
	var_3859_int = 1; // 0xe83 MovI
	func_503(var_3856_int, var_3857_string, var_3858_string, var_3859_int); // 0xe84 NEW_2
	var_3860_bool = 0; var_3861_int = 0; // 0xe86 PushV
	var_3861_int = var_3817_int; // 0xe87 Mov
	func_1372(var_3860_bool, var_3861_int); // 0xe88 NEW_2
	if(var_3860_bool == 0) goto Label_3730; // 0xe8a JumpB
	var_3862_int = 0; var_3863_string = ""; var_3864_string = ""; var_3865_int = 0; // 0xe8b PushV
	var_3862_int = var_3816_int; // 0xe8c Mov
	var_3863_string = "pers_soldat_hand"; // 0xe8d MovS
	var_3864_string = "soldier_patrol.xml"; // 0xe8e MovS
	var_3865_int = 1; // 0xe8f MovI
	func_503(var_3862_int, var_3863_string, var_3864_string, var_3865_int); // 0xe90 NEW_2
	
Label_3730:
	var_3866_int = 1; // 0xe92 PushI
	var_3867_float = 0; var_3868_int = 0; // 0xe93 PushV
	var_3868_int = var_3817_int; // 0xe94 Mov
	func_1255(var_3867_float, var_3868_int); // 0xe95 NEW_2
	var_3824_int = var_3866_int * var_3867_float; // 0xe97 Mult2
	var_3869_int = var_3824_int; // 0xe98 Push
	if(var_3869_int == 0) goto Label_3745; // 0xe99 JumpB
	var_3870_int = 0; var_3871_string = ""; var_3872_string = ""; var_3873_int = 0; // 0xe9a PushV
	var_3870_int = var_3816_int; // 0xe9b Mov
	var_3871_string = "pers_bomber"; // 0xe9c MovS
	var_3872_string = "bomber.xml"; // 0xe9d MovS
	var_3873_int = var_3824_int; // 0xe9e Mov
	func_503(var_3870_int, var_3871_string, var_3872_string, var_3873_int); // 0xe9f NEW_2
	
Label_3745:
	goto Label_3821; // 0xea1 Jump
	
Label_3821:
	var_3874_bool = 0; var_3875_int = 0; var_3876_int = 0; // 0xeed PushV
	var_3875_int = var_3817_int; // 0xeee Mov
	var_3876_int = var_3818_int; // 0xeef Mov
	func_1345(var_3874_bool, var_3875_int, var_3876_int); // 0xef0 NEW_2
	if(var_3874_bool == 0) goto Label_3834; // 0xef2 JumpB
	var_3877_int = 0; var_3878_string = ""; var_3879_string = ""; var_3880_int = 0; // 0xef3 PushV
	var_3877_int = var_3816_int; // 0xef4 Mov
	var_3878_string = "pers_soldat"; // 0xef5 MovS
	var_3879_string = "soldier_marauder.xml"; // 0xef6 MovS
	var_3880_int = 2; // 0xef7 MovI
	func_503(var_3877_int, var_3878_string, var_3879_string, var_3880_int); // 0xef8 NEW_2
	
Label_3834:
	var_3881_bool = 0; var_3882_int = 0; // 0xefa PushV
	var_3882_int = var_3817_int; // 0xefb Mov
	func_1372(var_3881_bool, var_3882_int); // 0xefc NEW_2
	if(var_3881_bool == 0) goto Label_3846; // 0xefe JumpB
	var_3883_int = 0; var_3884_string = ""; var_3885_string = ""; var_3886_int = 0; // 0xeff PushV
	var_3883_int = var_3816_int; // 0xf00 Mov
	var_3884_string = "pers_sanitar"; // 0xf01 MovS
	var_3885_string = "sanitar.xml"; // 0xf02 MovS
	var_3886_int = 1; // 0xf03 MovI
	func_503(var_3883_int, var_3884_string, var_3885_string, var_3886_int); // 0xf04 NEW_2
	
Label_3846:
	return 8; // 0xf06 Return
	
Label_3746:
	var_3887_int = 0; var_3888_string = ""; var_3889_string = ""; var_3890_int = 0; // 0xea2 PushV
	var_3887_int = var_3816_int; // 0xea3 Mov
	var_3888_string = "pers_rat"; // 0xea4 MovS
	var_3889_string = "rat.xml"; // 0xea5 MovS
	var_3890_int = 3; // 0xea6 MovI
	func_503(var_3887_int, var_3888_string, var_3889_string, var_3890_int); // 0xea7 NEW_2
	var_3891_int = 0; var_3892_string = ""; var_3893_string = ""; var_3894_int = 0; // 0xea9 PushV
	var_3891_int = var_3816_int; // 0xeaa Mov
	var_3892_string = "pers_alkash"; // 0xeab MovS
	var_3893_string = "alkash.xml"; // 0xeac MovS
	var_3894_int = 1; // 0xead MovI
	func_503(var_3891_int, var_3892_string, var_3893_string, var_3894_int); // 0xeae NEW_2
	var_3895_int = 0; var_3896_string = ""; var_3897_string = ""; var_3898_int = 0; // 0xeb0 PushV
	var_3895_int = var_3816_int; // 0xeb1 Mov
	var_3896_string = "pers_dohodyaga"; // 0xeb2 MovS
	var_3897_string = "dohodyaga.xml"; // 0xeb3 MovS
	var_3898_int = 1; // 0xeb4 MovI
	func_503(var_3895_int, var_3896_string, var_3897_string, var_3898_int); // 0xeb5 NEW_2
	var_3899_int = 3; // 0xeb7 PushI
	var_3900_float = 0; var_3901_int = 0; // 0xeb8 PushV
	var_3901_int = var_3817_int; // 0xeb9 Mov
	func_1165(var_3900_float, var_3901_int); // 0xeba NEW_2
	var_3825_int = var_3899_int * var_3900_float; // 0xebc Mult2
	var_3902_int = var_3825_int; // 0xebd Push
	if(var_3902_int == 0) goto Label_3782; // 0xebe JumpB
	var_3903_int = 0; var_3904_string = ""; var_3905_string = ""; var_3906_int = 0; // 0xebf PushV
	var_3903_int = var_3816_int; // 0xec0 Mov
	var_3904_string = "pers_grabitel"; // 0xec1 MovS
	var_3905_string = "grabitel.xml"; // 0xec2 MovS
	var_3906_int = var_3825_int; // 0xec3 Mov
	func_503(var_3903_int, var_3904_string, var_3905_string, var_3906_int); // 0xec4 NEW_2
	
Label_3782:
	var_3907_int = 1; // 0xec6 PushI
	var_3908_int = var_3817_int + var_3907_int; // 0xec7 Add
	var_3909_int = 2; // 0xec8 PushI
	var_3910_bool = var_3908_int >= var_3909_int; // 0xec9 GE
	if(var_3910_bool == 0) goto Label_3806; // 0xeca JumpB
	var_3911_int = 0; var_3912_string = ""; var_3913_string = ""; var_3914_int = 0; // 0xecb PushV
	var_3911_int = var_3816_int; // 0xecc Mov
	var_3912_string = "pers_patrool"; // 0xecd MovS
	var_3913_string = "patrol.xml"; // 0xece MovS
	var_3914_int = 1; // 0xecf MovI
	func_503(var_3911_int, var_3912_string, var_3913_string, var_3914_int); // 0xed0 NEW_2
	var_3915_bool = 0; var_3916_int = 0; // 0xed2 PushV
	var_3916_int = var_3817_int; // 0xed3 Mov
	func_1372(var_3915_bool, var_3916_int); // 0xed4 NEW_2
	if(var_3915_bool == 0) goto Label_3806; // 0xed6 JumpB
	var_3917_int = 0; var_3918_string = ""; var_3919_string = ""; var_3920_int = 0; // 0xed7 PushV
	var_3917_int = var_3816_int; // 0xed8 Mov
	var_3918_string = "pers_soldat_hand"; // 0xed9 MovS
	var_3919_string = "soldier_patrol.xml"; // 0xeda MovS
	var_3920_int = 1; // 0xedb MovI
	func_503(var_3917_int, var_3918_string, var_3919_string, var_3920_int); // 0xedc NEW_2
	
Label_3806:
	var_3921_int = 1; // 0xede PushI
	var_3922_float = 0; var_3923_int = 0; // 0xedf PushV
	var_3923_int = var_3817_int; // 0xee0 Mov
	func_1255(var_3922_float, var_3923_int); // 0xee1 NEW_2
	var_3826_int = var_3921_int * var_3922_float; // 0xee3 Mult2
	var_3924_int = var_3826_int; // 0xee4 Push
	if(var_3924_int == 0) goto Label_3821; // 0xee5 JumpB
	var_3925_int = 0; var_3926_string = ""; var_3927_string = ""; var_3928_int = 0; // 0xee6 PushV
	var_3925_int = var_3816_int; // 0xee7 Mov
	var_3926_string = "pers_bomber"; // 0xee8 MovS
	var_3927_string = "bomber.xml"; // 0xee9 MovS
	var_3928_int = var_3826_int; // 0xeea Mov
	func_503(var_3925_int, var_3926_string, var_3927_string, var_3928_int); // 0xeeb NEW_2
}


func_10827()
{
	var_5169_object = Obj(); var_5170_object = Obj(); // 0x2a4b PushV
	var_5171_object = Obj(); // 0x2a4c PushV
	func_11417(var_5171_object); // 0x2a4d NEW_2
	var_5170_object = var_5171_object; // 0x2a4e Mov
	var_5178_string = "k2q03LaraLetter"; // 0x2a50 PushS
	var_5179_string = "pt_map_lara"; // 0x2a51 PushS
	var_5180_int = 0; // 0x2a52 PushI
	var_5181_int = 539375; // 0x2a53 PushI
	var_5182_float = 0; // 0x2a54 PushV
	func_284(var_5182_float); // 0x2a55 NEW_2
	AddMark(var_5178_string, var_5179_string, var_5180_int, var_5181_int, var_5182_float); // 0x2a57 ObjFunc
	return 2; // 0x2a59 Return
}


func_12874()
{
	var_5100_object = Obj(); var_5101_int = 0; var_5102_int = 0; var_5103_int = 0; var_5104_object = Obj(); var_5105_int = 0; var_5106_int = 0; var_5107_int = 0; // 0x324a PushV
	CreateIntVector(var_5104_object); // 0x324b Func
	var_5108_object = Obj(); var_5109_bool = 0; var_5110_int = 0; // 0x324d PushV
	var_5108_object = var_5104_object; // 0x324e Mov
	var_5109_bool = 0; // 0x324f MovB
	var_5110_int = -1; // 0x3250 MovI
	func_12830(var_5110_int); // 0x3251 NEW_2
	size(var_5105_int); // 0x3253 ObjFunc
	var_5106_int = 0; // 0x3255 MovI
	
Label_12886:
	var_5122_bool = var_5106_int < var_5105_int; // 0x3256 LT
	if(var_5122_bool == 0) goto Label_12897; // 0x3257 JumpB
	get(var_5107_int, var_5106_int); // 0x3258 ObjFunc
	var_5123_int = 0; // 0x325a PushV
	var_5123_int = var_5107_int; // 0x325b Mov
	func_12862(var_5123_int); // 0x325c NEW_2
	var_5132_int = 1; // 0x325e PushI
	var_5106_int = var_5106_int + var_5132_int; // 0x325f Add2
	goto Label_12886; // 0x3260 Jump
	
Label_12897:
	return 8; // 0x3261 Return
}


func_4688(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object)
{
	var_3406_int = 0; // 0x1251 PushI
	var_3407_bool = var_3401_int == var_3406_int; // 0x1252 Eq
	if(var_3407_bool == 0) goto Label_4728; // 0x1253 JumpB
	var_3408_int = 0; var_3409_bool = 0; // 0x1254 PushV
	var_3408_int = 1; // 0x1255 MovI
	var_3409_bool = 0; // 0x1256 MovB
	func_796(var_3408_int, var_3409_bool); // 0x1257 NEW_2
	var_3410_int = 0; var_3411_bool = 0; var_3412_int = 0; // 0x1259 PushV
	var_3410_int = 1; // 0x125a MovI
	var_3411_bool = 0; // 0x125b MovB
	var_3412_int = 1; // 0x125c MovI
	func_813(var_3410_int, var_3411_bool, var_3412_int); // 0x125d NEW_2
	var_3413_int = 0; var_3414_int = 0; var_3415_object = Obj(); var_3416_object = Obj(); var_3417_object = Obj(); // 0x125f PushV
	var_3413_int = 1; // 0x1260 MovI
	var_3414_int = var_3400_int; // 0x1261 Mov
	var_3415_object = var_3402_object; // 0x1262 Mov
	var_3416_object = var_3403_object; // 0x1263 Mov
	var_3417_object = var_3404_object; // 0x1264 Mov
	func_720(var_3413_int, var_3414_int, var_3415_object, var_3416_object, var_3417_object); // 0x1265 NEW_2
	var_3418_object = Obj(); var_3419_int = 0; // 0x1267 PushV
	var_3418_object = var_3405_object; // 0x1268 Mov
	var_3419_int = 2; // 0x1269 MovI
	func_305(var_3419_int); // 0x126a NEW_2
	var_3420_int = 0; var_3421_bool = 0; var_3422_int = 0; // 0x126c PushV
	var_3420_int = 1; // 0x126d MovI
	var_3421_bool = 0; // 0x126e MovB
	var_3422_int = 8; // 0x126f MovI
	func_870(var_3420_int, var_3421_bool, var_3422_int); // 0x1270 NEW_2
	var_3423_int = 0; var_3424_bool = 0; var_3425_int = 0; // 0x1272 PushV
	var_3423_int = 1; // 0x1273 MovI
	var_3424_bool = 1; // 0x1274 MovB
	var_3425_int = 8; // 0x1275 MovI
	func_932(var_3423_int, var_3424_bool, var_3425_int); // 0x1276 NEW_2
	
Label_4728:
	var_3426_int = 0; var_3427_bool = 0; // 0x1278 PushV
	var_3426_int = 1; // 0x1279 MovI
	var_3427_bool = 0; // 0x127a MovB
	func_779(var_3426_int, var_3427_bool); // 0x127b NEW_2
	var_3428_int = 0; var_3429_int = 0; var_3430_int = 0; // 0x127d PushV
	var_3428_int = 1; // 0x127e MovI
	var_3429_int = var_3400_int; // 0x127f Mov
	var_3430_int = var_3401_int; // 0x1280 Mov
	func_4210(var_3428_int, var_3429_int, var_3430_int); // 0x1281 NEW_2
	return 0; // 0x1283 Return
}


func_7762(var_4429_object, var_4430_object, var_4431_int)
{
	var_4432_object = Obj(); var_4433_object = Obj(); var_4434_string = ""; var_4435_string = ""; var_4436_string = ""; // 0x1e53 PushV
	var_4433_object = var_4430_object; // 0x1e54 Mov
	var_4437_string = "term"; // 0x1e55 PushS
	var_4434_string = var_4437_string + var_4431_int; // 0x1e56 Add2
	var_4435_string = "pers_patrool"; // 0x1e57 MovS
	var_4436_string = "guard_term.xml"; // 0x1e58 MovS
	func_7745(var_4433_object, var_4434_string, var_4435_string, var_4436_string); // 0x1e59 NEW_2
	var_4429_object = var_4432_object; // 0x1e5a Mov
	return 0; // 0x1e5c Return
}


func_598(var_2056_string)
{
	var_2063_object = Obj(); var_2064_int = 0; var_2065_bool = 0; var_2066_cvector = CVector(0,0,0); var_2067_cvector = CVector(0,0,0); var_2068_object = Obj(); var_2069_string = ""; var_2070_object = Obj(); var_2071_int = 0; var_2072_bool = 0; var_2073_cvector = CVector(0,0,0); var_2074_cvector = CVector(0,0,0); var_2075_object = Obj(); var_2076_string = ""; // 0x256 PushV
	GetMainOutdoorScene(var_2070_object); // 0x257 Func
	var_2071_int = 0; // 0x259 MovI
	
Label_602:
	var_2077_int = 1; // 0x25a PushI
	var_2078_int = var_2071_int + var_2077_int; // 0x25b Add
	var_2079_int = var_2056_string + var_2078_int; // 0x25c Add
	GetLocator(var_2079_int, var_2072_bool, var_2073_cvector, var_2074_cvector); // 0x25d ObjFunc
	var_2080_bool = var_2072_bool == 0; // 0x25f Not
	if(var_2080_bool == 0) goto Label_610; // 0x260 JumpB
	goto Label_620; // 0x261 Jump
	
Label_620:
	return 14; // 0x26c Return
	
Label_610:
	var_2076_string = "fog_stat.xml"; // 0x262 MovS
	var_2081_string = "fog"; // 0x263 PushS
	AddStationaryActorByType(var_2075_object, var_2073_cvector, var_2074_cvector, var_2081_string, var_2076_string); // 0x264 ObjFunc
	add(var_2075_object); // 0x266 ObjFunc
	var_2075_object = 0; // 0x268 SetNull
	var_2082_int = 1; // 0x269 PushI
	var_2071_int = var_2071_int + var_2082_int; // 0x26a Add2
	goto Label_602; // 0x26b Jump
}


func_1624(var_1412_int, var_1413_int, var_1414_int)
{
	var_1415_int = 0; var_1416_int = 0; // 0x658 PushV
	var_1417_int = 1; // 0x659 PushI
	var_1418_int = var_1413_int + var_1417_int; // 0x65a Add
	var_1419_int = 12; // 0x65b PushI
	var_1420_bool = var_1418_int == var_1419_int; // 0x65c Eq
	if(var_1420_bool == 0) goto Label_1631; // 0x65d JumpB
	return 2; // 0x65e Return
	
Label_1631:
	var_1421_bool = 0; // 0x65f PushV
	var_1421_bool = 0; // 0x660 MovB
	var_1422_bool = 0; // 0x661 PushV
	var_1422_bool = 1; // 0x662 MovB
	var_1423_int = 7; // 0x663 PushI
	var_1424_bool = var_1414_int < var_1423_int; // 0x664 LT
	if(var_1424_bool == 0) goto Label_1642; // 0x665 JumpB
	var_1425_int = 21; // 0x666 PushI
	var_1426_bool = var_1414_int > var_1425_int; // 0x667 GT
	if(var_1426_bool == 0) goto Label_1642; // 0x668 JumpB
	var_1422_bool = 0; // 0x669 MovB
	
Label_1642:
	if(var_1422_bool == 0) goto Label_1647; // 0x66a JumpB
	var_1427_int = 0; // 0x66b PushI
	var_1428_bool = var_1413_int != var_1427_int; // 0x66c Neq
	if(var_1428_bool == 0) goto Label_1647; // 0x66d JumpB
	var_1421_bool = 1; // 0x66e MovB
	
Label_1647:
	if(var_1421_bool == 0) goto Label_1663; // 0x66f JumpB
	var_1429_int = 1; // 0x670 PushI
	var_1430_float = 0; var_1431_int = 0; // 0x671 PushV
	var_1431_int = var_1413_int; // 0x672 Mov
	func_1141(var_1430_float, var_1431_int); // 0x673 NEW_2
	var_1416_int = var_1429_int * var_1430_float; // 0x675 Mult2
	var_1432_int = var_1416_int; // 0x676 Push
	if(var_1432_int == 0) goto Label_1663; // 0x677 JumpB
	var_1433_int = 0; var_1434_string = ""; var_1435_string = ""; var_1436_int = 0; // 0x678 PushV
	var_1433_int = var_1412_int; // 0x679 Mov
	var_1434_string = "pers_grabitel"; // 0x67a MovS
	var_1435_string = "grabitel.xml"; // 0x67b MovS
	var_1436_int = var_1416_int; // 0x67c Mov
	func_503(var_1433_int, var_1434_string, var_1435_string, var_1436_int); // 0x67d NEW_2
	
Label_1663:
	var_1437_bool = 0; var_1438_int = 0; var_1439_int = 0; // 0x67f PushV
	var_1438_int = var_1413_int; // 0x680 Mov
	var_1439_int = var_1414_int; // 0x681 Mov
	func_1110(var_1437_bool, var_1438_int, var_1439_int); // 0x682 NEW_2
	if(var_1437_bool == 0) goto Label_1757; // 0x684 JumpB
	var_1440_int = 0; var_1441_string = ""; var_1442_string = ""; var_1443_int = 0; // 0x685 PushV
	var_1440_int = var_1412_int; // 0x686 Mov
	var_1441_string = "pers_unosha"; // 0x687 MovS
	var_1442_string = "unosha_attacker.xml"; // 0x688 MovS
	var_1443_int = 1; // 0x689 MovI
	func_503(var_1440_int, var_1441_string, var_1442_string, var_1443_int); // 0x68a NEW_2
	var_1444_int = 0; var_1445_string = ""; var_1446_string = ""; var_1447_int = 0; // 0x68c PushV
	var_1444_int = var_1412_int; // 0x68d Mov
	var_1445_string = "pers_unosha"; // 0x68e MovS
	var_1446_string = "unosha2_attacker.xml"; // 0x68f MovS
	var_1447_int = 1; // 0x690 MovI
	func_503(var_1444_int, var_1445_string, var_1446_string, var_1447_int); // 0x691 NEW_2
	var_1448_int = 0; var_1449_string = ""; var_1450_string = ""; var_1451_int = 0; // 0x693 PushV
	var_1448_int = var_1412_int; // 0x694 Mov
	var_1449_string = "pers_worker"; // 0x695 MovS
	var_1450_string = "worker_attacker.xml"; // 0x696 MovS
	var_1451_int = 1; // 0x697 MovI
	func_503(var_1448_int, var_1449_string, var_1450_string, var_1451_int); // 0x698 NEW_2
	var_1452_int = 0; var_1453_string = ""; var_1454_string = ""; var_1455_int = 0; // 0x69a PushV
	var_1452_int = var_1412_int; // 0x69b Mov
	var_1453_string = "pers_worker"; // 0x69c MovS
	var_1454_string = "worker2_attacker.xml"; // 0x69d MovS
	var_1455_int = 1; // 0x69e MovI
	func_503(var_1452_int, var_1453_string, var_1454_string, var_1455_int); // 0x69f NEW_2
	var_1456_int = 0; var_1457_string = ""; var_1458_string = ""; var_1459_int = 0; // 0x6a1 PushV
	var_1456_int = var_1412_int; // 0x6a2 Mov
	var_1457_string = "pers_woman"; // 0x6a3 MovS
	var_1458_string = "woman.xml"; // 0x6a4 MovS
	var_1459_int = 1; // 0x6a5 MovI
	func_503(var_1456_int, var_1457_string, var_1458_string, var_1459_int); // 0x6a6 NEW_2
	var_1460_int = 0; var_1461_string = ""; var_1462_string = ""; var_1463_int = 0; // 0x6a8 PushV
	var_1460_int = var_1412_int; // 0x6a9 Mov
	var_1461_string = "pers_alkash"; // 0x6aa MovS
	var_1462_string = "alkash.xml"; // 0x6ab MovS
	var_1463_int = 1; // 0x6ac MovI
	func_503(var_1460_int, var_1461_string, var_1462_string, var_1463_int); // 0x6ad NEW_2
	var_1464_bool = 0; // 0x6af PushV
	var_1464_bool = 0; // 0x6b0 MovB
	var_1465_int = 8; // 0x6b1 PushI
	var_1466_bool = var_1414_int > var_1465_int; // 0x6b2 GT
	if(var_1466_bool == 0) goto Label_1720; // 0x6b3 JumpB
	var_1467_int = 21; // 0x6b4 PushI
	var_1468_bool = var_1414_int < var_1467_int; // 0x6b5 LT
	if(var_1468_bool == 0) goto Label_1720; // 0x6b6 JumpB
	var_1464_bool = 1; // 0x6b7 MovB
	
Label_1720:
	if(var_1464_bool == 0) goto Label_1756; // 0x6b8 JumpB
	var_1469_int = 0; var_1470_string = ""; var_1471_string = ""; var_1472_int = 0; // 0x6b9 PushV
	var_1469_int = var_1412_int; // 0x6ba Mov
	var_1470_string = "pers_boy"; // 0x6bb MovS
	var_1471_string = "boy.xml"; // 0x6bc MovS
	var_1472_int = 1; // 0x6bd MovI
	func_503(var_1469_int, var_1470_string, var_1471_string, var_1472_int); // 0x6be NEW_2
	var_1473_int = 0; var_1474_string = ""; var_1475_string = ""; var_1476_int = 0; // 0x6c0 PushV
	var_1473_int = var_1412_int; // 0x6c1 Mov
	var_1474_string = "pers_girl"; // 0x6c2 MovS
	var_1475_string = "girl.xml"; // 0x6c3 MovS
	var_1476_int = 1; // 0x6c4 MovI
	func_503(var_1473_int, var_1474_string, var_1475_string, var_1476_int); // 0x6c5 NEW_2
	var_1477_int = 0; var_1478_string = ""; var_1479_string = ""; var_1480_int = 0; // 0x6c7 PushV
	var_1477_int = var_1412_int; // 0x6c8 Mov
	var_1478_string = "pers_girl"; // 0x6c9 MovS
	var_1479_string = "girl2.xml"; // 0x6ca MovS
	var_1480_int = 1; // 0x6cb MovI
	func_503(var_1477_int, var_1478_string, var_1479_string, var_1480_int); // 0x6cc NEW_2
	var_1481_int = 0; var_1482_string = ""; var_1483_string = ""; var_1484_int = 0; // 0x6ce PushV
	var_1481_int = var_1412_int; // 0x6cf Mov
	var_1482_string = "pers_littleboy"; // 0x6d0 MovS
	var_1483_string = "littleboy.xml"; // 0x6d1 MovS
	var_1484_int = 1; // 0x6d2 MovI
	func_503(var_1481_int, var_1482_string, var_1483_string, var_1484_int); // 0x6d3 NEW_2
	var_1485_int = 0; var_1486_string = ""; var_1487_string = ""; var_1488_int = 0; // 0x6d5 PushV
	var_1485_int = var_1412_int; // 0x6d6 Mov
	var_1486_string = "pers_littlegirl"; // 0x6d7 MovS
	var_1487_string = "littlegirl.xml"; // 0x6d8 MovS
	var_1488_int = 1; // 0x6d9 MovI
	func_503(var_1485_int, var_1486_string, var_1487_string, var_1488_int); // 0x6da NEW_2
	
Label_1756:
	goto Label_1883; // 0x6dc Jump
	
Label_1883:
	var_1489_bool = 0; var_1490_int = 0; var_1491_int = 0; // 0x75b PushV
	var_1490_int = var_1413_int; // 0x75c Mov
	var_1491_int = var_1414_int; // 0x75d Mov
	func_1345(var_1489_bool, var_1490_int, var_1491_int); // 0x75e NEW_2
	if(var_1489_bool == 0) goto Label_1896; // 0x760 JumpB
	var_1492_int = 0; var_1493_string = ""; var_1494_string = ""; var_1495_int = 0; // 0x761 PushV
	var_1492_int = var_1412_int; // 0x762 Mov
	var_1493_string = "pers_soldat"; // 0x763 MovS
	var_1494_string = "soldier_marauder.xml"; // 0x764 MovS
	var_1495_int = 2; // 0x765 MovI
	func_503(var_1492_int, var_1493_string, var_1494_string, var_1495_int); // 0x766 NEW_2
	
Label_1896:
	return 2; // 0x768 Return
	
Label_1757:
	var_1496_bool = 0; // 0x6dd PushV
	var_1496_bool = 0; // 0x6de MovB
	var_1497_int = 8; // 0x6df PushI
	var_1498_bool = var_1414_int > var_1497_int; // 0x6e0 GT
	if(var_1498_bool == 0) goto Label_1766; // 0x6e1 JumpB
	var_1499_int = 21; // 0x6e2 PushI
	var_1500_bool = var_1414_int < var_1499_int; // 0x6e3 LT
	if(var_1500_bool == 0) goto Label_1766; // 0x6e4 JumpB
	var_1496_bool = 1; // 0x6e5 MovB
	
Label_1766:
	if(var_1496_bool == 0) goto Label_1843; // 0x6e6 JumpB
	var_1501_int = 0; var_1502_string = ""; var_1503_string = ""; var_1504_int = 0; // 0x6e7 PushV
	var_1501_int = var_1412_int; // 0x6e8 Mov
	var_1502_string = "pers_woman"; // 0x6e9 MovS
	var_1503_string = "woman.xml"; // 0x6ea MovS
	var_1504_int = 1; // 0x6eb MovI
	func_503(var_1501_int, var_1502_string, var_1503_string, var_1504_int); // 0x6ec NEW_2
	var_1505_int = 0; var_1506_string = ""; var_1507_string = ""; var_1508_int = 0; // 0x6ee PushV
	var_1505_int = var_1412_int; // 0x6ef Mov
	var_1506_string = "pers_unosha"; // 0x6f0 MovS
	var_1507_string = "unosha.xml"; // 0x6f1 MovS
	var_1508_int = 1; // 0x6f2 MovI
	func_503(var_1505_int, var_1506_string, var_1507_string, var_1508_int); // 0x6f3 NEW_2
	var_1509_int = 0; var_1510_string = ""; var_1511_string = ""; var_1512_int = 0; // 0x6f5 PushV
	var_1509_int = var_1412_int; // 0x6f6 Mov
	var_1510_string = "pers_unosha"; // 0x6f7 MovS
	var_1511_string = "unosha2.xml"; // 0x6f8 MovS
	var_1512_int = 1; // 0x6f9 MovI
	func_503(var_1509_int, var_1510_string, var_1511_string, var_1512_int); // 0x6fa NEW_2
	var_1513_int = 0; var_1514_string = ""; var_1515_string = ""; var_1516_int = 0; // 0x6fc PushV
	var_1513_int = var_1412_int; // 0x6fd Mov
	var_1514_string = "pers_boy"; // 0x6fe MovS
	var_1515_string = "boy.xml"; // 0x6ff MovS
	var_1516_int = 1; // 0x700 MovI
	func_503(var_1513_int, var_1514_string, var_1515_string, var_1516_int); // 0x701 NEW_2
	var_1517_int = 0; var_1518_string = ""; var_1519_string = ""; var_1520_int = 0; // 0x703 PushV
	var_1517_int = var_1412_int; // 0x704 Mov
	var_1518_string = "pers_girl"; // 0x705 MovS
	var_1519_string = "girl.xml"; // 0x706 MovS
	var_1520_int = 1; // 0x707 MovI
	func_503(var_1517_int, var_1518_string, var_1519_string, var_1520_int); // 0x708 NEW_2
	var_1521_int = 0; var_1522_string = ""; var_1523_string = ""; var_1524_int = 0; // 0x70a PushV
	var_1521_int = var_1412_int; // 0x70b Mov
	var_1522_string = "pers_girl"; // 0x70c MovS
	var_1523_string = "girl2.xml"; // 0x70d MovS
	var_1524_int = 1; // 0x70e MovI
	func_503(var_1521_int, var_1522_string, var_1523_string, var_1524_int); // 0x70f NEW_2
	var_1525_int = 0; var_1526_string = ""; var_1527_string = ""; var_1528_int = 0; // 0x711 PushV
	var_1525_int = var_1412_int; // 0x712 Mov
	var_1526_string = "pers_littleboy"; // 0x713 MovS
	var_1527_string = "littleboy.xml"; // 0x714 MovS
	var_1528_int = 1; // 0x715 MovI
	func_503(var_1525_int, var_1526_string, var_1527_string, var_1528_int); // 0x716 NEW_2
	var_1529_int = 0; var_1530_string = ""; var_1531_string = ""; var_1532_int = 0; // 0x718 PushV
	var_1529_int = var_1412_int; // 0x719 Mov
	var_1530_string = "pers_littlegirl"; // 0x71a MovS
	var_1531_string = "littlegirl.xml"; // 0x71b MovS
	var_1532_int = 1; // 0x71c MovI
	func_503(var_1529_int, var_1530_string, var_1531_string, var_1532_int); // 0x71d NEW_2
	var_1533_int = 0; var_1534_string = ""; var_1535_string = ""; var_1536_int = 0; // 0x71f PushV
	var_1533_int = var_1412_int; // 0x720 Mov
	var_1534_string = "pers_alkash"; // 0x721 MovS
	var_1535_string = "alkash.xml"; // 0x722 MovS
	var_1536_int = 1; // 0x723 MovI
	func_503(var_1533_int, var_1534_string, var_1535_string, var_1536_int); // 0x724 NEW_2
	var_1537_int = 1; // 0x726 PushI
	var_1538_int = var_1413_int + var_1537_int; // 0x727 Add
	var_1539_int = 3; // 0x728 PushI
	var_1540_bool = var_1538_int >= var_1539_int; // 0x729 GE
	if(var_1540_bool == 0) goto Label_1842; // 0x72a JumpB
	var_1541_int = 0; var_1542_string = ""; var_1543_string = ""; var_1544_int = 0; // 0x72b PushV
	var_1541_int = var_1412_int; // 0x72c Mov
	var_1542_string = "pers_dohodyaga"; // 0x72d MovS
	var_1543_string = "dohodyaga.xml"; // 0x72e MovS
	var_1544_int = 1; // 0x72f MovI
	func_503(var_1541_int, var_1542_string, var_1543_string, var_1544_int); // 0x730 NEW_2
	
Label_1842:
	goto Label_1883; // 0x732 Jump
	
Label_1843:
	var_1545_int = 0; var_1546_string = ""; var_1547_string = ""; var_1548_int = 0; // 0x733 PushV
	var_1545_int = var_1412_int; // 0x734 Mov
	var_1546_string = "pers_woman"; // 0x735 MovS
	var_1547_string = "woman.xml"; // 0x736 MovS
	var_1548_int = 1; // 0x737 MovI
	func_503(var_1545_int, var_1546_string, var_1547_string, var_1548_int); // 0x738 NEW_2
	var_1549_int = 0; var_1550_string = ""; var_1551_string = ""; var_1552_int = 0; // 0x73a PushV
	var_1549_int = var_1412_int; // 0x73b Mov
	var_1550_string = "pers_unosha"; // 0x73c MovS
	var_1551_string = "unosha.xml"; // 0x73d MovS
	var_1552_int = 1; // 0x73e MovI
	func_503(var_1549_int, var_1550_string, var_1551_string, var_1552_int); // 0x73f NEW_2
	var_1553_int = 0; var_1554_string = ""; var_1555_string = ""; var_1556_int = 0; // 0x741 PushV
	var_1553_int = var_1412_int; // 0x742 Mov
	var_1554_string = "pers_unosha"; // 0x743 MovS
	var_1555_string = "unosha2.xml"; // 0x744 MovS
	var_1556_int = 1; // 0x745 MovI
	func_503(var_1553_int, var_1554_string, var_1555_string, var_1556_int); // 0x746 NEW_2
	var_1557_int = 0; var_1558_string = ""; var_1559_string = ""; var_1560_int = 0; // 0x748 PushV
	var_1557_int = var_1412_int; // 0x749 Mov
	var_1558_string = "pers_alkash"; // 0x74a MovS
	var_1559_string = "alkash.xml"; // 0x74b MovS
	var_1560_int = 1; // 0x74c MovI
	func_503(var_1557_int, var_1558_string, var_1559_string, var_1560_int); // 0x74d NEW_2
	var_1561_int = 1; // 0x74f PushI
	var_1562_int = var_1413_int + var_1561_int; // 0x750 Add
	var_1563_int = 3; // 0x751 PushI
	var_1564_bool = var_1562_int >= var_1563_int; // 0x752 GE
	if(var_1564_bool == 0) goto Label_1883; // 0x753 JumpB
	var_1565_int = 0; var_1566_string = ""; var_1567_string = ""; var_1568_int = 0; // 0x754 PushV
	var_1565_int = var_1412_int; // 0x755 Mov
	var_1566_string = "pers_dohodyaga"; // 0x756 MovS
	var_1567_string = "dohodyaga.xml"; // 0x757 MovS
	var_1568_int = 1; // 0x758 MovI
	func_503(var_1565_int, var_1566_string, var_1567_string, var_1568_int); // 0x759 NEW_2
}


func_10843()
{
	var_4893_int = 0; var_4894_string = ""; // 0x2a5c PushV
	var_4894_string = "map_chertez_state"; // 0x2a5d MovS
	func_132(var_4893_int, var_4894_string); // 0x2a5e NEW_2
	var_4895_int = 1; // 0x2a60 PushI
	var_4896_bool = var_4893_int <= var_4895_int; // 0x2a61 LE
	if(var_4896_bool == 0) goto Label_10859; // 0x2a62 JumpB
	var_4897_string = "map_chertez_state"; // 0x2a63 PushS
	var_4898_int = 1; // 0x2a64 PushI
	SetVariable(var_4897_string, var_4898_int); // 0x2a65 Func
	var_4899_string = "map_chertez_force"; // 0x2a67 PushS
	var_4900_int = 1; // 0x2a68 PushI
	SetVariable(var_4899_string, var_4900_int); // 0x2a69 Func
	
Label_10859:
	return 0; // 0x2a6b Return
}


func_7773(var_4473_bool)
{
	var_4474_object = Obj(); var_4475_object = Obj(); // 0x1e5d PushV
	var_4476_string = "arena_light"; // 0x1e5e PushS
	FindActor(var_4475_object, var_4476_string); // 0x1e5f Func
	Switch(var_4473_bool); // 0x1e61 ObjFunc
	return 2; // 0x1e63 Return
}


func_9826(var_5762_int, var_5763_float)
{
	var_5764_int = 0; var_5765_int = 0; var_5766_int = 0; var_5767_float = 0; // 0x2663 PushV
	var_5765_int = 530554; // 0x2664 MovI
	var_5766_int = 530553; // 0x2665 MovI
	var_5767_float = var_5763_float; // 0x2666 Mov
	func_11409(var_5764_int, var_5765_int, var_5766_int, var_5767_float); // 0x2667 NEW_2
	var_5762_int = var_5764_int; // 0x2668 Mov
	return 0; // 0x266a Return
}


func_12899()
{
	func_12874(); // 0x3264 NEW_2
	return 0; // 0x3266 Return
}


func_7781()
{
	var_4500_object = Obj(); var_4501_bool = 0; var_4502_cvector = CVector(0,0,0); var_4503_cvector = CVector(0,0,0); var_4504_int = 0; var_4505_object = Obj(); var_4506_object = Obj(); var_4507_bool = 0; var_4508_cvector = CVector(0,0,0); var_4509_cvector = CVector(0,0,0); var_4510_int = 0; var_4511_object = Obj(); // 0x1e65 PushV
	var_4512_string = "Setting arena..."; // 0x1e66 PushS
	Trace(var_4512_string); // 0x1e67 Func
	var_4513_object = GlobalVars[11]; // 0x1e69 PushGE
	var_4514_bool = var_4513_object == 0; // 0x1e6a NullEq
	if(var_4514_bool == 0) goto Label_7843; // 0x1e6b JumpB
	GetMainOutdoorScene(var_4506_object); // 0x1e6c Func
	var_4515_string = "pt_arena_manager"; // 0x1e6e PushS
	GetLocator(var_4515_string, var_4507_bool, var_4508_cvector, var_4509_cvector); // 0x1e6f ObjFunc
	var_4516_bool = var_4507_bool == 0; // 0x1e71 Not
	if(var_4516_bool == 0) goto Label_7799; // 0x1e72 JumpB
	var_4517_string = "Locator doesn't exist for arena manager"; // 0x1e73 PushS
	Trace(var_4517_string); // 0x1e74 Func
	goto Label_7808; // 0x1e76 Jump
	
Label_7808:
	var_4510_int = 0; // 0x1e80 MovI
	
Label_7809:
	var_4518_int = 6; // 0x1e81 PushI
	var_4519_bool = var_4510_int < var_4518_int; // 0x1e82 LT
	if(var_4519_bool == 0) goto Label_7838; // 0x1e83 JumpB
	var_4520_string = "pt_arena_torch"; // 0x1e84 PushS
	var_4521_int = 1; // 0x1e85 PushI
	var_4522_int = var_4510_int + var_4521_int; // 0x1e86 Add
	var_4523_int = var_4520_string + var_4522_int; // 0x1e87 Add
	GetLocator(var_4523_int, var_4507_bool, var_4508_cvector, var_4509_cvector); // 0x1e88 ObjFunc
	var_4524_bool = var_4507_bool == 0; // 0x1e8a Not
	if(var_4524_bool == 0) goto Label_7827; // 0x1e8b JumpB
	var_4525_string = "Locator doesn't exist for arena torch "; // 0x1e8c PushS
	var_4526_int = 1; // 0x1e8d PushI
	var_4527_int = var_4510_int + var_4526_int; // 0x1e8e Add
	var_4528_int = var_4525_string + var_4527_int; // 0x1e8f Add
	Trace(var_4528_int); // 0x1e90 Func
	goto Label_7835; // 0x1e92 Jump
	
Label_7835:
	var_4529_int = 1; // 0x1e9b PushI
	var_4510_int = var_4510_int + var_4529_int; // 0x1e9c Add2
	goto Label_7809; // 0x1e9d Jump
	
Label_7827:
	var_4530_string = "scripted"; // 0x1e93 PushS
	var_4531_string = "torch.xml"; // 0x1e94 PushS
	AddActorByType(var_4511_object, var_4530_string, var_4506_object, var_4508_cvector, var_4509_cvector, var_4531_string); // 0x1e95 Func
	var_4532_object = GlobalVars[12]; // 0x1e97 PushGE
	add(var_4511_object); // 0x1e98 ObjFunc
	var_4511_object = 0; // 0x1e9a SetNull
	
Label_7838:
	var_4533_bool = 0; // 0x1e9e PushV
	var_4533_bool = 1; // 0x1e9f MovB
	func_7773(var_4533_bool); // 0x1ea0 NEW_2
	var_4506_object = 0; // 0x1ea2 SetNull
	
Label_7843:
	return 12; // 0x1ea3 Return
	
Label_7799:
	var_4537_object = GlobalVars[11]; // 0x1e77 PushGE
	var_4538_object = Obj(); var_4539_object = Obj(); var_4540_cvector = CVector(0,0,0); var_4541_cvector = CVector(0,0,0); // 0x1e78 PushV
	var_4539_object = var_4506_object; // 0x1e79 Mov
	var_4540_cvector = var_4508_cvector; // 0x1e7a Mov
	var_4541_cvector = var_4509_cvector; // 0x1e7b Mov
	func_13671(var_4539_object, var_4540_cvector, var_4541_cvector); // 0x1e7c NEW_2
	var_4537_object = var_4538_object; // 0x1e7d Mov
	GlobalVars[11] = var_4537_object; // 0x1e7f PopGE
}


func_12903(var_303_bool, var_304_int)
{
	var_305_int = 0; var_306_int = 0; // 0x3267 PushV
	var_307_string = "K2System"; // 0x3268 PushS
	var_308_int = var_307_string + var_304_int; // 0x3269 Add
	GetVariable(var_308_int, var_306_int); // 0x326a Func
	var_309_int = 0; // 0x326c PushI
	var_303_bool = var_306_int != var_309_int; // 0x326d Neq2
	return 2; // 0x326e Return
}


func_9835(var_5773_int, var_5774_float)
{
	var_5775_int = 0; var_5776_int = 0; var_5777_int = 0; var_5778_float = 0; // 0x266c PushV
	var_5776_int = 530556; // 0x266d MovI
	var_5777_int = 530555; // 0x266e MovI
	var_5778_float = var_5774_float; // 0x266f Mov
	func_11409(var_5775_int, var_5776_int, var_5777_int, var_5778_float); // 0x2670 NEW_2
	var_5773_int = var_5775_int; // 0x2671 Mov
	return 0; // 0x2673 Return
}


func_10860()
{
	var_5139_int = 0; var_5140_string = ""; // 0x2a6d PushV
	var_5140_string = "map_chertez_state"; // 0x2a6e MovS
	func_132(var_5139_int, var_5140_string); // 0x2a6f NEW_2
	var_5141_int = 2; // 0x2a71 PushI
	var_5142_bool = var_5139_int <= var_5141_int; // 0x2a72 LE
	if(var_5142_bool == 0) goto Label_10876; // 0x2a73 JumpB
	var_5143_string = "map_chertez_state"; // 0x2a74 PushS
	var_5144_int = 2; // 0x2a75 PushI
	SetVariable(var_5143_string, var_5144_int); // 0x2a76 Func
	var_5145_string = "map_chertez_force"; // 0x2a78 PushS
	var_5146_int = 1; // 0x2a79 PushI
	SetVariable(var_5145_string, var_5146_int); // 0x2a7a Func
	
Label_10876:
	return 0; // 0x2a7c Return
}


func_622(var_566_int, var_568_object, var_569_object, var_570_object)
{
	var_571_int = 0; var_572_bool = 0; // 0x26f PushV
	var_571_int = var_566_int; // 0x270 Mov
	var_572_bool = 1; // 0x271 MovB
	func_542(var_571_int, var_572_bool); // 0x272 NEW_2
	var_599_object = Obj(); // 0x274 PushV
	var_599_object = var_568_object; // 0x275 Mov
	func_263(var_599_object); // 0x276 NEW_2
	var_610_object = Obj(); // 0x278 PushV
	var_610_object = var_569_object; // 0x279 Mov
	func_263(var_610_object); // 0x27a NEW_2
	var_611_object = Obj(); // 0x27c PushV
	var_611_object = var_570_object; // 0x27d Mov
	func_263(var_611_object); // 0x27e NEW_2
	return 0; // 0x280 Return
}


func_12911(var_198_int, var_199_int)
{
	var_200_int = 6; // 0x3270 PushI
	var_201_bool = var_199_int == var_200_int; // 0x3271 Eq
	if(var_201_bool == 0) goto Label_12918; // 0x3272 JumpB
	var_198_int = 14; // 0x3273 MovI
	return 0; // 0x3274 Return
	
Label_12918:
	var_202_int = 7; // 0x3276 PushI
	var_203_bool = var_199_int == var_202_int; // 0x3277 Eq
	if(var_203_bool == 0) goto Label_12924; // 0x3278 JumpB
	var_198_int = 8; // 0x3279 MovI
	return 0; // 0x327a Return
	
Label_12924:
	var_204_int = 8; // 0x327c PushI
	var_205_bool = var_199_int == var_204_int; // 0x327d Eq
	if(var_205_bool == 0) goto Label_12930; // 0x327e JumpB
	var_198_int = 4; // 0x327f MovI
	return 0; // 0x3280 Return
	
Label_12930:
	var_206_int = 9; // 0x3282 PushI
	var_207_bool = var_199_int == var_206_int; // 0x3283 Eq
	if(var_207_bool == 0) goto Label_12936; // 0x3284 JumpB
	var_198_int = 13; // 0x3285 MovI
	return 0; // 0x3286 Return
	
Label_12936:
	var_208_int = 10; // 0x3288 PushI
	var_209_bool = var_199_int == var_208_int; // 0x3289 Eq
	if(var_209_bool == 0) goto Label_12942; // 0x328a JumpB
	var_198_int = 5; // 0x328b MovI
	return 0; // 0x328c Return
	
Label_12942:
	var_210_int = 11; // 0x328e PushI
	var_211_bool = var_199_int == var_210_int; // 0x328f Eq
	if(var_211_bool == 0) goto Label_12947; // 0x3290 JumpB
	var_198_int = 11; // 0x3291 MovI
	return 0; // 0x3292 Return
	
Label_12947:
	var_198_int = -1; // 0x3293 MovI
	return 0; // 0x3294 Return
}


func_9844(var_5784_int, var_5785_float)
{
	var_5786_int = 0; var_5787_int = 0; var_5788_int = 0; var_5789_float = 0; // 0x2675 PushV
	var_5787_int = 530558; // 0x2676 MovI
	var_5788_int = 530557; // 0x2677 MovI
	var_5789_float = var_5785_float; // 0x2678 Mov
	func_11409(var_5786_int, var_5787_int, var_5788_int, var_5789_float); // 0x2679 NEW_2
	var_5784_int = var_5786_int; // 0x267a Mov
	return 0; // 0x267c Return
}


func_8823()
{
	var_4533_object = Obj(); var_4534_int = 0; var_4535_int = 0; var_4536_object = Obj(); var_4537_bool = 0; var_4538_cvector = CVector(0,0,0); var_4539_cvector = CVector(0,0,0); var_4540_string = ""; var_4541_object = Obj(); var_4542_int = 0; var_4543_int = 0; var_4544_object = Obj(); var_4545_bool = 0; var_4546_cvector = CVector(0,0,0); var_4547_cvector = CVector(0,0,0); var_4548_string = ""; // 0x2277 PushV
	GetMainOutdoorScene(var_4541_object); // 0x2278 Func
	var_4549_object = GlobalVars[7]; // 0x227a PushGE
	size(var_4542_int); // 0x227b ObjFunc
	var_4543_int = 0; // 0x227d MovI
	
Label_8830:
	var_4550_bool = var_4543_int < var_4542_int; // 0x227e LT
	if(var_4550_bool == 0) goto Label_8870; // 0x227f JumpB
	var_4551_object = GlobalVars[7]; // 0x2280 PushGE
	get(var_4544_object, var_4543_int); // 0x2281 ObjFunc
	var_4552_object = var_4544_object; // 0x2283 Push
	if(var_4552_object == 0) goto Label_8838; // 0x2284 JumpB
	goto Label_8867; // 0x2285 Jump
	
Label_8867:
	var_4553_int = 1; // 0x22a3 PushI
	var_4543_int = var_4543_int + var_4553_int; // 0x22a4 Add2
	goto Label_8830; // 0x22a5 Jump
	
Label_8838:
	var_4554_string = "pt_grave_supply"; // 0x2286 PushS
	var_4555_int = 1; // 0x2287 PushI
	var_4556_int = var_4543_int + var_4555_int; // 0x2288 Add
	var_4557_int = var_4554_string + var_4556_int; // 0x2289 Add
	GetLocator(var_4557_int, var_4545_bool, var_4546_cvector, var_4547_cvector); // 0x228a ObjFunc
	var_4558_bool = var_4545_bool == 0; // 0x228c Not
	if(var_4558_bool == 0) goto Label_8850; // 0x228d JumpB
	var_4559_string = "Grave supply point not found"; // 0x228e PushS
	Trace(var_4559_string); // 0x228f Func
	goto Label_8867; // 0x2291 Jump
	
Label_8850:
	var_4560_int = 1; // 0x2292 PushI
	var_4561_int = 1; // 0x2293 PushI
	var_4562_string = "bread"; // 0x2294 PushS
	var_4563_string = "milk"; // 0x2295 PushS
	RandOneOf(var_4548_string, var_4560_int, var_4561_int, var_4562_string, var_4563_string); // 0x2296 Func
	var_4564_string = "scripted"; // 0x2298 PushS
	var_4565_string = "item_"; // 0x2299 PushS
	var_4566_int = var_4565_string + var_4548_string; // 0x229a Add
	var_4567_string = "_stat.xml"; // 0x229b PushS
	var_4568_int = var_4566_int + var_4567_string; // 0x229c Add
	AddStationaryActorByType(var_4544_object, var_4546_cvector, var_4547_cvector, var_4564_string, var_4568_int); // 0x229d ObjFunc
	var_4569_object = GlobalVars[7]; // 0x229f PushGE
	set(var_4543_int, var_4544_object); // 0x22a0 ObjFunc
	var_4544_object = 0; // 0x22a2 SetNull
	
Label_8870:
	return 16; // 0x22a6 Return
}


func_6779(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object)
{
	var_2939_int = 0; // 0x1a7c PushI
	var_2940_bool = var_2934_int == var_2939_int; // 0x1a7d Eq
	if(var_2940_bool == 0) goto Label_6819; // 0x1a7e JumpB
	var_2941_int = 0; var_2942_bool = 0; // 0x1a7f PushV
	var_2941_int = 12; // 0x1a80 MovI
	var_2942_bool = 1; // 0x1a81 MovB
	func_796(var_2941_int, var_2942_bool); // 0x1a82 NEW_2
	var_2943_int = 0; var_2944_bool = 0; var_2945_int = 0; // 0x1a84 PushV
	var_2943_int = 12; // 0x1a85 MovI
	var_2944_bool = 1; // 0x1a86 MovB
	var_2945_int = 1; // 0x1a87 MovI
	func_813(var_2943_int, var_2944_bool, var_2945_int); // 0x1a88 NEW_2
	var_2946_int = 0; var_2947_int = 0; var_2948_object = Obj(); var_2949_object = Obj(); var_2950_object = Obj(); // 0x1a8a PushV
	var_2946_int = 12; // 0x1a8b MovI
	var_2947_int = var_2933_int; // 0x1a8c Mov
	var_2948_object = var_2935_object; // 0x1a8d Mov
	var_2949_object = var_2936_object; // 0x1a8e Mov
	var_2950_object = var_2937_object; // 0x1a8f Mov
	func_641(var_2946_int, var_2947_int, var_2948_object, var_2949_object, var_2950_object); // 0x1a90 NEW_2
	var_2951_object = Obj(); var_2952_int = 0; // 0x1a92 PushV
	var_2951_object = var_2938_object; // 0x1a93 Mov
	var_2952_int = 1; // 0x1a94 MovI
	func_305(var_2952_int); // 0x1a95 NEW_2
	var_2953_int = 0; var_2954_bool = 0; var_2955_int = 0; // 0x1a97 PushV
	var_2953_int = 12; // 0x1a98 MovI
	var_2954_bool = 1; // 0x1a99 MovB
	var_2955_int = 4; // 0x1a9a MovI
	func_870(var_2953_int, var_2954_bool, var_2955_int); // 0x1a9b NEW_2
	var_2956_int = 0; var_2957_bool = 0; var_2958_int = 0; // 0x1a9d PushV
	var_2956_int = 12; // 0x1a9e MovI
	var_2957_bool = 0; // 0x1a9f MovB
	var_2958_int = 4; // 0x1aa0 MovI
	func_932(var_2956_int, var_2957_bool, var_2958_int); // 0x1aa1 NEW_2
	
Label_6819:
	var_2959_int = 0; var_2960_bool = 0; // 0x1aa3 PushV
	var_2959_int = 12; // 0x1aa4 MovI
	var_2960_bool = 0; // 0x1aa5 MovB
	func_779(var_2959_int, var_2960_bool); // 0x1aa6 NEW_2
	var_2961_int = 0; var_2962_int = 0; var_2963_int = 0; // 0x1aa8 PushV
	var_2961_int = 12; // 0x1aa9 MovI
	var_2962_int = var_2933_int; // 0x1aaa Mov
	var_2963_int = var_2934_int; // 0x1aab Mov
	func_2764(var_2961_int, var_2962_int, var_2963_int); // 0x1aac NEW_2
	return 0; // 0x1aae Return
}


func_10877()
{
	var_4983_int = 0; var_4984_string = ""; // 0x2a7e PushV
	var_4984_string = "map_chertez_state"; // 0x2a7f MovS
	func_132(var_4983_int, var_4984_string); // 0x2a80 NEW_2
	var_4985_int = 3; // 0x2a82 PushI
	var_4986_bool = var_4983_int <= var_4985_int; // 0x2a83 LE
	if(var_4986_bool == 0) goto Label_10893; // 0x2a84 JumpB
	var_4987_string = "map_chertez_state"; // 0x2a85 PushS
	var_4988_int = 3; // 0x2a86 PushI
	SetVariable(var_4987_string, var_4988_int); // 0x2a87 Func
	var_4989_string = "map_chertez_force"; // 0x2a89 PushS
	var_4990_int = 1; // 0x2a8a PushI
	SetVariable(var_4989_string, var_4990_int); // 0x2a8b Func
	
Label_10893:
	return 0; // 0x2a8d Return
}


func_5758(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object)
{
	var_2668_int = 0; // 0x167f PushI
	var_2669_bool = var_2663_int == var_2668_int; // 0x1680 Eq
	if(var_2669_bool == 0) goto Label_5798; // 0x1681 JumpB
	var_2670_int = 0; var_2671_bool = 0; // 0x1682 PushV
	var_2670_int = 7; // 0x1683 MovI
	var_2671_bool = 1; // 0x1684 MovB
	func_796(var_2670_int, var_2671_bool); // 0x1685 NEW_2
	var_2672_int = 0; var_2673_bool = 0; var_2674_int = 0; // 0x1687 PushV
	var_2672_int = 7; // 0x1688 MovI
	var_2673_bool = 1; // 0x1689 MovB
	var_2674_int = 1; // 0x168a MovI
	func_813(var_2672_int, var_2673_bool, var_2674_int); // 0x168b NEW_2
	var_2675_int = 0; var_2676_int = 0; var_2677_object = Obj(); var_2678_object = Obj(); var_2679_object = Obj(); // 0x168d PushV
	var_2675_int = 7; // 0x168e MovI
	var_2676_int = var_2662_int; // 0x168f Mov
	var_2677_object = var_2664_object; // 0x1690 Mov
	var_2678_object = var_2665_object; // 0x1691 Mov
	var_2679_object = var_2666_object; // 0x1692 Mov
	func_641(var_2675_int, var_2676_int, var_2677_object, var_2678_object, var_2679_object); // 0x1693 NEW_2
	var_2680_object = Obj(); var_2681_int = 0; // 0x1695 PushV
	var_2680_object = var_2667_object; // 0x1696 Mov
	var_2681_int = 1; // 0x1697 MovI
	func_305(var_2681_int); // 0x1698 NEW_2
	var_2682_int = 0; var_2683_bool = 0; var_2684_int = 0; // 0x169a PushV
	var_2682_int = 7; // 0x169b MovI
	var_2683_bool = 1; // 0x169c MovB
	var_2684_int = 6; // 0x169d MovI
	func_870(var_2682_int, var_2683_bool, var_2684_int); // 0x169e NEW_2
	var_2685_int = 0; var_2686_bool = 0; var_2687_int = 0; // 0x16a0 PushV
	var_2685_int = 7; // 0x16a1 MovI
	var_2686_bool = 0; // 0x16a2 MovB
	var_2687_int = 6; // 0x16a3 MovI
	func_932(var_2685_int, var_2686_bool, var_2687_int); // 0x16a4 NEW_2
	
Label_5798:
	var_2688_int = 0; var_2689_bool = 0; // 0x16a6 PushV
	var_2688_int = 7; // 0x16a7 MovI
	var_2689_bool = 0; // 0x16a8 MovB
	func_779(var_2688_int, var_2689_bool); // 0x16a9 NEW_2
	var_2690_int = 0; var_2691_int = 0; var_2692_int = 0; // 0x16ab PushV
	var_2690_int = 7; // 0x16ac MovI
	var_2691_int = var_2662_int; // 0x16ad Mov
	var_2692_int = var_2663_int; // 0x16ae Mov
	func_2764(var_2690_int, var_2691_int, var_2692_int); // 0x16af NEW_2
	return 0; // 0x16b1 Return
}


func_9853(var_5844_int, var_5845_float)
{
	var_5846_int = 0; var_5847_int = 0; var_5848_int = 0; var_5849_float = 0; // 0x267e PushV
	var_5847_int = 530560; // 0x267f MovI
	var_5848_int = 530559; // 0x2680 MovI
	var_5849_float = var_5845_float; // 0x2681 Mov
	func_11409(var_5846_int, var_5847_int, var_5848_int, var_5849_float); // 0x2682 NEW_2
	var_5844_int = var_5846_int; // 0x2683 Mov
	return 0; // 0x2685 Return
}


func_641(var_2018_int, var_2019_int, var_2020_object, var_2021_object, var_2022_object)
{
	var_2023_int = 0; var_2024_bool = 0; // 0x282 PushV
	var_2023_int = var_2018_int; // 0x283 Mov
	var_2024_bool = 0; // 0x284 MovB
	func_542(var_2023_int, var_2024_bool); // 0x285 NEW_2
	var_2025_object = Obj(); // 0x287 PushV
	var_2025_object = var_2020_object; // 0x288 Mov
	func_263(var_2025_object); // 0x289 NEW_2
	var_2026_object = Obj(); // 0x28b PushV
	var_2026_object = var_2021_object; // 0x28c Mov
	func_263(var_2026_object); // 0x28d NEW_2
	var_2027_object = Obj(); // 0x28f PushV
	var_2027_object = var_2022_object; // 0x290 Mov
	func_263(var_2027_object); // 0x291 NEW_2
	var_2028_int = 8; // 0x293 PushI
	var_2029_bool = var_2019_int < var_2028_int; // 0x294 LT
	if(var_2029_bool == 0) goto Label_685; // 0x295 JumpB
	var_2030_string = ""; var_2031_object = Obj(); var_2032_string = ""; var_2033_string = ""; // 0x296 PushV
	var_2034_string = "pt_blockpost"; // 0x297 PushS
	var_2035_int = 1; // 0x298 PushI
	var_2036_int = var_2018_int + var_2035_int; // 0x299 Add
	var_2037_int = var_2034_string + var_2036_int; // 0x29a Add
	var_2038_string = "_1_"; // 0x29b PushS
	var_2030_string = var_2037_int + var_2038_string; // 0x29c Add2
	var_2031_object = var_2020_object; // 0x29d Mov
	var_2032_string = "pers_patrool"; // 0x29e MovS
	var_2033_string = "patrol_stat.xml"; // 0x29f MovS
	func_576(var_2031_object, var_2032_string, var_2033_string); // 0x2a0 NEW_2
	var_2056_string = ""; var_2057_object = Obj(); // 0x2a2 PushV
	var_2058_string = "pt_fog"; // 0x2a3 PushS
	var_2059_int = 1; // 0x2a4 PushI
	var_2060_int = var_2018_int + var_2059_int; // 0x2a5 Add
	var_2061_int = var_2058_string + var_2060_int; // 0x2a6 Add
	var_2062_string = "_"; // 0x2a7 PushS
	var_2056_string = var_2061_int + var_2062_string; // 0x2a8 Add2
	var_2057_object = var_2022_object; // 0x2a9 Mov
	func_598(var_2057_object); // 0x2aa NEW_2
	goto Label_719; // 0x2ac Jump
	
Label_719:
	return 0; // 0x2cf Return
	
Label_685:
	var_2083_string = ""; var_2084_object = Obj(); var_2085_string = ""; var_2086_string = ""; // 0x2ad PushV
	var_2087_string = "pt_blockpost"; // 0x2ae PushS
	var_2088_int = 1; // 0x2af PushI
	var_2089_int = var_2018_int + var_2088_int; // 0x2b0 Add
	var_2090_int = var_2087_string + var_2089_int; // 0x2b1 Add
	var_2091_string = "_1_"; // 0x2b2 PushS
	var_2083_string = var_2090_int + var_2091_string; // 0x2b3 Add2
	var_2084_object = var_2020_object; // 0x2b4 Mov
	var_2085_string = "pers_soldat"; // 0x2b5 MovS
	var_2086_string = "soldier.xml"; // 0x2b6 MovS
	func_576(var_2084_object, var_2085_string, var_2086_string); // 0x2b7 NEW_2
	var_2092_string = ""; var_2093_object = Obj(); var_2094_string = ""; var_2095_string = ""; // 0x2b9 PushV
	var_2096_string = "pt_blockpost"; // 0x2ba PushS
	var_2097_int = 1; // 0x2bb PushI
	var_2098_int = var_2018_int + var_2097_int; // 0x2bc Add
	var_2099_int = var_2096_string + var_2098_int; // 0x2bd Add
	var_2100_string = "_2_"; // 0x2be PushS
	var_2092_string = var_2099_int + var_2100_string; // 0x2bf Add2
	var_2093_object = var_2021_object; // 0x2c0 Mov
	var_2094_string = "pers_sanitar"; // 0x2c1 MovS
	var_2095_string = "sanitar_stat.xml"; // 0x2c2 MovS
	func_576(var_2093_object, var_2094_string, var_2095_string); // 0x2c3 NEW_2
	var_2101_string = ""; var_2102_object = Obj(); // 0x2c5 PushV
	var_2103_string = "pt_fog"; // 0x2c6 PushS
	var_2104_int = 1; // 0x2c7 PushI
	var_2105_int = var_2018_int + var_2104_int; // 0x2c8 Add
	var_2106_int = var_2103_string + var_2105_int; // 0x2c9 Add
	var_2107_string = "_"; // 0x2ca PushS
	var_2101_string = var_2106_int + var_2107_string; // 0x2cb Add2
	var_2102_object = var_2022_object; // 0x2cc Mov
	func_598(var_2102_object); // 0x2cd NEW_2
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


func_9862(var_5335_int, var_5336_float)
{
	var_5337_int = 0; var_5338_int = 0; var_5339_int = 0; var_5340_float = 0; // 0x2687 PushV
	var_5338_int = 530562; // 0x2688 MovI
	var_5339_int = 530561; // 0x2689 MovI
	var_5340_float = var_5336_float; // 0x268a Mov
	func_11409(var_5337_int, var_5338_int, var_5339_int, var_5340_float); // 0x268b NEW_2
	var_5335_int = var_5337_int; // 0x268c Mov
	return 0; // 0x268e Return
}


func_10894()
{
	var_5076_int = 0; var_5077_string = ""; // 0x2a8f PushV
	var_5077_string = "map_chertez_state"; // 0x2a90 MovS
	func_132(var_5076_int, var_5077_string); // 0x2a91 NEW_2
	var_5078_int = 4; // 0x2a93 PushI
	var_5079_bool = var_5076_int <= var_5078_int; // 0x2a94 LE
	if(var_5079_bool == 0) goto Label_10910; // 0x2a95 JumpB
	var_5080_string = "map_chertez_state"; // 0x2a96 PushS
	var_5081_int = 4; // 0x2a97 PushI
	SetVariable(var_5080_string, var_5081_int); // 0x2a98 Func
	var_5082_string = "map_chertez_force"; // 0x2a9a PushS
	var_5083_int = 1; // 0x2a9b PushI
	SetVariable(var_5082_string, var_5083_int); // 0x2a9c Func
	
Label_10910:
	return 0; // 0x2a9e Return
}


func_9871(var_5379_int, var_5380_float)
{
	var_5381_int = 0; var_5382_int = 0; var_5383_int = 0; var_5384_float = 0; // 0x2690 PushV
	var_5382_int = 530564; // 0x2691 MovI
	var_5383_int = 530563; // 0x2692 MovI
	var_5384_float = var_5380_float; // 0x2693 Mov
	func_11409(var_5381_int, var_5382_int, var_5383_int, var_5384_float); // 0x2694 NEW_2
	var_5379_int = var_5381_int; // 0x2695 Mov
	return 0; // 0x2697 Return
}


func_12949(var_245_bool, var_246_int)
{
	var_247_int = 0; var_248_int = 0; // 0x3295 PushV
	var_249_string = "K2SystemSvitaRemoved"; // 0x3296 PushS
	var_250_int = var_249_string + var_246_int; // 0x3297 Add
	GetVariable(var_250_int, var_248_int); // 0x3298 Func
	var_251_int = 0; // 0x329a PushI
	var_245_bool = var_248_int != var_251_int; // 0x329b Neq2
	return 2; // 0x329c Return
}


func_9880(var_5483_int, var_5484_float)
{
	var_5485_int = 0; var_5486_int = 0; var_5487_int = 0; var_5488_float = 0; // 0x2699 PushV
	var_5486_int = 530566; // 0x269a MovI
	var_5487_int = 530565; // 0x269b MovI
	var_5488_float = var_5484_float; // 0x269c Mov
	func_11409(var_5485_int, var_5486_int, var_5487_int, var_5488_float); // 0x269d NEW_2
	var_5483_int = var_5485_int; // 0x269e Mov
	return 0; // 0x26a0 Return
}


func_12957(var_178_int, var_179_int)
{
	var_180_int = 6; // 0x329e PushI
	var_181_bool = var_179_int == var_180_int; // 0x329f Eq
	if(var_181_bool == 0) goto Label_12964; // 0x32a0 JumpB
	var_178_int = 4; // 0x32a1 MovI
	return 0; // 0x32a2 Return
	
Label_12964:
	var_182_int = 7; // 0x32a4 PushI
	var_183_bool = var_179_int == var_182_int; // 0x32a5 Eq
	if(var_183_bool == 0) goto Label_12970; // 0x32a6 JumpB
	var_178_int = 3; // 0x32a7 MovI
	return 0; // 0x32a8 Return
	
Label_12970:
	var_184_int = 8; // 0x32aa PushI
	var_185_bool = var_179_int == var_184_int; // 0x32ab Eq
	if(var_185_bool == 0) goto Label_12976; // 0x32ac JumpB
	var_178_int = 12; // 0x32ad MovI
	return 0; // 0x32ae Return
	
Label_12976:
	var_186_int = 9; // 0x32b0 PushI
	var_187_bool = var_179_int == var_186_int; // 0x32b1 Eq
	if(var_187_bool == 0) goto Label_12982; // 0x32b2 JumpB
	var_178_int = 5; // 0x32b3 MovI
	return 0; // 0x32b4 Return
	
Label_12982:
	var_188_int = 10; // 0x32b6 PushI
	var_189_bool = var_179_int == var_188_int; // 0x32b7 Eq
	if(var_189_bool == 0) goto Label_12988; // 0x32b8 JumpB
	var_178_int = 9; // 0x32b9 MovI
	return 0; // 0x32ba Return
	
Label_12988:
	var_190_int = 11; // 0x32bc PushI
	var_191_bool = var_179_int == var_190_int; // 0x32bd Eq
	if(var_191_bool == 0) goto Label_12993; // 0x32be JumpB
	var_178_int = 13; // 0x32bf MovI
	return 0; // 0x32c0 Return
	
Label_12993:
	var_178_int = -1; // 0x32c1 MovI
	return 0; // 0x32c2 Return
}


func_10911()
{
	var_4997_int = 0; var_4998_string = ""; // 0x2aa0 PushV
	var_4998_string = "map_chertez_state"; // 0x2aa1 MovS
	func_132(var_4997_int, var_4998_string); // 0x2aa2 NEW_2
	var_4999_int = 5; // 0x2aa4 PushI
	var_5000_bool = var_4997_int <= var_4999_int; // 0x2aa5 LE
	if(var_5000_bool == 0) goto Label_10927; // 0x2aa6 JumpB
	var_5001_string = "map_chertez_state"; // 0x2aa7 PushS
	var_5002_int = 5; // 0x2aa8 PushI
	SetVariable(var_5001_string, var_5002_int); // 0x2aa9 Func
	var_5003_string = "map_chertez_force"; // 0x2aab PushS
	var_5004_int = 1; // 0x2aac PushI
	SetVariable(var_5003_string, var_5004_int); // 0x2aad Func
	
Label_10927:
	return 0; // 0x2aaf Return
}


func_9889(var_5268_int, var_5269_float)
{
	var_5270_int = 0; var_5271_int = 0; var_5272_int = 0; var_5273_float = 0; // 0x26a2 PushV
	var_5271_int = 530568; // 0x26a3 MovI
	var_5272_int = 530567; // 0x26a4 MovI
	var_5273_float = var_5269_float; // 0x26a5 Mov
	func_11409(var_5270_int, var_5271_int, var_5272_int, var_5273_float); // 0x26a6 NEW_2
	var_5268_int = var_5270_int; // 0x26a7 Mov
	return 0; // 0x26a9 Return
}


func_7844()
{
	var_4782_int = 0; var_4783_int = 0; var_4784_object = Obj(); var_4785_int = 0; var_4786_int = 0; var_4787_object = Obj(); // 0x1ea4 PushV
	var_4788_string = "Cleaning arena..."; // 0x1ea5 PushS
	Trace(var_4788_string); // 0x1ea6 Func
	var_4789_object = GlobalVars[11]; // 0x1ea8 PushGE
	var_4790_bool = var_4789_object != 0; // 0x1ea9 NullNeq
	if(var_4790_bool == 0) goto Label_7877; // 0x1eaa JumpB
	var_4791_object = GlobalVars[11]; // 0x1eab PushGE
	Remove(); // 0x1eac ObjFunc
	var_4792_object = GlobalVars[12]; // 0x1eae PushGE
	size(var_4785_int); // 0x1eaf ObjFunc
	var_4786_int = 0; // 0x1eb1 MovI
	
Label_7858:
	var_4793_bool = var_4786_int < var_4785_int; // 0x1eb2 LT
	if(var_4793_bool == 0) goto Label_7870; // 0x1eb3 JumpB
	var_4794_object = GlobalVars[12]; // 0x1eb4 PushGE
	get(var_4787_object, var_4786_int); // 0x1eb5 ObjFunc
	var_4795_string = "remove"; // 0x1eb7 PushS
	Trigger(var_4787_object, var_4795_string); // 0x1eb8 Func
	var_4787_object = 0; // 0x1eba SetNull
	var_4796_int = 1; // 0x1ebb PushI
	var_4786_int = var_4786_int + var_4796_int; // 0x1ebc Add2
	goto Label_7858; // 0x1ebd Jump
	
Label_7870:
	var_4797_object = GlobalVars[12]; // 0x1ebe PushGE
	clear(); // 0x1ebf ObjFunc
	var_4798_bool = 0; // 0x1ec1 PushV
	var_4798_bool = 0; // 0x1ec2 MovB
	func_7773(var_4798_bool); // 0x1ec3 NEW_2
	
Label_7877:
	return 6; // 0x1ec5 Return
}


func_8872()
{
	var_4654_object = Obj(); var_4655_object = Obj(); var_4656_object = Obj(); var_4657_object = Obj(); // 0x22a8 PushV
	GetMainOutdoorScene(var_4656_object); // 0x22a9 Func
	var_4658_string = "big_gun"; // 0x22ab PushS
	var_4659_string = "big_gun.bin"; // 0x22ac PushS
	var_4660_cvector = CVector(0.0, 0.0, 0.0); // 0x22ad PushVec
	AddScriptedActor(var_4657_object, var_4658_string, var_4659_string, var_4656_object, var_4660_cvector); // 0x22ae Func
	var_4661_string = "vagon_martira"; // 0x22b0 PushS
	var_4662_string = "big_gun.bin"; // 0x22b1 PushS
	var_4663_cvector = CVector(0.0, 0.0, 0.0); // 0x22b2 PushVec
	AddScriptedActor(var_4657_object, var_4661_string, var_4662_string, var_4656_object, var_4663_cvector); // 0x22b3 Func
	var_4664_string = "d9q01_trigger_wagon"; // 0x22b5 PushS
	var_4665_string = "quest_d9_01_wagon.bin"; // 0x22b6 PushS
	var_4666_cvector = CVector(0.0, 0.0, 0.0); // 0x22b7 PushVec
	AddScriptedActor(var_4657_object, var_4664_string, var_4665_string, var_4656_object, var_4666_cvector); // 0x22b8 Func
	return 4; // 0x22ba Return
}


func_9898(var_5390_int, var_5391_float)
{
	var_5392_int = 0; var_5393_int = 0; var_5394_int = 0; var_5395_float = 0; // 0x26ab PushV
	var_5393_int = 530570; // 0x26ac MovI
	var_5394_int = 530569; // 0x26ad MovI
	var_5395_float = var_5391_float; // 0x26ae Mov
	func_11409(var_5392_int, var_5393_int, var_5394_int, var_5395_float); // 0x26af NEW_2
	var_5390_int = var_5392_int; // 0x26b0 Mov
	return 0; // 0x26b2 Return
}


func_6831(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object)
{
	var_4069_int = 0; // 0x1ab0 PushI
	var_4070_bool = var_4064_int == var_4069_int; // 0x1ab1 Eq
	if(var_4070_bool == 0) goto Label_6871; // 0x1ab2 JumpB
	var_4071_int = 0; var_4072_bool = 0; // 0x1ab3 PushV
	var_4071_int = 12; // 0x1ab4 MovI
	var_4072_bool = 0; // 0x1ab5 MovB
	func_796(var_4071_int, var_4072_bool); // 0x1ab6 NEW_2
	var_4073_int = 0; var_4074_bool = 0; var_4075_int = 0; // 0x1ab8 PushV
	var_4073_int = 12; // 0x1ab9 MovI
	var_4074_bool = 0; // 0x1aba MovB
	var_4075_int = 1; // 0x1abb MovI
	func_813(var_4073_int, var_4074_bool, var_4075_int); // 0x1abc NEW_2
	var_4076_int = 0; var_4077_int = 0; var_4078_object = Obj(); var_4079_object = Obj(); var_4080_object = Obj(); // 0x1abe PushV
	var_4076_int = 12; // 0x1abf MovI
	var_4077_int = var_4063_int; // 0x1ac0 Mov
	var_4078_object = var_4065_object; // 0x1ac1 Mov
	var_4079_object = var_4066_object; // 0x1ac2 Mov
	var_4080_object = var_4067_object; // 0x1ac3 Mov
	func_720(var_4076_int, var_4077_int, var_4078_object, var_4079_object, var_4080_object); // 0x1ac4 NEW_2
	var_4081_object = Obj(); var_4082_int = 0; // 0x1ac6 PushV
	var_4081_object = var_4068_object; // 0x1ac7 Mov
	var_4082_int = 2; // 0x1ac8 MovI
	func_305(var_4082_int); // 0x1ac9 NEW_2
	var_4083_int = 0; var_4084_bool = 0; var_4085_int = 0; // 0x1acb PushV
	var_4083_int = 12; // 0x1acc MovI
	var_4084_bool = 0; // 0x1acd MovB
	var_4085_int = 4; // 0x1ace MovI
	func_870(var_4083_int, var_4084_bool, var_4085_int); // 0x1acf NEW_2
	var_4086_int = 0; var_4087_bool = 0; var_4088_int = 0; // 0x1ad1 PushV
	var_4086_int = 12; // 0x1ad2 MovI
	var_4087_bool = 1; // 0x1ad3 MovB
	var_4088_int = 4; // 0x1ad4 MovI
	func_932(var_4086_int, var_4087_bool, var_4088_int); // 0x1ad5 NEW_2
	
Label_6871:
	var_4089_int = 0; var_4090_bool = 0; // 0x1ad7 PushV
	var_4089_int = 12; // 0x1ad8 MovI
	var_4090_bool = 0; // 0x1ad9 MovB
	func_779(var_4089_int, var_4090_bool); // 0x1ada NEW_2
	var_4091_int = 0; var_4092_int = 0; var_4093_int = 0; // 0x1adc PushV
	var_4091_int = 12; // 0x1add MovI
	var_4092_int = var_4063_int; // 0x1ade Mov
	var_4093_int = var_4064_int; // 0x1adf Mov
	func_3659(var_4091_int, var_4092_int, var_4093_int); // 0x1ae0 NEW_2
	return 0; // 0x1ae2 Return
}


func_10928()
{
	var_4907_int = 0; var_4908_string = ""; // 0x2ab1 PushV
	var_4908_string = "map_chertez_state"; // 0x2ab2 MovS
	func_132(var_4907_int, var_4908_string); // 0x2ab3 NEW_2
	var_4909_int = 6; // 0x2ab5 PushI
	var_4910_bool = var_4907_int <= var_4909_int; // 0x2ab6 LE
	if(var_4910_bool == 0) goto Label_10944; // 0x2ab7 JumpB
	var_4911_string = "map_chertez_state"; // 0x2ab8 PushS
	var_4912_int = 6; // 0x2ab9 PushI
	SetVariable(var_4911_string, var_4912_int); // 0x2aba Func
	var_4913_string = "map_chertez_force"; // 0x2abc PushS
	var_4914_int = 1; // 0x2abd PushI
	SetVariable(var_4913_string, var_4914_int); // 0x2abe Func
	
Label_10944:
	return 0; // 0x2ac0 Return
}


func_5810(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object)
{
	var_3794_int = 0; // 0x16b3 PushI
	var_3795_bool = var_3789_int == var_3794_int; // 0x16b4 Eq
	if(var_3795_bool == 0) goto Label_5850; // 0x16b5 JumpB
	var_3796_int = 0; var_3797_bool = 0; // 0x16b6 PushV
	var_3796_int = 7; // 0x16b7 MovI
	var_3797_bool = 0; // 0x16b8 MovB
	func_796(var_3796_int, var_3797_bool); // 0x16b9 NEW_2
	var_3798_int = 0; var_3799_bool = 0; var_3800_int = 0; // 0x16bb PushV
	var_3798_int = 7; // 0x16bc MovI
	var_3799_bool = 0; // 0x16bd MovB
	var_3800_int = 1; // 0x16be MovI
	func_813(var_3798_int, var_3799_bool, var_3800_int); // 0x16bf NEW_2
	var_3801_int = 0; var_3802_int = 0; var_3803_object = Obj(); var_3804_object = Obj(); var_3805_object = Obj(); // 0x16c1 PushV
	var_3801_int = 7; // 0x16c2 MovI
	var_3802_int = var_3788_int; // 0x16c3 Mov
	var_3803_object = var_3790_object; // 0x16c4 Mov
	var_3804_object = var_3791_object; // 0x16c5 Mov
	var_3805_object = var_3792_object; // 0x16c6 Mov
	func_720(var_3801_int, var_3802_int, var_3803_object, var_3804_object, var_3805_object); // 0x16c7 NEW_2
	var_3806_object = Obj(); var_3807_int = 0; // 0x16c9 PushV
	var_3806_object = var_3793_object; // 0x16ca Mov
	var_3807_int = 2; // 0x16cb MovI
	func_305(var_3807_int); // 0x16cc NEW_2
	var_3808_int = 0; var_3809_bool = 0; var_3810_int = 0; // 0x16ce PushV
	var_3808_int = 7; // 0x16cf MovI
	var_3809_bool = 0; // 0x16d0 MovB
	var_3810_int = 6; // 0x16d1 MovI
	func_870(var_3808_int, var_3809_bool, var_3810_int); // 0x16d2 NEW_2
	var_3811_int = 0; var_3812_bool = 0; var_3813_int = 0; // 0x16d4 PushV
	var_3811_int = 7; // 0x16d5 MovI
	var_3812_bool = 1; // 0x16d6 MovB
	var_3813_int = 6; // 0x16d7 MovI
	func_932(var_3811_int, var_3812_bool, var_3813_int); // 0x16d8 NEW_2
	
Label_5850:
	var_3814_int = 0; var_3815_bool = 0; // 0x16da PushV
	var_3814_int = 7; // 0x16db MovI
	var_3815_bool = 0; // 0x16dc MovB
	func_779(var_3814_int, var_3815_bool); // 0x16dd NEW_2
	var_3816_int = 0; var_3817_int = 0; var_3818_int = 0; // 0x16df PushV
	var_3816_int = 7; // 0x16e0 MovI
	var_3817_int = var_3788_int; // 0x16e1 Mov
	var_3818_int = var_3789_int; // 0x16e2 Mov
	func_3659(var_3816_int, var_3817_int, var_3818_int); // 0x16e3 NEW_2
	return 0; // 0x16e5 Return
}


func_9907(var_5606_int, var_5607_float)
{
	var_5608_int = 0; var_5609_int = 0; var_5610_int = 0; var_5611_float = 0; // 0x26b4 PushV
	var_5609_int = 527719; // 0x26b5 MovI
	var_5610_int = 527718; // 0x26b6 MovI
	var_5611_float = var_5607_float; // 0x26b7 Mov
	func_11409(var_5608_int, var_5609_int, var_5610_int, var_5611_float); // 0x26b8 NEW_2
	var_5606_int = var_5608_int; // 0x26b9 Mov
	return 0; // 0x26bb Return
}


func_4790(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object)
{
	var_1035_int = 0; // 0x12b7 PushI
	var_1036_bool = var_1030_int == var_1035_int; // 0x12b8 Eq
	if(var_1036_bool == 0) goto Label_4830; // 0x12b9 JumpB
	var_1037_int = 0; var_1038_bool = 0; // 0x12ba PushV
	var_1037_int = 2; // 0x12bb MovI
	var_1038_bool = 0; // 0x12bc MovB
	func_796(var_1037_int, var_1038_bool); // 0x12bd NEW_2
	var_1039_int = 0; var_1040_bool = 0; var_1041_int = 0; // 0x12bf PushV
	var_1039_int = 2; // 0x12c0 MovI
	var_1040_bool = 0; // 0x12c1 MovB
	var_1041_int = 1; // 0x12c2 MovI
	func_813(var_1039_int, var_1040_bool, var_1041_int); // 0x12c3 NEW_2
	var_1042_int = 0; var_1043_int = 0; var_1044_object = Obj(); var_1045_object = Obj(); var_1046_object = Obj(); // 0x12c5 PushV
	var_1042_int = 2; // 0x12c6 MovI
	var_1043_int = var_1029_int; // 0x12c7 Mov
	var_1044_object = var_1031_object; // 0x12c8 Mov
	var_1045_object = var_1032_object; // 0x12c9 Mov
	var_1046_object = var_1033_object; // 0x12ca Mov
	func_622(var_1043_int, var_1044_object, var_1045_object, var_1046_object); // 0x12cb NEW_2
	var_1047_object = Obj(); var_1048_int = 0; // 0x12cd PushV
	var_1047_object = var_1034_object; // 0x12ce Mov
	var_1048_int = 0; // 0x12cf MovI
	func_305(var_1048_int); // 0x12d0 NEW_2
	var_1049_int = 0; var_1050_bool = 0; var_1051_int = 0; // 0x12d2 PushV
	var_1049_int = 2; // 0x12d3 MovI
	var_1050_bool = 0; // 0x12d4 MovB
	var_1051_int = 5; // 0x12d5 MovI
	func_870(var_1049_int, var_1050_bool, var_1051_int); // 0x12d6 NEW_2
	var_1052_int = 0; var_1053_bool = 0; var_1054_int = 0; // 0x12d8 PushV
	var_1052_int = 2; // 0x12d9 MovI
	var_1053_bool = 0; // 0x12da MovB
	var_1054_int = 5; // 0x12db MovI
	func_932(var_1052_int, var_1053_bool, var_1054_int); // 0x12dc NEW_2
	
Label_4830:
	var_1055_int = 0; var_1056_int = 0; // 0x12de PushV
	var_1055_int = 2; // 0x12df MovI
	var_1056_int = var_1030_int; // 0x12e0 Mov
	func_1050(var_1055_int, var_1056_int); // 0x12e1 NEW_2
	var_1057_int = 0; var_1058_int = 0; var_1059_int = 0; // 0x12e3 PushV
	var_1057_int = 2; // 0x12e4 MovI
	var_1058_int = var_1029_int; // 0x12e5 Mov
	var_1059_int = var_1030_int; // 0x12e6 Mov
	func_1897(var_1057_int, var_1058_int, var_1059_int); // 0x12e7 NEW_2
	return 0; // 0x12e9 Return
}


func_9916(var_5198_int, var_5199_float)
{
	var_5200_int = 0; var_5201_int = 0; var_5202_int = 0; var_5203_float = 0; // 0x26bd PushV
	var_5201_int = 530572; // 0x26be MovI
	var_5202_int = 530571; // 0x26bf MovI
	var_5203_float = var_5199_float; // 0x26c0 Mov
	func_11409(var_5200_int, var_5201_int, var_5202_int, var_5203_float); // 0x26c1 NEW_2
	var_5198_int = var_5200_int; // 0x26c2 Mov
	return 0; // 0x26c4 Return
}


func_8893(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_int = 0; var_16_int = 0; // 0x22bd PushV
	var_17_bool = 0; // 0x22be PushV
	var_17_bool = 0; // 0x22bf MovB
	var_18_int = 16384; // 0x22c0 PushI
	var_19_bool = var_3_int > var_18_int; // 0x22c1 GT
	if(var_19_bool == 0) goto Label_8903; // 0x22c2 JumpB
	var_20_int = 16396; // 0x22c3 PushI
	var_21_bool = var_3_int < var_20_int; // 0x22c4 LT
	if(var_21_bool == 0) goto Label_8903; // 0x22c5 JumpB
	var_17_bool = 1; // 0x22c6 MovB
	
Label_8903:
	if(var_17_bool == 0) goto Label_8912; // 0x22c7 JumpB
	var_22_int = 16384; // 0x22c8 PushI
	var_11_int = var_3_int - var_22_int; // 0x22c9 Sub2
	var_23_int = 0; // 0x22ca PushV
	var_23_int = var_11_int; // 0x22cb Mov
	func_13216(var_23_int); // 0x22cc NEW_2
	var_2_bool = 1; // 0x22ce MovB
	return 12; // 0x22cf Return
	
Label_8912:
	var_365_bool = 0; // 0x22d0 PushV
	var_365_bool = 0; // 0x22d1 MovB
	var_366_int = 32768; // 0x22d2 PushI
	var_367_bool = var_3_int > var_366_int; // 0x22d3 GT
	if(var_367_bool == 0) goto Label_8921; // 0x22d4 JumpB
	var_368_int = 33056; // 0x22d5 PushI
	var_369_bool = var_3_int < var_368_int; // 0x22d6 LT
	if(var_369_bool == 0) goto Label_8921; // 0x22d7 JumpB
	var_365_bool = 1; // 0x22d8 MovB
	
Label_8921:
	if(var_365_bool == 0) goto Label_8946; // 0x22d9 JumpB
	var_370_int = 32768; // 0x22da PushI
	var_371_int = var_3_int - var_370_int; // 0x22db Sub
	var_372_int = 24; // 0x22dc PushI
	var_12_int = var_371_int / var_371_int; // 0x22dd Div2
	var_373_int = 32768; // 0x22de PushI
	var_374_int = var_3_int - var_373_int; // 0x22df Sub
	var_375_int = 24; // 0x22e0 PushI
	var_13_int = var_374_int % var_375_int; // 0x22e1 Mod2
	GetGameTime(var_14_float); // 0x22e2 Func
	var_376_int = 24; // 0x22e4 PushI
	var_15_int = var_14_float / var_14_float; // 0x22e5 Div2
	var_16_int = var_14_float; // 0x22e6 Mov
	var_377_int = 24; // 0x22e7 PushI
	var_16_int = var_16_int % var_377_int; // 0x22e8 Mod2
	var_378_int = 0; var_379_int = 0; var_380_int = 0; var_381_int = 0; // 0x22e9 PushV
	var_378_int = var_12_int; // 0x22ea Mov
	var_379_int = var_13_int; // 0x22eb Mov
	var_380_int = var_15_int; // 0x22ec Mov
	var_381_int = var_16_int; // 0x22ed Mov
	func_9031(var_378_int, var_379_int, var_380_int, var_381_int); // 0x22ee NEW_2
	var_2_bool = 1; // 0x22f0 MovB
	return 12; // 0x22f1 Return
	
Label_8946:
	var_2_bool = 0; // 0x22f2 MovB
	return 12; // 0x22f3 Return
}


func_10945()
{
	func_11325(); // 0x2ac3 NEW_2
	return 0; // 0x2ac5 Return
}


func_12995(var_282_int, var_283_int)
{
	var_285_int = 8; // 0x32c4 PushI
	var_286_bool = var_283_int == var_285_int; // 0x32c5 Eq
	if(var_286_bool == 0) goto Label_13002; // 0x32c6 JumpB
	var_282_int = 5; // 0x32c7 MovI
	return 0; // 0x32c8 Return
	
Label_13002:
	var_287_int = 9; // 0x32ca PushI
	var_288_bool = var_283_int == var_287_int; // 0x32cb Eq
	if(var_288_bool == 0) goto Label_13008; // 0x32cc JumpB
	var_282_int = 10; // 0x32cd MovI
	return 0; // 0x32ce Return
	
Label_13008:
	var_289_int = 10; // 0x32d0 PushI
	var_290_bool = var_283_int == var_289_int; // 0x32d1 Eq
	if(var_290_bool == 0) goto Label_13014; // 0x32d2 JumpB
	var_282_int = 3; // 0x32d3 MovI
	return 0; // 0x32d4 Return
	
Label_13014:
	var_291_int = 11; // 0x32d6 PushI
	var_292_bool = var_283_int == var_291_int; // 0x32d7 Eq
	if(var_292_bool == 0) goto Label_13019; // 0x32d8 JumpB
	var_282_int = 1; // 0x32d9 MovI
	return 0; // 0x32da Return
	
Label_13019:
	var_282_int = -1; // 0x32db MovI
	return 0; // 0x32dc Return
}


func_9925(var_4865_int, var_4866_float)
{
	var_4867_int = 0; var_4868_int = 0; var_4869_int = 0; var_4870_float = 0; // 0x26c6 PushV
	var_4868_int = 542478; // 0x26c7 MovI
	var_4869_int = 542477; // 0x26c8 MovI
	var_4870_float = var_4866_float; // 0x26c9 Mov
	func_11409(var_4867_int, var_4868_int, var_4869_int, var_4870_float); // 0x26ca NEW_2
	var_4865_int = var_4867_int; // 0x26cb Mov
	return 0; // 0x26cd Return
}


func_7878()
{
	var_322_object = Obj(); var_323_int = 0; var_324_object = Obj(); var_325_int = 0; // 0x1ec6 PushV
	GetMainOutdoorScene(var_324_object); // 0x1ec7 Func
	var_325_int = 1; // 0x1ec9 MovI
	
Label_7882:
	var_326_int = 17; // 0x1eca PushI
	var_327_bool = var_325_int <= var_326_int; // 0x1ecb LE
	if(var_327_bool == 0) goto Label_7899; // 0x1ecc JumpB
	var_328_object = GlobalVars[15]; // 0x1ecd PushGE
	var_329_object = Obj(); var_330_object = Obj(); var_331_string = ""; var_332_string = ""; var_333_string = ""; // 0x1ece PushV
	var_330_object = var_324_object; // 0x1ecf Mov
	var_334_string = "pt_bull"; // 0x1ed0 PushS
	var_331_string = var_334_string + var_325_int; // 0x1ed1 Add2
	var_332_string = "pers_bull"; // 0x1ed2 MovS
	var_333_string = "bull.xml"; // 0x1ed3 MovS
	func_159(var_330_object, var_331_string, var_332_string, var_333_string); // 0x1ed4 NEW_2
	add(var_329_object); // 0x1ed6 ObjFunc
	var_348_int = 1; // 0x1ed8 PushI
	var_325_int = var_325_int + var_348_int; // 0x1ed9 Add2
	goto Label_7882; // 0x1eda Jump
	
Label_7899:
	return 4; // 0x1edb Return
}


func_10950()
{
	var_5027_int = 0; var_5028_string = ""; // 0x2ac7 PushV
	var_5028_string = "K_Mission5"; // 0x2ac8 MovS
	func_132(var_5027_int, var_5028_string); // 0x2ac9 NEW_2
	var_5029_int = 0; // 0x2acb PushI
	var_5030_bool = var_5027_int == var_5029_int; // 0x2acc Eq
	if(var_5030_bool == 0) goto Label_10981; // 0x2acd JumpB
	var_5031_string = "K_Mission5"; // 0x2ace PushS
	var_5032_int = 1; // 0x2acf PushI
	SetVariable(var_5031_string, var_5032_int); // 0x2ad0 Func
	func_11338(); // 0x2ad3 NEW_2
	var_5056_bool = 0; var_5057_int = 0; // 0x2ad5 PushV
	var_5057_int = 567; // 0x2ad6 MovI
	func_11392(var_5056_bool, var_5057_int); // 0x2ad7 NEW_2
	var_5064_bool = 0; var_5065_int = 0; // 0x2ad9 PushV
	var_5065_int = 568; // 0x2ada MovI
	func_11392(var_5064_bool, var_5065_int); // 0x2adb NEW_2
	var_5066_bool = 0; var_5067_int = 0; // 0x2add PushV
	var_5067_int = 569; // 0x2ade MovI
	func_11392(var_5066_bool, var_5067_int); // 0x2adf NEW_2
	var_5068_bool = 0; var_5069_int = 0; // 0x2ae1 PushV
	var_5069_int = 570; // 0x2ae2 MovI
	func_11392(var_5068_bool, var_5069_int); // 0x2ae3 NEW_2
	
Label_10981:
	return 0; // 0x2ae5 Return
}


func_2764(var_2690_int, var_2691_int, var_2692_int)
{
	var_2693_int = 0; var_2694_int = 0; var_2695_int = 0; var_2696_int = 0; // 0xacc PushV
	var_2697_bool = 0; // 0xacd PushV
	var_2697_bool = 0; // 0xace MovB
	var_2698_int = 8; // 0xacf PushI
	var_2699_bool = var_2692_int > var_2698_int; // 0xad0 GT
	if(var_2699_bool == 0) goto Label_2774; // 0xad1 JumpB
	var_2700_int = 21; // 0xad2 PushI
	var_2701_bool = var_2692_int < var_2700_int; // 0xad3 LT
	if(var_2701_bool == 0) goto Label_2774; // 0xad4 JumpB
	var_2697_bool = 1; // 0xad5 MovB
	
Label_2774:
	if(var_2697_bool == 0) goto Label_2829; // 0xad6 JumpB
	var_2702_int = 0; var_2703_string = ""; var_2704_string = ""; var_2705_int = 0; // 0xad7 PushV
	var_2702_int = var_2690_int; // 0xad8 Mov
	var_2703_string = "pers_vaxxabit"; // 0xad9 MovS
	var_2704_string = "vaxxabit_d.xml"; // 0xada MovS
	var_2705_int = 6; // 0xadb MovI
	func_503(var_2702_int, var_2703_string, var_2704_string, var_2705_int); // 0xadc NEW_2
	var_2706_int = 0; var_2707_string = ""; var_2708_string = ""; var_2709_int = 0; // 0xade PushV
	var_2706_int = var_2690_int; // 0xadf Mov
	var_2707_string = "pers_vaxxabitka"; // 0xae0 MovS
	var_2708_string = "vaxxabitka_d.xml"; // 0xae1 MovS
	var_2709_int = 5; // 0xae2 MovI
	func_503(var_2706_int, var_2707_string, var_2708_string, var_2709_int); // 0xae3 NEW_2
	var_2710_int = 0; var_2711_string = ""; var_2712_string = ""; var_2713_int = 0; // 0xae5 PushV
	var_2710_int = var_2690_int; // 0xae6 Mov
	var_2711_string = "pers_rat_big"; // 0xae7 MovS
	var_2712_string = "rat_big.xml"; // 0xae8 MovS
	var_2713_int = 2; // 0xae9 MovI
	func_503(var_2710_int, var_2711_string, var_2712_string, var_2713_int); // 0xaea NEW_2
	var_2714_int = 0; var_2715_string = ""; var_2716_string = ""; var_2717_int = 0; // 0xaec PushV
	var_2714_int = var_2690_int; // 0xaed Mov
	var_2715_string = "fog"; // 0xaee MovS
	var_2716_string = "fog.xml"; // 0xaef MovS
	var_2717_int = 6; // 0xaf0 MovI
	func_529(var_2714_int, var_2715_string, var_2716_string, var_2717_int); // 0xaf1 NEW_2
	var_2718_int = 5; // 0xaf3 PushI
	var_2719_bool = var_2691_int >= var_2718_int; // 0xaf4 GE
	if(var_2719_bool == 0) goto Label_2813; // 0xaf5 JumpB
	var_2720_int = 0; var_2721_string = ""; var_2722_string = ""; var_2723_int = 0; // 0xaf6 PushV
	var_2720_int = var_2690_int; // 0xaf7 Mov
	var_2721_string = "fog"; // 0xaf8 MovS
	var_2722_string = "fog_hunter.xml"; // 0xaf9 MovS
	var_2723_int = 2; // 0xafa MovI
	func_529(var_2720_int, var_2721_string, var_2722_string, var_2723_int); // 0xafb NEW_2
	
Label_2813:
	var_2724_int = 1; // 0xafd PushI
	var_2725_float = 0; var_2726_int = 0; // 0xafe PushV
	var_2726_int = var_2691_int; // 0xaff Mov
	func_1255(var_2725_float, var_2726_int); // 0xb00 NEW_2
	var_2695_int = var_2724_int * var_2725_float; // 0xb02 Mult2
	var_2727_int = var_2695_int; // 0xb03 Push
	if(var_2727_int == 0) goto Label_2828; // 0xb04 JumpB
	var_2728_int = 0; var_2729_string = ""; var_2730_string = ""; var_2731_int = 0; // 0xb05 PushV
	var_2728_int = var_2690_int; // 0xb06 Mov
	var_2729_string = "pers_bomber"; // 0xb07 MovS
	var_2730_string = "bomber.xml"; // 0xb08 MovS
	var_2731_int = var_2695_int; // 0xb09 Mov
	func_503(var_2728_int, var_2729_string, var_2730_string, var_2731_int); // 0xb0a NEW_2
	
Label_2828:
	goto Label_2882; // 0xb0c Jump
	
Label_2882:
	var_2732_int = 0; var_2733_string = ""; var_2734_string = ""; var_2735_int = 0; var_2736_int = 0; var_2737_int = 0; // 0xb42 PushV
	var_2732_int = var_2690_int; // 0xb43 Mov
	var_2733_string = "pers_worker"; // 0xb44 MovS
	var_2734_string = "agony1_man.xml"; // 0xb45 MovS
	var_2735_int = 2; // 0xb46 MovI
	var_2736_int = 4; // 0xb47 MovI
	var_2737_int = 4; // 0xb48 MovI
	func_516(var_2732_int, var_2733_string, var_2734_string, var_2735_int, var_2736_int, var_2737_int); // 0xb49 NEW_2
	var_2738_int = 0; var_2739_string = ""; var_2740_string = ""; var_2741_int = 0; var_2742_int = 0; var_2743_int = 0; // 0xb4b PushV
	var_2738_int = var_2690_int; // 0xb4c Mov
	var_2739_string = "pers_unosha"; // 0xb4d MovS
	var_2740_string = "agony1_man.xml"; // 0xb4e MovS
	var_2741_int = 2; // 0xb4f MovI
	var_2742_int = 4; // 0xb50 MovI
	var_2743_int = 4; // 0xb51 MovI
	func_516(var_2738_int, var_2739_string, var_2740_string, var_2741_int, var_2742_int, var_2743_int); // 0xb52 NEW_2
	var_2744_int = 0; var_2745_string = ""; var_2746_string = ""; var_2747_int = 0; var_2748_int = 0; var_2749_int = 0; // 0xb54 PushV
	var_2744_int = var_2690_int; // 0xb55 Mov
	var_2745_string = "pers_woman"; // 0xb56 MovS
	var_2746_string = "agony1_woman.xml"; // 0xb57 MovS
	var_2747_int = 2; // 0xb58 MovI
	var_2748_int = 4; // 0xb59 MovI
	var_2749_int = 4; // 0xb5a MovI
	func_516(var_2744_int, var_2745_string, var_2746_string, var_2747_int, var_2748_int, var_2749_int); // 0xb5b NEW_2
	var_2750_int = 0; var_2751_string = ""; var_2752_string = ""; var_2753_int = 0; var_2754_int = 0; var_2755_int = 0; // 0xb5d PushV
	var_2750_int = var_2690_int; // 0xb5e Mov
	var_2751_string = "pers_wasted_girl"; // 0xb5f MovS
	var_2752_string = "agony1_woman.xml"; // 0xb60 MovS
	var_2753_int = 2; // 0xb61 MovI
	var_2754_int = 4; // 0xb62 MovI
	var_2755_int = 4; // 0xb63 MovI
	func_516(var_2750_int, var_2751_string, var_2752_string, var_2753_int, var_2754_int, var_2755_int); // 0xb64 NEW_2
	var_2756_bool = 0; var_2757_int = 0; var_2758_int = 0; // 0xb66 PushV
	var_2757_int = var_2691_int; // 0xb67 Mov
	var_2758_int = var_2692_int; // 0xb68 Mov
	func_1345(var_2756_bool, var_2757_int, var_2758_int); // 0xb69 NEW_2
	if(var_2756_bool == 0) goto Label_2931; // 0xb6b JumpB
	var_2759_int = 0; var_2760_string = ""; var_2761_string = ""; var_2762_int = 0; // 0xb6c PushV
	var_2759_int = var_2690_int; // 0xb6d Mov
	var_2760_string = "pers_soldat"; // 0xb6e MovS
	var_2761_string = "soldier_marauder.xml"; // 0xb6f MovS
	var_2762_int = 2; // 0xb70 MovI
	func_503(var_2759_int, var_2760_string, var_2761_string, var_2762_int); // 0xb71 NEW_2
	
Label_2931:
	var_2763_bool = 0; var_2764_int = 0; // 0xb73 PushV
	var_2764_int = var_2691_int; // 0xb74 Mov
	func_1372(var_2763_bool, var_2764_int); // 0xb75 NEW_2
	if(var_2763_bool == 0) goto Label_2943; // 0xb77 JumpB
	var_2765_int = 0; var_2766_string = ""; var_2767_string = ""; var_2768_int = 0; // 0xb78 PushV
	var_2765_int = var_2690_int; // 0xb79 Mov
	var_2766_string = "pers_sanitar"; // 0xb7a MovS
	var_2767_string = "sanitar.xml"; // 0xb7b MovS
	var_2768_int = 1; // 0xb7c MovI
	func_503(var_2765_int, var_2766_string, var_2767_string, var_2768_int); // 0xb7d NEW_2
	
Label_2943:
	return 4; // 0xb7f Return
	
Label_2829:
	var_2769_int = 0; var_2770_string = ""; var_2771_string = ""; var_2772_int = 0; // 0xb0d PushV
	var_2769_int = var_2690_int; // 0xb0e Mov
	var_2770_string = "pers_vaxxabit"; // 0xb0f MovS
	var_2771_string = "vaxxabit_d.xml"; // 0xb10 MovS
	var_2772_int = 4; // 0xb11 MovI
	func_503(var_2769_int, var_2770_string, var_2771_string, var_2772_int); // 0xb12 NEW_2
	var_2773_int = 0; var_2774_string = ""; var_2775_string = ""; var_2776_int = 0; // 0xb14 PushV
	var_2773_int = var_2690_int; // 0xb15 Mov
	var_2774_string = "pers_vaxxabitka"; // 0xb16 MovS
	var_2775_string = "vaxxabitka_d.xml"; // 0xb17 MovS
	var_2776_int = 4; // 0xb18 MovI
	func_503(var_2773_int, var_2774_string, var_2775_string, var_2776_int); // 0xb19 NEW_2
	var_2777_int = 0; var_2778_string = ""; var_2779_string = ""; var_2780_int = 0; // 0xb1b PushV
	var_2777_int = var_2690_int; // 0xb1c Mov
	var_2778_string = "pers_rat_big"; // 0xb1d MovS
	var_2779_string = "rat_big.xml"; // 0xb1e MovS
	var_2780_int = 3; // 0xb1f MovI
	func_503(var_2777_int, var_2778_string, var_2779_string, var_2780_int); // 0xb20 NEW_2
	var_2781_int = 0; var_2782_string = ""; var_2783_string = ""; var_2784_int = 0; // 0xb22 PushV
	var_2781_int = var_2690_int; // 0xb23 Mov
	var_2782_string = "fog"; // 0xb24 MovS
	var_2783_string = "fog.xml"; // 0xb25 MovS
	var_2784_int = 6; // 0xb26 MovI
	func_529(var_2781_int, var_2782_string, var_2783_string, var_2784_int); // 0xb27 NEW_2
	var_2785_int = 5; // 0xb29 PushI
	var_2786_bool = var_2691_int >= var_2785_int; // 0xb2a GE
	if(var_2786_bool == 0) goto Label_2867; // 0xb2b JumpB
	var_2787_int = 0; var_2788_string = ""; var_2789_string = ""; var_2790_int = 0; // 0xb2c PushV
	var_2787_int = var_2690_int; // 0xb2d Mov
	var_2788_string = "fog"; // 0xb2e MovS
	var_2789_string = "fog_hunter.xml"; // 0xb2f MovS
	var_2790_int = 2; // 0xb30 MovI
	func_529(var_2787_int, var_2788_string, var_2789_string, var_2790_int); // 0xb31 NEW_2
	
Label_2867:
	var_2791_int = 1; // 0xb33 PushI
	var_2792_float = 0; var_2793_int = 0; // 0xb34 PushV
	var_2793_int = var_2691_int; // 0xb35 Mov
	func_1255(var_2792_float, var_2793_int); // 0xb36 NEW_2
	var_2696_int = var_2791_int * var_2792_float; // 0xb38 Mult2
	var_2794_int = var_2696_int; // 0xb39 Push
	if(var_2794_int == 0) goto Label_2882; // 0xb3a JumpB
	var_2795_int = 0; var_2796_string = ""; var_2797_string = ""; var_2798_int = 0; // 0xb3b PushV
	var_2795_int = var_2690_int; // 0xb3c Mov
	var_2796_string = "pers_bomber"; // 0xb3d MovS
	var_2797_string = "bomber.xml"; // 0xb3e MovS
	var_2798_int = var_2696_int; // 0xb3f Mov
	func_503(var_2795_int, var_2796_string, var_2797_string, var_2798_int); // 0xb40 NEW_2
}


func_9934(var_5300_int, var_5301_float)
{
	var_5302_int = 0; var_5303_int = 0; var_5304_int = 0; var_5305_float = 0; // 0x26cf PushV
	var_5303_int = 530574; // 0x26d0 MovI
	var_5304_int = 530573; // 0x26d1 MovI
	var_5305_float = var_5301_float; // 0x26d2 Mov
	func_11409(var_5302_int, var_5303_int, var_5304_int, var_5305_float); // 0x26d3 NEW_2
	var_5300_int = var_5302_int; // 0x26d4 Mov
	return 0; // 0x26d6 Return
}


func_720(var_3199_int, var_3200_int, var_3201_object, var_3202_object, var_3203_object)
{
	var_3204_int = 0; var_3205_bool = 0; // 0x2d1 PushV
	var_3204_int = var_3199_int; // 0x2d2 Mov
	var_3205_bool = 0; // 0x2d3 MovB
	func_542(var_3204_int, var_3205_bool); // 0x2d4 NEW_2
	var_3206_object = Obj(); // 0x2d6 PushV
	var_3206_object = var_3201_object; // 0x2d7 Mov
	func_263(var_3206_object); // 0x2d8 NEW_2
	var_3207_object = Obj(); // 0x2da PushV
	var_3207_object = var_3202_object; // 0x2db Mov
	func_263(var_3207_object); // 0x2dc NEW_2
	var_3208_object = Obj(); // 0x2de PushV
	var_3208_object = var_3203_object; // 0x2df Mov
	func_263(var_3208_object); // 0x2e0 NEW_2
	var_3209_int = 8; // 0x2e2 PushI
	var_3210_bool = var_3200_int < var_3209_int; // 0x2e3 LT
	if(var_3210_bool == 0) goto Label_754; // 0x2e4 JumpB
	var_3211_string = ""; var_3212_object = Obj(); var_3213_string = ""; var_3214_string = ""; // 0x2e5 PushV
	var_3215_string = "pt_blockpost"; // 0x2e6 PushS
	var_3216_int = 1; // 0x2e7 PushI
	var_3217_int = var_3199_int + var_3216_int; // 0x2e8 Add
	var_3218_int = var_3215_string + var_3217_int; // 0x2e9 Add
	var_3219_string = "_1_"; // 0x2ea PushS
	var_3211_string = var_3218_int + var_3219_string; // 0x2eb Add2
	var_3212_object = var_3201_object; // 0x2ec Mov
	var_3213_string = "pers_patrool"; // 0x2ed MovS
	var_3214_string = "patrol_stat.xml"; // 0x2ee MovS
	func_576(var_3212_object, var_3213_string, var_3214_string); // 0x2ef NEW_2
	goto Label_778; // 0x2f1 Jump
	
Label_778:
	return 0; // 0x30a Return
	
Label_754:
	var_3220_string = ""; var_3221_object = Obj(); var_3222_string = ""; var_3223_string = ""; // 0x2f2 PushV
	var_3224_string = "pt_blockpost"; // 0x2f3 PushS
	var_3225_int = 1; // 0x2f4 PushI
	var_3226_int = var_3199_int + var_3225_int; // 0x2f5 Add
	var_3227_int = var_3224_string + var_3226_int; // 0x2f6 Add
	var_3228_string = "_1_"; // 0x2f7 PushS
	var_3220_string = var_3227_int + var_3228_string; // 0x2f8 Add2
	var_3221_object = var_3201_object; // 0x2f9 Mov
	var_3222_string = "pers_soldat"; // 0x2fa MovS
	var_3223_string = "soldier.xml"; // 0x2fb MovS
	func_576(var_3221_object, var_3222_string, var_3223_string); // 0x2fc NEW_2
	var_3229_string = ""; var_3230_object = Obj(); var_3231_string = ""; var_3232_string = ""; // 0x2fe PushV
	var_3233_string = "pt_blockpost"; // 0x2ff PushS
	var_3234_int = 1; // 0x300 PushI
	var_3235_int = var_3199_int + var_3234_int; // 0x301 Add
	var_3236_int = var_3233_string + var_3235_int; // 0x302 Add
	var_3237_string = "_2_"; // 0x303 PushS
	var_3229_string = var_3236_int + var_3237_string; // 0x304 Add2
	var_3230_object = var_3202_object; // 0x305 Mov
	var_3231_string = "pers_sanitar"; // 0x306 MovS
	var_3232_string = "sanitar_stat.xml"; // 0x307 MovS
	func_576(var_3230_object, var_3231_string, var_3232_string); // 0x308 NEW_2
}


func_9943(var_4849_int, var_4850_float)
{
	var_4851_int = 0; var_4852_int = 0; var_4853_int = 0; var_4854_float = 0; // 0x26d8 PushV
	var_4852_int = 530266; // 0x26d9 MovI
	var_4853_int = 530265; // 0x26da MovI
	var_4854_float = var_4850_float; // 0x26db Mov
	func_11409(var_4851_int, var_4852_int, var_4853_int, var_4854_float); // 0x26dc NEW_2
	var_4849_int = var_4851_int; // 0x26dd Mov
	return 0; // 0x26df Return
}


func_7901()
{
	var_4696_object = Obj(); // 0x1edd PushV
	var_4697_object = GlobalVars[15]; // 0x1ede PushGE
	var_4696_object = var_4697_object; // 0x1edf Mov
	func_263(var_4696_object); // 0x1ee1 NEW_2
	return 0; // 0x1ee3 Return
}


func_13021(var_265_int, var_266_int)
{
	var_268_int = 8; // 0x32de PushI
	var_269_bool = var_266_int == var_268_int; // 0x32df Eq
	if(var_269_bool == 0) goto Label_13028; // 0x32e0 JumpB
	var_265_int = 11; // 0x32e1 MovI
	return 0; // 0x32e2 Return
	
Label_13028:
	var_270_int = 9; // 0x32e4 PushI
	var_271_bool = var_266_int == var_270_int; // 0x32e5 Eq
	if(var_271_bool == 0) goto Label_13034; // 0x32e6 JumpB
	var_265_int = 2; // 0x32e7 MovI
	return 0; // 0x32e8 Return
	
Label_13034:
	var_272_int = 10; // 0x32ea PushI
	var_273_bool = var_266_int == var_272_int; // 0x32eb Eq
	if(var_273_bool == 0) goto Label_13040; // 0x32ec JumpB
	var_265_int = 7; // 0x32ed MovI
	return 0; // 0x32ee Return
	
Label_13040:
	var_274_int = 11; // 0x32f0 PushI
	var_275_bool = var_266_int == var_274_int; // 0x32f1 Eq
	if(var_275_bool == 0) goto Label_13045; // 0x32f2 JumpB
	var_265_int = 15; // 0x32f3 MovI
	return 0; // 0x32f4 Return
	
Label_13045:
	var_265_int = -1; // 0x32f5 MovI
	return 0; // 0x32f6 Return
}


func_9952(var_4881_int, var_4882_float)
{
	var_4883_int = 0; var_4884_int = 0; var_4885_int = 0; var_4886_float = 0; // 0x26e1 PushV
	var_4884_int = 542793; // 0x26e2 MovI
	var_4885_int = 542792; // 0x26e3 MovI
	var_4886_float = var_4882_float; // 0x26e4 Mov
	func_11409(var_4883_int, var_4884_int, var_4885_int, var_4886_float); // 0x26e5 NEW_2
	var_4881_int = var_4883_int; // 0x26e6 Mov
	return 0; // 0x26e8 Return
}


func_6883()
{
	var_281_string = "r7_house2_01"; // 0x1ae4 PushS
	add(var_281_string); // 0x1ae5 ObjFunc
	var_282_string = "r7_house2_02"; // 0x1ae7 PushS
	add(var_282_string); // 0x1ae8 ObjFunc
	var_283_string = "r7_house2_03"; // 0x1aea PushS
	add(var_283_string); // 0x1aeb ObjFunc
	var_284_string = "r7_house2_04"; // 0x1aed PushS
	add(var_284_string); // 0x1aee ObjFunc
	var_285_string = "r7_house3_03_i2"; // 0x1af0 PushS
	add(var_285_string); // 0x1af1 ObjFunc
	var_286_string = "r7_house3_03"; // 0x1af3 PushS
	add(var_286_string); // 0x1af4 ObjFunc
	var_287_string = "r7_house3_04_i2"; // 0x1af6 PushS
	add(var_287_string); // 0x1af7 ObjFunc
	var_288_string = "r7_house3_04"; // 0x1af9 PushS
	add(var_288_string); // 0x1afa ObjFunc
	var_289_string = "r7_house3_05_i2"; // 0x1afc PushS
	add(var_289_string); // 0x1afd ObjFunc
	var_290_string = "r7_house3_05"; // 0x1aff PushS
	add(var_290_string); // 0x1b00 ObjFunc
	var_291_string = "r7_house3_06_i2"; // 0x1b02 PushS
	add(var_291_string); // 0x1b03 ObjFunc
	var_292_string = "r7_house3_01_i2"; // 0x1b05 PushS
	add(var_292_string); // 0x1b06 ObjFunc
	var_293_string = "r7_house3_01"; // 0x1b08 PushS
	add(var_293_string); // 0x1b09 ObjFunc
	var_294_string = "r7_house3_02_i2"; // 0x1b0b PushS
	add(var_294_string); // 0x1b0c ObjFunc
	var_295_string = "r7_house3_02"; // 0x1b0e PushS
	add(var_295_string); // 0x1b0f ObjFunc
	return 0; // 0x1b11 Return
}


func_7908()
{
	var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); // 0x1ee4 PushV
	var_39_object = GlobalVars[15]; // 0x1ee5 PushGE
	var_40_object = Obj(); // 0x1ee6 PushV
	func_126(var_40_object); // 0x1ee7 NEW_2
	var_39_object = var_40_object; // 0x1ee8 Mov
	GlobalVars[15] = var_39_object; // 0x1eea PopGE
	var_43_object = GlobalVars[13]; // 0x1eeb PushGE
	var_44_object = Obj(); // 0x1eec PushV
	func_126(var_44_object); // 0x1eed NEW_2
	var_43_object = var_44_object; // 0x1eee Mov
	GlobalVars[13] = var_43_object; // 0x1ef0 PopGE
	var_45_object = GlobalVars[8]; // 0x1ef1 PushGE
	var_46_object = Obj(); // 0x1ef2 PushV
	func_126(var_46_object); // 0x1ef3 NEW_2
	var_45_object = var_46_object; // 0x1ef4 Mov
	GlobalVars[8] = var_45_object; // 0x1ef6 PopGE
	var_47_object = GlobalVars[9]; // 0x1ef7 PushGE
	var_48_object = Obj(); // 0x1ef8 PushV
	func_126(var_48_object); // 0x1ef9 NEW_2
	var_47_object = var_48_object; // 0x1efa Mov
	GlobalVars[9] = var_47_object; // 0x1efc PopGE
	var_49_object = GlobalVars[10]; // 0x1efd PushGE
	var_50_object = Obj(); // 0x1efe PushV
	func_126(var_50_object); // 0x1eff NEW_2
	var_49_object = var_50_object; // 0x1f00 Mov
	GlobalVars[10] = var_49_object; // 0x1f02 PopGE
	var_29_int = 0; // 0x1f03 MovI
	
Label_7940:
	var_51_int = 16; // 0x1f04 PushI
	var_52_bool = var_29_int < var_51_int; // 0x1f05 LT
	if(var_52_bool == 0) goto Label_7964; // 0x1f06 JumpB
	var_53_object = GlobalVars[8]; // 0x1f07 PushGE
	var_54_object = Obj(); // 0x1f08 PushV
	func_126(var_54_object); // 0x1f09 NEW_2
	add(var_54_object); // 0x1f0b ObjFunc
	var_55_object = GlobalVars[9]; // 0x1f0d PushGE
	var_56_object = Obj(); // 0x1f0e PushV
	func_126(var_56_object); // 0x1f0f NEW_2
	add(var_56_object); // 0x1f11 ObjFunc
	var_57_object = GlobalVars[10]; // 0x1f13 PushGE
	var_58_object = Obj(); // 0x1f14 PushV
	func_126(var_58_object); // 0x1f15 NEW_2
	add(var_58_object); // 0x1f17 ObjFunc
	var_59_int = 1; // 0x1f19 PushI
	var_29_int = var_29_int + var_59_int; // 0x1f1a Add2
	goto Label_7940; // 0x1f1b Jump
	
Label_7964:
	CreateStringVector(var_30_object); // 0x1f1c Func
	var_60_object = GlobalVars[13]; // 0x1f1e PushGE
	add(var_30_object); // 0x1f1f ObjFunc
	var_61_object = Obj(); // 0x1f21 PushV
	var_61_object = var_30_object; // 0x1f22 Mov
	func_4385(); // 0x1f23 NEW_2
	CreateStringVector(var_30_object); // 0x1f25 Func
	var_62_object = GlobalVars[13]; // 0x1f27 PushGE
	add(var_30_object); // 0x1f28 ObjFunc
	var_63_object = Obj(); // 0x1f2a PushV
	var_63_object = var_30_object; // 0x1f2b Mov
	func_4543(); // 0x1f2c NEW_2
	CreateStringVector(var_30_object); // 0x1f2e Func
	var_77_object = GlobalVars[13]; // 0x1f30 PushGE
	add(var_30_object); // 0x1f31 ObjFunc
	var_78_object = Obj(); // 0x1f33 PushV
	var_78_object = var_30_object; // 0x1f34 Mov
	func_4740(); // 0x1f35 NEW_2
	CreateStringVector(var_30_object); // 0x1f37 Func
	var_95_object = GlobalVars[13]; // 0x1f39 PushGE
	add(var_30_object); // 0x1f3a ObjFunc
	var_96_object = Obj(); // 0x1f3c PushV
	var_96_object = var_30_object; // 0x1f3d Mov
	func_4946(); // 0x1f3e NEW_2
	CreateStringVector(var_30_object); // 0x1f40 Func
	var_121_object = GlobalVars[13]; // 0x1f42 PushGE
	add(var_30_object); // 0x1f43 ObjFunc
	var_122_object = Obj(); // 0x1f45 PushV
	var_122_object = var_30_object; // 0x1f46 Mov
	func_5176(); // 0x1f47 NEW_2
	CreateStringVector(var_30_object); // 0x1f49 Func
	var_143_object = GlobalVars[13]; // 0x1f4b PushGE
	add(var_30_object); // 0x1f4c ObjFunc
	var_144_object = Obj(); // 0x1f4e PushV
	var_144_object = var_30_object; // 0x1f4f Mov
	func_5394(); // 0x1f50 NEW_2
	CreateStringVector(var_30_object); // 0x1f52 Func
	var_174_object = GlobalVars[13]; // 0x1f54 PushGE
	add(var_30_object); // 0x1f55 ObjFunc
	var_175_object = Obj(); // 0x1f57 PushV
	var_175_object = var_30_object; // 0x1f58 Mov
	func_5639(); // 0x1f59 NEW_2
	CreateStringVector(var_30_object); // 0x1f5b Func
	var_176_object = GlobalVars[13]; // 0x1f5d PushGE
	add(var_30_object); // 0x1f5e ObjFunc
	var_177_object = Obj(); // 0x1f60 PushV
	var_177_object = var_30_object; // 0x1f61 Mov
	func_5662(); // 0x1f62 NEW_2
	CreateStringVector(var_30_object); // 0x1f64 Func
	var_192_object = GlobalVars[13]; // 0x1f66 PushGE
	add(var_30_object); // 0x1f67 ObjFunc
	var_193_object = Obj(); // 0x1f69 PushV
	var_193_object = var_30_object; // 0x1f6a Mov
	func_5862(); // 0x1f6b NEW_2
	CreateStringVector(var_30_object); // 0x1f6d Func
	var_208_object = GlobalVars[13]; // 0x1f6f PushGE
	add(var_30_object); // 0x1f70 ObjFunc
	var_209_object = Obj(); // 0x1f72 PushV
	var_209_object = var_30_object; // 0x1f73 Mov
	func_6062(); // 0x1f74 NEW_2
	CreateStringVector(var_30_object); // 0x1f76 Func
	var_225_object = GlobalVars[13]; // 0x1f78 PushGE
	add(var_30_object); // 0x1f79 ObjFunc
	var_226_object = Obj(); // 0x1f7b PushV
	var_226_object = var_30_object; // 0x1f7c Mov
	func_6265(); // 0x1f7d NEW_2
	CreateStringVector(var_30_object); // 0x1f7f Func
	var_244_object = GlobalVars[13]; // 0x1f81 PushGE
	add(var_30_object); // 0x1f82 ObjFunc
	var_245_object = Obj(); // 0x1f84 PushV
	var_245_object = var_30_object; // 0x1f85 Mov
	func_6474(); // 0x1f86 NEW_2
	CreateStringVector(var_30_object); // 0x1f88 Func
	var_264_object = GlobalVars[13]; // 0x1f8a PushGE
	add(var_30_object); // 0x1f8b ObjFunc
	var_265_object = Obj(); // 0x1f8d PushV
	var_265_object = var_30_object; // 0x1f8e Mov
	func_6686(); // 0x1f8f NEW_2
	CreateStringVector(var_30_object); // 0x1f91 Func
	var_279_object = GlobalVars[13]; // 0x1f93 PushGE
	add(var_30_object); // 0x1f94 ObjFunc
	var_280_object = Obj(); // 0x1f96 PushV
	var_280_object = var_30_object; // 0x1f97 Mov
	func_6883(); // 0x1f98 NEW_2
	CreateStringVector(var_30_object); // 0x1f9a Func
	var_296_object = GlobalVars[13]; // 0x1f9c PushGE
	add(var_30_object); // 0x1f9d ObjFunc
	var_297_object = Obj(); // 0x1f9f PushV
	var_297_object = var_30_object; // 0x1fa0 Mov
	func_7086(); // 0x1fa1 NEW_2
	CreateStringVector(var_30_object); // 0x1fa3 Func
	var_312_object = GlobalVars[13]; // 0x1fa5 PushGE
	add(var_30_object); // 0x1fa6 ObjFunc
	var_313_object = Obj(); // 0x1fa8 PushV
	var_313_object = var_30_object; // 0x1fa9 Mov
	func_7286(); // 0x1faa NEW_2
	func_7878(); // 0x1fad NEW_2
	GetMainOutdoorScene(var_31_object); // 0x1faf Func
	var_349_object = GlobalVars[6]; // 0x1fb1 PushGE
	var_350_object = Obj(); // 0x1fb2 PushV
	func_126(var_350_object); // 0x1fb3 NEW_2
	var_349_object = var_350_object; // 0x1fb4 Mov
	GlobalVars[6] = var_349_object; // 0x1fb6 PopGE
	var_32_int = 0; // 0x1fb7 MovI
	
Label_8120:
	var_351_string = "pt_plant"; // 0x1fb8 PushS
	var_352_int = 1; // 0x1fb9 PushI
	var_353_int = var_32_int + var_352_int; // 0x1fba Add
	var_354_int = var_351_string + var_353_int; // 0x1fbb Add
	GetLocator(var_354_int, var_33_bool); // 0x1fbc ObjFunc
	var_355_bool = var_33_bool == 0; // 0x1fbe Not
	if(var_355_bool == 0) goto Label_8129; // 0x1fbf JumpB
	goto Label_8132; // 0x1fc0 Jump
	
Label_8132:
	var_356_object = GlobalVars[6]; // 0x1fc4 PushGE
	resize(var_32_int); // 0x1fc5 ObjFunc
	var_357_string = "Total plants: "; // 0x1fc7 PushS
	var_358_int = var_357_string + var_32_int; // 0x1fc8 Add
	Trace(var_358_int); // 0x1fc9 Func
	var_359_object = GlobalVars[7]; // 0x1fcb PushGE
	var_360_object = Obj(); // 0x1fcc PushV
	func_126(var_360_object); // 0x1fcd NEW_2
	var_359_object = var_360_object; // 0x1fce Mov
	GlobalVars[7] = var_359_object; // 0x1fd0 PopGE
	var_34_int = 0; // 0x1fd1 MovI
	
Label_8146:
	var_361_string = "pt_grave_supply"; // 0x1fd2 PushS
	var_362_int = 1; // 0x1fd3 PushI
	var_363_int = var_34_int + var_362_int; // 0x1fd4 Add
	var_364_int = var_361_string + var_363_int; // 0x1fd5 Add
	GetLocator(var_364_int, var_35_bool); // 0x1fd6 ObjFunc
	var_365_bool = var_35_bool == 0; // 0x1fd8 Not
	if(var_365_bool == 0) goto Label_8155; // 0x1fd9 JumpB
	goto Label_8158; // 0x1fda Jump
	
Label_8158:
	var_366_object = GlobalVars[7]; // 0x1fde PushGE
	resize(var_34_int); // 0x1fdf ObjFunc
	var_367_string = "Total grave supplies: "; // 0x1fe1 PushS
	var_368_int = var_367_string + var_34_int; // 0x1fe2 Add
	Trace(var_368_int); // 0x1fe3 Func
	var_369_object = GlobalVars[14]; // 0x1fe5 PushGE
	var_370_object = Obj(); // 0x1fe6 PushV
	func_126(var_370_object); // 0x1fe7 NEW_2
	var_369_object = var_370_object; // 0x1fe8 Mov
	GlobalVars[14] = var_369_object; // 0x1fea PopGE
	var_36_int = 0; // 0x1feb MovI
	
Label_8172:
	var_371_string = "pt_bonfire"; // 0x1fec PushS
	var_372_int = 1; // 0x1fed PushI
	var_373_int = var_36_int + var_372_int; // 0x1fee Add
	var_374_int = var_371_string + var_373_int; // 0x1fef Add
	GetLocator(var_374_int, var_37_bool); // 0x1ff0 ObjFunc
	var_375_bool = var_37_bool == 0; // 0x1ff2 Not
	if(var_375_bool == 0) goto Label_8181; // 0x1ff3 JumpB
	goto Label_8193; // 0x1ff4 Jump
	
Label_8193:
	var_376_string = "Total bonfires: "; // 0x2001 PushS
	var_377_int = var_376_string + var_36_int; // 0x2002 Add
	Trace(var_377_int); // 0x2003 Func
	return 20; // 0x2005 Return
	
Label_8181:
	var_38_object = 0; // 0x1ff5 SetNull
	var_378_object = GlobalVars[14]; // 0x1ff6 PushGE
	add(var_38_object); // 0x1ff7 ObjFunc
	var_379_int = 0; // 0x1ff9 PushV
	var_379_int = var_36_int; // 0x1ffa Mov
	func_7685(var_379_int); // 0x1ffb NEW_2
	var_38_object = 0; // 0x1ffd SetNull
	var_414_int = 1; // 0x1ffe PushI
	var_36_int = var_36_int + var_414_int; // 0x1fff Add2
	goto Label_8172; // 0x2000 Jump
	
Label_8155:
	var_415_int = 1; // 0x1fdb PushI
	var_34_int = var_34_int + var_415_int; // 0x1fdc Add2
	goto Label_8146; // 0x1fdd Jump
	
Label_8129:
	var_416_int = 1; // 0x1fc1 PushI
	var_32_int = var_32_int + var_416_int; // 0x1fc2 Add2
	goto Label_8120; // 0x1fc3 Jump
}


func_5862()
{
	var_194_string = "r2_house_2_01"; // 0x16e7 PushS
	add(var_194_string); // 0x16e8 ObjFunc
	var_195_string = "r2_house_2_02"; // 0x16ea PushS
	add(var_195_string); // 0x16eb ObjFunc
	var_196_string = "r2_house_2_03"; // 0x16ed PushS
	add(var_196_string); // 0x16ee ObjFunc
	var_197_string = "r2_house7_02"; // 0x16f0 PushS
	add(var_197_string); // 0x16f1 ObjFunc
	var_198_string = "r2_house01_01"; // 0x16f3 PushS
	add(var_198_string); // 0x16f4 ObjFunc
	var_199_string = "r2_house7_01"; // 0x16f6 PushS
	add(var_199_string); // 0x16f7 ObjFunc
	var_200_string = "r2_house3_01_i2"; // 0x16f9 PushS
	add(var_200_string); // 0x16fa ObjFunc
	var_201_string = "r2_house3_01"; // 0x16fc PushS
	add(var_201_string); // 0x16fd ObjFunc
	var_202_string = "r2_house3_02_i2"; // 0x16ff PushS
	add(var_202_string); // 0x1700 ObjFunc
	var_203_string = "r2_house3_02"; // 0x1702 PushS
	add(var_203_string); // 0x1703 ObjFunc
	var_204_string = "r2_house3_03_i2"; // 0x1705 PushS
	add(var_204_string); // 0x1706 ObjFunc
	var_205_string = "r2_house3_03"; // 0x1708 PushS
	add(var_205_string); // 0x1709 ObjFunc
	var_206_string = "r3_house7_01"; // 0x170b PushS
	add(var_206_string); // 0x170c ObjFunc
	var_207_string = "r3_house7_02"; // 0x170e PushS
	add(var_207_string); // 0x170f ObjFunc
	return 0; // 0x1711 Return
}


func_10982()
{
	var_4700_string = ""; var_4701_bool = 0; // 0x2ae7 PushV
	var_4700_string = "cot_georg@door1"; // 0x2ae8 MovS
	var_4701_bool = 0; // 0x2ae9 MovB
	func_177(var_4700_string, var_4701_bool); // 0x2aea NEW_2
	var_4710_string = ""; var_4711_bool = 0; // 0x2aec PushV
	var_4710_string = "cot_georg@door2"; // 0x2aed MovS
	var_4711_bool = 0; // 0x2aee MovB
	func_177(var_4710_string, var_4711_bool); // 0x2aef NEW_2
	return 0; // 0x2af1 Return
}


func_9961(var_5347_int, var_5348_float)
{
	var_5349_int = 0; var_5350_int = 0; var_5351_int = 0; var_5352_float = 0; // 0x26ea PushV
	var_5350_int = 538944; // 0x26eb MovI
	var_5351_int = 538943; // 0x26ec MovI
	var_5352_float = var_5348_float; // 0x26ed Mov
	func_11409(var_5349_int, var_5350_int, var_5351_int, var_5352_float); // 0x26ee NEW_2
	var_5347_int = var_5349_int; // 0x26ef Mov
	return 0; // 0x26f1 Return
}


func_4842(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object)
{
	var_2413_int = 0; // 0x12eb PushI
	var_2414_bool = var_2408_int == var_2413_int; // 0x12ec Eq
	if(var_2414_bool == 0) goto Label_4882; // 0x12ed JumpB
	var_2415_int = 0; var_2416_bool = 0; // 0x12ee PushV
	var_2415_int = 2; // 0x12ef MovI
	var_2416_bool = 1; // 0x12f0 MovB
	func_796(var_2415_int, var_2416_bool); // 0x12f1 NEW_2
	var_2417_int = 0; var_2418_bool = 0; var_2419_int = 0; // 0x12f3 PushV
	var_2417_int = 2; // 0x12f4 MovI
	var_2418_bool = 1; // 0x12f5 MovB
	var_2419_int = 1; // 0x12f6 MovI
	func_813(var_2417_int, var_2418_bool, var_2419_int); // 0x12f7 NEW_2
	var_2420_int = 0; var_2421_int = 0; var_2422_object = Obj(); var_2423_object = Obj(); var_2424_object = Obj(); // 0x12f9 PushV
	var_2420_int = 2; // 0x12fa MovI
	var_2421_int = var_2407_int; // 0x12fb Mov
	var_2422_object = var_2409_object; // 0x12fc Mov
	var_2423_object = var_2410_object; // 0x12fd Mov
	var_2424_object = var_2411_object; // 0x12fe Mov
	func_641(var_2420_int, var_2421_int, var_2422_object, var_2423_object, var_2424_object); // 0x12ff NEW_2
	var_2425_object = Obj(); var_2426_int = 0; // 0x1301 PushV
	var_2425_object = var_2412_object; // 0x1302 Mov
	var_2426_int = 1; // 0x1303 MovI
	func_305(var_2426_int); // 0x1304 NEW_2
	var_2427_int = 0; var_2428_bool = 0; var_2429_int = 0; // 0x1306 PushV
	var_2427_int = 2; // 0x1307 MovI
	var_2428_bool = 1; // 0x1308 MovB
	var_2429_int = 5; // 0x1309 MovI
	func_870(var_2427_int, var_2428_bool, var_2429_int); // 0x130a NEW_2
	var_2430_int = 0; var_2431_bool = 0; var_2432_int = 0; // 0x130c PushV
	var_2430_int = 2; // 0x130d MovI
	var_2431_bool = 0; // 0x130e MovB
	var_2432_int = 5; // 0x130f MovI
	func_932(var_2430_int, var_2431_bool, var_2432_int); // 0x1310 NEW_2
	
Label_4882:
	var_2433_int = 0; var_2434_bool = 0; // 0x1312 PushV
	var_2433_int = 2; // 0x1313 MovI
	var_2434_bool = 0; // 0x1314 MovB
	func_779(var_2433_int, var_2434_bool); // 0x1315 NEW_2
	var_2435_int = 0; var_2436_int = 0; var_2437_int = 0; // 0x1317 PushV
	var_2435_int = 2; // 0x1318 MovI
	var_2436_int = var_2407_int; // 0x1319 Mov
	var_2437_int = var_2408_int; // 0x131a Mov
	func_2944(var_2435_int, var_2436_int, var_2437_int); // 0x131b NEW_2
	return 0; // 0x131d Return
}


func_9970(var_5216_int, var_5217_float)
{
	var_5218_int = 0; var_5219_int = 0; var_5220_int = 0; var_5221_float = 0; // 0x26f3 PushV
	var_5219_int = 538946; // 0x26f4 MovI
	var_5220_int = 538945; // 0x26f5 MovI
	var_5221_float = var_5217_float; // 0x26f6 Mov
	func_11409(var_5218_int, var_5219_int, var_5220_int, var_5221_float); // 0x26f7 NEW_2
	var_5216_int = var_5218_int; // 0x26f8 Mov
	return 0; // 0x26fa Return
}


func_10994(var_5859_object)
{
	var_5863_bool = 0; var_5864_object = Obj(); var_5865_float = 0; // 0x2af3 PushV
	var_5864_object = var_5859_object; // 0x2af4 Mov
	var_5865_float = -0.1; // 0x2af5 MovF
	func_194(var_5863_bool, var_5864_object, var_5865_float); // 0x2af6 NEW_2
	return 0; // 0x2af8 Return
}


func_8948()
{
	var_417_float = 0; var_418_int = 0; var_419_int = 0; var_420_float = 0; var_421_int = 0; var_422_object = Obj(); var_423_object = Obj(); var_424_float = 0; var_425_int = 0; var_426_int = 0; var_427_float = 0; var_428_int = 0; var_429_object = Obj(); var_430_object = Obj(); // 0x22f4 PushV
	GetGameTime(var_424_float); // 0x22f5 Func
	var_425_int = 1; // 0x22f7 MovI
	
Label_8952:
	var_431_int = 12; // 0x22f8 PushI
	var_432_bool = var_425_int < var_431_int; // 0x22f9 LT
	if(var_432_bool == 0) goto Label_8964; // 0x22fa JumpB
	var_433_int = 16384; // 0x22fb PushI
	var_434_int = var_433_int + var_425_int; // 0x22fc Add
	var_435_int = 24; // 0x22fd PushI
	var_436_float = var_435_int * var_425_int; // 0x22fe Mult
	SetTimeEvent(var_434_int, var_436_float); // 0x22ff Func
	var_437_int = 1; // 0x2301 PushI
	var_425_int = var_425_int + var_437_int; // 0x2302 Add2
	goto Label_8952; // 0x2303 Jump
	
Label_8964:
	var_426_int = 0; // 0x2304 MovI
	
Label_8965:
	var_438_int = 288; // 0x2305 PushI
	var_439_bool = var_426_int < var_438_int; // 0x2306 LT
	if(var_439_bool == 0) goto Label_8979; // 0x2307 JumpB
	var_427_float = var_426_int; // 0x2308 Mov
	var_440_bool = var_427_float < var_424_float; // 0x2309 LT
	if(var_440_bool == 0) goto Label_8972; // 0x230a JumpB
	goto Label_8976; // 0x230b Jump
	
Label_8976:
	var_441_int = 1; // 0x2310 PushI
	var_426_int = var_426_int + var_441_int; // 0x2311 Add2
	goto Label_8965; // 0x2312 Jump
	
Label_8972:
	var_442_int = 32768; // 0x230c PushI
	var_443_int = var_442_int + var_426_int; // 0x230d Add
	SetTimeEvent(var_443_int, var_427_float); // 0x230e Func
	
Label_8979:
	var_428_int = 0; // 0x2313 MovI
	
Label_8980:
	var_444_int = 16; // 0x2314 PushI
	var_445_bool = var_428_int < var_444_int; // 0x2315 LT
	if(var_445_bool == 0) goto Label_8998; // 0x2316 JumpB
	var_446_string = ""; var_447_int = 0; // 0x2317 PushV
	var_447_int = var_428_int; // 0x2318 Mov
	func_299(var_446_string, var_447_int); // 0x2319 NEW_2
	var_451_int = 0; // 0x231b PushI
	SetVariable(var_446_string, var_451_int); // 0x231c Func
	var_452_int = 0; var_453_bool = 0; // 0x231e PushV
	var_452_int = var_428_int; // 0x231f Mov
	var_453_bool = 0; // 0x2320 MovB
	func_796(var_452_int, var_453_bool); // 0x2321 NEW_2
	var_463_int = 1; // 0x2323 PushI
	var_428_int = var_428_int + var_463_int; // 0x2324 Add2
	goto Label_8980; // 0x2325 Jump
	
Label_8998:
	var_464_int = 0; var_465_int = 0; var_466_int = 0; var_467_int = 0; // 0x2326 PushV
	var_464_int = 0; // 0x2327 MovI
	var_468_int = 24; // 0x2328 PushI
	var_465_int = var_424_float % var_468_int; // 0x2329 Mod2
	var_466_int = 0; // 0x232a MovI
	var_469_int = 24; // 0x232b PushI
	var_467_int = var_424_float % var_469_int; // 0x232c Mod2
	func_9031(var_464_int, var_465_int, var_466_int, var_467_int); // 0x232d NEW_2
	var_4400_string = "dt_house_1_07"; // 0x232f PushS
	FindActor(var_429_object, var_4400_string); // 0x2330 Func
	var_4401_int = 200; // 0x2332 PushI
	var_4402_bool = 0; // 0x2333 PushB
	EnableSubset(var_4401_int, var_4402_bool); // 0x2334 ObjFunc
	GetMainOutdoorScene(var_430_object); // 0x2336 Func
	var_4403_int = 0; // 0x2338 PushI
	var_4404_bool = 0; // 0x2339 PushV
	var_4404_bool = 1; // 0x233a MovB
	var_4405_int = 7; // 0x233b PushI
	var_4406_bool = var_424_float < var_4405_int; // 0x233c LT
	if(var_4406_bool == 0) goto Label_9026; // 0x233d JumpB
	var_4407_int = 20; // 0x233e PushI
	var_4408_bool = var_424_float >= var_4407_int; // 0x233f GE
	if(var_4408_bool == 0) goto Label_9026; // 0x2340 JumpB
	var_4404_bool = 0; // 0x2341 MovB
	
Label_9026:
	SwitchLights(var_4403_int, var_4404_bool); // 0x2342 ObjFunc
	return 14; // 0x2344 Return
}


func_13047(var_4336_string, var_4337_int)
{
	var_4339_int = 8; // 0x32f8 PushI
	var_4340_bool = var_4337_int == var_4339_int; // 0x32f9 Eq
	if(var_4340_bool == 0) goto Label_13054; // 0x32fa JumpB
	var_4336_string = "house5_unoin_solidl"; // 0x32fb MovS
	return 0; // 0x32fc Return
	
Label_13054:
	var_4341_int = 9; // 0x32fe PushI
	var_4342_bool = var_4337_int == var_4341_int; // 0x32ff Eq
	if(var_4342_bool == 0) goto Label_13060; // 0x3300 JumpB
	var_4336_string = "r4_house4_02_i2"; // 0x3301 MovS
	return 0; // 0x3302 Return
	
Label_13060:
	var_4343_int = 10; // 0x3304 PushI
	var_4344_bool = var_4337_int == var_4343_int; // 0x3305 Eq
	if(var_4344_bool == 0) goto Label_13066; // 0x3306 JumpB
	var_4336_string = "dt_house1_union2_01r"; // 0x3307 MovS
	return 0; // 0x3308 Return
	
Label_13066:
	var_4345_int = 11; // 0x330a PushI
	var_4346_bool = var_4337_int == var_4345_int; // 0x330b Eq
	if(var_4346_bool == 0) goto Label_13071; // 0x330c JumpB
	var_4336_string = "dt_house_1_03"; // 0x330d MovS
	return 0; // 0x330e Return
	
Label_13071:
	var_4336_string = ""; // 0x330f MovS
	return 0; // 0x3310 Return
}


func_11001()
{
	var_4722_string = ""; var_4723_bool = 0; // 0x2afa PushV
	var_4722_string = "termitnik@door1"; // 0x2afb MovS
	var_4723_bool = 1; // 0x2afc MovB
	func_177(var_4722_string, var_4723_bool); // 0x2afd NEW_2
	return 0; // 0x2aff Return
}


func_9979(var_5249_int, var_5250_float)
{
	var_5251_int = 0; var_5252_int = 0; var_5253_int = 0; var_5254_float = 0; // 0x26fc PushV
	var_5252_int = 538954; // 0x26fd MovI
	var_5253_int = 538953; // 0x26fe MovI
	var_5254_float = var_5250_float; // 0x26ff Mov
	func_11409(var_5251_int, var_5252_int, var_5253_int, var_5254_float); // 0x2700 NEW_2
	var_5249_int = var_5251_int; // 0x2701 Mov
	return 0; // 0x2703 Return
}


func_11008()
{
	var_5098_string = "resque_list"; // 0x2b01 PushS
	var_5099_int = 1; // 0x2b02 PushI
	SetVariable(var_5098_string, var_5099_int); // 0x2b03 Func
	func_12899(); // 0x2b06 NEW_2
	return 0; // 0x2b08 Return
}


func_9988(var_5398_int, var_5399_float)
{
	var_5400_int = 0; var_5401_int = 0; var_5402_int = 0; var_5403_float = 0; // 0x2705 PushV
	var_5401_int = 538948; // 0x2706 MovI
	var_5402_int = 538947; // 0x2707 MovI
	var_5403_float = var_5399_float; // 0x2708 Mov
	func_11409(var_5400_int, var_5401_int, var_5402_int, var_5403_float); // 0x2709 NEW_2
	var_5398_int = var_5400_int; // 0x270a Mov
	return 0; // 0x270c Return
}


func_3847(var_3564_int, var_3565_int, var_3566_int)
{
	var_3567_int = 0; var_3568_int = 0; var_3569_int = 0; var_3570_int = 0; var_3571_int = 0; var_3572_int = 0; var_3573_int = 0; var_3574_int = 0; // 0xf07 PushV
	var_3575_bool = 0; // 0xf08 PushV
	var_3575_bool = 0; // 0xf09 MovB
	var_3576_int = 8; // 0xf0a PushI
	var_3577_bool = var_3566_int > var_3576_int; // 0xf0b GT
	if(var_3577_bool == 0) goto Label_3857; // 0xf0c JumpB
	var_3578_int = 21; // 0xf0d PushI
	var_3579_bool = var_3566_int < var_3578_int; // 0xf0e LT
	if(var_3579_bool == 0) goto Label_3857; // 0xf0f JumpB
	var_3575_bool = 1; // 0xf10 MovB
	
Label_3857:
	if(var_3575_bool == 0) goto Label_3934; // 0xf11 JumpB
	var_3580_int = 0; var_3581_string = ""; var_3582_string = ""; var_3583_int = 0; // 0xf12 PushV
	var_3580_int = var_3564_int; // 0xf13 Mov
	var_3581_string = "pers_rat"; // 0xf14 MovS
	var_3582_string = "rat.xml"; // 0xf15 MovS
	var_3583_int = 2; // 0xf16 MovI
	func_503(var_3580_int, var_3581_string, var_3582_string, var_3583_int); // 0xf17 NEW_2
	var_3584_int = 0; var_3585_string = ""; var_3586_string = ""; var_3587_int = 0; // 0xf19 PushV
	var_3584_int = var_3564_int; // 0xf1a Mov
	var_3585_string = "pers_alkash"; // 0xf1b MovS
	var_3586_string = "alkash.xml"; // 0xf1c MovS
	var_3587_int = 2; // 0xf1d MovI
	func_503(var_3584_int, var_3585_string, var_3586_string, var_3587_int); // 0xf1e NEW_2
	var_3588_int = 0; var_3589_string = ""; var_3590_string = ""; var_3591_int = 0; // 0xf20 PushV
	var_3588_int = var_3564_int; // 0xf21 Mov
	var_3589_string = "pers_dohodyaga"; // 0xf22 MovS
	var_3590_string = "dohodyaga.xml"; // 0xf23 MovS
	var_3591_int = 1; // 0xf24 MovI
	func_503(var_3588_int, var_3589_string, var_3590_string, var_3591_int); // 0xf25 NEW_2
	var_3592_int = 2; // 0xf27 PushI
	var_3593_float = 0; var_3594_int = 0; // 0xf28 PushV
	var_3594_int = var_3565_int; // 0xf29 Mov
	func_1165(var_3593_float, var_3594_int); // 0xf2a NEW_2
	var_3571_int = var_3592_int * var_3593_float; // 0xf2c Mult2
	var_3595_int = var_3571_int; // 0xf2d Push
	if(var_3595_int == 0) goto Label_3894; // 0xf2e JumpB
	var_3596_int = 0; var_3597_string = ""; var_3598_string = ""; var_3599_int = 0; // 0xf2f PushV
	var_3596_int = var_3564_int; // 0xf30 Mov
	var_3597_string = "pers_grabitel"; // 0xf31 MovS
	var_3598_string = "grabitel.xml"; // 0xf32 MovS
	var_3599_int = var_3571_int; // 0xf33 Mov
	func_503(var_3596_int, var_3597_string, var_3598_string, var_3599_int); // 0xf34 NEW_2
	
Label_3894:
	var_3600_int = 1; // 0xf36 PushI
	var_3601_int = var_3565_int + var_3600_int; // 0xf37 Add
	var_3602_int = 2; // 0xf38 PushI
	var_3603_bool = var_3601_int >= var_3602_int; // 0xf39 GE
	if(var_3603_bool == 0) goto Label_3918; // 0xf3a JumpB
	var_3604_int = 0; var_3605_string = ""; var_3606_string = ""; var_3607_int = 0; // 0xf3b PushV
	var_3604_int = var_3564_int; // 0xf3c Mov
	var_3605_string = "pers_patrool"; // 0xf3d MovS
	var_3606_string = "patrol.xml"; // 0xf3e MovS
	var_3607_int = 2; // 0xf3f MovI
	func_503(var_3604_int, var_3605_string, var_3606_string, var_3607_int); // 0xf40 NEW_2
	var_3608_bool = 0; var_3609_int = 0; // 0xf42 PushV
	var_3609_int = var_3565_int; // 0xf43 Mov
	func_1372(var_3608_bool, var_3609_int); // 0xf44 NEW_2
	if(var_3608_bool == 0) goto Label_3918; // 0xf46 JumpB
	var_3610_int = 0; var_3611_string = ""; var_3612_string = ""; var_3613_int = 0; // 0xf47 PushV
	var_3610_int = var_3564_int; // 0xf48 Mov
	var_3611_string = "pers_soldat_hand"; // 0xf49 MovS
	var_3612_string = "soldier_patrol.xml"; // 0xf4a MovS
	var_3613_int = 1; // 0xf4b MovI
	func_503(var_3610_int, var_3611_string, var_3612_string, var_3613_int); // 0xf4c NEW_2
	
Label_3918:
	var_3614_int = 1; // 0xf4e PushI
	var_3615_float = 0; var_3616_int = 0; // 0xf4f PushV
	var_3616_int = var_3565_int; // 0xf50 Mov
	func_1255(var_3615_float, var_3616_int); // 0xf51 NEW_2
	var_3572_int = var_3614_int * var_3615_float; // 0xf53 Mult2
	var_3617_int = var_3572_int; // 0xf54 Push
	if(var_3617_int == 0) goto Label_3933; // 0xf55 JumpB
	var_3618_int = 0; var_3619_string = ""; var_3620_string = ""; var_3621_int = 0; // 0xf56 PushV
	var_3618_int = var_3564_int; // 0xf57 Mov
	var_3619_string = "pers_bomber"; // 0xf58 MovS
	var_3620_string = "bomber.xml"; // 0xf59 MovS
	var_3621_int = var_3572_int; // 0xf5a Mov
	func_503(var_3618_int, var_3619_string, var_3620_string, var_3621_int); // 0xf5b NEW_2
	
Label_3933:
	goto Label_4009; // 0xf5d Jump
	
Label_4009:
	var_3622_bool = 0; var_3623_int = 0; var_3624_int = 0; // 0xfa9 PushV
	var_3623_int = var_3565_int; // 0xfaa Mov
	var_3624_int = var_3566_int; // 0xfab Mov
	func_1345(var_3622_bool, var_3623_int, var_3624_int); // 0xfac NEW_2
	if(var_3622_bool == 0) goto Label_4022; // 0xfae JumpB
	var_3625_int = 0; var_3626_string = ""; var_3627_string = ""; var_3628_int = 0; // 0xfaf PushV
	var_3625_int = var_3564_int; // 0xfb0 Mov
	var_3626_string = "pers_soldat"; // 0xfb1 MovS
	var_3627_string = "soldier_marauder.xml"; // 0xfb2 MovS
	var_3628_int = 2; // 0xfb3 MovI
	func_503(var_3625_int, var_3626_string, var_3627_string, var_3628_int); // 0xfb4 NEW_2
	
Label_4022:
	var_3629_bool = 0; var_3630_int = 0; // 0xfb6 PushV
	var_3630_int = var_3565_int; // 0xfb7 Mov
	func_1372(var_3629_bool, var_3630_int); // 0xfb8 NEW_2
	if(var_3629_bool == 0) goto Label_4034; // 0xfba JumpB
	var_3631_int = 0; var_3632_string = ""; var_3633_string = ""; var_3634_int = 0; // 0xfbb PushV
	var_3631_int = var_3564_int; // 0xfbc Mov
	var_3632_string = "pers_sanitar"; // 0xfbd MovS
	var_3633_string = "sanitar.xml"; // 0xfbe MovS
	var_3634_int = 1; // 0xfbf MovI
	func_503(var_3631_int, var_3632_string, var_3633_string, var_3634_int); // 0xfc0 NEW_2
	
Label_4034:
	return 8; // 0xfc2 Return
	
Label_3934:
	var_3635_int = 0; var_3636_string = ""; var_3637_string = ""; var_3638_int = 0; // 0xf5e PushV
	var_3635_int = var_3564_int; // 0xf5f Mov
	var_3636_string = "pers_rat"; // 0xf60 MovS
	var_3637_string = "rat.xml"; // 0xf61 MovS
	var_3638_int = 4; // 0xf62 MovI
	func_503(var_3635_int, var_3636_string, var_3637_string, var_3638_int); // 0xf63 NEW_2
	var_3639_int = 0; var_3640_string = ""; var_3641_string = ""; var_3642_int = 0; // 0xf65 PushV
	var_3639_int = var_3564_int; // 0xf66 Mov
	var_3640_string = "pers_alkash"; // 0xf67 MovS
	var_3641_string = "alkash.xml"; // 0xf68 MovS
	var_3642_int = 1; // 0xf69 MovI
	func_503(var_3639_int, var_3640_string, var_3641_string, var_3642_int); // 0xf6a NEW_2
	var_3643_int = 0; var_3644_string = ""; var_3645_string = ""; var_3646_int = 0; // 0xf6c PushV
	var_3643_int = var_3564_int; // 0xf6d Mov
	var_3644_string = "pers_dohodyaga"; // 0xf6e MovS
	var_3645_string = "dohodyaga.xml"; // 0xf6f MovS
	var_3646_int = 1; // 0xf70 MovI
	func_503(var_3643_int, var_3644_string, var_3645_string, var_3646_int); // 0xf71 NEW_2
	var_3647_int = 3; // 0xf73 PushI
	var_3648_float = 0; var_3649_int = 0; // 0xf74 PushV
	var_3649_int = var_3565_int; // 0xf75 Mov
	func_1165(var_3648_float, var_3649_int); // 0xf76 NEW_2
	var_3573_int = var_3647_int * var_3648_float; // 0xf78 Mult2
	var_3650_int = var_3573_int; // 0xf79 Push
	if(var_3650_int == 0) goto Label_3970; // 0xf7a JumpB
	var_3651_int = 0; var_3652_string = ""; var_3653_string = ""; var_3654_int = 0; // 0xf7b PushV
	var_3651_int = var_3564_int; // 0xf7c Mov
	var_3652_string = "pers_grabitel"; // 0xf7d MovS
	var_3653_string = "grabitel.xml"; // 0xf7e MovS
	var_3654_int = var_3573_int; // 0xf7f Mov
	func_503(var_3651_int, var_3652_string, var_3653_string, var_3654_int); // 0xf80 NEW_2
	
Label_3970:
	var_3655_int = 1; // 0xf82 PushI
	var_3656_int = var_3565_int + var_3655_int; // 0xf83 Add
	var_3657_int = 2; // 0xf84 PushI
	var_3658_bool = var_3656_int >= var_3657_int; // 0xf85 GE
	if(var_3658_bool == 0) goto Label_3994; // 0xf86 JumpB
	var_3659_int = 0; var_3660_string = ""; var_3661_string = ""; var_3662_int = 0; // 0xf87 PushV
	var_3659_int = var_3564_int; // 0xf88 Mov
	var_3660_string = "pers_patrool"; // 0xf89 MovS
	var_3661_string = "patrol.xml"; // 0xf8a MovS
	var_3662_int = 1; // 0xf8b MovI
	func_503(var_3659_int, var_3660_string, var_3661_string, var_3662_int); // 0xf8c NEW_2
	var_3663_bool = 0; var_3664_int = 0; // 0xf8e PushV
	var_3664_int = var_3565_int; // 0xf8f Mov
	func_1372(var_3663_bool, var_3664_int); // 0xf90 NEW_2
	if(var_3663_bool == 0) goto Label_3994; // 0xf92 JumpB
	var_3665_int = 0; var_3666_string = ""; var_3667_string = ""; var_3668_int = 0; // 0xf93 PushV
	var_3665_int = var_3564_int; // 0xf94 Mov
	var_3666_string = "pers_soldat_hand"; // 0xf95 MovS
	var_3667_string = "soldier_patrol.xml"; // 0xf96 MovS
	var_3668_int = 1; // 0xf97 MovI
	func_503(var_3665_int, var_3666_string, var_3667_string, var_3668_int); // 0xf98 NEW_2
	
Label_3994:
	var_3669_int = 1; // 0xf9a PushI
	var_3670_float = 0; var_3671_int = 0; // 0xf9b PushV
	var_3671_int = var_3565_int; // 0xf9c Mov
	func_1255(var_3670_float, var_3671_int); // 0xf9d NEW_2
	var_3574_int = var_3669_int * var_3670_float; // 0xf9f Mult2
	var_3672_int = var_3574_int; // 0xfa0 Push
	if(var_3672_int == 0) goto Label_4009; // 0xfa1 JumpB
	var_3673_int = 0; var_3674_string = ""; var_3675_string = ""; var_3676_int = 0; // 0xfa2 PushV
	var_3673_int = var_3564_int; // 0xfa3 Mov
	var_3674_string = "pers_bomber"; // 0xfa4 MovS
	var_3675_string = "bomber.xml"; // 0xfa5 MovS
	var_3676_int = var_3574_int; // 0xfa6 Mov
	func_503(var_3673_int, var_3674_string, var_3675_string, var_3676_int); // 0xfa7 NEW_2
}


func_11017()
{
	var_4746_string = ""; var_4747_bool = 0; // 0x2b0a PushV
	var_4746_string = "mnogogrannik@door1"; // 0x2b0b MovS
	var_4747_bool = 1; // 0x2b0c MovB
	func_177(var_4746_string, var_4747_bool); // 0x2b0d NEW_2
	return 0; // 0x2b0f Return
}


func_779(var_737_int, var_738_bool)
{
	var_739_object = Obj(); var_740_int = 0; var_741_object = Obj(); var_742_int = 0; // 0x30b PushV
	GetMainOutdoorScene(var_741_object); // 0x30c Func
	var_743_bool = var_741_object == 0; // 0x30e NullEq
	if(var_743_bool == 0) goto Label_788; // 0x30f JumpB
	var_744_string = "City manager: Can't find main outdoor scene"; // 0x310 PushS
	Trace(var_744_string); // 0x311 Func
	return 4; // 0x313 Return
	
Label_788:
	var_745_int = 1; // 0x314 PushI
	var_742_int = var_737_int + var_745_int; // 0x315 Add2
	var_746_int = 100; // 0x316 PushI
	var_747_bool = 1; // 0x317 PushB
	EnableSubsets(var_742_int, var_746_int, var_738_bool, var_747_bool); // 0x318 ObjFunc
	return 4; // 0x31a Return
}


func_9997(var_5185_int, var_5186_float)
{
	var_5187_int = 0; var_5188_int = 0; var_5189_int = 0; var_5190_float = 0; // 0x270e PushV
	var_5188_int = 538950; // 0x270f MovI
	var_5189_int = 538949; // 0x2710 MovI
	var_5190_float = var_5186_float; // 0x2711 Mov
	func_11409(var_5187_int, var_5188_int, var_5189_int, var_5190_float); // 0x2712 NEW_2
	var_5185_int = var_5187_int; // 0x2713 Mov
	return 0; // 0x2715 Return
}


func_11024(var_4873_bool)
{
	var_4876_int = 0; var_4877_string = ""; // 0x2b11 PushV
	var_4877_string = "k12DankoVisit"; // 0x2b12 MovS
	func_132(var_4876_int, var_4877_string); // 0x2b13 NEW_2
	var_4878_int = 0; // 0x2b15 PushI
	var_4879_bool = var_4876_int != var_4878_int; // 0x2b16 Neq
	if(var_4879_bool == 0) goto Label_11034; // 0x2b17 JumpB
	var_4873_bool = 1; // 0x2b18 MovB
	return 0; // 0x2b19 Return
	
Label_11034:
	var_4873_bool = 0; // 0x2b1a MovB
	return 0; // 0x2b1b Return
}


func_13073(var_4351_string, var_4352_int)
{
	var_4354_int = 8; // 0x3312 PushI
	var_4355_bool = var_4352_int == var_4354_int; // 0x3313 Eq
	if(var_4355_bool == 0) goto Label_13080; // 0x3314 JumpB
	var_4351_string = "r5_House6_01"; // 0x3315 MovS
	return 0; // 0x3316 Return
	
Label_13080:
	var_4356_int = 9; // 0x3318 PushI
	var_4357_bool = var_4352_int == var_4356_int; // 0x3319 Eq
	if(var_4357_bool == 0) goto Label_13086; // 0x331a JumpB
	var_4351_string = "dt_house2_01"; // 0x331b MovS
	return 0; // 0x331c Return
	
Label_13086:
	var_4358_int = 10; // 0x331e PushI
	var_4359_bool = var_4352_int == var_4358_int; // 0x331f Eq
	if(var_4359_bool == 0) goto Label_13092; // 0x3320 JumpB
	var_4351_string = "house7_02"; // 0x3321 MovS
	return 0; // 0x3322 Return
	
Label_13092:
	var_4360_int = 11; // 0x3324 PushI
	var_4361_bool = var_4352_int == var_4360_int; // 0x3325 Eq
	if(var_4361_bool == 0) goto Label_13097; // 0x3326 JumpB
	var_4351_string = "lc_house3_05"; // 0x3327 MovS
	return 0; // 0x3328 Return
	
Label_13097:
	var_4351_string = ""; // 0x3329 MovS
	return 0; // 0x332a Return
}


func_5906(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object)
{
	var_1577_int = 0; // 0x1713 PushI
	var_1578_bool = var_1572_int == var_1577_int; // 0x1714 Eq
	if(var_1578_bool == 0) goto Label_5946; // 0x1715 JumpB
	var_1579_int = 0; var_1580_bool = 0; // 0x1716 PushV
	var_1579_int = 8; // 0x1717 MovI
	var_1580_bool = 0; // 0x1718 MovB
	func_796(var_1579_int, var_1580_bool); // 0x1719 NEW_2
	var_1581_int = 0; var_1582_bool = 0; var_1583_int = 0; // 0x171b PushV
	var_1581_int = 8; // 0x171c MovI
	var_1582_bool = 0; // 0x171d MovB
	var_1583_int = 1; // 0x171e MovI
	func_813(var_1581_int, var_1582_bool, var_1583_int); // 0x171f NEW_2
	var_1584_int = 0; var_1585_int = 0; var_1586_object = Obj(); var_1587_object = Obj(); var_1588_object = Obj(); // 0x1721 PushV
	var_1584_int = 8; // 0x1722 MovI
	var_1585_int = var_1571_int; // 0x1723 Mov
	var_1586_object = var_1573_object; // 0x1724 Mov
	var_1587_object = var_1574_object; // 0x1725 Mov
	var_1588_object = var_1575_object; // 0x1726 Mov
	func_622(var_1585_int, var_1586_object, var_1587_object, var_1588_object); // 0x1727 NEW_2
	var_1589_object = Obj(); var_1590_int = 0; // 0x1729 PushV
	var_1589_object = var_1576_object; // 0x172a Mov
	var_1590_int = 0; // 0x172b MovI
	func_305(var_1590_int); // 0x172c NEW_2
	var_1591_int = 0; var_1592_bool = 0; var_1593_int = 0; // 0x172e PushV
	var_1591_int = 8; // 0x172f MovI
	var_1592_bool = 0; // 0x1730 MovB
	var_1593_int = 4; // 0x1731 MovI
	func_870(var_1591_int, var_1592_bool, var_1593_int); // 0x1732 NEW_2
	var_1594_int = 0; var_1595_bool = 0; var_1596_int = 0; // 0x1734 PushV
	var_1594_int = 8; // 0x1735 MovI
	var_1595_bool = 0; // 0x1736 MovB
	var_1596_int = 4; // 0x1737 MovI
	func_932(var_1594_int, var_1595_bool, var_1596_int); // 0x1738 NEW_2
	
Label_5946:
	var_1597_int = 0; var_1598_int = 0; // 0x173a PushV
	var_1597_int = 8; // 0x173b MovI
	var_1598_int = var_1572_int; // 0x173c Mov
	func_983(var_1597_int, var_1598_int); // 0x173d NEW_2
	var_1599_int = 0; var_1600_int = 0; var_1601_int = 0; // 0x173f PushV
	var_1599_int = 8; // 0x1740 MovI
	var_1600_int = var_1571_int; // 0x1741 Mov
	var_1601_int = var_1572_int; // 0x1742 Mov
	func_1624(var_1599_int, var_1600_int, var_1601_int); // 0x1743 NEW_2
	return 0; // 0x1745 Return
}


func_6930(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object)
{
	var_1742_int = 0; // 0x1b13 PushI
	var_1743_bool = var_1737_int == var_1742_int; // 0x1b14 Eq
	if(var_1743_bool == 0) goto Label_6970; // 0x1b15 JumpB
	var_1744_int = 0; var_1745_bool = 0; // 0x1b16 PushV
	var_1744_int = 13; // 0x1b17 MovI
	var_1745_bool = 0; // 0x1b18 MovB
	func_796(var_1744_int, var_1745_bool); // 0x1b19 NEW_2
	var_1746_int = 0; var_1747_bool = 0; var_1748_int = 0; // 0x1b1b PushV
	var_1746_int = 13; // 0x1b1c MovI
	var_1747_bool = 0; // 0x1b1d MovB
	var_1748_int = 1; // 0x1b1e MovI
	func_813(var_1746_int, var_1747_bool, var_1748_int); // 0x1b1f NEW_2
	var_1749_int = 0; var_1750_int = 0; var_1751_object = Obj(); var_1752_object = Obj(); var_1753_object = Obj(); // 0x1b21 PushV
	var_1749_int = 13; // 0x1b22 MovI
	var_1750_int = var_1736_int; // 0x1b23 Mov
	var_1751_object = var_1738_object; // 0x1b24 Mov
	var_1752_object = var_1739_object; // 0x1b25 Mov
	var_1753_object = var_1740_object; // 0x1b26 Mov
	func_622(var_1750_int, var_1751_object, var_1752_object, var_1753_object); // 0x1b27 NEW_2
	var_1754_object = Obj(); var_1755_int = 0; // 0x1b29 PushV
	var_1754_object = var_1741_object; // 0x1b2a Mov
	var_1755_int = 0; // 0x1b2b MovI
	func_305(var_1755_int); // 0x1b2c NEW_2
	var_1756_int = 0; var_1757_bool = 0; var_1758_int = 0; // 0x1b2e PushV
	var_1756_int = 13; // 0x1b2f MovI
	var_1757_bool = 0; // 0x1b30 MovB
	var_1758_int = 4; // 0x1b31 MovI
	func_870(var_1756_int, var_1757_bool, var_1758_int); // 0x1b32 NEW_2
	var_1759_int = 0; var_1760_bool = 0; var_1761_int = 0; // 0x1b34 PushV
	var_1759_int = 13; // 0x1b35 MovI
	var_1760_bool = 0; // 0x1b36 MovB
	var_1761_int = 4; // 0x1b37 MovI
	func_932(var_1759_int, var_1760_bool, var_1761_int); // 0x1b38 NEW_2
	
Label_6970:
	var_1762_int = 0; var_1763_int = 0; // 0x1b3a PushV
	var_1762_int = 13; // 0x1b3b MovI
	var_1763_int = var_1737_int; // 0x1b3c Mov
	func_1050(var_1762_int, var_1763_int); // 0x1b3d NEW_2
	var_1764_int = 0; var_1765_int = 0; var_1766_int = 0; // 0x1b3f PushV
	var_1764_int = 13; // 0x1b40 MovI
	var_1765_int = var_1736_int; // 0x1b41 Mov
	var_1766_int = var_1737_int; // 0x1b42 Mov
	func_1624(var_1764_int, var_1765_int, var_1766_int); // 0x1b43 NEW_2
	return 0; // 0x1b45 Return
}


func_10006(var_5149_int, var_5150_float)
{
	var_5151_int = 0; var_5152_int = 0; var_5153_int = 0; var_5154_float = 0; // 0x2717 PushV
	var_5152_int = 530678; // 0x2718 MovI
	var_5153_int = 530677; // 0x2719 MovI
	var_5154_float = var_5150_float; // 0x271a Mov
	func_11409(var_5151_int, var_5152_int, var_5153_int, var_5154_float); // 0x271b NEW_2
	var_5149_int = var_5151_int; // 0x271c Mov
	return 0; // 0x271e Return
}


func_796(var_452_int, var_453_bool)
{
	var_454_object = Obj(); var_455_int = 0; var_456_object = Obj(); var_457_int = 0; // 0x31c PushV
	GetMainOutdoorScene(var_456_object); // 0x31d Func
	var_458_bool = var_456_object == 0; // 0x31f NullEq
	if(var_458_bool == 0) goto Label_805; // 0x320 JumpB
	var_459_string = "City manager: Can't find main outdoor scene"; // 0x321 PushS
	Trace(var_459_string); // 0x322 Func
	return 4; // 0x324 Return
	
Label_805:
	var_460_int = 1; // 0x325 PushI
	var_457_int = var_452_int + var_460_int; // 0x326 Add2
	var_461_int = 200; // 0x327 PushI
	var_462_bool = 0; // 0x328 PushB
	EnableSubsets(var_457_int, var_461_int, var_453_bool, var_462_bool); // 0x329 ObjFunc
	return 4; // 0x32b Return
}


func_11036(var_5852_bool)
{
	var_5855_int = 0; var_5856_string = ""; // 0x2b1d PushV
	var_5856_string = "k3q04SendBurahMail"; // 0x2b1e MovS
	func_132(var_5855_int, var_5856_string); // 0x2b1f NEW_2
	var_5857_int = 0; // 0x2b21 PushI
	var_5858_bool = var_5855_int != var_5857_int; // 0x2b22 Neq
	if(var_5858_bool == 0) goto Label_11046; // 0x2b23 JumpB
	var_5852_bool = 1; // 0x2b24 MovB
	return 0; // 0x2b25 Return
	
Label_11046:
	var_5852_bool = 0; // 0x2b26 MovB
	return 0; // 0x2b27 Return
}


func_4894(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object)
{
	var_3542_int = 0; // 0x131f PushI
	var_3543_bool = var_3537_int == var_3542_int; // 0x1320 Eq
	if(var_3543_bool == 0) goto Label_4934; // 0x1321 JumpB
	var_3544_int = 0; var_3545_bool = 0; // 0x1322 PushV
	var_3544_int = 2; // 0x1323 MovI
	var_3545_bool = 0; // 0x1324 MovB
	func_796(var_3544_int, var_3545_bool); // 0x1325 NEW_2
	var_3546_int = 0; var_3547_bool = 0; var_3548_int = 0; // 0x1327 PushV
	var_3546_int = 2; // 0x1328 MovI
	var_3547_bool = 0; // 0x1329 MovB
	var_3548_int = 1; // 0x132a MovI
	func_813(var_3546_int, var_3547_bool, var_3548_int); // 0x132b NEW_2
	var_3549_int = 0; var_3550_int = 0; var_3551_object = Obj(); var_3552_object = Obj(); var_3553_object = Obj(); // 0x132d PushV
	var_3549_int = 2; // 0x132e MovI
	var_3550_int = var_3536_int; // 0x132f Mov
	var_3551_object = var_3538_object; // 0x1330 Mov
	var_3552_object = var_3539_object; // 0x1331 Mov
	var_3553_object = var_3540_object; // 0x1332 Mov
	func_720(var_3549_int, var_3550_int, var_3551_object, var_3552_object, var_3553_object); // 0x1333 NEW_2
	var_3554_object = Obj(); var_3555_int = 0; // 0x1335 PushV
	var_3554_object = var_3541_object; // 0x1336 Mov
	var_3555_int = 2; // 0x1337 MovI
	func_305(var_3555_int); // 0x1338 NEW_2
	var_3556_int = 0; var_3557_bool = 0; var_3558_int = 0; // 0x133a PushV
	var_3556_int = 2; // 0x133b MovI
	var_3557_bool = 0; // 0x133c MovB
	var_3558_int = 5; // 0x133d MovI
	func_870(var_3556_int, var_3557_bool, var_3558_int); // 0x133e NEW_2
	var_3559_int = 0; var_3560_bool = 0; var_3561_int = 0; // 0x1340 PushV
	var_3559_int = 2; // 0x1341 MovI
	var_3560_bool = 1; // 0x1342 MovB
	var_3561_int = 5; // 0x1343 MovI
	func_932(var_3559_int, var_3560_bool, var_3561_int); // 0x1344 NEW_2
	
Label_4934:
	var_3562_int = 0; var_3563_bool = 0; // 0x1346 PushV
	var_3562_int = 2; // 0x1347 MovI
	var_3563_bool = 0; // 0x1348 MovB
	func_779(var_3562_int, var_3563_bool); // 0x1349 NEW_2
	var_3564_int = 0; var_3565_int = 0; var_3566_int = 0; // 0x134b PushV
	var_3564_int = 2; // 0x134c MovI
	var_3565_int = var_3536_int; // 0x134d Mov
	var_3566_int = var_3537_int; // 0x134e Mov
	func_3847(var_3564_int, var_3565_int, var_3566_int); // 0x134f NEW_2
	return 0; // 0x1351 Return
}


func_10015(var_4936_int, var_4937_float)
{
	var_4938_int = 0; var_4939_int = 0; var_4940_int = 0; var_4941_float = 0; // 0x2720 PushV
	var_4939_int = 530680; // 0x2721 MovI
	var_4940_int = 530679; // 0x2722 MovI
	var_4941_float = var_4937_float; // 0x2723 Mov
	func_11409(var_4938_int, var_4939_int, var_4940_int, var_4941_float); // 0x2724 NEW_2
	var_4936_int = var_4938_int; // 0x2725 Mov
	return 0; // 0x2727 Return
}


func_10024(var_5224_int, var_5225_float)
{
	var_5226_int = 0; var_5227_int = 0; var_5228_int = 0; var_5229_float = 0; // 0x2729 PushV
	var_5227_int = 538956; // 0x272a MovI
	var_5228_int = 538955; // 0x272b MovI
	var_5229_float = var_5225_float; // 0x272c Mov
	func_11409(var_5226_int, var_5227_int, var_5228_int, var_5229_float); // 0x272d NEW_2
	var_5224_int = var_5226_int; // 0x272e Mov
	return 0; // 0x2730 Return
}


func_11048(var_5598_bool)
{
	var_5601_int = 0; var_5602_string = ""; // 0x2b29 PushV
	var_5602_string = "k10q01KnowAboutRubin"; // 0x2b2a MovS
	func_132(var_5601_int, var_5602_string); // 0x2b2b NEW_2
	var_5603_int = 0; // 0x2b2d PushI
	var_5604_bool = var_5601_int != var_5603_int; // 0x2b2e Neq
	if(var_5604_bool == 0) goto Label_11058; // 0x2b2f JumpB
	var_5598_bool = 1; // 0x2b30 MovB
	return 0; // 0x2b31 Return
	
Label_11058:
	var_5598_bool = 0; // 0x2b32 MovB
	return 0; // 0x2b33 Return
}


func_13099()
{
	var_4571_int = 0; var_4572_int = 0; // 0x332b PushV
	var_4572_int = 1; // 0x332c MovI
	
Label_13101:
	var_4573_int = 12; // 0x332d PushI
	var_4574_bool = var_4572_int <= var_4573_int; // 0x332e LE
	if(var_4574_bool == 0) goto Label_13112; // 0x332f JumpB
	var_4575_string = "RMap"; // 0x3330 PushS
	var_4576_int = var_4575_string + var_4572_int; // 0x3331 Add
	var_4577_int = 1; // 0x3332 PushI
	SetVariable(var_4576_int, var_4577_int); // 0x3333 Func
	var_4578_int = 1; // 0x3335 PushI
	var_4572_int = var_4572_int + var_4578_int; // 0x3336 Add2
	goto Label_13101; // 0x3337 Jump
	
Label_13112:
	return 2; // 0x3338 Return
}


func_813(var_528_int, var_529_bool, var_530_int)
{
	var_531_string = ""; var_532_object = Obj(); var_533_int = 0; var_534_string = ""; var_535_object = Obj(); var_536_int = 0; var_537_object = Obj(); var_538_string = ""; var_539_object = Obj(); var_540_int = 0; var_541_string = ""; var_542_object = Obj(); var_543_int = 0; var_544_object = Obj(); // 0x32d PushV
	var_545_string = "street_rags"; // 0x32e PushS
	var_546_int = 1; // 0x32f PushI
	var_547_int = var_528_int + var_546_int; // 0x330 Add
	var_538_string = var_545_string + var_547_int; // 0x331 Add2
	var_548_bool = var_529_bool; // 0x332 Push
	if(var_548_bool == 0) goto Label_853; // 0x333 JumpB
	GetMainOutdoorScene(var_539_object); // 0x334 Func
	var_549_bool = var_539_object == 0; // 0x336 NullEq
	if(var_549_bool == 0) goto Label_828; // 0x337 JumpB
	var_550_string = "City manager: Can't find main outdoor scene"; // 0x338 PushS
	Trace(var_550_string); // 0x339 Func
	return 14; // 0x33b Return
	
Label_828:
	var_540_int = 1; // 0x33c MovI
	
Label_829:
	var_551_bool = var_540_int <= var_530_int; // 0x33d LE
	if(var_551_bool == 0) goto Label_851; // 0x33e JumpB
	var_552_string = "_"; // 0x33f PushS
	var_553_int = var_538_string + var_552_string; // 0x340 Add
	var_541_string = var_553_int + var_540_int; // 0x341 Add2
	FindActor(var_542_object, var_541_string); // 0x342 Func
	var_554_bool = var_542_object == 0; // 0x344 Not
	if(var_554_bool == 0) goto Label_844; // 0x345 JumpB
	var_555_cvector = CVector(0.0, 0.0, 0.0); // 0x346 PushVec
	var_556_cvector = CVector(0.0, 0.0, 1.0); // 0x347 PushVec
	var_557_string = "do_invis.xml"; // 0x348 PushS
	AddActor(var_542_object, var_541_string, var_539_object, var_555_cvector, var_556_cvector, var_557_string); // 0x349 Func
	goto Label_847; // 0x34b Jump
	
Label_847:
	var_542_object = 0; // 0x34f SetNull
	var_558_int = 1; // 0x350 PushI
	var_540_int = var_540_int + var_558_int; // 0x351 Add2
	goto Label_829; // 0x352 Jump
	
Label_844:
	var_559_bool = 0; // 0x34c PushB
	RemoveOnUnload(var_559_bool); // 0x34d ObjFunc
	
Label_851:
	var_539_object = 0; // 0x353 SetNull
	goto Label_869; // 0x354 Jump
	
Label_869:
	return 14; // 0x365 Return
	
Label_853:
	var_543_int = 1; // 0x355 MovI
	
Label_854:
	var_560_bool = var_543_int <= var_530_int; // 0x356 LE
	if(var_560_bool == 0) goto Label_869; // 0x357 JumpB
	var_561_string = "_"; // 0x358 PushS
	var_562_int = var_538_string + var_561_string; // 0x359 Add
	var_563_int = var_562_int + var_543_int; // 0x35a Add
	FindActor(var_544_object, var_563_int); // 0x35b Func
	var_564_object = var_544_object; // 0x35d Push
	if(var_564_object == 0) goto Label_865; // 0x35e JumpB
	RemoveOnUnload(); // 0x35f ObjFunc
	
Label_865:
	var_544_object = 0; // 0x361 SetNull
	var_565_int = 1; // 0x362 PushI
	var_543_int = var_543_int + var_565_int; // 0x363 Add2
	goto Label_854; // 0x364 Jump
}


func_10033(var_5414_int, var_5415_float)
{
	var_5416_int = 0; var_5417_int = 0; var_5418_int = 0; var_5419_float = 0; // 0x2732 PushV
	var_5417_int = 538402; // 0x2733 MovI
	var_5418_int = 538401; // 0x2734 MovI
	var_5419_float = var_5415_float; // 0x2735 Mov
	func_11409(var_5416_int, var_5417_int, var_5418_int, var_5419_float); // 0x2736 NEW_2
	var_5414_int = var_5416_int; // 0x2737 Mov
	return 0; // 0x2739 Return
}


func_11060(var_5086_bool)
{
	var_5089_int = 0; var_5090_string = ""; // 0x2b35 PushV
	var_5090_string = "resque_list"; // 0x2b36 MovS
	func_132(var_5089_int, var_5090_string); // 0x2b37 NEW_2
	var_5091_int = 0; // 0x2b39 PushI
	var_5092_bool = var_5089_int != var_5091_int; // 0x2b3a Neq
	if(var_5092_bool == 0) goto Label_11070; // 0x2b3b JumpB
	var_5086_bool = 1; // 0x2b3c MovB
	return 0; // 0x2b3d Return
	
Label_11070:
	var_5086_bool = 0; // 0x2b3e MovB
	return 0; // 0x2b3f Return
}


func_13113(var_158_bool, var_159_int, var_160_int)
{
	var_161_int = 0; var_162_int = 0; var_163_int = 0; var_164_int = 0; // 0x3339 PushV
	var_165_int = 6; // 0x333a PushI
	var_166_bool = var_159_int == var_165_int; // 0x333b Eq
	if(var_166_bool == 0) goto Label_13119; // 0x333c JumpB
	var_158_bool = 0; // 0x333d MovB
	return 4; // 0x333e Return
	
Label_13119:
	var_167_int = 4; // 0x333f PushI
	var_168_bool = var_160_int == var_167_int; // 0x3340 Eq
	if(var_168_bool == 0) goto Label_13133; // 0x3341 JumpB
	var_169_int = 15; // 0x3342 PushI
	var_170_bool = var_159_int == var_169_int; // 0x3343 Eq
	if(var_170_bool == 0) goto Label_13127; // 0x3344 JumpB
	var_158_bool = 0; // 0x3345 MovB
	return 4; // 0x3346 Return
	
Label_13127:
	var_171_int = 9; // 0x3347 PushI
	var_172_bool = var_159_int == var_171_int; // 0x3348 Eq
	if(var_172_bool == 0) goto Label_13132; // 0x3349 JumpB
	var_158_bool = 0; // 0x334a MovB
	return 4; // 0x334b Return
	
Label_13132:
	goto Label_13150; // 0x334c Jump
	
Label_13150:
	var_173_bool = 0; // 0x335e PushV
	var_173_bool = 0; // 0x335f MovB
	var_174_int = 4; // 0x3360 PushI
	var_175_bool = var_160_int > var_174_int; // 0x3361 GT
	if(var_175_bool == 0) goto Label_13159; // 0x3362 JumpB
	var_176_int = 6; // 0x3363 PushI
	var_177_bool = var_160_int < var_176_int; // 0x3364 LT
	if(var_177_bool == 0) goto Label_13159; // 0x3365 JumpB
	var_173_bool = 1; // 0x3366 MovB
	
Label_13159:
	if(var_173_bool == 0) goto Label_13169; // 0x3367 JumpB
	var_178_int = 0; var_179_int = 0; // 0x3368 PushV
	var_179_int = 6; // 0x3369 MovI
	func_12957(var_178_int, var_179_int); // 0x336a NEW_2
	var_163_int = var_178_int; // 0x336b Mov
	var_192_bool = var_163_int == var_159_int; // 0x336d Eq
	if(var_192_bool == 0) goto Label_13169; // 0x336e JumpB
	var_158_bool = 0; // 0x336f MovB
	return 4; // 0x3370 Return
	
Label_13169:
	var_193_bool = 0; // 0x3371 PushV
	var_193_bool = 0; // 0x3372 MovB
	var_194_int = 3; // 0x3373 PushI
	var_195_bool = var_160_int > var_194_int; // 0x3374 GT
	if(var_195_bool == 0) goto Label_13178; // 0x3375 JumpB
	var_196_int = 6; // 0x3376 PushI
	var_197_bool = var_160_int < var_196_int; // 0x3377 LT
	if(var_197_bool == 0) goto Label_13178; // 0x3378 JumpB
	var_193_bool = 1; // 0x3379 MovB
	
Label_13178:
	if(var_193_bool == 0) goto Label_13188; // 0x337a JumpB
	var_198_int = 0; var_199_int = 0; // 0x337b PushV
	var_199_int = 6; // 0x337c MovI
	func_12911(var_198_int, var_199_int); // 0x337d NEW_2
	var_164_int = var_198_int; // 0x337e Mov
	var_212_bool = var_164_int == var_159_int; // 0x3380 Eq
	if(var_212_bool == 0) goto Label_13188; // 0x3381 JumpB
	var_158_bool = 0; // 0x3382 MovB
	return 4; // 0x3383 Return
	
Label_13188:
	var_158_bool = 1; // 0x3384 MovB
	return 4; // 0x3385 Return
	
Label_13133:
	var_213_int = 5; // 0x334d PushI
	var_214_bool = var_160_int == var_213_int; // 0x334e Eq
	if(var_214_bool == 0) goto Label_13142; // 0x334f JumpB
	var_215_int = 15; // 0x3350 PushI
	var_216_bool = var_159_int == var_215_int; // 0x3351 Eq
	if(var_216_bool == 0) goto Label_13141; // 0x3352 JumpB
	var_158_bool = 0; // 0x3353 MovB
	return 4; // 0x3354 Return
	
Label_13141:
	goto Label_13150; // 0x3355 Jump
	
Label_13142:
	var_217_int = 6; // 0x3356 PushI
	var_218_bool = var_160_int == var_217_int; // 0x3357 Eq
	if(var_218_bool == 0) goto Label_13150; // 0x3358 JumpB
	var_219_int = 15; // 0x3359 PushI
	var_220_bool = var_159_int == var_219_int; // 0x335a Eq
	if(var_220_bool == 0) goto Label_13150; // 0x335b JumpB
	var_158_bool = 0; // 0x335c MovB
	return 4; // 0x335d Return
}


func_10042(var_5308_int, var_5309_float)
{
	var_5310_int = 0; var_5311_int = 0; var_5312_int = 0; var_5313_float = 0; // 0x273b PushV
	var_5311_int = 539490; // 0x273c MovI
	var_5312_int = 539489; // 0x273d MovI
	var_5313_float = var_5309_float; // 0x273e Mov
	func_11409(var_5310_int, var_5311_int, var_5312_int, var_5313_float); // 0x273f NEW_2
	var_5308_int = var_5310_int; // 0x2740 Mov
	return 0; // 0x2742 Return
}


func_11072(var_5460_bool)
{
	var_5463_int = 0; var_5464_string = ""; // 0x2b41 PushV
	var_5464_string = "k2AlexandrVisit"; // 0x2b42 MovS
	func_132(var_5463_int, var_5464_string); // 0x2b43 NEW_2
	var_5465_int = 0; // 0x2b45 PushI
	var_5466_bool = var_5463_int != var_5465_int; // 0x2b46 Neq
	if(var_5466_bool == 0) goto Label_11082; // 0x2b47 JumpB
	var_5460_bool = 1; // 0x2b48 MovB
	return 0; // 0x2b49 Return
	
Label_11082:
	var_5460_bool = 0; // 0x2b4a MovB
	return 0; // 0x2b4b Return
}


func_10051(var_5895_int, var_5896_float)
{
	var_5897_int = 0; var_5898_int = 0; var_5899_int = 0; var_5900_float = 0; // 0x2744 PushV
	var_5898_int = 525653; // 0x2745 MovI
	var_5899_int = 525652; // 0x2746 MovI
	var_5900_float = var_5896_float; // 0x2747 Mov
	func_11409(var_5897_int, var_5898_int, var_5899_int, var_5900_float); // 0x2748 NEW_2
	var_5895_int = var_5897_int; // 0x2749 Mov
	return 0; // 0x274b Return
}


func_5958(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object)
{
	var_2807_int = 0; // 0x1747 PushI
	var_2808_bool = var_2802_int == var_2807_int; // 0x1748 Eq
	if(var_2808_bool == 0) goto Label_5998; // 0x1749 JumpB
	var_2809_int = 0; var_2810_bool = 0; // 0x174a PushV
	var_2809_int = 8; // 0x174b MovI
	var_2810_bool = 1; // 0x174c MovB
	func_796(var_2809_int, var_2810_bool); // 0x174d NEW_2
	var_2811_int = 0; var_2812_bool = 0; var_2813_int = 0; // 0x174f PushV
	var_2811_int = 8; // 0x1750 MovI
	var_2812_bool = 1; // 0x1751 MovB
	var_2813_int = 1; // 0x1752 MovI
	func_813(var_2811_int, var_2812_bool, var_2813_int); // 0x1753 NEW_2
	var_2814_int = 0; var_2815_int = 0; var_2816_object = Obj(); var_2817_object = Obj(); var_2818_object = Obj(); // 0x1755 PushV
	var_2814_int = 8; // 0x1756 MovI
	var_2815_int = var_2801_int; // 0x1757 Mov
	var_2816_object = var_2803_object; // 0x1758 Mov
	var_2817_object = var_2804_object; // 0x1759 Mov
	var_2818_object = var_2805_object; // 0x175a Mov
	func_641(var_2814_int, var_2815_int, var_2816_object, var_2817_object, var_2818_object); // 0x175b NEW_2
	var_2819_object = Obj(); var_2820_int = 0; // 0x175d PushV
	var_2819_object = var_2806_object; // 0x175e Mov
	var_2820_int = 1; // 0x175f MovI
	func_305(var_2820_int); // 0x1760 NEW_2
	var_2821_int = 0; var_2822_bool = 0; var_2823_int = 0; // 0x1762 PushV
	var_2821_int = 8; // 0x1763 MovI
	var_2822_bool = 1; // 0x1764 MovB
	var_2823_int = 4; // 0x1765 MovI
	func_870(var_2821_int, var_2822_bool, var_2823_int); // 0x1766 NEW_2
	var_2824_int = 0; var_2825_bool = 0; var_2826_int = 0; // 0x1768 PushV
	var_2824_int = 8; // 0x1769 MovI
	var_2825_bool = 0; // 0x176a MovB
	var_2826_int = 4; // 0x176b MovI
	func_932(var_2824_int, var_2825_bool, var_2826_int); // 0x176c NEW_2
	
Label_5998:
	var_2827_int = 0; var_2828_bool = 0; // 0x176e PushV
	var_2827_int = 8; // 0x176f MovI
	var_2828_bool = 0; // 0x1770 MovB
	func_779(var_2827_int, var_2828_bool); // 0x1771 NEW_2
	var_2829_int = 0; var_2830_int = 0; var_2831_int = 0; // 0x1773 PushV
	var_2829_int = 8; // 0x1774 MovI
	var_2830_int = var_2801_int; // 0x1775 Mov
	var_2831_int = var_2802_int; // 0x1776 Mov
	func_2764(var_2829_int, var_2830_int, var_2831_int); // 0x1777 NEW_2
	return 0; // 0x1779 Return
}


func_9031(var_464_int, var_465_int, var_466_int, var_467_int)
{
	var_470_int = 0; var_471_object = Obj(); var_472_object = Obj(); var_473_object = Obj(); var_474_object = Obj(); var_475_int = 0; var_476_object = Obj(); var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj(); // 0x2347 PushV
	var_480_string = "City update"; // 0x2348 PushS
	Trace(var_480_string); // 0x2349 Func
	var_481_bool = 0; // 0x234b PushV
	var_481_bool = 0; // 0x234c MovB
	var_482_bool = var_464_int == var_466_int; // 0x234d Eq
	if(var_482_bool == 0) goto Label_9042; // 0x234e JumpB
	var_483_bool = var_465_int == var_467_int; // 0x234f Eq
	if(var_483_bool == 0) goto Label_9042; // 0x2350 JumpB
	var_481_bool = 1; // 0x2351 MovB
	
Label_9042:
	if(var_481_bool == 0) goto Label_9046; // 0x2352 JumpB
	var_484_string = "kolokol"; // 0x2353 PushS
	PlaySound(var_484_string); // 0x2354 Func
	
Label_9046:
	var_475_int = 0; // 0x2356 MovI
	
Label_9047:
	var_485_int = 16; // 0x2357 PushI
	var_486_bool = var_475_int < var_485_int; // 0x2358 LT
	if(var_486_bool == 0) goto Label_9087; // 0x2359 JumpB
	var_487_int = 0; // 0x235a PushV
	var_487_int = var_475_int; // 0x235b Mov
	func_490(var_487_int); // 0x235c NEW_2
	var_492_bool = 0; var_493_int = 0; // 0x235e PushV
	var_493_int = var_475_int; // 0x235f Mov
	func_400(var_492_bool, var_493_int); // 0x2360 NEW_2
	if(var_492_bool == 0) goto Label_9066; // 0x2362 JumpB
	var_501_int = 0; var_502_int = 0; var_503_int = 0; // 0x2363 PushV
	var_501_int = var_475_int; // 0x2364 Mov
	var_502_int = var_464_int; // 0x2365 Mov
	var_503_int = var_465_int; // 0x2366 Mov
	func_9151(var_501_int, var_502_int, var_503_int); // 0x2367 NEW_2
	goto Label_9084; // 0x2369 Jump
	
Label_9084:
	var_1978_int = 1; // 0x237c PushI
	var_475_int = var_475_int + var_1978_int; // 0x237d Add2
	goto Label_9047; // 0x237e Jump
	
Label_9066:
	var_1979_bool = 0; var_1980_int = 0; // 0x236a PushV
	var_1980_int = var_475_int; // 0x236b Mov
	func_430(var_1979_bool, var_1980_int); // 0x236c NEW_2
	if(var_1979_bool == 0) goto Label_9078; // 0x236e JumpB
	var_1988_int = 0; var_1989_int = 0; var_1990_int = 0; // 0x236f PushV
	var_1988_int = var_475_int; // 0x2370 Mov
	var_1989_int = var_464_int; // 0x2371 Mov
	var_1990_int = var_465_int; // 0x2372 Mov
	func_9376(var_1988_int, var_1989_int, var_1990_int); // 0x2373 NEW_2
	goto Label_9084; // 0x2375 Jump
	
Label_9078:
	var_3169_int = 0; var_3170_int = 0; var_3171_int = 0; // 0x2376 PushV
	var_3169_int = var_475_int; // 0x2377 Mov
	var_3170_int = var_464_int; // 0x2378 Mov
	var_3171_int = var_465_int; // 0x2379 Mov
	func_9601(var_3169_int, var_3170_int, var_3171_int); // 0x237a NEW_2
	
Label_9087:
	var_4303_int = 0; // 0x237f PushI
	var_4304_bool = var_465_int == var_4303_int; // 0x2380 Eq
	if(var_4304_bool == 0) goto Label_9123; // 0x2381 JumpB
	var_4305_int = 0; // 0x2382 PushV
	var_4305_int = var_464_int; // 0x2383 Mov
	func_13574(var_4305_int); // 0x2384 NEW_2
	var_4379_bool = 0; // 0x2386 PushV
	var_4379_bool = 1; // 0x2387 MovB
	var_4380_int = 1; // 0x2388 PushI
	var_4381_bool = var_464_int == var_4380_int; // 0x2389 Eq
	if(var_4381_bool == 0) goto Label_9105; // 0x238a JumpB
	var_4382_bool = 0; var_4383_int = 0; // 0x238b PushV
	var_4383_int = 5; // 0x238c MovI
	func_430(var_4382_bool, var_4383_int); // 0x238d NEW_2
	if(var_4382_bool == 0) goto Label_9105; // 0x238f JumpB
	var_4379_bool = 0; // 0x2390 MovB
	
Label_9105:
	if(var_4379_bool == 0) goto Label_9115; // 0x2391 JumpB
	var_4384_string = "dt_house_1_07"; // 0x2392 PushS
	FindActor(var_476_object, var_4384_string); // 0x2393 Func
	var_4385_int = 200; // 0x2395 PushI
	var_4386_bool = 1; // 0x2396 PushB
	EnableSubset(var_4385_int, var_4386_bool); // 0x2397 ObjFunc
	var_476_object = 0; // 0x2399 SetNull
	goto Label_9123; // 0x239a Jump
	
Label_9123:
	var_4387_int = 7; // 0x23a3 PushI
	var_4388_bool = var_465_int == var_4387_int; // 0x23a4 Eq
	if(var_4388_bool == 0) goto Label_9137; // 0x23a5 JumpB
	var_4389_string = "day time"; // 0x23a6 PushS
	Trace(var_4389_string); // 0x23a7 Func
	GetMainOutdoorScene(var_478_object); // 0x23a9 Func
	var_4390_int = 0; // 0x23ab PushI
	var_4391_bool = 0; // 0x23ac PushB
	SwitchLights(var_4390_int, var_4391_bool); // 0x23ad ObjFunc
	var_478_object = 0; // 0x23af SetNull
	goto Label_9150; // 0x23b0 Jump
	
Label_9150:
	return 10; // 0x23be Return
	
Label_9137:
	var_4392_int = 20; // 0x23b1 PushI
	var_4393_bool = var_465_int == var_4392_int; // 0x23b2 Eq
	if(var_4393_bool == 0) goto Label_9150; // 0x23b3 JumpB
	var_4394_string = "night time"; // 0x23b4 PushS
	Trace(var_4394_string); // 0x23b5 Func
	GetMainOutdoorScene(var_479_object); // 0x23b7 Func
	var_4395_int = 0; // 0x23b9 PushI
	var_4396_bool = 1; // 0x23ba PushB
	SwitchLights(var_4395_int, var_4396_bool); // 0x23bb ObjFunc
	var_479_object = 0; // 0x23bd SetNull
	
Label_9115:
	var_4397_string = "dt_house_1_07"; // 0x239b PushS
	FindActor(var_477_object, var_4397_string); // 0x239c Func
	var_4398_int = 200; // 0x239e PushI
	var_4399_bool = 0; // 0x239f PushB
	EnableSubset(var_4398_int, var_4399_bool); // 0x23a0 ObjFunc
	var_477_object = 0; // 0x23a2 SetNull
}


func_6982(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object)
{
	var_2972_int = 0; // 0x1b47 PushI
	var_2973_bool = var_2967_int == var_2972_int; // 0x1b48 Eq
	if(var_2973_bool == 0) goto Label_7022; // 0x1b49 JumpB
	var_2974_int = 0; var_2975_bool = 0; // 0x1b4a PushV
	var_2974_int = 13; // 0x1b4b MovI
	var_2975_bool = 1; // 0x1b4c MovB
	func_796(var_2974_int, var_2975_bool); // 0x1b4d NEW_2
	var_2976_int = 0; var_2977_bool = 0; var_2978_int = 0; // 0x1b4f PushV
	var_2976_int = 13; // 0x1b50 MovI
	var_2977_bool = 1; // 0x1b51 MovB
	var_2978_int = 1; // 0x1b52 MovI
	func_813(var_2976_int, var_2977_bool, var_2978_int); // 0x1b53 NEW_2
	var_2979_int = 0; var_2980_int = 0; var_2981_object = Obj(); var_2982_object = Obj(); var_2983_object = Obj(); // 0x1b55 PushV
	var_2979_int = 13; // 0x1b56 MovI
	var_2980_int = var_2966_int; // 0x1b57 Mov
	var_2981_object = var_2968_object; // 0x1b58 Mov
	var_2982_object = var_2969_object; // 0x1b59 Mov
	var_2983_object = var_2970_object; // 0x1b5a Mov
	func_641(var_2979_int, var_2980_int, var_2981_object, var_2982_object, var_2983_object); // 0x1b5b NEW_2
	var_2984_object = Obj(); var_2985_int = 0; // 0x1b5d PushV
	var_2984_object = var_2971_object; // 0x1b5e Mov
	var_2985_int = 1; // 0x1b5f MovI
	func_305(var_2985_int); // 0x1b60 NEW_2
	var_2986_int = 0; var_2987_bool = 0; var_2988_int = 0; // 0x1b62 PushV
	var_2986_int = 13; // 0x1b63 MovI
	var_2987_bool = 1; // 0x1b64 MovB
	var_2988_int = 4; // 0x1b65 MovI
	func_870(var_2986_int, var_2987_bool, var_2988_int); // 0x1b66 NEW_2
	var_2989_int = 0; var_2990_bool = 0; var_2991_int = 0; // 0x1b68 PushV
	var_2989_int = 13; // 0x1b69 MovI
	var_2990_bool = 0; // 0x1b6a MovB
	var_2991_int = 4; // 0x1b6b MovI
	func_932(var_2989_int, var_2990_bool, var_2991_int); // 0x1b6c NEW_2
	
Label_7022:
	var_2992_int = 0; var_2993_bool = 0; // 0x1b6e PushV
	var_2992_int = 13; // 0x1b6f MovI
	var_2993_bool = 0; // 0x1b70 MovB
	func_779(var_2992_int, var_2993_bool); // 0x1b71 NEW_2
	var_2994_int = 0; var_2995_int = 0; var_2996_int = 0; // 0x1b73 PushV
	var_2994_int = 13; // 0x1b74 MovI
	var_2995_int = var_2966_int; // 0x1b75 Mov
	var_2996_int = var_2967_int; // 0x1b76 Mov
	func_2764(var_2994_int, var_2995_int, var_2996_int); // 0x1b77 NEW_2
	return 0; // 0x1b79 Return
}


func_11084(var_5157_bool)
{
	var_5160_int = 0; var_5161_string = ""; // 0x2b4d PushV
	var_5161_string = "k2LaraVisit"; // 0x2b4e MovS
	func_132(var_5160_int, var_5161_string); // 0x2b4f NEW_2
	var_5162_int = 0; // 0x2b51 PushI
	var_5163_bool = var_5160_int != var_5162_int; // 0x2b52 Neq
	if(var_5163_bool == 0) goto Label_11094; // 0x2b53 JumpB
	var_5157_bool = 1; // 0x2b54 MovB
	return 0; // 0x2b55 Return
	
Label_11094:
	var_5157_bool = 0; // 0x2b56 MovB
	return 0; // 0x2b57 Return
}


func_10060(var_5406_int, var_5407_float)
{
	var_5408_int = 0; var_5409_int = 0; var_5410_int = 0; var_5411_float = 0; // 0x274d PushV
	var_5409_int = 538962; // 0x274e MovI
	var_5410_int = 538961; // 0x274f MovI
	var_5411_float = var_5407_float; // 0x2750 Mov
	func_11409(var_5408_int, var_5409_int, var_5410_int, var_5411_float); // 0x2751 NEW_2
	var_5406_int = var_5408_int; // 0x2752 Mov
	return 0; // 0x2754 Return
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


func_10069(var_5015_int, var_5016_float)
{
	var_5017_int = 0; var_5018_int = 0; var_5019_int = 0; var_5020_float = 0; // 0x2756 PushV
	var_5018_int = 540537; // 0x2757 MovI
	var_5019_int = 540536; // 0x2758 MovI
	var_5020_float = var_5016_float; // 0x2759 Mov
	func_11409(var_5017_int, var_5018_int, var_5019_int, var_5020_float); // 0x275a NEW_2
	var_5015_int = var_5017_int; // 0x275b Mov
	return 0; // 0x275d Return
}


func_11096(var_5422_bool)
{
	var_5425_int = 0; var_5426_string = ""; // 0x2b59 PushV
	var_5426_string = "k5LaskaVisit"; // 0x2b5a MovS
	func_132(var_5425_int, var_5426_string); // 0x2b5b NEW_2
	var_5427_int = 0; // 0x2b5d PushI
	var_5428_bool = var_5425_int != var_5427_int; // 0x2b5e Neq
	if(var_5428_bool == 0) goto Label_11106; // 0x2b5f JumpB
	var_5422_bool = 1; // 0x2b60 MovB
	return 0; // 0x2b61 Return
	
Label_11106:
	var_5422_bool = 0; // 0x2b62 MovB
	return 0; // 0x2b63 Return
}


func_10078(var_5324_int, var_5325_float)
{
	var_5326_int = 0; var_5327_int = 0; var_5328_int = 0; var_5329_float = 0; // 0x275f PushV
	var_5327_int = 539492; // 0x2760 MovI
	var_5328_int = 539491; // 0x2761 MovI
	var_5329_float = var_5325_float; // 0x2762 Mov
	func_11409(var_5326_int, var_5327_int, var_5328_int, var_5329_float); // 0x2763 NEW_2
	var_5324_int = var_5326_int; // 0x2764 Mov
	return 0; // 0x2766 Return
}


func_11108(var_5468_bool)
{
	var_5471_int = 0; var_5472_string = ""; // 0x2b65 PushV
	var_5472_string = "k2KaterinaVisit"; // 0x2b66 MovS
	func_132(var_5471_int, var_5472_string); // 0x2b67 NEW_2
	var_5473_int = 0; // 0x2b69 PushI
	var_5474_bool = var_5471_int != var_5473_int; // 0x2b6a Neq
	if(var_5474_bool == 0) goto Label_11118; // 0x2b6b JumpB
	var_5468_bool = 1; // 0x2b6c MovB
	return 0; // 0x2b6d Return
	
Label_11118:
	var_5468_bool = 0; // 0x2b6e MovB
	return 0; // 0x2b6f Return
}


func_870(var_639_int, var_640_bool, var_641_int)
{
	var_642_string = ""; var_643_object = Obj(); var_644_int = 0; var_645_string = ""; var_646_object = Obj(); var_647_int = 0; var_648_string = ""; var_649_object = Obj(); var_650_string = ""; var_651_object = Obj(); var_652_int = 0; var_653_string = ""; var_654_object = Obj(); var_655_int = 0; var_656_string = ""; var_657_object = Obj(); // 0x366 PushV
	var_658_string = "dr_mark"; // 0x367 PushS
	var_659_int = 1; // 0x368 PushI
	var_660_int = var_639_int + var_659_int; // 0x369 Add
	var_650_string = var_658_string + var_660_int; // 0x36a Add2
	var_661_bool = var_640_bool; // 0x36b Push
	if(var_661_bool == 0) goto Label_912; // 0x36c JumpB
	GetMainOutdoorScene(var_651_object); // 0x36d Func
	var_662_bool = var_651_object == 0; // 0x36f NullEq
	if(var_662_bool == 0) goto Label_885; // 0x370 JumpB
	var_663_string = "City manager: Can't find main outdoor scene"; // 0x371 PushS
	Trace(var_663_string); // 0x372 Func
	return 16; // 0x374 Return
	
Label_885:
	var_652_int = 1; // 0x375 MovI
	
Label_886:
	var_664_bool = var_652_int <= var_641_int; // 0x376 LE
	if(var_664_bool == 0) goto Label_910; // 0x377 JumpB
	var_665_string = "_"; // 0x378 PushS
	var_666_int = var_650_string + var_665_string; // 0x379 Add
	var_653_string = var_666_int + var_652_int; // 0x37a Add2
	FindActor(var_654_object, var_653_string); // 0x37b Func
	var_667_bool = var_654_object == 0; // 0x37d Not
	if(var_667_bool == 0) goto Label_901; // 0x37e JumpB
	var_668_cvector = CVector(0.0, 0.0, 0.0); // 0x37f PushVec
	var_669_cvector = CVector(0.0, 0.0, 1.0); // 0x380 PushVec
	var_670_string = "disease_object.xml"; // 0x381 PushS
	AddActor(var_654_object, var_653_string, var_651_object, var_668_cvector, var_669_cvector, var_670_string); // 0x382 Func
	goto Label_906; // 0x384 Jump
	
Label_906:
	var_654_object = 0; // 0x38a SetNull
	var_671_int = 1; // 0x38b PushI
	var_652_int = var_652_int + var_671_int; // 0x38c Add2
	goto Label_886; // 0x38d Jump
	
Label_901:
	var_672_bool = 0; var_673_string = ""; var_674_string = ""; // 0x385 PushV
	var_673_string = var_653_string; // 0x386 Mov
	var_674_string = "restore"; // 0x387 MovS
	func_239(var_672_bool, var_673_string, var_674_string); // 0x388 NEW_2
	
Label_910:
	var_651_object = 0; // 0x38e SetNull
	goto Label_931; // 0x38f Jump
	
Label_931:
	return 16; // 0x3a3 Return
	
Label_912:
	var_655_int = 1; // 0x390 MovI
	
Label_913:
	var_678_bool = var_655_int <= var_641_int; // 0x391 LE
	if(var_678_bool == 0) goto Label_931; // 0x392 JumpB
	var_679_string = "_"; // 0x393 PushS
	var_680_int = var_650_string + var_679_string; // 0x394 Add
	var_656_string = var_680_int + var_655_int; // 0x395 Add2
	FindActor(var_657_object, var_656_string); // 0x396 Func
	var_681_object = var_657_object; // 0x398 Push
	if(var_681_object == 0) goto Label_927; // 0x399 JumpB
	var_682_bool = 0; var_683_string = ""; var_684_string = ""; // 0x39a PushV
	var_683_string = var_656_string; // 0x39b Mov
	var_684_string = "cleanup"; // 0x39c MovS
	func_239(var_682_bool, var_683_string, var_684_string); // 0x39d NEW_2
	
Label_927:
	var_657_object = 0; // 0x39f SetNull
	var_685_int = 1; // 0x3a0 PushI
	var_655_int = var_655_int + var_685_int; // 0x3a1 Add2
	goto Label_913; // 0x3a2 Jump
}


func_10087(var_5257_int, var_5258_float)
{
	var_5259_int = 0; var_5260_int = 0; var_5261_int = 0; var_5262_float = 0; // 0x2768 PushV
	var_5260_int = 538964; // 0x2769 MovI
	var_5261_int = 538963; // 0x276a MovI
	var_5262_float = var_5258_float; // 0x276b Mov
	func_11409(var_5259_int, var_5260_int, var_5261_int, var_5262_float); // 0x276c NEW_2
	var_5257_int = var_5259_int; // 0x276d Mov
	return 0; // 0x276f Return
}


func_1897(var_1057_int, var_1058_int, var_1059_int)
{
	var_1060_int = 0; var_1061_int = 0; // 0x769 PushV
	var_1062_int = 1; // 0x76a PushI
	var_1063_int = var_1058_int + var_1062_int; // 0x76b Add
	var_1064_int = 12; // 0x76c PushI
	var_1065_bool = var_1063_int == var_1064_int; // 0x76d Eq
	if(var_1065_bool == 0) goto Label_1904; // 0x76e JumpB
	return 2; // 0x76f Return
	
Label_1904:
	var_1066_bool = 0; // 0x770 PushV
	var_1066_bool = 0; // 0x771 MovB
	var_1067_bool = 0; // 0x772 PushV
	var_1067_bool = 1; // 0x773 MovB
	var_1068_int = 7; // 0x774 PushI
	var_1069_bool = var_1059_int < var_1068_int; // 0x775 LT
	if(var_1069_bool == 0) goto Label_1915; // 0x776 JumpB
	var_1070_int = 21; // 0x777 PushI
	var_1071_bool = var_1059_int > var_1070_int; // 0x778 GT
	if(var_1071_bool == 0) goto Label_1915; // 0x779 JumpB
	var_1067_bool = 0; // 0x77a MovB
	
Label_1915:
	if(var_1067_bool == 0) goto Label_1920; // 0x77b JumpB
	var_1072_int = 0; // 0x77c PushI
	var_1073_bool = var_1058_int != var_1072_int; // 0x77d Neq
	if(var_1073_bool == 0) goto Label_1920; // 0x77e JumpB
	var_1066_bool = 1; // 0x77f MovB
	
Label_1920:
	if(var_1066_bool == 0) goto Label_1935; // 0x780 JumpB
	var_1074_float = 0; var_1075_int = 0; // 0x781 PushV
	var_1075_int = var_1058_int; // 0x782 Mov
	func_1141(var_1074_float, var_1075_int); // 0x783 NEW_2
	var_1061_int = var_1074_float; // 0x784 Mov
	var_1076_int = var_1061_int; // 0x786 Push
	if(var_1076_int == 0) goto Label_1935; // 0x787 JumpB
	var_1077_int = 0; var_1078_string = ""; var_1079_string = ""; var_1080_int = 0; // 0x788 PushV
	var_1077_int = var_1057_int; // 0x789 Mov
	var_1078_string = "pers_grabitel"; // 0x78a MovS
	var_1079_string = "grabitel.xml"; // 0x78b MovS
	var_1080_int = var_1061_int; // 0x78c Mov
	func_503(var_1077_int, var_1078_string, var_1079_string, var_1080_int); // 0x78d NEW_2
	
Label_1935:
	var_1081_bool = 0; var_1082_int = 0; var_1083_int = 0; // 0x78f PushV
	var_1082_int = var_1058_int; // 0x790 Mov
	var_1083_int = var_1059_int; // 0x791 Mov
	func_1110(var_1081_bool, var_1082_int, var_1083_int); // 0x792 NEW_2
	if(var_1081_bool == 0) goto Label_1998; // 0x794 JumpB
	var_1084_int = 0; var_1085_string = ""; var_1086_string = ""; var_1087_int = 0; // 0x795 PushV
	var_1084_int = var_1057_int; // 0x796 Mov
	var_1085_string = "pers_unosha"; // 0x797 MovS
	var_1086_string = "unosha_attacker.xml"; // 0x798 MovS
	var_1087_int = 1; // 0x799 MovI
	func_503(var_1084_int, var_1085_string, var_1086_string, var_1087_int); // 0x79a NEW_2
	var_1088_int = 0; var_1089_string = ""; var_1090_string = ""; var_1091_int = 0; // 0x79c PushV
	var_1088_int = var_1057_int; // 0x79d Mov
	var_1089_string = "pers_unosha"; // 0x79e MovS
	var_1090_string = "unosha2_attacker.xml"; // 0x79f MovS
	var_1091_int = 1; // 0x7a0 MovI
	func_503(var_1088_int, var_1089_string, var_1090_string, var_1091_int); // 0x7a1 NEW_2
	var_1092_int = 0; var_1093_string = ""; var_1094_string = ""; var_1095_int = 0; // 0x7a3 PushV
	var_1092_int = var_1057_int; // 0x7a4 Mov
	var_1093_string = "pers_worker"; // 0x7a5 MovS
	var_1094_string = "worker_attacker.xml"; // 0x7a6 MovS
	var_1095_int = 1; // 0x7a7 MovI
	func_503(var_1092_int, var_1093_string, var_1094_string, var_1095_int); // 0x7a8 NEW_2
	var_1096_int = 0; var_1097_string = ""; var_1098_string = ""; var_1099_int = 0; // 0x7aa PushV
	var_1096_int = var_1057_int; // 0x7ab Mov
	var_1097_string = "pers_worker"; // 0x7ac MovS
	var_1098_string = "worker2_attacker.xml"; // 0x7ad MovS
	var_1099_int = 1; // 0x7ae MovI
	func_503(var_1096_int, var_1097_string, var_1098_string, var_1099_int); // 0x7af NEW_2
	var_1100_int = 0; var_1101_string = ""; var_1102_string = ""; var_1103_int = 0; // 0x7b1 PushV
	var_1100_int = var_1057_int; // 0x7b2 Mov
	var_1101_string = "pers_woman"; // 0x7b3 MovS
	var_1102_string = "woman.xml"; // 0x7b4 MovS
	var_1103_int = 1; // 0x7b5 MovI
	func_503(var_1100_int, var_1101_string, var_1102_string, var_1103_int); // 0x7b6 NEW_2
	var_1104_int = 0; var_1105_string = ""; var_1106_string = ""; var_1107_int = 0; // 0x7b8 PushV
	var_1104_int = var_1057_int; // 0x7b9 Mov
	var_1105_string = "pers_alkash"; // 0x7ba MovS
	var_1106_string = "alkash.xml"; // 0x7bb MovS
	var_1107_int = 1; // 0x7bc MovI
	func_503(var_1104_int, var_1105_string, var_1106_string, var_1107_int); // 0x7bd NEW_2
	var_1108_int = 0; var_1109_string = ""; var_1110_string = ""; var_1111_int = 0; // 0x7bf PushV
	var_1108_int = var_1057_int; // 0x7c0 Mov
	var_1109_string = "pers_girl"; // 0x7c1 MovS
	var_1110_string = "girl.xml"; // 0x7c2 MovS
	var_1111_int = 1; // 0x7c3 MovI
	func_503(var_1108_int, var_1109_string, var_1110_string, var_1111_int); // 0x7c4 NEW_2
	var_1112_int = 0; var_1113_string = ""; var_1114_string = ""; var_1115_int = 0; // 0x7c6 PushV
	var_1112_int = var_1057_int; // 0x7c7 Mov
	var_1113_string = "pers_girl"; // 0x7c8 MovS
	var_1114_string = "girl2.xml"; // 0x7c9 MovS
	var_1115_int = 1; // 0x7ca MovI
	func_503(var_1112_int, var_1113_string, var_1114_string, var_1115_int); // 0x7cb NEW_2
	goto Label_2155; // 0x7cd Jump
	
Label_2155:
	var_1116_bool = 0; // 0x86b PushV
	var_1116_bool = 0; // 0x86c MovB
	var_1117_bool = 0; // 0x86d PushV
	var_1117_bool = 0; // 0x86e MovB
	var_1118_int = 0; // 0x86f PushI
	var_1119_bool = var_1058_int == var_1118_int; // 0x870 Eq
	if(var_1119_bool == 0) goto Label_2166; // 0x871 JumpB
	var_1120_int = 12; // 0x872 PushI
	var_1121_bool = var_1059_int > var_1120_int; // 0x873 GT
	if(var_1121_bool == 0) goto Label_2166; // 0x874 JumpB
	var_1117_bool = 1; // 0x875 MovB
	
Label_2166:
	if(var_1117_bool == 0) goto Label_2171; // 0x876 JumpB
	var_1122_int = 22; // 0x877 PushI
	var_1123_bool = var_1059_int < var_1122_int; // 0x878 LT
	if(var_1123_bool == 0) goto Label_2171; // 0x879 JumpB
	var_1116_bool = 1; // 0x87a MovB
	
Label_2171:
	if(var_1116_bool == 0) goto Label_2179; // 0x87b JumpB
	var_1124_int = 0; var_1125_string = ""; var_1126_string = ""; var_1127_int = 0; // 0x87c PushV
	var_1124_int = var_1057_int; // 0x87d Mov
	var_1125_string = "pers_woman"; // 0x87e MovS
	var_1126_string = "woman_killme.xml"; // 0x87f MovS
	var_1127_int = 1; // 0x880 MovI
	func_503(var_1124_int, var_1125_string, var_1126_string, var_1127_int); // 0x881 NEW_2
	
Label_2179:
	var_1128_bool = 0; var_1129_int = 0; var_1130_int = 0; // 0x883 PushV
	var_1129_int = var_1058_int; // 0x884 Mov
	var_1130_int = var_1059_int; // 0x885 Mov
	func_1345(var_1128_bool, var_1129_int, var_1130_int); // 0x886 NEW_2
	if(var_1128_bool == 0) goto Label_2192; // 0x888 JumpB
	var_1135_int = 0; var_1136_string = ""; var_1137_string = ""; var_1138_int = 0; // 0x889 PushV
	var_1135_int = var_1057_int; // 0x88a Mov
	var_1136_string = "pers_soldat"; // 0x88b MovS
	var_1137_string = "soldier_marauder.xml"; // 0x88c MovS
	var_1138_int = 2; // 0x88d MovI
	func_503(var_1135_int, var_1136_string, var_1137_string, var_1138_int); // 0x88e NEW_2
	
Label_2192:
	var_1139_bool = 0; var_1140_int = 0; var_1141_int = 0; // 0x890 PushV
	var_1140_int = var_1058_int; // 0x891 Mov
	var_1141_int = var_1059_int; // 0x892 Mov
	func_1355(var_1139_bool, var_1140_int, var_1141_int); // 0x893 NEW_2
	if(var_1139_bool == 0) goto Label_2205; // 0x895 JumpB
	var_1149_int = 0; var_1150_string = ""; var_1151_string = ""; var_1152_int = 0; // 0x896 PushV
	var_1149_int = var_1057_int; // 0x897 Mov
	var_1150_string = "pers_nudegirl"; // 0x898 MovS
	var_1151_string = "nudegirl.xml"; // 0x899 MovS
	var_1152_int = 1; // 0x89a MovI
	func_503(var_1149_int, var_1150_string, var_1151_string, var_1152_int); // 0x89b NEW_2
	
Label_2205:
	return 2; // 0x89d Return
	
Label_1998:
	var_1153_bool = 0; // 0x7ce PushV
	var_1153_bool = 0; // 0x7cf MovB
	var_1154_int = 8; // 0x7d0 PushI
	var_1155_bool = var_1059_int > var_1154_int; // 0x7d1 GT
	if(var_1155_bool == 0) goto Label_2007; // 0x7d2 JumpB
	var_1156_int = 21; // 0x7d3 PushI
	var_1157_bool = var_1059_int < var_1156_int; // 0x7d4 LT
	if(var_1157_bool == 0) goto Label_2007; // 0x7d5 JumpB
	var_1153_bool = 1; // 0x7d6 MovB
	
Label_2007:
	if(var_1153_bool == 0) goto Label_2089; // 0x7d7 JumpB
	var_1158_int = 0; var_1159_string = ""; var_1160_string = ""; var_1161_int = 0; // 0x7d8 PushV
	var_1158_int = var_1057_int; // 0x7d9 Mov
	var_1159_string = "pers_woman"; // 0x7da MovS
	var_1160_string = "woman.xml"; // 0x7db MovS
	var_1161_int = 1; // 0x7dc MovI
	func_503(var_1158_int, var_1159_string, var_1160_string, var_1161_int); // 0x7dd NEW_2
	var_1162_int = 0; var_1163_string = ""; var_1164_string = ""; var_1165_int = 0; // 0x7df PushV
	var_1162_int = var_1057_int; // 0x7e0 Mov
	var_1163_string = "pers_unosha"; // 0x7e1 MovS
	var_1164_string = "unosha.xml"; // 0x7e2 MovS
	var_1165_int = 1; // 0x7e3 MovI
	func_503(var_1162_int, var_1163_string, var_1164_string, var_1165_int); // 0x7e4 NEW_2
	var_1166_int = 0; var_1167_string = ""; var_1168_string = ""; var_1169_int = 0; // 0x7e6 PushV
	var_1166_int = var_1057_int; // 0x7e7 Mov
	var_1167_string = "pers_unosha"; // 0x7e8 MovS
	var_1168_string = "unosha2.xml"; // 0x7e9 MovS
	var_1169_int = 1; // 0x7ea MovI
	func_503(var_1166_int, var_1167_string, var_1168_string, var_1169_int); // 0x7eb NEW_2
	var_1170_int = 0; var_1171_string = ""; var_1172_string = ""; var_1173_int = 0; // 0x7ed PushV
	var_1170_int = var_1057_int; // 0x7ee Mov
	var_1171_string = "pers_worker"; // 0x7ef MovS
	var_1172_string = "worker.xml"; // 0x7f0 MovS
	var_1173_int = 1; // 0x7f1 MovI
	func_503(var_1170_int, var_1171_string, var_1172_string, var_1173_int); // 0x7f2 NEW_2
	var_1174_int = 0; var_1175_string = ""; var_1176_string = ""; var_1177_int = 0; // 0x7f4 PushV
	var_1174_int = var_1057_int; // 0x7f5 Mov
	var_1175_string = "pers_worker"; // 0x7f6 MovS
	var_1176_string = "worker2.xml"; // 0x7f7 MovS
	var_1177_int = 1; // 0x7f8 MovI
	func_503(var_1174_int, var_1175_string, var_1176_string, var_1177_int); // 0x7f9 NEW_2
	var_1178_int = 0; var_1179_string = ""; var_1180_string = ""; var_1181_int = 0; // 0x7fb PushV
	var_1178_int = var_1057_int; // 0x7fc Mov
	var_1179_string = "pers_alkash"; // 0x7fd MovS
	var_1180_string = "alkash.xml"; // 0x7fe MovS
	var_1181_int = 1; // 0x7ff MovI
	func_503(var_1178_int, var_1179_string, var_1180_string, var_1181_int); // 0x800 NEW_2
	var_1182_int = 0; var_1183_string = ""; var_1184_string = ""; var_1185_int = 0; // 0x802 PushV
	var_1182_int = var_1057_int; // 0x803 Mov
	var_1183_string = "pers_girl"; // 0x804 MovS
	var_1184_string = "girl.xml"; // 0x805 MovS
	var_1185_int = 1; // 0x806 MovI
	func_503(var_1182_int, var_1183_string, var_1184_string, var_1185_int); // 0x807 NEW_2
	var_1186_int = 0; var_1187_string = ""; var_1188_string = ""; var_1189_int = 0; // 0x809 PushV
	var_1186_int = var_1057_int; // 0x80a Mov
	var_1187_string = "pers_girl"; // 0x80b MovS
	var_1188_string = "girl2.xml"; // 0x80c MovS
	var_1189_int = 1; // 0x80d MovI
	func_503(var_1186_int, var_1187_string, var_1188_string, var_1189_int); // 0x80e NEW_2
	var_1190_int = 1; // 0x810 PushI
	var_1191_int = var_1058_int + var_1190_int; // 0x811 Add
	var_1192_int = 3; // 0x812 PushI
	var_1193_bool = var_1191_int >= var_1192_int; // 0x813 GE
	if(var_1193_bool == 0) goto Label_2076; // 0x814 JumpB
	var_1194_int = 0; var_1195_string = ""; var_1196_string = ""; var_1197_int = 0; // 0x815 PushV
	var_1194_int = var_1057_int; // 0x816 Mov
	var_1195_string = "pers_dohodyaga"; // 0x817 MovS
	var_1196_string = "dohodyaga.xml"; // 0x818 MovS
	var_1197_int = 1; // 0x819 MovI
	func_503(var_1194_int, var_1195_string, var_1196_string, var_1197_int); // 0x81a NEW_2
	
Label_2076:
	var_1198_int = 1; // 0x81c PushI
	var_1199_int = var_1058_int + var_1198_int; // 0x81d Add
	var_1200_int = 7; // 0x81e PushI
	var_1201_bool = var_1199_int >= var_1200_int; // 0x81f GE
	if(var_1201_bool == 0) goto Label_2088; // 0x820 JumpB
	var_1202_int = 0; var_1203_string = ""; var_1204_string = ""; var_1205_int = 0; // 0x821 PushV
	var_1202_int = var_1057_int; // 0x822 Mov
	var_1203_string = "pers_butcher"; // 0x823 MovS
	var_1204_string = "butcher.xml"; // 0x824 MovS
	var_1205_int = 2; // 0x825 MovI
	func_503(var_1202_int, var_1203_string, var_1204_string, var_1205_int); // 0x826 NEW_2
	
Label_2088:
	goto Label_2155; // 0x828 Jump
	
Label_2089:
	var_1206_int = 0; var_1207_string = ""; var_1208_string = ""; var_1209_int = 0; // 0x829 PushV
	var_1206_int = var_1057_int; // 0x82a Mov
	var_1207_string = "pers_woman"; // 0x82b MovS
	var_1208_string = "woman.xml"; // 0x82c MovS
	var_1209_int = 1; // 0x82d MovI
	func_503(var_1206_int, var_1207_string, var_1208_string, var_1209_int); // 0x82e NEW_2
	var_1210_int = 0; var_1211_string = ""; var_1212_string = ""; var_1213_int = 0; // 0x830 PushV
	var_1210_int = var_1057_int; // 0x831 Mov
	var_1211_string = "pers_unosha"; // 0x832 MovS
	var_1212_string = "unosha.xml"; // 0x833 MovS
	var_1213_int = 1; // 0x834 MovI
	func_503(var_1210_int, var_1211_string, var_1212_string, var_1213_int); // 0x835 NEW_2
	var_1214_int = 0; var_1215_string = ""; var_1216_string = ""; var_1217_int = 0; // 0x837 PushV
	var_1214_int = var_1057_int; // 0x838 Mov
	var_1215_string = "pers_unosha"; // 0x839 MovS
	var_1216_string = "unosha2.xml"; // 0x83a MovS
	var_1217_int = 1; // 0x83b MovI
	func_503(var_1214_int, var_1215_string, var_1216_string, var_1217_int); // 0x83c NEW_2
	var_1218_int = 0; var_1219_string = ""; var_1220_string = ""; var_1221_int = 0; // 0x83e PushV
	var_1218_int = var_1057_int; // 0x83f Mov
	var_1219_string = "pers_worker"; // 0x840 MovS
	var_1220_string = "worker.xml"; // 0x841 MovS
	var_1221_int = 1; // 0x842 MovI
	func_503(var_1218_int, var_1219_string, var_1220_string, var_1221_int); // 0x843 NEW_2
	var_1222_int = 0; var_1223_string = ""; var_1224_string = ""; var_1225_int = 0; // 0x845 PushV
	var_1222_int = var_1057_int; // 0x846 Mov
	var_1223_string = "pers_worker"; // 0x847 MovS
	var_1224_string = "worker2.xml"; // 0x848 MovS
	var_1225_int = 1; // 0x849 MovI
	func_503(var_1222_int, var_1223_string, var_1224_string, var_1225_int); // 0x84a NEW_2
	var_1226_int = 0; var_1227_string = ""; var_1228_string = ""; var_1229_int = 0; // 0x84c PushV
	var_1226_int = var_1057_int; // 0x84d Mov
	var_1227_string = "pers_alkash"; // 0x84e MovS
	var_1228_string = "alkash.xml"; // 0x84f MovS
	var_1229_int = 1; // 0x850 MovI
	func_503(var_1226_int, var_1227_string, var_1228_string, var_1229_int); // 0x851 NEW_2
	var_1230_int = 1; // 0x853 PushI
	var_1231_int = var_1058_int + var_1230_int; // 0x854 Add
	var_1232_int = 3; // 0x855 PushI
	var_1233_bool = var_1231_int >= var_1232_int; // 0x856 GE
	if(var_1233_bool == 0) goto Label_2143; // 0x857 JumpB
	var_1234_int = 0; var_1235_string = ""; var_1236_string = ""; var_1237_int = 0; // 0x858 PushV
	var_1234_int = var_1057_int; // 0x859 Mov
	var_1235_string = "pers_dohodyaga"; // 0x85a MovS
	var_1236_string = "dohodyaga.xml"; // 0x85b MovS
	var_1237_int = 1; // 0x85c MovI
	func_503(var_1234_int, var_1235_string, var_1236_string, var_1237_int); // 0x85d NEW_2
	
Label_2143:
	var_1238_int = 1; // 0x85f PushI
	var_1239_int = var_1058_int + var_1238_int; // 0x860 Add
	var_1240_int = 7; // 0x861 PushI
	var_1241_bool = var_1239_int >= var_1240_int; // 0x862 GE
	if(var_1241_bool == 0) goto Label_2155; // 0x863 JumpB
	var_1242_int = 0; var_1243_string = ""; var_1244_string = ""; var_1245_int = 0; // 0x864 PushV
	var_1242_int = var_1057_int; // 0x865 Mov
	var_1243_string = "pers_butcher"; // 0x866 MovS
	var_1244_string = "butcher.xml"; // 0x867 MovS
	var_1245_int = 3; // 0x868 MovI
	func_503(var_1242_int, var_1243_string, var_1244_string, var_1245_int); // 0x869 NEW_2
}


func_11120(var_5356_bool)
{
	var_5359_int = 0; var_5360_string = ""; // 0x2b71 PushV
	var_5360_string = "k3AlexandrVisit"; // 0x2b72 MovS
	func_132(var_5359_int, var_5360_string); // 0x2b73 NEW_2
	var_5361_int = 0; // 0x2b75 PushI
	var_5362_bool = var_5359_int != var_5361_int; // 0x2b76 Neq
	if(var_5362_bool == 0) goto Label_11130; // 0x2b77 JumpB
	var_5356_bool = 1; // 0x2b78 MovB
	return 0; // 0x2b79 Return
	
Label_11130:
	var_5356_bool = 0; // 0x2b7a MovB
	return 0; // 0x2b7b Return
}


func_10096(var_5430_int, var_5431_float)
{
	var_5432_int = 0; var_5433_int = 0; var_5434_int = 0; var_5435_float = 0; // 0x2771 PushV
	var_5433_int = 538958; // 0x2772 MovI
	var_5434_int = 538957; // 0x2773 MovI
	var_5435_float = var_5431_float; // 0x2774 Mov
	func_11409(var_5432_int, var_5433_int, var_5434_int, var_5435_float); // 0x2775 NEW_2
	var_5430_int = var_5432_int; // 0x2776 Mov
	return 0; // 0x2778 Return
}


func_10105(var_4971_int, var_4972_float)
{
	var_4973_int = 0; var_4974_int = 0; var_4975_int = 0; var_4976_float = 0; // 0x277a PushV
	var_4974_int = 539494; // 0x277b MovI
	var_4975_int = 539493; // 0x277c MovI
	var_4976_float = var_4972_float; // 0x277d Mov
	func_11409(var_4973_int, var_4974_int, var_4975_int, var_4976_float); // 0x277e NEW_2
	var_4971_int = var_4973_int; // 0x277f Mov
	return 0; // 0x2781 Return
}


func_6010(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object)
{
	var_3937_int = 0; // 0x177b PushI
	var_3938_bool = var_3932_int == var_3937_int; // 0x177c Eq
	if(var_3938_bool == 0) goto Label_6050; // 0x177d JumpB
	var_3939_int = 0; var_3940_bool = 0; // 0x177e PushV
	var_3939_int = 8; // 0x177f MovI
	var_3940_bool = 0; // 0x1780 MovB
	func_796(var_3939_int, var_3940_bool); // 0x1781 NEW_2
	var_3941_int = 0; var_3942_bool = 0; var_3943_int = 0; // 0x1783 PushV
	var_3941_int = 8; // 0x1784 MovI
	var_3942_bool = 0; // 0x1785 MovB
	var_3943_int = 1; // 0x1786 MovI
	func_813(var_3941_int, var_3942_bool, var_3943_int); // 0x1787 NEW_2
	var_3944_int = 0; var_3945_int = 0; var_3946_object = Obj(); var_3947_object = Obj(); var_3948_object = Obj(); // 0x1789 PushV
	var_3944_int = 8; // 0x178a MovI
	var_3945_int = var_3931_int; // 0x178b Mov
	var_3946_object = var_3933_object; // 0x178c Mov
	var_3947_object = var_3934_object; // 0x178d Mov
	var_3948_object = var_3935_object; // 0x178e Mov
	func_720(var_3944_int, var_3945_int, var_3946_object, var_3947_object, var_3948_object); // 0x178f NEW_2
	var_3949_object = Obj(); var_3950_int = 0; // 0x1791 PushV
	var_3949_object = var_3936_object; // 0x1792 Mov
	var_3950_int = 2; // 0x1793 MovI
	func_305(var_3950_int); // 0x1794 NEW_2
	var_3951_int = 0; var_3952_bool = 0; var_3953_int = 0; // 0x1796 PushV
	var_3951_int = 8; // 0x1797 MovI
	var_3952_bool = 0; // 0x1798 MovB
	var_3953_int = 4; // 0x1799 MovI
	func_870(var_3951_int, var_3952_bool, var_3953_int); // 0x179a NEW_2
	var_3954_int = 0; var_3955_bool = 0; var_3956_int = 0; // 0x179c PushV
	var_3954_int = 8; // 0x179d MovI
	var_3955_bool = 1; // 0x179e MovB
	var_3956_int = 4; // 0x179f MovI
	func_932(var_3954_int, var_3955_bool, var_3956_int); // 0x17a0 NEW_2
	
Label_6050:
	var_3957_int = 0; var_3958_bool = 0; // 0x17a2 PushV
	var_3957_int = 8; // 0x17a3 MovI
	var_3958_bool = 0; // 0x17a4 MovB
	func_779(var_3957_int, var_3958_bool); // 0x17a5 NEW_2
	var_3959_int = 0; var_3960_int = 0; var_3961_int = 0; // 0x17a7 PushV
	var_3959_int = 8; // 0x17a8 MovI
	var_3960_int = var_3931_int; // 0x17a9 Mov
	var_3961_int = var_3932_int; // 0x17aa Mov
	func_3659(var_3959_int, var_3960_int, var_3961_int); // 0x17ab NEW_2
	return 0; // 0x17ad Return
}


func_7034(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object)
{
	var_4102_int = 0; // 0x1b7b PushI
	var_4103_bool = var_4097_int == var_4102_int; // 0x1b7c Eq
	if(var_4103_bool == 0) goto Label_7074; // 0x1b7d JumpB
	var_4104_int = 0; var_4105_bool = 0; // 0x1b7e PushV
	var_4104_int = 13; // 0x1b7f MovI
	var_4105_bool = 0; // 0x1b80 MovB
	func_796(var_4104_int, var_4105_bool); // 0x1b81 NEW_2
	var_4106_int = 0; var_4107_bool = 0; var_4108_int = 0; // 0x1b83 PushV
	var_4106_int = 13; // 0x1b84 MovI
	var_4107_bool = 0; // 0x1b85 MovB
	var_4108_int = 1; // 0x1b86 MovI
	func_813(var_4106_int, var_4107_bool, var_4108_int); // 0x1b87 NEW_2
	var_4109_int = 0; var_4110_int = 0; var_4111_object = Obj(); var_4112_object = Obj(); var_4113_object = Obj(); // 0x1b89 PushV
	var_4109_int = 13; // 0x1b8a MovI
	var_4110_int = var_4096_int; // 0x1b8b Mov
	var_4111_object = var_4098_object; // 0x1b8c Mov
	var_4112_object = var_4099_object; // 0x1b8d Mov
	var_4113_object = var_4100_object; // 0x1b8e Mov
	func_720(var_4109_int, var_4110_int, var_4111_object, var_4112_object, var_4113_object); // 0x1b8f NEW_2
	var_4114_object = Obj(); var_4115_int = 0; // 0x1b91 PushV
	var_4114_object = var_4101_object; // 0x1b92 Mov
	var_4115_int = 2; // 0x1b93 MovI
	func_305(var_4115_int); // 0x1b94 NEW_2
	var_4116_int = 0; var_4117_bool = 0; var_4118_int = 0; // 0x1b96 PushV
	var_4116_int = 13; // 0x1b97 MovI
	var_4117_bool = 0; // 0x1b98 MovB
	var_4118_int = 4; // 0x1b99 MovI
	func_870(var_4116_int, var_4117_bool, var_4118_int); // 0x1b9a NEW_2
	var_4119_int = 0; var_4120_bool = 0; var_4121_int = 0; // 0x1b9c PushV
	var_4119_int = 13; // 0x1b9d MovI
	var_4120_bool = 1; // 0x1b9e MovB
	var_4121_int = 4; // 0x1b9f MovI
	func_932(var_4119_int, var_4120_bool, var_4121_int); // 0x1ba0 NEW_2
	
Label_7074:
	var_4122_int = 0; var_4123_bool = 0; // 0x1ba2 PushV
	var_4122_int = 13; // 0x1ba3 MovI
	var_4123_bool = 0; // 0x1ba4 MovB
	func_779(var_4122_int, var_4123_bool); // 0x1ba5 NEW_2
	var_4124_int = 0; var_4125_int = 0; var_4126_int = 0; // 0x1ba7 PushV
	var_4124_int = 13; // 0x1ba8 MovI
	var_4125_int = var_4096_int; // 0x1ba9 Mov
	var_4126_int = var_4097_int; // 0x1baa Mov
	func_3659(var_4124_int, var_4125_int, var_4126_int); // 0x1bab NEW_2
	return 0; // 0x1bad Return
}


func_11132(var_5364_bool)
{
	var_5367_int = 0; var_5368_string = ""; // 0x2b7d PushV
	var_5368_string = "k3KaterinaVisit"; // 0x2b7e MovS
	func_132(var_5367_int, var_5368_string); // 0x2b7f NEW_2
	var_5369_int = 0; // 0x2b81 PushI
	var_5370_bool = var_5367_int != var_5369_int; // 0x2b82 Neq
	if(var_5370_bool == 0) goto Label_11142; // 0x2b83 JumpB
	var_5364_bool = 1; // 0x2b84 MovB
	return 0; // 0x2b85 Return
	
Label_11142:
	var_5364_bool = 0; // 0x2b86 MovB
	return 0; // 0x2b87 Return
}


func_2944(var_2435_int, var_2436_int, var_2437_int)
{
	var_2438_int = 0; var_2439_int = 0; var_2440_int = 0; var_2441_int = 0; // 0xb80 PushV
	var_2442_bool = 0; // 0xb81 PushV
	var_2442_bool = 0; // 0xb82 MovB
	var_2443_int = 8; // 0xb83 PushI
	var_2444_bool = var_2437_int > var_2443_int; // 0xb84 GT
	if(var_2444_bool == 0) goto Label_2954; // 0xb85 JumpB
	var_2445_int = 21; // 0xb86 PushI
	var_2446_bool = var_2437_int < var_2445_int; // 0xb87 LT
	if(var_2446_bool == 0) goto Label_2954; // 0xb88 JumpB
	var_2442_bool = 1; // 0xb89 MovB
	
Label_2954:
	if(var_2442_bool == 0) goto Label_3009; // 0xb8a JumpB
	var_2447_int = 0; var_2448_string = ""; var_2449_string = ""; var_2450_int = 0; // 0xb8b PushV
	var_2447_int = var_2435_int; // 0xb8c Mov
	var_2448_string = "pers_vaxxabit"; // 0xb8d MovS
	var_2449_string = "vaxxabit_d.xml"; // 0xb8e MovS
	var_2450_int = 6; // 0xb8f MovI
	func_503(var_2447_int, var_2448_string, var_2449_string, var_2450_int); // 0xb90 NEW_2
	var_2451_int = 0; var_2452_string = ""; var_2453_string = ""; var_2454_int = 0; // 0xb92 PushV
	var_2451_int = var_2435_int; // 0xb93 Mov
	var_2452_string = "pers_vaxxabitka"; // 0xb94 MovS
	var_2453_string = "vaxxabitka_d.xml"; // 0xb95 MovS
	var_2454_int = 6; // 0xb96 MovI
	func_503(var_2451_int, var_2452_string, var_2453_string, var_2454_int); // 0xb97 NEW_2
	var_2455_int = 0; var_2456_string = ""; var_2457_string = ""; var_2458_int = 0; // 0xb99 PushV
	var_2455_int = var_2435_int; // 0xb9a Mov
	var_2456_string = "pers_rat_big"; // 0xb9b MovS
	var_2457_string = "rat_big.xml"; // 0xb9c MovS
	var_2458_int = 2; // 0xb9d MovI
	func_503(var_2455_int, var_2456_string, var_2457_string, var_2458_int); // 0xb9e NEW_2
	var_2459_int = 0; var_2460_string = ""; var_2461_string = ""; var_2462_int = 0; // 0xba0 PushV
	var_2459_int = var_2435_int; // 0xba1 Mov
	var_2460_string = "fog"; // 0xba2 MovS
	var_2461_string = "fog.xml"; // 0xba3 MovS
	var_2462_int = 6; // 0xba4 MovI
	func_529(var_2459_int, var_2460_string, var_2461_string, var_2462_int); // 0xba5 NEW_2
	var_2463_int = 5; // 0xba7 PushI
	var_2464_bool = var_2436_int >= var_2463_int; // 0xba8 GE
	if(var_2464_bool == 0) goto Label_2993; // 0xba9 JumpB
	var_2465_int = 0; var_2466_string = ""; var_2467_string = ""; var_2468_int = 0; // 0xbaa PushV
	var_2465_int = var_2435_int; // 0xbab Mov
	var_2466_string = "fog"; // 0xbac MovS
	var_2467_string = "fog_hunter.xml"; // 0xbad MovS
	var_2468_int = 2; // 0xbae MovI
	func_529(var_2465_int, var_2466_string, var_2467_string, var_2468_int); // 0xbaf NEW_2
	
Label_2993:
	var_2469_int = 1; // 0xbb1 PushI
	var_2470_float = 0; var_2471_int = 0; // 0xbb2 PushV
	var_2471_int = var_2436_int; // 0xbb3 Mov
	func_1255(var_2470_float, var_2471_int); // 0xbb4 NEW_2
	var_2440_int = var_2469_int * var_2470_float; // 0xbb6 Mult2
	var_2472_int = var_2440_int; // 0xbb7 Push
	if(var_2472_int == 0) goto Label_3008; // 0xbb8 JumpB
	var_2473_int = 0; var_2474_string = ""; var_2475_string = ""; var_2476_int = 0; // 0xbb9 PushV
	var_2473_int = var_2435_int; // 0xbba Mov
	var_2474_string = "pers_bomber"; // 0xbbb MovS
	var_2475_string = "bomber.xml"; // 0xbbc MovS
	var_2476_int = var_2440_int; // 0xbbd Mov
	func_503(var_2473_int, var_2474_string, var_2475_string, var_2476_int); // 0xbbe NEW_2
	
Label_3008:
	goto Label_3062; // 0xbc0 Jump
	
Label_3062:
	var_2477_int = 0; var_2478_string = ""; var_2479_string = ""; var_2480_int = 0; var_2481_int = 0; var_2482_int = 0; // 0xbf6 PushV
	var_2477_int = var_2435_int; // 0xbf7 Mov
	var_2478_string = "pers_worker"; // 0xbf8 MovS
	var_2479_string = "agony1_man.xml"; // 0xbf9 MovS
	var_2480_int = 2; // 0xbfa MovI
	var_2481_int = 4; // 0xbfb MovI
	var_2482_int = 4; // 0xbfc MovI
	func_516(var_2477_int, var_2478_string, var_2479_string, var_2480_int, var_2481_int, var_2482_int); // 0xbfd NEW_2
	var_2483_int = 0; var_2484_string = ""; var_2485_string = ""; var_2486_int = 0; var_2487_int = 0; var_2488_int = 0; // 0xbff PushV
	var_2483_int = var_2435_int; // 0xc00 Mov
	var_2484_string = "pers_unosha"; // 0xc01 MovS
	var_2485_string = "agony1_man.xml"; // 0xc02 MovS
	var_2486_int = 2; // 0xc03 MovI
	var_2487_int = 4; // 0xc04 MovI
	var_2488_int = 4; // 0xc05 MovI
	func_516(var_2483_int, var_2484_string, var_2485_string, var_2486_int, var_2487_int, var_2488_int); // 0xc06 NEW_2
	var_2489_int = 0; var_2490_string = ""; var_2491_string = ""; var_2492_int = 0; var_2493_int = 0; var_2494_int = 0; // 0xc08 PushV
	var_2489_int = var_2435_int; // 0xc09 Mov
	var_2490_string = "pers_woman"; // 0xc0a MovS
	var_2491_string = "agony1_woman.xml"; // 0xc0b MovS
	var_2492_int = 2; // 0xc0c MovI
	var_2493_int = 4; // 0xc0d MovI
	var_2494_int = 4; // 0xc0e MovI
	func_516(var_2489_int, var_2490_string, var_2491_string, var_2492_int, var_2493_int, var_2494_int); // 0xc0f NEW_2
	var_2495_int = 0; var_2496_string = ""; var_2497_string = ""; var_2498_int = 0; var_2499_int = 0; var_2500_int = 0; // 0xc11 PushV
	var_2495_int = var_2435_int; // 0xc12 Mov
	var_2496_string = "pers_wasted_girl"; // 0xc13 MovS
	var_2497_string = "agony1_woman.xml"; // 0xc14 MovS
	var_2498_int = 2; // 0xc15 MovI
	var_2499_int = 4; // 0xc16 MovI
	var_2500_int = 4; // 0xc17 MovI
	func_516(var_2495_int, var_2496_string, var_2497_string, var_2498_int, var_2499_int, var_2500_int); // 0xc18 NEW_2
	var_2501_bool = 0; var_2502_int = 0; var_2503_int = 0; // 0xc1a PushV
	var_2502_int = var_2436_int; // 0xc1b Mov
	var_2503_int = var_2437_int; // 0xc1c Mov
	func_1345(var_2501_bool, var_2502_int, var_2503_int); // 0xc1d NEW_2
	if(var_2501_bool == 0) goto Label_3111; // 0xc1f JumpB
	var_2504_int = 0; var_2505_string = ""; var_2506_string = ""; var_2507_int = 0; // 0xc20 PushV
	var_2504_int = var_2435_int; // 0xc21 Mov
	var_2505_string = "pers_soldat"; // 0xc22 MovS
	var_2506_string = "soldier_marauder.xml"; // 0xc23 MovS
	var_2507_int = 2; // 0xc24 MovI
	func_503(var_2504_int, var_2505_string, var_2506_string, var_2507_int); // 0xc25 NEW_2
	
Label_3111:
	var_2508_bool = 0; var_2509_int = 0; var_2510_int = 0; // 0xc27 PushV
	var_2509_int = var_2436_int; // 0xc28 Mov
	var_2510_int = var_2437_int; // 0xc29 Mov
	func_1355(var_2508_bool, var_2509_int, var_2510_int); // 0xc2a NEW_2
	if(var_2508_bool == 0) goto Label_3124; // 0xc2c JumpB
	var_2511_int = 0; var_2512_string = ""; var_2513_string = ""; var_2514_int = 0; // 0xc2d PushV
	var_2511_int = var_2435_int; // 0xc2e Mov
	var_2512_string = "pers_nudegirl"; // 0xc2f MovS
	var_2513_string = "nudegirl.xml"; // 0xc30 MovS
	var_2514_int = 1; // 0xc31 MovI
	func_503(var_2511_int, var_2512_string, var_2513_string, var_2514_int); // 0xc32 NEW_2
	
Label_3124:
	var_2515_bool = 0; var_2516_int = 0; // 0xc34 PushV
	var_2516_int = var_2436_int; // 0xc35 Mov
	func_1372(var_2515_bool, var_2516_int); // 0xc36 NEW_2
	if(var_2515_bool == 0) goto Label_3136; // 0xc38 JumpB
	var_2517_int = 0; var_2518_string = ""; var_2519_string = ""; var_2520_int = 0; // 0xc39 PushV
	var_2517_int = var_2435_int; // 0xc3a Mov
	var_2518_string = "pers_sanitar"; // 0xc3b MovS
	var_2519_string = "sanitar.xml"; // 0xc3c MovS
	var_2520_int = 1; // 0xc3d MovI
	func_503(var_2517_int, var_2518_string, var_2519_string, var_2520_int); // 0xc3e NEW_2
	
Label_3136:
	return 4; // 0xc40 Return
	
Label_3009:
	var_2521_int = 0; var_2522_string = ""; var_2523_string = ""; var_2524_int = 0; // 0xbc1 PushV
	var_2521_int = var_2435_int; // 0xbc2 Mov
	var_2522_string = "pers_vaxxabit"; // 0xbc3 MovS
	var_2523_string = "vaxxabit_d.xml"; // 0xbc4 MovS
	var_2524_int = 5; // 0xbc5 MovI
	func_503(var_2521_int, var_2522_string, var_2523_string, var_2524_int); // 0xbc6 NEW_2
	var_2525_int = 0; var_2526_string = ""; var_2527_string = ""; var_2528_int = 0; // 0xbc8 PushV
	var_2525_int = var_2435_int; // 0xbc9 Mov
	var_2526_string = "pers_vaxxabitka"; // 0xbca MovS
	var_2527_string = "vaxxabitka_d.xml"; // 0xbcb MovS
	var_2528_int = 5; // 0xbcc MovI
	func_503(var_2525_int, var_2526_string, var_2527_string, var_2528_int); // 0xbcd NEW_2
	var_2529_int = 0; var_2530_string = ""; var_2531_string = ""; var_2532_int = 0; // 0xbcf PushV
	var_2529_int = var_2435_int; // 0xbd0 Mov
	var_2530_string = "pers_rat_big"; // 0xbd1 MovS
	var_2531_string = "rat_big.xml"; // 0xbd2 MovS
	var_2532_int = 3; // 0xbd3 MovI
	func_503(var_2529_int, var_2530_string, var_2531_string, var_2532_int); // 0xbd4 NEW_2
	var_2533_int = 0; var_2534_string = ""; var_2535_string = ""; var_2536_int = 0; // 0xbd6 PushV
	var_2533_int = var_2435_int; // 0xbd7 Mov
	var_2534_string = "fog"; // 0xbd8 MovS
	var_2535_string = "fog.xml"; // 0xbd9 MovS
	var_2536_int = 6; // 0xbda MovI
	func_529(var_2533_int, var_2534_string, var_2535_string, var_2536_int); // 0xbdb NEW_2
	var_2537_int = 5; // 0xbdd PushI
	var_2538_bool = var_2436_int >= var_2537_int; // 0xbde GE
	if(var_2538_bool == 0) goto Label_3047; // 0xbdf JumpB
	var_2539_int = 0; var_2540_string = ""; var_2541_string = ""; var_2542_int = 0; // 0xbe0 PushV
	var_2539_int = var_2435_int; // 0xbe1 Mov
	var_2540_string = "fog"; // 0xbe2 MovS
	var_2541_string = "fog_hunter.xml"; // 0xbe3 MovS
	var_2542_int = 2; // 0xbe4 MovI
	func_529(var_2539_int, var_2540_string, var_2541_string, var_2542_int); // 0xbe5 NEW_2
	
Label_3047:
	var_2543_int = 1; // 0xbe7 PushI
	var_2544_float = 0; var_2545_int = 0; // 0xbe8 PushV
	var_2545_int = var_2436_int; // 0xbe9 Mov
	func_1255(var_2544_float, var_2545_int); // 0xbea NEW_2
	var_2441_int = var_2543_int * var_2544_float; // 0xbec Mult2
	var_2546_int = var_2441_int; // 0xbed Push
	if(var_2546_int == 0) goto Label_3062; // 0xbee JumpB
	var_2547_int = 0; var_2548_string = ""; var_2549_string = ""; var_2550_int = 0; // 0xbef PushV
	var_2547_int = var_2435_int; // 0xbf0 Mov
	var_2548_string = "pers_bomber"; // 0xbf1 MovS
	var_2549_string = "bomber.xml"; // 0xbf2 MovS
	var_2550_int = var_2441_int; // 0xbf3 Mov
	func_503(var_2547_int, var_2548_string, var_2549_string, var_2550_int); // 0xbf4 NEW_2
}


func_10114(var_4928_int, var_4929_float)
{
	var_4930_int = 0; var_4931_int = 0; var_4932_int = 0; var_4933_float = 0; // 0x2783 PushV
	var_4931_int = 542472; // 0x2784 MovI
	var_4932_int = 542471; // 0x2785 MovI
	var_4933_float = var_4929_float; // 0x2786 Mov
	func_11409(var_4930_int, var_4931_int, var_4932_int, var_4933_float); // 0x2787 NEW_2
	var_4928_int = var_4930_int; // 0x2788 Mov
	return 0; // 0x278a Return
}


func_13190(var_4799_int, var_4800_int)
{
	var_4802_object = Obj(); var_4803_object = Obj(); // 0x3386 PushV
	var_4804_string = "Updating game "; // 0x3387 PushS
	var_4805_int = var_4804_string + var_4799_int; // 0x3388 Add
	var_4806_string = " "; // 0x3389 PushS
	var_4807_int = var_4805_int + var_4806_string; // 0x338a Add
	var_4808_int = var_4807_int + var_4800_int; // 0x338b Add
	Trace(var_4808_int); // 0x338c Func
	var_4809_bool = 0; // 0x338e PushV
	var_4809_bool = 0; // 0x338f MovB
	var_4810_int = 7; // 0x3390 PushI
	var_4811_bool = var_4799_int == var_4810_int; // 0x3391 Eq
	if(var_4811_bool == 0) goto Label_13207; // 0x3392 JumpB
	var_4812_int = 0; // 0x3393 PushI
	var_4813_bool = var_4800_int == var_4812_int; // 0x3394 Eq
	if(var_4813_bool == 0) goto Label_13207; // 0x3395 JumpB
	var_4809_bool = 1; // 0x3396 MovB
	
Label_13207:
	if(var_4809_bool == 0) goto Label_13215; // 0x3397 JumpB
	var_4814_string = "sobor"; // 0x3398 PushS
	GetSceneByName(var_4803_object, var_4814_string); // 0x3399 Func
	var_4815_string = "aglaja"; // 0x339b PushS
	Trigger(var_4803_object, var_4815_string); // 0x339c Func
	var_4803_object = 0; // 0x339e SetNull
	
Label_13215:
	return 2; // 0x339f Return
}


func_11144(var_5439_bool)
{
	var_5442_int = 0; var_5443_string = ""; // 0x2b89 PushV
	var_5443_string = "k4AlexandrVisit"; // 0x2b8a MovS
	func_132(var_5442_int, var_5443_string); // 0x2b8b NEW_2
	var_5444_int = 0; // 0x2b8d PushI
	var_5445_bool = var_5442_int != var_5444_int; // 0x2b8e Neq
	if(var_5445_bool == 0) goto Label_11154; // 0x2b8f JumpB
	var_5439_bool = 1; // 0x2b90 MovB
	return 0; // 0x2b91 Return
	
Label_11154:
	var_5439_bool = 0; // 0x2b92 MovB
	return 0; // 0x2b93 Return
}


func_10123(var_4952_int, var_4953_float)
{
	var_4954_int = 0; var_4955_int = 0; var_4956_int = 0; var_4957_float = 0; // 0x278c PushV
	var_4955_int = 542474; // 0x278d MovI
	var_4956_int = 542473; // 0x278e MovI
	var_4957_float = var_4953_float; // 0x278f Mov
	func_11409(var_4954_int, var_4955_int, var_4956_int, var_4957_float); // 0x2790 NEW_2
	var_4952_int = var_4954_int; // 0x2791 Mov
	return 0; // 0x2793 Return
}


func_10132(var_4830_int, var_4831_float)
{
	var_4832_int = 0; var_4833_int = 0; var_4834_int = 0; var_4835_float = 0; // 0x2795 PushV
	var_4833_int = 542476; // 0x2796 MovI
	var_4834_int = 542475; // 0x2797 MovI
	var_4835_float = var_4831_float; // 0x2798 Mov
	func_11409(var_4832_int, var_4833_int, var_4834_int, var_4835_float); // 0x2799 NEW_2
	var_4830_int = var_4832_int; // 0x279a Mov
	return 0; // 0x279c Return
}


func_11156(var_5447_bool)
{
	var_5450_int = 0; var_5451_string = ""; // 0x2b95 PushV
	var_5451_string = "k4KaterinaVisit"; // 0x2b96 MovS
	func_132(var_5450_int, var_5451_string); // 0x2b97 NEW_2
	var_5452_int = 0; // 0x2b99 PushI
	var_5453_bool = var_5450_int != var_5452_int; // 0x2b9a Neq
	if(var_5453_bool == 0) goto Label_11166; // 0x2b9b JumpB
	var_5447_bool = 1; // 0x2b9c MovB
	return 0; // 0x2b9d Return
	
Label_11166:
	var_5447_bool = 0; // 0x2b9e MovB
	return 0; // 0x2b9f Return
}


func_5020(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object)
{
	var_1254_int = 0; // 0x139d PushI
	var_1255_bool = var_1249_int == var_1254_int; // 0x139e Eq
	if(var_1255_bool == 0) goto Label_5060; // 0x139f JumpB
	var_1256_int = 0; var_1257_bool = 0; // 0x13a0 PushV
	var_1256_int = 3; // 0x13a1 MovI
	var_1257_bool = 0; // 0x13a2 MovB
	func_796(var_1256_int, var_1257_bool); // 0x13a3 NEW_2
	var_1258_int = 0; var_1259_bool = 0; var_1260_int = 0; // 0x13a5 PushV
	var_1258_int = 3; // 0x13a6 MovI
	var_1259_bool = 0; // 0x13a7 MovB
	var_1260_int = 1; // 0x13a8 MovI
	func_813(var_1258_int, var_1259_bool, var_1260_int); // 0x13a9 NEW_2
	var_1261_int = 0; var_1262_int = 0; var_1263_object = Obj(); var_1264_object = Obj(); var_1265_object = Obj(); // 0x13ab PushV
	var_1261_int = 3; // 0x13ac MovI
	var_1262_int = var_1248_int; // 0x13ad Mov
	var_1263_object = var_1250_object; // 0x13ae Mov
	var_1264_object = var_1251_object; // 0x13af Mov
	var_1265_object = var_1252_object; // 0x13b0 Mov
	func_622(var_1262_int, var_1263_object, var_1264_object, var_1265_object); // 0x13b1 NEW_2
	var_1266_object = Obj(); var_1267_int = 0; // 0x13b3 PushV
	var_1266_object = var_1253_object; // 0x13b4 Mov
	var_1267_int = 0; // 0x13b5 MovI
	func_305(var_1267_int); // 0x13b6 NEW_2
	var_1268_int = 0; var_1269_bool = 0; var_1270_int = 0; // 0x13b8 PushV
	var_1268_int = 3; // 0x13b9 MovI
	var_1269_bool = 0; // 0x13ba MovB
	var_1270_int = 7; // 0x13bb MovI
	func_870(var_1268_int, var_1269_bool, var_1270_int); // 0x13bc NEW_2
	var_1271_int = 0; var_1272_bool = 0; var_1273_int = 0; // 0x13be PushV
	var_1271_int = 3; // 0x13bf MovI
	var_1272_bool = 0; // 0x13c0 MovB
	var_1273_int = 7; // 0x13c1 MovI
	func_932(var_1271_int, var_1272_bool, var_1273_int); // 0x13c2 NEW_2
	
Label_5060:
	var_1274_int = 0; var_1275_int = 0; // 0x13c4 PushV
	var_1274_int = 3; // 0x13c5 MovI
	var_1275_int = var_1249_int; // 0x13c6 Mov
	func_983(var_1274_int, var_1275_int); // 0x13c7 NEW_2
	var_1291_int = 0; var_1292_int = 0; var_1293_int = 0; // 0x13c9 PushV
	var_1291_int = 3; // 0x13ca MovI
	var_1292_int = var_1248_int; // 0x13cb Mov
	var_1293_int = var_1249_int; // 0x13cc Mov
	func_1897(var_1291_int, var_1292_int, var_1293_int); // 0x13cd NEW_2
	return 0; // 0x13cf Return
}


func_10141()
{
	var_4728_string = ""; var_4729_bool = 0; // 0x279e PushV
	var_4728_string = "termitnik2@door1"; // 0x279f MovS
	var_4729_bool = 1; // 0x27a0 MovB
	func_177(var_4728_string, var_4729_bool); // 0x27a1 NEW_2
	return 0; // 0x27a3 Return
}


func_13216(var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; // 0x33a0 PushV
	var_46_string = "Disease update"; // 0x33a1 PushS
	Trace(var_46_string); // 0x33a2 Func
	var_35_int = 0; // 0x33a4 MovI
	var_47_int = 0; // 0x33a5 PushI
	var_48_bool = var_23_int == var_47_int; // 0x33a6 Eq
	if(var_48_bool == 0) goto Label_13226; // 0x33a7 JumpB
	var_35_int = 0; // 0x33a8 MovI
	goto Label_13280; // 0x33a9 Jump
	
Label_13280:
	var_49_int = 1; // 0x33e0 PushI
	var_50_int = var_23_int + var_49_int; // 0x33e1 Add
	var_51_int = 12; // 0x33e2 PushI
	var_52_bool = var_50_int != var_51_int; // 0x33e3 Neq
	if(var_52_bool == 0) goto Label_13548; // 0x33e4 JumpB
	var_53_string = "Diseased regions : "; // 0x33e5 PushS
	var_54_int = var_53_string + var_35_int; // 0x33e6 Add
	Trace(var_54_int); // 0x33e7 Func
	var_55_int = 1; // 0x33e9 PushI
	var_56_int = var_23_int + var_55_int; // 0x33ea Add
	var_57_int = 6; // 0x33eb PushI
	var_58_bool = var_56_int < var_57_int; // 0x33ec LT
	if(var_58_bool == 0) goto Label_13360; // 0x33ed JumpB
	var_36_int = 0; // 0x33ee MovI
	
Label_13295:
	var_59_int = 16; // 0x33ef PushI
	var_60_bool = var_36_int < var_59_int; // 0x33f0 LT
	if(var_60_bool == 0) goto Label_13320; // 0x33f1 JumpB
	var_61_bool = 0; var_62_int = 0; // 0x33f2 PushV
	var_62_int = var_36_int; // 0x33f3 Mov
	func_430(var_61_bool, var_62_int); // 0x33f4 NEW_2
	if(var_61_bool == 0) goto Label_13308; // 0x33f6 JumpB
	var_73_int = 0; // 0x33f7 PushV
	var_73_int = var_36_int; // 0x33f8 Mov
	func_472(var_73_int); // 0x33f9 NEW_2
	goto Label_13317; // 0x33fb Jump
	
Label_13317:
	var_85_int = 1; // 0x3405 PushI
	var_36_int = var_36_int + var_85_int; // 0x3406 Add2
	goto Label_13295; // 0x3407 Jump
	
Label_13308:
	var_86_bool = 0; var_87_int = 0; // 0x33fc PushV
	var_87_int = var_36_int; // 0x33fd Mov
	func_460(var_86_bool, var_87_int); // 0x33fe NEW_2
	if(var_86_bool == 0) goto Label_13317; // 0x3400 JumpB
	var_95_int = 0; // 0x3401 PushV
	var_95_int = var_36_int; // 0x3402 Mov
	func_412(var_95_int); // 0x3403 NEW_2
	
Label_13320:
	var_107_int = 2; // 0x3408 PushI
	var_108_bool = var_23_int == var_107_int; // 0x3409 Eq
	if(var_108_bool == 0) goto Label_13331; // 0x340a JumpB
	var_109_string = "Special diseased region: 5"; // 0x340b PushS
	Trace(var_109_string); // 0x340c Func
	var_110_int = 0; // 0x340e PushV
	var_110_int = 5; // 0x340f MovI
	func_442(var_110_int); // 0x3410 NEW_2
	goto Label_13341; // 0x3412 Jump
	
Label_13341:
	var_122_int = 0; // 0x341d PushV
	func_343(var_122_int); // 0x341e NEW_2
	var_37_int = var_122_int; // 0x341f Mov
	var_133_bool = var_37_int < var_35_int; // 0x3421 LT
	if(var_133_bool == 0) goto Label_13359; // 0x3422 JumpB
	var_38_int = var_35_int - var_37_int; // 0x3423 Sub2
	var_39_int = 0; // 0x3424 MovI
	
Label_13349:
	var_134_bool = var_39_int < var_38_int; // 0x3425 LT
	if(var_134_bool == 0) goto Label_13359; // 0x3426 JumpB
	var_135_int = 0; // 0x3427 PushV
	var_136_int = 1; // 0x3428 PushI
	var_135_int = var_23_int + var_136_int; // 0x3429 Add2
	func_361(var_135_int); // 0x342a NEW_2
	var_225_int = 1; // 0x342c PushI
	var_39_int = var_39_int + var_225_int; // 0x342d Add2
	goto Label_13349; // 0x342e Jump
	
Label_13359:
	goto Label_13547; // 0x342f Jump
	
Label_13547:
	goto Label_13573; // 0x34eb Jump
	
Label_13573:
	return 22; // 0x3505 Return
	
Label_13331:
	var_226_int = 3; // 0x3413 PushI
	var_227_bool = var_23_int == var_226_int; // 0x3414 Eq
	if(var_227_bool == 0) goto Label_13341; // 0x3415 JumpB
	var_228_string = "Special diseased region: 1"; // 0x3416 PushS
	Trace(var_228_string); // 0x3417 Func
	var_229_int = 0; // 0x3419 PushV
	var_229_int = 1; // 0x341a MovI
	func_442(var_229_int); // 0x341b NEW_2
	
Label_13360:
	var_230_int = 1; // 0x3430 PushI
	var_231_int = var_23_int + var_230_int; // 0x3431 Add
	var_232_int = 6; // 0x3432 PushI
	var_233_bool = var_231_int == var_232_int; // 0x3433 Eq
	if(var_233_bool == 0) goto Label_13392; // 0x3434 JumpB
	var_41_int = 0; // 0x3435 MovI
	
Label_13366:
	var_234_int = 16; // 0x3436 PushI
	var_235_bool = var_41_int < var_234_int; // 0x3437 LT
	if(var_235_bool == 0) goto Label_13391; // 0x3438 JumpB
	var_236_bool = 0; var_237_int = 0; // 0x3439 PushV
	var_237_int = var_41_int; // 0x343a Mov
	func_430(var_236_bool, var_237_int); // 0x343b NEW_2
	if(var_236_bool == 0) goto Label_13379; // 0x343d JumpB
	var_238_int = 0; // 0x343e PushV
	var_238_int = var_41_int; // 0x343f Mov
	func_472(var_238_int); // 0x3440 NEW_2
	goto Label_13388; // 0x3442 Jump
	
Label_13388:
	var_239_int = 1; // 0x344c PushI
	var_41_int = var_41_int + var_239_int; // 0x344d Add2
	goto Label_13366; // 0x344e Jump
	
Label_13379:
	var_240_bool = 0; var_241_int = 0; // 0x3443 PushV
	var_241_int = var_41_int; // 0x3444 Mov
	func_460(var_240_bool, var_241_int); // 0x3445 NEW_2
	if(var_240_bool == 0) goto Label_13388; // 0x3447 JumpB
	var_242_int = 0; // 0x3448 PushV
	var_242_int = var_41_int; // 0x3449 Mov
	func_412(var_242_int); // 0x344a NEW_2
	
Label_13391:
	goto Label_13408; // 0x344f Jump
	
Label_13408:
	var_243_int = 0; var_244_int = 0; // 0x3460 PushV
	var_244_int = var_23_int; // 0x3461 Mov
	func_12957(var_243_int, var_244_int); // 0x3462 NEW_2
	var_40_int = var_243_int; // 0x3463 Mov
	var_245_bool = 0; var_246_int = 0; // 0x3465 PushV
	var_246_int = var_23_int; // 0x3466 Mov
	func_12949(var_245_bool, var_246_int); // 0x3467 NEW_2
	if(var_245_bool == 0) goto Label_13423; // 0x3469 JumpB
	var_252_int = 0; // 0x346a PushV
	var_252_int = var_40_int; // 0x346b Mov
	func_412(var_252_int); // 0x346c NEW_2
	goto Label_13427; // 0x346e Jump
	
Label_13427:
	var_253_int = 0; var_254_int = 0; // 0x3473 PushV
	var_255_int = 1; // 0x3474 PushI
	var_254_int = var_23_int + var_255_int; // 0x3475 Add2
	func_12911(var_253_int, var_254_int); // 0x3476 NEW_2
	var_40_int = var_253_int; // 0x3477 Mov
	var_256_int = -1; // 0x3479 PushI
	var_257_bool = var_40_int != var_256_int; // 0x347a Neq
	if(var_257_bool == 0) goto Label_13440; // 0x347b JumpB
	var_258_int = 0; // 0x347c PushV
	var_258_int = var_40_int; // 0x347d Mov
	func_442(var_258_int); // 0x347e NEW_2
	
Label_13440:
	var_259_int = 0; var_260_int = 0; // 0x3480 PushV
	var_261_int = 1; // 0x3481 PushI
	var_260_int = var_23_int + var_261_int; // 0x3482 Add2
	func_12957(var_259_int, var_260_int); // 0x3483 NEW_2
	var_40_int = var_259_int; // 0x3484 Mov
	var_262_int = -1; // 0x3486 PushI
	var_263_bool = var_40_int != var_262_int; // 0x3487 Neq
	if(var_263_bool == 0) goto Label_13453; // 0x3488 JumpB
	var_264_int = 0; // 0x3489 PushV
	var_264_int = var_40_int; // 0x348a Mov
	func_412(var_264_int); // 0x348b NEW_2
	
Label_13453:
	var_265_int = 0; var_266_int = 0; // 0x348d PushV
	var_267_int = 2; // 0x348e PushI
	var_266_int = var_23_int + var_267_int; // 0x348f Add2
	func_13021(var_265_int, var_266_int); // 0x3490 NEW_2
	var_40_int = var_265_int; // 0x3491 Mov
	var_276_int = -1; // 0x3493 PushI
	var_277_bool = var_40_int != var_276_int; // 0x3494 Neq
	if(var_277_bool == 0) goto Label_13472; // 0x3495 JumpB
	var_278_bool = 0; var_279_int = 0; // 0x3496 PushV
	var_279_int = var_40_int; // 0x3497 Mov
	func_430(var_278_bool, var_279_int); // 0x3498 NEW_2
	var_280_bool = var_278_bool == 0; // 0x349a Not
	if(var_280_bool == 0) goto Label_13472; // 0x349b JumpB
	var_281_int = 0; // 0x349c PushV
	var_281_int = var_40_int; // 0x349d Mov
	func_442(var_281_int); // 0x349e NEW_2
	
Label_13472:
	var_282_int = 0; var_283_int = 0; // 0x34a0 PushV
	var_284_int = 2; // 0x34a1 PushI
	var_283_int = var_23_int + var_284_int; // 0x34a2 Add2
	func_12995(var_282_int, var_283_int); // 0x34a3 NEW_2
	var_40_int = var_282_int; // 0x34a4 Mov
	var_293_int = -1; // 0x34a6 PushI
	var_294_bool = var_40_int != var_293_int; // 0x34a7 Neq
	if(var_294_bool == 0) goto Label_13491; // 0x34a8 JumpB
	var_295_bool = 0; var_296_int = 0; // 0x34a9 PushV
	var_296_int = var_40_int; // 0x34aa Mov
	func_430(var_295_bool, var_296_int); // 0x34ab NEW_2
	var_297_bool = var_295_bool == 0; // 0x34ad Not
	if(var_297_bool == 0) goto Label_13491; // 0x34ae JumpB
	var_298_int = 0; // 0x34af PushV
	var_298_int = var_40_int; // 0x34b0 Mov
	func_442(var_298_int); // 0x34b1 NEW_2
	
Label_13491:
	var_299_int = 0; var_300_int = 0; // 0x34b3 PushV
	var_300_int = var_23_int; // 0x34b4 Mov
	func_12911(var_299_int, var_300_int); // 0x34b5 NEW_2
	var_40_int = var_299_int; // 0x34b6 Mov
	var_301_int = -1; // 0x34b8 PushI
	var_302_bool = var_40_int != var_301_int; // 0x34b9 Neq
	if(var_302_bool == 0) goto Label_13515; // 0x34ba JumpB
	var_303_bool = 0; var_304_int = 0; // 0x34bb PushV
	var_304_int = var_23_int; // 0x34bc Mov
	func_12903(var_303_bool, var_304_int); // 0x34bd NEW_2
	var_43_bool = var_303_bool; // 0x34be Mov
	var_310_bool = var_43_bool; // 0x34c0 Push
	if(var_310_bool == 0) goto Label_13511; // 0x34c1 JumpB
	var_311_int = 0; // 0x34c2 PushV
	var_311_int = var_40_int; // 0x34c3 Mov
	func_442(var_311_int); // 0x34c4 NEW_2
	goto Label_13515; // 0x34c6 Jump
	
Label_13515:
	var_312_int = 0; var_313_int = 0; // 0x34cb PushV
	var_314_int = 1; // 0x34cc PushI
	var_313_int = var_23_int + var_314_int; // 0x34cd Add2
	func_12995(var_312_int, var_313_int); // 0x34ce NEW_2
	var_40_int = var_312_int; // 0x34cf Mov
	var_315_int = -1; // 0x34d1 PushI
	var_316_bool = var_40_int != var_315_int; // 0x34d2 Neq
	if(var_316_bool == 0) goto Label_13528; // 0x34d3 JumpB
	var_317_int = 0; // 0x34d4 PushV
	var_317_int = var_40_int; // 0x34d5 Mov
	func_472(var_317_int); // 0x34d6 NEW_2
	
Label_13528:
	var_318_int = 0; var_319_int = 0; // 0x34d8 PushV
	var_320_int = 1; // 0x34d9 PushI
	var_319_int = var_23_int + var_320_int; // 0x34da Add2
	func_13021(var_318_int, var_319_int); // 0x34db NEW_2
	var_44_int = var_318_int; // 0x34dc Mov
	var_321_bool = 0; // 0x34de PushV
	var_321_bool = 0; // 0x34df MovB
	var_322_bool = var_44_int != var_40_int; // 0x34e0 Neq
	if(var_322_bool == 0) goto Label_13542; // 0x34e1 JumpB
	var_323_int = -1; // 0x34e2 PushI
	var_324_bool = var_44_int != var_323_int; // 0x34e3 Neq
	if(var_324_bool == 0) goto Label_13542; // 0x34e4 JumpB
	var_321_bool = 1; // 0x34e5 MovB
	
Label_13542:
	if(var_321_bool == 0) goto Label_13547; // 0x34e6 JumpB
	var_325_int = 0; // 0x34e7 PushV
	var_325_int = var_44_int; // 0x34e8 Mov
	func_472(var_325_int); // 0x34e9 NEW_2
	
Label_13511:
	var_326_int = 0; // 0x34c7 PushV
	var_326_int = var_40_int; // 0x34c8 Mov
	func_472(var_326_int); // 0x34c9 NEW_2
	
Label_13423:
	var_327_int = 0; // 0x346f PushV
	var_327_int = var_40_int; // 0x3470 Mov
	func_442(var_327_int); // 0x3471 NEW_2
	
Label_13392:
	var_42_int = 0; // 0x3450 MovI
	
Label_13393:
	var_328_int = 16; // 0x3451 PushI
	var_329_bool = var_42_int < var_328_int; // 0x3452 LT
	if(var_329_bool == 0) goto Label_13408; // 0x3453 JumpB
	var_330_bool = 0; var_331_int = 0; // 0x3454 PushV
	var_331_int = var_42_int; // 0x3455 Mov
	func_460(var_330_bool, var_331_int); // 0x3456 NEW_2
	if(var_330_bool == 0) goto Label_13405; // 0x3458 JumpB
	var_332_int = 0; // 0x3459 PushV
	var_332_int = var_42_int; // 0x345a Mov
	func_412(var_332_int); // 0x345b NEW_2
	
Label_13405:
	var_333_int = 1; // 0x345d PushI
	var_42_int = var_42_int + var_333_int; // 0x345e Add2
	goto Label_13393; // 0x345f Jump
	
Label_13548:
	var_45_int = 0; // 0x34ec MovI
	
Label_13549:
	var_334_int = 16; // 0x34ed PushI
	var_335_bool = var_45_int < var_334_int; // 0x34ee LT
	if(var_335_bool == 0) goto Label_13573; // 0x34ef JumpB
	var_336_bool = 0; // 0x34f0 PushV
	var_336_bool = 1; // 0x34f1 MovB
	var_337_bool = 0; var_338_int = 0; // 0x34f2 PushV
	var_338_int = var_45_int; // 0x34f3 Mov
	func_430(var_337_bool, var_338_int); // 0x34f4 NEW_2
	if(var_337_bool == 0) goto Label_13565; // 0x34f6 JumpB
	var_339_bool = 0; var_340_int = 0; // 0x34f7 PushV
	var_340_int = var_45_int; // 0x34f8 Mov
	func_460(var_339_bool, var_340_int); // 0x34f9 NEW_2
	if(var_339_bool == 0) goto Label_13565; // 0x34fb JumpB
	var_336_bool = 0; // 0x34fc MovB
	
Label_13565:
	if(var_336_bool == 0) goto Label_13570; // 0x34fd JumpB
	var_341_int = 0; // 0x34fe PushV
	var_341_int = var_45_int; // 0x34ff Mov
	func_412(var_341_int); // 0x3500 NEW_2
	
Label_13570:
	var_342_int = 1; // 0x3502 PushI
	var_45_int = var_45_int + var_342_int; // 0x3503 Add2
	goto Label_13549; // 0x3504 Jump
	
Label_13226:
	var_343_int = 1; // 0x33aa PushI
	var_344_bool = var_23_int == var_343_int; // 0x33ab Eq
	if(var_344_bool == 0) goto Label_13231; // 0x33ac JumpB
	var_35_int = 0; // 0x33ad MovI
	goto Label_13280; // 0x33ae Jump
	
Label_13231:
	var_345_int = 2; // 0x33af PushI
	var_346_bool = var_23_int == var_345_int; // 0x33b0 Eq
	if(var_346_bool == 0) goto Label_13236; // 0x33b1 JumpB
	var_35_int = 1; // 0x33b2 MovI
	goto Label_13280; // 0x33b3 Jump
	
Label_13236:
	var_347_int = 3; // 0x33b4 PushI
	var_348_bool = var_23_int == var_347_int; // 0x33b5 Eq
	if(var_348_bool == 0) goto Label_13241; // 0x33b6 JumpB
	var_35_int = 2; // 0x33b7 MovI
	goto Label_13280; // 0x33b8 Jump
	
Label_13241:
	var_349_int = 4; // 0x33b9 PushI
	var_350_bool = var_23_int == var_349_int; // 0x33ba Eq
	if(var_350_bool == 0) goto Label_13246; // 0x33bb JumpB
	var_35_int = 3; // 0x33bc MovI
	goto Label_13280; // 0x33bd Jump
	
Label_13246:
	var_351_int = 5; // 0x33be PushI
	var_352_bool = var_23_int == var_351_int; // 0x33bf Eq
	if(var_352_bool == 0) goto Label_13251; // 0x33c0 JumpB
	var_35_int = 4; // 0x33c1 MovI
	goto Label_13280; // 0x33c2 Jump
	
Label_13251:
	var_353_int = 6; // 0x33c3 PushI
	var_354_bool = var_23_int == var_353_int; // 0x33c4 Eq
	if(var_354_bool == 0) goto Label_13256; // 0x33c5 JumpB
	var_35_int = 5; // 0x33c6 MovI
	goto Label_13280; // 0x33c7 Jump
	
Label_13256:
	var_355_int = 7; // 0x33c8 PushI
	var_356_bool = var_23_int == var_355_int; // 0x33c9 Eq
	if(var_356_bool == 0) goto Label_13261; // 0x33ca JumpB
	var_35_int = 5; // 0x33cb MovI
	goto Label_13280; // 0x33cc Jump
	
Label_13261:
	var_357_int = 8; // 0x33cd PushI
	var_358_bool = var_23_int == var_357_int; // 0x33ce Eq
	if(var_358_bool == 0) goto Label_13266; // 0x33cf JumpB
	var_35_int = 6; // 0x33d0 MovI
	goto Label_13280; // 0x33d1 Jump
	
Label_13266:
	var_359_int = 9; // 0x33d2 PushI
	var_360_bool = var_23_int == var_359_int; // 0x33d3 Eq
	if(var_360_bool == 0) goto Label_13271; // 0x33d4 JumpB
	var_35_int = 6; // 0x33d5 MovI
	goto Label_13280; // 0x33d6 Jump
	
Label_13271:
	var_361_int = 10; // 0x33d7 PushI
	var_362_bool = var_23_int == var_361_int; // 0x33d8 Eq
	if(var_362_bool == 0) goto Label_13276; // 0x33d9 JumpB
	var_35_int = 7; // 0x33da MovI
	goto Label_13280; // 0x33db Jump
	
Label_13276:
	var_363_int = 11; // 0x33dc PushI
	var_364_bool = var_23_int == var_363_int; // 0x33dd Eq
	if(var_364_bool == 0) goto Label_13280; // 0x33de JumpB
	var_35_int = 8; // 0x33df MovI
}


func_11168(var_5233_bool)
{
	var_5236_int = 0; var_5237_string = ""; // 0x2ba1 PushV
	var_5237_string = "k5AlexandrVisit"; // 0x2ba2 MovS
	func_132(var_5236_int, var_5237_string); // 0x2ba3 NEW_2
	var_5238_int = 0; // 0x2ba5 PushI
	var_5239_bool = var_5236_int != var_5238_int; // 0x2ba6 Neq
	if(var_5239_bool == 0) goto Label_11178; // 0x2ba7 JumpB
	var_5233_bool = 1; // 0x2ba8 MovB
	return 0; // 0x2ba9 Return
	
Label_11178:
	var_5233_bool = 0; // 0x2baa MovB
	return 0; // 0x2bab Return
}


func_932(var_686_int, var_687_bool, var_688_int)
{
	var_689_string = ""; var_690_object = Obj(); var_691_object = Obj(); var_692_int = 0; var_693_string = ""; var_694_object = Obj(); var_695_string = ""; var_696_object = Obj(); var_697_object = Obj(); var_698_int = 0; var_699_string = ""; var_700_object = Obj(); // 0x3a4 PushV
	var_701_string = "dr_mark"; // 0x3a5 PushS
	var_702_int = 1; // 0x3a6 PushI
	var_703_int = var_686_int + var_702_int; // 0x3a7 Add
	var_695_string = var_701_string + var_703_int; // 0x3a8 Add2
	var_704_string = "br_"; // 0x3a9 PushS
	var_705_int = 1; // 0x3aa PushI
	var_706_int = var_686_int + var_705_int; // 0x3ab Add
	var_707_int = var_704_string + var_706_int; // 0x3ac Add
	FindActor(var_696_object, var_707_int); // 0x3ad Func
	var_708_bool = var_687_bool; // 0x3af Push
	if(var_708_bool == 0) goto Label_958; // 0x3b0 JumpB
	var_709_bool = var_696_object == 0; // 0x3b1 Not
	if(var_709_bool == 0) goto Label_957; // 0x3b2 JumpB
	GetMainOutdoorScene(var_697_object); // 0x3b3 Func
	var_710_string = "br_"; // 0x3b5 PushS
	var_711_int = 1; // 0x3b6 PushI
	var_712_int = var_686_int + var_711_int; // 0x3b7 Add
	var_713_int = var_710_string + var_712_int; // 0x3b8 Add
	var_714_cvector = CVector(0.0, 0.0, 0.0); // 0x3b9 PushVec
	AddActor(var_696_object, var_713_int, var_697_object, var_714_cvector); // 0x3ba Func
	var_697_object = 0; // 0x3bc SetNull
	
Label_957:
	goto Label_962; // 0x3bd Jump
	
Label_962:
	var_698_int = 1; // 0x3c2 MovI
	
Label_963:
	var_715_bool = var_698_int <= var_688_int; // 0x3c3 LE
	if(var_715_bool == 0) goto Label_981; // 0x3c4 JumpB
	var_716_string = "_"; // 0x3c5 PushS
	var_717_int = var_695_string + var_716_string; // 0x3c6 Add
	var_699_string = var_717_int + var_698_int; // 0x3c7 Add2
	FindActor(var_700_object, var_699_string); // 0x3c8 Func
	var_718_object = var_700_object; // 0x3ca Push
	if(var_718_object == 0) goto Label_977; // 0x3cb JumpB
	var_719_bool = 0; var_720_string = ""; var_721_string = ""; // 0x3cc PushV
	var_720_string = var_699_string; // 0x3cd Mov
	var_721_string = "cleanup"; // 0x3ce MovS
	func_239(var_719_bool, var_720_string, var_721_string); // 0x3cf NEW_2
	
Label_977:
	var_700_object = 0; // 0x3d1 SetNull
	var_722_int = 1; // 0x3d2 PushI
	var_698_int = var_698_int + var_722_int; // 0x3d3 Add2
	goto Label_963; // 0x3d4 Jump
	
Label_981:
	return 12; // 0x3d5 Return
	
Label_958:
	var_723_object = var_696_object; // 0x3be Push
	if(var_723_object == 0) goto Label_962; // 0x3bf JumpB
	RemoveActor(var_696_object); // 0x3c0 Func
}


func_10148()
{
	var_4734_string = ""; var_4735_bool = 0; // 0x27a5 PushV
	var_4734_string = "house_vlad@door2"; // 0x27a6 MovS
	var_4735_bool = 1; // 0x27a7 MovB
	func_177(var_4734_string, var_4735_bool); // 0x27a8 NEW_2
	return 0; // 0x27aa Return
}


func_10155()
{
	var_4716_string = ""; var_4717_bool = 0; // 0x27ac PushV
	var_4716_string = "cot_maria@door1"; // 0x27ad MovS
	var_4717_bool = 0; // 0x27ae MovB
	func_177(var_4716_string, var_4717_bool); // 0x27af NEW_2
	return 0; // 0x27b1 Return
}


func_11180(var_5241_bool)
{
	var_5244_int = 0; var_5245_string = ""; // 0x2bad PushV
	var_5245_string = "k5KaterinaVisit"; // 0x2bae MovS
	func_132(var_5244_int, var_5245_string); // 0x2baf NEW_2
	var_5246_int = 0; // 0x2bb1 PushI
	var_5247_bool = var_5244_int != var_5246_int; // 0x2bb2 Neq
	if(var_5247_bool == 0) goto Label_11190; // 0x2bb3 JumpB
	var_5241_bool = 1; // 0x2bb4 MovB
	return 0; // 0x2bb5 Return
	
Label_11190:
	var_5241_bool = 0; // 0x2bb6 MovB
	return 0; // 0x2bb7 Return
}


func_6062()
{
	var_210_string = "r3_house_2_02"; // 0x17af PushS
	add(var_210_string); // 0x17b0 ObjFunc
	var_211_string = "r3_house3_02_i2"; // 0x17b2 PushS
	add(var_211_string); // 0x17b3 ObjFunc
	var_212_string = "r3_house3_02"; // 0x17b5 PushS
	add(var_212_string); // 0x17b6 ObjFunc
	var_213_string = "r3_house4_05_i2"; // 0x17b8 PushS
	add(var_213_string); // 0x17b9 ObjFunc
	var_214_string = "r3_house4_05"; // 0x17bb PushS
	add(var_214_string); // 0x17bc ObjFunc
	var_215_string = "r3_house4_03_i2"; // 0x17be PushS
	add(var_215_string); // 0x17bf ObjFunc
	var_216_string = "r3_house4_04_i2"; // 0x17c1 PushS
	add(var_216_string); // 0x17c2 ObjFunc
	var_217_string = "r3_house4_04"; // 0x17c4 PushS
	add(var_217_string); // 0x17c5 ObjFunc
	var_218_string = "r3_house4_01_i2"; // 0x17c7 PushS
	add(var_218_string); // 0x17c8 ObjFunc
	var_219_string = "r3_house4_01"; // 0x17ca PushS
	add(var_219_string); // 0x17cb ObjFunc
	var_220_string = "r3_house_2_01"; // 0x17cd PushS
	add(var_220_string); // 0x17ce ObjFunc
	var_221_string = "r3_house4_02_i2"; // 0x17d0 PushS
	add(var_221_string); // 0x17d1 ObjFunc
	var_222_string = "r3_house4_02"; // 0x17d3 PushS
	add(var_222_string); // 0x17d4 ObjFunc
	var_223_string = "r3_house3_01_i2"; // 0x17d6 PushS
	add(var_223_string); // 0x17d7 ObjFunc
	var_224_string = "r3_house3_01"; // 0x17d9 PushS
	add(var_224_string); // 0x17da ObjFunc
	return 0; // 0x17dc Return
}


func_7086()
{
	var_298_string = "lc_house7_02"; // 0x1baf PushS
	add(var_298_string); // 0x1bb0 ObjFunc
	var_299_string = "lc_house7_03"; // 0x1bb2 PushS
	add(var_299_string); // 0x1bb3 ObjFunc
	var_300_string = "lc_house7_04"; // 0x1bb5 PushS
	add(var_300_string); // 0x1bb6 ObjFunc
	var_301_string = "lc_house7_05"; // 0x1bb8 PushS
	add(var_301_string); // 0x1bb9 ObjFunc
	var_302_string = "lc_house7_06"; // 0x1bbb PushS
	add(var_302_string); // 0x1bbc ObjFunc
	var_303_string = "lc_house7_07"; // 0x1bbe PushS
	add(var_303_string); // 0x1bbf ObjFunc
	var_304_string = "lc_House6_02"; // 0x1bc1 PushS
	add(var_304_string); // 0x1bc2 ObjFunc
	var_305_string = "lc_house7_01"; // 0x1bc4 PushS
	add(var_305_string); // 0x1bc5 ObjFunc
	var_306_string = "lc_house_2_02"; // 0x1bc7 PushS
	add(var_306_string); // 0x1bc8 ObjFunc
	var_307_string = "lc_House6_01"; // 0x1bca PushS
	add(var_307_string); // 0x1bcb ObjFunc
	var_308_string = "lc_house3_03_i2"; // 0x1bcd PushS
	add(var_308_string); // 0x1bce ObjFunc
	var_309_string = "lc_house3_03"; // 0x1bd0 PushS
	add(var_309_string); // 0x1bd1 ObjFunc
	var_310_string = "lc_House6_03"; // 0x1bd3 PushS
	add(var_310_string); // 0x1bd4 ObjFunc
	var_311_string = "lc_House6_04"; // 0x1bd6 PushS
	add(var_311_string); // 0x1bd7 ObjFunc
	return 0; // 0x1bd9 Return
}


func_10162()
{
	var_5647_string = ""; var_5648_bool = 0; // 0x27b3 PushV
	var_5647_string = "warehouse_rubin@door1"; // 0x27b4 MovS
	var_5648_bool = 0; // 0x27b5 MovB
	func_177(var_5647_string, var_5648_bool); // 0x27b6 NEW_2
	return 0; // 0x27b8 Return
}


func_11192(var_5285_bool)
{
	var_5288_int = 0; var_5289_string = ""; // 0x2bb9 PushV
	var_5289_string = "k6KaterinaVisit"; // 0x2bba MovS
	func_132(var_5288_int, var_5289_string); // 0x2bbb NEW_2
	var_5290_int = 0; // 0x2bbd PushI
	var_5291_bool = var_5288_int != var_5290_int; // 0x2bbe Neq
	if(var_5291_bool == 0) goto Label_11202; // 0x2bbf JumpB
	var_5285_bool = 1; // 0x2bc0 MovB
	return 0; // 0x2bc1 Return
	
Label_11202:
	var_5285_bool = 0; // 0x2bc2 MovB
	return 0; // 0x2bc3 Return
}


func_10169()
{
	var_5972_string = ""; var_5973_bool = 0; // 0x27ba PushV
	var_5972_string = "warehouse_rubin@door1"; // 0x27bb MovS
	var_5973_bool = 1; // 0x27bc MovB
	func_177(var_5972_string, var_5973_bool); // 0x27bd NEW_2
	return 0; // 0x27bf Return
}


func_9151(var_501_int, var_502_int, var_503_int)
{
	var_504_object = Obj(); var_505_object = Obj(); var_506_object = Obj(); var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj(); var_510_object = Obj(); var_511_object = Obj(); // 0x23bf PushV
	var_512_object = GlobalVars[8]; // 0x23c0 PushGE
	get(var_508_object, var_501_int); // 0x23c1 ObjFunc
	var_513_object = GlobalVars[9]; // 0x23c3 PushGE
	get(var_509_object, var_501_int); // 0x23c4 ObjFunc
	var_514_object = GlobalVars[10]; // 0x23c6 PushGE
	get(var_510_object, var_501_int); // 0x23c7 ObjFunc
	var_515_object = GlobalVars[13]; // 0x23c9 PushGE
	get(var_511_object, var_501_int); // 0x23ca ObjFunc
	var_516_int = 0; // 0x23cc PushI
	var_517_bool = var_501_int == var_516_int; // 0x23cd Eq
	if(var_517_bool == 0) goto Label_9177; // 0x23ce JumpB
	var_518_int = 0; var_519_int = 0; var_520_object = Obj(); var_521_object = Obj(); var_522_object = Obj(); var_523_object = Obj(); // 0x23cf PushV
	var_518_int = var_502_int; // 0x23d0 Mov
	var_519_int = var_503_int; // 0x23d1 Mov
	var_520_object = var_508_object; // 0x23d2 Mov
	var_521_object = var_509_object; // 0x23d3 Mov
	var_522_object = var_510_object; // 0x23d4 Mov
	var_523_object = var_511_object; // 0x23d5 Mov
	func_4387(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object); // 0x23d6 NEW_2
	goto Label_9371; // 0x23d8 Jump
	
Label_9371:
	return 8; // 0x249b Return
	
Label_9177:
	var_884_int = 1; // 0x23d9 PushI
	var_885_bool = var_501_int == var_884_int; // 0x23da Eq
	if(var_885_bool == 0) goto Label_9190; // 0x23db JumpB
	var_886_int = 0; var_887_int = 0; var_888_object = Obj(); var_889_object = Obj(); var_890_object = Obj(); var_891_object = Obj(); // 0x23dc PushV
	var_886_int = var_502_int; // 0x23dd Mov
	var_887_int = var_503_int; // 0x23de Mov
	var_888_object = var_508_object; // 0x23df Mov
	var_889_object = var_509_object; // 0x23e0 Mov
	var_890_object = var_510_object; // 0x23e1 Mov
	var_891_object = var_511_object; // 0x23e2 Mov
	func_4584(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object); // 0x23e3 NEW_2
	goto Label_9371; // 0x23e5 Jump
	
Label_9190:
	var_1027_int = 2; // 0x23e6 PushI
	var_1028_bool = var_501_int == var_1027_int; // 0x23e7 Eq
	if(var_1028_bool == 0) goto Label_9203; // 0x23e8 JumpB
	var_1029_int = 0; var_1030_int = 0; var_1031_object = Obj(); var_1032_object = Obj(); var_1033_object = Obj(); var_1034_object = Obj(); // 0x23e9 PushV
	var_1029_int = var_502_int; // 0x23ea Mov
	var_1030_int = var_503_int; // 0x23eb Mov
	var_1031_object = var_508_object; // 0x23ec Mov
	var_1032_object = var_509_object; // 0x23ed Mov
	var_1033_object = var_510_object; // 0x23ee Mov
	var_1034_object = var_511_object; // 0x23ef Mov
	func_4790(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object); // 0x23f0 NEW_2
	goto Label_9371; // 0x23f2 Jump
	
Label_9203:
	var_1246_int = 3; // 0x23f3 PushI
	var_1247_bool = var_501_int == var_1246_int; // 0x23f4 Eq
	if(var_1247_bool == 0) goto Label_9216; // 0x23f5 JumpB
	var_1248_int = 0; var_1249_int = 0; var_1250_object = Obj(); var_1251_object = Obj(); var_1252_object = Obj(); var_1253_object = Obj(); // 0x23f6 PushV
	var_1248_int = var_502_int; // 0x23f7 Mov
	var_1249_int = var_503_int; // 0x23f8 Mov
	var_1250_object = var_508_object; // 0x23f9 Mov
	var_1251_object = var_509_object; // 0x23fa Mov
	var_1252_object = var_510_object; // 0x23fb Mov
	var_1253_object = var_511_object; // 0x23fc Mov
	func_5020(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object); // 0x23fd NEW_2
	goto Label_9371; // 0x23ff Jump
	
Label_9216:
	var_1294_int = 4; // 0x2400 PushI
	var_1295_bool = var_501_int == var_1294_int; // 0x2401 Eq
	if(var_1295_bool == 0) goto Label_9229; // 0x2402 JumpB
	var_1296_int = 0; var_1297_int = 0; var_1298_object = Obj(); var_1299_object = Obj(); var_1300_object = Obj(); var_1301_object = Obj(); // 0x2403 PushV
	var_1296_int = var_502_int; // 0x2404 Mov
	var_1297_int = var_503_int; // 0x2405 Mov
	var_1298_object = var_508_object; // 0x2406 Mov
	var_1299_object = var_509_object; // 0x2407 Mov
	var_1300_object = var_510_object; // 0x2408 Mov
	var_1301_object = var_511_object; // 0x2409 Mov
	func_5238(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object); // 0x240a NEW_2
	goto Label_9371; // 0x240c Jump
	
Label_9229:
	var_1339_int = 5; // 0x240d PushI
	var_1340_bool = var_501_int == var_1339_int; // 0x240e Eq
	if(var_1340_bool == 0) goto Label_9242; // 0x240f JumpB
	var_1341_int = 0; var_1342_int = 0; var_1343_object = Obj(); var_1344_object = Obj(); var_1345_object = Obj(); var_1346_object = Obj(); // 0x2410 PushV
	var_1341_int = var_502_int; // 0x2411 Mov
	var_1342_int = var_503_int; // 0x2412 Mov
	var_1343_object = var_508_object; // 0x2413 Mov
	var_1344_object = var_509_object; // 0x2414 Mov
	var_1345_object = var_510_object; // 0x2415 Mov
	var_1346_object = var_511_object; // 0x2416 Mov
	func_5483(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object); // 0x2417 NEW_2
	goto Label_9371; // 0x2419 Jump
	
Label_9242:
	var_1372_int = 6; // 0x241a PushI
	var_1373_bool = var_501_int == var_1372_int; // 0x241b Eq
	if(var_1373_bool == 0) goto Label_9255; // 0x241c JumpB
	var_1374_int = 0; var_1375_int = 0; var_1376_object = Obj(); var_1377_object = Obj(); var_1378_object = Obj(); var_1379_object = Obj(); // 0x241d PushV
	var_1374_int = var_502_int; // 0x241e Mov
	var_1375_int = var_503_int; // 0x241f Mov
	var_1376_object = var_508_object; // 0x2420 Mov
	var_1377_object = var_509_object; // 0x2421 Mov
	var_1378_object = var_510_object; // 0x2422 Mov
	var_1379_object = var_511_object; // 0x2423 Mov
	func_5641(var_1379_object); // 0x2424 NEW_2
	goto Label_9371; // 0x2426 Jump
	
Label_9255:
	var_1382_int = 7; // 0x2427 PushI
	var_1383_bool = var_501_int == var_1382_int; // 0x2428 Eq
	if(var_1383_bool == 0) goto Label_9268; // 0x2429 JumpB
	var_1384_int = 0; var_1385_int = 0; var_1386_object = Obj(); var_1387_object = Obj(); var_1388_object = Obj(); var_1389_object = Obj(); // 0x242a PushV
	var_1384_int = var_502_int; // 0x242b Mov
	var_1385_int = var_503_int; // 0x242c Mov
	var_1386_object = var_508_object; // 0x242d Mov
	var_1387_object = var_509_object; // 0x242e Mov
	var_1388_object = var_510_object; // 0x242f Mov
	var_1389_object = var_511_object; // 0x2430 Mov
	func_5706(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object); // 0x2431 NEW_2
	goto Label_9371; // 0x2433 Jump
	
Label_9268:
	var_1569_int = 8; // 0x2434 PushI
	var_1570_bool = var_501_int == var_1569_int; // 0x2435 Eq
	if(var_1570_bool == 0) goto Label_9281; // 0x2436 JumpB
	var_1571_int = 0; var_1572_int = 0; var_1573_object = Obj(); var_1574_object = Obj(); var_1575_object = Obj(); var_1576_object = Obj(); // 0x2437 PushV
	var_1571_int = var_502_int; // 0x2438 Mov
	var_1572_int = var_503_int; // 0x2439 Mov
	var_1573_object = var_508_object; // 0x243a Mov
	var_1574_object = var_509_object; // 0x243b Mov
	var_1575_object = var_510_object; // 0x243c Mov
	var_1576_object = var_511_object; // 0x243d Mov
	func_5906(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object); // 0x243e NEW_2
	goto Label_9371; // 0x2440 Jump
	
Label_9281:
	var_1602_int = 9; // 0x2441 PushI
	var_1603_bool = var_501_int == var_1602_int; // 0x2442 Eq
	if(var_1603_bool == 0) goto Label_9294; // 0x2443 JumpB
	var_1604_int = 0; var_1605_int = 0; var_1606_object = Obj(); var_1607_object = Obj(); var_1608_object = Obj(); var_1609_object = Obj(); // 0x2444 PushV
	var_1604_int = var_502_int; // 0x2445 Mov
	var_1605_int = var_503_int; // 0x2446 Mov
	var_1606_object = var_508_object; // 0x2447 Mov
	var_1607_object = var_509_object; // 0x2448 Mov
	var_1608_object = var_510_object; // 0x2449 Mov
	var_1609_object = var_511_object; // 0x244a Mov
	func_6109(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object); // 0x244b NEW_2
	goto Label_9371; // 0x244d Jump
	
Label_9294:
	var_1635_int = 10; // 0x244e PushI
	var_1636_bool = var_501_int == var_1635_int; // 0x244f Eq
	if(var_1636_bool == 0) goto Label_9307; // 0x2450 JumpB
	var_1637_int = 0; var_1638_int = 0; var_1639_object = Obj(); var_1640_object = Obj(); var_1641_object = Obj(); var_1642_object = Obj(); // 0x2451 PushV
	var_1637_int = var_502_int; // 0x2452 Mov
	var_1638_int = var_503_int; // 0x2453 Mov
	var_1639_object = var_508_object; // 0x2454 Mov
	var_1640_object = var_509_object; // 0x2455 Mov
	var_1641_object = var_510_object; // 0x2456 Mov
	var_1642_object = var_511_object; // 0x2457 Mov
	func_6318(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object); // 0x2458 NEW_2
	goto Label_9371; // 0x245a Jump
	
Label_9307:
	var_1668_int = 11; // 0x245b PushI
	var_1669_bool = var_501_int == var_1668_int; // 0x245c Eq
	if(var_1669_bool == 0) goto Label_9320; // 0x245d JumpB
	var_1670_int = 0; var_1671_int = 0; var_1672_object = Obj(); var_1673_object = Obj(); var_1674_object = Obj(); var_1675_object = Obj(); // 0x245e PushV
	var_1670_int = var_502_int; // 0x245f Mov
	var_1671_int = var_503_int; // 0x2460 Mov
	var_1672_object = var_508_object; // 0x2461 Mov
	var_1673_object = var_509_object; // 0x2462 Mov
	var_1674_object = var_510_object; // 0x2463 Mov
	var_1675_object = var_511_object; // 0x2464 Mov
	func_6530(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object); // 0x2465 NEW_2
	goto Label_9371; // 0x2467 Jump
	
Label_9320:
	var_1701_int = 12; // 0x2468 PushI
	var_1702_bool = var_501_int == var_1701_int; // 0x2469 Eq
	if(var_1702_bool == 0) goto Label_9333; // 0x246a JumpB
	var_1703_int = 0; var_1704_int = 0; var_1705_object = Obj(); var_1706_object = Obj(); var_1707_object = Obj(); var_1708_object = Obj(); // 0x246b PushV
	var_1703_int = var_502_int; // 0x246c Mov
	var_1704_int = var_503_int; // 0x246d Mov
	var_1705_object = var_508_object; // 0x246e Mov
	var_1706_object = var_509_object; // 0x246f Mov
	var_1707_object = var_510_object; // 0x2470 Mov
	var_1708_object = var_511_object; // 0x2471 Mov
	func_6727(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object); // 0x2472 NEW_2
	goto Label_9371; // 0x2474 Jump
	
Label_9333:
	var_1734_int = 13; // 0x2475 PushI
	var_1735_bool = var_501_int == var_1734_int; // 0x2476 Eq
	if(var_1735_bool == 0) goto Label_9346; // 0x2477 JumpB
	var_1736_int = 0; var_1737_int = 0; var_1738_object = Obj(); var_1739_object = Obj(); var_1740_object = Obj(); var_1741_object = Obj(); // 0x2478 PushV
	var_1736_int = var_502_int; // 0x2479 Mov
	var_1737_int = var_503_int; // 0x247a Mov
	var_1738_object = var_508_object; // 0x247b Mov
	var_1739_object = var_509_object; // 0x247c Mov
	var_1740_object = var_510_object; // 0x247d Mov
	var_1741_object = var_511_object; // 0x247e Mov
	func_6930(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object); // 0x247f NEW_2
	goto Label_9371; // 0x2481 Jump
	
Label_9346:
	var_1767_int = 14; // 0x2482 PushI
	var_1768_bool = var_501_int == var_1767_int; // 0x2483 Eq
	if(var_1768_bool == 0) goto Label_9359; // 0x2484 JumpB
	var_1769_int = 0; var_1770_int = 0; var_1771_object = Obj(); var_1772_object = Obj(); var_1773_object = Obj(); var_1774_object = Obj(); // 0x2485 PushV
	var_1769_int = var_502_int; // 0x2486 Mov
	var_1770_int = var_503_int; // 0x2487 Mov
	var_1771_object = var_508_object; // 0x2488 Mov
	var_1772_object = var_509_object; // 0x2489 Mov
	var_1773_object = var_510_object; // 0x248a Mov
	var_1774_object = var_511_object; // 0x248b Mov
	func_7130(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object); // 0x248c NEW_2
	goto Label_9371; // 0x248e Jump
	
Label_9359:
	var_1945_int = 15; // 0x248f PushI
	var_1946_bool = var_501_int == var_1945_int; // 0x2490 Eq
	if(var_1946_bool == 0) goto Label_9371; // 0x2491 JumpB
	var_1947_int = 0; var_1948_int = 0; var_1949_object = Obj(); var_1950_object = Obj(); var_1951_object = Obj(); var_1952_object = Obj(); // 0x2492 PushV
	var_1947_int = var_502_int; // 0x2493 Mov
	var_1948_int = var_503_int; // 0x2494 Mov
	var_1949_object = var_508_object; // 0x2495 Mov
	var_1950_object = var_509_object; // 0x2496 Mov
	var_1951_object = var_510_object; // 0x2497 Mov
	var_1952_object = var_511_object; // 0x2498 Mov
	func_7312(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object); // 0x2499 NEW_2
}


func_10176()
{
	var_5723_object = Obj(); var_5724_object = Obj(); var_5725_object = Obj(); var_5726_object = Obj(); // 0x27c0 PushV
	var_5727_object = Obj(); // 0x27c1 PushV
	func_11417(var_5727_object); // 0x27c2 NEW_2
	var_5725_object = var_5727_object; // 0x27c3 Mov
	var_5728_string = "k1q01AlexandrGotoKaterina"; // 0x27c5 PushS
	FindMark(var_5726_object, var_5728_string); // 0x27c6 ObjFunc
	var_5729_object = var_5726_object; // 0x27c8 Push
	if(var_5729_object == 0) goto Label_10188; // 0x27c9 JumpB
	Remove(); // 0x27ca ObjFunc
	
Label_10188:
	var_5730_string = "k1q01AlexandrGotoStation"; // 0x27cc PushS
	FindMark(var_5726_object, var_5730_string); // 0x27cd ObjFunc
	var_5731_object = var_5726_object; // 0x27cf Push
	if(var_5731_object == 0) goto Label_10195; // 0x27d0 JumpB
	Remove(); // 0x27d1 ObjFunc
	
Label_10195:
	var_5732_string = "k1q01BurahGotoAnna"; // 0x27d3 PushS
	FindMark(var_5726_object, var_5732_string); // 0x27d4 ObjFunc
	var_5733_object = var_5726_object; // 0x27d6 Push
	if(var_5733_object == 0) goto Label_10202; // 0x27d7 JumpB
	Remove(); // 0x27d8 ObjFunc
	
Label_10202:
	var_5734_string = "k1q01CompletedGotoAlexandt"; // 0x27da PushS
	FindMark(var_5726_object, var_5734_string); // 0x27db ObjFunc
	var_5735_object = var_5726_object; // 0x27dd Push
	if(var_5735_object == 0) goto Label_10209; // 0x27de JumpB
	Remove(); // 0x27df ObjFunc
	
Label_10209:
	var_5736_string = "k1q01KaterinaGotoAlexandr"; // 0x27e1 PushS
	FindMark(var_5726_object, var_5736_string); // 0x27e2 ObjFunc
	var_5737_object = var_5726_object; // 0x27e4 Push
	if(var_5737_object == 0) goto Label_10216; // 0x27e5 JumpB
	Remove(); // 0x27e6 ObjFunc
	
Label_10216:
	var_5738_string = "k1q01LaskaGotoBurah"; // 0x27e8 PushS
	FindMark(var_5726_object, var_5738_string); // 0x27e9 ObjFunc
	var_5739_object = var_5726_object; // 0x27eb Push
	if(var_5739_object == 0) goto Label_10223; // 0x27ec JumpB
	Remove(); // 0x27ed ObjFunc
	
Label_10223:
	var_5740_string = "k1q01StationGotoLaska"; // 0x27ef PushS
	FindMark(var_5726_object, var_5740_string); // 0x27f0 ObjFunc
	var_5741_object = var_5726_object; // 0x27f2 Push
	if(var_5741_object == 0) goto Label_10230; // 0x27f3 JumpB
	Remove(); // 0x27f4 ObjFunc
	
Label_10230:
	var_5742_string = "k1q02GeorgGotoMaria"; // 0x27f6 PushS
	FindMark(var_5726_object, var_5742_string); // 0x27f7 ObjFunc
	var_5743_object = var_5726_object; // 0x27f9 Push
	if(var_5743_object == 0) goto Label_10237; // 0x27fa JumpB
	Remove(); // 0x27fb ObjFunc
	
Label_10237:
	var_5744_string = "k1q02KaterinaGotoGeorg"; // 0x27fd PushS
	FindMark(var_5726_object, var_5744_string); // 0x27fe ObjFunc
	var_5745_object = var_5726_object; // 0x2800 Push
	if(var_5745_object == 0) goto Label_10244; // 0x2801 JumpB
	Remove(); // 0x2802 ObjFunc
	
Label_10244:
	var_5746_string = "k1q03AnnaGotoNotkin"; // 0x2804 PushS
	FindMark(var_5726_object, var_5746_string); // 0x2805 ObjFunc
	var_5747_object = var_5726_object; // 0x2807 Push
	if(var_5747_object == 0) goto Label_10251; // 0x2808 JumpB
	Remove(); // 0x2809 ObjFunc
	
Label_10251:
	var_5748_bool = 0; var_5749_int = 0; // 0x280b PushV
	var_5749_int = 318; // 0x280c MovI
	func_11392(var_5748_bool, var_5749_int); // 0x280d NEW_2
	var_5750_bool = 0; var_5751_int = 0; // 0x280f PushV
	var_5751_int = 326; // 0x2810 MovI
	func_11392(var_5750_bool, var_5751_int); // 0x2811 NEW_2
	var_5752_bool = 0; var_5753_int = 0; // 0x2813 PushV
	var_5753_int = 333; // 0x2814 MovI
	func_11392(var_5752_bool, var_5753_int); // 0x2815 NEW_2
	return 4; // 0x2817 Return
}


func_4035(var_3248_int, var_3249_int, var_3250_int)
{
	var_3251_int = 0; var_3252_int = 0; var_3253_int = 0; var_3254_int = 0; var_3255_int = 0; var_3256_int = 0; var_3257_int = 0; var_3258_int = 0; // 0xfc3 PushV
	var_3259_bool = 0; // 0xfc4 PushV
	var_3259_bool = 0; // 0xfc5 MovB
	var_3260_int = 8; // 0xfc6 PushI
	var_3261_bool = var_3250_int > var_3260_int; // 0xfc7 GT
	if(var_3261_bool == 0) goto Label_4045; // 0xfc8 JumpB
	var_3262_int = 21; // 0xfc9 PushI
	var_3263_bool = var_3250_int < var_3262_int; // 0xfca LT
	if(var_3263_bool == 0) goto Label_4045; // 0xfcb JumpB
	var_3259_bool = 1; // 0xfcc MovB
	
Label_4045:
	if(var_3259_bool == 0) goto Label_4122; // 0xfcd JumpB
	var_3264_int = 0; var_3265_string = ""; var_3266_string = ""; var_3267_int = 0; // 0xfce PushV
	var_3264_int = var_3248_int; // 0xfcf Mov
	var_3265_string = "pers_rat"; // 0xfd0 MovS
	var_3266_string = "rat.xml"; // 0xfd1 MovS
	var_3267_int = 4; // 0xfd2 MovI
	func_503(var_3264_int, var_3265_string, var_3266_string, var_3267_int); // 0xfd3 NEW_2
	var_3268_int = 0; var_3269_string = ""; var_3270_string = ""; var_3271_int = 0; // 0xfd5 PushV
	var_3268_int = var_3248_int; // 0xfd6 Mov
	var_3269_string = "pers_alkash"; // 0xfd7 MovS
	var_3270_string = "alkash.xml"; // 0xfd8 MovS
	var_3271_int = 2; // 0xfd9 MovI
	func_503(var_3268_int, var_3269_string, var_3270_string, var_3271_int); // 0xfda NEW_2
	var_3272_int = 0; var_3273_string = ""; var_3274_string = ""; var_3275_int = 0; // 0xfdc PushV
	var_3272_int = var_3248_int; // 0xfdd Mov
	var_3273_string = "pers_dohodyaga"; // 0xfde MovS
	var_3274_string = "dohodyaga.xml"; // 0xfdf MovS
	var_3275_int = 1; // 0xfe0 MovI
	func_503(var_3272_int, var_3273_string, var_3274_string, var_3275_int); // 0xfe1 NEW_2
	var_3276_int = 2; // 0xfe3 PushI
	var_3277_float = 0; var_3278_int = 0; // 0xfe4 PushV
	var_3278_int = var_3249_int; // 0xfe5 Mov
	func_1165(var_3277_float, var_3278_int); // 0xfe6 NEW_2
	var_3255_int = var_3276_int * var_3277_float; // 0xfe8 Mult2
	var_3323_int = var_3255_int; // 0xfe9 Push
	if(var_3323_int == 0) goto Label_4082; // 0xfea JumpB
	var_3324_int = 0; var_3325_string = ""; var_3326_string = ""; var_3327_int = 0; // 0xfeb PushV
	var_3324_int = var_3248_int; // 0xfec Mov
	var_3325_string = "pers_grabitel"; // 0xfed MovS
	var_3326_string = "grabitel.xml"; // 0xfee MovS
	var_3327_int = var_3255_int; // 0xfef Mov
	func_503(var_3324_int, var_3325_string, var_3326_string, var_3327_int); // 0xff0 NEW_2
	
Label_4082:
	var_3328_int = 1; // 0xff2 PushI
	var_3329_int = var_3249_int + var_3328_int; // 0xff3 Add
	var_3330_int = 2; // 0xff4 PushI
	var_3331_bool = var_3329_int >= var_3330_int; // 0xff5 GE
	if(var_3331_bool == 0) goto Label_4106; // 0xff6 JumpB
	var_3332_int = 0; var_3333_string = ""; var_3334_string = ""; var_3335_int = 0; // 0xff7 PushV
	var_3332_int = var_3248_int; // 0xff8 Mov
	var_3333_string = "pers_patrool"; // 0xff9 MovS
	var_3334_string = "patrol.xml"; // 0xffa MovS
	var_3335_int = 2; // 0xffb MovI
	func_503(var_3332_int, var_3333_string, var_3334_string, var_3335_int); // 0xffc NEW_2
	var_3336_bool = 0; var_3337_int = 0; // 0xffe PushV
	var_3337_int = var_3249_int; // 0xfff Mov
	func_1372(var_3336_bool, var_3337_int); // 0x1000 NEW_2
	if(var_3336_bool == 0) goto Label_4106; // 0x1002 JumpB
	var_3338_int = 0; var_3339_string = ""; var_3340_string = ""; var_3341_int = 0; // 0x1003 PushV
	var_3338_int = var_3248_int; // 0x1004 Mov
	var_3339_string = "pers_soldat_hand"; // 0x1005 MovS
	var_3340_string = "soldier_patrol.xml"; // 0x1006 MovS
	var_3341_int = 1; // 0x1007 MovI
	func_503(var_3338_int, var_3339_string, var_3340_string, var_3341_int); // 0x1008 NEW_2
	
Label_4106:
	var_3342_int = 1; // 0x100a PushI
	var_3343_float = 0; var_3344_int = 0; // 0x100b PushV
	var_3344_int = var_3249_int; // 0x100c Mov
	func_1255(var_3343_float, var_3344_int); // 0x100d NEW_2
	var_3256_int = var_3342_int * var_3343_float; // 0x100f Mult2
	var_3345_int = var_3256_int; // 0x1010 Push
	if(var_3345_int == 0) goto Label_4121; // 0x1011 JumpB
	var_3346_int = 0; var_3347_string = ""; var_3348_string = ""; var_3349_int = 0; // 0x1012 PushV
	var_3346_int = var_3248_int; // 0x1013 Mov
	var_3347_string = "pers_bomber"; // 0x1014 MovS
	var_3348_string = "bomber.xml"; // 0x1015 MovS
	var_3349_int = var_3256_int; // 0x1016 Mov
	func_503(var_3346_int, var_3347_string, var_3348_string, var_3349_int); // 0x1017 NEW_2
	
Label_4121:
	goto Label_4197; // 0x1019 Jump
	
Label_4197:
	var_3350_bool = 0; var_3351_int = 0; // 0x1065 PushV
	var_3351_int = var_3249_int; // 0x1066 Mov
	func_1372(var_3350_bool, var_3351_int); // 0x1067 NEW_2
	if(var_3350_bool == 0) goto Label_4209; // 0x1069 JumpB
	var_3352_int = 0; var_3353_string = ""; var_3354_string = ""; var_3355_int = 0; // 0x106a PushV
	var_3352_int = var_3248_int; // 0x106b Mov
	var_3353_string = "pers_sanitar"; // 0x106c MovS
	var_3354_string = "sanitar.xml"; // 0x106d MovS
	var_3355_int = 1; // 0x106e MovI
	func_503(var_3352_int, var_3353_string, var_3354_string, var_3355_int); // 0x106f NEW_2
	
Label_4209:
	return 8; // 0x1071 Return
	
Label_4122:
	var_3356_int = 0; var_3357_string = ""; var_3358_string = ""; var_3359_int = 0; // 0x101a PushV
	var_3356_int = var_3248_int; // 0x101b Mov
	var_3357_string = "pers_rat"; // 0x101c MovS
	var_3358_string = "rat.xml"; // 0x101d MovS
	var_3359_int = 7; // 0x101e MovI
	func_503(var_3356_int, var_3357_string, var_3358_string, var_3359_int); // 0x101f NEW_2
	var_3360_int = 0; var_3361_string = ""; var_3362_string = ""; var_3363_int = 0; // 0x1021 PushV
	var_3360_int = var_3248_int; // 0x1022 Mov
	var_3361_string = "pers_alkash"; // 0x1023 MovS
	var_3362_string = "alkash.xml"; // 0x1024 MovS
	var_3363_int = 1; // 0x1025 MovI
	func_503(var_3360_int, var_3361_string, var_3362_string, var_3363_int); // 0x1026 NEW_2
	var_3364_int = 0; var_3365_string = ""; var_3366_string = ""; var_3367_int = 0; // 0x1028 PushV
	var_3364_int = var_3248_int; // 0x1029 Mov
	var_3365_string = "pers_dohodyaga"; // 0x102a MovS
	var_3366_string = "dohodyaga.xml"; // 0x102b MovS
	var_3367_int = 1; // 0x102c MovI
	func_503(var_3364_int, var_3365_string, var_3366_string, var_3367_int); // 0x102d NEW_2
	var_3368_int = 2; // 0x102f PushI
	var_3369_float = 0; var_3370_int = 0; // 0x1030 PushV
	var_3370_int = var_3249_int; // 0x1031 Mov
	func_1165(var_3369_float, var_3370_int); // 0x1032 NEW_2
	var_3257_int = var_3368_int * var_3369_float; // 0x1034 Mult2
	var_3371_int = var_3257_int; // 0x1035 Push
	if(var_3371_int == 0) goto Label_4158; // 0x1036 JumpB
	var_3372_int = 0; var_3373_string = ""; var_3374_string = ""; var_3375_int = 0; // 0x1037 PushV
	var_3372_int = var_3248_int; // 0x1038 Mov
	var_3373_string = "pers_grabitel"; // 0x1039 MovS
	var_3374_string = "grabitel.xml"; // 0x103a MovS
	var_3375_int = var_3257_int; // 0x103b Mov
	func_503(var_3372_int, var_3373_string, var_3374_string, var_3375_int); // 0x103c NEW_2
	
Label_4158:
	var_3376_int = 1; // 0x103e PushI
	var_3377_int = var_3249_int + var_3376_int; // 0x103f Add
	var_3378_int = 2; // 0x1040 PushI
	var_3379_bool = var_3377_int >= var_3378_int; // 0x1041 GE
	if(var_3379_bool == 0) goto Label_4182; // 0x1042 JumpB
	var_3380_int = 0; var_3381_string = ""; var_3382_string = ""; var_3383_int = 0; // 0x1043 PushV
	var_3380_int = var_3248_int; // 0x1044 Mov
	var_3381_string = "pers_patrool"; // 0x1045 MovS
	var_3382_string = "patrol.xml"; // 0x1046 MovS
	var_3383_int = 1; // 0x1047 MovI
	func_503(var_3380_int, var_3381_string, var_3382_string, var_3383_int); // 0x1048 NEW_2
	var_3384_bool = 0; var_3385_int = 0; // 0x104a PushV
	var_3385_int = var_3249_int; // 0x104b Mov
	func_1372(var_3384_bool, var_3385_int); // 0x104c NEW_2
	if(var_3384_bool == 0) goto Label_4182; // 0x104e JumpB
	var_3386_int = 0; var_3387_string = ""; var_3388_string = ""; var_3389_int = 0; // 0x104f PushV
	var_3386_int = var_3248_int; // 0x1050 Mov
	var_3387_string = "pers_soldat_hand"; // 0x1051 MovS
	var_3388_string = "soldier_patrol.xml"; // 0x1052 MovS
	var_3389_int = 1; // 0x1053 MovI
	func_503(var_3386_int, var_3387_string, var_3388_string, var_3389_int); // 0x1054 NEW_2
	
Label_4182:
	var_3390_int = 1; // 0x1056 PushI
	var_3391_float = 0; var_3392_int = 0; // 0x1057 PushV
	var_3392_int = var_3249_int; // 0x1058 Mov
	func_1255(var_3391_float, var_3392_int); // 0x1059 NEW_2
	var_3258_int = var_3390_int * var_3391_float; // 0x105b Mult2
	var_3393_int = var_3258_int; // 0x105c Push
	if(var_3393_int == 0) goto Label_4197; // 0x105d JumpB
	var_3394_int = 0; var_3395_string = ""; var_3396_string = ""; var_3397_int = 0; // 0x105e PushV
	var_3394_int = var_3248_int; // 0x105f Mov
	var_3395_string = "pers_bomber"; // 0x1060 MovS
	var_3396_string = "bomber.xml"; // 0x1061 MovS
	var_3397_int = var_3258_int; // 0x1062 Mov
	func_503(var_3394_int, var_3395_string, var_3396_string, var_3397_int); // 0x1063 NEW_2
}


func_11204(var_5277_bool)
{
	var_5280_int = 0; var_5281_string = ""; // 0x2bc5 PushV
	var_5281_string = "k6AlexandrVisit"; // 0x2bc6 MovS
	func_132(var_5280_int, var_5281_string); // 0x2bc7 NEW_2
	var_5282_int = 0; // 0x2bc9 PushI
	var_5283_bool = var_5280_int != var_5282_int; // 0x2bca Neq
	if(var_5283_bool == 0) goto Label_11214; // 0x2bcb JumpB
	var_5277_bool = 1; // 0x2bcc MovB
	return 0; // 0x2bcd Return
	
Label_11214:
	var_5277_bool = 0; // 0x2bce MovB
	return 0; // 0x2bcf Return
}


func_5072(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object)
{
	var_2559_int = 0; // 0x13d1 PushI
	var_2560_bool = var_2554_int == var_2559_int; // 0x13d2 Eq
	if(var_2560_bool == 0) goto Label_5112; // 0x13d3 JumpB
	var_2561_int = 0; var_2562_bool = 0; // 0x13d4 PushV
	var_2561_int = 3; // 0x13d5 MovI
	var_2562_bool = 1; // 0x13d6 MovB
	func_796(var_2561_int, var_2562_bool); // 0x13d7 NEW_2
	var_2563_int = 0; var_2564_bool = 0; var_2565_int = 0; // 0x13d9 PushV
	var_2563_int = 3; // 0x13da MovI
	var_2564_bool = 1; // 0x13db MovB
	var_2565_int = 1; // 0x13dc MovI
	func_813(var_2563_int, var_2564_bool, var_2565_int); // 0x13dd NEW_2
	var_2566_int = 0; var_2567_int = 0; var_2568_object = Obj(); var_2569_object = Obj(); var_2570_object = Obj(); // 0x13df PushV
	var_2566_int = 3; // 0x13e0 MovI
	var_2567_int = var_2553_int; // 0x13e1 Mov
	var_2568_object = var_2555_object; // 0x13e2 Mov
	var_2569_object = var_2556_object; // 0x13e3 Mov
	var_2570_object = var_2557_object; // 0x13e4 Mov
	func_641(var_2566_int, var_2567_int, var_2568_object, var_2569_object, var_2570_object); // 0x13e5 NEW_2
	var_2571_object = Obj(); var_2572_int = 0; // 0x13e7 PushV
	var_2571_object = var_2558_object; // 0x13e8 Mov
	var_2572_int = 1; // 0x13e9 MovI
	func_305(var_2572_int); // 0x13ea NEW_2
	var_2573_int = 0; var_2574_bool = 0; var_2575_int = 0; // 0x13ec PushV
	var_2573_int = 3; // 0x13ed MovI
	var_2574_bool = 1; // 0x13ee MovB
	var_2575_int = 7; // 0x13ef MovI
	func_870(var_2573_int, var_2574_bool, var_2575_int); // 0x13f0 NEW_2
	var_2576_int = 0; var_2577_bool = 0; var_2578_int = 0; // 0x13f2 PushV
	var_2576_int = 3; // 0x13f3 MovI
	var_2577_bool = 0; // 0x13f4 MovB
	var_2578_int = 7; // 0x13f5 MovI
	func_932(var_2576_int, var_2577_bool, var_2578_int); // 0x13f6 NEW_2
	
Label_5112:
	var_2579_int = 0; var_2580_bool = 0; // 0x13f8 PushV
	var_2579_int = 3; // 0x13f9 MovI
	var_2580_bool = 0; // 0x13fa MovB
	func_779(var_2579_int, var_2580_bool); // 0x13fb NEW_2
	var_2581_int = 0; var_2582_int = 0; var_2583_int = 0; // 0x13fd PushV
	var_2581_int = 3; // 0x13fe MovI
	var_2582_int = var_2553_int; // 0x13ff Mov
	var_2583_int = var_2554_int; // 0x1400 Mov
	func_2944(var_2581_int, var_2582_int, var_2583_int); // 0x1401 NEW_2
	return 0; // 0x1403 Return
}


func_11216(var_5316_bool)
{
	var_5319_int = 0; var_5320_string = ""; // 0x2bd1 PushV
	var_5320_string = "k5Kapellavisit"; // 0x2bd2 MovS
	func_132(var_5319_int, var_5320_string); // 0x2bd3 NEW_2
	var_5321_int = 0; // 0x2bd5 PushI
	var_5322_bool = var_5319_int != var_5321_int; // 0x2bd6 Neq
	if(var_5322_bool == 0) goto Label_11226; // 0x2bd7 JumpB
	var_5316_bool = 1; // 0x2bd8 MovB
	return 0; // 0x2bd9 Return
	
Label_11226:
	var_5316_bool = 0; // 0x2bda MovB
	return 0; // 0x2bdb Return
}


func_983(var_1274_int, var_1275_int)
{
	var_1276_bool = 0; // 0x3d8 PushV
	var_1276_bool = 1; // 0x3d9 MovB
	var_1277_bool = 0; // 0x3da PushV
	var_1277_bool = 1; // 0x3db MovB
	var_1278_int = 20; // 0x3dc PushI
	var_1279_bool = var_1275_int >= var_1278_int; // 0x3dd GE
	if(var_1279_bool == 0) goto Label_995; // 0x3de JumpB
	var_1280_int = 2; // 0x3df PushI
	var_1281_bool = var_1275_int < var_1280_int; // 0x3e0 LT
	if(var_1281_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_1277_bool = 0; // 0x3e2 MovB
	
Label_995:
	if(var_1277_bool == 0) goto Label_1007; // 0x3e3 JumpB
	var_1282_bool = 0; // 0x3e4 PushV
	var_1282_bool = 0; // 0x3e5 MovB
	var_1283_int = 6; // 0x3e6 PushI
	var_1284_bool = var_1275_int >= var_1283_int; // 0x3e7 GE
	if(var_1284_bool == 0) goto Label_1005; // 0x3e8 JumpB
	var_1285_int = 10; // 0x3e9 PushI
	var_1286_bool = var_1275_int < var_1285_int; // 0x3ea LT
	if(var_1286_bool == 0) goto Label_1005; // 0x3eb JumpB
	var_1282_bool = 1; // 0x3ec MovB
	
Label_1005:
	if(var_1282_bool == 0) goto Label_1007; // 0x3ed JumpB
	var_1276_bool = 0; // 0x3ee MovB
	
Label_1007:
	if(var_1276_bool == 0) goto Label_1014; // 0x3ef JumpB
	var_1287_int = 0; var_1288_bool = 0; // 0x3f0 PushV
	var_1287_int = var_1274_int; // 0x3f1 Mov
	var_1288_bool = 1; // 0x3f2 MovB
	func_779(var_1287_int, var_1288_bool); // 0x3f3 NEW_2
	goto Label_1019; // 0x3f5 Jump
	
Label_1019:
	return 0; // 0x3fb Return
	
Label_1014:
	var_1289_int = 0; var_1290_bool = 0; // 0x3f6 PushV
	var_1289_int = var_1274_int; // 0x3f7 Mov
	var_1290_bool = 0; // 0x3f8 MovB
	func_779(var_1289_int, var_1290_bool); // 0x3f9 NEW_2
}


func_7130(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object)
{
	var_1775_int = 0; // 0x1bdb PushI
	var_1776_bool = var_1770_int == var_1775_int; // 0x1bdc Eq
	if(var_1776_bool == 0) goto Label_7170; // 0x1bdd JumpB
	var_1777_int = 0; var_1778_bool = 0; // 0x1bde PushV
	var_1777_int = 14; // 0x1bdf MovI
	var_1778_bool = 0; // 0x1be0 MovB
	func_796(var_1777_int, var_1778_bool); // 0x1be1 NEW_2
	var_1779_int = 0; var_1780_bool = 0; var_1781_int = 0; // 0x1be3 PushV
	var_1779_int = 14; // 0x1be4 MovI
	var_1780_bool = 0; // 0x1be5 MovB
	var_1781_int = 1; // 0x1be6 MovI
	func_813(var_1779_int, var_1780_bool, var_1781_int); // 0x1be7 NEW_2
	var_1782_int = 0; var_1783_int = 0; var_1784_object = Obj(); var_1785_object = Obj(); var_1786_object = Obj(); // 0x1be9 PushV
	var_1782_int = 14; // 0x1bea MovI
	var_1783_int = var_1769_int; // 0x1beb Mov
	var_1784_object = var_1771_object; // 0x1bec Mov
	var_1785_object = var_1772_object; // 0x1bed Mov
	var_1786_object = var_1773_object; // 0x1bee Mov
	func_622(var_1783_int, var_1784_object, var_1785_object, var_1786_object); // 0x1bef NEW_2
	var_1787_object = Obj(); var_1788_int = 0; // 0x1bf1 PushV
	var_1787_object = var_1774_object; // 0x1bf2 Mov
	var_1788_int = 0; // 0x1bf3 MovI
	func_305(var_1788_int); // 0x1bf4 NEW_2
	var_1789_int = 0; var_1790_bool = 0; var_1791_int = 0; // 0x1bf6 PushV
	var_1789_int = 14; // 0x1bf7 MovI
	var_1790_bool = 0; // 0x1bf8 MovB
	var_1791_int = 5; // 0x1bf9 MovI
	func_870(var_1789_int, var_1790_bool, var_1791_int); // 0x1bfa NEW_2
	var_1792_int = 0; var_1793_bool = 0; var_1794_int = 0; // 0x1bfc PushV
	var_1792_int = 14; // 0x1bfd MovI
	var_1793_bool = 0; // 0x1bfe MovB
	var_1794_int = 5; // 0x1bff MovI
	func_932(var_1792_int, var_1793_bool, var_1794_int); // 0x1c00 NEW_2
	
Label_7170:
	var_1795_int = 0; var_1796_int = 0; // 0x1c02 PushV
	var_1795_int = 14; // 0x1c03 MovI
	var_1796_int = var_1770_int; // 0x1c04 Mov
	func_1087(var_1795_int, var_1796_int); // 0x1c05 NEW_2
	var_1806_int = 0; var_1807_int = 0; var_1808_int = 0; // 0x1c07 PushV
	var_1806_int = 14; // 0x1c08 MovI
	var_1807_int = var_1769_int; // 0x1c09 Mov
	var_1808_int = var_1770_int; // 0x1c0a Mov
	func_1376(var_1806_int, var_1807_int, var_1808_int); // 0x1c0b NEW_2
	return 0; // 0x1c0d Return
}


func_11228(var_4963_bool)
{
	var_4966_int = 0; var_4967_string = ""; // 0x2bdd PushV
	var_4967_string = "k6LaskaVisit"; // 0x2bde MovS
	func_132(var_4966_int, var_4967_string); // 0x2bdf NEW_2
	var_4968_int = 0; // 0x2be1 PushI
	var_4969_bool = var_4966_int != var_4968_int; // 0x2be2 Neq
	if(var_4969_bool == 0) goto Label_11238; // 0x2be3 JumpB
	var_4963_bool = 1; // 0x2be4 MovB
	return 0; // 0x2be5 Return
	
Label_11238:
	var_4963_bool = 0; // 0x2be6 MovB
	return 0; // 0x2be7 Return
}


func_6109(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object)
{
	var_1610_int = 0; // 0x17de PushI
	var_1611_bool = var_1605_int == var_1610_int; // 0x17df Eq
	if(var_1611_bool == 0) goto Label_6149; // 0x17e0 JumpB
	var_1612_int = 0; var_1613_bool = 0; // 0x17e1 PushV
	var_1612_int = 9; // 0x17e2 MovI
	var_1613_bool = 0; // 0x17e3 MovB
	func_796(var_1612_int, var_1613_bool); // 0x17e4 NEW_2
	var_1614_int = 0; var_1615_bool = 0; var_1616_int = 0; // 0x17e6 PushV
	var_1614_int = 9; // 0x17e7 MovI
	var_1615_bool = 0; // 0x17e8 MovB
	var_1616_int = 1; // 0x17e9 MovI
	func_813(var_1614_int, var_1615_bool, var_1616_int); // 0x17ea NEW_2
	var_1617_int = 0; var_1618_int = 0; var_1619_object = Obj(); var_1620_object = Obj(); var_1621_object = Obj(); // 0x17ec PushV
	var_1617_int = 9; // 0x17ed MovI
	var_1618_int = var_1604_int; // 0x17ee Mov
	var_1619_object = var_1606_object; // 0x17ef Mov
	var_1620_object = var_1607_object; // 0x17f0 Mov
	var_1621_object = var_1608_object; // 0x17f1 Mov
	func_622(var_1618_int, var_1619_object, var_1620_object, var_1621_object); // 0x17f2 NEW_2
	var_1622_object = Obj(); var_1623_int = 0; // 0x17f4 PushV
	var_1622_object = var_1609_object; // 0x17f5 Mov
	var_1623_int = 0; // 0x17f6 MovI
	func_305(var_1623_int); // 0x17f7 NEW_2
	var_1624_int = 0; var_1625_bool = 0; var_1626_int = 0; // 0x17f9 PushV
	var_1624_int = 9; // 0x17fa MovI
	var_1625_bool = 0; // 0x17fb MovB
	var_1626_int = 7; // 0x17fc MovI
	func_870(var_1624_int, var_1625_bool, var_1626_int); // 0x17fd NEW_2
	var_1627_int = 0; var_1628_bool = 0; var_1629_int = 0; // 0x17ff PushV
	var_1627_int = 9; // 0x1800 MovI
	var_1628_bool = 0; // 0x1801 MovB
	var_1629_int = 7; // 0x1802 MovI
	func_932(var_1627_int, var_1628_bool, var_1629_int); // 0x1803 NEW_2
	
Label_6149:
	var_1630_int = 0; var_1631_int = 0; // 0x1805 PushV
	var_1630_int = 9; // 0x1806 MovI
	var_1631_int = var_1605_int; // 0x1807 Mov
	func_1050(var_1630_int, var_1631_int); // 0x1808 NEW_2
	var_1632_int = 0; var_1633_int = 0; var_1634_int = 0; // 0x180a PushV
	var_1632_int = 9; // 0x180b MovI
	var_1633_int = var_1604_int; // 0x180c Mov
	var_1634_int = var_1605_int; // 0x180d Mov
	func_1624(var_1632_int, var_1633_int, var_1634_int); // 0x180e NEW_2
	return 0; // 0x1810 Return
}


func_11240(var_5007_bool)
{
	var_5010_int = 0; var_5011_string = ""; // 0x2be9 PushV
	var_5011_string = "k4LaraVisit"; // 0x2bea MovS
	func_132(var_5010_int, var_5011_string); // 0x2beb NEW_2
	var_5012_int = 0; // 0x2bed PushI
	var_5013_bool = var_5010_int != var_5012_int; // 0x2bee Neq
	if(var_5013_bool == 0) goto Label_11250; // 0x2bef JumpB
	var_5007_bool = 1; // 0x2bf0 MovB
	return 0; // 0x2bf1 Return
	
Label_11250:
	var_5007_bool = 0; // 0x2bf2 MovB
	return 0; // 0x2bf3 Return
}


func_11252(var_4920_bool)
{
	var_4923_int = 0; var_4924_string = ""; // 0x2bf5 PushV
	var_4924_string = "k7AglajaVisit"; // 0x2bf6 MovS
	func_132(var_4923_int, var_4924_string); // 0x2bf7 NEW_2
	var_4925_int = 0; // 0x2bf9 PushI
	var_4926_bool = var_4923_int != var_4925_int; // 0x2bfa Neq
	if(var_4926_bool == 0) goto Label_11262; // 0x2bfb JumpB
	var_4920_bool = 1; // 0x2bfc MovB
	return 0; // 0x2bfd Return
	
Label_11262:
	var_4920_bool = 0; // 0x2bfe MovB
	return 0; // 0x2bff Return
}


func_1020(var_1322_int, var_1323_int)
{
	var_1324_bool = 0; // 0x3fd PushV
	var_1324_bool = 1; // 0x3fe MovB
	var_1325_int = 20; // 0x3ff PushI
	var_1326_bool = var_1323_int >= var_1325_int; // 0x400 GE
	if(var_1326_bool == 0) goto Label_1037; // 0x401 JumpB
	var_1327_bool = 0; // 0x402 PushV
	var_1327_bool = 0; // 0x403 MovB
	var_1328_int = 6; // 0x404 PushI
	var_1329_bool = var_1323_int >= var_1328_int; // 0x405 GE
	if(var_1329_bool == 0) goto Label_1035; // 0x406 JumpB
	var_1330_int = 10; // 0x407 PushI
	var_1331_bool = var_1323_int < var_1330_int; // 0x408 LT
	if(var_1331_bool == 0) goto Label_1035; // 0x409 JumpB
	var_1327_bool = 1; // 0x40a MovB
	
Label_1035:
	if(var_1327_bool == 0) goto Label_1037; // 0x40b JumpB
	var_1324_bool = 0; // 0x40c MovB
	
Label_1037:
	if(var_1324_bool == 0) goto Label_1044; // 0x40d JumpB
	var_1332_int = 0; var_1333_bool = 0; // 0x40e PushV
	var_1332_int = var_1322_int; // 0x40f Mov
	var_1333_bool = 1; // 0x410 MovB
	func_779(var_1332_int, var_1333_bool); // 0x411 NEW_2
	goto Label_1049; // 0x413 Jump
	
Label_1049:
	return 0; // 0x419 Return
	
Label_1044:
	var_1334_int = 0; var_1335_bool = 0; // 0x414 PushV
	var_1334_int = var_1322_int; // 0x415 Mov
	var_1335_bool = 0; // 0x416 MovB
	func_779(var_1334_int, var_1335_bool); // 0x417 NEW_2
}


