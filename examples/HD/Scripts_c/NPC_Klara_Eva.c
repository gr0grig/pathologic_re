// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Love|W:Modesty|W:Fear|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|W:ui/NPC_Eva.png|W:ui/NPC_Eva_b.png|W:k3q03EvaGotoSklad|W:pt_region01_center01|A:AddMark|W:k3q02|W:ook3Eva1|W:ook6Eva1|W:ook6Eva2|A:SelectWeapon|W:quest_k6_01|W:unlock_eva|W:ook11Eva1|W:money1000 is given|W:playsound|W:givemoney|A:ShowMap|W:giveitem|W:k3q03|W:k6q01|W:k11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_eva
// @GLOBALS: 0:object:
// @RUN_OP: 0x919
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a0 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4f0 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6bb vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7f1 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8ef vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0x962 vars=int
// @EVENT_6: op=0x988 vars=
// @EVENT_5: op=0x997 vars=
// @EVENT_45: op=0x9a4 vars=bool
// @EVENT_0: op=0x9b0 vars=object
// @PE: 0x51,0x8b,0xa1,0x133,0x18a,0x1a0,0x47a,0x4da,0x4f0,0x65d,0x6a5,0x6bb,0x79c,0x7db,0x7f1,0x89f,0x8d9,0x8ef,0x919,0x962,0x988,0x9a4,0xba4,0xbdc,0xbe5,0xbeb,0xbf0,0xbf6,0xbfc,0xc05,0xc0a,0xc10,0xc15,0xc1f,0xc25,0xc35,0xc3e,0xc44,0xc50,0xc5c,0xc68,0xc74,0xc80,0xc8c,0xc98,0xca4

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2895();
		var_36_bool = var_31_bool == (int)26833;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529299, (int)30754, (int)30753);
			@@@var_0_object:AddReply((int)525478, (int)-1, (int)26834);
			return 0;
		}
		var_62_bool = var_31_bool == (int)30754;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529301, (int)-1, (int)30755);
			@@@var_0_object:AddReply((int)529302, (int)-1, (int)30756);
			return 0;
		}
		var_3_string = true;
		var_71_bool = 0;
		func_3018(var_71_bool);
		if(var_71_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2895();
		var_36_bool = var_32_cvector == (int)26913;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3036();
		}
		var_65_bool = var_32_cvector == (int)41094;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_3036();
		}
		var_69_bool = var_32_cvector == (int)41086;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_3036();
		}
		var_73_bool = var_32_cvector == (int)41082;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_3036();
		}
		var_77_bool = var_32_cvector == (int)42902;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_3125();
		}
		var_91_bool = var_32_cvector == (int)26925;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_3045();
		}
		var_97_bool = var_32_cvector == (int)26929;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_3051();
		}
		var_109_bool = var_32_cvector == (int)41060;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_3051();
		}
		var_113_bool = var_32_cvector == (int)41059;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_3020();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_3109(var_133_object);
		}
		var_159_bool = var_31_bool == (int)26904;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525548);
			@@@var_0_object:ClearReplies();
			var_178_bool = 0; var_179_object = Obj();
			var_179_object = var_1_object;
			func_3140(var_179_object);
			if(var_178_bool != 0) {
				@@@var_0_object:AddReply((int)525549, (int)42898, (int)26905);
			}
			var_189_bool = 0;
			var_189_bool = 0;
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_3152(var_191_object);
			if(var_190_bool != 0) {
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_3164(var_197_object);
				if(var_196_bool != 0) {
					var_189_bool = 1;
				}
			}
			if(var_189_bool != 0) {
				@@@var_0_object:AddReply((int)525578, (int)41036, (int)26925);
			}
			@@@var_0_object:AddReply((int)539127, (int)-1, (int)41057);
			@@@var_0_object:AddReply((int)525558, (int)-1, (int)26914);
			return 0;
		}
		var_212_bool = var_31_bool == (int)41036;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_394(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)539108);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539110, (int)41039, (int)41038);
			@@@var_0_object:AddReply((int)539112, (int)41041, (int)41040);
			return 0;
		}
		var_222_bool = var_31_bool == (int)41041;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539113);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525580, (int)41046, (int)26927);
			@@@var_0_object:AddReply((int)539114, (int)26926, (int)41042);
			return 0;
		}
		var_232_bool = var_31_bool == (int)41046;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539117);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539118, (int)41048, (int)41047);
			@@@var_0_object:AddReply((int)539120, (int)41052, (int)41049);
			return 0;
		}
		var_242_bool = var_31_bool == (int)41052;
		if(var_242_bool != 0) {
			var_243_object = Obj(); var_244_object = Obj();
			var_243_object = var_1_object;
			var_244_object = var_0_object;
			func_3093(var_244_object);
			var_264_object = Obj(); var_265_object = Obj();
			var_264_object = var_1_object;
			var_265_object = var_0_object;
			func_3103();
			var_268_string = "";
			func_394(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)539123);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539124, (int)26926, (int)41053);
			return 0;
		}
		var_274_bool = var_31_bool == (int)41048;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539119);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539121, (int)41055, (int)41050);
			@@@var_0_object:AddReply((int)539122, (int)-1, (int)41051);
			return 0;
		}
		var_284_bool = var_31_bool == (int)41055;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539126, (int)-1, (int)41056);
			return 0;
		}
		var_291_bool = var_31_bool == (int)41039;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_394(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)539111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539109, (int)26926, (int)41037);
			@@@var_0_object:AddReply((int)539115, (int)41048, (int)41044);
			return 0;
		}
		var_301_bool = var_31_bool == (int)26926;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_394(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)525579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539116, (int)26928, (int)41045);
			@@@var_0_object:AddReply((int)539128, (int)-1, (int)41059);
			return 0;
		}
		var_311_bool = var_31_bool == (int)26928;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525582, (int)-1, (int)26929);
			@@@var_0_object:AddReply((int)539129, (int)-1, (int)41060);
			return 0;
		}
		var_321_bool = var_31_bool == (int)42898;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540840);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540841, (int)41064, (int)42899);
			@@@var_0_object:AddReply((int)540842, (int)42901, (int)42900);
			return 0;
		}
		var_331_bool = var_31_bool == (int)42901;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_394(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)540843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540844, (int)-1, (int)42902);
			return 0;
		}
		var_338_bool = var_31_bool == (int)41064;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_394(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)539133);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539134, (int)41061, (int)41065);
			@@@var_0_object:AddReply((int)539142, (int)41061, (int)41073);
			return 0;
		}
		var_348_bool = var_31_bool == (int)41061;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_394(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)539130);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539132, (int)41071, (int)41063);
			@@@var_0_object:AddReply((int)539131, (int)41067, (int)41062);
			return 0;
		}
		var_358_bool = var_31_bool == (int)41067;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539136);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539137, (int)41069, (int)41068);
			@@@var_0_object:AddReply((int)539158, (int)41069, (int)41096);
			return 0;
		}
		var_368_bool = var_31_bool == (int)41071;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_394(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)539140);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539141, (int)41069, (int)41072);
			@@@var_0_object:AddReply((int)539143, (int)41076, (int)41075);
			return 0;
		}
		var_378_bool = var_31_bool == (int)41076;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_394(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)539144);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539145, (int)41069, (int)41077);
			@@@var_0_object:AddReply((int)539146, (int)41079, (int)41078);
			return 0;
		}
		var_388_bool = var_31_bool == (int)41079;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539147);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539148, (int)41069, (int)41081);
			@@@var_0_object:AddReply((int)539149, (int)-1, (int)41082);
			return 0;
		}
		var_398_bool = var_31_bool == (int)41069;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_394(var_32_cvector, "Love");
			@@@var_0_object:SetMessage((int)539138);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539150, (int)41085, (int)41084);
			@@@var_0_object:AddReply((int)539152, (int)-1, (int)41086);
			return 0;
		}
		var_408_bool = var_31_bool == (int)41085;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539151);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539139, (int)26906, (int)41070);
			@@@var_0_object:AddReply((int)539153, (int)26906, (int)41087);
			return 0;
		}
		var_418_bool = var_31_bool == (int)26906;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_394(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525550);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525551, (int)26908, (int)26907);
			@@@var_0_object:AddReply((int)539154, (int)26908, (int)41089);
			return 0;
		}
		var_428_bool = var_31_bool == (int)26908;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_394(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)525552);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525553, (int)41092, (int)26909);
			@@@var_0_object:AddReply((int)539155, (int)41092, (int)41091);
			return 0;
		}
		var_438_bool = var_31_bool == (int)41092;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_394(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)539156);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525557, (int)-1, (int)26913);
			@@@var_0_object:AddReply((int)539157, (int)-1, (int)41094);
			return 0;
		}
		var_3_string = true;
		var_447_bool = 0;
		func_3018(var_447_bool);
		if(var_447_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a1";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2895();
		var_36_bool = var_32_cvector == (int)27323;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3056();
		}
		var_42_bool = var_32_cvector == (int)27327;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_3077();
		}
		var_69_bool = var_32_cvector == (int)43232;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_3077();
		}
		var_73_bool = var_32_cvector == (int)27353;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_3062();
		}
		var_79_bool = var_32_cvector == (int)27362;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_3068(var_81_object);
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_3134();
		}
		var_93_bool = var_31_bool == (int)27322;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_1242(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)526037);
			@@@var_0_object:ClearReplies();
			var_112_bool = 0;
			var_112_bool = 0;
			var_113_bool = 0; var_114_object = Obj();
			var_114_object = var_1_object;
			func_3176(var_114_object);
			if(var_113_bool != 0) {
				var_121_bool = 0; var_122_object = Obj();
				var_122_object = var_1_object;
				func_3188(var_122_object);
				if(var_121_bool != 0) {
					var_112_bool = 1;
				}
			}
			if(var_112_bool != 0) {
				@@@var_0_object:AddReply((int)526038, (int)30287, (int)27323);
			}
			var_130_bool = 0;
			var_130_bool = 0;
			var_131_bool = 0; var_132_object = Obj();
			var_132_object = var_1_object;
			func_3200(var_132_object);
			if(var_131_bool != 0) {
				var_137_bool = 0; var_138_object = Obj();
				var_138_object = var_1_object;
				func_3212(var_138_object);
				if(var_137_bool != 0) {
					var_130_bool = 1;
				}
			}
			if(var_130_bool != 0) {
				@@@var_0_object:AddReply((int)526068, (int)27354, (int)27353);
			}
			@@@var_0_object:AddReply((int)526043, (int)-1, (int)27328);
			@@@var_0_object:AddReply((int)528864, (int)-1, (int)30286);
			return 0;
		}
		var_153_bool = var_31_bool == (int)27354;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_1242(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526069);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526070, (int)27356, (int)27355);
			return 0;
		}
		var_160_bool = var_31_bool == (int)27356;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_1242(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526072, (int)27359, (int)27357);
			@@@var_0_object:AddReply((int)526073, (int)27359, (int)27358);
			return 0;
		}
		var_170_bool = var_31_bool == (int)27359;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_1242(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)526074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526075, (int)27361, (int)27360);
			return 0;
		}
		var_177_bool = var_31_bool == (int)27361;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_1242(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)526076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526077, (int)-1, (int)27362);
			return 0;
		}
		var_184_bool = var_31_bool == (int)30287;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_1242(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)528865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528866, (int)27324, (int)30288);
			@@@var_0_object:AddReply((int)528867, (int)27324, (int)30289);
			return 0;
		}
		var_194_bool = var_31_bool == (int)27324;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_1242(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526039);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526040, (int)27326, (int)27325);
			@@@var_0_object:AddReply((int)541116, (int)-1, (int)43232);
			return 0;
		}
		var_204_bool = var_31_bool == (int)27326;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_1242(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526041);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528868, (int)30292, (int)30291);
			return 0;
		}
		var_211_bool = var_31_bool == (int)30292;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_1242(var_32_cvector, "Modesty");
			@@@var_0_object:SetMessage((int)528869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526042, (int)-1, (int)27327);
			return 0;
		}
		var_3_string = true;
		var_217_bool = 0;
		func_3018(var_217_bool);
		if(var_217_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4f1";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2895();
		var_36_bool = var_32_cvector == (int)28493;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3082();
		}
		var_42_bool = var_32_cvector == (int)28602;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_3088();
		}
		var_69_bool = var_32_cvector == (int)28603;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_3088();
		}
		var_73_bool = var_31_bool == (int)28492;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_1701(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527184);
			@@@var_0_object:ClearReplies();
			var_92_bool = 0;
			var_92_bool = 0;
			var_93_bool = 0; var_94_object = Obj();
			var_94_object = var_1_object;
			func_3224(var_94_object);
			if(var_93_bool != 0) {
				var_101_bool = 0; var_102_object = Obj();
				var_102_object = var_1_object;
				func_3236(var_102_object);
				if(var_101_bool != 0) {
					var_92_bool = 1;
				}
			}
			if(var_92_bool != 0) {
				@@@var_0_object:AddReply((int)527185, (int)28494, (int)28493);
			}
			@@@var_0_object:AddReply((int)527188, (int)-1, (int)28496);
			return 0;
		}
		var_114_bool = var_31_bool == (int)28494;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_1701(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527186);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527187, (int)28597, (int)28495);
			return 0;
		}
		var_121_bool = var_31_bool == (int)28597;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_1701(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527285, (int)28600, (int)28598);
			@@@var_0_object:AddReply((int)527286, (int)28600, (int)28599);
			return 0;
		}
		var_131_bool = var_31_bool == (int)28600;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_1701(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527287);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527288, (int)-1, (int)28602);
			@@@var_0_object:AddReply((int)527289, (int)-1, (int)28603);
			return 0;
		}
		var_3_string = true;
		var_140_bool = 0;
		func_3018(var_140_bool);
		if(var_140_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6bc";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2895();
		var_36_bool = var_31_bool == (int)36906;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2011(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_65_bool = var_31_bool == (int)36953;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_2011(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_75_bool = var_31_bool == (int)36957;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_2011(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_84_bool = 0;
		func_3018(var_84_bool);
		if(var_84_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7f2";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_2895();
		var_36_bool = var_31_int == (int)42548;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2265(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_3018(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8f0";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_2398();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_2619(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_2367(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_2347(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_2902(Obj());
				var_77_object = var_76_object;
				func_2769(var_75_bool, var_76_object);
			}
		} else {
			func_2362(var_31_int);
			func_2389();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2580();
	func_2398();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_2398();
	var_32_string = "";
	func_2849("Neutral");
	func_2389();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_2389();
	} else {
		var_38_string = "";
		func_2849("Neutral");
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
		func_2580();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_2610(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_3421(var_49_object);
		var_645_string = "";
		func_2849("Neutral");
		func_2398();
		func_2389();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2333(var_30_cvector);
	return 0;
}


func_0(var_0_object, var_54_int, var_55_object)
{
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0;
	var_0_object = var_55_object;
	var_65_bool = 0; var_66_object = Obj(); var_67_float = 0;
	var_55_object = var_66_object;
	func_2624(var_65_bool, var_66_object, (float)70.0);
	var_112_bool = var_65_bool == 0; //@nz
	if(var_112_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	CreateDialog(var_61_object);
	var_113_int = 0;
	func_3012(var_113_int);
	@@var_61_object:SetNPCName(var_113_int);
	var_114_int = 0;
	func_3010(var_114_int);
	@@var_61_object:SetNPCDescription(var_114_int);
	var_115_string = "";
	func_3014(var_115_string);
	@@var_61_object:SetPhoto(var_115_string);
	var_116_string = "";
	func_3016(var_116_string);
	@@var_61_object:SetPhoto2(var_116_string);
	var_117_int = 0;
	func_3404(var_117_int);
	@@var_61_object:SetPlayerName(var_117_int);
	IsOverrideActive(var_62_bool);
	var_125_bool = var_62_bool;
	if(var_125_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	DoDialog(var_61_object);
	var_126_bool = 0; var_127_object = Obj();
	func_2902(Obj());
	var_128_object = var_127_object;
	func_2711(var_126_bool, var_127_object);
	var_221_object = Obj(); var_222_object = Obj();
	var_55_object = var_221_object;
	var_61_object = var_222_object;
	TaskCall(1);
	func_81(var_223_object, var_224_object, var_225_string, var_226_bool, var_221_object, var_222_object);
	TaskReturn();
	@@var_61_object:IsDialogEnd(var_64_bool);
	
Label_63:
	var_270_bool = var_64_bool == 0; //@nz
	if(var_270_bool != 0) {
		sync();
		@@var_61_object:IsDialogEnd(var_64_bool);
		goto Label_63;
	}
	var_55_object = Obj();
	func_2693();
	StopDialog(var_61_object);
	@@var_61_object:GetReturnValue((int)-1);
	var_63_int = var_54_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3077()
{
	func_3300();
	return 0;
}


func_3082()
{
	SetVariable("ook11Eva1", (int)1);
	return 0;
}


func_1548(var_0_object, var_459_int, var_460_object)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0;
	var_0_object = var_460_object;
	var_470_bool = 0; var_471_object = Obj(); var_472_float = 0;
	var_460_object = var_471_object;
	func_2624(var_470_bool, var_471_object, (float)70.0);
	var_473_bool = var_470_bool == 0; //@nz
	if(var_473_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	CreateDialog(var_466_object);
	var_474_int = 0;
	func_3012(var_474_int);
	@@var_466_object:SetNPCName(var_474_int);
	var_475_int = 0;
	func_3010(var_475_int);
	@@var_466_object:SetNPCDescription(var_475_int);
	var_476_string = "";
	func_3014(var_476_string);
	@@var_466_object:SetPhoto(var_476_string);
	var_477_string = "";
	func_3016(var_477_string);
	@@var_466_object:SetPhoto2(var_477_string);
	var_478_int = 0;
	func_3404(var_478_int);
	@@var_466_object:SetPlayerName(var_478_int);
	IsOverrideActive(var_467_bool);
	var_479_bool = var_467_bool;
	if(var_479_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	DoDialog(var_466_object);
	var_480_bool = 0; var_481_object = Obj();
	func_2902(Obj());
	var_482_object = var_481_object;
	func_2711(var_480_bool, var_481_object);
	var_483_object = Obj(); var_484_object = Obj();
	var_460_object = var_483_object;
	var_466_object = var_484_object;
	TaskCall(7);
	func_1629(var_485_object, var_486_object, var_487_string, var_488_bool, var_483_object, var_484_object);
	TaskReturn();
	@@var_466_object:IsDialogEnd(var_469_bool);
	
Label_1611:
	var_526_bool = var_469_bool == 0; //@nz
	if(var_526_bool != 0) {
		sync();
		@@var_466_object:IsDialogEnd(var_469_bool);
		goto Label_1611;
	}
	var_460_object = Obj();
	func_2693();
	StopDialog(var_466_object);
	@@var_466_object:GetReturnValue((int)-1);
	var_468_int = var_459_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3088()
{
	func_3248();
	return 0;
}


func_2578(var_69_bool)
{
	var_69_bool = 1;
	return 0;
}


func_2580()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3093(var_243_object)
{
	Trace("money1000 is given");
	var_246_object = Obj(); var_247_int = 0;
	var_243_object = var_246_object;
	func_2935(var_246_object, (int)1000);
	return 0;
}


func_2585(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_3354(var_118_object)
{
	var_119_object = Obj(); var_120_object = Obj(); var_121_object = Obj(); var_122_object = Obj();
	GetMainOutdoorScene(var_121_object);
	var_123_bool = var_121_object == 0; //@ne
	if(var_123_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_122_object = 0;
		var_122_object = var_118_object;
		return 4;
	}
	@@var_121_object:GetMap(var_122_object);
	var_122_object = var_118_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2333(var_0_object)
{
	var_31_bool = 0;
	func_2619(var_31_bool);
	var_34_bool = var_31_bool == 0; //@nz
	if(var_34_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2342:
	func_2509();
	goto Label_2342;
}
EMIT "Return(); Pop(0)";


func_3103()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_2593(var_250_object, var_251_string, var_252_int)
{
	var_253_int = 0; var_254_int = 0;
	@@var_250_object:GetProperty(var_251_string, var_254_int);
	var_255_int = var_254_int + var_252_int;
	@@var_250_object:SetProperty(var_251_string, var_255_int);
	return 2;
}


func_2849(var_254_string)
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


func_3109(var_133_object)
{
	var_134_object = Obj(); var_135_string = ""; var_136_float = 0;
	func_3354(Obj());
	var_137_object = var_134_object;
	func_3371(var_134_object, "pt_region01_center01", (float)2);
	var_157_object = Obj();
	func_3354(var_157_object);
	@@var_133_object:ShowMap(var_157_object);
	return 0;
}


func_2600(var_39_bool, var_40_cvector)
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


func_1065(var_0_object, var_369_int, var_370_object)
{
	var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0; var_376_object = Obj(); var_377_bool = 0; var_378_int = 0; var_379_bool = 0;
	var_0_object = var_370_object;
	var_380_bool = 0; var_381_object = Obj(); var_382_float = 0;
	var_370_object = var_381_object;
	func_2624(var_380_bool, var_381_object, (float)70.0);
	var_383_bool = var_380_bool == 0; //@nz
	if(var_383_bool != 0) {
		var_369_int = -2;
		return 8;
	}
	CreateDialog(var_376_object);
	var_384_int = 0;
	func_3012(var_384_int);
	@@var_376_object:SetNPCName(var_384_int);
	var_385_int = 0;
	func_3010(var_385_int);
	@@var_376_object:SetNPCDescription(var_385_int);
	var_386_string = "";
	func_3014(var_386_string);
	@@var_376_object:SetPhoto(var_386_string);
	var_387_string = "";
	func_3016(var_387_string);
	@@var_376_object:SetPhoto2(var_387_string);
	var_388_int = 0;
	func_3404(var_388_int);
	@@var_376_object:SetPlayerName(var_388_int);
	IsOverrideActive(var_377_bool);
	var_389_bool = var_377_bool;
	if(var_389_bool != 0) {
		var_369_int = -2;
		return 8;
	}
	DoDialog(var_376_object);
	var_390_bool = 0; var_391_object = Obj();
	func_2902(Obj());
	var_392_object = var_391_object;
	func_2711(var_390_bool, var_391_object);
	var_393_object = Obj(); var_394_object = Obj();
	var_370_object = var_393_object;
	var_376_object = var_394_object;
	TaskCall(5);
	func_1146(var_395_object, var_396_object, var_397_string, var_398_bool, var_393_object, var_394_object);
	TaskReturn();
	@@var_376_object:IsDialogEnd(var_379_bool);
	
Label_1128:
	var_455_bool = var_379_bool == 0; //@nz
	if(var_455_bool != 0) {
		sync();
		@@var_376_object:IsDialogEnd(var_379_bool);
		goto Label_1128;
	}
	var_370_object = Obj();
	func_2693();
	StopDialog(var_376_object);
	@@var_376_object:GetReturnValue((int)-1);
	var_378_int = var_369_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2347(var_56_bool)
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
	func_2610(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3371(var_134_object, var_135_string, var_136_float)
{
	var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_object = Obj(); var_141_bool = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_object = Obj(); var_145_bool = 0;
	GetMainOutdoorScene(var_144_object);
	var_146_bool = var_144_object == 0; //@ne
	if(var_146_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_144_object:GetLocator(var_135_string, var_145_bool, var_142_cvector, var_143_cvector);
	var_148_bool = var_145_bool == 0; //@nz
	if(var_148_bool != 0) {
		var_150_int = "Warning: outdoor scene locator " + var_135_string;
		var_152_int = var_150_int + " doesnt exist";
		Trace(var_152_int);
	}
	@@var_144_object:GetMap(var_134_object);
	var_153_bool = var_134_object == 0; //@ne
	if(var_153_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_155_float = GetByIndex(var_142_cvector, 0);
	var_156_float = GetByIndex(var_142_cvector, 2);
	@@var_134_object:SetMapParams(var_155_float, var_156_float, var_136_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2865(var_232_string, var_233_bool)
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


func_2610(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_2600(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_308_object, var_309_object)
{
	var_0_object = var_309_object;
	var_1_object = var_308_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_315_string = "";
		func_394(var_309_object, "Neutral");
		@@@var_0_object:SetMessage((int)525548);
		@@@var_0_object:ClearReplies();
		var_324_bool = 0; var_325_object = Obj();
		var_325_object = var_1_object;
		func_3140(var_325_object);
		if(var_324_bool != 0) {
			@@@var_0_object:AddReply((int)525549, (int)42898, (int)26905);
		}
		var_335_bool = 0;
		var_335_bool = 0;
		var_336_bool = 0; var_337_object = Obj();
		var_337_object = var_1_object;
		func_3152(var_337_object);
		if(var_336_bool != 0) {
			var_342_bool = 0; var_343_object = Obj();
			var_343_object = var_1_object;
			func_3164(var_343_object);
			if(var_342_bool != 0) {
				var_335_bool = 1;
			}
		}
		if(var_335_bool != 0) {
			@@@var_0_object:AddReply((int)525578, (int)41036, (int)26925);
		}
		@@@var_0_object:AddReply((int)539127, (int)-1, (int)41057);
		@@@var_0_object:AddReply((int)525558, (int)-1, (int)26914);
		goto Label_364;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x137";
	}
Label_364:
	var_357_bool = 0;
	func_3018(var_357_bool);
	if(var_357_bool != 0) {

	Label_368:
		lshWaitForAnimEnd();
		var_358_string = var_3_string;
		if(var_358_string != 0) {
		} else {
			var_359_string = "";
			var_359_string = var_2_object;
			func_2849(var_359_string);
			goto Label_368;
	}
		PlayAnimation("all", "idle");

	Label_383:
		WaitForAnimEnd();
		var_362_string = var_3_string;
		if(var_362_string != 0) {
			goto Label_393;
		}
		PlayAnimation("all", "idle");
		goto Label_383;
	}
	goto Label_393;
	
Label_393:
	return 0;
	
}


func_3125()
{
	SetVariable("k3q02", (int)-1);
	func_3261();
	return 0;
}


func_2362(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_2619(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
	return 2;
}


func_3134()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2367(var_39_bool)
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
	func_2585(var_46_float, var_47_object);
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


func_2624(var_65_bool, var_66_object, var_67_float)
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
	func_2908(var_92_cvector, var_93_cvector);
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
	func_3018(var_108_bool);
	if(var_108_bool != 0) {
	} else {
		HasAnimationTrack(var_85_bool, "head");
		var_110_bool = var_85_bool;
		if(var_110_bool == 0) goto Label_2687;
		LookAsyncCamera("head");
	}
Label_2687:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_65_bool = 1;
	return 18;
	
}


func_2880(var_160_bool, var_161_string)
{
	var_162_bool = 0; var_163_bool = 0;
	var_164_bool = 0;
	func_3018(var_164_bool);
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


func_3140(var_324_bool)
{
	var_326_int = 0; var_327_string = "";
	func_2918(var_326_int, "k3q02");
	var_331_bool = var_326_int == (int)2;
	if(var_331_bool != 0) {
		var_324_bool = 1;
		return 0;
	}
	var_324_bool = 0;
	return 0;
}


func_1867(var_0_object, var_530_int, var_531_object)
{
	var_533_object = Obj(); var_534_bool = 0; var_535_int = 0; var_536_bool = 0; var_537_object = Obj(); var_538_bool = 0; var_539_int = 0; var_540_bool = 0;
	var_0_object = var_531_object;
	var_541_bool = 0; var_542_object = Obj(); var_543_float = 0;
	var_531_object = var_542_object;
	func_2624(var_541_bool, var_542_object, (float)70.0);
	var_544_bool = var_541_bool == 0; //@nz
	if(var_544_bool != 0) {
		var_530_int = -2;
		return 8;
	}
	CreateDialog(var_537_object);
	var_545_int = 0;
	func_3012(var_545_int);
	@@var_537_object:SetNPCName(var_545_int);
	var_546_int = 0;
	func_3010(var_546_int);
	@@var_537_object:SetNPCDescription(var_546_int);
	var_547_string = "";
	func_3014(var_547_string);
	@@var_537_object:SetPhoto(var_547_string);
	var_548_string = "";
	func_3016(var_548_string);
	@@var_537_object:SetPhoto2(var_548_string);
	var_549_int = 0;
	func_3404(var_549_int);
	@@var_537_object:SetPlayerName(var_549_int);
	IsOverrideActive(var_538_bool);
	var_550_bool = var_538_bool;
	if(var_550_bool != 0) {
		var_530_int = -2;
		return 8;
	}
	DoDialog(var_537_object);
	var_551_bool = 0; var_552_object = Obj();
	func_2902(Obj());
	var_553_object = var_552_object;
	func_2711(var_551_bool, var_552_object);
	var_554_object = Obj(); var_555_object = Obj();
	var_531_object = var_554_object;
	var_537_object = var_555_object;
	TaskCall(9);
	func_1948(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object);
	TaskReturn();
	@@var_537_object:IsDialogEnd(var_540_bool);
	
Label_1930:
	var_587_bool = var_540_bool == 0; //@nz
	if(var_587_bool != 0) {
		sync();
		@@var_537_object:IsDialogEnd(var_540_bool);
		goto Label_1930;
	}
	var_531_object = Obj();
	func_2693();
	StopDialog(var_537_object);
	@@var_537_object:GetReturnValue((int)-1);
	var_539_int = var_530_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3404(var_117_int)
{
	var_118_int = 0; var_119_int = 0;
	GetVariable("branch", var_119_int);
	var_122_bool = var_119_int == (int)0;
	if(var_122_bool != 0) {
		var_117_int = 1;
		return 2;
	EMIT "GOTO 0xd5b";
	}
	var_124_bool = var_119_int == (int)1;
	if(var_124_bool != 0) {
		var_117_int = 2;
		return 2;
	}
	var_117_int = 3;
	return 2;
}


func_2126(var_0_object, var_589_int, var_590_object)
{
	var_592_object = Obj(); var_593_bool = 0; var_594_int = 0; var_595_bool = 0; var_596_object = Obj(); var_597_bool = 0; var_598_int = 0; var_599_bool = 0;
	var_0_object = var_590_object;
	var_600_bool = 0; var_601_object = Obj(); var_602_float = 0;
	var_590_object = var_601_object;
	func_2624(var_600_bool, var_601_object, (float)70.0);
	var_603_bool = var_600_bool == 0; //@nz
	if(var_603_bool != 0) {
		var_589_int = -2;
		return 8;
	}
	CreateDialog(var_596_object);
	var_604_int = 0;
	func_3012(var_604_int);
	@@var_596_object:SetNPCName(var_604_int);
	var_605_int = 0;
	func_3010(var_605_int);
	@@var_596_object:SetNPCDescription(var_605_int);
	var_606_string = "";
	func_3014(var_606_string);
	@@var_596_object:SetPhoto(var_606_string);
	var_607_string = "";
	func_3016(var_607_string);
	@@var_596_object:SetPhoto2(var_607_string);
	var_608_int = 0;
	func_3404(var_608_int);
	@@var_596_object:SetPlayerName(var_608_int);
	IsOverrideActive(var_597_bool);
	var_609_bool = var_597_bool;
	if(var_609_bool != 0) {
		var_589_int = -2;
		return 8;
	}
	DoDialog(var_596_object);
	var_610_bool = 0; var_611_object = Obj();
	func_2902(Obj());
	var_612_object = var_611_object;
	func_2711(var_610_bool, var_611_object);
	var_613_object = Obj(); var_614_object = Obj();
	var_590_object = var_613_object;
	var_596_object = var_614_object;
	TaskCall(11);
	func_2207(var_615_object, var_616_object, var_617_string, var_618_bool, var_613_object, var_614_object);
	TaskReturn();
	@@var_596_object:IsDialogEnd(var_599_bool);
	
Label_2189:
	var_643_bool = var_599_bool == 0; //@nz
	if(var_643_bool != 0) {
		sync();
		@@var_596_object:IsDialogEnd(var_599_bool);
		goto Label_2189;
	}
	var_590_object = Obj();
	func_2693();
	StopDialog(var_596_object);
	@@var_596_object:GetReturnValue((int)-1);
	var_598_int = var_589_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2895()
{
	var_34_bool = 0;
	func_3018(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3152(var_336_bool)
{
	var_338_int = 0; var_339_string = "";
	func_2918(var_338_int, "k3q03");
	var_341_bool = var_338_int == (int)1;
	if(var_341_bool != 0) {
		var_336_bool = 1;
		return 0;
	}
	var_336_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_221_object, var_222_object)
{
	var_0_object = var_222_object;
	var_1_object = var_221_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_228_string = "";
		func_139(var_222_object, "Neutral");
		@@@var_0_object:SetMessage((int)525477);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529299, (int)30754, (int)30753);
		@@@var_0_object:AddReply((int)525478, (int)-1, (int)26834);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_252_bool = 0;
	func_3018(var_252_bool);
	if(var_252_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_253_string = var_3_string;
		if(var_253_string != 0) {
		} else {
			var_254_string = "";
			var_254_string = var_2_object;
			func_2849(var_254_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_267_string = var_3_string;
		if(var_267_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_2389()
{
	var_647_float = 0; var_648_float = 0;
	rand(var_648_float, (int)8, (int)16);
	SetTimer((int)10, var_648_float);
	return 2;
}


func_2902(var_128_object)
{
	var_129_object = Obj(); var_130_object = Obj();
	self(var_130_object);
	var_130_object = var_128_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3164(var_342_bool)
{
	var_344_int = 0; var_345_string = "";
	func_2918(var_344_int, "ook3Eva1");
	var_347_bool = var_344_int == (int)0;
	if(var_347_bool != 0) {
		var_342_bool = 1;
		return 0;
	}
	var_342_bool = 0;
	return 0;
}


func_1629(var_0_object, var_1_object, var_2_object, var_3_string, var_483_object, var_484_object)
{
	var_0_object = var_484_object;
	var_1_object = var_483_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_490_string = "";
		func_1701(var_484_object, "Neutral");
		@@@var_0_object:SetMessage((int)527184);
		@@@var_0_object:ClearReplies();
		var_499_bool = 0;
		var_499_bool = 0;
		var_500_bool = 0; var_501_object = Obj();
		var_501_object = var_1_object;
		func_3224(var_501_object);
		if(var_500_bool != 0) {
			var_506_bool = 0; var_507_object = Obj();
			var_507_object = var_1_object;
			func_3236(var_507_object);
			if(var_506_bool != 0) {
				var_499_bool = 1;
			}
		}
		if(var_499_bool != 0) {
			@@@var_0_object:AddReply((int)527185, (int)28494, (int)28493);
		}
		@@@var_0_object:AddReply((int)527188, (int)-1, (int)28496);
		goto Label_1671;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x661";
	}
Label_1671:
	var_518_bool = 0;
	func_3018(var_518_bool);
	if(var_518_bool != 0) {

	Label_1675:
		lshWaitForAnimEnd();
		var_519_string = var_3_string;
		if(var_519_string != 0) {
		} else {
			var_520_string = "";
			var_520_string = var_2_object;
			func_2849(var_520_string);
			goto Label_1675;
	}
		PlayAnimation("all", "idle");

	Label_1690:
		WaitForAnimEnd();
		var_523_string = var_3_string;
		if(var_523_string != 0) {
			goto Label_1700;
		}
		PlayAnimation("all", "idle");
		goto Label_1690;
	}
	goto Label_1700;
	
Label_1700:
	return 0;
	
}


func_2908(var_92_cvector, var_93_cvector)
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


func_3421(var_49_object)
{
	var_50_int = 0; var_51_int = 0;
	GetVariable("mt_eva", var_51_int);
	var_53_bool = var_51_int == 0; //@nz
	if(var_53_bool != 0) {
		var_54_int = 0; var_55_object = Obj();
		var_49_object = var_55_object;
		TaskCall(0);
		func_0(var_56_object, var_54_int, var_55_object);
		TaskReturn();
		SetVariable("mt_eva", (int)1);
	}
	var_281_bool = 0; var_282_int = 0;
	func_2980(var_281_bool, (int)3);
	if(var_281_bool != 0) {
		var_284_int = 0; var_285_object = Obj();
		var_49_object = var_285_object;
		TaskCall(2);
		func_226(var_286_object, var_284_int, var_285_object);
		TaskReturn();
		return 2;
	}
	var_367_bool = 0; var_368_int = 0;
	func_2980(var_367_bool, (int)6);
	if(var_367_bool != 0) {
		var_369_int = 0; var_370_object = Obj();
		var_49_object = var_370_object;
		TaskCall(4);
		func_1065(var_371_object, var_369_int, var_370_object);
		TaskReturn();
		return 2;
	}
	var_457_bool = 0; var_458_int = 0;
	func_2980(var_457_bool, (int)11);
	if(var_457_bool != 0) {
		var_459_int = 0; var_460_object = Obj();
		var_49_object = var_460_object;
		TaskCall(6);
		func_1548(var_461_object, var_459_int, var_460_object);
		TaskReturn();
		return 2;
	}
	var_528_bool = 0; var_529_int = 0;
	func_2980(var_528_bool, (int)12);
	if(var_528_bool != 0) {
		var_530_int = 0; var_531_object = Obj();
		var_49_object = var_531_object;
		TaskCall(8);
		func_1867(var_532_object, var_530_int, var_531_object);
		TaskReturn();
		return 2;
	}
	var_589_int = 0; var_590_object = Obj();
	var_49_object = var_590_object;
	TaskCall(10);
	func_2126(var_591_object, var_589_int, var_590_object);
	TaskReturn();
	return 2;
}


func_2398()
{
	KillTimer((int)10);
	return 0;
}


func_2918(var_326_int, var_327_string)
{
	var_328_int = 0; var_329_int = 0;
	GetVariable(var_327_string, var_329_int);
	var_329_int = var_326_int;
	return 2;
}


func_3176(var_410_bool)
{
	var_412_int = 0; var_413_string = "";
	func_2918(var_412_int, "k6q01");
	var_415_bool = var_412_int == (int)1;
	if(var_415_bool != 0) {
		var_410_bool = 1;
		return 0;
	}
	var_410_bool = 0;
	return 0;
}


func_2923(var_259_int, var_260_int)
{
	var_261_object = Obj(); var_262_object = Obj();
	CreateIntVector(var_262_object);
	@@var_262_object:add(var_259_int);
	@@var_262_object:add(var_260_int);
	SendWorldWndMessage((int)3, var_262_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3188(var_416_bool)
{
	var_418_int = 0; var_419_string = "";
	func_2918(var_418_int, "ook6Eva1");
	var_421_bool = var_418_int == (int)0;
	if(var_421_bool != 0) {
		var_416_bool = 1;
		return 0;
	}
	var_416_bool = 0;
	return 0;
}


func_2935(var_246_object, var_247_int)
{
	var_248_int = 0; var_249_int = 0;
	var_250_object = Obj(); var_251_string = ""; var_252_int = 0;
	var_246_object = var_250_object;
	var_247_int = var_252_int;
	func_2593(var_250_object, "money", var_252_int);
	var_257_bool = var_247_int > (int)0;
	if(var_257_bool != 0) {
		GetInvItemByName(var_249_int, "Money");
		var_259_int = 0; var_260_int = 0;
		var_249_int = var_259_int;
		var_247_int = var_260_int;
		func_2923(var_259_int, var_260_int);
	}
	return 2;
}


func_1146(var_0_object, var_1_object, var_2_object, var_3_string, var_393_object, var_394_object)
{
	var_0_object = var_394_object;
	var_1_object = var_393_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_400_string = "";
		func_1242(var_394_object, "Fear");
		@@@var_0_object:SetMessage((int)526037);
		@@@var_0_object:ClearReplies();
		var_409_bool = 0;
		var_409_bool = 0;
		var_410_bool = 0; var_411_object = Obj();
		var_411_object = var_1_object;
		func_3176(var_411_object);
		if(var_410_bool != 0) {
			var_416_bool = 0; var_417_object = Obj();
			var_417_object = var_1_object;
			func_3188(var_417_object);
			if(var_416_bool != 0) {
				var_409_bool = 1;
			}
		}
		if(var_409_bool != 0) {
			@@@var_0_object:AddReply((int)526038, (int)30287, (int)27323);
		}
		var_425_bool = 0;
		var_425_bool = 0;
		var_426_bool = 0; var_427_object = Obj();
		var_427_object = var_1_object;
		func_3200(var_427_object);
		if(var_426_bool != 0) {
			var_432_bool = 0; var_433_object = Obj();
			var_433_object = var_1_object;
			func_3212(var_433_object);
			if(var_432_bool != 0) {
				var_425_bool = 1;
			}
		}
		if(var_425_bool != 0) {
			@@@var_0_object:AddReply((int)526068, (int)27354, (int)27353);
		}
		@@@var_0_object:AddReply((int)526043, (int)-1, (int)27328);
		@@@var_0_object:AddReply((int)528864, (int)-1, (int)30286);
		goto Label_1212;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x47e";
	}
Label_1212:
	var_447_bool = 0;
	func_3018(var_447_bool);
	if(var_447_bool != 0) {

	Label_1216:
		lshWaitForAnimEnd();
		var_448_string = var_3_string;
		if(var_448_string != 0) {
		} else {
			var_449_string = "";
			var_449_string = var_2_object;
			func_2849(var_449_string);
			goto Label_1216;
	}
		PlayAnimation("all", "idle");

	Label_1231:
		WaitForAnimEnd();
		var_452_string = var_3_string;
		if(var_452_string != 0) {
			goto Label_1241;
		}
		PlayAnimation("all", "idle");
		goto Label_1231;
	}
	goto Label_1241;
	
Label_1241:
	return 0;
	
}


func_3200(var_426_bool)
{
	var_428_int = 0; var_429_string = "";
	func_2918(var_428_int, "k6q01");
	var_431_bool = var_428_int == (int)2;
	if(var_431_bool != 0) {
		var_426_bool = 1;
		return 0;
	}
	var_426_bool = 0;
	return 0;
}


func_2693()
{
	var_272_bool = 0; var_273_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_275_bool = 0;
	func_3018(var_275_bool);
	if(var_275_bool != 0) {
	} else {
		HasAnimationTrack(var_273_bool, "head");
		var_277_bool = var_273_bool;
		if(var_277_bool == 0) goto Label_2710;
		UnlookAsync("head");
	}
Label_2710:
	return 2;
	
}


func_394(var_2_object, var_315_string)
{
	var_316_bool = 0;
	func_3018(var_316_bool);
	var_317_bool = var_316_bool == 0; //@nz
	if(var_317_bool != 0) {
		return 0;
	}
	var_318_bool = var_315_string == var_2_object;
	if(var_318_bool != 0) {
		return 0;
	}
	var_319_string = ""; var_320_bool = 0;
	var_315_string = var_319_string;
	var_322_bool = var_315_string == "";
	if(var_322_bool != 0) {
		var_320_bool = 0;
	} else {
		var_320_bool = 1;
	}
	func_2865(var_319_string, var_320_bool);
	var_2_object = var_315_string;
	return 0;
	
}


func_139(var_2_object, var_228_string)
{
	var_229_bool = 0;
	func_3018(var_229_bool);
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
	func_2865(var_232_string, var_233_bool);
	var_2_object = var_228_string;
	return 0;
	
}


func_3212(var_432_bool)
{
	var_434_int = 0; var_435_string = "";
	func_2918(var_434_int, "ook6Eva2");
	var_437_bool = var_434_int == (int)0;
	if(var_437_bool != 0) {
		var_432_bool = 1;
		return 0;
	}
	var_432_bool = 0;
	return 0;
}


func_2954(var_82_bool, var_83_string, var_84_string)
{
	var_85_object = Obj(); var_86_object = Obj();
	FindActor(var_86_object, var_83_string);
	var_87_bool = var_86_object == 0; //@ne
	if(var_87_bool != 0) {
		var_82_bool = 0;
		return 2;
	}
	Trigger(var_86_object, var_84_string);
	var_82_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2966(var_129_float)
{
	var_130_float = 0; var_131_float = 0;
	GetGameTime(var_131_float);
	var_131_float = var_129_float;
	return 2;
}


func_2711(var_126_bool, var_127_object)
{
	var_131_int = 0; var_132_int = 0; var_133_int = 0; var_134_int = 0;
	GetVariable("voice_common", var_133_int);
	var_136_int = var_133_int;
	if(var_136_int != 0) {
		var_137_bool = 0; var_138_object = Obj();
		var_127_object = var_138_object;
		func_2769(var_137_bool, var_138_object);
		var_167_bool = var_137_bool == 0; //@nz
		if(var_167_bool != 0) {
			var_168_bool = 0; var_169_object = Obj();
			var_127_object = var_169_object;
			func_2806(var_168_bool, var_169_object);
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
		func_2806(var_213_bool, var_214_object);
		var_215_bool = var_213_bool == 0; //@nz
		if(var_215_bool != 0) {
			var_216_bool = 0; var_217_object = Obj();
			var_127_object = var_217_object;
			func_2769(var_216_bool, var_217_object);
			var_218_bool = var_216_bool == 0; //@nz
			if(var_218_bool != 0) {
				var_126_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2767;
	
Label_2767:
	var_126_bool = 1;
	return 4;
	
}


func_3224(var_500_bool)
{
	var_502_int = 0; var_503_string = "";
	func_2918(var_502_int, "k11q01");
	var_505_bool = var_502_int == (int)1;
	if(var_505_bool != 0) {
		var_500_bool = 1;
		return 0;
	}
	var_500_bool = 0;
	return 0;
}


func_2971(var_181_int)
{
	var_182_float = 0; var_183_float = 0;
	GetGameTime(var_183_float);
	var_185_int = 0;
	var_185_int = var_183_float / (int)24;
	var_181_int = (int)1 + var_185_int;
	return 2;
}


func_1948(var_0_object, var_1_object, var_2_object, var_3_string, var_554_object, var_555_object)
{
	var_0_object = var_555_object;
	var_1_object = var_554_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_561_string = "";
		func_2011(var_555_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_1981;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7a0";
	}
Label_1981:
	var_579_bool = 0;
	func_3018(var_579_bool);
	if(var_579_bool != 0) {

	Label_1985:
		lshWaitForAnimEnd();
		var_580_string = var_3_string;
		if(var_580_string != 0) {
		} else {
			var_581_string = "";
			var_581_string = var_2_object;
			func_2849(var_581_string);
			goto Label_1985;
	}
		PlayAnimation("all", "idle");

	Label_2000:
		WaitForAnimEnd();
		var_584_string = var_3_string;
		if(var_584_string != 0) {
			goto Label_2010;
		}
		PlayAnimation("all", "idle");
		goto Label_2000;
	}
	goto Label_2010;
	
Label_2010:
	return 0;
	
}


func_2207(var_0_object, var_1_object, var_2_object, var_3_string, var_613_object, var_614_object)
{
	var_0_object = var_614_object;
	var_1_object = var_613_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_620_string = "";
		func_2265(var_614_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_2235;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8a3";
	}
Label_2235:
	var_635_bool = 0;
	func_3018(var_635_bool);
	if(var_635_bool != 0) {

	Label_2239:
		lshWaitForAnimEnd();
		var_636_string = var_3_string;
		if(var_636_string != 0) {
		} else {
			var_637_string = "";
			var_637_string = var_2_object;
			func_2849(var_637_string);
			goto Label_2239;
	}
		PlayAnimation("all", "idle");

	Label_2254:
		WaitForAnimEnd();
		var_640_string = var_3_string;
		if(var_640_string != 0) {
			goto Label_2264;
		}
		PlayAnimation("all", "idle");
		goto Label_2254;
	}
	goto Label_2264;
	
Label_2264:
	return 0;
	
}


func_3236(var_506_bool)
{
	var_508_int = 0; var_509_string = "";
	func_2918(var_508_int, "ook11Eva1");
	var_511_bool = var_508_int == (int)0;
	if(var_511_bool != 0) {
		var_506_bool = 1;
		return 0;
	}
	var_506_bool = 0;
	return 0;
}


func_1701(var_2_object, var_490_string)
{
	var_491_bool = 0;
	func_3018(var_491_bool);
	var_492_bool = var_491_bool == 0; //@nz
	if(var_492_bool != 0) {
		return 0;
	}
	var_493_bool = var_490_string == var_2_object;
	if(var_493_bool != 0) {
		return 0;
	}
	var_494_string = ""; var_495_bool = 0;
	var_490_string = var_494_string;
	var_497_bool = var_490_string == "";
	if(var_497_bool != 0) {
		var_495_bool = 0;
	} else {
		var_495_bool = 1;
	}
	func_2865(var_494_string, var_495_bool);
	var_2_object = var_490_string;
	return 0;
	
}


func_2980(var_281_bool, var_282_int)
{
	var_283_int = 0;
	func_2971(var_283_int);
	var_281_bool = var_283_int == var_282_int;
	return 0;
}


func_2986(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = "";
	var_59_int = var_56_int;
	if(var_59_int != 0) {
		"idle" = "idle" + var_56_int;
	}
	var_58_string = var_55_string;
	return 2;
}


func_3248()
{
	var_45_object = Obj(); var_46_object = Obj();
	CreateDiaryEntry(var_46_object, (int)482, (int)1, (int)528049);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_46_object = var_51_object;
	func_3326(var_50_bool, var_51_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2993(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_52_int = 0;
	
Label_2995:
	var_55_string = ""; var_56_int = 0;
	var_52_int = var_56_int;
	func_2986(var_55_string, var_56_int);
	HasAnimation(var_53_bool, "all", var_55_string);
	var_60_bool = var_53_bool == 0; //@nz
	if(var_60_bool != 0) {
	} else {
		var_52_int = var_52_int + (int)1;
		goto Label_2995;
	}
	var_52_int = var_49_int;
	return 4;
	
}


func_3261()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)787, (int)2, (int)542506);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_3326(var_87_bool, var_88_object, (int)344);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3010(var_114_int)
{
	var_114_int = 515533;
	return 0;
}


func_3012(var_113_int)
{
	var_113_int = 502858;
	return 0;
}


func_3014(var_115_string)
{
	var_115_string = "ui/NPC_Eva.png";
	return 0;
}


func_3016(var_116_string)
{
	var_116_string = "ui/NPC_Eva_b.png";
	return 0;
}


func_3274()
{
	var_41_object = Obj(); var_42_object = Obj();
	CreateDiaryEntry(var_42_object, (int)347, (int)2, (int)525569);
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0;
	var_42_object = var_47_object;
	func_3326(var_46_bool, var_47_object, (int)344);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3018(var_108_bool)
{
	var_108_bool = 1;
	return 0;
}


func_3020()
{
	var_116_object = Obj(); var_117_object = Obj();
	func_3354(Obj());
	var_118_object = var_117_object;
	var_129_float = 0;
	func_2966(var_129_float);
	@@var_117_object:AddMark("k3q03EvaGotoSklad", "pt_region01_center01", (int)0, (int)525574, var_129_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2509()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0;
	WaitForAnimEnd();
	var_47_bool = 0;
	func_2619(var_47_bool);
	var_48_bool = var_47_bool == 0; //@nz
	if(var_48_bool != 0) {
		return 12;
	}
	func_2993((int)0);
	var_49_int = var_41_int;
	var_42_int = 0;
	
Label_2523:
	var_62_bool = 0;
	var_62_bool = 0;
	var_64_bool = var_42_int < (int)5;
	if(var_64_bool != 0) {
		var_65_bool = 0;
		func_2619(var_65_bool);
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
				func_2986(var_76_string, var_77_int);
				PlayAnimation("all", var_76_string);
				WaitForAnimEnd(var_46_bool);
				var_78_bool = var_46_bool == 0; //@nz
				if(var_78_bool == 0) goto Label_2564;
				goto Label_2575;
		}
		Label_2564:
			var_69_bool = 0;
			func_2578(var_69_bool);
			var_70_bool = var_69_bool == 0; //@nz
			if(var_70_bool != 0) {
				goto Label_2575;
			}
			ResetAAS();
			var_42_int = var_42_int + (int)1;
			goto Label_2523;

		}
	}
Label_2575:
	ResetAAS();
	return 12;
	
}


func_2769(var_137_bool, var_138_object)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = "";
	var_144_string = "c";
	var_145_int = 0;
	
Label_2772:
	if((int)1 != 0) {
		var_151_int = var_145_int + (int)1;
		var_152_int = var_144_string + var_151_int;
		@@var_138_object:HasProperty(var_152_int, var_146_bool);
		var_153_bool = var_146_bool == 0; //@nz
		if(var_153_bool != 0) {
		} else {
			var_145_int = var_145_int + (int)1;
			goto Label_2772;
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
	func_2880(var_160_bool, var_161_string);
	var_160_bool = var_137_bool;
	return 10;
	
}


func_3287()
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateDiaryEntry(var_101_object, (int)352, (int)2, (int)525618);
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0;
	var_101_object = var_106_object;
	func_3326(var_105_bool, var_106_object, (int)350);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2265(var_2_object, var_620_string)
{
	var_621_bool = 0;
	func_3018(var_621_bool);
	var_622_bool = var_621_bool == 0; //@nz
	if(var_622_bool != 0) {
		return 0;
	}
	var_623_bool = var_620_string == var_2_object;
	if(var_623_bool != 0) {
		return 0;
	}
	var_624_string = ""; var_625_bool = 0;
	var_620_string = var_624_string;
	var_627_bool = var_620_string == "";
	if(var_627_bool != 0) {
		var_625_bool = 0;
	} else {
		var_625_bool = 1;
	}
	func_2865(var_624_string, var_625_bool);
	var_2_object = var_620_string;
	return 0;
	
}


func_1242(var_2_object, var_400_string)
{
	var_401_bool = 0;
	func_3018(var_401_bool);
	var_402_bool = var_401_bool == 0; //@nz
	if(var_402_bool != 0) {
		return 0;
	}
	var_403_bool = var_400_string == var_2_object;
	if(var_403_bool != 0) {
		return 0;
	}
	var_404_string = ""; var_405_bool = 0;
	var_400_string = var_404_string;
	var_407_bool = var_400_string == "";
	if(var_407_bool != 0) {
		var_405_bool = 0;
	} else {
		var_405_bool = 1;
	}
	func_2865(var_404_string, var_405_bool);
	var_2_object = var_400_string;
	return 0;
	
}


func_2011(var_2_object, var_561_string)
{
	var_562_bool = 0;
	func_3018(var_562_bool);
	var_563_bool = var_562_bool == 0; //@nz
	if(var_563_bool != 0) {
		return 0;
	}
	var_564_bool = var_561_string == var_2_object;
	if(var_564_bool != 0) {
		return 0;
	}
	var_565_string = ""; var_566_bool = 0;
	var_561_string = var_565_string;
	var_568_bool = var_561_string == "";
	if(var_568_bool != 0) {
		var_566_bool = 0;
	} else {
		var_566_bool = 1;
	}
	func_2865(var_565_string, var_566_bool);
	var_2_object = var_561_string;
	return 0;
	
}


func_3036()
{
	SetVariable("k3q02", (int)3);
	func_3274();
	return 0;
}


func_226(var_0_object, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0;
	var_0_object = var_285_object;
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0;
	var_285_object = var_296_object;
	func_2624(var_295_bool, var_296_object, (float)70.0);
	var_298_bool = var_295_bool == 0; //@nz
	if(var_298_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	CreateDialog(var_291_object);
	var_299_int = 0;
	func_3012(var_299_int);
	@@var_291_object:SetNPCName(var_299_int);
	var_300_int = 0;
	func_3010(var_300_int);
	@@var_291_object:SetNPCDescription(var_300_int);
	var_301_string = "";
	func_3014(var_301_string);
	@@var_291_object:SetPhoto(var_301_string);
	var_302_string = "";
	func_3016(var_302_string);
	@@var_291_object:SetPhoto2(var_302_string);
	var_303_int = 0;
	func_3404(var_303_int);
	@@var_291_object:SetPlayerName(var_303_int);
	IsOverrideActive(var_292_bool);
	var_304_bool = var_292_bool;
	if(var_304_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	DoDialog(var_291_object);
	var_305_bool = 0; var_306_object = Obj();
	func_2902(Obj());
	var_307_object = var_306_object;
	func_2711(var_305_bool, var_306_object);
	var_308_object = Obj(); var_309_object = Obj();
	var_285_object = var_308_object;
	var_291_object = var_309_object;
	TaskCall(3);
	func_307(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object);
	TaskReturn();
	@@var_291_object:IsDialogEnd(var_294_bool);
	
Label_289:
	var_365_bool = var_294_bool == 0; //@nz
	if(var_365_bool != 0) {
		sync();
		@@var_291_object:IsDialogEnd(var_294_bool);
		goto Label_289;
	}
	var_285_object = Obj();
	func_2693();
	StopDialog(var_291_object);
	@@var_291_object:GetReturnValue((int)-1);
	var_293_int = var_284_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3300()
{
	var_45_object = Obj(); var_46_object = Obj();
	CreateDiaryEntry(var_46_object, (int)410, (int)1, (int)526111);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_46_object = var_51_object;
	func_3326(var_50_bool, var_51_object, (int)408);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3045()
{
	SetVariable("ook3Eva1", (int)1);
	return 0;
}


func_3051()
{
	func_3287();
	return 0;
}


func_3056()
{
	SetVariable("ook6Eva1", (int)1);
	return 0;
}


func_3313(var_59_object)
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


func_2806(var_168_bool, var_169_object)
{
	var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = "";
	var_181_int = 0;
	func_2971(var_181_int);
	var_187_int = "d" + var_181_int;
	var_175_string = var_187_int + "m";
	var_176_int = 0;
	
Label_2815:
	if((int)1 != 0) {
		var_191_int = var_176_int + (int)1;
		var_192_int = var_175_string + var_191_int;
		@@var_169_object:HasProperty(var_192_int, var_177_bool);
		var_193_bool = var_177_bool == 0; //@nz
		if(var_193_bool != 0) {
		} else {
			var_176_int = var_176_int + (int)1;
			goto Label_2815;
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
	func_2880(var_200_bool, var_201_string);
	var_200_bool = var_168_bool;
	return 10;
	
}


func_3062()
{
	SetVariable("ook6Eva2", (int)1);
	return 0;
}


func_3068(var_80_object)
{
	@@var_80_object:SelectWeapon();
	var_82_bool = 0; var_83_string = ""; var_84_string = "";
	func_2954(var_82_bool, "quest_k6_01", "unlock_eva");
	return 0;
}


func_3326(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	func_3313(Obj());
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


