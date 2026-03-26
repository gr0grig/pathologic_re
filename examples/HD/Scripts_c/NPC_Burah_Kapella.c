// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,ShowWindow/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Strength|W:Fear|W:Impatience|W:Sympathy|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Kapella.png|W:ui/NPC_Kapella_b.png|W:pt_map_notkin|A:ShowMap|W:oob1Kapella1|W:oob1Kapella2|W:oob1Kapella3|W:b1KapellaGotoLaska|W:pt_map_laska|A:AddMark|W:b1KapellaGotoNotkin|W:oob1Kapella4|W:oob2Kapella1|W:oob8Kapella1|W:oob8Kapella2|W:b8q01KapellaGotoKlara|W:pt_map_mishka|W:b10q01TalkKapella|W:oob10Kapella1|W:b1ResqueList|W:money1000 is given|W:oob9Kapella1|W:b9q03|W:b9q03KapellaGotoSpi4ka|W:pt_map_spi4ka|W:quest_b9_03|W:init_house_spi4ka|W:place_follower|W:init_bonefires|W:completed|W:playsound|W:givemoney|W:giveitem|W:b10q04KapellaGotoBlock|W:pt_map_uprava_admin|W:b3KapellaVisit|W:b1BurahHome|W:b1BurahFatherHome|W:pt_b1q05_patrol_house|W:oob11Kapella1|W:b11q02|W:quest_b11_02|W:oob10Kapella2|W:b10q03|W:b10q03KapellaGotoMishka|W:quest_b10_03|W:oob10Kapella3|W:b10KapellaVisit|W:oob12Kapella1|W:b1q01|W:kapella beads is given|W:d11q06KapellaBeads|W:mapmark|W:money3000 is given|W:resque_list|A:SetReturnValue|W:b3q02KapellaGotoNotkin|W:quest_b3_02|W:place_grabitel1|W:oob3Kapella1|W:b8q01|W:b10q01|W:b9q03AglajaTalk|W:b9q03BadInit|W:b9q03BonefiresCount|W:b10q04GirlGotoKapella|W:b3q02|W:b3q02Dead|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:vol_|A:size|A:get|W:people.xml
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x159b
// @RUN_TASK: 20
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x262 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4f7 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8e4 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa20 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc64 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xfb0 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1211 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1414 vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1571 vars=int,int
// @TASK_20: vars=cvector params=0
// @EVENT_7: op=0x15e7 vars=int
// @EVENT_6: op=0x160d vars=
// @EVENT_5: op=0x161c vars=
// @EVENT_45: op=0x1629 vars=bool
// @EVENT_0: op=0x1635 vars=object
// @PE: 0x51,0x90,0xa6,0x1cd,0x24c,0x262,0x457,0x4e1,0x4f7,0x894,0x8ce,0x8e4,0x9a4,0xa0a,0xa20,0xbbb,0xc4e,0xc64,0xeeb,0xf9a,0xfb0,0x1194,0x11fb,0x1211,0x13bf,0x13fe,0x1414,0x1521,0x155b,0x1571,0x15e7,0x160d,0x1629,0x185c,0x1884,0x1894,0x189a,0x18a0,0x18bf,0x18c5,0x18cb,0x18d1,0x18e7,0x18ed,0x18f3,0x18f9,0x1903,0x1932,0x193c,0x1942,0x195c,0x196c,0x198d,0x199d,0x19a3,0x19b3,0x19bd,0x19e1,0x19e7,0x19ed,0x19f3,0x19ff,0x1a0a,0x1a10,0x1a20,0x1a2a,0x1a33,0x1a57,0x1a5d,0x1a67,0x1a73,0x1a7f,0x1a8b,0x1a97,0x1aa3,0x1aaf,0x1abb,0x1ac7,0x1ad3,0x1adf,0x1aeb,0x1af7,0x1b01,0x1b0d,0x1b19,0x1b25,0x1b31,0x1b3d,0x1b49,0x1b55,0x1b61,0x1b6d,0x1b79,0x1b85,0x1b91,0x1b9d,0x1ba9,0x1bb5,0x1bc1,0x1bcd,0x1bd9,0x1cec,0x1d32,0x1d36

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_6100();
		var_56_bool = var_52_cvector == (int)20654;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_6341();
		}
		var_62_bool = var_51_bool == (int)19384;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_144(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518275);
			@@@var_0_object:ClearReplies();
			var_81_bool = 0; var_82_object = Obj();
			var_82_object = var_1_object;
			func_7117(var_82_object);
			if(var_81_bool != 0) {
				@@@var_0_object:AddReply((int)519482, (int)20655, (int)20654);
			}
			@@@var_0_object:AddReply((int)518276, (int)-1, (int)19385);
			return 0;
		}
		var_96_bool = var_51_bool == (int)20655;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_144(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)519483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519484, (int)20662, (int)20656);
			@@@var_0_object:AddReply((int)519485, (int)20658, (int)20657);
			return 0;
		}
		var_106_bool = var_51_bool == (int)20658;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_144(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519486);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519487, (int)20660, (int)20659);
			@@@var_0_object:AddReply((int)527738, (int)29091, (int)29090);
			return 0;
		}
		var_116_bool = var_51_bool == (int)29091;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_144(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527740, (int)20660, (int)29092);
			return 0;
		}
		var_123_bool = var_51_bool == (int)20660;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_144(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519488);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519489, (int)20662, (int)20661);
			return 0;
		}
		var_130_bool = var_51_bool == (int)20662;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_144(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)519490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527741, (int)29096, (int)29094);
			@@@var_0_object:AddReply((int)527742, (int)29096, (int)29095);
			return 0;
		}
		var_140_bool = var_51_bool == (int)29096;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_144(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527744, (int)29098, (int)29097);
			return 0;
		}
		var_147_bool = var_51_bool == (int)29098;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_144(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527745);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519491, (int)20665, (int)20664);
			return 0;
		}
		var_154_bool = var_51_bool == (int)20665;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_144(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519493, (int)-1, (int)20666);
			return 0;
		}
		var_3_string = true;
		var_160_bool = 0;
		func_6274(var_160_bool);
		if(var_160_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_6100();
		var_56_bool = var_52_cvector == (int)19479;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_6743();
		}
		var_62_bool = var_52_cvector == (int)19482;
		if(var_62_bool != 0) {
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_6712();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_6276(var_127_object);
		}
		var_153_bool = var_52_cvector == (int)19486;
		if(var_153_bool != 0) {
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_6712();
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_6276(var_157_object);
		}
		var_159_bool = var_52_cvector == (int)19489;
		if(var_159_bool != 0) {
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_6749();
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_6688(var_174_object);
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_6460();
		}
		var_199_bool = var_52_cvector == (int)20330;
		if(var_199_bool != 0) {
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_6749();
		}
		var_203_bool = var_52_cvector == (int)19492;
		if(var_203_bool != 0) {
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_6749();
			var_206_object = Obj(); var_207_object = Obj();
			var_206_object = var_1_object;
			var_207_object = var_0_object;
			func_6393(var_207_object);
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_6460();
		}
		var_214_bool = var_52_cvector == (int)20325;
		if(var_214_bool != 0) {
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_6749();
		}
		var_218_bool = var_51_bool == (int)19478;
		if(var_218_bool != 0) {
			var_219_object = Obj(); var_220_object = Obj();
			var_219_object = var_1_object;
			var_220_object = var_0_object;
			func_6508();
			var_223_string = "";
			func_588(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518365);
			@@@var_0_object:ClearReplies();
			var_241_bool = 0; var_242_object = Obj();
			var_242_object = var_1_object;
			func_7021(var_242_object);
			if(var_241_bool != 0) {
				@@@var_0_object:AddReply((int)518366, (int)19481, (int)19479);
			}
			var_252_bool = 0;
			var_252_bool = 0;
			var_253_bool = 0; var_254_object = Obj();
			var_254_object = var_1_object;
			func_7021(var_254_object);
			var_255_bool = var_253_bool == 0; //@nz
			if(var_255_bool != 0) {
				var_256_bool = 0; var_257_object = Obj();
				var_257_object = var_1_object;
				func_7009(var_257_object);
				if(var_256_bool != 0) {
					var_252_bool = 1;
				}
			}
			if(var_252_bool != 0) {
				@@@var_0_object:AddReply((int)518371, (int)19485, (int)19484);
			}
			var_265_bool = 0;
			var_265_bool = 0;
			var_266_bool = 0; var_267_object = Obj();
			var_267_object = var_1_object;
			func_7033(var_267_object);
			if(var_266_bool != 0) {
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_7045(var_273_object);
				if(var_272_bool != 0) {
					var_265_bool = 1;
				}
			}
			if(var_265_bool != 0) {
				@@@var_0_object:AddReply((int)518374, (int)19488, (int)19487);
			}
			var_281_bool = 0;
			var_281_bool = 0;
			var_282_bool = 0; var_283_object = Obj();
			var_283_object = var_1_object;
			func_7033(var_283_object);
			if(var_282_bool != 0) {
				var_284_bool = 0; var_285_object = Obj();
				var_285_object = var_1_object;
				func_7045(var_285_object);
				var_286_bool = var_284_bool == 0; //@nz
				if(var_286_bool != 0) {
					var_281_bool = 1;
				}
			}
			if(var_281_bool != 0) {
				@@@var_0_object:AddReply((int)518377, (int)19491, (int)19490);
			}
			@@@var_0_object:AddReply((int)518367, (int)-1, (int)19480);
			return 0;
		}
		var_294_bool = var_51_bool == (int)19491;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_588(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)518378);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519177, (int)20319, (int)20318);
			return 0;
		}
		var_301_bool = var_51_bool == (int)20319;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_588(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)519178);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519179, (int)20321, (int)20320);
			return 0;
		}
		var_308_bool = var_51_bool == (int)20321;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_588(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)519180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519181, (int)20323, (int)20322);
			return 0;
		}
		var_315_bool = var_51_bool == (int)20323;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_588(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518379, (int)-1, (int)19492);
			@@@var_0_object:AddReply((int)519184, (int)-1, (int)20325);
			return 0;
		}
		var_325_bool = var_51_bool == (int)19488;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_588(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)518375);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519185, (int)20327, (int)20326);
			return 0;
		}
		var_332_bool = var_51_bool == (int)20327;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_588(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519186);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519187, (int)20329, (int)20328);
			return 0;
		}
		var_339_bool = var_51_bool == (int)20329;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_588(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518376, (int)-1, (int)19489);
			@@@var_0_object:AddReply((int)519189, (int)-1, (int)20330);
			return 0;
		}
		var_349_bool = var_51_bool == (int)19485;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_588(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)518372);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518373, (int)-1, (int)19486);
			return 0;
		}
		var_356_bool = var_51_bool == (int)19481;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_588(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)518368);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519191, (int)20333, (int)20332);
			@@@var_0_object:AddReply((int)519193, (int)20335, (int)20334);
			return 0;
		}
		var_366_bool = var_51_bool == (int)20335;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_588(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519195, (int)20333, (int)20336);
			@@@var_0_object:AddReply((int)519196, (int)-1, (int)20338);
			return 0;
		}
		var_376_bool = var_51_bool == (int)20333;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_588(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519192);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518369, (int)-1, (int)19482);
			@@@var_0_object:AddReply((int)518370, (int)-1, (int)19483);
			return 0;
		}
		var_3_string = true;
		var_385_bool = 0;
		func_6274(var_385_bool);
		if(var_385_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x263";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_6100();
		var_56_bool = var_52_cvector == (int)21023;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_6698();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_6707(var_96_object);
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_6387();
		}
		var_103_bool = var_52_cvector == (int)21026;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_6698();
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_6707(var_107_object);
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_6387();
		}
		var_111_bool = var_52_cvector == (int)21029;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_6698();
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_6707(var_115_object);
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_6387();
		}
		var_119_bool = var_52_cvector == (int)21032;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_6698();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_6707(var_123_object);
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_6387();
		}
		var_127_bool = var_52_cvector == (int)20978;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_6298();
		}
		var_133_bool = var_52_cvector == (int)20990;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_6304();
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_6310();
		}
		var_162_bool = var_52_cvector == (int)21002;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_6666();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_6643();
		}
		var_199_bool = var_52_cvector == (int)21003;
		if(var_199_bool != 0) {
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_6666();
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_6643();
		}
		var_205_bool = var_52_cvector == (int)21004;
		if(var_205_bool != 0) {
			var_206_object = Obj(); var_207_object = Obj();
			var_206_object = var_1_object;
			var_207_object = var_0_object;
			func_6666();
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_6643();
		}
		var_211_bool = var_52_cvector == (int)21662;
		if(var_211_bool != 0) {
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_6335();
		}
		var_217_bool = var_52_cvector == (int)21668;
		if(var_217_bool != 0) {
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_6514();
			var_234_object = Obj(); var_235_object = Obj();
			var_234_object = var_1_object;
			var_235_object = var_0_object;
			func_6541(var_235_object);
		}
		var_261_bool = var_52_cvector == (int)21672;
		if(var_261_bool != 0) {
			var_262_object = Obj(); var_263_object = Obj();
			var_262_object = var_1_object;
			var_263_object = var_0_object;
			func_6514();
			var_264_object = Obj(); var_265_object = Obj();
			var_264_object = var_1_object;
			var_265_object = var_0_object;
			func_6541(var_265_object);
		}
		var_267_bool = var_51_bool == (int)20972;
		if(var_267_bool != 0) {
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_7057(var_269_object);
			if(var_268_bool != 0) {
				var_274_string = "";
				func_1249(var_52_cvector, "Sympathy");
				@@@var_0_object:SetMessage((int)519812);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)519813, (int)20974, (int)20973);
				@@@var_0_object:AddReply((int)527076, (int)28374, (int)28373);
				@@@var_0_object:AddReply((int)519816, (int)-1, (int)20976);
				return 0;
			}
			var_301_bool = 0; var_302_object = Obj();
			var_302_object = var_1_object;
			func_7069(var_302_object);
			if(var_301_bool != 0) {
				var_307_object = Obj(); var_308_object = Obj();
				var_307_object = var_1_object;
				var_308_object = var_0_object;
				func_6292();
				var_311_string = "";
				func_1249(var_52_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)519851);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)527084, (int)28383, (int)28382);
				return 0;
			}
			var_316_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519817);
			@@@var_0_object:ClearReplies();
			var_318_bool = 0; var_319_object = Obj();
			var_319_object = var_1_object;
			func_7081(var_319_object);
			if(var_318_bool != 0) {
				@@@var_0_object:AddReply((int)519818, (int)20979, (int)20978);
			}
			var_327_bool = 0; var_328_object = Obj();
			var_328_object = var_1_object;
			func_7093(var_328_object);
			if(var_327_bool != 0) {
				@@@var_0_object:AddReply((int)519830, (int)20991, (int)20990);
			}
			var_336_bool = 0; var_337_object = Obj();
			var_337_object = var_1_object;
			func_7105(var_337_object);
			if(var_336_bool != 0) {
				@@@var_0_object:AddReply((int)520449, (int)21663, (int)21662);
			}
			@@@var_0_object:AddReply((int)519850, (int)-1, (int)21011);
			return 0;
		}
		var_349_bool = var_51_bool == (int)21663;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_1249(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)520450);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520451, (int)21665, (int)21664);
			return 0;
		}
		var_356_bool = var_51_bool == (int)21665;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520453, (int)21667, (int)21666);
			@@@var_0_object:AddReply((int)520458, (int)-1, (int)21672);
			return 0;
		}
		var_366_bool = var_51_bool == (int)21667;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_1249(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)520454);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520455, (int)-1, (int)21668);
			return 0;
		}
		var_373_bool = var_51_bool == (int)20991;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519832, (int)20993, (int)20992);
			@@@var_0_object:AddReply((int)519846, (int)21007, (int)21006);
			return 0;
		}
		var_383_bool = var_51_bool == (int)21007;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519847);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519848, (int)20999, (int)21008);
			@@@var_0_object:AddReply((int)519849, (int)20999, (int)21010);
			return 0;
		}
		var_393_bool = var_51_bool == (int)20993;
		if(var_393_bool != 0) {
			var_394_string = "";
			func_1249(var_52_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)519833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519834, (int)20995, (int)20994);
			return 0;
		}
		var_400_bool = var_51_bool == (int)20995;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_1249(var_52_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)519835);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519836, (int)20997, (int)20996);
			return 0;
		}
		var_407_bool = var_51_bool == (int)20997;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519837);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519838, (int)20999, (int)20998);
			@@@var_0_object:AddReply((int)519845, (int)20999, (int)21005);
			return 0;
		}
		var_417_bool = var_51_bool == (int)20999;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519839);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519840, (int)21001, (int)21000);
			@@@var_0_object:AddReply((int)519844, (int)-1, (int)21004);
			return 0;
		}
		var_427_bool = var_51_bool == (int)21001;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519841);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519842, (int)-1, (int)21002);
			@@@var_0_object:AddReply((int)519843, (int)-1, (int)21003);
			return 0;
		}
		var_437_bool = var_51_bool == (int)20979;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_1249(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)519819);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519820, (int)20981, (int)20980);
			return 0;
		}
		var_444_bool = var_51_bool == (int)20981;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_1249(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)519821);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519822, (int)20983, (int)20982);
			return 0;
		}
		var_451_bool = var_51_bool == (int)20983;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519824, (int)20985, (int)20984);
			@@@var_0_object:AddReply((int)519829, (int)-1, (int)20989);
			return 0;
		}
		var_461_bool = var_51_bool == (int)20985;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_1249(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519826, (int)20987, (int)20986);
			return 0;
		}
		var_468_bool = var_51_bool == (int)20987;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519827);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519828, (int)-1, (int)20988);
			@@@var_0_object:AddReply((int)527075, (int)-1, (int)28372);
			return 0;
		}
		var_478_bool = var_51_bool == (int)28383;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527085);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527086, (int)28385, (int)28384);
			return 0;
		}
		var_485_bool = var_51_bool == (int)28385;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_1249(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)527087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527088, (int)21014, (int)28386);
			return 0;
		}
		var_492_bool = var_51_bool == (int)21014;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_1249(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)519853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519854, (int)21016, (int)21015);
			@@@var_0_object:AddReply((int)519871, (int)21016, (int)21033);
			return 0;
		}
		var_502_bool = var_51_bool == (int)21016;
		if(var_502_bool != 0) {
			var_503_string = "";
			func_1249(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519855);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519856, (int)21018, (int)21017);
			return 0;
		}
		var_509_bool = var_51_bool == (int)21018;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_1249(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519858, (int)21020, (int)21019);
			@@@var_0_object:AddReply((int)527143, (int)28443, (int)28442);
			return 0;
		}
		var_519_bool = var_51_bool == (int)28443;
		if(var_519_bool != 0) {
			var_520_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527144);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527145, (int)21020, (int)28444);
			return 0;
		}
		var_526_bool = var_51_bool == (int)21020;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_1249(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)519859);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519860, (int)21022, (int)21021);
			@@@var_0_object:AddReply((int)519866, (int)21028, (int)21027);
			@@@var_0_object:AddReply((int)519870, (int)-1, (int)21032);
			return 0;
		}
		var_539_bool = var_51_bool == (int)21028;
		if(var_539_bool != 0) {
			var_540_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519867);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519868, (int)-1, (int)21029);
			@@@var_0_object:AddReply((int)519869, (int)21025, (int)21030);
			return 0;
		}
		var_549_bool = var_51_bool == (int)21022;
		if(var_549_bool != 0) {
			var_550_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519861);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519862, (int)-1, (int)21023);
			@@@var_0_object:AddReply((int)519863, (int)21025, (int)21024);
			return 0;
		}
		var_559_bool = var_51_bool == (int)21025;
		if(var_559_bool != 0) {
			var_560_string = "";
			func_1249(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519864);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519865, (int)-1, (int)21026);
			return 0;
		}
		var_566_bool = var_51_bool == (int)28374;
		if(var_566_bool != 0) {
			var_567_string = "";
			func_1249(var_52_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)527077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527078, (int)-1, (int)28375);
			return 0;
		}
		var_573_bool = var_51_bool == (int)20974;
		if(var_573_bool != 0) {
			var_574_string = "";
			func_1249(var_52_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)519814);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519815, (int)-1, (int)20975);
			return 0;
		}
		var_3_string = true;
		var_579_bool = 0;
		func_6274(var_579_bool);
		if(var_579_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4f8";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_6100();
		var_56_bool = var_51_bool == (int)28309;
		if(var_56_bool != 0) {
			var_57_string = "";
			func_2254(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527023);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527024, (int)21951, (int)28310);
			@@@var_0_object:AddReply((int)527025, (int)21951, (int)28311);
			return 0;
		}
		var_82_bool = var_51_bool == (int)21951;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_2254(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520740);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520741, (int)21953, (int)21952);
			@@@var_0_object:AddReply((int)520748, (int)21955, (int)21960);
			return 0;
		}
		var_92_bool = var_51_bool == (int)21953;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_2254(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520742);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520743, (int)21955, (int)21954);
			@@@var_0_object:AddReply((int)520747, (int)21955, (int)21958);
			return 0;
		}
		var_102_bool = var_51_bool == (int)21955;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_2254(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520744);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520745, (int)-1, (int)21956);
			@@@var_0_object:AddReply((int)520746, (int)-1, (int)21957);
			return 0;
		}
		var_3_string = true;
		var_111_bool = 0;
		func_6274(var_111_bool);
		if(var_111_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8e5";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_6100();
		var_56_bool = var_52_cvector == (int)22569;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_6353();
		}
		var_62_bool = var_52_cvector == (int)22571;
		if(var_62_bool != 0) {
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_6359();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_6666();
		}
		var_86_bool = var_51_bool == (int)22566;
		if(var_86_bool != 0) {
			var_87_bool = 0; var_88_object = Obj();
			var_88_object = var_1_object;
			func_6771(var_88_object);
			if(var_87_bool != 0) {
				var_95_object = Obj(); var_96_object = Obj();
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_6347();
				var_99_string = "";
				func_2570(var_52_cvector, "Sympathy");
				@@@var_0_object:SetMessage((int)521388);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)521389, (int)25279, (int)22567);
				@@@var_0_object:AddReply((int)523995, (int)25286, (int)25285);
				return 0;
			}
			var_123_string = "";
			func_2570(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521390);
			@@@var_0_object:ClearReplies();
			var_125_bool = 0;
			var_125_bool = 0;
			var_126_bool = 0; var_127_object = Obj();
			var_127_object = var_1_object;
			func_6759(var_127_object);
			if(var_126_bool != 0) {
				var_132_bool = 0; var_133_object = Obj();
				var_133_object = var_1_object;
				func_6783(var_133_object);
				if(var_132_bool != 0) {
					var_125_bool = 1;
				}
			}
			if(var_125_bool != 0) {
				@@@var_0_object:AddReply((int)521391, (int)22570, (int)22569);
			}
			@@@var_0_object:AddReply((int)521394, (int)-1, (int)22572);
			return 0;
		}
		var_145_bool = var_51_bool == (int)22570;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_2570(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521392);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521393, (int)-1, (int)22571);
			return 0;
		}
		var_152_bool = var_51_bool == (int)25286;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_2570(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)523996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523997, (int)25288, (int)25287);
			return 0;
		}
		var_159_bool = var_51_bool == (int)25288;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_2570(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)523998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523999, (int)25279, (int)25289);
			@@@var_0_object:AddReply((int)524000, (int)25279, (int)25290);
			return 0;
		}
		var_169_bool = var_51_bool == (int)25279;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_2570(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523989);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523990, (int)25281, (int)25280);
			return 0;
		}
		var_176_bool = var_51_bool == (int)25281;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_2570(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)523991);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523992, (int)25283, (int)25282);
			@@@var_0_object:AddReply((int)524001, (int)25294, (int)25293);
			return 0;
		}
		var_186_bool = var_51_bool == (int)25294;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_2570(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)524002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524003, (int)25283, (int)25295);
			@@@var_0_object:AddReply((int)524004, (int)25297, (int)25296);
			return 0;
		}
		var_196_bool = var_51_bool == (int)25297;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_2570(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)524005);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530821, (int)32132, (int)32131);
			return 0;
		}
		var_203_bool = var_51_bool == (int)32132;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_2570(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)530822);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530823, (int)25283, (int)32133);
			return 0;
		}
		var_210_bool = var_51_bool == (int)25283;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_2570(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)523993);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523994, (int)25299, (int)25284);
			return 0;
		}
		var_217_bool = var_51_bool == (int)25299;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_2570(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)524006);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524007, (int)25301, (int)25300);
			return 0;
		}
		var_224_bool = var_51_bool == (int)25301;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_2570(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)524008);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524009, (int)-1, (int)25302);
			@@@var_0_object:AddReply((int)524010, (int)-1, (int)25303);
			@@@var_0_object:AddReply((int)524011, (int)-1, (int)25304);
			return 0;
		}
		var_3_string = true;
		var_236_bool = 0;
		func_6274(var_236_bool);
		if(var_236_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa21";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_6100();
		var_56_bool = var_52_cvector == (int)32465;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_6595();
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_6666();
		}
		var_121_bool = var_52_cvector == (int)23102;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_6375();
		}
		var_127_bool = var_52_cvector == (int)32866;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_6375();
		}
		var_131_bool = var_52_cvector == (int)23651;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_6625();
		}
		var_137_bool = var_52_cvector == (int)31814;
		if(var_137_bool != 0) {
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_6381();
		}
		var_143_bool = var_52_cvector == (int)31818;
		if(var_143_bool != 0) {
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_6472();
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_6492(var_157_object);
		}
		var_183_bool = var_52_cvector == (int)32469;
		if(var_183_bool != 0) {
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_6595();
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_6666();
		}
		var_189_bool = var_51_bool == (int)32462;
		if(var_189_bool != 0) {
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_6961(var_191_object);
			if(var_190_bool != 0) {
				var_198_object = Obj(); var_199_object = Obj();
				var_198_object = var_1_object;
				var_199_object = var_0_object;
				func_6589();
				var_202_object = Obj(); var_203_object = Obj();
				var_202_object = var_1_object;
				var_203_object = var_0_object;
				func_6631();
				var_206_string = "";
				func_3150(var_52_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)531154);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531276, (int)32591, (int)32590);
				return 0;
			}
			var_227_string = "";
			func_3150(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521924);
			@@@var_0_object:ClearReplies();
			var_229_bool = 0;
			var_229_bool = 0;
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_object;
			func_6795(var_231_object);
			if(var_230_bool != 0) {
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_6807(var_237_object);
				var_242_bool = var_236_bool == 0; //@nz
				if(var_242_bool != 0) {
					var_229_bool = 1;
				}
			}
			if(var_229_bool != 0) {
				@@@var_0_object:AddReply((int)521925, (int)23656, (int)23099);
			}
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_6985(var_247_object);
			if(var_246_bool != 0) {
				@@@var_0_object:AddReply((int)522478, (int)23652, (int)23651);
			}
			var_255_bool = 0;
			var_255_bool = 0;
			var_256_bool = 0; var_257_object = Obj();
			var_257_object = var_1_object;
			func_6913(var_257_object);
			if(var_256_bool != 0) {
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_6819(var_263_object);
				if(var_262_bool != 0) {
					var_255_bool = 1;
				}
			}
			if(var_255_bool != 0) {
				@@@var_0_object:AddReply((int)530448, (int)31815, (int)31814);
			}
			var_271_bool = 0; var_272_object = Obj();
			var_272_object = var_1_object;
			func_6973(var_272_object);
			if(var_271_bool != 0) {
				@@@var_0_object:AddReply((int)531159, (int)32468, (int)32467);
			}
			@@@var_0_object:AddReply((int)521926, (int)-1, (int)23100);
			@@@var_0_object:AddReply((int)531282, (int)-1, (int)32597);
			return 0;
		}
		var_287_bool = var_51_bool == (int)32468;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_3150(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531160);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531161, (int)-1, (int)32469);
			return 0;
		}
		var_294_bool = var_51_bool == (int)31815;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_3150(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)530449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530450, (int)31817, (int)31816);
			@@@var_0_object:AddReply((int)531283, (int)32601, (int)32598);
			return 0;
		}
		var_304_bool = var_51_bool == (int)32601;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_3150(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531289, (int)32603, (int)32604);
			return 0;
		}
		var_311_bool = var_51_bool == (int)31817;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_3150(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)530451);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531287, (int)32603, (int)32602);
			@@@var_0_object:AddReply((int)531284, (int)32600, (int)32599);
			return 0;
		}
		var_321_bool = var_51_bool == (int)32600;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_3150(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)531285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531290, (int)32603, (int)32606);
			return 0;
		}
		var_328_bool = var_51_bool == (int)32603;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_3150(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)531288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530452, (int)-1, (int)31818);
			return 0;
		}
		var_335_bool = var_51_bool == (int)23652;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_3150(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)522479);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522480, (int)23654, (int)23653);
			return 0;
		}
		var_342_bool = var_51_bool == (int)23654;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_3150(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)522481);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522482, (int)-1, (int)23655);
			return 0;
		}
		var_349_bool = var_51_bool == (int)23656;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_3150(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)522483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522484, (int)23658, (int)23657);
			@@@var_0_object:AddReply((int)522492, (int)23666, (int)23665);
			return 0;
		}
		var_359_bool = var_51_bool == (int)23666;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_3150(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522493);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522494, (int)23658, (int)23667);
			return 0;
		}
		var_366_bool = var_51_bool == (int)23658;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_3150(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)522485);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522486, (int)23660, (int)23659);
			@@@var_0_object:AddReply((int)522495, (int)23670, (int)23669);
			return 0;
		}
		var_376_bool = var_51_bool == (int)23670;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_3150(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522497, (int)23662, (int)23671);
			return 0;
		}
		var_383_bool = var_51_bool == (int)23660;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_3150(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)522487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522488, (int)23662, (int)23661);
			return 0;
		}
		var_390_bool = var_51_bool == (int)23662;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_3150(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522489);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522490, (int)23664, (int)23663);
			@@@var_0_object:AddReply((int)531512, (int)-1, (int)32866);
			return 0;
		}
		var_400_bool = var_51_bool == (int)23664;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_3150(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522491);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521928, (int)-1, (int)23102);
			return 0;
		}
		var_407_bool = var_51_bool == (int)32591;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_3150(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)531277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531278, (int)32593, (int)32592);
			@@@var_0_object:AddReply((int)531281, (int)32464, (int)32595);
			return 0;
		}
		var_417_bool = var_51_bool == (int)32593;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_3150(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)531279);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531155, (int)32464, (int)32463);
			@@@var_0_object:AddReply((int)531280, (int)-1, (int)32594);
			return 0;
		}
		var_427_bool = var_51_bool == (int)32464;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_3150(var_52_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)531156);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531157, (int)-1, (int)32465);
			@@@var_0_object:AddReply((int)531158, (int)-1, (int)32466);
			return 0;
		}
		var_3_string = true;
		var_436_bool = 0;
		func_6274(var_436_bool);
		if(var_436_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc65";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_6100();
		var_56_bool = var_52_cvector == (int)31688;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_6409();
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_6672(var_121_object);
		}
		var_147_bool = var_52_cvector == (int)31693;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_6409();
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_6672(var_151_object);
		}
		var_153_bool = var_52_cvector == (int)31722;
		if(var_153_bool != 0) {
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_6450();
		}
		var_168_bool = var_51_bool == (int)31679;
		if(var_168_bool != 0) {
			var_169_bool = 0;
			var_169_bool = 0;
			var_170_bool = 0;
			var_170_bool = 0;
			var_171_bool = 0; var_172_object = Obj();
			var_172_object = var_1_object;
			func_6831(var_172_object);
			var_179_bool = var_171_bool == 0; //@nz
			if(var_179_bool != 0) {
				var_180_bool = 0; var_181_object = Obj();
				var_181_object = var_1_object;
				func_6867(var_181_object);
				var_186_bool = var_180_bool == 0; //@nz
				if(var_186_bool != 0) {
					var_170_bool = 1;
				}
			}
			if(var_170_bool != 0) {
				var_187_bool = 0; var_188_object = Obj();
				var_188_object = var_1_object;
				func_6903(var_187_bool, var_188_object);
				if(var_187_bool != 0) {
					var_169_bool = 1;
				}
			}
			if(var_169_bool != 0) {
				var_198_string = "";
				func_3994(var_52_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)530291);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531185, (int)-1, (int)32490);
				@@@var_0_object:AddReply((int)530292, (int)-1, (int)31680);
				return 0;
			}
			var_222_bool = 0;
			var_222_bool = 0;
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_6843(var_224_object);
			if(var_223_bool != 0) {
				var_229_bool = 0; var_230_object = Obj();
				var_230_object = var_1_object;
				func_6903(var_229_bool, var_230_object);
				if(var_229_bool != 0) {
					var_222_bool = 1;
				}
			}
			if(var_222_bool != 0) {
				var_231_object = Obj(); var_232_object = Obj();
				var_231_object = var_1_object;
				var_232_object = var_0_object;
				func_6403();
				var_235_string = "";
				func_3994(var_52_cvector, "Impatience");
				@@@var_0_object:SetMessage((int)530293);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531188, (int)32494, (int)32493);
				@@@var_0_object:AddReply((int)531193, (int)32496, (int)32498);
				return 0;
			}
			var_243_string = "";
			func_3994(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530302);
			@@@var_0_object:ClearReplies();
			var_245_bool = 0;
			var_245_bool = 0;
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_6855(var_247_object);
			if(var_246_bool != 0) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_6903(var_252_bool, var_253_object);
				if(var_252_bool != 0) {
					var_245_bool = 1;
				}
			}
			if(var_245_bool != 0) {
				@@@var_0_object:AddReply((int)530303, (int)31692, (int)31691);
			}
			var_257_bool = 0;
			var_257_bool = 0;
			var_258_bool = 0; var_259_object = Obj();
			var_259_object = var_1_object;
			func_6879(var_259_object);
			if(var_258_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_6891(var_265_object);
				if(var_264_bool != 0) {
					var_257_bool = 1;
				}
			}
			if(var_257_bool != 0) {
				@@@var_0_object:AddReply((int)530333, (int)31721, (int)31720);
			}
			@@@var_0_object:AddReply((int)530306, (int)-1, (int)31694);
			return 0;
		}
		var_277_bool = var_51_bool == (int)31721;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_3994(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531186, (int)32492, (int)32491);
			return 0;
		}
		var_284_bool = var_51_bool == (int)32492;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_3994(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530335, (int)-1, (int)31722);
			return 0;
		}
		var_291_bool = var_51_bool == (int)31692;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_3994(var_52_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)530304);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530305, (int)-1, (int)31693);
			return 0;
		}
		var_298_bool = var_51_bool == (int)32494;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_3994(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)531189);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531190, (int)32496, (int)32495);
			@@@var_0_object:AddReply((int)531192, (int)32500, (int)32497);
			return 0;
		}
		var_308_bool = var_51_bool == (int)32500;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_3994(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531196, (int)32496, (int)32502);
			@@@var_0_object:AddReply((int)531195, (int)-1, (int)32501);
			return 0;
		}
		var_318_bool = var_51_bool == (int)32496;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_3994(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)531191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530294, (int)31683, (int)31682);
			@@@var_0_object:AddReply((int)531197, (int)31685, (int)32504);
			return 0;
		}
		var_328_bool = var_51_bool == (int)31683;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_3994(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530295);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530296, (int)31685, (int)31684);
			return 0;
		}
		var_335_bool = var_51_bool == (int)31685;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_3994(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530298, (int)31687, (int)31686);
			@@@var_0_object:AddReply((int)531198, (int)32507, (int)32506);
			return 0;
		}
		var_345_bool = var_51_bool == (int)32507;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_3994(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531200, (int)31687, (int)32508);
			@@@var_0_object:AddReply((int)531201, (int)-1, (int)32509);
			return 0;
		}
		var_355_bool = var_51_bool == (int)31687;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_3994(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530299);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530300, (int)-1, (int)31688);
			@@@var_0_object:AddReply((int)530301, (int)-1, (int)31689);
			return 0;
		}
		var_3_string = true;
		var_364_bool = 0;
		func_6274(var_364_bool);
		if(var_364_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfb1";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_6100();
		var_56_bool = var_52_cvector == (int)32424;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_6563();
		}
		var_101_bool = var_52_cvector == (int)32430;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_6563();
		}
		var_105_bool = var_52_cvector == (int)32449;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_6579();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_6655(var_123_object);
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_6466();
		}
		var_151_bool = var_51_bool == (int)32423;
		if(var_151_bool != 0) {
			var_152_bool = 0; var_153_object = Obj();
			var_153_object = var_1_object;
			func_6925(var_153_object);
			if(var_152_bool != 0) {
				var_160_object = Obj(); var_161_object = Obj();
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_6557();
				var_164_string = "";
				func_4603(var_52_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)531105);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531107, (int)32678, (int)32425);
				@@@var_0_object:AddReply((int)531353, (int)32678, (int)32685);
				return 0;
			}
			var_188_string = "";
			func_4603(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531108);
			@@@var_0_object:ClearReplies();
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_6937(var_191_object);
			if(var_190_bool != 0) {
				@@@var_0_object:AddReply((int)531109, (int)32429, (int)32427);
			}
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_6949(var_200_object);
			if(var_199_bool != 0) {
				@@@var_0_object:AddReply((int)531129, (int)32448, (int)32447);
			}
			@@@var_0_object:AddReply((int)531110, (int)-1, (int)32428);
			return 0;
		}
		var_212_bool = var_51_bool == (int)32448;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_4603(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531130);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531365, (int)32702, (int)32701);
			return 0;
		}
		var_219_bool = var_51_bool == (int)32702;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_4603(var_52_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)531366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531367, (int)32704, (int)32703);
			@@@var_0_object:AddReply((int)531369, (int)32704, (int)32705);
			return 0;
		}
		var_229_bool = var_51_bool == (int)32704;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_4603(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)531368);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531131, (int)-1, (int)32449);
			return 0;
		}
		var_236_bool = var_51_bool == (int)32429;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_4603(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531112, (int)-1, (int)32430);
			return 0;
		}
		var_243_bool = var_51_bool == (int)32678;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_4603(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)531346);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531347, (int)32680, (int)32679);
			@@@var_0_object:AddReply((int)531354, (int)32687, (int)32686);
			return 0;
		}
		var_253_bool = var_51_bool == (int)32687;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_4603(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531355);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531356, (int)32680, (int)32688);
			@@@var_0_object:AddReply((int)531357, (int)-1, (int)32689);
			return 0;
		}
		var_263_bool = var_51_bool == (int)32680;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_4603(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)531348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531349, (int)32682, (int)32681);
			@@@var_0_object:AddReply((int)531358, (int)32692, (int)32691);
			return 0;
		}
		var_273_bool = var_51_bool == (int)32692;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_4603(var_52_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)531359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531360, (int)32682, (int)32693);
			return 0;
		}
		var_280_bool = var_51_bool == (int)32682;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_4603(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)531350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531351, (int)32684, (int)32683);
			@@@var_0_object:AddReply((int)531362, (int)32697, (int)32696);
			return 0;
		}
		var_290_bool = var_51_bool == (int)32697;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_4603(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531363);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531364, (int)32684, (int)32698);
			return 0;
		}
		var_297_bool = var_51_bool == (int)32684;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_4603(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)531352);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531106, (int)-1, (int)32424);
			@@@var_0_object:AddReply((int)531361, (int)-1, (int)32695);
			return 0;
		}
		var_3_string = true;
		var_306_bool = 0;
		func_6274(var_306_bool);
		if(var_306_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1212";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_6100();
		var_56_bool = var_52_cvector == (int)36934;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_6637();
		}
		var_62_bool = var_51_bool == (int)36933;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_5118(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535258);
			@@@var_0_object:ClearReplies();
			var_81_bool = 0; var_82_object = Obj();
			var_82_object = var_1_object;
			func_6997(var_82_object);
			if(var_81_bool != 0) {
				@@@var_0_object:AddReply((int)535259, (int)36983, (int)36934);
			}
			@@@var_0_object:AddReply((int)535304, (int)-1, (int)36982);
			return 0;
		}
		var_96_bool = var_51_bool == (int)36983;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_5118(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)535305);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535306, (int)36985, (int)36984);
			@@@var_0_object:AddReply((int)535318, (int)36998, (int)36997);
			return 0;
		}
		var_106_bool = var_51_bool == (int)36998;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_5118(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535319);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535320, (int)36990, (int)36999);
			@@@var_0_object:AddReply((int)535321, (int)36985, (int)37001);
			return 0;
		}
		var_116_bool = var_51_bool == (int)36985;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_5118(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)535307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535308, (int)36987, (int)36986);
			return 0;
		}
		var_123_bool = var_51_bool == (int)36987;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_5118(var_52_cvector, "Strength");
			@@@var_0_object:SetMessage((int)535309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535311, (int)36990, (int)36989);
			@@@var_0_object:AddReply((int)535313, (int)36990, (int)36991);
			return 0;
		}
		var_133_bool = var_51_bool == (int)36990;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_5118(var_52_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)535312);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535310, (int)36994, (int)36988);
			@@@var_0_object:AddReply((int)535314, (int)-1, (int)36993);
			return 0;
		}
		var_143_bool = var_51_bool == (int)36994;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_5118(var_52_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)535315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535316, (int)-1, (int)36995);
			@@@var_0_object:AddReply((int)535317, (int)-1, (int)36996);
			return 0;
		}
		var_3_string = true;
		var_152_bool = 0;
		func_6274(var_152_bool);
		if(var_152_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1415";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_cvector)
{
	if((int)1 != 0) {
		func_6100();
		var_56_bool = var_51_int == (int)42560;
		if(var_56_bool != 0) {
			var_57_string = "";
			func_5467(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_81_bool = 0;
		func_6274(var_81_bool);
		if(var_81_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1572";
	
}


task_20_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_int)
{
	var_53_bool = var_51_int == (int)10;
	if(var_53_bool != 0) {
		func_5603();
		var_55_bool = 0;
		var_55_bool = 0;
		var_56_bool = 0;
		func_5824(var_56_bool);
		if(var_56_bool != 0) {
			var_59_bool = 0;
			func_5572(var_59_bool);
			if(var_59_bool != 0) {
				var_55_bool = 1;
			}
		}
		if(var_55_bool != 0) {
			var_76_bool = 0;
			func_5552(var_76_bool);
			if(var_76_bool != 0) {
				var_95_bool = 0; var_96_object = Obj();
				func_6107(Obj());
				var_97_object = var_96_object;
				func_5974(var_95_bool, var_96_object);
			}
		} else {
			func_5567(var_51_int);
			func_5594();
		}
	}
	return 0;
	
}


task_20_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	func_5785();
	func_5603();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_20_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	StopGroup0();
	func_5603();
	var_52_string = "";
	func_6054("Neutral");
	func_5594();
	return 0;
}


task_20_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_bool)
{
	var_52_bool = var_51_bool;
	if(var_52_bool != 0) {
		func_5594();
	} else {
		var_58_string = "";
		func_6054("Neutral");
	}
	return 0;
	
}


task_20_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_object)
{
	var_52_bool = 0; var_53_bool = 0;
	IsOverrideActive(var_53_bool);
	var_54_bool = var_53_bool == 0; //@nz
	if(var_54_bool != 0) {
		EventDisable(0);
		func_5785();
		var_55_bool = 0; var_56_object = Obj();
		var_51_object = var_56_object;
		func_5815(var_55_bool, var_56_object);
		EventEnable(0);
		var_69_object = Obj();
		var_51_object = var_69_object;
		func_7478(var_53_bool, var_69_object);
		var_1156_string = "";
		func_6054("Neutral");
		func_5603();
		func_5594();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	var_51_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_5538(var_50_cvector);
	return 0;
}


func_0(var_0_object, var_421_int, var_422_object)
{
	var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0; var_428_object = Obj(); var_429_bool = 0; var_430_int = 0; var_431_bool = 0;
	var_0_object = var_422_object;
	var_432_bool = 0; var_433_object = Obj(); var_434_float = 0;
	var_422_object = var_433_object;
	func_5829(var_432_bool, var_433_object, (float)70.0);
	var_435_bool = var_432_bool == 0; //@nz
	if(var_435_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	CreateDialog(var_428_object);
	var_436_int = 0;
	func_6268(var_436_int);
	@@var_428_object:SetNPCName(var_436_int);
	var_437_int = 0;
	func_6266(var_437_int);
	@@var_428_object:SetNPCDescription(var_437_int);
	var_438_string = "";
	func_6270(var_438_string);
	@@var_428_object:SetPhoto(var_438_string);
	var_439_string = "";
	func_6272(var_439_string);
	@@var_428_object:SetPhoto2(var_439_string);
	var_440_int = 0;
	func_7387(var_440_int);
	@@var_428_object:SetPlayerName(var_440_int);
	IsOverrideActive(var_429_bool);
	var_441_bool = var_429_bool;
	if(var_441_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	DoDialog(var_428_object);
	var_442_bool = 0; var_443_object = Obj();
	func_6107(Obj());
	var_444_object = var_443_object;
	func_5916(var_442_bool, var_443_object);
	var_445_object = Obj(); var_446_object = Obj();
	var_422_object = var_445_object;
	var_428_object = var_446_object;
	TaskCall(1);
	func_81(var_447_object, var_448_object, var_449_string, var_450_bool, var_445_object, var_446_object);
	TaskReturn();
	@@var_428_object:IsDialogEnd(var_431_bool);
	
Label_63:
	var_481_bool = var_431_bool == 0; //@nz
	if(var_481_bool != 0) {
		sync();
		@@var_428_object:IsDialogEnd(var_431_bool);
		goto Label_63;
	}
	var_422_object = Obj();
	func_5898();
	StopDialog(var_428_object);
	@@var_428_object:GetReturnValue((int)-1);
	var_430_int = var_421_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1030(var_0_object, var_302_int, var_303_object)
{
	var_305_object = Obj(); var_306_bool = 0; var_307_int = 0; var_308_bool = 0; var_309_object = Obj(); var_310_bool = 0; var_311_int = 0; var_312_bool = 0;
	var_0_object = var_303_object;
	var_313_bool = 0; var_314_object = Obj(); var_315_float = 0;
	var_303_object = var_314_object;
	func_5829(var_313_bool, var_314_object, (float)70.0);
	var_316_bool = var_313_bool == 0; //@nz
	if(var_316_bool != 0) {
		var_302_int = -2;
		return 8;
	}
	CreateDialog(var_309_object);
	var_317_int = 0;
	func_6268(var_317_int);
	@@var_309_object:SetNPCName(var_317_int);
	var_318_int = 0;
	func_6266(var_318_int);
	@@var_309_object:SetNPCDescription(var_318_int);
	var_319_string = "";
	func_6270(var_319_string);
	@@var_309_object:SetPhoto(var_319_string);
	var_320_string = "";
	func_6272(var_320_string);
	@@var_309_object:SetPhoto2(var_320_string);
	var_321_int = 0;
	func_7387(var_321_int);
	@@var_309_object:SetPlayerName(var_321_int);
	IsOverrideActive(var_310_bool);
	var_322_bool = var_310_bool;
	if(var_322_bool != 0) {
		var_302_int = -2;
		return 8;
	}
	DoDialog(var_309_object);
	var_323_bool = 0; var_324_object = Obj();
	func_6107(Obj());
	var_325_object = var_324_object;
	func_5916(var_323_bool, var_324_object);
	var_326_object = Obj(); var_327_object = Obj();
	var_303_object = var_326_object;
	var_309_object = var_327_object;
	TaskCall(5);
	func_1111(var_328_object, var_329_object, var_330_string, var_331_bool, var_326_object, var_327_object);
	TaskReturn();
	@@var_309_object:IsDialogEnd(var_312_bool);
	
Label_1093:
	var_414_bool = var_312_bool == 0; //@nz
	if(var_414_bool != 0) {
		sync();
		@@var_309_object:IsDialogEnd(var_312_bool);
		goto Label_1093;
	}
	var_303_object = Obj();
	func_5898();
	StopDialog(var_309_object);
	@@var_309_object:GetReturnValue((int)-1);
	var_311_int = var_302_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6151(var_176_object, var_177_int)
{
	var_178_int = 0; var_179_int = 0;
	var_180_object = Obj(); var_181_string = ""; var_182_int = 0;
	var_176_object = var_180_object;
	var_177_int = var_182_int;
	func_5798(var_180_object, "money", var_182_int);
	var_187_bool = var_177_int > (int)0;
	if(var_187_bool != 0) {
		GetInvItemByName(var_179_int, "Money");
		var_189_int = 0; var_190_int = 0;
		var_179_int = var_189_int;
		var_177_int = var_190_int;
		func_6139(var_189_int, var_190_int);
	}
	return 2;
}


func_6666()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_2570(var_2_object, var_632_string)
{
	var_633_bool = 0;
	func_6274(var_633_bool);
	var_634_bool = var_633_bool == 0; //@nz
	if(var_634_bool != 0) {
		return 0;
	}
	var_635_bool = var_632_string == var_2_object;
	if(var_635_bool != 0) {
		return 0;
	}
	var_636_string = ""; var_637_bool = 0;
	var_632_string = var_636_string;
	var_639_bool = var_632_string == "";
	if(var_639_bool != 0) {
		var_637_bool = 0;
	} else {
		var_637_bool = 1;
	}
	func_6070(var_636_string, var_637_bool);
	var_2_object = var_632_string;
	return 0;
	
}


func_7179()
{
	var_108_object = Obj(); var_109_object = Obj();
	CreateDiaryEntry(var_109_object, (int)602, (int)2, (int)531153);
	var_113_bool = 0; var_114_object = Obj(); var_115_int = 0;
	var_109_object = var_114_object;
	func_7309(var_113_bool, var_114_object, (int)598);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6672(var_121_object)
{
	var_122_object = Obj(); var_123_string = ""; var_124_float = 0;
	func_7337(Obj());
	var_125_object = var_122_object;
	func_7354(var_122_object, "pt_map_spi4ka", (float)2);
	var_145_object = Obj();
	func_7337(var_145_object);
	@@var_121_object:ShowMap(var_145_object);
	return 0;
}


func_7192()
{
	var_84_object = Obj(); var_85_object = Obj();
	CreateDiaryEntry(var_85_object, (int)599, (int)2, (int)531150);
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0;
	var_85_object = var_90_object;
	func_7309(var_89_bool, var_90_object, (int)598);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6170(var_130_object, var_131_object, var_132_int)
{
	var_133_int = 0; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_int = 0; var_138_bool = 0;
	@@var_131_object:GetItemID(var_136_int);
	GetInvItemProperty(var_137_int, var_136_int, "Category");
	@@var_130_object:AddItem(var_138_bool, var_131_object, var_137_int, var_132_int);
	var_140_bool = var_138_bool == 0; //@nz
	if(var_140_bool != 0) {
		@@var_130_object:DropItems(var_131_object, var_132_int);
	} else {
		var_141_int = 0; var_142_int = 0;
		var_136_int = var_141_int;
		var_132_int = var_142_int;
		func_6139(var_141_int, var_142_int);
	}
	return 6;
	
}


func_6688(var_173_object)
{
	Trace("money3000 is given");
	var_176_object = Obj(); var_177_int = 0;
	var_173_object = var_176_object;
	func_6151(var_176_object, (int)3000);
	return 0;
}


func_7205()
{
	var_175_object = Obj(); var_176_object = Obj();
	CreateDiaryEntry(var_176_object, (int)717, (int)1, (int)538493);
	var_180_bool = 0; var_181_object = Obj(); var_182_int = 0;
	var_176_object = var_181_object;
	func_7309(var_180_bool, var_181_object, (int)242);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6698()
{
	SetVariable("resque_list", (int)1);
	func_7474();
	return 0;
}


func_6189(var_125_object, var_126_string, var_127_int)
{
	var_128_object = Obj(); var_129_object = Obj();
	CreateInvItem(var_129_object);
	@@var_129_object:SetItemName(var_126_string);
	var_130_object = Obj(); var_131_object = Obj(); var_132_int = 0;
	var_125_object = var_130_object;
	var_129_object = var_131_object;
	var_127_int = var_132_int;
	func_6170(var_130_object, var_131_object, var_132_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7218()
{
	var_81_object = Obj(); var_82_object = Obj();
	CreateDiaryEntry(var_82_object, (int)227, (int)2, (int)519655);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_82_object = var_87_object;
	func_7309(var_86_bool, var_87_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6707(var_96_object)
{
	@@var_96_object:SetReturnValue((int)2000);
	return 0;
}


func_6712()
{
	var_65_object = Obj(); var_66_object = Obj();
	func_7337(Obj());
	var_67_object = var_66_object;
	var_78_float = 0;
	func_6214(var_78_float);
	@@var_66_object:AddMark("b3q02KapellaGotoNotkin", "pt_map_notkin", (int)0, (int)519652, var_78_float);
	func_7218();
	func_7244();
	var_112_object = Obj(); var_113_string = "";
	func_6128(var_112_object, "quest_b3_02");
	var_120_bool = 0; var_121_string = ""; var_122_string = "";
	func_6202(var_120_bool, "quest_b3_02", "place_grabitel1");
	return 2;
}
EMIT "Stack[-1] = 0";


func_6202(var_116_bool, var_117_string, var_118_string)
{
	var_119_object = Obj(); var_120_object = Obj();
	FindActor(var_120_object, var_117_string);
	var_121_bool = var_120_object == 0; //@ne
	if(var_121_bool != 0) {
		var_116_bool = 0;
		return 2;
	}
	Trigger(var_120_object, var_118_string);
	var_116_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7231()
{
	var_162_object = Obj(); var_163_object = Obj();
	CreateDiaryEntry(var_163_object, (int)233, (int)2, (int)519661);
	var_167_bool = 0; var_168_object = Obj(); var_169_int = 0;
	var_163_object = var_168_object;
	func_7309(var_167_bool, var_168_object, (int)227);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2115(var_0_object, var_72_int, var_73_object)
{
	var_75_object = Obj(); var_76_bool = 0; var_77_int = 0; var_78_bool = 0; var_79_object = Obj(); var_80_bool = 0; var_81_int = 0; var_82_bool = 0;
	var_0_object = var_73_object;
	var_83_bool = 0; var_84_object = Obj(); var_85_float = 0;
	var_73_object = var_84_object;
	func_5829(var_83_bool, var_84_object, (float)70.0);
	var_130_bool = var_83_bool == 0; //@nz
	if(var_130_bool != 0) {
		var_72_int = -2;
		return 8;
	}
	CreateDialog(var_79_object);
	var_131_int = 0;
	func_6268(var_131_int);
	@@var_79_object:SetNPCName(var_131_int);
	var_132_int = 0;
	func_6266(var_132_int);
	@@var_79_object:SetNPCDescription(var_132_int);
	var_133_string = "";
	func_6270(var_133_string);
	@@var_79_object:SetPhoto(var_133_string);
	var_134_string = "";
	func_6272(var_134_string);
	@@var_79_object:SetPhoto2(var_134_string);
	var_135_int = 0;
	func_7387(var_135_int);
	@@var_79_object:SetPlayerName(var_135_int);
	IsOverrideActive(var_80_bool);
	var_143_bool = var_80_bool;
	if(var_143_bool != 0) {
		var_72_int = -2;
		return 8;
	}
	DoDialog(var_79_object);
	var_144_bool = 0; var_145_object = Obj();
	func_6107(Obj());
	var_146_object = var_145_object;
	func_5916(var_144_bool, var_145_object);
	var_239_object = Obj(); var_240_object = Obj();
	var_73_object = var_239_object;
	var_79_object = var_240_object;
	TaskCall(7);
	func_2196(var_241_object, var_242_object, var_243_string, var_244_bool, var_239_object, var_240_object);
	TaskReturn();
	@@var_79_object:IsDialogEnd(var_82_bool);
	
Label_2178:
	var_288_bool = var_82_bool == 0; //@nz
	if(var_288_bool != 0) {
		sync();
		@@var_79_object:IsDialogEnd(var_82_bool);
		goto Label_2178;
	}
	var_73_object = Obj();
	func_5898();
	StopDialog(var_79_object);
	@@var_79_object:GetReturnValue((int)-1);
	var_81_int = var_72_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6214(var_74_float)
{
	var_75_float = 0; var_76_float = 0;
	GetGameTime(var_76_float);
	var_76_float = var_74_float;
	return 2;
}


func_6219(var_199_int)
{
	var_200_float = 0; var_201_float = 0;
	GetGameTime(var_201_float);
	var_203_int = 0;
	var_203_int = var_201_float / (int)24;
	var_199_int = (int)1 + var_203_int;
	return 2;
}


func_588(var_2_object, var_520_string)
{
	var_521_bool = 0;
	func_6274(var_521_bool);
	var_522_bool = var_521_bool == 0; //@nz
	if(var_522_bool != 0) {
		return 0;
	}
	var_523_bool = var_520_string == var_2_object;
	if(var_523_bool != 0) {
		return 0;
	}
	var_524_string = ""; var_525_bool = 0;
	var_520_string = var_524_string;
	var_527_bool = var_520_string == "";
	if(var_527_bool != 0) {
		var_525_bool = 0;
	} else {
		var_525_bool = 1;
	}
	func_6070(var_524_string, var_525_bool);
	var_2_object = var_520_string;
	return 0;
	
}


func_7244()
{
	var_104_object = Obj(); var_105_object = Obj();
	CreateDiaryEntry(var_105_object, (int)228, (int)2, (int)519656);
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0;
	var_105_object = var_110_object;
	func_7309(var_109_bool, var_110_object, (int)227);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3150(var_2_object, var_864_string)
{
	var_865_bool = 0;
	func_6274(var_865_bool);
	var_866_bool = var_865_bool == 0; //@nz
	if(var_866_bool != 0) {
		return 0;
	}
	var_867_bool = var_864_string == var_2_object;
	if(var_867_bool != 0) {
		return 0;
	}
	var_868_string = ""; var_869_bool = 0;
	var_864_string = var_868_string;
	var_871_bool = var_864_string == "";
	if(var_871_bool != 0) {
		var_869_bool = 0;
	} else {
		var_869_bool = 1;
	}
	func_6070(var_868_string, var_869_bool);
	var_2_object = var_864_string;
	return 0;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_445_object, var_446_object)
{
	var_0_object = var_446_object;
	var_1_object = var_445_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_452_string = "";
		func_144(var_446_object, "Neutral");
		@@@var_0_object:SetMessage((int)518275);
		@@@var_0_object:ClearReplies();
		var_461_bool = 0; var_462_object = Obj();
		var_462_object = var_1_object;
		func_7117(var_462_object);
		if(var_461_bool != 0) {
			@@@var_0_object:AddReply((int)519482, (int)20655, (int)20654);
		}
		@@@var_0_object:AddReply((int)518276, (int)-1, (int)19385);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_473_bool = 0;
	func_6274(var_473_bool);
	if(var_473_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_474_string = var_3_string;
		if(var_474_string != 0) {
		} else {
			var_475_string = "";
			var_475_string = var_2_object;
			func_6054(var_475_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_478_string = var_3_string;
		if(var_478_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_5714()
{
	var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_int = 0; var_67_bool = 0;
	WaitForAnimEnd();
	var_68_bool = 0;
	func_5824(var_68_bool);
	var_69_bool = var_68_bool == 0; //@nz
	if(var_69_bool != 0) {
		return 12;
	}
	func_6249((int)0);
	var_70_int = var_62_int;
	var_63_int = 0;
	
Label_5728:
	var_83_bool = 0;
	var_83_bool = 0;
	var_85_bool = var_63_int < (int)5;
	if(var_85_bool != 0) {
		var_86_bool = 0;
		func_5824(var_86_bool);
		if(var_86_bool != 0) {
			var_83_bool = 1;
		}
	}
	if(var_83_bool != 0) {
		var_87_bool = var_62_int == 0; //@nz
		if(var_87_bool != 0) {
			Sleep((int)3, var_64_bool);
			var_89_bool = var_64_bool == 0; //@nz
			if(var_89_bool != 0) {
			} else {
		} else {
				irand(var_65_int, var_62_int);
				irand(var_66_int, (int)5);
				var_95_bool = var_66_int != (int)0;
				if(var_95_bool != 0) {
					var_65_int = 0;
				}
				var_97_string = ""; var_98_int = 0;
				var_65_int = var_98_int;
				func_6242(var_97_string, var_98_int);
				PlayAnimation("all", var_97_string);
				WaitForAnimEnd(var_67_bool);
				var_99_bool = var_67_bool == 0; //@nz
				if(var_99_bool == 0) goto Label_5769;
				goto Label_5780;
		}
		Label_5769:
			var_90_bool = 0;
			func_5783(var_90_bool);
			var_91_bool = var_90_bool == 0; //@nz
			if(var_91_bool != 0) {
				goto Label_5780;
			}
			ResetAAS();
			var_63_int = var_63_int + (int)1;
			goto Label_5728;

		}
	}
Label_5780:
	ResetAAS();
	return 12;
	
}


func_6228(var_731_int)
{
	var_732_float = 0; var_733_float = 0;
	GetGameTime(var_733_float);
	var_734_int = 0;
	var_733_float = var_734_int;
	var_731_int = var_734_int % (int)24;
	return 2;
}


func_6743()
{
	SetVariable("oob3Kapella1", (int)1);
	return 0;
}


func_1111(var_0_object, var_1_object, var_2_object, var_3_string, var_326_object, var_327_object)
{
	var_0_object = var_327_object;
	var_1_object = var_326_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_333_bool = 0; var_334_object = Obj();
		var_334_object = var_1_object;
		func_7057(var_334_object);
		if(var_333_bool != 0) {
			var_341_string = "";
			func_1249(var_327_object, "Sympathy");
			@@@var_0_object:SetMessage((int)519812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519813, (int)20974, (int)20973);
			@@@var_0_object:AddReply((int)527076, (int)28374, (int)28373);
			@@@var_0_object:AddReply((int)519816, (int)-1, (int)20976);
		} else {
				var_367_bool = 0; var_368_object = Obj();
				var_368_object = var_1_object;
				func_7069(var_368_object);
				if(var_367_bool != 0) {
					var_373_object = Obj(); var_374_object = Obj();
					var_373_object = var_1_object;
					var_374_object = var_0_object;
					func_6292();
					var_377_string = "";
					func_1249(var_327_object, "Neutral");
					@@@var_0_object:SetMessage((int)519851);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)527084, (int)28383, (int)28382);
					goto Label_1219;
				}
				var_382_string = "";
				func_1249(var_327_object, "Neutral");
				@@@var_0_object:SetMessage((int)519817);
				@@@var_0_object:ClearReplies();
				var_384_bool = 0; var_385_object = Obj();
				var_385_object = var_1_object;
				func_7081(var_385_object);
				if(var_384_bool != 0) {
					@@@var_0_object:AddReply((int)519818, (int)20979, (int)20978);
				}
				var_393_bool = 0; var_394_object = Obj();
				var_394_object = var_1_object;
				func_7093(var_394_object);
				if(var_393_bool != 0) {
					@@@var_0_object:AddReply((int)519830, (int)20991, (int)20990);
				}
				var_402_bool = 0; var_403_object = Obj();
				var_403_object = var_1_object;
				func_7105(var_403_object);
				if(var_402_bool != 0) {
					@@@var_0_object:AddReply((int)520449, (int)21663, (int)21662);
				}
				@@@var_0_object:AddReply((int)519850, (int)-1, (int)21011);
				goto Label_1219;
		}
	}
Label_1219:
	var_359_bool = 0;
	func_6274(var_359_bool);
	if(var_359_bool != 0) {

	Label_1223:
		lshWaitForAnimEnd();
		var_360_string = var_3_string;
		if(var_360_string != 0) {
		} else {
			var_361_string = "";
			var_361_string = var_2_object;
			func_6054(var_361_string);
			goto Label_1223;
	}
		PlayAnimation("all", "idle");

	Label_1238:
		WaitForAnimEnd();
		var_364_string = var_3_string;
		if(var_364_string != 0) {
			goto Label_1248;
		}
		PlayAnimation("all", "idle");
		goto Label_1238;

	}
	goto Label_1248;
	
Label_1248:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x45b";


func_7257()
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateDiaryEntry(var_78_object, (int)532, (int)2, (int)530344);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_78_object = var_83_object;
	func_7309(var_82_bool, var_83_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6236(var_298_bool, var_299_int)
{
	var_300_int = 0;
	func_6219(var_300_int);
	var_298_bool = var_300_int == var_299_int;
	return 0;
}


func_6749()
{
	func_7231();
	var_170_bool = 0; var_171_string = ""; var_172_string = "";
	func_6202(var_170_bool, "quest_b3_02", "completed");
	return 0;
}


func_6242(var_76_string, var_77_int)
{
	var_78_string = ""; var_79_string = "";
	var_80_int = var_77_int;
	if(var_80_int != 0) {
		"idle" = "idle" + var_77_int;
	}
	var_79_string = var_76_string;
	return 2;
}


func_7270()
{
	var_156_object = Obj(); var_157_object = Obj();
	CreateDiaryEntry(var_157_object, (int)541, (int)2, (int)530353);
	var_161_bool = 0; var_162_object = Obj(); var_163_int = 0;
	var_157_object = var_162_object;
	func_7309(var_161_bool, var_162_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6759(var_658_bool)
{
	var_660_int = 0; var_661_string = "";
	func_6123(var_660_int, "b8q01");
	var_663_bool = var_660_int == (int)2;
	if(var_663_bool != 0) {
		var_658_bool = 1;
		return 0;
	}
	var_658_bool = 0;
	return 0;
}


func_6249(var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0;
	var_73_int = 0;
	
Label_6251:
	var_76_string = ""; var_77_int = 0;
	var_73_int = var_77_int;
	func_6242(var_76_string, var_77_int);
	HasAnimation(var_74_bool, "all", var_76_string);
	var_81_bool = var_74_bool == 0; //@nz
	if(var_81_bool != 0) {
	} else {
		var_73_int = var_73_int + (int)1;
		goto Label_6251;
	}
	var_73_int = var_70_int;
	return 4;
	
}


func_6771(var_622_bool)
{
	var_624_int = 0; var_625_string = "";
	func_6123(var_624_int, "oob8Kapella1");
	var_627_bool = var_624_int == (int)0;
	if(var_627_bool != 0) {
		var_622_bool = 1;
		return 0;
	}
	var_622_bool = 0;
	return 0;
}


func_7283()
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateDiaryEntry(var_101_object, (int)533, (int)2, (int)530345);
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0;
	var_101_object = var_106_object;
	func_7309(var_105_bool, var_106_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4603(var_2_object, var_988_string)
{
	var_989_bool = 0;
	func_6274(var_989_bool);
	var_990_bool = var_989_bool == 0; //@nz
	if(var_990_bool != 0) {
		return 0;
	}
	var_991_bool = var_988_string == var_2_object;
	if(var_991_bool != 0) {
		return 0;
	}
	var_992_string = ""; var_993_bool = 0;
	var_988_string = var_992_string;
	var_995_bool = var_988_string == "";
	if(var_995_bool != 0) {
		var_993_bool = 0;
	} else {
		var_993_bool = 1;
	}
	func_6070(var_992_string, var_993_bool);
	var_2_object = var_988_string;
	return 0;
	
}


func_6266(var_132_int)
{
	var_132_int = 515538;
	return 0;
}


func_6268(var_131_int)
{
	var_131_int = 502863;
	return 0;
}


func_6270(var_133_string)
{
	var_133_string = "ui/NPC_Kapella.png";
	return 0;
}


func_6783(var_664_bool)
{
	var_666_int = 0; var_667_string = "";
	func_6123(var_666_int, "oob8Kapella2");
	var_669_bool = var_666_int == (int)0;
	if(var_669_bool != 0) {
		var_664_bool = 1;
		return 0;
	}
	var_664_bool = 0;
	return 0;
}


func_6272(var_134_string)
{
	var_134_string = "ui/NPC_Kapella_b.png";
	return 0;
}


func_7296(var_75_object)
{
	var_76_object = Obj(); var_77_object = Obj();
	GetDiaryRoot(var_77_object);
	var_78_bool = var_77_object == 0; //@nz
	if(var_78_bool != 0) {
		Trace("Can't retrieve diary root");
		var_75_object = 0;
		return 2;
	}
	var_77_object = var_75_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6274(var_126_bool)
{
	var_126_bool = 1;
	return 0;
}


func_6276(var_127_object)
{
	var_128_object = Obj(); var_129_string = ""; var_130_float = 0;
	func_7337(Obj());
	var_131_object = var_128_object;
	func_7354(var_128_object, "pt_map_notkin", (float)2);
	var_151_object = Obj();
	func_7337(var_151_object);
	@@var_127_object:ShowMap(var_151_object);
	return 0;
}


func_6795(var_887_bool)
{
	var_889_int = 0; var_890_string = "";
	func_6123(var_889_int, "b10q01");
	var_892_bool = var_889_int == (int)4;
	if(var_892_bool != 0) {
		var_887_bool = 1;
		return 0;
	}
	var_887_bool = 0;
	return 0;
}


func_7309(var_66_bool, var_67_object, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_int = 0; var_72_object = Obj(); var_73_object = Obj(); var_74_int = 0;
	func_7296(Obj());
	var_75_object = var_72_object;
	@@var_72_object:Find(var_68_int, var_73_object);
	var_80_bool = var_73_object == 0; //@nz
	if(var_80_bool != 0) {
		var_82_int = "Can't find diary parent with id: " + var_68_int;
		Trace(var_82_int);
		var_66_bool = 0;
		return 6;
	}
	@@var_73_object:AddChild(var_67_object);
	SendWorldWndMessage((int)7);
	@@var_67_object:GetCategory(var_74_int);
	SetDiarySection(var_74_int);
	var_66_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_144(var_2_object, var_452_string)
{
	var_453_bool = 0;
	func_6274(var_453_bool);
	var_454_bool = var_453_bool == 0; //@nz
	if(var_454_bool != 0) {
		return 0;
	}
	var_455_bool = var_452_string == var_2_object;
	if(var_455_bool != 0) {
		return 0;
	}
	var_456_string = ""; var_457_bool = 0;
	var_452_string = var_456_string;
	var_459_bool = var_452_string == "";
	if(var_459_bool != 0) {
		var_457_bool = 0;
	} else {
		var_457_bool = 1;
	}
	func_6070(var_456_string, var_457_bool);
	var_2_object = var_452_string;
	return 0;
	
}


func_6292()
{
	SetVariable("oob1Kapella1", (int)1);
	return 0;
}


func_2196(var_0_object, var_1_object, var_2_object, var_3_string, var_239_object, var_240_object)
{
	var_0_object = var_240_object;
	var_1_object = var_239_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_246_string = "";
		func_2254(var_240_object, "Neutral");
		@@@var_0_object:SetMessage((int)527023);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)527024, (int)21951, (int)28310);
		@@@var_0_object:AddReply((int)527025, (int)21951, (int)28311);
		goto Label_2224;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x898";
	}
Label_2224:
	var_270_bool = 0;
	func_6274(var_270_bool);
	if(var_270_bool != 0) {

	Label_2228:
		lshWaitForAnimEnd();
		var_271_string = var_3_string;
		if(var_271_string != 0) {
		} else {
			var_272_string = "";
			var_272_string = var_2_object;
			func_6054(var_272_string);
			goto Label_2228;
	}
		PlayAnimation("all", "idle");

	Label_2243:
		WaitForAnimEnd();
		var_285_string = var_3_string;
		if(var_285_string != 0) {
			goto Label_2253;
		}
		PlayAnimation("all", "idle");
		goto Label_2243;
	}
	goto Label_2253;
	
Label_2253:
	return 0;
	
}


func_5118(var_2_object, var_1069_string)
{
	var_1070_bool = 0;
	func_6274(var_1070_bool);
	var_1071_bool = var_1070_bool == 0; //@nz
	if(var_1071_bool != 0) {
		return 0;
	}
	var_1072_bool = var_1069_string == var_2_object;
	if(var_1072_bool != 0) {
		return 0;
	}
	var_1073_string = ""; var_1074_bool = 0;
	var_1069_string = var_1073_string;
	var_1076_bool = var_1069_string == "";
	if(var_1076_bool != 0) {
		var_1074_bool = 0;
	} else {
		var_1074_bool = 1;
	}
	func_6070(var_1073_string, var_1074_bool);
	var_2_object = var_1069_string;
	return 0;
	
}


func_6807(var_893_bool)
{
	var_895_int = 0; var_896_string = "";
	func_6123(var_895_int, "b10q01TalkKapella");
	var_898_bool = var_895_int == (int)1;
	if(var_898_bool != 0) {
		var_893_bool = 1;
		return 0;
	}
	var_893_bool = 0;
	return 0;
}


func_5783(var_90_bool)
{
	var_90_bool = 1;
	return 0;
}


func_5785()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_6298()
{
	SetVariable("oob1Kapella2", (int)1);
	return 0;
}


func_3738(var_0_object, var_680_int, var_681_object)
{
	var_683_object = Obj(); var_684_bool = 0; var_685_int = 0; var_686_bool = 0; var_687_object = Obj(); var_688_bool = 0; var_689_int = 0; var_690_bool = 0;
	var_0_object = var_681_object;
	var_691_bool = 0; var_692_object = Obj(); var_693_float = 0;
	var_681_object = var_692_object;
	func_5829(var_691_bool, var_692_object, (float)70.0);
	var_694_bool = var_691_bool == 0; //@nz
	if(var_694_bool != 0) {
		var_680_int = -2;
		return 8;
	}
	CreateDialog(var_687_object);
	var_695_int = 0;
	func_6268(var_695_int);
	@@var_687_object:SetNPCName(var_695_int);
	var_696_int = 0;
	func_6266(var_696_int);
	@@var_687_object:SetNPCDescription(var_696_int);
	var_697_string = "";
	func_6270(var_697_string);
	@@var_687_object:SetPhoto(var_697_string);
	var_698_string = "";
	func_6272(var_698_string);
	@@var_687_object:SetPhoto2(var_698_string);
	var_699_int = 0;
	func_7387(var_699_int);
	@@var_687_object:SetPlayerName(var_699_int);
	IsOverrideActive(var_688_bool);
	var_700_bool = var_688_bool;
	if(var_700_bool != 0) {
		var_680_int = -2;
		return 8;
	}
	DoDialog(var_687_object);
	var_701_bool = 0; var_702_object = Obj();
	func_6107(Obj());
	var_703_object = var_702_object;
	func_5916(var_701_bool, var_702_object);
	var_704_object = Obj(); var_705_object = Obj();
	var_681_object = var_704_object;
	var_687_object = var_705_object;
	TaskCall(13);
	func_3819(var_706_object, var_707_object, var_708_string, var_709_bool, var_704_object, var_705_object);
	TaskReturn();
	@@var_687_object:IsDialogEnd(var_690_bool);
	
Label_3801:
	var_815_bool = var_690_bool == 0; //@nz
	if(var_815_bool != 0) {
		sync();
		@@var_687_object:IsDialogEnd(var_690_bool);
		goto Label_3801;
	}
	var_681_object = Obj();
	func_5898();
	StopDialog(var_687_object);
	@@var_687_object:GetReturnValue((int)-1);
	var_689_int = var_680_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5790(var_66_float, var_67_object)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	GetPosition(var_71_cvector);
	@@var_67_object:GetPosition(var_72_cvector);
	var_73_cvector = var_72_cvector - var_71_cvector;
	var_66_float = var_73_cvector | var_73_cvector;
	return 6;
}


func_6304()
{
	SetVariable("oob1Kapella3", (int)1);
	return 0;
}


func_6819(var_919_bool)
{
	var_921_int = 0; var_922_string = "";
	func_6123(var_921_int, "oob10Kapella1");
	var_924_bool = var_921_int == (int)0;
	if(var_924_bool != 0) {
		var_919_bool = 1;
		return 0;
	}
	var_919_bool = 0;
	return 0;
}


func_6310()
{
	var_140_object = Obj(); var_141_object = Obj();
	func_7337(Obj());
	var_142_object = var_141_object;
	var_153_float = 0;
	func_6214(var_153_float);
	@@var_141_object:AddMark("b1KapellaGotoLaska", "pt_map_laska", (int)3, (int)520037, var_153_float);
	var_160_float = 0;
	func_6214(var_160_float);
	@@var_141_object:AddMark("b1KapellaGotoNotkin", "pt_map_notkin", (int)3, (int)520038, var_160_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5798(var_180_object, var_181_string, var_182_int)
{
	var_183_int = 0; var_184_int = 0;
	@@var_180_object:GetProperty(var_181_string, var_184_int);
	var_185_int = var_184_int + var_182_int;
	@@var_180_object:SetProperty(var_181_string, var_185_int);
	return 2;
}


func_7337(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj();
	GetMainOutdoorScene(var_66_object);
	var_68_bool = var_66_object == 0; //@ne
	if(var_68_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_67_object = 0;
		var_67_object = var_63_object;
		return 4;
	}
	@@var_66_object:GetMap(var_67_object);
	var_67_object = var_63_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5805(var_59_bool, var_60_cvector)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0;
	GetPosition(var_64_cvector);
	var_65_cvector = var_60_cvector - var_64_cvector;
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_68_float = GetByIndex(var_65_cvector, 2);
	Rotate(var_67_float, var_68_float, var_66_bool);
	var_66_bool = var_59_bool;
	return 6;
}


func_6831(var_713_bool)
{
	var_715_int = 0; var_716_string = "";
	func_6123(var_715_int, "b9q03AglajaTalk");
	var_718_bool = var_715_int != (int)0;
	if(var_718_bool != 0) {
		var_713_bool = 1;
		return 0;
	}
	var_713_bool = 0;
	return 0;
}


func_5815(var_55_bool, var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	@@var_56_object:GetPosition(var_58_cvector);
	var_59_bool = 0; var_60_cvector = CVector(0,0,0);
	var_58_cvector = var_60_cvector;
	func_5805(var_59_bool, var_60_cvector);
	var_59_bool = var_55_bool;
	return 2;
}


func_7354(var_122_object, var_123_string, var_124_float)
{
	var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0; var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_object = Obj(); var_133_bool = 0;
	GetMainOutdoorScene(var_132_object);
	var_134_bool = var_132_object == 0; //@ne
	if(var_134_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_132_object:GetLocator(var_123_string, var_133_bool, var_130_cvector, var_131_cvector);
	var_136_bool = var_133_bool == 0; //@nz
	if(var_136_bool != 0) {
		var_138_int = "Warning: outdoor scene locator " + var_123_string;
		var_140_int = var_138_int + " doesnt exist";
		Trace(var_140_int);
	}
	@@var_132_object:GetMap(var_122_object);
	var_141_bool = var_122_object == 0; //@ne
	if(var_141_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_143_float = GetByIndex(var_130_cvector, 0);
	var_144_float = GetByIndex(var_130_cvector, 2);
	@@var_122_object:SetMapParams(var_143_float, var_144_float, var_124_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_6843(var_762_bool)
{
	var_764_int = 0; var_765_string = "";
	func_6123(var_764_int, "oob9Kapella1");
	var_767_bool = var_764_int == (int)0;
	if(var_767_bool != 0) {
		var_762_bool = 1;
		return 0;
	}
	var_762_bool = 0;
	return 0;
}


func_6335()
{
	SetVariable("oob1Kapella4", (int)1);
	return 0;
}


func_5824(var_52_bool)
{
	var_53_bool = 0; var_54_bool = 0;
	IsLoaded(var_54_bool);
	var_54_bool = var_52_bool;
	return 2;
}


func_5829(var_83_bool, var_84_object, var_85_float)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_bool = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_bool = 0; var_103_bool = 0;
	@@var_84_object:GetPosition(var_96_cvector);
	@@var_84_object:GetEyesHeight(var_95_float);
	var_104_float = GetByIndex(var_96_cvector, 1);
	var_104_float = var_104_float + var_95_float;
	SetByIndex(var_96_cvector, 1) = var_104_float;
	GetPosition(var_97_cvector);
	GetEyesHeight(var_95_float);
	var_105_float = GetByIndex(var_97_cvector, 1);
	var_105_float = var_105_float + var_95_float;
	SetByIndex(var_97_cvector, 1) = var_105_float;
	var_98_cvector = var_96_cvector - var_97_cvector;
	var_106_float = GetByIndex(var_98_cvector, 1);
	SetByIndex(var_98_cvector, 1) = (float)0;
	var_107_int = var_98_cvector | var_98_cvector;
	var_108_float = sqrt(var_107_int);
	var_98_cvector = var_98_cvector / var_108_float;
	var_99_cvector = -var_98_cvector;
	var_109_float = var_98_cvector * var_85_float;
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0);
	var_111_cvector = var_99_cvector ^ CVector(0.0, 1.0, 0.0);
	func_6113(var_110_cvector, var_111_cvector);
	var_119_float = var_110_cvector * (int)25;
	var_120_int = var_109_float + var_119_float;
	var_100_cvector = var_120_int - CVector(0.0, 10.0, 0.0);
	var_101_cvector = var_97_cvector + var_100_cvector;
	IsOverrideActive(var_102_bool);
	var_122_bool = var_102_bool;
	if(var_122_bool != 0) {
		var_83_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_101_cvector, var_99_cvector, (bool)1);
	var_124_float = GetByIndex(var_100_cvector, 0);
	var_125_float = GetByIndex(var_100_cvector, 2);
	Rotate(var_124_float, var_125_float);
	var_126_bool = 0;
	func_6274(var_126_bool);
	if(var_126_bool != 0) {
	} else {
		HasAnimationTrack(var_103_bool, "head");
		var_128_bool = var_103_bool;
		if(var_128_bool == 0) goto Label_5892;
		LookAsyncCamera("head");
	}
Label_5892:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_83_bool = 1;
	return 18;
	
}


func_6341()
{
	SetVariable("oob2Kapella1", (int)1);
	return 0;
}


func_6855(var_785_bool)
{
	var_787_int = 0; var_788_string = "";
	func_6123(var_787_int, "b9q03");
	var_790_bool = var_787_int == (int)0;
	if(var_790_bool != 0) {
		var_785_bool = 1;
		return 0;
	}
	var_785_bool = 0;
	return 0;
}


func_6347()
{
	SetVariable("oob8Kapella1", (int)1);
	return 0;
}


func_2254(var_2_object, var_246_string)
{
	var_247_bool = 0;
	func_6274(var_247_bool);
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
	func_6070(var_250_string, var_251_bool);
	var_2_object = var_246_string;
	return 0;
	
}


func_5328(var_0_object, var_1100_int, var_1101_object)
{
	var_1103_object = Obj(); var_1104_bool = 0; var_1105_int = 0; var_1106_bool = 0; var_1107_object = Obj(); var_1108_bool = 0; var_1109_int = 0; var_1110_bool = 0;
	var_0_object = var_1101_object;
	var_1111_bool = 0; var_1112_object = Obj(); var_1113_float = 0;
	var_1101_object = var_1112_object;
	func_5829(var_1111_bool, var_1112_object, (float)70.0);
	var_1114_bool = var_1111_bool == 0; //@nz
	if(var_1114_bool != 0) {
		var_1100_int = -2;
		return 8;
	}
	CreateDialog(var_1107_object);
	var_1115_int = 0;
	func_6268(var_1115_int);
	@@var_1107_object:SetNPCName(var_1115_int);
	var_1116_int = 0;
	func_6266(var_1116_int);
	@@var_1107_object:SetNPCDescription(var_1116_int);
	var_1117_string = "";
	func_6270(var_1117_string);
	@@var_1107_object:SetPhoto(var_1117_string);
	var_1118_string = "";
	func_6272(var_1118_string);
	@@var_1107_object:SetPhoto2(var_1118_string);
	var_1119_int = 0;
	func_7387(var_1119_int);
	@@var_1107_object:SetPlayerName(var_1119_int);
	IsOverrideActive(var_1108_bool);
	var_1120_bool = var_1108_bool;
	if(var_1120_bool != 0) {
		var_1100_int = -2;
		return 8;
	}
	DoDialog(var_1107_object);
	var_1121_bool = 0; var_1122_object = Obj();
	func_6107(Obj());
	var_1123_object = var_1122_object;
	func_5916(var_1121_bool, var_1122_object);
	var_1124_object = Obj(); var_1125_object = Obj();
	var_1101_object = var_1124_object;
	var_1107_object = var_1125_object;
	TaskCall(19);
	func_5409(var_1126_object, var_1127_object, var_1128_string, var_1129_bool, var_1124_object, var_1125_object);
	TaskReturn();
	@@var_1107_object:IsDialogEnd(var_1110_bool);
	
Label_5391:
	var_1154_bool = var_1110_bool == 0; //@nz
	if(var_1154_bool != 0) {
		sync();
		@@var_1107_object:IsDialogEnd(var_1110_bool);
		goto Label_5391;
	}
	var_1101_object = Obj();
	func_5898();
	StopDialog(var_1107_object);
	@@var_1107_object:GetReturnValue((int)-1);
	var_1109_int = var_1100_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6353()
{
	SetVariable("oob8Kapella2", (int)1);
	return 0;
}


func_6867(var_720_bool)
{
	var_722_int = 0; var_723_string = "";
	func_6123(var_722_int, "b9q03BadInit");
	var_725_bool = var_722_int != (int)0;
	if(var_725_bool != 0) {
		var_720_bool = 1;
		return 0;
	}
	var_720_bool = 0;
	return 0;
}


func_6359()
{
	var_65_object = Obj(); var_66_object = Obj();
	func_7337(Obj());
	var_67_object = var_66_object;
	var_78_float = 0;
	func_6214(var_78_float);
	@@var_66_object:AddMark("b8q01KapellaGotoKlara", "pt_map_mishka", (int)3, (int)521465, var_78_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7387(var_135_int)
{
	var_136_int = 0; var_137_int = 0;
	GetVariable("branch", var_137_int);
	var_140_bool = var_137_int == (int)0;
	if(var_140_bool != 0) {
		var_135_int = 1;
		return 2;
	EMIT "GOTO 0x1cea";
	}
	var_142_bool = var_137_int == (int)1;
	if(var_142_bool != 0) {
		var_135_int = 2;
		return 2;
	}
	var_135_int = 3;
	return 2;
}


func_6879(var_797_bool)
{
	var_799_int = 0; var_800_string = "";
	func_6123(var_799_int, "b9q03BonefiresCount");
	var_802_bool = var_799_int == (int)4;
	if(var_802_bool != 0) {
		var_797_bool = 1;
		return 0;
	}
	var_797_bool = 0;
	return 0;
}


func_1249(var_2_object, var_341_string)
{
	var_342_bool = 0;
	func_6274(var_342_bool);
	var_343_bool = var_342_bool == 0; //@nz
	if(var_343_bool != 0) {
		return 0;
	}
	var_344_bool = var_341_string == var_2_object;
	if(var_344_bool != 0) {
		return 0;
	}
	var_345_string = ""; var_346_bool = 0;
	var_341_string = var_345_string;
	var_348_bool = var_341_string == "";
	if(var_348_bool != 0) {
		var_346_bool = 0;
	} else {
		var_346_bool = 1;
	}
	func_6070(var_345_string, var_346_bool);
	var_2_object = var_341_string;
	return 0;
	
}


func_6375()
{
	SetVariable("b10q01TalkKapella", (int)1);
	return 0;
}


func_3819(var_0_object, var_1_object, var_2_object, var_3_string, var_704_object, var_705_object)
{
	var_0_object = var_705_object;
	var_1_object = var_704_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_711_bool = 0;
		var_711_bool = 0;
		var_712_bool = 0;
		var_712_bool = 0;
		var_713_bool = 0; var_714_object = Obj();
		var_714_object = var_1_object;
		func_6831(var_714_object);
		var_719_bool = var_713_bool == 0; //@nz
		if(var_719_bool != 0) {
			var_720_bool = 0; var_721_object = Obj();
			var_721_object = var_1_object;
			func_6867(var_721_object);
			var_726_bool = var_720_bool == 0; //@nz
			if(var_726_bool != 0) {
				var_712_bool = 1;
			}
		}
		if(var_712_bool != 0) {
			var_727_bool = 0; var_728_object = Obj();
			var_728_object = var_1_object;
			func_6903(var_727_bool, var_728_object);
			if(var_727_bool != 0) {
				var_711_bool = 1;
			}
		}
		if(var_711_bool != 0) {
			var_738_string = "";
			func_3994(var_705_object, "Neutral");
			@@@var_0_object:SetMessage((int)530291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531185, (int)-1, (int)32490);
			@@@var_0_object:AddReply((int)530292, (int)-1, (int)31680);
		} else {
				var_761_bool = 0;
				var_761_bool = 0;
				var_762_bool = 0; var_763_object = Obj();
				var_763_object = var_1_object;
				func_6843(var_763_object);
				if(var_762_bool != 0) {
					var_768_bool = 0; var_769_object = Obj();
					var_769_object = var_1_object;
					func_6903(var_768_bool, var_769_object);
					if(var_768_bool != 0) {
						var_761_bool = 1;
					}
				}
				if(var_761_bool != 0) {
					var_770_object = Obj(); var_771_object = Obj();
					var_770_object = var_1_object;
					var_771_object = var_0_object;
					func_6403();
					var_774_string = "";
					func_3994(var_705_object, "Impatience");
					@@@var_0_object:SetMessage((int)530293);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)531188, (int)32494, (int)32493);
					@@@var_0_object:AddReply((int)531193, (int)32496, (int)32498);
					goto Label_3964;
				}
				var_782_string = "";
				func_3994(var_705_object, "Neutral");
				@@@var_0_object:SetMessage((int)530302);
				@@@var_0_object:ClearReplies();
				var_784_bool = 0;
				var_784_bool = 0;
				var_785_bool = 0; var_786_object = Obj();
				var_786_object = var_1_object;
				func_6855(var_786_object);
				if(var_785_bool != 0) {
					var_791_bool = 0; var_792_object = Obj();
					var_792_object = var_1_object;
					func_6903(var_791_bool, var_792_object);
					if(var_791_bool != 0) {
						var_784_bool = 1;
					}
				}
				if(var_784_bool != 0) {
					@@@var_0_object:AddReply((int)530303, (int)31692, (int)31691);
				}
				var_796_bool = 0;
				var_796_bool = 0;
				var_797_bool = 0; var_798_object = Obj();
				var_798_object = var_1_object;
				func_6879(var_798_object);
				if(var_797_bool != 0) {
					var_803_bool = 0; var_804_object = Obj();
					var_804_object = var_1_object;
					func_6891(var_804_object);
					if(var_803_bool != 0) {
						var_796_bool = 1;
					}
				}
				if(var_796_bool != 0) {
					@@@var_0_object:AddReply((int)530333, (int)31721, (int)31720);
				}
				@@@var_0_object:AddReply((int)530306, (int)-1, (int)31694);
				goto Label_3964;
		}
	}
Label_3964:
	var_753_bool = 0;
	func_6274(var_753_bool);
	if(var_753_bool != 0) {

	Label_3968:
		lshWaitForAnimEnd();
		var_754_string = var_3_string;
		if(var_754_string != 0) {
		} else {
			var_755_string = "";
			var_755_string = var_2_object;
			func_6054(var_755_string);
			goto Label_3968;
	}
		PlayAnimation("all", "idle");

	Label_3983:
		WaitForAnimEnd();
		var_758_string = var_3_string;
		if(var_758_string != 0) {
			goto Label_3993;
		}
		PlayAnimation("all", "idle");
		goto Label_3983;

	}
	goto Label_3993;
	
Label_3993:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xeef";


func_6891(var_803_bool)
{
	var_805_int = 0; var_806_string = "";
	func_6123(var_805_int, "b9q03");
	var_808_bool = var_805_int == (int)1;
	if(var_808_bool != 0) {
		var_803_bool = 1;
		return 0;
	}
	var_803_bool = 0;
	return 0;
}


func_6381()
{
	SetVariable("oob10Kapella1", (int)1);
	return 0;
}


func_7404(var_69_object, var_70_bool, var_71_int)
{
	@@var_69_object:add((int)18);
	@@var_69_object:add((int)24);
	@@var_69_object:add((int)20);
	@@var_69_object:add((int)14);
	var_77_bool = var_70_bool == (bool)0;
	if(var_77_bool != 0) {
		@@var_69_object:add((int)10);
		@@var_69_object:add((int)17);
		@@var_69_object:add((int)8);
	} else {
		var_82_bool = var_71_int != (int)1;
		if(var_82_bool == 0) goto Label_7436;
		@@var_69_object:add((int)10);
	}
Label_7436:
	return 0;
	
}


func_6387()
{
	SetVariable("b1ResqueList", (int)1);
	return 0;
}


func_6903(var_727_bool, var_728_object)
{
	var_729_bool = 0; var_730_object = Obj();
	var_728_object = var_730_object;
	func_7129(var_730_object);
	if(var_729_bool != 0) {
		var_727_bool = 1;
		return 0;
	}
	var_727_bool = 0;
	return 0;
}


func_6393(var_206_object)
{
	Trace("money1000 is given");
	var_209_object = Obj(); var_210_int = 0;
	var_206_object = var_209_object;
	func_6151(var_209_object, (int)1000);
	return 0;
}


func_6913(var_913_bool)
{
	var_915_int = 0; var_916_string = "";
	func_6123(var_915_int, "b10q04GirlGotoKapella");
	var_918_bool = var_915_int != (int)0;
	if(var_918_bool != 0) {
		var_913_bool = 1;
		return 0;
	}
	var_913_bool = 0;
	return 0;
}


func_6403()
{
	SetVariable("oob9Kapella1", (int)1);
	return 0;
}


func_6409()
{
	var_59_object = Obj(); var_60_object = Obj();
	SetVariable("b9q03", (int)1);
	func_7337(Obj());
	var_63_object = var_60_object;
	var_74_float = 0;
	func_6214(var_74_float);
	@@var_60_object:AddMark("b9q03KapellaGotoSpi4ka", "pt_map_spi4ka", (int)0, (int)530307, var_74_float);
	func_7257();
	func_7283();
	var_108_bool = 0; var_109_string = ""; var_110_string = "";
	func_6202(var_108_bool, "quest_b9_03", "init_house_spi4ka");
	var_114_bool = 0; var_115_string = ""; var_116_string = "";
	func_6202(var_114_bool, "quest_b9_03", "place_follower");
	var_117_bool = 0; var_118_string = ""; var_119_string = "";
	func_6202(var_117_bool, "quest_b9_03", "init_bonefires");
	return 2;
}
EMIT "Stack[-1] = 0";


func_5898()
{
	var_290_bool = 0; var_291_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_293_bool = 0;
	func_6274(var_293_bool);
	if(var_293_bool != 0) {
	} else {
		HasAnimationTrack(var_291_bool, "head");
		var_295_bool = var_291_bool;
		if(var_295_bool == 0) goto Label_5915;
		UnlookAsync("head");
	}
Label_5915:
	return 2;
	
}


func_6925(var_978_bool)
{
	var_980_int = 0; var_981_string = "";
	func_6123(var_980_int, "oob11Kapella1");
	var_983_bool = var_980_int == (int)0;
	if(var_983_bool != 0) {
		var_978_bool = 1;
		return 0;
	}
	var_978_bool = 0;
	return 0;
}


func_7437(var_85_int)
{
	var_86_int = 0; var_87_int = 0;
	var_89_int = "vol_" + var_85_int;
	GetVariable(var_89_int, var_87_int);
	var_91_int = "vol_" + var_85_int;
	var_93_int = var_87_int | (int)8;
	SetVariable(var_91_int, var_93_int);
	return 2;
}


func_6937(var_1013_bool)
{
	var_1015_int = 0; var_1016_string = "";
	func_6123(var_1015_int, "b11q02");
	var_1018_bool = var_1015_int == (int)0;
	if(var_1018_bool != 0) {
		var_1013_bool = 1;
		return 0;
	}
	var_1013_bool = 0;
	return 0;
}


func_7449()
{
	var_61_object = Obj(); var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_object = Obj(); var_66_int = 0; var_67_int = 0; var_68_int = 0;
	CreateIntVector(var_65_object);
	var_69_object = Obj(); var_70_bool = 0; var_71_int = 0;
	var_65_object = var_69_object;
	func_7404(var_69_object, (bool)0, (int)-1);
	@@var_65_object:size(var_66_int);
	var_67_int = 0;
	
Label_7461:
	var_84_bool = var_67_int < var_66_int;
	if(var_84_bool != 0) {
		@@var_65_object:get(var_68_int, var_67_int);
		var_85_int = 0;
		var_68_int = var_85_int;
		func_7437(var_85_int);
		var_67_int = var_67_int + (int)1;
		goto Label_7461;
	}
	return 8;
}
EMIT "Stack[-4] = 0";


func_5916(var_144_bool, var_145_object)
{
	var_149_int = 0; var_150_int = 0; var_151_int = 0; var_152_int = 0;
	GetVariable("voice_common", var_151_int);
	var_154_int = var_151_int;
	if(var_154_int != 0) {
		var_155_bool = 0; var_156_object = Obj();
		var_145_object = var_156_object;
		func_5974(var_155_bool, var_156_object);
		var_185_bool = var_155_bool == 0; //@nz
		if(var_185_bool != 0) {
			var_186_bool = 0; var_187_object = Obj();
			var_145_object = var_187_object;
			func_6011(var_186_bool, var_187_object);
			var_221_bool = var_186_bool == 0; //@nz
			if(var_221_bool != 0) {
				var_144_bool = 0;
				return 4;
			}
		}
		irand(var_152_int, (int)2);
		var_223_int = var_152_int;
		if(var_223_int != 0) {
			var_226_int = var_151_int + (int)1;
			var_228_int = var_226_int % (int)3;
			SetVariable("voice_common", var_228_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_231_bool = 0; var_232_object = Obj();
		var_145_object = var_232_object;
		func_6011(var_231_bool, var_232_object);
		var_233_bool = var_231_bool == 0; //@nz
		if(var_233_bool != 0) {
			var_234_bool = 0; var_235_object = Obj();
			var_145_object = var_235_object;
			func_5974(var_234_bool, var_235_object);
			var_236_bool = var_234_bool == 0; //@nz
			if(var_236_bool != 0) {
				var_144_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_5972;
	
Label_5972:
	var_144_bool = 1;
	return 4;
	
}


func_5409(var_0_object, var_1_object, var_2_object, var_3_string, var_1124_object, var_1125_object)
{
	var_0_object = var_1125_object;
	var_1_object = var_1124_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1131_string = "";
		func_5467(var_1125_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_5437;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1525";
	}
Label_5437:
	var_1146_bool = 0;
	func_6274(var_1146_bool);
	if(var_1146_bool != 0) {

	Label_5441:
		lshWaitForAnimEnd();
		var_1147_string = var_3_string;
		if(var_1147_string != 0) {
		} else {
			var_1148_string = "";
			var_1148_string = var_2_object;
			func_6054(var_1148_string);
			goto Label_5441;
	}
		PlayAnimation("all", "idle");

	Label_5456:
		WaitForAnimEnd();
		var_1151_string = var_3_string;
		if(var_1151_string != 0) {
			goto Label_5466;
		}
		PlayAnimation("all", "idle");
		goto Label_5456;
	}
	goto Label_5466;
	
Label_5466:
	return 0;
	
}


func_6949(var_1022_bool)
{
	var_1024_int = 0; var_1025_string = "";
	func_6123(var_1024_int, "b11q02");
	var_1027_bool = var_1024_int == (int)4;
	if(var_1027_bool != 0) {
		var_1022_bool = 1;
		return 0;
	}
	var_1022_bool = 0;
	return 0;
}


func_6961(var_850_bool)
{
	var_852_int = 0; var_853_string = "";
	func_6123(var_852_int, "oob10Kapella2");
	var_855_bool = var_852_int == (int)0;
	if(var_855_bool != 0) {
		var_850_bool = 1;
		return 0;
	}
	var_850_bool = 0;
	return 0;
}


func_6450()
{
	func_7270();
	var_164_bool = 0; var_165_string = ""; var_166_string = "";
	func_6202(var_164_bool, "quest_b9_03", "completed");
	return 0;
}


func_7474()
{
	func_7449();
	return 0;
}


func_7478(var_69_object, var_304_object)
{
	var_70_bool = GlobalVars[1];
	var_71_bool = var_70_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_72_int = 0; var_73_object = Obj();
		var_69_object = var_73_object;
		TaskCall(6);
		func_2115(var_74_object, var_72_int, var_73_object);
		TaskReturn();
		var_297_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_298_bool = 0; var_299_int = 0;
	func_6236(var_298_bool, (int)1);
	if(var_298_bool != 0) {
		var_302_int = 0; var_303_object = Obj();
		var_69_object = var_303_object;
		TaskCall(4);
		func_1030(var_304_object, var_302_int, var_303_object);
		TaskReturn();
		var_416_bool = (int)2000 == var_304_object;
		if(var_416_bool != 0) {
			ShowWindow("people.xml", (bool)1);
		}
		return 0;
	}
	var_419_bool = 0; var_420_int = 0;
	func_6236(var_419_bool, (int)2);
	if(var_419_bool != 0) {
		var_421_int = 0; var_422_object = Obj();
		var_69_object = var_422_object;
		TaskCall(0);
		func_0(var_423_object, var_421_int, var_422_object);
		TaskReturn();
		return 0;
	}
	var_483_bool = 0; var_484_int = 0;
	func_6236(var_483_bool, (int)3);
	if(var_483_bool != 0) {
		var_485_int = 0; var_486_object = Obj();
		var_69_object = var_486_object;
		TaskCall(2);
		func_380(var_487_object, var_485_int, var_486_object);
		TaskReturn();
		return 0;
	}
	var_589_bool = 0; var_590_int = 0;
	func_6236(var_589_bool, (int)8);
	if(var_589_bool != 0) {
		var_591_int = 0; var_592_object = Obj();
		var_69_object = var_592_object;
		TaskCall(8);
		func_2387(var_593_object, var_591_int, var_592_object);
		TaskReturn();
		return 0;
	}
	var_678_bool = 0; var_679_int = 0;
	func_6236(var_678_bool, (int)9);
	if(var_678_bool != 0) {
		var_680_int = 0; var_681_object = Obj();
		var_69_object = var_681_object;
		TaskCall(12);
		func_3738(var_682_object, var_680_int, var_681_object);
		TaskReturn();
		return 0;
	}
	var_817_bool = 0; var_818_int = 0;
	func_6236(var_817_bool, (int)10);
	if(var_817_bool != 0) {
		var_819_int = 0; var_820_object = Obj();
		var_69_object = var_820_object;
		TaskCall(10);
		func_2922(var_821_object, var_819_int, var_820_object);
		TaskReturn();
		return 0;
	}
	var_945_bool = 0; var_946_int = 0;
	func_6236(var_945_bool, (int)11);
	if(var_945_bool != 0) {
		var_947_int = 0; var_948_object = Obj();
		var_69_object = var_948_object;
		TaskCall(14);
		func_4419(var_949_object, var_947_int, var_948_object);
		TaskReturn();
		return 0;
	}
	var_1036_bool = 0; var_1037_int = 0;
	func_6236(var_1036_bool, (int)12);
	if(var_1036_bool != 0) {
		var_1038_int = 0; var_1039_object = Obj();
		var_69_object = var_1039_object;
		TaskCall(16);
		func_4974(var_1040_object, var_1038_int, var_1039_object);
		TaskReturn();
		return 0;
	}
	var_1100_int = 0; var_1101_object = Obj();
	var_69_object = var_1101_object;
	TaskCall(18);
	func_5328(var_1102_object, var_1100_int, var_1101_object);
	TaskReturn();
	return 0;
}


func_6460()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_6973(var_928_bool)
{
	var_930_int = 0; var_931_string = "";
	func_6123(var_930_int, "b10q03");
	var_933_bool = var_930_int == (int)0;
	if(var_933_bool != 0) {
		var_928_bool = 1;
		return 0;
	}
	var_928_bool = 0;
	return 0;
}


func_6466()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_4419(var_0_object, var_947_int, var_948_object)
{
	var_950_object = Obj(); var_951_bool = 0; var_952_int = 0; var_953_bool = 0; var_954_object = Obj(); var_955_bool = 0; var_956_int = 0; var_957_bool = 0;
	var_0_object = var_948_object;
	var_958_bool = 0; var_959_object = Obj(); var_960_float = 0;
	var_948_object = var_959_object;
	func_5829(var_958_bool, var_959_object, (float)70.0);
	var_961_bool = var_958_bool == 0; //@nz
	if(var_961_bool != 0) {
		var_947_int = -2;
		return 8;
	}
	CreateDialog(var_954_object);
	var_962_int = 0;
	func_6268(var_962_int);
	@@var_954_object:SetNPCName(var_962_int);
	var_963_int = 0;
	func_6266(var_963_int);
	@@var_954_object:SetNPCDescription(var_963_int);
	var_964_string = "";
	func_6270(var_964_string);
	@@var_954_object:SetPhoto(var_964_string);
	var_965_string = "";
	func_6272(var_965_string);
	@@var_954_object:SetPhoto2(var_965_string);
	var_966_int = 0;
	func_7387(var_966_int);
	@@var_954_object:SetPlayerName(var_966_int);
	IsOverrideActive(var_955_bool);
	var_967_bool = var_955_bool;
	if(var_967_bool != 0) {
		var_947_int = -2;
		return 8;
	}
	DoDialog(var_954_object);
	var_968_bool = 0; var_969_object = Obj();
	func_6107(Obj());
	var_970_object = var_969_object;
	func_5916(var_968_bool, var_969_object);
	var_971_object = Obj(); var_972_object = Obj();
	var_948_object = var_971_object;
	var_954_object = var_972_object;
	TaskCall(15);
	func_4500(var_973_object, var_974_object, var_975_string, var_976_bool, var_971_object, var_972_object);
	TaskReturn();
	@@var_954_object:IsDialogEnd(var_957_bool);
	
Label_4482:
	var_1034_bool = var_957_bool == 0; //@nz
	if(var_1034_bool != 0) {
		sync();
		@@var_954_object:IsDialogEnd(var_957_bool);
		goto Label_4482;
	}
	var_948_object = Obj();
	func_5898();
	StopDialog(var_954_object);
	@@var_954_object:GetReturnValue((int)-1);
	var_956_int = var_947_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6472()
{
	var_146_object = Obj(); var_147_object = Obj();
	SetVariable("b10q04KapellaGotoBlock", (int)1);
	func_7337(Obj());
	var_150_object = var_147_object;
	var_155_float = 0;
	func_6214(var_155_float);
	@@var_147_object:AddMark("b10q04KapellaGotoBlock", "pt_map_uprava_admin", (int)0, (int)530548, var_155_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6985(var_903_bool)
{
	var_905_int = 0; var_906_string = "";
	func_6123(var_905_int, "oob10Kapella3");
	var_908_bool = var_905_int == (int)0;
	if(var_908_bool != 0) {
		var_903_bool = 1;
		return 0;
	}
	var_903_bool = 0;
	return 0;
}


func_2387(var_0_object, var_591_int, var_592_object)
{
	var_594_object = Obj(); var_595_bool = 0; var_596_int = 0; var_597_bool = 0; var_598_object = Obj(); var_599_bool = 0; var_600_int = 0; var_601_bool = 0;
	var_0_object = var_592_object;
	var_602_bool = 0; var_603_object = Obj(); var_604_float = 0;
	var_592_object = var_603_object;
	func_5829(var_602_bool, var_603_object, (float)70.0);
	var_605_bool = var_602_bool == 0; //@nz
	if(var_605_bool != 0) {
		var_591_int = -2;
		return 8;
	}
	CreateDialog(var_598_object);
	var_606_int = 0;
	func_6268(var_606_int);
	@@var_598_object:SetNPCName(var_606_int);
	var_607_int = 0;
	func_6266(var_607_int);
	@@var_598_object:SetNPCDescription(var_607_int);
	var_608_string = "";
	func_6270(var_608_string);
	@@var_598_object:SetPhoto(var_608_string);
	var_609_string = "";
	func_6272(var_609_string);
	@@var_598_object:SetPhoto2(var_609_string);
	var_610_int = 0;
	func_7387(var_610_int);
	@@var_598_object:SetPlayerName(var_610_int);
	IsOverrideActive(var_599_bool);
	var_611_bool = var_599_bool;
	if(var_611_bool != 0) {
		var_591_int = -2;
		return 8;
	}
	DoDialog(var_598_object);
	var_612_bool = 0; var_613_object = Obj();
	func_6107(Obj());
	var_614_object = var_613_object;
	func_5916(var_612_bool, var_613_object);
	var_615_object = Obj(); var_616_object = Obj();
	var_592_object = var_615_object;
	var_598_object = var_616_object;
	TaskCall(9);
	func_2468(var_617_object, var_618_object, var_619_string, var_620_bool, var_615_object, var_616_object);
	TaskReturn();
	@@var_598_object:IsDialogEnd(var_601_bool);
	
Label_2450:
	var_676_bool = var_601_bool == 0; //@nz
	if(var_676_bool != 0) {
		sync();
		@@var_598_object:IsDialogEnd(var_601_bool);
		goto Label_2450;
	}
	var_592_object = Obj();
	func_5898();
	StopDialog(var_598_object);
	@@var_598_object:GetReturnValue((int)-1);
	var_600_int = var_591_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6997(var_1078_bool)
{
	var_1080_int = 0; var_1081_string = "";
	func_6123(var_1080_int, "oob12Kapella1");
	var_1083_bool = var_1080_int == (int)0;
	if(var_1083_bool != 0) {
		var_1078_bool = 1;
		return 0;
	}
	var_1078_bool = 0;
	return 0;
}


func_5974(var_155_bool, var_156_object)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = "";
	var_162_string = "c";
	var_163_int = 0;
	
Label_5977:
	if((int)1 != 0) {
		var_169_int = var_163_int + (int)1;
		var_170_int = var_162_string + var_169_int;
		@@var_156_object:HasProperty(var_170_int, var_164_bool);
		var_171_bool = var_164_bool == 0; //@nz
		if(var_171_bool != 0) {
		} else {
			var_163_int = var_163_int + (int)1;
			goto Label_5977;
		}
	}
	var_172_bool = var_163_int == 0; //@nz
	if(var_172_bool != 0) {
		var_155_bool = 0;
		return 10;
	}
	var_165_int = 0;
	var_174_bool = var_163_int > (int)1;
	if(var_174_bool != 0) {
		irand(var_165_int, var_163_int);
	}
	var_176_int = var_165_int + (int)1;
	var_177_int = var_162_string + var_176_int;
	@@var_156_object:GetProperty(var_177_int, var_166_string);
	var_178_bool = 0; var_179_string = "";
	var_166_string = var_179_string;
	func_6085(var_178_bool, var_179_string);
	var_178_bool = var_155_bool;
	return 10;
	
}


func_5467(var_2_object, var_1131_string)
{
	var_1132_bool = 0;
	func_6274(var_1132_bool);
	var_1133_bool = var_1132_bool == 0; //@nz
	if(var_1133_bool != 0) {
		return 0;
	}
	var_1134_bool = var_1131_string == var_2_object;
	if(var_1134_bool != 0) {
		return 0;
	}
	var_1135_string = ""; var_1136_bool = 0;
	var_1131_string = var_1135_string;
	var_1138_bool = var_1131_string == "";
	if(var_1138_bool != 0) {
		var_1136_bool = 0;
	} else {
		var_1136_bool = 1;
	}
	func_6070(var_1135_string, var_1136_bool);
	var_2_object = var_1131_string;
	return 0;
	
}


func_6492(var_157_object)
{
	var_158_object = Obj(); var_159_string = ""; var_160_float = 0;
	func_7337(Obj());
	var_161_object = var_158_object;
	func_7354(var_158_object, "pt_map_uprava_admin", (float)2);
	var_181_object = Obj();
	func_7337(var_181_object);
	@@var_157_object:ShowMap(var_181_object);
	return 0;
}


func_7009(var_542_bool)
{
	var_544_int = 0; var_545_string = "";
	func_6123(var_544_int, "b3q02");
	var_547_bool = var_544_int == (int)0;
	if(var_547_bool != 0) {
		var_542_bool = 1;
		return 0;
	}
	var_542_bool = 0;
	return 0;
}


func_2922(var_0_object, var_819_int, var_820_object)
{
	var_822_object = Obj(); var_823_bool = 0; var_824_int = 0; var_825_bool = 0; var_826_object = Obj(); var_827_bool = 0; var_828_int = 0; var_829_bool = 0;
	var_0_object = var_820_object;
	var_830_bool = 0; var_831_object = Obj(); var_832_float = 0;
	var_820_object = var_831_object;
	func_5829(var_830_bool, var_831_object, (float)70.0);
	var_833_bool = var_830_bool == 0; //@nz
	if(var_833_bool != 0) {
		var_819_int = -2;
		return 8;
	}
	CreateDialog(var_826_object);
	var_834_int = 0;
	func_6268(var_834_int);
	@@var_826_object:SetNPCName(var_834_int);
	var_835_int = 0;
	func_6266(var_835_int);
	@@var_826_object:SetNPCDescription(var_835_int);
	var_836_string = "";
	func_6270(var_836_string);
	@@var_826_object:SetPhoto(var_836_string);
	var_837_string = "";
	func_6272(var_837_string);
	@@var_826_object:SetPhoto2(var_837_string);
	var_838_int = 0;
	func_7387(var_838_int);
	@@var_826_object:SetPlayerName(var_838_int);
	IsOverrideActive(var_827_bool);
	var_839_bool = var_827_bool;
	if(var_839_bool != 0) {
		var_819_int = -2;
		return 8;
	}
	DoDialog(var_826_object);
	var_840_bool = 0; var_841_object = Obj();
	func_6107(Obj());
	var_842_object = var_841_object;
	func_5916(var_840_bool, var_841_object);
	var_843_object = Obj(); var_844_object = Obj();
	var_820_object = var_843_object;
	var_826_object = var_844_object;
	TaskCall(11);
	func_3003(var_845_object, var_846_object, var_847_string, var_848_bool, var_843_object, var_844_object);
	TaskReturn();
	@@var_826_object:IsDialogEnd(var_829_bool);
	
Label_2985:
	var_943_bool = var_829_bool == 0; //@nz
	if(var_943_bool != 0) {
		sync();
		@@var_826_object:IsDialogEnd(var_829_bool);
		goto Label_2985;
	}
	var_820_object = Obj();
	func_5898();
	StopDialog(var_826_object);
	@@var_826_object:GetReturnValue((int)-1);
	var_828_int = var_819_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6508()
{
	SetVariable("b3KapellaVisit", (int)1);
	return 0;
}


func_7021(var_529_bool)
{
	var_531_int = 0; var_532_string = "";
	func_6123(var_531_int, "oob3Kapella1");
	var_534_bool = var_531_int == (int)0;
	if(var_534_bool != 0) {
		var_529_bool = 1;
		return 0;
	}
	var_529_bool = 0;
	return 0;
}


func_4974(var_0_object, var_1038_int, var_1039_object)
{
	var_1041_object = Obj(); var_1042_bool = 0; var_1043_int = 0; var_1044_bool = 0; var_1045_object = Obj(); var_1046_bool = 0; var_1047_int = 0; var_1048_bool = 0;
	var_0_object = var_1039_object;
	var_1049_bool = 0; var_1050_object = Obj(); var_1051_float = 0;
	var_1039_object = var_1050_object;
	func_5829(var_1049_bool, var_1050_object, (float)70.0);
	var_1052_bool = var_1049_bool == 0; //@nz
	if(var_1052_bool != 0) {
		var_1038_int = -2;
		return 8;
	}
	CreateDialog(var_1045_object);
	var_1053_int = 0;
	func_6268(var_1053_int);
	@@var_1045_object:SetNPCName(var_1053_int);
	var_1054_int = 0;
	func_6266(var_1054_int);
	@@var_1045_object:SetNPCDescription(var_1054_int);
	var_1055_string = "";
	func_6270(var_1055_string);
	@@var_1045_object:SetPhoto(var_1055_string);
	var_1056_string = "";
	func_6272(var_1056_string);
	@@var_1045_object:SetPhoto2(var_1056_string);
	var_1057_int = 0;
	func_7387(var_1057_int);
	@@var_1045_object:SetPlayerName(var_1057_int);
	IsOverrideActive(var_1046_bool);
	var_1058_bool = var_1046_bool;
	if(var_1058_bool != 0) {
		var_1038_int = -2;
		return 8;
	}
	DoDialog(var_1045_object);
	var_1059_bool = 0; var_1060_object = Obj();
	func_6107(Obj());
	var_1061_object = var_1060_object;
	func_5916(var_1059_bool, var_1060_object);
	var_1062_object = Obj(); var_1063_object = Obj();
	var_1039_object = var_1062_object;
	var_1045_object = var_1063_object;
	TaskCall(17);
	func_5055(var_1064_object, var_1065_object, var_1066_string, var_1067_bool, var_1062_object, var_1063_object);
	TaskReturn();
	@@var_1045_object:IsDialogEnd(var_1048_bool);
	
Label_5037:
	var_1098_bool = var_1048_bool == 0; //@nz
	if(var_1098_bool != 0) {
		sync();
		@@var_1045_object:IsDialogEnd(var_1048_bool);
		goto Label_5037;
	}
	var_1039_object = Obj();
	func_5898();
	StopDialog(var_1045_object);
	@@var_1045_object:GetReturnValue((int)-1);
	var_1047_int = var_1038_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6514()
{
	var_220_object = Obj(); var_221_object = Obj();
	var_222_int = 0; var_223_string = "";
	func_6123(var_222_int, "b1BurahHome");
	var_225_bool = var_222_int == (int)0;
	if(var_225_bool != 0) {
		SetVariable("b1BurahHome", (int)1);
		func_7337(Obj());
		var_228_object = var_221_object;
		var_233_float = 0;
		func_6214(var_233_float);
		@@var_221_object:AddMark("b1BurahFatherHome", "pt_b1q05_patrol_house", (int)3, (int)530957, var_233_float);
		var_221_object = 0;
	}
	return 2;
}


func_7033(var_552_bool)
{
	var_554_int = 0; var_555_string = "";
	func_6123(var_554_int, "b3q02");
	var_557_bool = var_554_int == (int)5;
	if(var_557_bool != 0) {
		var_552_bool = 1;
		return 0;
	}
	var_552_bool = 0;
	return 0;
}


func_6011(var_186_bool, var_187_object)
{
	var_188_string = ""; var_189_int = 0; var_190_bool = 0; var_191_int = 0; var_192_string = ""; var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = "";
	var_199_int = 0;
	func_6219(var_199_int);
	var_205_int = "d" + var_199_int;
	var_193_string = var_205_int + "m";
	var_194_int = 0;
	
Label_6020:
	if((int)1 != 0) {
		var_209_int = var_194_int + (int)1;
		var_210_int = var_193_string + var_209_int;
		@@var_187_object:HasProperty(var_210_int, var_195_bool);
		var_211_bool = var_195_bool == 0; //@nz
		if(var_211_bool != 0) {
		} else {
			var_194_int = var_194_int + (int)1;
			goto Label_6020;
		}
	}
	var_212_bool = var_194_int == 0; //@nz
	if(var_212_bool != 0) {
		var_186_bool = 0;
		return 10;
	}
	var_196_int = 0;
	var_214_bool = var_194_int > (int)1;
	if(var_214_bool != 0) {
		irand(var_196_int, var_194_int);
	}
	var_216_int = var_196_int + (int)1;
	var_217_int = var_193_string + var_216_int;
	@@var_187_object:GetProperty(var_217_int, var_197_string);
	var_218_bool = 0; var_219_string = "";
	var_197_string = var_219_string;
	func_6085(var_218_bool, var_219_string);
	var_218_bool = var_186_bool;
	return 10;
	
}


func_380(var_0_object, var_485_int, var_486_object)
{
	var_488_object = Obj(); var_489_bool = 0; var_490_int = 0; var_491_bool = 0; var_492_object = Obj(); var_493_bool = 0; var_494_int = 0; var_495_bool = 0;
	var_0_object = var_486_object;
	var_496_bool = 0; var_497_object = Obj(); var_498_float = 0;
	var_486_object = var_497_object;
	func_5829(var_496_bool, var_497_object, (float)70.0);
	var_499_bool = var_496_bool == 0; //@nz
	if(var_499_bool != 0) {
		var_485_int = -2;
		return 8;
	}
	CreateDialog(var_492_object);
	var_500_int = 0;
	func_6268(var_500_int);
	@@var_492_object:SetNPCName(var_500_int);
	var_501_int = 0;
	func_6266(var_501_int);
	@@var_492_object:SetNPCDescription(var_501_int);
	var_502_string = "";
	func_6270(var_502_string);
	@@var_492_object:SetPhoto(var_502_string);
	var_503_string = "";
	func_6272(var_503_string);
	@@var_492_object:SetPhoto2(var_503_string);
	var_504_int = 0;
	func_7387(var_504_int);
	@@var_492_object:SetPlayerName(var_504_int);
	IsOverrideActive(var_493_bool);
	var_505_bool = var_493_bool;
	if(var_505_bool != 0) {
		var_485_int = -2;
		return 8;
	}
	DoDialog(var_492_object);
	var_506_bool = 0; var_507_object = Obj();
	func_6107(Obj());
	var_508_object = var_507_object;
	func_5916(var_506_bool, var_507_object);
	var_509_object = Obj(); var_510_object = Obj();
	var_486_object = var_509_object;
	var_492_object = var_510_object;
	TaskCall(3);
	func_461(var_511_object, var_512_object, var_513_string, var_514_bool, var_509_object, var_510_object);
	TaskReturn();
	@@var_492_object:IsDialogEnd(var_495_bool);
	
Label_443:
	var_587_bool = var_495_bool == 0; //@nz
	if(var_587_bool != 0) {
		sync();
		@@var_492_object:IsDialogEnd(var_495_bool);
		goto Label_443;
	}
	var_486_object = Obj();
	func_5898();
	StopDialog(var_492_object);
	@@var_492_object:GetReturnValue((int)-1);
	var_494_int = var_485_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7045(var_558_bool)
{
	var_560_int = 0; var_561_string = "";
	func_6123(var_560_int, "b3q02Dead");
	var_563_bool = var_560_int != (int)0;
	if(var_563_bool != 0) {
		var_558_bool = 1;
		return 0;
	}
	var_558_bool = 0;
	return 0;
}


func_6541(var_235_object)
{
	var_236_object = Obj(); var_237_string = ""; var_238_float = 0;
	func_7337(Obj());
	var_239_object = var_236_object;
	func_7354(var_236_object, "pt_b1q05_patrol_house", (float)2);
	var_259_object = Obj();
	func_7337(var_259_object);
	@@var_235_object:ShowMap(var_259_object);
	return 0;
}


func_7057(var_333_bool)
{
	var_335_int = 0; var_336_string = "";
	func_6123(var_335_int, "b1q01");
	var_340_bool = var_335_int == (int)0;
	if(var_340_bool != 0) {
		var_333_bool = 1;
		return 0;
	}
	var_333_bool = 0;
	return 0;
}


func_4500(var_0_object, var_1_object, var_2_object, var_3_string, var_971_object, var_972_object)
{
	var_0_object = var_972_object;
	var_1_object = var_971_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_978_bool = 0; var_979_object = Obj();
		var_979_object = var_1_object;
		func_6925(var_979_object);
		if(var_978_bool != 0) {
			var_984_object = Obj(); var_985_object = Obj();
			var_984_object = var_1_object;
			var_985_object = var_0_object;
			func_6557();
			var_988_string = "";
			func_4603(var_972_object, "Neutral");
			@@@var_0_object:SetMessage((int)531105);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531107, (int)32678, (int)32425);
			@@@var_0_object:AddReply((int)531353, (int)32678, (int)32685);
		} else {
				var_1011_string = "";
				func_4603(var_972_object, "Neutral");
				@@@var_0_object:SetMessage((int)531108);
				@@@var_0_object:ClearReplies();
				var_1013_bool = 0; var_1014_object = Obj();
				var_1014_object = var_1_object;
				func_6937(var_1014_object);
				if(var_1013_bool != 0) {
					@@@var_0_object:AddReply((int)531109, (int)32429, (int)32427);
				}
				var_1022_bool = 0; var_1023_object = Obj();
				var_1023_object = var_1_object;
				func_6949(var_1023_object);
				if(var_1022_bool != 0) {
					@@@var_0_object:AddReply((int)531129, (int)32448, (int)32447);
				}
				@@@var_0_object:AddReply((int)531110, (int)-1, (int)32428);
				goto Label_4573;
		}
	}
Label_4573:
	var_1003_bool = 0;
	func_6274(var_1003_bool);
	if(var_1003_bool != 0) {

	Label_4577:
		lshWaitForAnimEnd();
		var_1004_string = var_3_string;
		if(var_1004_string != 0) {
		} else {
			var_1005_string = "";
			var_1005_string = var_2_object;
			func_6054(var_1005_string);
			goto Label_4577;
	}
		PlayAnimation("all", "idle");

	Label_4592:
		WaitForAnimEnd();
		var_1008_string = var_3_string;
		if(var_1008_string != 0) {
			goto Label_4602;
		}
		PlayAnimation("all", "idle");
		goto Label_4592;

	}
	goto Label_4602;
	
Label_4602:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1198";


func_3994(var_2_object, var_738_string)
{
	var_739_bool = 0;
	func_6274(var_739_bool);
	var_740_bool = var_739_bool == 0; //@nz
	if(var_740_bool != 0) {
		return 0;
	}
	var_741_bool = var_738_string == var_2_object;
	if(var_741_bool != 0) {
		return 0;
	}
	var_742_string = ""; var_743_bool = 0;
	var_738_string = var_742_string;
	var_745_bool = var_738_string == "";
	if(var_745_bool != 0) {
		var_743_bool = 0;
	} else {
		var_743_bool = 1;
	}
	func_6070(var_742_string, var_743_bool);
	var_2_object = var_738_string;
	return 0;
	
}


func_7069(var_367_bool)
{
	var_369_int = 0; var_370_string = "";
	func_6123(var_369_int, "oob1Kapella1");
	var_372_bool = var_369_int == (int)0;
	if(var_372_bool != 0) {
		var_367_bool = 1;
		return 0;
	}
	var_367_bool = 0;
	return 0;
}


func_6557()
{
	SetVariable("oob11Kapella1", (int)1);
	return 0;
}


func_5538(var_0_object)
{
	var_52_bool = 0;
	func_5824(var_52_bool);
	var_55_bool = var_52_bool == 0; //@nz
	if(var_55_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_5547:
	func_5714();
	goto Label_5547;
}
EMIT "Return(); Pop(0)";


func_6563()
{
	SetVariable("b11q02", (int)1);
	func_7166();
	func_7192();
	var_92_object = Obj(); var_93_string = "";
	func_6128(var_92_object, "quest_b11_02");
	return 0;
}


func_2468(var_0_object, var_1_object, var_2_object, var_3_string, var_615_object, var_616_object)
{
	var_0_object = var_616_object;
	var_1_object = var_615_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_622_bool = 0; var_623_object = Obj();
		var_623_object = var_1_object;
		func_6771(var_623_object);
		if(var_622_bool != 0) {
			var_628_object = Obj(); var_629_object = Obj();
			var_628_object = var_1_object;
			var_629_object = var_0_object;
			func_6347();
			var_632_string = "";
			func_2570(var_616_object, "Sympathy");
			@@@var_0_object:SetMessage((int)521388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521389, (int)25279, (int)22567);
			@@@var_0_object:AddReply((int)523995, (int)25286, (int)25285);
		} else {
				var_655_string = "";
				func_2570(var_616_object, "Neutral");
				@@@var_0_object:SetMessage((int)521390);
				@@@var_0_object:ClearReplies();
				var_657_bool = 0;
				var_657_bool = 0;
				var_658_bool = 0; var_659_object = Obj();
				var_659_object = var_1_object;
				func_6759(var_659_object);
				if(var_658_bool != 0) {
					var_664_bool = 0; var_665_object = Obj();
					var_665_object = var_1_object;
					func_6783(var_665_object);
					if(var_664_bool != 0) {
						var_657_bool = 1;
					}
				}
				if(var_657_bool != 0) {
					@@@var_0_object:AddReply((int)521391, (int)22570, (int)22569);
				}
				@@@var_0_object:AddReply((int)521394, (int)-1, (int)22572);
				goto Label_2540;
		}
	}
Label_2540:
	var_647_bool = 0;
	func_6274(var_647_bool);
	if(var_647_bool != 0) {

	Label_2544:
		lshWaitForAnimEnd();
		var_648_string = var_3_string;
		if(var_648_string != 0) {
		} else {
			var_649_string = "";
			var_649_string = var_2_object;
			func_6054(var_649_string);
			goto Label_2544;
	}
		PlayAnimation("all", "idle");

	Label_2559:
		WaitForAnimEnd();
		var_652_string = var_3_string;
		if(var_652_string != 0) {
			goto Label_2569;
		}
		PlayAnimation("all", "idle");
		goto Label_2559;

	}
	goto Label_2569;
	
Label_2569:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x9a8";


func_6054(var_272_string)
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


func_7081(var_384_bool)
{
	var_386_int = 0; var_387_string = "";
	func_6123(var_386_int, "oob1Kapella2");
	var_389_bool = var_386_int == (int)0;
	if(var_389_bool != 0) {
		var_384_bool = 1;
		return 0;
	}
	var_384_bool = 0;
	return 0;
}


func_5552(var_76_bool)
{
	var_77_object = Obj(); var_78_object = Obj();
	FindActor(var_78_object, "player");
	var_80_bool = var_78_object == 0; //@nz
	if(var_80_bool != 0) {
		var_76_bool = 0;
		return 2;
	}
	var_81_bool = 0; var_82_object = Obj();
	var_78_object = var_82_object;
	func_5815(var_81_bool, var_82_object);
	var_81_bool = var_76_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6579()
{
	func_7179();
	var_116_bool = 0; var_117_string = ""; var_118_string = "";
	func_6202(var_116_bool, "quest_b11_02", "completed");
	return 0;
}


func_7093(var_393_bool)
{
	var_395_int = 0; var_396_string = "";
	func_6123(var_395_int, "oob1Kapella3");
	var_398_bool = var_395_int == (int)0;
	if(var_398_bool != 0) {
		var_393_bool = 1;
		return 0;
	}
	var_393_bool = 0;
	return 0;
}


func_6070(var_250_string, var_251_bool)
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


func_3003(var_0_object, var_1_object, var_2_object, var_3_string, var_843_object, var_844_object)
{
	var_0_object = var_844_object;
	var_1_object = var_843_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_850_bool = 0; var_851_object = Obj();
		var_851_object = var_1_object;
		func_6961(var_851_object);
		if(var_850_bool != 0) {
			var_856_object = Obj(); var_857_object = Obj();
			var_856_object = var_1_object;
			var_857_object = var_0_object;
			func_6589();
			var_860_object = Obj(); var_861_object = Obj();
			var_860_object = var_1_object;
			var_861_object = var_0_object;
			func_6631();
			var_864_string = "";
			func_3150(var_844_object, "Neutral");
			@@@var_0_object:SetMessage((int)531154);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531276, (int)32591, (int)32590);
		} else {
				var_884_string = "";
				func_3150(var_844_object, "Neutral");
				@@@var_0_object:SetMessage((int)521924);
				@@@var_0_object:ClearReplies();
				var_886_bool = 0;
				var_886_bool = 0;
				var_887_bool = 0; var_888_object = Obj();
				var_888_object = var_1_object;
				func_6795(var_888_object);
				if(var_887_bool != 0) {
					var_893_bool = 0; var_894_object = Obj();
					var_894_object = var_1_object;
					func_6807(var_894_object);
					var_899_bool = var_893_bool == 0; //@nz
					if(var_899_bool != 0) {
						var_886_bool = 1;
					}
				}
				if(var_886_bool != 0) {
					@@@var_0_object:AddReply((int)521925, (int)23656, (int)23099);
				}
				var_903_bool = 0; var_904_object = Obj();
				var_904_object = var_1_object;
				func_6985(var_904_object);
				if(var_903_bool != 0) {
					@@@var_0_object:AddReply((int)522478, (int)23652, (int)23651);
				}
				var_912_bool = 0;
				var_912_bool = 0;
				var_913_bool = 0; var_914_object = Obj();
				var_914_object = var_1_object;
				func_6913(var_914_object);
				if(var_913_bool != 0) {
					var_919_bool = 0; var_920_object = Obj();
					var_920_object = var_1_object;
					func_6819(var_920_object);
					if(var_919_bool != 0) {
						var_912_bool = 1;
					}
				}
				if(var_912_bool != 0) {
					@@@var_0_object:AddReply((int)530448, (int)31815, (int)31814);
				}
				var_928_bool = 0; var_929_object = Obj();
				var_929_object = var_1_object;
				func_6973(var_929_object);
				if(var_928_bool != 0) {
					@@@var_0_object:AddReply((int)531159, (int)32468, (int)32467);
				}
				@@@var_0_object:AddReply((int)521926, (int)-1, (int)23100);
				@@@var_0_object:AddReply((int)531282, (int)-1, (int)32597);
				goto Label_3120;
		}
	}
Label_3120:
	var_876_bool = 0;
	func_6274(var_876_bool);
	if(var_876_bool != 0) {

	Label_3124:
		lshWaitForAnimEnd();
		var_877_string = var_3_string;
		if(var_877_string != 0) {
		} else {
			var_878_string = "";
			var_878_string = var_2_object;
			func_6054(var_878_string);
			goto Label_3124;
	}
		PlayAnimation("all", "idle");

	Label_3139:
		WaitForAnimEnd();
		var_881_string = var_3_string;
		if(var_881_string != 0) {
			goto Label_3149;
		}
		PlayAnimation("all", "idle");
		goto Label_3139;

	}
	goto Label_3149;
	
Label_3149:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xbbf";


func_6589()
{
	SetVariable("oob10Kapella2", (int)1);
	return 0;
}


func_5055(var_0_object, var_1_object, var_2_object, var_3_string, var_1062_object, var_1063_object)
{
	var_0_object = var_1063_object;
	var_1_object = var_1062_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1069_string = "";
		func_5118(var_1063_object, "Neutral");
		@@@var_0_object:SetMessage((int)535258);
		@@@var_0_object:ClearReplies();
		var_1078_bool = 0; var_1079_object = Obj();
		var_1079_object = var_1_object;
		func_6997(var_1079_object);
		if(var_1078_bool != 0) {
			@@@var_0_object:AddReply((int)535259, (int)36983, (int)36934);
		}
		@@@var_0_object:AddReply((int)535304, (int)-1, (int)36982);
		goto Label_5088;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13c3";
	}
Label_5088:
	var_1090_bool = 0;
	func_6274(var_1090_bool);
	if(var_1090_bool != 0) {

	Label_5092:
		lshWaitForAnimEnd();
		var_1091_string = var_3_string;
		if(var_1091_string != 0) {
		} else {
			var_1092_string = "";
			var_1092_string = var_2_object;
			func_6054(var_1092_string);
			goto Label_5092;
	}
		PlayAnimation("all", "idle");

	Label_5107:
		WaitForAnimEnd();
		var_1095_string = var_3_string;
		if(var_1095_string != 0) {
			goto Label_5117;
		}
		PlayAnimation("all", "idle");
		goto Label_5107;
	}
	goto Label_5117;
	
Label_5117:
	return 0;
	
}


func_5567(var_0_object)
{
	var_128_float = GetByIndex(var_0_object, 0);
	var_129_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_128_float, var_129_float);
	return 0;
}


func_7105(var_402_bool)
{
	var_404_int = 0; var_405_string = "";
	func_6123(var_404_int, "oob1Kapella4");
	var_407_bool = var_404_int == (int)0;
	if(var_407_bool != 0) {
		var_402_bool = 1;
		return 0;
	}
	var_402_bool = 0;
	return 0;
}


func_6595()
{
	var_59_object = Obj(); var_60_object = Obj();
	SetVariable("b10q03", (int)1);
	func_7337(Obj());
	var_63_object = var_60_object;
	var_74_float = 0;
	func_6214(var_74_float);
	@@var_60_object:AddMark("b10q03KapellaGotoMishka", "pt_map_mishka", (int)0, (int)531261, var_74_float);
	func_7140();
	func_7153();
	var_108_object = Obj(); var_109_string = "";
	func_6128(var_108_object, "quest_b10_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_5572(var_59_bool)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_object = Obj(); var_63_bool = 0;
	FindActor(var_62_object, "player");
	var_65_bool = var_62_object == 0; //@nz
	if(var_65_bool != 0) {
		var_59_bool = 0;
		return 4;
	}
	var_66_float = 0; var_67_object = Obj();
	var_62_object = var_67_object;
	func_5790(var_66_float, var_67_object);
	var_75_bool = var_66_float > (float)90000.0;
	if(var_75_bool != 0) {
		var_59_bool = 0;
		return 4;
	}
	CanSee(var_63_bool, var_62_object);
	var_63_bool = var_59_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_6085(var_178_bool, var_179_string)
{
	var_180_bool = 0; var_181_bool = 0;
	var_182_bool = 0;
	func_6274(var_182_bool);
	if(var_182_bool != 0) {
		lshHasSpeech(var_181_bool, var_179_string);
		var_183_bool = var_181_bool;
		if(var_183_bool != 0) {
			lshPlaySpeech(var_179_string);
			var_178_bool = 1;
			return 2;
		}
	}
	var_178_bool = 0;
	return 2;
}


func_7117(var_461_bool)
{
	var_463_int = 0; var_464_string = "";
	func_6123(var_463_int, "oob2Kapella1");
	var_466_bool = var_463_int == (int)0;
	if(var_466_bool != 0) {
		var_461_bool = 1;
		return 0;
	}
	var_461_bool = 0;
	return 0;
}


func_461(var_0_object, var_1_object, var_2_object, var_3_string, var_509_object, var_510_object)
{
	var_0_object = var_510_object;
	var_1_object = var_509_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_516_object = Obj(); var_517_object = Obj();
		var_516_object = var_1_object;
		var_517_object = var_0_object;
		func_6508();
		var_520_string = "";
		func_588(var_510_object, "Neutral");
		@@@var_0_object:SetMessage((int)518365);
		@@@var_0_object:ClearReplies();
		var_529_bool = 0; var_530_object = Obj();
		var_530_object = var_1_object;
		func_7021(var_530_object);
		if(var_529_bool != 0) {
			@@@var_0_object:AddReply((int)518366, (int)19481, (int)19479);
		}
		var_538_bool = 0;
		var_538_bool = 0;
		var_539_bool = 0; var_540_object = Obj();
		var_540_object = var_1_object;
		func_7021(var_540_object);
		var_541_bool = var_539_bool == 0; //@nz
		if(var_541_bool != 0) {
			var_542_bool = 0; var_543_object = Obj();
			var_543_object = var_1_object;
			func_7009(var_543_object);
			if(var_542_bool != 0) {
				var_538_bool = 1;
			}
		}
		if(var_538_bool != 0) {
			@@@var_0_object:AddReply((int)518371, (int)19485, (int)19484);
		}
		var_551_bool = 0;
		var_551_bool = 0;
		var_552_bool = 0; var_553_object = Obj();
		var_553_object = var_1_object;
		func_7033(var_553_object);
		if(var_552_bool != 0) {
			var_558_bool = 0; var_559_object = Obj();
			var_559_object = var_1_object;
			func_7045(var_559_object);
			if(var_558_bool != 0) {
				var_551_bool = 1;
			}
		}
		if(var_551_bool != 0) {
			@@@var_0_object:AddReply((int)518374, (int)19488, (int)19487);
		}
		var_567_bool = 0;
		var_567_bool = 0;
		var_568_bool = 0; var_569_object = Obj();
		var_569_object = var_1_object;
		func_7033(var_569_object);
		if(var_568_bool != 0) {
			var_570_bool = 0; var_571_object = Obj();
			var_571_object = var_1_object;
			func_7045(var_571_object);
			var_572_bool = var_570_bool == 0; //@nz
			if(var_572_bool != 0) {
				var_567_bool = 1;
			}
		}
		if(var_567_bool != 0) {
			@@@var_0_object:AddReply((int)518377, (int)19491, (int)19490);
		}
		@@@var_0_object:AddReply((int)518367, (int)-1, (int)19480);
		goto Label_558;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1d1";
	}
Label_558:
	var_579_bool = 0;
	func_6274(var_579_bool);
	if(var_579_bool != 0) {

	Label_562:
		lshWaitForAnimEnd();
		var_580_string = var_3_string;
		if(var_580_string != 0) {
		} else {
			var_581_string = "";
			var_581_string = var_2_object;
			func_6054(var_581_string);
			goto Label_562;
	}
		PlayAnimation("all", "idle");

	Label_577:
		WaitForAnimEnd();
		var_584_string = var_3_string;
		if(var_584_string != 0) {
			goto Label_587;
		}
		PlayAnimation("all", "idle");
		goto Label_577;
	}
	goto Label_587;
	
Label_587:
	return 0;
	
}


func_6100()
{
	var_54_bool = 0;
	func_6274(var_54_bool);
	if(var_54_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_7129(var_729_bool)
{
	var_731_int = 0;
	func_6228(var_731_int);
	var_737_bool = var_731_int >= (int)18;
	if(var_737_bool != 0) {
		var_729_bool = 1;
		return 0;
	}
	var_729_bool = 0;
	return 0;
}


func_5594()
{
	var_1158_float = 0; var_1159_float = 0;
	rand(var_1159_float, (int)8, (int)16);
	SetTimer((int)10, var_1159_float);
	return 2;
}


func_6107(var_146_object)
{
	var_147_object = Obj(); var_148_object = Obj();
	self(var_148_object);
	var_148_object = var_146_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6625()
{
	SetVariable("oob10Kapella3", (int)1);
	return 0;
}


func_6113(var_110_cvector, var_111_cvector)
{
	var_113_float = 0; var_114_float = 0;
	var_115_int = var_111_cvector | var_111_cvector;
	var_114_float = sqrt(var_115_int);
	var_116_float = 9.999999974752427e-07;
	var_117_bool = var_114_float < var_116_float;
	if(var_117_bool != 0) {
		var_110_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_110_cvector = var_111_cvector / var_114_float;
	return 2;
}


func_5603()
{
	KillTimer((int)10);
	return 0;
}


func_7140()
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateDiaryEntry(var_78_object, (int)594, (int)2, (int)531145);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_78_object = var_83_object;
	func_7309(var_82_bool, var_83_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6631()
{
	SetVariable("b10KapellaVisit", (int)1);
	return 0;
}


func_6123(var_335_int, var_336_string)
{
	var_337_int = 0; var_338_int = 0;
	GetVariable(var_336_string, var_338_int);
	var_338_int = var_335_int;
	return 2;
}


func_6637()
{
	SetVariable("oob12Kapella1", (int)1);
	return 0;
}


func_6128(var_92_object, var_93_string)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj();
	GetMainOutdoorScene(var_96_object);
	var_99_int = var_93_string + ".bin";
	AddBlankActor(var_97_object, var_96_object, var_93_string, var_99_int);
	var_97_object = var_92_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7153()
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateDiaryEntry(var_101_object, (int)595, (int)2, (int)531146);
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0;
	var_101_object = var_106_object;
	func_7309(var_105_bool, var_106_object, (int)594);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6643()
{
	var_169_int = 0; var_170_string = "";
	func_6123(var_169_int, "b1q01");
	var_174_bool = var_169_int == (int)1;
	if(var_174_bool != 0) {
		func_7205();
	}
	return 0;
}


func_6139(var_141_int, var_142_int)
{
	var_143_object = Obj(); var_144_object = Obj();
	CreateIntVector(var_144_object);
	@@var_144_object:add(var_141_int);
	@@var_144_object:add(var_142_int);
	SendWorldWndMessage((int)3, var_144_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7166()
{
	var_61_object = Obj(); var_62_object = Obj();
	CreateDiaryEntry(var_62_object, (int)598, (int)2, (int)531149);
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0;
	var_62_object = var_67_object;
	func_7309(var_66_bool, var_67_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6655(var_122_object)
{
	Trace("kapella beads is given");
	var_125_object = Obj(); var_126_string = ""; var_127_int = 0;
	var_122_object = var_125_object;
	func_6189(var_125_object, "d11q06KapellaBeads", (int)1);
	return 0;
}


