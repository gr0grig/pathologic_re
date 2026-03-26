// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Distrust|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Think|W:Pride|W:Triumph|W:Smile|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:b3q03|W:b3q03BurahHome|W:pt_map_burah_home|A:AddMark|W:grass_combination|A:RemoveItemByType|W:oob3Notkin2|A:ShowMap|W:oob1Notkin2|W:b1q01NotkinGotoGrif|W:pt_map_grif|W:oob2Notkin1|W:RMap|W:oob8Notkin1|W:b8q01NotkinGotoKlara|W:pt_map_mishka|W:oob1Notkin3|W:oob4Notkin1|W:b4q03|W:hunter_mark|W:b4NotkinMapVisit|W:b10q04NotkinTalk|W:b11q04|W:b11q04NotkinGotoSanitar|W:pt_b11q04_sanitar|W:quest_b11_04|W:place_sanitar|W:playsound|W:giveitem|W:grabitel_mark|W:KnowShabnak|W:oob12Notkin1|W:b3NotkinVisit|W:Revolver is given|W:Revolver|W:durability|W:revolver ammo2 is given|W:revolver_ammo|W:mapmark|W:givemoney|W:revolver ammo6 is given|W:rifle ammo10 is given|W:rifle_ammo|W:oob1Notkin1|W:b1q03_1|W:b1q03NotkinGotoDoberman|W:pt_b1q03_doberman|W:b1q03NotkinGotoDobermanSelf|W:pt_map_notkin|W:b1q03|W:quest_b1_03|W:place_doberman|W:samopal ammo5 is given|W:samopal_ammo|W:cleanup|W:b3q02|W:b3q02NotkinGotoKapella|W:pt_map_kapella|W:b3q02Dead|W:quest_b3_02|W:place_grabitel2|W:remove_grabitel|W:oob3Notkin1|W:Samopal is given|W:Samopal|W:b8q01|W:b1ResqueList|W:b1q03_dead|W:b1q03_retreat|W:b1q03_2|W:b1q01|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Notkin.png|W:ui/NPC_Notkin_b.png
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x1c14
// @RUN_TASK: 28
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x134 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x661 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7fc vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb81 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcb6 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf46 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1081 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x11ce vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1345 vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x153a vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0x16d1 vars=int,int
// @TASK_22: vars=object params=2
// @TASK_23: vars=object,object,string,bool params=2
// @EVENT_11: op=0x18f2 vars=int,int
// @TASK_24: vars=object params=2
// @TASK_25: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1adf vars=int,int
// @TASK_26: vars=object params=2
// @TASK_27: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1bea vars=int,int
// @TASK_28: vars=cvector params=0
// @EVENT_7: op=0x1c60 vars=int
// @EVENT_6: op=0x1c86 vars=
// @EVENT_5: op=0x1c95 vars=
// @EVENT_45: op=0x1ca2 vars=bool
// @EVENT_0: op=0x1cae vars=object
// @PE: 0x51,0x11e,0x134,0x60c,0x64b,0x661,0x740,0x7e6,0x7fc,0xb31,0xb6b,0xb81,0xc20,0xca0,0xcb6,0xef0,0xf30,0xf46,0x102b,0x106b,0x1081,0x1178,0x11b8,0x11ce,0x12dc,0x132f,0x1345,0x14e4,0x1524,0x153a,0x1671,0x16bb,0x16d1,0x1883,0x18dc,0x18f2,0x1a85,0x1ac9,0x1adf,0x1b9a,0x1bd4,0x1bea,0x1c60,0x1c86,0x1ca2,0x1e86,0x1ee0,0x1f27,0x1f6c,0x1f72,0x1f82,0x1f9c,0x1fad,0x1fb4,0x1fca,0x1fd1,0x1fd8,0x1fde,0x1fe4,0x1ffd,0x2003,0x202b,0x203b,0x2041,0x2054,0x2061,0x2067,0x206d,0x2094,0x209f,0x20a5,0x20ab,0x20b1,0x20c1,0x20cc,0x20d3,0x20de,0x2117,0x2120,0x2129,0x2146,0x217d,0x2198,0x21a4,0x21b0,0x21ba,0x21c6,0x21d2,0x21de,0x21ea,0x21f6,0x2200,0x220c,0x2218,0x2222,0x222c,0x2236,0x2240,0x224a,0x2256,0x2260,0x226a,0x2276,0x2282,0x228e,0x229a,0x22a6,0x22b2,0x22be,0x22ca,0x22d6,0x22e2,0x22ec,0x22f8,0x2304,0x2310,0x231c,0x2328,0x2334,0x233e,0x24cd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)19119;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8420();
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_8518(var_153_object);
		}
		var_179_bool = var_72_cvector == (int)19214;
		if(var_179_bool != 0) {
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_8385(var_181_object);
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_8251();
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_8500();
			var_220_object = Obj(); var_221_object = Obj();
			var_220_object = var_1_object;
			var_221_object = var_0_object;
			func_8319(var_221_object);
		}
		var_232_bool = var_72_cvector == (int)28360;
		if(var_232_bool != 0) {
			var_233_object = Obj(); var_234_object = Obj();
			var_233_object = var_1_object;
			var_234_object = var_0_object;
			func_8500();
			var_235_object = Obj(); var_236_object = Obj();
			var_235_object = var_1_object;
			var_236_object = var_0_object;
			func_8138(var_236_object);
		}
		var_276_bool = var_72_cvector == (int)19217;
		if(var_276_bool != 0) {
			var_277_object = Obj(); var_278_object = Obj();
			var_277_object = var_1_object;
			var_278_object = var_0_object;
			func_8396(var_278_object);
			var_282_object = Obj(); var_283_object = Obj();
			var_282_object = var_1_object;
			var_283_object = var_0_object;
			func_8500();
		}
		var_285_bool = var_72_cvector == (int)20885;
		if(var_285_bool != 0) {
			var_286_object = Obj(); var_287_object = Obj();
			var_286_object = var_1_object;
			var_287_object = var_0_object;
			func_8396(var_287_object);
			var_288_object = Obj(); var_289_object = Obj();
			var_288_object = var_1_object;
			var_289_object = var_0_object;
			func_8500();
		}
		var_291_bool = var_72_cvector == (int)19210;
		if(var_291_bool != 0) {
			var_292_object = Obj(); var_293_object = Obj();
			var_292_object = var_1_object;
			var_293_object = var_0_object;
			func_8420();
			var_294_object = Obj(); var_295_object = Obj();
			var_294_object = var_1_object;
			var_295_object = var_0_object;
			func_8518(var_295_object);
		}
		var_297_bool = var_72_cvector == (int)19204;
		if(var_297_bool != 0) {
			var_298_object = Obj(); var_299_object = Obj();
			var_298_object = var_1_object;
			var_299_object = var_0_object;
			func_8471();
			var_310_object = Obj(); var_311_object = Obj();
			var_310_object = var_1_object;
			var_311_object = var_0_object;
			func_8385(var_311_object);
			var_312_object = Obj(); var_313_object = Obj();
			var_312_object = var_1_object;
			var_313_object = var_0_object;
			func_8251();
			var_314_object = Obj(); var_315_object = Obj();
			var_314_object = var_1_object;
			var_315_object = var_0_object;
			func_8500();
			var_316_object = Obj(); var_317_object = Obj();
			var_316_object = var_1_object;
			var_317_object = var_0_object;
			func_8319(var_317_object);
		}
		var_319_bool = var_72_cvector == (int)20886;
		if(var_319_bool != 0) {
			var_320_object = Obj(); var_321_object = Obj();
			var_320_object = var_1_object;
			var_321_object = var_0_object;
			func_8396(var_321_object);
			var_322_object = Obj(); var_323_object = Obj();
			var_322_object = var_1_object;
			var_323_object = var_0_object;
			func_8480();
			var_334_object = Obj(); var_335_object = Obj();
			var_334_object = var_1_object;
			var_335_object = var_0_object;
			func_8500();
		}
		var_337_bool = var_72_cvector == (int)20889;
		if(var_337_bool != 0) {
			var_338_object = Obj(); var_339_object = Obj();
			var_338_object = var_1_object;
			var_339_object = var_0_object;
			func_8396(var_339_object);
			var_340_object = Obj(); var_341_object = Obj();
			var_340_object = var_1_object;
			var_341_object = var_0_object;
			func_8500();
			var_342_object = Obj(); var_343_object = Obj();
			var_342_object = var_1_object;
			var_343_object = var_0_object;
			func_8480();
		}
		var_345_bool = var_72_cvector == (int)19207;
		if(var_345_bool != 0) {
			var_346_object = Obj(); var_347_object = Obj();
			var_346_object = var_1_object;
			var_347_object = var_0_object;
			func_8480();
			var_348_object = Obj(); var_349_object = Obj();
			var_348_object = var_1_object;
			var_349_object = var_0_object;
			func_8396(var_349_object);
			var_350_object = Obj(); var_351_object = Obj();
			var_350_object = var_1_object;
			var_351_object = var_0_object;
			func_8500();
		}
		var_353_bool = var_72_cvector == (int)28399;
		if(var_353_bool != 0) {
			var_354_object = Obj(); var_355_object = Obj();
			var_354_object = var_1_object;
			var_355_object = var_0_object;
			func_8152();
			var_358_object = Obj(); var_359_object = Obj();
			var_358_object = var_1_object;
			var_359_object = var_0_object;
			func_8289();
		}
		var_363_bool = var_72_cvector == (int)21229;
		if(var_363_bool != 0) {
			var_364_object = Obj(); var_365_object = Obj();
			var_364_object = var_1_object;
			var_365_object = var_0_object;
			func_8066();
		}
		var_369_bool = var_72_cvector == (int)21235;
		if(var_369_bool != 0) {
			var_370_object = Obj(); var_371_object = Obj();
			var_370_object = var_1_object;
			var_371_object = var_0_object;
			func_8072();
			var_382_object = Obj(); var_383_object = Obj();
			var_382_object = var_1_object;
			var_383_object = var_0_object;
			func_8369(var_383_object);
		}
		var_390_bool = var_72_cvector == (int)21238;
		if(var_390_bool != 0) {
			var_391_object = Obj(); var_392_object = Obj();
			var_391_object = var_1_object;
			var_392_object = var_0_object;
			func_8072();
			var_393_object = Obj(); var_394_object = Obj();
			var_393_object = var_1_object;
			var_394_object = var_0_object;
			func_8357();
		}
		var_398_bool = var_72_cvector == (int)28361;
		if(var_398_bool != 0) {
			var_399_object = Obj(); var_400_object = Obj();
			var_399_object = var_1_object;
			var_400_object = var_0_object;
			func_8072();
			var_401_object = Obj(); var_402_object = Obj();
			var_401_object = var_1_object;
			var_402_object = var_0_object;
			func_8357();
		}
		var_404_bool = var_71_bool == (int)19098;
		if(var_404_bool != 0) {
			var_405_bool = 0; var_406_object = Obj();
			var_406_object = var_1_object;
			func_8810(var_406_object);
			if(var_405_bool != 0) {
				var_413_object = Obj(); var_414_object = Obj();
				var_413_object = var_1_object;
				var_414_object = var_0_object;
				func_8414();
				var_417_string = "";
				func_286(var_72_cvector, "Distrust");
				@@@var_0_object:SetMessage((int)517966);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)527053, (int)28348, (int)28347);
				return 0;
			}
			var_438_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)517988);
			@@@var_0_object:ClearReplies();
			var_440_bool = 0;
			var_440_bool = 0;
			var_441_bool = 0;
			var_441_bool = 0;
			var_442_bool = 0; var_443_object = Obj();
			var_443_object = var_1_object;
			func_8846(var_443_object);
			if(var_442_bool != 0) {
				var_448_bool = 0; var_449_object = Obj();
				var_449_object = var_1_object;
				func_8822(var_449_object);
				var_454_bool = var_448_bool == 0; //@nz
				if(var_454_bool != 0) {
					var_441_bool = 1;
				}
			}
			if(var_441_bool != 0) {
				var_455_bool = 0; var_456_object = Obj();
				var_456_object = var_1_object;
				func_8834(var_456_object);
				var_461_bool = var_455_bool == 0; //@nz
				if(var_461_bool != 0) {
					var_440_bool = 1;
				}
			}
			if(var_440_bool != 0) {
				@@@var_0_object:AddReply((int)518075, (int)19209, (int)19208);
			}
			var_465_bool = 0;
			var_465_bool = 0;
			var_466_bool = 0; var_467_object = Obj();
			var_467_object = var_1_object;
			func_8870(var_467_object);
			if(var_466_bool != 0) {
				var_472_bool = 0; var_473_object = Obj();
				var_473_object = var_1_object;
				func_8822(var_473_object);
				if(var_472_bool != 0) {
					var_465_bool = 1;
				}
			}
			if(var_465_bool != 0) {
				@@@var_0_object:AddReply((int)518066, (int)20872, (int)19199);
			}
			var_477_bool = 0;
			var_477_bool = 0;
			var_478_bool = 0;
			var_478_bool = 0;
			var_479_bool = 0; var_480_object = Obj();
			var_480_object = var_1_object;
			func_8870(var_480_object);
			if(var_479_bool != 0) {
				var_481_bool = 0; var_482_object = Obj();
				var_482_object = var_1_object;
				func_8834(var_482_object);
				if(var_481_bool != 0) {
					var_478_bool = 1;
				}
			}
			if(var_478_bool != 0) {
				var_483_bool = 0; var_484_object = Obj();
				var_484_object = var_1_object;
				func_8822(var_484_object);
				var_485_bool = var_483_bool == 0; //@nz
				if(var_485_bool != 0) {
					var_477_bool = 1;
				}
			}
			if(var_477_bool != 0) {
				@@@var_0_object:AddReply((int)518072, (int)19206, (int)19205);
			}
			var_489_bool = 0;
			var_489_bool = 0;
			var_490_bool = 0; var_491_object = Obj();
			var_491_object = var_1_object;
			func_8634(var_491_object);
			if(var_490_bool != 0) {
				var_496_bool = 0; var_497_object = Obj();
				var_497_object = var_1_object;
				func_8646(var_497_object);
				if(var_496_bool != 0) {
					var_489_bool = 1;
				}
			}
			if(var_489_bool != 0) {
				@@@var_0_object:AddReply((int)527089, (int)28388, (int)28387);
			}
			var_505_bool = 0;
			var_505_bool = 0;
			var_506_bool = 0;
			var_506_bool = 0;
			var_507_bool = 0; var_508_object = Obj();
			var_508_object = var_1_object;
			func_8976(var_508_object);
			if(var_507_bool != 0) {
				var_513_bool = 0; var_514_object = Obj();
				var_514_object = var_1_object;
				func_8964(var_514_object);
				var_519_bool = var_513_bool == 0; //@nz
				if(var_519_bool != 0) {
					var_506_bool = 1;
				}
			}
			if(var_506_bool != 0) {
				var_520_bool = 0; var_521_object = Obj();
				var_521_object = var_1_object;
				func_8952(var_521_object);
				var_526_bool = var_520_bool == 0; //@nz
				if(var_526_bool != 0) {
					var_505_bool = 1;
				}
			}
			if(var_505_bool != 0) {
				@@@var_0_object:AddReply((int)520049, (int)21230, (int)21229);
			}
			@@@var_0_object:AddReply((int)517989, (int)-1, (int)19122);
			return 0;
		}
		var_534_bool = var_71_bool == (int)21230;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_286(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)520050);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520051, (int)21232, (int)21231);
			@@@var_0_object:AddReply((int)520056, (int)21237, (int)21236);
			return 0;
		}
		var_544_bool = var_71_bool == (int)21237;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_286(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)520057);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520058, (int)-1, (int)21238);
			@@@var_0_object:AddReply((int)527066, (int)-1, (int)28361);
			return 0;
		}
		var_554_bool = var_71_bool == (int)21232;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_286(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)520052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520053, (int)21234, (int)21233);
			return 0;
		}
		var_561_bool = var_71_bool == (int)21234;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_286(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)520054);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520055, (int)-1, (int)21235);
			return 0;
		}
		var_568_bool = var_71_bool == (int)28388;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527090);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527091, (int)28392, (int)28389);
			return 0;
		}
		var_575_bool = var_71_bool == (int)28392;
		if(var_575_bool != 0) {
			var_576_string = "";
			func_286(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)527094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527095, (int)28394, (int)28393);
			return 0;
		}
		var_582_bool = var_71_bool == (int)28394;
		if(var_582_bool != 0) {
			var_583_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527096);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527097, (int)28390, (int)28395);
			return 0;
		}
		var_589_bool = var_71_bool == (int)28390;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527092);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527093, (int)28396, (int)28391);
			return 0;
		}
		var_596_bool = var_71_bool == (int)28396;
		if(var_596_bool != 0) {
			var_597_string = "";
			func_286(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)527098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527099, (int)28398, (int)28397);
			return 0;
		}
		var_603_bool = var_71_bool == (int)28398;
		if(var_603_bool != 0) {
			var_604_string = "";
			func_286(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)527100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527101, (int)-1, (int)28399);
			return 0;
		}
		var_610_bool = var_71_bool == (int)19206;
		if(var_610_bool != 0) {
			var_611_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519719, (int)20879, (int)20878);
			@@@var_0_object:AddReply((int)527045, (int)20879, (int)28336);
			@@@var_0_object:AddReply((int)527046, (int)20879, (int)28337);
			return 0;
		}
		var_623_bool = var_71_bool == (int)20879;
		if(var_623_bool != 0) {
			var_624_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519721, (int)20881, (int)20880);
			return 0;
		}
		var_630_bool = var_71_bool == (int)20881;
		if(var_630_bool != 0) {
			var_631_string = "";
			func_286(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)519722);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519723, (int)20883, (int)20882);
			@@@var_0_object:AddReply((int)518074, (int)-1, (int)19207);
			return 0;
		}
		var_640_bool = var_71_bool == (int)20883;
		if(var_640_bool != 0) {
			var_641_string = "";
			func_286(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)519724);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519727, (int)-1, (int)20886);
			@@@var_0_object:AddReply((int)519730, (int)-1, (int)20889);
			return 0;
		}
		var_650_bool = var_71_bool == (int)20872;
		if(var_650_bool != 0) {
			var_651_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519713);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519714, (int)20874, (int)20873);
			return 0;
		}
		var_657_bool = var_71_bool == (int)20874;
		if(var_657_bool != 0) {
			var_658_string = "";
			func_286(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)519715);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519716, (int)20876, (int)20875);
			return 0;
		}
		var_664_bool = var_71_bool == (int)20876;
		if(var_664_bool != 0) {
			var_665_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519717);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519718, (int)19203, (int)20877);
			return 0;
		}
		var_671_bool = var_71_bool == (int)19203;
		if(var_671_bool != 0) {
			var_672_string = "";
			func_286(var_72_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)518070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518071, (int)-1, (int)19204);
			return 0;
		}
		var_678_bool = var_71_bool == (int)19209;
		if(var_678_bool != 0) {
			var_679_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518077, (int)-1, (int)19210);
			return 0;
		}
		var_685_bool = var_71_bool == (int)28348;
		if(var_685_bool != 0) {
			var_686_string = "";
			func_286(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)527054);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527055, (int)28350, (int)28349);
			return 0;
		}
		var_692_bool = var_71_bool == (int)28350;
		if(var_692_bool != 0) {
			var_693_string = "";
			func_286(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)527056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527057, (int)28355, (int)28351);
			@@@var_0_object:AddReply((int)527060, (int)28355, (int)28354);
			return 0;
		}
		var_702_bool = var_71_bool == (int)28355;
		if(var_702_bool != 0) {
			var_703_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527062, (int)28352, (int)28356);
			return 0;
		}
		var_709_bool = var_71_bool == (int)28352;
		if(var_709_bool != 0) {
			var_710_string = "";
			func_286(var_72_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)527058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519731, (int)20891, (int)20890);
			var_715_bool = 0;
			var_715_bool = 0;
			var_716_bool = 0;
			var_716_bool = 0;
			var_717_bool = 0; var_718_object = Obj();
			var_718_object = var_1_object;
			func_8858(var_718_object);
			var_723_bool = var_717_bool == 0; //@nz
			if(var_723_bool != 0) {
				var_724_bool = 0; var_725_object = Obj();
				var_725_object = var_1_object;
				func_8822(var_725_object);
				var_726_bool = var_724_bool == 0; //@nz
				if(var_726_bool != 0) {
					var_716_bool = 1;
				}
			}
			if(var_716_bool != 0) {
				var_727_bool = 0; var_728_object = Obj();
				var_728_object = var_1_object;
				func_8834(var_728_object);
				var_729_bool = var_727_bool == 0; //@nz
				if(var_729_bool != 0) {
					var_715_bool = 1;
				}
			}
			if(var_715_bool != 0) {
				@@@var_0_object:AddReply((int)517969, (int)19102, (int)19101);
			}
			var_733_bool = 0; var_734_object = Obj();
			var_734_object = var_1_object;
			func_8822(var_734_object);
			if(var_733_bool != 0) {
				@@@var_0_object:AddReply((int)518080, (int)19213, (int)19212);
			}
			var_738_bool = 0;
			var_738_bool = 0;
			var_739_bool = 0; var_740_object = Obj();
			var_740_object = var_1_object;
			func_8834(var_740_object);
			if(var_739_bool != 0) {
				var_741_bool = 0; var_742_object = Obj();
				var_742_object = var_1_object;
				func_8822(var_742_object);
				var_743_bool = var_741_bool == 0; //@nz
				if(var_743_bool != 0) {
					var_738_bool = 1;
				}
			}
			if(var_738_bool != 0) {
				@@@var_0_object:AddReply((int)518083, (int)19216, (int)19215);
			}
			return 0;
		}
		var_748_bool = var_71_bool == (int)19216;
		if(var_748_bool != 0) {
			var_749_string = "";
			func_286(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)518084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518085, (int)-1, (int)19217);
			@@@var_0_object:AddReply((int)519726, (int)-1, (int)20885);
			return 0;
		}
		var_758_bool = var_71_bool == (int)19213;
		if(var_758_bool != 0) {
			var_759_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519728, (int)20888, (int)20887);
			return 0;
		}
		var_765_bool = var_71_bool == (int)20888;
		if(var_765_bool != 0) {
			var_766_string = "";
			func_286(var_72_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)519729);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518082, (int)-1, (int)19214);
			@@@var_0_object:AddReply((int)527065, (int)-1, (int)28360);
			return 0;
		}
		var_775_bool = var_71_bool == (int)19102;
		if(var_775_bool != 0) {
			var_776_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)517970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517971, (int)19100, (int)19103);
			return 0;
		}
		var_782_bool = var_71_bool == (int)20891;
		if(var_782_bool != 0) {
			var_783_string = "";
			func_286(var_72_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)519732);
			@@@var_0_object:ClearReplies();
			var_785_bool = 0;
			var_785_bool = 0;
			var_786_bool = 0;
			var_786_bool = 0;
			var_787_bool = 0; var_788_object = Obj();
			var_788_object = var_1_object;
			func_8846(var_788_object);
			if(var_787_bool != 0) {
				var_789_bool = 0; var_790_object = Obj();
				var_790_object = var_1_object;
				func_8822(var_790_object);
				var_791_bool = var_789_bool == 0; //@nz
				if(var_791_bool != 0) {
					var_786_bool = 1;
				}
			}
			if(var_786_bool != 0) {
				var_792_bool = 0; var_793_object = Obj();
				var_793_object = var_1_object;
				func_8834(var_793_object);
				var_794_bool = var_792_bool == 0; //@nz
				if(var_794_bool != 0) {
					var_785_bool = 1;
				}
			}
			if(var_785_bool != 0) {
				@@@var_0_object:AddReply((int)517967, (int)19100, (int)19099);
			}
			@@@var_0_object:AddReply((int)519733, (int)20894, (int)20892);
			@@@var_0_object:AddReply((int)519734, (int)20897, (int)20893);
			return 0;
		}
		var_805_bool = var_71_bool == (int)20897;
		if(var_805_bool != 0) {
			var_806_string = "";
			func_286(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)519737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519738, (int)20899, (int)20898);
			return 0;
		}
		var_812_bool = var_71_bool == (int)20899;
		if(var_812_bool != 0) {
			var_813_string = "";
			func_286(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)519739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519740, (int)19100, (int)20900);
			return 0;
		}
		var_819_bool = var_71_bool == (int)20894;
		if(var_819_bool != 0) {
			var_820_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519735);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519736, (int)19100, (int)20895);
			return 0;
		}
		var_826_bool = var_71_bool == (int)19100;
		if(var_826_bool != 0) {
			var_827_string = "";
			func_286(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)517968);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517972, (int)19118, (int)19105);
			return 0;
		}
		var_833_bool = var_71_bool == (int)19118;
		if(var_833_bool != 0) {
			var_834_string = "";
			func_286(var_72_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)517985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517986, (int)-1, (int)19119);
			@@@var_0_object:AddReply((int)517987, (int)-1, (int)19120);
			return 0;
		}
		var_3_string = true;
		var_842_bool = 0;
		func_9419(var_842_bool);
		if(var_842_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x135";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)20624;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8092();
		}
		var_82_bool = var_71_bool == (int)19378;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_1611(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518269);
			@@@var_0_object:ClearReplies();
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_8988(var_102_object);
			if(var_101_bool != 0) {
				@@@var_0_object:AddReply((int)519454, (int)20625, (int)20624);
			}
			@@@var_0_object:AddReply((int)518270, (int)-1, (int)19379);
			return 0;
		}
		var_116_bool = var_71_bool == (int)20625;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_1611(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)519455);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519456, (int)20627, (int)20626);
			@@@var_0_object:AddReply((int)519458, (int)20627, (int)20628);
			return 0;
		}
		var_126_bool = var_71_bool == (int)20627;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_1611(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)519457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519459, (int)20631, (int)20630);
			@@@var_0_object:AddReply((int)527748, (int)29106, (int)29105);
			return 0;
		}
		var_136_bool = var_71_bool == (int)29106;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_1611(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)527749);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527750, (int)-1, (int)29107);
			return 0;
		}
		var_143_bool = var_71_bool == (int)20631;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_1611(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)519460);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519461, (int)-1, (int)20632);
			@@@var_0_object:AddReply((int)519462, (int)-1, (int)20633);
			return 0;
		}
		var_3_string = true;
		var_152_bool = 0;
		func_9419(var_152_bool);
		if(var_152_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x662";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)19510;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8579(var_78_object);
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_8251();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_8534();
		}
		var_162_bool = var_72_cvector == (int)20295;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_8579(var_164_object);
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_8251();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_8534();
		}
		var_170_bool = var_72_cvector == (int)20289;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_8534();
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_8579(var_174_object);
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_8251();
		}
		var_178_bool = var_72_cvector == (int)20293;
		if(var_178_bool != 0) {
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_8251();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_8579(var_182_object);
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_object;
			func_8534();
		}
		var_186_bool = var_72_cvector == (int)20286;
		if(var_186_bool != 0) {
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_object;
			func_8534();
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_8396(var_190_object);
		}
		var_230_bool = var_72_cvector == (int)19512;
		if(var_230_bool != 0) {
			var_231_object = Obj(); var_232_object = Obj();
			var_231_object = var_1_object;
			var_232_object = var_0_object;
			func_8044();
			var_235_object = Obj(); var_236_object = Obj();
			var_235_object = var_1_object;
			var_236_object = var_0_object;
			func_8301();
		}
		var_240_bool = var_72_cvector == (int)20309;
		if(var_240_bool != 0) {
			var_241_object = Obj(); var_242_object = Obj();
			var_241_object = var_1_object;
			var_242_object = var_0_object;
			func_8005();
			var_269_object = Obj(); var_270_object = Obj();
			var_269_object = var_1_object;
			var_270_object = var_0_object;
			func_8050(var_270_object);
		}
		var_296_bool = var_72_cvector == (int)19519;
		if(var_296_bool != 0) {
			var_297_object = Obj(); var_298_object = Obj();
			var_297_object = var_1_object;
			var_298_object = var_0_object;
			func_8005();
			var_299_object = Obj(); var_300_object = Obj();
			var_299_object = var_1_object;
			var_300_object = var_0_object;
			func_8050(var_300_object);
		}
		var_302_bool = var_72_cvector == (int)19522;
		if(var_302_bool != 0) {
			var_303_object = Obj(); var_304_object = Obj();
			var_303_object = var_1_object;
			var_304_object = var_0_object;
			func_8031(var_304_object);
			var_319_object = Obj(); var_320_object = Obj();
			var_319_object = var_1_object;
			var_320_object = var_0_object;
			func_8351();
		}
		var_324_bool = var_71_bool == (int)19509;
		if(var_324_bool != 0) {
			var_325_bool = 0; var_326_object = Obj();
			var_326_object = var_1_object;
			func_8882(var_326_object);
			if(var_325_bool != 0) {
				var_333_object = Obj(); var_334_object = Obj();
				var_333_object = var_1_object;
				var_334_object = var_0_object;
				func_8573();
				var_337_string = "";
				func_2022(var_72_cvector, "Triumph");
				@@@var_0_object:SetMessage((int)518396);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)519128, (int)20262, (int)20261);
				@@@var_0_object:AddReply((int)519126, (int)20273, (int)20259);
				@@@var_0_object:AddReply((int)519136, (int)20270, (int)20269);
				return 0;
			}
			var_364_string = "";
			func_2022(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)518398);
			@@@var_0_object:ClearReplies();
			var_366_bool = 0;
			var_366_bool = 0;
			var_367_bool = 0; var_368_object = Obj();
			var_368_object = var_1_object;
			func_8906(var_368_object);
			if(var_367_bool != 0) {
				var_373_bool = 0; var_374_object = Obj();
				var_374_object = var_1_object;
				func_8940(var_374_object);
				if(var_373_bool != 0) {
					var_366_bool = 1;
				}
			}
			if(var_366_bool != 0) {
				@@@var_0_object:AddReply((int)518399, (int)20296, (int)19512);
			}
			var_382_bool = 0;
			var_382_bool = 0;
			var_383_bool = 0; var_384_object = Obj();
			var_384_object = var_1_object;
			func_8906(var_384_object);
			if(var_383_bool != 0) {
				var_385_bool = 0; var_386_object = Obj();
				var_386_object = var_1_object;
				func_8940(var_386_object);
				var_387_bool = var_385_bool == 0; //@nz
				if(var_387_bool != 0) {
					var_382_bool = 1;
				}
			}
			if(var_382_bool != 0) {
				@@@var_0_object:AddReply((int)518404, (int)19518, (int)19517);
			}
			var_391_bool = 0;
			var_391_bool = 0;
			var_392_bool = 0; var_393_object = Obj();
			var_393_object = var_1_object;
			func_8918(var_393_object);
			if(var_392_bool != 0) {
				var_398_bool = 0; var_399_object = Obj();
				var_399_object = var_1_object;
				func_8930(var_398_bool, var_399_object);
				if(var_398_bool != 0) {
					var_391_bool = 1;
				}
			}
			if(var_391_bool != 0) {
				@@@var_0_object:AddReply((int)518407, (int)19521, (int)19520);
			}
			var_409_bool = 0;
			var_409_bool = 0;
			var_410_bool = 0; var_411_object = Obj();
			var_411_object = var_1_object;
			func_8918(var_411_object);
			if(var_410_bool != 0) {
				var_412_bool = 0; var_413_object = Obj();
				var_413_object = var_1_object;
				func_8930(var_412_bool, var_413_object);
				var_414_bool = var_412_bool == 0; //@nz
				if(var_414_bool != 0) {
					var_409_bool = 1;
				}
			}
			if(var_409_bool != 0) {
				@@@var_0_object:AddReply((int)519672, (int)20837, (int)20836);
			}
			@@@var_0_object:AddReply((int)518400, (int)-1, (int)19513);
			return 0;
		}
		var_422_bool = var_71_bool == (int)20837;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519673);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519674, (int)20840, (int)20838);
			@@@var_0_object:AddReply((int)519675, (int)-1, (int)20839);
			return 0;
		}
		var_432_bool = var_71_bool == (int)20840;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_2022(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)519676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519678, (int)-1, (int)20842);
			return 0;
		}
		var_439_bool = var_71_bool == (int)19521;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518408);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518409, (int)-1, (int)19522);
			return 0;
		}
		var_446_bool = var_71_bool == (int)19518;
		if(var_446_bool != 0) {
			var_447_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518405);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518406, (int)-1, (int)19519);
			return 0;
		}
		var_453_bool = var_71_bool == (int)20296;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519157);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519158, (int)20298, (int)20297);
			return 0;
		}
		var_460_bool = var_71_bool == (int)20298;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519159);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519160, (int)20303, (int)20299);
			@@@var_0_object:AddReply((int)519161, (int)20301, (int)20300);
			return 0;
		}
		var_470_bool = var_71_bool == (int)20301;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519163, (int)20303, (int)20302);
			return 0;
		}
		var_477_bool = var_71_bool == (int)20303;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519164);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519165, (int)20306, (int)20305);
			@@@var_0_object:AddReply((int)519171, (int)20306, (int)20311);
			return 0;
		}
		var_487_bool = var_71_bool == (int)20306;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519166);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519174, (int)20316, (int)20315);
			return 0;
		}
		var_494_bool = var_71_bool == (int)20316;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_2022(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)519175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519167, (int)20308, (int)20307);
			@@@var_0_object:AddReply((int)527866, (int)20308, (int)29212);
			return 0;
		}
		var_504_bool = var_71_bool == (int)20308;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_2022(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)519168);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519169, (int)-1, (int)20309);
			@@@var_0_object:AddReply((int)519170, (int)-1, (int)20310);
			return 0;
		}
		var_514_bool = var_71_bool == (int)20270;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_2022(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)519137);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519138, (int)20262, (int)20271);
			@@@var_0_object:AddReply((int)519145, (int)20281, (int)20280);
			return 0;
		}
		var_524_bool = var_71_bool == (int)20281;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_2022(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)519146);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519147, (int)20262, (int)20282);
			return 0;
		}
		var_531_bool = var_71_bool == (int)20273;
		if(var_531_bool != 0) {
			var_532_string = "";
			func_2022(var_72_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)519139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519140, (int)20276, (int)20274);
			@@@var_0_object:AddReply((int)519141, (int)20276, (int)20275);
			return 0;
		}
		var_541_bool = var_71_bool == (int)20276;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519142);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519143, (int)20262, (int)20278);
			@@@var_0_object:AddReply((int)519144, (int)20270, (int)20279);
			return 0;
		}
		var_551_bool = var_71_bool == (int)20262;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_2022(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)519129);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519130, (int)20267, (int)20263);
			var_557_bool = 0; var_558_object = Obj();
			var_558_object = var_1_object;
			func_8894(var_558_object);
			if(var_557_bool != 0) {
				@@@var_0_object:AddReply((int)519131, (int)20265, (int)20264);
			}
			return 0;
		}
		var_567_bool = var_71_bool == (int)20265;
		if(var_567_bool != 0) {
			var_568_string = "";
			func_2022(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)519132);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519133, (int)20260, (int)20266);
			return 0;
		}
		var_574_bool = var_71_bool == (int)20267;
		if(var_574_bool != 0) {
			var_575_string = "";
			func_2022(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)519134);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519135, (int)20260, (int)20268);
			@@@var_0_object:AddReply((int)519148, (int)-1, (int)20286);
			return 0;
		}
		var_584_bool = var_71_bool == (int)20260;
		if(var_584_bool != 0) {
			var_585_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519127);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519149, (int)20288, (int)20287);
			@@@var_0_object:AddReply((int)519151, (int)-1, (int)20289);
			@@@var_0_object:AddReply((int)519152, (int)20291, (int)20290);
			return 0;
		}
		var_597_bool = var_71_bool == (int)20291;
		if(var_597_bool != 0) {
			var_598_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519153);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519154, (int)20288, (int)20292);
			@@@var_0_object:AddReply((int)519155, (int)-1, (int)20293);
			return 0;
		}
		var_607_bool = var_71_bool == (int)20288;
		if(var_607_bool != 0) {
			var_608_string = "";
			func_2022(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519150);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518397, (int)-1, (int)19510);
			@@@var_0_object:AddReply((int)519156, (int)-1, (int)20295);
			return 0;
		}
		var_3_string = true;
		var_616_bool = 0;
		func_9419(var_616_bool);
		if(var_616_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7fd";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_71_bool == (int)21990;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_2923(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520776);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520777, (int)21992, (int)21991);
			@@@var_0_object:AddReply((int)520780, (int)21995, (int)21994);
			return 0;
		}
		var_102_bool = var_71_bool == (int)21995;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_2923(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520782, (int)-1, (int)21996);
			return 0;
		}
		var_109_bool = var_71_bool == (int)21992;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_2923(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520778);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520779, (int)-1, (int)21993);
			return 0;
		}
		var_3_string = true;
		var_115_bool = 0;
		func_9419(var_115_bool);
		if(var_115_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb82";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)29248;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8176(var_78_object);
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_8385(var_109_object);
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_8489(var_133_object);
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_8403(var_139_object);
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_8251();
		}
		var_149_bool = var_72_cvector == (int)29256;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_8176(var_151_object);
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_8351();
		}
		var_157_bool = var_72_cvector == (int)29255;
		if(var_157_bool != 0) {
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_8164();
		}
		var_179_bool = var_72_cvector == (int)22027;
		if(var_179_bool != 0) {
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_8098();
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_object;
			func_8363();
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_8109(var_198_object);
		}
		var_215_bool = var_72_cvector == (int)22030;
		if(var_215_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_8098();
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_8264(var_219_object);
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_8351();
		}
		var_227_bool = var_72_cvector == (int)29242;
		if(var_227_bool != 0) {
			var_228_object = Obj(); var_229_object = Obj();
			var_228_object = var_1_object;
			var_229_object = var_0_object;
			func_8164();
		}
		var_231_bool = var_72_cvector == (int)29245;
		if(var_231_bool != 0) {
			var_232_object = Obj(); var_233_object = Obj();
			var_232_object = var_1_object;
			var_233_object = var_0_object;
			func_8176(var_233_object);
			var_234_object = Obj(); var_235_object = Obj();
			var_234_object = var_1_object;
			var_235_object = var_0_object;
			func_8340(var_235_object);
			var_240_object = Obj(); var_241_object = Obj();
			var_240_object = var_1_object;
			var_241_object = var_0_object;
			func_8489(var_241_object);
			var_242_object = Obj(); var_243_object = Obj();
			var_242_object = var_1_object;
			var_243_object = var_0_object;
			func_8403(var_243_object);
			var_244_object = Obj(); var_245_object = Obj();
			var_244_object = var_1_object;
			var_245_object = var_0_object;
			func_8251();
		}
		var_247_bool = var_71_bool == (int)29237;
		if(var_247_bool != 0) {
			var_248_bool = 0; var_249_object = Obj();
			var_249_object = var_1_object;
			func_8658(var_249_object);
			if(var_248_bool != 0) {
				var_256_object = Obj(); var_257_object = Obj();
				var_256_object = var_1_object;
				var_257_object = var_0_object;
				func_8158();
				var_260_string = "";
				func_3232(var_72_cvector, "Triumph");
				@@@var_0_object:SetMessage((int)527890);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)527891, (int)29249, (int)29238);
				@@@var_0_object:AddReply((int)527914, (int)29263, (int)29262);
				return 0;
			}
			var_284_object = Obj(); var_285_object = Obj();
			var_284_object = var_1_object;
			var_285_object = var_0_object;
			func_8189();
			var_288_string = "";
			func_3232(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)520806);
			@@@var_0_object:ClearReplies();
			var_290_bool = 0; var_291_object = Obj();
			var_291_object = var_1_object;
			func_9012(var_290_bool, var_291_object);
			var_302_bool = var_290_bool == 0; //@nz
			if(var_302_bool != 0) {
				@@@var_0_object:AddReply((int)520807, (int)22026, (int)22024);
			}
			var_306_bool = 0; var_307_object = Obj();
			var_307_object = var_1_object;
			func_8670(var_307_object);
			if(var_306_bool != 0) {
				@@@var_0_object:AddReply((int)527893, (int)29241, (int)29240);
			}
			var_315_bool = 0;
			var_315_bool = 0;
			var_316_bool = 0; var_317_object = Obj();
			var_317_object = var_1_object;
			func_8682(var_317_object);
			if(var_316_bool != 0) {
				var_322_bool = 0; var_323_object = Obj();
				var_323_object = var_1_object;
				func_8694(var_322_bool, var_323_object);
				if(var_322_bool != 0) {
					var_315_bool = 1;
				}
			}
			if(var_315_bool != 0) {
				@@@var_0_object:AddReply((int)527896, (int)29244, (int)29243);
			}
			@@@var_0_object:AddReply((int)520808, (int)-1, (int)22025);
			return 0;
		}
		var_337_bool = var_71_bool == (int)29244;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_3232(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)527897);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527898, (int)-1, (int)29245);
			return 0;
		}
		var_344_bool = var_71_bool == (int)29241;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_3232(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)527894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527895, (int)-1, (int)29242);
			return 0;
		}
		var_351_bool = var_71_bool == (int)22026;
		if(var_351_bool != 0) {
			var_352_bool = 0; var_353_object = Obj();
			var_353_object = var_1_object;
			func_9000(var_353_object);
			if(var_352_bool != 0) {
				var_358_string = "";
				func_3232(var_72_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520809);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)527881, (int)29229, (int)29228);
				return 0;
			}
			var_363_bool = 0; var_364_object = Obj();
			var_364_object = var_1_object;
			func_9000(var_364_object);
			var_365_bool = var_363_bool == 0; //@nz
			if(var_365_bool != 0) {
				var_366_string = "";
				func_3232(var_72_cvector, "Triumph");
				@@@var_0_object:SetMessage((int)520812);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)527886, (int)29234, (int)29233);
				return 0;
			}
		}
		var_372_bool = var_71_bool == (int)29234;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_3232(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)527887);
			@@@var_0_object:ClearReplies();
			var_375_bool = 0; var_376_object = Obj();
			var_376_object = var_1_object;
			func_8738(var_375_bool, var_376_object);
			if(var_375_bool != 0) {
				@@@var_0_object:AddReply((int)520813, (int)-1, (int)22030);
			}
			@@@var_0_object:AddReply((int)527889, (int)-1, (int)29236);
			return 0;
		}
		var_390_bool = var_71_bool == (int)29229;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_3232(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)527882);
			@@@var_0_object:ClearReplies();
			var_393_bool = 0; var_394_object = Obj();
			var_394_object = var_1_object;
			func_9022(var_393_bool, var_394_object);
			if(var_393_bool != 0) {
				@@@var_0_object:AddReply((int)520810, (int)-1, (int)22027);
			}
			@@@var_0_object:AddReply((int)520811, (int)-1, (int)22028);
			return 0;
		}
		var_408_bool = var_71_bool == (int)29263;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_3232(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)527915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527916, (int)29249, (int)29264);
			return 0;
		}
		var_415_bool = var_71_bool == (int)29249;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_3232(var_72_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)527902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527903, (int)29251, (int)29250);
			@@@var_0_object:AddReply((int)527907, (int)-1, (int)29254);
			return 0;
		}
		var_425_bool = var_71_bool == (int)29251;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_3232(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)527904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527905, (int)29253, (int)29252);
			@@@var_0_object:AddReply((int)527892, (int)29253, (int)29239);
			return 0;
		}
		var_435_bool = var_71_bool == (int)29253;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_3232(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)527906);
			@@@var_0_object:ClearReplies();
			var_438_bool = 0; var_439_object = Obj();
			var_439_object = var_1_object;
			func_8694(var_438_bool, var_439_object);
			if(var_438_bool != 0) {
				@@@var_0_object:AddReply((int)527899, (int)29247, (int)29246);
			}
			@@@var_0_object:AddReply((int)527908, (int)-1, (int)29255);
			@@@var_0_object:AddReply((int)527910, (int)-1, (int)29258);
			return 0;
		}
		var_450_bool = var_71_bool == (int)29247;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_3232(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527900);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527901, (int)-1, (int)29248);
			@@@var_0_object:AddReply((int)527909, (int)-1, (int)29256);
			return 0;
		}
		var_3_string = true;
		var_459_bool = 0;
		func_9419(var_459_bool);
		if(var_459_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcb7";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)22037;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8098();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_8257(var_91_object);
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_8363();
		}
		var_115_bool = var_72_cvector == (int)22040;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_8098();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_8351();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_8270(var_123_object);
		}
		var_129_bool = var_71_bool == (int)22034;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_3888(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520817);
			@@@var_0_object:ClearReplies();
			var_148_bool = 0; var_149_object = Obj();
			var_149_object = var_1_object;
			func_9012(var_148_bool, var_149_object);
			var_160_bool = var_148_bool == 0; //@nz
			if(var_160_bool != 0) {
				@@@var_0_object:AddReply((int)520818, (int)22036, (int)22035);
			}
			@@@var_0_object:AddReply((int)520825, (int)-1, (int)22042);
			return 0;
		}
		var_168_bool = var_71_bool == (int)22036;
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_170_object = var_1_object;
			func_9000(var_170_object);
			if(var_169_bool != 0) {
				var_177_string = "";
				func_3888(var_72_cvector, "Pride");
				@@@var_0_object:SetMessage((int)520819);
				@@@var_0_object:ClearReplies();
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_object;
				func_8728(var_179_bool, var_180_object);
				if(var_179_bool != 0) {
					@@@var_0_object:AddReply((int)520820, (int)-1, (int)22037);
				}
				@@@var_0_object:AddReply((int)520821, (int)-1, (int)22038);
				return 0;
			}
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_9000(var_194_object);
			var_195_bool = var_193_bool == 0; //@nz
			if(var_195_bool != 0) {
				var_196_string = "";
				func_3888(var_72_cvector, "Triumph");
				@@@var_0_object:SetMessage((int)520822);
				@@@var_0_object:ClearReplies();
				var_198_bool = 0; var_199_object = Obj();
				var_199_object = var_1_object;
				func_8748(var_198_bool, var_199_object);
				if(var_198_bool != 0) {
					@@@var_0_object:AddReply((int)520823, (int)-1, (int)22040);
				}
				@@@var_0_object:AddReply((int)520824, (int)-1, (int)22041);
				return 0;
			}
		}
		var_3_string = true;
		var_212_bool = 0;
		func_9419(var_212_bool);
		if(var_212_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf47";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)22047;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8098();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_8109(var_91_object);
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_8363();
		}
		var_115_bool = var_72_cvector == (int)22050;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_8098();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_8270(var_119_object);
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_8351();
		}
		var_129_bool = var_71_bool == (int)22044;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_4203(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520827);
			@@@var_0_object:ClearReplies();
			var_148_bool = 0; var_149_object = Obj();
			var_149_object = var_1_object;
			func_9012(var_148_bool, var_149_object);
			var_160_bool = var_148_bool == 0; //@nz
			if(var_160_bool != 0) {
				@@@var_0_object:AddReply((int)520828, (int)22046, (int)22045);
			}
			@@@var_0_object:AddReply((int)520835, (int)-1, (int)22052);
			return 0;
		}
		var_168_bool = var_71_bool == (int)22046;
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_170_object = var_1_object;
			func_9000(var_170_object);
			if(var_169_bool != 0) {
				var_177_string = "";
				func_4203(var_72_cvector, "Smile");
				@@@var_0_object:SetMessage((int)520829);
				@@@var_0_object:ClearReplies();
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_object;
				func_9022(var_179_bool, var_180_object);
				if(var_179_bool != 0) {
					@@@var_0_object:AddReply((int)520830, (int)-1, (int)22047);
				}
				@@@var_0_object:AddReply((int)520831, (int)-1, (int)22048);
				return 0;
			}
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_9000(var_194_object);
			var_195_bool = var_193_bool == 0; //@nz
			if(var_195_bool != 0) {
				var_196_string = "";
				func_4203(var_72_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520832);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528426, (int)29811, (int)29810);
				return 0;
			}
		}
		var_202_bool = var_71_bool == (int)29811;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_4203(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)528427);
			@@@var_0_object:ClearReplies();
			var_205_bool = 0; var_206_object = Obj();
			var_206_object = var_1_object;
			func_8748(var_205_bool, var_206_object);
			if(var_205_bool != 0) {
				@@@var_0_object:AddReply((int)520833, (int)-1, (int)22050);
			}
			@@@var_0_object:AddReply((int)520834, (int)-1, (int)22051);
			return 0;
		}
		var_3_string = true;
		var_219_bool = 0;
		func_9419(var_219_bool);
		if(var_219_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1082";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)22057;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8098();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_8363();
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_8276(var_95_object);
		}
		var_115_bool = var_72_cvector == (int)22060;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_8098();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_8283(var_119_object);
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_8351();
		}
		var_129_bool = var_71_bool == (int)22054;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_4536(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520837);
			@@@var_0_object:ClearReplies();
			var_148_bool = 0; var_149_object = Obj();
			var_149_object = var_1_object;
			func_9012(var_148_bool, var_149_object);
			var_160_bool = var_148_bool == 0; //@nz
			if(var_160_bool != 0) {
				@@@var_0_object:AddReply((int)520838, (int)25375, (int)22055);
			}
			@@@var_0_object:AddReply((int)520845, (int)-1, (int)22062);
			return 0;
		}
		var_168_bool = var_71_bool == (int)25375;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_4536(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)524076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524077, (int)25377, (int)25376);
			@@@var_0_object:AddReply((int)524080, (int)25377, (int)25379);
			return 0;
		}
		var_178_bool = var_71_bool == (int)25377;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_4536(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)524078);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524079, (int)22056, (int)25378);
			return 0;
		}
		var_185_bool = var_71_bool == (int)22056;
		if(var_185_bool != 0) {
			var_186_bool = 0; var_187_object = Obj();
			var_187_object = var_1_object;
			func_9000(var_187_object);
			if(var_186_bool != 0) {
				var_194_string = "";
				func_4536(var_72_cvector, "Pride");
				@@@var_0_object:SetMessage((int)520839);
				@@@var_0_object:ClearReplies();
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_8758(var_196_bool, var_197_object);
				if(var_196_bool != 0) {
					@@@var_0_object:AddReply((int)520840, (int)-1, (int)22057);
				}
				@@@var_0_object:AddReply((int)520841, (int)-1, (int)22058);
				return 0;
			}
			var_210_bool = 0; var_211_object = Obj();
			var_211_object = var_1_object;
			func_9000(var_211_object);
			var_212_bool = var_210_bool == 0; //@nz
			if(var_212_bool != 0) {
				var_213_string = "";
				func_4536(var_72_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520842);
				@@@var_0_object:ClearReplies();
				var_215_bool = 0; var_216_object = Obj();
				var_216_object = var_1_object;
				func_8768(var_215_bool, var_216_object);
				if(var_215_bool != 0) {
					@@@var_0_object:AddReply((int)520843, (int)-1, (int)22060);
				}
				@@@var_0_object:AddReply((int)520844, (int)-1, (int)22061);
				return 0;
			}
		}
		var_3_string = true;
		var_229_bool = 0;
		func_9419(var_229_bool);
		if(var_229_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x11cf";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)22067;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8098();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_8363();
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_8145(var_95_object);
		}
		var_115_bool = var_72_cvector == (int)22070;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_8098();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_8351();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_8283(var_123_object);
		}
		var_129_bool = var_72_cvector == (int)22576;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_8116();
		}
		var_135_bool = var_72_cvector == (int)22578;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_8122();
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_8357();
		}
		var_159_bool = var_71_bool == (int)22064;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_4911(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520847);
			@@@var_0_object:ClearReplies();
			var_178_bool = 0; var_179_object = Obj();
			var_179_object = var_1_object;
			func_9012(var_178_bool, var_179_object);
			var_190_bool = var_178_bool == 0; //@nz
			if(var_190_bool != 0) {
				@@@var_0_object:AddReply((int)520848, (int)22066, (int)22065);
			}
			var_194_bool = 0;
			var_194_bool = 0;
			var_195_bool = 0; var_196_object = Obj();
			var_196_object = var_1_object;
			func_8600(var_196_object);
			if(var_195_bool != 0) {
				var_203_bool = 0; var_204_object = Obj();
				var_204_object = var_1_object;
				func_8612(var_204_object);
				if(var_203_bool != 0) {
					var_194_bool = 1;
				}
			}
			if(var_194_bool != 0) {
				@@@var_0_object:AddReply((int)521398, (int)25021, (int)22576);
			}
			@@@var_0_object:AddReply((int)520855, (int)-1, (int)22072);
			return 0;
		}
		var_216_bool = var_71_bool == (int)25021;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_4911(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523758);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523759, (int)25023, (int)25022);
			@@@var_0_object:AddReply((int)523767, (int)25033, (int)25030);
			@@@var_0_object:AddReply((int)523768, (int)25025, (int)25031);
			return 0;
		}
		var_229_bool = var_71_bool == (int)25033;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_4911(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)523769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523770, (int)25023, (int)25034);
			return 0;
		}
		var_236_bool = var_71_bool == (int)25023;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_4911(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523760);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521400, (int)-1, (int)22578);
			@@@var_0_object:AddReply((int)523761, (int)25025, (int)25024);
			return 0;
		}
		var_246_bool = var_71_bool == (int)25025;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_4911(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)523762);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523763, (int)25027, (int)25026);
			return 0;
		}
		var_253_bool = var_71_bool == (int)25027;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_4911(var_72_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)523764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523765, (int)-1, (int)25028);
			@@@var_0_object:AddReply((int)523766, (int)-1, (int)25029);
			return 0;
		}
		var_263_bool = var_71_bool == (int)22066;
		if(var_263_bool != 0) {
			var_264_bool = 0; var_265_object = Obj();
			var_265_object = var_1_object;
			func_9000(var_265_object);
			if(var_264_bool != 0) {
				var_270_string = "";
				func_4911(var_72_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520849);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523785, (int)25051, (int)25050);
				return 0;
			}
			var_275_bool = 0; var_276_object = Obj();
			var_276_object = var_1_object;
			func_9000(var_276_object);
			var_277_bool = var_275_bool == 0; //@nz
			if(var_277_bool != 0) {
				var_278_string = "";
				func_4911(var_72_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520852);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523787, (int)25053, (int)25052);
				return 0;
			}
		}
		var_284_bool = var_71_bool == (int)25053;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_4911(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523788);
			@@@var_0_object:ClearReplies();
			var_287_bool = 0; var_288_object = Obj();
			var_288_object = var_1_object;
			func_8768(var_287_bool, var_288_object);
			if(var_287_bool != 0) {
				@@@var_0_object:AddReply((int)520853, (int)-1, (int)22070);
			}
			@@@var_0_object:AddReply((int)520854, (int)-1, (int)22071);
			return 0;
		}
		var_302_bool = var_71_bool == (int)25051;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_4911(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523786);
			@@@var_0_object:ClearReplies();
			var_305_bool = 0; var_306_object = Obj();
			var_306_object = var_1_object;
			func_8624(var_305_bool, var_306_object);
			if(var_305_bool != 0) {
				@@@var_0_object:AddReply((int)520850, (int)-1, (int)22067);
			}
			@@@var_0_object:AddReply((int)520851, (int)-1, (int)22068);
			return 0;
		}
		var_3_string = true;
		var_319_bool = 0;
		func_9419(var_319_bool);
		if(var_319_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1346";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)22077;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8098();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_8363();
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_8145(var_95_object);
		}
		var_115_bool = var_72_cvector == (int)22080;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_8098();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_8351();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_8307(var_123_object);
		}
		var_129_bool = var_72_cvector == (int)23442;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_8351();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_8098();
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_8307(var_135_object);
		}
		var_137_bool = var_71_bool == (int)22074;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_5412(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520857);
			@@@var_0_object:ClearReplies();
			var_156_bool = 0; var_157_object = Obj();
			var_157_object = var_1_object;
			func_9012(var_156_bool, var_157_object);
			var_168_bool = var_156_bool == 0; //@nz
			if(var_168_bool != 0) {
				@@@var_0_object:AddReply((int)520858, (int)23437, (int)22075);
			}
			@@@var_0_object:AddReply((int)520865, (int)-1, (int)22082);
			return 0;
		}
		var_176_bool = var_71_bool == (int)23437;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_5412(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)522282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522283, (int)22076, (int)23438);
			return 0;
		}
		var_183_bool = var_71_bool == (int)22076;
		if(var_183_bool != 0) {
			var_184_bool = 0; var_185_object = Obj();
			var_185_object = var_1_object;
			func_9000(var_185_object);
			if(var_184_bool != 0) {
				var_192_string = "";
				func_5412(var_72_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520859);
				@@@var_0_object:ClearReplies();
				var_194_bool = 0; var_195_object = Obj();
				var_195_object = var_1_object;
				func_8624(var_194_bool, var_195_object);
				if(var_194_bool != 0) {
					@@@var_0_object:AddReply((int)520860, (int)-1, (int)22077);
				}
				@@@var_0_object:AddReply((int)520861, (int)-1, (int)22078);
				return 0;
			}
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_9000(var_209_object);
			var_210_bool = var_208_bool == 0; //@nz
			if(var_210_bool != 0) {
				var_211_string = "";
				func_5412(var_72_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520862);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522284, (int)23440, (int)23439);
				return 0;
			}
		}
		var_217_bool = var_71_bool == (int)23440;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_5412(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522285);
			@@@var_0_object:ClearReplies();
			var_220_bool = 0; var_221_object = Obj();
			var_221_object = var_1_object;
			func_8790(var_220_bool, var_221_object);
			if(var_220_bool != 0) {
				@@@var_0_object:AddReply((int)520863, (int)-1, (int)22080);
			}
			@@@var_0_object:AddReply((int)520864, (int)23441, (int)22081);
			return 0;
		}
		var_235_bool = var_71_bool == (int)23441;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_5412(var_72_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)522286);
			@@@var_0_object:ClearReplies();
			var_238_bool = 0; var_239_object = Obj();
			var_239_object = var_1_object;
			func_8790(var_238_bool, var_239_object);
			if(var_238_bool != 0) {
				@@@var_0_object:AddReply((int)522287, (int)-1, (int)23442);
			}
			@@@var_0_object:AddReply((int)522288, (int)-1, (int)23443);
			return 0;
		}
		var_3_string = true;
		var_246_bool = 0;
		func_9419(var_246_bool);
		if(var_246_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x153b";
	
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)31843;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8195();
		}
		var_105_bool = var_72_cvector == (int)22087;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_8098();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_8145(var_120_object);
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_8363();
		}
		var_144_bool = var_72_cvector == (int)23725;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_8351();
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_8098();
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_8307(var_152_object);
		}
		var_158_bool = var_72_cvector == (int)22090;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_8098();
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_8351();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_8307(var_164_object);
		}
		var_166_bool = var_71_bool == (int)22084;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_5819(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520867);
			@@@var_0_object:ClearReplies();
			var_185_bool = 0; var_186_object = Obj();
			var_186_object = var_1_object;
			func_8704(var_186_object);
			if(var_185_bool != 0) {
				@@@var_0_object:AddReply((int)530471, (int)31838, (int)31837);
			}
			var_196_bool = 0; var_197_object = Obj();
			var_197_object = var_1_object;
			func_9012(var_196_bool, var_197_object);
			var_208_bool = var_196_bool == 0; //@nz
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)520868, (int)23728, (int)22085);
			}
			@@@var_0_object:AddReply((int)520875, (int)-1, (int)22092);
			return 0;
		}
		var_216_bool = var_71_bool == (int)23728;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_5819(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522550, (int)22086, (int)23729);
			return 0;
		}
		var_223_bool = var_71_bool == (int)22086;
		if(var_223_bool != 0) {
			var_224_bool = 0; var_225_object = Obj();
			var_225_object = var_1_object;
			func_9000(var_225_object);
			if(var_224_bool != 0) {
				var_230_string = "";
				func_5819(var_72_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520869);
				@@@var_0_object:ClearReplies();
				var_232_bool = 0; var_233_object = Obj();
				var_233_object = var_1_object;
				func_8624(var_232_bool, var_233_object);
				if(var_232_bool != 0) {
					@@@var_0_object:AddReply((int)520870, (int)-1, (int)22087);
				}
				@@@var_0_object:AddReply((int)520871, (int)-1, (int)22088);
				return 0;
			}
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_9000(var_247_object);
			var_248_bool = var_246_bool == 0; //@nz
			if(var_248_bool != 0) {
				var_249_string = "";
				func_5819(var_72_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520872);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522541, (int)23721, (int)23720);
				return 0;
			}
		}
		var_255_bool = var_71_bool == (int)23721;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_5819(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522544, (int)23724, (int)23723);
			var_261_bool = 0; var_262_object = Obj();
			var_262_object = var_1_object;
			func_8790(var_261_bool, var_262_object);
			if(var_261_bool != 0) {
				@@@var_0_object:AddReply((int)520873, (int)-1, (int)22090);
			}
			return 0;
		}
		var_273_bool = var_71_bool == (int)23724;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_5819(var_72_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)522545);
			@@@var_0_object:ClearReplies();
			var_276_bool = 0; var_277_object = Obj();
			var_277_object = var_1_object;
			func_8790(var_276_bool, var_277_object);
			if(var_276_bool != 0) {
				@@@var_0_object:AddReply((int)522546, (int)-1, (int)23725);
			}
			@@@var_0_object:AddReply((int)522547, (int)-1, (int)23726);
			return 0;
		}
		var_285_bool = var_71_bool == (int)31838;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_5819(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)530472);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530473, (int)31840, (int)31839);
			@@@var_0_object:AddReply((int)531484, (int)32839, (int)32838);
			return 0;
		}
		var_295_bool = var_71_bool == (int)32839;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_5819(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)531485);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531486, (int)31840, (int)32840);
			return 0;
		}
		var_302_bool = var_71_bool == (int)31840;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_5819(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)530474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530475, (int)31842, (int)31841);
			@@@var_0_object:AddReply((int)531487, (int)32843, (int)32842);
			return 0;
		}
		var_312_bool = var_71_bool == (int)32843;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_5819(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)531488);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531489, (int)31842, (int)32844);
			@@@var_0_object:AddReply((int)531490, (int)31842, (int)32846);
			return 0;
		}
		var_322_bool = var_71_bool == (int)31842;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_5819(var_72_cvector, "Pride");
			@@@var_0_object:SetMessage((int)530476);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530477, (int)-1, (int)31843);
			return 0;
		}
		var_3_string = true;
		var_328_bool = 0;
		func_9419(var_328_bool);
		if(var_328_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x16d2";
	
}


task_23_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_int, var_61_int, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)31860;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8204();
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_8235(var_135_object);
		}
		var_161_bool = var_72_cvector == (int)40677;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_8204();
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_8235(var_165_object);
		}
		var_167_bool = var_72_cvector == (int)22097;
		if(var_167_bool != 0) {
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_8098();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_8363();
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_8145(var_186_object);
		}
		var_206_bool = var_72_cvector == (int)22100;
		if(var_206_bool != 0) {
			var_207_object = Obj(); var_208_object = Obj();
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_8098();
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_8351();
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_8313(var_214_object);
		}
		var_220_bool = var_72_cvector == (int)24641;
		if(var_220_bool != 0) {
			var_221_object = Obj(); var_222_object = Obj();
			var_221_object = var_1_object;
			var_222_object = var_0_object;
			func_8098();
			var_223_object = Obj(); var_224_object = Obj();
			var_223_object = var_1_object;
			var_224_object = var_0_object;
			func_8351();
			var_225_object = Obj(); var_226_object = Obj();
			var_225_object = var_1_object;
			var_226_object = var_0_object;
			func_8313(var_226_object);
		}
		var_228_bool = var_71_bool == (int)31856;
		if(var_228_bool != 0) {
			var_229_bool = 0; var_230_object = Obj();
			var_230_object = var_1_object;
			func_8716(var_230_object);
			if(var_229_bool != 0) {
				var_237_string = "";
				func_6364(var_72_cvector, "Smile");
				@@@var_0_object:SetMessage((int)530495);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530496, (int)31859, (int)31857);
				@@@var_0_object:AddReply((int)530497, (int)31859, (int)31858);
				return 0;
			}
			var_261_string = "";
			func_6364(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520877);
			@@@var_0_object:ClearReplies();
			var_263_bool = 0; var_264_object = Obj();
			var_264_object = var_1_object;
			func_9012(var_263_bool, var_264_object);
			var_275_bool = var_263_bool == 0; //@nz
			if(var_275_bool != 0) {
				@@@var_0_object:AddReply((int)520878, (int)22096, (int)22095);
			}
			@@@var_0_object:AddReply((int)520885, (int)-1, (int)22102);
			return 0;
		}
		var_283_bool = var_71_bool == (int)22096;
		if(var_283_bool != 0) {
			var_284_bool = 0; var_285_object = Obj();
			var_285_object = var_1_object;
			func_9000(var_285_object);
			if(var_284_bool != 0) {
				var_290_string = "";
				func_6364(var_72_cvector, "Think");
				@@@var_0_object:SetMessage((int)520879);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523415, (int)24637, (int)24636);
				return 0;
			}
			var_295_bool = 0; var_296_object = Obj();
			var_296_object = var_1_object;
			func_9000(var_296_object);
			var_297_bool = var_295_bool == 0; //@nz
			if(var_297_bool != 0) {
				var_298_string = "";
				func_6364(var_72_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520882);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523417, (int)24639, (int)24638);
				return 0;
			}
		}
		var_304_bool = var_71_bool == (int)24639;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_6364(var_72_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)523418);
			@@@var_0_object:ClearReplies();
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_8800(var_307_bool, var_308_object);
			if(var_307_bool != 0) {
				@@@var_0_object:AddReply((int)520883, (int)-1, (int)22100);
			}
			@@@var_0_object:AddReply((int)520884, (int)24640, (int)22101);
			return 0;
		}
		var_322_bool = var_71_bool == (int)24640;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_6364(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523419);
			@@@var_0_object:ClearReplies();
			var_325_bool = 0; var_326_object = Obj();
			var_326_object = var_1_object;
			func_8800(var_325_bool, var_326_object);
			if(var_325_bool != 0) {
				@@@var_0_object:AddReply((int)523420, (int)-1, (int)24641);
			}
			@@@var_0_object:AddReply((int)523421, (int)-1, (int)24642);
			return 0;
		}
		var_334_bool = var_71_bool == (int)24637;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_6364(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523416);
			@@@var_0_object:ClearReplies();
			var_337_bool = 0; var_338_object = Obj();
			var_338_object = var_1_object;
			func_8624(var_337_bool, var_338_object);
			if(var_337_bool != 0) {
				@@@var_0_object:AddReply((int)520880, (int)-1, (int)22097);
			}
			@@@var_0_object:AddReply((int)520881, (int)-1, (int)22098);
			return 0;
		}
		var_352_bool = var_71_bool == (int)31859;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_6364(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)530498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531420, (int)32764, (int)32763);
			return 0;
		}
		var_359_bool = var_71_bool == (int)32764;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_6364(var_72_cvector, "Think");
			@@@var_0_object:SetMessage((int)531421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530499, (int)-1, (int)31860);
			@@@var_0_object:AddReply((int)538761, (int)-1, (int)40677);
			return 0;
		}
		var_3_string = true;
		var_368_bool = 0;
		func_9419(var_368_bool);
		if(var_368_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x18f3";
	
}


task_25_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_int, var_66_int, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_72_cvector == (int)37069;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_8295();
		}
		var_82_bool = var_71_bool == (int)22104;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_6857(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520887);
			@@@var_0_object:ClearReplies();
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_8778(var_102_object);
			if(var_101_bool != 0) {
				@@@var_0_object:AddReply((int)535384, (int)37084, (int)37069);
			}
			@@@var_0_object:AddReply((int)535378, (int)-1, (int)37063);
			@@@var_0_object:AddReply((int)520895, (int)-1, (int)22112);
			return 0;
		}
		var_119_bool = var_71_bool == (int)37084;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_6857(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)535399);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535400, (int)37066, (int)37085);
			@@@var_0_object:AddReply((int)535401, (int)-1, (int)37086);
			return 0;
		}
		var_129_bool = var_71_bool == (int)37066;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_6857(var_72_cvector, "Smile");
			@@@var_0_object:SetMessage((int)535381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535382, (int)-1, (int)37067);
			@@@var_0_object:AddReply((int)535383, (int)-1, (int)37068);
			return 0;
		}
		var_3_string = true;
		var_138_bool = 0;
		func_9419(var_138_bool);
		if(var_138_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1ae0";
	
}


task_27_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_int, var_71_int, var_72_cvector)
{
	if((int)1 != 0) {
		func_7791();
		var_76_bool = var_71_int == (int)42563;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_7124(var_72_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_101_bool = 0;
		func_9419(var_101_bool);
		if(var_101_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1beb";
	
}


task_28_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_cvector, var_71_int)
{
	var_73_bool = var_71_int == (int)10;
	if(var_73_bool != 0) {
		func_7260();
		var_75_bool = 0;
		var_75_bool = 0;
		var_76_bool = 0;
		func_7515(var_76_bool);
		if(var_76_bool != 0) {
			var_79_bool = 0;
			func_7229(var_79_bool);
			if(var_79_bool != 0) {
				var_75_bool = 1;
			}
		}
		if(var_75_bool != 0) {
			var_96_bool = 0;
			func_7209(var_96_bool);
			if(var_96_bool != 0) {
				var_115_bool = 0; var_116_object = Obj();
				func_7798(Obj());
				var_117_object = var_116_object;
				func_7665(var_115_bool, var_116_object);
			}
		} else {
			func_7224(var_71_int);
			func_7251();
		}
	}
	return 0;
	
}


task_28_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_cvector)
{
	func_7442();
	func_7260();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_28_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_cvector)
{
	StopGroup0();
	func_7260();
	var_72_string = "";
	func_7745("Neutral");
	func_7251();
	return 0;
}


task_28_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_cvector, var_71_bool)
{
	var_72_bool = var_71_bool;
	if(var_72_bool != 0) {
		func_7251();
	} else {
		var_78_string = "";
		func_7745("Neutral");
	}
	return 0;
	
}


task_28_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_cvector, var_71_object)
{
	var_72_bool = 0; var_73_bool = 0;
	IsOverrideActive(var_73_bool);
	var_74_bool = var_73_bool == 0; //@nz
	if(var_74_bool != 0) {
		EventDisable(0);
		func_7442();
		var_75_bool = 0; var_76_object = Obj();
		var_71_object = var_76_object;
		func_7506(var_75_bool, var_76_object);
		EventEnable(0);
		var_89_object = Obj();
		var_71_object = var_89_object;
		func_9421(var_89_object);
		var_1382_string = "";
		func_7745("Neutral");
		func_7260();
		func_7251();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_cvector)
{
	var_71_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_7195(var_70_cvector);
	return 0;
}


func_8704(var_1156_bool)
{
	var_1158_int = 0; var_1159_string = "";
	func_7825(var_1158_int, "b10q04NotkinTalk");
	var_1161_bool = var_1158_int == (int)1;
	if(var_1161_bool != 0) {
		var_1156_bool = 1;
		return 0;
	}
	var_1156_bool = 0;
	return 0;
}


func_0(var_0_object, var_321_int, var_322_object)
{
	var_324_object = Obj(); var_325_bool = 0; var_326_int = 0; var_327_bool = 0; var_328_object = Obj(); var_329_bool = 0; var_330_int = 0; var_331_bool = 0;
	var_0_object = var_322_object;
	var_332_bool = 0; var_333_object = Obj(); var_334_float = 0;
	var_322_object = var_333_object;
	func_7520(var_332_bool, var_333_object, (float)70.0);
	var_335_bool = var_332_bool == 0; //@nz
	if(var_335_bool != 0) {
		var_321_int = -2;
		return 8;
	}
	CreateDialog(var_328_object);
	var_336_int = 0;
	func_9413(var_336_int);
	@@var_328_object:SetNPCName(var_336_int);
	var_337_int = 0;
	func_9411(var_337_int);
	@@var_328_object:SetNPCDescription(var_337_int);
	var_338_string = "";
	func_9415(var_338_string);
	@@var_328_object:SetPhoto(var_338_string);
	var_339_string = "";
	func_9417(var_339_string);
	@@var_328_object:SetPhoto2(var_339_string);
	var_340_int = 0;
	func_9394(var_340_int);
	@@var_328_object:SetPlayerName(var_340_int);
	IsOverrideActive(var_329_bool);
	var_341_bool = var_329_bool;
	if(var_341_bool != 0) {
		var_321_int = -2;
		return 8;
	}
	DoDialog(var_328_object);
	var_342_bool = 0; var_343_object = Obj();
	func_7798(Obj());
	var_344_object = var_343_object;
	func_7607(var_342_bool, var_343_object);
	var_345_object = Obj(); var_346_object = Obj();
	var_322_object = var_345_object;
	var_328_object = var_346_object;
	TaskCall(1);
	func_81(var_347_object, var_348_object, var_349_string, var_350_bool, var_345_object, var_346_object);
	TaskReturn();
	@@var_328_object:IsDialogEnd(var_331_bool);
	
Label_63:
	var_479_bool = var_331_bool == 0; //@nz
	if(var_479_bool != 0) {
		sync();
		@@var_328_object:IsDialogEnd(var_331_bool);
		goto Label_63;
	}
	var_322_object = Obj();
	func_7589();
	StopDialog(var_328_object);
	@@var_328_object:GetReturnValue((int)-1);
	var_330_int = var_321_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8195()
{
	SetVariable("b10q04NotkinTalk", (int)9);
	func_9121();
	return 0;
}


func_9225()
{
	var_253_object = Obj(); var_254_object = Obj();
	CreateDiaryEntry(var_254_object, (int)235, (int)2, (int)519679);
	var_258_bool = 0; var_259_object = Obj(); var_260_int = 0;
	var_254_object = var_259_object;
	func_9316(var_258_bool, var_259_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1548(var_0_object, var_1_object, var_2_object, var_3_string, var_507_object, var_508_object)
{
	var_0_object = var_508_object;
	var_1_object = var_507_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_514_string = "";
		func_1611(var_508_object, "Neutral");
		@@@var_0_object:SetMessage((int)518269);
		@@@var_0_object:ClearReplies();
		var_523_bool = 0; var_524_object = Obj();
		var_524_object = var_1_object;
		func_8988(var_524_object);
		if(var_523_bool != 0) {
			@@@var_0_object:AddReply((int)519454, (int)20625, (int)20624);
		}
		@@@var_0_object:AddReply((int)518270, (int)-1, (int)19379);
		goto Label_1581;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x610";
	}
Label_1581:
	var_535_bool = 0;
	func_9419(var_535_bool);
	if(var_535_bool != 0) {

	Label_1585:
		lshWaitForAnimEnd();
		var_536_string = var_3_string;
		if(var_536_string != 0) {
		} else {
			var_537_string = "";
			var_537_string = var_2_object;
			func_7745(var_537_string);
			goto Label_1585;
	}
		PlayAnimation("all", "idle");

	Label_1600:
		WaitForAnimEnd();
		var_540_string = var_3_string;
		if(var_540_string != 0) {
			goto Label_1610;
		}
		PlayAnimation("all", "idle");
		goto Label_1600;
	}
	goto Label_1610;
	
Label_1610:
	return 0;
	
}


func_8716(var_1217_bool)
{
	var_1219_int = 0; var_1220_string = "";
	func_7825(var_1219_int, "b11q04");
	var_1222_bool = var_1219_int == (int)0;
	if(var_1222_bool != 0) {
		var_1217_bool = 1;
		return 0;
	}
	var_1217_bool = 0;
	return 0;
}


func_8204()
{
	var_79_object = Obj(); var_80_object = Obj();
	SetVariable("b11q04", (int)1);
	func_9344(Obj());
	var_83_object = var_80_object;
	var_94_float = 0;
	func_7961(var_94_float);
	@@var_80_object:AddMark("b11q04NotkinGotoSanitar", "pt_b11q04_sanitar", (int)0, (int)530500, var_94_float);
	func_9134();
	func_9147();
	var_128_bool = 0; var_129_string = ""; var_130_string = "";
	func_7949(var_128_bool, "quest_b11_04", "place_sanitar");
	return 2;
}
EMIT "Stack[-1] = 0";


func_7702(var_206_bool, var_207_object)
{
	var_208_string = ""; var_209_int = 0; var_210_bool = 0; var_211_int = 0; var_212_string = ""; var_213_string = ""; var_214_int = 0; var_215_bool = 0; var_216_int = 0; var_217_string = "";
	var_219_int = 0;
	func_7966(var_219_int);
	var_225_int = "d" + var_219_int;
	var_213_string = var_225_int + "m";
	var_214_int = 0;
	
Label_7711:
	if((int)1 != 0) {
		var_229_int = var_214_int + (int)1;
		var_230_int = var_213_string + var_229_int;
		@@var_207_object:HasProperty(var_230_int, var_215_bool);
		var_231_bool = var_215_bool == 0; //@nz
		if(var_231_bool != 0) {
		} else {
			var_214_int = var_214_int + (int)1;
			goto Label_7711;
		}
	}
	var_232_bool = var_214_int == 0; //@nz
	if(var_232_bool != 0) {
		var_206_bool = 0;
		return 10;
	}
	var_216_int = 0;
	var_234_bool = var_214_int > (int)1;
	if(var_234_bool != 0) {
		irand(var_216_int, var_214_int);
	}
	var_236_int = var_216_int + (int)1;
	var_237_int = var_213_string + var_236_int;
	@@var_207_object:GetProperty(var_237_int, var_217_string);
	var_238_bool = 0; var_239_string = "";
	var_217_string = var_239_string;
	func_7776(var_238_bool, var_239_string);
	var_238_bool = var_206_bool;
	return 10;
	
}


func_9238()
{
	var_309_object = Obj(); var_310_object = Obj();
	CreateDiaryEntry(var_310_object, (int)237, (int)2, (int)519681);
	var_314_bool = 0; var_315_object = Obj(); var_316_int = 0;
	var_310_object = var_315_object;
	func_9316(var_314_bool, var_315_object, (int)235);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8728(var_179_bool, var_180_object)
{
	var_181_bool = 0; var_182_object = Obj();
	var_180_object = var_182_object;
	func_9046(var_181_bool, var_182_object);
	if(var_181_bool != 0) {
		var_179_bool = 1;
		return 0;
	}
	var_179_bool = 0;
	return 0;
}


func_7195(var_0_object)
{
	var_72_bool = 0;
	func_7515(var_72_bool);
	var_75_bool = var_72_bool == 0; //@nz
	if(var_75_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_7204:
	func_7371();
	goto Label_7204;
}
EMIT "Return(); Pop(0)";


func_3104(var_0_object, var_1_object, var_2_object, var_3_string, var_699_object, var_700_object)
{
	var_0_object = var_700_object;
	var_1_object = var_699_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_706_bool = 0; var_707_object = Obj();
		var_707_object = var_1_object;
		func_8658(var_707_object);
		if(var_706_bool != 0) {
			var_712_object = Obj(); var_713_object = Obj();
			var_712_object = var_1_object;
			var_713_object = var_0_object;
			func_8158();
			var_716_string = "";
			func_3232(var_700_object, "Triumph");
			@@@var_0_object:SetMessage((int)527890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527891, (int)29249, (int)29238);
			@@@var_0_object:AddReply((int)527914, (int)29263, (int)29262);
		} else {
				var_739_object = Obj(); var_740_object = Obj();
				var_739_object = var_1_object;
				var_740_object = var_0_object;
				func_8189();
				var_743_string = "";
				func_3232(var_700_object, "Distrust");
				@@@var_0_object:SetMessage((int)520806);
				@@@var_0_object:ClearReplies();
				var_745_bool = 0; var_746_object = Obj();
				var_746_object = var_1_object;
				func_9012(var_745_bool, var_746_object);
				var_757_bool = var_745_bool == 0; //@nz
				if(var_757_bool != 0) {
					@@@var_0_object:AddReply((int)520807, (int)22026, (int)22024);
				}
				var_761_bool = 0; var_762_object = Obj();
				var_762_object = var_1_object;
				func_8670(var_762_object);
				if(var_761_bool != 0) {
					@@@var_0_object:AddReply((int)527893, (int)29241, (int)29240);
				}
				var_770_bool = 0;
				var_770_bool = 0;
				var_771_bool = 0; var_772_object = Obj();
				var_772_object = var_1_object;
				func_8682(var_772_object);
				if(var_771_bool != 0) {
					var_777_bool = 0; var_778_object = Obj();
					var_778_object = var_1_object;
					func_8694(var_777_bool, var_778_object);
					if(var_777_bool != 0) {
						var_770_bool = 1;
					}
				}
				if(var_770_bool != 0) {
					@@@var_0_object:AddReply((int)527896, (int)29244, (int)29243);
				}
				@@@var_0_object:AddReply((int)520808, (int)-1, (int)22025);
				goto Label_3202;
		}
	}
Label_3202:
	var_731_bool = 0;
	func_9419(var_731_bool);
	if(var_731_bool != 0) {

	Label_3206:
		lshWaitForAnimEnd();
		var_732_string = var_3_string;
		if(var_732_string != 0) {
		} else {
			var_733_string = "";
			var_733_string = var_2_object;
			func_7745(var_733_string);
			goto Label_3206;
	}
		PlayAnimation("all", "idle");

	Label_3221:
		WaitForAnimEnd();
		var_736_string = var_3_string;
		if(var_736_string != 0) {
			goto Label_3231;
		}
		PlayAnimation("all", "idle");
		goto Label_3221;

	}
	goto Label_3231;
	
Label_3231:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc24";


func_5664(var_0_object, var_1116_int, var_1117_object)
{
	var_1119_object = Obj(); var_1120_bool = 0; var_1121_int = 0; var_1122_bool = 0; var_1123_object = Obj(); var_1124_bool = 0; var_1125_int = 0; var_1126_bool = 0;
	var_0_object = var_1117_object;
	var_1127_bool = 0; var_1128_object = Obj(); var_1129_float = 0;
	var_1117_object = var_1128_object;
	func_7520(var_1127_bool, var_1128_object, (float)70.0);
	var_1130_bool = var_1127_bool == 0; //@nz
	if(var_1130_bool != 0) {
		var_1116_int = -2;
		return 8;
	}
	CreateDialog(var_1123_object);
	var_1131_int = 0;
	func_9413(var_1131_int);
	@@var_1123_object:SetNPCName(var_1131_int);
	var_1132_int = 0;
	func_9411(var_1132_int);
	@@var_1123_object:SetNPCDescription(var_1132_int);
	var_1133_string = "";
	func_9415(var_1133_string);
	@@var_1123_object:SetPhoto(var_1133_string);
	var_1134_string = "";
	func_9417(var_1134_string);
	@@var_1123_object:SetPhoto2(var_1134_string);
	var_1135_int = 0;
	func_9394(var_1135_int);
	@@var_1123_object:SetPlayerName(var_1135_int);
	IsOverrideActive(var_1124_bool);
	var_1136_bool = var_1124_bool;
	if(var_1136_bool != 0) {
		var_1116_int = -2;
		return 8;
	}
	DoDialog(var_1123_object);
	var_1137_bool = 0; var_1138_object = Obj();
	func_7798(Obj());
	var_1139_object = var_1138_object;
	func_7607(var_1137_bool, var_1138_object);
	var_1140_object = Obj(); var_1141_object = Obj();
	var_1117_object = var_1140_object;
	var_1123_object = var_1141_object;
	TaskCall(21);
	func_5745(var_1142_object, var_1143_object, var_1144_string, var_1145_bool, var_1140_object, var_1141_object);
	TaskReturn();
	@@var_1123_object:IsDialogEnd(var_1126_bool);
	
Label_5727:
	var_1182_bool = var_1126_bool == 0; //@nz
	if(var_1182_bool != 0) {
		sync();
		@@var_1123_object:IsDialogEnd(var_1126_bool);
		goto Label_5727;
	}
	var_1117_object = Obj();
	func_7589();
	StopDialog(var_1123_object);
	@@var_1123_object:GetReturnValue((int)-1);
	var_1125_int = var_1116_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8738(var_375_bool, var_376_object)
{
	var_377_bool = 0; var_378_object = Obj();
	var_376_object = var_378_object;
	func_9053(var_377_bool, var_378_object);
	if(var_377_bool != 0) {
		var_375_bool = 1;
		return 0;
	}
	var_375_bool = 0;
	return 0;
}


func_9251()
{
	var_261_object = Obj(); var_262_object = Obj();
	CreateDiaryEntry(var_262_object, (int)236, (int)2, (int)519680);
	var_266_bool = 0; var_267_object = Obj(); var_268_int = 0;
	var_262_object = var_267_object;
	func_9316(var_266_bool, var_267_object, (int)235);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7209(var_96_bool)
{
	var_97_object = Obj(); var_98_object = Obj();
	FindActor(var_98_object, "player");
	var_100_bool = var_98_object == 0; //@nz
	if(var_100_bool != 0) {
		var_96_bool = 0;
		return 2;
	}
	var_101_bool = 0; var_102_object = Obj();
	var_98_object = var_102_object;
	func_7506(var_101_bool, var_102_object);
	var_101_bool = var_96_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4139(var_0_object, var_1_object, var_2_object, var_3_string, var_880_object, var_881_object)
{
	var_0_object = var_881_object;
	var_1_object = var_880_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_887_string = "";
		func_4203(var_881_object, "Neutral");
		@@@var_0_object:SetMessage((int)520827);
		@@@var_0_object:ClearReplies();
		var_896_bool = 0; var_897_object = Obj();
		var_897_object = var_1_object;
		func_9012(var_896_bool, var_897_object);
		var_898_bool = var_896_bool == 0; //@nz
		if(var_898_bool != 0) {
			@@@var_0_object:AddReply((int)520828, (int)22046, (int)22045);
		}
		@@@var_0_object:AddReply((int)520835, (int)-1, (int)22052);
		goto Label_4173;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x102f";
	}
Label_4173:
	var_905_bool = 0;
	func_9419(var_905_bool);
	if(var_905_bool != 0) {

	Label_4177:
		lshWaitForAnimEnd();
		var_906_string = var_3_string;
		if(var_906_string != 0) {
		} else {
			var_907_string = "";
			var_907_string = var_2_object;
			func_7745(var_907_string);
			goto Label_4177;
	}
		PlayAnimation("all", "idle");

	Label_4192:
		WaitForAnimEnd();
		var_910_string = var_3_string;
		if(var_910_string != 0) {
			goto Label_4202;
		}
		PlayAnimation("all", "idle");
		goto Label_4192;
	}
	goto Label_4202;
	
Label_4202:
	return 0;
	
}


func_8748(var_205_bool, var_206_object)
{
	var_207_bool = 0; var_208_object = Obj();
	var_206_object = var_208_object;
	func_9060(var_207_bool, var_208_object);
	if(var_207_bool != 0) {
		var_205_bool = 1;
		return 0;
	}
	var_205_bool = 0;
	return 0;
}


func_8235(var_135_object)
{
	var_136_object = Obj(); var_137_string = ""; var_138_float = 0;
	func_9344(Obj());
	var_139_object = var_136_object;
	func_9361(var_136_object, "pt_b11q04_sanitar", (float)2);
	var_159_object = Obj();
	func_9344(var_159_object);
	@@var_135_object:ShowMap(var_159_object);
	return 0;
}


func_9264()
{
	var_162_object = Obj(); var_163_object = Obj();
	CreateDiaryEntry(var_163_object, (int)527, (int)2, (int)529895);
	var_167_bool = 0; var_168_object = Obj(); var_169_int = 0;
	var_163_object = var_168_object;
	func_9316(var_167_bool, var_168_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6194(var_0_object, var_1186_int, var_1187_object)
{
	var_1189_object = Obj(); var_1190_bool = 0; var_1191_int = 0; var_1192_bool = 0; var_1193_object = Obj(); var_1194_bool = 0; var_1195_int = 0; var_1196_bool = 0;
	var_0_object = var_1187_object;
	var_1197_bool = 0; var_1198_object = Obj(); var_1199_float = 0;
	var_1187_object = var_1198_object;
	func_7520(var_1197_bool, var_1198_object, (float)70.0);
	var_1200_bool = var_1197_bool == 0; //@nz
	if(var_1200_bool != 0) {
		var_1186_int = -2;
		return 8;
	}
	CreateDialog(var_1193_object);
	var_1201_int = 0;
	func_9413(var_1201_int);
	@@var_1193_object:SetNPCName(var_1201_int);
	var_1202_int = 0;
	func_9411(var_1202_int);
	@@var_1193_object:SetNPCDescription(var_1202_int);
	var_1203_string = "";
	func_9415(var_1203_string);
	@@var_1193_object:SetPhoto(var_1203_string);
	var_1204_string = "";
	func_9417(var_1204_string);
	@@var_1193_object:SetPhoto2(var_1204_string);
	var_1205_int = 0;
	func_9394(var_1205_int);
	@@var_1193_object:SetPlayerName(var_1205_int);
	IsOverrideActive(var_1194_bool);
	var_1206_bool = var_1194_bool;
	if(var_1206_bool != 0) {
		var_1186_int = -2;
		return 8;
	}
	DoDialog(var_1193_object);
	var_1207_bool = 0; var_1208_object = Obj();
	func_7798(Obj());
	var_1209_object = var_1208_object;
	func_7607(var_1207_bool, var_1208_object);
	var_1210_object = Obj(); var_1211_object = Obj();
	var_1187_object = var_1210_object;
	var_1193_object = var_1211_object;
	TaskCall(23);
	func_6275(var_1212_object, var_1213_object, var_1214_string, var_1215_bool, var_1210_object, var_1211_object);
	TaskReturn();
	@@var_1193_object:IsDialogEnd(var_1196_bool);
	
Label_6257:
	var_1257_bool = var_1196_bool == 0; //@nz
	if(var_1257_bool != 0) {
		sync();
		@@var_1193_object:IsDialogEnd(var_1196_bool);
		goto Label_6257;
	}
	var_1187_object = Obj();
	func_7589();
	StopDialog(var_1193_object);
	@@var_1193_object:GetReturnValue((int)-1);
	var_1195_int = var_1186_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6708(var_0_object, var_1261_int, var_1262_object)
{
	var_1264_object = Obj(); var_1265_bool = 0; var_1266_int = 0; var_1267_bool = 0; var_1268_object = Obj(); var_1269_bool = 0; var_1270_int = 0; var_1271_bool = 0;
	var_0_object = var_1262_object;
	var_1272_bool = 0; var_1273_object = Obj(); var_1274_float = 0;
	var_1262_object = var_1273_object;
	func_7520(var_1272_bool, var_1273_object, (float)70.0);
	var_1275_bool = var_1272_bool == 0; //@nz
	if(var_1275_bool != 0) {
		var_1261_int = -2;
		return 8;
	}
	CreateDialog(var_1268_object);
	var_1276_int = 0;
	func_9413(var_1276_int);
	@@var_1268_object:SetNPCName(var_1276_int);
	var_1277_int = 0;
	func_9411(var_1277_int);
	@@var_1268_object:SetNPCDescription(var_1277_int);
	var_1278_string = "";
	func_9415(var_1278_string);
	@@var_1268_object:SetPhoto(var_1278_string);
	var_1279_string = "";
	func_9417(var_1279_string);
	@@var_1268_object:SetPhoto2(var_1279_string);
	var_1280_int = 0;
	func_9394(var_1280_int);
	@@var_1268_object:SetPlayerName(var_1280_int);
	IsOverrideActive(var_1269_bool);
	var_1281_bool = var_1269_bool;
	if(var_1281_bool != 0) {
		var_1261_int = -2;
		return 8;
	}
	DoDialog(var_1268_object);
	var_1282_bool = 0; var_1283_object = Obj();
	func_7798(Obj());
	var_1284_object = var_1283_object;
	func_7607(var_1282_bool, var_1283_object);
	var_1285_object = Obj(); var_1286_object = Obj();
	var_1262_object = var_1285_object;
	var_1268_object = var_1286_object;
	TaskCall(25);
	func_6789(var_1287_object, var_1288_object, var_1289_string, var_1290_bool, var_1285_object, var_1286_object);
	TaskReturn();
	@@var_1268_object:IsDialogEnd(var_1271_bool);
	
Label_6771:
	var_1324_bool = var_1271_bool == 0; //@nz
	if(var_1324_bool != 0) {
		sync();
		@@var_1268_object:IsDialogEnd(var_1271_bool);
		goto Label_6771;
	}
	var_1262_object = Obj();
	func_7589();
	StopDialog(var_1268_object);
	@@var_1268_object:GetReturnValue((int)-1);
	var_1270_int = var_1261_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8758(var_196_bool, var_197_object)
{
	var_198_bool = 0; var_199_object = Obj();
	var_197_object = var_199_object;
	func_9067(var_198_bool, var_199_object);
	if(var_198_bool != 0) {
		var_196_bool = 1;
		return 0;
	}
	var_196_bool = 0;
	return 0;
}


func_7224(var_0_object)
{
	var_148_float = GetByIndex(var_0_object, 0);
	var_149_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_148_float, var_149_float);
	return 0;
}


func_8251()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_7229(var_79_bool)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_object = Obj(); var_83_bool = 0;
	FindActor(var_82_object, "player");
	var_85_bool = var_82_object == 0; //@nz
	if(var_85_bool != 0) {
		var_79_bool = 0;
		return 4;
	}
	var_86_float = 0; var_87_object = Obj();
	var_82_object = var_87_object;
	func_7447(var_86_float, var_87_object);
	var_95_bool = var_86_float > (float)90000.0;
	if(var_95_bool != 0) {
		var_79_bool = 0;
		return 4;
	}
	CanSee(var_83_bool, var_82_object);
	var_83_bool = var_79_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_9277()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)528, (int)2, (int)529896);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_9316(var_88_bool, var_89_object, (int)527);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8768(var_287_bool, var_288_object)
{
	var_289_bool = 0; var_290_object = Obj();
	var_288_object = var_290_object;
	func_9074(var_289_bool, var_290_object);
	if(var_289_bool != 0) {
		var_287_bool = 1;
		return 0;
	}
	var_287_bool = 0;
	return 0;
}


func_7745(var_292_string)
{
	var_293_bool = 0; var_294_float = 0; var_295_float = 0; var_296_bool = 0; var_297_float = 0; var_298_float = 0;
	lshHasAnimation(var_296_bool, var_292_string);
	var_299_bool = var_296_bool;
	if(var_299_bool != 0) {
		lshGetAnimTimes(var_292_string, var_297_float, var_298_float);
		lshPlayAnimation(var_297_float, var_298_float, (bool)0);
	} else {
		var_302_int = "Can't find lsh animation : " + var_292_string;
		Trace(var_302_int);
	}
	return 6;
	
}


func_8257(var_90_object)
{
	var_92_object = Obj(); var_93_int = 0;
	var_90_object = var_92_object;
	func_7853(var_92_object, (int)-1000);
	return 0;
}


func_8264(var_218_object)
{
	var_220_int = 0; var_221_int = 0;
	@@var_218_object:RemoveItemByType(var_221_int, "grabitel_mark", (int)3);
	return 2;
}


func_8778(var_1301_bool)
{
	var_1303_int = 0; var_1304_string = "";
	func_7825(var_1303_int, "oob12Notkin1");
	var_1306_bool = var_1303_int == (int)0;
	if(var_1306_bool != 0) {
		var_1301_bool = 1;
		return 0;
	}
	var_1301_bool = 0;
	return 0;
}


func_1611(var_2_object, var_514_string)
{
	var_515_bool = 0;
	func_9419(var_515_bool);
	var_516_bool = var_515_bool == 0; //@nz
	if(var_516_bool != 0) {
		return 0;
	}
	var_517_bool = var_514_string == var_2_object;
	if(var_517_bool != 0) {
		return 0;
	}
	var_518_string = ""; var_519_bool = 0;
	var_514_string = var_518_string;
	var_521_bool = var_514_string == "";
	if(var_521_bool != 0) {
		var_519_bool = 0;
	} else {
		var_519_bool = 1;
	}
	func_7761(var_518_string, var_519_bool);
	var_2_object = var_514_string;
	return 0;
	
}


func_9290()
{
	var_170_object = Obj(); var_171_object = Obj();
	CreateDiaryEntry(var_171_object, (int)529, (int)2, (int)529945);
	var_175_bool = 0; var_176_object = Obj(); var_177_int = 0;
	var_171_object = var_176_object;
	func_9316(var_175_bool, var_176_object, (int)527);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8270(var_118_object)
{
	var_120_int = 0; var_121_int = 0;
	@@var_118_object:RemoveItemByType(var_121_int, "hunter_mark", (int)2);
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_345_object, var_346_object)
{
	var_0_object = var_346_object;
	var_1_object = var_345_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_352_bool = 0; var_353_object = Obj();
		var_353_object = var_1_object;
		func_8810(var_353_object);
		if(var_352_bool != 0) {
			var_360_object = Obj(); var_361_object = Obj();
			var_360_object = var_1_object;
			var_361_object = var_0_object;
			func_8414();
			var_364_string = "";
			func_286(var_346_object, "Distrust");
			@@@var_0_object:SetMessage((int)517966);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527053, (int)28348, (int)28347);
		} else {
				var_384_string = "";
				func_286(var_346_object, "Neutral");
				@@@var_0_object:SetMessage((int)517988);
				@@@var_0_object:ClearReplies();
				var_386_bool = 0;
				var_386_bool = 0;
				var_387_bool = 0;
				var_387_bool = 0;
				var_388_bool = 0; var_389_object = Obj();
				var_389_object = var_1_object;
				func_8846(var_389_object);
				if(var_388_bool != 0) {
					var_394_bool = 0; var_395_object = Obj();
					var_395_object = var_1_object;
					func_8822(var_395_object);
					var_400_bool = var_394_bool == 0; //@nz
					if(var_400_bool != 0) {
						var_387_bool = 1;
					}
				}
				if(var_387_bool != 0) {
					var_401_bool = 0; var_402_object = Obj();
					var_402_object = var_1_object;
					func_8834(var_402_object);
					var_407_bool = var_401_bool == 0; //@nz
					if(var_407_bool != 0) {
						var_386_bool = 1;
					}
				}
				if(var_386_bool != 0) {
					@@@var_0_object:AddReply((int)518075, (int)19209, (int)19208);
				}
				var_411_bool = 0;
				var_411_bool = 0;
				var_412_bool = 0; var_413_object = Obj();
				var_413_object = var_1_object;
				func_8870(var_413_object);
				if(var_412_bool != 0) {
					var_418_bool = 0; var_419_object = Obj();
					var_419_object = var_1_object;
					func_8822(var_419_object);
					if(var_418_bool != 0) {
						var_411_bool = 1;
					}
				}
				if(var_411_bool != 0) {
					@@@var_0_object:AddReply((int)518066, (int)20872, (int)19199);
				}
				var_423_bool = 0;
				var_423_bool = 0;
				var_424_bool = 0;
				var_424_bool = 0;
				var_425_bool = 0; var_426_object = Obj();
				var_426_object = var_1_object;
				func_8870(var_426_object);
				if(var_425_bool != 0) {
					var_427_bool = 0; var_428_object = Obj();
					var_428_object = var_1_object;
					func_8834(var_428_object);
					if(var_427_bool != 0) {
						var_424_bool = 1;
					}
				}
				if(var_424_bool != 0) {
					var_429_bool = 0; var_430_object = Obj();
					var_430_object = var_1_object;
					func_8822(var_430_object);
					var_431_bool = var_429_bool == 0; //@nz
					if(var_431_bool != 0) {
						var_423_bool = 1;
					}
				}
				if(var_423_bool != 0) {
					@@@var_0_object:AddReply((int)518072, (int)19206, (int)19205);
				}
				var_435_bool = 0;
				var_435_bool = 0;
				var_436_bool = 0; var_437_object = Obj();
				var_437_object = var_1_object;
				func_8634(var_437_object);
				if(var_436_bool != 0) {
					var_442_bool = 0; var_443_object = Obj();
					var_443_object = var_1_object;
					func_8646(var_443_object);
					if(var_442_bool != 0) {
						var_435_bool = 1;
					}
				}
				if(var_435_bool != 0) {
					@@@var_0_object:AddReply((int)527089, (int)28388, (int)28387);
				}
				var_451_bool = 0;
				var_451_bool = 0;
				var_452_bool = 0;
				var_452_bool = 0;
				var_453_bool = 0; var_454_object = Obj();
				var_454_object = var_1_object;
				func_8976(var_454_object);
				if(var_453_bool != 0) {
					var_459_bool = 0; var_460_object = Obj();
					var_460_object = var_1_object;
					func_8964(var_460_object);
					var_465_bool = var_459_bool == 0; //@nz
					if(var_465_bool != 0) {
						var_452_bool = 1;
					}
				}
				if(var_452_bool != 0) {
					var_466_bool = 0; var_467_object = Obj();
					var_467_object = var_1_object;
					func_8952(var_467_object);
					var_472_bool = var_466_bool == 0; //@nz
					if(var_472_bool != 0) {
						var_451_bool = 1;
					}
				}
				if(var_451_bool != 0) {
					@@@var_0_object:AddReply((int)520049, (int)21230, (int)21229);
				}
				@@@var_0_object:AddReply((int)517989, (int)-1, (int)19122);
				goto Label_256;
		}
	}
Label_256:
	var_376_bool = 0;
	func_9419(var_376_bool);
	if(var_376_bool != 0) {

	Label_260:
		lshWaitForAnimEnd();
		var_377_string = var_3_string;
		if(var_377_string != 0) {
		} else {
			var_378_string = "";
			var_378_string = var_2_object;
			func_7745(var_378_string);
			goto Label_260;
	}
		PlayAnimation("all", "idle");

	Label_275:
		WaitForAnimEnd();
		var_381_string = var_3_string;
		if(var_381_string != 0) {
			goto Label_285;
		}
		PlayAnimation("all", "idle");
		goto Label_275;

	}
	goto Label_285;
	
Label_285:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_7761(var_270_string, var_271_bool)
{
	var_274_bool = 0; var_275_float = 0; var_276_float = 0; var_277_bool = 0; var_278_float = 0; var_279_float = 0;
	lshHasAnimation(var_277_bool, var_270_string);
	var_280_bool = var_277_bool;
	if(var_280_bool != 0) {
		lshGetAnimTimes(var_270_string, var_278_float, var_279_float);
		lshPlayAnimation(var_278_float, var_279_float, var_271_bool);
	} else {
		var_282_int = "Can't find lsh animation : " + var_270_string;
		Trace(var_282_int);
	}
	return 6;
	
}


func_7251()
{
	var_1384_float = 0; var_1385_float = 0;
	rand(var_1385_float, (int)8, (int)16);
	SetTimer((int)10, var_1385_float);
	return 2;
}


func_8276(var_94_object)
{
	var_96_object = Obj(); var_97_int = 0;
	var_94_object = var_96_object;
	func_7853(var_96_object, (int)-2000);
	return 0;
}


func_8790(var_261_bool, var_262_object)
{
	var_263_bool = 0; var_264_object = Obj();
	var_262_object = var_264_object;
	func_9081(var_263_bool, var_264_object);
	if(var_263_bool != 0) {
		var_261_bool = 1;
		return 0;
	}
	var_261_bool = 0;
	return 0;
}


func_9303(var_111_object)
{
	var_112_object = Obj(); var_113_object = Obj();
	GetDiaryRoot(var_113_object);
	var_114_bool = var_113_object == 0; //@nz
	if(var_114_bool != 0) {
		Trace("Can't retrieve diary root");
		var_111_object = 0;
		return 2;
	}
	var_113_object = var_111_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8283(var_122_object)
{
	var_124_int = 0; var_125_int = 0;
	@@var_122_object:RemoveItemByType(var_125_int, "hunter_mark", (int)3);
	return 2;
}


func_7260()
{
	KillTimer((int)10);
	return 0;
}


func_8800(var_307_bool, var_308_object)
{
	var_309_bool = 0; var_310_object = Obj();
	var_308_object = var_310_object;
	func_9088(var_309_bool, var_310_object);
	if(var_309_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_8289()
{
	SetVariable("KnowShabnak", (int)1);
	return 0;
}


func_7776(var_198_bool, var_199_string)
{
	var_200_bool = 0; var_201_bool = 0;
	var_202_bool = 0;
	func_9419(var_202_bool);
	if(var_202_bool != 0) {
		lshHasSpeech(var_201_bool, var_199_string);
		var_203_bool = var_201_bool;
		if(var_203_bool != 0) {
			lshPlaySpeech(var_199_string);
			var_198_bool = 1;
			return 2;
		}
	}
	var_198_bool = 0;
	return 2;
}


func_9316(var_102_bool, var_103_object, var_104_int)
{
	var_105_object = Obj(); var_106_object = Obj(); var_107_int = 0; var_108_object = Obj(); var_109_object = Obj(); var_110_int = 0;
	func_9303(Obj());
	var_111_object = var_108_object;
	@@var_108_object:Find(var_104_int, var_109_object);
	var_116_bool = var_109_object == 0; //@nz
	if(var_116_bool != 0) {
		var_118_int = "Can't find diary parent with id: " + var_104_int;
		Trace(var_118_int);
		var_102_bool = 0;
		return 6;
	}
	@@var_109_object:AddChild(var_103_object);
	SendWorldWndMessage((int)7);
	@@var_103_object:GetCategory(var_110_int);
	SetDiarySection(var_110_int);
	var_102_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_8295()
{
	SetVariable("oob12Notkin1", (int)1);
	return 0;
}


func_8810(var_352_bool)
{
	var_354_int = 0; var_355_string = "";
	func_7825(var_354_int, "oob1Notkin1");
	var_359_bool = var_354_int == (int)0;
	if(var_359_bool != 0) {
		var_352_bool = 1;
		return 0;
	}
	var_352_bool = 0;
	return 0;
}


func_4203(var_2_object, var_887_string)
{
	var_888_bool = 0;
	func_9419(var_888_bool);
	var_889_bool = var_888_bool == 0; //@nz
	if(var_889_bool != 0) {
		return 0;
	}
	var_890_bool = var_887_string == var_2_object;
	if(var_890_bool != 0) {
		return 0;
	}
	var_891_string = ""; var_892_bool = 0;
	var_887_string = var_891_string;
	var_894_bool = var_887_string == "";
	if(var_894_bool != 0) {
		var_892_bool = 0;
	} else {
		var_892_bool = 1;
	}
	func_7761(var_891_string, var_892_bool);
	var_2_object = var_887_string;
	return 0;
	
}


func_8301()
{
	SetVariable("b3NotkinVisit", (int)1);
	return 0;
}


func_7791()
{
	var_74_bool = 0;
	func_9419(var_74_bool);
	if(var_74_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5745(var_0_object, var_1_object, var_2_object, var_3_string, var_1140_object, var_1141_object)
{
	var_0_object = var_1141_object;
	var_1_object = var_1140_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1147_string = "";
		func_5819(var_1141_object, "Neutral");
		@@@var_0_object:SetMessage((int)520867);
		@@@var_0_object:ClearReplies();
		var_1156_bool = 0; var_1157_object = Obj();
		var_1157_object = var_1_object;
		func_8704(var_1157_object);
		if(var_1156_bool != 0) {
			@@@var_0_object:AddReply((int)530471, (int)31838, (int)31837);
		}
		var_1165_bool = 0; var_1166_object = Obj();
		var_1166_object = var_1_object;
		func_9012(var_1165_bool, var_1166_object);
		var_1167_bool = var_1165_bool == 0; //@nz
		if(var_1167_bool != 0) {
			@@@var_0_object:AddReply((int)520868, (int)23728, (int)22085);
		}
		@@@var_0_object:AddReply((int)520875, (int)-1, (int)22092);
		goto Label_5789;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1675";
	}
Label_5789:
	var_1174_bool = 0;
	func_9419(var_1174_bool);
	if(var_1174_bool != 0) {

	Label_5793:
		lshWaitForAnimEnd();
		var_1175_string = var_3_string;
		if(var_1175_string != 0) {
		} else {
			var_1176_string = "";
			var_1176_string = var_2_object;
			func_7745(var_1176_string);
			goto Label_5793;
	}
		PlayAnimation("all", "idle");

	Label_5808:
		WaitForAnimEnd();
		var_1179_string = var_3_string;
		if(var_1179_string != 0) {
			goto Label_5818;
		}
		PlayAnimation("all", "idle");
		goto Label_5808;
	}
	goto Label_5818;
	
Label_5818:
	return 0;
	
}


func_8307(var_151_object)
{
	var_153_int = 0; var_154_int = 0;
	@@var_151_object:RemoveItemByType(var_154_int, "hunter_mark", (int)4);
	return 2;
}


func_7798(var_166_object)
{
	var_167_object = Obj(); var_168_object = Obj();
	self(var_168_object);
	var_168_object = var_166_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8822(var_394_bool)
{
	var_396_int = 0; var_397_string = "";
	func_7825(var_396_int, "b1q03_dead");
	var_399_bool = var_396_int != (int)0;
	if(var_399_bool != 0) {
		var_394_bool = 1;
		return 0;
	}
	var_394_bool = 0;
	return 0;
}


func_8313(var_213_object)
{
	var_215_int = 0; var_216_int = 0;
	@@var_213_object:RemoveItemByType(var_216_int, "hunter_mark", (int)5);
	return 2;
}


func_7804(var_130_cvector, var_131_cvector)
{
	var_133_float = 0; var_134_float = 0;
	var_135_int = var_131_cvector | var_131_cvector;
	var_134_float = sqrt(var_135_int);
	var_136_float = 9.999999974752427e-07;
	var_137_bool = var_134_float < var_136_float;
	if(var_137_bool != 0) {
		var_130_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_130_cvector = var_131_cvector / var_134_float;
	return 2;
}


func_8319(var_220_object)
{
	var_222_object = Obj(); var_223_object = Obj();
	Trace("Revolver is given");
	CreateInvItem(var_223_object);
	@@var_223_object:SetItemName("Revolver");
	@@var_223_object:SetProperty("durability", (int)30);
	var_228_object = Obj(); var_229_object = Obj(); var_230_int = 0;
	var_220_object = var_228_object;
	var_223_object = var_229_object;
	func_7872(var_228_object, var_229_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9344(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj();
	GetMainOutdoorScene(var_86_object);
	var_88_bool = var_86_object == 0; //@ne
	if(var_88_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_87_object = 0;
		var_87_object = var_83_object;
		return 4;
	}
	@@var_86_object:GetMap(var_87_object);
	var_87_object = var_83_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8834(var_401_bool)
{
	var_403_int = 0; var_404_string = "";
	func_7825(var_403_int, "b1q03_retreat");
	var_406_bool = var_403_int != (int)0;
	if(var_406_bool != 0) {
		var_401_bool = 1;
		return 0;
	}
	var_401_bool = 0;
	return 0;
}


func_6275(var_0_object, var_1_object, var_2_object, var_3_string, var_1210_object, var_1211_object)
{
	var_0_object = var_1211_object;
	var_1_object = var_1210_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1217_bool = 0; var_1218_object = Obj();
		var_1218_object = var_1_object;
		func_8716(var_1218_object);
		if(var_1217_bool != 0) {
			var_1223_string = "";
			func_6364(var_1211_object, "Smile");
			@@@var_0_object:SetMessage((int)530495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530496, (int)31859, (int)31857);
			@@@var_0_object:AddReply((int)530497, (int)31859, (int)31858);
		} else {
				var_1246_string = "";
				func_6364(var_1211_object, "Neutral");
				@@@var_0_object:SetMessage((int)520877);
				@@@var_0_object:ClearReplies();
				var_1248_bool = 0; var_1249_object = Obj();
				var_1249_object = var_1_object;
				func_9012(var_1248_bool, var_1249_object);
				var_1250_bool = var_1248_bool == 0; //@nz
				if(var_1250_bool != 0) {
					@@@var_0_object:AddReply((int)520878, (int)22096, (int)22095);
				}
				@@@var_0_object:AddReply((int)520885, (int)-1, (int)22102);
				goto Label_6334;
		}
	}
Label_6334:
	var_1238_bool = 0;
	func_9419(var_1238_bool);
	if(var_1238_bool != 0) {

	Label_6338:
		lshWaitForAnimEnd();
		var_1239_string = var_3_string;
		if(var_1239_string != 0) {
		} else {
			var_1240_string = "";
			var_1240_string = var_2_object;
			func_7745(var_1240_string);
			goto Label_6338;
	}
		PlayAnimation("all", "idle");

	Label_6353:
		WaitForAnimEnd();
		var_1243_string = var_3_string;
		if(var_1243_string != 0) {
			goto Label_6363;
		}
		PlayAnimation("all", "idle");
		goto Label_6353;

	}
	goto Label_6363;
	
Label_6363:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1887";


func_6789(var_0_object, var_1_object, var_2_object, var_3_string, var_1285_object, var_1286_object)
{
	var_0_object = var_1286_object;
	var_1_object = var_1285_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1292_string = "";
		func_6857(var_1286_object, "Smile");
		@@@var_0_object:SetMessage((int)520887);
		@@@var_0_object:ClearReplies();
		var_1301_bool = 0; var_1302_object = Obj();
		var_1302_object = var_1_object;
		func_8778(var_1302_object);
		if(var_1301_bool != 0) {
			@@@var_0_object:AddReply((int)535384, (int)37084, (int)37069);
		}
		@@@var_0_object:AddReply((int)535378, (int)-1, (int)37063);
		@@@var_0_object:AddReply((int)520895, (int)-1, (int)22112);
		goto Label_6827;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a89";
	}
Label_6827:
	var_1316_bool = 0;
	func_9419(var_1316_bool);
	if(var_1316_bool != 0) {

	Label_6831:
		lshWaitForAnimEnd();
		var_1317_string = var_3_string;
		if(var_1317_string != 0) {
		} else {
			var_1318_string = "";
			var_1318_string = var_2_object;
			func_7745(var_1318_string);
			goto Label_6831;
	}
		PlayAnimation("all", "idle");

	Label_6846:
		WaitForAnimEnd();
		var_1321_string = var_3_string;
		if(var_1321_string != 0) {
			goto Label_6856;
		}
		PlayAnimation("all", "idle");
		goto Label_6846;
	}
	goto Label_6856;
	
Label_6856:
	return 0;
	
}


func_7814(var_220_float, var_221_float, var_222_float, var_223_float)
{
	var_224_bool = var_221_float < var_222_float;
	if(var_224_bool != 0) {
		var_222_float = var_220_float;
		return 0;
	}
	var_225_bool = var_221_float > var_223_float;
	if(var_225_bool != 0) {
		var_223_float = var_220_float;
		return 0;
	}
	var_221_float = var_220_float;
	return 0;
}


func_4747(var_0_object, var_978_int, var_979_object)
{
	var_981_object = Obj(); var_982_bool = 0; var_983_int = 0; var_984_bool = 0; var_985_object = Obj(); var_986_bool = 0; var_987_int = 0; var_988_bool = 0;
	var_0_object = var_979_object;
	var_989_bool = 0; var_990_object = Obj(); var_991_float = 0;
	var_979_object = var_990_object;
	func_7520(var_989_bool, var_990_object, (float)70.0);
	var_992_bool = var_989_bool == 0; //@nz
	if(var_992_bool != 0) {
		var_978_int = -2;
		return 8;
	}
	CreateDialog(var_985_object);
	var_993_int = 0;
	func_9413(var_993_int);
	@@var_985_object:SetNPCName(var_993_int);
	var_994_int = 0;
	func_9411(var_994_int);
	@@var_985_object:SetNPCDescription(var_994_int);
	var_995_string = "";
	func_9415(var_995_string);
	@@var_985_object:SetPhoto(var_995_string);
	var_996_string = "";
	func_9417(var_996_string);
	@@var_985_object:SetPhoto2(var_996_string);
	var_997_int = 0;
	func_9394(var_997_int);
	@@var_985_object:SetPlayerName(var_997_int);
	IsOverrideActive(var_986_bool);
	var_998_bool = var_986_bool;
	if(var_998_bool != 0) {
		var_978_int = -2;
		return 8;
	}
	DoDialog(var_985_object);
	var_999_bool = 0; var_1000_object = Obj();
	func_7798(Obj());
	var_1001_object = var_1000_object;
	func_7607(var_999_bool, var_1000_object);
	var_1002_object = Obj(); var_1003_object = Obj();
	var_979_object = var_1002_object;
	var_985_object = var_1003_object;
	TaskCall(17);
	func_4828(var_1004_object, var_1005_object, var_1006_string, var_1007_bool, var_1002_object, var_1003_object);
	TaskReturn();
	@@var_985_object:IsDialogEnd(var_988_bool);
	
Label_4810:
	var_1051_bool = var_988_bool == 0; //@nz
	if(var_1051_bool != 0) {
		sync();
		@@var_985_object:IsDialogEnd(var_988_bool);
		goto Label_4810;
	}
	var_979_object = Obj();
	func_7589();
	StopDialog(var_985_object);
	@@var_985_object:GetReturnValue((int)-1);
	var_987_int = var_978_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8846(var_388_bool)
{
	var_390_int = 0; var_391_string = "";
	func_7825(var_390_int, "b1q03_1");
	var_393_bool = var_390_int == (int)0;
	if(var_393_bool != 0) {
		var_388_bool = 1;
		return 0;
	}
	var_388_bool = 0;
	return 0;
}


func_9361(var_136_object, var_137_string, var_138_float)
{
	var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_object = Obj(); var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_object = Obj(); var_147_bool = 0;
	GetMainOutdoorScene(var_146_object);
	var_148_bool = var_146_object == 0; //@ne
	if(var_148_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_146_object:GetLocator(var_137_string, var_147_bool, var_144_cvector, var_145_cvector);
	var_150_bool = var_147_bool == 0; //@nz
	if(var_150_bool != 0) {
		var_152_int = "Warning: outdoor scene locator " + var_137_string;
		var_154_int = var_152_int + " doesnt exist";
		Trace(var_154_int);
	}
	@@var_146_object:GetMap(var_136_object);
	var_155_bool = var_136_object == 0; //@ne
	if(var_155_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_157_float = GetByIndex(var_144_cvector, 0);
	var_158_float = GetByIndex(var_144_cvector, 2);
	@@var_136_object:SetMapParams(var_157_float, var_158_float, var_138_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_7825(var_354_int, var_355_string)
{
	var_356_int = 0; var_357_int = 0;
	GetVariable(var_355_string, var_357_int);
	var_357_int = var_354_int;
	return 2;
}


func_5267(var_0_object, var_1055_int, var_1056_object)
{
	var_1058_object = Obj(); var_1059_bool = 0; var_1060_int = 0; var_1061_bool = 0; var_1062_object = Obj(); var_1063_bool = 0; var_1064_int = 0; var_1065_bool = 0;
	var_0_object = var_1056_object;
	var_1066_bool = 0; var_1067_object = Obj(); var_1068_float = 0;
	var_1056_object = var_1067_object;
	func_7520(var_1066_bool, var_1067_object, (float)70.0);
	var_1069_bool = var_1066_bool == 0; //@nz
	if(var_1069_bool != 0) {
		var_1055_int = -2;
		return 8;
	}
	CreateDialog(var_1062_object);
	var_1070_int = 0;
	func_9413(var_1070_int);
	@@var_1062_object:SetNPCName(var_1070_int);
	var_1071_int = 0;
	func_9411(var_1071_int);
	@@var_1062_object:SetNPCDescription(var_1071_int);
	var_1072_string = "";
	func_9415(var_1072_string);
	@@var_1062_object:SetPhoto(var_1072_string);
	var_1073_string = "";
	func_9417(var_1073_string);
	@@var_1062_object:SetPhoto2(var_1073_string);
	var_1074_int = 0;
	func_9394(var_1074_int);
	@@var_1062_object:SetPlayerName(var_1074_int);
	IsOverrideActive(var_1063_bool);
	var_1075_bool = var_1063_bool;
	if(var_1075_bool != 0) {
		var_1055_int = -2;
		return 8;
	}
	DoDialog(var_1062_object);
	var_1076_bool = 0; var_1077_object = Obj();
	func_7798(Obj());
	var_1078_object = var_1077_object;
	func_7607(var_1076_bool, var_1077_object);
	var_1079_object = Obj(); var_1080_object = Obj();
	var_1056_object = var_1079_object;
	var_1062_object = var_1080_object;
	TaskCall(19);
	func_5348(var_1081_object, var_1082_object, var_1083_string, var_1084_bool, var_1079_object, var_1080_object);
	TaskReturn();
	@@var_1062_object:IsDialogEnd(var_1065_bool);
	
Label_5330:
	var_1112_bool = var_1065_bool == 0; //@nz
	if(var_1112_bool != 0) {
		sync();
		@@var_1062_object:IsDialogEnd(var_1065_bool);
		goto Label_5330;
	}
	var_1056_object = Obj();
	func_7589();
	StopDialog(var_1062_object);
	@@var_1062_object:GetReturnValue((int)-1);
	var_1064_int = var_1055_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8340(var_234_object)
{
	Trace("revolver ammo2 is given");
	var_237_object = Obj(); var_238_string = ""; var_239_int = 0;
	var_234_object = var_237_object;
	func_7891(var_237_object, "revolver_ammo", (int)2);
	return 0;
}


func_7830(var_138_object, var_139_string)
{
	var_140_object = Obj(); var_141_object = Obj(); var_142_object = Obj(); var_143_object = Obj();
	GetMainOutdoorScene(var_142_object);
	var_145_int = var_139_string + ".bin";
	AddBlankActor(var_143_object, var_142_object, var_139_string, var_145_int);
	var_143_object = var_138_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8858(var_717_bool)
{
	var_719_int = 0; var_720_string = "";
	func_7825(var_719_int, "b1q03_2");
	var_722_bool = var_719_int == (int)0;
	if(var_722_bool != 0) {
		var_717_bool = 1;
		return 0;
	}
	var_717_bool = 0;
	return 0;
}


func_8351()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3232(var_2_object, var_716_string)
{
	var_717_bool = 0;
	func_9419(var_717_bool);
	var_718_bool = var_717_bool == 0; //@nz
	if(var_718_bool != 0) {
		return 0;
	}
	var_719_bool = var_716_string == var_2_object;
	if(var_719_bool != 0) {
		return 0;
	}
	var_720_string = ""; var_721_bool = 0;
	var_716_string = var_720_string;
	var_723_bool = var_716_string == "";
	if(var_723_bool != 0) {
		var_721_bool = 0;
	} else {
		var_721_bool = 1;
	}
	func_7761(var_720_string, var_721_bool);
	var_2_object = var_716_string;
	return 0;
	
}


func_7841(var_200_int, var_201_int)
{
	var_202_object = Obj(); var_203_object = Obj();
	CreateIntVector(var_203_object);
	@@var_203_object:add(var_200_int);
	@@var_203_object:add(var_201_int);
	SendWorldWndMessage((int)3, var_203_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3743(var_0_object, var_795_int, var_796_object)
{
	var_798_object = Obj(); var_799_bool = 0; var_800_int = 0; var_801_bool = 0; var_802_object = Obj(); var_803_bool = 0; var_804_int = 0; var_805_bool = 0;
	var_0_object = var_796_object;
	var_806_bool = 0; var_807_object = Obj(); var_808_float = 0;
	var_796_object = var_807_object;
	func_7520(var_806_bool, var_807_object, (float)70.0);
	var_809_bool = var_806_bool == 0; //@nz
	if(var_809_bool != 0) {
		var_795_int = -2;
		return 8;
	}
	CreateDialog(var_802_object);
	var_810_int = 0;
	func_9413(var_810_int);
	@@var_802_object:SetNPCName(var_810_int);
	var_811_int = 0;
	func_9411(var_811_int);
	@@var_802_object:SetNPCDescription(var_811_int);
	var_812_string = "";
	func_9415(var_812_string);
	@@var_802_object:SetPhoto(var_812_string);
	var_813_string = "";
	func_9417(var_813_string);
	@@var_802_object:SetPhoto2(var_813_string);
	var_814_int = 0;
	func_9394(var_814_int);
	@@var_802_object:SetPlayerName(var_814_int);
	IsOverrideActive(var_803_bool);
	var_815_bool = var_803_bool;
	if(var_815_bool != 0) {
		var_795_int = -2;
		return 8;
	}
	DoDialog(var_802_object);
	var_816_bool = 0; var_817_object = Obj();
	func_7798(Obj());
	var_818_object = var_817_object;
	func_7607(var_816_bool, var_817_object);
	var_819_object = Obj(); var_820_object = Obj();
	var_796_object = var_819_object;
	var_802_object = var_820_object;
	TaskCall(11);
	func_3824(var_821_object, var_822_object, var_823_string, var_824_bool, var_819_object, var_820_object);
	TaskReturn();
	@@var_802_object:IsDialogEnd(var_805_bool);
	
Label_3806:
	var_852_bool = var_805_bool == 0; //@nz
	if(var_852_bool != 0) {
		sync();
		@@var_802_object:IsDialogEnd(var_805_bool);
		goto Label_3806;
	}
	var_796_object = Obj();
	func_7589();
	StopDialog(var_802_object);
	@@var_802_object:GetReturnValue((int)-1);
	var_804_int = var_795_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8357()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_8870(var_412_bool)
{
	var_414_int = 0; var_415_string = "";
	func_7825(var_414_int, "b1q03_1");
	var_417_bool = var_414_int == (int)1;
	if(var_417_bool != 0) {
		var_412_bool = 1;
		return 0;
	}
	var_412_bool = 0;
	return 0;
}


func_8363()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_7853(var_187_object, var_188_int)
{
	var_189_int = 0; var_190_int = 0;
	var_191_object = Obj(); var_192_string = ""; var_193_int = 0;
	var_187_object = var_191_object;
	var_188_int = var_193_int;
	func_7489(var_191_object, "money", var_193_int);
	var_198_bool = var_188_int > (int)0;
	if(var_198_bool != 0) {
		GetInvItemByName(var_190_int, "Money");
		var_200_int = 0; var_201_int = 0;
		var_190_int = var_200_int;
		var_188_int = var_201_int;
		func_7841(var_200_int, var_201_int);
	}
	return 2;
}


func_8369(var_383_object)
{
	var_384_object = Obj(); var_385_string = ""; var_386_float = 0;
	func_9344(Obj());
	var_387_object = var_384_object;
	func_9361(var_384_object, "pt_map_grif", (float)2);
	var_388_object = Obj();
	func_9344(var_388_object);
	@@var_383_object:ShowMap(var_388_object);
	return 0;
}


func_9394(var_155_int)
{
	var_156_int = 0; var_157_int = 0;
	GetVariable("branch", var_157_int);
	var_160_bool = var_157_int == (int)0;
	if(var_160_bool != 0) {
		var_155_int = 1;
		return 2;
	EMIT "GOTO 0x24c1";
	}
	var_162_bool = var_157_int == (int)1;
	if(var_162_bool != 0) {
		var_155_int = 2;
		return 2;
	}
	var_155_int = 3;
	return 2;
}


func_8882(var_578_bool)
{
	var_580_int = 0; var_581_string = "";
	func_7825(var_580_int, "oob3Notkin1");
	var_583_bool = var_580_int == (int)0;
	if(var_583_bool != 0) {
		var_578_bool = 1;
		return 0;
	}
	var_578_bool = 0;
	return 0;
}


func_5819(var_2_object, var_1147_string)
{
	var_1148_bool = 0;
	func_9419(var_1148_bool);
	var_1149_bool = var_1148_bool == 0; //@nz
	if(var_1149_bool != 0) {
		return 0;
	}
	var_1150_bool = var_1147_string == var_2_object;
	if(var_1150_bool != 0) {
		return 0;
	}
	var_1151_string = ""; var_1152_bool = 0;
	var_1147_string = var_1151_string;
	var_1154_bool = var_1147_string == "";
	if(var_1154_bool != 0) {
		var_1152_bool = 0;
	} else {
		var_1152_bool = 1;
	}
	func_7761(var_1151_string, var_1152_bool);
	var_2_object = var_1147_string;
	return 0;
	
}


func_8894(var_557_bool)
{
	var_559_int = 0; var_560_string = "";
	func_7825(var_559_int, "b3q02Dead");
	var_562_bool = var_559_int != (int)0;
	if(var_562_bool != 0) {
		var_557_bool = 1;
		return 0;
	}
	var_557_bool = 0;
	return 0;
}


func_7872(var_116_object, var_117_object, var_118_int)
{
	var_119_int = 0; var_120_int = 0; var_121_bool = 0; var_122_int = 0; var_123_int = 0; var_124_bool = 0;
	@@var_117_object:GetItemID(var_122_int);
	GetInvItemProperty(var_123_int, var_122_int, "Category");
	@@var_116_object:AddItem(var_124_bool, var_117_object, var_123_int, var_118_int);
	var_126_bool = var_124_bool == 0; //@nz
	if(var_126_bool != 0) {
		@@var_116_object:DropItems(var_117_object, var_118_int);
	} else {
		var_127_int = 0; var_128_int = 0;
		var_122_int = var_127_int;
		var_118_int = var_128_int;
		func_7841(var_127_int, var_128_int);
	}
	return 6;
	
}


func_8385(var_108_object)
{
	Trace("revolver ammo6 is given");
	var_111_object = Obj(); var_112_string = ""; var_113_int = 0;
	var_108_object = var_111_object;
	func_7891(var_111_object, "revolver_ammo", (int)6);
	return 0;
}


func_9411(var_152_int)
{
	var_152_int = 515548;
	return 0;
}


func_9413(var_151_int)
{
	var_151_int = 502873;
	return 0;
}


func_9415(var_153_string)
{
	var_153_string = "ui/NPC_Notkin.png";
	return 0;
}


func_9417(var_154_string)
{
	var_154_string = "ui/NPC_Notkin_b.png";
	return 0;
}


func_8906(var_617_bool)
{
	var_619_int = 0; var_620_string = "";
	func_7825(var_619_int, "b3q03");
	var_622_bool = var_619_int == (int)0;
	if(var_622_bool != 0) {
		var_617_bool = 1;
		return 0;
	}
	var_617_bool = 0;
	return 0;
}


func_9419(var_146_bool)
{
	var_146_bool = 1;
	return 0;
}


func_8396(var_189_object)
{
	var_191_bool = 0; var_192_object = Obj(); var_193_float = 0;
	var_189_object = var_192_object;
	func_7904(var_191_bool, var_192_object, (float)0.10000000149011612);
	return 0;
}


func_6857(var_2_object, var_1292_string)
{
	var_1293_bool = 0;
	func_9419(var_1293_bool);
	var_1294_bool = var_1293_bool == 0; //@nz
	if(var_1294_bool != 0) {
		return 0;
	}
	var_1295_bool = var_1292_string == var_2_object;
	if(var_1295_bool != 0) {
		return 0;
	}
	var_1296_string = ""; var_1297_bool = 0;
	var_1292_string = var_1296_string;
	var_1299_bool = var_1292_string == "";
	if(var_1299_bool != 0) {
		var_1297_bool = 0;
	} else {
		var_1297_bool = 1;
	}
	func_7761(var_1296_string, var_1297_bool);
	var_2_object = var_1292_string;
	return 0;
	
}


func_7371()
{
	var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0; var_85_int = 0; var_86_int = 0; var_87_bool = 0;
	WaitForAnimEnd();
	var_88_bool = 0;
	func_7515(var_88_bool);
	var_89_bool = var_88_bool == 0; //@nz
	if(var_89_bool != 0) {
		return 12;
	}
	func_7988((int)0);
	var_90_int = var_82_int;
	var_83_int = 0;
	
Label_7385:
	var_103_bool = 0;
	var_103_bool = 0;
	var_105_bool = var_83_int < (int)5;
	if(var_105_bool != 0) {
		var_106_bool = 0;
		func_7515(var_106_bool);
		if(var_106_bool != 0) {
			var_103_bool = 1;
		}
	}
	if(var_103_bool != 0) {
		var_107_bool = var_82_int == 0; //@nz
		if(var_107_bool != 0) {
			Sleep((int)3, var_84_bool);
			var_109_bool = var_84_bool == 0; //@nz
			if(var_109_bool != 0) {
			} else {
		} else {
				irand(var_85_int, var_82_int);
				irand(var_86_int, (int)5);
				var_115_bool = var_86_int != (int)0;
				if(var_115_bool != 0) {
					var_85_int = 0;
				}
				var_117_string = ""; var_118_int = 0;
				var_85_int = var_118_int;
				func_7981(var_117_string, var_118_int);
				PlayAnimation("all", var_117_string);
				WaitForAnimEnd(var_87_bool);
				var_119_bool = var_87_bool == 0; //@nz
				if(var_119_bool == 0) goto Label_7426;
				goto Label_7437;
		}
		Label_7426:
			var_110_bool = 0;
			func_7440(var_110_bool);
			var_111_bool = var_110_bool == 0; //@nz
			if(var_111_bool != 0) {
				goto Label_7437;
			}
			ResetAAS();
			var_83_int = var_83_int + (int)1;
			goto Label_7385;

		}
	}
Label_7437:
	ResetAAS();
	return 12;
	
}


func_9421(var_89_object)
{
	var_90_bool = GlobalVars[1];
	var_91_bool = var_90_bool == 0; //@nz
	if(var_91_bool != 0) {
		var_92_int = 0; var_93_object = Obj();
		var_89_object = var_93_object;
		TaskCall(6);
		func_2784(var_94_object, var_92_int, var_93_object);
		TaskReturn();
		var_317_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_318_bool = 0; var_319_int = 0;
	func_7975(var_318_bool, (int)1);
	if(var_318_bool != 0) {
		var_321_int = 0; var_322_object = Obj();
		var_89_object = var_322_object;
		TaskCall(0);
		func_0(var_323_object, var_321_int, var_322_object);
		TaskReturn();
		return 0;
	}
	var_481_bool = 0; var_482_int = 0;
	func_7975(var_481_bool, (int)2);
	if(var_481_bool != 0) {
		var_483_int = 0; var_484_object = Obj();
		var_89_object = var_484_object;
		TaskCall(2);
		func_1467(var_485_object, var_483_int, var_484_object);
		TaskReturn();
		return 0;
	}
	var_545_bool = 0; var_546_int = 0;
	func_7975(var_545_bool, (int)3);
	if(var_545_bool != 0) {
		var_547_int = 0; var_548_object = Obj();
		var_89_object = var_548_object;
		TaskCall(4);
		func_1775(var_549_object, var_547_int, var_548_object);
		TaskReturn();
		return 0;
	}
	var_673_bool = 0; var_674_int = 0;
	func_7975(var_673_bool, (int)4);
	if(var_673_bool != 0) {
		var_675_int = 0; var_676_object = Obj();
		var_89_object = var_676_object;
		TaskCall(8);
		func_3023(var_677_object, var_675_int, var_676_object);
		TaskReturn();
		return 0;
	}
	var_793_bool = 0; var_794_int = 0;
	func_7975(var_793_bool, (int)5);
	if(var_793_bool != 0) {
		var_795_int = 0; var_796_object = Obj();
		var_89_object = var_796_object;
		TaskCall(10);
		func_3743(var_797_object, var_795_int, var_796_object);
		TaskReturn();
		return 0;
	}
	var_854_bool = 0; var_855_int = 0;
	func_7975(var_854_bool, (int)6);
	if(var_854_bool != 0) {
		var_856_int = 0; var_857_object = Obj();
		var_89_object = var_857_object;
		TaskCall(12);
		func_4058(var_858_object, var_856_int, var_857_object);
		TaskReturn();
		return 0;
	}
	var_915_bool = 0; var_916_int = 0;
	func_7975(var_915_bool, (int)7);
	if(var_915_bool != 0) {
		var_917_int = 0; var_918_object = Obj();
		var_89_object = var_918_object;
		TaskCall(14);
		func_4391(var_919_object, var_917_int, var_918_object);
		TaskReturn();
		return 0;
	}
	var_976_bool = 0; var_977_int = 0;
	func_7975(var_976_bool, (int)8);
	if(var_976_bool != 0) {
		var_978_int = 0; var_979_object = Obj();
		var_89_object = var_979_object;
		TaskCall(16);
		func_4747(var_980_object, var_978_int, var_979_object);
		TaskReturn();
		return 0;
	}
	var_1053_bool = 0; var_1054_int = 0;
	func_7975(var_1053_bool, (int)9);
	if(var_1053_bool != 0) {
		var_1055_int = 0; var_1056_object = Obj();
		var_89_object = var_1056_object;
		TaskCall(18);
		func_5267(var_1057_object, var_1055_int, var_1056_object);
		TaskReturn();
		return 0;
	}
	var_1114_bool = 0; var_1115_int = 0;
	func_7975(var_1114_bool, (int)10);
	if(var_1114_bool != 0) {
		var_1116_int = 0; var_1117_object = Obj();
		var_89_object = var_1117_object;
		TaskCall(20);
		func_5664(var_1118_object, var_1116_int, var_1117_object);
		TaskReturn();
		return 0;
	}
	var_1184_bool = 0; var_1185_int = 0;
	func_7975(var_1184_bool, (int)11);
	if(var_1184_bool != 0) {
		var_1186_int = 0; var_1187_object = Obj();
		var_89_object = var_1187_object;
		TaskCall(22);
		func_6194(var_1188_object, var_1186_int, var_1187_object);
		TaskReturn();
		return 0;
	}
	var_1259_bool = 0; var_1260_int = 0;
	func_7975(var_1259_bool, (int)12);
	if(var_1259_bool != 0) {
		var_1261_int = 0; var_1262_object = Obj();
		var_89_object = var_1262_object;
		TaskCall(24);
		func_6708(var_1263_object, var_1261_int, var_1262_object);
		TaskReturn();
		return 0;
	}
	var_1326_int = 0; var_1327_object = Obj();
	var_89_object = var_1327_object;
	TaskCall(26);
	func_6985(var_1328_object, var_1326_int, var_1327_object);
	TaskReturn();
	return 0;
}


func_8403(var_138_object)
{
	Trace("rifle ammo10 is given");
	var_141_object = Obj(); var_142_string = ""; var_143_int = 0;
	var_138_object = var_141_object;
	func_7891(var_141_object, "rifle_ammo", (int)10);
	return 0;
}


func_7891(var_111_object, var_112_string, var_113_int)
{
	var_114_object = Obj(); var_115_object = Obj();
	CreateInvItem(var_115_object);
	@@var_115_object:SetItemName(var_112_string);
	var_116_object = Obj(); var_117_object = Obj(); var_118_int = 0;
	var_111_object = var_116_object;
	var_115_object = var_117_object;
	var_113_int = var_118_int;
	func_7872(var_116_object, var_117_object, var_118_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8918(var_642_bool)
{
	var_644_int = 0; var_645_string = "";
	func_7825(var_644_int, "b3q03");
	var_647_bool = var_644_int == (int)1;
	if(var_647_bool != 0) {
		var_642_bool = 1;
		return 0;
	}
	var_642_bool = 0;
	return 0;
}


func_4828(var_0_object, var_1_object, var_2_object, var_3_string, var_1002_object, var_1003_object)
{
	var_0_object = var_1003_object;
	var_1_object = var_1002_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1009_string = "";
		func_4911(var_1003_object, "Neutral");
		@@@var_0_object:SetMessage((int)520847);
		@@@var_0_object:ClearReplies();
		var_1018_bool = 0; var_1019_object = Obj();
		var_1019_object = var_1_object;
		func_9012(var_1018_bool, var_1019_object);
		var_1020_bool = var_1018_bool == 0; //@nz
		if(var_1020_bool != 0) {
			@@@var_0_object:AddReply((int)520848, (int)22066, (int)22065);
		}
		var_1024_bool = 0;
		var_1024_bool = 0;
		var_1025_bool = 0; var_1026_object = Obj();
		var_1026_object = var_1_object;
		func_8600(var_1026_object);
		if(var_1025_bool != 0) {
			var_1031_bool = 0; var_1032_object = Obj();
			var_1032_object = var_1_object;
			func_8612(var_1032_object);
			if(var_1031_bool != 0) {
				var_1024_bool = 1;
			}
		}
		if(var_1024_bool != 0) {
			@@@var_0_object:AddReply((int)521398, (int)25021, (int)22576);
		}
		@@@var_0_object:AddReply((int)520855, (int)-1, (int)22072);
		goto Label_4881;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12e0";
	}
Label_4881:
	var_1043_bool = 0;
	func_9419(var_1043_bool);
	if(var_1043_bool != 0) {

	Label_4885:
		lshWaitForAnimEnd();
		var_1044_string = var_3_string;
		if(var_1044_string != 0) {
		} else {
			var_1045_string = "";
			var_1045_string = var_2_object;
			func_7745(var_1045_string);
			goto Label_4885;
	}
		PlayAnimation("all", "idle");

	Label_4900:
		WaitForAnimEnd();
		var_1048_string = var_3_string;
		if(var_1048_string != 0) {
			goto Label_4910;
		}
		PlayAnimation("all", "idle");
		goto Label_4900;
	}
	goto Label_4910;
	
Label_4910:
	return 0;
	
}


func_6364(var_2_object, var_1223_string)
{
	var_1224_bool = 0;
	func_9419(var_1224_bool);
	var_1225_bool = var_1224_bool == 0; //@nz
	if(var_1225_bool != 0) {
		return 0;
	}
	var_1226_bool = var_1223_string == var_2_object;
	if(var_1226_bool != 0) {
		return 0;
	}
	var_1227_string = ""; var_1228_bool = 0;
	var_1223_string = var_1227_string;
	var_1230_bool = var_1223_string == "";
	if(var_1230_bool != 0) {
		var_1228_bool = 0;
	} else {
		var_1228_bool = 1;
	}
	func_7761(var_1227_string, var_1228_bool);
	var_2_object = var_1223_string;
	return 0;
	
}


func_8414()
{
	SetVariable("oob1Notkin1", (int)1);
	return 0;
}


func_7904(var_191_bool, var_192_object, var_193_float)
{
	var_194_bool = var_192_object == 0; //@nz
	if(var_194_bool != 0) {
		var_191_bool = 0;
		return 0;
	}
	var_196_bool = var_193_float > (int)0;
	if(var_196_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_227_bool = var_193_float < (int)0;
		if(var_227_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_7925;
		}
		var_191_bool = 0;
		return 0;
	}
Label_7925:
	var_198_float = 0;
	var_193_float = var_198_float;
	func_7939(var_198_float);
	var_202_bool = 0; var_203_object = Obj(); var_204_string = ""; var_205_float = 0; var_206_float = 0; var_207_float = 0;
	var_192_object = var_203_object;
	var_193_float = var_205_float;
	func_7467(var_202_bool, var_203_object, "reputation", var_205_float, (float)0, (float)1);
	var_191_bool = 1;
	return 0;
	
}


func_2784(var_0_object, var_92_int, var_93_object)
{
	var_95_object = Obj(); var_96_bool = 0; var_97_int = 0; var_98_bool = 0; var_99_object = Obj(); var_100_bool = 0; var_101_int = 0; var_102_bool = 0;
	var_0_object = var_93_object;
	var_103_bool = 0; var_104_object = Obj(); var_105_float = 0;
	var_93_object = var_104_object;
	func_7520(var_103_bool, var_104_object, (float)70.0);
	var_150_bool = var_103_bool == 0; //@nz
	if(var_150_bool != 0) {
		var_92_int = -2;
		return 8;
	}
	CreateDialog(var_99_object);
	var_151_int = 0;
	func_9413(var_151_int);
	@@var_99_object:SetNPCName(var_151_int);
	var_152_int = 0;
	func_9411(var_152_int);
	@@var_99_object:SetNPCDescription(var_152_int);
	var_153_string = "";
	func_9415(var_153_string);
	@@var_99_object:SetPhoto(var_153_string);
	var_154_string = "";
	func_9417(var_154_string);
	@@var_99_object:SetPhoto2(var_154_string);
	var_155_int = 0;
	func_9394(var_155_int);
	@@var_99_object:SetPlayerName(var_155_int);
	IsOverrideActive(var_100_bool);
	var_163_bool = var_100_bool;
	if(var_163_bool != 0) {
		var_92_int = -2;
		return 8;
	}
	DoDialog(var_99_object);
	var_164_bool = 0; var_165_object = Obj();
	func_7798(Obj());
	var_166_object = var_165_object;
	func_7607(var_164_bool, var_165_object);
	var_259_object = Obj(); var_260_object = Obj();
	var_93_object = var_259_object;
	var_99_object = var_260_object;
	TaskCall(7);
	func_2865(var_261_object, var_262_object, var_263_string, var_264_bool, var_259_object, var_260_object);
	TaskReturn();
	@@var_99_object:IsDialogEnd(var_102_bool);
	
Label_2847:
	var_308_bool = var_102_bool == 0; //@nz
	if(var_308_bool != 0) {
		sync();
		@@var_99_object:IsDialogEnd(var_102_bool);
		goto Label_2847;
	}
	var_93_object = Obj();
	func_7589();
	StopDialog(var_99_object);
	@@var_99_object:GetReturnValue((int)-1);
	var_101_int = var_92_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8930(var_648_bool, var_649_object)
{
	var_650_bool = 0; var_651_object = Obj();
	var_649_object = var_651_object;
	func_9095(var_650_bool, var_651_object);
	if(var_650_bool != 0) {
		var_648_bool = 1;
		return 0;
	}
	var_648_bool = 0;
	return 0;
}


func_8420()
{
	var_79_object = Obj(); var_80_int = 0; var_81_object = Obj(); var_82_int = 0;
	SetVariable("b1q03_1", (int)1);
	func_9344(Obj());
	var_85_object = var_81_object;
	var_96_float = 0;
	func_7961(var_96_float);
	@@var_81_object:AddMark("b1q03NotkinGotoDoberman", "pt_b1q03_doberman", (int)0, (int)518098, var_96_float);
	var_103_float = 0;
	func_7961(var_103_float);
	@@var_81_object:AddMark("b1q03NotkinGotoDobermanSelf", "pt_map_notkin", (int)0, (int)530599, var_103_float);
	func_9199();
	func_9186();
	GetVariable("b1q03", var_82_int);
	var_137_bool = var_82_int != (int)0;
	if(var_137_bool != 0) {
		return 4;
	}
	var_138_object = Obj(); var_139_string = "";
	func_7830(var_138_object, "quest_b1_03");
	var_146_bool = 0; var_147_string = ""; var_148_string = "";
	func_7949(var_146_bool, "quest_b1_03", "place_doberman");
	return 4;
}
EMIT "Stack[-2] = 0";


func_5348(var_0_object, var_1_object, var_2_object, var_3_string, var_1079_object, var_1080_object)
{
	var_0_object = var_1080_object;
	var_1_object = var_1079_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1086_string = "";
		func_5412(var_1080_object, "Neutral");
		@@@var_0_object:SetMessage((int)520857);
		@@@var_0_object:ClearReplies();
		var_1095_bool = 0; var_1096_object = Obj();
		var_1096_object = var_1_object;
		func_9012(var_1095_bool, var_1096_object);
		var_1097_bool = var_1095_bool == 0; //@nz
		if(var_1097_bool != 0) {
			@@@var_0_object:AddReply((int)520858, (int)23437, (int)22075);
		}
		@@@var_0_object:AddReply((int)520865, (int)-1, (int)22082);
		goto Label_5382;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14e8";
	}
Label_5382:
	var_1104_bool = 0;
	func_9419(var_1104_bool);
	if(var_1104_bool != 0) {

	Label_5386:
		lshWaitForAnimEnd();
		var_1105_string = var_3_string;
		if(var_1105_string != 0) {
		} else {
			var_1106_string = "";
			var_1106_string = var_2_object;
			func_7745(var_1106_string);
			goto Label_5386;
	}
		PlayAnimation("all", "idle");

	Label_5401:
		WaitForAnimEnd();
		var_1109_string = var_3_string;
		if(var_1109_string != 0) {
			goto Label_5411;
		}
		PlayAnimation("all", "idle");
		goto Label_5401;
	}
	goto Label_5411;
	
Label_5411:
	return 0;
	
}


func_8940(var_623_bool)
{
	var_625_int = 0; var_626_string = "";
	func_7825(var_625_int, "oob3Notkin2");
	var_628_bool = var_625_int == (int)0;
	if(var_628_bool != 0) {
		var_623_bool = 1;
		return 0;
	}
	var_623_bool = 0;
	return 0;
}


func_1775(var_0_object, var_547_int, var_548_object)
{
	var_550_object = Obj(); var_551_bool = 0; var_552_int = 0; var_553_bool = 0; var_554_object = Obj(); var_555_bool = 0; var_556_int = 0; var_557_bool = 0;
	var_0_object = var_548_object;
	var_558_bool = 0; var_559_object = Obj(); var_560_float = 0;
	var_548_object = var_559_object;
	func_7520(var_558_bool, var_559_object, (float)70.0);
	var_561_bool = var_558_bool == 0; //@nz
	if(var_561_bool != 0) {
		var_547_int = -2;
		return 8;
	}
	CreateDialog(var_554_object);
	var_562_int = 0;
	func_9413(var_562_int);
	@@var_554_object:SetNPCName(var_562_int);
	var_563_int = 0;
	func_9411(var_563_int);
	@@var_554_object:SetNPCDescription(var_563_int);
	var_564_string = "";
	func_9415(var_564_string);
	@@var_554_object:SetPhoto(var_564_string);
	var_565_string = "";
	func_9417(var_565_string);
	@@var_554_object:SetPhoto2(var_565_string);
	var_566_int = 0;
	func_9394(var_566_int);
	@@var_554_object:SetPlayerName(var_566_int);
	IsOverrideActive(var_555_bool);
	var_567_bool = var_555_bool;
	if(var_567_bool != 0) {
		var_547_int = -2;
		return 8;
	}
	DoDialog(var_554_object);
	var_568_bool = 0; var_569_object = Obj();
	func_7798(Obj());
	var_570_object = var_569_object;
	func_7607(var_568_bool, var_569_object);
	var_571_object = Obj(); var_572_object = Obj();
	var_548_object = var_571_object;
	var_554_object = var_572_object;
	TaskCall(5);
	func_1856(var_573_object, var_574_object, var_575_string, var_576_bool, var_571_object, var_572_object);
	TaskReturn();
	@@var_554_object:IsDialogEnd(var_557_bool);
	
Label_1838:
	var_671_bool = var_557_bool == 0; //@nz
	if(var_671_bool != 0) {
		sync();
		@@var_554_object:IsDialogEnd(var_557_bool);
		goto Label_1838;
	}
	var_548_object = Obj();
	func_7589();
	StopDialog(var_554_object);
	@@var_554_object:GetReturnValue((int)-1);
	var_556_int = var_547_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3824(var_0_object, var_1_object, var_2_object, var_3_string, var_819_object, var_820_object)
{
	var_0_object = var_820_object;
	var_1_object = var_819_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_826_string = "";
		func_3888(var_820_object, "Smile");
		@@@var_0_object:SetMessage((int)520817);
		@@@var_0_object:ClearReplies();
		var_835_bool = 0; var_836_object = Obj();
		var_836_object = var_1_object;
		func_9012(var_835_bool, var_836_object);
		var_837_bool = var_835_bool == 0; //@nz
		if(var_837_bool != 0) {
			@@@var_0_object:AddReply((int)520818, (int)22036, (int)22035);
		}
		@@@var_0_object:AddReply((int)520825, (int)-1, (int)22042);
		goto Label_3858;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xef4";
	}
Label_3858:
	var_844_bool = 0;
	func_9419(var_844_bool);
	if(var_844_bool != 0) {

	Label_3862:
		lshWaitForAnimEnd();
		var_845_string = var_3_string;
		if(var_845_string != 0) {
		} else {
			var_846_string = "";
			var_846_string = var_2_object;
			func_7745(var_846_string);
			goto Label_3862;
	}
		PlayAnimation("all", "idle");

	Label_3877:
		WaitForAnimEnd();
		var_849_string = var_3_string;
		if(var_849_string != 0) {
			goto Label_3887;
		}
		PlayAnimation("all", "idle");
		goto Label_3877;
	}
	goto Label_3887;
	
Label_3887:
	return 0;
	
}


func_8952(var_466_bool)
{
	var_468_int = 0; var_469_string = "";
	func_7825(var_468_int, "b1q01");
	var_471_bool = var_468_int == (int)0;
	if(var_471_bool != 0) {
		var_466_bool = 1;
		return 0;
	}
	var_466_bool = 0;
	return 0;
}


func_7939(var_198_float)
{
	var_199_object = Obj(); var_200_object = Obj();
	CreateFloatVector(var_200_object);
	@@var_200_object:add(var_198_float);
	SendWorldWndMessage((int)16, var_200_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8964(var_459_bool)
{
	var_461_int = 0; var_462_string = "";
	func_7825(var_461_int, "b1q01");
	var_464_bool = var_461_int == (int)1000;
	if(var_464_bool != 0) {
		var_459_bool = 1;
		return 0;
	}
	var_459_bool = 0;
	return 0;
}


func_7949(var_128_bool, var_129_string, var_130_string)
{
	var_131_object = Obj(); var_132_object = Obj();
	FindActor(var_132_object, var_129_string);
	var_133_bool = var_132_object == 0; //@ne
	if(var_133_bool != 0) {
		var_128_bool = 0;
		return 2;
	}
	Trigger(var_132_object, var_130_string);
	var_128_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8976(var_453_bool)
{
	var_455_int = 0; var_456_string = "";
	func_7825(var_455_int, "oob1Notkin2");
	var_458_bool = var_455_int == (int)0;
	if(var_458_bool != 0) {
		var_453_bool = 1;
		return 0;
	}
	var_453_bool = 0;
	return 0;
}


func_7440(var_110_bool)
{
	var_110_bool = 1;
	return 0;
}


func_7442()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_8471()
{
	SetVariable("b1q03_1", (int)1000);
	func_9160();
	return 0;
}


func_7447(var_86_float, var_87_object)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0);
	GetPosition(var_91_cvector);
	@@var_87_object:GetPosition(var_92_cvector);
	var_93_cvector = var_92_cvector - var_91_cvector;
	var_86_float = var_93_cvector | var_93_cvector;
	return 6;
}


func_7961(var_94_float)
{
	var_95_float = 0; var_96_float = 0;
	GetGameTime(var_96_float);
	var_96_float = var_94_float;
	return 2;
}


func_8988(var_523_bool)
{
	var_525_int = 0; var_526_string = "";
	func_7825(var_525_int, "oob2Notkin1");
	var_528_bool = var_525_int == (int)0;
	if(var_528_bool != 0) {
		var_523_bool = 1;
		return 0;
	}
	var_523_bool = 0;
	return 0;
}


func_286(var_2_object, var_364_string)
{
	var_365_bool = 0;
	func_9419(var_365_bool);
	var_366_bool = var_365_bool == 0; //@nz
	if(var_366_bool != 0) {
		return 0;
	}
	var_367_bool = var_364_string == var_2_object;
	if(var_367_bool != 0) {
		return 0;
	}
	var_368_string = ""; var_369_bool = 0;
	var_364_string = var_368_string;
	var_371_bool = var_364_string == "";
	if(var_371_bool != 0) {
		var_369_bool = 0;
	} else {
		var_369_bool = 1;
	}
	func_7761(var_368_string, var_369_bool);
	var_2_object = var_364_string;
	return 0;
	
}


func_7455(var_210_bool, var_211_object, var_212_string)
{
	var_213_bool = 0; var_214_bool = 0;
	var_217_bool = IsFuncExist(var_211_object, "HasProperty", (int)2);
	var_218_bool = var_217_bool == 0; //@nz
	if(var_218_bool != 0) {
		var_210_bool = 0;
		return 2;
	}
	@@var_211_object:HasProperty(var_212_string, var_214_bool);
	var_214_bool = var_210_bool;
	return 2;
}


func_8480()
{
	SetVariable("b1q03_1", (int)-1);
	func_9173();
	return 0;
}


func_7966(var_219_int)
{
	var_220_float = 0; var_221_float = 0;
	GetGameTime(var_221_float);
	var_223_int = 0;
	var_223_int = var_221_float / (int)24;
	var_219_int = (int)1 + var_223_int;
	return 2;
}


func_5412(var_2_object, var_1086_string)
{
	var_1087_bool = 0;
	func_9419(var_1087_bool);
	var_1088_bool = var_1087_bool == 0; //@nz
	if(var_1088_bool != 0) {
		return 0;
	}
	var_1089_bool = var_1086_string == var_2_object;
	if(var_1089_bool != 0) {
		return 0;
	}
	var_1090_string = ""; var_1091_bool = 0;
	var_1086_string = var_1090_string;
	var_1093_bool = var_1086_string == "";
	if(var_1093_bool != 0) {
		var_1091_bool = 0;
	} else {
		var_1091_bool = 1;
	}
	func_7761(var_1090_string, var_1091_bool);
	var_2_object = var_1086_string;
	return 0;
	
}


func_7975(var_318_bool, var_319_int)
{
	var_320_int = 0;
	func_7966(var_320_int);
	var_318_bool = var_320_int == var_319_int;
	return 0;
}


func_9000(var_284_bool)
{
	var_286_int = 0; var_287_string = "";
	func_7825(var_286_int, "b3q03");
	var_289_bool = var_286_int == (int)1000;
	if(var_289_bool != 0) {
		var_284_bool = 1;
		return 0;
	}
	var_284_bool = 0;
	return 0;
}


func_8489(var_132_object)
{
	Trace("samopal ammo5 is given");
	var_135_object = Obj(); var_136_string = ""; var_137_int = 0;
	var_132_object = var_135_object;
	func_7891(var_135_object, "samopal_ammo", (int)5);
	return 0;
}


func_4391(var_0_object, var_917_int, var_918_object)
{
	var_920_object = Obj(); var_921_bool = 0; var_922_int = 0; var_923_bool = 0; var_924_object = Obj(); var_925_bool = 0; var_926_int = 0; var_927_bool = 0;
	var_0_object = var_918_object;
	var_928_bool = 0; var_929_object = Obj(); var_930_float = 0;
	var_918_object = var_929_object;
	func_7520(var_928_bool, var_929_object, (float)70.0);
	var_931_bool = var_928_bool == 0; //@nz
	if(var_931_bool != 0) {
		var_917_int = -2;
		return 8;
	}
	CreateDialog(var_924_object);
	var_932_int = 0;
	func_9413(var_932_int);
	@@var_924_object:SetNPCName(var_932_int);
	var_933_int = 0;
	func_9411(var_933_int);
	@@var_924_object:SetNPCDescription(var_933_int);
	var_934_string = "";
	func_9415(var_934_string);
	@@var_924_object:SetPhoto(var_934_string);
	var_935_string = "";
	func_9417(var_935_string);
	@@var_924_object:SetPhoto2(var_935_string);
	var_936_int = 0;
	func_9394(var_936_int);
	@@var_924_object:SetPlayerName(var_936_int);
	IsOverrideActive(var_925_bool);
	var_937_bool = var_925_bool;
	if(var_937_bool != 0) {
		var_917_int = -2;
		return 8;
	}
	DoDialog(var_924_object);
	var_938_bool = 0; var_939_object = Obj();
	func_7798(Obj());
	var_940_object = var_939_object;
	func_7607(var_938_bool, var_939_object);
	var_941_object = Obj(); var_942_object = Obj();
	var_918_object = var_941_object;
	var_924_object = var_942_object;
	TaskCall(15);
	func_4472(var_943_object, var_944_object, var_945_string, var_946_bool, var_941_object, var_942_object);
	TaskReturn();
	@@var_924_object:IsDialogEnd(var_927_bool);
	
Label_4454:
	var_974_bool = var_927_bool == 0; //@nz
	if(var_974_bool != 0) {
		sync();
		@@var_924_object:IsDialogEnd(var_927_bool);
		goto Label_4454;
	}
	var_918_object = Obj();
	func_7589();
	StopDialog(var_924_object);
	@@var_924_object:GetReturnValue((int)-1);
	var_926_int = var_917_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7467(var_202_bool, var_203_object, var_204_string, var_205_float, var_206_float, var_207_float)
{
	var_208_float = 0; var_209_float = 0;
	var_210_bool = 0; var_211_object = Obj(); var_212_string = "";
	var_203_object = var_211_object;
	var_204_string = var_212_string;
	func_7455(var_210_bool, var_211_object, var_212_string);
	var_219_bool = var_210_bool == 0; //@nz
	if(var_219_bool != 0) {
		var_202_bool = 0;
		return 2;
	}
	@@var_203_object:GetProperty(var_204_string, var_209_float);
	var_220_float = 0; var_221_float = 0; var_222_float = 0; var_223_float = 0;
	var_221_float = var_209_float + var_205_float;
	var_206_float = var_222_float;
	var_207_float = var_223_float;
	func_7814(var_220_float, var_221_float, var_222_float, var_223_float);
	@@var_203_object:SetProperty(var_204_string, var_220_float);
	var_202_bool = 1;
	return 2;
}


func_7981(var_96_string, var_97_int)
{
	var_98_string = ""; var_99_string = "";
	var_100_int = var_97_int;
	if(var_100_int != 0) {
		"idle" = "idle" + var_97_int;
	}
	var_99_string = var_96_string;
	return 2;
}


func_4911(var_2_object, var_1009_string)
{
	var_1010_bool = 0;
	func_9419(var_1010_bool);
	var_1011_bool = var_1010_bool == 0; //@nz
	if(var_1011_bool != 0) {
		return 0;
	}
	var_1012_bool = var_1009_string == var_2_object;
	if(var_1012_bool != 0) {
		return 0;
	}
	var_1013_string = ""; var_1014_bool = 0;
	var_1009_string = var_1013_string;
	var_1016_bool = var_1009_string == "";
	if(var_1016_bool != 0) {
		var_1014_bool = 0;
	} else {
		var_1014_bool = 1;
	}
	func_7761(var_1013_string, var_1014_bool);
	var_2_object = var_1009_string;
	return 0;
	
}


func_3888(var_2_object, var_826_string)
{
	var_827_bool = 0;
	func_9419(var_827_bool);
	var_828_bool = var_827_bool == 0; //@nz
	if(var_828_bool != 0) {
		return 0;
	}
	var_829_bool = var_826_string == var_2_object;
	if(var_829_bool != 0) {
		return 0;
	}
	var_830_string = ""; var_831_bool = 0;
	var_826_string = var_830_string;
	var_833_bool = var_826_string == "";
	if(var_833_bool != 0) {
		var_831_bool = 0;
	} else {
		var_831_bool = 1;
	}
	func_7761(var_830_string, var_831_bool);
	var_2_object = var_826_string;
	return 0;
	
}


func_2865(var_0_object, var_1_object, var_2_object, var_3_string, var_259_object, var_260_object)
{
	var_0_object = var_260_object;
	var_1_object = var_259_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_266_string = "";
		func_2923(var_260_object, "Neutral");
		@@@var_0_object:SetMessage((int)520776);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520777, (int)21992, (int)21991);
		@@@var_0_object:AddReply((int)520780, (int)21995, (int)21994);
		goto Label_2893;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb35";
	}
Label_2893:
	var_290_bool = 0;
	func_9419(var_290_bool);
	if(var_290_bool != 0) {

	Label_2897:
		lshWaitForAnimEnd();
		var_291_string = var_3_string;
		if(var_291_string != 0) {
		} else {
			var_292_string = "";
			var_292_string = var_2_object;
			func_7745(var_292_string);
			goto Label_2897;
	}
		PlayAnimation("all", "idle");

	Label_2912:
		WaitForAnimEnd();
		var_305_string = var_3_string;
		if(var_305_string != 0) {
			goto Label_2922;
		}
		PlayAnimation("all", "idle");
		goto Label_2912;
	}
	goto Label_2922;
	
Label_2922:
	return 0;
	
}


func_8500()
{
	var_210_int = 0; var_211_int = 0;
	GetVariable("b1q03", var_211_int);
	var_214_bool = var_211_int == (int)1000;
	if(var_214_bool != 0) {
		return 2;
	}
	var_215_bool = 0; var_216_string = ""; var_217_string = "";
	func_7949(var_215_bool, "quest_b1_03", "cleanup");
	SetVariable("b1q03", (int)1000);
	return 2;
}


func_9012(var_745_bool, var_746_object)
{
	var_747_bool = 0; var_748_object = Obj();
	var_746_object = var_748_object;
	func_9102(var_748_object);
	if(var_747_bool != 0) {
		var_745_bool = 1;
		return 0;
	}
	var_745_bool = 0;
	return 0;
}


func_7988(var_90_int)
{
	var_91_int = 0; var_92_bool = 0; var_93_int = 0; var_94_bool = 0;
	var_93_int = 0;
	
Label_7990:
	var_96_string = ""; var_97_int = 0;
	var_93_int = var_97_int;
	func_7981(var_96_string, var_97_int);
	HasAnimation(var_94_bool, "all", var_96_string);
	var_101_bool = var_94_bool == 0; //@nz
	if(var_101_bool != 0) {
	} else {
		var_93_int = var_93_int + (int)1;
		goto Label_7990;
	}
	var_93_int = var_90_int;
	return 4;
	
}


func_9022(var_179_bool, var_180_object)
{
	var_181_bool = 0; var_182_object = Obj();
	var_180_object = var_182_object;
	func_9114(var_181_bool, var_182_object);
	if(var_181_bool != 0) {
		var_179_bool = 1;
		return 0;
	}
	var_179_bool = 0;
	return 0;
}


func_1856(var_0_object, var_1_object, var_2_object, var_3_string, var_571_object, var_572_object)
{
	var_0_object = var_572_object;
	var_1_object = var_571_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_578_bool = 0; var_579_object = Obj();
		var_579_object = var_1_object;
		func_8882(var_579_object);
		if(var_578_bool != 0) {
			var_584_object = Obj(); var_585_object = Obj();
			var_584_object = var_1_object;
			var_585_object = var_0_object;
			func_8573();
			var_588_string = "";
			func_2022(var_572_object, "Triumph");
			@@@var_0_object:SetMessage((int)518396);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519128, (int)20262, (int)20261);
			@@@var_0_object:AddReply((int)519126, (int)20273, (int)20259);
			@@@var_0_object:AddReply((int)519136, (int)20270, (int)20269);
		} else {
				var_614_string = "";
				func_2022(var_572_object, "Think");
				@@@var_0_object:SetMessage((int)518398);
				@@@var_0_object:ClearReplies();
				var_616_bool = 0;
				var_616_bool = 0;
				var_617_bool = 0; var_618_object = Obj();
				var_618_object = var_1_object;
				func_8906(var_618_object);
				if(var_617_bool != 0) {
					var_623_bool = 0; var_624_object = Obj();
					var_624_object = var_1_object;
					func_8940(var_624_object);
					if(var_623_bool != 0) {
						var_616_bool = 1;
					}
				}
				if(var_616_bool != 0) {
					@@@var_0_object:AddReply((int)518399, (int)20296, (int)19512);
				}
				var_632_bool = 0;
				var_632_bool = 0;
				var_633_bool = 0; var_634_object = Obj();
				var_634_object = var_1_object;
				func_8906(var_634_object);
				if(var_633_bool != 0) {
					var_635_bool = 0; var_636_object = Obj();
					var_636_object = var_1_object;
					func_8940(var_636_object);
					var_637_bool = var_635_bool == 0; //@nz
					if(var_637_bool != 0) {
						var_632_bool = 1;
					}
				}
				if(var_632_bool != 0) {
					@@@var_0_object:AddReply((int)518404, (int)19518, (int)19517);
				}
				var_641_bool = 0;
				var_641_bool = 0;
				var_642_bool = 0; var_643_object = Obj();
				var_643_object = var_1_object;
				func_8918(var_643_object);
				if(var_642_bool != 0) {
					var_648_bool = 0; var_649_object = Obj();
					var_649_object = var_1_object;
					func_8930(var_648_bool, var_649_object);
					if(var_648_bool != 0) {
						var_641_bool = 1;
					}
				}
				if(var_641_bool != 0) {
					@@@var_0_object:AddReply((int)518407, (int)19521, (int)19520);
				}
				var_659_bool = 0;
				var_659_bool = 0;
				var_660_bool = 0; var_661_object = Obj();
				var_661_object = var_1_object;
				func_8918(var_661_object);
				if(var_660_bool != 0) {
					var_662_bool = 0; var_663_object = Obj();
					var_663_object = var_1_object;
					func_8930(var_662_bool, var_663_object);
					var_664_bool = var_662_bool == 0; //@nz
					if(var_664_bool != 0) {
						var_659_bool = 1;
					}
				}
				if(var_659_bool != 0) {
					@@@var_0_object:AddReply((int)519672, (int)20837, (int)20836);
				}
				@@@var_0_object:AddReply((int)518400, (int)-1, (int)19513);
				goto Label_1992;
		}
	}
Label_1992:
	var_606_bool = 0;
	func_9419(var_606_bool);
	if(var_606_bool != 0) {

	Label_1996:
		lshWaitForAnimEnd();
		var_607_string = var_3_string;
		if(var_607_string != 0) {
		} else {
			var_608_string = "";
			var_608_string = var_2_object;
			func_7745(var_608_string);
			goto Label_1996;
	}
		PlayAnimation("all", "idle");

	Label_2011:
		WaitForAnimEnd();
		var_611_string = var_3_string;
		if(var_611_string != 0) {
			goto Label_2021;
		}
		PlayAnimation("all", "idle");
		goto Label_2011;

	}
	goto Label_2021;
	
Label_2021:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x744";


func_7489(var_191_object, var_192_string, var_193_int)
{
	var_194_int = 0; var_195_int = 0;
	@@var_191_object:GetProperty(var_192_string, var_195_int);
	var_196_int = var_195_int + var_193_int;
	@@var_191_object:SetProperty(var_192_string, var_196_int);
	return 2;
}


func_8005()
{
	var_243_object = Obj(); var_244_object = Obj();
	SetVariable("b3q03", (int)1);
	func_9344(Obj());
	var_247_object = var_244_object;
	var_252_float = 0;
	func_7961(var_252_float);
	@@var_244_object:AddMark("b3q03BurahHome", "pt_map_burah_home", (int)0, (int)519682, var_252_float);
	func_9225();
	func_9251();
	return 2;
}
EMIT "Stack[-1] = 0";


func_8518(var_153_object)
{
	var_154_object = Obj(); var_155_string = ""; var_156_float = 0;
	func_9344(Obj());
	var_157_object = var_154_object;
	func_9361(var_154_object, "pt_b1q03_doberman", (float)2);
	var_177_object = Obj();
	func_9344(var_177_object);
	@@var_153_object:ShowMap(var_177_object);
	return 0;
}


func_7496(var_79_bool, var_80_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0;
	GetPosition(var_84_cvector);
	var_85_cvector = var_80_cvector - var_84_cvector;
	var_87_float = GetByIndex(var_85_cvector, 0);
	var_88_float = GetByIndex(var_85_cvector, 2);
	Rotate(var_87_float, var_88_float, var_86_bool);
	var_86_bool = var_79_bool;
	return 6;
}


func_9032(var_339_bool, var_340_object)
{
	var_341_int = 0; var_342_int = 0;
	@@var_340_object:GetProperty("money", var_342_int);
	var_339_bool = var_342_int >= (int)1500;
	return 2;
}


func_6985(var_0_object, var_1326_int, var_1327_object)
{
	var_1329_object = Obj(); var_1330_bool = 0; var_1331_int = 0; var_1332_bool = 0; var_1333_object = Obj(); var_1334_bool = 0; var_1335_int = 0; var_1336_bool = 0;
	var_0_object = var_1327_object;
	var_1337_bool = 0; var_1338_object = Obj(); var_1339_float = 0;
	var_1327_object = var_1338_object;
	func_7520(var_1337_bool, var_1338_object, (float)70.0);
	var_1340_bool = var_1337_bool == 0; //@nz
	if(var_1340_bool != 0) {
		var_1326_int = -2;
		return 8;
	}
	CreateDialog(var_1333_object);
	var_1341_int = 0;
	func_9413(var_1341_int);
	@@var_1333_object:SetNPCName(var_1341_int);
	var_1342_int = 0;
	func_9411(var_1342_int);
	@@var_1333_object:SetNPCDescription(var_1342_int);
	var_1343_string = "";
	func_9415(var_1343_string);
	@@var_1333_object:SetPhoto(var_1343_string);
	var_1344_string = "";
	func_9417(var_1344_string);
	@@var_1333_object:SetPhoto2(var_1344_string);
	var_1345_int = 0;
	func_9394(var_1345_int);
	@@var_1333_object:SetPlayerName(var_1345_int);
	IsOverrideActive(var_1334_bool);
	var_1346_bool = var_1334_bool;
	if(var_1346_bool != 0) {
		var_1326_int = -2;
		return 8;
	}
	DoDialog(var_1333_object);
	var_1347_bool = 0; var_1348_object = Obj();
	func_7798(Obj());
	var_1349_object = var_1348_object;
	func_7607(var_1347_bool, var_1348_object);
	var_1350_object = Obj(); var_1351_object = Obj();
	var_1327_object = var_1350_object;
	var_1333_object = var_1351_object;
	TaskCall(27);
	func_7066(var_1352_object, var_1353_object, var_1354_string, var_1355_bool, var_1350_object, var_1351_object);
	TaskReturn();
	@@var_1333_object:IsDialogEnd(var_1336_bool);
	
Label_7048:
	var_1380_bool = var_1336_bool == 0; //@nz
	if(var_1380_bool != 0) {
		sync();
		@@var_1333_object:IsDialogEnd(var_1336_bool);
		goto Label_7048;
	}
	var_1327_object = Obj();
	func_7589();
	StopDialog(var_1333_object);
	@@var_1333_object:GetReturnValue((int)-1);
	var_1335_int = var_1326_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9039(var_779_bool, var_780_object)
{
	var_781_int = 0; var_782_int = 0;
	@@var_780_object:GetItemCountOfType(var_782_int, "hunter_mark");
	var_779_bool = var_782_int >= (int)4;
	return 2;
}


func_7506(var_75_bool, var_76_object)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	@@var_76_object:GetPosition(var_78_cvector);
	var_79_bool = 0; var_80_cvector = CVector(0,0,0);
	var_78_cvector = var_80_cvector;
	func_7496(var_79_bool, var_80_cvector);
	var_79_bool = var_75_bool;
	return 2;
}


func_8534()
{
	var_107_object = Obj(); var_108_int = 0; var_109_object = Obj(); var_110_int = 0;
	SetVariable("b3q02", (int)5);
	func_9344(Obj());
	var_113_object = var_109_object;
	var_124_float = 0;
	func_7961(var_124_float);
	@@var_109_object:AddMark("b3q02NotkinGotoKapella", "pt_map_kapella", (int)0, (int)519654, var_124_float);
	func_9212();
	GetVariable("b3q02Dead", var_110_int);
	var_151_int = var_110_int;
	if(var_151_int != 0) {
		var_152_bool = 0; var_153_string = ""; var_154_string = "";
		func_7949(var_152_bool, "quest_b3_02", "place_grabitel2");
	} else {
		var_158_bool = 0; var_159_string = ""; var_160_string = "";
		func_7949(var_158_bool, "quest_b3_02", "remove_grabitel");
	}
	return 4;
	
}
EMIT "Stack[-2] = 0";


func_9046(var_181_bool, var_182_object)
{
	var_183_int = 0; var_184_int = 0;
	@@var_182_object:GetProperty("money", var_184_int);
	var_181_bool = var_184_int >= (int)1000;
	return 2;
}


func_7515(var_72_bool)
{
	var_73_bool = 0; var_74_bool = 0;
	IsLoaded(var_74_bool);
	var_74_bool = var_72_bool;
	return 2;
}


func_9053(var_377_bool, var_378_object)
{
	var_379_int = 0; var_380_int = 0;
	@@var_378_object:GetItemCountOfType(var_380_int, "grabitel_mark");
	var_377_bool = var_380_int >= (int)3;
	return 2;
}


func_8031(var_303_object)
{
	var_305_int = 0; var_306_int = 0;
	SetVariable("b3q03", (int)1000);
	func_9238();
	@@var_303_object:RemoveItemByType(var_306_int, "grass_combination", (int)10);
	return 2;
}


func_7520(var_103_bool, var_104_object, var_105_float)
{
	var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_bool = 0; var_114_bool = 0; var_115_float = 0; var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_bool = 0; var_123_bool = 0;
	@@var_104_object:GetPosition(var_116_cvector);
	@@var_104_object:GetEyesHeight(var_115_float);
	var_124_float = GetByIndex(var_116_cvector, 1);
	var_124_float = var_124_float + var_115_float;
	SetByIndex(var_116_cvector, 1) = var_124_float;
	GetPosition(var_117_cvector);
	GetEyesHeight(var_115_float);
	var_125_float = GetByIndex(var_117_cvector, 1);
	var_125_float = var_125_float + var_115_float;
	SetByIndex(var_117_cvector, 1) = var_125_float;
	var_118_cvector = var_116_cvector - var_117_cvector;
	var_126_float = GetByIndex(var_118_cvector, 1);
	SetByIndex(var_118_cvector, 1) = (float)0;
	var_127_int = var_118_cvector | var_118_cvector;
	var_128_float = sqrt(var_127_int);
	var_118_cvector = var_118_cvector / var_128_float;
	var_119_cvector = -var_118_cvector;
	var_129_float = var_118_cvector * var_105_float;
	var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0);
	var_131_cvector = var_119_cvector ^ CVector(0.0, 1.0, 0.0);
	func_7804(var_130_cvector, var_131_cvector);
	var_139_float = var_130_cvector * (int)25;
	var_140_int = var_129_float + var_139_float;
	var_120_cvector = var_140_int - CVector(0.0, 10.0, 0.0);
	var_121_cvector = var_117_cvector + var_120_cvector;
	IsOverrideActive(var_122_bool);
	var_142_bool = var_122_bool;
	if(var_142_bool != 0) {
		var_103_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_121_cvector, var_119_cvector, (bool)1);
	var_144_float = GetByIndex(var_120_cvector, 0);
	var_145_float = GetByIndex(var_120_cvector, 2);
	Rotate(var_144_float, var_145_float);
	var_146_bool = 0;
	func_9419(var_146_bool);
	if(var_146_bool != 0) {
	} else {
		HasAnimationTrack(var_123_bool, "head");
		var_148_bool = var_123_bool;
		if(var_148_bool == 0) goto Label_7583;
		LookAsyncCamera("head");
	}
Label_7583:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_103_bool = 1;
	return 18;
	
}


func_9060(var_207_bool, var_208_object)
{
	var_209_int = 0; var_210_int = 0;
	@@var_208_object:GetItemCountOfType(var_210_int, "hunter_mark");
	var_207_bool = var_210_int >= (int)2;
	return 2;
}


func_2923(var_2_object, var_266_string)
{
	var_267_bool = 0;
	func_9419(var_267_bool);
	var_268_bool = var_267_bool == 0; //@nz
	if(var_268_bool != 0) {
		return 0;
	}
	var_269_bool = var_266_string == var_2_object;
	if(var_269_bool != 0) {
		return 0;
	}
	var_270_string = ""; var_271_bool = 0;
	var_266_string = var_270_string;
	var_273_bool = var_266_string == "";
	if(var_273_bool != 0) {
		var_271_bool = 0;
	} else {
		var_271_bool = 1;
	}
	func_7761(var_270_string, var_271_bool);
	var_2_object = var_266_string;
	return 0;
	
}


func_8044()
{
	SetVariable("oob3Notkin2", (int)1);
	return 0;
}


func_9067(var_198_bool, var_199_object)
{
	var_200_int = 0; var_201_int = 0;
	@@var_199_object:GetProperty("money", var_201_int);
	var_198_bool = var_201_int >= (int)2000;
	return 2;
}


func_8050(var_270_object)
{
	var_271_object = Obj(); var_272_string = ""; var_273_float = 0;
	func_9344(Obj());
	var_274_object = var_271_object;
	func_9361(var_271_object, "pt_map_burah_home", (float)2);
	var_294_object = Obj();
	func_9344(var_294_object);
	@@var_270_object:ShowMap(var_294_object);
	return 0;
}


func_9074(var_289_bool, var_290_object)
{
	var_291_int = 0; var_292_int = 0;
	@@var_290_object:GetItemCountOfType(var_292_int, "hunter_mark");
	var_289_bool = var_292_int >= (int)3;
	return 2;
}


func_4472(var_0_object, var_1_object, var_2_object, var_3_string, var_941_object, var_942_object)
{
	var_0_object = var_942_object;
	var_1_object = var_941_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_948_string = "";
		func_4536(var_942_object, "Neutral");
		@@@var_0_object:SetMessage((int)520837);
		@@@var_0_object:ClearReplies();
		var_957_bool = 0; var_958_object = Obj();
		var_958_object = var_1_object;
		func_9012(var_957_bool, var_958_object);
		var_959_bool = var_957_bool == 0; //@nz
		if(var_959_bool != 0) {
			@@@var_0_object:AddReply((int)520838, (int)25375, (int)22055);
		}
		@@@var_0_object:AddReply((int)520845, (int)-1, (int)22062);
		goto Label_4506;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x117c";
	}
Label_4506:
	var_966_bool = 0;
	func_9419(var_966_bool);
	if(var_966_bool != 0) {

	Label_4510:
		lshWaitForAnimEnd();
		var_967_string = var_3_string;
		if(var_967_string != 0) {
		} else {
			var_968_string = "";
			var_968_string = var_2_object;
			func_7745(var_968_string);
			goto Label_4510;
	}
		PlayAnimation("all", "idle");

	Label_4525:
		WaitForAnimEnd();
		var_971_string = var_3_string;
		if(var_971_string != 0) {
			goto Label_4535;
		}
		PlayAnimation("all", "idle");
		goto Label_4525;
	}
	goto Label_4535;
	
Label_4535:
	return 0;
	
}


func_9081(var_263_bool, var_264_object)
{
	var_265_int = 0; var_266_int = 0;
	@@var_264_object:GetItemCountOfType(var_266_int, "hunter_mark");
	var_263_bool = var_266_int >= (int)4;
	return 2;
}


func_8573()
{
	SetVariable("oob3Notkin1", (int)1);
	return 0;
}


func_9088(var_309_bool, var_310_object)
{
	var_311_int = 0; var_312_int = 0;
	@@var_310_object:GetItemCountOfType(var_312_int, "hunter_mark");
	var_309_bool = var_312_int >= (int)5;
	return 2;
}


func_8066()
{
	SetVariable("oob1Notkin2", (int)1);
	return 0;
}


func_8579(var_77_object)
{
	var_79_object = Obj(); var_80_object = Obj();
	Trace("Samopal is given");
	CreateInvItem(var_80_object);
	@@var_80_object:SetItemName("Samopal");
	@@var_80_object:SetProperty("durability", (int)30);
	var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0;
	var_77_object = var_85_object;
	var_80_object = var_86_object;
	func_7872(var_85_object, var_86_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9095(var_650_bool, var_651_object)
{
	var_652_int = 0; var_653_int = 0;
	@@var_651_object:GetItemCountOfType(var_653_int, "grass_combination");
	var_650_bool = var_653_int >= (int)10;
	return 2;
}


func_8072()
{
	var_372_object = Obj(); var_373_object = Obj();
	SetVariable("b1q01NotkinGotoGrif", (int)1);
	func_9344(Obj());
	var_376_object = var_373_object;
	var_381_float = 0;
	func_7961(var_381_float);
	@@var_373_object:AddMark("b1q01NotkinGotoGrif", "pt_map_grif", (int)1, (int)520447, var_381_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9102(var_747_bool)
{
	var_749_int = 0; var_750_int = 0; var_751_int = 0; var_752_int = 0;
	func_7966((int)0);
	var_753_int = var_751_int;
	var_755_int = "RMap" + var_751_int;
	GetVariable(var_755_int, var_752_int);
	var_747_bool = var_752_int != (int)0;
	return 4;
}


func_8600(var_1025_bool)
{
	var_1027_int = 0; var_1028_string = "";
	func_7825(var_1027_int, "b8q01");
	var_1030_bool = var_1027_int == (int)2;
	if(var_1030_bool != 0) {
		var_1025_bool = 1;
		return 0;
	}
	var_1025_bool = 0;
	return 0;
}


func_7066(var_0_object, var_1_object, var_2_object, var_3_string, var_1350_object, var_1351_object)
{
	var_0_object = var_1351_object;
	var_1_object = var_1350_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1357_string = "";
		func_7124(var_1351_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_7094;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1b9e";
	}
Label_7094:
	var_1372_bool = 0;
	func_9419(var_1372_bool);
	if(var_1372_bool != 0) {

	Label_7098:
		lshWaitForAnimEnd();
		var_1373_string = var_3_string;
		if(var_1373_string != 0) {
		} else {
			var_1374_string = "";
			var_1374_string = var_2_object;
			func_7745(var_1374_string);
			goto Label_7098;
	}
		PlayAnimation("all", "idle");

	Label_7113:
		WaitForAnimEnd();
		var_1377_string = var_3_string;
		if(var_1377_string != 0) {
			goto Label_7123;
		}
		PlayAnimation("all", "idle");
		goto Label_7113;
	}
	goto Label_7123;
	
Label_7123:
	return 0;
	
}


func_9114(var_181_bool, var_182_object)
{
	var_183_int = 0; var_184_int = 0;
	@@var_182_object:GetProperty("money", var_184_int);
	var_181_bool = var_184_int >= (int)500;
	return 2;
}


func_8092()
{
	SetVariable("oob2Notkin1", (int)1);
	return 0;
}


func_9121()
{
	var_81_object = Obj(); var_82_object = Obj();
	CreateDiaryEntry(var_82_object, (int)556, (int)2, (int)530535);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_82_object = var_87_object;
	func_9316(var_86_bool, var_87_object, (int)547);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8098()
{
	var_170_int = 0; var_171_int = 0;
	func_7966((int)0);
	var_172_int = var_171_int;
	var_179_int = "RMap" + var_171_int;
	SetVariable(var_179_int, (int)1);
	return 2;
}


func_8612(var_1031_bool)
{
	var_1033_int = 0; var_1034_string = "";
	func_7825(var_1033_int, "oob8Notkin1");
	var_1036_bool = var_1033_int == (int)0;
	if(var_1036_bool != 0) {
		var_1031_bool = 1;
		return 0;
	}
	var_1031_bool = 0;
	return 0;
}


func_7589()
{
	var_310_bool = 0; var_311_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_313_bool = 0;
	func_9419(var_313_bool);
	if(var_313_bool != 0) {
	} else {
		HasAnimationTrack(var_311_bool, "head");
		var_315_bool = var_311_bool;
		if(var_315_bool == 0) goto Label_7606;
		UnlookAsync("head");
	}
Label_7606:
	return 2;
	
}


func_8109(var_90_object)
{
	var_92_object = Obj(); var_93_int = 0;
	var_90_object = var_92_object;
	func_7853(var_92_object, (int)-500);
	return 0;
}


func_9134()
{
	var_97_object = Obj(); var_98_object = Obj();
	CreateDiaryEntry(var_98_object, (int)551, (int)2, (int)530501);
	var_102_bool = 0; var_103_object = Obj(); var_104_int = 0;
	var_98_object = var_103_object;
	func_9316(var_102_bool, var_103_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8624(var_337_bool, var_338_object)
{
	var_339_bool = 0; var_340_object = Obj();
	var_338_object = var_340_object;
	func_9032(var_339_bool, var_340_object);
	if(var_339_bool != 0) {
		var_337_bool = 1;
		return 0;
	}
	var_337_bool = 0;
	return 0;
}


func_8116()
{
	SetVariable("oob8Notkin1", (int)1);
	return 0;
}


func_7607(var_164_bool, var_165_object)
{
	var_169_int = 0; var_170_int = 0; var_171_int = 0; var_172_int = 0;
	GetVariable("voice_common", var_171_int);
	var_174_int = var_171_int;
	if(var_174_int != 0) {
		var_175_bool = 0; var_176_object = Obj();
		var_165_object = var_176_object;
		func_7665(var_175_bool, var_176_object);
		var_205_bool = var_175_bool == 0; //@nz
		if(var_205_bool != 0) {
			var_206_bool = 0; var_207_object = Obj();
			var_165_object = var_207_object;
			func_7702(var_206_bool, var_207_object);
			var_241_bool = var_206_bool == 0; //@nz
			if(var_241_bool != 0) {
				var_164_bool = 0;
				return 4;
			}
		}
		irand(var_172_int, (int)2);
		var_243_int = var_172_int;
		if(var_243_int != 0) {
			var_246_int = var_171_int + (int)1;
			var_248_int = var_246_int % (int)3;
			SetVariable("voice_common", var_248_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_251_bool = 0; var_252_object = Obj();
		var_165_object = var_252_object;
		func_7702(var_251_bool, var_252_object);
		var_253_bool = var_251_bool == 0; //@nz
		if(var_253_bool != 0) {
			var_254_bool = 0; var_255_object = Obj();
			var_165_object = var_255_object;
			func_7665(var_254_bool, var_255_object);
			var_256_bool = var_254_bool == 0; //@nz
			if(var_256_bool != 0) {
				var_164_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_7663;
	
Label_7663:
	var_164_bool = 1;
	return 4;
	
}


func_4536(var_2_object, var_948_string)
{
	var_949_bool = 0;
	func_9419(var_949_bool);
	var_950_bool = var_949_bool == 0; //@nz
	if(var_950_bool != 0) {
		return 0;
	}
	var_951_bool = var_948_string == var_2_object;
	if(var_951_bool != 0) {
		return 0;
	}
	var_952_string = ""; var_953_bool = 0;
	var_948_string = var_952_string;
	var_955_bool = var_948_string == "";
	if(var_955_bool != 0) {
		var_953_bool = 0;
	} else {
		var_953_bool = 1;
	}
	func_7761(var_952_string, var_953_bool);
	var_2_object = var_948_string;
	return 0;
	
}


func_8634(var_436_bool)
{
	var_438_int = 0; var_439_string = "";
	func_7825(var_438_int, "oob1Notkin3");
	var_441_bool = var_438_int == (int)0;
	if(var_441_bool != 0) {
		var_436_bool = 1;
		return 0;
	}
	var_436_bool = 0;
	return 0;
}


func_8122()
{
	var_138_object = Obj(); var_139_object = Obj();
	func_9344(Obj());
	var_140_object = var_139_object;
	var_151_float = 0;
	func_7961(var_151_float);
	@@var_139_object:AddMark("b8q01NotkinGotoKlara", "pt_map_mishka", (int)3, (int)521466, var_151_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9147()
{
	var_120_object = Obj(); var_121_object = Obj();
	CreateDiaryEntry(var_121_object, (int)552, (int)2, (int)530502);
	var_125_bool = 0; var_126_object = Obj(); var_127_int = 0;
	var_121_object = var_126_object;
	func_9316(var_125_bool, var_126_object, (int)551);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1467(var_0_object, var_483_int, var_484_object)
{
	var_486_object = Obj(); var_487_bool = 0; var_488_int = 0; var_489_bool = 0; var_490_object = Obj(); var_491_bool = 0; var_492_int = 0; var_493_bool = 0;
	var_0_object = var_484_object;
	var_494_bool = 0; var_495_object = Obj(); var_496_float = 0;
	var_484_object = var_495_object;
	func_7520(var_494_bool, var_495_object, (float)70.0);
	var_497_bool = var_494_bool == 0; //@nz
	if(var_497_bool != 0) {
		var_483_int = -2;
		return 8;
	}
	CreateDialog(var_490_object);
	var_498_int = 0;
	func_9413(var_498_int);
	@@var_490_object:SetNPCName(var_498_int);
	var_499_int = 0;
	func_9411(var_499_int);
	@@var_490_object:SetNPCDescription(var_499_int);
	var_500_string = "";
	func_9415(var_500_string);
	@@var_490_object:SetPhoto(var_500_string);
	var_501_string = "";
	func_9417(var_501_string);
	@@var_490_object:SetPhoto2(var_501_string);
	var_502_int = 0;
	func_9394(var_502_int);
	@@var_490_object:SetPlayerName(var_502_int);
	IsOverrideActive(var_491_bool);
	var_503_bool = var_491_bool;
	if(var_503_bool != 0) {
		var_483_int = -2;
		return 8;
	}
	DoDialog(var_490_object);
	var_504_bool = 0; var_505_object = Obj();
	func_7798(Obj());
	var_506_object = var_505_object;
	func_7607(var_504_bool, var_505_object);
	var_507_object = Obj(); var_508_object = Obj();
	var_484_object = var_507_object;
	var_490_object = var_508_object;
	TaskCall(3);
	func_1548(var_509_object, var_510_object, var_511_string, var_512_bool, var_507_object, var_508_object);
	TaskReturn();
	@@var_490_object:IsDialogEnd(var_493_bool);
	
Label_1530:
	var_543_bool = var_493_bool == 0; //@nz
	if(var_543_bool != 0) {
		sync();
		@@var_490_object:IsDialogEnd(var_493_bool);
		goto Label_1530;
	}
	var_484_object = Obj();
	func_7589();
	StopDialog(var_490_object);
	@@var_490_object:GetReturnValue((int)-1);
	var_492_int = var_483_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8646(var_442_bool)
{
	var_444_int = 0; var_445_string = "";
	func_7825(var_444_int, "b1ResqueList");
	var_447_bool = var_444_int != (int)0;
	if(var_447_bool != 0) {
		var_442_bool = 1;
		return 0;
	}
	var_442_bool = 0;
	return 0;
}


func_9160()
{
	var_302_object = Obj(); var_303_object = Obj();
	CreateDiaryEntry(var_303_object, (int)208, (int)2, (int)518103);
	var_307_bool = 0; var_308_object = Obj(); var_309_int = 0;
	var_303_object = var_308_object;
	func_9316(var_307_bool, var_308_object, (int)205);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8138(var_235_object)
{
	var_237_bool = 0; var_238_object = Obj(); var_239_float = 0;
	var_235_object = var_238_object;
	func_7904(var_237_bool, var_238_object, (float)0.05000000074505806);
	return 0;
}


func_3023(var_0_object, var_675_int, var_676_object)
{
	var_678_object = Obj(); var_679_bool = 0; var_680_int = 0; var_681_bool = 0; var_682_object = Obj(); var_683_bool = 0; var_684_int = 0; var_685_bool = 0;
	var_0_object = var_676_object;
	var_686_bool = 0; var_687_object = Obj(); var_688_float = 0;
	var_676_object = var_687_object;
	func_7520(var_686_bool, var_687_object, (float)70.0);
	var_689_bool = var_686_bool == 0; //@nz
	if(var_689_bool != 0) {
		var_675_int = -2;
		return 8;
	}
	CreateDialog(var_682_object);
	var_690_int = 0;
	func_9413(var_690_int);
	@@var_682_object:SetNPCName(var_690_int);
	var_691_int = 0;
	func_9411(var_691_int);
	@@var_682_object:SetNPCDescription(var_691_int);
	var_692_string = "";
	func_9415(var_692_string);
	@@var_682_object:SetPhoto(var_692_string);
	var_693_string = "";
	func_9417(var_693_string);
	@@var_682_object:SetPhoto2(var_693_string);
	var_694_int = 0;
	func_9394(var_694_int);
	@@var_682_object:SetPlayerName(var_694_int);
	IsOverrideActive(var_683_bool);
	var_695_bool = var_683_bool;
	if(var_695_bool != 0) {
		var_675_int = -2;
		return 8;
	}
	DoDialog(var_682_object);
	var_696_bool = 0; var_697_object = Obj();
	func_7798(Obj());
	var_698_object = var_697_object;
	func_7607(var_696_bool, var_697_object);
	var_699_object = Obj(); var_700_object = Obj();
	var_676_object = var_699_object;
	var_682_object = var_700_object;
	TaskCall(9);
	func_3104(var_701_object, var_702_object, var_703_string, var_704_bool, var_699_object, var_700_object);
	TaskReturn();
	@@var_682_object:IsDialogEnd(var_685_bool);
	
Label_3086:
	var_791_bool = var_685_bool == 0; //@nz
	if(var_791_bool != 0) {
		sync();
		@@var_682_object:IsDialogEnd(var_685_bool);
		goto Label_3086;
	}
	var_676_object = Obj();
	func_7589();
	StopDialog(var_682_object);
	@@var_682_object:GetReturnValue((int)-1);
	var_684_int = var_675_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8145(var_185_object)
{
	var_187_object = Obj(); var_188_int = 0;
	var_185_object = var_187_object;
	func_7853(var_187_object, (int)-1500);
	return 0;
}


func_8658(var_706_bool)
{
	var_708_int = 0; var_709_string = "";
	func_7825(var_708_int, "oob4Notkin1");
	var_711_bool = var_708_int == (int)0;
	if(var_711_bool != 0) {
		var_706_bool = 1;
		return 0;
	}
	var_706_bool = 0;
	return 0;
}


func_7124(var_2_object, var_1357_string)
{
	var_1358_bool = 0;
	func_9419(var_1358_bool);
	var_1359_bool = var_1358_bool == 0; //@nz
	if(var_1359_bool != 0) {
		return 0;
	}
	var_1360_bool = var_1357_string == var_2_object;
	if(var_1360_bool != 0) {
		return 0;
	}
	var_1361_string = ""; var_1362_bool = 0;
	var_1357_string = var_1361_string;
	var_1364_bool = var_1357_string == "";
	if(var_1364_bool != 0) {
		var_1362_bool = 0;
	} else {
		var_1362_bool = 1;
	}
	func_7761(var_1361_string, var_1362_bool);
	var_2_object = var_1357_string;
	return 0;
	
}


func_9173()
{
	var_326_object = Obj(); var_327_object = Obj();
	CreateDiaryEntry(var_327_object, (int)207, (int)2, (int)518102);
	var_331_bool = 0; var_332_object = Obj(); var_333_int = 0;
	var_327_object = var_332_object;
	func_9316(var_331_bool, var_332_object, (int)205);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8152()
{
	SetVariable("oob1Notkin3", (int)1);
	return 0;
}


func_4058(var_0_object, var_856_int, var_857_object)
{
	var_859_object = Obj(); var_860_bool = 0; var_861_int = 0; var_862_bool = 0; var_863_object = Obj(); var_864_bool = 0; var_865_int = 0; var_866_bool = 0;
	var_0_object = var_857_object;
	var_867_bool = 0; var_868_object = Obj(); var_869_float = 0;
	var_857_object = var_868_object;
	func_7520(var_867_bool, var_868_object, (float)70.0);
	var_870_bool = var_867_bool == 0; //@nz
	if(var_870_bool != 0) {
		var_856_int = -2;
		return 8;
	}
	CreateDialog(var_863_object);
	var_871_int = 0;
	func_9413(var_871_int);
	@@var_863_object:SetNPCName(var_871_int);
	var_872_int = 0;
	func_9411(var_872_int);
	@@var_863_object:SetNPCDescription(var_872_int);
	var_873_string = "";
	func_9415(var_873_string);
	@@var_863_object:SetPhoto(var_873_string);
	var_874_string = "";
	func_9417(var_874_string);
	@@var_863_object:SetPhoto2(var_874_string);
	var_875_int = 0;
	func_9394(var_875_int);
	@@var_863_object:SetPlayerName(var_875_int);
	IsOverrideActive(var_864_bool);
	var_876_bool = var_864_bool;
	if(var_876_bool != 0) {
		var_856_int = -2;
		return 8;
	}
	DoDialog(var_863_object);
	var_877_bool = 0; var_878_object = Obj();
	func_7798(Obj());
	var_879_object = var_878_object;
	func_7607(var_877_bool, var_878_object);
	var_880_object = Obj(); var_881_object = Obj();
	var_857_object = var_880_object;
	var_863_object = var_881_object;
	TaskCall(13);
	func_4139(var_882_object, var_883_object, var_884_string, var_885_bool, var_880_object, var_881_object);
	TaskReturn();
	@@var_863_object:IsDialogEnd(var_866_bool);
	
Label_4121:
	var_913_bool = var_866_bool == 0; //@nz
	if(var_913_bool != 0) {
		sync();
		@@var_863_object:IsDialogEnd(var_866_bool);
		goto Label_4121;
	}
	var_857_object = Obj();
	func_7589();
	StopDialog(var_863_object);
	@@var_863_object:GetReturnValue((int)-1);
	var_865_int = var_856_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8158()
{
	SetVariable("oob4Notkin1", (int)1);
	return 0;
}


func_8670(var_761_bool)
{
	var_763_int = 0; var_764_string = "";
	func_7825(var_763_int, "b4q03");
	var_766_bool = var_763_int == (int)0;
	if(var_766_bool != 0) {
		var_761_bool = 1;
		return 0;
	}
	var_761_bool = 0;
	return 0;
}


func_9186()
{
	var_127_object = Obj(); var_128_object = Obj();
	CreateDiaryEntry(var_128_object, (int)206, (int)2, (int)518101);
	var_132_bool = 0; var_133_object = Obj(); var_134_int = 0;
	var_128_object = var_133_object;
	func_9316(var_132_bool, var_133_object, (int)205);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8164()
{
	SetVariable("b4q03", (int)1);
	func_9264();
	func_9290();
	return 0;
}


func_2022(var_2_object, var_588_string)
{
	var_589_bool = 0;
	func_9419(var_589_bool);
	var_590_bool = var_589_bool == 0; //@nz
	if(var_590_bool != 0) {
		return 0;
	}
	var_591_bool = var_588_string == var_2_object;
	if(var_591_bool != 0) {
		return 0;
	}
	var_592_string = ""; var_593_bool = 0;
	var_588_string = var_592_string;
	var_595_bool = var_588_string == "";
	if(var_595_bool != 0) {
		var_593_bool = 0;
	} else {
		var_593_bool = 1;
	}
	func_7761(var_592_string, var_593_bool);
	var_2_object = var_588_string;
	return 0;
	
}


func_8682(var_771_bool)
{
	var_773_int = 0; var_774_string = "";
	func_7825(var_773_int, "b4q03");
	var_776_bool = var_773_int == (int)1;
	if(var_776_bool != 0) {
		var_771_bool = 1;
		return 0;
	}
	var_771_bool = 0;
	return 0;
}


func_9199()
{
	var_104_object = Obj(); var_105_object = Obj();
	CreateDiaryEntry(var_105_object, (int)205, (int)2, (int)518100);
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0;
	var_105_object = var_110_object;
	func_9316(var_109_bool, var_110_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8176(var_77_object)
{
	var_79_int = 0; var_80_int = 0;
	SetVariable("b4q03", (int)1000);
	func_9277();
	@@var_77_object:RemoveItemByType(var_80_int, "hunter_mark", (int)4);
	return 2;
}


func_7665(var_175_bool, var_176_object)
{
	var_177_string = ""; var_178_int = 0; var_179_bool = 0; var_180_int = 0; var_181_string = ""; var_182_string = ""; var_183_int = 0; var_184_bool = 0; var_185_int = 0; var_186_string = "";
	var_182_string = "c";
	var_183_int = 0;
	
Label_7668:
	if((int)1 != 0) {
		var_189_int = var_183_int + (int)1;
		var_190_int = var_182_string + var_189_int;
		@@var_176_object:HasProperty(var_190_int, var_184_bool);
		var_191_bool = var_184_bool == 0; //@nz
		if(var_191_bool != 0) {
		} else {
			var_183_int = var_183_int + (int)1;
			goto Label_7668;
		}
	}
	var_192_bool = var_183_int == 0; //@nz
	if(var_192_bool != 0) {
		var_175_bool = 0;
		return 10;
	}
	var_185_int = 0;
	var_194_bool = var_183_int > (int)1;
	if(var_194_bool != 0) {
		irand(var_185_int, var_183_int);
	}
	var_196_int = var_185_int + (int)1;
	var_197_int = var_182_string + var_196_int;
	@@var_176_object:GetProperty(var_197_int, var_186_string);
	var_198_bool = 0; var_199_string = "";
	var_186_string = var_199_string;
	func_7776(var_198_bool, var_199_string);
	var_198_bool = var_175_bool;
	return 10;
	
}


func_8694(var_777_bool, var_778_object)
{
	var_779_bool = 0; var_780_object = Obj();
	var_778_object = var_780_object;
	func_9039(var_779_bool, var_780_object);
	if(var_779_bool != 0) {
		var_777_bool = 1;
		return 0;
	}
	var_777_bool = 0;
	return 0;
}


func_9212()
{
	var_127_object = Obj(); var_128_object = Obj();
	CreateDiaryEntry(var_128_object, (int)232, (int)2, (int)519660);
	var_132_bool = 0; var_133_object = Obj(); var_134_int = 0;
	var_128_object = var_133_object;
	func_9316(var_132_bool, var_133_object, (int)227);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8189()
{
	SetVariable("b4NotkinMapVisit", (int)1);
	return 0;
}


