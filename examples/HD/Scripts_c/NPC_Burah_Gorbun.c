// @IMPORTS: Hold/0,StopGroup0/0,sync/0,DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,SetTimer/2,MovePoint/3,KillTimer/1,WaitForAnimEnd/1,Rotate/3,IsOverrideActive/1,IsPlayerActor/2,FindActor/2,Stop/0,Sleep/1,HasProperty/2,GetProperty/2,irand/2,HasAnimation/3,CreateDialog/1,DoDialog/1,StopDialog/1,SetTimeEvent/2,SensePlayerOnly/1,GetScene/1,GetHeight/1,CanReachByPF/2,GetAnimationOffset/3,GetPosition/1,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,AddItem/4,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetGameTime/1,RemoveActor/1,TriggerWorld/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,ClearSubContainer/1
// @STRINGS: W:Neutral|W:all|W:idle|W:player|W:ptidle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|A:GetLocator|W:loc|W:walk_stopl|W:walk_stopr|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:pt_|W:cleanup|W:restore|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png|W:playsound|W:giveitem|A:SetReturnValue|W:oob1Gorbun1|W:oob1Gorbun2|W:b1q02|W:health|A:GetProperty|A:SetProperty|W:blood is given|W:b1q02_blood|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:tourniquet|W:bandage|W:branch|W:mt_gorbun
// @GLOBALS: 0:string:,1:bool:,2:object:
// @RUN_OP: 0x594
// @RUN_TASK: 11
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=bool params=1
// @EVENT_11: op=0x27 vars=int
// @TASK_2: vars=bool params=3
// @EVENT_6: op=0x60 vars=
// @EVENT_0: op=0x6d vars=object
// @EVENT_10: op=0x81 vars=object
// @EVENT_7: op=0x95 vars=int
// @TASK_3: vars= params=1
// @EVENT_6: op=0xca vars=
// @EVENT_0: op=0xd6 vars=object
// @TASK_4: vars= params=1
// @EVENT_6: op=0x11f vars=
// @TASK_5: vars=object params=2
// @TASK_6: vars=object,object,string,bool params=2
// @EVENT_11: op=0x26b vars=int,int
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x494 vars=int,int
// @TASK_9: vars=object params=2
// @TASK_10: vars=object,object,string,bool params=2
// @EVENT_11: op=0x55d vars=int,int
// @TASK_11: vars=float,float,int params=0
// @EVENT_6: op=0x629 vars=
// @EVENT_0: op=0x632 vars=object
// @STANDALONE_EVENT_26: op=0x7bf vars=string
// @STANDALONE_EVENT_6: op=0x7d7 vars=
// @STANDALONE_EVENT_9: op=0x8ad vars=int,float
// @PE: 0xd,0x27,0xca,0x11f,0x128,0x18c,0x255,0x26b,0x444,0x47e,0x494,0x508,0x547,0x55d,0x594,0x629,0x6f9,0x743,0x750,0x794,0x7b2,0x7e9,0x7ef,0x7f4,0x7fa,0x81a,0x824,0x830,0x83c,0x8ad

task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_11(var_0_bool, var_1_int, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int)
{
	var_21_bool = 0;
	func_2023(var_21_bool);
	if(var_21_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	var_0_bool = true;
	func_185();
	func_2007();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int)
{
	var_21_bool = 0; var_22_bool = 0;
	IsOverrideActive(var_22_bool);
	var_23_bool = var_22_bool == 0; //@nz
	if(var_23_bool != 0) {
		func_185();
		EventDisable(0);
		var_24_bool = 0; var_25_object = Obj();
		var_20_int = var_25_object;
		func_1625(var_24_bool, var_25_object);
		EventEnable(0);
		var_38_object = Obj();
		var_20_int = var_38_object;
		func_2237(var_21_bool, var_22_bool, var_38_object);
		var_0_bool = false;
	}
	return 2;
}


	task_2_event_10(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int, var_21_object, var_22_object, var_42_object)
	{
	var_43_bool = 0; var_44_bool = 0;
	IsPlayerActor(var_42_object, var_44_bool);
	var_45_bool = var_44_bool;
	if(var_45_bool != 0) {
		func_185();
		var_46_object = Obj();
		var_42_object = var_46_object;
		TaskCall(3);
		func_188(var_46_object);
		TaskReturn();
		var_0_bool = false;
		var_60_int = 20;
		var_61_float = 10.0;
		SetTimer(var_60_int, var_61_float);
	}
	return 2;
	}


task_2_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int)
{
	var_21_object = Obj(); var_22_object = Obj();
	var_24_bool = var_20_int == (int)20;
	if(var_24_bool != 0) {
		var_0_bool = true;
		KillTimer((int)20);
	} else {
		var_27_bool = var_20_int == (int)21;
		if(var_27_bool == 0) goto Label_184;
		var_28_bool = var_0_bool;
		if(var_28_bool == 0) goto Label_184;
		FindActor(var_22_object, "player");
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_object = var_22_object;
		if(var_31_object != 0) {
			var_32_float = 0; var_33_object = Obj();
			var_22_object = var_33_object;
			func_1607(var_32_float, var_33_object);
			var_41_bool = var_32_float <= (float)62500.0;
			if(var_41_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_22_object = Obj();
			func_129();
		}
		var_22_object = 0;
	}
Label_184:
	return 2;
	
}


task_3_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_233();
	func_2007();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int)
{
	var_21_bool = 0; var_22_bool = 0;
	IsOverrideActive(var_22_bool);
	var_23_bool = var_22_bool == 0; //@nz
	if(var_23_bool != 0) {
		func_233();
		EventDisable(0);
		var_24_bool = 0; var_25_object = Obj();
		var_20_int = var_25_object;
		func_1625(var_24_bool, var_25_object);
		EventEnable(0);
		var_38_object = Obj();
		var_20_int = var_38_object;
		func_2237(var_21_bool, var_22_bool, var_38_object);
	}
	return 2;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_2007();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_6_event_11(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_int, var_8_int, var_9_object, var_10_object, var_11_object, var_12_string, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_float, var_20_float, var_21_int)
{
	if((int)1 != 0) {
		func_1821();
		var_25_bool = var_21_int == (int)19051;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_bool;
			var_27_object = var_0_bool;
			func_2048(var_27_object);
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_bool;
			var_81_object = var_0_bool;
			func_2025();
		}
		var_85_bool = var_21_int == (int)19062;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_bool;
			var_87_object = var_0_bool;
			func_2048(var_87_object);
		}
		var_89_bool = var_21_int == (int)43908;
		if(var_89_bool != 0) {
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_bool;
			var_91_object = var_0_bool;
			func_2031(var_91_object);
		}
		var_94_bool = var_21_int == (int)19310;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_bool;
			var_96_object = var_0_bool;
			func_2031(var_96_object);
		}
		var_98_bool = var_20_float == (int)19048;
		if(var_98_bool != 0) {
			var_99_bool = 0;
			var_99_bool = 0;
			var_100_bool = 0;
			var_100_bool = 0;
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_bool;
			func_2074(var_101_bool, var_102_object);
			if(var_101_bool != 0) {
				var_109_bool = 0; var_110_object = Obj();
				var_110_object = var_1_bool;
				func_2084(var_110_object);
				if(var_109_bool != 0) {
					var_100_bool = 1;
				}
			}
			if(var_100_bool != 0) {
				var_117_bool = 0; var_118_object = Obj();
				var_118_object = var_1_bool;
				func_2096(var_118_object);
				if(var_117_bool != 0) {
					var_99_bool = 1;
				}
			}
			if(var_99_bool != 0) {
				var_123_object = Obj(); var_124_object = Obj();
				var_123_object = var_1_bool;
				var_124_object = var_0_bool;
				func_2036();
				var_127_string = "";
				func_597(var_21_int, "Neutral");
				@@@var_0_bool:SetMessage((int)517910);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)520406, (int)21615, (int)21614);
				@@@var_0_bool:AddReply((int)517911, (int)19050, (int)19049);
				return 0;
			}
			var_151_bool = 0;
			var_151_bool = 0;
			var_152_bool = 0;
			var_152_bool = 0;
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_bool;
			func_2074(var_153_bool, var_154_object);
			var_155_bool = var_153_bool == 0; //@nz
			if(var_155_bool != 0) {
				var_156_bool = 0; var_157_object = Obj();
				var_157_object = var_1_bool;
				func_2084(var_157_object);
				if(var_156_bool != 0) {
					var_152_bool = 1;
				}
			}
			if(var_152_bool != 0) {
				var_158_bool = 0; var_159_object = Obj();
				var_159_object = var_1_bool;
				func_2108(var_159_object);
				if(var_158_bool != 0) {
					var_151_bool = 1;
				}
			}
			if(var_151_bool != 0) {
				var_164_object = Obj(); var_165_object = Obj();
				var_164_object = var_1_bool;
				var_165_object = var_0_bool;
				func_2042();
				var_168_string = "";
				func_597(var_21_int, "Neutral");
				@@@var_0_bool:SetMessage((int)517915);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)517916, (int)19055, (int)19054);
				@@@var_0_bool:AddReply((int)520410, (int)21620, (int)21619);
				return 0;
			}
			var_176_bool = 0; var_177_object = Obj();
			var_177_object = var_1_bool;
			func_2084(var_177_object);
			if(var_176_bool != 0) {
				var_178_string = "";
				func_597(var_21_int, "Neutral");
				@@@var_0_bool:SetMessage((int)517919);
				@@@var_0_bool:ClearReplies();
				var_180_bool = 0; var_181_object = Obj();
				var_181_object = var_1_bool;
				func_2074(var_180_bool, var_181_object);
				if(var_180_bool != 0) {
					@@@var_0_bool:AddReply((int)517920, (int)19061, (int)19058);
				}
				var_185_bool = 0; var_186_object = Obj();
				var_186_object = var_1_bool;
				func_2074(var_185_bool, var_186_object);
				var_187_bool = var_185_bool == 0; //@nz
				if(var_187_bool != 0) {
					@@@var_0_bool:AddReply((int)517921, (int)19063, (int)19059);
				}
				@@@var_0_bool:AddReply((int)541718, (int)-1, (int)43908);
				@@@var_0_bool:AddReply((int)517922, (int)-1, (int)19060);
				return 0;
			}
			var_197_string = "";
			func_597(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)517927);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518197, (int)-1, (int)19310);
			@@@var_0_bool:AddReply((int)517928, (int)-1, (int)19066);
			return 0;
		}
		var_206_bool = var_20_float == (int)19063;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_597(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)517925);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517926, (int)-1, (int)19064);
			return 0;
		}
		var_213_bool = var_20_float == (int)19061;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_597(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)517923);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517924, (int)-1, (int)19062);
			return 0;
		}
		var_220_bool = var_20_float == (int)21620;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_597(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520411);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520412, (int)19055, (int)21621);
			return 0;
		}
		var_227_bool = var_20_float == (int)19055;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_597(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)517917);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517918, (int)21618, (int)19056);
			return 0;
		}
		var_234_bool = var_20_float == (int)21618;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_597(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520409);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520413, (int)21624, (int)21623);
			@@@var_0_bool:AddReply((int)520418, (int)-1, (int)21628);
			return 0;
		}
		var_244_bool = var_20_float == (int)21624;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_597(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520414);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520415, (int)21626, (int)21625);
			@@@var_0_bool:AddReply((int)520419, (int)-1, (int)21629);
			return 0;
		}
		var_254_bool = var_20_float == (int)21626;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_597(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520416);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520417, (int)-1, (int)21627);
			return 0;
		}
		var_261_bool = var_20_float == (int)19050;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_597(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)517912);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)517913, (int)-1, (int)19051);
			@@@var_0_bool:AddReply((int)517914, (int)-1, (int)19052);
			return 0;
		}
		var_271_bool = var_20_float == (int)21615;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_597(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520407);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520408, (int)19050, (int)21616);
			return 0;
		}
		var_3_object = true;
		var_277_bool = 0;
		func_2023(var_277_bool);
		if(var_277_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x26c";
	
}


task_8_event_11(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_float, var_20_float, var_21_int)
{
	if((int)1 != 0) {
		func_1821();
		var_25_bool = var_20_float == (int)21937;
		if(var_25_bool != 0) {
			var_26_string = "";
			func_1150(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520726);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520727, (int)-1, (int)21938);
			@@@var_0_bool:AddReply((int)520728, (int)-1, (int)21939);
			return 0;
		}
		var_3_object = true;
		var_50_bool = 0;
		func_2023(var_50_bool);
		if(var_50_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x495";
	
}


task_10_event_11(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int, var_19_float, var_20_float, var_21_int)
{
	if((int)1 != 0) {
		func_1821();
		var_25_bool = var_21_int == (int)43906;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_bool;
			var_27_object = var_0_bool;
			func_2031(var_27_object);
		}
		var_30_bool = var_20_float == (int)43905;
		if(var_30_bool != 0) {
			var_31_string = "";
			func_1351(var_21_int, "Neutral");
			@@@var_0_bool:SetMessage((int)541715);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541716, (int)-1, (int)43906);
			@@@var_0_bool:AddReply((int)541717, (int)-1, (int)43907);
			@@@var_0_bool:AddReply((int)541742, (int)-1, (int)43939);
			return 0;
		}
		var_3_object = true;
		var_58_bool = 0;
		func_2023(var_58_bool);
		if(var_58_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x55e";
	
}


task_11_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_2007();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_11_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsOverrideActive(var_22_bool);
	var_23_bool = var_22_bool == 0; //@nz
	if(var_23_bool != 0) {
		EventDisable(0);
		var_24_bool = 0; var_25_object = Obj();
		var_20_object = var_25_object;
		func_1625(var_24_bool, var_25_object);
		EventEnable(0);
		var_38_object = Obj();
		var_20_object = var_38_object;
		func_2237(var_21_bool, var_22_bool, var_38_object);
	}
	return 2;
}


	event_26(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int, var_20_int, var_21_float, var_24_string)
	{
	var_25_bool = 0; var_26_bool = 0;
	var_27_string = "cleanup";
	var_28_bool = var_24_string == var_27_string;
	if(var_28_bool != 0) {
		var_29_bool = GlobalVars[1];
		var_29_bool = 1;
		GlobalVars[1] = var_29_bool;
		IsLoaded(var_26_bool);
		var_30_bool = var_26_bool == 0; //@nz
		if(var_30_bool != 0) {
			var_31_object = Obj();
			func_1843(var_31_object);
			RemoveActor(var_31_object);
		}
	} else {
		var_34_string = "restore";
		var_35_bool = var_24_string == var_34_string;
		if(var_35_bool == 0) goto Label_2006;
		var_36_bool = GlobalVars[1];
		var_36_bool = 0;
		GlobalVars[1] = var_36_bool;
	}
Label_2006:
	return 2;
	
	}


event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	var_20_bool = GlobalVars[1];
	if(var_20_bool != 0) {
		var_21_object = Obj();
		func_1843(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


event_9(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int, var_20_int, var_21_float)
{
	var_23_bool = var_20_int == (int)0;
	if(var_23_bool != 0) {
		var_24_string = "";
		var_24_string = "cleanup";
		func_1983();
	} else {
		var_38_bool = var_20_int == (int)1;
		if(var_38_bool == 0) goto Label_2236;
		func_2181();
	}
Label_2236:
	return 0;
	
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_2181();
	SetTimeEvent((int)0, (int)144);
	SetTimeEvent((int)1, (int)24);
	SetTimeEvent((int)1, (int)48);
	SetTimeEvent((int)1, (int)72);
	SetTimeEvent((int)1, (int)96);
	SetTimeEvent((int)1, (int)120);
	func_1459(var_17_float, var_18_float, var_19_int);
	return 0;
}


func_0()
{
	
Label_0:
	Hold();
	var_102_bool = 0;
	func_1645(var_102_bool);
	var_103_bool = var_102_bool == 0; //@nz
	if(var_103_bool == 1) goto Label_0;
	return 0;
}


func_2048(var_26_object)
{
	var_28_float = 0; var_29_float = 0;
	SetVariable("b1q02", (int)2);
	func_2127();
	@@var_26_object:GetProperty("health", var_29_float);
	var_29_float = var_29_float - (float)0.30000001192092896;
	@@var_26_object:SetProperty("health", var_29_float);
	Trace("blood is given");
	var_59_object = Obj(); var_60_string = ""; var_61_int = 0;
	var_26_object = var_59_object;
	func_1918(var_59_object, "b1q02_blood", (int)1);
	return 2;
}


func_1018(var_0_bool, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_0_bool = var_44_object;
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0;
	var_44_object = var_55_object;
	func_1650(var_54_bool, var_55_object, (float)100.0);
	var_101_bool = var_54_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	CreateDialog(var_50_object);
	var_102_int = 0;
	func_2017(var_102_int);
	@@var_50_object:SetNPCName(var_102_int);
	var_103_int = 0;
	func_2015(var_103_int);
	@@var_50_object:SetNPCDescription(var_103_int);
	var_104_string = "";
	func_2019(var_104_string);
	@@var_50_object:SetPhoto(var_104_string);
	var_105_string = "";
	func_2021(var_105_string);
	@@var_50_object:SetPhoto2(var_105_string);
	var_106_int = 0;
	func_2204(var_106_int);
	@@var_50_object:SetPlayerName(var_106_int);
	IsOverrideActive(var_51_bool);
	var_114_bool = var_51_bool;
	if(var_114_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	DoDialog(var_50_object);
	var_115_object = Obj(); var_116_object = Obj();
	var_44_object = var_115_object;
	var_50_object = var_116_object;
	TaskCall(8);
	func_1092(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object);
	TaskReturn();
	@@var_50_object:IsDialogEnd(var_53_bool);
	
Label_1074:
	var_164_bool = var_53_bool == 0; //@nz
	if(var_164_bool != 0) {
		sync();
		@@var_50_object:IsDialogEnd(var_53_bool);
		goto Label_1074;
	}
	var_44_object = Obj();
	func_1719();
	StopDialog(var_50_object);
	@@var_50_object:GetReturnValue((int)-1);
	var_52_int = var_43_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2181()
{
	var_20_int = 0; var_21_int = 0;
	ClearSubContainer((int)0);
	func_1931((int)0);
	var_23_int = var_21_int;
	var_29_string = ""; var_30_int = 0; var_31_int = 0; var_32_int = 0;
	func_1828("tourniquet", (int)1, (int)1, (int)5);
	var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0;
	func_1828("bandage", (int)1, (int)1, (int)5);
	return 2;
}


func_1288(var_0_bool, var_1_bool, var_2_object, var_3_object, var_382_object, var_383_object)
{
	var_0_bool = var_383_object;
	var_1_bool = var_382_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_389_string = "";
		func_1351(var_383_object, "Neutral");
		@@@var_0_bool:SetMessage((int)541715);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)541716, (int)-1, (int)43906);
		@@@var_0_bool:AddReply((int)541717, (int)-1, (int)43907);
		@@@var_0_bool:AddReply((int)541742, (int)-1, (int)43939);
		goto Label_1321;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x50c";
	}
Label_1321:
	var_407_bool = 0;
	func_2023(var_407_bool);
	if(var_407_bool != 0) {

	Label_1325:
		lshWaitForAnimEnd();
		var_408_object = var_3_object;
		if(var_408_object != 0) {
		} else {
			var_409_string = "";
			var_409_string = var_2_object;
			func_1790(var_409_string);
			goto Label_1325;
	}
		PlayAnimation("all", "idle");

	Label_1340:
		WaitForAnimEnd();
		var_412_object = var_3_object;
		if(var_412_object != 0) {
			goto Label_1350;
		}
		PlayAnimation("all", "idle");
		goto Label_1340;
	}
	goto Label_1350;
	
Label_1350:
	return 0;
	
}


func_1547()
{
	var_84_string = ""; var_85_string = "";
	GetProperty("loc", var_85_string);
	var_87_string = GlobalVars[0];
	var_85_string = var_87_string;
	GlobalVars[0] = var_87_string;
	return 2;
}


func_396(var_0_bool, var_1_bool, var_2_object, var_3_object, var_205_object, var_206_object)
{
	var_0_bool = var_206_object;
	var_1_bool = var_205_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_212_bool = 0;
		var_212_bool = 0;
		var_213_bool = 0;
		var_213_bool = 0;
		var_214_bool = 0; var_215_object = Obj();
		var_215_object = var_1_bool;
		func_2074(var_214_bool, var_215_object);
		if(var_214_bool != 0) {
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_bool;
			func_2084(var_223_object);
			if(var_222_bool != 0) {
				var_213_bool = 1;
			}
		}
		if(var_213_bool != 0) {
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_bool;
			func_2096(var_231_object);
			if(var_230_bool != 0) {
				var_212_bool = 1;
			}
		}
		if(var_212_bool != 0) {
			var_236_object = Obj(); var_237_object = Obj();
			var_236_object = var_1_bool;
			var_237_object = var_0_bool;
			func_2036();
			var_240_string = "";
			func_597(var_206_object, "Neutral");
			@@@var_0_bool:SetMessage((int)517910);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520406, (int)21615, (int)21614);
			@@@var_0_bool:AddReply((int)517911, (int)19050, (int)19049);
		} else {
				var_263_bool = 0;
				var_263_bool = 0;
				var_264_bool = 0;
				var_264_bool = 0;
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_bool;
				func_2074(var_265_bool, var_266_object);
				var_267_bool = var_265_bool == 0; //@nz
				if(var_267_bool != 0) {
					var_268_bool = 0; var_269_object = Obj();
					var_269_object = var_1_bool;
					func_2084(var_269_object);
					if(var_268_bool != 0) {
						var_264_bool = 1;
					}
				}
				if(var_264_bool != 0) {
					var_270_bool = 0; var_271_object = Obj();
					var_271_object = var_1_bool;
					func_2108(var_271_object);
					if(var_270_bool != 0) {
						var_263_bool = 1;
					}
				}
				if(var_263_bool != 0) {
					var_276_object = Obj(); var_277_object = Obj();
					var_276_object = var_1_bool;
					var_277_object = var_0_bool;
					func_2042();
					var_280_string = "";
					func_597(var_206_object, "Neutral");
					@@@var_0_bool:SetMessage((int)517915);
					@@@var_0_bool:ClearReplies();
					@@@var_0_bool:AddReply((int)517916, (int)19055, (int)19054);
					@@@var_0_bool:AddReply((int)520410, (int)21620, (int)21619);
					goto Label_567;
				}
				var_288_bool = 0; var_289_object = Obj();
				var_289_object = var_1_bool;
				func_2084(var_289_object);
				if(var_288_bool != 0) {
					var_290_string = "";
					func_597(var_206_object, "Neutral");
					@@@var_0_bool:SetMessage((int)517919);
					@@@var_0_bool:ClearReplies();
					var_292_bool = 0; var_293_object = Obj();
					var_293_object = var_1_bool;
					func_2074(var_292_bool, var_293_object);
					if(var_292_bool != 0) {
						@@@var_0_bool:AddReply((int)517920, (int)19061, (int)19058);
					}
					var_297_bool = 0; var_298_object = Obj();
					var_298_object = var_1_bool;
					func_2074(var_297_bool, var_298_object);
					var_299_bool = var_297_bool == 0; //@nz
					if(var_299_bool != 0) {
						@@@var_0_bool:AddReply((int)517921, (int)19063, (int)19059);
					}
					@@@var_0_bool:AddReply((int)541718, (int)-1, (int)43908);
					@@@var_0_bool:AddReply((int)517922, (int)-1, (int)19060);
					goto Label_567;
				}
				var_309_string = "";
				func_597(var_206_object, "Neutral");
				@@@var_0_bool:SetMessage((int)517927);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)518197, (int)-1, (int)19310);
				@@@var_0_bool:AddReply((int)517928, (int)-1, (int)19066);
				goto Label_567;
		}
	}
Label_567:
	var_255_bool = 0;
	func_2023(var_255_bool);
	if(var_255_bool != 0) {

	Label_571:
		lshWaitForAnimEnd();
		var_256_object = var_3_object;
		if(var_256_object != 0) {
		} else {
			var_257_string = "";
			var_257_string = var_2_object;
			func_1790(var_257_string);
			goto Label_571;
	}
		PlayAnimation("all", "idle");

	Label_586:
		WaitForAnimEnd();
		var_260_object = var_3_object;
		if(var_260_object != 0) {
			goto Label_596;
		}
		PlayAnimation("all", "idle");
		goto Label_586;

	}
	goto Label_596;
	
Label_596:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x190";


func_1931(var_23_int)
{
	var_24_float = 0; var_25_float = 0;
	GetGameTime(var_25_float);
	var_27_int = 0;
	var_27_int = var_25_float / (int)24;
	var_23_int = (int)1 + var_27_int;
	return 2;
}


func_1806(var_126_string, var_127_bool)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0;
	lshHasAnimation(var_133_bool, var_126_string);
	var_136_bool = var_133_bool;
	if(var_136_bool != 0) {
		lshGetAnimTimes(var_126_string, var_134_float, var_135_float);
		lshPlayAnimation(var_134_float, var_135_float, var_127_bool);
	} else {
		var_138_int = "Can't find lsh animation : " + var_126_string;
		Trace(var_138_int);
	}
	return 6;
	
}


func_13(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_17:
	var_353_bool = 0;
	func_2023(var_353_bool);
	if(var_353_bool != 0) {
		var_354_string = "";
		func_1790("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_355_bool = var_0_bool;
	if(var_355_bool != 0) {
		goto Label_17;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_1555(var_0_bool, var_1_bool)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0);
	GetAnimationOffset(var_106_cvector, "all", "walk_stopl");
	GetAnimationOffset(var_107_cvector, "all", "walk_stopr");
	var_112_float = GetByIndex(var_106_cvector, 2);
	var_113_float = GetByIndex(var_107_cvector, 2);
	var_114_int = var_112_float + var_113_float;
	var_0_bool = var_114_int / (float)2.0;
	var_116_float = 0; var_117_float = 0;
	var_118_float = GetByIndex(var_106_cvector, 2);
	var_117_float = var_118_float - var_0_bool;
	func_1859(var_116_float, var_117_float);
	var_1_bool = var_116_float + (int)40;
	return 4;
}


func_1940(var_175_bool, var_176_int)
{
	var_177_int = 0;
	func_1931(var_177_int);
	var_175_bool = var_177_int == var_176_int;
	return 0;
}


func_2074(var_214_bool, var_215_object)
{
	var_216_bool = 0; var_217_object = Obj();
	var_215_object = var_217_object;
	func_2120(var_216_bool, var_217_object);
	if(var_216_bool != 0) {
		var_214_bool = 1;
		return 0;
	}
	var_214_bool = 0;
	return 0;
}


func_1946(var_212_string, var_213_int)
{
	var_214_string = ""; var_215_string = "";
	var_216_int = var_213_int;
	if(var_216_int != 0) {
		"idle" = "idle" + var_213_int;
	}
	var_215_string = var_212_string;
	return 2;
}


func_2204(var_106_int)
{
	var_107_int = 0; var_108_int = 0;
	GetVariable("branch", var_108_int);
	var_111_bool = var_108_int == (int)0;
	if(var_111_bool != 0) {
		var_106_int = 1;
		return 2;
	EMIT "GOTO 0x8ab";
	}
	var_113_bool = var_108_int == (int)1;
	if(var_113_bool != 0) {
		var_106_int = 2;
		return 2;
	}
	var_106_int = 3;
	return 2;
}


func_1821()
{
	var_23_bool = 0;
	func_2023(var_23_bool);
	if(var_23_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1150(var_2_object, var_122_string)
{
	var_123_bool = 0;
	func_2023(var_123_bool);
	var_124_bool = var_123_bool == 0; //@nz
	if(var_124_bool != 0) {
		return 0;
	}
	var_125_bool = var_122_string == var_2_object;
	if(var_125_bool != 0) {
		return 0;
	}
	var_126_string = ""; var_127_bool = 0;
	var_122_string = var_126_string;
	var_129_bool = var_122_string == "";
	if(var_129_bool != 0) {
		var_127_bool = 0;
	} else {
		var_127_bool = 1;
	}
	func_1806(var_126_string, var_127_bool);
	var_2_object = var_122_string;
	return 0;
	
}


func_1953(var_206_int)
{
	var_207_int = 0; var_208_bool = 0; var_209_int = 0; var_210_bool = 0;
	var_209_int = 0;
	
Label_1955:
	var_212_string = ""; var_213_int = 0;
	var_209_int = var_213_int;
	func_1946(var_212_string, var_213_int);
	HasAnimation(var_210_bool, "all", var_212_string);
	var_217_bool = var_210_bool == 0; //@nz
	if(var_217_bool != 0) {
	} else {
		var_209_int = var_209_int + (int)1;
		goto Label_1955;
	}
	var_209_int = var_206_int;
	return 4;
	
}


func_2084(var_222_bool)
{
	var_224_int = 0; var_225_string = "";
	func_1882(var_224_int, "b1q02");
	var_229_bool = var_224_int == (int)1;
	if(var_229_bool != 0) {
		var_222_bool = 1;
		return 0;
	}
	var_222_bool = 0;
	return 0;
}


func_1828(var_29_string, var_30_int, var_31_int, var_32_int)
{
	var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_37_bool = 0; var_38_int = 0; var_39_int = 0;
	var_30_int = var_38_int;
	var_31_int = var_39_int;
	func_1867(var_37_bool, var_38_int, var_39_int);
	if(var_37_bool != 0) {
		irand(var_35_int, var_32_int);
		var_44_int = var_35_int + (int)1;
		AddItem(var_36_bool, var_29_string, (int)0, var_44_int);
	}
	return 4;
}


func_296(var_195_string, var_196_string, var_197_int)
{
	var_199_bool = var_197_int == (int)0;
	if(var_199_bool != 0) {
		var_196_string = var_195_string;
	} else {
		var_195_string = var_196_string + var_197_int;
	}
	return 0;
	
}


func_304(var_188_int, var_189_string)
{
	var_190_int = 0; var_191_bool = 0; var_192_int = 0; var_193_bool = 0;
	var_192_int = 0;
	
Label_306:
	var_195_string = ""; var_196_string = ""; var_197_int = 0;
	var_189_string = var_196_string;
	var_192_int = var_197_int;
	func_296(var_195_string, var_196_string, var_197_int);
	HasAnimation(var_193_bool, "all", var_195_string);
	var_200_bool = var_193_bool == 0; //@nz
	if(var_200_bool != 0) {
	} else {
		var_192_int = var_192_int + (int)1;
		goto Label_306;
	}
	var_192_int = var_188_int;
	return 4;
	
}


func_2096(var_230_bool)
{
	var_232_int = 0; var_233_string = "";
	func_1882(var_232_int, "oob1Gorbun1");
	var_235_bool = var_232_int == (int)0;
	if(var_235_bool != 0) {
		var_230_bool = 1;
		return 0;
	}
	var_230_bool = 0;
	return 0;
}


func_1970(var_88_string, var_89_int)
{
	var_91_bool = var_89_int == (int)0;
	if(var_91_bool != 0) {
		var_93_string = GlobalVars[0];
		var_88_string = "pt_" + var_93_string;
	} else {
		var_95_string = GlobalVars[0];
		var_96_int = "pt_" + var_95_string;
		var_88_string = var_96_int + var_89_int;
	}
	return 0;
	
}


func_1459(var_0_bool, var_1_bool, var_2_object)
{
	var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_object = Obj(); var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_cvector = CVector(0,0,0);
	SensePlayerOnly((bool)1);
	func_1547();
	GetScene(var_72_object);
	var_2_object = 0;
	
Label_1469:
	var_88_string = ""; var_89_int = 0;
	var_89_int = var_2_object;
	func_1970(var_88_string, var_89_int);
	@@var_72_object:GetLocator(var_88_string, var_73_bool);
	var_97_bool = var_73_bool == 0; //@nz
	if(var_97_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_1469;
	}
	var_98_bool = 0;
	func_1645(var_98_bool);
	var_101_bool = var_98_bool == 0; //@nz
	if(var_101_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1555(var_81_bool, var_82_cvector);
	
Label_1494:
	irand(var_74_int, var_2_object);
	var_122_string = ""; var_123_int = 0;
	var_74_int = var_123_int;
	func_1970(var_122_string, var_123_int);
	@@var_72_object:GetLocator(var_122_string, var_75_bool, var_76_cvector, var_77_cvector);
	var_124_cvector = CVector(0,0,0);
	func_1602(var_124_cvector);
	var_78_cvector = var_76_cvector - var_124_cvector;
	var_127_float = 0; var_128_cvector = CVector(0,0,0);
	var_78_cvector = var_128_cvector;
	func_1872(var_127_float, var_128_cvector);
	var_136_bool = var_127_float > var_1_bool;
	if(var_136_bool != 0) {
		GetHeight(var_79_float);
		var_76_cvector = var_80_cvector;
		var_137_float = GetByIndex(var_80_cvector, 1);
		var_137_float = var_137_float + var_79_float;
		SetByIndex(var_80_cvector, 1) = var_137_float;
		CanReachByPF(var_81_bool, var_80_cvector);
		var_138_bool = var_81_bool;
		if(var_138_bool != 0) {
			var_139_int = var_78_cvector | var_78_cvector;
			var_140_float = sqrt(var_139_int);
			var_141_float = var_0_bool / var_140_float;
			var_142_float = var_78_cvector * var_141_float;
			var_82_cvector = var_76_cvector - var_142_float;
			var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0);
			var_82_cvector = var_144_cvector;
			var_77_cvector = var_145_cvector;
			TaskCall(2);
			func_53(var_146_bool, var_143_bool, var_144_cvector, var_145_cvector);
			TaskReturn();
			if(var_146_bool != 0) {
				var_170_int = 0;
				var_74_int = var_170_int;
				TaskCall(4);
				func_238(var_170_int);
				TaskReturn();
			}
		}
	}
	Sleep((int)1);
	goto Label_1494;
	
}
EMIT "Return(); Pop(22)";
EMIT "Stack[-11] = 0";


func_1843(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	self(var_33_object);
	var_33_object = var_31_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_53(var_0_bool, var_143_bool, var_144_cvector, var_145_cvector)
{
	var_147_bool = 0; var_148_bool = 0;
	var_0_bool = true;
	SetTimer((int)21, (float)0.5);
	
Label_59:
	var_151_bool = 0; var_152_cvector = CVector(0,0,0);
	var_144_cvector = var_152_cvector;
	func_1615(var_151_bool, var_152_cvector);
	var_161_bool = var_151_bool == 0; //@nz
	if(var_161_bool != 0) {
		goto Label_59;
	}
	MovePoint(var_144_cvector, (bool)0, var_148_bool);
	var_163_bool = var_148_bool;
	if(var_163_bool != 0) {
	} else {
		goto Label_59;
	}
	KillTimer((int)20);
	KillTimer((int)21);
	var_0_bool = false;
	WaitForAnimEnd(var_148_bool);
	var_166_bool = var_148_bool == 0; //@nz
	if(var_166_bool != 0) {
		var_143_bool = 0;
		return 2;
	}
	var_167_float = GetByIndex(var_145_cvector, 0);
	var_168_float = GetByIndex(var_145_cvector, 2);
	Rotate(var_167_float, var_168_float, var_148_bool);
	var_169_bool = var_148_bool == 0; //@nz
	if(var_169_bool != 0) {
		var_143_bool = 0;
		return 2;
	}
	var_143_bool = 1;
	return 2;
	
}


func_1918(var_59_object, var_60_string, var_61_int)
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateInvItem(var_63_object);
	@@var_63_object:SetItemName(var_60_string);
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0;
	var_59_object = var_64_object;
	var_63_object = var_65_object;
	var_61_int = var_66_int;
	func_1899(var_64_object, var_65_object, var_66_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1719()
{
	var_166_bool = 0; var_167_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_169_bool = 0;
	func_2023(var_169_bool);
	if(var_169_bool != 0) {
	} else {
		HasAnimationTrack(var_167_bool, "head");
		var_171_bool = var_167_bool;
		if(var_171_bool == 0) goto Label_1736;
		UnlookAsync("head");
	}
Label_1736:
	return 2;
	
}


func_185()
{
	Stop();
	return 0;
}


func_1849(var_81_cvector, var_82_cvector)
{
	var_84_float = 0; var_85_float = 0;
	var_86_int = var_82_cvector | var_82_cvector;
	var_85_float = sqrt(var_86_int);
	var_87_float = 9.999999974752427e-07;
	var_88_bool = var_85_float < var_87_float;
	if(var_88_bool != 0) {
		var_81_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_81_cvector = var_82_cvector / var_85_float;
	return 2;
}


func_188(var_46_object)
{
	var_47_bool = 0; var_48_bool = 0;
	WaitForAnimEnd(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 2;
	}
	var_50_object = Obj();
	var_46_object = var_50_object;
	func_1634(var_50_object);
	Sleep((int)6);
	return 2;
}


func_2237(var_38_object, var_186_object, var_363_object)
{
	var_39_int = 0; var_40_int = 0;
	GetVariable("mt_gorbun", var_40_int);
	var_42_bool = var_40_int == 0; //@nz
	if(var_42_bool != 0) {
		var_43_int = 0; var_44_object = Obj();
		var_38_object = var_44_object;
		TaskCall(7);
		func_1018(var_45_object, var_43_int, var_44_object);
		TaskReturn();
		SetVariable("mt_gorbun", (int)1);
	}
	var_175_bool = 0; var_176_int = 0;
	func_1940(var_175_bool, (int)1);
	if(var_175_bool != 0) {
		var_184_int = 0; var_185_object = Obj();
		var_38_object = var_185_object;
		TaskCall(5);
		func_322(var_186_object, var_184_int, var_185_object);
		TaskReturn();
		var_319_bool = (int)1000 == var_186_object;
		if(var_319_bool != 0) {
			var_320_bool = 0; var_321_object = Obj(); var_322_float = 0;
			var_38_object = var_321_object;
			func_1737(var_320_bool, var_321_object, (float)110);
			var_350_bool = var_320_bool == 0; //@nz
			if(var_350_bool != 0) {
				return 2;
			}
			var_351_object = Obj();
			var_38_object = var_351_object;
			TaskCall(1);
			func_13(var_351_object);
			TaskReturn();
			var_38_object = Obj();
			func_1785();
		}
		return 2;
	}
	var_361_int = 0; var_362_object = Obj();
	var_38_object = var_362_object;
	TaskCall(9);
	func_1214(var_363_object, var_361_int, var_362_object);
	TaskReturn();
	var_417_bool = (int)1000 == var_363_object;
	if(var_417_bool != 0) {
		var_418_bool = 0; var_419_object = Obj(); var_420_float = 0;
		var_38_object = var_419_object;
		func_1737(var_418_bool, var_419_object, (float)110);
		var_421_bool = var_418_bool == 0; //@nz
		if(var_421_bool != 0) {
			return 2;
		}
		var_422_object = Obj();
		var_38_object = var_422_object;
		TaskCall(1);
		func_13(var_422_object);
		TaskReturn();
		var_38_object = Obj();
		func_1785();
	}
	return 2;
}


func_2108(var_270_bool)
{
	var_272_int = 0; var_273_string = "";
	func_1882(var_272_int, "oob1Gorbun2");
	var_275_bool = var_272_int == (int)0;
	if(var_275_bool != 0) {
		var_270_bool = 1;
		return 0;
	}
	var_270_bool = 0;
	return 0;
}


func_1214(var_0_bool, var_361_int, var_362_object)
{
	var_364_object = Obj(); var_365_bool = 0; var_366_int = 0; var_367_bool = 0; var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0;
	var_0_bool = var_362_object;
	var_372_bool = 0; var_373_object = Obj(); var_374_float = 0;
	var_362_object = var_373_object;
	func_1650(var_372_bool, var_373_object, (float)100.0);
	var_375_bool = var_372_bool == 0; //@nz
	if(var_375_bool != 0) {
		var_361_int = -2;
		return 8;
	}
	CreateDialog(var_368_object);
	var_376_int = 0;
	func_2017(var_376_int);
	@@var_368_object:SetNPCName(var_376_int);
	var_377_int = 0;
	func_2015(var_377_int);
	@@var_368_object:SetNPCDescription(var_377_int);
	var_378_string = "";
	func_2019(var_378_string);
	@@var_368_object:SetPhoto(var_378_string);
	var_379_string = "";
	func_2021(var_379_string);
	@@var_368_object:SetPhoto2(var_379_string);
	var_380_int = 0;
	func_2204(var_380_int);
	@@var_368_object:SetPlayerName(var_380_int);
	IsOverrideActive(var_369_bool);
	var_381_bool = var_369_bool;
	if(var_381_bool != 0) {
		var_361_int = -2;
		return 8;
	}
	DoDialog(var_368_object);
	var_382_object = Obj(); var_383_object = Obj();
	var_362_object = var_382_object;
	var_368_object = var_383_object;
	TaskCall(10);
	func_1288(var_384_object, var_385_object, var_386_string, var_387_bool, var_382_object, var_383_object);
	TaskReturn();
	@@var_368_object:IsDialogEnd(var_371_bool);
	
Label_1270:
	var_415_bool = var_371_bool == 0; //@nz
	if(var_415_bool != 0) {
		sync();
		@@var_368_object:IsDialogEnd(var_371_bool);
		goto Label_1270;
	}
	var_362_object = Obj();
	func_1719();
	StopDialog(var_368_object);
	@@var_368_object:GetReturnValue((int)-1);
	var_370_int = var_361_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1602(var_124_cvector)
{
	var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0);
	GetPosition(var_126_cvector);
	var_126_cvector = var_124_cvector;
	return 2;
}


func_1859(var_116_float, var_117_float)
{
	var_120_bool = var_117_float < (int)0;
	if(var_120_bool != 0) {
		var_116_float = -var_117_float;
	} else {
		var_117_float = var_116_float;
	}
	return 0;
	
}


func_1092(var_0_bool, var_1_bool, var_2_object, var_3_object, var_115_object, var_116_object)
{
	var_0_bool = var_116_object;
	var_1_bool = var_115_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_122_string = "";
		func_1150(var_116_object, "Neutral");
		@@@var_0_bool:SetMessage((int)520726);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520727, (int)-1, (int)21938);
		@@@var_0_bool:AddReply((int)520728, (int)-1, (int)21939);
		goto Label_1120;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x448";
	}
Label_1120:
	var_146_bool = 0;
	func_2023(var_146_bool);
	if(var_146_bool != 0) {

	Label_1124:
		lshWaitForAnimEnd();
		var_147_object = var_3_object;
		if(var_147_object != 0) {
		} else {
			var_148_string = "";
			var_148_string = var_2_object;
			func_1790(var_148_string);
			goto Label_1124;
	}
		PlayAnimation("all", "idle");

	Label_1139:
		WaitForAnimEnd();
		var_161_object = var_3_object;
		if(var_161_object != 0) {
			goto Label_1149;
		}
		PlayAnimation("all", "idle");
		goto Label_1139;
	}
	goto Label_1149;
	
Label_1149:
	return 0;
	
}


func_322(var_0_bool, var_184_int, var_185_object)
{
	var_187_object = Obj(); var_188_bool = 0; var_189_int = 0; var_190_bool = 0; var_191_object = Obj(); var_192_bool = 0; var_193_int = 0; var_194_bool = 0;
	var_0_bool = var_185_object;
	var_195_bool = 0; var_196_object = Obj(); var_197_float = 0;
	var_185_object = var_196_object;
	func_1650(var_195_bool, var_196_object, (float)100.0);
	var_198_bool = var_195_bool == 0; //@nz
	if(var_198_bool != 0) {
		var_184_int = -2;
		return 8;
	}
	CreateDialog(var_191_object);
	var_199_int = 0;
	func_2017(var_199_int);
	@@var_191_object:SetNPCName(var_199_int);
	var_200_int = 0;
	func_2015(var_200_int);
	@@var_191_object:SetNPCDescription(var_200_int);
	var_201_string = "";
	func_2019(var_201_string);
	@@var_191_object:SetPhoto(var_201_string);
	var_202_string = "";
	func_2021(var_202_string);
	@@var_191_object:SetPhoto2(var_202_string);
	var_203_int = 0;
	func_2204(var_203_int);
	@@var_191_object:SetPlayerName(var_203_int);
	IsOverrideActive(var_192_bool);
	var_204_bool = var_192_bool;
	if(var_204_bool != 0) {
		var_184_int = -2;
		return 8;
	}
	DoDialog(var_191_object);
	var_205_object = Obj(); var_206_object = Obj();
	var_185_object = var_205_object;
	var_191_object = var_206_object;
	TaskCall(6);
	func_396(var_207_object, var_208_object, var_209_string, var_210_bool, var_205_object, var_206_object);
	TaskReturn();
	@@var_191_object:IsDialogEnd(var_194_bool);
	
Label_378:
	var_317_bool = var_194_bool == 0; //@nz
	if(var_317_bool != 0) {
		sync();
		@@var_191_object:IsDialogEnd(var_194_bool);
		goto Label_378;
	}
	var_185_object = Obj();
	func_1719();
	StopDialog(var_191_object);
	@@var_191_object:GetReturnValue((int)-1);
	var_193_int = var_184_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1607(var_32_float, var_33_object)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	GetPosition(var_37_cvector);
	@@var_33_object:GetPosition(var_38_cvector);
	var_39_cvector = var_38_cvector - var_37_cvector;
	var_32_float = var_39_cvector | var_39_cvector;
	return 6;
}


func_1351(var_2_object, var_389_string)
{
	var_390_bool = 0;
	func_2023(var_390_bool);
	var_391_bool = var_390_bool == 0; //@nz
	if(var_391_bool != 0) {
		return 0;
	}
	var_392_bool = var_389_string == var_2_object;
	if(var_392_bool != 0) {
		return 0;
	}
	var_393_string = ""; var_394_bool = 0;
	var_389_string = var_393_string;
	var_396_bool = var_389_string == "";
	if(var_396_bool != 0) {
		var_394_bool = 0;
	} else {
		var_394_bool = 1;
	}
	func_1806(var_393_string, var_394_bool);
	var_2_object = var_389_string;
	return 0;
	
}


func_2120(var_216_bool, var_217_object)
{
	var_218_float = 0; var_219_float = 0;
	@@var_217_object:GetProperty("health", var_219_float);
	var_216_bool = var_219_float >= (float)0.4000000059604645;
	return 2;
}


func_1737(var_320_bool, var_321_object, var_322_float)
{
	var_323_float = 0; var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_bool = 0; var_331_float = 0; var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_bool = 0;
	@@var_321_object:GetPosition(var_332_cvector);
	@@var_321_object:GetEyesHeight(var_331_float);
	var_339_float = GetByIndex(var_332_cvector, 1);
	var_339_float = var_339_float + var_331_float;
	SetByIndex(var_332_cvector, 1) = var_339_float;
	GetPosition(var_333_cvector);
	GetEyesHeight(var_331_float);
	var_340_float = GetByIndex(var_333_cvector, 1);
	var_340_float = var_340_float + var_331_float;
	SetByIndex(var_333_cvector, 1) = var_340_float;
	var_334_cvector = var_332_cvector - var_333_cvector;
	var_341_float = GetByIndex(var_334_cvector, 1);
	SetByIndex(var_334_cvector, 1) = (float)0;
	var_342_int = var_334_cvector | var_334_cvector;
	var_343_float = sqrt(var_342_int);
	var_334_cvector = var_334_cvector / var_343_float;
	var_335_cvector = -var_334_cvector;
	var_344_float = var_334_cvector * var_322_float;
	var_336_cvector = var_344_float - CVector(0.0, 10.0, 0.0);
	var_337_cvector = var_333_cvector + var_336_cvector;
	IsOverrideActive(var_338_bool);
	var_346_bool = var_338_bool;
	if(var_346_bool != 0) {
		var_320_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_337_cvector, var_335_cvector, (bool)1);
	var_348_float = GetByIndex(var_336_cvector, 0);
	var_349_float = GetByIndex(var_336_cvector, 2);
	Rotate(var_348_float, var_349_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_320_bool = 1;
	return 16;
}


func_1867(var_37_bool, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_int = 0;
	irand(var_41_int, var_39_int);
	var_37_bool = var_41_int < var_38_int;
	return 2;
}


func_1615(var_151_bool, var_152_cvector)
{
	var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_bool = 0; var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_bool = 0;
	GetPosition(var_156_cvector);
	var_157_cvector = var_152_cvector - var_156_cvector;
	var_159_float = GetByIndex(var_157_cvector, 0);
	var_160_float = GetByIndex(var_157_cvector, 2);
	Rotate(var_159_float, var_160_float, var_158_bool);
	var_158_bool = var_151_bool;
	return 6;
}


func_1872(var_127_float, var_128_cvector)
{
	var_129_float = GetByIndex(var_128_cvector, 0);
	var_130_float = GetByIndex(var_128_cvector, 0);
	var_131_float = var_129_float * var_130_float;
	var_132_float = GetByIndex(var_128_cvector, 2);
	var_133_float = GetByIndex(var_128_cvector, 2);
	var_134_float = var_132_float * var_133_float;
	var_135_int = var_131_float + var_134_float;
	var_127_float = sqrt(var_135_int);
	return 0;
}


func_2127()
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateDiaryEntry(var_33_object, (int)202, (int)2, (int)517942);
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0;
	var_33_object = var_38_object;
	func_2153(var_37_bool, var_38_object, (int)200);
	return 2;
}
EMIT "Stack[-1] = 0";


func_597(var_2_object, var_240_string)
{
	var_241_bool = 0;
	func_2023(var_241_bool);
	var_242_bool = var_241_bool == 0; //@nz
	if(var_242_bool != 0) {
		return 0;
	}
	var_243_bool = var_240_string == var_2_object;
	if(var_243_bool != 0) {
		return 0;
	}
	var_244_string = ""; var_245_bool = 0;
	var_240_string = var_244_string;
	var_247_bool = var_240_string == "";
	if(var_247_bool != 0) {
		var_245_bool = 0;
	} else {
		var_245_bool = 1;
	}
	func_1806(var_244_string, var_245_bool);
	var_2_object = var_240_string;
	return 0;
	
}


func_1625(var_24_bool, var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	@@var_25_object:GetPosition(var_27_cvector);
	var_28_bool = 0; var_29_cvector = CVector(0,0,0);
	var_27_cvector = var_29_cvector;
	func_1615(var_28_bool, var_29_cvector);
	var_28_bool = var_24_bool;
	return 2;
}


func_1882(var_224_int, var_225_string)
{
	var_226_int = 0; var_227_int = 0;
	GetVariable(var_225_string, var_227_int);
	var_227_int = var_224_int;
	return 2;
}


func_2140(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj();
	GetDiaryRoot(var_48_object);
	var_49_bool = var_48_object == 0; //@nz
	if(var_49_bool != 0) {
		Trace("Can't retrieve diary root");
		var_46_object = 0;
		return 2;
	}
	var_48_object = var_46_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2015(var_103_int)
{
	var_103_int = 515594;
	return 0;
}


func_1887(var_75_int, var_76_int)
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateIntVector(var_78_object);
	@@var_78_object:add(var_75_int);
	@@var_78_object:add(var_76_int);
	SendWorldWndMessage((int)3, var_78_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2017(var_102_int)
{
	var_102_int = 512583;
	return 0;
}


func_1634(var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	@@var_50_object:GetPosition(var_54_cvector);
	GetPosition(var_55_cvector);
	var_56_cvector = var_54_cvector - var_55_cvector;
	var_57_float = GetByIndex(var_56_cvector, 0);
	var_58_float = GetByIndex(var_56_cvector, 2);
	RotateAsync(var_57_float, var_58_float);
	return 6;
}


func_2019(var_104_string)
{
	var_104_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_2021(var_105_string)
{
	var_105_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_2023(var_97_bool)
{
	var_97_bool = 0;
	return 0;
}


func_233()
{
	StopGroup0();
	StopAnimation();
	return 0;
}


func_2025()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1899(var_64_object, var_65_object, var_66_int)
{
	var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0;
	@@var_65_object:GetItemID(var_70_int);
	GetInvItemProperty(var_71_int, var_70_int, "Category");
	@@var_64_object:AddItem(var_72_bool, var_65_object, var_71_int, var_66_int);
	var_74_bool = var_72_bool == 0; //@nz
	if(var_74_bool != 0) {
		@@var_64_object:DropItems(var_65_object, var_66_int);
	} else {
		var_75_int = 0; var_76_int = 0;
		var_70_int = var_75_int;
		var_66_int = var_76_int;
		func_1887(var_75_int, var_76_int);
	}
	return 6;
	
}


func_2153(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0;
	func_2140(Obj());
	var_46_object = var_43_object;
	@@var_43_object:Find(var_39_int, var_44_object);
	var_51_bool = var_44_object == 0; //@nz
	if(var_51_bool != 0) {
		var_53_int = "Can't find diary parent with id: " + var_39_int;
		Trace(var_53_int);
		var_37_bool = 0;
		return 6;
	}
	@@var_44_object:AddChild(var_38_object);
	SendWorldWndMessage((int)7);
	@@var_38_object:GetCategory(var_45_int);
	SetDiarySection(var_45_int);
	var_37_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1645(var_98_bool)
{
	var_99_bool = 0; var_100_bool = 0;
	IsLoaded(var_100_bool);
	var_100_bool = var_98_bool;
	return 2;
}


func_238(var_170_int)
{
	var_171_string = ""; var_172_bool = 0; var_173_string = ""; var_174_int = 0; var_175_int = 0; var_176_int = 0; var_177_int = 0; var_178_string = ""; var_179_bool = 0; var_180_string = ""; var_181_int = 0; var_182_int = 0; var_183_int = 0; var_184_int = 0;
	var_185_int = var_170_int;
	if(var_185_int != 0) {
		var_178_string = "ptidle" + var_170_int;
	} else {
			var_178_string = "ptidle";
	}
	HasProperty(var_178_string, var_179_bool);
	var_187_bool = var_179_bool;
	if(var_187_bool != 0) {
		GetProperty(var_178_string, var_180_string);
		var_188_int = 0; var_189_string = "";
		var_180_string = var_189_string;
		func_304(var_188_int, var_189_string);
		var_188_int = var_181_int;
		irand(var_182_int, var_181_int);
		var_203_string = ""; var_204_string = ""; var_205_int = 0;
		var_180_string = var_204_string;
		var_182_int = var_205_int;
		func_296(var_203_string, var_204_string, var_205_int);
		PlayAnimation("all", var_203_string);
		WaitForAnimEnd();
	} else {
		func_1953((int)0);
		var_206_int = var_183_int;
		var_219_int = var_183_int;
		if(var_219_int == 0) goto Label_286;
		irand(var_184_int, var_183_int);
		var_221_string = ""; var_222_int = 0;
		var_184_int = var_222_int;
		func_1946(var_221_string, var_222_int);
		PlayAnimation("all", var_221_string);
		WaitForAnimEnd();

	}
Label_286:
	return 14;
	
}


func_2031(var_27_object)
{
	@@var_27_object:SetReturnValue((int)1000);
	return 0;
}


func_1650(var_54_bool, var_55_object, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0;
	@@var_55_object:GetPosition(var_67_cvector);
	@@var_55_object:GetEyesHeight(var_66_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	var_75_float = var_75_float + var_66_float;
	SetByIndex(var_67_cvector, 1) = var_75_float;
	GetPosition(var_68_cvector);
	GetEyesHeight(var_66_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	var_76_float = var_76_float + var_66_float;
	SetByIndex(var_68_cvector, 1) = var_76_float;
	var_69_cvector = var_67_cvector - var_68_cvector;
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (float)0;
	var_78_int = var_69_cvector | var_69_cvector;
	var_79_float = sqrt(var_78_int);
	var_69_cvector = var_69_cvector / var_79_float;
	var_70_cvector = -var_69_cvector;
	var_80_float = var_69_cvector * var_56_float;
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
	var_82_cvector = var_70_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1849(var_81_cvector, var_82_cvector);
	var_90_float = var_81_cvector * (int)25;
	var_91_int = var_80_float + var_90_float;
	var_71_cvector = var_91_int - CVector(0.0, 10.0, 0.0);
	var_72_cvector = var_68_cvector + var_71_cvector;
	IsOverrideActive(var_73_bool);
	var_93_bool = var_73_bool;
	if(var_93_bool != 0) {
		var_54_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_72_cvector, var_70_cvector, (bool)1);
	var_95_float = GetByIndex(var_71_cvector, 0);
	var_96_float = GetByIndex(var_71_cvector, 2);
	Rotate(var_95_float, var_96_float);
	var_97_bool = 0;
	func_2023(var_97_bool);
	if(var_97_bool != 0) {
	} else {
		HasAnimationTrack(var_74_bool, "head");
		var_99_bool = var_74_bool;
		if(var_99_bool == 0) goto Label_1713;
		LookAsyncCamera("head");
	}
Label_1713:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_54_bool = 1;
	return 18;
	
}


func_2036()
{
	SetVariable("oob1Gorbun1", (int)1);
	return 0;
}


func_1785()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_2042()
{
	SetVariable("oob1Gorbun2", (int)1);
	return 0;
}


func_1790(var_148_string)
{
	var_149_bool = 0; var_150_float = 0; var_151_float = 0; var_152_bool = 0; var_153_float = 0; var_154_float = 0;
	lshHasAnimation(var_152_bool, var_148_string);
	var_155_bool = var_152_bool;
	if(var_155_bool != 0) {
		lshGetAnimTimes(var_148_string, var_153_float, var_154_float);
		lshPlayAnimation(var_153_float, var_154_float, (bool)0);
	} else {
		var_158_int = "Can't find lsh animation : " + var_148_string;
		Trace(var_158_int);
	}
	return 6;
	
}


