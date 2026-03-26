// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,GetInvItemProperty/3,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,CreateInvItem/1,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|A:GetItemID|W:Category|A:AddItem|A:DropItems|W:No|W:ui/NPC_Spi4ka.png|W:ood1Spi4ka1|W:ood1Spi4ka2|W:ood1Spi4ka3|W:lockpick1time is given|W:lockpick|A:SetItemName|W:uses|A:SetProperty|W:playsound|W:giveitem|W:d1q04KaterinaGotoMishka|A:FindMark|A:Remove|W:d1q04MishkaGotoSpi4ka|W:d1q04Spi4kaGotoPowderHouse|W:quest_d1_04|W:failed|W:KnowShabnak|W:ood2Spi4ka1|W:ood2Spi4ka2|W:KnowAlbinos|W:KnowZemlja|W:d2q01|W:quest_d2_01|W:woman|W:ood1Spi4ka4|W:ood1Spi4ka5|W:mapmark|W:pt_map_powderhouse|A:AddMark|W:ood6Spi4ka1|W:d6q03|W:quest_d6_03|W:place_albinos|W:ood6Spi4ka2|W:completed|W:ood6Spi4ka3|W:ood6Spi4ka4|W:ood2Spi4ka3|W:KnowSpi4ka|A:ShowMap|W:KnowTermitnik|W:d1q01FirstGeorgVisit|W:d1q04|W:d6q03AlbinosKilled|W:d6q01|W:KnowMishka|W:KnowOspina|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x1d vars=
// @EVENT_0: op=0x23 vars=object
// @EVENT_10: op=0x29 vars=object
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc4 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x232 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5f4 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x982 vars=int,int
// @PE: 0x23,0x29,0x70,0xb4,0xc4,0x17c,0x222,0x232,0x570,0x5e4,0x5f4,0x8a1,0x972,0x982,0xbb2,0xc18,0xc2d,0xc33,0xc39,0xc54,0xc8b,0xc91,0xc97,0xc9d,0xca3,0xca9,0xcb7,0xcbd,0xcc3,0xcdc,0xce2,0xcf7,0xcfd,0xd07,0xd11,0xd17,0xd1d,0xd23,0xd29,0xd39,0xd3f,0xd4b,0xd57,0xd63,0xd6f,0xd7b,0xd87,0xd93,0xd9f,0xdab,0xdb7,0xdc3,0xdcd,0xdd7,0xde1,0xdeb,0xdf7,0xe03,0xe0f,0xe1b,0xe27,0xe33,0xe3f,0xe4b,0xe57,0xe63,0xe6f,0xe7b,0xe86,0xe9b,0xeb0,0xfb7

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_object = Obj();
	var_20_bool = var_21_object;
	func_4023(var_21_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_2921(var_21_bool, var_22_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	if((int)1 != 0) {
		func_3016();
		var_25_bool = var_20_string == (int)413;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_3363();
			var_30_string = "";
			func_180(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)357, (int)417, (int)414);
			@@@var_0_object:AddReply((int)358, (int)418, (int)415);
			@@@var_0_object:AddReply((int)359, (int)-1, (int)416);
			return 0;
		}
		var_56_bool = var_20_string == (int)418;
		if(var_56_bool != 0) {
			var_57_string = "";
			func_180(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)361);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)362, (int)417, (int)419);
			@@@var_0_object:AddReply((int)363, (int)417, (int)420);
			return 0;
		}
		var_66_bool = var_20_string == (int)417;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_180(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)364, (int)425, (int)423);
			@@@var_0_object:AddReply((int)365, (int)425, (int)424);
			return 0;
		}
		var_76_bool = var_20_string == (int)425;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_180(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)367, (int)-1, (int)426);
			@@@var_0_object:AddReply((int)368, (int)-1, (int)427);
			return 0;
		}
		var_3_string = true;
		var_85_bool = 0;
		func_3115(var_85_bool);
		if(var_85_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	if((int)1 != 0) {
		func_3016();
		var_25_bool = var_21_bool == (int)6801;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_3117();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_3135(var_31_object);
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_3156();
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_3273();
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_3267();
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_3369(var_101_object);
		}
		var_127_bool = var_21_bool == (int)6802;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_3117();
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_3162();
		}
		var_171_bool = var_21_bool == (int)6800;
		if(var_171_bool != 0) {
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_3117();
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_3162();
		}
		var_177_bool = var_21_bool == (int)6449;
		if(var_177_bool != 0) {
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_3123();
		}
		var_183_bool = var_21_bool == (int)6450;
		if(var_183_bool != 0) {
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_3123();
		}
		var_187_bool = var_21_bool == (int)6451;
		if(var_187_bool != 0) {
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_3123();
		}
		var_191_bool = var_21_bool == (int)6452;
		if(var_191_bool != 0) {
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_3123();
		}
		var_195_bool = var_21_bool == (int)9365;
		if(var_195_bool != 0) {
			var_196_object = Obj(); var_197_object = Obj();
			var_196_object = var_1_object;
			var_197_object = var_0_object;
			func_3123();
		}
		var_199_bool = var_21_bool == (int)6456;
		if(var_199_bool != 0) {
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_3129();
		}
		var_205_bool = var_21_bool == (int)6457;
		if(var_205_bool != 0) {
			var_206_object = Obj(); var_207_object = Obj();
			var_206_object = var_1_object;
			var_207_object = var_0_object;
			func_3129();
		}
		var_209_bool = var_21_bool == (int)6463;
		if(var_209_bool != 0) {
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_3129();
		}
		var_213_bool = var_21_bool == (int)6458;
		if(var_213_bool != 0) {
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_3129();
		}
		var_217_bool = var_21_bool == (int)9372;
		if(var_217_bool != 0) {
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_3255();
		}
		var_223_bool = var_21_bool == (int)9373;
		if(var_223_bool != 0) {
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_3255();
		}
		var_227_bool = var_21_bool == (int)9381;
		if(var_227_bool != 0) {
			var_228_object = Obj(); var_229_object = Obj();
			var_228_object = var_1_object;
			var_229_object = var_0_object;
			func_3261();
		}
		var_233_bool = var_20_string == (int)6442;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5851);
			@@@var_0_object:ClearReplies();
			var_250_bool = 0;
			var_250_bool = 0;
			var_251_bool = 0; var_252_object = Obj();
			var_252_object = var_1_object;
			func_3403(var_252_object);
			if(var_251_bool != 0) {
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_object;
				func_3415(var_260_object);
				if(var_259_bool != 0) {
					var_250_bool = 1;
				}
			}
			if(var_250_bool != 0) {
				@@@var_0_object:AddReply((int)5852, (int)6464, (int)6443);
			}
			var_268_bool = 0;
			var_268_bool = 0;
			var_269_bool = 0; var_270_object = Obj();
			var_270_object = var_1_object;
			func_3427(var_270_object);
			if(var_269_bool != 0) {
				var_275_bool = 0; var_276_object = Obj();
				var_276_object = var_1_object;
				func_3391(var_276_object);
				if(var_275_bool != 0) {
					var_268_bool = 1;
				}
			}
			if(var_268_bool != 0) {
				@@@var_0_object:AddReply((int)8356, (int)6444, (int)9179);
			}
			var_284_bool = 0;
			var_284_bool = 1;
			var_285_bool = 0;
			var_285_bool = 0;
			var_286_bool = 0; var_287_object = Obj();
			var_287_object = var_1_object;
			func_3523(var_286_bool, var_287_object);
			if(var_286_bool != 0) {
				var_297_bool = 0; var_298_object = Obj();
				var_298_object = var_1_object;
				func_3439(var_298_object);
				if(var_297_bool != 0) {
					var_285_bool = 1;
				}
			}
			if(var_285_bool != 1) {
				var_303_bool = 0;
				var_303_bool = 0;
				var_304_bool = 0; var_305_object = Obj();
				var_305_object = var_1_object;
				func_3553(var_304_bool, var_305_object);
				if(var_304_bool != 0) {
					var_315_bool = 0; var_316_object = Obj();
					var_316_object = var_1_object;
					func_3439(var_316_object);
					if(var_315_bool != 0) {
						var_303_bool = 1;
					}
				}
				if(var_303_bool != 1) {
					var_284_bool = 0;
				}
			}
			if(var_284_bool != 0) {
				@@@var_0_object:AddReply((int)8357, (int)6453, (int)9180);
			}
			var_320_bool = 0;
			var_320_bool = 0;
			var_321_bool = 0; var_322_object = Obj();
			var_322_object = var_1_object;
			func_3695(var_322_object);
			if(var_321_bool != 0) {
				var_327_bool = 0; var_328_object = Obj();
				var_328_object = var_1_object;
				func_3499(var_328_object);
				if(var_327_bool != 0) {
					var_320_bool = 1;
				}
			}
			if(var_320_bool != 0) {
				@@@var_0_object:AddReply((int)8365, (int)9205, (int)9188);
			}
			var_336_bool = 0;
			var_336_bool = 0;
			var_337_bool = 0; var_338_object = Obj();
			var_338_object = var_1_object;
			func_3683(var_338_object);
			if(var_337_bool != 0) {
				var_343_bool = 0; var_344_object = Obj();
				var_344_object = var_1_object;
				func_3511(var_344_object);
				if(var_343_bool != 0) {
					var_336_bool = 1;
				}
			}
			if(var_336_bool != 0) {
				@@@var_0_object:AddReply((int)8379, (int)9378, (int)9202);
			}
			@@@var_0_object:AddReply((int)8520, (int)-1, (int)9362);
			return 0;
		}
		var_356_bool = var_20_string == (int)9378;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8535);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8536, (int)9206, (int)9379);
			return 0;
		}
		var_363_bool = var_20_string == (int)9206;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8538, (int)-1, (int)9381);
			return 0;
		}
		var_370_bool = var_20_string == (int)9205;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8382);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8524, (int)9367, (int)9366);
			return 0;
		}
		var_377_bool = var_20_string == (int)9367;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8525);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8526, (int)9369, (int)9368);
			var_383_bool = 0; var_384_object = Obj();
			var_384_object = var_1_object;
			func_3683(var_384_object);
			var_385_bool = var_383_bool == 0; //@nz
			if(var_385_bool != 0) {
				@@@var_0_object:AddReply((int)8532, (int)9375, (int)9374);
			}
			return 0;
		}
		var_390_bool = var_20_string == (int)9375;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8533);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8534, (int)9369, (int)9376);
			return 0;
		}
		var_397_bool = var_20_string == (int)9369;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8527);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8528, (int)9371, (int)9370);
			return 0;
		}
		var_404_bool = var_20_string == (int)9371;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8529);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8530, (int)-1, (int)9372);
			@@@var_0_object:AddReply((int)8531, (int)-1, (int)9373);
			return 0;
		}
		var_414_bool = var_20_string == (int)6453;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5863, (int)6455, (int)6454);
			@@@var_0_object:AddReply((int)5868, (int)6460, (int)6459);
			@@@var_0_object:AddReply((int)5867, (int)-1, (int)6458);
			return 0;
		}
		var_427_bool = var_20_string == (int)6460;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5870, (int)6455, (int)6461);
			@@@var_0_object:AddReply((int)5871, (int)-1, (int)6463);
			return 0;
		}
		var_437_bool = var_20_string == (int)6455;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5864);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5865, (int)-1, (int)6456);
			@@@var_0_object:AddReply((int)5866, (int)-1, (int)6457);
			return 0;
		}
		var_447_bool = var_20_string == (int)6444;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5854, (int)6446, (int)6445);
			@@@var_0_object:AddReply((int)5861, (int)-1, (int)6452);
			var_456_bool = 0; var_457_object = Obj();
			var_457_object = var_1_object;
			func_3451(var_457_object);
			var_462_bool = var_456_bool == 0; //@nz
			if(var_462_bool != 0) {
				@@@var_0_object:AddReply((int)8521, (int)9364, (int)9363);
			}
			return 0;
		}
		var_467_bool = var_20_string == (int)9364;
		if(var_467_bool != 0) {
			var_468_object = Obj(); var_469_object = Obj();
			var_468_object = var_1_object;
			var_469_object = var_0_object;
			func_3211();
			var_472_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8522);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8523, (int)-1, (int)9365);
			return 0;
		}
		var_478_bool = var_20_string == (int)6446;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5855);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5856, (int)6448, (int)6447);
			@@@var_0_object:AddReply((int)5860, (int)-1, (int)6451);
			return 0;
		}
		var_488_bool = var_20_string == (int)6448;
		if(var_488_bool != 0) {
			var_489_object = Obj(); var_490_object = Obj();
			var_489_object = var_1_object;
			var_490_object = var_0_object;
			func_3385();
			var_493_object = Obj(); var_494_object = Obj();
			var_493_object = var_1_object;
			var_494_object = var_0_object;
			func_3235();
			var_497_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5858, (int)-1, (int)6449);
			@@@var_0_object:AddReply((int)5859, (int)-1, (int)6450);
			return 0;
		}
		var_506_bool = var_20_string == (int)6464;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6141, (int)6786, (int)6785);
			@@@var_0_object:AddReply((int)6140, (int)6786, (int)6784);
			return 0;
		}
		var_516_bool = var_20_string == (int)6786;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6142);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6143, (int)6790, (int)6788);
			@@@var_0_object:AddReply((int)6144, (int)6790, (int)6789);
			return 0;
		}
		var_526_bool = var_20_string == (int)6790;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6145);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6146, (int)6794, (int)6792);
			@@@var_0_object:AddReply((int)6147, (int)6794, (int)6793);
			return 0;
		}
		var_536_bool = var_20_string == (int)6794;
		if(var_536_bool != 0) {
			var_537_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6148);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6149, (int)6797, (int)6796);
			return 0;
		}
		var_543_bool = var_20_string == (int)6797;
		if(var_543_bool != 0) {
			var_544_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6150);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6151, (int)6799, (int)6798);
			@@@var_0_object:AddReply((int)6153, (int)-1, (int)6800);
			return 0;
		}
		var_553_bool = var_20_string == (int)6799;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_546(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6152);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6154, (int)-1, (int)6801);
			@@@var_0_object:AddReply((int)6155, (int)-1, (int)6802);
			return 0;
		}
		var_3_string = true;
		var_562_bool = 0;
		func_3115(var_562_bool);
		if(var_562_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x233";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	if((int)1 != 0) {
		func_3016();
		var_25_bool = var_21_bool == (int)7358;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_3217();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_3241();
		}
		var_66_bool = var_21_bool == (int)7363;
		if(var_66_bool != 0) {
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_3217();
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_3241();
		}
		var_72_bool = var_21_bool == (int)7382;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_3217();
		}
		var_76_bool = var_21_bool == (int)7394;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_3223();
		}
		var_82_bool = var_21_bool == (int)7395;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_3223();
		}
		var_86_bool = var_21_bool == (int)7396;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_3223();
		}
		var_90_bool = var_21_bool == (int)7397;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_3223();
		}
		var_94_bool = var_21_bool == (int)7398;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_3223();
		}
		var_98_bool = var_21_bool == (int)7399;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_3223();
		}
		var_102_bool = var_21_bool == (int)15755;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_3357();
		}
		var_108_bool = var_20_string == (int)7402;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6715);
			@@@var_0_object:ClearReplies();
			var_125_bool = 0;
			var_125_bool = 0;
			var_126_bool = 0; var_127_object = Obj();
			var_127_object = var_1_object;
			func_3463(var_127_object);
			if(var_126_bool != 0) {
				var_134_bool = 0; var_135_object = Obj();
				var_135_object = var_1_object;
				func_3487(var_135_object);
				if(var_134_bool != 0) {
					var_125_bool = 1;
				}
			}
			if(var_125_bool != 0) {
				@@@var_0_object:AddReply((int)7429, (int)7355, (int)8200);
			}
			var_143_bool = 0; var_144_object = Obj();
			var_144_object = var_1_object;
			func_3475(var_144_object);
			if(var_143_bool != 0) {
				@@@var_0_object:AddReply((int)6716, (int)7385, (int)7403);
			}
			var_152_bool = 0;
			var_152_bool = 0;
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_3659(var_154_object);
			if(var_153_bool != 0) {
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_3671(var_160_object);
				if(var_159_bool != 0) {
					var_152_bool = 1;
				}
			}
			if(var_152_bool != 0) {
				@@@var_0_object:AddReply((int)14516, (int)15756, (int)15755);
			}
			@@@var_0_object:AddReply((int)7534, (int)-1, (int)8316);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0x5e4";
		EMIT "Pop(1)";
		EMIT "Push((int) 9517)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9518)";
		EMIT "Push((int) 10462)";
		EMIT "Push((int) 10461)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_172_bool = var_20_string == (int)10462;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9520, (int)10464, (int)10463);
			@@@var_0_object:AddReply((int)9530, (int)10466, (int)10474);
			return 0;
		}
		var_182_bool = var_20_string == (int)10464;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9522, (int)10466, (int)10465);
			@@@var_0_object:AddReply((int)9529, (int)10466, (int)10472);
			return 0;
		}
		var_192_bool = var_20_string == (int)10466;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9524, (int)10468, (int)10467);
			@@@var_0_object:AddReply((int)9528, (int)-1, (int)10471);
			return 0;
		}
		var_202_bool = var_20_string == (int)10468;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9525);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9526, (int)-1, (int)10469);
			@@@var_0_object:AddReply((int)9527, (int)-1, (int)10470);
			return 0;
		}
		var_212_bool = var_20_string == (int)15756;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14517);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14518, (int)-1, (int)15757);
			return 0;
		}
		var_219_bool = var_20_string == (int)7385;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6699);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6700, (int)7387, (int)7386);
			@@@var_0_object:AddReply((int)6714, (int)7387, (int)7400);
			@@@var_0_object:AddReply((int)6713, (int)-1, (int)7399);
			return 0;
		}
		var_232_bool = var_20_string == (int)7387;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6702, (int)7389, (int)7388);
			@@@var_0_object:AddReply((int)6712, (int)-1, (int)7398);
			return 0;
		}
		var_242_bool = var_20_string == (int)7389;
		if(var_242_bool != 0) {
			var_243_object = Obj(); var_244_object = Obj();
			var_243_object = var_1_object;
			var_244_object = var_0_object;
			func_3229();
			var_247_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6704, (int)7391, (int)7390);
			@@@var_0_object:AddReply((int)6711, (int)-1, (int)7397);
			return 0;
		}
		var_256_bool = var_20_string == (int)7391;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6706, (int)7393, (int)7392);
			@@@var_0_object:AddReply((int)6710, (int)-1, (int)7396);
			return 0;
		}
		var_266_bool = var_20_string == (int)7393;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6708, (int)-1, (int)7394);
			@@@var_0_object:AddReply((int)6709, (int)-1, (int)7395);
			return 0;
		}
		var_276_bool = var_20_string == (int)7355;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6675, (int)7357, (int)7356);
			@@@var_0_object:AddReply((int)6689, (int)7373, (int)7372);
			return 0;
		}
		var_286_bool = var_20_string == (int)7373;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6691, (int)7357, (int)7374);
			@@@var_0_object:AddReply((int)6692, (int)7377, (int)7376);
			return 0;
		}
		var_296_bool = var_20_string == (int)7377;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6693);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6694, (int)7362, (int)7378);
			@@@var_0_object:AddReply((int)6695, (int)7381, (int)7380);
			return 0;
		}
		var_306_bool = var_20_string == (int)7381;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6697, (int)-1, (int)7382);
			@@@var_0_object:AddReply((int)6698, (int)7362, (int)7383);
			return 0;
		}
		var_316_bool = var_20_string == (int)7357;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6677, (int)-1, (int)7358);
			@@@var_0_object:AddReply((int)6678, (int)7360, (int)7359);
			return 0;
		}
		var_326_bool = var_20_string == (int)7360;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6679);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6680, (int)7362, (int)7361);
			@@@var_0_object:AddReply((int)6683, (int)7365, (int)7364);
			@@@var_0_object:AddReply((int)6686, (int)7369, (int)7368);
			return 0;
		}
		var_339_bool = var_20_string == (int)7369;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6687);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6688, (int)7362, (int)7370);
			return 0;
		}
		var_346_bool = var_20_string == (int)7365;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6685, (int)7362, (int)7366);
			return 0;
		}
		var_353_bool = var_20_string == (int)7362;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_1508(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6681);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6682, (int)-1, (int)7363);
			return 0;
		}
		var_3_string = true;
		var_359_bool = 0;
		func_3115(var_359_bool);
		if(var_359_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5f5";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int)
{
	if((int)1 != 0) {
		func_3016();
		var_25_bool = var_21_int == (int)13271;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_3292();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_3298();
		}
		var_83_bool = var_21_int == (int)13288;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_3292();
		}
		var_87_bool = var_21_int == (int)13290;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_3298();
		}
		var_91_bool = var_21_int == (int)13714;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_3319();
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_3325();
		}
		var_111_bool = var_21_int == (int)13717;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_3335();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_3345();
		}
		var_131_bool = var_21_int == (int)13273;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_3351();
		}
		var_137_bool = var_20_int == (int)13258;
		if(var_137_bool != 0) {
			var_138_bool = 0;
			var_138_bool = 1;
			var_139_bool = 0;
			var_139_bool = 0;
			var_140_bool = 0; var_141_object = Obj();
			var_141_object = var_1_object;
			func_3533(var_140_bool, var_141_object);
			if(var_140_bool != 0) {
				var_155_bool = 0; var_156_object = Obj();
				var_156_object = var_1_object;
				func_3563(var_156_object);
				if(var_155_bool != 0) {
					var_139_bool = 1;
				}
			}
			if(var_139_bool != 1) {
				var_163_bool = 0;
				var_163_bool = 0;
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_3543(var_164_bool, var_165_object);
				if(var_164_bool != 0) {
					var_175_bool = 0; var_176_object = Obj();
					var_176_object = var_1_object;
					func_3563(var_176_object);
					if(var_175_bool != 0) {
						var_163_bool = 1;
					}
				}
				if(var_163_bool != 1) {
					var_138_bool = 0;
				}
			}
			if(var_138_bool != 0) {
				var_177_string = "";
				func_2418(var_21_int, "Neutral");
				@@@var_0_object:SetMessage((int)12040);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12041, (int)13262, (int)13259);
				@@@var_0_object:AddReply((int)12042, (int)13261, (int)13260);
				return 0;
			}
			var_199_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12052);
			@@@var_0_object:ClearReplies();
			var_201_bool = 0;
			var_201_bool = 1;
			var_202_bool = 0;
			var_202_bool = 0;
			var_203_bool = 0; var_204_object = Obj();
			var_204_object = var_1_object;
			func_3533(var_203_bool, var_204_object);
			if(var_203_bool != 0) {
				var_205_bool = 0; var_206_object = Obj();
				var_206_object = var_1_object;
				func_3575(var_206_object);
				if(var_205_bool != 0) {
					var_202_bool = 1;
				}
			}
			if(var_202_bool != 1) {
				var_211_bool = 0;
				var_211_bool = 0;
				var_212_bool = 0; var_213_object = Obj();
				var_213_object = var_1_object;
				func_3543(var_212_bool, var_213_object);
				if(var_212_bool != 0) {
					var_214_bool = 0; var_215_object = Obj();
					var_215_object = var_1_object;
					func_3575(var_215_object);
					if(var_214_bool != 0) {
						var_211_bool = 1;
					}
				}
				if(var_211_bool != 1) {
					var_201_bool = 0;
				}
			}
			if(var_201_bool != 0) {
				@@@var_0_object:AddReply((int)12066, (int)13289, (int)13287);
			}
			var_219_bool = 0;
			var_219_bool = 0;
			var_220_bool = 0; var_221_object = Obj();
			var_221_object = var_1_object;
			func_3599(var_221_object);
			if(var_220_bool != 0) {
				var_226_bool = 0; var_227_object = Obj();
				var_227_object = var_1_object;
				func_3611(var_227_object);
				if(var_226_bool != 0) {
					var_219_bool = 1;
				}
			}
			if(var_219_bool != 0) {
				@@@var_0_object:AddReply((int)12543, (int)13713, (int)13712);
			}
			var_235_bool = 0;
			var_235_bool = 0;
			var_236_bool = 0;
			var_236_bool = 0;
			var_237_bool = 0; var_238_object = Obj();
			var_238_object = var_1_object;
			func_3587(var_238_object);
			if(var_237_bool != 0) {
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_3623(var_244_object);
				if(var_243_bool != 0) {
					var_236_bool = 1;
				}
			}
			if(var_236_bool != 0) {
				var_249_bool = 0; var_250_object = Obj();
				var_250_object = var_1_object;
				func_3599(var_250_object);
				var_251_bool = var_249_bool == 0; //@nz
				if(var_251_bool != 0) {
					var_235_bool = 1;
				}
			}
			if(var_235_bool != 0) {
				@@@var_0_object:AddReply((int)12546, (int)13716, (int)13715);
			}
			var_255_bool = 0;
			var_255_bool = 0;
			var_256_bool = 0; var_257_object = Obj();
			var_257_object = var_1_object;
			func_3647(var_257_object);
			if(var_256_bool != 0) {
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_3635(var_263_object);
				if(var_262_bool != 0) {
					var_255_bool = 1;
				}
			}
			if(var_255_bool != 0) {
				@@@var_0_object:AddReply((int)12053, (int)13274, (int)13273);
			}
			@@@var_0_object:AddReply((int)12060, (int)-1, (int)13280);
			return 0;
		}
		var_275_bool = var_20_int == (int)13274;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12054);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12055, (int)13276, (int)13275);
			return 0;
		}
		var_282_bool = var_20_int == (int)13276;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12057, (int)13278, (int)13277);
			@@@var_0_object:AddReply((int)12061, (int)13282, (int)13281);
			return 0;
		}
		var_292_bool = var_20_int == (int)13282;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12062);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12063, (int)13284, (int)13283);
			return 0;
		}
		var_299_bool = var_20_int == (int)13284;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12065, (int)13278, (int)13285);
			return 0;
		}
		var_306_bool = var_20_int == (int)13278;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12059, (int)-1, (int)13279);
			return 0;
		}
		var_313_bool = var_20_int == (int)13716;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12548, (int)-1, (int)13717);
			return 0;
		}
		var_320_bool = var_20_int == (int)13713;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12544);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12545, (int)-1, (int)13714);
			return 0;
		}
		var_327_bool = var_20_int == (int)13289;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12069, (int)-1, (int)13290);
			return 0;
		}
		var_334_bool = var_20_int == (int)13261;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12048, (int)13268, (int)13267);
			return 0;
		}
		var_341_bool = var_20_int == (int)13268;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12050, (int)13264, (int)13269);
			return 0;
		}
		var_348_bool = var_20_int == (int)13262;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12044);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12045, (int)13264, (int)13263);
			@@@var_0_object:AddReply((int)12047, (int)13261, (int)13265);
			return 0;
		}
		var_358_bool = var_20_int == (int)13264;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_2418(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12046);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12051, (int)-1, (int)13271);
			@@@var_0_object:AddReply((int)12067, (int)-1, (int)13288);
			return 0;
		}
		var_3_string = true;
		var_367_bool = 0;
		func_3115(var_367_bool);
		if(var_367_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x983";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_4019();
	var_21_bool = 0;
	func_2933(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_25_string = "";
	func_2998("Neutral");
	lshWaitForAnimEnd();
	goto Label_19;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_3840(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj();
	GetMainOutdoorScene(var_60_object);
	var_62_bool = var_60_object == 0; //@ne
	if(var_62_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_61_object = 0;
		var_61_object = var_57_object;
		return 4;
	}
	@@var_60_object:GetMap(var_61_object);
	var_61_object = var_57_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3074(var_68_float)
{
	var_69_float = 0; var_70_float = 0;
	GetGameTime(var_70_float);
	var_70_float = var_68_float;
	return 2;
}


func_3587(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_3033(var_239_int, "d6q03");
	var_242_bool = var_239_int == (int)2;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_3079(var_136_int)
{
	var_137_float = 0; var_138_float = 0;
	GetGameTime(var_138_float);
	var_140_int = 0;
	var_140_int = var_138_float / (int)24;
	var_136_int = (int)1 + var_140_int;
	return 2;
}


func_3335()
{
	func_3987();
	var_123_bool = 0; var_124_string = ""; var_125_string = "";
	func_3062(var_123_bool, "quest_d6_03", "failed");
	return 0;
}


func_3599(var_220_bool)
{
	var_222_int = 0; var_223_string = "";
	func_3033(var_222_int, "d6q03AlbinosKilled");
	var_225_bool = var_222_int == (int)1;
	if(var_225_bool != 0) {
		var_220_bool = 1;
		return 0;
	}
	var_220_bool = 0;
	return 0;
}


func_3088(var_145_int)
{
	var_146_float = 0; var_147_float = 0;
	GetGameTime(var_147_float);
	var_148_int = 0;
	var_147_float = var_148_int;
	var_145_int = var_148_int % (int)24;
	return 2;
}


func_3345()
{
	SetVariable("ood6Spi4ka3", (int)1);
	return 0;
}


func_3857(var_102_object, var_103_string, var_104_float)
{
	var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_object = Obj(); var_113_bool = 0;
	GetMainOutdoorScene(var_112_object);
	var_114_bool = var_112_object == 0; //@ne
	if(var_114_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_112_object:GetLocator(var_103_string, var_113_bool, var_110_cvector, var_111_cvector);
	var_116_bool = var_113_bool == 0; //@nz
	if(var_116_bool != 0) {
		var_118_int = "Warning: outdoor scene locator " + var_103_string;
		var_120_int = var_118_int + " doesnt exist";
		Trace(var_120_int);
	}
	@@var_112_object:GetMap(var_102_object);
	var_121_bool = var_102_object == 0; //@ne
	if(var_121_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_123_float = GetByIndex(var_110_cvector, 0);
	var_124_float = GetByIndex(var_110_cvector, 2);
	@@var_102_object:SetMapParams(var_123_float, var_124_float, var_104_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3351()
{
	SetVariable("ood6Spi4ka4", (int)1);
	return 0;
}


func_3096(var_134_bool, var_135_int)
{
	var_136_int = 0;
	func_3079(var_136_int);
	var_134_bool = var_136_int == var_135_int;
	return 0;
}


func_3611(var_226_bool)
{
	var_228_int = 0; var_229_string = "";
	func_3033(var_228_int, "ood6Spi4ka2");
	var_231_bool = var_228_int == (int)0;
	if(var_231_bool != 0) {
		var_226_bool = 1;
		return 0;
	}
	var_226_bool = 0;
	return 0;
}


func_3357()
{
	SetVariable("ood2Spi4ka3", (int)1);
	return 0;
}


func_3102(var_532_bool)
{
	var_533_bool = 0; var_534_bool = 0;
	var_535_string = "";
	func_2998("No");
	lshWaitForAnimEnd(var_534_bool);
	var_534_bool = var_532_bool;
	return 2;
}


func_546(var_2_object, var_234_string)
{
	var_235_bool = 0;
	func_3115(var_235_bool);
	var_236_bool = var_235_bool == 0; //@nz
	if(var_236_bool != 0) {
		return 0;
	}
	var_237_bool = var_234_string == var_2_object;
	if(var_237_bool != 0) {
		return 0;
	}
	var_238_string = "";
	var_234_string = var_238_string;
	func_2998(var_238_string);
	var_2_object = var_234_string;
	return 0;
}


func_3363()
{
	SetVariable("KnowSpi4ka", (int)1);
	return 0;
}


func_3111(var_76_int)
{
	var_76_int = 2877;
	return 0;
}


func_3623(var_243_bool)
{
	var_245_int = 0; var_246_string = "";
	func_3033(var_245_int, "ood6Spi4ka3");
	var_248_bool = var_245_int == (int)0;
	if(var_248_bool != 0) {
		var_243_bool = 1;
		return 0;
	}
	var_243_bool = 0;
	return 0;
}


func_3113(var_77_string)
{
	var_77_string = "ui/NPC_Spi4ka.png";
	return 0;
}


func_3369(var_101_object)
{
	var_102_object = Obj(); var_103_string = ""; var_104_float = 0;
	func_3840(Obj());
	var_105_object = var_102_object;
	func_3857(var_102_object, "pt_map_powderhouse", (float)2);
	var_125_object = Obj();
	func_3840(var_125_object);
	@@var_101_object:ShowMap(var_125_object);
	return 0;
}


func_3115(var_23_bool)
{
	var_23_bool = 1;
	return 0;
}


func_3117()
{
	SetVariable("ood1Spi4ka1", (int)1);
	return 0;
}


func_49(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_0_object = var_25_object;
	var_35_bool = 0; var_36_object = Obj();
	var_25_object = var_36_object;
	func_2938(var_35_bool, var_36_object);
	var_75_bool = var_35_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	CreateDialog(var_31_object);
	var_76_int = 0;
	func_3111(var_76_int);
	@@var_31_object:SetNPCName(var_76_int);
	var_77_string = "";
	func_3113(var_77_string);
	@@var_31_object:SetPhoto(var_77_string);
	var_78_int = 0;
	func_3890(var_78_int);
	@@var_31_object:SetPlayerName(var_78_int);
	IsOverrideActive(var_32_bool);
	var_86_bool = var_32_bool;
	if(var_86_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	DoDialog(var_31_object);
	var_87_object = Obj(); var_88_object = Obj();
	var_25_object = var_87_object;
	var_31_object = var_88_object;
	TaskCall(3);
	func_112(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object);
	TaskReturn();
	@@var_31_object:IsDialogEnd(var_34_bool);
	
Label_94:
	var_131_bool = var_34_bool == 0; //@nz
	if(var_131_bool != 0) {
		sync();
		@@var_31_object:IsDialogEnd(var_34_bool);
		goto Label_94;
	}
	var_25_object = Obj();
	func_2994();
	StopDialog(var_31_object);
	@@var_31_object:GetReturnValue((int)-1);
	var_33_int = var_24_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1329(var_0_object, var_290_int, var_291_object)
{
	var_293_object = Obj(); var_294_bool = 0; var_295_int = 0; var_296_bool = 0; var_297_object = Obj(); var_298_bool = 0; var_299_int = 0; var_300_bool = 0;
	var_0_object = var_291_object;
	var_301_bool = 0; var_302_object = Obj();
	var_291_object = var_302_object;
	func_2938(var_301_bool, var_302_object);
	var_303_bool = var_301_bool == 0; //@nz
	if(var_303_bool != 0) {
		var_290_int = -2;
		return 8;
	}
	CreateDialog(var_297_object);
	var_304_int = 0;
	func_3111(var_304_int);
	@@var_297_object:SetNPCName(var_304_int);
	var_305_string = "";
	func_3113(var_305_string);
	@@var_297_object:SetPhoto(var_305_string);
	var_306_int = 0;
	func_3890(var_306_int);
	@@var_297_object:SetPlayerName(var_306_int);
	IsOverrideActive(var_298_bool);
	var_307_bool = var_298_bool;
	if(var_307_bool != 0) {
		var_290_int = -2;
		return 8;
	}
	DoDialog(var_297_object);
	var_308_object = Obj(); var_309_object = Obj();
	var_291_object = var_308_object;
	var_297_object = var_309_object;
	TaskCall(7);
	func_1392(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object);
	TaskReturn();
	@@var_297_object:IsDialogEnd(var_300_bool);
	
Label_1374:
	var_373_bool = var_300_bool == 0; //@nz
	if(var_373_bool != 0) {
		sync();
		@@var_297_object:IsDialogEnd(var_300_bool);
		goto Label_1374;
	}
	var_291_object = Obj();
	func_2994();
	StopDialog(var_297_object);
	@@var_297_object:GetReturnValue((int)-1);
	var_299_int = var_290_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3123()
{
	SetVariable("ood1Spi4ka2", (int)1);
	return 0;
}


func_3635(var_262_bool)
{
	var_264_int = 0; var_265_string = "";
	func_3033(var_264_int, "d6q01");
	var_267_bool = var_264_int == (int)4;
	if(var_267_bool != 0) {
		var_262_bool = 1;
		return 0;
	}
	var_262_bool = 0;
	return 0;
}


func_3890(var_78_int)
{
	var_79_int = 0; var_80_int = 0;
	GetVariable("player", var_80_int);
	var_83_bool = var_80_int == (int)0;
	if(var_83_bool != 0) {
		var_78_int = 200001;
		return 2;
	EMIT "GOTO 0xf41";
	}
	var_85_bool = var_80_int == (int)1;
	if(var_85_bool != 0) {
		var_78_int = 200002;
		return 2;
	}
	var_78_int = 200003;
	return 2;
}


func_3129()
{
	SetVariable("ood1Spi4ka3", (int)1);
	return 0;
}


func_3385()
{
	SetVariable("KnowTermitnik", (int)1);
	return 0;
}


func_317(var_0_object, var_142_int, var_143_object)
{
	var_145_object = Obj(); var_146_bool = 0; var_147_int = 0; var_148_bool = 0; var_149_object = Obj(); var_150_bool = 0; var_151_int = 0; var_152_bool = 0;
	var_0_object = var_143_object;
	var_153_bool = 0; var_154_object = Obj();
	var_143_object = var_154_object;
	func_2938(var_153_bool, var_154_object);
	var_155_bool = var_153_bool == 0; //@nz
	if(var_155_bool != 0) {
		var_142_int = -2;
		return 8;
	}
	CreateDialog(var_149_object);
	var_156_int = 0;
	func_3111(var_156_int);
	@@var_149_object:SetNPCName(var_156_int);
	var_157_string = "";
	func_3113(var_157_string);
	@@var_149_object:SetPhoto(var_157_string);
	var_158_int = 0;
	func_3890(var_158_int);
	@@var_149_object:SetPlayerName(var_158_int);
	IsOverrideActive(var_150_bool);
	var_159_bool = var_150_bool;
	if(var_159_bool != 0) {
		var_142_int = -2;
		return 8;
	}
	DoDialog(var_149_object);
	var_160_object = Obj(); var_161_object = Obj();
	var_143_object = var_160_object;
	var_149_object = var_161_object;
	TaskCall(5);
	func_380(var_162_object, var_163_object, var_164_string, var_165_bool, var_160_object, var_161_object);
	TaskReturn();
	@@var_149_object:IsDialogEnd(var_152_bool);
	
Label_362:
	var_286_bool = var_152_bool == 0; //@nz
	if(var_286_bool != 0) {
		sync();
		@@var_149_object:IsDialogEnd(var_152_bool);
		goto Label_362;
	}
	var_143_object = Obj();
	func_2994();
	StopDialog(var_149_object);
	@@var_149_object:GetReturnValue((int)-1);
	var_151_int = var_142_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3135(var_30_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	Trace("lockpick1time is given");
	CreateInvItem(var_33_object);
	@@var_33_object:SetItemName("lockpick");
	@@var_33_object:SetProperty("uses", (int)1);
	var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0;
	var_30_object = var_38_object;
	var_33_object = var_39_object;
	func_3049(var_38_object, var_39_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3647(var_256_bool)
{
	var_258_int = 0; var_259_string = "";
	func_3033(var_258_int, "ood6Spi4ka4");
	var_261_bool = var_258_int == (int)0;
	if(var_261_bool != 0) {
		var_256_bool = 1;
		return 0;
	}
	var_256_bool = 0;
	return 0;
}


func_3391(var_275_bool)
{
	var_277_int = 0; var_278_string = "";
	func_3033(var_277_int, "d1q01FirstGeorgVisit");
	var_280_bool = var_277_int == (int)1;
	if(var_280_bool != 0) {
		var_275_bool = 1;
		return 0;
	}
	var_275_bool = 0;
	return 0;
}


func_3907()
{
	var_143_object = Obj(); var_144_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_144_object, (int)48, (int)2, (int)12130);
	var_149_bool = 0; var_150_object = Obj(); var_151_int = 0;
	var_144_object = var_150_object;
	func_3794(var_149_bool, var_150_object, (int)43);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3575(var_205_bool)
{
	var_207_int = 0; var_208_string = "";
	func_3033(var_207_int, "d6q03");
	var_210_bool = var_207_int == (int)0;
	if(var_210_bool != 0) {
		var_205_bool = 1;
		return 0;
	}
	var_205_bool = 0;
	return 0;
}


func_3659(var_153_bool)
{
	var_155_int = 0; var_156_string = "";
	func_3033(var_155_int, "d2q01");
	var_158_bool = var_155_int >= (int)5;
	if(var_158_bool != 0) {
		var_153_bool = 1;
		return 0;
	}
	var_153_bool = 0;
	return 0;
}


func_3403(var_251_bool)
{
	var_253_int = 0; var_254_string = "";
	func_3033(var_253_int, "d1q04");
	var_258_bool = var_253_int == (int)2;
	if(var_258_bool != 0) {
		var_251_bool = 1;
		return 0;
	}
	var_251_bool = 0;
	return 0;
}


func_3923()
{
	var_71_object = Obj(); var_72_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_72_object, (int)46, (int)2, (int)12128);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_72_object = var_78_object;
	func_3794(var_77_bool, var_78_object, (int)43);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3156()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3671(var_159_bool)
{
	var_161_int = 0; var_162_string = "";
	func_3033(var_161_int, "ood2Spi4ka3");
	var_164_bool = var_161_int == (int)0;
	if(var_164_bool != 0) {
		var_159_bool = 1;
		return 0;
	}
	var_159_bool = 0;
	return 0;
}


func_3415(var_259_bool)
{
	var_261_int = 0; var_262_string = "";
	func_3033(var_261_int, "ood1Spi4ka1");
	var_264_bool = var_261_int == (int)0;
	if(var_264_bool != 0) {
		var_259_bool = 1;
		return 0;
	}
	var_259_bool = 0;
	return 0;
}


func_3162()
{
	var_132_object = Obj(); var_133_object = Obj(); var_134_object = Obj(); var_135_object = Obj();
	func_3840(Obj());
	var_136_object = var_134_object;
	@@var_134_object:FindMark(var_135_object, "d1q04KaterinaGotoMishka");
	var_138_object = var_135_object;
	if(var_138_object != 0) {
		@@var_135_object:Remove();
	}
	@@var_134_object:FindMark(var_135_object, "d1q04MishkaGotoSpi4ka");
	var_140_object = var_135_object;
	if(var_140_object != 0) {
		@@var_135_object:Remove();
	}
	@@var_134_object:FindMark(var_135_object, "d1q04Spi4kaGotoPowderHouse");
	var_142_object = var_135_object;
	if(var_142_object != 0) {
		@@var_135_object:Remove();
	}
	func_3907();
	var_152_bool = 0; var_153_int = 0;
	func_3823(var_152_bool, (int)44);
	var_160_bool = 0; var_161_int = 0;
	func_3823(var_160_bool, (int)45);
	var_162_bool = 0; var_163_int = 0;
	func_3823(var_162_bool, (int)46);
	var_164_bool = 0; var_165_string = ""; var_166_string = "";
	func_3062(var_164_bool, "quest_d1_04", "failed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2146(var_0_object, var_377_int, var_378_object)
{
	var_380_object = Obj(); var_381_bool = 0; var_382_int = 0; var_383_bool = 0; var_384_object = Obj(); var_385_bool = 0; var_386_int = 0; var_387_bool = 0;
	var_0_object = var_378_object;
	var_388_bool = 0; var_389_object = Obj();
	var_378_object = var_389_object;
	func_2938(var_388_bool, var_389_object);
	var_390_bool = var_388_bool == 0; //@nz
	if(var_390_bool != 0) {
		var_377_int = -2;
		return 8;
	}
	CreateDialog(var_384_object);
	var_391_int = 0;
	func_3111(var_391_int);
	@@var_384_object:SetNPCName(var_391_int);
	var_392_string = "";
	func_3113(var_392_string);
	@@var_384_object:SetPhoto(var_392_string);
	var_393_int = 0;
	func_3890(var_393_int);
	@@var_384_object:SetPlayerName(var_393_int);
	IsOverrideActive(var_385_bool);
	var_394_bool = var_385_bool;
	if(var_394_bool != 0) {
		var_377_int = -2;
		return 8;
	}
	DoDialog(var_384_object);
	var_395_object = Obj(); var_396_object = Obj();
	var_378_object = var_395_object;
	var_384_object = var_396_object;
	TaskCall(9);
	func_2209(var_397_object, var_398_object, var_399_string, var_400_bool, var_395_object, var_396_object);
	TaskReturn();
	@@var_384_object:IsDialogEnd(var_387_bool);
	
Label_2191:
	var_530_bool = var_387_bool == 0; //@nz
	if(var_530_bool != 0) {
		sync();
		@@var_384_object:IsDialogEnd(var_387_bool);
		goto Label_2191;
	}
	var_378_object = Obj();
	func_2994();
	StopDialog(var_384_object);
	@@var_384_object:GetReturnValue((int)-1);
	var_386_int = var_377_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3683(var_337_bool)
{
	var_339_int = 0; var_340_string = "";
	func_3033(var_339_int, "KnowMishka");
	var_342_bool = var_339_int == (int)1;
	if(var_342_bool != 0) {
		var_337_bool = 1;
		return 0;
	}
	var_337_bool = 0;
	return 0;
}


func_3427(var_269_bool)
{
	var_271_int = 0; var_272_string = "";
	func_3033(var_271_int, "ood1Spi4ka2");
	var_274_bool = var_271_int == (int)0;
	if(var_274_bool != 0) {
		var_269_bool = 1;
		return 0;
	}
	var_269_bool = 0;
	return 0;
}


func_3939()
{
	var_34_object = Obj(); var_35_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_35_object, (int)53, (int)1, (int)12135);
	var_40_bool = 0; var_41_object = Obj(); var_42_int = 0;
	var_35_object = var_41_object;
	func_3794(var_40_bool, var_41_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2921(var_21_bool, var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0;
	@@var_22_object:GetPosition(var_27_cvector);
	GetPosition(var_28_cvector);
	var_29_cvector = var_27_cvector - var_28_cvector;
	var_31_float = GetByIndex(var_29_cvector, 0);
	var_32_float = GetByIndex(var_29_cvector, 2);
	Rotate(var_31_float, var_32_float, var_30_bool);
	var_30_bool = var_21_bool;
	return 8;
}


func_3695(var_321_bool)
{
	var_323_int = 0; var_324_string = "";
	func_3033(var_323_int, "KnowOspina");
	var_326_bool = var_323_int == (int)1;
	if(var_326_bool != 0) {
		var_321_bool = 1;
		return 0;
	}
	var_321_bool = 0;
	return 0;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_87_object, var_88_object)
{
	var_0_object = var_88_object;
	var_1_object = var_87_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_94_object = Obj(); var_95_object = Obj();
		var_94_object = var_1_object;
		var_95_object = var_0_object;
		func_3363();
		var_98_string = "";
		func_180(var_88_object, "Neutral");
		@@@var_0_object:SetMessage((int)356);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)357, (int)417, (int)414);
		@@@var_0_object:AddReply((int)358, (int)418, (int)415);
		@@@var_0_object:AddReply((int)359, (int)-1, (int)416);
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	var_123_bool = 0;
	func_3115(var_123_bool);
	if(var_123_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_124_object = var_3_object;
		if(var_124_object != 0) {
		} else {
			var_125_string = "";
			var_125_string = var_2_object;
			func_2998(var_125_string);
			goto Label_154;
	}
		PlayAnimation("all", "idle");

	Label_169:
		WaitForAnimEnd();
		var_128_object = var_3_object;
		if(var_128_object != 0) {
			goto Label_179;
		}
		PlayAnimation("all", "idle");
		goto Label_169;
	}
	goto Label_179;
	
Label_179:
	return 0;
	
}


func_3439(var_297_bool)
{
	var_299_int = 0; var_300_string = "";
	func_3033(var_299_int, "ood1Spi4ka3");
	var_302_bool = var_299_int == (int)0;
	if(var_302_bool != 0) {
		var_297_bool = 1;
		return 0;
	}
	var_297_bool = 0;
	return 0;
}


func_1392(var_0_object, var_1_object, var_2_object, var_3_object, var_308_object, var_309_object)
{
	var_0_object = var_309_object;
	var_1_object = var_308_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_315_string = "";
		func_1508(var_309_object, "Neutral");
		@@@var_0_object:SetMessage((int)6715);
		@@@var_0_object:ClearReplies();
		var_321_bool = 0;
		var_321_bool = 0;
		var_322_bool = 0; var_323_object = Obj();
		var_323_object = var_1_object;
		func_3463(var_323_object);
		if(var_322_bool != 0) {
			var_328_bool = 0; var_329_object = Obj();
			var_329_object = var_1_object;
			func_3487(var_329_object);
			if(var_328_bool != 0) {
				var_321_bool = 1;
			}
		}
		if(var_321_bool != 0) {
			@@@var_0_object:AddReply((int)7429, (int)7355, (int)8200);
		}
		var_337_bool = 0; var_338_object = Obj();
		var_338_object = var_1_object;
		func_3475(var_338_object);
		if(var_337_bool != 0) {
			@@@var_0_object:AddReply((int)6716, (int)7385, (int)7403);
		}
		var_346_bool = 0;
		var_346_bool = 0;
		var_347_bool = 0; var_348_object = Obj();
		var_348_object = var_1_object;
		func_3659(var_348_object);
		if(var_347_bool != 0) {
			var_353_bool = 0; var_354_object = Obj();
			var_354_object = var_1_object;
			func_3671(var_354_object);
			if(var_353_bool != 0) {
				var_346_bool = 1;
			}
		}
		if(var_346_bool != 0) {
			@@@var_0_object:AddReply((int)14516, (int)15756, (int)15755);
		}
		@@@var_0_object:AddReply((int)7534, (int)-1, (int)8316);
		goto Label_1478;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0x5e4";
	EMIT "Pop(1)";
	EMIT "Push((int) 9517)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9518)";
	EMIT "Push((int) 10462)";
	EMIT "Push((int) 10461)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0x5c6";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x574";
	}
Label_1478:
	var_365_bool = 0;
	func_3115(var_365_bool);
	if(var_365_bool != 0) {

	Label_1482:
		lshWaitForAnimEnd();
		var_366_object = var_3_object;
		if(var_366_object != 0) {
		} else {
			var_367_string = "";
			var_367_string = var_2_object;
			func_2998(var_367_string);
			goto Label_1482;
	}
		PlayAnimation("all", "idle");

	Label_1497:
		WaitForAnimEnd();
		var_370_object = var_3_object;
		if(var_370_object != 0) {
			goto Label_1507;
		}
		PlayAnimation("all", "idle");
		goto Label_1497;
	}
	goto Label_1507;
	
Label_1507:
	return 0;
	
}


func_2418(var_2_object, var_177_string)
{
	var_178_bool = 0;
	func_3115(var_178_bool);
	var_179_bool = var_178_bool == 0; //@nz
	if(var_179_bool != 0) {
		return 0;
	}
	var_180_bool = var_177_string == var_2_object;
	if(var_180_bool != 0) {
		return 0;
	}
	var_181_string = "";
	var_177_string = var_181_string;
	func_2998(var_181_string);
	var_2_object = var_177_string;
	return 0;
}


func_3955()
{
	var_34_object = Obj(); var_35_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_35_object, (int)107, (int)2, (int)13730);
	var_40_bool = 0; var_41_object = Obj(); var_42_int = 0;
	var_35_object = var_41_object;
	func_3794(var_40_bool, var_41_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2933(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_2938(var_35_bool, var_36_object)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0;
	@@var_36_object:GetPosition(var_46_cvector);
	@@var_36_object:GetEyesHeight(var_45_float);
	var_53_float = GetByIndex(var_46_cvector, 1);
	var_53_float = var_53_float + var_45_float;
	SetByIndex(var_46_cvector, 1) = var_53_float;
	GetPosition(var_47_cvector);
	GetEyesHeight(var_45_float);
	var_54_float = GetByIndex(var_47_cvector, 1);
	var_54_float = var_54_float + var_45_float;
	SetByIndex(var_47_cvector, 1) = var_54_float;
	var_48_cvector = var_46_cvector - var_47_cvector;
	var_55_float = GetByIndex(var_48_cvector, 1);
	SetByIndex(var_48_cvector, 1) = (float)0;
	var_56_int = var_48_cvector | var_48_cvector;
	var_57_float = sqrt(var_56_int);
	var_48_cvector = var_48_cvector / var_57_float;
	var_49_cvector = -var_48_cvector;
	var_59_float = var_48_cvector * (int)70;
	var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	var_61_cvector = var_49_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3023(var_60_cvector, var_61_cvector);
	var_69_float = var_60_cvector * (int)25;
	var_70_int = var_59_float + var_69_float;
	var_50_cvector = var_70_int - CVector(0.0, 10.0, 0.0);
	var_51_cvector = var_47_cvector + var_50_cvector;
	IsOverrideActive(var_52_bool);
	var_72_bool = var_52_bool;
	if(var_72_bool != 0) {
		var_35_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_51_cvector, var_49_cvector);
	var_73_float = GetByIndex(var_50_cvector, 0);
	var_74_float = GetByIndex(var_50_cvector, 2);
	Rotate(var_73_float, var_74_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_35_bool = 1;
	return 16;
}


func_3707(var_288_bool)
{
	var_290_int = 0;
	func_3088(var_290_int);
	var_296_bool = var_290_int >= (int)18;
	if(var_296_bool != 0) {
		var_288_bool = 1;
		return 0;
	}
	var_288_bool = 0;
	return 0;
}


func_3451(var_456_bool)
{
	var_458_int = 0; var_459_string = "";
	func_3033(var_458_int, "KnowShabnak");
	var_461_bool = var_458_int == (int)1;
	if(var_461_bool != 0) {
		var_456_bool = 1;
		return 0;
	}
	var_456_bool = 0;
	return 0;
}


func_380(var_0_object, var_1_object, var_2_object, var_3_object, var_160_object, var_161_object)
{
	var_0_object = var_161_object;
	var_1_object = var_160_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_167_string = "";
		func_546(var_161_object, "Neutral");
		@@@var_0_object:SetMessage((int)5851);
		@@@var_0_object:ClearReplies();
		var_173_bool = 0;
		var_173_bool = 0;
		var_174_bool = 0; var_175_object = Obj();
		var_175_object = var_1_object;
		func_3403(var_175_object);
		if(var_174_bool != 0) {
			var_182_bool = 0; var_183_object = Obj();
			var_183_object = var_1_object;
			func_3415(var_183_object);
			if(var_182_bool != 0) {
				var_173_bool = 1;
			}
		}
		if(var_173_bool != 0) {
			@@@var_0_object:AddReply((int)5852, (int)6464, (int)6443);
		}
		var_191_bool = 0;
		var_191_bool = 0;
		var_192_bool = 0; var_193_object = Obj();
		var_193_object = var_1_object;
		func_3427(var_193_object);
		if(var_192_bool != 0) {
			var_198_bool = 0; var_199_object = Obj();
			var_199_object = var_1_object;
			func_3391(var_199_object);
			if(var_198_bool != 0) {
				var_191_bool = 1;
			}
		}
		if(var_191_bool != 0) {
			@@@var_0_object:AddReply((int)8356, (int)6444, (int)9179);
		}
		var_207_bool = 0;
		var_207_bool = 1;
		var_208_bool = 0;
		var_208_bool = 0;
		var_209_bool = 0; var_210_object = Obj();
		var_210_object = var_1_object;
		func_3523(var_209_bool, var_210_object);
		if(var_209_bool != 0) {
			var_220_bool = 0; var_221_object = Obj();
			var_221_object = var_1_object;
			func_3439(var_221_object);
			if(var_220_bool != 0) {
				var_208_bool = 1;
			}
		}
		if(var_208_bool != 1) {
			var_226_bool = 0;
			var_226_bool = 0;
			var_227_bool = 0; var_228_object = Obj();
			var_228_object = var_1_object;
			func_3553(var_227_bool, var_228_object);
			if(var_227_bool != 0) {
				var_238_bool = 0; var_239_object = Obj();
				var_239_object = var_1_object;
				func_3439(var_239_object);
				if(var_238_bool != 0) {
					var_226_bool = 1;
				}
			}
			if(var_226_bool != 1) {
				var_207_bool = 0;
			}
		}
		if(var_207_bool != 0) {
			@@@var_0_object:AddReply((int)8357, (int)6453, (int)9180);
		}
		var_243_bool = 0;
		var_243_bool = 0;
		var_244_bool = 0; var_245_object = Obj();
		var_245_object = var_1_object;
		func_3695(var_245_object);
		if(var_244_bool != 0) {
			var_250_bool = 0; var_251_object = Obj();
			var_251_object = var_1_object;
			func_3499(var_251_object);
			if(var_250_bool != 0) {
				var_243_bool = 1;
			}
		}
		if(var_243_bool != 0) {
			@@@var_0_object:AddReply((int)8365, (int)9205, (int)9188);
		}
		var_259_bool = 0;
		var_259_bool = 0;
		var_260_bool = 0; var_261_object = Obj();
		var_261_object = var_1_object;
		func_3683(var_261_object);
		if(var_260_bool != 0) {
			var_266_bool = 0; var_267_object = Obj();
			var_267_object = var_1_object;
			func_3511(var_267_object);
			if(var_266_bool != 0) {
				var_259_bool = 1;
			}
		}
		if(var_259_bool != 0) {
			@@@var_0_object:AddReply((int)8379, (int)9378, (int)9202);
		}
		@@@var_0_object:AddReply((int)8520, (int)-1, (int)9362);
		goto Label_516;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x180";
	}
Label_516:
	var_278_bool = 0;
	func_3115(var_278_bool);
	if(var_278_bool != 0) {

	Label_520:
		lshWaitForAnimEnd();
		var_279_object = var_3_object;
		if(var_279_object != 0) {
		} else {
			var_280_string = "";
			var_280_string = var_2_object;
			func_2998(var_280_string);
			goto Label_520;
	}
		PlayAnimation("all", "idle");

	Label_535:
		WaitForAnimEnd();
		var_283_object = var_3_object;
		if(var_283_object != 0) {
			goto Label_545;
		}
		PlayAnimation("all", "idle");
		goto Label_535;
	}
	goto Label_545;
	
Label_545:
	return 0;
	
}


func_3971()
{
	var_98_object = Obj(); var_99_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_99_object, (int)109, (int)2, (int)13732);
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0;
	var_99_object = var_105_object;
	func_3794(var_104_bool, var_105_object, (int)107);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3718(var_142_bool)
{
	var_144_bool = 0;
	var_144_bool = 0;
	var_145_int = 0;
	func_3088(var_145_int);
	var_151_bool = var_145_int >= (int)0;
	if(var_151_bool != 0) {
		var_152_int = 0;
		func_3088(var_152_int);
		var_154_bool = var_152_int < (int)6;
		if(var_154_bool != 0) {
			var_144_bool = 1;
		}
	}
	if(var_144_bool != 0) {
		var_142_bool = 1;
		return 0;
	}
	var_142_bool = 0;
	return 0;
}


func_3463(var_126_bool)
{
	var_128_int = 0; var_129_string = "";
	func_3033(var_128_int, "ood2Spi4ka1");
	var_133_bool = var_128_int == (int)0;
	if(var_133_bool != 0) {
		var_126_bool = 1;
		return 0;
	}
	var_126_bool = 0;
	return 0;
}


func_3211()
{
	SetVariable("KnowShabnak", (int)1);
	return 0;
}


func_3217()
{
	SetVariable("ood2Spi4ka1", (int)1);
	return 0;
}


func_3475(var_143_bool)
{
	var_145_int = 0; var_146_string = "";
	func_3033(var_145_int, "ood2Spi4ka2");
	var_148_bool = var_145_int == (int)0;
	if(var_148_bool != 0) {
		var_143_bool = 1;
		return 0;
	}
	var_143_bool = 0;
	return 0;
}


func_3987()
{
	var_114_object = Obj(); var_115_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_115_object, (int)110, (int)2, (int)13733);
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0;
	var_115_object = var_121_object;
	func_3794(var_120_bool, var_121_object, (int)107);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3223()
{
	SetVariable("ood2Spi4ka2", (int)1);
	return 0;
}


func_3739(var_166_bool)
{
	var_168_bool = 0;
	var_168_bool = 0;
	var_169_int = 0;
	func_3088(var_169_int);
	var_171_bool = var_169_int >= (int)6;
	if(var_171_bool != 0) {
		var_172_int = 0;
		func_3088(var_172_int);
		var_174_bool = var_172_int < (int)12;
		if(var_174_bool != 0) {
			var_168_bool = 1;
		}
	}
	if(var_168_bool != 0) {
		var_166_bool = 1;
		return 0;
	}
	var_166_bool = 0;
	return 0;
}


func_3229()
{
	SetVariable("KnowAlbinos", (int)1);
	return 0;
}


func_3487(var_134_bool)
{
	var_136_int = 0; var_137_string = "";
	func_3033(var_136_int, "d2q01");
	var_139_bool = var_136_int == (int)3;
	if(var_139_bool != 0) {
		var_134_bool = 1;
		return 0;
	}
	var_134_bool = 0;
	return 0;
}


func_2209(var_0_object, var_1_object, var_2_object, var_3_object, var_395_object, var_396_object)
{
	var_0_object = var_396_object;
	var_1_object = var_395_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_402_bool = 0;
		var_402_bool = 1;
		var_403_bool = 0;
		var_403_bool = 0;
		var_404_bool = 0; var_405_object = Obj();
		var_405_object = var_1_object;
		func_3533(var_404_bool, var_405_object);
		if(var_404_bool != 0) {
			var_415_bool = 0; var_416_object = Obj();
			var_416_object = var_1_object;
			func_3563(var_416_object);
			if(var_415_bool != 0) {
				var_403_bool = 1;
			}
		}
		if(var_403_bool != 1) {
			var_421_bool = 0;
			var_421_bool = 0;
			var_422_bool = 0; var_423_object = Obj();
			var_423_object = var_1_object;
			func_3543(var_422_bool, var_423_object);
			if(var_422_bool != 0) {
				var_433_bool = 0; var_434_object = Obj();
				var_434_object = var_1_object;
				func_3563(var_434_object);
				if(var_433_bool != 0) {
					var_421_bool = 1;
				}
			}
			if(var_421_bool != 1) {
				var_402_bool = 0;
			}
		}
		if(var_402_bool != 0) {
			var_435_string = "";
			func_2418(var_396_object, "Neutral");
			@@@var_0_object:SetMessage((int)12040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12041, (int)13262, (int)13259);
			@@@var_0_object:AddReply((int)12042, (int)13261, (int)13260);
		} else {
				var_455_string = "";
				func_2418(var_396_object, "Neutral");
				@@@var_0_object:SetMessage((int)12052);
				@@@var_0_object:ClearReplies();
				var_457_bool = 0;
				var_457_bool = 1;
				var_458_bool = 0;
				var_458_bool = 0;
				var_459_bool = 0; var_460_object = Obj();
				var_460_object = var_1_object;
				func_3533(var_459_bool, var_460_object);
				if(var_459_bool != 0) {
					var_461_bool = 0; var_462_object = Obj();
					var_462_object = var_1_object;
					func_3575(var_462_object);
					if(var_461_bool != 0) {
						var_458_bool = 1;
					}
				}
				if(var_458_bool != 1) {
					var_467_bool = 0;
					var_467_bool = 0;
					var_468_bool = 0; var_469_object = Obj();
					var_469_object = var_1_object;
					func_3543(var_468_bool, var_469_object);
					if(var_468_bool != 0) {
						var_470_bool = 0; var_471_object = Obj();
						var_471_object = var_1_object;
						func_3575(var_471_object);
						if(var_470_bool != 0) {
							var_467_bool = 1;
						}
					}
					if(var_467_bool != 1) {
						var_457_bool = 0;
					}
				}
				if(var_457_bool != 0) {
					@@@var_0_object:AddReply((int)12066, (int)13289, (int)13287);
				}
				var_475_bool = 0;
				var_475_bool = 0;
				var_476_bool = 0; var_477_object = Obj();
				var_477_object = var_1_object;
				func_3599(var_477_object);
				if(var_476_bool != 0) {
					var_482_bool = 0; var_483_object = Obj();
					var_483_object = var_1_object;
					func_3611(var_483_object);
					if(var_482_bool != 0) {
						var_475_bool = 1;
					}
				}
				if(var_475_bool != 0) {
					@@@var_0_object:AddReply((int)12543, (int)13713, (int)13712);
				}
				var_491_bool = 0;
				var_491_bool = 0;
				var_492_bool = 0;
				var_492_bool = 0;
				var_493_bool = 0; var_494_object = Obj();
				var_494_object = var_1_object;
				func_3587(var_494_object);
				if(var_493_bool != 0) {
					var_499_bool = 0; var_500_object = Obj();
					var_500_object = var_1_object;
					func_3623(var_500_object);
					if(var_499_bool != 0) {
						var_492_bool = 1;
					}
				}
				if(var_492_bool != 0) {
					var_505_bool = 0; var_506_object = Obj();
					var_506_object = var_1_object;
					func_3599(var_506_object);
					var_507_bool = var_505_bool == 0; //@nz
					if(var_507_bool != 0) {
						var_491_bool = 1;
					}
				}
				if(var_491_bool != 0) {
					@@@var_0_object:AddReply((int)12546, (int)13716, (int)13715);
				}
				var_511_bool = 0;
				var_511_bool = 0;
				var_512_bool = 0; var_513_object = Obj();
				var_513_object = var_1_object;
				func_3647(var_513_object);
				if(var_512_bool != 0) {
					var_518_bool = 0; var_519_object = Obj();
					var_519_object = var_1_object;
					func_3635(var_519_object);
					if(var_518_bool != 0) {
						var_511_bool = 1;
					}
				}
				if(var_511_bool != 0) {
					@@@var_0_object:AddReply((int)12053, (int)13274, (int)13273);
				}
				@@@var_0_object:AddReply((int)12060, (int)-1, (int)13280);
				goto Label_2388;
		}
	}
Label_2388:
	var_447_bool = 0;
	func_3115(var_447_bool);
	if(var_447_bool != 0) {

	Label_2392:
		lshWaitForAnimEnd();
		var_448_object = var_3_object;
		if(var_448_object != 0) {
		} else {
			var_449_string = "";
			var_449_string = var_2_object;
			func_2998(var_449_string);
			goto Label_2392;
	}
		PlayAnimation("all", "idle");

	Label_2407:
		WaitForAnimEnd();
		var_452_object = var_3_object;
		if(var_452_object != 0) {
			goto Label_2417;
		}
		PlayAnimation("all", "idle");
		goto Label_2407;

	}
	goto Label_2417;
	
Label_2417:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x8a5";


func_3235()
{
	SetVariable("KnowZemlja", (int)1);
	return 0;
}


func_4003()
{
	var_59_object = Obj(); var_60_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_60_object, (int)158, (int)2, (int)15376);
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0;
	var_60_object = var_66_object;
	func_3794(var_65_bool, var_66_object, (int)107);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3241()
{
	SetVariable("d2q01", (int)4);
	func_3939();
	var_59_bool = 0; var_60_string = ""; var_61_string = "";
	func_3062(var_59_bool, "quest_d2_01", "woman");
	return 0;
}


func_3499(var_327_bool)
{
	var_329_int = 0; var_330_string = "";
	func_3033(var_329_int, "ood1Spi4ka4");
	var_332_bool = var_329_int == (int)0;
	if(var_332_bool != 0) {
		var_327_bool = 1;
		return 0;
	}
	var_327_bool = 0;
	return 0;
}


func_3760(var_306_bool)
{
	var_308_bool = 0;
	var_308_bool = 0;
	var_309_int = 0;
	func_3088(var_309_int);
	var_311_bool = var_309_int >= (int)12;
	if(var_311_bool != 0) {
		var_312_int = 0;
		func_3088(var_312_int);
		var_314_bool = var_312_int < (int)18;
		if(var_314_bool != 0) {
			var_308_bool = 1;
		}
	}
	if(var_308_bool != 0) {
		var_306_bool = 1;
		return 0;
	}
	var_306_bool = 0;
	return 0;
}


func_2994()
{
	CameraSwitchToNormal();
	return 0;
}


func_4019()
{
	var_20_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_180(var_2_object, var_30_string)
{
	var_31_bool = 0;
	func_3115(var_31_bool);
	var_32_bool = var_31_bool == 0; //@nz
	if(var_32_bool != 0) {
		return 0;
	}
	var_33_bool = var_30_string == var_2_object;
	if(var_33_bool != 0) {
		return 0;
	}
	var_34_string = "";
	var_30_string = var_34_string;
	func_2998(var_34_string);
	var_2_object = var_30_string;
	return 0;
}


func_2998(var_25_string)
{
	var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0;
	var_31_int = "playing " + var_25_string;
	Trace(var_31_int);
	lshGetAnimTimes(var_25_string, var_28_float, var_29_float);
	lshPlayAnimation(var_28_float, var_29_float);
	var_33_int = "start: " + var_28_float;
	Trace(var_33_int);
	var_35_int = "end: " + var_29_float;
	Trace(var_35_int);
	return 4;
}


func_3255()
{
	SetVariable("ood1Spi4ka4", (int)1);
	return 0;
}


func_4023(var_21_object)
{
	var_22_bool = GlobalVars[1];
	var_23_bool = var_22_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_24_int = 0; var_25_object = Obj();
		var_21_object = var_25_object;
		TaskCall(2);
		func_49(var_26_object, var_24_int, var_25_object);
		TaskReturn();
		var_133_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_134_bool = 0; var_135_int = 0;
	func_3096(var_134_bool, (int)1);
	if(var_134_bool != 0) {
		var_142_int = 0; var_143_object = Obj();
		var_21_object = var_143_object;
		TaskCall(4);
		func_317(var_144_object, var_142_int, var_143_object);
		TaskReturn();
		return 0;
	}
	var_288_bool = 0; var_289_int = 0;
	func_3096(var_288_bool, (int)2);
	if(var_288_bool != 0) {
		var_290_int = 0; var_291_object = Obj();
		var_21_object = var_291_object;
		TaskCall(6);
		func_1329(var_292_object, var_290_int, var_291_object);
		TaskReturn();
		return 0;
	}
	var_375_bool = 0; var_376_int = 0;
	func_3096(var_375_bool, (int)6);
	if(var_375_bool != 0) {
		var_377_int = 0; var_378_object = Obj();
		var_21_object = var_378_object;
		TaskCall(8);
		func_2146(var_379_object, var_377_int, var_378_object);
		TaskReturn();
		return 0;
	}
	func_3102((bool)0);
	return 0;
}


func_3511(var_343_bool)
{
	var_345_int = 0; var_346_string = "";
	func_3033(var_345_int, "ood1Spi4ka5");
	var_348_bool = var_345_int == (int)0;
	if(var_348_bool != 0) {
		var_343_bool = 1;
		return 0;
	}
	var_343_bool = 0;
	return 0;
}


func_3261()
{
	SetVariable("ood1Spi4ka5", (int)1);
	return 0;
}


func_3267()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_3523(var_286_bool, var_287_object)
{
	var_288_bool = 0; var_289_object = Obj();
	var_287_object = var_289_object;
	func_3707(var_289_object);
	if(var_288_bool != 0) {
		var_286_bool = 1;
		return 0;
	}
	var_286_bool = 0;
	return 0;
}


func_3781(var_49_object)
{
	var_50_object = Obj(); var_51_object = Obj();
	GetDiaryRoot(var_51_object);
	var_52_bool = var_51_object == 0; //@nz
	if(var_52_bool != 0) {
		Trace("Can't retrieve diary root");
		var_49_object = 0;
		return 2;
	}
	var_51_object = var_49_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3016()
{
	var_23_bool = 0;
	func_3115(var_23_bool);
	if(var_23_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3273()
{
	var_55_object = Obj(); var_56_object = Obj();
	func_3840(Obj());
	var_57_object = var_56_object;
	var_68_float = 0;
	func_3074(var_68_float);
	@@var_56_object:AddMark("d1q04Spi4kaGotoPowderHouse", "pt_map_powderhouse", (int)0, (int)8645, var_68_float);
	func_3923();
	return 2;
}
EMIT "Stack[-1] = 0";


func_3533(var_140_bool, var_141_object)
{
	var_142_bool = 0; var_143_object = Obj();
	var_141_object = var_143_object;
	func_3718(var_143_object);
	if(var_142_bool != 0) {
		var_140_bool = 1;
		return 0;
	}
	var_140_bool = 0;
	return 0;
}


func_3023(var_60_cvector, var_61_cvector)
{
	var_63_float = 0; var_64_float = 0;
	var_65_int = var_61_cvector | var_61_cvector;
	var_64_float = sqrt(var_65_int);
	var_66_float = 9.999999974752427e-07;
	var_67_bool = var_64_float < var_66_float;
	if(var_67_bool != 0) {
		var_60_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_60_cvector = var_61_cvector / var_64_float;
	return 2;
}


func_3794(var_40_bool, var_41_object, var_42_int)
{
	var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0;
	func_3781(Obj());
	var_49_object = var_46_object;
	@@var_46_object:Find(var_42_int, var_47_object);
	var_54_bool = var_47_object == 0; //@nz
	if(var_54_bool != 0) {
		var_56_int = "Can't find diary parent with id: " + var_42_int;
		Trace(var_56_int);
		var_40_bool = 0;
		return 6;
	}
	@@var_47_object:AddChild(var_41_object);
	SetVariable("player_diary", (int)1);
	@@var_41_object:GetCategory(var_48_int);
	SetDiarySection(var_48_int);
	var_40_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3543(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj();
	var_165_object = var_167_object;
	func_3739(var_167_object);
	if(var_166_bool != 0) {
		var_164_bool = 1;
		return 0;
	}
	var_164_bool = 0;
	return 0;
}


func_3033(var_157_int, var_158_string)
{
	var_159_int = 0; var_160_int = 0;
	GetVariable(var_158_string, var_160_int);
	var_160_int = var_157_int;
	return 2;
}


func_3292()
{
	SetVariable("ood6Spi4ka1", (int)1);
	return 0;
}


func_3038(var_68_object, var_69_string)
{
	var_70_object = Obj(); var_71_object = Obj(); var_72_object = Obj(); var_73_object = Obj();
	GetMainOutdoorScene(var_72_object);
	var_75_int = var_69_string + ".bin";
	AddBlankActor(var_73_object, var_72_object, var_69_string, var_75_int);
	var_73_object = var_68_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3553(var_304_bool, var_305_object)
{
	var_306_bool = 0; var_307_object = Obj();
	var_305_object = var_307_object;
	func_3760(var_307_object);
	if(var_306_bool != 0) {
		var_304_bool = 1;
		return 0;
	}
	var_304_bool = 0;
	return 0;
}


func_3298()
{
	SetVariable("d6q03", (int)1);
	func_3955();
	func_4003();
	var_68_object = Obj(); var_69_string = "";
	func_3038(var_68_object, "quest_d6_03");
	var_76_bool = 0; var_77_string = ""; var_78_string = "";
	func_3062(var_76_bool, "quest_d6_03", "place_albinos");
	return 0;
}


func_1508(var_2_object, var_109_string)
{
	var_110_bool = 0;
	func_3115(var_110_bool);
	var_111_bool = var_110_bool == 0; //@nz
	if(var_111_bool != 0) {
		return 0;
	}
	var_112_bool = var_109_string == var_2_object;
	if(var_112_bool != 0) {
		return 0;
	}
	var_113_string = "";
	var_109_string = var_113_string;
	func_2998(var_113_string);
	var_2_object = var_109_string;
	return 0;
}


func_3049(var_38_object, var_39_object, var_40_int)
{
	var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0;
	@@var_39_object:GetItemID(var_44_int);
	GetInvItemProperty(var_45_int, var_44_int, "Category");
	@@var_38_object:AddItem(var_46_bool, var_39_object, var_45_int, var_40_int);
	var_48_bool = var_46_bool == 0; //@nz
	if(var_48_bool != 0) {
		@@var_38_object:DropItems(var_39_object, var_40_int);
	}
	return 6;
}


func_3563(var_155_bool)
{
	var_157_int = 0; var_158_string = "";
	func_3033(var_157_int, "ood6Spi4ka1");
	var_162_bool = var_157_int == (int)0;
	if(var_162_bool != 0) {
		var_155_bool = 1;
		return 0;
	}
	var_155_bool = 0;
	return 0;
}


func_3823(var_152_bool, var_153_int)
{
	var_154_object = Obj(); var_155_object = Obj(); var_156_object = Obj(); var_157_object = Obj();
	func_3781(Obj());
	var_158_object = var_156_object;
	@@var_156_object:Find(var_153_int, var_157_object);
	var_159_bool = var_157_object == 0; //@nz
	if(var_159_bool != 0) {
		var_152_bool = 0;
		return 4;
	}
	@@var_157_object:Remove();
	var_152_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3062(var_76_bool, var_77_string, var_78_string)
{
	var_79_object = Obj(); var_80_object = Obj();
	FindActor(var_80_object, var_77_string);
	var_81_bool = var_80_object == 0; //@ne
	if(var_81_bool != 0) {
		var_76_bool = 0;
		return 2;
	}
	Trigger(var_80_object, var_78_string);
	var_76_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3319()
{
	SetVariable("ood6Spi4ka2", (int)1);
	return 0;
}


func_3325()
{
	func_3971();
	var_107_bool = 0; var_108_string = ""; var_109_string = "";
	func_3062(var_107_bool, "quest_d6_03", "completed");
	return 0;
}


