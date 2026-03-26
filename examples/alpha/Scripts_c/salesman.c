// @IMPORTS: Hold/0,StopGroup0/0,DoTrade/0,WaitForAnimEnd/0,PlayAnimation/2,StopAnimation/0,StopTrade/0,GetProperty/2,Trace/1,IsPlayerActor/2,SetTimer/2,KillTimer/1,GetDirection/1,ResetAAS/0,GetPosition/1,GetScene/1,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,IsOverrideActive/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,self/1,GetGameTime/1,GetInvItemByName/2,irand/2,ClearSubContainer/1
// @STRINGS: W:all|W:idle|W:clothes|W:weapon|W:food|W:medcine|W:other|W:load salesman|W:Updating salesman|A:GetPosition|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:GetEyesHeight|W:Scalpel|A:AddItem|W:Knife|W:Hammer|W:revolver_ammo|W:rifle_ammo|W:ognemet_ammo|W:Revolver|W:Rifle|W:bottle_weapon|W:glove|W:drapery|W:balahon|W:mask|W:cloak_repel|W:raincoat_repel|W:halfboot_repel|W:tihohody|W:glove_disp|W:boot_army|W:glove_army|W:alpha_pills|W:tvirin|W:bandage|W:tourniquet|W:beta_pills|W:neomicin|W:novocaine|W:black_vaccine|W:etorfin|W:meradorm|W:gamma_pills|W:delta_pills|W:monomicin|W:morfin|W:packet|W:blue_vaccine|W:feromicin|W:lemon|W:rusk|W:dried_fish|W:egg|W:vegetables|W:milk|W:dried_meat|W:smoked_meat|W:fresh_fish|W:fresh_meat|W:bread|W:bottle_water|W:funduk|W:peanut|W:walnut|W:hook|W:needle|W:kerosene
// @GLOBALS: 0:int:,1:int:,2:int:,3:int:,4:int:
// @RUN_OP: 0x73
// @RUN_TASK: 2
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars=bool params=1
// @EVENT_11: op=0x15 vars=int
// @TASK_2: vars=object,float,int params=0
// @EVENT_5: op=0x81 vars=
// @EVENT_6: op=0x96 vars=
// @EVENT_1: op=0xad vars=object
// @EVENT_0: op=0xc5 vars=object
// @EVENT_10: op=0xcb vars=object
// @EVENT_7: op=0xd1 vars=int
// @PE: 0x6,0x15,0xc5,0xcb,0x198,0x1a2,0x1ab,0x1b5,0x1d4,0x550

task_0_event_5(var_0_bool, var_1_object, var_2_float, var_3_int)
{
	StopGroup0();
	return 0;
}


task_1_event_11(var_0_bool, var_1_int, var_2_object, var_3_float, var_4_int)
{
	StopAnimation();
	StopTrade();
	var_0_bool = true;
	return 0;
}


task_2_event_5(var_0_bool, var_1_object, var_2_float, var_3_int)
{
	Trace("load salesman");
	var_5_int = 0;
	func_454(var_5_int);
	var_11_bool = var_5_int != var_2_float;
	if(var_11_bool != 0) {
		Trace("Updating salesman");
		var_13_int = 0;
		func_454(var_13_int);
		var_2_float = var_13_int;
		func_1286();
	}
	StopGroup0();
	return 0;
}


task_2_event_6(var_0_bool, var_1_object, var_2_float, var_3_int)
{
	Hold();
	return 0;
}


task_2_event_1(var_0_bool, var_1_object, var_2_float, var_3_int, var_4_object)
{
	var_5_bool = 0; var_6_bool = 0;
	var_7_bool = var_0_bool != 0; //@nn
	if(var_7_bool != 0) {
		return 2;
	}
	IsPlayerActor(var_4_object, var_6_bool);
	var_8_bool = var_6_bool == 0; //@nz
	if(var_8_bool != 0) {
		return 2;
	}
	var_0_bool = var_4_object;
	var_1_object = 0;
	var_9_object = Obj();
	var_9_object = var_0_bool;
	func_344(var_9_object);
	SetTimer((int)111, (float)0.20000000298023224);
	SetTimer((int)112, (float)3.0);
	return 2;
}


task_2_event_0(var_0_bool, var_1_object, var_2_float, var_3_int, var_4_object)
{
	var_5_object = Obj();
	var_4_object = var_5_object;
	func_1360(var_5_object);
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_float, var_3_int, var_4_object)
{
	var_5_object = Obj();
	var_4_object = var_5_object;
	func_344(var_5_object);
	return 0;
}


task_2_event_7(var_0_bool, var_1_object, var_2_float, var_3_int, var_4_int)
{
	var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0);
	var_10_bool = var_4_int == (int)111;
	if(var_10_bool != 0) {
		var_11_bool = 0; var_12_object = Obj();
		var_12_object = var_0_bool;
		func_320(var_11_bool, var_12_object);
		var_45_bool = var_11_bool == 0; //@nz
		if(var_45_bool != 0) {
			KillTimer((int)112);
			KillTimer((int)111);
			var_0_bool = 0;
			return 4;
		}
		GetDirection(var_7_cvector);
		var_48_cvector = CVector(0,0,0); var_49_object = Obj();
		var_49_object = var_0_bool;
		func_260(var_48_cvector, var_49_object);
		var_48_cvector = var_8_cvector;
		var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
		var_7_cvector = var_55_cvector;
		var_8_cvector = var_56_cvector;
		func_437(var_54_float, var_55_cvector, var_56_cvector);
		var_79_bool = var_54_float < (float)0.7660444378852844;
		if(var_79_bool != 0) {
			var_80_object = Obj();
			var_80_object = var_0_bool;
			func_344(var_80_object);
		}
		return 4;
	}
	var_90_bool = var_4_int == (int)112;
	if(var_90_bool != 0) {
		KillTimer((int)112);
		KillTimer((int)111);
		var_0_bool = 0;
		ResetAAS();
	}
	return 4;
}


main(var_0_bool, var_1_object, var_2_float, var_3_int)
{
	func_28();
	var_52_int = 0;
	func_454(var_52_int);
	var_2_float = var_52_int;
	func_1286();
	func_153(var_2_float, var_3_int);
	return 0;
}


func_0()
{
	Hold();
	return 0;
}


func_260(var_48_cvector, var_49_object)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_52_cvector);
	@@var_49_object:GetPosition(var_53_cvector);
	var_48_cvector = var_53_cvector - var_52_cvector;
	return 4;
}


func_6(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_10:
	WaitForAnimEnd();
	PlayAnimation("all", "idle");
	var_40_bool = var_0_bool;
	if(var_40_bool != 0) {
		goto Label_10;
	}
	return 0;
}
EMIT "Return(); Pop(0)";


func_519(var_72_bool, var_73_object, var_74_int)
{
	var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_bool = 0; var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_int = 0;
	var_90_bool = var_74_int < (int)3;
	if(var_90_bool != 0) {
		var_72_bool = 1;
		return 14;
	}
	var_92_bool = var_74_int >= (int)2;
	if(var_92_bool != 0) {
		irand(var_83_int, (int)3);
		var_95_bool = var_83_int == (int)0;
		if(var_95_bool != 0) {
			var_96_int = 0; var_97_string = "";
			func_463(var_96_int, "Scalpel");
			@@var_73_object:AddItem(var_82_bool, var_96_int, (int)0, (int)1);
		} else {
							var_146_bool = var_83_int == (int)1;
							if(var_146_bool != 0) {
								var_147_int = 0; var_148_string = "";
								func_463(var_147_int, "Knife");
								@@var_73_object:AddItem(var_82_bool, var_147_int, (int)0, (int)1);
								goto Label_563;
							}
							var_151_int = 0; var_152_string = "";
							func_463(var_151_int, "Hammer");
							@@var_73_object:AddItem(var_82_bool, var_151_int, (int)0, (int)1);
		}
	}
Label_563:
	var_103_bool = var_74_int >= (int)5;
	if(var_103_bool != 0) {
		irand(var_84_int, (int)4);
		var_106_bool = var_84_int == (int)0;
		if(var_106_bool != 0) {
			irand(var_85_int, (int)4);
			var_85_int = var_85_int + (int)1;
			var_109_int = 0; var_110_string = "";
			func_463(var_109_int, "revolver_ammo");
			@@var_73_object:AddItem(var_82_bool, var_109_int, (int)0, var_85_int);
		} else {
					var_128_bool = var_84_int == (int)1;
					if(var_128_bool != 0) {
						irand(var_86_int, (int)4);
						var_86_int = var_86_int + (int)1;
						var_131_int = 0; var_132_string = "";
						func_463(var_131_int, "rifle_ammo");
						@@var_73_object:AddItem(var_82_bool, var_131_int, (int)0, var_86_int);
						goto Label_625;
					}
					var_135_bool = var_84_int == (int)2;
					if(var_135_bool != 0) {
						irand(var_87_int, (int)50);
						var_87_int = var_87_int + (int)1;
						var_138_int = 0; var_139_string = "";
						func_463(var_138_int, "ognemet_ammo");
						@@var_73_object:AddItem(var_82_bool, var_138_int, (int)0, var_87_int);
						goto Label_625;
					}
					var_141_int = 0; var_142_string = "";
					func_463(var_141_int, "Revolver");
					@@var_73_object:AddItem(var_82_bool, var_141_int, (int)0, (int)1);

		}
	}
Label_625:
	var_113_bool = var_74_int >= (int)7;
	if(var_113_bool != 0) {
		irand(var_88_int, (int)8);
		var_116_bool = var_88_int == (int)0;
		if(var_116_bool != 0) {
			var_117_int = 0; var_118_string = "";
			func_463(var_117_int, "Rifle");
			@@var_73_object:AddItem(var_82_bool, var_117_int, (int)0, (int)1);
		} else {
			var_122_bool = var_88_int == (int)1;
			if(var_122_bool == 0) goto Label_654;
			var_123_int = 0; var_124_string = "";
			func_463(var_123_int, "bottle_weapon");
			@@var_73_object:AddItem(var_82_bool, var_123_int, (int)0, (int)1);

		}
	}
Label_654:
	var_72_bool = 1;
	return 14;
	
}


func_1286()
{
	var_58_int = 0; var_59_int = 0;
	func_454((int)0);
	var_60_int = var_59_int;
	ClearSubContainer((int)0);
	var_62_int = GlobalVars[0];
	var_64_bool = var_62_int != (int)0;
	if(var_64_bool != 0) {
		var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; var_68_int = 0;
		func_412(Obj());
		var_69_object = var_66_object;
		var_59_int = var_67_int;
		func_468(var_65_bool, var_66_object, var_67_int, (int)1);
	}
	var_495_int = GlobalVars[1];
	var_497_bool = var_495_int != (int)0;
	if(var_497_bool != 0) {
		var_498_bool = 0; var_499_object = Obj(); var_500_int = 0; var_501_int = 0;
		func_412(Obj());
		var_502_object = var_499_object;
		var_59_int = var_500_int;
		func_468(var_498_bool, var_499_object, var_500_int, (int)0);
	}
	var_503_int = GlobalVars[2];
	var_505_bool = var_503_int != (int)0;
	if(var_505_bool != 0) {
		var_506_bool = 0; var_507_object = Obj(); var_508_int = 0; var_509_int = 0;
		func_412(Obj());
		var_510_object = var_507_object;
		var_59_int = var_508_int;
		func_468(var_506_bool, var_507_object, var_508_int, (int)3);
	}
	var_511_int = GlobalVars[3];
	var_513_bool = var_511_int != (int)0;
	if(var_513_bool != 0) {
		var_514_bool = 0; var_515_object = Obj(); var_516_int = 0; var_517_int = 0;
		func_412(Obj());
		var_518_object = var_515_object;
		var_59_int = var_516_int;
		func_468(var_514_bool, var_515_object, var_516_int, (int)2);
	}
	var_519_int = GlobalVars[4];
	var_521_bool = var_519_int != (int)0;
	if(var_521_bool != 0) {
		var_522_bool = 0; var_523_object = Obj(); var_524_int = 0; var_525_int = 0;
		func_412(Obj());
		var_526_object = var_523_object;
		var_59_int = var_524_int;
		func_468(var_522_bool, var_523_object, var_524_int, (int)4);
	}
	return 2;
}


func_267(var_14_bool, var_15_object, var_16_string)
{
	var_20_bool = 0; var_21_bool = 0;
	var_24_bool = IsFuncExist(var_15_object, "HasProperty", (int)2);
	var_25_bool = var_24_bool == 0; //@nz
	if(var_25_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	@@var_15_object:HasProperty(var_16_string, var_21_bool);
	var_21_bool = var_14_bool;
	return 2;
}


func_656(var_157_bool, var_158_object, var_159_int)
{
	var_160_bool = 0; var_161_int = 0; var_162_int = 0; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_int = 0; var_167_int = 0;
	var_169_bool = var_159_int < (int)2;
	if(var_169_bool != 0) {
		var_157_bool = 1;
		return 8;
	}
	var_171_bool = var_159_int >= (int)2;
	if(var_171_bool != 0) {
		irand(var_165_int, (int)3);
		var_174_bool = var_165_int == (int)0;
		if(var_174_bool != 0) {
			var_175_int = 0; var_176_string = "";
			func_463(var_175_int, "glove");
			@@var_158_object:AddItem(var_164_bool, var_175_int, (int)0, (int)1);
		} else {
								var_236_bool = var_165_int == (int)1;
								if(var_236_bool != 0) {
									var_237_int = 0; var_238_string = "";
									func_463(var_237_int, "drapery");
									@@var_158_object:AddItem(var_164_bool, var_237_int, (int)0, (int)1);
									goto Label_700;
								}
								var_241_int = 0; var_242_string = "";
								func_463(var_241_int, "balahon");
								@@var_158_object:AddItem(var_164_bool, var_241_int, (int)0, (int)1);
		}
	}
Label_700:
	var_180_bool = var_159_int >= (int)4;
	if(var_180_bool != 0) {
		irand(var_166_int, (int)7);
		var_183_bool = var_166_int == (int)0;
		if(var_183_bool != 0) {
			var_184_int = 0; var_185_string = "";
			func_463(var_184_int, "mask");
			@@var_158_object:AddItem(var_164_bool, var_184_int, (int)0, (int)1);
		} else {
						var_224_bool = var_166_int == (int)1;
						if(var_224_bool != 0) {
							var_225_int = 0; var_226_string = "";
							func_463(var_225_int, "cloak_repel");
							@@var_158_object:AddItem(var_164_bool, var_225_int, (int)0, (int)1);
							goto Label_741;
						}
						var_230_bool = var_166_int == (int)2;
						if(var_230_bool == 0) goto Label_741;
						var_231_int = 0; var_232_string = "";
						func_463(var_231_int, "raincoat_repel");
						@@var_158_object:AddItem(var_164_bool, var_231_int, (int)0, (int)1);

		}
	Label_741:
		var_189_bool = var_166_int == (int)3;
		if(var_189_bool != 0) {
			var_190_int = 0; var_191_string = "";
			func_463(var_190_int, "halfboot_repel");
			@@var_158_object:AddItem(var_164_bool, var_190_int, (int)0, (int)1);
		}
		var_195_bool = var_166_int == (int)4;
		if(var_195_bool != 0) {
			var_196_int = 0; var_197_string = "";
			func_463(var_196_int, "boot_repel");
			@@var_158_object:AddItem(var_164_bool, var_196_int, (int)0, (int)1);
		}
		var_201_bool = var_166_int == (int)5;
		if(var_201_bool != 0) {
			var_202_int = 0; var_203_string = "";
			func_463(var_202_int, "tihohody");
			@@var_158_object:AddItem(var_164_bool, var_202_int, (int)0, (int)1);
		} else {
					var_219_int = 0; var_220_string = "";
					func_463(var_219_int, "glove_disp");
					@@var_158_object:AddItem(var_164_bool, var_219_int, (int)0, (int)1);

		}
	}
	var_207_bool = var_159_int >= (int)9;
	if(var_207_bool != 0) {
		irand(var_167_int, (int)2);
		var_210_bool = var_167_int == (int)0;
		if(var_210_bool != 0) {
			var_211_int = 0; var_212_string = "";
			func_463(var_211_int, "boot_army");
			@@var_158_object:AddItem(var_164_bool, var_211_int, (int)0, (int)1);
		} else {
			var_215_int = 0; var_216_string = "";
			func_463(var_215_int, "glove_army");
			@@var_158_object:AddItem(var_164_bool, var_215_int, (int)0, (int)1);

		}
	}
	var_157_bool = 1;
	return 8;
	
}


func_1041(var_373_bool, var_374_object, var_375_int)
{
	var_376_bool = 0; var_377_int = 0; var_378_int = 0; var_379_bool = 0; var_380_int = 0; var_381_int = 0;
	var_383_bool = var_375_int < (int)3;
	if(var_383_bool != 0) {
		var_381_int = 2;
	} else {
			var_463_bool = var_375_int < (int)5;
			if(var_463_bool != 0) {
				var_381_int = 3;
				goto Label_1063;
			}
			var_465_bool = var_375_int < (int)7;
			if(var_465_bool != 0) {
				var_381_int = 3;
				goto Label_1063;
			}
			var_467_bool = var_375_int < (int)7;
			if(var_467_bool != 0) {
				var_381_int = 4;
				goto Label_1063;
			}
			var_381_int = 5;
	}
Label_1063:
	irand(var_380_int, var_381_int);
	var_384_bool = var_380_int == 0; //@nz
	if(var_384_bool != 0) {
		var_385_int = 0; var_386_string = "";
		func_463(var_385_int, "lemon");
		@@var_374_object:AddItem(var_379_bool, var_385_int, (int)0, (int)1);
	}
	irand(var_380_int, var_381_int);
	var_389_bool = var_380_int == 0; //@nz
	if(var_389_bool != 0) {
		var_390_int = 0; var_391_string = "";
		func_463(var_390_int, "rusk");
		@@var_374_object:AddItem(var_379_bool, var_390_int, (int)0, (int)1);
	}
	irand(var_380_int, var_381_int);
	var_394_bool = var_380_int == 0; //@nz
	if(var_394_bool != 0) {
		var_395_int = 0; var_396_string = "";
		func_463(var_395_int, "dried_fish");
		@@var_374_object:AddItem(var_379_bool, var_395_int, (int)0, (int)1);
	}
	irand(var_380_int, var_381_int);
	var_399_bool = var_380_int == 0; //@nz
	if(var_399_bool != 0) {
		var_400_int = 0; var_401_string = "";
		func_463(var_400_int, "egg");
		@@var_374_object:AddItem(var_379_bool, var_400_int, (int)0, (int)1);
	}
	irand(var_380_int, var_381_int);
	var_404_bool = var_380_int == 0; //@nz
	if(var_404_bool != 0) {
		var_405_int = 0; var_406_string = "";
		func_463(var_405_int, "vegetables");
		@@var_374_object:AddItem(var_379_bool, var_405_int, (int)0, (int)1);
	}
	irand(var_380_int, var_381_int);
	var_409_bool = var_380_int == 0; //@nz
	if(var_409_bool != 0) {
		var_410_int = 0; var_411_string = "";
		func_463(var_410_int, "milk");
		@@var_374_object:AddItem(var_379_bool, var_410_int, (int)0, (int)1);
	}
	irand(var_380_int, var_381_int);
	var_414_bool = var_380_int == 0; //@nz
	if(var_414_bool != 0) {
		var_415_int = 0; var_416_string = "";
		func_463(var_415_int, "dried_meat");
		@@var_374_object:AddItem(var_379_bool, var_415_int, (int)0, (int)1);
	}
	irand(var_380_int, var_381_int);
	var_419_bool = var_380_int == 0; //@nz
	if(var_419_bool != 0) {
		var_420_int = 0; var_421_string = "";
		func_463(var_420_int, "smoked_meat");
		@@var_374_object:AddItem(var_379_bool, var_420_int, (int)0, (int)1);
	}
	irand(var_380_int, var_381_int);
	var_424_bool = var_380_int == 0; //@nz
	if(var_424_bool != 0) {
		var_425_int = 0; var_426_string = "";
		func_463(var_425_int, "fresh_fish");
		@@var_374_object:AddItem(var_379_bool, var_425_int, (int)0, (int)1);
	}
	irand(var_380_int, var_381_int);
	var_429_bool = var_380_int == 0; //@nz
	if(var_429_bool != 0) {
		var_430_int = 0; var_431_string = "";
		func_463(var_430_int, "fresh_meat");
		@@var_374_object:AddItem(var_379_bool, var_430_int, (int)0, (int)1);
	}
	irand(var_380_int, var_381_int);
	var_434_bool = var_380_int == 0; //@nz
	if(var_434_bool != 0) {
		var_435_int = 0; var_436_string = "";
		func_463(var_435_int, "bread");
		@@var_374_object:AddItem(var_379_bool, var_435_int, (int)0, (int)1);
	}
	var_439_int = 0; var_440_string = "";
	func_463(var_439_int, "bottle_water");
	@@var_374_object:AddItem(var_379_bool, var_439_int, (int)0, (int)1);
	irand(var_380_int, (int)20);
	var_445_bool = var_380_int == (int)0;
	if(var_445_bool != 0) {
		var_446_int = 0; var_447_string = "";
		func_463(var_446_int, "funduk");
		@@var_374_object:AddItem(var_379_bool, var_446_int, (int)0, (int)1);
	} else {
		var_457_bool = var_380_int == (int)1;
		if(var_457_bool == 0) goto Label_1229;
		var_458_int = 0; var_459_string = "";
		func_463(var_458_int, "peanut");
		@@var_374_object:AddItem(var_379_bool, var_458_int, (int)0, (int)1);

	}
Label_1229:
	var_451_bool = var_380_int == (int)2;
	if(var_451_bool != 0) {
		var_452_int = 0; var_453_string = "";
		func_463(var_452_int, "walnut");
		@@var_374_object:AddItem(var_379_bool, var_452_int, (int)0, (int)1);
	}
	var_373_bool = 1;
	return 6;
	
}


func_279(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0;
	@@var_27_object:IsDead(var_29_bool);
	var_29_bool = var_26_bool;
	return 2;
}


func_408()
{
	CameraSwitchToNormal();
	return 0;
}


func_153(var_0_bool, var_1_object)
{
	var_527_bool = 0;
	func_355(var_527_bool);
	var_530_bool = var_527_bool == 0; //@nz
	if(var_530_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	var_1_object = 0;
	var_0_bool = 0;
	
Label_165:
	PlayAnimation("all", "idle");
	WaitForAnimEnd();
	goto Label_165;
}
EMIT "Return(); Pop(0)";


func_28()
{
	var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj(); var_16_string = "";
	func_412(Obj());
	var_17_object = var_15_object;
	func_267(var_14_bool, var_15_object, "clothes");
	if(var_14_bool != 0) {
		GetProperty("clothes", var_9_int);
	} else {
						var_9_int = 0;
	}
	var_27_bool = 0; var_28_object = Obj(); var_29_string = "";
	func_412(Obj());
	var_30_object = var_28_object;
	func_267(var_27_bool, var_28_object, "weapon");
	if(var_27_bool != 0) {
		GetProperty("weapon", var_10_int);
	} else {
					var_10_int = 0;

	}
	var_32_bool = 0; var_33_object = Obj(); var_34_string = "";
	func_412(Obj());
	var_35_object = var_33_object;
	func_267(var_32_bool, var_33_object, "food");
	if(var_32_bool != 0) {
		GetProperty("food", var_11_int);
	} else {
				var_11_int = 0;

	}
	var_37_bool = 0; var_38_object = Obj(); var_39_string = "";
	func_412(Obj());
	var_40_object = var_38_object;
	func_267(var_37_bool, var_38_object, "medcine");
	if(var_37_bool != 0) {
		GetProperty("medcine", var_12_int);
	} else {
			var_12_int = 0;

	}
	var_42_bool = 0; var_43_object = Obj(); var_44_string = "";
	func_412(Obj());
	var_45_object = var_43_object;
	func_267(var_42_bool, var_43_object, "other");
	if(var_42_bool != 0) {
		GetProperty("other", var_13_int);
	} else {
		var_13_int = 0;

	}
	var_47_int = GlobalVars[0];
	var_9_int = var_47_int;
	GlobalVars[0] = var_47_int;
	var_48_int = GlobalVars[1];
	var_10_int = var_48_int;
	GlobalVars[1] = var_48_int;
	var_49_int = GlobalVars[2];
	var_11_int = var_49_int;
	GlobalVars[2] = var_49_int;
	var_50_int = GlobalVars[3];
	var_12_int = var_50_int;
	GlobalVars[3] = var_50_int;
	var_51_int = GlobalVars[4];
	var_13_int = var_51_int;
	GlobalVars[4] = var_51_int;
	return 10;
	
}


func_284(var_15_bool, var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj();
	var_21_bool = var_16_object == 0; //@ne
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_bool = 0;
	var_22_bool = 0;
	var_25_bool = IsFuncExist(var_16_object, "IsDead", (int)1);
	if(var_25_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_16_object = var_27_object;
		func_279(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_22_bool = 1;
		}
	}
	if(var_22_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	GetScene(var_19_object);
	var_30_bool = var_19_object == 0; //@ne
	if(var_30_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	@@var_16_object:GetScene(var_20_object);
	var_31_bool = var_19_object != var_20_object;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_15_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_412(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_418(var_57_float, var_58_cvector, var_59_cvector)
{
	var_60_float = GetByIndex(var_58_cvector, 0);
	var_61_float = GetByIndex(var_59_cvector, 0);
	var_62_float = var_60_float * var_61_float;
	var_63_float = GetByIndex(var_58_cvector, 2);
	var_64_float = GetByIndex(var_59_cvector, 2);
	var_65_float = var_63_float * var_64_float;
	var_57_float = var_62_float + var_65_float;
	return 0;
}


func_427(var_66_float, var_67_cvector)
{
	var_68_float = GetByIndex(var_67_cvector, 0);
	var_69_float = GetByIndex(var_67_cvector, 0);
	var_70_float = var_68_float * var_69_float;
	var_71_float = GetByIndex(var_67_cvector, 2);
	var_72_float = GetByIndex(var_67_cvector, 2);
	var_73_float = var_71_float * var_72_float;
	var_74_int = var_70_float + var_73_float;
	var_66_float = sqrt(var_74_int);
	return 0;
}


func_811(var_247_bool, var_248_object, var_249_int)
{
	var_250_bool = 0; var_251_int = 0; var_252_int = 0; var_253_int = 0; var_254_bool = 0; var_255_int = 0; var_256_int = 0; var_257_int = 0;
	var_259_bool = var_249_int < (int)2;
	if(var_259_bool != 0) {
		var_247_bool = 1;
		return 8;
	}
	var_261_bool = var_249_int >= (int)2;
	if(var_261_bool != 0) {
		irand(var_255_int, (int)4);
		var_264_bool = var_255_int == (int)0;
		if(var_264_bool != 0) {
			var_265_int = 0; var_266_string = "";
			func_463(var_265_int, "alpha_pills");
			@@var_248_object:AddItem(var_254_bool, var_265_int, (int)0, (int)1);
		} else {
							var_356_bool = var_255_int == (int)1;
							if(var_356_bool != 0) {
								var_357_int = 0; var_358_string = "";
								func_463(var_357_int, "tvirin");
								@@var_248_object:AddItem(var_254_bool, var_357_int, (int)0, (int)1);
								goto Label_867;
							}
							var_362_bool = var_255_int == (int)2;
							if(var_362_bool != 0) {
								var_363_int = 0; var_364_string = "";
								func_463(var_363_int, "bandage");
								@@var_248_object:AddItem(var_254_bool, var_363_int, (int)0, (int)1);
								goto Label_867;
							}
							var_367_int = 0; var_368_string = "";
							func_463(var_367_int, "tourniquet");
							@@var_248_object:AddItem(var_254_bool, var_367_int, (int)0, (int)1);
		}
	}
Label_867:
	var_270_bool = var_249_int >= (int)4;
	if(var_270_bool != 0) {
		irand(var_256_int, (int)6);
		var_273_bool = var_256_int == (int)0;
		if(var_273_bool != 0) {
			var_274_int = 0; var_275_string = "";
			func_463(var_274_int, "beta_pills");
			@@var_248_object:AddItem(var_254_bool, var_274_int, (int)0, (int)1);
		} else {
					var_328_bool = var_256_int == (int)1;
					if(var_328_bool != 0) {
						var_329_int = 0; var_330_string = "";
						func_463(var_329_int, "neomicin");
						@@var_248_object:AddItem(var_254_bool, var_329_int, (int)0, (int)1);
						goto Label_941;
					}
					var_334_bool = var_256_int == (int)2;
					if(var_334_bool != 0) {
						var_335_int = 0; var_336_string = "";
						func_463(var_335_int, "novocaine");
						@@var_248_object:AddItem(var_254_bool, var_335_int, (int)0, (int)1);
						goto Label_941;
					}
					var_340_bool = var_256_int == (int)3;
					if(var_340_bool != 0) {
						var_341_int = 0; var_342_string = "";
						func_463(var_341_int, "black_vaccine");
						@@var_248_object:AddItem(var_254_bool, var_341_int, (int)0, (int)1);
						goto Label_941;
					}
					var_346_bool = var_256_int == (int)4;
					if(var_346_bool != 0) {
						var_347_int = 0; var_348_string = "";
						func_463(var_347_int, "etorfin");
						@@var_248_object:AddItem(var_254_bool, var_347_int, (int)0, (int)1);
						goto Label_941;
					}
					var_351_int = 0; var_352_string = "";
					func_463(var_351_int, "meradorm");
					@@var_248_object:AddItem(var_254_bool, var_351_int, (int)0, (int)1);

		}
	}
Label_941:
	var_279_bool = var_249_int >= (int)5;
	if(var_279_bool != 0) {
		irand(var_257_int, (int)8);
		var_282_bool = var_257_int == (int)0;
		if(var_282_bool != 0) {
			var_283_int = 0; var_284_string = "";
			func_463(var_283_int, "gamma_pills");
			@@var_248_object:AddItem(var_254_bool, var_283_int, (int)0, (int)1);
		} else {
			var_288_bool = var_257_int == (int)1;
			if(var_288_bool != 0) {
				var_289_int = 0; var_290_string = "";
				func_463(var_289_int, "delta_pills");
				@@var_248_object:AddItem(var_254_bool, var_289_int, (int)0, (int)1);
				goto Label_1039;
			}
			var_294_bool = var_257_int == (int)2;
			if(var_294_bool != 0) {
				var_295_int = 0; var_296_string = "";
				func_463(var_295_int, "monomicin");
				@@var_248_object:AddItem(var_254_bool, var_295_int, (int)0, (int)1);
				goto Label_1039;
			}
			var_300_bool = var_257_int == (int)3;
			if(var_300_bool != 0) {
				var_301_int = 0; var_302_string = "";
				func_463(var_301_int, "morfin");
				@@var_248_object:AddItem(var_254_bool, var_301_int, (int)0, (int)1);
				goto Label_1039;
			}
			var_306_bool = var_257_int == (int)4;
			if(var_306_bool != 0) {
				var_307_int = 0; var_308_string = "";
				func_463(var_307_int, "packet");
				@@var_248_object:AddItem(var_254_bool, var_307_int, (int)0, (int)1);
				goto Label_1039;
			}
			var_312_bool = var_257_int == (int)5;
			if(var_312_bool != 0) {
				var_313_int = 0; var_314_string = "";
				func_463(var_313_int, "blue_vaccine");
				@@var_248_object:AddItem(var_254_bool, var_313_int, (int)0, (int)1);
				goto Label_1039;
			}
			var_318_bool = var_257_int == (int)6;
			if(var_318_bool != 0) {
				var_319_int = 0; var_320_string = "";
				func_463(var_319_int, "etorfin");
				@@var_248_object:AddItem(var_254_bool, var_319_int, (int)0, (int)1);
				goto Label_1039;
			}
			var_323_int = 0; var_324_string = "";
			func_463(var_323_int, "feromicin");
			@@var_248_object:AddItem(var_254_bool, var_323_int, (int)0, (int)1);

		}
	}
Label_1039:
	var_247_bool = 1;
	return 8;
	
}


func_437(var_54_float, var_55_cvector, var_56_cvector)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0);
	var_55_cvector = var_58_cvector;
	var_56_cvector = var_59_cvector;
	func_418(var_57_float, var_58_cvector, var_59_cvector);
	var_66_float = 0; var_67_cvector = CVector(0,0,0);
	var_55_cvector = var_67_cvector;
	func_427(var_66_float, var_67_cvector);
	var_75_float = 0; var_76_cvector = CVector(0,0,0);
	var_56_cvector = var_76_cvector;
	func_427(var_75_float, var_76_cvector);
	var_77_float = var_66_float * var_75_float;
	var_54_float = var_57_float / var_77_float;
	return 0;
}


func_320(var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_284(var_15_bool, var_16_object);
	var_32_bool = var_15_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_11_bool = 0;
		return 2;
	}
	var_33_bool = 0; var_34_object = Obj(); var_35_string = "";
	var_12_object = var_34_object;
	func_267(var_33_bool, var_34_object, "noaccess");
	var_42_bool = var_33_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_11_bool = 1;
		return 2;
	}
	@@var_12_object:GetProperty("noaccess", var_14_int);
	var_11_bool = var_14_int == (int)0;
	return 2;
}


func_454(var_52_int)
{
	var_53_float = 0; var_54_float = 0;
	GetGameTime(var_54_float);
	var_56_int = 0;
	var_56_int = var_54_float / (int)24;
	var_52_int = (int)1 + var_56_int;
	return 2;
}


func_463(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0;
	GetInvItemByName(var_99_int, var_97_string);
	var_99_int = var_96_int;
	return 2;
}


func_1360(var_5_object)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_object = var_7_object;
	func_360(var_6_bool, var_7_object);
	var_35_bool = var_6_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 0;
	}
	var_36_object = Obj();
	var_5_object = var_36_object;
	TaskCall(1);
	func_6(var_36_object);
	TaskReturn();
	var_5_object = Obj();
	func_408();
	return 0;
}


func_468(var_65_bool, var_66_object, var_67_int, var_68_int)
{
	var_71_bool = var_68_int == (int)0;
	if(var_71_bool != 0) {
		var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
		var_66_object = var_73_object;
		var_67_int = var_74_int;
		func_519(var_72_bool, var_73_object, var_74_int);
		var_72_bool = var_65_bool;
		return 0;
	EMIT "GOTO 0x200";
	}
	var_156_bool = var_68_int == (int)1;
	if(var_156_bool != 0) {
		var_157_bool = 0; var_158_object = Obj(); var_159_int = 0;
		var_66_object = var_158_object;
		var_67_int = var_159_int;
		func_656(var_157_bool, var_158_object, var_159_int);
		var_157_bool = var_65_bool;
		return 0;
	EMIT "GOTO 0x200";
	}
	var_246_bool = var_68_int == (int)2;
	if(var_246_bool != 0) {
		var_247_bool = 0; var_248_object = Obj(); var_249_int = 0;
		var_66_object = var_248_object;
		var_67_int = var_249_int;
		func_811(var_247_bool, var_248_object, var_249_int);
		var_247_bool = var_65_bool;
		return 0;
	EMIT "GOTO 0x200";
	}
	var_372_bool = var_68_int == (int)3;
	if(var_372_bool != 0) {
		var_373_bool = 0; var_374_object = Obj(); var_375_int = 0;
		var_66_object = var_374_object;
		var_67_int = var_375_int;
		func_1041(var_373_bool, var_374_object, var_375_int);
		var_373_bool = var_65_bool;
		return 0;
	}
	var_468_bool = 0; var_469_object = Obj(); var_470_int = 0;
	var_66_object = var_469_object;
	var_67_int = var_470_int;
	func_1242(var_469_object, var_470_int);
	var_468_bool = var_65_bool;
	return 0;
}


func_344(var_80_object)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	@@var_80_object:GetPosition(var_84_cvector);
	GetPosition(var_85_cvector);
	var_86_cvector = var_84_cvector - var_85_cvector;
	var_87_float = GetByIndex(var_86_cvector, 0);
	var_88_float = GetByIndex(var_86_cvector, 2);
	RotateAsync(var_87_float, var_88_float);
	return 6;
}


func_1242(var_468_bool, var_469_object)
{
	var_471_bool = 0; var_472_int = 0; var_473_bool = 0; var_474_int = 0;
	irand(var_474_int, (int)5);
	var_477_bool = var_474_int == (int)0;
	if(var_477_bool != 0) {
		var_478_int = 0; var_479_string = "";
		func_463(var_478_int, "hook");
		@@var_469_object:AddItem(var_473_bool, var_478_int, (int)0, (int)1);
	}
	irand(var_474_int, (int)5);
	var_484_bool = var_474_int == (int)0;
	if(var_484_bool != 0) {
		var_485_int = 0; var_486_string = "";
		func_463(var_485_int, "needle");
		@@var_469_object:AddItem(var_473_bool, var_485_int, (int)0, (int)1);
	}
	irand(var_474_int, (int)100);
	var_491_bool = var_474_int != (int)0;
	if(var_491_bool != 0) {
		var_492_int = 0; var_493_string = "";
		func_463(var_492_int, "kerosene");
		@@var_469_object:AddItem(var_473_bool, var_492_int, (int)0, var_474_int);
	}
	var_468_bool = 1;
	return 4;
}


func_355(var_527_bool)
{
	var_528_bool = 0; var_529_bool = 0;
	IsLoaded(var_529_bool);
	var_529_bool = var_527_bool;
	return 2;
}


func_360(var_6_bool, var_7_object)
{
	var_8_float = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_bool = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0;
	@@var_7_object:GetPosition(var_17_cvector);
	@@var_7_object:GetEyesHeight(var_16_float);
	var_24_float = GetByIndex(var_17_cvector, 1);
	var_24_float = var_24_float + var_16_float;
	SetByIndex(var_17_cvector, 1) = var_24_float;
	GetPosition(var_18_cvector);
	GetEyesHeight(var_16_float);
	var_25_float = GetByIndex(var_18_cvector, 1);
	var_25_float = var_25_float + var_16_float;
	SetByIndex(var_18_cvector, 1) = var_25_float;
	var_19_cvector = var_17_cvector - var_18_cvector;
	var_26_float = GetByIndex(var_19_cvector, 1);
	SetByIndex(var_19_cvector, 1) = (float)0;
	var_27_int = var_19_cvector | var_19_cvector;
	var_28_float = sqrt(var_27_int);
	var_19_cvector = var_19_cvector / var_28_float;
	var_20_cvector = -var_19_cvector;
	var_30_float = var_19_cvector * (int)70;
	var_21_cvector = var_30_float - CVector(0.0, 10.0, 0.0);
	var_22_cvector = var_18_cvector + var_21_cvector;
	IsOverrideActive(var_23_bool);
	var_32_bool = var_23_bool;
	if(var_32_bool != 0) {
		var_6_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_22_cvector, var_20_cvector);
	var_33_float = GetByIndex(var_21_cvector, 0);
	var_34_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_33_float, var_34_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_6_bool = 1;
	return 16;
}


