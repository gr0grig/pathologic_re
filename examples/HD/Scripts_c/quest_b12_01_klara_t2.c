// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,CreateIntVector/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Sly|A:SetMessage|A:ClearReplies|A:AddReply|W:Fear|W:all|W:idle|W:Grin|W:Smile|W:Saveyouall|W:Neutral|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:b12q01KlaraInSobor|W:oob12KlaraT2_1|W:b12q01KlaraVisit|W:oob12KlaraT2_2|W:oob12KlaraT2_3|W:b12q01_Klara|W:oob12KlaraT2_4|W:b12q01ChildsAreVisited|W:b12q01TheaterIsVisited|W:game_final|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|A:add|W:vol_|A:size|A:get|W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x4bd
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x11c vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x4c1 vars=object
// @EVENT_26: op=0x4cd vars=string
// @EVENT_6: op=0x4e9 vars=
// @PE: 0x51,0x106,0x11c,0x4bd,0x4c1,0x62f,0x638,0x63e,0x644,0x64a,0x650,0x660,0x666,0x672,0x67e,0x68a,0x696,0x6a2,0x6ae,0x6b8,0x6c4,0x6d0,0x72a

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_1546();
		var_11_bool = var_7_bool == (int)33431;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1616();
		}
		var_46_bool = var_7_bool == (int)33401;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_1583();
		}
		var_60_bool = var_7_bool == (int)24256;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_1616();
		}
		var_64_bool = var_7_bool == (int)33403;
		if(var_64_bool != 0) {
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_1583();
		}
		var_68_bool = var_7_bool == (int)42249;
		if(var_68_bool != 0) {
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_1583();
		}
		var_72_bool = var_7_bool == (int)23288;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_1604();
		}
		var_78_bool = var_7_bool == (int)24260;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_1610();
		}
		var_84_bool = var_7_bool == (int)42107;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_1632();
		}
		var_90_bool = var_6_int == (int)23282;
		if(var_90_bool != 0) {
			var_91_bool = 0;
			var_91_bool = 0;
			var_92_bool = 0; var_93_object = Obj();
			var_93_object = var_1_object;
			func_1638(var_93_object);
			if(var_92_bool != 0) {
				var_98_bool = 0; var_99_object = Obj();
				var_99_object = var_1_object;
				func_1698(var_99_object);
				var_104_bool = var_98_bool == 0; //@nz
				if(var_104_bool != 0) {
					var_91_bool = 1;
				}
			}
			if(var_91_bool != 0) {
				var_105_object = Obj(); var_106_object = Obj();
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_1592();
				var_109_object = Obj(); var_110_object = Obj();
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_1598();
				var_113_string = "";
				func_262(var_7_bool, "Sly");
				@@@var_0_object:SetMessage((int)522115);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522117, (int)24242, (int)23284);
				@@@var_0_object:AddReply((int)522116, (int)24254, (int)23283);
				return 0;
			}
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_1598();
			var_139_string = "";
			func_262(var_7_bool, "Fear");
			@@@var_0_object:SetMessage((int)531990);
			@@@var_0_object:ClearReplies();
			var_141_bool = 0;
			var_141_bool = 0;
			var_142_bool = 0;
			var_142_bool = 0;
			var_143_bool = 0; var_144_object = Obj();
			var_144_object = var_1_object;
			func_1710(var_143_bool, var_144_object);
			if(var_143_bool != 0) {
				var_191_bool = 0; var_192_object = Obj();
				var_192_object = var_1_object;
				func_1720(var_192_object);
				var_197_bool = var_191_bool == 0; //@nz
				if(var_197_bool != 0) {
					var_142_bool = 1;
				}
			}
			if(var_142_bool != 0) {
				var_198_bool = 0; var_199_object = Obj();
				var_199_object = var_1_object;
				func_1698(var_199_object);
				var_200_bool = var_198_bool == 0; //@nz
				if(var_200_bool != 0) {
					var_141_bool = 1;
				}
			}
			if(var_141_bool != 0) {
				@@@var_0_object:AddReply((int)540264, (int)42248, (int)42247);
			}
			var_204_bool = 0;
			var_204_bool = 0;
			var_205_bool = 0; var_206_object = Obj();
			var_206_object = var_1_object;
			func_1650(var_206_object);
			if(var_205_bool != 0) {
				var_211_bool = 0; var_212_object = Obj();
				var_212_object = var_1_object;
				func_1674(var_212_object);
				if(var_211_bool != 0) {
					var_204_bool = 1;
				}
			}
			if(var_204_bool != 0) {
				@@@var_0_object:AddReply((int)522121, (int)24262, (int)23288);
			}
			var_220_bool = 0;
			var_220_bool = 0;
			var_221_bool = 0; var_222_object = Obj();
			var_222_object = var_1_object;
			func_1662(var_222_object);
			if(var_221_bool != 0) {
				var_227_bool = 0; var_228_object = Obj();
				var_228_object = var_1_object;
				func_1686(var_228_object);
				if(var_227_bool != 0) {
					var_220_bool = 1;
				}
			}
			if(var_220_bool != 0) {
				@@@var_0_object:AddReply((int)523066, (int)24282, (int)24260);
			}
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_1732(var_237_object);
			if(var_236_bool != 0) {
				@@@var_0_object:AddReply((int)540135, (int)42108, (int)42107);
			}
			@@@var_0_object:AddReply((int)532038, (int)-1, (int)33438);
			return 0;
		}
		var_249_bool = var_6_int == (int)42108;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_262(var_7_bool, "Grin");
			@@@var_0_object:SetMessage((int)540136);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540137, (int)-1, (int)42109);
			return 0;
		}
		var_256_bool = var_6_int == (int)24282;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_262(var_7_bool, "Grin");
			@@@var_0_object:SetMessage((int)523086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523087, (int)24300, (int)24283);
			@@@var_0_object:AddReply((int)523088, (int)24285, (int)24284);
			return 0;
		}
		var_266_bool = var_6_int == (int)24285;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_262(var_7_bool, "Grin");
			@@@var_0_object:SetMessage((int)523089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523090, (int)-1, (int)24286);
			@@@var_0_object:AddReply((int)523091, (int)24288, (int)24287);
			return 0;
		}
		var_276_bool = var_6_int == (int)24288;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523092);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523093, (int)24292, (int)24289);
			@@@var_0_object:AddReply((int)523094, (int)24292, (int)24290);
			@@@var_0_object:AddReply((int)523095, (int)24292, (int)24291);
			return 0;
		}
		var_289_bool = var_6_int == (int)24292;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523096);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523097, (int)-1, (int)24295);
			@@@var_0_object:AddReply((int)523098, (int)24297, (int)24296);
			return 0;
		}
		var_299_bool = var_6_int == (int)24297;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523099);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523100, (int)-1, (int)24298);
			@@@var_0_object:AddReply((int)523101, (int)-1, (int)24299);
			return 0;
		}
		var_309_bool = var_6_int == (int)24300;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_262(var_7_bool, "Grin");
			@@@var_0_object:SetMessage((int)523102);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523103, (int)24302, (int)24301);
			return 0;
		}
		var_316_bool = var_6_int == (int)24302;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523104);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523105, (int)24304, (int)24303);
			return 0;
		}
		var_323_bool = var_6_int == (int)24304;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523106);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523107, (int)24308, (int)24305);
			@@@var_0_object:AddReply((int)523108, (int)24308, (int)24306);
			@@@var_0_object:AddReply((int)523109, (int)24308, (int)24307);
			return 0;
		}
		var_336_bool = var_6_int == (int)24308;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523110);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523111, (int)-1, (int)24311);
			@@@var_0_object:AddReply((int)523112, (int)-1, (int)24312);
			return 0;
		}
		var_346_bool = var_6_int == (int)24262;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523069, (int)24271, (int)24263);
			@@@var_0_object:AddReply((int)523070, (int)24265, (int)24264);
			return 0;
		}
		var_356_bool = var_6_int == (int)24265;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_262(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)523071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523072, (int)24267, (int)24266);
			return 0;
		}
		var_363_bool = var_6_int == (int)24267;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523074, (int)24271, (int)24268);
			@@@var_0_object:AddReply((int)523075, (int)24271, (int)24269);
			return 0;
		}
		var_373_bool = var_6_int == (int)24271;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523078, (int)24275, (int)24274);
			return 0;
		}
		var_380_bool = var_6_int == (int)24275;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_262(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)523079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523080, (int)24277, (int)24276);
			return 0;
		}
		var_387_bool = var_6_int == (int)24277;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_262(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)523081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523082, (int)-1, (int)24278);
			@@@var_0_object:AddReply((int)523083, (int)24280, (int)24279);
			return 0;
		}
		var_397_bool = var_6_int == (int)24280;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_262(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)523084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523085, (int)-1, (int)24281);
			return 0;
		}
		var_404_bool = var_6_int == (int)42248;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540265);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540266, (int)-1, (int)42249);
			return 0;
		}
		var_411_bool = var_6_int == (int)24242;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_262(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)523049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523050, (int)24244, (int)24243);
			return 0;
		}
		var_418_bool = var_6_int == (int)24244;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_262(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)523051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523052, (int)24246, (int)24245);
			return 0;
		}
		var_425_bool = var_6_int == (int)24246;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_262(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)523053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523058, (int)24252, (int)24251);
			@@@var_0_object:AddReply((int)523054, (int)24248, (int)24247);
			return 0;
		}
		var_435_bool = var_6_int == (int)24248;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)523055);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523056, (int)24254, (int)24249);
			@@@var_0_object:AddReply((int)523057, (int)-1, (int)24250);
			return 0;
		}
		var_445_bool = var_6_int == (int)24254;
		if(var_445_bool != 0) {
			var_446_bool = 0; var_447_object = Obj();
			var_447_object = var_1_object;
			func_1710(var_446_bool, var_447_object);
			var_448_bool = var_446_bool == 0; //@nz
			if(var_448_bool != 0) {
				var_449_string = "";
				func_262(var_7_bool, "Smile");
				@@@var_0_object:SetMessage((int)523061);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540121, (int)42091, (int)42090);
				return 0;
			}
			var_454_bool = 0; var_455_object = Obj();
			var_455_object = var_1_object;
			func_1710(var_454_bool, var_455_object);
			if(var_454_bool != 0) {
				var_456_string = "";
				func_262(var_7_bool, "Smile");
				@@@var_0_object:SetMessage((int)531996);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531997, (int)-1, (int)33403);
				@@@var_0_object:AddReply((int)531998, (int)-1, (int)33404);
				return 0;
			}
		}
		var_465_bool = var_6_int == (int)42091;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540122);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523063, (int)-1, (int)24256);
			return 0;
		}
		var_472_bool = var_6_int == (int)24252;
		if(var_472_bool != 0) {
			var_473_string = "";
			func_262(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)523059);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523060, (int)24248, (int)24253);
			@@@var_0_object:AddReply((int)531991, (int)33398, (int)33397);
			return 0;
		}
		var_482_bool = var_6_int == (int)33398;
		if(var_482_bool != 0) {
			var_483_bool = 0; var_484_object = Obj();
			var_484_object = var_1_object;
			func_1710(var_483_bool, var_484_object);
			var_485_bool = var_483_bool == 0; //@nz
			if(var_485_bool != 0) {
				var_486_string = "";
				func_262(var_7_bool, "Saveyouall");
				@@@var_0_object:SetMessage((int)531992);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)532023, (int)33424, (int)33423);
				return 0;
			}
			var_491_bool = 0; var_492_object = Obj();
			var_492_object = var_1_object;
			func_1710(var_491_bool, var_492_object);
			if(var_491_bool != 0) {
				var_493_string = "";
				func_262(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)531994);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)532035, (int)33436, (int)33435);
				return 0;
			}
		}
		var_499_bool = var_6_int == (int)33436;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_262(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531995, (int)-1, (int)33401);
			return 0;
		}
		var_506_bool = var_6_int == (int)33424;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_262(var_7_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)532024);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532025, (int)33426, (int)33425);
			@@@var_0_object:AddReply((int)532033, (int)-1, (int)33433);
			return 0;
		}
		var_516_bool = var_6_int == (int)33426;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_262(var_7_bool, "Fear");
			@@@var_0_object:SetMessage((int)532026);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532027, (int)33428, (int)33427);
			@@@var_0_object:AddReply((int)532032, (int)-1, (int)33432);
			return 0;
		}
		var_526_bool = var_6_int == (int)33428;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_262(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)532028);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532029, (int)33430, (int)33429);
			return 0;
		}
		var_533_bool = var_6_int == (int)33430;
		if(var_533_bool != 0) {
			var_534_string = "";
			func_262(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532031, (int)-1, (int)33431);
			return 0;
		}
		var_3_string = true;
		var_539_bool = 0;
		func_1932(var_539_bool);
		if(var_539_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x11d";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_1273(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_1553(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_1256;
		var_0_object = false;
	}
Label_1256:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_1273(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_1553(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_1225();
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_1275(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1926(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1924(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1928(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1930(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1817(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_1553(Obj());
	var_81_object = var_80_object;
	func_1362(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_358_bool = var_17_bool == 0; //@nz
	if(var_358_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_1344();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1924(var_67_int)
{
	var_67_int = 515540;
	return 0;
}


func_1926(var_66_int)
{
	var_66_int = 502865;
	return 0;
}


func_262(var_2_object, var_205_string)
{
	var_206_bool = 0;
	func_1932(var_206_bool);
	var_207_bool = var_206_bool == 0; //@nz
	if(var_207_bool != 0) {
		return 0;
	}
	var_208_bool = var_205_string == var_2_object;
	if(var_208_bool != 0) {
		return 0;
	}
	var_209_string = ""; var_210_bool = 0;
	var_205_string = var_209_string;
	var_212_bool = var_205_string == "";
	if(var_212_bool != 0) {
		var_210_bool = 0;
	} else {
		var_210_bool = 1;
	}
	func_1516(var_209_string, var_210_bool);
	var_2_object = var_205_string;
	return 0;
	
}


func_1928(var_68_string)
{
	var_68_string = "ui/NPC_Klara.png";
	return 0;
}


func_1930(var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1674(var_321_bool)
{
	var_323_int = 0; var_324_string = "";
	func_1569(var_323_int, "oob12KlaraT2_2");
	var_326_bool = var_323_int == (int)0;
	if(var_326_bool != 0) {
		var_321_bool = 1;
		return 0;
	}
	var_321_bool = 0;
	return 0;
}


func_1932(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_1546()
{
	var_9_bool = 0;
	func_1932(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1420(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_1423:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_1423;
		}
	}
	var_107_bool = var_98_int == 0; //@nz
	if(var_107_bool != 0) {
		var_90_bool = 0;
		return 10;
	}
	var_100_int = 0;
	var_109_bool = var_98_int > (int)1;
	if(var_109_bool != 0) {
		irand(var_100_int, var_98_int);
	}
	var_111_int = var_100_int + (int)1;
	var_112_int = var_97_string + var_111_int;
	@@var_91_object:GetProperty(var_112_int, var_101_string);
	var_113_bool = 0; var_114_string = "";
	var_101_string = var_114_string;
	func_1531(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_1275(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1559(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_1932(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_1338;
		LookAsyncCamera("head");
	}
Label_1338:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_1553(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1686(var_337_bool)
{
	var_339_int = 0; var_340_string = "";
	func_1569(var_339_int, "oob12KlaraT2_3");
	var_342_bool = var_339_int == (int)0;
	if(var_342_bool != 0) {
		var_337_bool = 1;
		return 0;
	}
	var_337_bool = 0;
	return 0;
}


func_1559(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_1817(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x728";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_1569(var_184_int, var_185_string)
{
	var_186_int = 0; var_187_int = 0;
	GetVariable(var_185_string, var_187_int);
	var_187_int = var_184_int;
	return 2;
}


func_1698(var_190_bool)
{
	var_192_int = 0; var_193_string = "";
	func_1569(var_192_int, "game_final");
	var_195_bool = var_192_int != (int)0;
	if(var_195_bool != 0) {
		var_190_bool = 1;
		return 0;
	}
	var_190_bool = 0;
	return 0;
}


func_1574(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_1834(var_266_object, var_267_bool)
{
	@@var_266_object:add((int)7);
	@@var_266_object:add((int)23);
	@@var_266_object:add((int)21);
	@@var_266_object:add((int)9);
	@@var_266_object:add((int)3);
	@@var_266_object:add((int)1);
	@@var_266_object:add((int)11);
	@@var_266_object:add((int)13);
	var_278_bool = var_267_bool == (bool)0;
	if(var_278_bool != 0) {
		@@var_266_object:add((int)25);
	}
	return 0;
}


func_1710(var_253_bool, var_254_object)
{
	var_255_bool = 0; var_256_object = Obj();
	var_254_object = var_256_object;
	func_1744(var_256_object);
	if(var_255_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_1583()
{
	SetVariable("b12q01KlaraInSobor", (int)1);
	func_1750();
	return 0;
}


func_1457(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_1574(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_1466:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_1466;
		}
	}
	var_147_bool = var_129_int == 0; //@nz
	if(var_147_bool != 0) {
		var_121_bool = 0;
		return 10;
	}
	var_131_int = 0;
	var_149_bool = var_129_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_131_int, var_129_int);
	}
	var_151_int = var_131_int + (int)1;
	var_152_int = var_128_string + var_151_int;
	@@var_122_object:GetProperty(var_152_int, var_132_string);
	var_153_bool = 0; var_154_string = "";
	var_132_string = var_154_string;
	func_1531(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_1720(var_301_bool)
{
	var_303_int = 0; var_304_string = "";
	func_1569(var_303_int, "b12q01KlaraInSobor");
	var_306_bool = var_303_int != (int)0;
	if(var_306_bool != 0) {
		var_301_bool = 1;
		return 0;
	}
	var_301_bool = 0;
	return 0;
}


func_1592()
{
	SetVariable("oob12KlaraT2_1", (int)1);
	return 0;
}


func_1598()
{
	SetVariable("b12q01KlaraVisit", (int)1);
	return 0;
}


func_1344()
{
	var_360_bool = 0; var_361_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_363_bool = 0;
	func_1932(var_363_bool);
	if(var_363_bool != 0) {
	} else {
		HasAnimationTrack(var_361_bool, "head");
		var_365_bool = var_361_bool;
		if(var_365_bool == 0) goto Label_1361;
		UnlookAsync("head");
	}
Label_1361:
	return 2;
	
}


func_1732(var_346_bool)
{
	var_348_int = 0; var_349_string = "";
	func_1569(var_348_int, "oob12KlaraT2_4");
	var_351_bool = var_348_int == (int)0;
	if(var_351_bool != 0) {
		var_346_bool = 1;
		return 0;
	}
	var_346_bool = 0;
	return 0;
}


func_1604()
{
	SetVariable("oob12KlaraT2_2", (int)1);
	return 0;
}


func_1225()
{
	
Label_1225:
	Hold();
	goto Label_1225;
}
EMIT "Return(); Pop(0)";


func_1610()
{
	SetVariable("oob12KlaraT2_3", (int)1);
	return 0;
}


func_1866(var_291_bool, var_292_int)
{
	var_293_int = 0; var_294_int = 0;
	var_296_int = "vol_" + var_292_int;
	GetVariable(var_296_int, var_294_int);
	var_298_int = var_294_int & (int)4;
	var_291_bool = var_298_int != (int)0;
	return 2;
}


func_1616()
{
	var_14_int = 0; var_15_string = "";
	func_1569(var_14_int, "b12q01_Klara");
	var_19_bool = var_14_int == (int)0;
	if(var_19_bool != 0) {
		SetVariable("b12q01_Klara", (int)1);
		func_1763();
	}
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0;
		var_181_bool = 0;
		var_182_bool = 0; var_183_object = Obj();
		var_183_object = var_1_object;
		func_1638(var_183_object);
		if(var_182_bool != 0) {
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_1698(var_191_object);
			var_196_bool = var_190_bool == 0; //@nz
			if(var_196_bool != 0) {
				var_181_bool = 1;
			}
		}
		if(var_181_bool != 0) {
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_1592();
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_1598();
			var_205_string = "";
			func_262(var_175_object, "Sly");
			@@@var_0_object:SetMessage((int)522115);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522117, (int)24242, (int)23284);
			@@@var_0_object:AddReply((int)522116, (int)24254, (int)23283);
		} else {
				var_247_object = Obj(); var_248_object = Obj();
				var_247_object = var_1_object;
				var_248_object = var_0_object;
				func_1598();
				var_249_string = "";
				func_262(var_175_object, "Fear");
				@@@var_0_object:SetMessage((int)531990);
				@@@var_0_object:ClearReplies();
				var_251_bool = 0;
				var_251_bool = 0;
				var_252_bool = 0;
				var_252_bool = 0;
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_1710(var_253_bool, var_254_object);
				if(var_253_bool != 0) {
					var_301_bool = 0; var_302_object = Obj();
					var_302_object = var_1_object;
					func_1720(var_302_object);
					var_307_bool = var_301_bool == 0; //@nz
					if(var_307_bool != 0) {
						var_252_bool = 1;
					}
				}
				if(var_252_bool != 0) {
					var_308_bool = 0; var_309_object = Obj();
					var_309_object = var_1_object;
					func_1698(var_309_object);
					var_310_bool = var_308_bool == 0; //@nz
					if(var_310_bool != 0) {
						var_251_bool = 1;
					}
				}
				if(var_251_bool != 0) {
					@@@var_0_object:AddReply((int)540264, (int)42248, (int)42247);
				}
				var_314_bool = 0;
				var_314_bool = 0;
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_1650(var_316_object);
				if(var_315_bool != 0) {
					var_321_bool = 0; var_322_object = Obj();
					var_322_object = var_1_object;
					func_1674(var_322_object);
					if(var_321_bool != 0) {
						var_314_bool = 1;
					}
				}
				if(var_314_bool != 0) {
					@@@var_0_object:AddReply((int)522121, (int)24262, (int)23288);
				}
				var_330_bool = 0;
				var_330_bool = 0;
				var_331_bool = 0; var_332_object = Obj();
				var_332_object = var_1_object;
				func_1662(var_332_object);
				if(var_331_bool != 0) {
					var_337_bool = 0; var_338_object = Obj();
					var_338_object = var_1_object;
					func_1686(var_338_object);
					if(var_337_bool != 0) {
						var_330_bool = 1;
					}
				}
				if(var_330_bool != 0) {
					@@@var_0_object:AddReply((int)523066, (int)24282, (int)24260);
				}
				var_346_bool = 0; var_347_object = Obj();
				var_347_object = var_1_object;
				func_1732(var_347_object);
				if(var_346_bool != 0) {
					@@@var_0_object:AddReply((int)540135, (int)42108, (int)42107);
				}
				@@@var_0_object:AddReply((int)532038, (int)-1, (int)33438);
				goto Label_232;
		}
	}
Label_232:
	var_229_bool = 0;
	func_1932(var_229_bool);
	if(var_229_bool != 0) {

	Label_236:
		lshWaitForAnimEnd();
		var_230_string = var_3_string;
		if(var_230_string != 0) {
		} else {
			var_231_string = "";
			var_231_string = var_2_object;
			func_1500(var_231_string);
			goto Label_236;
	}
		PlayAnimation("all", "idle");

	Label_251:
		WaitForAnimEnd();
		var_244_string = var_3_string;
		if(var_244_string != 0) {
			goto Label_261;
		}
		PlayAnimation("all", "idle");
		goto Label_251;

	}
	goto Label_261;
	
Label_261:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1362(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_1420(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_1457(var_121_bool, var_122_object);
			var_156_bool = var_121_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		irand(var_87_int, (int)2);
		var_158_int = var_87_int;
		if(var_158_int != 0) {
			var_161_int = var_86_int + (int)1;
			var_163_int = var_161_int % (int)3;
			SetVariable("voice_common", var_163_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_166_bool = 0; var_167_object = Obj();
		var_80_object = var_167_object;
		func_1457(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_1420(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1418;
	
Label_1418:
	var_79_bool = 1;
	return 4;
	
}


func_1744(var_255_bool)
{
	func_1886((bool)0);
	var_257_bool = var_255_bool;
	return 0;
}


func_1876(var_282_bool, var_283_int)
{
	var_284_int = 0; var_285_int = 0;
	var_287_int = "vol_" + var_283_int;
	GetVariable(var_287_int, var_285_int);
	var_289_int = var_285_int & (int)16;
	var_282_bool = var_289_int != (int)0;
	return 2;
}


func_1750()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)615, (int)1, (int)532004);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_1789(var_56_bool, var_57_object, (int)613);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1500(var_231_string)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0;
	lshHasAnimation(var_235_bool, var_231_string);
	var_238_bool = var_235_bool;
	if(var_238_bool != 0) {
		lshGetAnimTimes(var_231_string, var_236_float, var_237_float);
		lshPlayAnimation(var_236_float, var_237_float, (bool)0);
	} else {
		var_241_int = "Can't find lsh animation : " + var_231_string;
		Trace(var_241_int);
	}
	return 6;
	
}


func_1886(var_257_bool)
{
	var_258_object = Obj(); var_259_int = 0; var_260_int = 0; var_261_int = 0; var_262_object = Obj(); var_263_int = 0; var_264_int = 0; var_265_int = 0;
	CreateIntVector(var_262_object);
	var_266_object = Obj(); var_267_bool = 0; var_268_int = 0;
	var_262_object = var_266_object;
	func_1834((bool)0, (int)-1);
	@@var_262_object:size(var_263_int);
	var_264_int = 0;
	
Label_1898:
	var_280_bool = var_264_int < var_263_int;
	if(var_280_bool != 0) {
		@@var_262_object:get(var_265_int, var_264_int);
		var_281_bool = 0;
		var_281_bool = 1;
		var_282_bool = 0; var_283_int = 0;
		var_265_int = var_283_int;
		func_1876(var_282_bool, var_283_int);
		if(var_282_bool != 1) {
			var_291_bool = 0; var_292_int = 0;
			var_265_int = var_292_int;
			func_1866(var_291_bool, var_292_int);
			if(var_291_bool != 1) {
				var_281_bool = 0;
			}
		}
		if(var_281_bool != 0) {
			var_257_bool = 0;
			var_264_int = var_264_int + (int)1;
			goto Label_1898;
		}
		return 8;
	}
	var_257_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1632()
{
	SetVariable("oob12KlaraT2_4", (int)1);
	return 0;
}


func_1763()
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateDiaryEntry(var_23_object, (int)696, (int)1, (int)535404);
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0;
	var_23_object = var_28_object;
	func_1789(var_27_bool, var_28_object, (int)613);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1638(var_182_bool)
{
	var_184_int = 0; var_185_string = "";
	func_1569(var_184_int, "oob12KlaraT2_1");
	var_189_bool = var_184_int == (int)0;
	if(var_189_bool != 0) {
		var_182_bool = 1;
		return 0;
	}
	var_182_bool = 0;
	return 0;
}


func_1516(var_209_string, var_210_bool)
{
	var_213_bool = 0; var_214_float = 0; var_215_float = 0; var_216_bool = 0; var_217_float = 0; var_218_float = 0;
	lshHasAnimation(var_216_bool, var_209_string);
	var_219_bool = var_216_bool;
	if(var_219_bool != 0) {
		lshGetAnimTimes(var_209_string, var_217_float, var_218_float);
		lshPlayAnimation(var_217_float, var_218_float, var_210_bool);
	} else {
		var_221_int = "Can't find lsh animation : " + var_209_string;
		Trace(var_221_int);
	}
	return 6;
	
}


func_1776(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj();
	GetDiaryRoot(var_38_object);
	var_39_bool = var_38_object == 0; //@nz
	if(var_39_bool != 0) {
		Trace("Can't retrieve diary root");
		var_36_object = 0;
		return 2;
	}
	var_38_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1650(var_315_bool)
{
	var_317_int = 0; var_318_string = "";
	func_1569(var_317_int, "b12q01ChildsAreVisited");
	var_320_bool = var_317_int != (int)0;
	if(var_320_bool != 0) {
		var_315_bool = 1;
		return 0;
	}
	var_315_bool = 0;
	return 0;
}


func_1273(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_1531(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1932(var_117_bool);
	if(var_117_bool != 0) {
		lshHasSpeech(var_116_bool, var_114_string);
		var_118_bool = var_116_bool;
		if(var_118_bool != 0) {
			lshPlaySpeech(var_114_string);
			var_113_bool = 1;
			return 2;
		}
	}
	var_113_bool = 0;
	return 2;
}


func_1789(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0;
	func_1776(Obj());
	var_36_object = var_33_object;
	@@var_33_object:Find(var_29_int, var_34_object);
	var_41_bool = var_34_object == 0; //@nz
	if(var_41_bool != 0) {
		var_43_int = "Can't find diary parent with id: " + var_29_int;
		Trace(var_43_int);
		var_27_bool = 0;
		return 6;
	}
	@@var_34_object:AddChild(var_28_object);
	SendWorldWndMessage((int)7);
	@@var_28_object:GetCategory(var_35_int);
	SetDiarySection(var_35_int);
	var_27_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1662(var_331_bool)
{
	var_333_int = 0; var_334_string = "";
	func_1569(var_333_int, "b12q01TheaterIsVisited");
	var_336_bool = var_333_int != (int)0;
	if(var_336_bool != 0) {
		var_331_bool = 1;
		return 0;
	}
	var_331_bool = 0;
	return 0;
}


