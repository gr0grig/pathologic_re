// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:Sexy|W:all|W:idle|W:Love|W:Modesty|W:Fear|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:.bin|W:Door |W: not found|W:locked|A:SetProperty|A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Eva.png|W:ui/NPC_Eva_b.png|W:ood1EvaIntro3|W:d1q03IsKapella|W:d1q03KapellaGotoOspina|W:pt_map_ospina|A:AddMark|W:quest_d1_03|W:playsound|W:giveitem|W:gold_ring is given|W:gold_ring|W:d1q01EvaMapMarkMladVlad|W:pt_map_mladvlad|W:pt_map_station|A:ShowMap|W:ood1Eva4|W:bracelet is given|W:bracelet|W:ear_ring is given|W:ear_ring|W:d2EvaVisit|W:pt_map_georg|W:ood1Eva5|W:ood1Eva6|W:ood1Eva7|W:ood4Eva2|W:KnowUzly|W:ood2Eva1|W:ood2Eva2|W:ood2Eva3|W:ood2Eva4|W:d2q02|W:d2q02EvaGotoAndrei|W:pt_map_andrei|W:quest_d2_02|W:icot_eva@door1|W:d1q01EvaGotoSimon|W:d1EvaGotoMaria|W:pt_map_maria|W:d1EvaInfo|W:pt_map_eva|W:KnowStation|W:ood1EvaIntro1|W:ood1EvaIntro2|W:ood6Eva1|W:d2q02EvaGotoMaria|W:ood3Eva1|W:ood4Eva1|W:d1q01FirstGeorgVisit|W:d1q03|W:d1q04|W:d1q01|W:d4q01|W:d4q02|W:d4q02LaraGivesMedcine|W:d4q02JuliaGivesMedcine|W:d6q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x1033
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc8 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x317 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x94d vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc5c vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xde8 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1009 vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0x107c vars=int
// @EVENT_6: op=0x10a2 vars=
// @EVENT_5: op=0x10b1 vars=
// @EVENT_45: op=0x10be vars=bool
// @EVENT_0: op=0x10ca vars=object
// @PE: 0x51,0xb2,0xc8,0x1e7,0x301,0x317,0x89c,0x937,0x94d,0xc07,0xc46,0xc5c,0xd5c,0xdd2,0xde8,0xfb9,0xff3,0x1009,0x1033,0x107c,0x10a2,0x10be,0x12d4,0x12fc,0x1320,0x1326,0x1341,0x1351,0x1357,0x1362,0x136d,0x1373,0x1383,0x1389,0x138f,0x1395,0x139b,0x13a1,0x13a7,0x13ad,0x13b3,0x13d7,0x1400,0x1406,0x1416,0x141c,0x1422,0x1428,0x1448,0x1458,0x145e,0x1464,0x1470,0x147c,0x1488,0x1494,0x14a0,0x14ac,0x14b8,0x14c4,0x14d0,0x14dc,0x14e8,0x14f4,0x1500,0x150c,0x1518,0x1524,0x1530,0x153c,0x1548,0x1554,0x1560,0x156c,0x1578,0x1584,0x1590,0x159c,0x15a8,0x15b4,0x15c0,0x15cc,0x15d8,0x15e4,0x1690

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_4706();
		var_36_bool = var_31_bool == (int)4274;
		if(var_36_bool != 0) {
			var_37_bool = 0;
			var_37_bool = 0;
			var_38_bool = 0; var_39_object = Obj();
			var_39_object = var_1_object;
			func_5556(var_39_object);
			if(var_38_bool != 0) {
				var_46_bool = 0; var_47_object = Obj();
				var_47_object = var_1_object;
				func_5568(var_47_object);
				if(var_46_bool != 0) {
					var_37_bool = 1;
				}
			}
			if(var_37_bool != 0) {
				var_52_object = Obj(); var_53_object = Obj();
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5154();
				var_56_string = "";
				func_178(var_32_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)503926);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)503927, (int)4276, (int)4275);
				@@@var_0_object:AddReply((int)503929, (int)4278, (int)4277);
				return 0;
			}
			var_80_string = "";
			func_178(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)513718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513719, (int)-1, (int)14985);
			@@@var_0_object:AddReply((int)536133, (int)-1, (int)37892);
			return 0;
		}
		var_89_bool = var_31_bool == (int)4278;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_178(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)503930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503931, (int)4276, (int)4279);
			@@@var_0_object:AddReply((int)503932, (int)4288, (int)4280);
			@@@var_0_object:AddReply((int)503933, (int)-1, (int)4281);
			return 0;
		}
		var_102_bool = var_31_bool == (int)4276;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_178(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)503928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503937, (int)4288, (int)4286);
			@@@var_0_object:AddReply((int)503938, (int)4288, (int)4287);
			return 0;
		}
		var_112_bool = var_31_bool == (int)4288;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_178(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)503939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503940, (int)4297, (int)4291);
			@@@var_0_object:AddReply((int)503941, (int)4294, (int)4292);
			@@@var_0_object:AddReply((int)503942, (int)-1, (int)4293);
			return 0;
		}
		var_125_bool = var_31_bool == (int)4294;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_178(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)503943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503944, (int)-1, (int)4295);
			@@@var_0_object:AddReply((int)503945, (int)-1, (int)4296);
			return 0;
		}
		var_135_bool = var_31_bool == (int)4297;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_178(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)503946);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503947, (int)-1, (int)4298);
			@@@var_0_object:AddReply((int)503948, (int)-1, (int)4299);
			return 0;
		}
		var_3_string = true;
		var_144_bool = 0;
		func_4858(var_144_bool);
		if(var_144_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc9";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_4706();
		var_36_bool = var_32_cvector == (int)4900;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_5079();
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_5086();
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_4979(var_78_object);
		}
		var_104_bool = var_32_cvector == (int)4915;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_5079();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_5086();
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_4979(var_110_object);
		}
		var_112_bool = var_32_cvector == (int)33775;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_4866();
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_5126(var_165_object);
		}
		var_172_bool = var_32_cvector == (int)33778;
		if(var_172_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_4866();
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_5126(var_176_object);
		}
		var_178_bool = var_32_cvector == (int)36804;
		if(var_178_bool != 0) {
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_5001();
		}
		var_184_bool = var_32_cvector == (int)36763;
		if(var_184_bool != 0) {
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_4995();
		}
		var_190_bool = var_32_cvector == (int)33344;
		if(var_190_bool != 0) {
			var_191_object = Obj(); var_192_object = Obj();
			var_191_object = var_1_object;
			var_192_object = var_0_object;
			func_5148();
		}
		var_196_bool = var_32_cvector == (int)33346;
		if(var_196_bool != 0) {
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_4913();
			var_207_object = Obj(); var_208_object = Obj();
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_4929(var_208_object);
		}
		var_215_bool = var_32_cvector == (int)33899;
		if(var_215_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_4945();
		}
		var_221_bool = var_32_cvector == (int)33901;
		if(var_221_bool != 0) {
			var_222_object = Obj(); var_223_object = Obj();
			var_222_object = var_1_object;
			var_223_object = var_0_object;
			func_4951(var_223_object);
			var_246_object = Obj(); var_247_object = Obj();
			var_246_object = var_1_object;
			var_247_object = var_0_object;
			func_4902(var_247_object);
			var_252_object = Obj(); var_253_object = Obj();
			var_252_object = var_1_object;
			var_253_object = var_0_object;
			func_4962(var_253_object);
			var_258_object = Obj(); var_259_object = Obj();
			var_258_object = var_1_object;
			var_259_object = var_0_object;
			func_4896();
		}
		var_263_bool = var_32_cvector == (int)35136;
		if(var_263_bool != 0) {
			var_264_object = Obj(); var_265_object = Obj();
			var_264_object = var_1_object;
			var_265_object = var_0_object;
			func_5007();
		}
		var_269_bool = var_31_bool == (int)4899;
		if(var_269_bool != 0) {
			var_270_bool = 0;
			var_270_bool = 0;
			var_271_bool = 0; var_272_object = Obj();
			var_272_object = var_1_object;
			func_5220(var_272_object);
			if(var_271_bool != 0) {
				var_279_bool = 0; var_280_object = Obj();
				var_280_object = var_1_object;
				func_5244(var_280_object);
				if(var_279_bool != 0) {
					var_270_bool = 1;
				}
			}
			if(var_270_bool != 0) {
				var_285_object = Obj(); var_286_object = Obj();
				var_285_object = var_1_object;
				var_286_object = var_0_object;
				func_5142();
				var_289_string = "";
				func_769(var_32_cvector, "Fear");
				@@@var_0_object:SetMessage((int)504496);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)504521, (int)22246, (int)4928);
				@@@var_0_object:AddReply((int)521059, (int)22246, (int)22250);
				return 0;
			}
			var_313_bool = 0;
			var_313_bool = 1;
			var_314_bool = 0;
			var_314_bool = 0;
			var_315_bool = 0;
			var_315_bool = 0;
			var_316_bool = 0; var_317_object = Obj();
			var_317_object = var_1_object;
			func_5604(var_317_object);
			if(var_316_bool != 0) {
				var_322_bool = 0; var_323_object = Obj();
				var_323_object = var_1_object;
				func_5328(var_323_object);
				if(var_322_bool != 0) {
					var_315_bool = 1;
				}
			}
			if(var_315_bool != 0) {
				var_328_bool = 0; var_329_object = Obj();
				var_329_object = var_1_object;
				func_5244(var_329_object);
				if(var_328_bool != 0) {
					var_314_bool = 1;
				}
			}
			if(var_314_bool != 1) {
				var_330_bool = 0;
				var_330_bool = 0;
				var_331_bool = 0;
				var_331_bool = 0;
				var_332_bool = 0; var_333_object = Obj();
				var_333_object = var_1_object;
				func_5604(var_333_object);
				if(var_332_bool != 0) {
					var_334_bool = 0; var_335_object = Obj();
					var_335_object = var_1_object;
					func_5292(var_335_object);
					if(var_334_bool != 0) {
						var_331_bool = 1;
					}
				}
				if(var_331_bool != 0) {
					var_340_bool = 0; var_341_object = Obj();
					var_341_object = var_1_object;
					func_5244(var_341_object);
					if(var_340_bool != 0) {
						var_330_bool = 1;
					}
				}
				if(var_330_bool != 1) {
					var_313_bool = 0;
				}
			}
			if(var_313_bool != 0) {
				var_342_object = Obj(); var_343_object = Obj();
				var_342_object = var_1_object;
				var_343_object = var_0_object;
				func_4860();
				var_346_string = "";
				func_769(var_32_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)532343);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)533604, (int)35125, (int)35124);
				@@@var_0_object:AddReply((int)533608, (int)35129, (int)35128);
				return 0;
			}
			var_354_string = "";
			func_769(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521052);
			@@@var_0_object:ClearReplies();
			var_356_bool = 0;
			var_356_bool = 0;
			var_357_bool = 0; var_358_object = Obj();
			var_358_object = var_1_object;
			func_5484(var_358_object);
			if(var_357_bool != 0) {
				var_363_bool = 0; var_364_object = Obj();
				var_364_object = var_1_object;
				func_5352(var_364_object);
				if(var_363_bool != 0) {
					var_356_bool = 1;
				}
			}
			if(var_356_bool != 0) {
				@@@var_0_object:AddReply((int)535143, (int)36805, (int)36804);
			}
			var_372_bool = 0; var_373_object = Obj();
			var_373_object = var_1_object;
			func_5340(var_373_object);
			if(var_372_bool != 0) {
				@@@var_0_object:AddReply((int)535107, (int)36764, (int)36763);
			}
			var_381_bool = 0;
			var_381_bool = 0;
			var_382_bool = 0;
			var_382_bool = 0;
			var_383_bool = 0; var_384_object = Obj();
			var_384_object = var_1_object;
			func_5304(var_384_object);
			if(var_383_bool != 0) {
				var_389_bool = 0; var_390_object = Obj();
				var_390_object = var_1_object;
				func_5388(var_390_object);
				if(var_389_bool != 0) {
					var_382_bool = 1;
				}
			}
			if(var_382_bool != 0) {
				var_395_bool = 0; var_396_object = Obj();
				var_396_object = var_1_object;
				func_5256(var_396_object);
				if(var_395_bool != 0) {
					var_381_bool = 1;
				}
			}
			if(var_381_bool != 0) {
				@@@var_0_object:AddReply((int)531940, (int)33345, (int)33344);
			}
			var_404_bool = 0;
			var_404_bool = 0;
			var_405_bool = 0;
			var_405_bool = 0;
			var_406_bool = 0; var_407_object = Obj();
			var_407_object = var_1_object;
			func_5268(var_407_object);
			if(var_406_bool != 0) {
				var_412_bool = 0; var_413_object = Obj();
				var_413_object = var_1_object;
				func_5316(var_413_object);
				if(var_412_bool != 0) {
					var_405_bool = 1;
				}
			}
			if(var_405_bool != 0) {
				var_418_bool = 0; var_419_object = Obj();
				var_419_object = var_1_object;
				func_5256(var_419_object);
				if(var_418_bool != 0) {
					var_404_bool = 1;
				}
			}
			if(var_404_bool != 0) {
				@@@var_0_object:AddReply((int)532458, (int)33900, (int)33899);
			}
			var_423_bool = 0;
			var_423_bool = 0;
			var_424_bool = 0; var_425_object = Obj();
			var_425_object = var_1_object;
			func_5364(var_425_object);
			if(var_424_bool != 0) {
				var_430_bool = 0; var_431_object = Obj();
				var_431_object = var_1_object;
				func_5280(var_431_object);
				if(var_430_bool != 0) {
					var_423_bool = 1;
				}
			}
			if(var_423_bool != 0) {
				@@@var_0_object:AddReply((int)533614, (int)35137, (int)35136);
			}
			var_439_bool = 0; var_440_object = Obj();
			var_440_object = var_1_object;
			func_5232(var_440_object);
			var_445_bool = var_439_bool == 0; //@nz
			if(var_445_bool != 0) {
				@@@var_0_object:AddReply((int)521053, (int)-1, (int)22244);
			}
			@@@var_0_object:AddReply((int)521054, (int)-1, (int)22245);
			return 0;
		}
		var_453_bool = var_31_bool == (int)35137;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)533615);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533616, (int)35140, (int)35138);
			@@@var_0_object:AddReply((int)533617, (int)-1, (int)35139);
			return 0;
		}
		var_463_bool = var_31_bool == (int)35140;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)533618);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533619, (int)35142, (int)35141);
			return 0;
		}
		var_470_bool = var_31_bool == (int)35142;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)533620);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533621, (int)35144, (int)35143);
			@@@var_0_object:AddReply((int)533624, (int)35147, (int)35146);
			return 0;
		}
		var_480_bool = var_31_bool == (int)35147;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)533625);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533626, (int)35150, (int)35148);
			@@@var_0_object:AddReply((int)533627, (int)-1, (int)35149);
			return 0;
		}
		var_490_bool = var_31_bool == (int)35144;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)533622);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533623, (int)35150, (int)35145);
			@@@var_0_object:AddReply((int)533637, (int)-1, (int)35161);
			return 0;
		}
		var_500_bool = var_31_bool == (int)35150;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)533628);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533629, (int)35154, (int)35152);
			@@@var_0_object:AddReply((int)533630, (int)35157, (int)35153);
			return 0;
		}
		var_510_bool = var_31_bool == (int)35154;
		if(var_510_bool != 0) {
			var_511_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)533631);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533632, (int)35157, (int)35155);
			@@@var_0_object:AddReply((int)533633, (int)-1, (int)35156);
			return 0;
		}
		var_520_bool = var_31_bool == (int)35157;
		if(var_520_bool != 0) {
			var_521_string = "";
			func_769(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533634);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533635, (int)-1, (int)35158);
			@@@var_0_object:AddReply((int)533636, (int)-1, (int)35159);
			return 0;
		}
		var_530_bool = var_31_bool == (int)33900;
		if(var_530_bool != 0) {
			var_531_string = "";
			func_769(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532460, (int)-1, (int)33901);
			return 0;
		}
		var_537_bool = var_31_bool == (int)33345;
		if(var_537_bool != 0) {
			var_538_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)531941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531942, (int)-1, (int)33346);
			return 0;
		}
		var_544_bool = var_31_bool == (int)36764;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)535108);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535109, (int)36766, (int)36765);
			@@@var_0_object:AddReply((int)535120, (int)36766, (int)36776);
			@@@var_0_object:AddReply((int)535124, (int)36768, (int)36782);
			return 0;
		}
		var_557_bool = var_31_bool == (int)36766;
		if(var_557_bool != 0) {
			var_558_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)535110);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535111, (int)36768, (int)36767);
			@@@var_0_object:AddReply((int)535122, (int)36774, (int)36778);
			return 0;
		}
		var_567_bool = var_31_bool == (int)36774;
		if(var_567_bool != 0) {
			var_568_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)535118);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535119, (int)36768, (int)36775);
			@@@var_0_object:AddReply((int)535123, (int)-1, (int)36780);
			return 0;
		}
		var_577_bool = var_31_bool == (int)36768;
		if(var_577_bool != 0) {
			var_578_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)535112);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535113, (int)36770, (int)36769);
			return 0;
		}
		var_584_bool = var_31_bool == (int)36770;
		if(var_584_bool != 0) {
			var_585_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)535114);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535115, (int)36772, (int)36771);
			return 0;
		}
		var_591_bool = var_31_bool == (int)36772;
		if(var_591_bool != 0) {
			var_592_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)535116);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535117, (int)-1, (int)36773);
			@@@var_0_object:AddReply((int)535121, (int)-1, (int)36777);
			return 0;
		}
		var_601_bool = var_31_bool == (int)36805;
		if(var_601_bool != 0) {
			var_602_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)535144);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535145, (int)36807, (int)36806);
			return 0;
		}
		var_608_bool = var_31_bool == (int)36807;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)535146);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535147, (int)36809, (int)36808);
			@@@var_0_object:AddReply((int)535152, (int)36814, (int)36813);
			return 0;
		}
		var_618_bool = var_31_bool == (int)36814;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_769(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)535153);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535154, (int)36816, (int)36815);
			@@@var_0_object:AddReply((int)535156, (int)36816, (int)36817);
			return 0;
		}
		var_628_bool = var_31_bool == (int)36816;
		if(var_628_bool != 0) {
			var_629_string = "";
			func_769(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)535155);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535157, (int)36811, (int)36819);
			return 0;
		}
		var_635_bool = var_31_bool == (int)36809;
		if(var_635_bool != 0) {
			var_636_string = "";
			func_769(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535148);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535149, (int)36811, (int)36810);
			return 0;
		}
		var_642_bool = var_31_bool == (int)36811;
		if(var_642_bool != 0) {
			var_643_string = "";
			func_769(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535150);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535151, (int)36821, (int)36812);
			@@@var_0_object:AddReply((int)535166, (int)36831, (int)36830);
			return 0;
		}
		var_652_bool = var_31_bool == (int)36831;
		if(var_652_bool != 0) {
			@@@var_0_object:SetMessage((int)535167);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535168, (int)36823, (int)36832);
			return 0;
		}
		var_658_bool = var_31_bool == (int)36821;
		if(var_658_bool != 0) {
			var_659_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)535158);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535159, (int)36823, (int)36822);
			@@@var_0_object:AddReply((int)535165, (int)-1, (int)36828);
			return 0;
		}
		var_668_bool = var_31_bool == (int)36823;
		if(var_668_bool != 0) {
			var_669_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)535160);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535161, (int)36825, (int)36824);
			return 0;
		}
		var_675_bool = var_31_bool == (int)36825;
		if(var_675_bool != 0) {
			var_676_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)535162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535163, (int)-1, (int)36826);
			@@@var_0_object:AddReply((int)535164, (int)-1, (int)36827);
			return 0;
		}
		var_685_bool = var_31_bool == (int)35129;
		if(var_685_bool != 0) {
			var_686_string = "";
			func_769(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533609);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533610, (int)35125, (int)35130);
			return 0;
		}
		var_692_bool = var_31_bool == (int)35125;
		if(var_692_bool != 0) {
			var_693_string = "";
			func_769(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533605);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533606, (int)35127, (int)35126);
			@@@var_0_object:AddReply((int)533611, (int)35133, (int)35132);
			return 0;
		}
		var_702_bool = var_31_bool == (int)35133;
		if(var_702_bool != 0) {
			var_703_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)533612);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533613, (int)35127, (int)35134);
			return 0;
		}
		var_709_bool = var_31_bool == (int)35127;
		if(var_709_bool != 0) {
			var_710_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)533607);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532344, (int)33774, (int)33773);
			return 0;
		}
		var_716_bool = var_31_bool == (int)33774;
		if(var_716_bool != 0) {
			var_717_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)532345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532346, (int)-1, (int)33775);
			@@@var_0_object:AddReply((int)532347, (int)33777, (int)33776);
			return 0;
		}
		var_726_bool = var_31_bool == (int)33777;
		if(var_726_bool != 0) {
			var_727_string = "";
			func_769(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)532348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532349, (int)-1, (int)33778);
			@@@var_0_object:AddReply((int)532350, (int)-1, (int)33779);
			return 0;
		}
		var_736_bool = var_31_bool == (int)22246;
		if(var_736_bool != 0) {
			var_737_string = "";
			func_769(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)521055);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521056, (int)22248, (int)22247);
			@@@var_0_object:AddReply((int)521060, (int)22253, (int)22251);
			return 0;
		}
		var_746_bool = var_31_bool == (int)22253;
		if(var_746_bool != 0) {
			var_747_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)521061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521062, (int)4905, (int)22254);
			return 0;
		}
		var_753_bool = var_31_bool == (int)22248;
		if(var_753_bool != 0) {
			var_754_string = "";
			func_769(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)521057);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521058, (int)4905, (int)22249);
			@@@var_0_object:AddReply((int)504517, (int)4923, (int)4922);
			return 0;
		}
		var_763_bool = var_31_bool == (int)4905;
		if(var_763_bool != 0) {
			var_764_string = "";
			func_769(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)504502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504516, (int)4907, (int)4920);
			@@@var_0_object:AddReply((int)504515, (int)4923, (int)4918);
			return 0;
		}
		var_773_bool = var_31_bool == (int)4923;
		if(var_773_bool != 0) {
			var_774_string = "";
			func_769(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)504518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504519, (int)4909, (int)4924);
			@@@var_0_object:AddReply((int)533368, (int)4907, (int)34866);
			return 0;
		}
		var_783_bool = var_31_bool == (int)4907;
		if(var_783_bool != 0) {
			var_784_string = "";
			func_769(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)504504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504505, (int)4909, (int)4908);
			return 0;
		}
		var_790_bool = var_31_bool == (int)4909;
		if(var_790_bool != 0) {
			var_791_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)504506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504507, (int)4911, (int)4910);
			@@@var_0_object:AddReply((int)504514, (int)4911, (int)4917);
			return 0;
		}
		var_800_bool = var_31_bool == (int)4911;
		if(var_800_bool != 0) {
			var_801_string = "";
			func_769(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)504508);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504509, (int)22257, (int)4912);
			@@@var_0_object:AddReply((int)504513, (int)22257, (int)4916);
			return 0;
		}
		var_810_bool = var_31_bool == (int)22257;
		if(var_810_bool != 0) {
			var_811_string = "";
			func_769(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)521063);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521064, (int)22259, (int)22258);
			@@@var_0_object:AddReply((int)521069, (int)4913, (int)22264);
			return 0;
		}
		var_820_bool = var_31_bool == (int)22259;
		if(var_820_bool != 0) {
			var_821_string = "";
			func_769(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)521065);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521066, (int)22262, (int)22260);
			return 0;
		}
		var_827_bool = var_31_bool == (int)22262;
		if(var_827_bool != 0) {
			var_828_string = "";
			func_769(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)521067);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521068, (int)4913, (int)22263);
			return 0;
		}
		var_834_bool = var_31_bool == (int)4913;
		if(var_834_bool != 0) {
			var_835_string = "";
			func_769(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)504510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504497, (int)-1, (int)4900);
			@@@var_0_object:AddReply((int)504512, (int)-1, (int)4915);
			return 0;
		}
		var_3_string = true;
		var_843_bool = 0;
		func_4858(var_843_bool);
		if(var_843_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x318";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_4706();
		var_36_bool = var_32_cvector == (int)8026;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_5049();
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_5160(var_97_object);
		}
		var_123_bool = var_32_cvector == (int)8027;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_5049();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_5160(var_127_object);
		}
		var_129_bool = var_32_cvector == (int)8037;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_5031();
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_5176();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_5192(var_145_object);
		}
		var_152_bool = var_32_cvector == (int)8033;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_5031();
		}
		var_156_bool = var_32_cvector == (int)8042;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_5037();
		}
		var_162_bool = var_32_cvector == (int)8045;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_5043();
		}
		var_168_bool = var_32_cvector == (int)8046;
		if(var_168_bool != 0) {
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_5043();
		}
		var_172_bool = var_32_cvector == (int)12591;
		if(var_172_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_5049();
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_5160(var_176_object);
		}
		var_178_bool = var_31_bool == (int)7559;
		if(var_178_bool != 0) {
			var_179_bool = 0; var_180_object = Obj();
			var_180_object = var_1_object;
			func_5400(var_180_object);
			if(var_179_bool != 0) {
				var_187_object = Obj(); var_188_object = Obj();
				var_187_object = var_1_object;
				var_188_object = var_0_object;
				func_5025();
				var_191_object = Obj(); var_192_object = Obj();
				var_191_object = var_1_object;
				var_192_object = var_0_object;
				func_4973();
				var_195_string = "";
				func_2359(var_32_cvector, "Fear");
				@@@var_0_object:SetMessage((int)506853);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)506854, (int)7890, (int)7560);
				@@@var_0_object:AddReply((int)507262, (int)7890, (int)8004);
				return 0;
			}
			var_219_string = "";
			func_2359(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506855);
			@@@var_0_object:ClearReplies();
			var_221_bool = 0;
			var_221_bool = 0;
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_object;
			func_5412(var_223_object);
			if(var_222_bool != 0) {
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_object;
				func_5460(var_229_object);
				if(var_228_bool != 0) {
					var_221_bool = 1;
				}
			}
			if(var_221_bool != 0) {
				@@@var_0_object:AddReply((int)506856, (int)7563, (int)7562);
			}
			var_237_bool = 0;
			var_237_bool = 0;
			var_238_bool = 0; var_239_object = Obj();
			var_239_object = var_1_object;
			func_5424(var_239_object);
			if(var_238_bool != 0) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_5472(var_245_object);
				if(var_244_bool != 0) {
					var_237_bool = 1;
				}
			}
			if(var_237_bool != 0) {
				@@@var_0_object:AddReply((int)506859, (int)7566, (int)7565);
			}
			var_253_bool = 0;
			var_253_bool = 0;
			var_254_bool = 0; var_255_object = Obj();
			var_255_object = var_1_object;
			func_5436(var_255_object);
			if(var_254_bool != 0) {
				var_260_bool = 0; var_261_object = Obj();
				var_261_object = var_1_object;
				func_5448(var_261_object);
				if(var_260_bool != 0) {
					var_253_bool = 1;
				}
			}
			if(var_253_bool != 0) {
				@@@var_0_object:AddReply((int)506861, (int)7568, (int)7567);
			}
			var_269_bool = 0; var_270_object = Obj();
			var_270_object = var_1_object;
			func_5496(var_270_object);
			if(var_269_bool != 0) {
				@@@var_0_object:AddReply((int)511392, (int)12590, (int)12589);
			}
			@@@var_0_object:AddReply((int)507528, (int)-1, (int)8310);
			return 0;
		}
		var_282_bool = var_31_bool == (int)12590;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_2359(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511393);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511394, (int)-1, (int)12591);
			return 0;
		}
		var_289_bool = var_31_bool == (int)7568;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_2359(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507296, (int)8044, (int)8043);
			return 0;
		}
		var_296_bool = var_31_bool == (int)8044;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_2359(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507298, (int)-1, (int)8045);
			@@@var_0_object:AddReply((int)507299, (int)-1, (int)8046);
			return 0;
		}
		var_306_bool = var_31_bool == (int)7566;
		if(var_306_bool != 0) {
			var_307_object = Obj(); var_308_object = Obj();
			var_307_object = var_1_object;
			var_308_object = var_0_object;
			func_5019();
			var_311_string = "";
			func_2359(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507295, (int)-1, (int)8042);
			return 0;
		}
		var_317_bool = var_31_bool == (int)7563;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_2359(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)506857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506858, (int)8034, (int)7564);
			@@@var_0_object:AddReply((int)507287, (int)-1, (int)8033);
			return 0;
		}
		var_327_bool = var_31_bool == (int)8034;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_2359(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)507288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507289, (int)8036, (int)8035);
			@@@var_0_object:AddReply((int)507292, (int)8039, (int)8038);
			return 0;
		}
		var_337_bool = var_31_bool == (int)8039;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_2359(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)507293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507294, (int)8036, (int)8040);
			return 0;
		}
		var_344_bool = var_31_bool == (int)8036;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_2359(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)507290);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507291, (int)-1, (int)8037);
			return 0;
		}
		var_351_bool = var_31_bool == (int)7890;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_2359(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)507162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507264, (int)8010, (int)8007);
			@@@var_0_object:AddReply((int)507265, (int)8010, (int)8008);
			@@@var_0_object:AddReply((int)507266, (int)-1, (int)8009);
			return 0;
		}
		var_364_bool = var_31_bool == (int)8010;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_2359(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)507267);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507268, (int)8015, (int)8012);
			@@@var_0_object:AddReply((int)507269, (int)8014, (int)8013);
			return 0;
		}
		var_374_bool = var_31_bool == (int)8014;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_2359(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)507270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507272, (int)8019, (int)8016);
			@@@var_0_object:AddReply((int)507273, (int)8015, (int)8017);
			@@@var_0_object:AddReply((int)507274, (int)-1, (int)8018);
			return 0;
		}
		var_387_bool = var_31_bool == (int)8019;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_2359(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)507275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507276, (int)8015, (int)8020);
			return 0;
		}
		var_394_bool = var_31_bool == (int)8015;
		if(var_394_bool != 0) {
			var_395_object = Obj(); var_396_object = Obj();
			var_395_object = var_1_object;
			var_396_object = var_0_object;
			func_5120();
			var_399_string = "";
			func_2359(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507271);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533818, (int)35366, (int)35365);
			return 0;
		}
		var_405_bool = var_31_bool == (int)35366;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_2359(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533819);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507277, (int)8023, (int)8022);
			@@@var_0_object:AddReply((int)507284, (int)8030, (int)8029);
			return 0;
		}
		var_415_bool = var_31_bool == (int)8030;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_2359(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)507285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507286, (int)8025, (int)8031);
			return 0;
		}
		var_422_bool = var_31_bool == (int)8023;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_2359(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)507278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507279, (int)8025, (int)8024);
			return 0;
		}
		var_429_bool = var_31_bool == (int)8025;
		if(var_429_bool != 0) {
			var_430_string = "";
			func_2359(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)507280);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533820, (int)35368, (int)35367);
			return 0;
		}
		var_436_bool = var_31_bool == (int)35368;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_2359(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)533821);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507281, (int)-1, (int)8026);
			@@@var_0_object:AddReply((int)507282, (int)-1, (int)8027);
			@@@var_0_object:AddReply((int)507283, (int)-1, (int)8028);
			return 0;
		}
		var_3_string = true;
		var_448_bool = 0;
		func_4858(var_448_bool);
		if(var_448_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x94e";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_4706();
		var_36_bool = var_32_cvector == (int)10840;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_5208();
		}
		var_42_bool = var_31_bool == (int)10839;
		if(var_42_bool != 0) {
			var_43_string = "";
			func_3142(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509840);
			@@@var_0_object:ClearReplies();
			var_61_bool = 0; var_62_object = Obj();
			var_62_object = var_1_object;
			func_5580(var_62_object);
			if(var_61_bool != 0) {
				@@@var_0_object:AddReply((int)509841, (int)10821, (int)10840);
			}
			@@@var_0_object:AddReply((int)511259, (int)-1, (int)12449);
			return 0;
		}
		var_76_bool = var_31_bool == (int)10821;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_3142(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)509824);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509825, (int)10823, (int)10822);
			@@@var_0_object:AddReply((int)509829, (int)10828, (int)10827);
			@@@var_0_object:AddReply((int)509836, (int)10835, (int)10834);
			return 0;
		}
		var_89_bool = var_31_bool == (int)10835;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_3142(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)509837);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509839, (int)10828, (int)10837);
			@@@var_0_object:AddReply((int)509838, (int)-1, (int)10836);
			return 0;
		}
		var_99_bool = var_31_bool == (int)10828;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_3142(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)509830);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509831, (int)-1, (int)10829);
			@@@var_0_object:AddReply((int)509832, (int)10831, (int)10830);
			return 0;
		}
		var_109_bool = var_31_bool == (int)10831;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_3142(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)509833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509834, (int)-1, (int)10832);
			@@@var_0_object:AddReply((int)509835, (int)-1, (int)10833);
			return 0;
		}
		var_119_bool = var_31_bool == (int)10823;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_3142(var_32_cvector, "Sexy");
			@@@var_0_object:SetMessage((int)509826);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509827, (int)10828, (int)10824);
			@@@var_0_object:AddReply((int)509828, (int)-1, (int)10826);
			return 0;
		}
		var_3_string = true;
		var_128_bool = 0;
		func_4858(var_128_bool);
		if(var_128_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5d";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_4706();
		var_36_bool = var_32_cvector == (int)12447;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_5214();
		}
		var_42_bool = var_32_cvector == (int)36784;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_5013();
		}
		var_48_bool = var_31_bool == (int)12445;
		if(var_48_bool != 0) {
			var_49_string = "";
			func_3538(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511255);
			@@@var_0_object:ClearReplies();
			var_67_bool = 0;
			var_67_bool = 1;
			var_68_bool = 0;
			var_68_bool = 1;
			var_69_bool = 0;
			var_69_bool = 0;
			var_70_bool = 0; var_71_object = Obj();
			var_71_object = var_1_object;
			func_5592(var_71_object);
			if(var_70_bool != 0) {
				var_78_bool = 0; var_79_object = Obj();
				var_79_object = var_1_object;
				func_5520(var_79_object);
				if(var_78_bool != 0) {
					var_69_bool = 1;
				}
			}
			if(var_69_bool != 1) {
				var_84_bool = 0;
				var_84_bool = 0;
				var_85_bool = 0; var_86_object = Obj();
				var_86_object = var_1_object;
				func_5544(var_86_object);
				if(var_85_bool != 0) {
					var_91_bool = 0; var_92_object = Obj();
					var_92_object = var_1_object;
					func_5592(var_92_object);
					if(var_91_bool != 0) {
						var_84_bool = 1;
					}
				}
				if(var_84_bool != 1) {
					var_68_bool = 0;
				}
			}
			if(var_68_bool != 1) {
				var_93_bool = 0;
				var_93_bool = 0;
				var_94_bool = 0; var_95_object = Obj();
				var_95_object = var_1_object;
				func_5532(var_95_object);
				if(var_94_bool != 0) {
					var_100_bool = 0; var_101_object = Obj();
					var_101_object = var_1_object;
					func_5592(var_101_object);
					if(var_100_bool != 0) {
						var_93_bool = 1;
					}
				}
				if(var_93_bool != 1) {
					var_67_bool = 0;
				}
			}
			if(var_67_bool != 0) {
				@@@var_0_object:AddReply((int)511257, (int)12448, (int)12447);
			}
			var_105_bool = 0; var_106_object = Obj();
			var_106_object = var_1_object;
			func_5376(var_106_object);
			if(var_105_bool != 0) {
				@@@var_0_object:AddReply((int)535125, (int)36785, (int)36784);
			}
			@@@var_0_object:AddReply((int)511256, (int)-1, (int)12446);
			return 0;
		}
		var_118_bool = var_31_bool == (int)36785;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_3538(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)535126);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535127, (int)36787, (int)36786);
			@@@var_0_object:AddReply((int)535134, (int)36787, (int)36793);
			return 0;
		}
		var_128_bool = var_31_bool == (int)36787;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_3538(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)535128);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535129, (int)36789, (int)36788);
			@@@var_0_object:AddReply((int)535137, (int)36798, (int)36797);
			return 0;
		}
		var_138_bool = var_31_bool == (int)36798;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_3538(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)535138);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535139, (int)-1, (int)36799);
			@@@var_0_object:AddReply((int)535140, (int)36789, (int)36800);
			return 0;
		}
		var_148_bool = var_31_bool == (int)36789;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_3538(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)535130);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535131, (int)36791, (int)36790);
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_5508(var_155_object);
			if(var_154_bool != 0) {
				@@@var_0_object:AddReply((int)535135, (int)-1, (int)36795);
			}
			return 0;
		}
		var_164_bool = var_31_bool == (int)36791;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_3538(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)535132);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535133, (int)-1, (int)36792);
			@@@var_0_object:AddReply((int)535136, (int)-1, (int)36796);
			return 0;
		}
		var_174_bool = var_31_bool == (int)12448;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_3538(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511267, (int)12458, (int)12457);
			@@@var_0_object:AddReply((int)511260, (int)12451, (int)12450);
			return 0;
		}
		var_184_bool = var_31_bool == (int)12451;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_3538(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)511261);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511262, (int)12453, (int)12452);
			return 0;
		}
		var_191_bool = var_31_bool == (int)12453;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_3538(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)511263);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511264, (int)12455, (int)12454);
			return 0;
		}
		var_198_bool = var_31_bool == (int)12455;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_3538(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)511265);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511266, (int)12458, (int)12456);
			return 0;
		}
		var_205_bool = var_31_bool == (int)12458;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_3538(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511268);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511269, (int)12463, (int)12459);
			@@@var_0_object:AddReply((int)511270, (int)12461, (int)12460);
			return 0;
		}
		var_215_bool = var_31_bool == (int)12461;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_3538(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)511271);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511273, (int)12463, (int)12464);
			@@@var_0_object:AddReply((int)511274, (int)-1, (int)12465);
			return 0;
		}
		var_225_bool = var_31_bool == (int)12463;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_3538(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)511272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511275, (int)-1, (int)12467);
			@@@var_0_object:AddReply((int)511276, (int)-1, (int)12468);
			return 0;
		}
		var_3_string = true;
		var_234_bool = 0;
		func_4858(var_234_bool);
		if(var_234_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xde9";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_4706();
		var_36_bool = var_31_int == (int)42557;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_4083(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_4858(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x100a";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_4216();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_4430(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_4185(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_4165(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_4713(Obj());
				var_77_object = var_76_object;
				func_4580(var_75_bool, var_76_object);
			}
		} else {
			func_4180(var_31_int);
			func_4207();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_4398();
	func_4216();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_4216();
	var_32_string = "";
	func_4660("Neutral");
	func_4207();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_4207();
	} else {
		var_38_string = "";
		func_4660("Neutral");
	}
	return 0;
	
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0;
	IsOverrideActive(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		EventDisable(0);
		func_4398();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_4421(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_5776(var_49_object);
		var_873_string = "";
		func_4660("Neutral");
		func_4216();
		func_4207();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_4151(var_30_cvector);
	return 0;
}


func_5120()
{
	SetVariable("KnowStation", (int)1);
	return 0;
}


func_0(var_0_object, var_736_int, var_737_object)
{
	var_739_object = Obj(); var_740_bool = 0; var_741_int = 0; var_742_bool = 0; var_743_object = Obj(); var_744_bool = 0; var_745_int = 0; var_746_bool = 0;
	var_0_object = var_737_object;
	var_747_bool = 0; var_748_object = Obj(); var_749_float = 0;
	var_737_object = var_748_object;
	func_4435(var_747_bool, var_748_object, (float)70.0);
	var_750_bool = var_747_bool == 0; //@nz
	if(var_750_bool != 0) {
		var_736_int = -2;
		return 8;
	}
	CreateDialog(var_743_object);
	var_751_int = 0;
	func_4852(var_751_int);
	@@var_743_object:SetNPCName(var_751_int);
	var_752_int = 0;
	func_4850(var_752_int);
	@@var_743_object:SetNPCDescription(var_752_int);
	var_753_string = "";
	func_4854(var_753_string);
	@@var_743_object:SetPhoto(var_753_string);
	var_754_string = "";
	func_4856(var_754_string);
	@@var_743_object:SetPhoto2(var_754_string);
	var_755_int = 0;
	func_5759(var_755_int);
	@@var_743_object:SetPlayerName(var_755_int);
	IsOverrideActive(var_744_bool);
	var_756_bool = var_744_bool;
	if(var_756_bool != 0) {
		var_736_int = -2;
		return 8;
	}
	DoDialog(var_743_object);
	var_757_bool = 0; var_758_object = Obj();
	func_4713(Obj());
	var_759_object = var_758_object;
	func_4522(var_757_bool, var_758_object);
	var_760_object = Obj(); var_761_object = Obj();
	var_737_object = var_760_object;
	var_743_object = var_761_object;
	TaskCall(1);
	func_81(var_762_object, var_763_object, var_764_string, var_765_bool, var_760_object, var_761_object);
	TaskReturn();
	@@var_743_object:IsDialogEnd(var_746_bool);
	
Label_63:
	var_815_bool = var_746_bool == 0; //@nz
	if(var_815_bool != 0) {
		sync();
		@@var_743_object:IsDialogEnd(var_746_bool);
		goto Label_63;
	}
	var_737_object = Obj();
	func_4504();
	StopDialog(var_743_object);
	@@var_743_object:GetReturnValue((int)-1);
	var_745_int = var_736_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5126(var_165_object)
{
	var_166_object = Obj(); var_167_string = ""; var_168_float = 0;
	func_5709(Obj());
	var_169_object = var_166_object;
	func_5726(var_166_object, "pt_map_ospina", (float)2);
	var_170_object = Obj();
	func_5709(var_170_object);
	@@var_165_object:ShowMap(var_170_object);
	return 0;
}


func_3079(var_0_object, var_1_object, var_2_object, var_3_string, var_596_object, var_597_object)
{
	var_0_object = var_597_object;
	var_1_object = var_596_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_603_string = "";
		func_3142(var_597_object, "Neutral");
		@@@var_0_object:SetMessage((int)509840);
		@@@var_0_object:ClearReplies();
		var_612_bool = 0; var_613_object = Obj();
		var_613_object = var_1_object;
		func_5580(var_613_object);
		if(var_612_bool != 0) {
			@@@var_0_object:AddReply((int)509841, (int)10821, (int)10840);
		}
		@@@var_0_object:AddReply((int)511259, (int)-1, (int)12449);
		goto Label_3112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc0b";
	}
Label_3112:
	var_624_bool = 0;
	func_4858(var_624_bool);
	if(var_624_bool != 0) {

	Label_3116:
		lshWaitForAnimEnd();
		var_625_string = var_3_string;
		if(var_625_string != 0) {
		} else {
			var_626_string = "";
			var_626_string = var_2_object;
			func_4660(var_626_string);
			goto Label_3116;
	}
		PlayAnimation("all", "idle");

	Label_3131:
		WaitForAnimEnd();
		var_629_string = var_3_string;
		if(var_629_string != 0) {
			goto Label_3141;
		}
		PlayAnimation("all", "idle");
		goto Label_3131;
	}
	goto Label_3141;
	
Label_3141:
	return 0;
	
}


func_4617(var_172_bool, var_173_object)
{
	var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; var_179_string = ""; var_180_int = 0; var_181_bool = 0; var_182_int = 0; var_183_string = "";
	var_185_int = 0;
	func_4811(var_185_int);
	var_186_int = "d" + var_185_int;
	var_179_string = var_186_int + "m";
	var_180_int = 0;
	
Label_4626:
	if((int)1 != 0) {
		var_190_int = var_180_int + (int)1;
		var_191_int = var_179_string + var_190_int;
		@@var_173_object:HasProperty(var_191_int, var_181_bool);
		var_192_bool = var_181_bool == 0; //@nz
		if(var_192_bool != 0) {
		} else {
			var_180_int = var_180_int + (int)1;
			goto Label_4626;
		}
	}
	var_193_bool = var_180_int == 0; //@nz
	if(var_193_bool != 0) {
		var_172_bool = 0;
		return 10;
	}
	var_182_int = 0;
	var_195_bool = var_180_int > (int)1;
	if(var_195_bool != 0) {
		irand(var_182_int, var_180_int);
	}
	var_197_int = var_182_int + (int)1;
	var_198_int = var_179_string + var_197_int;
	@@var_173_object:GetProperty(var_198_int, var_183_string);
	var_199_bool = 0; var_200_string = "";
	var_183_string = var_200_string;
	func_4691(var_199_bool, var_200_string);
	var_199_bool = var_172_bool;
	return 10;
	
}


func_5642()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)11, (int)2, (int)503095);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_5681(var_62_bool, var_63_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5142()
{
	SetVariable("ood1EvaIntro1", (int)1);
	return 0;
}


func_5655()
{
	var_80_object = Obj(); var_81_object = Obj();
	CreateDiaryEntry(var_81_object, (int)57, (int)2, (int)512139);
	var_85_bool = 0; var_86_object = Obj(); var_87_int = 0;
	var_81_object = var_86_object;
	func_5681(var_85_bool, var_86_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5148()
{
	SetVariable("ood1EvaIntro2", (int)1);
	return 0;
}


func_5154()
{
	SetVariable("ood6Eva1", (int)1);
	return 0;
}


func_5668(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj();
	GetDiaryRoot(var_73_object);
	var_74_bool = var_73_object == 0; //@nz
	if(var_74_bool != 0) {
		Trace("Can't retrieve diary root");
		var_71_object = 0;
		return 2;
	}
	var_73_object = var_71_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5160(var_97_object)
{
	var_98_object = Obj(); var_99_string = ""; var_100_float = 0;
	func_5709(Obj());
	var_101_object = var_98_object;
	func_5726(var_98_object, "pt_map_andrei", (float)2);
	var_121_object = Obj();
	func_5709(var_121_object);
	@@var_97_object:ShowMap(var_121_object);
	return 0;
}


func_5681(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0;
	func_5668(Obj());
	var_71_object = var_68_object;
	@@var_68_object:Find(var_64_int, var_69_object);
	var_76_bool = var_69_object == 0; //@nz
	if(var_76_bool != 0) {
		var_78_int = "Can't find diary parent with id: " + var_64_int;
		Trace(var_78_int);
		var_62_bool = 0;
		return 6;
	}
	@@var_69_object:AddChild(var_63_object);
	SendWorldWndMessage((int)7);
	@@var_63_object:GetCategory(var_70_int);
	SetDiarySection(var_70_int);
	var_62_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4660(var_272_string)
{
	var_273_bool = 0; var_274_float = 0; var_275_float = 0; var_276_bool = 0; var_277_float = 0; var_278_float = 0;
	lshHasAnimation(var_276_bool, var_272_string);
	var_279_bool = var_276_bool;
	if(var_279_bool != 0) {
		lshGetAnimTimes(var_272_string, var_277_float, var_278_float);
		lshPlayAnimation(var_277_float, var_278_float, (bool)0);
	} else {
		var_282_int = "Can't find lsh animation : " + var_272_string;
		Trace(var_282_int);
	}
	return 6;
	
}


func_4151(var_0_object)
{
	var_31_bool = 0;
	func_4430(var_31_bool);
	var_34_bool = var_31_bool == 0; //@nz
	if(var_34_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_4160:
	func_4327();
	goto Label_4160;
}
EMIT "Return(); Pop(0)";


func_5176()
{
	var_136_object = Obj(); var_137_object = Obj();
	func_5709(Obj());
	var_138_object = var_137_object;
	var_143_float = 0;
	func_4806(var_143_float);
	@@var_137_object:AddMark("d2q02EvaGotoMaria", "pt_map_maria", (int)0, (int)515274, var_143_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4676(var_250_string, var_251_bool)
{
	var_254_bool = 0; var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_float = 0; var_259_float = 0;
	lshHasAnimation(var_257_bool, var_250_string);
	var_260_bool = var_257_bool;
	if(var_260_bool != 0) {
		lshGetAnimTimes(var_250_string, var_258_float, var_259_float);
		lshPlayAnimation(var_258_float, var_259_float, var_251_bool);
	} else {
		var_262_int = "Can't find lsh animation : " + var_250_string;
		Trace(var_262_int);
	}
	return 6;
	
}


func_4165(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj();
	FindActor(var_58_object, "player");
	var_60_bool = var_58_object == 0; //@nz
	if(var_60_bool != 0) {
		var_56_bool = 0;
		return 2;
	}
	var_61_bool = 0; var_62_object = Obj();
	var_58_object = var_62_object;
	func_4421(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3142(var_2_object, var_603_string)
{
	var_604_bool = 0;
	func_4858(var_604_bool);
	var_605_bool = var_604_bool == 0; //@nz
	if(var_605_bool != 0) {
		return 0;
	}
	var_606_bool = var_603_string == var_2_object;
	if(var_606_bool != 0) {
		return 0;
	}
	var_607_string = ""; var_608_bool = 0;
	var_603_string = var_607_string;
	var_610_bool = var_603_string == "";
	if(var_610_bool != 0) {
		var_608_bool = 0;
	} else {
		var_608_bool = 1;
	}
	func_4676(var_607_string, var_608_bool);
	var_2_object = var_603_string;
	return 0;
	
}


func_5192(var_145_object)
{
	var_146_object = Obj(); var_147_string = ""; var_148_float = 0;
	func_5709(Obj());
	var_149_object = var_146_object;
	func_5726(var_146_object, "pt_map_maria", (float)2);
	var_150_object = Obj();
	func_5709(var_150_object);
	@@var_145_object:ShowMap(var_150_object);
	return 0;
}


func_2123(var_0_object, var_438_int, var_439_object)
{
	var_441_object = Obj(); var_442_bool = 0; var_443_int = 0; var_444_bool = 0; var_445_object = Obj(); var_446_bool = 0; var_447_int = 0; var_448_bool = 0;
	var_0_object = var_439_object;
	var_449_bool = 0; var_450_object = Obj(); var_451_float = 0;
	var_439_object = var_450_object;
	func_4435(var_449_bool, var_450_object, (float)70.0);
	var_452_bool = var_449_bool == 0; //@nz
	if(var_452_bool != 0) {
		var_438_int = -2;
		return 8;
	}
	CreateDialog(var_445_object);
	var_453_int = 0;
	func_4852(var_453_int);
	@@var_445_object:SetNPCName(var_453_int);
	var_454_int = 0;
	func_4850(var_454_int);
	@@var_445_object:SetNPCDescription(var_454_int);
	var_455_string = "";
	func_4854(var_455_string);
	@@var_445_object:SetPhoto(var_455_string);
	var_456_string = "";
	func_4856(var_456_string);
	@@var_445_object:SetPhoto2(var_456_string);
	var_457_int = 0;
	func_5759(var_457_int);
	@@var_445_object:SetPlayerName(var_457_int);
	IsOverrideActive(var_446_bool);
	var_458_bool = var_446_bool;
	if(var_458_bool != 0) {
		var_438_int = -2;
		return 8;
	}
	DoDialog(var_445_object);
	var_459_bool = 0; var_460_object = Obj();
	func_4713(Obj());
	var_461_object = var_460_object;
	func_4522(var_459_bool, var_460_object);
	var_462_object = Obj(); var_463_object = Obj();
	var_439_object = var_462_object;
	var_445_object = var_463_object;
	TaskCall(5);
	func_2204(var_464_object, var_465_object, var_466_string, var_467_bool, var_462_object, var_463_object);
	TaskReturn();
	@@var_445_object:IsDialogEnd(var_448_bool);
	
Label_2186:
	var_568_bool = var_448_bool == 0; //@nz
	if(var_568_bool != 0) {
		sync();
		@@var_445_object:IsDialogEnd(var_448_bool);
		goto Label_2186;
	}
	var_439_object = Obj();
	func_4504();
	StopDialog(var_445_object);
	@@var_445_object:GetReturnValue((int)-1);
	var_447_int = var_438_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5709(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj();
	GetMainOutdoorScene(var_46_object);
	var_48_bool = var_46_object == 0; //@ne
	if(var_48_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_47_object = 0;
		var_47_object = var_43_object;
		return 4;
	}
	@@var_46_object:GetMap(var_47_object);
	var_47_object = var_43_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_760_object, var_761_object)
{
	var_0_object = var_761_object;
	var_1_object = var_760_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_767_bool = 0;
		var_767_bool = 0;
		var_768_bool = 0; var_769_object = Obj();
		var_769_object = var_1_object;
		func_5556(var_769_object);
		if(var_768_bool != 0) {
			var_774_bool = 0; var_775_object = Obj();
			var_775_object = var_1_object;
			func_5568(var_775_object);
			if(var_774_bool != 0) {
				var_767_bool = 1;
			}
		}
		if(var_767_bool != 0) {
			var_780_object = Obj(); var_781_object = Obj();
			var_780_object = var_1_object;
			var_781_object = var_0_object;
			func_5154();
			var_784_string = "";
			func_178(var_761_object, "Neutral");
			@@@var_0_object:SetMessage((int)503926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503927, (int)4276, (int)4275);
			@@@var_0_object:AddReply((int)503929, (int)4278, (int)4277);
		} else {
				var_807_string = "";
				func_178(var_761_object, "Sexy");
				@@@var_0_object:SetMessage((int)513718);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513719, (int)-1, (int)14985);
				@@@var_0_object:AddReply((int)536133, (int)-1, (int)37892);
				goto Label_148;
		}
	}
Label_148:
	var_799_bool = 0;
	func_4858(var_799_bool);
	if(var_799_bool != 0) {

	Label_152:
		lshWaitForAnimEnd();
		var_800_string = var_3_string;
		if(var_800_string != 0) {
		} else {
			var_801_string = "";
			var_801_string = var_2_object;
			func_4660(var_801_string);
			goto Label_152;
	}
		PlayAnimation("all", "idle");

	Label_167:
		WaitForAnimEnd();
		var_804_string = var_3_string;
		if(var_804_string != 0) {
			goto Label_177;
		}
		PlayAnimation("all", "idle");
		goto Label_167;

	}
	goto Label_177;
	
Label_177:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_4691(var_164_bool, var_165_string)
{
	var_166_bool = 0; var_167_bool = 0;
	var_168_bool = 0;
	func_4858(var_168_bool);
	if(var_168_bool != 0) {
		lshHasSpeech(var_167_bool, var_165_string);
		var_169_bool = var_167_bool;
		if(var_169_bool != 0) {
			lshPlaySpeech(var_165_string);
			var_164_bool = 1;
			return 2;
		}
	}
	var_164_bool = 0;
	return 2;
}


func_4180(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_5208()
{
	SetVariable("ood3Eva1", (int)1);
	return 0;
}


func_4185(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0;
	FindActor(var_42_object, "player");
	var_45_bool = var_42_object == 0; //@nz
	if(var_45_bool != 0) {
		var_39_bool = 0;
		return 4;
	}
	var_46_float = 0; var_47_object = Obj();
	var_42_object = var_47_object;
	func_4403(var_46_float, var_47_object);
	var_55_bool = var_46_float > (float)90000.0;
	if(var_55_bool != 0) {
		var_39_bool = 0;
		return 4;
	}
	CanSee(var_43_bool, var_42_object);
	var_43_bool = var_39_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_5214()
{
	SetVariable("ood4Eva1", (int)1);
	return 0;
}


func_5726(var_98_object, var_99_string, var_100_float)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_object = Obj(); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0;
	GetMainOutdoorScene(var_108_object);
	var_110_bool = var_108_object == 0; //@ne
	if(var_110_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_108_object:GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector);
	var_112_bool = var_109_bool == 0; //@nz
	if(var_112_bool != 0) {
		var_114_int = "Warning: outdoor scene locator " + var_99_string;
		var_116_int = var_114_int + " doesnt exist";
		Trace(var_116_int);
	}
	@@var_108_object:GetMap(var_98_object);
	var_117_bool = var_98_object == 0; //@ne
	if(var_117_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_119_float = GetByIndex(var_106_cvector, 0);
	var_120_float = GetByIndex(var_106_cvector, 2);
	@@var_98_object:SetMapParams(var_119_float, var_120_float, var_100_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4706()
{
	var_34_bool = 0;
	func_4858(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5220(var_228_bool)
{
	var_230_int = 0; var_231_string = "";
	func_4729(var_230_int, "ood1EvaIntro1");
	var_235_bool = var_230_int == (int)0;
	if(var_235_bool != 0) {
		var_228_bool = 1;
		return 0;
	}
	var_228_bool = 0;
	return 0;
}


func_4713(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj();
	self(var_134_object);
	var_134_object = var_132_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4207()
{
	var_875_float = 0; var_876_float = 0;
	rand(var_876_float, (int)8, (int)16);
	SetTimer((int)10, var_876_float);
	return 2;
}


func_5232(var_414_bool)
{
	var_416_int = 0; var_417_string = "";
	func_4729(var_416_int, "d1q01FirstGeorgVisit");
	var_419_bool = var_416_int == (int)1;
	if(var_419_bool != 0) {
		var_414_bool = 1;
		return 0;
	}
	var_414_bool = 0;
	return 0;
}


func_4719(var_96_cvector, var_97_cvector)
{
	var_99_float = 0; var_100_float = 0;
	var_101_int = var_97_cvector | var_97_cvector;
	var_100_float = sqrt(var_101_int);
	var_102_float = 9.999999974752427e-07;
	var_103_bool = var_100_float < var_102_float;
	if(var_103_bool != 0) {
		var_96_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_96_cvector = var_97_cvector / var_100_float;
	return 2;
}


func_4216()
{
	KillTimer((int)10);
	return 0;
}


func_4729(var_230_int, var_231_string)
{
	var_232_int = 0; var_233_int = 0;
	GetVariable(var_231_string, var_233_int);
	var_233_int = var_230_int;
	return 2;
}


func_5244(var_236_bool)
{
	var_238_int = 0; var_239_string = "";
	func_4729(var_238_int, "d1q03");
	var_241_bool = var_238_int == (int)0;
	if(var_241_bool != 0) {
		var_236_bool = 1;
		return 0;
	}
	var_236_bool = 0;
	return 0;
}


func_4734(var_88_object, var_89_string)
{
	var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj();
	GetMainOutdoorScene(var_92_object);
	var_95_int = var_89_string + ".bin";
	AddBlankActor(var_93_object, var_92_object, var_89_string, var_95_int);
	var_93_object = var_88_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5759(var_121_int)
{
	var_122_int = 0; var_123_int = 0;
	GetVariable("branch", var_123_int);
	var_126_bool = var_123_int == (int)0;
	if(var_126_bool != 0) {
		var_121_int = 1;
		return 2;
	EMIT "GOTO 0x168e";
	}
	var_128_bool = var_123_int == (int)1;
	if(var_128_bool != 0) {
		var_121_int = 2;
		return 2;
	}
	var_121_int = 3;
	return 2;
}


func_5256(var_370_bool)
{
	var_372_int = 0; var_373_string = "";
	func_4729(var_372_int, "d1q03");
	var_375_bool = var_372_int == (int)1000;
	if(var_375_bool != 0) {
		var_370_bool = 1;
		return 0;
	}
	var_370_bool = 0;
	return 0;
}


func_4745(var_39_string, var_40_bool)
{
	var_41_object = Obj(); var_42_object = Obj();
	FindActor(var_42_object, var_39_string);
	var_43_bool = var_42_object == 0; //@nz
	if(var_43_bool != 0) {
		var_45_int = "Door " + var_39_string;
		var_47_int = var_45_int + " not found";
		Trace(var_47_int);
	} else {
		@@var_42_object:SetProperty("locked", var_40_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_5776(var_49_object)
{
	var_50_bool = 0; var_51_int = 0;
	func_4820(var_50_bool, (int)1);
	if(var_50_bool != 0) {
		var_58_int = 0; var_59_object = Obj();
		var_49_object = var_59_object;
		TaskCall(2);
		func_406(var_60_object, var_58_int, var_59_object);
		TaskReturn();
		return 0;
	}
	var_436_bool = 0; var_437_int = 0;
	func_4820(var_436_bool, (int)2);
	if(var_436_bool != 0) {
		var_438_int = 0; var_439_object = Obj();
		var_49_object = var_439_object;
		TaskCall(4);
		func_2123(var_440_object, var_438_int, var_439_object);
		TaskReturn();
		return 0;
	}
	var_570_bool = 0; var_571_int = 0;
	func_4820(var_570_bool, (int)3);
	if(var_570_bool != 0) {
		var_572_int = 0; var_573_object = Obj();
		var_49_object = var_573_object;
		TaskCall(6);
		func_2998(var_574_object, var_572_int, var_573_object);
		TaskReturn();
		return 0;
	}
	var_634_bool = 0; var_635_int = 0;
	func_4820(var_634_bool, (int)4);
	if(var_634_bool != 0) {
		var_636_int = 0; var_637_object = Obj();
		var_49_object = var_637_object;
		TaskCall(8);
		func_3339(var_638_object, var_636_int, var_637_object);
		TaskReturn();
		return 0;
	}
	var_734_bool = 0; var_735_int = 0;
	func_4820(var_734_bool, (int)6);
	if(var_734_bool != 0) {
		var_736_int = 0; var_737_object = Obj();
		var_49_object = var_737_object;
		TaskCall(0);
		func_0(var_738_object, var_736_int, var_737_object);
		TaskReturn();
		return 0;
	}
	var_817_int = 0; var_818_object = Obj();
	var_49_object = var_818_object;
	TaskCall(10);
	func_3944(var_819_object, var_817_int, var_818_object);
	TaskReturn();
	return 0;
}


func_5268(var_381_bool)
{
	var_383_int = 0; var_384_string = "";
	func_4729(var_383_int, "d1q03IsKapella");
	var_386_bool = var_383_int == (int)1;
	if(var_386_bool != 0) {
		var_381_bool = 1;
		return 0;
	}
	var_381_bool = 0;
	return 0;
}


func_4762(var_241_int, var_242_int)
{
	var_243_object = Obj(); var_244_object = Obj();
	CreateIntVector(var_244_object);
	@@var_244_object:add(var_241_int);
	@@var_244_object:add(var_242_int);
	SendWorldWndMessage((int)3, var_244_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2204(var_0_object, var_1_object, var_2_object, var_3_string, var_462_object, var_463_object)
{
	var_0_object = var_463_object;
	var_1_object = var_462_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_469_bool = 0; var_470_object = Obj();
		var_470_object = var_1_object;
		func_5400(var_470_object);
		if(var_469_bool != 0) {
			var_475_object = Obj(); var_476_object = Obj();
			var_475_object = var_1_object;
			var_476_object = var_0_object;
			func_5025();
			var_479_object = Obj(); var_480_object = Obj();
			var_479_object = var_1_object;
			var_480_object = var_0_object;
			func_4973();
			var_483_string = "";
			func_2359(var_463_object, "Fear");
			@@@var_0_object:SetMessage((int)506853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506854, (int)7890, (int)7560);
			@@@var_0_object:AddReply((int)507262, (int)7890, (int)8004);
		} else {
				var_506_string = "";
				func_2359(var_463_object, "Neutral");
				@@@var_0_object:SetMessage((int)506855);
				@@@var_0_object:ClearReplies();
				var_508_bool = 0;
				var_508_bool = 0;
				var_509_bool = 0; var_510_object = Obj();
				var_510_object = var_1_object;
				func_5412(var_510_object);
				if(var_509_bool != 0) {
					var_515_bool = 0; var_516_object = Obj();
					var_516_object = var_1_object;
					func_5460(var_516_object);
					if(var_515_bool != 0) {
						var_508_bool = 1;
					}
				}
				if(var_508_bool != 0) {
					@@@var_0_object:AddReply((int)506856, (int)7563, (int)7562);
				}
				var_524_bool = 0;
				var_524_bool = 0;
				var_525_bool = 0; var_526_object = Obj();
				var_526_object = var_1_object;
				func_5424(var_526_object);
				if(var_525_bool != 0) {
					var_531_bool = 0; var_532_object = Obj();
					var_532_object = var_1_object;
					func_5472(var_532_object);
					if(var_531_bool != 0) {
						var_524_bool = 1;
					}
				}
				if(var_524_bool != 0) {
					@@@var_0_object:AddReply((int)506859, (int)7566, (int)7565);
				}
				var_540_bool = 0;
				var_540_bool = 0;
				var_541_bool = 0; var_542_object = Obj();
				var_542_object = var_1_object;
				func_5436(var_542_object);
				if(var_541_bool != 0) {
					var_547_bool = 0; var_548_object = Obj();
					var_548_object = var_1_object;
					func_5448(var_548_object);
					if(var_547_bool != 0) {
						var_540_bool = 1;
					}
				}
				if(var_540_bool != 0) {
					@@@var_0_object:AddReply((int)506861, (int)7568, (int)7567);
				}
				var_556_bool = 0; var_557_object = Obj();
				var_557_object = var_1_object;
				func_5496(var_557_object);
				if(var_556_bool != 0) {
					@@@var_0_object:AddReply((int)511392, (int)12590, (int)12589);
				}
				@@@var_0_object:AddReply((int)507528, (int)-1, (int)8310);
				goto Label_2329;
		}
	}
Label_2329:
	var_498_bool = 0;
	func_4858(var_498_bool);
	if(var_498_bool != 0) {

	Label_2333:
		lshWaitForAnimEnd();
		var_499_string = var_3_string;
		if(var_499_string != 0) {
		} else {
			var_500_string = "";
			var_500_string = var_2_object;
			func_4660(var_500_string);
			goto Label_2333;
	}
		PlayAnimation("all", "idle");

	Label_2348:
		WaitForAnimEnd();
		var_503_string = var_3_string;
		if(var_503_string != 0) {
			goto Label_2358;
		}
		PlayAnimation("all", "idle");
		goto Label_2348;

	}
	goto Label_2358;
	
Label_2358:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x8a0";


func_5280(var_405_bool)
{
	var_407_int = 0; var_408_string = "";
	func_4729(var_407_int, "d1q04");
	var_410_bool = var_407_int == (int)1;
	if(var_410_bool != 0) {
		var_405_bool = 1;
		return 0;
	}
	var_405_bool = 0;
	return 0;
}


func_4774(var_230_object, var_231_object, var_232_int)
{
	var_233_int = 0; var_234_int = 0; var_235_bool = 0; var_236_int = 0; var_237_int = 0; var_238_bool = 0;
	@@var_231_object:GetItemID(var_236_int);
	GetInvItemProperty(var_237_int, var_236_int, "Category");
	@@var_230_object:AddItem(var_238_bool, var_231_object, var_237_int, var_232_int);
	var_240_bool = var_238_bool == 0; //@nz
	if(var_240_bool != 0) {
		@@var_230_object:DropItems(var_231_object, var_232_int);
	} else {
		var_241_int = 0; var_242_int = 0;
		var_236_int = var_241_int;
		var_232_int = var_242_int;
		func_4762(var_241_int, var_242_int);
	}
	return 6;
	
}


func_5292(var_309_bool)
{
	var_311_int = 0; var_312_string = "";
	func_4729(var_311_int, "d1q01");
	var_314_bool = var_311_int == (int)5;
	if(var_314_bool != 0) {
		var_309_bool = 1;
		return 0;
	}
	var_309_bool = 0;
	return 0;
}


func_178(var_2_object, var_784_string)
{
	var_785_bool = 0;
	func_4858(var_785_bool);
	var_786_bool = var_785_bool == 0; //@nz
	if(var_786_bool != 0) {
		return 0;
	}
	var_787_bool = var_784_string == var_2_object;
	if(var_787_bool != 0) {
		return 0;
	}
	var_788_string = ""; var_789_bool = 0;
	var_784_string = var_788_string;
	var_791_bool = var_784_string == "";
	if(var_791_bool != 0) {
		var_789_bool = 0;
	} else {
		var_789_bool = 1;
	}
	func_4676(var_788_string, var_789_bool);
	var_2_object = var_784_string;
	return 0;
	
}


func_5304(var_358_bool)
{
	var_360_int = 0; var_361_string = "";
	func_4729(var_360_int, "d1q01");
	var_363_bool = var_360_int == (int)6;
	if(var_363_bool != 0) {
		var_358_bool = 1;
		return 0;
	}
	var_358_bool = 0;
	return 0;
}


func_4793(var_225_object, var_226_string, var_227_int)
{
	var_228_object = Obj(); var_229_object = Obj();
	CreateInvItem(var_229_object);
	@@var_229_object:SetItemName(var_226_string);
	var_230_object = Obj(); var_231_object = Obj(); var_232_int = 0;
	var_225_object = var_230_object;
	var_229_object = var_231_object;
	var_227_int = var_232_int;
	func_4774(var_230_object, var_231_object, var_232_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5316(var_387_bool)
{
	var_389_int = 0; var_390_string = "";
	func_4729(var_389_int, "ood1Eva4");
	var_392_bool = var_389_int == (int)0;
	if(var_392_bool != 0) {
		var_387_bool = 1;
		return 0;
	}
	var_387_bool = 0;
	return 0;
}


func_4806(var_54_float)
{
	var_55_float = 0; var_56_float = 0;
	GetGameTime(var_56_float);
	var_56_float = var_54_float;
	return 2;
}


func_4811(var_52_int)
{
	var_53_float = 0; var_54_float = 0;
	GetGameTime(var_54_float);
	var_56_int = 0;
	var_56_int = var_54_float / (int)24;
	var_52_int = (int)1 + var_56_int;
	return 2;
}


func_5328(var_297_bool)
{
	var_299_int = 0; var_300_string = "";
	func_4729(var_299_int, "d1q01");
	var_302_bool = var_299_int >= (int)6;
	if(var_302_bool != 0) {
		var_297_bool = 1;
		return 0;
	}
	var_297_bool = 0;
	return 0;
}


func_4820(var_50_bool, var_51_int)
{
	var_52_int = 0;
	func_4811(var_52_int);
	var_50_bool = var_52_int == var_51_int;
	return 0;
}


func_4826(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = "";
	var_59_int = var_56_int;
	if(var_59_int != 0) {
		"idle" = "idle" + var_56_int;
	}
	var_58_string = var_55_string;
	return 2;
}


func_5340(var_347_bool)
{
	var_349_int = 0; var_350_string = "";
	func_4729(var_349_int, "ood1Eva5");
	var_352_bool = var_349_int == (int)0;
	if(var_352_bool != 0) {
		var_347_bool = 1;
		return 0;
	}
	var_347_bool = 0;
	return 0;
}


func_4833(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_52_int = 0;
	
Label_4835:
	var_55_string = ""; var_56_int = 0;
	var_52_int = var_56_int;
	func_4826(var_55_string, var_56_int);
	HasAnimation(var_53_bool, "all", var_55_string);
	var_60_bool = var_53_bool == 0; //@nz
	if(var_60_bool != 0) {
	} else {
		var_52_int = var_52_int + (int)1;
		goto Label_4835;
	}
	var_52_int = var_49_int;
	return 4;
	
}


func_4327()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0;
	WaitForAnimEnd();
	var_47_bool = 0;
	func_4430(var_47_bool);
	var_48_bool = var_47_bool == 0; //@nz
	if(var_48_bool != 0) {
		return 12;
	}
	func_4833((int)0);
	var_49_int = var_41_int;
	var_42_int = 0;
	
Label_4341:
	var_62_bool = 0;
	var_62_bool = 0;
	var_64_bool = var_42_int < (int)5;
	if(var_64_bool != 0) {
		var_65_bool = 0;
		func_4430(var_65_bool);
		if(var_65_bool != 0) {
			var_62_bool = 1;
		}
	}
	if(var_62_bool != 0) {
		var_66_bool = var_41_int == 0; //@nz
		if(var_66_bool != 0) {
			Sleep((int)3, var_43_bool);
			var_68_bool = var_43_bool == 0; //@nz
			if(var_68_bool != 0) {
			} else {
		} else {
				irand(var_44_int, var_41_int);
				irand(var_45_int, (int)5);
				var_74_bool = var_45_int != (int)0;
				if(var_74_bool != 0) {
					var_44_int = 0;
				}
				var_76_string = ""; var_77_int = 0;
				var_44_int = var_77_int;
				func_4826(var_76_string, var_77_int);
				PlayAnimation("all", var_76_string);
				WaitForAnimEnd(var_46_bool);
				var_78_bool = var_46_bool == 0; //@nz
				if(var_78_bool == 0) goto Label_4382;
				goto Label_4393;
		}
		Label_4382:
			var_69_bool = 0;
			func_4396(var_69_bool);
			var_70_bool = var_69_bool == 0; //@nz
			if(var_70_bool != 0) {
				goto Label_4393;
			}
			ResetAAS();
			var_42_int = var_42_int + (int)1;
			goto Label_4341;

		}
	}
Label_4393:
	ResetAAS();
	return 12;
	
}


func_5352(var_338_bool)
{
	var_340_int = 0; var_341_string = "";
	func_4729(var_340_int, "ood1Eva6");
	var_343_bool = var_340_int == (int)0;
	if(var_343_bool != 0) {
		var_338_bool = 1;
		return 0;
	}
	var_338_bool = 0;
	return 0;
}


func_4850(var_118_int)
{
	var_118_int = 515533;
	return 0;
}


func_4852(var_117_int)
{
	var_117_int = 502858;
	return 0;
}


func_5364(var_399_bool)
{
	var_401_int = 0; var_402_string = "";
	func_4729(var_401_int, "ood1Eva7");
	var_404_bool = var_401_int == (int)0;
	if(var_404_bool != 0) {
		var_399_bool = 1;
		return 0;
	}
	var_399_bool = 0;
	return 0;
}


func_4854(var_119_string)
{
	var_119_string = "ui/NPC_Eva.png";
	return 0;
}


func_4856(var_120_string)
{
	var_120_string = "ui/NPC_Eva_b.png";
	return 0;
}


func_4858(var_112_bool)
{
	var_112_bool = 1;
	return 0;
}


func_4860()
{
	SetVariable("ood1EvaIntro3", (int)1);
	return 0;
}


func_5376(var_712_bool)
{
	var_714_int = 0; var_715_string = "";
	func_4729(var_714_int, "ood4Eva2");
	var_717_bool = var_714_int == (int)0;
	if(var_717_bool != 0) {
		var_712_bool = 1;
		return 0;
	}
	var_712_bool = 0;
	return 0;
}


func_769(var_2_object, var_246_string)
{
	var_247_bool = 0;
	func_4858(var_247_bool);
	var_248_bool = var_247_bool == 0; //@nz
	if(var_248_bool != 0) {
		return 0;
	}
	var_249_bool = var_246_string == var_2_object;
	if(var_249_bool != 0) {
		return 0;
	}
	var_250_string = ""; var_251_bool = 0;
	var_246_string = var_250_string;
	var_253_bool = var_246_string == "";
	if(var_253_bool != 0) {
		var_251_bool = 0;
	} else {
		var_251_bool = 1;
	}
	func_4676(var_250_string, var_251_bool);
	var_2_object = var_246_string;
	return 0;
	
}


func_4866()
{
	var_115_object = Obj(); var_116_object = Obj();
	SetVariable("d1q03IsKapella", (int)1);
	func_5709(Obj());
	var_119_object = var_116_object;
	var_124_float = 0;
	func_4806(var_124_float);
	@@var_116_object:AddMark("d1q03KapellaGotoOspina", "pt_map_ospina", (int)0, (int)508641, var_124_float);
	func_5616();
	func_5629();
	var_156_object = Obj(); var_157_string = "";
	func_4734(var_156_object, "quest_d1_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3339(var_0_object, var_636_int, var_637_object)
{
	var_639_object = Obj(); var_640_bool = 0; var_641_int = 0; var_642_bool = 0; var_643_object = Obj(); var_644_bool = 0; var_645_int = 0; var_646_bool = 0;
	var_0_object = var_637_object;
	var_647_bool = 0; var_648_object = Obj(); var_649_float = 0;
	var_637_object = var_648_object;
	func_4435(var_647_bool, var_648_object, (float)70.0);
	var_650_bool = var_647_bool == 0; //@nz
	if(var_650_bool != 0) {
		var_636_int = -2;
		return 8;
	}
	CreateDialog(var_643_object);
	var_651_int = 0;
	func_4852(var_651_int);
	@@var_643_object:SetNPCName(var_651_int);
	var_652_int = 0;
	func_4850(var_652_int);
	@@var_643_object:SetNPCDescription(var_652_int);
	var_653_string = "";
	func_4854(var_653_string);
	@@var_643_object:SetPhoto(var_653_string);
	var_654_string = "";
	func_4856(var_654_string);
	@@var_643_object:SetPhoto2(var_654_string);
	var_655_int = 0;
	func_5759(var_655_int);
	@@var_643_object:SetPlayerName(var_655_int);
	IsOverrideActive(var_644_bool);
	var_656_bool = var_644_bool;
	if(var_656_bool != 0) {
		var_636_int = -2;
		return 8;
	}
	DoDialog(var_643_object);
	var_657_bool = 0; var_658_object = Obj();
	func_4713(Obj());
	var_659_object = var_658_object;
	func_4522(var_657_bool, var_658_object);
	var_660_object = Obj(); var_661_object = Obj();
	var_637_object = var_660_object;
	var_643_object = var_661_object;
	TaskCall(9);
	func_3420(var_662_object, var_663_object, var_664_string, var_665_bool, var_660_object, var_661_object);
	TaskReturn();
	@@var_643_object:IsDialogEnd(var_646_bool);
	
Label_3402:
	var_732_bool = var_646_bool == 0; //@nz
	if(var_732_bool != 0) {
		sync();
		@@var_643_object:IsDialogEnd(var_646_bool);
		goto Label_3402;
	}
	var_637_object = Obj();
	func_4504();
	StopDialog(var_643_object);
	@@var_643_object:GetReturnValue((int)-1);
	var_645_int = var_636_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5388(var_364_bool)
{
	var_366_int = 0; var_367_string = "";
	func_4729(var_366_int, "ood1EvaIntro2");
	var_369_bool = var_366_int == (int)0;
	if(var_369_bool != 0) {
		var_364_bool = 1;
		return 0;
	}
	var_364_bool = 0;
	return 0;
}


func_5400(var_469_bool)
{
	var_471_int = 0; var_472_string = "";
	func_4729(var_471_int, "ood2Eva1");
	var_474_bool = var_471_int == (int)0;
	if(var_474_bool != 0) {
		var_469_bool = 1;
		return 0;
	}
	var_469_bool = 0;
	return 0;
}


func_4896()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5412(var_509_bool)
{
	var_511_int = 0; var_512_string = "";
	func_4729(var_511_int, "ood2Eva2");
	var_514_bool = var_511_int == (int)0;
	if(var_514_bool != 0) {
		var_509_bool = 1;
		return 0;
	}
	var_509_bool = 0;
	return 0;
}


func_4902(var_246_object)
{
	Trace("gold_ring is given");
	var_249_object = Obj(); var_250_string = ""; var_251_int = 0;
	var_246_object = var_249_object;
	func_4793(var_249_object, "gold_ring", (int)1);
	return 0;
}


func_4396(var_69_bool)
{
	var_69_bool = 1;
	return 0;
}


func_4398()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_5424(var_525_bool)
{
	var_527_int = 0; var_528_string = "";
	func_4729(var_527_int, "ood2Eva3");
	var_530_bool = var_527_int == (int)0;
	if(var_530_bool != 0) {
		var_525_bool = 1;
		return 0;
	}
	var_525_bool = 0;
	return 0;
}


func_4913()
{
	var_199_object = Obj(); var_200_object = Obj();
	func_5709(Obj());
	var_201_object = var_200_object;
	var_206_float = 0;
	func_4806(var_206_float);
	@@var_200_object:AddMark("d1q01EvaMapMarkMladVlad", "pt_map_mladvlad", (int)3, (int)518108, var_206_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4403(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_2359(var_2_object, var_483_string)
{
	var_484_bool = 0;
	func_4858(var_484_bool);
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
	func_4676(var_487_string, var_488_bool);
	var_2_object = var_483_string;
	return 0;
	
}


func_4411(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0;
	GetPosition(var_44_cvector);
	var_45_cvector = var_40_cvector - var_44_cvector;
	var_47_float = GetByIndex(var_45_cvector, 0);
	var_48_float = GetByIndex(var_45_cvector, 2);
	Rotate(var_47_float, var_48_float, var_46_bool);
	var_46_bool = var_39_bool;
	return 6;
}


func_5436(var_541_bool)
{
	var_543_int = 0; var_544_string = "";
	func_4729(var_543_int, "ood2Eva4");
	var_546_bool = var_543_int == (int)0;
	if(var_546_bool != 0) {
		var_541_bool = 1;
		return 0;
	}
	var_541_bool = 0;
	return 0;
}


func_4929(var_208_object)
{
	var_209_object = Obj(); var_210_string = ""; var_211_float = 0;
	func_5709(Obj());
	var_212_object = var_209_object;
	func_5726(var_209_object, "pt_map_station", (float)2);
	var_213_object = Obj();
	func_5709(var_213_object);
	@@var_208_object:ShowMap(var_213_object);
	return 0;
}


func_4421(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_4411(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_5448(var_547_bool)
{
	var_549_int = 0; var_550_string = "";
	func_4729(var_549_int, "d2q02");
	var_552_bool = var_549_int == (int)1000;
	if(var_552_bool != 0) {
		var_547_bool = 1;
		return 0;
	}
	var_547_bool = 0;
	return 0;
}


func_4430(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
	return 2;
}


func_4945()
{
	SetVariable("ood1Eva4", (int)1);
	return 0;
}


func_4435(var_69_bool, var_70_object, var_71_float)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0; var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0;
	@@var_70_object:GetPosition(var_82_cvector);
	@@var_70_object:GetEyesHeight(var_81_float);
	var_90_float = GetByIndex(var_82_cvector, 1);
	var_90_float = var_90_float + var_81_float;
	SetByIndex(var_82_cvector, 1) = var_90_float;
	GetPosition(var_83_cvector);
	GetEyesHeight(var_81_float);
	var_91_float = GetByIndex(var_83_cvector, 1);
	var_91_float = var_91_float + var_81_float;
	SetByIndex(var_83_cvector, 1) = var_91_float;
	var_84_cvector = var_82_cvector - var_83_cvector;
	var_92_float = GetByIndex(var_84_cvector, 1);
	SetByIndex(var_84_cvector, 1) = (float)0;
	var_93_int = var_84_cvector | var_84_cvector;
	var_94_float = sqrt(var_93_int);
	var_84_cvector = var_84_cvector / var_94_float;
	var_85_cvector = -var_84_cvector;
	var_95_float = var_84_cvector * var_71_float;
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0);
	var_97_cvector = var_85_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4719(var_96_cvector, var_97_cvector);
	var_105_float = var_96_cvector * (int)25;
	var_106_int = var_95_float + var_105_float;
	var_86_cvector = var_106_int - CVector(0.0, 10.0, 0.0);
	var_87_cvector = var_83_cvector + var_86_cvector;
	IsOverrideActive(var_88_bool);
	var_108_bool = var_88_bool;
	if(var_108_bool != 0) {
		var_69_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_87_cvector, var_85_cvector, (bool)1);
	var_110_float = GetByIndex(var_86_cvector, 0);
	var_111_float = GetByIndex(var_86_cvector, 2);
	Rotate(var_110_float, var_111_float);
	var_112_bool = 0;
	func_4858(var_112_bool);
	if(var_112_bool != 0) {
	} else {
		HasAnimationTrack(var_89_bool, "head");
		var_114_bool = var_89_bool;
		if(var_114_bool == 0) goto Label_4498;
		LookAsyncCamera("head");
	}
Label_4498:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_69_bool = 1;
	return 18;
	
}


func_5460(var_515_bool)
{
	var_517_int = 0; var_518_string = "";
	func_4729(var_517_int, "d2q02");
	var_520_bool = var_517_int == (int)3;
	if(var_520_bool != 0) {
		var_515_bool = 1;
		return 0;
	}
	var_515_bool = 0;
	return 0;
}


func_4951(var_222_object)
{
	Trace("bracelet is given");
	var_225_object = Obj(); var_226_string = ""; var_227_int = 0;
	var_222_object = var_225_object;
	func_4793(var_225_object, "bracelet", (int)1);
	return 0;
}


func_3420(var_0_object, var_1_object, var_2_object, var_3_string, var_660_object, var_661_object)
{
	var_0_object = var_661_object;
	var_1_object = var_660_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_667_string = "";
		func_3538(var_661_object, "Neutral");
		@@@var_0_object:SetMessage((int)511255);
		@@@var_0_object:ClearReplies();
		var_676_bool = 0;
		var_676_bool = 1;
		var_677_bool = 0;
		var_677_bool = 1;
		var_678_bool = 0;
		var_678_bool = 0;
		var_679_bool = 0; var_680_object = Obj();
		var_680_object = var_1_object;
		func_5592(var_680_object);
		if(var_679_bool != 0) {
			var_685_bool = 0; var_686_object = Obj();
			var_686_object = var_1_object;
			func_5520(var_686_object);
			if(var_685_bool != 0) {
				var_678_bool = 1;
			}
		}
		if(var_678_bool != 1) {
			var_691_bool = 0;
			var_691_bool = 0;
			var_692_bool = 0; var_693_object = Obj();
			var_693_object = var_1_object;
			func_5544(var_693_object);
			if(var_692_bool != 0) {
				var_698_bool = 0; var_699_object = Obj();
				var_699_object = var_1_object;
				func_5592(var_699_object);
				if(var_698_bool != 0) {
					var_691_bool = 1;
				}
			}
			if(var_691_bool != 1) {
				var_677_bool = 0;
			}
		}
		if(var_677_bool != 1) {
			var_700_bool = 0;
			var_700_bool = 0;
			var_701_bool = 0; var_702_object = Obj();
			var_702_object = var_1_object;
			func_5532(var_702_object);
			if(var_701_bool != 0) {
				var_707_bool = 0; var_708_object = Obj();
				var_708_object = var_1_object;
				func_5592(var_708_object);
				if(var_707_bool != 0) {
					var_700_bool = 1;
				}
			}
			if(var_700_bool != 1) {
				var_676_bool = 0;
			}
		}
		if(var_676_bool != 0) {
			@@@var_0_object:AddReply((int)511257, (int)12448, (int)12447);
		}
		var_712_bool = 0; var_713_object = Obj();
		var_713_object = var_1_object;
		func_5376(var_713_object);
		if(var_712_bool != 0) {
			@@@var_0_object:AddReply((int)535125, (int)36785, (int)36784);
		}
		@@@var_0_object:AddReply((int)511256, (int)-1, (int)12446);
		goto Label_3508;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd60";
	}
Label_3508:
	var_724_bool = 0;
	func_4858(var_724_bool);
	if(var_724_bool != 0) {

	Label_3512:
		lshWaitForAnimEnd();
		var_725_string = var_3_string;
		if(var_725_string != 0) {
		} else {
			var_726_string = "";
			var_726_string = var_2_object;
			func_4660(var_726_string);
			goto Label_3512;
	}
		PlayAnimation("all", "idle");

	Label_3527:
		WaitForAnimEnd();
		var_729_string = var_3_string;
		if(var_729_string != 0) {
			goto Label_3537;
		}
		PlayAnimation("all", "idle");
		goto Label_3527;
	}
	goto Label_3537;
	
Label_3537:
	return 0;
	
}


func_5472(var_531_bool)
{
	var_533_int = 0; var_534_string = "";
	func_4729(var_533_int, "d2q02");
	var_536_bool = var_533_int == (int)5;
	if(var_536_bool != 0) {
		var_531_bool = 1;
		return 0;
	}
	var_531_bool = 0;
	return 0;
}


func_4962(var_252_object)
{
	Trace("ear_ring is given");
	var_255_object = Obj(); var_256_string = ""; var_257_int = 0;
	var_252_object = var_255_object;
	func_4793(var_255_object, "ear_ring", (int)1);
	return 0;
}


func_3944(var_0_object, var_817_int, var_818_object)
{
	var_820_object = Obj(); var_821_bool = 0; var_822_int = 0; var_823_bool = 0; var_824_object = Obj(); var_825_bool = 0; var_826_int = 0; var_827_bool = 0;
	var_0_object = var_818_object;
	var_828_bool = 0; var_829_object = Obj(); var_830_float = 0;
	var_818_object = var_829_object;
	func_4435(var_828_bool, var_829_object, (float)70.0);
	var_831_bool = var_828_bool == 0; //@nz
	if(var_831_bool != 0) {
		var_817_int = -2;
		return 8;
	}
	CreateDialog(var_824_object);
	var_832_int = 0;
	func_4852(var_832_int);
	@@var_824_object:SetNPCName(var_832_int);
	var_833_int = 0;
	func_4850(var_833_int);
	@@var_824_object:SetNPCDescription(var_833_int);
	var_834_string = "";
	func_4854(var_834_string);
	@@var_824_object:SetPhoto(var_834_string);
	var_835_string = "";
	func_4856(var_835_string);
	@@var_824_object:SetPhoto2(var_835_string);
	var_836_int = 0;
	func_5759(var_836_int);
	@@var_824_object:SetPlayerName(var_836_int);
	IsOverrideActive(var_825_bool);
	var_837_bool = var_825_bool;
	if(var_837_bool != 0) {
		var_817_int = -2;
		return 8;
	}
	DoDialog(var_824_object);
	var_838_bool = 0; var_839_object = Obj();
	func_4713(Obj());
	var_840_object = var_839_object;
	func_4522(var_838_bool, var_839_object);
	var_841_object = Obj(); var_842_object = Obj();
	var_818_object = var_841_object;
	var_824_object = var_842_object;
	TaskCall(11);
	func_4025(var_843_object, var_844_object, var_845_string, var_846_bool, var_841_object, var_842_object);
	TaskReturn();
	@@var_824_object:IsDialogEnd(var_827_bool);
	
Label_4007:
	var_871_bool = var_827_bool == 0; //@nz
	if(var_871_bool != 0) {
		sync();
		@@var_824_object:IsDialogEnd(var_827_bool);
		goto Label_4007;
	}
	var_818_object = Obj();
	func_4504();
	StopDialog(var_824_object);
	@@var_824_object:GetReturnValue((int)-1);
	var_826_int = var_817_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5484(var_332_bool)
{
	var_334_int = 0; var_335_string = "";
	func_4729(var_334_int, "d1q01");
	var_337_bool = var_334_int == (int)1;
	if(var_337_bool != 0) {
		var_332_bool = 1;
		return 0;
	}
	var_332_bool = 0;
	return 0;
}


func_4973()
{
	SetVariable("d2EvaVisit", (int)1);
	return 0;
}


func_4979(var_78_object)
{
	var_79_object = Obj(); var_80_string = ""; var_81_float = 0;
	func_5709(Obj());
	var_82_object = var_79_object;
	func_5726(var_79_object, "pt_map_georg", (float)2);
	var_102_object = Obj();
	func_5709(var_102_object);
	@@var_78_object:ShowMap(var_102_object);
	return 0;
}


func_5496(var_556_bool)
{
	var_558_int = 0; var_559_string = "";
	func_4729(var_558_int, "d2q02");
	var_561_bool = var_558_int == (int)0;
	if(var_561_bool != 0) {
		var_556_bool = 1;
		return 0;
	}
	var_556_bool = 0;
	return 0;
}


func_4995()
{
	SetVariable("ood1Eva5", (int)1);
	return 0;
}


func_5508(var_154_bool)
{
	var_156_int = 0; var_157_string = "";
	func_4729(var_156_int, "d4q01");
	var_159_bool = var_156_int == (int)1;
	if(var_159_bool != 0) {
		var_154_bool = 1;
		return 0;
	}
	var_154_bool = 0;
	return 0;
}


func_5001()
{
	SetVariable("ood1Eva6", (int)1);
	return 0;
}


func_5007()
{
	SetVariable("ood1Eva7", (int)1);
	return 0;
}


func_5520(var_685_bool)
{
	var_687_int = 0; var_688_string = "";
	func_4729(var_687_int, "d4q02");
	var_690_bool = var_687_int == (int)1;
	if(var_690_bool != 0) {
		var_685_bool = 1;
		return 0;
	}
	var_685_bool = 0;
	return 0;
}


func_5013()
{
	SetVariable("ood4Eva2", (int)1);
	return 0;
}


func_406(var_0_object, var_58_int, var_59_object)
{
	var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_object = Obj(); var_66_bool = 0; var_67_int = 0; var_68_bool = 0;
	var_0_object = var_59_object;
	var_69_bool = 0; var_70_object = Obj(); var_71_float = 0;
	var_59_object = var_70_object;
	func_4435(var_69_bool, var_70_object, (float)70.0);
	var_116_bool = var_69_bool == 0; //@nz
	if(var_116_bool != 0) {
		var_58_int = -2;
		return 8;
	}
	CreateDialog(var_65_object);
	var_117_int = 0;
	func_4852(var_117_int);
	@@var_65_object:SetNPCName(var_117_int);
	var_118_int = 0;
	func_4850(var_118_int);
	@@var_65_object:SetNPCDescription(var_118_int);
	var_119_string = "";
	func_4854(var_119_string);
	@@var_65_object:SetPhoto(var_119_string);
	var_120_string = "";
	func_4856(var_120_string);
	@@var_65_object:SetPhoto2(var_120_string);
	var_121_int = 0;
	func_5759(var_121_int);
	@@var_65_object:SetPlayerName(var_121_int);
	IsOverrideActive(var_66_bool);
	var_129_bool = var_66_bool;
	if(var_129_bool != 0) {
		var_58_int = -2;
		return 8;
	}
	DoDialog(var_65_object);
	var_130_bool = 0; var_131_object = Obj();
	func_4713(Obj());
	var_132_object = var_131_object;
	func_4522(var_130_bool, var_131_object);
	var_220_object = Obj(); var_221_object = Obj();
	var_59_object = var_220_object;
	var_65_object = var_221_object;
	TaskCall(3);
	func_487(var_222_object, var_223_object, var_224_string, var_225_bool, var_220_object, var_221_object);
	TaskReturn();
	@@var_65_object:IsDialogEnd(var_68_bool);
	
Label_469:
	var_427_bool = var_68_bool == 0; //@nz
	if(var_427_bool != 0) {
		sync();
		@@var_65_object:IsDialogEnd(var_68_bool);
		goto Label_469;
	}
	var_59_object = Obj();
	func_4504();
	StopDialog(var_65_object);
	@@var_65_object:GetReturnValue((int)-1);
	var_67_int = var_58_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4504()
{
	var_429_bool = 0; var_430_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_432_bool = 0;
	func_4858(var_432_bool);
	if(var_432_bool != 0) {
	} else {
		HasAnimationTrack(var_430_bool, "head");
		var_434_bool = var_430_bool;
		if(var_434_bool == 0) goto Label_4521;
		UnlookAsync("head");
	}
Label_4521:
	return 2;
	
}


func_5019()
{
	SetVariable("KnowUzly", (int)1);
	return 0;
}


func_5532(var_701_bool)
{
	var_703_int = 0; var_704_string = "";
	func_4729(var_703_int, "d4q02LaraGivesMedcine");
	var_706_bool = var_703_int == (int)1;
	if(var_706_bool != 0) {
		var_701_bool = 1;
		return 0;
	}
	var_701_bool = 0;
	return 0;
}


func_5025()
{
	SetVariable("ood2Eva1", (int)1);
	return 0;
}


func_5031()
{
	SetVariable("ood2Eva2", (int)1);
	return 0;
}


func_5544(var_692_bool)
{
	var_694_int = 0; var_695_string = "";
	func_4729(var_694_int, "d4q02JuliaGivesMedcine");
	var_697_bool = var_694_int == (int)1;
	if(var_697_bool != 0) {
		var_692_bool = 1;
		return 0;
	}
	var_692_bool = 0;
	return 0;
}


func_4522(var_130_bool, var_131_object)
{
	var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_int = 0;
	GetVariable("voice_common", var_137_int);
	var_140_int = var_137_int;
	if(var_140_int != 0) {
		var_141_bool = 0; var_142_object = Obj();
		var_131_object = var_142_object;
		func_4580(var_141_bool, var_142_object);
		var_171_bool = var_141_bool == 0; //@nz
		if(var_171_bool != 0) {
			var_172_bool = 0; var_173_object = Obj();
			var_131_object = var_173_object;
			func_4617(var_172_bool, var_173_object);
			var_202_bool = var_172_bool == 0; //@nz
			if(var_202_bool != 0) {
				var_130_bool = 0;
				return 4;
			}
		}
		irand(var_138_int, (int)2);
		var_204_int = var_138_int;
		if(var_204_int != 0) {
			var_207_int = var_137_int + (int)1;
			var_209_int = var_207_int % (int)3;
			SetVariable("voice_common", var_209_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_212_bool = 0; var_213_object = Obj();
		var_131_object = var_213_object;
		func_4617(var_212_bool, var_213_object);
		var_214_bool = var_212_bool == 0; //@nz
		if(var_214_bool != 0) {
			var_215_bool = 0; var_216_object = Obj();
			var_131_object = var_216_object;
			func_4580(var_215_bool, var_216_object);
			var_217_bool = var_215_bool == 0; //@nz
			if(var_217_bool != 0) {
				var_130_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4578;
	
Label_4578:
	var_130_bool = 1;
	return 4;
	
}


func_5037()
{
	SetVariable("ood2Eva3", (int)1);
	return 0;
}


func_5043()
{
	SetVariable("ood2Eva4", (int)1);
	return 0;
}


func_5556(var_768_bool)
{
	var_770_int = 0; var_771_string = "";
	func_4729(var_770_int, "d6q01");
	var_773_bool = var_770_int == (int)1;
	if(var_773_bool != 0) {
		var_768_bool = 1;
		return 0;
	}
	var_768_bool = 0;
	return 0;
}


func_2998(var_0_object, var_572_int, var_573_object)
{
	var_575_object = Obj(); var_576_bool = 0; var_577_int = 0; var_578_bool = 0; var_579_object = Obj(); var_580_bool = 0; var_581_int = 0; var_582_bool = 0;
	var_0_object = var_573_object;
	var_583_bool = 0; var_584_object = Obj(); var_585_float = 0;
	var_573_object = var_584_object;
	func_4435(var_583_bool, var_584_object, (float)70.0);
	var_586_bool = var_583_bool == 0; //@nz
	if(var_586_bool != 0) {
		var_572_int = -2;
		return 8;
	}
	CreateDialog(var_579_object);
	var_587_int = 0;
	func_4852(var_587_int);
	@@var_579_object:SetNPCName(var_587_int);
	var_588_int = 0;
	func_4850(var_588_int);
	@@var_579_object:SetNPCDescription(var_588_int);
	var_589_string = "";
	func_4854(var_589_string);
	@@var_579_object:SetPhoto(var_589_string);
	var_590_string = "";
	func_4856(var_590_string);
	@@var_579_object:SetPhoto2(var_590_string);
	var_591_int = 0;
	func_5759(var_591_int);
	@@var_579_object:SetPlayerName(var_591_int);
	IsOverrideActive(var_580_bool);
	var_592_bool = var_580_bool;
	if(var_592_bool != 0) {
		var_572_int = -2;
		return 8;
	}
	DoDialog(var_579_object);
	var_593_bool = 0; var_594_object = Obj();
	func_4713(Obj());
	var_595_object = var_594_object;
	func_4522(var_593_bool, var_594_object);
	var_596_object = Obj(); var_597_object = Obj();
	var_573_object = var_596_object;
	var_579_object = var_597_object;
	TaskCall(7);
	func_3079(var_598_object, var_599_object, var_600_string, var_601_bool, var_596_object, var_597_object);
	TaskReturn();
	@@var_579_object:IsDialogEnd(var_582_bool);
	
Label_3061:
	var_632_bool = var_582_bool == 0; //@nz
	if(var_632_bool != 0) {
		sync();
		@@var_579_object:IsDialogEnd(var_582_bool);
		goto Label_3061;
	}
	var_573_object = Obj();
	func_4504();
	StopDialog(var_579_object);
	@@var_579_object:GetReturnValue((int)-1);
	var_581_int = var_572_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5049()
{
	var_39_object = Obj(); var_40_object = Obj();
	SetVariable("d2q02", (int)1);
	func_5709(Obj());
	var_43_object = var_40_object;
	var_54_float = 0;
	func_4806(var_54_float);
	@@var_40_object:AddMark("d2q02EvaGotoAndrei", "pt_map_andrei", (int)0, (int)515272, var_54_float);
	func_5642();
	func_5655();
	var_88_object = Obj(); var_89_string = "";
	func_4734(var_88_object, "quest_d2_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_4025(var_0_object, var_1_object, var_2_object, var_3_string, var_841_object, var_842_object)
{
	var_0_object = var_842_object;
	var_1_object = var_841_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_848_string = "";
		func_4083(var_842_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_4053;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xfbd";
	}
Label_4053:
	var_863_bool = 0;
	func_4858(var_863_bool);
	if(var_863_bool != 0) {

	Label_4057:
		lshWaitForAnimEnd();
		var_864_string = var_3_string;
		if(var_864_string != 0) {
		} else {
			var_865_string = "";
			var_865_string = var_2_object;
			func_4660(var_865_string);
			goto Label_4057;
	}
		PlayAnimation("all", "idle");

	Label_4072:
		WaitForAnimEnd();
		var_868_string = var_3_string;
		if(var_868_string != 0) {
			goto Label_4082;
		}
		PlayAnimation("all", "idle");
		goto Label_4072;
	}
	goto Label_4082;
	
Label_4082:
	return 0;
	
}


func_5568(var_774_bool)
{
	var_776_int = 0; var_777_string = "";
	func_4729(var_776_int, "ood6Eva1");
	var_779_bool = var_776_int == (int)0;
	if(var_779_bool != 0) {
		var_774_bool = 1;
		return 0;
	}
	var_774_bool = 0;
	return 0;
}


func_5580(var_612_bool)
{
	var_614_int = 0; var_615_string = "";
	func_4729(var_614_int, "ood3Eva1");
	var_617_bool = var_614_int == (int)0;
	if(var_617_bool != 0) {
		var_612_bool = 1;
		return 0;
	}
	var_612_bool = 0;
	return 0;
}


func_3538(var_2_object, var_667_string)
{
	var_668_bool = 0;
	func_4858(var_668_bool);
	var_669_bool = var_668_bool == 0; //@nz
	if(var_669_bool != 0) {
		return 0;
	}
	var_670_bool = var_667_string == var_2_object;
	if(var_670_bool != 0) {
		return 0;
	}
	var_671_string = ""; var_672_bool = 0;
	var_667_string = var_671_string;
	var_674_bool = var_667_string == "";
	if(var_674_bool != 0) {
		var_672_bool = 0;
	} else {
		var_672_bool = 1;
	}
	func_4676(var_671_string, var_672_bool);
	var_2_object = var_667_string;
	return 0;
	
}


func_5079()
{
	var_39_string = ""; var_40_bool = 0;
	func_4745("icot_eva@door1", (bool)0);
	return 0;
}


func_5592(var_679_bool)
{
	var_681_int = 0; var_682_string = "";
	func_4729(var_681_int, "ood4Eva1");
	var_684_bool = var_681_int == (int)0;
	if(var_684_bool != 0) {
		var_679_bool = 1;
		return 0;
	}
	var_679_bool = 0;
	return 0;
}


func_5086()
{
	var_51_object = Obj(); var_52_object = Obj();
	func_5709(Obj());
	var_53_object = var_52_object;
	var_64_float = 0;
	func_4806(var_64_float);
	@@var_52_object:AddMark("d1q01EvaGotoSimon", "pt_map_georg", (int)1, (int)507778, var_64_float);
	var_71_float = 0;
	func_4806(var_71_float);
	@@var_52_object:AddMark("d1EvaGotoMaria", "pt_map_maria", (int)3, (int)508628, var_71_float);
	var_76_float = 0;
	func_4806(var_76_float);
	@@var_52_object:AddMark("d1EvaInfo", "pt_map_eva", (int)3, (int)508630, var_76_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5604(var_291_bool)
{
	var_293_int = 0; var_294_string = "";
	func_4729(var_293_int, "ood1EvaIntro3");
	var_296_bool = var_293_int == (int)0;
	if(var_296_bool != 0) {
		var_291_bool = 1;
		return 0;
	}
	var_291_bool = 0;
	return 0;
}


func_4580(var_141_bool, var_142_object)
{
	var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; var_148_string = ""; var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_string = "";
	var_148_string = "c";
	var_149_int = 0;
	
Label_4583:
	if((int)1 != 0) {
		var_155_int = var_149_int + (int)1;
		var_156_int = var_148_string + var_155_int;
		@@var_142_object:HasProperty(var_156_int, var_150_bool);
		var_157_bool = var_150_bool == 0; //@nz
		if(var_157_bool != 0) {
		} else {
			var_149_int = var_149_int + (int)1;
			goto Label_4583;
		}
	}
	var_158_bool = var_149_int == 0; //@nz
	if(var_158_bool != 0) {
		var_141_bool = 0;
		return 10;
	}
	var_151_int = 0;
	var_160_bool = var_149_int > (int)1;
	if(var_160_bool != 0) {
		irand(var_151_int, var_149_int);
	}
	var_162_int = var_151_int + (int)1;
	var_163_int = var_148_string + var_162_int;
	@@var_142_object:GetProperty(var_163_int, var_152_string);
	var_164_bool = 0; var_165_string = "";
	var_152_string = var_165_string;
	func_4691(var_164_bool, var_165_string);
	var_164_bool = var_141_bool;
	return 10;
	
}


func_487(var_0_object, var_1_object, var_2_object, var_3_string, var_220_object, var_221_object)
{
	var_0_object = var_221_object;
	var_1_object = var_220_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_227_bool = 0;
		var_227_bool = 0;
		var_228_bool = 0; var_229_object = Obj();
		var_229_object = var_1_object;
		func_5220(var_229_object);
		if(var_228_bool != 0) {
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_5244(var_237_object);
			if(var_236_bool != 0) {
				var_227_bool = 1;
			}
		}
		if(var_227_bool != 0) {
			var_242_object = Obj(); var_243_object = Obj();
			var_242_object = var_1_object;
			var_243_object = var_0_object;
			func_5142();
			var_246_string = "";
			func_769(var_221_object, "Fear");
			@@@var_0_object:SetMessage((int)504496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504521, (int)22246, (int)4928);
			@@@var_0_object:AddReply((int)521059, (int)22246, (int)22250);
		} else {
				var_288_bool = 0;
				var_288_bool = 1;
				var_289_bool = 0;
				var_289_bool = 0;
				var_290_bool = 0;
				var_290_bool = 0;
				var_291_bool = 0; var_292_object = Obj();
				var_292_object = var_1_object;
				func_5604(var_292_object);
				if(var_291_bool != 0) {
					var_297_bool = 0; var_298_object = Obj();
					var_298_object = var_1_object;
					func_5328(var_298_object);
					if(var_297_bool != 0) {
						var_290_bool = 1;
					}
				}
				if(var_290_bool != 0) {
					var_303_bool = 0; var_304_object = Obj();
					var_304_object = var_1_object;
					func_5244(var_304_object);
					if(var_303_bool != 0) {
						var_289_bool = 1;
					}
				}
				if(var_289_bool != 1) {
					var_305_bool = 0;
					var_305_bool = 0;
					var_306_bool = 0;
					var_306_bool = 0;
					var_307_bool = 0; var_308_object = Obj();
					var_308_object = var_1_object;
					func_5604(var_308_object);
					if(var_307_bool != 0) {
						var_309_bool = 0; var_310_object = Obj();
						var_310_object = var_1_object;
						func_5292(var_310_object);
						if(var_309_bool != 0) {
							var_306_bool = 1;
						}
					}
					if(var_306_bool != 0) {
						var_315_bool = 0; var_316_object = Obj();
						var_316_object = var_1_object;
						func_5244(var_316_object);
						if(var_315_bool != 0) {
							var_305_bool = 1;
						}
					}
					if(var_305_bool != 1) {
						var_288_bool = 0;
					}
				}
				if(var_288_bool != 0) {
					var_317_object = Obj(); var_318_object = Obj();
					var_317_object = var_1_object;
					var_318_object = var_0_object;
					func_4860();
					var_321_string = "";
					func_769(var_221_object, "Neutral");
					@@@var_0_object:SetMessage((int)532343);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)533604, (int)35125, (int)35124);
					@@@var_0_object:AddReply((int)533608, (int)35129, (int)35128);
					goto Label_739;
				}
				var_329_string = "";
				func_769(var_221_object, "Neutral");
				@@@var_0_object:SetMessage((int)521052);
				@@@var_0_object:ClearReplies();
				var_331_bool = 0;
				var_331_bool = 0;
				var_332_bool = 0; var_333_object = Obj();
				var_333_object = var_1_object;
				func_5484(var_333_object);
				if(var_332_bool != 0) {
					var_338_bool = 0; var_339_object = Obj();
					var_339_object = var_1_object;
					func_5352(var_339_object);
					if(var_338_bool != 0) {
						var_331_bool = 1;
					}
				}
				if(var_331_bool != 0) {
					@@@var_0_object:AddReply((int)535143, (int)36805, (int)36804);
				}
				var_347_bool = 0; var_348_object = Obj();
				var_348_object = var_1_object;
				func_5340(var_348_object);
				if(var_347_bool != 0) {
					@@@var_0_object:AddReply((int)535107, (int)36764, (int)36763);
				}
				var_356_bool = 0;
				var_356_bool = 0;
				var_357_bool = 0;
				var_357_bool = 0;
				var_358_bool = 0; var_359_object = Obj();
				var_359_object = var_1_object;
				func_5304(var_359_object);
				if(var_358_bool != 0) {
					var_364_bool = 0; var_365_object = Obj();
					var_365_object = var_1_object;
					func_5388(var_365_object);
					if(var_364_bool != 0) {
						var_357_bool = 1;
					}
				}
				if(var_357_bool != 0) {
					var_370_bool = 0; var_371_object = Obj();
					var_371_object = var_1_object;
					func_5256(var_371_object);
					if(var_370_bool != 0) {
						var_356_bool = 1;
					}
				}
				if(var_356_bool != 0) {
					@@@var_0_object:AddReply((int)531940, (int)33345, (int)33344);
				}
				var_379_bool = 0;
				var_379_bool = 0;
				var_380_bool = 0;
				var_380_bool = 0;
				var_381_bool = 0; var_382_object = Obj();
				var_382_object = var_1_object;
				func_5268(var_382_object);
				if(var_381_bool != 0) {
					var_387_bool = 0; var_388_object = Obj();
					var_388_object = var_1_object;
					func_5316(var_388_object);
					if(var_387_bool != 0) {
						var_380_bool = 1;
					}
				}
				if(var_380_bool != 0) {
					var_393_bool = 0; var_394_object = Obj();
					var_394_object = var_1_object;
					func_5256(var_394_object);
					if(var_393_bool != 0) {
						var_379_bool = 1;
					}
				}
				if(var_379_bool != 0) {
					@@@var_0_object:AddReply((int)532458, (int)33900, (int)33899);
				}
				var_398_bool = 0;
				var_398_bool = 0;
				var_399_bool = 0; var_400_object = Obj();
				var_400_object = var_1_object;
				func_5364(var_400_object);
				if(var_399_bool != 0) {
					var_405_bool = 0; var_406_object = Obj();
					var_406_object = var_1_object;
					func_5280(var_406_object);
					if(var_405_bool != 0) {
						var_398_bool = 1;
					}
				}
				if(var_398_bool != 0) {
					@@@var_0_object:AddReply((int)533614, (int)35137, (int)35136);
				}
				var_414_bool = 0; var_415_object = Obj();
				var_415_object = var_1_object;
				func_5232(var_415_object);
				var_420_bool = var_414_bool == 0; //@nz
				if(var_420_bool != 0) {
					@@@var_0_object:AddReply((int)521053, (int)-1, (int)22244);
				}
				@@@var_0_object:AddReply((int)521054, (int)-1, (int)22245);
				goto Label_739;
		}
	}
Label_739:
	var_270_bool = 0;
	func_4858(var_270_bool);
	if(var_270_bool != 0) {

	Label_743:
		lshWaitForAnimEnd();
		var_271_string = var_3_string;
		if(var_271_string != 0) {
		} else {
			var_272_string = "";
			var_272_string = var_2_object;
			func_4660(var_272_string);
			goto Label_743;
	}
		PlayAnimation("all", "idle");

	Label_758:
		WaitForAnimEnd();
		var_285_string = var_3_string;
		if(var_285_string != 0) {
			goto Label_768;
		}
		PlayAnimation("all", "idle");
		goto Label_758;

	}
	goto Label_768;
	
Label_768:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1eb";


func_5616()
{
	var_125_object = Obj(); var_126_object = Obj();
	CreateDiaryEntry(var_126_object, (int)37, (int)2, (int)512119);
	var_130_bool = 0; var_131_object = Obj(); var_132_int = 0;
	var_126_object = var_131_object;
	func_5681(var_130_bool, var_131_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4083(var_2_object, var_848_string)
{
	var_849_bool = 0;
	func_4858(var_849_bool);
	var_850_bool = var_849_bool == 0; //@nz
	if(var_850_bool != 0) {
		return 0;
	}
	var_851_bool = var_848_string == var_2_object;
	if(var_851_bool != 0) {
		return 0;
	}
	var_852_string = ""; var_853_bool = 0;
	var_848_string = var_852_string;
	var_855_bool = var_848_string == "";
	if(var_855_bool != 0) {
		var_853_bool = 0;
	} else {
		var_853_bool = 1;
	}
	func_4676(var_852_string, var_853_bool);
	var_2_object = var_848_string;
	return 0;
	
}


func_5629()
{
	var_148_object = Obj(); var_149_object = Obj();
	CreateDiaryEntry(var_149_object, (int)680, (int)2, (int)534422);
	var_153_bool = 0; var_154_object = Obj(); var_155_int = 0;
	var_149_object = var_154_object;
	func_5681(var_153_bool, var_154_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


