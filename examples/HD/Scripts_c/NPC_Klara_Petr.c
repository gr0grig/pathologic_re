// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Autizm|W:Drunk|W:Untrust|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Petr.png|W:ui/NPC_Petr_b.png|W:k5q02|W:k5q02PetrGotoAndrei|W:pt_map_andrei|A:AddMark|W:quest_k5_02|W:init_kabak|W:tvirin 5 is given|W:tvirin|W:ook11Petr1|W:playsound|W:giveitem|W:tvirin is given|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x6a0
// @RUN_TASK: 10
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a4 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x444 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x578 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x676 vars=int,int
// @TASK_10: vars=cvector params=0
// @EVENT_7: op=0x6ec vars=int
// @EVENT_6: op=0x712 vars=
// @EVENT_5: op=0x721 vars=
// @EVENT_45: op=0x72e vars=bool
// @EVENT_0: op=0x73a vars=object
// @PE: 0x51,0x8b,0xa1,0x140,0x18e,0x1a4,0x3ea,0x42e,0x444,0x523,0x562,0x578,0x626,0x660,0x676,0x6ec,0x712,0x72e,0x934,0x978,0x981,0x98c,0x992,0x998,0x9a3,0x9b3,0x9bf,0x9cb,0xa5d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2258();
		var_31_bool = var_26_bool == (int)26878;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_139(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525522);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525523, (int)30733, (int)26879);
			@@@var_0_object:AddReply((int)529279, (int)30734, (int)30732);
			return 0;
		}
		var_57_bool = var_26_bool == (int)30734;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_139(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529283, (int)-1, (int)30736);
			return 0;
		}
		var_64_bool = var_26_bool == (int)30733;
		if(var_64_bool != 0) {
			var_65_string = "";
			func_139(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529280);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529282, (int)-1, (int)30735);
			return 0;
		}
		var_3_string = true;
		var_70_bool = 0;
		func_2394(var_70_bool);
		if(var_70_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2258();
		var_31_bool = var_27_cvector == (int)27195;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2396();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_2467(var_82_object);
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_2456(var_108_object);
		}
		var_132_bool = var_27_cvector == (int)42977;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_2396();
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_2456(var_136_object);
		}
		var_138_bool = var_27_cvector == (int)27221;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_2424();
		}
		var_152_bool = var_27_cvector == (int)42988;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_2424();
		}
		var_156_bool = var_27_cvector == (int)42994;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_2424();
		}
		var_160_bool = var_27_cvector == (int)27223;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_2424();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_2450();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_2433(var_168_object);
		}
		var_174_bool = var_26_bool == (int)27192;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_398(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525900);
			@@@var_0_object:ClearReplies();
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_2483(var_194_object);
			if(var_193_bool != 0) {
				@@@var_0_object:AddReply((int)525901, (int)42962, (int)27193);
			}
			var_204_bool = 0; var_205_object = Obj();
			var_205_object = var_1_object;
			func_2495(var_205_object);
			if(var_204_bool != 0) {
				@@@var_0_object:AddReply((int)525924, (int)30559, (int)27216);
			}
			@@@var_0_object:AddReply((int)525904, (int)-1, (int)27196);
			@@@var_0_object:AddReply((int)529107, (int)-1, (int)30552);
			return 0;
		}
		var_220_bool = var_26_bool == (int)30559;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_398(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529114);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529115, (int)27217, (int)30560);
			return 0;
		}
		var_227_bool = var_26_bool == (int)27217;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_398(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)525925);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525926, (int)27220, (int)27218);
			@@@var_0_object:AddReply((int)525927, (int)27222, (int)27219);
			return 0;
		}
		var_237_bool = var_26_bool == (int)27222;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_398(var_27_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)525930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540904, (int)42980, (int)42979);
			@@@var_0_object:AddReply((int)525931, (int)-1, (int)27223);
			return 0;
		}
		var_247_bool = var_26_bool == (int)42980;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_398(var_27_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)540905);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540906, (int)42982, (int)42981);
			@@@var_0_object:AddReply((int)540914, (int)42982, (int)42990);
			return 0;
		}
		var_257_bool = var_26_bool == (int)42982;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_398(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540907);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540908, (int)42984, (int)42983);
			@@@var_0_object:AddReply((int)540915, (int)42987, (int)42992);
			return 0;
		}
		var_267_bool = var_26_bool == (int)42984;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_398(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540909);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540910, (int)42987, (int)42985);
			@@@var_0_object:AddReply((int)540911, (int)42987, (int)42986);
			return 0;
		}
		var_277_bool = var_26_bool == (int)42987;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_398(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)540912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540913, (int)-1, (int)42988);
			@@@var_0_object:AddReply((int)540916, (int)-1, (int)42994);
			return 0;
		}
		var_287_bool = var_26_bool == (int)27220;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_398(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)525928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529116, (int)30562, (int)30561);
			return 0;
		}
		var_294_bool = var_26_bool == (int)30562;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_398(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529117);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525929, (int)-1, (int)27221);
			return 0;
		}
		var_301_bool = var_26_bool == (int)42962;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_398(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540891);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540892, (int)30553, (int)42963);
			return 0;
		}
		var_308_bool = var_26_bool == (int)30553;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_398(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529108);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529109, (int)30555, (int)30554);
			@@@var_0_object:AddReply((int)540893, (int)42965, (int)42964);
			return 0;
		}
		var_318_bool = var_26_bool == (int)42965;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_398(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)540894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540895, (int)27194, (int)42966);
			@@@var_0_object:AddReply((int)540900, (int)27194, (int)42973);
			return 0;
		}
		var_328_bool = var_26_bool == (int)30555;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_398(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529110);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529111, (int)30557, (int)30556);
			@@@var_0_object:AddReply((int)540899, (int)42965, (int)42971);
			return 0;
		}
		var_338_bool = var_26_bool == (int)30557;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_398(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)529112);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529113, (int)27194, (int)30558);
			@@@var_0_object:AddReply((int)540898, (int)42969, (int)42970);
			return 0;
		}
		var_348_bool = var_26_bool == (int)27194;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_398(var_27_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)525902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540896, (int)42969, (int)42968);
			@@@var_0_object:AddReply((int)541554, (int)42969, (int)43721);
			return 0;
		}
		var_358_bool = var_26_bool == (int)42969;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_398(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540897);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525903, (int)-1, (int)27195);
			@@@var_0_object:AddReply((int)540901, (int)42976, (int)42975);
			return 0;
		}
		var_368_bool = var_26_bool == (int)42976;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_398(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)540902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540903, (int)-1, (int)42977);
			return 0;
		}
		var_3_string = true;
		var_374_bool = 0;
		func_2394(var_374_bool);
		if(var_374_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2258();
		var_31_bool = var_27_cvector == (int)29405;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2444();
		}
		var_37_bool = var_26_bool == (int)29404;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_1070(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528042);
			@@@var_0_object:ClearReplies();
			var_56_bool = 0; var_57_object = Obj();
			var_57_object = var_1_object;
			func_2507(var_57_object);
			if(var_56_bool != 0) {
				@@@var_0_object:AddReply((int)528043, (int)29406, (int)29405);
			}
			@@@var_0_object:AddReply((int)528046, (int)-1, (int)29408);
			@@@var_0_object:AddReply((int)541057, (int)-1, (int)43161);
			return 0;
		}
		var_74_bool = var_26_bool == (int)29406;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_1070(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)528044);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528045, (int)43162, (int)29407);
			@@@var_0_object:AddReply((int)541060, (int)43165, (int)43164);
			return 0;
		}
		var_84_bool = var_26_bool == (int)43165;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_1070(var_27_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)541061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541062, (int)43167, (int)43166);
			return 0;
		}
		var_91_bool = var_26_bool == (int)43167;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_1070(var_27_cvector, "Drunk");
			@@@var_0_object:SetMessage((int)541063);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541064, (int)-1, (int)43168);
			@@@var_0_object:AddReply((int)541065, (int)-1, (int)43169);
			return 0;
		}
		var_101_bool = var_26_bool == (int)43162;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_1070(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541059, (int)43165, (int)43163);
			return 0;
		}
		var_3_string = true;
		var_107_bool = 0;
		func_2394(var_107_bool);
		if(var_107_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x445";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2258();
		var_31_bool = var_26_bool == (int)36906;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1378(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_60_bool = var_26_bool == (int)36953;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_1378(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_70_bool = var_26_bool == (int)36957;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_1378(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_79_bool = 0;
		func_2394(var_79_bool);
		if(var_79_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x579";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	if((int)1 != 0) {
		func_2258();
		var_31_bool = var_26_int == (int)42554;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1632(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_2394(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x677";
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_28_bool = var_26_int == (int)10;
	if(var_28_bool != 0) {
		func_1768();
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_bool = 0;
		func_1982(var_31_bool);
		if(var_31_bool != 0) {
			var_34_bool = 0;
			func_1737(var_34_bool);
			if(var_34_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_51_bool = 0;
			func_1717(var_51_bool);
			if(var_51_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				func_2265(Obj());
				var_72_object = var_71_object;
				func_2132(var_70_bool, var_71_object);
			}
		} else {
			func_1732(var_26_int);
			func_1759();
		}
	}
	return 0;
	
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1950();
	func_1768();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0();
	func_1768();
	var_27_string = "";
	func_2212("Neutral");
	func_1759();
	return 0;
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		func_1759();
	} else {
		var_33_string = "";
		func_2212("Neutral");
	}
	return 0;
	
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	IsOverrideActive(var_28_bool);
	var_29_bool = var_28_bool == 0; //@nz
	if(var_29_bool != 0) {
		EventDisable(0);
		func_1950();
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_1973(var_30_bool, var_31_object);
		EventEnable(0);
		var_44_object = Obj();
		var_26_object = var_44_object;
		func_2653(var_44_object);
		var_536_string = "";
		func_2212("Neutral");
		func_1768();
		func_1759();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	var_26_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1703(var_25_cvector);
	return 0;
}


func_0(var_0_object, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0;
	var_0_object = var_48_object;
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0;
	var_48_object = var_59_object;
	func_1987(var_58_bool, var_59_object, (float)70.0);
	var_105_bool = var_58_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	CreateDialog(var_54_object);
	var_106_int = 0;
	func_2388(var_106_int);
	@@var_54_object:SetNPCName(var_106_int);
	var_107_int = 0;
	func_2386(var_107_int);
	@@var_54_object:SetNPCDescription(var_107_int);
	var_108_string = "";
	func_2390(var_108_string);
	@@var_54_object:SetPhoto(var_108_string);
	var_109_string = "";
	func_2392(var_109_string);
	@@var_54_object:SetPhoto2(var_109_string);
	var_110_int = 0;
	func_2636(var_110_int);
	@@var_54_object:SetPlayerName(var_110_int);
	IsOverrideActive(var_55_bool);
	var_118_bool = var_55_bool;
	if(var_118_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	DoDialog(var_54_object);
	var_119_bool = 0; var_120_object = Obj();
	func_2265(Obj());
	var_121_object = var_120_object;
	func_2074(var_119_bool, var_120_object);
	var_214_object = Obj(); var_215_object = Obj();
	var_48_object = var_214_object;
	var_54_object = var_215_object;
	TaskCall(1);
	func_81(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object);
	TaskReturn();
	@@var_54_object:IsDialogEnd(var_57_bool);
	
Label_63:
	var_263_bool = var_57_bool == 0; //@nz
	if(var_263_bool != 0) {
		sync();
		@@var_54_object:IsDialogEnd(var_57_bool);
		goto Label_63;
	}
	var_48_object = Obj();
	func_2056();
	StopDialog(var_54_object);
	@@var_54_object:GetReturnValue((int)-1);
	var_56_int = var_47_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2056()
{
	var_265_bool = 0; var_266_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_268_bool = 0;
	func_2394(var_268_bool);
	if(var_268_bool != 0) {
	} else {
		HasAnimationTrack(var_266_bool, "head");
		var_270_bool = var_266_bool;
		if(var_270_bool == 0) goto Label_2073;
		UnlookAsync("head");
	}
Label_2073:
	return 2;
	
}


func_2317(var_110_object, var_111_string, var_112_int)
{
	var_113_object = Obj(); var_114_object = Obj();
	CreateInvItem(var_114_object);
	@@var_114_object:SetItemName(var_111_string);
	var_115_object = Obj(); var_116_object = Obj(); var_117_int = 0;
	var_110_object = var_115_object;
	var_114_object = var_116_object;
	var_112_int = var_117_int;
	func_2298(var_115_object, var_116_object, var_117_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2330(var_75_bool, var_76_string, var_77_string)
{
	var_78_object = Obj(); var_79_object = Obj();
	FindActor(var_79_object, var_76_string);
	var_80_bool = var_79_object == 0; //@ne
	if(var_80_bool != 0) {
		var_75_bool = 0;
		return 2;
	}
	Trigger(var_79_object, var_77_string);
	var_75_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2586(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj();
	GetMainOutdoorScene(var_41_object);
	var_43_bool = var_41_object == 0; //@ne
	if(var_43_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_42_object = 0;
		var_42_object = var_38_object;
		return 4;
	}
	@@var_41_object:GetMap(var_42_object);
	var_42_object = var_38_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2074(var_119_bool, var_120_object)
{
	var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0;
	GetVariable("voice_common", var_126_int);
	var_129_int = var_126_int;
	if(var_129_int != 0) {
		var_130_bool = 0; var_131_object = Obj();
		var_120_object = var_131_object;
		func_2132(var_130_bool, var_131_object);
		var_160_bool = var_130_bool == 0; //@nz
		if(var_160_bool != 0) {
			var_161_bool = 0; var_162_object = Obj();
			var_120_object = var_162_object;
			func_2169(var_161_bool, var_162_object);
			var_196_bool = var_161_bool == 0; //@nz
			if(var_196_bool != 0) {
				var_119_bool = 0;
				return 4;
			}
		}
		irand(var_127_int, (int)2);
		var_198_int = var_127_int;
		if(var_198_int != 0) {
			var_201_int = var_126_int + (int)1;
			var_203_int = var_201_int % (int)3;
			SetVariable("voice_common", var_203_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_206_bool = 0; var_207_object = Obj();
		var_120_object = var_207_object;
		func_2169(var_206_bool, var_207_object);
		var_208_bool = var_206_bool == 0; //@nz
		if(var_208_bool != 0) {
			var_209_bool = 0; var_210_object = Obj();
			var_120_object = var_210_object;
			func_2132(var_209_bool, var_210_object);
			var_211_bool = var_209_bool == 0; //@nz
			if(var_211_bool != 0) {
				var_119_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2130;
	
Label_2130:
	var_119_bool = 1;
	return 4;
	
}


func_1315(var_0_object, var_1_object, var_2_object, var_3_string, var_445_object, var_446_object)
{
	var_0_object = var_446_object;
	var_1_object = var_445_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_452_string = "";
		func_1378(var_446_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_1348;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x527";
	}
Label_1348:
	var_470_bool = 0;
	func_2394(var_470_bool);
	if(var_470_bool != 0) {

	Label_1352:
		lshWaitForAnimEnd();
		var_471_string = var_3_string;
		if(var_471_string != 0) {
		} else {
			var_472_string = "";
			var_472_string = var_2_object;
			func_2212(var_472_string);
			goto Label_1352;
	}
		PlayAnimation("all", "idle");

	Label_1367:
		WaitForAnimEnd();
		var_475_string = var_3_string;
		if(var_475_string != 0) {
			goto Label_1377;
		}
		PlayAnimation("all", "idle");
		goto Label_1367;
	}
	goto Label_1377;
	
Label_1377:
	return 0;
	
}


func_1574(var_0_object, var_1_object, var_2_object, var_3_string, var_504_object, var_505_object)
{
	var_0_object = var_505_object;
	var_1_object = var_504_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_511_string = "";
		func_1632(var_505_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_1602;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62a";
	}
Label_1602:
	var_526_bool = 0;
	func_2394(var_526_bool);
	if(var_526_bool != 0) {

	Label_1606:
		lshWaitForAnimEnd();
		var_527_string = var_3_string;
		if(var_527_string != 0) {
		} else {
			var_528_string = "";
			var_528_string = var_2_object;
			func_2212(var_528_string);
			goto Label_1606;
	}
		PlayAnimation("all", "idle");

	Label_1621:
		WaitForAnimEnd();
		var_531_string = var_3_string;
		if(var_531_string != 0) {
			goto Label_1631;
		}
		PlayAnimation("all", "idle");
		goto Label_1621;
	}
	goto Label_1631;
	
Label_1631:
	return 0;
	
}


func_2342(var_49_float)
{
	var_50_float = 0; var_51_float = 0;
	GetGameTime(var_51_float);
	var_51_float = var_49_float;
	return 2;
}


func_2347(var_174_int)
{
	var_175_float = 0; var_176_float = 0;
	GetGameTime(var_176_float);
	var_178_int = 0;
	var_178_int = var_176_float / (int)24;
	var_174_int = (int)1 + var_178_int;
	return 2;
}


func_2603(var_83_object, var_84_string, var_85_float)
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_object = Obj(); var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0;
	GetMainOutdoorScene(var_93_object);
	var_95_bool = var_93_object == 0; //@ne
	if(var_95_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_93_object:GetLocator(var_84_string, var_94_bool, var_91_cvector, var_92_cvector);
	var_97_bool = var_94_bool == 0; //@nz
	if(var_97_bool != 0) {
		var_99_int = "Warning: outdoor scene locator " + var_84_string;
		var_101_int = var_99_int + " doesnt exist";
		Trace(var_101_int);
	}
	@@var_93_object:GetMap(var_83_object);
	var_102_bool = var_83_object == 0; //@ne
	if(var_102_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_104_float = GetByIndex(var_91_cvector, 0);
	var_105_float = GetByIndex(var_91_cvector, 2);
	@@var_83_object:SetMapParams(var_104_float, var_105_float, var_85_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1070(var_2_object, var_385_string)
{
	var_386_bool = 0;
	func_2394(var_386_bool);
	var_387_bool = var_386_bool == 0; //@nz
	if(var_387_bool != 0) {
		return 0;
	}
	var_388_bool = var_385_string == var_2_object;
	if(var_388_bool != 0) {
		return 0;
	}
	var_389_string = ""; var_390_bool = 0;
	var_385_string = var_389_string;
	var_392_bool = var_385_string == "";
	if(var_392_bool != 0) {
		var_390_bool = 0;
	} else {
		var_390_bool = 1;
	}
	func_2228(var_389_string, var_390_bool);
	var_2_object = var_385_string;
	return 0;
	
}


func_2356(var_273_bool, var_274_int)
{
	var_275_int = 0;
	func_2347(var_275_int);
	var_273_bool = var_275_int == var_274_int;
	return 0;
}


func_2362(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = "";
	var_55_int = var_52_int;
	if(var_55_int != 0) {
		"idle" = "idle" + var_52_int;
	}
	var_54_string = var_51_string;
	return 2;
}


func_320(var_0_object, var_1_object, var_2_object, var_3_string, var_300_object, var_301_object)
{
	var_0_object = var_301_object;
	var_1_object = var_300_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_307_string = "";
		func_398(var_301_object, "Neutral");
		@@@var_0_object:SetMessage((int)525900);
		@@@var_0_object:ClearReplies();
		var_316_bool = 0; var_317_object = Obj();
		var_317_object = var_1_object;
		func_2483(var_317_object);
		if(var_316_bool != 0) {
			@@@var_0_object:AddReply((int)525901, (int)42962, (int)27193);
		}
		var_327_bool = 0; var_328_object = Obj();
		var_328_object = var_1_object;
		func_2495(var_328_object);
		if(var_327_bool != 0) {
			@@@var_0_object:AddReply((int)525924, (int)30559, (int)27216);
		}
		@@@var_0_object:AddReply((int)525904, (int)-1, (int)27196);
		@@@var_0_object:AddReply((int)529107, (int)-1, (int)30552);
		goto Label_368;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x144";
	}
Label_368:
	var_342_bool = 0;
	func_2394(var_342_bool);
	if(var_342_bool != 0) {

	Label_372:
		lshWaitForAnimEnd();
		var_343_string = var_3_string;
		if(var_343_string != 0) {
		} else {
			var_344_string = "";
			var_344_string = var_2_object;
			func_2212(var_344_string);
			goto Label_372;
	}
		PlayAnimation("all", "idle");

	Label_387:
		WaitForAnimEnd();
		var_347_string = var_3_string;
		if(var_347_string != 0) {
			goto Label_397;
		}
		PlayAnimation("all", "idle");
		goto Label_387;
	}
	goto Label_397;
	
Label_397:
	return 0;
	
}


func_2369(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_48_int = 0;
	
Label_2371:
	var_51_string = ""; var_52_int = 0;
	var_48_int = var_52_int;
	func_2362(var_51_string, var_52_int);
	HasAnimation(var_49_bool, "all", var_51_string);
	var_56_bool = var_49_bool == 0; //@nz
	if(var_56_bool != 0) {
	} else {
		var_48_int = var_48_int + (int)1;
		goto Label_2371;
	}
	var_48_int = var_45_int;
	return 4;
	
}


func_2636(var_110_int)
{
	var_111_int = 0; var_112_int = 0;
	GetVariable("branch", var_112_int);
	var_115_bool = var_112_int == (int)0;
	if(var_115_bool != 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0xa5b";
	}
	var_117_bool = var_112_int == (int)1;
	if(var_117_bool != 0) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_214_object, var_215_object)
{
	var_0_object = var_215_object;
	var_1_object = var_214_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_221_string = "";
		func_139(var_215_object, "Neutral");
		@@@var_0_object:SetMessage((int)525522);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525523, (int)30733, (int)26879);
		@@@var_0_object:AddReply((int)529279, (int)30734, (int)30732);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_245_bool = 0;
	func_2394(var_245_bool);
	if(var_245_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_246_string = var_3_string;
		if(var_246_string != 0) {
		} else {
			var_247_string = "";
			var_247_string = var_2_object;
			func_2212(var_247_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_260_string = var_3_string;
		if(var_260_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_2386(var_107_int)
{
	var_107_int = 515550;
	return 0;
}


func_2388(var_106_int)
{
	var_106_int = 502875;
	return 0;
}


func_2132(var_130_bool, var_131_object)
{
	var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = "";
	var_137_string = "c";
	var_138_int = 0;
	
Label_2135:
	if((int)1 != 0) {
		var_144_int = var_138_int + (int)1;
		var_145_int = var_137_string + var_144_int;
		@@var_131_object:HasProperty(var_145_int, var_139_bool);
		var_146_bool = var_139_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_138_int = var_138_int + (int)1;
			goto Label_2135;
		}
	}
	var_147_bool = var_138_int == 0; //@nz
	if(var_147_bool != 0) {
		var_130_bool = 0;
		return 10;
	}
	var_140_int = 0;
	var_149_bool = var_138_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_140_int, var_138_int);
	}
	var_151_int = var_140_int + (int)1;
	var_152_int = var_137_string + var_151_int;
	@@var_131_object:GetProperty(var_152_int, var_141_string);
	var_153_bool = 0; var_154_string = "";
	var_141_string = var_154_string;
	func_2243(var_153_bool, var_154_string);
	var_153_bool = var_130_bool;
	return 10;
	
}


func_2390(var_108_string)
{
	var_108_string = "ui/NPC_Petr.png";
	return 0;
}


func_1879()
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0;
	WaitForAnimEnd();
	var_43_bool = 0;
	func_1982(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 12;
	}
	func_2369((int)0);
	var_45_int = var_37_int;
	var_38_int = 0;
	
Label_1893:
	var_58_bool = 0;
	var_58_bool = 0;
	var_60_bool = var_38_int < (int)5;
	if(var_60_bool != 0) {
		var_61_bool = 0;
		func_1982(var_61_bool);
		if(var_61_bool != 0) {
			var_58_bool = 1;
		}
	}
	if(var_58_bool != 0) {
		var_62_bool = var_37_int == 0; //@nz
		if(var_62_bool != 0) {
			Sleep((int)3, var_39_bool);
			var_64_bool = var_39_bool == 0; //@nz
			if(var_64_bool != 0) {
			} else {
		} else {
				irand(var_40_int, var_37_int);
				irand(var_41_int, (int)5);
				var_70_bool = var_41_int != (int)0;
				if(var_70_bool != 0) {
					var_40_int = 0;
				}
				var_72_string = ""; var_73_int = 0;
				var_40_int = var_73_int;
				func_2362(var_72_string, var_73_int);
				PlayAnimation("all", var_72_string);
				WaitForAnimEnd(var_42_bool);
				var_74_bool = var_42_bool == 0; //@nz
				if(var_74_bool == 0) goto Label_1934;
				goto Label_1945;
		}
		Label_1934:
			var_65_bool = 0;
			func_1948(var_65_bool);
			var_66_bool = var_65_bool == 0; //@nz
			if(var_66_bool != 0) {
				goto Label_1945;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_1893;

		}
	}
Label_1945:
	ResetAAS();
	return 12;
	
}


func_2392(var_109_string)
{
	var_109_string = "ui/NPC_Petr_b.png";
	return 0;
}


func_2394(var_101_bool)
{
	var_101_bool = 1;
	return 0;
}


func_2396()
{
	var_34_object = Obj(); var_35_object = Obj();
	SetVariable("k5q02", (int)2);
	func_2586(Obj());
	var_38_object = var_35_object;
	var_49_float = 0;
	func_2342(var_49_float);
	@@var_35_object:AddMark("k5q02PetrGotoAndrei", "pt_map_andrei", (int)0, (int)515295, var_49_float);
	func_2519();
	var_75_bool = 0; var_76_string = ""; var_77_string = "";
	func_2330(var_75_bool, "quest_k5_02", "init_kabak");
	return 2;
}
EMIT "Stack[-1] = 0";


func_2653(var_44_object)
{
	var_45_bool = GlobalVars[1];
	var_46_bool = var_45_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_47_int = 0; var_48_object = Obj();
		var_44_object = var_48_object;
		TaskCall(0);
		func_0(var_49_object, var_47_int, var_48_object);
		TaskReturn();
		var_272_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_273_bool = 0; var_274_int = 0;
	func_2356(var_273_bool, (int)5);
	if(var_273_bool != 0) {
		var_276_int = 0; var_277_object = Obj();
		var_44_object = var_277_object;
		TaskCall(2);
		func_239(var_278_object, var_276_int, var_277_object);
		TaskReturn();
		return 0;
	}
	var_352_bool = 0; var_353_int = 0;
	func_2356(var_352_bool, (int)11);
	if(var_352_bool != 0) {
		var_354_int = 0; var_355_object = Obj();
		var_44_object = var_355_object;
		TaskCall(4);
		func_921(var_356_object, var_354_int, var_355_object);
		TaskReturn();
		return 0;
	}
	var_419_bool = 0; var_420_int = 0;
	func_2356(var_419_bool, (int)12);
	if(var_419_bool != 0) {
		var_421_int = 0; var_422_object = Obj();
		var_44_object = var_422_object;
		TaskCall(6);
		func_1234(var_423_object, var_421_int, var_422_object);
		TaskReturn();
		return 0;
	}
	var_480_int = 0; var_481_object = Obj();
	var_44_object = var_481_object;
	TaskCall(8);
	func_1493(var_482_object, var_480_int, var_481_object);
	TaskReturn();
	return 0;
}


func_1632(var_2_object, var_511_string)
{
	var_512_bool = 0;
	func_2394(var_512_bool);
	var_513_bool = var_512_bool == 0; //@nz
	if(var_513_bool != 0) {
		return 0;
	}
	var_514_bool = var_511_string == var_2_object;
	if(var_514_bool != 0) {
		return 0;
	}
	var_515_string = ""; var_516_bool = 0;
	var_511_string = var_515_string;
	var_518_bool = var_511_string == "";
	if(var_518_bool != 0) {
		var_516_bool = 0;
	} else {
		var_516_bool = 1;
	}
	func_2228(var_515_string, var_516_bool);
	var_2_object = var_511_string;
	return 0;
	
}


func_1378(var_2_object, var_452_string)
{
	var_453_bool = 0;
	func_2394(var_453_bool);
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
	func_2228(var_456_string, var_457_bool);
	var_2_object = var_452_string;
	return 0;
	
}


func_2424()
{
	SetVariable("k5q02", (int)6);
	func_2532();
	return 0;
}


func_2169(var_161_bool, var_162_object)
{
	var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = "";
	var_174_int = 0;
	func_2347(var_174_int);
	var_180_int = "d" + var_174_int;
	var_168_string = var_180_int + "m";
	var_169_int = 0;
	
Label_2178:
	if((int)1 != 0) {
		var_184_int = var_169_int + (int)1;
		var_185_int = var_168_string + var_184_int;
		@@var_162_object:HasProperty(var_185_int, var_170_bool);
		var_186_bool = var_170_bool == 0; //@nz
		if(var_186_bool != 0) {
		} else {
			var_169_int = var_169_int + (int)1;
			goto Label_2178;
		}
	}
	var_187_bool = var_169_int == 0; //@nz
	if(var_187_bool != 0) {
		var_161_bool = 0;
		return 10;
	}
	var_171_int = 0;
	var_189_bool = var_169_int > (int)1;
	if(var_189_bool != 0) {
		irand(var_171_int, var_169_int);
	}
	var_191_int = var_171_int + (int)1;
	var_192_int = var_168_string + var_191_int;
	@@var_162_object:GetProperty(var_192_int, var_172_string);
	var_193_bool = 0; var_194_string = "";
	var_172_string = var_194_string;
	func_2243(var_193_bool, var_194_string);
	var_193_bool = var_161_bool;
	return 10;
	
}


func_2433(var_167_object)
{
	Trace("tvirin 5 is given");
	var_170_object = Obj(); var_171_string = ""; var_172_int = 0;
	var_167_object = var_170_object;
	func_2317(var_170_object, "tvirin", (int)5);
	return 0;
}


func_139(var_2_object, var_221_string)
{
	var_222_bool = 0;
	func_2394(var_222_bool);
	var_223_bool = var_222_bool == 0; //@nz
	if(var_223_bool != 0) {
		return 0;
	}
	var_224_bool = var_221_string == var_2_object;
	if(var_224_bool != 0) {
		return 0;
	}
	var_225_string = ""; var_226_bool = 0;
	var_221_string = var_225_string;
	var_228_bool = var_221_string == "";
	if(var_228_bool != 0) {
		var_226_bool = 0;
	} else {
		var_226_bool = 1;
	}
	func_2228(var_225_string, var_226_bool);
	var_2_object = var_221_string;
	return 0;
	
}


func_2444()
{
	SetVariable("ook11Petr1", (int)1);
	return 0;
}


func_398(var_2_object, var_307_string)
{
	var_308_bool = 0;
	func_2394(var_308_bool);
	var_309_bool = var_308_bool == 0; //@nz
	if(var_309_bool != 0) {
		return 0;
	}
	var_310_bool = var_307_string == var_2_object;
	if(var_310_bool != 0) {
		return 0;
	}
	var_311_string = ""; var_312_bool = 0;
	var_307_string = var_311_string;
	var_314_bool = var_307_string == "";
	if(var_314_bool != 0) {
		var_312_bool = 0;
	} else {
		var_312_bool = 1;
	}
	func_2228(var_311_string, var_312_bool);
	var_2_object = var_307_string;
	return 0;
	
}


func_2450()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2456(var_107_object)
{
	Trace("tvirin is given");
	var_110_object = Obj(); var_111_string = ""; var_112_int = 0;
	var_107_object = var_110_object;
	func_2317(var_110_object, "tvirin", (int)1);
	return 0;
}


func_921(var_0_object, var_354_int, var_355_object)
{
	var_357_object = Obj(); var_358_bool = 0; var_359_int = 0; var_360_bool = 0; var_361_object = Obj(); var_362_bool = 0; var_363_int = 0; var_364_bool = 0;
	var_0_object = var_355_object;
	var_365_bool = 0; var_366_object = Obj(); var_367_float = 0;
	var_355_object = var_366_object;
	func_1987(var_365_bool, var_366_object, (float)70.0);
	var_368_bool = var_365_bool == 0; //@nz
	if(var_368_bool != 0) {
		var_354_int = -2;
		return 8;
	}
	CreateDialog(var_361_object);
	var_369_int = 0;
	func_2388(var_369_int);
	@@var_361_object:SetNPCName(var_369_int);
	var_370_int = 0;
	func_2386(var_370_int);
	@@var_361_object:SetNPCDescription(var_370_int);
	var_371_string = "";
	func_2390(var_371_string);
	@@var_361_object:SetPhoto(var_371_string);
	var_372_string = "";
	func_2392(var_372_string);
	@@var_361_object:SetPhoto2(var_372_string);
	var_373_int = 0;
	func_2636(var_373_int);
	@@var_361_object:SetPlayerName(var_373_int);
	IsOverrideActive(var_362_bool);
	var_374_bool = var_362_bool;
	if(var_374_bool != 0) {
		var_354_int = -2;
		return 8;
	}
	DoDialog(var_361_object);
	var_375_bool = 0; var_376_object = Obj();
	func_2265(Obj());
	var_377_object = var_376_object;
	func_2074(var_375_bool, var_376_object);
	var_378_object = Obj(); var_379_object = Obj();
	var_355_object = var_378_object;
	var_361_object = var_379_object;
	TaskCall(5);
	func_1002(var_380_object, var_381_object, var_382_string, var_383_bool, var_378_object, var_379_object);
	TaskReturn();
	@@var_361_object:IsDialogEnd(var_364_bool);
	
Label_984:
	var_417_bool = var_364_bool == 0; //@nz
	if(var_417_bool != 0) {
		sync();
		@@var_361_object:IsDialogEnd(var_364_bool);
		goto Label_984;
	}
	var_355_object = Obj();
	func_2056();
	StopDialog(var_361_object);
	@@var_361_object:GetReturnValue((int)-1);
	var_363_int = var_354_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1948(var_65_bool)
{
	var_65_bool = 1;
	return 0;
}


func_1950()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2467(var_82_object)
{
	var_83_object = Obj(); var_84_string = ""; var_85_float = 0;
	func_2586(Obj());
	var_86_object = var_83_object;
	func_2603(var_83_object, "pt_map_andrei", (float)2);
	var_106_object = Obj();
	func_2586(var_106_object);
	@@var_82_object:ShowMap(var_106_object);
	return 0;
}


func_2212(var_247_string)
{
	var_248_bool = 0; var_249_float = 0; var_250_float = 0; var_251_bool = 0; var_252_float = 0; var_253_float = 0;
	lshHasAnimation(var_251_bool, var_247_string);
	var_254_bool = var_251_bool;
	if(var_254_bool != 0) {
		lshGetAnimTimes(var_247_string, var_252_float, var_253_float);
		lshPlayAnimation(var_252_float, var_253_float, (bool)0);
	} else {
		var_257_int = "Can't find lsh animation : " + var_247_string;
		Trace(var_257_int);
	}
	return 6;
	
}


func_1955(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_1703(var_0_object)
{
	var_27_bool = 0;
	func_1982(var_27_bool);
	var_30_bool = var_27_bool == 0; //@nz
	if(var_30_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1712:
	func_1879();
	goto Label_1712;
}
EMIT "Return(); Pop(0)";


func_1963(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0;
	GetPosition(var_39_cvector);
	var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
	return 6;
}


func_2483(var_316_bool)
{
	var_318_int = 0; var_319_string = "";
	func_2281(var_318_int, "k5q02");
	var_323_bool = var_318_int == (int)1;
	if(var_323_bool != 0) {
		var_316_bool = 1;
		return 0;
	}
	var_316_bool = 0;
	return 0;
}


func_2228(var_225_string, var_226_bool)
{
	var_229_bool = 0; var_230_float = 0; var_231_float = 0; var_232_bool = 0; var_233_float = 0; var_234_float = 0;
	lshHasAnimation(var_232_bool, var_225_string);
	var_235_bool = var_232_bool;
	if(var_235_bool != 0) {
		lshGetAnimTimes(var_225_string, var_233_float, var_234_float);
		lshPlayAnimation(var_233_float, var_234_float, var_226_bool);
	} else {
		var_237_int = "Can't find lsh animation : " + var_225_string;
		Trace(var_237_int);
	}
	return 6;
	
}


func_1973(var_30_bool, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	@@var_31_object:GetPosition(var_33_cvector);
	var_34_bool = 0; var_35_cvector = CVector(0,0,0);
	var_33_cvector = var_35_cvector;
	func_1963(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
	return 2;
}


func_1717(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj();
	FindActor(var_53_object, "player");
	var_55_bool = var_53_object == 0; //@nz
	if(var_55_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	var_56_bool = 0; var_57_object = Obj();
	var_53_object = var_57_object;
	func_1973(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1982(var_27_bool)
{
	var_28_bool = 0; var_29_bool = 0;
	IsLoaded(var_29_bool);
	var_29_bool = var_27_bool;
	return 2;
}


func_2495(var_327_bool)
{
	var_329_int = 0; var_330_string = "";
	func_2281(var_329_int, "k5q02");
	var_332_bool = var_329_int == (int)5;
	if(var_332_bool != 0) {
		var_327_bool = 1;
		return 0;
	}
	var_327_bool = 0;
	return 0;
}


func_1987(var_58_bool, var_59_object, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0;
	@@var_59_object:GetPosition(var_71_cvector);
	@@var_59_object:GetEyesHeight(var_70_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	var_79_float = var_79_float + var_70_float;
	SetByIndex(var_71_cvector, 1) = var_79_float;
	GetPosition(var_72_cvector);
	GetEyesHeight(var_70_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	var_80_float = var_80_float + var_70_float;
	SetByIndex(var_72_cvector, 1) = var_80_float;
	var_73_cvector = var_71_cvector - var_72_cvector;
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (float)0;
	var_82_int = var_73_cvector | var_73_cvector;
	var_83_float = sqrt(var_82_int);
	var_73_cvector = var_73_cvector / var_83_float;
	var_74_cvector = -var_73_cvector;
	var_84_float = var_73_cvector * var_60_float;
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_86_cvector = var_74_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2271(var_85_cvector, var_86_cvector);
	var_94_float = var_85_cvector * (int)25;
	var_95_int = var_84_float + var_94_float;
	var_75_cvector = var_95_int - CVector(0.0, 10.0, 0.0);
	var_76_cvector = var_72_cvector + var_75_cvector;
	IsOverrideActive(var_77_bool);
	var_97_bool = var_77_bool;
	if(var_97_bool != 0) {
		var_58_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_76_cvector, var_74_cvector, (bool)1);
	var_99_float = GetByIndex(var_75_cvector, 0);
	var_100_float = GetByIndex(var_75_cvector, 2);
	Rotate(var_99_float, var_100_float);
	var_101_bool = 0;
	func_2394(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		HasAnimationTrack(var_78_bool, "head");
		var_103_bool = var_78_bool;
		if(var_103_bool == 0) goto Label_2050;
		LookAsyncCamera("head");
	}
Label_2050:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_58_bool = 1;
	return 18;
	
}


func_1732(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_103_float, var_104_float);
	return 0;
}


func_2243(var_153_bool, var_154_string)
{
	var_155_bool = 0; var_156_bool = 0;
	var_157_bool = 0;
	func_2394(var_157_bool);
	if(var_157_bool != 0) {
		lshHasSpeech(var_156_bool, var_154_string);
		var_158_bool = var_156_bool;
		if(var_158_bool != 0) {
			lshPlaySpeech(var_154_string);
			var_153_bool = 1;
			return 2;
		}
	}
	var_153_bool = 0;
	return 2;
}


func_1737(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0;
	FindActor(var_37_object, "player");
	var_40_bool = var_37_object == 0; //@nz
	if(var_40_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_41_float = 0; var_42_object = Obj();
	var_37_object = var_42_object;
	func_1955(var_41_float, var_42_object);
	var_50_bool = var_41_float > (float)90000.0;
	if(var_50_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	CanSee(var_38_bool, var_37_object);
	var_38_bool = var_34_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2507(var_394_bool)
{
	var_396_int = 0; var_397_string = "";
	func_2281(var_396_int, "ook11Petr1");
	var_399_bool = var_396_int == (int)0;
	if(var_399_bool != 0) {
		var_394_bool = 1;
		return 0;
	}
	var_394_bool = 0;
	return 0;
}


func_1234(var_0_object, var_421_int, var_422_object)
{
	var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0; var_428_object = Obj(); var_429_bool = 0; var_430_int = 0; var_431_bool = 0;
	var_0_object = var_422_object;
	var_432_bool = 0; var_433_object = Obj(); var_434_float = 0;
	var_422_object = var_433_object;
	func_1987(var_432_bool, var_433_object, (float)70.0);
	var_435_bool = var_432_bool == 0; //@nz
	if(var_435_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	CreateDialog(var_428_object);
	var_436_int = 0;
	func_2388(var_436_int);
	@@var_428_object:SetNPCName(var_436_int);
	var_437_int = 0;
	func_2386(var_437_int);
	@@var_428_object:SetNPCDescription(var_437_int);
	var_438_string = "";
	func_2390(var_438_string);
	@@var_428_object:SetPhoto(var_438_string);
	var_439_string = "";
	func_2392(var_439_string);
	@@var_428_object:SetPhoto2(var_439_string);
	var_440_int = 0;
	func_2636(var_440_int);
	@@var_428_object:SetPlayerName(var_440_int);
	IsOverrideActive(var_429_bool);
	var_441_bool = var_429_bool;
	if(var_441_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	DoDialog(var_428_object);
	var_442_bool = 0; var_443_object = Obj();
	func_2265(Obj());
	var_444_object = var_443_object;
	func_2074(var_442_bool, var_443_object);
	var_445_object = Obj(); var_446_object = Obj();
	var_422_object = var_445_object;
	var_428_object = var_446_object;
	TaskCall(7);
	func_1315(var_447_object, var_448_object, var_449_string, var_450_bool, var_445_object, var_446_object);
	TaskReturn();
	@@var_428_object:IsDialogEnd(var_431_bool);
	
Label_1297:
	var_478_bool = var_431_bool == 0; //@nz
	if(var_478_bool != 0) {
		sync();
		@@var_428_object:IsDialogEnd(var_431_bool);
		goto Label_1297;
	}
	var_422_object = Obj();
	func_2056();
	StopDialog(var_428_object);
	@@var_428_object:GetReturnValue((int)-1);
	var_430_int = var_421_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2258()
{
	var_29_bool = 0;
	func_2394(var_29_bool);
	if(var_29_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1493(var_0_object, var_480_int, var_481_object)
{
	var_483_object = Obj(); var_484_bool = 0; var_485_int = 0; var_486_bool = 0; var_487_object = Obj(); var_488_bool = 0; var_489_int = 0; var_490_bool = 0;
	var_0_object = var_481_object;
	var_491_bool = 0; var_492_object = Obj(); var_493_float = 0;
	var_481_object = var_492_object;
	func_1987(var_491_bool, var_492_object, (float)70.0);
	var_494_bool = var_491_bool == 0; //@nz
	if(var_494_bool != 0) {
		var_480_int = -2;
		return 8;
	}
	CreateDialog(var_487_object);
	var_495_int = 0;
	func_2388(var_495_int);
	@@var_487_object:SetNPCName(var_495_int);
	var_496_int = 0;
	func_2386(var_496_int);
	@@var_487_object:SetNPCDescription(var_496_int);
	var_497_string = "";
	func_2390(var_497_string);
	@@var_487_object:SetPhoto(var_497_string);
	var_498_string = "";
	func_2392(var_498_string);
	@@var_487_object:SetPhoto2(var_498_string);
	var_499_int = 0;
	func_2636(var_499_int);
	@@var_487_object:SetPlayerName(var_499_int);
	IsOverrideActive(var_488_bool);
	var_500_bool = var_488_bool;
	if(var_500_bool != 0) {
		var_480_int = -2;
		return 8;
	}
	DoDialog(var_487_object);
	var_501_bool = 0; var_502_object = Obj();
	func_2265(Obj());
	var_503_object = var_502_object;
	func_2074(var_501_bool, var_502_object);
	var_504_object = Obj(); var_505_object = Obj();
	var_481_object = var_504_object;
	var_487_object = var_505_object;
	TaskCall(9);
	func_1574(var_506_object, var_507_object, var_508_string, var_509_bool, var_504_object, var_505_object);
	TaskReturn();
	@@var_487_object:IsDialogEnd(var_490_bool);
	
Label_1556:
	var_534_bool = var_490_bool == 0; //@nz
	if(var_534_bool != 0) {
		sync();
		@@var_487_object:IsDialogEnd(var_490_bool);
		goto Label_1556;
	}
	var_481_object = Obj();
	func_2056();
	StopDialog(var_487_object);
	@@var_487_object:GetReturnValue((int)-1);
	var_489_int = var_480_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2519()
{
	var_52_object = Obj(); var_53_object = Obj();
	CreateDiaryEntry(var_53_object, (int)399, (int)2, (int)525937);
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0;
	var_53_object = var_58_object;
	func_2558(var_57_bool, var_58_object, (int)397);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2265(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj();
	self(var_123_object);
	var_123_object = var_121_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1759()
{
	var_538_float = 0; var_539_float = 0;
	rand(var_539_float, (int)8, (int)16);
	SetTimer((int)10, var_539_float);
	return 2;
}


func_2271(var_85_cvector, var_86_cvector)
{
	var_88_float = 0; var_89_float = 0;
	var_90_int = var_86_cvector | var_86_cvector;
	var_89_float = sqrt(var_90_int);
	var_91_float = 9.999999974752427e-07;
	var_92_bool = var_89_float < var_91_float;
	if(var_92_bool != 0) {
		var_85_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_85_cvector = var_86_cvector / var_89_float;
	return 2;
}


func_2532()
{
	var_143_object = Obj(); var_144_object = Obj();
	CreateDiaryEntry(var_144_object, (int)403, (int)2, (int)525941);
	var_148_bool = 0; var_149_object = Obj(); var_150_int = 0;
	var_144_object = var_149_object;
	func_2558(var_148_bool, var_149_object, (int)397);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1768()
{
	KillTimer((int)10);
	return 0;
}


func_2281(var_318_int, var_319_string)
{
	var_320_int = 0; var_321_int = 0;
	GetVariable(var_319_string, var_321_int);
	var_321_int = var_318_int;
	return 2;
}


func_1002(var_0_object, var_1_object, var_2_object, var_3_string, var_378_object, var_379_object)
{
	var_0_object = var_379_object;
	var_1_object = var_378_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_385_string = "";
		func_1070(var_379_object, "Neutral");
		@@@var_0_object:SetMessage((int)528042);
		@@@var_0_object:ClearReplies();
		var_394_bool = 0; var_395_object = Obj();
		var_395_object = var_1_object;
		func_2507(var_395_object);
		if(var_394_bool != 0) {
			@@@var_0_object:AddReply((int)528043, (int)29406, (int)29405);
		}
		@@@var_0_object:AddReply((int)528046, (int)-1, (int)29408);
		@@@var_0_object:AddReply((int)541057, (int)-1, (int)43161);
		goto Label_1040;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3ee";
	}
Label_1040:
	var_409_bool = 0;
	func_2394(var_409_bool);
	if(var_409_bool != 0) {

	Label_1044:
		lshWaitForAnimEnd();
		var_410_string = var_3_string;
		if(var_410_string != 0) {
		} else {
			var_411_string = "";
			var_411_string = var_2_object;
			func_2212(var_411_string);
			goto Label_1044;
	}
		PlayAnimation("all", "idle");

	Label_1059:
		WaitForAnimEnd();
		var_414_string = var_3_string;
		if(var_414_string != 0) {
			goto Label_1069;
		}
		PlayAnimation("all", "idle");
		goto Label_1059;
	}
	goto Label_1069;
	
Label_1069:
	return 0;
	
}


func_2286(var_126_int, var_127_int)
{
	var_128_object = Obj(); var_129_object = Obj();
	CreateIntVector(var_129_object);
	@@var_129_object:add(var_126_int);
	@@var_129_object:add(var_127_int);
	SendWorldWndMessage((int)3, var_129_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_239(var_0_object, var_276_int, var_277_object)
{
	var_279_object = Obj(); var_280_bool = 0; var_281_int = 0; var_282_bool = 0; var_283_object = Obj(); var_284_bool = 0; var_285_int = 0; var_286_bool = 0;
	var_0_object = var_277_object;
	var_287_bool = 0; var_288_object = Obj(); var_289_float = 0;
	var_277_object = var_288_object;
	func_1987(var_287_bool, var_288_object, (float)70.0);
	var_290_bool = var_287_bool == 0; //@nz
	if(var_290_bool != 0) {
		var_276_int = -2;
		return 8;
	}
	CreateDialog(var_283_object);
	var_291_int = 0;
	func_2388(var_291_int);
	@@var_283_object:SetNPCName(var_291_int);
	var_292_int = 0;
	func_2386(var_292_int);
	@@var_283_object:SetNPCDescription(var_292_int);
	var_293_string = "";
	func_2390(var_293_string);
	@@var_283_object:SetPhoto(var_293_string);
	var_294_string = "";
	func_2392(var_294_string);
	@@var_283_object:SetPhoto2(var_294_string);
	var_295_int = 0;
	func_2636(var_295_int);
	@@var_283_object:SetPlayerName(var_295_int);
	IsOverrideActive(var_284_bool);
	var_296_bool = var_284_bool;
	if(var_296_bool != 0) {
		var_276_int = -2;
		return 8;
	}
	DoDialog(var_283_object);
	var_297_bool = 0; var_298_object = Obj();
	func_2265(Obj());
	var_299_object = var_298_object;
	func_2074(var_297_bool, var_298_object);
	var_300_object = Obj(); var_301_object = Obj();
	var_277_object = var_300_object;
	var_283_object = var_301_object;
	TaskCall(3);
	func_320(var_302_object, var_303_object, var_304_string, var_305_bool, var_300_object, var_301_object);
	TaskReturn();
	@@var_283_object:IsDialogEnd(var_286_bool);
	
Label_302:
	var_350_bool = var_286_bool == 0; //@nz
	if(var_350_bool != 0) {
		sync();
		@@var_283_object:IsDialogEnd(var_286_bool);
		goto Label_302;
	}
	var_277_object = Obj();
	func_2056();
	StopDialog(var_283_object);
	@@var_283_object:GetReturnValue((int)-1);
	var_285_int = var_276_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2545(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj();
	GetDiaryRoot(var_68_object);
	var_69_bool = var_68_object == 0; //@nz
	if(var_69_bool != 0) {
		Trace("Can't retrieve diary root");
		var_66_object = 0;
		return 2;
	}
	var_68_object = var_66_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2298(var_115_object, var_116_object, var_117_int)
{
	var_118_int = 0; var_119_int = 0; var_120_bool = 0; var_121_int = 0; var_122_int = 0; var_123_bool = 0;
	@@var_116_object:GetItemID(var_121_int);
	GetInvItemProperty(var_122_int, var_121_int, "Category");
	@@var_115_object:AddItem(var_123_bool, var_116_object, var_122_int, var_117_int);
	var_125_bool = var_123_bool == 0; //@nz
	if(var_125_bool != 0) {
		@@var_115_object:DropItems(var_116_object, var_117_int);
	} else {
		var_126_int = 0; var_127_int = 0;
		var_121_int = var_126_int;
		var_117_int = var_127_int;
		func_2286(var_126_int, var_127_int);
	}
	return 6;
	
}


func_2558(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0;
	func_2545(Obj());
	var_66_object = var_63_object;
	@@var_63_object:Find(var_59_int, var_64_object);
	var_71_bool = var_64_object == 0; //@nz
	if(var_71_bool != 0) {
		var_73_int = "Can't find diary parent with id: " + var_59_int;
		Trace(var_73_int);
		var_57_bool = 0;
		return 6;
	}
	@@var_64_object:AddChild(var_58_object);
	SendWorldWndMessage((int)7);
	@@var_58_object:GetCategory(var_65_int);
	SetDiarySection(var_65_int);
	var_57_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


