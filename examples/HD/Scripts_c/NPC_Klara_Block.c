// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Untrust|W:Doubt|W:Agression|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Block.png|W:ui/NPC_Block_b.png|W:k10q01|W:quest_k10_01|W:remove_soldiers|W:init_prison|W:free_prisoner|W:k11q01|W:quest_k11_01|W:init_kabak|W:init_gun|W:k11q01SoulCount|W:completed|W:quest_k9_01|W:playsound|W:giveitem|W:ook11Block1|W:ook11Block2|W:ook11Block3|W:ook9Block1|W:ook12Block1|W:money 5000 is given|W:delta_pills is given|W:delta_pills|W:k9q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:k2system_danko_day|W:k2system_danko_state|W:mt_block
// @GLOBALS: 0:object:
// @RUN_OP: 0xaf7
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbf vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2c8 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x654 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x778 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x968 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xacd vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0xb40 vars=int
// @EVENT_6: op=0xb66 vars=
// @EVENT_5: op=0xb75 vars=
// @EVENT_45: op=0xb82 vars=bool
// @EVENT_0: op=0xb8e vars=object
// @PE: 0x51,0xa9,0xbf,0x202,0x2b2,0x2c8,0x604,0x63e,0x654,0x70a,0x762,0x778,0x8f9,0x952,0x968,0xa7d,0xab7,0xacd,0xaf7,0xb40,0xb66,0xb82,0xd66,0xdb5,0xdff,0xe27,0xe2e,0xe41,0xe4f,0xe62,0xe6f,0xe79,0xe83,0xe89,0xe8e,0xe94,0xe9a,0xea0,0xea6,0xeac,0xeb6,0xec1,0xecb,0xed7,0xee3,0xeef,0xefb,0xf07,0xf11,0xf1d,0xf27,0xf31,0xf3b,0xf45,0xf51,0xf5d,0xf69,0xf75,0xf81,0xf93,0xf99,0xf9f,0xfa5

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3407();
		var_36_bool = var_32_cvector == (int)28260;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3630();
		}
		var_74_bool = var_32_cvector == (int)28272;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_3649();
		}
		var_91_bool = var_31_bool == (int)28257;
		if(var_91_bool != 0) {
			var_92_bool = 0; var_93_object = Obj();
			var_93_object = var_1_object;
			func_3787(var_93_object);
			if(var_92_bool != 0) {
				var_100_string = "";
				func_169(var_32_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526965);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528076, (int)29419, (int)29418);
				return 0;
			}
			var_121_string = "";
			func_169(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526969);
			@@@var_0_object:ClearReplies();
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_3799(var_124_object);
			if(var_123_bool != 0) {
				@@@var_0_object:AddReply((int)526978, (int)29424, (int)28270);
			}
			@@@var_0_object:AddReply((int)526970, (int)-1, (int)28262);
			@@@var_0_object:AddReply((int)528088, (int)-1, (int)29431);
			return 0;
		}
		var_139_bool = var_31_bool == (int)29424;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_169(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)528082);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528083, (int)29426, (int)29425);
			return 0;
		}
		var_146_bool = var_31_bool == (int)29426;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_169(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)528084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528085, (int)28271, (int)29427);
			@@@var_0_object:AddReply((int)528086, (int)28271, (int)29428);
			return 0;
		}
		var_156_bool = var_31_bool == (int)28271;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_169(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526979);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528089, (int)29433, (int)29432);
			return 0;
		}
		var_163_bool = var_31_bool == (int)29433;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_169(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528090);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526980, (int)-1, (int)28272);
			return 0;
		}
		var_170_bool = var_31_bool == (int)29419;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_169(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)528077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528078, (int)29421, (int)29420);
			@@@var_0_object:AddReply((int)528109, (int)29456, (int)29454);
			return 0;
		}
		var_180_bool = var_31_bool == (int)29456;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_169(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)528110);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528111, (int)29421, (int)29457);
			return 0;
		}
		var_187_bool = var_31_bool == (int)29421;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_169(var_32_cvector, "Agression");
			@@@var_0_object:SetMessage((int)528079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528080, (int)29423, (int)29422);
			return 0;
		}
		var_194_bool = var_31_bool == (int)29423;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_169(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526968, (int)-1, (int)28260);
			return 0;
		}
		var_3_string = true;
		var_200_bool = 0;
		func_3621(var_200_bool);
		if(var_200_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3407();
		var_36_bool = var_32_cvector == (int)28503;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3663();
		}
		var_74_bool = var_32_cvector == (int)28614;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_3663();
		}
		var_78_bool = var_32_cvector == (int)28691;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_3682();
		}
		var_94_bool = var_32_cvector == (int)28692;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_3682();
		}
		var_98_bool = var_32_cvector == (int)28639;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_3695();
		}
		var_113_bool = var_32_cvector == (int)41813;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_3726();
		}
		var_119_bool = var_32_cvector == (int)41816;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_3732();
		}
		var_125_bool = var_32_cvector == (int)41818;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_3721();
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_3756(var_137_object);
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_3715();
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_3623(var_162_object);
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_3766(var_202_object);
		}
		var_223_bool = var_32_cvector == (int)41819;
		if(var_223_bool != 0) {
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_3738();
		}
		var_229_bool = var_31_bool == (int)28498;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_690(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527190);
			@@@var_0_object:ClearReplies();
			var_248_bool = 0; var_249_object = Obj();
			var_249_object = var_1_object;
			func_3811(var_249_object);
			if(var_248_bool != 0) {
				@@@var_0_object:AddReply((int)527191, (int)28604, (int)28499);
			}
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_3823(var_260_object);
			if(var_259_bool != 0) {
				@@@var_0_object:AddReply((int)527234, (int)28615, (int)28542);
			}
			var_268_bool = 0;
			var_268_bool = 0;
			var_269_bool = 0; var_270_object = Obj();
			var_270_object = var_1_object;
			func_3847(var_269_bool, var_270_object);
			if(var_269_bool != 0) {
				var_277_bool = 0; var_278_object = Obj();
				var_278_object = var_1_object;
				func_3835(var_278_object);
				if(var_277_bool != 0) {
					var_268_bool = 1;
				}
			}
			if(var_268_bool != 0) {
				@@@var_0_object:AddReply((int)527310, (int)28628, (int)28627);
			}
			var_286_bool = 0;
			var_286_bool = 0;
			var_287_bool = 0;
			var_287_bool = 0;
			var_288_bool = 0; var_289_object = Obj();
			var_289_object = var_1_object;
			func_3869(var_288_bool, var_289_object);
			if(var_288_bool != 0) {
				var_303_bool = 0; var_304_object = Obj();
				var_304_object = var_1_object;
				func_3879(var_303_bool, var_304_object);
				if(var_303_bool != 0) {
					var_287_bool = 1;
				}
			}
			if(var_287_bool != 0) {
				var_317_bool = 0; var_318_object = Obj();
				var_318_object = var_1_object;
				func_3909(var_318_object);
				if(var_317_bool != 0) {
					var_286_bool = 1;
				}
			}
			if(var_286_bool != 0) {
				@@@var_0_object:AddReply((int)539861, (int)41814, (int)41813);
			}
			var_326_bool = 0;
			var_326_bool = 0;
			var_327_bool = 0;
			var_327_bool = 0;
			var_328_bool = 0; var_329_object = Obj();
			var_329_object = var_1_object;
			func_3869(var_328_bool, var_329_object);
			if(var_328_bool != 0) {
				var_330_bool = 0; var_331_object = Obj();
				var_331_object = var_1_object;
				func_3889(var_330_bool, var_331_object);
				if(var_330_bool != 0) {
					var_327_bool = 1;
				}
			}
			if(var_327_bool != 0) {
				var_337_bool = 0; var_338_object = Obj();
				var_338_object = var_1_object;
				func_3921(var_338_object);
				if(var_337_bool != 0) {
					var_326_bool = 1;
				}
			}
			if(var_326_bool != 0) {
				@@@var_0_object:AddReply((int)539864, (int)41817, (int)41816);
			}
			var_346_bool = 0;
			var_346_bool = 0;
			var_347_bool = 0;
			var_347_bool = 0;
			var_348_bool = 0; var_349_object = Obj();
			var_349_object = var_1_object;
			func_3869(var_348_bool, var_349_object);
			if(var_348_bool != 0) {
				var_350_bool = 0; var_351_object = Obj();
				var_351_object = var_1_object;
				func_3899(var_350_bool, var_351_object);
				if(var_350_bool != 0) {
					var_347_bool = 1;
				}
			}
			if(var_347_bool != 0) {
				var_357_bool = 0; var_358_object = Obj();
				var_358_object = var_1_object;
				func_3933(var_358_object);
				if(var_357_bool != 0) {
					var_346_bool = 1;
				}
			}
			if(var_346_bool != 0) {
				@@@var_0_object:AddReply((int)539867, (int)41820, (int)41819);
			}
			@@@var_0_object:AddReply((int)527196, (int)-1, (int)28504);
			return 0;
		}
		var_370_bool = var_31_bool == (int)41820;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_690(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)539868);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539869, (int)-1, (int)41821);
			return 0;
		}
		var_377_bool = var_31_bool == (int)41817;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_690(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539866, (int)-1, (int)41818);
			return 0;
		}
		var_384_bool = var_31_bool == (int)41814;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_690(var_32_cvector, "Agression");
			@@@var_0_object:SetMessage((int)539862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539863, (int)-1, (int)41815);
			return 0;
		}
		var_391_bool = var_31_bool == (int)28628;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_690(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)527311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527312, (int)28632, (int)28629);
			@@@var_0_object:AddReply((int)527357, (int)28632, (int)28676);
			return 0;
		}
		var_401_bool = var_31_bool == (int)28632;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_690(var_32_cvector, "Agression");
			@@@var_0_object:SetMessage((int)527315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527316, (int)28634, (int)28633);
			@@@var_0_object:AddReply((int)527358, (int)28634, (int)28678);
			return 0;
		}
		var_411_bool = var_31_bool == (int)28634;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_690(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527318, (int)28636, (int)28635);
			@@@var_0_object:AddReply((int)527359, (int)28638, (int)28680);
			return 0;
		}
		var_421_bool = var_31_bool == (int)28636;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_690(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527319);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527320, (int)28638, (int)28637);
			return 0;
		}
		var_428_bool = var_31_bool == (int)28638;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_690(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527322, (int)-1, (int)28639);
			return 0;
		}
		var_435_bool = var_31_bool == (int)28615;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_690(var_32_cvector, "Agression");
			@@@var_0_object:SetMessage((int)527299);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527300, (int)28617, (int)28616);
			return 0;
		}
		var_442_bool = var_31_bool == (int)28617;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_690(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527301);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527302, (int)28619, (int)28618);
			return 0;
		}
		var_449_bool = var_31_bool == (int)28619;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_690(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)527303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527304, (int)28543, (int)28620);
			return 0;
		}
		var_456_bool = var_31_bool == (int)28543;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_690(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)527235);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527236, (int)28621, (int)28544);
			return 0;
		}
		var_463_bool = var_31_bool == (int)28621;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_690(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527305);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527306, (int)28623, (int)28622);
			return 0;
		}
		var_470_bool = var_31_bool == (int)28623;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_690(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)527307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527308, (int)28545, (int)28624);
			@@@var_0_object:AddReply((int)527309, (int)28545, (int)28625);
			return 0;
		}
		var_480_bool = var_31_bool == (int)28545;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_690(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527237);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527360, (int)28683, (int)28682);
			@@@var_0_object:AddReply((int)527238, (int)28630, (int)28546);
			return 0;
		}
		var_490_bool = var_31_bool == (int)28630;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_690(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)527313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527314, (int)28685, (int)28631);
			return 0;
		}
		var_497_bool = var_31_bool == (int)28683;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_690(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)527361);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527362, (int)28685, (int)28684);
			return 0;
		}
		var_504_bool = var_31_bool == (int)28685;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_690(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)527363);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527364, (int)28687, (int)28686);
			return 0;
		}
		var_511_bool = var_31_bool == (int)28687;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_690(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)527365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527366, (int)28689, (int)28688);
			return 0;
		}
		var_518_bool = var_31_bool == (int)28689;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_690(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)527367);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527368, (int)-1, (int)28691);
			@@@var_0_object:AddReply((int)527369, (int)-1, (int)28692);
			return 0;
		}
		var_528_bool = var_31_bool == (int)28604;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_690(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)527290);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527291, (int)28500, (int)28605);
			@@@var_0_object:AddReply((int)527296, (int)28609, (int)28610);
			return 0;
		}
		var_538_bool = var_31_bool == (int)28500;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_690(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)527192);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527294, (int)28609, (int)28608);
			@@@var_0_object:AddReply((int)527297, (int)28609, (int)28612);
			return 0;
		}
		var_548_bool = var_31_bool == (int)28609;
		if(var_548_bool != 0) {
			var_549_string = "";
			func_690(var_32_cvector, "Agression");
			@@@var_0_object:SetMessage((int)527295);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527292, (int)28607, (int)28606);
			@@@var_0_object:AddReply((int)527298, (int)-1, (int)28614);
			return 0;
		}
		var_558_bool = var_31_bool == (int)28607;
		if(var_558_bool != 0) {
			var_559_string = "";
			func_690(var_32_cvector, "Agression");
			@@@var_0_object:SetMessage((int)527293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527193, (int)28502, (int)28501);
			return 0;
		}
		var_565_bool = var_31_bool == (int)28502;
		if(var_565_bool != 0) {
			var_566_string = "";
			func_690(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527195, (int)-1, (int)28503);
			return 0;
		}
		var_3_string = true;
		var_571_bool = 0;
		func_3621(var_571_bool);
		if(var_571_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2c9";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3407();
		var_36_bool = var_31_bool == (int)29439;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_1598(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528095);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528096, (int)29441, (int)29440);
			@@@var_0_object:AddReply((int)528105, (int)29450, (int)29449);
			return 0;
		}
		var_62_bool = var_31_bool == (int)29450;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_1598(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528106);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528107, (int)29441, (int)29451);
			return 0;
		}
		var_69_bool = var_31_bool == (int)29441;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_1598(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528097);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528098, (int)29443, (int)29442);
			@@@var_0_object:AddReply((int)528108, (int)-1, (int)29453);
			return 0;
		}
		var_79_bool = var_31_bool == (int)29443;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_1598(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528099);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528100, (int)-1, (int)29444);
			return 0;
		}
		var_3_string = true;
		var_85_bool = 0;
		func_3621(var_85_bool);
		if(var_85_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x655";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3407();
		var_36_bool = var_32_cvector == (int)31266;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3705();
		}
		var_69_bool = var_32_cvector == (int)31267;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_3705();
		}
		var_73_bool = var_32_cvector == (int)31212;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_3744();
		}
		var_79_bool = var_31_bool == (int)31174;
		if(var_79_bool != 0) {
			var_80_bool = 0; var_81_object = Obj();
			var_81_object = var_1_object;
			func_3857(var_81_object);
			if(var_80_bool != 0) {
				var_88_string = "";
				func_1890(var_32_cvector, "Doubt");
				@@@var_0_object:SetMessage((int)529720);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)529743, (int)31200, (int)31198);
				@@@var_0_object:AddReply((int)529744, (int)31206, (int)31199);
				return 0;
			}
			var_112_string = "";
			func_1890(var_32_cvector, "Agression");
			@@@var_0_object:SetMessage((int)529758);
			@@@var_0_object:ClearReplies();
			var_114_bool = 0; var_115_object = Obj();
			var_115_object = var_1_object;
			func_3945(var_115_object);
			if(var_114_bool != 0) {
				@@@var_0_object:AddReply((int)529756, (int)31213, (int)31212);
			}
			@@@var_0_object:AddReply((int)529759, (int)-1, (int)31215);
			return 0;
		}
		var_127_bool = var_31_bool == (int)31213;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_1890(var_32_cvector, "Agression");
			@@@var_0_object:SetMessage((int)529757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529760, (int)31217, (int)31216);
			return 0;
		}
		var_134_bool = var_31_bool == (int)31217;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_1890(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529762, (int)31219, (int)31218);
			return 0;
		}
		var_141_bool = var_31_bool == (int)31219;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_1890(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)529763);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529764, (int)31221, (int)31220);
			return 0;
		}
		var_148_bool = var_31_bool == (int)31221;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_1890(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529765);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529766, (int)-1, (int)31222);
			@@@var_0_object:AddReply((int)529767, (int)-1, (int)31223);
			return 0;
		}
		var_158_bool = var_31_bool == (int)31200;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_1890(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529745);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529749, (int)31205, (int)31204);
			return 0;
		}
		var_165_bool = var_31_bool == (int)31205;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_1890(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529746, (int)31202, (int)31201);
			return 0;
		}
		var_172_bool = var_31_bool == (int)31202;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_1890(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529747);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529748, (int)31206, (int)31203);
			return 0;
		}
		var_179_bool = var_31_bool == (int)31206;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_1890(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)529751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529752, (int)31209, (int)31208);
			return 0;
		}
		var_186_bool = var_31_bool == (int)31209;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_1890(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)529753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541110, (int)43225, (int)43224);
			return 0;
		}
		var_193_bool = var_31_bool == (int)43225;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_1890(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)541111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529754, (int)31211, (int)31210);
			return 0;
		}
		var_200_bool = var_31_bool == (int)31211;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_1890(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529755);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529807, (int)-1, (int)31266);
			@@@var_0_object:AddReply((int)529808, (int)-1, (int)31267);
			return 0;
		}
		var_3_string = true;
		var_209_bool = 0;
		func_3621(var_209_bool);
		if(var_209_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x779";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3407();
		var_36_bool = var_32_cvector == (int)45364;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3750();
		}
		var_42_bool = var_31_bool == (int)41191;
		if(var_42_bool != 0) {
			var_43_bool = 0; var_44_object = Obj();
			var_44_object = var_1_object;
			func_3777(var_43_bool, var_44_object);
			var_54_bool = var_43_bool == 0; //@nz
			if(var_54_bool != 0) {
				var_55_string = "";
				func_2386(var_32_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)539248);
				@@@var_0_object:ClearReplies();
				var_73_bool = 0; var_74_object = Obj();
				var_74_object = var_1_object;
				func_3957(var_74_object);
				if(var_73_bool != 0) {
					@@@var_0_object:AddReply((int)542928, (int)45365, (int)45364);
				}
				@@@var_0_object:AddReply((int)539249, (int)-1, (int)41192);
				return 0;
			}
			var_87_string = "";
			func_2386(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539251, (int)-1, (int)41194);
			@@@var_0_object:AddReply((int)541515, (int)-1, (int)43678);
			return 0;
		}
		var_96_bool = var_31_bool == (int)45365;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_2386(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)542929);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542930, (int)45368, (int)45366);
			@@@var_0_object:AddReply((int)542931, (int)45369, (int)45367);
			return 0;
		}
		var_106_bool = var_31_bool == (int)45369;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_2386(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)542933);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542934, (int)45371, (int)45370);
			@@@var_0_object:AddReply((int)542937, (int)45368, (int)45373);
			return 0;
		}
		var_116_bool = var_31_bool == (int)45371;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_2386(var_32_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)542935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542936, (int)45375, (int)45372);
			@@@var_0_object:AddReply((int)542941, (int)45368, (int)45378);
			return 0;
		}
		var_126_bool = var_31_bool == (int)45375;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_2386(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542939, (int)-1, (int)45376);
			@@@var_0_object:AddReply((int)542942, (int)45368, (int)45380);
			return 0;
		}
		var_136_bool = var_31_bool == (int)45368;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_2386(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)542932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542940, (int)-1, (int)45377);
			@@@var_0_object:AddReply((int)542943, (int)-1, (int)45382);
			return 0;
		}
		var_3_string = true;
		var_145_bool = 0;
		func_3621(var_145_bool);
		if(var_145_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x969";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_3407();
		var_36_bool = var_31_int == (int)42554;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2743(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_3621(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xace";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_2876();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_3131(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_2845(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_2825(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_3414(Obj());
				var_77_object = var_76_object;
				func_3281(var_75_bool, var_76_object);
			}
		} else {
			func_2840(var_31_int);
			func_2867();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_3058();
	func_2876();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_2876();
	var_32_string = "";
	func_3361("Neutral");
	func_2867();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_2867();
	} else {
		var_38_string = "";
		func_3361("Neutral");
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
		func_3058();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_3122(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_4203(var_49_object);
		var_746_string = "";
		func_3361("Neutral");
		func_2876();
		func_2867();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2811(var_30_cvector);
	return 0;
}


func_0(var_0_object, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0;
	var_0_object = var_285_object;
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0;
	var_285_object = var_296_object;
	func_3136(var_295_bool, var_296_object, (float)70.0);
	var_298_bool = var_295_bool == 0; //@nz
	if(var_298_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	CreateDialog(var_291_object);
	var_299_int = 0;
	func_3615(var_299_int);
	@@var_291_object:SetNPCName(var_299_int);
	var_300_int = 0;
	func_3613(var_300_int);
	@@var_291_object:SetNPCDescription(var_300_int);
	var_301_string = "";
	func_3617(var_301_string);
	@@var_291_object:SetPhoto(var_301_string);
	var_302_string = "";
	func_3619(var_302_string);
	@@var_291_object:SetPhoto2(var_302_string);
	var_303_int = 0;
	func_4143(var_303_int);
	@@var_291_object:SetPlayerName(var_303_int);
	IsOverrideActive(var_292_bool);
	var_304_bool = var_292_bool;
	if(var_304_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	DoDialog(var_291_object);
	var_305_bool = 0; var_306_object = Obj();
	func_3414(Obj());
	var_307_object = var_306_object;
	func_3223(var_305_bool, var_306_object);
	var_308_object = Obj(); var_309_object = Obj();
	var_285_object = var_308_object;
	var_291_object = var_309_object;
	TaskCall(1);
	func_81(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object);
	TaskReturn();
	@@var_291_object:IsDialogEnd(var_294_bool);
	
Label_63:
	var_360_bool = var_294_bool == 0; //@nz
	if(var_360_bool != 0) {
		sync();
		@@var_291_object:IsDialogEnd(var_294_bool);
		goto Label_63;
	}
	var_285_object = Obj();
	func_3205();
	StopDialog(var_291_object);
	@@var_291_object:GetReturnValue((int)-1);
	var_293_int = var_284_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_514(var_0_object, var_1_object, var_2_object, var_3_string, var_466_object, var_467_object)
{
	var_0_object = var_467_object;
	var_1_object = var_466_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_473_string = "";
		func_690(var_467_object, "Neutral");
		@@@var_0_object:SetMessage((int)527190);
		@@@var_0_object:ClearReplies();
		var_482_bool = 0; var_483_object = Obj();
		var_483_object = var_1_object;
		func_3811(var_483_object);
		if(var_482_bool != 0) {
			@@@var_0_object:AddReply((int)527191, (int)28604, (int)28499);
		}
		var_491_bool = 0; var_492_object = Obj();
		var_492_object = var_1_object;
		func_3823(var_492_object);
		if(var_491_bool != 0) {
			@@@var_0_object:AddReply((int)527234, (int)28615, (int)28542);
		}
		var_500_bool = 0;
		var_500_bool = 0;
		var_501_bool = 0; var_502_object = Obj();
		var_502_object = var_1_object;
		func_3847(var_501_bool, var_502_object);
		if(var_501_bool != 0) {
			var_509_bool = 0; var_510_object = Obj();
			var_510_object = var_1_object;
			func_3835(var_510_object);
			if(var_509_bool != 0) {
				var_500_bool = 1;
			}
		}
		if(var_500_bool != 0) {
			@@@var_0_object:AddReply((int)527310, (int)28628, (int)28627);
		}
		var_518_bool = 0;
		var_518_bool = 0;
		var_519_bool = 0;
		var_519_bool = 0;
		var_520_bool = 0; var_521_object = Obj();
		var_521_object = var_1_object;
		func_3869(var_520_bool, var_521_object);
		if(var_520_bool != 0) {
			var_530_bool = 0; var_531_object = Obj();
			var_531_object = var_1_object;
			func_3879(var_530_bool, var_531_object);
			if(var_530_bool != 0) {
				var_519_bool = 1;
			}
		}
		if(var_519_bool != 0) {
			var_544_bool = 0; var_545_object = Obj();
			var_545_object = var_1_object;
			func_3909(var_545_object);
			if(var_544_bool != 0) {
				var_518_bool = 1;
			}
		}
		if(var_518_bool != 0) {
			@@@var_0_object:AddReply((int)539861, (int)41814, (int)41813);
		}
		var_553_bool = 0;
		var_553_bool = 0;
		var_554_bool = 0;
		var_554_bool = 0;
		var_555_bool = 0; var_556_object = Obj();
		var_556_object = var_1_object;
		func_3869(var_555_bool, var_556_object);
		if(var_555_bool != 0) {
			var_557_bool = 0; var_558_object = Obj();
			var_558_object = var_1_object;
			func_3889(var_557_bool, var_558_object);
			if(var_557_bool != 0) {
				var_554_bool = 1;
			}
		}
		if(var_554_bool != 0) {
			var_564_bool = 0; var_565_object = Obj();
			var_565_object = var_1_object;
			func_3921(var_565_object);
			if(var_564_bool != 0) {
				var_553_bool = 1;
			}
		}
		if(var_553_bool != 0) {
			@@@var_0_object:AddReply((int)539864, (int)41817, (int)41816);
		}
		var_573_bool = 0;
		var_573_bool = 0;
		var_574_bool = 0;
		var_574_bool = 0;
		var_575_bool = 0; var_576_object = Obj();
		var_576_object = var_1_object;
		func_3869(var_575_bool, var_576_object);
		if(var_575_bool != 0) {
			var_577_bool = 0; var_578_object = Obj();
			var_578_object = var_1_object;
			func_3899(var_577_bool, var_578_object);
			if(var_577_bool != 0) {
				var_574_bool = 1;
			}
		}
		if(var_574_bool != 0) {
			var_584_bool = 0; var_585_object = Obj();
			var_585_object = var_1_object;
			func_3933(var_585_object);
			if(var_584_bool != 0) {
				var_573_bool = 1;
			}
		}
		if(var_573_bool != 0) {
			@@@var_0_object:AddReply((int)539867, (int)41820, (int)41819);
		}
		@@@var_0_object:AddReply((int)527196, (int)-1, (int)28504);
		goto Label_660;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x206";
	}
Label_660:
	var_596_bool = 0;
	func_3621(var_596_bool);
	if(var_596_bool != 0) {

	Label_664:
		lshWaitForAnimEnd();
		var_597_string = var_3_string;
		if(var_597_string != 0) {
		} else {
			var_598_string = "";
			var_598_string = var_2_object;
			func_3361(var_598_string);
			goto Label_664;
	}
		PlayAnimation("all", "idle");

	Label_679:
		WaitForAnimEnd();
		var_601_string = var_3_string;
		if(var_601_string != 0) {
			goto Label_689;
		}
		PlayAnimation("all", "idle");
		goto Label_679;
	}
	goto Label_689;
	
Label_689:
	return 0;
	
}


func_1540(var_0_object, var_1_object, var_2_object, var_3_string, var_221_object, var_222_object)
{
	var_0_object = var_222_object;
	var_1_object = var_221_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_228_string = "";
		func_1598(var_222_object, "Neutral");
		@@@var_0_object:SetMessage((int)528095);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)528096, (int)29441, (int)29440);
		@@@var_0_object:AddReply((int)528105, (int)29450, (int)29449);
		goto Label_1568;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x608";
	}
Label_1568:
	var_252_bool = 0;
	func_3621(var_252_bool);
	if(var_252_bool != 0) {

	Label_1572:
		lshWaitForAnimEnd();
		var_253_string = var_3_string;
		if(var_253_string != 0) {
		} else {
			var_254_string = "";
			var_254_string = var_2_object;
			func_3361(var_254_string);
			goto Label_1572;
	}
		PlayAnimation("all", "idle");

	Label_1587:
		WaitForAnimEnd();
		var_267_string = var_3_string;
		if(var_267_string != 0) {
			goto Label_1597;
		}
		PlayAnimation("all", "idle");
		goto Label_1587;
	}
	goto Label_1597;
	
Label_1597:
	return 0;
	
}


func_3589(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = "";
	var_59_int = var_56_int;
	if(var_59_int != 0) {
		"idle" = "idle" + var_56_int;
	}
	var_58_string = var_55_string;
	return 2;
}


func_4102(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj();
	GetDiaryRoot(var_55_object);
	var_56_bool = var_55_object == 0; //@nz
	if(var_56_bool != 0) {
		Trace("Can't retrieve diary root");
		var_53_object = 0;
		return 2;
	}
	var_55_object = var_53_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3847(var_501_bool, var_502_object)
{
	var_503_bool = 0; var_504_object = Obj();
	var_502_object = var_504_object;
	func_3980(var_504_object);
	if(var_503_bool != 0) {
		var_501_bool = 1;
		return 0;
	}
	var_501_bool = 0;
	return 0;
}


func_2825(var_56_bool)
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
	func_3122(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1802(var_0_object, var_1_object, var_2_object, var_3_string, var_388_object, var_389_object)
{
	var_0_object = var_389_object;
	var_1_object = var_388_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_395_bool = 0; var_396_object = Obj();
		var_396_object = var_1_object;
		func_3857(var_396_object);
		if(var_395_bool != 0) {
			var_401_string = "";
			func_1890(var_389_object, "Doubt");
			@@@var_0_object:SetMessage((int)529720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529743, (int)31200, (int)31198);
			@@@var_0_object:AddReply((int)529744, (int)31206, (int)31199);
		} else {
				var_424_string = "";
				func_1890(var_389_object, "Agression");
				@@@var_0_object:SetMessage((int)529758);
				@@@var_0_object:ClearReplies();
				var_426_bool = 0; var_427_object = Obj();
				var_427_object = var_1_object;
				func_3945(var_427_object);
				if(var_426_bool != 0) {
					@@@var_0_object:AddReply((int)529756, (int)31213, (int)31212);
				}
				@@@var_0_object:AddReply((int)529759, (int)-1, (int)31215);
				goto Label_1860;
		}
	}
Label_1860:
	var_416_bool = 0;
	func_3621(var_416_bool);
	if(var_416_bool != 0) {

	Label_1864:
		lshWaitForAnimEnd();
		var_417_string = var_3_string;
		if(var_417_string != 0) {
		} else {
			var_418_string = "";
			var_418_string = var_2_object;
			func_3361(var_418_string);
			goto Label_1864;
	}
		PlayAnimation("all", "idle");

	Label_1879:
		WaitForAnimEnd();
		var_421_string = var_3_string;
		if(var_421_string != 0) {
			goto Label_1889;
		}
		PlayAnimation("all", "idle");
		goto Label_1879;

	}
	goto Label_1889;
	
Label_1889:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x70e";


func_3083(var_174_bool, var_175_object, var_176_string, var_177_float, var_178_float, var_179_float)
{
	var_180_float = 0; var_181_float = 0;
	var_182_bool = 0; var_183_object = Obj(); var_184_string = "";
	var_175_object = var_183_object;
	var_176_string = var_184_string;
	func_3071(var_182_bool, var_183_object, var_184_string);
	var_191_bool = var_182_bool == 0; //@nz
	if(var_191_bool != 0) {
		var_174_bool = 0;
		return 2;
	}
	@@var_175_object:GetProperty(var_176_string, var_181_float);
	var_192_float = 0; var_193_float = 0; var_194_float = 0; var_195_float = 0;
	var_193_float = var_181_float + var_177_float;
	var_178_float = var_194_float;
	var_179_float = var_195_float;
	func_3430(var_192_float, var_193_float, var_194_float, var_195_float);
	@@var_175_object:SetProperty(var_176_string, var_192_float);
	var_174_bool = 1;
	return 2;
}


func_3596(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_52_int = 0;
	
Label_3598:
	var_55_string = ""; var_56_int = 0;
	var_52_int = var_56_int;
	func_3589(var_55_string, var_56_int);
	HasAnimation(var_53_bool, "all", var_55_string);
	var_60_bool = var_53_bool == 0; //@nz
	if(var_60_bool != 0) {
	} else {
		var_52_int = var_52_int + (int)1;
		goto Label_3598;
	}
	var_52_int = var_49_int;
	return 4;
	
}


func_3857(var_395_bool)
{
	var_397_int = 0; var_398_string = "";
	func_3441(var_397_int, "k9q01");
	var_400_bool = var_397_int == (int)8;
	if(var_400_bool != 0) {
		var_395_bool = 1;
		return 0;
	}
	var_395_bool = 0;
	return 0;
}


func_4115(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0;
	func_4102(Obj());
	var_53_object = var_50_object;
	@@var_50_object:Find(var_46_int, var_51_object);
	var_58_bool = var_51_object == 0; //@nz
	if(var_58_bool != 0) {
		var_60_int = "Can't find diary parent with id: " + var_46_int;
		Trace(var_60_int);
		var_44_bool = 0;
		return 6;
	}
	@@var_51_object:AddChild(var_45_object);
	SendWorldWndMessage((int)7);
	@@var_45_object:GetCategory(var_52_int);
	SetDiarySection(var_52_int);
	var_44_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2840(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_3613(var_114_int)
{
	var_114_int = 515532;
	return 0;
}


func_3869(var_520_bool, var_521_object)
{
	var_522_bool = 0; var_523_object = Obj();
	var_521_object = var_523_object;
	func_3987(var_523_object);
	if(var_522_bool != 0) {
		var_520_bool = 1;
		return 0;
	}
	var_520_bool = 0;
	return 0;
}


func_3615(var_113_int)
{
	var_113_int = 514840;
	return 0;
}


func_2845(var_39_bool)
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
	func_3063(var_46_float, var_47_object);
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


func_3617(var_115_string)
{
	var_115_string = "ui/NPC_Block.png";
	return 0;
}


func_3105(var_143_object, var_144_string, var_145_int)
{
	var_146_int = 0; var_147_int = 0;
	@@var_143_object:GetProperty(var_144_string, var_147_int);
	var_148_int = var_147_int + var_145_int;
	@@var_143_object:SetProperty(var_144_string, var_148_int);
	return 2;
}


func_3619(var_116_string)
{
	var_116_string = "ui/NPC_Block_b.png";
	return 0;
}


func_3361(var_254_string)
{
	var_255_bool = 0; var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_float = 0; var_260_float = 0;
	lshHasAnimation(var_258_bool, var_254_string);
	var_261_bool = var_258_bool;
	if(var_261_bool != 0) {
		lshGetAnimTimes(var_254_string, var_259_float, var_260_float);
		lshPlayAnimation(var_259_float, var_260_float, (bool)0);
	} else {
		var_264_int = "Can't find lsh animation : " + var_254_string;
		Trace(var_264_int);
	}
	return 6;
	
}


func_3621(var_108_bool)
{
	var_108_bool = 1;
	return 0;
}


func_3623(var_161_object)
{
	var_163_bool = 0; var_164_object = Obj(); var_165_float = 0;
	var_161_object = var_164_object;
	func_3509(var_163_bool, var_164_object, (float)0.05000000074505806);
	return 0;
}


func_3112(var_39_bool, var_40_cvector)
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


func_3879(var_530_bool, var_531_object)
{
	var_532_bool = 0; var_533_object = Obj();
	var_531_object = var_533_object;
	func_3993(var_533_object);
	if(var_532_bool != 0) {
		var_530_bool = 1;
		return 0;
	}
	var_530_bool = 0;
	return 0;
}


func_2604(var_0_object, var_690_int, var_691_object)
{
	var_693_object = Obj(); var_694_bool = 0; var_695_int = 0; var_696_bool = 0; var_697_object = Obj(); var_698_bool = 0; var_699_int = 0; var_700_bool = 0;
	var_0_object = var_691_object;
	var_701_bool = 0; var_702_object = Obj(); var_703_float = 0;
	var_691_object = var_702_object;
	func_3136(var_701_bool, var_702_object, (float)70.0);
	var_704_bool = var_701_bool == 0; //@nz
	if(var_704_bool != 0) {
		var_690_int = -2;
		return 8;
	}
	CreateDialog(var_697_object);
	var_705_int = 0;
	func_3615(var_705_int);
	@@var_697_object:SetNPCName(var_705_int);
	var_706_int = 0;
	func_3613(var_706_int);
	@@var_697_object:SetNPCDescription(var_706_int);
	var_707_string = "";
	func_3617(var_707_string);
	@@var_697_object:SetPhoto(var_707_string);
	var_708_string = "";
	func_3619(var_708_string);
	@@var_697_object:SetPhoto2(var_708_string);
	var_709_int = 0;
	func_4143(var_709_int);
	@@var_697_object:SetPlayerName(var_709_int);
	IsOverrideActive(var_698_bool);
	var_710_bool = var_698_bool;
	if(var_710_bool != 0) {
		var_690_int = -2;
		return 8;
	}
	DoDialog(var_697_object);
	var_711_bool = 0; var_712_object = Obj();
	func_3414(Obj());
	var_713_object = var_712_object;
	func_3223(var_711_bool, var_712_object);
	var_714_object = Obj(); var_715_object = Obj();
	var_691_object = var_714_object;
	var_697_object = var_715_object;
	TaskCall(11);
	func_2685(var_716_object, var_717_object, var_718_string, var_719_bool, var_714_object, var_715_object);
	TaskReturn();
	@@var_697_object:IsDialogEnd(var_700_bool);
	
Label_2667:
	var_744_bool = var_700_bool == 0; //@nz
	if(var_744_bool != 0) {
		sync();
		@@var_697_object:IsDialogEnd(var_700_bool);
		goto Label_2667;
	}
	var_691_object = Obj();
	func_3205();
	StopDialog(var_697_object);
	@@var_697_object:GetReturnValue((int)-1);
	var_699_int = var_690_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3630()
{
	SetVariable("k10q01", (int)3);
	func_4011();
	var_64_bool = 0; var_65_string = ""; var_66_string = "";
	func_3554(var_64_bool, "quest_k10_01", "remove_soldiers");
	var_70_bool = 0; var_71_string = ""; var_72_string = "";
	func_3554(var_70_bool, "quest_k10_01", "init_prison");
	return 0;
}


func_4143(var_117_int)
{
	var_118_int = 0; var_119_int = 0;
	GetVariable("branch", var_119_int);
	var_122_bool = var_119_int == (int)0;
	if(var_122_bool != 0) {
		var_117_int = 1;
		return 2;
	EMIT "GOTO 0x103e";
	}
	var_124_bool = var_119_int == (int)1;
	if(var_124_bool != 0) {
		var_117_int = 2;
		return 2;
	}
	var_117_int = 3;
	return 2;
}


func_3377(var_232_string, var_233_bool)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0;
	lshHasAnimation(var_239_bool, var_232_string);
	var_242_bool = var_239_bool;
	if(var_242_bool != 0) {
		lshGetAnimTimes(var_232_string, var_240_float, var_241_float);
		lshPlayAnimation(var_240_float, var_241_float, var_233_bool);
	} else {
		var_244_int = "Can't find lsh animation : " + var_232_string;
		Trace(var_244_int);
	}
	return 6;
	
}


func_3122(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_3112(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_3889(var_557_bool, var_558_object)
{
	var_559_bool = 0; var_560_object = Obj();
	var_558_object = var_560_object;
	func_3999(var_560_object);
	if(var_559_bool != 0) {
		var_557_bool = 1;
		return 0;
	}
	var_557_bool = 0;
	return 0;
}


func_2867()
{
	var_748_float = 0; var_749_float = 0;
	rand(var_749_float, (int)8, (int)16);
	SetTimer((int)10, var_749_float);
	return 2;
}


func_3131(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
	return 2;
}


func_3899(var_577_bool, var_578_object)
{
	var_579_bool = 0; var_580_object = Obj();
	var_578_object = var_580_object;
	func_4005(var_580_object);
	if(var_579_bool != 0) {
		var_577_bool = 1;
		return 0;
	}
	var_577_bool = 0;
	return 0;
}


func_2876()
{
	KillTimer((int)10);
	return 0;
}


func_1598(var_2_object, var_228_string)
{
	var_229_bool = 0;
	func_3621(var_229_bool);
	var_230_bool = var_229_bool == 0; //@nz
	if(var_230_bool != 0) {
		return 0;
	}
	var_231_bool = var_228_string == var_2_object;
	if(var_231_bool != 0) {
		return 0;
	}
	var_232_string = ""; var_233_bool = 0;
	var_228_string = var_232_string;
	var_235_bool = var_228_string == "";
	if(var_235_bool != 0) {
		var_233_bool = 0;
	} else {
		var_233_bool = 1;
	}
	func_3377(var_232_string, var_233_bool);
	var_2_object = var_228_string;
	return 0;
	
}


func_2811(var_0_object)
{
	var_31_bool = 0;
	func_3131(var_31_bool);
	var_34_bool = var_31_bool == 0; //@nz
	if(var_34_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2820:
	func_2987();
	goto Label_2820;
}
EMIT "Return(); Pop(0)";


func_3136(var_65_bool, var_66_object, var_67_float)
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
	func_3420(var_92_cvector, var_93_cvector);
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
	func_3621(var_108_bool);
	if(var_108_bool != 0) {
	} else {
		HasAnimationTrack(var_85_bool, "head");
		var_110_bool = var_85_bool;
		if(var_110_bool == 0) goto Label_3199;
		LookAsyncCamera("head");
	}
Label_3199:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_65_bool = 1;
	return 18;
	
}


func_3649()
{
	SetVariable("k10q01", (int)5);
	func_4024();
	var_87_bool = 0; var_88_string = ""; var_89_string = "";
	func_3554(var_87_bool, "quest_k10_01", "free_prisoner");
	return 0;
}


func_4160(var_526_int)
{
	var_527_int = 0; var_528_int = 0;
	GetVariable("k2system_danko_day", var_528_int);
	var_528_int = var_526_int;
	return 2;
}


func_3392(var_160_bool, var_161_string)
{
	var_162_bool = 0; var_163_bool = 0;
	var_164_bool = 0;
	func_3621(var_164_bool);
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


func_3575(var_643_int)
{
	var_644_float = 0; var_645_float = 0;
	GetGameTime(var_645_float);
	var_646_int = 0;
	var_645_float = var_646_int;
	var_643_int = var_646_int % (int)24;
	return 2;
}


func_3909(var_544_bool)
{
	var_546_int = 0; var_547_string = "";
	func_3441(var_546_int, "ook11Block1");
	var_549_bool = var_546_int == (int)0;
	if(var_549_bool != 0) {
		var_544_bool = 1;
		return 0;
	}
	var_544_bool = 0;
	return 0;
}


func_4166(var_535_int)
{
	var_536_int = 0; var_537_int = 0; var_538_int = 0; var_539_int = 0;
	func_4160((int)0);
	var_540_int = var_538_int;
	var_542_int = "k2system_danko_state" + var_538_int;
	GetVariable(var_542_int, var_539_int);
	var_539_int = var_535_int;
	return 4;
}


func_3663()
{
	SetVariable("k11q01", (int)2);
	func_4037();
	var_64_bool = 0; var_65_string = ""; var_66_string = "";
	func_3554(var_64_bool, "quest_k11_01", "init_kabak");
	var_70_bool = 0; var_71_string = ""; var_72_string = "";
	func_3554(var_70_bool, "quest_k11_01", "init_gun");
	return 0;
}


func_3407()
{
	var_34_bool = 0;
	func_3621(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_308_object, var_309_object)
{
	var_0_object = var_309_object;
	var_1_object = var_308_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_315_bool = 0; var_316_object = Obj();
		var_316_object = var_1_object;
		func_3787(var_316_object);
		if(var_315_bool != 0) {
			var_323_string = "";
			func_169(var_309_object, "Neutral");
			@@@var_0_object:SetMessage((int)526965);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528076, (int)29419, (int)29418);
		} else {
				var_343_string = "";
				func_169(var_309_object, "Neutral");
				@@@var_0_object:SetMessage((int)526969);
				@@@var_0_object:ClearReplies();
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_1_object;
				func_3799(var_346_object);
				if(var_345_bool != 0) {
					@@@var_0_object:AddReply((int)526978, (int)29424, (int)28270);
				}
				@@@var_0_object:AddReply((int)526970, (int)-1, (int)28262);
				@@@var_0_object:AddReply((int)528088, (int)-1, (int)29431);
				goto Label_139;
		}
	}
Label_139:
	var_335_bool = 0;
	func_3621(var_335_bool);
	if(var_335_bool != 0) {

	Label_143:
		lshWaitForAnimEnd();
		var_336_string = var_3_string;
		if(var_336_string != 0) {
		} else {
			var_337_string = "";
			var_337_string = var_2_object;
			func_3361(var_337_string);
			goto Label_143;
	}
		PlayAnimation("all", "idle");

	Label_158:
		WaitForAnimEnd();
		var_340_string = var_3_string;
		if(var_340_string != 0) {
			goto Label_168;
		}
		PlayAnimation("all", "idle");
		goto Label_158;

	}
	goto Label_168;
	
Label_168:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_4177(var_524_bool)
{
	var_525_int = 0;
	func_3566(var_525_int);
	var_526_int = 0;
	func_4160(var_526_int);
	var_524_bool = var_525_int == var_526_int;
	return 0;
}


func_3921(var_564_bool)
{
	var_566_int = 0; var_567_string = "";
	func_3441(var_566_int, "ook11Block2");
	var_569_bool = var_566_int == (int)0;
	if(var_569_bool != 0) {
		var_564_bool = 1;
		return 0;
	}
	var_564_bool = 0;
	return 0;
}


func_2386(var_2_object, var_651_string)
{
	var_652_bool = 0;
	func_3621(var_652_bool);
	var_653_bool = var_652_bool == 0; //@nz
	if(var_653_bool != 0) {
		return 0;
	}
	var_654_bool = var_651_string == var_2_object;
	if(var_654_bool != 0) {
		return 0;
	}
	var_655_string = ""; var_656_bool = 0;
	var_651_string = var_655_string;
	var_658_bool = var_651_string == "";
	if(var_658_bool != 0) {
		var_656_bool = 0;
	} else {
		var_656_bool = 1;
	}
	func_3377(var_655_string, var_656_bool);
	var_2_object = var_651_string;
	return 0;
	
}


func_3414(var_128_object)
{
	var_129_object = Obj(); var_130_object = Obj();
	self(var_130_object);
	var_130_object = var_128_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4185(var_561_bool)
{
	var_562_int = 0;
	func_4166(var_562_int);
	var_561_bool = var_562_int == (int)2;
	return 0;
}


func_3420(var_92_cvector, var_93_cvector)
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


func_3933(var_584_bool)
{
	var_586_int = 0; var_587_string = "";
	func_3441(var_586_int, "ook11Block3");
	var_589_bool = var_586_int == (int)0;
	if(var_589_bool != 0) {
		var_584_bool = 1;
		return 0;
	}
	var_584_bool = 0;
	return 0;
}


func_4089()
{
	var_39_object = Obj(); var_40_object = Obj();
	CreateDiaryEntry(var_40_object, (int)526, (int)1, (int)529818);
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0;
	var_40_object = var_45_object;
	func_4115(var_44_bool, var_45_object, (int)517);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4191(var_581_bool)
{
	var_582_int = 0;
	func_4166(var_582_int);
	var_581_bool = var_582_int == (int)3;
	return 0;
}


func_3682()
{
	SetVariable("k11q01", (int)9);
	SetVariable("k11q01SoulCount", (int)1);
	func_4050();
	return 0;
}


func_1890(var_2_object, var_401_string)
{
	var_402_bool = 0;
	func_3621(var_402_bool);
	var_403_bool = var_402_bool == 0; //@nz
	if(var_403_bool != 0) {
		return 0;
	}
	var_404_bool = var_401_string == var_2_object;
	if(var_404_bool != 0) {
		return 0;
	}
	var_405_string = ""; var_406_bool = 0;
	var_401_string = var_405_string;
	var_408_bool = var_401_string == "";
	if(var_408_bool != 0) {
		var_406_bool = 0;
	} else {
		var_406_bool = 1;
	}
	func_3377(var_405_string, var_406_bool);
	var_2_object = var_401_string;
	return 0;
	
}


func_4197(var_534_bool)
{
	var_535_int = 0;
	func_4166(var_535_int);
	var_534_bool = var_535_int == (int)0;
	return 0;
}


func_3430(var_192_float, var_193_float, var_194_float, var_195_float)
{
	var_196_bool = var_193_float < var_194_float;
	if(var_196_bool != 0) {
		var_194_float = var_192_float;
		return 0;
	}
	var_197_bool = var_193_float > var_195_float;
	if(var_197_bool != 0) {
		var_195_float = var_192_float;
		return 0;
	}
	var_193_float = var_192_float;
	return 0;
}


func_3945(var_426_bool)
{
	var_428_int = 0; var_429_string = "";
	func_3441(var_428_int, "ook9Block1");
	var_431_bool = var_428_int == (int)0;
	if(var_431_bool != 0) {
		var_426_bool = 1;
		return 0;
	}
	var_426_bool = 0;
	return 0;
}


func_4203(var_49_object)
{
	var_50_int = 0; var_51_int = 0;
	GetVariable("mt_block", var_51_int);
	var_53_bool = var_51_int == 0; //@nz
	if(var_53_bool != 0) {
		var_54_int = 0; var_55_object = Obj();
		var_49_object = var_55_object;
		TaskCall(4);
		func_1459(var_56_object, var_54_int, var_55_object);
		TaskReturn();
		SetVariable("mt_block", (int)1);
	}
	var_281_bool = 0; var_282_int = 0;
	func_3583(var_281_bool, (int)10);
	if(var_281_bool != 0) {
		var_284_int = 0; var_285_object = Obj();
		var_49_object = var_285_object;
		TaskCall(0);
		func_0(var_286_object, var_284_int, var_285_object);
		TaskReturn();
		return 2;
	}
	var_362_bool = 0; var_363_int = 0;
	func_3583(var_362_bool, (int)9);
	if(var_362_bool != 0) {
		var_364_int = 0; var_365_object = Obj();
		var_49_object = var_365_object;
		TaskCall(6);
		func_1721(var_366_object, var_364_int, var_365_object);
		TaskReturn();
		return 2;
	}
	var_440_bool = 0; var_441_int = 0;
	func_3583(var_440_bool, (int)11);
	if(var_440_bool != 0) {
		var_442_int = 0; var_443_object = Obj();
		var_49_object = var_443_object;
		TaskCall(2);
		func_433(var_444_object, var_442_int, var_443_object);
		TaskReturn();
		return 2;
	}
	var_606_bool = 0; var_607_int = 0;
	func_3583(var_606_bool, (int)12);
	if(var_606_bool != 0) {
		var_608_int = 0; var_609_object = Obj();
		var_49_object = var_609_object;
		TaskCall(8);
		func_2216(var_610_object, var_608_int, var_609_object);
		TaskReturn();
		return 2;
	}
	var_690_int = 0; var_691_object = Obj();
	var_49_object = var_691_object;
	TaskCall(10);
	func_2604(var_692_object, var_690_int, var_691_object);
	TaskReturn();
	return 2;
}


func_3583(var_281_bool, var_282_int)
{
	var_283_int = 0;
	func_3566(var_283_int);
	var_281_bool = var_283_int == var_282_int;
	return 0;
}


func_3695()
{
	func_4063();
	var_109_bool = 0; var_110_string = ""; var_111_string = "";
	func_3554(var_109_bool, "quest_k11_01", "completed");
	return 0;
}


func_3441(var_317_int, var_318_string)
{
	var_319_int = 0; var_320_int = 0;
	GetVariable(var_318_string, var_320_int);
	var_320_int = var_317_int;
	return 2;
}


func_3957(var_660_bool)
{
	var_662_int = 0; var_663_string = "";
	func_3441(var_662_int, "ook12Block1");
	var_665_bool = var_662_int == (int)0;
	if(var_665_bool != 0) {
		var_660_bool = 1;
		return 0;
	}
	var_660_bool = 0;
	return 0;
}


func_3446(var_152_int, var_153_int)
{
	var_154_object = Obj(); var_155_object = Obj();
	CreateIntVector(var_155_object);
	@@var_155_object:add(var_152_int);
	@@var_155_object:add(var_153_int);
	SendWorldWndMessage((int)3, var_155_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3705()
{
	func_4089();
	var_62_bool = 0; var_63_string = ""; var_64_string = "";
	func_3554(var_62_bool, "quest_k9_01", "completed");
	return 0;
}


func_2685(var_0_object, var_1_object, var_2_object, var_3_string, var_714_object, var_715_object)
{
	var_0_object = var_715_object;
	var_1_object = var_714_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_721_string = "";
		func_2743(var_715_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_2713;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa81";
	}
Label_2713:
	var_736_bool = 0;
	func_3621(var_736_bool);
	if(var_736_bool != 0) {

	Label_2717:
		lshWaitForAnimEnd();
		var_737_string = var_3_string;
		if(var_737_string != 0) {
		} else {
			var_738_string = "";
			var_738_string = var_2_object;
			func_3361(var_738_string);
			goto Label_2717;
	}
		PlayAnimation("all", "idle");

	Label_2732:
		WaitForAnimEnd();
		var_741_string = var_3_string;
		if(var_741_string != 0) {
			goto Label_2742;
		}
		PlayAnimation("all", "idle");
		goto Label_2732;
	}
	goto Label_2742;
	
Label_2742:
	return 0;
	
}


func_3969(var_641_bool)
{
	var_643_int = 0;
	func_3575(var_643_int);
	var_649_bool = var_643_int >= (int)19;
	if(var_649_bool != 0) {
		var_641_bool = 1;
		return 0;
	}
	var_641_bool = 0;
	return 0;
}


func_3458(var_139_object, var_140_int)
{
	var_141_int = 0; var_142_int = 0;
	var_143_object = Obj(); var_144_string = ""; var_145_int = 0;
	var_139_object = var_143_object;
	var_140_int = var_145_int;
	func_3105(var_143_object, "money", var_145_int);
	var_150_bool = var_140_int > (int)0;
	if(var_150_bool != 0) {
		GetInvItemByName(var_142_int, "Money");
		var_152_int = 0; var_153_int = 0;
		var_142_int = var_152_int;
		var_140_int = var_153_int;
		func_3446(var_152_int, var_153_int);
	}
	return 2;
}


func_3715()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3205()
{
	var_272_bool = 0; var_273_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_275_bool = 0;
	func_3621(var_275_bool);
	if(var_275_bool != 0) {
	} else {
		HasAnimationTrack(var_273_bool, "head");
		var_277_bool = var_273_bool;
		if(var_277_bool == 0) goto Label_3222;
		UnlookAsync("head");
	}
Label_3222:
	return 2;
	
}


func_3721()
{
	func_4076();
	return 0;
}


func_3980(var_503_bool)
{
	var_505_int = 0; var_506_int = 0;
	GetVariable("k11q01SoulCount", var_506_int);
	var_503_bool = var_506_int >= (int)7;
	return 2;
}


func_3726()
{
	SetVariable("ook11Block1", (int)1);
	return 0;
}


func_3987(var_522_bool)
{
	func_4177((bool)0);
	var_524_bool = var_522_bool;
	return 0;
}


func_3732()
{
	SetVariable("ook11Block2", (int)1);
	return 0;
}


func_3477(var_209_object, var_210_object, var_211_int)
{
	var_212_int = 0; var_213_int = 0; var_214_bool = 0; var_215_int = 0; var_216_int = 0; var_217_bool = 0;
	@@var_210_object:GetItemID(var_215_int);
	GetInvItemProperty(var_216_int, var_215_int, "Category");
	@@var_209_object:AddItem(var_217_bool, var_210_object, var_216_int, var_211_int);
	var_219_bool = var_217_bool == 0; //@nz
	if(var_219_bool != 0) {
		@@var_209_object:DropItems(var_210_object, var_211_int);
	} else {
		var_220_int = 0; var_221_int = 0;
		var_215_int = var_220_int;
		var_211_int = var_221_int;
		func_3446(var_220_int, var_221_int);
	}
	return 6;
	
}


func_3223(var_126_bool, var_127_object)
{
	var_131_int = 0; var_132_int = 0; var_133_int = 0; var_134_int = 0;
	GetVariable("voice_common", var_133_int);
	var_136_int = var_133_int;
	if(var_136_int != 0) {
		var_137_bool = 0; var_138_object = Obj();
		var_127_object = var_138_object;
		func_3281(var_137_bool, var_138_object);
		var_167_bool = var_137_bool == 0; //@nz
		if(var_167_bool != 0) {
			var_168_bool = 0; var_169_object = Obj();
			var_127_object = var_169_object;
			func_3318(var_168_bool, var_169_object);
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
		func_3318(var_213_bool, var_214_object);
		var_215_bool = var_213_bool == 0; //@nz
		if(var_215_bool != 0) {
			var_216_bool = 0; var_217_object = Obj();
			var_127_object = var_217_object;
			func_3281(var_216_bool, var_217_object);
			var_218_bool = var_216_bool == 0; //@nz
			if(var_218_bool != 0) {
				var_126_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3279;
	
Label_3279:
	var_126_bool = 1;
	return 4;
	
}


func_3993(var_532_bool)
{
	func_4197((bool)0);
	var_534_bool = var_532_bool;
	return 0;
}


func_3738()
{
	SetVariable("ook11Block3", (int)1);
	return 0;
}


func_3999(var_559_bool)
{
	func_4185((bool)0);
	var_561_bool = var_559_bool;
	return 0;
}


func_3744()
{
	SetVariable("ook9Block1", (int)1);
	return 0;
}


func_4005(var_579_bool)
{
	func_4191((bool)0);
	var_581_bool = var_579_bool;
	return 0;
}


func_3750()
{
	SetVariable("ook12Block1", (int)1);
	return 0;
}


func_2216(var_0_object, var_608_int, var_609_object)
{
	var_611_object = Obj(); var_612_bool = 0; var_613_int = 0; var_614_bool = 0; var_615_object = Obj(); var_616_bool = 0; var_617_int = 0; var_618_bool = 0;
	var_0_object = var_609_object;
	var_619_bool = 0; var_620_object = Obj(); var_621_float = 0;
	var_609_object = var_620_object;
	func_3136(var_619_bool, var_620_object, (float)70.0);
	var_622_bool = var_619_bool == 0; //@nz
	if(var_622_bool != 0) {
		var_608_int = -2;
		return 8;
	}
	CreateDialog(var_615_object);
	var_623_int = 0;
	func_3615(var_623_int);
	@@var_615_object:SetNPCName(var_623_int);
	var_624_int = 0;
	func_3613(var_624_int);
	@@var_615_object:SetNPCDescription(var_624_int);
	var_625_string = "";
	func_3617(var_625_string);
	@@var_615_object:SetPhoto(var_625_string);
	var_626_string = "";
	func_3619(var_626_string);
	@@var_615_object:SetPhoto2(var_626_string);
	var_627_int = 0;
	func_4143(var_627_int);
	@@var_615_object:SetPlayerName(var_627_int);
	IsOverrideActive(var_616_bool);
	var_628_bool = var_616_bool;
	if(var_628_bool != 0) {
		var_608_int = -2;
		return 8;
	}
	DoDialog(var_615_object);
	var_629_bool = 0; var_630_object = Obj();
	func_3414(Obj());
	var_631_object = var_630_object;
	func_3223(var_629_bool, var_630_object);
	var_632_object = Obj(); var_633_object = Obj();
	var_609_object = var_632_object;
	var_615_object = var_633_object;
	TaskCall(9);
	func_2297(var_634_object, var_635_object, var_636_string, var_637_bool, var_632_object, var_633_object);
	TaskReturn();
	@@var_615_object:IsDialogEnd(var_618_bool);
	
Label_2279:
	var_688_bool = var_618_bool == 0; //@nz
	if(var_688_bool != 0) {
		sync();
		@@var_615_object:IsDialogEnd(var_618_bool);
		goto Label_2279;
	}
	var_609_object = Obj();
	func_3205();
	StopDialog(var_615_object);
	@@var_615_object:GetReturnValue((int)-1);
	var_617_int = var_608_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_169(var_2_object, var_323_string)
{
	var_324_bool = 0;
	func_3621(var_324_bool);
	var_325_bool = var_324_bool == 0; //@nz
	if(var_325_bool != 0) {
		return 0;
	}
	var_326_bool = var_323_string == var_2_object;
	if(var_326_bool != 0) {
		return 0;
	}
	var_327_string = ""; var_328_bool = 0;
	var_323_string = var_327_string;
	var_330_bool = var_323_string == "";
	if(var_330_bool != 0) {
		var_328_bool = 0;
	} else {
		var_328_bool = 1;
	}
	func_3377(var_327_string, var_328_bool);
	var_2_object = var_323_string;
	return 0;
	
}


func_3496(var_204_object, var_205_string, var_206_int)
{
	var_207_object = Obj(); var_208_object = Obj();
	CreateInvItem(var_208_object);
	@@var_208_object:SetItemName(var_205_string);
	var_209_object = Obj(); var_210_object = Obj(); var_211_int = 0;
	var_204_object = var_209_object;
	var_208_object = var_210_object;
	var_206_int = var_211_int;
	func_3477(var_209_object, var_210_object, var_211_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2987()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0;
	WaitForAnimEnd();
	var_47_bool = 0;
	func_3131(var_47_bool);
	var_48_bool = var_47_bool == 0; //@nz
	if(var_48_bool != 0) {
		return 12;
	}
	func_3596((int)0);
	var_49_int = var_41_int;
	var_42_int = 0;
	
Label_3001:
	var_62_bool = 0;
	var_62_bool = 0;
	var_64_bool = var_42_int < (int)5;
	if(var_64_bool != 0) {
		var_65_bool = 0;
		func_3131(var_65_bool);
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
				func_3589(var_76_string, var_77_int);
				PlayAnimation("all", var_76_string);
				WaitForAnimEnd(var_46_bool);
				var_78_bool = var_46_bool == 0; //@nz
				if(var_78_bool == 0) goto Label_3042;
				goto Label_3053;
		}
		Label_3042:
			var_69_bool = 0;
			func_3056(var_69_bool);
			var_70_bool = var_69_bool == 0; //@nz
			if(var_70_bool != 0) {
				goto Label_3053;
			}
			ResetAAS();
			var_42_int = var_42_int + (int)1;
			goto Label_3001;

		}
	}
Label_3053:
	ResetAAS();
	return 12;
	
}


func_3756(var_136_object)
{
	Trace("money 5000 is given");
	var_139_object = Obj(); var_140_int = 0;
	var_136_object = var_139_object;
	func_3458(var_139_object, (int)5000);
	return 0;
}


func_4011()
{
	var_41_object = Obj(); var_42_object = Obj();
	CreateDiaryEntry(var_42_object, (int)450, (int)1, (int)527008);
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0;
	var_42_object = var_47_object;
	func_4115(var_46_bool, var_47_object, (int)447);
	return 2;
}
EMIT "Stack[-1] = 0";


func_433(var_0_object, var_442_int, var_443_object)
{
	var_445_object = Obj(); var_446_bool = 0; var_447_int = 0; var_448_bool = 0; var_449_object = Obj(); var_450_bool = 0; var_451_int = 0; var_452_bool = 0;
	var_0_object = var_443_object;
	var_453_bool = 0; var_454_object = Obj(); var_455_float = 0;
	var_443_object = var_454_object;
	func_3136(var_453_bool, var_454_object, (float)70.0);
	var_456_bool = var_453_bool == 0; //@nz
	if(var_456_bool != 0) {
		var_442_int = -2;
		return 8;
	}
	CreateDialog(var_449_object);
	var_457_int = 0;
	func_3615(var_457_int);
	@@var_449_object:SetNPCName(var_457_int);
	var_458_int = 0;
	func_3613(var_458_int);
	@@var_449_object:SetNPCDescription(var_458_int);
	var_459_string = "";
	func_3617(var_459_string);
	@@var_449_object:SetPhoto(var_459_string);
	var_460_string = "";
	func_3619(var_460_string);
	@@var_449_object:SetPhoto2(var_460_string);
	var_461_int = 0;
	func_4143(var_461_int);
	@@var_449_object:SetPlayerName(var_461_int);
	IsOverrideActive(var_450_bool);
	var_462_bool = var_450_bool;
	if(var_462_bool != 0) {
		var_442_int = -2;
		return 8;
	}
	DoDialog(var_449_object);
	var_463_bool = 0; var_464_object = Obj();
	func_3414(Obj());
	var_465_object = var_464_object;
	func_3223(var_463_bool, var_464_object);
	var_466_object = Obj(); var_467_object = Obj();
	var_443_object = var_466_object;
	var_449_object = var_467_object;
	TaskCall(3);
	func_514(var_468_object, var_469_object, var_470_string, var_471_bool, var_466_object, var_467_object);
	TaskReturn();
	@@var_449_object:IsDialogEnd(var_452_bool);
	
Label_496:
	var_604_bool = var_452_bool == 0; //@nz
	if(var_604_bool != 0) {
		sync();
		@@var_449_object:IsDialogEnd(var_452_bool);
		goto Label_496;
	}
	var_443_object = Obj();
	func_3205();
	StopDialog(var_449_object);
	@@var_449_object:GetReturnValue((int)-1);
	var_451_int = var_442_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_690(var_2_object, var_473_string)
{
	var_474_bool = 0;
	func_3621(var_474_bool);
	var_475_bool = var_474_bool == 0; //@nz
	if(var_475_bool != 0) {
		return 0;
	}
	var_476_bool = var_473_string == var_2_object;
	if(var_476_bool != 0) {
		return 0;
	}
	var_477_string = ""; var_478_bool = 0;
	var_473_string = var_477_string;
	var_480_bool = var_473_string == "";
	if(var_480_bool != 0) {
		var_478_bool = 0;
	} else {
		var_478_bool = 1;
	}
	func_3377(var_477_string, var_478_bool);
	var_2_object = var_473_string;
	return 0;
	
}


func_1459(var_0_object, var_54_int, var_55_object)
{
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0;
	var_0_object = var_55_object;
	var_65_bool = 0; var_66_object = Obj(); var_67_float = 0;
	var_55_object = var_66_object;
	func_3136(var_65_bool, var_66_object, (float)70.0);
	var_112_bool = var_65_bool == 0; //@nz
	if(var_112_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	CreateDialog(var_61_object);
	var_113_int = 0;
	func_3615(var_113_int);
	@@var_61_object:SetNPCName(var_113_int);
	var_114_int = 0;
	func_3613(var_114_int);
	@@var_61_object:SetNPCDescription(var_114_int);
	var_115_string = "";
	func_3617(var_115_string);
	@@var_61_object:SetPhoto(var_115_string);
	var_116_string = "";
	func_3619(var_116_string);
	@@var_61_object:SetPhoto2(var_116_string);
	var_117_int = 0;
	func_4143(var_117_int);
	@@var_61_object:SetPlayerName(var_117_int);
	IsOverrideActive(var_62_bool);
	var_125_bool = var_62_bool;
	if(var_125_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	DoDialog(var_61_object);
	var_126_bool = 0; var_127_object = Obj();
	func_3414(Obj());
	var_128_object = var_127_object;
	func_3223(var_126_bool, var_127_object);
	var_221_object = Obj(); var_222_object = Obj();
	var_55_object = var_221_object;
	var_61_object = var_222_object;
	TaskCall(5);
	func_1540(var_223_object, var_224_object, var_225_string, var_226_bool, var_221_object, var_222_object);
	TaskReturn();
	@@var_61_object:IsDialogEnd(var_64_bool);
	
Label_1522:
	var_270_bool = var_64_bool == 0; //@nz
	if(var_270_bool != 0) {
		sync();
		@@var_61_object:IsDialogEnd(var_64_bool);
		goto Label_1522;
	}
	var_55_object = Obj();
	func_3205();
	StopDialog(var_61_object);
	@@var_61_object:GetReturnValue((int)-1);
	var_63_int = var_54_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3509(var_163_bool, var_164_object, var_165_float)
{
	var_166_bool = var_164_object == 0; //@nz
	if(var_166_bool != 0) {
		var_163_bool = 0;
		return 0;
	}
	var_168_bool = var_165_float > (int)0;
	if(var_168_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_199_bool = var_165_float < (int)0;
		if(var_199_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_3530;
		}
		var_163_bool = 0;
		return 0;
	}
Label_3530:
	var_170_float = 0;
	var_165_float = var_170_float;
	func_3544(var_170_float);
	var_174_bool = 0; var_175_object = Obj(); var_176_string = ""; var_177_float = 0; var_178_float = 0; var_179_float = 0;
	var_164_object = var_175_object;
	var_165_float = var_177_float;
	func_3083(var_174_bool, var_175_object, "reputation", var_177_float, (float)0, (float)1);
	var_163_bool = 1;
	return 0;
	
}


func_3766(var_201_object)
{
	Trace("delta_pills is given");
	var_204_object = Obj(); var_205_string = ""; var_206_int = 0;
	var_201_object = var_204_object;
	func_3496(var_204_object, "delta_pills", (int)1);
	return 0;
}


func_2743(var_2_object, var_721_string)
{
	var_722_bool = 0;
	func_3621(var_722_bool);
	var_723_bool = var_722_bool == 0; //@nz
	if(var_723_bool != 0) {
		return 0;
	}
	var_724_bool = var_721_string == var_2_object;
	if(var_724_bool != 0) {
		return 0;
	}
	var_725_string = ""; var_726_bool = 0;
	var_721_string = var_725_string;
	var_728_bool = var_721_string == "";
	if(var_728_bool != 0) {
		var_726_bool = 0;
	} else {
		var_726_bool = 1;
	}
	func_3377(var_725_string, var_726_bool);
	var_2_object = var_721_string;
	return 0;
	
}


func_4024()
{
	var_79_object = Obj(); var_80_object = Obj();
	CreateDiaryEntry(var_80_object, (int)452, (int)1, (int)527010);
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0;
	var_80_object = var_85_object;
	func_4115(var_84_bool, var_85_object, (int)447);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1721(var_0_object, var_364_int, var_365_object)
{
	var_367_object = Obj(); var_368_bool = 0; var_369_int = 0; var_370_bool = 0; var_371_object = Obj(); var_372_bool = 0; var_373_int = 0; var_374_bool = 0;
	var_0_object = var_365_object;
	var_375_bool = 0; var_376_object = Obj(); var_377_float = 0;
	var_365_object = var_376_object;
	func_3136(var_375_bool, var_376_object, (float)70.0);
	var_378_bool = var_375_bool == 0; //@nz
	if(var_378_bool != 0) {
		var_364_int = -2;
		return 8;
	}
	CreateDialog(var_371_object);
	var_379_int = 0;
	func_3615(var_379_int);
	@@var_371_object:SetNPCName(var_379_int);
	var_380_int = 0;
	func_3613(var_380_int);
	@@var_371_object:SetNPCDescription(var_380_int);
	var_381_string = "";
	func_3617(var_381_string);
	@@var_371_object:SetPhoto(var_381_string);
	var_382_string = "";
	func_3619(var_382_string);
	@@var_371_object:SetPhoto2(var_382_string);
	var_383_int = 0;
	func_4143(var_383_int);
	@@var_371_object:SetPlayerName(var_383_int);
	IsOverrideActive(var_372_bool);
	var_384_bool = var_372_bool;
	if(var_384_bool != 0) {
		var_364_int = -2;
		return 8;
	}
	DoDialog(var_371_object);
	var_385_bool = 0; var_386_object = Obj();
	func_3414(Obj());
	var_387_object = var_386_object;
	func_3223(var_385_bool, var_386_object);
	var_388_object = Obj(); var_389_object = Obj();
	var_365_object = var_388_object;
	var_371_object = var_389_object;
	TaskCall(7);
	func_1802(var_390_object, var_391_object, var_392_string, var_393_bool, var_388_object, var_389_object);
	TaskReturn();
	@@var_371_object:IsDialogEnd(var_374_bool);
	
Label_1784:
	var_438_bool = var_374_bool == 0; //@nz
	if(var_438_bool != 0) {
		sync();
		@@var_371_object:IsDialogEnd(var_374_bool);
		goto Label_1784;
	}
	var_365_object = Obj();
	func_3205();
	StopDialog(var_371_object);
	@@var_371_object:GetReturnValue((int)-1);
	var_373_int = var_364_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3777(var_639_bool, var_640_object)
{
	var_641_bool = 0; var_642_object = Obj();
	var_640_object = var_642_object;
	func_3969(var_642_object);
	if(var_641_bool != 0) {
		var_639_bool = 1;
		return 0;
	}
	var_639_bool = 0;
	return 0;
}


func_4037()
{
	var_41_object = Obj(); var_42_object = Obj();
	CreateDiaryEntry(var_42_object, (int)483, (int)1, (int)528050);
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0;
	var_42_object = var_47_object;
	func_4115(var_46_bool, var_47_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3787(var_315_bool)
{
	var_317_int = 0; var_318_string = "";
	func_3441(var_317_int, "k10q01");
	var_322_bool = var_317_int == (int)2;
	if(var_322_bool != 0) {
		var_315_bool = 1;
		return 0;
	}
	var_315_bool = 0;
	return 0;
}


func_3281(var_137_bool, var_138_object)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = "";
	var_144_string = "c";
	var_145_int = 0;
	
Label_3284:
	if((int)1 != 0) {
		var_151_int = var_145_int + (int)1;
		var_152_int = var_144_string + var_151_int;
		@@var_138_object:HasProperty(var_152_int, var_146_bool);
		var_153_bool = var_146_bool == 0; //@nz
		if(var_153_bool != 0) {
		} else {
			var_145_int = var_145_int + (int)1;
			goto Label_3284;
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
	func_3392(var_160_bool, var_161_string);
	var_160_bool = var_137_bool;
	return 10;
	
}


func_4050()
{
	var_85_object = Obj(); var_86_object = Obj();
	CreateDiaryEntry(var_86_object, (int)492, (int)1, (int)528059);
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0;
	var_86_object = var_91_object;
	func_4115(var_90_bool, var_91_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3799(var_345_bool)
{
	var_347_int = 0; var_348_string = "";
	func_3441(var_347_int, "k10q01");
	var_350_bool = var_347_int == (int)4;
	if(var_350_bool != 0) {
		var_345_bool = 1;
		return 0;
	}
	var_345_bool = 0;
	return 0;
}


func_3544(var_170_float)
{
	var_171_object = Obj(); var_172_object = Obj();
	CreateFloatVector(var_172_object);
	@@var_172_object:add(var_170_float);
	SendWorldWndMessage((int)16, var_172_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4063()
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateDiaryEntry(var_102_object, (int)499, (int)1, (int)528066);
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0;
	var_102_object = var_107_object;
	func_4115(var_106_bool, var_107_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3554(var_62_bool, var_63_string, var_64_string)
{
	var_65_object = Obj(); var_66_object = Obj();
	FindActor(var_66_object, var_63_string);
	var_67_bool = var_66_object == 0; //@ne
	if(var_67_bool != 0) {
		var_62_bool = 0;
		return 2;
	}
	Trigger(var_66_object, var_64_string);
	var_62_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3811(var_482_bool)
{
	var_484_int = 0; var_485_string = "";
	func_3441(var_484_int, "k11q01");
	var_487_bool = var_484_int == (int)1;
	if(var_487_bool != 0) {
		var_482_bool = 1;
		return 0;
	}
	var_482_bool = 0;
	return 0;
}


func_4076()
{
	var_128_object = Obj(); var_129_object = Obj();
	CreateDiaryEntry(var_129_object, (int)762, (int)2, (int)539747);
	var_133_bool = 0; var_134_object = Obj(); var_135_int = 0;
	var_129_object = var_134_object;
	func_4115(var_133_bool, var_134_object, (int)757);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3566(var_181_int)
{
	var_182_float = 0; var_183_float = 0;
	GetGameTime(var_183_float);
	var_185_int = 0;
	var_185_int = var_183_float / (int)24;
	var_181_int = (int)1 + var_185_int;
	return 2;
}


func_3823(var_491_bool)
{
	var_493_int = 0; var_494_string = "";
	func_3441(var_493_int, "k11q01");
	var_496_bool = var_493_int == (int)8;
	if(var_496_bool != 0) {
		var_491_bool = 1;
		return 0;
	}
	var_491_bool = 0;
	return 0;
}


func_3056(var_69_bool)
{
	var_69_bool = 1;
	return 0;
}


func_3058()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3318(var_168_bool, var_169_object)
{
	var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = "";
	var_181_int = 0;
	func_3566(var_181_int);
	var_187_int = "d" + var_181_int;
	var_175_string = var_187_int + "m";
	var_176_int = 0;
	
Label_3327:
	if((int)1 != 0) {
		var_191_int = var_176_int + (int)1;
		var_192_int = var_175_string + var_191_int;
		@@var_169_object:HasProperty(var_192_int, var_177_bool);
		var_193_bool = var_177_bool == 0; //@nz
		if(var_193_bool != 0) {
		} else {
			var_176_int = var_176_int + (int)1;
			goto Label_3327;
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
	func_3392(var_200_bool, var_201_string);
	var_200_bool = var_168_bool;
	return 10;
	
}


func_3063(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_2297(var_0_object, var_1_object, var_2_object, var_3_string, var_632_object, var_633_object)
{
	var_0_object = var_633_object;
	var_1_object = var_632_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_639_bool = 0; var_640_object = Obj();
		var_640_object = var_1_object;
		func_3777(var_639_bool, var_640_object);
		var_650_bool = var_639_bool == 0; //@nz
		if(var_650_bool != 0) {
			var_651_string = "";
			func_2386(var_633_object, "Neutral");
			@@@var_0_object:SetMessage((int)539248);
			@@@var_0_object:ClearReplies();
			var_660_bool = 0; var_661_object = Obj();
			var_661_object = var_1_object;
			func_3957(var_661_object);
			if(var_660_bool != 0) {
				@@@var_0_object:AddReply((int)542928, (int)45365, (int)45364);
			}
			@@@var_0_object:AddReply((int)539249, (int)-1, (int)41192);
		} else {
				var_680_string = "";
				func_2386(var_633_object, "Neutral");
				@@@var_0_object:SetMessage((int)539250);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539251, (int)-1, (int)41194);
				@@@var_0_object:AddReply((int)541515, (int)-1, (int)43678);
				goto Label_2356;
		}
	}
Label_2356:
	var_672_bool = 0;
	func_3621(var_672_bool);
	if(var_672_bool != 0) {

	Label_2360:
		lshWaitForAnimEnd();
		var_673_string = var_3_string;
		if(var_673_string != 0) {
		} else {
			var_674_string = "";
			var_674_string = var_2_object;
			func_3361(var_674_string);
			goto Label_2360;
	}
		PlayAnimation("all", "idle");

	Label_2375:
		WaitForAnimEnd();
		var_677_string = var_3_string;
		if(var_677_string != 0) {
			goto Label_2385;
		}
		PlayAnimation("all", "idle");
		goto Label_2375;

	}
	goto Label_2385;
	
Label_2385:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x8fd";


func_3835(var_509_bool)
{
	var_511_int = 0; var_512_string = "";
	func_3441(var_511_int, "k11q01");
	var_514_bool = var_511_int == (int)9;
	if(var_514_bool != 0) {
		var_509_bool = 1;
		return 0;
	}
	var_509_bool = 0;
	return 0;
}


func_3071(var_182_bool, var_183_object, var_184_string)
{
	var_185_bool = 0; var_186_bool = 0;
	var_189_bool = IsFuncExist(var_183_object, "HasProperty", (int)2);
	var_190_bool = var_189_bool == 0; //@nz
	if(var_190_bool != 0) {
		var_182_bool = 0;
		return 2;
	}
	@@var_183_object:HasProperty(var_184_string, var_186_bool);
	var_186_bool = var_182_bool;
	return 2;
}


