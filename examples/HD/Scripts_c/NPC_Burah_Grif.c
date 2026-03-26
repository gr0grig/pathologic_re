// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,lshStopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,WaitForAnimEnd/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,AddItem/3,AddItem/4,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,ClearSubContainer/1,GetInvItemByName/2
// @STRINGS: W:Neutral|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Sly|W:Fear|W:Anger|W:Smile|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:.bin|W:Door |W: not found|W:locked|A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Grif.png|W:ui/NPC_Grif_b.png|W:oob3Grif1|W:oob3Grif2|W:oob3Grif3|W:pt_map_notkin|A:ShowMap|W:oob1Grif3|W:b1q01GrifToldAboutDanko|W:b1q01GrifGotoDanko|W:pt_map_eva|A:AddMark|W:oob2Grif1|W:oob1Grif4|W:quest_b1_04|W:oob8Grif1|W:b8q01GrifGotoKlara|W:pt_map_mishka|W:oob8Grif2|W:oob1Grif5|W:b1GrifGotoNotkin|W:playsound|W:giveitem|W:oob1Grif6|W:mapmark|A:SetReturnValue|W:b1q03_2|W:b1q03GrifGotoDoberman|W:pt_b1q03_doberman|W:b1q03|W:quest_b1_03|W:place_doberman|W:oob1Grif1|W:oob1Grif2|W:samopal ammo5 is given|W:samopal_ammo|W:cleanup|W:b1q02GrifGotoLaska|W:pt_map_laska|W:b3q02|W:b3q02GrifGotoDanko|W:b3q02GrifGotoNotkin|W:warehouse_notkin@door1|W:b8q01|W:b8q02|W:b1q01NotkinGotoGrif|W:b1q02|W:b1q03_dead|W:b1q03_retreat|W:b3q02Dead|W:b3q02GrabitelTalk|W:b1q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:Rifle|W:Revolver|W:Knife|W:tvirin|W:lockpick|W:Scalpel|W:revolver_ammo|W:rifle_ammo|W:kerosene|W:halfboot_repel|W:boot_army|W:balahon|W:glove_army|W:Gun_danko|W:Gun|W:branch
// @GLOBALS: 0:object:,1:bool:,2:bool:,3:int:
// @RUN_OP: 0x135c
// @RUN_TASK: 27
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0xf vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0x170 vars=int,int
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x64b vars=int,int
// @TASK_5: vars=object params=2
// @TASK_6: vars=object,object,string,bool params=2
// @EVENT_11: op=0x830 vars=int,int
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa85 vars=int,int
// @TASK_9: vars=object params=2
// @TASK_10: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb58 vars=int,int
// @TASK_11: vars=object params=2
// @TASK_12: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc2b vars=int,int
// @TASK_13: vars=object params=2
// @TASK_14: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcfe vars=int,int
// @TASK_15: vars=object params=2
// @TASK_16: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdf7 vars=int,int
// @TASK_17: vars=object params=2
// @TASK_18: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf88 vars=int,int
// @TASK_19: vars=object params=2
// @TASK_20: vars=object,object,string,bool params=2
// @EVENT_11: op=0x105b vars=int,int
// @TASK_21: vars=object params=2
// @TASK_22: vars=object,object,string,bool params=2
// @EVENT_11: op=0x112e vars=int,int
// @TASK_23: vars=object params=2
// @TASK_24: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1201 vars=int,int
// @TASK_25: vars=object params=2
// @TASK_26: vars=object,object,string,bool params=2
// @EVENT_11: op=0x12ff vars=int,int
// @TASK_27: vars=cvector params=0
// @EVENT_7: op=0x13ab vars=int
// @EVENT_6: op=0x13d1 vars=
// @EVENT_5: op=0x13e0 vars=
// @EVENT_45: op=0x13ed vars=bool
// @EVENT_0: op=0x13f9 vars=object
// @PE: 0x0,0xf,0x67,0x15a,0x170,0x5f1,0x635,0x64b,0x784,0x81a,0x830,0xa35,0xa6f,0xa85,0xb08,0xb42,0xb58,0xbdb,0xc15,0xc2b,0xcae,0xce8,0xcfe,0xd81,0xde1,0xdf7,0xf38,0xf72,0xf88,0x100b,0x1045,0x105b,0x10de,0x1118,0x112e,0x11b1,0x11eb,0x1201,0x12aa,0x12e9,0x12ff,0x13ab,0x13d1,0x13ed,0x1585,0x15bd,0x1623,0x1680,0x16c7,0x16ef,0x16f5,0x16fb,0x1701,0x1711,0x172b,0x173b,0x1741,0x1747,0x174d,0x1763,0x1769,0x1770,0x1786,0x178c,0x1792,0x1798,0x179f,0x17ce,0x17d7,0x17e0,0x17e6,0x17ec,0x17fc,0x1857,0x185e,0x186a,0x1876,0x1882,0x188e,0x189a,0x18a6,0x18b2,0x18be,0x18ca,0x18d6,0x18e2,0x18ee,0x18fa,0x1906,0x1912,0x191e,0x192a,0x1936,0x1942,0x194e,0x195a,0x1966,0x1972,0x197e,0x1af8,0x1b0b

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	lshStopAnimation();
	StopTrade();
	var_0_bool = true;
	return 0;
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)19085;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_6052();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_bool;
			func_6124(var_144_object);
		}
		var_170_bool = var_68_cvector == (int)19220;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_bool;
			func_6140(var_172_object);
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_bool;
			func_6022();
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_bool;
			func_6151();
		}
		var_212_bool = var_68_cvector == (int)21631;
		if(var_212_bool != 0) {
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_bool;
			func_6151();
		}
		var_216_bool = var_68_cvector == (int)19227;
		if(var_216_bool != 0) {
			var_217_object = Obj(); var_218_object = Obj();
			var_217_object = var_1_object;
			var_218_object = var_0_bool;
			func_6040(var_218_object);
			var_257_object = Obj(); var_258_object = Obj();
			var_257_object = var_1_object;
			var_258_object = var_0_bool;
			func_6151();
		}
		var_260_bool = var_68_cvector == (int)28346;
		if(var_260_bool != 0) {
			var_261_object = Obj(); var_262_object = Obj();
			var_261_object = var_1_object;
			var_262_object = var_0_bool;
			func_6000();
			var_265_object = Obj(); var_266_object = Obj();
			var_265_object = var_1_object;
			var_266_object = var_0_bool;
			func_6006();
			var_275_object = Obj(); var_276_object = Obj();
			var_275_object = var_1_object;
			var_276_object = var_0_bool;
			func_5889(var_276_object);
		}
		var_283_bool = var_68_cvector == (int)19091;
		if(var_283_bool != 0) {
			var_284_object = Obj(); var_285_object = Obj();
			var_284_object = var_1_object;
			var_285_object = var_0_bool;
			func_6052();
			var_286_object = Obj(); var_287_object = Obj();
			var_286_object = var_1_object;
			var_287_object = var_0_bool;
			func_6124(var_287_object);
		}
		var_289_bool = var_68_cvector == (int)19094;
		if(var_289_bool != 0) {
			var_290_object = Obj(); var_291_object = Obj();
			var_290_object = var_1_object;
			var_291_object = var_0_bool;
			func_6040(var_291_object);
			var_292_object = Obj(); var_293_object = Obj();
			var_292_object = var_1_object;
			var_293_object = var_0_bool;
			func_6103();
			var_304_object = Obj(); var_305_object = Obj();
			var_304_object = var_1_object;
			var_305_object = var_0_bool;
			func_6151();
		}
		var_307_bool = var_68_cvector == (int)19115;
		if(var_307_bool != 0) {
			var_308_object = Obj(); var_309_object = Obj();
			var_308_object = var_1_object;
			var_309_object = var_0_bool;
			func_6028();
		}
		var_313_bool = var_68_cvector == (int)19117;
		if(var_313_bool != 0) {
			var_314_object = Obj(); var_315_object = Obj();
			var_314_object = var_1_object;
			var_315_object = var_0_bool;
			func_6094();
			var_326_object = Obj(); var_327_object = Obj();
			var_326_object = var_1_object;
			var_327_object = var_0_bool;
			func_6140(var_327_object);
			var_328_object = Obj(); var_329_object = Obj();
			var_328_object = var_1_object;
			var_329_object = var_0_bool;
			func_6022();
			var_330_object = Obj(); var_331_object = Obj();
			var_330_object = var_1_object;
			var_331_object = var_0_bool;
			func_6151();
		}
		var_333_bool = var_68_cvector == (int)21634;
		if(var_333_bool != 0) {
			var_334_object = Obj(); var_335_object = Obj();
			var_334_object = var_1_object;
			var_335_object = var_0_bool;
			func_5993(var_335_object);
			var_339_object = Obj(); var_340_object = Obj();
			var_339_object = var_1_object;
			var_340_object = var_0_bool;
			func_6094();
			var_341_object = Obj(); var_342_object = Obj();
			var_341_object = var_1_object;
			var_342_object = var_0_bool;
			func_6151();
		}
		var_344_bool = var_68_cvector == (int)19106;
		if(var_344_bool != 0) {
			var_345_object = Obj(); var_346_object = Obj();
			var_345_object = var_1_object;
			var_346_object = var_0_bool;
			func_6118();
		}
		var_350_bool = var_68_cvector == (int)19110;
		if(var_350_bool != 0) {
			var_351_object = Obj(); var_352_object = Obj();
			var_351_object = var_1_object;
			var_352_object = var_0_bool;
			func_6034();
			var_355_object = Obj(); var_356_object = Obj();
			var_355_object = var_1_object;
			var_356_object = var_0_bool;
			func_6169();
		}
		var_366_bool = var_68_cvector == (int)19253;
		if(var_366_bool != 0) {
			var_367_object = Obj(); var_368_object = Obj();
			var_367_object = var_1_object;
			var_368_object = var_0_bool;
			func_5905();
		}
		var_372_bool = var_68_cvector == (int)21646;
		if(var_372_bool != 0) {
			var_373_object = Obj(); var_374_object = Obj();
			var_373_object = var_1_object;
			var_374_object = var_0_bool;
			func_5911();
			var_385_object = Obj(); var_386_object = Obj();
			var_385_object = var_1_object;
			var_386_object = var_0_bool;
			func_5931(var_386_object);
		}
		var_393_bool = var_68_cvector == (int)21647;
		if(var_393_bool != 0) {
			var_394_object = Obj(); var_395_object = Obj();
			var_394_object = var_1_object;
			var_395_object = var_0_bool;
			func_5911();
			var_396_object = Obj(); var_397_object = Obj();
			var_396_object = var_1_object;
			var_397_object = var_0_bool;
			func_5931(var_397_object);
		}
		var_399_bool = var_68_cvector == (int)21879;
		if(var_399_bool != 0) {
			var_400_object = Obj(); var_401_object = Obj();
			var_400_object = var_1_object;
			var_401_object = var_0_bool;
			func_5953();
		}
		var_405_bool = var_68_cvector == (int)21881;
		if(var_405_bool != 0) {
			var_406_object = Obj(); var_407_object = Obj();
			var_406_object = var_1_object;
			var_407_object = var_0_bool;
			func_5959();
		}
		var_411_bool = var_68_cvector == (int)28331;
		if(var_411_bool != 0) {
			var_412_object = Obj(); var_413_object = Obj();
			var_412_object = var_1_object;
			var_413_object = var_0_bool;
			func_5959();
		}
		var_415_bool = var_68_cvector == (int)21674;
		if(var_415_bool != 0) {
			var_416_object = Obj(); var_417_object = Obj();
			var_416_object = var_1_object;
			var_417_object = var_0_bool;
			func_6047(var_417_object);
		}
		var_420_bool = var_67_bool == (int)19076;
		if(var_420_bool != 0) {
			var_421_bool = 0; var_422_object = Obj();
			var_422_object = var_1_object;
			func_6382(var_422_object);
			if(var_421_bool != 0) {
				var_429_object = Obj(); var_430_object = Obj();
				var_429_object = var_1_object;
				var_430_object = var_0_bool;
				func_6112();
				var_433_string = "";
				func_346(var_68_cvector, "Neutral");
				@@@var_0_bool:SetMessage((int)517945);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)527026, (int)28316, (int)28315);
				@@@var_0_bool:AddReply((int)527044, (int)28316, (int)28334);
				return 0;
			}
			var_457_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)517955);
			@@@var_0_bool:ClearReplies();
			var_459_bool = 0; var_460_object = Obj();
			var_460_object = var_1_object;
			func_6298(var_460_object);
			if(var_459_bool != 0) {
				@@@var_0_bool:AddReply((int)527047, (int)28341, (int)28340);
			}
			var_468_bool = 0;
			var_468_bool = 0;
			var_469_bool = 0;
			var_469_bool = 0;
			var_470_bool = 0; var_471_object = Obj();
			var_471_object = var_1_object;
			func_6358(var_471_object);
			if(var_470_bool != 0) {
				var_476_bool = 0; var_477_object = Obj();
				var_477_object = var_1_object;
				func_6334(var_477_object);
				var_482_bool = var_476_bool == 0; //@nz
				if(var_482_bool != 0) {
					var_469_bool = 1;
				}
			}
			if(var_469_bool != 0) {
				var_483_bool = 0; var_484_object = Obj();
				var_484_object = var_1_object;
				func_6346(var_484_object);
				var_489_bool = var_483_bool == 0; //@nz
				if(var_489_bool != 0) {
					var_468_bool = 1;
				}
			}
			if(var_468_bool != 0) {
				@@@var_0_bool:AddReply((int)517957, (int)19090, (int)19089);
			}
			var_493_bool = 0;
			var_493_bool = 0;
			var_494_bool = 0;
			var_494_bool = 0;
			var_495_bool = 0; var_496_object = Obj();
			var_496_object = var_1_object;
			func_6370(var_496_object);
			if(var_495_bool != 0) {
				var_501_bool = 0; var_502_object = Obj();
				var_502_object = var_1_object;
				func_6346(var_502_object);
				if(var_501_bool != 0) {
					var_494_bool = 1;
				}
			}
			if(var_494_bool != 0) {
				var_503_bool = 0; var_504_object = Obj();
				var_504_object = var_1_object;
				func_6334(var_504_object);
				var_505_bool = var_503_bool == 0; //@nz
				if(var_505_bool != 0) {
					var_493_bool = 1;
				}
			}
			if(var_493_bool != 0) {
				@@@var_0_bool:AddReply((int)517960, (int)28332, (int)19092);
			}
			var_509_bool = 0;
			var_509_bool = 0;
			var_510_bool = 0;
			var_510_bool = 0;
			var_511_bool = 0; var_512_object = Obj();
			var_512_object = var_1_object;
			func_6370(var_512_object);
			if(var_511_bool != 0) {
				var_513_bool = 0; var_514_object = Obj();
				var_514_object = var_1_object;
				func_6334(var_514_object);
				if(var_513_bool != 0) {
					var_510_bool = 1;
				}
			}
			if(var_510_bool != 0) {
				var_515_bool = 0; var_516_object = Obj();
				var_516_object = var_1_object;
				func_6310(var_516_object);
				if(var_515_bool != 0) {
					var_509_bool = 1;
				}
			}
			if(var_509_bool != 0) {
				@@@var_0_bool:AddReply((int)517982, (int)19116, (int)19115);
			}
			var_524_bool = 0;
			var_524_bool = 0;
			var_525_bool = 0; var_526_object = Obj();
			var_526_object = var_1_object;
			func_6322(var_526_object);
			if(var_525_bool != 0) {
				var_531_bool = 0; var_532_object = Obj();
				var_532_object = var_1_object;
				func_6394(var_532_object);
				if(var_531_bool != 0) {
					var_524_bool = 1;
				}
			}
			if(var_524_bool != 0) {
				@@@var_0_bool:AddReply((int)517973, (int)28323, (int)19106);
			}
			var_540_bool = 0;
			var_540_bool = 0;
			var_541_bool = 0;
			var_541_bool = 0;
			var_542_bool = 0; var_543_object = Obj();
			var_543_object = var_1_object;
			func_6490(var_543_object);
			if(var_542_bool != 0) {
				var_548_bool = 0; var_549_object = Obj();
				var_549_object = var_1_object;
				func_6502(var_549_object);
				var_554_bool = var_548_bool == 0; //@nz
				if(var_554_bool != 0) {
					var_541_bool = 1;
				}
			}
			if(var_541_bool != 0) {
				var_555_bool = 0; var_556_object = Obj();
				var_556_object = var_1_object;
				func_6286(var_556_object);
				if(var_555_bool != 0) {
					var_540_bool = 1;
				}
			}
			if(var_540_bool != 0) {
				@@@var_0_bool:AddReply((int)518139, (int)21635, (int)19253);
			}
			var_564_bool = 0; var_565_object = Obj();
			var_565_object = var_1_object;
			func_6526(var_565_object);
			if(var_564_bool != 0) {
				@@@var_0_bool:AddReply((int)520672, (int)28325, (int)21879);
			}
			@@@var_0_bool:AddReply((int)520471, (int)-1, (int)21674);
			@@@var_0_bool:AddReply((int)517956, (int)-1, (int)19088);
			return 0;
		}
		var_580_bool = var_67_bool == (int)28325;
		if(var_580_bool != 0) {
			var_581_string = "";
			func_346(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)527036);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527037, (int)21880, (int)28326);
			@@@var_0_bool:AddReply((int)527038, (int)21880, (int)28327);
			return 0;
		}
		var_590_bool = var_67_bool == (int)21880;
		if(var_590_bool != 0) {
			var_591_string = "";
			func_346(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)520673);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527039, (int)28330, (int)28329);
			return 0;
		}
		var_597_bool = var_67_bool == (int)28330;
		if(var_597_bool != 0) {
			var_598_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)527040);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520674, (int)-1, (int)21881);
			@@@var_0_bool:AddReply((int)527041, (int)-1, (int)28331);
			return 0;
		}
		var_607_bool = var_67_bool == (int)21635;
		if(var_607_bool != 0) {
			var_608_string = "";
			func_346(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)520425);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520426, (int)21637, (int)21636);
			return 0;
		}
		var_614_bool = var_67_bool == (int)21637;
		if(var_614_bool != 0) {
			var_615_string = "";
			func_346(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)520427);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520428, (int)21639, (int)21638);
			@@@var_0_bool:AddReply((int)520432, (int)21643, (int)21642);
			return 0;
		}
		var_624_bool = var_67_bool == (int)21643;
		if(var_624_bool != 0) {
			var_625_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)520433);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520434, (int)21641, (int)21644);
			return 0;
		}
		var_631_bool = var_67_bool == (int)21639;
		if(var_631_bool != 0) {
			var_632_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)520429);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520430, (int)21641, (int)21640);
			return 0;
		}
		var_638_bool = var_67_bool == (int)21641;
		if(var_638_bool != 0) {
			var_639_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)520431);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520435, (int)-1, (int)21646);
			@@@var_0_bool:AddReply((int)520436, (int)-1, (int)21647);
			return 0;
		}
		var_648_bool = var_67_bool == (int)28323;
		if(var_648_bool != 0) {
			var_649_string = "";
			func_346(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)527034);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527035, (int)19107, (int)28324);
			return 0;
		}
		var_655_bool = var_67_bool == (int)19107;
		if(var_655_bool != 0) {
			var_656_string = "";
			func_346(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)517974);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517975, (int)19109, (int)19108);
			return 0;
		}
		var_662_bool = var_67_bool == (int)19109;
		if(var_662_bool != 0) {
			var_663_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)517976);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517977, (int)-1, (int)19110);
			return 0;
		}
		var_669_bool = var_67_bool == (int)19116;
		if(var_669_bool != 0) {
			var_670_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)517983);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517984, (int)-1, (int)19117);
			@@@var_0_bool:AddReply((int)520424, (int)-1, (int)21634);
			return 0;
		}
		var_679_bool = var_67_bool == (int)28332;
		if(var_679_bool != 0) {
			var_680_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)527042);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527043, (int)19093, (int)28333);
			return 0;
		}
		var_686_bool = var_67_bool == (int)19093;
		if(var_686_bool != 0) {
			var_687_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)517961);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517962, (int)-1, (int)19094);
			return 0;
		}
		var_693_bool = var_67_bool == (int)19090;
		if(var_693_bool != 0) {
			var_694_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)517958);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517959, (int)-1, (int)19091);
			return 0;
		}
		var_700_bool = var_67_bool == (int)28341;
		if(var_700_bool != 0) {
			var_701_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)527048);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527049, (int)28344, (int)28342);
			@@@var_0_bool:AddReply((int)527050, (int)28344, (int)28343);
			return 0;
		}
		var_710_bool = var_67_bool == (int)28344;
		if(var_710_bool != 0) {
			var_711_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)527051);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527052, (int)-1, (int)28346);
			return 0;
		}
		var_717_bool = var_67_bool == (int)28316;
		if(var_717_bool != 0) {
			var_718_string = "";
			func_346(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)527027);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527028, (int)28318, (int)28317);
			return 0;
		}
		var_724_bool = var_67_bool == (int)28318;
		if(var_724_bool != 0) {
			var_725_string = "";
			func_346(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)527029);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527030, (int)28320, (int)28319);
			return 0;
		}
		var_731_bool = var_67_bool == (int)28320;
		if(var_731_bool != 0) {
			var_732_string = "";
			func_346(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)527031);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527032, (int)28322, (int)28321);
			return 0;
		}
		var_738_bool = var_67_bool == (int)28322;
		if(var_738_bool != 0) {
			var_739_string = "";
			func_346(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)527033);
			@@@var_0_bool:ClearReplies();
			var_741_bool = 0;
			var_741_bool = 0;
			var_742_bool = 0; var_743_object = Obj();
			var_743_object = var_1_object;
			func_6334(var_743_object);
			var_744_bool = var_742_bool == 0; //@nz
			if(var_744_bool != 0) {
				var_745_bool = 0; var_746_object = Obj();
				var_746_object = var_1_object;
				func_6346(var_746_object);
				var_747_bool = var_745_bool == 0; //@nz
				if(var_747_bool != 0) {
					var_741_bool = 1;
				}
			}
			if(var_741_bool != 0) {
				@@@var_0_bool:AddReply((int)517947, (int)19081, (int)19078);
			}
			var_751_bool = 0;
			var_751_bool = 0;
			var_752_bool = 0;
			var_752_bool = 0;
			var_753_bool = 0; var_754_object = Obj();
			var_754_object = var_1_object;
			func_6358(var_754_object);
			var_755_bool = var_753_bool == 0; //@nz
			if(var_755_bool != 0) {
				var_756_bool = 0; var_757_object = Obj();
				var_757_object = var_1_object;
				func_6346(var_757_object);
				var_758_bool = var_756_bool == 0; //@nz
				if(var_758_bool != 0) {
					var_752_bool = 1;
				}
			}
			if(var_752_bool != 0) {
				var_759_bool = 0; var_760_object = Obj();
				var_760_object = var_1_object;
				func_6334(var_760_object);
				var_761_bool = var_759_bool == 0; //@nz
				if(var_761_bool != 0) {
					var_751_bool = 1;
				}
			}
			if(var_751_bool != 0) {
				@@@var_0_bool:AddReply((int)517946, (int)19079, (int)19077);
			}
			var_765_bool = 0; var_766_object = Obj();
			var_766_object = var_1_object;
			func_6334(var_766_object);
			if(var_765_bool != 0) {
				@@@var_0_bool:AddReply((int)518086, (int)19219, (int)19218);
			}
			var_770_bool = 0;
			var_770_bool = 0;
			var_771_bool = 0; var_772_object = Obj();
			var_772_object = var_1_object;
			func_6346(var_772_object);
			if(var_771_bool != 0) {
				var_773_bool = 0; var_774_object = Obj();
				var_774_object = var_1_object;
				func_6334(var_774_object);
				var_775_bool = var_773_bool == 0; //@nz
				if(var_775_bool != 0) {
					var_770_bool = 1;
				}
			}
			if(var_770_bool != 0) {
				@@@var_0_bool:AddReply((int)518089, (int)19222, (int)19221);
			}
			return 0;
		}
		var_780_bool = var_67_bool == (int)19222;
		if(var_780_bool != 0) {
			var_781_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)518090);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520422, (int)21633, (int)21632);
			return 0;
		}
		var_787_bool = var_67_bool == (int)21633;
		if(var_787_bool != 0) {
			var_788_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)520423);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518095, (int)-1, (int)19227);
			return 0;
		}
		var_794_bool = var_67_bool == (int)19219;
		if(var_794_bool != 0) {
			var_795_string = "";
			func_346(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)518087);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518088, (int)-1, (int)19220);
			@@@var_0_bool:AddReply((int)520421, (int)-1, (int)21631);
			return 0;
		}
		var_804_bool = var_67_bool == (int)19079;
		if(var_804_bool != 0) {
			var_805_string = "";
			func_346(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)517948);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517949, (int)19081, (int)19080);
			@@@var_0_bool:AddReply((int)520420, (int)19081, (int)21630);
			return 0;
		}
		var_814_bool = var_67_bool == (int)19081;
		if(var_814_bool != 0) {
			var_815_string = "";
			func_346(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)517950);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517951, (int)19084, (int)19083);
			@@@var_0_bool:AddReply((int)517954, (int)-1, (int)19086);
			return 0;
		}
		var_824_bool = var_67_bool == (int)19084;
		if(var_824_bool != 0) {
			var_825_string = "";
			func_346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)517952);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517953, (int)-1, (int)19085);
			return 0;
		}
		var_3_object = true;
		var_830_bool = 0;
		func_5869(var_830_bool);
		if(var_830_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x171";
	
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)20634;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5947();
		}
		var_78_bool = var_68_cvector == (int)21673;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_6047(var_80_object);
		}
		var_83_bool = var_67_bool == (int)19381;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_1589(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)518272);
			@@@var_0_bool:ClearReplies();
			var_102_bool = 0; var_103_object = Obj();
			var_103_object = var_1_object;
			func_6514(var_103_object);
			if(var_102_bool != 0) {
				@@@var_0_bool:AddReply((int)519463, (int)20635, (int)20634);
			}
			@@@var_0_bool:AddReply((int)520470, (int)-1, (int)21673);
			@@@var_0_bool:AddReply((int)518273, (int)-1, (int)19382);
			return 0;
		}
		var_120_bool = var_67_bool == (int)20635;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_1589(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519464);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519465, (int)20637, (int)20636);
			@@@var_0_bool:AddReply((int)519479, (int)29100, (int)20651);
			return 0;
		}
		var_130_bool = var_67_bool == (int)20637;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_1589(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)519466);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519467, (int)20639, (int)20638);
			@@@var_0_bool:AddReply((int)519480, (int)29100, (int)20652);
			return 0;
		}
		var_140_bool = var_67_bool == (int)20639;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_1589(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)519468);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519469, (int)20641, (int)20640);
			@@@var_0_bool:AddReply((int)519481, (int)29100, (int)20653);
			return 0;
		}
		var_150_bool = var_67_bool == (int)29100;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_1589(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)527746);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527747, (int)20641, (int)29103);
			return 0;
		}
		var_157_bool = var_67_bool == (int)20641;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_1589(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)519470);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519471, (int)20643, (int)20642);
			@@@var_0_bool:AddReply((int)519474, (int)20646, (int)20645);
			return 0;
		}
		var_167_bool = var_67_bool == (int)20646;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_1589(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)519475);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519476, (int)20648, (int)20647);
			return 0;
		}
		var_174_bool = var_67_bool == (int)20643;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_1589(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)519472);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519473, (int)20648, (int)20644);
			return 0;
		}
		var_181_bool = var_67_bool == (int)20648;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_1589(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519477);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519478, (int)-1, (int)20650);
			return 0;
		}
		var_3_object = true;
		var_187_bool = 0;
		func_5869(var_187_bool);
		if(var_187_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x64c";
	
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)19500;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5871();
		}
		var_78_bool = var_68_cvector == (int)19503;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_6185();
		}
		var_123_bool = var_68_cvector == (int)20354;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_bool;
			func_6185();
		}
		var_127_bool = var_68_cvector == (int)19504;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_bool;
			func_5877();
		}
		var_133_bool = var_68_cvector == (int)19506;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_bool;
			func_6208();
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_bool;
			func_6231();
		}
		var_167_bool = var_68_cvector == (int)20346;
		if(var_167_bool != 0) {
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_bool;
			func_6208();
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_bool;
			func_6231();
		}
		var_173_bool = var_68_cvector == (int)20828;
		if(var_173_bool != 0) {
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_bool;
			func_5883();
		}
		var_179_bool = var_68_cvector == (int)19507;
		if(var_179_bool != 0) {
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_bool;
			func_6047(var_181_object);
		}
		var_184_bool = var_67_bool == (int)19499;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_2074(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)518386);
			@@@var_0_bool:ClearReplies();
			var_203_bool = 0;
			var_203_bool = 0;
			var_204_bool = 0;
			var_204_bool = 0;
			var_205_bool = 0;
			var_205_bool = 0;
			var_206_bool = 0; var_207_object = Obj();
			var_207_object = var_1_object;
			func_6406(var_207_object);
			if(var_206_bool != 0) {
				var_214_bool = 0; var_215_object = Obj();
				var_215_object = var_1_object;
				func_6442(var_215_object);
				if(var_214_bool != 0) {
					var_205_bool = 1;
				}
			}
			if(var_205_bool != 0) {
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_6430(var_221_object);
				var_226_bool = var_220_bool == 0; //@nz
				if(var_226_bool != 0) {
					var_204_bool = 1;
				}
			}
			if(var_204_bool != 0) {
				var_227_bool = 0; var_228_object = Obj();
				var_228_object = var_1_object;
				func_6478(var_228_object);
				if(var_227_bool != 0) {
					var_203_bool = 1;
				}
			}
			if(var_203_bool != 0) {
				@@@var_0_bool:AddReply((int)518387, (int)20347, (int)19500);
			}
			var_236_bool = 0;
			var_236_bool = 0;
			var_237_bool = 0;
			var_237_bool = 0;
			var_238_bool = 0; var_239_object = Obj();
			var_239_object = var_1_object;
			func_6418(var_239_object);
			if(var_238_bool != 0) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_6454(var_245_object);
				if(var_244_bool != 0) {
					var_237_bool = 1;
				}
			}
			if(var_237_bool != 0) {
				var_250_bool = 0; var_251_object = Obj();
				var_251_object = var_1_object;
				func_6430(var_251_object);
				var_252_bool = var_250_bool == 0; //@nz
				if(var_252_bool != 0) {
					var_236_bool = 1;
				}
			}
			if(var_236_bool != 0) {
				@@@var_0_bool:AddReply((int)518391, (int)20339, (int)19504);
			}
			var_256_bool = 0;
			var_256_bool = 0;
			var_257_bool = 0; var_258_object = Obj();
			var_258_object = var_1_object;
			func_6430(var_258_object);
			if(var_257_bool != 0) {
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_object;
				func_6466(var_260_object);
				if(var_259_bool != 0) {
					var_256_bool = 1;
				}
			}
			if(var_256_bool != 0) {
				@@@var_0_bool:AddReply((int)519664, (int)20829, (int)20828);
			}
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_6430(var_269_object);
			var_270_bool = var_268_bool == 0; //@nz
			if(var_270_bool != 0) {
				@@@var_0_bool:AddReply((int)518394, (int)-1, (int)19507);
			}
			@@@var_0_bool:AddReply((int)518388, (int)-1, (int)19501);
			return 0;
		}
		var_278_bool = var_67_bool == (int)20829;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_2074(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519665);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519666, (int)20831, (int)20830);
			@@@var_0_bool:AddReply((int)519671, (int)-1, (int)20835);
			return 0;
		}
		var_288_bool = var_67_bool == (int)20831;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_2074(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519667);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519668, (int)20833, (int)20832);
			return 0;
		}
		var_295_bool = var_67_bool == (int)20833;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_2074(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519669);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519670, (int)-1, (int)20834);
			return 0;
		}
		var_302_bool = var_67_bool == (int)20339;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_2074(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519197);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519198, (int)19505, (int)20340);
			@@@var_0_bool:AddReply((int)519199, (int)20342, (int)20341);
			return 0;
		}
		var_312_bool = var_67_bool == (int)20342;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_2074(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519200);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519201, (int)-1, (int)20343);
			return 0;
		}
		var_319_bool = var_67_bool == (int)19505;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_2074(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)518392);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518393, (int)-1, (int)19506);
			@@@var_0_bool:AddReply((int)519202, (int)20345, (int)20344);
			return 0;
		}
		var_329_bool = var_67_bool == (int)20345;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_2074(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519203);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519204, (int)-1, (int)20346);
			return 0;
		}
		var_336_bool = var_67_bool == (int)20347;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_2074(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)519205);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519206, (int)20349, (int)20348);
			return 0;
		}
		var_343_bool = var_67_bool == (int)20349;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_2074(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)519207);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519208, (int)19502, (int)20350);
			@@@var_0_bool:AddReply((int)519209, (int)-1, (int)20351);
			return 0;
		}
		var_353_bool = var_67_bool == (int)19502;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_2074(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)518389);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518390, (int)-1, (int)19503);
			@@@var_0_bool:AddReply((int)519210, (int)20353, (int)20352);
			return 0;
		}
		var_363_bool = var_67_bool == (int)20353;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_2074(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)519211);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519212, (int)-1, (int)20354);
			@@@var_0_bool:AddReply((int)519213, (int)-1, (int)20355);
			return 0;
		}
		var_3_object = true;
		var_372_bool = 0;
		func_5869(var_372_bool);
		if(var_372_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x831";
	
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)21677;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_6047(var_74_object);
		}
		var_77_bool = var_67_bool == (int)21676;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_2671(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)520473);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520474, (int)-1, (int)21677);
			@@@var_0_bool:AddReply((int)520475, (int)-1, (int)21678);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5869(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa86";
	
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)21681;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_6047(var_74_object);
		}
		var_77_bool = var_67_bool == (int)21680;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_2882(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)520477);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520478, (int)-1, (int)21681);
			@@@var_0_bool:AddReply((int)520479, (int)-1, (int)21682);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5869(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb59";
	
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)21685;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_6047(var_74_object);
		}
		var_77_bool = var_67_bool == (int)21684;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3093(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)520481);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520482, (int)-1, (int)21685);
			@@@var_0_bool:AddReply((int)520483, (int)-1, (int)21686);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5869(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc2c";
	
}


task_14_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)21689;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_6047(var_74_object);
		}
		var_77_bool = var_67_bool == (int)21688;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3304(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)520485);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520486, (int)-1, (int)21689);
			@@@var_0_bool:AddReply((int)520487, (int)-1, (int)21690);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5869(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcff";
	
}


task_16_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)21693;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_6047(var_74_object);
		}
		var_77_bool = var_68_cvector == (int)22573;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_bool;
			func_5965();
		}
		var_83_bool = var_68_cvector == (int)22575;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_bool;
			func_5971();
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_bool;
			func_6034();
		}
		var_107_bool = var_68_cvector == (int)22647;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_bool;
			func_5987();
		}
		var_113_bool = var_67_bool == (int)21692;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_3553(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)520489);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520490, (int)-1, (int)21693);
			var_135_bool = 0;
			var_135_bool = 0;
			var_136_bool = 0; var_137_object = Obj();
			var_137_object = var_1_object;
			func_6238(var_137_object);
			if(var_136_bool != 0) {
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_object;
				func_6250(var_145_object);
				if(var_144_bool != 0) {
					var_135_bool = 1;
				}
			}
			if(var_135_bool != 0) {
				@@@var_0_bool:AddReply((int)521395, (int)25305, (int)22573);
			}
			var_153_bool = 0;
			var_153_bool = 0;
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_6274(var_155_object);
			if(var_154_bool != 0) {
				var_160_bool = 0; var_161_object = Obj();
				var_161_object = var_1_object;
				func_6262(var_161_object);
				if(var_160_bool != 0) {
					var_153_bool = 1;
				}
			}
			if(var_153_bool != 0) {
				@@@var_0_bool:AddReply((int)521482, (int)22648, (int)22647);
			}
			@@@var_0_bool:AddReply((int)520491, (int)-1, (int)21694);
			return 0;
		}
		var_173_bool = var_67_bool == (int)22648;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_3553(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)521483);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521484, (int)25315, (int)22649);
			return 0;
		}
		var_180_bool = var_67_bool == (int)25315;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_3553(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)524021);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)524022, (int)25317, (int)25316);
			return 0;
		}
		var_187_bool = var_67_bool == (int)25317;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_3553(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)524023);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)524024, (int)-1, (int)25318);
			@@@var_0_bool:AddReply((int)524025, (int)-1, (int)25319);
			return 0;
		}
		var_197_bool = var_67_bool == (int)25305;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_3553(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)524012);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)524013, (int)25309, (int)25306);
			@@@var_0_bool:AddReply((int)524014, (int)25311, (int)25307);
			@@@var_0_bool:AddReply((int)524015, (int)25311, (int)25308);
			return 0;
		}
		var_210_bool = var_67_bool == (int)25311;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_3553(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)524018);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521397, (int)-1, (int)22575);
			return 0;
		}
		var_217_bool = var_67_bool == (int)25309;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_3553(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)524016);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)524017, (int)-1, (int)25310);
			return 0;
		}
		var_3_object = true;
		var_223_bool = 0;
		func_5869(var_223_bool);
		if(var_223_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdf8";
	
}


task_18_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)21697;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_6047(var_74_object);
		}
		var_77_bool = var_67_bool == (int)21696;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3954(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)520493);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520494, (int)-1, (int)21697);
			@@@var_0_bool:AddReply((int)520495, (int)-1, (int)21698);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5869(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf89";
	
}


task_20_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)21701;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_6047(var_74_object);
		}
		var_77_bool = var_67_bool == (int)21700;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_4165(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)520497);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520498, (int)-1, (int)21701);
			@@@var_0_bool:AddReply((int)520499, (int)-1, (int)21702);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5869(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x105c";
	
}


task_22_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_68_cvector == (int)21705;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_6047(var_74_object);
		}
		var_77_bool = var_67_bool == (int)21704;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_4376(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)520501);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520502, (int)-1, (int)21705);
			@@@var_0_bool:AddReply((int)520503, (int)-1, (int)21706);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5869(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x112f";
	
}


task_24_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_67_bool == (int)21941;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_4587(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)520730);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520731, (int)21943, (int)21942);
			@@@var_0_bool:AddReply((int)520738, (int)21943, (int)21949);
			return 0;
		}
		var_98_bool = var_67_bool == (int)21943;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_4587(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)520732);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520733, (int)21945, (int)21944);
			@@@var_0_bool:AddReply((int)520737, (int)21945, (int)21948);
			return 0;
		}
		var_108_bool = var_67_bool == (int)21945;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_4587(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)520734);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520735, (int)-1, (int)21946);
			@@@var_0_bool:AddReply((int)520736, (int)-1, (int)21947);
			return 0;
		}
		var_3_object = true;
		var_117_bool = 0;
		func_5869(var_117_bool);
		if(var_117_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1202";
	
}


task_26_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_cvector)
{
	if((int)1 != 0) {
		func_5616();
		var_72_bool = var_67_int == (int)36971;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_4841(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535294);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_bool:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_bool:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_101_bool = var_67_int == (int)36973;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_4841(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535296);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_bool:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_111_bool = var_67_int == (int)36975;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_4841(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535298);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_bool:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_object = true;
		var_120_bool = 0;
		func_5869(var_120_bool);
		if(var_120_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1300";
	
}


task_27_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_int)
{
	var_69_bool = var_67_int == (int)10;
	if(var_69_bool != 0) {
		func_5031();
		var_71_bool = 0;
		var_71_bool = 0;
		var_72_bool = 0;
		func_5279(var_72_bool);
		if(var_72_bool != 0) {
			var_75_bool = 0;
			func_5000(var_75_bool);
			if(var_75_bool != 0) {
				var_71_bool = 1;
			}
		}
		if(var_71_bool != 0) {
			var_92_bool = 0;
			func_4980(var_92_bool);
			if(var_92_bool != 0) {
				var_111_bool = 0; var_112_object = Obj();
				func_5651(Obj());
				var_113_object = var_112_object;
				func_5429(var_111_bool, var_112_object);
			}
		} else {
			func_4995(var_67_int);
			func_5022();
		}
	}
	return 0;
	
}


task_27_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	func_5213();
	func_5031();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_27_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	StopGroup0();
	func_5031();
	var_68_string = "";
	func_5570("Neutral");
	func_5022();
	return 0;
}


task_27_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_bool)
{
	var_68_bool = var_67_bool;
	if(var_68_bool != 0) {
		func_5022();
	} else {
		var_74_string = "";
		func_5570("Neutral");
	}
	return 0;
	
}


task_27_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object)
{
	var_68_bool = 0; var_69_bool = 0;
	IsOverrideActive(var_69_bool);
	var_70_bool = var_69_bool == 0; //@nz
	if(var_70_bool != 0) {
		EventDisable(0);
		func_5213();
		var_71_bool = 0; var_72_object = Obj();
		var_67_object = var_72_object;
		func_5270(var_71_bool, var_72_object);
		EventEnable(0);
		var_85_object = Obj();
		var_67_object = var_85_object;
		func_6923(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object, var_68_bool, var_69_bool, var_85_object);
		var_1453_string = "";
		func_5570("Neutral");
		func_5031();
		func_5022();
	}
	return 2;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	var_67_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_68_int = GlobalVars[3];
	GlobalVars[3] = (int)-1;
	func_4966(var_66_cvector);
	return 0;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_667_string = "";
	func_5570("Neutral");
	lshWaitForAnimEnd();
	var_668_bool = var_0_bool;
	if(var_668_bool != 0) {
		goto Label_4;
	}
	return 0;
}
EMIT "Return(); Pop(0)";


func_6657(var_88_object)
{
	var_89_object = Obj(); var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj();
	GetMainOutdoorScene(var_91_object);
	var_93_bool = var_91_object == 0; //@ne
	if(var_93_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_92_object = 0;
		var_92_object = var_88_object;
		return 4;
	}
	@@var_91_object:GetMap(var_92_object);
	var_92_object = var_88_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5634(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0;
	var_148_bool = 0; var_149_int = 0; var_150_int = 0;
	var_140_int = var_149_int;
	var_141_int = var_150_int;
	func_5678(var_148_bool, var_149_int, var_150_int);
	if(var_148_bool != 0) {
		var_151_int = var_143_int - var_142_int;
		var_153_int = var_151_int + (int)1;
		irand(var_146_int, var_153_int);
		var_155_int = var_146_int + var_142_int;
		AddItem(var_147_bool, var_139_string, (int)0, var_155_int);
	}
	return 4;
}


func_6151()
{
	var_201_int = 0; var_202_int = 0;
	GetVariable("b1q03", var_202_int);
	var_205_bool = var_202_int == (int)1000;
	if(var_205_bool != 0) {
		return 2;
	}
	var_206_bool = 0; var_207_string = ""; var_208_string = "";
	func_5805(var_206_bool, "quest_b1_03", "cleanup");
	SetVariable("b1q03", (int)1000);
	return 2;
}


func_4107(var_0_bool, var_1_object, var_2_object, var_3_object, var_1293_object, var_1294_object)
{
	var_0_bool = var_1294_object;
	var_1_object = var_1293_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1300_string = "";
		func_4165(var_1294_object, "Fear");
		@@@var_0_bool:SetMessage((int)520497);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520498, (int)-1, (int)21701);
		@@@var_0_bool:AddReply((int)520499, (int)-1, (int)21702);
		goto Label_4135;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x100f";
	}
Label_4135:
	var_1315_bool = 0;
	func_5869(var_1315_bool);
	if(var_1315_bool != 0) {

	Label_4139:
		lshWaitForAnimEnd();
		var_1316_object = var_3_object;
		if(var_1316_object != 0) {
		} else {
			var_1317_string = "";
			var_1317_string = var_2_object;
			func_5570(var_1317_string);
			goto Label_4139;
	}
		PlayAnimation("all", "idle");

	Label_4154:
		WaitForAnimEnd();
		var_1320_object = var_3_object;
		if(var_1320_object != 0) {
			goto Label_4164;
		}
		PlayAnimation("all", "idle");
		goto Label_4154;
	}
	goto Label_4164;
	
Label_4164:
	return 0;
	
}


func_6674(var_145_object, var_146_string, var_147_float)
{
	var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_object = Obj(); var_152_bool = 0; var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_object = Obj(); var_156_bool = 0;
	GetMainOutdoorScene(var_155_object);
	var_157_bool = var_155_object == 0; //@ne
	if(var_157_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_155_object:GetLocator(var_146_string, var_156_bool, var_153_cvector, var_154_cvector);
	var_159_bool = var_156_bool == 0; //@nz
	if(var_159_bool != 0) {
		var_161_int = "Warning: outdoor scene locator " + var_146_string;
		var_163_int = var_161_int + " doesnt exist";
		Trace(var_163_int);
	}
	@@var_155_object:GetMap(var_145_object);
	var_164_bool = var_145_object == 0; //@ne
	if(var_164_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_166_float = GetByIndex(var_153_cvector, 0);
	var_167_float = GetByIndex(var_153_cvector, 2);
	@@var_145_object:SetMapParams(var_166_float, var_167_float, var_147_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5651(var_289_object)
{
	var_290_object = Obj(); var_291_object = Obj();
	self(var_291_object);
	var_291_object = var_289_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3093(var_2_object, var_1024_string)
{
	var_1025_bool = 0;
	func_5869(var_1025_bool);
	var_1026_bool = var_1025_bool == 0; //@nz
	if(var_1026_bool != 0) {
		return 0;
	}
	var_1027_bool = var_1024_string == var_2_object;
	if(var_1027_bool != 0) {
		return 0;
	}
	var_1028_string = ""; var_1029_bool = 0;
	var_1024_string = var_1028_string;
	var_1031_bool = var_1024_string == "";
	if(var_1031_bool != 0) {
		var_1029_bool = 0;
	} else {
		var_1029_bool = 1;
	}
	func_5586(var_1028_string, var_1029_bool);
	var_2_object = var_1024_string;
	return 0;
	
}


func_5142()
{
	var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0;
	WaitForAnimEnd();
	var_85_bool = 0;
	func_5279(var_85_bool);
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		return 12;
	}
	func_5844((int)0);
	var_87_int = var_79_int;
	var_80_int = 0;
	
Label_5156:
	var_100_bool = 0;
	var_100_bool = 0;
	var_102_bool = var_80_int < (int)5;
	if(var_102_bool != 0) {
		var_103_bool = 0;
		func_5279(var_103_bool);
		if(var_103_bool != 0) {
			var_100_bool = 1;
		}
	}
	if(var_100_bool != 0) {
		var_104_bool = var_79_int == 0; //@nz
		if(var_104_bool != 0) {
			Sleep((int)3, var_81_bool);
			var_106_bool = var_81_bool == 0; //@nz
			if(var_106_bool != 0) {
			} else {
		} else {
				irand(var_82_int, var_79_int);
				irand(var_83_int, (int)5);
				var_112_bool = var_83_int != (int)0;
				if(var_112_bool != 0) {
					var_82_int = 0;
				}
				var_114_string = ""; var_115_int = 0;
				var_82_int = var_115_int;
				func_5837(var_114_string, var_115_int);
				PlayAnimation("all", var_114_string);
				WaitForAnimEnd(var_84_bool);
				var_116_bool = var_84_bool == 0; //@nz
				if(var_116_bool == 0) goto Label_5197;
				goto Label_5208;
		}
		Label_5197:
			var_107_bool = 0;
			func_5211(var_107_bool);
			var_108_bool = var_107_bool == 0; //@nz
			if(var_108_bool != 0) {
				goto Label_5208;
			}
			ResetAAS();
			var_80_int = var_80_int + (int)1;
			goto Label_5156;

		}
	}
Label_5208:
	ResetAAS();
	return 12;
	
}


func_22(var_0_bool, var_440_int, var_441_object)
{
	var_443_object = Obj(); var_444_bool = 0; var_445_int = 0; var_446_bool = 0; var_447_object = Obj(); var_448_bool = 0; var_449_int = 0; var_450_bool = 0;
	var_0_bool = var_441_object;
	var_451_bool = 0; var_452_object = Obj(); var_453_float = 0;
	var_441_object = var_452_object;
	func_5284(var_451_bool, var_452_object, (float)70.0);
	var_454_bool = var_451_bool == 0; //@nz
	if(var_454_bool != 0) {
		var_440_int = -2;
		return 8;
	}
	CreateDialog(var_447_object);
	var_455_int = 0;
	func_5863(var_455_int);
	@@var_447_object:SetNPCName(var_455_int);
	var_456_int = 0;
	func_5861(var_456_int);
	@@var_447_object:SetNPCDescription(var_456_int);
	var_457_string = "";
	func_5865(var_457_string);
	@@var_447_object:SetPhoto(var_457_string);
	var_458_string = "";
	func_5867(var_458_string);
	@@var_447_object:SetPhoto2(var_458_string);
	var_459_int = 0;
	func_6881(var_459_int);
	@@var_447_object:SetPlayerName(var_459_int);
	IsOverrideActive(var_448_bool);
	var_460_bool = var_448_bool;
	if(var_460_bool != 0) {
		var_440_int = -2;
		return 8;
	}
	DoDialog(var_447_object);
	var_461_bool = 0; var_462_object = Obj();
	func_5651(Obj());
	var_463_object = var_462_object;
	func_5371(var_461_bool, var_462_object);
	var_464_object = Obj(); var_465_object = Obj();
	var_441_object = var_464_object;
	var_447_object = var_465_object;
	TaskCall(2);
	func_103(var_466_object, var_467_object, var_468_string, var_469_bool, var_464_object, var_465_object);
	TaskReturn();
	@@var_447_object:IsDialogEnd(var_450_bool);
	
Label_85:
	var_628_bool = var_450_bool == 0; //@nz
	if(var_628_bool != 0) {
		sync();
		@@var_447_object:IsDialogEnd(var_450_bool);
		goto Label_85;
	}
	var_441_object = Obj();
	func_5353();
	StopDialog(var_447_object);
	@@var_447_object:GetReturnValue((int)-1);
	var_449_int = var_440_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5657(var_253_cvector, var_254_cvector)
{
	var_256_float = 0; var_257_float = 0;
	var_258_int = var_254_cvector | var_254_cvector;
	var_257_float = sqrt(var_258_int);
	var_259_float = 9.999999974752427e-07;
	var_260_bool = var_257_float < var_259_float;
	if(var_260_bool != 0) {
		var_253_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_253_cvector = var_254_cvector / var_257_float;
	return 2;
}


func_6169()
{
	var_357_object = Obj(); var_358_object = Obj();
	func_6657(Obj());
	var_359_object = var_358_object;
	var_364_float = 0;
	func_5817(var_364_float);
	@@var_358_object:AddMark("b1q02GrifGotoLaska", "pt_map_laska", (int)3, (int)518143, var_364_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2074(var_2_object, var_775_string)
{
	var_776_bool = 0;
	func_5869(var_776_bool);
	var_777_bool = var_776_bool == 0; //@nz
	if(var_777_bool != 0) {
		return 0;
	}
	var_778_bool = var_775_string == var_2_object;
	if(var_778_bool != 0) {
		return 0;
	}
	var_779_string = ""; var_780_bool = 0;
	var_775_string = var_779_string;
	var_782_bool = var_775_string == "";
	if(var_782_bool != 0) {
		var_780_bool = 0;
	} else {
		var_780_bool = 1;
	}
	func_5586(var_779_string, var_780_bool);
	var_2_object = var_775_string;
	return 0;
	
}


func_5667(var_248_float, var_249_float, var_250_float, var_251_float)
{
	var_252_bool = var_249_float < var_250_float;
	if(var_252_bool != 0) {
		var_250_float = var_248_float;
		return 0;
	}
	var_253_bool = var_249_float > var_251_float;
	if(var_253_bool != 0) {
		var_251_float = var_248_float;
		return 0;
	}
	var_249_float = var_248_float;
	return 0;
}


func_6185()
{
	var_81_object = Obj(); var_82_object = Obj();
	SetVariable("b3q02", (int)2);
	func_6657(Obj());
	var_85_object = var_82_object;
	var_96_float = 0;
	func_5817(var_96_float);
	@@var_82_object:AddMark("b3q02GrifGotoDanko", "pt_map_eva", (int)0, (int)519653, var_96_float);
	func_6590();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5678(var_133_bool, var_134_int, var_135_int)
{
	var_136_int = 0; var_137_int = 0;
	irand(var_137_int, var_135_int);
	var_133_bool = var_137_int < var_134_int;
	return 2;
}


func_5683(var_473_int, var_474_string)
{
	var_475_int = 0; var_476_int = 0;
	GetVariable(var_474_string, var_476_int);
	var_476_int = var_473_int;
	return 2;
}


func_6707()
{
	var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0;
	ClearSubContainer((int)0);
	func_5822((int)0);
	var_103_int = var_100_int;
	var_104_int = 0; var_105_string = "";
	func_6876(var_104_int, "Rifle");
	AddItem(var_98_bool, var_104_int, (int)0, (int)1);
	var_110_int = 0; var_111_string = "";
	func_6876(var_110_int, "Revolver");
	AddItem(var_98_bool, var_110_int, (int)0, (int)1);
	var_114_int = 0; var_115_string = "";
	func_6876(var_114_int, "Knife");
	AddItem(var_98_bool, var_114_int, (int)0, (int)1);
	var_119_bool = var_100_int != (int)10;
	if(var_119_bool != 0) {
		var_120_int = 0; var_121_string = "";
		func_6876(var_120_int, "tvirin");
		AddItem(var_98_bool, var_120_int, (int)0, (int)1);
	} else {
			var_207_int = 0; var_208_string = "";
			func_6876(var_207_int, "tvirin");
			AddItem(var_98_bool, var_207_int, (int)0, (int)4);
	}
	var_124_int = 0; var_125_string = "";
	func_6876(var_124_int, "lockpick");
	AddItem(var_98_bool, var_124_int, (int)0, (int)3);
	var_128_string = ""; var_129_int = 0; var_130_int = 0;
	func_5623("Scalpel", (int)1, (int)2);
	var_139_string = ""; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0;
	func_5634("revolver_ammo", (int)1, (int)1, (int)5, (int)10);
	var_156_string = ""; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0;
	func_5634("rifle_ammo", (int)1, (int)1, (int)5, (int)20);
	irand(var_99_int, (int)100);
	var_163_bool = var_99_int != (int)0;
	if(var_163_bool != 0) {
		var_164_int = 0; var_165_string = "";
		func_6876(var_164_int, "kerosene");
		AddItem(var_98_bool, var_164_int, (int)0, var_99_int);
	}
	var_168_bool = var_100_int >= (int)3;
	if(var_168_bool != 0) {
		var_169_int = 0; var_170_string = "";
		func_6876(var_169_int, "halfboot_repel");
		AddItem(var_98_bool, var_169_int, (int)0, (int)1);
		var_173_int = 0; var_174_string = "";
		func_6876(var_173_int, "boot_repel");
		AddItem(var_98_bool, var_173_int, (int)0, (int)1);
	}
	var_178_bool = var_100_int >= (int)9;
	if(var_178_bool != 0) {
		var_179_int = 0; var_180_string = "";
		func_6876(var_179_int, "boot_army");
		AddItem(var_98_bool, var_179_int, (int)0, (int)1);
		var_183_int = 0; var_184_string = "";
		func_6876(var_183_int, "balahon");
		AddItem(var_98_bool, var_183_int, (int)0, (int)1);
		var_187_int = 0; var_188_string = "";
		func_6876(var_187_int, "glove_army");
		AddItem(var_98_bool, var_187_int, (int)0, (int)1);
	}
	func_6898((int)0);
	var_191_int = var_101_int;
	var_196_bool = var_101_int == (int)0;
	if(var_196_bool != 0) {
		var_197_int = 0; var_198_string = "";
		func_6876(var_197_int, "Gun_danko");
		AddItem(var_98_bool, var_197_int, (int)0, (int)1);
	} else {
		var_202_bool = var_101_int == (int)2;
		if(var_202_bool == 0) goto Label_6875;
		var_203_int = 0; var_204_string = "";
		func_6876(var_203_int, "Gun");
		AddItem(var_98_bool, var_203_int, (int)0, (int)1);

	}
Label_6875:
	return 8;
	
}


func_1589(var_2_object, var_705_string)
{
	var_706_bool = 0;
	func_5869(var_706_bool);
	var_707_bool = var_706_bool == 0; //@nz
	if(var_707_bool != 0) {
		return 0;
	}
	var_708_bool = var_705_string == var_2_object;
	if(var_708_bool != 0) {
		return 0;
	}
	var_709_string = ""; var_710_bool = 0;
	var_705_string = var_709_string;
	var_712_bool = var_705_string == "";
	if(var_712_bool != 0) {
		var_710_bool = 0;
	} else {
		var_710_bool = 1;
	}
	func_5586(var_709_string, var_710_bool);
	var_2_object = var_705_string;
	return 0;
	
}


func_2613(var_0_bool, var_1_object, var_2_object, var_3_object, var_895_object, var_896_object)
{
	var_0_bool = var_896_object;
	var_1_object = var_895_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_902_string = "";
		func_2671(var_896_object, "Anger");
		@@@var_0_bool:SetMessage((int)520473);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520474, (int)-1, (int)21677);
		@@@var_0_bool:AddReply((int)520475, (int)-1, (int)21678);
		goto Label_2641;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa39";
	}
Label_2641:
	var_917_bool = 0;
	func_5869(var_917_bool);
	if(var_917_bool != 0) {

	Label_2645:
		lshWaitForAnimEnd();
		var_918_object = var_3_object;
		if(var_918_object != 0) {
		} else {
			var_919_string = "";
			var_919_string = var_2_object;
			func_5570(var_919_string);
			goto Label_2645;
	}
		PlayAnimation("all", "idle");

	Label_2660:
		WaitForAnimEnd();
		var_922_object = var_3_object;
		if(var_922_object != 0) {
			goto Label_2670;
		}
		PlayAnimation("all", "idle");
		goto Label_2660;
	}
	goto Label_2670;
	
Label_2670:
	return 0;
	
}


func_5688(var_129_object, var_130_string)
{
	var_131_object = Obj(); var_132_object = Obj(); var_133_object = Obj(); var_134_object = Obj();
	GetMainOutdoorScene(var_133_object);
	var_136_int = var_130_string + ".bin";
	AddBlankActor(var_134_object, var_133_object, var_130_string, var_136_int);
	var_134_object = var_129_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6208()
{
	var_136_object = Obj(); var_137_object = Obj();
	SetVariable("b3q02", (int)4);
	func_6657(Obj());
	var_140_object = var_137_object;
	var_145_float = 0;
	func_5817(var_145_float);
	@@var_137_object:AddMark("b3q02GrifGotoNotkin", "pt_map_notkin", (int)0, (int)519662, var_145_float);
	func_6603();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5699(var_156_string, var_157_bool)
{
	var_158_object = Obj(); var_159_object = Obj();
	FindActor(var_159_object, var_156_string);
	var_160_bool = var_159_object == 0; //@nz
	if(var_160_bool != 0) {
		var_162_int = "Door " + var_156_string;
		var_164_int = var_162_int + " not found";
		Trace(var_164_int);
	} else {
		@@var_159_object:SetProperty("locked", var_157_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_4165(var_2_object, var_1300_string)
{
	var_1301_bool = 0;
	func_5869(var_1301_bool);
	var_1302_bool = var_1301_bool == 0; //@nz
	if(var_1302_bool != 0) {
		return 0;
	}
	var_1303_bool = var_1300_string == var_2_object;
	if(var_1303_bool != 0) {
		return 0;
	}
	var_1304_string = ""; var_1305_bool = 0;
	var_1300_string = var_1304_string;
	var_1307_bool = var_1300_string == "";
	if(var_1307_bool != 0) {
		var_1305_bool = 0;
	} else {
		var_1305_bool = 1;
	}
	func_5586(var_1304_string, var_1305_bool);
	var_2_object = var_1300_string;
	return 0;
	
}


func_5716(var_190_int, var_191_int)
{
	var_192_object = Obj(); var_193_object = Obj();
	CreateIntVector(var_193_object);
	@@var_193_object:add(var_190_int);
	@@var_193_object:add(var_191_int);
	SendWorldWndMessage((int)3, var_193_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6231()
{
	var_156_string = ""; var_157_bool = 0;
	func_5699("warehouse_notkin@door1", (bool)0);
	return 0;
}


func_4697(var_0_bool, var_1393_int, var_1394_object)
{
	var_1396_object = Obj(); var_1397_bool = 0; var_1398_int = 0; var_1399_bool = 0; var_1400_object = Obj(); var_1401_bool = 0; var_1402_int = 0; var_1403_bool = 0;
	var_0_bool = var_1394_object;
	var_1404_bool = 0; var_1405_object = Obj(); var_1406_float = 0;
	var_1394_object = var_1405_object;
	func_5284(var_1404_bool, var_1405_object, (float)70.0);
	var_1407_bool = var_1404_bool == 0; //@nz
	if(var_1407_bool != 0) {
		var_1393_int = -2;
		return 8;
	}
	CreateDialog(var_1400_object);
	var_1408_int = 0;
	func_5863(var_1408_int);
	@@var_1400_object:SetNPCName(var_1408_int);
	var_1409_int = 0;
	func_5861(var_1409_int);
	@@var_1400_object:SetNPCDescription(var_1409_int);
	var_1410_string = "";
	func_5865(var_1410_string);
	@@var_1400_object:SetPhoto(var_1410_string);
	var_1411_string = "";
	func_5867(var_1411_string);
	@@var_1400_object:SetPhoto2(var_1411_string);
	var_1412_int = 0;
	func_6881(var_1412_int);
	@@var_1400_object:SetPlayerName(var_1412_int);
	IsOverrideActive(var_1401_bool);
	var_1413_bool = var_1401_bool;
	if(var_1413_bool != 0) {
		var_1393_int = -2;
		return 8;
	}
	DoDialog(var_1400_object);
	var_1414_bool = 0; var_1415_object = Obj();
	func_5651(Obj());
	var_1416_object = var_1415_object;
	func_5371(var_1414_bool, var_1415_object);
	var_1417_object = Obj(); var_1418_object = Obj();
	var_1394_object = var_1417_object;
	var_1400_object = var_1418_object;
	TaskCall(26);
	func_4778(var_1419_object, var_1420_object, var_1421_string, var_1422_bool, var_1417_object, var_1418_object);
	TaskReturn();
	@@var_1400_object:IsDialogEnd(var_1403_bool);
	
Label_4760:
	var_1450_bool = var_1403_bool == 0; //@nz
	if(var_1450_bool != 0) {
		sync();
		@@var_1400_object:IsDialogEnd(var_1403_bool);
		goto Label_4760;
	}
	var_1394_object = Obj();
	func_5353();
	StopDialog(var_1400_object);
	@@var_1400_object:GetReturnValue((int)-1);
	var_1402_int = var_1393_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5211(var_107_bool)
{
	var_107_bool = 1;
	return 0;
}


func_5213()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_6238(var_1159_bool)
{
	var_1161_int = 0; var_1162_string = "";
	func_5683(var_1161_int, "b8q01");
	var_1164_bool = var_1161_int == (int)2;
	if(var_1164_bool != 0) {
		var_1159_bool = 1;
		return 0;
	}
	var_1159_bool = 0;
	return 0;
}


func_3165(var_0_bool, var_1054_int, var_1055_object)
{
	var_1057_object = Obj(); var_1058_bool = 0; var_1059_int = 0; var_1060_bool = 0; var_1061_object = Obj(); var_1062_bool = 0; var_1063_int = 0; var_1064_bool = 0;
	var_0_bool = var_1055_object;
	var_1065_bool = 0; var_1066_object = Obj(); var_1067_float = 0;
	var_1055_object = var_1066_object;
	func_5284(var_1065_bool, var_1066_object, (float)70.0);
	var_1068_bool = var_1065_bool == 0; //@nz
	if(var_1068_bool != 0) {
		var_1054_int = -2;
		return 8;
	}
	CreateDialog(var_1061_object);
	var_1069_int = 0;
	func_5863(var_1069_int);
	@@var_1061_object:SetNPCName(var_1069_int);
	var_1070_int = 0;
	func_5861(var_1070_int);
	@@var_1061_object:SetNPCDescription(var_1070_int);
	var_1071_string = "";
	func_5865(var_1071_string);
	@@var_1061_object:SetPhoto(var_1071_string);
	var_1072_string = "";
	func_5867(var_1072_string);
	@@var_1061_object:SetPhoto2(var_1072_string);
	var_1073_int = 0;
	func_6881(var_1073_int);
	@@var_1061_object:SetPlayerName(var_1073_int);
	IsOverrideActive(var_1062_bool);
	var_1074_bool = var_1062_bool;
	if(var_1074_bool != 0) {
		var_1054_int = -2;
		return 8;
	}
	DoDialog(var_1061_object);
	var_1075_bool = 0; var_1076_object = Obj();
	func_5651(Obj());
	var_1077_object = var_1076_object;
	func_5371(var_1075_bool, var_1076_object);
	var_1078_object = Obj(); var_1079_object = Obj();
	var_1055_object = var_1078_object;
	var_1061_object = var_1079_object;
	TaskCall(14);
	func_3246(var_1080_object, var_1081_object, var_1082_string, var_1083_bool, var_1078_object, var_1079_object);
	TaskReturn();
	@@var_1061_object:IsDialogEnd(var_1064_bool);
	
Label_3228:
	var_1108_bool = var_1064_bool == 0; //@nz
	if(var_1108_bool != 0) {
		sync();
		@@var_1061_object:IsDialogEnd(var_1064_bool);
		goto Label_3228;
	}
	var_1055_object = Obj();
	func_5353();
	StopDialog(var_1061_object);
	@@var_1061_object:GetReturnValue((int)-1);
	var_1063_int = var_1054_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5728(var_179_object, var_180_object, var_181_int)
{
	var_182_int = 0; var_183_int = 0; var_184_bool = 0; var_185_int = 0; var_186_int = 0; var_187_bool = 0;
	@@var_180_object:GetItemID(var_185_int);
	GetInvItemProperty(var_186_int, var_185_int, "Category");
	@@var_179_object:AddItem(var_187_bool, var_180_object, var_186_int, var_181_int);
	var_189_bool = var_187_bool == 0; //@nz
	if(var_189_bool != 0) {
		@@var_179_object:DropItems(var_180_object, var_181_int);
	} else {
		var_190_int = 0; var_191_int = 0;
		var_185_int = var_190_int;
		var_181_int = var_191_int;
		func_5716(var_190_int, var_191_int);
	}
	return 6;
	
}


func_5218(var_82_float, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0);
	GetPosition(var_87_cvector);
	@@var_83_object:GetPosition(var_88_cvector);
	var_89_cvector = var_88_cvector - var_87_cvector;
	var_82_float = var_89_cvector | var_89_cvector;
	return 6;
}


func_103(var_0_bool, var_1_object, var_2_object, var_3_object, var_464_object, var_465_object)
{
	var_0_bool = var_465_object;
	var_1_object = var_464_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_471_bool = 0; var_472_object = Obj();
		var_472_object = var_1_object;
		func_6382(var_472_object);
		if(var_471_bool != 0) {
			var_479_object = Obj(); var_480_object = Obj();
			var_479_object = var_1_object;
			var_480_object = var_0_bool;
			func_6112();
			var_483_string = "";
			func_346(var_465_object, "Neutral");
			@@@var_0_bool:SetMessage((int)517945);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527026, (int)28316, (int)28315);
			@@@var_0_bool:AddReply((int)527044, (int)28316, (int)28334);
		} else {
				var_506_string = "";
				func_346(var_465_object, "Neutral");
				@@@var_0_bool:SetMessage((int)517955);
				@@@var_0_bool:ClearReplies();
				var_508_bool = 0; var_509_object = Obj();
				var_509_object = var_1_object;
				func_6298(var_509_object);
				if(var_508_bool != 0) {
					@@@var_0_bool:AddReply((int)527047, (int)28341, (int)28340);
				}
				var_517_bool = 0;
				var_517_bool = 0;
				var_518_bool = 0;
				var_518_bool = 0;
				var_519_bool = 0; var_520_object = Obj();
				var_520_object = var_1_object;
				func_6358(var_520_object);
				if(var_519_bool != 0) {
					var_525_bool = 0; var_526_object = Obj();
					var_526_object = var_1_object;
					func_6334(var_526_object);
					var_531_bool = var_525_bool == 0; //@nz
					if(var_531_bool != 0) {
						var_518_bool = 1;
					}
				}
				if(var_518_bool != 0) {
					var_532_bool = 0; var_533_object = Obj();
					var_533_object = var_1_object;
					func_6346(var_533_object);
					var_538_bool = var_532_bool == 0; //@nz
					if(var_538_bool != 0) {
						var_517_bool = 1;
					}
				}
				if(var_517_bool != 0) {
					@@@var_0_bool:AddReply((int)517957, (int)19090, (int)19089);
				}
				var_542_bool = 0;
				var_542_bool = 0;
				var_543_bool = 0;
				var_543_bool = 0;
				var_544_bool = 0; var_545_object = Obj();
				var_545_object = var_1_object;
				func_6370(var_545_object);
				if(var_544_bool != 0) {
					var_550_bool = 0; var_551_object = Obj();
					var_551_object = var_1_object;
					func_6346(var_551_object);
					if(var_550_bool != 0) {
						var_543_bool = 1;
					}
				}
				if(var_543_bool != 0) {
					var_552_bool = 0; var_553_object = Obj();
					var_553_object = var_1_object;
					func_6334(var_553_object);
					var_554_bool = var_552_bool == 0; //@nz
					if(var_554_bool != 0) {
						var_542_bool = 1;
					}
				}
				if(var_542_bool != 0) {
					@@@var_0_bool:AddReply((int)517960, (int)28332, (int)19092);
				}
				var_558_bool = 0;
				var_558_bool = 0;
				var_559_bool = 0;
				var_559_bool = 0;
				var_560_bool = 0; var_561_object = Obj();
				var_561_object = var_1_object;
				func_6370(var_561_object);
				if(var_560_bool != 0) {
					var_562_bool = 0; var_563_object = Obj();
					var_563_object = var_1_object;
					func_6334(var_563_object);
					if(var_562_bool != 0) {
						var_559_bool = 1;
					}
				}
				if(var_559_bool != 0) {
					var_564_bool = 0; var_565_object = Obj();
					var_565_object = var_1_object;
					func_6310(var_565_object);
					if(var_564_bool != 0) {
						var_558_bool = 1;
					}
				}
				if(var_558_bool != 0) {
					@@@var_0_bool:AddReply((int)517982, (int)19116, (int)19115);
				}
				var_573_bool = 0;
				var_573_bool = 0;
				var_574_bool = 0; var_575_object = Obj();
				var_575_object = var_1_object;
				func_6322(var_575_object);
				if(var_574_bool != 0) {
					var_580_bool = 0; var_581_object = Obj();
					var_581_object = var_1_object;
					func_6394(var_581_object);
					if(var_580_bool != 0) {
						var_573_bool = 1;
					}
				}
				if(var_573_bool != 0) {
					@@@var_0_bool:AddReply((int)517973, (int)28323, (int)19106);
				}
				var_589_bool = 0;
				var_589_bool = 0;
				var_590_bool = 0;
				var_590_bool = 0;
				var_591_bool = 0; var_592_object = Obj();
				var_592_object = var_1_object;
				func_6490(var_592_object);
				if(var_591_bool != 0) {
					var_597_bool = 0; var_598_object = Obj();
					var_598_object = var_1_object;
					func_6502(var_598_object);
					var_603_bool = var_597_bool == 0; //@nz
					if(var_603_bool != 0) {
						var_590_bool = 1;
					}
				}
				if(var_590_bool != 0) {
					var_604_bool = 0; var_605_object = Obj();
					var_605_object = var_1_object;
					func_6286(var_605_object);
					if(var_604_bool != 0) {
						var_589_bool = 1;
					}
				}
				if(var_589_bool != 0) {
					@@@var_0_bool:AddReply((int)518139, (int)21635, (int)19253);
				}
				var_613_bool = 0; var_614_object = Obj();
				var_614_object = var_1_object;
				func_6526(var_614_object);
				if(var_613_bool != 0) {
					@@@var_0_bool:AddReply((int)520672, (int)28325, (int)21879);
				}
				@@@var_0_bool:AddReply((int)520471, (int)-1, (int)21674);
				@@@var_0_bool:AddReply((int)517956, (int)-1, (int)19088);
				goto Label_316;
		}
	}
Label_316:
	var_498_bool = 0;
	func_5869(var_498_bool);
	if(var_498_bool != 0) {

	Label_320:
		lshWaitForAnimEnd();
		var_499_object = var_3_object;
		if(var_499_object != 0) {
		} else {
			var_500_string = "";
			var_500_string = var_2_object;
			func_5570(var_500_string);
			goto Label_320;
	}
		PlayAnimation("all", "idle");

	Label_335:
		WaitForAnimEnd();
		var_503_object = var_3_object;
		if(var_503_object != 0) {
			goto Label_345;
		}
		PlayAnimation("all", "idle");
		goto Label_335;

	}
	goto Label_345;
	
Label_345:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x6b";


func_6250(var_1165_bool)
{
	var_1167_int = 0; var_1168_string = "";
	func_5683(var_1167_int, "oob8Grif1");
	var_1170_bool = var_1167_int == (int)0;
	if(var_1170_bool != 0) {
		var_1165_bool = 1;
		return 0;
	}
	var_1165_bool = 0;
	return 0;
}


func_5226(var_238_bool, var_239_object, var_240_string)
{
	var_241_bool = 0; var_242_bool = 0;
	var_245_bool = IsFuncExist(var_239_object, "HasProperty", (int)2);
	var_246_bool = var_245_bool == 0; //@nz
	if(var_246_bool != 0) {
		var_238_bool = 0;
		return 2;
	}
	@@var_239_object:HasProperty(var_240_string, var_242_bool);
	var_242_bool = var_238_bool;
	return 2;
}


func_2671(var_2_object, var_902_string)
{
	var_903_bool = 0;
	func_5869(var_903_bool);
	var_904_bool = var_903_bool == 0; //@nz
	if(var_904_bool != 0) {
		return 0;
	}
	var_905_bool = var_902_string == var_2_object;
	if(var_905_bool != 0) {
		return 0;
	}
	var_906_string = ""; var_907_bool = 0;
	var_902_string = var_906_string;
	var_909_bool = var_902_string == "";
	if(var_909_bool != 0) {
		var_907_bool = 0;
	} else {
		var_907_bool = 1;
	}
	func_5586(var_906_string, var_907_bool);
	var_2_object = var_902_string;
	return 0;
	
}


func_5747(var_174_object, var_175_string, var_176_int)
{
	var_177_object = Obj(); var_178_object = Obj();
	CreateInvItem(var_178_object);
	@@var_178_object:SetItemName(var_175_string);
	var_179_object = Obj(); var_180_object = Obj(); var_181_int = 0;
	var_174_object = var_179_object;
	var_178_object = var_180_object;
	var_176_int = var_181_int;
	func_5728(var_179_object, var_180_object, var_181_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6262(var_1181_bool)
{
	var_1183_int = 0; var_1184_string = "";
	func_5683(var_1183_int, "b8q02");
	var_1186_bool = var_1183_int == (int)1;
	if(var_1186_bool != 0) {
		var_1181_bool = 1;
		return 0;
	}
	var_1181_bool = 0;
	return 0;
}


func_5238(var_230_bool, var_231_object, var_232_string, var_233_float, var_234_float, var_235_float)
{
	var_236_float = 0; var_237_float = 0;
	var_238_bool = 0; var_239_object = Obj(); var_240_string = "";
	var_231_object = var_239_object;
	var_232_string = var_240_string;
	func_5226(var_238_bool, var_239_object, var_240_string);
	var_247_bool = var_238_bool == 0; //@nz
	if(var_247_bool != 0) {
		var_230_bool = 0;
		return 2;
	}
	@@var_231_object:GetProperty(var_232_string, var_237_float);
	var_248_float = 0; var_249_float = 0; var_250_float = 0; var_251_float = 0;
	var_249_float = var_237_float + var_233_float;
	var_234_float = var_250_float;
	var_235_float = var_251_float;
	func_5667(var_248_float, var_249_float, var_250_float, var_251_float);
	@@var_231_object:SetProperty(var_232_string, var_248_float);
	var_230_bool = 1;
	return 2;
}


func_5760(var_219_bool, var_220_object, var_221_float)
{
	var_222_bool = var_220_object == 0; //@nz
	if(var_222_bool != 0) {
		var_219_bool = 0;
		return 0;
	}
	var_224_bool = var_221_float > (int)0;
	if(var_224_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_255_bool = var_221_float < (int)0;
		if(var_255_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_5781;
		}
		var_219_bool = 0;
		return 0;
	}
Label_5781:
	var_226_float = 0;
	var_221_float = var_226_float;
	func_5795(var_226_float);
	var_230_bool = 0; var_231_object = Obj(); var_232_string = ""; var_233_float = 0; var_234_float = 0; var_235_float = 0;
	var_220_object = var_231_object;
	var_221_float = var_233_float;
	func_5238(var_230_bool, var_231_object, "reputation", var_233_float, (float)0, (float)1);
	var_219_bool = 1;
	return 0;
	
}


func_6274(var_1175_bool)
{
	var_1177_int = 0; var_1178_string = "";
	func_5683(var_1177_int, "oob8Grif1");
	var_1180_bool = var_1177_int == (int)0;
	if(var_1180_bool != 0) {
		var_1175_bool = 1;
		return 0;
	}
	var_1175_bool = 0;
	return 0;
}


func_5260(var_75_bool, var_76_cvector)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0;
	GetPosition(var_80_cvector);
	var_81_cvector = var_76_cvector - var_80_cvector;
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_84_float = GetByIndex(var_81_cvector, 2);
	Rotate(var_83_float, var_84_float, var_82_bool);
	var_82_bool = var_75_bool;
	return 6;
}


func_4237(var_0_bool, var_1330_int, var_1331_object)
{
	var_1333_object = Obj(); var_1334_bool = 0; var_1335_int = 0; var_1336_bool = 0; var_1337_object = Obj(); var_1338_bool = 0; var_1339_int = 0; var_1340_bool = 0;
	var_0_bool = var_1331_object;
	var_1341_bool = 0; var_1342_object = Obj(); var_1343_float = 0;
	var_1331_object = var_1342_object;
	func_5284(var_1341_bool, var_1342_object, (float)70.0);
	var_1344_bool = var_1341_bool == 0; //@nz
	if(var_1344_bool != 0) {
		var_1330_int = -2;
		return 8;
	}
	CreateDialog(var_1337_object);
	var_1345_int = 0;
	func_5863(var_1345_int);
	@@var_1337_object:SetNPCName(var_1345_int);
	var_1346_int = 0;
	func_5861(var_1346_int);
	@@var_1337_object:SetNPCDescription(var_1346_int);
	var_1347_string = "";
	func_5865(var_1347_string);
	@@var_1337_object:SetPhoto(var_1347_string);
	var_1348_string = "";
	func_5867(var_1348_string);
	@@var_1337_object:SetPhoto2(var_1348_string);
	var_1349_int = 0;
	func_6881(var_1349_int);
	@@var_1337_object:SetPlayerName(var_1349_int);
	IsOverrideActive(var_1338_bool);
	var_1350_bool = var_1338_bool;
	if(var_1350_bool != 0) {
		var_1330_int = -2;
		return 8;
	}
	DoDialog(var_1337_object);
	var_1351_bool = 0; var_1352_object = Obj();
	func_5651(Obj());
	var_1353_object = var_1352_object;
	func_5371(var_1351_bool, var_1352_object);
	var_1354_object = Obj(); var_1355_object = Obj();
	var_1331_object = var_1354_object;
	var_1337_object = var_1355_object;
	TaskCall(22);
	func_4318(var_1356_object, var_1357_object, var_1358_string, var_1359_bool, var_1354_object, var_1355_object);
	TaskReturn();
	@@var_1337_object:IsDialogEnd(var_1340_bool);
	
Label_4300:
	var_1384_bool = var_1340_bool == 0; //@nz
	if(var_1384_bool != 0) {
		sync();
		@@var_1337_object:IsDialogEnd(var_1340_bool);
		goto Label_4300;
	}
	var_1331_object = Obj();
	func_5353();
	StopDialog(var_1337_object);
	@@var_1337_object:GetReturnValue((int)-1);
	var_1339_int = var_1330_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6286(var_604_bool)
{
	var_606_int = 0; var_607_string = "";
	func_5683(var_606_int, "b1q01NotkinGotoGrif");
	var_609_bool = var_606_int != (int)0;
	if(var_609_bool != 0) {
		var_604_bool = 1;
		return 0;
	}
	var_604_bool = 0;
	return 0;
}


func_5270(var_71_bool, var_72_object)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	@@var_72_object:GetPosition(var_74_cvector);
	var_75_bool = 0; var_76_cvector = CVector(0,0,0);
	var_74_cvector = var_76_cvector;
	func_5260(var_75_bool, var_76_cvector);
	var_75_bool = var_71_bool;
	return 2;
}


func_6298(var_508_bool)
{
	var_510_int = 0; var_511_string = "";
	func_5683(var_510_int, "oob1Grif5");
	var_513_bool = var_510_int == (int)0;
	if(var_513_bool != 0) {
		var_508_bool = 1;
		return 0;
	}
	var_508_bool = 0;
	return 0;
}


func_5279(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0;
	IsLoaded(var_71_bool);
	var_71_bool = var_69_bool;
	return 2;
}


func_5795(var_226_float)
{
	var_227_object = Obj(); var_228_object = Obj();
	CreateFloatVector(var_228_object);
	@@var_228_object:add(var_226_float);
	SendWorldWndMessage((int)16, var_228_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5284(var_226_bool, var_227_object, var_228_float)
{
	var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0; var_237_bool = 0; var_238_float = 0; var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_bool = 0;
	@@var_227_object:GetPosition(var_239_cvector);
	@@var_227_object:GetEyesHeight(var_238_float);
	var_247_float = GetByIndex(var_239_cvector, 1);
	var_247_float = var_247_float + var_238_float;
	SetByIndex(var_239_cvector, 1) = var_247_float;
	GetPosition(var_240_cvector);
	GetEyesHeight(var_238_float);
	var_248_float = GetByIndex(var_240_cvector, 1);
	var_248_float = var_248_float + var_238_float;
	SetByIndex(var_240_cvector, 1) = var_248_float;
	var_241_cvector = var_239_cvector - var_240_cvector;
	var_249_float = GetByIndex(var_241_cvector, 1);
	SetByIndex(var_241_cvector, 1) = (float)0;
	var_250_int = var_241_cvector | var_241_cvector;
	var_251_float = sqrt(var_250_int);
	var_241_cvector = var_241_cvector / var_251_float;
	var_242_cvector = -var_241_cvector;
	var_252_float = var_241_cvector * var_228_float;
	var_253_cvector = CVector(0,0,0); var_254_cvector = CVector(0,0,0);
	var_254_cvector = var_242_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5657(var_253_cvector, var_254_cvector);
	var_262_float = var_253_cvector * (int)25;
	var_263_int = var_252_float + var_262_float;
	var_243_cvector = var_263_int - CVector(0.0, 10.0, 0.0);
	var_244_cvector = var_240_cvector + var_243_cvector;
	IsOverrideActive(var_245_bool);
	var_265_bool = var_245_bool;
	if(var_265_bool != 0) {
		var_226_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_244_cvector, var_242_cvector, (bool)1);
	var_267_float = GetByIndex(var_243_cvector, 0);
	var_268_float = GetByIndex(var_243_cvector, 2);
	Rotate(var_267_float, var_268_float);
	var_269_bool = 0;
	func_5869(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		HasAnimationTrack(var_246_bool, "head");
		var_271_bool = var_246_bool;
		if(var_271_bool == 0) goto Label_5347;
		LookAsyncCamera("head");
	}
Label_5347:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_226_bool = 1;
	return 18;
	
}


func_6310(var_564_bool)
{
	var_566_int = 0; var_567_string = "";
	func_5683(var_566_int, "oob1Grif6");
	var_569_bool = var_566_int == (int)0;
	if(var_569_bool != 0) {
		var_564_bool = 1;
		return 0;
	}
	var_564_bool = 0;
	return 0;
}


func_4778(var_0_bool, var_1_object, var_2_object, var_3_object, var_1417_object, var_1418_object)
{
	var_0_bool = var_1418_object;
	var_1_object = var_1417_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1424_string = "";
		func_4841(var_1418_object, "Neutral");
		@@@var_0_bool:SetMessage((int)535294);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_bool:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_bool:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_4811;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12ae";
	}
Label_4811:
	var_1442_bool = 0;
	func_5869(var_1442_bool);
	if(var_1442_bool != 0) {

	Label_4815:
		lshWaitForAnimEnd();
		var_1443_object = var_3_object;
		if(var_1443_object != 0) {
		} else {
			var_1444_string = "";
			var_1444_string = var_2_object;
			func_5570(var_1444_string);
			goto Label_4815;
	}
		PlayAnimation("all", "idle");

	Label_4830:
		WaitForAnimEnd();
		var_1447_object = var_3_object;
		if(var_1447_object != 0) {
			goto Label_4840;
		}
		PlayAnimation("all", "idle");
		goto Label_4830;
	}
	goto Label_4840;
	
Label_4840:
	return 0;
	
}


func_5805(var_137_bool, var_138_string, var_139_string)
{
	var_140_object = Obj(); var_141_object = Obj();
	FindActor(var_141_object, var_138_string);
	var_142_bool = var_141_object == 0; //@ne
	if(var_142_bool != 0) {
		var_137_bool = 0;
		return 2;
	}
	Trigger(var_141_object, var_139_string);
	var_137_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3246(var_0_bool, var_1_object, var_2_object, var_3_object, var_1078_object, var_1079_object)
{
	var_0_bool = var_1079_object;
	var_1_object = var_1078_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1085_string = "";
		func_3304(var_1079_object, "Smile");
		@@@var_0_bool:SetMessage((int)520485);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520486, (int)-1, (int)21689);
		@@@var_0_bool:AddReply((int)520487, (int)-1, (int)21690);
		goto Label_3274;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xcb2";
	}
Label_3274:
	var_1100_bool = 0;
	func_5869(var_1100_bool);
	if(var_1100_bool != 0) {

	Label_3278:
		lshWaitForAnimEnd();
		var_1101_object = var_3_object;
		if(var_1101_object != 0) {
		} else {
			var_1102_string = "";
			var_1102_string = var_2_object;
			func_5570(var_1102_string);
			goto Label_3278;
	}
		PlayAnimation("all", "idle");

	Label_3293:
		WaitForAnimEnd();
		var_1105_object = var_3_object;
		if(var_1105_object != 0) {
			goto Label_3303;
		}
		PlayAnimation("all", "idle");
		goto Label_3293;
	}
	goto Label_3303;
	
Label_3303:
	return 0;
	
}


func_6322(var_574_bool)
{
	var_576_int = 0; var_577_string = "";
	func_5683(var_576_int, "b1q02");
	var_579_bool = var_576_int == (int)0;
	if(var_579_bool != 0) {
		var_574_bool = 1;
		return 0;
	}
	var_574_bool = 0;
	return 0;
}


func_2743(var_0_bool, var_932_int, var_933_object)
{
	var_935_object = Obj(); var_936_bool = 0; var_937_int = 0; var_938_bool = 0; var_939_object = Obj(); var_940_bool = 0; var_941_int = 0; var_942_bool = 0;
	var_0_bool = var_933_object;
	var_943_bool = 0; var_944_object = Obj(); var_945_float = 0;
	var_933_object = var_944_object;
	func_5284(var_943_bool, var_944_object, (float)70.0);
	var_946_bool = var_943_bool == 0; //@nz
	if(var_946_bool != 0) {
		var_932_int = -2;
		return 8;
	}
	CreateDialog(var_939_object);
	var_947_int = 0;
	func_5863(var_947_int);
	@@var_939_object:SetNPCName(var_947_int);
	var_948_int = 0;
	func_5861(var_948_int);
	@@var_939_object:SetNPCDescription(var_948_int);
	var_949_string = "";
	func_5865(var_949_string);
	@@var_939_object:SetPhoto(var_949_string);
	var_950_string = "";
	func_5867(var_950_string);
	@@var_939_object:SetPhoto2(var_950_string);
	var_951_int = 0;
	func_6881(var_951_int);
	@@var_939_object:SetPlayerName(var_951_int);
	IsOverrideActive(var_940_bool);
	var_952_bool = var_940_bool;
	if(var_952_bool != 0) {
		var_932_int = -2;
		return 8;
	}
	DoDialog(var_939_object);
	var_953_bool = 0; var_954_object = Obj();
	func_5651(Obj());
	var_955_object = var_954_object;
	func_5371(var_953_bool, var_954_object);
	var_956_object = Obj(); var_957_object = Obj();
	var_933_object = var_956_object;
	var_939_object = var_957_object;
	TaskCall(10);
	func_2824(var_958_object, var_959_object, var_960_string, var_961_bool, var_956_object, var_957_object);
	TaskReturn();
	@@var_939_object:IsDialogEnd(var_942_bool);
	
Label_2806:
	var_986_bool = var_942_bool == 0; //@nz
	if(var_986_bool != 0) {
		sync();
		@@var_939_object:IsDialogEnd(var_942_bool);
		goto Label_2806;
	}
	var_933_object = Obj();
	func_5353();
	StopDialog(var_939_object);
	@@var_939_object:GetReturnValue((int)-1);
	var_941_int = var_932_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5817(var_99_float)
{
	var_100_float = 0; var_101_float = 0;
	GetGameTime(var_101_float);
	var_101_float = var_99_float;
	return 2;
}


func_6334(var_525_bool)
{
	var_527_int = 0; var_528_string = "";
	func_5683(var_527_int, "b1q03_dead");
	var_530_bool = var_527_int != (int)0;
	if(var_530_bool != 0) {
		var_525_bool = 1;
		return 0;
	}
	var_525_bool = 0;
	return 0;
}


func_5822(var_87_int)
{
	var_88_float = 0; var_89_float = 0;
	GetGameTime(var_89_float);
	var_91_int = 0;
	var_91_int = var_89_float / (int)24;
	var_87_int = (int)1 + var_91_int;
	return 2;
}


func_5831(var_436_bool, var_437_int)
{
	var_438_int = 0;
	func_5822(var_438_int);
	var_436_bool = var_438_int == var_437_int;
	return 0;
}


func_6346(var_532_bool)
{
	var_534_int = 0; var_535_string = "";
	func_5683(var_534_int, "b1q03_retreat");
	var_537_bool = var_534_int != (int)0;
	if(var_537_bool != 0) {
		var_532_bool = 1;
		return 0;
	}
	var_532_bool = 0;
	return 0;
}


func_5837(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = "";
	var_97_int = var_94_int;
	if(var_97_int != 0) {
		"idle" = "idle" + var_94_int;
	}
	var_96_string = var_93_string;
	return 2;
}


func_5844(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0;
	var_90_int = 0;
	
Label_5846:
	var_93_string = ""; var_94_int = 0;
	var_90_int = var_94_int;
	func_5837(var_93_string, var_94_int);
	HasAnimation(var_91_bool, "all", var_93_string);
	var_98_bool = var_91_bool == 0; //@nz
	if(var_98_bool != 0) {
	} else {
		var_90_int = var_90_int + (int)1;
		goto Label_5846;
	}
	var_90_int = var_87_int;
	return 4;
	
}


func_6358(var_519_bool)
{
	var_521_int = 0; var_522_string = "";
	func_5683(var_521_int, "b1q03_2");
	var_524_bool = var_521_int == (int)0;
	if(var_524_bool != 0) {
		var_519_bool = 1;
		return 0;
	}
	var_519_bool = 0;
	return 0;
}


func_6876(var_104_int, var_105_string)
{
	var_106_int = 0; var_107_int = 0;
	GetInvItemByName(var_107_int, var_105_string);
	var_107_int = var_104_int;
	return 2;
}


func_4318(var_0_bool, var_1_object, var_2_object, var_3_object, var_1354_object, var_1355_object)
{
	var_0_bool = var_1355_object;
	var_1_object = var_1354_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1361_string = "";
		func_4376(var_1355_object, "Sly");
		@@@var_0_bool:SetMessage((int)520501);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520502, (int)-1, (int)21705);
		@@@var_0_bool:AddReply((int)520503, (int)-1, (int)21706);
		goto Label_4346;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x10e2";
	}
Label_4346:
	var_1376_bool = 0;
	func_5869(var_1376_bool);
	if(var_1376_bool != 0) {

	Label_4350:
		lshWaitForAnimEnd();
		var_1377_object = var_3_object;
		if(var_1377_object != 0) {
		} else {
			var_1378_string = "";
			var_1378_string = var_2_object;
			func_5570(var_1378_string);
			goto Label_4350;
	}
		PlayAnimation("all", "idle");

	Label_4365:
		WaitForAnimEnd();
		var_1381_object = var_3_object;
		if(var_1381_object != 0) {
			goto Label_4375;
		}
		PlayAnimation("all", "idle");
		goto Label_4365;
	}
	goto Label_4375;
	
Label_4375:
	return 0;
	
}


func_6881(var_278_int)
{
	var_279_int = 0; var_280_int = 0;
	GetVariable("branch", var_280_int);
	var_283_bool = var_280_int == (int)0;
	if(var_283_bool != 0) {
		var_278_int = 1;
		return 2;
	EMIT "GOTO 0x1af0";
	}
	var_285_bool = var_280_int == (int)1;
	if(var_285_bool != 0) {
		var_278_int = 2;
		return 2;
	}
	var_278_int = 3;
	return 2;
}


func_6370(var_544_bool)
{
	var_546_int = 0; var_547_string = "";
	func_5683(var_546_int, "b1q03_2");
	var_549_bool = var_546_int == (int)1;
	if(var_549_bool != 0) {
		var_544_bool = 1;
		return 0;
	}
	var_544_bool = 0;
	return 0;
}


func_5861(var_275_int)
{
	var_275_int = 515535;
	return 0;
}


func_5863(var_274_int)
{
	var_274_int = 502860;
	return 0;
}


func_3304(var_2_object, var_1085_string)
{
	var_1086_bool = 0;
	func_5869(var_1086_bool);
	var_1087_bool = var_1086_bool == 0; //@nz
	if(var_1087_bool != 0) {
		return 0;
	}
	var_1088_bool = var_1085_string == var_2_object;
	if(var_1088_bool != 0) {
		return 0;
	}
	var_1089_string = ""; var_1090_bool = 0;
	var_1085_string = var_1089_string;
	var_1092_bool = var_1085_string == "";
	if(var_1092_bool != 0) {
		var_1090_bool = 0;
	} else {
		var_1090_bool = 1;
	}
	func_5586(var_1089_string, var_1090_bool);
	var_2_object = var_1085_string;
	return 0;
	
}


func_5865(var_276_string)
{
	var_276_string = "ui/NPC_Grif.png";
	return 0;
}


func_5353()
{
	var_428_bool = 0; var_429_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_431_bool = 0;
	func_5869(var_431_bool);
	if(var_431_bool != 0) {
	} else {
		HasAnimationTrack(var_429_bool, "head");
		var_433_bool = var_429_bool;
		if(var_433_bool == 0) goto Label_5370;
		UnlookAsync("head");
	}
Label_5370:
	return 2;
	
}


func_5867(var_277_string)
{
	var_277_string = "ui/NPC_Grif_b.png";
	return 0;
}


func_4841(var_2_object, var_1424_string)
{
	var_1425_bool = 0;
	func_5869(var_1425_bool);
	var_1426_bool = var_1425_bool == 0; //@nz
	if(var_1426_bool != 0) {
		return 0;
	}
	var_1427_bool = var_1424_string == var_2_object;
	if(var_1427_bool != 0) {
		return 0;
	}
	var_1428_string = ""; var_1429_bool = 0;
	var_1424_string = var_1428_string;
	var_1431_bool = var_1424_string == "";
	if(var_1431_bool != 0) {
		var_1429_bool = 0;
	} else {
		var_1429_bool = 1;
	}
	func_5586(var_1428_string, var_1429_bool);
	var_2_object = var_1424_string;
	return 0;
	
}


func_5869(var_269_bool)
{
	var_269_bool = 1;
	return 0;
}


func_6382(var_471_bool)
{
	var_473_int = 0; var_474_string = "";
	func_5683(var_473_int, "oob1Grif1");
	var_478_bool = var_473_int == (int)0;
	if(var_478_bool != 0) {
		var_471_bool = 1;
		return 0;
	}
	var_471_bool = 0;
	return 0;
}


func_5871()
{
	SetVariable("oob3Grif1", (int)1);
	return 0;
}


func_3815(var_0_bool, var_1208_int, var_1209_object)
{
	var_1211_object = Obj(); var_1212_bool = 0; var_1213_int = 0; var_1214_bool = 0; var_1215_object = Obj(); var_1216_bool = 0; var_1217_int = 0; var_1218_bool = 0;
	var_0_bool = var_1209_object;
	var_1219_bool = 0; var_1220_object = Obj(); var_1221_float = 0;
	var_1209_object = var_1220_object;
	func_5284(var_1219_bool, var_1220_object, (float)70.0);
	var_1222_bool = var_1219_bool == 0; //@nz
	if(var_1222_bool != 0) {
		var_1208_int = -2;
		return 8;
	}
	CreateDialog(var_1215_object);
	var_1223_int = 0;
	func_5863(var_1223_int);
	@@var_1215_object:SetNPCName(var_1223_int);
	var_1224_int = 0;
	func_5861(var_1224_int);
	@@var_1215_object:SetNPCDescription(var_1224_int);
	var_1225_string = "";
	func_5865(var_1225_string);
	@@var_1215_object:SetPhoto(var_1225_string);
	var_1226_string = "";
	func_5867(var_1226_string);
	@@var_1215_object:SetPhoto2(var_1226_string);
	var_1227_int = 0;
	func_6881(var_1227_int);
	@@var_1215_object:SetPlayerName(var_1227_int);
	IsOverrideActive(var_1216_bool);
	var_1228_bool = var_1216_bool;
	if(var_1228_bool != 0) {
		var_1208_int = -2;
		return 8;
	}
	DoDialog(var_1215_object);
	var_1229_bool = 0; var_1230_object = Obj();
	func_5651(Obj());
	var_1231_object = var_1230_object;
	func_5371(var_1229_bool, var_1230_object);
	var_1232_object = Obj(); var_1233_object = Obj();
	var_1209_object = var_1232_object;
	var_1215_object = var_1233_object;
	TaskCall(18);
	func_3896(var_1234_object, var_1235_object, var_1236_string, var_1237_bool, var_1232_object, var_1233_object);
	TaskReturn();
	@@var_1215_object:IsDialogEnd(var_1218_bool);
	
Label_3878:
	var_1262_bool = var_1218_bool == 0; //@nz
	if(var_1262_bool != 0) {
		sync();
		@@var_1215_object:IsDialogEnd(var_1218_bool);
		goto Label_3878;
	}
	var_1209_object = Obj();
	func_5353();
	StopDialog(var_1215_object);
	@@var_1215_object:GetReturnValue((int)-1);
	var_1217_int = var_1208_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6898(var_191_int)
{
	var_192_int = 0; var_193_int = 0;
	GetVariable("branch", var_193_int);
	var_193_int = var_191_int;
	return 2;
}


func_5877()
{
	SetVariable("oob3Grif2", (int)1);
	return 0;
}


func_6904(var_631_object)
{
	var_632_bool = 0; var_633_object = Obj();
	var_631_object = var_633_object;
	func_5509(var_632_bool, var_633_object);
	var_664_bool = var_632_bool == 0; //@nz
	if(var_664_bool != 0) {
		return 0;
	}
	var_665_object = Obj();
	var_631_object = var_665_object;
	TaskCall(0);
	func_0(var_665_object);
	TaskReturn();
	var_631_object = Obj();
	func_5565();
	return 0;
}


func_6394(var_580_bool)
{
	var_582_int = 0; var_583_string = "";
	func_5683(var_582_int, "oob1Grif2");
	var_585_bool = var_582_int == (int)0;
	if(var_585_bool != 0) {
		var_580_bool = 1;
		return 0;
	}
	var_580_bool = 0;
	return 0;
}


func_5883()
{
	SetVariable("oob3Grif3", (int)1);
	return 0;
}


func_5371(var_287_bool, var_288_object)
{
	var_292_int = 0; var_293_int = 0; var_294_int = 0; var_295_int = 0;
	GetVariable("voice_common", var_294_int);
	var_297_int = var_294_int;
	if(var_297_int != 0) {
		var_298_bool = 0; var_299_object = Obj();
		var_288_object = var_299_object;
		func_5429(var_298_bool, var_299_object);
		var_328_bool = var_298_bool == 0; //@nz
		if(var_328_bool != 0) {
			var_329_bool = 0; var_330_object = Obj();
			var_288_object = var_330_object;
			func_5466(var_329_bool, var_330_object);
			var_359_bool = var_329_bool == 0; //@nz
			if(var_359_bool != 0) {
				var_287_bool = 0;
				return 4;
			}
		}
		irand(var_295_int, (int)2);
		var_361_int = var_295_int;
		if(var_361_int != 0) {
			var_364_int = var_294_int + (int)1;
			var_366_int = var_364_int % (int)3;
			SetVariable("voice_common", var_366_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_369_bool = 0; var_370_object = Obj();
		var_288_object = var_370_object;
		func_5466(var_369_bool, var_370_object);
		var_371_bool = var_369_bool == 0; //@nz
		if(var_371_bool != 0) {
			var_372_bool = 0; var_373_object = Obj();
			var_288_object = var_373_object;
			func_5429(var_372_bool, var_373_object);
			var_374_bool = var_372_bool == 0; //@nz
			if(var_374_bool != 0) {
				var_287_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_5427;
	
Label_5427:
	var_287_bool = 1;
	return 4;
	
}


func_5889(var_276_object)
{
	var_277_object = Obj(); var_278_string = ""; var_279_float = 0;
	func_6657(Obj());
	var_280_object = var_277_object;
	func_6674(var_277_object, "pt_map_notkin", (float)2);
	var_281_object = Obj();
	func_6657(var_281_object);
	@@var_276_object:ShowMap(var_281_object);
	return 0;
}


func_6406(var_787_bool)
{
	var_789_int = 0; var_790_string = "";
	func_5683(var_789_int, "b3q02");
	var_792_bool = var_789_int == (int)1;
	if(var_792_bool != 0) {
		var_787_bool = 1;
		return 0;
	}
	var_787_bool = 0;
	return 0;
}


func_2824(var_0_bool, var_1_object, var_2_object, var_3_object, var_956_object, var_957_object)
{
	var_0_bool = var_957_object;
	var_1_object = var_956_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_963_string = "";
		func_2882(var_957_object, "Smile");
		@@@var_0_bool:SetMessage((int)520477);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520478, (int)-1, (int)21681);
		@@@var_0_bool:AddReply((int)520479, (int)-1, (int)21682);
		goto Label_2852;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb0c";
	}
Label_2852:
	var_978_bool = 0;
	func_5869(var_978_bool);
	if(var_978_bool != 0) {

	Label_2856:
		lshWaitForAnimEnd();
		var_979_object = var_3_object;
		if(var_979_object != 0) {
		} else {
			var_980_string = "";
			var_980_string = var_2_object;
			func_5570(var_980_string);
			goto Label_2856;
	}
		PlayAnimation("all", "idle");

	Label_2871:
		WaitForAnimEnd();
		var_983_object = var_3_object;
		if(var_983_object != 0) {
			goto Label_2881;
		}
		PlayAnimation("all", "idle");
		goto Label_2871;
	}
	goto Label_2881;
	
Label_2881:
	return 0;
	
}


func_6923(var_85_object, var_442_object, var_676_object, var_746_object, var_873_object, var_934_object, var_995_object, var_1056_object, var_1117_object, var_1210_object, var_1271_object, var_1332_object)
{
	var_86_int = GlobalVars[3];
	var_87_int = 0;
	func_5822(var_87_int);
	var_93_bool = var_86_int != var_87_int;
	if(var_93_bool != 0) {
		func_6707();
		var_211_int = GlobalVars[3];
		func_5822((int)0);
		var_212_int = var_211_int;
		GlobalVars[3] = var_211_int;
	}
	var_213_bool = GlobalVars[1];
	var_214_bool = var_213_bool == 0; //@nz
	if(var_214_bool != 0) {
		var_215_int = 0; var_216_object = Obj();
		var_85_object = var_216_object;
		TaskCall(23);
		func_4448(var_217_object, var_215_int, var_216_object);
		TaskReturn();
		var_435_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_436_bool = 0; var_437_int = 0;
	func_5831(var_436_bool, (int)1);
	if(var_436_bool != 0) {
		var_440_int = 0; var_441_object = Obj();
		var_85_object = var_441_object;
		TaskCall(1);
		func_22(var_442_object, var_440_int, var_441_object);
		TaskReturn();
		var_630_bool = (int)1000 == var_442_object;
		if(var_630_bool != 0) {
			var_631_object = Obj();
			var_85_object = var_631_object;
			func_6904(var_631_object);
		}
		return 0;
	}
	var_671_bool = 0; var_672_int = 0;
	func_5831(var_671_bool, (int)2);
	if(var_671_bool != 0) {
		var_674_int = 0; var_675_object = Obj();
		var_85_object = var_675_object;
		TaskCall(3);
		func_1440(var_676_object, var_674_int, var_675_object);
		TaskReturn();
		var_739_bool = (int)1000 == var_676_object;
		if(var_739_bool != 0) {
			var_740_object = Obj();
			var_85_object = var_740_object;
			func_6904(var_740_object);
		}
		return 0;
	}
	var_741_bool = 0; var_742_int = 0;
	func_5831(var_741_bool, (int)3);
	if(var_741_bool != 0) {
		var_744_int = 0; var_745_object = Obj();
		var_85_object = var_745_object;
		TaskCall(5);
		func_1843(var_746_object, var_744_int, var_745_object);
		TaskReturn();
		var_866_bool = (int)1000 == var_746_object;
		if(var_866_bool != 0) {
			var_867_object = Obj();
			var_85_object = var_867_object;
			func_6904(var_867_object);
		}
		return 0;
	}
	var_868_bool = 0; var_869_int = 0;
	func_5831(var_868_bool, (int)4);
	if(var_868_bool != 0) {
		var_871_int = 0; var_872_object = Obj();
		var_85_object = var_872_object;
		TaskCall(7);
		func_2532(var_873_object, var_871_int, var_872_object);
		TaskReturn();
		var_927_bool = (int)1000 == var_873_object;
		if(var_927_bool != 0) {
			var_928_object = Obj();
			var_85_object = var_928_object;
			func_6904(var_928_object);
		}
		return 0;
	}
	var_929_bool = 0; var_930_int = 0;
	func_5831(var_929_bool, (int)5);
	if(var_929_bool != 0) {
		var_932_int = 0; var_933_object = Obj();
		var_85_object = var_933_object;
		TaskCall(9);
		func_2743(var_934_object, var_932_int, var_933_object);
		TaskReturn();
		var_988_bool = (int)1000 == var_934_object;
		if(var_988_bool != 0) {
			var_989_object = Obj();
			var_85_object = var_989_object;
			func_6904(var_989_object);
		}
		return 0;
	}
	var_990_bool = 0; var_991_int = 0;
	func_5831(var_990_bool, (int)6);
	if(var_990_bool != 0) {
		var_993_int = 0; var_994_object = Obj();
		var_85_object = var_994_object;
		TaskCall(11);
		func_2954(var_995_object, var_993_int, var_994_object);
		TaskReturn();
		var_1049_bool = (int)1000 == var_995_object;
		if(var_1049_bool != 0) {
			var_1050_object = Obj();
			var_85_object = var_1050_object;
			func_6904(var_1050_object);
		}
		return 0;
	}
	var_1051_bool = 0; var_1052_int = 0;
	func_5831(var_1051_bool, (int)7);
	if(var_1051_bool != 0) {
		var_1054_int = 0; var_1055_object = Obj();
		var_85_object = var_1055_object;
		TaskCall(13);
		func_3165(var_1056_object, var_1054_int, var_1055_object);
		TaskReturn();
		var_1110_bool = (int)1000 == var_1056_object;
		if(var_1110_bool != 0) {
			var_1111_object = Obj();
			var_85_object = var_1111_object;
			func_6904(var_1111_object);
		}
		return 0;
	}
	var_1112_bool = 0; var_1113_int = 0;
	func_5831(var_1112_bool, (int)8);
	if(var_1112_bool != 0) {
		var_1115_int = 0; var_1116_object = Obj();
		var_85_object = var_1116_object;
		TaskCall(15);
		func_3376(var_1117_object, var_1115_int, var_1116_object);
		TaskReturn();
		var_1203_bool = (int)1000 == var_1117_object;
		if(var_1203_bool != 0) {
			var_1204_object = Obj();
			var_85_object = var_1204_object;
			func_6904(var_1204_object);
		}
		return 0;
	}
	var_1205_bool = 0; var_1206_int = 0;
	func_5831(var_1205_bool, (int)9);
	if(var_1205_bool != 0) {
		var_1208_int = 0; var_1209_object = Obj();
		var_85_object = var_1209_object;
		TaskCall(17);
		func_3815(var_1210_object, var_1208_int, var_1209_object);
		TaskReturn();
		var_1264_bool = (int)1000 == var_1210_object;
		if(var_1264_bool != 0) {
			var_1265_object = Obj();
			var_85_object = var_1265_object;
			func_6904(var_1265_object);
		}
		return 0;
	}
	var_1266_bool = 0; var_1267_int = 0;
	func_5831(var_1266_bool, (int)10);
	if(var_1266_bool != 0) {
		var_1269_int = 0; var_1270_object = Obj();
		var_85_object = var_1270_object;
		TaskCall(19);
		func_4026(var_1271_object, var_1269_int, var_1270_object);
		TaskReturn();
		var_1325_bool = (int)1000 == var_1271_object;
		if(var_1325_bool != 0) {
			var_1326_object = Obj();
			var_85_object = var_1326_object;
			func_6904(var_1326_object);
		}
		return 0;
	}
	var_1327_bool = 0; var_1328_int = 0;
	func_5831(var_1327_bool, (int)11);
	if(var_1327_bool != 0) {
		var_1330_int = 0; var_1331_object = Obj();
		var_85_object = var_1331_object;
		TaskCall(21);
		func_4237(var_1332_object, var_1330_int, var_1331_object);
		TaskReturn();
		var_1386_bool = (int)1000 == var_1332_object;
		if(var_1386_bool != 0) {
			var_1387_object = Obj();
			var_85_object = var_1387_object;
			func_6904(var_1387_object);
		}
		return 0;
	}
	var_1388_bool = 0;
	var_1388_bool = 0;
	var_1389_bool = 0; var_1390_int = 0;
	func_5831(var_1389_bool, (int)12);
	if(var_1389_bool != 0) {
		var_1391_bool = GlobalVars[2];
		var_1392_bool = var_1391_bool == 0; //@nz
		if(var_1392_bool != 0) {
			var_1388_bool = 1;
		}
	}
	if(var_1388_bool != 0) {
		var_1393_int = 0; var_1394_object = Obj();
		var_85_object = var_1394_object;
		TaskCall(25);
		func_4697(var_1395_object, var_1393_int, var_1394_object);
		TaskReturn();
		var_1452_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
		return 0;
	}
	return 0;
}


func_5905()
{
	SetVariable("oob1Grif3", (int)1);
	return 0;
}


func_6418(var_817_bool)
{
	var_819_int = 0; var_820_string = "";
	func_5683(var_819_int, "b3q02");
	var_822_bool = var_819_int == (int)3;
	if(var_822_bool != 0) {
		var_817_bool = 1;
		return 0;
	}
	var_817_bool = 0;
	return 0;
}


func_5911()
{
	var_375_object = Obj(); var_376_object = Obj();
	SetVariable("b1q01GrifToldAboutDanko", (int)1);
	func_6657(Obj());
	var_379_object = var_376_object;
	var_384_float = 0;
	func_5817(var_384_float);
	@@var_376_object:AddMark("b1q01GrifGotoDanko", "pt_map_eva", (int)1, (int)520048, var_384_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4376(var_2_object, var_1361_string)
{
	var_1362_bool = 0;
	func_5869(var_1362_bool);
	var_1363_bool = var_1362_bool == 0; //@nz
	if(var_1363_bool != 0) {
		return 0;
	}
	var_1364_bool = var_1361_string == var_2_object;
	if(var_1364_bool != 0) {
		return 0;
	}
	var_1365_string = ""; var_1366_bool = 0;
	var_1361_string = var_1365_string;
	var_1368_bool = var_1361_string == "";
	if(var_1368_bool != 0) {
		var_1366_bool = 0;
	} else {
		var_1366_bool = 1;
	}
	func_5586(var_1365_string, var_1366_bool);
	var_2_object = var_1361_string;
	return 0;
	
}


func_6430(var_799_bool)
{
	var_801_int = 0; var_802_string = "";
	func_5683(var_801_int, "b3q02Dead");
	var_804_bool = var_801_int != (int)0;
	if(var_804_bool != 0) {
		var_799_bool = 1;
		return 0;
	}
	var_799_bool = 0;
	return 0;
}


func_6442(var_793_bool)
{
	var_795_int = 0; var_796_string = "";
	func_5683(var_795_int, "oob3Grif1");
	var_798_bool = var_795_int == (int)0;
	if(var_798_bool != 0) {
		var_793_bool = 1;
		return 0;
	}
	var_793_bool = 0;
	return 0;
}


func_5931(var_386_object)
{
	var_387_object = Obj(); var_388_string = ""; var_389_float = 0;
	func_6657(Obj());
	var_390_object = var_387_object;
	func_6674(var_387_object, "pt_map_eva", (float)2);
	var_391_object = Obj();
	func_6657(var_391_object);
	@@var_386_object:ShowMap(var_391_object);
	return 0;
}


func_3376(var_0_bool, var_1115_int, var_1116_object)
{
	var_1118_object = Obj(); var_1119_bool = 0; var_1120_int = 0; var_1121_bool = 0; var_1122_object = Obj(); var_1123_bool = 0; var_1124_int = 0; var_1125_bool = 0;
	var_0_bool = var_1116_object;
	var_1126_bool = 0; var_1127_object = Obj(); var_1128_float = 0;
	var_1116_object = var_1127_object;
	func_5284(var_1126_bool, var_1127_object, (float)70.0);
	var_1129_bool = var_1126_bool == 0; //@nz
	if(var_1129_bool != 0) {
		var_1115_int = -2;
		return 8;
	}
	CreateDialog(var_1122_object);
	var_1130_int = 0;
	func_5863(var_1130_int);
	@@var_1122_object:SetNPCName(var_1130_int);
	var_1131_int = 0;
	func_5861(var_1131_int);
	@@var_1122_object:SetNPCDescription(var_1131_int);
	var_1132_string = "";
	func_5865(var_1132_string);
	@@var_1122_object:SetPhoto(var_1132_string);
	var_1133_string = "";
	func_5867(var_1133_string);
	@@var_1122_object:SetPhoto2(var_1133_string);
	var_1134_int = 0;
	func_6881(var_1134_int);
	@@var_1122_object:SetPlayerName(var_1134_int);
	IsOverrideActive(var_1123_bool);
	var_1135_bool = var_1123_bool;
	if(var_1135_bool != 0) {
		var_1115_int = -2;
		return 8;
	}
	DoDialog(var_1122_object);
	var_1136_bool = 0; var_1137_object = Obj();
	func_5651(Obj());
	var_1138_object = var_1137_object;
	func_5371(var_1136_bool, var_1137_object);
	var_1139_object = Obj(); var_1140_object = Obj();
	var_1116_object = var_1139_object;
	var_1122_object = var_1140_object;
	TaskCall(16);
	func_3457(var_1141_object, var_1142_object, var_1143_string, var_1144_bool, var_1139_object, var_1140_object);
	TaskReturn();
	@@var_1122_object:IsDialogEnd(var_1125_bool);
	
Label_3439:
	var_1201_bool = var_1125_bool == 0; //@nz
	if(var_1201_bool != 0) {
		sync();
		@@var_1122_object:IsDialogEnd(var_1125_bool);
		goto Label_3439;
	}
	var_1116_object = Obj();
	func_5353();
	StopDialog(var_1122_object);
	@@var_1122_object:GetReturnValue((int)-1);
	var_1124_int = var_1115_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1843(var_0_bool, var_744_int, var_745_object)
{
	var_747_object = Obj(); var_748_bool = 0; var_749_int = 0; var_750_bool = 0; var_751_object = Obj(); var_752_bool = 0; var_753_int = 0; var_754_bool = 0;
	var_0_bool = var_745_object;
	var_755_bool = 0; var_756_object = Obj(); var_757_float = 0;
	var_745_object = var_756_object;
	func_5284(var_755_bool, var_756_object, (float)70.0);
	var_758_bool = var_755_bool == 0; //@nz
	if(var_758_bool != 0) {
		var_744_int = -2;
		return 8;
	}
	CreateDialog(var_751_object);
	var_759_int = 0;
	func_5863(var_759_int);
	@@var_751_object:SetNPCName(var_759_int);
	var_760_int = 0;
	func_5861(var_760_int);
	@@var_751_object:SetNPCDescription(var_760_int);
	var_761_string = "";
	func_5865(var_761_string);
	@@var_751_object:SetPhoto(var_761_string);
	var_762_string = "";
	func_5867(var_762_string);
	@@var_751_object:SetPhoto2(var_762_string);
	var_763_int = 0;
	func_6881(var_763_int);
	@@var_751_object:SetPlayerName(var_763_int);
	IsOverrideActive(var_752_bool);
	var_764_bool = var_752_bool;
	if(var_764_bool != 0) {
		var_744_int = -2;
		return 8;
	}
	DoDialog(var_751_object);
	var_765_bool = 0; var_766_object = Obj();
	func_5651(Obj());
	var_767_object = var_766_object;
	func_5371(var_765_bool, var_766_object);
	var_768_object = Obj(); var_769_object = Obj();
	var_745_object = var_768_object;
	var_751_object = var_769_object;
	TaskCall(6);
	func_1924(var_770_object, var_771_object, var_772_string, var_773_bool, var_768_object, var_769_object);
	TaskReturn();
	@@var_751_object:IsDialogEnd(var_754_bool);
	
Label_1906:
	var_864_bool = var_754_bool == 0; //@nz
	if(var_864_bool != 0) {
		sync();
		@@var_751_object:IsDialogEnd(var_754_bool);
		goto Label_1906;
	}
	var_745_object = Obj();
	func_5353();
	StopDialog(var_751_object);
	@@var_751_object:GetReturnValue((int)-1);
	var_753_int = var_744_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5429(var_298_bool, var_299_object)
{
	var_300_string = ""; var_301_int = 0; var_302_bool = 0; var_303_int = 0; var_304_string = ""; var_305_string = ""; var_306_int = 0; var_307_bool = 0; var_308_int = 0; var_309_string = "";
	var_305_string = "c";
	var_306_int = 0;
	
Label_5432:
	if((int)1 != 0) {
		var_312_int = var_306_int + (int)1;
		var_313_int = var_305_string + var_312_int;
		@@var_299_object:HasProperty(var_313_int, var_307_bool);
		var_314_bool = var_307_bool == 0; //@nz
		if(var_314_bool != 0) {
		} else {
			var_306_int = var_306_int + (int)1;
			goto Label_5432;
		}
	}
	var_315_bool = var_306_int == 0; //@nz
	if(var_315_bool != 0) {
		var_298_bool = 0;
		return 10;
	}
	var_308_int = 0;
	var_317_bool = var_306_int > (int)1;
	if(var_317_bool != 0) {
		irand(var_308_int, var_306_int);
	}
	var_319_int = var_308_int + (int)1;
	var_320_int = var_305_string + var_319_int;
	@@var_299_object:GetProperty(var_320_int, var_309_string);
	var_321_bool = 0; var_322_string = "";
	var_309_string = var_322_string;
	func_5601(var_321_bool, var_322_string);
	var_321_bool = var_298_bool;
	return 10;
	
}


func_6454(var_823_bool)
{
	var_825_int = 0; var_826_string = "";
	func_5683(var_825_int, "oob3Grif2");
	var_828_bool = var_825_int == (int)0;
	if(var_828_bool != 0) {
		var_823_bool = 1;
		return 0;
	}
	var_823_bool = 0;
	return 0;
}


func_3896(var_0_bool, var_1_object, var_2_object, var_3_object, var_1232_object, var_1233_object)
{
	var_0_bool = var_1233_object;
	var_1_object = var_1232_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1239_string = "";
		func_3954(var_1233_object, "Sly");
		@@@var_0_bool:SetMessage((int)520493);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520494, (int)-1, (int)21697);
		@@@var_0_bool:AddReply((int)520495, (int)-1, (int)21698);
		goto Label_3924;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf3c";
	}
Label_3924:
	var_1254_bool = 0;
	func_5869(var_1254_bool);
	if(var_1254_bool != 0) {

	Label_3928:
		lshWaitForAnimEnd();
		var_1255_object = var_3_object;
		if(var_1255_object != 0) {
		} else {
			var_1256_string = "";
			var_1256_string = var_2_object;
			func_5570(var_1256_string);
			goto Label_3928;
	}
		PlayAnimation("all", "idle");

	Label_3943:
		WaitForAnimEnd();
		var_1259_object = var_3_object;
		if(var_1259_object != 0) {
			goto Label_3953;
		}
		PlayAnimation("all", "idle");
		goto Label_3943;
	}
	goto Label_3953;
	
Label_3953:
	return 0;
	
}


func_5947()
{
	SetVariable("oob2Grif1", (int)1);
	return 0;
}


func_5953()
{
	SetVariable("oob1Grif4", (int)1);
	return 0;
}


func_6466(var_838_bool)
{
	var_840_int = 0; var_841_string = "";
	func_5683(var_840_int, "oob3Grif3");
	var_843_bool = var_840_int == (int)0;
	if(var_843_bool != 0) {
		var_838_bool = 1;
		return 0;
	}
	var_838_bool = 0;
	return 0;
}


func_2882(var_2_object, var_963_string)
{
	var_964_bool = 0;
	func_5869(var_964_bool);
	var_965_bool = var_964_bool == 0; //@nz
	if(var_965_bool != 0) {
		return 0;
	}
	var_966_bool = var_963_string == var_2_object;
	if(var_966_bool != 0) {
		return 0;
	}
	var_967_string = ""; var_968_bool = 0;
	var_963_string = var_967_string;
	var_970_bool = var_963_string == "";
	if(var_970_bool != 0) {
		var_968_bool = 0;
	} else {
		var_968_bool = 1;
	}
	func_5586(var_967_string, var_968_bool);
	var_2_object = var_963_string;
	return 0;
	
}


func_5959()
{
	var_408_object = Obj(); var_409_string = "";
	func_5688(var_408_object, "quest_b1_04");
	return 0;
}


func_5965()
{
	SetVariable("oob8Grif1", (int)1);
	return 0;
}


func_6478(var_806_bool)
{
	var_808_int = 0; var_809_string = "";
	func_5683(var_808_int, "b3q02GrabitelTalk");
	var_811_bool = var_808_int == (int)1;
	if(var_811_bool != 0) {
		var_806_bool = 1;
		return 0;
	}
	var_806_bool = 0;
	return 0;
}


func_5971()
{
	var_86_object = Obj(); var_87_object = Obj();
	func_6657(Obj());
	var_88_object = var_87_object;
	var_99_float = 0;
	func_5817(var_99_float);
	@@var_87_object:AddMark("b8q01GrifGotoKlara", "pt_map_mishka", (int)3, (int)521464, var_99_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_346(var_2_object, var_483_string)
{
	var_484_bool = 0;
	func_5869(var_484_bool);
	var_485_bool = var_484_bool == 0; //@nz
	if(var_485_bool != 0) {
		return 0;
	}
	var_486_bool = var_483_string == var_2_object;
	if(var_486_bool != 0) {
		return 0;
	}
	var_487_string = ""; var_488_bool = 0;
	var_483_string = var_487_string;
	var_490_bool = var_483_string == "";
	if(var_490_bool != 0) {
		var_488_bool = 0;
	} else {
		var_488_bool = 1;
	}
	func_5586(var_487_string, var_488_bool);
	var_2_object = var_483_string;
	return 0;
	
}


func_6490(var_591_bool)
{
	var_593_int = 0; var_594_string = "";
	func_5683(var_593_int, "oob1Grif3");
	var_596_bool = var_593_int == (int)0;
	if(var_596_bool != 0) {
		var_591_bool = 1;
		return 0;
	}
	var_591_bool = 0;
	return 0;
}


func_5466(var_329_bool, var_330_object)
{
	var_331_string = ""; var_332_int = 0; var_333_bool = 0; var_334_int = 0; var_335_string = ""; var_336_string = ""; var_337_int = 0; var_338_bool = 0; var_339_int = 0; var_340_string = "";
	var_342_int = 0;
	func_5822(var_342_int);
	var_343_int = "d" + var_342_int;
	var_336_string = var_343_int + "m";
	var_337_int = 0;
	
Label_5475:
	if((int)1 != 0) {
		var_347_int = var_337_int + (int)1;
		var_348_int = var_336_string + var_347_int;
		@@var_330_object:HasProperty(var_348_int, var_338_bool);
		var_349_bool = var_338_bool == 0; //@nz
		if(var_349_bool != 0) {
		} else {
			var_337_int = var_337_int + (int)1;
			goto Label_5475;
		}
	}
	var_350_bool = var_337_int == 0; //@nz
	if(var_350_bool != 0) {
		var_329_bool = 0;
		return 10;
	}
	var_339_int = 0;
	var_352_bool = var_337_int > (int)1;
	if(var_352_bool != 0) {
		irand(var_339_int, var_337_int);
	}
	var_354_int = var_339_int + (int)1;
	var_355_int = var_336_string + var_354_int;
	@@var_330_object:GetProperty(var_355_int, var_340_string);
	var_356_bool = 0; var_357_string = "";
	var_340_string = var_357_string;
	func_5601(var_356_bool, var_357_string);
	var_356_bool = var_329_bool;
	return 10;
	
}


func_4448(var_0_bool, var_215_int, var_216_object)
{
	var_218_object = Obj(); var_219_bool = 0; var_220_int = 0; var_221_bool = 0; var_222_object = Obj(); var_223_bool = 0; var_224_int = 0; var_225_bool = 0;
	var_0_bool = var_216_object;
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0;
	var_216_object = var_227_object;
	func_5284(var_226_bool, var_227_object, (float)70.0);
	var_273_bool = var_226_bool == 0; //@nz
	if(var_273_bool != 0) {
		var_215_int = -2;
		return 8;
	}
	CreateDialog(var_222_object);
	var_274_int = 0;
	func_5863(var_274_int);
	@@var_222_object:SetNPCName(var_274_int);
	var_275_int = 0;
	func_5861(var_275_int);
	@@var_222_object:SetNPCDescription(var_275_int);
	var_276_string = "";
	func_5865(var_276_string);
	@@var_222_object:SetPhoto(var_276_string);
	var_277_string = "";
	func_5867(var_277_string);
	@@var_222_object:SetPhoto2(var_277_string);
	var_278_int = 0;
	func_6881(var_278_int);
	@@var_222_object:SetPlayerName(var_278_int);
	IsOverrideActive(var_223_bool);
	var_286_bool = var_223_bool;
	if(var_286_bool != 0) {
		var_215_int = -2;
		return 8;
	}
	DoDialog(var_222_object);
	var_287_bool = 0; var_288_object = Obj();
	func_5651(Obj());
	var_289_object = var_288_object;
	func_5371(var_287_bool, var_288_object);
	var_377_object = Obj(); var_378_object = Obj();
	var_216_object = var_377_object;
	var_222_object = var_378_object;
	TaskCall(24);
	func_4529(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object);
	TaskReturn();
	@@var_222_object:IsDialogEnd(var_225_bool);
	
Label_4511:
	var_426_bool = var_225_bool == 0; //@nz
	if(var_426_bool != 0) {
		sync();
		@@var_222_object:IsDialogEnd(var_225_bool);
		goto Label_4511;
	}
	var_216_object = Obj();
	func_5353();
	StopDialog(var_222_object);
	@@var_222_object:GetReturnValue((int)-1);
	var_224_int = var_215_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5987()
{
	SetVariable("oob8Grif2", (int)1);
	return 0;
}


func_6502(var_597_bool)
{
	var_599_int = 0; var_600_string = "";
	func_5683(var_599_int, "b1q01");
	var_602_bool = var_599_int == (int)1000;
	if(var_602_bool != 0) {
		var_597_bool = 1;
		return 0;
	}
	var_597_bool = 0;
	return 0;
}


func_4966(var_0_bool)
{
	var_69_bool = 0;
	func_5279(var_69_bool);
	var_72_bool = var_69_bool == 0; //@nz
	if(var_72_bool != 0) {
		Hold();
	}
	GetDirection(var_0_bool);
	
Label_4975:
	func_5142();
	goto Label_4975;
}
EMIT "Return(); Pop(0)";


func_5993(var_334_object)
{
	var_336_bool = 0; var_337_object = Obj(); var_338_float = 0;
	var_334_object = var_337_object;
	func_5760(var_336_bool, var_337_object, (float)0.05000000074505806);
	return 0;
}


func_6000()
{
	SetVariable("oob1Grif5", (int)1);
	return 0;
}


func_6514(var_714_bool)
{
	var_716_int = 0; var_717_string = "";
	func_5683(var_716_int, "oob2Grif1");
	var_719_bool = var_716_int == (int)0;
	if(var_719_bool != 0) {
		var_714_bool = 1;
		return 0;
	}
	var_714_bool = 0;
	return 0;
}


func_3954(var_2_object, var_1239_string)
{
	var_1240_bool = 0;
	func_5869(var_1240_bool);
	var_1241_bool = var_1240_bool == 0; //@nz
	if(var_1241_bool != 0) {
		return 0;
	}
	var_1242_bool = var_1239_string == var_2_object;
	if(var_1242_bool != 0) {
		return 0;
	}
	var_1243_string = ""; var_1244_bool = 0;
	var_1239_string = var_1243_string;
	var_1246_bool = var_1239_string == "";
	if(var_1246_bool != 0) {
		var_1244_bool = 0;
	} else {
		var_1244_bool = 1;
	}
	func_5586(var_1243_string, var_1244_bool);
	var_2_object = var_1239_string;
	return 0;
	
}


func_4980(var_92_bool)
{
	var_93_object = Obj(); var_94_object = Obj();
	FindActor(var_94_object, "player");
	var_96_bool = var_94_object == 0; //@nz
	if(var_96_bool != 0) {
		var_92_bool = 0;
		return 2;
	}
	var_97_bool = 0; var_98_object = Obj();
	var_94_object = var_98_object;
	func_5270(var_97_bool, var_98_object);
	var_97_bool = var_92_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6006()
{
	var_267_object = Obj(); var_268_object = Obj();
	func_6657(Obj());
	var_269_object = var_268_object;
	var_274_float = 0;
	func_5817(var_274_float);
	@@var_268_object:AddMark("b1GrifGotoNotkin", "pt_map_notkin", (int)3, (int)530364, var_274_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6526(var_613_bool)
{
	var_615_int = 0; var_616_string = "";
	func_5683(var_615_int, "oob1Grif4");
	var_618_bool = var_615_int == (int)0;
	if(var_618_bool != 0) {
		var_613_bool = 1;
		return 0;
	}
	var_613_bool = 0;
	return 0;
}


func_3457(var_0_bool, var_1_object, var_2_object, var_3_object, var_1139_object, var_1140_object)
{
	var_0_bool = var_1140_object;
	var_1_object = var_1139_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1146_string = "";
		func_3553(var_1140_object, "Neutral");
		@@@var_0_bool:SetMessage((int)520489);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520490, (int)-1, (int)21693);
		var_1158_bool = 0;
		var_1158_bool = 0;
		var_1159_bool = 0; var_1160_object = Obj();
		var_1160_object = var_1_object;
		func_6238(var_1160_object);
		if(var_1159_bool != 0) {
			var_1165_bool = 0; var_1166_object = Obj();
			var_1166_object = var_1_object;
			func_6250(var_1166_object);
			if(var_1165_bool != 0) {
				var_1158_bool = 1;
			}
		}
		if(var_1158_bool != 0) {
			@@@var_0_bool:AddReply((int)521395, (int)25305, (int)22573);
		}
		var_1174_bool = 0;
		var_1174_bool = 0;
		var_1175_bool = 0; var_1176_object = Obj();
		var_1176_object = var_1_object;
		func_6274(var_1176_object);
		if(var_1175_bool != 0) {
			var_1181_bool = 0; var_1182_object = Obj();
			var_1182_object = var_1_object;
			func_6262(var_1182_object);
			if(var_1181_bool != 0) {
				var_1174_bool = 1;
			}
		}
		if(var_1174_bool != 0) {
			@@@var_0_bool:AddReply((int)521482, (int)22648, (int)22647);
		}
		@@@var_0_bool:AddReply((int)520491, (int)-1, (int)21694);
		goto Label_3523;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd85";
	}
Label_3523:
	var_1193_bool = 0;
	func_5869(var_1193_bool);
	if(var_1193_bool != 0) {

	Label_3527:
		lshWaitForAnimEnd();
		var_1194_object = var_3_object;
		if(var_1194_object != 0) {
		} else {
			var_1195_string = "";
			var_1195_string = var_2_object;
			func_5570(var_1195_string);
			goto Label_3527;
	}
		PlayAnimation("all", "idle");

	Label_3542:
		WaitForAnimEnd();
		var_1198_object = var_3_object;
		if(var_1198_object != 0) {
			goto Label_3552;
		}
		PlayAnimation("all", "idle");
		goto Label_3542;
	}
	goto Label_3552;
	
Label_3552:
	return 0;
	
}


func_4995(var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0);
	var_145_float = GetByIndex(var_0_bool, 2);
	RotateAsync(var_144_float, var_145_float);
	return 0;
}


func_1924(var_0_bool, var_1_object, var_2_object, var_3_object, var_768_object, var_769_object)
{
	var_0_bool = var_769_object;
	var_1_object = var_768_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_775_string = "";
		func_2074(var_769_object, "Neutral");
		@@@var_0_bool:SetMessage((int)518386);
		@@@var_0_bool:ClearReplies();
		var_784_bool = 0;
		var_784_bool = 0;
		var_785_bool = 0;
		var_785_bool = 0;
		var_786_bool = 0;
		var_786_bool = 0;
		var_787_bool = 0; var_788_object = Obj();
		var_788_object = var_1_object;
		func_6406(var_788_object);
		if(var_787_bool != 0) {
			var_793_bool = 0; var_794_object = Obj();
			var_794_object = var_1_object;
			func_6442(var_794_object);
			if(var_793_bool != 0) {
				var_786_bool = 1;
			}
		}
		if(var_786_bool != 0) {
			var_799_bool = 0; var_800_object = Obj();
			var_800_object = var_1_object;
			func_6430(var_800_object);
			var_805_bool = var_799_bool == 0; //@nz
			if(var_805_bool != 0) {
				var_785_bool = 1;
			}
		}
		if(var_785_bool != 0) {
			var_806_bool = 0; var_807_object = Obj();
			var_807_object = var_1_object;
			func_6478(var_807_object);
			if(var_806_bool != 0) {
				var_784_bool = 1;
			}
		}
		if(var_784_bool != 0) {
			@@@var_0_bool:AddReply((int)518387, (int)20347, (int)19500);
		}
		var_815_bool = 0;
		var_815_bool = 0;
		var_816_bool = 0;
		var_816_bool = 0;
		var_817_bool = 0; var_818_object = Obj();
		var_818_object = var_1_object;
		func_6418(var_818_object);
		if(var_817_bool != 0) {
			var_823_bool = 0; var_824_object = Obj();
			var_824_object = var_1_object;
			func_6454(var_824_object);
			if(var_823_bool != 0) {
				var_816_bool = 1;
			}
		}
		if(var_816_bool != 0) {
			var_829_bool = 0; var_830_object = Obj();
			var_830_object = var_1_object;
			func_6430(var_830_object);
			var_831_bool = var_829_bool == 0; //@nz
			if(var_831_bool != 0) {
				var_815_bool = 1;
			}
		}
		if(var_815_bool != 0) {
			@@@var_0_bool:AddReply((int)518391, (int)20339, (int)19504);
		}
		var_835_bool = 0;
		var_835_bool = 0;
		var_836_bool = 0; var_837_object = Obj();
		var_837_object = var_1_object;
		func_6430(var_837_object);
		if(var_836_bool != 0) {
			var_838_bool = 0; var_839_object = Obj();
			var_839_object = var_1_object;
			func_6466(var_839_object);
			if(var_838_bool != 0) {
				var_835_bool = 1;
			}
		}
		if(var_835_bool != 0) {
			@@@var_0_bool:AddReply((int)519664, (int)20829, (int)20828);
		}
		var_847_bool = 0; var_848_object = Obj();
		var_848_object = var_1_object;
		func_6430(var_848_object);
		var_849_bool = var_847_bool == 0; //@nz
		if(var_849_bool != 0) {
			@@@var_0_bool:AddReply((int)518394, (int)-1, (int)19507);
		}
		@@@var_0_bool:AddReply((int)518388, (int)-1, (int)19501);
		goto Label_2044;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x788";
	}
Label_2044:
	var_856_bool = 0;
	func_5869(var_856_bool);
	if(var_856_bool != 0) {

	Label_2048:
		lshWaitForAnimEnd();
		var_857_object = var_3_object;
		if(var_857_object != 0) {
		} else {
			var_858_string = "";
			var_858_string = var_2_object;
			func_5570(var_858_string);
			goto Label_2048;
	}
		PlayAnimation("all", "idle");

	Label_2063:
		WaitForAnimEnd();
		var_861_object = var_3_object;
		if(var_861_object != 0) {
			goto Label_2073;
		}
		PlayAnimation("all", "idle");
		goto Label_2063;
	}
	goto Label_2073;
	
Label_2073:
	return 0;
	
}


func_5509(var_632_bool, var_633_object)
{
	var_634_bool = 0; var_635_object = Obj(); var_636_float = 0;
	var_633_object = var_635_object;
	func_5517(var_634_bool, var_635_object, (float)70);
	var_634_bool = var_632_bool;
	return 0;
}


func_6022()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5000(var_75_bool)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_object = Obj(); var_79_bool = 0;
	FindActor(var_78_object, "player");
	var_81_bool = var_78_object == 0; //@nz
	if(var_81_bool != 0) {
		var_75_bool = 0;
		return 4;
	}
	var_82_float = 0; var_83_object = Obj();
	var_78_object = var_83_object;
	func_5218(var_82_float, var_83_object);
	var_91_bool = var_82_float > (float)90000.0;
	if(var_91_bool != 0) {
		var_75_bool = 0;
		return 4;
	}
	CanSee(var_79_bool, var_78_object);
	var_79_bool = var_75_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_6538()
{
	var_318_object = Obj(); var_319_object = Obj();
	CreateDiaryEntry(var_319_object, (int)212, (int)2, (int)518107);
	var_323_bool = 0; var_324_object = Obj(); var_325_int = 0;
	var_319_object = var_324_object;
	func_6629(var_323_bool, var_324_object, (int)209);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2954(var_0_bool, var_993_int, var_994_object)
{
	var_996_object = Obj(); var_997_bool = 0; var_998_int = 0; var_999_bool = 0; var_1000_object = Obj(); var_1001_bool = 0; var_1002_int = 0; var_1003_bool = 0;
	var_0_bool = var_994_object;
	var_1004_bool = 0; var_1005_object = Obj(); var_1006_float = 0;
	var_994_object = var_1005_object;
	func_5284(var_1004_bool, var_1005_object, (float)70.0);
	var_1007_bool = var_1004_bool == 0; //@nz
	if(var_1007_bool != 0) {
		var_993_int = -2;
		return 8;
	}
	CreateDialog(var_1000_object);
	var_1008_int = 0;
	func_5863(var_1008_int);
	@@var_1000_object:SetNPCName(var_1008_int);
	var_1009_int = 0;
	func_5861(var_1009_int);
	@@var_1000_object:SetNPCDescription(var_1009_int);
	var_1010_string = "";
	func_5865(var_1010_string);
	@@var_1000_object:SetPhoto(var_1010_string);
	var_1011_string = "";
	func_5867(var_1011_string);
	@@var_1000_object:SetPhoto2(var_1011_string);
	var_1012_int = 0;
	func_6881(var_1012_int);
	@@var_1000_object:SetPlayerName(var_1012_int);
	IsOverrideActive(var_1001_bool);
	var_1013_bool = var_1001_bool;
	if(var_1013_bool != 0) {
		var_993_int = -2;
		return 8;
	}
	DoDialog(var_1000_object);
	var_1014_bool = 0; var_1015_object = Obj();
	func_5651(Obj());
	var_1016_object = var_1015_object;
	func_5371(var_1014_bool, var_1015_object);
	var_1017_object = Obj(); var_1018_object = Obj();
	var_994_object = var_1017_object;
	var_1000_object = var_1018_object;
	TaskCall(12);
	func_3035(var_1019_object, var_1020_object, var_1021_string, var_1022_bool, var_1017_object, var_1018_object);
	TaskReturn();
	@@var_1000_object:IsDialogEnd(var_1003_bool);
	
Label_3017:
	var_1047_bool = var_1003_bool == 0; //@nz
	if(var_1047_bool != 0) {
		sync();
		@@var_1000_object:IsDialogEnd(var_1003_bool);
		goto Label_3017;
	}
	var_994_object = Obj();
	func_5353();
	StopDialog(var_1000_object);
	@@var_1000_object:GetReturnValue((int)-1);
	var_1002_int = var_993_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6028()
{
	SetVariable("oob1Grif6", (int)1);
	return 0;
}


func_5517(var_634_bool, var_635_object, var_636_float)
{
	var_637_float = 0; var_638_cvector = CVector(0,0,0); var_639_cvector = CVector(0,0,0); var_640_cvector = CVector(0,0,0); var_641_cvector = CVector(0,0,0); var_642_cvector = CVector(0,0,0); var_643_cvector = CVector(0,0,0); var_644_bool = 0; var_645_float = 0; var_646_cvector = CVector(0,0,0); var_647_cvector = CVector(0,0,0); var_648_cvector = CVector(0,0,0); var_649_cvector = CVector(0,0,0); var_650_cvector = CVector(0,0,0); var_651_cvector = CVector(0,0,0); var_652_bool = 0;
	@@var_635_object:GetPosition(var_646_cvector);
	@@var_635_object:GetEyesHeight(var_645_float);
	var_653_float = GetByIndex(var_646_cvector, 1);
	var_653_float = var_653_float + var_645_float;
	SetByIndex(var_646_cvector, 1) = var_653_float;
	GetPosition(var_647_cvector);
	GetEyesHeight(var_645_float);
	var_654_float = GetByIndex(var_647_cvector, 1);
	var_654_float = var_654_float + var_645_float;
	SetByIndex(var_647_cvector, 1) = var_654_float;
	var_648_cvector = var_646_cvector - var_647_cvector;
	var_655_float = GetByIndex(var_648_cvector, 1);
	SetByIndex(var_648_cvector, 1) = (float)0;
	var_656_int = var_648_cvector | var_648_cvector;
	var_657_float = sqrt(var_656_int);
	var_648_cvector = var_648_cvector / var_657_float;
	var_649_cvector = -var_648_cvector;
	var_658_float = var_648_cvector * var_636_float;
	var_650_cvector = var_658_float - CVector(0.0, 10.0, 0.0);
	var_651_cvector = var_647_cvector + var_650_cvector;
	IsOverrideActive(var_652_bool);
	var_660_bool = var_652_bool;
	if(var_660_bool != 0) {
		var_634_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_651_cvector, var_649_cvector, (bool)1);
	var_662_float = GetByIndex(var_650_cvector, 0);
	var_663_float = GetByIndex(var_650_cvector, 2);
	Rotate(var_662_float, var_663_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_634_bool = 1;
	return 16;
}


func_6034()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_6551()
{
	var_296_object = Obj(); var_297_object = Obj();
	CreateDiaryEntry(var_297_object, (int)211, (int)2, (int)518106);
	var_301_bool = 0; var_302_object = Obj(); var_303_int = 0;
	var_297_object = var_302_object;
	func_6629(var_301_bool, var_302_object, (int)209);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6040(var_217_object)
{
	var_219_bool = 0; var_220_object = Obj(); var_221_float = 0;
	var_217_object = var_220_object;
	func_5760(var_219_bool, var_220_object, (float)0.10000000149011612);
	return 0;
}


func_5022()
{
	var_1455_float = 0; var_1456_float = 0;
	rand(var_1456_float, (int)8, (int)16);
	SetTimer((int)10, var_1456_float);
	return 2;
}


func_6047(var_74_object)
{
	@@var_74_object:SetReturnValue((int)1000);
	return 0;
}


func_1440(var_0_bool, var_674_int, var_675_object)
{
	var_677_object = Obj(); var_678_bool = 0; var_679_int = 0; var_680_bool = 0; var_681_object = Obj(); var_682_bool = 0; var_683_int = 0; var_684_bool = 0;
	var_0_bool = var_675_object;
	var_685_bool = 0; var_686_object = Obj(); var_687_float = 0;
	var_675_object = var_686_object;
	func_5284(var_685_bool, var_686_object, (float)70.0);
	var_688_bool = var_685_bool == 0; //@nz
	if(var_688_bool != 0) {
		var_674_int = -2;
		return 8;
	}
	CreateDialog(var_681_object);
	var_689_int = 0;
	func_5863(var_689_int);
	@@var_681_object:SetNPCName(var_689_int);
	var_690_int = 0;
	func_5861(var_690_int);
	@@var_681_object:SetNPCDescription(var_690_int);
	var_691_string = "";
	func_5865(var_691_string);
	@@var_681_object:SetPhoto(var_691_string);
	var_692_string = "";
	func_5867(var_692_string);
	@@var_681_object:SetPhoto2(var_692_string);
	var_693_int = 0;
	func_6881(var_693_int);
	@@var_681_object:SetPlayerName(var_693_int);
	IsOverrideActive(var_682_bool);
	var_694_bool = var_682_bool;
	if(var_694_bool != 0) {
		var_674_int = -2;
		return 8;
	}
	DoDialog(var_681_object);
	var_695_bool = 0; var_696_object = Obj();
	func_5651(Obj());
	var_697_object = var_696_object;
	func_5371(var_695_bool, var_696_object);
	var_698_object = Obj(); var_699_object = Obj();
	var_675_object = var_698_object;
	var_681_object = var_699_object;
	TaskCall(4);
	func_1521(var_700_object, var_701_object, var_702_string, var_703_bool, var_698_object, var_699_object);
	TaskReturn();
	@@var_681_object:IsDialogEnd(var_684_bool);
	
Label_1503:
	var_737_bool = var_684_bool == 0; //@nz
	if(var_737_bool != 0) {
		sync();
		@@var_681_object:IsDialogEnd(var_684_bool);
		goto Label_1503;
	}
	var_675_object = Obj();
	func_5353();
	StopDialog(var_681_object);
	@@var_681_object:GetReturnValue((int)-1);
	var_683_int = var_674_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6052()
{
	var_75_object = Obj(); var_76_int = 0; var_77_object = Obj(); var_78_int = 0;
	SetVariable("b1q03_2", (int)1);
	func_6657(Obj());
	var_81_object = var_77_object;
	var_92_float = 0;
	func_5817(var_92_float);
	@@var_77_object:AddMark("b1q03GrifGotoDoberman", "pt_b1q03_doberman", (int)0, (int)518099, var_92_float);
	func_6577();
	func_6564();
	GetVariable("b1q03", var_78_int);
	var_128_bool = var_78_int != (int)0;
	if(var_128_bool != 0) {
		return 4;
	}
	var_129_object = Obj(); var_130_string = "";
	func_5688(var_129_object, "quest_b1_03");
	var_137_bool = 0; var_138_string = ""; var_139_string = "";
	func_5805(var_137_bool, "quest_b1_03", "place_doberman");
	return 4;
}
EMIT "Stack[-2] = 0";


func_6564()
{
	var_118_object = Obj(); var_119_object = Obj();
	CreateDiaryEntry(var_119_object, (int)210, (int)2, (int)518105);
	var_123_bool = 0; var_124_object = Obj(); var_125_int = 0;
	var_119_object = var_124_object;
	func_6629(var_123_bool, var_124_object, (int)209);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5031()
{
	KillTimer((int)10);
	return 0;
}


func_4529(var_0_bool, var_1_object, var_2_object, var_3_object, var_377_object, var_378_object)
{
	var_0_bool = var_378_object;
	var_1_object = var_377_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_384_string = "";
		func_4587(var_378_object, "Neutral");
		@@@var_0_bool:SetMessage((int)520730);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520731, (int)21943, (int)21942);
		@@@var_0_bool:AddReply((int)520738, (int)21943, (int)21949);
		goto Label_4557;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x11b5";
	}
Label_4557:
	var_408_bool = 0;
	func_5869(var_408_bool);
	if(var_408_bool != 0) {

	Label_4561:
		lshWaitForAnimEnd();
		var_409_object = var_3_object;
		if(var_409_object != 0) {
		} else {
			var_410_string = "";
			var_410_string = var_2_object;
			func_5570(var_410_string);
			goto Label_4561;
	}
		PlayAnimation("all", "idle");

	Label_4576:
		WaitForAnimEnd();
		var_423_object = var_3_object;
		if(var_423_object != 0) {
			goto Label_4586;
		}
		PlayAnimation("all", "idle");
		goto Label_4576;
	}
	goto Label_4586;
	
Label_4586:
	return 0;
	
}


func_6577()
{
	var_95_object = Obj(); var_96_object = Obj();
	CreateDiaryEntry(var_96_object, (int)209, (int)2, (int)518104);
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0;
	var_96_object = var_101_object;
	func_6629(var_100_bool, var_101_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4026(var_0_bool, var_1269_int, var_1270_object)
{
	var_1272_object = Obj(); var_1273_bool = 0; var_1274_int = 0; var_1275_bool = 0; var_1276_object = Obj(); var_1277_bool = 0; var_1278_int = 0; var_1279_bool = 0;
	var_0_bool = var_1270_object;
	var_1280_bool = 0; var_1281_object = Obj(); var_1282_float = 0;
	var_1270_object = var_1281_object;
	func_5284(var_1280_bool, var_1281_object, (float)70.0);
	var_1283_bool = var_1280_bool == 0; //@nz
	if(var_1283_bool != 0) {
		var_1269_int = -2;
		return 8;
	}
	CreateDialog(var_1276_object);
	var_1284_int = 0;
	func_5863(var_1284_int);
	@@var_1276_object:SetNPCName(var_1284_int);
	var_1285_int = 0;
	func_5861(var_1285_int);
	@@var_1276_object:SetNPCDescription(var_1285_int);
	var_1286_string = "";
	func_5865(var_1286_string);
	@@var_1276_object:SetPhoto(var_1286_string);
	var_1287_string = "";
	func_5867(var_1287_string);
	@@var_1276_object:SetPhoto2(var_1287_string);
	var_1288_int = 0;
	func_6881(var_1288_int);
	@@var_1276_object:SetPlayerName(var_1288_int);
	IsOverrideActive(var_1277_bool);
	var_1289_bool = var_1277_bool;
	if(var_1289_bool != 0) {
		var_1269_int = -2;
		return 8;
	}
	DoDialog(var_1276_object);
	var_1290_bool = 0; var_1291_object = Obj();
	func_5651(Obj());
	var_1292_object = var_1291_object;
	func_5371(var_1290_bool, var_1291_object);
	var_1293_object = Obj(); var_1294_object = Obj();
	var_1270_object = var_1293_object;
	var_1276_object = var_1294_object;
	TaskCall(20);
	func_4107(var_1295_object, var_1296_object, var_1297_string, var_1298_bool, var_1293_object, var_1294_object);
	TaskReturn();
	@@var_1276_object:IsDialogEnd(var_1279_bool);
	
Label_4089:
	var_1323_bool = var_1279_bool == 0; //@nz
	if(var_1323_bool != 0) {
		sync();
		@@var_1276_object:IsDialogEnd(var_1279_bool);
		goto Label_4089;
	}
	var_1270_object = Obj();
	func_5353();
	StopDialog(var_1276_object);
	@@var_1276_object:GetReturnValue((int)-1);
	var_1278_int = var_1269_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5565()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_6590()
{
	var_99_object = Obj(); var_100_object = Obj();
	CreateDiaryEntry(var_100_object, (int)229, (int)2, (int)519657);
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0;
	var_100_object = var_105_object;
	func_6629(var_104_bool, var_105_object, (int)227);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5570(var_410_string)
{
	var_411_bool = 0; var_412_float = 0; var_413_float = 0; var_414_bool = 0; var_415_float = 0; var_416_float = 0;
	lshHasAnimation(var_414_bool, var_410_string);
	var_417_bool = var_414_bool;
	if(var_417_bool != 0) {
		lshGetAnimTimes(var_410_string, var_415_float, var_416_float);
		lshPlayAnimation(var_415_float, var_416_float, (bool)0);
	} else {
		var_420_int = "Can't find lsh animation : " + var_410_string;
		Trace(var_420_int);
	}
	return 6;
	
}


func_6603()
{
	var_146_object = Obj(); var_147_object = Obj();
	CreateDiaryEntry(var_147_object, (int)234, (int)2, (int)519663);
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0;
	var_147_object = var_152_object;
	func_6629(var_151_bool, var_152_object, (int)227);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6094()
{
	SetVariable("b1q03_2", (int)1000);
	func_6538();
	return 0;
}


func_5586(var_388_string, var_389_bool)
{
	var_392_bool = 0; var_393_float = 0; var_394_float = 0; var_395_bool = 0; var_396_float = 0; var_397_float = 0;
	lshHasAnimation(var_395_bool, var_388_string);
	var_398_bool = var_395_bool;
	if(var_398_bool != 0) {
		lshGetAnimTimes(var_388_string, var_396_float, var_397_float);
		lshPlayAnimation(var_396_float, var_397_float, var_389_bool);
	} else {
		var_400_int = "Can't find lsh animation : " + var_388_string;
		Trace(var_400_int);
	}
	return 6;
	
}


func_6103()
{
	SetVariable("b1q03_2", (int)-1);
	func_6551();
	return 0;
}


func_6616(var_113_object)
{
	var_114_object = Obj(); var_115_object = Obj();
	GetDiaryRoot(var_115_object);
	var_116_bool = var_115_object == 0; //@nz
	if(var_116_bool != 0) {
		Trace("Can't retrieve diary root");
		var_113_object = 0;
		return 2;
	}
	var_115_object = var_113_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3035(var_0_bool, var_1_object, var_2_object, var_3_object, var_1017_object, var_1018_object)
{
	var_0_bool = var_1018_object;
	var_1_object = var_1017_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1024_string = "";
		func_3093(var_1018_object, "Anger");
		@@@var_0_bool:SetMessage((int)520481);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520482, (int)-1, (int)21685);
		@@@var_0_bool:AddReply((int)520483, (int)-1, (int)21686);
		goto Label_3063;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xbdf";
	}
Label_3063:
	var_1039_bool = 0;
	func_5869(var_1039_bool);
	if(var_1039_bool != 0) {

	Label_3067:
		lshWaitForAnimEnd();
		var_1040_object = var_3_object;
		if(var_1040_object != 0) {
		} else {
			var_1041_string = "";
			var_1041_string = var_2_object;
			func_5570(var_1041_string);
			goto Label_3067;
	}
		PlayAnimation("all", "idle");

	Label_3082:
		WaitForAnimEnd();
		var_1044_object = var_3_object;
		if(var_1044_object != 0) {
			goto Label_3092;
		}
		PlayAnimation("all", "idle");
		goto Label_3082;
	}
	goto Label_3092;
	
Label_3092:
	return 0;
	
}


func_6112()
{
	SetVariable("oob1Grif1", (int)1);
	return 0;
}


func_3553(var_2_object, var_1146_string)
{
	var_1147_bool = 0;
	func_5869(var_1147_bool);
	var_1148_bool = var_1147_bool == 0; //@nz
	if(var_1148_bool != 0) {
		return 0;
	}
	var_1149_bool = var_1146_string == var_2_object;
	if(var_1149_bool != 0) {
		return 0;
	}
	var_1150_string = ""; var_1151_bool = 0;
	var_1146_string = var_1150_string;
	var_1153_bool = var_1146_string == "";
	if(var_1153_bool != 0) {
		var_1151_bool = 0;
	} else {
		var_1151_bool = 1;
	}
	func_5586(var_1150_string, var_1151_bool);
	var_2_object = var_1146_string;
	return 0;
	
}


func_5601(var_321_bool, var_322_string)
{
	var_323_bool = 0; var_324_bool = 0;
	var_325_bool = 0;
	func_5869(var_325_bool);
	if(var_325_bool != 0) {
		lshHasSpeech(var_324_bool, var_322_string);
		var_326_bool = var_324_bool;
		if(var_326_bool != 0) {
			lshPlaySpeech(var_322_string);
			var_321_bool = 1;
			return 2;
		}
	}
	var_321_bool = 0;
	return 2;
}


func_2532(var_0_bool, var_871_int, var_872_object)
{
	var_874_object = Obj(); var_875_bool = 0; var_876_int = 0; var_877_bool = 0; var_878_object = Obj(); var_879_bool = 0; var_880_int = 0; var_881_bool = 0;
	var_0_bool = var_872_object;
	var_882_bool = 0; var_883_object = Obj(); var_884_float = 0;
	var_872_object = var_883_object;
	func_5284(var_882_bool, var_883_object, (float)70.0);
	var_885_bool = var_882_bool == 0; //@nz
	if(var_885_bool != 0) {
		var_871_int = -2;
		return 8;
	}
	CreateDialog(var_878_object);
	var_886_int = 0;
	func_5863(var_886_int);
	@@var_878_object:SetNPCName(var_886_int);
	var_887_int = 0;
	func_5861(var_887_int);
	@@var_878_object:SetNPCDescription(var_887_int);
	var_888_string = "";
	func_5865(var_888_string);
	@@var_878_object:SetPhoto(var_888_string);
	var_889_string = "";
	func_5867(var_889_string);
	@@var_878_object:SetPhoto2(var_889_string);
	var_890_int = 0;
	func_6881(var_890_int);
	@@var_878_object:SetPlayerName(var_890_int);
	IsOverrideActive(var_879_bool);
	var_891_bool = var_879_bool;
	if(var_891_bool != 0) {
		var_871_int = -2;
		return 8;
	}
	DoDialog(var_878_object);
	var_892_bool = 0; var_893_object = Obj();
	func_5651(Obj());
	var_894_object = var_893_object;
	func_5371(var_892_bool, var_893_object);
	var_895_object = Obj(); var_896_object = Obj();
	var_872_object = var_895_object;
	var_878_object = var_896_object;
	TaskCall(8);
	func_2613(var_897_object, var_898_object, var_899_string, var_900_bool, var_895_object, var_896_object);
	TaskReturn();
	@@var_878_object:IsDialogEnd(var_881_bool);
	
Label_2595:
	var_925_bool = var_881_bool == 0; //@nz
	if(var_925_bool != 0) {
		sync();
		@@var_878_object:IsDialogEnd(var_881_bool);
		goto Label_2595;
	}
	var_872_object = Obj();
	func_5353();
	StopDialog(var_878_object);
	@@var_878_object:GetReturnValue((int)-1);
	var_880_int = var_871_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6629(var_104_bool, var_105_object, var_106_int)
{
	var_107_object = Obj(); var_108_object = Obj(); var_109_int = 0; var_110_object = Obj(); var_111_object = Obj(); var_112_int = 0;
	func_6616(Obj());
	var_113_object = var_110_object;
	@@var_110_object:Find(var_106_int, var_111_object);
	var_118_bool = var_111_object == 0; //@nz
	if(var_118_bool != 0) {
		var_120_int = "Can't find diary parent with id: " + var_106_int;
		Trace(var_120_int);
		var_104_bool = 0;
		return 6;
	}
	@@var_111_object:AddChild(var_105_object);
	SendWorldWndMessage((int)7);
	@@var_105_object:GetCategory(var_112_int);
	SetDiarySection(var_112_int);
	var_104_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_6118()
{
	SetVariable("oob1Grif2", (int)1);
	return 0;
}


func_4587(var_2_object, var_384_string)
{
	var_385_bool = 0;
	func_5869(var_385_bool);
	var_386_bool = var_385_bool == 0; //@nz
	if(var_386_bool != 0) {
		return 0;
	}
	var_387_bool = var_384_string == var_2_object;
	if(var_387_bool != 0) {
		return 0;
	}
	var_388_string = ""; var_389_bool = 0;
	var_384_string = var_388_string;
	var_391_bool = var_384_string == "";
	if(var_391_bool != 0) {
		var_389_bool = 0;
	} else {
		var_389_bool = 1;
	}
	func_5586(var_388_string, var_389_bool);
	var_2_object = var_384_string;
	return 0;
	
}


func_6124(var_144_object)
{
	var_145_object = Obj(); var_146_string = ""; var_147_float = 0;
	func_6657(Obj());
	var_148_object = var_145_object;
	func_6674(var_145_object, "pt_b1q03_doberman", (float)2);
	var_168_object = Obj();
	func_6657(var_168_object);
	@@var_144_object:ShowMap(var_168_object);
	return 0;
}


func_5616()
{
	var_70_bool = 0;
	func_5869(var_70_bool);
	if(var_70_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1521(var_0_bool, var_1_object, var_2_object, var_3_object, var_698_object, var_699_object)
{
	var_0_bool = var_699_object;
	var_1_object = var_698_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_705_string = "";
		func_1589(var_699_object, "Neutral");
		@@@var_0_bool:SetMessage((int)518272);
		@@@var_0_bool:ClearReplies();
		var_714_bool = 0; var_715_object = Obj();
		var_715_object = var_1_object;
		func_6514(var_715_object);
		if(var_714_bool != 0) {
			@@@var_0_bool:AddReply((int)519463, (int)20635, (int)20634);
		}
		@@@var_0_bool:AddReply((int)520470, (int)-1, (int)21673);
		@@@var_0_bool:AddReply((int)518273, (int)-1, (int)19382);
		goto Label_1559;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5f5";
	}
Label_1559:
	var_729_bool = 0;
	func_5869(var_729_bool);
	if(var_729_bool != 0) {

	Label_1563:
		lshWaitForAnimEnd();
		var_730_object = var_3_object;
		if(var_730_object != 0) {
		} else {
			var_731_string = "";
			var_731_string = var_2_object;
			func_5570(var_731_string);
			goto Label_1563;
	}
		PlayAnimation("all", "idle");

	Label_1578:
		WaitForAnimEnd();
		var_734_object = var_3_object;
		if(var_734_object != 0) {
			goto Label_1588;
		}
		PlayAnimation("all", "idle");
		goto Label_1578;
	}
	goto Label_1588;
	
Label_1588:
	return 0;
	
}


func_5623(var_128_string, var_129_int, var_130_int)
{
	var_131_bool = 0; var_132_bool = 0;
	var_133_bool = 0; var_134_int = 0; var_135_int = 0;
	var_129_int = var_134_int;
	var_130_int = var_135_int;
	func_5678(var_133_bool, var_134_int, var_135_int);
	if(var_133_bool != 0) {
		AddItem(var_132_bool, var_128_string, (int)0);
	}
	return 2;
}


func_6140(var_171_object)
{
	Trace("samopal ammo5 is given");
	var_174_object = Obj(); var_175_string = ""; var_176_int = 0;
	var_171_object = var_174_object;
	func_5747(var_174_object, "samopal_ammo", (int)5);
	return 0;
}


