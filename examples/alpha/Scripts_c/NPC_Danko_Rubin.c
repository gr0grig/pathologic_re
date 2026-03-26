// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,GetInvItemByName/2,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|W:No|W:ui/NPC_Rubin.png|W:d1q01|W:d1q01EvaAboutMark|A:FindMark|A:Remove|W:d1q01EvaGotoSimon|W:d1q01GrifAboutRubin|W:d1q01MarkAboutJulia|W:d1q01MarkAboutLara|W:d1q01NotkinAboutRubin|W:playsound|W:giveitem|W:d3q01|W:d3q01RubinGotoAlexandr|W:pt_map_alexandr|A:AddMark|W:d3q01RubinGotoAlexandrSelf|W:pt_map_rubin|W:ood3Rubin1|W:ood3Rubin2|W:ood3Rubin3|W:ood3Rubin4|A:ShowMap|W:pt_map_bigvlad|W:d3q01AlexandrGotoOspina|W:d3q01AlexandrGotoOspinaSelf|W:d3q01BigVladAgreed|W:d3q01BigVladAgreedSelf|W:d3q01BigVladGotoGeorg|W:d3q01BigVladGotoGeorgSelf|W:d3q01GeorgAgreed|W:d3q01GeorgAgreedSelf|W:d3q01OspinaButchersWillHelpSelf|W:d3q01OspinaGotoBigVlad|W:d3q01OspinaGotoBigVladSelf|W:quest_d3_01|W:completed|W:d3RubinToldWhereIsSimon|W:KnowRubin|W:ood5Rubin1|W:d5q01|W:d5q01RubinGotoBigVlad|W:d5q01RubinGotoBigVladSelf|W:ood5Rubin2|W:d5q01AlexandrGotoKaterina|W:d5q01BigVladGotoAlexandr|W:d5q01BurahMeeting1|W:d5q01BurahMeeting2|W:d5q01GrifWantsMoney|W:d5q01GrifWillHelp|W:d5q01KaterinaGotoLara|W:d5q01PatrolGotoGrif|W:d5q01_heart|A:RemoveItemByType|W:quest_d5_01|W:d6RubinGoesToGeorg|W:whitevaccine is given|W:white_vaccine|W:d3RubinVisit|W:d5RubinVisit|W:d3q01_blood|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0xdd vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3d7 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9d3 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd62 vars=int,int
// @PE: 0x23,0x29,0x70,0xcd,0xdd,0x2df,0x3c7,0x3d7,0x91d,0x9c3,0x9d3,0xd08,0xd52,0xd62,0xe1b,0xe82,0xee0,0xf09,0xf0f,0xf15,0xf1b,0xf21,0xf31,0xfac,0xfb2,0xfb8,0xfe1,0x1041,0x1047,0x1052,0x1058,0x105e,0x1068,0x1074,0x1080,0x108c,0x1098,0x10a4,0x10b0,0x10bb,0x10c7,0x10d3,0x10df,0x10ea,0x10f6,0x11eb

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
	func_4587(var_21_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_3538(var_21_bool, var_22_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	if((int)1 != 0) {
		func_3633();
		var_25_bool = var_21_bool == (int)10081;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_3735();
		}
		var_93_bool = var_21_bool == (int)10088;
		if(var_93_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_3735();
		}
		var_97_bool = var_20_string == (int)10054;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_4018();
			var_102_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9171, (int)10056, (int)10055);
			@@@var_0_object:AddReply((int)9175, (int)10062, (int)10061);
			@@@var_0_object:AddReply((int)9187, (int)10077, (int)10076);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xcd";
		EMIT "Pop(1)";
		EMIT "Push((int) 5800)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 5801)";
		EMIT "Push((int) 6391)";
		EMIT "Push((int) 6390)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 5819)";
		EMIT "Push((int) 6391)";
		EMIT "Push((int) 6408)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 5820)";
		EMIT "Push((int) 6391)";
		EMIT "Push((int) 6410)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_128_bool = var_20_string == (int)6391;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5802);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5803, (int)6393, (int)6392);
			@@@var_0_object:AddReply((int)5806, (int)6396, (int)6395);
			return 0;
		}
		var_138_bool = var_20_string == (int)6396;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5807);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5808, (int)6398, (int)6397);
			@@@var_0_object:AddReply((int)5818, (int)-1, (int)6407);
			return 0;
		}
		var_148_bool = var_20_string == (int)6398;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5810, (int)6400, (int)6399);
			@@@var_0_object:AddReply((int)5817, (int)-1, (int)6406);
			return 0;
		}
		var_158_bool = var_20_string == (int)6400;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5812, (int)6402, (int)6401);
			@@@var_0_object:AddReply((int)5816, (int)-1, (int)6405);
			return 0;
		}
		var_168_bool = var_20_string == (int)6402;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5813);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5814, (int)-1, (int)6403);
			@@@var_0_object:AddReply((int)5815, (int)-1, (int)6404);
			return 0;
		}
		var_178_bool = var_20_string == (int)6393;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5805, (int)-1, (int)6394);
			return 0;
		}
		var_185_bool = var_20_string == (int)10077;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9189, (int)-1, (int)10078);
			@@@var_0_object:AddReply((int)9190, (int)10080, (int)10079);
			return 0;
		}
		var_195_bool = var_20_string == (int)10080;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9192, (int)-1, (int)10081);
			@@@var_0_object:AddReply((int)9193, (int)10083, (int)10082);
			return 0;
		}
		var_205_bool = var_20_string == (int)10083;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9195, (int)10085, (int)10084);
			@@@var_0_object:AddReply((int)9202, (int)10085, (int)10093);
			return 0;
		}
		var_215_bool = var_20_string == (int)10085;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9197, (int)10087, (int)10086);
			@@@var_0_object:AddReply((int)9200, (int)10087, (int)10089);
			@@@var_0_object:AddReply((int)9201, (int)10087, (int)10091);
			return 0;
		}
		var_228_bool = var_20_string == (int)10087;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9198);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9199, (int)-1, (int)10088);
			return 0;
		}
		var_235_bool = var_20_string == (int)10062;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9176);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9177, (int)10064, (int)10063);
			@@@var_0_object:AddReply((int)9186, (int)-1, (int)10075);
			return 0;
		}
		var_245_bool = var_20_string == (int)10064;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9178);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9179, (int)10066, (int)10065);
			@@@var_0_object:AddReply((int)9185, (int)10066, (int)10073);
			return 0;
		}
		var_255_bool = var_20_string == (int)10066;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9181, (int)10068, (int)10067);
			@@@var_0_object:AddReply((int)9184, (int)10068, (int)10071);
			return 0;
		}
		var_265_bool = var_20_string == (int)10068;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9183, (int)10085, (int)10069);
			return 0;
		}
		var_272_bool = var_20_string == (int)10056;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_205(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9173, (int)10064, (int)10057);
			@@@var_0_object:AddReply((int)9174, (int)10064, (int)10059);
			return 0;
		}
		var_3_string = true;
		var_281_bool = 0;
		func_3733(var_281_bool);
		if(var_281_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xde";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	if((int)1 != 0) {
		func_3633();
		var_25_bool = var_21_bool == (int)9647;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_3849();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_3814();
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_3873(var_90_object);
		}
		var_116_bool = var_21_bool == (int)9649;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_3849();
		}
		var_120_bool = var_21_bool == (int)9639;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_3849();
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_3814();
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_3873(var_126_object);
		}
		var_128_bool = var_21_bool == (int)9594;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_3849();
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_3814();
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_3873(var_134_object);
		}
		var_136_bool = var_21_bool == (int)9963;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_3905();
		}
		var_186_bool = var_21_bool == (int)12332;
		if(var_186_bool != 0) {
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_object;
			func_3814();
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_3873(var_190_object);
		}
		var_192_bool = var_21_bool == (int)9684;
		if(var_192_bool != 0) {
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_object;
			func_3855();
		}
		var_198_bool = var_21_bool == (int)9672;
		if(var_198_bool != 0) {
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_object;
			func_3861();
		}
		var_204_bool = var_21_bool == (int)9678;
		if(var_204_bool != 0) {
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_object;
			func_3861();
		}
		var_208_bool = var_21_bool == (int)9679;
		if(var_208_bool != 0) {
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_3861();
		}
		var_212_bool = var_21_bool == (int)9667;
		if(var_212_bool != 0) {
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_3861();
		}
		var_216_bool = var_21_bool == (int)9644;
		if(var_216_bool != 0) {
			var_217_object = Obj(); var_218_object = Obj();
			var_217_object = var_1_object;
			var_218_object = var_0_object;
			func_3867();
		}
		var_222_bool = var_21_bool == (int)9641;
		if(var_222_bool != 0) {
			var_223_object = Obj(); var_224_object = Obj();
			var_223_object = var_1_object;
			var_224_object = var_0_object;
			func_3867();
		}
		var_226_bool = var_20_string == (int)9574;
		if(var_226_bool != 0) {
			var_227_bool = 0;
			var_227_bool = 0;
			var_228_bool = 0; var_229_object = Obj();
			var_229_object = var_1_object;
			func_4200(var_229_object);
			if(var_228_bool != 0) {
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_4212(var_237_object);
				if(var_236_bool != 0) {
					var_227_bool = 1;
				}
			}
			if(var_227_bool != 0) {
				var_242_object = Obj(); var_243_object = Obj();
				var_242_object = var_1_object;
				var_243_object = var_0_object;
				func_4178();
				var_246_string = "";
				func_967(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)8737);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)8777, (int)9633, (int)9624);
				@@@var_0_object:AddReply((int)8781, (int)9629, (int)9628);
				return 0;
			}
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_4190(var_268_bool, var_269_object);
			if(var_268_bool != 0) {
				var_272_string = "";
				func_967(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)9805);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)9806, (int)10801, (int)10800);
				@@@var_0_object:AddReply((int)9822, (int)10801, (int)10818);
				return 0;
			}
			var_280_bool = 0;
			var_280_bool = 0;
			var_281_bool = 0; var_282_object = Obj();
			var_282_object = var_1_object;
			func_4272(var_281_bool, var_282_object);
			if(var_281_bool != 0) {
				var_290_bool = 0; var_291_object = Obj();
				var_291_object = var_1_object;
				func_4260(var_291_object);
				var_296_bool = var_290_bool == 0; //@nz
				if(var_296_bool != 0) {
					var_280_bool = 1;
				}
			}
			if(var_280_bool != 0) {
				var_297_string = "";
				func_967(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)9078);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)9079, (int)9958, (int)9957);
				return 0;
			}
			var_302_bool = 0; var_303_object = Obj();
			var_303_object = var_1_object;
			func_4190(var_302_bool, var_303_object);
			if(var_302_bool != 0) {
				var_304_string = "";
				func_967(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)8769);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)8770, (int)9621, (int)9617);
				@@@var_0_object:AddReply((int)8771, (int)9619, (int)9618);
				return 0;
			}
			var_312_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8778);
			@@@var_0_object:ClearReplies();
			var_314_bool = 0; var_315_object = Obj();
			var_315_object = var_1_object;
			func_4200(var_315_object);
			if(var_314_bool != 0) {
				@@@var_0_object:AddReply((int)11141, (int)12331, (int)12330);
			}
			var_319_bool = 0; var_320_object = Obj();
			var_320_object = var_1_object;
			func_4224(var_320_object);
			if(var_319_bool != 0) {
				@@@var_0_object:AddReply((int)8779, (int)9681, (int)9626);
			}
			var_328_bool = 0; var_329_object = Obj();
			var_329_object = var_1_object;
			func_4236(var_329_object);
			if(var_328_bool != 0) {
				@@@var_0_object:AddReply((int)8780, (int)9669, (int)9627);
			}
			var_337_bool = 0;
			var_337_bool = 0;
			var_338_bool = 0;
			var_338_bool = 0;
			var_339_bool = 0; var_340_object = Obj();
			var_340_object = var_1_object;
			func_4248(var_340_object);
			if(var_339_bool != 0) {
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_1_object;
				func_4200(var_346_object);
				var_347_bool = var_345_bool == 0; //@nz
				if(var_347_bool != 0) {
					var_338_bool = 1;
				}
			}
			if(var_338_bool != 0) {
				var_348_bool = 0; var_349_object = Obj();
				var_349_object = var_1_object;
				func_4260(var_349_object);
				var_350_bool = var_348_bool == 0; //@nz
				if(var_350_bool != 0) {
					var_337_bool = 1;
				}
			}
			if(var_337_bool != 0) {
				@@@var_0_object:AddReply((int)8802, (int)9651, (int)9650);
			}
			@@@var_0_object:AddReply((int)11140, (int)-1, (int)12329);
			return 0;
		}
		var_358_bool = var_20_string == (int)9651;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8804, (int)9640, (int)9652);
			return 0;
		}
		var_365_bool = var_20_string == (int)9640;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8795, (int)9643, (int)9642);
			@@@var_0_object:AddReply((int)8794, (int)-1, (int)9641);
			return 0;
		}
		var_375_bool = var_20_string == (int)9643;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8796);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8797, (int)-1, (int)9644);
			return 0;
		}
		var_382_bool = var_20_string == (int)9669;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8818);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8819, (int)9666, (int)9670);
			return 0;
		}
		var_389_bool = var_20_string == (int)9666;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8815);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8817, (int)9671, (int)9668);
			@@@var_0_object:AddReply((int)8816, (int)-1, (int)9667);
			return 0;
		}
		var_399_bool = var_20_string == (int)9671;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8821, (int)-1, (int)9672);
			@@@var_0_object:AddReply((int)8822, (int)9674, (int)9673);
			return 0;
		}
		var_409_bool = var_20_string == (int)9674;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8824, (int)9677, (int)9675);
			return 0;
		}
		var_416_bool = var_20_string == (int)9677;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8826);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8827, (int)-1, (int)9678);
			@@@var_0_object:AddReply((int)8828, (int)-1, (int)9679);
			return 0;
		}
		var_426_bool = var_20_string == (int)9681;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8830, (int)9683, (int)9682);
			return 0;
		}
		var_433_bool = var_20_string == (int)9683;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8832, (int)-1, (int)9684);
			return 0;
		}
		var_440_bool = var_20_string == (int)12331;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11142);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11143, (int)-1, (int)12332);
			return 0;
		}
		var_447_bool = var_20_string == (int)9619;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8772);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8773, (int)9621, (int)9620);
			@@@var_0_object:AddReply((int)8814, (int)9621, (int)9663);
			return 0;
		}
		var_457_bool = var_20_string == (int)9621;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8774);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8775, (int)9623, (int)9622);
			@@@var_0_object:AddReply((int)10448, (int)9623, (int)11518);
			return 0;
		}
		var_467_bool = var_20_string == (int)9623;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8776);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8739, (int)9577, (int)9576);
			@@@var_0_object:AddReply((int)8764, (int)9577, (int)9608);
			@@@var_0_object:AddReply((int)8765, (int)9611, (int)9610);
			return 0;
		}
		var_480_bool = var_20_string == (int)9611;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8766);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8767, (int)9587, (int)9612);
			@@@var_0_object:AddReply((int)8768, (int)9587, (int)9614);
			return 0;
		}
		var_490_bool = var_20_string == (int)9577;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8740);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8746, (int)9587, (int)9586);
			@@@var_0_object:AddReply((int)8741, (int)9579, (int)9578);
			return 0;
		}
		var_500_bool = var_20_string == (int)9579;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8742);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8743, (int)9587, (int)9580);
			@@@var_0_object:AddReply((int)8744, (int)9587, (int)9582);
			@@@var_0_object:AddReply((int)8745, (int)9587, (int)9584);
			return 0;
		}
		var_513_bool = var_20_string == (int)9587;
		if(var_513_bool != 0) {
			var_514_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8747);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8748, (int)9589, (int)9588);
			@@@var_0_object:AddReply((int)8762, (int)9589, (int)9604);
			@@@var_0_object:AddReply((int)8763, (int)9589, (int)9606);
			return 0;
		}
		var_526_bool = var_20_string == (int)9589;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8749);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8761, (int)-1, (int)9603);
			return 0;
		}
		var_533_bool = var_20_string == (int)9958;
		if(var_533_bool != 0) {
			var_534_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9080);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9081, (int)11530, (int)9959);
			return 0;
		}
		var_540_bool = var_20_string == (int)11530;
		if(var_540_bool != 0) {
			var_541_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10458, (int)11532, (int)11531);
			return 0;
		}
		var_547_bool = var_20_string == (int)11532;
		if(var_547_bool != 0) {
			var_548_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10460, (int)11534, (int)11533);
			return 0;
		}
		var_554_bool = var_20_string == (int)11534;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10461);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10462, (int)9960, (int)11535);
			return 0;
		}
		var_561_bool = var_20_string == (int)9960;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9082);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9083, (int)9962, (int)9961);
			return 0;
		}
		var_568_bool = var_20_string == (int)9962;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9085, (int)-1, (int)9963);
			return 0;
		}
		var_575_bool = var_20_string == (int)10801;
		if(var_575_bool != 0) {
			var_576_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9807);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9808, (int)10803, (int)10802);
			@@@var_0_object:AddReply((int)9821, (int)10803, (int)10816);
			return 0;
		}
		var_585_bool = var_20_string == (int)10803;
		if(var_585_bool != 0) {
			var_586_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9810, (int)10805, (int)10804);
			@@@var_0_object:AddReply((int)9814, (int)10809, (int)10808);
			@@@var_0_object:AddReply((int)9820, (int)10809, (int)10814);
			return 0;
		}
		var_598_bool = var_20_string == (int)10809;
		if(var_598_bool != 0) {
			var_599_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9815);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9816, (int)10811, (int)10810);
			return 0;
		}
		var_605_bool = var_20_string == (int)10811;
		if(var_605_bool != 0) {
			var_606_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9817);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9818, (int)-1, (int)10812);
			@@@var_0_object:AddReply((int)9819, (int)-1, (int)10813);
			return 0;
		}
		var_615_bool = var_20_string == (int)10805;
		if(var_615_bool != 0) {
			var_616_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9812, (int)-1, (int)10806);
			@@@var_0_object:AddReply((int)9813, (int)-1, (int)10807);
			return 0;
		}
		var_625_bool = var_20_string == (int)9629;
		if(var_625_bool != 0) {
			var_626_object = Obj(); var_627_object = Obj();
			var_626_object = var_1_object;
			var_627_object = var_0_object;
			func_4012();
			var_630_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8782);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8783, (int)9631, (int)9630);
			@@@var_0_object:AddReply((int)10447, (int)9631, (int)11516);
			return 0;
		}
		var_639_bool = var_20_string == (int)9631;
		if(var_639_bool != 0) {
			var_640_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8784);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8785, (int)9591, (int)9632);
			return 0;
		}
		var_646_bool = var_20_string == (int)9633;
		if(var_646_bool != 0) {
			var_647_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8786);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8787, (int)9591, (int)9634);
			return 0;
		}
		var_653_bool = var_20_string == (int)9591;
		if(var_653_bool != 0) {
			var_654_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8752, (int)9657, (int)9592);
			@@@var_0_object:AddReply((int)8757, (int)9598, (int)9597);
			return 0;
		}
		var_663_bool = var_20_string == (int)9598;
		if(var_663_bool != 0) {
			var_664_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8758);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8759, (int)9593, (int)9599);
			@@@var_0_object:AddReply((int)8760, (int)9593, (int)9601);
			return 0;
		}
		var_673_bool = var_20_string == (int)9657;
		if(var_673_bool != 0) {
			var_674_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8808);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8809, (int)9659, (int)9658);
			@@@var_0_object:AddReply((int)10449, (int)11521, (int)11520);
			return 0;
		}
		var_683_bool = var_20_string == (int)11521;
		if(var_683_bool != 0) {
			var_684_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10450);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10451, (int)11523, (int)11522);
			return 0;
		}
		var_690_bool = var_20_string == (int)11523;
		if(var_690_bool != 0) {
			var_691_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10453, (int)9659, (int)11524);
			return 0;
		}
		var_697_bool = var_20_string == (int)9659;
		if(var_697_bool != 0) {
			var_698_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8810);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8811, (int)9661, (int)9660);
			@@@var_0_object:AddReply((int)10454, (int)11527, (int)11526);
			return 0;
		}
		var_707_bool = var_20_string == (int)11527;
		if(var_707_bool != 0) {
			var_708_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10455);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10456, (int)9593, (int)11528);
			return 0;
		}
		var_714_bool = var_20_string == (int)9661;
		if(var_714_bool != 0) {
			var_715_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8813, (int)9593, (int)9662);
			return 0;
		}
		var_721_bool = var_20_string == (int)9593;
		if(var_721_bool != 0) {
			var_722_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8790, (int)9638, (int)9637);
			@@@var_0_object:AddReply((int)8754, (int)-1, (int)9594);
			return 0;
		}
		var_731_bool = var_20_string == (int)9638;
		if(var_731_bool != 0) {
			var_732_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8791);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8798, (int)9646, (int)9645);
			@@@var_0_object:AddReply((int)8792, (int)-1, (int)9639);
			return 0;
		}
		var_741_bool = var_20_string == (int)9646;
		if(var_741_bool != 0) {
			var_742_string = "";
			func_967(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8800, (int)-1, (int)9647);
			@@@var_0_object:AddReply((int)8801, (int)-1, (int)9649);
			return 0;
		}
		var_3_string = true;
		var_750_bool = 0;
		func_3733(var_750_bool);
		if(var_750_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3d8";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	if((int)1 != 0) {
		func_3633();
		var_25_bool = var_21_bool == (int)11563;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_4024();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_4030();
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_3889(var_90_object);
		}
		var_116_bool = var_21_bool == (int)11566;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_4024();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_4030();
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_3889(var_122_object);
		}
		var_124_bool = var_21_bool == (int)11569;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_4024();
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_4030();
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_3889(var_130_object);
		}
		var_132_bool = var_21_bool == (int)11570;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_4024();
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_4030();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_3889(var_138_object);
		}
		var_140_bool = var_21_bool == (int)11571;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_4024();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_4030();
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_3889(var_146_object);
		}
		var_148_bool = var_21_bool == (int)11599;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_4065();
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_4071(var_154_object);
		}
		var_200_bool = var_21_bool == (int)11600;
		if(var_200_bool != 0) {
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_4065();
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_4071(var_204_object);
		}
		var_206_bool = var_21_bool == (int)11601;
		if(var_206_bool != 0) {
			var_207_object = Obj(); var_208_object = Obj();
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_4065();
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_4071(var_210_object);
		}
		var_212_bool = var_20_string == (int)12720;
		if(var_212_bool != 0) {
			var_213_bool = 0; var_214_object = Obj();
			var_214_object = var_1_object;
			func_4283(var_214_object);
			if(var_213_bool != 0) {
				var_221_object = Obj(); var_222_object = Obj();
				var_221_object = var_1_object;
				var_222_object = var_0_object;
				func_4184();
				var_225_string = "";
				func_2499(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)11527);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11528, (int)12722, (int)12721);
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_4190(var_244_bool, var_245_object);
				if(var_244_bool != 0) {
					@@@var_0_object:AddReply((int)11537, (int)12731, (int)12730);
				}
				@@@var_0_object:AddReply((int)11539, (int)11552, (int)12732);
				return 0;
			}
			var_254_bool = 0; var_255_object = Obj();
			var_255_object = var_1_object;
			func_4190(var_254_bool, var_255_object);
			if(var_254_bool != 0) {
				var_256_string = "";
				func_2499(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)10500);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)10501, (int)11584, (int)11583);
				@@@var_0_object:AddReply((int)10509, (int)-1, (int)11591);
				return 0;
			}
			var_264_bool = 0;
			var_264_bool = 0;
			var_265_bool = 0;
			var_265_bool = 0;
			var_266_bool = 0; var_267_object = Obj();
			var_267_object = var_1_object;
			func_4307(var_267_object);
			if(var_266_bool != 0) {
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_4295(var_273_object);
				if(var_272_bool != 0) {
					var_265_bool = 1;
				}
			}
			if(var_265_bool != 0) {
				var_278_bool = 0; var_279_object = Obj();
				var_279_object = var_1_object;
				func_4319(var_278_bool, var_279_object);
				if(var_278_bool != 0) {
					var_264_bool = 1;
				}
			}
			if(var_264_bool != 0) {
				var_287_string = "";
				func_2499(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)10510);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)10511, (int)11594, (int)11593);
				@@@var_0_object:AddReply((int)10521, (int)11594, (int)11604);
				return 0;
			}
			var_295_bool = 0; var_296_object = Obj();
			var_296_object = var_1_object;
			func_4190(var_295_bool, var_296_object);
			if(var_295_bool != 0) {
				var_297_string = "";
				func_2499(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)11547);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11548, (int)12743, (int)12742);
				return 0;
			}
		}
		var_303_bool = var_20_string == (int)12743;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11550, (int)12745, (int)12744);
			return 0;
		}
		var_310_bool = var_20_string == (int)12745;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11552, (int)12747, (int)12746);
			return 0;
		}
		var_317_bool = var_20_string == (int)12747;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11553);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11554, (int)12749, (int)12748);
			return 0;
		}
		var_324_bool = var_20_string == (int)12749;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11555);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11556, (int)-1, (int)12750);
			return 0;
		}
		var_331_bool = var_20_string == (int)11594;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10513, (int)11596, (int)11595);
			@@@var_0_object:AddReply((int)10520, (int)11598, (int)11602);
			return 0;
		}
		var_341_bool = var_20_string == (int)11596;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10515, (int)11598, (int)11597);
			@@@var_0_object:AddReply((int)10519, (int)-1, (int)11601);
			return 0;
		}
		var_351_bool = var_20_string == (int)11598;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10517, (int)-1, (int)11599);
			@@@var_0_object:AddReply((int)10518, (int)-1, (int)11600);
			return 0;
		}
		var_361_bool = var_20_string == (int)11584;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10503, (int)-1, (int)11585);
			@@@var_0_object:AddReply((int)10504, (int)-1, (int)11586);
			@@@var_0_object:AddReply((int)10505, (int)11588, (int)11587);
			return 0;
		}
		var_374_bool = var_20_string == (int)11588;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10507, (int)-1, (int)11589);
			@@@var_0_object:AddReply((int)10508, (int)-1, (int)11590);
			return 0;
		}
		var_384_bool = var_20_string == (int)11552;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10495, (int)11554, (int)11574);
			@@@var_0_object:AddReply((int)10496, (int)11577, (int)11576);
			return 0;
		}
		var_394_bool = var_20_string == (int)11577;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10497);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10498, (int)11554, (int)11578);
			@@@var_0_object:AddReply((int)10499, (int)11554, (int)11580);
			return 0;
		}
		var_404_bool = var_20_string == (int)12731;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11538);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11540, (int)12734, (int)12733);
			return 0;
		}
		var_411_bool = var_20_string == (int)12734;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11542, (int)12736, (int)12735);
			return 0;
		}
		var_418_bool = var_20_string == (int)12736;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11543);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11544, (int)12738, (int)12737);
			return 0;
		}
		var_425_bool = var_20_string == (int)12738;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11546, (int)11560, (int)12739);
			return 0;
		}
		var_432_bool = var_20_string == (int)12722;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11529);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11530, (int)11554, (int)12723);
			return 0;
		}
		var_439_bool = var_20_string == (int)11554;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10476);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10477, (int)11556, (int)11555);
			@@@var_0_object:AddReply((int)10494, (int)11556, (int)11572);
			return 0;
		}
		var_449_bool = var_20_string == (int)11556;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10479, (int)11558, (int)11557);
			@@@var_0_object:AddReply((int)10489, (int)11568, (int)11567);
			return 0;
		}
		var_459_bool = var_20_string == (int)11568;
		if(var_459_bool != 0) {
			var_460_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10491, (int)-1, (int)11569);
			@@@var_0_object:AddReply((int)10492, (int)-1, (int)11570);
			@@@var_0_object:AddReply((int)10493, (int)-1, (int)11571);
			return 0;
		}
		var_472_bool = var_20_string == (int)11558;
		if(var_472_bool != 0) {
			var_473_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10480);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10481, (int)11560, (int)11559);
			@@@var_0_object:AddReply((int)10486, (int)11565, (int)11564);
			return 0;
		}
		var_482_bool = var_20_string == (int)11565;
		if(var_482_bool != 0) {
			var_483_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10488, (int)-1, (int)11566);
			return 0;
		}
		var_489_bool = var_20_string == (int)11560;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10483, (int)11562, (int)11561);
			return 0;
		}
		var_496_bool = var_20_string == (int)11562;
		if(var_496_bool != 0) {
			var_497_string = "";
			func_2499(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10484);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10485, (int)-1, (int)11563);
			return 0;
		}
		var_3_string = true;
		var_502_bool = 0;
		func_3733(var_502_bool);
		if(var_502_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9d4";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int)
{
	if((int)1 != 0) {
		func_3633();
		var_25_bool = var_21_int == (int)13243;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_4161();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_4167(var_31_object);
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_3808();
		}
		var_54_bool = var_20_int == (int)13238;
		if(var_54_bool != 0) {
			var_55_bool = 0; var_56_object = Obj();
			var_56_object = var_1_object;
			func_4330(var_56_object);
			var_63_bool = var_55_bool == 0; //@nz
			if(var_63_bool != 0) {
				var_64_string = "";
				func_3410(var_21_int, "Neutral");
				@@@var_0_object:SetMessage((int)12020);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12021, (int)13240, (int)13239);
				return 0;
			}
			var_83_string = "";
			func_3410(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)13723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13724, (int)-1, (int)14990);
			return 0;
		}
		var_89_bool = var_20_int == (int)13240;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_3410(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12022);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12023, (int)13242, (int)13241);
			return 0;
		}
		var_96_bool = var_20_int == (int)13242;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_3410(var_21_int, "Neutral");
			@@@var_0_object:SetMessage((int)12024);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12025, (int)-1, (int)13243);
			return 0;
		}
		var_3_string = true;
		var_102_bool = 0;
		func_3733(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd63";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_4583();
	var_21_bool = 0;
	func_3550(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_25_string = "";
	func_3615("Neutral");
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


func_4358(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0;
	func_4345(Obj());
	var_70_object = var_67_object;
	@@var_67_object:Find(var_63_int, var_68_object);
	var_75_bool = var_68_object == 0; //@nz
	if(var_75_bool != 0) {
		var_77_int = "Can't find diary parent with id: " + var_63_int;
		Trace(var_77_int);
		var_61_bool = 0;
		return 6;
	}
	@@var_68_object:AddChild(var_62_object);
	SetVariable("player_diary", (int)1);
	@@var_62_object:GetCategory(var_69_int);
	SetDiarySection(var_69_int);
	var_61_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3336(var_0_object, var_1_object, var_2_object, var_3_object, var_430_object, var_431_object)
{
	var_0_object = var_431_object;
	var_1_object = var_430_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_437_bool = 0; var_438_object = Obj();
		var_438_object = var_1_object;
		func_4330(var_438_object);
		var_443_bool = var_437_bool == 0; //@nz
		if(var_443_bool != 0) {
			var_444_string = "";
			func_3410(var_431_object, "Neutral");
			@@@var_0_object:SetMessage((int)12020);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12021, (int)13240, (int)13239);
		} else {
				var_461_string = "";
				func_3410(var_431_object, "Neutral");
				@@@var_0_object:SetMessage((int)13723);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13724, (int)-1, (int)14990);
				goto Label_3380;
		}
	}
Label_3380:
	var_453_bool = 0;
	func_3733(var_453_bool);
	if(var_453_bool != 0) {

	Label_3384:
		lshWaitForAnimEnd();
		var_454_object = var_3_object;
		if(var_454_object != 0) {
		} else {
			var_455_string = "";
			var_455_string = var_2_object;
			func_3615(var_455_string);
			goto Label_3384;
	}
		PlayAnimation("all", "idle");

	Label_3399:
		WaitForAnimEnd();
		var_458_object = var_3_object;
		if(var_458_object != 0) {
			goto Label_3409;
		}
		PlayAnimation("all", "idle");
		goto Label_3399;

	}
	goto Label_3409;
	
Label_3409:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd0c";


func_3849()
{
	SetVariable("ood3Rubin1", (int)1);
	return 0;
}


func_3855()
{
	SetVariable("ood3Rubin2", (int)1);
	return 0;
}


func_3861()
{
	SetVariable("ood3Rubin3", (int)1);
	return 0;
}


func_3611()
{
	CameraSwitchToNormal();
	return 0;
}


func_3867()
{
	SetVariable("ood3Rubin4", (int)1);
	return 0;
}


func_2333(var_0_object, var_1_object, var_2_object, var_3_object, var_322_object, var_323_object)
{
	var_0_object = var_323_object;
	var_1_object = var_322_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_329_bool = 0; var_330_object = Obj();
		var_330_object = var_1_object;
		func_4283(var_330_object);
		if(var_329_bool != 0) {
			var_335_object = Obj(); var_336_object = Obj();
			var_335_object = var_1_object;
			var_336_object = var_0_object;
			func_4184();
			var_339_string = "";
			func_2499(var_323_object, "Neutral");
			@@@var_0_object:SetMessage((int)11527);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11528, (int)12722, (int)12721);
			var_348_bool = 0; var_349_object = Obj();
			var_349_object = var_1_object;
			func_4190(var_348_bool, var_349_object);
			if(var_348_bool != 0) {
				@@@var_0_object:AddReply((int)11537, (int)12731, (int)12730);
			}
			@@@var_0_object:AddReply((int)11539, (int)11552, (int)12732);
		} else {
				var_364_bool = 0; var_365_object = Obj();
				var_365_object = var_1_object;
				func_4190(var_364_bool, var_365_object);
				if(var_364_bool != 0) {
					var_366_string = "";
					func_2499(var_323_object, "Neutral");
					@@@var_0_object:SetMessage((int)10500);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)10501, (int)11584, (int)11583);
					@@@var_0_object:AddReply((int)10509, (int)-1, (int)11591);
					goto Label_2469;
				}
				var_374_bool = 0;
				var_374_bool = 0;
				var_375_bool = 0;
				var_375_bool = 0;
				var_376_bool = 0; var_377_object = Obj();
				var_377_object = var_1_object;
				func_4307(var_377_object);
				if(var_376_bool != 0) {
					var_382_bool = 0; var_383_object = Obj();
					var_383_object = var_1_object;
					func_4295(var_383_object);
					if(var_382_bool != 0) {
						var_375_bool = 1;
					}
				}
				if(var_375_bool != 0) {
					var_388_bool = 0; var_389_object = Obj();
					var_389_object = var_1_object;
					func_4319(var_388_bool, var_389_object);
					if(var_388_bool != 0) {
						var_374_bool = 1;
					}
				}
				if(var_374_bool != 0) {
					var_393_string = "";
					func_2499(var_323_object, "Neutral");
					@@@var_0_object:SetMessage((int)10510);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)10511, (int)11594, (int)11593);
					@@@var_0_object:AddReply((int)10521, (int)11594, (int)11604);
					goto Label_2469;
				}
				var_401_bool = 0; var_402_object = Obj();
				var_402_object = var_1_object;
				func_4190(var_401_bool, var_402_object);
				if(var_401_bool != 0) {
					var_403_string = "";
					func_2499(var_323_object, "Neutral");
					@@@var_0_object:SetMessage((int)11547);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)11548, (int)12743, (int)12742);
					goto Label_2469;
				}
				return 0;
		}
	}
Label_2469:
	var_356_bool = 0;
	func_3733(var_356_bool);
	if(var_356_bool != 0) {

	Label_2473:
		lshWaitForAnimEnd();
		var_357_object = var_3_object;
		if(var_357_object != 0) {
		} else {
			var_358_string = "";
			var_358_string = var_2_object;
			func_3615(var_358_string);
			goto Label_2473;
	}
		PlayAnimation("all", "idle");

	Label_2488:
		WaitForAnimEnd();
		var_361_object = var_3_object;
		if(var_361_object != 0) {
			goto Label_2498;
		}
		PlayAnimation("all", "idle");
		goto Label_2488;

	}
	goto Label_2498;
	
Label_2498:
	return 0;
	
}
EMIT "GOTO 0x921";


func_3615(var_25_string)
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


func_3873(var_90_object)
{
	var_91_object = Obj(); var_92_string = ""; var_93_float = 0;
	func_4404(Obj());
	var_94_object = var_91_object;
	func_4421(var_91_object, "pt_map_alexandr", (float)2);
	var_114_object = Obj();
	func_4404(var_114_object);
	@@var_90_object:ShowMap(var_114_object);
	return 0;
}


func_4387(var_78_bool, var_79_int)
{
	var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj(); var_83_object = Obj();
	func_4345(Obj());
	var_84_object = var_82_object;
	@@var_82_object:Find(var_79_int, var_83_object);
	var_85_bool = var_83_object == 0; //@nz
	if(var_85_bool != 0) {
		var_78_bool = 0;
		return 4;
	}
	@@var_83_object:Remove();
	var_78_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3633()
{
	var_23_bool = 0;
	func_3733(var_23_bool);
	if(var_23_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_49(var_0_object, var_38_int, var_39_object)
{
	var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0;
	var_0_object = var_39_object;
	var_49_bool = 0; var_50_object = Obj();
	var_39_object = var_50_object;
	func_3555(var_49_bool, var_50_object);
	var_89_bool = var_49_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_38_int = -2;
		return 8;
	}
	CreateDialog(var_45_object);
	var_90_int = 0;
	func_3729(var_90_int);
	@@var_45_object:SetNPCName(var_90_int);
	var_91_string = "";
	func_3731(var_91_string);
	@@var_45_object:SetPhoto(var_91_string);
	var_92_int = 0;
	func_4454(var_92_int);
	@@var_45_object:SetPlayerName(var_92_int);
	IsOverrideActive(var_46_bool);
	var_100_bool = var_46_bool;
	if(var_100_bool != 0) {
		var_38_int = -2;
		return 8;
	}
	DoDialog(var_45_object);
	var_101_object = Obj(); var_102_object = Obj();
	var_39_object = var_101_object;
	var_45_object = var_102_object;
	TaskCall(3);
	func_112(var_103_object, var_104_object, var_105_string, var_106_bool, var_101_object, var_102_object);
	TaskReturn();
	@@var_45_object:IsDialogEnd(var_48_bool);
	
Label_94:
	var_145_bool = var_48_bool == 0; //@nz
	if(var_145_bool != 0) {
		sync();
		@@var_45_object:IsDialogEnd(var_48_bool);
		goto Label_94;
	}
	var_39_object = Obj();
	func_3611();
	StopDialog(var_45_object);
	@@var_45_object:GetReturnValue((int)-1);
	var_47_int = var_38_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3889(var_90_object)
{
	var_91_object = Obj(); var_92_string = ""; var_93_float = 0;
	func_4404(Obj());
	var_94_object = var_91_object;
	func_4421(var_91_object, "pt_map_bigvlad", (float)2);
	var_114_object = Obj();
	func_4404(var_114_object);
	@@var_90_object:ShowMap(var_114_object);
	return 0;
}


func_4404(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj();
	GetMainOutdoorScene(var_39_object);
	var_41_bool = var_39_object == 0; //@ne
	if(var_41_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_40_object = 0;
		var_40_object = var_36_object;
		return 4;
	}
	@@var_39_object:GetMap(var_40_object);
	var_40_object = var_36_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3640(var_74_cvector, var_75_cvector)
{
	var_77_float = 0; var_78_float = 0;
	var_79_int = var_75_cvector | var_75_cvector;
	var_78_float = sqrt(var_79_int);
	var_80_float = 9.999999974752427e-07;
	var_81_bool = var_78_float < var_80_float;
	if(var_81_bool != 0) {
		var_74_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_74_cvector = var_75_cvector / var_78_float;
	return 2;
}


func_4161()
{
	SetVariable("d6RubinGoesToGeorg", (int)1);
	return 0;
}


func_3650(var_57_int, var_58_string)
{
	var_59_int = 0; var_60_int = 0;
	GetVariable(var_58_string, var_60_int);
	var_60_int = var_57_int;
	return 2;
}


func_3905()
{
	var_139_object = Obj(); var_140_object = Obj(); var_141_object = Obj(); var_142_object = Obj();
	func_4404(Obj());
	var_143_object = var_141_object;
	@@var_141_object:FindMark(var_142_object, "d3q01AlexandrGotoOspina");
	var_145_object = var_142_object;
	if(var_145_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01AlexandrGotoOspinaSelf");
	var_147_object = var_142_object;
	if(var_147_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01BigVladAgreed");
	var_149_object = var_142_object;
	if(var_149_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01BigVladAgreedSelf");
	var_151_object = var_142_object;
	if(var_151_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01BigVladGotoGeorg");
	var_153_object = var_142_object;
	if(var_153_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01BigVladGotoGeorgSelf");
	var_155_object = var_142_object;
	if(var_155_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01GeorgAgreed");
	var_157_object = var_142_object;
	if(var_157_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01GeorgAgreedSelf");
	var_159_object = var_142_object;
	if(var_159_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01OspinaButchersWillHelpSelf");
	var_161_object = var_142_object;
	if(var_161_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01OspinaGotoBigVlad");
	var_163_object = var_142_object;
	if(var_163_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01OspinaGotoBigVladSelf");
	var_165_object = var_142_object;
	if(var_165_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01RubinGotoAlexandr");
	var_167_object = var_142_object;
	if(var_167_object != 0) {
		@@var_142_object:Remove();
	}
	@@var_141_object:FindMark(var_142_object, "d3q01RubinGotoAlexandrSelf");
	var_169_object = var_142_object;
	if(var_169_object != 0) {
		@@var_142_object:Remove();
	}
	func_4519();
	var_179_bool = 0; var_180_string = ""; var_181_string = "";
	func_3688(var_179_bool, "quest_d3_01", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4421(var_91_object, var_92_string, var_93_float)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); var_98_bool = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_object = Obj(); var_102_bool = 0;
	GetMainOutdoorScene(var_101_object);
	var_103_bool = var_101_object == 0; //@ne
	if(var_103_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_101_object:GetLocator(var_92_string, var_102_bool, var_99_cvector, var_100_cvector);
	var_105_bool = var_102_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_107_int = "Warning: outdoor scene locator " + var_92_string;
		var_109_int = var_107_int + " doesnt exist";
		Trace(var_109_int);
	}
	@@var_101_object:GetMap(var_91_object);
	var_110_bool = var_91_object == 0; //@ne
	if(var_110_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_112_float = GetByIndex(var_99_cvector, 0);
	var_113_float = GetByIndex(var_99_cvector, 2);
	@@var_91_object:SetMapParams(var_112_float, var_113_float, var_93_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4167(var_30_object)
{
	Trace("whitevaccine is given");
	var_33_object = Obj(); var_34_string = ""; var_35_int = 0;
	var_30_object = var_33_object;
	func_3668(var_33_object, "white_vaccine", (int)1);
	return 0;
}


func_3655(var_38_object, var_39_object, var_40_int)
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


func_4178()
{
	SetVariable("d3RubinVisit", (int)1);
	return 0;
}


func_3410(var_2_object, var_64_string)
{
	var_65_bool = 0;
	func_3733(var_65_bool);
	var_66_bool = var_65_bool == 0; //@nz
	if(var_66_bool != 0) {
		return 0;
	}
	var_67_bool = var_64_string == var_2_object;
	if(var_67_bool != 0) {
		return 0;
	}
	var_68_string = "";
	var_64_string = var_68_string;
	func_3615(var_68_string);
	var_2_object = var_64_string;
	return 0;
}


func_3668(var_33_object, var_34_string, var_35_int)
{
	var_36_object = Obj(); var_37_object = Obj();
	CreateInvItem(var_37_object);
	@@var_37_object:SetItemName(var_34_string);
	var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0;
	var_33_object = var_38_object;
	var_37_object = var_39_object;
	var_35_int = var_40_int;
	func_3655(var_38_object, var_39_object, var_40_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4184()
{
	SetVariable("d5RubinVisit", (int)1);
	return 0;
}


func_4190(var_244_bool, var_245_object)
{
	var_246_bool = 0; var_247_object = Obj();
	var_245_object = var_247_object;
	func_4342(var_247_object);
	if(var_246_bool != 0) {
		var_244_bool = 1;
		return 0;
	}
	var_244_bool = 0;
	return 0;
}


func_3681(var_280_bool, var_281_object, var_282_string)
{
	var_283_int = 0; var_284_bool = 0; var_285_int = 0; var_286_bool = 0;
	GetInvItemByName(var_285_int, var_282_string);
	@@var_281_object:HasItem(var_285_int, var_286_bool);
	var_286_bool = var_280_bool;
	return 4;
}


func_4454(var_92_int)
{
	var_93_int = 0; var_94_int = 0;
	GetVariable("player", var_94_int);
	var_97_bool = var_94_int == (int)0;
	if(var_97_bool != 0) {
		var_92_int = 200001;
		return 2;
	EMIT "GOTO 0x1175";
	}
	var_99_bool = var_94_int == (int)1;
	if(var_99_bool != 0) {
		var_92_int = 200002;
		return 2;
	}
	var_92_int = 200003;
	return 2;
}


func_4200(var_228_bool)
{
	var_230_int = 0; var_231_string = "";
	func_3650(var_230_int, "d3q01");
	var_235_bool = var_230_int == (int)0;
	if(var_235_bool != 0) {
		var_228_bool = 1;
		return 0;
	}
	var_228_bool = 0;
	return 0;
}


func_3688(var_193_bool, var_194_string, var_195_string)
{
	var_196_object = Obj(); var_197_object = Obj();
	FindActor(var_197_object, var_194_string);
	var_198_bool = var_197_object == 0; //@ne
	if(var_198_bool != 0) {
		var_193_bool = 0;
		return 2;
	}
	Trigger(var_197_object, var_195_string);
	var_193_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_101_object, var_102_object)
{
	var_0_object = var_102_object;
	var_1_object = var_101_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_108_object = Obj(); var_109_object = Obj();
		var_108_object = var_1_object;
		var_109_object = var_0_object;
		func_4018();
		var_112_string = "";
		func_205(var_102_object, "Neutral");
		@@@var_0_object:SetMessage((int)9170);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)9171, (int)10056, (int)10055);
		@@@var_0_object:AddReply((int)9175, (int)10062, (int)10061);
		@@@var_0_object:AddReply((int)9187, (int)10077, (int)10076);
		goto Label_175;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xcd";
	EMIT "Pop(1)";
	EMIT "Push((int) 5800)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 5801)";
	EMIT "Push((int) 6391)";
	EMIT "Push((int) 6390)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 5819)";
	EMIT "Push((int) 6391)";
	EMIT "Push((int) 6408)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 5820)";
	EMIT "Push((int) 6391)";
	EMIT "Push((int) 6410)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xaf";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_175:
	var_137_bool = 0;
	func_3733(var_137_bool);
	if(var_137_bool != 0) {

	Label_179:
		lshWaitForAnimEnd();
		var_138_object = var_3_object;
		if(var_138_object != 0) {
		} else {
			var_139_string = "";
			var_139_string = var_2_object;
			func_3615(var_139_string);
			goto Label_179;
	}
		PlayAnimation("all", "idle");

	Label_194:
		WaitForAnimEnd();
		var_142_object = var_3_object;
		if(var_142_object != 0) {
			goto Label_204;
		}
		PlayAnimation("all", "idle");
		goto Label_194;
	}
	goto Label_204;
	
Label_204:
	return 0;
	
}


func_4212(var_236_bool)
{
	var_238_int = 0; var_239_string = "";
	func_3650(var_238_int, "ood3Rubin1");
	var_241_bool = var_238_int == (int)0;
	if(var_241_bool != 0) {
		var_236_bool = 1;
		return 0;
	}
	var_236_bool = 0;
	return 0;
}


func_3700(var_47_float)
{
	var_48_float = 0; var_49_float = 0;
	GetGameTime(var_49_float);
	var_49_float = var_47_float;
	return 2;
}


func_4471()
{
	var_53_object = Obj(); var_54_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_54_object, (int)49, (int)1, (int)12131);
	var_59_bool = 0; var_60_object = Obj(); var_61_int = 0;
	var_54_object = var_60_object;
	func_4358(var_59_bool, var_60_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3705(var_26_int)
{
	var_27_float = 0; var_28_float = 0;
	GetGameTime(var_28_float);
	var_30_int = 0;
	var_30_int = var_28_float / (int)24;
	var_26_int = (int)1 + var_30_int;
	return 2;
}


func_4224(var_319_bool)
{
	var_321_int = 0; var_322_string = "";
	func_3650(var_321_int, "ood3Rubin2");
	var_324_bool = var_321_int == (int)0;
	if(var_324_bool != 0) {
		var_319_bool = 1;
		return 0;
	}
	var_319_bool = 0;
	return 0;
}


func_3714(var_24_bool, var_25_int)
{
	var_26_int = 0;
	func_3705(var_26_int);
	var_24_bool = var_26_int == var_25_int;
	return 0;
}


func_4487()
{
	var_55_object = Obj(); var_56_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_56_object, (int)25, (int)1, (int)3365);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_56_object = var_62_object;
	func_4358(var_61_bool, var_62_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3720(var_468_bool)
{
	var_469_bool = 0; var_470_bool = 0;
	var_471_string = "";
	func_3615("No");
	lshWaitForAnimEnd(var_470_bool);
	var_470_bool = var_468_bool;
	return 2;
}


func_4236(var_328_bool)
{
	var_330_int = 0; var_331_string = "";
	func_3650(var_330_int, "ood3Rubin3");
	var_333_bool = var_330_int == (int)0;
	if(var_333_bool != 0) {
		var_328_bool = 1;
		return 0;
	}
	var_328_bool = 0;
	return 0;
}


func_3729(var_90_int)
{
	var_90_int = 2876;
	return 0;
}


func_3731(var_91_string)
{
	var_91_string = "ui/NPC_Rubin.png";
	return 0;
}


func_3733(var_23_bool)
{
	var_23_bool = 1;
	return 0;
}


func_3735()
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	SetVariable("d1q01", (int)1000);
	func_4404(Obj());
	var_34_object = var_30_object;
	@@var_30_object:FindMark(var_31_object, "d1q01EvaAboutMark");
	var_42_object = var_31_object;
	if(var_42_object != 0) {
		@@var_31_object:Remove();
	}
	@@var_30_object:FindMark(var_31_object, "d1q01EvaGotoSimon");
	var_44_object = var_31_object;
	if(var_44_object != 0) {
		@@var_31_object:Remove();
	}
	@@var_30_object:FindMark(var_31_object, "d1q01GrifAboutRubin");
	var_46_object = var_31_object;
	if(var_46_object != 0) {
		@@var_31_object:Remove();
	}
	@@var_30_object:FindMark(var_31_object, "d1q01MarkAboutJulia");
	var_48_object = var_31_object;
	if(var_48_object != 0) {
		@@var_31_object:Remove();
	}
	@@var_30_object:FindMark(var_31_object, "d1q01MarkAboutLara");
	var_50_object = var_31_object;
	if(var_50_object != 0) {
		@@var_31_object:Remove();
	}
	@@var_30_object:FindMark(var_31_object, "d1q01NotkinAboutRubin");
	var_52_object = var_31_object;
	if(var_52_object != 0) {
		@@var_31_object:Remove();
	}
	func_4471();
	var_78_bool = 0; var_79_int = 0;
	func_4387(var_78_bool, (int)31);
	var_86_bool = 0; var_87_int = 0;
	func_4387(var_86_bool, (int)32);
	var_88_bool = 0; var_89_int = 0;
	func_4387(var_88_bool, (int)33);
	var_90_bool = 0; var_91_int = 0;
	func_4387(var_90_bool, (int)34);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4248(var_339_bool)
{
	var_341_int = 0; var_342_string = "";
	func_3650(var_341_int, "ood3Rubin4");
	var_344_bool = var_341_int == (int)0;
	if(var_344_bool != 0) {
		var_339_bool = 1;
		return 0;
	}
	var_339_bool = 0;
	return 0;
}


func_4503()
{
	var_80_object = Obj(); var_81_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_81_object, (int)68, (int)1, (int)12150);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_81_object = var_87_object;
	func_4358(var_86_bool, var_87_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_672(var_0_object, var_149_int, var_150_object)
{
	var_152_object = Obj(); var_153_bool = 0; var_154_int = 0; var_155_bool = 0; var_156_object = Obj(); var_157_bool = 0; var_158_int = 0; var_159_bool = 0;
	var_0_object = var_150_object;
	var_160_bool = 0; var_161_object = Obj();
	var_150_object = var_161_object;
	func_3555(var_160_bool, var_161_object);
	var_162_bool = var_160_bool == 0; //@nz
	if(var_162_bool != 0) {
		var_149_int = -2;
		return 8;
	}
	CreateDialog(var_156_object);
	var_163_int = 0;
	func_3729(var_163_int);
	@@var_156_object:SetNPCName(var_163_int);
	var_164_string = "";
	func_3731(var_164_string);
	@@var_156_object:SetPhoto(var_164_string);
	var_165_int = 0;
	func_4454(var_165_int);
	@@var_156_object:SetPlayerName(var_165_int);
	IsOverrideActive(var_157_bool);
	var_166_bool = var_157_bool;
	if(var_166_bool != 0) {
		var_149_int = -2;
		return 8;
	}
	DoDialog(var_156_object);
	var_167_object = Obj(); var_168_object = Obj();
	var_150_object = var_167_object;
	var_156_object = var_168_object;
	TaskCall(5);
	func_735(var_169_object, var_170_object, var_171_string, var_172_bool, var_167_object, var_168_object);
	TaskReturn();
	@@var_156_object:IsDialogEnd(var_159_bool);
	
Label_717:
	var_300_bool = var_159_bool == 0; //@nz
	if(var_300_bool != 0) {
		sync();
		@@var_156_object:IsDialogEnd(var_159_bool);
		goto Label_717;
	}
	var_150_object = Obj();
	func_3611();
	StopDialog(var_156_object);
	@@var_156_object:GetReturnValue((int)-1);
	var_158_int = var_149_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4260(var_290_bool)
{
	var_292_int = 0; var_293_string = "";
	func_3650(var_292_int, "d3q01");
	var_295_bool = var_292_int == (int)1000;
	if(var_295_bool != 0) {
		var_290_bool = 1;
		return 0;
	}
	var_290_bool = 0;
	return 0;
}


func_4519()
{
	var_170_object = Obj(); var_171_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_171_object, (int)74, (int)1, (int)12156);
	var_176_bool = 0; var_177_object = Obj(); var_178_int = 0;
	var_171_object = var_177_object;
	func_4358(var_176_bool, var_177_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4012()
{
	SetVariable("d3RubinToldWhereIsSimon", (int)1);
	return 0;
}


func_4272(var_281_bool, var_282_object)
{
	var_283_bool = 0; var_284_object = Obj(); var_285_string = "";
	var_282_object = var_284_object;
	func_3681(var_283_bool, var_284_object, "d3q01_blood");
	if(var_283_bool != 0) {
		var_281_bool = 1;
		return 0;
	}
	var_281_bool = 0;
	return 0;
}


func_4018()
{
	SetVariable("KnowRubin", (int)1);
	return 0;
}


func_4535()
{
	var_55_object = Obj(); var_56_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_56_object, (int)139, (int)1, (int)15339);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_56_object = var_62_object;
	func_4358(var_61_bool, var_62_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4024()
{
	SetVariable("ood5Rubin1", (int)1);
	return 0;
}


func_4283(var_213_bool)
{
	var_215_int = 0; var_216_string = "";
	func_3650(var_215_int, "ood5Rubin1");
	var_220_bool = var_215_int == (int)0;
	if(var_220_bool != 0) {
		var_213_bool = 1;
		return 0;
	}
	var_213_bool = 0;
	return 0;
}


func_4030()
{
	var_32_object = Obj(); var_33_object = Obj();
	SetVariable("d5q01", (int)1);
	func_4404(Obj());
	var_36_object = var_33_object;
	var_47_float = 0;
	func_3700(var_47_float);
	@@var_33_object:AddMark("d5q01RubinGotoBigVlad", "pt_map_bigvlad", (int)1, (int)11956, var_47_float);
	var_54_float = 0;
	func_3700(var_54_float);
	@@var_33_object:AddMark("d5q01RubinGotoBigVladSelf", "pt_map_rubin", (int)1, (int)15348, var_54_float);
	func_4535();
	func_4551();
	return 2;
}
EMIT "Stack[-1] = 0";


func_2499(var_2_object, var_225_string)
{
	var_226_bool = 0;
	func_3733(var_226_bool);
	var_227_bool = var_226_bool == 0; //@nz
	if(var_227_bool != 0) {
		return 0;
	}
	var_228_bool = var_225_string == var_2_object;
	if(var_228_bool != 0) {
		return 0;
	}
	var_229_string = "";
	var_225_string = var_229_string;
	func_3615(var_229_string);
	var_2_object = var_225_string;
	return 0;
}


func_4295(var_272_bool)
{
	var_274_int = 0; var_275_string = "";
	func_3650(var_274_int, "d5q01");
	var_277_bool = var_274_int == (int)7;
	if(var_277_bool != 0) {
		var_272_bool = 1;
		return 0;
	}
	var_272_bool = 0;
	return 0;
}


func_967(var_2_object, var_246_string)
{
	var_247_bool = 0;
	func_3733(var_247_bool);
	var_248_bool = var_247_bool == 0; //@nz
	if(var_248_bool != 0) {
		return 0;
	}
	var_249_bool = var_246_string == var_2_object;
	if(var_249_bool != 0) {
		return 0;
	}
	var_250_string = "";
	var_246_string = var_250_string;
	func_3615(var_250_string);
	var_2_object = var_246_string;
	return 0;
}


func_3273(var_0_object, var_412_int, var_413_object)
{
	var_415_object = Obj(); var_416_bool = 0; var_417_int = 0; var_418_bool = 0; var_419_object = Obj(); var_420_bool = 0; var_421_int = 0; var_422_bool = 0;
	var_0_object = var_413_object;
	var_423_bool = 0; var_424_object = Obj();
	var_413_object = var_424_object;
	func_3555(var_423_bool, var_424_object);
	var_425_bool = var_423_bool == 0; //@nz
	if(var_425_bool != 0) {
		var_412_int = -2;
		return 8;
	}
	CreateDialog(var_419_object);
	var_426_int = 0;
	func_3729(var_426_int);
	@@var_419_object:SetNPCName(var_426_int);
	var_427_string = "";
	func_3731(var_427_string);
	@@var_419_object:SetPhoto(var_427_string);
	var_428_int = 0;
	func_4454(var_428_int);
	@@var_419_object:SetPlayerName(var_428_int);
	IsOverrideActive(var_420_bool);
	var_429_bool = var_420_bool;
	if(var_429_bool != 0) {
		var_412_int = -2;
		return 8;
	}
	DoDialog(var_419_object);
	var_430_object = Obj(); var_431_object = Obj();
	var_413_object = var_430_object;
	var_419_object = var_431_object;
	TaskCall(9);
	func_3336(var_432_object, var_433_object, var_434_string, var_435_bool, var_430_object, var_431_object);
	TaskReturn();
	@@var_419_object:IsDialogEnd(var_422_bool);
	
Label_3318:
	var_466_bool = var_422_bool == 0; //@nz
	if(var_466_bool != 0) {
		sync();
		@@var_419_object:IsDialogEnd(var_422_bool);
		goto Label_3318;
	}
	var_413_object = Obj();
	func_3611();
	StopDialog(var_419_object);
	@@var_419_object:GetReturnValue((int)-1);
	var_421_int = var_412_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4551()
{
	var_80_object = Obj(); var_81_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_81_object, (int)140, (int)1, (int)15340);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_81_object = var_87_object;
	func_4358(var_86_bool, var_87_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_205(var_2_object, var_102_string)
{
	var_103_bool = 0;
	func_3733(var_103_bool);
	var_104_bool = var_103_bool == 0; //@nz
	if(var_104_bool != 0) {
		return 0;
	}
	var_105_bool = var_102_string == var_2_object;
	if(var_105_bool != 0) {
		return 0;
	}
	var_106_string = "";
	var_102_string = var_106_string;
	func_3615(var_106_string);
	var_2_object = var_102_string;
	return 0;
}


func_3538(var_21_bool, var_22_object)
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


func_4307(var_266_bool)
{
	var_268_int = 0; var_269_string = "";
	func_3650(var_268_int, "ood5Rubin2");
	var_271_bool = var_268_int == (int)0;
	if(var_271_bool != 0) {
		var_266_bool = 1;
		return 0;
	}
	var_266_bool = 0;
	return 0;
}


func_4567()
{
	var_182_object = Obj(); var_183_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_183_object, (int)147, (int)1, (int)15347);
	var_188_bool = 0; var_189_object = Obj(); var_190_int = 0;
	var_183_object = var_189_object;
	func_4358(var_188_bool, var_189_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2270(var_0_object, var_304_int, var_305_object)
{
	var_307_object = Obj(); var_308_bool = 0; var_309_int = 0; var_310_bool = 0; var_311_object = Obj(); var_312_bool = 0; var_313_int = 0; var_314_bool = 0;
	var_0_object = var_305_object;
	var_315_bool = 0; var_316_object = Obj();
	var_305_object = var_316_object;
	func_3555(var_315_bool, var_316_object);
	var_317_bool = var_315_bool == 0; //@nz
	if(var_317_bool != 0) {
		var_304_int = -2;
		return 8;
	}
	CreateDialog(var_311_object);
	var_318_int = 0;
	func_3729(var_318_int);
	@@var_311_object:SetNPCName(var_318_int);
	var_319_string = "";
	func_3731(var_319_string);
	@@var_311_object:SetPhoto(var_319_string);
	var_320_int = 0;
	func_4454(var_320_int);
	@@var_311_object:SetPlayerName(var_320_int);
	IsOverrideActive(var_312_bool);
	var_321_bool = var_312_bool;
	if(var_321_bool != 0) {
		var_304_int = -2;
		return 8;
	}
	DoDialog(var_311_object);
	var_322_object = Obj(); var_323_object = Obj();
	var_305_object = var_322_object;
	var_311_object = var_323_object;
	TaskCall(7);
	func_2333(var_324_object, var_325_object, var_326_string, var_327_bool, var_322_object, var_323_object);
	TaskReturn();
	@@var_311_object:IsDialogEnd(var_314_bool);
	
Label_2315:
	var_408_bool = var_314_bool == 0; //@nz
	if(var_408_bool != 0) {
		sync();
		@@var_311_object:IsDialogEnd(var_314_bool);
		goto Label_2315;
	}
	var_305_object = Obj();
	func_3611();
	StopDialog(var_311_object);
	@@var_311_object:GetReturnValue((int)-1);
	var_313_int = var_304_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_735(var_0_object, var_1_object, var_2_object, var_3_object, var_167_object, var_168_object)
{
	var_0_object = var_168_object;
	var_1_object = var_167_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_174_bool = 0;
		var_174_bool = 0;
		var_175_bool = 0; var_176_object = Obj();
		var_176_object = var_1_object;
		func_4200(var_176_object);
		if(var_175_bool != 0) {
			var_181_bool = 0; var_182_object = Obj();
			var_182_object = var_1_object;
			func_4212(var_182_object);
			if(var_181_bool != 0) {
				var_174_bool = 1;
			}
		}
		if(var_174_bool != 0) {
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_object;
			func_4178();
			var_191_string = "";
			func_967(var_168_object, "Neutral");
			@@@var_0_object:SetMessage((int)8737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8777, (int)9633, (int)9624);
			@@@var_0_object:AddReply((int)8781, (int)9629, (int)9628);
		} else {
				var_211_bool = 0; var_212_object = Obj();
				var_212_object = var_1_object;
				func_4190(var_211_bool, var_212_object);
				if(var_211_bool != 0) {
					var_215_string = "";
					func_967(var_168_object, "Neutral");
					@@@var_0_object:SetMessage((int)9805);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)9806, (int)10801, (int)10800);
					@@@var_0_object:AddReply((int)9822, (int)10801, (int)10818);
					goto Label_937;
				}
				var_223_bool = 0;
				var_223_bool = 0;
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_1_object;
				func_4272(var_224_bool, var_225_object);
				if(var_224_bool != 0) {
					var_233_bool = 0; var_234_object = Obj();
					var_234_object = var_1_object;
					func_4260(var_234_object);
					var_239_bool = var_233_bool == 0; //@nz
					if(var_239_bool != 0) {
						var_223_bool = 1;
					}
				}
				if(var_223_bool != 0) {
					var_240_string = "";
					func_967(var_168_object, "Neutral");
					@@@var_0_object:SetMessage((int)9078);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)9079, (int)9958, (int)9957);
					goto Label_937;
				}
				var_245_bool = 0; var_246_object = Obj();
				var_246_object = var_1_object;
				func_4190(var_245_bool, var_246_object);
				if(var_245_bool != 0) {
					var_247_string = "";
					func_967(var_168_object, "Neutral");
					@@@var_0_object:SetMessage((int)8769);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)8770, (int)9621, (int)9617);
					@@@var_0_object:AddReply((int)8771, (int)9619, (int)9618);
					goto Label_937;
				}
				var_255_string = "";
				func_967(var_168_object, "Neutral");
				@@@var_0_object:SetMessage((int)8778);
				@@@var_0_object:ClearReplies();
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_4200(var_258_object);
				if(var_257_bool != 0) {
					@@@var_0_object:AddReply((int)11141, (int)12331, (int)12330);
				}
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_4224(var_263_object);
				if(var_262_bool != 0) {
					@@@var_0_object:AddReply((int)8779, (int)9681, (int)9626);
				}
				var_271_bool = 0; var_272_object = Obj();
				var_272_object = var_1_object;
				func_4236(var_272_object);
				if(var_271_bool != 0) {
					@@@var_0_object:AddReply((int)8780, (int)9669, (int)9627);
				}
				var_280_bool = 0;
				var_280_bool = 0;
				var_281_bool = 0;
				var_281_bool = 0;
				var_282_bool = 0; var_283_object = Obj();
				var_283_object = var_1_object;
				func_4248(var_283_object);
				if(var_282_bool != 0) {
					var_288_bool = 0; var_289_object = Obj();
					var_289_object = var_1_object;
					func_4200(var_289_object);
					var_290_bool = var_288_bool == 0; //@nz
					if(var_290_bool != 0) {
						var_281_bool = 1;
					}
				}
				if(var_281_bool != 0) {
					var_291_bool = 0; var_292_object = Obj();
					var_292_object = var_1_object;
					func_4260(var_292_object);
					var_293_bool = var_291_bool == 0; //@nz
					if(var_293_bool != 0) {
						var_280_bool = 1;
					}
				}
				if(var_280_bool != 0) {
					@@@var_0_object:AddReply((int)8802, (int)9651, (int)9650);
				}
				@@@var_0_object:AddReply((int)11140, (int)-1, (int)12329);
				goto Label_937;
		}
	}
Label_937:
	var_203_bool = 0;
	func_3733(var_203_bool);
	if(var_203_bool != 0) {

	Label_941:
		lshWaitForAnimEnd();
		var_204_object = var_3_object;
		if(var_204_object != 0) {
		} else {
			var_205_string = "";
			var_205_string = var_2_object;
			func_3615(var_205_string);
			goto Label_941;
	}
		PlayAnimation("all", "idle");

	Label_956:
		WaitForAnimEnd();
		var_208_object = var_3_object;
		if(var_208_object != 0) {
			goto Label_966;
		}
		PlayAnimation("all", "idle");
		goto Label_956;

	}
	goto Label_966;
	
Label_966:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2e3";


func_4319(var_278_bool, var_279_object)
{
	var_280_bool = 0; var_281_object = Obj(); var_282_string = "";
	var_279_object = var_281_object;
	func_3681(var_280_bool, var_281_object, "d5q01_heart");
	if(var_280_bool != 0) {
		var_278_bool = 1;
		return 0;
	}
	var_278_bool = 0;
	return 0;
}


func_3808()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3550(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_4065()
{
	SetVariable("ood5Rubin2", (int)1);
	return 0;
}


func_3555(var_49_bool, var_50_object)
{
	var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0;
	@@var_50_object:GetPosition(var_60_cvector);
	@@var_50_object:GetEyesHeight(var_59_float);
	var_67_float = GetByIndex(var_60_cvector, 1);
	var_67_float = var_67_float + var_59_float;
	SetByIndex(var_60_cvector, 1) = var_67_float;
	GetPosition(var_61_cvector);
	GetEyesHeight(var_59_float);
	var_68_float = GetByIndex(var_61_cvector, 1);
	var_68_float = var_68_float + var_59_float;
	SetByIndex(var_61_cvector, 1) = var_68_float;
	var_62_cvector = var_60_cvector - var_61_cvector;
	var_69_float = GetByIndex(var_62_cvector, 1);
	SetByIndex(var_62_cvector, 1) = (float)0;
	var_70_int = var_62_cvector | var_62_cvector;
	var_71_float = sqrt(var_70_int);
	var_62_cvector = var_62_cvector / var_71_float;
	var_63_cvector = -var_62_cvector;
	var_73_float = var_62_cvector * (int)70;
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
	var_75_cvector = var_63_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3640(var_74_cvector, var_75_cvector);
	var_83_float = var_74_cvector * (int)25;
	var_84_int = var_73_float + var_83_float;
	var_64_cvector = var_84_int - CVector(0.0, 10.0, 0.0);
	var_65_cvector = var_61_cvector + var_64_cvector;
	IsOverrideActive(var_66_bool);
	var_86_bool = var_66_bool;
	if(var_86_bool != 0) {
		var_49_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_65_cvector, var_63_cvector);
	var_87_float = GetByIndex(var_64_cvector, 0);
	var_88_float = GetByIndex(var_64_cvector, 2);
	Rotate(var_87_float, var_88_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_49_bool = 1;
	return 16;
}


func_3814()
{
	var_32_object = Obj(); var_33_object = Obj();
	SetVariable("d3q01", (int)1);
	func_4404(Obj());
	var_36_object = var_33_object;
	var_47_float = 0;
	func_3700(var_47_float);
	@@var_33_object:AddMark("d3q01RubinGotoAlexandr", "pt_map_alexandr", (int)1, (int)11151, var_47_float);
	var_54_float = 0;
	func_3700(var_54_float);
	@@var_33_object:AddMark("d3q01RubinGotoAlexandrSelf", "pt_map_rubin", (int)1, (int)15294, var_54_float);
	func_4487();
	func_4503();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4583()
{
	var_20_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_4071(var_153_object)
{
	var_155_object = Obj(); var_156_object = Obj(); var_157_int = 0; var_158_object = Obj(); var_159_object = Obj(); var_160_int = 0;
	func_4404(Obj());
	var_161_object = var_158_object;
	@@var_158_object:FindMark(var_159_object, "d5q01AlexandrGotoKaterina");
	var_163_object = var_159_object;
	if(var_163_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d5q01BigVladGotoAlexandr");
	var_165_object = var_159_object;
	if(var_165_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d5q01BurahMeeting1");
	var_167_object = var_159_object;
	if(var_167_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d5q01BurahMeeting2");
	var_169_object = var_159_object;
	if(var_169_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d5q01GrifWantsMoney");
	var_171_object = var_159_object;
	if(var_171_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d5q01GrifWillHelp");
	var_173_object = var_159_object;
	if(var_173_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d5q01KaterinaGotoLara");
	var_175_object = var_159_object;
	if(var_175_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d5q01PatrolGotoGrif");
	var_177_object = var_159_object;
	if(var_177_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d5q01RubinGotoBigVlad");
	var_179_object = var_159_object;
	if(var_179_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d5q01RubinGotoBigVladSelf");
	var_181_object = var_159_object;
	if(var_181_object != 0) {
		@@var_159_object:Remove();
	}
	func_4567();
	@@var_153_object:RemoveItemByType(var_160_int, "d5q01_heart", (int)1);
	var_193_bool = 0; var_194_string = ""; var_195_string = "";
	func_3688(var_193_bool, "quest_d5_01", "completed");
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4330(var_55_bool)
{
	var_57_int = 0; var_58_string = "";
	func_3650(var_57_int, "d6RubinGoesToGeorg");
	var_62_bool = var_57_int != (int)0;
	if(var_62_bool != 0) {
		var_55_bool = 1;
		return 0;
	}
	var_55_bool = 0;
	return 0;
}


func_4587(var_21_object)
{
	var_22_bool = GlobalVars[1];
	var_23_bool = var_22_bool == 0; //@nz
	if(var_23_bool != 0) {
	}
	var_24_bool = 0; var_25_int = 0;
	func_3714(var_24_bool, (int)1);
	if(var_24_bool != 0) {
		var_32_int = 0; var_33_string = "";
		func_3650(var_32_int, "d1q01");
		var_37_bool = var_32_int != (int)1000;
		if(var_37_bool != 0) {
			var_38_int = 0; var_39_object = Obj();
			var_21_object = var_39_object;
			TaskCall(2);
			func_49(var_40_object, var_38_int, var_39_object);
			TaskReturn();
			return 0;
		}
	}
	var_147_bool = 0; var_148_int = 0;
	func_3714(var_147_bool, (int)3);
	if(var_147_bool != 0) {
		var_149_int = 0; var_150_object = Obj();
		var_21_object = var_150_object;
		TaskCall(4);
		func_672(var_151_object, var_149_int, var_150_object);
		TaskReturn();
		return 0;
	}
	var_302_bool = 0; var_303_int = 0;
	func_3714(var_302_bool, (int)5);
	if(var_302_bool != 0) {
		var_304_int = 0; var_305_object = Obj();
		var_21_object = var_305_object;
		TaskCall(6);
		func_2270(var_306_object, var_304_int, var_305_object);
		TaskReturn();
		return 0;
	}
	var_410_bool = 0; var_411_int = 0;
	func_3714(var_410_bool, (int)6);
	if(var_410_bool != 0) {
		var_412_int = 0; var_413_object = Obj();
		var_21_object = var_413_object;
		TaskCall(8);
		func_3273(var_414_object, var_412_int, var_413_object);
		TaskReturn();
		return 0;
	}
	func_3720((bool)0);
	return 0;
}


func_4342(var_246_bool)
{
	var_246_bool = 0;
	return 0;
}


func_4345(var_70_object)
{
	var_71_object = Obj(); var_72_object = Obj();
	GetDiaryRoot(var_72_object);
	var_73_bool = var_72_object == 0; //@nz
	if(var_73_bool != 0) {
		Trace("Can't retrieve diary root");
		var_70_object = 0;
		return 2;
	}
	var_72_object = var_70_object;
	return 2;
}
EMIT "Stack[-1] = 0";


