// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,Trigger/2,GetGameTime/1,HasAnimation/3,CreateInvItem/1,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Serious|W:Fear|W:Secret|W:Azart|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|W:ui/NPC_Spi4ka.png|W:ui/NPC_Spi4ka_b.png|W:lockpick1time is given|W:lockpick|A:SetItemName|W:uses|W:money 2000 removed|W:ood4Spi4ka1|W:ood4Spi4ka3|W:ood2Spi4ka4|W:ood2Spi4ka1|W:ood2Spi4ka2|W:d2q01|W:playsound|W:givemoney|W:ood6Spi4ka1|W:d6q03|W:quest_d6_03|W:place_albinos|W:ood6Spi4ka2|W:completed|W:failed|W:ood6Spi4ka3|W:ood6Spi4ka4|W:ood2Spi4ka3|W:KnowSpi4ka|W:d6q03AlbinosKilled|W:d6q01|W:d4q03|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:mt_spi4ka
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0xbe1
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1fa vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x548 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x825 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab9 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbb7 vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0xc2d vars=int
// @EVENT_6: op=0xc53 vars=
// @EVENT_5: op=0xc62 vars=
// @EVENT_45: op=0xc6f vars=bool
// @EVENT_0: op=0xc7b vars=object
// @PE: 0x51,0x95,0xab,0x175,0x1e4,0x1fa,0x4db,0x532,0x548,0x759,0x80f,0x825,0xa64,0xaa3,0xab9,0xb67,0xba1,0xbb7,0xc2d,0xc53,0xc6f,0xe90,0xecd,0xed7,0xedd,0xee3,0xee9,0xeef,0xef5,0xefe,0xf04,0xf0a,0xf1f,0xf25,0xf2f,0xf39,0xf3f,0xf45,0xf4b,0xf51,0xf5b,0xf67,0xf73,0xf7f,0xf8b,0xf97,0xfa3,0xfad,0xfb7,0xfc3,0xfcf,0xfdb,0xfe7,0xff3,0xfff,0x100b,0x1017,0x1023,0x102f,0x1046,0x105b

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3610();
		var_36_bool = var_31_bool == (int)413;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3915();
			var_41_string = "";
			func_149(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500357, (int)417, (int)414);
			@@@var_0_object:AddReply((int)500358, (int)418, (int)415);
			@@@var_0_object:AddReply((int)500359, (int)-1, (int)416);
			return 0;
		}
		var_69_bool = var_31_bool == (int)418;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_149(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500361);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500362, (int)417, (int)419);
			@@@var_0_object:AddReply((int)500363, (int)-1, (int)420);
			return 0;
		}
		var_79_bool = var_31_bool == (int)417;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_149(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500364, (int)425, (int)423);
			@@@var_0_object:AddReply((int)500365, (int)425, (int)424);
			return 0;
		}
		var_89_bool = var_31_bool == (int)425;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_149(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500367, (int)-1, (int)426);
			@@@var_0_object:AddReply((int)500368, (int)-1, (int)427);
			return 0;
		}
		var_3_string = true;
		var_98_bool = 0;
		func_3766(var_98_bool);
		if(var_98_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xac";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3610();
		var_36_bool = var_32_cvector == (int)7358;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3817();
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_3829();
		}
		var_69_bool = var_32_cvector == (int)7363;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_3817();
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_3829();
		}
		var_75_bool = var_32_cvector == (int)7382;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_3817();
		}
		var_79_bool = var_32_cvector == (int)7394;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_3823();
		}
		var_85_bool = var_32_cvector == (int)7395;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_3823();
		}
		var_89_bool = var_32_cvector == (int)7396;
		if(var_89_bool != 0) {
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_3823();
		}
		var_93_bool = var_32_cvector == (int)7397;
		if(var_93_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_3823();
		}
		var_97_bool = var_32_cvector == (int)7398;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_3823();
		}
		var_101_bool = var_32_cvector == (int)7399;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_3823();
		}
		var_105_bool = var_32_cvector == (int)15755;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_3909();
		}
		var_111_bool = var_32_cvector == (int)34242;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_3811();
		}
		var_117_bool = var_31_bool == (int)7402;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_484(var_32_cvector, "Serious");
			@@@var_0_object:SetMessage((int)506715);
			@@@var_0_object:ClearReplies();
			var_136_bool = 0;
			var_136_bool = 0;
			var_137_bool = 0; var_138_object = Obj();
			var_138_object = var_1_object;
			func_3967(var_138_object);
			if(var_137_bool != 0) {
				var_145_bool = 0; var_146_object = Obj();
				var_146_object = var_1_object;
				func_3991(var_146_object);
				if(var_145_bool != 0) {
					var_136_bool = 1;
				}
			}
			if(var_136_bool != 0) {
				@@@var_0_object:AddReply((int)507429, (int)7355, (int)8200);
			}
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_3979(var_155_object);
			if(var_154_bool != 0) {
				@@@var_0_object:AddReply((int)506716, (int)7385, (int)7403);
			}
			var_163_bool = 0;
			var_163_bool = 0;
			var_164_bool = 0; var_165_object = Obj();
			var_165_object = var_1_object;
			func_4119(var_165_object);
			if(var_164_bool != 0) {
				var_170_bool = 0; var_171_object = Obj();
				var_171_object = var_1_object;
				func_4131(var_171_object);
				if(var_170_bool != 0) {
					var_163_bool = 1;
				}
			}
			if(var_163_bool != 0) {
				@@@var_0_object:AddReply((int)514516, (int)15756, (int)15755);
			}
			var_179_bool = 0; var_180_object = Obj();
			var_180_object = var_1_object;
			func_3955(var_180_object);
			if(var_179_bool != 0) {
				@@@var_0_object:AddReply((int)532774, (int)10460, (int)34242);
			}
			@@@var_0_object:AddReply((int)507534, (int)-1, (int)8316);
			return 0;
		}
		var_192_bool = var_31_bool == (int)10460;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_484(var_32_cvector, "Serious");
			@@@var_0_object:SetMessage((int)509517);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509518, (int)10462, (int)10461);
			return 0;
		}
		var_199_bool = var_31_bool == (int)10462;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_484(var_32_cvector, "Serious");
			@@@var_0_object:SetMessage((int)509519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509520, (int)10464, (int)10463);
			@@@var_0_object:AddReply((int)509530, (int)10466, (int)10474);
			return 0;
		}
		var_209_bool = var_31_bool == (int)10464;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_484(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509522, (int)10466, (int)10465);
			@@@var_0_object:AddReply((int)509529, (int)10466, (int)10472);
			return 0;
		}
		var_219_bool = var_31_bool == (int)10466;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_484(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)509523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509524, (int)10468, (int)10467);
			@@@var_0_object:AddReply((int)509528, (int)-1, (int)10471);
			return 0;
		}
		var_229_bool = var_31_bool == (int)10468;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_484(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)509525);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509526, (int)-1, (int)10469);
			@@@var_0_object:AddReply((int)509527, (int)-1, (int)10470);
			return 0;
		}
		var_239_bool = var_31_bool == (int)15756;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_484(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514517);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514518, (int)-1, (int)15757);
			return 0;
		}
		var_246_bool = var_31_bool == (int)7385;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_484(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)506699);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506700, (int)7387, (int)7386);
			@@@var_0_object:AddReply((int)506714, (int)7387, (int)7400);
			@@@var_0_object:AddReply((int)506713, (int)-1, (int)7399);
			return 0;
		}
		var_259_bool = var_31_bool == (int)7387;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_484(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)506701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506702, (int)7389, (int)7388);
			@@@var_0_object:AddReply((int)506712, (int)-1, (int)7398);
			return 0;
		}
		var_269_bool = var_31_bool == (int)7389;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_484(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)506703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506704, (int)7391, (int)7390);
			@@@var_0_object:AddReply((int)506711, (int)-1, (int)7397);
			return 0;
		}
		var_279_bool = var_31_bool == (int)7391;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_484(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)506705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506706, (int)7393, (int)7392);
			@@@var_0_object:AddReply((int)506710, (int)-1, (int)7396);
			return 0;
		}
		var_289_bool = var_31_bool == (int)7393;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_484(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)506707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506708, (int)-1, (int)7394);
			@@@var_0_object:AddReply((int)506709, (int)-1, (int)7395);
			return 0;
		}
		var_299_bool = var_31_bool == (int)7355;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_484(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)506674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506675, (int)7357, (int)7356);
			@@@var_0_object:AddReply((int)506689, (int)7373, (int)7372);
			return 0;
		}
		var_309_bool = var_31_bool == (int)7373;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_484(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)506690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506691, (int)7357, (int)7374);
			@@@var_0_object:AddReply((int)506692, (int)7377, (int)7376);
			return 0;
		}
		var_319_bool = var_31_bool == (int)7377;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_484(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)506693);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506694, (int)7362, (int)7378);
			@@@var_0_object:AddReply((int)506695, (int)7381, (int)7380);
			return 0;
		}
		var_329_bool = var_31_bool == (int)7381;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_484(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)506696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506697, (int)-1, (int)7382);
			@@@var_0_object:AddReply((int)506698, (int)7362, (int)7383);
			return 0;
		}
		var_339_bool = var_31_bool == (int)7357;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_484(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)506676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533950, (int)35515, (int)35514);
			return 0;
		}
		var_346_bool = var_31_bool == (int)35515;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_484(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)533951);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506677, (int)-1, (int)7358);
			@@@var_0_object:AddReply((int)506678, (int)7360, (int)7359);
			return 0;
		}
		var_356_bool = var_31_bool == (int)7360;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_484(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)506679);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506680, (int)7362, (int)7361);
			@@@var_0_object:AddReply((int)506683, (int)7365, (int)7364);
			@@@var_0_object:AddReply((int)506686, (int)7369, (int)7368);
			return 0;
		}
		var_369_bool = var_31_bool == (int)7369;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_484(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)506687);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506688, (int)7362, (int)7370);
			return 0;
		}
		var_376_bool = var_31_bool == (int)7365;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_484(var_32_cvector, "Serious");
			@@@var_0_object:SetMessage((int)506684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506685, (int)7362, (int)7366);
			return 0;
		}
		var_383_bool = var_31_bool == (int)7362;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_484(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)506681);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506682, (int)-1, (int)7363);
			return 0;
		}
		var_3_string = true;
		var_389_bool = 0;
		func_3766(var_389_bool);
		if(var_389_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1fb";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3610();
		var_36_bool = var_32_cvector == (int)12035;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3799();
		}
		var_42_bool = var_32_cvector == (int)12045;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_3789(var_44_object);
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_3768(var_65_object);
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_3838();
		}
		var_90_bool = var_32_cvector == (int)12050;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_3789(var_92_object);
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_3768(var_94_object);
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_3838();
		}
		var_98_bool = var_32_cvector == (int)35871;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_3805();
		}
		var_104_bool = var_31_bool == (int)12034;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_1330(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510886);
			@@@var_0_object:ClearReplies();
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_3931(var_124_object);
			if(var_123_bool != 0) {
				@@@var_0_object:AddReply((int)510887, (int)11068, (int)12035);
			}
			@@@var_0_object:AddReply((int)510888, (int)12037, (int)12036);
			var_137_bool = 0;
			var_137_bool = 0;
			var_138_bool = 0; var_139_object = Obj();
			var_139_object = var_1_object;
			func_4143(var_139_object);
			if(var_138_bool != 0) {
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_object;
				func_3943(var_145_object);
				if(var_144_bool != 0) {
					var_137_bool = 1;
				}
			}
			if(var_137_bool != 0) {
				@@@var_0_object:AddReply((int)534279, (int)35872, (int)35871);
			}
			@@@var_0_object:AddReply((int)534267, (int)-1, (int)35855);
			return 0;
		}
		var_157_bool = var_31_bool == (int)35872;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_1330(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534280);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534281, (int)35874, (int)35873);
			return 0;
		}
		var_164_bool = var_31_bool == (int)35874;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_1330(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)534282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534283, (int)35876, (int)35875);
			return 0;
		}
		var_171_bool = var_31_bool == (int)35876;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_1330(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)534284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534285, (int)35878, (int)35877);
			return 0;
		}
		var_178_bool = var_31_bool == (int)35878;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_1330(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)534286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534287, (int)-1, (int)35879);
			return 0;
		}
		var_185_bool = var_31_bool == (int)12037;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_1330(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)510889);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510890, (int)12039, (int)12038);
			@@@var_0_object:AddReply((int)510892, (int)12042, (int)12040);
			return 0;
		}
		var_195_bool = var_31_bool == (int)12042;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_1330(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510895, (int)-1, (int)12043);
			return 0;
		}
		var_202_bool = var_31_bool == (int)12039;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_1330(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)510891);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510893, (int)12044, (int)12041);
			return 0;
		}
		var_209_bool = var_31_bool == (int)12044;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_1330(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510896);
			@@@var_0_object:ClearReplies();
			var_212_bool = 0; var_213_object = Obj();
			var_213_object = var_1_object;
			func_3921(var_212_bool, var_213_object);
			if(var_212_bool != 0) {
				@@@var_0_object:AddReply((int)510897, (int)-1, (int)12045);
			}
			@@@var_0_object:AddReply((int)510898, (int)12047, (int)12046);
			return 0;
		}
		var_228_bool = var_31_bool == (int)12047;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_1330(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510900, (int)-1, (int)12048);
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_3921(var_234_bool, var_235_object);
			if(var_234_bool != 0) {
				@@@var_0_object:AddReply((int)510902, (int)-1, (int)12050);
			}
			return 0;
		}
		var_240_bool = var_31_bool == (int)11068;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_1330(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)510044);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510045, (int)11070, (int)11069);
			@@@var_0_object:AddReply((int)510058, (int)11083, (int)11082);
			return 0;
		}
		var_250_bool = var_31_bool == (int)11083;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_1330(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510059);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510060, (int)11072, (int)11084);
			@@@var_0_object:AddReply((int)510061, (int)11072, (int)11086);
			return 0;
		}
		var_260_bool = var_31_bool == (int)11070;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_1330(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)510046);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510047, (int)11072, (int)11071);
			@@@var_0_object:AddReply((int)510057, (int)-1, (int)11081);
			return 0;
		}
		var_270_bool = var_31_bool == (int)11072;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_1330(var_32_cvector, "Secret");
			@@@var_0_object:SetMessage((int)510048);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510049, (int)11074, (int)11073);
			@@@var_0_object:AddReply((int)510052, (int)11077, (int)11076);
			@@@var_0_object:AddReply((int)510056, (int)-1, (int)11080);
			return 0;
		}
		var_283_bool = var_31_bool == (int)11077;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_1330(var_32_cvector, "Serious");
			@@@var_0_object:SetMessage((int)510053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510054, (int)-1, (int)11078);
			@@@var_0_object:AddReply((int)510055, (int)-1, (int)11079);
			return 0;
		}
		var_293_bool = var_31_bool == (int)11074;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_1330(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510050);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510051, (int)-1, (int)11075);
			return 0;
		}
		var_3_string = true;
		var_299_bool = 0;
		func_3766(var_299_bool);
		if(var_299_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x549";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3610();
		var_36_bool = var_32_cvector == (int)13271;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3844();
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_3850();
		}
		var_91_bool = var_32_cvector == (int)13288;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_3844();
		}
		var_95_bool = var_32_cvector == (int)13290;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_3850();
		}
		var_99_bool = var_32_cvector == (int)13714;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_3871();
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_3877();
		}
		var_118_bool = var_32_cvector == (int)13715;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_3897();
		}
		var_124_bool = var_32_cvector == (int)13717;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_3887();
		}
		var_139_bool = var_32_cvector == (int)37900;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_3887();
		}
		var_143_bool = var_32_cvector == (int)13273;
		if(var_143_bool != 0) {
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_3903();
		}
		var_149_bool = var_31_bool == (int)13258;
		if(var_149_bool != 0) {
			var_150_bool = 0; var_151_object = Obj();
			var_151_object = var_1_object;
			func_4023(var_151_object);
			if(var_150_bool != 0) {
				var_158_string = "";
				func_2063(var_32_cvector, "Azart");
				@@@var_0_object:SetMessage((int)512040);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512041, (int)13262, (int)13259);
				@@@var_0_object:AddReply((int)512042, (int)13261, (int)13260);
				return 0;
			}
			var_182_string = "";
			func_2063(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512052);
			@@@var_0_object:ClearReplies();
			var_184_bool = 0;
			var_184_bool = 1;
			var_185_bool = 0;
			var_185_bool = 0;
			var_186_bool = 0; var_187_object = Obj();
			var_187_object = var_1_object;
			func_4003(var_186_bool, var_187_object);
			if(var_186_bool != 0) {
				var_201_bool = 0; var_202_object = Obj();
				var_202_object = var_1_object;
				func_4035(var_202_object);
				if(var_201_bool != 0) {
					var_185_bool = 1;
				}
			}
			if(var_185_bool != 1) {
				var_207_bool = 0;
				var_207_bool = 0;
				var_208_bool = 0; var_209_object = Obj();
				var_209_object = var_1_object;
				func_4013(var_208_bool, var_209_object);
				if(var_208_bool != 0) {
					var_219_bool = 0; var_220_object = Obj();
					var_220_object = var_1_object;
					func_4035(var_220_object);
					if(var_219_bool != 0) {
						var_207_bool = 1;
					}
				}
				if(var_207_bool != 1) {
					var_184_bool = 0;
				}
			}
			if(var_184_bool != 0) {
				@@@var_0_object:AddReply((int)512066, (int)13289, (int)13287);
			}
			var_224_bool = 0;
			var_224_bool = 0;
			var_225_bool = 0; var_226_object = Obj();
			var_226_object = var_1_object;
			func_4059(var_226_object);
			if(var_225_bool != 0) {
				var_231_bool = 0; var_232_object = Obj();
				var_232_object = var_1_object;
				func_4071(var_232_object);
				if(var_231_bool != 0) {
					var_224_bool = 1;
				}
			}
			if(var_224_bool != 0) {
				@@@var_0_object:AddReply((int)512543, (int)13713, (int)13712);
			}
			var_240_bool = 0;
			var_240_bool = 0;
			var_241_bool = 0;
			var_241_bool = 0;
			var_242_bool = 0; var_243_object = Obj();
			var_243_object = var_1_object;
			func_4047(var_243_object);
			if(var_242_bool != 0) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_4083(var_249_object);
				if(var_248_bool != 0) {
					var_241_bool = 1;
				}
			}
			if(var_241_bool != 0) {
				var_254_bool = 0; var_255_object = Obj();
				var_255_object = var_1_object;
				func_4059(var_255_object);
				var_256_bool = var_254_bool == 0; //@nz
				if(var_256_bool != 0) {
					var_240_bool = 1;
				}
			}
			if(var_240_bool != 0) {
				@@@var_0_object:AddReply((int)512546, (int)13716, (int)13715);
			}
			var_260_bool = 0;
			var_260_bool = 0;
			var_261_bool = 0; var_262_object = Obj();
			var_262_object = var_1_object;
			func_4107(var_262_object);
			if(var_261_bool != 0) {
				var_267_bool = 0; var_268_object = Obj();
				var_268_object = var_1_object;
				func_4095(var_268_object);
				if(var_267_bool != 0) {
					var_260_bool = 1;
				}
			}
			if(var_260_bool != 0) {
				@@@var_0_object:AddReply((int)512053, (int)13274, (int)13273);
			}
			@@@var_0_object:AddReply((int)512060, (int)-1, (int)13280);
			return 0;
		}
		var_280_bool = var_31_bool == (int)13274;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_2063(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)512054);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512055, (int)13276, (int)13275);
			return 0;
		}
		var_287_bool = var_31_bool == (int)13276;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_2063(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512057, (int)13278, (int)13277);
			@@@var_0_object:AddReply((int)512061, (int)13282, (int)13281);
			return 0;
		}
		var_297_bool = var_31_bool == (int)13282;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_2063(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)512062);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512063, (int)13284, (int)13283);
			return 0;
		}
		var_304_bool = var_31_bool == (int)13284;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_2063(var_32_cvector, "Serious");
			@@@var_0_object:SetMessage((int)512064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512065, (int)13278, (int)13285);
			return 0;
		}
		var_311_bool = var_31_bool == (int)13278;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_2063(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512059, (int)-1, (int)13279);
			return 0;
		}
		var_318_bool = var_31_bool == (int)13716;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_2063(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)512547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536139, (int)37899, (int)37898);
			return 0;
		}
		var_325_bool = var_31_bool == (int)37899;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_2063(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)536140);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512548, (int)-1, (int)13717);
			@@@var_0_object:AddReply((int)536141, (int)-1, (int)37900);
			return 0;
		}
		var_335_bool = var_31_bool == (int)13713;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_2063(var_32_cvector, "Serious");
			@@@var_0_object:SetMessage((int)512544);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512545, (int)-1, (int)13714);
			return 0;
		}
		var_342_bool = var_31_bool == (int)13289;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_2063(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512069, (int)-1, (int)13290);
			return 0;
		}
		var_349_bool = var_31_bool == (int)13261;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_2063(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512048, (int)13268, (int)13267);
			return 0;
		}
		var_356_bool = var_31_bool == (int)13268;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_2063(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512050, (int)13264, (int)13269);
			return 0;
		}
		var_363_bool = var_31_bool == (int)13262;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_2063(var_32_cvector, "Azart");
			@@@var_0_object:SetMessage((int)512044);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512045, (int)13264, (int)13263);
			@@@var_0_object:AddReply((int)512047, (int)13261, (int)13265);
			return 0;
		}
		var_373_bool = var_31_bool == (int)13264;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_2063(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512046);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512051, (int)-1, (int)13271);
			@@@var_0_object:AddReply((int)512067, (int)-1, (int)13288);
			return 0;
		}
		var_3_string = true;
		var_382_bool = 0;
		func_3766(var_382_bool);
		if(var_382_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x826";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3610();
		var_36_bool = var_31_bool == (int)36960;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2723(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_65_bool = var_31_bool == (int)36962;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_2723(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_75_bool = var_31_bool == (int)36964;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_2723(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_84_bool = 0;
		func_3766(var_84_bool);
		if(var_84_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaba";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_3610();
		var_36_bool = var_31_int == (int)42551;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2977(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_3766(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbb8";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_3113();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_3334(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_3082(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_3062(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_3617(Obj());
				var_77_object = var_76_object;
				func_3484(var_75_bool, var_76_object);
			}
		} else {
			func_3077(var_31_int);
			func_3104();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_3295();
	func_3113();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_3113();
	var_32_string = "";
	func_3564("Neutral");
	func_3104();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_3104();
	} else {
		var_38_string = "";
		func_3564("Neutral");
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
		func_3295();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_3325(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_4331(var_49_object);
		var_757_string = "";
		func_3564("Neutral");
		func_3113();
		func_3104();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_3048(var_30_cvector);
	return 0;
}


func_0(var_0_object, var_54_int, var_55_object)
{
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0;
	var_0_object = var_55_object;
	var_65_bool = 0; var_66_object = Obj(); var_67_float = 0;
	var_55_object = var_66_object;
	func_3339(var_65_bool, var_66_object, (float)70.0);
	var_112_bool = var_65_bool == 0; //@nz
	if(var_112_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	CreateDialog(var_61_object);
	var_113_int = 0;
	func_3760(var_113_int);
	@@var_61_object:SetNPCName(var_113_int);
	var_114_int = 0;
	func_3758(var_114_int);
	@@var_61_object:SetNPCDescription(var_114_int);
	var_115_string = "";
	func_3762(var_115_string);
	@@var_61_object:SetPhoto(var_115_string);
	var_116_string = "";
	func_3764(var_116_string);
	@@var_61_object:SetPhoto2(var_116_string);
	var_117_int = 0;
	func_4314(var_117_int);
	@@var_61_object:SetPlayerName(var_117_int);
	IsOverrideActive(var_62_bool);
	var_125_bool = var_62_bool;
	if(var_125_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	DoDialog(var_61_object);
	var_126_bool = 0; var_127_object = Obj();
	func_3617(Obj());
	var_128_object = var_127_object;
	func_3426(var_126_bool, var_127_object);
	var_221_object = Obj(); var_222_object = Obj();
	var_55_object = var_221_object;
	var_61_object = var_222_object;
	TaskCall(1);
	func_81(var_223_object, var_224_object, var_225_string, var_226_bool, var_221_object, var_222_object);
	TaskReturn();
	@@var_61_object:IsDialogEnd(var_64_bool);
	
Label_63:
	var_277_bool = var_64_bool == 0; //@nz
	if(var_277_bool != 0) {
		sync();
		@@var_61_object:IsDialogEnd(var_64_bool);
		goto Label_63;
	}
	var_55_object = Obj();
	func_3408();
	StopDialog(var_61_object);
	@@var_61_object:GetReturnValue((int)-1);
	var_63_int = var_54_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3844()
{
	SetVariable("ood6Spi4ka1", (int)1);
	return 0;
}


func_3077(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_3334(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


func_1800(var_0_object, var_481_int, var_482_object)
{
	var_484_object = Obj(); var_485_bool = 0; var_486_int = 0; var_487_bool = 0; var_488_object = Obj(); var_489_bool = 0; var_490_int = 0; var_491_bool = 0;
	var_0_object = var_482_object;
	var_492_bool = 0; var_493_object = Obj(); var_494_float = 0;
	var_482_object = var_493_object;
	func_3339(var_492_bool, var_493_object, (float)70.0);
	var_495_bool = var_492_bool == 0; //@nz
	if(var_495_bool != 0) {
		var_481_int = -2;
		return 8;
	}
	CreateDialog(var_488_object);
	var_496_int = 0;
	func_3760(var_496_int);
	@@var_488_object:SetNPCName(var_496_int);
	var_497_int = 0;
	func_3758(var_497_int);
	@@var_488_object:SetNPCDescription(var_497_int);
	var_498_string = "";
	func_3762(var_498_string);
	@@var_488_object:SetPhoto(var_498_string);
	var_499_string = "";
	func_3764(var_499_string);
	@@var_488_object:SetPhoto2(var_499_string);
	var_500_int = 0;
	func_4314(var_500_int);
	@@var_488_object:SetPlayerName(var_500_int);
	IsOverrideActive(var_489_bool);
	var_501_bool = var_489_bool;
	if(var_501_bool != 0) {
		var_481_int = -2;
		return 8;
	}
	DoDialog(var_488_object);
	var_502_bool = 0; var_503_object = Obj();
	func_3617(Obj());
	var_504_object = var_503_object;
	func_3426(var_502_bool, var_503_object);
	var_505_object = Obj(); var_506_object = Obj();
	var_482_object = var_505_object;
	var_488_object = var_506_object;
	TaskCall(7);
	func_1881(var_507_object, var_508_object, var_509_string, var_510_bool, var_505_object, var_506_object);
	TaskReturn();
	@@var_488_object:IsDialogEnd(var_491_bool);
	
Label_1863:
	var_638_bool = var_491_bool == 0; //@nz
	if(var_638_bool != 0) {
		sync();
		@@var_488_object:IsDialogEnd(var_491_bool);
		goto Label_1863;
	}
	var_482_object = Obj();
	func_3408();
	StopDialog(var_488_object);
	@@var_488_object:GetReturnValue((int)-1);
	var_490_int = var_481_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3082(var_39_bool)
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
	func_3300(var_46_float, var_47_object);
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


func_4107(var_620_bool)
{
	var_622_int = 0; var_623_string = "";
	func_3633(var_622_int, "ood6Spi4ka4");
	var_625_bool = var_622_int == (int)0;
	if(var_625_bool != 0) {
		var_620_bool = 1;
		return 0;
	}
	var_620_bool = 0;
	return 0;
}


func_3595(var_160_bool, var_161_string)
{
	var_162_bool = 0; var_163_bool = 0;
	var_164_bool = 0;
	func_3766(var_164_bool);
	if(var_164_bool != 0) {
		lshHasSpeech(var_163_bool, var_161_string);
		var_165_bool = var_163_bool;
		if(var_165_bool != 0) {
			lshPlaySpeech(var_161_string);
			var_160_bool = 1;
			return 2;
		}
	}
	var_160_bool = 0;
	return 2;
}


func_3850()
{
	SetVariable("d6q03", (int)1);
	func_4221();
	func_4260();
	var_76_object = Obj(); var_77_string = "";
	func_3638(var_76_object, "quest_d6_03");
	var_84_bool = 0; var_85_string = ""; var_86_string = "";
	func_3699(var_84_bool, "quest_d6_03", "place_albinos");
	return 0;
}


func_3339(var_65_bool, var_66_object, var_67_float)
{
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0;
	@@var_66_object:GetPosition(var_78_cvector);
	@@var_66_object:GetEyesHeight(var_77_float);
	var_86_float = GetByIndex(var_78_cvector, 1);
	var_86_float = var_86_float + var_77_float;
	SetByIndex(var_78_cvector, 1) = var_86_float;
	GetPosition(var_79_cvector);
	GetEyesHeight(var_77_float);
	var_87_float = GetByIndex(var_79_cvector, 1);
	var_87_float = var_87_float + var_77_float;
	SetByIndex(var_79_cvector, 1) = var_87_float;
	var_80_cvector = var_78_cvector - var_79_cvector;
	var_88_float = GetByIndex(var_80_cvector, 1);
	SetByIndex(var_80_cvector, 1) = (float)0;
	var_89_int = var_80_cvector | var_80_cvector;
	var_90_float = sqrt(var_89_int);
	var_80_cvector = var_80_cvector / var_90_float;
	var_81_cvector = -var_80_cvector;
	var_91_float = var_80_cvector * var_67_float;
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0);
	var_93_cvector = var_81_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3623(var_92_cvector, var_93_cvector);
	var_101_float = var_92_cvector * (int)25;
	var_102_int = var_91_float + var_101_float;
	var_82_cvector = var_102_int - CVector(0.0, 10.0, 0.0);
	var_83_cvector = var_79_cvector + var_82_cvector;
	IsOverrideActive(var_84_bool);
	var_104_bool = var_84_bool;
	if(var_104_bool != 0) {
		var_65_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_83_cvector, var_81_cvector, (bool)1);
	var_106_float = GetByIndex(var_82_cvector, 0);
	var_107_float = GetByIndex(var_82_cvector, 2);
	Rotate(var_106_float, var_107_float);
	var_108_bool = 0;
	func_3766(var_108_bool);
	if(var_108_bool != 0) {
	} else {
		HasAnimationTrack(var_85_bool, "head");
		var_110_bool = var_85_bool;
		if(var_110_bool == 0) goto Label_3402;
		LookAsyncCamera("head");
	}
Label_3402:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_65_bool = 1;
	return 18;
	
}


func_2063(var_2_object, var_518_string)
{
	var_519_bool = 0;
	func_3766(var_519_bool);
	var_520_bool = var_519_bool == 0; //@nz
	if(var_520_bool != 0) {
		return 0;
	}
	var_521_bool = var_518_string == var_2_object;
	if(var_521_bool != 0) {
		return 0;
	}
	var_522_string = ""; var_523_bool = 0;
	var_518_string = var_522_string;
	var_525_bool = var_518_string == "";
	if(var_525_bool != 0) {
		var_523_bool = 0;
	} else {
		var_523_bool = 1;
	}
	func_3580(var_522_string, var_523_bool);
	var_2_object = var_518_string;
	return 0;
	
}


func_2579(var_0_object, var_642_int, var_643_object)
{
	var_645_object = Obj(); var_646_bool = 0; var_647_int = 0; var_648_bool = 0; var_649_object = Obj(); var_650_bool = 0; var_651_int = 0; var_652_bool = 0;
	var_0_object = var_643_object;
	var_653_bool = 0; var_654_object = Obj(); var_655_float = 0;
	var_643_object = var_654_object;
	func_3339(var_653_bool, var_654_object, (float)70.0);
	var_656_bool = var_653_bool == 0; //@nz
	if(var_656_bool != 0) {
		var_642_int = -2;
		return 8;
	}
	CreateDialog(var_649_object);
	var_657_int = 0;
	func_3760(var_657_int);
	@@var_649_object:SetNPCName(var_657_int);
	var_658_int = 0;
	func_3758(var_658_int);
	@@var_649_object:SetNPCDescription(var_658_int);
	var_659_string = "";
	func_3762(var_659_string);
	@@var_649_object:SetPhoto(var_659_string);
	var_660_string = "";
	func_3764(var_660_string);
	@@var_649_object:SetPhoto2(var_660_string);
	var_661_int = 0;
	func_4314(var_661_int);
	@@var_649_object:SetPlayerName(var_661_int);
	IsOverrideActive(var_650_bool);
	var_662_bool = var_650_bool;
	if(var_662_bool != 0) {
		var_642_int = -2;
		return 8;
	}
	DoDialog(var_649_object);
	var_663_bool = 0; var_664_object = Obj();
	func_3617(Obj());
	var_665_object = var_664_object;
	func_3426(var_663_bool, var_664_object);
	var_666_object = Obj(); var_667_object = Obj();
	var_643_object = var_666_object;
	var_649_object = var_667_object;
	TaskCall(9);
	func_2660(var_668_object, var_669_object, var_670_string, var_671_bool, var_666_object, var_667_object);
	TaskReturn();
	@@var_649_object:IsDialogEnd(var_652_bool);
	
Label_2642:
	var_699_bool = var_652_bool == 0; //@nz
	if(var_699_bool != 0) {
		sync();
		@@var_649_object:IsDialogEnd(var_652_bool);
		goto Label_2642;
	}
	var_643_object = Obj();
	func_3408();
	StopDialog(var_649_object);
	@@var_649_object:GetReturnValue((int)-1);
	var_651_int = var_642_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2838(var_0_object, var_701_int, var_702_object)
{
	var_704_object = Obj(); var_705_bool = 0; var_706_int = 0; var_707_bool = 0; var_708_object = Obj(); var_709_bool = 0; var_710_int = 0; var_711_bool = 0;
	var_0_object = var_702_object;
	var_712_bool = 0; var_713_object = Obj(); var_714_float = 0;
	var_702_object = var_713_object;
	func_3339(var_712_bool, var_713_object, (float)70.0);
	var_715_bool = var_712_bool == 0; //@nz
	if(var_715_bool != 0) {
		var_701_int = -2;
		return 8;
	}
	CreateDialog(var_708_object);
	var_716_int = 0;
	func_3760(var_716_int);
	@@var_708_object:SetNPCName(var_716_int);
	var_717_int = 0;
	func_3758(var_717_int);
	@@var_708_object:SetNPCDescription(var_717_int);
	var_718_string = "";
	func_3762(var_718_string);
	@@var_708_object:SetPhoto(var_718_string);
	var_719_string = "";
	func_3764(var_719_string);
	@@var_708_object:SetPhoto2(var_719_string);
	var_720_int = 0;
	func_4314(var_720_int);
	@@var_708_object:SetPlayerName(var_720_int);
	IsOverrideActive(var_709_bool);
	var_721_bool = var_709_bool;
	if(var_721_bool != 0) {
		var_701_int = -2;
		return 8;
	}
	DoDialog(var_708_object);
	var_722_bool = 0; var_723_object = Obj();
	func_3617(Obj());
	var_724_object = var_723_object;
	func_3426(var_722_bool, var_723_object);
	var_725_object = Obj(); var_726_object = Obj();
	var_702_object = var_725_object;
	var_708_object = var_726_object;
	TaskCall(11);
	func_2919(var_727_object, var_728_object, var_729_string, var_730_bool, var_725_object, var_726_object);
	TaskReturn();
	@@var_708_object:IsDialogEnd(var_711_bool);
	
Label_2901:
	var_755_bool = var_711_bool == 0; //@nz
	if(var_755_bool != 0) {
		sync();
		@@var_708_object:IsDialogEnd(var_711_bool);
		goto Label_2901;
	}
	var_702_object = Obj();
	func_3408();
	StopDialog(var_708_object);
	@@var_708_object:GetReturnValue((int)-1);
	var_710_int = var_701_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4119(var_359_bool)
{
	var_361_int = 0; var_362_string = "";
	func_3633(var_361_int, "d2q01");
	var_364_bool = var_361_int >= (int)5;
	if(var_364_bool != 0) {
		var_359_bool = 1;
		return 0;
	}
	var_359_bool = 0;
	return 0;
}


func_3610()
{
	var_34_bool = 0;
	func_3766(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3871()
{
	SetVariable("ood6Spi4ka2", (int)1);
	return 0;
}


func_3104()
{
	var_759_float = 0; var_760_float = 0;
	rand(var_760_float, (int)8, (int)16);
	SetTimer((int)10, var_760_float);
	return 2;
}


func_3617(var_128_object)
{
	var_129_object = Obj(); var_130_object = Obj();
	self(var_130_object);
	var_130_object = var_128_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4131(var_365_bool)
{
	var_367_int = 0; var_368_string = "";
	func_3633(var_367_int, "ood2Spi4ka3");
	var_370_bool = var_367_int == (int)0;
	if(var_370_bool != 0) {
		var_365_bool = 1;
		return 0;
	}
	var_365_bool = 0;
	return 0;
}


func_292(var_0_object, var_291_int, var_292_object)
{
	var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0; var_298_object = Obj(); var_299_bool = 0; var_300_int = 0; var_301_bool = 0;
	var_0_object = var_292_object;
	var_302_bool = 0; var_303_object = Obj(); var_304_float = 0;
	var_292_object = var_303_object;
	func_3339(var_302_bool, var_303_object, (float)70.0);
	var_305_bool = var_302_bool == 0; //@nz
	if(var_305_bool != 0) {
		var_291_int = -2;
		return 8;
	}
	CreateDialog(var_298_object);
	var_306_int = 0;
	func_3760(var_306_int);
	@@var_298_object:SetNPCName(var_306_int);
	var_307_int = 0;
	func_3758(var_307_int);
	@@var_298_object:SetNPCDescription(var_307_int);
	var_308_string = "";
	func_3762(var_308_string);
	@@var_298_object:SetPhoto(var_308_string);
	var_309_string = "";
	func_3764(var_309_string);
	@@var_298_object:SetPhoto2(var_309_string);
	var_310_int = 0;
	func_4314(var_310_int);
	@@var_298_object:SetPlayerName(var_310_int);
	IsOverrideActive(var_299_bool);
	var_311_bool = var_299_bool;
	if(var_311_bool != 0) {
		var_291_int = -2;
		return 8;
	}
	DoDialog(var_298_object);
	var_312_bool = 0; var_313_object = Obj();
	func_3617(Obj());
	var_314_object = var_313_object;
	func_3426(var_312_bool, var_313_object);
	var_315_object = Obj(); var_316_object = Obj();
	var_292_object = var_315_object;
	var_298_object = var_316_object;
	TaskCall(3);
	func_373(var_317_object, var_318_object, var_319_string, var_320_bool, var_315_object, var_316_object);
	TaskReturn();
	@@var_298_object:IsDialogEnd(var_301_bool);
	
Label_355:
	var_394_bool = var_301_bool == 0; //@nz
	if(var_394_bool != 0) {
		sync();
		@@var_298_object:IsDialogEnd(var_301_bool);
		goto Label_355;
	}
	var_292_object = Obj();
	func_3408();
	StopDialog(var_298_object);
	@@var_298_object:GetReturnValue((int)-1);
	var_300_int = var_291_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3877()
{
	func_4234();
	var_114_bool = 0; var_115_string = ""; var_116_string = "";
	func_3699(var_114_bool, "quest_d6_03", "completed");
	return 0;
}


func_3623(var_92_cvector, var_93_cvector)
{
	var_95_float = 0; var_96_float = 0;
	var_97_int = var_93_cvector | var_93_cvector;
	var_96_float = sqrt(var_97_int);
	var_98_float = 9.999999974752427e-07;
	var_99_bool = var_96_float < var_98_float;
	if(var_99_bool != 0) {
		var_92_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_92_cvector = var_93_cvector / var_96_float;
	return 2;
}


func_3113()
{
	KillTimer((int)10);
	return 0;
}


func_4143(var_451_bool)
{
	var_453_int = 0; var_454_string = "";
	func_3633(var_453_int, "d4q03");
	var_456_bool = var_453_int == (int)3;
	if(var_456_bool != 0) {
		var_451_bool = 1;
		return 0;
	}
	var_451_bool = 0;
	return 0;
}


func_3887()
{
	func_4247();
	var_135_bool = 0; var_136_string = ""; var_137_string = "";
	func_3699(var_135_bool, "quest_d6_03", "failed");
	return 0;
}


func_3633(var_334_int, var_335_string)
{
	var_336_int = 0; var_337_int = 0;
	GetVariable(var_335_string, var_337_int);
	var_337_int = var_334_int;
	return 2;
}


func_1330(var_2_object, var_429_string)
{
	var_430_bool = 0;
	func_3766(var_430_bool);
	var_431_bool = var_430_bool == 0; //@nz
	if(var_431_bool != 0) {
		return 0;
	}
	var_432_bool = var_429_string == var_2_object;
	if(var_432_bool != 0) {
		return 0;
	}
	var_433_string = ""; var_434_bool = 0;
	var_429_string = var_433_string;
	var_436_bool = var_429_string == "";
	if(var_436_bool != 0) {
		var_434_bool = 0;
	} else {
		var_434_bool = 1;
	}
	func_3580(var_433_string, var_434_bool);
	var_2_object = var_429_string;
	return 0;
	
}


func_3638(var_76_object, var_77_string)
{
	var_78_object = Obj(); var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj();
	GetMainOutdoorScene(var_80_object);
	var_83_int = var_77_string + ".bin";
	AddBlankActor(var_81_object, var_80_object, var_77_string, var_83_int);
	var_81_object = var_76_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3897()
{
	SetVariable("ood6Spi4ka3", (int)1);
	return 0;
}


func_4155(var_214_bool, var_215_object)
{
	var_216_float = 0; var_217_float = 0;
	@@var_215_object:GetProperty("money", var_217_float);
	var_220_bool = var_217_float >= (int)2000;
	if(var_220_bool != 0) {
		var_214_bool = 1;
		return 2;
	}
	var_214_bool = 0;
	return 2;
}


func_3903()
{
	SetVariable("ood6Spi4ka4", (int)1);
	return 0;
}


func_3649(var_59_int, var_60_int)
{
	var_61_object = Obj(); var_62_object = Obj();
	CreateIntVector(var_62_object);
	@@var_62_object:add(var_59_int);
	@@var_62_object:add(var_60_int);
	SendWorldWndMessage((int)3, var_62_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3909()
{
	SetVariable("ood2Spi4ka3", (int)1);
	return 0;
}


func_4166(var_547_bool)
{
	var_549_bool = 0;
	var_549_bool = 0;
	var_550_int = 0;
	func_3720(var_550_int);
	var_556_bool = var_550_int >= (int)0;
	if(var_556_bool != 0) {
		var_557_int = 0;
		func_3720(var_557_int);
		var_559_bool = var_557_int < (int)6;
		if(var_559_bool != 0) {
			var_549_bool = 1;
		}
	}
	if(var_549_bool != 0) {
		var_547_bool = 1;
		return 0;
	}
	var_547_bool = 0;
	return 0;
}


func_3915()
{
	SetVariable("KnowSpi4ka", (int)1);
	return 0;
}


func_3661(var_46_object, var_47_int)
{
	var_48_int = 0; var_49_int = 0;
	var_50_object = Obj(); var_51_string = ""; var_52_int = 0;
	var_46_object = var_50_object;
	var_47_int = var_52_int;
	func_3308(var_50_object, "money", var_52_int);
	var_57_bool = var_47_int > (int)0;
	if(var_57_bool != 0) {
		GetInvItemByName(var_49_int, "Money");
		var_59_int = 0; var_60_int = 0;
		var_49_int = var_59_int;
		var_47_int = var_60_int;
		func_3649(var_59_int, var_60_int);
	}
	return 2;
}


func_3408()
{
	var_279_bool = 0; var_280_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_282_bool = 0;
	func_3766(var_282_bool);
	if(var_282_bool != 0) {
	} else {
		HasAnimationTrack(var_280_bool, "head");
		var_284_bool = var_280_bool;
		if(var_284_bool == 0) goto Label_3425;
		UnlookAsync("head");
	}
Label_3425:
	return 2;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_221_object, var_222_object)
{
	var_0_object = var_222_object;
	var_1_object = var_221_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_228_object = Obj(); var_229_object = Obj();
		var_228_object = var_1_object;
		var_229_object = var_0_object;
		func_3915();
		var_232_string = "";
		func_149(var_222_object, "Neutral");
		@@@var_0_object:SetMessage((int)500356);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500357, (int)417, (int)414);
		@@@var_0_object:AddReply((int)500358, (int)418, (int)415);
		@@@var_0_object:AddReply((int)500359, (int)-1, (int)416);
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	var_259_bool = 0;
	func_3766(var_259_bool);
	if(var_259_bool != 0) {

	Label_123:
		lshWaitForAnimEnd();
		var_260_string = var_3_string;
		if(var_260_string != 0) {
		} else {
			var_261_string = "";
			var_261_string = var_2_object;
			func_3564(var_261_string);
			goto Label_123;
	}
		PlayAnimation("all", "idle");

	Label_138:
		WaitForAnimEnd();
		var_274_string = var_3_string;
		if(var_274_string != 0) {
			goto Label_148;
		}
		PlayAnimation("all", "idle");
		goto Label_138;
	}
	goto Label_148;
	
Label_148:
	return 0;
	
}


func_3921(var_212_bool, var_213_object)
{
	var_214_bool = 0; var_215_object = Obj();
	var_213_object = var_215_object;
	func_4155(var_214_bool, var_215_object);
	if(var_214_bool != 0) {
		var_212_bool = 1;
		return 0;
	}
	var_212_bool = 0;
	return 0;
}


func_1881(var_0_object, var_1_object, var_2_object, var_3_string, var_505_object, var_506_object)
{
	var_0_object = var_506_object;
	var_1_object = var_505_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_512_bool = 0; var_513_object = Obj();
		var_513_object = var_1_object;
		func_4023(var_513_object);
		if(var_512_bool != 0) {
			var_518_string = "";
			func_2063(var_506_object, "Azart");
			@@@var_0_object:SetMessage((int)512040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512041, (int)13262, (int)13259);
			@@@var_0_object:AddReply((int)512042, (int)13261, (int)13260);
		} else {
				var_541_string = "";
				func_2063(var_506_object, "Neutral");
				@@@var_0_object:SetMessage((int)512052);
				@@@var_0_object:ClearReplies();
				var_543_bool = 0;
				var_543_bool = 1;
				var_544_bool = 0;
				var_544_bool = 0;
				var_545_bool = 0; var_546_object = Obj();
				var_546_object = var_1_object;
				func_4003(var_545_bool, var_546_object);
				if(var_545_bool != 0) {
					var_560_bool = 0; var_561_object = Obj();
					var_561_object = var_1_object;
					func_4035(var_561_object);
					if(var_560_bool != 0) {
						var_544_bool = 1;
					}
				}
				if(var_544_bool != 1) {
					var_566_bool = 0;
					var_566_bool = 0;
					var_567_bool = 0; var_568_object = Obj();
					var_568_object = var_1_object;
					func_4013(var_567_bool, var_568_object);
					if(var_567_bool != 0) {
						var_578_bool = 0; var_579_object = Obj();
						var_579_object = var_1_object;
						func_4035(var_579_object);
						if(var_578_bool != 0) {
							var_566_bool = 1;
						}
					}
					if(var_566_bool != 1) {
						var_543_bool = 0;
					}
				}
				if(var_543_bool != 0) {
					@@@var_0_object:AddReply((int)512066, (int)13289, (int)13287);
				}
				var_583_bool = 0;
				var_583_bool = 0;
				var_584_bool = 0; var_585_object = Obj();
				var_585_object = var_1_object;
				func_4059(var_585_object);
				if(var_584_bool != 0) {
					var_590_bool = 0; var_591_object = Obj();
					var_591_object = var_1_object;
					func_4071(var_591_object);
					if(var_590_bool != 0) {
						var_583_bool = 1;
					}
				}
				if(var_583_bool != 0) {
					@@@var_0_object:AddReply((int)512543, (int)13713, (int)13712);
				}
				var_599_bool = 0;
				var_599_bool = 0;
				var_600_bool = 0;
				var_600_bool = 0;
				var_601_bool = 0; var_602_object = Obj();
				var_602_object = var_1_object;
				func_4047(var_602_object);
				if(var_601_bool != 0) {
					var_607_bool = 0; var_608_object = Obj();
					var_608_object = var_1_object;
					func_4083(var_608_object);
					if(var_607_bool != 0) {
						var_600_bool = 1;
					}
				}
				if(var_600_bool != 0) {
					var_613_bool = 0; var_614_object = Obj();
					var_614_object = var_1_object;
					func_4059(var_614_object);
					var_615_bool = var_613_bool == 0; //@nz
					if(var_615_bool != 0) {
						var_599_bool = 1;
					}
				}
				if(var_599_bool != 0) {
					@@@var_0_object:AddReply((int)512546, (int)13716, (int)13715);
				}
				var_619_bool = 0;
				var_619_bool = 0;
				var_620_bool = 0; var_621_object = Obj();
				var_621_object = var_1_object;
				func_4107(var_621_object);
				if(var_620_bool != 0) {
					var_626_bool = 0; var_627_object = Obj();
					var_627_object = var_1_object;
					func_4095(var_627_object);
					if(var_626_bool != 0) {
						var_619_bool = 1;
					}
				}
				if(var_619_bool != 0) {
					@@@var_0_object:AddReply((int)512053, (int)13274, (int)13273);
				}
				@@@var_0_object:AddReply((int)512060, (int)-1, (int)13280);
				goto Label_2033;
		}
	}
Label_2033:
	var_533_bool = 0;
	func_3766(var_533_bool);
	if(var_533_bool != 0) {

	Label_2037:
		lshWaitForAnimEnd();
		var_534_string = var_3_string;
		if(var_534_string != 0) {
		} else {
			var_535_string = "";
			var_535_string = var_2_object;
			func_3564(var_535_string);
			goto Label_2037;
	}
		PlayAnimation("all", "idle");

	Label_2052:
		WaitForAnimEnd();
		var_538_string = var_3_string;
		if(var_538_string != 0) {
			goto Label_2062;
		}
		PlayAnimation("all", "idle");
		goto Label_2052;

	}
	goto Label_2062;
	
Label_2062:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x75d";


func_4187(var_569_bool)
{
	var_571_bool = 0;
	var_571_bool = 0;
	var_572_int = 0;
	func_3720(var_572_int);
	var_574_bool = var_572_int >= (int)6;
	if(var_574_bool != 0) {
		var_575_int = 0;
		func_3720(var_575_int);
		var_577_bool = var_575_int < (int)12;
		if(var_577_bool != 0) {
			var_571_bool = 1;
		}
	}
	if(var_571_bool != 0) {
		var_569_bool = 1;
		return 0;
	}
	var_569_bool = 0;
	return 0;
}


func_3931(var_438_bool)
{
	var_440_int = 0; var_441_string = "";
	func_3633(var_440_int, "ood4Spi4ka1");
	var_443_bool = var_440_int == (int)0;
	if(var_443_bool != 0) {
		var_438_bool = 1;
		return 0;
	}
	var_438_bool = 0;
	return 0;
}


func_3680(var_72_object, var_73_object, var_74_int)
{
	var_75_int = 0; var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_int = 0; var_80_bool = 0;
	@@var_73_object:GetItemID(var_78_int);
	GetInvItemProperty(var_79_int, var_78_int, "Category");
	@@var_72_object:AddItem(var_80_bool, var_73_object, var_79_int, var_74_int);
	var_82_bool = var_80_bool == 0; //@nz
	if(var_82_bool != 0) {
		@@var_72_object:DropItems(var_73_object, var_74_int);
	} else {
		var_83_int = 0; var_84_int = 0;
		var_78_int = var_83_int;
		var_74_int = var_84_int;
		func_3649(var_83_int, var_84_int);
	}
	return 6;
	
}


func_3426(var_126_bool, var_127_object)
{
	var_131_int = 0; var_132_int = 0; var_133_int = 0; var_134_int = 0;
	GetVariable("voice_common", var_133_int);
	var_136_int = var_133_int;
	if(var_136_int != 0) {
		var_137_bool = 0; var_138_object = Obj();
		var_127_object = var_138_object;
		func_3484(var_137_bool, var_138_object);
		var_167_bool = var_137_bool == 0; //@nz
		if(var_167_bool != 0) {
			var_168_bool = 0; var_169_object = Obj();
			var_127_object = var_169_object;
			func_3521(var_168_bool, var_169_object);
			var_203_bool = var_168_bool == 0; //@nz
			if(var_203_bool != 0) {
				var_126_bool = 0;
				return 4;
			}
		}
		irand(var_134_int, (int)2);
		var_205_int = var_134_int;
		if(var_205_int != 0) {
			var_208_int = var_133_int + (int)1;
			var_210_int = var_208_int % (int)3;
			SetVariable("voice_common", var_210_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_213_bool = 0; var_214_object = Obj();
		var_127_object = var_214_object;
		func_3521(var_213_bool, var_214_object);
		var_215_bool = var_213_bool == 0; //@nz
		if(var_215_bool != 0) {
			var_216_bool = 0; var_217_object = Obj();
			var_127_object = var_217_object;
			func_3484(var_216_bool, var_217_object);
			var_218_bool = var_216_bool == 0; //@nz
			if(var_218_bool != 0) {
				var_126_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3482;
	
Label_3482:
	var_126_bool = 1;
	return 4;
	
}


func_2660(var_0_object, var_1_object, var_2_object, var_3_string, var_666_object, var_667_object)
{
	var_0_object = var_667_object;
	var_1_object = var_666_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_673_string = "";
		func_2723(var_667_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_2693;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa68";
	}
Label_2693:
	var_691_bool = 0;
	func_3766(var_691_bool);
	if(var_691_bool != 0) {

	Label_2697:
		lshWaitForAnimEnd();
		var_692_string = var_3_string;
		if(var_692_string != 0) {
		} else {
			var_693_string = "";
			var_693_string = var_2_object;
			func_3564(var_693_string);
			goto Label_2697;
	}
		PlayAnimation("all", "idle");

	Label_2712:
		WaitForAnimEnd();
		var_696_string = var_3_string;
		if(var_696_string != 0) {
			goto Label_2722;
		}
		PlayAnimation("all", "idle");
		goto Label_2712;
	}
	goto Label_2722;
	
Label_2722:
	return 0;
	
}


func_3943(var_457_bool)
{
	var_459_int = 0; var_460_string = "";
	func_3633(var_459_int, "ood4Spi4ka3");
	var_462_bool = var_459_int == (int)0;
	if(var_462_bool != 0) {
		var_457_bool = 1;
		return 0;
	}
	var_457_bool = 0;
	return 0;
}


func_2919(var_0_object, var_1_object, var_2_object, var_3_string, var_725_object, var_726_object)
{
	var_0_object = var_726_object;
	var_1_object = var_725_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_732_string = "";
		func_2977(var_726_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_2947;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb6b";
	}
Label_2947:
	var_747_bool = 0;
	func_3766(var_747_bool);
	if(var_747_bool != 0) {

	Label_2951:
		lshWaitForAnimEnd();
		var_748_string = var_3_string;
		if(var_748_string != 0) {
		} else {
			var_749_string = "";
			var_749_string = var_2_object;
			func_3564(var_749_string);
			goto Label_2951;
	}
		PlayAnimation("all", "idle");

	Label_2966:
		WaitForAnimEnd();
		var_752_string = var_3_string;
		if(var_752_string != 0) {
			goto Label_2976;
		}
		PlayAnimation("all", "idle");
		goto Label_2966;
	}
	goto Label_2976;
	
Label_2976:
	return 0;
	
}


func_4208()
{
	var_45_object = Obj(); var_46_object = Obj();
	CreateDiaryEntry(var_46_object, (int)53, (int)1, (int)512135);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_46_object = var_51_object;
	func_4286(var_50_bool, var_51_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3699(var_84_bool, var_85_string, var_86_string)
{
	var_87_object = Obj(); var_88_object = Obj();
	FindActor(var_88_object, var_85_string);
	var_89_bool = var_88_object == 0; //@ne
	if(var_89_bool != 0) {
		var_84_bool = 0;
		return 2;
	}
	Trigger(var_88_object, var_86_string);
	var_84_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3955(var_374_bool)
{
	var_376_int = 0; var_377_string = "";
	func_3633(var_376_int, "ood2Spi4ka4");
	var_379_bool = var_376_int == (int)0;
	if(var_379_bool != 0) {
		var_374_bool = 1;
		return 0;
	}
	var_374_bool = 0;
	return 0;
}


func_373(var_0_object, var_1_object, var_2_object, var_3_string, var_315_object, var_316_object)
{
	var_0_object = var_316_object;
	var_1_object = var_315_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_322_string = "";
		func_484(var_316_object, "Serious");
		@@@var_0_object:SetMessage((int)506715);
		@@@var_0_object:ClearReplies();
		var_331_bool = 0;
		var_331_bool = 0;
		var_332_bool = 0; var_333_object = Obj();
		var_333_object = var_1_object;
		func_3967(var_333_object);
		if(var_332_bool != 0) {
			var_340_bool = 0; var_341_object = Obj();
			var_341_object = var_1_object;
			func_3991(var_341_object);
			if(var_340_bool != 0) {
				var_331_bool = 1;
			}
		}
		if(var_331_bool != 0) {
			@@@var_0_object:AddReply((int)507429, (int)7355, (int)8200);
		}
		var_349_bool = 0; var_350_object = Obj();
		var_350_object = var_1_object;
		func_3979(var_350_object);
		if(var_349_bool != 0) {
			@@@var_0_object:AddReply((int)506716, (int)7385, (int)7403);
		}
		var_358_bool = 0;
		var_358_bool = 0;
		var_359_bool = 0; var_360_object = Obj();
		var_360_object = var_1_object;
		func_4119(var_360_object);
		if(var_359_bool != 0) {
			var_365_bool = 0; var_366_object = Obj();
			var_366_object = var_1_object;
			func_4131(var_366_object);
			if(var_365_bool != 0) {
				var_358_bool = 1;
			}
		}
		if(var_358_bool != 0) {
			@@@var_0_object:AddReply((int)514516, (int)15756, (int)15755);
		}
		var_374_bool = 0; var_375_object = Obj();
		var_375_object = var_1_object;
		func_3955(var_375_object);
		if(var_374_bool != 0) {
			@@@var_0_object:AddReply((int)532774, (int)10460, (int)34242);
		}
		@@@var_0_object:AddReply((int)507534, (int)-1, (int)8316);
		goto Label_454;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x179";
	}
Label_454:
	var_386_bool = 0;
	func_3766(var_386_bool);
	if(var_386_bool != 0) {

	Label_458:
		lshWaitForAnimEnd();
		var_387_string = var_3_string;
		if(var_387_string != 0) {
		} else {
			var_388_string = "";
			var_388_string = var_2_object;
			func_3564(var_388_string);
			goto Label_458;
	}
		PlayAnimation("all", "idle");

	Label_473:
		WaitForAnimEnd();
		var_391_string = var_3_string;
		if(var_391_string != 0) {
			goto Label_483;
		}
		PlayAnimation("all", "idle");
		goto Label_473;
	}
	goto Label_483;
	
Label_483:
	return 0;
	
}


func_4221()
{
	var_45_object = Obj(); var_46_object = Obj();
	CreateDiaryEntry(var_46_object, (int)107, (int)2, (int)513730);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_46_object = var_51_object;
	func_4286(var_50_bool, var_51_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3711(var_181_int)
{
	var_182_float = 0; var_183_float = 0;
	GetGameTime(var_183_float);
	var_185_int = 0;
	var_185_int = var_183_float / (int)24;
	var_181_int = (int)1 + var_185_int;
	return 2;
}


func_3967(var_332_bool)
{
	var_334_int = 0; var_335_string = "";
	func_3633(var_334_int, "ood2Spi4ka1");
	var_339_bool = var_334_int == (int)0;
	if(var_339_bool != 0) {
		var_332_bool = 1;
		return 0;
	}
	var_332_bool = 0;
	return 0;
}


func_3720(var_550_int)
{
	var_551_float = 0; var_552_float = 0;
	GetGameTime(var_552_float);
	var_553_int = 0;
	var_552_float = var_553_int;
	var_550_int = var_553_int % (int)24;
	return 2;
}


func_4234()
{
	var_106_object = Obj(); var_107_object = Obj();
	CreateDiaryEntry(var_107_object, (int)109, (int)2, (int)513732);
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0;
	var_107_object = var_112_object;
	func_4286(var_111_bool, var_112_object, (int)107);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1162(var_0_object, var_398_int, var_399_object)
{
	var_401_object = Obj(); var_402_bool = 0; var_403_int = 0; var_404_bool = 0; var_405_object = Obj(); var_406_bool = 0; var_407_int = 0; var_408_bool = 0;
	var_0_object = var_399_object;
	var_409_bool = 0; var_410_object = Obj(); var_411_float = 0;
	var_399_object = var_410_object;
	func_3339(var_409_bool, var_410_object, (float)70.0);
	var_412_bool = var_409_bool == 0; //@nz
	if(var_412_bool != 0) {
		var_398_int = -2;
		return 8;
	}
	CreateDialog(var_405_object);
	var_413_int = 0;
	func_3760(var_413_int);
	@@var_405_object:SetNPCName(var_413_int);
	var_414_int = 0;
	func_3758(var_414_int);
	@@var_405_object:SetNPCDescription(var_414_int);
	var_415_string = "";
	func_3762(var_415_string);
	@@var_405_object:SetPhoto(var_415_string);
	var_416_string = "";
	func_3764(var_416_string);
	@@var_405_object:SetPhoto2(var_416_string);
	var_417_int = 0;
	func_4314(var_417_int);
	@@var_405_object:SetPlayerName(var_417_int);
	IsOverrideActive(var_406_bool);
	var_418_bool = var_406_bool;
	if(var_418_bool != 0) {
		var_398_int = -2;
		return 8;
	}
	DoDialog(var_405_object);
	var_419_bool = 0; var_420_object = Obj();
	func_3617(Obj());
	var_421_object = var_420_object;
	func_3426(var_419_bool, var_420_object);
	var_422_object = Obj(); var_423_object = Obj();
	var_399_object = var_422_object;
	var_405_object = var_423_object;
	TaskCall(5);
	func_1243(var_424_object, var_425_object, var_426_string, var_427_bool, var_422_object, var_423_object);
	TaskReturn();
	@@var_405_object:IsDialogEnd(var_408_bool);
	
Label_1225:
	var_477_bool = var_408_bool == 0; //@nz
	if(var_477_bool != 0) {
		sync();
		@@var_405_object:IsDialogEnd(var_408_bool);
		goto Label_1225;
	}
	var_399_object = Obj();
	func_3408();
	StopDialog(var_405_object);
	@@var_405_object:GetReturnValue((int)-1);
	var_407_int = var_398_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3979(var_349_bool)
{
	var_351_int = 0; var_352_string = "";
	func_3633(var_351_int, "ood2Spi4ka2");
	var_354_bool = var_351_int == (int)0;
	if(var_354_bool != 0) {
		var_349_bool = 1;
		return 0;
	}
	var_349_bool = 0;
	return 0;
}


func_3728(var_288_bool, var_289_int)
{
	var_290_int = 0;
	func_3711(var_290_int);
	var_288_bool = var_290_int == var_289_int;
	return 0;
}


func_149(var_2_object, var_232_string)
{
	var_233_bool = 0;
	func_3766(var_233_bool);
	var_234_bool = var_233_bool == 0; //@nz
	if(var_234_bool != 0) {
		return 0;
	}
	var_235_bool = var_232_string == var_2_object;
	if(var_235_bool != 0) {
		return 0;
	}
	var_236_string = ""; var_237_bool = 0;
	var_232_string = var_236_string;
	var_239_bool = var_232_string == "";
	if(var_239_bool != 0) {
		var_237_bool = 0;
	} else {
		var_237_bool = 1;
	}
	func_3580(var_236_string, var_237_bool);
	var_2_object = var_232_string;
	return 0;
	
}


func_3734(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = "";
	var_60_int = var_57_int;
	if(var_60_int != 0) {
		"idle" = "idle" + var_57_int;
	}
	var_59_string = var_56_string;
	return 2;
}


func_4247()
{
	var_127_object = Obj(); var_128_object = Obj();
	CreateDiaryEntry(var_128_object, (int)110, (int)2, (int)513733);
	var_132_bool = 0; var_133_object = Obj(); var_134_int = 0;
	var_128_object = var_133_object;
	func_4286(var_132_bool, var_133_object, (int)107);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3224()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0;
	WaitForAnimEnd();
	var_48_bool = 0;
	func_3334(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 12;
	}
	func_3741((int)0);
	var_50_int = var_42_int;
	var_43_int = 0;
	
Label_3238:
	var_63_bool = 0;
	var_63_bool = 0;
	var_65_bool = var_43_int < (int)5;
	if(var_65_bool != 0) {
		var_66_bool = 0;
		func_3334(var_66_bool);
		if(var_66_bool != 0) {
			var_63_bool = 1;
		}
	}
	if(var_63_bool != 0) {
		var_67_bool = var_42_int == 0; //@nz
		if(var_67_bool != 0) {
			Sleep((int)3, var_44_bool);
			var_69_bool = var_44_bool == 0; //@nz
			if(var_69_bool != 0) {
			} else {
		} else {
				irand(var_45_int, var_42_int);
				irand(var_46_int, (int)5);
				var_75_bool = var_46_int != (int)0;
				if(var_75_bool != 0) {
					var_45_int = 0;
				}
				var_77_string = ""; var_78_int = 0;
				var_45_int = var_78_int;
				func_3734(var_77_string, var_78_int);
				PlayAnimation("all", var_77_string);
				WaitForAnimEnd(var_47_bool);
				var_79_bool = var_47_bool == 0; //@nz
				if(var_79_bool == 0) goto Label_3279;
				goto Label_3290;
		}
		Label_3279:
			var_70_bool = 0;
			func_3293(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_3290;
			}
			ResetAAS();
			var_43_int = var_43_int + (int)1;
			goto Label_3238;

		}
	}
Label_3290:
	ResetAAS();
	return 12;
	
}


func_3991(var_340_bool)
{
	var_342_int = 0; var_343_string = "";
	func_3633(var_342_int, "d2q01");
	var_345_bool = var_342_int == (int)3;
	if(var_345_bool != 0) {
		var_340_bool = 1;
		return 0;
	}
	var_340_bool = 0;
	return 0;
}


func_3484(var_137_bool, var_138_object)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = "";
	var_144_string = "c";
	var_145_int = 0;
	
Label_3487:
	if((int)1 != 0) {
		var_151_int = var_145_int + (int)1;
		var_152_int = var_144_string + var_151_int;
		@@var_138_object:HasProperty(var_152_int, var_146_bool);
		var_153_bool = var_146_bool == 0; //@nz
		if(var_153_bool != 0) {
		} else {
			var_145_int = var_145_int + (int)1;
			goto Label_3487;
		}
	}
	var_154_bool = var_145_int == 0; //@nz
	if(var_154_bool != 0) {
		var_137_bool = 0;
		return 10;
	}
	var_147_int = 0;
	var_156_bool = var_145_int > (int)1;
	if(var_156_bool != 0) {
		irand(var_147_int, var_145_int);
	}
	var_158_int = var_147_int + (int)1;
	var_159_int = var_144_string + var_158_int;
	@@var_138_object:GetProperty(var_159_int, var_148_string);
	var_160_bool = 0; var_161_string = "";
	var_148_string = var_161_string;
	func_3595(var_160_bool, var_161_string);
	var_160_bool = var_137_bool;
	return 10;
	
}


func_3741(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_53_int = 0;
	
Label_3743:
	var_56_string = ""; var_57_int = 0;
	var_53_int = var_57_int;
	func_3734(var_56_string, var_57_int);
	HasAnimation(var_54_bool, "all", var_56_string);
	var_61_bool = var_54_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
		var_53_int = var_53_int + (int)1;
		goto Label_3743;
	}
	var_53_int = var_50_int;
	return 4;
	
}


func_2977(var_2_object, var_732_string)
{
	var_733_bool = 0;
	func_3766(var_733_bool);
	var_734_bool = var_733_bool == 0; //@nz
	if(var_734_bool != 0) {
		return 0;
	}
	var_735_bool = var_732_string == var_2_object;
	if(var_735_bool != 0) {
		return 0;
	}
	var_736_string = ""; var_737_bool = 0;
	var_732_string = var_736_string;
	var_739_bool = var_732_string == "";
	if(var_739_bool != 0) {
		var_737_bool = 0;
	} else {
		var_737_bool = 1;
	}
	func_3580(var_736_string, var_737_bool);
	var_2_object = var_732_string;
	return 0;
	
}


func_2723(var_2_object, var_673_string)
{
	var_674_bool = 0;
	func_3766(var_674_bool);
	var_675_bool = var_674_bool == 0; //@nz
	if(var_675_bool != 0) {
		return 0;
	}
	var_676_bool = var_673_string == var_2_object;
	if(var_676_bool != 0) {
		return 0;
	}
	var_677_string = ""; var_678_bool = 0;
	var_673_string = var_677_string;
	var_680_bool = var_673_string == "";
	if(var_680_bool != 0) {
		var_678_bool = 0;
	} else {
		var_678_bool = 1;
	}
	func_3580(var_677_string, var_678_bool);
	var_2_object = var_673_string;
	return 0;
	
}


func_4260()
{
	var_68_object = Obj(); var_69_object = Obj();
	CreateDiaryEntry(var_69_object, (int)158, (int)2, (int)515376);
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0;
	var_69_object = var_74_object;
	func_4286(var_73_bool, var_74_object, (int)107);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4003(var_545_bool, var_546_object)
{
	var_547_bool = 0; var_548_object = Obj();
	var_546_object = var_548_object;
	func_4166(var_548_object);
	if(var_547_bool != 0) {
		var_545_bool = 1;
		return 0;
	}
	var_545_bool = 0;
	return 0;
}


func_4013(var_567_bool, var_568_object)
{
	var_569_bool = 0; var_570_object = Obj();
	var_568_object = var_570_object;
	func_4187(var_570_object);
	if(var_569_bool != 0) {
		var_567_bool = 1;
		return 0;
	}
	var_567_bool = 0;
	return 0;
}


func_3758(var_114_int)
{
	var_114_int = 515552;
	return 0;
}


func_3760(var_113_int)
{
	var_113_int = 502877;
	return 0;
}


func_4273(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj();
	GetDiaryRoot(var_61_object);
	var_62_bool = var_61_object == 0; //@nz
	if(var_62_bool != 0) {
		Trace("Can't retrieve diary root");
		var_59_object = 0;
		return 2;
	}
	var_61_object = var_59_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3762(var_115_string)
{
	var_115_string = "ui/NPC_Spi4ka.png";
	return 0;
}


func_3764(var_116_string)
{
	var_116_string = "ui/NPC_Spi4ka_b.png";
	return 0;
}


func_3766(var_108_bool)
{
	var_108_bool = 1;
	return 0;
}


func_4023(var_512_bool)
{
	var_514_int = 0; var_515_string = "";
	func_3633(var_514_int, "ood6Spi4ka1");
	var_517_bool = var_514_int == (int)0;
	if(var_517_bool != 0) {
		var_512_bool = 1;
		return 0;
	}
	var_512_bool = 0;
	return 0;
}


func_3768(var_64_object)
{
	var_66_object = Obj(); var_67_object = Obj();
	Trace("lockpick1time is given");
	CreateInvItem(var_67_object);
	@@var_67_object:SetItemName("lockpick");
	@@var_67_object:SetProperty("uses", (int)1);
	var_72_object = Obj(); var_73_object = Obj(); var_74_int = 0;
	var_64_object = var_72_object;
	var_67_object = var_73_object;
	func_3680(var_72_object, var_73_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4286(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	func_4273(Obj());
	var_59_object = var_56_object;
	@@var_56_object:Find(var_52_int, var_57_object);
	var_64_bool = var_57_object == 0; //@nz
	if(var_64_bool != 0) {
		var_66_int = "Can't find diary parent with id: " + var_52_int;
		Trace(var_66_int);
		var_50_bool = 0;
		return 6;
	}
	@@var_57_object:AddChild(var_51_object);
	SendWorldWndMessage((int)7);
	@@var_51_object:GetCategory(var_58_int);
	SetDiarySection(var_58_int);
	var_50_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3521(var_168_bool, var_169_object)
{
	var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = "";
	var_181_int = 0;
	func_3711(var_181_int);
	var_187_int = "d" + var_181_int;
	var_175_string = var_187_int + "m";
	var_176_int = 0;
	
Label_3530:
	if((int)1 != 0) {
		var_191_int = var_176_int + (int)1;
		var_192_int = var_175_string + var_191_int;
		@@var_169_object:HasProperty(var_192_int, var_177_bool);
		var_193_bool = var_177_bool == 0; //@nz
		if(var_193_bool != 0) {
		} else {
			var_176_int = var_176_int + (int)1;
			goto Label_3530;
		}
	}
	var_194_bool = var_176_int == 0; //@nz
	if(var_194_bool != 0) {
		var_168_bool = 0;
		return 10;
	}
	var_178_int = 0;
	var_196_bool = var_176_int > (int)1;
	if(var_196_bool != 0) {
		irand(var_178_int, var_176_int);
	}
	var_198_int = var_178_int + (int)1;
	var_199_int = var_175_string + var_198_int;
	@@var_169_object:GetProperty(var_199_int, var_179_string);
	var_200_bool = 0; var_201_string = "";
	var_179_string = var_201_string;
	func_3595(var_200_bool, var_201_string);
	var_200_bool = var_168_bool;
	return 10;
	
}


func_4035(var_560_bool)
{
	var_562_int = 0; var_563_string = "";
	func_3633(var_562_int, "d6q03");
	var_565_bool = var_562_int == (int)0;
	if(var_565_bool != 0) {
		var_560_bool = 1;
		return 0;
	}
	var_560_bool = 0;
	return 0;
}


func_3789(var_43_object)
{
	Trace("money 2000 removed");
	var_46_object = Obj(); var_47_int = 0;
	var_43_object = var_46_object;
	func_3661(var_46_object, (int)-2000);
	return 0;
}


func_4047(var_601_bool)
{
	var_603_int = 0; var_604_string = "";
	func_3633(var_603_int, "d6q03");
	var_606_bool = var_603_int == (int)2;
	if(var_606_bool != 0) {
		var_601_bool = 1;
		return 0;
	}
	var_601_bool = 0;
	return 0;
}


func_3799()
{
	SetVariable("ood4Spi4ka1", (int)1);
	return 0;
}


func_4314(var_117_int)
{
	var_118_int = 0; var_119_int = 0;
	GetVariable("branch", var_119_int);
	var_122_bool = var_119_int == (int)0;
	if(var_122_bool != 0) {
		var_117_int = 1;
		return 2;
	EMIT "GOTO 0x10e9";
	}
	var_124_bool = var_119_int == (int)1;
	if(var_124_bool != 0) {
		var_117_int = 2;
		return 2;
	}
	var_117_int = 3;
	return 2;
}


func_1243(var_0_object, var_1_object, var_2_object, var_3_string, var_422_object, var_423_object)
{
	var_0_object = var_423_object;
	var_1_object = var_422_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_429_string = "";
		func_1330(var_423_object, "Neutral");
		@@@var_0_object:SetMessage((int)510886);
		@@@var_0_object:ClearReplies();
		var_438_bool = 0; var_439_object = Obj();
		var_439_object = var_1_object;
		func_3931(var_439_object);
		if(var_438_bool != 0) {
			@@@var_0_object:AddReply((int)510887, (int)11068, (int)12035);
		}
		@@@var_0_object:AddReply((int)510888, (int)12037, (int)12036);
		var_450_bool = 0;
		var_450_bool = 0;
		var_451_bool = 0; var_452_object = Obj();
		var_452_object = var_1_object;
		func_4143(var_452_object);
		if(var_451_bool != 0) {
			var_457_bool = 0; var_458_object = Obj();
			var_458_object = var_1_object;
			func_3943(var_458_object);
			if(var_457_bool != 0) {
				var_450_bool = 1;
			}
		}
		if(var_450_bool != 0) {
			@@@var_0_object:AddReply((int)534279, (int)35872, (int)35871);
		}
		@@@var_0_object:AddReply((int)534267, (int)-1, (int)35855);
		goto Label_1300;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4df";
	}
Label_1300:
	var_469_bool = 0;
	func_3766(var_469_bool);
	if(var_469_bool != 0) {

	Label_1304:
		lshWaitForAnimEnd();
		var_470_string = var_3_string;
		if(var_470_string != 0) {
		} else {
			var_471_string = "";
			var_471_string = var_2_object;
			func_3564(var_471_string);
			goto Label_1304;
	}
		PlayAnimation("all", "idle");

	Label_1319:
		WaitForAnimEnd();
		var_474_string = var_3_string;
		if(var_474_string != 0) {
			goto Label_1329;
		}
		PlayAnimation("all", "idle");
		goto Label_1319;
	}
	goto Label_1329;
	
Label_1329:
	return 0;
	
}


func_4059(var_584_bool)
{
	var_586_int = 0; var_587_string = "";
	func_3633(var_586_int, "d6q03AlbinosKilled");
	var_589_bool = var_586_int == (int)1;
	if(var_589_bool != 0) {
		var_584_bool = 1;
		return 0;
	}
	var_584_bool = 0;
	return 0;
}


func_3805()
{
	SetVariable("ood4Spi4ka3", (int)1);
	return 0;
}


func_3293(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_3295()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3811()
{
	SetVariable("ood2Spi4ka4", (int)1);
	return 0;
}


func_3300(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_484(var_2_object, var_322_string)
{
	var_323_bool = 0;
	func_3766(var_323_bool);
	var_324_bool = var_323_bool == 0; //@nz
	if(var_324_bool != 0) {
		return 0;
	}
	var_325_bool = var_322_string == var_2_object;
	if(var_325_bool != 0) {
		return 0;
	}
	var_326_string = ""; var_327_bool = 0;
	var_322_string = var_326_string;
	var_329_bool = var_322_string == "";
	if(var_329_bool != 0) {
		var_327_bool = 0;
	} else {
		var_327_bool = 1;
	}
	func_3580(var_326_string, var_327_bool);
	var_2_object = var_322_string;
	return 0;
	
}


func_4071(var_590_bool)
{
	var_592_int = 0; var_593_string = "";
	func_3633(var_592_int, "ood6Spi4ka2");
	var_595_bool = var_592_int == (int)0;
	if(var_595_bool != 0) {
		var_590_bool = 1;
		return 0;
	}
	var_590_bool = 0;
	return 0;
}


func_3048(var_0_object)
{
	var_32_bool = 0;
	func_3334(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_3057:
	func_3224();
	goto Label_3057;
}
EMIT "Return(); Pop(0)";


func_3817()
{
	SetVariable("ood2Spi4ka1", (int)1);
	return 0;
}


func_4331(var_49_object)
{
	var_50_int = 0; var_51_int = 0;
	GetVariable("mt_spi4ka", var_51_int);
	var_53_bool = var_51_int == 0; //@nz
	if(var_53_bool != 0) {
		var_54_int = 0; var_55_object = Obj();
		var_49_object = var_55_object;
		TaskCall(0);
		func_0(var_56_object, var_54_int, var_55_object);
		TaskReturn();
		SetVariable("mt_spi4ka", (int)1);
	}
	var_288_bool = 0; var_289_int = 0;
	func_3728(var_288_bool, (int)2);
	if(var_288_bool != 0) {
		var_291_int = 0; var_292_object = Obj();
		var_49_object = var_292_object;
		TaskCall(2);
		func_292(var_293_object, var_291_int, var_292_object);
		TaskReturn();
		return 2;
	}
	var_396_bool = 0; var_397_int = 0;
	func_3728(var_396_bool, (int)4);
	if(var_396_bool != 0) {
		var_398_int = 0; var_399_object = Obj();
		var_49_object = var_399_object;
		TaskCall(4);
		func_1162(var_400_object, var_398_int, var_399_object);
		TaskReturn();
		return 2;
	}
	var_479_bool = 0; var_480_int = 0;
	func_3728(var_479_bool, (int)6);
	if(var_479_bool != 0) {
		var_481_int = 0; var_482_object = Obj();
		var_49_object = var_482_object;
		TaskCall(6);
		func_1800(var_483_object, var_481_int, var_482_object);
		TaskReturn();
		return 2;
	}
	var_640_bool = 0; var_641_int = 0;
	func_3728(var_640_bool, (int)12);
	if(var_640_bool != 0) {
		var_642_int = 0; var_643_object = Obj();
		var_49_object = var_643_object;
		TaskCall(8);
		func_2579(var_644_object, var_642_int, var_643_object);
		TaskReturn();
		return 2;
	}
	var_701_int = 0; var_702_object = Obj();
	var_49_object = var_702_object;
	TaskCall(10);
	func_2838(var_703_object, var_701_int, var_702_object);
	TaskReturn();
	return 2;
}


func_3308(var_50_object, var_51_string, var_52_int)
{
	var_53_int = 0; var_54_int = 0;
	@@var_50_object:GetProperty(var_51_string, var_54_int);
	var_55_int = var_54_int + var_52_int;
	@@var_50_object:SetProperty(var_51_string, var_55_int);
	return 2;
}


func_3564(var_261_string)
{
	var_262_bool = 0; var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_float = 0; var_267_float = 0;
	lshHasAnimation(var_265_bool, var_261_string);
	var_268_bool = var_265_bool;
	if(var_268_bool != 0) {
		lshGetAnimTimes(var_261_string, var_266_float, var_267_float);
		lshPlayAnimation(var_266_float, var_267_float, (bool)0);
	} else {
		var_271_int = "Can't find lsh animation : " + var_261_string;
		Trace(var_271_int);
	}
	return 6;
	
}


func_3823()
{
	SetVariable("ood2Spi4ka2", (int)1);
	return 0;
}


func_3315(var_39_bool, var_40_cvector)
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


func_4083(var_607_bool)
{
	var_609_int = 0; var_610_string = "";
	func_3633(var_609_int, "ood6Spi4ka3");
	var_612_bool = var_609_int == (int)0;
	if(var_612_bool != 0) {
		var_607_bool = 1;
		return 0;
	}
	var_607_bool = 0;
	return 0;
}


func_3829()
{
	SetVariable("d2q01", (int)4);
	func_4208();
	return 0;
}


func_3062(var_56_bool)
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
	func_3325(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3580(var_236_string, var_237_bool)
{
	var_240_bool = 0; var_241_float = 0; var_242_float = 0; var_243_bool = 0; var_244_float = 0; var_245_float = 0;
	lshHasAnimation(var_243_bool, var_236_string);
	var_246_bool = var_243_bool;
	if(var_246_bool != 0) {
		lshGetAnimTimes(var_236_string, var_244_float, var_245_float);
		lshPlayAnimation(var_244_float, var_245_float, var_237_bool);
	} else {
		var_248_int = "Can't find lsh animation : " + var_236_string;
		Trace(var_248_int);
	}
	return 6;
	
}


func_3325(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_3315(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_3838()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_4095(var_626_bool)
{
	var_628_int = 0; var_629_string = "";
	func_3633(var_628_int, "d6q01");
	var_631_bool = var_628_int == (int)4;
	if(var_631_bool != 0) {
		var_626_bool = 1;
		return 0;
	}
	var_626_bool = 0;
	return 0;
}


