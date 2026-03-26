// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,ShowWindow/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Suffering|W:Penetrating|W:Fear|W:Grin|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|W:reputation|W:ui/NPC_Katerina.png|W:ui/NPC_Katerina_b.png|W:k1q01|W:k1q02|W:k1q02KaterinaGotoGeorg|W:pt_map_georg|A:AddMark|W:ook2Katerina1|W:k2q02|W:k2q02KaterinaGotoLara|W:pt_map_lara|W:ook3Katerina1|W:k3q02|W:k3q02KaterinaGotoJulia|W:pt_map_julia|W:ook4Katerina1|W:k4q02|W:k4q02KaterinaGotoTheater|W:pt_map_theater|W:quest_k4_02|W:completed|W:ook5Katerina1|W:k5q02KaterinaGotoPetr|W:pt_map_petr|W:quest_k5_02|W:k7q01|W:k11q01SoulCount|W:ook11Katerina1|W:k6q02|W:k6q02GotoKapella|W:pt_map_kapella|W:ook6Katerina1|W:ook1Katerina1|W:ook1Katerina2|W:money1000 is given|W:playsound|W:givemoney|A:ShowMap|W:k3KaterinaVisit|W:k4KaterinaVisit|W:k5KaterinaVisit|W:k6KaterinaVisit|W:ook6Katerina2|W:mapmark|W:resque_list|A:SetReturnValue|W:k5q02|W:k11q01|W:k6StopKaterinaTalks|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:vol_|A:size|A:get|W:people.xml
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x1764
// @RUN_TASK: 22
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4ac vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x744 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x846 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa65 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcef vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf65 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x11c6 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1446 vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x15ce vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0x173a vars=int,int
// @TASK_22: vars=cvector params=0
// @EVENT_7: op=0x17b0 vars=int
// @EVENT_6: op=0x17d6 vars=
// @EVENT_5: op=0x17e5 vars=
// @EVENT_45: op=0x17f2 vars=bool
// @EVENT_0: op=0x17fe vars=object
// @PE: 0x51,0xdb,0xf1,0x434,0x496,0x4ac,0x6f4,0x72e,0x744,0x7bf,0x830,0x846,0x9e3,0xa4f,0xa65,0xc68,0xcd9,0xcef,0xf06,0xf4f,0xf65,0x1107,0x11b0,0x11c6,0x13e8,0x1430,0x1446,0x1579,0x15b8,0x15ce,0x16ea,0x1724,0x173a,0x17b0,0x17d6,0x17f2,0x19d6,0x1a10,0x1a57,0x1a7f,0x1a86,0x1aa6,0x1ac6,0x1acf,0x1ad8,0x1af8,0x1b01,0x1b0a,0x1b2e,0x1b38,0x1b58,0x1b62,0x1b6b,0x1ba7,0x1bc7,0x1bcd,0x1bd6,0x1bdc,0x1be2,0x1bec,0x1bf2,0x1c02,0x1c08,0x1c0e,0x1c14,0x1c1a,0x1c21,0x1c27,0x1c4d,0x1c5d,0x1c63,0x1c73,0x1c83,0x1c8a,0x1c91,0x1c9a,0x1c9f,0x1caf,0x1cbb,0x1cc7,0x1cd3,0x1cdf,0x1ceb,0x1cf7,0x1d03,0x1d0f,0x1d1b,0x1d27,0x1d33,0x1d3f,0x1d4b,0x1d57,0x1d63,0x1d6f,0x1d7b,0x1d87,0x1d93,0x1d9f,0x1dab,0x1db7,0x1dc3,0x1dcf,0x1fb3,0x1ff8,0x1ffc

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_57_cvector == (int)25993;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6790();
		}
		var_90_bool = var_57_cvector == (int)27866;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_7322(var_92_object);
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_7313();
		}
		var_132_bool = var_57_cvector == (int)27865;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_7313();
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_7322(var_136_object);
		}
		var_138_bool = var_57_cvector == (int)26076;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_6799();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_7154(var_168_object);
		}
		var_194_bool = var_57_cvector == (int)27899;
		if(var_194_bool != 0) {
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_7132();
		}
		var_200_bool = var_56_bool == (int)25992;
		if(var_200_bool != 0) {
			var_201_bool = 0; var_202_object = Obj();
			var_202_object = var_1_object;
			func_7343(var_202_object);
			if(var_201_bool != 0) {
				var_209_string = "";
				func_219(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)524653);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526570, (int)27842, (int)27841);
				@@@var_0_object:AddReply((int)526647, (int)27842, (int)27921);
				return 0;
			}
			var_233_bool = 0;
			var_233_bool = 0;
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_7355(var_235_object);
			var_240_bool = var_234_bool == 0; //@nz
			if(var_240_bool != 0) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_7595(var_242_object);
				if(var_241_bool != 0) {
					var_233_bool = 1;
				}
			}
			if(var_233_bool != 0) {
				var_247_object = Obj(); var_248_object = Obj();
				var_247_object = var_1_object;
				var_248_object = var_0_object;
				func_7126();
				var_251_string = "";
				func_219(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526576);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526585, (int)27857, (int)27856);
				@@@var_0_object:AddReply((int)541708, (int)27859, (int)43895);
				return 0;
			}
			var_259_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524662);
			@@@var_0_object:ClearReplies();
			var_261_bool = 0; var_262_object = Obj();
			var_262_object = var_1_object;
			func_7355(var_262_object);
			if(var_261_bool != 0) {
				@@@var_0_object:AddReply((int)524748, (int)27892, (int)26072);
			}
			var_266_bool = 0; var_267_object = Obj();
			var_267_object = var_1_object;
			func_7607(var_267_object);
			if(var_266_bool != 0) {
				@@@var_0_object:AddReply((int)526625, (int)43897, (int)27899);
			}
			@@@var_0_object:AddReply((int)524663, (int)-1, (int)26002);
			return 0;
		}
		var_279_bool = var_56_bool == (int)43897;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541709);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541710, (int)27900, (int)43898);
			@@@var_0_object:AddReply((int)541711, (int)-1, (int)43899);
			return 0;
		}
		var_289_bool = var_56_bool == (int)27900;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526627, (int)27902, (int)27901);
			return 0;
		}
		var_296_bool = var_56_bool == (int)27902;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526628);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526629, (int)27904, (int)27903);
			return 0;
		}
		var_303_bool = var_56_bool == (int)27904;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526630);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526631, (int)27906, (int)27905);
			@@@var_0_object:AddReply((int)541712, (int)27913, (int)43900);
			return 0;
		}
		var_313_bool = var_56_bool == (int)27906;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526633, (int)27908, (int)27907);
			return 0;
		}
		var_320_bool = var_56_bool == (int)27908;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526634);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526638, (int)27913, (int)27912);
			@@@var_0_object:AddReply((int)541713, (int)27918, (int)43902);
			return 0;
		}
		var_330_bool = var_56_bool == (int)27913;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526639);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526642, (int)27917, (int)27916);
			return 0;
		}
		var_337_bool = var_56_bool == (int)27917;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526635, (int)27910, (int)27909);
			return 0;
		}
		var_344_bool = var_56_bool == (int)27910;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_219(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)526636);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526637, (int)27918, (int)27911);
			return 0;
		}
		var_351_bool = var_56_bool == (int)27918;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_219(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)526644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526645, (int)-1, (int)27919);
			return 0;
		}
		var_358_bool = var_56_bool == (int)27892;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526619);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526620, (int)27894, (int)27893);
			@@@var_0_object:AddReply((int)526623, (int)27894, (int)27896);
			return 0;
		}
		var_368_bool = var_56_bool == (int)27894;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526621);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526622, (int)26073, (int)27895);
			return 0;
		}
		var_375_bool = var_56_bool == (int)26073;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524749);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526595, (int)27871, (int)27868);
			return 0;
		}
		var_382_bool = var_56_bool == (int)27871;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_219(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)526598);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526599, (int)27873, (int)27872);
			return 0;
		}
		var_389_bool = var_56_bool == (int)27873;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_219(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)526600);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526601, (int)27878, (int)27874);
			return 0;
		}
		var_396_bool = var_56_bool == (int)27878;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526605);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526606, (int)26075, (int)27879);
			return 0;
		}
		var_403_bool = var_56_bool == (int)26075;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524752, (int)-1, (int)26076);
			return 0;
		}
		var_410_bool = var_56_bool == (int)27857;
		if(var_410_bool != 0) {
			var_411_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526587, (int)27859, (int)27858);
			return 0;
		}
		var_417_bool = var_56_bool == (int)27859;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_219(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)526588);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526577, (int)27849, (int)27848);
			@@@var_0_object:AddReply((int)526589, (int)27849, (int)27860);
			return 0;
		}
		var_427_bool = var_56_bool == (int)27849;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526579, (int)27851, (int)27850);
			@@@var_0_object:AddReply((int)526592, (int)-1, (int)27865);
			return 0;
		}
		var_437_bool = var_56_bool == (int)27851;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_219(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)526580);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526581, (int)27863, (int)27852);
			@@@var_0_object:AddReply((int)526590, (int)27863, (int)27862);
			return 0;
		}
		var_447_bool = var_56_bool == (int)27863;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_219(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)526591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526593, (int)-1, (int)27866);
			return 0;
		}
		var_454_bool = var_56_bool == (int)27842;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526571);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526572, (int)27922, (int)27843);
			@@@var_0_object:AddReply((int)541704, (int)27922, (int)43889);
			return 0;
		}
		var_464_bool = var_56_bool == (int)27922;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_219(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)526648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526649, (int)27844, (int)27923);
			@@@var_0_object:AddReply((int)526650, (int)27844, (int)27924);
			return 0;
		}
		var_474_bool = var_56_bool == (int)27844;
		if(var_474_bool != 0) {
			var_475_string = "";
			func_219(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)526573);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526574, (int)27853, (int)27845);
			@@@var_0_object:AddReply((int)526651, (int)27853, (int)27926);
			return 0;
		}
		var_484_bool = var_56_bool == (int)27853;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526582);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526583, (int)27855, (int)27854);
			return 0;
		}
		var_491_bool = var_56_bool == (int)27855;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526584);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526652, (int)27929, (int)27928);
			@@@var_0_object:AddReply((int)541705, (int)43892, (int)43891);
			return 0;
		}
		var_501_bool = var_56_bool == (int)43892;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_219(var_57_cvector, "Grin");
			@@@var_0_object:SetMessage((int)541706);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541707, (int)27929, (int)43893);
			return 0;
		}
		var_508_bool = var_56_bool == (int)27929;
		if(var_508_bool != 0) {
			var_509_string = "";
			func_219(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526653);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524654, (int)-1, (int)25993);
			return 0;
		}
		var_3_string = true;
		var_514_bool = 0;
		func_6781(var_514_bool);
		if(var_514_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_57_cvector == (int)26651;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6828();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_7283(var_114_object);
		}
		var_140_bool = var_57_cvector == (int)40863;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_6828();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_7283(var_144_object);
		}
		var_146_bool = var_57_cvector == (int)26658;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_6828();
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_7283(var_150_object);
		}
		var_152_bool = var_57_cvector == (int)26676;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_6854();
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_7299(var_166_object);
		}
		var_206_bool = var_57_cvector == (int)26677;
		if(var_206_bool != 0) {
			var_207_object = Obj(); var_208_object = Obj();
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_6863();
			var_219_object = Obj(); var_220_object = Obj();
			var_219_object = var_1_object;
			var_220_object = var_0_object;
			func_7306(var_220_object);
		}
		var_225_bool = var_56_bool == (int)26650;
		if(var_225_bool != 0) {
			var_226_bool = 0; var_227_object = Obj();
			var_227_object = var_1_object;
			func_7367(var_227_object);
			if(var_226_bool != 0) {
				var_234_object = Obj(); var_235_object = Obj();
				var_234_object = var_1_object;
				var_235_object = var_0_object;
				func_6822();
				var_238_string = "";
				func_1174(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)525282);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)529188, (int)30639, (int)30638);
				return 0;
			}
			var_259_string = "";
			func_1174(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525287);
			@@@var_0_object:ClearReplies();
			var_261_bool = 0; var_262_object = Obj();
			var_262_object = var_1_object;
			func_7379(var_262_object);
			if(var_261_bool != 0) {
				@@@var_0_object:AddReply((int)525288, (int)43687, (int)26656);
			}
			var_270_bool = 0; var_271_object = Obj();
			var_271_object = var_1_object;
			func_7391(var_271_object);
			if(var_270_bool != 0) {
				@@@var_0_object:AddReply((int)525306, (int)26675, (int)26674);
			}
			@@@var_0_object:AddReply((int)525291, (int)-1, (int)26659);
			return 0;
		}
		var_283_bool = var_56_bool == (int)26675;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_1174(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529203, (int)30656, (int)30654);
			@@@var_0_object:AddReply((int)529204, (int)30657, (int)30655);
			return 0;
		}
		var_293_bool = var_56_bool == (int)30657;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_1174(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)529206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538911, (int)40865, (int)40864);
			return 0;
		}
		var_300_bool = var_56_bool == (int)40865;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_1174(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)538912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525309, (int)-1, (int)26677);
			return 0;
		}
		var_307_bool = var_56_bool == (int)30656;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_1174(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)529205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525308, (int)-1, (int)26676);
			return 0;
		}
		var_314_bool = var_56_bool == (int)43687;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_1174(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541524);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541525, (int)26657, (int)43688);
			@@@var_0_object:AddReply((int)541526, (int)43690, (int)43689);
			return 0;
		}
		var_324_bool = var_56_bool == (int)43690;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_1174(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541527);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541528, (int)26657, (int)43691);
			return 0;
		}
		var_331_bool = var_56_bool == (int)26657;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_1174(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525290, (int)-1, (int)26658);
			return 0;
		}
		var_338_bool = var_56_bool == (int)30639;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_1174(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529189);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529190, (int)30641, (int)30640);
			@@@var_0_object:AddReply((int)538902, (int)30641, (int)40850);
			return 0;
		}
		var_348_bool = var_56_bool == (int)30641;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_1174(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529192, (int)30643, (int)30642);
			@@@var_0_object:AddReply((int)538903, (int)30643, (int)40852);
			return 0;
		}
		var_358_bool = var_56_bool == (int)30643;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_1174(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529193);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529194, (int)30645, (int)30644);
			@@@var_0_object:AddReply((int)538904, (int)30645, (int)40854);
			return 0;
		}
		var_368_bool = var_56_bool == (int)30645;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_1174(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)529195);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529200, (int)30651, (int)30650);
			@@@var_0_object:AddReply((int)538905, (int)40857, (int)40856);
			return 0;
		}
		var_378_bool = var_56_bool == (int)40857;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_1174(var_57_cvector, "Grin");
			@@@var_0_object:SetMessage((int)538906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538907, (int)30647, (int)40858);
			return 0;
		}
		var_385_bool = var_56_bool == (int)30651;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_1174(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)529201);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529196, (int)30647, (int)30646);
			@@@var_0_object:AddReply((int)529202, (int)30647, (int)30652);
			return 0;
		}
		var_395_bool = var_56_bool == (int)30647;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_1174(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)529197);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538899, (int)40847, (int)40846);
			@@@var_0_object:AddReply((int)538908, (int)40861, (int)40860);
			return 0;
		}
		var_405_bool = var_56_bool == (int)40847;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_1174(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538900);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538901, (int)40861, (int)40848);
			@@@var_0_object:AddReply((int)525284, (int)-1, (int)26652);
			return 0;
		}
		var_415_bool = var_56_bool == (int)40861;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_1174(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)538909);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529198, (int)30649, (int)30648);
			return 0;
		}
		var_422_bool = var_56_bool == (int)30649;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_1174(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525283, (int)-1, (int)26651);
			@@@var_0_object:AddReply((int)538910, (int)-1, (int)40863);
			return 0;
		}
		var_3_string = true;
		var_431_bool = 0;
		func_6781(var_431_bool);
		if(var_431_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4ad";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_56_bool == (int)26848;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_1838(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525493, (int)-1, (int)26849);
			@@@var_0_object:AddReply((int)526251, (int)-1, (int)27524);
			return 0;
		}
		var_3_string = true;
		var_86_bool = 0;
		func_6781(var_86_bool);
		if(var_86_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x745";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_57_cvector == (int)26893;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6878();
		}
		var_114_bool = var_57_cvector == (int)26917;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_6878();
		}
		var_118_bool = var_57_cvector == (int)26920;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_6904();
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_7299(var_132_object);
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_7138(var_172_object);
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_7148();
		}
		var_197_bool = var_57_cvector == (int)26921;
		if(var_197_bool != 0) {
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_6913();
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_7306(var_211_object);
		}
		var_216_bool = var_56_bool == (int)26892;
		if(var_216_bool != 0) {
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_7403(var_218_object);
			if(var_217_bool != 0) {
				var_225_object = Obj(); var_226_object = Obj();
				var_225_object = var_1_object;
				var_226_object = var_0_object;
				func_6872();
				var_229_object = Obj(); var_230_object = Obj();
				var_229_object = var_1_object;
				var_230_object = var_0_object;
				func_7170();
				var_233_string = "";
				func_2096(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)525536);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540780, (int)42827, (int)42826);
				@@@var_0_object:AddReply((int)540791, (int)42827, (int)42837);
				return 0;
			}
			var_257_string = "";
			func_2096(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525539);
			@@@var_0_object:ClearReplies();
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_7415(var_260_object);
			if(var_259_bool != 0) {
				@@@var_0_object:AddReply((int)525559, (int)26916, (int)26915);
			}
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_7427(var_269_object);
			if(var_268_bool != 0) {
				@@@var_0_object:AddReply((int)525562, (int)26919, (int)26918);
			}
			@@@var_0_object:AddReply((int)525540, (int)-1, (int)26896);
			@@@var_0_object:AddReply((int)540788, (int)-1, (int)42834);
			return 0;
		}
		var_284_bool = var_56_bool == (int)26919;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_2096(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525563);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540835, (int)42893, (int)42892);
			@@@var_0_object:AddReply((int)540837, (int)42893, (int)42894);
			return 0;
		}
		var_294_bool = var_56_bool == (int)42893;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_2096(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540836);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525564, (int)-1, (int)26920);
			@@@var_0_object:AddReply((int)540838, (int)42897, (int)42896);
			return 0;
		}
		var_304_bool = var_56_bool == (int)42897;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_2096(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)540839);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525565, (int)-1, (int)26921);
			return 0;
		}
		var_311_bool = var_56_bool == (int)26916;
		if(var_311_bool != 0) {
			@@@var_0_object:SetMessage((int)525560);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540789, (int)42836, (int)42835);
			return 0;
		}
		var_317_bool = var_56_bool == (int)42836;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_2096(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540790);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525561, (int)-1, (int)26917);
			return 0;
		}
		var_324_bool = var_56_bool == (int)42827;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_2096(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540782, (int)42829, (int)42828);
			@@@var_0_object:AddReply((int)540792, (int)42829, (int)42839);
			return 0;
		}
		var_334_bool = var_56_bool == (int)42829;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_2096(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)540783);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540784, (int)42831, (int)42830);
			return 0;
		}
		var_341_bool = var_56_bool == (int)42831;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_2096(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540786, (int)42833, (int)42832);
			@@@var_0_object:AddReply((int)540793, (int)42833, (int)42841);
			return 0;
		}
		var_351_bool = var_56_bool == (int)42833;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_2096(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540787);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525537, (int)-1, (int)26893);
			@@@var_0_object:AddReply((int)525538, (int)-1, (int)26894);
			return 0;
		}
		var_3_string = true;
		var_360_bool = 0;
		func_6781(var_360_bool);
		if(var_360_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x847";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_57_cvector == (int)27053;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6928();
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_7245(var_122_object);
		}
		var_148_bool = var_57_cvector == (int)42915;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_6928();
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_7245(var_152_object);
		}
		var_154_bool = var_57_cvector == (int)27058;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_6928();
		}
		var_158_bool = var_57_cvector == (int)27095;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_6958();
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_7299(var_176_object);
		}
		var_216_bool = var_57_cvector == (int)42922;
		if(var_216_bool != 0) {
			var_217_object = Obj(); var_218_object = Obj();
			var_217_object = var_1_object;
			var_218_object = var_0_object;
			func_6958();
			var_219_object = Obj(); var_220_object = Obj();
			var_219_object = var_1_object;
			var_220_object = var_0_object;
			func_7299(var_220_object);
		}
		var_222_bool = var_57_cvector == (int)30699;
		if(var_222_bool != 0) {
			var_223_object = Obj(); var_224_object = Obj();
			var_223_object = var_1_object;
			var_224_object = var_0_object;
			func_6958();
			var_225_object = Obj(); var_226_object = Obj();
			var_225_object = var_1_object;
			var_226_object = var_0_object;
			func_6783(var_226_object);
		}
		var_231_bool = var_56_bool == (int)27048;
		if(var_231_bool != 0) {
			var_232_bool = 0; var_233_object = Obj();
			var_233_object = var_1_object;
			func_7439(var_233_object);
			if(var_232_bool != 0) {
				var_240_object = Obj(); var_241_object = Obj();
				var_240_object = var_1_object;
				var_241_object = var_0_object;
				func_6922();
				var_244_object = Obj(); var_245_object = Obj();
				var_244_object = var_1_object;
				var_245_object = var_0_object;
				func_7176();
				var_248_string = "";
				func_2639(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)525736);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540845, (int)42904, (int)42903);
				@@@var_0_object:AddReply((int)529239, (int)30694, (int)30693);
				return 0;
			}
			var_272_string = "";
			func_2639(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525743);
			@@@var_0_object:ClearReplies();
			var_274_bool = 0; var_275_object = Obj();
			var_275_object = var_1_object;
			func_7451(var_275_object);
			if(var_274_bool != 0) {
				@@@var_0_object:AddReply((int)525744, (int)27057, (int)27056);
			}
			var_283_bool = 0; var_284_object = Obj();
			var_284_object = var_1_object;
			func_7463(var_284_object);
			if(var_283_bool != 0) {
				@@@var_0_object:AddReply((int)525781, (int)42916, (int)27093);
			}
			@@@var_0_object:AddReply((int)525747, (int)-1, (int)27059);
			return 0;
		}
		var_296_bool = var_56_bool == (int)42916;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_2639(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)540855);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540856, (int)42918, (int)42917);
			return 0;
		}
		var_303_bool = var_56_bool == (int)42918;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_2639(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540858, (int)30697, (int)42919);
			@@@var_0_object:AddReply((int)540859, (int)30697, (int)42920);
			return 0;
		}
		var_313_bool = var_56_bool == (int)30697;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_2639(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)529243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529244, (int)30700, (int)30698);
			@@@var_0_object:AddReply((int)529245, (int)-1, (int)30699);
			return 0;
		}
		var_323_bool = var_56_bool == (int)30700;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_2639(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)529246);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529247, (int)27094, (int)30701);
			@@@var_0_object:AddReply((int)540860, (int)-1, (int)42922);
			return 0;
		}
		var_333_bool = var_56_bool == (int)27094;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_2639(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)525782);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525783, (int)-1, (int)27095);
			return 0;
		}
		var_340_bool = var_56_bool == (int)27057;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_2639(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525745);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525746, (int)-1, (int)27058);
			return 0;
		}
		var_347_bool = var_56_bool == (int)30694;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_2639(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)529240);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529241, (int)30696, (int)30695);
			@@@var_0_object:AddReply((int)540848, (int)42908, (int)42907);
			return 0;
		}
		var_357_bool = var_56_bool == (int)42908;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_2639(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540849);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540850, (int)30696, (int)42909);
			@@@var_0_object:AddReply((int)540851, (int)42911, (int)42910);
			return 0;
		}
		var_367_bool = var_56_bool == (int)42911;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_2639(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540852);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540853, (int)30696, (int)42912);
			return 0;
		}
		var_374_bool = var_56_bool == (int)30696;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_2639(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)529242);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525737, (int)27050, (int)27049);
			return 0;
		}
		var_381_bool = var_56_bool == (int)27050;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_2639(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)525738);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525739, (int)27052, (int)27051);
			@@@var_0_object:AddReply((int)540854, (int)-1, (int)42915);
			return 0;
		}
		var_391_bool = var_56_bool == (int)27052;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_2639(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525740);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525741, (int)-1, (int)27053);
			@@@var_0_object:AddReply((int)525742, (int)-1, (int)27054);
			return 0;
		}
		var_401_bool = var_56_bool == (int)42904;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_2639(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)540846);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540847, (int)30694, (int)42905);
			return 0;
		}
		var_3_string = true;
		var_407_bool = 0;
		func_6781(var_407_bool);
		if(var_407_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa66";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_57_cvector == (int)27184;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6974();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_7327(var_120_object);
		}
		var_146_bool = var_57_cvector == (int)27189;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_6974();
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_7327(var_150_object);
		}
		var_152_bool = var_57_cvector == (int)27226;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_7000();
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_7194(var_170_object);
		}
		var_210_bool = var_57_cvector == (int)30529;
		if(var_210_bool != 0) {
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_7000();
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_7194(var_214_object);
		}
		var_216_bool = var_56_bool == (int)27183;
		if(var_216_bool != 0) {
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_7475(var_218_object);
			if(var_217_bool != 0) {
				var_225_object = Obj(); var_226_object = Obj();
				var_225_object = var_1_object;
				var_226_object = var_0_object;
				func_6968();
				var_229_object = Obj(); var_230_object = Obj();
				var_229_object = var_1_object;
				var_230_object = var_0_object;
				func_7182();
				var_233_string = "";
				func_3289(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)525891);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540863, (int)42926, (int)42925);
				@@@var_0_object:AddReply((int)540861, (int)42926, (int)42923);
				return 0;
			}
			var_257_string = "";
			func_3289(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525894);
			@@@var_0_object:ClearReplies();
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_7487(var_260_object);
			if(var_259_bool != 0) {
				@@@var_0_object:AddReply((int)525895, (int)27188, (int)27187);
			}
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_7499(var_269_object);
			if(var_268_bool != 0) {
				@@@var_0_object:AddReply((int)525932, (int)30523, (int)27224);
			}
			@@@var_0_object:AddReply((int)525898, (int)-1, (int)27190);
			@@@var_0_object:AddReply((int)529078, (int)-1, (int)30522);
			return 0;
		}
		var_284_bool = var_56_bool == (int)30523;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_3289(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529080, (int)30525, (int)30524);
			@@@var_0_object:AddReply((int)529086, (int)30531, (int)30530);
			return 0;
		}
		var_294_bool = var_56_bool == (int)30531;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_3289(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)529087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529088, (int)30525, (int)30532);
			return 0;
		}
		var_301_bool = var_56_bool == (int)30525;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_3289(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529082, (int)27225, (int)30526);
			return 0;
		}
		var_308_bool = var_56_bool == (int)27225;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_3289(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)525933);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529084, (int)30534, (int)30528);
			@@@var_0_object:AddReply((int)529085, (int)-1, (int)30529);
			return 0;
		}
		var_318_bool = var_56_bool == (int)30534;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_3289(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)529089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525934, (int)-1, (int)27226);
			return 0;
		}
		var_325_bool = var_56_bool == (int)27188;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_3289(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)525896);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525897, (int)-1, (int)27189);
			return 0;
		}
		var_332_bool = var_56_bool == (int)42926;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_3289(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)540864);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529070, (int)30515, (int)30514);
			@@@var_0_object:AddReply((int)540865, (int)42929, (int)42928);
			return 0;
		}
		var_342_bool = var_56_bool == (int)42929;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_3289(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540867, (int)30515, (int)42930);
			return 0;
		}
		var_349_bool = var_56_bool == (int)30515;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_3289(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)529071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540868, (int)42932, (int)42931);
			@@@var_0_object:AddReply((int)540884, (int)42932, (int)42952);
			return 0;
		}
		var_359_bool = var_56_bool == (int)42932;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_3289(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529072, (int)30517, (int)30516);
			@@@var_0_object:AddReply((int)540885, (int)42958, (int)42954);
			return 0;
		}
		var_369_bool = var_56_bool == (int)30517;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_3289(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529074, (int)30519, (int)30518);
			@@@var_0_object:AddReply((int)540886, (int)42956, (int)42955);
			return 0;
		}
		var_379_bool = var_56_bool == (int)42956;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_3289(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540888, (int)42958, (int)42957);
			return 0;
		}
		var_386_bool = var_56_bool == (int)42958;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_3289(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540889);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540890, (int)30519, (int)42960);
			return 0;
		}
		var_393_bool = var_56_bool == (int)30519;
		if(var_393_bool != 0) {
			var_394_string = "";
			func_3289(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)529075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525892, (int)-1, (int)27184);
			@@@var_0_object:AddReply((int)525893, (int)30520, (int)27185);
			return 0;
		}
		var_403_bool = var_56_bool == (int)30520;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_3289(var_57_cvector, "Grin");
			@@@var_0_object:SetMessage((int)529076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529077, (int)-1, (int)30521);
			return 0;
		}
		var_3_string = true;
		var_409_bool = 0;
		func_6781(var_409_bool);
		if(var_409_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcf0";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_57_cvector == (int)27470;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_7010();
		}
		var_90_bool = var_57_cvector == (int)27488;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_7019();
		}
		var_104_bool = var_56_bool == (int)27467;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_3919(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526186);
			@@@var_0_object:ClearReplies();
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_7511(var_124_object);
			if(var_123_bool != 0) {
				@@@var_0_object:AddReply((int)526187, (int)30128, (int)27468);
			}
			var_134_bool = 0; var_135_object = Obj();
			var_135_object = var_1_object;
			func_7523(var_135_object);
			if(var_134_bool != 0) {
				@@@var_0_object:AddReply((int)526203, (int)30138, (int)27484);
			}
			@@@var_0_object:AddReply((int)526190, (int)-1, (int)27471);
			return 0;
		}
		var_147_bool = var_56_bool == (int)30138;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_3919(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528719, (int)30140, (int)30139);
			@@@var_0_object:AddReply((int)528730, (int)30140, (int)30151);
			return 0;
		}
		var_157_bool = var_56_bool == (int)30140;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_3919(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528721, (int)30142, (int)30141);
			@@@var_0_object:AddReply((int)528731, (int)30154, (int)30153);
			return 0;
		}
		var_167_bool = var_56_bool == (int)30154;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_3919(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)528732);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528733, (int)30142, (int)30155);
			return 0;
		}
		var_174_bool = var_56_bool == (int)30142;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_3919(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)528722);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528723, (int)27485, (int)30143);
			@@@var_0_object:AddReply((int)528724, (int)27485, (int)30144);
			return 0;
		}
		var_184_bool = var_56_bool == (int)27485;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_3919(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526204);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528725, (int)30147, (int)30146);
			@@@var_0_object:AddReply((int)528727, (int)30147, (int)30148);
			return 0;
		}
		var_194_bool = var_56_bool == (int)30147;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_3919(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)528726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528728, (int)30150, (int)30149);
			return 0;
		}
		var_201_bool = var_56_bool == (int)30150;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_3919(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)528729);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526205, (int)27487, (int)27486);
			@@@var_0_object:AddReply((int)528734, (int)27487, (int)30157);
			return 0;
		}
		var_211_bool = var_56_bool == (int)27487;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_3919(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)526206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526207, (int)-1, (int)27488);
			return 0;
		}
		var_218_bool = var_56_bool == (int)30128;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_3919(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528709);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528710, (int)30131, (int)30129);
			@@@var_0_object:AddReply((int)528711, (int)30131, (int)30130);
			return 0;
		}
		var_228_bool = var_56_bool == (int)30131;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_3919(var_57_cvector, "Grin");
			@@@var_0_object:SetMessage((int)528712);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528713, (int)27469, (int)30133);
			return 0;
		}
		var_235_bool = var_56_bool == (int)27469;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_3919(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)526188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528714, (int)30135, (int)30134);
			return 0;
		}
		var_242_bool = var_56_bool == (int)30135;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_3919(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)528715);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528716, (int)30137, (int)30136);
			return 0;
		}
		var_249_bool = var_56_bool == (int)30137;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_3919(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528717);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526189, (int)-1, (int)27470);
			return 0;
		}
		var_3_string = true;
		var_255_bool = 0;
		func_6781(var_255_bool);
		if(var_255_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf66";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_57_cvector == (int)27980;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_7085();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_7267(var_114_object);
		}
		var_140_bool = var_57_cvector == (int)27985;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_7085();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_7261();
		}
		var_148_bool = var_57_cvector == (int)27988;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_7117();
		}
		var_162_bool = var_57_cvector == (int)44874;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_7117();
		}
		var_166_bool = var_57_cvector == (int)44875;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_7117();
		}
		var_170_bool = var_57_cvector == (int)27997;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_7207();
		}
		var_200_bool = var_57_cvector == (int)27998;
		if(var_200_bool != 0) {
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_7207();
		}
		var_204_bool = var_56_bool == (int)27977;
		if(var_204_bool != 0) {
			var_205_bool = 0;
			var_205_bool = 0;
			var_206_bool = 0; var_207_object = Obj();
			var_207_object = var_1_object;
			func_7571(var_207_object);
			if(var_206_bool != 0) {
				var_212_bool = 0; var_213_object = Obj();
				var_213_object = var_1_object;
				func_7619(var_213_object);
				var_218_bool = var_212_bool == 0; //@nz
				if(var_218_bool != 0) {
					var_205_bool = 1;
				}
			}
			if(var_205_bool != 0) {
				var_219_object = Obj(); var_220_object = Obj();
				var_219_object = var_1_object;
				var_220_object = var_0_object;
				func_7111();
				var_223_object = Obj(); var_224_object = Obj();
				var_223_object = var_1_object;
				var_224_object = var_0_object;
				func_7188();
				var_227_string = "";
				func_4528(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526701);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528907, (int)30337, (int)30336);
				return 0;
			}
			var_248_bool = 0; var_249_object = Obj();
			var_249_object = var_1_object;
			func_7619(var_249_object);
			var_250_bool = var_248_bool == 0; //@nz
			if(var_250_bool != 0) {
				var_251_string = "";
				func_4528(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526706);
				@@@var_0_object:ClearReplies();
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_7559(var_254_object);
				if(var_253_bool != 0) {
					@@@var_0_object:AddReply((int)526707, (int)27984, (int)27983);
				}
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_7583(var_263_object);
				if(var_262_bool != 0) {
					@@@var_0_object:AddReply((int)526710, (int)27987, (int)27986);
				}
				@@@var_0_object:AddReply((int)526713, (int)-1, (int)27989);
				return 0;
			}
			var_274_bool = 0; var_275_object = Obj();
			var_275_object = var_1_object;
			func_7631(var_275_object);
			if(var_274_bool != 0) {
				var_280_object = Obj(); var_281_object = Obj();
				var_280_object = var_1_object;
				var_281_object = var_0_object;
				func_7201();
				var_284_string = "";
				func_4528(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526714);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526715, (int)27992, (int)27991);
				@@@var_0_object:AddReply((int)528913, (int)27992, (int)30342);
				return 0;
			}
			var_292_string = "";
			func_4528(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526724);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526725, (int)-1, (int)28002);
			@@@var_0_object:AddReply((int)528916, (int)-1, (int)30346);
			return 0;
		}
		var_301_bool = var_56_bool == (int)27992;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_4528(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526716);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526717, (int)27994, (int)27993);
			return 0;
		}
		var_308_bool = var_56_bool == (int)27994;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_4528(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526719, (int)44645, (int)27995);
			@@@var_0_object:AddReply((int)526723, (int)30344, (int)27999);
			return 0;
		}
		var_318_bool = var_56_bool == (int)30344;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_4528(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)528914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528915, (int)27996, (int)30345);
			return 0;
		}
		var_325_bool = var_56_bool == (int)44645;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_4528(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)542293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542294, (int)27996, (int)44646);
			@@@var_0_object:AddReply((int)542295, (int)27996, (int)44647);
			return 0;
		}
		var_335_bool = var_56_bool == (int)27996;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_4528(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)526720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526721, (int)-1, (int)27997);
			@@@var_0_object:AddReply((int)526722, (int)-1, (int)27998);
			return 0;
		}
		var_345_bool = var_56_bool == (int)27987;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_4528(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526711);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526712, (int)-1, (int)27988);
			@@@var_0_object:AddReply((int)542486, (int)44873, (int)44872);
			return 0;
		}
		var_355_bool = var_56_bool == (int)44873;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_4528(var_57_cvector, "Fear");
			@@@var_0_object:SetMessage((int)542487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542488, (int)-1, (int)44874);
			@@@var_0_object:AddReply((int)542489, (int)-1, (int)44875);
			return 0;
		}
		var_365_bool = var_56_bool == (int)27984;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_4528(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526708);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526709, (int)-1, (int)27985);
			return 0;
		}
		var_372_bool = var_56_bool == (int)30337;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_4528(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528909, (int)30339, (int)30338);
			return 0;
		}
		var_379_bool = var_56_bool == (int)30339;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_4528(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)528910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526702, (int)30340, (int)27978);
			return 0;
		}
		var_386_bool = var_56_bool == (int)30340;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_4528(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528911);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528912, (int)27979, (int)30341);
			@@@var_0_object:AddReply((int)526705, (int)-1, (int)27981);
			return 0;
		}
		var_396_bool = var_56_bool == (int)27979;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_4528(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526704, (int)-1, (int)27980);
			return 0;
		}
		var_3_string = true;
		var_402_bool = 0;
		func_6781(var_402_bool);
		if(var_402_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x11c7";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_57_cvector == (int)28989;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_7079();
		}
		var_67_bool = var_57_cvector == (int)29001;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_7028();
		}
		var_151_bool = var_57_cvector == (int)29008;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_7028();
		}
		var_155_bool = var_56_bool == (int)28987;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_5168(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527640);
			@@@var_0_object:ClearReplies();
			var_174_bool = 0;
			var_174_bool = 0;
			var_175_bool = 0; var_176_object = Obj();
			var_176_object = var_1_object;
			func_7547(var_176_object);
			if(var_175_bool != 0) {
				var_183_bool = 0; var_184_object = Obj();
				var_184_object = var_1_object;
				func_7535(var_184_object);
				if(var_183_bool != 0) {
					var_174_bool = 1;
				}
			}
			if(var_174_bool != 0) {
				@@@var_0_object:AddReply((int)527642, (int)28990, (int)28989);
			}
			@@@var_0_object:AddReply((int)527641, (int)-1, (int)28988);
			return 0;
		}
		var_196_bool = var_56_bool == (int)28990;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_5168(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)527643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527644, (int)28992, (int)28991);
			@@@var_0_object:AddReply((int)527655, (int)29003, (int)29002);
			@@@var_0_object:AddReply((int)527660, (int)-1, (int)29007);
			return 0;
		}
		var_209_bool = var_56_bool == (int)29003;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_5168(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527657, (int)28994, (int)29004);
			return 0;
		}
		var_216_bool = var_56_bool == (int)28992;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_5168(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527645);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527646, (int)28994, (int)28993);
			return 0;
		}
		var_223_bool = var_56_bool == (int)28994;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_5168(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527647);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527648, (int)28996, (int)28995);
			return 0;
		}
		var_230_bool = var_56_bool == (int)28996;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_5168(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527649);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527650, (int)28998, (int)28997);
			@@@var_0_object:AddReply((int)527659, (int)-1, (int)29006);
			return 0;
		}
		var_240_bool = var_56_bool == (int)28998;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_5168(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)527651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527652, (int)29000, (int)28999);
			@@@var_0_object:AddReply((int)527661, (int)-1, (int)29008);
			return 0;
		}
		var_250_bool = var_56_bool == (int)29000;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_5168(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)527653);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527654, (int)-1, (int)29001);
			return 0;
		}
		var_3_string = true;
		var_256_bool = 0;
		func_6781(var_256_bool);
		if(var_256_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1447";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_56_bool == (int)41252;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_5560(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)539309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542633, (int)45037, (int)45035);
			@@@var_0_object:AddReply((int)539310, (int)-1, (int)41253);
			@@@var_0_object:AddReply((int)542634, (int)-1, (int)45036);
			return 0;
		}
		var_90_bool = var_56_bool == (int)45037;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_5560(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)542635);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542636, (int)45040, (int)45038);
			@@@var_0_object:AddReply((int)542637, (int)-1, (int)45039);
			return 0;
		}
		var_100_bool = var_56_bool == (int)45040;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_5560(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)542638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542639, (int)45042, (int)45041);
			return 0;
		}
		var_107_bool = var_56_bool == (int)45042;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_5560(var_57_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)542640);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542641, (int)45045, (int)45043);
			@@@var_0_object:AddReply((int)542642, (int)-1, (int)45044);
			return 0;
		}
		var_117_bool = var_56_bool == (int)45045;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_5560(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)542643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542644, (int)45048, (int)45046);
			@@@var_0_object:AddReply((int)542645, (int)-1, (int)45047);
			return 0;
		}
		var_127_bool = var_56_bool == (int)45048;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_5560(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)542646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542647, (int)45054, (int)45049);
			@@@var_0_object:AddReply((int)542648, (int)45051, (int)45050);
			return 0;
		}
		var_137_bool = var_56_bool == (int)45051;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_5560(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)542649);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542650, (int)-1, (int)45052);
			@@@var_0_object:AddReply((int)542651, (int)-1, (int)45053);
			return 0;
		}
		var_147_bool = var_56_bool == (int)45054;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_5560(var_57_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)542652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542653, (int)-1, (int)45055);
			@@@var_0_object:AddReply((int)542654, (int)-1, (int)45056);
			return 0;
		}
		var_3_string = true;
		var_156_bool = 0;
		func_6781(var_156_bool);
		if(var_156_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x15cf";
	
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_cvector)
{
	if((int)1 != 0) {
		func_6591();
		var_61_bool = var_56_int == (int)42548;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_5924(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_86_bool = 0;
		func_6781(var_86_bool);
		if(var_86_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x173b";
	
}


task_22_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_int)
{
	var_58_bool = var_56_int == (int)10;
	if(var_58_bool != 0) {
		func_6060();
		var_60_bool = 0;
		var_60_bool = 0;
		var_61_bool = 0;
		func_6315(var_61_bool);
		if(var_61_bool != 0) {
			var_64_bool = 0;
			func_6029(var_64_bool);
			if(var_64_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool != 0) {
			var_81_bool = 0;
			func_6009(var_81_bool);
			if(var_81_bool != 0) {
				var_100_bool = 0; var_101_object = Obj();
				func_6598(Obj());
				var_102_object = var_101_object;
				func_6465(var_100_bool, var_101_object);
			}
		} else {
			func_6024(var_56_int);
			func_6051();
		}
	}
	return 0;
	
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	func_6242();
	func_6060();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	StopGroup0();
	func_6060();
	var_57_string = "";
	func_6545("Neutral");
	func_6051();
	return 0;
}


task_22_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_bool)
{
	var_57_bool = var_56_bool;
	if(var_57_bool != 0) {
		func_6051();
	} else {
		var_63_string = "";
		func_6545("Neutral");
	}
	return 0;
	
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0;
	IsOverrideActive(var_58_bool);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		EventDisable(0);
		func_6242();
		var_60_bool = 0; var_61_object = Obj();
		var_56_object = var_61_object;
		func_6306(var_60_bool, var_61_object);
		EventEnable(0);
		var_74_object = Obj();
		var_56_object = var_74_object;
		func_8188(var_58_bool, var_74_object);
		var_1188_string = "";
		func_6545("Neutral");
		func_6060();
		func_6051();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	var_56_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_5995(var_55_cvector);
	return 0;
}


func_0(var_0_object, var_307_int, var_308_object)
{
	var_310_object = Obj(); var_311_bool = 0; var_312_int = 0; var_313_bool = 0; var_314_object = Obj(); var_315_bool = 0; var_316_int = 0; var_317_bool = 0;
	var_0_object = var_308_object;
	var_318_bool = 0; var_319_object = Obj(); var_320_float = 0;
	var_308_object = var_319_object;
	func_6320(var_318_bool, var_319_object, (float)70.0);
	var_321_bool = var_318_bool == 0; //@nz
	if(var_321_bool != 0) {
		var_307_int = -2;
		return 8;
	}
	CreateDialog(var_314_object);
	var_322_int = 0;
	func_6775(var_322_int);
	@@var_314_object:SetNPCName(var_322_int);
	var_323_int = 0;
	func_6773(var_323_int);
	@@var_314_object:SetNPCDescription(var_323_int);
	var_324_string = "";
	func_6777(var_324_string);
	@@var_314_object:SetPhoto(var_324_string);
	var_325_string = "";
	func_6779(var_325_string);
	@@var_314_object:SetPhoto2(var_325_string);
	var_326_int = 0;
	func_8098(var_326_int);
	@@var_314_object:SetPlayerName(var_326_int);
	IsOverrideActive(var_315_bool);
	var_327_bool = var_315_bool;
	if(var_327_bool != 0) {
		var_307_int = -2;
		return 8;
	}
	DoDialog(var_314_object);
	var_328_bool = 0; var_329_object = Obj();
	func_6598(Obj());
	var_330_object = var_329_object;
	func_6407(var_328_bool, var_329_object);
	var_331_object = Obj(); var_332_object = Obj();
	var_308_object = var_331_object;
	var_314_object = var_332_object;
	TaskCall(1);
	func_81(var_333_object, var_334_object, var_335_string, var_336_bool, var_331_object, var_332_object);
	TaskReturn();
	@@var_314_object:IsDialogEnd(var_317_bool);
	
Label_63:
	var_414_bool = var_317_bool == 0; //@nz
	if(var_414_bool != 0) {
		sync();
		@@var_314_object:IsDialogEnd(var_317_bool);
		goto Label_63;
	}
	var_308_object = Obj();
	func_6389();
	StopDialog(var_314_object);
	@@var_314_object:GetReturnValue((int)-1);
	var_316_int = var_307_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7170()
{
	SetVariable("k3KaterinaVisit", (int)1);
	return 0;
}


func_7682()
{
	var_112_object = Obj(); var_113_object = Obj();
	CreateDiaryEntry(var_113_object, (int)495, (int)1, (int)528062);
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0;
	var_113_object = var_118_object;
	func_8020(var_117_bool, var_118_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7176()
{
	SetVariable("k4KaterinaVisit", (int)1);
	return 0;
}


func_7182()
{
	SetVariable("k5KaterinaVisit", (int)1);
	return 0;
}


func_7695()
{
	var_102_object = Obj(); var_103_object = Obj();
	CreateDiaryEntry(var_103_object, (int)494, (int)1, (int)528061);
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0;
	var_103_object = var_108_object;
	func_8020(var_107_bool, var_108_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6672(var_171_bool, var_172_object, var_173_float)
{
	var_174_bool = var_172_object == 0; //@nz
	if(var_174_bool != 0) {
		var_171_bool = 0;
		return 0;
	}
	var_176_bool = var_173_float > (int)0;
	if(var_176_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_207_bool = var_173_float < (int)0;
		if(var_207_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_6693;
		}
		var_171_bool = 0;
		return 0;
	}
Label_6693:
	var_178_float = 0;
	var_173_float = var_178_float;
	func_6707(var_178_float);
	var_182_bool = 0; var_183_object = Obj(); var_184_string = ""; var_185_float = 0; var_186_float = 0; var_187_float = 0;
	var_172_object = var_183_object;
	var_173_float = var_185_float;
	func_6267(var_182_bool, var_183_object, "reputation", var_185_float, (float)0, (float)1);
	var_171_bool = 1;
	return 0;
	
}


func_7188()
{
	SetVariable("k6KaterinaVisit", (int)1);
	return 0;
}


func_3095(var_0_object, var_702_int, var_703_object)
{
	var_705_object = Obj(); var_706_bool = 0; var_707_int = 0; var_708_bool = 0; var_709_object = Obj(); var_710_bool = 0; var_711_int = 0; var_712_bool = 0;
	var_0_object = var_703_object;
	var_713_bool = 0; var_714_object = Obj(); var_715_float = 0;
	var_703_object = var_714_object;
	func_6320(var_713_bool, var_714_object, (float)70.0);
	var_716_bool = var_713_bool == 0; //@nz
	if(var_716_bool != 0) {
		var_702_int = -2;
		return 8;
	}
	CreateDialog(var_709_object);
	var_717_int = 0;
	func_6775(var_717_int);
	@@var_709_object:SetNPCName(var_717_int);
	var_718_int = 0;
	func_6773(var_718_int);
	@@var_709_object:SetNPCDescription(var_718_int);
	var_719_string = "";
	func_6777(var_719_string);
	@@var_709_object:SetPhoto(var_719_string);
	var_720_string = "";
	func_6779(var_720_string);
	@@var_709_object:SetPhoto2(var_720_string);
	var_721_int = 0;
	func_8098(var_721_int);
	@@var_709_object:SetPlayerName(var_721_int);
	IsOverrideActive(var_710_bool);
	var_722_bool = var_710_bool;
	if(var_722_bool != 0) {
		var_702_int = -2;
		return 8;
	}
	DoDialog(var_709_object);
	var_723_bool = 0; var_724_object = Obj();
	func_6598(Obj());
	var_725_object = var_724_object;
	func_6407(var_723_bool, var_724_object);
	var_726_object = Obj(); var_727_object = Obj();
	var_703_object = var_726_object;
	var_709_object = var_727_object;
	TaskCall(11);
	func_3176(var_728_object, var_729_object, var_730_string, var_731_bool, var_726_object, var_727_object);
	TaskReturn();
	@@var_709_object:IsDialogEnd(var_712_bool);
	
Label_3158:
	var_796_bool = var_712_bool == 0; //@nz
	if(var_796_bool != 0) {
		sync();
		@@var_709_object:IsDialogEnd(var_712_bool);
		goto Label_3158;
	}
	var_703_object = Obj();
	func_6389();
	StopDialog(var_709_object);
	@@var_709_object:GetReturnValue((int)-1);
	var_711_int = var_702_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7194(var_169_object)
{
	var_171_bool = 0; var_172_object = Obj(); var_173_float = 0;
	var_169_object = var_172_object;
	func_6672(var_171_bool, var_172_object, (float)-0.019999999552965164);
	return 0;
}


func_6171()
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0;
	WaitForAnimEnd();
	var_73_bool = 0;
	func_6315(var_73_bool);
	var_74_bool = var_73_bool == 0; //@nz
	if(var_74_bool != 0) {
		return 12;
	}
	func_6756((int)0);
	var_75_int = var_67_int;
	var_68_int = 0;
	
Label_6185:
	var_88_bool = 0;
	var_88_bool = 0;
	var_90_bool = var_68_int < (int)5;
	if(var_90_bool != 0) {
		var_91_bool = 0;
		func_6315(var_91_bool);
		if(var_91_bool != 0) {
			var_88_bool = 1;
		}
	}
	if(var_88_bool != 0) {
		var_92_bool = var_67_int == 0; //@nz
		if(var_92_bool != 0) {
			Sleep((int)3, var_69_bool);
			var_94_bool = var_69_bool == 0; //@nz
			if(var_94_bool != 0) {
			} else {
		} else {
				irand(var_70_int, var_67_int);
				irand(var_71_int, (int)5);
				var_100_bool = var_71_int != (int)0;
				if(var_100_bool != 0) {
					var_70_int = 0;
				}
				var_102_string = ""; var_103_int = 0;
				var_70_int = var_103_int;
				func_6749(var_102_string, var_103_int);
				PlayAnimation("all", var_102_string);
				WaitForAnimEnd(var_72_bool);
				var_104_bool = var_72_bool == 0; //@nz
				if(var_104_bool == 0) goto Label_6226;
				goto Label_6237;
		}
		Label_6226:
			var_95_bool = 0;
			func_6240(var_95_bool);
			var_96_bool = var_95_bool == 0; //@nz
			if(var_96_bool != 0) {
				goto Label_6237;
			}
			ResetAAS();
			var_68_int = var_68_int + (int)1;
			goto Label_6185;

		}
	}
Label_6237:
	ResetAAS();
	return 12;
	
}


func_7708()
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateDiaryEntry(var_78_object, (int)493, (int)1, (int)528060);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_78_object = var_83_object;
	func_8020(var_82_bool, var_83_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7201()
{
	SetVariable("ook6Katerina2", (int)1);
	return 0;
}


func_7207()
{
	var_173_bool = 0;
	var_173_bool = 0;
	var_174_bool = 0;
	var_174_bool = 0;
	var_175_int = 0; var_176_string = "";
	func_6625(var_175_int, "k6q02");
	var_180_bool = var_175_int != (int)0;
	if(var_180_bool != 0) {
		var_181_int = 0; var_182_string = "";
		func_6625(var_181_int, "k6q02");
		var_184_bool = var_181_int != (int)-1;
		if(var_184_bool != 0) {
			var_174_bool = 1;
		}
	}
	if(var_174_bool != 0) {
		var_185_int = 0; var_186_string = "";
		func_6625(var_185_int, "k6q02");
		var_188_bool = var_185_int != (int)1000;
		if(var_188_bool != 0) {
			var_173_bool = 1;
		}
	}
	if(var_173_bool != 0) {
		SetVariable("k6q02", (int)1000);
		func_7942();
	}
	return 0;
}


func_7721()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)321, (int)1, (int)524737);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_8020(var_71_bool, var_72_object, (int)318);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2096(var_2_object, var_554_string)
{
	var_555_bool = 0;
	func_6781(var_555_bool);
	var_556_bool = var_555_bool == 0; //@nz
	if(var_556_bool != 0) {
		return 0;
	}
	var_557_bool = var_554_string == var_2_object;
	if(var_557_bool != 0) {
		return 0;
	}
	var_558_string = ""; var_559_bool = 0;
	var_554_string = var_558_string;
	var_561_bool = var_554_string == "";
	if(var_561_bool != 0) {
		var_559_bool = 0;
	} else {
		var_559_bool = 1;
	}
	func_6561(var_558_string, var_559_bool);
	var_2_object = var_554_string;
	return 0;
	
}


func_5168(var_2_object, var_1033_string)
{
	var_1034_bool = 0;
	func_6781(var_1034_bool);
	var_1035_bool = var_1034_bool == 0; //@nz
	if(var_1035_bool != 0) {
		return 0;
	}
	var_1036_bool = var_1033_string == var_2_object;
	if(var_1036_bool != 0) {
		return 0;
	}
	var_1037_string = ""; var_1038_bool = 0;
	var_1033_string = var_1037_string;
	var_1040_bool = var_1033_string == "";
	if(var_1040_bool != 0) {
		var_1038_bool = 0;
	} else {
		var_1038_bool = 1;
	}
	func_6561(var_1037_string, var_1038_bool);
	var_2_object = var_1033_string;
	return 0;
	
}


func_6707(var_178_float)
{
	var_179_object = Obj(); var_180_object = Obj();
	CreateFloatVector(var_180_object);
	@@var_180_object:add(var_178_float);
	SendWorldWndMessage((int)16, var_180_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1076(var_0_object, var_1_object, var_2_object, var_3_string, var_445_object, var_446_object)
{
	var_0_object = var_446_object;
	var_1_object = var_445_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_452_bool = 0; var_453_object = Obj();
		var_453_object = var_1_object;
		func_7367(var_453_object);
		if(var_452_bool != 0) {
			var_458_object = Obj(); var_459_object = Obj();
			var_458_object = var_1_object;
			var_459_object = var_0_object;
			func_6822();
			var_462_string = "";
			func_1174(var_446_object, "Neutral");
			@@@var_0_object:SetMessage((int)525282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529188, (int)30639, (int)30638);
		} else {
				var_482_string = "";
				func_1174(var_446_object, "Neutral");
				@@@var_0_object:SetMessage((int)525287);
				@@@var_0_object:ClearReplies();
				var_484_bool = 0; var_485_object = Obj();
				var_485_object = var_1_object;
				func_7379(var_485_object);
				if(var_484_bool != 0) {
					@@@var_0_object:AddReply((int)525288, (int)43687, (int)26656);
				}
				var_493_bool = 0; var_494_object = Obj();
				var_494_object = var_1_object;
				func_7391(var_494_object);
				if(var_493_bool != 0) {
					@@@var_0_object:AddReply((int)525306, (int)26675, (int)26674);
				}
				@@@var_0_object:AddReply((int)525291, (int)-1, (int)26659);
				goto Label_1144;
		}
	}
Label_1144:
	var_474_bool = 0;
	func_6781(var_474_bool);
	if(var_474_bool != 0) {

	Label_1148:
		lshWaitForAnimEnd();
		var_475_string = var_3_string;
		if(var_475_string != 0) {
		} else {
			var_476_string = "";
			var_476_string = var_2_object;
			func_6545(var_476_string);
			goto Label_1148;
	}
		PlayAnimation("all", "idle");

	Label_1163:
		WaitForAnimEnd();
		var_479_string = var_3_string;
		if(var_479_string != 0) {
			goto Label_1173;
		}
		PlayAnimation("all", "idle");
		goto Label_1163;

	}
	goto Label_1173;
	
Label_1173:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x438";


func_7734()
{
	var_159_object = Obj(); var_160_object = Obj();
	CreateDiaryEntry(var_160_object, (int)328, (int)2, (int)524773);
	var_164_bool = 0; var_165_object = Obj(); var_166_int = 0;
	var_160_object = var_165_object;
	func_8020(var_164_bool, var_165_object, (int)326);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6717(var_163_bool, var_164_string, var_165_string)
{
	var_166_object = Obj(); var_167_object = Obj();
	FindActor(var_167_object, var_164_string);
	var_168_bool = var_167_object == 0; //@ne
	if(var_168_bool != 0) {
		var_163_bool = 0;
		return 2;
	}
	Trigger(var_167_object, var_165_string);
	var_163_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7747()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)470, (int)2, (int)527786);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_8020(var_87_bool, var_88_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6729(var_79_float)
{
	var_80_float = 0; var_81_float = 0;
	GetGameTime(var_81_float);
	var_81_float = var_79_float;
	return 2;
}


func_7245(var_122_object)
{
	var_123_object = Obj(); var_124_string = ""; var_125_float = 0;
	func_8048(Obj());
	var_126_object = var_123_object;
	func_8065(var_123_object, "pt_map_theater", (float)2);
	var_146_object = Obj();
	func_8048(var_146_object);
	@@var_122_object:ShowMap(var_146_object);
	return 0;
}


func_6734(var_204_int)
{
	var_205_float = 0; var_206_float = 0;
	GetGameTime(var_206_float);
	var_208_int = 0;
	var_208_int = var_206_float / (int)24;
	var_204_int = (int)1 + var_208_int;
	return 2;
}


func_2639(var_2_object, var_652_string)
{
	var_653_bool = 0;
	func_6781(var_653_bool);
	var_654_bool = var_653_bool == 0; //@nz
	if(var_654_bool != 0) {
		return 0;
	}
	var_655_bool = var_652_string == var_2_object;
	if(var_655_bool != 0) {
		return 0;
	}
	var_656_string = ""; var_657_bool = 0;
	var_652_string = var_656_string;
	var_659_bool = var_652_string == "";
	if(var_659_bool != 0) {
		var_657_bool = 0;
	} else {
		var_657_bool = 1;
	}
	func_6561(var_656_string, var_657_bool);
	var_2_object = var_652_string;
	return 0;
	
}


func_7760()
{
	var_211_object = Obj(); var_212_object = Obj();
	CreateDiaryEntry(var_212_object, (int)475, (int)2, (int)527791);
	var_216_bool = 0; var_217_object = Obj(); var_218_int = 0;
	var_212_object = var_217_object;
	func_8020(var_216_bool, var_217_object, (int)470);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_331_object, var_332_object)
{
	var_0_object = var_332_object;
	var_1_object = var_331_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_338_bool = 0; var_339_object = Obj();
		var_339_object = var_1_object;
		func_7343(var_339_object);
		if(var_338_bool != 0) {
			var_346_string = "";
			func_219(var_332_object, "Neutral");
			@@@var_0_object:SetMessage((int)524653);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526570, (int)27842, (int)27841);
			@@@var_0_object:AddReply((int)526647, (int)27842, (int)27921);
		} else {
				var_369_bool = 0;
				var_369_bool = 0;
				var_370_bool = 0; var_371_object = Obj();
				var_371_object = var_1_object;
				func_7355(var_371_object);
				var_376_bool = var_370_bool == 0; //@nz
				if(var_376_bool != 0) {
					var_377_bool = 0; var_378_object = Obj();
					var_378_object = var_1_object;
					func_7595(var_378_object);
					if(var_377_bool != 0) {
						var_369_bool = 1;
					}
				}
				if(var_369_bool != 0) {
					var_383_object = Obj(); var_384_object = Obj();
					var_383_object = var_1_object;
					var_384_object = var_0_object;
					func_7126();
					var_387_string = "";
					func_219(var_332_object, "Neutral");
					@@@var_0_object:SetMessage((int)526576);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)526585, (int)27857, (int)27856);
					@@@var_0_object:AddReply((int)541708, (int)27859, (int)43895);
					goto Label_189;
				}
				var_395_string = "";
				func_219(var_332_object, "Neutral");
				@@@var_0_object:SetMessage((int)524662);
				@@@var_0_object:ClearReplies();
				var_397_bool = 0; var_398_object = Obj();
				var_398_object = var_1_object;
				func_7355(var_398_object);
				if(var_397_bool != 0) {
					@@@var_0_object:AddReply((int)524748, (int)27892, (int)26072);
				}
				var_402_bool = 0; var_403_object = Obj();
				var_403_object = var_1_object;
				func_7607(var_403_object);
				if(var_402_bool != 0) {
					@@@var_0_object:AddReply((int)526625, (int)43897, (int)27899);
				}
				@@@var_0_object:AddReply((int)524663, (int)-1, (int)26002);
				goto Label_189;
		}
	}
Label_189:
	var_361_bool = 0;
	func_6781(var_361_bool);
	if(var_361_bool != 0) {

	Label_193:
		lshWaitForAnimEnd();
		var_362_string = var_3_string;
		if(var_362_string != 0) {
		} else {
			var_363_string = "";
			var_363_string = var_2_object;
			func_6545(var_363_string);
			goto Label_193;
	}
		PlayAnimation("all", "idle");

	Label_208:
		WaitForAnimEnd();
		var_366_string = var_3_string;
		if(var_366_string != 0) {
			goto Label_218;
		}
		PlayAnimation("all", "idle");
		goto Label_208;

	}
	goto Label_218;
	
Label_218:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_6743(var_303_bool, var_304_int)
{
	var_305_int = 0;
	func_6734(var_305_int);
	var_303_bool = var_305_int == var_304_int;
	return 0;
}


func_7261()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_6749(var_81_string, var_82_int)
{
	var_83_string = ""; var_84_string = "";
	var_85_int = var_82_int;
	if(var_85_int != 0) {
		"idle" = "idle" + var_82_int;
	}
	var_84_string = var_81_string;
	return 2;
}


func_7773()
{
	var_157_object = Obj(); var_158_object = Obj();
	CreateDiaryEntry(var_158_object, (int)474, (int)2, (int)527790);
	var_162_bool = 0; var_163_object = Obj(); var_164_int = 0;
	var_158_object = var_163_object;
	func_8020(var_162_bool, var_163_object, (int)470);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6240(var_95_bool)
{
	var_95_bool = 1;
	return 0;
}


func_6242()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_7267(var_114_object)
{
	var_115_object = Obj(); var_116_string = ""; var_117_float = 0;
	func_8048(Obj());
	var_118_object = var_115_object;
	func_8065(var_115_object, "pt_map_kapella", (float)2);
	var_138_object = Obj();
	func_8048(var_138_object);
	@@var_114_object:ShowMap(var_138_object);
	return 0;
}


func_6756(var_75_int)
{
	var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_bool = 0;
	var_78_int = 0;
	
Label_6758:
	var_81_string = ""; var_82_int = 0;
	var_78_int = var_82_int;
	func_6749(var_81_string, var_82_int);
	HasAnimation(var_79_bool, "all", var_81_string);
	var_86_bool = var_79_bool == 0; //@nz
	if(var_86_bool != 0) {
	} else {
		var_78_int = var_78_int + (int)1;
		goto Label_6758;
	}
	var_78_int = var_75_int;
	return 4;
	
}


func_6247(var_71_float, var_72_object)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetPosition(var_76_cvector);
	@@var_72_object:GetPosition(var_77_cvector);
	var_78_cvector = var_77_cvector - var_76_cvector;
	var_71_float = var_78_cvector | var_78_cvector;
	return 6;
}


func_3176(var_0_object, var_1_object, var_2_object, var_3_string, var_726_object, var_727_object)
{
	var_0_object = var_727_object;
	var_1_object = var_726_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_733_bool = 0; var_734_object = Obj();
		var_734_object = var_1_object;
		func_7475(var_734_object);
		if(var_733_bool != 0) {
			var_739_object = Obj(); var_740_object = Obj();
			var_739_object = var_1_object;
			var_740_object = var_0_object;
			func_6968();
			var_743_object = Obj(); var_744_object = Obj();
			var_743_object = var_1_object;
			var_744_object = var_0_object;
			func_7182();
			var_747_string = "";
			func_3289(var_727_object, "Neutral");
			@@@var_0_object:SetMessage((int)525891);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540863, (int)42926, (int)42925);
			@@@var_0_object:AddReply((int)540861, (int)42926, (int)42923);
		} else {
				var_770_string = "";
				func_3289(var_727_object, "Neutral");
				@@@var_0_object:SetMessage((int)525894);
				@@@var_0_object:ClearReplies();
				var_772_bool = 0; var_773_object = Obj();
				var_773_object = var_1_object;
				func_7487(var_773_object);
				if(var_772_bool != 0) {
					@@@var_0_object:AddReply((int)525895, (int)27188, (int)27187);
				}
				var_781_bool = 0; var_782_object = Obj();
				var_782_object = var_1_object;
				func_7499(var_782_object);
				if(var_781_bool != 0) {
					@@@var_0_object:AddReply((int)525932, (int)30523, (int)27224);
				}
				@@@var_0_object:AddReply((int)525898, (int)-1, (int)27190);
				@@@var_0_object:AddReply((int)529078, (int)-1, (int)30522);
				goto Label_3259;
		}
	}
Label_3259:
	var_762_bool = 0;
	func_6781(var_762_bool);
	if(var_762_bool != 0) {

	Label_3263:
		lshWaitForAnimEnd();
		var_763_string = var_3_string;
		if(var_763_string != 0) {
		} else {
			var_764_string = "";
			var_764_string = var_2_object;
			func_6545(var_764_string);
			goto Label_3263;
	}
		PlayAnimation("all", "idle");

	Label_3278:
		WaitForAnimEnd();
		var_767_string = var_3_string;
		if(var_767_string != 0) {
			goto Label_3288;
		}
		PlayAnimation("all", "idle");
		goto Label_3278;

	}
	goto Label_3288;
	
Label_3288:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc6c";


func_7786()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)471, (int)2, (int)527787);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_8020(var_110_bool, var_111_object, (int)470);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6255(var_190_bool, var_191_object, var_192_string)
{
	var_193_bool = 0; var_194_bool = 0;
	var_197_bool = IsFuncExist(var_191_object, "HasProperty", (int)2);
	var_198_bool = var_197_bool == 0; //@nz
	if(var_198_bool != 0) {
		var_190_bool = 0;
		return 2;
	}
	@@var_191_object:HasProperty(var_192_string, var_194_bool);
	var_194_bool = var_190_bool;
	return 2;
}


func_7283(var_114_object)
{
	var_115_object = Obj(); var_116_string = ""; var_117_float = 0;
	func_8048(Obj());
	var_118_object = var_115_object;
	func_8065(var_115_object, "pt_map_lara", (float)2);
	var_138_object = Obj();
	func_8048(var_138_object);
	@@var_114_object:ShowMap(var_138_object);
	return 0;
}


func_6773(var_137_int)
{
	var_137_int = 515539;
	return 0;
}


func_7799()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)344, (int)2, (int)525566);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_8020(var_87_bool, var_88_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6775(var_136_int)
{
	var_136_int = 502864;
	return 0;
}


func_6777(var_138_string)
{
	var_138_string = "ui/NPC_Katerina.png";
	return 0;
}


func_6267(var_182_bool, var_183_object, var_184_string, var_185_float, var_186_float, var_187_float)
{
	var_188_float = 0; var_189_float = 0;
	var_190_bool = 0; var_191_object = Obj(); var_192_string = "";
	var_183_object = var_191_object;
	var_184_string = var_192_string;
	func_6255(var_190_bool, var_191_object, var_192_string);
	var_199_bool = var_190_bool == 0; //@nz
	if(var_199_bool != 0) {
		var_182_bool = 0;
		return 2;
	}
	@@var_183_object:GetProperty(var_184_string, var_189_float);
	var_200_float = 0; var_201_float = 0; var_202_float = 0; var_203_float = 0;
	var_201_float = var_189_float + var_185_float;
	var_186_float = var_202_float;
	var_187_float = var_203_float;
	func_6614(var_200_float, var_201_float, var_202_float, var_203_float);
	@@var_183_object:SetProperty(var_184_string, var_200_float);
	var_182_bool = 1;
	return 2;
}


func_6779(var_139_string)
{
	var_139_string = "ui/NPC_Katerina_b.png";
	return 0;
}


func_6781(var_131_bool)
{
	var_131_bool = 1;
	return 0;
}


func_6783(var_225_object)
{
	var_227_bool = 0; var_228_object = Obj(); var_229_float = 0;
	var_225_object = var_228_object;
	func_6672(var_227_bool, var_228_object, (float)0.05000000074505806);
	return 0;
}


func_7299(var_175_object)
{
	var_177_bool = 0; var_178_object = Obj(); var_179_float = 0;
	var_175_object = var_178_object;
	func_6672(var_177_bool, var_178_object, (float)0.10000000149011612);
	return 0;
}


func_7812()
{
	var_202_object = Obj(); var_203_object = Obj();
	CreateDiaryEntry(var_203_object, (int)349, (int)2, (int)525571);
	var_207_bool = 0; var_208_object = Obj(); var_209_int = 0;
	var_203_object = var_208_object;
	func_8020(var_207_bool, var_208_object, (int)344);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6790()
{
	SetVariable("k1q01", (int)3);
	func_7721();
	return 0;
}


func_7306(var_210_object)
{
	var_212_bool = 0; var_213_object = Obj(); var_214_float = 0;
	var_210_object = var_213_object;
	func_6672(var_212_bool, var_213_object, (float)-0.10000000149011612);
	return 0;
}


func_6799()
{
	var_141_object = Obj(); var_142_object = Obj();
	SetVariable("k1q02", (int)2);
	func_8048(Obj());
	var_145_object = var_142_object;
	var_156_float = 0;
	func_6729(var_156_float);
	@@var_142_object:AddMark("k1q02KaterinaGotoGeorg", "pt_map_georg", (int)0, (int)524778, var_156_float);
	func_7734();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7313()
{
	SetVariable("resque_list", (int)1);
	func_8184();
	return 0;
}


func_6289(var_178_object, var_179_string, var_180_int)
{
	var_181_int = 0; var_182_int = 0;
	@@var_178_object:GetProperty(var_179_string, var_182_int);
	var_183_int = var_182_int + var_180_int;
	@@var_178_object:SetProperty(var_179_string, var_183_int);
	return 2;
}


func_7825()
{
	var_123_object = Obj(); var_124_object = Obj();
	CreateDiaryEntry(var_124_object, (int)348, (int)2, (int)525570);
	var_128_bool = 0; var_129_object = Obj(); var_130_int = 0;
	var_124_object = var_129_object;
	func_8020(var_128_bool, var_129_object, (int)344);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1174(var_2_object, var_462_string)
{
	var_463_bool = 0;
	func_6781(var_463_bool);
	var_464_bool = var_463_bool == 0; //@nz
	if(var_464_bool != 0) {
		return 0;
	}
	var_465_bool = var_462_string == var_2_object;
	if(var_465_bool != 0) {
		return 0;
	}
	var_466_string = ""; var_467_bool = 0;
	var_462_string = var_466_string;
	var_469_bool = var_462_string == "";
	if(var_469_bool != 0) {
		var_467_bool = 0;
	} else {
		var_467_bool = 1;
	}
	func_6561(var_466_string, var_467_bool);
	var_2_object = var_462_string;
	return 0;
	
}


func_6296(var_64_bool, var_65_cvector)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0;
	GetPosition(var_69_cvector);
	var_70_cvector = var_65_cvector - var_69_cvector;
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_72_float, var_73_float, var_71_bool);
	var_71_bool = var_64_bool;
	return 6;
}


func_5785(var_0_object, var_1132_int, var_1133_object)
{
	var_1135_object = Obj(); var_1136_bool = 0; var_1137_int = 0; var_1138_bool = 0; var_1139_object = Obj(); var_1140_bool = 0; var_1141_int = 0; var_1142_bool = 0;
	var_0_object = var_1133_object;
	var_1143_bool = 0; var_1144_object = Obj(); var_1145_float = 0;
	var_1133_object = var_1144_object;
	func_6320(var_1143_bool, var_1144_object, (float)70.0);
	var_1146_bool = var_1143_bool == 0; //@nz
	if(var_1146_bool != 0) {
		var_1132_int = -2;
		return 8;
	}
	CreateDialog(var_1139_object);
	var_1147_int = 0;
	func_6775(var_1147_int);
	@@var_1139_object:SetNPCName(var_1147_int);
	var_1148_int = 0;
	func_6773(var_1148_int);
	@@var_1139_object:SetNPCDescription(var_1148_int);
	var_1149_string = "";
	func_6777(var_1149_string);
	@@var_1139_object:SetPhoto(var_1149_string);
	var_1150_string = "";
	func_6779(var_1150_string);
	@@var_1139_object:SetPhoto2(var_1150_string);
	var_1151_int = 0;
	func_8098(var_1151_int);
	@@var_1139_object:SetPlayerName(var_1151_int);
	IsOverrideActive(var_1140_bool);
	var_1152_bool = var_1140_bool;
	if(var_1152_bool != 0) {
		var_1132_int = -2;
		return 8;
	}
	DoDialog(var_1139_object);
	var_1153_bool = 0; var_1154_object = Obj();
	func_6598(Obj());
	var_1155_object = var_1154_object;
	func_6407(var_1153_bool, var_1154_object);
	var_1156_object = Obj(); var_1157_object = Obj();
	var_1133_object = var_1156_object;
	var_1139_object = var_1157_object;
	TaskCall(21);
	func_5866(var_1158_object, var_1159_object, var_1160_string, var_1161_bool, var_1156_object, var_1157_object);
	TaskReturn();
	@@var_1139_object:IsDialogEnd(var_1142_bool);
	
Label_5848:
	var_1186_bool = var_1142_bool == 0; //@nz
	if(var_1186_bool != 0) {
		sync();
		@@var_1139_object:IsDialogEnd(var_1142_bool);
		goto Label_5848;
	}
	var_1133_object = Obj();
	func_6389();
	StopDialog(var_1139_object);
	@@var_1139_object:GetReturnValue((int)-1);
	var_1141_int = var_1132_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7322(var_92_object)
{
	@@var_92_object:SetReturnValue((int)2000);
	return 0;
}


func_7838()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)345, (int)2, (int)525567);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_8020(var_110_bool, var_111_object, (int)344);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7327(var_120_object)
{
	var_121_object = Obj(); var_122_string = ""; var_123_float = 0;
	func_8048(Obj());
	var_124_object = var_121_object;
	func_8065(var_121_object, "pt_map_petr", (float)2);
	var_144_object = Obj();
	func_8048(var_144_object);
	@@var_120_object:ShowMap(var_144_object);
	return 0;
}


func_6306(var_60_bool, var_61_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	@@var_61_object:GetPosition(var_63_cvector);
	var_64_bool = 0; var_65_cvector = CVector(0,0,0);
	var_63_cvector = var_65_cvector;
	func_6296(var_64_bool, var_65_cvector);
	var_64_bool = var_60_bool;
	return 2;
}


func_1699(var_0_object, var_77_int, var_78_object)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0;
	var_0_object = var_78_object;
	var_88_bool = 0; var_89_object = Obj(); var_90_float = 0;
	var_78_object = var_89_object;
	func_6320(var_88_bool, var_89_object, (float)70.0);
	var_135_bool = var_88_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	CreateDialog(var_84_object);
	var_136_int = 0;
	func_6775(var_136_int);
	@@var_84_object:SetNPCName(var_136_int);
	var_137_int = 0;
	func_6773(var_137_int);
	@@var_84_object:SetNPCDescription(var_137_int);
	var_138_string = "";
	func_6777(var_138_string);
	@@var_84_object:SetPhoto(var_138_string);
	var_139_string = "";
	func_6779(var_139_string);
	@@var_84_object:SetPhoto2(var_139_string);
	var_140_int = 0;
	func_8098(var_140_int);
	@@var_84_object:SetPlayerName(var_140_int);
	IsOverrideActive(var_85_bool);
	var_148_bool = var_85_bool;
	if(var_148_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	DoDialog(var_84_object);
	var_149_bool = 0; var_150_object = Obj();
	func_6598(Obj());
	var_151_object = var_150_object;
	func_6407(var_149_bool, var_150_object);
	var_244_object = Obj(); var_245_object = Obj();
	var_78_object = var_244_object;
	var_84_object = var_245_object;
	TaskCall(5);
	func_1780(var_246_object, var_247_object, var_248_string, var_249_bool, var_244_object, var_245_object);
	TaskReturn();
	@@var_84_object:IsDialogEnd(var_87_bool);
	
Label_1762:
	var_293_bool = var_87_bool == 0; //@nz
	if(var_293_bool != 0) {
		sync();
		@@var_84_object:IsDialogEnd(var_87_bool);
		goto Label_1762;
	}
	var_78_object = Obj();
	func_6389();
	StopDialog(var_84_object);
	@@var_84_object:GetReturnValue((int)-1);
	var_86_int = var_77_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6822()
{
	SetVariable("ook2Katerina1", (int)1);
	return 0;
}


func_6315(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0;
	IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
	return 2;
}


func_6828()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("k2q02", (int)1);
	func_8048(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_6729(var_79_float);
	@@var_65_object:AddMark("k2q02KaterinaGotoLara", "pt_map_lara", (int)0, (int)539380, var_79_float);
	func_7747();
	func_7786();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7851()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)378, (int)2, (int)525784);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_8020(var_87_bool, var_88_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7343(var_338_bool)
{
	var_340_int = 0; var_341_string = "";
	func_6625(var_340_int, "k1q01");
	var_345_bool = var_340_int == (int)2;
	if(var_345_bool != 0) {
		var_338_bool = 1;
		return 0;
	}
	var_338_bool = 0;
	return 0;
}


func_6320(var_88_bool, var_89_object, var_90_float)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_bool = 0; var_108_bool = 0;
	@@var_89_object:GetPosition(var_101_cvector);
	@@var_89_object:GetEyesHeight(var_100_float);
	var_109_float = GetByIndex(var_101_cvector, 1);
	var_109_float = var_109_float + var_100_float;
	SetByIndex(var_101_cvector, 1) = var_109_float;
	GetPosition(var_102_cvector);
	GetEyesHeight(var_100_float);
	var_110_float = GetByIndex(var_102_cvector, 1);
	var_110_float = var_110_float + var_100_float;
	SetByIndex(var_102_cvector, 1) = var_110_float;
	var_103_cvector = var_101_cvector - var_102_cvector;
	var_111_float = GetByIndex(var_103_cvector, 1);
	SetByIndex(var_103_cvector, 1) = (float)0;
	var_112_int = var_103_cvector | var_103_cvector;
	var_113_float = sqrt(var_112_int);
	var_103_cvector = var_103_cvector / var_113_float;
	var_104_cvector = -var_103_cvector;
	var_114_float = var_103_cvector * var_90_float;
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0);
	var_116_cvector = var_104_cvector ^ CVector(0.0, 1.0, 0.0);
	func_6604(var_115_cvector, var_116_cvector);
	var_124_float = var_115_cvector * (int)25;
	var_125_int = var_114_float + var_124_float;
	var_105_cvector = var_125_int - CVector(0.0, 10.0, 0.0);
	var_106_cvector = var_102_cvector + var_105_cvector;
	IsOverrideActive(var_107_bool);
	var_127_bool = var_107_bool;
	if(var_127_bool != 0) {
		var_88_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_106_cvector, var_104_cvector, (bool)1);
	var_129_float = GetByIndex(var_105_cvector, 0);
	var_130_float = GetByIndex(var_105_cvector, 2);
	Rotate(var_129_float, var_130_float);
	var_131_bool = 0;
	func_6781(var_131_bool);
	if(var_131_bool != 0) {
	} else {
		HasAnimationTrack(var_108_bool, "head");
		var_133_bool = var_108_bool;
		if(var_133_bool == 0) goto Label_6383;
		LookAsyncCamera("head");
	}
Label_6383:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_88_bool = 1;
	return 18;
	
}


func_3765(var_0_object, var_929_int, var_930_object)
{
	var_932_object = Obj(); var_933_bool = 0; var_934_int = 0; var_935_bool = 0; var_936_object = Obj(); var_937_bool = 0; var_938_int = 0; var_939_bool = 0;
	var_0_object = var_930_object;
	var_940_bool = 0; var_941_object = Obj(); var_942_float = 0;
	var_930_object = var_941_object;
	func_6320(var_940_bool, var_941_object, (float)70.0);
	var_943_bool = var_940_bool == 0; //@nz
	if(var_943_bool != 0) {
		var_929_int = -2;
		return 8;
	}
	CreateDialog(var_936_object);
	var_944_int = 0;
	func_6775(var_944_int);
	@@var_936_object:SetNPCName(var_944_int);
	var_945_int = 0;
	func_6773(var_945_int);
	@@var_936_object:SetNPCDescription(var_945_int);
	var_946_string = "";
	func_6777(var_946_string);
	@@var_936_object:SetPhoto(var_946_string);
	var_947_string = "";
	func_6779(var_947_string);
	@@var_936_object:SetPhoto2(var_947_string);
	var_948_int = 0;
	func_8098(var_948_int);
	@@var_936_object:SetPlayerName(var_948_int);
	IsOverrideActive(var_937_bool);
	var_949_bool = var_937_bool;
	if(var_949_bool != 0) {
		var_929_int = -2;
		return 8;
	}
	DoDialog(var_936_object);
	var_950_bool = 0; var_951_object = Obj();
	func_6598(Obj());
	var_952_object = var_951_object;
	func_6407(var_950_bool, var_951_object);
	var_953_object = Obj(); var_954_object = Obj();
	var_930_object = var_953_object;
	var_936_object = var_954_object;
	TaskCall(13);
	func_3846(var_955_object, var_956_object, var_957_string, var_958_bool, var_953_object, var_954_object);
	TaskReturn();
	@@var_936_object:IsDialogEnd(var_939_bool);
	
Label_3828:
	var_998_bool = var_939_bool == 0; //@nz
	if(var_998_bool != 0) {
		sync();
		@@var_936_object:IsDialogEnd(var_939_bool);
		goto Label_3828;
	}
	var_930_object = Obj();
	func_6389();
	StopDialog(var_936_object);
	@@var_936_object:GetReturnValue((int)-1);
	var_938_int = var_929_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4278(var_0_object, var_800_int, var_801_object)
{
	var_803_object = Obj(); var_804_bool = 0; var_805_int = 0; var_806_bool = 0; var_807_object = Obj(); var_808_bool = 0; var_809_int = 0; var_810_bool = 0;
	var_0_object = var_801_object;
	var_811_bool = 0; var_812_object = Obj(); var_813_float = 0;
	var_801_object = var_812_object;
	func_6320(var_811_bool, var_812_object, (float)70.0);
	var_814_bool = var_811_bool == 0; //@nz
	if(var_814_bool != 0) {
		var_800_int = -2;
		return 8;
	}
	CreateDialog(var_807_object);
	var_815_int = 0;
	func_6775(var_815_int);
	@@var_807_object:SetNPCName(var_815_int);
	var_816_int = 0;
	func_6773(var_816_int);
	@@var_807_object:SetNPCDescription(var_816_int);
	var_817_string = "";
	func_6777(var_817_string);
	@@var_807_object:SetPhoto(var_817_string);
	var_818_string = "";
	func_6779(var_818_string);
	@@var_807_object:SetPhoto2(var_818_string);
	var_819_int = 0;
	func_8098(var_819_int);
	@@var_807_object:SetPlayerName(var_819_int);
	IsOverrideActive(var_808_bool);
	var_820_bool = var_808_bool;
	if(var_820_bool != 0) {
		var_800_int = -2;
		return 8;
	}
	DoDialog(var_807_object);
	var_821_bool = 0; var_822_object = Obj();
	func_6598(Obj());
	var_823_object = var_822_object;
	func_6407(var_821_bool, var_822_object);
	var_824_object = Obj(); var_825_object = Obj();
	var_801_object = var_824_object;
	var_807_object = var_825_object;
	TaskCall(15);
	func_4359(var_826_object, var_827_object, var_828_string, var_829_bool, var_824_object, var_825_object);
	TaskReturn();
	@@var_807_object:IsDialogEnd(var_810_bool);
	
Label_4341:
	var_925_bool = var_810_bool == 0; //@nz
	if(var_925_bool != 0) {
		sync();
		@@var_807_object:IsDialogEnd(var_810_bool);
		goto Label_4341;
	}
	var_801_object = Obj();
	func_6389();
	StopDialog(var_807_object);
	@@var_807_object:GetReturnValue((int)-1);
	var_809_int = var_800_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7864()
{
	var_161_object = Obj(); var_162_object = Obj();
	CreateDiaryEntry(var_162_object, (int)383, (int)2, (int)525789);
	var_166_bool = 0; var_167_object = Obj(); var_168_int = 0;
	var_162_object = var_167_object;
	func_8020(var_166_bool, var_167_object, (int)378);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7355(var_370_bool)
{
	var_372_int = 0; var_373_string = "";
	func_6625(var_372_int, "k1q02");
	var_375_bool = var_372_int == (int)1;
	if(var_375_bool != 0) {
		var_370_bool = 1;
		return 0;
	}
	var_370_bool = 0;
	return 0;
}


func_7877()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)379, (int)2, (int)525785);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_8020(var_110_bool, var_111_object, (int)378);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6854()
{
	SetVariable("k2q02", (int)1000);
	func_7773();
	return 0;
}


func_7367(var_452_bool)
{
	var_454_int = 0; var_455_string = "";
	func_6625(var_454_int, "ook2Katerina1");
	var_457_bool = var_454_int == (int)0;
	if(var_457_bool != 0) {
		var_452_bool = 1;
		return 0;
	}
	var_452_bool = 0;
	return 0;
}


func_6863()
{
	SetVariable("k2q02", (int)1000);
	func_7760();
	return 0;
}


func_7890()
{
	var_80_object = Obj(); var_81_object = Obj();
	CreateDiaryEntry(var_81_object, (int)397, (int)2, (int)525935);
	var_85_bool = 0; var_86_object = Obj(); var_87_int = 0;
	var_81_object = var_86_object;
	func_8020(var_85_bool, var_86_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7379(var_484_bool)
{
	var_486_int = 0; var_487_string = "";
	func_6625(var_486_int, "k2q02");
	var_489_bool = var_486_int == (int)0;
	if(var_489_bool != 0) {
		var_484_bool = 1;
		return 0;
	}
	var_484_bool = 0;
	return 0;
}


func_6872()
{
	SetVariable("ook3Katerina1", (int)1);
	return 0;
}


func_3289(var_2_object, var_747_string)
{
	var_748_bool = 0;
	func_6781(var_748_bool);
	var_749_bool = var_748_bool == 0; //@nz
	if(var_749_bool != 0) {
		return 0;
	}
	var_750_bool = var_747_string == var_2_object;
	if(var_750_bool != 0) {
		return 0;
	}
	var_751_string = ""; var_752_bool = 0;
	var_747_string = var_751_string;
	var_754_bool = var_747_string == "";
	if(var_754_bool != 0) {
		var_752_bool = 0;
	} else {
		var_752_bool = 1;
	}
	func_6561(var_751_string, var_752_bool);
	var_2_object = var_747_string;
	return 0;
	
}


func_219(var_2_object, var_346_string)
{
	var_347_bool = 0;
	func_6781(var_347_bool);
	var_348_bool = var_347_bool == 0; //@nz
	if(var_348_bool != 0) {
		return 0;
	}
	var_349_bool = var_346_string == var_2_object;
	if(var_349_bool != 0) {
		return 0;
	}
	var_350_string = ""; var_351_bool = 0;
	var_346_string = var_350_string;
	var_353_bool = var_346_string == "";
	if(var_353_bool != 0) {
		var_351_bool = 0;
	} else {
		var_351_bool = 1;
	}
	func_6561(var_350_string, var_351_bool);
	var_2_object = var_346_string;
	return 0;
	
}


func_6878()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("k3q02", (int)1);
	func_8048(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_6729(var_79_float);
	@@var_65_object:AddMark("k3q02KaterinaGotoJulia", "pt_map_julia", (int)0, (int)525572, var_79_float);
	func_7799();
	func_7838();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7391(var_493_bool)
{
	var_495_int = 0; var_496_string = "";
	func_6625(var_495_int, "k2q02");
	var_498_bool = var_495_int == (int)3;
	if(var_498_bool != 0) {
		var_493_bool = 1;
		return 0;
	}
	var_493_bool = 0;
	return 0;
}


func_7903()
{
	var_155_object = Obj(); var_156_object = Obj();
	CreateDiaryEntry(var_156_object, (int)404, (int)2, (int)525942);
	var_160_bool = 0; var_161_object = Obj(); var_162_int = 0;
	var_156_object = var_161_object;
	func_8020(var_160_bool, var_161_object, (int)397);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5866(var_0_object, var_1_object, var_2_object, var_3_string, var_1156_object, var_1157_object)
{
	var_0_object = var_1157_object;
	var_1_object = var_1156_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1163_string = "";
		func_5924(var_1157_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_5894;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16ee";
	}
Label_5894:
	var_1178_bool = 0;
	func_6781(var_1178_bool);
	if(var_1178_bool != 0) {

	Label_5898:
		lshWaitForAnimEnd();
		var_1179_string = var_3_string;
		if(var_1179_string != 0) {
		} else {
			var_1180_string = "";
			var_1180_string = var_2_object;
			func_6545(var_1180_string);
			goto Label_5898;
	}
		PlayAnimation("all", "idle");

	Label_5913:
		WaitForAnimEnd();
		var_1183_string = var_3_string;
		if(var_1183_string != 0) {
			goto Label_5923;
		}
		PlayAnimation("all", "idle");
		goto Label_5913;
	}
	goto Label_5923;
	
Label_5923:
	return 0;
	
}


func_7403(var_540_bool)
{
	var_542_int = 0; var_543_string = "";
	func_6625(var_542_int, "ook3Katerina1");
	var_545_bool = var_542_int == (int)0;
	if(var_545_bool != 0) {
		var_540_bool = 1;
		return 0;
	}
	var_540_bool = 0;
	return 0;
}


func_7916()
{
	var_103_object = Obj(); var_104_object = Obj();
	CreateDiaryEntry(var_104_object, (int)398, (int)2, (int)525936);
	var_108_bool = 0; var_109_object = Obj(); var_110_int = 0;
	var_104_object = var_109_object;
	func_8020(var_108_bool, var_109_object, (int)397);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1780(var_0_object, var_1_object, var_2_object, var_3_string, var_244_object, var_245_object)
{
	var_0_object = var_245_object;
	var_1_object = var_244_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_251_string = "";
		func_1838(var_245_object, "Neutral");
		@@@var_0_object:SetMessage((int)525492);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525493, (int)-1, (int)26849);
		@@@var_0_object:AddReply((int)526251, (int)-1, (int)27524);
		goto Label_1808;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6f8";
	}
Label_1808:
	var_275_bool = 0;
	func_6781(var_275_bool);
	if(var_275_bool != 0) {

	Label_1812:
		lshWaitForAnimEnd();
		var_276_string = var_3_string;
		if(var_276_string != 0) {
		} else {
			var_277_string = "";
			var_277_string = var_2_object;
			func_6545(var_277_string);
			goto Label_1812;
	}
		PlayAnimation("all", "idle");

	Label_1827:
		WaitForAnimEnd();
		var_290_string = var_3_string;
		if(var_290_string != 0) {
			goto Label_1837;
		}
		PlayAnimation("all", "idle");
		goto Label_1827;
	}
	goto Label_1837;
	
Label_1837:
	return 0;
	
}


func_6389()
{
	var_295_bool = 0; var_296_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_298_bool = 0;
	func_6781(var_298_bool);
	if(var_298_bool != 0) {
	} else {
		HasAnimationTrack(var_296_bool, "head");
		var_300_bool = var_296_bool;
		if(var_300_bool == 0) goto Label_6406;
		UnlookAsync("head");
	}
Label_6406:
	return 2;
	
}


func_7415(var_579_bool)
{
	var_581_int = 0; var_582_string = "";
	func_6625(var_581_int, "k3q02");
	var_584_bool = var_581_int == (int)0;
	if(var_584_bool != 0) {
		var_579_bool = 1;
		return 0;
	}
	var_579_bool = 0;
	return 0;
}


func_6904()
{
	SetVariable("k3q02", (int)1000);
	func_7825();
	return 0;
}


func_7929()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)500, (int)2, (int)528766);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_8020(var_87_bool, var_88_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6913()
{
	SetVariable("k3q02", (int)1000);
	func_7812();
	return 0;
}


func_7427(var_588_bool)
{
	var_590_int = 0; var_591_string = "";
	func_6625(var_590_int, "k3q02");
	var_593_bool = var_590_int == (int)3;
	if(var_593_bool != 0) {
		var_588_bool = 1;
		return 0;
	}
	var_588_bool = 0;
	return 0;
}


func_3846(var_0_object, var_1_object, var_2_object, var_3_string, var_953_object, var_954_object)
{
	var_0_object = var_954_object;
	var_1_object = var_953_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_960_string = "";
		func_3919(var_954_object, "Neutral");
		@@@var_0_object:SetMessage((int)526186);
		@@@var_0_object:ClearReplies();
		var_969_bool = 0; var_970_object = Obj();
		var_970_object = var_1_object;
		func_7511(var_970_object);
		if(var_969_bool != 0) {
			@@@var_0_object:AddReply((int)526187, (int)30128, (int)27468);
		}
		var_978_bool = 0; var_979_object = Obj();
		var_979_object = var_1_object;
		func_7523(var_979_object);
		if(var_978_bool != 0) {
			@@@var_0_object:AddReply((int)526203, (int)30138, (int)27484);
		}
		@@@var_0_object:AddReply((int)526190, (int)-1, (int)27471);
		goto Label_3889;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf0a";
	}
Label_3889:
	var_990_bool = 0;
	func_6781(var_990_bool);
	if(var_990_bool != 0) {

	Label_3893:
		lshWaitForAnimEnd();
		var_991_string = var_3_string;
		if(var_991_string != 0) {
		} else {
			var_992_string = "";
			var_992_string = var_2_object;
			func_6545(var_992_string);
			goto Label_3893;
	}
		PlayAnimation("all", "idle");

	Label_3908:
		WaitForAnimEnd();
		var_995_string = var_3_string;
		if(var_995_string != 0) {
			goto Label_3918;
		}
		PlayAnimation("all", "idle");
		goto Label_3908;
	}
	goto Label_3918;
	
Label_3918:
	return 0;
	
}


func_6407(var_149_bool, var_150_object)
{
	var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0;
	GetVariable("voice_common", var_156_int);
	var_159_int = var_156_int;
	if(var_159_int != 0) {
		var_160_bool = 0; var_161_object = Obj();
		var_150_object = var_161_object;
		func_6465(var_160_bool, var_161_object);
		var_190_bool = var_160_bool == 0; //@nz
		if(var_190_bool != 0) {
			var_191_bool = 0; var_192_object = Obj();
			var_150_object = var_192_object;
			func_6502(var_191_bool, var_192_object);
			var_226_bool = var_191_bool == 0; //@nz
			if(var_226_bool != 0) {
				var_149_bool = 0;
				return 4;
			}
		}
		irand(var_157_int, (int)2);
		var_228_int = var_157_int;
		if(var_228_int != 0) {
			var_231_int = var_156_int + (int)1;
			var_233_int = var_231_int % (int)3;
			SetVariable("voice_common", var_233_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_236_bool = 0; var_237_object = Obj();
		var_150_object = var_237_object;
		func_6502(var_236_bool, var_237_object);
		var_238_bool = var_236_bool == 0; //@nz
		if(var_238_bool != 0) {
			var_239_bool = 0; var_240_object = Obj();
			var_150_object = var_240_object;
			func_6465(var_239_bool, var_240_object);
			var_241_bool = var_239_bool == 0; //@nz
			if(var_241_bool != 0) {
				var_149_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_6463;
	
Label_6463:
	var_149_bool = 1;
	return 4;
	
}


func_4359(var_0_object, var_1_object, var_2_object, var_3_string, var_824_object, var_825_object)
{
	var_0_object = var_825_object;
	var_1_object = var_824_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_831_bool = 0;
		var_831_bool = 0;
		var_832_bool = 0; var_833_object = Obj();
		var_833_object = var_1_object;
		func_7571(var_833_object);
		if(var_832_bool != 0) {
			var_838_bool = 0; var_839_object = Obj();
			var_839_object = var_1_object;
			func_7619(var_839_object);
			var_844_bool = var_838_bool == 0; //@nz
			if(var_844_bool != 0) {
				var_831_bool = 1;
			}
		}
		if(var_831_bool != 0) {
			var_845_object = Obj(); var_846_object = Obj();
			var_845_object = var_1_object;
			var_846_object = var_0_object;
			func_7111();
			var_849_object = Obj(); var_850_object = Obj();
			var_849_object = var_1_object;
			var_850_object = var_0_object;
			func_7188();
			var_853_string = "";
			func_4528(var_825_object, "Neutral");
			@@@var_0_object:SetMessage((int)526701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528907, (int)30337, (int)30336);
		} else {
				var_873_bool = 0; var_874_object = Obj();
				var_874_object = var_1_object;
				func_7619(var_874_object);
				var_875_bool = var_873_bool == 0; //@nz
				if(var_875_bool != 0) {
					var_876_string = "";
					func_4528(var_825_object, "Neutral");
					@@@var_0_object:SetMessage((int)526706);
					@@@var_0_object:ClearReplies();
					var_878_bool = 0; var_879_object = Obj();
					var_879_object = var_1_object;
					func_7559(var_879_object);
					if(var_878_bool != 0) {
						@@@var_0_object:AddReply((int)526707, (int)27984, (int)27983);
					}
					var_887_bool = 0; var_888_object = Obj();
					var_888_object = var_1_object;
					func_7583(var_888_object);
					if(var_887_bool != 0) {
						@@@var_0_object:AddReply((int)526710, (int)27987, (int)27986);
					}
					@@@var_0_object:AddReply((int)526713, (int)-1, (int)27989);
					goto Label_4498;
				}
				var_899_bool = 0; var_900_object = Obj();
				var_900_object = var_1_object;
				func_7631(var_900_object);
				if(var_899_bool != 0) {
					var_905_object = Obj(); var_906_object = Obj();
					var_905_object = var_1_object;
					var_906_object = var_0_object;
					func_7201();
					var_909_string = "";
					func_4528(var_825_object, "Neutral");
					@@@var_0_object:SetMessage((int)526714);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)526715, (int)27992, (int)27991);
					@@@var_0_object:AddReply((int)528913, (int)27992, (int)30342);
					goto Label_4498;
				}
				var_917_string = "";
				func_4528(var_825_object, "Neutral");
				@@@var_0_object:SetMessage((int)526724);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526725, (int)-1, (int)28002);
				@@@var_0_object:AddReply((int)528916, (int)-1, (int)30346);
				goto Label_4498;
		}
	}
Label_4498:
	var_865_bool = 0;
	func_6781(var_865_bool);
	if(var_865_bool != 0) {

	Label_4502:
		lshWaitForAnimEnd();
		var_866_string = var_3_string;
		if(var_866_string != 0) {
		} else {
			var_867_string = "";
			var_867_string = var_2_object;
			func_6545(var_867_string);
			goto Label_4502;
	}
		PlayAnimation("all", "idle");

	Label_4517:
		WaitForAnimEnd();
		var_870_string = var_3_string;
		if(var_870_string != 0) {
			goto Label_4527;
		}
		PlayAnimation("all", "idle");
		goto Label_4517;

	}
	goto Label_4527;
	
Label_4527:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x110b";


func_7942()
{
	var_191_object = Obj(); var_192_object = Obj();
	CreateDiaryEntry(var_192_object, (int)504, (int)2, (int)528770);
	var_196_bool = 0; var_197_object = Obj(); var_198_int = 0;
	var_192_object = var_197_object;
	func_8020(var_196_bool, var_197_object, (int)500);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6922()
{
	SetVariable("ook4Katerina1", (int)1);
	return 0;
}


func_7439(var_638_bool)
{
	var_640_int = 0; var_641_string = "";
	func_6625(var_640_int, "ook4Katerina1");
	var_643_bool = var_640_int == (int)0;
	if(var_643_bool != 0) {
		var_638_bool = 1;
		return 0;
	}
	var_638_bool = 0;
	return 0;
}


func_6928()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("k4q02", (int)1);
	func_8048(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_6729(var_79_float);
	@@var_65_object:AddMark("k4q02KaterinaGotoTheater", "pt_map_theater", (int)0, (int)515281, var_79_float);
	func_7851();
	func_7877();
	var_113_object = Obj(); var_114_string = "";
	func_6630(var_113_object, "quest_k4_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_7955()
{
	var_153_object = Obj(); var_154_object = Obj();
	CreateDiaryEntry(var_154_object, (int)793, (int)2, (int)543368);
	var_158_bool = 0; var_159_object = Obj(); var_160_int = 0;
	var_154_object = var_159_object;
	func_8020(var_158_bool, var_159_object, (int)500);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7451(var_677_bool)
{
	var_679_int = 0; var_680_string = "";
	func_6625(var_679_int, "k4q02");
	var_682_bool = var_679_int == (int)0;
	if(var_682_bool != 0) {
		var_677_bool = 1;
		return 0;
	}
	var_677_bool = 0;
	return 0;
}


func_7968()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)501, (int)2, (int)528767);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_8020(var_110_bool, var_111_object, (int)500);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5924(var_2_object, var_1163_string)
{
	var_1164_bool = 0;
	func_6781(var_1164_bool);
	var_1165_bool = var_1164_bool == 0; //@nz
	if(var_1165_bool != 0) {
		return 0;
	}
	var_1166_bool = var_1163_string == var_2_object;
	if(var_1166_bool != 0) {
		return 0;
	}
	var_1167_string = ""; var_1168_bool = 0;
	var_1163_string = var_1167_string;
	var_1170_bool = var_1163_string == "";
	if(var_1170_bool != 0) {
		var_1168_bool = 0;
	} else {
		var_1168_bool = 1;
	}
	func_6561(var_1167_string, var_1168_bool);
	var_2_object = var_1163_string;
	return 0;
	
}


func_7463(var_686_bool)
{
	var_688_int = 0; var_689_string = "";
	func_6625(var_688_int, "k4q02");
	var_691_bool = var_688_int == (int)3;
	if(var_691_bool != 0) {
		var_686_bool = 1;
		return 0;
	}
	var_686_bool = 0;
	return 0;
}


func_5416(var_0_object, var_1073_int, var_1074_object)
{
	var_1076_object = Obj(); var_1077_bool = 0; var_1078_int = 0; var_1079_bool = 0; var_1080_object = Obj(); var_1081_bool = 0; var_1082_int = 0; var_1083_bool = 0;
	var_0_object = var_1074_object;
	var_1084_bool = 0; var_1085_object = Obj(); var_1086_float = 0;
	var_1074_object = var_1085_object;
	func_6320(var_1084_bool, var_1085_object, (float)70.0);
	var_1087_bool = var_1084_bool == 0; //@nz
	if(var_1087_bool != 0) {
		var_1073_int = -2;
		return 8;
	}
	CreateDialog(var_1080_object);
	var_1088_int = 0;
	func_6775(var_1088_int);
	@@var_1080_object:SetNPCName(var_1088_int);
	var_1089_int = 0;
	func_6773(var_1089_int);
	@@var_1080_object:SetNPCDescription(var_1089_int);
	var_1090_string = "";
	func_6777(var_1090_string);
	@@var_1080_object:SetPhoto(var_1090_string);
	var_1091_string = "";
	func_6779(var_1091_string);
	@@var_1080_object:SetPhoto2(var_1091_string);
	var_1092_int = 0;
	func_8098(var_1092_int);
	@@var_1080_object:SetPlayerName(var_1092_int);
	IsOverrideActive(var_1081_bool);
	var_1093_bool = var_1081_bool;
	if(var_1093_bool != 0) {
		var_1073_int = -2;
		return 8;
	}
	DoDialog(var_1080_object);
	var_1094_bool = 0; var_1095_object = Obj();
	func_6598(Obj());
	var_1096_object = var_1095_object;
	func_6407(var_1094_bool, var_1095_object);
	var_1097_object = Obj(); var_1098_object = Obj();
	var_1074_object = var_1097_object;
	var_1080_object = var_1098_object;
	TaskCall(19);
	func_5497(var_1099_object, var_1100_object, var_1101_string, var_1102_bool, var_1097_object, var_1098_object);
	TaskReturn();
	@@var_1080_object:IsDialogEnd(var_1083_bool);
	
Label_5479:
	var_1130_bool = var_1083_bool == 0; //@nz
	if(var_1130_bool != 0) {
		sync();
		@@var_1080_object:IsDialogEnd(var_1083_bool);
		goto Label_5479;
	}
	var_1074_object = Obj();
	func_6389();
	StopDialog(var_1080_object);
	@@var_1080_object:GetReturnValue((int)-1);
	var_1082_int = var_1073_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7981()
{
	var_95_object = Obj(); var_96_object = Obj();
	CreateDiaryEntry(var_96_object, (int)427, (int)1, (int)526226);
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0;
	var_96_object = var_101_object;
	func_8020(var_100_bool, var_101_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1838(var_2_object, var_251_string)
{
	var_252_bool = 0;
	func_6781(var_252_bool);
	var_253_bool = var_252_bool == 0; //@nz
	if(var_253_bool != 0) {
		return 0;
	}
	var_254_bool = var_251_string == var_2_object;
	if(var_254_bool != 0) {
		return 0;
	}
	var_255_string = ""; var_256_bool = 0;
	var_251_string = var_255_string;
	var_258_bool = var_251_string == "";
	if(var_258_bool != 0) {
		var_256_bool = 0;
	} else {
		var_256_bool = 1;
	}
	func_6561(var_255_string, var_256_bool);
	var_2_object = var_251_string;
	return 0;
	
}


func_6958()
{
	func_7864();
	var_169_bool = 0; var_170_string = ""; var_171_string = "";
	func_6717(var_169_bool, "quest_k4_02", "completed");
	return 0;
}


func_7475(var_733_bool)
{
	var_735_int = 0; var_736_string = "";
	func_6625(var_735_int, "ook5Katerina1");
	var_738_bool = var_735_int == (int)0;
	if(var_738_bool != 0) {
		var_733_bool = 1;
		return 0;
	}
	var_733_bool = 0;
	return 0;
}


func_6968()
{
	SetVariable("ook5Katerina1", (int)1);
	return 0;
}


func_7994()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)424, (int)1, (int)526223);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_8020(var_71_bool, var_72_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6974()
{
	var_64_object = Obj(); var_65_object = Obj();
	func_8048(Obj());
	var_66_object = var_65_object;
	var_77_float = 0;
	func_6729(var_77_float);
	@@var_65_object:AddMark("k5q02KaterinaGotoPetr", "pt_map_petr", (int)0, (int)515291, var_77_float);
	func_7890();
	func_7916();
	var_111_object = Obj(); var_112_string = "";
	func_6630(var_111_object, "quest_k5_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_7487(var_772_bool)
{
	var_774_int = 0; var_775_string = "";
	func_6625(var_774_int, "k5q02");
	var_777_bool = var_774_int == (int)0;
	if(var_777_bool != 0) {
		var_772_bool = 1;
		return 0;
	}
	var_772_bool = 0;
	return 0;
}


func_6465(var_160_bool, var_161_object)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = "";
	var_167_string = "c";
	var_168_int = 0;
	
Label_6468:
	if((int)1 != 0) {
		var_174_int = var_168_int + (int)1;
		var_175_int = var_167_string + var_174_int;
		@@var_161_object:HasProperty(var_175_int, var_169_bool);
		var_176_bool = var_169_bool == 0; //@nz
		if(var_176_bool != 0) {
		} else {
			var_168_int = var_168_int + (int)1;
			goto Label_6468;
		}
	}
	var_177_bool = var_168_int == 0; //@nz
	if(var_177_bool != 0) {
		var_160_bool = 0;
		return 10;
	}
	var_170_int = 0;
	var_179_bool = var_168_int > (int)1;
	if(var_179_bool != 0) {
		irand(var_170_int, var_168_int);
	}
	var_181_int = var_170_int + (int)1;
	var_182_int = var_167_string + var_181_int;
	@@var_161_object:GetProperty(var_182_int, var_171_string);
	var_183_bool = 0; var_184_string = "";
	var_171_string = var_184_string;
	func_6576(var_183_bool, var_184_string);
	var_183_bool = var_160_bool;
	return 10;
	
}


func_8007(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj();
	GetDiaryRoot(var_93_object);
	var_94_bool = var_93_object == 0; //@nz
	if(var_94_bool != 0) {
		Trace("Can't retrieve diary root");
		var_91_object = 0;
		return 2;
	}
	var_93_object = var_91_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7499(var_781_bool)
{
	var_783_int = 0; var_784_string = "";
	func_6625(var_783_int, "k5q02");
	var_786_bool = var_783_int == (int)6;
	if(var_786_bool != 0) {
		var_781_bool = 1;
		return 0;
	}
	var_781_bool = 0;
	return 0;
}


func_3919(var_2_object, var_960_string)
{
	var_961_bool = 0;
	func_6781(var_961_bool);
	var_962_bool = var_961_bool == 0; //@nz
	if(var_962_bool != 0) {
		return 0;
	}
	var_963_bool = var_960_string == var_2_object;
	if(var_963_bool != 0) {
		return 0;
	}
	var_964_string = ""; var_965_bool = 0;
	var_960_string = var_964_string;
	var_967_bool = var_960_string == "";
	if(var_967_bool != 0) {
		var_965_bool = 0;
	} else {
		var_965_bool = 1;
	}
	func_6561(var_964_string, var_965_bool);
	var_2_object = var_960_string;
	return 0;
	
}


func_8020(var_82_bool, var_83_object, var_84_int)
{
	var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0; var_88_object = Obj(); var_89_object = Obj(); var_90_int = 0;
	func_8007(Obj());
	var_91_object = var_88_object;
	@@var_88_object:Find(var_84_int, var_89_object);
	var_96_bool = var_89_object == 0; //@nz
	if(var_96_bool != 0) {
		var_98_int = "Can't find diary parent with id: " + var_84_int;
		Trace(var_98_int);
		var_82_bool = 0;
		return 6;
	}
	@@var_89_object:AddChild(var_83_object);
	SendWorldWndMessage((int)7);
	@@var_83_object:GetCategory(var_90_int);
	SetDiarySection(var_90_int);
	var_82_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_7511(var_969_bool)
{
	var_971_int = 0; var_972_string = "";
	func_6625(var_971_int, "k7q01");
	var_974_bool = var_971_int == (int)5;
	if(var_974_bool != 0) {
		var_969_bool = 1;
		return 0;
	}
	var_969_bool = 0;
	return 0;
}


func_7000()
{
	func_7903();
	var_163_bool = 0; var_164_string = ""; var_165_string = "";
	func_6717(var_163_bool, "quest_k5_02", "completed");
	return 0;
}


func_7010()
{
	SetVariable("k7q01", (int)6);
	func_7994();
	return 0;
}


func_7523(var_978_bool)
{
	var_980_int = 0; var_981_string = "";
	func_6625(var_980_int, "k7q01");
	var_983_bool = var_980_int == (int)8;
	if(var_983_bool != 0) {
		var_978_bool = 1;
		return 0;
	}
	var_978_bool = 0;
	return 0;
}


func_6502(var_191_bool, var_192_object)
{
	var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = ""; var_198_string = ""; var_199_int = 0; var_200_bool = 0; var_201_int = 0; var_202_string = "";
	var_204_int = 0;
	func_6734(var_204_int);
	var_210_int = "d" + var_204_int;
	var_198_string = var_210_int + "m";
	var_199_int = 0;
	
Label_6511:
	if((int)1 != 0) {
		var_214_int = var_199_int + (int)1;
		var_215_int = var_198_string + var_214_int;
		@@var_192_object:HasProperty(var_215_int, var_200_bool);
		var_216_bool = var_200_bool == 0; //@nz
		if(var_216_bool != 0) {
		} else {
			var_199_int = var_199_int + (int)1;
			goto Label_6511;
		}
	}
	var_217_bool = var_199_int == 0; //@nz
	if(var_217_bool != 0) {
		var_191_bool = 0;
		return 10;
	}
	var_201_int = 0;
	var_219_bool = var_199_int > (int)1;
	if(var_219_bool != 0) {
		irand(var_201_int, var_199_int);
	}
	var_221_int = var_201_int + (int)1;
	var_222_int = var_198_string + var_221_int;
	@@var_192_object:GetProperty(var_222_int, var_202_string);
	var_223_bool = 0; var_224_string = "";
	var_202_string = var_224_string;
	func_6576(var_223_bool, var_224_string);
	var_223_bool = var_191_bool;
	return 10;
	
}


func_7019()
{
	SetVariable("k7q01", (int)9);
	func_7981();
	return 0;
}


func_5995(var_0_object)
{
	var_57_bool = 0;
	func_6315(var_57_bool);
	var_60_bool = var_57_bool == 0; //@nz
	if(var_60_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_6004:
	func_6171();
	goto Label_6004;
}
EMIT "Return(); Pop(0)";


func_1902(var_0_object, var_509_int, var_510_object)
{
	var_512_object = Obj(); var_513_bool = 0; var_514_int = 0; var_515_bool = 0; var_516_object = Obj(); var_517_bool = 0; var_518_int = 0; var_519_bool = 0;
	var_0_object = var_510_object;
	var_520_bool = 0; var_521_object = Obj(); var_522_float = 0;
	var_510_object = var_521_object;
	func_6320(var_520_bool, var_521_object, (float)70.0);
	var_523_bool = var_520_bool == 0; //@nz
	if(var_523_bool != 0) {
		var_509_int = -2;
		return 8;
	}
	CreateDialog(var_516_object);
	var_524_int = 0;
	func_6775(var_524_int);
	@@var_516_object:SetNPCName(var_524_int);
	var_525_int = 0;
	func_6773(var_525_int);
	@@var_516_object:SetNPCDescription(var_525_int);
	var_526_string = "";
	func_6777(var_526_string);
	@@var_516_object:SetPhoto(var_526_string);
	var_527_string = "";
	func_6779(var_527_string);
	@@var_516_object:SetPhoto2(var_527_string);
	var_528_int = 0;
	func_8098(var_528_int);
	@@var_516_object:SetPlayerName(var_528_int);
	IsOverrideActive(var_517_bool);
	var_529_bool = var_517_bool;
	if(var_529_bool != 0) {
		var_509_int = -2;
		return 8;
	}
	DoDialog(var_516_object);
	var_530_bool = 0; var_531_object = Obj();
	func_6598(Obj());
	var_532_object = var_531_object;
	func_6407(var_530_bool, var_531_object);
	var_533_object = Obj(); var_534_object = Obj();
	var_510_object = var_533_object;
	var_516_object = var_534_object;
	TaskCall(7);
	func_1983(var_535_object, var_536_object, var_537_string, var_538_bool, var_533_object, var_534_object);
	TaskReturn();
	@@var_516_object:IsDialogEnd(var_519_bool);
	
Label_1965:
	var_603_bool = var_519_bool == 0; //@nz
	if(var_603_bool != 0) {
		sync();
		@@var_516_object:IsDialogEnd(var_519_bool);
		goto Label_1965;
	}
	var_510_object = Obj();
	func_6389();
	StopDialog(var_516_object);
	@@var_516_object:GetReturnValue((int)-1);
	var_518_int = var_509_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7535(var_1049_bool)
{
	var_1051_int = 0; var_1052_string = "";
	func_6625(var_1051_int, "k11q01");
	var_1054_bool = var_1051_int == (int)9;
	if(var_1054_bool != 0) {
		var_1049_bool = 1;
		return 0;
	}
	var_1049_bool = 0;
	return 0;
}


func_8048(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj(); var_72_object = Obj();
	GetMainOutdoorScene(var_71_object);
	var_73_bool = var_71_object == 0; //@ne
	if(var_73_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_72_object = 0;
		var_72_object = var_68_object;
		return 4;
	}
	@@var_71_object:GetMap(var_72_object);
	var_72_object = var_68_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7028()
{
	var_70_int = 0; var_71_int = 0;
	GetVariable("k11q01SoulCount", var_71_int);
	var_71_int = var_71_int + (int)1;
	SetVariable("k11q01SoulCount", var_71_int);
	var_76_bool = var_71_int == (int)2;
	if(var_76_bool != 0) {
		func_7708();
	} else {
		var_101_bool = var_71_int == (int)3;
		if(var_101_bool != 0) {
			func_7695();
			goto Label_7078;
		}
		var_111_bool = var_71_int == (int)4;
		if(var_111_bool != 0) {
			func_7682();
			goto Label_7078;
		}
		var_121_bool = var_71_int == (int)5;
		if(var_121_bool != 0) {
			func_7669();
			goto Label_7078;
		}
		var_131_bool = var_71_int == (int)6;
		if(var_131_bool != 0) {
			func_7656();
			goto Label_7078;
		}
		var_141_bool = var_71_int == (int)7;
		if(var_141_bool == 0) goto Label_7078;
		func_7643();
	}
Label_7078:
	return 2;
	
}


func_5497(var_0_object, var_1_object, var_2_object, var_3_string, var_1097_object, var_1098_object)
{
	var_0_object = var_1098_object;
	var_1_object = var_1097_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1104_string = "";
		func_5560(var_1098_object, "Suffering");
		@@@var_0_object:SetMessage((int)539309);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)542633, (int)45037, (int)45035);
		@@@var_0_object:AddReply((int)539310, (int)-1, (int)41253);
		@@@var_0_object:AddReply((int)542634, (int)-1, (int)45036);
		goto Label_5530;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x157d";
	}
Label_5530:
	var_1122_bool = 0;
	func_6781(var_1122_bool);
	if(var_1122_bool != 0) {

	Label_5534:
		lshWaitForAnimEnd();
		var_1123_string = var_3_string;
		if(var_1123_string != 0) {
		} else {
			var_1124_string = "";
			var_1124_string = var_2_object;
			func_6545(var_1124_string);
			goto Label_5534;
	}
		PlayAnimation("all", "idle");

	Label_5549:
		WaitForAnimEnd();
		var_1127_string = var_3_string;
		if(var_1127_string != 0) {
			goto Label_5559;
		}
		PlayAnimation("all", "idle");
		goto Label_5549;
	}
	goto Label_5559;
	
Label_5559:
	return 0;
	
}


func_6009(var_81_bool)
{
	var_82_object = Obj(); var_83_object = Obj();
	FindActor(var_83_object, "player");
	var_85_bool = var_83_object == 0; //@nz
	if(var_85_bool != 0) {
		var_81_bool = 0;
		return 2;
	}
	var_86_bool = 0; var_87_object = Obj();
	var_83_object = var_87_object;
	func_6306(var_86_bool, var_87_object);
	var_86_bool = var_81_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7547(var_1043_bool)
{
	var_1045_int = 0; var_1046_string = "";
	func_6625(var_1045_int, "ook11Katerina1");
	var_1048_bool = var_1045_int == (int)0;
	if(var_1048_bool != 0) {
		var_1043_bool = 1;
		return 0;
	}
	var_1043_bool = 0;
	return 0;
}


func_8065(var_115_object, var_116_string, var_117_float)
{
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_object = Obj(); var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_object = Obj(); var_126_bool = 0;
	GetMainOutdoorScene(var_125_object);
	var_127_bool = var_125_object == 0; //@ne
	if(var_127_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_125_object:GetLocator(var_116_string, var_126_bool, var_123_cvector, var_124_cvector);
	var_129_bool = var_126_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_131_int = "Warning: outdoor scene locator " + var_116_string;
		var_133_int = var_131_int + " doesnt exist";
		Trace(var_133_int);
	}
	@@var_125_object:GetMap(var_115_object);
	var_134_bool = var_115_object == 0; //@ne
	if(var_134_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_136_float = GetByIndex(var_123_cvector, 0);
	var_137_float = GetByIndex(var_123_cvector, 2);
	@@var_115_object:SetMapParams(var_136_float, var_137_float, var_117_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_7559(var_878_bool)
{
	var_880_int = 0; var_881_string = "";
	func_6625(var_880_int, "k6q02");
	var_883_bool = var_880_int == (int)0;
	if(var_883_bool != 0) {
		var_878_bool = 1;
		return 0;
	}
	var_878_bool = 0;
	return 0;
}


func_6024(var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0);
	var_134_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_133_float, var_134_float);
	return 0;
}


func_6029(var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0;
	FindActor(var_67_object, "player");
	var_70_bool = var_67_object == 0; //@nz
	if(var_70_bool != 0) {
		var_64_bool = 0;
		return 4;
	}
	var_71_float = 0; var_72_object = Obj();
	var_67_object = var_72_object;
	func_6247(var_71_float, var_72_object);
	var_80_bool = var_71_float > (float)90000.0;
	if(var_80_bool != 0) {
		var_64_bool = 0;
		return 4;
	}
	CanSee(var_68_bool, var_67_object);
	var_68_bool = var_64_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_6545(var_277_string)
{
	var_278_bool = 0; var_279_float = 0; var_280_float = 0; var_281_bool = 0; var_282_float = 0; var_283_float = 0;
	lshHasAnimation(var_281_bool, var_277_string);
	var_284_bool = var_281_bool;
	if(var_284_bool != 0) {
		lshGetAnimTimes(var_277_string, var_282_float, var_283_float);
		lshPlayAnimation(var_282_float, var_283_float, (bool)0);
	} else {
		var_287_int = "Can't find lsh animation : " + var_277_string;
		Trace(var_287_int);
	}
	return 6;
	
}


func_2450(var_0_object, var_607_int, var_608_object)
{
	var_610_object = Obj(); var_611_bool = 0; var_612_int = 0; var_613_bool = 0; var_614_object = Obj(); var_615_bool = 0; var_616_int = 0; var_617_bool = 0;
	var_0_object = var_608_object;
	var_618_bool = 0; var_619_object = Obj(); var_620_float = 0;
	var_608_object = var_619_object;
	func_6320(var_618_bool, var_619_object, (float)70.0);
	var_621_bool = var_618_bool == 0; //@nz
	if(var_621_bool != 0) {
		var_607_int = -2;
		return 8;
	}
	CreateDialog(var_614_object);
	var_622_int = 0;
	func_6775(var_622_int);
	@@var_614_object:SetNPCName(var_622_int);
	var_623_int = 0;
	func_6773(var_623_int);
	@@var_614_object:SetNPCDescription(var_623_int);
	var_624_string = "";
	func_6777(var_624_string);
	@@var_614_object:SetPhoto(var_624_string);
	var_625_string = "";
	func_6779(var_625_string);
	@@var_614_object:SetPhoto2(var_625_string);
	var_626_int = 0;
	func_8098(var_626_int);
	@@var_614_object:SetPlayerName(var_626_int);
	IsOverrideActive(var_615_bool);
	var_627_bool = var_615_bool;
	if(var_627_bool != 0) {
		var_607_int = -2;
		return 8;
	}
	DoDialog(var_614_object);
	var_628_bool = 0; var_629_object = Obj();
	func_6598(Obj());
	var_630_object = var_629_object;
	func_6407(var_628_bool, var_629_object);
	var_631_object = Obj(); var_632_object = Obj();
	var_608_object = var_631_object;
	var_614_object = var_632_object;
	TaskCall(9);
	func_2531(var_633_object, var_634_object, var_635_string, var_636_bool, var_631_object, var_632_object);
	TaskReturn();
	@@var_614_object:IsDialogEnd(var_617_bool);
	
Label_2513:
	var_698_bool = var_617_bool == 0; //@nz
	if(var_698_bool != 0) {
		sync();
		@@var_614_object:IsDialogEnd(var_617_bool);
		goto Label_2513;
	}
	var_608_object = Obj();
	func_6389();
	StopDialog(var_614_object);
	@@var_614_object:GetReturnValue((int)-1);
	var_616_int = var_607_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7571(var_832_bool)
{
	var_834_int = 0; var_835_string = "";
	func_6625(var_834_int, "ook6Katerina1");
	var_837_bool = var_834_int == (int)0;
	if(var_837_bool != 0) {
		var_832_bool = 1;
		return 0;
	}
	var_832_bool = 0;
	return 0;
}


func_5015(var_0_object, var_1002_int, var_1003_object)
{
	var_1005_object = Obj(); var_1006_bool = 0; var_1007_int = 0; var_1008_bool = 0; var_1009_object = Obj(); var_1010_bool = 0; var_1011_int = 0; var_1012_bool = 0;
	var_0_object = var_1003_object;
	var_1013_bool = 0; var_1014_object = Obj(); var_1015_float = 0;
	var_1003_object = var_1014_object;
	func_6320(var_1013_bool, var_1014_object, (float)70.0);
	var_1016_bool = var_1013_bool == 0; //@nz
	if(var_1016_bool != 0) {
		var_1002_int = -2;
		return 8;
	}
	CreateDialog(var_1009_object);
	var_1017_int = 0;
	func_6775(var_1017_int);
	@@var_1009_object:SetNPCName(var_1017_int);
	var_1018_int = 0;
	func_6773(var_1018_int);
	@@var_1009_object:SetNPCDescription(var_1018_int);
	var_1019_string = "";
	func_6777(var_1019_string);
	@@var_1009_object:SetPhoto(var_1019_string);
	var_1020_string = "";
	func_6779(var_1020_string);
	@@var_1009_object:SetPhoto2(var_1020_string);
	var_1021_int = 0;
	func_8098(var_1021_int);
	@@var_1009_object:SetPlayerName(var_1021_int);
	IsOverrideActive(var_1010_bool);
	var_1022_bool = var_1010_bool;
	if(var_1022_bool != 0) {
		var_1002_int = -2;
		return 8;
	}
	DoDialog(var_1009_object);
	var_1023_bool = 0; var_1024_object = Obj();
	func_6598(Obj());
	var_1025_object = var_1024_object;
	func_6407(var_1023_bool, var_1024_object);
	var_1026_object = Obj(); var_1027_object = Obj();
	var_1003_object = var_1026_object;
	var_1009_object = var_1027_object;
	TaskCall(17);
	func_5096(var_1028_object, var_1029_object, var_1030_string, var_1031_bool, var_1026_object, var_1027_object);
	TaskReturn();
	@@var_1009_object:IsDialogEnd(var_1012_bool);
	
Label_5078:
	var_1069_bool = var_1012_bool == 0; //@nz
	if(var_1069_bool != 0) {
		sync();
		@@var_1009_object:IsDialogEnd(var_1012_bool);
		goto Label_5078;
	}
	var_1003_object = Obj();
	func_6389();
	StopDialog(var_1009_object);
	@@var_1009_object:GetReturnValue((int)-1);
	var_1011_int = var_1002_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7583(var_887_bool)
{
	var_889_int = 0; var_890_string = "";
	func_6625(var_889_int, "k6q02");
	var_892_bool = var_889_int == (int)3;
	if(var_892_bool != 0) {
		var_887_bool = 1;
		return 0;
	}
	var_887_bool = 0;
	return 0;
}


func_6561(var_255_string, var_256_bool)
{
	var_259_bool = 0; var_260_float = 0; var_261_float = 0; var_262_bool = 0; var_263_float = 0; var_264_float = 0;
	lshHasAnimation(var_262_bool, var_255_string);
	var_265_bool = var_262_bool;
	if(var_265_bool != 0) {
		lshGetAnimTimes(var_255_string, var_263_float, var_264_float);
		lshPlayAnimation(var_263_float, var_264_float, var_256_bool);
	} else {
		var_267_int = "Can't find lsh animation : " + var_255_string;
		Trace(var_267_int);
	}
	return 6;
	
}


func_8098(var_140_int)
{
	var_141_int = 0; var_142_int = 0;
	GetVariable("branch", var_142_int);
	var_145_bool = var_142_int == (int)0;
	if(var_145_bool != 0) {
		var_140_int = 1;
		return 2;
	EMIT "GOTO 0x1fb1";
	}
	var_147_bool = var_142_int == (int)1;
	if(var_147_bool != 0) {
		var_140_int = 2;
		return 2;
	}
	var_140_int = 3;
	return 2;
}


func_6051()
{
	var_1190_float = 0; var_1191_float = 0;
	rand(var_1191_float, (int)8, (int)16);
	SetTimer((int)10, var_1191_float);
	return 2;
}


func_7079()
{
	SetVariable("ook11Katerina1", (int)1);
	return 0;
}


func_7595(var_377_bool)
{
	var_379_int = 0; var_380_string = "";
	func_6625(var_379_int, "ook1Katerina1");
	var_382_bool = var_379_int == (int)0;
	if(var_382_bool != 0) {
		var_377_bool = 1;
		return 0;
	}
	var_377_bool = 0;
	return 0;
}


func_6060()
{
	KillTimer((int)10);
	return 0;
}


func_7085()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("k6q02", (int)1);
	func_8048(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_6729(var_79_float);
	@@var_65_object:AddMark("k6q02GotoKapella", "pt_map_kapella", (int)0, (int)541595, var_79_float);
	func_7929();
	func_7968();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4528(var_2_object, var_853_string)
{
	var_854_bool = 0;
	func_6781(var_854_bool);
	var_855_bool = var_854_bool == 0; //@nz
	if(var_855_bool != 0) {
		return 0;
	}
	var_856_bool = var_853_string == var_2_object;
	if(var_856_bool != 0) {
		return 0;
	}
	var_857_string = ""; var_858_bool = 0;
	var_853_string = var_857_string;
	var_860_bool = var_853_string == "";
	if(var_860_bool != 0) {
		var_858_bool = 0;
	} else {
		var_858_bool = 1;
	}
	func_6561(var_857_string, var_858_bool);
	var_2_object = var_853_string;
	return 0;
	
}


func_6576(var_183_bool, var_184_string)
{
	var_185_bool = 0; var_186_bool = 0;
	var_187_bool = 0;
	func_6781(var_187_bool);
	if(var_187_bool != 0) {
		lshHasSpeech(var_186_bool, var_184_string);
		var_188_bool = var_186_bool;
		if(var_188_bool != 0) {
			lshPlaySpeech(var_184_string);
			var_183_bool = 1;
			return 2;
		}
	}
	var_183_bool = 0;
	return 2;
}


func_8115(var_106_object, var_107_bool)
{
	@@var_106_object:add((int)7);
	@@var_106_object:add((int)23);
	@@var_106_object:add((int)21);
	@@var_106_object:add((int)9);
	@@var_106_object:add((int)3);
	@@var_106_object:add((int)1);
	@@var_106_object:add((int)11);
	@@var_106_object:add((int)13);
	var_118_bool = var_107_bool == (bool)0;
	if(var_118_bool != 0) {
		@@var_106_object:add((int)25);
	}
	return 0;
}


func_7607(var_402_bool)
{
	var_404_int = 0; var_405_string = "";
	func_6625(var_404_int, "ook1Katerina2");
	var_407_bool = var_404_int == (int)0;
	if(var_407_bool != 0) {
		var_402_bool = 1;
		return 0;
	}
	var_402_bool = 0;
	return 0;
}


func_5560(var_2_object, var_1104_string)
{
	var_1105_bool = 0;
	func_6781(var_1105_bool);
	var_1106_bool = var_1105_bool == 0; //@nz
	if(var_1106_bool != 0) {
		return 0;
	}
	var_1107_bool = var_1104_string == var_2_object;
	if(var_1107_bool != 0) {
		return 0;
	}
	var_1108_string = ""; var_1109_bool = 0;
	var_1104_string = var_1108_string;
	var_1111_bool = var_1104_string == "";
	if(var_1111_bool != 0) {
		var_1109_bool = 0;
	} else {
		var_1109_bool = 1;
	}
	func_6561(var_1108_string, var_1109_bool);
	var_2_object = var_1104_string;
	return 0;
	
}


func_6591()
{
	var_59_bool = 0;
	func_6781(var_59_bool);
	if(var_59_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1983(var_0_object, var_1_object, var_2_object, var_3_string, var_533_object, var_534_object)
{
	var_0_object = var_534_object;
	var_1_object = var_533_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_540_bool = 0; var_541_object = Obj();
		var_541_object = var_1_object;
		func_7403(var_541_object);
		if(var_540_bool != 0) {
			var_546_object = Obj(); var_547_object = Obj();
			var_546_object = var_1_object;
			var_547_object = var_0_object;
			func_6872();
			var_550_object = Obj(); var_551_object = Obj();
			var_550_object = var_1_object;
			var_551_object = var_0_object;
			func_7170();
			var_554_string = "";
			func_2096(var_534_object, "Neutral");
			@@@var_0_object:SetMessage((int)525536);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540780, (int)42827, (int)42826);
			@@@var_0_object:AddReply((int)540791, (int)42827, (int)42837);
		} else {
				var_577_string = "";
				func_2096(var_534_object, "Neutral");
				@@@var_0_object:SetMessage((int)525539);
				@@@var_0_object:ClearReplies();
				var_579_bool = 0; var_580_object = Obj();
				var_580_object = var_1_object;
				func_7415(var_580_object);
				if(var_579_bool != 0) {
					@@@var_0_object:AddReply((int)525559, (int)26916, (int)26915);
				}
				var_588_bool = 0; var_589_object = Obj();
				var_589_object = var_1_object;
				func_7427(var_589_object);
				if(var_588_bool != 0) {
					@@@var_0_object:AddReply((int)525562, (int)26919, (int)26918);
				}
				@@@var_0_object:AddReply((int)525540, (int)-1, (int)26896);
				@@@var_0_object:AddReply((int)540788, (int)-1, (int)42834);
				goto Label_2066;
		}
	}
Label_2066:
	var_569_bool = 0;
	func_6781(var_569_bool);
	if(var_569_bool != 0) {

	Label_2070:
		lshWaitForAnimEnd();
		var_570_string = var_3_string;
		if(var_570_string != 0) {
		} else {
			var_571_string = "";
			var_571_string = var_2_object;
			func_6545(var_571_string);
			goto Label_2070;
	}
		PlayAnimation("all", "idle");

	Label_2085:
		WaitForAnimEnd();
		var_574_string = var_3_string;
		if(var_574_string != 0) {
			goto Label_2095;
		}
		PlayAnimation("all", "idle");
		goto Label_2085;

	}
	goto Label_2095;
	
Label_2095:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x7c3";


func_7619(var_838_bool)
{
	var_840_int = 0; var_841_string = "";
	func_6625(var_840_int, "k6StopKaterinaTalks");
	var_843_bool = var_840_int != (int)0;
	if(var_843_bool != 0) {
		var_838_bool = 1;
		return 0;
	}
	var_838_bool = 0;
	return 0;
}


func_6598(var_151_object)
{
	var_152_object = Obj(); var_153_object = Obj();
	self(var_153_object);
	var_153_object = var_151_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7111()
{
	SetVariable("ook6Katerina1", (int)1);
	return 0;
}


func_6604(var_115_cvector, var_116_cvector)
{
	var_118_float = 0; var_119_float = 0;
	var_120_int = var_116_cvector | var_116_cvector;
	var_119_float = sqrt(var_120_int);
	var_121_float = 9.999999974752427e-07;
	var_122_bool = var_119_float < var_121_float;
	if(var_122_bool != 0) {
		var_115_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_115_cvector = var_116_cvector / var_119_float;
	return 2;
}


func_7117()
{
	SetVariable("k6q02", (int)1000);
	func_7955();
	return 0;
}


func_7631(var_899_bool)
{
	var_901_int = 0; var_902_string = "";
	func_6625(var_901_int, "ook6Katerina2");
	var_904_bool = var_901_int == (int)0;
	if(var_904_bool != 0) {
		var_899_bool = 1;
		return 0;
	}
	var_899_bool = 0;
	return 0;
}


func_8147(var_121_int)
{
	var_122_int = 0; var_123_int = 0;
	var_125_int = "vol_" + var_121_int;
	GetVariable(var_125_int, var_123_int);
	var_127_int = "vol_" + var_121_int;
	var_129_int = var_123_int | (int)8;
	SetVariable(var_127_int, var_129_int);
	return 2;
}


func_7126()
{
	SetVariable("ook1Katerina1", (int)1);
	return 0;
}


func_6614(var_200_float, var_201_float, var_202_float, var_203_float)
{
	var_204_bool = var_201_float < var_202_float;
	if(var_204_bool != 0) {
		var_202_float = var_200_float;
		return 0;
	}
	var_205_bool = var_201_float > var_203_float;
	if(var_205_bool != 0) {
		var_203_float = var_200_float;
		return 0;
	}
	var_201_float = var_200_float;
	return 0;
}


func_7643()
{
	var_142_object = Obj(); var_143_object = Obj();
	CreateDiaryEntry(var_143_object, (int)498, (int)1, (int)528065);
	var_147_bool = 0; var_148_object = Obj(); var_149_int = 0;
	var_143_object = var_148_object;
	func_8020(var_147_bool, var_148_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7132()
{
	SetVariable("ook1Katerina2", (int)1);
	return 0;
}


func_8159()
{
	var_98_object = Obj(); var_99_int = 0; var_100_int = 0; var_101_int = 0; var_102_object = Obj(); var_103_int = 0; var_104_int = 0; var_105_int = 0;
	CreateIntVector(var_102_object);
	var_106_object = Obj(); var_107_bool = 0; var_108_int = 0;
	var_102_object = var_106_object;
	func_8115((bool)0, (int)-1);
	@@var_102_object:size(var_103_int);
	var_104_int = 0;
	
Label_8171:
	var_120_bool = var_104_int < var_103_int;
	if(var_120_bool != 0) {
		@@var_102_object:get(var_105_int, var_104_int);
		var_121_int = 0;
		var_105_int = var_121_int;
		func_8147(var_121_int);
		var_104_int = var_104_int + (int)1;
		goto Label_8171;
	}
	return 8;
}
EMIT "Stack[-4] = 0";


func_6625(var_340_int, var_341_string)
{
	var_342_int = 0; var_343_int = 0;
	GetVariable(var_341_string, var_343_int);
	var_343_int = var_340_int;
	return 2;
}


func_7138(var_171_object)
{
	Trace("money1000 is given");
	var_174_object = Obj(); var_175_int = 0;
	var_171_object = var_174_object;
	func_6653(var_174_object, (int)1000);
	return 0;
}


func_2531(var_0_object, var_1_object, var_2_object, var_3_string, var_631_object, var_632_object)
{
	var_0_object = var_632_object;
	var_1_object = var_631_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_638_bool = 0; var_639_object = Obj();
		var_639_object = var_1_object;
		func_7439(var_639_object);
		if(var_638_bool != 0) {
			var_644_object = Obj(); var_645_object = Obj();
			var_644_object = var_1_object;
			var_645_object = var_0_object;
			func_6922();
			var_648_object = Obj(); var_649_object = Obj();
			var_648_object = var_1_object;
			var_649_object = var_0_object;
			func_7176();
			var_652_string = "";
			func_2639(var_632_object, "Neutral");
			@@@var_0_object:SetMessage((int)525736);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540845, (int)42904, (int)42903);
			@@@var_0_object:AddReply((int)529239, (int)30694, (int)30693);
		} else {
				var_675_string = "";
				func_2639(var_632_object, "Neutral");
				@@@var_0_object:SetMessage((int)525743);
				@@@var_0_object:ClearReplies();
				var_677_bool = 0; var_678_object = Obj();
				var_678_object = var_1_object;
				func_7451(var_678_object);
				if(var_677_bool != 0) {
					@@@var_0_object:AddReply((int)525744, (int)27057, (int)27056);
				}
				var_686_bool = 0; var_687_object = Obj();
				var_687_object = var_1_object;
				func_7463(var_687_object);
				if(var_686_bool != 0) {
					@@@var_0_object:AddReply((int)525781, (int)42916, (int)27093);
				}
				@@@var_0_object:AddReply((int)525747, (int)-1, (int)27059);
				goto Label_2609;
		}
	}
Label_2609:
	var_667_bool = 0;
	func_6781(var_667_bool);
	if(var_667_bool != 0) {

	Label_2613:
		lshWaitForAnimEnd();
		var_668_string = var_3_string;
		if(var_668_string != 0) {
		} else {
			var_669_string = "";
			var_669_string = var_2_object;
			func_6545(var_669_string);
			goto Label_2613;
	}
		PlayAnimation("all", "idle");

	Label_2628:
		WaitForAnimEnd();
		var_672_string = var_3_string;
		if(var_672_string != 0) {
			goto Label_2638;
		}
		PlayAnimation("all", "idle");
		goto Label_2628;

	}
	goto Label_2638;
	
Label_2638:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x9e7";


func_995(var_0_object, var_421_int, var_422_object)
{
	var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0; var_428_object = Obj(); var_429_bool = 0; var_430_int = 0; var_431_bool = 0;
	var_0_object = var_422_object;
	var_432_bool = 0; var_433_object = Obj(); var_434_float = 0;
	var_422_object = var_433_object;
	func_6320(var_432_bool, var_433_object, (float)70.0);
	var_435_bool = var_432_bool == 0; //@nz
	if(var_435_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	CreateDialog(var_428_object);
	var_436_int = 0;
	func_6775(var_436_int);
	@@var_428_object:SetNPCName(var_436_int);
	var_437_int = 0;
	func_6773(var_437_int);
	@@var_428_object:SetNPCDescription(var_437_int);
	var_438_string = "";
	func_6777(var_438_string);
	@@var_428_object:SetPhoto(var_438_string);
	var_439_string = "";
	func_6779(var_439_string);
	@@var_428_object:SetPhoto2(var_439_string);
	var_440_int = 0;
	func_8098(var_440_int);
	@@var_428_object:SetPlayerName(var_440_int);
	IsOverrideActive(var_429_bool);
	var_441_bool = var_429_bool;
	if(var_441_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	DoDialog(var_428_object);
	var_442_bool = 0; var_443_object = Obj();
	func_6598(Obj());
	var_444_object = var_443_object;
	func_6407(var_442_bool, var_443_object);
	var_445_object = Obj(); var_446_object = Obj();
	var_422_object = var_445_object;
	var_428_object = var_446_object;
	TaskCall(3);
	func_1076(var_447_object, var_448_object, var_449_string, var_450_bool, var_445_object, var_446_object);
	TaskReturn();
	@@var_428_object:IsDialogEnd(var_431_bool);
	
Label_1058:
	var_505_bool = var_431_bool == 0; //@nz
	if(var_505_bool != 0) {
		sync();
		@@var_428_object:IsDialogEnd(var_431_bool);
		goto Label_1058;
	}
	var_422_object = Obj();
	func_6389();
	StopDialog(var_428_object);
	@@var_428_object:GetReturnValue((int)-1);
	var_430_int = var_421_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6630(var_111_object, var_112_string)
{
	var_113_object = Obj(); var_114_object = Obj(); var_115_object = Obj(); var_116_object = Obj();
	GetMainOutdoorScene(var_115_object);
	var_118_int = var_112_string + ".bin";
	AddBlankActor(var_116_object, var_115_object, var_112_string, var_118_int);
	var_116_object = var_111_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5096(var_0_object, var_1_object, var_2_object, var_3_string, var_1026_object, var_1027_object)
{
	var_0_object = var_1027_object;
	var_1_object = var_1026_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1033_string = "";
		func_5168(var_1027_object, "Neutral");
		@@@var_0_object:SetMessage((int)527640);
		@@@var_0_object:ClearReplies();
		var_1042_bool = 0;
		var_1042_bool = 0;
		var_1043_bool = 0; var_1044_object = Obj();
		var_1044_object = var_1_object;
		func_7547(var_1044_object);
		if(var_1043_bool != 0) {
			var_1049_bool = 0; var_1050_object = Obj();
			var_1050_object = var_1_object;
			func_7535(var_1050_object);
			if(var_1049_bool != 0) {
				var_1042_bool = 1;
			}
		}
		if(var_1042_bool != 0) {
			@@@var_0_object:AddReply((int)527642, (int)28990, (int)28989);
		}
		@@@var_0_object:AddReply((int)527641, (int)-1, (int)28988);
		goto Label_5138;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13ec";
	}
Label_5138:
	var_1061_bool = 0;
	func_6781(var_1061_bool);
	if(var_1061_bool != 0) {

	Label_5142:
		lshWaitForAnimEnd();
		var_1062_string = var_3_string;
		if(var_1062_string != 0) {
		} else {
			var_1063_string = "";
			var_1063_string = var_2_object;
			func_6545(var_1063_string);
			goto Label_5142;
	}
		PlayAnimation("all", "idle");

	Label_5157:
		WaitForAnimEnd();
		var_1066_string = var_3_string;
		if(var_1066_string != 0) {
			goto Label_5167;
		}
		PlayAnimation("all", "idle");
		goto Label_5157;
	}
	goto Label_5167;
	
Label_5167:
	return 0;
	
}


func_7656()
{
	var_132_object = Obj(); var_133_object = Obj();
	CreateDiaryEntry(var_133_object, (int)497, (int)1, (int)528064);
	var_137_bool = 0; var_138_object = Obj(); var_139_int = 0;
	var_133_object = var_138_object;
	func_8020(var_137_bool, var_138_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7148()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_6641(var_187_int, var_188_int)
{
	var_189_object = Obj(); var_190_object = Obj();
	CreateIntVector(var_190_object);
	@@var_190_object:add(var_187_int);
	@@var_190_object:add(var_188_int);
	SendWorldWndMessage((int)3, var_190_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7154(var_168_object)
{
	var_169_object = Obj(); var_170_string = ""; var_171_float = 0;
	func_8048(Obj());
	var_172_object = var_169_object;
	func_8065(var_169_object, "pt_map_georg", (float)2);
	var_192_object = Obj();
	func_8048(var_192_object);
	@@var_168_object:ShowMap(var_192_object);
	return 0;
}


func_7669()
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateDiaryEntry(var_123_object, (int)496, (int)1, (int)528063);
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0;
	var_123_object = var_128_object;
	func_8020(var_127_bool, var_128_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8184()
{
	func_8159();
	return 0;
}


func_8188(var_74_object, var_309_object)
{
	var_75_bool = GlobalVars[1];
	var_76_bool = var_75_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_77_int = 0; var_78_object = Obj();
		var_74_object = var_78_object;
		TaskCall(4);
		func_1699(var_79_object, var_77_int, var_78_object);
		TaskReturn();
		var_302_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_303_bool = 0; var_304_int = 0;
	func_6743(var_303_bool, (int)1);
	if(var_303_bool != 0) {
		var_307_int = 0; var_308_object = Obj();
		var_74_object = var_308_object;
		TaskCall(0);
		func_0(var_309_object, var_307_int, var_308_object);
		TaskReturn();
		var_416_bool = (int)2000 == var_309_object;
		if(var_416_bool != 0) {
			ShowWindow("people.xml", (bool)1);
		}
		return 0;
	}
	var_419_bool = 0; var_420_int = 0;
	func_6743(var_419_bool, (int)2);
	if(var_419_bool != 0) {
		var_421_int = 0; var_422_object = Obj();
		var_74_object = var_422_object;
		TaskCall(2);
		func_995(var_423_object, var_421_int, var_422_object);
		TaskReturn();
		return 0;
	}
	var_507_bool = 0; var_508_int = 0;
	func_6743(var_507_bool, (int)3);
	if(var_507_bool != 0) {
		var_509_int = 0; var_510_object = Obj();
		var_74_object = var_510_object;
		TaskCall(6);
		func_1902(var_511_object, var_509_int, var_510_object);
		TaskReturn();
		return 0;
	}
	var_605_bool = 0; var_606_int = 0;
	func_6743(var_605_bool, (int)4);
	if(var_605_bool != 0) {
		var_607_int = 0; var_608_object = Obj();
		var_74_object = var_608_object;
		TaskCall(8);
		func_2450(var_609_object, var_607_int, var_608_object);
		TaskReturn();
		return 0;
	}
	var_700_bool = 0; var_701_int = 0;
	func_6743(var_700_bool, (int)5);
	if(var_700_bool != 0) {
		var_702_int = 0; var_703_object = Obj();
		var_74_object = var_703_object;
		TaskCall(10);
		func_3095(var_704_object, var_702_int, var_703_object);
		TaskReturn();
		return 0;
	}
	var_798_bool = 0; var_799_int = 0;
	func_6743(var_798_bool, (int)6);
	if(var_798_bool != 0) {
		var_800_int = 0; var_801_object = Obj();
		var_74_object = var_801_object;
		TaskCall(14);
		func_4278(var_802_object, var_800_int, var_801_object);
		TaskReturn();
		return 0;
	}
	var_927_bool = 0; var_928_int = 0;
	func_6743(var_927_bool, (int)7);
	if(var_927_bool != 0) {
		var_929_int = 0; var_930_object = Obj();
		var_74_object = var_930_object;
		TaskCall(12);
		func_3765(var_931_object, var_929_int, var_930_object);
		TaskReturn();
		return 0;
	}
	var_1000_bool = 0; var_1001_int = 0;
	func_6743(var_1000_bool, (int)11);
	if(var_1000_bool != 0) {
		var_1002_int = 0; var_1003_object = Obj();
		var_74_object = var_1003_object;
		TaskCall(16);
		func_5015(var_1004_object, var_1002_int, var_1003_object);
		TaskReturn();
		return 0;
	}
	var_1071_bool = 0; var_1072_int = 0;
	func_6743(var_1071_bool, (int)12);
	if(var_1071_bool != 0) {
		var_1073_int = 0; var_1074_object = Obj();
		var_74_object = var_1074_object;
		TaskCall(18);
		func_5416(var_1075_object, var_1073_int, var_1074_object);
		TaskReturn();
		return 0;
	}
	var_1132_int = 0; var_1133_object = Obj();
	var_74_object = var_1133_object;
	TaskCall(20);
	func_5785(var_1134_object, var_1132_int, var_1133_object);
	TaskReturn();
	return 0;
}


func_6653(var_174_object, var_175_int)
{
	var_176_int = 0; var_177_int = 0;
	var_178_object = Obj(); var_179_string = ""; var_180_int = 0;
	var_174_object = var_178_object;
	var_175_int = var_180_int;
	func_6289(var_178_object, "money", var_180_int);
	var_185_bool = var_175_int > (int)0;
	if(var_185_bool != 0) {
		GetInvItemByName(var_177_int, "Money");
		var_187_int = 0; var_188_int = 0;
		var_177_int = var_187_int;
		var_175_int = var_188_int;
		func_6641(var_187_int, var_188_int);
	}
	return 2;
}


